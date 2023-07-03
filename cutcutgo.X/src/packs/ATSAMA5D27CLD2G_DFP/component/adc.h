/*
 * Component description for ADC
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2021-06-28T09:00:02Z */
#ifndef _SAMA5D2_ADC_COMPONENT_H_
#define _SAMA5D2_ADC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ADC                                          */
/* ************************************************************************** */

/* -------- ADC_CR : (ADC Offset: 0x00) ( /W 32) Control Register -------- */
#define ADC_CR_SWRST_Pos                      _U_(0)                                               /**< (ADC_CR) Software Reset Position */
#define ADC_CR_SWRST_Msk                      (_U_(0x1) << ADC_CR_SWRST_Pos)                       /**< (ADC_CR) Software Reset Mask */
#define ADC_CR_SWRST(value)                   (ADC_CR_SWRST_Msk & ((value) << ADC_CR_SWRST_Pos))  
#define ADC_CR_START_Pos                      _U_(1)                                               /**< (ADC_CR) Start Conversion Position */
#define ADC_CR_START_Msk                      (_U_(0x1) << ADC_CR_START_Pos)                       /**< (ADC_CR) Start Conversion Mask */
#define ADC_CR_START(value)                   (ADC_CR_START_Msk & ((value) << ADC_CR_START_Pos))  
#define ADC_CR_TSCALIB_Pos                    _U_(2)                                               /**< (ADC_CR) Touchscreen Calibration Position */
#define ADC_CR_TSCALIB_Msk                    (_U_(0x1) << ADC_CR_TSCALIB_Pos)                     /**< (ADC_CR) Touchscreen Calibration Mask */
#define ADC_CR_TSCALIB(value)                 (ADC_CR_TSCALIB_Msk & ((value) << ADC_CR_TSCALIB_Pos))
#define ADC_CR_CMPRST_Pos                     _U_(4)                                               /**< (ADC_CR) Comparison Restart Position */
#define ADC_CR_CMPRST_Msk                     (_U_(0x1) << ADC_CR_CMPRST_Pos)                      /**< (ADC_CR) Comparison Restart Mask */
#define ADC_CR_CMPRST(value)                  (ADC_CR_CMPRST_Msk & ((value) << ADC_CR_CMPRST_Pos))
#define ADC_CR_Msk                            _U_(0x00000017)                                      /**< (ADC_CR) Register Mask  */


/* -------- ADC_MR : (ADC Offset: 0x04) (R/W 32) Mode Register -------- */
#define ADC_MR_TRGSEL_Pos                     _U_(1)                                               /**< (ADC_MR) Trigger Selection Position */
#define ADC_MR_TRGSEL_Msk                     (_U_(0x7) << ADC_MR_TRGSEL_Pos)                      /**< (ADC_MR) Trigger Selection Mask */
#define ADC_MR_TRGSEL(value)                  (ADC_MR_TRGSEL_Msk & ((value) << ADC_MR_TRGSEL_Pos))
#define   ADC_MR_TRGSEL_ADC_TRIG0_Val         _U_(0x0)                                             /**< (ADC_MR) ADTRG  */
#define   ADC_MR_TRGSEL_ADC_TRIG1_Val         _U_(0x1)                                             /**< (ADC_MR) TIOA0  */
#define   ADC_MR_TRGSEL_ADC_TRIG2_Val         _U_(0x2)                                             /**< (ADC_MR) TIOA1  */
#define   ADC_MR_TRGSEL_ADC_TRIG3_Val         _U_(0x3)                                             /**< (ADC_MR) TIOA2  */
#define   ADC_MR_TRGSEL_ADC_TRIG4_Val         _U_(0x4)                                             /**< (ADC_MR) PWM event line 0  */
#define   ADC_MR_TRGSEL_ADC_TRIG5_Val         _U_(0x5)                                             /**< (ADC_MR) PWM event line 1  */
#define   ADC_MR_TRGSEL_ADC_TRIG6_Val         _U_(0x6)                                             /**< (ADC_MR) TIOA3  */
#define   ADC_MR_TRGSEL_ADC_TRIG7_Val         _U_(0x7)                                             /**< (ADC_MR) RTCOUT0  */
#define ADC_MR_TRGSEL_ADC_TRIG0               (ADC_MR_TRGSEL_ADC_TRIG0_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) ADTRG Position  */
#define ADC_MR_TRGSEL_ADC_TRIG1               (ADC_MR_TRGSEL_ADC_TRIG1_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIOA0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG2               (ADC_MR_TRGSEL_ADC_TRIG2_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIOA1 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG3               (ADC_MR_TRGSEL_ADC_TRIG3_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIOA2 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG4               (ADC_MR_TRGSEL_ADC_TRIG4_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) PWM event line 0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG5               (ADC_MR_TRGSEL_ADC_TRIG5_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) PWM event line 1 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG6               (ADC_MR_TRGSEL_ADC_TRIG6_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIOA3 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG7               (ADC_MR_TRGSEL_ADC_TRIG7_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) RTCOUT0 Position  */
#define ADC_MR_SLEEP_Pos                      _U_(5)                                               /**< (ADC_MR) Sleep Mode Position */
#define ADC_MR_SLEEP_Msk                      (_U_(0x1) << ADC_MR_SLEEP_Pos)                       /**< (ADC_MR) Sleep Mode Mask */
#define ADC_MR_SLEEP(value)                   (ADC_MR_SLEEP_Msk & ((value) << ADC_MR_SLEEP_Pos))  
#define   ADC_MR_SLEEP_NORMAL_Val             _U_(0x0)                                             /**< (ADC_MR) Normal Mode: The ADC core and reference voltage circuitry are kept ON between conversions.  */
#define   ADC_MR_SLEEP_SLEEP_Val              _U_(0x1)                                             /**< (ADC_MR) Sleep Mode: The wakeup time can be modified by programming the FWUP bit.  */
#define ADC_MR_SLEEP_NORMAL                   (ADC_MR_SLEEP_NORMAL_Val << ADC_MR_SLEEP_Pos)        /**< (ADC_MR) Normal Mode: The ADC core and reference voltage circuitry are kept ON between conversions. Position  */
#define ADC_MR_SLEEP_SLEEP                    (ADC_MR_SLEEP_SLEEP_Val << ADC_MR_SLEEP_Pos)         /**< (ADC_MR) Sleep Mode: The wakeup time can be modified by programming the FWUP bit. Position  */
#define ADC_MR_FWUP_Pos                       _U_(6)                                               /**< (ADC_MR) Fast Wakeup Position */
#define ADC_MR_FWUP_Msk                       (_U_(0x1) << ADC_MR_FWUP_Pos)                        /**< (ADC_MR) Fast Wakeup Mask */
#define ADC_MR_FWUP(value)                    (ADC_MR_FWUP_Msk & ((value) << ADC_MR_FWUP_Pos))    
#define   ADC_MR_FWUP_OFF_Val                 _U_(0x0)                                             /**< (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are OFF between conversions  */
#define   ADC_MR_FWUP_ON_Val                  _U_(0x1)                                             /**< (ADC_MR) If SLEEP is 1, then Fast Wakeup Sleep mode: The voltage reference is ON between conversions and ADC core is OFF  */
#define ADC_MR_FWUP_OFF                       (ADC_MR_FWUP_OFF_Val << ADC_MR_FWUP_Pos)             /**< (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are OFF between conversions Position  */
#define ADC_MR_FWUP_ON                        (ADC_MR_FWUP_ON_Val << ADC_MR_FWUP_Pos)              /**< (ADC_MR) If SLEEP is 1, then Fast Wakeup Sleep mode: The voltage reference is ON between conversions and ADC core is OFF Position  */
#define ADC_MR_PRESCAL_Pos                    _U_(8)                                               /**< (ADC_MR) Prescaler Rate Selection Position */
#define ADC_MR_PRESCAL_Msk                    (_U_(0xFF) << ADC_MR_PRESCAL_Pos)                    /**< (ADC_MR) Prescaler Rate Selection Mask */
#define ADC_MR_PRESCAL(value)                 (ADC_MR_PRESCAL_Msk & ((value) << ADC_MR_PRESCAL_Pos))
#define ADC_MR_STARTUP_Pos                    _U_(16)                                              /**< (ADC_MR) Startup Time Position */
#define ADC_MR_STARTUP_Msk                    (_U_(0xF) << ADC_MR_STARTUP_Pos)                     /**< (ADC_MR) Startup Time Mask */
#define ADC_MR_STARTUP(value)                 (ADC_MR_STARTUP_Msk & ((value) << ADC_MR_STARTUP_Pos))
#define   ADC_MR_STARTUP_SUT0_Val             _U_(0x0)                                             /**< (ADC_MR) 0 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT8_Val             _U_(0x1)                                             /**< (ADC_MR) 8 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT16_Val            _U_(0x2)                                             /**< (ADC_MR) 16 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT24_Val            _U_(0x3)                                             /**< (ADC_MR) 24 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT64_Val            _U_(0x4)                                             /**< (ADC_MR) 64 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT80_Val            _U_(0x5)                                             /**< (ADC_MR) 80 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT96_Val            _U_(0x6)                                             /**< (ADC_MR) 96 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT112_Val           _U_(0x7)                                             /**< (ADC_MR) 112 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT512_Val           _U_(0x8)                                             /**< (ADC_MR) 512 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT576_Val           _U_(0x9)                                             /**< (ADC_MR) 576 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT640_Val           _U_(0xA)                                             /**< (ADC_MR) 640 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT704_Val           _U_(0xB)                                             /**< (ADC_MR) 704 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT768_Val           _U_(0xC)                                             /**< (ADC_MR) 768 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT832_Val           _U_(0xD)                                             /**< (ADC_MR) 832 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT896_Val           _U_(0xE)                                             /**< (ADC_MR) 896 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT960_Val           _U_(0xF)                                             /**< (ADC_MR) 960 periods of ADCCLK  */
#define ADC_MR_STARTUP_SUT0                   (ADC_MR_STARTUP_SUT0_Val << ADC_MR_STARTUP_Pos)      /**< (ADC_MR) 0 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT8                   (ADC_MR_STARTUP_SUT8_Val << ADC_MR_STARTUP_Pos)      /**< (ADC_MR) 8 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT16                  (ADC_MR_STARTUP_SUT16_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 16 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT24                  (ADC_MR_STARTUP_SUT24_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 24 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT64                  (ADC_MR_STARTUP_SUT64_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 64 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT80                  (ADC_MR_STARTUP_SUT80_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 80 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT96                  (ADC_MR_STARTUP_SUT96_Val << ADC_MR_STARTUP_Pos)     /**< (ADC_MR) 96 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT112                 (ADC_MR_STARTUP_SUT112_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 112 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT512                 (ADC_MR_STARTUP_SUT512_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 512 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT576                 (ADC_MR_STARTUP_SUT576_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 576 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT640                 (ADC_MR_STARTUP_SUT640_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 640 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT704                 (ADC_MR_STARTUP_SUT704_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 704 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT768                 (ADC_MR_STARTUP_SUT768_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 768 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT832                 (ADC_MR_STARTUP_SUT832_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 832 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT896                 (ADC_MR_STARTUP_SUT896_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 896 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT960                 (ADC_MR_STARTUP_SUT960_Val << ADC_MR_STARTUP_Pos)    /**< (ADC_MR) 960 periods of ADCCLK Position  */
#define ADC_MR_ANACH_Pos                      _U_(23)                                              /**< (ADC_MR) Analog Change Position */
#define ADC_MR_ANACH_Msk                      (_U_(0x1) << ADC_MR_ANACH_Pos)                       /**< (ADC_MR) Analog Change Mask */
#define ADC_MR_ANACH(value)                   (ADC_MR_ANACH_Msk & ((value) << ADC_MR_ANACH_Pos))  
#define   ADC_MR_ANACH_NONE_Val               _U_(0x0)                                             /**< (ADC_MR) No analog change on channel switching: DIFF0 is used for all channels.  */
#define   ADC_MR_ANACH_ALLOWED_Val            _U_(0x1)                                             /**< (ADC_MR) Allows different analog settings for each channel. See ADC Channel Offset RegisterChannel Configuration Register.  */
#define ADC_MR_ANACH_NONE                     (ADC_MR_ANACH_NONE_Val << ADC_MR_ANACH_Pos)          /**< (ADC_MR) No analog change on channel switching: DIFF0 is used for all channels. Position  */
#define ADC_MR_ANACH_ALLOWED                  (ADC_MR_ANACH_ALLOWED_Val << ADC_MR_ANACH_Pos)       /**< (ADC_MR) Allows different analog settings for each channel. See ADC Channel Offset RegisterChannel Configuration Register. Position  */
#define ADC_MR_TRACKTIM_Pos                   _U_(24)                                              /**< (ADC_MR) Tracking Time Position */
#define ADC_MR_TRACKTIM_Msk                   (_U_(0xF) << ADC_MR_TRACKTIM_Pos)                    /**< (ADC_MR) Tracking Time Mask */
#define ADC_MR_TRACKTIM(value)                (ADC_MR_TRACKTIM_Msk & ((value) << ADC_MR_TRACKTIM_Pos))
#define ADC_MR_TRANSFER_Pos                   _U_(28)                                              /**< (ADC_MR) Transfer Time Position */
#define ADC_MR_TRANSFER_Msk                   (_U_(0x3) << ADC_MR_TRANSFER_Pos)                    /**< (ADC_MR) Transfer Time Mask */
#define ADC_MR_TRANSFER(value)                (ADC_MR_TRANSFER_Msk & ((value) << ADC_MR_TRANSFER_Pos))
#define ADC_MR_MAXSPEED_Pos                   _U_(30)                                              /**< (ADC_MR) Maximum Sampling Rate Enable in Freerun Mode Position */
#define ADC_MR_MAXSPEED_Msk                   (_U_(0x1) << ADC_MR_MAXSPEED_Pos)                    /**< (ADC_MR) Maximum Sampling Rate Enable in Freerun Mode Mask */
#define ADC_MR_MAXSPEED(value)                (ADC_MR_MAXSPEED_Msk & ((value) << ADC_MR_MAXSPEED_Pos))
#define ADC_MR_USEQ_Pos                       _U_(31)                                              /**< (ADC_MR) Use Sequence Enable Position */
#define ADC_MR_USEQ_Msk                       (_U_(0x1) << ADC_MR_USEQ_Pos)                        /**< (ADC_MR) Use Sequence Enable Mask */
#define ADC_MR_USEQ(value)                    (ADC_MR_USEQ_Msk & ((value) << ADC_MR_USEQ_Pos))    
#define   ADC_MR_USEQ_NUM_ORDER_Val           _U_(0x0)                                             /**< (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index.  */
#define   ADC_MR_USEQ_REG_ORDER_Val           _U_(0x1)                                             /**< (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 registers and can be used to convert the same channel several times.  */
#define ADC_MR_USEQ_NUM_ORDER                 (ADC_MR_USEQ_NUM_ORDER_Val << ADC_MR_USEQ_Pos)       /**< (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index. Position  */
#define ADC_MR_USEQ_REG_ORDER                 (ADC_MR_USEQ_REG_ORDER_Val << ADC_MR_USEQ_Pos)       /**< (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 registers and can be used to convert the same channel several times. Position  */
#define ADC_MR_Msk                            _U_(0xFF8FFF6E)                                      /**< (ADC_MR) Register Mask  */


/* -------- ADC_SEQR1 : (ADC Offset: 0x08) (R/W 32) Channel Sequence Register 1 -------- */
#define ADC_SEQR1_USCH1_Pos                   _U_(0)                                               /**< (ADC_SEQR1) User Sequence Number 1 Position */
#define ADC_SEQR1_USCH1_Msk                   (_U_(0xF) << ADC_SEQR1_USCH1_Pos)                    /**< (ADC_SEQR1) User Sequence Number 1 Mask */
#define ADC_SEQR1_USCH1(value)                (ADC_SEQR1_USCH1_Msk & ((value) << ADC_SEQR1_USCH1_Pos))
#define ADC_SEQR1_USCH2_Pos                   _U_(4)                                               /**< (ADC_SEQR1) User Sequence Number 2 Position */
#define ADC_SEQR1_USCH2_Msk                   (_U_(0xF) << ADC_SEQR1_USCH2_Pos)                    /**< (ADC_SEQR1) User Sequence Number 2 Mask */
#define ADC_SEQR1_USCH2(value)                (ADC_SEQR1_USCH2_Msk & ((value) << ADC_SEQR1_USCH2_Pos))
#define ADC_SEQR1_USCH3_Pos                   _U_(8)                                               /**< (ADC_SEQR1) User Sequence Number 3 Position */
#define ADC_SEQR1_USCH3_Msk                   (_U_(0xF) << ADC_SEQR1_USCH3_Pos)                    /**< (ADC_SEQR1) User Sequence Number 3 Mask */
#define ADC_SEQR1_USCH3(value)                (ADC_SEQR1_USCH3_Msk & ((value) << ADC_SEQR1_USCH3_Pos))
#define ADC_SEQR1_USCH4_Pos                   _U_(12)                                              /**< (ADC_SEQR1) User Sequence Number 4 Position */
#define ADC_SEQR1_USCH4_Msk                   (_U_(0xF) << ADC_SEQR1_USCH4_Pos)                    /**< (ADC_SEQR1) User Sequence Number 4 Mask */
#define ADC_SEQR1_USCH4(value)                (ADC_SEQR1_USCH4_Msk & ((value) << ADC_SEQR1_USCH4_Pos))
#define ADC_SEQR1_USCH5_Pos                   _U_(16)                                              /**< (ADC_SEQR1) User Sequence Number 5 Position */
#define ADC_SEQR1_USCH5_Msk                   (_U_(0xF) << ADC_SEQR1_USCH5_Pos)                    /**< (ADC_SEQR1) User Sequence Number 5 Mask */
#define ADC_SEQR1_USCH5(value)                (ADC_SEQR1_USCH5_Msk & ((value) << ADC_SEQR1_USCH5_Pos))
#define ADC_SEQR1_USCH6_Pos                   _U_(20)                                              /**< (ADC_SEQR1) User Sequence Number 6 Position */
#define ADC_SEQR1_USCH6_Msk                   (_U_(0xF) << ADC_SEQR1_USCH6_Pos)                    /**< (ADC_SEQR1) User Sequence Number 6 Mask */
#define ADC_SEQR1_USCH6(value)                (ADC_SEQR1_USCH6_Msk & ((value) << ADC_SEQR1_USCH6_Pos))
#define ADC_SEQR1_USCH7_Pos                   _U_(24)                                              /**< (ADC_SEQR1) User Sequence Number 7 Position */
#define ADC_SEQR1_USCH7_Msk                   (_U_(0xF) << ADC_SEQR1_USCH7_Pos)                    /**< (ADC_SEQR1) User Sequence Number 7 Mask */
#define ADC_SEQR1_USCH7(value)                (ADC_SEQR1_USCH7_Msk & ((value) << ADC_SEQR1_USCH7_Pos))
#define ADC_SEQR1_USCH8_Pos                   _U_(28)                                              /**< (ADC_SEQR1) User Sequence Number 8 Position */
#define ADC_SEQR1_USCH8_Msk                   (_U_(0xF) << ADC_SEQR1_USCH8_Pos)                    /**< (ADC_SEQR1) User Sequence Number 8 Mask */
#define ADC_SEQR1_USCH8(value)                (ADC_SEQR1_USCH8_Msk & ((value) << ADC_SEQR1_USCH8_Pos))
#define ADC_SEQR1_Msk                         _U_(0xFFFFFFFF)                                      /**< (ADC_SEQR1) Register Mask  */


