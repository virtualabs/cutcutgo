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

/* file generated from device description version 2021-07-26T12:51:16Z */
#ifndef _SAMA7G_ADC_COMPONENT_H_
#define _SAMA7G_ADC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ADC                                          */
/* ************************************************************************** */

/* -------- ADC_CR : (ADC Offset: 0x00) ( /W 32) Control Register -------- */
#define ADC_CR_SWRST_Pos                      _U_(0)                                               /**< (ADC_CR) Software Reset Position */
#define ADC_CR_SWRST_Msk                      (_U_(0x1) << ADC_CR_SWRST_Pos)                       /**< (ADC_CR) Software Reset Mask */
#define ADC_CR_SWRST(value)                   (ADC_CR_SWRST_Msk & ((value) << ADC_CR_SWRST_Pos))  
#define   ADC_CR_SWRST_0_Val                  _U_(0x0)                                             /**< (ADC_CR) No effect.  */
#define   ADC_CR_SWRST_1_Val                  _U_(0x1)                                             /**< (ADC_CR) Resets the ADC, simulating a hardware reset.  */
#define ADC_CR_SWRST_0                        (ADC_CR_SWRST_0_Val << ADC_CR_SWRST_Pos)             /**< (ADC_CR) No effect. Position  */
#define ADC_CR_SWRST_1                        (ADC_CR_SWRST_1_Val << ADC_CR_SWRST_Pos)             /**< (ADC_CR) Resets the ADC, simulating a hardware reset. Position  */
#define ADC_CR_START_Pos                      _U_(1)                                               /**< (ADC_CR) Start Conversion Position */
#define ADC_CR_START_Msk                      (_U_(0x1) << ADC_CR_START_Pos)                       /**< (ADC_CR) Start Conversion Mask */
#define ADC_CR_START(value)                   (ADC_CR_START_Msk & ((value) << ADC_CR_START_Pos))  
#define   ADC_CR_START_0_Val                  _U_(0x0)                                             /**< (ADC_CR) No effect.  */
#define   ADC_CR_START_1_Val                  _U_(0x1)                                             /**< (ADC_CR) Begins analog-to-digital conversion.  */
#define ADC_CR_START_0                        (ADC_CR_START_0_Val << ADC_CR_START_Pos)             /**< (ADC_CR) No effect. Position  */
#define ADC_CR_START_1                        (ADC_CR_START_1_Val << ADC_CR_START_Pos)             /**< (ADC_CR) Begins analog-to-digital conversion. Position  */
#define ADC_CR_SWFIFO_Pos                     _U_(3)                                               /**< (ADC_CR) Software FIFO Reset Position */
#define ADC_CR_SWFIFO_Msk                     (_U_(0x1) << ADC_CR_SWFIFO_Pos)                      /**< (ADC_CR) Software FIFO Reset Mask */
#define ADC_CR_SWFIFO(value)                  (ADC_CR_SWFIFO_Msk & ((value) << ADC_CR_SWFIFO_Pos))
#define   ADC_CR_SWFIFO_0_Val                 _U_(0x0)                                             /**< (ADC_CR) No effect.  */
#define   ADC_CR_SWFIFO_1_Val                 _U_(0x1)                                             /**< (ADC_CR) Resets the internal FIFO, simulating a hardware reset.  */
#define ADC_CR_SWFIFO_0                       (ADC_CR_SWFIFO_0_Val << ADC_CR_SWFIFO_Pos)           /**< (ADC_CR) No effect. Position  */
#define ADC_CR_SWFIFO_1                       (ADC_CR_SWFIFO_1_Val << ADC_CR_SWFIFO_Pos)           /**< (ADC_CR) Resets the internal FIFO, simulating a hardware reset. Position  */
#define ADC_CR_CMPRST_Pos                     _U_(4)                                               /**< (ADC_CR) Comparison Restart Position */
#define ADC_CR_CMPRST_Msk                     (_U_(0x1) << ADC_CR_CMPRST_Pos)                      /**< (ADC_CR) Comparison Restart Mask */
#define ADC_CR_CMPRST(value)                  (ADC_CR_CMPRST_Msk & ((value) << ADC_CR_CMPRST_Pos))
#define   ADC_CR_CMPRST_0_Val                 _U_(0x0)                                             /**< (ADC_CR) No effect.  */
#define   ADC_CR_CMPRST_1_Val                 _U_(0x1)                                             /**< (ADC_CR) Stops the conversion result storage until the next comparison match.  */
#define ADC_CR_CMPRST_0                       (ADC_CR_CMPRST_0_Val << ADC_CR_CMPRST_Pos)           /**< (ADC_CR) No effect. Position  */
#define ADC_CR_CMPRST_1                       (ADC_CR_CMPRST_1_Val << ADC_CR_CMPRST_Pos)           /**< (ADC_CR) Stops the conversion result storage until the next comparison match. Position  */
#define ADC_CR_Msk                            _U_(0x0000001B)                                      /**< (ADC_CR) Register Mask  */


/* -------- ADC_MR : (ADC Offset: 0x04) (R/W 32) Mode Register -------- */
#define ADC_MR_RESETVALUE                     _U_(0x00)                                            /**<  (ADC_MR) Mode Register  Reset Value */

#define ADC_MR_TRGSEL_Pos                     _U_(1)                                               /**< (ADC_MR) Trigger Selection Position */
#define ADC_MR_TRGSEL_Msk                     (_U_(0x7) << ADC_MR_TRGSEL_Pos)                      /**< (ADC_MR) Trigger Selection Mask */
#define ADC_MR_TRGSEL(value)                  (ADC_MR_TRGSEL_Msk & ((value) << ADC_MR_TRGSEL_Pos))
#define   ADC_MR_TRGSEL_ADC_TRIG0_Val         _U_(0x0)                                             /**< (ADC_MR) ADTRG  */
#define   ADC_MR_TRGSEL_ADC_TRIG1_Val         _U_(0x1)                                             /**< (ADC_MR) TIOA0 TC0  */
#define   ADC_MR_TRGSEL_ADC_TRIG2_Val         _U_(0x2)                                             /**< (ADC_MR) TIOA1 TC0  */
#define   ADC_MR_TRGSEL_ADC_TRIG3_Val         _U_(0x3)                                             /**< (ADC_MR) TIOA2 TC0  */
#define   ADC_MR_TRGSEL_ADC_TRIG4_Val         _U_(0x4)                                             /**< (ADC_MR) PWM event line 0  */
#define   ADC_MR_TRGSEL_ADC_TRIG5_Val         _U_(0x5)                                             /**< (ADC_MR) PWM event line 1  */
#define   ADC_MR_TRGSEL_ADC_TRIG6_Val         _U_(0x6)                                             /**< (ADC_MR) TIOA3/ACC  */
#define   ADC_MR_TRGSEL_ADC_TRIG7_Val         _U_(0x7)                                             /**< (ADC_MR) RTCOUT0  */
#define ADC_MR_TRGSEL_ADC_TRIG0               (ADC_MR_TRGSEL_ADC_TRIG0_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) ADTRG Position  */
#define ADC_MR_TRGSEL_ADC_TRIG1               (ADC_MR_TRGSEL_ADC_TRIG1_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIOA0 TC0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG2               (ADC_MR_TRGSEL_ADC_TRIG2_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIOA1 TC0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG3               (ADC_MR_TRGSEL_ADC_TRIG3_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIOA2 TC0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG4               (ADC_MR_TRGSEL_ADC_TRIG4_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) PWM event line 0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG5               (ADC_MR_TRGSEL_ADC_TRIG5_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) PWM event line 1 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG6               (ADC_MR_TRGSEL_ADC_TRIG6_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) TIOA3/ACC Position  */
#define ADC_MR_TRGSEL_ADC_TRIG7               (ADC_MR_TRGSEL_ADC_TRIG7_Val << ADC_MR_TRGSEL_Pos)   /**< (ADC_MR) RTCOUT0 Position  */
#define ADC_MR_SLEEP_Pos                      _U_(5)                                               /**< (ADC_MR) Sleep Mode Position */
#define ADC_MR_SLEEP_Msk                      (_U_(0x1) << ADC_MR_SLEEP_Pos)                       /**< (ADC_MR) Sleep Mode Mask */
#define ADC_MR_SLEEP(value)                   (ADC_MR_SLEEP_Msk & ((value) << ADC_MR_SLEEP_Pos))  
#define   ADC_MR_SLEEP_NORMAL_Val             _U_(0x0)                                             /**< (ADC_MR) Normal mode: The ADC core and reference voltage circuitry are kept on between conversions.  */
#define   ADC_MR_SLEEP_SLEEP_Val              _U_(0x1)                                             /**< (ADC_MR) Sleep mode: The wakeup time can be modified by programming the FWUP bit.  */
#define ADC_MR_SLEEP_NORMAL                   (ADC_MR_SLEEP_NORMAL_Val << ADC_MR_SLEEP_Pos)        /**< (ADC_MR) Normal mode: The ADC core and reference voltage circuitry are kept on between conversions. Position  */
#define ADC_MR_SLEEP_SLEEP                    (ADC_MR_SLEEP_SLEEP_Val << ADC_MR_SLEEP_Pos)         /**< (ADC_MR) Sleep mode: The wakeup time can be modified by programming the FWUP bit. Position  */
#define ADC_MR_FWUP_Pos                       _U_(6)                                               /**< (ADC_MR) Fast Wakeup Position */
#define ADC_MR_FWUP_Msk                       (_U_(0x1) << ADC_MR_FWUP_Pos)                        /**< (ADC_MR) Fast Wakeup Mask */
#define ADC_MR_FWUP(value)                    (ADC_MR_FWUP_Msk & ((value) << ADC_MR_FWUP_Pos))    
#define   ADC_MR_FWUP_OFF_Val                 _U_(0x0)                                             /**< (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are off between conversions.  */
#define   ADC_MR_FWUP_ON_Val                  _U_(0x1)                                             /**< (ADC_MR) If SLEEP is 1, then Fast Wakeup Sleep mode: The voltage reference is on between conversions and ADC core is off.  */
#define ADC_MR_FWUP_OFF                       (ADC_MR_FWUP_OFF_Val << ADC_MR_FWUP_Pos)             /**< (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are off between conversions. Position  */
#define ADC_MR_FWUP_ON                        (ADC_MR_FWUP_ON_Val << ADC_MR_FWUP_Pos)              /**< (ADC_MR) If SLEEP is 1, then Fast Wakeup Sleep mode: The voltage reference is on between conversions and ADC core is off. Position  */
#define ADC_MR_PRESCAL_Pos                    _U_(8)                                               /**< (ADC_MR) Prescaler Rate Selection Position */
#define ADC_MR_PRESCAL_Msk                    (_U_(0xFF) << ADC_MR_PRESCAL_Pos)                    /**< (ADC_MR) Prescaler Rate Selection Mask */
#define ADC_MR_PRESCAL(value)                 (ADC_MR_PRESCAL_Msk & ((value) << ADC_MR_PRESCAL_Pos))
#define ADC_MR_STARTUP_Pos                    _U_(16)                                              /**< (ADC_MR) Startup Time Position */
#define ADC_MR_STARTUP_Msk                    (_U_(0xF) << ADC_MR_STARTUP_Pos)                     /**< (ADC_MR) Startup Time Mask */
#define ADC_MR_STARTUP(value)                 (ADC_MR_STARTUP_Msk & ((value) << ADC_MR_STARTUP_Pos))
#define   ADC_MR_STARTUP_SUT0_Val             _U_(0x0)                                             /**< (ADC_MR) 0 period of ADCCLK  */
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
#define ADC_MR_STARTUP_SUT0                   (ADC_MR_STARTUP_SUT0_Val << ADC_MR_STARTUP_Pos)      /**< (ADC_MR) 0 period of ADCCLK Position  */
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
#define   ADC_MR_ANACH_ALLOWED_Val            _U_(0x1)                                             /**< (ADC_MR) Allows different analog settings for each channel. See ADC Channel Configuration Register.  */
#define ADC_MR_ANACH_NONE                     (ADC_MR_ANACH_NONE_Val << ADC_MR_ANACH_Pos)          /**< (ADC_MR) No analog change on channel switching: DIFF0 is used for all channels. Position  */
#define ADC_MR_ANACH_ALLOWED                  (ADC_MR_ANACH_ALLOWED_Val << ADC_MR_ANACH_Pos)       /**< (ADC_MR) Allows different analog settings for each channel. See ADC Channel Configuration Register. Position  */
#define ADC_MR_TRACKTIM_Pos                   _U_(24)                                              /**< (ADC_MR) Tracking Time Position */
#define ADC_MR_TRACKTIM_Msk                   (_U_(0xF) << ADC_MR_TRACKTIM_Pos)                    /**< (ADC_MR) Tracking Time Mask */
#define ADC_MR_TRACKTIM(value)                (ADC_MR_TRACKTIM_Msk & ((value) << ADC_MR_TRACKTIM_Pos))
#define ADC_MR_TRANSFER_Pos                   _U_(28)                                              /**< (ADC_MR) Transfer Time Position */
#define ADC_MR_TRANSFER_Msk                   (_U_(0x3) << ADC_MR_TRANSFER_Pos)                    /**< (ADC_MR) Transfer Time Mask */
#define ADC_MR_TRANSFER(value)                (ADC_MR_TRANSFER_Msk & ((value) << ADC_MR_TRANSFER_Pos))
#define ADC_MR_USEQ_Pos                       _U_(31)                                              /**< (ADC_MR) User Sequence Enable Position */
#define ADC_MR_USEQ_Msk                       (_U_(0x1) << ADC_MR_USEQ_Pos)                        /**< (ADC_MR) User Sequence Enable Mask */
#define ADC_MR_USEQ(value)                    (ADC_MR_USEQ_Msk & ((value) << ADC_MR_USEQ_Pos))    
#define   ADC_MR_USEQ_NUM_ORDER_Val           _U_(0x0)                                             /**< (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index.  */
#define   ADC_MR_USEQ_REG_ORDER_Val           _U_(0x1)                                             /**< (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 and can be used to convert the same channel several times.  */
#define ADC_MR_USEQ_NUM_ORDER                 (ADC_MR_USEQ_NUM_ORDER_Val << ADC_MR_USEQ_Pos)       /**< (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index. Position  */
#define ADC_MR_USEQ_REG_ORDER                 (ADC_MR_USEQ_REG_ORDER_Val << ADC_MR_USEQ_Pos)       /**< (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 and can be used to convert the same channel several times. Position  */
#define ADC_MR_Msk                            _U_(0xBF8FFF6E)                                      /**< (ADC_MR) Register Mask  */


/* -------- ADC_SEQR1 : (ADC Offset: 0x08) (R/W 32) Channel Sequence Register 1 -------- */
#define ADC_SEQR1_RESETVALUE                  _U_(0x00)                                            /**<  (ADC_SEQR1) Channel Sequence Register 1  Reset Value */

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
#define ADC_SEQR2_RESETVALUE                  _U_(0x00)                                            /**<  (ADC_SEQR2) Channel Sequence Register 2  Reset Value */

#define ADC_SEQR2_USCH9_Pos                   _U_(0)                                               /**< (ADC_SEQR2) User Sequence Number 9 Position */
#define ADC_SEQR2_USCH9_Msk                   (_U_(0xF) << ADC_SEQR2_USCH9_Pos)                    /**< (ADC_SEQR2) User Sequence Number 9 Mask */
#define ADC_SEQR2_USCH9(value)                (ADC_SEQR2_USCH9_Msk & ((value) << ADC_SEQR2_USCH9_Pos))
#define ADC_SEQR2_USCH10_Pos                  _U_(4)                                               /**< (ADC_SEQR2) User Sequence Number 10 Position */
#define ADC_SEQR2_USCH10_Msk                  (_U_(0xF) << ADC_SEQR2_USCH10_Pos)                   /**< (ADC_SEQR2) User Sequence Number 10 Mask */
#define ADC_SEQR2_USCH10(value)               (ADC_SEQR2_USCH10_Msk & ((value) << ADC_SEQR2_USCH10_Pos))
#define ADC_SEQR2_USCH11_Pos                  _U_(8)                                               /**< (ADC_SEQR2) User Sequence Number 11 Position */
#define ADC_SEQR2_USCH11_Msk                  (_U_(0xF) << ADC_SEQR2_USCH11_Pos)                   /**< (ADC_SEQR2) User Sequence Number 11 Mask */
#define ADC_SEQR2_USCH11(value)               (ADC_SEQR2_USCH11_Msk & ((value) << ADC_SEQR2_USCH11_Pos))
#define ADC_SEQR2_USCH12_Pos                  _U_(12)                                              /**< (ADC_SEQR2) User Sequence Number 12 Position */
#define ADC_SEQR2_USCH12_Msk                  (_U_(0xF) << ADC_SEQR2_USCH12_Pos)                   /**< (ADC_SEQR2) User Sequence Number 12 Mask */
#define ADC_SEQR2_USCH12(value)               (ADC_SEQR2_USCH12_Msk & ((value) << ADC_SEQR2_USCH12_Pos))
#define ADC_SEQR2_USCH13_Pos                  _U_(16)                                              /**< (ADC_SEQR2) User Sequence Number 13 Position */
#define ADC_SEQR2_USCH13_Msk                  (_U_(0xF) << ADC_SEQR2_USCH13_Pos)                   /**< (ADC_SEQR2) User Sequence Number 13 Mask */
#define ADC_SEQR2_USCH13(value)               (ADC_SEQR2_USCH13_Msk & ((value) << ADC_SEQR2_USCH13_Pos))
#define ADC_SEQR2_USCH14_Pos                  _U_(20)                                              /**< (ADC_SEQR2) User Sequence Number 14 Position */
#define ADC_SEQR2_USCH14_Msk                  (_U_(0xF) << ADC_SEQR2_USCH14_Pos)                   /**< (ADC_SEQR2) User Sequence Number 14 Mask */
#define ADC_SEQR2_USCH14(value)               (ADC_SEQR2_USCH14_Msk & ((value) << ADC_SEQR2_USCH14_Pos))
#define ADC_SEQR2_USCH15_Pos                  _U_(24)                                              /**< (ADC_SEQR2) User Sequence Number 15 Position */
#define ADC_SEQR2_USCH15_Msk                  (_U_(0xF) << ADC_SEQR2_USCH15_Pos)                   /**< (ADC_SEQR2) User Sequence Number 15 Mask */
#define ADC_SEQR2_USCH15(value)               (ADC_SEQR2_USCH15_Msk & ((value) << ADC_SEQR2_USCH15_Pos))
#define ADC_SEQR2_USCH16_Pos                  _U_(28)                                              /**< (ADC_SEQR2) User Sequence Number 16 Position */
#define ADC_SEQR2_USCH16_Msk                  (_U_(0xF) << ADC_SEQR2_USCH16_Pos)                   /**< (ADC_SEQR2) User Sequence Number 16 Mask */
#define ADC_SEQR2_USCH16(value)               (ADC_SEQR2_USCH16_Msk & ((value) << ADC_SEQR2_USCH16_Pos))
#define ADC_SEQR2_Msk                         _U_(0xFFFFFFFF)                                      /**< (ADC_SEQR2) Register Mask  */


/* -------- ADC_CHER : (ADC Offset: 0x10) ( /W 32) Channel Enable Register -------- */
#define ADC_CHER_CH0_Pos                      _U_(0)                                               /**< (ADC_CHER) Channel 0 Enable Position */
#define ADC_CHER_CH0_Msk                      (_U_(0x1) << ADC_CHER_CH0_Pos)                       /**< (ADC_CHER) Channel 0 Enable Mask */
#define ADC_CHER_CH0(value)                   (ADC_CHER_CH0_Msk & ((value) << ADC_CHER_CH0_Pos))  
#define   ADC_CHER_CH0_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH0_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH0_0                        (ADC_CHER_CH0_0_Val << ADC_CHER_CH0_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH0_1                        (ADC_CHER_CH0_1_Val << ADC_CHER_CH0_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH1_Pos                      _U_(1)                                               /**< (ADC_CHER) Channel 1 Enable Position */
#define ADC_CHER_CH1_Msk                      (_U_(0x1) << ADC_CHER_CH1_Pos)                       /**< (ADC_CHER) Channel 1 Enable Mask */
#define ADC_CHER_CH1(value)                   (ADC_CHER_CH1_Msk & ((value) << ADC_CHER_CH1_Pos))  
#define   ADC_CHER_CH1_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH1_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH1_0                        (ADC_CHER_CH1_0_Val << ADC_CHER_CH1_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH1_1                        (ADC_CHER_CH1_1_Val << ADC_CHER_CH1_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH2_Pos                      _U_(2)                                               /**< (ADC_CHER) Channel 2 Enable Position */
#define ADC_CHER_CH2_Msk                      (_U_(0x1) << ADC_CHER_CH2_Pos)                       /**< (ADC_CHER) Channel 2 Enable Mask */
#define ADC_CHER_CH2(value)                   (ADC_CHER_CH2_Msk & ((value) << ADC_CHER_CH2_Pos))  
#define   ADC_CHER_CH2_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH2_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH2_0                        (ADC_CHER_CH2_0_Val << ADC_CHER_CH2_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH2_1                        (ADC_CHER_CH2_1_Val << ADC_CHER_CH2_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH3_Pos                      _U_(3)                                               /**< (ADC_CHER) Channel 3 Enable Position */
#define ADC_CHER_CH3_Msk                      (_U_(0x1) << ADC_CHER_CH3_Pos)                       /**< (ADC_CHER) Channel 3 Enable Mask */
#define ADC_CHER_CH3(value)                   (ADC_CHER_CH3_Msk & ((value) << ADC_CHER_CH3_Pos))  
#define   ADC_CHER_CH3_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH3_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH3_0                        (ADC_CHER_CH3_0_Val << ADC_CHER_CH3_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH3_1                        (ADC_CHER_CH3_1_Val << ADC_CHER_CH3_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH4_Pos                      _U_(4)                                               /**< (ADC_CHER) Channel 4 Enable Position */
#define ADC_CHER_CH4_Msk                      (_U_(0x1) << ADC_CHER_CH4_Pos)                       /**< (ADC_CHER) Channel 4 Enable Mask */
#define ADC_CHER_CH4(value)                   (ADC_CHER_CH4_Msk & ((value) << ADC_CHER_CH4_Pos))  
#define   ADC_CHER_CH4_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH4_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH4_0                        (ADC_CHER_CH4_0_Val << ADC_CHER_CH4_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH4_1                        (ADC_CHER_CH4_1_Val << ADC_CHER_CH4_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH5_Pos                      _U_(5)                                               /**< (ADC_CHER) Channel 5 Enable Position */
#define ADC_CHER_CH5_Msk                      (_U_(0x1) << ADC_CHER_CH5_Pos)                       /**< (ADC_CHER) Channel 5 Enable Mask */
#define ADC_CHER_CH5(value)                   (ADC_CHER_CH5_Msk & ((value) << ADC_CHER_CH5_Pos))  
#define   ADC_CHER_CH5_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH5_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH5_0                        (ADC_CHER_CH5_0_Val << ADC_CHER_CH5_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH5_1                        (ADC_CHER_CH5_1_Val << ADC_CHER_CH5_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH6_Pos                      _U_(6)                                               /**< (ADC_CHER) Channel 6 Enable Position */
#define ADC_CHER_CH6_Msk                      (_U_(0x1) << ADC_CHER_CH6_Pos)                       /**< (ADC_CHER) Channel 6 Enable Mask */
#define ADC_CHER_CH6(value)                   (ADC_CHER_CH6_Msk & ((value) << ADC_CHER_CH6_Pos))  
#define   ADC_CHER_CH6_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH6_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH6_0                        (ADC_CHER_CH6_0_Val << ADC_CHER_CH6_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH6_1                        (ADC_CHER_CH6_1_Val << ADC_CHER_CH6_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH7_Pos                      _U_(7)                                               /**< (ADC_CHER) Channel 7 Enable Position */
#define ADC_CHER_CH7_Msk                      (_U_(0x1) << ADC_CHER_CH7_Pos)                       /**< (ADC_CHER) Channel 7 Enable Mask */
#define ADC_CHER_CH7(value)                   (ADC_CHER_CH7_Msk & ((value) << ADC_CHER_CH7_Pos))  
#define   ADC_CHER_CH7_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH7_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH7_0                        (ADC_CHER_CH7_0_Val << ADC_CHER_CH7_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH7_1                        (ADC_CHER_CH7_1_Val << ADC_CHER_CH7_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH8_Pos                      _U_(8)                                               /**< (ADC_CHER) Channel 8 Enable Position */
#define ADC_CHER_CH8_Msk                      (_U_(0x1) << ADC_CHER_CH8_Pos)                       /**< (ADC_CHER) Channel 8 Enable Mask */
#define ADC_CHER_CH8(value)                   (ADC_CHER_CH8_Msk & ((value) << ADC_CHER_CH8_Pos))  
#define   ADC_CHER_CH8_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH8_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH8_0                        (ADC_CHER_CH8_0_Val << ADC_CHER_CH8_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH8_1                        (ADC_CHER_CH8_1_Val << ADC_CHER_CH8_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH9_Pos                      _U_(9)                                               /**< (ADC_CHER) Channel 9 Enable Position */
#define ADC_CHER_CH9_Msk                      (_U_(0x1) << ADC_CHER_CH9_Pos)                       /**< (ADC_CHER) Channel 9 Enable Mask */
#define ADC_CHER_CH9(value)                   (ADC_CHER_CH9_Msk & ((value) << ADC_CHER_CH9_Pos))  
#define   ADC_CHER_CH9_0_Val                  _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH9_1_Val                  _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH9_0                        (ADC_CHER_CH9_0_Val << ADC_CHER_CH9_Pos)             /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH9_1                        (ADC_CHER_CH9_1_Val << ADC_CHER_CH9_Pos)             /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH10_Pos                     _U_(10)                                              /**< (ADC_CHER) Channel 10 Enable Position */
#define ADC_CHER_CH10_Msk                     (_U_(0x1) << ADC_CHER_CH10_Pos)                      /**< (ADC_CHER) Channel 10 Enable Mask */
#define ADC_CHER_CH10(value)                  (ADC_CHER_CH10_Msk & ((value) << ADC_CHER_CH10_Pos))
#define   ADC_CHER_CH10_0_Val                 _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH10_1_Val                 _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH10_0                       (ADC_CHER_CH10_0_Val << ADC_CHER_CH10_Pos)           /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH10_1                       (ADC_CHER_CH10_1_Val << ADC_CHER_CH10_Pos)           /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH11_Pos                     _U_(11)                                              /**< (ADC_CHER) Channel 11 Enable Position */
#define ADC_CHER_CH11_Msk                     (_U_(0x1) << ADC_CHER_CH11_Pos)                      /**< (ADC_CHER) Channel 11 Enable Mask */
#define ADC_CHER_CH11(value)                  (ADC_CHER_CH11_Msk & ((value) << ADC_CHER_CH11_Pos))
#define   ADC_CHER_CH11_0_Val                 _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH11_1_Val                 _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH11_0                       (ADC_CHER_CH11_0_Val << ADC_CHER_CH11_Pos)           /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH11_1                       (ADC_CHER_CH11_1_Val << ADC_CHER_CH11_Pos)           /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH12_Pos                     _U_(12)                                              /**< (ADC_CHER) Channel 12 Enable Position */
#define ADC_CHER_CH12_Msk                     (_U_(0x1) << ADC_CHER_CH12_Pos)                      /**< (ADC_CHER) Channel 12 Enable Mask */
#define ADC_CHER_CH12(value)                  (ADC_CHER_CH12_Msk & ((value) << ADC_CHER_CH12_Pos))
#define   ADC_CHER_CH12_0_Val                 _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH12_1_Val                 _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH12_0                       (ADC_CHER_CH12_0_Val << ADC_CHER_CH12_Pos)           /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH12_1                       (ADC_CHER_CH12_1_Val << ADC_CHER_CH12_Pos)           /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH13_Pos                     _U_(13)                                              /**< (ADC_CHER) Channel 13 Enable Position */
#define ADC_CHER_CH13_Msk                     (_U_(0x1) << ADC_CHER_CH13_Pos)                      /**< (ADC_CHER) Channel 13 Enable Mask */
#define ADC_CHER_CH13(value)                  (ADC_CHER_CH13_Msk & ((value) << ADC_CHER_CH13_Pos))
#define   ADC_CHER_CH13_0_Val                 _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH13_1_Val                 _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH13_0                       (ADC_CHER_CH13_0_Val << ADC_CHER_CH13_Pos)           /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH13_1                       (ADC_CHER_CH13_1_Val << ADC_CHER_CH13_Pos)           /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH14_Pos                     _U_(14)                                              /**< (ADC_CHER) Channel 14 Enable Position */
#define ADC_CHER_CH14_Msk                     (_U_(0x1) << ADC_CHER_CH14_Pos)                      /**< (ADC_CHER) Channel 14 Enable Mask */
#define ADC_CHER_CH14(value)                  (ADC_CHER_CH14_Msk & ((value) << ADC_CHER_CH14_Pos))
#define   ADC_CHER_CH14_0_Val                 _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH14_1_Val                 _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH14_0                       (ADC_CHER_CH14_0_Val << ADC_CHER_CH14_Pos)           /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH14_1                       (ADC_CHER_CH14_1_Val << ADC_CHER_CH14_Pos)           /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH15_Pos                     _U_(15)                                              /**< (ADC_CHER) Channel 15 Enable Position */
#define ADC_CHER_CH15_Msk                     (_U_(0x1) << ADC_CHER_CH15_Pos)                      /**< (ADC_CHER) Channel 15 Enable Mask */
#define ADC_CHER_CH15(value)                  (ADC_CHER_CH15_Msk & ((value) << ADC_CHER_CH15_Pos))
#define   ADC_CHER_CH15_0_Val                 _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH15_1_Val                 _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH15_0                       (ADC_CHER_CH15_0_Val << ADC_CHER_CH15_Pos)           /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH15_1                       (ADC_CHER_CH15_1_Val << ADC_CHER_CH15_Pos)           /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH30_Pos                     _U_(30)                                              /**< (ADC_CHER) Channel 30 Enable Position */
#define ADC_CHER_CH30_Msk                     (_U_(0x1) << ADC_CHER_CH30_Pos)                      /**< (ADC_CHER) Channel 30 Enable Mask */
#define ADC_CHER_CH30(value)                  (ADC_CHER_CH30_Msk & ((value) << ADC_CHER_CH30_Pos))
#define   ADC_CHER_CH30_0_Val                 _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH30_1_Val                 _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH30_0                       (ADC_CHER_CH30_0_Val << ADC_CHER_CH30_Pos)           /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH30_1                       (ADC_CHER_CH30_1_Val << ADC_CHER_CH30_Pos)           /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_CH31_Pos                     _U_(31)                                              /**< (ADC_CHER) Channel 31 Enable Position */
#define ADC_CHER_CH31_Msk                     (_U_(0x1) << ADC_CHER_CH31_Pos)                      /**< (ADC_CHER) Channel 31 Enable Mask */
#define ADC_CHER_CH31(value)                  (ADC_CHER_CH31_Msk & ((value) << ADC_CHER_CH31_Pos))
#define   ADC_CHER_CH31_0_Val                 _U_(0x0)                                             /**< (ADC_CHER) No effect.  */
#define   ADC_CHER_CH31_1_Val                 _U_(0x1)                                             /**< (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH31_0                       (ADC_CHER_CH31_0_Val << ADC_CHER_CH31_Pos)           /**< (ADC_CHER) No effect. Position  */
#define ADC_CHER_CH31_1                       (ADC_CHER_CH31_1_Val << ADC_CHER_CH31_Pos)           /**< (ADC_CHER) Enables the corresponding channel. Position  */
#define ADC_CHER_Msk                          _U_(0xC000FFFF)                                      /**< (ADC_CHER) Register Mask  */

