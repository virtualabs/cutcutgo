/*
 * Component description for UHPHS
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
#ifndef _SAMA5D2_UHPHS_COMPONENT_H_
#define _SAMA5D2_UHPHS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR UHPHS                                        */
/* ************************************************************************** */

/* -------- UHPHS_HCCAPBASE : (UHPHS Offset: 0x00) ( R/ 32) UHPHS Host Controller Capability Register -------- */
#define UHPHS_HCCAPBASE_CAPLENGTH_Pos         _U_(0)                                               /**< (UHPHS_HCCAPBASE) Capability Registers Length Position */
#define UHPHS_HCCAPBASE_CAPLENGTH_Msk         (_U_(0xFF) << UHPHS_HCCAPBASE_CAPLENGTH_Pos)         /**< (UHPHS_HCCAPBASE) Capability Registers Length Mask */
#define UHPHS_HCCAPBASE_CAPLENGTH(value)      (UHPHS_HCCAPBASE_CAPLENGTH_Msk & ((value) << UHPHS_HCCAPBASE_CAPLENGTH_Pos))
#define UHPHS_HCCAPBASE_HCIVERSION_Pos        _U_(16)                                              /**< (UHPHS_HCCAPBASE) Host Controller Interface Version Number Position */
#define UHPHS_HCCAPBASE_HCIVERSION_Msk        (_U_(0xFFFF) << UHPHS_HCCAPBASE_HCIVERSION_Pos)      /**< (UHPHS_HCCAPBASE) Host Controller Interface Version Number Mask */
#define UHPHS_HCCAPBASE_HCIVERSION(value)     (UHPHS_HCCAPBASE_HCIVERSION_Msk & ((value) << UHPHS_HCCAPBASE_HCIVERSION_Pos))
#define UHPHS_HCCAPBASE_Msk                   _U_(0xFFFF00FF)                                      /**< (UHPHS_HCCAPBASE) Register Mask  */


/* -------- UHPHS_HCSPARAMS : (UHPHS Offset: 0x04) ( R/ 32) UHPHS Host Controller Structural Parameters Register -------- */
#define UHPHS_HCSPARAMS_N_PORTS_Pos           _U_(0)                                               /**< (UHPHS_HCSPARAMS) Number of Ports Position */
#define UHPHS_HCSPARAMS_N_PORTS_Msk           (_U_(0xF) << UHPHS_HCSPARAMS_N_PORTS_Pos)            /**< (UHPHS_HCSPARAMS) Number of Ports Mask */
#define UHPHS_HCSPARAMS_N_PORTS(value)        (UHPHS_HCSPARAMS_N_PORTS_Msk & ((value) << UHPHS_HCSPARAMS_N_PORTS_Pos))
#define UHPHS_HCSPARAMS_PPC_Pos               _U_(4)                                               /**< (UHPHS_HCSPARAMS) Port Power Control Position */
#define UHPHS_HCSPARAMS_PPC_Msk               (_U_(0x1) << UHPHS_HCSPARAMS_PPC_Pos)                /**< (UHPHS_HCSPARAMS) Port Power Control Mask */
#define UHPHS_HCSPARAMS_PPC(value)            (UHPHS_HCSPARAMS_PPC_Msk & ((value) << UHPHS_HCSPARAMS_PPC_Pos))
#define UHPHS_HCSPARAMS_N_PCC_Pos             _U_(8)                                               /**< (UHPHS_HCSPARAMS) Number of Ports per Companion Controller Position */
#define UHPHS_HCSPARAMS_N_PCC_Msk             (_U_(0xF) << UHPHS_HCSPARAMS_N_PCC_Pos)              /**< (UHPHS_HCSPARAMS) Number of Ports per Companion Controller Mask */
#define UHPHS_HCSPARAMS_N_PCC(value)          (UHPHS_HCSPARAMS_N_PCC_Msk & ((value) << UHPHS_HCSPARAMS_N_PCC_Pos))
#define UHPHS_HCSPARAMS_N_CC_Pos              _U_(12)                                              /**< (UHPHS_HCSPARAMS) Number of Companion Controllers Position */
#define UHPHS_HCSPARAMS_N_CC_Msk              (_U_(0xF) << UHPHS_HCSPARAMS_N_CC_Pos)               /**< (UHPHS_HCSPARAMS) Number of Companion Controllers Mask */
#define UHPHS_HCSPARAMS_N_CC(value)           (UHPHS_HCSPARAMS_N_CC_Msk & ((value) << UHPHS_HCSPARAMS_N_CC_Pos))
#define UHPHS_HCSPARAMS_P_INDICATOR_Pos       _U_(16)                                              /**< (UHPHS_HCSPARAMS) Port Indicators Position */
#define UHPHS_HCSPARAMS_P_INDICATOR_Msk       (_U_(0x1) << UHPHS_HCSPARAMS_P_INDICATOR_Pos)        /**< (UHPHS_HCSPARAMS) Port Indicators Mask */
#define UHPHS_HCSPARAMS_P_INDICATOR(value)    (UHPHS_HCSPARAMS_P_INDICATOR_Msk & ((value) << UHPHS_HCSPARAMS_P_INDICATOR_Pos))
#define UHPHS_HCSPARAMS_N_DP_Pos              _U_(20)                                              /**< (UHPHS_HCSPARAMS) Debug Port Number Position */
#define UHPHS_HCSPARAMS_N_DP_Msk              (_U_(0xF) << UHPHS_HCSPARAMS_N_DP_Pos)               /**< (UHPHS_HCSPARAMS) Debug Port Number Mask */
#define UHPHS_HCSPARAMS_N_DP(value)           (UHPHS_HCSPARAMS_N_DP_Msk & ((value) << UHPHS_HCSPARAMS_N_DP_Pos))
#define UHPHS_HCSPARAMS_Msk                   _U_(0x00F1FF1F)                                      /**< (UHPHS_HCSPARAMS) Register Mask  */


/* -------- UHPHS_HCCPARAMS : (UHPHS Offset: 0x08) ( R/ 32) UHPHS Host Controller Capability Parameters Register -------- */
#define UHPHS_HCCPARAMS_AC_Pos                _U_(0)                                               /**< (UHPHS_HCCPARAMS) 64-bit Addressing Capability Position */
#define UHPHS_HCCPARAMS_AC_Msk                (_U_(0x1) << UHPHS_HCCPARAMS_AC_Pos)                 /**< (UHPHS_HCCPARAMS) 64-bit Addressing Capability Mask */
#define UHPHS_HCCPARAMS_AC(value)             (UHPHS_HCCPARAMS_AC_Msk & ((value) << UHPHS_HCCPARAMS_AC_Pos))
#define UHPHS_HCCPARAMS_PFLF_Pos              _U_(1)                                               /**< (UHPHS_HCCPARAMS) Programmable Frame List Flag Position */
#define UHPHS_HCCPARAMS_PFLF_Msk              (_U_(0x1) << UHPHS_HCCPARAMS_PFLF_Pos)               /**< (UHPHS_HCCPARAMS) Programmable Frame List Flag Mask */
#define UHPHS_HCCPARAMS_PFLF(value)           (UHPHS_HCCPARAMS_PFLF_Msk & ((value) << UHPHS_HCCPARAMS_PFLF_Pos))
#define UHPHS_HCCPARAMS_ASPC_Pos              _U_(2)                                               /**< (UHPHS_HCCPARAMS) Asynchronous Schedule Park Capability Position */
#define UHPHS_HCCPARAMS_ASPC_Msk              (_U_(0x1) << UHPHS_HCCPARAMS_ASPC_Pos)               /**< (UHPHS_HCCPARAMS) Asynchronous Schedule Park Capability Mask */
#define UHPHS_HCCPARAMS_ASPC(value)           (UHPHS_HCCPARAMS_ASPC_Msk & ((value) << UHPHS_HCCPARAMS_ASPC_Pos))
#define UHPHS_HCCPARAMS_IST_Pos               _U_(4)                                               /**< (UHPHS_HCCPARAMS) Isochronous Scheduling Threshold Position */
#define UHPHS_HCCPARAMS_IST_Msk               (_U_(0xF) << UHPHS_HCCPARAMS_IST_Pos)                /**< (UHPHS_HCCPARAMS) Isochronous Scheduling Threshold Mask */
#define UHPHS_HCCPARAMS_IST(value)            (UHPHS_HCCPARAMS_IST_Msk & ((value) << UHPHS_HCCPARAMS_IST_Pos))
#define UHPHS_HCCPARAMS_EECP_Pos              _U_(8)                                               /**< (UHPHS_HCCPARAMS) EHCI Extended Capabilities Pointer Position */
#define UHPHS_HCCPARAMS_EECP_Msk              (_U_(0xFF) << UHPHS_HCCPARAMS_EECP_Pos)              /**< (UHPHS_HCCPARAMS) EHCI Extended Capabilities Pointer Mask */
#define UHPHS_HCCPARAMS_EECP(value)           (UHPHS_HCCPARAMS_EECP_Msk & ((value) << UHPHS_HCCPARAMS_EECP_Pos))
#define UHPHS_HCCPARAMS_Msk                   _U_(0x0000FFF7)                                      /**< (UHPHS_HCCPARAMS) Register Mask  */