/* -------- ADC_SEQR2 : (ADC Offset: 0x0C) (R/W 32) Channel Sequence Register 2 -------- */
#define ADC_SEQR2_USCH9_Pos                   _U_(0)                                               /**< (ADC_SEQR2) User Sequence Number 9 Position */
#define ADC_SEQR2_USCH9_Msk                   (_U_(0xF) << ADC_SEQR2_USCH9_Pos)                    /**< (ADC_SEQR2) User Sequence Number 9 Mask */
#define ADC_SEQR2_USCH9(value)                (ADC_SEQR2_USCH9_Msk & ((value) << ADC_SEQR2_USCH9_Pos))
#define ADC_SEQR2_USCH10_Pos                  _U_(4)                                               /**< (ADC_SEQR2) User Sequence Number 10 Position */
#define ADC_SEQR2_USCH10_Msk                  (_U_(0xF) << ADC_SEQR2_USCH10_Pos)                   /**< (ADC_SEQR2) User Sequence Number 10 Mask */
#define ADC_SEQR2_USCH10(value)               (ADC_SEQR2_USCH10_Msk & ((value) << ADC_SEQR2_USCH10_Pos))
#define ADC_SEQR2_USCH11_Pos                  _U_(8)                                               /**< (ADC_SEQR2) User Sequence Number 11 Position */
#define ADC_SEQR2_USCH11_Msk                  (_U_(0xF) << ADC_SEQR2_USCH11_Pos)                   /**< (ADC_SEQR2) User Sequence Number 11 Mask */
#define ADC_SEQR2_USCH11(value)               (ADC_SEQR2_USCH11_Msk & ((value) << ADC_SEQR2_USCH11_Pos))
#define ADC_SEQR2_Msk                         _U_(0x00000FFF)                                      /**< (ADC_SEQR2) Register Mask  */


/* -------- ADC_CHER : (ADC Offset: 0x10) ( /W 32) Channel Enable Register -------- */
#define ADC_CHER_CH0_Pos                      _U_(0)                                               /**< (ADC_CHER) Channel 0 Enable Position */
#define ADC_CHER_CH0_Msk                      (_U_(0x1) << ADC_CHER_CH0_Pos)                       /**< (ADC_CHER) Channel 0 Enable Mask */
#define ADC_CHER_CH0(value)                   (ADC_CHER_CH0_Msk & ((value) << ADC_CHER_CH0_Pos))  
#define ADC_CHER_CH1_Pos                      _U_(1)                                               /**< (ADC_CHER) Channel 1 Enable Position */
#define ADC_CHER_CH1_Msk                      (_U_(0x1) << ADC_CHER_CH1_Pos)                       /**< (ADC_CHER) Channel 1 Enable Mask */
#define ADC_CHER_CH1(value)                   (ADC_CHER_CH1_Msk & ((value) << ADC_CHER_CH1_Pos))  
#define ADC_CHER_CH2_Pos                      _U_(2)                                               /**< (ADC_CHER) Channel 2 Enable Position */
#define ADC_CHER_CH2_Msk                      (_U_(0x1) << ADC_CHER_CH2_Pos)                       /**< (ADC_CHER) Channel 2 Enable Mask */
#define ADC_CHER_CH2(value)                   (ADC_CHER_CH2_Msk & ((value) << ADC_CHER_CH2_Pos))  
#define ADC_CHER_CH3_Pos                      _U_(3)                                               /**< (ADC_CHER) Channel 3 Enable Position */
#define ADC_CHER_CH3_Msk                      (_U_(0x1) << ADC_CHER_CH3_Pos)                       /**< (ADC_CHER) Channel 3 Enable Mask */
#define ADC_CHER_CH3(value)                   (ADC_CHER_CH3_Msk & ((value) << ADC_CHER_CH3_Pos))  
#define ADC_CHER_CH4_Pos                      _U_(4)                                               /**< (ADC_CHER) Channel 4 Enable Position */
#define ADC_CHER_CH4_Msk                      (_U_(0x1) << ADC_CHER_CH4_Pos)                       /**< (ADC_CHER) Channel 4 Enable Mask */
#define ADC_CHER_CH4(value)                   (ADC_CHER_CH4_Msk & ((value) << ADC_CHER_CH4_Pos))  
#define ADC_CHER_CH5_Pos                      _U_(5)                                               /**< (ADC_CHER) Channel 5 Enable Position */
#define ADC_CHER_CH5_Msk                      (_U_(0x1) << ADC_CHER_CH5_Pos)                       /**< (ADC_CHER) Channel 5 Enable Mask */
#define ADC_CHER_CH5(value)                   (ADC_CHER_CH5_Msk & ((value) << ADC_CHER_CH5_Pos))  
#define ADC_CHER_CH6_Pos                      _U_(6)                                               /**< (ADC_CHER) Channel 6 Enable Position */
#define ADC_CHER_CH6_Msk                      (_U_(0x1) << ADC_CHER_CH6_Pos)                       /**< (ADC_CHER) Channel 6 Enable Mask */
#define ADC_CHER_CH6(value)                   (ADC_CHER_CH6_Msk & ((value) << ADC_CHER_CH6_Pos))  
#define ADC_CHER_CH7_Pos                      _U_(7)                                               /**< (ADC_CHER) Channel 7 Enable Position */
#define ADC_CHER_CH7_Msk                      (_U_(0x1) << ADC_CHER_CH7_Pos)                       /**< (ADC_CHER) Channel 7 Enable Mask */
#define ADC_CHER_CH7(value)                   (ADC_CHER_CH7_Msk & ((value) << ADC_CHER_CH7_Pos))  
#define ADC_CHER_CH8_Pos                      _U_(8)                                               /**< (ADC_CHER) Channel 8 Enable Position */
#define ADC_CHER_CH8_Msk                      (_U_(0x1) << ADC_CHER_CH8_Pos)                       /**< (ADC_CHER) Channel 8 Enable Mask */
#define ADC_CHER_CH8(value)                   (ADC_CHER_CH8_Msk & ((value) << ADC_CHER_CH8_Pos))  
#define ADC_CHER_CH9_Pos                      _U_(9)                                               /**< (ADC_CHER) Channel 9 Enable Position */
#define ADC_CHER_CH9_Msk                      (_U_(0x1) << ADC_CHER_CH9_Pos)                       /**< (ADC_CHER) Channel 9 Enable Mask */
#define ADC_CHER_CH9(value)                   (ADC_CHER_CH9_Msk & ((value) << ADC_CHER_CH9_Pos))  
#define ADC_CHER_CH10_Pos                     _U_(10)                                              /**< (ADC_CHER) Channel 10 Enable Position */
#define ADC_CHER_CH10_Msk                     (_U_(0x1) << ADC_CHER_CH10_Pos)                      /**< (ADC_CHER) Channel 10 Enable Mask */
#define ADC_CHER_CH10(value)                  (ADC_CHER_CH10_Msk & ((value) << ADC_CHER_CH10_Pos))
#define ADC_CHER_CH11_Pos                     _U_(11)                                              /**< (ADC_CHER) Channel 11 Enable Position */
#define ADC_CHER_CH11_Msk                     (_U_(0x1) << ADC_CHER_CH11_Pos)                      /**< (ADC_CHER) Channel 11 Enable Mask */
#define ADC_CHER_CH11(value)                  (ADC_CHER_CH11_Msk & ((value) << ADC_CHER_CH11_Pos))
#define ADC_CHER_Msk                          _U_(0x00000FFF)                                      /**< (ADC_CHER) Register Mask  */

#define ADC_CHER_CH_Pos                       _U_(0)                                               /**< (ADC_CHER Position) Channel xx Enable */
#define ADC_CHER_CH_Msk                       (_U_(0xFFF) << ADC_CHER_CH_Pos)                      /**< (ADC_CHER Mask) CH */
#define ADC_CHER_CH(value)                    (ADC_CHER_CH_Msk & ((value) << ADC_CHER_CH_Pos))     

/* -------- ADC_CHDR : (ADC Offset: 0x14) ( /W 32) Channel Disable Register -------- */
#define ADC_CHDR_CH0_Pos                      _U_(0)                                               /**< (ADC_CHDR) Channel 0 Disable Position */
#define ADC_CHDR_CH0_Msk                      (_U_(0x1) << ADC_CHDR_CH0_Pos)                       /**< (ADC_CHDR) Channel 0 Disable Mask */
#define ADC_CHDR_CH0(value)                   (ADC_CHDR_CH0_Msk & ((value) << ADC_CHDR_CH0_Pos))  
#define ADC_CHDR_CH1_Pos                      _U_(1)                                               /**< (ADC_CHDR) Channel 1 Disable Position */
#define ADC_CHDR_CH1_Msk                      (_U_(0x1) << ADC_CHDR_CH1_Pos)                       /**< (ADC_CHDR) Channel 1 Disable Mask */
#define ADC_CHDR_CH1(value)                   (ADC_CHDR_CH1_Msk & ((value) << ADC_CHDR_CH1_Pos))  
#define ADC_CHDR_CH2_Pos                      _U_(2)                                               /**< (ADC_CHDR) Channel 2 Disable Position */
#define ADC_CHDR_CH2_Msk                      (_U_(0x1) << ADC_CHDR_CH2_Pos)                       /**< (ADC_CHDR) Channel 2 Disable Mask */
#define ADC_CHDR_CH2(value)                   (ADC_CHDR_CH2_Msk & ((value) << ADC_CHDR_CH2_Pos))  
#define ADC_CHDR_CH3_Pos                      _U_(3)                                               /**< (ADC_CHDR) Channel 3 Disable Position */
#define ADC_CHDR_CH3_Msk                      (_U_(0x1) << ADC_CHDR_CH3_Pos)                       /**< (ADC_CHDR) Channel 3 Disable Mask */
#define ADC_CHDR_CH3(value)                   (ADC_CHDR_CH3_Msk & ((value) << ADC_CHDR_CH3_Pos))  
#define ADC_CHDR_CH4_Pos                      _U_(4)                                               /**< (ADC_CHDR) Channel 4 Disable Position */
#define ADC_CHDR_CH4_Msk                      (_U_(0x1) << ADC_CHDR_CH4_Pos)                       /**< (ADC_CHDR) Channel 4 Disable Mask */
#define ADC_CHDR_CH4(value)                   (ADC_CHDR_CH4_Msk & ((value) << ADC_CHDR_CH4_Pos))  
#define ADC_CHDR_CH5_Pos                      _U_(5)                                               /**< (ADC_CHDR) Channel 5 Disable Position */
#define ADC_CHDR_CH5_Msk                      (_U_(0x1) << ADC_CHDR_CH5_Pos)                       /**< (ADC_CHDR) Channel 5 Disable Mask */
#define ADC_CHDR_CH5(value)                   (ADC_CHDR_CH5_Msk & ((value) << ADC_CHDR_CH5_Pos))  
#define ADC_CHDR_CH6_Pos                      _U_(6)                                               /**< (ADC_CHDR) Channel 6 Disable Position */
#define ADC_CHDR_CH6_Msk                      (_U_(0x1) << ADC_CHDR_CH6_Pos)                       /**< (ADC_CHDR) Channel 6 Disable Mask */
#define ADC_CHDR_CH6(value)                   (ADC_CHDR_CH6_Msk & ((value) << ADC_CHDR_CH6_Pos))  
#define ADC_CHDR_CH7_Pos                      _U_(7)                                               /**< (ADC_CHDR) Channel 7 Disable Position */
#define ADC_CHDR_CH7_Msk                      (_U_(0x1) << ADC_CHDR_CH7_Pos)                       /**< (ADC_CHDR) Channel 7 Disable Mask */
#define ADC_CHDR_CH7(value)                   (ADC_CHDR_CH7_Msk & ((value) << ADC_CHDR_CH7_Pos))  
#define ADC_CHDR_CH8_Pos                      _U_(8)                                               /**< (ADC_CHDR) Channel 8 Disable Position */
#define ADC_CHDR_CH8_Msk                      (_U_(0x1) << ADC_CHDR_CH8_Pos)                       /**< (ADC_CHDR) Channel 8 Disable Mask */
#define ADC_CHDR_CH8(value)                   (ADC_CHDR_CH8_Msk & ((value) << ADC_CHDR_CH8_Pos))  
#define ADC_CHDR_CH9_Pos                      _U_(9)                                               /**< (ADC_CHDR) Channel 9 Disable Position */
#define ADC_CHDR_CH9_Msk                      (_U_(0x1) << ADC_CHDR_CH9_Pos)                       /**< (ADC_CHDR) Channel 9 Disable Mask */
#define ADC_CHDR_CH9(value)                   (ADC_CHDR_CH9_Msk & ((value) << ADC_CHDR_CH9_Pos))  
#define ADC_CHDR_CH10_Pos                     _U_(10)                                              /**< (ADC_CHDR) Channel 10 Disable Position */
#define ADC_CHDR_CH10_Msk                     (_U_(0x1) << ADC_CHDR_CH10_Pos)                      /**< (ADC_CHDR) Channel 10 Disable Mask */
#define ADC_CHDR_CH10(value)                  (ADC_CHDR_CH10_Msk & ((value) << ADC_CHDR_CH10_Pos))
#define ADC_CHDR_CH11_Pos                     _U_(11)                                              /**< (ADC_CHDR) Channel 11 Disable Position */
#define ADC_CHDR_CH11_Msk                     (_U_(0x1) << ADC_CHDR_CH11_Pos)                      /**< (ADC_CHDR) Channel 11 Disable Mask */
#define ADC_CHDR_CH11(value)                  (ADC_CHDR_CH11_Msk & ((value) << ADC_CHDR_CH11_Pos))
#define ADC_CHDR_Msk                          _U_(0x00000FFF)                                      /**< (ADC_CHDR) Register Mask  */

#define ADC_CHDR_CH_Pos                       _U_(0)                                               /**< (ADC_CHDR Position) Channel xx Disable */
#define ADC_CHDR_CH_Msk                       (_U_(0xFFF) << ADC_CHDR_CH_Pos)                      /**< (ADC_CHDR Mask) CH */
#define ADC_CHDR_CH(value)                    (ADC_CHDR_CH_Msk & ((value) << ADC_CHDR_CH_Pos))     

/* -------- ADC_CHSR : (ADC Offset: 0x18) ( R/ 32) Channel Status Register -------- */
#define ADC_CHSR_CH0_Pos                      _U_(0)                                               /**< (ADC_CHSR) Channel 0 Status Position */
#define ADC_CHSR_CH0_Msk                      (_U_(0x1) << ADC_CHSR_CH0_Pos)                       /**< (ADC_CHSR) Channel 0 Status Mask */
#define ADC_CHSR_CH0(value)                   (ADC_CHSR_CH0_Msk & ((value) << ADC_CHSR_CH0_Pos))  
#define ADC_CHSR_CH1_Pos                      _U_(1)                                               /**< (ADC_CHSR) Channel 1 Status Position */
#define ADC_CHSR_CH1_Msk                      (_U_(0x1) << ADC_CHSR_CH1_Pos)                       /**< (ADC_CHSR) Channel 1 Status Mask */
#define ADC_CHSR_CH1(value)                   (ADC_CHSR_CH1_Msk & ((value) << ADC_CHSR_CH1_Pos))  
#define ADC_CHSR_CH2_Pos                      _U_(2)                                               /**< (ADC_CHSR) Channel 2 Status Position */
#define ADC_CHSR_CH2_Msk                      (_U_(0x1) << ADC_CHSR_CH2_Pos)                       /**< (ADC_CHSR) Channel 2 Status Mask */
#define ADC_CHSR_CH2(value)                   (ADC_CHSR_CH2_Msk & ((value) << ADC_CHSR_CH2_Pos))  
#define ADC_CHSR_CH3_Pos                      _U_(3)                                               /**< (ADC_CHSR) Channel 3 Status Position */
#define ADC_CHSR_CH3_Msk                      (_U_(0x1) << ADC_CHSR_CH3_Pos)                       /**< (ADC_CHSR) Channel 3 Status Mask */
#define ADC_CHSR_CH3(value)                   (ADC_CHSR_CH3_Msk & ((value) << ADC_CHSR_CH3_Pos))  
#define ADC_CHSR_CH4_Pos                      _U_(4)                                               /**< (ADC_CHSR) Channel 4 Status Position */
#define ADC_CHSR_CH4_Msk                      (_U_(0x1) << ADC_CHSR_CH4_Pos)                       /**< (ADC_CHSR) Channel 4 Status Mask */
#define ADC_CHSR_CH4(value)                   (ADC_CHSR_CH4_Msk & ((value) << ADC_CHSR_CH4_Pos))  
#define ADC_CHSR_CH5_Pos                      _U_(5)                                               /**< (ADC_CHSR) Channel 5 Status Position */
#define ADC_CHSR_CH5_Msk                      (_U_(0x1) << ADC_CHSR_CH5_Pos)                       /**< (ADC_CHSR) Channel 5 Status Mask */
#define ADC_CHSR_CH5(value)                   (ADC_CHSR_CH5_Msk & ((value) << ADC_CHSR_CH5_Pos))  
#define ADC_CHSR_CH6_Pos                      _U_(6)                                               /**< (ADC_CHSR) Channel 6 Status Position */
#define ADC_CHSR_CH6_Msk                      (_U_(0x1) << ADC_CHSR_CH6_Pos)                       /**< (ADC_CHSR) Channel 6 Status Mask */
#define ADC_CHSR_CH6(value)                   (ADC_CHSR_CH6_Msk & ((value) << ADC_CHSR_CH6_Pos))  
#define ADC_CHSR_CH7_Pos                      _U_(7)                                               /**< (ADC_CHSR) Channel 7 Status Position */
#define ADC_CHSR_CH7_Msk                      (_U_(0x1) << ADC_CHSR_CH7_Pos)                       /**< (ADC_CHSR) Channel 7 Status Mask */
#define ADC_CHSR_CH7(value)                   (ADC_CHSR_CH7_Msk & ((value) << ADC_CHSR_CH7_Pos))  
#define ADC_CHSR_CH8_Pos                      _U_(8)                                               /**< (ADC_CHSR) Channel 8 Status Position */
#define ADC_CHSR_CH8_Msk                      (_U_(0x1) << ADC_CHSR_CH8_Pos)                       /**< (ADC_CHSR) Channel 8 Status Mask */
#define ADC_CHSR_CH8(value)                   (ADC_CHSR_CH8_Msk & ((value) << ADC_CHSR_CH8_Pos))  
#define ADC_CHSR_CH9_Pos                      _U_(9)                                               /**< (ADC_CHSR) Channel 9 Status Position */
#define ADC_CHSR_CH9_Msk                      (_U_(0x1) << ADC_CHSR_CH9_Pos)                       /**< (ADC_CHSR) Channel 9 Status Mask */
#define ADC_CHSR_CH9(value)                   (ADC_CHSR_CH9_Msk & ((value) << ADC_CHSR_CH9_Pos))  
#define ADC_CHSR_CH10_Pos                     _U_(10)                                              /**< (ADC_CHSR) Channel 10 Status Position */
#define ADC_CHSR_CH10_Msk                     (_U_(0x1) << ADC_CHSR_CH10_Pos)                      /**< (ADC_CHSR) Channel 10 Status Mask */
#define ADC_CHSR_CH10(value)                  (ADC_CHSR_CH10_Msk & ((value) << ADC_CHSR_CH10_Pos))
#define ADC_CHSR_CH11_Pos                     _U_(11)                                              /**< (ADC_CHSR) Channel 11 Status Position */
#define ADC_CHSR_CH11_Msk                     (_U_(0x1) << ADC_CHSR_CH11_Pos)                      /**< (ADC_CHSR) Channel 11 Status Mask */
#define ADC_CHSR_CH11(value)                  (ADC_CHSR_CH11_Msk & ((value) << ADC_CHSR_CH11_Pos))
#define ADC_CHSR_Msk                          _U_(0x00000FFF)                                      /**< (ADC_CHSR) Register Mask  */

