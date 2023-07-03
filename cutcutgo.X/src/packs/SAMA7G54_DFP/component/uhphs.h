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

/* file generated from device description version 2021-07-26T12:51:16Z */
#ifndef _SAMA7G_UHPHS_COMPONENT_H_
#define _SAMA7G_UHPHS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR UHPHS                                        */
/* ************************************************************************** */

/* -------- UHPHS_HCCAPBASE : (UHPHS Offset: 0x00) ( R/ 32) UHPHS Host Controller Capability Register -------- */
#define UHPHS_HCCAPBASE_RESETVALUE            _U_(0x1000010)                                       /**<  (UHPHS_HCCAPBASE) UHPHS Host Controller Capability Register  Reset Value */

#define UHPHS_HCCAPBASE_CAPLENGTH_Pos         _U_(0)                                               /**< (UHPHS_HCCAPBASE) Capability Registers Length Position */
#define UHPHS_HCCAPBASE_CAPLENGTH_Msk         (_U_(0xFF) << UHPHS_HCCAPBASE_CAPLENGTH_Pos)         /**< (UHPHS_HCCAPBASE) Capability Registers Length Mask */
#define UHPHS_HCCAPBASE_CAPLENGTH(value)      (UHPHS_HCCAPBASE_CAPLENGTH_Msk & ((value) << UHPHS_HCCAPBASE_CAPLENGTH_Pos))
#define UHPHS_HCCAPBASE_HCIVERSION_Pos        _U_(16)                                              /**< (UHPHS_HCCAPBASE) Host Controller Interface Version Number Position */
#define UHPHS_HCCAPBASE_HCIVERSION_Msk        (_U_(0xFFFF) << UHPHS_HCCAPBASE_HCIVERSION_Pos)      /**< (UHPHS_HCCAPBASE) Host Controller Interface Version Number Mask */
#define UHPHS_HCCAPBASE_HCIVERSION(value)     (UHPHS_HCCAPBASE_HCIVERSION_Msk & ((value) << UHPHS_HCCAPBASE_HCIVERSION_Pos))
#define UHPHS_HCCAPBASE_Msk                   _U_(0xFFFF00FF)                                      /**< (UHPHS_HCCAPBASE) Register Mask  */


/* -------- UHPHS_HCSPARAMS : (UHPHS Offset: 0x04) ( R/ 32) UHPHS Host Controller Structural Parameters Register -------- */
#define UHPHS_HCSPARAMS_RESETVALUE            _U_(0x1303)                                          /**<  (UHPHS_HCSPARAMS) UHPHS Host Controller Structural Parameters Register  Reset Value */

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
#define UHPHS_HCCPARAMS_RESETVALUE            _U_(0x26)                                            /**<  (UHPHS_HCCPARAMS) UHPHS Host Controller Capability Parameters Register  Reset Value */

#define UHPHS_HCCPARAMS_AC_Pos                _U_(0)                                               /**< (UHPHS_HCCPARAMS) 64-bit Addressing Capability Position */
#define UHPHS_HCCPARAMS_AC_Msk                (_U_(0x1) << UHPHS_HCCPARAMS_AC_Pos)                 /**< (UHPHS_HCCPARAMS) 64-bit Addressing Capability Mask */
#define UHPHS_HCCPARAMS_AC(value)             (UHPHS_HCCPARAMS_AC_Msk & ((value) << UHPHS_HCCPARAMS_AC_Pos))
#define   UHPHS_HCCPARAMS_AC_0_Val            _U_(0x0)                                             /**< (UHPHS_HCCPARAMS) Data structures using 32-bit address memory pointers  */
#define   UHPHS_HCCPARAMS_AC_1_Val            _U_(0x1)                                             /**< (UHPHS_HCCPARAMS) Data structures using 64-bit address memory pointers  */
#define UHPHS_HCCPARAMS_AC_0                  (UHPHS_HCCPARAMS_AC_0_Val << UHPHS_HCCPARAMS_AC_Pos) /**< (UHPHS_HCCPARAMS) Data structures using 32-bit address memory pointers Position  */
#define UHPHS_HCCPARAMS_AC_1                  (UHPHS_HCCPARAMS_AC_1_Val << UHPHS_HCCPARAMS_AC_Pos) /**< (UHPHS_HCCPARAMS) Data structures using 64-bit address memory pointers Position  */
#define UHPHS_HCCPARAMS_PFLF_Pos              _U_(1)                                               /**< (UHPHS_HCCPARAMS) Programmable Frame List Flag Position */
#define UHPHS_HCCPARAMS_PFLF_Msk              (_U_(0x1) << UHPHS_HCCPARAMS_PFLF_Pos)               /**< (UHPHS_HCCPARAMS) Programmable Frame List Flag Mask */
#define UHPHS_HCCPARAMS_PFLF(value)           (UHPHS_HCCPARAMS_PFLF_Msk & ((value) << UHPHS_HCCPARAMS_PFLF_Pos))
#define   UHPHS_HCCPARAMS_PFLF_0_Val          _U_(0x0)                                             /**< (UHPHS_HCCPARAMS) System software must use a frame list length of 1024 elements with this host controller. The UHPHS_USBCMD register Frame List Size field is a read-only register and must be set to 0.  */
#define   UHPHS_HCCPARAMS_PFLF_1_Val          _U_(0x1)                                             /**< (UHPHS_HCCPARAMS) System software can specify and use a smaller frame list and configure the host controller via the UHPHS_USBCMD register Frame List Size field. The frame list must always be aligned on a 4-Kbyte page boundary. This requirement ensures that the frame list is always physically contiguous.  */
#define UHPHS_HCCPARAMS_PFLF_0                (UHPHS_HCCPARAMS_PFLF_0_Val << UHPHS_HCCPARAMS_PFLF_Pos) /**< (UHPHS_HCCPARAMS) System software must use a frame list length of 1024 elements with this host controller. The UHPHS_USBCMD register Frame List Size field is a read-only register and must be set to 0. Position  */
#define UHPHS_HCCPARAMS_PFLF_1                (UHPHS_HCCPARAMS_PFLF_1_Val << UHPHS_HCCPARAMS_PFLF_Pos) /**< (UHPHS_HCCPARAMS) System software can specify and use a smaller frame list and configure the host controller via the UHPHS_USBCMD register Frame List Size field. The frame list must always be aligned on a 4-Kbyte page boundary. This requirement ensures that the frame list is always physically contiguous. Position  */
#define UHPHS_HCCPARAMS_ASPC_Pos              _U_(2)                                               /**< (UHPHS_HCCPARAMS) Asynchronous Schedule Park Capability Position */
#define UHPHS_HCCPARAMS_ASPC_Msk              (_U_(0x1) << UHPHS_HCCPARAMS_ASPC_Pos)               /**< (UHPHS_HCCPARAMS) Asynchronous Schedule Park Capability Mask */
#define UHPHS_HCCPARAMS_ASPC(value)           (UHPHS_HCCPARAMS_ASPC_Msk & ((value) << UHPHS_HCCPARAMS_ASPC_Pos))
#define   UHPHS_HCCPARAMS_ASPC_0_Val          _U_(0x0)                                             /**< (UHPHS_HCCPARAMS) Host controller does not supports the park feature for high-speed queue.  */
#define   UHPHS_HCCPARAMS_ASPC_1_Val          _U_(0x1)                                             /**< (UHPHS_HCCPARAMS) Host controller supports the park feature for high-speed queue heads in the Asynchronous Schedule.  */
#define UHPHS_HCCPARAMS_ASPC_0                (UHPHS_HCCPARAMS_ASPC_0_Val << UHPHS_HCCPARAMS_ASPC_Pos) /**< (UHPHS_HCCPARAMS) Host controller does not supports the park feature for high-speed queue. Position  */
#define UHPHS_HCCPARAMS_ASPC_1                (UHPHS_HCCPARAMS_ASPC_1_Val << UHPHS_HCCPARAMS_ASPC_Pos) /**< (UHPHS_HCCPARAMS) Host controller supports the park feature for high-speed queue heads in the Asynchronous Schedule. Position  */
#define UHPHS_HCCPARAMS_IST_Pos               _U_(4)                                               /**< (UHPHS_HCCPARAMS) Isochronous Scheduling Threshold Position */
#define UHPHS_HCCPARAMS_IST_Msk               (_U_(0xF) << UHPHS_HCCPARAMS_IST_Pos)                /**< (UHPHS_HCCPARAMS) Isochronous Scheduling Threshold Mask */
#define UHPHS_HCCPARAMS_IST(value)            (UHPHS_HCCPARAMS_IST_Msk & ((value) << UHPHS_HCCPARAMS_IST_Pos))
#define UHPHS_HCCPARAMS_EECP_Pos              _U_(8)                                               /**< (UHPHS_HCCPARAMS) EHCI Extended Capabilities Pointer Position */
#define UHPHS_HCCPARAMS_EECP_Msk              (_U_(0xFF) << UHPHS_HCCPARAMS_EECP_Pos)              /**< (UHPHS_HCCPARAMS) EHCI Extended Capabilities Pointer Mask */
#define UHPHS_HCCPARAMS_EECP(value)           (UHPHS_HCCPARAMS_EECP_Msk & ((value) << UHPHS_HCCPARAMS_EECP_Pos))
#define UHPHS_HCCPARAMS_Msk                   _U_(0x0000FFF7)                                      /**< (UHPHS_HCCPARAMS) Register Mask  */