/* -------- UHPHS_USBCMD : (UHPHS Offset: 0x10) (R/W 32) UHPHS USB Command Register -------- */
#define UHPHS_USBCMD_RS_Pos                   _U_(0)                                               /**< (UHPHS_USBCMD) Run/Stop (read/write) Position */
#define UHPHS_USBCMD_RS_Msk                   (_U_(0x1) << UHPHS_USBCMD_RS_Pos)                    /**< (UHPHS_USBCMD) Run/Stop (read/write) Mask */
#define UHPHS_USBCMD_RS(value)                (UHPHS_USBCMD_RS_Msk & ((value) << UHPHS_USBCMD_RS_Pos))
#define UHPHS_USBCMD_HCRESET_Pos              _U_(1)                                               /**< (UHPHS_USBCMD) Host Controller Reset (read/write) Position */
#define UHPHS_USBCMD_HCRESET_Msk              (_U_(0x1) << UHPHS_USBCMD_HCRESET_Pos)               /**< (UHPHS_USBCMD) Host Controller Reset (read/write) Mask */
#define UHPHS_USBCMD_HCRESET(value)           (UHPHS_USBCMD_HCRESET_Msk & ((value) << UHPHS_USBCMD_HCRESET_Pos))
#define UHPHS_USBCMD_FLS_Pos                  _U_(2)                                               /**< (UHPHS_USBCMD) Frame List Size (read/write or read-only) Position */
#define UHPHS_USBCMD_FLS_Msk                  (_U_(0x3) << UHPHS_USBCMD_FLS_Pos)                   /**< (UHPHS_USBCMD) Frame List Size (read/write or read-only) Mask */
#define UHPHS_USBCMD_FLS(value)               (UHPHS_USBCMD_FLS_Msk & ((value) << UHPHS_USBCMD_FLS_Pos))
#define UHPHS_USBCMD_PSE_Pos                  _U_(4)                                               /**< (UHPHS_USBCMD) Periodic Schedule Enable (read/write) Position */
#define UHPHS_USBCMD_PSE_Msk                  (_U_(0x1) << UHPHS_USBCMD_PSE_Pos)                   /**< (UHPHS_USBCMD) Periodic Schedule Enable (read/write) Mask */
#define UHPHS_USBCMD_PSE(value)               (UHPHS_USBCMD_PSE_Msk & ((value) << UHPHS_USBCMD_PSE_Pos))
#define UHPHS_USBCMD_ASE_Pos                  _U_(5)                                               /**< (UHPHS_USBCMD) Asynchronous Schedule Enable (read/write) Position */
#define UHPHS_USBCMD_ASE_Msk                  (_U_(0x1) << UHPHS_USBCMD_ASE_Pos)                   /**< (UHPHS_USBCMD) Asynchronous Schedule Enable (read/write) Mask */
#define UHPHS_USBCMD_ASE(value)               (UHPHS_USBCMD_ASE_Msk & ((value) << UHPHS_USBCMD_ASE_Pos))
#define UHPHS_USBCMD_IAAD_Pos                 _U_(6)                                               /**< (UHPHS_USBCMD) Interrupt on Async Advance Doorbell (read/write) Position */
#define UHPHS_USBCMD_IAAD_Msk                 (_U_(0x1) << UHPHS_USBCMD_IAAD_Pos)                  /**< (UHPHS_USBCMD) Interrupt on Async Advance Doorbell (read/write) Mask */
#define UHPHS_USBCMD_IAAD(value)              (UHPHS_USBCMD_IAAD_Msk & ((value) << UHPHS_USBCMD_IAAD_Pos))
#define UHPHS_USBCMD_LHCR_Pos                 _U_(7)                                               /**< (UHPHS_USBCMD) Light Host Controller Reset (optional) (read/write) Position */
#define UHPHS_USBCMD_LHCR_Msk                 (_U_(0x1) << UHPHS_USBCMD_LHCR_Pos)                  /**< (UHPHS_USBCMD) Light Host Controller Reset (optional) (read/write) Mask */
#define UHPHS_USBCMD_LHCR(value)              (UHPHS_USBCMD_LHCR_Msk & ((value) << UHPHS_USBCMD_LHCR_Pos))
#define UHPHS_USBCMD_ASPMC_Pos                _U_(8)                                               /**< (UHPHS_USBCMD) Asynchronous Schedule Park Mode Count (optional) (read/write or read-only) Position */
#define UHPHS_USBCMD_ASPMC_Msk                (_U_(0x3) << UHPHS_USBCMD_ASPMC_Pos)                 /**< (UHPHS_USBCMD) Asynchronous Schedule Park Mode Count (optional) (read/write or read-only) Mask */
#define UHPHS_USBCMD_ASPMC(value)             (UHPHS_USBCMD_ASPMC_Msk & ((value) << UHPHS_USBCMD_ASPMC_Pos))
#define UHPHS_USBCMD_ASPME_Pos                _U_(11)                                              /**< (UHPHS_USBCMD) Asynchronous Schedule Park Mode Enable (optional) (read/write or read-only) Position */
#define UHPHS_USBCMD_ASPME_Msk                (_U_(0x1) << UHPHS_USBCMD_ASPME_Pos)                 /**< (UHPHS_USBCMD) Asynchronous Schedule Park Mode Enable (optional) (read/write or read-only) Mask */
#define UHPHS_USBCMD_ASPME(value)             (UHPHS_USBCMD_ASPME_Msk & ((value) << UHPHS_USBCMD_ASPME_Pos))
#define UHPHS_USBCMD_ITC_Pos                  _U_(16)                                              /**< (UHPHS_USBCMD) Interrupt Threshold Control (read/write) Position */
#define UHPHS_USBCMD_ITC_Msk                  (_U_(0xFF) << UHPHS_USBCMD_ITC_Pos)                  /**< (UHPHS_USBCMD) Interrupt Threshold Control (read/write) Mask */
#define UHPHS_USBCMD_ITC(value)               (UHPHS_USBCMD_ITC_Msk & ((value) << UHPHS_USBCMD_ITC_Pos))
#define UHPHS_USBCMD_Msk                      _U_(0x00FF0BFF)                                      /**< (UHPHS_USBCMD) Register Mask  */


/* -------- UHPHS_USBSTS : (UHPHS Offset: 0x14) (R/W 32) UHPHS USB Status Register -------- */
#define UHPHS_USBSTS_USBINT_Pos               _U_(0)                                               /**< (UHPHS_USBSTS) USB Interrupt (read/write clear) Position */
#define UHPHS_USBSTS_USBINT_Msk               (_U_(0x1) << UHPHS_USBSTS_USBINT_Pos)                /**< (UHPHS_USBSTS) USB Interrupt (read/write clear) Mask */
#define UHPHS_USBSTS_USBINT(value)            (UHPHS_USBSTS_USBINT_Msk & ((value) << UHPHS_USBSTS_USBINT_Pos))
#define UHPHS_USBSTS_USBERRINT_Pos            _U_(1)                                               /**< (UHPHS_USBSTS) USB Error Interrupt (read/write clear) Position */
#define UHPHS_USBSTS_USBERRINT_Msk            (_U_(0x1) << UHPHS_USBSTS_USBERRINT_Pos)             /**< (UHPHS_USBSTS) USB Error Interrupt (read/write clear) Mask */
#define UHPHS_USBSTS_USBERRINT(value)         (UHPHS_USBSTS_USBERRINT_Msk & ((value) << UHPHS_USBSTS_USBERRINT_Pos))
#define UHPHS_USBSTS_PCD_Pos                  _U_(2)                                               /**< (UHPHS_USBSTS) Port Change Detect (read/write clear) Position */
#define UHPHS_USBSTS_PCD_Msk                  (_U_(0x1) << UHPHS_USBSTS_PCD_Pos)                   /**< (UHPHS_USBSTS) Port Change Detect (read/write clear) Mask */
#define UHPHS_USBSTS_PCD(value)               (UHPHS_USBSTS_PCD_Msk & ((value) << UHPHS_USBSTS_PCD_Pos))
#define UHPHS_USBSTS_FLR_Pos                  _U_(3)                                               /**< (UHPHS_USBSTS) Frame List Rollover (read/write clear) Position */
#define UHPHS_USBSTS_FLR_Msk                  (_U_(0x1) << UHPHS_USBSTS_FLR_Pos)                   /**< (UHPHS_USBSTS) Frame List Rollover (read/write clear) Mask */
#define UHPHS_USBSTS_FLR(value)               (UHPHS_USBSTS_FLR_Msk & ((value) << UHPHS_USBSTS_FLR_Pos))
#define UHPHS_USBSTS_HSE_Pos                  _U_(4)                                               /**< (UHPHS_USBSTS) Host System Error (read/write clear) Position */
#define UHPHS_USBSTS_HSE_Msk                  (_U_(0x1) << UHPHS_USBSTS_HSE_Pos)                   /**< (UHPHS_USBSTS) Host System Error (read/write clear) Mask */
#define UHPHS_USBSTS_HSE(value)               (UHPHS_USBSTS_HSE_Msk & ((value) << UHPHS_USBSTS_HSE_Pos))
#define UHPHS_USBSTS_IAA_Pos                  _U_(5)                                               /**< (UHPHS_USBSTS) Interrupt on Async Advance (read/write clear) Position */
#define UHPHS_USBSTS_IAA_Msk                  (_U_(0x1) << UHPHS_USBSTS_IAA_Pos)                   /**< (UHPHS_USBSTS) Interrupt on Async Advance (read/write clear) Mask */
#define UHPHS_USBSTS_IAA(value)               (UHPHS_USBSTS_IAA_Msk & ((value) << UHPHS_USBSTS_IAA_Pos))
#define UHPHS_USBSTS_HCHLT_Pos                _U_(12)                                              /**< (UHPHS_USBSTS) HCHalted (read-only) Position */
#define UHPHS_USBSTS_HCHLT_Msk                (_U_(0x1) << UHPHS_USBSTS_HCHLT_Pos)                 /**< (UHPHS_USBSTS) HCHalted (read-only) Mask */
#define UHPHS_USBSTS_HCHLT(value)             (UHPHS_USBSTS_HCHLT_Msk & ((value) << UHPHS_USBSTS_HCHLT_Pos))
#define UHPHS_USBSTS_RCM_Pos                  _U_(13)                                              /**< (UHPHS_USBSTS) Reclamation (read-only) Position */
#define UHPHS_USBSTS_RCM_Msk                  (_U_(0x1) << UHPHS_USBSTS_RCM_Pos)                   /**< (UHPHS_USBSTS) Reclamation (read-only) Mask */
#define UHPHS_USBSTS_RCM(value)               (UHPHS_USBSTS_RCM_Msk & ((value) << UHPHS_USBSTS_RCM_Pos))
#define UHPHS_USBSTS_PSS_Pos                  _U_(14)                                              /**< (UHPHS_USBSTS) Periodic Schedule Status (read-only) Position */
#define UHPHS_USBSTS_PSS_Msk                  (_U_(0x1) << UHPHS_USBSTS_PSS_Pos)                   /**< (UHPHS_USBSTS) Periodic Schedule Status (read-only) Mask */
#define UHPHS_USBSTS_PSS(value)               (UHPHS_USBSTS_PSS_Msk & ((value) << UHPHS_USBSTS_PSS_Pos))
#define UHPHS_USBSTS_ASS_Pos                  _U_(15)                                              /**< (UHPHS_USBSTS) Asynchronous Schedule Status (read-only) Position */
#define UHPHS_USBSTS_ASS_Msk                  (_U_(0x1) << UHPHS_USBSTS_ASS_Pos)                   /**< (UHPHS_USBSTS) Asynchronous Schedule Status (read-only) Mask */
#define UHPHS_USBSTS_ASS(value)               (UHPHS_USBSTS_ASS_Msk & ((value) << UHPHS_USBSTS_ASS_Pos))
#define UHPHS_USBSTS_Msk                      _U_(0x0000F03F)                                      /**< (UHPHS_USBSTS) Register Mask  */


