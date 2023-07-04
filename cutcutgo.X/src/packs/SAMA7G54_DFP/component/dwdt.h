/*
 * Component description for DWDT
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
#ifndef _SAMA7G_DWDT_COMPONENT_H_
#define _SAMA7G_DWDT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DWDT                                         */
/* ************************************************************************** */

/* -------- DWDT_NS_WDT_CR : (DWDT Offset: 0x00) ( /W 32) Never Secure Control Register -------- */
#define DWDT_NS_WDT_CR_WDRSTT_Pos             _U_(0)                                               /**< (DWDT_NS_WDT_CR) Watchdog Restart Position */
#define DWDT_NS_WDT_CR_WDRSTT_Msk             (_U_(0x1) << DWDT_NS_WDT_CR_WDRSTT_Pos)              /**< (DWDT_NS_WDT_CR) Watchdog Restart Mask */
#define DWDT_NS_WDT_CR_WDRSTT(value)          (DWDT_NS_WDT_CR_WDRSTT_Msk & ((value) << DWDT_NS_WDT_CR_WDRSTT_Pos))
#define   DWDT_NS_WDT_CR_WDRSTT_0_Val         _U_(0x0)                                             /**< (DWDT_NS_WDT_CR) No effect.  */
#define   DWDT_NS_WDT_CR_WDRSTT_1_Val         _U_(0x1)                                             /**< (DWDT_NS_WDT_CR) Restarts the watchdog if KEY is written to 0xA5.  */
#define DWDT_NS_WDT_CR_WDRSTT_0               (DWDT_NS_WDT_CR_WDRSTT_0_Val << DWDT_NS_WDT_CR_WDRSTT_Pos) /**< (DWDT_NS_WDT_CR) No effect. Position  */
#define DWDT_NS_WDT_CR_WDRSTT_1               (DWDT_NS_WDT_CR_WDRSTT_1_Val << DWDT_NS_WDT_CR_WDRSTT_Pos) /**< (DWDT_NS_WDT_CR) Restarts the watchdog if KEY is written to 0xA5. Position  */
#define DWDT_NS_WDT_CR_LOCKMR_Pos             _U_(4)                                               /**< (DWDT_NS_WDT_CR) Lock Mode Register Write Access Position */
#define DWDT_NS_WDT_CR_LOCKMR_Msk             (_U_(0x1) << DWDT_NS_WDT_CR_LOCKMR_Pos)              /**< (DWDT_NS_WDT_CR) Lock Mode Register Write Access Mask */
#define DWDT_NS_WDT_CR_LOCKMR(value)          (DWDT_NS_WDT_CR_LOCKMR_Msk & ((value) << DWDT_NS_WDT_CR_LOCKMR_Pos))
#define   DWDT_NS_WDT_CR_LOCKMR_0_Val         _U_(0x0)                                             /**< (DWDT_NS_WDT_CR) No effect.  */
#define   DWDT_NS_WDT_CR_LOCKMR_1_Val         _U_(0x1)                                             /**< (DWDT_NS_WDT_CR) Locks the configuration registers if KEY is written to 0xA5. Write accesses to NS_WDT_MR, NS_WDT_VR, NS_WDT_WL and NS_WDT_IL have no effect.  */
#define DWDT_NS_WDT_CR_LOCKMR_0               (DWDT_NS_WDT_CR_LOCKMR_0_Val << DWDT_NS_WDT_CR_LOCKMR_Pos) /**< (DWDT_NS_WDT_CR) No effect. Position  */
#define DWDT_NS_WDT_CR_LOCKMR_1               (DWDT_NS_WDT_CR_LOCKMR_1_Val << DWDT_NS_WDT_CR_LOCKMR_Pos) /**< (DWDT_NS_WDT_CR) Locks the configuration registers if KEY is written to 0xA5. Write accesses to NS_WDT_MR, NS_WDT_VR, NS_WDT_WL and NS_WDT_IL have no effect. Position  */
#define DWDT_NS_WDT_CR_KEY_Pos                _U_(24)                                              /**< (DWDT_NS_WDT_CR) Password Position */
#define DWDT_NS_WDT_CR_KEY_Msk                (_U_(0xFF) << DWDT_NS_WDT_CR_KEY_Pos)                /**< (DWDT_NS_WDT_CR) Password Mask */
#define DWDT_NS_WDT_CR_KEY(value)             (DWDT_NS_WDT_CR_KEY_Msk & ((value) << DWDT_NS_WDT_CR_KEY_Pos))
#define   DWDT_NS_WDT_CR_KEY_PASSWD_Val       _U_(0xA5)                                            /**< (DWDT_NS_WDT_CR) Writing any other value in this field aborts the write operation.  */
#define DWDT_NS_WDT_CR_KEY_PASSWD             (DWDT_NS_WDT_CR_KEY_PASSWD_Val << DWDT_NS_WDT_CR_KEY_Pos) /**< (DWDT_NS_WDT_CR) Writing any other value in this field aborts the write operation. Position  */
#define DWDT_NS_WDT_CR_Msk                    _U_(0xFF000011)                                      /**< (DWDT_NS_WDT_CR) Register Mask  */


/* -------- DWDT_NS_WDT_MR : (DWDT Offset: 0x04) (R/W 32) Never Secure Mode Register -------- */
#define DWDT_NS_WDT_MR_RESETVALUE             _U_(0x30)                                            /**<  (DWDT_NS_WDT_MR) Never Secure Mode Register  Reset Value */

#define DWDT_NS_WDT_MR_RPTHALM_Pos            _U_(5)                                               /**< (DWDT_NS_WDT_MR) Repeat Threshold Alarm Position */
#define DWDT_NS_WDT_MR_RPTHALM_Msk            (_U_(0x1) << DWDT_NS_WDT_MR_RPTHALM_Pos)             /**< (DWDT_NS_WDT_MR) Repeat Threshold Alarm Mask */
#define DWDT_NS_WDT_MR_RPTHALM(value)         (DWDT_NS_WDT_MR_RPTHALM_Msk & ((value) << DWDT_NS_WDT_MR_RPTHALM_Pos))
#define   DWDT_NS_WDT_MR_RPTHALM_0_Val        _U_(0x0)                                             /**< (DWDT_NS_WDT_MR) No alarm is sent to the security module if the watchdog is restarted before the RPTH threshold  */
#define   DWDT_NS_WDT_MR_RPTHALM_1_Val        _U_(0x1)                                             /**< (DWDT_NS_WDT_MR) An alarm is sent to the security module if the watchdog is restarted before the RPTH threshold  */
#define DWDT_NS_WDT_MR_RPTHALM_0              (DWDT_NS_WDT_MR_RPTHALM_0_Val << DWDT_NS_WDT_MR_RPTHALM_Pos) /**< (DWDT_NS_WDT_MR) No alarm is sent to the security module if the watchdog is restarted before the RPTH threshold Position  */
#define DWDT_NS_WDT_MR_RPTHALM_1              (DWDT_NS_WDT_MR_RPTHALM_1_Val << DWDT_NS_WDT_MR_RPTHALM_Pos) /**< (DWDT_NS_WDT_MR) An alarm is sent to the security module if the watchdog is restarted before the RPTH threshold Position  */
#define DWDT_NS_WDT_MR_WDDIS_Pos              _U_(12)                                              /**< (DWDT_NS_WDT_MR) Watchdog Disable Position */
#define DWDT_NS_WDT_MR_WDDIS_Msk              (_U_(0x1) << DWDT_NS_WDT_MR_WDDIS_Pos)               /**< (DWDT_NS_WDT_MR) Watchdog Disable Mask */
#define DWDT_NS_WDT_MR_WDDIS(value)           (DWDT_NS_WDT_MR_WDDIS_Msk & ((value) << DWDT_NS_WDT_MR_WDDIS_Pos))
#define   DWDT_NS_WDT_MR_WDDIS_0_Val          _U_(0x0)                                             /**< (DWDT_NS_WDT_MR) Enables the Watchdog Timer.  */
#define   DWDT_NS_WDT_MR_WDDIS_1_Val          _U_(0x1)                                             /**< (DWDT_NS_WDT_MR) Disables the Watchdog Timer.  */
#define DWDT_NS_WDT_MR_WDDIS_0                (DWDT_NS_WDT_MR_WDDIS_0_Val << DWDT_NS_WDT_MR_WDDIS_Pos) /**< (DWDT_NS_WDT_MR) Enables the Watchdog Timer. Position  */
#define DWDT_NS_WDT_MR_WDDIS_1                (DWDT_NS_WDT_MR_WDDIS_1_Val << DWDT_NS_WDT_MR_WDDIS_Pos) /**< (DWDT_NS_WDT_MR) Disables the Watchdog Timer. Position  */
#define DWDT_NS_WDT_MR_WDDBGHLT_Pos           _U_(28)                                              /**< (DWDT_NS_WDT_MR) Watchdog Debug Halt Position */
#define DWDT_NS_WDT_MR_WDDBGHLT_Msk           (_U_(0x1) << DWDT_NS_WDT_MR_WDDBGHLT_Pos)            /**< (DWDT_NS_WDT_MR) Watchdog Debug Halt Mask */
#define DWDT_NS_WDT_MR_WDDBGHLT(value)        (DWDT_NS_WDT_MR_WDDBGHLT_Msk & ((value) << DWDT_NS_WDT_MR_WDDBGHLT_Pos))
#define   DWDT_NS_WDT_MR_WDDBGHLT_0_Val       _U_(0x0)                                             /**< (DWDT_NS_WDT_MR) The watchdog runs when the processor is in Debug state.  */
#define   DWDT_NS_WDT_MR_WDDBGHLT_1_Val       _U_(0x1)                                             /**< (DWDT_NS_WDT_MR) The watchdog stops when the processor is in Debug state.  */
#define DWDT_NS_WDT_MR_WDDBGHLT_0             (DWDT_NS_WDT_MR_WDDBGHLT_0_Val << DWDT_NS_WDT_MR_WDDBGHLT_Pos) /**< (DWDT_NS_WDT_MR) The watchdog runs when the processor is in Debug state. Position  */
#define DWDT_NS_WDT_MR_WDDBGHLT_1             (DWDT_NS_WDT_MR_WDDBGHLT_1_Val << DWDT_NS_WDT_MR_WDDBGHLT_Pos) /**< (DWDT_NS_WDT_MR) The watchdog stops when the processor is in Debug state. Position  */
#define DWDT_NS_WDT_MR_WDIDLEHLT_Pos          _U_(29)                                              /**< (DWDT_NS_WDT_MR) Watchdog Idle Halt Position */
#define DWDT_NS_WDT_MR_WDIDLEHLT_Msk          (_U_(0x1) << DWDT_NS_WDT_MR_WDIDLEHLT_Pos)           /**< (DWDT_NS_WDT_MR) Watchdog Idle Halt Mask */
#define DWDT_NS_WDT_MR_WDIDLEHLT(value)       (DWDT_NS_WDT_MR_WDIDLEHLT_Msk & ((value) << DWDT_NS_WDT_MR_WDIDLEHLT_Pos))
#define   DWDT_NS_WDT_MR_WDIDLEHLT_0_Val      _U_(0x0)                                             /**< (DWDT_NS_WDT_MR) The watchdog runs when the system is in Idle state.  */
#define   DWDT_NS_WDT_MR_WDIDLEHLT_1_Val      _U_(0x1)                                             /**< (DWDT_NS_WDT_MR) The watchdog stops when the system is in Idle state.  */
#define DWDT_NS_WDT_MR_WDIDLEHLT_0            (DWDT_NS_WDT_MR_WDIDLEHLT_0_Val << DWDT_NS_WDT_MR_WDIDLEHLT_Pos) /**< (DWDT_NS_WDT_MR) The watchdog runs when the system is in Idle state. Position  */
#define DWDT_NS_WDT_MR_WDIDLEHLT_1            (DWDT_NS_WDT_MR_WDIDLEHLT_1_Val << DWDT_NS_WDT_MR_WDIDLEHLT_Pos) /**< (DWDT_NS_WDT_MR) The watchdog stops when the system is in Idle state. Position  */
#define DWDT_NS_WDT_MR_Msk                    _U_(0x30001020)                                      /**< (DWDT_NS_WDT_MR) Register Mask  */