#define ADC_CHSR_CH_Pos                       _U_(0)                                               /**< (ADC_CHSR Position) Channel xx Status */
#define ADC_CHSR_CH_Msk                       (_U_(0xFFF) << ADC_CHSR_CH_Pos)                      /**< (ADC_CHSR Mask) CH */
#define ADC_CHSR_CH(value)                    (ADC_CHSR_CH_Msk & ((value) << ADC_CHSR_CH_Pos))     

/* -------- ADC_LCDR : (ADC Offset: 0x20) ( R/ 32) Last Converted Data Register -------- */
#define ADC_LCDR_LDATA_Pos                    _U_(0)                                               /**< (ADC_LCDR) Last Data Converted Position */
#define ADC_LCDR_LDATA_Msk                    (_U_(0xFFFF) << ADC_LCDR_LDATA_Pos)                  /**< (ADC_LCDR) Last Data Converted Mask */
#define ADC_LCDR_LDATA(value)                 (ADC_LCDR_LDATA_Msk & ((value) << ADC_LCDR_LDATA_Pos))
#define ADC_LCDR_CHNBOSR_Pos                  _U_(24)                                              /**< (ADC_LCDR) Channel Number in Oversampling Mode Position */
#define ADC_LCDR_CHNBOSR_Msk                  (_U_(0x1F) << ADC_LCDR_CHNBOSR_Pos)                  /**< (ADC_LCDR) Channel Number in Oversampling Mode Mask */
#define ADC_LCDR_CHNBOSR(value)               (ADC_LCDR_CHNBOSR_Msk & ((value) << ADC_LCDR_CHNBOSR_Pos))
#define ADC_LCDR_Msk                          _U_(0x1F00FFFF)                                      /**< (ADC_LCDR) Register Mask  */


/* -------- ADC_IER : (ADC Offset: 0x24) ( /W 32) Interrupt Enable Register -------- */
#define ADC_IER_EOC0_Pos                      _U_(0)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 0 Position */
#define ADC_IER_EOC0_Msk                      (_U_(0x1) << ADC_IER_EOC0_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 0 Mask */
#define ADC_IER_EOC0(value)                   (ADC_IER_EOC0_Msk & ((value) << ADC_IER_EOC0_Pos))  
#define ADC_IER_EOC1_Pos                      _U_(1)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 1 Position */
#define ADC_IER_EOC1_Msk                      (_U_(0x1) << ADC_IER_EOC1_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 1 Mask */
#define ADC_IER_EOC1(value)                   (ADC_IER_EOC1_Msk & ((value) << ADC_IER_EOC1_Pos))  
#define ADC_IER_EOC2_Pos                      _U_(2)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 2 Position */
#define ADC_IER_EOC2_Msk                      (_U_(0x1) << ADC_IER_EOC2_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 2 Mask */
#define ADC_IER_EOC2(value)                   (ADC_IER_EOC2_Msk & ((value) << ADC_IER_EOC2_Pos))  
#define ADC_IER_EOC3_Pos                      _U_(3)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 3 Position */
#define ADC_IER_EOC3_Msk                      (_U_(0x1) << ADC_IER_EOC3_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 3 Mask */
#define ADC_IER_EOC3(value)                   (ADC_IER_EOC3_Msk & ((value) << ADC_IER_EOC3_Pos))  
#define ADC_IER_EOC4_Pos                      _U_(4)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 4 Position */
#define ADC_IER_EOC4_Msk                      (_U_(0x1) << ADC_IER_EOC4_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 4 Mask */
#define ADC_IER_EOC4(value)                   (ADC_IER_EOC4_Msk & ((value) << ADC_IER_EOC4_Pos))  
#define ADC_IER_EOC5_Pos                      _U_(5)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 5 Position */
#define ADC_IER_EOC5_Msk                      (_U_(0x1) << ADC_IER_EOC5_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 5 Mask */
#define ADC_IER_EOC5(value)                   (ADC_IER_EOC5_Msk & ((value) << ADC_IER_EOC5_Pos))  
#define ADC_IER_EOC6_Pos                      _U_(6)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 6 Position */
#define ADC_IER_EOC6_Msk                      (_U_(0x1) << ADC_IER_EOC6_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 6 Mask */
#define ADC_IER_EOC6(value)                   (ADC_IER_EOC6_Msk & ((value) << ADC_IER_EOC6_Pos))  
#define ADC_IER_EOC7_Pos                      _U_(7)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 7 Position */
#define ADC_IER_EOC7_Msk                      (_U_(0x1) << ADC_IER_EOC7_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 7 Mask */
#define ADC_IER_EOC7(value)                   (ADC_IER_EOC7_Msk & ((value) << ADC_IER_EOC7_Pos))  
#define ADC_IER_EOC8_Pos                      _U_(8)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 8 Position */
#define ADC_IER_EOC8_Msk                      (_U_(0x1) << ADC_IER_EOC8_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 8 Mask */
#define ADC_IER_EOC8(value)                   (ADC_IER_EOC8_Msk & ((value) << ADC_IER_EOC8_Pos))  
#define ADC_IER_EOC9_Pos                      _U_(9)                                               /**< (ADC_IER) End of Conversion Interrupt Enable 9 Position */
#define ADC_IER_EOC9_Msk                      (_U_(0x1) << ADC_IER_EOC9_Pos)                       /**< (ADC_IER) End of Conversion Interrupt Enable 9 Mask */
#define ADC_IER_EOC9(value)                   (ADC_IER_EOC9_Msk & ((value) << ADC_IER_EOC9_Pos))  
#define ADC_IER_EOC10_Pos                     _U_(10)                                              /**< (ADC_IER) End of Conversion Interrupt Enable 10 Position */
#define ADC_IER_EOC10_Msk                     (_U_(0x1) << ADC_IER_EOC10_Pos)                      /**< (ADC_IER) End of Conversion Interrupt Enable 10 Mask */
#define ADC_IER_EOC10(value)                  (ADC_IER_EOC10_Msk & ((value) << ADC_IER_EOC10_Pos))
#define ADC_IER_EOC11_Pos                     _U_(11)                                              /**< (ADC_IER) End of Conversion Interrupt Enable 11 Position */
#define ADC_IER_EOC11_Msk                     (_U_(0x1) << ADC_IER_EOC11_Pos)                      /**< (ADC_IER) End of Conversion Interrupt Enable 11 Mask */
#define ADC_IER_EOC11(value)                  (ADC_IER_EOC11_Msk & ((value) << ADC_IER_EOC11_Pos))
#define ADC_IER_LCCHG_Pos                     _U_(19)                                              /**< (ADC_IER) Last Channel Change Interrupt Enable Position */
#define ADC_IER_LCCHG_Msk                     (_U_(0x1) << ADC_IER_LCCHG_Pos)                      /**< (ADC_IER) Last Channel Change Interrupt Enable Mask */
#define ADC_IER_LCCHG(value)                  (ADC_IER_LCCHG_Msk & ((value) << ADC_IER_LCCHG_Pos))
#define ADC_IER_XRDY_Pos                      _U_(20)                                              /**< (ADC_IER) Touchscreen Measure XPOS Ready Interrupt Enable Position */
#define ADC_IER_XRDY_Msk                      (_U_(0x1) << ADC_IER_XRDY_Pos)                       /**< (ADC_IER) Touchscreen Measure XPOS Ready Interrupt Enable Mask */
#define ADC_IER_XRDY(value)                   (ADC_IER_XRDY_Msk & ((value) << ADC_IER_XRDY_Pos))  
#define ADC_IER_YRDY_Pos                      _U_(21)                                              /**< (ADC_IER) Touchscreen Measure YPOS Ready Interrupt Enable Position */
#define ADC_IER_YRDY_Msk                      (_U_(0x1) << ADC_IER_YRDY_Pos)                       /**< (ADC_IER) Touchscreen Measure YPOS Ready Interrupt Enable Mask */
#define ADC_IER_YRDY(value)                   (ADC_IER_YRDY_Msk & ((value) << ADC_IER_YRDY_Pos))  
#define ADC_IER_PRDY_Pos                      _U_(22)                                              /**< (ADC_IER) Touchscreen Measure Pressure Ready Interrupt Enable Position */
#define ADC_IER_PRDY_Msk                      (_U_(0x1) << ADC_IER_PRDY_Pos)                       /**< (ADC_IER) Touchscreen Measure Pressure Ready Interrupt Enable Mask */
#define ADC_IER_PRDY(value)                   (ADC_IER_PRDY_Msk & ((value) << ADC_IER_PRDY_Pos))  
#define ADC_IER_DRDY_Pos                      _U_(24)                                              /**< (ADC_IER) Data Ready Interrupt Enable Position */
#define ADC_IER_DRDY_Msk                      (_U_(0x1) << ADC_IER_DRDY_Pos)                       /**< (ADC_IER) Data Ready Interrupt Enable Mask */
#define ADC_IER_DRDY(value)                   (ADC_IER_DRDY_Msk & ((value) << ADC_IER_DRDY_Pos))  
#define ADC_IER_GOVRE_Pos                     _U_(25)                                              /**< (ADC_IER) General Overrun Error Interrupt Enable Position */
#define ADC_IER_GOVRE_Msk                     (_U_(0x1) << ADC_IER_GOVRE_Pos)                      /**< (ADC_IER) General Overrun Error Interrupt Enable Mask */
#define ADC_IER_GOVRE(value)                  (ADC_IER_GOVRE_Msk & ((value) << ADC_IER_GOVRE_Pos))
#define ADC_IER_COMPE_Pos                     _U_(26)                                              /**< (ADC_IER) Comparison Event Interrupt Enable Position */
#define ADC_IER_COMPE_Msk                     (_U_(0x1) << ADC_IER_COMPE_Pos)                      /**< (ADC_IER) Comparison Event Interrupt Enable Mask */
#define ADC_IER_COMPE(value)                  (ADC_IER_COMPE_Msk & ((value) << ADC_IER_COMPE_Pos))
#define ADC_IER_PEN_Pos                       _U_(29)                                              /**< (ADC_IER) Pen Contact Interrupt Enable Position */
#define ADC_IER_PEN_Msk                       (_U_(0x1) << ADC_IER_PEN_Pos)                        /**< (ADC_IER) Pen Contact Interrupt Enable Mask */
#define ADC_IER_PEN(value)                    (ADC_IER_PEN_Msk & ((value) << ADC_IER_PEN_Pos))    
#define ADC_IER_NOPEN_Pos                     _U_(30)                                              /**< (ADC_IER) No Pen Contact Interrupt Enable Position */
#define ADC_IER_NOPEN_Msk                     (_U_(0x1) << ADC_IER_NOPEN_Pos)                      /**< (ADC_IER) No Pen Contact Interrupt Enable Mask */
#define ADC_IER_NOPEN(value)                  (ADC_IER_NOPEN_Msk & ((value) << ADC_IER_NOPEN_Pos))
#define ADC_IER_Msk                           _U_(0x67780FFF)                                      /**< (ADC_IER) Register Mask  */

#define ADC_IER_EOC_Pos                       _U_(0)                                               /**< (ADC_IER Position) End of Conversion Interrupt Enable x */
#define ADC_IER_EOC_Msk                       (_U_(0xFFF) << ADC_IER_EOC_Pos)                      /**< (ADC_IER Mask) EOC */
#define ADC_IER_EOC(value)                    (ADC_IER_EOC_Msk & ((value) << ADC_IER_EOC_Pos))     

/* -------- ADC_IDR : (ADC Offset: 0x28) ( /W 32) Interrupt Disable Register -------- */
#define ADC_IDR_EOC0_Pos                      _U_(0)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 0 Position */
#define ADC_IDR_EOC0_Msk                      (_U_(0x1) << ADC_IDR_EOC0_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 0 Mask */
#define ADC_IDR_EOC0(value)                   (ADC_IDR_EOC0_Msk & ((value) << ADC_IDR_EOC0_Pos))  
#define ADC_IDR_EOC1_Pos                      _U_(1)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 1 Position */
#define ADC_IDR_EOC1_Msk                      (_U_(0x1) << ADC_IDR_EOC1_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 1 Mask */
#define ADC_IDR_EOC1(value)                   (ADC_IDR_EOC1_Msk & ((value) << ADC_IDR_EOC1_Pos))  
#define ADC_IDR_EOC2_Pos                      _U_(2)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 2 Position */
#define ADC_IDR_EOC2_Msk                      (_U_(0x1) << ADC_IDR_EOC2_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 2 Mask */
#define ADC_IDR_EOC2(value)                   (ADC_IDR_EOC2_Msk & ((value) << ADC_IDR_EOC2_Pos))  
#define ADC_IDR_EOC3_Pos                      _U_(3)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 3 Position */
#define ADC_IDR_EOC3_Msk                      (_U_(0x1) << ADC_IDR_EOC3_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 3 Mask */
#define ADC_IDR_EOC3(value)                   (ADC_IDR_EOC3_Msk & ((value) << ADC_IDR_EOC3_Pos))  
#define ADC_IDR_EOC4_Pos                      _U_(4)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 4 Position */
#define ADC_IDR_EOC4_Msk                      (_U_(0x1) << ADC_IDR_EOC4_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 4 Mask */
#define ADC_IDR_EOC4(value)                   (ADC_IDR_EOC4_Msk & ((value) << ADC_IDR_EOC4_Pos))  
#define ADC_IDR_EOC5_Pos                      _U_(5)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 5 Position */
#define ADC_IDR_EOC5_Msk                      (_U_(0x1) << ADC_IDR_EOC5_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 5 Mask */
#define ADC_IDR_EOC5(value)                   (ADC_IDR_EOC5_Msk & ((value) << ADC_IDR_EOC5_Pos))  
#define ADC_IDR_EOC6_Pos                      _U_(6)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 6 Position */
#define ADC_IDR_EOC6_Msk                      (_U_(0x1) << ADC_IDR_EOC6_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 6 Mask */
#define ADC_IDR_EOC6(value)                   (ADC_IDR_EOC6_Msk & ((value) << ADC_IDR_EOC6_Pos))  
#define ADC_IDR_EOC7_Pos                      _U_(7)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 7 Position */
#define ADC_IDR_EOC7_Msk                      (_U_(0x1) << ADC_IDR_EOC7_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 7 Mask */
#define ADC_IDR_EOC7(value)                   (ADC_IDR_EOC7_Msk & ((value) << ADC_IDR_EOC7_Pos))  
#define ADC_IDR_EOC8_Pos                      _U_(8)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 8 Position */
#define ADC_IDR_EOC8_Msk                      (_U_(0x1) << ADC_IDR_EOC8_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 8 Mask */
#define ADC_IDR_EOC8(value)                   (ADC_IDR_EOC8_Msk & ((value) << ADC_IDR_EOC8_Pos))  
#define ADC_IDR_EOC9_Pos                      _U_(9)                                               /**< (ADC_IDR) End of Conversion Interrupt Disable 9 Position */
#define ADC_IDR_EOC9_Msk                      (_U_(0x1) << ADC_IDR_EOC9_Pos)                       /**< (ADC_IDR) End of Conversion Interrupt Disable 9 Mask */
#define ADC_IDR_EOC9(value)                   (ADC_IDR_EOC9_Msk & ((value) << ADC_IDR_EOC9_Pos))  
#define ADC_IDR_EOC10_Pos                     _U_(10)                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 10 Position */
#define ADC_IDR_EOC10_Msk                     (_U_(0x1) << ADC_IDR_EOC10_Pos)                      /**< (ADC_IDR) End of Conversion Interrupt Disable 10 Mask */
#define ADC_IDR_EOC10(value)                  (ADC_IDR_EOC10_Msk & ((value) << ADC_IDR_EOC10_Pos))
#define ADC_IDR_EOC11_Pos                     _U_(11)                                              /**< (ADC_IDR) End of Conversion Interrupt Disable 11 Position */
#define ADC_IDR_EOC11_Msk                     (_U_(0x1) << ADC_IDR_EOC11_Pos)                      /**< (ADC_IDR) End of Conversion Interrupt Disable 11 Mask */
#define ADC_IDR_EOC11(value)                  (ADC_IDR_EOC11_Msk & ((value) << ADC_IDR_EOC11_Pos))
#define ADC_IDR_LCCHG_Pos                     _U_(19)                                              /**< (ADC_IDR) Last Channel Change Interrupt Disable Position */
#define ADC_IDR_LCCHG_Msk                     (_U_(0x1) << ADC_IDR_LCCHG_Pos)                      /**< (ADC_IDR) Last Channel Change Interrupt Disable Mask */
#define ADC_IDR_LCCHG(value)                  (ADC_IDR_LCCHG_Msk & ((value) << ADC_IDR_LCCHG_Pos))
#define ADC_IDR_XRDY_Pos                      _U_(20)                                              /**< (ADC_IDR) Touchscreen Measure XPOS Ready Interrupt Disable Position */
#define ADC_IDR_XRDY_Msk                      (_U_(0x1) << ADC_IDR_XRDY_Pos)                       /**< (ADC_IDR) Touchscreen Measure XPOS Ready Interrupt Disable Mask */
#define ADC_IDR_XRDY(value)                   (ADC_IDR_XRDY_Msk & ((value) << ADC_IDR_XRDY_Pos))  
#define ADC_IDR_YRDY_Pos                      _U_(21)                                              /**< (ADC_IDR) Touchscreen Measure YPOS Ready Interrupt Disable Position */
#define ADC_IDR_YRDY_Msk                      (_U_(0x1) << ADC_IDR_YRDY_Pos)                       /**< (ADC_IDR) Touchscreen Measure YPOS Ready Interrupt Disable Mask */
#define ADC_IDR_YRDY(value)                   (ADC_IDR_YRDY_Msk & ((value) << ADC_IDR_YRDY_Pos))  
#define ADC_IDR_PRDY_Pos                      _U_(22)                                              /**< (ADC_IDR) Touchscreen Measure Pressure Ready Interrupt Disable Position */
#define ADC_IDR_PRDY_Msk                      (_U_(0x1) << ADC_IDR_PRDY_Pos)                       /**< (ADC_IDR) Touchscreen Measure Pressure Ready Interrupt Disable Mask */
#define ADC_IDR_PRDY(value)                   (ADC_IDR_PRDY_Msk & ((value) << ADC_IDR_PRDY_Pos))  
#define ADC_IDR_DRDY_Pos                      _U_(24)                                              /**< (ADC_IDR) Data Ready Interrupt Disable Position */
#define ADC_IDR_DRDY_Msk                      (_U_(0x1) << ADC_IDR_DRDY_Pos)                       /**< (ADC_IDR) Data Ready Interrupt Disable Mask */
#define ADC_IDR_DRDY(value)                   (ADC_IDR_DRDY_Msk & ((value) << ADC_IDR_DRDY_Pos))  
#define ADC_IDR_GOVRE_Pos                     _U_(25)                                              /**< (ADC_IDR) General Overrun Error Interrupt Disable Position */
#define ADC_IDR_GOVRE_Msk                     (_U_(0x1) << ADC_IDR_GOVRE_Pos)                      /**< (ADC_IDR) General Overrun Error Interrupt Disable Mask */
#define ADC_IDR_GOVRE(value)                  (ADC_IDR_GOVRE_Msk & ((value) << ADC_IDR_GOVRE_Pos))
#define ADC_IDR_COMPE_Pos                     _U_(26)                                              /**< (ADC_IDR) Comparison Event Interrupt Disable Position */
#define ADC_IDR_COMPE_Msk                     (_U_(0x1) << ADC_IDR_COMPE_Pos)                      /**< (ADC_IDR) Comparison Event Interrupt Disable Mask */
#define ADC_IDR_COMPE(value)                  (ADC_IDR_COMPE_Msk & ((value) << ADC_IDR_COMPE_Pos))
#define ADC_IDR_PEN_Pos                       _U_(29)                                              /**< (ADC_IDR) Pen Contact Interrupt Disable Position */
#define ADC_IDR_PEN_Msk                       (_U_(0x1) << ADC_IDR_PEN_Pos)                        /**< (ADC_IDR) Pen Contact Interrupt Disable Mask */
#define ADC_IDR_PEN(value)                    (ADC_IDR_PEN_Msk & ((value) << ADC_IDR_PEN_Pos))    
#define ADC_IDR_NOPEN_Pos                     _U_(30)                                              /**< (ADC_IDR) No Pen Contact Interrupt Disable Position */
#define ADC_IDR_NOPEN_Msk                     (_U_(0x1) << ADC_IDR_NOPEN_Pos)                      /**< (ADC_IDR) No Pen Contact Interrupt Disable Mask */
#define ADC_IDR_NOPEN(value)                  (ADC_IDR_NOPEN_Msk & ((value) << ADC_IDR_NOPEN_Pos))
#define ADC_IDR_Msk                           _U_(0x67780FFF)                                      /**< (ADC_IDR) Register Mask  */