/* -------- UHPHS_USBINTR : (UHPHS Offset: 0x18) (R/W 32) UHPHS USB Interrupt Enable Register -------- */
#define UHPHS_USBINTR_USBIE_Pos               _U_(0)                                               /**< (UHPHS_USBINTR) USB Interrupt Enable Position */
#define UHPHS_USBINTR_USBIE_Msk               (_U_(0x1) << UHPHS_USBINTR_USBIE_Pos)                /**< (UHPHS_USBINTR) USB Interrupt Enable Mask */
#define UHPHS_USBINTR_USBIE(value)            (UHPHS_USBINTR_USBIE_Msk & ((value) << UHPHS_USBINTR_USBIE_Pos))
#define UHPHS_USBINTR_USBEIE_Pos              _U_(1)                                               /**< (UHPHS_USBINTR) USB Error Interrupt Enable Position */
#define UHPHS_USBINTR_USBEIE_Msk              (_U_(0x1) << UHPHS_USBINTR_USBEIE_Pos)               /**< (UHPHS_USBINTR) USB Error Interrupt Enable Mask */
#define UHPHS_USBINTR_USBEIE(value)           (UHPHS_USBINTR_USBEIE_Msk & ((value) << UHPHS_USBINTR_USBEIE_Pos))
#define UHPHS_USBINTR_PCIE_Pos                _U_(2)                                               /**< (UHPHS_USBINTR) Port Change Interrupt Enable Position */
#define UHPHS_USBINTR_PCIE_Msk                (_U_(0x1) << UHPHS_USBINTR_PCIE_Pos)                 /**< (UHPHS_USBINTR) Port Change Interrupt Enable Mask */
#define UHPHS_USBINTR_PCIE(value)             (UHPHS_USBINTR_PCIE_Msk & ((value) << UHPHS_USBINTR_PCIE_Pos))
#define UHPHS_USBINTR_FLRE_Pos                _U_(3)                                               /**< (UHPHS_USBINTR) Frame List Rollover Enable Position */
#define UHPHS_USBINTR_FLRE_Msk                (_U_(0x1) << UHPHS_USBINTR_FLRE_Pos)                 /**< (UHPHS_USBINTR) Frame List Rollover Enable Mask */
#define UHPHS_USBINTR_FLRE(value)             (UHPHS_USBINTR_FLRE_Msk & ((value) << UHPHS_USBINTR_FLRE_Pos))
#define UHPHS_USBINTR_HSEE_Pos                _U_(4)                                               /**< (UHPHS_USBINTR) Host System Error Enable Position */
#define UHPHS_USBINTR_HSEE_Msk                (_U_(0x1) << UHPHS_USBINTR_HSEE_Pos)                 /**< (UHPHS_USBINTR) Host System Error Enable Mask */
#define UHPHS_USBINTR_HSEE(value)             (UHPHS_USBINTR_HSEE_Msk & ((value) << UHPHS_USBINTR_HSEE_Pos))
#define UHPHS_USBINTR_IAAE_Pos                _U_(5)                                               /**< (UHPHS_USBINTR) Interrupt on Async Advance Enable Position */
#define UHPHS_USBINTR_IAAE_Msk                (_U_(0x1) << UHPHS_USBINTR_IAAE_Pos)                 /**< (UHPHS_USBINTR) Interrupt on Async Advance Enable Mask */
#define UHPHS_USBINTR_IAAE(value)             (UHPHS_USBINTR_IAAE_Msk & ((value) << UHPHS_USBINTR_IAAE_Pos))
#define UHPHS_USBINTR_Msk                     _U_(0x0000003F)                                      /**< (UHPHS_USBINTR) Register Mask  */


/* -------- UHPHS_FRINDEX : (UHPHS Offset: 0x1C) (R/W 32) UHPHS USB Frame Index Register -------- */
#define UHPHS_FRINDEX_FI_Pos                  _U_(0)                                               /**< (UHPHS_FRINDEX) Frame Index Position */
#define UHPHS_FRINDEX_FI_Msk                  (_U_(0x3FFF) << UHPHS_FRINDEX_FI_Pos)                /**< (UHPHS_FRINDEX) Frame Index Mask */
#define UHPHS_FRINDEX_FI(value)               (UHPHS_FRINDEX_FI_Msk & ((value) << UHPHS_FRINDEX_FI_Pos))
#define UHPHS_FRINDEX_Msk                     _U_(0x00003FFF)                                      /**< (UHPHS_FRINDEX) Register Mask  */


/* -------- UHPHS_CTRLDSSEGMENT : (UHPHS Offset: 0x20) (R/W 32) UHPHS Control Data Structure Segment Register -------- */
#define UHPHS_CTRLDSSEGMENT_Msk               _U_(0x00000000)                                      /**< (UHPHS_CTRLDSSEGMENT) Register Mask  */


/* -------- UHPHS_PERIODICLISTBASE : (UHPHS Offset: 0x24) (R/W 32) UHPHS Periodic Frame List Base Address Register -------- */
#define UHPHS_PERIODICLISTBASE_BA_Pos         _U_(12)                                              /**< (UHPHS_PERIODICLISTBASE) Base Address (Low) Position */
#define UHPHS_PERIODICLISTBASE_BA_Msk         (_U_(0xFFFFF) << UHPHS_PERIODICLISTBASE_BA_Pos)      /**< (UHPHS_PERIODICLISTBASE) Base Address (Low) Mask */
#define UHPHS_PERIODICLISTBASE_BA(value)      (UHPHS_PERIODICLISTBASE_BA_Msk & ((value) << UHPHS_PERIODICLISTBASE_BA_Pos))
#define UHPHS_PERIODICLISTBASE_Msk            _U_(0xFFFFF000)                                      /**< (UHPHS_PERIODICLISTBASE) Register Mask  */


/* -------- UHPHS_ASYNCLISTADDR : (UHPHS Offset: 0x28) (R/W 32) UHPHS Asynchronous List Address Register -------- */
#define UHPHS_ASYNCLISTADDR_LPL_Pos           _U_(5)                                               /**< (UHPHS_ASYNCLISTADDR) Link Pointer Low Position */
#define UHPHS_ASYNCLISTADDR_LPL_Msk           (_U_(0x7FFFFFF) << UHPHS_ASYNCLISTADDR_LPL_Pos)      /**< (UHPHS_ASYNCLISTADDR) Link Pointer Low Mask */
#define UHPHS_ASYNCLISTADDR_LPL(value)        (UHPHS_ASYNCLISTADDR_LPL_Msk & ((value) << UHPHS_ASYNCLISTADDR_LPL_Pos))
#define UHPHS_ASYNCLISTADDR_Msk               _U_(0xFFFFFFE0)                                      /**< (UHPHS_ASYNCLISTADDR) Register Mask  */


/* -------- UHPHS_CONFIGFLAG : (UHPHS Offset: 0x50) (R/W 32) UHPHS Configured Flag Register -------- */
#define UHPHS_CONFIGFLAG_CF_Pos               _U_(0)                                               /**< (UHPHS_CONFIGFLAG) Configure Flag (read/write) Position */
#define UHPHS_CONFIGFLAG_CF_Msk               (_U_(0x1) << UHPHS_CONFIGFLAG_CF_Pos)                /**< (UHPHS_CONFIGFLAG) Configure Flag (read/write) Mask */
#define UHPHS_CONFIGFLAG_CF(value)            (UHPHS_CONFIGFLAG_CF_Msk & ((value) << UHPHS_CONFIGFLAG_CF_Pos))
#define UHPHS_CONFIGFLAG_Msk                  _U_(0x00000001)                                      /**< (UHPHS_CONFIGFLAG) Register Mask  */


