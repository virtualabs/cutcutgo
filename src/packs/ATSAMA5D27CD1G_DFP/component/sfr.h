/*
 * Component description for SFR
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
#ifndef _SAMA5D2_SFR_COMPONENT_H_
#define _SAMA5D2_SFR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFR                                          */
/* ************************************************************************** */

/* -------- SFR_DDRCFG : (SFR Offset: 0x04) (R/W 32) DDR Configuration Register -------- */
#define SFR_DDRCFG_FDQIEN_Pos                 _U_(16)                                              /**< (SFR_DDRCFG) Force DDR_DQ Input Buffer Always On Position */
#define SFR_DDRCFG_FDQIEN_Msk                 (_U_(0x1) << SFR_DDRCFG_FDQIEN_Pos)                  /**< (SFR_DDRCFG) Force DDR_DQ Input Buffer Always On Mask */
#define SFR_DDRCFG_FDQIEN(value)              (SFR_DDRCFG_FDQIEN_Msk & ((value) << SFR_DDRCFG_FDQIEN_Pos))
#define SFR_DDRCFG_FDQSIEN_Pos                _U_(17)                                              /**< (SFR_DDRCFG) Force DDR_DQS Input Buffer Always On Position */
#define SFR_DDRCFG_FDQSIEN_Msk                (_U_(0x1) << SFR_DDRCFG_FDQSIEN_Pos)                 /**< (SFR_DDRCFG) Force DDR_DQS Input Buffer Always On Mask */
#define SFR_DDRCFG_FDQSIEN(value)             (SFR_DDRCFG_FDQSIEN_Msk & ((value) << SFR_DDRCFG_FDQSIEN_Pos))
#define SFR_DDRCFG_Msk                        _U_(0x00030000)                                      /**< (SFR_DDRCFG) Register Mask  */


/* -------- SFR_OHCIICR : (SFR Offset: 0x10) (R/W 32) OHCI Interrupt Configuration Register -------- */
#define SFR_OHCIICR_RES0_Pos                  _U_(0)                                               /**< (SFR_OHCIICR) USB PORTx RESET Position */
#define SFR_OHCIICR_RES0_Msk                  (_U_(0x1) << SFR_OHCIICR_RES0_Pos)                   /**< (SFR_OHCIICR) USB PORTx RESET Mask */
#define SFR_OHCIICR_RES0(value)               (SFR_OHCIICR_RES0_Msk & ((value) << SFR_OHCIICR_RES0_Pos))
#define SFR_OHCIICR_RES1_Pos                  _U_(1)                                               /**< (SFR_OHCIICR) USB PORTx RESET Position */
#define SFR_OHCIICR_RES1_Msk                  (_U_(0x1) << SFR_OHCIICR_RES1_Pos)                   /**< (SFR_OHCIICR) USB PORTx RESET Mask */
#define SFR_OHCIICR_RES1(value)               (SFR_OHCIICR_RES1_Msk & ((value) << SFR_OHCIICR_RES1_Pos))
#define SFR_OHCIICR_RES2_Pos                  _U_(2)                                               /**< (SFR_OHCIICR) USB PORTx RESET Position */
#define SFR_OHCIICR_RES2_Msk                  (_U_(0x1) << SFR_OHCIICR_RES2_Pos)                   /**< (SFR_OHCIICR) USB PORTx RESET Mask */
#define SFR_OHCIICR_RES2(value)               (SFR_OHCIICR_RES2_Msk & ((value) << SFR_OHCIICR_RES2_Pos))
#define SFR_OHCIICR_ARIE_Pos                  _U_(4)                                               /**< (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Position */
#define SFR_OHCIICR_ARIE_Msk                  (_U_(0x1) << SFR_OHCIICR_ARIE_Pos)                   /**< (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Mask */
#define SFR_OHCIICR_ARIE(value)               (SFR_OHCIICR_ARIE_Msk & ((value) << SFR_OHCIICR_ARIE_Pos))
#define SFR_OHCIICR_APPSTART_Pos              _U_(5)                                               /**< (SFR_OHCIICR) Reserved Position */
#define SFR_OHCIICR_APPSTART_Msk              (_U_(0x1) << SFR_OHCIICR_APPSTART_Pos)               /**< (SFR_OHCIICR) Reserved Mask */
#define SFR_OHCIICR_APPSTART(value)           (SFR_OHCIICR_APPSTART_Msk & ((value) << SFR_OHCIICR_APPSTART_Pos))
#define SFR_OHCIICR_SUSPEND_A_Pos             _U_(8)                                               /**< (SFR_OHCIICR) USB PORT A Position */
#define SFR_OHCIICR_SUSPEND_A_Msk             (_U_(0x1) << SFR_OHCIICR_SUSPEND_A_Pos)              /**< (SFR_OHCIICR) USB PORT A Mask */
#define SFR_OHCIICR_SUSPEND_A(value)          (SFR_OHCIICR_SUSPEND_A_Msk & ((value) << SFR_OHCIICR_SUSPEND_A_Pos))
#define SFR_OHCIICR_SUSPEND_B_Pos             _U_(9)                                               /**< (SFR_OHCIICR) USB PORT B Position */
#define SFR_OHCIICR_SUSPEND_B_Msk             (_U_(0x1) << SFR_OHCIICR_SUSPEND_B_Pos)              /**< (SFR_OHCIICR) USB PORT B Mask */
#define SFR_OHCIICR_SUSPEND_B(value)          (SFR_OHCIICR_SUSPEND_B_Msk & ((value) << SFR_OHCIICR_SUSPEND_B_Pos))
#define SFR_OHCIICR_SUSPEND_C_Pos             _U_(10)                                              /**< (SFR_OHCIICR) USB PORT C Position */
#define SFR_OHCIICR_SUSPEND_C_Msk             (_U_(0x1) << SFR_OHCIICR_SUSPEND_C_Pos)              /**< (SFR_OHCIICR) USB PORT C Mask */
#define SFR_OHCIICR_SUSPEND_C(value)          (SFR_OHCIICR_SUSPEND_C_Msk & ((value) << SFR_OHCIICR_SUSPEND_C_Pos))
#define SFR_OHCIICR_UDPPUDIS_Pos              _U_(23)                                              /**< (SFR_OHCIICR) USB DEVICE PULLUP DISABLE Position */
#define SFR_OHCIICR_UDPPUDIS_Msk              (_U_(0x1) << SFR_OHCIICR_UDPPUDIS_Pos)               /**< (SFR_OHCIICR) USB DEVICE PULLUP DISABLE Mask */
#define SFR_OHCIICR_UDPPUDIS(value)           (SFR_OHCIICR_UDPPUDIS_Msk & ((value) << SFR_OHCIICR_UDPPUDIS_Pos))
#define SFR_OHCIICR_HSIC_SEL_Pos              _U_(27)                                              /**< (SFR_OHCIICR) Reserved Position */
#define SFR_OHCIICR_HSIC_SEL_Msk              (_U_(0x1) << SFR_OHCIICR_HSIC_SEL_Pos)               /**< (SFR_OHCIICR) Reserved Mask */
#define SFR_OHCIICR_HSIC_SEL(value)           (SFR_OHCIICR_HSIC_SEL_Msk & ((value) << SFR_OHCIICR_HSIC_SEL_Pos))
#define SFR_OHCIICR_Msk                       _U_(0x08800737)                                      /**< (SFR_OHCIICR) Register Mask  */