/* -------- DWDT_NS_WDT_VR : (DWDT Offset: 0x08) ( R/ 32) Never Secure Value Register -------- */
#define DWDT_NS_WDT_VR_RESETVALUE             _U_(0xFFF)                                           /**<  (DWDT_NS_WDT_VR) Never Secure Value Register  Reset Value */

#define DWDT_NS_WDT_VR_COUNTER_Pos            _U_(0)                                               /**< (DWDT_NS_WDT_VR) Watchdog Down Counter Value Position */
#define DWDT_NS_WDT_VR_COUNTER_Msk            (_U_(0xFFF) << DWDT_NS_WDT_VR_COUNTER_Pos)           /**< (DWDT_NS_WDT_VR) Watchdog Down Counter Value Mask */
#define DWDT_NS_WDT_VR_COUNTER(value)         (DWDT_NS_WDT_VR_COUNTER_Msk & ((value) << DWDT_NS_WDT_VR_COUNTER_Pos))
#define DWDT_NS_WDT_VR_Msk                    _U_(0x00000FFF)                                      /**< (DWDT_NS_WDT_VR) Register Mask  */


/* -------- DWDT_NS_WDT_WL : (DWDT Offset: 0x0C) (R/W 32) Never Secure Window Level Register -------- */
#define DWDT_NS_WDT_WL_RESETVALUE             _U_(0xFFF)                                           /**<  (DWDT_NS_WDT_WL) Never Secure Window Level Register  Reset Value */

#define DWDT_NS_WDT_WL_PERIOD_Pos             _U_(0)                                               /**< (DWDT_NS_WDT_WL) Watchdog Period Position */
#define DWDT_NS_WDT_WL_PERIOD_Msk             (_U_(0xFFF) << DWDT_NS_WDT_WL_PERIOD_Pos)            /**< (DWDT_NS_WDT_WL) Watchdog Period Mask */
#define DWDT_NS_WDT_WL_PERIOD(value)          (DWDT_NS_WDT_WL_PERIOD_Msk & ((value) << DWDT_NS_WDT_WL_PERIOD_Pos))
#define DWDT_NS_WDT_WL_RPTH_Pos               _U_(16)                                              /**< (DWDT_NS_WDT_WL) Repeat Threshold Position */
#define DWDT_NS_WDT_WL_RPTH_Msk               (_U_(0xFFF) << DWDT_NS_WDT_WL_RPTH_Pos)              /**< (DWDT_NS_WDT_WL) Repeat Threshold Mask */
#define DWDT_NS_WDT_WL_RPTH(value)            (DWDT_NS_WDT_WL_RPTH_Msk & ((value) << DWDT_NS_WDT_WL_RPTH_Pos))
#define DWDT_NS_WDT_WL_Msk                    _U_(0x0FFF0FFF)                                      /**< (DWDT_NS_WDT_WL) Register Mask  */


/* -------- DWDT_NS_WDT_IL : (DWDT Offset: 0x10) (R/W 32) Never Secure Interrupt Level Register -------- */
#define DWDT_NS_WDT_IL_RESETVALUE             _U_(0xFFF)                                           /**<  (DWDT_NS_WDT_IL) Never Secure Interrupt Level Register  Reset Value */

#define DWDT_NS_WDT_IL_LVLTH_Pos              _U_(0)                                               /**< (DWDT_NS_WDT_IL) Level Threshold Position */
#define DWDT_NS_WDT_IL_LVLTH_Msk              (_U_(0xFFF) << DWDT_NS_WDT_IL_LVLTH_Pos)             /**< (DWDT_NS_WDT_IL) Level Threshold Mask */
#define DWDT_NS_WDT_IL_LVLTH(value)           (DWDT_NS_WDT_IL_LVLTH_Msk & ((value) << DWDT_NS_WDT_IL_LVLTH_Pos))
#define DWDT_NS_WDT_IL_Msk                    _U_(0x00000FFF)                                      /**< (DWDT_NS_WDT_IL) Register Mask  */


/* -------- DWDT_NS_WDT_IER : (DWDT Offset: 0x14) ( /W 32) Never Secure Interrupt Enable Register -------- */
#define DWDT_NS_WDT_IER_PERINT_Pos            _U_(0)                                               /**< (DWDT_NS_WDT_IER) Period Interrupt Enable Position */
#define DWDT_NS_WDT_IER_PERINT_Msk            (_U_(0x1) << DWDT_NS_WDT_IER_PERINT_Pos)             /**< (DWDT_NS_WDT_IER) Period Interrupt Enable Mask */
#define DWDT_NS_WDT_IER_PERINT(value)         (DWDT_NS_WDT_IER_PERINT_Msk & ((value) << DWDT_NS_WDT_IER_PERINT_Pos))
#define   DWDT_NS_WDT_IER_PERINT_0_Val        _U_(0x0)                                             /**< (DWDT_NS_WDT_IER) No effect.  */
#define   DWDT_NS_WDT_IER_PERINT_1_Val        _U_(0x1)                                             /**< (DWDT_NS_WDT_IER) The never secure period failure interrupt is enabled.  */
#define DWDT_NS_WDT_IER_PERINT_0              (DWDT_NS_WDT_IER_PERINT_0_Val << DWDT_NS_WDT_IER_PERINT_Pos) /**< (DWDT_NS_WDT_IER) No effect. Position  */
#define DWDT_NS_WDT_IER_PERINT_1              (DWDT_NS_WDT_IER_PERINT_1_Val << DWDT_NS_WDT_IER_PERINT_Pos) /**< (DWDT_NS_WDT_IER) The never secure period failure interrupt is enabled. Position  */
#define DWDT_NS_WDT_IER_RPTHINT_Pos           _U_(1)                                               /**< (DWDT_NS_WDT_IER) Repeat Threshold Interrupt Enable Position */
#define DWDT_NS_WDT_IER_RPTHINT_Msk           (_U_(0x1) << DWDT_NS_WDT_IER_RPTHINT_Pos)            /**< (DWDT_NS_WDT_IER) Repeat Threshold Interrupt Enable Mask */
#define DWDT_NS_WDT_IER_RPTHINT(value)        (DWDT_NS_WDT_IER_RPTHINT_Msk & ((value) << DWDT_NS_WDT_IER_RPTHINT_Pos))
#define   DWDT_NS_WDT_IER_RPTHINT_0_Val       _U_(0x0)                                             /**< (DWDT_NS_WDT_IER) No effect.  */
#define   DWDT_NS_WDT_IER_RPTHINT_1_Val       _U_(0x1)                                             /**< (DWDT_NS_WDT_IER) The never secure repeat threshold failure interrupt is enabled.  */
#define DWDT_NS_WDT_IER_RPTHINT_0             (DWDT_NS_WDT_IER_RPTHINT_0_Val << DWDT_NS_WDT_IER_RPTHINT_Pos) /**< (DWDT_NS_WDT_IER) No effect. Position  */
#define DWDT_NS_WDT_IER_RPTHINT_1             (DWDT_NS_WDT_IER_RPTHINT_1_Val << DWDT_NS_WDT_IER_RPTHINT_Pos) /**< (DWDT_NS_WDT_IER) The never secure repeat threshold failure interrupt is enabled. Position  */
#define DWDT_NS_WDT_IER_LVLINT_Pos            _U_(2)                                               /**< (DWDT_NS_WDT_IER) Interrupt Level Threshold Interrupt Enable Position */
#define DWDT_NS_WDT_IER_LVLINT_Msk            (_U_(0x1) << DWDT_NS_WDT_IER_LVLINT_Pos)             /**< (DWDT_NS_WDT_IER) Interrupt Level Threshold Interrupt Enable Mask */
#define DWDT_NS_WDT_IER_LVLINT(value)         (DWDT_NS_WDT_IER_LVLINT_Msk & ((value) << DWDT_NS_WDT_IER_LVLINT_Pos))
#define   DWDT_NS_WDT_IER_LVLINT_0_Val        _U_(0x0)                                             /**< (DWDT_NS_WDT_IER) No effect.  */
#define   DWDT_NS_WDT_IER_LVLINT_1_Val        _U_(0x1)                                             /**< (DWDT_NS_WDT_IER) The never secure interrupt threshold failure interrupt is enabled.  */
#define DWDT_NS_WDT_IER_LVLINT_0              (DWDT_NS_WDT_IER_LVLINT_0_Val << DWDT_NS_WDT_IER_LVLINT_Pos) /**< (DWDT_NS_WDT_IER) No effect. Position  */
#define DWDT_NS_WDT_IER_LVLINT_1              (DWDT_NS_WDT_IER_LVLINT_1_Val << DWDT_NS_WDT_IER_LVLINT_Pos) /**< (DWDT_NS_WDT_IER) The never secure interrupt threshold failure interrupt is enabled. Position  */
#define DWDT_NS_WDT_IER_Msk                   _U_(0x00000007)                                      /**< (DWDT_NS_WDT_IER) Register Mask  */


/* -------- DWDT_NS_WDT_IDR : (DWDT Offset: 0x18) ( /W 32) Never Secure Interrupt Disable Register -------- */
#define DWDT_NS_WDT_IDR_PERINT_Pos            _U_(0)                                               /**< (DWDT_NS_WDT_IDR) Period Interrupt Disable Position */
#define DWDT_NS_WDT_IDR_PERINT_Msk            (_U_(0x1) << DWDT_NS_WDT_IDR_PERINT_Pos)             /**< (DWDT_NS_WDT_IDR) Period Interrupt Disable Mask */
#define DWDT_NS_WDT_IDR_PERINT(value)         (DWDT_NS_WDT_IDR_PERINT_Msk & ((value) << DWDT_NS_WDT_IDR_PERINT_Pos))
#define   DWDT_NS_WDT_IDR_PERINT_0_Val        _U_(0x0)                                             /**< (DWDT_NS_WDT_IDR) No effect.  */
#define   DWDT_NS_WDT_IDR_PERINT_1_Val        _U_(0x1)                                             /**< (DWDT_NS_WDT_IDR) The never secure period failure interrupt is disabled.  */
#define DWDT_NS_WDT_IDR_PERINT_0              (DWDT_NS_WDT_IDR_PERINT_0_Val << DWDT_NS_WDT_IDR_PERINT_Pos) /**< (DWDT_NS_WDT_IDR) No effect. Position  */
#define DWDT_NS_WDT_IDR_PERINT_1              (DWDT_NS_WDT_IDR_PERINT_1_Val << DWDT_NS_WDT_IDR_PERINT_Pos) /**< (DWDT_NS_WDT_IDR) The never secure period failure interrupt is disabled. Position  */
#define DWDT_NS_WDT_IDR_RPTHINT_Pos           _U_(1)                                               /**< (DWDT_NS_WDT_IDR) Repeat Threshold Interrupt Disable Position */
#define DWDT_NS_WDT_IDR_RPTHINT_Msk           (_U_(0x1) << DWDT_NS_WDT_IDR_RPTHINT_Pos)            /**< (DWDT_NS_WDT_IDR) Repeat Threshold Interrupt Disable Mask */
#define DWDT_NS_WDT_IDR_RPTHINT(value)        (DWDT_NS_WDT_IDR_RPTHINT_Msk & ((value) << DWDT_NS_WDT_IDR_RPTHINT_Pos))
#define   DWDT_NS_WDT_IDR_RPTHINT_0_Val       _U_(0x0)                                             /**< (DWDT_NS_WDT_IDR) No effect.  */
#define   DWDT_NS_WDT_IDR_RPTHINT_1_Val       _U_(0x1)                                             /**< (DWDT_NS_WDT_IDR) The never secure repeat threshold failure interrupt is disabled.  */
#define DWDT_NS_WDT_IDR_RPTHINT_0             (DWDT_NS_WDT_IDR_RPTHINT_0_Val << DWDT_NS_WDT_IDR_RPTHINT_Pos) /**< (DWDT_NS_WDT_IDR) No effect. Position  */
#define DWDT_NS_WDT_IDR_RPTHINT_1             (DWDT_NS_WDT_IDR_RPTHINT_1_Val << DWDT_NS_WDT_IDR_RPTHINT_Pos) /**< (DWDT_NS_WDT_IDR) The never secure repeat threshold failure interrupt is disabled. Position  */
#define DWDT_NS_WDT_IDR_LVLINT_Pos            _U_(2)                                               /**< (DWDT_NS_WDT_IDR) Interrupt Level Threshold Interrupt Disable Position */
#define DWDT_NS_WDT_IDR_LVLINT_Msk            (_U_(0x1) << DWDT_NS_WDT_IDR_LVLINT_Pos)             /**< (DWDT_NS_WDT_IDR) Interrupt Level Threshold Interrupt Disable Mask */
#define DWDT_NS_WDT_IDR_LVLINT(value)         (DWDT_NS_WDT_IDR_LVLINT_Msk & ((value) << DWDT_NS_WDT_IDR_LVLINT_Pos))
#define   DWDT_NS_WDT_IDR_LVLINT_0_Val        _U_(0x0)                                             /**< (DWDT_NS_WDT_IDR) No effect.  */
#define   DWDT_NS_WDT_IDR_LVLINT_1_Val        _U_(0x1)                                             /**< (DWDT_NS_WDT_IDR) The never secure interrupt threshold failure interrupt is disabled.  */
#define DWDT_NS_WDT_IDR_LVLINT_0              (DWDT_NS_WDT_IDR_LVLINT_0_Val << DWDT_NS_WDT_IDR_LVLINT_Pos) /**< (DWDT_NS_WDT_IDR) No effect. Position  */
#define DWDT_NS_WDT_IDR_LVLINT_1              (DWDT_NS_WDT_IDR_LVLINT_1_Val << DWDT_NS_WDT_IDR_LVLINT_Pos) /**< (DWDT_NS_WDT_IDR) The never secure interrupt threshold failure interrupt is disabled. Position  */
#define DWDT_NS_WDT_IDR_Msk                   _U_(0x00000007)                                      /**< (DWDT_NS_WDT_IDR) Register Mask  */