/* -------- UHPHS_PORTSC_0 : (UHPHS Offset: 0x54) (R/W 32) UHPHS Port Status and Control Register 0 -------- */
#define UHPHS_PORTSC_0_CCS_Pos                _U_(0)                                               /**< (UHPHS_PORTSC_0) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_0_CCS_Msk                (_U_(0x1) << UHPHS_PORTSC_0_CCS_Pos)                 /**< (UHPHS_PORTSC_0) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_0_CCS(value)             (UHPHS_PORTSC_0_CCS_Msk & ((value) << UHPHS_PORTSC_0_CCS_Pos))
#define UHPHS_PORTSC_0_CSC_Pos                _U_(1)                                               /**< (UHPHS_PORTSC_0) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_0_CSC_Msk                (_U_(0x1) << UHPHS_PORTSC_0_CSC_Pos)                 /**< (UHPHS_PORTSC_0) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_0_CSC(value)             (UHPHS_PORTSC_0_CSC_Msk & ((value) << UHPHS_PORTSC_0_CSC_Pos))
#define UHPHS_PORTSC_0_PED_Pos                _U_(2)                                               /**< (UHPHS_PORTSC_0) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_0_PED_Msk                (_U_(0x1) << UHPHS_PORTSC_0_PED_Pos)                 /**< (UHPHS_PORTSC_0) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_0_PED(value)             (UHPHS_PORTSC_0_PED_Msk & ((value) << UHPHS_PORTSC_0_PED_Pos))
#define UHPHS_PORTSC_0_PEDC_Pos               _U_(3)                                               /**< (UHPHS_PORTSC_0) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_0_PEDC_Msk               (_U_(0x1) << UHPHS_PORTSC_0_PEDC_Pos)                /**< (UHPHS_PORTSC_0) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_0_PEDC(value)            (UHPHS_PORTSC_0_PEDC_Msk & ((value) << UHPHS_PORTSC_0_PEDC_Pos))
#define UHPHS_PORTSC_0_OCA_Pos                _U_(4)                                               /**< (UHPHS_PORTSC_0) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_0_OCA_Msk                (_U_(0x1) << UHPHS_PORTSC_0_OCA_Pos)                 /**< (UHPHS_PORTSC_0) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_0_OCA(value)             (UHPHS_PORTSC_0_OCA_Msk & ((value) << UHPHS_PORTSC_0_OCA_Pos))
#define UHPHS_PORTSC_0_OCC_Pos                _U_(5)                                               /**< (UHPHS_PORTSC_0) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_0_OCC_Msk                (_U_(0x1) << UHPHS_PORTSC_0_OCC_Pos)                 /**< (UHPHS_PORTSC_0) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_0_OCC(value)             (UHPHS_PORTSC_0_OCC_Msk & ((value) << UHPHS_PORTSC_0_OCC_Pos))
#define UHPHS_PORTSC_0_FPR_Pos                _U_(6)                                               /**< (UHPHS_PORTSC_0) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_0_FPR_Msk                (_U_(0x1) << UHPHS_PORTSC_0_FPR_Pos)                 /**< (UHPHS_PORTSC_0) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_0_FPR(value)             (UHPHS_PORTSC_0_FPR_Msk & ((value) << UHPHS_PORTSC_0_FPR_Pos))
#define UHPHS_PORTSC_0_SUS_Pos                _U_(7)                                               /**< (UHPHS_PORTSC_0) Suspend (read/write) Position */
#define UHPHS_PORTSC_0_SUS_Msk                (_U_(0x1) << UHPHS_PORTSC_0_SUS_Pos)                 /**< (UHPHS_PORTSC_0) Suspend (read/write) Mask */
#define UHPHS_PORTSC_0_SUS(value)             (UHPHS_PORTSC_0_SUS_Msk & ((value) << UHPHS_PORTSC_0_SUS_Pos))
#define UHPHS_PORTSC_0_PR_Pos                 _U_(8)                                               /**< (UHPHS_PORTSC_0) Port Reset (read/write) Position */
#define UHPHS_PORTSC_0_PR_Msk                 (_U_(0x1) << UHPHS_PORTSC_0_PR_Pos)                  /**< (UHPHS_PORTSC_0) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_0_PR(value)              (UHPHS_PORTSC_0_PR_Msk & ((value) << UHPHS_PORTSC_0_PR_Pos))
#define UHPHS_PORTSC_0_LS_Pos                 _U_(10)                                              /**< (UHPHS_PORTSC_0) Line Status (read-only) Position */
#define UHPHS_PORTSC_0_LS_Msk                 (_U_(0x3) << UHPHS_PORTSC_0_LS_Pos)                  /**< (UHPHS_PORTSC_0) Line Status (read-only) Mask */
#define UHPHS_PORTSC_0_LS(value)              (UHPHS_PORTSC_0_LS_Msk & ((value) << UHPHS_PORTSC_0_LS_Pos))
#define UHPHS_PORTSC_0_PP_Pos                 _U_(12)                                              /**< (UHPHS_PORTSC_0) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_0_PP_Msk                 (_U_(0x1) << UHPHS_PORTSC_0_PP_Pos)                  /**< (UHPHS_PORTSC_0) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_0_PP(value)              (UHPHS_PORTSC_0_PP_Msk & ((value) << UHPHS_PORTSC_0_PP_Pos))
#define UHPHS_PORTSC_0_PO_Pos                 _U_(13)                                              /**< (UHPHS_PORTSC_0) Port Owner (read/write) Position */
#define UHPHS_PORTSC_0_PO_Msk                 (_U_(0x1) << UHPHS_PORTSC_0_PO_Pos)                  /**< (UHPHS_PORTSC_0) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_0_PO(value)              (UHPHS_PORTSC_0_PO_Msk & ((value) << UHPHS_PORTSC_0_PO_Pos))
#define UHPHS_PORTSC_0_PIC_Pos                _U_(14)                                              /**< (UHPHS_PORTSC_0) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_0_PIC_Msk                (_U_(0x3) << UHPHS_PORTSC_0_PIC_Pos)                 /**< (UHPHS_PORTSC_0) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_0_PIC(value)             (UHPHS_PORTSC_0_PIC_Msk & ((value) << UHPHS_PORTSC_0_PIC_Pos))
#define UHPHS_PORTSC_0_PTC_Pos                _U_(16)                                              /**< (UHPHS_PORTSC_0) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_0_PTC_Msk                (_U_(0xF) << UHPHS_PORTSC_0_PTC_Pos)                 /**< (UHPHS_PORTSC_0) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_0_PTC(value)             (UHPHS_PORTSC_0_PTC_Msk & ((value) << UHPHS_PORTSC_0_PTC_Pos))
#define UHPHS_PORTSC_0_WKCNNT_E_Pos           _U_(20)                                              /**< (UHPHS_PORTSC_0) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_0_WKCNNT_E_Msk           (_U_(0x1) << UHPHS_PORTSC_0_WKCNNT_E_Pos)            /**< (UHPHS_PORTSC_0) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_0_WKCNNT_E(value)        (UHPHS_PORTSC_0_WKCNNT_E_Msk & ((value) << UHPHS_PORTSC_0_WKCNNT_E_Pos))
#define UHPHS_PORTSC_0_WKDSCNNT_E_Pos         _U_(21)                                              /**< (UHPHS_PORTSC_0) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_0_WKDSCNNT_E_Msk         (_U_(0x1) << UHPHS_PORTSC_0_WKDSCNNT_E_Pos)          /**< (UHPHS_PORTSC_0) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_0_WKDSCNNT_E(value)      (UHPHS_PORTSC_0_WKDSCNNT_E_Msk & ((value) << UHPHS_PORTSC_0_WKDSCNNT_E_Pos))
#define UHPHS_PORTSC_0_WKOC_E_Pos             _U_(22)                                              /**< (UHPHS_PORTSC_0) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_0_WKOC_E_Msk             (_U_(0x1) << UHPHS_PORTSC_0_WKOC_E_Pos)              /**< (UHPHS_PORTSC_0) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_0_WKOC_E(value)          (UHPHS_PORTSC_0_WKOC_E_Msk & ((value) << UHPHS_PORTSC_0_WKOC_E_Pos))
#define UHPHS_PORTSC_0_Msk                    _U_(0x007FFDFF)                                      /**< (UHPHS_PORTSC_0) Register Mask  */


/* -------- UHPHS_PORTSC_1 : (UHPHS Offset: 0x58) (R/W 32) UHPHS Port Status and Control Register 1 -------- */
#define UHPHS_PORTSC_1_CCS_Pos                _U_(0)                                               /**< (UHPHS_PORTSC_1) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_1_CCS_Msk                (_U_(0x1) << UHPHS_PORTSC_1_CCS_Pos)                 /**< (UHPHS_PORTSC_1) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_1_CCS(value)             (UHPHS_PORTSC_1_CCS_Msk & ((value) << UHPHS_PORTSC_1_CCS_Pos))
#define UHPHS_PORTSC_1_CSC_Pos                _U_(1)                                               /**< (UHPHS_PORTSC_1) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_1_CSC_Msk                (_U_(0x1) << UHPHS_PORTSC_1_CSC_Pos)                 /**< (UHPHS_PORTSC_1) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_1_CSC(value)             (UHPHS_PORTSC_1_CSC_Msk & ((value) << UHPHS_PORTSC_1_CSC_Pos))
#define UHPHS_PORTSC_1_PED_Pos                _U_(2)                                               /**< (UHPHS_PORTSC_1) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_1_PED_Msk                (_U_(0x1) << UHPHS_PORTSC_1_PED_Pos)                 /**< (UHPHS_PORTSC_1) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_1_PED(value)             (UHPHS_PORTSC_1_PED_Msk & ((value) << UHPHS_PORTSC_1_PED_Pos))
#define UHPHS_PORTSC_1_PEDC_Pos               _U_(3)                                               /**< (UHPHS_PORTSC_1) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_1_PEDC_Msk               (_U_(0x1) << UHPHS_PORTSC_1_PEDC_Pos)                /**< (UHPHS_PORTSC_1) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_1_PEDC(value)            (UHPHS_PORTSC_1_PEDC_Msk & ((value) << UHPHS_PORTSC_1_PEDC_Pos))
#define UHPHS_PORTSC_1_OCA_Pos                _U_(4)                                               /**< (UHPHS_PORTSC_1) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_1_OCA_Msk                (_U_(0x1) << UHPHS_PORTSC_1_OCA_Pos)                 /**< (UHPHS_PORTSC_1) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_1_OCA(value)             (UHPHS_PORTSC_1_OCA_Msk & ((value) << UHPHS_PORTSC_1_OCA_Pos))
#define UHPHS_PORTSC_1_OCC_Pos                _U_(5)                                               /**< (UHPHS_PORTSC_1) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_1_OCC_Msk                (_U_(0x1) << UHPHS_PORTSC_1_OCC_Pos)                 /**< (UHPHS_PORTSC_1) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_1_OCC(value)             (UHPHS_PORTSC_1_OCC_Msk & ((value) << UHPHS_PORTSC_1_OCC_Pos))
#define UHPHS_PORTSC_1_FPR_Pos                _U_(6)                                               /**< (UHPHS_PORTSC_1) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_1_FPR_Msk                (_U_(0x1) << UHPHS_PORTSC_1_FPR_Pos)                 /**< (UHPHS_PORTSC_1) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_1_FPR(value)             (UHPHS_PORTSC_1_FPR_Msk & ((value) << UHPHS_PORTSC_1_FPR_Pos))
#define UHPHS_PORTSC_1_SUS_Pos                _U_(7)                                               /**< (UHPHS_PORTSC_1) Suspend (read/write) Position */
#define UHPHS_PORTSC_1_SUS_Msk                (_U_(0x1) << UHPHS_PORTSC_1_SUS_Pos)                 /**< (UHPHS_PORTSC_1) Suspend (read/write) Mask */
#define UHPHS_PORTSC_1_SUS(value)             (UHPHS_PORTSC_1_SUS_Msk & ((value) << UHPHS_PORTSC_1_SUS_Pos))
#define UHPHS_PORTSC_1_PR_Pos                 _U_(8)                                               /**< (UHPHS_PORTSC_1) Port Reset (read/write) Position */
#define UHPHS_PORTSC_1_PR_Msk                 (_U_(0x1) << UHPHS_PORTSC_1_PR_Pos)                  /**< (UHPHS_PORTSC_1) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_1_PR(value)              (UHPHS_PORTSC_1_PR_Msk & ((value) << UHPHS_PORTSC_1_PR_Pos))
#define UHPHS_PORTSC_1_LS_Pos                 _U_(10)                                              /**< (UHPHS_PORTSC_1) Line Status (read-only) Position */
#define UHPHS_PORTSC_1_LS_Msk                 (_U_(0x3) << UHPHS_PORTSC_1_LS_Pos)                  /**< (UHPHS_PORTSC_1) Line Status (read-only) Mask */
#define UHPHS_PORTSC_1_LS(value)              (UHPHS_PORTSC_1_LS_Msk & ((value) << UHPHS_PORTSC_1_LS_Pos))
#define UHPHS_PORTSC_1_PP_Pos                 _U_(12)                                              /**< (UHPHS_PORTSC_1) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_1_PP_Msk                 (_U_(0x1) << UHPHS_PORTSC_1_PP_Pos)                  /**< (UHPHS_PORTSC_1) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_1_PP(value)              (UHPHS_PORTSC_1_PP_Msk & ((value) << UHPHS_PORTSC_1_PP_Pos))
#define UHPHS_PORTSC_1_PO_Pos                 _U_(13)                                              /**< (UHPHS_PORTSC_1) Port Owner (read/write) Position */
#define UHPHS_PORTSC_1_PO_Msk                 (_U_(0x1) << UHPHS_PORTSC_1_PO_Pos)                  /**< (UHPHS_PORTSC_1) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_1_PO(value)              (UHPHS_PORTSC_1_PO_Msk & ((value) << UHPHS_PORTSC_1_PO_Pos))
#define UHPHS_PORTSC_1_PIC_Pos                _U_(14)                                              /**< (UHPHS_PORTSC_1) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_1_PIC_Msk                (_U_(0x3) << UHPHS_PORTSC_1_PIC_Pos)                 /**< (UHPHS_PORTSC_1) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_1_PIC(value)             (UHPHS_PORTSC_1_PIC_Msk & ((value) << UHPHS_PORTSC_1_PIC_Pos))
#define UHPHS_PORTSC_1_PTC_Pos                _U_(16)                                              /**< (UHPHS_PORTSC_1) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_1_PTC_Msk                (_U_(0xF) << UHPHS_PORTSC_1_PTC_Pos)                 /**< (UHPHS_PORTSC_1) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_1_PTC(value)             (UHPHS_PORTSC_1_PTC_Msk & ((value) << UHPHS_PORTSC_1_PTC_Pos))
#define UHPHS_PORTSC_1_WKCNNT_E_Pos           _U_(20)                                              /**< (UHPHS_PORTSC_1) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_1_WKCNNT_E_Msk           (_U_(0x1) << UHPHS_PORTSC_1_WKCNNT_E_Pos)            /**< (UHPHS_PORTSC_1) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_1_WKCNNT_E(value)        (UHPHS_PORTSC_1_WKCNNT_E_Msk & ((value) << UHPHS_PORTSC_1_WKCNNT_E_Pos))
#define UHPHS_PORTSC_1_WKDSCNNT_E_Pos         _U_(21)                                              /**< (UHPHS_PORTSC_1) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_1_WKDSCNNT_E_Msk         (_U_(0x1) << UHPHS_PORTSC_1_WKDSCNNT_E_Pos)          /**< (UHPHS_PORTSC_1) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_1_WKDSCNNT_E(value)      (UHPHS_PORTSC_1_WKDSCNNT_E_Msk & ((value) << UHPHS_PORTSC_1_WKDSCNNT_E_Pos))
#define UHPHS_PORTSC_1_WKOC_E_Pos             _U_(22)                                              /**< (UHPHS_PORTSC_1) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_1_WKOC_E_Msk             (_U_(0x1) << UHPHS_PORTSC_1_WKOC_E_Pos)              /**< (UHPHS_PORTSC_1) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_1_WKOC_E(value)          (UHPHS_PORTSC_1_WKOC_E_Msk & ((value) << UHPHS_PORTSC_1_WKOC_E_Pos))
#define UHPHS_PORTSC_1_Msk                    _U_(0x007FFDFF)                                      /**< (UHPHS_PORTSC_1) Register Mask  */


