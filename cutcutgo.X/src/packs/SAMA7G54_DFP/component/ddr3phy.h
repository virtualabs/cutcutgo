/*
 * Component description for DDR3PHY
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
#ifndef _SAMA7G_DDR3PHY_COMPONENT_H_
#define _SAMA7G_DDR3PHY_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DDR3PHY                                      */
/* ************************************************************************** */

/* -------- DDR3PHY_RIDR : (DDR3PHY Offset: 0x00) ( R/ 32) Revision Identification Register -------- */
#define DDR3PHY_RIDR_PUBMNR_Pos               _U_(0)                                               /**< (DDR3PHY_RIDR) PUB Minor Revision: Indicates minor update of the PUB such as bug fixes. Normally no new features are included. Position */
#define DDR3PHY_RIDR_PUBMNR_Msk               (_U_(0xF) << DDR3PHY_RIDR_PUBMNR_Pos)                /**< (DDR3PHY_RIDR) PUB Minor Revision: Indicates minor update of the PUB such as bug fixes. Normally no new features are included. Mask */
#define DDR3PHY_RIDR_PUBMNR(value)            (DDR3PHY_RIDR_PUBMNR_Msk & ((value) << DDR3PHY_RIDR_PUBMNR_Pos))
#define DDR3PHY_RIDR_PUBMDR_Pos               _U_(4)                                               /**< (DDR3PHY_RIDR) PUB Moderate Revision: Indicates moderate revision of the PUB such as addition of new features. Normally the new version is still compatible with previous versions. Position */
#define DDR3PHY_RIDR_PUBMDR_Msk               (_U_(0xF) << DDR3PHY_RIDR_PUBMDR_Pos)                /**< (DDR3PHY_RIDR) PUB Moderate Revision: Indicates moderate revision of the PUB such as addition of new features. Normally the new version is still compatible with previous versions. Mask */
#define DDR3PHY_RIDR_PUBMDR(value)            (DDR3PHY_RIDR_PUBMDR_Msk & ((value) << DDR3PHY_RIDR_PUBMDR_Pos))
#define DDR3PHY_RIDR_PUBMJR_Pos               _U_(8)                                               /**< (DDR3PHY_RIDR) PUB Major Revision: Indicates major revision of the PUB such addition of the features that make the new version not compatible with previous versions. Position */
#define DDR3PHY_RIDR_PUBMJR_Msk               (_U_(0xF) << DDR3PHY_RIDR_PUBMJR_Pos)                /**< (DDR3PHY_RIDR) PUB Major Revision: Indicates major revision of the PUB such addition of the features that make the new version not compatible with previous versions. Mask */
#define DDR3PHY_RIDR_PUBMJR(value)            (DDR3PHY_RIDR_PUBMJR_Msk & ((value) << DDR3PHY_RIDR_PUBMJR_Pos))
#define DDR3PHY_RIDR_PHYMNR_Pos               _U_(12)                                              /**< (DDR3PHY_RIDR) PHY Minor Revision: Indicates minor update of the PHY such as bug fixes. Normally no new features are included. Position */
#define DDR3PHY_RIDR_PHYMNR_Msk               (_U_(0xF) << DDR3PHY_RIDR_PHYMNR_Pos)                /**< (DDR3PHY_RIDR) PHY Minor Revision: Indicates minor update of the PHY such as bug fixes. Normally no new features are included. Mask */
#define DDR3PHY_RIDR_PHYMNR(value)            (DDR3PHY_RIDR_PHYMNR_Msk & ((value) << DDR3PHY_RIDR_PHYMNR_Pos))
#define DDR3PHY_RIDR_PHYMDR_Pos               _U_(16)                                              /**< (DDR3PHY_RIDR) PHY Moderate Revision: Indicates moderate revision of the PHY such as addition of new features. Normally the new version is still compatible with previous versions. Position */
#define DDR3PHY_RIDR_PHYMDR_Msk               (_U_(0xF) << DDR3PHY_RIDR_PHYMDR_Pos)                /**< (DDR3PHY_RIDR) PHY Moderate Revision: Indicates moderate revision of the PHY such as addition of new features. Normally the new version is still compatible with previous versions. Mask */
#define DDR3PHY_RIDR_PHYMDR(value)            (DDR3PHY_RIDR_PHYMDR_Msk & ((value) << DDR3PHY_RIDR_PHYMDR_Pos))
#define DDR3PHY_RIDR_PHYMJR_Pos               _U_(20)                                              /**< (DDR3PHY_RIDR) PHY Major Revision: Indicates major revision of the PHY such addition of the features that make the new version not compatible with previous versions. Position */
#define DDR3PHY_RIDR_PHYMJR_Msk               (_U_(0xF) << DDR3PHY_RIDR_PHYMJR_Pos)                /**< (DDR3PHY_RIDR) PHY Major Revision: Indicates major revision of the PHY such addition of the features that make the new version not compatible with previous versions. Mask */
#define DDR3PHY_RIDR_PHYMJR(value)            (DDR3PHY_RIDR_PHYMJR_Msk & ((value) << DDR3PHY_RIDR_PHYMJR_Pos))
#define DDR3PHY_RIDR_UDRID_Pos                _U_(24)                                              /**< (DDR3PHY_RIDR) User-Defined Revision ID: General purpose revision identification set by the user. Position */
#define DDR3PHY_RIDR_UDRID_Msk                (_U_(0xFF) << DDR3PHY_RIDR_UDRID_Pos)                /**< (DDR3PHY_RIDR) User-Defined Revision ID: General purpose revision identification set by the user. Mask */
#define DDR3PHY_RIDR_UDRID(value)             (DDR3PHY_RIDR_UDRID_Msk & ((value) << DDR3PHY_RIDR_UDRID_Pos))
#define DDR3PHY_RIDR_Msk                      _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_RIDR) Register Mask  */


/* -------- DDR3PHY_PIR : (DDR3PHY Offset: 0x04) (R/W 32) PHY Initialization Register -------- */
#define DDR3PHY_PIR_INIT_Pos                  _U_(0)                                               /**< (DDR3PHY_PIR) Initialization Trigger: A write of '1' to this bit triggers the DDR system initialization, including PHY initialization, DRAM initialization, and PHY training. The exact initialization steps to be executes are specified in bits 1 to 6 of this register. A bit setting of 1 means the step will be executed as part of the initialization sequence, while a setting of '0' means the step will be bypassed. The initialization trigger bit is self-clearing. Position */
#define DDR3PHY_PIR_INIT_Msk                  (_U_(0x1) << DDR3PHY_PIR_INIT_Pos)                   /**< (DDR3PHY_PIR) Initialization Trigger: A write of '1' to this bit triggers the DDR system initialization, including PHY initialization, DRAM initialization, and PHY training. The exact initialization steps to be executes are specified in bits 1 to 6 of this register. A bit setting of 1 means the step will be executed as part of the initialization sequence, while a setting of '0' means the step will be bypassed. The initialization trigger bit is self-clearing. Mask */
#define DDR3PHY_PIR_INIT(value)               (DDR3PHY_PIR_INIT_Msk & ((value) << DDR3PHY_PIR_INIT_Pos))
#define DDR3PHY_PIR_DLLSRST_Pos               _U_(1)                                               /**< (DDR3PHY_PIR) DLL Soft Rest: Soft resets all PHY DLLs by driving the DLL soft reset pin. Position */
#define DDR3PHY_PIR_DLLSRST_Msk               (_U_(0x1) << DDR3PHY_PIR_DLLSRST_Pos)                /**< (DDR3PHY_PIR) DLL Soft Rest: Soft resets all PHY DLLs by driving the DLL soft reset pin. Mask */
#define DDR3PHY_PIR_DLLSRST(value)            (DDR3PHY_PIR_DLLSRST_Msk & ((value) << DDR3PHY_PIR_DLLSRST_Pos))
#define DDR3PHY_PIR_DLLLOCK_Pos               _U_(2)                                               /**< (DDR3PHY_PIR) DLL Lock: Waits for the PHY DLLs to lock. Position */
#define DDR3PHY_PIR_DLLLOCK_Msk               (_U_(0x1) << DDR3PHY_PIR_DLLLOCK_Pos)                /**< (DDR3PHY_PIR) DLL Lock: Waits for the PHY DLLs to lock. Mask */
#define DDR3PHY_PIR_DLLLOCK(value)            (DDR3PHY_PIR_DLLLOCK_Msk & ((value) << DDR3PHY_PIR_DLLLOCK_Pos))
#define DDR3PHY_PIR_ZCAL_Pos                  _U_(3)                                               /**< (DDR3PHY_PIR) Impedance Calibrate: Performs PHY impedance calibration. Position */
#define DDR3PHY_PIR_ZCAL_Msk                  (_U_(0x1) << DDR3PHY_PIR_ZCAL_Pos)                   /**< (DDR3PHY_PIR) Impedance Calibrate: Performs PHY impedance calibration. Mask */
#define DDR3PHY_PIR_ZCAL(value)               (DDR3PHY_PIR_ZCAL_Msk & ((value) << DDR3PHY_PIR_ZCAL_Pos))
#define DDR3PHY_PIR_ITMSRST_Pos               _U_(4)                                               /**< (DDR3PHY_PIR) Interface Timing Module Soft Reset: Soft resets the interface timing modules for the data and data strobes, i.e., it asserts the ITM soft reset (srstb) signal. Position */
#define DDR3PHY_PIR_ITMSRST_Msk               (_U_(0x1) << DDR3PHY_PIR_ITMSRST_Pos)                /**< (DDR3PHY_PIR) Interface Timing Module Soft Reset: Soft resets the interface timing modules for the data and data strobes, i.e., it asserts the ITM soft reset (srstb) signal. Mask */
#define DDR3PHY_PIR_ITMSRST(value)            (DDR3PHY_PIR_ITMSRST_Msk & ((value) << DDR3PHY_PIR_ITMSRST_Pos))
#define DDR3PHY_PIR_DRAMRST_Pos               _U_(5)                                               /**< (DDR3PHY_PIR) DRAM Reset (DDR3 Only): Issues a reset to the DRAM (by driving the DRAM reset pin low) and wait 200us. This can be triggered in isolation or with the full DRAM initialization (DRAMINIT). For the latter case, the reset is issued and 200us is waited before starting the full initialization sequence. Position */
#define DDR3PHY_PIR_DRAMRST_Msk               (_U_(0x1) << DDR3PHY_PIR_DRAMRST_Pos)                /**< (DDR3PHY_PIR) DRAM Reset (DDR3 Only): Issues a reset to the DRAM (by driving the DRAM reset pin low) and wait 200us. This can be triggered in isolation or with the full DRAM initialization (DRAMINIT). For the latter case, the reset is issued and 200us is waited before starting the full initialization sequence. Mask */
#define DDR3PHY_PIR_DRAMRST(value)            (DDR3PHY_PIR_DRAMRST_Msk & ((value) << DDR3PHY_PIR_DRAMRST_Pos))
#define DDR3PHY_PIR_DRAMINIT_Pos              _U_(6)                                               /**< (DDR3PHY_PIR) DRAM Initialization: Executes the DRAM initialization sequence. Position */
#define DDR3PHY_PIR_DRAMINIT_Msk              (_U_(0x1) << DDR3PHY_PIR_DRAMINIT_Pos)               /**< (DDR3PHY_PIR) DRAM Initialization: Executes the DRAM initialization sequence. Mask */
#define DDR3PHY_PIR_DRAMINIT(value)           (DDR3PHY_PIR_DRAMINIT_Msk & ((value) << DDR3PHY_PIR_DRAMINIT_Pos))
#define DDR3PHY_PIR_QSTRN_Pos                 _U_(7)                                               /**< (DDR3PHY_PIR) Read DQS Training: Executes a PUBL training routine to determine the optimum position of the read data DQS strobe for maximum system timing margins. Position */
#define DDR3PHY_PIR_QSTRN_Msk                 (_U_(0x1) << DDR3PHY_PIR_QSTRN_Pos)                  /**< (DDR3PHY_PIR) Read DQS Training: Executes a PUBL training routine to determine the optimum position of the read data DQS strobe for maximum system timing margins. Mask */
#define DDR3PHY_PIR_QSTRN(value)              (DDR3PHY_PIR_QSTRN_Msk & ((value) << DDR3PHY_PIR_QSTRN_Pos))
#define DDR3PHY_PIR_RVTRN_Pos                 _U_(8)                                               /**< (DDR3PHY_PIR) Read DQS gate training (QSTRN) and RV training (RVTRN) should normally be run together. It is expected RVTRN is normally be set whenever PIR.QSTRN is set. Position */
#define DDR3PHY_PIR_RVTRN_Msk                 (_U_(0x1) << DDR3PHY_PIR_RVTRN_Pos)                  /**< (DDR3PHY_PIR) Read DQS gate training (QSTRN) and RV training (RVTRN) should normally be run together. It is expected RVTRN is normally be set whenever PIR.QSTRN is set. Mask */
#define DDR3PHY_PIR_RVTRN(value)              (DDR3PHY_PIR_RVTRN_Msk & ((value) << DDR3PHY_PIR_RVTRN_Pos))
#define DDR3PHY_PIR_ICPC_Pos                  _U_(16)                                              /**< (DDR3PHY_PIR) Initialization Complete Pin Configuration: Specifies how the DFI 2.1 initialization complete output pin should be used to indicate the status of initialization. Position */
#define DDR3PHY_PIR_ICPC_Msk                  (_U_(0x1) << DDR3PHY_PIR_ICPC_Pos)                   /**< (DDR3PHY_PIR) Initialization Complete Pin Configuration: Specifies how the DFI 2.1 initialization complete output pin should be used to indicate the status of initialization. Mask */
#define DDR3PHY_PIR_ICPC(value)               (DDR3PHY_PIR_ICPC_Msk & ((value) << DDR3PHY_PIR_ICPC_Pos))
#define DDR3PHY_PIR_DLLBYP_Pos                _U_(17)                                              /**< (DDR3PHY_PIR) DLL Bypass: A setting of 1 on this bit will put all PHY DLLs in bypass mode. A bypassed DLL is also powered down (disabled). Position */
#define DDR3PHY_PIR_DLLBYP_Msk                (_U_(0x1) << DDR3PHY_PIR_DLLBYP_Pos)                 /**< (DDR3PHY_PIR) DLL Bypass: A setting of 1 on this bit will put all PHY DLLs in bypass mode. A bypassed DLL is also powered down (disabled). Mask */
#define DDR3PHY_PIR_DLLBYP(value)             (DDR3PHY_PIR_DLLBYP_Msk & ((value) << DDR3PHY_PIR_DLLBYP_Pos))
#define DDR3PHY_PIR_CTLDINIT_Pos              _U_(18)                                              /**< (DDR3PHY_PIR) Controller DRAM Initialization: Indicates if set that DRAM initialization will be performed by the controller. Otherwise if not set it indicates that DRAM initialization will be performed using the built-in initialization sequence or using software through the configuration port. Position */
#define DDR3PHY_PIR_CTLDINIT_Msk              (_U_(0x1) << DDR3PHY_PIR_CTLDINIT_Pos)               /**< (DDR3PHY_PIR) Controller DRAM Initialization: Indicates if set that DRAM initialization will be performed by the controller. Otherwise if not set it indicates that DRAM initialization will be performed using the built-in initialization sequence or using software through the configuration port. Mask */
#define DDR3PHY_PIR_CTLDINIT(value)           (DDR3PHY_PIR_CTLDINIT_Msk & ((value) << DDR3PHY_PIR_CTLDINIT_Pos))
#define DDR3PHY_PIR_CLRSR_Pos                 _U_(28)                                              /**< (DDR3PHY_PIR) Clear Status Registers Position */
#define DDR3PHY_PIR_CLRSR_Msk                 (_U_(0x1) << DDR3PHY_PIR_CLRSR_Pos)                  /**< (DDR3PHY_PIR) Clear Status Registers Mask */
#define DDR3PHY_PIR_CLRSR(value)              (DDR3PHY_PIR_CLRSR_Msk & ((value) << DDR3PHY_PIR_CLRSR_Pos))
#define DDR3PHY_PIR_LOCKBYP_Pos               _U_(29)                                              /**< (DDR3PHY_PIR) DLL Lock Bypass: Bypasses or stops, if set, the waiting of DLLs to lock. DLL lock wait is automatically triggers after reset. DLL lock wait may be triggered manually using INIT and DLLLOCK bits of the PIR register. This bit is self-clearing. Position */
#define DDR3PHY_PIR_LOCKBYP_Msk               (_U_(0x1) << DDR3PHY_PIR_LOCKBYP_Pos)                /**< (DDR3PHY_PIR) DLL Lock Bypass: Bypasses or stops, if set, the waiting of DLLs to lock. DLL lock wait is automatically triggers after reset. DLL lock wait may be triggered manually using INIT and DLLLOCK bits of the PIR register. This bit is self-clearing. Mask */
#define DDR3PHY_PIR_LOCKBYP(value)            (DDR3PHY_PIR_LOCKBYP_Msk & ((value) << DDR3PHY_PIR_LOCKBYP_Pos))
#define DDR3PHY_PIR_ZCALBYP_Pos               _U_(30)                                              /**< (DDR3PHY_PIR) Impedance Calibration Bypass: Bypasses or stops, if set, impedance calibration of all ZQ control blocks that automatically triggers after reset. Impedance calibration may be triggered manually using INIT and ZCAL bits of the PIR register. This bit is self-clearing. Position */
#define DDR3PHY_PIR_ZCALBYP_Msk               (_U_(0x1) << DDR3PHY_PIR_ZCALBYP_Pos)                /**< (DDR3PHY_PIR) Impedance Calibration Bypass: Bypasses or stops, if set, impedance calibration of all ZQ control blocks that automatically triggers after reset. Impedance calibration may be triggered manually using INIT and ZCAL bits of the PIR register. This bit is self-clearing. Mask */
#define DDR3PHY_PIR_ZCALBYP(value)            (DDR3PHY_PIR_ZCALBYP_Msk & ((value) << DDR3PHY_PIR_ZCALBYP_Pos))
#define DDR3PHY_PIR_INITBYP_Pos               _U_(31)                                              /**< (DDR3PHY_PIR) Initialization Bypass: Bypasses or stops, if set, all initialization routines currently running, including PHY initialization, DRAM initialization, and PHY training. Position */
#define DDR3PHY_PIR_INITBYP_Msk               (_U_(0x1) << DDR3PHY_PIR_INITBYP_Pos)                /**< (DDR3PHY_PIR) Initialization Bypass: Bypasses or stops, if set, all initialization routines currently running, including PHY initialization, DRAM initialization, and PHY training. Mask */
#define DDR3PHY_PIR_INITBYP(value)            (DDR3PHY_PIR_INITBYP_Msk & ((value) << DDR3PHY_PIR_INITBYP_Pos))
#define DDR3PHY_PIR_Msk                       _U_(0xF00701FF)                                      /**< (DDR3PHY_PIR) Register Mask  */


/* -------- DDR3PHY_PGCR : (DDR3PHY Offset: 0x08) (R/W 32) PHY General Configuration Register -------- */
#define DDR3PHY_PGCR_ITMDMD_Pos               _U_(0)                                               /**< (DDR3PHY_PGCR) ITM DDR Mode: Selects whether ITMS uses DQS and DQS# or it only uses DQS. Position */
#define DDR3PHY_PGCR_ITMDMD_Msk               (_U_(0x1) << DDR3PHY_PGCR_ITMDMD_Pos)                /**< (DDR3PHY_PGCR) ITM DDR Mode: Selects whether ITMS uses DQS and DQS# or it only uses DQS. Mask */
#define DDR3PHY_PGCR_ITMDMD(value)            (DDR3PHY_PGCR_ITMDMD_Msk & ((value) << DDR3PHY_PGCR_ITMDMD_Pos))
#define DDR3PHY_PGCR_DQSCFG_Pos               _U_(1)                                               /**< (DDR3PHY_PGCR) DQS Gating Configuration: Selects one of the two DQS gating schemes. Position */
#define DDR3PHY_PGCR_DQSCFG_Msk               (_U_(0x1) << DDR3PHY_PGCR_DQSCFG_Pos)                /**< (DDR3PHY_PGCR) DQS Gating Configuration: Selects one of the two DQS gating schemes. Mask */
#define DDR3PHY_PGCR_DQSCFG(value)            (DDR3PHY_PGCR_DQSCFG_Msk & ((value) << DDR3PHY_PGCR_DQSCFG_Pos))
#define DDR3PHY_PGCR_DFTCMP_Pos               _U_(2)                                               /**< (DDR3PHY_PGCR) DQS Drift Compensation: Enables or disables DQS drift compensation. Position */
#define DDR3PHY_PGCR_DFTCMP_Msk               (_U_(0x1) << DDR3PHY_PGCR_DFTCMP_Pos)                /**< (DDR3PHY_PGCR) DQS Drift Compensation: Enables or disables DQS drift compensation. Mask */
#define DDR3PHY_PGCR_DFTCMP(value)            (DDR3PHY_PGCR_DFTCMP_Msk & ((value) << DDR3PHY_PGCR_DFTCMP_Pos))
#define DDR3PHY_PGCR_DFTLMT_Pos               _U_(3)                                               /**< (DDR3PHY_PGCR) DQS Drift Limit: Specifies the expected limit of drift on read data strobes. A drift of this value or greater is reported as a drift error through the host port error flag. Position */
#define DDR3PHY_PGCR_DFTLMT_Msk               (_U_(0x3) << DDR3PHY_PGCR_DFTLMT_Pos)                /**< (DDR3PHY_PGCR) DQS Drift Limit: Specifies the expected limit of drift on read data strobes. A drift of this value or greater is reported as a drift error through the host port error flag. Mask */
#define DDR3PHY_PGCR_DFTLMT(value)            (DDR3PHY_PGCR_DFTLMT_Msk & ((value) << DDR3PHY_PGCR_DFTLMT_Pos))
#define DDR3PHY_PGCR_DTOSEL_Pos               _U_(5)                                               /**< (DDR3PHY_PGCR) Digital Test Output Select: Selects the PHY digital test output that should be driven onto PHY digital test output (phy_dto) pin. Position */
#define DDR3PHY_PGCR_DTOSEL_Msk               (_U_(0xF) << DDR3PHY_PGCR_DTOSEL_Pos)                /**< (DDR3PHY_PGCR) Digital Test Output Select: Selects the PHY digital test output that should be driven onto PHY digital test output (phy_dto) pin. Mask */
#define DDR3PHY_PGCR_DTOSEL(value)            (DDR3PHY_PGCR_DTOSEL_Msk & ((value) << DDR3PHY_PGCR_DTOSEL_Pos))
#define DDR3PHY_PGCR_CKEN_Pos                 _U_(9)                                               /**< (DDR3PHY_PGCR) CK Enable: Controls whether the CK going to the SDRAM is enabled (toggling) or disabled (static value defined by CKDV). One bit for each of the three CK pairs. Position */
#define DDR3PHY_PGCR_CKEN_Msk                 (_U_(0x7) << DDR3PHY_PGCR_CKEN_Pos)                  /**< (DDR3PHY_PGCR) CK Enable: Controls whether the CK going to the SDRAM is enabled (toggling) or disabled (static value defined by CKDV). One bit for each of the three CK pairs. Mask */
#define DDR3PHY_PGCR_CKEN(value)              (DDR3PHY_PGCR_CKEN_Msk & ((value) << DDR3PHY_PGCR_CKEN_Pos))
#define DDR3PHY_PGCR_CKDV_Pos                 _U_(12)                                              /**< (DDR3PHY_PGCR) CK Disable Value: Specifies the static value that should be driven on CK/CK# pair(s) when the pair(s) is disabled. CKDV[0] specifies the value for CK and CKDV[1] specifies the value for CK#. Position */
#define DDR3PHY_PGCR_CKDV_Msk                 (_U_(0x3) << DDR3PHY_PGCR_CKDV_Pos)                  /**< (DDR3PHY_PGCR) CK Disable Value: Specifies the static value that should be driven on CK/CK# pair(s) when the pair(s) is disabled. CKDV[0] specifies the value for CK and CKDV[1] specifies the value for CK#. Mask */
#define DDR3PHY_PGCR_CKDV(value)              (DDR3PHY_PGCR_CKDV_Msk & ((value) << DDR3PHY_PGCR_CKDV_Pos))
#define DDR3PHY_PGCR_CKINV_Pos                _U_(14)                                              /**< (DDR3PHY_PGCR) CK Invert: Specifies if set that CK/CK# should be inverted. Otherwise CK/CK# toggles with normal polarity. Position */
#define DDR3PHY_PGCR_CKINV_Msk                (_U_(0x1) << DDR3PHY_PGCR_CKINV_Pos)                 /**< (DDR3PHY_PGCR) CK Invert: Specifies if set that CK/CK# should be inverted. Otherwise CK/CK# toggles with normal polarity. Mask */
#define DDR3PHY_PGCR_CKINV(value)             (DDR3PHY_PGCR_CKINV_Msk & ((value) << DDR3PHY_PGCR_CKINV_Pos))
#define DDR3PHY_PGCR_IOLB_Pos                 _U_(15)                                              /**< (DDR3PHY_PGCR) I/O Loop-Back Select: Selects where inside the I/O the loop-back of signals happens. Not applicable to D3A I/Os. Position */
#define DDR3PHY_PGCR_IOLB_Msk                 (_U_(0x1) << DDR3PHY_PGCR_IOLB_Pos)                  /**< (DDR3PHY_PGCR) I/O Loop-Back Select: Selects where inside the I/O the loop-back of signals happens. Not applicable to D3A I/Os. Mask */
#define DDR3PHY_PGCR_IOLB(value)              (DDR3PHY_PGCR_IOLB_Msk & ((value) << DDR3PHY_PGCR_IOLB_Pos))
#define DDR3PHY_PGCR_IODDRM_Pos               _U_(16)                                              /**< (DDR3PHY_PGCR) I/O DDR Mode (D3F I/O Only): Selects the DDR mode for the I/Os. Position */
#define DDR3PHY_PGCR_IODDRM_Msk               (_U_(0x3) << DDR3PHY_PGCR_IODDRM_Pos)                /**< (DDR3PHY_PGCR) I/O DDR Mode (D3F I/O Only): Selects the DDR mode for the I/Os. Mask */
#define DDR3PHY_PGCR_IODDRM(value)            (DDR3PHY_PGCR_IODDRM_Msk & ((value) << DDR3PHY_PGCR_IODDRM_Pos))
#define DDR3PHY_PGCR_RANKEN_Pos               _U_(18)                                              /**< (DDR3PHY_PGCR) Rank Enable: Specifies the ranks that are enabled for data-training. Bit 0 controls rank 0, bit 1 controls rank 1, bit 2 controls rank 2, and bit 3 controls rank 3. Setting the bit to '1' enables the rank, and setting it to '0' disables the rank. Position */
#define DDR3PHY_PGCR_RANKEN_Msk               (_U_(0xF) << DDR3PHY_PGCR_RANKEN_Pos)                /**< (DDR3PHY_PGCR) Rank Enable: Specifies the ranks that are enabled for data-training. Bit 0 controls rank 0, bit 1 controls rank 1, bit 2 controls rank 2, and bit 3 controls rank 3. Setting the bit to '1' enables the rank, and setting it to '0' disables the rank. Mask */
#define DDR3PHY_PGCR_RANKEN(value)            (DDR3PHY_PGCR_RANKEN_Msk & ((value) << DDR3PHY_PGCR_RANKEN_Pos))
#define DDR3PHY_PGCR_ZCKSEL_Pos               _U_(22)                                              /**< (DDR3PHY_PGCR) Impedance Clock Divider Select: Impedance Clock Divider Select: Selects the divide ratio for the clock used by the impedance control logic. The source clock for the divider is the configuration port clock signal (cfg_clk or pclk), depending on which configuration port type used (see 'Impedance Calibration' ). Position */
#define DDR3PHY_PGCR_ZCKSEL_Msk               (_U_(0x3) << DDR3PHY_PGCR_ZCKSEL_Pos)                /**< (DDR3PHY_PGCR) Impedance Clock Divider Select: Impedance Clock Divider Select: Selects the divide ratio for the clock used by the impedance control logic. The source clock for the divider is the configuration port clock signal (cfg_clk or pclk), depending on which configuration port type used (see 'Impedance Calibration' ). Mask */
#define DDR3PHY_PGCR_ZCKSEL(value)            (DDR3PHY_PGCR_ZCKSEL_Msk & ((value) << DDR3PHY_PGCR_ZCKSEL_Pos))
#define DDR3PHY_PGCR_PDDISDX_Pos              _U_(24)                                              /**< (DDR3PHY_PGCR) Power Down Disabled Byte: Indicates if set that the DLL and I/Os of a disabled byte should be powered down. Position */
#define DDR3PHY_PGCR_PDDISDX_Msk              (_U_(0x1) << DDR3PHY_PGCR_PDDISDX_Pos)               /**< (DDR3PHY_PGCR) Power Down Disabled Byte: Indicates if set that the DLL and I/Os of a disabled byte should be powered down. Mask */
#define DDR3PHY_PGCR_PDDISDX(value)           (DDR3PHY_PGCR_PDDISDX_Msk & ((value) << DDR3PHY_PGCR_PDDISDX_Pos))
#define DDR3PHY_PGCR_RFSHDT_Pos               _U_(25)                                              /**< (DDR3PHY_PGCR) Refresh During Training: A non-zero value specifies that a burst of refreshes equal to the number specified in this field should be sent to the SDRAM after training each rank except the last rank. Position */
#define DDR3PHY_PGCR_RFSHDT_Msk               (_U_(0xF) << DDR3PHY_PGCR_RFSHDT_Pos)                /**< (DDR3PHY_PGCR) Refresh During Training: A non-zero value specifies that a burst of refreshes equal to the number specified in this field should be sent to the SDRAM after training each rank except the last rank. Mask */
#define DDR3PHY_PGCR_RFSHDT(value)            (DDR3PHY_PGCR_RFSHDT_Msk & ((value) << DDR3PHY_PGCR_RFSHDT_Pos))
#define DDR3PHY_PGCR_LBDQSS_Pos               _U_(29)                                              /**< (DDR3PHY_PGCR) Loopback DQS Shift: Selects how the read DQS is shifted during loopback to ensure that the read DQS is centered into the read data eye. Position */
#define DDR3PHY_PGCR_LBDQSS_Msk               (_U_(0x1) << DDR3PHY_PGCR_LBDQSS_Pos)                /**< (DDR3PHY_PGCR) Loopback DQS Shift: Selects how the read DQS is shifted during loopback to ensure that the read DQS is centered into the read data eye. Mask */
#define DDR3PHY_PGCR_LBDQSS(value)            (DDR3PHY_PGCR_LBDQSS_Msk & ((value) << DDR3PHY_PGCR_LBDQSS_Pos))
#define DDR3PHY_PGCR_LBGDQS_Pos               _U_(30)                                              /**< (DDR3PHY_PGCR) Loopback DQS Gating: Selects the DQS gating mode that should be used when the PHY is in loopback mode, including BIST loopback mode. Position */
#define DDR3PHY_PGCR_LBGDQS_Msk               (_U_(0x1) << DDR3PHY_PGCR_LBGDQS_Pos)                /**< (DDR3PHY_PGCR) Loopback DQS Gating: Selects the DQS gating mode that should be used when the PHY is in loopback mode, including BIST loopback mode. Mask */
#define DDR3PHY_PGCR_LBGDQS(value)            (DDR3PHY_PGCR_LBGDQS_Msk & ((value) << DDR3PHY_PGCR_LBGDQS_Pos))
#define DDR3PHY_PGCR_LBMODE_Pos               _U_(31)                                              /**< (DDR3PHY_PGCR) Loopback Mode: Indicates if set that the PHY/PUB is in loopback mode Position */
#define DDR3PHY_PGCR_LBMODE_Msk               (_U_(0x1) << DDR3PHY_PGCR_LBMODE_Pos)                /**< (DDR3PHY_PGCR) Loopback Mode: Indicates if set that the PHY/PUB is in loopback mode Mask */
#define DDR3PHY_PGCR_LBMODE(value)            (DDR3PHY_PGCR_LBMODE_Msk & ((value) << DDR3PHY_PGCR_LBMODE_Pos))
#define DDR3PHY_PGCR_Msk                      _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_PGCR) Register Mask  */


/* -------- DDR3PHY_PGSR : (DDR3PHY Offset: 0x0C) ( R/ 32) PHY General Status Register -------- */
#define DDR3PHY_PGSR_IDONE_Pos                _U_(0)                                               /**< (DDR3PHY_PGSR) Initialization Done: Indicates if set that the DDR system initialization has completed. This bit is set after all the selected initialization routines in PIR register have completed. Position */
#define DDR3PHY_PGSR_IDONE_Msk                (_U_(0x1) << DDR3PHY_PGSR_IDONE_Pos)                 /**< (DDR3PHY_PGSR) Initialization Done: Indicates if set that the DDR system initialization has completed. This bit is set after all the selected initialization routines in PIR register have completed. Mask */
#define DDR3PHY_PGSR_IDONE(value)             (DDR3PHY_PGSR_IDONE_Msk & ((value) << DDR3PHY_PGSR_IDONE_Pos))
#define DDR3PHY_PGSR_DLDONE_Pos               _U_(1)                                               /**< (DDR3PHY_PGSR) DLL Lock Done: Indicates if set that DLL locking has completed. Position */
#define DDR3PHY_PGSR_DLDONE_Msk               (_U_(0x1) << DDR3PHY_PGSR_DLDONE_Pos)                /**< (DDR3PHY_PGSR) DLL Lock Done: Indicates if set that DLL locking has completed. Mask */
#define DDR3PHY_PGSR_DLDONE(value)            (DDR3PHY_PGSR_DLDONE_Msk & ((value) << DDR3PHY_PGSR_DLDONE_Pos))
#define DDR3PHY_PGSR_ZCDONE_Pos               _U_(2)                                               /**< (DDR3PHY_PGSR) Impedance Calibration Done: Indicates if set that impedance calibration has completed. Position */
#define DDR3PHY_PGSR_ZCDONE_Msk               (_U_(0x1) << DDR3PHY_PGSR_ZCDONE_Pos)                /**< (DDR3PHY_PGSR) Impedance Calibration Done: Indicates if set that impedance calibration has completed. Mask */
#define DDR3PHY_PGSR_ZCDONE(value)            (DDR3PHY_PGSR_ZCDONE_Msk & ((value) << DDR3PHY_PGSR_ZCDONE_Pos))
#define DDR3PHY_PGSR_DIDONE_Pos               _U_(3)                                               /**< (DDR3PHY_PGSR) DRAM Initialization Done: Indicates if set that DRAM initialization has completed. Position */
#define DDR3PHY_PGSR_DIDONE_Msk               (_U_(0x1) << DDR3PHY_PGSR_DIDONE_Pos)                /**< (DDR3PHY_PGSR) DRAM Initialization Done: Indicates if set that DRAM initialization has completed. Mask */
#define DDR3PHY_PGSR_DIDONE(value)            (DDR3PHY_PGSR_DIDONE_Msk & ((value) << DDR3PHY_PGSR_DIDONE_Pos))
#define DDR3PHY_PGSR_DTDONE_Pos               _U_(4)                                               /**< (DDR3PHY_PGSR) Data Training Done: Indicates, if set, that the PHY has finished doing data training. Position */
#define DDR3PHY_PGSR_DTDONE_Msk               (_U_(0x1) << DDR3PHY_PGSR_DTDONE_Pos)                /**< (DDR3PHY_PGSR) Data Training Done: Indicates, if set, that the PHY has finished doing data training. Mask */
#define DDR3PHY_PGSR_DTDONE(value)            (DDR3PHY_PGSR_DTDONE_Msk & ((value) << DDR3PHY_PGSR_DTDONE_Pos))
#define DDR3PHY_PGSR_DTERR_Pos                _U_(5)                                               /**< (DDR3PHY_PGSR) DQS GateTraining Error: If set, indicates that a valid DQS gating window could not be found during DQS gate training. Position */
#define DDR3PHY_PGSR_DTERR_Msk                (_U_(0x1) << DDR3PHY_PGSR_DTERR_Pos)                 /**< (DDR3PHY_PGSR) DQS GateTraining Error: If set, indicates that a valid DQS gating window could not be found during DQS gate training. Mask */
#define DDR3PHY_PGSR_DTERR(value)             (DDR3PHY_PGSR_DTERR_Msk & ((value) << DDR3PHY_PGSR_DTERR_Pos))
#define DDR3PHY_PGSR_DTIERR_Pos               _U_(6)                                               /**< (DDR3PHY_PGSR) DQS Gate Training Intermittent Error: If set, indicates that there was an intermittent error during DQS gate training, such as a pass was followed by a fail then followed by another pass. Position */
#define DDR3PHY_PGSR_DTIERR_Msk               (_U_(0x1) << DDR3PHY_PGSR_DTIERR_Pos)                /**< (DDR3PHY_PGSR) DQS Gate Training Intermittent Error: If set, indicates that there was an intermittent error during DQS gate training, such as a pass was followed by a fail then followed by another pass. Mask */
#define DDR3PHY_PGSR_DTIERR(value)            (DDR3PHY_PGSR_DTIERR_Msk & ((value) << DDR3PHY_PGSR_DTIERR_Pos))
#define DDR3PHY_PGSR_DFTERR_Pos               _U_(7)                                               /**< (DDR3PHY_PGSR) DQS Drift Error: If set, indicates that at least one of the read data strobes has drifted by more than or equal to the drift limit set in the PHY General Configuration Register (PGCR). Position */
#define DDR3PHY_PGSR_DFTERR_Msk               (_U_(0x1) << DDR3PHY_PGSR_DFTERR_Pos)                /**< (DDR3PHY_PGSR) DQS Drift Error: If set, indicates that at least one of the read data strobes has drifted by more than or equal to the drift limit set in the PHY General Configuration Register (PGCR). Mask */
#define DDR3PHY_PGSR_DFTERR(value)            (DDR3PHY_PGSR_DFTERR_Msk & ((value) << DDR3PHY_PGSR_DFTERR_Pos))
#define DDR3PHY_PGSR_RVERR_Pos                _U_(8)                                               /**< (DDR3PHY_PGSR) Read Valid Training Error: If set, indicates that a valid read valid placement could not be found during read valid training. Position */
#define DDR3PHY_PGSR_RVERR_Msk                (_U_(0x1) << DDR3PHY_PGSR_RVERR_Pos)                 /**< (DDR3PHY_PGSR) Read Valid Training Error: If set, indicates that a valid read valid placement could not be found during read valid training. Mask */
#define DDR3PHY_PGSR_RVERR(value)             (DDR3PHY_PGSR_RVERR_Msk & ((value) << DDR3PHY_PGSR_RVERR_Pos))
#define DDR3PHY_PGSR_RVEIRR_Pos               _U_(9)                                               /**< (DDR3PHY_PGSR) Read Valid Training Intermittent Error: If set, indicates that there was an intermittent error during read valid training, such as a pass was followed by a fail then followed by another pass. Position */
#define DDR3PHY_PGSR_RVEIRR_Msk               (_U_(0x1) << DDR3PHY_PGSR_RVEIRR_Pos)                /**< (DDR3PHY_PGSR) Read Valid Training Intermittent Error: If set, indicates that there was an intermittent error during read valid training, such as a pass was followed by a fail then followed by another pass. Mask */
#define DDR3PHY_PGSR_RVEIRR(value)            (DDR3PHY_PGSR_RVEIRR_Msk & ((value) << DDR3PHY_PGSR_RVEIRR_Pos))
#define DDR3PHY_PGSR_TQ_Pos                   _U_(31)                                              /**< (DDR3PHY_PGSR) Temperature Output (LPDDR Only): Connected to the DRAM TQ pin which is defined to go high when the LPDDR device temperature equals to or exceeds 85oC, otherwise it is low. Position */
#define DDR3PHY_PGSR_TQ_Msk                   (_U_(0x1) << DDR3PHY_PGSR_TQ_Pos)                    /**< (DDR3PHY_PGSR) Temperature Output (LPDDR Only): Connected to the DRAM TQ pin which is defined to go high when the LPDDR device temperature equals to or exceeds 85oC, otherwise it is low. Mask */
#define DDR3PHY_PGSR_TQ(value)                (DDR3PHY_PGSR_TQ_Msk & ((value) << DDR3PHY_PGSR_TQ_Pos))
#define DDR3PHY_PGSR_Msk                      _U_(0x800003FF)                                      /**< (DDR3PHY_PGSR) Register Mask  */


/* -------- DDR3PHY_DLLGCR : (DDR3PHY Offset: 0x10) (R/W 32) DLL General Control Register -------- */
#define DDR3PHY_DLLGCR_DRES_Pos               _U_(0)                                               /**< (DDR3PHY_DLLGCR) Delta Resistor Trim: Used to trim reference current versus resistor value variation. Position */
#define DDR3PHY_DLLGCR_DRES_Msk               (_U_(0x3) << DDR3PHY_DLLGCR_DRES_Pos)                /**< (DDR3PHY_DLLGCR) Delta Resistor Trim: Used to trim reference current versus resistor value variation. Mask */
#define DDR3PHY_DLLGCR_DRES(value)            (DDR3PHY_DLLGCR_DRES_Msk & ((value) << DDR3PHY_DLLGCR_DRES_Pos))
#define DDR3PHY_DLLGCR_IPUMP_Pos              _U_(2)                                               /**< (DDR3PHY_DLLGCR) Charge Pump Current Trim: Used to trim charge pump current. Position */
#define DDR3PHY_DLLGCR_IPUMP_Msk              (_U_(0x7) << DDR3PHY_DLLGCR_IPUMP_Pos)               /**< (DDR3PHY_DLLGCR) Charge Pump Current Trim: Used to trim charge pump current. Mask */
#define DDR3PHY_DLLGCR_IPUMP(value)           (DDR3PHY_DLLGCR_IPUMP_Msk & ((value) << DDR3PHY_DLLGCR_IPUMP_Pos))
#define DDR3PHY_DLLGCR_TESTEN_Pos             _U_(5)                                               /**< (DDR3PHY_DLLGCR) Test Enable: Enables digital and analog test outputs selected by DTC and ATC respectively. Position */
#define DDR3PHY_DLLGCR_TESTEN_Msk             (_U_(0x1) << DDR3PHY_DLLGCR_TESTEN_Pos)              /**< (DDR3PHY_DLLGCR) Test Enable: Enables digital and analog test outputs selected by DTC and ATC respectively. Mask */
#define DDR3PHY_DLLGCR_TESTEN(value)          (DDR3PHY_DLLGCR_TESTEN_Msk & ((value) << DDR3PHY_DLLGCR_TESTEN_Pos))
#define DDR3PHY_DLLGCR_DTC_Pos                _U_(6)                                               /**< (DDR3PHY_DLLGCR) Digital Test Control: Selects the digital signal to be output on the DLL digital test output (test_out_d[1]) when TESTEN is high (Output is '0' when TESTEN is low). Position */
#define DDR3PHY_DLLGCR_DTC_Msk                (_U_(0x7) << DDR3PHY_DLLGCR_DTC_Pos)                 /**< (DDR3PHY_DLLGCR) Digital Test Control: Selects the digital signal to be output on the DLL digital test output (test_out_d[1]) when TESTEN is high (Output is '0' when TESTEN is low). Mask */
#define DDR3PHY_DLLGCR_DTC(value)             (DDR3PHY_DLLGCR_DTC_Msk & ((value) << DDR3PHY_DLLGCR_DTC_Pos))
#define DDR3PHY_DLLGCR_ATC_Pos                _U_(9)                                               /**< (DDR3PHY_DLLGCR) Analog Test Control: Selects the analog signal to be output on the DLL analog test output (test_out_a) when TESTEN is high (Output is Vss when TESTEN is low). The test output either comes from the master DLL or the slave DLL, depending on the setting of the test switch (TESTSW). Both master DLL and slave DLL output similar analog test signals. Position */
#define DDR3PHY_DLLGCR_ATC_Msk                (_U_(0x3) << DDR3PHY_DLLGCR_ATC_Pos)                 /**< (DDR3PHY_DLLGCR) Analog Test Control: Selects the analog signal to be output on the DLL analog test output (test_out_a) when TESTEN is high (Output is Vss when TESTEN is low). The test output either comes from the master DLL or the slave DLL, depending on the setting of the test switch (TESTSW). Both master DLL and slave DLL output similar analog test signals. Mask */
#define DDR3PHY_DLLGCR_ATC(value)             (DDR3PHY_DLLGCR_ATC_Msk & ((value) << DDR3PHY_DLLGCR_ATC_Pos))
#define DDR3PHY_DLLGCR_TESTSW_Pos             _U_(11)                                              /**< (DDR3PHY_DLLGCR) Test Switch: Selects the test signals of either the master DLL, set to 0, or the slave DLL, set to 1. Position */
#define DDR3PHY_DLLGCR_TESTSW_Msk             (_U_(0x1) << DDR3PHY_DLLGCR_TESTSW_Pos)              /**< (DDR3PHY_DLLGCR) Test Switch: Selects the test signals of either the master DLL, set to 0, or the slave DLL, set to 1. Mask */
#define DDR3PHY_DLLGCR_TESTSW(value)          (DDR3PHY_DLLGCR_TESTSW_Msk & ((value) << DDR3PHY_DLLGCR_TESTSW_Pos))
#define DDR3PHY_DLLGCR_MBIAS_Pos              _U_(12)                                              /**< (DDR3PHY_DLLGCR) Master Bias Trim: Used to trim the bias for the master DLL. Position */
#define DDR3PHY_DLLGCR_MBIAS_Msk              (_U_(0xFF) << DDR3PHY_DLLGCR_MBIAS_Pos)              /**< (DDR3PHY_DLLGCR) Master Bias Trim: Used to trim the bias for the master DLL. Mask */
#define DDR3PHY_DLLGCR_MBIAS(value)           (DDR3PHY_DLLGCR_MBIAS_Msk & ((value) << DDR3PHY_DLLGCR_MBIAS_Pos))
#define DDR3PHY_DLLGCR_SBIAS_2_0_Pos          _U_(20)                                              /**< (DDR3PHY_DLLGCR) Slave Bias Trim: Used to trim the bias for the slave DLL. Position */
#define DDR3PHY_DLLGCR_SBIAS_2_0_Msk          (_U_(0x7) << DDR3PHY_DLLGCR_SBIAS_2_0_Pos)           /**< (DDR3PHY_DLLGCR) Slave Bias Trim: Used to trim the bias for the slave DLL. Mask */
#define DDR3PHY_DLLGCR_SBIAS_2_0(value)       (DDR3PHY_DLLGCR_SBIAS_2_0_Msk & ((value) << DDR3PHY_DLLGCR_SBIAS_2_0_Pos))
#define DDR3PHY_DLLGCR_BPS200_Pos             _U_(23)                                              /**< (DDR3PHY_DLLGCR) Bypass Mode Frequency Range Position */
#define DDR3PHY_DLLGCR_BPS200_Msk             (_U_(0x1) << DDR3PHY_DLLGCR_BPS200_Pos)              /**< (DDR3PHY_DLLGCR) Bypass Mode Frequency Range Mask */
#define DDR3PHY_DLLGCR_BPS200(value)          (DDR3PHY_DLLGCR_BPS200_Msk & ((value) << DDR3PHY_DLLGCR_BPS200_Pos))
#define DDR3PHY_DLLGCR_SBIAS_5_3_Pos          _U_(24)                                              /**< (DDR3PHY_DLLGCR) Slave Bias Trim: Used to trim the bias for the slave DLL. Position */
#define DDR3PHY_DLLGCR_SBIAS_5_3_Msk          (_U_(0x7) << DDR3PHY_DLLGCR_SBIAS_5_3_Pos)           /**< (DDR3PHY_DLLGCR) Slave Bias Trim: Used to trim the bias for the slave DLL. Mask */
#define DDR3PHY_DLLGCR_SBIAS_5_3(value)       (DDR3PHY_DLLGCR_SBIAS_5_3_Msk & ((value) << DDR3PHY_DLLGCR_SBIAS_5_3_Pos))
#define DDR3PHY_DLLGCR_FDTRM_SL_Pos           _U_(27)                                              /**< (DDR3PHY_DLLGCR) Slave Bypass Fixed Delay Trim Position */
#define DDR3PHY_DLLGCR_FDTRM_SL_Msk           (_U_(0x3) << DDR3PHY_DLLGCR_FDTRM_SL_Pos)            /**< (DDR3PHY_DLLGCR) Slave Bypass Fixed Delay Trim Mask */
#define DDR3PHY_DLLGCR_FDTRM_SL(value)        (DDR3PHY_DLLGCR_FDTRM_SL_Msk & ((value) << DDR3PHY_DLLGCR_FDTRM_SL_Pos))
#define DDR3PHY_DLLGCR_LOCKDET_Pos            _U_(29)                                              /**< (DDR3PHY_DLLGCR) Master lock detector enable. Position */
#define DDR3PHY_DLLGCR_LOCKDET_Msk            (_U_(0x1) << DDR3PHY_DLLGCR_LOCKDET_Pos)             /**< (DDR3PHY_DLLGCR) Master lock detector enable. Mask */
#define DDR3PHY_DLLGCR_LOCKDET(value)         (DDR3PHY_DLLGCR_LOCKDET_Msk & ((value) << DDR3PHY_DLLGCR_LOCKDET_Pos))
#define DDR3PHY_DLLGCR_DLLRSVD2_Pos           _U_(30)                                              /**< (DDR3PHY_DLLGCR) DLL Reserved Control: This bit is connected to the DLL control bus and is reserved for future use. Position */
#define DDR3PHY_DLLGCR_DLLRSVD2_Msk           (_U_(0x3) << DDR3PHY_DLLGCR_DLLRSVD2_Pos)            /**< (DDR3PHY_DLLGCR) DLL Reserved Control: This bit is connected to the DLL control bus and is reserved for future use. Mask */
#define DDR3PHY_DLLGCR_DLLRSVD2(value)        (DDR3PHY_DLLGCR_DLLRSVD2_Msk & ((value) << DDR3PHY_DLLGCR_DLLRSVD2_Pos))
#define DDR3PHY_DLLGCR_Msk                    _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_DLLGCR) Register Mask  */

#define DDR3PHY_DLLGCR_BPS_Pos                _U_(23)                                              /**< (DDR3PHY_DLLGCR Position) Bypass Mode Frequency Range */
#define DDR3PHY_DLLGCR_BPS_Msk                (_U_(0x1) << DDR3PHY_DLLGCR_BPS_Pos)                 /**< (DDR3PHY_DLLGCR Mask) BPS */
#define DDR3PHY_DLLGCR_BPS(value)             (DDR3PHY_DLLGCR_BPS_Msk & ((value) << DDR3PHY_DLLGCR_BPS_Pos)) 

/* -------- DDR3PHY_ACDLLCR : (DDR3PHY Offset: 0x14) (R/W 32) AC DLL Control Register -------- */
#define DDR3PHY_ACDLLCR_MFBDLY_Pos            _U_(6)                                               /**< (DDR3PHY_ACDLLCR) Master Feed-Back Delay Trim: Used to trim the delay in the master DLL feedback path. Position */
#define DDR3PHY_ACDLLCR_MFBDLY_Msk            (_U_(0x7) << DDR3PHY_ACDLLCR_MFBDLY_Pos)             /**< (DDR3PHY_ACDLLCR) Master Feed-Back Delay Trim: Used to trim the delay in the master DLL feedback path. Mask */
#define DDR3PHY_ACDLLCR_MFBDLY(value)         (DDR3PHY_ACDLLCR_MFBDLY_Msk & ((value) << DDR3PHY_ACDLLCR_MFBDLY_Pos))
#define DDR3PHY_ACDLLCR_MFWDLY_Pos            _U_(9)                                               /**< (DDR3PHY_ACDLLCR) Master Feed-Forward Delay Trim: Used to trim the delay in the master DLL feedforward path. Position */
#define DDR3PHY_ACDLLCR_MFWDLY_Msk            (_U_(0x7) << DDR3PHY_ACDLLCR_MFWDLY_Pos)             /**< (DDR3PHY_ACDLLCR) Master Feed-Forward Delay Trim: Used to trim the delay in the master DLL feedforward path. Mask */
#define DDR3PHY_ACDLLCR_MFWDLY(value)         (DDR3PHY_ACDLLCR_MFWDLY_Msk & ((value) << DDR3PHY_ACDLLCR_MFWDLY_Pos))
#define DDR3PHY_ACDLLCR_ATESTEN_Pos           _U_(18)                                              /**< (DDR3PHY_ACDLLCR) Analog Test Enable: Enables the analog test signal to be output on the DLL analog test output (test_out_a). The DLL analog test output is tri-stated when this bit is '0'. Position */
#define DDR3PHY_ACDLLCR_ATESTEN_Msk           (_U_(0x1) << DDR3PHY_ACDLLCR_ATESTEN_Pos)            /**< (DDR3PHY_ACDLLCR) Analog Test Enable: Enables the analog test signal to be output on the DLL analog test output (test_out_a). The DLL analog test output is tri-stated when this bit is '0'. Mask */
#define DDR3PHY_ACDLLCR_ATESTEN(value)        (DDR3PHY_ACDLLCR_ATESTEN_Msk & ((value) << DDR3PHY_ACDLLCR_ATESTEN_Pos))
#define DDR3PHY_ACDLLCR_DLLSRST_Pos           _U_(30)                                              /**< (DDR3PHY_ACDLLCR) DLL Soft Rest: Soft resets the AC DLL by driving the DLL soft reset pin. Position */
#define DDR3PHY_ACDLLCR_DLLSRST_Msk           (_U_(0x1) << DDR3PHY_ACDLLCR_DLLSRST_Pos)            /**< (DDR3PHY_ACDLLCR) DLL Soft Rest: Soft resets the AC DLL by driving the DLL soft reset pin. Mask */
#define DDR3PHY_ACDLLCR_DLLSRST(value)        (DDR3PHY_ACDLLCR_DLLSRST_Msk & ((value) << DDR3PHY_ACDLLCR_DLLSRST_Pos))
#define DDR3PHY_ACDLLCR_DLLDIS_Pos            _U_(31)                                              /**< (DDR3PHY_ACDLLCR) DLL Disable: A disabled DLL is bypassed. Default ('0') is DLL enabled. Position */
#define DDR3PHY_ACDLLCR_DLLDIS_Msk            (_U_(0x1) << DDR3PHY_ACDLLCR_DLLDIS_Pos)             /**< (DDR3PHY_ACDLLCR) DLL Disable: A disabled DLL is bypassed. Default ('0') is DLL enabled. Mask */
#define DDR3PHY_ACDLLCR_DLLDIS(value)         (DDR3PHY_ACDLLCR_DLLDIS_Msk & ((value) << DDR3PHY_ACDLLCR_DLLDIS_Pos))
#define DDR3PHY_ACDLLCR_Msk                   _U_(0xC0040FC0)                                      /**< (DDR3PHY_ACDLLCR) Register Mask  */


/* -------- DDR3PHY_PTR0 : (DDR3PHY Offset: 0x18) (R/W 32) PHY Timing Register 0 -------- */
#define DDR3PHY_PTR0_TDLLSRST_Pos             _U_(0)                                               /**< (DDR3PHY_PTR0) DLL Soft Reset Time: Number of configuration clock cycles that the DLL soft reset pin must remain asserted when the soft reset is triggered through the PHY Position */
#define DDR3PHY_PTR0_TDLLSRST_Msk             (_U_(0x3F) << DDR3PHY_PTR0_TDLLSRST_Pos)             /**< (DDR3PHY_PTR0) DLL Soft Reset Time: Number of configuration clock cycles that the DLL soft reset pin must remain asserted when the soft reset is triggered through the PHY Mask */
#define DDR3PHY_PTR0_TDLLSRST(value)          (DDR3PHY_PTR0_TDLLSRST_Msk & ((value) << DDR3PHY_PTR0_TDLLSRST_Pos))
#define DDR3PHY_PTR0_TDLLLOCK_Pos             _U_(6)                                               /**< (DDR3PHY_PTR0) DLL Lock Time: Number of configuration clock cycles for the DLL to stabilize and lock, i.e. number of clock cycles from when the DLL reset pin is de-asserted to when the DLL has locked and is ready for use. Refer to the PHY databook for the DLL lock time. Default value corresponds to 5.12us at 533MHz. Position */
#define DDR3PHY_PTR0_TDLLLOCK_Msk             (_U_(0xFFF) << DDR3PHY_PTR0_TDLLLOCK_Pos)            /**< (DDR3PHY_PTR0) DLL Lock Time: Number of configuration clock cycles for the DLL to stabilize and lock, i.e. number of clock cycles from when the DLL reset pin is de-asserted to when the DLL has locked and is ready for use. Refer to the PHY databook for the DLL lock time. Default value corresponds to 5.12us at 533MHz. Mask */
#define DDR3PHY_PTR0_TDLLLOCK(value)          (DDR3PHY_PTR0_TDLLLOCK_Msk & ((value) << DDR3PHY_PTR0_TDLLLOCK_Pos))
#define DDR3PHY_PTR0_TITMSRST_Pos             _U_(18)                                              /**< (DDR3PHY_PTR0) ITM Soft Reset Time: Number of configuration clock cycles that the ITM soft reset pin must remain asserted when the soft reset is applied to the ITMs. This must correspond to a value that is equal to or more than 8 controller clock cycles. Default value corresponds to 8 controller clock cycles. Position */
#define DDR3PHY_PTR0_TITMSRST_Msk             (_U_(0xF) << DDR3PHY_PTR0_TITMSRST_Pos)              /**< (DDR3PHY_PTR0) ITM Soft Reset Time: Number of configuration clock cycles that the ITM soft reset pin must remain asserted when the soft reset is applied to the ITMs. This must correspond to a value that is equal to or more than 8 controller clock cycles. Default value corresponds to 8 controller clock cycles. Mask */
#define DDR3PHY_PTR0_TITMSRST(value)          (DDR3PHY_PTR0_TITMSRST_Msk & ((value) << DDR3PHY_PTR0_TITMSRST_Pos))
#define DDR3PHY_PTR0_Msk                      _U_(0x003FFFFF)                                      /**< (DDR3PHY_PTR0) Register Mask  */


/* -------- DDR3PHY_PTR1 : (DDR3PHY Offset: 0x1C) (R/W 32) PHY Timing Register 1 -------- */
#define DDR3PHY_PTR1_TDINIT0_Pos              _U_(0)                                               /**< (DDR3PHY_PTR1) DRAM Initialization Time 0. Position */
#define DDR3PHY_PTR1_TDINIT0_Msk              (_U_(0x7FFFF) << DDR3PHY_PTR1_TDINIT0_Pos)           /**< (DDR3PHY_PTR1) DRAM Initialization Time 0. Mask */
#define DDR3PHY_PTR1_TDINIT0(value)           (DDR3PHY_PTR1_TDINIT0_Msk & ((value) << DDR3PHY_PTR1_TDINIT0_Pos))
#define DDR3PHY_PTR1_TDINIT1_Pos              _U_(19)                                              /**< (DDR3PHY_PTR1) DRAM Initialization Time 1. Position */
#define DDR3PHY_PTR1_TDINIT1_Msk              (_U_(0xFF) << DDR3PHY_PTR1_TDINIT1_Pos)              /**< (DDR3PHY_PTR1) DRAM Initialization Time 1. Mask */
#define DDR3PHY_PTR1_TDINIT1(value)           (DDR3PHY_PTR1_TDINIT1_Msk & ((value) << DDR3PHY_PTR1_TDINIT1_Pos))
#define DDR3PHY_PTR1_Msk                      _U_(0x07FFFFFF)                                      /**< (DDR3PHY_PTR1) Register Mask  */


/* -------- DDR3PHY_PTR2 : (DDR3PHY Offset: 0x20) (R/W 32) PHY Timing Register 2 -------- */
#define DDR3PHY_PTR2_TDINIT2_Pos              _U_(0)                                               /**< (DDR3PHY_PTR2) DRAM Initialization Time 2. Position */
#define DDR3PHY_PTR2_TDINIT2_Msk              (_U_(0x1FFFF) << DDR3PHY_PTR2_TDINIT2_Pos)           /**< (DDR3PHY_PTR2) DRAM Initialization Time 2. Mask */
#define DDR3PHY_PTR2_TDINIT2(value)           (DDR3PHY_PTR2_TDINIT2_Msk & ((value) << DDR3PHY_PTR2_TDINIT2_Pos))
#define DDR3PHY_PTR2_TDINIT3_Pos              _U_(17)                                              /**< (DDR3PHY_PTR2) DRAM Initialization Time 3. Position */
#define DDR3PHY_PTR2_TDINIT3_Msk              (_U_(0x3FF) << DDR3PHY_PTR2_TDINIT3_Pos)             /**< (DDR3PHY_PTR2) DRAM Initialization Time 3. Mask */
#define DDR3PHY_PTR2_TDINIT3(value)           (DDR3PHY_PTR2_TDINIT3_Msk & ((value) << DDR3PHY_PTR2_TDINIT3_Pos))
#define DDR3PHY_PTR2_Msk                      _U_(0x07FFFFFF)                                      /**< (DDR3PHY_PTR2) Register Mask  */


/* -------- DDR3PHY_ACIOCR : (DDR3PHY Offset: 0x24) (R/W 32) AC I/O Configuration Register -------- */
#define DDR3PHY_ACIOCR_ACIOM_Pos              _U_(0)                                               /**< (DDR3PHY_ACIOCR) Address/Command I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Position */
#define DDR3PHY_ACIOCR_ACIOM_Msk              (_U_(0x1) << DDR3PHY_ACIOCR_ACIOM_Pos)               /**< (DDR3PHY_ACIOCR) Address/Command I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Mask */
#define DDR3PHY_ACIOCR_ACIOM(value)           (DDR3PHY_ACIOCR_ACIOM_Msk & ((value) << DDR3PHY_ACIOCR_ACIOM_Pos))
#define DDR3PHY_ACIOCR_ACOE_Pos               _U_(1)                                               /**< (DDR3PHY_ACIOCR) Address/Command Output Enable: Enables, when set, the output driver on the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Position */
#define DDR3PHY_ACIOCR_ACOE_Msk               (_U_(0x1) << DDR3PHY_ACIOCR_ACOE_Pos)                /**< (DDR3PHY_ACIOCR) Address/Command Output Enable: Enables, when set, the output driver on the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Mask */
#define DDR3PHY_ACIOCR_ACOE(value)            (DDR3PHY_ACIOCR_ACOE_Msk & ((value) << DDR3PHY_ACIOCR_ACOE_Pos))
#define DDR3PHY_ACIOCR_ACODT_Pos              _U_(2)                                               /**< (DDR3PHY_ACIOCR) Address/Command On-Die Termination: Enables, when set, the on-die termination on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Position */
#define DDR3PHY_ACIOCR_ACODT_Msk              (_U_(0x1) << DDR3PHY_ACIOCR_ACODT_Pos)               /**< (DDR3PHY_ACIOCR) Address/Command On-Die Termination: Enables, when set, the on-die termination on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Mask */
#define DDR3PHY_ACIOCR_ACODT(value)           (DDR3PHY_ACIOCR_ACODT_Msk & ((value) << DDR3PHY_ACIOCR_ACODT_Pos))
#define DDR3PHY_ACIOCR_ACPDD_Pos              _U_(3)                                               /**< (DDR3PHY_ACIOCR) AC Power Down Driver: Powers down, when set, the output driver on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin. Position */
#define DDR3PHY_ACIOCR_ACPDD_Msk              (_U_(0x1) << DDR3PHY_ACIOCR_ACPDD_Pos)               /**< (DDR3PHY_ACIOCR) AC Power Down Driver: Powers down, when set, the output driver on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin. Mask */
#define DDR3PHY_ACIOCR_ACPDD(value)           (DDR3PHY_ACIOCR_ACPDD_Msk & ((value) << DDR3PHY_ACIOCR_ACPDD_Pos))
#define DDR3PHY_ACIOCR_ACPDR_Pos              _U_(4)                                               /**< (DDR3PHY_ACIOCR) AC Power Down Receiver: Powers down, when set, the input receiver on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Position */
#define DDR3PHY_ACIOCR_ACPDR_Msk              (_U_(0x1) << DDR3PHY_ACIOCR_ACPDR_Pos)               /**< (DDR3PHY_ACIOCR) AC Power Down Receiver: Powers down, when set, the input receiver on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Mask */
#define DDR3PHY_ACIOCR_ACPDR(value)           (DDR3PHY_ACIOCR_ACPDR_Msk & ((value) << DDR3PHY_ACIOCR_ACPDR_Pos))
#define DDR3PHY_ACIOCR_CKODT_Pos              _U_(5)                                               /**< (DDR3PHY_ACIOCR) CK On-Die Termination: Enables, when set, the on-die termination on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Position */
#define DDR3PHY_ACIOCR_CKODT_Msk              (_U_(0x7) << DDR3PHY_ACIOCR_CKODT_Pos)               /**< (DDR3PHY_ACIOCR) CK On-Die Termination: Enables, when set, the on-die termination on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Mask */
#define DDR3PHY_ACIOCR_CKODT(value)           (DDR3PHY_ACIOCR_CKODT_Msk & ((value) << DDR3PHY_ACIOCR_CKODT_Pos))
#define DDR3PHY_ACIOCR_CKPDD_Pos              _U_(8)                                               /**< (DDR3PHY_ACIOCR) CK Power Down Driver: Powers down, when set, the output driver on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Position */
#define DDR3PHY_ACIOCR_CKPDD_Msk              (_U_(0x7) << DDR3PHY_ACIOCR_CKPDD_Pos)               /**< (DDR3PHY_ACIOCR) CK Power Down Driver: Powers down, when set, the output driver on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Mask */
#define DDR3PHY_ACIOCR_CKPDD(value)           (DDR3PHY_ACIOCR_CKPDD_Msk & ((value) << DDR3PHY_ACIOCR_CKPDD_Pos))
#define DDR3PHY_ACIOCR_CKPDR_Pos              _U_(11)                                              /**< (DDR3PHY_ACIOCR) CK Power Down Receiver: Powers down, when set, the input receiver on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Position */
#define DDR3PHY_ACIOCR_CKPDR_Msk              (_U_(0x7) << DDR3PHY_ACIOCR_CKPDR_Pos)               /**< (DDR3PHY_ACIOCR) CK Power Down Receiver: Powers down, when set, the input receiver on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Mask */
#define DDR3PHY_ACIOCR_CKPDR(value)           (DDR3PHY_ACIOCR_CKPDR_Msk & ((value) << DDR3PHY_ACIOCR_CKPDR_Pos))
#define DDR3PHY_ACIOCR_RANKODT_Pos            _U_(14)                                              /**< (DDR3PHY_ACIOCR) Rank On-Die Termination: Enables, when set, the on-die termination on the I/O for CKE[3:0], ODT[3:0], and CS#[3:0] pins. RANKODT[0] controls the on-die termination for CKE[0], ODT[0], and CS#[0], RANKODT[1] controls the on-die termination for CKE[1], ODT[1], and CS#[1], and so on. Position */
#define DDR3PHY_ACIOCR_RANKODT_Msk            (_U_(0xF) << DDR3PHY_ACIOCR_RANKODT_Pos)             /**< (DDR3PHY_ACIOCR) Rank On-Die Termination: Enables, when set, the on-die termination on the I/O for CKE[3:0], ODT[3:0], and CS#[3:0] pins. RANKODT[0] controls the on-die termination for CKE[0], ODT[0], and CS#[0], RANKODT[1] controls the on-die termination for CKE[1], ODT[1], and CS#[1], and so on. Mask */
#define DDR3PHY_ACIOCR_RANKODT(value)         (DDR3PHY_ACIOCR_RANKODT_Msk & ((value) << DDR3PHY_ACIOCR_RANKODT_Pos))
#define DDR3PHY_ACIOCR_CSPDD_Pos              _U_(18)                                              /**< (DDR3PHY_ACIOCR) CS# Power Down Driver: Powers down, when set, the output driver on the I/O for CS#[3:0] pins. PDD[0] controls the power down for CS#[0], PDD[1] controls the power down for CS#[1], and so on. CKE and ODT driver power down is controlled by DSGCR register. Position */
#define DDR3PHY_ACIOCR_CSPDD_Msk              (_U_(0xF) << DDR3PHY_ACIOCR_CSPDD_Pos)               /**< (DDR3PHY_ACIOCR) CS# Power Down Driver: Powers down, when set, the output driver on the I/O for CS#[3:0] pins. PDD[0] controls the power down for CS#[0], PDD[1] controls the power down for CS#[1], and so on. CKE and ODT driver power down is controlled by DSGCR register. Mask */
#define DDR3PHY_ACIOCR_CSPDD(value)           (DDR3PHY_ACIOCR_CSPDD_Msk & ((value) << DDR3PHY_ACIOCR_CSPDD_Pos))
#define DDR3PHY_ACIOCR_RANKPDR_Pos            _U_(22)                                              /**< (DDR3PHY_ACIOCR) Rank Power Down Receiver: Powers down, when set, the input receiver on the I/O Position */
#define DDR3PHY_ACIOCR_RANKPDR_Msk            (_U_(0xF) << DDR3PHY_ACIOCR_RANKPDR_Pos)             /**< (DDR3PHY_ACIOCR) Rank Power Down Receiver: Powers down, when set, the input receiver on the I/O Mask */
#define DDR3PHY_ACIOCR_RANKPDR(value)         (DDR3PHY_ACIOCR_RANKPDR_Msk & ((value) << DDR3PHY_ACIOCR_RANKPDR_Pos))
#define DDR3PHY_ACIOCR_RSTODT_Pos             _U_(26)                                              /**< (DDR3PHY_ACIOCR) SDRAM Reset On-Die Termination: Enables, when set, the on-die termination on the I/O for SDRAM RST# pin. Position */
#define DDR3PHY_ACIOCR_RSTODT_Msk             (_U_(0x1) << DDR3PHY_ACIOCR_RSTODT_Pos)              /**< (DDR3PHY_ACIOCR) SDRAM Reset On-Die Termination: Enables, when set, the on-die termination on the I/O for SDRAM RST# pin. Mask */
#define DDR3PHY_ACIOCR_RSTODT(value)          (DDR3PHY_ACIOCR_RSTODT_Msk & ((value) << DDR3PHY_ACIOCR_RSTODT_Pos))
#define DDR3PHY_ACIOCR_RSTPDD_Pos             _U_(27)                                              /**< (DDR3PHY_ACIOCR) SDRAM Reset Power Down Driver: Powers down, when set, the output driver on the I/O for SDRAM RST# pin. Position */
#define DDR3PHY_ACIOCR_RSTPDD_Msk             (_U_(0x1) << DDR3PHY_ACIOCR_RSTPDD_Pos)              /**< (DDR3PHY_ACIOCR) SDRAM Reset Power Down Driver: Powers down, when set, the output driver on the I/O for SDRAM RST# pin. Mask */
#define DDR3PHY_ACIOCR_RSTPDD(value)          (DDR3PHY_ACIOCR_RSTPDD_Msk & ((value) << DDR3PHY_ACIOCR_RSTPDD_Pos))
#define DDR3PHY_ACIOCR_RSTPDR_Pos             _U_(28)                                              /**< (DDR3PHY_ACIOCR) SDRAM Reset Power Down Receiver: Powers down, when set, the input receiver on the I/O for SDRAM RST# pin. Position */
#define DDR3PHY_ACIOCR_RSTPDR_Msk             (_U_(0x1) << DDR3PHY_ACIOCR_RSTPDR_Pos)              /**< (DDR3PHY_ACIOCR) SDRAM Reset Power Down Receiver: Powers down, when set, the input receiver on the I/O for SDRAM RST# pin. Mask */
#define DDR3PHY_ACIOCR_RSTPDR(value)          (DDR3PHY_ACIOCR_RSTPDR_Msk & ((value) << DDR3PHY_ACIOCR_RSTPDR_Pos))
#define DDR3PHY_ACIOCR_RSTIOM_Pos             _U_(29)                                              /**< (DDR3PHY_ACIOCR) SDRAM Reset I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for SDRAM Reset. Position */
#define DDR3PHY_ACIOCR_RSTIOM_Msk             (_U_(0x1) << DDR3PHY_ACIOCR_RSTIOM_Pos)              /**< (DDR3PHY_ACIOCR) SDRAM Reset I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for SDRAM Reset. Mask */
#define DDR3PHY_ACIOCR_RSTIOM(value)          (DDR3PHY_ACIOCR_RSTIOM_Msk & ((value) << DDR3PHY_ACIOCR_RSTIOM_Pos))
#define DDR3PHY_ACIOCR_ACSR_Pos               _U_(30)                                              /**< (DDR3PHY_ACIOCR) Address/Command Slew Rate (D3F I/O Only): Selects slew rate of the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Position */
#define DDR3PHY_ACIOCR_ACSR_Msk               (_U_(0x3) << DDR3PHY_ACIOCR_ACSR_Pos)                /**< (DDR3PHY_ACIOCR) Address/Command Slew Rate (D3F I/O Only): Selects slew rate of the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Mask */
#define DDR3PHY_ACIOCR_ACSR(value)            (DDR3PHY_ACIOCR_ACSR_Msk & ((value) << DDR3PHY_ACIOCR_ACSR_Pos))
#define DDR3PHY_ACIOCR_Msk                    _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_ACIOCR) Register Mask  */


/* -------- DDR3PHY_DXCCR : (DDR3PHY Offset: 0x28) (R/W 32) DATX8 I/O Configuration Register -------- */
#define DDR3PHY_DXCCR_DXODT_Pos               _U_(0)                                               /**< (DDR3PHY_DXCCR) Data On-Die Termination: Enables, when set, the on-die termination on the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the ODT configuration bit of the individual DATX8 Position */
#define DDR3PHY_DXCCR_DXODT_Msk               (_U_(0x1) << DDR3PHY_DXCCR_DXODT_Pos)                /**< (DDR3PHY_DXCCR) Data On-Die Termination: Enables, when set, the on-die termination on the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the ODT configuration bit of the individual DATX8 Mask */
#define DDR3PHY_DXCCR_DXODT(value)            (DDR3PHY_DXCCR_DXODT_Msk & ((value) << DDR3PHY_DXCCR_DXODT_Pos))
#define DDR3PHY_DXCCR_DXIOM_Pos               _U_(1)                                               /**< (DDR3PHY_DXCCR) Data I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the IOM configuration bit of the individual DATX8 Position */
#define DDR3PHY_DXCCR_DXIOM_Msk               (_U_(0x1) << DDR3PHY_DXCCR_DXIOM_Pos)                /**< (DDR3PHY_DXCCR) Data I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the IOM configuration bit of the individual DATX8 Mask */
#define DDR3PHY_DXCCR_DXIOM(value)            (DDR3PHY_DXCCR_DXIOM_Msk & ((value) << DDR3PHY_DXCCR_DXIOM_Pos))
#define DDR3PHY_DXCCR_DXPDD_Pos               _U_(2)                                               /**< (DDR3PHY_DXCCR) Data Power Down Driver: Powers down, when set, the output driver on I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the PDD configuration bit of the individual DATX8 Position */
#define DDR3PHY_DXCCR_DXPDD_Msk               (_U_(0x1) << DDR3PHY_DXCCR_DXPDD_Pos)                /**< (DDR3PHY_DXCCR) Data Power Down Driver: Powers down, when set, the output driver on I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the PDD configuration bit of the individual DATX8 Mask */
#define DDR3PHY_DXCCR_DXPDD(value)            (DDR3PHY_DXCCR_DXPDD_Msk & ((value) << DDR3PHY_DXCCR_DXPDD_Pos))
#define DDR3PHY_DXCCR_DXPDR_Pos               _U_(3)                                               /**< (DDR3PHY_DXCCR) Data Power Down Receiver: Powers down, when set, the input receiver on I/O for Position */
#define DDR3PHY_DXCCR_DXPDR_Msk               (_U_(0x1) << DDR3PHY_DXCCR_DXPDR_Pos)                /**< (DDR3PHY_DXCCR) Data Power Down Receiver: Powers down, when set, the input receiver on I/O for Mask */
#define DDR3PHY_DXCCR_DXPDR(value)            (DDR3PHY_DXCCR_DXPDR_Msk & ((value) << DDR3PHY_DXCCR_DXPDR_Pos))
#define DDR3PHY_DXCCR_DQSRES_Pos              _U_(4)                                               /**< (DDR3PHY_DXCCR) DQS Resistor: Selects the on-die pull-down/pull-up resistor for DQS pins. Position */
#define DDR3PHY_DXCCR_DQSRES_Msk              (_U_(0xF) << DDR3PHY_DXCCR_DQSRES_Pos)               /**< (DDR3PHY_DXCCR) DQS Resistor: Selects the on-die pull-down/pull-up resistor for DQS pins. Mask */
#define DDR3PHY_DXCCR_DQSRES(value)           (DDR3PHY_DXCCR_DQSRES_Msk & ((value) << DDR3PHY_DXCCR_DQSRES_Pos))
#define DDR3PHY_DXCCR_DQSNRES_Pos             _U_(8)                                               /**< (DDR3PHY_DXCCR) DQS# Resistor: Selects the on-die pull-up/pull-down resistor for DQS# pins. Same encoding as DQSRES. Position */
#define DDR3PHY_DXCCR_DQSNRES_Msk             (_U_(0xF) << DDR3PHY_DXCCR_DQSNRES_Pos)              /**< (DDR3PHY_DXCCR) DQS# Resistor: Selects the on-die pull-up/pull-down resistor for DQS# pins. Same encoding as DQSRES. Mask */
#define DDR3PHY_DXCCR_DQSNRES(value)          (DDR3PHY_DXCCR_DQSNRES_Msk & ((value) << DDR3PHY_DXCCR_DQSNRES_Pos))
#define DDR3PHY_DXCCR_DXSR_Pos                _U_(12)                                              /**< (DDR3PHY_DXCCR) Data Slew Rate (D3F I/O Only): Selects slew rate of the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. Position */
#define DDR3PHY_DXCCR_DXSR_Msk                (_U_(0x3) << DDR3PHY_DXCCR_DXSR_Pos)                 /**< (DDR3PHY_DXCCR) Data Slew Rate (D3F I/O Only): Selects slew rate of the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. Mask */
#define DDR3PHY_DXCCR_DXSR(value)             (DDR3PHY_DXCCR_DXSR_Msk & ((value) << DDR3PHY_DXCCR_DXSR_Pos))
#define DDR3PHY_DXCCR_DQSNRST_Pos             _U_(14)                                              /**< (DDR3PHY_DXCCR) DQS# Reset: Indicates, if set, that the ITMS of DQS# should always be put in reset such that its output enable is always '1' and its data output is always '0'. This is done by driving the oe_set_b and do_rst_b pins of this ITMS to '0' in order to force the unused DQS# PAD to a known state of '0' in applications that don't use DQS# such as in LPDDR mode. Position */
#define DDR3PHY_DXCCR_DQSNRST_Msk             (_U_(0x1) << DDR3PHY_DXCCR_DQSNRST_Pos)              /**< (DDR3PHY_DXCCR) DQS# Reset: Indicates, if set, that the ITMS of DQS# should always be put in reset such that its output enable is always '1' and its data output is always '0'. This is done by driving the oe_set_b and do_rst_b pins of this ITMS to '0' in order to force the unused DQS# PAD to a known state of '0' in applications that don't use DQS# such as in LPDDR mode. Mask */
#define DDR3PHY_DXCCR_DQSNRST(value)          (DDR3PHY_DXCCR_DQSNRST_Msk & ((value) << DDR3PHY_DXCCR_DQSNRST_Pos))
#define DDR3PHY_DXCCR_RVSEL_Pos               _U_(15)                                              /**< (DDR3PHY_DXCCR) ITMD Read Valid Select: Selects the scheme used for ITMD read valid. Position */
#define DDR3PHY_DXCCR_RVSEL_Msk               (_U_(0x1) << DDR3PHY_DXCCR_RVSEL_Pos)                /**< (DDR3PHY_DXCCR) ITMD Read Valid Select: Selects the scheme used for ITMD read valid. Mask */
#define DDR3PHY_DXCCR_RVSEL(value)            (DDR3PHY_DXCCR_RVSEL_Msk & ((value) << DDR3PHY_DXCCR_RVSEL_Pos))
#define DDR3PHY_DXCCR_AWDT_Pos                _U_(16)                                              /**< (DDR3PHY_DXCCR) Active Window Data Train: Indicates if set that data training (DQS gate training and read valid training) should be performed with active DQS gate window. This is just for debug purposes. The default is to perform training with passive windowing. Position */
#define DDR3PHY_DXCCR_AWDT_Msk                (_U_(0x1) << DDR3PHY_DXCCR_AWDT_Pos)                 /**< (DDR3PHY_DXCCR) Active Window Data Train: Indicates if set that data training (DQS gate training and read valid training) should be performed with active DQS gate window. This is just for debug purposes. The default is to perform training with passive windowing. Mask */
#define DDR3PHY_DXCCR_AWDT(value)             (DDR3PHY_DXCCR_AWDT_Msk & ((value) << DDR3PHY_DXCCR_AWDT_Pos))
#define DDR3PHY_DXCCR_Msk                     _U_(0x0001FFFF)                                      /**< (DDR3PHY_DXCCR) Register Mask  */


/* -------- DDR3PHY_DSGCR : (DDR3PHY Offset: 0x2C) (R/W 32) DFI Configuration Register -------- */
#define DDR3PHY_DSGCR_PUREN_Pos               _U_(0)                                               /**< (DDR3PHY_DSGCR) PHY Update Request Enable: Specifies if set, that the PHY should issue PHYinitiated DFI update request when there is DQS drift of more than 3/4 of a clock cycle within one continuous (back-to-back) read burst. By default the PHY issues PHYinitiated update requests and the controller should respond otherwise the PHY may return erroneous values. The option to disable it is provided only for silicon evaluation and testing. Position */
#define DDR3PHY_DSGCR_PUREN_Msk               (_U_(0x1) << DDR3PHY_DSGCR_PUREN_Pos)                /**< (DDR3PHY_DSGCR) PHY Update Request Enable: Specifies if set, that the PHY should issue PHYinitiated DFI update request when there is DQS drift of more than 3/4 of a clock cycle within one continuous (back-to-back) read burst. By default the PHY issues PHYinitiated update requests and the controller should respond otherwise the PHY may return erroneous values. The option to disable it is provided only for silicon evaluation and testing. Mask */
#define DDR3PHY_DSGCR_PUREN(value)            (DDR3PHY_DSGCR_PUREN_Msk & ((value) << DDR3PHY_DSGCR_PUREN_Pos))
#define DDR3PHY_DSGCR_BDISEN_Pos              _U_(1)                                               /**< (DDR3PHY_DSGCR) Byte Disable Enable: Specifies if set that the PHY should respond to DFI byte disable request. Otherwise the byte disable from the DFI is ignored in which case bytes can only be disabled using the DXnGCR register. Position */
#define DDR3PHY_DSGCR_BDISEN_Msk              (_U_(0x1) << DDR3PHY_DSGCR_BDISEN_Pos)               /**< (DDR3PHY_DSGCR) Byte Disable Enable: Specifies if set that the PHY should respond to DFI byte disable request. Otherwise the byte disable from the DFI is ignored in which case bytes can only be disabled using the DXnGCR register. Mask */
#define DDR3PHY_DSGCR_BDISEN(value)           (DDR3PHY_DSGCR_BDISEN_Msk & ((value) << DDR3PHY_DSGCR_BDISEN_Pos))
#define DDR3PHY_DSGCR_ZUEN_Pos                _U_(2)                                               /**< (DDR3PHY_DSGCR) Impedance Update Enable: Specifies if set that the PHY should perform impedance calibration (update) whenever there is a controller initiated DFI update request. Position */
#define DDR3PHY_DSGCR_ZUEN_Msk                (_U_(0x1) << DDR3PHY_DSGCR_ZUEN_Pos)                 /**< (DDR3PHY_DSGCR) Impedance Update Enable: Specifies if set that the PHY should perform impedance calibration (update) whenever there is a controller initiated DFI update request. Mask */
#define DDR3PHY_DSGCR_ZUEN(value)             (DDR3PHY_DSGCR_ZUEN_Msk & ((value) << DDR3PHY_DSGCR_ZUEN_Pos))
#define DDR3PHY_DSGCR_LPIOPD_Pos              _U_(3)                                               /**< (DDR3PHY_DSGCR) Low Power I/O Power Down: Specifies if set that the PHY should respond to the DFI low power opportunity request and power down the I/Os of the PHY. Position */
#define DDR3PHY_DSGCR_LPIOPD_Msk              (_U_(0x1) << DDR3PHY_DSGCR_LPIOPD_Pos)               /**< (DDR3PHY_DSGCR) Low Power I/O Power Down: Specifies if set that the PHY should respond to the DFI low power opportunity request and power down the I/Os of the PHY. Mask */
#define DDR3PHY_DSGCR_LPIOPD(value)           (DDR3PHY_DSGCR_LPIOPD_Msk & ((value) << DDR3PHY_DSGCR_LPIOPD_Pos))
#define DDR3PHY_DSGCR_LPDLLPD_Pos             _U_(4)                                               /**< (DDR3PHY_DSGCR) Low Power DLL Power Down: Specifies if set that the PHY should respond to the DFI low power opportunity request and power down the DLL of the PHY if the wakeup time request satisfies the DLL lock time. Position */
#define DDR3PHY_DSGCR_LPDLLPD_Msk             (_U_(0x1) << DDR3PHY_DSGCR_LPDLLPD_Pos)              /**< (DDR3PHY_DSGCR) Low Power DLL Power Down: Specifies if set that the PHY should respond to the DFI low power opportunity request and power down the DLL of the PHY if the wakeup time request satisfies the DLL lock time. Mask */
#define DDR3PHY_DSGCR_LPDLLPD(value)          (DDR3PHY_DSGCR_LPDLLPD_Msk & ((value) << DDR3PHY_DSGCR_LPDLLPD_Pos))
#define DDR3PHY_DSGCR_DQSGX_Pos               _U_(5)                                               /**< (DDR3PHY_DSGCR) DQS Gate Extension: Specifies the number of clock cycles for which the DQS gating must be extended beyond the normal burst length width. Only applicable when using PDQSR I/O cell, passive DQS gating and no drift compensation. This field is recommended to be set to zero for all DDR types other than Position */
#define DDR3PHY_DSGCR_DQSGX_Msk               (_U_(0x7) << DDR3PHY_DSGCR_DQSGX_Pos)                /**< (DDR3PHY_DSGCR) DQS Gate Extension: Specifies the number of clock cycles for which the DQS gating must be extended beyond the normal burst length width. Only applicable when using PDQSR I/O cell, passive DQS gating and no drift compensation. This field is recommended to be set to zero for all DDR types other than Mask */
#define DDR3PHY_DSGCR_DQSGX(value)            (DDR3PHY_DSGCR_DQSGX_Msk & ((value) << DDR3PHY_DSGCR_DQSGX_Pos))
#define DDR3PHY_DSGCR_DQSGE_Pos               _U_(8)                                               /**< (DDR3PHY_DSGCR) DQS Gate Early: Specifies the number of clock cycles for which the DQS gating must be enabled earlier than its normal position. Only applicable when using PDQSR I/O cell, passive DQS gating and no drift compensation. This field is recommended to be set to zero for all DDR types other than Position */
#define DDR3PHY_DSGCR_DQSGE_Msk               (_U_(0x7) << DDR3PHY_DSGCR_DQSGE_Pos)                /**< (DDR3PHY_DSGCR) DQS Gate Early: Specifies the number of clock cycles for which the DQS gating must be enabled earlier than its normal position. Only applicable when using PDQSR I/O cell, passive DQS gating and no drift compensation. This field is recommended to be set to zero for all DDR types other than Mask */
#define DDR3PHY_DSGCR_DQSGE(value)            (DDR3PHY_DSGCR_DQSGE_Msk & ((value) << DDR3PHY_DSGCR_DQSGE_Pos))
#define DDR3PHY_DSGCR_NOBUB_Pos               _U_(11)                                              /**< (DDR3PHY_DSGCR) No Bubbles: Specified whether reads should be returned to the controller with no bubbles. Enabling no-bubble reads increases the read latency. Position */
#define DDR3PHY_DSGCR_NOBUB_Msk               (_U_(0x1) << DDR3PHY_DSGCR_NOBUB_Pos)                /**< (DDR3PHY_DSGCR) No Bubbles: Specified whether reads should be returned to the controller with no bubbles. Enabling no-bubble reads increases the read latency. Mask */
#define DDR3PHY_DSGCR_NOBUB(value)            (DDR3PHY_DSGCR_NOBUB_Msk & ((value) << DDR3PHY_DSGCR_NOBUB_Pos))
#define DDR3PHY_DSGCR_FXDLAT_Pos              _U_(12)                                              /**< (DDR3PHY_DSGCR) Fixed Latency: Specified whether all reads should be returned to the controller with a fixed read latency. Enabling fixed read latency increases the read latency. Position */
#define DDR3PHY_DSGCR_FXDLAT_Msk              (_U_(0x1) << DDR3PHY_DSGCR_FXDLAT_Pos)               /**< (DDR3PHY_DSGCR) Fixed Latency: Specified whether all reads should be returned to the controller with a fixed read latency. Enabling fixed read latency increases the read latency. Mask */
#define DDR3PHY_DSGCR_FXDLAT(value)           (DDR3PHY_DSGCR_FXDLAT_Msk & ((value) << DDR3PHY_DSGCR_FXDLAT_Pos))
#define DDR3PHY_DSGCR_CKEPDD_Pos              _U_(16)                                              /**< (DDR3PHY_DSGCR) CKE Power Down Driver: Powers down, when set, the output driver on the I/O for CKE[3:0] pins. CKEPDD[0] controls the power down for CKE[0], CKEPDD[1] controls the power down for CKE[1], and so on. Position */
#define DDR3PHY_DSGCR_CKEPDD_Msk              (_U_(0xF) << DDR3PHY_DSGCR_CKEPDD_Pos)               /**< (DDR3PHY_DSGCR) CKE Power Down Driver: Powers down, when set, the output driver on the I/O for CKE[3:0] pins. CKEPDD[0] controls the power down for CKE[0], CKEPDD[1] controls the power down for CKE[1], and so on. Mask */
#define DDR3PHY_DSGCR_CKEPDD(value)           (DDR3PHY_DSGCR_CKEPDD_Msk & ((value) << DDR3PHY_DSGCR_CKEPDD_Pos))
#define DDR3PHY_DSGCR_ODTPDD_Pos              _U_(20)                                              /**< (DDR3PHY_DSGCR) ODT Power Down Driver: Powers down, when set, the output driver on the I/O for ODT[3:0] pins. ODTPDD[0] controls the power down for ODT[0], ODTPDD[1] controls the power down for ODT[1], and so on. Position */
#define DDR3PHY_DSGCR_ODTPDD_Msk              (_U_(0xF) << DDR3PHY_DSGCR_ODTPDD_Pos)               /**< (DDR3PHY_DSGCR) ODT Power Down Driver: Powers down, when set, the output driver on the I/O for ODT[3:0] pins. ODTPDD[0] controls the power down for ODT[0], ODTPDD[1] controls the power down for ODT[1], and so on. Mask */
#define DDR3PHY_DSGCR_ODTPDD(value)           (DDR3PHY_DSGCR_ODTPDD_Msk & ((value) << DDR3PHY_DSGCR_ODTPDD_Pos))
#define DDR3PHY_DSGCR_NL2PD_Pos               _U_(24)                                              /**< (DDR3PHY_DSGCR) Non-LPDDR2/LPDDR3 Power Down: Powers down, when set, the output driver and the input receiver on the I/O for non-LPDDR2/LPDDR3 (ODT, RAS#, CAS#, WE#, Position */
#define DDR3PHY_DSGCR_NL2PD_Msk               (_U_(0x1) << DDR3PHY_DSGCR_NL2PD_Pos)                /**< (DDR3PHY_DSGCR) Non-LPDDR2/LPDDR3 Power Down: Powers down, when set, the output driver and the input receiver on the I/O for non-LPDDR2/LPDDR3 (ODT, RAS#, CAS#, WE#, Mask */
#define DDR3PHY_DSGCR_NL2PD(value)            (DDR3PHY_DSGCR_NL2PD_Msk & ((value) << DDR3PHY_DSGCR_NL2PD_Pos))
#define DDR3PHY_DSGCR_NL2OE_Pos               _U_(25)                                              /**< (DDR3PHY_DSGCR) Non-LPDDR2/LPDDR3 Output Enable: Enables, when set, the output driver on the I/O for non-LPDDR2/LPDDR3 (ODT, RAS#, CAS#, WE#, and BA) pins. This may be used when a chip that is designed for both LPDDR2/LPDDR3 and other DDR modes is being used in LPDDR2/LPDDR3 mode. For these pins, the I/O output enable signal (OE) is an AND of this bit and the respective output enable bit in ACIOCR or DSGCR registers. Position */
#define DDR3PHY_DSGCR_NL2OE_Msk               (_U_(0x1) << DDR3PHY_DSGCR_NL2OE_Pos)                /**< (DDR3PHY_DSGCR) Non-LPDDR2/LPDDR3 Output Enable: Enables, when set, the output driver on the I/O for non-LPDDR2/LPDDR3 (ODT, RAS#, CAS#, WE#, and BA) pins. This may be used when a chip that is designed for both LPDDR2/LPDDR3 and other DDR modes is being used in LPDDR2/LPDDR3 mode. For these pins, the I/O output enable signal (OE) is an AND of this bit and the respective output enable bit in ACIOCR or DSGCR registers. Mask */
#define DDR3PHY_DSGCR_NL2OE(value)            (DDR3PHY_DSGCR_NL2OE_Msk & ((value) << DDR3PHY_DSGCR_NL2OE_Pos))
#define DDR3PHY_DSGCR_TPDPD_Pos               _U_(26)                                              /**< (DDR3PHY_DSGCR) SDRAM TPD Power Down Driver (LPDDR Only): Powers down, when set, the output driver on the I/O for SDRAM TPD pin. Note that the power down of the receiver on the I/O for SDRAM TPD pin is controlled by ACIOCR[ACPDR] register bit. Position */
#define DDR3PHY_DSGCR_TPDPD_Msk               (_U_(0x1) << DDR3PHY_DSGCR_TPDPD_Pos)                /**< (DDR3PHY_DSGCR) SDRAM TPD Power Down Driver (LPDDR Only): Powers down, when set, the output driver on the I/O for SDRAM TPD pin. Note that the power down of the receiver on the I/O for SDRAM TPD pin is controlled by ACIOCR[ACPDR] register bit. Mask */
#define DDR3PHY_DSGCR_TPDPD(value)            (DDR3PHY_DSGCR_TPDPD_Msk & ((value) << DDR3PHY_DSGCR_TPDPD_Pos))
#define DDR3PHY_DSGCR_TPDOE_Pos               _U_(27)                                              /**< (DDR3PHY_DSGCR) SDRAM TPD Output Enable (LPDDR Only): Enables, when set, the output driver on the I/O for SDRAM TPD pin. Position */
#define DDR3PHY_DSGCR_TPDOE_Msk               (_U_(0x1) << DDR3PHY_DSGCR_TPDOE_Pos)                /**< (DDR3PHY_DSGCR) SDRAM TPD Output Enable (LPDDR Only): Enables, when set, the output driver on the I/O for SDRAM TPD pin. Mask */
#define DDR3PHY_DSGCR_TPDOE(value)            (DDR3PHY_DSGCR_TPDOE_Msk & ((value) << DDR3PHY_DSGCR_TPDOE_Pos))
#define DDR3PHY_DSGCR_CKOE_Pos                _U_(28)                                              /**< (DDR3PHY_DSGCR) SDRAM CK Output Enable: Enables, when set, the output driver on the I/O for SDRAM CK/CK# pins. Position */
#define DDR3PHY_DSGCR_CKOE_Msk                (_U_(0x1) << DDR3PHY_DSGCR_CKOE_Pos)                 /**< (DDR3PHY_DSGCR) SDRAM CK Output Enable: Enables, when set, the output driver on the I/O for SDRAM CK/CK# pins. Mask */
#define DDR3PHY_DSGCR_CKOE(value)             (DDR3PHY_DSGCR_CKOE_Msk & ((value) << DDR3PHY_DSGCR_CKOE_Pos))
#define DDR3PHY_DSGCR_ODTOE_Pos               _U_(29)                                              /**< (DDR3PHY_DSGCR) SDRAM ODT Output Enable: Enables, when set, the output driver on the I/O for SDRAM ODT pins. Position */
#define DDR3PHY_DSGCR_ODTOE_Msk               (_U_(0x1) << DDR3PHY_DSGCR_ODTOE_Pos)                /**< (DDR3PHY_DSGCR) SDRAM ODT Output Enable: Enables, when set, the output driver on the I/O for SDRAM ODT pins. Mask */
#define DDR3PHY_DSGCR_ODTOE(value)            (DDR3PHY_DSGCR_ODTOE_Msk & ((value) << DDR3PHY_DSGCR_ODTOE_Pos))
#define DDR3PHY_DSGCR_RSTOE_Pos               _U_(30)                                              /**< (DDR3PHY_DSGCR) SDRAM Reset Output Enable: Enables, when set, the output driver on the I/O for SDRAM RST# pin. Position */
#define DDR3PHY_DSGCR_RSTOE_Msk               (_U_(0x1) << DDR3PHY_DSGCR_RSTOE_Pos)                /**< (DDR3PHY_DSGCR) SDRAM Reset Output Enable: Enables, when set, the output driver on the I/O for SDRAM RST# pin. Mask */
#define DDR3PHY_DSGCR_RSTOE(value)            (DDR3PHY_DSGCR_RSTOE_Msk & ((value) << DDR3PHY_DSGCR_RSTOE_Pos))
#define DDR3PHY_DSGCR_CKEOE_Pos               _U_(31)                                              /**< (DDR3PHY_DSGCR) SDRAM CKE Output Enable: Enables, when set, the output driver on the I/O for SDRAM CKE pins. Position */
#define DDR3PHY_DSGCR_CKEOE_Msk               (_U_(0x1) << DDR3PHY_DSGCR_CKEOE_Pos)                /**< (DDR3PHY_DSGCR) SDRAM CKE Output Enable: Enables, when set, the output driver on the I/O for SDRAM CKE pins. Mask */
#define DDR3PHY_DSGCR_CKEOE(value)            (DDR3PHY_DSGCR_CKEOE_Msk & ((value) << DDR3PHY_DSGCR_CKEOE_Pos))
#define DDR3PHY_DSGCR_Msk                     _U_(0xFFFF1FFF)                                      /**< (DDR3PHY_DSGCR) Register Mask  */


/* -------- DDR3PHY_DCR : (DDR3PHY Offset: 0x30) (R/W 32) DRAM Configuration Register -------- */
#define DDR3PHY_DCR_DDRMD_Pos                 _U_(0)                                               /**< (DDR3PHY_DCR) DDR Mode: SDRAM DDR mode. Position */
#define DDR3PHY_DCR_DDRMD_Msk                 (_U_(0x7) << DDR3PHY_DCR_DDRMD_Pos)                  /**< (DDR3PHY_DCR) DDR Mode: SDRAM DDR mode. Mask */
#define DDR3PHY_DCR_DDRMD(value)              (DDR3PHY_DCR_DDRMD_Msk & ((value) << DDR3PHY_DCR_DDRMD_Pos))
#define DDR3PHY_DCR_DDR8BNK_Pos               _U_(3)                                               /**< (DDR3PHY_DCR) DDR 8-Bank: Indicates if set that the SDRAM used has 8 banks. tRPA = tRP+1 and tFAW are used for 8-bank DRAMs, other tRPA = tRP and no tFAW is used. Note that Position */
#define DDR3PHY_DCR_DDR8BNK_Msk               (_U_(0x1) << DDR3PHY_DCR_DDR8BNK_Pos)                /**< (DDR3PHY_DCR) DDR 8-Bank: Indicates if set that the SDRAM used has 8 banks. tRPA = tRP+1 and tFAW are used for 8-bank DRAMs, other tRPA = tRP and no tFAW is used. Note that Mask */
#define DDR3PHY_DCR_DDR8BNK(value)            (DDR3PHY_DCR_DDR8BNK_Msk & ((value) << DDR3PHY_DCR_DDR8BNK_Pos))
#define DDR3PHY_DCR_PDQ_Pos                   _U_(4)                                               /**< (DDR3PHY_DCR) Primary DQ (DDR3 Only): Specifies the DQ pin in a byte that is designated as a primary pin for Multi-Purpose Register (MPR) reads. Valid values are 0 to 7 for DQ[0] to DQ[7], respectively. Position */
#define DDR3PHY_DCR_PDQ_Msk                   (_U_(0x7) << DDR3PHY_DCR_PDQ_Pos)                    /**< (DDR3PHY_DCR) Primary DQ (DDR3 Only): Specifies the DQ pin in a byte that is designated as a primary pin for Multi-Purpose Register (MPR) reads. Valid values are 0 to 7 for DQ[0] to DQ[7], respectively. Mask */
#define DDR3PHY_DCR_PDQ(value)                (DDR3PHY_DCR_PDQ_Msk & ((value) << DDR3PHY_DCR_PDQ_Pos))
#define DDR3PHY_DCR_MPRDQ_Pos                 _U_(7)                                               /**< (DDR3PHY_DCR) Multi-Purpose Register (MPR) DQ (DDR3 Only): Specifies the value that is driven on non-primary DQ pins during MPR reads. Position */
#define DDR3PHY_DCR_MPRDQ_Msk                 (_U_(0x1) << DDR3PHY_DCR_MPRDQ_Pos)                  /**< (DDR3PHY_DCR) Multi-Purpose Register (MPR) DQ (DDR3 Only): Specifies the value that is driven on non-primary DQ pins during MPR reads. Mask */
#define DDR3PHY_DCR_MPRDQ(value)              (DDR3PHY_DCR_MPRDQ_Msk & ((value) << DDR3PHY_DCR_MPRDQ_Pos))
#define DDR3PHY_DCR_DDRTYPE_Pos               _U_(8)                                               /**< (DDR3PHY_DCR) DDR Type: Selects the DDR type for the specified LPDDR mode. Position */
#define DDR3PHY_DCR_DDRTYPE_Msk               (_U_(0x3) << DDR3PHY_DCR_DDRTYPE_Pos)                /**< (DDR3PHY_DCR) DDR Type: Selects the DDR type for the specified LPDDR mode. Mask */
#define DDR3PHY_DCR_DDRTYPE(value)            (DDR3PHY_DCR_DDRTYPE_Msk & ((value) << DDR3PHY_DCR_DDRTYPE_Pos))
#define DDR3PHY_DCR_NOSRA_Pos                 _U_(27)                                              /**< (DDR3PHY_DCR) No Simultaneous Rank Access: Specifies if set that simultaneous rank access on the same clock cycle is not allowed. This means that multiple chip select signals should not be asserted at the same time. This may be required on some DIMM systems. Position */
#define DDR3PHY_DCR_NOSRA_Msk                 (_U_(0x1) << DDR3PHY_DCR_NOSRA_Pos)                  /**< (DDR3PHY_DCR) No Simultaneous Rank Access: Specifies if set that simultaneous rank access on the same clock cycle is not allowed. This means that multiple chip select signals should not be asserted at the same time. This may be required on some DIMM systems. Mask */
#define DDR3PHY_DCR_NOSRA(value)              (DDR3PHY_DCR_NOSRA_Msk & ((value) << DDR3PHY_DCR_NOSRA_Pos))
#define DDR3PHY_DCR_DDR2T_Pos                 _U_(28)                                              /**< (DDR3PHY_DCR) DDR 2T Timing: Indicates if set that 2T timing should be used by PUB internally generated SDRAM transactions. Position */
#define DDR3PHY_DCR_DDR2T_Msk                 (_U_(0x1) << DDR3PHY_DCR_DDR2T_Pos)                  /**< (DDR3PHY_DCR) DDR 2T Timing: Indicates if set that 2T timing should be used by PUB internally generated SDRAM transactions. Mask */
#define DDR3PHY_DCR_DDR2T(value)              (DDR3PHY_DCR_DDR2T_Msk & ((value) << DDR3PHY_DCR_DDR2T_Pos))
#define DDR3PHY_DCR_UDIMM_Pos                 _U_(29)                                              /**< (DDR3PHY_DCR) Un-buffered DIMM Address Mirroring: Indicates if set that there is address mirroring on the second rank of an un-buffered DIMM (the rank connected to CS#[1]). In this case, the PUB re-scrambles the bank and address when sending mode register commands to the second rank. This only applies to PUB internal SDRAM transactions. Transactions generated by the controller must make its own adjustments when using an un-buffered DIMM. DCR[NOSRA] must be set if address mirroring is enabled. Position */
#define DDR3PHY_DCR_UDIMM_Msk                 (_U_(0x1) << DDR3PHY_DCR_UDIMM_Pos)                  /**< (DDR3PHY_DCR) Un-buffered DIMM Address Mirroring: Indicates if set that there is address mirroring on the second rank of an un-buffered DIMM (the rank connected to CS#[1]). In this case, the PUB re-scrambles the bank and address when sending mode register commands to the second rank. This only applies to PUB internal SDRAM transactions. Transactions generated by the controller must make its own adjustments when using an un-buffered DIMM. DCR[NOSRA] must be set if address mirroring is enabled. Mask */
#define DDR3PHY_DCR_UDIMM(value)              (DDR3PHY_DCR_UDIMM_Msk & ((value) << DDR3PHY_DCR_UDIMM_Pos))
#define DDR3PHY_DCR_RDIMM_Pos                 _U_(30)                                              /**< (DDR3PHY_DCR) Registered DIMM: Indicates if set that a registered DIMM is used. In this case, the PUB increases the SDRAM write and read latencies (WL/RL) by 1. This only applies to PUB internal SDRAM transactions. Transactions generated by the controller must make its own adjustments to WL/RL when using a registered DIMM. Position */
#define DDR3PHY_DCR_RDIMM_Msk                 (_U_(0x1) << DDR3PHY_DCR_RDIMM_Pos)                  /**< (DDR3PHY_DCR) Registered DIMM: Indicates if set that a registered DIMM is used. In this case, the PUB increases the SDRAM write and read latencies (WL/RL) by 1. This only applies to PUB internal SDRAM transactions. Transactions generated by the controller must make its own adjustments to WL/RL when using a registered DIMM. Mask */
#define DDR3PHY_DCR_RDIMM(value)              (DDR3PHY_DCR_RDIMM_Msk & ((value) << DDR3PHY_DCR_RDIMM_Pos))
#define DDR3PHY_DCR_TPD_Pos                   _U_(31)                                              /**< (DDR3PHY_DCR) Test Power Down (LPDDR Only): If set will place the DRAM in deep power down mode. Position */
#define DDR3PHY_DCR_TPD_Msk                   (_U_(0x1) << DDR3PHY_DCR_TPD_Pos)                    /**< (DDR3PHY_DCR) Test Power Down (LPDDR Only): If set will place the DRAM in deep power down mode. Mask */
#define DDR3PHY_DCR_TPD(value)                (DDR3PHY_DCR_TPD_Msk & ((value) << DDR3PHY_DCR_TPD_Pos))
#define DDR3PHY_DCR_Msk                       _U_(0xF80003FF)                                      /**< (DDR3PHY_DCR) Register Mask  */


/* -------- DDR3PHY_DTPR0 : (DDR3PHY Offset: 0x34) (R/W 32) SDRAM Timing Parameters Register 0 -------- */
#define DDR3PHY_DTPR0_TMRD_Pos                _U_(0)                                               /**< (DDR3PHY_DTPR0) Load mode cycle time: The minimum time between a load mode register command and any other command. For DDR3 this is the minimum time between two load mode register commands. Valid values for DDR2 are 2 to 3. For DDR3, the value used for tMRD is 4 plus the value programmed in these bits, i.e. tMRD value for DDR3 ranges from 4 to 7. For LPDDR3, the value used for tMRD is 8 plus the value programmed in these bits. Position */
#define DDR3PHY_DTPR0_TMRD_Msk                (_U_(0x3) << DDR3PHY_DTPR0_TMRD_Pos)                 /**< (DDR3PHY_DTPR0) Load mode cycle time: The minimum time between a load mode register command and any other command. For DDR3 this is the minimum time between two load mode register commands. Valid values for DDR2 are 2 to 3. For DDR3, the value used for tMRD is 4 plus the value programmed in these bits, i.e. tMRD value for DDR3 ranges from 4 to 7. For LPDDR3, the value used for tMRD is 8 plus the value programmed in these bits. Mask */
#define DDR3PHY_DTPR0_TMRD(value)             (DDR3PHY_DTPR0_TMRD_Msk & ((value) << DDR3PHY_DTPR0_TMRD_Pos))
#define DDR3PHY_DTPR0_TRTP_Pos                _U_(2)                                               /**< (DDR3PHY_DTPR0) Internal read to precharge command delay. Valid values are 2 to 6. Note that even though RTP does not apply to JEDEC DDR devices, this parameter must still be set to a minimum value of 2 for DDR because the Controller always uses the DDR2 equation, AL + BL/2 + max(RTP,2) - 2, to compute the read to precharge timing (which is BL/2 for JEDEC DDR). Position */
#define DDR3PHY_DTPR0_TRTP_Msk                (_U_(0x7) << DDR3PHY_DTPR0_TRTP_Pos)                 /**< (DDR3PHY_DTPR0) Internal read to precharge command delay. Valid values are 2 to 6. Note that even though RTP does not apply to JEDEC DDR devices, this parameter must still be set to a minimum value of 2 for DDR because the Controller always uses the DDR2 equation, AL + BL/2 + max(RTP,2) - 2, to compute the read to precharge timing (which is BL/2 for JEDEC DDR). Mask */
#define DDR3PHY_DTPR0_TRTP(value)             (DDR3PHY_DTPR0_TRTP_Msk & ((value) << DDR3PHY_DTPR0_TRTP_Pos))
#define DDR3PHY_DTPR0_TWTR_Pos                _U_(5)                                               /**< (DDR3PHY_DTPR0) Internal write to read command delay. Valid values are 1 to 6. Position */
#define DDR3PHY_DTPR0_TWTR_Msk                (_U_(0x7) << DDR3PHY_DTPR0_TWTR_Pos)                 /**< (DDR3PHY_DTPR0) Internal write to read command delay. Valid values are 1 to 6. Mask */
#define DDR3PHY_DTPR0_TWTR(value)             (DDR3PHY_DTPR0_TWTR_Msk & ((value) << DDR3PHY_DTPR0_TWTR_Pos))
#define DDR3PHY_DTPR0_TRP_Pos                 _U_(8)                                               /**< (DDR3PHY_DTPR0) Precharge command period: The minimum time between a precharge command and any other command. Note that the Controller automatically derives tRPA for 8bank DDR2 devices by adding 1 to tRP. Valid values are 2 to 11. Position */
#define DDR3PHY_DTPR0_TRP_Msk                 (_U_(0xF) << DDR3PHY_DTPR0_TRP_Pos)                  /**< (DDR3PHY_DTPR0) Precharge command period: The minimum time between a precharge command and any other command. Note that the Controller automatically derives tRPA for 8bank DDR2 devices by adding 1 to tRP. Valid values are 2 to 11. Mask */
#define DDR3PHY_DTPR0_TRP(value)              (DDR3PHY_DTPR0_TRP_Msk & ((value) << DDR3PHY_DTPR0_TRP_Pos))
#define DDR3PHY_DTPR0_TRCD_Pos                _U_(12)                                              /**< (DDR3PHY_DTPR0) Activate to read or write delay. Minimum time from when an activate command is issued to when a read or write to the activated row can be issued. Valid values are 2 to 11. Position */
#define DDR3PHY_DTPR0_TRCD_Msk                (_U_(0xF) << DDR3PHY_DTPR0_TRCD_Pos)                 /**< (DDR3PHY_DTPR0) Activate to read or write delay. Minimum time from when an activate command is issued to when a read or write to the activated row can be issued. Valid values are 2 to 11. Mask */
#define DDR3PHY_DTPR0_TRCD(value)             (DDR3PHY_DTPR0_TRCD_Msk & ((value) << DDR3PHY_DTPR0_TRCD_Pos))
#define DDR3PHY_DTPR0_TRAS_Pos                _U_(16)                                              /**< (DDR3PHY_DTPR0) Activate to precharge command delay. Valid values are 2 to 31. Position */
#define DDR3PHY_DTPR0_TRAS_Msk                (_U_(0x1F) << DDR3PHY_DTPR0_TRAS_Pos)                /**< (DDR3PHY_DTPR0) Activate to precharge command delay. Valid values are 2 to 31. Mask */
#define DDR3PHY_DTPR0_TRAS(value)             (DDR3PHY_DTPR0_TRAS_Msk & ((value) << DDR3PHY_DTPR0_TRAS_Pos))
#define DDR3PHY_DTPR0_TRRD_Pos                _U_(21)                                              /**< (DDR3PHY_DTPR0) Activate to activate command delay (different banks). Valid values are 1 to 8. Position */
#define DDR3PHY_DTPR0_TRRD_Msk                (_U_(0xF) << DDR3PHY_DTPR0_TRRD_Pos)                 /**< (DDR3PHY_DTPR0) Activate to activate command delay (different banks). Valid values are 1 to 8. Mask */
#define DDR3PHY_DTPR0_TRRD(value)             (DDR3PHY_DTPR0_TRRD_Msk & ((value) << DDR3PHY_DTPR0_TRRD_Pos))
#define DDR3PHY_DTPR0_TRC_Pos                 _U_(25)                                              /**< (DDR3PHY_DTPR0) Activate to activate command delay (same bank). Valid values are 2 to 42. Position */
#define DDR3PHY_DTPR0_TRC_Msk                 (_U_(0x3F) << DDR3PHY_DTPR0_TRC_Pos)                 /**< (DDR3PHY_DTPR0) Activate to activate command delay (same bank). Valid values are 2 to 42. Mask */
#define DDR3PHY_DTPR0_TRC(value)              (DDR3PHY_DTPR0_TRC_Msk & ((value) << DDR3PHY_DTPR0_TRC_Pos))
#define DDR3PHY_DTPR0_TCCD_Pos                _U_(31)                                              /**< (DDR3PHY_DTPR0) Read to read and write to write command delay. Position */
#define DDR3PHY_DTPR0_TCCD_Msk                (_U_(0x1) << DDR3PHY_DTPR0_TCCD_Pos)                 /**< (DDR3PHY_DTPR0) Read to read and write to write command delay. Mask */
#define DDR3PHY_DTPR0_TCCD(value)             (DDR3PHY_DTPR0_TCCD_Msk & ((value) << DDR3PHY_DTPR0_TCCD_Pos))
#define DDR3PHY_DTPR0_Msk                     _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_DTPR0) Register Mask  */


/* -------- DDR3PHY_DTPR1 : (DDR3PHY Offset: 0x38) (R/W 32) SDRAM Timing Parameters Register 1 -------- */
#define DDR3PHY_DTPR1_TAOND_Pos               _U_(0)                                               /**< (DDR3PHY_DTPR1) ODT turn-on/turn-off delays (DDR2 only). The delays are in clock cycles. Valid values are: 00 = 2/2.5 Position */
#define DDR3PHY_DTPR1_TAOND_Msk               (_U_(0x3) << DDR3PHY_DTPR1_TAOND_Pos)                /**< (DDR3PHY_DTPR1) ODT turn-on/turn-off delays (DDR2 only). The delays are in clock cycles. Valid values are: 00 = 2/2.5 Mask */
#define DDR3PHY_DTPR1_TAOND(value)            (DDR3PHY_DTPR1_TAOND_Msk & ((value) << DDR3PHY_DTPR1_TAOND_Pos))
#define DDR3PHY_DTPR1_TRTW_Pos                _U_(2)                                               /**< (DDR3PHY_DTPR1) Read to Write command delay. Position */
#define DDR3PHY_DTPR1_TRTW_Msk                (_U_(0x1) << DDR3PHY_DTPR1_TRTW_Pos)                 /**< (DDR3PHY_DTPR1) Read to Write command delay. Mask */
#define DDR3PHY_DTPR1_TRTW(value)             (DDR3PHY_DTPR1_TRTW_Msk & ((value) << DDR3PHY_DTPR1_TRTW_Pos))
#define DDR3PHY_DTPR1_TFAW_Pos                _U_(3)                                               /**< (DDR3PHY_DTPR1) 4-bank activate period. No more than 4-bank activate commands may be issued in a given tFAW period. Only applies to 8-bank devices. Valid values are 2 to 31. Position */
#define DDR3PHY_DTPR1_TFAW_Msk                (_U_(0x3F) << DDR3PHY_DTPR1_TFAW_Pos)                /**< (DDR3PHY_DTPR1) 4-bank activate period. No more than 4-bank activate commands may be issued in a given tFAW period. Only applies to 8-bank devices. Valid values are 2 to 31. Mask */
#define DDR3PHY_DTPR1_TFAW(value)             (DDR3PHY_DTPR1_TFAW_Msk & ((value) << DDR3PHY_DTPR1_TFAW_Pos))
#define DDR3PHY_DTPR1_TMOD_Pos                _U_(9)                                               /**< (DDR3PHY_DTPR1) Load mode update delay (DDR3 only). The minimum time between a load mode register command and a non-load mode register command. Position */
#define DDR3PHY_DTPR1_TMOD_Msk                (_U_(0x3) << DDR3PHY_DTPR1_TMOD_Pos)                 /**< (DDR3PHY_DTPR1) Load mode update delay (DDR3 only). The minimum time between a load mode register command and a non-load mode register command. Mask */
#define DDR3PHY_DTPR1_TMOD(value)             (DDR3PHY_DTPR1_TMOD_Msk & ((value) << DDR3PHY_DTPR1_TMOD_Pos))
#define DDR3PHY_DTPR1_TRTODT_Pos              _U_(11)                                              /**< (DDR3PHY_DTPR1) Read to ODT delay (DDR3 only). Specifies whether ODT can be enabled immediately after the read post-amble or one clock delay has to be added. Position */
#define DDR3PHY_DTPR1_TRTODT_Msk              (_U_(0x1) << DDR3PHY_DTPR1_TRTODT_Pos)               /**< (DDR3PHY_DTPR1) Read to ODT delay (DDR3 only). Specifies whether ODT can be enabled immediately after the read post-amble or one clock delay has to be added. Mask */
#define DDR3PHY_DTPR1_TRTODT(value)           (DDR3PHY_DTPR1_TRTODT_Msk & ((value) << DDR3PHY_DTPR1_TRTODT_Pos))
#define DDR3PHY_DTPR1_TRFC_Pos                _U_(16)                                              /**< (DDR3PHY_DTPR1) Refresh-to-Refresh: Indicates the minimum time, in clock cycles, between two refresh commands or between a refresh and an active command. This is derived from the minimum refresh interval from the datasheet, tRFC(min), divided by the clock cycle time. The default number of clock cycles is for the largest JEDEC tRFC(min parameter value supported. Position */
#define DDR3PHY_DTPR1_TRFC_Msk                (_U_(0xFF) << DDR3PHY_DTPR1_TRFC_Pos)                /**< (DDR3PHY_DTPR1) Refresh-to-Refresh: Indicates the minimum time, in clock cycles, between two refresh commands or between a refresh and an active command. This is derived from the minimum refresh interval from the datasheet, tRFC(min), divided by the clock cycle time. The default number of clock cycles is for the largest JEDEC tRFC(min parameter value supported. Mask */
#define DDR3PHY_DTPR1_TRFC(value)             (DDR3PHY_DTPR1_TRFC_Msk & ((value) << DDR3PHY_DTPR1_TRFC_Pos))
#define DDR3PHY_DTPR1_TDQSCKMIN_Pos           _U_(24)                                              /**< (DDR3PHY_DTPR1) DQS output access time from CK/CK# (LPDDR2/3 only). This value is used for computing the read latency. Valid values are 0 to 7. This value is derived from the corresponding parameter in the SDRAM datasheet divided by the clock cycle time without rounding up. The fractional remainder is automatically adjusted for by data training in quarter clock cycle units. If data training is not performed then this fractional remainder must be converted to quarter clock cycle units and the gating registers (DXnDQSTR) adjusted accordingly. Position */
#define DDR3PHY_DTPR1_TDQSCKMIN_Msk           (_U_(0x7) << DDR3PHY_DTPR1_TDQSCKMIN_Pos)            /**< (DDR3PHY_DTPR1) DQS output access time from CK/CK# (LPDDR2/3 only). This value is used for computing the read latency. Valid values are 0 to 7. This value is derived from the corresponding parameter in the SDRAM datasheet divided by the clock cycle time without rounding up. The fractional remainder is automatically adjusted for by data training in quarter clock cycle units. If data training is not performed then this fractional remainder must be converted to quarter clock cycle units and the gating registers (DXnDQSTR) adjusted accordingly. Mask */
#define DDR3PHY_DTPR1_TDQSCKMIN(value)        (DDR3PHY_DTPR1_TDQSCKMIN_Msk & ((value) << DDR3PHY_DTPR1_TDQSCKMIN_Pos))
#define DDR3PHY_DTPR1_TDQSCKMAX_Pos           _U_(27)                                              /**< (DDR3PHY_DTPR1) Maximum DQS output access time from CK/CK# (LPDDR2 only). This value is used for implementing read-to-write spacing. Valid values are 1 to 7. Position */
#define DDR3PHY_DTPR1_TDQSCKMAX_Msk           (_U_(0x7) << DDR3PHY_DTPR1_TDQSCKMAX_Pos)            /**< (DDR3PHY_DTPR1) Maximum DQS output access time from CK/CK# (LPDDR2 only). This value is used for implementing read-to-write spacing. Valid values are 1 to 7. Mask */
#define DDR3PHY_DTPR1_TDQSCKMAX(value)        (DDR3PHY_DTPR1_TDQSCKMAX_Msk & ((value) << DDR3PHY_DTPR1_TDQSCKMAX_Pos))
#define DDR3PHY_DTPR1_Msk                     _U_(0x3FFF0FFF)                                      /**< (DDR3PHY_DTPR1) Register Mask  */


/* -------- DDR3PHY_DTPR2 : (DDR3PHY Offset: 0x3C) (R/W 32) SDRAM Timing Parameters Register 2 -------- */
#define DDR3PHY_DTPR2_TXS_Pos                 _U_(0)                                               /**< (DDR3PHY_DTPR2) Self refresh exit delay. The minimum time between a self refresh exit command and any other command. This parameter must be set to the maximum of the various minimum self refresh exit delay parameters specified in the SDRAM datasheet, i.e. max(tXSNR, tXSRD) for DDR2 and max(tXS, tXSDLL) for DDR3. Valid values are 2 to 1023. Position */
#define DDR3PHY_DTPR2_TXS_Msk                 (_U_(0x3FF) << DDR3PHY_DTPR2_TXS_Pos)                /**< (DDR3PHY_DTPR2) Self refresh exit delay. The minimum time between a self refresh exit command and any other command. This parameter must be set to the maximum of the various minimum self refresh exit delay parameters specified in the SDRAM datasheet, i.e. max(tXSNR, tXSRD) for DDR2 and max(tXS, tXSDLL) for DDR3. Valid values are 2 to 1023. Mask */
#define DDR3PHY_DTPR2_TXS(value)              (DDR3PHY_DTPR2_TXS_Msk & ((value) << DDR3PHY_DTPR2_TXS_Pos))
#define DDR3PHY_DTPR2_TXP_Pos                 _U_(10)                                              /**< (DDR3PHY_DTPR2) Power down exit delay. The minimum time between a power down exit command and any other command. This parameter must be set to the maximum of the various minimum power down exit delay parameters specified in the SDRAM datasheet, i.e. max(tXP, tXARD, tXARDS) for DDR2 and max(tXP, tXPDLL) for DDR3. Valid values are 2 to 31. Position */
#define DDR3PHY_DTPR2_TXP_Msk                 (_U_(0x1F) << DDR3PHY_DTPR2_TXP_Pos)                 /**< (DDR3PHY_DTPR2) Power down exit delay. The minimum time between a power down exit command and any other command. This parameter must be set to the maximum of the various minimum power down exit delay parameters specified in the SDRAM datasheet, i.e. max(tXP, tXARD, tXARDS) for DDR2 and max(tXP, tXPDLL) for DDR3. Valid values are 2 to 31. Mask */
#define DDR3PHY_DTPR2_TXP(value)              (DDR3PHY_DTPR2_TXP_Msk & ((value) << DDR3PHY_DTPR2_TXP_Pos))
#define DDR3PHY_DTPR2_TCKE_Pos                _U_(15)                                              /**< (DDR3PHY_DTPR2) CKE minimum pulse width. Also specifies the minimum time that the SDRAM must remain in power down or self refresh mode. For DDR3 this parameter must be set to the value of tCKESR which is usually bigger than the value of tCKE. Valid values are 2 to 15. Position */
#define DDR3PHY_DTPR2_TCKE_Msk                (_U_(0xF) << DDR3PHY_DTPR2_TCKE_Pos)                 /**< (DDR3PHY_DTPR2) CKE minimum pulse width. Also specifies the minimum time that the SDRAM must remain in power down or self refresh mode. For DDR3 this parameter must be set to the value of tCKESR which is usually bigger than the value of tCKE. Valid values are 2 to 15. Mask */
#define DDR3PHY_DTPR2_TCKE(value)             (DDR3PHY_DTPR2_TCKE_Msk & ((value) << DDR3PHY_DTPR2_TCKE_Pos))
#define DDR3PHY_DTPR2_TDLLK_Pos               _U_(19)                                              /**< (DDR3PHY_DTPR2) DLL locking time. Valid values are 2 to 1023. Position */
#define DDR3PHY_DTPR2_TDLLK_Msk               (_U_(0x3FF) << DDR3PHY_DTPR2_TDLLK_Pos)              /**< (DDR3PHY_DTPR2) DLL locking time. Valid values are 2 to 1023. Mask */
#define DDR3PHY_DTPR2_TDLLK(value)            (DDR3PHY_DTPR2_TDLLK_Msk & ((value) << DDR3PHY_DTPR2_TDLLK_Pos))
#define DDR3PHY_DTPR2_Msk                     _U_(0x1FFFFFFF)                                      /**< (DDR3PHY_DTPR2) Register Mask  */


/* -------- DDR3PHY_MR0 : (DDR3PHY Offset: 0x40) (R/W 32) Mode Register -------- */
#define DDR3PHY_MR0_Msk                       _U_(0x00000000)                                      /**< (DDR3PHY_MR0) Register Mask  */


/* -------- DDR3PHY_MR1 : (DDR3PHY Offset: 0x44) (R/W 32) Extended Mode Register -------- */
#define DDR3PHY_MR1_Msk                       _U_(0x00000000)                                      /**< (DDR3PHY_MR1) Register Mask  */


/* -------- DDR3PHY_MR2 : (DDR3PHY Offset: 0x48) (R/W 32) Extended Mode Register 2 -------- */
#define DDR3PHY_MR2_Msk                       _U_(0x00000000)                                      /**< (DDR3PHY_MR2) Register Mask  */


/* -------- DDR3PHY_MR3 : (DDR3PHY Offset: 0x4C) (R/W 32) Extended Mode Register 3 -------- */
#define DDR3PHY_MR3_Msk                       _U_(0x00000000)                                      /**< (DDR3PHY_MR3) Register Mask  */


/* -------- DDR3PHY_ODTCR : (DDR3PHY Offset: 0x50) (R/W 32) ODT Configuration Register -------- */
#define DDR3PHY_ODTCR_RDODT0_Pos              _U_(0)                                               /**< (DDR3PHY_ODTCR)  Position */
#define DDR3PHY_ODTCR_RDODT0_Msk              (_U_(0xF) << DDR3PHY_ODTCR_RDODT0_Pos)               /**< (DDR3PHY_ODTCR)  Mask */
#define DDR3PHY_ODTCR_RDODT0(value)           (DDR3PHY_ODTCR_RDODT0_Msk & ((value) << DDR3PHY_ODTCR_RDODT0_Pos))
#define DDR3PHY_ODTCR_RDODT1_Pos              _U_(4)                                               /**< (DDR3PHY_ODTCR)  Position */
#define DDR3PHY_ODTCR_RDODT1_Msk              (_U_(0xF) << DDR3PHY_ODTCR_RDODT1_Pos)               /**< (DDR3PHY_ODTCR)  Mask */
#define DDR3PHY_ODTCR_RDODT1(value)           (DDR3PHY_ODTCR_RDODT1_Msk & ((value) << DDR3PHY_ODTCR_RDODT1_Pos))
#define DDR3PHY_ODTCR_RDODT2_Pos              _U_(8)                                               /**< (DDR3PHY_ODTCR)  Position */
#define DDR3PHY_ODTCR_RDODT2_Msk              (_U_(0xF) << DDR3PHY_ODTCR_RDODT2_Pos)               /**< (DDR3PHY_ODTCR)  Mask */
#define DDR3PHY_ODTCR_RDODT2(value)           (DDR3PHY_ODTCR_RDODT2_Msk & ((value) << DDR3PHY_ODTCR_RDODT2_Pos))
#define DDR3PHY_ODTCR_RDODT3_Pos              _U_(12)                                              /**< (DDR3PHY_ODTCR)  Position */
#define DDR3PHY_ODTCR_RDODT3_Msk              (_U_(0xF) << DDR3PHY_ODTCR_RDODT3_Pos)               /**< (DDR3PHY_ODTCR)  Mask */
#define DDR3PHY_ODTCR_RDODT3(value)           (DDR3PHY_ODTCR_RDODT3_Msk & ((value) << DDR3PHY_ODTCR_RDODT3_Pos))
#define DDR3PHY_ODTCR_WRODT0_Pos              _U_(16)                                              /**< (DDR3PHY_ODTCR) Write ODT: Specifies whether ODT should be enabled ('1') or disabled ('0') on each of the up to four ranks when a write command is sent to rank n. WRODT0, Position */
#define DDR3PHY_ODTCR_WRODT0_Msk              (_U_(0xF) << DDR3PHY_ODTCR_WRODT0_Pos)               /**< (DDR3PHY_ODTCR) Write ODT: Specifies whether ODT should be enabled ('1') or disabled ('0') on each of the up to four ranks when a write command is sent to rank n. WRODT0, Mask */
#define DDR3PHY_ODTCR_WRODT0(value)           (DDR3PHY_ODTCR_WRODT0_Msk & ((value) << DDR3PHY_ODTCR_WRODT0_Pos))
#define DDR3PHY_ODTCR_WRODT1_Pos              _U_(20)                                              /**< (DDR3PHY_ODTCR)  Position */
#define DDR3PHY_ODTCR_WRODT1_Msk              (_U_(0xF) << DDR3PHY_ODTCR_WRODT1_Pos)               /**< (DDR3PHY_ODTCR)  Mask */
#define DDR3PHY_ODTCR_WRODT1(value)           (DDR3PHY_ODTCR_WRODT1_Msk & ((value) << DDR3PHY_ODTCR_WRODT1_Pos))
#define DDR3PHY_ODTCR_WRODT2_Pos              _U_(24)                                              /**< (DDR3PHY_ODTCR)  Position */
#define DDR3PHY_ODTCR_WRODT2_Msk              (_U_(0xF) << DDR3PHY_ODTCR_WRODT2_Pos)               /**< (DDR3PHY_ODTCR)  Mask */
#define DDR3PHY_ODTCR_WRODT2(value)           (DDR3PHY_ODTCR_WRODT2_Msk & ((value) << DDR3PHY_ODTCR_WRODT2_Pos))
#define DDR3PHY_ODTCR_WRODT3_Pos              _U_(28)                                              /**< (DDR3PHY_ODTCR)  Position */
#define DDR3PHY_ODTCR_WRODT3_Msk              (_U_(0xF) << DDR3PHY_ODTCR_WRODT3_Pos)               /**< (DDR3PHY_ODTCR)  Mask */
#define DDR3PHY_ODTCR_WRODT3(value)           (DDR3PHY_ODTCR_WRODT3_Msk & ((value) << DDR3PHY_ODTCR_WRODT3_Pos))
#define DDR3PHY_ODTCR_Msk                     _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_ODTCR) Register Mask  */


/* -------- DDR3PHY_DTAR : (DDR3PHY Offset: 0x54) (R/W 32) Data Training Address Register -------- */
#define DDR3PHY_DTAR_DTCOL_Pos                _U_(0)                                               /**< (DDR3PHY_DTAR) Data Training Column Address: Selects the SDRAM column address to be used during data training. The lower four bits of this address must always be "0000". Position */
#define DDR3PHY_DTAR_DTCOL_Msk                (_U_(0xFFF) << DDR3PHY_DTAR_DTCOL_Pos)               /**< (DDR3PHY_DTAR) Data Training Column Address: Selects the SDRAM column address to be used during data training. The lower four bits of this address must always be "0000". Mask */
#define DDR3PHY_DTAR_DTCOL(value)             (DDR3PHY_DTAR_DTCOL_Msk & ((value) << DDR3PHY_DTAR_DTCOL_Pos))
#define DDR3PHY_DTAR_DTROW_Pos                _U_(12)                                              /**< (DDR3PHY_DTAR) Data Training Row Address: Selects the SDRAM row address to be used during data training. Position */
#define DDR3PHY_DTAR_DTROW_Msk                (_U_(0xFFFF) << DDR3PHY_DTAR_DTROW_Pos)              /**< (DDR3PHY_DTAR) Data Training Row Address: Selects the SDRAM row address to be used during data training. Mask */
#define DDR3PHY_DTAR_DTROW(value)             (DDR3PHY_DTAR_DTROW_Msk & ((value) << DDR3PHY_DTAR_DTROW_Pos))
#define DDR3PHY_DTAR_DTBANK_Pos               _U_(28)                                              /**< (DDR3PHY_DTAR) Data Training Bank Address: Selects the SDRAM bank address to be used during data training. Position */
#define DDR3PHY_DTAR_DTBANK_Msk               (_U_(0x7) << DDR3PHY_DTAR_DTBANK_Pos)                /**< (DDR3PHY_DTAR) Data Training Bank Address: Selects the SDRAM bank address to be used during data training. Mask */
#define DDR3PHY_DTAR_DTBANK(value)            (DDR3PHY_DTAR_DTBANK_Msk & ((value) << DDR3PHY_DTAR_DTBANK_Pos))
#define DDR3PHY_DTAR_DTMPR_Pos                _U_(31)                                              /**< (DDR3PHY_DTAR) Data Training Using MPR (DDR3 Only): Specifies, if set, that data-training should use the SDRAM Multi-Purpose Register (MPR) register. Otherwise data-training is performed by first writing to some locations in the SDRAM and then reading them back. Position */
#define DDR3PHY_DTAR_DTMPR_Msk                (_U_(0x1) << DDR3PHY_DTAR_DTMPR_Pos)                 /**< (DDR3PHY_DTAR) Data Training Using MPR (DDR3 Only): Specifies, if set, that data-training should use the SDRAM Multi-Purpose Register (MPR) register. Otherwise data-training is performed by first writing to some locations in the SDRAM and then reading them back. Mask */
#define DDR3PHY_DTAR_DTMPR(value)             (DDR3PHY_DTAR_DTMPR_Msk & ((value) << DDR3PHY_DTAR_DTMPR_Pos))
#define DDR3PHY_DTAR_Msk                      _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_DTAR) Register Mask  */


/* -------- DDR3PHY_DTDR0 : (DDR3PHY Offset: 0x58) (R/W 32) Data Training Data Register 0 -------- */
#define DDR3PHY_DTDR0_DTBYTE1_Pos             _U_(8)                                               /**< (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR0_DTBYTE1_Msk             (_U_(0xFF) << DDR3PHY_DTDR0_DTBYTE1_Pos)             /**< (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR0_DTBYTE1(value)          (DDR3PHY_DTDR0_DTBYTE1_Msk & ((value) << DDR3PHY_DTDR0_DTBYTE1_Pos))
#define DDR3PHY_DTDR0_DTBYTE2_Pos             _U_(16)                                              /**< (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR0_DTBYTE2_Msk             (_U_(0xFF) << DDR3PHY_DTDR0_DTBYTE2_Pos)             /**< (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR0_DTBYTE2(value)          (DDR3PHY_DTDR0_DTBYTE2_Msk & ((value) << DDR3PHY_DTDR0_DTBYTE2_Pos))
#define DDR3PHY_DTDR0_DTBYTE3_Pos             _U_(24)                                              /**< (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR0_DTBYTE3_Msk             (_U_(0xFF) << DDR3PHY_DTDR0_DTBYTE3_Pos)             /**< (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR0_DTBYTE3(value)          (DDR3PHY_DTDR0_DTBYTE3_Msk & ((value) << DDR3PHY_DTDR0_DTBYTE3_Pos))
#define DDR3PHY_DTDR0_Msk                     _U_(0xFFFFFF00)                                      /**< (DDR3PHY_DTDR0) Register Mask  */


/* -------- DDR3PHY_DTDR1 : (DDR3PHY Offset: 0x5C) (R/W 32) Data Training Data Register 1 -------- */
#define DDR3PHY_DTDR1_DTBYTE4_Pos             _U_(0)                                               /**< (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR1_DTBYTE4_Msk             (_U_(0xFF) << DDR3PHY_DTDR1_DTBYTE4_Pos)             /**< (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR1_DTBYTE4(value)          (DDR3PHY_DTDR1_DTBYTE4_Msk & ((value) << DDR3PHY_DTDR1_DTBYTE4_Pos))
#define DDR3PHY_DTDR1_DTBYTE5_Pos             _U_(8)                                               /**< (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR1_DTBYTE5_Msk             (_U_(0xFF) << DDR3PHY_DTDR1_DTBYTE5_Pos)             /**< (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR1_DTBYTE5(value)          (DDR3PHY_DTDR1_DTBYTE5_Msk & ((value) << DDR3PHY_DTDR1_DTBYTE5_Pos))
#define DDR3PHY_DTDR1_DTBYTE6_Pos             _U_(16)                                              /**< (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR1_DTBYTE6_Msk             (_U_(0xFF) << DDR3PHY_DTDR1_DTBYTE6_Pos)             /**< (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR1_DTBYTE6(value)          (DDR3PHY_DTDR1_DTBYTE6_Msk & ((value) << DDR3PHY_DTDR1_DTBYTE6_Pos))
#define DDR3PHY_DTDR1_DTBYTE7_Pos             _U_(24)                                              /**< (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR1_DTBYTE7_Msk             (_U_(0xFF) << DDR3PHY_DTDR1_DTBYTE7_Pos)             /**< (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR1_DTBYTE7(value)          (DDR3PHY_DTDR1_DTBYTE7_Msk & ((value) << DDR3PHY_DTDR1_DTBYTE7_Pos))
#define DDR3PHY_DTDR1_Msk                     _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_DTDR1) Register Mask  */


/* -------- DDR3PHY_DTPSL : (DDR3PHY Offset: 0x60) ( R/ 32) Data Training Phase shift Log -------- */
#define DDR3PHY_DTPSL_Msk                     _U_(0x00000000)                                      /**< (DDR3PHY_DTPSL) Register Mask  */


/* -------- DDR3PHY_ACODLY : (DDR3PHY Offset: 0x64) (R/W 32) Data Training AC Ouput delay -------- */
#define DDR3PHY_ACODLY_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ACODLY) Register Mask  */


/* -------- DDR3PHY_DCUAR : (DDR3PHY Offset: 0xC0) (R/W 32) DCU Address Register -------- */
#define DDR3PHY_DCUAR_CWADDR_Pos              _U_(0)                                               /**< (DDR3PHY_DCUAR) Cache Word Address: Address of the cache word to be accessed. Position */
#define DDR3PHY_DCUAR_CWADDR_Msk              (_U_(0xF) << DDR3PHY_DCUAR_CWADDR_Pos)               /**< (DDR3PHY_DCUAR) Cache Word Address: Address of the cache word to be accessed. Mask */
#define DDR3PHY_DCUAR_CWADDR(value)           (DDR3PHY_DCUAR_CWADDR_Msk & ((value) << DDR3PHY_DCUAR_CWADDR_Pos))
#define DDR3PHY_DCUAR_CSADDR_Pos              _U_(4)                                               /**< (DDR3PHY_DCUAR) Cache Slice Address: Address of the cache slice to be accessed. Position */
#define DDR3PHY_DCUAR_CSADDR_Msk              (_U_(0xF) << DDR3PHY_DCUAR_CSADDR_Pos)               /**< (DDR3PHY_DCUAR) Cache Slice Address: Address of the cache slice to be accessed. Mask */
#define DDR3PHY_DCUAR_CSADDR(value)           (DDR3PHY_DCUAR_CSADDR_Msk & ((value) << DDR3PHY_DCUAR_CSADDR_Pos))
#define DDR3PHY_DCUAR_CSEL_Pos                _U_(8)                                               /**< (DDR3PHY_DCUAR) Cache Select: Selects the cache to be accessed. Position */
#define DDR3PHY_DCUAR_CSEL_Msk                (_U_(0x3) << DDR3PHY_DCUAR_CSEL_Pos)                 /**< (DDR3PHY_DCUAR) Cache Select: Selects the cache to be accessed. Mask */
#define DDR3PHY_DCUAR_CSEL(value)             (DDR3PHY_DCUAR_CSEL_Msk & ((value) << DDR3PHY_DCUAR_CSEL_Pos))
#define DDR3PHY_DCUAR_INCA_Pos                _U_(10)                                              /**< (DDR3PHY_DCUAR) Increment Address: Specifies, if set, that the cache address specified in WADDR and SADDR should be automatically incremented after each access of the cache. The increment happens in such a way that all the slices of a selected word are first accessed before going to the next word. Position */
#define DDR3PHY_DCUAR_INCA_Msk                (_U_(0x1) << DDR3PHY_DCUAR_INCA_Pos)                 /**< (DDR3PHY_DCUAR) Increment Address: Specifies, if set, that the cache address specified in WADDR and SADDR should be automatically incremented after each access of the cache. The increment happens in such a way that all the slices of a selected word are first accessed before going to the next word. Mask */
#define DDR3PHY_DCUAR_INCA(value)             (DDR3PHY_DCUAR_INCA_Msk & ((value) << DDR3PHY_DCUAR_INCA_Pos))
#define DDR3PHY_DCUAR_ATYPE_Pos               _U_(11)                                              /**< (DDR3PHY_DCUAR) Access Type: Specifies the type of access to be performed using this address. Valid values are: 0 = Write access Position */
#define DDR3PHY_DCUAR_ATYPE_Msk               (_U_(0x1) << DDR3PHY_DCUAR_ATYPE_Pos)                /**< (DDR3PHY_DCUAR) Access Type: Specifies the type of access to be performed using this address. Valid values are: 0 = Write access Mask */
#define DDR3PHY_DCUAR_ATYPE(value)            (DDR3PHY_DCUAR_ATYPE_Msk & ((value) << DDR3PHY_DCUAR_ATYPE_Pos))
#define DDR3PHY_DCUAR_Msk                     _U_(0x00000FFF)                                      /**< (DDR3PHY_DCUAR) Register Mask  */


/* -------- DDR3PHY_DCUDR : (DDR3PHY Offset: 0xC4) (R/W 32) DCU Data Register -------- */
#define DDR3PHY_DCUDR_CDATA_Pos               _U_(0)                                               /**< (DDR3PHY_DCUDR) Cache Data: Data to be written to or read from a cache. This data corresponds to the cache word slice specified by the DCU Address Register. Position */
#define DDR3PHY_DCUDR_CDATA_Msk               (_U_(0xFFFFFFFF) << DDR3PHY_DCUDR_CDATA_Pos)         /**< (DDR3PHY_DCUDR) Cache Data: Data to be written to or read from a cache. This data corresponds to the cache word slice specified by the DCU Address Register. Mask */
#define DDR3PHY_DCUDR_CDATA(value)            (DDR3PHY_DCUDR_CDATA_Msk & ((value) << DDR3PHY_DCUDR_CDATA_Pos))
#define DDR3PHY_DCUDR_Msk                     _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_DCUDR) Register Mask  */


/* -------- DDR3PHY_DCURR : (DDR3PHY Offset: 0xC8) (R/W 32) DCU Run Register -------- */
#define DDR3PHY_DCURR_DINST_Pos               _U_(0)                                               /**< (DDR3PHY_DCURR) DCU Instruction: Selects the DCU command to be executed. Position */
#define DDR3PHY_DCURR_DINST_Msk               (_U_(0xF) << DDR3PHY_DCURR_DINST_Pos)                /**< (DDR3PHY_DCURR) DCU Instruction: Selects the DCU command to be executed. Mask */
#define DDR3PHY_DCURR_DINST(value)            (DDR3PHY_DCURR_DINST_Msk & ((value) << DDR3PHY_DCURR_DINST_Pos))
#define DDR3PHY_DCURR_SADDR_Pos               _U_(4)                                               /**< (DDR3PHY_DCURR) Start Address: Cache word address where the execution of commands should begin. Position */
#define DDR3PHY_DCURR_SADDR_Msk               (_U_(0xF) << DDR3PHY_DCURR_SADDR_Pos)                /**< (DDR3PHY_DCURR) Start Address: Cache word address where the execution of commands should begin. Mask */
#define DDR3PHY_DCURR_SADDR(value)            (DDR3PHY_DCURR_SADDR_Msk & ((value) << DDR3PHY_DCURR_SADDR_Pos))
#define DDR3PHY_DCURR_EADDR_Pos               _U_(8)                                               /**< (DDR3PHY_DCURR) End Address: Cache word address where the execution of command should end. Position */
#define DDR3PHY_DCURR_EADDR_Msk               (_U_(0xF) << DDR3PHY_DCURR_EADDR_Pos)                /**< (DDR3PHY_DCURR) End Address: Cache word address where the execution of command should end. Mask */
#define DDR3PHY_DCURR_EADDR(value)            (DDR3PHY_DCURR_EADDR_Msk & ((value) << DDR3PHY_DCURR_EADDR_Pos))
#define DDR3PHY_DCURR_NFAIL_Pos               _U_(12)                                              /**< (DDR3PHY_DCURR) Number of Failures: Specifies the number of failures after which the execution of commands and the capture of read data should stop if SONF bit of this register is set. Execution of commands and the capture of read data will stop after (NFAIL+1) failures if SONF is set. Position */
#define DDR3PHY_DCURR_NFAIL_Msk               (_U_(0xFF) << DDR3PHY_DCURR_NFAIL_Pos)               /**< (DDR3PHY_DCURR) Number of Failures: Specifies the number of failures after which the execution of commands and the capture of read data should stop if SONF bit of this register is set. Execution of commands and the capture of read data will stop after (NFAIL+1) failures if SONF is set. Mask */
#define DDR3PHY_DCURR_NFAIL(value)            (DDR3PHY_DCURR_NFAIL_Msk & ((value) << DDR3PHY_DCURR_NFAIL_Pos))
#define DDR3PHY_DCURR_SONF_Pos                _U_(20)                                              /**< (DDR3PHY_DCURR) Stop On Nth Fail: Specifies if set that the execution of commands and the capture of read data should stop when there are N read data failures. The number of failures is specified by NFAIL. Otherwise commands execute until the end of the program or until manually stopped using a STOP command. Position */
#define DDR3PHY_DCURR_SONF_Msk                (_U_(0x1) << DDR3PHY_DCURR_SONF_Pos)                 /**< (DDR3PHY_DCURR) Stop On Nth Fail: Specifies if set that the execution of commands and the capture of read data should stop when there are N read data failures. The number of failures is specified by NFAIL. Otherwise commands execute until the end of the program or until manually stopped using a STOP command. Mask */
#define DDR3PHY_DCURR_SONF(value)             (DDR3PHY_DCURR_SONF_Msk & ((value) << DDR3PHY_DCURR_SONF_Pos))
#define DDR3PHY_DCURR_SCOF_Pos                _U_(21)                                              /**< (DDR3PHY_DCURR) Stop Capture On Full: Specifies if set that the capture of read data should stop when the capture cache is full. Position */
#define DDR3PHY_DCURR_SCOF_Msk                (_U_(0x1) << DDR3PHY_DCURR_SCOF_Pos)                 /**< (DDR3PHY_DCURR) Stop Capture On Full: Specifies if set that the capture of read data should stop when the capture cache is full. Mask */
#define DDR3PHY_DCURR_SCOF(value)             (DDR3PHY_DCURR_SCOF_Msk & ((value) << DDR3PHY_DCURR_SCOF_Pos))
#define DDR3PHY_DCURR_RCEN_Pos                _U_(22)                                              /**< (DDR3PHY_DCURR) Read Capture Enable: Indicates if set that read data coming back from the SDRAM should be captured into the read data cache. Position */
#define DDR3PHY_DCURR_RCEN_Msk                (_U_(0x1) << DDR3PHY_DCURR_RCEN_Pos)                 /**< (DDR3PHY_DCURR) Read Capture Enable: Indicates if set that read data coming back from the SDRAM should be captured into the read data cache. Mask */
#define DDR3PHY_DCURR_RCEN(value)             (DDR3PHY_DCURR_RCEN_Msk & ((value) << DDR3PHY_DCURR_RCEN_Pos))
#define DDR3PHY_DCURR_XCEN_Pos                _U_(23)                                              /**< (DDR3PHY_DCURR) Expected Compare Enable: Indicates if set that read data coming back from the SDRAM should be should be compared with the expected data. Position */
#define DDR3PHY_DCURR_XCEN_Msk                (_U_(0x1) << DDR3PHY_DCURR_XCEN_Pos)                 /**< (DDR3PHY_DCURR) Expected Compare Enable: Indicates if set that read data coming back from the SDRAM should be should be compared with the expected data. Mask */
#define DDR3PHY_DCURR_XCEN(value)             (DDR3PHY_DCURR_XCEN_Msk & ((value) << DDR3PHY_DCURR_XCEN_Pos))
#define DDR3PHY_DCURR_Msk                     _U_(0x00FFFFFF)                                      /**< (DDR3PHY_DCURR) Register Mask  */


/* -------- DDR3PHY_DCULR : (DDR3PHY Offset: 0xCC) (R/W 32) DCU Loop Register -------- */
#define DDR3PHY_DCULR_LSADDR_Pos              _U_(0)                                               /**< (DDR3PHY_DCULR) Loop Start Address: Command cache word address where the loop should start. Position */
#define DDR3PHY_DCULR_LSADDR_Msk              (_U_(0xF) << DDR3PHY_DCULR_LSADDR_Pos)               /**< (DDR3PHY_DCULR) Loop Start Address: Command cache word address where the loop should start. Mask */
#define DDR3PHY_DCULR_LSADDR(value)           (DDR3PHY_DCULR_LSADDR_Msk & ((value) << DDR3PHY_DCULR_LSADDR_Pos))
#define DDR3PHY_DCULR_LEADDR_Pos              _U_(4)                                               /**< (DDR3PHY_DCULR) Loop End Address: Command cache word address where the loop should end. Position */
#define DDR3PHY_DCULR_LEADDR_Msk              (_U_(0xF) << DDR3PHY_DCULR_LEADDR_Pos)               /**< (DDR3PHY_DCULR) Loop End Address: Command cache word address where the loop should end. Mask */
#define DDR3PHY_DCULR_LEADDR(value)           (DDR3PHY_DCULR_LEADDR_Msk & ((value) << DDR3PHY_DCULR_LEADDR_Pos))
#define DDR3PHY_DCULR_LCNT_Pos                _U_(8)                                               /**< (DDR3PHY_DCULR) Loop Count: The number of times that the loop should be executed if LINF is not set. Position */
#define DDR3PHY_DCULR_LCNT_Msk                (_U_(0xFF) << DDR3PHY_DCULR_LCNT_Pos)                /**< (DDR3PHY_DCULR) Loop Count: The number of times that the loop should be executed if LINF is not set. Mask */
#define DDR3PHY_DCULR_LCNT(value)             (DDR3PHY_DCULR_LCNT_Msk & ((value) << DDR3PHY_DCULR_LCNT_Pos))
#define DDR3PHY_DCULR_LINF_Pos                _U_(16)                                              /**< (DDR3PHY_DCULR) Loop Infinite: Indicates if set that the loop should be executed indefinitely until stopped by the STOP command. Otherwise the loop is execute LCNT times. Position */
#define DDR3PHY_DCULR_LINF_Msk                (_U_(0x1) << DDR3PHY_DCULR_LINF_Pos)                 /**< (DDR3PHY_DCULR) Loop Infinite: Indicates if set that the loop should be executed indefinitely until stopped by the STOP command. Otherwise the loop is execute LCNT times. Mask */
#define DDR3PHY_DCULR_LINF(value)             (DDR3PHY_DCULR_LINF_Msk & ((value) << DDR3PHY_DCULR_LINF_Pos))
#define DDR3PHY_DCULR_IDA_Pos                 _U_(17)                                              /**< (DDR3PHY_DCULR) Increment DRAM Address: Indicates if set that DRAM addresses should be incremented every time a DRAM read/write command inside the loop is executed. Position */
#define DDR3PHY_DCULR_IDA_Msk                 (_U_(0x1) << DDR3PHY_DCULR_IDA_Pos)                  /**< (DDR3PHY_DCULR) Increment DRAM Address: Indicates if set that DRAM addresses should be incremented every time a DRAM read/write command inside the loop is executed. Mask */
#define DDR3PHY_DCULR_IDA(value)              (DDR3PHY_DCULR_IDA_Msk & ((value) << DDR3PHY_DCULR_IDA_Pos))
#define DDR3PHY_DCULR_XLEADDR_Pos             _U_(28)                                              /**< (DDR3PHY_DCULR) Expected Data Loop End Address: The last expected data cache word address that contains valid expected data. Expected data should looped between 0 and this address. Position */
#define DDR3PHY_DCULR_XLEADDR_Msk             (_U_(0xF) << DDR3PHY_DCULR_XLEADDR_Pos)              /**< (DDR3PHY_DCULR) Expected Data Loop End Address: The last expected data cache word address that contains valid expected data. Expected data should looped between 0 and this address. Mask */
#define DDR3PHY_DCULR_XLEADDR(value)          (DDR3PHY_DCULR_XLEADDR_Msk & ((value) << DDR3PHY_DCULR_XLEADDR_Pos))
#define DDR3PHY_DCULR_Msk                     _U_(0xF003FFFF)                                      /**< (DDR3PHY_DCULR) Register Mask  */


/* -------- DDR3PHY_DCUGCR : (DDR3PHY Offset: 0xD0) (R/W 32) DCU General Configuration Register -------- */
#define DDR3PHY_DCUGCR_RCSW_Pos               _U_(0)                                               /**< (DDR3PHY_DCUGCR) Read Capture Start Word: The capture and compare of read data should start after Nth word. For example setting this value to 12 will skip the first 12 read data. Position */
#define DDR3PHY_DCUGCR_RCSW_Msk               (_U_(0xFFFF) << DDR3PHY_DCUGCR_RCSW_Pos)             /**< (DDR3PHY_DCUGCR) Read Capture Start Word: The capture and compare of read data should start after Nth word. For example setting this value to 12 will skip the first 12 read data. Mask */
#define DDR3PHY_DCUGCR_RCSW(value)            (DDR3PHY_DCUGCR_RCSW_Msk & ((value) << DDR3PHY_DCUGCR_RCSW_Pos))
#define DDR3PHY_DCUGCR_Msk                    _U_(0x0000FFFF)                                      /**< (DDR3PHY_DCUGCR) Register Mask  */


/* -------- DDR3PHY_DCUTPR : (DDR3PHY Offset: 0xD4) (R/W 32) DCU Timing Parameter Register -------- */
#define DDR3PHY_DCUTPR_TDCUT0_Pos             _U_(0)                                               /**< (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 0. Position */
#define DDR3PHY_DCUTPR_TDCUT0_Msk             (_U_(0xFF) << DDR3PHY_DCUTPR_TDCUT0_Pos)             /**< (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 0. Mask */
#define DDR3PHY_DCUTPR_TDCUT0(value)          (DDR3PHY_DCUTPR_TDCUT0_Msk & ((value) << DDR3PHY_DCUTPR_TDCUT0_Pos))
#define DDR3PHY_DCUTPR_TDCUT1_Pos             _U_(8)                                               /**< (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 1. Position */
#define DDR3PHY_DCUTPR_TDCUT1_Msk             (_U_(0xFF) << DDR3PHY_DCUTPR_TDCUT1_Pos)             /**< (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 1. Mask */
#define DDR3PHY_DCUTPR_TDCUT1(value)          (DDR3PHY_DCUTPR_TDCUT1_Msk & ((value) << DDR3PHY_DCUTPR_TDCUT1_Pos))
#define DDR3PHY_DCUTPR_TDCUT2_Pos             _U_(16)                                              /**< (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 2. Position */
#define DDR3PHY_DCUTPR_TDCUT2_Msk             (_U_(0xFF) << DDR3PHY_DCUTPR_TDCUT2_Pos)             /**< (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 2. Mask */
#define DDR3PHY_DCUTPR_TDCUT2(value)          (DDR3PHY_DCUTPR_TDCUT2_Msk & ((value) << DDR3PHY_DCUTPR_TDCUT2_Pos))
#define DDR3PHY_DCUTPR_TDCUT3_Pos             _U_(24)                                              /**< (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 3. Position */
#define DDR3PHY_DCUTPR_TDCUT3_Msk             (_U_(0xFF) << DDR3PHY_DCUTPR_TDCUT3_Pos)             /**< (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 3. Mask */
#define DDR3PHY_DCUTPR_TDCUT3(value)          (DDR3PHY_DCUTPR_TDCUT3_Msk & ((value) << DDR3PHY_DCUTPR_TDCUT3_Pos))
#define DDR3PHY_DCUTPR_Msk                    _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_DCUTPR) Register Mask  */


/* -------- DDR3PHY_DCUSR0 : (DDR3PHY Offset: 0xD8) (R/W 32) DCU Status-0 Register -------- */
#define DDR3PHY_DCUSR0_RDONE_Pos              _U_(0)                                               /**< (DDR3PHY_DCUSR0) Run Done: Indicates if set that the DCU has finished executing the commands in the command cache. This bit is also set to indicate that a STOP command has successfully been executed and command execution has stopped. Position */
#define DDR3PHY_DCUSR0_RDONE_Msk              (_U_(0x1) << DDR3PHY_DCUSR0_RDONE_Pos)               /**< (DDR3PHY_DCUSR0) Run Done: Indicates if set that the DCU has finished executing the commands in the command cache. This bit is also set to indicate that a STOP command has successfully been executed and command execution has stopped. Mask */
#define DDR3PHY_DCUSR0_RDONE(value)           (DDR3PHY_DCUSR0_RDONE_Msk & ((value) << DDR3PHY_DCUSR0_RDONE_Pos))
#define DDR3PHY_DCUSR0_CFAIL_Pos              _U_(1)                                               /**< (DDR3PHY_DCUSR0) Capture Fail: Indicates if set that at least one read data word has failed. Position */
#define DDR3PHY_DCUSR0_CFAIL_Msk              (_U_(0x1) << DDR3PHY_DCUSR0_CFAIL_Pos)               /**< (DDR3PHY_DCUSR0) Capture Fail: Indicates if set that at least one read data word has failed. Mask */
#define DDR3PHY_DCUSR0_CFAIL(value)           (DDR3PHY_DCUSR0_CFAIL_Msk & ((value) << DDR3PHY_DCUSR0_CFAIL_Pos))
#define DDR3PHY_DCUSR0_CFULL_Pos              _U_(2)                                               /**< (DDR3PHY_DCUSR0) Capture Full: Indicates if set that the capture cache is full. Position */
#define DDR3PHY_DCUSR0_CFULL_Msk              (_U_(0x1) << DDR3PHY_DCUSR0_CFULL_Pos)               /**< (DDR3PHY_DCUSR0) Capture Full: Indicates if set that the capture cache is full. Mask */
#define DDR3PHY_DCUSR0_CFULL(value)           (DDR3PHY_DCUSR0_CFULL_Msk & ((value) << DDR3PHY_DCUSR0_CFULL_Pos))
#define DDR3PHY_DCUSR0_Msk                    _U_(0x00000007)                                      /**< (DDR3PHY_DCUSR0) Register Mask  */


/* -------- DDR3PHY_DCUSR1 : (DDR3PHY Offset: 0xDC) (R/W 32) DCU Status-1 Register -------- */
#define DDR3PHY_DCUSR1_RDCNT_Pos              _U_(0)                                               /**< (DDR3PHY_DCUSR1) Read Count: Number of read words returned from the SDRAM. Position */
#define DDR3PHY_DCUSR1_RDCNT_Msk              (_U_(0xFFFF) << DDR3PHY_DCUSR1_RDCNT_Pos)            /**< (DDR3PHY_DCUSR1) Read Count: Number of read words returned from the SDRAM. Mask */
#define DDR3PHY_DCUSR1_RDCNT(value)           (DDR3PHY_DCUSR1_RDCNT_Msk & ((value) << DDR3PHY_DCUSR1_RDCNT_Pos))
#define DDR3PHY_DCUSR1_FLCND_Pos              _U_(16)                                              /**< (DDR3PHY_DCUSR1) Fail Count: Number of read words that have failed. Position */
#define DDR3PHY_DCUSR1_FLCND_Msk              (_U_(0xFF) << DDR3PHY_DCUSR1_FLCND_Pos)              /**< (DDR3PHY_DCUSR1) Fail Count: Number of read words that have failed. Mask */
#define DDR3PHY_DCUSR1_FLCND(value)           (DDR3PHY_DCUSR1_FLCND_Msk & ((value) << DDR3PHY_DCUSR1_FLCND_Pos))
#define DDR3PHY_DCUSR1_LPCNT_Pos              _U_(24)                                              /**< (DDR3PHY_DCUSR1) Loop Count: Indicates the value of the loop count. This is useful when the program has stooped because of failures to assess how many reads were executed before first fail. Position */
#define DDR3PHY_DCUSR1_LPCNT_Msk              (_U_(0xFF) << DDR3PHY_DCUSR1_LPCNT_Pos)              /**< (DDR3PHY_DCUSR1) Loop Count: Indicates the value of the loop count. This is useful when the program has stooped because of failures to assess how many reads were executed before first fail. Mask */
#define DDR3PHY_DCUSR1_LPCNT(value)           (DDR3PHY_DCUSR1_LPCNT_Msk & ((value) << DDR3PHY_DCUSR1_LPCNT_Pos))
#define DDR3PHY_DCUSR1_Msk                    _U_(0xFFFFFFFF)                                      /**< (DDR3PHY_DCUSR1) Register Mask  */


/* -------- DDR3PHY_BISTRR : (DDR3PHY Offset: 0x100) (R/W 32) BIST Run Register -------- */
#define DDR3PHY_BISTRR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_BISTRR) Register Mask  */


/* -------- DDR3PHY_BISTMSKR0 : (DDR3PHY Offset: 0x104) (R/W 32) BIST Mask 0 Register -------- */
#define DDR3PHY_BISTMSKR0_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_BISTMSKR0) Register Mask  */


/* -------- DDR3PHY_BISTMSKR1 : (DDR3PHY Offset: 0x108) (R/W 32) BIST Mask 1 Register -------- */
#define DDR3PHY_BISTMSKR1_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_BISTMSKR1) Register Mask  */


/* -------- DDR3PHY_BISTWCR : (DDR3PHY Offset: 0x10C) (R/W 32) BIST Word Count Register -------- */
#define DDR3PHY_BISTWCR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_BISTWCR) Register Mask  */


/* -------- DDR3PHY_BISTLSR : (DDR3PHY Offset: 0x110) (R/W 32) BIST LFSR Seed Register -------- */
#define DDR3PHY_BISTLSR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_BISTLSR) Register Mask  */


/* -------- DDR3PHY_BISTAR0 : (DDR3PHY Offset: 0x114) (R/W 32) BIST Address 0 Register -------- */
#define DDR3PHY_BISTAR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_BISTAR0) Register Mask  */


/* -------- DDR3PHY_BISTAR1 : (DDR3PHY Offset: 0x118) (R/W 32) BIST Address 1 Register -------- */
#define DDR3PHY_BISTAR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_BISTAR1) Register Mask  */


/* -------- DDR3PHY_BISTAR2 : (DDR3PHY Offset: 0x11C) (R/W 32) BIST Address 2 Register -------- */
#define DDR3PHY_BISTAR2_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_BISTAR2) Register Mask  */


/* -------- DDR3PHY_BISTUDPR : (DDR3PHY Offset: 0x120) (R/W 32) BIST User Data Pattern Register -------- */
#define DDR3PHY_BISTUDPR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_BISTUDPR) Register Mask  */


/* -------- DDR3PHY_BISTGSR : (DDR3PHY Offset: 0x124) (R/W 32) BIST General Status Register -------- */
#define DDR3PHY_BISTGSR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_BISTGSR) Register Mask  */


/* -------- DDR3PHY_BISTWER : (DDR3PHY Offset: 0x128) (R/W 32) BIST Word Error Register -------- */
#define DDR3PHY_BISTWER_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_BISTWER) Register Mask  */


/* -------- DDR3PHY_BISTBER0 : (DDR3PHY Offset: 0x12C) (R/W 32) BIST Bit Error 0 Register -------- */
#define DDR3PHY_BISTBER0_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_BISTBER0) Register Mask  */


/* -------- DDR3PHY_BISTBER1 : (DDR3PHY Offset: 0x130) (R/W 32) BIST Bit Error 1 Register -------- */
#define DDR3PHY_BISTBER1_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_BISTBER1) Register Mask  */


/* -------- DDR3PHY_BISTBER2 : (DDR3PHY Offset: 0x134) (R/W 32) BIST Bit Error 2 Register -------- */
#define DDR3PHY_BISTBER2_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_BISTBER2) Register Mask  */


/* -------- DDR3PHY_BISTWCSR : (DDR3PHY Offset: 0x138) (R/W 32) BIST Word Count Status Register -------- */
#define DDR3PHY_BISTWCSR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_BISTWCSR) Register Mask  */


/* -------- DDR3PHY_BISTFWR0 : (DDR3PHY Offset: 0x13C) (R/W 32) BIST Fail Word 0 Register -------- */
#define DDR3PHY_BISTFWR0_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_BISTFWR0) Register Mask  */


/* -------- DDR3PHY_BISTFWR1 : (DDR3PHY Offset: 0x140) (R/W 32) BIST Fail Word 1 Register -------- */
#define DDR3PHY_BISTFWR1_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_BISTFWR1) Register Mask  */


/* -------- DDR3PHY_GPR0 : (DDR3PHY Offset: 0x178) (R/W 32) General Purpose Register 0 -------- */
#define DDR3PHY_GPR0_Msk                      _U_(0x00000000)                                      /**< (DDR3PHY_GPR0) Register Mask  */


/* -------- DDR3PHY_GPR1 : (DDR3PHY Offset: 0x17C) (R/W 32) General Purpose Register 1 -------- */
#define DDR3PHY_GPR1_Msk                      _U_(0x00000000)                                      /**< (DDR3PHY_GPR1) Register Mask  */


/* -------- DDR3PHY_ZQ0CR0 : (DDR3PHY Offset: 0x180) (R/W 32) ZQ Impedence Control Register 0 -------- */
#define DDR3PHY_ZQ0CR0_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ0CR0) Register Mask  */


/* -------- DDR3PHY_ZQ0CR1 : (DDR3PHY Offset: 0x184) (R/W 32) ZQ Impedence Control Register 1 -------- */
#define DDR3PHY_ZQ0CR1_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ0CR1) Register Mask  */


/* -------- DDR3PHY_ZQ0SR0 : (DDR3PHY Offset: 0x188) ( R/ 32) ZQ Impedence Control Status Register 0 -------- */
#define DDR3PHY_ZQ0SR0_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ0SR0) Register Mask  */


/* -------- DDR3PHY_ZQ0SR1 : (DDR3PHY Offset: 0x18C) ( R/ 32) ZQ Impedence Control Status Register 1 -------- */
#define DDR3PHY_ZQ0SR1_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ0SR1) Register Mask  */


/* -------- DDR3PHY_ZQ1CR0 : (DDR3PHY Offset: 0x190) (R/W 32) ZQ Impedence Control Register 0 -------- */
#define DDR3PHY_ZQ1CR0_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ1CR0) Register Mask  */


/* -------- DDR3PHY_ZQ1CR1 : (DDR3PHY Offset: 0x194) (R/W 32) ZQ Impedence Control Register 1 -------- */
#define DDR3PHY_ZQ1CR1_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ1CR1) Register Mask  */


/* -------- DDR3PHY_ZQ1SR0 : (DDR3PHY Offset: 0x198) ( R/ 32) ZQ Impedence Control Status Register 0 -------- */
#define DDR3PHY_ZQ1SR0_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ1SR0) Register Mask  */


/* -------- DDR3PHY_ZQ1SR1 : (DDR3PHY Offset: 0x19C) ( R/ 32) ZQ Impedence Control Status Register 1 -------- */
#define DDR3PHY_ZQ1SR1_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ1SR1) Register Mask  */


/* -------- DDR3PHY_ZQ2CR0 : (DDR3PHY Offset: 0x1A0) (R/W 32) ZQ Impedence Control Register 0 -------- */
#define DDR3PHY_ZQ2CR0_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ2CR0) Register Mask  */


/* -------- DDR3PHY_ZQ2CR1 : (DDR3PHY Offset: 0x1A4) (R/W 32) ZQ Impedence Control Register 1 -------- */
#define DDR3PHY_ZQ2CR1_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ2CR1) Register Mask  */


/* -------- DDR3PHY_ZQ2SR0 : (DDR3PHY Offset: 0x1A8) ( R/ 32) ZQ Impedence Control Status Register 0 -------- */
#define DDR3PHY_ZQ2SR0_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ2SR0) Register Mask  */


/* -------- DDR3PHY_ZQ2SR1 : (DDR3PHY Offset: 0x1AC) ( R/ 32) ZQ Impedence Control Status Register 1 -------- */
#define DDR3PHY_ZQ2SR1_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ2SR1) Register Mask  */


/* -------- DDR3PHY_ZQ3CR0 : (DDR3PHY Offset: 0x1B0) (R/W 32) ZQ Impedence Control Register 0 -------- */
#define DDR3PHY_ZQ3CR0_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ3CR0) Register Mask  */


/* -------- DDR3PHY_ZQ3CR1 : (DDR3PHY Offset: 0x1B4) (R/W 32) ZQ Impedence Control Register 1 -------- */
#define DDR3PHY_ZQ3CR1_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ3CR1) Register Mask  */


/* -------- DDR3PHY_ZQ3SR0 : (DDR3PHY Offset: 0x1B8) ( R/ 32) ZQ Impedence Control Status Register 0 -------- */
#define DDR3PHY_ZQ3SR0_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ3SR0) Register Mask  */


/* -------- DDR3PHY_ZQ3SR1 : (DDR3PHY Offset: 0x1BC) ( R/ 32) ZQ Impedence Control Status Register 1 -------- */
#define DDR3PHY_ZQ3SR1_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_ZQ3SR1) Register Mask  */


/* -------- DDR3PHY_DX0GCR : (DDR3PHY Offset: 0x1C0) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX0GCR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_DX0GCR) Register Mask  */


/* -------- DDR3PHY_DX0GSR0 : (DDR3PHY Offset: 0x1C4) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX0GSR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX0GSR0) Register Mask  */


/* -------- DDR3PHY_DX0GSR1 : (DDR3PHY Offset: 0x1C8) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX0GSR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX0GSR1) Register Mask  */


/* -------- DDR3PHY_DX0DLLCR : (DDR3PHY Offset: 0x1CC) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX0DLLCR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX0DLLCR) Register Mask  */


/* -------- DDR3PHY_DX0DQTR : (DDR3PHY Offset: 0x1D0) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX0DQTR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX0DQTR) Register Mask  */


/* -------- DDR3PHY_DX0DQSTR : (DDR3PHY Offset: 0x1D4) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX0DQSTR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX0DQSTR) Register Mask  */


/* -------- DDR3PHY_DX0DQIDLY : (DDR3PHY Offset: 0x1D8) (R/W 32) DATX8 DQ  Input  Delay -------- */
#define DDR3PHY_DX0DQIDLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX0DQIDLY) Register Mask  */


/* -------- DDR3PHY_DX0DQODLY : (DDR3PHY Offset: 0x1DC) (R/W 32) DATX8 DQ  Output Delay -------- */
#define DDR3PHY_DX0DQODLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX0DQODLY) Register Mask  */


/* -------- DDR3PHY_DX0DQSIDLY : (DDR3PHY Offset: 0x1E0) (R/W 32) DATX8 DQS Input  Delay -------- */
#define DDR3PHY_DX0DQSIDLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX0DQSIDLY) Register Mask  */


/* -------- DDR3PHY_DX0DQSODLY : (DDR3PHY Offset: 0x1E4) (R/W 32) DATX8 DQS Output Delay -------- */
#define DDR3PHY_DX0DQSODLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX0DQSODLY) Register Mask  */


/* -------- DDR3PHY_DX1GCR : (DDR3PHY Offset: 0x200) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX1GCR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_DX1GCR) Register Mask  */


/* -------- DDR3PHY_DX1GSR0 : (DDR3PHY Offset: 0x204) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX1GSR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX1GSR0) Register Mask  */


/* -------- DDR3PHY_DX1GSR1 : (DDR3PHY Offset: 0x208) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX1GSR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX1GSR1) Register Mask  */


/* -------- DDR3PHY_DX1DLLCR : (DDR3PHY Offset: 0x20C) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX1DLLCR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX1DLLCR) Register Mask  */


/* -------- DDR3PHY_DX1DQTR : (DDR3PHY Offset: 0x210) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX1DQTR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX1DQTR) Register Mask  */


/* -------- DDR3PHY_DX1DQSTR : (DDR3PHY Offset: 0x214) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX1DQSTR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX1DQSTR) Register Mask  */


/* -------- DDR3PHY_DX1DQIDLY : (DDR3PHY Offset: 0x218) (R/W 32) DATX8 DQ  Input  Delay -------- */
#define DDR3PHY_DX1DQIDLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX1DQIDLY) Register Mask  */


/* -------- DDR3PHY_DX1DQODLY : (DDR3PHY Offset: 0x21C) (R/W 32) DATX8 DQ  Output Delay -------- */
#define DDR3PHY_DX1DQODLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX1DQODLY) Register Mask  */


/* -------- DDR3PHY_DX1DQSIDLY : (DDR3PHY Offset: 0x220) (R/W 32) DATX8 DQS Input  Delay -------- */
#define DDR3PHY_DX1DQSIDLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX1DQSIDLY) Register Mask  */


/* -------- DDR3PHY_DX1DQSODLY : (DDR3PHY Offset: 0x224) (R/W 32) DATX8 DQS Output Delay -------- */
#define DDR3PHY_DX1DQSODLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX1DQSODLY) Register Mask  */


/* -------- DDR3PHY_DX2GCR : (DDR3PHY Offset: 0x240) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX2GCR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_DX2GCR) Register Mask  */


/* -------- DDR3PHY_DX2GSR0 : (DDR3PHY Offset: 0x244) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX2GSR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX2GSR0) Register Mask  */


/* -------- DDR3PHY_DX2GSR1 : (DDR3PHY Offset: 0x248) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX2GSR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX2GSR1) Register Mask  */


/* -------- DDR3PHY_DX2DLLCR : (DDR3PHY Offset: 0x24C) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX2DLLCR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX2DLLCR) Register Mask  */


/* -------- DDR3PHY_DX2DQTR : (DDR3PHY Offset: 0x250) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX2DQTR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX2DQTR) Register Mask  */


/* -------- DDR3PHY_DX2DQSTR : (DDR3PHY Offset: 0x254) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX2DQSTR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX2DQSTR) Register Mask  */


/* -------- DDR3PHY_DX2DQIDLY : (DDR3PHY Offset: 0x258) (R/W 32) DATX8 DQ  Input  Delay -------- */
#define DDR3PHY_DX2DQIDLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX2DQIDLY) Register Mask  */


/* -------- DDR3PHY_DX2DQODLY : (DDR3PHY Offset: 0x25C) (R/W 32) DATX8 DQ  Output Delay -------- */
#define DDR3PHY_DX2DQODLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX2DQODLY) Register Mask  */


/* -------- DDR3PHY_DX2DQSIDLY : (DDR3PHY Offset: 0x260) (R/W 32) DATX8 DQS Input  Delay -------- */
#define DDR3PHY_DX2DQSIDLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX2DQSIDLY) Register Mask  */


/* -------- DDR3PHY_DX2DQSODLY : (DDR3PHY Offset: 0x264) (R/W 32) DATX8 DQS Output Delay -------- */
#define DDR3PHY_DX2DQSODLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX2DQSODLY) Register Mask  */


/* -------- DDR3PHY_DX3GCR : (DDR3PHY Offset: 0x280) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX3GCR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_DX3GCR) Register Mask  */


/* -------- DDR3PHY_DX3GSR0 : (DDR3PHY Offset: 0x284) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX3GSR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX3GSR0) Register Mask  */


/* -------- DDR3PHY_DX3GSR1 : (DDR3PHY Offset: 0x288) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX3GSR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX3GSR1) Register Mask  */


/* -------- DDR3PHY_DX3DLLCR : (DDR3PHY Offset: 0x28C) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX3DLLCR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX3DLLCR) Register Mask  */


/* -------- DDR3PHY_DX3DQTR : (DDR3PHY Offset: 0x290) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX3DQTR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX3DQTR) Register Mask  */


/* -------- DDR3PHY_DX3DQSTR : (DDR3PHY Offset: 0x294) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX3DQSTR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX3DQSTR) Register Mask  */


/* -------- DDR3PHY_DX3DQIDLY : (DDR3PHY Offset: 0x298) (R/W 32) DATX8 DQ  Input  Delay -------- */
#define DDR3PHY_DX3DQIDLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX3DQIDLY) Register Mask  */


/* -------- DDR3PHY_DX3DQODLY : (DDR3PHY Offset: 0x29C) (R/W 32) DATX8 DQ  Output Delay -------- */
#define DDR3PHY_DX3DQODLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX3DQODLY) Register Mask  */


/* -------- DDR3PHY_DX3DQSIDLY : (DDR3PHY Offset: 0x2A0) (R/W 32) DATX8 DQS Input  Delay -------- */
#define DDR3PHY_DX3DQSIDLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX3DQSIDLY) Register Mask  */


/* -------- DDR3PHY_DX3DQSODLY : (DDR3PHY Offset: 0x2A4) (R/W 32) DATX8 DQS Output Delay -------- */
#define DDR3PHY_DX3DQSODLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX3DQSODLY) Register Mask  */


/* -------- DDR3PHY_DX4GCR : (DDR3PHY Offset: 0x2C0) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX4GCR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_DX4GCR) Register Mask  */


/* -------- DDR3PHY_DX4GSR0 : (DDR3PHY Offset: 0x2C4) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX4GSR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX4GSR0) Register Mask  */


/* -------- DDR3PHY_DX4GSR1 : (DDR3PHY Offset: 0x2C8) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX4GSR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX4GSR1) Register Mask  */


/* -------- DDR3PHY_DX4DLLCR : (DDR3PHY Offset: 0x2CC) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX4DLLCR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX4DLLCR) Register Mask  */


/* -------- DDR3PHY_DX4DQTR : (DDR3PHY Offset: 0x2D0) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX4DQTR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX4DQTR) Register Mask  */


/* -------- DDR3PHY_DX4DQSTR : (DDR3PHY Offset: 0x2D4) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX4DQSTR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX4DQSTR) Register Mask  */


/* -------- DDR3PHY_DX4DQIDLY : (DDR3PHY Offset: 0x2D8) (R/W 32) DATX8 DQ  Input  Delay -------- */
#define DDR3PHY_DX4DQIDLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX4DQIDLY) Register Mask  */


/* -------- DDR3PHY_DX4DQODLY : (DDR3PHY Offset: 0x2DC) (R/W 32) DATX8 DQ  Output Delay -------- */
#define DDR3PHY_DX4DQODLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX4DQODLY) Register Mask  */


/* -------- DDR3PHY_DX4DQSIDLY : (DDR3PHY Offset: 0x2E0) (R/W 32) DATX8 DQS Input  Delay -------- */
#define DDR3PHY_DX4DQSIDLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX4DQSIDLY) Register Mask  */


/* -------- DDR3PHY_DX4DQSODLY : (DDR3PHY Offset: 0x2E4) (R/W 32) DATX8 DQS Output Delay -------- */
#define DDR3PHY_DX4DQSODLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX4DQSODLY) Register Mask  */


/* -------- DDR3PHY_DX5GCR : (DDR3PHY Offset: 0x300) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX5GCR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_DX5GCR) Register Mask  */


/* -------- DDR3PHY_DX5GSR0 : (DDR3PHY Offset: 0x304) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX5GSR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX5GSR0) Register Mask  */


/* -------- DDR3PHY_DX5GSR1 : (DDR3PHY Offset: 0x308) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX5GSR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX5GSR1) Register Mask  */


/* -------- DDR3PHY_DX5DLLCR : (DDR3PHY Offset: 0x30C) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX5DLLCR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX5DLLCR) Register Mask  */


/* -------- DDR3PHY_DX5DQTR : (DDR3PHY Offset: 0x310) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX5DQTR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX5DQTR) Register Mask  */


/* -------- DDR3PHY_DX5DQSTR : (DDR3PHY Offset: 0x314) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX5DQSTR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX5DQSTR) Register Mask  */


/* -------- DDR3PHY_DX5DQIDLY : (DDR3PHY Offset: 0x318) (R/W 32) DATX8 DQ  Input  Delay -------- */
#define DDR3PHY_DX5DQIDLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX5DQIDLY) Register Mask  */


/* -------- DDR3PHY_DX5DQODLY : (DDR3PHY Offset: 0x31C) (R/W 32) DATX8 DQ  Output Delay -------- */
#define DDR3PHY_DX5DQODLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX5DQODLY) Register Mask  */


/* -------- DDR3PHY_DX5DQSIDLY : (DDR3PHY Offset: 0x320) (R/W 32) DATX8 DQS Input  Delay -------- */
#define DDR3PHY_DX5DQSIDLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX5DQSIDLY) Register Mask  */


/* -------- DDR3PHY_DX5DQSODLY : (DDR3PHY Offset: 0x324) (R/W 32) DATX8 DQS Output Delay -------- */
#define DDR3PHY_DX5DQSODLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX5DQSODLY) Register Mask  */


/* -------- DDR3PHY_DX6GCR : (DDR3PHY Offset: 0x340) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX6GCR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_DX6GCR) Register Mask  */


/* -------- DDR3PHY_DX6GSR0 : (DDR3PHY Offset: 0x344) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX6GSR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX6GSR0) Register Mask  */


/* -------- DDR3PHY_DX6GSR1 : (DDR3PHY Offset: 0x348) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX6GSR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX6GSR1) Register Mask  */


/* -------- DDR3PHY_DX6DLLCR : (DDR3PHY Offset: 0x34C) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX6DLLCR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX6DLLCR) Register Mask  */


/* -------- DDR3PHY_DX6DQTR : (DDR3PHY Offset: 0x350) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX6DQTR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX6DQTR) Register Mask  */


/* -------- DDR3PHY_DX6DQSTR : (DDR3PHY Offset: 0x354) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX6DQSTR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX6DQSTR) Register Mask  */


/* -------- DDR3PHY_DX6DQIDLY : (DDR3PHY Offset: 0x358) (R/W 32) DATX8 DQ  Input  Delay -------- */
#define DDR3PHY_DX6DQIDLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX6DQIDLY) Register Mask  */


/* -------- DDR3PHY_DX6DQODLY : (DDR3PHY Offset: 0x35C) (R/W 32) DATX8 DQ  Output Delay -------- */
#define DDR3PHY_DX6DQODLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX6DQODLY) Register Mask  */


/* -------- DDR3PHY_DX6DQSIDLY : (DDR3PHY Offset: 0x360) (R/W 32) DATX8 DQS Input  Delay -------- */
#define DDR3PHY_DX6DQSIDLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX6DQSIDLY) Register Mask  */


/* -------- DDR3PHY_DX6DQSODLY : (DDR3PHY Offset: 0x364) (R/W 32) DATX8 DQS Output Delay -------- */
#define DDR3PHY_DX6DQSODLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX6DQSODLY) Register Mask  */


/* -------- DDR3PHY_DX7GCR : (DDR3PHY Offset: 0x380) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX7GCR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_DX7GCR) Register Mask  */


/* -------- DDR3PHY_DX7GSR0 : (DDR3PHY Offset: 0x384) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX7GSR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX7GSR0) Register Mask  */


/* -------- DDR3PHY_DX7GSR1 : (DDR3PHY Offset: 0x388) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX7GSR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX7GSR1) Register Mask  */


/* -------- DDR3PHY_DX7DLLCR : (DDR3PHY Offset: 0x38C) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX7DLLCR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX7DLLCR) Register Mask  */


/* -------- DDR3PHY_DX7DQTR : (DDR3PHY Offset: 0x390) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX7DQTR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX7DQTR) Register Mask  */


/* -------- DDR3PHY_DX7DQSTR : (DDR3PHY Offset: 0x394) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX7DQSTR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX7DQSTR) Register Mask  */


/* -------- DDR3PHY_DX7DQIDLY : (DDR3PHY Offset: 0x398) (R/W 32) DATX8 DQ  Input  Delay -------- */
#define DDR3PHY_DX7DQIDLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX7DQIDLY) Register Mask  */


/* -------- DDR3PHY_DX7DQODLY : (DDR3PHY Offset: 0x39C) (R/W 32) DATX8 DQ  Output Delay -------- */
#define DDR3PHY_DX7DQODLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX7DQODLY) Register Mask  */


/* -------- DDR3PHY_DX7DQSIDLY : (DDR3PHY Offset: 0x3A0) (R/W 32) DATX8 DQS Input  Delay -------- */
#define DDR3PHY_DX7DQSIDLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX7DQSIDLY) Register Mask  */


/* -------- DDR3PHY_DX7DQSODLY : (DDR3PHY Offset: 0x3A4) (R/W 32) DATX8 DQS Output Delay -------- */
#define DDR3PHY_DX7DQSODLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX7DQSODLY) Register Mask  */


/* -------- DDR3PHY_DX8GCR : (DDR3PHY Offset: 0x3C0) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX8GCR_Msk                    _U_(0x00000000)                                      /**< (DDR3PHY_DX8GCR) Register Mask  */


/* -------- DDR3PHY_DX8GSR0 : (DDR3PHY Offset: 0x3C4) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX8GSR0_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX8GSR0) Register Mask  */


/* -------- DDR3PHY_DX8GSR1 : (DDR3PHY Offset: 0x3C8) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX8GSR1_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX8GSR1) Register Mask  */


/* -------- DDR3PHY_DX8DLLCR : (DDR3PHY Offset: 0x3CC) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX8DLLCR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX8DLLCR) Register Mask  */


/* -------- DDR3PHY_DX8DQTR : (DDR3PHY Offset: 0x3D0) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX8DQTR_Msk                   _U_(0x00000000)                                      /**< (DDR3PHY_DX8DQTR) Register Mask  */


/* -------- DDR3PHY_DX8DQSTR : (DDR3PHY Offset: 0x3D4) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX8DQSTR_Msk                  _U_(0x00000000)                                      /**< (DDR3PHY_DX8DQSTR) Register Mask  */


/* -------- DDR3PHY_DX8DQIDLY : (DDR3PHY Offset: 0x3D8) (R/W 32) DATX8 DQ  Input  Delay -------- */
#define DDR3PHY_DX8DQIDLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX8DQIDLY) Register Mask  */


/* -------- DDR3PHY_DX8DQODLY : (DDR3PHY Offset: 0x3DC) (R/W 32) DATX8 DQ  Output Delay -------- */
#define DDR3PHY_DX8DQODLY_Msk                 _U_(0x00000000)                                      /**< (DDR3PHY_DX8DQODLY) Register Mask  */


/* -------- DDR3PHY_DX8DQSIDLY : (DDR3PHY Offset: 0x3E0) (R/W 32) DATX8 DQS Input  Delay -------- */
#define DDR3PHY_DX8DQSIDLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX8DQSIDLY) Register Mask  */


/* -------- DDR3PHY_DX8DQSODLY : (DDR3PHY Offset: 0x3E4) (R/W 32) DATX8 DQS Output Delay -------- */
#define DDR3PHY_DX8DQSODLY_Msk                _U_(0x00000000)                                      /**< (DDR3PHY_DX8DQSODLY) Register Mask  */


/** \brief DDR3PHY register offsets definitions */
#define DDR3PHY_RIDR_REG_OFST          (0x00)              /**< (DDR3PHY_RIDR) Revision Identification Register Offset */
#define DDR3PHY_PIR_REG_OFST           (0x04)              /**< (DDR3PHY_PIR) PHY Initialization Register Offset */
#define DDR3PHY_PGCR_REG_OFST          (0x08)              /**< (DDR3PHY_PGCR) PHY General Configuration Register Offset */
#define DDR3PHY_PGSR_REG_OFST          (0x0C)              /**< (DDR3PHY_PGSR) PHY General Status Register Offset */
#define DDR3PHY_DLLGCR_REG_OFST        (0x10)              /**< (DDR3PHY_DLLGCR) DLL General Control Register Offset */
#define DDR3PHY_ACDLLCR_REG_OFST       (0x14)              /**< (DDR3PHY_ACDLLCR) AC DLL Control Register Offset */
#define DDR3PHY_PTR0_REG_OFST          (0x18)              /**< (DDR3PHY_PTR0) PHY Timing Register 0 Offset */
#define DDR3PHY_PTR1_REG_OFST          (0x1C)              /**< (DDR3PHY_PTR1) PHY Timing Register 1 Offset */
#define DDR3PHY_PTR2_REG_OFST          (0x20)              /**< (DDR3PHY_PTR2) PHY Timing Register 2 Offset */
#define DDR3PHY_ACIOCR_REG_OFST        (0x24)              /**< (DDR3PHY_ACIOCR) AC I/O Configuration Register Offset */
#define DDR3PHY_DXCCR_REG_OFST         (0x28)              /**< (DDR3PHY_DXCCR) DATX8 I/O Configuration Register Offset */
#define DDR3PHY_DSGCR_REG_OFST         (0x2C)              /**< (DDR3PHY_DSGCR) DFI Configuration Register Offset */
#define DDR3PHY_DCR_REG_OFST           (0x30)              /**< (DDR3PHY_DCR) DRAM Configuration Register Offset */
#define DDR3PHY_DTPR0_REG_OFST         (0x34)              /**< (DDR3PHY_DTPR0) SDRAM Timing Parameters Register 0 Offset */
#define DDR3PHY_DTPR1_REG_OFST         (0x38)              /**< (DDR3PHY_DTPR1) SDRAM Timing Parameters Register 1 Offset */
#define DDR3PHY_DTPR2_REG_OFST         (0x3C)              /**< (DDR3PHY_DTPR2) SDRAM Timing Parameters Register 2 Offset */
#define DDR3PHY_MR0_REG_OFST           (0x40)              /**< (DDR3PHY_MR0) Mode Register Offset */
#define DDR3PHY_MR1_REG_OFST           (0x44)              /**< (DDR3PHY_MR1) Extended Mode Register Offset */
#define DDR3PHY_MR2_REG_OFST           (0x48)              /**< (DDR3PHY_MR2) Extended Mode Register 2 Offset */
#define DDR3PHY_MR3_REG_OFST           (0x4C)              /**< (DDR3PHY_MR3) Extended Mode Register 3 Offset */
#define DDR3PHY_ODTCR_REG_OFST         (0x50)              /**< (DDR3PHY_ODTCR) ODT Configuration Register Offset */
#define DDR3PHY_DTAR_REG_OFST          (0x54)              /**< (DDR3PHY_DTAR) Data Training Address Register Offset */
#define DDR3PHY_DTDR0_REG_OFST         (0x58)              /**< (DDR3PHY_DTDR0) Data Training Data Register 0 Offset */
#define DDR3PHY_DTDR1_REG_OFST         (0x5C)              /**< (DDR3PHY_DTDR1) Data Training Data Register 1 Offset */
#define DDR3PHY_DTPSL_REG_OFST         (0x60)              /**< (DDR3PHY_DTPSL) Data Training Phase shift Log Offset */
#define DDR3PHY_ACODLY_REG_OFST        (0x64)              /**< (DDR3PHY_ACODLY) Data Training AC Ouput delay Offset */
#define DDR3PHY_DCUAR_REG_OFST         (0xC0)              /**< (DDR3PHY_DCUAR) DCU Address Register Offset */
#define DDR3PHY_DCUDR_REG_OFST         (0xC4)              /**< (DDR3PHY_DCUDR) DCU Data Register Offset */
#define DDR3PHY_DCURR_REG_OFST         (0xC8)              /**< (DDR3PHY_DCURR) DCU Run Register Offset */
#define DDR3PHY_DCULR_REG_OFST         (0xCC)              /**< (DDR3PHY_DCULR) DCU Loop Register Offset */
#define DDR3PHY_DCUGCR_REG_OFST        (0xD0)              /**< (DDR3PHY_DCUGCR) DCU General Configuration Register Offset */
#define DDR3PHY_DCUTPR_REG_OFST        (0xD4)              /**< (DDR3PHY_DCUTPR) DCU Timing Parameter Register Offset */
#define DDR3PHY_DCUSR0_REG_OFST        (0xD8)              /**< (DDR3PHY_DCUSR0) DCU Status-0 Register Offset */
#define DDR3PHY_DCUSR1_REG_OFST        (0xDC)              /**< (DDR3PHY_DCUSR1) DCU Status-1 Register Offset */
#define DDR3PHY_BISTRR_REG_OFST        (0x100)             /**< (DDR3PHY_BISTRR) BIST Run Register Offset */
#define DDR3PHY_BISTMSKR0_REG_OFST     (0x104)             /**< (DDR3PHY_BISTMSKR0) BIST Mask 0 Register Offset */
#define DDR3PHY_BISTMSKR1_REG_OFST     (0x108)             /**< (DDR3PHY_BISTMSKR1) BIST Mask 1 Register Offset */
#define DDR3PHY_BISTWCR_REG_OFST       (0x10C)             /**< (DDR3PHY_BISTWCR) BIST Word Count Register Offset */
#define DDR3PHY_BISTLSR_REG_OFST       (0x110)             /**< (DDR3PHY_BISTLSR) BIST LFSR Seed Register Offset */
#define DDR3PHY_BISTAR0_REG_OFST       (0x114)             /**< (DDR3PHY_BISTAR0) BIST Address 0 Register Offset */
#define DDR3PHY_BISTAR1_REG_OFST       (0x118)             /**< (DDR3PHY_BISTAR1) BIST Address 1 Register Offset */
#define DDR3PHY_BISTAR2_REG_OFST       (0x11C)             /**< (DDR3PHY_BISTAR2) BIST Address 2 Register Offset */
#define DDR3PHY_BISTUDPR_REG_OFST      (0x120)             /**< (DDR3PHY_BISTUDPR) BIST User Data Pattern Register Offset */
#define DDR3PHY_BISTGSR_REG_OFST       (0x124)             /**< (DDR3PHY_BISTGSR) BIST General Status Register Offset */
#define DDR3PHY_BISTWER_REG_OFST       (0x128)             /**< (DDR3PHY_BISTWER) BIST Word Error Register Offset */
#define DDR3PHY_BISTBER0_REG_OFST      (0x12C)             /**< (DDR3PHY_BISTBER0) BIST Bit Error 0 Register Offset */
#define DDR3PHY_BISTBER1_REG_OFST      (0x130)             /**< (DDR3PHY_BISTBER1) BIST Bit Error 1 Register Offset */
#define DDR3PHY_BISTBER2_REG_OFST      (0x134)             /**< (DDR3PHY_BISTBER2) BIST Bit Error 2 Register Offset */
#define DDR3PHY_BISTWCSR_REG_OFST      (0x138)             /**< (DDR3PHY_BISTWCSR) BIST Word Count Status Register Offset */
#define DDR3PHY_BISTFWR0_REG_OFST      (0x13C)             /**< (DDR3PHY_BISTFWR0) BIST Fail Word 0 Register Offset */
#define DDR3PHY_BISTFWR1_REG_OFST      (0x140)             /**< (DDR3PHY_BISTFWR1) BIST Fail Word 1 Register Offset */
#define DDR3PHY_GPR0_REG_OFST          (0x178)             /**< (DDR3PHY_GPR0) General Purpose Register 0 Offset */
#define DDR3PHY_GPR1_REG_OFST          (0x17C)             /**< (DDR3PHY_GPR1) General Purpose Register 1 Offset */
#define DDR3PHY_ZQ0CR0_REG_OFST        (0x180)             /**< (DDR3PHY_ZQ0CR0) ZQ Impedence Control Register 0 Offset */
#define DDR3PHY_ZQ0CR1_REG_OFST        (0x184)             /**< (DDR3PHY_ZQ0CR1) ZQ Impedence Control Register 1 Offset */
#define DDR3PHY_ZQ0SR0_REG_OFST        (0x188)             /**< (DDR3PHY_ZQ0SR0) ZQ Impedence Control Status Register 0 Offset */
#define DDR3PHY_ZQ0SR1_REG_OFST        (0x18C)             /**< (DDR3PHY_ZQ0SR1) ZQ Impedence Control Status Register 1 Offset */
#define DDR3PHY_ZQ1CR0_REG_OFST        (0x190)             /**< (DDR3PHY_ZQ1CR0) ZQ Impedence Control Register 0 Offset */
#define DDR3PHY_ZQ1CR1_REG_OFST        (0x194)             /**< (DDR3PHY_ZQ1CR1) ZQ Impedence Control Register 1 Offset */
#define DDR3PHY_ZQ1SR0_REG_OFST        (0x198)             /**< (DDR3PHY_ZQ1SR0) ZQ Impedence Control Status Register 0 Offset */
#define DDR3PHY_ZQ1SR1_REG_OFST        (0x19C)             /**< (DDR3PHY_ZQ1SR1) ZQ Impedence Control Status Register 1 Offset */
#define DDR3PHY_ZQ2CR0_REG_OFST        (0x1A0)             /**< (DDR3PHY_ZQ2CR0) ZQ Impedence Control Register 0 Offset */
#define DDR3PHY_ZQ2CR1_REG_OFST        (0x1A4)             /**< (DDR3PHY_ZQ2CR1) ZQ Impedence Control Register 1 Offset */
#define DDR3PHY_ZQ2SR0_REG_OFST        (0x1A8)             /**< (DDR3PHY_ZQ2SR0) ZQ Impedence Control Status Register 0 Offset */
#define DDR3PHY_ZQ2SR1_REG_OFST        (0x1AC)             /**< (DDR3PHY_ZQ2SR1) ZQ Impedence Control Status Register 1 Offset */
#define DDR3PHY_ZQ3CR0_REG_OFST        (0x1B0)             /**< (DDR3PHY_ZQ3CR0) ZQ Impedence Control Register 0 Offset */
#define DDR3PHY_ZQ3CR1_REG_OFST        (0x1B4)             /**< (DDR3PHY_ZQ3CR1) ZQ Impedence Control Register 1 Offset */
#define DDR3PHY_ZQ3SR0_REG_OFST        (0x1B8)             /**< (DDR3PHY_ZQ3SR0) ZQ Impedence Control Status Register 0 Offset */
#define DDR3PHY_ZQ3SR1_REG_OFST        (0x1BC)             /**< (DDR3PHY_ZQ3SR1) ZQ Impedence Control Status Register 1 Offset */
#define DDR3PHY_DX0GCR_REG_OFST        (0x1C0)             /**< (DDR3PHY_DX0GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX0GSR0_REG_OFST       (0x1C4)             /**< (DDR3PHY_DX0GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX0GSR1_REG_OFST       (0x1C8)             /**< (DDR3PHY_DX0GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX0DLLCR_REG_OFST      (0x1CC)             /**< (DDR3PHY_DX0DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX0DQTR_REG_OFST       (0x1D0)             /**< (DDR3PHY_DX0DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX0DQSTR_REG_OFST      (0x1D4)             /**< (DDR3PHY_DX0DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX0DQIDLY_REG_OFST     (0x1D8)             /**< (DDR3PHY_DX0DQIDLY) DATX8 DQ  Input  Delay Offset */
#define DDR3PHY_DX0DQODLY_REG_OFST     (0x1DC)             /**< (DDR3PHY_DX0DQODLY) DATX8 DQ  Output Delay Offset */
#define DDR3PHY_DX0DQSIDLY_REG_OFST    (0x1E0)             /**< (DDR3PHY_DX0DQSIDLY) DATX8 DQS Input  Delay Offset */
#define DDR3PHY_DX0DQSODLY_REG_OFST    (0x1E4)             /**< (DDR3PHY_DX0DQSODLY) DATX8 DQS Output Delay Offset */
#define DDR3PHY_DX1GCR_REG_OFST        (0x200)             /**< (DDR3PHY_DX1GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX1GSR0_REG_OFST       (0x204)             /**< (DDR3PHY_DX1GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX1GSR1_REG_OFST       (0x208)             /**< (DDR3PHY_DX1GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX1DLLCR_REG_OFST      (0x20C)             /**< (DDR3PHY_DX1DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX1DQTR_REG_OFST       (0x210)             /**< (DDR3PHY_DX1DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX1DQSTR_REG_OFST      (0x214)             /**< (DDR3PHY_DX1DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX1DQIDLY_REG_OFST     (0x218)             /**< (DDR3PHY_DX1DQIDLY) DATX8 DQ  Input  Delay Offset */
#define DDR3PHY_DX1DQODLY_REG_OFST     (0x21C)             /**< (DDR3PHY_DX1DQODLY) DATX8 DQ  Output Delay Offset */
#define DDR3PHY_DX1DQSIDLY_REG_OFST    (0x220)             /**< (DDR3PHY_DX1DQSIDLY) DATX8 DQS Input  Delay Offset */
#define DDR3PHY_DX1DQSODLY_REG_OFST    (0x224)             /**< (DDR3PHY_DX1DQSODLY) DATX8 DQS Output Delay Offset */
#define DDR3PHY_DX2GCR_REG_OFST        (0x240)             /**< (DDR3PHY_DX2GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX2GSR0_REG_OFST       (0x244)             /**< (DDR3PHY_DX2GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX2GSR1_REG_OFST       (0x248)             /**< (DDR3PHY_DX2GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX2DLLCR_REG_OFST      (0x24C)             /**< (DDR3PHY_DX2DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX2DQTR_REG_OFST       (0x250)             /**< (DDR3PHY_DX2DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX2DQSTR_REG_OFST      (0x254)             /**< (DDR3PHY_DX2DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX2DQIDLY_REG_OFST     (0x258)             /**< (DDR3PHY_DX2DQIDLY) DATX8 DQ  Input  Delay Offset */
#define DDR3PHY_DX2DQODLY_REG_OFST     (0x25C)             /**< (DDR3PHY_DX2DQODLY) DATX8 DQ  Output Delay Offset */
#define DDR3PHY_DX2DQSIDLY_REG_OFST    (0x260)             /**< (DDR3PHY_DX2DQSIDLY) DATX8 DQS Input  Delay Offset */
#define DDR3PHY_DX2DQSODLY_REG_OFST    (0x264)             /**< (DDR3PHY_DX2DQSODLY) DATX8 DQS Output Delay Offset */
#define DDR3PHY_DX3GCR_REG_OFST        (0x280)             /**< (DDR3PHY_DX3GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX3GSR0_REG_OFST       (0x284)             /**< (DDR3PHY_DX3GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX3GSR1_REG_OFST       (0x288)             /**< (DDR3PHY_DX3GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX3DLLCR_REG_OFST      (0x28C)             /**< (DDR3PHY_DX3DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX3DQTR_REG_OFST       (0x290)             /**< (DDR3PHY_DX3DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX3DQSTR_REG_OFST      (0x294)             /**< (DDR3PHY_DX3DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX3DQIDLY_REG_OFST     (0x298)             /**< (DDR3PHY_DX3DQIDLY) DATX8 DQ  Input  Delay Offset */
#define DDR3PHY_DX3DQODLY_REG_OFST     (0x29C)             /**< (DDR3PHY_DX3DQODLY) DATX8 DQ  Output Delay Offset */
#define DDR3PHY_DX3DQSIDLY_REG_OFST    (0x2A0)             /**< (DDR3PHY_DX3DQSIDLY) DATX8 DQS Input  Delay Offset */
#define DDR3PHY_DX3DQSODLY_REG_OFST    (0x2A4)             /**< (DDR3PHY_DX3DQSODLY) DATX8 DQS Output Delay Offset */
#define DDR3PHY_DX4GCR_REG_OFST        (0x2C0)             /**< (DDR3PHY_DX4GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX4GSR0_REG_OFST       (0x2C4)             /**< (DDR3PHY_DX4GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX4GSR1_REG_OFST       (0x2C8)             /**< (DDR3PHY_DX4GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX4DLLCR_REG_OFST      (0x2CC)             /**< (DDR3PHY_DX4DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX4DQTR_REG_OFST       (0x2D0)             /**< (DDR3PHY_DX4DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX4DQSTR_REG_OFST      (0x2D4)             /**< (DDR3PHY_DX4DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX4DQIDLY_REG_OFST     (0x2D8)             /**< (DDR3PHY_DX4DQIDLY) DATX8 DQ  Input  Delay Offset */
#define DDR3PHY_DX4DQODLY_REG_OFST     (0x2DC)             /**< (DDR3PHY_DX4DQODLY) DATX8 DQ  Output Delay Offset */
#define DDR3PHY_DX4DQSIDLY_REG_OFST    (0x2E0)             /**< (DDR3PHY_DX4DQSIDLY) DATX8 DQS Input  Delay Offset */
#define DDR3PHY_DX4DQSODLY_REG_OFST    (0x2E4)             /**< (DDR3PHY_DX4DQSODLY) DATX8 DQS Output Delay Offset */
#define DDR3PHY_DX5GCR_REG_OFST        (0x300)             /**< (DDR3PHY_DX5GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX5GSR0_REG_OFST       (0x304)             /**< (DDR3PHY_DX5GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX5GSR1_REG_OFST       (0x308)             /**< (DDR3PHY_DX5GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX5DLLCR_REG_OFST      (0x30C)             /**< (DDR3PHY_DX5DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX5DQTR_REG_OFST       (0x310)             /**< (DDR3PHY_DX5DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX5DQSTR_REG_OFST      (0x314)             /**< (DDR3PHY_DX5DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX5DQIDLY_REG_OFST     (0x318)             /**< (DDR3PHY_DX5DQIDLY) DATX8 DQ  Input  Delay Offset */
#define DDR3PHY_DX5DQODLY_REG_OFST     (0x31C)             /**< (DDR3PHY_DX5DQODLY) DATX8 DQ  Output Delay Offset */
#define DDR3PHY_DX5DQSIDLY_REG_OFST    (0x320)             /**< (DDR3PHY_DX5DQSIDLY) DATX8 DQS Input  Delay Offset */
#define DDR3PHY_DX5DQSODLY_REG_OFST    (0x324)             /**< (DDR3PHY_DX5DQSODLY) DATX8 DQS Output Delay Offset */
#define DDR3PHY_DX6GCR_REG_OFST        (0x340)             /**< (DDR3PHY_DX6GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX6GSR0_REG_OFST       (0x344)             /**< (DDR3PHY_DX6GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX6GSR1_REG_OFST       (0x348)             /**< (DDR3PHY_DX6GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX6DLLCR_REG_OFST      (0x34C)             /**< (DDR3PHY_DX6DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX6DQTR_REG_OFST       (0x350)             /**< (DDR3PHY_DX6DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX6DQSTR_REG_OFST      (0x354)             /**< (DDR3PHY_DX6DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX6DQIDLY_REG_OFST     (0x358)             /**< (DDR3PHY_DX6DQIDLY) DATX8 DQ  Input  Delay Offset */
#define DDR3PHY_DX6DQODLY_REG_OFST     (0x35C)             /**< (DDR3PHY_DX6DQODLY) DATX8 DQ  Output Delay Offset */
#define DDR3PHY_DX6DQSIDLY_REG_OFST    (0x360)             /**< (DDR3PHY_DX6DQSIDLY) DATX8 DQS Input  Delay Offset */
#define DDR3PHY_DX6DQSODLY_REG_OFST    (0x364)             /**< (DDR3PHY_DX6DQSODLY) DATX8 DQS Output Delay Offset */
#define DDR3PHY_DX7GCR_REG_OFST        (0x380)             /**< (DDR3PHY_DX7GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX7GSR0_REG_OFST       (0x384)             /**< (DDR3PHY_DX7GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX7GSR1_REG_OFST       (0x388)             /**< (DDR3PHY_DX7GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX7DLLCR_REG_OFST      (0x38C)             /**< (DDR3PHY_DX7DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX7DQTR_REG_OFST       (0x390)             /**< (DDR3PHY_DX7DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX7DQSTR_REG_OFST      (0x394)             /**< (DDR3PHY_DX7DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX7DQIDLY_REG_OFST     (0x398)             /**< (DDR3PHY_DX7DQIDLY) DATX8 DQ  Input  Delay Offset */
#define DDR3PHY_DX7DQODLY_REG_OFST     (0x39C)             /**< (DDR3PHY_DX7DQODLY) DATX8 DQ  Output Delay Offset */
#define DDR3PHY_DX7DQSIDLY_REG_OFST    (0x3A0)             /**< (DDR3PHY_DX7DQSIDLY) DATX8 DQS Input  Delay Offset */
#define DDR3PHY_DX7DQSODLY_REG_OFST    (0x3A4)             /**< (DDR3PHY_DX7DQSODLY) DATX8 DQS Output Delay Offset */
#define DDR3PHY_DX8GCR_REG_OFST        (0x3C0)             /**< (DDR3PHY_DX8GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX8GSR0_REG_OFST       (0x3C4)             /**< (DDR3PHY_DX8GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX8GSR1_REG_OFST       (0x3C8)             /**< (DDR3PHY_DX8GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX8DLLCR_REG_OFST      (0x3CC)             /**< (DDR3PHY_DX8DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX8DQTR_REG_OFST       (0x3D0)             /**< (DDR3PHY_DX8DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX8DQSTR_REG_OFST      (0x3D4)             /**< (DDR3PHY_DX8DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX8DQIDLY_REG_OFST     (0x3D8)             /**< (DDR3PHY_DX8DQIDLY) DATX8 DQ  Input  Delay Offset */
#define DDR3PHY_DX8DQODLY_REG_OFST     (0x3DC)             /**< (DDR3PHY_DX8DQODLY) DATX8 DQ  Output Delay Offset */
#define DDR3PHY_DX8DQSIDLY_REG_OFST    (0x3E0)             /**< (DDR3PHY_DX8DQSIDLY) DATX8 DQS Input  Delay Offset */
#define DDR3PHY_DX8DQSODLY_REG_OFST    (0x3E4)             /**< (DDR3PHY_DX8DQSODLY) DATX8 DQS Output Delay Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DDR3PHY register API structure */
typedef struct
{  /* DDR SDRAM PHY Utility Block Lite */
  __I   uint32_t                       DDR3PHY_RIDR;       /**< Offset: 0x00 (R/   32) Revision Identification Register */
  __IO  uint32_t                       DDR3PHY_PIR;        /**< Offset: 0x04 (R/W  32) PHY Initialization Register */
  __IO  uint32_t                       DDR3PHY_PGCR;       /**< Offset: 0x08 (R/W  32) PHY General Configuration Register */
  __I   uint32_t                       DDR3PHY_PGSR;       /**< Offset: 0x0C (R/   32) PHY General Status Register */
  __IO  uint32_t                       DDR3PHY_DLLGCR;     /**< Offset: 0x10 (R/W  32) DLL General Control Register */
  __IO  uint32_t                       DDR3PHY_ACDLLCR;    /**< Offset: 0x14 (R/W  32) AC DLL Control Register */
  __IO  uint32_t                       DDR3PHY_PTR0;       /**< Offset: 0x18 (R/W  32) PHY Timing Register 0 */
  __IO  uint32_t                       DDR3PHY_PTR1;       /**< Offset: 0x1C (R/W  32) PHY Timing Register 1 */
  __IO  uint32_t                       DDR3PHY_PTR2;       /**< Offset: 0x20 (R/W  32) PHY Timing Register 2 */
  __IO  uint32_t                       DDR3PHY_ACIOCR;     /**< Offset: 0x24 (R/W  32) AC I/O Configuration Register */
  __IO  uint32_t                       DDR3PHY_DXCCR;      /**< Offset: 0x28 (R/W  32) DATX8 I/O Configuration Register */
  __IO  uint32_t                       DDR3PHY_DSGCR;      /**< Offset: 0x2C (R/W  32) DFI Configuration Register */
  __IO  uint32_t                       DDR3PHY_DCR;        /**< Offset: 0x30 (R/W  32) DRAM Configuration Register */
  __IO  uint32_t                       DDR3PHY_DTPR0;      /**< Offset: 0x34 (R/W  32) SDRAM Timing Parameters Register 0 */
  __IO  uint32_t                       DDR3PHY_DTPR1;      /**< Offset: 0x38 (R/W  32) SDRAM Timing Parameters Register 1 */
  __IO  uint32_t                       DDR3PHY_DTPR2;      /**< Offset: 0x3C (R/W  32) SDRAM Timing Parameters Register 2 */
  __IO  uint32_t                       DDR3PHY_MR0;        /**< Offset: 0x40 (R/W  32) Mode Register */
  __IO  uint32_t                       DDR3PHY_MR1;        /**< Offset: 0x44 (R/W  32) Extended Mode Register */
  __IO  uint32_t                       DDR3PHY_MR2;        /**< Offset: 0x48 (R/W  32) Extended Mode Register 2 */
  __IO  uint32_t                       DDR3PHY_MR3;        /**< Offset: 0x4C (R/W  32) Extended Mode Register 3 */
  __IO  uint32_t                       DDR3PHY_ODTCR;      /**< Offset: 0x50 (R/W  32) ODT Configuration Register */
  __IO  uint32_t                       DDR3PHY_DTAR;       /**< Offset: 0x54 (R/W  32) Data Training Address Register */
  __IO  uint32_t                       DDR3PHY_DTDR0;      /**< Offset: 0x58 (R/W  32) Data Training Data Register 0 */
  __IO  uint32_t                       DDR3PHY_DTDR1;      /**< Offset: 0x5C (R/W  32) Data Training Data Register 1 */
  __I   uint32_t                       DDR3PHY_DTPSL;      /**< Offset: 0x60 (R/   32) Data Training Phase shift Log */
  __IO  uint32_t                       DDR3PHY_ACODLY;     /**< Offset: 0x64 (R/W  32) Data Training AC Ouput delay */
  __I   uint8_t                        Reserved1[0x58];
  __IO  uint32_t                       DDR3PHY_DCUAR;      /**< Offset: 0xC0 (R/W  32) DCU Address Register */
  __IO  uint32_t                       DDR3PHY_DCUDR;      /**< Offset: 0xC4 (R/W  32) DCU Data Register */
  __IO  uint32_t                       DDR3PHY_DCURR;      /**< Offset: 0xC8 (R/W  32) DCU Run Register */
  __IO  uint32_t                       DDR3PHY_DCULR;      /**< Offset: 0xCC (R/W  32) DCU Loop Register */
  __IO  uint32_t                       DDR3PHY_DCUGCR;     /**< Offset: 0xD0 (R/W  32) DCU General Configuration Register */
  __IO  uint32_t                       DDR3PHY_DCUTPR;     /**< Offset: 0xD4 (R/W  32) DCU Timing Parameter Register */
  __IO  uint32_t                       DDR3PHY_DCUSR0;     /**< Offset: 0xD8 (R/W  32) DCU Status-0 Register */
  __IO  uint32_t                       DDR3PHY_DCUSR1;     /**< Offset: 0xDC (R/W  32) DCU Status-1 Register */
  __I   uint8_t                        Reserved2[0x20];
  __IO  uint32_t                       DDR3PHY_BISTRR;     /**< Offset: 0x100 (R/W  32) BIST Run Register */
  __IO  uint32_t                       DDR3PHY_BISTMSKR0;  /**< Offset: 0x104 (R/W  32) BIST Mask 0 Register */
  __IO  uint32_t                       DDR3PHY_BISTMSKR1;  /**< Offset: 0x108 (R/W  32) BIST Mask 1 Register */
  __IO  uint32_t                       DDR3PHY_BISTWCR;    /**< Offset: 0x10C (R/W  32) BIST Word Count Register */
  __IO  uint32_t                       DDR3PHY_BISTLSR;    /**< Offset: 0x110 (R/W  32) BIST LFSR Seed Register */
  __IO  uint32_t                       DDR3PHY_BISTAR0;    /**< Offset: 0x114 (R/W  32) BIST Address 0 Register */
  __IO  uint32_t                       DDR3PHY_BISTAR1;    /**< Offset: 0x118 (R/W  32) BIST Address 1 Register */
  __IO  uint32_t                       DDR3PHY_BISTAR2;    /**< Offset: 0x11C (R/W  32) BIST Address 2 Register */
  __IO  uint32_t                       DDR3PHY_BISTUDPR;   /**< Offset: 0x120 (R/W  32) BIST User Data Pattern Register */
  __IO  uint32_t                       DDR3PHY_BISTGSR;    /**< Offset: 0x124 (R/W  32) BIST General Status Register */
  __IO  uint32_t                       DDR3PHY_BISTWER;    /**< Offset: 0x128 (R/W  32) BIST Word Error Register */
  __IO  uint32_t                       DDR3PHY_BISTBER0;   /**< Offset: 0x12C (R/W  32) BIST Bit Error 0 Register */
  __IO  uint32_t                       DDR3PHY_BISTBER1;   /**< Offset: 0x130 (R/W  32) BIST Bit Error 1 Register */
  __IO  uint32_t                       DDR3PHY_BISTBER2;   /**< Offset: 0x134 (R/W  32) BIST Bit Error 2 Register */
  __IO  uint32_t                       DDR3PHY_BISTWCSR;   /**< Offset: 0x138 (R/W  32) BIST Word Count Status Register */
  __IO  uint32_t                       DDR3PHY_BISTFWR0;   /**< Offset: 0x13C (R/W  32) BIST Fail Word 0 Register */
  __IO  uint32_t                       DDR3PHY_BISTFWR1;   /**< Offset: 0x140 (R/W  32) BIST Fail Word 1 Register */
  __I   uint8_t                        Reserved3[0x34];
  __IO  uint32_t                       DDR3PHY_GPR0;       /**< Offset: 0x178 (R/W  32) General Purpose Register 0 */
  __IO  uint32_t                       DDR3PHY_GPR1;       /**< Offset: 0x17C (R/W  32) General Purpose Register 1 */
  __IO  uint32_t                       DDR3PHY_ZQ0CR0;     /**< Offset: 0x180 (R/W  32) ZQ Impedence Control Register 0 */
  __IO  uint32_t                       DDR3PHY_ZQ0CR1;     /**< Offset: 0x184 (R/W  32) ZQ Impedence Control Register 1 */
  __I   uint32_t                       DDR3PHY_ZQ0SR0;     /**< Offset: 0x188 (R/   32) ZQ Impedence Control Status Register 0 */
  __I   uint32_t                       DDR3PHY_ZQ0SR1;     /**< Offset: 0x18C (R/   32) ZQ Impedence Control Status Register 1 */
  __IO  uint32_t                       DDR3PHY_ZQ1CR0;     /**< Offset: 0x190 (R/W  32) ZQ Impedence Control Register 0 */
  __IO  uint32_t                       DDR3PHY_ZQ1CR1;     /**< Offset: 0x194 (R/W  32) ZQ Impedence Control Register 1 */
  __I   uint32_t                       DDR3PHY_ZQ1SR0;     /**< Offset: 0x198 (R/   32) ZQ Impedence Control Status Register 0 */
  __I   uint32_t                       DDR3PHY_ZQ1SR1;     /**< Offset: 0x19C (R/   32) ZQ Impedence Control Status Register 1 */
  __IO  uint32_t                       DDR3PHY_ZQ2CR0;     /**< Offset: 0x1A0 (R/W  32) ZQ Impedence Control Register 0 */
  __IO  uint32_t                       DDR3PHY_ZQ2CR1;     /**< Offset: 0x1A4 (R/W  32) ZQ Impedence Control Register 1 */
  __I   uint32_t                       DDR3PHY_ZQ2SR0;     /**< Offset: 0x1A8 (R/   32) ZQ Impedence Control Status Register 0 */
  __I   uint32_t                       DDR3PHY_ZQ2SR1;     /**< Offset: 0x1AC (R/   32) ZQ Impedence Control Status Register 1 */
  __IO  uint32_t                       DDR3PHY_ZQ3CR0;     /**< Offset: 0x1B0 (R/W  32) ZQ Impedence Control Register 0 */
  __IO  uint32_t                       DDR3PHY_ZQ3CR1;     /**< Offset: 0x1B4 (R/W  32) ZQ Impedence Control Register 1 */
  __I   uint32_t                       DDR3PHY_ZQ3SR0;     /**< Offset: 0x1B8 (R/   32) ZQ Impedence Control Status Register 0 */
  __I   uint32_t                       DDR3PHY_ZQ3SR1;     /**< Offset: 0x1BC (R/   32) ZQ Impedence Control Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX0GCR;     /**< Offset: 0x1C0 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX0GSR0;    /**< Offset: 0x1C4 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX0GSR1;    /**< Offset: 0x1C8 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX0DLLCR;   /**< Offset: 0x1CC (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX0DQTR;    /**< Offset: 0x1D0 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX0DQSTR;   /**< Offset: 0x1D4 (R/W  32) DATX8 DQS Timing Register */
  __IO  uint32_t                       DDR3PHY_DX0DQIDLY;  /**< Offset: 0x1D8 (R/W  32) DATX8 DQ  Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX0DQODLY;  /**< Offset: 0x1DC (R/W  32) DATX8 DQ  Output Delay */
  __IO  uint32_t                       DDR3PHY_DX0DQSIDLY; /**< Offset: 0x1E0 (R/W  32) DATX8 DQS Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX0DQSODLY; /**< Offset: 0x1E4 (R/W  32) DATX8 DQS Output Delay */
  __I   uint8_t                        Reserved4[0x18];
  __IO  uint32_t                       DDR3PHY_DX1GCR;     /**< Offset: 0x200 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX1GSR0;    /**< Offset: 0x204 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX1GSR1;    /**< Offset: 0x208 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX1DLLCR;   /**< Offset: 0x20C (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX1DQTR;    /**< Offset: 0x210 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX1DQSTR;   /**< Offset: 0x214 (R/W  32) DATX8 DQS Timing Register */
  __IO  uint32_t                       DDR3PHY_DX1DQIDLY;  /**< Offset: 0x218 (R/W  32) DATX8 DQ  Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX1DQODLY;  /**< Offset: 0x21C (R/W  32) DATX8 DQ  Output Delay */
  __IO  uint32_t                       DDR3PHY_DX1DQSIDLY; /**< Offset: 0x220 (R/W  32) DATX8 DQS Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX1DQSODLY; /**< Offset: 0x224 (R/W  32) DATX8 DQS Output Delay */
  __I   uint8_t                        Reserved5[0x18];
  __IO  uint32_t                       DDR3PHY_DX2GCR;     /**< Offset: 0x240 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX2GSR0;    /**< Offset: 0x244 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX2GSR1;    /**< Offset: 0x248 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX2DLLCR;   /**< Offset: 0x24C (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX2DQTR;    /**< Offset: 0x250 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX2DQSTR;   /**< Offset: 0x254 (R/W  32) DATX8 DQS Timing Register */
  __IO  uint32_t                       DDR3PHY_DX2DQIDLY;  /**< Offset: 0x258 (R/W  32) DATX8 DQ  Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX2DQODLY;  /**< Offset: 0x25C (R/W  32) DATX8 DQ  Output Delay */
  __IO  uint32_t                       DDR3PHY_DX2DQSIDLY; /**< Offset: 0x260 (R/W  32) DATX8 DQS Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX2DQSODLY; /**< Offset: 0x264 (R/W  32) DATX8 DQS Output Delay */
  __I   uint8_t                        Reserved6[0x18];
  __IO  uint32_t                       DDR3PHY_DX3GCR;     /**< Offset: 0x280 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX3GSR0;    /**< Offset: 0x284 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX3GSR1;    /**< Offset: 0x288 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX3DLLCR;   /**< Offset: 0x28C (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX3DQTR;    /**< Offset: 0x290 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX3DQSTR;   /**< Offset: 0x294 (R/W  32) DATX8 DQS Timing Register */
  __IO  uint32_t                       DDR3PHY_DX3DQIDLY;  /**< Offset: 0x298 (R/W  32) DATX8 DQ  Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX3DQODLY;  /**< Offset: 0x29C (R/W  32) DATX8 DQ  Output Delay */
  __IO  uint32_t                       DDR3PHY_DX3DQSIDLY; /**< Offset: 0x2A0 (R/W  32) DATX8 DQS Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX3DQSODLY; /**< Offset: 0x2A4 (R/W  32) DATX8 DQS Output Delay */
  __I   uint8_t                        Reserved7[0x18];
  __IO  uint32_t                       DDR3PHY_DX4GCR;     /**< Offset: 0x2C0 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX4GSR0;    /**< Offset: 0x2C4 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX4GSR1;    /**< Offset: 0x2C8 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX4DLLCR;   /**< Offset: 0x2CC (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX4DQTR;    /**< Offset: 0x2D0 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX4DQSTR;   /**< Offset: 0x2D4 (R/W  32) DATX8 DQS Timing Register */
  __IO  uint32_t                       DDR3PHY_DX4DQIDLY;  /**< Offset: 0x2D8 (R/W  32) DATX8 DQ  Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX4DQODLY;  /**< Offset: 0x2DC (R/W  32) DATX8 DQ  Output Delay */
  __IO  uint32_t                       DDR3PHY_DX4DQSIDLY; /**< Offset: 0x2E0 (R/W  32) DATX8 DQS Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX4DQSODLY; /**< Offset: 0x2E4 (R/W  32) DATX8 DQS Output Delay */
  __I   uint8_t                        Reserved8[0x18];
  __IO  uint32_t                       DDR3PHY_DX5GCR;     /**< Offset: 0x300 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX5GSR0;    /**< Offset: 0x304 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX5GSR1;    /**< Offset: 0x308 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX5DLLCR;   /**< Offset: 0x30C (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX5DQTR;    /**< Offset: 0x310 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX5DQSTR;   /**< Offset: 0x314 (R/W  32) DATX8 DQS Timing Register */
  __IO  uint32_t                       DDR3PHY_DX5DQIDLY;  /**< Offset: 0x318 (R/W  32) DATX8 DQ  Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX5DQODLY;  /**< Offset: 0x31C (R/W  32) DATX8 DQ  Output Delay */
  __IO  uint32_t                       DDR3PHY_DX5DQSIDLY; /**< Offset: 0x320 (R/W  32) DATX8 DQS Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX5DQSODLY; /**< Offset: 0x324 (R/W  32) DATX8 DQS Output Delay */
  __I   uint8_t                        Reserved9[0x18];
  __IO  uint32_t                       DDR3PHY_DX6GCR;     /**< Offset: 0x340 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX6GSR0;    /**< Offset: 0x344 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX6GSR1;    /**< Offset: 0x348 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX6DLLCR;   /**< Offset: 0x34C (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX6DQTR;    /**< Offset: 0x350 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX6DQSTR;   /**< Offset: 0x354 (R/W  32) DATX8 DQS Timing Register */
  __IO  uint32_t                       DDR3PHY_DX6DQIDLY;  /**< Offset: 0x358 (R/W  32) DATX8 DQ  Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX6DQODLY;  /**< Offset: 0x35C (R/W  32) DATX8 DQ  Output Delay */
  __IO  uint32_t                       DDR3PHY_DX6DQSIDLY; /**< Offset: 0x360 (R/W  32) DATX8 DQS Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX6DQSODLY; /**< Offset: 0x364 (R/W  32) DATX8 DQS Output Delay */
  __I   uint8_t                        Reserved10[0x18];
  __IO  uint32_t                       DDR3PHY_DX7GCR;     /**< Offset: 0x380 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX7GSR0;    /**< Offset: 0x384 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX7GSR1;    /**< Offset: 0x388 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX7DLLCR;   /**< Offset: 0x38C (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX7DQTR;    /**< Offset: 0x390 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX7DQSTR;   /**< Offset: 0x394 (R/W  32) DATX8 DQS Timing Register */
  __IO  uint32_t                       DDR3PHY_DX7DQIDLY;  /**< Offset: 0x398 (R/W  32) DATX8 DQ  Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX7DQODLY;  /**< Offset: 0x39C (R/W  32) DATX8 DQ  Output Delay */
  __IO  uint32_t                       DDR3PHY_DX7DQSIDLY; /**< Offset: 0x3A0 (R/W  32) DATX8 DQS Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX7DQSODLY; /**< Offset: 0x3A4 (R/W  32) DATX8 DQS Output Delay */
  __I   uint8_t                        Reserved11[0x18];
  __IO  uint32_t                       DDR3PHY_DX8GCR;     /**< Offset: 0x3C0 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX8GSR0;    /**< Offset: 0x3C4 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX8GSR1;    /**< Offset: 0x3C8 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX8DLLCR;   /**< Offset: 0x3CC (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX8DQTR;    /**< Offset: 0x3D0 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX8DQSTR;   /**< Offset: 0x3D4 (R/W  32) DATX8 DQS Timing Register */
  __IO  uint32_t                       DDR3PHY_DX8DQIDLY;  /**< Offset: 0x3D8 (R/W  32) DATX8 DQ  Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX8DQODLY;  /**< Offset: 0x3DC (R/W  32) DATX8 DQ  Output Delay */
  __IO  uint32_t                       DDR3PHY_DX8DQSIDLY; /**< Offset: 0x3E0 (R/W  32) DATX8 DQS Input  Delay */
  __IO  uint32_t                       DDR3PHY_DX8DQSODLY; /**< Offset: 0x3E4 (R/W  32) DATX8 DQS Output Delay */
} ddr3phy_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_DDR3PHY_COMPONENT_H_ */
