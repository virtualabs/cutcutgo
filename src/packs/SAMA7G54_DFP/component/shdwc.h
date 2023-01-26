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

/* file generated from device description version 2021-07-26T12:51:16Z */
#ifndef _SAMA7G_SHDWC_COMPONENT_H_
#define _SAMA7G_SHDWC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SHDWC                                        */
/* ************************************************************************** */

/* -------- SHDW_CR : (SHDWC Offset: 0x00) ( /W 32) Control Register -------- */
#define SHDW_CR_SHDW_Pos                      _U_(0)                                               /**< (SHDW_CR) Shutdown Command Position */
#define SHDW_CR_SHDW_Msk                      (_U_(0x1) << SHDW_CR_SHDW_Pos)                       /**< (SHDW_CR) Shutdown Command Mask */
#define SHDW_CR_SHDW(value)                   (SHDW_CR_SHDW_Msk & ((value) << SHDW_CR_SHDW_Pos))  
#define   SHDW_CR_SHDW_0_Val                  _U_(0x0)                                             /**< (SHDW_CR) No effect.  */
#define   SHDW_CR_SHDW_1_Val                  _U_(0x1)                                             /**< (SHDW_CR) If KEY value is correct, asserts the SHDN pin.  */
#define SHDW_CR_SHDW_0                        (SHDW_CR_SHDW_0_Val << SHDW_CR_SHDW_Pos)             /**< (SHDW_CR) No effect. Position  */
#define SHDW_CR_SHDW_1                        (SHDW_CR_SHDW_1_Val << SHDW_CR_SHDW_Pos)             /**< (SHDW_CR) If KEY value is correct, asserts the SHDN pin. Position  */
#define SHDW_CR_LPMEN_Pos                     _U_(21)                                              /**< (SHDW_CR) LPM Pad Enable Position */
#define SHDW_CR_LPMEN_Msk                     (_U_(0x1) << SHDW_CR_LPMEN_Pos)                      /**< (SHDW_CR) LPM Pad Enable Mask */
#define SHDW_CR_LPMEN(value)                  (SHDW_CR_LPMEN_Msk & ((value) << SHDW_CR_LPMEN_Pos))
#define   SHDW_CR_LPMEN_0_Val                 _U_(0x0)                                             /**< (SHDW_CR) No effect.  */
#define   SHDW_CR_LPMEN_1_Val                 _U_(0x1)                                             /**< (SHDW_CR) The LPM pad is set high (external regulator is set in special powering state).  */
#define SHDW_CR_LPMEN_0                       (SHDW_CR_LPMEN_0_Val << SHDW_CR_LPMEN_Pos)           /**< (SHDW_CR) No effect. Position  */
#define SHDW_CR_LPMEN_1                       (SHDW_CR_LPMEN_1_Val << SHDW_CR_LPMEN_Pos)           /**< (SHDW_CR) The LPM pad is set high (external regulator is set in special powering state). Position  */
#define SHDW_CR_LPMDIS_Pos                    _U_(22)                                              /**< (SHDW_CR) LPM Pad Disable Position */
#define SHDW_CR_LPMDIS_Msk                    (_U_(0x1) << SHDW_CR_LPMDIS_Pos)                     /**< (SHDW_CR) LPM Pad Disable Mask */
#define SHDW_CR_LPMDIS(value)                 (SHDW_CR_LPMDIS_Msk & ((value) << SHDW_CR_LPMDIS_Pos))
#define   SHDW_CR_LPMDIS_0_Val                _U_(0x0)                                             /**< (SHDW_CR) No effect.  */
#define   SHDW_CR_LPMDIS_1_Val                _U_(0x1)                                             /**< (SHDW_CR) The LPM pad is set low (external regulator is set in standard powering state).  */
#define SHDW_CR_LPMDIS_0                      (SHDW_CR_LPMDIS_0_Val << SHDW_CR_LPMDIS_Pos)         /**< (SHDW_CR) No effect. Position  */
#define SHDW_CR_LPMDIS_1                      (SHDW_CR_LPMDIS_1_Val << SHDW_CR_LPMDIS_Pos)         /**< (SHDW_CR) The LPM pad is set low (external regulator is set in standard powering state). Position  */
#define SHDW_CR_KEY_Pos                       _U_(24)                                              /**< (SHDW_CR) Password Position */
#define SHDW_CR_KEY_Msk                       (_U_(0xFF) << SHDW_CR_KEY_Pos)                       /**< (SHDW_CR) Password Mask */
#define SHDW_CR_KEY(value)                    (SHDW_CR_KEY_Msk & ((value) << SHDW_CR_KEY_Pos))    
#define   SHDW_CR_KEY_PASSWD_Val              _U_(0xA5)                                            /**< (SHDW_CR) Writing any other value in this field aborts the write operation.  */
#define SHDW_CR_KEY_PASSWD                    (SHDW_CR_KEY_PASSWD_Val << SHDW_CR_KEY_Pos)          /**< (SHDW_CR) Writing any other value in this field aborts the write operation. Position  */
#define SHDW_CR_Msk                           _U_(0xFF600001)                                      /**< (SHDW_CR) Register Mask  */


/* -------- SHDW_MR : (SHDWC Offset: 0x04) (R/W 32) Mode Register -------- */
#define SHDW_MR_RESETVALUE                    _U_(0x00)                                            /**<  (SHDW_MR) Mode Register  Reset Value */

#define SHDW_MR_LPDBCEN0_Pos                  _U_(0)                                               /**< (SHDW_MR) Low-Power Debouncer Enable WKUPx Position */
#define SHDW_MR_LPDBCEN0_Msk                  (_U_(0x1) << SHDW_MR_LPDBCEN0_Pos)                   /**< (SHDW_MR) Low-Power Debouncer Enable WKUPx Mask */
#define SHDW_MR_LPDBCEN0(value)               (SHDW_MR_LPDBCEN0_Msk & ((value) << SHDW_MR_LPDBCEN0_Pos))
#define   SHDW_MR_LPDBCEN0_NOT_ENABLE_Val     _U_(0x0)                                             /**< (SHDW_MR) The WKUPx input pin is not connected to the low-power debouncer.  */
#define   SHDW_MR_LPDBCEN0_ENABLE_Val         _U_(0x1)                                             /**< (SHDW_MR) The WKUPx input pin is connected to the low-power debouncer and forces a system wakeup.  */
#define SHDW_MR_LPDBCEN0_NOT_ENABLE           (SHDW_MR_LPDBCEN0_NOT_ENABLE_Val << SHDW_MR_LPDBCEN0_Pos) /**< (SHDW_MR) The WKUPx input pin is not connected to the low-power debouncer. Position  */
#define SHDW_MR_LPDBCEN0_ENABLE               (SHDW_MR_LPDBCEN0_ENABLE_Val << SHDW_MR_LPDBCEN0_Pos) /**< (SHDW_MR) The WKUPx input pin is connected to the low-power debouncer and forces a system wakeup. Position  */
#define SHDW_MR_LPDBCEN1_Pos                  _U_(1)                                               /**< (SHDW_MR) Low-Power Debouncer Enable WKUPx Position */
#define SHDW_MR_LPDBCEN1_Msk                  (_U_(0x1) << SHDW_MR_LPDBCEN1_Pos)                   /**< (SHDW_MR) Low-Power Debouncer Enable WKUPx Mask */
#define SHDW_MR_LPDBCEN1(value)               (SHDW_MR_LPDBCEN1_Msk & ((value) << SHDW_MR_LPDBCEN1_Pos))
#define   SHDW_MR_LPDBCEN1_NOT_ENABLE_Val     _U_(0x0)                                             /**< (SHDW_MR) The WKUPx input pin is not connected to the low-power debouncer.  */
#define   SHDW_MR_LPDBCEN1_ENABLE_Val         _U_(0x1)                                             /**< (SHDW_MR) The WKUPx input pin is connected to the low-power debouncer and forces a system wakeup.  */
#define SHDW_MR_LPDBCEN1_NOT_ENABLE           (SHDW_MR_LPDBCEN1_NOT_ENABLE_Val << SHDW_MR_LPDBCEN1_Pos) /**< (SHDW_MR) The WKUPx input pin is not connected to the low-power debouncer. Position  */
#define SHDW_MR_LPDBCEN1_ENABLE               (SHDW_MR_LPDBCEN1_ENABLE_Val << SHDW_MR_LPDBCEN1_Pos) /**< (SHDW_MR) The WKUPx input pin is connected to the low-power debouncer and forces a system wakeup. Position  */
#define SHDW_MR_LPDBC_Pos                     _U_(8)                                               /**< (SHDW_MR) Low-Power Debouncer Period Position */
#define SHDW_MR_LPDBC_Msk                     (_U_(0x7) << SHDW_MR_LPDBC_Pos)                      /**< (SHDW_MR) Low-Power Debouncer Period Mask */
#define SHDW_MR_LPDBC(value)                  (SHDW_MR_LPDBC_Msk & ((value) << SHDW_MR_LPDBC_Pos))
#define   SHDW_MR_LPDBC_DISABLE_Val           _U_(0x0)                                             /**< (SHDW_MR) Disables the low-power debouncers.  */
#define   SHDW_MR_LPDBC_2_RTCOUT_Val          _U_(0x1)                                             /**< (SHDW_MR) WKUP0/1 in active state for at least 2 RTCOUTx clock periods  */
#define   SHDW_MR_LPDBC_3_RTCOUT_Val          _U_(0x2)                                             /**< (SHDW_MR) WKUP0/1 in active state for at least 3 RTCOUTx clock periods  */
#define   SHDW_MR_LPDBC_4_RTCOUT_Val          _U_(0x3)                                             /**< (SHDW_MR) WKUP0/1 in active state for at least 4 RTCOUTx clock periods  */
#define   SHDW_MR_LPDBC_5_RTCOUT_Val          _U_(0x4)                                             /**< (SHDW_MR) WKUP0/1 in active state for at least 5 RTCOUTx clock periods  */
#define   SHDW_MR_LPDBC_6_RTCOUT_Val          _U_(0x5)                                             /**< (SHDW_MR) WKUP0/1 in active state for at least 6 RTCOUTx clock periods  */
#define   SHDW_MR_LPDBC_7_RTCOUT_Val          _U_(0x6)                                             /**< (SHDW_MR) WKUP0/1 in active state for at least 7 RTCOUTx clock periods  */
#define   SHDW_MR_LPDBC_8_RTCOUT_Val          _U_(0x7)                                             /**< (SHDW_MR) WKUP0/1 in active state for at least 8 RTCOUTx clock periods  */
#define SHDW_MR_LPDBC_DISABLE                 (SHDW_MR_LPDBC_DISABLE_Val << SHDW_MR_LPDBC_Pos)     /**< (SHDW_MR) Disables the low-power debouncers. Position  */
#define SHDW_MR_LPDBC_2_RTCOUT                (SHDW_MR_LPDBC_2_RTCOUT_Val << SHDW_MR_LPDBC_Pos)    /**< (SHDW_MR) WKUP0/1 in active state for at least 2 RTCOUTx clock periods Position  */
#define SHDW_MR_LPDBC_3_RTCOUT                (SHDW_MR_LPDBC_3_RTCOUT_Val << SHDW_MR_LPDBC_Pos)    /**< (SHDW_MR) WKUP0/1 in active state for at least 3 RTCOUTx clock periods Position  */
#define SHDW_MR_LPDBC_4_RTCOUT                (SHDW_MR_LPDBC_4_RTCOUT_Val << SHDW_MR_LPDBC_Pos)    /**< (SHDW_MR) WKUP0/1 in active state for at least 4 RTCOUTx clock periods Position  */
#define SHDW_MR_LPDBC_5_RTCOUT                (SHDW_MR_LPDBC_5_RTCOUT_Val << SHDW_MR_LPDBC_Pos)    /**< (SHDW_MR) WKUP0/1 in active state for at least 5 RTCOUTx clock periods Position  */
#define SHDW_MR_LPDBC_6_RTCOUT                (SHDW_MR_LPDBC_6_RTCOUT_Val << SHDW_MR_LPDBC_Pos)    /**< (SHDW_MR) WKUP0/1 in active state for at least 6 RTCOUTx clock periods Position  */
#define SHDW_MR_LPDBC_7_RTCOUT                (SHDW_MR_LPDBC_7_RTCOUT_Val << SHDW_MR_LPDBC_Pos)    /**< (SHDW_MR) WKUP0/1 in active state for at least 7 RTCOUTx clock periods Position  */
#define SHDW_MR_LPDBC_8_RTCOUT                (SHDW_MR_LPDBC_8_RTCOUT_Val << SHDW_MR_LPDBC_Pos)    /**< (SHDW_MR) WKUP0/1 in active state for at least 8 RTCOUTx clock periods Position  */
#define SHDW_MR_RTTWKEN_Pos                   _U_(16)                                              /**< (SHDW_MR) Real-time Timer Wake-up Enable Position */
#define SHDW_MR_RTTWKEN_Msk                   (_U_(0x1) << SHDW_MR_RTTWKEN_Pos)                    /**< (SHDW_MR) Real-time Timer Wake-up Enable Mask */
#define SHDW_MR_RTTWKEN(value)                (SHDW_MR_RTTWKEN_Msk & ((value) << SHDW_MR_RTTWKEN_Pos))
#define   SHDW_MR_RTTWKEN_0_Val               _U_(0x0)                                             /**< (SHDW_MR) The RTT Alarm signal has no effect on the SHDWC.  */
#define   SHDW_MR_RTTWKEN_1_Val               _U_(0x1)                                             /**< (SHDW_MR) The RTT Alarm signal forces the de-assertion of the SHDN pin.  */
#define SHDW_MR_RTTWKEN_0                     (SHDW_MR_RTTWKEN_0_Val << SHDW_MR_RTTWKEN_Pos)       /**< (SHDW_MR) The RTT Alarm signal has no effect on the SHDWC. Position  */
#define SHDW_MR_RTTWKEN_1                     (SHDW_MR_RTTWKEN_1_Val << SHDW_MR_RTTWKEN_Pos)       /**< (SHDW_MR) The RTT Alarm signal forces the de-assertion of the SHDN pin. Position  */
#define SHDW_MR_RTCWKEN_Pos                   _U_(17)                                              /**< (SHDW_MR) Real-time Clock Wake-up Enable Position */
#define SHDW_MR_RTCWKEN_Msk                   (_U_(0x1) << SHDW_MR_RTCWKEN_Pos)                    /**< (SHDW_MR) Real-time Clock Wake-up Enable Mask */
#define SHDW_MR_RTCWKEN(value)                (SHDW_MR_RTCWKEN_Msk & ((value) << SHDW_MR_RTCWKEN_Pos))
#define   SHDW_MR_RTCWKEN_0_Val               _U_(0x0)                                             /**< (SHDW_MR) The RTC Alarm signal has no effect on the SHDWC.  */
#define   SHDW_MR_RTCWKEN_1_Val               _U_(0x1)                                             /**< (SHDW_MR) The RTC Alarm signal forces the de-assertion of the SHDN pin.  */
#define SHDW_MR_RTCWKEN_0                     (SHDW_MR_RTCWKEN_0_Val << SHDW_MR_RTCWKEN_Pos)       /**< (SHDW_MR) The RTC Alarm signal has no effect on the SHDWC. Position  */
#define SHDW_MR_RTCWKEN_1                     (SHDW_MR_RTCWKEN_1_Val << SHDW_MR_RTCWKEN_Pos)       /**< (SHDW_MR) The RTC Alarm signal forces the de-assertion of the SHDN pin. Position  */
#define SHDW_MR_AUTOLPM_Pos                   _U_(20)                                              /**< (SHDW_MR) Automatic LPM Pad Management Position */
#define SHDW_MR_AUTOLPM_Msk                   (_U_(0x1) << SHDW_MR_AUTOLPM_Pos)                    /**< (SHDW_MR) Automatic LPM Pad Management Mask */
#define SHDW_MR_AUTOLPM(value)                (SHDW_MR_AUTOLPM_Msk & ((value) << SHDW_MR_AUTOLPM_Pos))
#define   SHDW_MR_AUTOLPM_0_Val               _U_(0x0)                                             /**< (SHDW_MR) The LPM pad is never automatically modified by the RSTC.  */
#define   SHDW_MR_AUTOLPM_1_Val               _U_(0x1)                                             /**< (SHDW_MR) The LPM pad is automatically modified by the RSTC when the system goes into or out of the ULP mode 2.  */
#define SHDW_MR_AUTOLPM_0                     (SHDW_MR_AUTOLPM_0_Val << SHDW_MR_AUTOLPM_Pos)       /**< (SHDW_MR) The LPM pad is never automatically modified by the RSTC. Position  */
#define SHDW_MR_AUTOLPM_1                     (SHDW_MR_AUTOLPM_1_Val << SHDW_MR_AUTOLPM_Pos)       /**< (SHDW_MR) The LPM pad is automatically modified by the RSTC when the system goes into or out of the ULP mode 2. Position  */
#define SHDW_MR_WKUPDBC_Pos                   _U_(24)                                              /**< (SHDW_MR) Wakeup Inputs Debouncer Period Position */
#define SHDW_MR_WKUPDBC_Msk                   (_U_(0x7) << SHDW_MR_WKUPDBC_Pos)                    /**< (SHDW_MR) Wakeup Inputs Debouncer Period Mask */
#define SHDW_MR_WKUPDBC(value)                (SHDW_MR_WKUPDBC_Msk & ((value) << SHDW_MR_WKUPDBC_Pos))
#define   SHDW_MR_WKUPDBC_IMMEDIATE_Val       _U_(0x0)                                             /**< (SHDW_MR) Immediate, no debouncing, detected active at least on one SLCK edge.  */
#define   SHDW_MR_WKUPDBC_3_SLCK_Val          _U_(0x1)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 3 SLCK periods  */
#define   SHDW_MR_WKUPDBC_32_SLCK_Val         _U_(0x2)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 32 SLCK periods  */
#define   SHDW_MR_WKUPDBC_512_SLCK_Val        _U_(0x3)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 512 SLCK periods  */
#define   SHDW_MR_WKUPDBC_4096_SLCK_Val       _U_(0x4)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 4,096 SLCK periods  */
#define   SHDW_MR_WKUPDBC_32768_SLCK_Val      _U_(0x5)                                             /**< (SHDW_MR) PIOBUx shall be in its active state for at least 32,768 SLCK periods  */
#define SHDW_MR_WKUPDBC_IMMEDIATE             (SHDW_MR_WKUPDBC_IMMEDIATE_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) Immediate, no debouncing, detected active at least on one SLCK edge. Position  */
#define SHDW_MR_WKUPDBC_3_SLCK                (SHDW_MR_WKUPDBC_3_SLCK_Val << SHDW_MR_WKUPDBC_Pos)  /**< (SHDW_MR) PIOBUx shall be in its active state for at least 3 SLCK periods Position  */
#define SHDW_MR_WKUPDBC_32_SLCK               (SHDW_MR_WKUPDBC_32_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) PIOBUx shall be in its active state for at least 32 SLCK periods Position  */
#define SHDW_MR_WKUPDBC_512_SLCK              (SHDW_MR_WKUPDBC_512_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) PIOBUx shall be in its active state for at least 512 SLCK periods Position  */
#define SHDW_MR_WKUPDBC_4096_SLCK             (SHDW_MR_WKUPDBC_4096_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) PIOBUx shall be in its active state for at least 4,096 SLCK periods Position  */
#define SHDW_MR_WKUPDBC_32768_SLCK            (SHDW_MR_WKUPDBC_32768_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /**< (SHDW_MR) PIOBUx shall be in its active state for at least 32,768 SLCK periods Position  */
#define SHDW_MR_Msk                           _U_(0x07130703)                                      /**< (SHDW_MR) Register Mask  */

#define SHDW_MR_LPDBCEN_Pos                   _U_(0)                                               /**< (SHDW_MR Position) Low-Power Debouncer Enable WKUPx */
#define SHDW_MR_LPDBCEN_Msk                   (_U_(0x3) << SHDW_MR_LPDBCEN_Pos)                    /**< (SHDW_MR Mask) LPDBCEN */
#define SHDW_MR_LPDBCEN(value)                (SHDW_MR_LPDBCEN_Msk & ((value) << SHDW_MR_LPDBCEN_Pos)) 

/* -------- SHDW_SR : (SHDWC Offset: 0x08) ( R/ 32) Status Register -------- */
#define SHDW_SR_RESETVALUE                    _U_(0x00)                                            /**<  (SHDW_SR) Status Register  Reset Value */

#define SHDW_SR_WKUPS_Pos                     _U_(0)                                               /**< (SHDW_SR) PIOBU, WKUP Wakeup Status Position */
#define SHDW_SR_WKUPS_Msk                     (_U_(0x1) << SHDW_SR_WKUPS_Pos)                      /**< (SHDW_SR) PIOBU, WKUP Wakeup Status Mask */
#define SHDW_SR_WKUPS(value)                  (SHDW_SR_WKUPS_Msk & ((value) << SHDW_SR_WKUPS_Pos))
#define   SHDW_SR_WKUPS_NO_Val                _U_(0x0)                                             /**< (SHDW_SR) No wakeup due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_WKUPS_PRESENT_Val           _U_(0x1)                                             /**< (SHDW_SR) At least one wakeup due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR.  */
#define SHDW_SR_WKUPS_NO                      (SHDW_SR_WKUPS_NO_Val << SHDW_SR_WKUPS_Pos)          /**< (SHDW_SR) No wakeup due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_WKUPS_PRESENT                 (SHDW_SR_WKUPS_PRESENT_Val << SHDW_SR_WKUPS_Pos)     /**< (SHDW_SR) At least one wakeup due to the assertion of the PIOBU, WKUP pins has occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_RTTWK_Pos                     _U_(4)                                               /**< (SHDW_SR) Real-time Timer Wake-up Position */
#define SHDW_SR_RTTWK_Msk                     (_U_(0x1) << SHDW_SR_RTTWK_Pos)                      /**< (SHDW_SR) Real-time Timer Wake-up Mask */
#define SHDW_SR_RTTWK(value)                  (SHDW_SR_RTTWK_Msk & ((value) << SHDW_SR_RTTWK_Pos))
#define   SHDW_SR_RTTWK_0_Val                 _U_(0x0)                                             /**< (SHDW_SR) No wake-up alarm from the RTT occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_RTTWK_1_Val                 _U_(0x1)                                             /**< (SHDW_SR) At least one wake-up alarm from the RTT occurred since the last read of SHDW_SR.  */
#define SHDW_SR_RTTWK_0                       (SHDW_SR_RTTWK_0_Val << SHDW_SR_RTTWK_Pos)           /**< (SHDW_SR) No wake-up alarm from the RTT occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_RTTWK_1                       (SHDW_SR_RTTWK_1_Val << SHDW_SR_RTTWK_Pos)           /**< (SHDW_SR) At least one wake-up alarm from the RTT occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_RTCWK_Pos                     _U_(5)                                               /**< (SHDW_SR) Real-time Clock Wake-up Position */
#define SHDW_SR_RTCWK_Msk                     (_U_(0x1) << SHDW_SR_RTCWK_Pos)                      /**< (SHDW_SR) Real-time Clock Wake-up Mask */
#define SHDW_SR_RTCWK(value)                  (SHDW_SR_RTCWK_Msk & ((value) << SHDW_SR_RTCWK_Pos))
#define   SHDW_SR_RTCWK_0_Val                 _U_(0x0)                                             /**< (SHDW_SR) No wake-up alarm from the RTC occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_RTCWK_1_Val                 _U_(0x1)                                             /**< (SHDW_SR) At least one wake-up alarm from the RTC occurred since the last read of SHDW_SR.  */
#define SHDW_SR_RTCWK_0                       (SHDW_SR_RTCWK_0_Val << SHDW_SR_RTCWK_Pos)           /**< (SHDW_SR) No wake-up alarm from the RTC occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_RTCWK_1                       (SHDW_SR_RTCWK_1_Val << SHDW_SR_RTCWK_Pos)           /**< (SHDW_SR) At least one wake-up alarm from the RTC occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_LPM_Pos                       _U_(8)                                               /**< (SHDW_SR) Low-Power Mode Pad Status Position */
#define SHDW_SR_LPM_Msk                       (_U_(0x1) << SHDW_SR_LPM_Pos)                        /**< (SHDW_SR) Low-Power Mode Pad Status Mask */
#define SHDW_SR_LPM(value)                    (SHDW_SR_LPM_Msk & ((value) << SHDW_SR_LPM_Pos))    
#define   SHDW_SR_LPM_0_Val                   _U_(0x0)                                             /**< (SHDW_SR) The LPM pad is currently set to 0.  */
#define   SHDW_SR_LPM_1_Val                   _U_(0x1)                                             /**< (SHDW_SR) The LPM pad is currently set to 1.  */
#define SHDW_SR_LPM_0                         (SHDW_SR_LPM_0_Val << SHDW_SR_LPM_Pos)               /**< (SHDW_SR) The LPM pad is currently set to 0. Position  */
#define SHDW_SR_LPM_1                         (SHDW_SR_LPM_1_Val << SHDW_SR_LPM_Pos)               /**< (SHDW_SR) The LPM pad is currently set to 1. Position  */
#define SHDW_SR_WKUPIS0_Pos                   _U_(16)                                              /**< (SHDW_SR) Wakeup 0 to 15 Input Status Position */
#define SHDW_SR_WKUPIS0_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS0_Pos)                    /**< (SHDW_SR) Wakeup 0 to 15 Input Status Mask */
#define SHDW_SR_WKUPIS0(value)                (SHDW_SR_WKUPIS0_Msk & ((value) << SHDW_SR_WKUPIS0_Pos))
#define   SHDW_SR_WKUPIS0_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event.  */
#define   SHDW_SR_WKUPIS0_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event.  */
#define SHDW_SR_WKUPIS0_DISABLE               (SHDW_SR_WKUPIS0_DISABLE_Val << SHDW_SR_WKUPIS0_Pos) /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS0_ENABLE                (SHDW_SR_WKUPIS0_ENABLE_Val << SHDW_SR_WKUPIS0_Pos)  /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS1_Pos                   _U_(17)                                              /**< (SHDW_SR) Wakeup 0 to 15 Input Status Position */
#define SHDW_SR_WKUPIS1_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS1_Pos)                    /**< (SHDW_SR) Wakeup 0 to 15 Input Status Mask */
#define SHDW_SR_WKUPIS1(value)                (SHDW_SR_WKUPIS1_Msk & ((value) << SHDW_SR_WKUPIS1_Pos))
#define   SHDW_SR_WKUPIS1_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event.  */
#define   SHDW_SR_WKUPIS1_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event.  */
#define SHDW_SR_WKUPIS1_DISABLE               (SHDW_SR_WKUPIS1_DISABLE_Val << SHDW_SR_WKUPIS1_Pos) /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS1_ENABLE                (SHDW_SR_WKUPIS1_ENABLE_Val << SHDW_SR_WKUPIS1_Pos)  /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS2_Pos                   _U_(18)                                              /**< (SHDW_SR) Wakeup 0 to 15 Input Status Position */
#define SHDW_SR_WKUPIS2_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS2_Pos)                    /**< (SHDW_SR) Wakeup 0 to 15 Input Status Mask */
#define SHDW_SR_WKUPIS2(value)                (SHDW_SR_WKUPIS2_Msk & ((value) << SHDW_SR_WKUPIS2_Pos))
#define   SHDW_SR_WKUPIS2_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event.  */
#define   SHDW_SR_WKUPIS2_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event.  */
#define SHDW_SR_WKUPIS2_DISABLE               (SHDW_SR_WKUPIS2_DISABLE_Val << SHDW_SR_WKUPIS2_Pos) /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS2_ENABLE                (SHDW_SR_WKUPIS2_ENABLE_Val << SHDW_SR_WKUPIS2_Pos)  /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS3_Pos                   _U_(19)                                              /**< (SHDW_SR) Wakeup 0 to 15 Input Status Position */
#define SHDW_SR_WKUPIS3_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS3_Pos)                    /**< (SHDW_SR) Wakeup 0 to 15 Input Status Mask */
#define SHDW_SR_WKUPIS3(value)                (SHDW_SR_WKUPIS3_Msk & ((value) << SHDW_SR_WKUPIS3_Pos))
#define   SHDW_SR_WKUPIS3_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event.  */
#define   SHDW_SR_WKUPIS3_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event.  */
#define SHDW_SR_WKUPIS3_DISABLE               (SHDW_SR_WKUPIS3_DISABLE_Val << SHDW_SR_WKUPIS3_Pos) /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS3_ENABLE                (SHDW_SR_WKUPIS3_ENABLE_Val << SHDW_SR_WKUPIS3_Pos)  /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS4_Pos                   _U_(20)                                              /**< (SHDW_SR) Wakeup 0 to 15 Input Status Position */
#define SHDW_SR_WKUPIS4_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS4_Pos)                    /**< (SHDW_SR) Wakeup 0 to 15 Input Status Mask */
#define SHDW_SR_WKUPIS4(value)                (SHDW_SR_WKUPIS4_Msk & ((value) << SHDW_SR_WKUPIS4_Pos))
#define   SHDW_SR_WKUPIS4_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event.  */
#define   SHDW_SR_WKUPIS4_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event.  */
#define SHDW_SR_WKUPIS4_DISABLE               (SHDW_SR_WKUPIS4_DISABLE_Val << SHDW_SR_WKUPIS4_Pos) /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS4_ENABLE                (SHDW_SR_WKUPIS4_ENABLE_Val << SHDW_SR_WKUPIS4_Pos)  /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS5_Pos                   _U_(21)                                              /**< (SHDW_SR) Wakeup 0 to 15 Input Status Position */
#define SHDW_SR_WKUPIS5_Msk                   (_U_(0x1) << SHDW_SR_WKUPIS5_Pos)                    /**< (SHDW_SR) Wakeup 0 to 15 Input Status Mask */
#define SHDW_SR_WKUPIS5(value)                (SHDW_SR_WKUPIS5_Msk & ((value) << SHDW_SR_WKUPIS5_Pos))
#define   SHDW_SR_WKUPIS5_DISABLE_Val         _U_(0x0)                                             /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event.  */
#define   SHDW_SR_WKUPIS5_ENABLE_Val          _U_(0x1)                                             /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event.  */
#define SHDW_SR_WKUPIS5_DISABLE               (SHDW_SR_WKUPIS5_DISABLE_Val << SHDW_SR_WKUPIS5_Pos) /**< (SHDW_SR) The corresponding wakeup input is disabled, or was inactive at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_WKUPIS5_ENABLE                (SHDW_SR_WKUPIS5_ENABLE_Val << SHDW_SR_WKUPIS5_Pos)  /**< (SHDW_SR) The corresponding wakeup input was active at the time the debouncer triggered a wakeup event. Position  */
#define SHDW_SR_Msk                           _U_(0x003F0131)                                      /**< (SHDW_SR) Register Mask  */

#define SHDW_SR_WKUPIS_Pos                    _U_(16)                                              /**< (SHDW_SR Position) Wakeup x to x5 Input Status */
#define SHDW_SR_WKUPIS_Msk                    (_U_(0x3F) << SHDW_SR_WKUPIS_Pos)                    /**< (SHDW_SR Mask) WKUPIS */
#define SHDW_SR_WKUPIS(value)                 (SHDW_SR_WKUPIS_Msk & ((value) << SHDW_SR_WKUPIS_Pos)) 

/* -------- SHDW_WUIR : (SHDWC Offset: 0x0C) (R/W 32) Wakeup Inputs Register -------- */
#define SHDW_WUIR_RESETVALUE                  _U_(0x00)                                            /**<  (SHDW_WUIR) Wakeup Inputs Register  Reset Value */

#define SHDW_WUIR_WKUPEN0_Pos                 _U_(0)                                               /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Position */
#define SHDW_WUIR_WKUPEN0_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN0_Pos)                  /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Mask */
#define SHDW_WUIR_WKUPEN0(value)              (SHDW_WUIR_WKUPEN0_Msk & ((value) << SHDW_WUIR_WKUPEN0_Pos))
#define   SHDW_WUIR_WKUPEN0_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect.  */
#define   SHDW_WUIR_WKUPEN0_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPEN0_DISABLE             (SHDW_WUIR_WKUPEN0_DISABLE_Val << SHDW_WUIR_WKUPEN0_Pos) /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect. Position  */
#define SHDW_WUIR_WKUPEN0_ENABLE              (SHDW_WUIR_WKUPEN0_ENABLE_Val << SHDW_WUIR_WKUPEN0_Pos) /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN1_Pos                 _U_(1)                                               /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Position */
#define SHDW_WUIR_WKUPEN1_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN1_Pos)                  /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Mask */
#define SHDW_WUIR_WKUPEN1(value)              (SHDW_WUIR_WKUPEN1_Msk & ((value) << SHDW_WUIR_WKUPEN1_Pos))
#define   SHDW_WUIR_WKUPEN1_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect.  */
#define   SHDW_WUIR_WKUPEN1_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPEN1_DISABLE             (SHDW_WUIR_WKUPEN1_DISABLE_Val << SHDW_WUIR_WKUPEN1_Pos) /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect. Position  */
#define SHDW_WUIR_WKUPEN1_ENABLE              (SHDW_WUIR_WKUPEN1_ENABLE_Val << SHDW_WUIR_WKUPEN1_Pos) /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN2_Pos                 _U_(2)                                               /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Position */
#define SHDW_WUIR_WKUPEN2_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN2_Pos)                  /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Mask */
#define SHDW_WUIR_WKUPEN2(value)              (SHDW_WUIR_WKUPEN2_Msk & ((value) << SHDW_WUIR_WKUPEN2_Pos))
#define   SHDW_WUIR_WKUPEN2_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect.  */
#define   SHDW_WUIR_WKUPEN2_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPEN2_DISABLE             (SHDW_WUIR_WKUPEN2_DISABLE_Val << SHDW_WUIR_WKUPEN2_Pos) /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect. Position  */
#define SHDW_WUIR_WKUPEN2_ENABLE              (SHDW_WUIR_WKUPEN2_ENABLE_Val << SHDW_WUIR_WKUPEN2_Pos) /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN3_Pos                 _U_(3)                                               /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Position */
#define SHDW_WUIR_WKUPEN3_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN3_Pos)                  /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Mask */
#define SHDW_WUIR_WKUPEN3(value)              (SHDW_WUIR_WKUPEN3_Msk & ((value) << SHDW_WUIR_WKUPEN3_Pos))
#define   SHDW_WUIR_WKUPEN3_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect.  */
#define   SHDW_WUIR_WKUPEN3_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPEN3_DISABLE             (SHDW_WUIR_WKUPEN3_DISABLE_Val << SHDW_WUIR_WKUPEN3_Pos) /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect. Position  */
#define SHDW_WUIR_WKUPEN3_ENABLE              (SHDW_WUIR_WKUPEN3_ENABLE_Val << SHDW_WUIR_WKUPEN3_Pos) /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN4_Pos                 _U_(4)                                               /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Position */
#define SHDW_WUIR_WKUPEN4_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN4_Pos)                  /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Mask */
#define SHDW_WUIR_WKUPEN4(value)              (SHDW_WUIR_WKUPEN4_Msk & ((value) << SHDW_WUIR_WKUPEN4_Pos))
#define   SHDW_WUIR_WKUPEN4_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect.  */
#define   SHDW_WUIR_WKUPEN4_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPEN4_DISABLE             (SHDW_WUIR_WKUPEN4_DISABLE_Val << SHDW_WUIR_WKUPEN4_Pos) /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect. Position  */
#define SHDW_WUIR_WKUPEN4_ENABLE              (SHDW_WUIR_WKUPEN4_ENABLE_Val << SHDW_WUIR_WKUPEN4_Pos) /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN5_Pos                 _U_(5)                                               /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Position */
#define SHDW_WUIR_WKUPEN5_Msk                 (_U_(0x1) << SHDW_WUIR_WKUPEN5_Pos)                  /**< (SHDW_WUIR) Wakeup 0 to 15 Input Enable Mask */
#define SHDW_WUIR_WKUPEN5(value)              (SHDW_WUIR_WKUPEN5_Msk & ((value) << SHDW_WUIR_WKUPEN5_Pos))
#define   SHDW_WUIR_WKUPEN5_DISABLE_Val       _U_(0x0)                                             /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect.  */
#define   SHDW_WUIR_WKUPEN5_ENABLE_Val        _U_(0x1)                                             /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPEN5_DISABLE             (SHDW_WUIR_WKUPEN5_DISABLE_Val << SHDW_WUIR_WKUPEN5_Pos) /**< (SHDW_WUIR) The corresponding wakeup input has no wakeup effect. Position  */
#define SHDW_WUIR_WKUPEN5_ENABLE              (SHDW_WUIR_WKUPEN5_ENABLE_Val << SHDW_WUIR_WKUPEN5_Pos) /**< (SHDW_WUIR) The corresponding wakeup input forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT0_Pos                  _U_(16)                                              /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Position */
#define SHDW_WUIR_WKUPT0_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT0_Pos)                   /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Mask */
#define SHDW_WUIR_WKUPT0(value)               (SHDW_WUIR_WKUPT0_Msk & ((value) << SHDW_WUIR_WKUPT0_Pos))
#define   SHDW_WUIR_WKUPT0_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define   SHDW_WUIR_WKUPT0_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPT0_LOW                  (SHDW_WUIR_WKUPT0_LOW_Val << SHDW_WUIR_WKUPT0_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT0_HIGH                 (SHDW_WUIR_WKUPT0_HIGH_Val << SHDW_WUIR_WKUPT0_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT1_Pos                  _U_(17)                                              /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Position */
#define SHDW_WUIR_WKUPT1_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT1_Pos)                   /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Mask */
#define SHDW_WUIR_WKUPT1(value)               (SHDW_WUIR_WKUPT1_Msk & ((value) << SHDW_WUIR_WKUPT1_Pos))
#define   SHDW_WUIR_WKUPT1_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define   SHDW_WUIR_WKUPT1_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPT1_LOW                  (SHDW_WUIR_WKUPT1_LOW_Val << SHDW_WUIR_WKUPT1_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT1_HIGH                 (SHDW_WUIR_WKUPT1_HIGH_Val << SHDW_WUIR_WKUPT1_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT2_Pos                  _U_(18)                                              /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Position */
#define SHDW_WUIR_WKUPT2_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT2_Pos)                   /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Mask */
#define SHDW_WUIR_WKUPT2(value)               (SHDW_WUIR_WKUPT2_Msk & ((value) << SHDW_WUIR_WKUPT2_Pos))
#define   SHDW_WUIR_WKUPT2_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define   SHDW_WUIR_WKUPT2_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPT2_LOW                  (SHDW_WUIR_WKUPT2_LOW_Val << SHDW_WUIR_WKUPT2_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT2_HIGH                 (SHDW_WUIR_WKUPT2_HIGH_Val << SHDW_WUIR_WKUPT2_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT3_Pos                  _U_(19)                                              /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Position */
#define SHDW_WUIR_WKUPT3_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT3_Pos)                   /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Mask */
#define SHDW_WUIR_WKUPT3(value)               (SHDW_WUIR_WKUPT3_Msk & ((value) << SHDW_WUIR_WKUPT3_Pos))
#define   SHDW_WUIR_WKUPT3_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define   SHDW_WUIR_WKUPT3_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPT3_LOW                  (SHDW_WUIR_WKUPT3_LOW_Val << SHDW_WUIR_WKUPT3_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT3_HIGH                 (SHDW_WUIR_WKUPT3_HIGH_Val << SHDW_WUIR_WKUPT3_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT4_Pos                  _U_(20)                                              /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Position */
#define SHDW_WUIR_WKUPT4_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT4_Pos)                   /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Mask */
#define SHDW_WUIR_WKUPT4(value)               (SHDW_WUIR_WKUPT4_Msk & ((value) << SHDW_WUIR_WKUPT4_Pos))
#define   SHDW_WUIR_WKUPT4_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define   SHDW_WUIR_WKUPT4_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPT4_LOW                  (SHDW_WUIR_WKUPT4_LOW_Val << SHDW_WUIR_WKUPT4_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT4_HIGH                 (SHDW_WUIR_WKUPT4_HIGH_Val << SHDW_WUIR_WKUPT4_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT5_Pos                  _U_(21)                                              /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Position */
#define SHDW_WUIR_WKUPT5_Msk                  (_U_(0x1) << SHDW_WUIR_WKUPT5_Pos)                   /**< (SHDW_WUIR) Wakeup 0 to 15 Input Type Mask */
#define SHDW_WUIR_WKUPT5(value)               (SHDW_WUIR_WKUPT5_Msk & ((value) << SHDW_WUIR_WKUPT5_Pos))
#define   SHDW_WUIR_WKUPT5_LOW_Val            _U_(0x0)                                             /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define   SHDW_WUIR_WKUPT5_HIGH_Val           _U_(0x1)                                             /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply.  */
#define SHDW_WUIR_WKUPT5_LOW                  (SHDW_WUIR_WKUPT5_LOW_Val << SHDW_WUIR_WKUPT5_Pos)   /**< (SHDW_WUIR) A falling edge followed by a low level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_WKUPT5_HIGH                 (SHDW_WUIR_WKUPT5_HIGH_Val << SHDW_WUIR_WKUPT5_Pos)  /**< (SHDW_WUIR) A rising edge followed by a high level on the corresponding wakeup input, for a period defined by WKUPDBC, forces wakeup of the core power supply. Position  */
#define SHDW_WUIR_Msk                         _U_(0x003F003F)                                      /**< (SHDW_WUIR) Register Mask  */