/* -------- DWDT_NS_WDT_ISR : (DWDT Offset: 0x1C) ( R/ 32) Never Secure Interrupt Status Register -------- */
#define DWDT_NS_WDT_ISR_RESETVALUE            _U_(0x00)                                            /**<  (DWDT_NS_WDT_ISR) Never Secure Interrupt Status Register  Reset Value */

#define DWDT_NS_WDT_ISR_PERINT_Pos            _U_(0)                                               /**< (DWDT_NS_WDT_ISR) Period Interrupt Status Position */
#define DWDT_NS_WDT_ISR_PERINT_Msk            (_U_(0x1) << DWDT_NS_WDT_ISR_PERINT_Pos)             /**< (DWDT_NS_WDT_ISR) Period Interrupt Status Mask */
#define DWDT_NS_WDT_ISR_PERINT(value)         (DWDT_NS_WDT_ISR_PERINT_Msk & ((value) << DWDT_NS_WDT_ISR_PERINT_Pos))
#define   DWDT_NS_WDT_ISR_PERINT_0_Val        _U_(0x0)                                             /**< (DWDT_NS_WDT_ISR) No period failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define   DWDT_NS_WDT_ISR_PERINT_1_Val        _U_(0x1)                                             /**< (DWDT_NS_WDT_ISR) At least one period failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define DWDT_NS_WDT_ISR_PERINT_0              (DWDT_NS_WDT_ISR_PERINT_0_Val << DWDT_NS_WDT_ISR_PERINT_Pos) /**< (DWDT_NS_WDT_ISR) No period failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position  */
#define DWDT_NS_WDT_ISR_PERINT_1              (DWDT_NS_WDT_ISR_PERINT_1_Val << DWDT_NS_WDT_ISR_PERINT_Pos) /**< (DWDT_NS_WDT_ISR) At least one period failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position  */
#define DWDT_NS_WDT_ISR_RPTHINT_Pos           _U_(1)                                               /**< (DWDT_NS_WDT_ISR) Repeat Threshold Interrupt Enable Position */
#define DWDT_NS_WDT_ISR_RPTHINT_Msk           (_U_(0x1) << DWDT_NS_WDT_ISR_RPTHINT_Pos)            /**< (DWDT_NS_WDT_ISR) Repeat Threshold Interrupt Enable Mask */
#define DWDT_NS_WDT_ISR_RPTHINT(value)        (DWDT_NS_WDT_ISR_RPTHINT_Msk & ((value) << DWDT_NS_WDT_ISR_RPTHINT_Pos))
#define   DWDT_NS_WDT_ISR_RPTHINT_0_Val       _U_(0x0)                                             /**< (DWDT_NS_WDT_ISR) No repeat threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define   DWDT_NS_WDT_ISR_RPTHINT_1_Val       _U_(0x1)                                             /**< (DWDT_NS_WDT_ISR) At least one repeat threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define DWDT_NS_WDT_ISR_RPTHINT_0             (DWDT_NS_WDT_ISR_RPTHINT_0_Val << DWDT_NS_WDT_ISR_RPTHINT_Pos) /**< (DWDT_NS_WDT_ISR) No repeat threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position  */
#define DWDT_NS_WDT_ISR_RPTHINT_1             (DWDT_NS_WDT_ISR_RPTHINT_1_Val << DWDT_NS_WDT_ISR_RPTHINT_Pos) /**< (DWDT_NS_WDT_ISR) At least one repeat threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position  */
#define DWDT_NS_WDT_ISR_LVLINT_Pos            _U_(2)                                               /**< (DWDT_NS_WDT_ISR) Interrupt Level Threshold Interrupt Enable Position */
#define DWDT_NS_WDT_ISR_LVLINT_Msk            (_U_(0x1) << DWDT_NS_WDT_ISR_LVLINT_Pos)             /**< (DWDT_NS_WDT_ISR) Interrupt Level Threshold Interrupt Enable Mask */
#define DWDT_NS_WDT_ISR_LVLINT(value)         (DWDT_NS_WDT_ISR_LVLINT_Msk & ((value) << DWDT_NS_WDT_ISR_LVLINT_Pos))
#define   DWDT_NS_WDT_ISR_LVLINT_0_Val        _U_(0x0)                                             /**< (DWDT_NS_WDT_ISR) No level threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define   DWDT_NS_WDT_ISR_LVLINT_1_Val        _U_(0x1)                                             /**< (DWDT_NS_WDT_ISR) At least one level threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define DWDT_NS_WDT_ISR_LVLINT_0              (DWDT_NS_WDT_ISR_LVLINT_0_Val << DWDT_NS_WDT_ISR_LVLINT_Pos) /**< (DWDT_NS_WDT_ISR) No level threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position  */
#define DWDT_NS_WDT_ISR_LVLINT_1              (DWDT_NS_WDT_ISR_LVLINT_1_Val << DWDT_NS_WDT_ISR_LVLINT_Pos) /**< (DWDT_NS_WDT_ISR) At least one level threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position  */
#define DWDT_NS_WDT_ISR_Msk                   _U_(0x00000007)                                      /**< (DWDT_NS_WDT_ISR) Register Mask  */


/* -------- DWDT_NS_WDT_IMR : (DWDT Offset: 0x20) ( R/ 32) Never Secure Interrupt Mask Register -------- */
#define DWDT_NS_WDT_IMR_RESETVALUE            _U_(0x00)                                            /**<  (DWDT_NS_WDT_IMR) Never Secure Interrupt Mask Register  Reset Value */

#define DWDT_NS_WDT_IMR_PERINT_Pos            _U_(0)                                               /**< (DWDT_NS_WDT_IMR) Period Interrupt Mask Position */
#define DWDT_NS_WDT_IMR_PERINT_Msk            (_U_(0x1) << DWDT_NS_WDT_IMR_PERINT_Pos)             /**< (DWDT_NS_WDT_IMR) Period Interrupt Mask Mask */
#define DWDT_NS_WDT_IMR_PERINT(value)         (DWDT_NS_WDT_IMR_PERINT_Msk & ((value) << DWDT_NS_WDT_IMR_PERINT_Pos))
#define   DWDT_NS_WDT_IMR_PERINT_0_Val        _U_(0x0)                                             /**< (DWDT_NS_WDT_IMR) Interrupt on PERINT is disabled.  */
#define   DWDT_NS_WDT_IMR_PERINT_1_Val        _U_(0x1)                                             /**< (DWDT_NS_WDT_IMR) Interrupt on PERINT is enabled.  */
#define DWDT_NS_WDT_IMR_PERINT_0              (DWDT_NS_WDT_IMR_PERINT_0_Val << DWDT_NS_WDT_IMR_PERINT_Pos) /**< (DWDT_NS_WDT_IMR) Interrupt on PERINT is disabled. Position  */
#define DWDT_NS_WDT_IMR_PERINT_1              (DWDT_NS_WDT_IMR_PERINT_1_Val << DWDT_NS_WDT_IMR_PERINT_Pos) /**< (DWDT_NS_WDT_IMR) Interrupt on PERINT is enabled. Position  */
#define DWDT_NS_WDT_IMR_RPTHINT_Pos           _U_(1)                                               /**< (DWDT_NS_WDT_IMR) Repeat Threshold Interrupt Mask Position */
#define DWDT_NS_WDT_IMR_RPTHINT_Msk           (_U_(0x1) << DWDT_NS_WDT_IMR_RPTHINT_Pos)            /**< (DWDT_NS_WDT_IMR) Repeat Threshold Interrupt Mask Mask */
#define DWDT_NS_WDT_IMR_RPTHINT(value)        (DWDT_NS_WDT_IMR_RPTHINT_Msk & ((value) << DWDT_NS_WDT_IMR_RPTHINT_Pos))
#define   DWDT_NS_WDT_IMR_RPTHINT_0_Val       _U_(0x0)                                             /**< (DWDT_NS_WDT_IMR) Interrupt on RPTHINT is disabled.  */
#define   DWDT_NS_WDT_IMR_RPTHINT_1_Val       _U_(0x1)                                             /**< (DWDT_NS_WDT_IMR) Interrupt on RPTHINT is enabled.  */
#define DWDT_NS_WDT_IMR_RPTHINT_0             (DWDT_NS_WDT_IMR_RPTHINT_0_Val << DWDT_NS_WDT_IMR_RPTHINT_Pos) /**< (DWDT_NS_WDT_IMR) Interrupt on RPTHINT is disabled. Position  */
#define DWDT_NS_WDT_IMR_RPTHINT_1             (DWDT_NS_WDT_IMR_RPTHINT_1_Val << DWDT_NS_WDT_IMR_RPTHINT_Pos) /**< (DWDT_NS_WDT_IMR) Interrupt on RPTHINT is enabled. Position  */
#define DWDT_NS_WDT_IMR_LVLINT_Pos            _U_(2)                                               /**< (DWDT_NS_WDT_IMR) Interrupt Level Threshold Interrupt Mask Position */
#define DWDT_NS_WDT_IMR_LVLINT_Msk            (_U_(0x1) << DWDT_NS_WDT_IMR_LVLINT_Pos)             /**< (DWDT_NS_WDT_IMR) Interrupt Level Threshold Interrupt Mask Mask */
#define DWDT_NS_WDT_IMR_LVLINT(value)         (DWDT_NS_WDT_IMR_LVLINT_Msk & ((value) << DWDT_NS_WDT_IMR_LVLINT_Pos))
#define   DWDT_NS_WDT_IMR_LVLINT_0_Val        _U_(0x0)                                             /**< (DWDT_NS_WDT_IMR) Interrupt on LVLINT is disabled.  */
#define   DWDT_NS_WDT_IMR_LVLINT_1_Val        _U_(0x1)                                             /**< (DWDT_NS_WDT_IMR) Interrupt on LVLINT is enabled.  */
#define DWDT_NS_WDT_IMR_LVLINT_0              (DWDT_NS_WDT_IMR_LVLINT_0_Val << DWDT_NS_WDT_IMR_LVLINT_Pos) /**< (DWDT_NS_WDT_IMR) Interrupt on LVLINT is disabled. Position  */
#define DWDT_NS_WDT_IMR_LVLINT_1              (DWDT_NS_WDT_IMR_LVLINT_1_Val << DWDT_NS_WDT_IMR_LVLINT_Pos) /**< (DWDT_NS_WDT_IMR) Interrupt on LVLINT is enabled. Position  */
#define DWDT_NS_WDT_IMR_Msk                   _U_(0x00000007)                                      /**< (DWDT_NS_WDT_IMR) Register Mask  */