/* -------- UHPHS_USBCMD : (UHPHS Offset: 0x10) (R/W 32) UHPHS USB Command Register -------- */
#define UHPHS_USBCMD_RESETVALUE               _U_(0x80B00)                                         /**<  (UHPHS_USBCMD) UHPHS USB Command Register  Reset Value */

#define UHPHS_USBCMD_RS_Pos                   _U_(0)                                               /**< (UHPHS_USBCMD) Run/Stop (read/write) Position */
#define UHPHS_USBCMD_RS_Msk                   (_U_(0x1) << UHPHS_USBCMD_RS_Pos)                    /**< (UHPHS_USBCMD) Run/Stop (read/write) Mask */
#define UHPHS_USBCMD_RS(value)                (UHPHS_USBCMD_RS_Msk & ((value) << UHPHS_USBCMD_RS_Pos))
#define   UHPHS_USBCMD_RS_0_Val               _U_(0x0)                                             /**< (UHPHS_USBCMD) Host Controller completes the current and any actively pipelined transactions on the USB and then halts.  */
#define   UHPHS_USBCMD_RS_1_Val               _U_(0x1)                                             /**< (UHPHS_USBCMD) Host Controller proceeds with execution of the schedule.  */
#define UHPHS_USBCMD_RS_0                     (UHPHS_USBCMD_RS_0_Val << UHPHS_USBCMD_RS_Pos)       /**< (UHPHS_USBCMD) Host Controller completes the current and any actively pipelined transactions on the USB and then halts. Position  */
#define UHPHS_USBCMD_RS_1                     (UHPHS_USBCMD_RS_1_Val << UHPHS_USBCMD_RS_Pos)       /**< (UHPHS_USBCMD) Host Controller proceeds with execution of the schedule. Position  */
#define UHPHS_USBCMD_HCRESET_Pos              _U_(1)                                               /**< (UHPHS_USBCMD) Host Controller Reset (read/write) Position */
#define UHPHS_USBCMD_HCRESET_Msk              (_U_(0x1) << UHPHS_USBCMD_HCRESET_Pos)               /**< (UHPHS_USBCMD) Host Controller Reset (read/write) Mask */
#define UHPHS_USBCMD_HCRESET(value)           (UHPHS_USBCMD_HCRESET_Msk & ((value) << UHPHS_USBCMD_HCRESET_Pos))
#define UHPHS_USBCMD_FLS_Pos                  _U_(2)                                               /**< (UHPHS_USBCMD) Frame List Size (read/write or read-only) Position */
#define UHPHS_USBCMD_FLS_Msk                  (_U_(0x3) << UHPHS_USBCMD_FLS_Pos)                   /**< (UHPHS_USBCMD) Frame List Size (read/write or read-only) Mask */
#define UHPHS_USBCMD_FLS(value)               (UHPHS_USBCMD_FLS_Msk & ((value) << UHPHS_USBCMD_FLS_Pos))
#define   UHPHS_USBCMD_FLS_0_Val              _U_(0x0)                                             /**< (UHPHS_USBCMD) 1024 elements (4096 bytes).  */
#define   UHPHS_USBCMD_FLS_1_Val              _U_(0x1)                                             /**< (UHPHS_USBCMD) 512 elements (2048 bytes).  */
#define   UHPHS_USBCMD_FLS_2_Val              _U_(0x2)                                             /**< (UHPHS_USBCMD) 256 elements (1024 bytes), for resource-constrained environments.  */
#define   UHPHS_USBCMD_FLS_3_Val              _U_(0x3)                                             /**< (UHPHS_USBCMD) Reserved.  */
#define UHPHS_USBCMD_FLS_0                    (UHPHS_USBCMD_FLS_0_Val << UHPHS_USBCMD_FLS_Pos)     /**< (UHPHS_USBCMD) 1024 elements (4096 bytes). Position  */
#define UHPHS_USBCMD_FLS_1                    (UHPHS_USBCMD_FLS_1_Val << UHPHS_USBCMD_FLS_Pos)     /**< (UHPHS_USBCMD) 512 elements (2048 bytes). Position  */
#define UHPHS_USBCMD_FLS_2                    (UHPHS_USBCMD_FLS_2_Val << UHPHS_USBCMD_FLS_Pos)     /**< (UHPHS_USBCMD) 256 elements (1024 bytes), for resource-constrained environments. Position  */
#define UHPHS_USBCMD_FLS_3                    (UHPHS_USBCMD_FLS_3_Val << UHPHS_USBCMD_FLS_Pos)     /**< (UHPHS_USBCMD) Reserved. Position  */
#define UHPHS_USBCMD_PSE_Pos                  _U_(4)                                               /**< (UHPHS_USBCMD) Periodic Schedule Enable (read/write) Position */
#define UHPHS_USBCMD_PSE_Msk                  (_U_(0x1) << UHPHS_USBCMD_PSE_Pos)                   /**< (UHPHS_USBCMD) Periodic Schedule Enable (read/write) Mask */
#define UHPHS_USBCMD_PSE(value)               (UHPHS_USBCMD_PSE_Msk & ((value) << UHPHS_USBCMD_PSE_Pos))
#define   UHPHS_USBCMD_PSE_0_Val              _U_(0x0)                                             /**< (UHPHS_USBCMD) Do not process the Periodic Schedule.  */
#define   UHPHS_USBCMD_PSE_1_Val              _U_(0x1)                                             /**< (UHPHS_USBCMD) Use the UHPHS_PERIODICLISTBASE register to access the Periodic Schedule.  */
#define UHPHS_USBCMD_PSE_0                    (UHPHS_USBCMD_PSE_0_Val << UHPHS_USBCMD_PSE_Pos)     /**< (UHPHS_USBCMD) Do not process the Periodic Schedule. Position  */
#define UHPHS_USBCMD_PSE_1                    (UHPHS_USBCMD_PSE_1_Val << UHPHS_USBCMD_PSE_Pos)     /**< (UHPHS_USBCMD) Use the UHPHS_PERIODICLISTBASE register to access the Periodic Schedule. Position  */
#define UHPHS_USBCMD_ASE_Pos                  _U_(5)                                               /**< (UHPHS_USBCMD) Asynchronous Schedule Enable (read/write) Position */
#define UHPHS_USBCMD_ASE_Msk                  (_U_(0x1) << UHPHS_USBCMD_ASE_Pos)                   /**< (UHPHS_USBCMD) Asynchronous Schedule Enable (read/write) Mask */
#define UHPHS_USBCMD_ASE(value)               (UHPHS_USBCMD_ASE_Msk & ((value) << UHPHS_USBCMD_ASE_Pos))
#define   UHPHS_USBCMD_ASE_0_Val              _U_(0x0)                                             /**< (UHPHS_USBCMD) Do not process the Asynchronous Schedule.  */
#define   UHPHS_USBCMD_ASE_1_Val              _U_(0x1)                                             /**< (UHPHS_USBCMD) Use the UHPHS_ASYNCLISTADDR register to access the Asynchronous Schedule.  */
#define UHPHS_USBCMD_ASE_0                    (UHPHS_USBCMD_ASE_0_Val << UHPHS_USBCMD_ASE_Pos)     /**< (UHPHS_USBCMD) Do not process the Asynchronous Schedule. Position  */
#define UHPHS_USBCMD_ASE_1                    (UHPHS_USBCMD_ASE_1_Val << UHPHS_USBCMD_ASE_Pos)     /**< (UHPHS_USBCMD) Use the UHPHS_ASYNCLISTADDR register to access the Asynchronous Schedule. Position  */
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
#define   UHPHS_USBCMD_ASPME_0_Val            _U_(0x0)                                             /**< (UHPHS_USBCMD) Park mode is enabled.  */
#define   UHPHS_USBCMD_ASPME_1_Val            _U_(0x1)                                             /**< (UHPHS_USBCMD) Park mode is disabled.  */
#define UHPHS_USBCMD_ASPME_0                  (UHPHS_USBCMD_ASPME_0_Val << UHPHS_USBCMD_ASPME_Pos) /**< (UHPHS_USBCMD) Park mode is enabled. Position  */
#define UHPHS_USBCMD_ASPME_1                  (UHPHS_USBCMD_ASPME_1_Val << UHPHS_USBCMD_ASPME_Pos) /**< (UHPHS_USBCMD) Park mode is disabled. Position  */
#define UHPHS_USBCMD_ITC_Pos                  _U_(16)                                              /**< (UHPHS_USBCMD) Interrupt Threshold Control (read/write) Position */
#define UHPHS_USBCMD_ITC_Msk                  (_U_(0xFF) << UHPHS_USBCMD_ITC_Pos)                  /**< (UHPHS_USBCMD) Interrupt Threshold Control (read/write) Mask */
#define UHPHS_USBCMD_ITC(value)               (UHPHS_USBCMD_ITC_Msk & ((value) << UHPHS_USBCMD_ITC_Pos))
#define UHPHS_USBCMD_Msk                      _U_(0x00FF0BFF)                                      /**< (UHPHS_USBCMD) Register Mask  */


