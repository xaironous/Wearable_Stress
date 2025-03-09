#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[0] <= 484.51220703125) {
                            if (x[1] <= 18.20659065246582) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 495.0) {
                                if (x[2] <= 9.84710693359375) {
                                    if (x[5] <= 530.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 9.840338706970215) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 502.6978454589844) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= 1265.0) {
                                        if (x[1] <= 147.9870376586914) {
                                            if (x[0] <= 826.9407653808594) {
                                                if (x[5] <= 895.0) {
                                                    if (x[4] <= 380.0) {
                                                        if (x[5] <= 740.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 28.20342254638672) {
                                                            if (x[1] <= 38.373626708984375) {
                                                                if (x[2] <= 23.015271186828613) {
                                                                    if (x[1] <= 17.804587364196777) {
                                                                        if (x[4] <= 525.0) {
                                                                            if (x[5] <= 605.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 645.0) {
                                                                                if (x[4] <= 535.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 676.6199951171875) {
                                                                            if (x[1] <= 33.17749786376953) {
                                                                                if (x[4] <= 495.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 705.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 688.173095703125) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 718.55419921875) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= 715.0) {
                                                                        if (x[1] <= 34.937875747680664) {
                                                                            if (x[1] <= 33.02209281921387) {
                                                                                if (x[1] <= 29.189480781555176) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 23.310178756713867) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 35.079952239990234) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 495.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 725.0) {
                                                                            if (x[5] <= 820.0) {
                                                                                if (x[2] <= 25.056638717651367) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 33.327117919921875) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 32.869224548339844) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 635.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[3] <= 535.0) {
                                                                    if (x[3] <= 525.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 537.5223999023438) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[4] <= 605.0) {
                                                                        if (x[3] <= 685.0) {
                                                                            if (x[2] <= 25.153249740600586) {
                                                                                if (x[4] <= 495.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 666.2024841308594) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 712.1871948242188) {
                                                                                if (x[5] <= 815.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 845.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 688.9615173339844) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 39.164817810058594) {
                                                                                if (x[0] <= 708.0028076171875) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[3] <= 705.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[5] <= 815.0) {
                                                                if (x[1] <= 55.28283500671387) {
                                                                    if (x[2] <= 28.995354652404785) {
                                                                        if (x[0] <= 588.4778442382812) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 570.0) {
                                                                                if (x[1] <= 36.25557518005371) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 600.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 666.3144226074219) {
                                                                            if (x[0] <= 661.9259033203125) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[5] <= 805.0) {
                                                                        if (x[2] <= 31.087116241455078) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 59.20438575744629) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[4] <= 555.0) {
                                                                    if (x[1] <= 72.93669509887695) {
                                                                        if (x[2] <= 30.059619903564453) {
                                                                            if (x[0] <= 658.1128234863281) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 35.25773620605469) {
                                                                                if (x[3] <= 685.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[3] <= 697.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 39.92660140991211) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 44.39594268798828) {
                                                                        if (x[3] <= 737.5) {
                                                                            if (x[4] <= 575.0) {
                                                                                if (x[3] <= 695.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[3] <= 675.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 865.0) {
                                                                                if (x[5] <= 845.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 655.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 772.8947448730469) {
                                                                            if (x[1] <= 55.50173568725586) {
                                                                                if (x[0] <= 759.6821899414062) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 740.5186767578125) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 630.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 885.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 42.60918617248535) {
                                                        if (x[0] <= 699.4536743164062) {
                                                            if (x[5] <= 910.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 39.36614990234375) {
                                                                    if (x[1] <= 91.57406234741211) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 675.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[5] <= 925.0) {
                                                                if (x[1] <= 45.31648826599121) {
                                                                    if (x[4] <= 650.0) {
                                                                        if (x[5] <= 910.0) {
                                                                            if (x[2] <= 28.52808380126953) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 34.10756301879883) {
                                                                        if (x[4] <= 605.0) {
                                                                            if (x[0] <= 722.3616638183594) {
                                                                                if (x[3] <= 715.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[5] <= 915.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 41.80915641784668) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 746.7363891601562) {
                                                                    if (x[1] <= 62.70829200744629) {
                                                                        if (x[2] <= 37.619211196899414) {
                                                                            if (x[4] <= 630.0) {
                                                                                if (x[4] <= 575.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 732.5204772949219) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 975.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[5] <= 975.0) {
                                                                        if (x[4] <= 615.0) {
                                                                            if (x[1] <= 69.78586196899414) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 935.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 640.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[5] <= 995.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 747.2384948730469) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 60.279937744140625) {
                                                            if (x[2] <= 65.27090072631836) {
                                                                if (x[5] <= 990.0) {
                                                                    if (x[5] <= 970.0) {
                                                                        if (x[5] <= 955.0) {
                                                                            if (x[0] <= 770.9614562988281) {
                                                                                if (x[3] <= 745.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 49.00033378601074) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[5] <= 1025.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 664.3421020507812) {
                                                                            if (x[5] <= 1045.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 555.0) {
                                                                if (x[5] <= 1055.0) {
                                                                    if (x[5] <= 1035.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 45.332963943481445) {
                                                                    if (x[2] <= 43.183311462402344) {
                                                                        if (x[0] <= 748.7916564941406) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 49.9125862121582) {
                                                                        if (x[0] <= 779.018798828125) {
                                                                            if (x[5] <= 1060.0) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 1015.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 45.65134620666504) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 795.0) {
                                                                            if (x[5] <= 1140.0) {
                                                                                if (x[4] <= 620.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 1220.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 565.0) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 1155.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 130.6152801513672) {
                                                    if (x[0] <= 922.1134033203125) {
                                                        if (x[0] <= 917.7179260253906) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 655.0) {
                                                                if (x[5] <= 1170.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 932.5) {
                                                            if (x[0] <= 926.3730773925781) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 926.8134765625) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 942.5) {
                                                        if (x[3] <= 937.5) {
                                                            if (x[3] <= 892.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 129.86042022705078) {
                                            if (x[2] <= 119.68971252441406) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[2] <= 9.497952938079834) {
                            if (x[4] <= 445.0) {
                                if (x[1] <= 14.651661396026611) {
                                    if (x[3] <= 485.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 17.215283393859863) {
                                if (x[2] <= 11.193475723266602) {
                                    if (x[2] <= 9.669914722442627) {
                                        if (x[1] <= 15.56845235824585) {
                                            if (x[4] <= 530.0) {
                                                if (x[4] <= 480.0) {
                                                    if (x[1] <= 15.33478307723999) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 529.8148498535156) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 435.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 615.0) {
                                                if (x[0] <= 483.47715759277344) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 495.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 570.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 560.5642700195312) {
                                                                if (x[1] <= 13.44666051864624) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 10.881501197814941) {
                                                                    if (x[0] <= 566.6532287597656) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 566.1927490234375) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 535.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 537.1414642333984) {
                                        if (x[5] <= 535.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 495.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 585.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 652.5) {
                                    if (x[2] <= 31.014631271362305) {
                                        if (x[1] <= 24.118322372436523) {
                                            if (x[3] <= 490.0) {
                                                if (x[2] <= 11.78139066696167) {
                                                    if (x[2] <= 11.26978588104248) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 477.21270751953125) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 613.5423583984375) {
                                                    if (x[4] <= 505.0) {
                                                        if (x[2] <= 12.580238342285156) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 572.6996765136719) {
                                                                if (x[2] <= 13.469085693359375) {
                                                                    if (x[4] <= 490.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[4] <= 490.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 12.426254749298096) {
                                                            if (x[4] <= 515.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 14.816393375396729) {
                                                        if (x[2] <= 13.350738525390625) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 632.7528991699219) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 652.6782836914062) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 20.563979148864746) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 653.7545776367188) {
                                                                    if (x[0] <= 653.1628723144531) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 643.7295532226562) {
                                                if (x[1] <= 37.777923583984375) {
                                                    if (x[4] <= 555.0) {
                                                        if (x[0] <= 573.701904296875) {
                                                            if (x[1] <= 26.675981521606445) {
                                                                if (x[3] <= 567.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[4] <= 505.0) {
                                                                        if (x[1] <= 25.660178184509277) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 19.813579559326172) {
                                                                    if (x[0] <= 571.0543212890625) {
                                                                        if (x[4] <= 495.0) {
                                                                            if (x[3] <= 565.0) {
                                                                                if (x[0] <= 564.6214599609375) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 29.089362144470215) {
                                                                                if (x[3] <= 565.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 569.1586303710938) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[4] <= 505.0) {
                                                                            if (x[2] <= 16.931018829345703) {
                                                                                if (x[1] <= 30.914822578430176) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 24.840946197509766) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 595.0) {
                                                                if (x[5] <= 765.0) {
                                                                    if (x[0] <= 592.5) {
                                                                        if (x[5] <= 740.0) {
                                                                            if (x[4] <= 480.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 15.118564128875732) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 22.030630111694336) {
                                                                            if (x[5] <= 715.0) {
                                                                                if (x[0] <= 593.3278198242188) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 636.3427734375) {
                                                                    if (x[2] <= 14.50803804397583) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 603.790771484375) {
                                                                            if (x[5] <= 700.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 600.486572265625) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[5] <= 780.0) {
                                                            if (x[3] <= 625.0) {
                                                                if (x[5] <= 685.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 32.690860748291016) {
                                                                    if (x[2] <= 13.790035247802734) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 632.5) {
                                                                            if (x[5] <= 725.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 31.213383674621582) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 710.0) {
                                                                                if (x[1] <= 24.93505859375) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 27.79989719390869) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 34.6048641204834) {
                                                                        if (x[1] <= 33.44632339477539) {
                                                                            if (x[0] <= 635.2415466308594) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 584.2088623046875) {
                                                        if (x[3] <= 552.5) {
                                                            if (x[4] <= 455.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[4] <= 475.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 23.859972953796387) {
                                                                if (x[2] <= 21.894652366638184) {
                                                                    if (x[5] <= 710.0) {
                                                                        if (x[0] <= 566.0601196289062) {
                                                                            if (x[1] <= 40.59646987915039) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[3] <= 575.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 19.525893211364746) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 21.084596633911133) {
                                                                            if (x[4] <= 495.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 770.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 45.52143859863281) {
                                                                    if (x[4] <= 485.0) {
                                                                        if (x[3] <= 565.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[4] <= 495.0) {
                                                                            if (x[2] <= 27.956951141357422) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 581.8248291015625) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 28.936351776123047) {
                                                            if (x[5] <= 740.0) {
                                                                if (x[2] <= 24.47460651397705) {
                                                                    if (x[1] <= 42.3311882019043) {
                                                                        if (x[0] <= 587.9000244140625) {
                                                                            if (x[1] <= 41.26543617248535) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 23.215620040893555) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[3] <= 610.0) {
                                                                    if (x[2] <= 26.445462226867676) {
                                                                        if (x[2] <= 23.23660182952881) {
                                                                            if (x[0] <= 590.4290466308594) {
                                                                                if (x[0] <= 586.5115356445312) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 595.7574157714844) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 22.84532070159912) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 535.0) {
                                                                if (x[0] <= 634.290771484375) {
                                                                    if (x[3] <= 610.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 18.07817840576172) {
                                                    if (x[3] <= 642.5) {
                                                        if (x[5] <= 775.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 750.0) {
                                                        if (x[5] <= 725.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 67.78133010864258) {
                                                            if (x[2] <= 30.746037483215332) {
                                                                if (x[5] <= 815.0) {
                                                                    if (x[4] <= 595.0) {
                                                                        if (x[1] <= 28.13772201538086) {
                                                                            if (x[5] <= 780.0) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 23.509299278259277) {
                                                                                if (x[4] <= 555.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 26.991984367370605) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[5] <= 825.0) {
                                                                        if (x[0] <= 653.2037963867188) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 30.823315620422363) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 390.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 71.17132186889648) {
                                                if (x[5] <= 805.0) {
                                                    if (x[1] <= 54.28126525878906) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 635.0) {
                                                        if (x[4] <= 425.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 632.0692443847656) {
                                                                if (x[4] <= 510.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 647.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 61.84071731567383) {
                                                                if (x[2] <= 33.336830139160156) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 154.15540313720703) {
                                        if (x[2] <= 18.041361808776855) {
                                            if (x[0] <= 675.9216003417969) {
                                                if (x[4] <= 590.0) {
                                                    if (x[5] <= 750.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 1150.0) {
                                                if (x[0] <= 776.6811828613281) {
                                                    if (x[0] <= 693.2364196777344) {
                                                        if (x[4] <= 555.0) {
                                                            if (x[2] <= 29.004094123840332) {
                                                                if (x[1] <= 43.37713050842285) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 46.38990020751953) {
                                                                    if (x[5] <= 885.0) {
                                                                        if (x[2] <= 30.848588943481445) {
                                                                            if (x[2] <= 30.20097827911377) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 535.0) {
                                                                                if (x[2] <= 34.36435890197754) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 662.5) {
                                                                            if (x[0] <= 674.9056396484375) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 545.0) {
                                                                                if (x[5] <= 905.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 690.0874328613281) {
                                                                        if (x[2] <= 52.39124870300293) {
                                                                            if (x[5] <= 1055.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 595.0) {
                                                                if (x[5] <= 870.0) {
                                                                    if (x[1] <= 32.4570426940918) {
                                                                        if (x[0] <= 667.2947692871094) {
                                                                            if (x[3] <= 665.0) {
                                                                                if (x[0] <= 660.7100830078125) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[4] <= 575.0) {
                                                                            if (x[1] <= 51.994300842285156) {
                                                                                if (x[5] <= 815.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 845.0) {
                                                                                if (x[5] <= 825.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[3] <= 675.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= 665.0) {
                                                                        if (x[1] <= 61.42143249511719) {
                                                                            if (x[4] <= 565.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 39.34312057495117) {
                                                                            if (x[0] <= 683.6309509277344) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 64.92127990722656) {
                                                                                if (x[2] <= 47.56469917297363) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 670.7505493164062) {
                                                                    if (x[5] <= 840.0) {
                                                                        if (x[0] <= 667.2070922851562) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 667.5372924804688) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 24.174640655517578) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 673.3539428710938) {
                                                                        if (x[5] <= 785.0) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[5] <= 835.0) {
                                                                            if (x[5] <= 825.0) {
                                                                                if (x[4] <= 620.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 605.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 39.00666046142578) {
                                                            if (x[0] <= 719.1549987792969) {
                                                                if (x[3] <= 717.5) {
                                                                    if (x[0] <= 717.8354797363281) {
                                                                        if (x[2] <= 24.006667137145996) {
                                                                            if (x[0] <= 701.9803771972656) {
                                                                                if (x[0] <= 695.2824096679688) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 615.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[3] <= 695.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[4] <= 655.0) {
                                                                        if (x[2] <= 23.063313484191895) {
                                                                            if (x[5] <= 815.0) {
                                                                                if (x[1] <= 34.459638595581055) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 825.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 26.010202407836914) {
                                                                                if (x[0] <= 718.87548828125) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 615.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[5] <= 805.0) {
                                                                    if (x[1] <= 32.07576560974121) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[5] <= 795.0) {
                                                                            if (x[1] <= 32.888511657714844) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 26.942733764648438) {
                                                                        if (x[4] <= 645.0) {
                                                                            if (x[4] <= 635.0) {
                                                                                if (x[0] <= 721.7943420410156) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 820.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 21.550936698913574) {
                                                                                if (x[3] <= 740.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[4] <= 625.0) {
                                                                            if (x[3] <= 735.0) {
                                                                                if (x[1] <= 34.19263458251953) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 38.19649124145508) {
                                                                                if (x[1] <= 33.012428283691406) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 34.45583915710449) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 605.0) {
                                                                if (x[4] <= 595.0) {
                                                                    if (x[5] <= 895.0) {
                                                                        if (x[2] <= 41.464895248413086) {
                                                                            if (x[5] <= 825.0) {
                                                                                if (x[1] <= 41.59462356567383) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 24.284329414367676) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 74.54982376098633) {
                                                                            if (x[5] <= 905.0) {
                                                                                if (x[3] <= 730.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 45.726144790649414) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 925.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= 735.0) {
                                                                        if (x[5] <= 865.0) {
                                                                            if (x[1] <= 47.587717056274414) {
                                                                                if (x[1] <= 40.000497817993164) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 719.7596740722656) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[3] <= 725.0) {
                                                                                if (x[3] <= 705.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 747.3822021484375) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 48.68140888214111) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 29.390542030334473) {
                                                                    if (x[5] <= 845.0) {
                                                                        if (x[4] <= 615.0) {
                                                                            if (x[1] <= 42.48884582519531) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 719.1578369140625) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[5] <= 955.0) {
                                                                        if (x[5] <= 925.0) {
                                                                            if (x[2] <= 36.81521224975586) {
                                                                                if (x[4] <= 645.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 37.34143257141113) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 747.4527587890625) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 935.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[4] <= 625.0) {
                                                                            if (x[5] <= 1020.0) {
                                                                                if (x[5] <= 975.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 995.0) {
                                                                                if (x[3] <= 757.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 63.067487716674805) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 43.96387481689453) {
                                                        if (x[5] <= 915.0) {
                                                            if (x[2] <= 33.44500160217285) {
                                                                if (x[0] <= 777.7173767089844) {
                                                                    if (x[2] <= 31.98915195465088) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[4] <= 625.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[5] <= 885.0) {
                                                                        if (x[4] <= 650.0) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 635.0) {
                                                            if (x[3] <= 795.0) {
                                                                if (x[5] <= 950.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 795.1020812988281) {
                                                                        if (x[1] <= 94.12041473388672) {
                                                                            if (x[0] <= 787.45458984375) {
                                                                                if (x[0] <= 784.0131530761719) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 62.95787811279297) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 61.53984832763672) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 590.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 92.96611785888672) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[5] <= 1035.0) {
                                                                    if (x[2] <= 59.48300743103027) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 94.1455192565918) {
                                                                            if (x[3] <= 805.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 824.3087463378906) {
                                                                        if (x[0] <= 801.1632995605469) {
                                                                            if (x[4] <= 590.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 807.5791625976562) {
                                                                                if (x[4] <= 590.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 65.69605255126953) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 825.0) {
                                                                            if (x[0] <= 824.9434509277344) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 61.65562629699707) {
                                                                if (x[0] <= 778.7991333007812) {
                                                                    if (x[3] <= 775.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[4] <= 645.0) {
                                                                    if (x[5] <= 1025.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[5] <= 1215.0) {
                                                    if (x[1] <= 120.61091613769531) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 880.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 1195.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 1265.0) {
                                                        if (x[3] <= 870.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 1240.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 133.34471893310547) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[4] <= 650.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 945.0) {
                                                            if (x[1] <= 140.18012237548828) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1045.0) {
                                            if (x[3] <= 895.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 1310.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 999.3296203613281) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[2] <= 9.558412075042725) {
                            if (x[4] <= 445.0) {
                                if (x[1] <= 14.780699729919434) {
                                    if (x[3] <= 485.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[5] <= 1265.0) {
                                if (x[1] <= 147.9870376586914) {
                                    if (x[3] <= 495.0) {
                                        if (x[0] <= 483.73194885253906) {
                                            if (x[5] <= 540.0) {
                                                if (x[0] <= 478.3862762451172) {
                                                    if (x[1] <= 18.18429470062256) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 11.02660846710205) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 9.999858379364014) {
                                                if (x[4] <= 445.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 9.840338706970215) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 491.07078552246094) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 542.5) {
                                            if (x[5] <= 715.0) {
                                                if (x[3] <= 535.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 536.7973022460938) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 544.0685729980469) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[5] <= 615.0) {
                                                if (x[0] <= 559.1913146972656) {
                                                    if (x[3] <= 555.0) {
                                                        if (x[5] <= 595.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 555.2875366210938) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 565.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 11.194869041442871) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[5] <= 1150.0) {
                                                    if (x[2] <= 17.928911209106445) {
                                                        if (x[0] <= 643.6330871582031) {
                                                            if (x[0] <= 603.4518737792969) {
                                                                if (x[0] <= 571.3258666992188) {
                                                                    if (x[2] <= 14.978729248046875) {
                                                                        if (x[5] <= 625.0) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 525.0) {
                                                                                if (x[0] <= 565.8136291503906) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[4] <= 495.0) {
                                                                            if (x[5] <= 675.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 700.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 31.459744453430176) {
                                                                                if (x[0] <= 569.8252868652344) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= 585.0) {
                                                                        if (x[4] <= 515.0) {
                                                                            if (x[1] <= 24.55934238433838) {
                                                                                if (x[0] <= 578.984619140625) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 581.9688720703125) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 11.476690292358398) {
                                                                                if (x[5] <= 635.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[3] <= 575.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[4] <= 565.0) {
                                                                    if (x[1] <= 28.691372871398926) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 625.0) {
                                                                            if (x[1] <= 32.43200874328613) {
                                                                                if (x[5] <= 770.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 635.6484069824219) {
                                                                        if (x[5] <= 725.0) {
                                                                            if (x[1] <= 26.45057487487793) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[3] <= 625.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 14.548685073852539) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 641.0573425292969) {
                                                                            if (x[3] <= 637.5) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 14.713151454925537) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 15.235555171966553) {
                                                                                if (x[4] <= 575.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 615.0) {
                                                                if (x[0] <= 674.18603515625) {
                                                                    if (x[4] <= 605.0) {
                                                                        if (x[2] <= 15.68751573562622) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 29.80220890045166) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 575.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 653.8095092773438) {
                                                                            if (x[0] <= 652.278076171875) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 720.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 365.0) {
                                                            if (x[5] <= 740.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 525.0) {
                                                                if (x[5] <= 685.0) {
                                                                    if (x[3] <= 565.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 576.3935241699219) {
                                                                            if (x[4] <= 485.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[3] <= 575.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 28.882835388183594) {
                                                                                if (x[0] <= 580.7467346191406) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 636.9217224121094) {
                                                                        if (x[1] <= 49.70623970031738) {
                                                                            if (x[4] <= 495.0) {
                                                                                if (x[0] <= 560.9561157226562) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 30.547751426696777) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 770.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 35.15282344818115) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[4] <= 395.0) {
                                                                            if (x[0] <= 670.4491271972656) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 1010.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 485.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 71.9020004272461) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[3] <= 605.0) {
                                                                    if (x[5] <= 785.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= 657.5) {
                                                                        if (x[2] <= 19.07033920288086) {
                                                                            if (x[5] <= 795.0) {
                                                                                if (x[1] <= 26.71781349182129) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 785.0) {
                                                                                if (x[0] <= 652.3357849121094) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 645.1444091796875) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 25.900394439697266) {
                                                                            if (x[2] <= 21.124221801757812) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 650.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 73.49954223632812) {
                                                                                if (x[3] <= 787.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 575.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 670.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 1215.0) {
                                                            if (x[1] <= 120.61091613769531) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 870.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 937.5461120605469) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 131.49341583251953) {
                                                                if (x[3] <= 930.0) {
                                                                    if (x[2] <= 94.64383316040039) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[3] <= 952.5) {
                                                                    if (x[0] <= 936.9245910644531) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 1275.0) {
                                    if (x[0] <= 945.9421081542969) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[3] <= 950.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #4
                        if (x[0] <= 486.0871887207031) {
                            if (x[0] <= 478.8656768798828) {
                                if (x[5] <= 540.0) {
                                    if (x[0] <= 475.7845764160156) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 17.86783790588379) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[5] <= 1265.0) {
                                if (x[3] <= 495.0) {
                                    if (x[0] <= 491.6461181640625) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 10.0136137008667) {
                                            if (x[5] <= 530.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 144.46165466308594) {
                                        if (x[5] <= 570.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 823.3410339355469) {
                                                if (x[2] <= 12.398073673248291) {
                                                    if (x[0] <= 569.5859680175781) {
                                                        if (x[0] <= 561.8049621582031) {
                                                            if (x[1] <= 17.082597255706787) {
                                                                if (x[2] <= 9.858941078186035) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[5] <= 610.0) {
                                                                        if (x[1] <= 12.382077693939209) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 565.0) {
                                                                if (x[2] <= 9.293178081512451) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[2] <= 10.445559978485107) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[5] <= 630.0) {
                                                                    if (x[1] <= 13.497466087341309) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[4] <= 525.0) {
                                                                        if (x[0] <= 566.7879638671875) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 9.958505153656006) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 575.5948486328125) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[5] <= 640.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 365.0) {
                                                        if (x[0] <= 612.635986328125) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[5] <= 805.0) {
                                                            if (x[2] <= 25.39865016937256) {
                                                                if (x[1] <= 24.51259708404541) {
                                                                    if (x[0] <= 610.4584350585938) {
                                                                        if (x[2] <= 12.706441879272461) {
                                                                            if (x[5] <= 640.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 576.3447570800781) {
                                                                                if (x[4] <= 470.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 16.573472023010254) {
                                                                            if (x[0] <= 642.0297241210938) {
                                                                                if (x[3] <= 627.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 745.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 20.049467086791992) {
                                                                                if (x[0] <= 660.5367126464844) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 610.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[4] <= 555.0) {
                                                                        if (x[2] <= 15.486345291137695) {
                                                                            if (x[4] <= 495.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 545.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 495.0) {
                                                                                if (x[4] <= 475.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 675.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 640.1971130371094) {
                                                                            if (x[3] <= 625.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 565.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 675.3018798828125) {
                                                                                if (x[2] <= 23.06227684020996) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 635.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 563.9150695800781) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[4] <= 485.0) {
                                                                        if (x[1] <= 40.68234062194824) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 52.45379447937012) {
                                                                                if (x[2] <= 25.586137771606445) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 635.7718811035156) {
                                                                            if (x[1] <= 37.69013595581055) {
                                                                                if (x[3] <= 600.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 495.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 570.0) {
                                                                                if (x[0] <= 637.2419738769531) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 615.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 19.92471694946289) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[5] <= 895.0) {
                                                                    if (x[2] <= 36.32572364807129) {
                                                                        if (x[1] <= 58.99702262878418) {
                                                                            if (x[2] <= 20.97539710998535) {
                                                                                if (x[4] <= 595.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[3] <= 695.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 535.0) {
                                                                                if (x[2] <= 32.75877380371094) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 30.82447624206543) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[5] <= 885.0) {
                                                                            if (x[1] <= 49.66731262207031) {
                                                                                if (x[3] <= 745.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 36.693864822387695) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[4] <= 555.0) {
                                                                        if (x[2] <= 66.59088516235352) {
                                                                            if (x[5] <= 1055.0) {
                                                                                if (x[2] <= 52.60360527038574) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 510.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 40.95648193359375) {
                                                                            if (x[3] <= 747.5) {
                                                                                if (x[2] <= 29.05229663848877) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 915.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 715.5103149414062) {
                                                                                if (x[5] <= 1030.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 1150.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 130.57589721679688) {
                                                    if (x[1] <= 121.00723266601562) {
                                                        if (x[1] <= 98.71296691894531) {
                                                            if (x[3] <= 825.0) {
                                                                if (x[2] <= 70.41413116455078) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[5] <= 1195.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 930.0) {
                                                                if (x[0] <= 874.0653381347656) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 665.0) {
                                                        if (x[0] <= 961.7760925292969) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 1255.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 980.6921081542969) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #5
                        if (x[0] <= 485.23036193847656) {
                            if (x[1] <= 18.274922370910645) {
                                if (x[2] <= 11.172915935516357) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 17.428625106811523) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[5] <= 1265.0) {
                                if (x[3] <= 495.0) {
                                    if (x[2] <= 9.972404479980469) {
                                        if (x[1] <= 15.03009843826294) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 491.3186798095703) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 505.0) {
                                        if (x[1] <= 38.968990325927734) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 144.6508026123047) {
                                            if (x[5] <= 1150.0) {
                                                if (x[0] <= 778.3441162109375) {
                                                    if (x[0] <= 568.2569580078125) {
                                                        if (x[5] <= 595.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 565.0) {
                                                                if (x[0] <= 561.5855407714844) {
                                                                    if (x[5] <= 605.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 39.740394592285156) {
                                                                            if (x[3] <= 545.0) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 525.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 63.89059257507324) {
                                                                                if (x[1] <= 45.53443908691406) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 562.1036987304688) {
                                                                        if (x[2] <= 17.34145450592041) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[4] <= 525.0) {
                                                                            if (x[4] <= 510.0) {
                                                                                if (x[4] <= 470.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 11.241578102111816) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 12.807339191436768) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 10.431406497955322) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 17.502450942993164) {
                                                                    if (x[2] <= 9.60287857055664) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 17.254673957824707) {
                                                                            if (x[2] <= 10.567086696624756) {
                                                                                if (x[1] <= 12.244291305541992) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 30.22617816925049) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 24.565299034118652) {
                                                            if (x[2] <= 12.343099117279053) {
                                                                if (x[2] <= 10.007135391235352) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 569.4108276367188) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 575.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 640.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 610.4584350585938) {
                                                                    if (x[0] <= 582.8620300292969) {
                                                                        if (x[5] <= 665.0) {
                                                                            if (x[2] <= 12.823248386383057) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 571.6110229492188) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 16.752413749694824) {
                                                                        if (x[3] <= 642.5) {
                                                                            if (x[1] <= 22.15734100341797) {
                                                                                if (x[5] <= 700.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 13.851655960083008) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 605.0) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 750.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[4] <= 585.0) {
                                                                            if (x[3] <= 645.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 659.5401000976562) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 17.603449821472168) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 38.959238052368164) {
                                                                if (x[2] <= 23.015764236450195) {
                                                                    if (x[4] <= 555.0) {
                                                                        if (x[1] <= 30.813064575195312) {
                                                                            if (x[2] <= 15.895327091217041) {
                                                                                if (x[3] <= 575.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 21.170373916625977) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 18.239739418029785) {
                                                                                if (x[3] <= 595.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 510.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 643.3992614746094) {
                                                                            if (x[2] <= 13.87144947052002) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 785.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 18.041361808776855) {
                                                                                if (x[1] <= 25.199542999267578) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 595.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= 717.5) {
                                                                        if (x[1] <= 32.66280937194824) {
                                                                            if (x[3] <= 705.0) {
                                                                                if (x[5] <= 770.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 815.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 380.0) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 25.699596405029297) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 741.1189575195312) {
                                                                            if (x[0] <= 729.0024108886719) {
                                                                                if (x[5] <= 855.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 895.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 865.0) {
                                                                                if (x[2] <= 26.779786109924316) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 28.4281644821167) {
                                                                    if (x[0] <= 723.88037109375) {
                                                                        if (x[2] <= 20.361506462097168) {
                                                                            if (x[1] <= 41.99147605895996) {
                                                                                if (x[0] <= 585.9424438476562) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[5] <= 815.0) {
                                                                                if (x[2] <= 25.700443267822266) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[4] <= 565.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[5] <= 1020.0) {
                                                                        if (x[3] <= 735.0) {
                                                                            if (x[4] <= 595.0) {
                                                                                if (x[2] <= 36.546897888183594) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[3] <= 675.0) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 66.56676483154297) {
                                                                                if (x[4] <= 645.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[5] <= 920.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 52.36218070983887) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 63.99108123779297) {
                                                                                if (x[5] <= 1065.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 44.15884780883789) {
                                                        if (x[5] <= 915.0) {
                                                            if (x[5] <= 905.0) {
                                                                if (x[0] <= 795.4598693847656) {
                                                                    if (x[4] <= 630.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 32.845245361328125) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 645.0) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 93.18435287475586) {
                                                            if (x[3] <= 785.0) {
                                                                if (x[1] <= 60.22452926635742) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 65.35132598876953) {
                                                                        if (x[4] <= 645.0) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 775.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[4] <= 620.0) {
                                                                                if (x[4] <= 605.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[4] <= 630.0) {
                                                                    if (x[4] <= 615.0) {
                                                                        if (x[4] <= 605.0) {
                                                                            if (x[0] <= 801.0824584960938) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 827.3952331542969) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 801.1632995605469) {
                                                                if (x[5] <= 1065.0) {
                                                                    if (x[1] <= 97.09797668457031) {
                                                                        if (x[2] <= 60.27750778198242) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 96.78469848632812) {
                                                                        if (x[3] <= 785.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 68.5953254699707) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 77.01291275024414) {
                                                                    if (x[4] <= 625.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 101.17411804199219) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 137.17115783691406) {
                                                    if (x[2] <= 57.2078914642334) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 73.81039810180664) {
                                                            if (x[4] <= 605.0) {
                                                                if (x[5] <= 1220.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 104.73979949951172) {
                                                                if (x[2] <= 77.64401626586914) {
                                                                    if (x[3] <= 805.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[5] <= 1235.0) {
                                                                    if (x[1] <= 120.76892852783203) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 975.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 990.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 942.5) {
                                    if (x[1] <= 136.36685943603516) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[5] <= 1315.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }
