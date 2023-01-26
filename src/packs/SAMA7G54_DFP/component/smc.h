/*
 * Component description for SMC
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
#ifndef _SAMA7G_SMC_COMPONENT_H_
#define _SAMA7G_SMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SMC                                          */
/* ************************************************************************** */

/* -------- HSMC_SETUP : (SMC Offset: 0x00) (R/W 32) Setup Register  -------- */
#define HSMC_SETUP_RESETVALUE                 _U_(0x1010101)                                       /**<  (HSMC_SETUP) Setup Register   Reset Value */

#define HSMC_SETUP_NWE_SETUP_Pos              _U_(0)                                               /**< (HSMC_SETUP) NWE Setup Length Position */
#define HSMC_SETUP_NWE_SETUP_Msk              (_U_(0x3F) << HSMC_SETUP_NWE_SETUP_Pos)              /**< (HSMC_SETUP) NWE Setup Length Mask */
#define HSMC_SETUP_NWE_SETUP(value)           (HSMC_SETUP_NWE_SETUP_Msk & ((value) << HSMC_SETUP_NWE_SETUP_Pos))
#define HSMC_SETUP_NCS_WR_SETUP_Pos           _U_(8)                                               /**< (HSMC_SETUP) NCS Setup Length in Write Access Position */
#define HSMC_SETUP_NCS_WR_SETUP_Msk           (_U_(0x3F) << HSMC_SETUP_NCS_WR_SETUP_Pos)           /**< (HSMC_SETUP) NCS Setup Length in Write Access Mask */
#define HSMC_SETUP_NCS_WR_SETUP(value)        (HSMC_SETUP_NCS_WR_SETUP_Msk & ((value) << HSMC_SETUP_NCS_WR_SETUP_Pos))
#define HSMC_SETUP_NRD_SETUP_Pos              _U_(16)                                              /**< (HSMC_SETUP) NRD Setup Length Position */
#define HSMC_SETUP_NRD_SETUP_Msk              (_U_(0x3F) << HSMC_SETUP_NRD_SETUP_Pos)              /**< (HSMC_SETUP) NRD Setup Length Mask */
#define HSMC_SETUP_NRD_SETUP(value)           (HSMC_SETUP_NRD_SETUP_Msk & ((value) << HSMC_SETUP_NRD_SETUP_Pos))
#define HSMC_SETUP_NCS_RD_SETUP_Pos           _U_(24)                                              /**< (HSMC_SETUP) NCS Setup Length in Read Access Position */
#define HSMC_SETUP_NCS_RD_SETUP_Msk           (_U_(0x3F) << HSMC_SETUP_NCS_RD_SETUP_Pos)           /**< (HSMC_SETUP) NCS Setup Length in Read Access Mask */
#define HSMC_SETUP_NCS_RD_SETUP(value)        (HSMC_SETUP_NCS_RD_SETUP_Msk & ((value) << HSMC_SETUP_NCS_RD_SETUP_Pos))
#define HSMC_SETUP_Msk                        _U_(0x3F3F3F3F)                                      /**< (HSMC_SETUP) Register Mask  */


/* -------- HSMC_PULSE : (SMC Offset: 0x04) (R/W 32) Pulse Register  -------- */
#define HSMC_PULSE_RESETVALUE                 _U_(0x1010101)                                       /**<  (HSMC_PULSE) Pulse Register   Reset Value */

#define HSMC_PULSE_NWE_PULSE_Pos              _U_(0)                                               /**< (HSMC_PULSE) NWE Pulse Length Position */
#define HSMC_PULSE_NWE_PULSE_Msk              (_U_(0x7F) << HSMC_PULSE_NWE_PULSE_Pos)              /**< (HSMC_PULSE) NWE Pulse Length Mask */
#define HSMC_PULSE_NWE_PULSE(value)           (HSMC_PULSE_NWE_PULSE_Msk & ((value) << HSMC_PULSE_NWE_PULSE_Pos))
#define HSMC_PULSE_NCS_WR_PULSE_Pos           _U_(8)                                               /**< (HSMC_PULSE) NCS Pulse Length in WRITE Access Position */
#define HSMC_PULSE_NCS_WR_PULSE_Msk           (_U_(0x7F) << HSMC_PULSE_NCS_WR_PULSE_Pos)           /**< (HSMC_PULSE) NCS Pulse Length in WRITE Access Mask */
#define HSMC_PULSE_NCS_WR_PULSE(value)        (HSMC_PULSE_NCS_WR_PULSE_Msk & ((value) << HSMC_PULSE_NCS_WR_PULSE_Pos))
#define HSMC_PULSE_NRD_PULSE_Pos              _U_(16)                                              /**< (HSMC_PULSE) NRD Pulse Length Position */
#define HSMC_PULSE_NRD_PULSE_Msk              (_U_(0x7F) << HSMC_PULSE_NRD_PULSE_Pos)              /**< (HSMC_PULSE) NRD Pulse Length Mask */
#define HSMC_PULSE_NRD_PULSE(value)           (HSMC_PULSE_NRD_PULSE_Msk & ((value) << HSMC_PULSE_NRD_PULSE_Pos))
#define HSMC_PULSE_NCS_RD_PULSE_Pos           _U_(24)                                              /**< (HSMC_PULSE) NCS Pulse Length in READ Access Position */
#define HSMC_PULSE_NCS_RD_PULSE_Msk           (_U_(0x7F) << HSMC_PULSE_NCS_RD_PULSE_Pos)           /**< (HSMC_PULSE) NCS Pulse Length in READ Access Mask */
#define HSMC_PULSE_NCS_RD_PULSE(value)        (HSMC_PULSE_NCS_RD_PULSE_Msk & ((value) << HSMC_PULSE_NCS_RD_PULSE_Pos))
#define HSMC_PULSE_Msk                        _U_(0x7F7F7F7F)                                      /**< (HSMC_PULSE) Register Mask  */


/* -------- HSMC_CYCLE : (SMC Offset: 0x08) (R/W 32) Cycle Register  -------- */
#define HSMC_CYCLE_RESETVALUE                 _U_(0x30003)                                         /**<  (HSMC_CYCLE) Cycle Register   Reset Value */

#define HSMC_CYCLE_NWE_CYCLE_Pos              _U_(0)                                               /**< (HSMC_CYCLE) Total Write Cycle Length Position */
#define HSMC_CYCLE_NWE_CYCLE_Msk              (_U_(0x1FF) << HSMC_CYCLE_NWE_CYCLE_Pos)             /**< (HSMC_CYCLE) Total Write Cycle Length Mask */
#define HSMC_CYCLE_NWE_CYCLE(value)           (HSMC_CYCLE_NWE_CYCLE_Msk & ((value) << HSMC_CYCLE_NWE_CYCLE_Pos))
#define HSMC_CYCLE_NRD_CYCLE_Pos              _U_(16)                                              /**< (HSMC_CYCLE) Total Read Cycle Length Position */
#define HSMC_CYCLE_NRD_CYCLE_Msk              (_U_(0x1FF) << HSMC_CYCLE_NRD_CYCLE_Pos)             /**< (HSMC_CYCLE) Total Read Cycle Length Mask */
#define HSMC_CYCLE_NRD_CYCLE(value)           (HSMC_CYCLE_NRD_CYCLE_Msk & ((value) << HSMC_CYCLE_NRD_CYCLE_Pos))
#define HSMC_CYCLE_Msk                        _U_(0x01FF01FF)                                      /**< (HSMC_CYCLE) Register Mask  */


/* -------- HSMC_TIMINGS : (SMC Offset: 0x0C) (R/W 32) Timings Register  -------- */
#define HSMC_TIMINGS_RESETVALUE               _U_(0x1003)                                          /**<  (HSMC_TIMINGS) Timings Register   Reset Value */

#define HSMC_TIMINGS_TCLR_Pos                 _U_(0)                                               /**< (HSMC_TIMINGS) CLE to REN Low Delay Position */
#define HSMC_TIMINGS_TCLR_Msk                 (_U_(0xF) << HSMC_TIMINGS_TCLR_Pos)                  /**< (HSMC_TIMINGS) CLE to REN Low Delay Mask */
#define HSMC_TIMINGS_TCLR(value)              (HSMC_TIMINGS_TCLR_Msk & ((value) << HSMC_TIMINGS_TCLR_Pos))
#define HSMC_TIMINGS_TADL_Pos                 _U_(4)                                               /**< (HSMC_TIMINGS) ALE to Data Start Position */
#define HSMC_TIMINGS_TADL_Msk                 (_U_(0xF) << HSMC_TIMINGS_TADL_Pos)                  /**< (HSMC_TIMINGS) ALE to Data Start Mask */
#define HSMC_TIMINGS_TADL(value)              (HSMC_TIMINGS_TADL_Msk & ((value) << HSMC_TIMINGS_TADL_Pos))
#define HSMC_TIMINGS_TAR_Pos                  _U_(8)                                               /**< (HSMC_TIMINGS) ALE to REN Low Delay Position */
#define HSMC_TIMINGS_TAR_Msk                  (_U_(0xF) << HSMC_TIMINGS_TAR_Pos)                   /**< (HSMC_TIMINGS) ALE to REN Low Delay Mask */
#define HSMC_TIMINGS_TAR(value)               (HSMC_TIMINGS_TAR_Msk & ((value) << HSMC_TIMINGS_TAR_Pos))
#define HSMC_TIMINGS_OCMS_Pos                 _U_(12)                                              /**< (HSMC_TIMINGS) Off Chip Memory Scrambling Enable Position */
#define HSMC_TIMINGS_OCMS_Msk                 (_U_(0x1) << HSMC_TIMINGS_OCMS_Pos)                  /**< (HSMC_TIMINGS) Off Chip Memory Scrambling Enable Mask */
#define HSMC_TIMINGS_OCMS(value)              (HSMC_TIMINGS_OCMS_Msk & ((value) << HSMC_TIMINGS_OCMS_Pos))
#define HSMC_TIMINGS_TRR_Pos                  _U_(16)                                              /**< (HSMC_TIMINGS) Ready to REN Low Delay Position */
#define HSMC_TIMINGS_TRR_Msk                  (_U_(0xF) << HSMC_TIMINGS_TRR_Pos)                   /**< (HSMC_TIMINGS) Ready to REN Low Delay Mask */
#define HSMC_TIMINGS_TRR(value)               (HSMC_TIMINGS_TRR_Msk & ((value) << HSMC_TIMINGS_TRR_Pos))
#define HSMC_TIMINGS_TWB_Pos                  _U_(24)                                              /**< (HSMC_TIMINGS) WEN High to REN to Busy Position */
#define HSMC_TIMINGS_TWB_Msk                  (_U_(0xF) << HSMC_TIMINGS_TWB_Pos)                   /**< (HSMC_TIMINGS) WEN High to REN to Busy Mask */
#define HSMC_TIMINGS_TWB(value)               (HSMC_TIMINGS_TWB_Msk & ((value) << HSMC_TIMINGS_TWB_Pos))
#define HSMC_TIMINGS_NFSEL_Pos                _U_(31)                                              /**< (HSMC_TIMINGS) NAND Flash Selection Position */
#define HSMC_TIMINGS_NFSEL_Msk                (_U_(0x1) << HSMC_TIMINGS_NFSEL_Pos)                 /**< (HSMC_TIMINGS) NAND Flash Selection Mask */
#define HSMC_TIMINGS_NFSEL(value)             (HSMC_TIMINGS_NFSEL_Msk & ((value) << HSMC_TIMINGS_NFSEL_Pos))
#define HSMC_TIMINGS_Msk                      _U_(0x8F0F1FFF)                                      /**< (HSMC_TIMINGS) Register Mask  */


/* -------- HSMC_MODE : (SMC Offset: 0x10) (R/W 32) Mode Register  -------- */
#define HSMC_MODE_RESETVALUE                  _U_(0x00)                                            /**<  (HSMC_MODE) Mode Register   Reset Value */

#define HSMC_MODE_READ_MODE_Pos               _U_(0)                                               /**< (HSMC_MODE) Selection of the Control Signal for Read Operation Position */
#define HSMC_MODE_READ_MODE_Msk               (_U_(0x1) << HSMC_MODE_READ_MODE_Pos)                /**< (HSMC_MODE) Selection of the Control Signal for Read Operation Mask */
#define HSMC_MODE_READ_MODE(value)            (HSMC_MODE_READ_MODE_Msk & ((value) << HSMC_MODE_READ_MODE_Pos))
#define   HSMC_MODE_READ_MODE_NCS_CTRL_Val    _U_(0x0)                                             /**< (HSMC_MODE) The Read operation is controlled by the NCS signal.  */
#define   HSMC_MODE_READ_MODE_NRD_CTRL_Val    _U_(0x1)                                             /**< (HSMC_MODE) The Read operation is controlled by the NRD signal.  */
#define HSMC_MODE_READ_MODE_NCS_CTRL          (HSMC_MODE_READ_MODE_NCS_CTRL_Val << HSMC_MODE_READ_MODE_Pos) /**< (HSMC_MODE) The Read operation is controlled by the NCS signal. Position  */
#define HSMC_MODE_READ_MODE_NRD_CTRL          (HSMC_MODE_READ_MODE_NRD_CTRL_Val << HSMC_MODE_READ_MODE_Pos) /**< (HSMC_MODE) The Read operation is controlled by the NRD signal. Position  */
#define HSMC_MODE_WRITE_MODE_Pos              _U_(1)                                               /**< (HSMC_MODE) Selection of the Control Signal for Write Operation Position */
#define HSMC_MODE_WRITE_MODE_Msk              (_U_(0x1) << HSMC_MODE_WRITE_MODE_Pos)               /**< (HSMC_MODE) Selection of the Control Signal for Write Operation Mask */
#define HSMC_MODE_WRITE_MODE(value)           (HSMC_MODE_WRITE_MODE_Msk & ((value) << HSMC_MODE_WRITE_MODE_Pos))
#define   HSMC_MODE_WRITE_MODE_NCS_CTRL_Val   _U_(0x0)                                             /**< (HSMC_MODE) The Write operation is controller by the NCS signal.  */
#define   HSMC_MODE_WRITE_MODE_NWE_CTRL_Val   _U_(0x1)                                             /**< (HSMC_MODE) The Write operation is controlled by the NWE signal  */
#define HSMC_MODE_WRITE_MODE_NCS_CTRL         (HSMC_MODE_WRITE_MODE_NCS_CTRL_Val << HSMC_MODE_WRITE_MODE_Pos) /**< (HSMC_MODE) The Write operation is controller by the NCS signal. Position  */
#define HSMC_MODE_WRITE_MODE_NWE_CTRL         (HSMC_MODE_WRITE_MODE_NWE_CTRL_Val << HSMC_MODE_WRITE_MODE_Pos) /**< (HSMC_MODE) The Write operation is controlled by the NWE signal Position  */
#define HSMC_MODE_EXNW_MODE_Pos               _U_(4)                                               /**< (HSMC_MODE) NWAIT Mode Position */
#define HSMC_MODE_EXNW_MODE_Msk               (_U_(0x3) << HSMC_MODE_EXNW_MODE_Pos)                /**< (HSMC_MODE) NWAIT Mode Mask */
#define HSMC_MODE_EXNW_MODE(value)            (HSMC_MODE_EXNW_MODE_Msk & ((value) << HSMC_MODE_EXNW_MODE_Pos))
#define   HSMC_MODE_EXNW_MODE_DISABLED_Val    _U_(0x0)                                             /**< (HSMC_MODE) Disabled-The NWAIT input signal is ignored on the corresponding Chip Select.  */
#define   HSMC_MODE_EXNW_MODE_FROZEN_Val      _U_(0x2)                                             /**< (HSMC_MODE) Frozen Mode-If asserted, the NWAIT signal freezes the current read or write cycle. After deassertion, the read/write cycle is resumed from the point where it was stopped.  */
#define   HSMC_MODE_EXNW_MODE_READY_Val       _U_(0x3)                                             /**< (HSMC_MODE) Ready Mode-The NWAIT signal indicates the availability of the external device at the end of the pulse of the controlling read or write signal, to complete the access. If high, the access normally completes. If low, the access is extended until NWAIT returns high.  */
#define HSMC_MODE_EXNW_MODE_DISABLED          (HSMC_MODE_EXNW_MODE_DISABLED_Val << HSMC_MODE_EXNW_MODE_Pos) /**< (HSMC_MODE) Disabled-The NWAIT input signal is ignored on the corresponding Chip Select. Position  */
#define HSMC_MODE_EXNW_MODE_FROZEN            (HSMC_MODE_EXNW_MODE_FROZEN_Val << HSMC_MODE_EXNW_MODE_Pos) /**< (HSMC_MODE) Frozen Mode-If asserted, the NWAIT signal freezes the current read or write cycle. After deassertion, the read/write cycle is resumed from the point where it was stopped. Position  */
#define HSMC_MODE_EXNW_MODE_READY             (HSMC_MODE_EXNW_MODE_READY_Val << HSMC_MODE_EXNW_MODE_Pos) /**< (HSMC_MODE) Ready Mode-The NWAIT signal indicates the availability of the external device at the end of the pulse of the controlling read or write signal, to complete the access. If high, the access normally completes. If low, the access is extended until NWAIT returns high. Position  */
#define HSMC_MODE_BAT_Pos                     _U_(8)                                               /**< (HSMC_MODE) Byte Access Type Position */
#define HSMC_MODE_BAT_Msk                     (_U_(0x1) << HSMC_MODE_BAT_Pos)                      /**< (HSMC_MODE) Byte Access Type Mask */
#define HSMC_MODE_BAT(value)                  (HSMC_MODE_BAT_Msk & ((value) << HSMC_MODE_BAT_Pos))
#define   HSMC_MODE_BAT_BYTE_SELECT_Val       _U_(0x0)                                             /**< (HSMC_MODE) Byte select access type: - Write operation is controlled using NCS, NWE, NBS0, NBS1. - Read operation is controlled using NCS, NRD, NBS0, NBS1.  */
#define   HSMC_MODE_BAT_BYTE_WRITE_Val        _U_(0x1)                                             /**< (HSMC_MODE) Byte write access type: - Write operation is controlled using NCS, NWR0, NWR1.  - Read operation is controlled using NCS and NRD.  */
#define HSMC_MODE_BAT_BYTE_SELECT             (HSMC_MODE_BAT_BYTE_SELECT_Val << HSMC_MODE_BAT_Pos) /**< (HSMC_MODE) Byte select access type: - Write operation is controlled using NCS, NWE, NBS0, NBS1. - Read operation is controlled using NCS, NRD, NBS0, NBS1. Position  */
#define HSMC_MODE_BAT_BYTE_WRITE              (HSMC_MODE_BAT_BYTE_WRITE_Val << HSMC_MODE_BAT_Pos)  /**< (HSMC_MODE) Byte write access type: - Write operation is controlled using NCS, NWR0, NWR1.  - Read operation is controlled using NCS and NRD. Position  */
#define HSMC_MODE_DBW_Pos                     _U_(12)                                              /**< (HSMC_MODE) Data Bus Width Position */
#define HSMC_MODE_DBW_Msk                     (_U_(0x1) << HSMC_MODE_DBW_Pos)                      /**< (HSMC_MODE) Data Bus Width Mask */
#define HSMC_MODE_DBW(value)                  (HSMC_MODE_DBW_Msk & ((value) << HSMC_MODE_DBW_Pos))
#define   HSMC_MODE_DBW_BIT_8_Val             _U_(0x0)                                             /**< (HSMC_MODE) 8-bit bus  */
#define   HSMC_MODE_DBW_BIT_16_Val            _U_(0x1)                                             /**< (HSMC_MODE) 16-bit bus  */
#define HSMC_MODE_DBW_BIT_8                   (HSMC_MODE_DBW_BIT_8_Val << HSMC_MODE_DBW_Pos)       /**< (HSMC_MODE) 8-bit bus Position  */
#define HSMC_MODE_DBW_BIT_16                  (HSMC_MODE_DBW_BIT_16_Val << HSMC_MODE_DBW_Pos)      /**< (HSMC_MODE) 16-bit bus Position  */
#define HSMC_MODE_TDF_CYCLES_Pos              _U_(16)                                              /**< (HSMC_MODE) Data Float Time Position */
#define HSMC_MODE_TDF_CYCLES_Msk              (_U_(0xF) << HSMC_MODE_TDF_CYCLES_Pos)               /**< (HSMC_MODE) Data Float Time Mask */
#define HSMC_MODE_TDF_CYCLES(value)           (HSMC_MODE_TDF_CYCLES_Msk & ((value) << HSMC_MODE_TDF_CYCLES_Pos))
#define HSMC_MODE_TDF_MODE_Pos                _U_(20)                                              /**< (HSMC_MODE) TDF Optimization Position */
#define HSMC_MODE_TDF_MODE_Msk                (_U_(0x1) << HSMC_MODE_TDF_MODE_Pos)                 /**< (HSMC_MODE) TDF Optimization Mask */
#define HSMC_MODE_TDF_MODE(value)             (HSMC_MODE_TDF_MODE_Msk & ((value) << HSMC_MODE_TDF_MODE_Pos))
#define   HSMC_MODE_TDF_MODE_0_Val            _U_(0x0)                                             /**< (HSMC_MODE) TDF optimization disabled  */
#define   HSMC_MODE_TDF_MODE_1_Val            _U_(0x1)                                             /**< (HSMC_MODE) TDF optimization enabled  */
#define HSMC_MODE_TDF_MODE_0                  (HSMC_MODE_TDF_MODE_0_Val << HSMC_MODE_TDF_MODE_Pos) /**< (HSMC_MODE) TDF optimization disabled Position  */
#define HSMC_MODE_TDF_MODE_1                  (HSMC_MODE_TDF_MODE_1_Val << HSMC_MODE_TDF_MODE_Pos) /**< (HSMC_MODE) TDF optimization enabled Position  */
#define HSMC_MODE_Msk                         _U_(0x001F1133)                                      /**< (HSMC_MODE) Register Mask  */


/* -------- HSMC_PMECC : (SMC Offset: 0x00) ( R/ 32) PMECC Redundancy x Register  -------- */
#define HSMC_PMECC_RESETVALUE                 _U_(0x00)                                            /**<  (HSMC_PMECC) PMECC Redundancy x Register   Reset Value */

#define HSMC_PMECC_ECC_Pos                    _U_(0)                                               /**< (HSMC_PMECC) BCH Redundancy Position */
#define HSMC_PMECC_ECC_Msk                    (_U_(0xFFFFFFFF) << HSMC_PMECC_ECC_Pos)              /**< (HSMC_PMECC) BCH Redundancy Mask */
#define HSMC_PMECC_ECC(value)                 (HSMC_PMECC_ECC_Msk & ((value) << HSMC_PMECC_ECC_Pos))
#define HSMC_PMECC_Msk                        _U_(0xFFFFFFFF)                                      /**< (HSMC_PMECC) Register Mask  */


/* -------- HSMC_REM : (SMC Offset: 0x00) ( R/ 32) PMECC Remainder x Register  -------- */
#define HSMC_REM_RESETVALUE                   _U_(0x00)                                            /**<  (HSMC_REM) PMECC Remainder x Register   Reset Value */

#define HSMC_REM_REM2NP1_Pos                  _U_(0)                                               /**< (HSMC_REM) BCH Remainder 2 * N + 1 Position */
#define HSMC_REM_REM2NP1_Msk                  (_U_(0x3FFF) << HSMC_REM_REM2NP1_Pos)                /**< (HSMC_REM) BCH Remainder 2 * N + 1 Mask */
#define HSMC_REM_REM2NP1(value)               (HSMC_REM_REM2NP1_Msk & ((value) << HSMC_REM_REM2NP1_Pos))
#define HSMC_REM_REM2NP3_Pos                  _U_(16)                                              /**< (HSMC_REM) BCH Remainder 2 * N + 3 Position */
#define HSMC_REM_REM2NP3_Msk                  (_U_(0x3FFF) << HSMC_REM_REM2NP3_Pos)                /**< (HSMC_REM) BCH Remainder 2 * N + 3 Mask */
#define HSMC_REM_REM2NP3(value)               (HSMC_REM_REM2NP3_Msk & ((value) << HSMC_REM_REM2NP3_Pos))
#define HSMC_REM_Msk                          _U_(0x3FFF3FFF)                                      /**< (HSMC_REM) Register Mask  */


/* -------- HSMC_CFG : (SMC Offset: 0x00) (R/W 32) NFC Configuration Register -------- */
#define HSMC_CFG_RESETVALUE                   _U_(0x00)                                            /**<  (HSMC_CFG) NFC Configuration Register  Reset Value */

#define HSMC_CFG_PAGESIZE_Pos                 _U_(0)                                               /**< (HSMC_CFG) Page Size of the NAND Flash Device Position */
#define HSMC_CFG_PAGESIZE_Msk                 (_U_(0x7) << HSMC_CFG_PAGESIZE_Pos)                  /**< (HSMC_CFG) Page Size of the NAND Flash Device Mask */
#define HSMC_CFG_PAGESIZE(value)              (HSMC_CFG_PAGESIZE_Msk & ((value) << HSMC_CFG_PAGESIZE_Pos))
#define   HSMC_CFG_PAGESIZE_PS512_Val         _U_(0x0)                                             /**< (HSMC_CFG) Main area 512 bytes  */
#define   HSMC_CFG_PAGESIZE_PS1024_Val        _U_(0x1)                                             /**< (HSMC_CFG) Main area 1024 bytes  */
#define   HSMC_CFG_PAGESIZE_PS2048_Val        _U_(0x2)                                             /**< (HSMC_CFG) Main area 2048 bytes  */
#define   HSMC_CFG_PAGESIZE_PS4096_Val        _U_(0x3)                                             /**< (HSMC_CFG) Main area 4096 bytes  */
#define   HSMC_CFG_PAGESIZE_PS8192_Val        _U_(0x4)                                             /**< (HSMC_CFG) Main area 8192 bytes  */
#define HSMC_CFG_PAGESIZE_PS512               (HSMC_CFG_PAGESIZE_PS512_Val << HSMC_CFG_PAGESIZE_Pos) /**< (HSMC_CFG) Main area 512 bytes Position  */
#define HSMC_CFG_PAGESIZE_PS1024              (HSMC_CFG_PAGESIZE_PS1024_Val << HSMC_CFG_PAGESIZE_Pos) /**< (HSMC_CFG) Main area 1024 bytes Position  */
#define HSMC_CFG_PAGESIZE_PS2048              (HSMC_CFG_PAGESIZE_PS2048_Val << HSMC_CFG_PAGESIZE_Pos) /**< (HSMC_CFG) Main area 2048 bytes Position  */
#define HSMC_CFG_PAGESIZE_PS4096              (HSMC_CFG_PAGESIZE_PS4096_Val << HSMC_CFG_PAGESIZE_Pos) /**< (HSMC_CFG) Main area 4096 bytes Position  */
#define HSMC_CFG_PAGESIZE_PS8192              (HSMC_CFG_PAGESIZE_PS8192_Val << HSMC_CFG_PAGESIZE_Pos) /**< (HSMC_CFG) Main area 8192 bytes Position  */
#define HSMC_CFG_WSPARE_Pos                   _U_(8)                                               /**< (HSMC_CFG) Write Spare Area Position */
#define HSMC_CFG_WSPARE_Msk                   (_U_(0x1) << HSMC_CFG_WSPARE_Pos)                    /**< (HSMC_CFG) Write Spare Area Mask */
#define HSMC_CFG_WSPARE(value)                (HSMC_CFG_WSPARE_Msk & ((value) << HSMC_CFG_WSPARE_Pos))
#define   HSMC_CFG_WSPARE_0_Val               _U_(0x0)                                             /**< (HSMC_CFG) The NFC skips the spare area in Write mode.  */
#define   HSMC_CFG_WSPARE_1_Val               _U_(0x1)                                             /**< (HSMC_CFG) The NFC writes both main area and spare area in Write mode.  */
#define HSMC_CFG_WSPARE_0                     (HSMC_CFG_WSPARE_0_Val << HSMC_CFG_WSPARE_Pos)       /**< (HSMC_CFG) The NFC skips the spare area in Write mode. Position  */
#define HSMC_CFG_WSPARE_1                     (HSMC_CFG_WSPARE_1_Val << HSMC_CFG_WSPARE_Pos)       /**< (HSMC_CFG) The NFC writes both main area and spare area in Write mode. Position  */
#define HSMC_CFG_RSPARE_Pos                   _U_(9)                                               /**< (HSMC_CFG) Read Spare Area Position */
#define HSMC_CFG_RSPARE_Msk                   (_U_(0x1) << HSMC_CFG_RSPARE_Pos)                    /**< (HSMC_CFG) Read Spare Area Mask */
#define HSMC_CFG_RSPARE(value)                (HSMC_CFG_RSPARE_Msk & ((value) << HSMC_CFG_RSPARE_Pos))
#define   HSMC_CFG_RSPARE_0_Val               _U_(0x0)                                             /**< (HSMC_CFG) The NFC skips the spare area in Read mode.  */
#define   HSMC_CFG_RSPARE_1_Val               _U_(0x1)                                             /**< (HSMC_CFG) The NFC reads both main area and spare area in Read mode.  */
#define HSMC_CFG_RSPARE_0                     (HSMC_CFG_RSPARE_0_Val << HSMC_CFG_RSPARE_Pos)       /**< (HSMC_CFG) The NFC skips the spare area in Read mode. Position  */
#define HSMC_CFG_RSPARE_1                     (HSMC_CFG_RSPARE_1_Val << HSMC_CFG_RSPARE_Pos)       /**< (HSMC_CFG) The NFC reads both main area and spare area in Read mode. Position  */
#define HSMC_CFG_EDGECTRL_Pos                 _U_(12)                                              /**< (HSMC_CFG) Rising/Falling Edge Detection Control Position */
#define HSMC_CFG_EDGECTRL_Msk                 (_U_(0x1) << HSMC_CFG_EDGECTRL_Pos)                  /**< (HSMC_CFG) Rising/Falling Edge Detection Control Mask */
#define HSMC_CFG_EDGECTRL(value)              (HSMC_CFG_EDGECTRL_Msk & ((value) << HSMC_CFG_EDGECTRL_Pos))
#define   HSMC_CFG_EDGECTRL_0_Val             _U_(0x0)                                             /**< (HSMC_CFG) Rising edge is detected  */
#define   HSMC_CFG_EDGECTRL_1_Val             _U_(0x1)                                             /**< (HSMC_CFG) Falling edge is detected  */
#define HSMC_CFG_EDGECTRL_0                   (HSMC_CFG_EDGECTRL_0_Val << HSMC_CFG_EDGECTRL_Pos)   /**< (HSMC_CFG) Rising edge is detected Position  */
#define HSMC_CFG_EDGECTRL_1                   (HSMC_CFG_EDGECTRL_1_Val << HSMC_CFG_EDGECTRL_Pos)   /**< (HSMC_CFG) Falling edge is detected Position  */
#define HSMC_CFG_RBEDGE_Pos                   _U_(13)                                              /**< (HSMC_CFG) Ready/Busy Signal Edge Detection Position */
#define HSMC_CFG_RBEDGE_Msk                   (_U_(0x1) << HSMC_CFG_RBEDGE_Pos)                    /**< (HSMC_CFG) Ready/Busy Signal Edge Detection Mask */
#define HSMC_CFG_RBEDGE(value)                (HSMC_CFG_RBEDGE_Msk & ((value) << HSMC_CFG_RBEDGE_Pos))
#define   HSMC_CFG_RBEDGE_0_Val               _U_(0x0)                                             /**< (HSMC_CFG) RBEDGE indicates the level of the Ready/Busy line.  */
#define   HSMC_CFG_RBEDGE_1_Val               _U_(0x1)                                             /**< (HSMC_CFG) RBEDGE indicates a transition has occurred on the on Ready/Busy lines.  */
#define HSMC_CFG_RBEDGE_0                     (HSMC_CFG_RBEDGE_0_Val << HSMC_CFG_RBEDGE_Pos)       /**< (HSMC_CFG) RBEDGE indicates the level of the Ready/Busy line. Position  */
#define HSMC_CFG_RBEDGE_1                     (HSMC_CFG_RBEDGE_1_Val << HSMC_CFG_RBEDGE_Pos)       /**< (HSMC_CFG) RBEDGE indicates a transition has occurred on the on Ready/Busy lines. Position  */
#define HSMC_CFG_DTOCYC_Pos                   _U_(16)                                              /**< (HSMC_CFG) Data Timeout Cycle Number Position */
#define HSMC_CFG_DTOCYC_Msk                   (_U_(0xF) << HSMC_CFG_DTOCYC_Pos)                    /**< (HSMC_CFG) Data Timeout Cycle Number Mask */
#define HSMC_CFG_DTOCYC(value)                (HSMC_CFG_DTOCYC_Msk & ((value) << HSMC_CFG_DTOCYC_Pos))
#define HSMC_CFG_DTOMUL_Pos                   _U_(20)                                              /**< (HSMC_CFG) Data Timeout Multiplier Position */
#define HSMC_CFG_DTOMUL_Msk                   (_U_(0x7) << HSMC_CFG_DTOMUL_Pos)                    /**< (HSMC_CFG) Data Timeout Multiplier Mask */
#define HSMC_CFG_DTOMUL(value)                (HSMC_CFG_DTOMUL_Msk & ((value) << HSMC_CFG_DTOMUL_Pos))
#define   HSMC_CFG_DTOMUL_X1_Val              _U_(0x0)                                             /**< (HSMC_CFG) DTOCYC  */
#define   HSMC_CFG_DTOMUL_X16_Val             _U_(0x1)                                             /**< (HSMC_CFG) DTOCYC x 16  */
#define   HSMC_CFG_DTOMUL_X128_Val            _U_(0x2)                                             /**< (HSMC_CFG) DTOCYC x 128  */
#define   HSMC_CFG_DTOMUL_X256_Val            _U_(0x3)                                             /**< (HSMC_CFG) DTOCYC x 256  */
#define   HSMC_CFG_DTOMUL_X1024_Val           _U_(0x4)                                             /**< (HSMC_CFG) DTOCYC x 1024  */
#define   HSMC_CFG_DTOMUL_X4096_Val           _U_(0x5)                                             /**< (HSMC_CFG) DTOCYC x 4096  */
#define   HSMC_CFG_DTOMUL_X65536_Val          _U_(0x6)                                             /**< (HSMC_CFG) DTOCYC x 65536  */
#define   HSMC_CFG_DTOMUL_X1048576_Val        _U_(0x7)                                             /**< (HSMC_CFG) DTOCYC x 1048576  */
#define HSMC_CFG_DTOMUL_X1                    (HSMC_CFG_DTOMUL_X1_Val << HSMC_CFG_DTOMUL_Pos)      /**< (HSMC_CFG) DTOCYC Position  */
#define HSMC_CFG_DTOMUL_X16                   (HSMC_CFG_DTOMUL_X16_Val << HSMC_CFG_DTOMUL_Pos)     /**< (HSMC_CFG) DTOCYC x 16 Position  */
#define HSMC_CFG_DTOMUL_X128                  (HSMC_CFG_DTOMUL_X128_Val << HSMC_CFG_DTOMUL_Pos)    /**< (HSMC_CFG) DTOCYC x 128 Position  */
#define HSMC_CFG_DTOMUL_X256                  (HSMC_CFG_DTOMUL_X256_Val << HSMC_CFG_DTOMUL_Pos)    /**< (HSMC_CFG) DTOCYC x 256 Position  */
#define HSMC_CFG_DTOMUL_X1024                 (HSMC_CFG_DTOMUL_X1024_Val << HSMC_CFG_DTOMUL_Pos)   /**< (HSMC_CFG) DTOCYC x 1024 Position  */
#define HSMC_CFG_DTOMUL_X4096                 (HSMC_CFG_DTOMUL_X4096_Val << HSMC_CFG_DTOMUL_Pos)   /**< (HSMC_CFG) DTOCYC x 4096 Position  */
#define HSMC_CFG_DTOMUL_X65536                (HSMC_CFG_DTOMUL_X65536_Val << HSMC_CFG_DTOMUL_Pos)  /**< (HSMC_CFG) DTOCYC x 65536 Position  */
#define HSMC_CFG_DTOMUL_X1048576              (HSMC_CFG_DTOMUL_X1048576_Val << HSMC_CFG_DTOMUL_Pos) /**< (HSMC_CFG) DTOCYC x 1048576 Position  */
#define HSMC_CFG_NFCSPARESIZE_Pos             _U_(24)                                              /**< (HSMC_CFG) NAND Flash Spare Area Size Retrieved by the Host Controller Position */
#define HSMC_CFG_NFCSPARESIZE_Msk             (_U_(0x7F) << HSMC_CFG_NFCSPARESIZE_Pos)             /**< (HSMC_CFG) NAND Flash Spare Area Size Retrieved by the Host Controller Mask */
#define HSMC_CFG_NFCSPARESIZE(value)          (HSMC_CFG_NFCSPARESIZE_Msk & ((value) << HSMC_CFG_NFCSPARESIZE_Pos))
#define HSMC_CFG_Msk                          _U_(0x7F7F3307)                                      /**< (HSMC_CFG) Register Mask  */


/* -------- HSMC_CTRL : (SMC Offset: 0x04) ( /W 32) NFC Control Register -------- */
#define HSMC_CTRL_NFCEN_Pos                   _U_(0)                                               /**< (HSMC_CTRL) NAND Flash Controller Enable Position */
#define HSMC_CTRL_NFCEN_Msk                   (_U_(0x1) << HSMC_CTRL_NFCEN_Pos)                    /**< (HSMC_CTRL) NAND Flash Controller Enable Mask */
#define HSMC_CTRL_NFCEN(value)                (HSMC_CTRL_NFCEN_Msk & ((value) << HSMC_CTRL_NFCEN_Pos))
#define   HSMC_CTRL_NFCEN_0_Val               _U_(0x0)                                             /**< (HSMC_CTRL) No effect  */
#define   HSMC_CTRL_NFCEN_1_Val               _U_(0x1)                                             /**< (HSMC_CTRL) Enable the NAND Flash controller.  */
#define HSMC_CTRL_NFCEN_0                     (HSMC_CTRL_NFCEN_0_Val << HSMC_CTRL_NFCEN_Pos)       /**< (HSMC_CTRL) No effect Position  */
#define HSMC_CTRL_NFCEN_1                     (HSMC_CTRL_NFCEN_1_Val << HSMC_CTRL_NFCEN_Pos)       /**< (HSMC_CTRL) Enable the NAND Flash controller. Position  */
#define HSMC_CTRL_NFCDIS_Pos                  _U_(1)                                               /**< (HSMC_CTRL) NAND Flash Controller Disable Position */
#define HSMC_CTRL_NFCDIS_Msk                  (_U_(0x1) << HSMC_CTRL_NFCDIS_Pos)                   /**< (HSMC_CTRL) NAND Flash Controller Disable Mask */
#define HSMC_CTRL_NFCDIS(value)               (HSMC_CTRL_NFCDIS_Msk & ((value) << HSMC_CTRL_NFCDIS_Pos))
#define   HSMC_CTRL_NFCDIS_0_Val              _U_(0x0)                                             /**< (HSMC_CTRL) No effect  */
#define   HSMC_CTRL_NFCDIS_1_Val              _U_(0x1)                                             /**< (HSMC_CTRL) Disable the NAND Flash controller.  */
#define HSMC_CTRL_NFCDIS_0                    (HSMC_CTRL_NFCDIS_0_Val << HSMC_CTRL_NFCDIS_Pos)     /**< (HSMC_CTRL) No effect Position  */
#define HSMC_CTRL_NFCDIS_1                    (HSMC_CTRL_NFCDIS_1_Val << HSMC_CTRL_NFCDIS_Pos)     /**< (HSMC_CTRL) Disable the NAND Flash controller. Position  */
#define HSMC_CTRL_Msk                         _U_(0x00000003)                                      /**< (HSMC_CTRL) Register Mask  */


/* -------- HSMC_SR : (SMC Offset: 0x08) ( R/ 32) NFC Status Register -------- */
#define HSMC_SR_RESETVALUE                    _U_(0x00)                                            /**<  (HSMC_SR) NFC Status Register  Reset Value */

#define HSMC_SR_SMCSTS_Pos                    _U_(0)                                               /**< (HSMC_SR) NAND Flash Controller Status (this field cannot be reset) Position */
#define HSMC_SR_SMCSTS_Msk                    (_U_(0x1) << HSMC_SR_SMCSTS_Pos)                     /**< (HSMC_SR) NAND Flash Controller Status (this field cannot be reset) Mask */
#define HSMC_SR_SMCSTS(value)                 (HSMC_SR_SMCSTS_Msk & ((value) << HSMC_SR_SMCSTS_Pos))
#define   HSMC_SR_SMCSTS_0_Val                _U_(0x0)                                             /**< (HSMC_SR) NAND Flash Controller disabled  */
#define   HSMC_SR_SMCSTS_1_Val                _U_(0x1)                                             /**< (HSMC_SR) NAND Flash Controller enabled  */
#define HSMC_SR_SMCSTS_0                      (HSMC_SR_SMCSTS_0_Val << HSMC_SR_SMCSTS_Pos)         /**< (HSMC_SR) NAND Flash Controller disabled Position  */
#define HSMC_SR_SMCSTS_1                      (HSMC_SR_SMCSTS_1_Val << HSMC_SR_SMCSTS_Pos)         /**< (HSMC_SR) NAND Flash Controller enabled Position  */
#define HSMC_SR_RB_RISE_Pos                   _U_(4)                                               /**< (HSMC_SR) Selected Ready Busy Rising Edge Detected Position */
#define HSMC_SR_RB_RISE_Msk                   (_U_(0x1) << HSMC_SR_RB_RISE_Pos)                    /**< (HSMC_SR) Selected Ready Busy Rising Edge Detected Mask */
#define HSMC_SR_RB_RISE(value)                (HSMC_SR_RB_RISE_Msk & ((value) << HSMC_SR_RB_RISE_Pos))
#define HSMC_SR_RB_FALL_Pos                   _U_(5)                                               /**< (HSMC_SR) Selected Ready Busy Falling Edge Detected Position */
#define HSMC_SR_RB_FALL_Msk                   (_U_(0x1) << HSMC_SR_RB_FALL_Pos)                    /**< (HSMC_SR) Selected Ready Busy Falling Edge Detected Mask */
#define HSMC_SR_RB_FALL(value)                (HSMC_SR_RB_FALL_Msk & ((value) << HSMC_SR_RB_FALL_Pos))
#define HSMC_SR_NFCBUSY_Pos                   _U_(8)                                               /**< (HSMC_SR) NFC Busy (this field cannot be reset) Position */
#define HSMC_SR_NFCBUSY_Msk                   (_U_(0x1) << HSMC_SR_NFCBUSY_Pos)                    /**< (HSMC_SR) NFC Busy (this field cannot be reset) Mask */
#define HSMC_SR_NFCBUSY(value)                (HSMC_SR_NFCBUSY_Msk & ((value) << HSMC_SR_NFCBUSY_Pos))
#define HSMC_SR_NFCWR_Pos                     _U_(11)                                              /**< (HSMC_SR) NFC Write/Read Operation (this field cannot be reset) Position */
#define HSMC_SR_NFCWR_Msk                     (_U_(0x1) << HSMC_SR_NFCWR_Pos)                      /**< (HSMC_SR) NFC Write/Read Operation (this field cannot be reset) Mask */
#define HSMC_SR_NFCWR(value)                  (HSMC_SR_NFCWR_Msk & ((value) << HSMC_SR_NFCWR_Pos))
#define HSMC_SR_NFCSID_Pos                    _U_(12)                                              /**< (HSMC_SR) NFC Chip Select ID (this field cannot be reset) Position */
#define HSMC_SR_NFCSID_Msk                    (_U_(0x7) << HSMC_SR_NFCSID_Pos)                     /**< (HSMC_SR) NFC Chip Select ID (this field cannot be reset) Mask */
#define HSMC_SR_NFCSID(value)                 (HSMC_SR_NFCSID_Msk & ((value) << HSMC_SR_NFCSID_Pos))
#define HSMC_SR_XFRDONE_Pos                   _U_(16)                                              /**< (HSMC_SR) NFC Data Transfer Terminated Position */
#define HSMC_SR_XFRDONE_Msk                   (_U_(0x1) << HSMC_SR_XFRDONE_Pos)                    /**< (HSMC_SR) NFC Data Transfer Terminated Mask */
#define HSMC_SR_XFRDONE(value)                (HSMC_SR_XFRDONE_Msk & ((value) << HSMC_SR_XFRDONE_Pos))
#define HSMC_SR_CMDDONE_Pos                   _U_(17)                                              /**< (HSMC_SR) Command Done Position */
#define HSMC_SR_CMDDONE_Msk                   (_U_(0x1) << HSMC_SR_CMDDONE_Pos)                    /**< (HSMC_SR) Command Done Mask */
#define HSMC_SR_CMDDONE(value)                (HSMC_SR_CMDDONE_Msk & ((value) << HSMC_SR_CMDDONE_Pos))
#define HSMC_SR_DTOE_Pos                      _U_(20)                                              /**< (HSMC_SR) Data Timeout Error Position */
#define HSMC_SR_DTOE_Msk                      (_U_(0x1) << HSMC_SR_DTOE_Pos)                       /**< (HSMC_SR) Data Timeout Error Mask */
#define HSMC_SR_DTOE(value)                   (HSMC_SR_DTOE_Msk & ((value) << HSMC_SR_DTOE_Pos))  
#define HSMC_SR_UNDEF_Pos                     _U_(21)                                              /**< (HSMC_SR) Undefined Area Error Position */
#define HSMC_SR_UNDEF_Msk                     (_U_(0x1) << HSMC_SR_UNDEF_Pos)                      /**< (HSMC_SR) Undefined Area Error Mask */
#define HSMC_SR_UNDEF(value)                  (HSMC_SR_UNDEF_Msk & ((value) << HSMC_SR_UNDEF_Pos))
#define HSMC_SR_AWB_Pos                       _U_(22)                                              /**< (HSMC_SR) Accessing While Busy Position */
#define HSMC_SR_AWB_Msk                       (_U_(0x1) << HSMC_SR_AWB_Pos)                        /**< (HSMC_SR) Accessing While Busy Mask */
#define HSMC_SR_AWB(value)                    (HSMC_SR_AWB_Msk & ((value) << HSMC_SR_AWB_Pos))    
#define HSMC_SR_NFCASE_Pos                    _U_(23)                                              /**< (HSMC_SR) NFC Access Size Error Position */
#define HSMC_SR_NFCASE_Msk                    (_U_(0x1) << HSMC_SR_NFCASE_Pos)                     /**< (HSMC_SR) NFC Access Size Error Mask */
#define HSMC_SR_NFCASE(value)                 (HSMC_SR_NFCASE_Msk & ((value) << HSMC_SR_NFCASE_Pos))
#define HSMC_SR_RB_EDGE0_Pos                  _U_(24)                                              /**< (HSMC_SR) Ready/Busy Line 0 Edge Detected Position */
#define HSMC_SR_RB_EDGE0_Msk                  (_U_(0x1) << HSMC_SR_RB_EDGE0_Pos)                   /**< (HSMC_SR) Ready/Busy Line 0 Edge Detected Mask */
#define HSMC_SR_RB_EDGE0(value)               (HSMC_SR_RB_EDGE0_Msk & ((value) << HSMC_SR_RB_EDGE0_Pos))
#define HSMC_SR_Msk                           _U_(0x01F37931)                                      /**< (HSMC_SR) Register Mask  */

#define HSMC_SR_RB_EDGE_Pos                   _U_(24)                                              /**< (HSMC_SR Position) Ready/Busy Line x Edge Detected */
#define HSMC_SR_RB_EDGE_Msk                   (_U_(0x1) << HSMC_SR_RB_EDGE_Pos)                    /**< (HSMC_SR Mask) RB_EDGE */
#define HSMC_SR_RB_EDGE(value)                (HSMC_SR_RB_EDGE_Msk & ((value) << HSMC_SR_RB_EDGE_Pos)) 

/* -------- HSMC_IER : (SMC Offset: 0x0C) ( /W 32) NFC Interrupt Enable Register -------- */
#define HSMC_IER_RB_RISE_Pos                  _U_(4)                                               /**< (HSMC_IER) Ready Busy Rising Edge Detection Interrupt Enable Position */
#define HSMC_IER_RB_RISE_Msk                  (_U_(0x1) << HSMC_IER_RB_RISE_Pos)                   /**< (HSMC_IER) Ready Busy Rising Edge Detection Interrupt Enable Mask */
#define HSMC_IER_RB_RISE(value)               (HSMC_IER_RB_RISE_Msk & ((value) << HSMC_IER_RB_RISE_Pos))
#define   HSMC_IER_RB_RISE_0_Val              _U_(0x0)                                             /**< (HSMC_IER) No effect  */
#define   HSMC_IER_RB_RISE_1_Val              _U_(0x1)                                             /**< (HSMC_IER) Interrupt source enabled  */
#define HSMC_IER_RB_RISE_0                    (HSMC_IER_RB_RISE_0_Val << HSMC_IER_RB_RISE_Pos)     /**< (HSMC_IER) No effect Position  */
#define HSMC_IER_RB_RISE_1                    (HSMC_IER_RB_RISE_1_Val << HSMC_IER_RB_RISE_Pos)     /**< (HSMC_IER) Interrupt source enabled Position  */
#define HSMC_IER_RB_FALL_Pos                  _U_(5)                                               /**< (HSMC_IER) Ready Busy Falling Edge Detection Interrupt Enable Position */
#define HSMC_IER_RB_FALL_Msk                  (_U_(0x1) << HSMC_IER_RB_FALL_Pos)                   /**< (HSMC_IER) Ready Busy Falling Edge Detection Interrupt Enable Mask */
#define HSMC_IER_RB_FALL(value)               (HSMC_IER_RB_FALL_Msk & ((value) << HSMC_IER_RB_FALL_Pos))
#define   HSMC_IER_RB_FALL_0_Val              _U_(0x0)                                             /**< (HSMC_IER) No effect  */
#define   HSMC_IER_RB_FALL_1_Val              _U_(0x1)                                             /**< (HSMC_IER) Interrupt source enabled  */
#define HSMC_IER_RB_FALL_0                    (HSMC_IER_RB_FALL_0_Val << HSMC_IER_RB_FALL_Pos)     /**< (HSMC_IER) No effect Position  */
#define HSMC_IER_RB_FALL_1                    (HSMC_IER_RB_FALL_1_Val << HSMC_IER_RB_FALL_Pos)     /**< (HSMC_IER) Interrupt source enabled Position  */
#define HSMC_IER_XFRDONE_Pos                  _U_(16)                                              /**< (HSMC_IER) Transfer Done Interrupt Enable Position */
#define HSMC_IER_XFRDONE_Msk                  (_U_(0x1) << HSMC_IER_XFRDONE_Pos)                   /**< (HSMC_IER) Transfer Done Interrupt Enable Mask */
#define HSMC_IER_XFRDONE(value)               (HSMC_IER_XFRDONE_Msk & ((value) << HSMC_IER_XFRDONE_Pos))
#define   HSMC_IER_XFRDONE_0_Val              _U_(0x0)                                             /**< (HSMC_IER) No effect  */
#define   HSMC_IER_XFRDONE_1_Val              _U_(0x1)                                             /**< (HSMC_IER) Interrupt source enabled  */
#define HSMC_IER_XFRDONE_0                    (HSMC_IER_XFRDONE_0_Val << HSMC_IER_XFRDONE_Pos)     /**< (HSMC_IER) No effect Position  */
#define HSMC_IER_XFRDONE_1                    (HSMC_IER_XFRDONE_1_Val << HSMC_IER_XFRDONE_Pos)     /**< (HSMC_IER) Interrupt source enabled Position  */
#define HSMC_IER_CMDDONE_Pos                  _U_(17)                                              /**< (HSMC_IER) Command Done Interrupt Enable Position */
#define HSMC_IER_CMDDONE_Msk                  (_U_(0x1) << HSMC_IER_CMDDONE_Pos)                   /**< (HSMC_IER) Command Done Interrupt Enable Mask */
#define HSMC_IER_CMDDONE(value)               (HSMC_IER_CMDDONE_Msk & ((value) << HSMC_IER_CMDDONE_Pos))
#define   HSMC_IER_CMDDONE_0_Val              _U_(0x0)                                             /**< (HSMC_IER) No effect  */
#define   HSMC_IER_CMDDONE_1_Val              _U_(0x1)                                             /**< (HSMC_IER) Interrupt source enabled  */
#define HSMC_IER_CMDDONE_0                    (HSMC_IER_CMDDONE_0_Val << HSMC_IER_CMDDONE_Pos)     /**< (HSMC_IER) No effect Position  */
#define HSMC_IER_CMDDONE_1                    (HSMC_IER_CMDDONE_1_Val << HSMC_IER_CMDDONE_Pos)     /**< (HSMC_IER) Interrupt source enabled Position  */
#define HSMC_IER_DTOE_Pos                     _U_(20)                                              /**< (HSMC_IER) Data Timeout Error Interrupt Enable Position */
#define HSMC_IER_DTOE_Msk                     (_U_(0x1) << HSMC_IER_DTOE_Pos)                      /**< (HSMC_IER) Data Timeout Error Interrupt Enable Mask */
#define HSMC_IER_DTOE(value)                  (HSMC_IER_DTOE_Msk & ((value) << HSMC_IER_DTOE_Pos))
#define   HSMC_IER_DTOE_0_Val                 _U_(0x0)                                             /**< (HSMC_IER) No effect  */
#define   HSMC_IER_DTOE_1_Val                 _U_(0x1)                                             /**< (HSMC_IER) Interrupt source enabled  */
#define HSMC_IER_DTOE_0                       (HSMC_IER_DTOE_0_Val << HSMC_IER_DTOE_Pos)           /**< (HSMC_IER) No effect Position  */
#define HSMC_IER_DTOE_1                       (HSMC_IER_DTOE_1_Val << HSMC_IER_DTOE_Pos)           /**< (HSMC_IER) Interrupt source enabled Position  */
#define HSMC_IER_UNDEF_Pos                    _U_(21)                                              /**< (HSMC_IER) Undefined Area Access Interrupt Enable Position */
#define HSMC_IER_UNDEF_Msk                    (_U_(0x1) << HSMC_IER_UNDEF_Pos)                     /**< (HSMC_IER) Undefined Area Access Interrupt Enable Mask */
#define HSMC_IER_UNDEF(value)                 (HSMC_IER_UNDEF_Msk & ((value) << HSMC_IER_UNDEF_Pos))
#define   HSMC_IER_UNDEF_0_Val                _U_(0x0)                                             /**< (HSMC_IER) No effect  */
#define   HSMC_IER_UNDEF_1_Val                _U_(0x1)                                             /**< (HSMC_IER) Interrupt source enabled  */
#define HSMC_IER_UNDEF_0                      (HSMC_IER_UNDEF_0_Val << HSMC_IER_UNDEF_Pos)         /**< (HSMC_IER) No effect Position  */
#define HSMC_IER_UNDEF_1                      (HSMC_IER_UNDEF_1_Val << HSMC_IER_UNDEF_Pos)         /**< (HSMC_IER) Interrupt source enabled Position  */
#define HSMC_IER_AWB_Pos                      _U_(22)                                              /**< (HSMC_IER) Accessing While Busy Interrupt Enable Position */
#define HSMC_IER_AWB_Msk                      (_U_(0x1) << HSMC_IER_AWB_Pos)                       /**< (HSMC_IER) Accessing While Busy Interrupt Enable Mask */
#define HSMC_IER_AWB(value)                   (HSMC_IER_AWB_Msk & ((value) << HSMC_IER_AWB_Pos))  
#define   HSMC_IER_AWB_0_Val                  _U_(0x0)                                             /**< (HSMC_IER) No effect  */
#define   HSMC_IER_AWB_1_Val                  _U_(0x1)                                             /**< (HSMC_IER) Interrupt source enabled  */
#define HSMC_IER_AWB_0                        (HSMC_IER_AWB_0_Val << HSMC_IER_AWB_Pos)             /**< (HSMC_IER) No effect Position  */
#define HSMC_IER_AWB_1                        (HSMC_IER_AWB_1_Val << HSMC_IER_AWB_Pos)             /**< (HSMC_IER) Interrupt source enabled Position  */
#define HSMC_IER_NFCASE_Pos                   _U_(23)                                              /**< (HSMC_IER) NFC Access Size Error Interrupt Enable Position */
#define HSMC_IER_NFCASE_Msk                   (_U_(0x1) << HSMC_IER_NFCASE_Pos)                    /**< (HSMC_IER) NFC Access Size Error Interrupt Enable Mask */
#define HSMC_IER_NFCASE(value)                (HSMC_IER_NFCASE_Msk & ((value) << HSMC_IER_NFCASE_Pos))
#define   HSMC_IER_NFCASE_0_Val               _U_(0x0)                                             /**< (HSMC_IER) No effect  */
#define   HSMC_IER_NFCASE_1_Val               _U_(0x1)                                             /**< (HSMC_IER) Interrupt source enabled  */
#define HSMC_IER_NFCASE_0                     (HSMC_IER_NFCASE_0_Val << HSMC_IER_NFCASE_Pos)       /**< (HSMC_IER) No effect Position  */
#define HSMC_IER_NFCASE_1                     (HSMC_IER_NFCASE_1_Val << HSMC_IER_NFCASE_Pos)       /**< (HSMC_IER) Interrupt source enabled Position  */
#define HSMC_IER_RB_EDGE0_Pos                 _U_(24)                                              /**< (HSMC_IER) Ready/Busy Line 0 Interrupt Enable Position */
#define HSMC_IER_RB_EDGE0_Msk                 (_U_(0x1) << HSMC_IER_RB_EDGE0_Pos)                  /**< (HSMC_IER) Ready/Busy Line 0 Interrupt Enable Mask */
#define HSMC_IER_RB_EDGE0(value)              (HSMC_IER_RB_EDGE0_Msk & ((value) << HSMC_IER_RB_EDGE0_Pos))
#define   HSMC_IER_RB_EDGE0_0_Val             _U_(0x0)                                             /**< (HSMC_IER) No effect  */
#define   HSMC_IER_RB_EDGE0_1_Val             _U_(0x1)                                             /**< (HSMC_IER) Interrupt source enabled  */
#define HSMC_IER_RB_EDGE0_0                   (HSMC_IER_RB_EDGE0_0_Val << HSMC_IER_RB_EDGE0_Pos)   /**< (HSMC_IER) No effect Position  */
#define HSMC_IER_RB_EDGE0_1                   (HSMC_IER_RB_EDGE0_1_Val << HSMC_IER_RB_EDGE0_Pos)   /**< (HSMC_IER) Interrupt source enabled Position  */
#define HSMC_IER_Msk                          _U_(0x01F30030)                                      /**< (HSMC_IER) Register Mask  */

#define HSMC_IER_RB_EDGE_Pos                  _U_(24)                                              /**< (HSMC_IER Position) Ready/Busy Line x Interrupt Enable */
#define HSMC_IER_RB_EDGE_Msk                  (_U_(0x1) << HSMC_IER_RB_EDGE_Pos)                   /**< (HSMC_IER Mask) RB_EDGE */
#define HSMC_IER_RB_EDGE(value)               (HSMC_IER_RB_EDGE_Msk & ((value) << HSMC_IER_RB_EDGE_Pos)) 

/* -------- HSMC_IDR : (SMC Offset: 0x10) ( /W 32) NFC Interrupt Disable Register -------- */
#define HSMC_IDR_RB_RISE_Pos                  _U_(4)                                               /**< (HSMC_IDR) Ready Busy Rising Edge Detection Interrupt Disable Position */
#define HSMC_IDR_RB_RISE_Msk                  (_U_(0x1) << HSMC_IDR_RB_RISE_Pos)                   /**< (HSMC_IDR) Ready Busy Rising Edge Detection Interrupt Disable Mask */
#define HSMC_IDR_RB_RISE(value)               (HSMC_IDR_RB_RISE_Msk & ((value) << HSMC_IDR_RB_RISE_Pos))
#define   HSMC_IDR_RB_RISE_0_Val              _U_(0x0)                                             /**< (HSMC_IDR) No effect  */
#define   HSMC_IDR_RB_RISE_1_Val              _U_(0x1)                                             /**< (HSMC_IDR) Interrupt source disabled  */
#define HSMC_IDR_RB_RISE_0                    (HSMC_IDR_RB_RISE_0_Val << HSMC_IDR_RB_RISE_Pos)     /**< (HSMC_IDR) No effect Position  */
#define HSMC_IDR_RB_RISE_1                    (HSMC_IDR_RB_RISE_1_Val << HSMC_IDR_RB_RISE_Pos)     /**< (HSMC_IDR) Interrupt source disabled Position  */
#define HSMC_IDR_RB_FALL_Pos                  _U_(5)                                               /**< (HSMC_IDR) Ready Busy Falling Edge Detection Interrupt Disable Position */
#define HSMC_IDR_RB_FALL_Msk                  (_U_(0x1) << HSMC_IDR_RB_FALL_Pos)                   /**< (HSMC_IDR) Ready Busy Falling Edge Detection Interrupt Disable Mask */
#define HSMC_IDR_RB_FALL(value)               (HSMC_IDR_RB_FALL_Msk & ((value) << HSMC_IDR_RB_FALL_Pos))
#define   HSMC_IDR_RB_FALL_0_Val              _U_(0x0)                                             /**< (HSMC_IDR) No effect  */
#define   HSMC_IDR_RB_FALL_1_Val              _U_(0x1)                                             /**< (HSMC_IDR) Interrupt source disabled  */
#define HSMC_IDR_RB_FALL_0                    (HSMC_IDR_RB_FALL_0_Val << HSMC_IDR_RB_FALL_Pos)     /**< (HSMC_IDR) No effect Position  */
#define HSMC_IDR_RB_FALL_1                    (HSMC_IDR_RB_FALL_1_Val << HSMC_IDR_RB_FALL_Pos)     /**< (HSMC_IDR) Interrupt source disabled Position  */
#define HSMC_IDR_XFRDONE_Pos                  _U_(16)                                              /**< (HSMC_IDR) Transfer Done Interrupt Disable Position */
#define HSMC_IDR_XFRDONE_Msk                  (_U_(0x1) << HSMC_IDR_XFRDONE_Pos)                   /**< (HSMC_IDR) Transfer Done Interrupt Disable Mask */
#define HSMC_IDR_XFRDONE(value)               (HSMC_IDR_XFRDONE_Msk & ((value) << HSMC_IDR_XFRDONE_Pos))
#define   HSMC_IDR_XFRDONE_0_Val              _U_(0x0)                                             /**< (HSMC_IDR) No effect  */
#define   HSMC_IDR_XFRDONE_1_Val              _U_(0x1)                                             /**< (HSMC_IDR) Interrupt source disabled  */
#define HSMC_IDR_XFRDONE_0                    (HSMC_IDR_XFRDONE_0_Val << HSMC_IDR_XFRDONE_Pos)     /**< (HSMC_IDR) No effect Position  */
#define HSMC_IDR_XFRDONE_1                    (HSMC_IDR_XFRDONE_1_Val << HSMC_IDR_XFRDONE_Pos)     /**< (HSMC_IDR) Interrupt source disabled Position  */
#define HSMC_IDR_CMDDONE_Pos                  _U_(17)                                              /**< (HSMC_IDR) Command Done Interrupt Disable Position */
#define HSMC_IDR_CMDDONE_Msk                  (_U_(0x1) << HSMC_IDR_CMDDONE_Pos)                   /**< (HSMC_IDR) Command Done Interrupt Disable Mask */
#define HSMC_IDR_CMDDONE(value)               (HSMC_IDR_CMDDONE_Msk & ((value) << HSMC_IDR_CMDDONE_Pos))
#define   HSMC_IDR_CMDDONE_0_Val              _U_(0x0)                                             /**< (HSMC_IDR) No effect  */
#define   HSMC_IDR_CMDDONE_1_Val              _U_(0x1)                                             /**< (HSMC_IDR) Interrupt source disabled  */
#define HSMC_IDR_CMDDONE_0                    (HSMC_IDR_CMDDONE_0_Val << HSMC_IDR_CMDDONE_Pos)     /**< (HSMC_IDR) No effect Position  */
#define HSMC_IDR_CMDDONE_1                    (HSMC_IDR_CMDDONE_1_Val << HSMC_IDR_CMDDONE_Pos)     /**< (HSMC_IDR) Interrupt source disabled Position  */
#define HSMC_IDR_DTOE_Pos                     _U_(20)                                              /**< (HSMC_IDR) Data Timeout Error Interrupt Disable Position */
#define HSMC_IDR_DTOE_Msk                     (_U_(0x1) << HSMC_IDR_DTOE_Pos)                      /**< (HSMC_IDR) Data Timeout Error Interrupt Disable Mask */
#define HSMC_IDR_DTOE(value)                  (HSMC_IDR_DTOE_Msk & ((value) << HSMC_IDR_DTOE_Pos))
#define   HSMC_IDR_DTOE_0_Val                 _U_(0x0)                                             /**< (HSMC_IDR) No effect  */
#define   HSMC_IDR_DTOE_1_Val                 _U_(0x1)                                             /**< (HSMC_IDR) Interrupt source disabled  */
#define HSMC_IDR_DTOE_0                       (HSMC_IDR_DTOE_0_Val << HSMC_IDR_DTOE_Pos)           /**< (HSMC_IDR) No effect Position  */
#define HSMC_IDR_DTOE_1                       (HSMC_IDR_DTOE_1_Val << HSMC_IDR_DTOE_Pos)           /**< (HSMC_IDR) Interrupt source disabled Position  */
#define HSMC_IDR_UNDEF_Pos                    _U_(21)                                              /**< (HSMC_IDR) Undefined Area Access Interrupt Disable Position */
#define HSMC_IDR_UNDEF_Msk                    (_U_(0x1) << HSMC_IDR_UNDEF_Pos)                     /**< (HSMC_IDR) Undefined Area Access Interrupt Disable Mask */
#define HSMC_IDR_UNDEF(value)                 (HSMC_IDR_UNDEF_Msk & ((value) << HSMC_IDR_UNDEF_Pos))
#define   HSMC_IDR_UNDEF_0_Val                _U_(0x0)                                             /**< (HSMC_IDR) No effect  */
#define   HSMC_IDR_UNDEF_1_Val                _U_(0x1)                                             /**< (HSMC_IDR) Interrupt source disabled  */
#define HSMC_IDR_UNDEF_0                      (HSMC_IDR_UNDEF_0_Val << HSMC_IDR_UNDEF_Pos)         /**< (HSMC_IDR) No effect Position  */
#define HSMC_IDR_UNDEF_1                      (HSMC_IDR_UNDEF_1_Val << HSMC_IDR_UNDEF_Pos)         /**< (HSMC_IDR) Interrupt source disabled Position  */
#define HSMC_IDR_AWB_Pos                      _U_(22)                                              /**< (HSMC_IDR) Accessing While Busy Interrupt Disable Position */
#define HSMC_IDR_AWB_Msk                      (_U_(0x1) << HSMC_IDR_AWB_Pos)                       /**< (HSMC_IDR) Accessing While Busy Interrupt Disable Mask */
#define HSMC_IDR_AWB(value)                   (HSMC_IDR_AWB_Msk & ((value) << HSMC_IDR_AWB_Pos))  
#define   HSMC_IDR_AWB_0_Val                  _U_(0x0)                                             /**< (HSMC_IDR) No effect  */
#define   HSMC_IDR_AWB_1_Val                  _U_(0x1)                                             /**< (HSMC_IDR) Interrupt source disabled  */
#define HSMC_IDR_AWB_0                        (HSMC_IDR_AWB_0_Val << HSMC_IDR_AWB_Pos)             /**< (HSMC_IDR) No effect Position  */
#define HSMC_IDR_AWB_1                        (HSMC_IDR_AWB_1_Val << HSMC_IDR_AWB_Pos)             /**< (HSMC_IDR) Interrupt source disabled Position  */
#define HSMC_IDR_NFCASE_Pos                   _U_(23)                                              /**< (HSMC_IDR) NFC Access Size Error Interrupt Disable Position */
#define HSMC_IDR_NFCASE_Msk                   (_U_(0x1) << HSMC_IDR_NFCASE_Pos)                    /**< (HSMC_IDR) NFC Access Size Error Interrupt Disable Mask */
#define HSMC_IDR_NFCASE(value)                (HSMC_IDR_NFCASE_Msk & ((value) << HSMC_IDR_NFCASE_Pos))
#define   HSMC_IDR_NFCASE_0_Val               _U_(0x0)                                             /**< (HSMC_IDR) No effect  */
#define   HSMC_IDR_NFCASE_1_Val               _U_(0x1)                                             /**< (HSMC_IDR) Interrupt source disabled  */
#define HSMC_IDR_NFCASE_0                     (HSMC_IDR_NFCASE_0_Val << HSMC_IDR_NFCASE_Pos)       /**< (HSMC_IDR) No effect Position  */
#define HSMC_IDR_NFCASE_1                     (HSMC_IDR_NFCASE_1_Val << HSMC_IDR_NFCASE_Pos)       /**< (HSMC_IDR) Interrupt source disabled Position  */
#define HSMC_IDR_RB_EDGE0_Pos                 _U_(24)                                              /**< (HSMC_IDR) Ready/Busy Line 0 Interrupt Disable Position */
#define HSMC_IDR_RB_EDGE0_Msk                 (_U_(0x1) << HSMC_IDR_RB_EDGE0_Pos)                  /**< (HSMC_IDR) Ready/Busy Line 0 Interrupt Disable Mask */
#define HSMC_IDR_RB_EDGE0(value)              (HSMC_IDR_RB_EDGE0_Msk & ((value) << HSMC_IDR_RB_EDGE0_Pos))
#define   HSMC_IDR_RB_EDGE0_0_Val             _U_(0x0)                                             /**< (HSMC_IDR) No effect  */
#define   HSMC_IDR_RB_EDGE0_1_Val             _U_(0x1)                                             /**< (HSMC_IDR) Interrupt source disabled  */
#define HSMC_IDR_RB_EDGE0_0                   (HSMC_IDR_RB_EDGE0_0_Val << HSMC_IDR_RB_EDGE0_Pos)   /**< (HSMC_IDR) No effect Position  */
#define HSMC_IDR_RB_EDGE0_1                   (HSMC_IDR_RB_EDGE0_1_Val << HSMC_IDR_RB_EDGE0_Pos)   /**< (HSMC_IDR) Interrupt source disabled Position  */
#define HSMC_IDR_Msk                          _U_(0x01F30030)                                      /**< (HSMC_IDR) Register Mask  */

#define HSMC_IDR_RB_EDGE_Pos                  _U_(24)                                              /**< (HSMC_IDR Position) Ready/Busy Line x Interrupt Disable */
#define HSMC_IDR_RB_EDGE_Msk                  (_U_(0x1) << HSMC_IDR_RB_EDGE_Pos)                   /**< (HSMC_IDR Mask) RB_EDGE */
#define HSMC_IDR_RB_EDGE(value)               (HSMC_IDR_RB_EDGE_Msk & ((value) << HSMC_IDR_RB_EDGE_Pos)) 

/* -------- HSMC_IMR : (SMC Offset: 0x14) ( R/ 32) NFC Interrupt Mask Register -------- */
#define HSMC_IMR_RESETVALUE                   _U_(0x00)                                            /**<  (HSMC_IMR) NFC Interrupt Mask Register  Reset Value */