/* -------- UHPHS_USBSTS : (UHPHS Offset: 0x14) (R/W 32) UHPHS USB Status Register -------- */
#define UHPHS_USBSTS_RESETVALUE               _U_(0x1000)                                          /**<  (UHPHS_USBSTS) UHPHS USB Status Register  Reset Value */

#define UHPHS_USBSTS_USBINT_Pos               _U_(0)                                               /**< (UHPHS_USBSTS) USB Interrupt (cleared on write) Position */
#define UHPHS_USBSTS_USBINT_Msk               (_U_(0x1) << UHPHS_USBSTS_USBINT_Pos)                /**< (UHPHS_USBSTS) USB Interrupt (cleared on write) Mask */
#define UHPHS_USBSTS_USBINT(value)            (UHPHS_USBSTS_USBINT_Msk & ((value) << UHPHS_USBSTS_USBINT_Pos))
#define UHPHS_USBSTS_USBERRINT_Pos            _U_(1)                                               /**< (UHPHS_USBSTS) USB Error Interrupt (cleared on write) Position */
#define UHPHS_USBSTS_USBERRINT_Msk            (_U_(0x1) << UHPHS_USBSTS_USBERRINT_Pos)             /**< (UHPHS_USBSTS) USB Error Interrupt (cleared on write) Mask */
#define UHPHS_USBSTS_USBERRINT(value)         (UHPHS_USBSTS_USBERRINT_Msk & ((value) << UHPHS_USBSTS_USBERRINT_Pos))
#define UHPHS_USBSTS_PCD_Pos                  _U_(2)                                               /**< (UHPHS_USBSTS) Port Change Detect (cleared on write) Position */
#define UHPHS_USBSTS_PCD_Msk                  (_U_(0x1) << UHPHS_USBSTS_PCD_Pos)                   /**< (UHPHS_USBSTS) Port Change Detect (cleared on write) Mask */
#define UHPHS_USBSTS_PCD(value)               (UHPHS_USBSTS_PCD_Msk & ((value) << UHPHS_USBSTS_PCD_Pos))
#define UHPHS_USBSTS_FLR_Pos                  _U_(3)                                               /**< (UHPHS_USBSTS) Frame List Rollover (cleared on write) Position */
#define UHPHS_USBSTS_FLR_Msk                  (_U_(0x1) << UHPHS_USBSTS_FLR_Pos)                   /**< (UHPHS_USBSTS) Frame List Rollover (cleared on write) Mask */
#define UHPHS_USBSTS_FLR(value)               (UHPHS_USBSTS_FLR_Msk & ((value) << UHPHS_USBSTS_FLR_Pos))
#define UHPHS_USBSTS_HSE_Pos                  _U_(4)                                               /**< (UHPHS_USBSTS) Host System Error (cleared on write) Position */
#define UHPHS_USBSTS_HSE_Msk                  (_U_(0x1) << UHPHS_USBSTS_HSE_Pos)                   /**< (UHPHS_USBSTS) Host System Error (cleared on write) Mask */
#define UHPHS_USBSTS_HSE(value)               (UHPHS_USBSTS_HSE_Msk & ((value) << UHPHS_USBSTS_HSE_Pos))
#define UHPHS_USBSTS_IAA_Pos                  _U_(5)                                               /**< (UHPHS_USBSTS) Interrupt on Async Advance (cleared on write) Position */
#define UHPHS_USBSTS_IAA_Msk                  (_U_(0x1) << UHPHS_USBSTS_IAA_Pos)                   /**< (UHPHS_USBSTS) Interrupt on Async Advance (cleared on write) Mask */
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
#define   UHPHS_USBSTS_ASS_0_Val              _U_(0x0)                                             /**< (UHPHS_USBSTS) Asynchronous Schedule is disabled.  */
#define   UHPHS_USBSTS_ASS_1_Val              _U_(0x1)                                             /**< (UHPHS_USBSTS) Asynchronous Schedule is enabled.  */
#define UHPHS_USBSTS_ASS_0                    (UHPHS_USBSTS_ASS_0_Val << UHPHS_USBSTS_ASS_Pos)     /**< (UHPHS_USBSTS) Asynchronous Schedule is disabled. Position  */
#define UHPHS_USBSTS_ASS_1                    (UHPHS_USBSTS_ASS_1_Val << UHPHS_USBSTS_ASS_Pos)     /**< (UHPHS_USBSTS) Asynchronous Schedule is enabled. Position  */
#define UHPHS_USBSTS_Msk                      _U_(0x0000F03F)                                      /**< (UHPHS_USBSTS) Register Mask  */