#define ADC_IDR_EOC_Pos                       _U_(0)                                               /**< (ADC_IDR Position) End of Conversion Interrupt Disable x */
#define ADC_IDR_EOC_Msk                       (_U_(0xFFF) << ADC_IDR_EOC_Pos)                      /**< (ADC_IDR Mask) EOC */
#define ADC_IDR_EOC(value)                    (ADC_IDR_EOC_Msk & ((value) << ADC_IDR_EOC_Pos))     

/* -------- ADC_IMR : (ADC Offset: 0x2C) ( R/ 32) Interrupt Mask Register -------- */
#define ADC_IMR_EOC0_Pos                      _U_(0)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 0 Position */
#define ADC_IMR_EOC0_Msk                      (_U_(0x1) << ADC_IMR_EOC0_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 0 Mask */
#define ADC_IMR_EOC0(value)                   (ADC_IMR_EOC0_Msk & ((value) << ADC_IMR_EOC0_Pos))  
#define ADC_IMR_EOC1_Pos                      _U_(1)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 1 Position */
#define ADC_IMR_EOC1_Msk                      (_U_(0x1) << ADC_IMR_EOC1_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 1 Mask */
#define ADC_IMR_EOC1(value)                   (ADC_IMR_EOC1_Msk & ((value) << ADC_IMR_EOC1_Pos))  
#define ADC_IMR_EOC2_Pos                      _U_(2)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 2 Position */
#define ADC_IMR_EOC2_Msk                      (_U_(0x1) << ADC_IMR_EOC2_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 2 Mask */
#define ADC_IMR_EOC2(value)                   (ADC_IMR_EOC2_Msk & ((value) << ADC_IMR_EOC2_Pos))  
#define ADC_IMR_EOC3_Pos                      _U_(3)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 3 Position */
#define ADC_IMR_EOC3_Msk                      (_U_(0x1) << ADC_IMR_EOC3_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 3 Mask */
#define ADC_IMR_EOC3(value)                   (ADC_IMR_EOC3_Msk & ((value) << ADC_IMR_EOC3_Pos))  
#define ADC_IMR_EOC4_Pos                      _U_(4)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 4 Position */
#define ADC_IMR_EOC4_Msk                      (_U_(0x1) << ADC_IMR_EOC4_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 4 Mask */
#define ADC_IMR_EOC4(value)                   (ADC_IMR_EOC4_Msk & ((value) << ADC_IMR_EOC4_Pos))  
#define ADC_IMR_EOC5_Pos                      _U_(5)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 5 Position */
#define ADC_IMR_EOC5_Msk                      (_U_(0x1) << ADC_IMR_EOC5_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 5 Mask */
#define ADC_IMR_EOC5(value)                   (ADC_IMR_EOC5_Msk & ((value) << ADC_IMR_EOC5_Pos))  
#define ADC_IMR_EOC6_Pos                      _U_(6)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 6 Position */
#define ADC_IMR_EOC6_Msk                      (_U_(0x1) << ADC_IMR_EOC6_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 6 Mask */
#define ADC_IMR_EOC6(value)                   (ADC_IMR_EOC6_Msk & ((value) << ADC_IMR_EOC6_Pos))  
#define ADC_IMR_EOC7_Pos                      _U_(7)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 7 Position */
#define ADC_IMR_EOC7_Msk                      (_U_(0x1) << ADC_IMR_EOC7_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 7 Mask */
#define ADC_IMR_EOC7(value)                   (ADC_IMR_EOC7_Msk & ((value) << ADC_IMR_EOC7_Pos))  
#define ADC_IMR_EOC8_Pos                      _U_(8)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 8 Position */
#define ADC_IMR_EOC8_Msk                      (_U_(0x1) << ADC_IMR_EOC8_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 8 Mask */
#define ADC_IMR_EOC8(value)                   (ADC_IMR_EOC8_Msk & ((value) << ADC_IMR_EOC8_Pos))  
#define ADC_IMR_EOC9_Pos                      _U_(9)                                               /**< (ADC_IMR) End of Conversion Interrupt Mask 9 Position */
#define ADC_IMR_EOC9_Msk                      (_U_(0x1) << ADC_IMR_EOC9_Pos)                       /**< (ADC_IMR) End of Conversion Interrupt Mask 9 Mask */
#define ADC_IMR_EOC9(value)                   (ADC_IMR_EOC9_Msk & ((value) << ADC_IMR_EOC9_Pos))  
#define ADC_IMR_EOC10_Pos                     _U_(10)                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 10 Position */
#define ADC_IMR_EOC10_Msk                     (_U_(0x1) << ADC_IMR_EOC10_Pos)                      /**< (ADC_IMR) End of Conversion Interrupt Mask 10 Mask */
#define ADC_IMR_EOC10(value)                  (ADC_IMR_EOC10_Msk & ((value) << ADC_IMR_EOC10_Pos))
#define ADC_IMR_EOC11_Pos                     _U_(11)                                              /**< (ADC_IMR) End of Conversion Interrupt Mask 11 Position */
#define ADC_IMR_EOC11_Msk                     (_U_(0x1) << ADC_IMR_EOC11_Pos)                      /**< (ADC_IMR) End of Conversion Interrupt Mask 11 Mask */
#define ADC_IMR_EOC11(value)                  (ADC_IMR_EOC11_Msk & ((value) << ADC_IMR_EOC11_Pos))
#define ADC_IMR_LCCHG_Pos                     _U_(19)                                              /**< (ADC_IMR) Last Channel Change Interrupt Disable Position */
#define ADC_IMR_LCCHG_Msk                     (_U_(0x1) << ADC_IMR_LCCHG_Pos)                      /**< (ADC_IMR) Last Channel Change Interrupt Disable Mask */
#define ADC_IMR_LCCHG(value)                  (ADC_IMR_LCCHG_Msk & ((value) << ADC_IMR_LCCHG_Pos))
#define ADC_IMR_XRDY_Pos                      _U_(20)                                              /**< (ADC_IMR) Touchscreen Measure XPOS Ready Interrupt Mask Position */
#define ADC_IMR_XRDY_Msk                      (_U_(0x1) << ADC_IMR_XRDY_Pos)                       /**< (ADC_IMR) Touchscreen Measure XPOS Ready Interrupt Mask Mask */
#define ADC_IMR_XRDY(value)                   (ADC_IMR_XRDY_Msk & ((value) << ADC_IMR_XRDY_Pos))  
#define ADC_IMR_YRDY_Pos                      _U_(21)                                              /**< (ADC_IMR) Touchscreen Measure YPOS Ready Interrupt Mask Position */
#define ADC_IMR_YRDY_Msk                      (_U_(0x1) << ADC_IMR_YRDY_Pos)                       /**< (ADC_IMR) Touchscreen Measure YPOS Ready Interrupt Mask Mask */
#define ADC_IMR_YRDY(value)                   (ADC_IMR_YRDY_Msk & ((value) << ADC_IMR_YRDY_Pos))  
#define ADC_IMR_PRDY_Pos                      _U_(22)                                              /**< (ADC_IMR) Touchscreen Measure Pressure Ready Interrupt Mask Position */
#define ADC_IMR_PRDY_Msk                      (_U_(0x1) << ADC_IMR_PRDY_Pos)                       /**< (ADC_IMR) Touchscreen Measure Pressure Ready Interrupt Mask Mask */
#define ADC_IMR_PRDY(value)                   (ADC_IMR_PRDY_Msk & ((value) << ADC_IMR_PRDY_Pos))  
#define ADC_IMR_DRDY_Pos                      _U_(24)                                              /**< (ADC_IMR) Data Ready Interrupt Mask Position */
#define ADC_IMR_DRDY_Msk                      (_U_(0x1) << ADC_IMR_DRDY_Pos)                       /**< (ADC_IMR) Data Ready Interrupt Mask Mask */
#define ADC_IMR_DRDY(value)                   (ADC_IMR_DRDY_Msk & ((value) << ADC_IMR_DRDY_Pos))  
#define ADC_IMR_GOVRE_Pos                     _U_(25)                                              /**< (ADC_IMR) General Overrun Error Interrupt Mask Position */
#define ADC_IMR_GOVRE_Msk                     (_U_(0x1) << ADC_IMR_GOVRE_Pos)                      /**< (ADC_IMR) General Overrun Error Interrupt Mask Mask */
#define ADC_IMR_GOVRE(value)                  (ADC_IMR_GOVRE_Msk & ((value) << ADC_IMR_GOVRE_Pos))
#define ADC_IMR_COMPE_Pos                     _U_(26)                                              /**< (ADC_IMR) Comparison Event Interrupt Mask Position */
#define ADC_IMR_COMPE_Msk                     (_U_(0x1) << ADC_IMR_COMPE_Pos)                      /**< (ADC_IMR) Comparison Event Interrupt Mask Mask */
#define ADC_IMR_COMPE(value)                  (ADC_IMR_COMPE_Msk & ((value) << ADC_IMR_COMPE_Pos))
#define ADC_IMR_PEN_Pos                       _U_(29)                                              /**< (ADC_IMR) Pen Contact Interrupt Mask Position */
#define ADC_IMR_PEN_Msk                       (_U_(0x1) << ADC_IMR_PEN_Pos)                        /**< (ADC_IMR) Pen Contact Interrupt Mask Mask */
#define ADC_IMR_PEN(value)                    (ADC_IMR_PEN_Msk & ((value) << ADC_IMR_PEN_Pos))    
#define ADC_IMR_NOPEN_Pos                     _U_(30)                                              /**< (ADC_IMR) No Pen Contact Interrupt Mask Position */
#define ADC_IMR_NOPEN_Msk                     (_U_(0x1) << ADC_IMR_NOPEN_Pos)                      /**< (ADC_IMR) No Pen Contact Interrupt Mask Mask */
#define ADC_IMR_NOPEN(value)                  (ADC_IMR_NOPEN_Msk & ((value) << ADC_IMR_NOPEN_Pos))
#define ADC_IMR_Msk                           _U_(0x67780FFF)                                      /**< (ADC_IMR) Register Mask  */

#define ADC_IMR_EOC_Pos                       _U_(0)                                               /**< (ADC_IMR Position) End of Conversion Interrupt Mask x */
#define ADC_IMR_EOC_Msk                       (_U_(0xFFF) << ADC_IMR_EOC_Pos)                      /**< (ADC_IMR Mask) EOC */
#define ADC_IMR_EOC(value)                    (ADC_IMR_EOC_Msk & ((value) << ADC_IMR_EOC_Pos))     

