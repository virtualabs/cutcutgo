/*
 * Component description for UHP
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

/* file generated from device description version 2021-07-26T14:35:51Z */
#ifndef _SAMG55_UHP_COMPONENT_H_
#define _SAMG55_UHP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR UHP                                          */
/* ************************************************************************** */

/* -------- UHP_HCREVISION : (UHP Offset: 0x00) ( R/ 32) OHCI Revision Number Register -------- */
#define UHP_HCREVISION_REV_Pos                _U_(0)                                               /**< (UHP_HCREVISION) OHCI revision number Position */
#define UHP_HCREVISION_REV_Msk                (_U_(0xFF) << UHP_HCREVISION_REV_Pos)                /**< (UHP_HCREVISION) OHCI revision number Mask */
#define UHP_HCREVISION_REV(value)             (UHP_HCREVISION_REV_Msk & ((value) << UHP_HCREVISION_REV_Pos))
#define UHP_HCREVISION_Msk                    _U_(0x000000FF)                                      /**< (UHP_HCREVISION) Register Mask  */


/* -------- UHP_HCCONTROL : (UHP Offset: 0x04) (R/W 32) HC Operating Mode Register -------- */
#define UHP_HCCONTROL_CBSR_Pos                _U_(0)                                               /**< (UHP_HCCONTROL) Control/bulk service ratio Position */
#define UHP_HCCONTROL_CBSR_Msk                (_U_(0x3) << UHP_HCCONTROL_CBSR_Pos)                 /**< (UHP_HCCONTROL) Control/bulk service ratio Mask */
#define UHP_HCCONTROL_CBSR(value)             (UHP_HCCONTROL_CBSR_Msk & ((value) << UHP_HCCONTROL_CBSR_Pos))
#define UHP_HCCONTROL_PLE_Pos                 _U_(2)                                               /**< (UHP_HCCONTROL) Periodic list enable Position */
#define UHP_HCCONTROL_PLE_Msk                 (_U_(0x1) << UHP_HCCONTROL_PLE_Pos)                  /**< (UHP_HCCONTROL) Periodic list enable Mask */
#define UHP_HCCONTROL_PLE(value)              (UHP_HCCONTROL_PLE_Msk & ((value) << UHP_HCCONTROL_PLE_Pos))
#define UHP_HCCONTROL_IE_Pos                  _U_(3)                                               /**< (UHP_HCCONTROL) Isochronous enable Position */
#define UHP_HCCONTROL_IE_Msk                  (_U_(0x1) << UHP_HCCONTROL_IE_Pos)                   /**< (UHP_HCCONTROL) Isochronous enable Mask */
#define UHP_HCCONTROL_IE(value)               (UHP_HCCONTROL_IE_Msk & ((value) << UHP_HCCONTROL_IE_Pos))
#define UHP_HCCONTROL_CLE_Pos                 _U_(4)                                               /**< (UHP_HCCONTROL) Control list enable Position */
#define UHP_HCCONTROL_CLE_Msk                 (_U_(0x1) << UHP_HCCONTROL_CLE_Pos)                  /**< (UHP_HCCONTROL) Control list enable Mask */
#define UHP_HCCONTROL_CLE(value)              (UHP_HCCONTROL_CLE_Msk & ((value) << UHP_HCCONTROL_CLE_Pos))
#define UHP_HCCONTROL_BLE_Pos                 _U_(5)                                               /**< (UHP_HCCONTROL) Bulk list enable Position */
#define UHP_HCCONTROL_BLE_Msk                 (_U_(0x1) << UHP_HCCONTROL_BLE_Pos)                  /**< (UHP_HCCONTROL) Bulk list enable Mask */
#define UHP_HCCONTROL_BLE(value)              (UHP_HCCONTROL_BLE_Msk & ((value) << UHP_HCCONTROL_BLE_Pos))
#define UHP_HCCONTROL_HCFS_Pos                _U_(6)                                               /**< (UHP_HCCONTROL) Host controller functional state Position */
#define UHP_HCCONTROL_HCFS_Msk                (_U_(0x3) << UHP_HCCONTROL_HCFS_Pos)                 /**< (UHP_HCCONTROL) Host controller functional state Mask */
#define UHP_HCCONTROL_HCFS(value)             (UHP_HCCONTROL_HCFS_Msk & ((value) << UHP_HCCONTROL_HCFS_Pos))
#define UHP_HCCONTROL_IR_Pos                  _U_(8)                                               /**< (UHP_HCCONTROL) Interrupt routing Position */
#define UHP_HCCONTROL_IR_Msk                  (_U_(0x1) << UHP_HCCONTROL_IR_Pos)                   /**< (UHP_HCCONTROL) Interrupt routing Mask */
#define UHP_HCCONTROL_IR(value)               (UHP_HCCONTROL_IR_Msk & ((value) << UHP_HCCONTROL_IR_Pos))
#define UHP_HCCONTROL_RWC_Pos                 _U_(9)                                               /**< (UHP_HCCONTROL) Remote wake-up connected Position */
#define UHP_HCCONTROL_RWC_Msk                 (_U_(0x1) << UHP_HCCONTROL_RWC_Pos)                  /**< (UHP_HCCONTROL) Remote wake-up connected Mask */
#define UHP_HCCONTROL_RWC(value)              (UHP_HCCONTROL_RWC_Msk & ((value) << UHP_HCCONTROL_RWC_Pos))
#define UHP_HCCONTROL_RWE_Pos                 _U_(10)                                              /**< (UHP_HCCONTROL) Remote wake-up enable Position */
#define UHP_HCCONTROL_RWE_Msk                 (_U_(0x1) << UHP_HCCONTROL_RWE_Pos)                  /**< (UHP_HCCONTROL) Remote wake-up enable Mask */
#define UHP_HCCONTROL_RWE(value)              (UHP_HCCONTROL_RWE_Msk & ((value) << UHP_HCCONTROL_RWE_Pos))
#define UHP_HCCONTROL_Msk                     _U_(0x000007FF)                                      /**< (UHP_HCCONTROL) Register Mask  */


/* -------- UHP_HCCOMMANDSTATUS : (UHP Offset: 0x08) (R/W 32) HC Command and Status Register -------- */
#define UHP_HCCOMMANDSTATUS_HCR_Pos           _U_(0)                                               /**< (UHP_HCCOMMANDSTATUS) Host controller reset (read/write) Position */
#define UHP_HCCOMMANDSTATUS_HCR_Msk           (_U_(0x1) << UHP_HCCOMMANDSTATUS_HCR_Pos)            /**< (UHP_HCCOMMANDSTATUS) Host controller reset (read/write) Mask */
#define UHP_HCCOMMANDSTATUS_HCR(value)        (UHP_HCCOMMANDSTATUS_HCR_Msk & ((value) << UHP_HCCOMMANDSTATUS_HCR_Pos))
#define UHP_HCCOMMANDSTATUS_CLF_Pos           _U_(1)                                               /**< (UHP_HCCOMMANDSTATUS) Control list filled (read/write) Position */
#define UHP_HCCOMMANDSTATUS_CLF_Msk           (_U_(0x1) << UHP_HCCOMMANDSTATUS_CLF_Pos)            /**< (UHP_HCCOMMANDSTATUS) Control list filled (read/write) Mask */
#define UHP_HCCOMMANDSTATUS_CLF(value)        (UHP_HCCOMMANDSTATUS_CLF_Msk & ((value) << UHP_HCCOMMANDSTATUS_CLF_Pos))
#define UHP_HCCOMMANDSTATUS_BLF_Pos           _U_(2)                                               /**< (UHP_HCCOMMANDSTATUS) Bulk list filled (read/write) Position */
#define UHP_HCCOMMANDSTATUS_BLF_Msk           (_U_(0x1) << UHP_HCCOMMANDSTATUS_BLF_Pos)            /**< (UHP_HCCOMMANDSTATUS) Bulk list filled (read/write) Mask */
#define UHP_HCCOMMANDSTATUS_BLF(value)        (UHP_HCCOMMANDSTATUS_BLF_Msk & ((value) << UHP_HCCOMMANDSTATUS_BLF_Pos))
#define UHP_HCCOMMANDSTATUS_OCR_Pos           _U_(3)                                               /**< (UHP_HCCOMMANDSTATUS) Ownership change request (read/write) Position */
#define UHP_HCCOMMANDSTATUS_OCR_Msk           (_U_(0x1) << UHP_HCCOMMANDSTATUS_OCR_Pos)            /**< (UHP_HCCOMMANDSTATUS) Ownership change request (read/write) Mask */
#define UHP_HCCOMMANDSTATUS_OCR(value)        (UHP_HCCOMMANDSTATUS_OCR_Msk & ((value) << UHP_HCCOMMANDSTATUS_OCR_Pos))
#define UHP_HCCOMMANDSTATUS_SOC_Pos           _U_(16)                                              /**< (UHP_HCCOMMANDSTATUS) Scheduling overrun count (read-only) Position */
#define UHP_HCCOMMANDSTATUS_SOC_Msk           (_U_(0x3) << UHP_HCCOMMANDSTATUS_SOC_Pos)            /**< (UHP_HCCOMMANDSTATUS) Scheduling overrun count (read-only) Mask */
#define UHP_HCCOMMANDSTATUS_SOC(value)        (UHP_HCCOMMANDSTATUS_SOC_Msk & ((value) << UHP_HCCOMMANDSTATUS_SOC_Pos))
#define UHP_HCCOMMANDSTATUS_Msk               _U_(0x0003000F)                                      /**< (UHP_HCCOMMANDSTATUS) Register Mask  */