#define SFR_OHCIICR_RES_Pos                   _U_(0)                                               /**< (SFR_OHCIICR Position) USB PORTx RESET */
#define SFR_OHCIICR_RES_Msk                   (_U_(0x7) << SFR_OHCIICR_RES_Pos)                    /**< (SFR_OHCIICR Mask) RES */
#define SFR_OHCIICR_RES(value)                (SFR_OHCIICR_RES_Msk & ((value) << SFR_OHCIICR_RES_Pos)) 

/* -------- SFR_OHCIISR : (SFR Offset: 0x14) ( R/ 32) OHCI Interrupt Status Register -------- */
#define SFR_OHCIISR_RIS0_Pos                  _U_(0)                                               /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Position */
#define SFR_OHCIISR_RIS0_Msk                  (_U_(0x1) << SFR_OHCIISR_RIS0_Pos)                   /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Mask */
#define SFR_OHCIISR_RIS0(value)               (SFR_OHCIISR_RIS0_Msk & ((value) << SFR_OHCIISR_RIS0_Pos))
#define SFR_OHCIISR_RIS1_Pos                  _U_(1)                                               /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Position */
#define SFR_OHCIISR_RIS1_Msk                  (_U_(0x1) << SFR_OHCIISR_RIS1_Pos)                   /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Mask */
#define SFR_OHCIISR_RIS1(value)               (SFR_OHCIISR_RIS1_Msk & ((value) << SFR_OHCIISR_RIS1_Pos))
#define SFR_OHCIISR_RIS2_Pos                  _U_(2)                                               /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Position */
#define SFR_OHCIISR_RIS2_Msk                  (_U_(0x1) << SFR_OHCIISR_RIS2_Pos)                   /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Mask */
#define SFR_OHCIISR_RIS2(value)               (SFR_OHCIISR_RIS2_Msk & ((value) << SFR_OHCIISR_RIS2_Pos))
#define SFR_OHCIISR_Msk                       _U_(0x00000007)                                      /**< (SFR_OHCIISR) Register Mask  */

#define SFR_OHCIISR_RIS_Pos                   _U_(0)                                               /**< (SFR_OHCIISR Position) OHCI Resume Interrupt Status Port 2 */
#define SFR_OHCIISR_RIS_Msk                   (_U_(0x7) << SFR_OHCIISR_RIS_Pos)                    /**< (SFR_OHCIISR Mask) RIS */
#define SFR_OHCIISR_RIS(value)                (SFR_OHCIISR_RIS_Msk & ((value) << SFR_OHCIISR_RIS_Pos)) 