/* -------- DWDT_PS_WDT_CR : (DWDT Offset: 0x1180) ( /W 32) Programmable Secure Control Register -------- */
#define DWDT_PS_WDT_CR_WDRSTT_Pos             _U_(0)                                               /**< (DWDT_PS_WDT_CR) Watchdog Restart Position */
#define DWDT_PS_WDT_CR_WDRSTT_Msk             (_U_(0x1) << DWDT_PS_WDT_CR_WDRSTT_Pos)              /**< (DWDT_PS_WDT_CR) Watchdog Restart Mask */
#define DWDT_PS_WDT_CR_WDRSTT(value)          (DWDT_PS_WDT_CR_WDRSTT_Msk & ((value) << DWDT_PS_WDT_CR_WDRSTT_Pos))
#define   DWDT_PS_WDT_CR_WDRSTT_0_Val         _U_(0x0)                                             /**< (DWDT_PS_WDT_CR) No effect.  */
#define   DWDT_PS_WDT_CR_WDRSTT_1_Val         _U_(0x1)                                             /**< (DWDT_PS_WDT_CR) Restarts the watchdog if KEY is written to 0xA5.  */
#define DWDT_PS_WDT_CR_WDRSTT_0               (DWDT_PS_WDT_CR_WDRSTT_0_Val << DWDT_PS_WDT_CR_WDRSTT_Pos) /**< (DWDT_PS_WDT_CR) No effect. Position  */
#define DWDT_PS_WDT_CR_WDRSTT_1               (DWDT_PS_WDT_CR_WDRSTT_1_Val << DWDT_PS_WDT_CR_WDRSTT_Pos) /**< (DWDT_PS_WDT_CR) Restarts the watchdog if KEY is written to 0xA5. Position  */
#define DWDT_PS_WDT_CR_LOCKMR_Pos             _U_(4)                                               /**< (DWDT_PS_WDT_CR) Lock Mode Register Write Access Position */
#define DWDT_PS_WDT_CR_LOCKMR_Msk             (_U_(0x1) << DWDT_PS_WDT_CR_LOCKMR_Pos)              /**< (DWDT_PS_WDT_CR) Lock Mode Register Write Access Mask */
#define DWDT_PS_WDT_CR_LOCKMR(value)          (DWDT_PS_WDT_CR_LOCKMR_Msk & ((value) << DWDT_PS_WDT_CR_LOCKMR_Pos))
#define   DWDT_PS_WDT_CR_LOCKMR_0_Val         _U_(0x0)                                             /**< (DWDT_PS_WDT_CR) No effect.  */
#define   DWDT_PS_WDT_CR_LOCKMR_1_Val         _U_(0x1)                                             /**< (DWDT_PS_WDT_CR) Locks the configuration registers if KEY is written to 0xA5. Write accesses to PS_WDT_MR, PS_WDT_VR, PS_WDT_WL and PS_WDT_IL have no effect.  */
#define DWDT_PS_WDT_CR_LOCKMR_0               (DWDT_PS_WDT_CR_LOCKMR_0_Val << DWDT_PS_WDT_CR_LOCKMR_Pos) /**< (DWDT_PS_WDT_CR) No effect. Position  */
#define DWDT_PS_WDT_CR_LOCKMR_1               (DWDT_PS_WDT_CR_LOCKMR_1_Val << DWDT_PS_WDT_CR_LOCKMR_Pos) /**< (DWDT_PS_WDT_CR) Locks the configuration registers if KEY is written to 0xA5. Write accesses to PS_WDT_MR, PS_WDT_VR, PS_WDT_WL and PS_WDT_IL have no effect. Position  */
#define DWDT_PS_WDT_CR_KEY_Pos                _U_(24)                                              /**< (DWDT_PS_WDT_CR) Password Position */
#define DWDT_PS_WDT_CR_KEY_Msk                (_U_(0xFF) << DWDT_PS_WDT_CR_KEY_Pos)                /**< (DWDT_PS_WDT_CR) Password Mask */
#define DWDT_PS_WDT_CR_KEY(value)             (DWDT_PS_WDT_CR_KEY_Msk & ((value) << DWDT_PS_WDT_CR_KEY_Pos))
#define   DWDT_PS_WDT_CR_KEY_PASSWD_Val       _U_(0xA5)                                            /**< (DWDT_PS_WDT_CR) Writing any other value in this field aborts the write operation.  */
#define DWDT_PS_WDT_CR_KEY_PASSWD             (DWDT_PS_WDT_CR_KEY_PASSWD_Val << DWDT_PS_WDT_CR_KEY_Pos) /**< (DWDT_PS_WDT_CR) Writing any other value in this field aborts the write operation. Position  */
#define DWDT_PS_WDT_CR_Msk                    _U_(0xFF000011)                                      /**< (DWDT_PS_WDT_CR) Register Mask  */


/* -------- DWDT_PS_WDT_MR : (DWDT Offset: 0x1184) (R/W 32) Programmable Secure Mode Register -------- */
#define DWDT_PS_WDT_MR_RESETVALUE             _U_(0x30)                                            /**<  (DWDT_PS_WDT_MR) Programmable Secure Mode Register  Reset Value */

#define DWDT_PS_WDT_MR_PERIODRST_Pos          _U_(4)                                               /**< (DWDT_PS_WDT_MR) Period Reset Position */
#define DWDT_PS_WDT_MR_PERIODRST_Msk          (_U_(0x1) << DWDT_PS_WDT_MR_PERIODRST_Pos)           /**< (DWDT_PS_WDT_MR) Period Reset Mask */
#define DWDT_PS_WDT_MR_PERIODRST(value)       (DWDT_PS_WDT_MR_PERIODRST_Msk & ((value) << DWDT_PS_WDT_MR_PERIODRST_Pos))
#define   DWDT_PS_WDT_MR_PERIODRST_0_Val      _U_(0x0)                                             /**< (DWDT_PS_WDT_MR) No reset is generated if the watchdog down counter reaches 0  */
#define   DWDT_PS_WDT_MR_PERIODRST_1_Val      _U_(0x1)                                             /**< (DWDT_PS_WDT_MR) A reset is generated once the watchdog down counter reaches 0  */
#define DWDT_PS_WDT_MR_PERIODRST_0            (DWDT_PS_WDT_MR_PERIODRST_0_Val << DWDT_PS_WDT_MR_PERIODRST_Pos) /**< (DWDT_PS_WDT_MR) No reset is generated if the watchdog down counter reaches 0 Position  */
#define DWDT_PS_WDT_MR_PERIODRST_1            (DWDT_PS_WDT_MR_PERIODRST_1_Val << DWDT_PS_WDT_MR_PERIODRST_Pos) /**< (DWDT_PS_WDT_MR) A reset is generated once the watchdog down counter reaches 0 Position  */
#define DWDT_PS_WDT_MR_RPTHRST_Pos            _U_(5)                                               /**< (DWDT_PS_WDT_MR) Repeat Threshold Reset Position */
#define DWDT_PS_WDT_MR_RPTHRST_Msk            (_U_(0x1) << DWDT_PS_WDT_MR_RPTHRST_Pos)             /**< (DWDT_PS_WDT_MR) Repeat Threshold Reset Mask */
#define DWDT_PS_WDT_MR_RPTHRST(value)         (DWDT_PS_WDT_MR_RPTHRST_Msk & ((value) << DWDT_PS_WDT_MR_RPTHRST_Pos))
#define   DWDT_PS_WDT_MR_RPTHRST_0_Val        _U_(0x0)                                             /**< (DWDT_PS_WDT_MR) No reset is generated if the watchdog is restarted before the RPTH threshold  */
#define   DWDT_PS_WDT_MR_RPTHRST_1_Val        _U_(0x1)                                             /**< (DWDT_PS_WDT_MR) A reset is generated if the watchdog is restarted before the RPTH threshold  */
#define DWDT_PS_WDT_MR_RPTHRST_0              (DWDT_PS_WDT_MR_RPTHRST_0_Val << DWDT_PS_WDT_MR_RPTHRST_Pos) /**< (DWDT_PS_WDT_MR) No reset is generated if the watchdog is restarted before the RPTH threshold Position  */
#define DWDT_PS_WDT_MR_RPTHRST_1              (DWDT_PS_WDT_MR_RPTHRST_1_Val << DWDT_PS_WDT_MR_RPTHRST_Pos) /**< (DWDT_PS_WDT_MR) A reset is generated if the watchdog is restarted before the RPTH threshold Position  */
#define DWDT_PS_WDT_MR_WDDIS_Pos              _U_(12)                                              /**< (DWDT_PS_WDT_MR) Watchdog Disable Position */
#define DWDT_PS_WDT_MR_WDDIS_Msk              (_U_(0x1) << DWDT_PS_WDT_MR_WDDIS_Pos)               /**< (DWDT_PS_WDT_MR) Watchdog Disable Mask */
#define DWDT_PS_WDT_MR_WDDIS(value)           (DWDT_PS_WDT_MR_WDDIS_Msk & ((value) << DWDT_PS_WDT_MR_WDDIS_Pos))
#define   DWDT_PS_WDT_MR_WDDIS_0_Val          _U_(0x0)                                             /**< (DWDT_PS_WDT_MR) Enables the Watchdog Timer.  */
#define   DWDT_PS_WDT_MR_WDDIS_1_Val          _U_(0x1)                                             /**< (DWDT_PS_WDT_MR) Disables the Watchdog Timer.  */
#define DWDT_PS_WDT_MR_WDDIS_0                (DWDT_PS_WDT_MR_WDDIS_0_Val << DWDT_PS_WDT_MR_WDDIS_Pos) /**< (DWDT_PS_WDT_MR) Enables the Watchdog Timer. Position  */
#define DWDT_PS_WDT_MR_WDDIS_1                (DWDT_PS_WDT_MR_WDDIS_1_Val << DWDT_PS_WDT_MR_WDDIS_Pos) /**< (DWDT_PS_WDT_MR) Disables the Watchdog Timer. Position  */
#define DWDT_PS_WDT_MR_WDDBGHLT_Pos           _U_(28)                                              /**< (DWDT_PS_WDT_MR) Watchdog Debug Halt Position */
#define DWDT_PS_WDT_MR_WDDBGHLT_Msk           (_U_(0x1) << DWDT_PS_WDT_MR_WDDBGHLT_Pos)            /**< (DWDT_PS_WDT_MR) Watchdog Debug Halt Mask */
#define DWDT_PS_WDT_MR_WDDBGHLT(value)        (DWDT_PS_WDT_MR_WDDBGHLT_Msk & ((value) << DWDT_PS_WDT_MR_WDDBGHLT_Pos))
#define   DWDT_PS_WDT_MR_WDDBGHLT_0_Val       _U_(0x0)                                             /**< (DWDT_PS_WDT_MR) The watchdog runs when the processor is in Debug state.  */
#define   DWDT_PS_WDT_MR_WDDBGHLT_1_Val       _U_(0x1)                                             /**< (DWDT_PS_WDT_MR) The watchdog stops when the processor is in Debug state.  */
#define DWDT_PS_WDT_MR_WDDBGHLT_0             (DWDT_PS_WDT_MR_WDDBGHLT_0_Val << DWDT_PS_WDT_MR_WDDBGHLT_Pos) /**< (DWDT_PS_WDT_MR) The watchdog runs when the processor is in Debug state. Position  */
#define DWDT_PS_WDT_MR_WDDBGHLT_1             (DWDT_PS_WDT_MR_WDDBGHLT_1_Val << DWDT_PS_WDT_MR_WDDBGHLT_Pos) /**< (DWDT_PS_WDT_MR) The watchdog stops when the processor is in Debug state. Position  */
#define DWDT_PS_WDT_MR_WDIDLEHLT_Pos          _U_(29)                                              /**< (DWDT_PS_WDT_MR) Watchdog Idle Halt Position */
#define DWDT_PS_WDT_MR_WDIDLEHLT_Msk          (_U_(0x1) << DWDT_PS_WDT_MR_WDIDLEHLT_Pos)           /**< (DWDT_PS_WDT_MR) Watchdog Idle Halt Mask */
#define DWDT_PS_WDT_MR_WDIDLEHLT(value)       (DWDT_PS_WDT_MR_WDIDLEHLT_Msk & ((value) << DWDT_PS_WDT_MR_WDIDLEHLT_Pos))
#define   DWDT_PS_WDT_MR_WDIDLEHLT_0_Val      _U_(0x0)                                             /**< (DWDT_PS_WDT_MR) The watchdog runs when the system is in Idle state.  */
#define   DWDT_PS_WDT_MR_WDIDLEHLT_1_Val      _U_(0x1)                                             /**< (DWDT_PS_WDT_MR) The watchdog stops when the system is in Idle state.  */
#define DWDT_PS_WDT_MR_WDIDLEHLT_0            (DWDT_PS_WDT_MR_WDIDLEHLT_0_Val << DWDT_PS_WDT_MR_WDIDLEHLT_Pos) /**< (DWDT_PS_WDT_MR) The watchdog runs when the system is in Idle state. Position  */
#define DWDT_PS_WDT_MR_WDIDLEHLT_1            (DWDT_PS_WDT_MR_WDIDLEHLT_1_Val << DWDT_PS_WDT_MR_WDIDLEHLT_Pos) /**< (DWDT_PS_WDT_MR) The watchdog stops when the system is in Idle state. Position  */
#define DWDT_PS_WDT_MR_Msk                    _U_(0x30001030)                                      /**< (DWDT_PS_WDT_MR) Register Mask  */


