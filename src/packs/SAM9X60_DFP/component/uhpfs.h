/*
 * Component description for UHPFS
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

/* file generated from device description version 2021-05-04T16:22:14Z */
#ifndef _SAM9X_UHPFS_COMPONENT_H_
#define _SAM9X_UHPFS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR UHPFS                                        */
/* ************************************************************************** */

/* -------- UHPFS_HcRevision : (UHPFS Offset: 0x00) ( R/ 32) OHCI Revision Number Register -------- */
#define UHPFS_HcRevision_REV_Pos              _U_(0)                                               /**< (UHPFS_HcRevision) OHCI Revision Number Position */
#define UHPFS_HcRevision_REV_Msk              (_U_(0xFF) << UHPFS_HcRevision_REV_Pos)              /**< (UHPFS_HcRevision) OHCI Revision Number Mask */
#define UHPFS_HcRevision_REV(value)           (UHPFS_HcRevision_REV_Msk & ((value) << UHPFS_HcRevision_REV_Pos))
#define UHPFS_HcRevision_Msk                  _U_(0x000000FF)                                      /**< (UHPFS_HcRevision) Register Mask  */


/* -------- UHPFS_HcControl : (UHPFS Offset: 0x04) (R/W 32) HC Operating Mode Register -------- */
#define UHPFS_HcControl_CBSR_Pos              _U_(0)                                               /**< (UHPFS_HcControl) Control/Bulk Service Ratio Position */
#define UHPFS_HcControl_CBSR_Msk              (_U_(0x3) << UHPFS_HcControl_CBSR_Pos)               /**< (UHPFS_HcControl) Control/Bulk Service Ratio Mask */
#define UHPFS_HcControl_CBSR(value)           (UHPFS_HcControl_CBSR_Msk & ((value) << UHPFS_HcControl_CBSR_Pos))
#define UHPFS_HcControl_PLE_Pos               _U_(2)                                               /**< (UHPFS_HcControl) Periodic List Enable Position */
#define UHPFS_HcControl_PLE_Msk               (_U_(0x1) << UHPFS_HcControl_PLE_Pos)                /**< (UHPFS_HcControl) Periodic List Enable Mask */
#define UHPFS_HcControl_PLE(value)            (UHPFS_HcControl_PLE_Msk & ((value) << UHPFS_HcControl_PLE_Pos))
#define UHPFS_HcControl_IE_Pos                _U_(3)                                               /**< (UHPFS_HcControl) Isochronous Enable Position */
#define UHPFS_HcControl_IE_Msk                (_U_(0x1) << UHPFS_HcControl_IE_Pos)                 /**< (UHPFS_HcControl) Isochronous Enable Mask */
#define UHPFS_HcControl_IE(value)             (UHPFS_HcControl_IE_Msk & ((value) << UHPFS_HcControl_IE_Pos))
#define UHPFS_HcControl_CLE_Pos               _U_(4)                                               /**< (UHPFS_HcControl) ControL List Enable Position */
#define UHPFS_HcControl_CLE_Msk               (_U_(0x1) << UHPFS_HcControl_CLE_Pos)                /**< (UHPFS_HcControl) ControL List Enable Mask */
#define UHPFS_HcControl_CLE(value)            (UHPFS_HcControl_CLE_Msk & ((value) << UHPFS_HcControl_CLE_Pos))
#define UHPFS_HcControl_BLE_Pos               _U_(5)                                               /**< (UHPFS_HcControl) Bulk List Enable Position */
#define UHPFS_HcControl_BLE_Msk               (_U_(0x1) << UHPFS_HcControl_BLE_Pos)                /**< (UHPFS_HcControl) Bulk List Enable Mask */
#define UHPFS_HcControl_BLE(value)            (UHPFS_HcControl_BLE_Msk & ((value) << UHPFS_HcControl_BLE_Pos))
#define UHPFS_HcControl_HCFS_Pos              _U_(6)                                               /**< (UHPFS_HcControl) Host Controller Functional State Position */
#define UHPFS_HcControl_HCFS_Msk              (_U_(0x3) << UHPFS_HcControl_HCFS_Pos)               /**< (UHPFS_HcControl) Host Controller Functional State Mask */
#define UHPFS_HcControl_HCFS(value)           (UHPFS_HcControl_HCFS_Msk & ((value) << UHPFS_HcControl_HCFS_Pos))
#define UHPFS_HcControl_IR_Pos                _U_(8)                                               /**< (UHPFS_HcControl) Interrupt Routing Position */
#define UHPFS_HcControl_IR_Msk                (_U_(0x1) << UHPFS_HcControl_IR_Pos)                 /**< (UHPFS_HcControl) Interrupt Routing Mask */
#define UHPFS_HcControl_IR(value)             (UHPFS_HcControl_IR_Msk & ((value) << UHPFS_HcControl_IR_Pos))
#define UHPFS_HcControl_RWC_Pos               _U_(9)                                               /**< (UHPFS_HcControl) Remote Wakeup Connected Position */
#define UHPFS_HcControl_RWC_Msk               (_U_(0x1) << UHPFS_HcControl_RWC_Pos)                /**< (UHPFS_HcControl) Remote Wakeup Connected Mask */
#define UHPFS_HcControl_RWC(value)            (UHPFS_HcControl_RWC_Msk & ((value) << UHPFS_HcControl_RWC_Pos))
#define UHPFS_HcControl_RWE_Pos               _U_(10)                                              /**< (UHPFS_HcControl) Remote Wakeup Enable Position */
#define UHPFS_HcControl_RWE_Msk               (_U_(0x1) << UHPFS_HcControl_RWE_Pos)                /**< (UHPFS_HcControl) Remote Wakeup Enable Mask */
#define UHPFS_HcControl_RWE(value)            (UHPFS_HcControl_RWE_Msk & ((value) << UHPFS_HcControl_RWE_Pos))
#define UHPFS_HcControl_Msk                   _U_(0x000007FF)                                      /**< (UHPFS_HcControl) Register Mask  */


/* -------- UHPFS_HcCommandStatus : (UHPFS Offset: 0x08) (R/W 32) HC Command and Status Register -------- */
#define UHPFS_HcCommandStatus_HCR_Pos         _U_(0)                                               /**< (UHPFS_HcCommandStatus) Host Controller Reset (read/write) Position */
#define UHPFS_HcCommandStatus_HCR_Msk         (_U_(0x1) << UHPFS_HcCommandStatus_HCR_Pos)          /**< (UHPFS_HcCommandStatus) Host Controller Reset (read/write) Mask */
#define UHPFS_HcCommandStatus_HCR(value)      (UHPFS_HcCommandStatus_HCR_Msk & ((value) << UHPFS_HcCommandStatus_HCR_Pos))
#define UHPFS_HcCommandStatus_CLF_Pos         _U_(1)                                               /**< (UHPFS_HcCommandStatus) Control List Filled (read/write) Position */
#define UHPFS_HcCommandStatus_CLF_Msk         (_U_(0x1) << UHPFS_HcCommandStatus_CLF_Pos)          /**< (UHPFS_HcCommandStatus) Control List Filled (read/write) Mask */
#define UHPFS_HcCommandStatus_CLF(value)      (UHPFS_HcCommandStatus_CLF_Msk & ((value) << UHPFS_HcCommandStatus_CLF_Pos))
#define UHPFS_HcCommandStatus_BLF_Pos         _U_(2)                                               /**< (UHPFS_HcCommandStatus) Bulk List Filled (read/write) Position */
#define UHPFS_HcCommandStatus_BLF_Msk         (_U_(0x1) << UHPFS_HcCommandStatus_BLF_Pos)          /**< (UHPFS_HcCommandStatus) Bulk List Filled (read/write) Mask */
#define UHPFS_HcCommandStatus_BLF(value)      (UHPFS_HcCommandStatus_BLF_Msk & ((value) << UHPFS_HcCommandStatus_BLF_Pos))
#define UHPFS_HcCommandStatus_OCR_Pos         _U_(3)                                               /**< (UHPFS_HcCommandStatus) Ownership Change Request (read/write) Position */
#define UHPFS_HcCommandStatus_OCR_Msk         (_U_(0x1) << UHPFS_HcCommandStatus_OCR_Pos)          /**< (UHPFS_HcCommandStatus) Ownership Change Request (read/write) Mask */
#define UHPFS_HcCommandStatus_OCR(value)      (UHPFS_HcCommandStatus_OCR_Msk & ((value) << UHPFS_HcCommandStatus_OCR_Pos))
#define UHPFS_HcCommandStatus_SOC_Pos         _U_(16)                                              /**< (UHPFS_HcCommandStatus) Scheduling Overrun Count (read-only) Position */
#define UHPFS_HcCommandStatus_SOC_Msk         (_U_(0x3) << UHPFS_HcCommandStatus_SOC_Pos)          /**< (UHPFS_HcCommandStatus) Scheduling Overrun Count (read-only) Mask */
#define UHPFS_HcCommandStatus_SOC(value)      (UHPFS_HcCommandStatus_SOC_Msk & ((value) << UHPFS_HcCommandStatus_SOC_Pos))
#define UHPFS_HcCommandStatus_Msk             _U_(0x0003000F)                                      /**< (UHPFS_HcCommandStatus) Register Mask  */