/* -------- UHP_HCINTERRUPTSTATUS : (UHP Offset: 0x0C) (R/W 32) HC Interrupt and Status Register -------- */
#define UHP_HCINTERRUPTSTATUS_SO_Pos          _U_(0)                                               /**< (UHP_HCINTERRUPTSTATUS) Scheduling overrun (read/write, write '1' to clear) Position */
#define UHP_HCINTERRUPTSTATUS_SO_Msk          (_U_(0x1) << UHP_HCINTERRUPTSTATUS_SO_Pos)           /**< (UHP_HCINTERRUPTSTATUS) Scheduling overrun (read/write, write '1' to clear) Mask */
#define UHP_HCINTERRUPTSTATUS_SO(value)       (UHP_HCINTERRUPTSTATUS_SO_Msk & ((value) << UHP_HCINTERRUPTSTATUS_SO_Pos))
#define UHP_HCINTERRUPTSTATUS_WDH_Pos         _U_(1)                                               /**< (UHP_HCINTERRUPTSTATUS) Write done head (read/write, write '1' to clear) Position */
#define UHP_HCINTERRUPTSTATUS_WDH_Msk         (_U_(0x1) << UHP_HCINTERRUPTSTATUS_WDH_Pos)          /**< (UHP_HCINTERRUPTSTATUS) Write done head (read/write, write '1' to clear) Mask */
#define UHP_HCINTERRUPTSTATUS_WDH(value)      (UHP_HCINTERRUPTSTATUS_WDH_Msk & ((value) << UHP_HCINTERRUPTSTATUS_WDH_Pos))
#define UHP_HCINTERRUPTSTATUS_SF_Pos          _U_(2)                                               /**< (UHP_HCINTERRUPTSTATUS) Start of frame (read/write, write '1' to clear) Position */
#define UHP_HCINTERRUPTSTATUS_SF_Msk          (_U_(0x1) << UHP_HCINTERRUPTSTATUS_SF_Pos)           /**< (UHP_HCINTERRUPTSTATUS) Start of frame (read/write, write '1' to clear) Mask */
#define UHP_HCINTERRUPTSTATUS_SF(value)       (UHP_HCINTERRUPTSTATUS_SF_Msk & ((value) << UHP_HCINTERRUPTSTATUS_SF_Pos))
#define UHP_HCINTERRUPTSTATUS_RD_Pos          _U_(3)                                               /**< (UHP_HCINTERRUPTSTATUS) Resume detected (read/write, write '1' to clear) Position */
#define UHP_HCINTERRUPTSTATUS_RD_Msk          (_U_(0x1) << UHP_HCINTERRUPTSTATUS_RD_Pos)           /**< (UHP_HCINTERRUPTSTATUS) Resume detected (read/write, write '1' to clear) Mask */
#define UHP_HCINTERRUPTSTATUS_RD(value)       (UHP_HCINTERRUPTSTATUS_RD_Msk & ((value) << UHP_HCINTERRUPTSTATUS_RD_Pos))
#define UHP_HCINTERRUPTSTATUS_UE_Pos          _U_(4)                                               /**< (UHP_HCINTERRUPTSTATUS) Unrecoverable error (read/write, write '1' to clear) Position */
#define UHP_HCINTERRUPTSTATUS_UE_Msk          (_U_(0x1) << UHP_HCINTERRUPTSTATUS_UE_Pos)           /**< (UHP_HCINTERRUPTSTATUS) Unrecoverable error (read/write, write '1' to clear) Mask */
#define UHP_HCINTERRUPTSTATUS_UE(value)       (UHP_HCINTERRUPTSTATUS_UE_Msk & ((value) << UHP_HCINTERRUPTSTATUS_UE_Pos))
#define UHP_HCINTERRUPTSTATUS_FNO_Pos         _U_(5)                                               /**< (UHP_HCINTERRUPTSTATUS) Frame number overflow (read/write, write '1' to clear) Position */
#define UHP_HCINTERRUPTSTATUS_FNO_Msk         (_U_(0x1) << UHP_HCINTERRUPTSTATUS_FNO_Pos)          /**< (UHP_HCINTERRUPTSTATUS) Frame number overflow (read/write, write '1' to clear) Mask */
#define UHP_HCINTERRUPTSTATUS_FNO(value)      (UHP_HCINTERRUPTSTATUS_FNO_Msk & ((value) << UHP_HCINTERRUPTSTATUS_FNO_Pos))
#define UHP_HCINTERRUPTSTATUS_RHSC_Pos        _U_(6)                                               /**< (UHP_HCINTERRUPTSTATUS) Root hub status change (read/write, write '1' to clear) Position */
#define UHP_HCINTERRUPTSTATUS_RHSC_Msk        (_U_(0x1) << UHP_HCINTERRUPTSTATUS_RHSC_Pos)         /**< (UHP_HCINTERRUPTSTATUS) Root hub status change (read/write, write '1' to clear) Mask */
#define UHP_HCINTERRUPTSTATUS_RHSC(value)     (UHP_HCINTERRUPTSTATUS_RHSC_Msk & ((value) << UHP_HCINTERRUPTSTATUS_RHSC_Pos))
#define UHP_HCINTERRUPTSTATUS_OC_Pos          _U_(30)                                              /**< (UHP_HCINTERRUPTSTATUS) Ownership change (read-only) Position */
#define UHP_HCINTERRUPTSTATUS_OC_Msk          (_U_(0x1) << UHP_HCINTERRUPTSTATUS_OC_Pos)           /**< (UHP_HCINTERRUPTSTATUS) Ownership change (read-only) Mask */
#define UHP_HCINTERRUPTSTATUS_OC(value)       (UHP_HCINTERRUPTSTATUS_OC_Msk & ((value) << UHP_HCINTERRUPTSTATUS_OC_Pos))
#define UHP_HCINTERRUPTSTATUS_Msk             _U_(0x4000007F)                                      /**< (UHP_HCINTERRUPTSTATUS) Register Mask  */