/* -------- ADC_ISR : (ADC Offset: 0x30) ( R/ 32) Interrupt Status Register -------- */
#define ADC_ISR_EOC0_Pos                      _U_(0)                                               /**< (ADC_ISR) End of Conversion 0 (automatically set / cleared) Position */
#define ADC_ISR_EOC0_Msk                      (_U_(0x1) << ADC_ISR_EOC0_Pos)                       /**< (ADC_ISR) End of Conversion 0 (automatically set / cleared) Mask */
#define ADC_ISR_EOC0(value)                   (ADC_ISR_EOC0_Msk & ((value) << ADC_ISR_EOC0_Pos))  
#define ADC_ISR_EOC1_Pos                      _U_(1)                                               /**< (ADC_ISR) End of Conversion 1 (automatically set / cleared) Position */
#define ADC_ISR_EOC1_Msk                      (_U_(0x1) << ADC_ISR_EOC1_Pos)                       /**< (ADC_ISR) End of Conversion 1 (automatically set / cleared) Mask */
#define ADC_ISR_EOC1(value)                   (ADC_ISR_EOC1_Msk & ((value) << ADC_ISR_EOC1_Pos))  
#define ADC_ISR_EOC2_Pos                      _U_(2)                                               /**< (ADC_ISR) End of Conversion 2 (automatically set / cleared) Position */
#define ADC_ISR_EOC2_Msk                      (_U_(0x1) << ADC_ISR_EOC2_Pos)                       /**< (ADC_ISR) End of Conversion 2 (automatically set / cleared) Mask */
#define ADC_ISR_EOC2(value)                   (ADC_ISR_EOC2_Msk & ((value) << ADC_ISR_EOC2_Pos))  
#define ADC_ISR_EOC3_Pos                      _U_(3)                                               /**< (ADC_ISR) End of Conversion 3 (automatically set / cleared) Position */
#define ADC_ISR_EOC3_Msk                      (_U_(0x1) << ADC_ISR_EOC3_Pos)                       /**< (ADC_ISR) End of Conversion 3 (automatically set / cleared) Mask */
#define ADC_ISR_EOC3(value)                   (ADC_ISR_EOC3_Msk & ((value) << ADC_ISR_EOC3_Pos))  
#define ADC_ISR_EOC4_Pos                      _U_(4)                                               /**< (ADC_ISR) End of Conversion 4 (automatically set / cleared) Position */
#define ADC_ISR_EOC4_Msk                      (_U_(0x1) << ADC_ISR_EOC4_Pos)                       /**< (ADC_ISR) End of Conversion 4 (automatically set / cleared) Mask */
#define ADC_ISR_EOC4(value)                   (ADC_ISR_EOC4_Msk & ((value) << ADC_ISR_EOC4_Pos))  
#define ADC_ISR_EOC5_Pos                      _U_(5)                                               /**< (ADC_ISR) End of Conversion 5 (automatically set / cleared) Position */
#define ADC_ISR_EOC5_Msk                      (_U_(0x1) << ADC_ISR_EOC5_Pos)                       /**< (ADC_ISR) End of Conversion 5 (automatically set / cleared) Mask */
#define ADC_ISR_EOC5(value)                   (ADC_ISR_EOC5_Msk & ((value) << ADC_ISR_EOC5_Pos))  
#define ADC_ISR_EOC6_Pos                      _U_(6)                                               /**< (ADC_ISR) End of Conversion 6 (automatically set / cleared) Position */
#define ADC_ISR_EOC6_Msk                      (_U_(0x1) << ADC_ISR_EOC6_Pos)                       /**< (ADC_ISR) End of Conversion 6 (automatically set / cleared) Mask */
#define ADC_ISR_EOC6(value)                   (ADC_ISR_EOC6_Msk & ((value) << ADC_ISR_EOC6_Pos))  
#define ADC_ISR_EOC7_Pos                      _U_(7)                                               /**< (ADC_ISR) End of Conversion 7 (automatically set / cleared) Position */
#define ADC_ISR_EOC7_Msk                      (_U_(0x1) << ADC_ISR_EOC7_Pos)                       /**< (ADC_ISR) End of Conversion 7 (automatically set / cleared) Mask */
#define ADC_ISR_EOC7(value)                   (ADC_ISR_EOC7_Msk & ((value) << ADC_ISR_EOC7_Pos))  
#define ADC_ISR_EOC8_Pos                      _U_(8)                                               /**< (ADC_ISR) End of Conversion 8 (automatically set / cleared) Position */
#define ADC_ISR_EOC8_Msk                      (_U_(0x1) << ADC_ISR_EOC8_Pos)                       /**< (ADC_ISR) End of Conversion 8 (automatically set / cleared) Mask */
#define ADC_ISR_EOC8(value)                   (ADC_ISR_EOC8_Msk & ((value) << ADC_ISR_EOC8_Pos))  
#define ADC_ISR_EOC9_Pos                      _U_(9)                                               /**< (ADC_ISR) End of Conversion 9 (automatically set / cleared) Position */
#define ADC_ISR_EOC9_Msk                      (_U_(0x1) << ADC_ISR_EOC9_Pos)                       /**< (ADC_ISR) End of Conversion 9 (automatically set / cleared) Mask */
#define ADC_ISR_EOC9(value)                   (ADC_ISR_EOC9_Msk & ((value) << ADC_ISR_EOC9_Pos))  
#define ADC_ISR_EOC10_Pos                     _U_(10)                                              /**< (ADC_ISR) End of Conversion 10 (automatically set / cleared) Position */
#define ADC_ISR_EOC10_Msk                     (_U_(0x1) << ADC_ISR_EOC10_Pos)                      /**< (ADC_ISR) End of Conversion 10 (automatically set / cleared) Mask */
#define ADC_ISR_EOC10(value)                  (ADC_ISR_EOC10_Msk & ((value) << ADC_ISR_EOC10_Pos))
#define ADC_ISR_EOC11_Pos                     _U_(11)                                              /**< (ADC_ISR) End of Conversion 11 (automatically set / cleared) Position */
#define ADC_ISR_EOC11_Msk                     (_U_(0x1) << ADC_ISR_EOC11_Pos)                      /**< (ADC_ISR) End of Conversion 11 (automatically set / cleared) Mask */
#define ADC_ISR_EOC11(value)                  (ADC_ISR_EOC11_Msk & ((value) << ADC_ISR_EOC11_Pos))
#define ADC_ISR_LCCHG_Pos                     _U_(19)                                              /**< (ADC_ISR) Last Channel Change (cleared on read) Position */
#define ADC_ISR_LCCHG_Msk                     (_U_(0x1) << ADC_ISR_LCCHG_Pos)                      /**< (ADC_ISR) Last Channel Change (cleared on read) Mask */
#define ADC_ISR_LCCHG(value)                  (ADC_ISR_LCCHG_Msk & ((value) << ADC_ISR_LCCHG_Pos))
#define ADC_ISR_XRDY_Pos                      _U_(20)                                              /**< (ADC_ISR) Touchscreen XPOS Measure Ready (cleared on read) Position */
#define ADC_ISR_XRDY_Msk                      (_U_(0x1) << ADC_ISR_XRDY_Pos)                       /**< (ADC_ISR) Touchscreen XPOS Measure Ready (cleared on read) Mask */
#define ADC_ISR_XRDY(value)                   (ADC_ISR_XRDY_Msk & ((value) << ADC_ISR_XRDY_Pos))  
#define ADC_ISR_YRDY_Pos                      _U_(21)                                              /**< (ADC_ISR) Touchscreen YPOS Measure Ready (cleared on read) Position */
#define ADC_ISR_YRDY_Msk                      (_U_(0x1) << ADC_ISR_YRDY_Pos)                       /**< (ADC_ISR) Touchscreen YPOS Measure Ready (cleared on read) Mask */
#define ADC_ISR_YRDY(value)                   (ADC_ISR_YRDY_Msk & ((value) << ADC_ISR_YRDY_Pos))  
#define ADC_ISR_PRDY_Pos                      _U_(22)                                              /**< (ADC_ISR) Touchscreen Pressure Measure Ready (cleared on read) Position */
#define ADC_ISR_PRDY_Msk                      (_U_(0x1) << ADC_ISR_PRDY_Pos)                       /**< (ADC_ISR) Touchscreen Pressure Measure Ready (cleared on read) Mask */
#define ADC_ISR_PRDY(value)                   (ADC_ISR_PRDY_Msk & ((value) << ADC_ISR_PRDY_Pos))  
#define ADC_ISR_DRDY_Pos                      _U_(24)                                              /**< (ADC_ISR) Data Ready (automatically set / cleared) Position */
#define ADC_ISR_DRDY_Msk                      (_U_(0x1) << ADC_ISR_DRDY_Pos)                       /**< (ADC_ISR) Data Ready (automatically set / cleared) Mask */
#define ADC_ISR_DRDY(value)                   (ADC_ISR_DRDY_Msk & ((value) << ADC_ISR_DRDY_Pos))  
#define ADC_ISR_GOVRE_Pos                     _U_(25)                                              /**< (ADC_ISR) General Overrun Error (cleared on read) Position */
#define ADC_ISR_GOVRE_Msk                     (_U_(0x1) << ADC_ISR_GOVRE_Pos)                      /**< (ADC_ISR) General Overrun Error (cleared on read) Mask */
#define ADC_ISR_GOVRE(value)                  (ADC_ISR_GOVRE_Msk & ((value) << ADC_ISR_GOVRE_Pos))
#define ADC_ISR_COMPE_Pos                     _U_(26)                                              /**< (ADC_ISR) Comparison Event (cleared on read) Position */
#define ADC_ISR_COMPE_Msk                     (_U_(0x1) << ADC_ISR_COMPE_Pos)                      /**< (ADC_ISR) Comparison Event (cleared on read) Mask */
#define ADC_ISR_COMPE(value)                  (ADC_ISR_COMPE_Msk & ((value) << ADC_ISR_COMPE_Pos))
#define ADC_ISR_PEN_Pos                       _U_(29)                                              /**< (ADC_ISR) Pen contact (cleared on read) Position */
#define ADC_ISR_PEN_Msk                       (_U_(0x1) << ADC_ISR_PEN_Pos)                        /**< (ADC_ISR) Pen contact (cleared on read) Mask */
#define ADC_ISR_PEN(value)                    (ADC_ISR_PEN_Msk & ((value) << ADC_ISR_PEN_Pos))    
#define ADC_ISR_NOPEN_Pos                     _U_(30)                                              /**< (ADC_ISR) No Pen Contact (cleared on read) Position */
#define ADC_ISR_NOPEN_Msk                     (_U_(0x1) << ADC_ISR_NOPEN_Pos)                      /**< (ADC_ISR) No Pen Contact (cleared on read) Mask */
#define ADC_ISR_NOPEN(value)                  (ADC_ISR_NOPEN_Msk & ((value) << ADC_ISR_NOPEN_Pos))
#define ADC_ISR_PENS_Pos                      _U_(31)                                              /**< (ADC_ISR) Pen Detect Status Position */
#define ADC_ISR_PENS_Msk                      (_U_(0x1) << ADC_ISR_PENS_Pos)                       /**< (ADC_ISR) Pen Detect Status Mask */
#define ADC_ISR_PENS(value)                   (ADC_ISR_PENS_Msk & ((value) << ADC_ISR_PENS_Pos))  
#define ADC_ISR_Msk                           _U_(0xE7780FFF)                                      /**< (ADC_ISR) Register Mask  */

#define ADC_ISR_EOC_Pos                       _U_(0)                                               /**< (ADC_ISR Position) End of Conversion x (automatically set / cleared) */
#define ADC_ISR_EOC_Msk                       (_U_(0xFFF) << ADC_ISR_EOC_Pos)                      /**< (ADC_ISR Mask) EOC */
#define ADC_ISR_EOC(value)                    (ADC_ISR_EOC_Msk & ((value) << ADC_ISR_EOC_Pos))     

/* -------- ADC_LCTMR : (ADC Offset: 0x34) (R/W 32) Last Channel Trigger Mode Register -------- */
#define ADC_LCTMR_DUALTRIG_Pos                _U_(0)                                               /**< (ADC_LCTMR) Dual Trigger ON Position */
#define ADC_LCTMR_DUALTRIG_Msk                (_U_(0x1) << ADC_LCTMR_DUALTRIG_Pos)                 /**< (ADC_LCTMR) Dual Trigger ON Mask */
#define ADC_LCTMR_DUALTRIG(value)             (ADC_LCTMR_DUALTRIG_Msk & ((value) << ADC_LCTMR_DUALTRIG_Pos))
#define ADC_LCTMR_CMPMOD_Pos                  _U_(4)                                               /**< (ADC_LCTMR) Last Channel Comparison Mode Position */
#define ADC_LCTMR_CMPMOD_Msk                  (_U_(0x3) << ADC_LCTMR_CMPMOD_Pos)                   /**< (ADC_LCTMR) Last Channel Comparison Mode Mask */
#define ADC_LCTMR_CMPMOD(value)               (ADC_LCTMR_CMPMOD_Msk & ((value) << ADC_LCTMR_CMPMOD_Pos))
#define   ADC_LCTMR_CMPMOD_LOW_Val            _U_(0x0)                                             /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is lower than the low threshold of the window.  */
#define   ADC_LCTMR_CMPMOD_HIGH_Val           _U_(0x1)                                             /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is higher than the high threshold of the window.  */
#define   ADC_LCTMR_CMPMOD_IN_Val             _U_(0x2)                                             /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is in the comparison window.  */
#define   ADC_LCTMR_CMPMOD_OUT_Val            _U_(0x3)                                             /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is out of the comparison window.  */
#define ADC_LCTMR_CMPMOD_LOW                  (ADC_LCTMR_CMPMOD_LOW_Val << ADC_LCTMR_CMPMOD_Pos)   /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is lower than the low threshold of the window. Position  */
#define ADC_LCTMR_CMPMOD_HIGH                 (ADC_LCTMR_CMPMOD_HIGH_Val << ADC_LCTMR_CMPMOD_Pos)  /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is higher than the high threshold of the window. Position  */
#define ADC_LCTMR_CMPMOD_IN                   (ADC_LCTMR_CMPMOD_IN_Val << ADC_LCTMR_CMPMOD_Pos)    /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is in the comparison window. Position  */
#define ADC_LCTMR_CMPMOD_OUT                  (ADC_LCTMR_CMPMOD_OUT_Val << ADC_LCTMR_CMPMOD_Pos)   /**< (ADC_LCTMR) Generates the LCCHG flag in ADC_ISR when the converted data is out of the comparison window. Position  */
#define ADC_LCTMR_Msk                         _U_(0x00000031)                                      /**< (ADC_LCTMR) Register Mask  */


/* -------- ADC_LCCWR : (ADC Offset: 0x38) (R/W 32) Last Channel Compare Window Register -------- */
#define ADC_LCCWR_LOWTHRES_Pos                _U_(0)                                               /**< (ADC_LCCWR) Low Threshold Position */
#define ADC_LCCWR_LOWTHRES_Msk                (_U_(0xFFF) << ADC_LCCWR_LOWTHRES_Pos)               /**< (ADC_LCCWR) Low Threshold Mask */
#define ADC_LCCWR_LOWTHRES(value)             (ADC_LCCWR_LOWTHRES_Msk & ((value) << ADC_LCCWR_LOWTHRES_Pos))
#define ADC_LCCWR_HIGHTHRES_Pos               _U_(16)                                              /**< (ADC_LCCWR) High Threshold Position */
#define ADC_LCCWR_HIGHTHRES_Msk               (_U_(0xFFF) << ADC_LCCWR_HIGHTHRES_Pos)              /**< (ADC_LCCWR) High Threshold Mask */
#define ADC_LCCWR_HIGHTHRES(value)            (ADC_LCCWR_HIGHTHRES_Msk & ((value) << ADC_LCCWR_HIGHTHRES_Pos))
#define ADC_LCCWR_Msk                         _U_(0x0FFF0FFF)                                      /**< (ADC_LCCWR) Register Mask  */


/* -------- ADC_OVER : (ADC Offset: 0x3C) ( R/ 32) Overrun Status Register -------- */
#define ADC_OVER_OVRE0_Pos                    _U_(0)                                               /**< (ADC_OVER) Overrun Error 0 Position */
#define ADC_OVER_OVRE0_Msk                    (_U_(0x1) << ADC_OVER_OVRE0_Pos)                     /**< (ADC_OVER) Overrun Error 0 Mask */
#define ADC_OVER_OVRE0(value)                 (ADC_OVER_OVRE0_Msk & ((value) << ADC_OVER_OVRE0_Pos))
#define ADC_OVER_OVRE1_Pos                    _U_(1)                                               /**< (ADC_OVER) Overrun Error 1 Position */
#define ADC_OVER_OVRE1_Msk                    (_U_(0x1) << ADC_OVER_OVRE1_Pos)                     /**< (ADC_OVER) Overrun Error 1 Mask */
#define ADC_OVER_OVRE1(value)                 (ADC_OVER_OVRE1_Msk & ((value) << ADC_OVER_OVRE1_Pos))
#define ADC_OVER_OVRE2_Pos                    _U_(2)                                               /**< (ADC_OVER) Overrun Error 2 Position */
#define ADC_OVER_OVRE2_Msk                    (_U_(0x1) << ADC_OVER_OVRE2_Pos)                     /**< (ADC_OVER) Overrun Error 2 Mask */
#define ADC_OVER_OVRE2(value)                 (ADC_OVER_OVRE2_Msk & ((value) << ADC_OVER_OVRE2_Pos))
#define ADC_OVER_OVRE3_Pos                    _U_(3)                                               /**< (ADC_OVER) Overrun Error 3 Position */
#define ADC_OVER_OVRE3_Msk                    (_U_(0x1) << ADC_OVER_OVRE3_Pos)                     /**< (ADC_OVER) Overrun Error 3 Mask */
#define ADC_OVER_OVRE3(value)                 (ADC_OVER_OVRE3_Msk & ((value) << ADC_OVER_OVRE3_Pos))
#define ADC_OVER_OVRE4_Pos                    _U_(4)                                               /**< (ADC_OVER) Overrun Error 4 Position */
#define ADC_OVER_OVRE4_Msk                    (_U_(0x1) << ADC_OVER_OVRE4_Pos)                     /**< (ADC_OVER) Overrun Error 4 Mask */
#define ADC_OVER_OVRE4(value)                 (ADC_OVER_OVRE4_Msk & ((value) << ADC_OVER_OVRE4_Pos))
#define ADC_OVER_OVRE5_Pos                    _U_(5)                                               /**< (ADC_OVER) Overrun Error 5 Position */
#define ADC_OVER_OVRE5_Msk                    (_U_(0x1) << ADC_OVER_OVRE5_Pos)                     /**< (ADC_OVER) Overrun Error 5 Mask */
#define ADC_OVER_OVRE5(value)                 (ADC_OVER_OVRE5_Msk & ((value) << ADC_OVER_OVRE5_Pos))
#define ADC_OVER_OVRE6_Pos                    _U_(6)                                               /**< (ADC_OVER) Overrun Error 6 Position */
#define ADC_OVER_OVRE6_Msk                    (_U_(0x1) << ADC_OVER_OVRE6_Pos)                     /**< (ADC_OVER) Overrun Error 6 Mask */
#define ADC_OVER_OVRE6(value)                 (ADC_OVER_OVRE6_Msk & ((value) << ADC_OVER_OVRE6_Pos))
#define ADC_OVER_OVRE7_Pos                    _U_(7)                                               /**< (ADC_OVER) Overrun Error 7 Position */
#define ADC_OVER_OVRE7_Msk                    (_U_(0x1) << ADC_OVER_OVRE7_Pos)                     /**< (ADC_OVER) Overrun Error 7 Mask */
#define ADC_OVER_OVRE7(value)                 (ADC_OVER_OVRE7_Msk & ((value) << ADC_OVER_OVRE7_Pos))
#define ADC_OVER_OVRE8_Pos                    _U_(8)                                               /**< (ADC_OVER) Overrun Error 8 Position */
#define ADC_OVER_OVRE8_Msk                    (_U_(0x1) << ADC_OVER_OVRE8_Pos)                     /**< (ADC_OVER) Overrun Error 8 Mask */
#define ADC_OVER_OVRE8(value)                 (ADC_OVER_OVRE8_Msk & ((value) << ADC_OVER_OVRE8_Pos))
#define ADC_OVER_OVRE9_Pos                    _U_(9)                                               /**< (ADC_OVER) Overrun Error 9 Position */
#define ADC_OVER_OVRE9_Msk                    (_U_(0x1) << ADC_OVER_OVRE9_Pos)                     /**< (ADC_OVER) Overrun Error 9 Mask */
#define ADC_OVER_OVRE9(value)                 (ADC_OVER_OVRE9_Msk & ((value) << ADC_OVER_OVRE9_Pos))
#define ADC_OVER_OVRE10_Pos                   _U_(10)                                              /**< (ADC_OVER) Overrun Error 10 Position */
#define ADC_OVER_OVRE10_Msk                   (_U_(0x1) << ADC_OVER_OVRE10_Pos)                    /**< (ADC_OVER) Overrun Error 10 Mask */
#define ADC_OVER_OVRE10(value)                (ADC_OVER_OVRE10_Msk & ((value) << ADC_OVER_OVRE10_Pos))
#define ADC_OVER_OVRE11_Pos                   _U_(11)                                              /**< (ADC_OVER) Overrun Error 11 Position */
#define ADC_OVER_OVRE11_Msk                   (_U_(0x1) << ADC_OVER_OVRE11_Pos)                    /**< (ADC_OVER) Overrun Error 11 Mask */
#define ADC_OVER_OVRE11(value)                (ADC_OVER_OVRE11_Msk & ((value) << ADC_OVER_OVRE11_Pos))
#define ADC_OVER_Msk                          _U_(0x00000FFF)                                      /**< (ADC_OVER) Register Mask  */

#define ADC_OVER_OVRE_Pos                     _U_(0)                                               /**< (ADC_OVER Position) Overrun Error xx */
#define ADC_OVER_OVRE_Msk                     (_U_(0xFFF) << ADC_OVER_OVRE_Pos)                    /**< (ADC_OVER Mask) OVRE */
#define ADC_OVER_OVRE(value)                  (ADC_OVER_OVRE_Msk & ((value) << ADC_OVER_OVRE_Pos)) 