/* -------- DWDT_PS_WDT_VR : (DWDT Offset: 0x1188) ( R/ 32) Programmable Secure Value Register -------- */
#define DWDT_PS_WDT_VR_RESETVALUE             _U_(0x00)                                            /**<  (DWDT_PS_WDT_VR) Programmable Secure Value Register  Reset Value */

#define DWDT_PS_WDT_VR_COUNTER_Pos            _U_(0)                                               /**< (DWDT_PS_WDT_VR) Watchdog Down Counter Value Position */
#define DWDT_PS_WDT_VR_COUNTER_Msk            (_U_(0xFFF) << DWDT_PS_WDT_VR_COUNTER_Pos)           /**< (DWDT_PS_WDT_VR) Watchdog Down Counter Value Mask */
#define DWDT_PS_WDT_VR_COUNTER(value)         (DWDT_PS_WDT_VR_COUNTER_Msk & ((value) << DWDT_PS_WDT_VR_COUNTER_Pos))
#define DWDT_PS_WDT_VR_Msk                    _U_(0x00000FFF)                                      /**< (DWDT_PS_WDT_VR) Register Mask  */


/* -------- DWDT_PS_WDT_WL : (DWDT Offset: 0x118C) (R/W 32) Programmable Secure Window Level -------- */
#define DWDT_PS_WDT_WL_RESETVALUE             _U_(0xFFF)                                           /**<  (DWDT_PS_WDT_WL) Programmable Secure Window Level  Reset Value */

#define DWDT_PS_WDT_WL_PERIOD_Pos             _U_(0)                                               /**< (DWDT_PS_WDT_WL) Watchdog Period Position */
#define DWDT_PS_WDT_WL_PERIOD_Msk             (_U_(0xFFF) << DWDT_PS_WDT_WL_PERIOD_Pos)            /**< (DWDT_PS_WDT_WL) Watchdog Period Mask */
#define DWDT_PS_WDT_WL_PERIOD(value)          (DWDT_PS_WDT_WL_PERIOD_Msk & ((value) << DWDT_PS_WDT_WL_PERIOD_Pos))
#define DWDT_PS_WDT_WL_RPTH_Pos               _U_(16)                                              /**< (DWDT_PS_WDT_WL) Repeat Threshold Position */
#define DWDT_PS_WDT_WL_RPTH_Msk               (_U_(0xFFF) << DWDT_PS_WDT_WL_RPTH_Pos)              /**< (DWDT_PS_WDT_WL) Repeat Threshold Mask */
#define DWDT_PS_WDT_WL_RPTH(value)            (DWDT_PS_WDT_WL_RPTH_Msk & ((value) << DWDT_PS_WDT_WL_RPTH_Pos))
#define DWDT_PS_WDT_WL_Msk                    _U_(0x0FFF0FFF)                                      /**< (DWDT_PS_WDT_WL) Register Mask  */


/* -------- DWDT_PS_WDT_IL : (DWDT Offset: 0x1190) (R/W 32) Programmable Secure Interrupt Level -------- */
#define DWDT_PS_WDT_IL_RESETVALUE             _U_(0xFFF)                                           /**<  (DWDT_PS_WDT_IL) Programmable Secure Interrupt Level  Reset Value */

#define DWDT_PS_WDT_IL_LVLTH_Pos              _U_(0)                                               /**< (DWDT_PS_WDT_IL) Level Threshold Position */
#define DWDT_PS_WDT_IL_LVLTH_Msk              (_U_(0xFFF) << DWDT_PS_WDT_IL_LVLTH_Pos)             /**< (DWDT_PS_WDT_IL) Level Threshold Mask */
#define DWDT_PS_WDT_IL_LVLTH(value)           (DWDT_PS_WDT_IL_LVLTH_Msk & ((value) << DWDT_PS_WDT_IL_LVLTH_Pos))
#define DWDT_PS_WDT_IL_Msk                    _U_(0x00000FFF)                                      /**< (DWDT_PS_WDT_IL) Register Mask  */


/* -------- DWDT_PS_WDT_IER : (DWDT Offset: 0x1194) ( /W 32) Programmable Secure Interrupt Enable Register -------- */
#define DWDT_PS_WDT_IER_PERINT_Pos            _U_(0)                                               /**< (DWDT_PS_WDT_IER) Period Interrupt Enable Position */
#define DWDT_PS_WDT_IER_PERINT_Msk            (_U_(0x1) << DWDT_PS_WDT_IER_PERINT_Pos)             /**< (DWDT_PS_WDT_IER) Period Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_PERINT(value)         (DWDT_PS_WDT_IER_PERINT_Msk & ((value) << DWDT_PS_WDT_IER_PERINT_Pos))
#define   DWDT_PS_WDT_IER_PERINT_0_Val        _U_(0x0)                                             /**< (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_PERINT_1_Val        _U_(0x1)                                             /**< (DWDT_PS_WDT_IER) The programmable secure period failure interrupt is enabled.  */
#define DWDT_PS_WDT_IER_PERINT_0              (DWDT_PS_WDT_IER_PERINT_0_Val << DWDT_PS_WDT_IER_PERINT_Pos) /**< (DWDT_PS_WDT_IER) No effect. Position  */
#define DWDT_PS_WDT_IER_PERINT_1              (DWDT_PS_WDT_IER_PERINT_1_Val << DWDT_PS_WDT_IER_PERINT_Pos) /**< (DWDT_PS_WDT_IER) The programmable secure period failure interrupt is enabled. Position  */
#define DWDT_PS_WDT_IER_RPTHINT_Pos           _U_(1)                                               /**< (DWDT_PS_WDT_IER) Repeat Threshold Interrupt Enable Position */
#define DWDT_PS_WDT_IER_RPTHINT_Msk           (_U_(0x1) << DWDT_PS_WDT_IER_RPTHINT_Pos)            /**< (DWDT_PS_WDT_IER) Repeat Threshold Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_RPTHINT(value)        (DWDT_PS_WDT_IER_RPTHINT_Msk & ((value) << DWDT_PS_WDT_IER_RPTHINT_Pos))
#define   DWDT_PS_WDT_IER_RPTHINT_0_Val       _U_(0x0)                                             /**< (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_RPTHINT_1_Val       _U_(0x1)                                             /**< (DWDT_PS_WDT_IER) The programmable secure repeat threshold failure interrupt is enabled.  */
#define DWDT_PS_WDT_IER_RPTHINT_0             (DWDT_PS_WDT_IER_RPTHINT_0_Val << DWDT_PS_WDT_IER_RPTHINT_Pos) /**< (DWDT_PS_WDT_IER) No effect. Position  */
#define DWDT_PS_WDT_IER_RPTHINT_1             (DWDT_PS_WDT_IER_RPTHINT_1_Val << DWDT_PS_WDT_IER_RPTHINT_Pos) /**< (DWDT_PS_WDT_IER) The programmable secure repeat threshold failure interrupt is enabled. Position  */
#define DWDT_PS_WDT_IER_LVLINT_Pos            _U_(2)                                               /**< (DWDT_PS_WDT_IER) Interrupt Level Threshold Interrupt Enable Position */
#define DWDT_PS_WDT_IER_LVLINT_Msk            (_U_(0x1) << DWDT_PS_WDT_IER_LVLINT_Pos)             /**< (DWDT_PS_WDT_IER) Interrupt Level Threshold Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_LVLINT(value)         (DWDT_PS_WDT_IER_LVLINT_Msk & ((value) << DWDT_PS_WDT_IER_LVLINT_Pos))
#define   DWDT_PS_WDT_IER_LVLINT_0_Val        _U_(0x0)                                             /**< (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_LVLINT_1_Val        _U_(0x1)                                             /**< (DWDT_PS_WDT_IER) The programmable secure interrupt threshold failure interrupt is enabled.  */
#define DWDT_PS_WDT_IER_LVLINT_0              (DWDT_PS_WDT_IER_LVLINT_0_Val << DWDT_PS_WDT_IER_LVLINT_Pos) /**< (DWDT_PS_WDT_IER) No effect. Position  */
#define DWDT_PS_WDT_IER_LVLINT_1              (DWDT_PS_WDT_IER_LVLINT_1_Val << DWDT_PS_WDT_IER_LVLINT_Pos) /**< (DWDT_PS_WDT_IER) The programmable secure interrupt threshold failure interrupt is enabled. Position  */
#define DWDT_PS_WDT_IER_NSPERINT_Pos          _U_(3)                                               /**< (DWDT_PS_WDT_IER) Never Secure Period Interrupt Enable Position */
#define DWDT_PS_WDT_IER_NSPERINT_Msk          (_U_(0x1) << DWDT_PS_WDT_IER_NSPERINT_Pos)           /**< (DWDT_PS_WDT_IER) Never Secure Period Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_NSPERINT(value)       (DWDT_PS_WDT_IER_NSPERINT_Msk & ((value) << DWDT_PS_WDT_IER_NSPERINT_Pos))
#define   DWDT_PS_WDT_IER_NSPERINT_0_Val      _U_(0x0)                                             /**< (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_NSPERINT_1_Val      _U_(0x1)                                             /**< (DWDT_PS_WDT_IER) A never secure period failure generates an interrupt in the programmable secure area.  */
#define DWDT_PS_WDT_IER_NSPERINT_0            (DWDT_PS_WDT_IER_NSPERINT_0_Val << DWDT_PS_WDT_IER_NSPERINT_Pos) /**< (DWDT_PS_WDT_IER) No effect. Position  */
#define DWDT_PS_WDT_IER_NSPERINT_1            (DWDT_PS_WDT_IER_NSPERINT_1_Val << DWDT_PS_WDT_IER_NSPERINT_Pos) /**< (DWDT_PS_WDT_IER) A never secure period failure generates an interrupt in the programmable secure area. Position  */
#define DWDT_PS_WDT_IER_NSRPTHINT_Pos         _U_(4)                                               /**< (DWDT_PS_WDT_IER) Never Secure Repeat Threshold Interrupt Enable Position */
#define DWDT_PS_WDT_IER_NSRPTHINT_Msk         (_U_(0x1) << DWDT_PS_WDT_IER_NSRPTHINT_Pos)          /**< (DWDT_PS_WDT_IER) Never Secure Repeat Threshold Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_NSRPTHINT(value)      (DWDT_PS_WDT_IER_NSRPTHINT_Msk & ((value) << DWDT_PS_WDT_IER_NSRPTHINT_Pos))
#define   DWDT_PS_WDT_IER_NSRPTHINT_0_Val     _U_(0x0)                                             /**< (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_NSRPTHINT_1_Val     _U_(0x1)                                             /**< (DWDT_PS_WDT_IER) A never secure repeat threshold failure generates an interrupt in the programmable secure area.  */
#define DWDT_PS_WDT_IER_NSRPTHINT_0           (DWDT_PS_WDT_IER_NSRPTHINT_0_Val << DWDT_PS_WDT_IER_NSRPTHINT_Pos) /**< (DWDT_PS_WDT_IER) No effect. Position  */
#define DWDT_PS_WDT_IER_NSRPTHINT_1           (DWDT_PS_WDT_IER_NSRPTHINT_1_Val << DWDT_PS_WDT_IER_NSRPTHINT_Pos) /**< (DWDT_PS_WDT_IER) A never secure repeat threshold failure generates an interrupt in the programmable secure area. Position  */
#define DWDT_PS_WDT_IER_Msk                   _U_(0x0000001F)                                      /**< (DWDT_PS_WDT_IER) Register Mask  */