/* -------- SFR_SECURE : (SFR Offset: 0x28) (R/W 32) Security Configuration Register -------- */
#define SFR_SECURE_ROM_Pos                    _U_(0)                                               /**< (SFR_SECURE) Disable Access to ROM Code Position */
#define SFR_SECURE_ROM_Msk                    (_U_(0x1) << SFR_SECURE_ROM_Pos)                     /**< (SFR_SECURE) Disable Access to ROM Code Mask */
#define SFR_SECURE_ROM(value)                 (SFR_SECURE_ROM_Msk & ((value) << SFR_SECURE_ROM_Pos))
#define SFR_SECURE_FUSE_Pos                   _U_(8)                                               /**< (SFR_SECURE) Disable Access to Fuse Controller Position */
#define SFR_SECURE_FUSE_Msk                   (_U_(0x1) << SFR_SECURE_FUSE_Pos)                    /**< (SFR_SECURE) Disable Access to Fuse Controller Mask */
#define SFR_SECURE_FUSE(value)                (SFR_SECURE_FUSE_Msk & ((value) << SFR_SECURE_FUSE_Pos))
#define SFR_SECURE_Msk                        _U_(0x00000101)                                      /**< (SFR_SECURE) Register Mask  */


/* -------- SFR_UTMICKTRIM : (SFR Offset: 0x30) (R/W 32) UTMI Clock Trimming Register -------- */
#define SFR_UTMICKTRIM_FREQ_Pos               _U_(0)                                               /**< (SFR_UTMICKTRIM) UTMI Reference Clock Frequency Position */
#define SFR_UTMICKTRIM_FREQ_Msk               (_U_(0x3) << SFR_UTMICKTRIM_FREQ_Pos)                /**< (SFR_UTMICKTRIM) UTMI Reference Clock Frequency Mask */
#define SFR_UTMICKTRIM_FREQ(value)            (SFR_UTMICKTRIM_FREQ_Msk & ((value) << SFR_UTMICKTRIM_FREQ_Pos))
#define   SFR_UTMICKTRIM_FREQ_12_Val          _U_(0x0)                                             /**< (SFR_UTMICKTRIM) 12 MHz reference clock  */
#define   SFR_UTMICKTRIM_FREQ_16_Val          _U_(0x1)                                             /**< (SFR_UTMICKTRIM) 16 MHz reference clock  */
#define   SFR_UTMICKTRIM_FREQ_24_Val          _U_(0x2)                                             /**< (SFR_UTMICKTRIM) 24 MHz reference clock  */
#define SFR_UTMICKTRIM_FREQ_12                (SFR_UTMICKTRIM_FREQ_12_Val << SFR_UTMICKTRIM_FREQ_Pos) /**< (SFR_UTMICKTRIM) 12 MHz reference clock Position  */
#define SFR_UTMICKTRIM_FREQ_16                (SFR_UTMICKTRIM_FREQ_16_Val << SFR_UTMICKTRIM_FREQ_Pos) /**< (SFR_UTMICKTRIM) 16 MHz reference clock Position  */
#define SFR_UTMICKTRIM_FREQ_24                (SFR_UTMICKTRIM_FREQ_24_Val << SFR_UTMICKTRIM_FREQ_Pos) /**< (SFR_UTMICKTRIM) 24 MHz reference clock Position  */
#define SFR_UTMICKTRIM_VBG_Pos                _U_(16)                                              /**< (SFR_UTMICKTRIM) UTMI Band Gap Voltage Trimming Position */
#define SFR_UTMICKTRIM_VBG_Msk                (_U_(0x3) << SFR_UTMICKTRIM_VBG_Pos)                 /**< (SFR_UTMICKTRIM) UTMI Band Gap Voltage Trimming Mask */
#define SFR_UTMICKTRIM_VBG(value)             (SFR_UTMICKTRIM_VBG_Msk & ((value) << SFR_UTMICKTRIM_VBG_Pos))
#define SFR_UTMICKTRIM_Msk                    _U_(0x00030003)                                      /**< (SFR_UTMICKTRIM) Register Mask  */