/* -------- ADC_EMR : (ADC Offset: 0x40) (R/W 32) Extended Mode Register -------- */
#define ADC_EMR_CMPMODE_Pos                   _U_(0)                                               /**< (ADC_EMR) Comparison Mode Position */
#define ADC_EMR_CMPMODE_Msk                   (_U_(0x3) << ADC_EMR_CMPMODE_Pos)                    /**< (ADC_EMR) Comparison Mode Mask */
#define ADC_EMR_CMPMODE(value)                (ADC_EMR_CMPMODE_Msk & ((value) << ADC_EMR_CMPMODE_Pos))
#define   ADC_EMR_CMPMODE_LOW_Val             _U_(0x0)                                             /**< (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode.  */
#define   ADC_EMR_CMPMODE_HIGH_Val            _U_(0x1)                                             /**< (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode.  */
#define   ADC_EMR_CMPMODE_IN_Val              _U_(0x2)                                             /**< (ADC_EMR) When the converted data is in the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode.  */
#define   ADC_EMR_CMPMODE_OUT_Val             _U_(0x3)                                             /**< (ADC_EMR) When the converted data is out of the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode.  */
#define ADC_EMR_CMPMODE_LOW                   (ADC_EMR_CMPMODE_LOW_Val << ADC_EMR_CMPMODE_Pos)     /**< (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_HIGH                  (ADC_EMR_CMPMODE_HIGH_Val << ADC_EMR_CMPMODE_Pos)    /**< (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_IN                    (ADC_EMR_CMPMODE_IN_Val << ADC_EMR_CMPMODE_Pos)      /**< (ADC_EMR) When the converted data is in the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_OUT                   (ADC_EMR_CMPMODE_OUT_Val << ADC_EMR_CMPMODE_Pos)     /**< (ADC_EMR) When the converted data is out of the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit system from Wait mode. Position  */
#define ADC_EMR_CMPTYPE_Pos                   _U_(2)                                               /**< (ADC_EMR) Comparison Type Position */
#define ADC_EMR_CMPTYPE_Msk                   (_U_(0x1) << ADC_EMR_CMPTYPE_Pos)                    /**< (ADC_EMR) Comparison Type Mask */
#define ADC_EMR_CMPTYPE(value)                (ADC_EMR_CMPTYPE_Msk & ((value) << ADC_EMR_CMPTYPE_Pos))
#define   ADC_EMR_CMPTYPE_FLAG_ONLY_Val       _U_(0x0)                                             /**< (ADC_EMR) Any conversion is performed and comparison function drives the COMPE flag.  */
#define   ADC_EMR_CMPTYPE_START_CONDITION_Val _U_(0x1)                                             /**< (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until the CMPRST bit is set.  */
#define ADC_EMR_CMPTYPE_FLAG_ONLY             (ADC_EMR_CMPTYPE_FLAG_ONLY_Val << ADC_EMR_CMPTYPE_Pos) /**< (ADC_EMR) Any conversion is performed and comparison function drives the COMPE flag. Position  */
#define ADC_EMR_CMPTYPE_START_CONDITION       (ADC_EMR_CMPTYPE_START_CONDITION_Val << ADC_EMR_CMPTYPE_Pos) /**< (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until the CMPRST bit is set. Position  */
#define ADC_EMR_CMPSEL_Pos                    _U_(4)                                               /**< (ADC_EMR) Comparison Selected Channel Position */
#define ADC_EMR_CMPSEL_Msk                    (_U_(0xF) << ADC_EMR_CMPSEL_Pos)                     /**< (ADC_EMR) Comparison Selected Channel Mask */
#define ADC_EMR_CMPSEL(value)                 (ADC_EMR_CMPSEL_Msk & ((value) << ADC_EMR_CMPSEL_Pos))
#define ADC_EMR_CMPALL_Pos                    _U_(9)                                               /**< (ADC_EMR) Compare All Channels Position */
#define ADC_EMR_CMPALL_Msk                    (_U_(0x1) << ADC_EMR_CMPALL_Pos)                     /**< (ADC_EMR) Compare All Channels Mask */
#define ADC_EMR_CMPALL(value)                 (ADC_EMR_CMPALL_Msk & ((value) << ADC_EMR_CMPALL_Pos))
#define ADC_EMR_CMPFILTER_Pos                 _U_(12)                                              /**< (ADC_EMR) Compare Event Filtering Position */
#define ADC_EMR_CMPFILTER_Msk                 (_U_(0x3) << ADC_EMR_CMPFILTER_Pos)                  /**< (ADC_EMR) Compare Event Filtering Mask */
#define ADC_EMR_CMPFILTER(value)              (ADC_EMR_CMPFILTER_Msk & ((value) << ADC_EMR_CMPFILTER_Pos))
#define ADC_EMR_OSR_Pos                       _U_(16)                                              /**< (ADC_EMR) Over Sampling Rate Position */
#define ADC_EMR_OSR_Msk                       (_U_(0x3) << ADC_EMR_OSR_Pos)                        /**< (ADC_EMR) Over Sampling Rate Mask */
#define ADC_EMR_OSR(value)                    (ADC_EMR_OSR_Msk & ((value) << ADC_EMR_OSR_Pos))    
#define   ADC_EMR_OSR_NO_AVERAGE_Val          _U_(0x0)                                             /**< (ADC_EMR) No averaging. ADC sample rate is maximum.  */
#define   ADC_EMR_OSR_OSR4_Val                _U_(0x1)                                             /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4.  */
#define   ADC_EMR_OSR_OSR16_Val               _U_(0x2)                                             /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16.  */
#define ADC_EMR_OSR_NO_AVERAGE                (ADC_EMR_OSR_NO_AVERAGE_Val << ADC_EMR_OSR_Pos)      /**< (ADC_EMR) No averaging. ADC sample rate is maximum. Position  */
#define ADC_EMR_OSR_OSR4                      (ADC_EMR_OSR_OSR4_Val << ADC_EMR_OSR_Pos)            /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4. Position  */
#define ADC_EMR_OSR_OSR16                     (ADC_EMR_OSR_OSR16_Val << ADC_EMR_OSR_Pos)           /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16. Position  */
#define ADC_EMR_ASTE_Pos                      _U_(20)                                              /**< (ADC_EMR) Averaging on Single Trigger Event Position */
#define ADC_EMR_ASTE_Msk                      (_U_(0x1) << ADC_EMR_ASTE_Pos)                       /**< (ADC_EMR) Averaging on Single Trigger Event Mask */
#define ADC_EMR_ASTE(value)                   (ADC_EMR_ASTE_Msk & ((value) << ADC_EMR_ASTE_Pos))  
#define   ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val _U_(0x0)                                             /**< (ADC_EMR) The average requests several trigger events.  */
#define   ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val _U_(0x1)                                             /**< (ADC_EMR) The average requests only one trigger event.  */
#define ADC_EMR_ASTE_MULTI_TRIG_AVERAGE       (ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos) /**< (ADC_EMR) The average requests several trigger events. Position  */
#define ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE      (ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos) /**< (ADC_EMR) The average requests only one trigger event. Position  */
#define ADC_EMR_SRCCLK_Pos                    _U_(21)                                              /**< (ADC_EMR) External Clock Selection Position */
#define ADC_EMR_SRCCLK_Msk                    (_U_(0x1) << ADC_EMR_SRCCLK_Pos)                     /**< (ADC_EMR) External Clock Selection Mask */
#define ADC_EMR_SRCCLK(value)                 (ADC_EMR_SRCCLK_Msk & ((value) << ADC_EMR_SRCCLK_Pos))
#define   ADC_EMR_SRCCLK_PERIPH_CLK_Val       _U_(0x0)                                             /**< (ADC_EMR) The peripheral clock is the source for the ADC prescaler.  */
#define   ADC_EMR_SRCCLK_GCLK_Val             _U_(0x1)                                             /**< (ADC_EMR) GCLK is the source clock for the ADC prescaler, thus the ADC clock can be independent of the core/peripheral clock.  */
#define ADC_EMR_SRCCLK_PERIPH_CLK             (ADC_EMR_SRCCLK_PERIPH_CLK_Val << ADC_EMR_SRCCLK_Pos) /**< (ADC_EMR) The peripheral clock is the source for the ADC prescaler. Position  */
#define ADC_EMR_SRCCLK_GCLK                   (ADC_EMR_SRCCLK_GCLK_Val << ADC_EMR_SRCCLK_Pos)      /**< (ADC_EMR) GCLK is the source clock for the ADC prescaler, thus the ADC clock can be independent of the core/peripheral clock. Position  */
#define ADC_EMR_TAG_Pos                       _U_(24)                                              /**< (ADC_EMR) Tag of ADC_LCDR Position */
#define ADC_EMR_TAG_Msk                       (_U_(0x1) << ADC_EMR_TAG_Pos)                        /**< (ADC_EMR) Tag of ADC_LCDR Mask */
#define ADC_EMR_TAG(value)                    (ADC_EMR_TAG_Msk & ((value) << ADC_EMR_TAG_Pos))    
#define ADC_EMR_SIGNMODE_Pos                  _U_(25)                                              /**< (ADC_EMR) Sign Mode Position */
#define ADC_EMR_SIGNMODE_Msk                  (_U_(0x3) << ADC_EMR_SIGNMODE_Pos)                   /**< (ADC_EMR) Sign Mode Mask */
#define ADC_EMR_SIGNMODE(value)               (ADC_EMR_SIGNMODE_Msk & ((value) << ADC_EMR_SIGNMODE_Pos))
#define   ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val _U_(0x0)                                             /**< (ADC_EMR) Single-Ended channels: Unsigned conversions.Differential channels: Signed conversions.  */
#define   ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val _U_(0x1)                                             /**< (ADC_EMR) Single-Ended channels: Signed conversions.Differential channels: Unsigned conversions.  */
#define   ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val   _U_(0x2)                                             /**< (ADC_EMR) All channels: Unsigned conversions.  */
#define   ADC_EMR_SIGNMODE_ALL_SIGNED_Val     _U_(0x3)                                             /**< (ADC_EMR) All channels: Signed conversions.  */
#define ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN      (ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val << ADC_EMR_SIGNMODE_Pos) /**< (ADC_EMR) Single-Ended channels: Unsigned conversions.Differential channels: Signed conversions. Position  */
#define ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG      (ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val << ADC_EMR_SIGNMODE_Pos) /**< (ADC_EMR) Single-Ended channels: Signed conversions.Differential channels: Unsigned conversions. Position  */
#define ADC_EMR_SIGNMODE_ALL_UNSIGNED         (ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val << ADC_EMR_SIGNMODE_Pos) /**< (ADC_EMR) All channels: Unsigned conversions. Position  */
#define ADC_EMR_SIGNMODE_ALL_SIGNED           (ADC_EMR_SIGNMODE_ALL_SIGNED_Val << ADC_EMR_SIGNMODE_Pos) /**< (ADC_EMR) All channels: Signed conversions. Position  */
#define ADC_EMR_ADCMODE_Pos                   _U_(28)                                              /**< (ADC_EMR) ADC Running Mode Position */
#define ADC_EMR_ADCMODE_Msk                   (_U_(0x3) << ADC_EMR_ADCMODE_Pos)                    /**< (ADC_EMR) ADC Running Mode Mask */
#define ADC_EMR_ADCMODE(value)                (ADC_EMR_ADCMODE_Msk & ((value) << ADC_EMR_ADCMODE_Pos))
#define   ADC_EMR_ADCMODE_NORMAL_Val          _U_(0x0)                                             /**< (ADC_EMR) Normal mode of operation.  */
#define   ADC_EMR_ADCMODE_OFFSET_ERROR_Val    _U_(0x1)                                             /**< (ADC_EMR) Offset Error mode to measure the offset error. See Table 7-6.  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val _U_(0x2)                                             /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-6.  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val  _U_(0x3)                                             /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-6.  */
#define ADC_EMR_ADCMODE_NORMAL                (ADC_EMR_ADCMODE_NORMAL_Val << ADC_EMR_ADCMODE_Pos)  /**< (ADC_EMR) Normal mode of operation. Position  */
#define ADC_EMR_ADCMODE_OFFSET_ERROR          (ADC_EMR_ADCMODE_OFFSET_ERROR_Val << ADC_EMR_ADCMODE_Pos) /**< (ADC_EMR) Offset Error mode to measure the offset error. See Table 7-6. Position  */
#define ADC_EMR_ADCMODE_GAIN_ERROR_HIGH       (ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val << ADC_EMR_ADCMODE_Pos) /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-6. Position  */
#define ADC_EMR_ADCMODE_GAIN_ERROR_LOW        (ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val << ADC_EMR_ADCMODE_Pos) /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-6. Position  */
#define ADC_EMR_Msk                           _U_(0x373332F7)                                      /**< (ADC_EMR) Register Mask  */


/* -------- ADC_CWR : (ADC Offset: 0x44) (R/W 32) Compare Window Register -------- */
#define ADC_CWR_LOWTHRES_Pos                  _U_(0)                                               /**< (ADC_CWR) Low Threshold Position */
#define ADC_CWR_LOWTHRES_Msk                  (_U_(0x3FFF) << ADC_CWR_LOWTHRES_Pos)                /**< (ADC_CWR) Low Threshold Mask */
#define ADC_CWR_LOWTHRES(value)               (ADC_CWR_LOWTHRES_Msk & ((value) << ADC_CWR_LOWTHRES_Pos))
#define ADC_CWR_HIGHTHRES_Pos                 _U_(16)                                              /**< (ADC_CWR) High Threshold Position */
#define ADC_CWR_HIGHTHRES_Msk                 (_U_(0x3FFF) << ADC_CWR_HIGHTHRES_Pos)               /**< (ADC_CWR) High Threshold Mask */
#define ADC_CWR_HIGHTHRES(value)              (ADC_CWR_HIGHTHRES_Msk & ((value) << ADC_CWR_HIGHTHRES_Pos))
#define ADC_CWR_Msk                           _U_(0x3FFF3FFF)                                      /**< (ADC_CWR) Register Mask  */


/* -------- ADC_COR : (ADC Offset: 0x4C) (R/W 32) Channel Offset Register -------- */
#define ADC_COR_DIFF0_Pos                     _U_(16)                                              /**< (ADC_COR) Differential Inputs for Channel 0 Position */
#define ADC_COR_DIFF0_Msk                     (_U_(0x1) << ADC_COR_DIFF0_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 0 Mask */
#define ADC_COR_DIFF0(value)                  (ADC_COR_DIFF0_Msk & ((value) << ADC_COR_DIFF0_Pos))
#define ADC_COR_DIFF1_Pos                     _U_(17)                                              /**< (ADC_COR) Differential Inputs for Channel 1 Position */
#define ADC_COR_DIFF1_Msk                     (_U_(0x1) << ADC_COR_DIFF1_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 1 Mask */
#define ADC_COR_DIFF1(value)                  (ADC_COR_DIFF1_Msk & ((value) << ADC_COR_DIFF1_Pos))
#define ADC_COR_DIFF2_Pos                     _U_(18)                                              /**< (ADC_COR) Differential Inputs for Channel 2 Position */
#define ADC_COR_DIFF2_Msk                     (_U_(0x1) << ADC_COR_DIFF2_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 2 Mask */
#define ADC_COR_DIFF2(value)                  (ADC_COR_DIFF2_Msk & ((value) << ADC_COR_DIFF2_Pos))
#define ADC_COR_DIFF3_Pos                     _U_(19)                                              /**< (ADC_COR) Differential Inputs for Channel 3 Position */
#define ADC_COR_DIFF3_Msk                     (_U_(0x1) << ADC_COR_DIFF3_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 3 Mask */
#define ADC_COR_DIFF3(value)                  (ADC_COR_DIFF3_Msk & ((value) << ADC_COR_DIFF3_Pos))
#define ADC_COR_DIFF4_Pos                     _U_(20)                                              /**< (ADC_COR) Differential Inputs for Channel 4 Position */
#define ADC_COR_DIFF4_Msk                     (_U_(0x1) << ADC_COR_DIFF4_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 4 Mask */
#define ADC_COR_DIFF4(value)                  (ADC_COR_DIFF4_Msk & ((value) << ADC_COR_DIFF4_Pos))
#define ADC_COR_DIFF5_Pos                     _U_(21)                                              /**< (ADC_COR) Differential Inputs for Channel 5 Position */
#define ADC_COR_DIFF5_Msk                     (_U_(0x1) << ADC_COR_DIFF5_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 5 Mask */
#define ADC_COR_DIFF5(value)                  (ADC_COR_DIFF5_Msk & ((value) << ADC_COR_DIFF5_Pos))
#define ADC_COR_DIFF6_Pos                     _U_(22)                                              /**< (ADC_COR) Differential Inputs for Channel 6 Position */
#define ADC_COR_DIFF6_Msk                     (_U_(0x1) << ADC_COR_DIFF6_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 6 Mask */
#define ADC_COR_DIFF6(value)                  (ADC_COR_DIFF6_Msk & ((value) << ADC_COR_DIFF6_Pos))
#define ADC_COR_DIFF7_Pos                     _U_(23)                                              /**< (ADC_COR) Differential Inputs for Channel 7 Position */
#define ADC_COR_DIFF7_Msk                     (_U_(0x1) << ADC_COR_DIFF7_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 7 Mask */
#define ADC_COR_DIFF7(value)                  (ADC_COR_DIFF7_Msk & ((value) << ADC_COR_DIFF7_Pos))
#define ADC_COR_DIFF8_Pos                     _U_(24)                                              /**< (ADC_COR) Differential Inputs for Channel 8 Position */
#define ADC_COR_DIFF8_Msk                     (_U_(0x1) << ADC_COR_DIFF8_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 8 Mask */
#define ADC_COR_DIFF8(value)                  (ADC_COR_DIFF8_Msk & ((value) << ADC_COR_DIFF8_Pos))
#define ADC_COR_DIFF9_Pos                     _U_(25)                                              /**< (ADC_COR) Differential Inputs for Channel 9 Position */
#define ADC_COR_DIFF9_Msk                     (_U_(0x1) << ADC_COR_DIFF9_Pos)                      /**< (ADC_COR) Differential Inputs for Channel 9 Mask */
#define ADC_COR_DIFF9(value)                  (ADC_COR_DIFF9_Msk & ((value) << ADC_COR_DIFF9_Pos))
#define ADC_COR_DIFF10_Pos                    _U_(26)                                              /**< (ADC_COR) Differential Inputs for Channel 10 Position */
#define ADC_COR_DIFF10_Msk                    (_U_(0x1) << ADC_COR_DIFF10_Pos)                     /**< (ADC_COR) Differential Inputs for Channel 10 Mask */
#define ADC_COR_DIFF10(value)                 (ADC_COR_DIFF10_Msk & ((value) << ADC_COR_DIFF10_Pos))
#define ADC_COR_DIFF11_Pos                    _U_(27)                                              /**< (ADC_COR) Differential Inputs for Channel 11 Position */
#define ADC_COR_DIFF11_Msk                    (_U_(0x1) << ADC_COR_DIFF11_Pos)                     /**< (ADC_COR) Differential Inputs for Channel 11 Mask */
#define ADC_COR_DIFF11(value)                 (ADC_COR_DIFF11_Msk & ((value) << ADC_COR_DIFF11_Pos))
#define ADC_COR_Msk                           _U_(0x0FFF0000)                                      /**< (ADC_COR) Register Mask  */