#define ADC_CHER_CH_Pos                       _U_(0)                                               /**< (ADC_CHER Position) Channel 3x Enable */
#define ADC_CHER_CH_Msk                       (_U_(0x3FFFF) << ADC_CHER_CH_Pos)                    /**< (ADC_CHER Mask) CH */
#define ADC_CHER_CH(value)                    (ADC_CHER_CH_Msk & ((value) << ADC_CHER_CH_Pos))     

/* -------- ADC_CHDR : (ADC Offset: 0x14) ( /W 32) Channel Disable Register -------- */
#define ADC_CHDR_CH0_Pos                      _U_(0)                                               /**< (ADC_CHDR) Channel 0 Disable Position */
#define ADC_CHDR_CH0_Msk                      (_U_(0x1) << ADC_CHDR_CH0_Pos)                       /**< (ADC_CHDR) Channel 0 Disable Mask */
#define ADC_CHDR_CH0(value)                   (ADC_CHDR_CH0_Msk & ((value) << ADC_CHDR_CH0_Pos))  
#define   ADC_CHDR_CH0_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH0_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH0_0                        (ADC_CHDR_CH0_0_Val << ADC_CHDR_CH0_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH0_1                        (ADC_CHDR_CH0_1_Val << ADC_CHDR_CH0_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH1_Pos                      _U_(1)                                               /**< (ADC_CHDR) Channel 1 Disable Position */
#define ADC_CHDR_CH1_Msk                      (_U_(0x1) << ADC_CHDR_CH1_Pos)                       /**< (ADC_CHDR) Channel 1 Disable Mask */
#define ADC_CHDR_CH1(value)                   (ADC_CHDR_CH1_Msk & ((value) << ADC_CHDR_CH1_Pos))  
#define   ADC_CHDR_CH1_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH1_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH1_0                        (ADC_CHDR_CH1_0_Val << ADC_CHDR_CH1_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH1_1                        (ADC_CHDR_CH1_1_Val << ADC_CHDR_CH1_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH2_Pos                      _U_(2)                                               /**< (ADC_CHDR) Channel 2 Disable Position */
#define ADC_CHDR_CH2_Msk                      (_U_(0x1) << ADC_CHDR_CH2_Pos)                       /**< (ADC_CHDR) Channel 2 Disable Mask */
#define ADC_CHDR_CH2(value)                   (ADC_CHDR_CH2_Msk & ((value) << ADC_CHDR_CH2_Pos))  
#define   ADC_CHDR_CH2_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH2_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH2_0                        (ADC_CHDR_CH2_0_Val << ADC_CHDR_CH2_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH2_1                        (ADC_CHDR_CH2_1_Val << ADC_CHDR_CH2_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH3_Pos                      _U_(3)                                               /**< (ADC_CHDR) Channel 3 Disable Position */
#define ADC_CHDR_CH3_Msk                      (_U_(0x1) << ADC_CHDR_CH3_Pos)                       /**< (ADC_CHDR) Channel 3 Disable Mask */
#define ADC_CHDR_CH3(value)                   (ADC_CHDR_CH3_Msk & ((value) << ADC_CHDR_CH3_Pos))  
#define   ADC_CHDR_CH3_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH3_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH3_0                        (ADC_CHDR_CH3_0_Val << ADC_CHDR_CH3_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH3_1                        (ADC_CHDR_CH3_1_Val << ADC_CHDR_CH3_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH4_Pos                      _U_(4)                                               /**< (ADC_CHDR) Channel 4 Disable Position */
#define ADC_CHDR_CH4_Msk                      (_U_(0x1) << ADC_CHDR_CH4_Pos)                       /**< (ADC_CHDR) Channel 4 Disable Mask */
#define ADC_CHDR_CH4(value)                   (ADC_CHDR_CH4_Msk & ((value) << ADC_CHDR_CH4_Pos))  
#define   ADC_CHDR_CH4_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH4_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH4_0                        (ADC_CHDR_CH4_0_Val << ADC_CHDR_CH4_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH4_1                        (ADC_CHDR_CH4_1_Val << ADC_CHDR_CH4_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH5_Pos                      _U_(5)                                               /**< (ADC_CHDR) Channel 5 Disable Position */
#define ADC_CHDR_CH5_Msk                      (_U_(0x1) << ADC_CHDR_CH5_Pos)                       /**< (ADC_CHDR) Channel 5 Disable Mask */
#define ADC_CHDR_CH5(value)                   (ADC_CHDR_CH5_Msk & ((value) << ADC_CHDR_CH5_Pos))  
#define   ADC_CHDR_CH5_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH5_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH5_0                        (ADC_CHDR_CH5_0_Val << ADC_CHDR_CH5_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH5_1                        (ADC_CHDR_CH5_1_Val << ADC_CHDR_CH5_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH6_Pos                      _U_(6)                                               /**< (ADC_CHDR) Channel 6 Disable Position */
#define ADC_CHDR_CH6_Msk                      (_U_(0x1) << ADC_CHDR_CH6_Pos)                       /**< (ADC_CHDR) Channel 6 Disable Mask */
#define ADC_CHDR_CH6(value)                   (ADC_CHDR_CH6_Msk & ((value) << ADC_CHDR_CH6_Pos))  
#define   ADC_CHDR_CH6_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH6_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH6_0                        (ADC_CHDR_CH6_0_Val << ADC_CHDR_CH6_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH6_1                        (ADC_CHDR_CH6_1_Val << ADC_CHDR_CH6_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH7_Pos                      _U_(7)                                               /**< (ADC_CHDR) Channel 7 Disable Position */
#define ADC_CHDR_CH7_Msk                      (_U_(0x1) << ADC_CHDR_CH7_Pos)                       /**< (ADC_CHDR) Channel 7 Disable Mask */
#define ADC_CHDR_CH7(value)                   (ADC_CHDR_CH7_Msk & ((value) << ADC_CHDR_CH7_Pos))  
#define   ADC_CHDR_CH7_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH7_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH7_0                        (ADC_CHDR_CH7_0_Val << ADC_CHDR_CH7_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH7_1                        (ADC_CHDR_CH7_1_Val << ADC_CHDR_CH7_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH8_Pos                      _U_(8)                                               /**< (ADC_CHDR) Channel 8 Disable Position */
#define ADC_CHDR_CH8_Msk                      (_U_(0x1) << ADC_CHDR_CH8_Pos)                       /**< (ADC_CHDR) Channel 8 Disable Mask */
#define ADC_CHDR_CH8(value)                   (ADC_CHDR_CH8_Msk & ((value) << ADC_CHDR_CH8_Pos))  
#define   ADC_CHDR_CH8_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH8_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH8_0                        (ADC_CHDR_CH8_0_Val << ADC_CHDR_CH8_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH8_1                        (ADC_CHDR_CH8_1_Val << ADC_CHDR_CH8_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH9_Pos                      _U_(9)                                               /**< (ADC_CHDR) Channel 9 Disable Position */
#define ADC_CHDR_CH9_Msk                      (_U_(0x1) << ADC_CHDR_CH9_Pos)                       /**< (ADC_CHDR) Channel 9 Disable Mask */
#define ADC_CHDR_CH9(value)                   (ADC_CHDR_CH9_Msk & ((value) << ADC_CHDR_CH9_Pos))  
#define   ADC_CHDR_CH9_0_Val                  _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH9_1_Val                  _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH9_0                        (ADC_CHDR_CH9_0_Val << ADC_CHDR_CH9_Pos)             /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH9_1                        (ADC_CHDR_CH9_1_Val << ADC_CHDR_CH9_Pos)             /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH10_Pos                     _U_(10)                                              /**< (ADC_CHDR) Channel 10 Disable Position */
#define ADC_CHDR_CH10_Msk                     (_U_(0x1) << ADC_CHDR_CH10_Pos)                      /**< (ADC_CHDR) Channel 10 Disable Mask */
#define ADC_CHDR_CH10(value)                  (ADC_CHDR_CH10_Msk & ((value) << ADC_CHDR_CH10_Pos))
#define   ADC_CHDR_CH10_0_Val                 _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH10_1_Val                 _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH10_0                       (ADC_CHDR_CH10_0_Val << ADC_CHDR_CH10_Pos)           /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH10_1                       (ADC_CHDR_CH10_1_Val << ADC_CHDR_CH10_Pos)           /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH11_Pos                     _U_(11)                                              /**< (ADC_CHDR) Channel 11 Disable Position */
#define ADC_CHDR_CH11_Msk                     (_U_(0x1) << ADC_CHDR_CH11_Pos)                      /**< (ADC_CHDR) Channel 11 Disable Mask */
#define ADC_CHDR_CH11(value)                  (ADC_CHDR_CH11_Msk & ((value) << ADC_CHDR_CH11_Pos))
#define   ADC_CHDR_CH11_0_Val                 _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH11_1_Val                 _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH11_0                       (ADC_CHDR_CH11_0_Val << ADC_CHDR_CH11_Pos)           /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH11_1                       (ADC_CHDR_CH11_1_Val << ADC_CHDR_CH11_Pos)           /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH12_Pos                     _U_(12)                                              /**< (ADC_CHDR) Channel 12 Disable Position */
#define ADC_CHDR_CH12_Msk                     (_U_(0x1) << ADC_CHDR_CH12_Pos)                      /**< (ADC_CHDR) Channel 12 Disable Mask */
#define ADC_CHDR_CH12(value)                  (ADC_CHDR_CH12_Msk & ((value) << ADC_CHDR_CH12_Pos))
#define   ADC_CHDR_CH12_0_Val                 _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH12_1_Val                 _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH12_0                       (ADC_CHDR_CH12_0_Val << ADC_CHDR_CH12_Pos)           /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH12_1                       (ADC_CHDR_CH12_1_Val << ADC_CHDR_CH12_Pos)           /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH13_Pos                     _U_(13)                                              /**< (ADC_CHDR) Channel 13 Disable Position */
#define ADC_CHDR_CH13_Msk                     (_U_(0x1) << ADC_CHDR_CH13_Pos)                      /**< (ADC_CHDR) Channel 13 Disable Mask */
#define ADC_CHDR_CH13(value)                  (ADC_CHDR_CH13_Msk & ((value) << ADC_CHDR_CH13_Pos))
#define   ADC_CHDR_CH13_0_Val                 _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH13_1_Val                 _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH13_0                       (ADC_CHDR_CH13_0_Val << ADC_CHDR_CH13_Pos)           /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH13_1                       (ADC_CHDR_CH13_1_Val << ADC_CHDR_CH13_Pos)           /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH14_Pos                     _U_(14)                                              /**< (ADC_CHDR) Channel 14 Disable Position */
#define ADC_CHDR_CH14_Msk                     (_U_(0x1) << ADC_CHDR_CH14_Pos)                      /**< (ADC_CHDR) Channel 14 Disable Mask */
#define ADC_CHDR_CH14(value)                  (ADC_CHDR_CH14_Msk & ((value) << ADC_CHDR_CH14_Pos))
#define   ADC_CHDR_CH14_0_Val                 _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH14_1_Val                 _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH14_0                       (ADC_CHDR_CH14_0_Val << ADC_CHDR_CH14_Pos)           /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH14_1                       (ADC_CHDR_CH14_1_Val << ADC_CHDR_CH14_Pos)           /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH15_Pos                     _U_(15)                                              /**< (ADC_CHDR) Channel 15 Disable Position */
#define ADC_CHDR_CH15_Msk                     (_U_(0x1) << ADC_CHDR_CH15_Pos)                      /**< (ADC_CHDR) Channel 15 Disable Mask */
#define ADC_CHDR_CH15(value)                  (ADC_CHDR_CH15_Msk & ((value) << ADC_CHDR_CH15_Pos))
#define   ADC_CHDR_CH15_0_Val                 _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH15_1_Val                 _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH15_0                       (ADC_CHDR_CH15_0_Val << ADC_CHDR_CH15_Pos)           /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH15_1                       (ADC_CHDR_CH15_1_Val << ADC_CHDR_CH15_Pos)           /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH30_Pos                     _U_(30)                                              /**< (ADC_CHDR) Channel 30 Disable Position */
#define ADC_CHDR_CH30_Msk                     (_U_(0x1) << ADC_CHDR_CH30_Pos)                      /**< (ADC_CHDR) Channel 30 Disable Mask */
#define ADC_CHDR_CH30(value)                  (ADC_CHDR_CH30_Msk & ((value) << ADC_CHDR_CH30_Pos))
#define   ADC_CHDR_CH30_0_Val                 _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH30_1_Val                 _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH30_0                       (ADC_CHDR_CH30_0_Val << ADC_CHDR_CH30_Pos)           /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH30_1                       (ADC_CHDR_CH30_1_Val << ADC_CHDR_CH30_Pos)           /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_CH31_Pos                     _U_(31)                                              /**< (ADC_CHDR) Channel 31 Disable Position */
#define ADC_CHDR_CH31_Msk                     (_U_(0x1) << ADC_CHDR_CH31_Pos)                      /**< (ADC_CHDR) Channel 31 Disable Mask */
#define ADC_CHDR_CH31(value)                  (ADC_CHDR_CH31_Msk & ((value) << ADC_CHDR_CH31_Pos))
#define   ADC_CHDR_CH31_0_Val                 _U_(0x0)                                             /**< (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH31_1_Val                 _U_(0x1)                                             /**< (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH31_0                       (ADC_CHDR_CH31_0_Val << ADC_CHDR_CH31_Pos)           /**< (ADC_CHDR) No effect. Position  */
#define ADC_CHDR_CH31_1                       (ADC_CHDR_CH31_1_Val << ADC_CHDR_CH31_Pos)           /**< (ADC_CHDR) Disables the corresponding channel. Position  */
#define ADC_CHDR_Msk                          _U_(0xC000FFFF)                                      /**< (ADC_CHDR) Register Mask  */

#define ADC_CHDR_CH_Pos                       _U_(0)                                               /**< (ADC_CHDR Position) Channel 3x Disable */
#define ADC_CHDR_CH_Msk                       (_U_(0x3FFFF) << ADC_CHDR_CH_Pos)                    /**< (ADC_CHDR Mask) CH */
#define ADC_CHDR_CH(value)                    (ADC_CHDR_CH_Msk & ((value) << ADC_CHDR_CH_Pos))     

/* -------- ADC_CHSR : (ADC Offset: 0x18) ( R/ 32) Channel Status Register -------- */
#define ADC_CHSR_RESETVALUE                   _U_(0x00)                                            /**<  (ADC_CHSR) Channel Status Register  Reset Value */

#define ADC_CHSR_CH0_Pos                      _U_(0)                                               /**< (ADC_CHSR) Channel 0 Status Position */
#define ADC_CHSR_CH0_Msk                      (_U_(0x1) << ADC_CHSR_CH0_Pos)                       /**< (ADC_CHSR) Channel 0 Status Mask */
#define ADC_CHSR_CH0(value)                   (ADC_CHSR_CH0_Msk & ((value) << ADC_CHSR_CH0_Pos))  
#define   ADC_CHSR_CH0_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH0_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH0_0                        (ADC_CHSR_CH0_0_Val << ADC_CHSR_CH0_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH0_1                        (ADC_CHSR_CH0_1_Val << ADC_CHSR_CH0_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH1_Pos                      _U_(1)                                               /**< (ADC_CHSR) Channel 1 Status Position */
#define ADC_CHSR_CH1_Msk                      (_U_(0x1) << ADC_CHSR_CH1_Pos)                       /**< (ADC_CHSR) Channel 1 Status Mask */
#define ADC_CHSR_CH1(value)                   (ADC_CHSR_CH1_Msk & ((value) << ADC_CHSR_CH1_Pos))  
#define   ADC_CHSR_CH1_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH1_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH1_0                        (ADC_CHSR_CH1_0_Val << ADC_CHSR_CH1_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH1_1                        (ADC_CHSR_CH1_1_Val << ADC_CHSR_CH1_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH2_Pos                      _U_(2)                                               /**< (ADC_CHSR) Channel 2 Status Position */
#define ADC_CHSR_CH2_Msk                      (_U_(0x1) << ADC_CHSR_CH2_Pos)                       /**< (ADC_CHSR) Channel 2 Status Mask */
#define ADC_CHSR_CH2(value)                   (ADC_CHSR_CH2_Msk & ((value) << ADC_CHSR_CH2_Pos))  
#define   ADC_CHSR_CH2_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH2_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH2_0                        (ADC_CHSR_CH2_0_Val << ADC_CHSR_CH2_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH2_1                        (ADC_CHSR_CH2_1_Val << ADC_CHSR_CH2_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH3_Pos                      _U_(3)                                               /**< (ADC_CHSR) Channel 3 Status Position */
#define ADC_CHSR_CH3_Msk                      (_U_(0x1) << ADC_CHSR_CH3_Pos)                       /**< (ADC_CHSR) Channel 3 Status Mask */
#define ADC_CHSR_CH3(value)                   (ADC_CHSR_CH3_Msk & ((value) << ADC_CHSR_CH3_Pos))  
#define   ADC_CHSR_CH3_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH3_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH3_0                        (ADC_CHSR_CH3_0_Val << ADC_CHSR_CH3_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH3_1                        (ADC_CHSR_CH3_1_Val << ADC_CHSR_CH3_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH4_Pos                      _U_(4)                                               /**< (ADC_CHSR) Channel 4 Status Position */
#define ADC_CHSR_CH4_Msk                      (_U_(0x1) << ADC_CHSR_CH4_Pos)                       /**< (ADC_CHSR) Channel 4 Status Mask */
#define ADC_CHSR_CH4(value)                   (ADC_CHSR_CH4_Msk & ((value) << ADC_CHSR_CH4_Pos))  
#define   ADC_CHSR_CH4_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH4_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH4_0                        (ADC_CHSR_CH4_0_Val << ADC_CHSR_CH4_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH4_1                        (ADC_CHSR_CH4_1_Val << ADC_CHSR_CH4_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH5_Pos                      _U_(5)                                               /**< (ADC_CHSR) Channel 5 Status Position */
#define ADC_CHSR_CH5_Msk                      (_U_(0x1) << ADC_CHSR_CH5_Pos)                       /**< (ADC_CHSR) Channel 5 Status Mask */
#define ADC_CHSR_CH5(value)                   (ADC_CHSR_CH5_Msk & ((value) << ADC_CHSR_CH5_Pos))  
#define   ADC_CHSR_CH5_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH5_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH5_0                        (ADC_CHSR_CH5_0_Val << ADC_CHSR_CH5_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH5_1                        (ADC_CHSR_CH5_1_Val << ADC_CHSR_CH5_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH6_Pos                      _U_(6)                                               /**< (ADC_CHSR) Channel 6 Status Position */
#define ADC_CHSR_CH6_Msk                      (_U_(0x1) << ADC_CHSR_CH6_Pos)                       /**< (ADC_CHSR) Channel 6 Status Mask */
#define ADC_CHSR_CH6(value)                   (ADC_CHSR_CH6_Msk & ((value) << ADC_CHSR_CH6_Pos))  
#define   ADC_CHSR_CH6_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH6_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH6_0                        (ADC_CHSR_CH6_0_Val << ADC_CHSR_CH6_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH6_1                        (ADC_CHSR_CH6_1_Val << ADC_CHSR_CH6_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH7_Pos                      _U_(7)                                               /**< (ADC_CHSR) Channel 7 Status Position */
#define ADC_CHSR_CH7_Msk                      (_U_(0x1) << ADC_CHSR_CH7_Pos)                       /**< (ADC_CHSR) Channel 7 Status Mask */
#define ADC_CHSR_CH7(value)                   (ADC_CHSR_CH7_Msk & ((value) << ADC_CHSR_CH7_Pos))  
#define   ADC_CHSR_CH7_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH7_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH7_0                        (ADC_CHSR_CH7_0_Val << ADC_CHSR_CH7_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH7_1                        (ADC_CHSR_CH7_1_Val << ADC_CHSR_CH7_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH8_Pos                      _U_(8)                                               /**< (ADC_CHSR) Channel 8 Status Position */
#define ADC_CHSR_CH8_Msk                      (_U_(0x1) << ADC_CHSR_CH8_Pos)                       /**< (ADC_CHSR) Channel 8 Status Mask */
#define ADC_CHSR_CH8(value)                   (ADC_CHSR_CH8_Msk & ((value) << ADC_CHSR_CH8_Pos))  
#define   ADC_CHSR_CH8_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH8_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH8_0                        (ADC_CHSR_CH8_0_Val << ADC_CHSR_CH8_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH8_1                        (ADC_CHSR_CH8_1_Val << ADC_CHSR_CH8_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH9_Pos                      _U_(9)                                               /**< (ADC_CHSR) Channel 9 Status Position */
#define ADC_CHSR_CH9_Msk                      (_U_(0x1) << ADC_CHSR_CH9_Pos)                       /**< (ADC_CHSR) Channel 9 Status Mask */
#define ADC_CHSR_CH9(value)                   (ADC_CHSR_CH9_Msk & ((value) << ADC_CHSR_CH9_Pos))  
#define   ADC_CHSR_CH9_0_Val                  _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH9_1_Val                  _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH9_0                        (ADC_CHSR_CH9_0_Val << ADC_CHSR_CH9_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH9_1                        (ADC_CHSR_CH9_1_Val << ADC_CHSR_CH9_Pos)             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH10_Pos                     _U_(10)                                              /**< (ADC_CHSR) Channel 10 Status Position */
#define ADC_CHSR_CH10_Msk                     (_U_(0x1) << ADC_CHSR_CH10_Pos)                      /**< (ADC_CHSR) Channel 10 Status Mask */
#define ADC_CHSR_CH10(value)                  (ADC_CHSR_CH10_Msk & ((value) << ADC_CHSR_CH10_Pos))
#define   ADC_CHSR_CH10_0_Val                 _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH10_1_Val                 _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH10_0                       (ADC_CHSR_CH10_0_Val << ADC_CHSR_CH10_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH10_1                       (ADC_CHSR_CH10_1_Val << ADC_CHSR_CH10_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH11_Pos                     _U_(11)                                              /**< (ADC_CHSR) Channel 11 Status Position */
#define ADC_CHSR_CH11_Msk                     (_U_(0x1) << ADC_CHSR_CH11_Pos)                      /**< (ADC_CHSR) Channel 11 Status Mask */
#define ADC_CHSR_CH11(value)                  (ADC_CHSR_CH11_Msk & ((value) << ADC_CHSR_CH11_Pos))
#define   ADC_CHSR_CH11_0_Val                 _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH11_1_Val                 _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH11_0                       (ADC_CHSR_CH11_0_Val << ADC_CHSR_CH11_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH11_1                       (ADC_CHSR_CH11_1_Val << ADC_CHSR_CH11_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH12_Pos                     _U_(12)                                              /**< (ADC_CHSR) Channel 12 Status Position */
#define ADC_CHSR_CH12_Msk                     (_U_(0x1) << ADC_CHSR_CH12_Pos)                      /**< (ADC_CHSR) Channel 12 Status Mask */
#define ADC_CHSR_CH12(value)                  (ADC_CHSR_CH12_Msk & ((value) << ADC_CHSR_CH12_Pos))
#define   ADC_CHSR_CH12_0_Val                 _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH12_1_Val                 _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH12_0                       (ADC_CHSR_CH12_0_Val << ADC_CHSR_CH12_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH12_1                       (ADC_CHSR_CH12_1_Val << ADC_CHSR_CH12_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH13_Pos                     _U_(13)                                              /**< (ADC_CHSR) Channel 13 Status Position */
#define ADC_CHSR_CH13_Msk                     (_U_(0x1) << ADC_CHSR_CH13_Pos)                      /**< (ADC_CHSR) Channel 13 Status Mask */
#define ADC_CHSR_CH13(value)                  (ADC_CHSR_CH13_Msk & ((value) << ADC_CHSR_CH13_Pos))
#define   ADC_CHSR_CH13_0_Val                 _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH13_1_Val                 _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH13_0                       (ADC_CHSR_CH13_0_Val << ADC_CHSR_CH13_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH13_1                       (ADC_CHSR_CH13_1_Val << ADC_CHSR_CH13_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH14_Pos                     _U_(14)                                              /**< (ADC_CHSR) Channel 14 Status Position */
#define ADC_CHSR_CH14_Msk                     (_U_(0x1) << ADC_CHSR_CH14_Pos)                      /**< (ADC_CHSR) Channel 14 Status Mask */
#define ADC_CHSR_CH14(value)                  (ADC_CHSR_CH14_Msk & ((value) << ADC_CHSR_CH14_Pos))
#define   ADC_CHSR_CH14_0_Val                 _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH14_1_Val                 _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH14_0                       (ADC_CHSR_CH14_0_Val << ADC_CHSR_CH14_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH14_1                       (ADC_CHSR_CH14_1_Val << ADC_CHSR_CH14_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH15_Pos                     _U_(15)                                              /**< (ADC_CHSR) Channel 15 Status Position */
#define ADC_CHSR_CH15_Msk                     (_U_(0x1) << ADC_CHSR_CH15_Pos)                      /**< (ADC_CHSR) Channel 15 Status Mask */
#define ADC_CHSR_CH15(value)                  (ADC_CHSR_CH15_Msk & ((value) << ADC_CHSR_CH15_Pos))
#define   ADC_CHSR_CH15_0_Val                 _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH15_1_Val                 _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH15_0                       (ADC_CHSR_CH15_0_Val << ADC_CHSR_CH15_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH15_1                       (ADC_CHSR_CH15_1_Val << ADC_CHSR_CH15_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH30_Pos                     _U_(30)                                              /**< (ADC_CHSR) Channel 30 Status Position */
#define ADC_CHSR_CH30_Msk                     (_U_(0x1) << ADC_CHSR_CH30_Pos)                      /**< (ADC_CHSR) Channel 30 Status Mask */
#define ADC_CHSR_CH30(value)                  (ADC_CHSR_CH30_Msk & ((value) << ADC_CHSR_CH30_Pos))
#define   ADC_CHSR_CH30_0_Val                 _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH30_1_Val                 _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH30_0                       (ADC_CHSR_CH30_0_Val << ADC_CHSR_CH30_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH30_1                       (ADC_CHSR_CH30_1_Val << ADC_CHSR_CH30_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_CH31_Pos                     _U_(31)                                              /**< (ADC_CHSR) Channel 31 Status Position */
#define ADC_CHSR_CH31_Msk                     (_U_(0x1) << ADC_CHSR_CH31_Pos)                      /**< (ADC_CHSR) Channel 31 Status Mask */
#define ADC_CHSR_CH31(value)                  (ADC_CHSR_CH31_Msk & ((value) << ADC_CHSR_CH31_Pos))
#define   ADC_CHSR_CH31_0_Val                 _U_(0x0)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH31_1_Val                 _U_(0x1)                                             /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH31_0                       (ADC_CHSR_CH31_0_Val << ADC_CHSR_CH31_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position  */
#define ADC_CHSR_CH31_1                       (ADC_CHSR_CH31_1_Val << ADC_CHSR_CH31_Pos)           /**< (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position  */
#define ADC_CHSR_Msk                          _U_(0xC000FFFF)                                      /**< (ADC_CHSR) Register Mask  */