/* -------- SFR_UTMIHSTRIM : (SFR Offset: 0x34) (R/W 32) UTMI High-Speed Trimming Register -------- */
#define SFR_UTMIHSTRIM_SQUELCH_Pos            _U_(0)                                               /**< (SFR_UTMIHSTRIM) UTMI HS SQUELCH Voltage Trimming Position */
#define SFR_UTMIHSTRIM_SQUELCH_Msk            (_U_(0x7) << SFR_UTMIHSTRIM_SQUELCH_Pos)             /**< (SFR_UTMIHSTRIM) UTMI HS SQUELCH Voltage Trimming Mask */
#define SFR_UTMIHSTRIM_SQUELCH(value)         (SFR_UTMIHSTRIM_SQUELCH_Msk & ((value) << SFR_UTMIHSTRIM_SQUELCH_Pos))
#define SFR_UTMIHSTRIM_DISC_Pos               _U_(4)                                               /**< (SFR_UTMIHSTRIM) UTMI Disconnect Voltage Trimming Position */
#define SFR_UTMIHSTRIM_DISC_Msk               (_U_(0x7) << SFR_UTMIHSTRIM_DISC_Pos)                /**< (SFR_UTMIHSTRIM) UTMI Disconnect Voltage Trimming Mask */
#define SFR_UTMIHSTRIM_DISC(value)            (SFR_UTMIHSTRIM_DISC_Msk & ((value) << SFR_UTMIHSTRIM_DISC_Pos))
#define SFR_UTMIHSTRIM_SLOPE0_Pos             _U_(8)                                               /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Position */
#define SFR_UTMIHSTRIM_SLOPE0_Msk             (_U_(0x7) << SFR_UTMIHSTRIM_SLOPE0_Pos)              /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Mask */
#define SFR_UTMIHSTRIM_SLOPE0(value)          (SFR_UTMIHSTRIM_SLOPE0_Msk & ((value) << SFR_UTMIHSTRIM_SLOPE0_Pos))
#define SFR_UTMIHSTRIM_SLOPE1_Pos             _U_(12)                                              /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Position */
#define SFR_UTMIHSTRIM_SLOPE1_Msk             (_U_(0x7) << SFR_UTMIHSTRIM_SLOPE1_Pos)              /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Mask */
#define SFR_UTMIHSTRIM_SLOPE1(value)          (SFR_UTMIHSTRIM_SLOPE1_Msk & ((value) << SFR_UTMIHSTRIM_SLOPE1_Pos))
#define SFR_UTMIHSTRIM_SLOPE2_Pos             _U_(16)                                              /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Position */
#define SFR_UTMIHSTRIM_SLOPE2_Msk             (_U_(0x7) << SFR_UTMIHSTRIM_SLOPE2_Pos)              /**< (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Mask */
#define SFR_UTMIHSTRIM_SLOPE2(value)          (SFR_UTMIHSTRIM_SLOPE2_Msk & ((value) << SFR_UTMIHSTRIM_SLOPE2_Pos))
#define SFR_UTMIHSTRIM_Msk                    _U_(0x00077777)                                      /**< (SFR_UTMIHSTRIM) Register Mask  */


/* -------- SFR_UTMIFSTRIM : (SFR Offset: 0x38) (R/W 32) UTMI Full-Speed Trimming Register -------- */
#define SFR_UTMIFSTRIM_RISE_Pos               _U_(0)                                               /**< (SFR_UTMIFSTRIM) FS Transceiver Output Rising Slope Trimming Position */
#define SFR_UTMIFSTRIM_RISE_Msk               (_U_(0x7) << SFR_UTMIFSTRIM_RISE_Pos)                /**< (SFR_UTMIFSTRIM) FS Transceiver Output Rising Slope Trimming Mask */
#define SFR_UTMIFSTRIM_RISE(value)            (SFR_UTMIFSTRIM_RISE_Msk & ((value) << SFR_UTMIFSTRIM_RISE_Pos))
#define SFR_UTMIFSTRIM_FALL_Pos               _U_(4)                                               /**< (SFR_UTMIFSTRIM) FS Transceiver Output Falling Slope Trimming Position */
#define SFR_UTMIFSTRIM_FALL_Msk               (_U_(0x7) << SFR_UTMIFSTRIM_FALL_Pos)                /**< (SFR_UTMIFSTRIM) FS Transceiver Output Falling Slope Trimming Mask */
#define SFR_UTMIFSTRIM_FALL(value)            (SFR_UTMIFSTRIM_FALL_Msk & ((value) << SFR_UTMIFSTRIM_FALL_Pos))
#define SFR_UTMIFSTRIM_XCVR_Pos               _U_(8)                                               /**< (SFR_UTMIFSTRIM) FS Transceiver Crossover Voltage Trimming Position */
#define SFR_UTMIFSTRIM_XCVR_Msk               (_U_(0x3) << SFR_UTMIFSTRIM_XCVR_Pos)                /**< (SFR_UTMIFSTRIM) FS Transceiver Crossover Voltage Trimming Mask */
#define SFR_UTMIFSTRIM_XCVR(value)            (SFR_UTMIFSTRIM_XCVR_Msk & ((value) << SFR_UTMIFSTRIM_XCVR_Pos))
#define SFR_UTMIFSTRIM_ZN_Pos                 _U_(16)                                              /**< (SFR_UTMIFSTRIM) FS Transceiver NMOS Impedance Trimming Position */
#define SFR_UTMIFSTRIM_ZN_Msk                 (_U_(0x7) << SFR_UTMIFSTRIM_ZN_Pos)                  /**< (SFR_UTMIFSTRIM) FS Transceiver NMOS Impedance Trimming Mask */
#define SFR_UTMIFSTRIM_ZN(value)              (SFR_UTMIFSTRIM_ZN_Msk & ((value) << SFR_UTMIFSTRIM_ZN_Pos))
#define SFR_UTMIFSTRIM_ZP_Pos                 _U_(20)                                              /**< (SFR_UTMIFSTRIM) FS Transceiver PMOS Impedance Trimming Position */
#define SFR_UTMIFSTRIM_ZP_Msk                 (_U_(0x7) << SFR_UTMIFSTRIM_ZP_Pos)                  /**< (SFR_UTMIFSTRIM) FS Transceiver PMOS Impedance Trimming Mask */
#define SFR_UTMIFSTRIM_ZP(value)              (SFR_UTMIFSTRIM_ZP_Msk & ((value) << SFR_UTMIFSTRIM_ZP_Pos))
#define SFR_UTMIFSTRIM_Msk                    _U_(0x00770377)                                      /**< (SFR_UTMIFSTRIM) Register Mask  */