/* -------- UHP_HCINTERRUPTENABLE : (UHP Offset: 0x10) (R/W 32) HC Interrupt Enable Register -------- */
#define UHP_HCINTERRUPTENABLE_SO_Pos          _U_(0)                                               /**< (UHP_HCINTERRUPTENABLE) Scheduling overrun (read/write, write '1' to set) Position */
#define UHP_HCINTERRUPTENABLE_SO_Msk          (_U_(0x1) << UHP_HCINTERRUPTENABLE_SO_Pos)           /**< (UHP_HCINTERRUPTENABLE) Scheduling overrun (read/write, write '1' to set) Mask */
#define UHP_HCINTERRUPTENABLE_SO(value)       (UHP_HCINTERRUPTENABLE_SO_Msk & ((value) << UHP_HCINTERRUPTENABLE_SO_Pos))
#define UHP_HCINTERRUPTENABLE_WDH_Pos         _U_(1)                                               /**< (UHP_HCINTERRUPTENABLE) Write done head (read/write, write '1' to set) Position */
#define UHP_HCINTERRUPTENABLE_WDH_Msk         (_U_(0x1) << UHP_HCINTERRUPTENABLE_WDH_Pos)          /**< (UHP_HCINTERRUPTENABLE) Write done head (read/write, write '1' to set) Mask */
#define UHP_HCINTERRUPTENABLE_WDH(value)      (UHP_HCINTERRUPTENABLE_WDH_Msk & ((value) << UHP_HCINTERRUPTENABLE_WDH_Pos))
#define UHP_HCINTERRUPTENABLE_SF_Pos          _U_(2)                                               /**< (UHP_HCINTERRUPTENABLE) Start of frame (read/write, write '1' to set) Position */
#define UHP_HCINTERRUPTENABLE_SF_Msk          (_U_(0x1) << UHP_HCINTERRUPTENABLE_SF_Pos)           /**< (UHP_HCINTERRUPTENABLE) Start of frame (read/write, write '1' to set) Mask */
#define UHP_HCINTERRUPTENABLE_SF(value)       (UHP_HCINTERRUPTENABLE_SF_Msk & ((value) << UHP_HCINTERRUPTENABLE_SF_Pos))
#define UHP_HCINTERRUPTENABLE_RD_Pos          _U_(3)                                               /**< (UHP_HCINTERRUPTENABLE) Resume detected (read/write, write '1' to set) Position */
#define UHP_HCINTERRUPTENABLE_RD_Msk          (_U_(0x1) << UHP_HCINTERRUPTENABLE_RD_Pos)           /**< (UHP_HCINTERRUPTENABLE) Resume detected (read/write, write '1' to set) Mask */
#define UHP_HCINTERRUPTENABLE_RD(value)       (UHP_HCINTERRUPTENABLE_RD_Msk & ((value) << UHP_HCINTERRUPTENABLE_RD_Pos))
#define UHP_HCINTERRUPTENABLE_UE_Pos          _U_(4)                                               /**< (UHP_HCINTERRUPTENABLE) Unrecoverable error (read/write, write '1' to set) Position */
#define UHP_HCINTERRUPTENABLE_UE_Msk          (_U_(0x1) << UHP_HCINTERRUPTENABLE_UE_Pos)           /**< (UHP_HCINTERRUPTENABLE) Unrecoverable error (read/write, write '1' to set) Mask */
#define UHP_HCINTERRUPTENABLE_UE(value)       (UHP_HCINTERRUPTENABLE_UE_Msk & ((value) << UHP_HCINTERRUPTENABLE_UE_Pos))
#define UHP_HCINTERRUPTENABLE_FNO_Pos         _U_(5)                                               /**< (UHP_HCINTERRUPTENABLE) Frame number overflow (read/write, write '1' to set) Position */
#define UHP_HCINTERRUPTENABLE_FNO_Msk         (_U_(0x1) << UHP_HCINTERRUPTENABLE_FNO_Pos)          /**< (UHP_HCINTERRUPTENABLE) Frame number overflow (read/write, write '1' to set) Mask */
#define UHP_HCINTERRUPTENABLE_FNO(value)      (UHP_HCINTERRUPTENABLE_FNO_Msk & ((value) << UHP_HCINTERRUPTENABLE_FNO_Pos))
#define UHP_HCINTERRUPTENABLE_RHSC_Pos        _U_(6)                                               /**< (UHP_HCINTERRUPTENABLE) Root hub status change (read/write, write '1' to set) Position */
#define UHP_HCINTERRUPTENABLE_RHSC_Msk        (_U_(0x1) << UHP_HCINTERRUPTENABLE_RHSC_Pos)         /**< (UHP_HCINTERRUPTENABLE) Root hub status change (read/write, write '1' to set) Mask */
#define UHP_HCINTERRUPTENABLE_RHSC(value)     (UHP_HCINTERRUPTENABLE_RHSC_Msk & ((value) << UHP_HCINTERRUPTENABLE_RHSC_Pos))
#define UHP_HCINTERRUPTENABLE_OC_Pos          _U_(30)                                              /**< (UHP_HCINTERRUPTENABLE) Ownership change (read-only) Position */
#define UHP_HCINTERRUPTENABLE_OC_Msk          (_U_(0x1) << UHP_HCINTERRUPTENABLE_OC_Pos)           /**< (UHP_HCINTERRUPTENABLE) Ownership change (read-only) Mask */
#define UHP_HCINTERRUPTENABLE_OC(value)       (UHP_HCINTERRUPTENABLE_OC_Msk & ((value) << UHP_HCINTERRUPTENABLE_OC_Pos))
#define UHP_HCINTERRUPTENABLE_MIE_Pos         _U_(31)                                              /**< (UHP_HCINTERRUPTENABLE) Master interrupt enable (read/write, write '1' to set) Position */
#define UHP_HCINTERRUPTENABLE_MIE_Msk         (_U_(0x1) << UHP_HCINTERRUPTENABLE_MIE_Pos)          /**< (UHP_HCINTERRUPTENABLE) Master interrupt enable (read/write, write '1' to set) Mask */
#define UHP_HCINTERRUPTENABLE_MIE(value)      (UHP_HCINTERRUPTENABLE_MIE_Msk & ((value) << UHP_HCINTERRUPTENABLE_MIE_Pos))
#define UHP_HCINTERRUPTENABLE_Msk             _U_(0xC000007F)                                      /**< (UHP_HCINTERRUPTENABLE) Register Mask  */


/* -------- UHP_HCINTERRUPTDISABLE : (UHP Offset: 0x14) (R/W 32) HC Interrupt Disable Register -------- */
#define UHP_HCINTERRUPTDISABLE_SO_Pos         _U_(0)                                               /**< (UHP_HCINTERRUPTDISABLE) Scheduling overrun (read/write) Position */
#define UHP_HCINTERRUPTDISABLE_SO_Msk         (_U_(0x1) << UHP_HCINTERRUPTDISABLE_SO_Pos)          /**< (UHP_HCINTERRUPTDISABLE) Scheduling overrun (read/write) Mask */
#define UHP_HCINTERRUPTDISABLE_SO(value)      (UHP_HCINTERRUPTDISABLE_SO_Msk & ((value) << UHP_HCINTERRUPTDISABLE_SO_Pos))
#define UHP_HCINTERRUPTDISABLE_WDH_Pos        _U_(1)                                               /**< (UHP_HCINTERRUPTDISABLE) Write done head (read/write) Position */
#define UHP_HCINTERRUPTDISABLE_WDH_Msk        (_U_(0x1) << UHP_HCINTERRUPTDISABLE_WDH_Pos)         /**< (UHP_HCINTERRUPTDISABLE) Write done head (read/write) Mask */
#define UHP_HCINTERRUPTDISABLE_WDH(value)     (UHP_HCINTERRUPTDISABLE_WDH_Msk & ((value) << UHP_HCINTERRUPTDISABLE_WDH_Pos))
#define UHP_HCINTERRUPTDISABLE_SF_Pos         _U_(2)                                               /**< (UHP_HCINTERRUPTDISABLE) Start of frame (read/write) Position */
#define UHP_HCINTERRUPTDISABLE_SF_Msk         (_U_(0x1) << UHP_HCINTERRUPTDISABLE_SF_Pos)          /**< (UHP_HCINTERRUPTDISABLE) Start of frame (read/write) Mask */
#define UHP_HCINTERRUPTDISABLE_SF(value)      (UHP_HCINTERRUPTDISABLE_SF_Msk & ((value) << UHP_HCINTERRUPTDISABLE_SF_Pos))
#define UHP_HCINTERRUPTDISABLE_RD_Pos         _U_(3)                                               /**< (UHP_HCINTERRUPTDISABLE) Resume detected (read/write) Position */
#define UHP_HCINTERRUPTDISABLE_RD_Msk         (_U_(0x1) << UHP_HCINTERRUPTDISABLE_RD_Pos)          /**< (UHP_HCINTERRUPTDISABLE) Resume detected (read/write) Mask */
#define UHP_HCINTERRUPTDISABLE_RD(value)      (UHP_HCINTERRUPTDISABLE_RD_Msk & ((value) << UHP_HCINTERRUPTDISABLE_RD_Pos))
#define UHP_HCINTERRUPTDISABLE_UE_Pos         _U_(4)                                               /**< (UHP_HCINTERRUPTDISABLE) Unrecoverable error (read/write) Position */
#define UHP_HCINTERRUPTDISABLE_UE_Msk         (_U_(0x1) << UHP_HCINTERRUPTDISABLE_UE_Pos)          /**< (UHP_HCINTERRUPTDISABLE) Unrecoverable error (read/write) Mask */
#define UHP_HCINTERRUPTDISABLE_UE(value)      (UHP_HCINTERRUPTDISABLE_UE_Msk & ((value) << UHP_HCINTERRUPTDISABLE_UE_Pos))
#define UHP_HCINTERRUPTDISABLE_FNO_Pos        _U_(5)                                               /**< (UHP_HCINTERRUPTDISABLE) Frame number overflow (read/write) Position */
#define UHP_HCINTERRUPTDISABLE_FNO_Msk        (_U_(0x1) << UHP_HCINTERRUPTDISABLE_FNO_Pos)         /**< (UHP_HCINTERRUPTDISABLE) Frame number overflow (read/write) Mask */
#define UHP_HCINTERRUPTDISABLE_FNO(value)     (UHP_HCINTERRUPTDISABLE_FNO_Msk & ((value) << UHP_HCINTERRUPTDISABLE_FNO_Pos))
#define UHP_HCINTERRUPTDISABLE_RHSC_Pos       _U_(6)                                               /**< (UHP_HCINTERRUPTDISABLE) Root hub status change (read/write) Position */
#define UHP_HCINTERRUPTDISABLE_RHSC_Msk       (_U_(0x1) << UHP_HCINTERRUPTDISABLE_RHSC_Pos)        /**< (UHP_HCINTERRUPTDISABLE) Root hub status change (read/write) Mask */
#define UHP_HCINTERRUPTDISABLE_RHSC(value)    (UHP_HCINTERRUPTDISABLE_RHSC_Msk & ((value) << UHP_HCINTERRUPTDISABLE_RHSC_Pos))
#define UHP_HCINTERRUPTDISABLE_OC_Pos         _U_(30)                                              /**< (UHP_HCINTERRUPTDISABLE) Ownership change (read-only) Position */
#define UHP_HCINTERRUPTDISABLE_OC_Msk         (_U_(0x1) << UHP_HCINTERRUPTDISABLE_OC_Pos)          /**< (UHP_HCINTERRUPTDISABLE) Ownership change (read-only) Mask */
#define UHP_HCINTERRUPTDISABLE_OC(value)      (UHP_HCINTERRUPTDISABLE_OC_Msk & ((value) << UHP_HCINTERRUPTDISABLE_OC_Pos))
#define UHP_HCINTERRUPTDISABLE_MIE_Pos        _U_(31)                                              /**< (UHP_HCINTERRUPTDISABLE) Master interrupt enable (read/write) Position */
#define UHP_HCINTERRUPTDISABLE_MIE_Msk        (_U_(0x1) << UHP_HCINTERRUPTDISABLE_MIE_Pos)         /**< (UHP_HCINTERRUPTDISABLE) Master interrupt enable (read/write) Mask */
#define UHP_HCINTERRUPTDISABLE_MIE(value)     (UHP_HCINTERRUPTDISABLE_MIE_Msk & ((value) << UHP_HCINTERRUPTDISABLE_MIE_Pos))
#define UHP_HCINTERRUPTDISABLE_Msk            _U_(0xC000007F)                                      /**< (UHP_HCINTERRUPTDISABLE) Register Mask  */


/* -------- UHP_HCHCCA : (UHP Offset: 0x18) (R/W 32) HC HCCA Address Register -------- */
#define UHP_HCHCCA_HCCA_Pos                   _U_(8)                                               /**< (UHP_HCHCCA) Physical address of the beginning of the HCCA Position */
#define UHP_HCHCCA_HCCA_Msk                   (_U_(0xFFFFFF) << UHP_HCHCCA_HCCA_Pos)               /**< (UHP_HCHCCA) Physical address of the beginning of the HCCA Mask */
#define UHP_HCHCCA_HCCA(value)                (UHP_HCHCCA_HCCA_Msk & ((value) << UHP_HCHCCA_HCCA_Pos))
#define UHP_HCHCCA_Msk                        _U_(0xFFFFFF00)                                      /**< (UHP_HCHCCA) Register Mask  */


/* -------- UHP_HCPERIODCURRENTED : (UHP Offset: 0x1C) ( R/ 32) HC Current Periodic Register -------- */
#define UHP_HCPERIODCURRENTED_PCED_Pos        _U_(4)                                               /**< (UHP_HCPERIODCURRENTED) Physical address of the current ED on the periodic ED list Position */
#define UHP_HCPERIODCURRENTED_PCED_Msk        (_U_(0xFFFFFFF) << UHP_HCPERIODCURRENTED_PCED_Pos)   /**< (UHP_HCPERIODCURRENTED) Physical address of the current ED on the periodic ED list Mask */
#define UHP_HCPERIODCURRENTED_PCED(value)     (UHP_HCPERIODCURRENTED_PCED_Msk & ((value) << UHP_HCPERIODCURRENTED_PCED_Pos))
#define UHP_HCPERIODCURRENTED_Msk             _U_(0xFFFFFFF0)                                      /**< (UHP_HCPERIODCURRENTED) Register Mask  */


/* -------- UHP_HCCONTROLHEADED : (UHP Offset: 0x20) (R/W 32) HC Head Control Register -------- */
#define UHP_HCCONTROLHEADED_CHED_Pos          _U_(4)                                               /**< (UHP_HCCONTROLHEADED) Physical address of the head ED on the control ED list Position */
#define UHP_HCCONTROLHEADED_CHED_Msk          (_U_(0xFFFFFFF) << UHP_HCCONTROLHEADED_CHED_Pos)     /**< (UHP_HCCONTROLHEADED) Physical address of the head ED on the control ED list Mask */
#define UHP_HCCONTROLHEADED_CHED(value)       (UHP_HCCONTROLHEADED_CHED_Msk & ((value) << UHP_HCCONTROLHEADED_CHED_Pos))
#define UHP_HCCONTROLHEADED_Msk               _U_(0xFFFFFFF0)                                      /**< (UHP_HCCONTROLHEADED) Register Mask  */


/* -------- UHP_HCCONTROLCURRENTED : (UHP Offset: 0x24) (R/W 32) HC Current Control Register -------- */
#define UHP_HCCONTROLCURRENTED_CCED_Pos       _U_(4)                                               /**< (UHP_HCCONTROLCURRENTED) Physical address of the current ED on the control ED list Position */
#define UHP_HCCONTROLCURRENTED_CCED_Msk       (_U_(0xFFFFFFF) << UHP_HCCONTROLCURRENTED_CCED_Pos)  /**< (UHP_HCCONTROLCURRENTED) Physical address of the current ED on the control ED list Mask */
#define UHP_HCCONTROLCURRENTED_CCED(value)    (UHP_HCCONTROLCURRENTED_CCED_Msk & ((value) << UHP_HCCONTROLCURRENTED_CCED_Pos))
#define UHP_HCCONTROLCURRENTED_Msk            _U_(0xFFFFFFF0)                                      /**< (UHP_HCCONTROLCURRENTED) Register Mask  */


/* -------- UHP_HCBULKHEADED : (UHP Offset: 0x28) (R/W 32) HC Head Bulk Register -------- */
#define UHP_HCBULKHEADED_BHED_Pos             _U_(4)                                               /**< (UHP_HCBULKHEADED) Physical address of the head ED on the bulk ED list Position */
#define UHP_HCBULKHEADED_BHED_Msk             (_U_(0xFFFFFFF) << UHP_HCBULKHEADED_BHED_Pos)        /**< (UHP_HCBULKHEADED) Physical address of the head ED on the bulk ED list Mask */
#define UHP_HCBULKHEADED_BHED(value)          (UHP_HCBULKHEADED_BHED_Msk & ((value) << UHP_HCBULKHEADED_BHED_Pos))
#define UHP_HCBULKHEADED_Msk                  _U_(0xFFFFFFF0)                                      /**< (UHP_HCBULKHEADED) Register Mask  */


/* -------- UHP_HCBULKCURRENTED : (UHP Offset: 0x2C) (R/W 32) HC Current Bulk Register -------- */
#define UHP_HCBULKCURRENTED_BCED_Pos          _U_(4)                                               /**< (UHP_HCBULKCURRENTED) Physical address of the current ED on the bulk ED list Position */
#define UHP_HCBULKCURRENTED_BCED_Msk          (_U_(0xFFFFFFF) << UHP_HCBULKCURRENTED_BCED_Pos)     /**< (UHP_HCBULKCURRENTED) Physical address of the current ED on the bulk ED list Mask */
#define UHP_HCBULKCURRENTED_BCED(value)       (UHP_HCBULKCURRENTED_BCED_Msk & ((value) << UHP_HCBULKCURRENTED_BCED_Pos))
#define UHP_HCBULKCURRENTED_Msk               _U_(0xFFFFFFF0)                                      /**< (UHP_HCBULKCURRENTED) Register Mask  */


/* -------- UHP_HCDONEHEAD : (UHP Offset: 0x30) ( R/ 32) HC Head Done Register -------- */
#define UHP_HCDONEHEAD_DH_Pos                 _U_(4)                                               /**< (UHP_HCDONEHEAD) Physical address of the last TD that has added to the done queue Position */
#define UHP_HCDONEHEAD_DH_Msk                 (_U_(0xFFFFFFF) << UHP_HCDONEHEAD_DH_Pos)            /**< (UHP_HCDONEHEAD) Physical address of the last TD that has added to the done queue Mask */
#define UHP_HCDONEHEAD_DH(value)              (UHP_HCDONEHEAD_DH_Msk & ((value) << UHP_HCDONEHEAD_DH_Pos))
#define UHP_HCDONEHEAD_Msk                    _U_(0xFFFFFFF0)                                      /**< (UHP_HCDONEHEAD) Register Mask  */


/* -------- UHP_HCFMINTERVAL : (UHP Offset: 0x34) (R/W 32) HC Frame Interval Register -------- */
#define UHP_HCFMINTERVAL_FRAMEINTERVAL_Pos    _U_(0)                                               /**< (UHP_HCFMINTERVAL) Frame interval Position */
#define UHP_HCFMINTERVAL_FRAMEINTERVAL_Msk    (_U_(0x3FFF) << UHP_HCFMINTERVAL_FRAMEINTERVAL_Pos)  /**< (UHP_HCFMINTERVAL) Frame interval Mask */
#define UHP_HCFMINTERVAL_FRAMEINTERVAL(value) (UHP_HCFMINTERVAL_FRAMEINTERVAL_Msk & ((value) << UHP_HCFMINTERVAL_FRAMEINTERVAL_Pos))
#define UHP_HCFMINTERVAL_FSMPS_Pos            _U_(16)                                              /**< (UHP_HCFMINTERVAL) Largest data packet Position */
#define UHP_HCFMINTERVAL_FSMPS_Msk            (_U_(0x7FFF) << UHP_HCFMINTERVAL_FSMPS_Pos)          /**< (UHP_HCFMINTERVAL) Largest data packet Mask */
#define UHP_HCFMINTERVAL_FSMPS(value)         (UHP_HCFMINTERVAL_FSMPS_Msk & ((value) << UHP_HCFMINTERVAL_FSMPS_Pos))
#define UHP_HCFMINTERVAL_FIT_Pos              _U_(31)                                              /**< (UHP_HCFMINTERVAL) Frame interval toggle Position */
#define UHP_HCFMINTERVAL_FIT_Msk              (_U_(0x1) << UHP_HCFMINTERVAL_FIT_Pos)               /**< (UHP_HCFMINTERVAL) Frame interval toggle Mask */
#define UHP_HCFMINTERVAL_FIT(value)           (UHP_HCFMINTERVAL_FIT_Msk & ((value) << UHP_HCFMINTERVAL_FIT_Pos))
#define UHP_HCFMINTERVAL_Msk                  _U_(0xFFFF3FFF)                                      /**< (UHP_HCFMINTERVAL) Register Mask  */


/* -------- UHP_HCFMREMAINING : (UHP Offset: 0x38) ( R/ 32) HC Frame Remaining Register -------- */
#define UHP_HCFMREMAINING_FR_Pos              _U_(0)                                               /**< (UHP_HCFMREMAINING) Frame remaining Position */
#define UHP_HCFMREMAINING_FR_Msk              (_U_(0x3FFF) << UHP_HCFMREMAINING_FR_Pos)            /**< (UHP_HCFMREMAINING) Frame remaining Mask */
#define UHP_HCFMREMAINING_FR(value)           (UHP_HCFMREMAINING_FR_Msk & ((value) << UHP_HCFMREMAINING_FR_Pos))
#define UHP_HCFMREMAINING_FRT_Pos             _U_(31)                                              /**< (UHP_HCFMREMAINING) Frame remaining toggle Position */
#define UHP_HCFMREMAINING_FRT_Msk             (_U_(0x1) << UHP_HCFMREMAINING_FRT_Pos)              /**< (UHP_HCFMREMAINING) Frame remaining toggle Mask */
#define UHP_HCFMREMAINING_FRT(value)          (UHP_HCFMREMAINING_FRT_Msk & ((value) << UHP_HCFMREMAINING_FRT_Pos))
#define UHP_HCFMREMAINING_Msk                 _U_(0x80003FFF)                                      /**< (UHP_HCFMREMAINING) Register Mask  */


/* -------- UHP_HCFMNUMBER : (UHP Offset: 0x3C) ( R/ 32) HC Frame Number Register -------- */
#define UHP_HCFMNUMBER_FN_Pos                 _U_(0)                                               /**< (UHP_HCFMNUMBER) Frame number Position */
#define UHP_HCFMNUMBER_FN_Msk                 (_U_(0xFFFF) << UHP_HCFMNUMBER_FN_Pos)               /**< (UHP_HCFMNUMBER) Frame number Mask */
#define UHP_HCFMNUMBER_FN(value)              (UHP_HCFMNUMBER_FN_Msk & ((value) << UHP_HCFMNUMBER_FN_Pos))
#define UHP_HCFMNUMBER_Msk                    _U_(0x0000FFFF)                                      /**< (UHP_HCFMNUMBER) Register Mask  */


/* -------- UHP_HCPERIODICSTART : (UHP Offset: 0x40) (R/W 32) HC Periodic Start Register -------- */
#define UHP_HCPERIODICSTART_PS_Pos            _U_(0)                                               /**< (UHP_HCPERIODICSTART) Periodic start Position */
#define UHP_HCPERIODICSTART_PS_Msk            (_U_(0x3FFF) << UHP_HCPERIODICSTART_PS_Pos)          /**< (UHP_HCPERIODICSTART) Periodic start Mask */
#define UHP_HCPERIODICSTART_PS(value)         (UHP_HCPERIODICSTART_PS_Msk & ((value) << UHP_HCPERIODICSTART_PS_Pos))
#define UHP_HCPERIODICSTART_Msk               _U_(0x00003FFF)                                      /**< (UHP_HCPERIODICSTART) Register Mask  */


/* -------- UHP_HCLSTHRESHOLD : (UHP Offset: 0x44) (R/W 32) HC Low-Speed Threshold Register -------- */
#define UHP_HCLSTHRESHOLD_LST_Pos             _U_(0)                                               /**< (UHP_HCLSTHRESHOLD) Low-speed threshold Position */
#define UHP_HCLSTHRESHOLD_LST_Msk             (_U_(0x3FFF) << UHP_HCLSTHRESHOLD_LST_Pos)           /**< (UHP_HCLSTHRESHOLD) Low-speed threshold Mask */
#define UHP_HCLSTHRESHOLD_LST(value)          (UHP_HCLSTHRESHOLD_LST_Msk & ((value) << UHP_HCLSTHRESHOLD_LST_Pos))
#define UHP_HCLSTHRESHOLD_Msk                 _U_(0x00003FFF)                                      /**< (UHP_HCLSTHRESHOLD) Register Mask  */


/* -------- UHP_HCRHDESCRIPTORA : (UHP Offset: 0x48) (R/W 32) HC Root Hub A Register -------- */
#define UHP_HCRHDESCRIPTORA_NDP_Pos           _U_(0)                                               /**< (UHP_HCRHDESCRIPTORA) Number of downstream ports (read-only) Position */
#define UHP_HCRHDESCRIPTORA_NDP_Msk           (_U_(0xFF) << UHP_HCRHDESCRIPTORA_NDP_Pos)           /**< (UHP_HCRHDESCRIPTORA) Number of downstream ports (read-only) Mask */
#define UHP_HCRHDESCRIPTORA_NDP(value)        (UHP_HCRHDESCRIPTORA_NDP_Msk & ((value) << UHP_HCRHDESCRIPTORA_NDP_Pos))
#define UHP_HCRHDESCRIPTORA_PSM_Pos           _U_(8)                                               /**< (UHP_HCRHDESCRIPTORA) Power switching mode (read/write) Position */
#define UHP_HCRHDESCRIPTORA_PSM_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORA_PSM_Pos)            /**< (UHP_HCRHDESCRIPTORA) Power switching mode (read/write) Mask */
#define UHP_HCRHDESCRIPTORA_PSM(value)        (UHP_HCRHDESCRIPTORA_PSM_Msk & ((value) << UHP_HCRHDESCRIPTORA_PSM_Pos))
#define UHP_HCRHDESCRIPTORA_NPS_Pos           _U_(9)                                               /**< (UHP_HCRHDESCRIPTORA) No power switching (read/write) Position */
#define UHP_HCRHDESCRIPTORA_NPS_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORA_NPS_Pos)            /**< (UHP_HCRHDESCRIPTORA) No power switching (read/write) Mask */
#define UHP_HCRHDESCRIPTORA_NPS(value)        (UHP_HCRHDESCRIPTORA_NPS_Msk & ((value) << UHP_HCRHDESCRIPTORA_NPS_Pos))
#define UHP_HCRHDESCRIPTORA_DT_Pos            _U_(10)                                              /**< (UHP_HCRHDESCRIPTORA) Device type (read-only) Position */
#define UHP_HCRHDESCRIPTORA_DT_Msk            (_U_(0x1) << UHP_HCRHDESCRIPTORA_DT_Pos)             /**< (UHP_HCRHDESCRIPTORA) Device type (read-only) Mask */
#define UHP_HCRHDESCRIPTORA_DT(value)         (UHP_HCRHDESCRIPTORA_DT_Msk & ((value) << UHP_HCRHDESCRIPTORA_DT_Pos))
#define UHP_HCRHDESCRIPTORA_OCPM_Pos          _U_(11)                                              /**< (UHP_HCRHDESCRIPTORA) Overcurrent protection mode (read/write) Position */
#define UHP_HCRHDESCRIPTORA_OCPM_Msk          (_U_(0x1) << UHP_HCRHDESCRIPTORA_OCPM_Pos)           /**< (UHP_HCRHDESCRIPTORA) Overcurrent protection mode (read/write) Mask */
#define UHP_HCRHDESCRIPTORA_OCPM(value)       (UHP_HCRHDESCRIPTORA_OCPM_Msk & ((value) << UHP_HCRHDESCRIPTORA_OCPM_Pos))
#define UHP_HCRHDESCRIPTORA_NOCP_Pos          _U_(12)                                              /**< (UHP_HCRHDESCRIPTORA) No overcurrent protection (read/write) Position */
#define UHP_HCRHDESCRIPTORA_NOCP_Msk          (_U_(0x1) << UHP_HCRHDESCRIPTORA_NOCP_Pos)           /**< (UHP_HCRHDESCRIPTORA) No overcurrent protection (read/write) Mask */
#define UHP_HCRHDESCRIPTORA_NOCP(value)       (UHP_HCRHDESCRIPTORA_NOCP_Msk & ((value) << UHP_HCRHDESCRIPTORA_NOCP_Pos))
#define UHP_HCRHDESCRIPTORA_POTPG_Pos         _U_(24)                                              /**< (UHP_HCRHDESCRIPTORA) Power-on to power-good time (read/write) Position */
#define UHP_HCRHDESCRIPTORA_POTPG_Msk         (_U_(0xFF) << UHP_HCRHDESCRIPTORA_POTPG_Pos)         /**< (UHP_HCRHDESCRIPTORA) Power-on to power-good time (read/write) Mask */
#define UHP_HCRHDESCRIPTORA_POTPG(value)      (UHP_HCRHDESCRIPTORA_POTPG_Msk & ((value) << UHP_HCRHDESCRIPTORA_POTPG_Pos))
#define UHP_HCRHDESCRIPTORA_Msk               _U_(0xFF001FFF)                                      /**< (UHP_HCRHDESCRIPTORA) Register Mask  */