/* -------- UHPHS_PORTSC_2 : (UHPHS Offset: 0x5C) (R/W 32) UHPHS Port Status and Control Register 2 -------- */
#define UHPHS_PORTSC_2_CCS_Pos                _U_(0)                                               /**< (UHPHS_PORTSC_2) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_2_CCS_Msk                (_U_(0x1) << UHPHS_PORTSC_2_CCS_Pos)                 /**< (UHPHS_PORTSC_2) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_2_CCS(value)             (UHPHS_PORTSC_2_CCS_Msk & ((value) << UHPHS_PORTSC_2_CCS_Pos))
#define UHPHS_PORTSC_2_CSC_Pos                _U_(1)                                               /**< (UHPHS_PORTSC_2) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_2_CSC_Msk                (_U_(0x1) << UHPHS_PORTSC_2_CSC_Pos)                 /**< (UHPHS_PORTSC_2) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_2_CSC(value)             (UHPHS_PORTSC_2_CSC_Msk & ((value) << UHPHS_PORTSC_2_CSC_Pos))
#define UHPHS_PORTSC_2_PED_Pos                _U_(2)                                               /**< (UHPHS_PORTSC_2) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_2_PED_Msk                (_U_(0x1) << UHPHS_PORTSC_2_PED_Pos)                 /**< (UHPHS_PORTSC_2) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_2_PED(value)             (UHPHS_PORTSC_2_PED_Msk & ((value) << UHPHS_PORTSC_2_PED_Pos))
#define UHPHS_PORTSC_2_PEDC_Pos               _U_(3)                                               /**< (UHPHS_PORTSC_2) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_2_PEDC_Msk               (_U_(0x1) << UHPHS_PORTSC_2_PEDC_Pos)                /**< (UHPHS_PORTSC_2) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_2_PEDC(value)            (UHPHS_PORTSC_2_PEDC_Msk & ((value) << UHPHS_PORTSC_2_PEDC_Pos))
#define UHPHS_PORTSC_2_OCA_Pos                _U_(4)                                               /**< (UHPHS_PORTSC_2) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_2_OCA_Msk                (_U_(0x1) << UHPHS_PORTSC_2_OCA_Pos)                 /**< (UHPHS_PORTSC_2) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_2_OCA(value)             (UHPHS_PORTSC_2_OCA_Msk & ((value) << UHPHS_PORTSC_2_OCA_Pos))
#define UHPHS_PORTSC_2_OCC_Pos                _U_(5)                                               /**< (UHPHS_PORTSC_2) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_2_OCC_Msk                (_U_(0x1) << UHPHS_PORTSC_2_OCC_Pos)                 /**< (UHPHS_PORTSC_2) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_2_OCC(value)             (UHPHS_PORTSC_2_OCC_Msk & ((value) << UHPHS_PORTSC_2_OCC_Pos))
#define UHPHS_PORTSC_2_FPR_Pos                _U_(6)                                               /**< (UHPHS_PORTSC_2) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_2_FPR_Msk                (_U_(0x1) << UHPHS_PORTSC_2_FPR_Pos)                 /**< (UHPHS_PORTSC_2) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_2_FPR(value)             (UHPHS_PORTSC_2_FPR_Msk & ((value) << UHPHS_PORTSC_2_FPR_Pos))
#define UHPHS_PORTSC_2_SUS_Pos                _U_(7)                                               /**< (UHPHS_PORTSC_2) Suspend (read/write) Position */
#define UHPHS_PORTSC_2_SUS_Msk                (_U_(0x1) << UHPHS_PORTSC_2_SUS_Pos)                 /**< (UHPHS_PORTSC_2) Suspend (read/write) Mask */
#define UHPHS_PORTSC_2_SUS(value)             (UHPHS_PORTSC_2_SUS_Msk & ((value) << UHPHS_PORTSC_2_SUS_Pos))
#define UHPHS_PORTSC_2_PR_Pos                 _U_(8)                                               /**< (UHPHS_PORTSC_2) Port Reset (read/write) Position */
#define UHPHS_PORTSC_2_PR_Msk                 (_U_(0x1) << UHPHS_PORTSC_2_PR_Pos)                  /**< (UHPHS_PORTSC_2) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_2_PR(value)              (UHPHS_PORTSC_2_PR_Msk & ((value) << UHPHS_PORTSC_2_PR_Pos))
#define UHPHS_PORTSC_2_LS_Pos                 _U_(10)                                              /**< (UHPHS_PORTSC_2) Line Status (read-only) Position */
#define UHPHS_PORTSC_2_LS_Msk                 (_U_(0x3) << UHPHS_PORTSC_2_LS_Pos)                  /**< (UHPHS_PORTSC_2) Line Status (read-only) Mask */
#define UHPHS_PORTSC_2_LS(value)              (UHPHS_PORTSC_2_LS_Msk & ((value) << UHPHS_PORTSC_2_LS_Pos))
#define UHPHS_PORTSC_2_PP_Pos                 _U_(12)                                              /**< (UHPHS_PORTSC_2) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_2_PP_Msk                 (_U_(0x1) << UHPHS_PORTSC_2_PP_Pos)                  /**< (UHPHS_PORTSC_2) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_2_PP(value)              (UHPHS_PORTSC_2_PP_Msk & ((value) << UHPHS_PORTSC_2_PP_Pos))
#define UHPHS_PORTSC_2_PO_Pos                 _U_(13)                                              /**< (UHPHS_PORTSC_2) Port Owner (read/write) Position */
#define UHPHS_PORTSC_2_PO_Msk                 (_U_(0x1) << UHPHS_PORTSC_2_PO_Pos)                  /**< (UHPHS_PORTSC_2) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_2_PO(value)              (UHPHS_PORTSC_2_PO_Msk & ((value) << UHPHS_PORTSC_2_PO_Pos))
#define UHPHS_PORTSC_2_PIC_Pos                _U_(14)                                              /**< (UHPHS_PORTSC_2) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_2_PIC_Msk                (_U_(0x3) << UHPHS_PORTSC_2_PIC_Pos)                 /**< (UHPHS_PORTSC_2) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_2_PIC(value)             (UHPHS_PORTSC_2_PIC_Msk & ((value) << UHPHS_PORTSC_2_PIC_Pos))
#define UHPHS_PORTSC_2_PTC_Pos                _U_(16)                                              /**< (UHPHS_PORTSC_2) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_2_PTC_Msk                (_U_(0xF) << UHPHS_PORTSC_2_PTC_Pos)                 /**< (UHPHS_PORTSC_2) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_2_PTC(value)             (UHPHS_PORTSC_2_PTC_Msk & ((value) << UHPHS_PORTSC_2_PTC_Pos))
#define UHPHS_PORTSC_2_WKCNNT_E_Pos           _U_(20)                                              /**< (UHPHS_PORTSC_2) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_2_WKCNNT_E_Msk           (_U_(0x1) << UHPHS_PORTSC_2_WKCNNT_E_Pos)            /**< (UHPHS_PORTSC_2) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_2_WKCNNT_E(value)        (UHPHS_PORTSC_2_WKCNNT_E_Msk & ((value) << UHPHS_PORTSC_2_WKCNNT_E_Pos))
#define UHPHS_PORTSC_2_WKDSCNNT_E_Pos         _U_(21)                                              /**< (UHPHS_PORTSC_2) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_2_WKDSCNNT_E_Msk         (_U_(0x1) << UHPHS_PORTSC_2_WKDSCNNT_E_Pos)          /**< (UHPHS_PORTSC_2) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_2_WKDSCNNT_E(value)      (UHPHS_PORTSC_2_WKDSCNNT_E_Msk & ((value) << UHPHS_PORTSC_2_WKDSCNNT_E_Pos))
#define UHPHS_PORTSC_2_WKOC_E_Pos             _U_(22)                                              /**< (UHPHS_PORTSC_2) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_2_WKOC_E_Msk             (_U_(0x1) << UHPHS_PORTSC_2_WKOC_E_Pos)              /**< (UHPHS_PORTSC_2) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_2_WKOC_E(value)          (UHPHS_PORTSC_2_WKOC_E_Msk & ((value) << UHPHS_PORTSC_2_WKOC_E_Pos))
#define UHPHS_PORTSC_2_Msk                    _U_(0x007FFDFF)                                      /**< (UHPHS_PORTSC_2) Register Mask  */


