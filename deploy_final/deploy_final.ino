#include "model.h"

Eloquent::ML::Port::RandomForest model;

const int ecgPin = 34;
const int loPlusPin = 23;
const int loMinusPin = 32;
const int buzzerPin = 25;
const int samplingRate = 100;
const int windowSize = 3000;
const int overlapStep = 500;
int ecgBuffer[windowSize];
int bufferIndex = 0;
int sampleCount = 0;
float meanRR, maxRR, minRR, medianRR, mrssd, sdnn;

volatile int stressPrediction = -1;

bool isPeak(int value, int threshold) {
    return value > threshold;
}

void Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void extractHRVFeatures(int rrIntervals[], int count) {
    if (count == 0) return;

    float sum = 0, sumSq = 0;
    int minRRValue = 10000, maxRRValue = 0;

    for (int i = 0; i < count; i++) {
        sum += rrIntervals[i];
        sumSq += rrIntervals[i] * rrIntervals[i];
        if (rrIntervals[i] > maxRRValue) maxRRValue = rrIntervals[i];
        if (rrIntervals[i] < minRRValue) minRRValue = rrIntervals[i];
    }

    meanRR = sum / count;
    maxRR = maxRRValue;
    minRR = minRRValue;
    sdnn = sqrt((sumSq / count - meanRR * meanRR) * (count / (count - 1)));

    Sort(rrIntervals, count);
    if (count % 2 == 0) {
        medianRR = (rrIntervals[count / 2 - 1] + rrIntervals[count / 2]) / 2.0;
    } else {
        medianRR = rrIntervals[count / 2];
    }

    mrssd = 0;
    for (int i = 1; i < count; i++) {
        float diff = rrIntervals[i] - rrIntervals[i - 1];
        mrssd += diff * diff;
    }
    mrssd = sqrt(mrssd / (count - 1));
}

void predictStress() {
    float features[] = {meanRR, sdnn, mrssd, medianRR, minRR, maxRR};
    int prediction = model.predict(features);

    stressPrediction = prediction;

    Serial.println("HRV Features:");
    Serial.print("MeanRR: "); Serial.println(meanRR);
    Serial.print("MaxRR: "); Serial.println(maxRR);
    Serial.print("MinRR: "); Serial.println(minRR);
    Serial.print("MedianRR: "); Serial.println(medianRR);
    Serial.print("MRSSD: "); Serial.println(mrssd);
    Serial.print("SDNN: "); Serial.println(sdnn);
    Serial.print("Prediction: ");
    if (prediction == 0) {
        Serial.println("Normal");
    } else if (prediction == 1) {
        Serial.println("Stres Ringan");
    } else if (prediction == 2) {
        Serial.println("Stres Berat");
    } else {
        Serial.println("Unknown Class.");
    }
}

void buzzerTask(void *parameter) {
    while (true) {
        switch (stressPrediction) {
            case 0: 
                digitalWrite(buzzerPin, LOW); 
                break;
            case 1: 
                digitalWrite(buzzerPin, HIGH);
                delay(200); 
                digitalWrite(buzzerPin, LOW);
                delay(800); 
                break;
            case 2: 
                digitalWrite(buzzerPin, HIGH);
                delay(200); 
                digitalWrite(buzzerPin, LOW);
                delay(200); 
                break;
            default:
                digitalWrite(buzzerPin, LOW); 
                break;
        }
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}

void setup() {
    Serial.begin(115200);
    pinMode(ecgPin, INPUT);
    pinMode(loPlusPin, INPUT);
    pinMode(loMinusPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
    digitalWrite(buzzerPin, LOW);

    xTaskCreatePinnedToCore(
        buzzerTask,
        "Buzzer Task",
        1000,
        NULL,
        1,
        NULL,
        0
    );
}

void loop() {
    int loPlusStatus = digitalRead(loPlusPin);
    int loMinusStatus = digitalRead(loMinusPin);

    if (loPlusStatus == 1 || loMinusStatus == 1) {
        Serial.println("Lead Off Detected! Please check electrodes.");
        delay(100);
        return;
    }

    int ecgValue = analogRead(ecgPin);
    ecgBuffer[bufferIndex] = ecgValue;
    bufferIndex = (bufferIndex + 1) % windowSize;
    sampleCount++;

    if (sampleCount >= overlapStep) {
        sampleCount = 0;

        int rrIntervals[300];
        int rrCount = 0;
        int lastPeakIndexInWindow = -1;

        int startIndex = (bufferIndex - 1 + windowSize) % windowSize;
        int endIndex = bufferIndex;

        for (int i = startIndex; i != endIndex; i = (i + 1) % windowSize) {
            if (isPeak(ecgBuffer[i], 4000) && (ecgBuffer[i] >= ecgBuffer[(i - 1 + windowSize) % windowSize] && ecgBuffer[i] > ecgBuffer[(i + 1) % windowSize])) {
                if (lastPeakIndexInWindow >= 0) {
                    int rrInterval = ((i - lastPeakIndexInWindow + windowSize) % windowSize) * 10;
                    rrIntervals[rrCount++] = rrInterval;
                }
                lastPeakIndexInWindow = i;
            }
        }

        if (rrCount > 0) {
            extractHRVFeatures(rrIntervals, rrCount);
            predictStress();
        }
    }
    delay(10);
}