/* -------- UHP_HCRHDESCRIPTORB : (UHP Offset: 0x4C) (R/W 32) HC Root Hub B Register -------- */
#define UHP_HCRHDESCRIPTORB_DR0_Pos           _U_(0)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR0_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR0_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR0(value)        (UHP_HCRHDESCRIPTORB_DR0_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR0_Pos))
#define UHP_HCRHDESCRIPTORB_DR1_Pos           _U_(1)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR1_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR1_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR1(value)        (UHP_HCRHDESCRIPTORB_DR1_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR1_Pos))
#define UHP_HCRHDESCRIPTORB_DR2_Pos           _U_(2)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR2_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR2_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR2(value)        (UHP_HCRHDESCRIPTORB_DR2_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR2_Pos))
#define UHP_HCRHDESCRIPTORB_DR3_Pos           _U_(3)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR3_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR3_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR3(value)        (UHP_HCRHDESCRIPTORB_DR3_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR3_Pos))
#define UHP_HCRHDESCRIPTORB_DR4_Pos           _U_(4)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR4_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR4_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR4(value)        (UHP_HCRHDESCRIPTORB_DR4_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR4_Pos))
#define UHP_HCRHDESCRIPTORB_DR5_Pos           _U_(5)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR5_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR5_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR5(value)        (UHP_HCRHDESCRIPTORB_DR5_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR5_Pos))
#define UHP_HCRHDESCRIPTORB_DR6_Pos           _U_(6)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR6_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR6_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR6(value)        (UHP_HCRHDESCRIPTORB_DR6_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR6_Pos))
#define UHP_HCRHDESCRIPTORB_DR7_Pos           _U_(7)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR7_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR7_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR7(value)        (UHP_HCRHDESCRIPTORB_DR7_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR7_Pos))
#define UHP_HCRHDESCRIPTORB_DR8_Pos           _U_(8)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR8_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR8_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR8(value)        (UHP_HCRHDESCRIPTORB_DR8_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR8_Pos))
#define UHP_HCRHDESCRIPTORB_DR9_Pos           _U_(9)                                               /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR9_Msk           (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR9_Pos)            /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR9(value)        (UHP_HCRHDESCRIPTORB_DR9_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR9_Pos))
#define UHP_HCRHDESCRIPTORB_DR10_Pos          _U_(10)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR10_Msk          (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR10_Pos)           /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR10(value)       (UHP_HCRHDESCRIPTORB_DR10_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR10_Pos))
#define UHP_HCRHDESCRIPTORB_DR11_Pos          _U_(11)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR11_Msk          (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR11_Pos)           /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR11(value)       (UHP_HCRHDESCRIPTORB_DR11_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR11_Pos))
#define UHP_HCRHDESCRIPTORB_DR12_Pos          _U_(12)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR12_Msk          (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR12_Pos)           /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR12(value)       (UHP_HCRHDESCRIPTORB_DR12_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR12_Pos))
#define UHP_HCRHDESCRIPTORB_DR13_Pos          _U_(13)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR13_Msk          (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR13_Pos)           /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR13(value)       (UHP_HCRHDESCRIPTORB_DR13_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR13_Pos))
#define UHP_HCRHDESCRIPTORB_DR14_Pos          _U_(14)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR14_Msk          (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR14_Pos)           /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR14(value)       (UHP_HCRHDESCRIPTORB_DR14_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR14_Pos))
#define UHP_HCRHDESCRIPTORB_DR15_Pos          _U_(15)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_DR15_Msk          (_U_(0x1) << UHP_HCRHDESCRIPTORB_DR15_Pos)           /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_DR15(value)       (UHP_HCRHDESCRIPTORB_DR15_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR15_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM0_Pos         _U_(16)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM0_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM0_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM0(value)      (UHP_HCRHDESCRIPTORB_PPCM0_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM0_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM1_Pos         _U_(17)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM1_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM1_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM1(value)      (UHP_HCRHDESCRIPTORB_PPCM1_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM1_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM2_Pos         _U_(18)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM2_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM2_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM2(value)      (UHP_HCRHDESCRIPTORB_PPCM2_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM2_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM3_Pos         _U_(19)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM3_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM3_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM3(value)      (UHP_HCRHDESCRIPTORB_PPCM3_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM3_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM4_Pos         _U_(20)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM4_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM4_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM4(value)      (UHP_HCRHDESCRIPTORB_PPCM4_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM4_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM5_Pos         _U_(21)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM5_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM5_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM5(value)      (UHP_HCRHDESCRIPTORB_PPCM5_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM5_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM6_Pos         _U_(22)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM6_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM6_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM6(value)      (UHP_HCRHDESCRIPTORB_PPCM6_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM6_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM7_Pos         _U_(23)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM7_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM7_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM7(value)      (UHP_HCRHDESCRIPTORB_PPCM7_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM7_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM8_Pos         _U_(24)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM8_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM8_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM8(value)      (UHP_HCRHDESCRIPTORB_PPCM8_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM8_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM9_Pos         _U_(25)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM9_Msk         (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM9_Pos)          /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM9(value)      (UHP_HCRHDESCRIPTORB_PPCM9_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM9_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM10_Pos        _U_(26)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM10_Msk        (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM10_Pos)         /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM10(value)     (UHP_HCRHDESCRIPTORB_PPCM10_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM10_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM11_Pos        _U_(27)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM11_Msk        (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM11_Pos)         /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM11(value)     (UHP_HCRHDESCRIPTORB_PPCM11_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM11_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM12_Pos        _U_(28)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM12_Msk        (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM12_Pos)         /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM12(value)     (UHP_HCRHDESCRIPTORB_PPCM12_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM12_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM13_Pos        _U_(29)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM13_Msk        (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM13_Pos)         /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM13(value)     (UHP_HCRHDESCRIPTORB_PPCM13_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM13_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM14_Pos        _U_(30)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM14_Msk        (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM14_Pos)         /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM14(value)     (UHP_HCRHDESCRIPTORB_PPCM14_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM14_Pos))
#define UHP_HCRHDESCRIPTORB_PPCM15_Pos        _U_(31)                                              /**< (UHP_HCRHDESCRIPTORB)  Position */
#define UHP_HCRHDESCRIPTORB_PPCM15_Msk        (_U_(0x1) << UHP_HCRHDESCRIPTORB_PPCM15_Pos)         /**< (UHP_HCRHDESCRIPTORB)  Mask */
#define UHP_HCRHDESCRIPTORB_PPCM15(value)     (UHP_HCRHDESCRIPTORB_PPCM15_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM15_Pos))
#define UHP_HCRHDESCRIPTORB_Msk               _U_(0xFFFFFFFF)                                      /**< (UHP_HCRHDESCRIPTORB) Register Mask  */

#define UHP_HCRHDESCRIPTORB_DR_Pos            _U_(0)                                               /**< (UHP_HCRHDESCRIPTORB Position)  */
#define UHP_HCRHDESCRIPTORB_DR_Msk            (_U_(0xFFFF) << UHP_HCRHDESCRIPTORB_DR_Pos)          /**< (UHP_HCRHDESCRIPTORB Mask) DR */
#define UHP_HCRHDESCRIPTORB_DR(value)         (UHP_HCRHDESCRIPTORB_DR_Msk & ((value) << UHP_HCRHDESCRIPTORB_DR_Pos)) 
#define UHP_HCRHDESCRIPTORB_PPCM_Pos          _U_(16)                                              /**< (UHP_HCRHDESCRIPTORB Position)  */
#define UHP_HCRHDESCRIPTORB_PPCM_Msk          (_U_(0xFFFF) << UHP_HCRHDESCRIPTORB_PPCM_Pos)        /**< (UHP_HCRHDESCRIPTORB Mask) PPCM */
#define UHP_HCRHDESCRIPTORB_PPCM(value)       (UHP_HCRHDESCRIPTORB_PPCM_Msk & ((value) << UHP_HCRHDESCRIPTORB_PPCM_Pos)) 