#define SHDW_WUIR_WKUPEN_Pos                  _U_(0)                                               /**< (SHDW_WUIR Position) Wakeup x to x5 Input Enable */
#define SHDW_WUIR_WKUPEN_Msk                  (_U_(0x3F) << SHDW_WUIR_WKUPEN_Pos)                  /**< (SHDW_WUIR Mask) WKUPEN */
#define SHDW_WUIR_WKUPEN(value)               (SHDW_WUIR_WKUPEN_Msk & ((value) << SHDW_WUIR_WKUPEN_Pos)) 
#define SHDW_WUIR_WKUPT_Pos                   _U_(16)                                              /**< (SHDW_WUIR Position) Wakeup x to x5 Input Type */
#define SHDW_WUIR_WKUPT_Msk                   (_U_(0x3F) << SHDW_WUIR_WKUPT_Pos)                   /**< (SHDW_WUIR Mask) WKUPT */
#define SHDW_WUIR_WKUPT(value)                (SHDW_WUIR_WKUPT_Msk & ((value) << SHDW_WUIR_WKUPT_Pos)) 

/** \brief SHDWC register offsets definitions */
#define SHDW_CR_REG_OFST               (0x00)              /**< (SHDW_CR) Control Register Offset */
#define SHDW_MR_REG_OFST               (0x04)              /**< (SHDW_MR) Mode Register Offset */
#define SHDW_SR_REG_OFST               (0x08)              /**< (SHDW_SR) Status Register Offset */
#define SHDW_WUIR_REG_OFST             (0x0C)              /**< (SHDW_WUIR) Wakeup Inputs Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SHDWC register API structure */
typedef struct
{  /* Shutdown Controller */
  __O   uint32_t                       SHDW_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       SHDW_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint32_t                       SHDW_SR;            /**< Offset: 0x08 (R/   32) Status Register */
  __IO  uint32_t                       SHDW_WUIR;          /**< Offset: 0x0C (R/W  32) Wakeup Inputs Register */
} shdwc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_SHDWC_COMPONENT_H_ */