/* -------- SFR_UTMISWAP : (SFR Offset: 0x3C) (R/W 32) UTMI DP/DM Pin Swapping Register -------- */
#define SFR_UTMISWAP_PORT0_Pos                _U_(0)                                               /**< (SFR_UTMISWAP) PORT 0 DP/DM Pin Swapping Position */
#define SFR_UTMISWAP_PORT0_Msk                (_U_(0x1) << SFR_UTMISWAP_PORT0_Pos)                 /**< (SFR_UTMISWAP) PORT 0 DP/DM Pin Swapping Mask */
#define SFR_UTMISWAP_PORT0(value)             (SFR_UTMISWAP_PORT0_Msk & ((value) << SFR_UTMISWAP_PORT0_Pos))
#define   SFR_UTMISWAP_PORT0_NORMAL_Val       _U_(0x0)                                             /**< (SFR_UTMISWAP) DP/DM normal pinout.  */
#define   SFR_UTMISWAP_PORT0_SWAPPED_Val      _U_(0x1)                                             /**< (SFR_UTMISWAP) DP/DM swapped pinout.  */
#define SFR_UTMISWAP_PORT0_NORMAL             (SFR_UTMISWAP_PORT0_NORMAL_Val << SFR_UTMISWAP_PORT0_Pos) /**< (SFR_UTMISWAP) DP/DM normal pinout. Position  */
#define SFR_UTMISWAP_PORT0_SWAPPED            (SFR_UTMISWAP_PORT0_SWAPPED_Val << SFR_UTMISWAP_PORT0_Pos) /**< (SFR_UTMISWAP) DP/DM swapped pinout. Position  */
#define SFR_UTMISWAP_PORT1_Pos                _U_(1)                                               /**< (SFR_UTMISWAP) PORT 1 DP/DM Pin Swapping Position */
#define SFR_UTMISWAP_PORT1_Msk                (_U_(0x1) << SFR_UTMISWAP_PORT1_Pos)                 /**< (SFR_UTMISWAP) PORT 1 DP/DM Pin Swapping Mask */
#define SFR_UTMISWAP_PORT1(value)             (SFR_UTMISWAP_PORT1_Msk & ((value) << SFR_UTMISWAP_PORT1_Pos))
#define   SFR_UTMISWAP_PORT1_NORMAL_Val       _U_(0x0)                                             /**< (SFR_UTMISWAP) DP/DM normal pinout.  */
#define   SFR_UTMISWAP_PORT1_SWAPPED_Val      _U_(0x1)                                             /**< (SFR_UTMISWAP) DP/DM swapped pinout.  */
#define SFR_UTMISWAP_PORT1_NORMAL             (SFR_UTMISWAP_PORT1_NORMAL_Val << SFR_UTMISWAP_PORT1_Pos) /**< (SFR_UTMISWAP) DP/DM normal pinout. Position  */
#define SFR_UTMISWAP_PORT1_SWAPPED            (SFR_UTMISWAP_PORT1_SWAPPED_Val << SFR_UTMISWAP_PORT1_Pos) /**< (SFR_UTMISWAP) DP/DM swapped pinout. Position  */
#define SFR_UTMISWAP_PORT2_Pos                _U_(2)                                               /**< (SFR_UTMISWAP) PORT 2 DP/DM Pin Swapping Position */
#define SFR_UTMISWAP_PORT2_Msk                (_U_(0x1) << SFR_UTMISWAP_PORT2_Pos)                 /**< (SFR_UTMISWAP) PORT 2 DP/DM Pin Swapping Mask */
#define SFR_UTMISWAP_PORT2(value)             (SFR_UTMISWAP_PORT2_Msk & ((value) << SFR_UTMISWAP_PORT2_Pos))
#define   SFR_UTMISWAP_PORT2_NORMAL_Val       _U_(0x0)                                             /**< (SFR_UTMISWAP) DP/DM normal pinout.  */
#define   SFR_UTMISWAP_PORT2_SWAPPED_Val      _U_(0x1)                                             /**< (SFR_UTMISWAP) DP/DM swapped pinout.  */
#define SFR_UTMISWAP_PORT2_NORMAL             (SFR_UTMISWAP_PORT2_NORMAL_Val << SFR_UTMISWAP_PORT2_Pos) /**< (SFR_UTMISWAP) DP/DM normal pinout. Position  */
#define SFR_UTMISWAP_PORT2_SWAPPED            (SFR_UTMISWAP_PORT2_SWAPPED_Val << SFR_UTMISWAP_PORT2_Pos) /**< (SFR_UTMISWAP) DP/DM swapped pinout. Position  */
#define SFR_UTMISWAP_Msk                      _U_(0x00000007)                                      /**< (SFR_UTMISWAP) Register Mask  */