/* -------- UHP_HCRHSTATUS : (UHP Offset: 0x50) (R/W 32) HC Root Hub Status Register -------- */
#define UHP_HCRHSTATUS_LPS_Pos                _U_(0)                                               /**< (UHP_HCRHSTATUS) Local power status (read/write) Position */
#define UHP_HCRHSTATUS_LPS_Msk                (_U_(0x1) << UHP_HCRHSTATUS_LPS_Pos)                 /**< (UHP_HCRHSTATUS) Local power status (read/write) Mask */
#define UHP_HCRHSTATUS_LPS(value)             (UHP_HCRHSTATUS_LPS_Msk & ((value) << UHP_HCRHSTATUS_LPS_Pos))
#define UHP_HCRHSTATUS_OCI_Pos                _U_(1)                                               /**< (UHP_HCRHSTATUS) Overcurrent indicator (read-only) Position */
#define UHP_HCRHSTATUS_OCI_Msk                (_U_(0x1) << UHP_HCRHSTATUS_OCI_Pos)                 /**< (UHP_HCRHSTATUS) Overcurrent indicator (read-only) Mask */
#define UHP_HCRHSTATUS_OCI(value)             (UHP_HCRHSTATUS_OCI_Msk & ((value) << UHP_HCRHSTATUS_OCI_Pos))
#define UHP_HCRHSTATUS_DRWE_Pos               _U_(15)                                              /**< (UHP_HCRHSTATUS) Device remote wake-up enable (read/write) Position */
#define UHP_HCRHSTATUS_DRWE_Msk               (_U_(0x1) << UHP_HCRHSTATUS_DRWE_Pos)                /**< (UHP_HCRHSTATUS) Device remote wake-up enable (read/write) Mask */
#define UHP_HCRHSTATUS_DRWE(value)            (UHP_HCRHSTATUS_DRWE_Msk & ((value) << UHP_HCRHSTATUS_DRWE_Pos))
#define UHP_HCRHSTATUS_LPSC_Pos               _U_(16)                                              /**< (UHP_HCRHSTATUS) Local power status change (read/write) Position */
#define UHP_HCRHSTATUS_LPSC_Msk               (_U_(0x1) << UHP_HCRHSTATUS_LPSC_Pos)                /**< (UHP_HCRHSTATUS) Local power status change (read/write) Mask */
#define UHP_HCRHSTATUS_LPSC(value)            (UHP_HCRHSTATUS_LPSC_Msk & ((value) << UHP_HCRHSTATUS_LPSC_Pos))
#define UHP_HCRHSTATUS_OCIC_Pos               _U_(17)                                              /**< (UHP_HCRHSTATUS) Overcurrent indication change (read/write) Position */
#define UHP_HCRHSTATUS_OCIC_Msk               (_U_(0x1) << UHP_HCRHSTATUS_OCIC_Pos)                /**< (UHP_HCRHSTATUS) Overcurrent indication change (read/write) Mask */
#define UHP_HCRHSTATUS_OCIC(value)            (UHP_HCRHSTATUS_OCIC_Msk & ((value) << UHP_HCRHSTATUS_OCIC_Pos))
#define UHP_HCRHSTATUS_CRWE_Pos               _U_(31)                                              /**< (UHP_HCRHSTATUS) Clear remote wake-up enable (read/write) Position */
#define UHP_HCRHSTATUS_CRWE_Msk               (_U_(0x1) << UHP_HCRHSTATUS_CRWE_Pos)                /**< (UHP_HCRHSTATUS) Clear remote wake-up enable (read/write) Mask */
#define UHP_HCRHSTATUS_CRWE(value)            (UHP_HCRHSTATUS_CRWE_Msk & ((value) << UHP_HCRHSTATUS_CRWE_Pos))
#define UHP_HCRHSTATUS_Msk                    _U_(0x80038003)                                      /**< (UHP_HCRHSTATUS) Register Mask  */


/* -------- UHP_HCRHPORTSTATUS : (UHP Offset: 0x54) (R/W 32) HC Port 1 Status and Control Register 0 -------- */
#define UHP_HCRHPORTSTATUS_CCS_CPE_Pos        _U_(0)                                               /**< (UHP_HCRHPORTSTATUS)  Position */
#define UHP_HCRHPORTSTATUS_CCS_CPE_Msk        (_U_(0x1) << UHP_HCRHPORTSTATUS_CCS_CPE_Pos)         /**< (UHP_HCRHPORTSTATUS)  Mask */
#define UHP_HCRHPORTSTATUS_CCS_CPE(value)     (UHP_HCRHPORTSTATUS_CCS_CPE_Msk & ((value) << UHP_HCRHPORTSTATUS_CCS_CPE_Pos))
#define UHP_HCRHPORTSTATUS_PES_SPE_Pos        _U_(1)                                               /**< (UHP_HCRHPORTSTATUS)  Position */
#define UHP_HCRHPORTSTATUS_PES_SPE_Msk        (_U_(0x1) << UHP_HCRHPORTSTATUS_PES_SPE_Pos)         /**< (UHP_HCRHPORTSTATUS)  Mask */
#define UHP_HCRHPORTSTATUS_PES_SPE(value)     (UHP_HCRHPORTSTATUS_PES_SPE_Msk & ((value) << UHP_HCRHPORTSTATUS_PES_SPE_Pos))
#define UHP_HCRHPORTSTATUS_PSS_SPS_Pos        _U_(2)                                               /**< (UHP_HCRHPORTSTATUS)  Position */
#define UHP_HCRHPORTSTATUS_PSS_SPS_Msk        (_U_(0x1) << UHP_HCRHPORTSTATUS_PSS_SPS_Pos)         /**< (UHP_HCRHPORTSTATUS)  Mask */
#define UHP_HCRHPORTSTATUS_PSS_SPS(value)     (UHP_HCRHPORTSTATUS_PSS_SPS_Msk & ((value) << UHP_HCRHPORTSTATUS_PSS_SPS_Pos))
#define UHP_HCRHPORTSTATUS_POCI_CSS_Pos       _U_(3)                                               /**< (UHP_HCRHPORTSTATUS)  Position */
#define UHP_HCRHPORTSTATUS_POCI_CSS_Msk       (_U_(0x1) << UHP_HCRHPORTSTATUS_POCI_CSS_Pos)        /**< (UHP_HCRHPORTSTATUS)  Mask */
#define UHP_HCRHPORTSTATUS_POCI_CSS(value)    (UHP_HCRHPORTSTATUS_POCI_CSS_Msk & ((value) << UHP_HCRHPORTSTATUS_POCI_CSS_Pos))
#define UHP_HCRHPORTSTATUS_PRS_SPR_Pos        _U_(4)                                               /**< (UHP_HCRHPORTSTATUS)  Position */
#define UHP_HCRHPORTSTATUS_PRS_SPR_Msk        (_U_(0x1) << UHP_HCRHPORTSTATUS_PRS_SPR_Pos)         /**< (UHP_HCRHPORTSTATUS)  Mask */
#define UHP_HCRHPORTSTATUS_PRS_SPR(value)     (UHP_HCRHPORTSTATUS_PRS_SPR_Msk & ((value) << UHP_HCRHPORTSTATUS_PRS_SPR_Pos))
#define UHP_HCRHPORTSTATUS_PPS_SPP_Pos        _U_(8)                                               /**< (UHP_HCRHPORTSTATUS)  Position */
#define UHP_HCRHPORTSTATUS_PPS_SPP_Msk        (_U_(0x1) << UHP_HCRHPORTSTATUS_PPS_SPP_Pos)         /**< (UHP_HCRHPORTSTATUS)  Mask */
#define UHP_HCRHPORTSTATUS_PPS_SPP(value)     (UHP_HCRHPORTSTATUS_PPS_SPP_Msk & ((value) << UHP_HCRHPORTSTATUS_PPS_SPP_Pos))
#define UHP_HCRHPORTSTATUS_LSDA_CPP_Pos       _U_(9)                                               /**< (UHP_HCRHPORTSTATUS)  Position */
#define UHP_HCRHPORTSTATUS_LSDA_CPP_Msk       (_U_(0x1) << UHP_HCRHPORTSTATUS_LSDA_CPP_Pos)        /**< (UHP_HCRHPORTSTATUS)  Mask */
#define UHP_HCRHPORTSTATUS_LSDA_CPP(value)    (UHP_HCRHPORTSTATUS_LSDA_CPP_Msk & ((value) << UHP_HCRHPORTSTATUS_LSDA_CPP_Pos))
#define UHP_HCRHPORTSTATUS_CSC_Pos            _U_(16)                                              /**< (UHP_HCRHPORTSTATUS) Port 1 connect status change (read/write, write '1' to clear) Position */
#define UHP_HCRHPORTSTATUS_CSC_Msk            (_U_(0x1) << UHP_HCRHPORTSTATUS_CSC_Pos)             /**< (UHP_HCRHPORTSTATUS) Port 1 connect status change (read/write, write '1' to clear) Mask */
#define UHP_HCRHPORTSTATUS_CSC(value)         (UHP_HCRHPORTSTATUS_CSC_Msk & ((value) << UHP_HCRHPORTSTATUS_CSC_Pos))
#define UHP_HCRHPORTSTATUS_PESC_Pos           _U_(17)                                              /**< (UHP_HCRHPORTSTATUS) Port 1 enable status change (read/write, write '1' to clear) Position */
#define UHP_HCRHPORTSTATUS_PESC_Msk           (_U_(0x1) << UHP_HCRHPORTSTATUS_PESC_Pos)            /**< (UHP_HCRHPORTSTATUS) Port 1 enable status change (read/write, write '1' to clear) Mask */
#define UHP_HCRHPORTSTATUS_PESC(value)        (UHP_HCRHPORTSTATUS_PESC_Msk & ((value) << UHP_HCRHPORTSTATUS_PESC_Pos))
#define UHP_HCRHPORTSTATUS_PSSC_Pos           _U_(18)                                              /**< (UHP_HCRHPORTSTATUS) Port 1 suspend status change (read/write, write '1' to clear) Position */
#define UHP_HCRHPORTSTATUS_PSSC_Msk           (_U_(0x1) << UHP_HCRHPORTSTATUS_PSSC_Pos)            /**< (UHP_HCRHPORTSTATUS) Port 1 suspend status change (read/write, write '1' to clear) Mask */
#define UHP_HCRHPORTSTATUS_PSSC(value)        (UHP_HCRHPORTSTATUS_PSSC_Msk & ((value) << UHP_HCRHPORTSTATUS_PSSC_Pos))
#define UHP_HCRHPORTSTATUS_OCIC_Pos           _U_(19)                                              /**< (UHP_HCRHPORTSTATUS) Port 1 overcurrent indicator change (read/write) Position */
#define UHP_HCRHPORTSTATUS_OCIC_Msk           (_U_(0x1) << UHP_HCRHPORTSTATUS_OCIC_Pos)            /**< (UHP_HCRHPORTSTATUS) Port 1 overcurrent indicator change (read/write) Mask */
#define UHP_HCRHPORTSTATUS_OCIC(value)        (UHP_HCRHPORTSTATUS_OCIC_Msk & ((value) << UHP_HCRHPORTSTATUS_OCIC_Pos))
#define UHP_HCRHPORTSTATUS_PRSC_Pos           _U_(20)                                              /**< (UHP_HCRHPORTSTATUS) Port 1 reset status change (read/write, write '1' to clear) Position */
#define UHP_HCRHPORTSTATUS_PRSC_Msk           (_U_(0x1) << UHP_HCRHPORTSTATUS_PRSC_Pos)            /**< (UHP_HCRHPORTSTATUS) Port 1 reset status change (read/write, write '1' to clear) Mask */
#define UHP_HCRHPORTSTATUS_PRSC(value)        (UHP_HCRHPORTSTATUS_PRSC_Msk & ((value) << UHP_HCRHPORTSTATUS_PRSC_Pos))
#define UHP_HCRHPORTSTATUS_Msk                _U_(0x001F031F)                                      /**< (UHP_HCRHPORTSTATUS) Register Mask  */