#define ADC_COR_DIFF_Pos                      _U_(16)                                              /**< (ADC_COR Position) Differential Inputs for Channel xx */
#define ADC_COR_DIFF_Msk                      (_U_(0xFFF) << ADC_COR_DIFF_Pos)                     /**< (ADC_COR Mask) DIFF */
#define ADC_COR_DIFF(value)                   (ADC_COR_DIFF_Msk & ((value) << ADC_COR_DIFF_Pos))   

/* -------- ADC_CDR : (ADC Offset: 0x50) ( R/ 32) Channel Data Register -------- */
#define ADC_CDR_DATA_Pos                      _U_(0)                                               /**< (ADC_CDR) Converted Data Position */
#define ADC_CDR_DATA_Msk                      (_U_(0x3FFF) << ADC_CDR_DATA_Pos)                    /**< (ADC_CDR) Converted Data Mask */
#define ADC_CDR_DATA(value)                   (ADC_CDR_DATA_Msk & ((value) << ADC_CDR_DATA_Pos))  
#define ADC_CDR_Msk                           _U_(0x00003FFF)                                      /**< (ADC_CDR) Register Mask  */


/* -------- ADC_ACR : (ADC Offset: 0x94) (R/W 32) Analog Control Register -------- */
#define ADC_ACR_PENDETSENS_Pos                _U_(0)                                               /**< (ADC_ACR) Pen Detection Sensitivity Position */
#define ADC_ACR_PENDETSENS_Msk                (_U_(0x3) << ADC_ACR_PENDETSENS_Pos)                 /**< (ADC_ACR) Pen Detection Sensitivity Mask */
#define ADC_ACR_PENDETSENS(value)             (ADC_ACR_PENDETSENS_Msk & ((value) << ADC_ACR_PENDETSENS_Pos))
#define ADC_ACR_IBCTL_Pos                     _U_(8)                                               /**< (ADC_ACR) ADC Bias Current Control Position */
#define ADC_ACR_IBCTL_Msk                     (_U_(0x3) << ADC_ACR_IBCTL_Pos)                      /**< (ADC_ACR) ADC Bias Current Control Mask */
#define ADC_ACR_IBCTL(value)                  (ADC_ACR_IBCTL_Msk & ((value) << ADC_ACR_IBCTL_Pos))
#define ADC_ACR_Msk                           _U_(0x00000303)                                      /**< (ADC_ACR) Register Mask  */


/* -------- ADC_TSMR : (ADC Offset: 0xB0) (R/W 32) Touchscreen Mode Register -------- */
#define ADC_TSMR_TSMODE_Pos                   _U_(0)                                               /**< (ADC_TSMR) Touchscreen Mode Position */
#define ADC_TSMR_TSMODE_Msk                   (_U_(0x3) << ADC_TSMR_TSMODE_Pos)                    /**< (ADC_TSMR) Touchscreen Mode Mask */
#define ADC_TSMR_TSMODE(value)                (ADC_TSMR_TSMODE_Msk & ((value) << ADC_TSMR_TSMODE_Pos))
#define   ADC_TSMR_TSMODE_NONE_Val            _U_(0x0)                                             /**< (ADC_TSMR) No Touchscreen  */
#define   ADC_TSMR_TSMODE_4_WIRE_NO_PM_Val    _U_(0x1)                                             /**< (ADC_TSMR) 4-wire Touchscreen without pressure measurement  */
#define   ADC_TSMR_TSMODE_4_WIRE_Val          _U_(0x2)                                             /**< (ADC_TSMR) 4-wire Touchscreen with pressure measurement  */
#define   ADC_TSMR_TSMODE_5_WIRE_Val          _U_(0x3)                                             /**< (ADC_TSMR) 5-wire Touchscreen  */
#define ADC_TSMR_TSMODE_NONE                  (ADC_TSMR_TSMODE_NONE_Val << ADC_TSMR_TSMODE_Pos)    /**< (ADC_TSMR) No Touchscreen Position  */
#define ADC_TSMR_TSMODE_4_WIRE_NO_PM          (ADC_TSMR_TSMODE_4_WIRE_NO_PM_Val << ADC_TSMR_TSMODE_Pos) /**< (ADC_TSMR) 4-wire Touchscreen without pressure measurement Position  */
#define ADC_TSMR_TSMODE_4_WIRE                (ADC_TSMR_TSMODE_4_WIRE_Val << ADC_TSMR_TSMODE_Pos)  /**< (ADC_TSMR) 4-wire Touchscreen with pressure measurement Position  */
#define ADC_TSMR_TSMODE_5_WIRE                (ADC_TSMR_TSMODE_5_WIRE_Val << ADC_TSMR_TSMODE_Pos)  /**< (ADC_TSMR) 5-wire Touchscreen Position  */
#define ADC_TSMR_TSAV_Pos                     _U_(4)                                               /**< (ADC_TSMR) Touchscreen Average Position */
#define ADC_TSMR_TSAV_Msk                     (_U_(0x3) << ADC_TSMR_TSAV_Pos)                      /**< (ADC_TSMR) Touchscreen Average Mask */
#define ADC_TSMR_TSAV(value)                  (ADC_TSMR_TSAV_Msk & ((value) << ADC_TSMR_TSAV_Pos))
#define   ADC_TSMR_TSAV_NO_FILTER_Val         _U_(0x0)                                             /**< (ADC_TSMR) No Filtering. Only one ADC conversion per measure  */
#define   ADC_TSMR_TSAV_AVG2CONV_Val          _U_(0x1)                                             /**< (ADC_TSMR) Averages 2 ADC conversions  */
#define   ADC_TSMR_TSAV_AVG4CONV_Val          _U_(0x2)                                             /**< (ADC_TSMR) Averages 4 ADC conversions  */
#define   ADC_TSMR_TSAV_AVG8CONV_Val          _U_(0x3)                                             /**< (ADC_TSMR) Averages 8 ADC conversions  */
#define ADC_TSMR_TSAV_NO_FILTER               (ADC_TSMR_TSAV_NO_FILTER_Val << ADC_TSMR_TSAV_Pos)   /**< (ADC_TSMR) No Filtering. Only one ADC conversion per measure Position  */
#define ADC_TSMR_TSAV_AVG2CONV                (ADC_TSMR_TSAV_AVG2CONV_Val << ADC_TSMR_TSAV_Pos)    /**< (ADC_TSMR) Averages 2 ADC conversions Position  */
#define ADC_TSMR_TSAV_AVG4CONV                (ADC_TSMR_TSAV_AVG4CONV_Val << ADC_TSMR_TSAV_Pos)    /**< (ADC_TSMR) Averages 4 ADC conversions Position  */
#define ADC_TSMR_TSAV_AVG8CONV                (ADC_TSMR_TSAV_AVG8CONV_Val << ADC_TSMR_TSAV_Pos)    /**< (ADC_TSMR) Averages 8 ADC conversions Position  */
#define ADC_TSMR_TSFREQ_Pos                   _U_(8)                                               /**< (ADC_TSMR) Touchscreen Frequency Position */
#define ADC_TSMR_TSFREQ_Msk                   (_U_(0xF) << ADC_TSMR_TSFREQ_Pos)                    /**< (ADC_TSMR) Touchscreen Frequency Mask */
#define ADC_TSMR_TSFREQ(value)                (ADC_TSMR_TSFREQ_Msk & ((value) << ADC_TSMR_TSFREQ_Pos))
#define ADC_TSMR_TSSCTIM_Pos                  _U_(16)                                              /**< (ADC_TSMR) Touchscreen Switches Closure Time Position */
#define ADC_TSMR_TSSCTIM_Msk                  (_U_(0xF) << ADC_TSMR_TSSCTIM_Pos)                   /**< (ADC_TSMR) Touchscreen Switches Closure Time Mask */
#define ADC_TSMR_TSSCTIM(value)               (ADC_TSMR_TSSCTIM_Msk & ((value) << ADC_TSMR_TSSCTIM_Pos))
#define ADC_TSMR_NOTSDMA_Pos                  _U_(22)                                              /**< (ADC_TSMR) No TouchScreen DMA Position */
#define ADC_TSMR_NOTSDMA_Msk                  (_U_(0x1) << ADC_TSMR_NOTSDMA_Pos)                   /**< (ADC_TSMR) No TouchScreen DMA Mask */
#define ADC_TSMR_NOTSDMA(value)               (ADC_TSMR_NOTSDMA_Msk & ((value) << ADC_TSMR_NOTSDMA_Pos))
#define ADC_TSMR_PENDET_Pos                   _U_(24)                                              /**< (ADC_TSMR) Pen Contact Detection Enable Position */
#define ADC_TSMR_PENDET_Msk                   (_U_(0x1) << ADC_TSMR_PENDET_Pos)                    /**< (ADC_TSMR) Pen Contact Detection Enable Mask */
#define ADC_TSMR_PENDET(value)                (ADC_TSMR_PENDET_Msk & ((value) << ADC_TSMR_PENDET_Pos))
#define ADC_TSMR_PENDBC_Pos                   _U_(28)                                              /**< (ADC_TSMR) Pen Detect Debouncing Period Position */
#define ADC_TSMR_PENDBC_Msk                   (_U_(0xF) << ADC_TSMR_PENDBC_Pos)                    /**< (ADC_TSMR) Pen Detect Debouncing Period Mask */
#define ADC_TSMR_PENDBC(value)                (ADC_TSMR_PENDBC_Msk & ((value) << ADC_TSMR_PENDBC_Pos))
#define ADC_TSMR_Msk                          _U_(0xF14F0F33)                                      /**< (ADC_TSMR) Register Mask  */


/* -------- ADC_XPOSR : (ADC Offset: 0xB4) ( R/ 32) Touchscreen X Position Register -------- */
#define ADC_XPOSR_XPOS_Pos                    _U_(0)                                               /**< (ADC_XPOSR) X Position Position */
#define ADC_XPOSR_XPOS_Msk                    (_U_(0xFFF) << ADC_XPOSR_XPOS_Pos)                   /**< (ADC_XPOSR) X Position Mask */
#define ADC_XPOSR_XPOS(value)                 (ADC_XPOSR_XPOS_Msk & ((value) << ADC_XPOSR_XPOS_Pos))
#define ADC_XPOSR_XSCALE_Pos                  _U_(16)                                              /**< (ADC_XPOSR) Scale of XPOS Position */
#define ADC_XPOSR_XSCALE_Msk                  (_U_(0xFFF) << ADC_XPOSR_XSCALE_Pos)                 /**< (ADC_XPOSR) Scale of XPOS Mask */
#define ADC_XPOSR_XSCALE(value)               (ADC_XPOSR_XSCALE_Msk & ((value) << ADC_XPOSR_XSCALE_Pos))
#define ADC_XPOSR_Msk                         _U_(0x0FFF0FFF)                                      /**< (ADC_XPOSR) Register Mask  */


/* -------- ADC_YPOSR : (ADC Offset: 0xB8) ( R/ 32) Touchscreen Y Position Register -------- */
#define ADC_YPOSR_YPOS_Pos                    _U_(0)                                               /**< (ADC_YPOSR) Y Position Position */
#define ADC_YPOSR_YPOS_Msk                    (_U_(0xFFF) << ADC_YPOSR_YPOS_Pos)                   /**< (ADC_YPOSR) Y Position Mask */
#define ADC_YPOSR_YPOS(value)                 (ADC_YPOSR_YPOS_Msk & ((value) << ADC_YPOSR_YPOS_Pos))
#define ADC_YPOSR_YSCALE_Pos                  _U_(16)                                              /**< (ADC_YPOSR) Scale of YPOS Position */
#define ADC_YPOSR_YSCALE_Msk                  (_U_(0xFFF) << ADC_YPOSR_YSCALE_Pos)                 /**< (ADC_YPOSR) Scale of YPOS Mask */
#define ADC_YPOSR_YSCALE(value)               (ADC_YPOSR_YSCALE_Msk & ((value) << ADC_YPOSR_YSCALE_Pos))
#define ADC_YPOSR_Msk                         _U_(0x0FFF0FFF)                                      /**< (ADC_YPOSR) Register Mask  */


/* -------- ADC_PRESSR : (ADC Offset: 0xBC) ( R/ 32) Touchscreen Pressure Register -------- */
#define ADC_PRESSR_Z1_Pos                     _U_(0)                                               /**< (ADC_PRESSR) Data of Z1 Measurement Position */
#define ADC_PRESSR_Z1_Msk                     (_U_(0xFFF) << ADC_PRESSR_Z1_Pos)                    /**< (ADC_PRESSR) Data of Z1 Measurement Mask */
#define ADC_PRESSR_Z1(value)                  (ADC_PRESSR_Z1_Msk & ((value) << ADC_PRESSR_Z1_Pos))
#define ADC_PRESSR_Z2_Pos                     _U_(16)                                              /**< (ADC_PRESSR) Data of Z2 Measurement Position */
#define ADC_PRESSR_Z2_Msk                     (_U_(0xFFF) << ADC_PRESSR_Z2_Pos)                    /**< (ADC_PRESSR) Data of Z2 Measurement Mask */
#define ADC_PRESSR_Z2(value)                  (ADC_PRESSR_Z2_Msk & ((value) << ADC_PRESSR_Z2_Pos))
#define ADC_PRESSR_Msk                        _U_(0x0FFF0FFF)                                      /**< (ADC_PRESSR) Register Mask  */


/* -------- ADC_TRGR : (ADC Offset: 0xC0) (R/W 32) Trigger Register -------- */
#define ADC_TRGR_TRGMOD_Pos                   _U_(0)                                               /**< (ADC_TRGR) Trigger Mode Position */
#define ADC_TRGR_TRGMOD_Msk                   (_U_(0x7) << ADC_TRGR_TRGMOD_Pos)                    /**< (ADC_TRGR) Trigger Mode Mask */
#define ADC_TRGR_TRGMOD(value)                (ADC_TRGR_TRGMOD_Msk & ((value) << ADC_TRGR_TRGMOD_Pos))
#define   ADC_TRGR_TRGMOD_NO_TRIGGER_Val      _U_(0x0)                                             /**< (ADC_TRGR) No trigger, only software trigger can start conversions  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val   _U_(0x1)                                             /**< (ADC_TRGR) External trigger rising edge  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val   _U_(0x2)                                             /**< (ADC_TRGR) External trigger falling edge  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val    _U_(0x3)                                             /**< (ADC_TRGR) External trigger any edge  */
#define   ADC_TRGR_TRGMOD_PEN_TRIG_Val        _U_(0x4)                                             /**< (ADC_TRGR) Pen Detect Trigger (shall be selected only if PENDET is set and TSAMOD = Touchscreen only mode)  */
#define   ADC_TRGR_TRGMOD_PERIOD_TRIG_Val     _U_(0x5)                                             /**< (ADC_TRGR) ADC internal periodic trigger (see field TRGPER)  */
#define   ADC_TRGR_TRGMOD_CONTINUOUS_Val      _U_(0x6)                                             /**< (ADC_TRGR) Continuous mode  */
#define ADC_TRGR_TRGMOD_NO_TRIGGER            (ADC_TRGR_TRGMOD_NO_TRIGGER_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) No trigger, only software trigger can start conversions Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_RISE         (ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) External trigger rising edge Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_FALL         (ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) External trigger falling edge Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_ANY          (ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) External trigger any edge Position  */
#define ADC_TRGR_TRGMOD_PEN_TRIG              (ADC_TRGR_TRGMOD_PEN_TRIG_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) Pen Detect Trigger (shall be selected only if PENDET is set and TSAMOD = Touchscreen only mode) Position  */
#define ADC_TRGR_TRGMOD_PERIOD_TRIG           (ADC_TRGR_TRGMOD_PERIOD_TRIG_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) ADC internal periodic trigger (see field TRGPER) Position  */
#define ADC_TRGR_TRGMOD_CONTINUOUS            (ADC_TRGR_TRGMOD_CONTINUOUS_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) Continuous mode Position  */
#define ADC_TRGR_TRGPER_Pos                   _U_(16)                                              /**< (ADC_TRGR) Trigger Period Position */
#define ADC_TRGR_TRGPER_Msk                   (_U_(0xFFFF) << ADC_TRGR_TRGPER_Pos)                 /**< (ADC_TRGR) Trigger Period Mask */
#define ADC_TRGR_TRGPER(value)                (ADC_TRGR_TRGPER_Msk & ((value) << ADC_TRGR_TRGPER_Pos))
#define ADC_TRGR_Msk                          _U_(0xFFFF0007)                                      /**< (ADC_TRGR) Register Mask  */


/* -------- ADC_CVR : (ADC Offset: 0xD4) (R/W 32) Correction Values Register -------- */
#define ADC_CVR_OFFSETCORR_Pos                _U_(0)                                               /**< (ADC_CVR) Offset Correction Position */
#define ADC_CVR_OFFSETCORR_Msk                (_U_(0xFFFF) << ADC_CVR_OFFSETCORR_Pos)              /**< (ADC_CVR) Offset Correction Mask */
#define ADC_CVR_OFFSETCORR(value)             (ADC_CVR_OFFSETCORR_Msk & ((value) << ADC_CVR_OFFSETCORR_Pos))
#define ADC_CVR_GAINCORR_Pos                  _U_(16)                                              /**< (ADC_CVR) Gain Correction Position */
#define ADC_CVR_GAINCORR_Msk                  (_U_(0xFFFF) << ADC_CVR_GAINCORR_Pos)                /**< (ADC_CVR) Gain Correction Mask */
#define ADC_CVR_GAINCORR(value)               (ADC_CVR_GAINCORR_Msk & ((value) << ADC_CVR_GAINCORR_Pos))
#define ADC_CVR_Msk                           _U_(0xFFFFFFFF)                                      /**< (ADC_CVR) Register Mask  */


