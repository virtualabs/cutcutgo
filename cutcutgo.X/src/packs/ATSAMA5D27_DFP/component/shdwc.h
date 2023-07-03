/*
 * Component description for SHDWC
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
#ifndef _SAMA5D2_SHDWC_COMPONENT_H_
#define _SAMA5D2_SHDWC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SHDWC                                        */
/* ************************************************************************** */

/* -------- SHDW_CR : (SHDWC Offset: 0x00) ( /W 32) Shutdown Control Register -------- */
#define SHDW_CR_SHDW_Pos                      _U_(0)                                               /**< (SHDW_CR) Shutdown Command Position */
#define SHDW_CR_SHDW_Msk                      (_U_(0x1) << SHDW_CR_SHDW_Pos)                       /**< (SHDW_CR) Shutdown Command Mask */
#define SHDW_CR_SHDW(value)                   (SHDW_CR_SHDW_Msk & ((value) << SHDW_CR_SHDW_Pos))  
#define SHDW_CR_KEY_Pos                       _U_(24)                                              /**< (SHDW_CR) Password Position */
#define SHDW_CR_KEY_Msk                       (_U_(0xFF) << SHDW_CR_KEY_Pos)                       /**< (SHDW_CR) Password Mask */
#define SHDW_CR_KEY(value)                    (SHDW_CR_KEY_Msk & ((value) << SHDW_CR_KEY_Pos))    
#define   SHDW_CR_KEY_PASSWD_Val              _U_(0xA5)                                            /**< (SHDW_CR) Writing any other value in this field aborts the write operation.  */
#define SHDW_CR_KEY_PASSWD                    (SHDW_CR_KEY_PASSWD_Val << SHDW_CR_KEY_Pos)          /**< (SHDW_CR) Writing any other value in this field aborts the write operation. Position  */
#define SHDW_CR_Msk                           _U_(0xFF000001)                                      /**< (SHDW_CR) Register Mask  */


/* -------- SHDW_MR : (SHDWC Offset: 0x04) (R/W 32) Shutdown Mode Register -------- */
#define SHDW_MR_RTCWKEN_Pos                   _U_(17)                                              /**< (SHDW_MR) Real-time Clock Wake-up Enable Position */
#define SHDW_MR_RTCWKEN_Msk                   (_U_(0x1) << SHDW_MR_RTCWKEN_Pos)                    /**< (SHDW_MR) Real-time Clock Wake-up Enable Mask */
#define SHDW_MR_RTCWKEN(value)                (SHDW_MR_RTCWKEN_Msk & ((value) << SHDW_MR_RTCWKEN_Pos))
#define SHDW_MR_ACCWKEN_Pos                   _U_(18)                                              /**< (SHDW_MR) Analog Comparator Controller Wake-up Enable Position */
#define SHDW_MR_ACCWKEN_Msk                   (_U_(0x1) << SHDW_MR_ACCWKEN_Pos)                    /**< (SHDW_MR) Analog Comparator Controller Wake-up Enable Mask */
#define SHDW_MR_ACCWKEN(value)                (SHDW_MR_ACCWKEN_Msk & ((value) << SHDW_MR_ACCWKEN_Pos))
#define SHDW_MR_RXLPWKEN_Pos                  _U_(19)                                              /**< (SHDW_MR) Debug Unit Wake-up Enable Position */
#define SHDW_MR_RXLPWKEN_Msk                  (_U_(0x1) << SHDW_MR_RXLPWKEN_Pos)                   /**< (SHDW_MR) Debug Unit Wake-up Enable Mask */
#define SHDW_MR_RXLPWKEN(value)               (SHDW_MR_RXLPWKEN_Msk & ((value) << SHDW_MR_RXLPWKEN_Pos))
#define SHDW_MR_WKUPDBC_Pos                   _U_(24)                                              /**< (SHDW_MR) Wake-up Inputs Debouncer Period Position */
#define SHDW_MR_WKUPDBC_Msk                   (_U_(0x7) << SHDW_MR_WKUPDBC_Pos)                    /**< (SHDW_MR) Wake-up Inputs Debouncer Period Mask */
#define SHDW_MR_WKUPDBC(value)                (SHDW_MR_WKUPDBC_Msk & ((value) << SHDW_MR_WKUPDBC_Pos))
#define   SHDW_MR_WKUPDBC_IMMEDIATE_Val       _U_(0x0)                                             /**< (SHDW_MR) Immediate, no debouncing, detected active at least on one Slow Clock edge  */
#define   SHDW_MR_WKUPDBC_3_SLCK_Val          _U_(0x1)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 3 SLCK periods  */
#define   SHDW_MR_WKUPDBC_32_SLCK_Val         _U_(0x2)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 32 SLCK periods  */
#define   SHDW_MR_WKUPDBC_512_SLCK_Val        _U_(0x3)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 512 SLCK periods  */
#define   SHDW_MR_WKUPDBC_4096_SLCK_Val       _U_(0x4)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 4,096 SLCK periods  */
#define   SHDW_MR_WKUPDBC_32768_SLCK_Val      _U_(0x5)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 32,768 SLCK periods  */
#define SHDW_MR_WKUPDBC_IMMEDIATE             (SHDW_MR_WKUPDBC_IMMEDIATE_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) Immediate, no debouncing, detected active at least on one Slow Clock edge Position  */
#define SHDW_MR_WKUPDBC_3_SLCK                (SHDW_MR_WKUPDBC_3_SLCK_Val << SHDW_MR_WKUPDBC_Pos)  /**< (SHDW_MR) PIOBUx shall be in its active state for at least 3 SLCK periods Position  */
#define SHDW_MR_WKUPDBC_32_SLCK               (SHDW_MR_WKUPDBC_32_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) PIOBUx shall be in its active state for at least 32 SLCK periods Position  */
#define SHDW_MR_WKUPDBC_512_SLCK              (SHDW_MR_WKUPDBC_512_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) PIOBUx shall be in its active state for at least 512 SLCK periods Position  */
#define SHDW_MR_WKUPDBC_4096_SLCK             (SHDW_MR_WKUPDBC_4096_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) PIOBUx shall be in its active state for at least 4,096 SLCK periods Position  */
#define SHDW_MR_WKUPDBC_32768_SLCK            (SHDW_MR_WKUPDBC_32768_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) PIOBUx shall be in its active state for at least 32,768 SLCK periods Position  */
#define SHDW_MR_Msk                           _U_(0x070E0000)                                      /**< (SHDW_MR) Register Mask  */