/* -------- UHPHS_INSNREG00 : (UHPHS Offset: 0x90) (R/W 32) EHCI Synopsys-Specific Registers 00 -------- */
#define UHPHS_INSNREG00_En_Pos                _U_(0)                                               /**< (UHPHS_INSNREG00) Enable this Register Position */
#define UHPHS_INSNREG00_En_Msk                (_U_(0x1) << UHPHS_INSNREG00_En_Pos)                 /**< (UHPHS_INSNREG00) Enable this Register Mask */
#define UHPHS_INSNREG00_En(value)             (UHPHS_INSNREG00_En_Msk & ((value) << UHPHS_INSNREG00_En_Pos))
#define UHPHS_INSNREG00_MFC_16_Pos            _U_(1)                                               /**< (UHPHS_INSNREG00) Microframe Counter with Word Byte Interface Position */
#define UHPHS_INSNREG00_MFC_16_Msk            (_U_(0x7FF) << UHPHS_INSNREG00_MFC_16_Pos)           /**< (UHPHS_INSNREG00) Microframe Counter with Word Byte Interface Mask */
#define UHPHS_INSNREG00_MFC_16(value)         (UHPHS_INSNREG00_MFC_16_Msk & ((value) << UHPHS_INSNREG00_MFC_16_Pos))
#define UHPHS_INSNREG00_MFC_8_Pos             _U_(12)                                              /**< (UHPHS_INSNREG00) Microframe Counter with Byte Interface Position */
#define UHPHS_INSNREG00_MFC_8_Msk             (_U_(0x3) << UHPHS_INSNREG00_MFC_8_Pos)              /**< (UHPHS_INSNREG00) Microframe Counter with Byte Interface Mask */
#define UHPHS_INSNREG00_MFC_8(value)          (UHPHS_INSNREG00_MFC_8_Msk & ((value) << UHPHS_INSNREG00_MFC_8_Pos))
#define UHPHS_INSNREG00_Debug_Pos             _U_(14)                                              /**< (UHPHS_INSNREG00) Debug Purposes Position */
#define UHPHS_INSNREG00_Debug_Msk             (_U_(0x3F) << UHPHS_INSNREG00_Debug_Pos)             /**< (UHPHS_INSNREG00) Debug Purposes Mask */
#define UHPHS_INSNREG00_Debug(value)          (UHPHS_INSNREG00_Debug_Msk & ((value) << UHPHS_INSNREG00_Debug_Pos))
#define UHPHS_INSNREG00_Msk                   _U_(0x000FFFFF)                                      /**< (UHPHS_INSNREG00) Register Mask  */


/* -------- UHPHS_INSNREG01 : (UHPHS Offset: 0x94) (R/W 32) EHCI Synopsys-Specific Registers 01 -------- */
#define UHPHS_INSNREG01_In_Threshold_Pos      _U_(0)                                               /**< (UHPHS_INSNREG01) Amount of Data Available in the IN Packet Buffer Position */
#define UHPHS_INSNREG01_In_Threshold_Msk      (_U_(0xFFFF) << UHPHS_INSNREG01_In_Threshold_Pos)    /**< (UHPHS_INSNREG01) Amount of Data Available in the IN Packet Buffer Mask */
#define UHPHS_INSNREG01_In_Threshold(value)   (UHPHS_INSNREG01_In_Threshold_Msk & ((value) << UHPHS_INSNREG01_In_Threshold_Pos))
#define UHPHS_INSNREG01_Out_Threshold_Pos     _U_(16)                                              /**< (UHPHS_INSNREG01) Amount of Data Available in the OUT Packet Buffer Position */
#define UHPHS_INSNREG01_Out_Threshold_Msk     (_U_(0xFFFF) << UHPHS_INSNREG01_Out_Threshold_Pos)   /**< (UHPHS_INSNREG01) Amount of Data Available in the OUT Packet Buffer Mask */
#define UHPHS_INSNREG01_Out_Threshold(value)  (UHPHS_INSNREG01_Out_Threshold_Msk & ((value) << UHPHS_INSNREG01_Out_Threshold_Pos))
#define UHPHS_INSNREG01_Msk                   _U_(0xFFFFFFFF)                                      /**< (UHPHS_INSNREG01) Register Mask  */


/* -------- UHPHS_INSNREG02 : (UHPHS Offset: 0x98) (R/W 32) EHCI Synopsys-Specific Registers 02 -------- */
#define UHPHS_INSNREG02_Dwords_Pos            _U_(0)                                               /**< (UHPHS_INSNREG02) Number of Entries Position */
#define UHPHS_INSNREG02_Dwords_Msk            (_U_(0xFFF) << UHPHS_INSNREG02_Dwords_Pos)           /**< (UHPHS_INSNREG02) Number of Entries Mask */
#define UHPHS_INSNREG02_Dwords(value)         (UHPHS_INSNREG02_Dwords_Msk & ((value) << UHPHS_INSNREG02_Dwords_Pos))
#define UHPHS_INSNREG02_Msk                   _U_(0x00000FFF)                                      /**< (UHPHS_INSNREG02) Register Mask  */


/* -------- UHPHS_INSNREG03 : (UHPHS Offset: 0x9C) (R/W 32) EHCI Synopsys-Specific Registers 03 -------- */
#define UHPHS_INSNREG03_Break_Mem_Pos         _U_(0)                                               /**< (UHPHS_INSNREG03) Break Memory Transfer (in CONFIG1 mode only, not applicable in CONFIG2 mode) Position */
#define UHPHS_INSNREG03_Break_Mem_Msk         (_U_(0x1) << UHPHS_INSNREG03_Break_Mem_Pos)          /**< (UHPHS_INSNREG03) Break Memory Transfer (in CONFIG1 mode only, not applicable in CONFIG2 mode) Mask */
#define UHPHS_INSNREG03_Break_Mem(value)      (UHPHS_INSNREG03_Break_Mem_Msk & ((value) << UHPHS_INSNREG03_Break_Mem_Pos))
#define UHPHS_INSNREG03_TA_Offset_Pos         _U_(1)                                               /**< (UHPHS_INSNREG03) Time-Available Offset Position */
#define UHPHS_INSNREG03_TA_Offset_Msk         (_U_(0xFF) << UHPHS_INSNREG03_TA_Offset_Pos)         /**< (UHPHS_INSNREG03) Time-Available Offset Mask */
#define UHPHS_INSNREG03_TA_Offset(value)      (UHPHS_INSNREG03_TA_Offset_Msk & ((value) << UHPHS_INSNREG03_TA_Offset_Pos))
#define UHPHS_INSNREG03_Per_Frame_Pos         _U_(9)                                               /**< (UHPHS_INSNREG03) Periodic Frame List Fetch Position */
#define UHPHS_INSNREG03_Per_Frame_Msk         (_U_(0x1) << UHPHS_INSNREG03_Per_Frame_Pos)          /**< (UHPHS_INSNREG03) Periodic Frame List Fetch Mask */
#define UHPHS_INSNREG03_Per_Frame(value)      (UHPHS_INSNREG03_Per_Frame_Msk & ((value) << UHPHS_INSNREG03_Per_Frame_Pos))
#define UHPHS_INSNREG03_T03_Tx_Pos            _U_(10)                                              /**< (UHPHS_INSNREG03) Tx-Tx Turnaround Delay Add-on Position */
#define UHPHS_INSNREG03_T03_Tx_Msk            (_U_(0x7) << UHPHS_INSNREG03_T03_Tx_Pos)             /**< (UHPHS_INSNREG03) Tx-Tx Turnaround Delay Add-on Mask */
#define UHPHS_INSNREG03_T03_Tx(value)         (UHPHS_INSNREG03_T03_Tx_Msk & ((value) << UHPHS_INSNREG03_T03_Tx_Pos))
#define UHPHS_INSNREG03_Ignore_LS_Pos         _U_(13)                                              /**< (UHPHS_INSNREG03) Ignore Linestate During TestSE0 Nak Position */
#define UHPHS_INSNREG03_Ignore_LS_Msk         (_U_(0x1) << UHPHS_INSNREG03_Ignore_LS_Pos)          /**< (UHPHS_INSNREG03) Ignore Linestate During TestSE0 Nak Mask */
#define UHPHS_INSNREG03_Ignore_LS(value)      (UHPHS_INSNREG03_Ignore_LS_Msk & ((value) << UHPHS_INSNREG03_Ignore_LS_Pos))
#define UHPHS_INSNREG03_EN_CK256_Pos          _U_(14)                                              /**< (UHPHS_INSNREG03) Enable 256 Clock Checking Position */
#define UHPHS_INSNREG03_EN_CK256_Msk          (_U_(0x1) << UHPHS_INSNREG03_EN_CK256_Pos)           /**< (UHPHS_INSNREG03) Enable 256 Clock Checking Mask */
#define UHPHS_INSNREG03_EN_CK256(value)       (UHPHS_INSNREG03_EN_CK256_Msk & ((value) << UHPHS_INSNREG03_EN_CK256_Pos))
#define UHPHS_INSNREG03_Msk                   _U_(0x00007FFF)                                      /**< (UHPHS_INSNREG03) Register Mask  */