#define ADC_CHSR_CH_Pos                       _U_(0)                                               /**< (ADC_CHSR Position) Channel 3x Status */
#define ADC_CHSR_CH_Msk                       (_U_(0x3FFFF) << ADC_CHSR_CH_Pos)                    /**< (ADC_CHSR Mask) CH */
#define ADC_CHSR_CH(value)                    (ADC_CHSR_CH_Msk & ((value) << ADC_CHSR_CH_Pos))     

/* -------- ADC_LCDR : (ADC Offset: 0x20) ( R/ 32) Last Converted Data Register -------- */
#define ADC_LCDR_RESETVALUE                   _U_(0x00)                                            /**<  (ADC_LCDR) Last Converted Data Register  Reset Value */

#define ADC_LCDR_LDATA_Pos                    _U_(0)                                               /**< (ADC_LCDR) Last Data Converted Position */
#define ADC_LCDR_LDATA_Msk                    (_U_(0xFFFF) << ADC_LCDR_LDATA_Pos)                  /**< (ADC_LCDR) Last Data Converted Mask */
#define ADC_LCDR_LDATA(value)                 (ADC_LCDR_LDATA_Msk & ((value) << ADC_LCDR_LDATA_Pos))
#define ADC_LCDR_CHNBOSR_Pos                  _U_(24)                                              /**< (ADC_LCDR) Channel Number in Oversampling Mode Position */
#define ADC_LCDR_CHNBOSR_Msk                  (_U_(0x1F) << ADC_LCDR_CHNBOSR_Pos)                  /**< (ADC_LCDR) Channel Number in Oversampling Mode Mask */
#define ADC_LCDR_CHNBOSR(value)               (ADC_LCDR_CHNBOSR_Msk & ((value) << ADC_LCDR_CHNBOSR_Pos))
#define ADC_LCDR_Msk                          _U_(0x1F00FFFF)                                      /**< (ADC_LCDR) Register Mask  */

/* NO_OSR mode */
#define ADC_LCDR_NO_OSR_LDATA_Pos             _U_(0)                                               /**< (ADC_LCDR) Last Data Converted when No Oversampling Position */
#define ADC_LCDR_NO_OSR_LDATA_Msk             (_U_(0xFFF) << ADC_LCDR_NO_OSR_LDATA_Pos)            /**< (ADC_LCDR) Last Data Converted when No Oversampling Mask */
#define ADC_LCDR_NO_OSR_LDATA(value)          (ADC_LCDR_NO_OSR_LDATA_Msk & ((value) << ADC_LCDR_NO_OSR_LDATA_Pos))
#define ADC_LCDR_NO_OSR_CHNB_Pos              _U_(12)                                              /**< (ADC_LCDR) Channel Number when No Oversampling Position */
#define ADC_LCDR_NO_OSR_CHNB_Msk              (_U_(0xF) << ADC_LCDR_NO_OSR_CHNB_Pos)               /**< (ADC_LCDR) Channel Number when No Oversampling Mask */
#define ADC_LCDR_NO_OSR_CHNB(value)           (ADC_LCDR_NO_OSR_CHNB_Msk & ((value) << ADC_LCDR_NO_OSR_CHNB_Pos))
#define ADC_LCDR_NO_OSR_Msk                   _U_(0x0000FFFF)                                       /**< (ADC_LCDR_NO_OSR) Register Mask  */


/* -------- ADC_IER : (ADC Offset: 0x24) ( /W 32) Interrupt Enable Register -------- */
#define ADC_IER_RXRDY_Pos                     _U_(0)                                               /**< (ADC_IER) Receive Ready Interrupt Enable Position */
#define ADC_IER_RXRDY_Msk                     (_U_(0x1) << ADC_IER_RXRDY_Pos)                      /**< (ADC_IER) Receive Ready Interrupt Enable Mask */
#define ADC_IER_RXRDY(value)                  (ADC_IER_RXRDY_Msk & ((value) << ADC_IER_RXRDY_Pos))
#define ADC_IER_RXEMPTY_Pos                   _U_(1)                                               /**< (ADC_IER) Receive FIFO Empty Interrupt Enable Position */
#define ADC_IER_RXEMPTY_Msk                   (_U_(0x1) << ADC_IER_RXEMPTY_Pos)                    /**< (ADC_IER) Receive FIFO Empty Interrupt Enable Mask */
#define ADC_IER_RXEMPTY(value)                (ADC_IER_RXEMPTY_Msk & ((value) << ADC_IER_RXEMPTY_Pos))
#define ADC_IER_RXFULL_Pos                    _U_(2)                                               /**< (ADC_IER) Receive FIFO Full Interrupt Enable Position */
#define ADC_IER_RXFULL_Msk                    (_U_(0x1) << ADC_IER_RXFULL_Pos)                     /**< (ADC_IER) Receive FIFO Full Interrupt Enable Mask */
#define ADC_IER_RXFULL(value)                 (ADC_IER_RXFULL_Msk & ((value) << ADC_IER_RXFULL_Pos))
#define ADC_IER_RXCHUNK_Pos                   _U_(3)                                               /**< (ADC_IER) Receive FIFO Chunk Interrupt Enable Position */
#define ADC_IER_RXCHUNK_Msk                   (_U_(0x1) << ADC_IER_RXCHUNK_Pos)                    /**< (ADC_IER) Receive FIFO Chunk Interrupt Enable Mask */
#define ADC_IER_RXCHUNK(value)                (ADC_IER_RXCHUNK_Msk & ((value) << ADC_IER_RXCHUNK_Pos))
#define ADC_IER_RXUDR_Pos                     _U_(4)                                               /**< (ADC_IER) Receive Under Flow Interrupt Enable Position */
#define ADC_IER_RXUDR_Msk                     (_U_(0x1) << ADC_IER_RXUDR_Pos)                      /**< (ADC_IER) Receive Under Flow Interrupt Enable Mask */
#define ADC_IER_RXUDR(value)                  (ADC_IER_RXUDR_Msk & ((value) << ADC_IER_RXUDR_Pos))
#define ADC_IER_RXOVR_Pos                     _U_(5)                                               /**< (ADC_IER) Receive Over Flow Interrupt Enable Position */
#define ADC_IER_RXOVR_Msk                     (_U_(0x1) << ADC_IER_RXOVR_Pos)                      /**< (ADC_IER) Receive Over Flow Interrupt Enable Mask */
#define ADC_IER_RXOVR(value)                  (ADC_IER_RXOVR_Msk & ((value) << ADC_IER_RXOVR_Pos))
#define ADC_IER_EOS_Pos                       _U_(18)                                              /**< (ADC_IER) End Of Sequence Interrupt Enable Position */
#define ADC_IER_EOS_Msk                       (_U_(0x1) << ADC_IER_EOS_Pos)                        /**< (ADC_IER) End Of Sequence Interrupt Enable Mask */
#define ADC_IER_EOS(value)                    (ADC_IER_EOS_Msk & ((value) << ADC_IER_EOS_Pos))    
#define ADC_IER_TEMPCHG_Pos                   _U_(19)                                              /**< (ADC_IER) Temperature Change Interrupt Enable Position */
#define ADC_IER_TEMPCHG_Msk                   (_U_(0x1) << ADC_IER_TEMPCHG_Pos)                    /**< (ADC_IER) Temperature Change Interrupt Enable Mask */
#define ADC_IER_TEMPCHG(value)                (ADC_IER_TEMPCHG_Msk & ((value) << ADC_IER_TEMPCHG_Pos))
#define ADC_IER_DRDY_Pos                      _U_(24)                                              /**< (ADC_IER) Data Ready Interrupt Enable Position */
#define ADC_IER_DRDY_Msk                      (_U_(0x1) << ADC_IER_DRDY_Pos)                       /**< (ADC_IER) Data Ready Interrupt Enable Mask */
#define ADC_IER_DRDY(value)                   (ADC_IER_DRDY_Msk & ((value) << ADC_IER_DRDY_Pos))  
#define ADC_IER_GOVRE_Pos                     _U_(25)                                              /**< (ADC_IER) General Overrun Error Interrupt Enable Position */
#define ADC_IER_GOVRE_Msk                     (_U_(0x1) << ADC_IER_GOVRE_Pos)                      /**< (ADC_IER) General Overrun Error Interrupt Enable Mask */
#define ADC_IER_GOVRE(value)                  (ADC_IER_GOVRE_Msk & ((value) << ADC_IER_GOVRE_Pos))
#define ADC_IER_COMPE_Pos                     _U_(26)                                              /**< (ADC_IER) Comparison Event Interrupt Enable Position */
#define ADC_IER_COMPE_Msk                     (_U_(0x1) << ADC_IER_COMPE_Pos)                      /**< (ADC_IER) Comparison Event Interrupt Enable Mask */
#define ADC_IER_COMPE(value)                  (ADC_IER_COMPE_Msk & ((value) << ADC_IER_COMPE_Pos))
#define ADC_IER_Msk                           _U_(0x070C003F)                                      /**< (ADC_IER) Register Mask  */


/* -------- ADC_IDR : (ADC Offset: 0x28) ( /W 32) Interrupt Disable Register -------- */
#define ADC_IDR_RXRDY_Pos                     _U_(0)                                               /**< (ADC_IDR) Receive Ready Interrupt Disable Position */
#define ADC_IDR_RXRDY_Msk                     (_U_(0x1) << ADC_IDR_RXRDY_Pos)                      /**< (ADC_IDR) Receive Ready Interrupt Disable Mask */
#define ADC_IDR_RXRDY(value)                  (ADC_IDR_RXRDY_Msk & ((value) << ADC_IDR_RXRDY_Pos))
#define ADC_IDR_RXEMPTY_Pos                   _U_(1)                                               /**< (ADC_IDR) Receive FIFO Empty Interrupt Disable Position */
#define ADC_IDR_RXEMPTY_Msk                   (_U_(0x1) << ADC_IDR_RXEMPTY_Pos)                    /**< (ADC_IDR) Receive FIFO Empty Interrupt Disable Mask */
#define ADC_IDR_RXEMPTY(value)                (ADC_IDR_RXEMPTY_Msk & ((value) << ADC_IDR_RXEMPTY_Pos))
#define ADC_IDR_RXFULL_Pos                    _U_(2)                                               /**< (ADC_IDR) Receive FIFO Full Interrupt Disable Position */
#define ADC_IDR_RXFULL_Msk                    (_U_(0x1) << ADC_IDR_RXFULL_Pos)                     /**< (ADC_IDR) Receive FIFO Full Interrupt Disable Mask */
#define ADC_IDR_RXFULL(value)                 (ADC_IDR_RXFULL_Msk & ((value) << ADC_IDR_RXFULL_Pos))
#define ADC_IDR_RXCHUNK_Pos                   _U_(3)                                               /**< (ADC_IDR) Receive FIFO Chunk Interrupt Disable Position */
#define ADC_IDR_RXCHUNK_Msk                   (_U_(0x1) << ADC_IDR_RXCHUNK_Pos)                    /**< (ADC_IDR) Receive FIFO Chunk Interrupt Disable Mask */
#define ADC_IDR_RXCHUNK(value)                (ADC_IDR_RXCHUNK_Msk & ((value) << ADC_IDR_RXCHUNK_Pos))
#define ADC_IDR_RXUDR_Pos                     _U_(4)                                               /**< (ADC_IDR) Receive Under Flow Interrupt Disable Position */
#define ADC_IDR_RXUDR_Msk                     (_U_(0x1) << ADC_IDR_RXUDR_Pos)                      /**< (ADC_IDR) Receive Under Flow Interrupt Disable Mask */
#define ADC_IDR_RXUDR(value)                  (ADC_IDR_RXUDR_Msk & ((value) << ADC_IDR_RXUDR_Pos))
#define ADC_IDR_RXOVR_Pos                     _U_(5)                                               /**< (ADC_IDR) Receive Over Flow Interrupt Disable Position */
#define ADC_IDR_RXOVR_Msk                     (_U_(0x1) << ADC_IDR_RXOVR_Pos)                      /**< (ADC_IDR) Receive Over Flow Interrupt Disable Mask */
#define ADC_IDR_RXOVR(value)                  (ADC_IDR_RXOVR_Msk & ((value) << ADC_IDR_RXOVR_Pos))
#define ADC_IDR_EOS_Pos                       _U_(18)                                              /**< (ADC_IDR) End Of Sequence Interrupt Disable Position */
#define ADC_IDR_EOS_Msk                       (_U_(0x1) << ADC_IDR_EOS_Pos)                        /**< (ADC_IDR) End Of Sequence Interrupt Disable Mask */
#define ADC_IDR_EOS(value)                    (ADC_IDR_EOS_Msk & ((value) << ADC_IDR_EOS_Pos))    
#define ADC_IDR_TEMPCHG_Pos                   _U_(19)                                              /**< (ADC_IDR) Temperature Change Interrupt Disable Position */
#define ADC_IDR_TEMPCHG_Msk                   (_U_(0x1) << ADC_IDR_TEMPCHG_Pos)                    /**< (ADC_IDR) Temperature Change Interrupt Disable Mask */
#define ADC_IDR_TEMPCHG(value)                (ADC_IDR_TEMPCHG_Msk & ((value) << ADC_IDR_TEMPCHG_Pos))
#define ADC_IDR_DRDY_Pos                      _U_(24)                                              /**< (ADC_IDR) Data Ready Interrupt Disable Position */
#define ADC_IDR_DRDY_Msk                      (_U_(0x1) << ADC_IDR_DRDY_Pos)                       /**< (ADC_IDR) Data Ready Interrupt Disable Mask */
#define ADC_IDR_DRDY(value)                   (ADC_IDR_DRDY_Msk & ((value) << ADC_IDR_DRDY_Pos))  
#define ADC_IDR_GOVRE_Pos                     _U_(25)                                              /**< (ADC_IDR) General Overrun Error Interrupt Disable Position */
#define ADC_IDR_GOVRE_Msk                     (_U_(0x1) << ADC_IDR_GOVRE_Pos)                      /**< (ADC_IDR) General Overrun Error Interrupt Disable Mask */
#define ADC_IDR_GOVRE(value)                  (ADC_IDR_GOVRE_Msk & ((value) << ADC_IDR_GOVRE_Pos))
#define ADC_IDR_COMPE_Pos                     _U_(26)                                              /**< (ADC_IDR) Comparison Event Interrupt Disable Position */
#define ADC_IDR_COMPE_Msk                     (_U_(0x1) << ADC_IDR_COMPE_Pos)                      /**< (ADC_IDR) Comparison Event Interrupt Disable Mask */
#define ADC_IDR_COMPE(value)                  (ADC_IDR_COMPE_Msk & ((value) << ADC_IDR_COMPE_Pos))
#define ADC_IDR_Msk                           _U_(0x070C003F)                                      /**< (ADC_IDR) Register Mask  */


/* -------- ADC_IMR : (ADC Offset: 0x2C) ( R/ 32) Interrupt Mask Register -------- */
#define ADC_IMR_RESETVALUE                    _U_(0x00)                                            /**<  (ADC_IMR) Interrupt Mask Register  Reset Value */

#define ADC_IMR_RXRDY_Pos                     _U_(0)                                               /**< (ADC_IMR) Receive Ready Interrupt Mask Position */
#define ADC_IMR_RXRDY_Msk                     (_U_(0x1) << ADC_IMR_RXRDY_Pos)                      /**< (ADC_IMR) Receive Ready Interrupt Mask Mask */
#define ADC_IMR_RXRDY(value)                  (ADC_IMR_RXRDY_Msk & ((value) << ADC_IMR_RXRDY_Pos))
#define ADC_IMR_RXEMPTY_Pos                   _U_(1)                                               /**< (ADC_IMR) Receive FIFO Empty Interrupt Mask Position */
#define ADC_IMR_RXEMPTY_Msk                   (_U_(0x1) << ADC_IMR_RXEMPTY_Pos)                    /**< (ADC_IMR) Receive FIFO Empty Interrupt Mask Mask */
#define ADC_IMR_RXEMPTY(value)                (ADC_IMR_RXEMPTY_Msk & ((value) << ADC_IMR_RXEMPTY_Pos))
#define ADC_IMR_RXFULL_Pos                    _U_(2)                                               /**< (ADC_IMR) Receive FIFO Full Interrupt Mask Position */
#define ADC_IMR_RXFULL_Msk                    (_U_(0x1) << ADC_IMR_RXFULL_Pos)                     /**< (ADC_IMR) Receive FIFO Full Interrupt Mask Mask */
#define ADC_IMR_RXFULL(value)                 (ADC_IMR_RXFULL_Msk & ((value) << ADC_IMR_RXFULL_Pos))
#define ADC_IMR_RXCHUNK_Pos                   _U_(3)                                               /**< (ADC_IMR) Receive FIFO Chunk Interrupt Mask Position */
#define ADC_IMR_RXCHUNK_Msk                   (_U_(0x1) << ADC_IMR_RXCHUNK_Pos)                    /**< (ADC_IMR) Receive FIFO Chunk Interrupt Mask Mask */
#define ADC_IMR_RXCHUNK(value)                (ADC_IMR_RXCHUNK_Msk & ((value) << ADC_IMR_RXCHUNK_Pos))
#define ADC_IMR_RXUDR_Pos                     _U_(4)                                               /**< (ADC_IMR) Receive Under Flow Interrupt Mask Position */
#define ADC_IMR_RXUDR_Msk                     (_U_(0x1) << ADC_IMR_RXUDR_Pos)                      /**< (ADC_IMR) Receive Under Flow Interrupt Mask Mask */
#define ADC_IMR_RXUDR(value)                  (ADC_IMR_RXUDR_Msk & ((value) << ADC_IMR_RXUDR_Pos))
#define ADC_IMR_RXOVR_Pos                     _U_(5)                                               /**< (ADC_IMR) Receive Over Flow Interrupt Mask Position */
#define ADC_IMR_RXOVR_Msk                     (_U_(0x1) << ADC_IMR_RXOVR_Pos)                      /**< (ADC_IMR) Receive Over Flow Interrupt Mask Mask */
#define ADC_IMR_RXOVR(value)                  (ADC_IMR_RXOVR_Msk & ((value) << ADC_IMR_RXOVR_Pos))
#define ADC_IMR_EOS_Pos                       _U_(18)                                              /**< (ADC_IMR) End Of Sequence Interrupt Mask Position */
#define ADC_IMR_EOS_Msk                       (_U_(0x1) << ADC_IMR_EOS_Pos)                        /**< (ADC_IMR) End Of Sequence Interrupt Mask Mask */
#define ADC_IMR_EOS(value)                    (ADC_IMR_EOS_Msk & ((value) << ADC_IMR_EOS_Pos))    
#define ADC_IMR_TEMPCHG_Pos                   _U_(19)                                              /**< (ADC_IMR) Temperature Change Interrupt Mask Position */
#define ADC_IMR_TEMPCHG_Msk                   (_U_(0x1) << ADC_IMR_TEMPCHG_Pos)                    /**< (ADC_IMR) Temperature Change Interrupt Mask Mask */
#define ADC_IMR_TEMPCHG(value)                (ADC_IMR_TEMPCHG_Msk & ((value) << ADC_IMR_TEMPCHG_Pos))
#define ADC_IMR_DRDY_Pos                      _U_(24)                                              /**< (ADC_IMR) Data Ready Interrupt Mask Position */
#define ADC_IMR_DRDY_Msk                      (_U_(0x1) << ADC_IMR_DRDY_Pos)                       /**< (ADC_IMR) Data Ready Interrupt Mask Mask */
#define ADC_IMR_DRDY(value)                   (ADC_IMR_DRDY_Msk & ((value) << ADC_IMR_DRDY_Pos))  
#define ADC_IMR_GOVRE_Pos                     _U_(25)                                              /**< (ADC_IMR) General Overrun Error Interrupt Mask Position */
#define ADC_IMR_GOVRE_Msk                     (_U_(0x1) << ADC_IMR_GOVRE_Pos)                      /**< (ADC_IMR) General Overrun Error Interrupt Mask Mask */
#define ADC_IMR_GOVRE(value)                  (ADC_IMR_GOVRE_Msk & ((value) << ADC_IMR_GOVRE_Pos))
#define ADC_IMR_COMPE_Pos                     _U_(26)                                              /**< (ADC_IMR) Comparison Event Interrupt Mask Position */
#define ADC_IMR_COMPE_Msk                     (_U_(0x1) << ADC_IMR_COMPE_Pos)                      /**< (ADC_IMR) Comparison Event Interrupt Mask Mask */
#define ADC_IMR_COMPE(value)                  (ADC_IMR_COMPE_Msk & ((value) << ADC_IMR_COMPE_Pos))
#define ADC_IMR_Msk                           _U_(0x070C003F)                                      /**< (ADC_IMR) Register Mask  */


/* -------- ADC_ISR : (ADC Offset: 0x30) ( R/ 32) Interrupt Status Register -------- */
#define ADC_ISR_RESETVALUE                    _U_(0x00)                                            /**<  (ADC_ISR) Interrupt Status Register  Reset Value */

#define ADC_ISR_RXRDY_Pos                     _U_(0)                                               /**< (ADC_ISR) Receive Ready (cleared on read) Position */
#define ADC_ISR_RXRDY_Msk                     (_U_(0x1) << ADC_ISR_RXRDY_Pos)                      /**< (ADC_ISR) Receive Ready (cleared on read) Mask */
#define ADC_ISR_RXRDY(value)                  (ADC_ISR_RXRDY_Msk & ((value) << ADC_ISR_RXRDY_Pos))
#define   ADC_ISR_RXRDY_0_Val                 _U_(0x0)                                             /**< (ADC_ISR) FIFO has been empty since the last read of ADC_ISR.  */
#define   ADC_ISR_RXRDY_1_Val                 _U_(0x1)                                             /**< (ADC_ISR) One element has been written since the last read of ADC_ISR.  */
#define ADC_ISR_RXRDY_0                       (ADC_ISR_RXRDY_0_Val << ADC_ISR_RXRDY_Pos)           /**< (ADC_ISR) FIFO has been empty since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXRDY_1                       (ADC_ISR_RXRDY_1_Val << ADC_ISR_RXRDY_Pos)           /**< (ADC_ISR) One element has been written since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXEMPTY_Pos                   _U_(1)                                               /**< (ADC_ISR) Receive FIFO Empty (cleared on read) Position */
#define ADC_ISR_RXEMPTY_Msk                   (_U_(0x1) << ADC_ISR_RXEMPTY_Pos)                    /**< (ADC_ISR) Receive FIFO Empty (cleared on read) Mask */
#define ADC_ISR_RXEMPTY(value)                (ADC_ISR_RXEMPTY_Msk & ((value) << ADC_ISR_RXEMPTY_Pos))
#define   ADC_ISR_RXEMPTY_0_Val               _U_(0x0)                                             /**< (ADC_ISR) FIFO has not been empty since the last read of ADC_ISR.  */
#define   ADC_ISR_RXEMPTY_1_Val               _U_(0x1)                                             /**< (ADC_ISR) FIFO has been empty since the last read of ADC_ISR.  */
#define ADC_ISR_RXEMPTY_0                     (ADC_ISR_RXEMPTY_0_Val << ADC_ISR_RXEMPTY_Pos)       /**< (ADC_ISR) FIFO has not been empty since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXEMPTY_1                     (ADC_ISR_RXEMPTY_1_Val << ADC_ISR_RXEMPTY_Pos)       /**< (ADC_ISR) FIFO has been empty since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXFULL_Pos                    _U_(2)                                               /**< (ADC_ISR) Receive FIFO Full (cleared on read) Position */
#define ADC_ISR_RXFULL_Msk                    (_U_(0x1) << ADC_ISR_RXFULL_Pos)                     /**< (ADC_ISR) Receive FIFO Full (cleared on read) Mask */
#define ADC_ISR_RXFULL(value)                 (ADC_ISR_RXFULL_Msk & ((value) << ADC_ISR_RXFULL_Pos))
#define   ADC_ISR_RXFULL_0_Val                _U_(0x0)                                             /**< (ADC_ISR) FIFO has not been full since the last read of ADC_ISR.  */
#define   ADC_ISR_RXFULL_1_Val                _U_(0x1)                                             /**< (ADC_ISR) FIFO has been full since the last read of ADC_ISR.  */
#define ADC_ISR_RXFULL_0                      (ADC_ISR_RXFULL_0_Val << ADC_ISR_RXFULL_Pos)         /**< (ADC_ISR) FIFO has not been full since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXFULL_1                      (ADC_ISR_RXFULL_1_Val << ADC_ISR_RXFULL_Pos)         /**< (ADC_ISR) FIFO has been full since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXCHUNK_Pos                   _U_(3)                                               /**< (ADC_ISR) Receive FIFO Chunk (cleared on read) Position */
#define ADC_ISR_RXCHUNK_Msk                   (_U_(0x1) << ADC_ISR_RXCHUNK_Pos)                    /**< (ADC_ISR) Receive FIFO Chunk (cleared on read) Mask */
#define ADC_ISR_RXCHUNK(value)                (ADC_ISR_RXCHUNK_Msk & ((value) << ADC_ISR_RXCHUNK_Pos))
#define   ADC_ISR_RXCHUNK_0_Val               _U_(0x0)                                             /**< (ADC_ISR) The number of written elements in the FIFO has been lower than or not equal to chunk_size since the last read of ADC_ISR.  */
#define   ADC_ISR_RXCHUNK_1_Val               _U_(0x1)                                             /**< (ADC_ISR) The number of written elements in the FIFO has been greater than or equal to chunk_size since the last read of ADC_ISR.  */
#define ADC_ISR_RXCHUNK_0                     (ADC_ISR_RXCHUNK_0_Val << ADC_ISR_RXCHUNK_Pos)       /**< (ADC_ISR) The number of written elements in the FIFO has been lower than or not equal to chunk_size since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXCHUNK_1                     (ADC_ISR_RXCHUNK_1_Val << ADC_ISR_RXCHUNK_Pos)       /**< (ADC_ISR) The number of written elements in the FIFO has been greater than or equal to chunk_size since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXUDR_Pos                     _U_(4)                                               /**< (ADC_ISR) Receive Under Flow (cleared on read) Position */
#define ADC_ISR_RXUDR_Msk                     (_U_(0x1) << ADC_ISR_RXUDR_Pos)                      /**< (ADC_ISR) Receive Under Flow (cleared on read) Mask */
#define ADC_ISR_RXUDR(value)                  (ADC_ISR_RXUDR_Msk & ((value) << ADC_ISR_RXUDR_Pos))
#define   ADC_ISR_RXUDR_0_Val                 _U_(0x0)                                             /**< (ADC_ISR) No general underrun error occurred since the last read of ADC_ISR.  */
#define   ADC_ISR_RXUDR_1_Val                 _U_(0x1)                                             /**< (ADC_ISR) At least one general underrun error has occurred since the last read of ADC_ISR.  */
#define ADC_ISR_RXUDR_0                       (ADC_ISR_RXUDR_0_Val << ADC_ISR_RXUDR_Pos)           /**< (ADC_ISR) No general underrun error occurred since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXUDR_1                       (ADC_ISR_RXUDR_1_Val << ADC_ISR_RXUDR_Pos)           /**< (ADC_ISR) At least one general underrun error has occurred since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXOVR_Pos                     _U_(5)                                               /**< (ADC_ISR) Receive Over Flow (cleared on read) Position */
#define ADC_ISR_RXOVR_Msk                     (_U_(0x1) << ADC_ISR_RXOVR_Pos)                      /**< (ADC_ISR) Receive Over Flow (cleared on read) Mask */
#define ADC_ISR_RXOVR(value)                  (ADC_ISR_RXOVR_Msk & ((value) << ADC_ISR_RXOVR_Pos))
#define   ADC_ISR_RXOVR_0_Val                 _U_(0x0)                                             /**< (ADC_ISR) No general overrun error occurred since the last read of ADC_ISR.  */
#define   ADC_ISR_RXOVR_1_Val                 _U_(0x1)                                             /**< (ADC_ISR) At least one general overrun error has occurred since the last read of ADC_ISR.  */
#define ADC_ISR_RXOVR_0                       (ADC_ISR_RXOVR_0_Val << ADC_ISR_RXOVR_Pos)           /**< (ADC_ISR) No general overrun error occurred since the last read of ADC_ISR. Position  */
#define ADC_ISR_RXOVR_1                       (ADC_ISR_RXOVR_1_Val << ADC_ISR_RXOVR_Pos)           /**< (ADC_ISR) At least one general overrun error has occurred since the last read of ADC_ISR. Position  */
#define ADC_ISR_EOS_Pos                       _U_(18)                                              /**< (ADC_ISR) End Of Sequence (cleared on read) Position */
#define ADC_ISR_EOS_Msk                       (_U_(0x1) << ADC_ISR_EOS_Pos)                        /**< (ADC_ISR) End Of Sequence (cleared on read) Mask */
#define ADC_ISR_EOS(value)                    (ADC_ISR_EOS_Msk & ((value) << ADC_ISR_EOS_Pos))    
#define   ADC_ISR_EOS_0_Val                   _U_(0x0)                                             /**< (ADC_ISR) No sequence is in progress or the sequence is not finished. This flag is cleared when reading ADC_ISR.  */
#define   ADC_ISR_EOS_1_Val                   _U_(0x1)                                             /**< (ADC_ISR) The sequence is complete.  */
#define ADC_ISR_EOS_0                         (ADC_ISR_EOS_0_Val << ADC_ISR_EOS_Pos)               /**< (ADC_ISR) No sequence is in progress or the sequence is not finished. This flag is cleared when reading ADC_ISR. Position  */
#define ADC_ISR_EOS_1                         (ADC_ISR_EOS_1_Val << ADC_ISR_EOS_Pos)               /**< (ADC_ISR) The sequence is complete. Position  */
#define ADC_ISR_TEMPCHG_Pos                   _U_(19)                                              /**< (ADC_ISR) Temperature Change (cleared on read) Position */
#define ADC_ISR_TEMPCHG_Msk                   (_U_(0x1) << ADC_ISR_TEMPCHG_Pos)                    /**< (ADC_ISR) Temperature Change (cleared on read) Mask */
#define ADC_ISR_TEMPCHG(value)                (ADC_ISR_TEMPCHG_Msk & ((value) << ADC_ISR_TEMPCHG_Pos))
#define   ADC_ISR_TEMPCHG_0_Val               _U_(0x0)                                             /**< (ADC_ISR) There is no comparison match (defined in the Temperature Compare Window register (ADC_TEMPCWR) since the last read of ADC_ISR.  */
#define   ADC_ISR_TEMPCHG_1_Val               _U_(0x1)                                             /**< (ADC_ISR) The temperature value reported on ADC_CDRmax (max=highest index) has changed since the last read of ADC_ISR, according to what is defined in ADC_TEMPTMR and ADC_TEMPCWR.  */
#define ADC_ISR_TEMPCHG_0                     (ADC_ISR_TEMPCHG_0_Val << ADC_ISR_TEMPCHG_Pos)       /**< (ADC_ISR) There is no comparison match (defined in the Temperature Compare Window register (ADC_TEMPCWR) since the last read of ADC_ISR. Position  */
#define ADC_ISR_TEMPCHG_1                     (ADC_ISR_TEMPCHG_1_Val << ADC_ISR_TEMPCHG_Pos)       /**< (ADC_ISR) The temperature value reported on ADC_CDRmax (max=highest index) has changed since the last read of ADC_ISR, according to what is defined in ADC_TEMPTMR and ADC_TEMPCWR. Position  */
#define ADC_ISR_DRDY_Pos                      _U_(24)                                              /**< (ADC_ISR) Data Ready (automatically set / cleared) Position */
#define ADC_ISR_DRDY_Msk                      (_U_(0x1) << ADC_ISR_DRDY_Pos)                       /**< (ADC_ISR) Data Ready (automatically set / cleared) Mask */
#define ADC_ISR_DRDY(value)                   (ADC_ISR_DRDY_Msk & ((value) << ADC_ISR_DRDY_Pos))  
#define   ADC_ISR_DRDY_0_Val                  _U_(0x0)                                             /**< (ADC_ISR) No data has been converted since the last read of ADC_LCDR.  */
#define   ADC_ISR_DRDY_1_Val                  _U_(0x1)                                             /**< (ADC_ISR) At least one data has been converted and is available in ADC_LCDR.  */
#define ADC_ISR_DRDY_0                        (ADC_ISR_DRDY_0_Val << ADC_ISR_DRDY_Pos)             /**< (ADC_ISR) No data has been converted since the last read of ADC_LCDR. Position  */
#define ADC_ISR_DRDY_1                        (ADC_ISR_DRDY_1_Val << ADC_ISR_DRDY_Pos)             /**< (ADC_ISR) At least one data has been converted and is available in ADC_LCDR. Position  */
#define ADC_ISR_GOVRE_Pos                     _U_(25)                                              /**< (ADC_ISR) General Overrun Error (cleared on read) Position */
#define ADC_ISR_GOVRE_Msk                     (_U_(0x1) << ADC_ISR_GOVRE_Pos)                      /**< (ADC_ISR) General Overrun Error (cleared on read) Mask */
#define ADC_ISR_GOVRE(value)                  (ADC_ISR_GOVRE_Msk & ((value) << ADC_ISR_GOVRE_Pos))
#define   ADC_ISR_GOVRE_0_Val                 _U_(0x0)                                             /**< (ADC_ISR) No general overrun error occurred since the last read of ADC_ISR.  */
#define   ADC_ISR_GOVRE_1_Val                 _U_(0x1)                                             /**< (ADC_ISR) At least one general overrun error has occurred since the last read of ADC_ISR.  */
#define ADC_ISR_GOVRE_0                       (ADC_ISR_GOVRE_0_Val << ADC_ISR_GOVRE_Pos)           /**< (ADC_ISR) No general overrun error occurred since the last read of ADC_ISR. Position  */
#define ADC_ISR_GOVRE_1                       (ADC_ISR_GOVRE_1_Val << ADC_ISR_GOVRE_Pos)           /**< (ADC_ISR) At least one general overrun error has occurred since the last read of ADC_ISR. Position  */
#define ADC_ISR_COMPE_Pos                     _U_(26)                                              /**< (ADC_ISR) Comparison Event (cleared on read) Position */
#define ADC_ISR_COMPE_Msk                     (_U_(0x1) << ADC_ISR_COMPE_Pos)                      /**< (ADC_ISR) Comparison Event (cleared on read) Mask */
#define ADC_ISR_COMPE(value)                  (ADC_ISR_COMPE_Msk & ((value) << ADC_ISR_COMPE_Pos))
#define   ADC_ISR_COMPE_0_Val                 _U_(0x0)                                             /**< (ADC_ISR) No comparison event occurred since the last read of ADC_ISR.  */
#define   ADC_ISR_COMPE_1_Val                 _U_(0x1)                                             /**< (ADC_ISR) At least one comparison event (defined in ADC_EMR and ADC_CWR) has occurred since the last read of ADC_ISR.  */
#define ADC_ISR_COMPE_0                       (ADC_ISR_COMPE_0_Val << ADC_ISR_COMPE_Pos)           /**< (ADC_ISR) No comparison event occurred since the last read of ADC_ISR. Position  */
#define ADC_ISR_COMPE_1                       (ADC_ISR_COMPE_1_Val << ADC_ISR_COMPE_Pos)           /**< (ADC_ISR) At least one comparison event (defined in ADC_EMR and ADC_CWR) has occurred since the last read of ADC_ISR. Position  */
#define ADC_ISR_Msk                           _U_(0x070C003F)                                      /**< (ADC_ISR) Register Mask  */


