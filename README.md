# 🏥 Wearable Stress Detection Device using ECG & HRV

This project is a **wearable device** for detecting **suspect stress levels** using **ECG (Electrocardiogram) signals** and **HRV (Heart Rate Variability) analysis**. The system classifies stress levels using a **Random Forest model** and provides alerts via a **buzzer**.

---

## 📌 Project Overview
- ✅ **Technology Used:** ESP32, ECG Sensor (AD8232), Machine Learning (Random Forest)
- 🔍 **Data Processing:**
  - **ECG signal acquisition** (via AD8232)
  - **HRV feature extraction** (MeanRR, MaxRR, MinRR, MedianRR, MRSSD, SDNN)
  - **Stress classification** (Normal, Mild Stress, Severe Stress)
- 📡 **Notification System:**
  - Uses a **buzzer** to alert different stress levels.
  - **Mild Stress**: Short beeps.
  - **Severe Stress**: Continuous beeping.
- ⏳ **Efficiency:**
  - Uses an **optimized windowing technique** (3000 samples, 500 overlap)
  - **Task-based processing** to minimize delays.

---

## 🛠️ Hardware Components
| Component               | Description                            |
|-------------------------|----------------------------------|
| **ESP32**              | Microcontroller for data processing  |
| **AD8232 ECG Sensor**  | Captures heart signals (ECG)  |
| **Buzzer**             | Provides stress level alerts  |

---

## 🔄 System Workflow
1️⃣ **ESP32 reads ECG data from AD8232**.  

2️⃣ **Peak detection algorithm** identifies **R-R intervals**.  

3️⃣ **HRV features are extracted** from the R-R intervals.  

4️⃣ **Random Forest model classifies stress levels** (Normal, Mild, Severe).  

5️⃣ **Buzzer alert activates** based on detected stress level.  

---

## 📊 Dataset Information
- **Type:** Primary dataset (collected personally).
- **Availability:** Due to privacy concerns, the dataset cannot be publicly shared.