#define SFR_UTMISWAP_PORT_Pos                 _U_(0)                                               /**< (SFR_UTMISWAP Position) PORT 2 DP/DM Pin Swapping */
#define SFR_UTMISWAP_PORT_Msk                 (_U_(0x7) << SFR_UTMISWAP_PORT_Pos)                  /**< (SFR_UTMISWAP Mask) PORT */
#define SFR_UTMISWAP_PORT(value)              (SFR_UTMISWAP_PORT_Msk & ((value) << SFR_UTMISWAP_PORT_Pos)) 

/* -------- SFR_CAN : (SFR Offset: 0x48) (R/W 32) CAN Memories Address-based Register -------- */
#define SFR_CAN_EXT_MEM_CAN0_ADDR_Pos         _U_(0)                                               /**< (SFR_CAN) MSB CAN0 DMA Base Address Position */
#define SFR_CAN_EXT_MEM_CAN0_ADDR_Msk         (_U_(0xFFFF) << SFR_CAN_EXT_MEM_CAN0_ADDR_Pos)       /**< (SFR_CAN) MSB CAN0 DMA Base Address Mask */
#define SFR_CAN_EXT_MEM_CAN0_ADDR(value)      (SFR_CAN_EXT_MEM_CAN0_ADDR_Msk & ((value) << SFR_CAN_EXT_MEM_CAN0_ADDR_Pos))
#define SFR_CAN_EXT_MEM_CAN1_ADDR_Pos         _U_(16)                                              /**< (SFR_CAN) MSB CAN1 DMA Base Address Position */
#define SFR_CAN_EXT_MEM_CAN1_ADDR_Msk         (_U_(0xFFFF) << SFR_CAN_EXT_MEM_CAN1_ADDR_Pos)       /**< (SFR_CAN) MSB CAN1 DMA Base Address Mask */
#define SFR_CAN_EXT_MEM_CAN1_ADDR(value)      (SFR_CAN_EXT_MEM_CAN1_ADDR_Msk & ((value) << SFR_CAN_EXT_MEM_CAN1_ADDR_Pos))
#define SFR_CAN_Msk                           _U_(0xFFFFFFFF)                                      /**< (SFR_CAN) Register Mask  */


/* -------- SFR_SN0 : (SFR Offset: 0x4C) ( R/ 32) Serial Number 0 Register -------- */
#define SFR_SN0_SN0_Pos                       _U_(0)                                               /**< (SFR_SN0) Serial Number 0 Position */
#define SFR_SN0_SN0_Msk                       (_U_(0xFFFFFFFF) << SFR_SN0_SN0_Pos)                 /**< (SFR_SN0) Serial Number 0 Mask */
#define SFR_SN0_SN0(value)                    (SFR_SN0_SN0_Msk & ((value) << SFR_SN0_SN0_Pos))    
#define SFR_SN0_Msk                           _U_(0xFFFFFFFF)                                      /**< (SFR_SN0) Register Mask  */


/* -------- SFR_SN1 : (SFR Offset: 0x50) ( R/ 32) Serial Number 1 Register -------- */
#define SFR_SN1_SN1_Pos                       _U_(0)                                               /**< (SFR_SN1) Serial Number 1 Position */
#define SFR_SN1_SN1_Msk                       (_U_(0xFFFFFFFF) << SFR_SN1_SN1_Pos)                 /**< (SFR_SN1) Serial Number 1 Mask */
#define SFR_SN1_SN1(value)                    (SFR_SN1_SN1_Msk & ((value) << SFR_SN1_SN1_Pos))    
#define SFR_SN1_Msk                           _U_(0xFFFFFFFF)                                      /**< (SFR_SN1) Register Mask  */