/* -------- UHPHS_USBINTR : (UHPHS Offset: 0x18) (R/W 32) UHPHS USB Interrupt Enable Register -------- */
#define UHPHS_USBINTR_RESETVALUE              _U_(0x00)                                            /**<  (UHPHS_USBINTR) UHPHS USB Interrupt Enable Register  Reset Value */

#define UHPHS_USBINTR_USBIE_Pos               _U_(0)                                               /**< (UHPHS_USBINTR) USBINT Interrupt Enable Position */
#define UHPHS_USBINTR_USBIE_Msk               (_U_(0x1) << UHPHS_USBINTR_USBIE_Pos)                /**< (UHPHS_USBINTR) USBINT Interrupt Enable Mask */
#define UHPHS_USBINTR_USBIE(value)            (UHPHS_USBINTR_USBIE_Msk & ((value) << UHPHS_USBINTR_USBIE_Pos))
#define UHPHS_USBINTR_USBEIE_Pos              _U_(1)                                               /**< (UHPHS_USBINTR) USBERRINT Interrupt Enable Position */
#define UHPHS_USBINTR_USBEIE_Msk              (_U_(0x1) << UHPHS_USBINTR_USBEIE_Pos)               /**< (UHPHS_USBINTR) USBERRINT Interrupt Enable Mask */
#define UHPHS_USBINTR_USBEIE(value)           (UHPHS_USBINTR_USBEIE_Msk & ((value) << UHPHS_USBINTR_USBEIE_Pos))
#define UHPHS_USBINTR_PCIE_Pos                _U_(2)                                               /**< (UHPHS_USBINTR) Port Change Detect Interrupt Enable Position */
#define UHPHS_USBINTR_PCIE_Msk                (_U_(0x1) << UHPHS_USBINTR_PCIE_Pos)                 /**< (UHPHS_USBINTR) Port Change Detect Interrupt Enable Mask */
#define UHPHS_USBINTR_PCIE(value)             (UHPHS_USBINTR_PCIE_Msk & ((value) << UHPHS_USBINTR_PCIE_Pos))
#define UHPHS_USBINTR_FLRE_Pos                _U_(3)                                               /**< (UHPHS_USBINTR) Frame List Rollover Interrupt Enable Position */
#define UHPHS_USBINTR_FLRE_Msk                (_U_(0x1) << UHPHS_USBINTR_FLRE_Pos)                 /**< (UHPHS_USBINTR) Frame List Rollover Interrupt Enable Mask */
#define UHPHS_USBINTR_FLRE(value)             (UHPHS_USBINTR_FLRE_Msk & ((value) << UHPHS_USBINTR_FLRE_Pos))
#define UHPHS_USBINTR_HSEE_Pos                _U_(4)                                               /**< (UHPHS_USBINTR) Host System Error Interrupt Enable Position */
#define UHPHS_USBINTR_HSEE_Msk                (_U_(0x1) << UHPHS_USBINTR_HSEE_Pos)                 /**< (UHPHS_USBINTR) Host System Error Interrupt Enable Mask */
#define UHPHS_USBINTR_HSEE(value)             (UHPHS_USBINTR_HSEE_Msk & ((value) << UHPHS_USBINTR_HSEE_Pos))
#define UHPHS_USBINTR_IAAE_Pos                _U_(5)                                               /**< (UHPHS_USBINTR) Interrupt on Async Advance Enable Position */
#define UHPHS_USBINTR_IAAE_Msk                (_U_(0x1) << UHPHS_USBINTR_IAAE_Pos)                 /**< (UHPHS_USBINTR) Interrupt on Async Advance Enable Mask */
#define UHPHS_USBINTR_IAAE(value)             (UHPHS_USBINTR_IAAE_Msk & ((value) << UHPHS_USBINTR_IAAE_Pos))
#define UHPHS_USBINTR_Msk                     _U_(0x0000003F)                                      /**< (UHPHS_USBINTR) Register Mask  */


/* -------- UHPHS_FRINDEX : (UHPHS Offset: 0x1C) (R/W 32) UHPHS USB Frame Index Register -------- */
#define UHPHS_FRINDEX_RESETVALUE              _U_(0x00)                                            /**<  (UHPHS_FRINDEX) UHPHS USB Frame Index Register  Reset Value */

#define UHPHS_FRINDEX_FI_Pos                  _U_(0)                                               /**< (UHPHS_FRINDEX) Frame Index Position */
#define UHPHS_FRINDEX_FI_Msk                  (_U_(0x3FFF) << UHPHS_FRINDEX_FI_Pos)                /**< (UHPHS_FRINDEX) Frame Index Mask */
#define UHPHS_FRINDEX_FI(value)               (UHPHS_FRINDEX_FI_Msk & ((value) << UHPHS_FRINDEX_FI_Pos))
#define UHPHS_FRINDEX_Msk                     _U_(0x00003FFF)                                      /**< (UHPHS_FRINDEX) Register Mask  */


/* -------- UHPHS_CTRLDSSEGMENT : (UHPHS Offset: 0x20) (R/W 32) UHPHS Control Data Structure Segment Register -------- */
#define UHPHS_CTRLDSSEGMENT_RESETVALUE        _U_(0x00)                                            /**<  (UHPHS_CTRLDSSEGMENT) UHPHS Control Data Structure Segment Register  Reset Value */

#define UHPHS_CTRLDSSEGMENT_Msk               _U_(0x00000000)                                      /**< (UHPHS_CTRLDSSEGMENT) Register Mask  */


/* -------- UHPHS_PERIODICLISTBASE : (UHPHS Offset: 0x24) (R/W 32) UHPHS Periodic Frame List Base Address Register -------- */
#define UHPHS_PERIODICLISTBASE_RESETVALUE     _U_(0x00)                                            /**<  (UHPHS_PERIODICLISTBASE) UHPHS Periodic Frame List Base Address Register  Reset Value */

#define UHPHS_PERIODICLISTBASE_BA_Pos         _U_(12)                                              /**< (UHPHS_PERIODICLISTBASE) Base Address (Low) Position */
#define UHPHS_PERIODICLISTBASE_BA_Msk         (_U_(0xFFFFF) << UHPHS_PERIODICLISTBASE_BA_Pos)      /**< (UHPHS_PERIODICLISTBASE) Base Address (Low) Mask */
#define UHPHS_PERIODICLISTBASE_BA(value)      (UHPHS_PERIODICLISTBASE_BA_Msk & ((value) << UHPHS_PERIODICLISTBASE_BA_Pos))
#define UHPHS_PERIODICLISTBASE_Msk            _U_(0xFFFFF000)                                      /**< (UHPHS_PERIODICLISTBASE) Register Mask  */