#define HSMC_IMR_RB_RISE_Pos                  _U_(4)                                               /**< (HSMC_IMR) Ready Busy Rising Edge Detection Interrupt Mask Position */
#define HSMC_IMR_RB_RISE_Msk                  (_U_(0x1) << HSMC_IMR_RB_RISE_Pos)                   /**< (HSMC_IMR) Ready Busy Rising Edge Detection Interrupt Mask Mask */
#define HSMC_IMR_RB_RISE(value)               (HSMC_IMR_RB_RISE_Msk & ((value) << HSMC_IMR_RB_RISE_Pos))
#define   HSMC_IMR_RB_RISE_0_Val              _U_(0x0)                                             /**< (HSMC_IMR) Interrupt source disabled  */
#define   HSMC_IMR_RB_RISE_1_Val              _U_(0x1)                                             /**< (HSMC_IMR) Interrupt source enabled  */
#define HSMC_IMR_RB_RISE_0                    (HSMC_IMR_RB_RISE_0_Val << HSMC_IMR_RB_RISE_Pos)     /**< (HSMC_IMR) Interrupt source disabled Position  */
#define HSMC_IMR_RB_RISE_1                    (HSMC_IMR_RB_RISE_1_Val << HSMC_IMR_RB_RISE_Pos)     /**< (HSMC_IMR) Interrupt source enabled Position  */
#define HSMC_IMR_RB_FALL_Pos                  _U_(5)                                               /**< (HSMC_IMR) Ready Busy Falling Edge Detection Interrupt Mask Position */
#define HSMC_IMR_RB_FALL_Msk                  (_U_(0x1) << HSMC_IMR_RB_FALL_Pos)                   /**< (HSMC_IMR) Ready Busy Falling Edge Detection Interrupt Mask Mask */
#define HSMC_IMR_RB_FALL(value)               (HSMC_IMR_RB_FALL_Msk & ((value) << HSMC_IMR_RB_FALL_Pos))
#define   HSMC_IMR_RB_FALL_0_Val              _U_(0x0)                                             /**< (HSMC_IMR) Interrupt source disabled  */
#define   HSMC_IMR_RB_FALL_1_Val              _U_(0x1)                                             /**< (HSMC_IMR) Interrupt source enabled  */
#define HSMC_IMR_RB_FALL_0                    (HSMC_IMR_RB_FALL_0_Val << HSMC_IMR_RB_FALL_Pos)     /**< (HSMC_IMR) Interrupt source disabled Position  */
#define HSMC_IMR_RB_FALL_1                    (HSMC_IMR_RB_FALL_1_Val << HSMC_IMR_RB_FALL_Pos)     /**< (HSMC_IMR) Interrupt source enabled Position  */
#define HSMC_IMR_XFRDONE_Pos                  _U_(16)                                              /**< (HSMC_IMR) Transfer Done Interrupt Mask Position */
#define HSMC_IMR_XFRDONE_Msk                  (_U_(0x1) << HSMC_IMR_XFRDONE_Pos)                   /**< (HSMC_IMR) Transfer Done Interrupt Mask Mask */
#define HSMC_IMR_XFRDONE(value)               (HSMC_IMR_XFRDONE_Msk & ((value) << HSMC_IMR_XFRDONE_Pos))
#define   HSMC_IMR_XFRDONE_0_Val              _U_(0x0)                                             /**< (HSMC_IMR) Interrupt source disabled  */
#define   HSMC_IMR_XFRDONE_1_Val              _U_(0x1)                                             /**< (HSMC_IMR) Interrupt source enabled  */
#define HSMC_IMR_XFRDONE_0                    (HSMC_IMR_XFRDONE_0_Val << HSMC_IMR_XFRDONE_Pos)     /**< (HSMC_IMR) Interrupt source disabled Position  */
#define HSMC_IMR_XFRDONE_1                    (HSMC_IMR_XFRDONE_1_Val << HSMC_IMR_XFRDONE_Pos)     /**< (HSMC_IMR) Interrupt source enabled Position  */
#define HSMC_IMR_CMDDONE_Pos                  _U_(17)                                              /**< (HSMC_IMR) Command Done Interrupt Mask Position */
#define HSMC_IMR_CMDDONE_Msk                  (_U_(0x1) << HSMC_IMR_CMDDONE_Pos)                   /**< (HSMC_IMR) Command Done Interrupt Mask Mask */
#define HSMC_IMR_CMDDONE(value)               (HSMC_IMR_CMDDONE_Msk & ((value) << HSMC_IMR_CMDDONE_Pos))
#define   HSMC_IMR_CMDDONE_0_Val              _U_(0x0)                                             /**< (HSMC_IMR) Interrupt source disabled  */
#define   HSMC_IMR_CMDDONE_1_Val              _U_(0x1)                                             /**< (HSMC_IMR) Interrupt source enabled  */
#define HSMC_IMR_CMDDONE_0                    (HSMC_IMR_CMDDONE_0_Val << HSMC_IMR_CMDDONE_Pos)     /**< (HSMC_IMR) Interrupt source disabled Position  */
#define HSMC_IMR_CMDDONE_1                    (HSMC_IMR_CMDDONE_1_Val << HSMC_IMR_CMDDONE_Pos)     /**< (HSMC_IMR) Interrupt source enabled Position  */
#define HSMC_IMR_DTOE_Pos                     _U_(20)                                              /**< (HSMC_IMR) Data Timeout Error Interrupt Mask Position */
#define HSMC_IMR_DTOE_Msk                     (_U_(0x1) << HSMC_IMR_DTOE_Pos)                      /**< (HSMC_IMR) Data Timeout Error Interrupt Mask Mask */
#define HSMC_IMR_DTOE(value)                  (HSMC_IMR_DTOE_Msk & ((value) << HSMC_IMR_DTOE_Pos))
#define   HSMC_IMR_DTOE_0_Val                 _U_(0x0)                                             /**< (HSMC_IMR) Interrupt source disabled  */
#define   HSMC_IMR_DTOE_1_Val                 _U_(0x1)                                             /**< (HSMC_IMR) Interrupt source enabled  */
#define HSMC_IMR_DTOE_0                       (HSMC_IMR_DTOE_0_Val << HSMC_IMR_DTOE_Pos)           /**< (HSMC_IMR) Interrupt source disabled Position  */
#define HSMC_IMR_DTOE_1                       (HSMC_IMR_DTOE_1_Val << HSMC_IMR_DTOE_Pos)           /**< (HSMC_IMR) Interrupt source enabled Position  */
#define HSMC_IMR_UNDEF_Pos                    _U_(21)                                              /**< (HSMC_IMR) Undefined Area Access Interrupt Mask5 Position */
#define HSMC_IMR_UNDEF_Msk                    (_U_(0x1) << HSMC_IMR_UNDEF_Pos)                     /**< (HSMC_IMR) Undefined Area Access Interrupt Mask5 Mask */
#define HSMC_IMR_UNDEF(value)                 (HSMC_IMR_UNDEF_Msk & ((value) << HSMC_IMR_UNDEF_Pos))
#define   HSMC_IMR_UNDEF_0_Val                _U_(0x0)                                             /**< (HSMC_IMR) Interrupt source disabled  */
#define   HSMC_IMR_UNDEF_1_Val                _U_(0x1)                                             /**< (HSMC_IMR) Interrupt source enabled  */
#define HSMC_IMR_UNDEF_0                      (HSMC_IMR_UNDEF_0_Val << HSMC_IMR_UNDEF_Pos)         /**< (HSMC_IMR) Interrupt source disabled Position  */
#define HSMC_IMR_UNDEF_1                      (HSMC_IMR_UNDEF_1_Val << HSMC_IMR_UNDEF_Pos)         /**< (HSMC_IMR) Interrupt source enabled Position  */
#define HSMC_IMR_AWB_Pos                      _U_(22)                                              /**< (HSMC_IMR) Accessing While Busy Interrupt Mask Position */
#define HSMC_IMR_AWB_Msk                      (_U_(0x1) << HSMC_IMR_AWB_Pos)                       /**< (HSMC_IMR) Accessing While Busy Interrupt Mask Mask */
#define HSMC_IMR_AWB(value)                   (HSMC_IMR_AWB_Msk & ((value) << HSMC_IMR_AWB_Pos))  
#define   HSMC_IMR_AWB_0_Val                  _U_(0x0)                                             /**< (HSMC_IMR) Interrupt source disabled  */
#define   HSMC_IMR_AWB_1_Val                  _U_(0x1)                                             /**< (HSMC_IMR) Interrupt source enabled  */
#define HSMC_IMR_AWB_0                        (HSMC_IMR_AWB_0_Val << HSMC_IMR_AWB_Pos)             /**< (HSMC_IMR) Interrupt source disabled Position  */
#define HSMC_IMR_AWB_1                        (HSMC_IMR_AWB_1_Val << HSMC_IMR_AWB_Pos)             /**< (HSMC_IMR) Interrupt source enabled Position  */
#define HSMC_IMR_NFCASE_Pos                   _U_(23)                                              /**< (HSMC_IMR) NFC Access Size Error Interrupt Mask Position */
#define HSMC_IMR_NFCASE_Msk                   (_U_(0x1) << HSMC_IMR_NFCASE_Pos)                    /**< (HSMC_IMR) NFC Access Size Error Interrupt Mask Mask */
#define HSMC_IMR_NFCASE(value)                (HSMC_IMR_NFCASE_Msk & ((value) << HSMC_IMR_NFCASE_Pos))
#define   HSMC_IMR_NFCASE_0_Val               _U_(0x0)                                             /**< (HSMC_IMR) Interrupt source disabled  */
#define   HSMC_IMR_NFCASE_1_Val               _U_(0x1)                                             /**< (HSMC_IMR) Interrupt source enabled  */
#define HSMC_IMR_NFCASE_0                     (HSMC_IMR_NFCASE_0_Val << HSMC_IMR_NFCASE_Pos)       /**< (HSMC_IMR) Interrupt source disabled Position  */
#define HSMC_IMR_NFCASE_1                     (HSMC_IMR_NFCASE_1_Val << HSMC_IMR_NFCASE_Pos)       /**< (HSMC_IMR) Interrupt source enabled Position  */
#define HSMC_IMR_RB_EDGE0_Pos                 _U_(24)                                              /**< (HSMC_IMR) Ready/Busy Line 0 Interrupt Mask Position */
#define HSMC_IMR_RB_EDGE0_Msk                 (_U_(0x1) << HSMC_IMR_RB_EDGE0_Pos)                  /**< (HSMC_IMR) Ready/Busy Line 0 Interrupt Mask Mask */
#define HSMC_IMR_RB_EDGE0(value)              (HSMC_IMR_RB_EDGE0_Msk & ((value) << HSMC_IMR_RB_EDGE0_Pos))
#define   HSMC_IMR_RB_EDGE0_0_Val             _U_(0x0)                                             /**< (HSMC_IMR) Interrupt source disabled  */
#define   HSMC_IMR_RB_EDGE0_1_Val             _U_(0x1)                                             /**< (HSMC_IMR) Interrupt source enabled  */
#define HSMC_IMR_RB_EDGE0_0                   (HSMC_IMR_RB_EDGE0_0_Val << HSMC_IMR_RB_EDGE0_Pos)   /**< (HSMC_IMR) Interrupt source disabled Position  */
#define HSMC_IMR_RB_EDGE0_1                   (HSMC_IMR_RB_EDGE0_1_Val << HSMC_IMR_RB_EDGE0_Pos)   /**< (HSMC_IMR) Interrupt source enabled Position  */
#define HSMC_IMR_Msk                          _U_(0x01F30030)                                      /**< (HSMC_IMR) Register Mask  */

#define HSMC_IMR_RB_EDGE_Pos                  _U_(24)                                              /**< (HSMC_IMR Position) Ready/Busy Line x Interrupt Mask */
#define HSMC_IMR_RB_EDGE_Msk                  (_U_(0x1) << HSMC_IMR_RB_EDGE_Pos)                   /**< (HSMC_IMR Mask) RB_EDGE */
#define HSMC_IMR_RB_EDGE(value)               (HSMC_IMR_RB_EDGE_Msk & ((value) << HSMC_IMR_RB_EDGE_Pos)) 

/* -------- HSMC_ADDR : (SMC Offset: 0x18) (R/W 32) NFC Address Cycle Zero Register -------- */
#define HSMC_ADDR_RESETVALUE                  _U_(0x00)                                            /**<  (HSMC_ADDR) NFC Address Cycle Zero Register  Reset Value */

#define HSMC_ADDR_ADDR_CYCLE0_Pos             _U_(0)                                               /**< (HSMC_ADDR) NAND Flash Array Address Cycle 0 Position */
#define HSMC_ADDR_ADDR_CYCLE0_Msk             (_U_(0xFF) << HSMC_ADDR_ADDR_CYCLE0_Pos)             /**< (HSMC_ADDR) NAND Flash Array Address Cycle 0 Mask */
#define HSMC_ADDR_ADDR_CYCLE0(value)          (HSMC_ADDR_ADDR_CYCLE0_Msk & ((value) << HSMC_ADDR_ADDR_CYCLE0_Pos))
#define HSMC_ADDR_Msk                         _U_(0x000000FF)                                      /**< (HSMC_ADDR) Register Mask  */


/* -------- HSMC_BANK : (SMC Offset: 0x1C) (R/W 32) Bank Address Register -------- */
#define HSMC_BANK_RESETVALUE                  _U_(0x00)                                            /**<  (HSMC_BANK) Bank Address Register  Reset Value */

#define HSMC_BANK_BANK_Pos                    _U_(0)                                               /**< (HSMC_BANK) Bank Identifier Position */
#define HSMC_BANK_BANK_Msk                    (_U_(0x1) << HSMC_BANK_BANK_Pos)                     /**< (HSMC_BANK) Bank Identifier Mask */
#define HSMC_BANK_BANK(value)                 (HSMC_BANK_BANK_Msk & ((value) << HSMC_BANK_BANK_Pos))
#define   HSMC_BANK_BANK_0_Val                _U_(0x0)                                             /**< (HSMC_BANK) Bank 0 is used.  */
#define   HSMC_BANK_BANK_1_Val                _U_(0x1)                                             /**< (HSMC_BANK) Bank 1 is used.  */
#define HSMC_BANK_BANK_0                      (HSMC_BANK_BANK_0_Val << HSMC_BANK_BANK_Pos)         /**< (HSMC_BANK) Bank 0 is used. Position  */
#define HSMC_BANK_BANK_1                      (HSMC_BANK_BANK_1_Val << HSMC_BANK_BANK_Pos)         /**< (HSMC_BANK) Bank 1 is used. Position  */
#define HSMC_BANK_Msk                         _U_(0x00000001)                                      /**< (HSMC_BANK) Register Mask  */


/* -------- HSMC_PMECCFG : (SMC Offset: 0x70) (R/W 32) PMECC Configuration Register -------- */
#define HSMC_PMECCFG_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_PMECCFG) PMECC Configuration Register  Reset Value */

#define HSMC_PMECCFG_BCH_ERR_Pos              _U_(0)                                               /**< (HSMC_PMECCFG) Error Correcting Capability Position */
#define HSMC_PMECCFG_BCH_ERR_Msk              (_U_(0x7) << HSMC_PMECCFG_BCH_ERR_Pos)               /**< (HSMC_PMECCFG) Error Correcting Capability Mask */
#define HSMC_PMECCFG_BCH_ERR(value)           (HSMC_PMECCFG_BCH_ERR_Msk & ((value) << HSMC_PMECCFG_BCH_ERR_Pos))
#define   HSMC_PMECCFG_BCH_ERR_BCH_ERR2_Val   _U_(0x0)                                             /**< (HSMC_PMECCFG) 2 errors  */
#define   HSMC_PMECCFG_BCH_ERR_BCH_ERR4_Val   _U_(0x1)                                             /**< (HSMC_PMECCFG) 4 errors  */
#define   HSMC_PMECCFG_BCH_ERR_BCH_ERR8_Val   _U_(0x2)                                             /**< (HSMC_PMECCFG) 8 errors  */
#define   HSMC_PMECCFG_BCH_ERR_BCH_ERR12_Val  _U_(0x3)                                             /**< (HSMC_PMECCFG) 12 errors  */
#define   HSMC_PMECCFG_BCH_ERR_BCH_ERR24_Val  _U_(0x4)                                             /**< (HSMC_PMECCFG) 24 errors  */
#define   HSMC_PMECCFG_BCH_ERR_BCH_ERR32_Val  _U_(0x5)                                             /**< (HSMC_PMECCFG) 32 errors  */
#define HSMC_PMECCFG_BCH_ERR_BCH_ERR2         (HSMC_PMECCFG_BCH_ERR_BCH_ERR2_Val << HSMC_PMECCFG_BCH_ERR_Pos) /**< (HSMC_PMECCFG) 2 errors Position  */
#define HSMC_PMECCFG_BCH_ERR_BCH_ERR4         (HSMC_PMECCFG_BCH_ERR_BCH_ERR4_Val << HSMC_PMECCFG_BCH_ERR_Pos) /**< (HSMC_PMECCFG) 4 errors Position  */
#define HSMC_PMECCFG_BCH_ERR_BCH_ERR8         (HSMC_PMECCFG_BCH_ERR_BCH_ERR8_Val << HSMC_PMECCFG_BCH_ERR_Pos) /**< (HSMC_PMECCFG) 8 errors Position  */
#define HSMC_PMECCFG_BCH_ERR_BCH_ERR12        (HSMC_PMECCFG_BCH_ERR_BCH_ERR12_Val << HSMC_PMECCFG_BCH_ERR_Pos) /**< (HSMC_PMECCFG) 12 errors Position  */
#define HSMC_PMECCFG_BCH_ERR_BCH_ERR24        (HSMC_PMECCFG_BCH_ERR_BCH_ERR24_Val << HSMC_PMECCFG_BCH_ERR_Pos) /**< (HSMC_PMECCFG) 24 errors Position  */
#define HSMC_PMECCFG_BCH_ERR_BCH_ERR32        (HSMC_PMECCFG_BCH_ERR_BCH_ERR32_Val << HSMC_PMECCFG_BCH_ERR_Pos) /**< (HSMC_PMECCFG) 32 errors Position  */
#define HSMC_PMECCFG_SECTORSZ_Pos             _U_(4)                                               /**< (HSMC_PMECCFG) Sector Size Position */
#define HSMC_PMECCFG_SECTORSZ_Msk             (_U_(0x1) << HSMC_PMECCFG_SECTORSZ_Pos)              /**< (HSMC_PMECCFG) Sector Size Mask */
#define HSMC_PMECCFG_SECTORSZ(value)          (HSMC_PMECCFG_SECTORSZ_Msk & ((value) << HSMC_PMECCFG_SECTORSZ_Pos))
#define   HSMC_PMECCFG_SECTORSZ_0_Val         _U_(0x0)                                             /**< (HSMC_PMECCFG) The ECC computation is based on a sector of 512 bytes.  */
#define   HSMC_PMECCFG_SECTORSZ_1_Val         _U_(0x1)                                             /**< (HSMC_PMECCFG) The ECC computation is based on a sector of 1024 bytes.  */
#define HSMC_PMECCFG_SECTORSZ_0               (HSMC_PMECCFG_SECTORSZ_0_Val << HSMC_PMECCFG_SECTORSZ_Pos) /**< (HSMC_PMECCFG) The ECC computation is based on a sector of 512 bytes. Position  */
#define HSMC_PMECCFG_SECTORSZ_1               (HSMC_PMECCFG_SECTORSZ_1_Val << HSMC_PMECCFG_SECTORSZ_Pos) /**< (HSMC_PMECCFG) The ECC computation is based on a sector of 1024 bytes. Position  */
#define HSMC_PMECCFG_PAGESIZE_Pos             _U_(8)                                               /**< (HSMC_PMECCFG) Number of Sectors in the Page Position */
#define HSMC_PMECCFG_PAGESIZE_Msk             (_U_(0x3) << HSMC_PMECCFG_PAGESIZE_Pos)              /**< (HSMC_PMECCFG) Number of Sectors in the Page Mask */
#define HSMC_PMECCFG_PAGESIZE(value)          (HSMC_PMECCFG_PAGESIZE_Msk & ((value) << HSMC_PMECCFG_PAGESIZE_Pos))
#define   HSMC_PMECCFG_PAGESIZE_PAGESIZE_1SEC_Val _U_(0x0)                                             /**< (HSMC_PMECCFG) 1 sector for main area (512 or 1024 bytes)  */
#define   HSMC_PMECCFG_PAGESIZE_PAGESIZE_2SEC_Val _U_(0x1)                                             /**< (HSMC_PMECCFG) 2 sectors for main area (1024 or 2048 bytes)  */
#define   HSMC_PMECCFG_PAGESIZE_PAGESIZE_4SEC_Val _U_(0x2)                                             /**< (HSMC_PMECCFG) 4 sectors for main area (2048 or 4096 bytes)  */
#define   HSMC_PMECCFG_PAGESIZE_PAGESIZE_8SEC_Val _U_(0x3)                                             /**< (HSMC_PMECCFG) 8 sectors for main area (4096 or 8192 bytes)  */
#define HSMC_PMECCFG_PAGESIZE_PAGESIZE_1SEC   (HSMC_PMECCFG_PAGESIZE_PAGESIZE_1SEC_Val << HSMC_PMECCFG_PAGESIZE_Pos) /**< (HSMC_PMECCFG) 1 sector for main area (512 or 1024 bytes) Position  */
#define HSMC_PMECCFG_PAGESIZE_PAGESIZE_2SEC   (HSMC_PMECCFG_PAGESIZE_PAGESIZE_2SEC_Val << HSMC_PMECCFG_PAGESIZE_Pos) /**< (HSMC_PMECCFG) 2 sectors for main area (1024 or 2048 bytes) Position  */
#define HSMC_PMECCFG_PAGESIZE_PAGESIZE_4SEC   (HSMC_PMECCFG_PAGESIZE_PAGESIZE_4SEC_Val << HSMC_PMECCFG_PAGESIZE_Pos) /**< (HSMC_PMECCFG) 4 sectors for main area (2048 or 4096 bytes) Position  */
#define HSMC_PMECCFG_PAGESIZE_PAGESIZE_8SEC   (HSMC_PMECCFG_PAGESIZE_PAGESIZE_8SEC_Val << HSMC_PMECCFG_PAGESIZE_Pos) /**< (HSMC_PMECCFG) 8 sectors for main area (4096 or 8192 bytes) Position  */
#define HSMC_PMECCFG_NANDWR_Pos               _U_(12)                                              /**< (HSMC_PMECCFG) NAND Write Access Position */
#define HSMC_PMECCFG_NANDWR_Msk               (_U_(0x1) << HSMC_PMECCFG_NANDWR_Pos)                /**< (HSMC_PMECCFG) NAND Write Access Mask */
#define HSMC_PMECCFG_NANDWR(value)            (HSMC_PMECCFG_NANDWR_Msk & ((value) << HSMC_PMECCFG_NANDWR_Pos))
#define   HSMC_PMECCFG_NANDWR_0_Val           _U_(0x0)                                             /**< (HSMC_PMECCFG) NAND read access  */
#define   HSMC_PMECCFG_NANDWR_1_Val           _U_(0x1)                                             /**< (HSMC_PMECCFG) NAND write access  */
#define HSMC_PMECCFG_NANDWR_0                 (HSMC_PMECCFG_NANDWR_0_Val << HSMC_PMECCFG_NANDWR_Pos) /**< (HSMC_PMECCFG) NAND read access Position  */
#define HSMC_PMECCFG_NANDWR_1                 (HSMC_PMECCFG_NANDWR_1_Val << HSMC_PMECCFG_NANDWR_Pos) /**< (HSMC_PMECCFG) NAND write access Position  */
#define HSMC_PMECCFG_SPAREEN_Pos              _U_(16)                                              /**< (HSMC_PMECCFG) Spare Enable Position */
#define HSMC_PMECCFG_SPAREEN_Msk              (_U_(0x1) << HSMC_PMECCFG_SPAREEN_Pos)               /**< (HSMC_PMECCFG) Spare Enable Mask */
#define HSMC_PMECCFG_SPAREEN(value)           (HSMC_PMECCFG_SPAREEN_Msk & ((value) << HSMC_PMECCFG_SPAREEN_Pos))
#define   HSMC_PMECCFG_SPAREEN_0_Val          _U_(0x0)                                             /**< (HSMC_PMECCFG) The spare area is skipped  */
#define   HSMC_PMECCFG_SPAREEN_0_Val          _U_(0x0)                                             /**< (HSMC_PMECCFG) The spare area is skipped.  */
#define   HSMC_PMECCFG_SPAREEN_1_Val          _U_(0x1)                                             /**< (HSMC_PMECCFG) The spare area is protected with the last sector of data.  */
#define   HSMC_PMECCFG_SPAREEN_1_Val          _U_(0x1)                                             /**< (HSMC_PMECCFG) The spare area contains protected data or only redundancy information.  */
#define HSMC_PMECCFG_SPAREEN_0                (HSMC_PMECCFG_SPAREEN_0_Val << HSMC_PMECCFG_SPAREEN_Pos) /**< (HSMC_PMECCFG) The spare area is skipped Position  */
#define HSMC_PMECCFG_SPAREEN_0                (HSMC_PMECCFG_SPAREEN_0_Val << HSMC_PMECCFG_SPAREEN_Pos) /**< (HSMC_PMECCFG) The spare area is skipped. Position  */
#define HSMC_PMECCFG_SPAREEN_1                (HSMC_PMECCFG_SPAREEN_1_Val << HSMC_PMECCFG_SPAREEN_Pos) /**< (HSMC_PMECCFG) The spare area is protected with the last sector of data. Position  */
#define HSMC_PMECCFG_SPAREEN_1                (HSMC_PMECCFG_SPAREEN_1_Val << HSMC_PMECCFG_SPAREEN_Pos) /**< (HSMC_PMECCFG) The spare area contains protected data or only redundancy information. Position  */
#define HSMC_PMECCFG_AUTO_Pos                 _U_(20)                                              /**< (HSMC_PMECCFG) Automatic Mode Enable Position */
#define HSMC_PMECCFG_AUTO_Msk                 (_U_(0x1) << HSMC_PMECCFG_AUTO_Pos)                  /**< (HSMC_PMECCFG) Automatic Mode Enable Mask */
#define HSMC_PMECCFG_AUTO(value)              (HSMC_PMECCFG_AUTO_Msk & ((value) << HSMC_PMECCFG_AUTO_Pos))
#define   HSMC_PMECCFG_AUTO_0_Val             _U_(0x0)                                             /**< (HSMC_PMECCFG) Indicates that the spare area is not protected. In that case, the ECC computation takes into account the ECC area located in the spare area (within the start address and the end address).  */
#define   HSMC_PMECCFG_AUTO_1_Val             _U_(0x1)                                             /**< (HSMC_PMECCFG) Indicates that the spare area is error-protected. In this case, the ECC computation takes into account the whole spare area minus the ECC area in the ECC computation operation.  */
#define HSMC_PMECCFG_AUTO_0                   (HSMC_PMECCFG_AUTO_0_Val << HSMC_PMECCFG_AUTO_Pos)   /**< (HSMC_PMECCFG) Indicates that the spare area is not protected. In that case, the ECC computation takes into account the ECC area located in the spare area (within the start address and the end address). Position  */
#define HSMC_PMECCFG_AUTO_1                   (HSMC_PMECCFG_AUTO_1_Val << HSMC_PMECCFG_AUTO_Pos)   /**< (HSMC_PMECCFG) Indicates that the spare area is error-protected. In this case, the ECC computation takes into account the whole spare area minus the ECC area in the ECC computation operation. Position  */
#define HSMC_PMECCFG_Msk                      _U_(0x00111317)                                      /**< (HSMC_PMECCFG) Register Mask  */


/* -------- HSMC_PMECCSAREA : (SMC Offset: 0x74) (R/W 32) PMECC Spare Area Size Register -------- */
#define HSMC_PMECCSAREA_RESETVALUE            _U_(0x00)                                            /**<  (HSMC_PMECCSAREA) PMECC Spare Area Size Register  Reset Value */

#define HSMC_PMECCSAREA_SPARESIZE_Pos         _U_(0)                                               /**< (HSMC_PMECCSAREA) Spare Area Size Position */
#define HSMC_PMECCSAREA_SPARESIZE_Msk         (_U_(0x1FF) << HSMC_PMECCSAREA_SPARESIZE_Pos)        /**< (HSMC_PMECCSAREA) Spare Area Size Mask */
#define HSMC_PMECCSAREA_SPARESIZE(value)      (HSMC_PMECCSAREA_SPARESIZE_Msk & ((value) << HSMC_PMECCSAREA_SPARESIZE_Pos))
#define HSMC_PMECCSAREA_Msk                   _U_(0x000001FF)                                      /**< (HSMC_PMECCSAREA) Register Mask  */


/* -------- HSMC_PMECCSADDR : (SMC Offset: 0x78) (R/W 32) PMECC Start Address Register -------- */
#define HSMC_PMECCSADDR_RESETVALUE            _U_(0x00)                                            /**<  (HSMC_PMECCSADDR) PMECC Start Address Register  Reset Value */