/* -------- DWDT_PS_WDT_IDR : (DWDT Offset: 0x1198) ( /W 32) Programmable Secure Interrupt Disable Register -------- */
#define DWDT_PS_WDT_IDR_PERINT_Pos            _U_(0)                                               /**< (DWDT_PS_WDT_IDR) Period Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_PERINT_Msk            (_U_(0x1) << DWDT_PS_WDT_IDR_PERINT_Pos)             /**< (DWDT_PS_WDT_IDR) Period Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_PERINT(value)         (DWDT_PS_WDT_IDR_PERINT_Msk & ((value) << DWDT_PS_WDT_IDR_PERINT_Pos))
#define   DWDT_PS_WDT_IDR_PERINT_0_Val        _U_(0x0)                                             /**< (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_PERINT_1_Val        _U_(0x1)                                             /**< (DWDT_PS_WDT_IDR) The Programmable secure period failure interrupt is disabled.  */
#define DWDT_PS_WDT_IDR_PERINT_0              (DWDT_PS_WDT_IDR_PERINT_0_Val << DWDT_PS_WDT_IDR_PERINT_Pos) /**< (DWDT_PS_WDT_IDR) No effect. Position  */
#define DWDT_PS_WDT_IDR_PERINT_1              (DWDT_PS_WDT_IDR_PERINT_1_Val << DWDT_PS_WDT_IDR_PERINT_Pos) /**< (DWDT_PS_WDT_IDR) The Programmable secure period failure interrupt is disabled. Position  */
#define DWDT_PS_WDT_IDR_RPTHINT_Pos           _U_(1)                                               /**< (DWDT_PS_WDT_IDR) Repeat Threshold Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_RPTHINT_Msk           (_U_(0x1) << DWDT_PS_WDT_IDR_RPTHINT_Pos)            /**< (DWDT_PS_WDT_IDR) Repeat Threshold Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_RPTHINT(value)        (DWDT_PS_WDT_IDR_RPTHINT_Msk & ((value) << DWDT_PS_WDT_IDR_RPTHINT_Pos))
#define   DWDT_PS_WDT_IDR_RPTHINT_0_Val       _U_(0x0)                                             /**< (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_RPTHINT_1_Val       _U_(0x1)                                             /**< (DWDT_PS_WDT_IDR) The Programmable secure repeat threshold failure interrupt is disabled.  */
#define DWDT_PS_WDT_IDR_RPTHINT_0             (DWDT_PS_WDT_IDR_RPTHINT_0_Val << DWDT_PS_WDT_IDR_RPTHINT_Pos) /**< (DWDT_PS_WDT_IDR) No effect. Position  */
#define DWDT_PS_WDT_IDR_RPTHINT_1             (DWDT_PS_WDT_IDR_RPTHINT_1_Val << DWDT_PS_WDT_IDR_RPTHINT_Pos) /**< (DWDT_PS_WDT_IDR) The Programmable secure repeat threshold failure interrupt is disabled. Position  */
#define DWDT_PS_WDT_IDR_LVLINT_Pos            _U_(2)                                               /**< (DWDT_PS_WDT_IDR) Interrupt Level Threshold Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_LVLINT_Msk            (_U_(0x1) << DWDT_PS_WDT_IDR_LVLINT_Pos)             /**< (DWDT_PS_WDT_IDR) Interrupt Level Threshold Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_LVLINT(value)         (DWDT_PS_WDT_IDR_LVLINT_Msk & ((value) << DWDT_PS_WDT_IDR_LVLINT_Pos))
#define   DWDT_PS_WDT_IDR_LVLINT_0_Val        _U_(0x0)                                             /**< (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_LVLINT_1_Val        _U_(0x1)                                             /**< (DWDT_PS_WDT_IDR) The Programmable secure interrupt threshold failure interrupt is disabled.  */
#define DWDT_PS_WDT_IDR_LVLINT_0              (DWDT_PS_WDT_IDR_LVLINT_0_Val << DWDT_PS_WDT_IDR_LVLINT_Pos) /**< (DWDT_PS_WDT_IDR) No effect. Position  */
#define DWDT_PS_WDT_IDR_LVLINT_1              (DWDT_PS_WDT_IDR_LVLINT_1_Val << DWDT_PS_WDT_IDR_LVLINT_Pos) /**< (DWDT_PS_WDT_IDR) The Programmable secure interrupt threshold failure interrupt is disabled. Position  */
#define DWDT_PS_WDT_IDR_NSPERINT_Pos          _U_(3)                                               /**< (DWDT_PS_WDT_IDR) Never Secure Period Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_NSPERINT_Msk          (_U_(0x1) << DWDT_PS_WDT_IDR_NSPERINT_Pos)           /**< (DWDT_PS_WDT_IDR) Never Secure Period Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_NSPERINT(value)       (DWDT_PS_WDT_IDR_NSPERINT_Msk & ((value) << DWDT_PS_WDT_IDR_NSPERINT_Pos))
#define   DWDT_PS_WDT_IDR_NSPERINT_0_Val      _U_(0x0)                                             /**< (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_NSPERINT_1_Val      _U_(0x1)                                             /**< (DWDT_PS_WDT_IDR) A never secure period failure does not generate an interrupt in the programmable secure area.  */
#define DWDT_PS_WDT_IDR_NSPERINT_0            (DWDT_PS_WDT_IDR_NSPERINT_0_Val << DWDT_PS_WDT_IDR_NSPERINT_Pos) /**< (DWDT_PS_WDT_IDR) No effect. Position  */
#define DWDT_PS_WDT_IDR_NSPERINT_1            (DWDT_PS_WDT_IDR_NSPERINT_1_Val << DWDT_PS_WDT_IDR_NSPERINT_Pos) /**< (DWDT_PS_WDT_IDR) A never secure period failure does not generate an interrupt in the programmable secure area. Position  */
#define DWDT_PS_WDT_IDR_NSRPTHINT_Pos         _U_(4)                                               /**< (DWDT_PS_WDT_IDR) Never Secure Repeat Threshold Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_NSRPTHINT_Msk         (_U_(0x1) << DWDT_PS_WDT_IDR_NSRPTHINT_Pos)          /**< (DWDT_PS_WDT_IDR) Never Secure Repeat Threshold Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_NSRPTHINT(value)      (DWDT_PS_WDT_IDR_NSRPTHINT_Msk & ((value) << DWDT_PS_WDT_IDR_NSRPTHINT_Pos))
#define   DWDT_PS_WDT_IDR_NSRPTHINT_0_Val     _U_(0x0)                                             /**< (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_NSRPTHINT_1_Val     _U_(0x1)                                             /**< (DWDT_PS_WDT_IDR) A never secure repeat threshold failure does not generate an interrupt in the programmable secure area.  */
#define DWDT_PS_WDT_IDR_NSRPTHINT_0           (DWDT_PS_WDT_IDR_NSRPTHINT_0_Val << DWDT_PS_WDT_IDR_NSRPTHINT_Pos) /**< (DWDT_PS_WDT_IDR) No effect. Position  */
#define DWDT_PS_WDT_IDR_NSRPTHINT_1           (DWDT_PS_WDT_IDR_NSRPTHINT_1_Val << DWDT_PS_WDT_IDR_NSRPTHINT_Pos) /**< (DWDT_PS_WDT_IDR) A never secure repeat threshold failure does not generate an interrupt in the programmable secure area. Position  */
#define DWDT_PS_WDT_IDR_Msk                   _U_(0x0000001F)                                      /**< (DWDT_PS_WDT_IDR) Register Mask  */


/* -------- DWDT_PS_WDT_ISR : (DWDT Offset: 0x119C) ( R/ 32) Programmable Secure Interrupt Status Register -------- */
#define DWDT_PS_WDT_ISR_RESETVALUE            _U_(0x00)                                            /**<  (DWDT_PS_WDT_ISR) Programmable Secure Interrupt Status Register  Reset Value */