#define UHPHS_INSNREG03_EN_CK_Pos             _U_(14)                                              /**< (UHPHS_INSNREG03 Position) Enable 256 Clock Checking */
#define UHPHS_INSNREG03_EN_CK_Msk             (_U_(0x1) << UHPHS_INSNREG03_EN_CK_Pos)              /**< (UHPHS_INSNREG03 Mask) EN_CK */
#define UHPHS_INSNREG03_EN_CK(value)          (UHPHS_INSNREG03_EN_CK_Msk & ((value) << UHPHS_INSNREG03_EN_CK_Pos)) 

/* -------- UHPHS_INSNREG04 : (UHPHS Offset: 0xA0) (R/W 32) EHCI Synopsys-Specific Registers 04 -------- */
#define UHPHS_INSNREG04_HCSPARAMS_W_Pos       _U_(0)                                               /**< (UHPHS_INSNREG04) HCSPARAMS Write Position */
#define UHPHS_INSNREG04_HCSPARAMS_W_Msk       (_U_(0x1) << UHPHS_INSNREG04_HCSPARAMS_W_Pos)        /**< (UHPHS_INSNREG04) HCSPARAMS Write Mask */
#define UHPHS_INSNREG04_HCSPARAMS_W(value)    (UHPHS_INSNREG04_HCSPARAMS_W_Msk & ((value) << UHPHS_INSNREG04_HCSPARAMS_W_Pos))
#define UHPHS_INSNREG04_HCCPARAMS_BW_Pos      _U_(1)                                               /**< (UHPHS_INSNREG04) HCCPARAMS Bits Write Position */
#define UHPHS_INSNREG04_HCCPARAMS_BW_Msk      (_U_(0x1) << UHPHS_INSNREG04_HCCPARAMS_BW_Pos)       /**< (UHPHS_INSNREG04) HCCPARAMS Bits Write Mask */
#define UHPHS_INSNREG04_HCCPARAMS_BW(value)   (UHPHS_INSNREG04_HCCPARAMS_BW_Msk & ((value) << UHPHS_INSNREG04_HCCPARAMS_BW_Pos))
#define UHPHS_INSNREG04_SDPE_TIME_Pos         _U_(2)                                               /**< (UHPHS_INSNREG04) Scales Down Port Enumeration Time Position */
#define UHPHS_INSNREG04_SDPE_TIME_Msk         (_U_(0x1) << UHPHS_INSNREG04_SDPE_TIME_Pos)          /**< (UHPHS_INSNREG04) Scales Down Port Enumeration Time Mask */
#define UHPHS_INSNREG04_SDPE_TIME(value)      (UHPHS_INSNREG04_SDPE_TIME_Msk & ((value) << UHPHS_INSNREG04_SDPE_TIME_Pos))
#define UHPHS_INSNREG04_NAK_RF_Pos            _U_(4)                                               /**< (UHPHS_INSNREG04) NAK Reload Fix (Read/Write) Position */
#define UHPHS_INSNREG04_NAK_RF_Msk            (_U_(0x1) << UHPHS_INSNREG04_NAK_RF_Pos)             /**< (UHPHS_INSNREG04) NAK Reload Fix (Read/Write) Mask */
#define UHPHS_INSNREG04_NAK_RF(value)         (UHPHS_INSNREG04_NAK_RF_Msk & ((value) << UHPHS_INSNREG04_NAK_RF_Pos))
#define UHPHS_INSNREG04_EN_AutoFunc_Pos       _U_(5)                                               /**< (UHPHS_INSNREG04) Enable Automatic Feature Position */
#define UHPHS_INSNREG04_EN_AutoFunc_Msk       (_U_(0x1) << UHPHS_INSNREG04_EN_AutoFunc_Pos)        /**< (UHPHS_INSNREG04) Enable Automatic Feature Mask */
#define UHPHS_INSNREG04_EN_AutoFunc(value)    (UHPHS_INSNREG04_EN_AutoFunc_Msk & ((value) << UHPHS_INSNREG04_EN_AutoFunc_Pos))
#define UHPHS_INSNREG04_Msk                   _U_(0x00000037)                                      /**< (UHPHS_INSNREG04) Register Mask  */


/* -------- UHPHS_INSNREG05 : (UHPHS Offset: 0xA4) (R/W 32) EHCI Synopsys-Specific Registers 05 -------- */
#define UHPHS_INSNREG05_VStatus_Pos           _U_(0)                                               /**< (UHPHS_INSNREG05) Vendor Status (Software RO) Position */
#define UHPHS_INSNREG05_VStatus_Msk           (_U_(0xFF) << UHPHS_INSNREG05_VStatus_Pos)           /**< (UHPHS_INSNREG05) Vendor Status (Software RO) Mask */
#define UHPHS_INSNREG05_VStatus(value)        (UHPHS_INSNREG05_VStatus_Msk & ((value) << UHPHS_INSNREG05_VStatus_Pos))
#define UHPHS_INSNREG05_VControl_Pos          _U_(8)                                               /**< (UHPHS_INSNREG05) Vendor Control (Software R/W) Position */
#define UHPHS_INSNREG05_VControl_Msk          (_U_(0xF) << UHPHS_INSNREG05_VControl_Pos)           /**< (UHPHS_INSNREG05) Vendor Control (Software R/W) Mask */
#define UHPHS_INSNREG05_VControl(value)       (UHPHS_INSNREG05_VControl_Msk & ((value) << UHPHS_INSNREG05_VControl_Pos))
#define UHPHS_INSNREG05_VControlLoadM_Pos     _U_(12)                                              /**< (UHPHS_INSNREG05) Vendor Control Load Microframe Position */
#define UHPHS_INSNREG05_VControlLoadM_Msk     (_U_(0x1) << UHPHS_INSNREG05_VControlLoadM_Pos)      /**< (UHPHS_INSNREG05) Vendor Control Load Microframe Mask */
#define UHPHS_INSNREG05_VControlLoadM(value)  (UHPHS_INSNREG05_VControlLoadM_Msk & ((value) << UHPHS_INSNREG05_VControlLoadM_Pos))
#define UHPHS_INSNREG05_VPort_Pos             _U_(13)                                              /**< (UHPHS_INSNREG05) Vendor Port (Software R/W) Position */
#define UHPHS_INSNREG05_VPort_Msk             (_U_(0xF) << UHPHS_INSNREG05_VPort_Pos)              /**< (UHPHS_INSNREG05) Vendor Port (Software R/W) Mask */
#define UHPHS_INSNREG05_VPort(value)          (UHPHS_INSNREG05_VPort_Msk & ((value) << UHPHS_INSNREG05_VPort_Pos))
#define UHPHS_INSNREG05_VBusy_Pos             _U_(17)                                              /**< (UHPHS_INSNREG05) Vendor Busy (Software RO) Position */
#define UHPHS_INSNREG05_VBusy_Msk             (_U_(0x1) << UHPHS_INSNREG05_VBusy_Pos)              /**< (UHPHS_INSNREG05) Vendor Busy (Software RO) Mask */
#define UHPHS_INSNREG05_VBusy(value)          (UHPHS_INSNREG05_VBusy_Msk & ((value) << UHPHS_INSNREG05_VBusy_Pos))
#define UHPHS_INSNREG05_Msk                   _U_(0x0003FFFF)                                      /**< (UHPHS_INSNREG05) Register Mask  */


/* -------- UHPHS_INSNREG06 : (UHPHS Offset: 0xA8) (R/W 32) EHCI Synopsys-Specific Registers 06 -------- */
#define UHPHS_INSNREG06_Nb_Success_Burst_Pos  _U_(0)                                               /**< (UHPHS_INSNREG06) Number of Successful Bursts (read-only)(1) Position */
#define UHPHS_INSNREG06_Nb_Success_Burst_Msk  (_U_(0xF) << UHPHS_INSNREG06_Nb_Success_Burst_Pos)   /**< (UHPHS_INSNREG06) Number of Successful Bursts (read-only)(1) Mask */
#define UHPHS_INSNREG06_Nb_Success_Burst(value) (UHPHS_INSNREG06_Nb_Success_Burst_Msk & ((value) << UHPHS_INSNREG06_Nb_Success_Burst_Pos))
#define UHPHS_INSNREG06_Nb_Burst_Pos          _U_(4)                                               /**< (UHPHS_INSNREG06) Number of Bursts (read-only)(1) Position */
#define UHPHS_INSNREG06_Nb_Burst_Msk          (_U_(0x1F) << UHPHS_INSNREG06_Nb_Burst_Pos)          /**< (UHPHS_INSNREG06) Number of Bursts (read-only)(1) Mask */
#define UHPHS_INSNREG06_Nb_Burst(value)       (UHPHS_INSNREG06_Nb_Burst_Msk & ((value) << UHPHS_INSNREG06_Nb_Burst_Pos))
#define UHPHS_INSNREG06_HBURST_Pos            _U_(9)                                               /**< (UHPHS_INSNREG06) Burst Value (read-only)(1) Position */
#define UHPHS_INSNREG06_HBURST_Msk            (_U_(0x7) << UHPHS_INSNREG06_HBURST_Pos)             /**< (UHPHS_INSNREG06) Burst Value (read-only)(1) Mask */
#define UHPHS_INSNREG06_HBURST(value)         (UHPHS_INSNREG06_HBURST_Msk & ((value) << UHPHS_INSNREG06_HBURST_Pos))
#define UHPHS_INSNREG06_AHB_ERR_Pos           _U_(31)                                              /**< (UHPHS_INSNREG06) AHB Error Position */
#define UHPHS_INSNREG06_AHB_ERR_Msk           (_U_(0x1) << UHPHS_INSNREG06_AHB_ERR_Pos)            /**< (UHPHS_INSNREG06) AHB Error Mask */
#define UHPHS_INSNREG06_AHB_ERR(value)        (UHPHS_INSNREG06_AHB_ERR_Msk & ((value) << UHPHS_INSNREG06_AHB_ERR_Pos))
#define UHPHS_INSNREG06_Msk                   _U_(0x80000FFF)                                      /**< (UHPHS_INSNREG06) Register Mask  */