#define HSMC_PMECCSADDR_STARTADDR_Pos         _U_(0)                                               /**< (HSMC_PMECCSADDR) ECC Area Start Address Position */
#define HSMC_PMECCSADDR_STARTADDR_Msk         (_U_(0x1FF) << HSMC_PMECCSADDR_STARTADDR_Pos)        /**< (HSMC_PMECCSADDR) ECC Area Start Address Mask */
#define HSMC_PMECCSADDR_STARTADDR(value)      (HSMC_PMECCSADDR_STARTADDR_Msk & ((value) << HSMC_PMECCSADDR_STARTADDR_Pos))
#define HSMC_PMECCSADDR_Msk                   _U_(0x000001FF)                                      /**< (HSMC_PMECCSADDR) Register Mask  */


/* -------- HSMC_PMECCEADDR : (SMC Offset: 0x7C) (R/W 32) PMECC End Address Register -------- */
#define HSMC_PMECCEADDR_RESETVALUE            _U_(0x00)                                            /**<  (HSMC_PMECCEADDR) PMECC End Address Register  Reset Value */

#define HSMC_PMECCEADDR_ENDADDR_Pos           _U_(0)                                               /**< (HSMC_PMECCEADDR) ECC Area End Address Position */
#define HSMC_PMECCEADDR_ENDADDR_Msk           (_U_(0x1FF) << HSMC_PMECCEADDR_ENDADDR_Pos)          /**< (HSMC_PMECCEADDR) ECC Area End Address Mask */
#define HSMC_PMECCEADDR_ENDADDR(value)        (HSMC_PMECCEADDR_ENDADDR_Msk & ((value) << HSMC_PMECCEADDR_ENDADDR_Pos))
#define HSMC_PMECCEADDR_Msk                   _U_(0x000001FF)                                      /**< (HSMC_PMECCEADDR) Register Mask  */


/* -------- HSMC_PMECCTRL : (SMC Offset: 0x84) ( /W 32) PMECC Control Register -------- */
#define HSMC_PMECCTRL_RST_Pos                 _U_(0)                                               /**< (HSMC_PMECCTRL) Reset the PMECC Module Position */
#define HSMC_PMECCTRL_RST_Msk                 (_U_(0x1) << HSMC_PMECCTRL_RST_Pos)                  /**< (HSMC_PMECCTRL) Reset the PMECC Module Mask */
#define HSMC_PMECCTRL_RST(value)              (HSMC_PMECCTRL_RST_Msk & ((value) << HSMC_PMECCTRL_RST_Pos))
#define   HSMC_PMECCTRL_RST_0_Val             _U_(0x0)                                             /**< (HSMC_PMECCTRL) No effect  */
#define   HSMC_PMECCTRL_RST_1_Val             _U_(0x1)                                             /**< (HSMC_PMECCTRL) Reset the PMECC controller.  */
#define HSMC_PMECCTRL_RST_0                   (HSMC_PMECCTRL_RST_0_Val << HSMC_PMECCTRL_RST_Pos)   /**< (HSMC_PMECCTRL) No effect Position  */
#define HSMC_PMECCTRL_RST_1                   (HSMC_PMECCTRL_RST_1_Val << HSMC_PMECCTRL_RST_Pos)   /**< (HSMC_PMECCTRL) Reset the PMECC controller. Position  */
#define HSMC_PMECCTRL_DATA_Pos                _U_(1)                                               /**< (HSMC_PMECCTRL) Start a Data Phase Position */
#define HSMC_PMECCTRL_DATA_Msk                (_U_(0x1) << HSMC_PMECCTRL_DATA_Pos)                 /**< (HSMC_PMECCTRL) Start a Data Phase Mask */
#define HSMC_PMECCTRL_DATA(value)             (HSMC_PMECCTRL_DATA_Msk & ((value) << HSMC_PMECCTRL_DATA_Pos))
#define   HSMC_PMECCTRL_DATA_0_Val            _U_(0x0)                                             /**< (HSMC_PMECCTRL) No effect  */
#define   HSMC_PMECCTRL_DATA_1_Val            _U_(0x1)                                             /**< (HSMC_PMECCTRL) The PMECC controller enters a Data phase.  */
#define HSMC_PMECCTRL_DATA_0                  (HSMC_PMECCTRL_DATA_0_Val << HSMC_PMECCTRL_DATA_Pos) /**< (HSMC_PMECCTRL) No effect Position  */
#define HSMC_PMECCTRL_DATA_1                  (HSMC_PMECCTRL_DATA_1_Val << HSMC_PMECCTRL_DATA_Pos) /**< (HSMC_PMECCTRL) The PMECC controller enters a Data phase. Position  */
#define HSMC_PMECCTRL_USER_Pos                _U_(2)                                               /**< (HSMC_PMECCTRL) Start a User Mode Phase Position */
#define HSMC_PMECCTRL_USER_Msk                (_U_(0x1) << HSMC_PMECCTRL_USER_Pos)                 /**< (HSMC_PMECCTRL) Start a User Mode Phase Mask */
#define HSMC_PMECCTRL_USER(value)             (HSMC_PMECCTRL_USER_Msk & ((value) << HSMC_PMECCTRL_USER_Pos))
#define   HSMC_PMECCTRL_USER_0_Val            _U_(0x0)                                             /**< (HSMC_PMECCTRL) No effect  */
#define   HSMC_PMECCTRL_USER_1_Val            _U_(0x1)                                             /**< (HSMC_PMECCTRL) The PMECC controller enters a User mode phase.  */
#define HSMC_PMECCTRL_USER_0                  (HSMC_PMECCTRL_USER_0_Val << HSMC_PMECCTRL_USER_Pos) /**< (HSMC_PMECCTRL) No effect Position  */
#define HSMC_PMECCTRL_USER_1                  (HSMC_PMECCTRL_USER_1_Val << HSMC_PMECCTRL_USER_Pos) /**< (HSMC_PMECCTRL) The PMECC controller enters a User mode phase. Position  */
#define HSMC_PMECCTRL_ENABLE_Pos              _U_(4)                                               /**< (HSMC_PMECCTRL) PMECC Enable Position */
#define HSMC_PMECCTRL_ENABLE_Msk              (_U_(0x1) << HSMC_PMECCTRL_ENABLE_Pos)               /**< (HSMC_PMECCTRL) PMECC Enable Mask */
#define HSMC_PMECCTRL_ENABLE(value)           (HSMC_PMECCTRL_ENABLE_Msk & ((value) << HSMC_PMECCTRL_ENABLE_Pos))
#define   HSMC_PMECCTRL_ENABLE_0_Val          _U_(0x0)                                             /**< (HSMC_PMECCTRL) No effect  */
#define   HSMC_PMECCTRL_ENABLE_1_Val          _U_(0x1)                                             /**< (HSMC_PMECCTRL) Enable the PMECC controller.  */
#define HSMC_PMECCTRL_ENABLE_0                (HSMC_PMECCTRL_ENABLE_0_Val << HSMC_PMECCTRL_ENABLE_Pos) /**< (HSMC_PMECCTRL) No effect Position  */
#define HSMC_PMECCTRL_ENABLE_1                (HSMC_PMECCTRL_ENABLE_1_Val << HSMC_PMECCTRL_ENABLE_Pos) /**< (HSMC_PMECCTRL) Enable the PMECC controller. Position  */
#define HSMC_PMECCTRL_DISABLE_Pos             _U_(5)                                               /**< (HSMC_PMECCTRL) PMECC Enable Position */
#define HSMC_PMECCTRL_DISABLE_Msk             (_U_(0x1) << HSMC_PMECCTRL_DISABLE_Pos)              /**< (HSMC_PMECCTRL) PMECC Enable Mask */
#define HSMC_PMECCTRL_DISABLE(value)          (HSMC_PMECCTRL_DISABLE_Msk & ((value) << HSMC_PMECCTRL_DISABLE_Pos))
#define   HSMC_PMECCTRL_DISABLE_0_Val         _U_(0x0)                                             /**< (HSMC_PMECCTRL) No effect  */
#define   HSMC_PMECCTRL_DISABLE_1_Val         _U_(0x1)                                             /**< (HSMC_PMECCTRL) Disable the PMECC controller.  */
#define HSMC_PMECCTRL_DISABLE_0               (HSMC_PMECCTRL_DISABLE_0_Val << HSMC_PMECCTRL_DISABLE_Pos) /**< (HSMC_PMECCTRL) No effect Position  */
#define HSMC_PMECCTRL_DISABLE_1               (HSMC_PMECCTRL_DISABLE_1_Val << HSMC_PMECCTRL_DISABLE_Pos) /**< (HSMC_PMECCTRL) Disable the PMECC controller. Position  */
#define HSMC_PMECCTRL_Msk                     _U_(0x00000037)                                      /**< (HSMC_PMECCTRL) Register Mask  */


/* -------- HSMC_PMECCSR : (SMC Offset: 0x88) ( R/ 32) PMECC Status Register -------- */
#define HSMC_PMECCSR_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_PMECCSR) PMECC Status Register  Reset Value */

#define HSMC_PMECCSR_BUSY_Pos                 _U_(0)                                               /**< (HSMC_PMECCSR) The kernel of the PMECC is busy Position */
#define HSMC_PMECCSR_BUSY_Msk                 (_U_(0x1) << HSMC_PMECCSR_BUSY_Pos)                  /**< (HSMC_PMECCSR) The kernel of the PMECC is busy Mask */
#define HSMC_PMECCSR_BUSY(value)              (HSMC_PMECCSR_BUSY_Msk & ((value) << HSMC_PMECCSR_BUSY_Pos))
#define   HSMC_PMECCSR_BUSY_0_Val             _U_(0x0)                                             /**< (HSMC_PMECCSR) PMECC controller finite state machine reached idle state  */
#define   HSMC_PMECCSR_BUSY_1_Val             _U_(0x1)                                             /**< (HSMC_PMECCSR) PMECC controller finite state machine is processing the incoming byte stream  */
#define HSMC_PMECCSR_BUSY_0                   (HSMC_PMECCSR_BUSY_0_Val << HSMC_PMECCSR_BUSY_Pos)   /**< (HSMC_PMECCSR) PMECC controller finite state machine reached idle state Position  */
#define HSMC_PMECCSR_BUSY_1                   (HSMC_PMECCSR_BUSY_1_Val << HSMC_PMECCSR_BUSY_Pos)   /**< (HSMC_PMECCSR) PMECC controller finite state machine is processing the incoming byte stream Position  */
#define HSMC_PMECCSR_ENABLE_Pos               _U_(4)                                               /**< (HSMC_PMECCSR) PMECC Enable bit Position */
#define HSMC_PMECCSR_ENABLE_Msk               (_U_(0x1) << HSMC_PMECCSR_ENABLE_Pos)                /**< (HSMC_PMECCSR) PMECC Enable bit Mask */
#define HSMC_PMECCSR_ENABLE(value)            (HSMC_PMECCSR_ENABLE_Msk & ((value) << HSMC_PMECCSR_ENABLE_Pos))
#define   HSMC_PMECCSR_ENABLE_0_Val           _U_(0x0)                                             /**< (HSMC_PMECCSR) PMECC controller disabled  */
#define   HSMC_PMECCSR_ENABLE_1_Val           _U_(0x1)                                             /**< (HSMC_PMECCSR) PMECC controller enabled  */
#define HSMC_PMECCSR_ENABLE_0                 (HSMC_PMECCSR_ENABLE_0_Val << HSMC_PMECCSR_ENABLE_Pos) /**< (HSMC_PMECCSR) PMECC controller disabled Position  */
#define HSMC_PMECCSR_ENABLE_1                 (HSMC_PMECCSR_ENABLE_1_Val << HSMC_PMECCSR_ENABLE_Pos) /**< (HSMC_PMECCSR) PMECC controller enabled Position  */
#define HSMC_PMECCSR_Msk                      _U_(0x00000011)                                      /**< (HSMC_PMECCSR) Register Mask  */


/* -------- HSMC_PMECCIER : (SMC Offset: 0x8C) ( /W 32) PMECC Interrupt Enable register -------- */
#define HSMC_PMECCIER_ERRIE_Pos               _U_(0)                                               /**< (HSMC_PMECCIER) Error Interrupt Enable Position */
#define HSMC_PMECCIER_ERRIE_Msk               (_U_(0x1) << HSMC_PMECCIER_ERRIE_Pos)                /**< (HSMC_PMECCIER) Error Interrupt Enable Mask */
#define HSMC_PMECCIER_ERRIE(value)            (HSMC_PMECCIER_ERRIE_Msk & ((value) << HSMC_PMECCIER_ERRIE_Pos))
#define   HSMC_PMECCIER_ERRIE_0_Val           _U_(0x0)                                             /**< (HSMC_PMECCIER) No effect  */
#define   HSMC_PMECCIER_ERRIE_1_Val           _U_(0x1)                                             /**< (HSMC_PMECCIER) The Multibit Error interrupt is enabled. An interrupt will be raised if at least one error is detected in at least one sector.  */
#define HSMC_PMECCIER_ERRIE_0                 (HSMC_PMECCIER_ERRIE_0_Val << HSMC_PMECCIER_ERRIE_Pos) /**< (HSMC_PMECCIER) No effect Position  */
#define HSMC_PMECCIER_ERRIE_1                 (HSMC_PMECCIER_ERRIE_1_Val << HSMC_PMECCIER_ERRIE_Pos) /**< (HSMC_PMECCIER) The Multibit Error interrupt is enabled. An interrupt will be raised if at least one error is detected in at least one sector. Position  */
#define HSMC_PMECCIER_Msk                     _U_(0x00000001)                                      /**< (HSMC_PMECCIER) Register Mask  */


/* -------- HSMC_PMECCIDR : (SMC Offset: 0x90) ( /W 32) PMECC Interrupt Disable Register -------- */
#define HSMC_PMECCIDR_ERRID_Pos               _U_(0)                                               /**< (HSMC_PMECCIDR) Error Interrupt Disable Position */
#define HSMC_PMECCIDR_ERRID_Msk               (_U_(0x1) << HSMC_PMECCIDR_ERRID_Pos)                /**< (HSMC_PMECCIDR) Error Interrupt Disable Mask */
#define HSMC_PMECCIDR_ERRID(value)            (HSMC_PMECCIDR_ERRID_Msk & ((value) << HSMC_PMECCIDR_ERRID_Pos))
#define   HSMC_PMECCIDR_ERRID_0_Val           _U_(0x0)                                             /**< (HSMC_PMECCIDR) No effect  */
#define   HSMC_PMECCIDR_ERRID_1_Val           _U_(0x1)                                             /**< (HSMC_PMECCIDR) Multibit Error interrupt disabled  */
#define HSMC_PMECCIDR_ERRID_0                 (HSMC_PMECCIDR_ERRID_0_Val << HSMC_PMECCIDR_ERRID_Pos) /**< (HSMC_PMECCIDR) No effect Position  */
#define HSMC_PMECCIDR_ERRID_1                 (HSMC_PMECCIDR_ERRID_1_Val << HSMC_PMECCIDR_ERRID_Pos) /**< (HSMC_PMECCIDR) Multibit Error interrupt disabled Position  */
#define HSMC_PMECCIDR_Msk                     _U_(0x00000001)                                      /**< (HSMC_PMECCIDR) Register Mask  */


/* -------- HSMC_PMECCIMR : (SMC Offset: 0x94) ( R/ 32) PMECC Interrupt Mask Register -------- */
#define HSMC_PMECCIMR_RESETVALUE              _U_(0x00)                                            /**<  (HSMC_PMECCIMR) PMECC Interrupt Mask Register  Reset Value */

#define HSMC_PMECCIMR_ERRIM_Pos               _U_(0)                                               /**< (HSMC_PMECCIMR) Error Interrupt Mask Position */
#define HSMC_PMECCIMR_ERRIM_Msk               (_U_(0x1) << HSMC_PMECCIMR_ERRIM_Pos)                /**< (HSMC_PMECCIMR) Error Interrupt Mask Mask */
#define HSMC_PMECCIMR_ERRIM(value)            (HSMC_PMECCIMR_ERRIM_Msk & ((value) << HSMC_PMECCIMR_ERRIM_Pos))
#define   HSMC_PMECCIMR_ERRIM_0_Val           _U_(0x0)                                             /**< (HSMC_PMECCIMR) Multibit Error disabled  */
#define   HSMC_PMECCIMR_ERRIM_1_Val           _U_(0x1)                                             /**< (HSMC_PMECCIMR) Multibit Error enabled  */
#define HSMC_PMECCIMR_ERRIM_0                 (HSMC_PMECCIMR_ERRIM_0_Val << HSMC_PMECCIMR_ERRIM_Pos) /**< (HSMC_PMECCIMR) Multibit Error disabled Position  */
#define HSMC_PMECCIMR_ERRIM_1                 (HSMC_PMECCIMR_ERRIM_1_Val << HSMC_PMECCIMR_ERRIM_Pos) /**< (HSMC_PMECCIMR) Multibit Error enabled Position  */
#define HSMC_PMECCIMR_Msk                     _U_(0x00000001)                                      /**< (HSMC_PMECCIMR) Register Mask  */


/* -------- HSMC_PMECCISR : (SMC Offset: 0x98) ( R/ 32) PMECC Interrupt Status Register -------- */
#define HSMC_PMECCISR_RESETVALUE              _U_(0x00)                                            /**<  (HSMC_PMECCISR) PMECC Interrupt Status Register  Reset Value */

#define HSMC_PMECCISR_ERRIS_Pos               _U_(0)                                               /**< (HSMC_PMECCISR) Error Interrupt Status Register Position */
#define HSMC_PMECCISR_ERRIS_Msk               (_U_(0xFF) << HSMC_PMECCISR_ERRIS_Pos)               /**< (HSMC_PMECCISR) Error Interrupt Status Register Mask */
#define HSMC_PMECCISR_ERRIS(value)            (HSMC_PMECCISR_ERRIS_Msk & ((value) << HSMC_PMECCISR_ERRIS_Pos))
#define HSMC_PMECCISR_Msk                     _U_(0x000000FF)                                      /**< (HSMC_PMECCISR) Register Mask  */


/* -------- HSMC_ELCFG : (SMC Offset: 0x500) (R/W 32) PMECC Error Location Configuration Register -------- */
#define HSMC_ELCFG_RESETVALUE                 _U_(0x00)                                            /**<  (HSMC_ELCFG) PMECC Error Location Configuration Register  Reset Value */

#define HSMC_ELCFG_SECTORSZ_Pos               _U_(0)                                               /**< (HSMC_ELCFG) Sector Size Position */
#define HSMC_ELCFG_SECTORSZ_Msk               (_U_(0x1) << HSMC_ELCFG_SECTORSZ_Pos)                /**< (HSMC_ELCFG) Sector Size Mask */
#define HSMC_ELCFG_SECTORSZ(value)            (HSMC_ELCFG_SECTORSZ_Msk & ((value) << HSMC_ELCFG_SECTORSZ_Pos))
#define   HSMC_ELCFG_SECTORSZ_0_Val           _U_(0x0)                                             /**< (HSMC_ELCFG) The ECC computation is based on a 512 bytes sector.  */
#define   HSMC_ELCFG_SECTORSZ_1_Val           _U_(0x1)                                             /**< (HSMC_ELCFG) The ECC computation is based on a 1024 bytes sector.  */
#define HSMC_ELCFG_SECTORSZ_0                 (HSMC_ELCFG_SECTORSZ_0_Val << HSMC_ELCFG_SECTORSZ_Pos) /**< (HSMC_ELCFG) The ECC computation is based on a 512 bytes sector. Position  */
#define HSMC_ELCFG_SECTORSZ_1                 (HSMC_ELCFG_SECTORSZ_1_Val << HSMC_ELCFG_SECTORSZ_Pos) /**< (HSMC_ELCFG) The ECC computation is based on a 1024 bytes sector. Position  */
#define HSMC_ELCFG_ERRNUM_Pos                 _U_(16)                                              /**< (HSMC_ELCFG) Number of Errors Position */
#define HSMC_ELCFG_ERRNUM_Msk                 (_U_(0x1F) << HSMC_ELCFG_ERRNUM_Pos)                 /**< (HSMC_ELCFG) Number of Errors Mask */
#define HSMC_ELCFG_ERRNUM(value)              (HSMC_ELCFG_ERRNUM_Msk & ((value) << HSMC_ELCFG_ERRNUM_Pos))
#define HSMC_ELCFG_Msk                        _U_(0x001F0001)                                      /**< (HSMC_ELCFG) Register Mask  */


/* -------- HSMC_ELPRIM : (SMC Offset: 0x504) ( R/ 32) PMECC Error Location Primitive Register -------- */
#define HSMC_ELPRIM_RESETVALUE                _U_(0x401A)                                          /**<  (HSMC_ELPRIM) PMECC Error Location Primitive Register  Reset Value */

#define HSMC_ELPRIM_PRIMITIV_Pos              _U_(0)                                               /**< (HSMC_ELPRIM) Primitive Polynomial Position */
#define HSMC_ELPRIM_PRIMITIV_Msk              (_U_(0xFFFF) << HSMC_ELPRIM_PRIMITIV_Pos)            /**< (HSMC_ELPRIM) Primitive Polynomial Mask */
#define HSMC_ELPRIM_PRIMITIV(value)           (HSMC_ELPRIM_PRIMITIV_Msk & ((value) << HSMC_ELPRIM_PRIMITIV_Pos))
#define HSMC_ELPRIM_Msk                       _U_(0x0000FFFF)                                      /**< (HSMC_ELPRIM) Register Mask  */


/* -------- HSMC_ELEN : (SMC Offset: 0x508) ( /W 32) PMECC Error Location Enable Register -------- */
#define HSMC_ELEN_ENINIT_Pos                  _U_(0)                                               /**< (HSMC_ELEN) Error Location Enable Position */
#define HSMC_ELEN_ENINIT_Msk                  (_U_(0x3FFF) << HSMC_ELEN_ENINIT_Pos)                /**< (HSMC_ELEN) Error Location Enable Mask */
#define HSMC_ELEN_ENINIT(value)               (HSMC_ELEN_ENINIT_Msk & ((value) << HSMC_ELEN_ENINIT_Pos))
#define HSMC_ELEN_Msk                         _U_(0x00003FFF)                                      /**< (HSMC_ELEN) Register Mask  */


/* -------- HSMC_ELDIS : (SMC Offset: 0x50C) ( /W 32) PMECC Error Location Disable Register -------- */
#define HSMC_ELDIS_DIS_Pos                    _U_(0)                                               /**< (HSMC_ELDIS) Disable Error Location Engine Position */
#define HSMC_ELDIS_DIS_Msk                    (_U_(0x1) << HSMC_ELDIS_DIS_Pos)                     /**< (HSMC_ELDIS) Disable Error Location Engine Mask */
#define HSMC_ELDIS_DIS(value)                 (HSMC_ELDIS_DIS_Msk & ((value) << HSMC_ELDIS_DIS_Pos))
#define   HSMC_ELDIS_DIS_0_Val                _U_(0x0)                                             /**< (HSMC_ELDIS) No effect  */
#define   HSMC_ELDIS_DIS_1_Val                _U_(0x1)                                             /**< (HSMC_ELDIS) Disable the Error location engine.  */
#define HSMC_ELDIS_DIS_0                      (HSMC_ELDIS_DIS_0_Val << HSMC_ELDIS_DIS_Pos)         /**< (HSMC_ELDIS) No effect Position  */
#define HSMC_ELDIS_DIS_1                      (HSMC_ELDIS_DIS_1_Val << HSMC_ELDIS_DIS_Pos)         /**< (HSMC_ELDIS) Disable the Error location engine. Position  */
#define HSMC_ELDIS_Msk                        _U_(0x00000001)                                      /**< (HSMC_ELDIS) Register Mask  */


/* -------- HSMC_ELSR : (SMC Offset: 0x510) ( R/ 32) PMECC Error Location Status Register -------- */
#define HSMC_ELSR_RESETVALUE                  _U_(0x00)                                            /**<  (HSMC_ELSR) PMECC Error Location Status Register  Reset Value */

#define HSMC_ELSR_BUSY_Pos                    _U_(0)                                               /**< (HSMC_ELSR) Error Location Engine Busy Position */
#define HSMC_ELSR_BUSY_Msk                    (_U_(0x1) << HSMC_ELSR_BUSY_Pos)                     /**< (HSMC_ELSR) Error Location Engine Busy Mask */
#define HSMC_ELSR_BUSY(value)                 (HSMC_ELSR_BUSY_Msk & ((value) << HSMC_ELSR_BUSY_Pos))
#define   HSMC_ELSR_BUSY_0_Val                _U_(0x0)                                             /**< (HSMC_ELSR) Error location engine is disabled.  */
#define   HSMC_ELSR_BUSY_1_Val                _U_(0x1)                                             /**< (HSMC_ELSR) Error location engine is enabled and is finding roots of the polynomial.  */
#define HSMC_ELSR_BUSY_0                      (HSMC_ELSR_BUSY_0_Val << HSMC_ELSR_BUSY_Pos)         /**< (HSMC_ELSR) Error location engine is disabled. Position  */
#define HSMC_ELSR_BUSY_1                      (HSMC_ELSR_BUSY_1_Val << HSMC_ELSR_BUSY_Pos)         /**< (HSMC_ELSR) Error location engine is enabled and is finding roots of the polynomial. Position  */
#define HSMC_ELSR_Msk                         _U_(0x00000001)                                      /**< (HSMC_ELSR) Register Mask  */