/* -------- SHDW_SR : (SHDWC Offset: 0x08) ( R/ 32) Shutdown Status Register -------- */
#define SHDW_SR_WKUPS_Pos                     _U_(0)                                               /**< (SHDW_SR) PIOBU, WKUP Wake-up Status Position */
#define SHDW_SR_WKUPS_Msk                     (_U_(0x1) << SHDW_SR_WKUPS_Pos)                      /**< (SHDW_SR) PIOBU, WKUP Wake-up Status Mask */
#define SHDW_SR_WKUPS(value)                  (SHDW_SR_WKUPS_Msk & ((value) << SHDW_SR_WKUPS_Pos))
#define   SHDW_SR_WKUPS_NO_Val                _U_(0x0)                                             /**< (SHDW_SR) No wake-up due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_WKUPS_PRESENT_Val           _U_(0x1)                                             /**< (SHDW_SR) At least one wake-up due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR.  */
#define SHDW_SR_WKUPS_NO                      (SHDW_SR_WKUPS_NO_Val << SHDW_SR_WKUPS_Pos)          /**< (SHDW_SR) No wake-up due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_WKUPS_PRESENT                 (SHDW_SR_WKUPS_PRESENT_Val << SHDW_SR_WKUPS_Pos)     /**< (SHDW_SR) At least one wake-up due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_RTCWK_Pos                     _U_(5)                                               /**< (SHDW_SR)  Position */
#define SHDW_SR_RTCWK_Msk                     (_U_(0x1) << SHDW_SR_RTCWK_Pos)                      /**< (SHDW_SR)  Mask */
#define SHDW_SR_RTCWK(value)                  (SHDW_SR_RTCWK_Msk & ((value) << SHDW_SR_RTCWK_Pos))
#define SHDW_SR_ACCWK_Pos                     _U_(6)                                               /**< (SHDW_SR) Analog Comparator Controller Wake-up Position */
#define SHDW_SR_ACCWK_Msk                     (_U_(0x1) << SHDW_SR_ACCWK_Pos)                      /**< (SHDW_SR) Analog Comparator Controller Wake-up Mask */
#define SHDW_SR_ACCWK(value)                  (SHDW_SR_ACCWK_Msk & ((value) << SHDW_SR_ACCWK_Pos))
#define SHDW_SR_RXLPWK_Pos                    _U_(7)                                               /**< (SHDW_SR) Debug Unit Wake-up Position */
#define SHDW_SR_RXLPWK_Msk                    (_U_(0x1) << SHDW_SR_RXLPWK_Pos)                     /**< (SHDW_SR) Debug Unit Wake-up Mask */
#define SHDW_SR_RXLPWK(value)                 (SHDW_SR_RXLPWK_Msk & ((value) << SHDW_SR_RXLPWK_Pos))
#define SHDW_SR_WKUPIS0_Pos                   _U_(16)                                              /**< (SHDW_SR) Wake-up 0 Input Status Position */
#define SHDW_SR_WKUPIS0_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS0_Pos)                    /**< (SHDW_SR) Wake-up 0 Input Status Mask */
#define SHDW_SR_WKUPIS0(value)                (SHDW_SR_WKUPIS0_Msk & ((value) << SHDW_SR_WKUPIS0_Pos))
#define   SHDW_SR_WKUPIS0_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS0_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS0_DISABLE               (SHDW_SR_WKUPIS0_DISABLE_Val << SHDW_SR_WKUPIS0_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS0_ENABLE                (SHDW_SR_WKUPIS0_ENABLE_Val << SHDW_SR_WKUPIS0_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS1_Pos                   _U_(17)                                              /**< (SHDW_SR) Wake-up 1 Input Status Position */
#define SHDW_SR_WKUPIS1_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS1_Pos)                    /**< (SHDW_SR) Wake-up 1 Input Status Mask */
#define SHDW_SR_WKUPIS1(value)                (SHDW_SR_WKUPIS1_Msk & ((value) << SHDW_SR_WKUPIS1_Pos))
#define   SHDW_SR_WKUPIS1_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS1_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS1_DISABLE               (SHDW_SR_WKUPIS1_DISABLE_Val << SHDW_SR_WKUPIS1_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS1_ENABLE                (SHDW_SR_WKUPIS1_ENABLE_Val << SHDW_SR_WKUPIS1_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS2_Pos                   _U_(18)                                              /**< (SHDW_SR) Wake-up 2 Input Status Position */
#define SHDW_SR_WKUPIS2_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS2_Pos)                    /**< (SHDW_SR) Wake-up 2 Input Status Mask */
#define SHDW_SR_WKUPIS2(value)                (SHDW_SR_WKUPIS2_Msk & ((value) << SHDW_SR_WKUPIS2_Pos))
#define   SHDW_SR_WKUPIS2_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS2_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS2_DISABLE               (SHDW_SR_WKUPIS2_DISABLE_Val << SHDW_SR_WKUPIS2_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS2_ENABLE                (SHDW_SR_WKUPIS2_ENABLE_Val << SHDW_SR_WKUPIS2_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS3_Pos                   _U_(19)                                              /**< (SHDW_SR) Wake-up 3 Input Status Position */
#define SHDW_SR_WKUPIS3_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS3_Pos)                    /**< (SHDW_SR) Wake-up 3 Input Status Mask */
#define SHDW_SR_WKUPIS3(value)                (SHDW_SR_WKUPIS3_Msk & ((value) << SHDW_SR_WKUPIS3_Pos))
#define   SHDW_SR_WKUPIS3_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS3_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS3_DISABLE               (SHDW_SR_WKUPIS3_DISABLE_Val << SHDW_SR_WKUPIS3_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS3_ENABLE                (SHDW_SR_WKUPIS3_ENABLE_Val << SHDW_SR_WKUPIS3_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS4_Pos                   _U_(20)                                              /**< (SHDW_SR) Wake-up 4 Input Status Position */
#define SHDW_SR_WKUPIS4_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS4_Pos)                    /**< (SHDW_SR) Wake-up 4 Input Status Mask */
#define SHDW_SR_WKUPIS4(value)                (SHDW_SR_WKUPIS4_Msk & ((value) << SHDW_SR_WKUPIS4_Pos))
#define   SHDW_SR_WKUPIS4_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS4_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS4_DISABLE               (SHDW_SR_WKUPIS4_DISABLE_Val << SHDW_SR_WKUPIS4_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS4_ENABLE                (SHDW_SR_WKUPIS4_ENABLE_Val << SHDW_SR_WKUPIS4_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS5_Pos                   _U_(21)                                              /**< (SHDW_SR) Wake-up 5 Input Status Position */
#define SHDW_SR_WKUPIS5_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS5_Pos)                    /**< (SHDW_SR) Wake-up 5 Input Status Mask */
#define SHDW_SR_WKUPIS5(value)                (SHDW_SR_WKUPIS5_Msk & ((value) << SHDW_SR_WKUPIS5_Pos))
#define   SHDW_SR_WKUPIS5_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS5_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS5_DISABLE               (SHDW_SR_WKUPIS5_DISABLE_Val << SHDW_SR_WKUPIS5_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS5_ENABLE                (SHDW_SR_WKUPIS5_ENABLE_Val << SHDW_SR_WKUPIS5_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS6_Pos                   _U_(22)                                              /**< (SHDW_SR) Wake-up 6 Input Status Position */
#define SHDW_SR_WKUPIS6_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS6_Pos)                    /**< (SHDW_SR) Wake-up 6 Input Status Mask */
#define SHDW_SR_WKUPIS6(value)                (SHDW_SR_WKUPIS6_Msk & ((value) << SHDW_SR_WKUPIS6_Pos))
#define   SHDW_SR_WKUPIS6_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS6_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS6_DISABLE               (SHDW_SR_WKUPIS6_DISABLE_Val << SHDW_SR_WKUPIS6_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS6_ENABLE                (SHDW_SR_WKUPIS6_ENABLE_Val << SHDW_SR_WKUPIS6_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS7_Pos                   _U_(23)                                              /**< (SHDW_SR) Wake-up 7 Input Status Position */
#define SHDW_SR_WKUPIS7_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS7_Pos)                    /**< (SHDW_SR) Wake-up 7 Input Status Mask */
#define SHDW_SR_WKUPIS7(value)                (SHDW_SR_WKUPIS7_Msk & ((value) << SHDW_SR_WKUPIS7_Pos))
#define   SHDW_SR_WKUPIS7_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS7_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS7_DISABLE               (SHDW_SR_WKUPIS7_DISABLE_Val << SHDW_SR_WKUPIS7_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS7_ENABLE                (SHDW_SR_WKUPIS7_ENABLE_Val << SHDW_SR_WKUPIS7_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS8_Pos                   _U_(24)                                              /**< (SHDW_SR) Wake-up 8 Input Status Position */
#define SHDW_SR_WKUPIS8_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS8_Pos)                    /**< (SHDW_SR) Wake-up 8 Input Status Mask */
#define SHDW_SR_WKUPIS8(value)                (SHDW_SR_WKUPIS8_Msk & ((value) << SHDW_SR_WKUPIS8_Pos))
#define   SHDW_SR_WKUPIS8_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS8_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS8_DISABLE               (SHDW_SR_WKUPIS8_DISABLE_Val << SHDW_SR_WKUPIS8_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS8_ENABLE                (SHDW_SR_WKUPIS8_ENABLE_Val << SHDW_SR_WKUPIS8_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS9_Pos                   _U_(25)                                              /**< (SHDW_SR) Wake-up 9 Input Status Position */
#define SHDW_SR_WKUPIS9_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS9_Pos)                    /**< (SHDW_SR) Wake-up 9 Input Status Mask */
#define SHDW_SR_WKUPIS9(value)                (SHDW_SR_WKUPIS9_Msk & ((value) << SHDW_SR_WKUPIS9_Pos))
#define   SHDW_SR_WKUPIS9_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS9_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS9_DISABLE               (SHDW_SR_WKUPIS9_DISABLE_Val << SHDW_SR_WKUPIS9_Pos) /**< (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS9_ENABLE                (SHDW_SR_WKUPIS9_ENABLE_Val << SHDW_SR_WKUPIS9_Pos)  /**< (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_Msk                           _U_(0x03FF00E1)                                      /**< (SHDW_SR) Register Mask  */