/* -------- UHPHS_ASYNCLISTADDR : (UHPHS Offset: 0x28) (R/W 32) UHPHS Asynchronous List Address Register -------- */
#define UHPHS_ASYNCLISTADDR_RESETVALUE        _U_(0x00)                                            /**<  (UHPHS_ASYNCLISTADDR) UHPHS Asynchronous List Address Register  Reset Value */

#define UHPHS_ASYNCLISTADDR_LPL_Pos           _U_(5)                                               /**< (UHPHS_ASYNCLISTADDR) Link Pointer Low Position */
#define UHPHS_ASYNCLISTADDR_LPL_Msk           (_U_(0x7FFFFFF) << UHPHS_ASYNCLISTADDR_LPL_Pos)      /**< (UHPHS_ASYNCLISTADDR) Link Pointer Low Mask */
#define UHPHS_ASYNCLISTADDR_LPL(value)        (UHPHS_ASYNCLISTADDR_LPL_Msk & ((value) << UHPHS_ASYNCLISTADDR_LPL_Pos))
#define UHPHS_ASYNCLISTADDR_Msk               _U_(0xFFFFFFE0)                                      /**< (UHPHS_ASYNCLISTADDR) Register Mask  */


/* -------- UHPHS_CONFIGFLAG : (UHPHS Offset: 0x50) (R/W 32) UHPHS Configured Flag Register -------- */
#define UHPHS_CONFIGFLAG_RESETVALUE           _U_(0x00)                                            /**<  (UHPHS_CONFIGFLAG) UHPHS Configured Flag Register  Reset Value */

#define UHPHS_CONFIGFLAG_CF_Pos               _U_(0)                                               /**< (UHPHS_CONFIGFLAG) Configure Flag (Read/Write) Position */
#define UHPHS_CONFIGFLAG_CF_Msk               (_U_(0x1) << UHPHS_CONFIGFLAG_CF_Pos)                /**< (UHPHS_CONFIGFLAG) Configure Flag (Read/Write) Mask */
#define UHPHS_CONFIGFLAG_CF(value)            (UHPHS_CONFIGFLAG_CF_Msk & ((value) << UHPHS_CONFIGFLAG_CF_Pos))
#define   UHPHS_CONFIGFLAG_CF_0_Val           _U_(0x0)                                             /**< (UHPHS_CONFIGFLAG) Port routing control logic default-routes each port to an implementation-dependent classic host controller (default value).  */
#define   UHPHS_CONFIGFLAG_CF_1_Val           _U_(0x1)                                             /**< (UHPHS_CONFIGFLAG) Port routing control logic default-routes all ports to this host controller.  */
#define UHPHS_CONFIGFLAG_CF_0                 (UHPHS_CONFIGFLAG_CF_0_Val << UHPHS_CONFIGFLAG_CF_Pos) /**< (UHPHS_CONFIGFLAG) Port routing control logic default-routes each port to an implementation-dependent classic host controller (default value). Position  */
#define UHPHS_CONFIGFLAG_CF_1                 (UHPHS_CONFIGFLAG_CF_1_Val << UHPHS_CONFIGFLAG_CF_Pos) /**< (UHPHS_CONFIGFLAG) Port routing control logic default-routes all ports to this host controller. Position  */
#define UHPHS_CONFIGFLAG_Msk                  _U_(0x00000001)                                      /**< (UHPHS_CONFIGFLAG) Register Mask  */


/* -------- UHPHS_PORTSC : (UHPHS Offset: 0x54) (R/W 32) UHPHS Port Status and Control Register (port = 0) -------- */
#define UHPHS_PORTSC_RESETVALUE               _U_(0x3000)                                          /**<  (UHPHS_PORTSC) UHPHS Port Status and Control Register (port = 0)  Reset Value */