/* -------- HSMC_ELIER : (SMC Offset: 0x514) ( /W 32) PMECC Error Location Interrupt Enable register -------- */
#define HSMC_ELIER_DONE_Pos                   _U_(0)                                               /**< (HSMC_ELIER) Computation Terminated Interrupt Enable Position */
#define HSMC_ELIER_DONE_Msk                   (_U_(0x1) << HSMC_ELIER_DONE_Pos)                    /**< (HSMC_ELIER) Computation Terminated Interrupt Enable Mask */
#define HSMC_ELIER_DONE(value)                (HSMC_ELIER_DONE_Msk & ((value) << HSMC_ELIER_DONE_Pos))
#define   HSMC_ELIER_DONE_0_Val               _U_(0x0)                                             /**< (HSMC_ELIER) No effect  */
#define   HSMC_ELIER_DONE_1_Val               _U_(0x1)                                             /**< (HSMC_ELIER) Interrupt enable  */
#define HSMC_ELIER_DONE_0                     (HSMC_ELIER_DONE_0_Val << HSMC_ELIER_DONE_Pos)       /**< (HSMC_ELIER) No effect Position  */
#define HSMC_ELIER_DONE_1                     (HSMC_ELIER_DONE_1_Val << HSMC_ELIER_DONE_Pos)       /**< (HSMC_ELIER) Interrupt enable Position  */
#define HSMC_ELIER_Msk                        _U_(0x00000001)                                      /**< (HSMC_ELIER) Register Mask  */


/* -------- HSMC_ELIDR : (SMC Offset: 0x518) ( /W 32) PMECC Error Location Interrupt Disable Register -------- */
#define HSMC_ELIDR_DONE_Pos                   _U_(0)                                               /**< (HSMC_ELIDR) Computation Terminated Interrupt Disable Position */
#define HSMC_ELIDR_DONE_Msk                   (_U_(0x1) << HSMC_ELIDR_DONE_Pos)                    /**< (HSMC_ELIDR) Computation Terminated Interrupt Disable Mask */
#define HSMC_ELIDR_DONE(value)                (HSMC_ELIDR_DONE_Msk & ((value) << HSMC_ELIDR_DONE_Pos))
#define   HSMC_ELIDR_DONE_0_Val               _U_(0x0)                                             /**< (HSMC_ELIDR) No effect  */
#define   HSMC_ELIDR_DONE_1_Val               _U_(0x1)                                             /**< (HSMC_ELIDR) Interrupt disable.  */
#define HSMC_ELIDR_DONE_0                     (HSMC_ELIDR_DONE_0_Val << HSMC_ELIDR_DONE_Pos)       /**< (HSMC_ELIDR) No effect Position  */
#define HSMC_ELIDR_DONE_1                     (HSMC_ELIDR_DONE_1_Val << HSMC_ELIDR_DONE_Pos)       /**< (HSMC_ELIDR) Interrupt disable. Position  */
#define HSMC_ELIDR_Msk                        _U_(0x00000001)                                      /**< (HSMC_ELIDR) Register Mask  */


/* -------- HSMC_ELIMR : (SMC Offset: 0x51C) ( R/ 32) PMECC Error Location Interrupt Mask Register -------- */
#define HSMC_ELIMR_RESETVALUE                 _U_(0x00)                                            /**<  (HSMC_ELIMR) PMECC Error Location Interrupt Mask Register  Reset Value */

#define HSMC_ELIMR_DONE_Pos                   _U_(0)                                               /**< (HSMC_ELIMR) Computation Terminated Interrupt Mask Position */
#define HSMC_ELIMR_DONE_Msk                   (_U_(0x1) << HSMC_ELIMR_DONE_Pos)                    /**< (HSMC_ELIMR) Computation Terminated Interrupt Mask Mask */
#define HSMC_ELIMR_DONE(value)                (HSMC_ELIMR_DONE_Msk & ((value) << HSMC_ELIMR_DONE_Pos))
#define   HSMC_ELIMR_DONE_0_Val               _U_(0x0)                                             /**< (HSMC_ELIMR) Computation Terminated interrupt disabled  */
#define   HSMC_ELIMR_DONE_1_Val               _U_(0x1)                                             /**< (HSMC_ELIMR) Computation Terminated interrupt enabled  */
#define HSMC_ELIMR_DONE_0                     (HSMC_ELIMR_DONE_0_Val << HSMC_ELIMR_DONE_Pos)       /**< (HSMC_ELIMR) Computation Terminated interrupt disabled Position  */
#define HSMC_ELIMR_DONE_1                     (HSMC_ELIMR_DONE_1_Val << HSMC_ELIMR_DONE_Pos)       /**< (HSMC_ELIMR) Computation Terminated interrupt enabled Position  */
#define HSMC_ELIMR_Msk                        _U_(0x00000001)                                      /**< (HSMC_ELIMR) Register Mask  */


/* -------- HSMC_ELISR : (SMC Offset: 0x520) ( R/ 32) PMECC Error Location Interrupt Status Register -------- */
#define HSMC_ELISR_RESETVALUE                 _U_(0x00)                                            /**<  (HSMC_ELISR) PMECC Error Location Interrupt Status Register  Reset Value */

#define HSMC_ELISR_DONE_Pos                   _U_(0)                                               /**< (HSMC_ELISR) Computation Terminated Interrupt Status Position */
#define HSMC_ELISR_DONE_Msk                   (_U_(0x1) << HSMC_ELISR_DONE_Pos)                    /**< (HSMC_ELISR) Computation Terminated Interrupt Status Mask */
#define HSMC_ELISR_DONE(value)                (HSMC_ELISR_DONE_Msk & ((value) << HSMC_ELISR_DONE_Pos))
#define HSMC_ELISR_ERR_CNT_Pos                _U_(8)                                               /**< (HSMC_ELISR) Error Counter value Position */
#define HSMC_ELISR_ERR_CNT_Msk                (_U_(0x3F) << HSMC_ELISR_ERR_CNT_Pos)                /**< (HSMC_ELISR) Error Counter value Mask */
#define HSMC_ELISR_ERR_CNT(value)             (HSMC_ELISR_ERR_CNT_Msk & ((value) << HSMC_ELISR_ERR_CNT_Pos))
#define HSMC_ELISR_Msk                        _U_(0x00003F01)                                      /**< (HSMC_ELISR) Register Mask  */


/* -------- HSMC_SIGMA0 : (SMC Offset: 0x528) ( R/ 32) PMECC Error Location SIGMA 0 Register -------- */
#define HSMC_SIGMA0_RESETVALUE                _U_(0x01)                                            /**<  (HSMC_SIGMA0) PMECC Error Location SIGMA 0 Register  Reset Value */

#define HSMC_SIGMA0_SIGMA0_Pos                _U_(0)                                               /**< (HSMC_SIGMA0) Coefficient of degree 0 in the SIGMA polynomial Position */
#define HSMC_SIGMA0_SIGMA0_Msk                (_U_(0x3FFF) << HSMC_SIGMA0_SIGMA0_Pos)              /**< (HSMC_SIGMA0) Coefficient of degree 0 in the SIGMA polynomial Mask */
#define HSMC_SIGMA0_SIGMA0(value)             (HSMC_SIGMA0_SIGMA0_Msk & ((value) << HSMC_SIGMA0_SIGMA0_Pos))
#define HSMC_SIGMA0_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA0) Register Mask  */


/* -------- HSMC_SIGMA1 : (SMC Offset: 0x52C) (R/W 32) PMECC Error Location SIGMA 1 Register -------- */
#define HSMC_SIGMA1_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_SIGMA1) PMECC Error Location SIGMA 1 Register  Reset Value */

#define HSMC_SIGMA1_SIGMA1_Pos                _U_(0)                                               /**< (HSMC_SIGMA1) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA1_SIGMA1_Msk                (_U_(0x3FFF) << HSMC_SIGMA1_SIGMA1_Pos)              /**< (HSMC_SIGMA1) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA1_SIGMA1(value)             (HSMC_SIGMA1_SIGMA1_Msk & ((value) << HSMC_SIGMA1_SIGMA1_Pos))
#define HSMC_SIGMA1_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA1) Register Mask  */


/* -------- HSMC_SIGMA2 : (SMC Offset: 0x530) (R/W 32) PMECC Error Location SIGMA 2 Register -------- */
#define HSMC_SIGMA2_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_SIGMA2) PMECC Error Location SIGMA 2 Register  Reset Value */

#define HSMC_SIGMA2_SIGMA2_Pos                _U_(0)                                               /**< (HSMC_SIGMA2) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA2_SIGMA2_Msk                (_U_(0x3FFF) << HSMC_SIGMA2_SIGMA2_Pos)              /**< (HSMC_SIGMA2) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA2_SIGMA2(value)             (HSMC_SIGMA2_SIGMA2_Msk & ((value) << HSMC_SIGMA2_SIGMA2_Pos))
#define HSMC_SIGMA2_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA2) Register Mask  */


/* -------- HSMC_SIGMA3 : (SMC Offset: 0x534) (R/W 32) PMECC Error Location SIGMA 3 Register -------- */
#define HSMC_SIGMA3_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_SIGMA3) PMECC Error Location SIGMA 3 Register  Reset Value */

#define HSMC_SIGMA3_SIGMA3_Pos                _U_(0)                                               /**< (HSMC_SIGMA3) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA3_SIGMA3_Msk                (_U_(0x3FFF) << HSMC_SIGMA3_SIGMA3_Pos)              /**< (HSMC_SIGMA3) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA3_SIGMA3(value)             (HSMC_SIGMA3_SIGMA3_Msk & ((value) << HSMC_SIGMA3_SIGMA3_Pos))
#define HSMC_SIGMA3_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA3) Register Mask  */


/* -------- HSMC_SIGMA4 : (SMC Offset: 0x538) (R/W 32) PMECC Error Location SIGMA 4 Register -------- */
#define HSMC_SIGMA4_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_SIGMA4) PMECC Error Location SIGMA 4 Register  Reset Value */

#define HSMC_SIGMA4_SIGMA4_Pos                _U_(0)                                               /**< (HSMC_SIGMA4) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA4_SIGMA4_Msk                (_U_(0x3FFF) << HSMC_SIGMA4_SIGMA4_Pos)              /**< (HSMC_SIGMA4) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA4_SIGMA4(value)             (HSMC_SIGMA4_SIGMA4_Msk & ((value) << HSMC_SIGMA4_SIGMA4_Pos))
#define HSMC_SIGMA4_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA4) Register Mask  */


/* -------- HSMC_SIGMA5 : (SMC Offset: 0x53C) (R/W 32) PMECC Error Location SIGMA 5 Register -------- */
#define HSMC_SIGMA5_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_SIGMA5) PMECC Error Location SIGMA 5 Register  Reset Value */

#define HSMC_SIGMA5_SIGMA5_Pos                _U_(0)                                               /**< (HSMC_SIGMA5) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA5_SIGMA5_Msk                (_U_(0x3FFF) << HSMC_SIGMA5_SIGMA5_Pos)              /**< (HSMC_SIGMA5) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA5_SIGMA5(value)             (HSMC_SIGMA5_SIGMA5_Msk & ((value) << HSMC_SIGMA5_SIGMA5_Pos))
#define HSMC_SIGMA5_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA5) Register Mask  */


/* -------- HSMC_SIGMA6 : (SMC Offset: 0x540) (R/W 32) PMECC Error Location SIGMA 6 Register -------- */
#define HSMC_SIGMA6_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_SIGMA6) PMECC Error Location SIGMA 6 Register  Reset Value */

#define HSMC_SIGMA6_SIGMA6_Pos                _U_(0)                                               /**< (HSMC_SIGMA6) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA6_SIGMA6_Msk                (_U_(0x3FFF) << HSMC_SIGMA6_SIGMA6_Pos)              /**< (HSMC_SIGMA6) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA6_SIGMA6(value)             (HSMC_SIGMA6_SIGMA6_Msk & ((value) << HSMC_SIGMA6_SIGMA6_Pos))
#define HSMC_SIGMA6_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA6) Register Mask  */


/* -------- HSMC_SIGMA7 : (SMC Offset: 0x544) (R/W 32) PMECC Error Location SIGMA 7 Register -------- */
#define HSMC_SIGMA7_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_SIGMA7) PMECC Error Location SIGMA 7 Register  Reset Value */

#define HSMC_SIGMA7_SIGMA7_Pos                _U_(0)                                               /**< (HSMC_SIGMA7) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA7_SIGMA7_Msk                (_U_(0x3FFF) << HSMC_SIGMA7_SIGMA7_Pos)              /**< (HSMC_SIGMA7) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA7_SIGMA7(value)             (HSMC_SIGMA7_SIGMA7_Msk & ((value) << HSMC_SIGMA7_SIGMA7_Pos))
#define HSMC_SIGMA7_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA7) Register Mask  */


/* -------- HSMC_SIGMA8 : (SMC Offset: 0x548) (R/W 32) PMECC Error Location SIGMA 8 Register -------- */
#define HSMC_SIGMA8_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_SIGMA8) PMECC Error Location SIGMA 8 Register  Reset Value */

#define HSMC_SIGMA8_SIGMA8_Pos                _U_(0)                                               /**< (HSMC_SIGMA8) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA8_SIGMA8_Msk                (_U_(0x3FFF) << HSMC_SIGMA8_SIGMA8_Pos)              /**< (HSMC_SIGMA8) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA8_SIGMA8(value)             (HSMC_SIGMA8_SIGMA8_Msk & ((value) << HSMC_SIGMA8_SIGMA8_Pos))
#define HSMC_SIGMA8_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA8) Register Mask  */


/* -------- HSMC_SIGMA9 : (SMC Offset: 0x54C) (R/W 32) PMECC Error Location SIGMA 9 Register -------- */
#define HSMC_SIGMA9_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_SIGMA9) PMECC Error Location SIGMA 9 Register  Reset Value */

#define HSMC_SIGMA9_SIGMA9_Pos                _U_(0)                                               /**< (HSMC_SIGMA9) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA9_SIGMA9_Msk                (_U_(0x3FFF) << HSMC_SIGMA9_SIGMA9_Pos)              /**< (HSMC_SIGMA9) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA9_SIGMA9(value)             (HSMC_SIGMA9_SIGMA9_Msk & ((value) << HSMC_SIGMA9_SIGMA9_Pos))
#define HSMC_SIGMA9_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_SIGMA9) Register Mask  */


/* -------- HSMC_SIGMA10 : (SMC Offset: 0x550) (R/W 32) PMECC Error Location SIGMA 10 Register -------- */
#define HSMC_SIGMA10_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA10) PMECC Error Location SIGMA 10 Register  Reset Value */

#define HSMC_SIGMA10_SIGMA10_Pos              _U_(0)                                               /**< (HSMC_SIGMA10) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA10_SIGMA10_Msk              (_U_(0x3FFF) << HSMC_SIGMA10_SIGMA10_Pos)            /**< (HSMC_SIGMA10) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA10_SIGMA10(value)           (HSMC_SIGMA10_SIGMA10_Msk & ((value) << HSMC_SIGMA10_SIGMA10_Pos))
#define HSMC_SIGMA10_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA10) Register Mask  */


/* -------- HSMC_SIGMA11 : (SMC Offset: 0x554) (R/W 32) PMECC Error Location SIGMA 11 Register -------- */
#define HSMC_SIGMA11_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA11) PMECC Error Location SIGMA 11 Register  Reset Value */

#define HSMC_SIGMA11_SIGMA11_Pos              _U_(0)                                               /**< (HSMC_SIGMA11) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA11_SIGMA11_Msk              (_U_(0x3FFF) << HSMC_SIGMA11_SIGMA11_Pos)            /**< (HSMC_SIGMA11) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA11_SIGMA11(value)           (HSMC_SIGMA11_SIGMA11_Msk & ((value) << HSMC_SIGMA11_SIGMA11_Pos))
#define HSMC_SIGMA11_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA11) Register Mask  */


/* -------- HSMC_SIGMA12 : (SMC Offset: 0x558) (R/W 32) PMECC Error Location SIGMA 12 Register -------- */
#define HSMC_SIGMA12_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA12) PMECC Error Location SIGMA 12 Register  Reset Value */

#define HSMC_SIGMA12_SIGMA12_Pos              _U_(0)                                               /**< (HSMC_SIGMA12) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA12_SIGMA12_Msk              (_U_(0x3FFF) << HSMC_SIGMA12_SIGMA12_Pos)            /**< (HSMC_SIGMA12) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA12_SIGMA12(value)           (HSMC_SIGMA12_SIGMA12_Msk & ((value) << HSMC_SIGMA12_SIGMA12_Pos))
#define HSMC_SIGMA12_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA12) Register Mask  */


/* -------- HSMC_SIGMA13 : (SMC Offset: 0x55C) (R/W 32) PMECC Error Location SIGMA 13 Register -------- */
#define HSMC_SIGMA13_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA13) PMECC Error Location SIGMA 13 Register  Reset Value */

#define HSMC_SIGMA13_SIGMA13_Pos              _U_(0)                                               /**< (HSMC_SIGMA13) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA13_SIGMA13_Msk              (_U_(0x3FFF) << HSMC_SIGMA13_SIGMA13_Pos)            /**< (HSMC_SIGMA13) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA13_SIGMA13(value)           (HSMC_SIGMA13_SIGMA13_Msk & ((value) << HSMC_SIGMA13_SIGMA13_Pos))
#define HSMC_SIGMA13_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA13) Register Mask  */


/* -------- HSMC_SIGMA14 : (SMC Offset: 0x560) (R/W 32) PMECC Error Location SIGMA 14 Register -------- */
#define HSMC_SIGMA14_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA14) PMECC Error Location SIGMA 14 Register  Reset Value */

#define HSMC_SIGMA14_SIGMA14_Pos              _U_(0)                                               /**< (HSMC_SIGMA14) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA14_SIGMA14_Msk              (_U_(0x3FFF) << HSMC_SIGMA14_SIGMA14_Pos)            /**< (HSMC_SIGMA14) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA14_SIGMA14(value)           (HSMC_SIGMA14_SIGMA14_Msk & ((value) << HSMC_SIGMA14_SIGMA14_Pos))
#define HSMC_SIGMA14_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA14) Register Mask  */


/* -------- HSMC_SIGMA15 : (SMC Offset: 0x564) (R/W 32) PMECC Error Location SIGMA 15 Register -------- */
#define HSMC_SIGMA15_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA15) PMECC Error Location SIGMA 15 Register  Reset Value */

#define HSMC_SIGMA15_SIGMA15_Pos              _U_(0)                                               /**< (HSMC_SIGMA15) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA15_SIGMA15_Msk              (_U_(0x3FFF) << HSMC_SIGMA15_SIGMA15_Pos)            /**< (HSMC_SIGMA15) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA15_SIGMA15(value)           (HSMC_SIGMA15_SIGMA15_Msk & ((value) << HSMC_SIGMA15_SIGMA15_Pos))
#define HSMC_SIGMA15_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA15) Register Mask  */


/* -------- HSMC_SIGMA16 : (SMC Offset: 0x568) (R/W 32) PMECC Error Location SIGMA 16 Register -------- */
#define HSMC_SIGMA16_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA16) PMECC Error Location SIGMA 16 Register  Reset Value */

#define HSMC_SIGMA16_SIGMA16_Pos              _U_(0)                                               /**< (HSMC_SIGMA16) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA16_SIGMA16_Msk              (_U_(0x3FFF) << HSMC_SIGMA16_SIGMA16_Pos)            /**< (HSMC_SIGMA16) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA16_SIGMA16(value)           (HSMC_SIGMA16_SIGMA16_Msk & ((value) << HSMC_SIGMA16_SIGMA16_Pos))
#define HSMC_SIGMA16_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA16) Register Mask  */


/* -------- HSMC_SIGMA17 : (SMC Offset: 0x56C) (R/W 32) PMECC Error Location SIGMA 17 Register -------- */
#define HSMC_SIGMA17_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA17) PMECC Error Location SIGMA 17 Register  Reset Value */

#define HSMC_SIGMA17_SIGMA17_Pos              _U_(0)                                               /**< (HSMC_SIGMA17) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA17_SIGMA17_Msk              (_U_(0x3FFF) << HSMC_SIGMA17_SIGMA17_Pos)            /**< (HSMC_SIGMA17) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA17_SIGMA17(value)           (HSMC_SIGMA17_SIGMA17_Msk & ((value) << HSMC_SIGMA17_SIGMA17_Pos))
#define HSMC_SIGMA17_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA17) Register Mask  */


/* -------- HSMC_SIGMA18 : (SMC Offset: 0x570) (R/W 32) PMECC Error Location SIGMA 18 Register -------- */
#define HSMC_SIGMA18_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA18) PMECC Error Location SIGMA 18 Register  Reset Value */

#define HSMC_SIGMA18_SIGMA18_Pos              _U_(0)                                               /**< (HSMC_SIGMA18) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA18_SIGMA18_Msk              (_U_(0x3FFF) << HSMC_SIGMA18_SIGMA18_Pos)            /**< (HSMC_SIGMA18) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA18_SIGMA18(value)           (HSMC_SIGMA18_SIGMA18_Msk & ((value) << HSMC_SIGMA18_SIGMA18_Pos))
#define HSMC_SIGMA18_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA18) Register Mask  */


/* -------- HSMC_SIGMA19 : (SMC Offset: 0x574) (R/W 32) PMECC Error Location SIGMA 19 Register -------- */
#define HSMC_SIGMA19_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA19) PMECC Error Location SIGMA 19 Register  Reset Value */

#define HSMC_SIGMA19_SIGMA19_Pos              _U_(0)                                               /**< (HSMC_SIGMA19) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA19_SIGMA19_Msk              (_U_(0x3FFF) << HSMC_SIGMA19_SIGMA19_Pos)            /**< (HSMC_SIGMA19) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA19_SIGMA19(value)           (HSMC_SIGMA19_SIGMA19_Msk & ((value) << HSMC_SIGMA19_SIGMA19_Pos))
#define HSMC_SIGMA19_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA19) Register Mask  */


/* -------- HSMC_SIGMA20 : (SMC Offset: 0x578) (R/W 32) PMECC Error Location SIGMA 20 Register -------- */
#define HSMC_SIGMA20_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA20) PMECC Error Location SIGMA 20 Register  Reset Value */

#define HSMC_SIGMA20_SIGMA20_Pos              _U_(0)                                               /**< (HSMC_SIGMA20) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA20_SIGMA20_Msk              (_U_(0x3FFF) << HSMC_SIGMA20_SIGMA20_Pos)            /**< (HSMC_SIGMA20) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA20_SIGMA20(value)           (HSMC_SIGMA20_SIGMA20_Msk & ((value) << HSMC_SIGMA20_SIGMA20_Pos))
#define HSMC_SIGMA20_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA20) Register Mask  */


/* -------- HSMC_SIGMA21 : (SMC Offset: 0x57C) (R/W 32) PMECC Error Location SIGMA 21 Register -------- */
#define HSMC_SIGMA21_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA21) PMECC Error Location SIGMA 21 Register  Reset Value */

#define HSMC_SIGMA21_SIGMA21_Pos              _U_(0)                                               /**< (HSMC_SIGMA21) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA21_SIGMA21_Msk              (_U_(0x3FFF) << HSMC_SIGMA21_SIGMA21_Pos)            /**< (HSMC_SIGMA21) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA21_SIGMA21(value)           (HSMC_SIGMA21_SIGMA21_Msk & ((value) << HSMC_SIGMA21_SIGMA21_Pos))
#define HSMC_SIGMA21_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA21) Register Mask  */


/* -------- HSMC_SIGMA22 : (SMC Offset: 0x580) (R/W 32) PMECC Error Location SIGMA 22 Register -------- */
#define HSMC_SIGMA22_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA22) PMECC Error Location SIGMA 22 Register  Reset Value */

#define HSMC_SIGMA22_SIGMA22_Pos              _U_(0)                                               /**< (HSMC_SIGMA22) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA22_SIGMA22_Msk              (_U_(0x3FFF) << HSMC_SIGMA22_SIGMA22_Pos)            /**< (HSMC_SIGMA22) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA22_SIGMA22(value)           (HSMC_SIGMA22_SIGMA22_Msk & ((value) << HSMC_SIGMA22_SIGMA22_Pos))
#define HSMC_SIGMA22_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA22) Register Mask  */


/* -------- HSMC_SIGMA23 : (SMC Offset: 0x584) (R/W 32) PMECC Error Location SIGMA 23 Register -------- */
#define HSMC_SIGMA23_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA23) PMECC Error Location SIGMA 23 Register  Reset Value */

#define HSMC_SIGMA23_SIGMA23_Pos              _U_(0)                                               /**< (HSMC_SIGMA23) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA23_SIGMA23_Msk              (_U_(0x3FFF) << HSMC_SIGMA23_SIGMA23_Pos)            /**< (HSMC_SIGMA23) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA23_SIGMA23(value)           (HSMC_SIGMA23_SIGMA23_Msk & ((value) << HSMC_SIGMA23_SIGMA23_Pos))
#define HSMC_SIGMA23_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA23) Register Mask  */