/* -------- ADC_EOC_IER : (ADC Offset: 0x34) ( /W 32) End Of Conversion Interrupt Enable Register -------- */
#define ADC_EOC_IER_EOC0_Pos                  _U_(0)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 0 Position */
#define ADC_EOC_IER_EOC0_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC0_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 0 Mask */
#define ADC_EOC_IER_EOC0(value)               (ADC_EOC_IER_EOC0_Msk & ((value) << ADC_EOC_IER_EOC0_Pos))
#define   ADC_EOC_IER_EOC0_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC0_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC0_0                    (ADC_EOC_IER_EOC0_0_Val << ADC_EOC_IER_EOC0_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC0_1                    (ADC_EOC_IER_EOC0_1_Val << ADC_EOC_IER_EOC0_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC1_Pos                  _U_(1)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 1 Position */
#define ADC_EOC_IER_EOC1_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC1_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 1 Mask */
#define ADC_EOC_IER_EOC1(value)               (ADC_EOC_IER_EOC1_Msk & ((value) << ADC_EOC_IER_EOC1_Pos))
#define   ADC_EOC_IER_EOC1_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC1_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC1_0                    (ADC_EOC_IER_EOC1_0_Val << ADC_EOC_IER_EOC1_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC1_1                    (ADC_EOC_IER_EOC1_1_Val << ADC_EOC_IER_EOC1_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC2_Pos                  _U_(2)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 2 Position */
#define ADC_EOC_IER_EOC2_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC2_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 2 Mask */
#define ADC_EOC_IER_EOC2(value)               (ADC_EOC_IER_EOC2_Msk & ((value) << ADC_EOC_IER_EOC2_Pos))
#define   ADC_EOC_IER_EOC2_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC2_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC2_0                    (ADC_EOC_IER_EOC2_0_Val << ADC_EOC_IER_EOC2_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC2_1                    (ADC_EOC_IER_EOC2_1_Val << ADC_EOC_IER_EOC2_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC3_Pos                  _U_(3)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 3 Position */
#define ADC_EOC_IER_EOC3_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC3_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 3 Mask */
#define ADC_EOC_IER_EOC3(value)               (ADC_EOC_IER_EOC3_Msk & ((value) << ADC_EOC_IER_EOC3_Pos))
#define   ADC_EOC_IER_EOC3_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC3_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC3_0                    (ADC_EOC_IER_EOC3_0_Val << ADC_EOC_IER_EOC3_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC3_1                    (ADC_EOC_IER_EOC3_1_Val << ADC_EOC_IER_EOC3_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC4_Pos                  _U_(4)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 4 Position */
#define ADC_EOC_IER_EOC4_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC4_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 4 Mask */
#define ADC_EOC_IER_EOC4(value)               (ADC_EOC_IER_EOC4_Msk & ((value) << ADC_EOC_IER_EOC4_Pos))
#define   ADC_EOC_IER_EOC4_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC4_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC4_0                    (ADC_EOC_IER_EOC4_0_Val << ADC_EOC_IER_EOC4_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC4_1                    (ADC_EOC_IER_EOC4_1_Val << ADC_EOC_IER_EOC4_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC5_Pos                  _U_(5)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 5 Position */
#define ADC_EOC_IER_EOC5_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC5_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 5 Mask */
#define ADC_EOC_IER_EOC5(value)               (ADC_EOC_IER_EOC5_Msk & ((value) << ADC_EOC_IER_EOC5_Pos))
#define   ADC_EOC_IER_EOC5_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC5_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC5_0                    (ADC_EOC_IER_EOC5_0_Val << ADC_EOC_IER_EOC5_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC5_1                    (ADC_EOC_IER_EOC5_1_Val << ADC_EOC_IER_EOC5_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC6_Pos                  _U_(6)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 6 Position */
#define ADC_EOC_IER_EOC6_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC6_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 6 Mask */
#define ADC_EOC_IER_EOC6(value)               (ADC_EOC_IER_EOC6_Msk & ((value) << ADC_EOC_IER_EOC6_Pos))
#define   ADC_EOC_IER_EOC6_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC6_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC6_0                    (ADC_EOC_IER_EOC6_0_Val << ADC_EOC_IER_EOC6_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC6_1                    (ADC_EOC_IER_EOC6_1_Val << ADC_EOC_IER_EOC6_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC7_Pos                  _U_(7)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 7 Position */
#define ADC_EOC_IER_EOC7_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC7_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 7 Mask */
#define ADC_EOC_IER_EOC7(value)               (ADC_EOC_IER_EOC7_Msk & ((value) << ADC_EOC_IER_EOC7_Pos))
#define   ADC_EOC_IER_EOC7_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC7_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC7_0                    (ADC_EOC_IER_EOC7_0_Val << ADC_EOC_IER_EOC7_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC7_1                    (ADC_EOC_IER_EOC7_1_Val << ADC_EOC_IER_EOC7_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC8_Pos                  _U_(8)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 8 Position */
#define ADC_EOC_IER_EOC8_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC8_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 8 Mask */
#define ADC_EOC_IER_EOC8(value)               (ADC_EOC_IER_EOC8_Msk & ((value) << ADC_EOC_IER_EOC8_Pos))
#define   ADC_EOC_IER_EOC8_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC8_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC8_0                    (ADC_EOC_IER_EOC8_0_Val << ADC_EOC_IER_EOC8_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC8_1                    (ADC_EOC_IER_EOC8_1_Val << ADC_EOC_IER_EOC8_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC9_Pos                  _U_(9)                                               /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 9 Position */
#define ADC_EOC_IER_EOC9_Msk                  (_U_(0x1) << ADC_EOC_IER_EOC9_Pos)                   /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 9 Mask */
#define ADC_EOC_IER_EOC9(value)               (ADC_EOC_IER_EOC9_Msk & ((value) << ADC_EOC_IER_EOC9_Pos))
#define   ADC_EOC_IER_EOC9_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC9_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC9_0                    (ADC_EOC_IER_EOC9_0_Val << ADC_EOC_IER_EOC9_Pos)     /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC9_1                    (ADC_EOC_IER_EOC9_1_Val << ADC_EOC_IER_EOC9_Pos)     /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC10_Pos                 _U_(10)                                              /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 10 Position */
#define ADC_EOC_IER_EOC10_Msk                 (_U_(0x1) << ADC_EOC_IER_EOC10_Pos)                  /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 10 Mask */
#define ADC_EOC_IER_EOC10(value)              (ADC_EOC_IER_EOC10_Msk & ((value) << ADC_EOC_IER_EOC10_Pos))
#define   ADC_EOC_IER_EOC10_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC10_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC10_0                   (ADC_EOC_IER_EOC10_0_Val << ADC_EOC_IER_EOC10_Pos)   /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC10_1                   (ADC_EOC_IER_EOC10_1_Val << ADC_EOC_IER_EOC10_Pos)   /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC11_Pos                 _U_(11)                                              /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 11 Position */
#define ADC_EOC_IER_EOC11_Msk                 (_U_(0x1) << ADC_EOC_IER_EOC11_Pos)                  /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 11 Mask */
#define ADC_EOC_IER_EOC11(value)              (ADC_EOC_IER_EOC11_Msk & ((value) << ADC_EOC_IER_EOC11_Pos))
#define   ADC_EOC_IER_EOC11_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC11_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC11_0                   (ADC_EOC_IER_EOC11_0_Val << ADC_EOC_IER_EOC11_Pos)   /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC11_1                   (ADC_EOC_IER_EOC11_1_Val << ADC_EOC_IER_EOC11_Pos)   /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC12_Pos                 _U_(12)                                              /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 12 Position */
#define ADC_EOC_IER_EOC12_Msk                 (_U_(0x1) << ADC_EOC_IER_EOC12_Pos)                  /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 12 Mask */
#define ADC_EOC_IER_EOC12(value)              (ADC_EOC_IER_EOC12_Msk & ((value) << ADC_EOC_IER_EOC12_Pos))
#define   ADC_EOC_IER_EOC12_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC12_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC12_0                   (ADC_EOC_IER_EOC12_0_Val << ADC_EOC_IER_EOC12_Pos)   /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC12_1                   (ADC_EOC_IER_EOC12_1_Val << ADC_EOC_IER_EOC12_Pos)   /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC13_Pos                 _U_(13)                                              /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 13 Position */
#define ADC_EOC_IER_EOC13_Msk                 (_U_(0x1) << ADC_EOC_IER_EOC13_Pos)                  /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 13 Mask */
#define ADC_EOC_IER_EOC13(value)              (ADC_EOC_IER_EOC13_Msk & ((value) << ADC_EOC_IER_EOC13_Pos))
#define   ADC_EOC_IER_EOC13_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC13_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC13_0                   (ADC_EOC_IER_EOC13_0_Val << ADC_EOC_IER_EOC13_Pos)   /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC13_1                   (ADC_EOC_IER_EOC13_1_Val << ADC_EOC_IER_EOC13_Pos)   /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC14_Pos                 _U_(14)                                              /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 14 Position */
#define ADC_EOC_IER_EOC14_Msk                 (_U_(0x1) << ADC_EOC_IER_EOC14_Pos)                  /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 14 Mask */
#define ADC_EOC_IER_EOC14(value)              (ADC_EOC_IER_EOC14_Msk & ((value) << ADC_EOC_IER_EOC14_Pos))
#define   ADC_EOC_IER_EOC14_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC14_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC14_0                   (ADC_EOC_IER_EOC14_0_Val << ADC_EOC_IER_EOC14_Pos)   /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC14_1                   (ADC_EOC_IER_EOC14_1_Val << ADC_EOC_IER_EOC14_Pos)   /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC15_Pos                 _U_(15)                                              /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 15 Position */
#define ADC_EOC_IER_EOC15_Msk                 (_U_(0x1) << ADC_EOC_IER_EOC15_Pos)                  /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 15 Mask */
#define ADC_EOC_IER_EOC15(value)              (ADC_EOC_IER_EOC15_Msk & ((value) << ADC_EOC_IER_EOC15_Pos))
#define   ADC_EOC_IER_EOC15_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC15_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC15_0                   (ADC_EOC_IER_EOC15_0_Val << ADC_EOC_IER_EOC15_Pos)   /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC15_1                   (ADC_EOC_IER_EOC15_1_Val << ADC_EOC_IER_EOC15_Pos)   /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC30_Pos                 _U_(30)                                              /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 30 Position */
#define ADC_EOC_IER_EOC30_Msk                 (_U_(0x1) << ADC_EOC_IER_EOC30_Pos)                  /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 30 Mask */
#define ADC_EOC_IER_EOC30(value)              (ADC_EOC_IER_EOC30_Msk & ((value) << ADC_EOC_IER_EOC30_Pos))
#define   ADC_EOC_IER_EOC30_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC30_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC30_0                   (ADC_EOC_IER_EOC30_0_Val << ADC_EOC_IER_EOC30_Pos)   /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC30_1                   (ADC_EOC_IER_EOC30_1_Val << ADC_EOC_IER_EOC30_Pos)   /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_EOC31_Pos                 _U_(31)                                              /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 31 Position */
#define ADC_EOC_IER_EOC31_Msk                 (_U_(0x1) << ADC_EOC_IER_EOC31_Pos)                  /**< (ADC_EOC_IER) End of Conversion Interrupt Enable 31 Mask */
#define ADC_EOC_IER_EOC31(value)              (ADC_EOC_IER_EOC31_Msk & ((value) << ADC_EOC_IER_EOC31_Pos))
#define   ADC_EOC_IER_EOC31_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IER) No effect.  */
#define   ADC_EOC_IER_EOC31_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IER) Enables the corresponding interrupt.  */
#define ADC_EOC_IER_EOC31_0                   (ADC_EOC_IER_EOC31_0_Val << ADC_EOC_IER_EOC31_Pos)   /**< (ADC_EOC_IER) No effect. Position  */
#define ADC_EOC_IER_EOC31_1                   (ADC_EOC_IER_EOC31_1_Val << ADC_EOC_IER_EOC31_Pos)   /**< (ADC_EOC_IER) Enables the corresponding interrupt. Position  */
#define ADC_EOC_IER_Msk                       _U_(0xC000FFFF)                                      /**< (ADC_EOC_IER) Register Mask  */

#define ADC_EOC_IER_EOC_Pos                   _U_(0)                                               /**< (ADC_EOC_IER Position) End of Conversion Interrupt Enable 3x */
#define ADC_EOC_IER_EOC_Msk                   (_U_(0x3FFFF) << ADC_EOC_IER_EOC_Pos)                /**< (ADC_EOC_IER Mask) EOC */
#define ADC_EOC_IER_EOC(value)                (ADC_EOC_IER_EOC_Msk & ((value) << ADC_EOC_IER_EOC_Pos)) 

/* -------- ADC_EOC_IDR : (ADC Offset: 0x38) ( /W 32) End Of Conversion Interrupt Disable Register -------- */
#define ADC_EOC_IDR_EOC0_Pos                  _U_(0)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 0 Position */
#define ADC_EOC_IDR_EOC0_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC0_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 0 Mask */
#define ADC_EOC_IDR_EOC0(value)               (ADC_EOC_IDR_EOC0_Msk & ((value) << ADC_EOC_IDR_EOC0_Pos))
#define   ADC_EOC_IDR_EOC0_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC0_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC0_0                    (ADC_EOC_IDR_EOC0_0_Val << ADC_EOC_IDR_EOC0_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC0_1                    (ADC_EOC_IDR_EOC0_1_Val << ADC_EOC_IDR_EOC0_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC1_Pos                  _U_(1)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 1 Position */
#define ADC_EOC_IDR_EOC1_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC1_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 1 Mask */
#define ADC_EOC_IDR_EOC1(value)               (ADC_EOC_IDR_EOC1_Msk & ((value) << ADC_EOC_IDR_EOC1_Pos))
#define   ADC_EOC_IDR_EOC1_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC1_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC1_0                    (ADC_EOC_IDR_EOC1_0_Val << ADC_EOC_IDR_EOC1_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC1_1                    (ADC_EOC_IDR_EOC1_1_Val << ADC_EOC_IDR_EOC1_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC2_Pos                  _U_(2)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 2 Position */
#define ADC_EOC_IDR_EOC2_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC2_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 2 Mask */
#define ADC_EOC_IDR_EOC2(value)               (ADC_EOC_IDR_EOC2_Msk & ((value) << ADC_EOC_IDR_EOC2_Pos))
#define   ADC_EOC_IDR_EOC2_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC2_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC2_0                    (ADC_EOC_IDR_EOC2_0_Val << ADC_EOC_IDR_EOC2_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC2_1                    (ADC_EOC_IDR_EOC2_1_Val << ADC_EOC_IDR_EOC2_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC3_Pos                  _U_(3)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 3 Position */
#define ADC_EOC_IDR_EOC3_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC3_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 3 Mask */
#define ADC_EOC_IDR_EOC3(value)               (ADC_EOC_IDR_EOC3_Msk & ((value) << ADC_EOC_IDR_EOC3_Pos))
#define   ADC_EOC_IDR_EOC3_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC3_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC3_0                    (ADC_EOC_IDR_EOC3_0_Val << ADC_EOC_IDR_EOC3_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC3_1                    (ADC_EOC_IDR_EOC3_1_Val << ADC_EOC_IDR_EOC3_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC4_Pos                  _U_(4)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 4 Position */
#define ADC_EOC_IDR_EOC4_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC4_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 4 Mask */
#define ADC_EOC_IDR_EOC4(value)               (ADC_EOC_IDR_EOC4_Msk & ((value) << ADC_EOC_IDR_EOC4_Pos))
#define   ADC_EOC_IDR_EOC4_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC4_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC4_0                    (ADC_EOC_IDR_EOC4_0_Val << ADC_EOC_IDR_EOC4_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC4_1                    (ADC_EOC_IDR_EOC4_1_Val << ADC_EOC_IDR_EOC4_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC5_Pos                  _U_(5)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 5 Position */
#define ADC_EOC_IDR_EOC5_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC5_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 5 Mask */
#define ADC_EOC_IDR_EOC5(value)               (ADC_EOC_IDR_EOC5_Msk & ((value) << ADC_EOC_IDR_EOC5_Pos))
#define   ADC_EOC_IDR_EOC5_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC5_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC5_0                    (ADC_EOC_IDR_EOC5_0_Val << ADC_EOC_IDR_EOC5_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC5_1                    (ADC_EOC_IDR_EOC5_1_Val << ADC_EOC_IDR_EOC5_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC6_Pos                  _U_(6)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 6 Position */
#define ADC_EOC_IDR_EOC6_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC6_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 6 Mask */
#define ADC_EOC_IDR_EOC6(value)               (ADC_EOC_IDR_EOC6_Msk & ((value) << ADC_EOC_IDR_EOC6_Pos))
#define   ADC_EOC_IDR_EOC6_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC6_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC6_0                    (ADC_EOC_IDR_EOC6_0_Val << ADC_EOC_IDR_EOC6_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC6_1                    (ADC_EOC_IDR_EOC6_1_Val << ADC_EOC_IDR_EOC6_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC7_Pos                  _U_(7)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 7 Position */
#define ADC_EOC_IDR_EOC7_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC7_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 7 Mask */
#define ADC_EOC_IDR_EOC7(value)               (ADC_EOC_IDR_EOC7_Msk & ((value) << ADC_EOC_IDR_EOC7_Pos))
#define   ADC_EOC_IDR_EOC7_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC7_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC7_0                    (ADC_EOC_IDR_EOC7_0_Val << ADC_EOC_IDR_EOC7_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC7_1                    (ADC_EOC_IDR_EOC7_1_Val << ADC_EOC_IDR_EOC7_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC8_Pos                  _U_(8)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 8 Position */
#define ADC_EOC_IDR_EOC8_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC8_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 8 Mask */
#define ADC_EOC_IDR_EOC8(value)               (ADC_EOC_IDR_EOC8_Msk & ((value) << ADC_EOC_IDR_EOC8_Pos))
#define   ADC_EOC_IDR_EOC8_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC8_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC8_0                    (ADC_EOC_IDR_EOC8_0_Val << ADC_EOC_IDR_EOC8_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC8_1                    (ADC_EOC_IDR_EOC8_1_Val << ADC_EOC_IDR_EOC8_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC9_Pos                  _U_(9)                                               /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 9 Position */
#define ADC_EOC_IDR_EOC9_Msk                  (_U_(0x1) << ADC_EOC_IDR_EOC9_Pos)                   /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 9 Mask */
#define ADC_EOC_IDR_EOC9(value)               (ADC_EOC_IDR_EOC9_Msk & ((value) << ADC_EOC_IDR_EOC9_Pos))
#define   ADC_EOC_IDR_EOC9_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC9_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC9_0                    (ADC_EOC_IDR_EOC9_0_Val << ADC_EOC_IDR_EOC9_Pos)     /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC9_1                    (ADC_EOC_IDR_EOC9_1_Val << ADC_EOC_IDR_EOC9_Pos)     /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC10_Pos                 _U_(10)                                              /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 10 Position */
#define ADC_EOC_IDR_EOC10_Msk                 (_U_(0x1) << ADC_EOC_IDR_EOC10_Pos)                  /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 10 Mask */
#define ADC_EOC_IDR_EOC10(value)              (ADC_EOC_IDR_EOC10_Msk & ((value) << ADC_EOC_IDR_EOC10_Pos))
#define   ADC_EOC_IDR_EOC10_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC10_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC10_0                   (ADC_EOC_IDR_EOC10_0_Val << ADC_EOC_IDR_EOC10_Pos)   /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC10_1                   (ADC_EOC_IDR_EOC10_1_Val << ADC_EOC_IDR_EOC10_Pos)   /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC11_Pos                 _U_(11)                                              /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 11 Position */
#define ADC_EOC_IDR_EOC11_Msk                 (_U_(0x1) << ADC_EOC_IDR_EOC11_Pos)                  /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 11 Mask */
#define ADC_EOC_IDR_EOC11(value)              (ADC_EOC_IDR_EOC11_Msk & ((value) << ADC_EOC_IDR_EOC11_Pos))
#define   ADC_EOC_IDR_EOC11_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC11_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC11_0                   (ADC_EOC_IDR_EOC11_0_Val << ADC_EOC_IDR_EOC11_Pos)   /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC11_1                   (ADC_EOC_IDR_EOC11_1_Val << ADC_EOC_IDR_EOC11_Pos)   /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC12_Pos                 _U_(12)                                              /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 12 Position */
#define ADC_EOC_IDR_EOC12_Msk                 (_U_(0x1) << ADC_EOC_IDR_EOC12_Pos)                  /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 12 Mask */
#define ADC_EOC_IDR_EOC12(value)              (ADC_EOC_IDR_EOC12_Msk & ((value) << ADC_EOC_IDR_EOC12_Pos))
#define   ADC_EOC_IDR_EOC12_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC12_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC12_0                   (ADC_EOC_IDR_EOC12_0_Val << ADC_EOC_IDR_EOC12_Pos)   /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC12_1                   (ADC_EOC_IDR_EOC12_1_Val << ADC_EOC_IDR_EOC12_Pos)   /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC13_Pos                 _U_(13)                                              /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 13 Position */
#define ADC_EOC_IDR_EOC13_Msk                 (_U_(0x1) << ADC_EOC_IDR_EOC13_Pos)                  /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 13 Mask */
#define ADC_EOC_IDR_EOC13(value)              (ADC_EOC_IDR_EOC13_Msk & ((value) << ADC_EOC_IDR_EOC13_Pos))
#define   ADC_EOC_IDR_EOC13_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC13_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC13_0                   (ADC_EOC_IDR_EOC13_0_Val << ADC_EOC_IDR_EOC13_Pos)   /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC13_1                   (ADC_EOC_IDR_EOC13_1_Val << ADC_EOC_IDR_EOC13_Pos)   /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC14_Pos                 _U_(14)                                              /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 14 Position */
#define ADC_EOC_IDR_EOC14_Msk                 (_U_(0x1) << ADC_EOC_IDR_EOC14_Pos)                  /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 14 Mask */
#define ADC_EOC_IDR_EOC14(value)              (ADC_EOC_IDR_EOC14_Msk & ((value) << ADC_EOC_IDR_EOC14_Pos))
#define   ADC_EOC_IDR_EOC14_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC14_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC14_0                   (ADC_EOC_IDR_EOC14_0_Val << ADC_EOC_IDR_EOC14_Pos)   /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC14_1                   (ADC_EOC_IDR_EOC14_1_Val << ADC_EOC_IDR_EOC14_Pos)   /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC15_Pos                 _U_(15)                                              /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 15 Position */
#define ADC_EOC_IDR_EOC15_Msk                 (_U_(0x1) << ADC_EOC_IDR_EOC15_Pos)                  /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 15 Mask */
#define ADC_EOC_IDR_EOC15(value)              (ADC_EOC_IDR_EOC15_Msk & ((value) << ADC_EOC_IDR_EOC15_Pos))
#define   ADC_EOC_IDR_EOC15_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC15_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC15_0                   (ADC_EOC_IDR_EOC15_0_Val << ADC_EOC_IDR_EOC15_Pos)   /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC15_1                   (ADC_EOC_IDR_EOC15_1_Val << ADC_EOC_IDR_EOC15_Pos)   /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC30_Pos                 _U_(30)                                              /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 30 Position */
#define ADC_EOC_IDR_EOC30_Msk                 (_U_(0x1) << ADC_EOC_IDR_EOC30_Pos)                  /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 30 Mask */
#define ADC_EOC_IDR_EOC30(value)              (ADC_EOC_IDR_EOC30_Msk & ((value) << ADC_EOC_IDR_EOC30_Pos))
#define   ADC_EOC_IDR_EOC30_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC30_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC30_0                   (ADC_EOC_IDR_EOC30_0_Val << ADC_EOC_IDR_EOC30_Pos)   /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC30_1                   (ADC_EOC_IDR_EOC30_1_Val << ADC_EOC_IDR_EOC30_Pos)   /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_EOC31_Pos                 _U_(31)                                              /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 31 Position */
#define ADC_EOC_IDR_EOC31_Msk                 (_U_(0x1) << ADC_EOC_IDR_EOC31_Pos)                  /**< (ADC_EOC_IDR) End of Conversion Interrupt Disable 31 Mask */
#define ADC_EOC_IDR_EOC31(value)              (ADC_EOC_IDR_EOC31_Msk & ((value) << ADC_EOC_IDR_EOC31_Pos))
#define   ADC_EOC_IDR_EOC31_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IDR) No effect.  */
#define   ADC_EOC_IDR_EOC31_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IDR) Disables the corresponding interrupt.  */
#define ADC_EOC_IDR_EOC31_0                   (ADC_EOC_IDR_EOC31_0_Val << ADC_EOC_IDR_EOC31_Pos)   /**< (ADC_EOC_IDR) No effect. Position  */
#define ADC_EOC_IDR_EOC31_1                   (ADC_EOC_IDR_EOC31_1_Val << ADC_EOC_IDR_EOC31_Pos)   /**< (ADC_EOC_IDR) Disables the corresponding interrupt. Position  */
#define ADC_EOC_IDR_Msk                       _U_(0xC000FFFF)                                      /**< (ADC_EOC_IDR) Register Mask  */