#define UHPHS_PORTSC_CCS_Pos                  _U_(0)                                               /**< (UHPHS_PORTSC) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_CCS_Msk                  (_U_(0x1) << UHPHS_PORTSC_CCS_Pos)                   /**< (UHPHS_PORTSC) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_CCS(value)               (UHPHS_PORTSC_CCS_Msk & ((value) << UHPHS_PORTSC_CCS_Pos))
#define   UHPHS_PORTSC_CCS_0_Val              _U_(0x0)                                             /**< (UHPHS_PORTSC) No device is present.  */
#define   UHPHS_PORTSC_CCS_1_Val              _U_(0x1)                                             /**< (UHPHS_PORTSC) Device is present on port.  */
#define UHPHS_PORTSC_CCS_0                    (UHPHS_PORTSC_CCS_0_Val << UHPHS_PORTSC_CCS_Pos)     /**< (UHPHS_PORTSC) No device is present. Position  */
#define UHPHS_PORTSC_CCS_1                    (UHPHS_PORTSC_CCS_1_Val << UHPHS_PORTSC_CCS_Pos)     /**< (UHPHS_PORTSC) Device is present on port. Position  */
#define UHPHS_PORTSC_CSC_Pos                  _U_(1)                                               /**< (UHPHS_PORTSC) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_CSC_Msk                  (_U_(0x1) << UHPHS_PORTSC_CSC_Pos)                   /**< (UHPHS_PORTSC) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_CSC(value)               (UHPHS_PORTSC_CSC_Msk & ((value) << UHPHS_PORTSC_CSC_Pos))
#define   UHPHS_PORTSC_CSC_0_Val              _U_(0x0)                                             /**< (UHPHS_PORTSC) No change.  */
#define   UHPHS_PORTSC_CSC_1_Val              _U_(0x1)                                             /**< (UHPHS_PORTSC) Change in Current Connect Status.  */
#define UHPHS_PORTSC_CSC_0                    (UHPHS_PORTSC_CSC_0_Val << UHPHS_PORTSC_CSC_Pos)     /**< (UHPHS_PORTSC) No change. Position  */
#define UHPHS_PORTSC_CSC_1                    (UHPHS_PORTSC_CSC_1_Val << UHPHS_PORTSC_CSC_Pos)     /**< (UHPHS_PORTSC) Change in Current Connect Status. Position  */
#define UHPHS_PORTSC_PED_Pos                  _U_(2)                                               /**< (UHPHS_PORTSC) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_PED_Msk                  (_U_(0x1) << UHPHS_PORTSC_PED_Pos)                   /**< (UHPHS_PORTSC) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_PED(value)               (UHPHS_PORTSC_PED_Msk & ((value) << UHPHS_PORTSC_PED_Pos))
#define   UHPHS_PORTSC_PED_0_Val              _U_(0x0)                                             /**< (UHPHS_PORTSC) Disable.  */
#define   UHPHS_PORTSC_PED_1_Val              _U_(0x1)                                             /**< (UHPHS_PORTSC) Enable.  */
#define UHPHS_PORTSC_PED_0                    (UHPHS_PORTSC_PED_0_Val << UHPHS_PORTSC_PED_Pos)     /**< (UHPHS_PORTSC) Disable. Position  */
#define UHPHS_PORTSC_PED_1                    (UHPHS_PORTSC_PED_1_Val << UHPHS_PORTSC_PED_Pos)     /**< (UHPHS_PORTSC) Enable. Position  */
#define UHPHS_PORTSC_PEDC_Pos                 _U_(3)                                               /**< (UHPHS_PORTSC) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_PEDC_Msk                 (_U_(0x1) << UHPHS_PORTSC_PEDC_Pos)                  /**< (UHPHS_PORTSC) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_PEDC(value)              (UHPHS_PORTSC_PEDC_Msk & ((value) << UHPHS_PORTSC_PEDC_Pos))
#define   UHPHS_PORTSC_PEDC_0_Val             _U_(0x0)                                             /**< (UHPHS_PORTSC) No change in port enabled/disabled status.  */
#define   UHPHS_PORTSC_PEDC_1_Val             _U_(0x1)                                             /**< (UHPHS_PORTSC) Port enabled/disabled status has changed.  */
#define UHPHS_PORTSC_PEDC_0                   (UHPHS_PORTSC_PEDC_0_Val << UHPHS_PORTSC_PEDC_Pos)   /**< (UHPHS_PORTSC) No change in port enabled/disabled status. Position  */
#define UHPHS_PORTSC_PEDC_1                   (UHPHS_PORTSC_PEDC_1_Val << UHPHS_PORTSC_PEDC_Pos)   /**< (UHPHS_PORTSC) Port enabled/disabled status has changed. Position  */
#define UHPHS_PORTSC_OCA_Pos                  _U_(4)                                               /**< (UHPHS_PORTSC) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_OCA_Msk                  (_U_(0x1) << UHPHS_PORTSC_OCA_Pos)                   /**< (UHPHS_PORTSC) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_OCA(value)               (UHPHS_PORTSC_OCA_Msk & ((value) << UHPHS_PORTSC_OCA_Pos))
#define   UHPHS_PORTSC_OCA_0_Val              _U_(0x0)                                             /**< (UHPHS_PORTSC) This port does not have an over-current condition.  */
#define   UHPHS_PORTSC_OCA_1_Val              _U_(0x1)                                             /**< (UHPHS_PORTSC) This port currently has an over-current condition.  */
#define UHPHS_PORTSC_OCA_0                    (UHPHS_PORTSC_OCA_0_Val << UHPHS_PORTSC_OCA_Pos)     /**< (UHPHS_PORTSC) This port does not have an over-current condition. Position  */
#define UHPHS_PORTSC_OCA_1                    (UHPHS_PORTSC_OCA_1_Val << UHPHS_PORTSC_OCA_Pos)     /**< (UHPHS_PORTSC) This port currently has an over-current condition. Position  */
#define UHPHS_PORTSC_OCC_Pos                  _U_(5)                                               /**< (UHPHS_PORTSC) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_OCC_Msk                  (_U_(0x1) << UHPHS_PORTSC_OCC_Pos)                   /**< (UHPHS_PORTSC) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_OCC(value)               (UHPHS_PORTSC_OCC_Msk & ((value) << UHPHS_PORTSC_OCC_Pos))
#define   UHPHS_PORTSC_OCC_0_Val              _U_(0x0)                                             /**< (UHPHS_PORTSC) No change to Over-current Active.  */
#define   UHPHS_PORTSC_OCC_1_Val              _U_(0x1)                                             /**< (UHPHS_PORTSC) Changes to Over-current Active.  */
#define UHPHS_PORTSC_OCC_0                    (UHPHS_PORTSC_OCC_0_Val << UHPHS_PORTSC_OCC_Pos)     /**< (UHPHS_PORTSC) No change to Over-current Active. Position  */
#define UHPHS_PORTSC_OCC_1                    (UHPHS_PORTSC_OCC_1_Val << UHPHS_PORTSC_OCC_Pos)     /**< (UHPHS_PORTSC) Changes to Over-current Active. Position  */
#define UHPHS_PORTSC_FPR_Pos                  _U_(6)                                               /**< (UHPHS_PORTSC) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_FPR_Msk                  (_U_(0x1) << UHPHS_PORTSC_FPR_Pos)                   /**< (UHPHS_PORTSC) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_FPR(value)               (UHPHS_PORTSC_FPR_Msk & ((value) << UHPHS_PORTSC_FPR_Pos))
#define   UHPHS_PORTSC_FPR_0_Val              _U_(0x0)                                             /**< (UHPHS_PORTSC) No resume (K-state) detected/driven on port.  */
#define   UHPHS_PORTSC_FPR_1_Val              _U_(0x1)                                             /**< (UHPHS_PORTSC) Resume detected/driven on port.  */
#define UHPHS_PORTSC_FPR_0                    (UHPHS_PORTSC_FPR_0_Val << UHPHS_PORTSC_FPR_Pos)     /**< (UHPHS_PORTSC) No resume (K-state) detected/driven on port. Position  */
#define UHPHS_PORTSC_FPR_1                    (UHPHS_PORTSC_FPR_1_Val << UHPHS_PORTSC_FPR_Pos)     /**< (UHPHS_PORTSC) Resume detected/driven on port. Position  */
#define UHPHS_PORTSC_SUS_Pos                  _U_(7)                                               /**< (UHPHS_PORTSC) Suspend (read/write) Position */
#define UHPHS_PORTSC_SUS_Msk                  (_U_(0x1) << UHPHS_PORTSC_SUS_Pos)                   /**< (UHPHS_PORTSC) Suspend (read/write) Mask */
#define UHPHS_PORTSC_SUS(value)               (UHPHS_PORTSC_SUS_Msk & ((value) << UHPHS_PORTSC_SUS_Pos))
#define   UHPHS_PORTSC_SUS_0_Val              _U_(0x0)                                             /**< (UHPHS_PORTSC) Port not in suspend state.  */
#define   UHPHS_PORTSC_SUS_1_Val              _U_(0x1)                                             /**< (UHPHS_PORTSC) Port in suspend state.  */
#define UHPHS_PORTSC_SUS_0                    (UHPHS_PORTSC_SUS_0_Val << UHPHS_PORTSC_SUS_Pos)     /**< (UHPHS_PORTSC) Port not in suspend state. Position  */
#define UHPHS_PORTSC_SUS_1                    (UHPHS_PORTSC_SUS_1_Val << UHPHS_PORTSC_SUS_Pos)     /**< (UHPHS_PORTSC) Port in suspend state. Position  */
#define UHPHS_PORTSC_PR_Pos                   _U_(8)                                               /**< (UHPHS_PORTSC) Port Reset (read/write) Position */
#define UHPHS_PORTSC_PR_Msk                   (_U_(0x1) << UHPHS_PORTSC_PR_Pos)                    /**< (UHPHS_PORTSC) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_PR(value)                (UHPHS_PORTSC_PR_Msk & ((value) << UHPHS_PORTSC_PR_Pos))
#define   UHPHS_PORTSC_PR_0_Val               _U_(0x0)                                             /**< (UHPHS_PORTSC) Port is not in Reset.  */
#define   UHPHS_PORTSC_PR_1_Val               _U_(0x1)                                             /**< (UHPHS_PORTSC) Port is in Reset.  */
#define UHPHS_PORTSC_PR_0                     (UHPHS_PORTSC_PR_0_Val << UHPHS_PORTSC_PR_Pos)       /**< (UHPHS_PORTSC) Port is not in Reset. Position  */
#define UHPHS_PORTSC_PR_1                     (UHPHS_PORTSC_PR_1_Val << UHPHS_PORTSC_PR_Pos)       /**< (UHPHS_PORTSC) Port is in Reset. Position  */
#define UHPHS_PORTSC_LS_Pos                   _U_(10)                                              /**< (UHPHS_PORTSC) Line Status (read-only) Position */
#define UHPHS_PORTSC_LS_Msk                   (_U_(0x3) << UHPHS_PORTSC_LS_Pos)                    /**< (UHPHS_PORTSC) Line Status (read-only) Mask */
#define UHPHS_PORTSC_LS(value)                (UHPHS_PORTSC_LS_Msk & ((value) << UHPHS_PORTSC_LS_Pos))
#define   UHPHS_PORTSC_LS_SE0_Val             _U_(0x0)                                             /**< (UHPHS_PORTSC) Not a low-speed device, perform EHCI reset  */
#define   UHPHS_PORTSC_LS_K_STATE_Val         _U_(0x1)                                             /**< (UHPHS_PORTSC) Low-speed device, release ownership of port  */
#define   UHPHS_PORTSC_LS_J_STATE_Val         _U_(0x2)                                             /**< (UHPHS_PORTSC) Not a low-speed device, perform EHCI reset  */
#define   UHPHS_PORTSC_LS_UNDEFINED_Val       _U_(0x3)                                             /**< (UHPHS_PORTSC) Not a low-speed device, perform EHCI reset  */
#define UHPHS_PORTSC_LS_SE0                   (UHPHS_PORTSC_LS_SE0_Val << UHPHS_PORTSC_LS_Pos)     /**< (UHPHS_PORTSC) Not a low-speed device, perform EHCI reset Position  */
#define UHPHS_PORTSC_LS_K_STATE               (UHPHS_PORTSC_LS_K_STATE_Val << UHPHS_PORTSC_LS_Pos) /**< (UHPHS_PORTSC) Low-speed device, release ownership of port Position  */
#define UHPHS_PORTSC_LS_J_STATE               (UHPHS_PORTSC_LS_J_STATE_Val << UHPHS_PORTSC_LS_Pos) /**< (UHPHS_PORTSC) Not a low-speed device, perform EHCI reset Position  */
#define UHPHS_PORTSC_LS_UNDEFINED             (UHPHS_PORTSC_LS_UNDEFINED_Val << UHPHS_PORTSC_LS_Pos) /**< (UHPHS_PORTSC) Not a low-speed device, perform EHCI reset Position  */
#define UHPHS_PORTSC_PP_Pos                   _U_(12)                                              /**< (UHPHS_PORTSC) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_PP_Msk                   (_U_(0x1) << UHPHS_PORTSC_PP_Pos)                    /**< (UHPHS_PORTSC) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_PP(value)                (UHPHS_PORTSC_PP_Msk & ((value) << UHPHS_PORTSC_PP_Pos))
#define UHPHS_PORTSC_PO_Pos                   _U_(13)                                              /**< (UHPHS_PORTSC) Port Owner (read/write) Position */
#define UHPHS_PORTSC_PO_Msk                   (_U_(0x1) << UHPHS_PORTSC_PO_Pos)                    /**< (UHPHS_PORTSC) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_PO(value)                (UHPHS_PORTSC_PO_Msk & ((value) << UHPHS_PORTSC_PO_Pos))
#define   UHPHS_PORTSC_PO_0_Val               _U_(0x0)                                             /**< (UHPHS_PORTSC) This bit unconditionally goes to a 0 when the bit UHPHS_CONFIGFLAG.CF makes a 0 to 1 transition.  */
#define   UHPHS_PORTSC_PO_1_Val               _U_(0x1)                                             /**< (UHPHS_PORTSC) This bit unconditionally goes to 1 whenever the bit UHPHS_CONFIGFLAG.CF=0.  */
#define UHPHS_PORTSC_PO_0                     (UHPHS_PORTSC_PO_0_Val << UHPHS_PORTSC_PO_Pos)       /**< (UHPHS_PORTSC) This bit unconditionally goes to a 0 when the bit UHPHS_CONFIGFLAG.CF makes a 0 to 1 transition. Position  */
#define UHPHS_PORTSC_PO_1                     (UHPHS_PORTSC_PO_1_Val << UHPHS_PORTSC_PO_Pos)       /**< (UHPHS_PORTSC) This bit unconditionally goes to 1 whenever the bit UHPHS_CONFIGFLAG.CF=0. Position  */
#define UHPHS_PORTSC_PIC_Pos                  _U_(14)                                              /**< (UHPHS_PORTSC) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_PIC_Msk                  (_U_(0x3) << UHPHS_PORTSC_PIC_Pos)                   /**< (UHPHS_PORTSC) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_PIC(value)               (UHPHS_PORTSC_PIC_Msk & ((value) << UHPHS_PORTSC_PIC_Pos))
#define UHPHS_PORTSC_PTC_Pos                  _U_(16)                                              /**< (UHPHS_PORTSC) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_PTC_Msk                  (_U_(0xF) << UHPHS_PORTSC_PTC_Pos)                   /**< (UHPHS_PORTSC) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_PTC(value)               (UHPHS_PORTSC_PTC_Msk & ((value) << UHPHS_PORTSC_PTC_Pos))
#define UHPHS_PORTSC_WKCNNT_E_Pos             _U_(20)                                              /**< (UHPHS_PORTSC) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_WKCNNT_E_Msk             (_U_(0x1) << UHPHS_PORTSC_WKCNNT_E_Pos)              /**< (UHPHS_PORTSC) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_WKCNNT_E(value)          (UHPHS_PORTSC_WKCNNT_E_Msk & ((value) << UHPHS_PORTSC_WKCNNT_E_Pos))
#define   UHPHS_PORTSC_WKCNNT_E_0_Val         _U_(0x0)                                             /**< (UHPHS_PORTSC) Disables the port to be sensitive to device connects as wake-up events.  */
#define   UHPHS_PORTSC_WKCNNT_E_1_Val         _U_(0x1)                                             /**< (UHPHS_PORTSC) Enables the port to be sensitive to device connects as wake-up events.  */
#define UHPHS_PORTSC_WKCNNT_E_0               (UHPHS_PORTSC_WKCNNT_E_0_Val << UHPHS_PORTSC_WKCNNT_E_Pos) /**< (UHPHS_PORTSC) Disables the port to be sensitive to device connects as wake-up events. Position  */
#define UHPHS_PORTSC_WKCNNT_E_1               (UHPHS_PORTSC_WKCNNT_E_1_Val << UHPHS_PORTSC_WKCNNT_E_Pos) /**< (UHPHS_PORTSC) Enables the port to be sensitive to device connects as wake-up events. Position  */
#define UHPHS_PORTSC_WKDSCNNT_E_Pos           _U_(21)                                              /**< (UHPHS_PORTSC) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_WKDSCNNT_E_Msk           (_U_(0x1) << UHPHS_PORTSC_WKDSCNNT_E_Pos)            /**< (UHPHS_PORTSC) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_WKDSCNNT_E(value)        (UHPHS_PORTSC_WKDSCNNT_E_Msk & ((value) << UHPHS_PORTSC_WKDSCNNT_E_Pos))
#define   UHPHS_PORTSC_WKDSCNNT_E_0_Val       _U_(0x0)                                             /**< (UHPHS_PORTSC) Disables the port to be sensitive to device disconnects as wake-up events.  */
#define   UHPHS_PORTSC_WKDSCNNT_E_1_Val       _U_(0x1)                                             /**< (UHPHS_PORTSC) Enables the port to be sensitive to device disconnects as wake-up events.  */
#define UHPHS_PORTSC_WKDSCNNT_E_0             (UHPHS_PORTSC_WKDSCNNT_E_0_Val << UHPHS_PORTSC_WKDSCNNT_E_Pos) /**< (UHPHS_PORTSC) Disables the port to be sensitive to device disconnects as wake-up events. Position  */
#define UHPHS_PORTSC_WKDSCNNT_E_1             (UHPHS_PORTSC_WKDSCNNT_E_1_Val << UHPHS_PORTSC_WKDSCNNT_E_Pos) /**< (UHPHS_PORTSC) Enables the port to be sensitive to device disconnects as wake-up events. Position  */
#define UHPHS_PORTSC_WKOC_E_Pos               _U_(22)                                              /**< (UHPHS_PORTSC) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_WKOC_E_Msk               (_U_(0x1) << UHPHS_PORTSC_WKOC_E_Pos)                /**< (UHPHS_PORTSC) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_WKOC_E(value)            (UHPHS_PORTSC_WKOC_E_Msk & ((value) << UHPHS_PORTSC_WKOC_E_Pos))
#define   UHPHS_PORTSC_WKOC_E_0_Val           _U_(0x0)                                             /**< (UHPHS_PORTSC) Disables the port to be sensitive to over-current conditions as wake-up events.  */
#define   UHPHS_PORTSC_WKOC_E_1_Val           _U_(0x1)                                             /**< (UHPHS_PORTSC) Enables the port to be sensitive to over-current conditions as wake-up events.  */
#define UHPHS_PORTSC_WKOC_E_0                 (UHPHS_PORTSC_WKOC_E_0_Val << UHPHS_PORTSC_WKOC_E_Pos) /**< (UHPHS_PORTSC) Disables the port to be sensitive to over-current conditions as wake-up events. Position  */
#define UHPHS_PORTSC_WKOC_E_1                 (UHPHS_PORTSC_WKOC_E_1_Val << UHPHS_PORTSC_WKOC_E_Pos) /**< (UHPHS_PORTSC) Enables the port to be sensitive to over-current conditions as wake-up events. Position  */
#define UHPHS_PORTSC_Msk                      _U_(0x007FFDFF)                                      /**< (UHPHS_PORTSC) Register Mask  */