/* -------- HSMC_SIGMA24 : (SMC Offset: 0x588) (R/W 32) PMECC Error Location SIGMA 24 Register -------- */
#define HSMC_SIGMA24_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA24) PMECC Error Location SIGMA 24 Register  Reset Value */

#define HSMC_SIGMA24_SIGMA24_Pos              _U_(0)                                               /**< (HSMC_SIGMA24) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA24_SIGMA24_Msk              (_U_(0x3FFF) << HSMC_SIGMA24_SIGMA24_Pos)            /**< (HSMC_SIGMA24) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA24_SIGMA24(value)           (HSMC_SIGMA24_SIGMA24_Msk & ((value) << HSMC_SIGMA24_SIGMA24_Pos))
#define HSMC_SIGMA24_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA24) Register Mask  */


/* -------- HSMC_SIGMA25 : (SMC Offset: 0x58C) (R/W 32) PMECC Error Location SIGMA 25 Register -------- */
#define HSMC_SIGMA25_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA25) PMECC Error Location SIGMA 25 Register  Reset Value */

#define HSMC_SIGMA25_SIGMA25_Pos              _U_(0)                                               /**< (HSMC_SIGMA25) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA25_SIGMA25_Msk              (_U_(0x3FFF) << HSMC_SIGMA25_SIGMA25_Pos)            /**< (HSMC_SIGMA25) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA25_SIGMA25(value)           (HSMC_SIGMA25_SIGMA25_Msk & ((value) << HSMC_SIGMA25_SIGMA25_Pos))
#define HSMC_SIGMA25_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA25) Register Mask  */


/* -------- HSMC_SIGMA26 : (SMC Offset: 0x590) (R/W 32) PMECC Error Location SIGMA 26 Register -------- */
#define HSMC_SIGMA26_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA26) PMECC Error Location SIGMA 26 Register  Reset Value */

#define HSMC_SIGMA26_SIGMA26_Pos              _U_(0)                                               /**< (HSMC_SIGMA26) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA26_SIGMA26_Msk              (_U_(0x3FFF) << HSMC_SIGMA26_SIGMA26_Pos)            /**< (HSMC_SIGMA26) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA26_SIGMA26(value)           (HSMC_SIGMA26_SIGMA26_Msk & ((value) << HSMC_SIGMA26_SIGMA26_Pos))
#define HSMC_SIGMA26_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA26) Register Mask  */


/* -------- HSMC_SIGMA27 : (SMC Offset: 0x594) (R/W 32) PMECC Error Location SIGMA 27 Register -------- */
#define HSMC_SIGMA27_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA27) PMECC Error Location SIGMA 27 Register  Reset Value */

#define HSMC_SIGMA27_SIGMA27_Pos              _U_(0)                                               /**< (HSMC_SIGMA27) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA27_SIGMA27_Msk              (_U_(0x3FFF) << HSMC_SIGMA27_SIGMA27_Pos)            /**< (HSMC_SIGMA27) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA27_SIGMA27(value)           (HSMC_SIGMA27_SIGMA27_Msk & ((value) << HSMC_SIGMA27_SIGMA27_Pos))
#define HSMC_SIGMA27_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA27) Register Mask  */


/* -------- HSMC_SIGMA28 : (SMC Offset: 0x598) (R/W 32) PMECC Error Location SIGMA 28 Register -------- */
#define HSMC_SIGMA28_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA28) PMECC Error Location SIGMA 28 Register  Reset Value */

#define HSMC_SIGMA28_SIGMA28_Pos              _U_(0)                                               /**< (HSMC_SIGMA28) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA28_SIGMA28_Msk              (_U_(0x3FFF) << HSMC_SIGMA28_SIGMA28_Pos)            /**< (HSMC_SIGMA28) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA28_SIGMA28(value)           (HSMC_SIGMA28_SIGMA28_Msk & ((value) << HSMC_SIGMA28_SIGMA28_Pos))
#define HSMC_SIGMA28_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA28) Register Mask  */


/* -------- HSMC_SIGMA29 : (SMC Offset: 0x59C) (R/W 32) PMECC Error Location SIGMA 29 Register -------- */
#define HSMC_SIGMA29_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA29) PMECC Error Location SIGMA 29 Register  Reset Value */

#define HSMC_SIGMA29_SIGMA29_Pos              _U_(0)                                               /**< (HSMC_SIGMA29) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA29_SIGMA29_Msk              (_U_(0x3FFF) << HSMC_SIGMA29_SIGMA29_Pos)            /**< (HSMC_SIGMA29) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA29_SIGMA29(value)           (HSMC_SIGMA29_SIGMA29_Msk & ((value) << HSMC_SIGMA29_SIGMA29_Pos))
#define HSMC_SIGMA29_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA29) Register Mask  */


/* -------- HSMC_SIGMA30 : (SMC Offset: 0x5A0) (R/W 32) PMECC Error Location SIGMA 30 Register -------- */
#define HSMC_SIGMA30_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA30) PMECC Error Location SIGMA 30 Register  Reset Value */

#define HSMC_SIGMA30_SIGMA30_Pos              _U_(0)                                               /**< (HSMC_SIGMA30) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA30_SIGMA30_Msk              (_U_(0x3FFF) << HSMC_SIGMA30_SIGMA30_Pos)            /**< (HSMC_SIGMA30) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA30_SIGMA30(value)           (HSMC_SIGMA30_SIGMA30_Msk & ((value) << HSMC_SIGMA30_SIGMA30_Pos))
#define HSMC_SIGMA30_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA30) Register Mask  */


/* -------- HSMC_SIGMA31 : (SMC Offset: 0x5A4) (R/W 32) PMECC Error Location SIGMA 31 Register -------- */
#define HSMC_SIGMA31_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA31) PMECC Error Location SIGMA 31 Register  Reset Value */

#define HSMC_SIGMA31_SIGMA31_Pos              _U_(0)                                               /**< (HSMC_SIGMA31) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA31_SIGMA31_Msk              (_U_(0x3FFF) << HSMC_SIGMA31_SIGMA31_Pos)            /**< (HSMC_SIGMA31) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA31_SIGMA31(value)           (HSMC_SIGMA31_SIGMA31_Msk & ((value) << HSMC_SIGMA31_SIGMA31_Pos))
#define HSMC_SIGMA31_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA31) Register Mask  */


/* -------- HSMC_SIGMA32 : (SMC Offset: 0x5A8) (R/W 32) PMECC Error Location SIGMA 32 Register -------- */
#define HSMC_SIGMA32_RESETVALUE               _U_(0x00)                                            /**<  (HSMC_SIGMA32) PMECC Error Location SIGMA 32 Register  Reset Value */

#define HSMC_SIGMA32_SIGMA32_Pos              _U_(0)                                               /**< (HSMC_SIGMA32) Coefficient of degree x in the SIGMA polynomial Position */
#define HSMC_SIGMA32_SIGMA32_Msk              (_U_(0x3FFF) << HSMC_SIGMA32_SIGMA32_Pos)            /**< (HSMC_SIGMA32) Coefficient of degree x in the SIGMA polynomial Mask */
#define HSMC_SIGMA32_SIGMA32(value)           (HSMC_SIGMA32_SIGMA32_Msk & ((value) << HSMC_SIGMA32_SIGMA32_Pos))
#define HSMC_SIGMA32_Msk                      _U_(0x00003FFF)                                      /**< (HSMC_SIGMA32) Register Mask  */


/* -------- HSMC_ERRLOC : (SMC Offset: 0x5AC) ( R/ 32) PMECC Error Location x Register -------- */
#define HSMC_ERRLOC_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_ERRLOC) PMECC Error Location x Register  Reset Value */

#define HSMC_ERRLOC_ERRLOCN_Pos               _U_(0)                                               /**< (HSMC_ERRLOC) Error Position within the Set {sector area, spare area} Position */
#define HSMC_ERRLOC_ERRLOCN_Msk               (_U_(0x3FFF) << HSMC_ERRLOC_ERRLOCN_Pos)             /**< (HSMC_ERRLOC) Error Position within the Set {sector area, spare area} Mask */
#define HSMC_ERRLOC_ERRLOCN(value)            (HSMC_ERRLOC_ERRLOCN_Msk & ((value) << HSMC_ERRLOC_ERRLOCN_Pos))
#define HSMC_ERRLOC_Msk                       _U_(0x00003FFF)                                      /**< (HSMC_ERRLOC) Register Mask  */


/* -------- HSMC_OCMS : (SMC Offset: 0x7A0) (R/W 32) Off Chip Memory Scrambling Register -------- */
#define HSMC_OCMS_RESETVALUE                  _U_(0x00)                                            /**<  (HSMC_OCMS) Off Chip Memory Scrambling Register  Reset Value */

#define HSMC_OCMS_SMSE_Pos                    _U_(0)                                               /**< (HSMC_OCMS) Static Memory Controller Scrambling Enable Position */
#define HSMC_OCMS_SMSE_Msk                    (_U_(0x1) << HSMC_OCMS_SMSE_Pos)                     /**< (HSMC_OCMS) Static Memory Controller Scrambling Enable Mask */
#define HSMC_OCMS_SMSE(value)                 (HSMC_OCMS_SMSE_Msk & ((value) << HSMC_OCMS_SMSE_Pos))
#define   HSMC_OCMS_SMSE_0_Val                _U_(0x0)                                             /**< (HSMC_OCMS) Disable "Off Chip" Scrambling for SMC access.  */
#define   HSMC_OCMS_SMSE_1_Val                _U_(0x1)                                             /**< (HSMC_OCMS) Enable "Off Chip" Scrambling for SMC access. (If OCMS bit is set in the corresponding HSMC_TIMINGSx register.)  */
#define HSMC_OCMS_SMSE_0                      (HSMC_OCMS_SMSE_0_Val << HSMC_OCMS_SMSE_Pos)         /**< (HSMC_OCMS) Disable "Off Chip" Scrambling for SMC access. Position  */
#define HSMC_OCMS_SMSE_1                      (HSMC_OCMS_SMSE_1_Val << HSMC_OCMS_SMSE_Pos)         /**< (HSMC_OCMS) Enable "Off Chip" Scrambling for SMC access. (If OCMS bit is set in the corresponding HSMC_TIMINGSx register.) Position  */
#define HSMC_OCMS_SRSE_Pos                    _U_(1)                                               /**< (HSMC_OCMS) NFC Internal SRAM Scrambling Enable Position */
#define HSMC_OCMS_SRSE_Msk                    (_U_(0x1) << HSMC_OCMS_SRSE_Pos)                     /**< (HSMC_OCMS) NFC Internal SRAM Scrambling Enable Mask */
#define HSMC_OCMS_SRSE(value)                 (HSMC_OCMS_SRSE_Msk & ((value) << HSMC_OCMS_SRSE_Pos))
#define   HSMC_OCMS_SRSE_0_Val                _U_(0x0)                                             /**< (HSMC_OCMS) Disable Scrambling for NFC internal SRAM access.  */
#define   HSMC_OCMS_SRSE_1_Val                _U_(0x1)                                             /**< (HSMC_OCMS) Enable Scrambling for NFC internal SRAM access. (OCMS bit must be cleared in the corresponding HSMC_TIMINGSx register.)  */
#define HSMC_OCMS_SRSE_0                      (HSMC_OCMS_SRSE_0_Val << HSMC_OCMS_SRSE_Pos)         /**< (HSMC_OCMS) Disable Scrambling for NFC internal SRAM access. Position  */
#define HSMC_OCMS_SRSE_1                      (HSMC_OCMS_SRSE_1_Val << HSMC_OCMS_SRSE_Pos)         /**< (HSMC_OCMS) Enable Scrambling for NFC internal SRAM access. (OCMS bit must be cleared in the corresponding HSMC_TIMINGSx register.) Position  */
#define HSMC_OCMS_Msk                         _U_(0x00000003)                                      /**< (HSMC_OCMS) Register Mask  */


/* -------- HSMC_KEY1 : (SMC Offset: 0x7A4) ( /W 32) Off Chip Memory Scrambling KEY1 Register -------- */
#define HSMC_KEY1_RESETVALUE                  _U_(0x00)                                            /**<  (HSMC_KEY1) Off Chip Memory Scrambling KEY1 Register  Reset Value */

#define HSMC_KEY1_KEY1_Pos                    _U_(0)                                               /**< (HSMC_KEY1) Off Chip Memory Scrambling (OCMS) Key Part 1 Position */
#define HSMC_KEY1_KEY1_Msk                    (_U_(0xFFFFFFFF) << HSMC_KEY1_KEY1_Pos)              /**< (HSMC_KEY1) Off Chip Memory Scrambling (OCMS) Key Part 1 Mask */
#define HSMC_KEY1_KEY1(value)                 (HSMC_KEY1_KEY1_Msk & ((value) << HSMC_KEY1_KEY1_Pos))
#define HSMC_KEY1_Msk                         _U_(0xFFFFFFFF)                                      /**< (HSMC_KEY1) Register Mask  */


/* -------- HSMC_KEY2 : (SMC Offset: 0x7A8) ( /W 32) Off Chip Memory Scrambling KEY2 Register -------- */
#define HSMC_KEY2_RESETVALUE                  _U_(0x00)                                            /**<  (HSMC_KEY2) Off Chip Memory Scrambling KEY2 Register  Reset Value */

#define HSMC_KEY2_KEY2_Pos                    _U_(0)                                               /**< (HSMC_KEY2) Off Chip Memory Scrambling (OCMS) Key Part 2 Position */
#define HSMC_KEY2_KEY2_Msk                    (_U_(0xFFFFFFFF) << HSMC_KEY2_KEY2_Pos)              /**< (HSMC_KEY2) Off Chip Memory Scrambling (OCMS) Key Part 2 Mask */
#define HSMC_KEY2_KEY2(value)                 (HSMC_KEY2_KEY2_Msk & ((value) << HSMC_KEY2_KEY2_Pos))
#define HSMC_KEY2_Msk                         _U_(0xFFFFFFFF)                                      /**< (HSMC_KEY2) Register Mask  */


/* -------- HSMC_CLKCFG : (SMC Offset: 0x7AC) (R/W 32) Clock Configuration Register -------- */
#define HSMC_CLKCFG_RESETVALUE                _U_(0x00)                                            /**<  (HSMC_CLKCFG) Clock Configuration Register  Reset Value */

#define HSMC_CLKCFG_CLKDIV_Pos                _U_(0)                                               /**< (HSMC_CLKCFG) SMC Clock Divider Position */
#define HSMC_CLKCFG_CLKDIV_Msk                (_U_(0x1FF) << HSMC_CLKCFG_CLKDIV_Pos)               /**< (HSMC_CLKCFG) SMC Clock Divider Mask */
#define HSMC_CLKCFG_CLKDIV(value)             (HSMC_CLKCFG_CLKDIV_Msk & ((value) << HSMC_CLKCFG_CLKDIV_Pos))
#define HSMC_CLKCFG_CLKEN_Pos                 _U_(16)                                              /**< (HSMC_CLKCFG) SMC Clock Enable Position */
#define HSMC_CLKCFG_CLKEN_Msk                 (_U_(0x1) << HSMC_CLKCFG_CLKEN_Pos)                  /**< (HSMC_CLKCFG) SMC Clock Enable Mask */
#define HSMC_CLKCFG_CLKEN(value)              (HSMC_CLKCFG_CLKEN_Msk & ((value) << HSMC_CLKCFG_CLKEN_Pos))
#define HSMC_CLKCFG_CLKEDGE_Pos               _U_(17)                                              /**< (HSMC_CLKCFG) SMC Clock Edge Position */
#define HSMC_CLKCFG_CLKEDGE_Msk               (_U_(0x1) << HSMC_CLKCFG_CLKEDGE_Pos)                /**< (HSMC_CLKCFG) SMC Clock Edge Mask */
#define HSMC_CLKCFG_CLKEDGE(value)            (HSMC_CLKCFG_CLKEDGE_Msk & ((value) << HSMC_CLKCFG_CLKEDGE_Pos))
#define HSMC_CLKCFG_Msk                       _U_(0x000301FF)                                      /**< (HSMC_CLKCFG) Register Mask  */


/* -------- HSMC_WPMR : (SMC Offset: 0x7E4) (R/W 32) Write Protection Mode Register -------- */
#define HSMC_WPMR_RESETVALUE                  _U_(0x00)                                            /**<  (HSMC_WPMR) Write Protection Mode Register  Reset Value */

#define HSMC_WPMR_WPEN_Pos                    _U_(0)                                               /**< (HSMC_WPMR) Write Protection Enable Position */
#define HSMC_WPMR_WPEN_Msk                    (_U_(0x1) << HSMC_WPMR_WPEN_Pos)                     /**< (HSMC_WPMR) Write Protection Enable Mask */
#define HSMC_WPMR_WPEN(value)                 (HSMC_WPMR_WPEN_Msk & ((value) << HSMC_WPMR_WPEN_Pos))
#define   HSMC_WPMR_WPEN_0_Val                _U_(0x0)                                             /**< (HSMC_WPMR) Disables write protection if WPKEY value corresponds to 0x534D43 ("SMC" in ASCII)  */
#define   HSMC_WPMR_WPEN_1_Val                _U_(0x1)                                             /**< (HSMC_WPMR) Enables write protection if WPKEY value corresponds to 0x534D43 ("SMC" in ASCII)  */
#define HSMC_WPMR_WPEN_0                      (HSMC_WPMR_WPEN_0_Val << HSMC_WPMR_WPEN_Pos)         /**< (HSMC_WPMR) Disables write protection if WPKEY value corresponds to 0x534D43 ("SMC" in ASCII) Position  */
#define HSMC_WPMR_WPEN_1                      (HSMC_WPMR_WPEN_1_Val << HSMC_WPMR_WPEN_Pos)         /**< (HSMC_WPMR) Enables write protection if WPKEY value corresponds to 0x534D43 ("SMC" in ASCII) Position  */
#define HSMC_WPMR_WPKEY_Pos                   _U_(8)                                               /**< (HSMC_WPMR) Write Protection Key Position */
#define HSMC_WPMR_WPKEY_Msk                   (_U_(0xFFFFFF) << HSMC_WPMR_WPKEY_Pos)               /**< (HSMC_WPMR) Write Protection Key Mask */
#define HSMC_WPMR_WPKEY(value)                (HSMC_WPMR_WPKEY_Msk & ((value) << HSMC_WPMR_WPKEY_Pos))
#define   HSMC_WPMR_WPKEY_PASSWD_Val          _U_(0x534D43)                                        /**< (HSMC_WPMR) Writing any other value in this field aborts the write operation of bit WPEN. Always reads as 0.  */
#define HSMC_WPMR_WPKEY_PASSWD                (HSMC_WPMR_WPKEY_PASSWD_Val << HSMC_WPMR_WPKEY_Pos)  /**< (HSMC_WPMR) Writing any other value in this field aborts the write operation of bit WPEN. Always reads as 0. Position  */
#define HSMC_WPMR_Msk                         _U_(0xFFFFFF01)                                      /**< (HSMC_WPMR) Register Mask  */


/* -------- HSMC_WPSR : (SMC Offset: 0x7E8) ( R/ 32) Write Protection Status Register -------- */
#define HSMC_WPSR_RESETVALUE                  _U_(0x00)                                            /**<  (HSMC_WPSR) Write Protection Status Register  Reset Value */

#define HSMC_WPSR_WPVS_Pos                    _U_(0)                                               /**< (HSMC_WPSR) Write Protection Violation Status Position */
#define HSMC_WPSR_WPVS_Msk                    (_U_(0x1) << HSMC_WPSR_WPVS_Pos)                     /**< (HSMC_WPSR) Write Protection Violation Status Mask */
#define HSMC_WPSR_WPVS(value)                 (HSMC_WPSR_WPVS_Msk & ((value) << HSMC_WPSR_WPVS_Pos))
#define   HSMC_WPSR_WPVS_0_Val                _U_(0x0)                                             /**< (HSMC_WPSR) No write protect violation has occurred since the last read of the HSMC_WPSR.  */
#define   HSMC_WPSR_WPVS_1_Val                _U_(0x1)                                             /**< (HSMC_WPSR) A write protect violation has occurred since the last read of the HSMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define HSMC_WPSR_WPVS_0                      (HSMC_WPSR_WPVS_0_Val << HSMC_WPSR_WPVS_Pos)         /**< (HSMC_WPSR) No write protect violation has occurred since the last read of the HSMC_WPSR. Position  */
#define HSMC_WPSR_WPVS_1                      (HSMC_WPSR_WPVS_1_Val << HSMC_WPSR_WPVS_Pos)         /**< (HSMC_WPSR) A write protect violation has occurred since the last read of the HSMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position  */
#define HSMC_WPSR_WPVSRC_Pos                  _U_(8)                                               /**< (HSMC_WPSR) Write Protection Violation Source Position */
#define HSMC_WPSR_WPVSRC_Msk                  (_U_(0xFFFF) << HSMC_WPSR_WPVSRC_Pos)                /**< (HSMC_WPSR) Write Protection Violation Source Mask */
#define HSMC_WPSR_WPVSRC(value)               (HSMC_WPSR_WPVSRC_Msk & ((value) << HSMC_WPSR_WPVSRC_Pos))
#define HSMC_WPSR_Msk                         _U_(0x00FFFF01)                                      /**< (HSMC_WPSR) Register Mask  */