/* -------- ADC_CECR : (ADC Offset: 0xD8) (R/W 32) Channel Error Correction Register -------- */
#define ADC_CECR_ECORR0_Pos                   _U_(0)                                               /**< (ADC_CECR) Error Correction Enable for channel 0 Position */
#define ADC_CECR_ECORR0_Msk                   (_U_(0x1) << ADC_CECR_ECORR0_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 0 Mask */
#define ADC_CECR_ECORR0(value)                (ADC_CECR_ECORR0_Msk & ((value) << ADC_CECR_ECORR0_Pos))
#define ADC_CECR_ECORR1_Pos                   _U_(1)                                               /**< (ADC_CECR) Error Correction Enable for channel 1 Position */
#define ADC_CECR_ECORR1_Msk                   (_U_(0x1) << ADC_CECR_ECORR1_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 1 Mask */
#define ADC_CECR_ECORR1(value)                (ADC_CECR_ECORR1_Msk & ((value) << ADC_CECR_ECORR1_Pos))
#define ADC_CECR_ECORR2_Pos                   _U_(2)                                               /**< (ADC_CECR) Error Correction Enable for channel 2 Position */
#define ADC_CECR_ECORR2_Msk                   (_U_(0x1) << ADC_CECR_ECORR2_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 2 Mask */
#define ADC_CECR_ECORR2(value)                (ADC_CECR_ECORR2_Msk & ((value) << ADC_CECR_ECORR2_Pos))
#define ADC_CECR_ECORR3_Pos                   _U_(3)                                               /**< (ADC_CECR) Error Correction Enable for channel 3 Position */
#define ADC_CECR_ECORR3_Msk                   (_U_(0x1) << ADC_CECR_ECORR3_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 3 Mask */
#define ADC_CECR_ECORR3(value)                (ADC_CECR_ECORR3_Msk & ((value) << ADC_CECR_ECORR3_Pos))
#define ADC_CECR_ECORR4_Pos                   _U_(4)                                               /**< (ADC_CECR) Error Correction Enable for channel 4 Position */
#define ADC_CECR_ECORR4_Msk                   (_U_(0x1) << ADC_CECR_ECORR4_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 4 Mask */
#define ADC_CECR_ECORR4(value)                (ADC_CECR_ECORR4_Msk & ((value) << ADC_CECR_ECORR4_Pos))
#define ADC_CECR_ECORR5_Pos                   _U_(5)                                               /**< (ADC_CECR) Error Correction Enable for channel 5 Position */
#define ADC_CECR_ECORR5_Msk                   (_U_(0x1) << ADC_CECR_ECORR5_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 5 Mask */
#define ADC_CECR_ECORR5(value)                (ADC_CECR_ECORR5_Msk & ((value) << ADC_CECR_ECORR5_Pos))
#define ADC_CECR_ECORR6_Pos                   _U_(6)                                               /**< (ADC_CECR) Error Correction Enable for channel 6 Position */
#define ADC_CECR_ECORR6_Msk                   (_U_(0x1) << ADC_CECR_ECORR6_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 6 Mask */
#define ADC_CECR_ECORR6(value)                (ADC_CECR_ECORR6_Msk & ((value) << ADC_CECR_ECORR6_Pos))
#define ADC_CECR_ECORR7_Pos                   _U_(7)                                               /**< (ADC_CECR) Error Correction Enable for channel 7 Position */
#define ADC_CECR_ECORR7_Msk                   (_U_(0x1) << ADC_CECR_ECORR7_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 7 Mask */
#define ADC_CECR_ECORR7(value)                (ADC_CECR_ECORR7_Msk & ((value) << ADC_CECR_ECORR7_Pos))
#define ADC_CECR_ECORR8_Pos                   _U_(8)                                               /**< (ADC_CECR) Error Correction Enable for channel 8 Position */
#define ADC_CECR_ECORR8_Msk                   (_U_(0x1) << ADC_CECR_ECORR8_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 8 Mask */
#define ADC_CECR_ECORR8(value)                (ADC_CECR_ECORR8_Msk & ((value) << ADC_CECR_ECORR8_Pos))
#define ADC_CECR_ECORR9_Pos                   _U_(9)                                               /**< (ADC_CECR) Error Correction Enable for channel 9 Position */
#define ADC_CECR_ECORR9_Msk                   (_U_(0x1) << ADC_CECR_ECORR9_Pos)                    /**< (ADC_CECR) Error Correction Enable for channel 9 Mask */
#define ADC_CECR_ECORR9(value)                (ADC_CECR_ECORR9_Msk & ((value) << ADC_CECR_ECORR9_Pos))
#define ADC_CECR_ECORR10_Pos                  _U_(10)                                              /**< (ADC_CECR) Error Correction Enable for channel 10 Position */
#define ADC_CECR_ECORR10_Msk                  (_U_(0x1) << ADC_CECR_ECORR10_Pos)                   /**< (ADC_CECR) Error Correction Enable for channel 10 Mask */
#define ADC_CECR_ECORR10(value)               (ADC_CECR_ECORR10_Msk & ((value) << ADC_CECR_ECORR10_Pos))
#define ADC_CECR_ECORR11_Pos                  _U_(11)                                              /**< (ADC_CECR) Error Correction Enable for channel 11 Position */
#define ADC_CECR_ECORR11_Msk                  (_U_(0x1) << ADC_CECR_ECORR11_Pos)                   /**< (ADC_CECR) Error Correction Enable for channel 11 Mask */
#define ADC_CECR_ECORR11(value)               (ADC_CECR_ECORR11_Msk & ((value) << ADC_CECR_ECORR11_Pos))
#define ADC_CECR_Msk                          _U_(0x00000FFF)                                      /**< (ADC_CECR) Register Mask  */

#define ADC_CECR_ECORR_Pos                    _U_(0)                                               /**< (ADC_CECR Position) Error Correction Enable for channel xx */
#define ADC_CECR_ECORR_Msk                    (_U_(0xFFF) << ADC_CECR_ECORR_Pos)                   /**< (ADC_CECR Mask) ECORR */
#define ADC_CECR_ECORR(value)                 (ADC_CECR_ECORR_Msk & ((value) << ADC_CECR_ECORR_Pos)) 

/* -------- ADC_TSCVR : (ADC Offset: 0xDC) (R/W 32) Touchscreen Correction Values Register -------- */
#define ADC_TSCVR_TSOFFSETCORR_Pos            _U_(0)                                               /**< (ADC_TSCVR) Touchscreen Offset Correction Position */
#define ADC_TSCVR_TSOFFSETCORR_Msk            (_U_(0xFFFF) << ADC_TSCVR_TSOFFSETCORR_Pos)          /**< (ADC_TSCVR) Touchscreen Offset Correction Mask */
#define ADC_TSCVR_TSOFFSETCORR(value)         (ADC_TSCVR_TSOFFSETCORR_Msk & ((value) << ADC_TSCVR_TSOFFSETCORR_Pos))
#define ADC_TSCVR_TSGAINCORR_Pos              _U_(16)                                              /**< (ADC_TSCVR) Touchscreen Gain Correction Position */
#define ADC_TSCVR_TSGAINCORR_Msk              (_U_(0xFFFF) << ADC_TSCVR_TSGAINCORR_Pos)            /**< (ADC_TSCVR) Touchscreen Gain Correction Mask */
#define ADC_TSCVR_TSGAINCORR(value)           (ADC_TSCVR_TSGAINCORR_Msk & ((value) << ADC_TSCVR_TSGAINCORR_Pos))
#define ADC_TSCVR_Msk                         _U_(0xFFFFFFFF)                                      /**< (ADC_TSCVR) Register Mask  */


/* -------- ADC_WPMR : (ADC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define ADC_WPMR_WPEN_Pos                     _U_(0)                                               /**< (ADC_WPMR) Write Protection Enable Position */
#define ADC_WPMR_WPEN_Msk                     (_U_(0x1) << ADC_WPMR_WPEN_Pos)                      /**< (ADC_WPMR) Write Protection Enable Mask */
#define ADC_WPMR_WPEN(value)                  (ADC_WPMR_WPEN_Msk & ((value) << ADC_WPMR_WPEN_Pos))
#define ADC_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (ADC_WPMR) Write Protection Key Position */
#define ADC_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << ADC_WPMR_WPKEY_Pos)                /**< (ADC_WPMR) Write Protection Key Mask */
#define ADC_WPMR_WPKEY(value)                 (ADC_WPMR_WPKEY_Msk & ((value) << ADC_WPMR_WPKEY_Pos))
#define   ADC_WPMR_WPKEY_PASSWD_Val           _U_(0x414443)                                        /**< (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0  */
#define ADC_WPMR_WPKEY_PASSWD                 (ADC_WPMR_WPKEY_PASSWD_Val << ADC_WPMR_WPKEY_Pos)    /**< (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0 Position  */
#define ADC_WPMR_Msk                          _U_(0xFFFFFF01)                                      /**< (ADC_WPMR) Register Mask  */


/* -------- ADC_WPSR : (ADC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define ADC_WPSR_WPVS_Pos                     _U_(0)                                               /**< (ADC_WPSR) Write Protection Violation Status Position */
#define ADC_WPSR_WPVS_Msk                     (_U_(0x1) << ADC_WPSR_WPVS_Pos)                      /**< (ADC_WPSR) Write Protection Violation Status Mask */
#define ADC_WPSR_WPVS(value)                  (ADC_WPSR_WPVS_Msk & ((value) << ADC_WPSR_WPVS_Pos))
#define ADC_WPSR_WPVSRC_Pos                   _U_(8)                                               /**< (ADC_WPSR) Write Protection Violation Source Position */
#define ADC_WPSR_WPVSRC_Msk                   (_U_(0xFFFF) << ADC_WPSR_WPVSRC_Pos)                 /**< (ADC_WPSR) Write Protection Violation Source Mask */
#define ADC_WPSR_WPVSRC(value)                (ADC_WPSR_WPVSRC_Msk & ((value) << ADC_WPSR_WPVSRC_Pos))
#define ADC_WPSR_Msk                          _U_(0x00FFFF01)                                      /**< (ADC_WPSR) Register Mask  */


/** \brief ADC register offsets definitions */
#define ADC_CR_REG_OFST                (0x00)              /**< (ADC_CR) Control Register Offset */
#define ADC_MR_REG_OFST                (0x04)              /**< (ADC_MR) Mode Register Offset */
#define ADC_SEQR1_REG_OFST             (0x08)              /**< (ADC_SEQR1) Channel Sequence Register 1 Offset */
#define ADC_SEQR2_REG_OFST             (0x0C)              /**< (ADC_SEQR2) Channel Sequence Register 2 Offset */
#define ADC_CHER_REG_OFST              (0x10)              /**< (ADC_CHER) Channel Enable Register Offset */
#define ADC_CHDR_REG_OFST              (0x14)              /**< (ADC_CHDR) Channel Disable Register Offset */
#define ADC_CHSR_REG_OFST              (0x18)              /**< (ADC_CHSR) Channel Status Register Offset */
#define ADC_LCDR_REG_OFST              (0x20)              /**< (ADC_LCDR) Last Converted Data Register Offset */
#define ADC_IER_REG_OFST               (0x24)              /**< (ADC_IER) Interrupt Enable Register Offset */
#define ADC_IDR_REG_OFST               (0x28)              /**< (ADC_IDR) Interrupt Disable Register Offset */
#define ADC_IMR_REG_OFST               (0x2C)              /**< (ADC_IMR) Interrupt Mask Register Offset */
#define ADC_ISR_REG_OFST               (0x30)              /**< (ADC_ISR) Interrupt Status Register Offset */
#define ADC_LCTMR_REG_OFST             (0x34)              /**< (ADC_LCTMR) Last Channel Trigger Mode Register Offset */
#define ADC_LCCWR_REG_OFST             (0x38)              /**< (ADC_LCCWR) Last Channel Compare Window Register Offset */
#define ADC_OVER_REG_OFST              (0x3C)              /**< (ADC_OVER) Overrun Status Register Offset */
#define ADC_EMR_REG_OFST               (0x40)              /**< (ADC_EMR) Extended Mode Register Offset */
#define ADC_CWR_REG_OFST               (0x44)              /**< (ADC_CWR) Compare Window Register Offset */
#define ADC_COR_REG_OFST               (0x4C)              /**< (ADC_COR) Channel Offset Register Offset */
#define ADC_CDR_REG_OFST               (0x50)              /**< (ADC_CDR) Channel Data Register Offset */
#define ADC_CDR0_REG_OFST              (0x50)              /**< (ADC_CDR0) Channel Data Register Offset */
#define ADC_CDR1_REG_OFST              (0x54)              /**< (ADC_CDR1) Channel Data Register Offset */
#define ADC_CDR2_REG_OFST              (0x58)              /**< (ADC_CDR2) Channel Data Register Offset */
#define ADC_CDR3_REG_OFST              (0x5C)              /**< (ADC_CDR3) Channel Data Register Offset */
#define ADC_CDR4_REG_OFST              (0x60)              /**< (ADC_CDR4) Channel Data Register Offset */
#define ADC_CDR5_REG_OFST              (0x64)              /**< (ADC_CDR5) Channel Data Register Offset */
#define ADC_CDR6_REG_OFST              (0x68)              /**< (ADC_CDR6) Channel Data Register Offset */
#define ADC_CDR7_REG_OFST              (0x6C)              /**< (ADC_CDR7) Channel Data Register Offset */
#define ADC_CDR8_REG_OFST              (0x70)              /**< (ADC_CDR8) Channel Data Register Offset */
#define ADC_CDR9_REG_OFST              (0x74)              /**< (ADC_CDR9) Channel Data Register Offset */
#define ADC_CDR10_REG_OFST             (0x78)              /**< (ADC_CDR10) Channel Data Register Offset */
#define ADC_CDR11_REG_OFST             (0x7C)              /**< (ADC_CDR11) Channel Data Register Offset */
#define ADC_ACR_REG_OFST               (0x94)              /**< (ADC_ACR) Analog Control Register Offset */
#define ADC_TSMR_REG_OFST              (0xB0)              /**< (ADC_TSMR) Touchscreen Mode Register Offset */
#define ADC_XPOSR_REG_OFST             (0xB4)              /**< (ADC_XPOSR) Touchscreen X Position Register Offset */
#define ADC_YPOSR_REG_OFST             (0xB8)              /**< (ADC_YPOSR) Touchscreen Y Position Register Offset */
#define ADC_PRESSR_REG_OFST            (0xBC)              /**< (ADC_PRESSR) Touchscreen Pressure Register Offset */
#define ADC_TRGR_REG_OFST              (0xC0)              /**< (ADC_TRGR) Trigger Register Offset */
#define ADC_CVR_REG_OFST               (0xD4)              /**< (ADC_CVR) Correction Values Register Offset */
#define ADC_CECR_REG_OFST              (0xD8)              /**< (ADC_CECR) Channel Error Correction Register Offset */
#define ADC_TSCVR_REG_OFST             (0xDC)              /**< (ADC_TSCVR) Touchscreen Correction Values Register Offset */
#define ADC_WPMR_REG_OFST              (0xE4)              /**< (ADC_WPMR) Write Protection Mode Register Offset */
#define ADC_WPSR_REG_OFST              (0xE8)              /**< (ADC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ADC register API structure */
typedef struct
{
  __O   uint32_t                       ADC_CR;             /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       ADC_MR;             /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       ADC_SEQR1;          /**< Offset: 0x08 (R/W  32) Channel Sequence Register 1 */
  __IO  uint32_t                       ADC_SEQR2;          /**< Offset: 0x0C (R/W  32) Channel Sequence Register 2 */
  __O   uint32_t                       ADC_CHER;           /**< Offset: 0x10 ( /W  32) Channel Enable Register */
  __O   uint32_t                       ADC_CHDR;           /**< Offset: 0x14 ( /W  32) Channel Disable Register */
  __I   uint32_t                       ADC_CHSR;           /**< Offset: 0x18 (R/   32) Channel Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __I   uint32_t                       ADC_LCDR;           /**< Offset: 0x20 (R/   32) Last Converted Data Register */
  __O   uint32_t                       ADC_IER;            /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       ADC_IDR;            /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       ADC_IMR;            /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       ADC_ISR;            /**< Offset: 0x30 (R/   32) Interrupt Status Register */
  __IO  uint32_t                       ADC_LCTMR;          /**< Offset: 0x34 (R/W  32) Last Channel Trigger Mode Register */
  __IO  uint32_t                       ADC_LCCWR;          /**< Offset: 0x38 (R/W  32) Last Channel Compare Window Register */
  __I   uint32_t                       ADC_OVER;           /**< Offset: 0x3C (R/   32) Overrun Status Register */
  __IO  uint32_t                       ADC_EMR;            /**< Offset: 0x40 (R/W  32) Extended Mode Register */
  __IO  uint32_t                       ADC_CWR;            /**< Offset: 0x44 (R/W  32) Compare Window Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       ADC_COR;            /**< Offset: 0x4C (R/W  32) Channel Offset Register */
  __I   uint32_t                       ADC_CDR[12];        /**< Offset: 0x50 (R/   32) Channel Data Register */
  __I   uint8_t                        Reserved3[0x14];
  __IO  uint32_t                       ADC_ACR;            /**< Offset: 0x94 (R/W  32) Analog Control Register */
  __I   uint8_t                        Reserved4[0x18];
  __IO  uint32_t                       ADC_TSMR;           /**< Offset: 0xB0 (R/W  32) Touchscreen Mode Register */
  __I   uint32_t                       ADC_XPOSR;          /**< Offset: 0xB4 (R/   32) Touchscreen X Position Register */
  __I   uint32_t                       ADC_YPOSR;          /**< Offset: 0xB8 (R/   32) Touchscreen Y Position Register */
  __I   uint32_t                       ADC_PRESSR;         /**< Offset: 0xBC (R/   32) Touchscreen Pressure Register */
  __IO  uint32_t                       ADC_TRGR;           /**< Offset: 0xC0 (R/W  32) Trigger Register */
  __I   uint8_t                        Reserved5[0x10];
  __IO  uint32_t                       ADC_CVR;            /**< Offset: 0xD4 (R/W  32) Correction Values Register */
  __IO  uint32_t                       ADC_CECR;           /**< Offset: 0xD8 (R/W  32) Channel Error Correction Register */
  __IO  uint32_t                       ADC_TSCVR;          /**< Offset: 0xDC (R/W  32) Touchscreen Correction Values Register */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       ADC_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       ADC_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} adc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_ADC_COMPONENT_H_ */