#define SHDW_SR_WKUPIS_Pos                    _U_(16)                                              /**< (SHDW_SR Position) Wake-up 9 Input Status */
#define SHDW_SR_WKUPIS_Msk                    (_U_(0x3FF) << SHDW_SR_WKUPIS_Pos)                   /**< (SHDW_SR Mask) WKUPIS */
#define SHDW_SR_WKUPIS(value)                 (SHDW_SR_WKUPIS_Msk & ((value) << SHDW_SR_WKUPIS_Pos)) 

/* -------- SHDW_WUIR : (SHDWC Offset: 0x0C) (R/W 32) Shutdown Wake-up Inputs Register -------- */
#define SHDW_WUIR_WKUPEN0_Pos                 _U_(0)                                               /**< (SHDW_WUIR) Wake-up 0 Input Enable Position */
#define SHDW_WUIR_WKUPEN0_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN0_Pos)                  /**< (SHDW_WUIR) Wake-up 0 Input Enable Mask */
#define SHDW_WUIR_WKUPEN0(value)              (SHDW_WUIR_WKUPEN0_Msk & ((value) << SHDW_WUIR_WKUPEN0_Pos))
#define   SHDW_WUIR_WKUPEN0_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN0_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN0_DISABLE             (SHDW_WUIR_WKUPEN0_DISABLE_Val << SHDW_WUIR_WKUPEN0_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN0_ENABLE              (SHDW_WUIR_WKUPEN0_ENABLE_Val << SHDW_WUIR_WKUPEN0_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN1_Pos                 _U_(1)                                               /**< (SHDW_WUIR) Wake-up 1 Input Enable Position */
#define SHDW_WUIR_WKUPEN1_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN1_Pos)                  /**< (SHDW_WUIR) Wake-up 1 Input Enable Mask */
#define SHDW_WUIR_WKUPEN1(value)              (SHDW_WUIR_WKUPEN1_Msk & ((value) << SHDW_WUIR_WKUPEN1_Pos))
#define   SHDW_WUIR_WKUPEN1_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN1_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN1_DISABLE             (SHDW_WUIR_WKUPEN1_DISABLE_Val << SHDW_WUIR_WKUPEN1_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN1_ENABLE              (SHDW_WUIR_WKUPEN1_ENABLE_Val << SHDW_WUIR_WKUPEN1_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN2_Pos                 _U_(2)                                               /**< (SHDW_WUIR) Wake-up 2 Input Enable Position */
#define SHDW_WUIR_WKUPEN2_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN2_Pos)                  /**< (SHDW_WUIR) Wake-up 2 Input Enable Mask */
#define SHDW_WUIR_WKUPEN2(value)              (SHDW_WUIR_WKUPEN2_Msk & ((value) << SHDW_WUIR_WKUPEN2_Pos))
#define   SHDW_WUIR_WKUPEN2_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN2_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN2_DISABLE             (SHDW_WUIR_WKUPEN2_DISABLE_Val << SHDW_WUIR_WKUPEN2_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN2_ENABLE              (SHDW_WUIR_WKUPEN2_ENABLE_Val << SHDW_WUIR_WKUPEN2_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN3_Pos                 _U_(3)                                               /**< (SHDW_WUIR) Wake-up 3 Input Enable Position */
#define SHDW_WUIR_WKUPEN3_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN3_Pos)                  /**< (SHDW_WUIR) Wake-up 3 Input Enable Mask */
#define SHDW_WUIR_WKUPEN3(value)              (SHDW_WUIR_WKUPEN3_Msk & ((value) << SHDW_WUIR_WKUPEN3_Pos))
#define   SHDW_WUIR_WKUPEN3_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN3_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN3_DISABLE             (SHDW_WUIR_WKUPEN3_DISABLE_Val << SHDW_WUIR_WKUPEN3_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN3_ENABLE              (SHDW_WUIR_WKUPEN3_ENABLE_Val << SHDW_WUIR_WKUPEN3_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN4_Pos                 _U_(4)                                               /**< (SHDW_WUIR) Wake-up 4 Input Enable Position */
#define SHDW_WUIR_WKUPEN4_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN4_Pos)                  /**< (SHDW_WUIR) Wake-up 4 Input Enable Mask */
#define SHDW_WUIR_WKUPEN4(value)              (SHDW_WUIR_WKUPEN4_Msk & ((value) << SHDW_WUIR_WKUPEN4_Pos))
#define   SHDW_WUIR_WKUPEN4_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN4_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN4_DISABLE             (SHDW_WUIR_WKUPEN4_DISABLE_Val << SHDW_WUIR_WKUPEN4_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN4_ENABLE              (SHDW_WUIR_WKUPEN4_ENABLE_Val << SHDW_WUIR_WKUPEN4_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN5_Pos                 _U_(5)                                               /**< (SHDW_WUIR) Wake-up 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN5_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN5_Pos)                  /**< (SHDW_WUIR) Wake-up 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN5(value)              (SHDW_WUIR_WKUPEN5_Msk & ((value) << SHDW_WUIR_WKUPEN5_Pos))
#define   SHDW_WUIR_WKUPEN5_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN5_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN5_DISABLE             (SHDW_WUIR_WKUPEN5_DISABLE_Val << SHDW_WUIR_WKUPEN5_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN5_ENABLE              (SHDW_WUIR_WKUPEN5_ENABLE_Val << SHDW_WUIR_WKUPEN5_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN6_Pos                 _U_(6)                                               /**< (SHDW_WUIR) Wake-up 6 Input Enable Position */
#define SHDW_WUIR_WKUPEN6_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN6_Pos)                  /**< (SHDW_WUIR) Wake-up 6 Input Enable Mask */
#define SHDW_WUIR_WKUPEN6(value)              (SHDW_WUIR_WKUPEN6_Msk & ((value) << SHDW_WUIR_WKUPEN6_Pos))
#define   SHDW_WUIR_WKUPEN6_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN6_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN6_DISABLE             (SHDW_WUIR_WKUPEN6_DISABLE_Val << SHDW_WUIR_WKUPEN6_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN6_ENABLE              (SHDW_WUIR_WKUPEN6_ENABLE_Val << SHDW_WUIR_WKUPEN6_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN7_Pos                 _U_(7)                                               /**< (SHDW_WUIR) Wake-up 7 Input Enable Position */
#define SHDW_WUIR_WKUPEN7_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN7_Pos)                  /**< (SHDW_WUIR) Wake-up 7 Input Enable Mask */
#define SHDW_WUIR_WKUPEN7(value)              (SHDW_WUIR_WKUPEN7_Msk & ((value) << SHDW_WUIR_WKUPEN7_Pos))
#define   SHDW_WUIR_WKUPEN7_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN7_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN7_DISABLE             (SHDW_WUIR_WKUPEN7_DISABLE_Val << SHDW_WUIR_WKUPEN7_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN7_ENABLE              (SHDW_WUIR_WKUPEN7_ENABLE_Val << SHDW_WUIR_WKUPEN7_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN8_Pos                 _U_(8)                                               /**< (SHDW_WUIR) Wake-up 8 Input Enable Position */
#define SHDW_WUIR_WKUPEN8_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN8_Pos)                  /**< (SHDW_WUIR) Wake-up 8 Input Enable Mask */
#define SHDW_WUIR_WKUPEN8(value)              (SHDW_WUIR_WKUPEN8_Msk & ((value) << SHDW_WUIR_WKUPEN8_Pos))
#define   SHDW_WUIR_WKUPEN8_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN8_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN8_DISABLE             (SHDW_WUIR_WKUPEN8_DISABLE_Val << SHDW_WUIR_WKUPEN8_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN8_ENABLE              (SHDW_WUIR_WKUPEN8_ENABLE_Val << SHDW_WUIR_WKUPEN8_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN9_Pos                 _U_(9)                                               /**< (SHDW_WUIR) Wake-up 9 Input Enable Position */
#define SHDW_WUIR_WKUPEN9_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN9_Pos)                  /**< (SHDW_WUIR) Wake-up 9 Input Enable Mask */
#define SHDW_WUIR_WKUPEN9(value)              (SHDW_WUIR_WKUPEN9_Msk & ((value) << SHDW_WUIR_WKUPEN9_Pos))
#define   SHDW_WUIR_WKUPEN9_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN9_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN9_DISABLE             (SHDW_WUIR_WKUPEN9_DISABLE_Val << SHDW_WUIR_WKUPEN9_Pos) /**< (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN9_ENABLE              (SHDW_WUIR_WKUPEN9_ENABLE_Val << SHDW_WUIR_WKUPEN9_Pos) /**< (SHDW_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT0_Pos                  _U_(16)                                              /**< (SHDW_WUIR) Wake-up 0 Input Type Position */
#define SHDW_WUIR_WKUPT0_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT0_Pos)                   /**< (SHDW_WUIR) Wake-up 0 Input Type Mask */
#define SHDW_WUIR_WKUPT0(value)               (SHDW_WUIR_WKUPT0_Msk & ((value) << SHDW_WUIR_WKUPT0_Pos))
#define   SHDW_WUIR_WKUPT0_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT0_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT0_LOW                  (SHDW_WUIR_WKUPT0_LOW_Val << SHDW_WUIR_WKUPT0_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT0_HIGH                 (SHDW_WUIR_WKUPT0_HIGH_Val << SHDW_WUIR_WKUPT0_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT1_Pos                  _U_(17)                                              /**< (SHDW_WUIR) Wake-up 1 Input Type Position */
#define SHDW_WUIR_WKUPT1_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT1_Pos)                   /**< (SHDW_WUIR) Wake-up 1 Input Type Mask */
#define SHDW_WUIR_WKUPT1(value)               (SHDW_WUIR_WKUPT1_Msk & ((value) << SHDW_WUIR_WKUPT1_Pos))
#define   SHDW_WUIR_WKUPT1_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT1_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT1_LOW                  (SHDW_WUIR_WKUPT1_LOW_Val << SHDW_WUIR_WKUPT1_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT1_HIGH                 (SHDW_WUIR_WKUPT1_HIGH_Val << SHDW_WUIR_WKUPT1_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT2_Pos                  _U_(18)                                              /**< (SHDW_WUIR) Wake-up 2 Input Type Position */
#define SHDW_WUIR_WKUPT2_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT2_Pos)                   /**< (SHDW_WUIR) Wake-up 2 Input Type Mask */
#define SHDW_WUIR_WKUPT2(value)               (SHDW_WUIR_WKUPT2_Msk & ((value) << SHDW_WUIR_WKUPT2_Pos))
#define   SHDW_WUIR_WKUPT2_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT2_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT2_LOW                  (SHDW_WUIR_WKUPT2_LOW_Val << SHDW_WUIR_WKUPT2_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT2_HIGH                 (SHDW_WUIR_WKUPT2_HIGH_Val << SHDW_WUIR_WKUPT2_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT3_Pos                  _U_(19)                                              /**< (SHDW_WUIR) Wake-up 3 Input Type Position */
#define SHDW_WUIR_WKUPT3_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT3_Pos)                   /**< (SHDW_WUIR) Wake-up 3 Input Type Mask */
#define SHDW_WUIR_WKUPT3(value)               (SHDW_WUIR_WKUPT3_Msk & ((value) << SHDW_WUIR_WKUPT3_Pos))
#define   SHDW_WUIR_WKUPT3_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT3_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT3_LOW                  (SHDW_WUIR_WKUPT3_LOW_Val << SHDW_WUIR_WKUPT3_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT3_HIGH                 (SHDW_WUIR_WKUPT3_HIGH_Val << SHDW_WUIR_WKUPT3_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT4_Pos                  _U_(20)                                              /**< (SHDW_WUIR) Wake-up 4 Input Type Position */
#define SHDW_WUIR_WKUPT4_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT4_Pos)                   /**< (SHDW_WUIR) Wake-up 4 Input Type Mask */
#define SHDW_WUIR_WKUPT4(value)               (SHDW_WUIR_WKUPT4_Msk & ((value) << SHDW_WUIR_WKUPT4_Pos))
#define   SHDW_WUIR_WKUPT4_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT4_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT4_LOW                  (SHDW_WUIR_WKUPT4_LOW_Val << SHDW_WUIR_WKUPT4_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT4_HIGH                 (SHDW_WUIR_WKUPT4_HIGH_Val << SHDW_WUIR_WKUPT4_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT5_Pos                  _U_(21)                                              /**< (SHDW_WUIR) Wake-up 5 Input Type Position */
#define SHDW_WUIR_WKUPT5_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT5_Pos)                   /**< (SHDW_WUIR) Wake-up 5 Input Type Mask */
#define SHDW_WUIR_WKUPT5(value)               (SHDW_WUIR_WKUPT5_Msk & ((value) << SHDW_WUIR_WKUPT5_Pos))
#define   SHDW_WUIR_WKUPT5_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT5_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT5_LOW                  (SHDW_WUIR_WKUPT5_LOW_Val << SHDW_WUIR_WKUPT5_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT5_HIGH                 (SHDW_WUIR_WKUPT5_HIGH_Val << SHDW_WUIR_WKUPT5_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT6_Pos                  _U_(22)                                              /**< (SHDW_WUIR) Wake-up 6 Input Type Position */
#define SHDW_WUIR_WKUPT6_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT6_Pos)                   /**< (SHDW_WUIR) Wake-up 6 Input Type Mask */
#define SHDW_WUIR_WKUPT6(value)               (SHDW_WUIR_WKUPT6_Msk & ((value) << SHDW_WUIR_WKUPT6_Pos))
#define   SHDW_WUIR_WKUPT6_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT6_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT6_LOW                  (SHDW_WUIR_WKUPT6_LOW_Val << SHDW_WUIR_WKUPT6_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT6_HIGH                 (SHDW_WUIR_WKUPT6_HIGH_Val << SHDW_WUIR_WKUPT6_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT7_Pos                  _U_(23)                                              /**< (SHDW_WUIR) Wake-up 7 Input Type Position */
#define SHDW_WUIR_WKUPT7_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT7_Pos)                   /**< (SHDW_WUIR) Wake-up 7 Input Type Mask */
#define SHDW_WUIR_WKUPT7(value)               (SHDW_WUIR_WKUPT7_Msk & ((value) << SHDW_WUIR_WKUPT7_Pos))
#define   SHDW_WUIR_WKUPT7_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT7_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT7_LOW                  (SHDW_WUIR_WKUPT7_LOW_Val << SHDW_WUIR_WKUPT7_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT7_HIGH                 (SHDW_WUIR_WKUPT7_HIGH_Val << SHDW_WUIR_WKUPT7_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT8_Pos                  _U_(24)                                              /**< (SHDW_WUIR) Wake-up 8 Input Type Position */
#define SHDW_WUIR_WKUPT8_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT8_Pos)                   /**< (SHDW_WUIR) Wake-up 8 Input Type Mask */
#define SHDW_WUIR_WKUPT8(value)               (SHDW_WUIR_WKUPT8_Msk & ((value) << SHDW_WUIR_WKUPT8_Pos))
#define   SHDW_WUIR_WKUPT8_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT8_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT8_LOW                  (SHDW_WUIR_WKUPT8_LOW_Val << SHDW_WUIR_WKUPT8_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT8_HIGH                 (SHDW_WUIR_WKUPT8_HIGH_Val << SHDW_WUIR_WKUPT8_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT9_Pos                  _U_(25)                                              /**< (SHDW_WUIR) Wake-up 9 Input Type Position */
#define SHDW_WUIR_WKUPT9_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT9_Pos)                   /**< (SHDW_WUIR) Wake-up 9 Input Type Mask */
#define SHDW_WUIR_WKUPT9(value)               (SHDW_WUIR_WKUPT9_Msk & ((value) << SHDW_WUIR_WKUPT9_Pos))
#define   SHDW_WUIR_WKUPT9_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT9_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT9_LOW                  (SHDW_WUIR_WKUPT9_LOW_Val << SHDW_WUIR_WKUPT9_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT9_HIGH                 (SHDW_WUIR_WKUPT9_HIGH_Val << SHDW_WUIR_WKUPT9_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level, for a period defined by WKUPDBC, on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SHDW_WUIR_Msk                         _U_(0x03FF03FF)                                      /**< (SHDW_WUIR) Register Mask  */