/** \brief SMC register offsets definitions */
#define HSMC_SETUP_REG_OFST            (0x00)              /**< (HSMC_SETUP) Setup Register  Offset */
#define HSMC_PULSE_REG_OFST            (0x04)              /**< (HSMC_PULSE) Pulse Register  Offset */
#define HSMC_CYCLE_REG_OFST            (0x08)              /**< (HSMC_CYCLE) Cycle Register  Offset */
#define HSMC_TIMINGS_REG_OFST          (0x0C)              /**< (HSMC_TIMINGS) Timings Register  Offset */
#define HSMC_MODE_REG_OFST             (0x10)              /**< (HSMC_MODE) Mode Register  Offset */
#define HSMC_PMECC_REG_OFST            (0x00)              /**< (HSMC_PMECC) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC0_REG_OFST           (0x00)              /**< (HSMC_PMECC0) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC1_REG_OFST           (0x04)              /**< (HSMC_PMECC1) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC2_REG_OFST           (0x08)              /**< (HSMC_PMECC2) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC3_REG_OFST           (0x0C)              /**< (HSMC_PMECC3) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC4_REG_OFST           (0x10)              /**< (HSMC_PMECC4) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC5_REG_OFST           (0x14)              /**< (HSMC_PMECC5) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC6_REG_OFST           (0x18)              /**< (HSMC_PMECC6) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC7_REG_OFST           (0x1C)              /**< (HSMC_PMECC7) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC8_REG_OFST           (0x20)              /**< (HSMC_PMECC8) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC9_REG_OFST           (0x24)              /**< (HSMC_PMECC9) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC10_REG_OFST          (0x28)              /**< (HSMC_PMECC10) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC11_REG_OFST          (0x2C)              /**< (HSMC_PMECC11) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC12_REG_OFST          (0x30)              /**< (HSMC_PMECC12) PMECC Redundancy x Register  Offset */
#define HSMC_PMECC13_REG_OFST          (0x34)              /**< (HSMC_PMECC13) PMECC Redundancy x Register  Offset */
#define HSMC_REM_REG_OFST              (0x00)              /**< (HSMC_REM) PMECC Remainder x Register  Offset */
#define HSMC_REM0_REG_OFST             (0x00)              /**< (HSMC_REM0) PMECC Remainder x Register  Offset */
#define HSMC_REM1_REG_OFST             (0x04)              /**< (HSMC_REM1) PMECC Remainder x Register  Offset */
#define HSMC_REM2_REG_OFST             (0x08)              /**< (HSMC_REM2) PMECC Remainder x Register  Offset */
#define HSMC_REM3_REG_OFST             (0x0C)              /**< (HSMC_REM3) PMECC Remainder x Register  Offset */
#define HSMC_REM4_REG_OFST             (0x10)              /**< (HSMC_REM4) PMECC Remainder x Register  Offset */
#define HSMC_REM5_REG_OFST             (0x14)              /**< (HSMC_REM5) PMECC Remainder x Register  Offset */
#define HSMC_REM6_REG_OFST             (0x18)              /**< (HSMC_REM6) PMECC Remainder x Register  Offset */
#define HSMC_REM7_REG_OFST             (0x1C)              /**< (HSMC_REM7) PMECC Remainder x Register  Offset */
#define HSMC_REM8_REG_OFST             (0x20)              /**< (HSMC_REM8) PMECC Remainder x Register  Offset */
#define HSMC_REM9_REG_OFST             (0x24)              /**< (HSMC_REM9) PMECC Remainder x Register  Offset */
#define HSMC_REM10_REG_OFST            (0x28)              /**< (HSMC_REM10) PMECC Remainder x Register  Offset */
#define HSMC_REM11_REG_OFST            (0x2C)              /**< (HSMC_REM11) PMECC Remainder x Register  Offset */
#define HSMC_REM12_REG_OFST            (0x30)              /**< (HSMC_REM12) PMECC Remainder x Register  Offset */
#define HSMC_REM13_REG_OFST            (0x34)              /**< (HSMC_REM13) PMECC Remainder x Register  Offset */
#define HSMC_REM14_REG_OFST            (0x38)              /**< (HSMC_REM14) PMECC Remainder x Register  Offset */
#define HSMC_REM15_REG_OFST            (0x3C)              /**< (HSMC_REM15) PMECC Remainder x Register  Offset */
#define HSMC_CFG_REG_OFST              (0x00)              /**< (HSMC_CFG) NFC Configuration Register Offset */
#define HSMC_CTRL_REG_OFST             (0x04)              /**< (HSMC_CTRL) NFC Control Register Offset */
#define HSMC_SR_REG_OFST               (0x08)              /**< (HSMC_SR) NFC Status Register Offset */
#define HSMC_IER_REG_OFST              (0x0C)              /**< (HSMC_IER) NFC Interrupt Enable Register Offset */
#define HSMC_IDR_REG_OFST              (0x10)              /**< (HSMC_IDR) NFC Interrupt Disable Register Offset */
#define HSMC_IMR_REG_OFST              (0x14)              /**< (HSMC_IMR) NFC Interrupt Mask Register Offset */
#define HSMC_ADDR_REG_OFST             (0x18)              /**< (HSMC_ADDR) NFC Address Cycle Zero Register Offset */
#define HSMC_BANK_REG_OFST             (0x1C)              /**< (HSMC_BANK) Bank Address Register Offset */
#define HSMC_PMECCFG_REG_OFST          (0x70)              /**< (HSMC_PMECCFG) PMECC Configuration Register Offset */
#define HSMC_PMECCSAREA_REG_OFST       (0x74)              /**< (HSMC_PMECCSAREA) PMECC Spare Area Size Register Offset */
#define HSMC_PMECCSADDR_REG_OFST       (0x78)              /**< (HSMC_PMECCSADDR) PMECC Start Address Register Offset */
#define HSMC_PMECCEADDR_REG_OFST       (0x7C)              /**< (HSMC_PMECCEADDR) PMECC End Address Register Offset */
#define HSMC_PMECCTRL_REG_OFST         (0x84)              /**< (HSMC_PMECCTRL) PMECC Control Register Offset */
#define HSMC_PMECCSR_REG_OFST          (0x88)              /**< (HSMC_PMECCSR) PMECC Status Register Offset */
#define HSMC_PMECCIER_REG_OFST         (0x8C)              /**< (HSMC_PMECCIER) PMECC Interrupt Enable register Offset */
#define HSMC_PMECCIDR_REG_OFST         (0x90)              /**< (HSMC_PMECCIDR) PMECC Interrupt Disable Register Offset */
#define HSMC_PMECCIMR_REG_OFST         (0x94)              /**< (HSMC_PMECCIMR) PMECC Interrupt Mask Register Offset */
#define HSMC_PMECCISR_REG_OFST         (0x98)              /**< (HSMC_PMECCISR) PMECC Interrupt Status Register Offset */
#define HSMC_ELCFG_REG_OFST            (0x500)             /**< (HSMC_ELCFG) PMECC Error Location Configuration Register Offset */
#define HSMC_ELPRIM_REG_OFST           (0x504)             /**< (HSMC_ELPRIM) PMECC Error Location Primitive Register Offset */
#define HSMC_ELEN_REG_OFST             (0x508)             /**< (HSMC_ELEN) PMECC Error Location Enable Register Offset */
#define HSMC_ELDIS_REG_OFST            (0x50C)             /**< (HSMC_ELDIS) PMECC Error Location Disable Register Offset */
#define HSMC_ELSR_REG_OFST             (0x510)             /**< (HSMC_ELSR) PMECC Error Location Status Register Offset */
#define HSMC_ELIER_REG_OFST            (0x514)             /**< (HSMC_ELIER) PMECC Error Location Interrupt Enable register Offset */
#define HSMC_ELIDR_REG_OFST            (0x518)             /**< (HSMC_ELIDR) PMECC Error Location Interrupt Disable Register Offset */
#define HSMC_ELIMR_REG_OFST            (0x51C)             /**< (HSMC_ELIMR) PMECC Error Location Interrupt Mask Register Offset */
#define HSMC_ELISR_REG_OFST            (0x520)             /**< (HSMC_ELISR) PMECC Error Location Interrupt Status Register Offset */
#define HSMC_SIGMA0_REG_OFST           (0x528)             /**< (HSMC_SIGMA0) PMECC Error Location SIGMA 0 Register Offset */
#define HSMC_SIGMA1_REG_OFST           (0x52C)             /**< (HSMC_SIGMA1) PMECC Error Location SIGMA 1 Register Offset */
#define HSMC_SIGMA2_REG_OFST           (0x530)             /**< (HSMC_SIGMA2) PMECC Error Location SIGMA 2 Register Offset */
#define HSMC_SIGMA3_REG_OFST           (0x534)             /**< (HSMC_SIGMA3) PMECC Error Location SIGMA 3 Register Offset */
#define HSMC_SIGMA4_REG_OFST           (0x538)             /**< (HSMC_SIGMA4) PMECC Error Location SIGMA 4 Register Offset */
#define HSMC_SIGMA5_REG_OFST           (0x53C)             /**< (HSMC_SIGMA5) PMECC Error Location SIGMA 5 Register Offset */
#define HSMC_SIGMA6_REG_OFST           (0x540)             /**< (HSMC_SIGMA6) PMECC Error Location SIGMA 6 Register Offset */
#define HSMC_SIGMA7_REG_OFST           (0x544)             /**< (HSMC_SIGMA7) PMECC Error Location SIGMA 7 Register Offset */
#define HSMC_SIGMA8_REG_OFST           (0x548)             /**< (HSMC_SIGMA8) PMECC Error Location SIGMA 8 Register Offset */
#define HSMC_SIGMA9_REG_OFST           (0x54C)             /**< (HSMC_SIGMA9) PMECC Error Location SIGMA 9 Register Offset */
#define HSMC_SIGMA10_REG_OFST          (0x550)             /**< (HSMC_SIGMA10) PMECC Error Location SIGMA 10 Register Offset */
#define HSMC_SIGMA11_REG_OFST          (0x554)             /**< (HSMC_SIGMA11) PMECC Error Location SIGMA 11 Register Offset */
#define HSMC_SIGMA12_REG_OFST          (0x558)             /**< (HSMC_SIGMA12) PMECC Error Location SIGMA 12 Register Offset */
#define HSMC_SIGMA13_REG_OFST          (0x55C)             /**< (HSMC_SIGMA13) PMECC Error Location SIGMA 13 Register Offset */
#define HSMC_SIGMA14_REG_OFST          (0x560)             /**< (HSMC_SIGMA14) PMECC Error Location SIGMA 14 Register Offset */
#define HSMC_SIGMA15_REG_OFST          (0x564)             /**< (HSMC_SIGMA15) PMECC Error Location SIGMA 15 Register Offset */
#define HSMC_SIGMA16_REG_OFST          (0x568)             /**< (HSMC_SIGMA16) PMECC Error Location SIGMA 16 Register Offset */
#define HSMC_SIGMA17_REG_OFST          (0x56C)             /**< (HSMC_SIGMA17) PMECC Error Location SIGMA 17 Register Offset */
#define HSMC_SIGMA18_REG_OFST          (0x570)             /**< (HSMC_SIGMA18) PMECC Error Location SIGMA 18 Register Offset */
#define HSMC_SIGMA19_REG_OFST          (0x574)             /**< (HSMC_SIGMA19) PMECC Error Location SIGMA 19 Register Offset */
#define HSMC_SIGMA20_REG_OFST          (0x578)             /**< (HSMC_SIGMA20) PMECC Error Location SIGMA 20 Register Offset */
#define HSMC_SIGMA21_REG_OFST          (0x57C)             /**< (HSMC_SIGMA21) PMECC Error Location SIGMA 21 Register Offset */
#define HSMC_SIGMA22_REG_OFST          (0x580)             /**< (HSMC_SIGMA22) PMECC Error Location SIGMA 22 Register Offset */
#define HSMC_SIGMA23_REG_OFST          (0x584)             /**< (HSMC_SIGMA23) PMECC Error Location SIGMA 23 Register Offset */
#define HSMC_SIGMA24_REG_OFST          (0x588)             /**< (HSMC_SIGMA24) PMECC Error Location SIGMA 24 Register Offset */
#define HSMC_SIGMA25_REG_OFST          (0x58C)             /**< (HSMC_SIGMA25) PMECC Error Location SIGMA 25 Register Offset */
#define HSMC_SIGMA26_REG_OFST          (0x590)             /**< (HSMC_SIGMA26) PMECC Error Location SIGMA 26 Register Offset */
#define HSMC_SIGMA27_REG_OFST          (0x594)             /**< (HSMC_SIGMA27) PMECC Error Location SIGMA 27 Register Offset */
#define HSMC_SIGMA28_REG_OFST          (0x598)             /**< (HSMC_SIGMA28) PMECC Error Location SIGMA 28 Register Offset */
#define HSMC_SIGMA29_REG_OFST          (0x59C)             /**< (HSMC_SIGMA29) PMECC Error Location SIGMA 29 Register Offset */
#define HSMC_SIGMA30_REG_OFST          (0x5A0)             /**< (HSMC_SIGMA30) PMECC Error Location SIGMA 30 Register Offset */
#define HSMC_SIGMA31_REG_OFST          (0x5A4)             /**< (HSMC_SIGMA31) PMECC Error Location SIGMA 31 Register Offset */
#define HSMC_SIGMA32_REG_OFST          (0x5A8)             /**< (HSMC_SIGMA32) PMECC Error Location SIGMA 32 Register Offset */
#define HSMC_ERRLOC_REG_OFST           (0x5AC)             /**< (HSMC_ERRLOC) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC0_REG_OFST          (0x5AC)             /**< (HSMC_ERRLOC0) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC1_REG_OFST          (0x5B0)             /**< (HSMC_ERRLOC1) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC2_REG_OFST          (0x5B4)             /**< (HSMC_ERRLOC2) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC3_REG_OFST          (0x5B8)             /**< (HSMC_ERRLOC3) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC4_REG_OFST          (0x5BC)             /**< (HSMC_ERRLOC4) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC5_REG_OFST          (0x5C0)             /**< (HSMC_ERRLOC5) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC6_REG_OFST          (0x5C4)             /**< (HSMC_ERRLOC6) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC7_REG_OFST          (0x5C8)             /**< (HSMC_ERRLOC7) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC8_REG_OFST          (0x5CC)             /**< (HSMC_ERRLOC8) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC9_REG_OFST          (0x5D0)             /**< (HSMC_ERRLOC9) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC10_REG_OFST         (0x5D4)             /**< (HSMC_ERRLOC10) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC11_REG_OFST         (0x5D8)             /**< (HSMC_ERRLOC11) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC12_REG_OFST         (0x5DC)             /**< (HSMC_ERRLOC12) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC13_REG_OFST         (0x5E0)             /**< (HSMC_ERRLOC13) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC14_REG_OFST         (0x5E4)             /**< (HSMC_ERRLOC14) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC15_REG_OFST         (0x5E8)             /**< (HSMC_ERRLOC15) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC16_REG_OFST         (0x5EC)             /**< (HSMC_ERRLOC16) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC17_REG_OFST         (0x5F0)             /**< (HSMC_ERRLOC17) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC18_REG_OFST         (0x5F4)             /**< (HSMC_ERRLOC18) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC19_REG_OFST         (0x5F8)             /**< (HSMC_ERRLOC19) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC20_REG_OFST         (0x5FC)             /**< (HSMC_ERRLOC20) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC21_REG_OFST         (0x600)             /**< (HSMC_ERRLOC21) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC22_REG_OFST         (0x604)             /**< (HSMC_ERRLOC22) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC23_REG_OFST         (0x608)             /**< (HSMC_ERRLOC23) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC24_REG_OFST         (0x60C)             /**< (HSMC_ERRLOC24) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC25_REG_OFST         (0x610)             /**< (HSMC_ERRLOC25) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC26_REG_OFST         (0x614)             /**< (HSMC_ERRLOC26) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC27_REG_OFST         (0x618)             /**< (HSMC_ERRLOC27) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC28_REG_OFST         (0x61C)             /**< (HSMC_ERRLOC28) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC29_REG_OFST         (0x620)             /**< (HSMC_ERRLOC29) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC30_REG_OFST         (0x624)             /**< (HSMC_ERRLOC30) PMECC Error Location x Register Offset */
#define HSMC_ERRLOC31_REG_OFST         (0x628)             /**< (HSMC_ERRLOC31) PMECC Error Location x Register Offset */
#define HSMC_OCMS_REG_OFST             (0x7A0)             /**< (HSMC_OCMS) Off Chip Memory Scrambling Register Offset */
#define HSMC_KEY1_REG_OFST             (0x7A4)             /**< (HSMC_KEY1) Off Chip Memory Scrambling KEY1 Register Offset */
#define HSMC_KEY2_REG_OFST             (0x7A8)             /**< (HSMC_KEY2) Off Chip Memory Scrambling KEY2 Register Offset */
#define HSMC_CLKCFG_REG_OFST           (0x7AC)             /**< (HSMC_CLKCFG) Clock Configuration Register Offset */
#define HSMC_WPMR_REG_OFST             (0x7E4)             /**< (HSMC_WPMR) Write Protection Mode Register Offset */
#define HSMC_WPSR_REG_OFST             (0x7E8)             /**< (HSMC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SMC_CS_NUMBER register API structure */
typedef struct
{
  __IO  uint32_t                       HSMC_SETUP;         /**< Offset: 0x00 (R/W  32) Setup Register  */
  __IO  uint32_t                       HSMC_PULSE;         /**< Offset: 0x04 (R/W  32) Pulse Register  */
  __IO  uint32_t                       HSMC_CYCLE;         /**< Offset: 0x08 (R/W  32) Cycle Register  */
  __IO  uint32_t                       HSMC_TIMINGS;       /**< Offset: 0x0C (R/W  32) Timings Register  */
  __IO  uint32_t                       HSMC_MODE;          /**< Offset: 0x10 (R/W  32) Mode Register  */
} smc_cs_number_registers_t;

/** \brief SMC_PMECC register API structure */
typedef struct
{
  __I   uint32_t                       HSMC_PMECC[14];     /**< Offset: 0x00 (R/   32) PMECC Redundancy x Register  */
  __I   uint8_t                        Reserved1[0x08];
} smc_pmecc_registers_t;

/** \brief SMC_REM register API structure */
typedef struct
{
  __I   uint32_t                       HSMC_REM[16];       /**< Offset: 0x00 (R/   32) PMECC Remainder x Register  */
} smc_rem_registers_t;

#define SMC_PMECC_NUMBER _U_(8)

#define SMC_REM_NUMBER _U_(8)

#define SMC_CS_NUMBER_NUMBER _U_(4)

/** \brief SMC register API structure */
typedef struct
{  /* Static Memory Controller */
  __IO  uint32_t                       HSMC_CFG;           /**< Offset: 0x00 (R/W  32) NFC Configuration Register */
  __O   uint32_t                       HSMC_CTRL;          /**< Offset: 0x04 ( /W  32) NFC Control Register */
  __I   uint32_t                       HSMC_SR;            /**< Offset: 0x08 (R/   32) NFC Status Register */
  __O   uint32_t                       HSMC_IER;           /**< Offset: 0x0C ( /W  32) NFC Interrupt Enable Register */
  __O   uint32_t                       HSMC_IDR;           /**< Offset: 0x10 ( /W  32) NFC Interrupt Disable Register */
  __I   uint32_t                       HSMC_IMR;           /**< Offset: 0x14 (R/   32) NFC Interrupt Mask Register */
  __IO  uint32_t                       HSMC_ADDR;          /**< Offset: 0x18 (R/W  32) NFC Address Cycle Zero Register */
  __IO  uint32_t                       HSMC_BANK;          /**< Offset: 0x1C (R/W  32) Bank Address Register */
  __I   uint8_t                        Reserved1[0x50];
  __IO  uint32_t                       HSMC_PMECCFG;       /**< Offset: 0x70 (R/W  32) PMECC Configuration Register */
  __IO  uint32_t                       HSMC_PMECCSAREA;    /**< Offset: 0x74 (R/W  32) PMECC Spare Area Size Register */
  __IO  uint32_t                       HSMC_PMECCSADDR;    /**< Offset: 0x78 (R/W  32) PMECC Start Address Register */
  __IO  uint32_t                       HSMC_PMECCEADDR;    /**< Offset: 0x7C (R/W  32) PMECC End Address Register */
  __I   uint8_t                        Reserved2[0x04];
  __O   uint32_t                       HSMC_PMECCTRL;      /**< Offset: 0x84 ( /W  32) PMECC Control Register */
  __I   uint32_t                       HSMC_PMECCSR;       /**< Offset: 0x88 (R/   32) PMECC Status Register */
  __O   uint32_t                       HSMC_PMECCIER;      /**< Offset: 0x8C ( /W  32) PMECC Interrupt Enable register */
  __O   uint32_t                       HSMC_PMECCIDR;      /**< Offset: 0x90 ( /W  32) PMECC Interrupt Disable Register */
  __I   uint32_t                       HSMC_PMECCIMR;      /**< Offset: 0x94 (R/   32) PMECC Interrupt Mask Register */
  __I   uint32_t                       HSMC_PMECCISR;      /**< Offset: 0x98 (R/   32) PMECC Interrupt Status Register */
  __I   uint8_t                        Reserved3[0x14];
        smc_pmecc_registers_t          SMC_PMECC[SMC_PMECC_NUMBER]; /**< Offset: 0xB0  */
        smc_rem_registers_t            SMC_REM[SMC_REM_NUMBER]; /**< Offset: 0x2B0  */
  __I   uint8_t                        Reserved4[0x50];
  __IO  uint32_t                       HSMC_ELCFG;         /**< Offset: 0x500 (R/W  32) PMECC Error Location Configuration Register */
  __I   uint32_t                       HSMC_ELPRIM;        /**< Offset: 0x504 (R/   32) PMECC Error Location Primitive Register */
  __O   uint32_t                       HSMC_ELEN;          /**< Offset: 0x508 ( /W  32) PMECC Error Location Enable Register */
  __O   uint32_t                       HSMC_ELDIS;         /**< Offset: 0x50C ( /W  32) PMECC Error Location Disable Register */
  __I   uint32_t                       HSMC_ELSR;          /**< Offset: 0x510 (R/   32) PMECC Error Location Status Register */
  __O   uint32_t                       HSMC_ELIER;         /**< Offset: 0x514 ( /W  32) PMECC Error Location Interrupt Enable register */
  __O   uint32_t                       HSMC_ELIDR;         /**< Offset: 0x518 ( /W  32) PMECC Error Location Interrupt Disable Register */
  __I   uint32_t                       HSMC_ELIMR;         /**< Offset: 0x51C (R/   32) PMECC Error Location Interrupt Mask Register */
  __I   uint32_t                       HSMC_ELISR;         /**< Offset: 0x520 (R/   32) PMECC Error Location Interrupt Status Register */
  __I   uint8_t                        Reserved5[0x04];
  __I   uint32_t                       HSMC_SIGMA0;        /**< Offset: 0x528 (R/   32) PMECC Error Location SIGMA 0 Register */
  __IO  uint32_t                       HSMC_SIGMA1;        /**< Offset: 0x52C (R/W  32) PMECC Error Location SIGMA 1 Register */
  __IO  uint32_t                       HSMC_SIGMA2;        /**< Offset: 0x530 (R/W  32) PMECC Error Location SIGMA 2 Register */
  __IO  uint32_t                       HSMC_SIGMA3;        /**< Offset: 0x534 (R/W  32) PMECC Error Location SIGMA 3 Register */
  __IO  uint32_t                       HSMC_SIGMA4;        /**< Offset: 0x538 (R/W  32) PMECC Error Location SIGMA 4 Register */
  __IO  uint32_t                       HSMC_SIGMA5;        /**< Offset: 0x53C (R/W  32) PMECC Error Location SIGMA 5 Register */
  __IO  uint32_t                       HSMC_SIGMA6;        /**< Offset: 0x540 (R/W  32) PMECC Error Location SIGMA 6 Register */
  __IO  uint32_t                       HSMC_SIGMA7;        /**< Offset: 0x544 (R/W  32) PMECC Error Location SIGMA 7 Register */
  __IO  uint32_t                       HSMC_SIGMA8;        /**< Offset: 0x548 (R/W  32) PMECC Error Location SIGMA 8 Register */
  __IO  uint32_t                       HSMC_SIGMA9;        /**< Offset: 0x54C (R/W  32) PMECC Error Location SIGMA 9 Register */
  __IO  uint32_t                       HSMC_SIGMA10;       /**< Offset: 0x550 (R/W  32) PMECC Error Location SIGMA 10 Register */
  __IO  uint32_t                       HSMC_SIGMA11;       /**< Offset: 0x554 (R/W  32) PMECC Error Location SIGMA 11 Register */
  __IO  uint32_t                       HSMC_SIGMA12;       /**< Offset: 0x558 (R/W  32) PMECC Error Location SIGMA 12 Register */
  __IO  uint32_t                       HSMC_SIGMA13;       /**< Offset: 0x55C (R/W  32) PMECC Error Location SIGMA 13 Register */
  __IO  uint32_t                       HSMC_SIGMA14;       /**< Offset: 0x560 (R/W  32) PMECC Error Location SIGMA 14 Register */
  __IO  uint32_t                       HSMC_SIGMA15;       /**< Offset: 0x564 (R/W  32) PMECC Error Location SIGMA 15 Register */
  __IO  uint32_t                       HSMC_SIGMA16;       /**< Offset: 0x568 (R/W  32) PMECC Error Location SIGMA 16 Register */
  __IO  uint32_t                       HSMC_SIGMA17;       /**< Offset: 0x56C (R/W  32) PMECC Error Location SIGMA 17 Register */
  __IO  uint32_t                       HSMC_SIGMA18;       /**< Offset: 0x570 (R/W  32) PMECC Error Location SIGMA 18 Register */
  __IO  uint32_t                       HSMC_SIGMA19;       /**< Offset: 0x574 (R/W  32) PMECC Error Location SIGMA 19 Register */
  __IO  uint32_t                       HSMC_SIGMA20;       /**< Offset: 0x578 (R/W  32) PMECC Error Location SIGMA 20 Register */
  __IO  uint32_t                       HSMC_SIGMA21;       /**< Offset: 0x57C (R/W  32) PMECC Error Location SIGMA 21 Register */
  __IO  uint32_t                       HSMC_SIGMA22;       /**< Offset: 0x580 (R/W  32) PMECC Error Location SIGMA 22 Register */
  __IO  uint32_t                       HSMC_SIGMA23;       /**< Offset: 0x584 (R/W  32) PMECC Error Location SIGMA 23 Register */
  __IO  uint32_t                       HSMC_SIGMA24;       /**< Offset: 0x588 (R/W  32) PMECC Error Location SIGMA 24 Register */
  __IO  uint32_t                       HSMC_SIGMA25;       /**< Offset: 0x58C (R/W  32) PMECC Error Location SIGMA 25 Register */
  __IO  uint32_t                       HSMC_SIGMA26;       /**< Offset: 0x590 (R/W  32) PMECC Error Location SIGMA 26 Register */
  __IO  uint32_t                       HSMC_SIGMA27;       /**< Offset: 0x594 (R/W  32) PMECC Error Location SIGMA 27 Register */
  __IO  uint32_t                       HSMC_SIGMA28;       /**< Offset: 0x598 (R/W  32) PMECC Error Location SIGMA 28 Register */
  __IO  uint32_t                       HSMC_SIGMA29;       /**< Offset: 0x59C (R/W  32) PMECC Error Location SIGMA 29 Register */
  __IO  uint32_t                       HSMC_SIGMA30;       /**< Offset: 0x5A0 (R/W  32) PMECC Error Location SIGMA 30 Register */
  __IO  uint32_t                       HSMC_SIGMA31;       /**< Offset: 0x5A4 (R/W  32) PMECC Error Location SIGMA 31 Register */
  __IO  uint32_t                       HSMC_SIGMA32;       /**< Offset: 0x5A8 (R/W  32) PMECC Error Location SIGMA 32 Register */
  __I   uint32_t                       HSMC_ERRLOC[32];    /**< Offset: 0x5AC (R/   32) PMECC Error Location x Register */
  __I   uint8_t                        Reserved6[0xD4];
        smc_cs_number_registers_t      SMC_CS_NUMBER[SMC_CS_NUMBER_NUMBER]; /**< Offset: 0x700  */
  __I   uint8_t                        Reserved7[0x50];
  __IO  uint32_t                       HSMC_OCMS;          /**< Offset: 0x7A0 (R/W  32) Off Chip Memory Scrambling Register */
  __O   uint32_t                       HSMC_KEY1;          /**< Offset: 0x7A4 ( /W  32) Off Chip Memory Scrambling KEY1 Register */
  __O   uint32_t                       HSMC_KEY2;          /**< Offset: 0x7A8 ( /W  32) Off Chip Memory Scrambling KEY2 Register */
  __IO  uint32_t                       HSMC_CLKCFG;        /**< Offset: 0x7AC (R/W  32) Clock Configuration Register */
  __I   uint8_t                        Reserved8[0x34];
  __IO  uint32_t                       HSMC_WPMR;          /**< Offset: 0x7E4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       HSMC_WPSR;          /**< Offset: 0x7E8 (R/   32) Write Protection Status Register */
} smc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_SMC_COMPONENT_H_ */