/** \brief UHP register offsets definitions */
#define UHP_HCREVISION_REG_OFST        (0x00)              /**< (UHP_HCREVISION) OHCI Revision Number Register Offset */
#define UHP_HCCONTROL_REG_OFST         (0x04)              /**< (UHP_HCCONTROL) HC Operating Mode Register Offset */
#define UHP_HCCOMMANDSTATUS_REG_OFST   (0x08)              /**< (UHP_HCCOMMANDSTATUS) HC Command and Status Register Offset */
#define UHP_HCINTERRUPTSTATUS_REG_OFST (0x0C)              /**< (UHP_HCINTERRUPTSTATUS) HC Interrupt and Status Register Offset */
#define UHP_HCINTERRUPTENABLE_REG_OFST (0x10)              /**< (UHP_HCINTERRUPTENABLE) HC Interrupt Enable Register Offset */
#define UHP_HCINTERRUPTDISABLE_REG_OFST (0x14)              /**< (UHP_HCINTERRUPTDISABLE) HC Interrupt Disable Register Offset */
#define UHP_HCHCCA_REG_OFST            (0x18)              /**< (UHP_HCHCCA) HC HCCA Address Register Offset */
#define UHP_HCPERIODCURRENTED_REG_OFST (0x1C)              /**< (UHP_HCPERIODCURRENTED) HC Current Periodic Register Offset */
#define UHP_HCCONTROLHEADED_REG_OFST   (0x20)              /**< (UHP_HCCONTROLHEADED) HC Head Control Register Offset */
#define UHP_HCCONTROLCURRENTED_REG_OFST (0x24)              /**< (UHP_HCCONTROLCURRENTED) HC Current Control Register Offset */
#define UHP_HCBULKHEADED_REG_OFST      (0x28)              /**< (UHP_HCBULKHEADED) HC Head Bulk Register Offset */
#define UHP_HCBULKCURRENTED_REG_OFST   (0x2C)              /**< (UHP_HCBULKCURRENTED) HC Current Bulk Register Offset */
#define UHP_HCDONEHEAD_REG_OFST        (0x30)              /**< (UHP_HCDONEHEAD) HC Head Done Register Offset */
#define UHP_HCFMINTERVAL_REG_OFST      (0x34)              /**< (UHP_HCFMINTERVAL) HC Frame Interval Register Offset */
#define UHP_HCFMREMAINING_REG_OFST     (0x38)              /**< (UHP_HCFMREMAINING) HC Frame Remaining Register Offset */
#define UHP_HCFMNUMBER_REG_OFST        (0x3C)              /**< (UHP_HCFMNUMBER) HC Frame Number Register Offset */
#define UHP_HCPERIODICSTART_REG_OFST   (0x40)              /**< (UHP_HCPERIODICSTART) HC Periodic Start Register Offset */
#define UHP_HCLSTHRESHOLD_REG_OFST     (0x44)              /**< (UHP_HCLSTHRESHOLD) HC Low-Speed Threshold Register Offset */
#define UHP_HCRHDESCRIPTORA_REG_OFST   (0x48)              /**< (UHP_HCRHDESCRIPTORA) HC Root Hub A Register Offset */
#define UHP_HCRHDESCRIPTORB_REG_OFST   (0x4C)              /**< (UHP_HCRHDESCRIPTORB) HC Root Hub B Register Offset */
#define UHP_HCRHSTATUS_REG_OFST        (0x50)              /**< (UHP_HCRHSTATUS) HC Root Hub Status Register Offset */
#define UHP_HCRHPORTSTATUS_REG_OFST    (0x54)              /**< (UHP_HCRHPORTSTATUS) HC Port 1 Status and Control Register 0 Offset */
#define UHP_HCRHPORTSTATUS0_REG_OFST   (0x54)              /**< (UHP_HCRHPORTSTATUS0) HC Port 1 Status and Control Register 0 Offset */
#define UHP_HCRHPORTSTATUS1_REG_OFST   (0x58)              /**< (UHP_HCRHPORTSTATUS1) HC Port 1 Status and Control Register 0 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UHP register API structure */
typedef struct
{
  __I   uint32_t                       UHP_HCREVISION;     /**< Offset: 0x00 (R/   32) OHCI Revision Number Register */
  __IO  uint32_t                       UHP_HCCONTROL;      /**< Offset: 0x04 (R/W  32) HC Operating Mode Register */
  __IO  uint32_t                       UHP_HCCOMMANDSTATUS; /**< Offset: 0x08 (R/W  32) HC Command and Status Register */
  __IO  uint32_t                       UHP_HCINTERRUPTSTATUS; /**< Offset: 0x0C (R/W  32) HC Interrupt and Status Register */
  __IO  uint32_t                       UHP_HCINTERRUPTENABLE; /**< Offset: 0x10 (R/W  32) HC Interrupt Enable Register */
  __IO  uint32_t                       UHP_HCINTERRUPTDISABLE; /**< Offset: 0x14 (R/W  32) HC Interrupt Disable Register */
  __IO  uint32_t                       UHP_HCHCCA;         /**< Offset: 0x18 (R/W  32) HC HCCA Address Register */
  __I   uint32_t                       UHP_HCPERIODCURRENTED; /**< Offset: 0x1C (R/   32) HC Current Periodic Register */
  __IO  uint32_t                       UHP_HCCONTROLHEADED; /**< Offset: 0x20 (R/W  32) HC Head Control Register */
  __IO  uint32_t                       UHP_HCCONTROLCURRENTED; /**< Offset: 0x24 (R/W  32) HC Current Control Register */
  __IO  uint32_t                       UHP_HCBULKHEADED;   /**< Offset: 0x28 (R/W  32) HC Head Bulk Register */
  __IO  uint32_t                       UHP_HCBULKCURRENTED; /**< Offset: 0x2C (R/W  32) HC Current Bulk Register */
  __I   uint32_t                       UHP_HCDONEHEAD;     /**< Offset: 0x30 (R/   32) HC Head Done Register */
  __IO  uint32_t                       UHP_HCFMINTERVAL;   /**< Offset: 0x34 (R/W  32) HC Frame Interval Register */
  __I   uint32_t                       UHP_HCFMREMAINING;  /**< Offset: 0x38 (R/   32) HC Frame Remaining Register */
  __I   uint32_t                       UHP_HCFMNUMBER;     /**< Offset: 0x3C (R/   32) HC Frame Number Register */
  __IO  uint32_t                       UHP_HCPERIODICSTART; /**< Offset: 0x40 (R/W  32) HC Periodic Start Register */
  __IO  uint32_t                       UHP_HCLSTHRESHOLD;  /**< Offset: 0x44 (R/W  32) HC Low-Speed Threshold Register */
  __IO  uint32_t                       UHP_HCRHDESCRIPTORA; /**< Offset: 0x48 (R/W  32) HC Root Hub A Register */
  __IO  uint32_t                       UHP_HCRHDESCRIPTORB; /**< Offset: 0x4C (R/W  32) HC Root Hub B Register */
  __IO  uint32_t                       UHP_HCRHSTATUS;     /**< Offset: 0x50 (R/W  32) HC Root Hub Status Register */
  __IO  uint32_t                       UHP_HCRHPORTSTATUS[2]; /**< Offset: 0x54 (R/W  32) HC Port 1 Status and Control Register 0 */
} uhp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_UHP_COMPONENT_H_ */