/* -------- SFR_AICREDIR : (SFR Offset: 0x54) (R/W 32) AIC Interrupt Redirection Register -------- */
#define SFR_AICREDIR_NSAIC_Pos                _U_(0)                                               /**< (SFR_AICREDIR) Interrupt Redirection to Non-Secure AIC Position */
#define SFR_AICREDIR_NSAIC_Msk                (_U_(0x1) << SFR_AICREDIR_NSAIC_Pos)                 /**< (SFR_AICREDIR) Interrupt Redirection to Non-Secure AIC Mask */
#define SFR_AICREDIR_NSAIC(value)             (SFR_AICREDIR_NSAIC_Msk & ((value) << SFR_AICREDIR_NSAIC_Pos))
#define SFR_AICREDIR_AICREDIRKEY_Pos          _U_(1)                                               /**< (SFR_AICREDIR) Unlock Key Position */
#define SFR_AICREDIR_AICREDIRKEY_Msk          (_U_(0x7FFFFFFF) << SFR_AICREDIR_AICREDIRKEY_Pos)    /**< (SFR_AICREDIR) Unlock Key Mask */
#define SFR_AICREDIR_AICREDIRKEY(value)       (SFR_AICREDIR_AICREDIRKEY_Msk & ((value) << SFR_AICREDIR_AICREDIRKEY_Pos))
#define SFR_AICREDIR_Msk                      _U_(0xFFFFFFFF)                                      /**< (SFR_AICREDIR) Register Mask  */


/* -------- SFR_L2CC_HRAMC : (SFR Offset: 0x58) (R/W 32) L2CC_HRAMC1 -------- */
#define SFR_L2CC_HRAMC_SRAM_SEL_Pos           _U_(0)                                               /**< (SFR_L2CC_HRAMC) SRAM Selector Position */
#define SFR_L2CC_HRAMC_SRAM_SEL_Msk           (_U_(0x1) << SFR_L2CC_HRAMC_SRAM_SEL_Pos)            /**< (SFR_L2CC_HRAMC) SRAM Selector Mask */
#define SFR_L2CC_HRAMC_SRAM_SEL(value)        (SFR_L2CC_HRAMC_SRAM_SEL_Msk & ((value) << SFR_L2CC_HRAMC_SRAM_SEL_Pos))
#define SFR_L2CC_HRAMC_Msk                    _U_(0x00000001)                                      /**< (SFR_L2CC_HRAMC) Register Mask  */


/* -------- SFR_I2SCLKSEL : (SFR Offset: 0x90) (R/W 32) I2SC Register -------- */
#define SFR_I2SCLKSEL_CLKSEL0_Pos             _U_(0)                                               /**< (SFR_I2SCLKSEL) Clock Selection 0 Position */
#define SFR_I2SCLKSEL_CLKSEL0_Msk             (_U_(0x1) << SFR_I2SCLKSEL_CLKSEL0_Pos)              /**< (SFR_I2SCLKSEL) Clock Selection 0 Mask */
#define SFR_I2SCLKSEL_CLKSEL0(value)          (SFR_I2SCLKSEL_CLKSEL0_Msk & ((value) << SFR_I2SCLKSEL_CLKSEL0_Pos))
#define SFR_I2SCLKSEL_CLKSEL1_Pos             _U_(1)                                               /**< (SFR_I2SCLKSEL) Clock Selection 1 Position */
#define SFR_I2SCLKSEL_CLKSEL1_Msk             (_U_(0x1) << SFR_I2SCLKSEL_CLKSEL1_Pos)              /**< (SFR_I2SCLKSEL) Clock Selection 1 Mask */
#define SFR_I2SCLKSEL_CLKSEL1(value)          (SFR_I2SCLKSEL_CLKSEL1_Msk & ((value) << SFR_I2SCLKSEL_CLKSEL1_Pos))
#define SFR_I2SCLKSEL_Msk                     _U_(0x00000003)                                      /**< (SFR_I2SCLKSEL) Register Mask  */

#define SFR_I2SCLKSEL_CLKSEL_Pos              _U_(0)                                               /**< (SFR_I2SCLKSEL Position) Clock Selection x */
#define SFR_I2SCLKSEL_CLKSEL_Msk              (_U_(0x3) << SFR_I2SCLKSEL_CLKSEL_Pos)               /**< (SFR_I2SCLKSEL Mask) CLKSEL */
#define SFR_I2SCLKSEL_CLKSEL(value)           (SFR_I2SCLKSEL_CLKSEL_Msk & ((value) << SFR_I2SCLKSEL_CLKSEL_Pos)) 

/* -------- SFR_QSPICLK_REG : (SFR Offset: 0x94) (R/W 32) QSPI Clock Pad Supply Select Register -------- */
#define SFR_QSPICLK_REG_SUP_SEL_Pos           _U_(0)                                               /**< (SFR_QSPICLK_REG) Supply Selection Position */
#define SFR_QSPICLK_REG_SUP_SEL_Msk           (_U_(0x1) << SFR_QSPICLK_REG_SUP_SEL_Pos)            /**< (SFR_QSPICLK_REG) Supply Selection Mask */
#define SFR_QSPICLK_REG_SUP_SEL(value)        (SFR_QSPICLK_REG_SUP_SEL_Msk & ((value) << SFR_QSPICLK_REG_SUP_SEL_Pos))
#define SFR_QSPICLK_REG_Msk                   _U_(0x00000001)                                      /**< (SFR_QSPICLK_REG) Register Mask  */