#define DWDT_PS_WDT_ISR_PERINT_Pos            _U_(0)                                               /**< (DWDT_PS_WDT_ISR) Period Interrupt Status Position */
#define DWDT_PS_WDT_ISR_PERINT_Msk            (_U_(0x1) << DWDT_PS_WDT_ISR_PERINT_Pos)             /**< (DWDT_PS_WDT_ISR) Period Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_PERINT(value)         (DWDT_PS_WDT_ISR_PERINT_Msk & ((value) << DWDT_PS_WDT_ISR_PERINT_Pos))
#define   DWDT_PS_WDT_ISR_PERINT_0_Val        _U_(0x0)                                             /**< (DWDT_PS_WDT_ISR) No period failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_PERINT_1_Val        _U_(0x1)                                             /**< (DWDT_PS_WDT_ISR) At least one period failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_PERINT_0              (DWDT_PS_WDT_ISR_PERINT_0_Val << DWDT_PS_WDT_ISR_PERINT_Pos) /**< (DWDT_PS_WDT_ISR) No period failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_PERINT_1              (DWDT_PS_WDT_ISR_PERINT_1_Val << DWDT_PS_WDT_ISR_PERINT_Pos) /**< (DWDT_PS_WDT_ISR) At least one period failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_RPTHINT_Pos           _U_(1)                                               /**< (DWDT_PS_WDT_ISR) Repeat Threshold Interrupt Status Position */
#define DWDT_PS_WDT_ISR_RPTHINT_Msk           (_U_(0x1) << DWDT_PS_WDT_ISR_RPTHINT_Pos)            /**< (DWDT_PS_WDT_ISR) Repeat Threshold Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_RPTHINT(value)        (DWDT_PS_WDT_ISR_RPTHINT_Msk & ((value) << DWDT_PS_WDT_ISR_RPTHINT_Pos))
#define   DWDT_PS_WDT_ISR_RPTHINT_0_Val       _U_(0x0)                                             /**< (DWDT_PS_WDT_ISR) No repeat threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_RPTHINT_1_Val       _U_(0x1)                                             /**< (DWDT_PS_WDT_ISR) At least one repeat threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_RPTHINT_0             (DWDT_PS_WDT_ISR_RPTHINT_0_Val << DWDT_PS_WDT_ISR_RPTHINT_Pos) /**< (DWDT_PS_WDT_ISR) No repeat threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_RPTHINT_1             (DWDT_PS_WDT_ISR_RPTHINT_1_Val << DWDT_PS_WDT_ISR_RPTHINT_Pos) /**< (DWDT_PS_WDT_ISR) At least one repeat threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_LVLINT_Pos            _U_(2)                                               /**< (DWDT_PS_WDT_ISR) Interrupt Level Threshold Interrupt Status Position */
#define DWDT_PS_WDT_ISR_LVLINT_Msk            (_U_(0x1) << DWDT_PS_WDT_ISR_LVLINT_Pos)             /**< (DWDT_PS_WDT_ISR) Interrupt Level Threshold Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_LVLINT(value)         (DWDT_PS_WDT_ISR_LVLINT_Msk & ((value) << DWDT_PS_WDT_ISR_LVLINT_Pos))
#define   DWDT_PS_WDT_ISR_LVLINT_0_Val        _U_(0x0)                                             /**< (DWDT_PS_WDT_ISR) No level threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_LVLINT_1_Val        _U_(0x1)                                             /**< (DWDT_PS_WDT_ISR) At least one level threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_LVLINT_0              (DWDT_PS_WDT_ISR_LVLINT_0_Val << DWDT_PS_WDT_ISR_LVLINT_Pos) /**< (DWDT_PS_WDT_ISR) No level threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_LVLINT_1              (DWDT_PS_WDT_ISR_LVLINT_1_Val << DWDT_PS_WDT_ISR_LVLINT_Pos) /**< (DWDT_PS_WDT_ISR) At least one level threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_NSPERINT_Pos          _U_(3)                                               /**< (DWDT_PS_WDT_ISR) Never Secure Period Interrupt Status Position */
#define DWDT_PS_WDT_ISR_NSPERINT_Msk          (_U_(0x1) << DWDT_PS_WDT_ISR_NSPERINT_Pos)           /**< (DWDT_PS_WDT_ISR) Never Secure Period Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_NSPERINT(value)       (DWDT_PS_WDT_ISR_NSPERINT_Msk & ((value) << DWDT_PS_WDT_ISR_NSPERINT_Pos))
#define   DWDT_PS_WDT_ISR_NSPERINT_0_Val      _U_(0x0)                                             /**< (DWDT_PS_WDT_ISR) No never secure period failure has occurred in the programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_NSPERINT_1_Val      _U_(0x1)                                             /**< (DWDT_PS_WDT_ISR) At least one never secure period failure occurred in the programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_NSPERINT_0            (DWDT_PS_WDT_ISR_NSPERINT_0_Val << DWDT_PS_WDT_ISR_NSPERINT_Pos) /**< (DWDT_PS_WDT_ISR) No never secure period failure has occurred in the programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_NSPERINT_1            (DWDT_PS_WDT_ISR_NSPERINT_1_Val << DWDT_PS_WDT_ISR_NSPERINT_Pos) /**< (DWDT_PS_WDT_ISR) At least one never secure period failure occurred in the programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_NSRPTHINT_Pos         _U_(4)                                               /**< (DWDT_PS_WDT_ISR) Never Secure Repeat Threshold Interrupt Status Position */
#define DWDT_PS_WDT_ISR_NSRPTHINT_Msk         (_U_(0x1) << DWDT_PS_WDT_ISR_NSRPTHINT_Pos)          /**< (DWDT_PS_WDT_ISR) Never Secure Repeat Threshold Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_NSRPTHINT(value)      (DWDT_PS_WDT_ISR_NSRPTHINT_Msk & ((value) << DWDT_PS_WDT_ISR_NSRPTHINT_Pos))
#define   DWDT_PS_WDT_ISR_NSRPTHINT_0_Val     _U_(0x0)                                             /**< (DWDT_PS_WDT_ISR) No never secure repeat threshold failure has occurred in the programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_NSRPTHINT_1_Val     _U_(0x1)                                             /**< (DWDT_PS_WDT_ISR) At least one never secure repeat threshold failure occurred in the programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_NSRPTHINT_0           (DWDT_PS_WDT_ISR_NSRPTHINT_0_Val << DWDT_PS_WDT_ISR_NSRPTHINT_Pos) /**< (DWDT_PS_WDT_ISR) No never secure repeat threshold failure has occurred in the programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_NSRPTHINT_1           (DWDT_PS_WDT_ISR_NSRPTHINT_1_Val << DWDT_PS_WDT_ISR_NSRPTHINT_Pos) /**< (DWDT_PS_WDT_ISR) At least one never secure repeat threshold failure occurred in the programmable secure watchdog since the last read of PS_WDT_ISR. Position  */
#define DWDT_PS_WDT_ISR_Msk                   _U_(0x0000001F)                                      /**< (DWDT_PS_WDT_ISR) Register Mask  */


/* -------- DWDT_PS_WDT_IMR : (DWDT Offset: 0x11A0) ( R/ 32) Programmable Secure Interrupt Mask Register -------- */
#define DWDT_PS_WDT_IMR_RESETVALUE            _U_(0x00)                                            /**<  (DWDT_PS_WDT_IMR) Programmable Secure Interrupt Mask Register  Reset Value */

#define DWDT_PS_WDT_IMR_PERINT_Pos            _U_(0)                                               /**< (DWDT_PS_WDT_IMR) Period Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_PERINT_Msk            (_U_(0x1) << DWDT_PS_WDT_IMR_PERINT_Pos)             /**< (DWDT_PS_WDT_IMR) Period Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_PERINT(value)         (DWDT_PS_WDT_IMR_PERINT_Msk & ((value) << DWDT_PS_WDT_IMR_PERINT_Pos))
#define   DWDT_PS_WDT_IMR_PERINT_0_Val        _U_(0x0)                                             /**< (DWDT_PS_WDT_IMR) Interrupt on PERINT is disabled.  */
#define   DWDT_PS_WDT_IMR_PERINT_1_Val        _U_(0x1)                                             /**< (DWDT_PS_WDT_IMR) Interrupt on PERINT is enabled.  */
#define DWDT_PS_WDT_IMR_PERINT_0              (DWDT_PS_WDT_IMR_PERINT_0_Val << DWDT_PS_WDT_IMR_PERINT_Pos) /**< (DWDT_PS_WDT_IMR) Interrupt on PERINT is disabled. Position  */
#define DWDT_PS_WDT_IMR_PERINT_1              (DWDT_PS_WDT_IMR_PERINT_1_Val << DWDT_PS_WDT_IMR_PERINT_Pos) /**< (DWDT_PS_WDT_IMR) Interrupt on PERINT is enabled. Position  */
#define DWDT_PS_WDT_IMR_RPTHINT_Pos           _U_(1)                                               /**< (DWDT_PS_WDT_IMR) Repeat Threshold Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_RPTHINT_Msk           (_U_(0x1) << DWDT_PS_WDT_IMR_RPTHINT_Pos)            /**< (DWDT_PS_WDT_IMR) Repeat Threshold Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_RPTHINT(value)        (DWDT_PS_WDT_IMR_RPTHINT_Msk & ((value) << DWDT_PS_WDT_IMR_RPTHINT_Pos))
#define   DWDT_PS_WDT_IMR_RPTHINT_0_Val       _U_(0x0)                                             /**< (DWDT_PS_WDT_IMR) Interrupt on RPTHINT is disabled.  */
#define   DWDT_PS_WDT_IMR_RPTHINT_1_Val       _U_(0x1)                                             /**< (DWDT_PS_WDT_IMR) Interrupt on RPTHINT is enabled.  */
#define DWDT_PS_WDT_IMR_RPTHINT_0             (DWDT_PS_WDT_IMR_RPTHINT_0_Val << DWDT_PS_WDT_IMR_RPTHINT_Pos) /**< (DWDT_PS_WDT_IMR) Interrupt on RPTHINT is disabled. Position  */
#define DWDT_PS_WDT_IMR_RPTHINT_1             (DWDT_PS_WDT_IMR_RPTHINT_1_Val << DWDT_PS_WDT_IMR_RPTHINT_Pos) /**< (DWDT_PS_WDT_IMR) Interrupt on RPTHINT is enabled. Position  */
#define DWDT_PS_WDT_IMR_LVLINT_Pos            _U_(2)                                               /**< (DWDT_PS_WDT_IMR) Interrupt Level Threshold Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_LVLINT_Msk            (_U_(0x1) << DWDT_PS_WDT_IMR_LVLINT_Pos)             /**< (DWDT_PS_WDT_IMR) Interrupt Level Threshold Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_LVLINT(value)         (DWDT_PS_WDT_IMR_LVLINT_Msk & ((value) << DWDT_PS_WDT_IMR_LVLINT_Pos))
#define   DWDT_PS_WDT_IMR_LVLINT_0_Val        _U_(0x0)                                             /**< (DWDT_PS_WDT_IMR) Interrupt on LVLINT is disabled.  */
#define   DWDT_PS_WDT_IMR_LVLINT_1_Val        _U_(0x1)                                             /**< (DWDT_PS_WDT_IMR) Interrupt on LVLINT is enabled.  */
#define DWDT_PS_WDT_IMR_LVLINT_0              (DWDT_PS_WDT_IMR_LVLINT_0_Val << DWDT_PS_WDT_IMR_LVLINT_Pos) /**< (DWDT_PS_WDT_IMR) Interrupt on LVLINT is disabled. Position  */
#define DWDT_PS_WDT_IMR_LVLINT_1              (DWDT_PS_WDT_IMR_LVLINT_1_Val << DWDT_PS_WDT_IMR_LVLINT_Pos) /**< (DWDT_PS_WDT_IMR) Interrupt on LVLINT is enabled. Position  */
#define DWDT_PS_WDT_IMR_NSPERINT_Pos          _U_(3)                                               /**< (DWDT_PS_WDT_IMR) Never Secure Period Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_NSPERINT_Msk          (_U_(0x1) << DWDT_PS_WDT_IMR_NSPERINT_Pos)           /**< (DWDT_PS_WDT_IMR) Never Secure Period Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_NSPERINT(value)       (DWDT_PS_WDT_IMR_NSPERINT_Msk & ((value) << DWDT_PS_WDT_IMR_NSPERINT_Pos))
#define   DWDT_PS_WDT_IMR_NSPERINT_0_Val      _U_(0x0)                                             /**< (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure PERINT interrupt is disabled.  */
#define   DWDT_PS_WDT_IMR_NSPERINT_1_Val      _U_(0x1)                                             /**< (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure PERINT interrupt is enabled.  */
#define DWDT_PS_WDT_IMR_NSPERINT_0            (DWDT_PS_WDT_IMR_NSPERINT_0_Val << DWDT_PS_WDT_IMR_NSPERINT_Pos) /**< (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure PERINT interrupt is disabled. Position  */
#define DWDT_PS_WDT_IMR_NSPERINT_1            (DWDT_PS_WDT_IMR_NSPERINT_1_Val << DWDT_PS_WDT_IMR_NSPERINT_Pos) /**< (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure PERINT interrupt is enabled. Position  */
#define DWDT_PS_WDT_IMR_NSRPTHINT_Pos         _U_(4)                                               /**< (DWDT_PS_WDT_IMR) Never Secure Repeat Threshold Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_NSRPTHINT_Msk         (_U_(0x1) << DWDT_PS_WDT_IMR_NSRPTHINT_Pos)          /**< (DWDT_PS_WDT_IMR) Never Secure Repeat Threshold Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_NSRPTHINT(value)      (DWDT_PS_WDT_IMR_NSRPTHINT_Msk & ((value) << DWDT_PS_WDT_IMR_NSRPTHINT_Pos))
#define   DWDT_PS_WDT_IMR_NSRPTHINT_0_Val     _U_(0x0)                                             /**< (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure RPTHINT interrupt is disabled.  */
#define   DWDT_PS_WDT_IMR_NSRPTHINT_1_Val     _U_(0x1)                                             /**< (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure RPTHINT interrupt is enabled.  */
#define DWDT_PS_WDT_IMR_NSRPTHINT_0           (DWDT_PS_WDT_IMR_NSRPTHINT_0_Val << DWDT_PS_WDT_IMR_NSRPTHINT_Pos) /**< (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure RPTHINT interrupt is disabled. Position  */
#define DWDT_PS_WDT_IMR_NSRPTHINT_1           (DWDT_PS_WDT_IMR_NSRPTHINT_1_Val << DWDT_PS_WDT_IMR_NSRPTHINT_Pos) /**< (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure RPTHINT interrupt is enabled. Position  */
#define DWDT_PS_WDT_IMR_Msk                   _U_(0x0000001F)                                      /**< (DWDT_PS_WDT_IMR) Register Mask  */


/* -------- DWDT_NS_WDT_LVLLIM : (DWDT Offset: 0x11A4) (R/W 32) Never Secure Level Limits Register -------- */
#define DWDT_NS_WDT_LVLLIM_RESETVALUE         _U_(0xFFF0000)                                       /**<  (DWDT_NS_WDT_LVLLIM) Never Secure Level Limits Register  Reset Value */