/* -------- UHPFS_HcInterruptStatus : (UHPFS Offset: 0x0C) (R/W 32) HC Interrupt and Status Register -------- */
#define UHPFS_HcInterruptStatus_SO_Pos        _U_(0)                                               /**< (UHPFS_HcInterruptStatus) Scheduling Overrun (read/write, write '1' to clear) Position */
#define UHPFS_HcInterruptStatus_SO_Msk        (_U_(0x1) << UHPFS_HcInterruptStatus_SO_Pos)         /**< (UHPFS_HcInterruptStatus) Scheduling Overrun (read/write, write '1' to clear) Mask */
#define UHPFS_HcInterruptStatus_SO(value)     (UHPFS_HcInterruptStatus_SO_Msk & ((value) << UHPFS_HcInterruptStatus_SO_Pos))
#define UHPFS_HcInterruptStatus_WDH_Pos       _U_(1)                                               /**< (UHPFS_HcInterruptStatus) Write Done Head (read/write, write '1' to clear) Position */
#define UHPFS_HcInterruptStatus_WDH_Msk       (_U_(0x1) << UHPFS_HcInterruptStatus_WDH_Pos)        /**< (UHPFS_HcInterruptStatus) Write Done Head (read/write, write '1' to clear) Mask */
#define UHPFS_HcInterruptStatus_WDH(value)    (UHPFS_HcInterruptStatus_WDH_Msk & ((value) << UHPFS_HcInterruptStatus_WDH_Pos))
#define UHPFS_HcInterruptStatus_SF_Pos        _U_(2)                                               /**< (UHPFS_HcInterruptStatus) Start of Frame (read/write, write '1' to clear) Position */
#define UHPFS_HcInterruptStatus_SF_Msk        (_U_(0x1) << UHPFS_HcInterruptStatus_SF_Pos)         /**< (UHPFS_HcInterruptStatus) Start of Frame (read/write, write '1' to clear) Mask */
#define UHPFS_HcInterruptStatus_SF(value)     (UHPFS_HcInterruptStatus_SF_Msk & ((value) << UHPFS_HcInterruptStatus_SF_Pos))
#define UHPFS_HcInterruptStatus_RD_Pos        _U_(3)                                               /**< (UHPFS_HcInterruptStatus) Resume Detected (read/write, write '1' to clear) Position */
#define UHPFS_HcInterruptStatus_RD_Msk        (_U_(0x1) << UHPFS_HcInterruptStatus_RD_Pos)         /**< (UHPFS_HcInterruptStatus) Resume Detected (read/write, write '1' to clear) Mask */
#define UHPFS_HcInterruptStatus_RD(value)     (UHPFS_HcInterruptStatus_RD_Msk & ((value) << UHPFS_HcInterruptStatus_RD_Pos))
#define UHPFS_HcInterruptStatus_UE_Pos        _U_(4)                                               /**< (UHPFS_HcInterruptStatus) Unrecoverable Error (read/write, write '1' to clear) Position */
#define UHPFS_HcInterruptStatus_UE_Msk        (_U_(0x1) << UHPFS_HcInterruptStatus_UE_Pos)         /**< (UHPFS_HcInterruptStatus) Unrecoverable Error (read/write, write '1' to clear) Mask */
#define UHPFS_HcInterruptStatus_UE(value)     (UHPFS_HcInterruptStatus_UE_Msk & ((value) << UHPFS_HcInterruptStatus_UE_Pos))
#define UHPFS_HcInterruptStatus_FNO_Pos       _U_(5)                                               /**< (UHPFS_HcInterruptStatus) Frame Number Overflow (read/write, write '1' to clear) Position */
#define UHPFS_HcInterruptStatus_FNO_Msk       (_U_(0x1) << UHPFS_HcInterruptStatus_FNO_Pos)        /**< (UHPFS_HcInterruptStatus) Frame Number Overflow (read/write, write '1' to clear) Mask */
#define UHPFS_HcInterruptStatus_FNO(value)    (UHPFS_HcInterruptStatus_FNO_Msk & ((value) << UHPFS_HcInterruptStatus_FNO_Pos))
#define UHPFS_HcInterruptStatus_RHSC_Pos      _U_(6)                                               /**< (UHPFS_HcInterruptStatus) Root Hub Status Change (read/write, write '1' to clear) Position */
#define UHPFS_HcInterruptStatus_RHSC_Msk      (_U_(0x1) << UHPFS_HcInterruptStatus_RHSC_Pos)       /**< (UHPFS_HcInterruptStatus) Root Hub Status Change (read/write, write '1' to clear) Mask */
#define UHPFS_HcInterruptStatus_RHSC(value)   (UHPFS_HcInterruptStatus_RHSC_Msk & ((value) << UHPFS_HcInterruptStatus_RHSC_Pos))
#define UHPFS_HcInterruptStatus_OC_Pos        _U_(30)                                              /**< (UHPFS_HcInterruptStatus) Ownership Change (read-only) Position */
#define UHPFS_HcInterruptStatus_OC_Msk        (_U_(0x1) << UHPFS_HcInterruptStatus_OC_Pos)         /**< (UHPFS_HcInterruptStatus) Ownership Change (read-only) Mask */
#define UHPFS_HcInterruptStatus_OC(value)     (UHPFS_HcInterruptStatus_OC_Msk & ((value) << UHPFS_HcInterruptStatus_OC_Pos))
#define UHPFS_HcInterruptStatus_Msk           _U_(0x4000007F)                                      /**< (UHPFS_HcInterruptStatus) Register Mask  */


/* -------- UHPFS_HcInterruptEnable : (UHPFS Offset: 0x10) (R/W 32) HC Interrupt Enable Register -------- */
#define UHPFS_HcInterruptEnable_SO_Pos        _U_(0)                                               /**< (UHPFS_HcInterruptEnable) Scheduling Overrun (read/write, write '1' to set) Position */
#define UHPFS_HcInterruptEnable_SO_Msk        (_U_(0x1) << UHPFS_HcInterruptEnable_SO_Pos)         /**< (UHPFS_HcInterruptEnable) Scheduling Overrun (read/write, write '1' to set) Mask */
#define UHPFS_HcInterruptEnable_SO(value)     (UHPFS_HcInterruptEnable_SO_Msk & ((value) << UHPFS_HcInterruptEnable_SO_Pos))
#define UHPFS_HcInterruptEnable_WDH_Pos       _U_(1)                                               /**< (UHPFS_HcInterruptEnable) Write Done Head (read/write, write '1' to set) Position */
#define UHPFS_HcInterruptEnable_WDH_Msk       (_U_(0x1) << UHPFS_HcInterruptEnable_WDH_Pos)        /**< (UHPFS_HcInterruptEnable) Write Done Head (read/write, write '1' to set) Mask */
#define UHPFS_HcInterruptEnable_WDH(value)    (UHPFS_HcInterruptEnable_WDH_Msk & ((value) << UHPFS_HcInterruptEnable_WDH_Pos))
#define UHPFS_HcInterruptEnable_SF_Pos        _U_(2)                                               /**< (UHPFS_HcInterruptEnable) Start of Frame (read/write, write '1' to set) Position */
#define UHPFS_HcInterruptEnable_SF_Msk        (_U_(0x1) << UHPFS_HcInterruptEnable_SF_Pos)         /**< (UHPFS_HcInterruptEnable) Start of Frame (read/write, write '1' to set) Mask */
#define UHPFS_HcInterruptEnable_SF(value)     (UHPFS_HcInterruptEnable_SF_Msk & ((value) << UHPFS_HcInterruptEnable_SF_Pos))
#define UHPFS_HcInterruptEnable_RD_Pos        _U_(3)                                               /**< (UHPFS_HcInterruptEnable) Resume Detected (read/write, write '1' to set) Position */
#define UHPFS_HcInterruptEnable_RD_Msk        (_U_(0x1) << UHPFS_HcInterruptEnable_RD_Pos)         /**< (UHPFS_HcInterruptEnable) Resume Detected (read/write, write '1' to set) Mask */
#define UHPFS_HcInterruptEnable_RD(value)     (UHPFS_HcInterruptEnable_RD_Msk & ((value) << UHPFS_HcInterruptEnable_RD_Pos))
#define UHPFS_HcInterruptEnable_UE_Pos        _U_(4)                                               /**< (UHPFS_HcInterruptEnable) Unrecoverable Error (read/write, write '1' to set) Position */
#define UHPFS_HcInterruptEnable_UE_Msk        (_U_(0x1) << UHPFS_HcInterruptEnable_UE_Pos)         /**< (UHPFS_HcInterruptEnable) Unrecoverable Error (read/write, write '1' to set) Mask */
#define UHPFS_HcInterruptEnable_UE(value)     (UHPFS_HcInterruptEnable_UE_Msk & ((value) << UHPFS_HcInterruptEnable_UE_Pos))
#define UHPFS_HcInterruptEnable_FNO_Pos       _U_(5)                                               /**< (UHPFS_HcInterruptEnable) Frame Number Overflow (read/write, write '1' to set) Position */
#define UHPFS_HcInterruptEnable_FNO_Msk       (_U_(0x1) << UHPFS_HcInterruptEnable_FNO_Pos)        /**< (UHPFS_HcInterruptEnable) Frame Number Overflow (read/write, write '1' to set) Mask */
#define UHPFS_HcInterruptEnable_FNO(value)    (UHPFS_HcInterruptEnable_FNO_Msk & ((value) << UHPFS_HcInterruptEnable_FNO_Pos))
#define UHPFS_HcInterruptEnable_RHSC_Pos      _U_(6)                                               /**< (UHPFS_HcInterruptEnable) Root Hub Status Change (read/write, write '1' to set) Position */
#define UHPFS_HcInterruptEnable_RHSC_Msk      (_U_(0x1) << UHPFS_HcInterruptEnable_RHSC_Pos)       /**< (UHPFS_HcInterruptEnable) Root Hub Status Change (read/write, write '1' to set) Mask */
#define UHPFS_HcInterruptEnable_RHSC(value)   (UHPFS_HcInterruptEnable_RHSC_Msk & ((value) << UHPFS_HcInterruptEnable_RHSC_Pos))
#define UHPFS_HcInterruptEnable_OC_Pos        _U_(30)                                              /**< (UHPFS_HcInterruptEnable) Ownership Change (read-only) Position */
#define UHPFS_HcInterruptEnable_OC_Msk        (_U_(0x1) << UHPFS_HcInterruptEnable_OC_Pos)         /**< (UHPFS_HcInterruptEnable) Ownership Change (read-only) Mask */
#define UHPFS_HcInterruptEnable_OC(value)     (UHPFS_HcInterruptEnable_OC_Msk & ((value) << UHPFS_HcInterruptEnable_OC_Pos))
#define UHPFS_HcInterruptEnable_MIE_Pos       _U_(31)                                              /**< (UHPFS_HcInterruptEnable) Master Interrupt Enable (read/write, write '1' to set) Position */
#define UHPFS_HcInterruptEnable_MIE_Msk       (_U_(0x1) << UHPFS_HcInterruptEnable_MIE_Pos)        /**< (UHPFS_HcInterruptEnable) Master Interrupt Enable (read/write, write '1' to set) Mask */
#define UHPFS_HcInterruptEnable_MIE(value)    (UHPFS_HcInterruptEnable_MIE_Msk & ((value) << UHPFS_HcInterruptEnable_MIE_Pos))
#define UHPFS_HcInterruptEnable_Msk           _U_(0xC000007F)                                      /**< (UHPFS_HcInterruptEnable) Register Mask  */


/* -------- UHPFS_HcInterruptDisable : (UHPFS Offset: 0x14) (R/W 32) HC Interrupt Disable Register -------- */
#define UHPFS_HcInterruptDisable_SO_Pos       _U_(0)                                               /**< (UHPFS_HcInterruptDisable) Scheduling Overrun (read/write) Position */
#define UHPFS_HcInterruptDisable_SO_Msk       (_U_(0x1) << UHPFS_HcInterruptDisable_SO_Pos)        /**< (UHPFS_HcInterruptDisable) Scheduling Overrun (read/write) Mask */
#define UHPFS_HcInterruptDisable_SO(value)    (UHPFS_HcInterruptDisable_SO_Msk & ((value) << UHPFS_HcInterruptDisable_SO_Pos))
#define UHPFS_HcInterruptDisable_WDH_Pos      _U_(1)                                               /**< (UHPFS_HcInterruptDisable) Write Done Head (read/write) Position */
#define UHPFS_HcInterruptDisable_WDH_Msk      (_U_(0x1) << UHPFS_HcInterruptDisable_WDH_Pos)       /**< (UHPFS_HcInterruptDisable) Write Done Head (read/write) Mask */
#define UHPFS_HcInterruptDisable_WDH(value)   (UHPFS_HcInterruptDisable_WDH_Msk & ((value) << UHPFS_HcInterruptDisable_WDH_Pos))
#define UHPFS_HcInterruptDisable_SF_Pos       _U_(2)                                               /**< (UHPFS_HcInterruptDisable) Start of Frame (read/write) Position */
#define UHPFS_HcInterruptDisable_SF_Msk       (_U_(0x1) << UHPFS_HcInterruptDisable_SF_Pos)        /**< (UHPFS_HcInterruptDisable) Start of Frame (read/write) Mask */
#define UHPFS_HcInterruptDisable_SF(value)    (UHPFS_HcInterruptDisable_SF_Msk & ((value) << UHPFS_HcInterruptDisable_SF_Pos))
#define UHPFS_HcInterruptDisable_RD_Pos       _U_(3)                                               /**< (UHPFS_HcInterruptDisable) Resume Detected (read/write) Position */
#define UHPFS_HcInterruptDisable_RD_Msk       (_U_(0x1) << UHPFS_HcInterruptDisable_RD_Pos)        /**< (UHPFS_HcInterruptDisable) Resume Detected (read/write) Mask */
#define UHPFS_HcInterruptDisable_RD(value)    (UHPFS_HcInterruptDisable_RD_Msk & ((value) << UHPFS_HcInterruptDisable_RD_Pos))
#define UHPFS_HcInterruptDisable_UE_Pos       _U_(4)                                               /**< (UHPFS_HcInterruptDisable) Unrecoverable Error (read/write) Position */
#define UHPFS_HcInterruptDisable_UE_Msk       (_U_(0x1) << UHPFS_HcInterruptDisable_UE_Pos)        /**< (UHPFS_HcInterruptDisable) Unrecoverable Error (read/write) Mask */
#define UHPFS_HcInterruptDisable_UE(value)    (UHPFS_HcInterruptDisable_UE_Msk & ((value) << UHPFS_HcInterruptDisable_UE_Pos))
#define UHPFS_HcInterruptDisable_FNO_Pos      _U_(5)                                               /**< (UHPFS_HcInterruptDisable) Frame Number Overflow (read/write) Position */
#define UHPFS_HcInterruptDisable_FNO_Msk      (_U_(0x1) << UHPFS_HcInterruptDisable_FNO_Pos)       /**< (UHPFS_HcInterruptDisable) Frame Number Overflow (read/write) Mask */
#define UHPFS_HcInterruptDisable_FNO(value)   (UHPFS_HcInterruptDisable_FNO_Msk & ((value) << UHPFS_HcInterruptDisable_FNO_Pos))
#define UHPFS_HcInterruptDisable_RHSC_Pos     _U_(6)                                               /**< (UHPFS_HcInterruptDisable) Root Hub Status Change (read/write) Position */
#define UHPFS_HcInterruptDisable_RHSC_Msk     (_U_(0x1) << UHPFS_HcInterruptDisable_RHSC_Pos)      /**< (UHPFS_HcInterruptDisable) Root Hub Status Change (read/write) Mask */
#define UHPFS_HcInterruptDisable_RHSC(value)  (UHPFS_HcInterruptDisable_RHSC_Msk & ((value) << UHPFS_HcInterruptDisable_RHSC_Pos))
#define UHPFS_HcInterruptDisable_OC_Pos       _U_(30)                                              /**< (UHPFS_HcInterruptDisable) Ownership Change (read-only) Position */
#define UHPFS_HcInterruptDisable_OC_Msk       (_U_(0x1) << UHPFS_HcInterruptDisable_OC_Pos)        /**< (UHPFS_HcInterruptDisable) Ownership Change (read-only) Mask */
#define UHPFS_HcInterruptDisable_OC(value)    (UHPFS_HcInterruptDisable_OC_Msk & ((value) << UHPFS_HcInterruptDisable_OC_Pos))
#define UHPFS_HcInterruptDisable_MIE_Pos      _U_(31)                                              /**< (UHPFS_HcInterruptDisable) Master Interrupt Enable (read/write) Position */
#define UHPFS_HcInterruptDisable_MIE_Msk      (_U_(0x1) << UHPFS_HcInterruptDisable_MIE_Pos)       /**< (UHPFS_HcInterruptDisable) Master Interrupt Enable (read/write) Mask */
#define UHPFS_HcInterruptDisable_MIE(value)   (UHPFS_HcInterruptDisable_MIE_Msk & ((value) << UHPFS_HcInterruptDisable_MIE_Pos))
#define UHPFS_HcInterruptDisable_Msk          _U_(0xC000007F)                                      /**< (UHPFS_HcInterruptDisable) Register Mask  */


/* -------- UHPFS_HcHCCA : (UHPFS Offset: 0x18) (R/W 32) HC HCCA Address Register -------- */
#define UHPFS_HcHCCA_HCCA_Pos                 _U_(8)                                               /**< (UHPFS_HcHCCA) Physical Address of the Beginning of the HCCA Position */
#define UHPFS_HcHCCA_HCCA_Msk                 (_U_(0xFFFFFF) << UHPFS_HcHCCA_HCCA_Pos)             /**< (UHPFS_HcHCCA) Physical Address of the Beginning of the HCCA Mask */
#define UHPFS_HcHCCA_HCCA(value)              (UHPFS_HcHCCA_HCCA_Msk & ((value) << UHPFS_HcHCCA_HCCA_Pos))
#define UHPFS_HcHCCA_Msk                      _U_(0xFFFFFF00)                                      /**< (UHPFS_HcHCCA) Register Mask  */


/* -------- UHPFS_HcPeriodCurrentED : (UHPFS Offset: 0x1C) (R/W 32) HC Current Periodic Register -------- */
#define UHPFS_HcPeriodCurrentED_PCED_Pos      _U_(4)                                               /**< (UHPFS_HcPeriodCurrentED) Physical Address of the Current ED on the Periodic ED list Position */
#define UHPFS_HcPeriodCurrentED_PCED_Msk      (_U_(0xFFFFFFF) << UHPFS_HcPeriodCurrentED_PCED_Pos) /**< (UHPFS_HcPeriodCurrentED) Physical Address of the Current ED on the Periodic ED list Mask */
#define UHPFS_HcPeriodCurrentED_PCED(value)   (UHPFS_HcPeriodCurrentED_PCED_Msk & ((value) << UHPFS_HcPeriodCurrentED_PCED_Pos))
#define UHPFS_HcPeriodCurrentED_Msk           _U_(0xFFFFFFF0)                                      /**< (UHPFS_HcPeriodCurrentED) Register Mask  */


/* -------- UHPFS_HcControlHeadED : (UHPFS Offset: 0x20) (R/W 32) HC Head Control Register -------- */
#define UHPFS_HcControlHeadED_CHED_Pos        _U_(4)                                               /**< (UHPFS_HcControlHeadED) Physical Address of the Head ED on the Control ED list Position */
#define UHPFS_HcControlHeadED_CHED_Msk        (_U_(0xFFFFFFF) << UHPFS_HcControlHeadED_CHED_Pos)   /**< (UHPFS_HcControlHeadED) Physical Address of the Head ED on the Control ED list Mask */
#define UHPFS_HcControlHeadED_CHED(value)     (UHPFS_HcControlHeadED_CHED_Msk & ((value) << UHPFS_HcControlHeadED_CHED_Pos))
#define UHPFS_HcControlHeadED_Msk             _U_(0xFFFFFFF0)                                      /**< (UHPFS_HcControlHeadED) Register Mask  */


/* -------- UHPFS_HcControlCurrentED : (UHPFS Offset: 0x24) (R/W 32) HC Current Control Register -------- */
#define UHPFS_HcControlCurrentED_CCED_Pos     _U_(4)                                               /**< (UHPFS_HcControlCurrentED) Physical Address of the Current ED on the Control ED List Position */
#define UHPFS_HcControlCurrentED_CCED_Msk     (_U_(0xFFFFFFF) << UHPFS_HcControlCurrentED_CCED_Pos) /**< (UHPFS_HcControlCurrentED) Physical Address of the Current ED on the Control ED List Mask */
#define UHPFS_HcControlCurrentED_CCED(value)  (UHPFS_HcControlCurrentED_CCED_Msk & ((value) << UHPFS_HcControlCurrentED_CCED_Pos))
#define UHPFS_HcControlCurrentED_Msk          _U_(0xFFFFFFF0)                                      /**< (UHPFS_HcControlCurrentED) Register Mask  */


/* -------- UHPFS_HcBulkHeadED : (UHPFS Offset: 0x28) (R/W 32) HC Head Bulk Register -------- */
#define UHPFS_HcBulkHeadED_BHED_Pos           _U_(4)                                               /**< (UHPFS_HcBulkHeadED) Physical Address of the Head ED on the Bulk ED List Position */
#define UHPFS_HcBulkHeadED_BHED_Msk           (_U_(0xFFFFFFF) << UHPFS_HcBulkHeadED_BHED_Pos)      /**< (UHPFS_HcBulkHeadED) Physical Address of the Head ED on the Bulk ED List Mask */
#define UHPFS_HcBulkHeadED_BHED(value)        (UHPFS_HcBulkHeadED_BHED_Msk & ((value) << UHPFS_HcBulkHeadED_BHED_Pos))
#define UHPFS_HcBulkHeadED_Msk                _U_(0xFFFFFFF0)                                      /**< (UHPFS_HcBulkHeadED) Register Mask  */


/* -------- UHPFS_HcBulkCurrentED : (UHPFS Offset: 0x2C) (R/W 32) HC Current Bulk Register -------- */
#define UHPFS_HcBulkCurrentED_BCED_Pos        _U_(4)                                               /**< (UHPFS_HcBulkCurrentED) Physical Address of the Current ED on the Bulk ED List Position */
#define UHPFS_HcBulkCurrentED_BCED_Msk        (_U_(0xFFFFFFF) << UHPFS_HcBulkCurrentED_BCED_Pos)   /**< (UHPFS_HcBulkCurrentED) Physical Address of the Current ED on the Bulk ED List Mask */
#define UHPFS_HcBulkCurrentED_BCED(value)     (UHPFS_HcBulkCurrentED_BCED_Msk & ((value) << UHPFS_HcBulkCurrentED_BCED_Pos))
#define UHPFS_HcBulkCurrentED_Msk             _U_(0xFFFFFFF0)                                      /**< (UHPFS_HcBulkCurrentED) Register Mask  */


/* -------- UHPFS_HcDoneHead : (UHPFS Offset: 0x30) (R/W 32) HC Head Done Register -------- */
#define UHPFS_HcDoneHead_DH_Pos               _U_(4)                                               /**< (UHPFS_HcDoneHead) Physical Address of the Last TD that has added to the done queue Position */
#define UHPFS_HcDoneHead_DH_Msk               (_U_(0xFFFFFFF) << UHPFS_HcDoneHead_DH_Pos)          /**< (UHPFS_HcDoneHead) Physical Address of the Last TD that has added to the done queue Mask */
#define UHPFS_HcDoneHead_DH(value)            (UHPFS_HcDoneHead_DH_Msk & ((value) << UHPFS_HcDoneHead_DH_Pos))
#define UHPFS_HcDoneHead_Msk                  _U_(0xFFFFFFF0)                                      /**< (UHPFS_HcDoneHead) Register Mask  */


/* -------- UHPFS_HcFmInterval : (UHPFS Offset: 0x34) (R/W 32) HC Frame Interval Register -------- */
#define UHPFS_HcFmInterval_FRAMEINTERVAL_Pos  _U_(0)                                               /**< (UHPFS_HcFmInterval) Frame Interval Position */
#define UHPFS_HcFmInterval_FRAMEINTERVAL_Msk  (_U_(0x3FFF) << UHPFS_HcFmInterval_FRAMEINTERVAL_Pos) /**< (UHPFS_HcFmInterval) Frame Interval Mask */
#define UHPFS_HcFmInterval_FRAMEINTERVAL(value) (UHPFS_HcFmInterval_FRAMEINTERVAL_Msk & ((value) << UHPFS_HcFmInterval_FRAMEINTERVAL_Pos))
#define UHPFS_HcFmInterval_FSMPS_Pos          _U_(16)                                              /**< (UHPFS_HcFmInterval) Largest Data Packet Position */
#define UHPFS_HcFmInterval_FSMPS_Msk          (_U_(0x7FFF) << UHPFS_HcFmInterval_FSMPS_Pos)        /**< (UHPFS_HcFmInterval) Largest Data Packet Mask */
#define UHPFS_HcFmInterval_FSMPS(value)       (UHPFS_HcFmInterval_FSMPS_Msk & ((value) << UHPFS_HcFmInterval_FSMPS_Pos))
#define UHPFS_HcFmInterval_FIT_Pos            _U_(31)                                              /**< (UHPFS_HcFmInterval) Frame Interval Toggle Position */
#define UHPFS_HcFmInterval_FIT_Msk            (_U_(0x1) << UHPFS_HcFmInterval_FIT_Pos)             /**< (UHPFS_HcFmInterval) Frame Interval Toggle Mask */
#define UHPFS_HcFmInterval_FIT(value)         (UHPFS_HcFmInterval_FIT_Msk & ((value) << UHPFS_HcFmInterval_FIT_Pos))
#define UHPFS_HcFmInterval_Msk                _U_(0xFFFF3FFF)                                      /**< (UHPFS_HcFmInterval) Register Mask  */


/* -------- UHPFS_HcFmRemaining : (UHPFS Offset: 0x38) (R/W 32) HC Frame Remaining Register -------- */
#define UHPFS_HcFmRemaining_FR_Pos            _U_(0)                                               /**< (UHPFS_HcFmRemaining) Frame Remaining Position */
#define UHPFS_HcFmRemaining_FR_Msk            (_U_(0x3FFF) << UHPFS_HcFmRemaining_FR_Pos)          /**< (UHPFS_HcFmRemaining) Frame Remaining Mask */
#define UHPFS_HcFmRemaining_FR(value)         (UHPFS_HcFmRemaining_FR_Msk & ((value) << UHPFS_HcFmRemaining_FR_Pos))
#define UHPFS_HcFmRemaining_FRT_Pos           _U_(31)                                              /**< (UHPFS_HcFmRemaining) Frame Remaining Toggle Position */
#define UHPFS_HcFmRemaining_FRT_Msk           (_U_(0x1) << UHPFS_HcFmRemaining_FRT_Pos)            /**< (UHPFS_HcFmRemaining) Frame Remaining Toggle Mask */
#define UHPFS_HcFmRemaining_FRT(value)        (UHPFS_HcFmRemaining_FRT_Msk & ((value) << UHPFS_HcFmRemaining_FRT_Pos))
#define UHPFS_HcFmRemaining_Msk               _U_(0x80003FFF)                                      /**< (UHPFS_HcFmRemaining) Register Mask  */


/* -------- UHPFS_HcFmNumber : (UHPFS Offset: 0x3C) (R/W 32) HC Frame Number Register -------- */
#define UHPFS_HcFmNumber_FN_Pos               _U_(0)                                               /**< (UHPFS_HcFmNumber) Frame Number Position */
#define UHPFS_HcFmNumber_FN_Msk               (_U_(0xFFFF) << UHPFS_HcFmNumber_FN_Pos)             /**< (UHPFS_HcFmNumber) Frame Number Mask */
#define UHPFS_HcFmNumber_FN(value)            (UHPFS_HcFmNumber_FN_Msk & ((value) << UHPFS_HcFmNumber_FN_Pos))
#define UHPFS_HcFmNumber_Msk                  _U_(0x0000FFFF)                                      /**< (UHPFS_HcFmNumber) Register Mask  */


/* -------- UHPFS_HcPeriodicStart : (UHPFS Offset: 0x40) (R/W 32) HC Periodic Start Register -------- */
#define UHPFS_HcPeriodicStart_PS_Pos          _U_(0)                                               /**< (UHPFS_HcPeriodicStart) Periodic Start Position */
#define UHPFS_HcPeriodicStart_PS_Msk          (_U_(0x3FFF) << UHPFS_HcPeriodicStart_PS_Pos)        /**< (UHPFS_HcPeriodicStart) Periodic Start Mask */
#define UHPFS_HcPeriodicStart_PS(value)       (UHPFS_HcPeriodicStart_PS_Msk & ((value) << UHPFS_HcPeriodicStart_PS_Pos))
#define UHPFS_HcPeriodicStart_Msk             _U_(0x00003FFF)                                      /**< (UHPFS_HcPeriodicStart) Register Mask  */


/* -------- UHPFS_HcLSThreshold : (UHPFS Offset: 0x44) (R/W 32) HC Low-Speed Threshold Register -------- */
#define UHPFS_HcLSThreshold_LST_Pos           _U_(0)                                               /**< (UHPFS_HcLSThreshold) Low-Speed Threshold Position */
#define UHPFS_HcLSThreshold_LST_Msk           (_U_(0x3FFF) << UHPFS_HcLSThreshold_LST_Pos)         /**< (UHPFS_HcLSThreshold) Low-Speed Threshold Mask */
#define UHPFS_HcLSThreshold_LST(value)        (UHPFS_HcLSThreshold_LST_Msk & ((value) << UHPFS_HcLSThreshold_LST_Pos))
#define UHPFS_HcLSThreshold_Msk               _U_(0x00003FFF)                                      /**< (UHPFS_HcLSThreshold) Register Mask  */


/* -------- UHPFS_HcRhDescriptorA : (UHPFS Offset: 0x48) (R/W 32) HC Root Hub A Register -------- */
#define UHPFS_HcRhDescriptorA_NDP_Pos         _U_(0)                                               /**< (UHPFS_HcRhDescriptorA) Number of Downstream Ports (read-only) Position */
#define UHPFS_HcRhDescriptorA_NDP_Msk         (_U_(0xFF) << UHPFS_HcRhDescriptorA_NDP_Pos)         /**< (UHPFS_HcRhDescriptorA) Number of Downstream Ports (read-only) Mask */
#define UHPFS_HcRhDescriptorA_NDP(value)      (UHPFS_HcRhDescriptorA_NDP_Msk & ((value) << UHPFS_HcRhDescriptorA_NDP_Pos))
#define UHPFS_HcRhDescriptorA_PSM_Pos         _U_(8)                                               /**< (UHPFS_HcRhDescriptorA) Power Switching Mode (read/write) Position */
#define UHPFS_HcRhDescriptorA_PSM_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorA_PSM_Pos)          /**< (UHPFS_HcRhDescriptorA) Power Switching Mode (read/write) Mask */
#define UHPFS_HcRhDescriptorA_PSM(value)      (UHPFS_HcRhDescriptorA_PSM_Msk & ((value) << UHPFS_HcRhDescriptorA_PSM_Pos))
#define UHPFS_HcRhDescriptorA_NPS_Pos         _U_(9)                                               /**< (UHPFS_HcRhDescriptorA) No Power Switching (read/write) Position */
#define UHPFS_HcRhDescriptorA_NPS_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorA_NPS_Pos)          /**< (UHPFS_HcRhDescriptorA) No Power Switching (read/write) Mask */
#define UHPFS_HcRhDescriptorA_NPS(value)      (UHPFS_HcRhDescriptorA_NPS_Msk & ((value) << UHPFS_HcRhDescriptorA_NPS_Pos))
#define UHPFS_HcRhDescriptorA_DT_Pos          _U_(10)                                              /**< (UHPFS_HcRhDescriptorA) Device Type (read-only) Position */
#define UHPFS_HcRhDescriptorA_DT_Msk          (_U_(0x1) << UHPFS_HcRhDescriptorA_DT_Pos)           /**< (UHPFS_HcRhDescriptorA) Device Type (read-only) Mask */
#define UHPFS_HcRhDescriptorA_DT(value)       (UHPFS_HcRhDescriptorA_DT_Msk & ((value) << UHPFS_HcRhDescriptorA_DT_Pos))
#define UHPFS_HcRhDescriptorA_OCPM_Pos        _U_(11)                                              /**< (UHPFS_HcRhDescriptorA) Overcurrent Protection Mode (read/write) Position */
#define UHPFS_HcRhDescriptorA_OCPM_Msk        (_U_(0x1) << UHPFS_HcRhDescriptorA_OCPM_Pos)         /**< (UHPFS_HcRhDescriptorA) Overcurrent Protection Mode (read/write) Mask */
#define UHPFS_HcRhDescriptorA_OCPM(value)     (UHPFS_HcRhDescriptorA_OCPM_Msk & ((value) << UHPFS_HcRhDescriptorA_OCPM_Pos))
#define UHPFS_HcRhDescriptorA_NOCP_Pos        _U_(12)                                              /**< (UHPFS_HcRhDescriptorA) No Overcurrent Protection (read/write) Position */
#define UHPFS_HcRhDescriptorA_NOCP_Msk        (_U_(0x1) << UHPFS_HcRhDescriptorA_NOCP_Pos)         /**< (UHPFS_HcRhDescriptorA) No Overcurrent Protection (read/write) Mask */
#define UHPFS_HcRhDescriptorA_NOCP(value)     (UHPFS_HcRhDescriptorA_NOCP_Msk & ((value) << UHPFS_HcRhDescriptorA_NOCP_Pos))
#define UHPFS_HcRhDescriptorA_POTPG_Pos       _U_(24)                                              /**< (UHPFS_HcRhDescriptorA) Power-On to Power-good Time (read/write) Position */
#define UHPFS_HcRhDescriptorA_POTPG_Msk       (_U_(0xFF) << UHPFS_HcRhDescriptorA_POTPG_Pos)       /**< (UHPFS_HcRhDescriptorA) Power-On to Power-good Time (read/write) Mask */
#define UHPFS_HcRhDescriptorA_POTPG(value)    (UHPFS_HcRhDescriptorA_POTPG_Msk & ((value) << UHPFS_HcRhDescriptorA_POTPG_Pos))
#define UHPFS_HcRhDescriptorA_Msk             _U_(0xFF001FFF)                                      /**< (UHPFS_HcRhDescriptorA) Register Mask  */


/* -------- UHPFS_HcRhDescriptorB : (UHPFS Offset: 0x4C) (R/W 32) HC Root Hub B Register -------- */
#define UHPFS_HcRhDescriptorB_DR0_Pos         _U_(0)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR0_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR0_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR0(value)      (UHPFS_HcRhDescriptorB_DR0_Msk & ((value) << UHPFS_HcRhDescriptorB_DR0_Pos))
#define UHPFS_HcRhDescriptorB_DR1_Pos         _U_(1)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Bit for Downstream Port 1 Position */
#define UHPFS_HcRhDescriptorB_DR1_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR1_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Bit for Downstream Port 1 Mask */
#define UHPFS_HcRhDescriptorB_DR1(value)      (UHPFS_HcRhDescriptorB_DR1_Msk & ((value) << UHPFS_HcRhDescriptorB_DR1_Pos))
#define UHPFS_HcRhDescriptorB_DR2_Pos         _U_(2)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Bit for Downstream Port 2 Position */
#define UHPFS_HcRhDescriptorB_DR2_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR2_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Bit for Downstream Port 2 Mask */
#define UHPFS_HcRhDescriptorB_DR2(value)      (UHPFS_HcRhDescriptorB_DR2_Msk & ((value) << UHPFS_HcRhDescriptorB_DR2_Pos))
#define UHPFS_HcRhDescriptorB_DR3_Pos         _U_(3)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Bit for Downstream Port 3 Position */
#define UHPFS_HcRhDescriptorB_DR3_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR3_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Bit for Downstream Port 3 Mask */
#define UHPFS_HcRhDescriptorB_DR3(value)      (UHPFS_HcRhDescriptorB_DR3_Msk & ((value) << UHPFS_HcRhDescriptorB_DR3_Pos))
#define UHPFS_HcRhDescriptorB_DR4_Pos         _U_(4)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR4_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR4_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR4(value)      (UHPFS_HcRhDescriptorB_DR4_Msk & ((value) << UHPFS_HcRhDescriptorB_DR4_Pos))
#define UHPFS_HcRhDescriptorB_DR5_Pos         _U_(5)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR5_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR5_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR5(value)      (UHPFS_HcRhDescriptorB_DR5_Msk & ((value) << UHPFS_HcRhDescriptorB_DR5_Pos))
#define UHPFS_HcRhDescriptorB_DR6_Pos         _U_(6)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR6_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR6_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR6(value)      (UHPFS_HcRhDescriptorB_DR6_Msk & ((value) << UHPFS_HcRhDescriptorB_DR6_Pos))
#define UHPFS_HcRhDescriptorB_DR7_Pos         _U_(7)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR7_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR7_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR7(value)      (UHPFS_HcRhDescriptorB_DR7_Msk & ((value) << UHPFS_HcRhDescriptorB_DR7_Pos))
#define UHPFS_HcRhDescriptorB_DR8_Pos         _U_(8)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR8_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR8_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR8(value)      (UHPFS_HcRhDescriptorB_DR8_Msk & ((value) << UHPFS_HcRhDescriptorB_DR8_Pos))
#define UHPFS_HcRhDescriptorB_DR9_Pos         _U_(9)                                               /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR9_Msk         (_U_(0x1) << UHPFS_HcRhDescriptorB_DR9_Pos)          /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR9(value)      (UHPFS_HcRhDescriptorB_DR9_Msk & ((value) << UHPFS_HcRhDescriptorB_DR9_Pos))
#define UHPFS_HcRhDescriptorB_DR10_Pos        _U_(10)                                              /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR10_Msk        (_U_(0x1) << UHPFS_HcRhDescriptorB_DR10_Pos)         /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR10(value)     (UHPFS_HcRhDescriptorB_DR10_Msk & ((value) << UHPFS_HcRhDescriptorB_DR10_Pos))
#define UHPFS_HcRhDescriptorB_DR11_Pos        _U_(11)                                              /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR11_Msk        (_U_(0x1) << UHPFS_HcRhDescriptorB_DR11_Pos)         /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR11(value)     (UHPFS_HcRhDescriptorB_DR11_Msk & ((value) << UHPFS_HcRhDescriptorB_DR11_Pos))
#define UHPFS_HcRhDescriptorB_DR12_Pos        _U_(12)                                              /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR12_Msk        (_U_(0x1) << UHPFS_HcRhDescriptorB_DR12_Pos)         /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR12(value)     (UHPFS_HcRhDescriptorB_DR12_Msk & ((value) << UHPFS_HcRhDescriptorB_DR12_Pos))
#define UHPFS_HcRhDescriptorB_DR13_Pos        _U_(13)                                              /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR13_Msk        (_U_(0x1) << UHPFS_HcRhDescriptorB_DR13_Pos)         /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR13(value)     (UHPFS_HcRhDescriptorB_DR13_Msk & ((value) << UHPFS_HcRhDescriptorB_DR13_Pos))
#define UHPFS_HcRhDescriptorB_DR14_Pos        _U_(14)                                              /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR14_Msk        (_U_(0x1) << UHPFS_HcRhDescriptorB_DR14_Pos)         /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR14(value)     (UHPFS_HcRhDescriptorB_DR14_Msk & ((value) << UHPFS_HcRhDescriptorB_DR14_Pos))
#define UHPFS_HcRhDescriptorB_DR15_Pos        _U_(15)                                              /**< (UHPFS_HcRhDescriptorB) Device Removable Position */
#define UHPFS_HcRhDescriptorB_DR15_Msk        (_U_(0x1) << UHPFS_HcRhDescriptorB_DR15_Pos)         /**< (UHPFS_HcRhDescriptorB) Device Removable Mask */
#define UHPFS_HcRhDescriptorB_DR15(value)     (UHPFS_HcRhDescriptorB_DR15_Msk & ((value) << UHPFS_HcRhDescriptorB_DR15_Pos))
#define UHPFS_HcRhDescriptorB_PPCM0_Pos       _U_(16)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM0_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM0_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM0(value)    (UHPFS_HcRhDescriptorB_PPCM0_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM0_Pos))
#define UHPFS_HcRhDescriptorB_PPCM1_Pos       _U_(17)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask for Downstream Port 1 Position */
#define UHPFS_HcRhDescriptorB_PPCM1_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM1_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask for Downstream Port 1 Mask */
#define UHPFS_HcRhDescriptorB_PPCM1(value)    (UHPFS_HcRhDescriptorB_PPCM1_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM1_Pos))
#define UHPFS_HcRhDescriptorB_PPCM2_Pos       _U_(18)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask for Downstream Port 2 Position */
#define UHPFS_HcRhDescriptorB_PPCM2_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM2_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask for Downstream Port 2 Mask */
#define UHPFS_HcRhDescriptorB_PPCM2(value)    (UHPFS_HcRhDescriptorB_PPCM2_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM2_Pos))
#define UHPFS_HcRhDescriptorB_PPCM3_Pos       _U_(19)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask for Downstream Port 3 Position */
#define UHPFS_HcRhDescriptorB_PPCM3_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM3_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask for Downstream Port 3 Mask */
#define UHPFS_HcRhDescriptorB_PPCM3(value)    (UHPFS_HcRhDescriptorB_PPCM3_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM3_Pos))
#define UHPFS_HcRhDescriptorB_PPCM4_Pos       _U_(20)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM4_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM4_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM4(value)    (UHPFS_HcRhDescriptorB_PPCM4_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM4_Pos))
#define UHPFS_HcRhDescriptorB_PPCM5_Pos       _U_(21)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM5_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM5_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM5(value)    (UHPFS_HcRhDescriptorB_PPCM5_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM5_Pos))
#define UHPFS_HcRhDescriptorB_PPCM6_Pos       _U_(22)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM6_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM6_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM6(value)    (UHPFS_HcRhDescriptorB_PPCM6_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM6_Pos))
#define UHPFS_HcRhDescriptorB_PPCM7_Pos       _U_(23)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM7_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM7_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM7(value)    (UHPFS_HcRhDescriptorB_PPCM7_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM7_Pos))
#define UHPFS_HcRhDescriptorB_PPCM8_Pos       _U_(24)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM8_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM8_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM8(value)    (UHPFS_HcRhDescriptorB_PPCM8_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM8_Pos))
#define UHPFS_HcRhDescriptorB_PPCM9_Pos       _U_(25)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM9_Msk       (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM9_Pos)        /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM9(value)    (UHPFS_HcRhDescriptorB_PPCM9_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM9_Pos))
#define UHPFS_HcRhDescriptorB_PPCM10_Pos      _U_(26)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM10_Msk      (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM10_Pos)       /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM10(value)   (UHPFS_HcRhDescriptorB_PPCM10_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM10_Pos))
#define UHPFS_HcRhDescriptorB_PPCM11_Pos      _U_(27)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM11_Msk      (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM11_Pos)       /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM11(value)   (UHPFS_HcRhDescriptorB_PPCM11_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM11_Pos))
#define UHPFS_HcRhDescriptorB_PPCM12_Pos      _U_(28)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM12_Msk      (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM12_Pos)       /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM12(value)   (UHPFS_HcRhDescriptorB_PPCM12_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM12_Pos))
#define UHPFS_HcRhDescriptorB_PPCM13_Pos      _U_(29)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM13_Msk      (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM13_Pos)       /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM13(value)   (UHPFS_HcRhDescriptorB_PPCM13_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM13_Pos))
#define UHPFS_HcRhDescriptorB_PPCM14_Pos      _U_(30)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM14_Msk      (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM14_Pos)       /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM14(value)   (UHPFS_HcRhDescriptorB_PPCM14_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM14_Pos))
#define UHPFS_HcRhDescriptorB_PPCM15_Pos      _U_(31)                                              /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Position */
#define UHPFS_HcRhDescriptorB_PPCM15_Msk      (_U_(0x1) << UHPFS_HcRhDescriptorB_PPCM15_Pos)       /**< (UHPFS_HcRhDescriptorB) Port Power Control Mask Mask */
#define UHPFS_HcRhDescriptorB_PPCM15(value)   (UHPFS_HcRhDescriptorB_PPCM15_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM15_Pos))
#define UHPFS_HcRhDescriptorB_Msk             _U_(0xFFFFFFFF)                                      /**< (UHPFS_HcRhDescriptorB) Register Mask  */