/** \brief SFR register offsets definitions */
#define SFR_DDRCFG_REG_OFST            (0x04)              /**< (SFR_DDRCFG) DDR Configuration Register Offset */
#define SFR_OHCIICR_REG_OFST           (0x10)              /**< (SFR_OHCIICR) OHCI Interrupt Configuration Register Offset */
#define SFR_OHCIISR_REG_OFST           (0x14)              /**< (SFR_OHCIISR) OHCI Interrupt Status Register Offset */
#define SFR_SECURE_REG_OFST            (0x28)              /**< (SFR_SECURE) Security Configuration Register Offset */
#define SFR_UTMICKTRIM_REG_OFST        (0x30)              /**< (SFR_UTMICKTRIM) UTMI Clock Trimming Register Offset */
#define SFR_UTMIHSTRIM_REG_OFST        (0x34)              /**< (SFR_UTMIHSTRIM) UTMI High-Speed Trimming Register Offset */
#define SFR_UTMIFSTRIM_REG_OFST        (0x38)              /**< (SFR_UTMIFSTRIM) UTMI Full-Speed Trimming Register Offset */
#define SFR_UTMISWAP_REG_OFST          (0x3C)              /**< (SFR_UTMISWAP) UTMI DP/DM Pin Swapping Register Offset */
#define SFR_CAN_REG_OFST               (0x48)              /**< (SFR_CAN) CAN Memories Address-based Register Offset */
#define SFR_SN0_REG_OFST               (0x4C)              /**< (SFR_SN0) Serial Number 0 Register Offset */
#define SFR_SN1_REG_OFST               (0x50)              /**< (SFR_SN1) Serial Number 1 Register Offset */
#define SFR_AICREDIR_REG_OFST          (0x54)              /**< (SFR_AICREDIR) AIC Interrupt Redirection Register Offset */
#define SFR_L2CC_HRAMC_REG_OFST        (0x58)              /**< (SFR_L2CC_HRAMC) L2CC_HRAMC1 Offset */
#define SFR_I2SCLKSEL_REG_OFST         (0x90)              /**< (SFR_I2SCLKSEL) I2SC Register Offset */
#define SFR_QSPICLK_REG_REG_OFST       (0x94)              /**< (SFR_QSPICLK_REG) QSPI Clock Pad Supply Select Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFR register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       SFR_DDRCFG;         /**< Offset: 0x04 (R/W  32) DDR Configuration Register */
  __I   uint8_t                        Reserved2[0x08];
  __IO  uint32_t                       SFR_OHCIICR;        /**< Offset: 0x10 (R/W  32) OHCI Interrupt Configuration Register */
  __I   uint32_t                       SFR_OHCIISR;        /**< Offset: 0x14 (R/   32) OHCI Interrupt Status Register */
  __I   uint8_t                        Reserved3[0x10];
  __IO  uint32_t                       SFR_SECURE;         /**< Offset: 0x28 (R/W  32) Security Configuration Register */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       SFR_UTMICKTRIM;     /**< Offset: 0x30 (R/W  32) UTMI Clock Trimming Register */
  __IO  uint32_t                       SFR_UTMIHSTRIM;     /**< Offset: 0x34 (R/W  32) UTMI High-Speed Trimming Register */
  __IO  uint32_t                       SFR_UTMIFSTRIM;     /**< Offset: 0x38 (R/W  32) UTMI Full-Speed Trimming Register */
  __IO  uint32_t                       SFR_UTMISWAP;       /**< Offset: 0x3C (R/W  32) UTMI DP/DM Pin Swapping Register */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       SFR_CAN;            /**< Offset: 0x48 (R/W  32) CAN Memories Address-based Register */
  __I   uint32_t                       SFR_SN0;            /**< Offset: 0x4C (R/   32) Serial Number 0 Register */
  __I   uint32_t                       SFR_SN1;            /**< Offset: 0x50 (R/   32) Serial Number 1 Register */
  __IO  uint32_t                       SFR_AICREDIR;       /**< Offset: 0x54 (R/W  32) AIC Interrupt Redirection Register */
  __IO  uint32_t                       SFR_L2CC_HRAMC;     /**< Offset: 0x58 (R/W  32) L2CC_HRAMC1 */
  __I   uint8_t                        Reserved6[0x34];
  __IO  uint32_t                       SFR_I2SCLKSEL;      /**< Offset: 0x90 (R/W  32) I2SC Register */
  __IO  uint32_t                       SFR_QSPICLK_REG;    /**< Offset: 0x94 (R/W  32) QSPI Clock Pad Supply Select Register */
} sfr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_SFR_COMPONENT_H_ */