#define DWDT_NS_WDT_LVLLIM_LVLMIN_Pos         _U_(0)                                               /**< (DWDT_NS_WDT_LVLLIM) Level Minimum Position */
#define DWDT_NS_WDT_LVLLIM_LVLMIN_Msk         (_U_(0xFFF) << DWDT_NS_WDT_LVLLIM_LVLMIN_Pos)        /**< (DWDT_NS_WDT_LVLLIM) Level Minimum Mask */
#define DWDT_NS_WDT_LVLLIM_LVLMIN(value)      (DWDT_NS_WDT_LVLLIM_LVLMIN_Msk & ((value) << DWDT_NS_WDT_LVLLIM_LVLMIN_Pos))
#define DWDT_NS_WDT_LVLLIM_LVLMAX_Pos         _U_(16)                                              /**< (DWDT_NS_WDT_LVLLIM) Level Maximum Position */
#define DWDT_NS_WDT_LVLLIM_LVLMAX_Msk         (_U_(0xFFF) << DWDT_NS_WDT_LVLLIM_LVLMAX_Pos)        /**< (DWDT_NS_WDT_LVLLIM) Level Maximum Mask */
#define DWDT_NS_WDT_LVLLIM_LVLMAX(value)      (DWDT_NS_WDT_LVLLIM_LVLMAX_Msk & ((value) << DWDT_NS_WDT_LVLLIM_LVLMAX_Pos))
#define DWDT_NS_WDT_LVLLIM_Msk                _U_(0x0FFF0FFF)                                      /**< (DWDT_NS_WDT_LVLLIM) Register Mask  */


/* -------- DWDT_NS_WDT_RLIM : (DWDT Offset: 0x11A8) (R/W 32) Never Secure Repeat Limits Register -------- */
#define DWDT_NS_WDT_RLIM_RESETVALUE           _U_(0xFFF0000)                                       /**<  (DWDT_NS_WDT_RLIM) Never Secure Repeat Limits Register  Reset Value */

#define DWDT_NS_WDT_RLIM_RPTHMIN_Pos          _U_(0)                                               /**< (DWDT_NS_WDT_RLIM) Repeat Threshold Minimum Position */
#define DWDT_NS_WDT_RLIM_RPTHMIN_Msk          (_U_(0xFFF) << DWDT_NS_WDT_RLIM_RPTHMIN_Pos)         /**< (DWDT_NS_WDT_RLIM) Repeat Threshold Minimum Mask */
#define DWDT_NS_WDT_RLIM_RPTHMIN(value)       (DWDT_NS_WDT_RLIM_RPTHMIN_Msk & ((value) << DWDT_NS_WDT_RLIM_RPTHMIN_Pos))
#define DWDT_NS_WDT_RLIM_RPTHMAX_Pos          _U_(16)                                              /**< (DWDT_NS_WDT_RLIM) Repeat Threshold Maximum Position */
#define DWDT_NS_WDT_RLIM_RPTHMAX_Msk          (_U_(0xFFF) << DWDT_NS_WDT_RLIM_RPTHMAX_Pos)         /**< (DWDT_NS_WDT_RLIM) Repeat Threshold Maximum Mask */
#define DWDT_NS_WDT_RLIM_RPTHMAX(value)       (DWDT_NS_WDT_RLIM_RPTHMAX_Msk & ((value) << DWDT_NS_WDT_RLIM_RPTHMAX_Pos))
#define DWDT_NS_WDT_RLIM_Msk                  _U_(0x0FFF0FFF)                                      /**< (DWDT_NS_WDT_RLIM) Register Mask  */


/* -------- DWDT_NS_WDT_PLIM : (DWDT Offset: 0x11AC) (R/W 32) Never Secure Period Limits Register -------- */
#define DWDT_NS_WDT_PLIM_RESETVALUE           _U_(0xFFF0000)                                       /**<  (DWDT_NS_WDT_PLIM) Never Secure Period Limits Register  Reset Value */

#define DWDT_NS_WDT_PLIM_PERMIN_Pos           _U_(0)                                               /**< (DWDT_NS_WDT_PLIM) Period Minimum Position */
#define DWDT_NS_WDT_PLIM_PERMIN_Msk           (_U_(0xFFF) << DWDT_NS_WDT_PLIM_PERMIN_Pos)          /**< (DWDT_NS_WDT_PLIM) Period Minimum Mask */
#define DWDT_NS_WDT_PLIM_PERMIN(value)        (DWDT_NS_WDT_PLIM_PERMIN_Msk & ((value) << DWDT_NS_WDT_PLIM_PERMIN_Pos))
#define DWDT_NS_WDT_PLIM_PERMAX_Pos           _U_(16)                                              /**< (DWDT_NS_WDT_PLIM) Period Maximum Position */
#define DWDT_NS_WDT_PLIM_PERMAX_Msk           (_U_(0xFFF) << DWDT_NS_WDT_PLIM_PERMAX_Pos)          /**< (DWDT_NS_WDT_PLIM) Period Maximum Mask */
#define DWDT_NS_WDT_PLIM_PERMAX(value)        (DWDT_NS_WDT_PLIM_PERMAX_Msk & ((value) << DWDT_NS_WDT_PLIM_PERMAX_Pos))
#define DWDT_NS_WDT_PLIM_Msk                  _U_(0x0FFF0FFF)                                      /**< (DWDT_NS_WDT_PLIM) Register Mask  */


/** \brief DWDT register offsets definitions */
#define DWDT_NS_WDT_CR_REG_OFST        (0x00)              /**< (DWDT_NS_WDT_CR) Never Secure Control Register Offset */
#define DWDT_NS_WDT_MR_REG_OFST        (0x04)              /**< (DWDT_NS_WDT_MR) Never Secure Mode Register Offset */
#define DWDT_NS_WDT_VR_REG_OFST        (0x08)              /**< (DWDT_NS_WDT_VR) Never Secure Value Register Offset */
#define DWDT_NS_WDT_WL_REG_OFST        (0x0C)              /**< (DWDT_NS_WDT_WL) Never Secure Window Level Register Offset */
#define DWDT_NS_WDT_IL_REG_OFST        (0x10)              /**< (DWDT_NS_WDT_IL) Never Secure Interrupt Level Register Offset */
#define DWDT_NS_WDT_IER_REG_OFST       (0x14)              /**< (DWDT_NS_WDT_IER) Never Secure Interrupt Enable Register Offset */
#define DWDT_NS_WDT_IDR_REG_OFST       (0x18)              /**< (DWDT_NS_WDT_IDR) Never Secure Interrupt Disable Register Offset */
#define DWDT_NS_WDT_ISR_REG_OFST       (0x1C)              /**< (DWDT_NS_WDT_ISR) Never Secure Interrupt Status Register Offset */
#define DWDT_NS_WDT_IMR_REG_OFST       (0x20)              /**< (DWDT_NS_WDT_IMR) Never Secure Interrupt Mask Register Offset */
#define DWDT_PS_WDT_CR_REG_OFST        (0x1180)            /**< (DWDT_PS_WDT_CR) Programmable Secure Control Register Offset */
#define DWDT_PS_WDT_MR_REG_OFST        (0x1184)            /**< (DWDT_PS_WDT_MR) Programmable Secure Mode Register Offset */
#define DWDT_PS_WDT_VR_REG_OFST        (0x1188)            /**< (DWDT_PS_WDT_VR) Programmable Secure Value Register Offset */
#define DWDT_PS_WDT_WL_REG_OFST        (0x118C)            /**< (DWDT_PS_WDT_WL) Programmable Secure Window Level Offset */
#define DWDT_PS_WDT_IL_REG_OFST        (0x1190)            /**< (DWDT_PS_WDT_IL) Programmable Secure Interrupt Level Offset */
#define DWDT_PS_WDT_IER_REG_OFST       (0x1194)            /**< (DWDT_PS_WDT_IER) Programmable Secure Interrupt Enable Register Offset */
#define DWDT_PS_WDT_IDR_REG_OFST       (0x1198)            /**< (DWDT_PS_WDT_IDR) Programmable Secure Interrupt Disable Register Offset */
#define DWDT_PS_WDT_ISR_REG_OFST       (0x119C)            /**< (DWDT_PS_WDT_ISR) Programmable Secure Interrupt Status Register Offset */
#define DWDT_PS_WDT_IMR_REG_OFST       (0x11A0)            /**< (DWDT_PS_WDT_IMR) Programmable Secure Interrupt Mask Register Offset */
#define DWDT_NS_WDT_LVLLIM_REG_OFST    (0x11A4)            /**< (DWDT_NS_WDT_LVLLIM) Never Secure Level Limits Register Offset */
#define DWDT_NS_WDT_RLIM_REG_OFST      (0x11A8)            /**< (DWDT_NS_WDT_RLIM) Never Secure Repeat Limits Register Offset */
#define DWDT_NS_WDT_PLIM_REG_OFST      (0x11AC)            /**< (DWDT_NS_WDT_PLIM) Never Secure Period Limits Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DWDT register API structure */
typedef struct
{  /* Dual Watchdog Timer */
  __O   uint32_t                       DWDT_NS_WDT_CR;     /**< Offset: 0x00 ( /W  32) Never Secure Control Register */
  __IO  uint32_t                       DWDT_NS_WDT_MR;     /**< Offset: 0x04 (R/W  32) Never Secure Mode Register */
  __I   uint32_t                       DWDT_NS_WDT_VR;     /**< Offset: 0x08 (R/   32) Never Secure Value Register */
  __IO  uint32_t                       DWDT_NS_WDT_WL;     /**< Offset: 0x0C (R/W  32) Never Secure Window Level Register */
  __IO  uint32_t                       DWDT_NS_WDT_IL;     /**< Offset: 0x10 (R/W  32) Never Secure Interrupt Level Register */
  __O   uint32_t                       DWDT_NS_WDT_IER;    /**< Offset: 0x14 ( /W  32) Never Secure Interrupt Enable Register */
  __O   uint32_t                       DWDT_NS_WDT_IDR;    /**< Offset: 0x18 ( /W  32) Never Secure Interrupt Disable Register */
  __I   uint32_t                       DWDT_NS_WDT_ISR;    /**< Offset: 0x1C (R/   32) Never Secure Interrupt Status Register */
  __I   uint32_t                       DWDT_NS_WDT_IMR;    /**< Offset: 0x20 (R/   32) Never Secure Interrupt Mask Register */
  __I   uint8_t                        Reserved1[0x115C];
  __O   uint32_t                       DWDT_PS_WDT_CR;     /**< Offset: 0x1180 ( /W  32) Programmable Secure Control Register */
  __IO  uint32_t                       DWDT_PS_WDT_MR;     /**< Offset: 0x1184 (R/W  32) Programmable Secure Mode Register */
  __I   uint32_t                       DWDT_PS_WDT_VR;     /**< Offset: 0x1188 (R/   32) Programmable Secure Value Register */
  __IO  uint32_t                       DWDT_PS_WDT_WL;     /**< Offset: 0x118C (R/W  32) Programmable Secure Window Level */
  __IO  uint32_t                       DWDT_PS_WDT_IL;     /**< Offset: 0x1190 (R/W  32) Programmable Secure Interrupt Level */
  __O   uint32_t                       DWDT_PS_WDT_IER;    /**< Offset: 0x1194 ( /W  32) Programmable Secure Interrupt Enable Register */
  __O   uint32_t                       DWDT_PS_WDT_IDR;    /**< Offset: 0x1198 ( /W  32) Programmable Secure Interrupt Disable Register */
  __I   uint32_t                       DWDT_PS_WDT_ISR;    /**< Offset: 0x119C (R/   32) Programmable Secure Interrupt Status Register */
  __I   uint32_t                       DWDT_PS_WDT_IMR;    /**< Offset: 0x11A0 (R/   32) Programmable Secure Interrupt Mask Register */
  __IO  uint32_t                       DWDT_NS_WDT_LVLLIM; /**< Offset: 0x11A4 (R/W  32) Never Secure Level Limits Register */
  __IO  uint32_t                       DWDT_NS_WDT_RLIM;   /**< Offset: 0x11A8 (R/W  32) Never Secure Repeat Limits Register */
  __IO  uint32_t                       DWDT_NS_WDT_PLIM;   /**< Offset: 0x11AC (R/W  32) Never Secure Period Limits Register */
} dwdt_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_DWDT_COMPONENT_H_ */