/* -------- UHPHS_INSNREG06 : (UHPHS Offset: 0xA8) (R/W 32) EHCI Specific Registers 06 -------- */
#define UHPHS_INSNREG06_RESETVALUE            _U_(0x00)                                            /**<  (UHPHS_INSNREG06) EHCI Specific Registers 06  Reset Value */

#define UHPHS_INSNREG06_Nb_Success_Burst_Pos  _U_(0)                                               /**< (UHPHS_INSNREG06) Number of Successful Bursts (Read-only) Position */
#define UHPHS_INSNREG06_Nb_Success_Burst_Msk  (_U_(0xF) << UHPHS_INSNREG06_Nb_Success_Burst_Pos)   /**< (UHPHS_INSNREG06) Number of Successful Bursts (Read-only) Mask */
#define UHPHS_INSNREG06_Nb_Success_Burst(value) (UHPHS_INSNREG06_Nb_Success_Burst_Msk & ((value) << UHPHS_INSNREG06_Nb_Success_Burst_Pos))
#define UHPHS_INSNREG06_Nb_Burst_Pos          _U_(4)                                               /**< (UHPHS_INSNREG06) Number of Bursts (Read-only) Position */
#define UHPHS_INSNREG06_Nb_Burst_Msk          (_U_(0x1F) << UHPHS_INSNREG06_Nb_Burst_Pos)          /**< (UHPHS_INSNREG06) Number of Bursts (Read-only) Mask */
#define UHPHS_INSNREG06_Nb_Burst(value)       (UHPHS_INSNREG06_Nb_Burst_Msk & ((value) << UHPHS_INSNREG06_Nb_Burst_Pos))
#define UHPHS_INSNREG06_HBURST_Pos            _U_(9)                                               /**< (UHPHS_INSNREG06) Burst Value (Read-only) Position */
#define UHPHS_INSNREG06_HBURST_Msk            (_U_(0x7) << UHPHS_INSNREG06_HBURST_Pos)             /**< (UHPHS_INSNREG06) Burst Value (Read-only) Mask */
#define UHPHS_INSNREG06_HBURST(value)         (UHPHS_INSNREG06_HBURST_Msk & ((value) << UHPHS_INSNREG06_HBURST_Pos))
#define UHPHS_INSNREG06_AHB_ERR_Pos           _U_(31)                                              /**< (UHPHS_INSNREG06) AHB Error Position */
#define UHPHS_INSNREG06_AHB_ERR_Msk           (_U_(0x1) << UHPHS_INSNREG06_AHB_ERR_Pos)            /**< (UHPHS_INSNREG06) AHB Error Mask */
#define UHPHS_INSNREG06_AHB_ERR(value)        (UHPHS_INSNREG06_AHB_ERR_Msk & ((value) << UHPHS_INSNREG06_AHB_ERR_Pos))
#define UHPHS_INSNREG06_Msk                   _U_(0x80000FFF)                                      /**< (UHPHS_INSNREG06) Register Mask  */