#define UHPFS_HcRhDescriptorB_DR_Pos          _U_(0)                                               /**< (UHPFS_HcRhDescriptorB Position) Device Removable */
#define UHPFS_HcRhDescriptorB_DR_Msk          (_U_(0xFFFF) << UHPFS_HcRhDescriptorB_DR_Pos)        /**< (UHPFS_HcRhDescriptorB Mask) DR */
#define UHPFS_HcRhDescriptorB_DR(value)       (UHPFS_HcRhDescriptorB_DR_Msk & ((value) << UHPFS_HcRhDescriptorB_DR_Pos)) 
#define UHPFS_HcRhDescriptorB_PPCM_Pos        _U_(16)                                              /**< (UHPFS_HcRhDescriptorB Position) Port Power Control Mask */
#define UHPFS_HcRhDescriptorB_PPCM_Msk        (_U_(0xFFFF) << UHPFS_HcRhDescriptorB_PPCM_Pos)      /**< (UHPFS_HcRhDescriptorB Mask) PPCM */
#define UHPFS_HcRhDescriptorB_PPCM(value)     (UHPFS_HcRhDescriptorB_PPCM_Msk & ((value) << UHPFS_HcRhDescriptorB_PPCM_Pos)) 

/* -------- UHPFS_HcRhStatus : (UHPFS Offset: 0x50) (R/W 32) HC Root Hub Status Register -------- */
#define UHPFS_HcRhStatus_LPS_Pos              _U_(0)                                               /**< (UHPFS_HcRhStatus) Local Power Status (read/write) Position */
#define UHPFS_HcRhStatus_LPS_Msk              (_U_(0x1) << UHPFS_HcRhStatus_LPS_Pos)               /**< (UHPFS_HcRhStatus) Local Power Status (read/write) Mask */
#define UHPFS_HcRhStatus_LPS(value)           (UHPFS_HcRhStatus_LPS_Msk & ((value) << UHPFS_HcRhStatus_LPS_Pos))
#define UHPFS_HcRhStatus_OCI_Pos              _U_(1)                                               /**< (UHPFS_HcRhStatus) Overcurrent Indicator (read-only) Position */
#define UHPFS_HcRhStatus_OCI_Msk              (_U_(0x1) << UHPFS_HcRhStatus_OCI_Pos)               /**< (UHPFS_HcRhStatus) Overcurrent Indicator (read-only) Mask */
#define UHPFS_HcRhStatus_OCI(value)           (UHPFS_HcRhStatus_OCI_Msk & ((value) << UHPFS_HcRhStatus_OCI_Pos))
#define UHPFS_HcRhStatus_DRWE_Pos             _U_(15)                                              /**< (UHPFS_HcRhStatus) Device Remote Wakeup Enable (read/write) Position */
#define UHPFS_HcRhStatus_DRWE_Msk             (_U_(0x1) << UHPFS_HcRhStatus_DRWE_Pos)              /**< (UHPFS_HcRhStatus) Device Remote Wakeup Enable (read/write) Mask */
#define UHPFS_HcRhStatus_DRWE(value)          (UHPFS_HcRhStatus_DRWE_Msk & ((value) << UHPFS_HcRhStatus_DRWE_Pos))
#define UHPFS_HcRhStatus_LPSC_Pos             _U_(16)                                              /**< (UHPFS_HcRhStatus) Local Power Status Change (read/write) Position */
#define UHPFS_HcRhStatus_LPSC_Msk             (_U_(0x1) << UHPFS_HcRhStatus_LPSC_Pos)              /**< (UHPFS_HcRhStatus) Local Power Status Change (read/write) Mask */
#define UHPFS_HcRhStatus_LPSC(value)          (UHPFS_HcRhStatus_LPSC_Msk & ((value) << UHPFS_HcRhStatus_LPSC_Pos))
#define UHPFS_HcRhStatus_OCIC_Pos             _U_(17)                                              /**< (UHPFS_HcRhStatus) Overcurrent Indication Change (read/write) Position */
#define UHPFS_HcRhStatus_OCIC_Msk             (_U_(0x1) << UHPFS_HcRhStatus_OCIC_Pos)              /**< (UHPFS_HcRhStatus) Overcurrent Indication Change (read/write) Mask */
#define UHPFS_HcRhStatus_OCIC(value)          (UHPFS_HcRhStatus_OCIC_Msk & ((value) << UHPFS_HcRhStatus_OCIC_Pos))
#define UHPFS_HcRhStatus_CRWE_Pos             _U_(31)                                              /**< (UHPFS_HcRhStatus) Clear Remote Wakeup Enable (read/write) Position */
#define UHPFS_HcRhStatus_CRWE_Msk             (_U_(0x1) << UHPFS_HcRhStatus_CRWE_Pos)              /**< (UHPFS_HcRhStatus) Clear Remote Wakeup Enable (read/write) Mask */
#define UHPFS_HcRhStatus_CRWE(value)          (UHPFS_HcRhStatus_CRWE_Msk & ((value) << UHPFS_HcRhStatus_CRWE_Pos))
#define UHPFS_HcRhStatus_Msk                  _U_(0x80038003)                                      /**< (UHPFS_HcRhStatus) Register Mask  */