#define ADC_EOC_IDR_EOC_Pos                   _U_(0)                                               /**< (ADC_EOC_IDR Position) End of Conversion Interrupt Disable 3x */
#define ADC_EOC_IDR_EOC_Msk                   (_U_(0x3FFFF) << ADC_EOC_IDR_EOC_Pos)                /**< (ADC_EOC_IDR Mask) EOC */
#define ADC_EOC_IDR_EOC(value)                (ADC_EOC_IDR_EOC_Msk & ((value) << ADC_EOC_IDR_EOC_Pos)) 

/* -------- ADC_EOC_IMR : (ADC Offset: 0x3C) ( R/ 32) End Of Conversion Interrupt Mask Register -------- */
#define ADC_EOC_IMR_RESETVALUE                _U_(0x00)                                            /**<  (ADC_EOC_IMR) End Of Conversion Interrupt Mask Register  Reset Value */

#define ADC_EOC_IMR_EOC0_Pos                  _U_(0)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 0 Position */
#define ADC_EOC_IMR_EOC0_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC0_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 0 Mask */
#define ADC_EOC_IMR_EOC0(value)               (ADC_EOC_IMR_EOC0_Msk & ((value) << ADC_EOC_IMR_EOC0_Pos))
#define   ADC_EOC_IMR_EOC0_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC0_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC0_0                    (ADC_EOC_IMR_EOC0_0_Val << ADC_EOC_IMR_EOC0_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC0_1                    (ADC_EOC_IMR_EOC0_1_Val << ADC_EOC_IMR_EOC0_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC1_Pos                  _U_(1)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 1 Position */
#define ADC_EOC_IMR_EOC1_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC1_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 1 Mask */
#define ADC_EOC_IMR_EOC1(value)               (ADC_EOC_IMR_EOC1_Msk & ((value) << ADC_EOC_IMR_EOC1_Pos))
#define   ADC_EOC_IMR_EOC1_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC1_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC1_0                    (ADC_EOC_IMR_EOC1_0_Val << ADC_EOC_IMR_EOC1_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC1_1                    (ADC_EOC_IMR_EOC1_1_Val << ADC_EOC_IMR_EOC1_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC2_Pos                  _U_(2)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 2 Position */
#define ADC_EOC_IMR_EOC2_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC2_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 2 Mask */
#define ADC_EOC_IMR_EOC2(value)               (ADC_EOC_IMR_EOC2_Msk & ((value) << ADC_EOC_IMR_EOC2_Pos))
#define   ADC_EOC_IMR_EOC2_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC2_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC2_0                    (ADC_EOC_IMR_EOC2_0_Val << ADC_EOC_IMR_EOC2_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC2_1                    (ADC_EOC_IMR_EOC2_1_Val << ADC_EOC_IMR_EOC2_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC3_Pos                  _U_(3)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 3 Position */
#define ADC_EOC_IMR_EOC3_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC3_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 3 Mask */
#define ADC_EOC_IMR_EOC3(value)               (ADC_EOC_IMR_EOC3_Msk & ((value) << ADC_EOC_IMR_EOC3_Pos))
#define   ADC_EOC_IMR_EOC3_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC3_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC3_0                    (ADC_EOC_IMR_EOC3_0_Val << ADC_EOC_IMR_EOC3_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC3_1                    (ADC_EOC_IMR_EOC3_1_Val << ADC_EOC_IMR_EOC3_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC4_Pos                  _U_(4)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 4 Position */
#define ADC_EOC_IMR_EOC4_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC4_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 4 Mask */
#define ADC_EOC_IMR_EOC4(value)               (ADC_EOC_IMR_EOC4_Msk & ((value) << ADC_EOC_IMR_EOC4_Pos))
#define   ADC_EOC_IMR_EOC4_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC4_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC4_0                    (ADC_EOC_IMR_EOC4_0_Val << ADC_EOC_IMR_EOC4_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC4_1                    (ADC_EOC_IMR_EOC4_1_Val << ADC_EOC_IMR_EOC4_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC5_Pos                  _U_(5)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 5 Position */
#define ADC_EOC_IMR_EOC5_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC5_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 5 Mask */
#define ADC_EOC_IMR_EOC5(value)               (ADC_EOC_IMR_EOC5_Msk & ((value) << ADC_EOC_IMR_EOC5_Pos))
#define   ADC_EOC_IMR_EOC5_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC5_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC5_0                    (ADC_EOC_IMR_EOC5_0_Val << ADC_EOC_IMR_EOC5_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC5_1                    (ADC_EOC_IMR_EOC5_1_Val << ADC_EOC_IMR_EOC5_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC6_Pos                  _U_(6)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 6 Position */
#define ADC_EOC_IMR_EOC6_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC6_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 6 Mask */
#define ADC_EOC_IMR_EOC6(value)               (ADC_EOC_IMR_EOC6_Msk & ((value) << ADC_EOC_IMR_EOC6_Pos))
#define   ADC_EOC_IMR_EOC6_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC6_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC6_0                    (ADC_EOC_IMR_EOC6_0_Val << ADC_EOC_IMR_EOC6_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC6_1                    (ADC_EOC_IMR_EOC6_1_Val << ADC_EOC_IMR_EOC6_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC7_Pos                  _U_(7)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 7 Position */
#define ADC_EOC_IMR_EOC7_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC7_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 7 Mask */
#define ADC_EOC_IMR_EOC7(value)               (ADC_EOC_IMR_EOC7_Msk & ((value) << ADC_EOC_IMR_EOC7_Pos))
#define   ADC_EOC_IMR_EOC7_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC7_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC7_0                    (ADC_EOC_IMR_EOC7_0_Val << ADC_EOC_IMR_EOC7_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC7_1                    (ADC_EOC_IMR_EOC7_1_Val << ADC_EOC_IMR_EOC7_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC8_Pos                  _U_(8)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 8 Position */
#define ADC_EOC_IMR_EOC8_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC8_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 8 Mask */
#define ADC_EOC_IMR_EOC8(value)               (ADC_EOC_IMR_EOC8_Msk & ((value) << ADC_EOC_IMR_EOC8_Pos))
#define   ADC_EOC_IMR_EOC8_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC8_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC8_0                    (ADC_EOC_IMR_EOC8_0_Val << ADC_EOC_IMR_EOC8_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC8_1                    (ADC_EOC_IMR_EOC8_1_Val << ADC_EOC_IMR_EOC8_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC9_Pos                  _U_(9)                                               /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 9 Position */
#define ADC_EOC_IMR_EOC9_Msk                  (_U_(0x1) << ADC_EOC_IMR_EOC9_Pos)                   /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 9 Mask */
#define ADC_EOC_IMR_EOC9(value)               (ADC_EOC_IMR_EOC9_Msk & ((value) << ADC_EOC_IMR_EOC9_Pos))
#define   ADC_EOC_IMR_EOC9_0_Val              _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC9_1_Val              _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC9_0                    (ADC_EOC_IMR_EOC9_0_Val << ADC_EOC_IMR_EOC9_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC9_1                    (ADC_EOC_IMR_EOC9_1_Val << ADC_EOC_IMR_EOC9_Pos)     /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC10_Pos                 _U_(10)                                              /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 10 Position */
#define ADC_EOC_IMR_EOC10_Msk                 (_U_(0x1) << ADC_EOC_IMR_EOC10_Pos)                  /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 10 Mask */
#define ADC_EOC_IMR_EOC10(value)              (ADC_EOC_IMR_EOC10_Msk & ((value) << ADC_EOC_IMR_EOC10_Pos))
#define   ADC_EOC_IMR_EOC10_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC10_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC10_0                   (ADC_EOC_IMR_EOC10_0_Val << ADC_EOC_IMR_EOC10_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC10_1                   (ADC_EOC_IMR_EOC10_1_Val << ADC_EOC_IMR_EOC10_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC11_Pos                 _U_(11)                                              /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 11 Position */
#define ADC_EOC_IMR_EOC11_Msk                 (_U_(0x1) << ADC_EOC_IMR_EOC11_Pos)                  /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 11 Mask */
#define ADC_EOC_IMR_EOC11(value)              (ADC_EOC_IMR_EOC11_Msk & ((value) << ADC_EOC_IMR_EOC11_Pos))
#define   ADC_EOC_IMR_EOC11_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC11_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC11_0                   (ADC_EOC_IMR_EOC11_0_Val << ADC_EOC_IMR_EOC11_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC11_1                   (ADC_EOC_IMR_EOC11_1_Val << ADC_EOC_IMR_EOC11_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC12_Pos                 _U_(12)                                              /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 12 Position */
#define ADC_EOC_IMR_EOC12_Msk                 (_U_(0x1) << ADC_EOC_IMR_EOC12_Pos)                  /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 12 Mask */
#define ADC_EOC_IMR_EOC12(value)              (ADC_EOC_IMR_EOC12_Msk & ((value) << ADC_EOC_IMR_EOC12_Pos))
#define   ADC_EOC_IMR_EOC12_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC12_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC12_0                   (ADC_EOC_IMR_EOC12_0_Val << ADC_EOC_IMR_EOC12_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC12_1                   (ADC_EOC_IMR_EOC12_1_Val << ADC_EOC_IMR_EOC12_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC13_Pos                 _U_(13)                                              /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 13 Position */
#define ADC_EOC_IMR_EOC13_Msk                 (_U_(0x1) << ADC_EOC_IMR_EOC13_Pos)                  /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 13 Mask */
#define ADC_EOC_IMR_EOC13(value)              (ADC_EOC_IMR_EOC13_Msk & ((value) << ADC_EOC_IMR_EOC13_Pos))
#define   ADC_EOC_IMR_EOC13_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC13_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC13_0                   (ADC_EOC_IMR_EOC13_0_Val << ADC_EOC_IMR_EOC13_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC13_1                   (ADC_EOC_IMR_EOC13_1_Val << ADC_EOC_IMR_EOC13_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC14_Pos                 _U_(14)                                              /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 14 Position */
#define ADC_EOC_IMR_EOC14_Msk                 (_U_(0x1) << ADC_EOC_IMR_EOC14_Pos)                  /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 14 Mask */
#define ADC_EOC_IMR_EOC14(value)              (ADC_EOC_IMR_EOC14_Msk & ((value) << ADC_EOC_IMR_EOC14_Pos))
#define   ADC_EOC_IMR_EOC14_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC14_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC14_0                   (ADC_EOC_IMR_EOC14_0_Val << ADC_EOC_IMR_EOC14_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC14_1                   (ADC_EOC_IMR_EOC14_1_Val << ADC_EOC_IMR_EOC14_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC15_Pos                 _U_(15)                                              /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 15 Position */
#define ADC_EOC_IMR_EOC15_Msk                 (_U_(0x1) << ADC_EOC_IMR_EOC15_Pos)                  /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 15 Mask */
#define ADC_EOC_IMR_EOC15(value)              (ADC_EOC_IMR_EOC15_Msk & ((value) << ADC_EOC_IMR_EOC15_Pos))
#define   ADC_EOC_IMR_EOC15_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC15_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC15_0                   (ADC_EOC_IMR_EOC15_0_Val << ADC_EOC_IMR_EOC15_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC15_1                   (ADC_EOC_IMR_EOC15_1_Val << ADC_EOC_IMR_EOC15_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC30_Pos                 _U_(30)                                              /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 30 Position */
#define ADC_EOC_IMR_EOC30_Msk                 (_U_(0x1) << ADC_EOC_IMR_EOC30_Pos)                  /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 30 Mask */
#define ADC_EOC_IMR_EOC30(value)              (ADC_EOC_IMR_EOC30_Msk & ((value) << ADC_EOC_IMR_EOC30_Pos))
#define   ADC_EOC_IMR_EOC30_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC30_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC30_0                   (ADC_EOC_IMR_EOC30_0_Val << ADC_EOC_IMR_EOC30_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC30_1                   (ADC_EOC_IMR_EOC30_1_Val << ADC_EOC_IMR_EOC30_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_EOC31_Pos                 _U_(31)                                              /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 31 Position */
#define ADC_EOC_IMR_EOC31_Msk                 (_U_(0x1) << ADC_EOC_IMR_EOC31_Pos)                  /**< (ADC_EOC_IMR) End of Conversion Interrupt Mask 31 Mask */
#define ADC_EOC_IMR_EOC31(value)              (ADC_EOC_IMR_EOC31_Msk & ((value) << ADC_EOC_IMR_EOC31_Pos))
#define   ADC_EOC_IMR_EOC31_0_Val             _U_(0x0)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is disabled.  */
#define   ADC_EOC_IMR_EOC31_1_Val             _U_(0x1)                                             /**< (ADC_EOC_IMR) The corresponding interrupt is enabled.  */
#define ADC_EOC_IMR_EOC31_0                   (ADC_EOC_IMR_EOC31_0_Val << ADC_EOC_IMR_EOC31_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is disabled. Position  */
#define ADC_EOC_IMR_EOC31_1                   (ADC_EOC_IMR_EOC31_1_Val << ADC_EOC_IMR_EOC31_Pos)   /**< (ADC_EOC_IMR) The corresponding interrupt is enabled. Position  */
#define ADC_EOC_IMR_Msk                       _U_(0xC000FFFF)                                      /**< (ADC_EOC_IMR) Register Mask  */

#define ADC_EOC_IMR_EOC_Pos                   _U_(0)                                               /**< (ADC_EOC_IMR Position) End of Conversion Interrupt Mask 3x */
#define ADC_EOC_IMR_EOC_Msk                   (_U_(0x3FFFF) << ADC_EOC_IMR_EOC_Pos)                /**< (ADC_EOC_IMR Mask) EOC */
#define ADC_EOC_IMR_EOC(value)                (ADC_EOC_IMR_EOC_Msk & ((value) << ADC_EOC_IMR_EOC_Pos)) 

/* -------- ADC_EOC_ISR : (ADC Offset: 0x40) ( R/ 32) End Of Conversion Interrupt Status Register -------- */
#define ADC_EOC_ISR_RESETVALUE                _U_(0x00)                                            /**<  (ADC_EOC_ISR) End Of Conversion Interrupt Status Register  Reset Value */

#define ADC_EOC_ISR_EOC0_Pos                  _U_(0)                                               /**< (ADC_EOC_ISR) End of Conversion 0 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC0_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC0_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 0 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC0(value)               (ADC_EOC_ISR_EOC0_Msk & ((value) << ADC_EOC_ISR_EOC0_Pos))
#define   ADC_EOC_ISR_EOC0_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC0_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC0_0                    (ADC_EOC_ISR_EOC0_0_Val << ADC_EOC_ISR_EOC0_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC0_1                    (ADC_EOC_ISR_EOC0_1_Val << ADC_EOC_ISR_EOC0_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC1_Pos                  _U_(1)                                               /**< (ADC_EOC_ISR) End of Conversion 1 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC1_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC1_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 1 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC1(value)               (ADC_EOC_ISR_EOC1_Msk & ((value) << ADC_EOC_ISR_EOC1_Pos))
#define   ADC_EOC_ISR_EOC1_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC1_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC1_0                    (ADC_EOC_ISR_EOC1_0_Val << ADC_EOC_ISR_EOC1_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC1_1                    (ADC_EOC_ISR_EOC1_1_Val << ADC_EOC_ISR_EOC1_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC2_Pos                  _U_(2)                                               /**< (ADC_EOC_ISR) End of Conversion 2 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC2_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC2_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 2 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC2(value)               (ADC_EOC_ISR_EOC2_Msk & ((value) << ADC_EOC_ISR_EOC2_Pos))
#define   ADC_EOC_ISR_EOC2_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC2_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC2_0                    (ADC_EOC_ISR_EOC2_0_Val << ADC_EOC_ISR_EOC2_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC2_1                    (ADC_EOC_ISR_EOC2_1_Val << ADC_EOC_ISR_EOC2_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC3_Pos                  _U_(3)                                               /**< (ADC_EOC_ISR) End of Conversion 3 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC3_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC3_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 3 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC3(value)               (ADC_EOC_ISR_EOC3_Msk & ((value) << ADC_EOC_ISR_EOC3_Pos))
#define   ADC_EOC_ISR_EOC3_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC3_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC3_0                    (ADC_EOC_ISR_EOC3_0_Val << ADC_EOC_ISR_EOC3_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC3_1                    (ADC_EOC_ISR_EOC3_1_Val << ADC_EOC_ISR_EOC3_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC4_Pos                  _U_(4)                                               /**< (ADC_EOC_ISR) End of Conversion 4 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC4_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC4_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 4 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC4(value)               (ADC_EOC_ISR_EOC4_Msk & ((value) << ADC_EOC_ISR_EOC4_Pos))
#define   ADC_EOC_ISR_EOC4_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC4_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC4_0                    (ADC_EOC_ISR_EOC4_0_Val << ADC_EOC_ISR_EOC4_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC4_1                    (ADC_EOC_ISR_EOC4_1_Val << ADC_EOC_ISR_EOC4_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC5_Pos                  _U_(5)                                               /**< (ADC_EOC_ISR) End of Conversion 5 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC5_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC5_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 5 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC5(value)               (ADC_EOC_ISR_EOC5_Msk & ((value) << ADC_EOC_ISR_EOC5_Pos))
#define   ADC_EOC_ISR_EOC5_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC5_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC5_0                    (ADC_EOC_ISR_EOC5_0_Val << ADC_EOC_ISR_EOC5_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC5_1                    (ADC_EOC_ISR_EOC5_1_Val << ADC_EOC_ISR_EOC5_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC6_Pos                  _U_(6)                                               /**< (ADC_EOC_ISR) End of Conversion 6 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC6_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC6_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 6 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC6(value)               (ADC_EOC_ISR_EOC6_Msk & ((value) << ADC_EOC_ISR_EOC6_Pos))
#define   ADC_EOC_ISR_EOC6_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC6_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC6_0                    (ADC_EOC_ISR_EOC6_0_Val << ADC_EOC_ISR_EOC6_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC6_1                    (ADC_EOC_ISR_EOC6_1_Val << ADC_EOC_ISR_EOC6_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC7_Pos                  _U_(7)                                               /**< (ADC_EOC_ISR) End of Conversion 7 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC7_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC7_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 7 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC7(value)               (ADC_EOC_ISR_EOC7_Msk & ((value) << ADC_EOC_ISR_EOC7_Pos))
#define   ADC_EOC_ISR_EOC7_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC7_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC7_0                    (ADC_EOC_ISR_EOC7_0_Val << ADC_EOC_ISR_EOC7_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC7_1                    (ADC_EOC_ISR_EOC7_1_Val << ADC_EOC_ISR_EOC7_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC8_Pos                  _U_(8)                                               /**< (ADC_EOC_ISR) End of Conversion 8 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC8_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC8_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 8 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC8(value)               (ADC_EOC_ISR_EOC8_Msk & ((value) << ADC_EOC_ISR_EOC8_Pos))
#define   ADC_EOC_ISR_EOC8_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC8_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC8_0                    (ADC_EOC_ISR_EOC8_0_Val << ADC_EOC_ISR_EOC8_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC8_1                    (ADC_EOC_ISR_EOC8_1_Val << ADC_EOC_ISR_EOC8_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC9_Pos                  _U_(9)                                               /**< (ADC_EOC_ISR) End of Conversion 9 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC9_Msk                  (_U_(0x1) << ADC_EOC_ISR_EOC9_Pos)                   /**< (ADC_EOC_ISR) End of Conversion 9 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC9(value)               (ADC_EOC_ISR_EOC9_Msk & ((value) << ADC_EOC_ISR_EOC9_Pos))
#define   ADC_EOC_ISR_EOC9_0_Val              _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC9_1_Val              _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC9_0                    (ADC_EOC_ISR_EOC9_0_Val << ADC_EOC_ISR_EOC9_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC9_1                    (ADC_EOC_ISR_EOC9_1_Val << ADC_EOC_ISR_EOC9_Pos)     /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC10_Pos                 _U_(10)                                              /**< (ADC_EOC_ISR) End of Conversion 10 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC10_Msk                 (_U_(0x1) << ADC_EOC_ISR_EOC10_Pos)                  /**< (ADC_EOC_ISR) End of Conversion 10 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC10(value)              (ADC_EOC_ISR_EOC10_Msk & ((value) << ADC_EOC_ISR_EOC10_Pos))
#define   ADC_EOC_ISR_EOC10_0_Val             _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC10_1_Val             _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC10_0                   (ADC_EOC_ISR_EOC10_0_Val << ADC_EOC_ISR_EOC10_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC10_1                   (ADC_EOC_ISR_EOC10_1_Val << ADC_EOC_ISR_EOC10_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC11_Pos                 _U_(11)                                              /**< (ADC_EOC_ISR) End of Conversion 11 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC11_Msk                 (_U_(0x1) << ADC_EOC_ISR_EOC11_Pos)                  /**< (ADC_EOC_ISR) End of Conversion 11 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC11(value)              (ADC_EOC_ISR_EOC11_Msk & ((value) << ADC_EOC_ISR_EOC11_Pos))
#define   ADC_EOC_ISR_EOC11_0_Val             _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC11_1_Val             _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC11_0                   (ADC_EOC_ISR_EOC11_0_Val << ADC_EOC_ISR_EOC11_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC11_1                   (ADC_EOC_ISR_EOC11_1_Val << ADC_EOC_ISR_EOC11_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC12_Pos                 _U_(12)                                              /**< (ADC_EOC_ISR) End of Conversion 12 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC12_Msk                 (_U_(0x1) << ADC_EOC_ISR_EOC12_Pos)                  /**< (ADC_EOC_ISR) End of Conversion 12 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC12(value)              (ADC_EOC_ISR_EOC12_Msk & ((value) << ADC_EOC_ISR_EOC12_Pos))
#define   ADC_EOC_ISR_EOC12_0_Val             _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC12_1_Val             _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC12_0                   (ADC_EOC_ISR_EOC12_0_Val << ADC_EOC_ISR_EOC12_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC12_1                   (ADC_EOC_ISR_EOC12_1_Val << ADC_EOC_ISR_EOC12_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC13_Pos                 _U_(13)                                              /**< (ADC_EOC_ISR) End of Conversion 13 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC13_Msk                 (_U_(0x1) << ADC_EOC_ISR_EOC13_Pos)                  /**< (ADC_EOC_ISR) End of Conversion 13 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC13(value)              (ADC_EOC_ISR_EOC13_Msk & ((value) << ADC_EOC_ISR_EOC13_Pos))
#define   ADC_EOC_ISR_EOC13_0_Val             _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC13_1_Val             _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC13_0                   (ADC_EOC_ISR_EOC13_0_Val << ADC_EOC_ISR_EOC13_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC13_1                   (ADC_EOC_ISR_EOC13_1_Val << ADC_EOC_ISR_EOC13_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC14_Pos                 _U_(14)                                              /**< (ADC_EOC_ISR) End of Conversion 14 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC14_Msk                 (_U_(0x1) << ADC_EOC_ISR_EOC14_Pos)                  /**< (ADC_EOC_ISR) End of Conversion 14 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC14(value)              (ADC_EOC_ISR_EOC14_Msk & ((value) << ADC_EOC_ISR_EOC14_Pos))
#define   ADC_EOC_ISR_EOC14_0_Val             _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC14_1_Val             _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC14_0                   (ADC_EOC_ISR_EOC14_0_Val << ADC_EOC_ISR_EOC14_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC14_1                   (ADC_EOC_ISR_EOC14_1_Val << ADC_EOC_ISR_EOC14_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC15_Pos                 _U_(15)                                              /**< (ADC_EOC_ISR) End of Conversion 15 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC15_Msk                 (_U_(0x1) << ADC_EOC_ISR_EOC15_Pos)                  /**< (ADC_EOC_ISR) End of Conversion 15 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC15(value)              (ADC_EOC_ISR_EOC15_Msk & ((value) << ADC_EOC_ISR_EOC15_Pos))
#define   ADC_EOC_ISR_EOC15_0_Val             _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC15_1_Val             _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC15_0                   (ADC_EOC_ISR_EOC15_0_Val << ADC_EOC_ISR_EOC15_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC15_1                   (ADC_EOC_ISR_EOC15_1_Val << ADC_EOC_ISR_EOC15_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC30_Pos                 _U_(30)                                              /**< (ADC_EOC_ISR) End of Conversion 30 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC30_Msk                 (_U_(0x1) << ADC_EOC_ISR_EOC30_Pos)                  /**< (ADC_EOC_ISR) End of Conversion 30 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC30(value)              (ADC_EOC_ISR_EOC30_Msk & ((value) << ADC_EOC_ISR_EOC30_Pos))
#define   ADC_EOC_ISR_EOC30_0_Val             _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC30_1_Val             _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC30_0                   (ADC_EOC_ISR_EOC30_0_Val << ADC_EOC_ISR_EOC30_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC30_1                   (ADC_EOC_ISR_EOC30_1_Val << ADC_EOC_ISR_EOC30_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_EOC31_Pos                 _U_(31)                                              /**< (ADC_EOC_ISR) End of Conversion 31 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC31_Msk                 (_U_(0x1) << ADC_EOC_ISR_EOC31_Pos)                  /**< (ADC_EOC_ISR) End of Conversion 31 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC31(value)              (ADC_EOC_ISR_EOC31_Msk & ((value) << ADC_EOC_ISR_EOC31_Pos))
#define   ADC_EOC_ISR_EOC31_0_Val             _U_(0x0)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_EOC_ISR_EOC31_1_Val             _U_(0x1)                                             /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_EOC_ISR_EOC31_0                   (ADC_EOC_ISR_EOC31_0_Val << ADC_EOC_ISR_EOC31_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position  */
#define ADC_EOC_ISR_EOC31_1                   (ADC_EOC_ISR_EOC31_1_Val << ADC_EOC_ISR_EOC31_Pos)   /**< (ADC_EOC_ISR) The corresponding analog channel is enabled and conversion is complete. Position  */
#define ADC_EOC_ISR_Msk                       _U_(0xC000FFFF)                                      /**< (ADC_EOC_ISR) Register Mask  */

#define ADC_EOC_ISR_EOC_Pos                   _U_(0)                                               /**< (ADC_EOC_ISR Position) End of Conversion 3x (automatically set / cleared) */
#define ADC_EOC_ISR_EOC_Msk                   (_U_(0x3FFFF) << ADC_EOC_ISR_EOC_Pos)                /**< (ADC_EOC_ISR Mask) EOC */
#define ADC_EOC_ISR_EOC(value)                (ADC_EOC_ISR_EOC_Msk & ((value) << ADC_EOC_ISR_EOC_Pos)) 

/* -------- ADC_TEMPMR : (ADC Offset: 0x44) (R/W 32) Temperature Sensor Mode Register -------- */
#define ADC_TEMPMR_RESETVALUE                 _U_(0x00)                                            /**<  (ADC_TEMPMR) Temperature Sensor Mode Register  Reset Value */