#define SHDW_WUIR_WKUPEN_Pos                  _U_(0)                                               /**< (SHDW_WUIR Position) Wake-up x Input Enable */
#define SHDW_WUIR_WKUPEN_Msk                  (_U_(0x3FF) << SHDW_WUIR_WKUPEN_Pos)                 /**< (SHDW_WUIR Mask) WKUPEN */
#define SHDW_WUIR_WKUPEN(value)               (SHDW_WUIR_WKUPEN_Msk & ((value) << SHDW_WUIR_WKUPEN_Pos)) 
#define SHDW_WUIR_WKUPT_Pos                   _U_(16)                                              /**< (SHDW_WUIR Position) Wake-up 9 Input Type */
#define SHDW_WUIR_WKUPT_Msk                   (_U_(0x3FF) << SHDW_WUIR_WKUPT_Pos)                  /**< (SHDW_WUIR Mask) WKUPT */
#define SHDW_WUIR_WKUPT(value)                (SHDW_WUIR_WKUPT_Msk & ((value) << SHDW_WUIR_WKUPT_Pos)) 

/** \brief SHDWC register offsets definitions */
#define SHDW_CR_REG_OFST               (0x00)              /**< (SHDW_CR) Shutdown Control Register Offset */
#define SHDW_MR_REG_OFST               (0x04)              /**< (SHDW_MR) Shutdown Mode Register Offset */
#define SHDW_SR_REG_OFST               (0x08)              /**< (SHDW_SR) Shutdown Status Register Offset */
#define SHDW_WUIR_REG_OFST             (0x0C)              /**< (SHDW_WUIR) Shutdown Wake-up Inputs Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SHDWC register API structure */
typedef struct
{
  __O   uint32_t                       SHDW_CR;            /**< Offset: 0x00 ( /W  32) Shutdown Control Register */
  __IO  uint32_t                       SHDW_MR;            /**< Offset: 0x04 (R/W  32) Shutdown Mode Register */
  __I   uint32_t                       SHDW_SR;            /**< Offset: 0x08 (R/   32) Shutdown Status Register */
  __IO  uint32_t                       SHDW_WUIR;          /**< Offset: 0x0C (R/W  32) Shutdown Wake-up Inputs Register */
} shdwc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_SHDWC_COMPONENT_H_ */