/* -------- UHPHS_INSNREG07 : (UHPHS Offset: 0xAC) (R/W 32) EHCI Synopsys-Specific Registers 07 -------- */
#define UHPHS_INSNREG07_AHB_ADDR_Pos          _U_(0)                                               /**< (UHPHS_INSNREG07) AHB Address (read only) Position */
#define UHPHS_INSNREG07_AHB_ADDR_Msk          (_U_(0xFFFFFFFF) << UHPHS_INSNREG07_AHB_ADDR_Pos)    /**< (UHPHS_INSNREG07) AHB Address (read only) Mask */
#define UHPHS_INSNREG07_AHB_ADDR(value)       (UHPHS_INSNREG07_AHB_ADDR_Msk & ((value) << UHPHS_INSNREG07_AHB_ADDR_Pos))
#define UHPHS_INSNREG07_Msk                   _U_(0xFFFFFFFF)                                      /**< (UHPHS_INSNREG07) Register Mask  */


/* -------- UHPHS_INSNREG08 : (UHPHS Offset: 0xB0) (R/W 32) EHCI Synopsys-Specific Registers 08 -------- */
#define UHPHS_INSNREG08_HSIC_EN_Pos           _U_(2)                                               /**< (UHPHS_INSNREG08) HSIC Enable/Disable Position */
#define UHPHS_INSNREG08_HSIC_EN_Msk           (_U_(0x1) << UHPHS_INSNREG08_HSIC_EN_Pos)            /**< (UHPHS_INSNREG08) HSIC Enable/Disable Mask */
#define UHPHS_INSNREG08_HSIC_EN(value)        (UHPHS_INSNREG08_HSIC_EN_Msk & ((value) << UHPHS_INSNREG08_HSIC_EN_Pos))
#define UHPHS_INSNREG08_Msk                   _U_(0x00000004)                                      /**< (UHPHS_INSNREG08) Register Mask  */


/** \brief UHPHS register offsets definitions */
#define UHPHS_HCCAPBASE_REG_OFST       (0x00)              /**< (UHPHS_HCCAPBASE) UHPHS Host Controller Capability Register Offset */
#define UHPHS_HCSPARAMS_REG_OFST       (0x04)              /**< (UHPHS_HCSPARAMS) UHPHS Host Controller Structural Parameters Register Offset */
#define UHPHS_HCCPARAMS_REG_OFST       (0x08)              /**< (UHPHS_HCCPARAMS) UHPHS Host Controller Capability Parameters Register Offset */
#define UHPHS_USBCMD_REG_OFST          (0x10)              /**< (UHPHS_USBCMD) UHPHS USB Command Register Offset */
#define UHPHS_USBSTS_REG_OFST          (0x14)              /**< (UHPHS_USBSTS) UHPHS USB Status Register Offset */
#define UHPHS_USBINTR_REG_OFST         (0x18)              /**< (UHPHS_USBINTR) UHPHS USB Interrupt Enable Register Offset */
#define UHPHS_FRINDEX_REG_OFST         (0x1C)              /**< (UHPHS_FRINDEX) UHPHS USB Frame Index Register Offset */
#define UHPHS_CTRLDSSEGMENT_REG_OFST   (0x20)              /**< (UHPHS_CTRLDSSEGMENT) UHPHS Control Data Structure Segment Register Offset */
#define UHPHS_PERIODICLISTBASE_REG_OFST (0x24)              /**< (UHPHS_PERIODICLISTBASE) UHPHS Periodic Frame List Base Address Register Offset */
#define UHPHS_ASYNCLISTADDR_REG_OFST   (0x28)              /**< (UHPHS_ASYNCLISTADDR) UHPHS Asynchronous List Address Register Offset */
#define UHPHS_CONFIGFLAG_REG_OFST      (0x50)              /**< (UHPHS_CONFIGFLAG) UHPHS Configured Flag Register Offset */
#define UHPHS_PORTSC_0_REG_OFST        (0x54)              /**< (UHPHS_PORTSC_0) UHPHS Port Status and Control Register 0 Offset */
#define UHPHS_PORTSC_1_REG_OFST        (0x58)              /**< (UHPHS_PORTSC_1) UHPHS Port Status and Control Register 1 Offset */
#define UHPHS_PORTSC_2_REG_OFST        (0x5C)              /**< (UHPHS_PORTSC_2) UHPHS Port Status and Control Register 2 Offset */
#define UHPHS_INSNREG00_REG_OFST       (0x90)              /**< (UHPHS_INSNREG00) EHCI Synopsys-Specific Registers 00 Offset */
#define UHPHS_INSNREG01_REG_OFST       (0x94)              /**< (UHPHS_INSNREG01) EHCI Synopsys-Specific Registers 01 Offset */
#define UHPHS_INSNREG02_REG_OFST       (0x98)              /**< (UHPHS_INSNREG02) EHCI Synopsys-Specific Registers 02 Offset */
#define UHPHS_INSNREG03_REG_OFST       (0x9C)              /**< (UHPHS_INSNREG03) EHCI Synopsys-Specific Registers 03 Offset */
#define UHPHS_INSNREG04_REG_OFST       (0xA0)              /**< (UHPHS_INSNREG04) EHCI Synopsys-Specific Registers 04 Offset */
#define UHPHS_INSNREG05_REG_OFST       (0xA4)              /**< (UHPHS_INSNREG05) EHCI Synopsys-Specific Registers 05 Offset */
#define UHPHS_INSNREG06_REG_OFST       (0xA8)              /**< (UHPHS_INSNREG06) EHCI Synopsys-Specific Registers 06 Offset */
#define UHPHS_INSNREG07_REG_OFST       (0xAC)              /**< (UHPHS_INSNREG07) EHCI Synopsys-Specific Registers 07 Offset */
#define UHPHS_INSNREG08_REG_OFST       (0xB0)              /**< (UHPHS_INSNREG08) EHCI Synopsys-Specific Registers 08 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UHPHS register API structure */
typedef struct
{
  __I   uint32_t                       UHPHS_HCCAPBASE;    /**< Offset: 0x00 (R/   32) UHPHS Host Controller Capability Register */
  __I   uint32_t                       UHPHS_HCSPARAMS;    /**< Offset: 0x04 (R/   32) UHPHS Host Controller Structural Parameters Register */
  __I   uint32_t                       UHPHS_HCCPARAMS;    /**< Offset: 0x08 (R/   32) UHPHS Host Controller Capability Parameters Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       UHPHS_USBCMD;       /**< Offset: 0x10 (R/W  32) UHPHS USB Command Register */
  __IO  uint32_t                       UHPHS_USBSTS;       /**< Offset: 0x14 (R/W  32) UHPHS USB Status Register */
  __IO  uint32_t                       UHPHS_USBINTR;      /**< Offset: 0x18 (R/W  32) UHPHS USB Interrupt Enable Register */
  __IO  uint32_t                       UHPHS_FRINDEX;      /**< Offset: 0x1C (R/W  32) UHPHS USB Frame Index Register */
  __IO  uint32_t                       UHPHS_CTRLDSSEGMENT; /**< Offset: 0x20 (R/W  32) UHPHS Control Data Structure Segment Register */
  __IO  uint32_t                       UHPHS_PERIODICLISTBASE; /**< Offset: 0x24 (R/W  32) UHPHS Periodic Frame List Base Address Register */
  __IO  uint32_t                       UHPHS_ASYNCLISTADDR; /**< Offset: 0x28 (R/W  32) UHPHS Asynchronous List Address Register */
  __I   uint8_t                        Reserved2[0x24];
  __IO  uint32_t                       UHPHS_CONFIGFLAG;   /**< Offset: 0x50 (R/W  32) UHPHS Configured Flag Register */
  __IO  uint32_t                       UHPHS_PORTSC_0;     /**< Offset: 0x54 (R/W  32) UHPHS Port Status and Control Register 0 */
  __IO  uint32_t                       UHPHS_PORTSC_1;     /**< Offset: 0x58 (R/W  32) UHPHS Port Status and Control Register 1 */
  __IO  uint32_t                       UHPHS_PORTSC_2;     /**< Offset: 0x5C (R/W  32) UHPHS Port Status and Control Register 2 */
  __I   uint8_t                        Reserved3[0x30];
  __IO  uint32_t                       UHPHS_INSNREG00;    /**< Offset: 0x90 (R/W  32) EHCI Synopsys-Specific Registers 00 */
  __IO  uint32_t                       UHPHS_INSNREG01;    /**< Offset: 0x94 (R/W  32) EHCI Synopsys-Specific Registers 01 */
  __IO  uint32_t                       UHPHS_INSNREG02;    /**< Offset: 0x98 (R/W  32) EHCI Synopsys-Specific Registers 02 */
  __IO  uint32_t                       UHPHS_INSNREG03;    /**< Offset: 0x9C (R/W  32) EHCI Synopsys-Specific Registers 03 */
  __IO  uint32_t                       UHPHS_INSNREG04;    /**< Offset: 0xA0 (R/W  32) EHCI Synopsys-Specific Registers 04 */
  __IO  uint32_t                       UHPHS_INSNREG05;    /**< Offset: 0xA4 (R/W  32) EHCI Synopsys-Specific Registers 05 */
  __IO  uint32_t                       UHPHS_INSNREG06;    /**< Offset: 0xA8 (R/W  32) EHCI Synopsys-Specific Registers 06 */
  __IO  uint32_t                       UHPHS_INSNREG07;    /**< Offset: 0xAC (R/W  32) EHCI Synopsys-Specific Registers 07 */
  __IO  uint32_t                       UHPHS_INSNREG08;    /**< Offset: 0xB0 (R/W  32) EHCI Synopsys-Specific Registers 08 */
} uhphs_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_UHPHS_COMPONENT_H_ */