#define ADC_TEMPMR_TEMPON_Pos                 _U_(0)                                               /**< (ADC_TEMPMR) Temperature Sensor On Position */
#define ADC_TEMPMR_TEMPON_Msk                 (_U_(0x1) << ADC_TEMPMR_TEMPON_Pos)                  /**< (ADC_TEMPMR) Temperature Sensor On Mask */
#define ADC_TEMPMR_TEMPON(value)              (ADC_TEMPMR_TEMPON_Msk & ((value) << ADC_TEMPMR_TEMPON_Pos))
#define   ADC_TEMPMR_TEMPON_0_Val             _U_(0x0)                                             /**< (ADC_TEMPMR) The temperature sensor is not enabled.  */
#define   ADC_TEMPMR_TEMPON_1_Val             _U_(0x1)                                             /**< (ADC_TEMPMR) The temperature sensor is enabled and the measurements are triggered.  */
#define ADC_TEMPMR_TEMPON_0                   (ADC_TEMPMR_TEMPON_0_Val << ADC_TEMPMR_TEMPON_Pos)   /**< (ADC_TEMPMR) The temperature sensor is not enabled. Position  */
#define ADC_TEMPMR_TEMPON_1                   (ADC_TEMPMR_TEMPON_1_Val << ADC_TEMPMR_TEMPON_Pos)   /**< (ADC_TEMPMR) The temperature sensor is enabled and the measurements are triggered. Position  */
#define ADC_TEMPMR_TEMPCMPMOD_Pos             _U_(4)                                               /**< (ADC_TEMPMR) Temperature Comparison Mode Position */
#define ADC_TEMPMR_TEMPCMPMOD_Msk             (_U_(0x3) << ADC_TEMPMR_TEMPCMPMOD_Pos)              /**< (ADC_TEMPMR) Temperature Comparison Mode Mask */
#define ADC_TEMPMR_TEMPCMPMOD(value)          (ADC_TEMPMR_TEMPCMPMOD_Msk & ((value) << ADC_TEMPMR_TEMPCMPMOD_Pos))
#define   ADC_TEMPMR_TEMPCMPMOD_LOW_Val       _U_(0x0)                                             /**< (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is lower than the low threshold of the window.  */
#define   ADC_TEMPMR_TEMPCMPMOD_HIGH_Val      _U_(0x1)                                             /**< (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is higher than the high threshold of the window.  */
#define   ADC_TEMPMR_TEMPCMPMOD_IN_Val        _U_(0x2)                                             /**< (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is in the comparison window.  */
#define   ADC_TEMPMR_TEMPCMPMOD_OUT_Val       _U_(0x3)                                             /**< (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is out of the comparison window.  */
#define ADC_TEMPMR_TEMPCMPMOD_LOW             (ADC_TEMPMR_TEMPCMPMOD_LOW_Val << ADC_TEMPMR_TEMPCMPMOD_Pos) /**< (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is lower than the low threshold of the window. Position  */
#define ADC_TEMPMR_TEMPCMPMOD_HIGH            (ADC_TEMPMR_TEMPCMPMOD_HIGH_Val << ADC_TEMPMR_TEMPCMPMOD_Pos) /**< (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is higher than the high threshold of the window. Position  */
#define ADC_TEMPMR_TEMPCMPMOD_IN              (ADC_TEMPMR_TEMPCMPMOD_IN_Val << ADC_TEMPMR_TEMPCMPMOD_Pos) /**< (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is in the comparison window. Position  */
#define ADC_TEMPMR_TEMPCMPMOD_OUT             (ADC_TEMPMR_TEMPCMPMOD_OUT_Val << ADC_TEMPMR_TEMPCMPMOD_Pos) /**< (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is out of the comparison window. Position  */
#define ADC_TEMPMR_Msk                        _U_(0x00000031)                                      /**< (ADC_TEMPMR) Register Mask  */


/* -------- ADC_TEMPCWR : (ADC Offset: 0x48) (R/W 32) Temperature Compare Window Register -------- */
#define ADC_TEMPCWR_RESETVALUE                _U_(0x00)                                            /**<  (ADC_TEMPCWR) Temperature Compare Window Register  Reset Value */

#define ADC_TEMPCWR_TLOWTHRES_Pos             _U_(0)                                               /**< (ADC_TEMPCWR) Temperature Low Threshold Position */
#define ADC_TEMPCWR_TLOWTHRES_Msk             (_U_(0xFFF) << ADC_TEMPCWR_TLOWTHRES_Pos)            /**< (ADC_TEMPCWR) Temperature Low Threshold Mask */
#define ADC_TEMPCWR_TLOWTHRES(value)          (ADC_TEMPCWR_TLOWTHRES_Msk & ((value) << ADC_TEMPCWR_TLOWTHRES_Pos))
#define ADC_TEMPCWR_THIGHTHRES_Pos            _U_(16)                                              /**< (ADC_TEMPCWR) Temperature High Threshold Position */
#define ADC_TEMPCWR_THIGHTHRES_Msk            (_U_(0xFFF) << ADC_TEMPCWR_THIGHTHRES_Pos)           /**< (ADC_TEMPCWR) Temperature High Threshold Mask */
#define ADC_TEMPCWR_THIGHTHRES(value)         (ADC_TEMPCWR_THIGHTHRES_Msk & ((value) << ADC_TEMPCWR_THIGHTHRES_Pos))
#define ADC_TEMPCWR_Msk                       _U_(0x0FFF0FFF)                                      /**< (ADC_TEMPCWR) Register Mask  */


/* -------- ADC_OVER : (ADC Offset: 0x4C) ( R/ 32) Overrun Status Register -------- */
#define ADC_OVER_RESETVALUE                   _U_(0x00)                                            /**<  (ADC_OVER) Overrun Status Register  Reset Value */

#define ADC_OVER_OVRE0_Pos                    _U_(0)                                               /**< (ADC_OVER) Overrun Error 0 Position */
#define ADC_OVER_OVRE0_Msk                    (_U_(0x1) << ADC_OVER_OVRE0_Pos)                     /**< (ADC_OVER) Overrun Error 0 Mask */
#define ADC_OVER_OVRE0(value)                 (ADC_OVER_OVRE0_Msk & ((value) << ADC_OVER_OVRE0_Pos))
#define   ADC_OVER_OVRE0_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE0_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE0_0                      (ADC_OVER_OVRE0_0_Val << ADC_OVER_OVRE0_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE0_1                      (ADC_OVER_OVRE0_1_Val << ADC_OVER_OVRE0_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE1_Pos                    _U_(1)                                               /**< (ADC_OVER) Overrun Error 1 Position */
#define ADC_OVER_OVRE1_Msk                    (_U_(0x1) << ADC_OVER_OVRE1_Pos)                     /**< (ADC_OVER) Overrun Error 1 Mask */
#define ADC_OVER_OVRE1(value)                 (ADC_OVER_OVRE1_Msk & ((value) << ADC_OVER_OVRE1_Pos))
#define   ADC_OVER_OVRE1_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE1_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE1_0                      (ADC_OVER_OVRE1_0_Val << ADC_OVER_OVRE1_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE1_1                      (ADC_OVER_OVRE1_1_Val << ADC_OVER_OVRE1_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE2_Pos                    _U_(2)                                               /**< (ADC_OVER) Overrun Error 2 Position */
#define ADC_OVER_OVRE2_Msk                    (_U_(0x1) << ADC_OVER_OVRE2_Pos)                     /**< (ADC_OVER) Overrun Error 2 Mask */
#define ADC_OVER_OVRE2(value)                 (ADC_OVER_OVRE2_Msk & ((value) << ADC_OVER_OVRE2_Pos))
#define   ADC_OVER_OVRE2_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE2_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE2_0                      (ADC_OVER_OVRE2_0_Val << ADC_OVER_OVRE2_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE2_1                      (ADC_OVER_OVRE2_1_Val << ADC_OVER_OVRE2_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE3_Pos                    _U_(3)                                               /**< (ADC_OVER) Overrun Error 3 Position */
#define ADC_OVER_OVRE3_Msk                    (_U_(0x1) << ADC_OVER_OVRE3_Pos)                     /**< (ADC_OVER) Overrun Error 3 Mask */
#define ADC_OVER_OVRE3(value)                 (ADC_OVER_OVRE3_Msk & ((value) << ADC_OVER_OVRE3_Pos))
#define   ADC_OVER_OVRE3_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE3_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE3_0                      (ADC_OVER_OVRE3_0_Val << ADC_OVER_OVRE3_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE3_1                      (ADC_OVER_OVRE3_1_Val << ADC_OVER_OVRE3_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE4_Pos                    _U_(4)                                               /**< (ADC_OVER) Overrun Error 4 Position */
#define ADC_OVER_OVRE4_Msk                    (_U_(0x1) << ADC_OVER_OVRE4_Pos)                     /**< (ADC_OVER) Overrun Error 4 Mask */
#define ADC_OVER_OVRE4(value)                 (ADC_OVER_OVRE4_Msk & ((value) << ADC_OVER_OVRE4_Pos))
#define   ADC_OVER_OVRE4_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE4_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE4_0                      (ADC_OVER_OVRE4_0_Val << ADC_OVER_OVRE4_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE4_1                      (ADC_OVER_OVRE4_1_Val << ADC_OVER_OVRE4_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE5_Pos                    _U_(5)                                               /**< (ADC_OVER) Overrun Error 5 Position */
#define ADC_OVER_OVRE5_Msk                    (_U_(0x1) << ADC_OVER_OVRE5_Pos)                     /**< (ADC_OVER) Overrun Error 5 Mask */
#define ADC_OVER_OVRE5(value)                 (ADC_OVER_OVRE5_Msk & ((value) << ADC_OVER_OVRE5_Pos))
#define   ADC_OVER_OVRE5_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE5_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE5_0                      (ADC_OVER_OVRE5_0_Val << ADC_OVER_OVRE5_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE5_1                      (ADC_OVER_OVRE5_1_Val << ADC_OVER_OVRE5_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE6_Pos                    _U_(6)                                               /**< (ADC_OVER) Overrun Error 6 Position */
#define ADC_OVER_OVRE6_Msk                    (_U_(0x1) << ADC_OVER_OVRE6_Pos)                     /**< (ADC_OVER) Overrun Error 6 Mask */
#define ADC_OVER_OVRE6(value)                 (ADC_OVER_OVRE6_Msk & ((value) << ADC_OVER_OVRE6_Pos))
#define   ADC_OVER_OVRE6_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE6_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE6_0                      (ADC_OVER_OVRE6_0_Val << ADC_OVER_OVRE6_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE6_1                      (ADC_OVER_OVRE6_1_Val << ADC_OVER_OVRE6_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE7_Pos                    _U_(7)                                               /**< (ADC_OVER) Overrun Error 7 Position */
#define ADC_OVER_OVRE7_Msk                    (_U_(0x1) << ADC_OVER_OVRE7_Pos)                     /**< (ADC_OVER) Overrun Error 7 Mask */
#define ADC_OVER_OVRE7(value)                 (ADC_OVER_OVRE7_Msk & ((value) << ADC_OVER_OVRE7_Pos))
#define   ADC_OVER_OVRE7_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE7_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE7_0                      (ADC_OVER_OVRE7_0_Val << ADC_OVER_OVRE7_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE7_1                      (ADC_OVER_OVRE7_1_Val << ADC_OVER_OVRE7_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE8_Pos                    _U_(8)                                               /**< (ADC_OVER) Overrun Error 8 Position */
#define ADC_OVER_OVRE8_Msk                    (_U_(0x1) << ADC_OVER_OVRE8_Pos)                     /**< (ADC_OVER) Overrun Error 8 Mask */
#define ADC_OVER_OVRE8(value)                 (ADC_OVER_OVRE8_Msk & ((value) << ADC_OVER_OVRE8_Pos))
#define   ADC_OVER_OVRE8_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE8_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE8_0                      (ADC_OVER_OVRE8_0_Val << ADC_OVER_OVRE8_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE8_1                      (ADC_OVER_OVRE8_1_Val << ADC_OVER_OVRE8_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE9_Pos                    _U_(9)                                               /**< (ADC_OVER) Overrun Error 9 Position */
#define ADC_OVER_OVRE9_Msk                    (_U_(0x1) << ADC_OVER_OVRE9_Pos)                     /**< (ADC_OVER) Overrun Error 9 Mask */
#define ADC_OVER_OVRE9(value)                 (ADC_OVER_OVRE9_Msk & ((value) << ADC_OVER_OVRE9_Pos))
#define   ADC_OVER_OVRE9_0_Val                _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE9_1_Val                _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE9_0                      (ADC_OVER_OVRE9_0_Val << ADC_OVER_OVRE9_Pos)         /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE9_1                      (ADC_OVER_OVRE9_1_Val << ADC_OVER_OVRE9_Pos)         /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE10_Pos                   _U_(10)                                              /**< (ADC_OVER) Overrun Error 10 Position */
#define ADC_OVER_OVRE10_Msk                   (_U_(0x1) << ADC_OVER_OVRE10_Pos)                    /**< (ADC_OVER) Overrun Error 10 Mask */
#define ADC_OVER_OVRE10(value)                (ADC_OVER_OVRE10_Msk & ((value) << ADC_OVER_OVRE10_Pos))
#define   ADC_OVER_OVRE10_0_Val               _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE10_1_Val               _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE10_0                     (ADC_OVER_OVRE10_0_Val << ADC_OVER_OVRE10_Pos)       /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE10_1                     (ADC_OVER_OVRE10_1_Val << ADC_OVER_OVRE10_Pos)       /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE11_Pos                   _U_(11)                                              /**< (ADC_OVER) Overrun Error 11 Position */
#define ADC_OVER_OVRE11_Msk                   (_U_(0x1) << ADC_OVER_OVRE11_Pos)                    /**< (ADC_OVER) Overrun Error 11 Mask */
#define ADC_OVER_OVRE11(value)                (ADC_OVER_OVRE11_Msk & ((value) << ADC_OVER_OVRE11_Pos))
#define   ADC_OVER_OVRE11_0_Val               _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE11_1_Val               _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE11_0                     (ADC_OVER_OVRE11_0_Val << ADC_OVER_OVRE11_Pos)       /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE11_1                     (ADC_OVER_OVRE11_1_Val << ADC_OVER_OVRE11_Pos)       /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE12_Pos                   _U_(12)                                              /**< (ADC_OVER) Overrun Error 12 Position */
#define ADC_OVER_OVRE12_Msk                   (_U_(0x1) << ADC_OVER_OVRE12_Pos)                    /**< (ADC_OVER) Overrun Error 12 Mask */
#define ADC_OVER_OVRE12(value)                (ADC_OVER_OVRE12_Msk & ((value) << ADC_OVER_OVRE12_Pos))
#define   ADC_OVER_OVRE12_0_Val               _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE12_1_Val               _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE12_0                     (ADC_OVER_OVRE12_0_Val << ADC_OVER_OVRE12_Pos)       /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE12_1                     (ADC_OVER_OVRE12_1_Val << ADC_OVER_OVRE12_Pos)       /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE13_Pos                   _U_(13)                                              /**< (ADC_OVER) Overrun Error 13 Position */
#define ADC_OVER_OVRE13_Msk                   (_U_(0x1) << ADC_OVER_OVRE13_Pos)                    /**< (ADC_OVER) Overrun Error 13 Mask */
#define ADC_OVER_OVRE13(value)                (ADC_OVER_OVRE13_Msk & ((value) << ADC_OVER_OVRE13_Pos))
#define   ADC_OVER_OVRE13_0_Val               _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE13_1_Val               _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE13_0                     (ADC_OVER_OVRE13_0_Val << ADC_OVER_OVRE13_Pos)       /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE13_1                     (ADC_OVER_OVRE13_1_Val << ADC_OVER_OVRE13_Pos)       /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE14_Pos                   _U_(14)                                              /**< (ADC_OVER) Overrun Error 14 Position */
#define ADC_OVER_OVRE14_Msk                   (_U_(0x1) << ADC_OVER_OVRE14_Pos)                    /**< (ADC_OVER) Overrun Error 14 Mask */
#define ADC_OVER_OVRE14(value)                (ADC_OVER_OVRE14_Msk & ((value) << ADC_OVER_OVRE14_Pos))
#define   ADC_OVER_OVRE14_0_Val               _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE14_1_Val               _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE14_0                     (ADC_OVER_OVRE14_0_Val << ADC_OVER_OVRE14_Pos)       /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE14_1                     (ADC_OVER_OVRE14_1_Val << ADC_OVER_OVRE14_Pos)       /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE15_Pos                   _U_(15)                                              /**< (ADC_OVER) Overrun Error 15 Position */
#define ADC_OVER_OVRE15_Msk                   (_U_(0x1) << ADC_OVER_OVRE15_Pos)                    /**< (ADC_OVER) Overrun Error 15 Mask */
#define ADC_OVER_OVRE15(value)                (ADC_OVER_OVRE15_Msk & ((value) << ADC_OVER_OVRE15_Pos))
#define   ADC_OVER_OVRE15_0_Val               _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE15_1_Val               _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE15_0                     (ADC_OVER_OVRE15_0_Val << ADC_OVER_OVRE15_Pos)       /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE15_1                     (ADC_OVER_OVRE15_1_Val << ADC_OVER_OVRE15_Pos)       /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE30_Pos                   _U_(30)                                              /**< (ADC_OVER) Overrun Error 30 Position */
#define ADC_OVER_OVRE30_Msk                   (_U_(0x1) << ADC_OVER_OVRE30_Pos)                    /**< (ADC_OVER) Overrun Error 30 Mask */
#define ADC_OVER_OVRE30(value)                (ADC_OVER_OVRE30_Msk & ((value) << ADC_OVER_OVRE30_Pos))
#define   ADC_OVER_OVRE30_0_Val               _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE30_1_Val               _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE30_0                     (ADC_OVER_OVRE30_0_Val << ADC_OVER_OVRE30_Pos)       /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE30_1                     (ADC_OVER_OVRE30_1_Val << ADC_OVER_OVRE30_Pos)       /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE31_Pos                   _U_(31)                                              /**< (ADC_OVER) Overrun Error 31 Position */
#define ADC_OVER_OVRE31_Msk                   (_U_(0x1) << ADC_OVER_OVRE31_Pos)                    /**< (ADC_OVER) Overrun Error 31 Mask */
#define ADC_OVER_OVRE31(value)                (ADC_OVER_OVRE31_Msk & ((value) << ADC_OVER_OVRE31_Pos))
#define   ADC_OVER_OVRE31_0_Val               _U_(0x0)                                             /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE31_1_Val               _U_(0x1)                                             /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE31_0                     (ADC_OVER_OVRE31_0_Val << ADC_OVER_OVRE31_Pos)       /**< (ADC_OVER) No overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_OVRE31_1                     (ADC_OVER_OVRE31_1_Val << ADC_OVER_OVRE31_Pos)       /**< (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position  */
#define ADC_OVER_Msk                          _U_(0xC000FFFF)                                      /**< (ADC_OVER) Register Mask  */

#define ADC_OVER_OVRE_Pos                     _U_(0)                                               /**< (ADC_OVER Position) Overrun Error 3x */
#define ADC_OVER_OVRE_Msk                     (_U_(0x3FFFF) << ADC_OVER_OVRE_Pos)                  /**< (ADC_OVER Mask) OVRE */
#define ADC_OVER_OVRE(value)                  (ADC_OVER_OVRE_Msk & ((value) << ADC_OVER_OVRE_Pos)) 

/* -------- ADC_EMR : (ADC Offset: 0x50) (R/W 32) Extended Mode Register -------- */
#define ADC_EMR_RESETVALUE                    _U_(0x00)                                            /**<  (ADC_EMR) Extended Mode Register  Reset Value */

#define ADC_EMR_CMPMODE_Pos                   _U_(0)                                               /**< (ADC_EMR) Comparison Mode Position */
#define ADC_EMR_CMPMODE_Msk                   (_U_(0x3) << ADC_EMR_CMPMODE_Pos)                    /**< (ADC_EMR) Comparison Mode Mask */
#define ADC_EMR_CMPMODE(value)                (ADC_EMR_CMPMODE_Msk & ((value) << ADC_EMR_CMPMODE_Pos))
#define   ADC_EMR_CMPMODE_LOW_Val             _U_(0x0)                                             /**< (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit the system from Wait mode.  */
#define   ADC_EMR_CMPMODE_HIGH_Val            _U_(0x1)                                             /**< (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit the system from Wait mode.  */
#define   ADC_EMR_CMPMODE_IN_Val              _U_(0x2)                                             /**< (ADC_EMR) When the converted data is in the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit the system from Wait mode.  */
#define   ADC_EMR_CMPMODE_OUT_Val             _U_(0x3)                                             /**< (ADC_EMR) When the converted data is out of the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit the system from Wait mode.  */
#define ADC_EMR_CMPMODE_LOW                   (ADC_EMR_CMPMODE_LOW_Val << ADC_EMR_CMPMODE_Pos)     /**< (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit the system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_HIGH                  (ADC_EMR_CMPMODE_HIGH_Val << ADC_EMR_CMPMODE_Pos)    /**< (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit the system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_IN                    (ADC_EMR_CMPMODE_IN_Val << ADC_EMR_CMPMODE_Pos)      /**< (ADC_EMR) When the converted data is in the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit the system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_OUT                   (ADC_EMR_CMPMODE_OUT_Val << ADC_EMR_CMPMODE_Pos)     /**< (ADC_EMR) When the converted data is out of the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wakeup mode, defines the conditions to exit the system from Wait mode. Position  */
#define ADC_EMR_CMPTYPE_Pos                   _U_(2)                                               /**< (ADC_EMR) Comparison Type Position */
#define ADC_EMR_CMPTYPE_Msk                   (_U_(0x1) << ADC_EMR_CMPTYPE_Pos)                    /**< (ADC_EMR) Comparison Type Mask */
#define ADC_EMR_CMPTYPE(value)                (ADC_EMR_CMPTYPE_Msk & ((value) << ADC_EMR_CMPTYPE_Pos))
#define   ADC_EMR_CMPTYPE_FLAG_ONLY_Val       _U_(0x0)                                             /**< (ADC_EMR) Any conversion is performed and comparison function drives the COMPE flag.  */
#define   ADC_EMR_CMPTYPE_START_CONDITION_Val _U_(0x1)                                             /**< (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until ADC_CR.CMPRST is set.  */
#define ADC_EMR_CMPTYPE_FLAG_ONLY             (ADC_EMR_CMPTYPE_FLAG_ONLY_Val << ADC_EMR_CMPTYPE_Pos) /**< (ADC_EMR) Any conversion is performed and comparison function drives the COMPE flag. Position  */
#define ADC_EMR_CMPTYPE_START_CONDITION       (ADC_EMR_CMPTYPE_START_CONDITION_Val << ADC_EMR_CMPTYPE_Pos) /**< (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until ADC_CR.CMPRST is set. Position  */
#define ADC_EMR_CMPSEL_Pos                    _U_(4)                                               /**< (ADC_EMR) Comparison Selected Channel Position */
#define ADC_EMR_CMPSEL_Msk                    (_U_(0x1F) << ADC_EMR_CMPSEL_Pos)                    /**< (ADC_EMR) Comparison Selected Channel Mask */
#define ADC_EMR_CMPSEL(value)                 (ADC_EMR_CMPSEL_Msk & ((value) << ADC_EMR_CMPSEL_Pos))
#define ADC_EMR_CMPALL_Pos                    _U_(9)                                               /**< (ADC_EMR) Compare All Channels Position */
#define ADC_EMR_CMPALL_Msk                    (_U_(0x1) << ADC_EMR_CMPALL_Pos)                     /**< (ADC_EMR) Compare All Channels Mask */
#define ADC_EMR_CMPALL(value)                 (ADC_EMR_CMPALL_Msk & ((value) << ADC_EMR_CMPALL_Pos))
#define   ADC_EMR_CMPALL_0_Val                _U_(0x0)                                             /**< (ADC_EMR) Only the channel indicated in CMPSEL is compared.  */
#define   ADC_EMR_CMPALL_1_Val                _U_(0x1)                                             /**< (ADC_EMR) All channels are compared.  */
#define ADC_EMR_CMPALL_0                      (ADC_EMR_CMPALL_0_Val << ADC_EMR_CMPALL_Pos)         /**< (ADC_EMR) Only the channel indicated in CMPSEL is compared. Position  */
#define ADC_EMR_CMPALL_1                      (ADC_EMR_CMPALL_1_Val << ADC_EMR_CMPALL_Pos)         /**< (ADC_EMR) All channels are compared. Position  */
#define ADC_EMR_CMPFILTER_Pos                 _U_(12)                                              /**< (ADC_EMR) Compare Event Filtering Position */
#define ADC_EMR_CMPFILTER_Msk                 (_U_(0x3) << ADC_EMR_CMPFILTER_Pos)                  /**< (ADC_EMR) Compare Event Filtering Mask */
#define ADC_EMR_CMPFILTER(value)              (ADC_EMR_CMPFILTER_Msk & ((value) << ADC_EMR_CMPFILTER_Pos))
#define ADC_EMR_OSR_Pos                       _U_(16)                                              /**< (ADC_EMR) Over Sampling Rate Position */
#define ADC_EMR_OSR_Msk                       (_U_(0x7) << ADC_EMR_OSR_Pos)                        /**< (ADC_EMR) Over Sampling Rate Mask */
#define ADC_EMR_OSR(value)                    (ADC_EMR_OSR_Msk & ((value) << ADC_EMR_OSR_Pos))    
#define   ADC_EMR_OSR_NO_AVERAGE_Val          _U_(0x0)                                             /**< (ADC_EMR) No averaging. ADC sample rate is maximum.  */
#define   ADC_EMR_OSR_OSR4_Val                _U_(0x1)                                             /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4.  */
#define   ADC_EMR_OSR_OSR16_Val               _U_(0x2)                                             /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16.  */
#define   ADC_EMR_OSR_OSR64_Val               _U_(0x3)                                             /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 64  */
#define   ADC_EMR_OSR_OSR256_Val              _U_(0x4)                                             /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 256.  */
#define ADC_EMR_OSR_NO_AVERAGE                (ADC_EMR_OSR_NO_AVERAGE_Val << ADC_EMR_OSR_Pos)      /**< (ADC_EMR) No averaging. ADC sample rate is maximum. Position  */
#define ADC_EMR_OSR_OSR4                      (ADC_EMR_OSR_OSR4_Val << ADC_EMR_OSR_Pos)            /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4. Position  */
#define ADC_EMR_OSR_OSR16                     (ADC_EMR_OSR_OSR16_Val << ADC_EMR_OSR_Pos)           /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16. Position  */
#define ADC_EMR_OSR_OSR64                     (ADC_EMR_OSR_OSR64_Val << ADC_EMR_OSR_Pos)           /**< (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 64 Position  */
#define ADC_EMR_OSR_OSR256                    (ADC_EMR_OSR_OSR256_Val << ADC_EMR_OSR_Pos)          /**< (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 256. Position  */
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
#define ADC_EMR_TRACKX_Pos                    _U_(22)                                              /**< (ADC_EMR) Tracking Time x4, x8 or x16 Position */
#define ADC_EMR_TRACKX_Msk                    (_U_(0x3) << ADC_EMR_TRACKX_Pos)                     /**< (ADC_EMR) Tracking Time x4, x8 or x16 Mask */
#define ADC_EMR_TRACKX(value)                 (ADC_EMR_TRACKX_Msk & ((value) << ADC_EMR_TRACKX_Pos))
#define   ADC_EMR_TRACKX_TRACKTIMX1_Val       _U_(0x0)                                             /**< (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 1.  */
#define   ADC_EMR_TRACKX_TRACKTIMX4_Val       _U_(0x1)                                             /**< (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 4.  */
#define   ADC_EMR_TRACKX_TRACKTIMX8_Val       _U_(0x2)                                             /**< (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 8  */
#define   ADC_EMR_TRACKX_TRACKTIMX16_Val      _U_(0x3)                                             /**< (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 16.  */
#define ADC_EMR_TRACKX_TRACKTIMX1             (ADC_EMR_TRACKX_TRACKTIMX1_Val << ADC_EMR_TRACKX_Pos) /**< (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 1. Position  */
#define ADC_EMR_TRACKX_TRACKTIMX4             (ADC_EMR_TRACKX_TRACKTIMX4_Val << ADC_EMR_TRACKX_Pos) /**< (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 4. Position  */
#define ADC_EMR_TRACKX_TRACKTIMX8             (ADC_EMR_TRACKX_TRACKTIMX8_Val << ADC_EMR_TRACKX_Pos) /**< (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 8 Position  */
#define ADC_EMR_TRACKX_TRACKTIMX16            (ADC_EMR_TRACKX_TRACKTIMX16_Val << ADC_EMR_TRACKX_Pos) /**< (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 16. Position  */
#define ADC_EMR_TAG_Pos                       _U_(24)                                              /**< (ADC_EMR) ADC_LCDR Tag Position */
#define ADC_EMR_TAG_Msk                       (_U_(0x1) << ADC_EMR_TAG_Pos)                        /**< (ADC_EMR) ADC_LCDR Tag Mask */
#define ADC_EMR_TAG(value)                    (ADC_EMR_TAG_Msk & ((value) << ADC_EMR_TAG_Pos))    
#define   ADC_EMR_TAG_0_Val                   _U_(0x0)                                             /**< (ADC_EMR) Sets ADC_LCDR.NO_OSR_CHNB/CHNBOSR to zero.  */
#define   ADC_EMR_TAG_1_Val                   _U_(0x1)                                             /**< (ADC_EMR) Appends the channel number to the conversion result in ADC_LCDR.  */
#define ADC_EMR_TAG_0                         (ADC_EMR_TAG_0_Val << ADC_EMR_TAG_Pos)               /**< (ADC_EMR) Sets ADC_LCDR.NO_OSR_CHNB/CHNBOSR to zero. Position  */
#define ADC_EMR_TAG_1                         (ADC_EMR_TAG_1_Val << ADC_EMR_TAG_Pos)               /**< (ADC_EMR) Appends the channel number to the conversion result in ADC_LCDR. Position  */
#define ADC_EMR_SIGNMODE_Pos                  _U_(25)                                              /**< (ADC_EMR) Sign Mode Position */
#define ADC_EMR_SIGNMODE_Msk                  (_U_(0x3) << ADC_EMR_SIGNMODE_Pos)                   /**< (ADC_EMR) Sign Mode Mask */
#define ADC_EMR_SIGNMODE(value)               (ADC_EMR_SIGNMODE_Msk & ((value) << ADC_EMR_SIGNMODE_Pos))
#define   ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val _U_(0x0)                                             /**< (ADC_EMR) Single-ended channels: unsigned conversions Differential channels: signed conversions  */
#define   ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val _U_(0x1)                                             /**< (ADC_EMR) Single-ended channels: signed conversions Differential channels: unsigned conversions  */
#define   ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val   _U_(0x2)                                             /**< (ADC_EMR) All channels: unsigned conversions  */
#define   ADC_EMR_SIGNMODE_ALL_SIGNED_Val     _U_(0x3)                                             /**< (ADC_EMR) All channels: signed conversions  */
#define ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN      (ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val << ADC_EMR_SIGNMODE_Pos) /**< (ADC_EMR) Single-ended channels: unsigned conversions Differential channels: signed conversions Position  */
#define ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG      (ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val << ADC_EMR_SIGNMODE_Pos) /**< (ADC_EMR) Single-ended channels: signed conversions Differential channels: unsigned conversions Position  */
#define ADC_EMR_SIGNMODE_ALL_UNSIGNED         (ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val << ADC_EMR_SIGNMODE_Pos) /**< (ADC_EMR) All channels: unsigned conversions Position  */
#define ADC_EMR_SIGNMODE_ALL_SIGNED           (ADC_EMR_SIGNMODE_ALL_SIGNED_Val << ADC_EMR_SIGNMODE_Pos) /**< (ADC_EMR) All channels: signed conversions Position  */
#define ADC_EMR_ADCMODE_Pos                   _U_(28)                                              /**< (ADC_EMR) ADC Running Mode Position */
#define ADC_EMR_ADCMODE_Msk                   (_U_(0x3) << ADC_EMR_ADCMODE_Pos)                    /**< (ADC_EMR) ADC Running Mode Mask */
#define ADC_EMR_ADCMODE(value)                (ADC_EMR_ADCMODE_Msk & ((value) << ADC_EMR_ADCMODE_Pos))
#define   ADC_EMR_ADCMODE_NORMAL_Val          _U_(0x0)                                             /**< (ADC_EMR) Normal mode of operation.  */
#define   ADC_EMR_ADCMODE_OFFSET_ERROR_Val    _U_(0x1)                                             /**< (ADC_EMR) Offset Error mode to measure the offset error. See Table 6-6 "ADC Running Modes".  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val _U_(0x2)                                             /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 6-6 "ADC Running Modes".  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val  _U_(0x3)                                             /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 6-6 "ADC Running Modes".  */
#define ADC_EMR_ADCMODE_NORMAL                (ADC_EMR_ADCMODE_NORMAL_Val << ADC_EMR_ADCMODE_Pos)  /**< (ADC_EMR) Normal mode of operation. Position  */
#define ADC_EMR_ADCMODE_OFFSET_ERROR          (ADC_EMR_ADCMODE_OFFSET_ERROR_Val << ADC_EMR_ADCMODE_Pos) /**< (ADC_EMR) Offset Error mode to measure the offset error. See Table 6-6 "ADC Running Modes". Position  */
#define ADC_EMR_ADCMODE_GAIN_ERROR_HIGH       (ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val << ADC_EMR_ADCMODE_Pos) /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 6-6 "ADC Running Modes". Position  */
#define ADC_EMR_ADCMODE_GAIN_ERROR_LOW        (ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val << ADC_EMR_ADCMODE_Pos) /**< (ADC_EMR) Gain Error mode to measure the gain error. See Table 6-6 "ADC Running Modes". Position  */
#define ADC_EMR_ALTCH_Pos                     _U_(30)                                              /**< (ADC_EMR) Alternate Channel Selection (Safety) Position */
#define ADC_EMR_ALTCH_Msk                     (_U_(0x1) << ADC_EMR_ALTCH_Pos)                      /**< (ADC_EMR) Alternate Channel Selection (Safety) Mask */
#define ADC_EMR_ALTCH(value)                  (ADC_EMR_ALTCH_Msk & ((value) << ADC_EMR_ALTCH_Pos))
#define   ADC_EMR_ALTCH_0_Val                 _U_(0x0)                                             /**< (ADC_EMR) The regular channels are selected.  */
#define   ADC_EMR_ALTCH_1_Val                 _U_(0x1)                                             /**< (ADC_EMR) The alternate channels are selected.  */
#define ADC_EMR_ALTCH_0                       (ADC_EMR_ALTCH_0_Val << ADC_EMR_ALTCH_Pos)           /**< (ADC_EMR) The regular channels are selected. Position  */
#define ADC_EMR_ALTCH_1                       (ADC_EMR_ALTCH_1_Val << ADC_EMR_ALTCH_Pos)           /**< (ADC_EMR) The alternate channels are selected. Position  */
#define ADC_EMR_Msk                           _U_(0x77F733F7)                                      /**< (ADC_EMR) Register Mask  */