/* -------- UHPFS_HcRhPortStatus : (UHPFS Offset: 0x54) (R/W 32) HC Port Status and Control Register (ndp = 0) -------- */
#define UHPFS_HcRhPortStatus_CCS_Pos          _U_(0)                                               /**< (UHPFS_HcRhPortStatus) Port Current Connection Status/clear Port Enable (read/write) Position */
#define UHPFS_HcRhPortStatus_CCS_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_CCS_Pos)           /**< (UHPFS_HcRhPortStatus) Port Current Connection Status/clear Port Enable (read/write) Mask */
#define UHPFS_HcRhPortStatus_CCS(value)       (UHPFS_HcRhPortStatus_CCS_Msk & ((value) << UHPFS_HcRhPortStatus_CCS_Pos))
#define UHPFS_HcRhPortStatus_CPE_Pos          _U_(0)                                               /**< (UHPFS_HcRhPortStatus) Port Current Connection Status/clear Port Enable (read/write) Position */
#define UHPFS_HcRhPortStatus_CPE_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_CPE_Pos)           /**< (UHPFS_HcRhPortStatus) Port Current Connection Status/clear Port Enable (read/write) Mask */
#define UHPFS_HcRhPortStatus_CPE(value)       (UHPFS_HcRhPortStatus_CPE_Msk & ((value) << UHPFS_HcRhPortStatus_CPE_Pos))
#define UHPFS_HcRhPortStatus_PES_Pos          _U_(1)                                               /**< (UHPFS_HcRhPortStatus) Port Enable Status/set Port Enable (read/write) Position */
#define UHPFS_HcRhPortStatus_PES_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_PES_Pos)           /**< (UHPFS_HcRhPortStatus) Port Enable Status/set Port Enable (read/write) Mask */
#define UHPFS_HcRhPortStatus_PES(value)       (UHPFS_HcRhPortStatus_PES_Msk & ((value) << UHPFS_HcRhPortStatus_PES_Pos))
#define UHPFS_HcRhPortStatus_SPE_Pos          _U_(1)                                               /**< (UHPFS_HcRhPortStatus) Port Enable Status/set Port Enable (read/write) Position */
#define UHPFS_HcRhPortStatus_SPE_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_SPE_Pos)           /**< (UHPFS_HcRhPortStatus) Port Enable Status/set Port Enable (read/write) Mask */
#define UHPFS_HcRhPortStatus_SPE(value)       (UHPFS_HcRhPortStatus_SPE_Msk & ((value) << UHPFS_HcRhPortStatus_SPE_Pos))
#define UHPFS_HcRhPortStatus_PSS_Pos          _U_(2)                                               /**< (UHPFS_HcRhPortStatus) Port Suspend Status/set Port Suspend (read/write) Position */
#define UHPFS_HcRhPortStatus_PSS_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_PSS_Pos)           /**< (UHPFS_HcRhPortStatus) Port Suspend Status/set Port Suspend (read/write) Mask */
#define UHPFS_HcRhPortStatus_PSS(value)       (UHPFS_HcRhPortStatus_PSS_Msk & ((value) << UHPFS_HcRhPortStatus_PSS_Pos))
#define UHPFS_HcRhPortStatus_SPS_Pos          _U_(2)                                               /**< (UHPFS_HcRhPortStatus) Port Suspend Status/set Port Suspend (read/write) Position */
#define UHPFS_HcRhPortStatus_SPS_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_SPS_Pos)           /**< (UHPFS_HcRhPortStatus) Port Suspend Status/set Port Suspend (read/write) Mask */
#define UHPFS_HcRhPortStatus_SPS(value)       (UHPFS_HcRhPortStatus_SPS_Msk & ((value) << UHPFS_HcRhPortStatus_SPS_Pos))
#define UHPFS_HcRhPortStatus_POCI_Pos         _U_(3)                                               /**< (UHPFS_HcRhPortStatus) Port Overcurrent Indicator/clear Suspend Status (read/write) Position */
#define UHPFS_HcRhPortStatus_POCI_Msk         (_U_(0x1) << UHPFS_HcRhPortStatus_POCI_Pos)          /**< (UHPFS_HcRhPortStatus) Port Overcurrent Indicator/clear Suspend Status (read/write) Mask */
#define UHPFS_HcRhPortStatus_POCI(value)      (UHPFS_HcRhPortStatus_POCI_Msk & ((value) << UHPFS_HcRhPortStatus_POCI_Pos))
#define UHPFS_HcRhPortStatus_CSS_Pos          _U_(3)                                               /**< (UHPFS_HcRhPortStatus) Port Overcurrent Indicator/clear Suspend Status (read/write) Position */
#define UHPFS_HcRhPortStatus_CSS_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_CSS_Pos)           /**< (UHPFS_HcRhPortStatus) Port Overcurrent Indicator/clear Suspend Status (read/write) Mask */
#define UHPFS_HcRhPortStatus_CSS(value)       (UHPFS_HcRhPortStatus_CSS_Msk & ((value) << UHPFS_HcRhPortStatus_CSS_Pos))
#define UHPFS_HcRhPortStatus_PRS_Pos          _U_(4)                                               /**< (UHPFS_HcRhPortStatus) Port Reset Status/set Port Reset (read/write) Position */
#define UHPFS_HcRhPortStatus_PRS_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_PRS_Pos)           /**< (UHPFS_HcRhPortStatus) Port Reset Status/set Port Reset (read/write) Mask */
#define UHPFS_HcRhPortStatus_PRS(value)       (UHPFS_HcRhPortStatus_PRS_Msk & ((value) << UHPFS_HcRhPortStatus_PRS_Pos))
#define UHPFS_HcRhPortStatus_SPR_Pos          _U_(4)                                               /**< (UHPFS_HcRhPortStatus) Port Reset Status/set Port Reset (read/write) Position */
#define UHPFS_HcRhPortStatus_SPR_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_SPR_Pos)           /**< (UHPFS_HcRhPortStatus) Port Reset Status/set Port Reset (read/write) Mask */
#define UHPFS_HcRhPortStatus_SPR(value)       (UHPFS_HcRhPortStatus_SPR_Msk & ((value) << UHPFS_HcRhPortStatus_SPR_Pos))
#define UHPFS_HcRhPortStatus_PPS_Pos          _U_(8)                                               /**< (UHPFS_HcRhPortStatus) Port Power Status/set Port Power (read/write) Position */
#define UHPFS_HcRhPortStatus_PPS_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_PPS_Pos)           /**< (UHPFS_HcRhPortStatus) Port Power Status/set Port Power (read/write) Mask */
#define UHPFS_HcRhPortStatus_PPS(value)       (UHPFS_HcRhPortStatus_PPS_Msk & ((value) << UHPFS_HcRhPortStatus_PPS_Pos))
#define UHPFS_HcRhPortStatus_SPP_Pos          _U_(8)                                               /**< (UHPFS_HcRhPortStatus) Port Power Status/set Port Power (read/write) Position */
#define UHPFS_HcRhPortStatus_SPP_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_SPP_Pos)           /**< (UHPFS_HcRhPortStatus) Port Power Status/set Port Power (read/write) Mask */
#define UHPFS_HcRhPortStatus_SPP(value)       (UHPFS_HcRhPortStatus_SPP_Msk & ((value) << UHPFS_HcRhPortStatus_SPP_Pos))
#define UHPFS_HcRhPortStatus_LSDA_Pos         _U_(9)                                               /**< (UHPFS_HcRhPortStatus) Low-speed Device Attached/clear Port Power (read/write) Position */
#define UHPFS_HcRhPortStatus_LSDA_Msk         (_U_(0x1) << UHPFS_HcRhPortStatus_LSDA_Pos)          /**< (UHPFS_HcRhPortStatus) Low-speed Device Attached/clear Port Power (read/write) Mask */
#define UHPFS_HcRhPortStatus_LSDA(value)      (UHPFS_HcRhPortStatus_LSDA_Msk & ((value) << UHPFS_HcRhPortStatus_LSDA_Pos))
#define UHPFS_HcRhPortStatus_CPP_Pos          _U_(9)                                               /**< (UHPFS_HcRhPortStatus) Low-speed Device Attached/clear Port Power (read/write) Position */
#define UHPFS_HcRhPortStatus_CPP_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_CPP_Pos)           /**< (UHPFS_HcRhPortStatus) Low-speed Device Attached/clear Port Power (read/write) Mask */
#define UHPFS_HcRhPortStatus_CPP(value)       (UHPFS_HcRhPortStatus_CPP_Msk & ((value) << UHPFS_HcRhPortStatus_CPP_Pos))
#define UHPFS_HcRhPortStatus_CSC_Pos          _U_(16)                                              /**< (UHPFS_HcRhPortStatus) Connect Status Change (read/write, write '1' to clear) Position */
#define UHPFS_HcRhPortStatus_CSC_Msk          (_U_(0x1) << UHPFS_HcRhPortStatus_CSC_Pos)           /**< (UHPFS_HcRhPortStatus) Connect Status Change (read/write, write '1' to clear) Mask */
#define UHPFS_HcRhPortStatus_CSC(value)       (UHPFS_HcRhPortStatus_CSC_Msk & ((value) << UHPFS_HcRhPortStatus_CSC_Pos))
#define UHPFS_HcRhPortStatus_PESC_Pos         _U_(17)                                              /**< (UHPFS_HcRhPortStatus) Port Enable Status Change (read/write, write '1' to clear) Position */
#define UHPFS_HcRhPortStatus_PESC_Msk         (_U_(0x1) << UHPFS_HcRhPortStatus_PESC_Pos)          /**< (UHPFS_HcRhPortStatus) Port Enable Status Change (read/write, write '1' to clear) Mask */
#define UHPFS_HcRhPortStatus_PESC(value)      (UHPFS_HcRhPortStatus_PESC_Msk & ((value) << UHPFS_HcRhPortStatus_PESC_Pos))
#define UHPFS_HcRhPortStatus_PSSC_Pos         _U_(18)                                              /**< (UHPFS_HcRhPortStatus) Port Suspend Status Change (read/write, write '1' to clear) Position */
#define UHPFS_HcRhPortStatus_PSSC_Msk         (_U_(0x1) << UHPFS_HcRhPortStatus_PSSC_Pos)          /**< (UHPFS_HcRhPortStatus) Port Suspend Status Change (read/write, write '1' to clear) Mask */
#define UHPFS_HcRhPortStatus_PSSC(value)      (UHPFS_HcRhPortStatus_PSSC_Msk & ((value) << UHPFS_HcRhPortStatus_PSSC_Pos))
#define UHPFS_HcRhPortStatus_OCIC_Pos         _U_(19)                                              /**< (UHPFS_HcRhPortStatus) Overcurrent Indicator Change (read/write) Position */
#define UHPFS_HcRhPortStatus_OCIC_Msk         (_U_(0x1) << UHPFS_HcRhPortStatus_OCIC_Pos)          /**< (UHPFS_HcRhPortStatus) Overcurrent Indicator Change (read/write) Mask */
#define UHPFS_HcRhPortStatus_OCIC(value)      (UHPFS_HcRhPortStatus_OCIC_Msk & ((value) << UHPFS_HcRhPortStatus_OCIC_Pos))
#define UHPFS_HcRhPortStatus_PRSC_Pos         _U_(20)                                              /**< (UHPFS_HcRhPortStatus) Port Reset Status Change (read/write, write '1' to clear) Position */
#define UHPFS_HcRhPortStatus_PRSC_Msk         (_U_(0x1) << UHPFS_HcRhPortStatus_PRSC_Pos)          /**< (UHPFS_HcRhPortStatus) Port Reset Status Change (read/write, write '1' to clear) Mask */
#define UHPFS_HcRhPortStatus_PRSC(value)      (UHPFS_HcRhPortStatus_PRSC_Msk & ((value) << UHPFS_HcRhPortStatus_PRSC_Pos))
#define UHPFS_HcRhPortStatus_Msk              _U_(0x001F031F)                                      /**< (UHPFS_HcRhPortStatus) Register Mask  */