/* -------- UHPHS_INSNREG07 : (UHPHS Offset: 0xAC) (R/W 32) EHCI Specific Registers 07 -------- */
#define UHPHS_INSNREG07_RESETVALUE            _U_(0x00)                                            /**<  (UHPHS_INSNREG07) EHCI Specific Registers 07  Reset Value */

#define UHPHS_INSNREG07_AHB_ADDR_Pos          _U_(0)                                               /**< (UHPHS_INSNREG07) AHB Address (Read Only) Position */
#define UHPHS_INSNREG07_AHB_ADDR_Msk          (_U_(0xFFFFFFFF) << UHPHS_INSNREG07_AHB_ADDR_Pos)    /**< (UHPHS_INSNREG07) AHB Address (Read Only) Mask */
#define UHPHS_INSNREG07_AHB_ADDR(value)       (UHPHS_INSNREG07_AHB_ADDR_Msk & ((value) << UHPHS_INSNREG07_AHB_ADDR_Pos))
#define UHPHS_INSNREG07_Msk                   _U_(0xFFFFFFFF)                                      /**< (UHPHS_INSNREG07) Register Mask  */


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
#define UHPHS_PORTSC_REG_OFST          (0x54)              /**< (UHPHS_PORTSC) UHPHS Port Status and Control Register (port = 0) Offset */
#define UHPHS_PORTSC0_REG_OFST         (0x54)              /**< (UHPHS_PORTSC0) UHPHS Port Status and Control Register (port = 0) Offset */
#define UHPHS_PORTSC1_REG_OFST         (0x58)              /**< (UHPHS_PORTSC1) UHPHS Port Status and Control Register (port = 0) Offset */
#define UHPHS_PORTSC2_REG_OFST         (0x5C)              /**< (UHPHS_PORTSC2) UHPHS Port Status and Control Register (port = 0) Offset */
#define UHPHS_INSNREG06_REG_OFST       (0xA8)              /**< (UHPHS_INSNREG06) EHCI Specific Registers 06 Offset */
#define UHPHS_INSNREG07_REG_OFST       (0xAC)              /**< (UHPHS_INSNREG07) EHCI Specific Registers 07 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UHPHS register API structure */
typedef struct
{  /* USB Host High Speed Port */
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
  __IO  uint32_t                       UHPHS_PORTSC[3];    /**< Offset: 0x54 (R/W  32) UHPHS Port Status and Control Register (port = 0) */
  __I   uint8_t                        Reserved3[0x48];
  __IO  uint32_t                       UHPHS_INSNREG06;    /**< Offset: 0xA8 (R/W  32) EHCI Specific Registers 06 */
  __IO  uint32_t                       UHPHS_INSNREG07;    /**< Offset: 0xAC (R/W  32) EHCI Specific Registers 07 */
} uhphs_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_UHPHS_COMPONENT_H_ */