/* -------- ADC_CWR : (ADC Offset: 0x54) (R/W 32) Compare Window Register -------- */
#define ADC_CWR_RESETVALUE                    _U_(0x00)                                            /**<  (ADC_CWR) Compare Window Register  Reset Value */

#define ADC_CWR_LOWTHRES_Pos                  _U_(0)                                               /**< (ADC_CWR) Low Threshold Position */
#define ADC_CWR_LOWTHRES_Msk                  (_U_(0xFFFF) << ADC_CWR_LOWTHRES_Pos)                /**< (ADC_CWR) Low Threshold Mask */
#define ADC_CWR_LOWTHRES(value)               (ADC_CWR_LOWTHRES_Msk & ((value) << ADC_CWR_LOWTHRES_Pos))
#define ADC_CWR_HIGHTHRES_Pos                 _U_(16)                                              /**< (ADC_CWR) High Threshold Position */
#define ADC_CWR_HIGHTHRES_Msk                 (_U_(0xFFFF) << ADC_CWR_HIGHTHRES_Pos)               /**< (ADC_CWR) High Threshold Mask */
#define ADC_CWR_HIGHTHRES(value)              (ADC_CWR_HIGHTHRES_Msk & ((value) << ADC_CWR_HIGHTHRES_Pos))
#define ADC_CWR_Msk                           _U_(0xFFFFFFFF)                                      /**< (ADC_CWR) Register Mask  */


/* -------- ADC_CCR : (ADC Offset: 0x5C) (R/W 32) Channel Configuration Register -------- */
#define ADC_CCR_RESETVALUE                    _U_(0x00)                                            /**<  (ADC_CCR) Channel Configuration Register  Reset Value */

#define ADC_CCR_DIFF0_Pos                     _U_(0)                                               /**< (ADC_CCR) Differential Inputs for Channel 0 Position */
#define ADC_CCR_DIFF0_Msk                     (_U_(0x1) << ADC_CCR_DIFF0_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 0 Mask */
#define ADC_CCR_DIFF0(value)                  (ADC_CCR_DIFF0_Msk & ((value) << ADC_CCR_DIFF0_Pos))
#define   ADC_CCR_DIFF0_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF0_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF0_0                       (ADC_CCR_DIFF0_0_Val << ADC_CCR_DIFF0_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF0_1                       (ADC_CCR_DIFF0_1_Val << ADC_CCR_DIFF0_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF1_Pos                     _U_(1)                                               /**< (ADC_CCR) Differential Inputs for Channel 1 Position */
#define ADC_CCR_DIFF1_Msk                     (_U_(0x1) << ADC_CCR_DIFF1_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 1 Mask */
#define ADC_CCR_DIFF1(value)                  (ADC_CCR_DIFF1_Msk & ((value) << ADC_CCR_DIFF1_Pos))
#define   ADC_CCR_DIFF1_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF1_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF1_0                       (ADC_CCR_DIFF1_0_Val << ADC_CCR_DIFF1_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF1_1                       (ADC_CCR_DIFF1_1_Val << ADC_CCR_DIFF1_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF2_Pos                     _U_(2)                                               /**< (ADC_CCR) Differential Inputs for Channel 2 Position */
#define ADC_CCR_DIFF2_Msk                     (_U_(0x1) << ADC_CCR_DIFF2_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 2 Mask */
#define ADC_CCR_DIFF2(value)                  (ADC_CCR_DIFF2_Msk & ((value) << ADC_CCR_DIFF2_Pos))
#define   ADC_CCR_DIFF2_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF2_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF2_0                       (ADC_CCR_DIFF2_0_Val << ADC_CCR_DIFF2_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF2_1                       (ADC_CCR_DIFF2_1_Val << ADC_CCR_DIFF2_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF3_Pos                     _U_(3)                                               /**< (ADC_CCR) Differential Inputs for Channel 3 Position */
#define ADC_CCR_DIFF3_Msk                     (_U_(0x1) << ADC_CCR_DIFF3_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 3 Mask */
#define ADC_CCR_DIFF3(value)                  (ADC_CCR_DIFF3_Msk & ((value) << ADC_CCR_DIFF3_Pos))
#define   ADC_CCR_DIFF3_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF3_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF3_0                       (ADC_CCR_DIFF3_0_Val << ADC_CCR_DIFF3_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF3_1                       (ADC_CCR_DIFF3_1_Val << ADC_CCR_DIFF3_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF4_Pos                     _U_(4)                                               /**< (ADC_CCR) Differential Inputs for Channel 4 Position */
#define ADC_CCR_DIFF4_Msk                     (_U_(0x1) << ADC_CCR_DIFF4_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 4 Mask */
#define ADC_CCR_DIFF4(value)                  (ADC_CCR_DIFF4_Msk & ((value) << ADC_CCR_DIFF4_Pos))
#define   ADC_CCR_DIFF4_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF4_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF4_0                       (ADC_CCR_DIFF4_0_Val << ADC_CCR_DIFF4_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF4_1                       (ADC_CCR_DIFF4_1_Val << ADC_CCR_DIFF4_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF5_Pos                     _U_(5)                                               /**< (ADC_CCR) Differential Inputs for Channel 5 Position */
#define ADC_CCR_DIFF5_Msk                     (_U_(0x1) << ADC_CCR_DIFF5_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 5 Mask */
#define ADC_CCR_DIFF5(value)                  (ADC_CCR_DIFF5_Msk & ((value) << ADC_CCR_DIFF5_Pos))
#define   ADC_CCR_DIFF5_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF5_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF5_0                       (ADC_CCR_DIFF5_0_Val << ADC_CCR_DIFF5_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF5_1                       (ADC_CCR_DIFF5_1_Val << ADC_CCR_DIFF5_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF6_Pos                     _U_(6)                                               /**< (ADC_CCR) Differential Inputs for Channel 6 Position */
#define ADC_CCR_DIFF6_Msk                     (_U_(0x1) << ADC_CCR_DIFF6_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 6 Mask */
#define ADC_CCR_DIFF6(value)                  (ADC_CCR_DIFF6_Msk & ((value) << ADC_CCR_DIFF6_Pos))
#define   ADC_CCR_DIFF6_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF6_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF6_0                       (ADC_CCR_DIFF6_0_Val << ADC_CCR_DIFF6_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF6_1                       (ADC_CCR_DIFF6_1_Val << ADC_CCR_DIFF6_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF7_Pos                     _U_(7)                                               /**< (ADC_CCR) Differential Inputs for Channel 7 Position */
#define ADC_CCR_DIFF7_Msk                     (_U_(0x1) << ADC_CCR_DIFF7_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 7 Mask */
#define ADC_CCR_DIFF7(value)                  (ADC_CCR_DIFF7_Msk & ((value) << ADC_CCR_DIFF7_Pos))
#define   ADC_CCR_DIFF7_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF7_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF7_0                       (ADC_CCR_DIFF7_0_Val << ADC_CCR_DIFF7_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF7_1                       (ADC_CCR_DIFF7_1_Val << ADC_CCR_DIFF7_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF8_Pos                     _U_(8)                                               /**< (ADC_CCR) Differential Inputs for Channel 8 Position */
#define ADC_CCR_DIFF8_Msk                     (_U_(0x1) << ADC_CCR_DIFF8_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 8 Mask */
#define ADC_CCR_DIFF8(value)                  (ADC_CCR_DIFF8_Msk & ((value) << ADC_CCR_DIFF8_Pos))
#define   ADC_CCR_DIFF8_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF8_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF8_0                       (ADC_CCR_DIFF8_0_Val << ADC_CCR_DIFF8_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF8_1                       (ADC_CCR_DIFF8_1_Val << ADC_CCR_DIFF8_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF9_Pos                     _U_(9)                                               /**< (ADC_CCR) Differential Inputs for Channel 9 Position */
#define ADC_CCR_DIFF9_Msk                     (_U_(0x1) << ADC_CCR_DIFF9_Pos)                      /**< (ADC_CCR) Differential Inputs for Channel 9 Mask */
#define ADC_CCR_DIFF9(value)                  (ADC_CCR_DIFF9_Msk & ((value) << ADC_CCR_DIFF9_Pos))
#define   ADC_CCR_DIFF9_0_Val                 _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF9_1_Val                 _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF9_0                       (ADC_CCR_DIFF9_0_Val << ADC_CCR_DIFF9_Pos)           /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF9_1                       (ADC_CCR_DIFF9_1_Val << ADC_CCR_DIFF9_Pos)           /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF10_Pos                    _U_(10)                                              /**< (ADC_CCR) Differential Inputs for Channel 10 Position */
#define ADC_CCR_DIFF10_Msk                    (_U_(0x1) << ADC_CCR_DIFF10_Pos)                     /**< (ADC_CCR) Differential Inputs for Channel 10 Mask */
#define ADC_CCR_DIFF10(value)                 (ADC_CCR_DIFF10_Msk & ((value) << ADC_CCR_DIFF10_Pos))
#define   ADC_CCR_DIFF10_0_Val                _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF10_1_Val                _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF10_0                      (ADC_CCR_DIFF10_0_Val << ADC_CCR_DIFF10_Pos)         /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF10_1                      (ADC_CCR_DIFF10_1_Val << ADC_CCR_DIFF10_Pos)         /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF11_Pos                    _U_(11)                                              /**< (ADC_CCR) Differential Inputs for Channel 11 Position */
#define ADC_CCR_DIFF11_Msk                    (_U_(0x1) << ADC_CCR_DIFF11_Pos)                     /**< (ADC_CCR) Differential Inputs for Channel 11 Mask */
#define ADC_CCR_DIFF11(value)                 (ADC_CCR_DIFF11_Msk & ((value) << ADC_CCR_DIFF11_Pos))
#define   ADC_CCR_DIFF11_0_Val                _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF11_1_Val                _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF11_0                      (ADC_CCR_DIFF11_0_Val << ADC_CCR_DIFF11_Pos)         /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF11_1                      (ADC_CCR_DIFF11_1_Val << ADC_CCR_DIFF11_Pos)         /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF12_Pos                    _U_(12)                                              /**< (ADC_CCR) Differential Inputs for Channel 12 Position */
#define ADC_CCR_DIFF12_Msk                    (_U_(0x1) << ADC_CCR_DIFF12_Pos)                     /**< (ADC_CCR) Differential Inputs for Channel 12 Mask */
#define ADC_CCR_DIFF12(value)                 (ADC_CCR_DIFF12_Msk & ((value) << ADC_CCR_DIFF12_Pos))
#define   ADC_CCR_DIFF12_0_Val                _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF12_1_Val                _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF12_0                      (ADC_CCR_DIFF12_0_Val << ADC_CCR_DIFF12_Pos)         /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF12_1                      (ADC_CCR_DIFF12_1_Val << ADC_CCR_DIFF12_Pos)         /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF13_Pos                    _U_(13)                                              /**< (ADC_CCR) Differential Inputs for Channel 13 Position */
#define ADC_CCR_DIFF13_Msk                    (_U_(0x1) << ADC_CCR_DIFF13_Pos)                     /**< (ADC_CCR) Differential Inputs for Channel 13 Mask */
#define ADC_CCR_DIFF13(value)                 (ADC_CCR_DIFF13_Msk & ((value) << ADC_CCR_DIFF13_Pos))
#define   ADC_CCR_DIFF13_0_Val                _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF13_1_Val                _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF13_0                      (ADC_CCR_DIFF13_0_Val << ADC_CCR_DIFF13_Pos)         /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF13_1                      (ADC_CCR_DIFF13_1_Val << ADC_CCR_DIFF13_Pos)         /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF14_Pos                    _U_(14)                                              /**< (ADC_CCR) Differential Inputs for Channel 14 Position */
#define ADC_CCR_DIFF14_Msk                    (_U_(0x1) << ADC_CCR_DIFF14_Pos)                     /**< (ADC_CCR) Differential Inputs for Channel 14 Mask */
#define ADC_CCR_DIFF14(value)                 (ADC_CCR_DIFF14_Msk & ((value) << ADC_CCR_DIFF14_Pos))
#define   ADC_CCR_DIFF14_0_Val                _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF14_1_Val                _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF14_0                      (ADC_CCR_DIFF14_0_Val << ADC_CCR_DIFF14_Pos)         /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF14_1                      (ADC_CCR_DIFF14_1_Val << ADC_CCR_DIFF14_Pos)         /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_DIFF15_Pos                    _U_(15)                                              /**< (ADC_CCR) Differential Inputs for Channel 15 Position */
#define ADC_CCR_DIFF15_Msk                    (_U_(0x1) << ADC_CCR_DIFF15_Pos)                     /**< (ADC_CCR) Differential Inputs for Channel 15 Mask */
#define ADC_CCR_DIFF15(value)                 (ADC_CCR_DIFF15_Msk & ((value) << ADC_CCR_DIFF15_Pos))
#define   ADC_CCR_DIFF15_0_Val                _U_(0x0)                                             /**< (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF15_1_Val                _U_(0x1)                                             /**< (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF15_0                      (ADC_CCR_DIFF15_0_Val << ADC_CCR_DIFF15_Pos)         /**< (ADC_CCR) Corresponding channel is set in Single-ended mode. Position  */
#define ADC_CCR_DIFF15_1                      (ADC_CCR_DIFF15_1_Val << ADC_CCR_DIFF15_Pos)         /**< (ADC_CCR) Corresponding channel is set in Differential mode. Position  */
#define ADC_CCR_Msk                           _U_(0x0000FFFF)                                      /**< (ADC_CCR) Register Mask  */

#define ADC_CCR_DIFF_Pos                      _U_(0)                                               /**< (ADC_CCR Position) Differential Inputs for Channel x5 */
#define ADC_CCR_DIFF_Msk                      (_U_(0xFFFF) << ADC_CCR_DIFF_Pos)                    /**< (ADC_CCR Mask) DIFF */
#define ADC_CCR_DIFF(value)                   (ADC_CCR_DIFF_Msk & ((value) << ADC_CCR_DIFF_Pos))   

/* -------- ADC_CDR : (ADC Offset: 0x60) ( R/ 32) Channel Data Register x -------- */
#define ADC_CDR_RESETVALUE                    _U_(0x00)                                            /**<  (ADC_CDR) Channel Data Register x  Reset Value */

#define ADC_CDR_DATA_Pos                      _U_(0)                                               /**< (ADC_CDR) Converted Data Position */
#define ADC_CDR_DATA_Msk                      (_U_(0xFFFF) << ADC_CDR_DATA_Pos)                    /**< (ADC_CDR) Converted Data Mask */
#define ADC_CDR_DATA(value)                   (ADC_CDR_DATA_Msk & ((value) << ADC_CDR_DATA_Pos))  
#define ADC_CDR_Msk                           _U_(0x0000FFFF)                                      /**< (ADC_CDR) Register Mask  */


/* -------- ADC_ACR : (ADC Offset: 0xE0) (R/W 32) Analog Control Register -------- */
#define ADC_ACR_RESETVALUE                    _U_(0x101)                                           /**<  (ADC_ACR) Analog Control Register  Reset Value */

#define ADC_ACR_SRCLCH_Pos                    _U_(16)                                              /**< (ADC_ACR) Source Last Channel. Position */
#define ADC_ACR_SRCLCH_Msk                    (_U_(0x1) << ADC_ACR_SRCLCH_Pos)                     /**< (ADC_ACR) Source Last Channel. Mask */
#define ADC_ACR_SRCLCH(value)                 (ADC_ACR_SRCLCH_Msk & ((value) << ADC_ACR_SRCLCH_Pos))
#define   ADC_ACR_SRCLCH_VTEMP_Val            _U_(0x0)                                             /**< (ADC_ACR) The highest index channel is driven by the output of the temperature sensor.  */
#define   ADC_ACR_SRCLCH_VBG_Val              _U_(0x1)                                             /**< (ADC_ACR) The highest index channel is driven by the reference voltage of the temperature sensor.  */
#define ADC_ACR_SRCLCH_VTEMP                  (ADC_ACR_SRCLCH_VTEMP_Val << ADC_ACR_SRCLCH_Pos)     /**< (ADC_ACR) The highest index channel is driven by the output of the temperature sensor. Position  */
#define ADC_ACR_SRCLCH_VBG                    (ADC_ACR_SRCLCH_VBG_Val << ADC_ACR_SRCLCH_Pos)       /**< (ADC_ACR) The highest index channel is driven by the reference voltage of the temperature sensor. Position  */
#define ADC_ACR_Msk                           _U_(0x00010000)                                      /**< (ADC_ACR) Register Mask  */


/* -------- ADC_FMR : (ADC Offset: 0xE4) (R/W 32) FIFO Mode Register -------- */
#define ADC_FMR_RESETVALUE                    _U_(0x00)                                            /**<  (ADC_FMR) FIFO Mode Register  Reset Value */

#define ADC_FMR_ENFIFO_Pos                    _U_(0)                                               /**< (ADC_FMR) Enable FIFO Position */
#define ADC_FMR_ENFIFO_Msk                    (_U_(0x1) << ADC_FMR_ENFIFO_Pos)                     /**< (ADC_FMR) Enable FIFO Mask */
#define ADC_FMR_ENFIFO(value)                 (ADC_FMR_ENFIFO_Msk & ((value) << ADC_FMR_ENFIFO_Pos))
#define   ADC_FMR_ENFIFO_0_Val                _U_(0x0)                                             /**< (ADC_FMR) FIFO is disabled.  */
#define   ADC_FMR_ENFIFO_1_Val                _U_(0x1)                                             /**< (ADC_FMR) FIFO is enabled.  */
#define ADC_FMR_ENFIFO_0                      (ADC_FMR_ENFIFO_0_Val << ADC_FMR_ENFIFO_Pos)         /**< (ADC_FMR) FIFO is disabled. Position  */
#define ADC_FMR_ENFIFO_1                      (ADC_FMR_ENFIFO_1_Val << ADC_FMR_ENFIFO_Pos)         /**< (ADC_FMR) FIFO is enabled. Position  */
#define ADC_FMR_ENLEVEL_Pos                   _U_(1)                                               /**< (ADC_FMR) Enable Level Position */
#define ADC_FMR_ENLEVEL_Msk                   (_U_(0x1) << ADC_FMR_ENLEVEL_Pos)                    /**< (ADC_FMR) Enable Level Mask */
#define ADC_FMR_ENLEVEL(value)                (ADC_FMR_ENLEVEL_Msk & ((value) << ADC_FMR_ENLEVEL_Pos))
#define   ADC_FMR_ENLEVEL_0_Val               _U_(0x0)                                             /**< (ADC_FMR) Request to DMA is generated as soon as one data is written in FIFO when FIFO is enabled. CHUNK is not used.  */
#define   ADC_FMR_ENLEVEL_1_Val               _U_(0x1)                                             /**< (ADC_FMR) Request to DMA is generated as soon as the number of written elements in the FIFO is greater than or equal to CHUNK.  */
#define ADC_FMR_ENLEVEL_0                     (ADC_FMR_ENLEVEL_0_Val << ADC_FMR_ENLEVEL_Pos)       /**< (ADC_FMR) Request to DMA is generated as soon as one data is written in FIFO when FIFO is enabled. CHUNK is not used. Position  */
#define ADC_FMR_ENLEVEL_1                     (ADC_FMR_ENLEVEL_1_Val << ADC_FMR_ENLEVEL_Pos)       /**< (ADC_FMR) Request to DMA is generated as soon as the number of written elements in the FIFO is greater than or equal to CHUNK. Position  */
#define ADC_FMR_CHUNK_Pos                     _U_(4)                                               /**< (ADC_FMR) Chunk Size Position */
#define ADC_FMR_CHUNK_Msk                     (_U_(0xF) << ADC_FMR_CHUNK_Pos)                      /**< (ADC_FMR) Chunk Size Mask */
#define ADC_FMR_CHUNK(value)                  (ADC_FMR_CHUNK_Msk & ((value) << ADC_FMR_CHUNK_Pos))
#define ADC_FMR_FIFOCNT_Pos                   _U_(16)                                              /**< (ADC_FMR) FIFO Count (read-only) Position */
#define ADC_FMR_FIFOCNT_Msk                   (_U_(0xFF) << ADC_FMR_FIFOCNT_Pos)                   /**< (ADC_FMR) FIFO Count (read-only) Mask */
#define ADC_FMR_FIFOCNT(value)                (ADC_FMR_FIFOCNT_Msk & ((value) << ADC_FMR_FIFOCNT_Pos))
#define ADC_FMR_Msk                           _U_(0x00FF00F3)                                      /**< (ADC_FMR) Register Mask  */


/* -------- ADC_TRGR : (ADC Offset: 0x100) (R/W 32) Trigger Register -------- */
#define ADC_TRGR_RESETVALUE                   _U_(0x00)                                            /**<  (ADC_TRGR) Trigger Register  Reset Value */

#define ADC_TRGR_TRGMOD_Pos                   _U_(0)                                               /**< (ADC_TRGR) Trigger Mode Position */
#define ADC_TRGR_TRGMOD_Msk                   (_U_(0x7) << ADC_TRGR_TRGMOD_Pos)                    /**< (ADC_TRGR) Trigger Mode Mask */
#define ADC_TRGR_TRGMOD(value)                (ADC_TRGR_TRGMOD_Msk & ((value) << ADC_TRGR_TRGMOD_Pos))
#define   ADC_TRGR_TRGMOD_NO_TRIGGER_Val      _U_(0x0)                                             /**< (ADC_TRGR) No hardware trigger, only software trigger can start conversions  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val   _U_(0x1)                                             /**< (ADC_TRGR) Rising edge of the selected trigger event, defined in ADC_MR.TRGSEL  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val   _U_(0x2)                                             /**< (ADC_TRGR) Falling edge of the selected trigger event  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val    _U_(0x3)                                             /**< (ADC_TRGR) Any edge of the selected trigger event  */
#define   ADC_TRGR_TRGMOD_PERIOD_TRIG_Val     _U_(0x5)                                             /**< (ADC_TRGR) ADC internal periodic trigger (see TRGPER)  */
#define   ADC_TRGR_TRGMOD_CONTINUOUS_Val      _U_(0x6)                                             /**< (ADC_TRGR) Continuous mode, free run mode  */
#define ADC_TRGR_TRGMOD_NO_TRIGGER            (ADC_TRGR_TRGMOD_NO_TRIGGER_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) No hardware trigger, only software trigger can start conversions Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_RISE         (ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) Rising edge of the selected trigger event, defined in ADC_MR.TRGSEL Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_FALL         (ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) Falling edge of the selected trigger event Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_ANY          (ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) Any edge of the selected trigger event Position  */
#define ADC_TRGR_TRGMOD_PERIOD_TRIG           (ADC_TRGR_TRGMOD_PERIOD_TRIG_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) ADC internal periodic trigger (see TRGPER) Position  */
#define ADC_TRGR_TRGMOD_CONTINUOUS            (ADC_TRGR_TRGMOD_CONTINUOUS_Val << ADC_TRGR_TRGMOD_Pos) /**< (ADC_TRGR) Continuous mode, free run mode Position  */
#define ADC_TRGR_TRGPER_Pos                   _U_(8)                                               /**< (ADC_TRGR) Trigger Period Position */
#define ADC_TRGR_TRGPER_Msk                   (_U_(0xFFFFFF) << ADC_TRGR_TRGPER_Pos)               /**< (ADC_TRGR) Trigger Period Mask */
#define ADC_TRGR_TRGPER(value)                (ADC_TRGR_TRGPER_Msk & ((value) << ADC_TRGR_TRGPER_Pos))
#define ADC_TRGR_Msk                          _U_(0xFFFFFF07)                                      /**< (ADC_TRGR) Register Mask  */


/* -------- ADC_COSR : (ADC Offset: 0x104) (R/W 32) Correction Select Register -------- */
#define ADC_COSR_RESETVALUE                   _U_(0x00)                                            /**<  (ADC_COSR) Correction Select Register  Reset Value */

#define ADC_COSR_CSEL_Pos                     _U_(0)                                               /**< (ADC_COSR) Channel Correction Select Position */
#define ADC_COSR_CSEL_Msk                     (_U_(0x1F) << ADC_COSR_CSEL_Pos)                     /**< (ADC_COSR) Channel Correction Select Mask */
#define ADC_COSR_CSEL(value)                  (ADC_COSR_CSEL_Msk & ((value) << ADC_COSR_CSEL_Pos))
#define ADC_COSR_Msk                          _U_(0x0000001F)                                      /**< (ADC_COSR) Register Mask  */


/* -------- ADC_CVR : (ADC Offset: 0x108) (R/W 32) Correction Values Register -------- */
#define ADC_CVR_RESETVALUE                    _U_(0x00)                                            /**<  (ADC_CVR) Correction Values Register  Reset Value */

#define ADC_CVR_OFFSETCORR_Pos                _U_(0)                                               /**< (ADC_CVR) Offset Correction Position */
#define ADC_CVR_OFFSETCORR_Msk                (_U_(0xFFFF) << ADC_CVR_OFFSETCORR_Pos)              /**< (ADC_CVR) Offset Correction Mask */
#define ADC_CVR_OFFSETCORR(value)             (ADC_CVR_OFFSETCORR_Msk & ((value) << ADC_CVR_OFFSETCORR_Pos))
#define ADC_CVR_GAINCORR_Pos                  _U_(16)                                              /**< (ADC_CVR) Gain Correction Position */
#define ADC_CVR_GAINCORR_Msk                  (_U_(0xFFFF) << ADC_CVR_GAINCORR_Pos)                /**< (ADC_CVR) Gain Correction Mask */
#define ADC_CVR_GAINCORR(value)               (ADC_CVR_GAINCORR_Msk & ((value) << ADC_CVR_GAINCORR_Pos))
#define ADC_CVR_Msk                           _U_(0xFFFFFFFF)                                      /**< (ADC_CVR) Register Mask  */