/** \brief UHPFS register offsets definitions */
#define UHPFS_HcRevision_REG_OFST      (0x00)              /**< (UHPFS_HcRevision) OHCI Revision Number Register Offset */
#define UHPFS_HcControl_REG_OFST       (0x04)              /**< (UHPFS_HcControl) HC Operating Mode Register Offset */
#define UHPFS_HcCommandStatus_REG_OFST (0x08)              /**< (UHPFS_HcCommandStatus) HC Command and Status Register Offset */
#define UHPFS_HcInterruptStatus_REG_OFST (0x0C)              /**< (UHPFS_HcInterruptStatus) HC Interrupt and Status Register Offset */
#define UHPFS_HcInterruptEnable_REG_OFST (0x10)              /**< (UHPFS_HcInterruptEnable) HC Interrupt Enable Register Offset */
#define UHPFS_HcInterruptDisable_REG_OFST (0x14)              /**< (UHPFS_HcInterruptDisable) HC Interrupt Disable Register Offset */
#define UHPFS_HcHCCA_REG_OFST          (0x18)              /**< (UHPFS_HcHCCA) HC HCCA Address Register Offset */
#define UHPFS_HcPeriodCurrentED_REG_OFST (0x1C)              /**< (UHPFS_HcPeriodCurrentED) HC Current Periodic Register Offset */
#define UHPFS_HcControlHeadED_REG_OFST (0x20)              /**< (UHPFS_HcControlHeadED) HC Head Control Register Offset */
#define UHPFS_HcControlCurrentED_REG_OFST (0x24)              /**< (UHPFS_HcControlCurrentED) HC Current Control Register Offset */
#define UHPFS_HcBulkHeadED_REG_OFST    (0x28)              /**< (UHPFS_HcBulkHeadED) HC Head Bulk Register Offset */
#define UHPFS_HcBulkCurrentED_REG_OFST (0x2C)              /**< (UHPFS_HcBulkCurrentED) HC Current Bulk Register Offset */
#define UHPFS_HcDoneHead_REG_OFST      (0x30)              /**< (UHPFS_HcDoneHead) HC Head Done Register Offset */
#define UHPFS_HcFmInterval_REG_OFST    (0x34)              /**< (UHPFS_HcFmInterval) HC Frame Interval Register Offset */
#define UHPFS_HcFmRemaining_REG_OFST   (0x38)              /**< (UHPFS_HcFmRemaining) HC Frame Remaining Register Offset */
#define UHPFS_HcFmNumber_REG_OFST      (0x3C)              /**< (UHPFS_HcFmNumber) HC Frame Number Register Offset */
#define UHPFS_HcPeriodicStart_REG_OFST (0x40)              /**< (UHPFS_HcPeriodicStart) HC Periodic Start Register Offset */
#define UHPFS_HcLSThreshold_REG_OFST   (0x44)              /**< (UHPFS_HcLSThreshold) HC Low-Speed Threshold Register Offset */
#define UHPFS_HcRhDescriptorA_REG_OFST (0x48)              /**< (UHPFS_HcRhDescriptorA) HC Root Hub A Register Offset */
#define UHPFS_HcRhDescriptorB_REG_OFST (0x4C)              /**< (UHPFS_HcRhDescriptorB) HC Root Hub B Register Offset */
#define UHPFS_HcRhStatus_REG_OFST      (0x50)              /**< (UHPFS_HcRhStatus) HC Root Hub Status Register Offset */
#define UHPFS_HcRhPortStatus_REG_OFST  (0x54)              /**< (UHPFS_HcRhPortStatus) HC Port Status and Control Register (ndp = 0) Offset */
#define UHPFS_HcRhPortStatus0_REG_OFST (0x54)              /**< (UHPFS_HcRhPortStatus0) HC Port Status and Control Register (ndp = 0) Offset */
#define UHPFS_HcRhPortStatus1_REG_OFST (0x58)              /**< (UHPFS_HcRhPortStatus1) HC Port Status and Control Register (ndp = 0) Offset */
#define UHPFS_HcRhPortStatus2_REG_OFST (0x5C)              /**< (UHPFS_HcRhPortStatus2) HC Port Status and Control Register (ndp = 0) Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UHPFS register API structure */
typedef struct
{
  __I   uint32_t                       UHPFS_HcRevision;   /**< Offset: 0x00 (R/   32) OHCI Revision Number Register */
  __IO  uint32_t                       UHPFS_HcControl;    /**< Offset: 0x04 (R/W  32) HC Operating Mode Register */
  __IO  uint32_t                       UHPFS_HcCommandStatus; /**< Offset: 0x08 (R/W  32) HC Command and Status Register */
  __IO  uint32_t                       UHPFS_HcInterruptStatus; /**< Offset: 0x0C (R/W  32) HC Interrupt and Status Register */
  __IO  uint32_t                       UHPFS_HcInterruptEnable; /**< Offset: 0x10 (R/W  32) HC Interrupt Enable Register */
  __IO  uint32_t                       UHPFS_HcInterruptDisable; /**< Offset: 0x14 (R/W  32) HC Interrupt Disable Register */
  __IO  uint32_t                       UHPFS_HcHCCA;       /**< Offset: 0x18 (R/W  32) HC HCCA Address Register */
  __IO  uint32_t                       UHPFS_HcPeriodCurrentED; /**< Offset: 0x1C (R/W  32) HC Current Periodic Register */
  __IO  uint32_t                       UHPFS_HcControlHeadED; /**< Offset: 0x20 (R/W  32) HC Head Control Register */
  __IO  uint32_t                       UHPFS_HcControlCurrentED; /**< Offset: 0x24 (R/W  32) HC Current Control Register */
  __IO  uint32_t                       UHPFS_HcBulkHeadED; /**< Offset: 0x28 (R/W  32) HC Head Bulk Register */
  __IO  uint32_t                       UHPFS_HcBulkCurrentED; /**< Offset: 0x2C (R/W  32) HC Current Bulk Register */
  __IO  uint32_t                       UHPFS_HcDoneHead;   /**< Offset: 0x30 (R/W  32) HC Head Done Register */
  __IO  uint32_t                       UHPFS_HcFmInterval; /**< Offset: 0x34 (R/W  32) HC Frame Interval Register */
  __IO  uint32_t                       UHPFS_HcFmRemaining; /**< Offset: 0x38 (R/W  32) HC Frame Remaining Register */
  __IO  uint32_t                       UHPFS_HcFmNumber;   /**< Offset: 0x3C (R/W  32) HC Frame Number Register */
  __IO  uint32_t                       UHPFS_HcPeriodicStart; /**< Offset: 0x40 (R/W  32) HC Periodic Start Register */
  __IO  uint32_t                       UHPFS_HcLSThreshold; /**< Offset: 0x44 (R/W  32) HC Low-Speed Threshold Register */
  __IO  uint32_t                       UHPFS_HcRhDescriptorA; /**< Offset: 0x48 (R/W  32) HC Root Hub A Register */
  __IO  uint32_t                       UHPFS_HcRhDescriptorB; /**< Offset: 0x4C (R/W  32) HC Root Hub B Register */
  __IO  uint32_t                       UHPFS_HcRhStatus;   /**< Offset: 0x50 (R/W  32) HC Root Hub Status Register */
  __IO  uint32_t                       UHPFS_HcRhPortStatus[3]; /**< Offset: 0x54 (R/W  32) HC Port Status and Control Register (ndp = 0) */
} uhpfs_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_UHPFS_COMPONENT_H_ */