/* -------- ADC_CECR : (ADC Offset: 0x10C) (R/W 32) Channel Error Correction Register -------- */
#define ADC_CECR_RESETVALUE                   _U_(0x00)                                            /**<  (ADC_CECR) Channel Error Correction Register  Reset Value */

#define ADC_CECR_ECORR0_Pos                   _U_(0)                                               /**< (ADC_CECR) Error Correction Enable for Channel 0 Position */
#define ADC_CECR_ECORR0_Msk                   (_U_(0x1) << ADC_CECR_ECORR0_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 0 Mask */
#define ADC_CECR_ECORR0(value)                (ADC_CECR_ECORR0_Msk & ((value) << ADC_CECR_ECORR0_Pos))
#define   ADC_CECR_ECORR0_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR0_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR0_0                     (ADC_CECR_ECORR0_0_Val << ADC_CECR_ECORR0_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR0_1                     (ADC_CECR_ECORR0_1_Val << ADC_CECR_ECORR0_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR1_Pos                   _U_(1)                                               /**< (ADC_CECR) Error Correction Enable for Channel 1 Position */
#define ADC_CECR_ECORR1_Msk                   (_U_(0x1) << ADC_CECR_ECORR1_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 1 Mask */
#define ADC_CECR_ECORR1(value)                (ADC_CECR_ECORR1_Msk & ((value) << ADC_CECR_ECORR1_Pos))
#define   ADC_CECR_ECORR1_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR1_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR1_0                     (ADC_CECR_ECORR1_0_Val << ADC_CECR_ECORR1_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR1_1                     (ADC_CECR_ECORR1_1_Val << ADC_CECR_ECORR1_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR2_Pos                   _U_(2)                                               /**< (ADC_CECR) Error Correction Enable for Channel 2 Position */
#define ADC_CECR_ECORR2_Msk                   (_U_(0x1) << ADC_CECR_ECORR2_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 2 Mask */
#define ADC_CECR_ECORR2(value)                (ADC_CECR_ECORR2_Msk & ((value) << ADC_CECR_ECORR2_Pos))
#define   ADC_CECR_ECORR2_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR2_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR2_0                     (ADC_CECR_ECORR2_0_Val << ADC_CECR_ECORR2_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR2_1                     (ADC_CECR_ECORR2_1_Val << ADC_CECR_ECORR2_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR3_Pos                   _U_(3)                                               /**< (ADC_CECR) Error Correction Enable for Channel 3 Position */
#define ADC_CECR_ECORR3_Msk                   (_U_(0x1) << ADC_CECR_ECORR3_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 3 Mask */
#define ADC_CECR_ECORR3(value)                (ADC_CECR_ECORR3_Msk & ((value) << ADC_CECR_ECORR3_Pos))
#define   ADC_CECR_ECORR3_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR3_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR3_0                     (ADC_CECR_ECORR3_0_Val << ADC_CECR_ECORR3_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR3_1                     (ADC_CECR_ECORR3_1_Val << ADC_CECR_ECORR3_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR4_Pos                   _U_(4)                                               /**< (ADC_CECR) Error Correction Enable for Channel 4 Position */
#define ADC_CECR_ECORR4_Msk                   (_U_(0x1) << ADC_CECR_ECORR4_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 4 Mask */
#define ADC_CECR_ECORR4(value)                (ADC_CECR_ECORR4_Msk & ((value) << ADC_CECR_ECORR4_Pos))
#define   ADC_CECR_ECORR4_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR4_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR4_0                     (ADC_CECR_ECORR4_0_Val << ADC_CECR_ECORR4_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR4_1                     (ADC_CECR_ECORR4_1_Val << ADC_CECR_ECORR4_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR5_Pos                   _U_(5)                                               /**< (ADC_CECR) Error Correction Enable for Channel 5 Position */
#define ADC_CECR_ECORR5_Msk                   (_U_(0x1) << ADC_CECR_ECORR5_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 5 Mask */
#define ADC_CECR_ECORR5(value)                (ADC_CECR_ECORR5_Msk & ((value) << ADC_CECR_ECORR5_Pos))
#define   ADC_CECR_ECORR5_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR5_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR5_0                     (ADC_CECR_ECORR5_0_Val << ADC_CECR_ECORR5_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR5_1                     (ADC_CECR_ECORR5_1_Val << ADC_CECR_ECORR5_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR6_Pos                   _U_(6)                                               /**< (ADC_CECR) Error Correction Enable for Channel 6 Position */
#define ADC_CECR_ECORR6_Msk                   (_U_(0x1) << ADC_CECR_ECORR6_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 6 Mask */
#define ADC_CECR_ECORR6(value)                (ADC_CECR_ECORR6_Msk & ((value) << ADC_CECR_ECORR6_Pos))
#define   ADC_CECR_ECORR6_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR6_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR6_0                     (ADC_CECR_ECORR6_0_Val << ADC_CECR_ECORR6_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR6_1                     (ADC_CECR_ECORR6_1_Val << ADC_CECR_ECORR6_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR7_Pos                   _U_(7)                                               /**< (ADC_CECR) Error Correction Enable for Channel 7 Position */
#define ADC_CECR_ECORR7_Msk                   (_U_(0x1) << ADC_CECR_ECORR7_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 7 Mask */
#define ADC_CECR_ECORR7(value)                (ADC_CECR_ECORR7_Msk & ((value) << ADC_CECR_ECORR7_Pos))
#define   ADC_CECR_ECORR7_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR7_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR7_0                     (ADC_CECR_ECORR7_0_Val << ADC_CECR_ECORR7_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR7_1                     (ADC_CECR_ECORR7_1_Val << ADC_CECR_ECORR7_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR8_Pos                   _U_(8)                                               /**< (ADC_CECR) Error Correction Enable for Channel 8 Position */
#define ADC_CECR_ECORR8_Msk                   (_U_(0x1) << ADC_CECR_ECORR8_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 8 Mask */
#define ADC_CECR_ECORR8(value)                (ADC_CECR_ECORR8_Msk & ((value) << ADC_CECR_ECORR8_Pos))
#define   ADC_CECR_ECORR8_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR8_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR8_0                     (ADC_CECR_ECORR8_0_Val << ADC_CECR_ECORR8_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR8_1                     (ADC_CECR_ECORR8_1_Val << ADC_CECR_ECORR8_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR9_Pos                   _U_(9)                                               /**< (ADC_CECR) Error Correction Enable for Channel 9 Position */
#define ADC_CECR_ECORR9_Msk                   (_U_(0x1) << ADC_CECR_ECORR9_Pos)                    /**< (ADC_CECR) Error Correction Enable for Channel 9 Mask */
#define ADC_CECR_ECORR9(value)                (ADC_CECR_ECORR9_Msk & ((value) << ADC_CECR_ECORR9_Pos))
#define   ADC_CECR_ECORR9_0_Val               _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR9_1_Val               _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR9_0                     (ADC_CECR_ECORR9_0_Val << ADC_CECR_ECORR9_Pos)       /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR9_1                     (ADC_CECR_ECORR9_1_Val << ADC_CECR_ECORR9_Pos)       /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR10_Pos                  _U_(10)                                              /**< (ADC_CECR) Error Correction Enable for Channel 10 Position */
#define ADC_CECR_ECORR10_Msk                  (_U_(0x1) << ADC_CECR_ECORR10_Pos)                   /**< (ADC_CECR) Error Correction Enable for Channel 10 Mask */
#define ADC_CECR_ECORR10(value)               (ADC_CECR_ECORR10_Msk & ((value) << ADC_CECR_ECORR10_Pos))
#define   ADC_CECR_ECORR10_0_Val              _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR10_1_Val              _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR10_0                    (ADC_CECR_ECORR10_0_Val << ADC_CECR_ECORR10_Pos)     /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR10_1                    (ADC_CECR_ECORR10_1_Val << ADC_CECR_ECORR10_Pos)     /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR11_Pos                  _U_(11)                                              /**< (ADC_CECR) Error Correction Enable for Channel 11 Position */
#define ADC_CECR_ECORR11_Msk                  (_U_(0x1) << ADC_CECR_ECORR11_Pos)                   /**< (ADC_CECR) Error Correction Enable for Channel 11 Mask */
#define ADC_CECR_ECORR11(value)               (ADC_CECR_ECORR11_Msk & ((value) << ADC_CECR_ECORR11_Pos))
#define   ADC_CECR_ECORR11_0_Val              _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR11_1_Val              _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR11_0                    (ADC_CECR_ECORR11_0_Val << ADC_CECR_ECORR11_Pos)     /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR11_1                    (ADC_CECR_ECORR11_1_Val << ADC_CECR_ECORR11_Pos)     /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR12_Pos                  _U_(12)                                              /**< (ADC_CECR) Error Correction Enable for Channel 12 Position */
#define ADC_CECR_ECORR12_Msk                  (_U_(0x1) << ADC_CECR_ECORR12_Pos)                   /**< (ADC_CECR) Error Correction Enable for Channel 12 Mask */
#define ADC_CECR_ECORR12(value)               (ADC_CECR_ECORR12_Msk & ((value) << ADC_CECR_ECORR12_Pos))
#define   ADC_CECR_ECORR12_0_Val              _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR12_1_Val              _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR12_0                    (ADC_CECR_ECORR12_0_Val << ADC_CECR_ECORR12_Pos)     /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR12_1                    (ADC_CECR_ECORR12_1_Val << ADC_CECR_ECORR12_Pos)     /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR13_Pos                  _U_(13)                                              /**< (ADC_CECR) Error Correction Enable for Channel 13 Position */
#define ADC_CECR_ECORR13_Msk                  (_U_(0x1) << ADC_CECR_ECORR13_Pos)                   /**< (ADC_CECR) Error Correction Enable for Channel 13 Mask */
#define ADC_CECR_ECORR13(value)               (ADC_CECR_ECORR13_Msk & ((value) << ADC_CECR_ECORR13_Pos))
#define   ADC_CECR_ECORR13_0_Val              _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR13_1_Val              _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR13_0                    (ADC_CECR_ECORR13_0_Val << ADC_CECR_ECORR13_Pos)     /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR13_1                    (ADC_CECR_ECORR13_1_Val << ADC_CECR_ECORR13_Pos)     /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR14_Pos                  _U_(14)                                              /**< (ADC_CECR) Error Correction Enable for Channel 14 Position */
#define ADC_CECR_ECORR14_Msk                  (_U_(0x1) << ADC_CECR_ECORR14_Pos)                   /**< (ADC_CECR) Error Correction Enable for Channel 14 Mask */
#define ADC_CECR_ECORR14(value)               (ADC_CECR_ECORR14_Msk & ((value) << ADC_CECR_ECORR14_Pos))
#define   ADC_CECR_ECORR14_0_Val              _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR14_1_Val              _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR14_0                    (ADC_CECR_ECORR14_0_Val << ADC_CECR_ECORR14_Pos)     /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR14_1                    (ADC_CECR_ECORR14_1_Val << ADC_CECR_ECORR14_Pos)     /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR15_Pos                  _U_(15)                                              /**< (ADC_CECR) Error Correction Enable for Channel 15 Position */
#define ADC_CECR_ECORR15_Msk                  (_U_(0x1) << ADC_CECR_ECORR15_Pos)                   /**< (ADC_CECR) Error Correction Enable for Channel 15 Mask */
#define ADC_CECR_ECORR15(value)               (ADC_CECR_ECORR15_Msk & ((value) << ADC_CECR_ECORR15_Pos))
#define   ADC_CECR_ECORR15_0_Val              _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR15_1_Val              _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR15_0                    (ADC_CECR_ECORR15_0_Val << ADC_CECR_ECORR15_Pos)     /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR15_1                    (ADC_CECR_ECORR15_1_Val << ADC_CECR_ECORR15_Pos)     /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR30_Pos                  _U_(30)                                              /**< (ADC_CECR) Error Correction Enable for Channel 30 Position */
#define ADC_CECR_ECORR30_Msk                  (_U_(0x1) << ADC_CECR_ECORR30_Pos)                   /**< (ADC_CECR) Error Correction Enable for Channel 30 Mask */
#define ADC_CECR_ECORR30(value)               (ADC_CECR_ECORR30_Msk & ((value) << ADC_CECR_ECORR30_Pos))
#define   ADC_CECR_ECORR30_0_Val              _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR30_1_Val              _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR30_0                    (ADC_CECR_ECORR30_0_Val << ADC_CECR_ECORR30_Pos)     /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR30_1                    (ADC_CECR_ECORR30_1_Val << ADC_CECR_ECORR30_Pos)     /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_ECORR31_Pos                  _U_(31)                                              /**< (ADC_CECR) Error Correction Enable for Channel 31 Position */
#define ADC_CECR_ECORR31_Msk                  (_U_(0x1) << ADC_CECR_ECORR31_Pos)                   /**< (ADC_CECR) Error Correction Enable for Channel 31 Mask */
#define ADC_CECR_ECORR31(value)               (ADC_CECR_ECORR31_Msk & ((value) << ADC_CECR_ECORR31_Pos))
#define   ADC_CECR_ECORR31_0_Val              _U_(0x0)                                             /**< (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR31_1_Val              _U_(0x1)                                             /**< (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR31_0                    (ADC_CECR_ECORR31_0_Val << ADC_CECR_ECORR31_Pos)     /**< (ADC_CECR) Automatic error correction is disabled for channel x. Position  */
#define ADC_CECR_ECORR31_1                    (ADC_CECR_ECORR31_1_Val << ADC_CECR_ECORR31_Pos)     /**< (ADC_CECR) Automatic error correction is enabled for channel x. Position  */
#define ADC_CECR_Msk                          _U_(0xC000FFFF)                                      /**< (ADC_CECR) Register Mask  */

#define ADC_CECR_ECORR_Pos                    _U_(0)                                               /**< (ADC_CECR Position) Error Correction Enable for Channel 3x */
#define ADC_CECR_ECORR_Msk                    (_U_(0x3FFFF) << ADC_CECR_ECORR_Pos)                 /**< (ADC_CECR Mask) ECORR */
#define ADC_CECR_ECORR(value)                 (ADC_CECR_ECORR_Msk & ((value) << ADC_CECR_ECORR_Pos)) 

/* -------- ADC_WPMR : (ADC Offset: 0x118) (R/W 32) Write Protection Mode Register -------- */
#define ADC_WPMR_RESETVALUE                   _U_(0x00)                                            /**<  (ADC_WPMR) Write Protection Mode Register  Reset Value */

#define ADC_WPMR_WPEN_Pos                     _U_(0)                                               /**< (ADC_WPMR) Write Protection Enable Position */
#define ADC_WPMR_WPEN_Msk                     (_U_(0x1) << ADC_WPMR_WPEN_Pos)                      /**< (ADC_WPMR) Write Protection Enable Mask */
#define ADC_WPMR_WPEN(value)                  (ADC_WPMR_WPEN_Msk & ((value) << ADC_WPMR_WPEN_Pos))
#define   ADC_WPMR_WPEN_0_Val                 _U_(0x0)                                             /**< (ADC_WPMR) Disables write protection if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define   ADC_WPMR_WPEN_1_Val                 _U_(0x1)                                             /**< (ADC_WPMR) Enables write protection if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define ADC_WPMR_WPEN_0                       (ADC_WPMR_WPEN_0_Val << ADC_WPMR_WPEN_Pos)           /**< (ADC_WPMR) Disables write protection if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position  */
#define ADC_WPMR_WPEN_1                       (ADC_WPMR_WPEN_1_Val << ADC_WPMR_WPEN_Pos)           /**< (ADC_WPMR) Enables write protection if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position  */
#define ADC_WPMR_WPITEN_Pos                   _U_(1)                                               /**< (ADC_WPMR) Write Protection Interrupt Enable Position */
#define ADC_WPMR_WPITEN_Msk                   (_U_(0x1) << ADC_WPMR_WPITEN_Pos)                    /**< (ADC_WPMR) Write Protection Interrupt Enable Mask */
#define ADC_WPMR_WPITEN(value)                (ADC_WPMR_WPITEN_Msk & ((value) << ADC_WPMR_WPITEN_Pos))
#define   ADC_WPMR_WPITEN_0_Val               _U_(0x0)                                             /**< (ADC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define   ADC_WPMR_WPITEN_1_Val               _U_(0x1)                                             /**< (ADC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define ADC_WPMR_WPITEN_0                     (ADC_WPMR_WPITEN_0_Val << ADC_WPMR_WPITEN_Pos)       /**< (ADC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position  */
#define ADC_WPMR_WPITEN_1                     (ADC_WPMR_WPITEN_1_Val << ADC_WPMR_WPITEN_Pos)       /**< (ADC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position  */
#define ADC_WPMR_WPCREN_Pos                   _U_(2)                                               /**< (ADC_WPMR) Write Protection Control Register Enable Position */
#define ADC_WPMR_WPCREN_Msk                   (_U_(0x1) << ADC_WPMR_WPCREN_Pos)                    /**< (ADC_WPMR) Write Protection Control Register Enable Mask */
#define ADC_WPMR_WPCREN(value)                (ADC_WPMR_WPCREN_Msk & ((value) << ADC_WPMR_WPCREN_Pos))
#define   ADC_WPMR_WPCREN_0_Val               _U_(0x0)                                             /**< (ADC_WPMR) Disables the write protection on control registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define   ADC_WPMR_WPCREN_1_Val               _U_(0x1)                                             /**< (ADC_WPMR) Enables the write protection on control registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define ADC_WPMR_WPCREN_0                     (ADC_WPMR_WPCREN_0_Val << ADC_WPMR_WPCREN_Pos)       /**< (ADC_WPMR) Disables the write protection on control registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position  */
#define ADC_WPMR_WPCREN_1                     (ADC_WPMR_WPCREN_1_Val << ADC_WPMR_WPCREN_Pos)       /**< (ADC_WPMR) Enables the write protection on control registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position  */
#define ADC_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (ADC_WPMR) Write Protection Key Position */
#define ADC_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << ADC_WPMR_WPKEY_Pos)                /**< (ADC_WPMR) Write Protection Key Mask */
#define ADC_WPMR_WPKEY(value)                 (ADC_WPMR_WPKEY_Msk & ((value) << ADC_WPMR_WPKEY_Pos))
#define   ADC_WPMR_WPKEY_PASSWD_Val           _U_(0x414443)                                        /**< (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.  Always reads as 0.  */
#define ADC_WPMR_WPKEY_PASSWD                 (ADC_WPMR_WPKEY_PASSWD_Val << ADC_WPMR_WPKEY_Pos)    /**< (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.  Always reads as 0. Position  */
#define ADC_WPMR_Msk                          _U_(0xFFFFFF07)                                      /**< (ADC_WPMR) Register Mask  */


/* -------- ADC_WPSR : (ADC Offset: 0x11C) ( R/ 32) Write Protection Status Register -------- */
#define ADC_WPSR_RESETVALUE                   _U_(0x00)                                            /**<  (ADC_WPSR) Write Protection Status Register  Reset Value */

#define ADC_WPSR_WPVS_Pos                     _U_(0)                                               /**< (ADC_WPSR) Write Protection Violation Status Position */
#define ADC_WPSR_WPVS_Msk                     (_U_(0x1) << ADC_WPSR_WPVS_Pos)                      /**< (ADC_WPSR) Write Protection Violation Status Mask */
#define ADC_WPSR_WPVS(value)                  (ADC_WPSR_WPVS_Msk & ((value) << ADC_WPSR_WPVS_Pos))
#define   ADC_WPSR_WPVS_0_Val                 _U_(0x0)                                             /**< (ADC_WPSR) No write protection violation has occurred since the last read of ADC_WPSR.  */
#define   ADC_WPSR_WPVS_1_Val                 _U_(0x1)                                             /**< (ADC_WPSR) A write protection violation has occurred since the last read of ADC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into WPVSRC.  */
#define ADC_WPSR_WPVS_0                       (ADC_WPSR_WPVS_0_Val << ADC_WPSR_WPVS_Pos)           /**< (ADC_WPSR) No write protection violation has occurred since the last read of ADC_WPSR. Position  */
#define ADC_WPSR_WPVS_1                       (ADC_WPSR_WPVS_1_Val << ADC_WPSR_WPVS_Pos)           /**< (ADC_WPSR) A write protection violation has occurred since the last read of ADC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into WPVSRC. Position  */
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
#define ADC_EOC_IER_REG_OFST           (0x34)              /**< (ADC_EOC_IER) End Of Conversion Interrupt Enable Register Offset */
#define ADC_EOC_IDR_REG_OFST           (0x38)              /**< (ADC_EOC_IDR) End Of Conversion Interrupt Disable Register Offset */
#define ADC_EOC_IMR_REG_OFST           (0x3C)              /**< (ADC_EOC_IMR) End Of Conversion Interrupt Mask Register Offset */
#define ADC_EOC_ISR_REG_OFST           (0x40)              /**< (ADC_EOC_ISR) End Of Conversion Interrupt Status Register Offset */
#define ADC_TEMPMR_REG_OFST            (0x44)              /**< (ADC_TEMPMR) Temperature Sensor Mode Register Offset */
#define ADC_TEMPCWR_REG_OFST           (0x48)              /**< (ADC_TEMPCWR) Temperature Compare Window Register Offset */
#define ADC_OVER_REG_OFST              (0x4C)              /**< (ADC_OVER) Overrun Status Register Offset */
#define ADC_EMR_REG_OFST               (0x50)              /**< (ADC_EMR) Extended Mode Register Offset */
#define ADC_CWR_REG_OFST               (0x54)              /**< (ADC_CWR) Compare Window Register Offset */
#define ADC_CCR_REG_OFST               (0x5C)              /**< (ADC_CCR) Channel Configuration Register Offset */
#define ADC_CDR_REG_OFST               (0x60)              /**< (ADC_CDR) Channel Data Register x Offset */
#define ADC_CDR0_REG_OFST              (0x60)              /**< (ADC_CDR0) Channel Data Register x Offset */
#define ADC_CDR1_REG_OFST              (0x64)              /**< (ADC_CDR1) Channel Data Register x Offset */
#define ADC_CDR2_REG_OFST              (0x68)              /**< (ADC_CDR2) Channel Data Register x Offset */
#define ADC_CDR3_REG_OFST              (0x6C)              /**< (ADC_CDR3) Channel Data Register x Offset */
#define ADC_CDR4_REG_OFST              (0x70)              /**< (ADC_CDR4) Channel Data Register x Offset */
#define ADC_CDR5_REG_OFST              (0x74)              /**< (ADC_CDR5) Channel Data Register x Offset */
#define ADC_CDR6_REG_OFST              (0x78)              /**< (ADC_CDR6) Channel Data Register x Offset */
#define ADC_CDR7_REG_OFST              (0x7C)              /**< (ADC_CDR7) Channel Data Register x Offset */
#define ADC_CDR8_REG_OFST              (0x80)              /**< (ADC_CDR8) Channel Data Register x Offset */
#define ADC_CDR9_REG_OFST              (0x84)              /**< (ADC_CDR9) Channel Data Register x Offset */
#define ADC_CDR10_REG_OFST             (0x88)              /**< (ADC_CDR10) Channel Data Register x Offset */
#define ADC_CDR11_REG_OFST             (0x8C)              /**< (ADC_CDR11) Channel Data Register x Offset */
#define ADC_CDR12_REG_OFST             (0x90)              /**< (ADC_CDR12) Channel Data Register x Offset */
#define ADC_CDR13_REG_OFST             (0x94)              /**< (ADC_CDR13) Channel Data Register x Offset */
#define ADC_CDR14_REG_OFST             (0x98)              /**< (ADC_CDR14) Channel Data Register x Offset */
#define ADC_CDR15_REG_OFST             (0x9C)              /**< (ADC_CDR15) Channel Data Register x Offset */
#define ADC_CDR16_REG_OFST             (0xA0)              /**< (ADC_CDR16) Channel Data Register x Offset */
#define ADC_CDR17_REG_OFST             (0xA4)              /**< (ADC_CDR17) Channel Data Register x Offset */
#define ADC_CDR18_REG_OFST             (0xA8)              /**< (ADC_CDR18) Channel Data Register x Offset */
#define ADC_CDR19_REG_OFST             (0xAC)              /**< (ADC_CDR19) Channel Data Register x Offset */
#define ADC_CDR20_REG_OFST             (0xB0)              /**< (ADC_CDR20) Channel Data Register x Offset */
#define ADC_CDR21_REG_OFST             (0xB4)              /**< (ADC_CDR21) Channel Data Register x Offset */
#define ADC_CDR22_REG_OFST             (0xB8)              /**< (ADC_CDR22) Channel Data Register x Offset */
#define ADC_CDR23_REG_OFST             (0xBC)              /**< (ADC_CDR23) Channel Data Register x Offset */
#define ADC_CDR24_REG_OFST             (0xC0)              /**< (ADC_CDR24) Channel Data Register x Offset */
#define ADC_CDR25_REG_OFST             (0xC4)              /**< (ADC_CDR25) Channel Data Register x Offset */
#define ADC_CDR26_REG_OFST             (0xC8)              /**< (ADC_CDR26) Channel Data Register x Offset */
#define ADC_CDR27_REG_OFST             (0xCC)              /**< (ADC_CDR27) Channel Data Register x Offset */
#define ADC_CDR28_REG_OFST             (0xD0)              /**< (ADC_CDR28) Channel Data Register x Offset */
#define ADC_CDR29_REG_OFST             (0xD4)              /**< (ADC_CDR29) Channel Data Register x Offset */
#define ADC_CDR30_REG_OFST             (0xD8)              /**< (ADC_CDR30) Channel Data Register x Offset */
#define ADC_CDR31_REG_OFST             (0xDC)              /**< (ADC_CDR31) Channel Data Register x Offset */
#define ADC_ACR_REG_OFST               (0xE0)              /**< (ADC_ACR) Analog Control Register Offset */
#define ADC_FMR_REG_OFST               (0xE4)              /**< (ADC_FMR) FIFO Mode Register Offset */
#define ADC_TRGR_REG_OFST              (0x100)             /**< (ADC_TRGR) Trigger Register Offset */
#define ADC_COSR_REG_OFST              (0x104)             /**< (ADC_COSR) Correction Select Register Offset */
#define ADC_CVR_REG_OFST               (0x108)             /**< (ADC_CVR) Correction Values Register Offset */
#define ADC_CECR_REG_OFST              (0x10C)             /**< (ADC_CECR) Channel Error Correction Register Offset */
#define ADC_WPMR_REG_OFST              (0x118)             /**< (ADC_WPMR) Write Protection Mode Register Offset */
#define ADC_WPSR_REG_OFST              (0x11C)             /**< (ADC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ADC register API structure */
typedef struct
{  /* Analog-to-Digital Converter */
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
  __O   uint32_t                       ADC_EOC_IER;        /**< Offset: 0x34 ( /W  32) End Of Conversion Interrupt Enable Register */
  __O   uint32_t                       ADC_EOC_IDR;        /**< Offset: 0x38 ( /W  32) End Of Conversion Interrupt Disable Register */
  __I   uint32_t                       ADC_EOC_IMR;        /**< Offset: 0x3C (R/   32) End Of Conversion Interrupt Mask Register */
  __I   uint32_t                       ADC_EOC_ISR;        /**< Offset: 0x40 (R/   32) End Of Conversion Interrupt Status Register */
  __IO  uint32_t                       ADC_TEMPMR;         /**< Offset: 0x44 (R/W  32) Temperature Sensor Mode Register */
  __IO  uint32_t                       ADC_TEMPCWR;        /**< Offset: 0x48 (R/W  32) Temperature Compare Window Register */
  __I   uint32_t                       ADC_OVER;           /**< Offset: 0x4C (R/   32) Overrun Status Register */
  __IO  uint32_t                       ADC_EMR;            /**< Offset: 0x50 (R/W  32) Extended Mode Register */
  __IO  uint32_t                       ADC_CWR;            /**< Offset: 0x54 (R/W  32) Compare Window Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       ADC_CCR;            /**< Offset: 0x5C (R/W  32) Channel Configuration Register */
  __I   uint32_t                       ADC_CDR[32];        /**< Offset: 0x60 (R/   32) Channel Data Register x */
  __IO  uint32_t                       ADC_ACR;            /**< Offset: 0xE0 (R/W  32) Analog Control Register */
  __IO  uint32_t                       ADC_FMR;            /**< Offset: 0xE4 (R/W  32) FIFO Mode Register */
  __I   uint8_t                        Reserved3[0x18];
  __IO  uint32_t                       ADC_TRGR;           /**< Offset: 0x100 (R/W  32) Trigger Register */
  __IO  uint32_t                       ADC_COSR;           /**< Offset: 0x104 (R/W  32) Correction Select Register */
  __IO  uint32_t                       ADC_CVR;            /**< Offset: 0x108 (R/W  32) Correction Values Register */
  __IO  uint32_t                       ADC_CECR;           /**< Offset: 0x10C (R/W  32) Channel Error Correction Register */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       ADC_WPMR;           /**< Offset: 0x118 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       ADC_WPSR;           /**< Offset: 0x11C (R/   32) Write Protection Status Register */
} adc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_ADC_COMPONENT_H_ */
