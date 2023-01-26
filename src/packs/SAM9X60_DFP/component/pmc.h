/*
 * Component description for PMC
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
#ifndef _SAM9X_PMC_COMPONENT_H_
#define _SAM9X_PMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PMC                                          */
/* ************************************************************************** */

/* -------- PMC_SCER : (PMC Offset: 0x00) ( /W 32) System Clock Enable Register -------- */
#define PMC_SCER_DDRCK_Pos                    _U_(2)                                               /**< (PMC_SCER) MPDDRC/SDRAMC Clock Enable Position */
#define PMC_SCER_DDRCK_Msk                    (_U_(0x1) << PMC_SCER_DDRCK_Pos)                     /**< (PMC_SCER) MPDDRC/SDRAMC Clock Enable Mask */
#define PMC_SCER_DDRCK(value)                 (PMC_SCER_DDRCK_Msk & ((value) << PMC_SCER_DDRCK_Pos))
#define PMC_SCER_UHP_Pos                      _U_(6)                                               /**< (PMC_SCER) USB Host OHCI Clocks Enable Position */
#define PMC_SCER_UHP_Msk                      (_U_(0x1) << PMC_SCER_UHP_Pos)                       /**< (PMC_SCER) USB Host OHCI Clocks Enable Mask */
#define PMC_SCER_UHP(value)                   (PMC_SCER_UHP_Msk & ((value) << PMC_SCER_UHP_Pos))  
#define PMC_SCER_PCK0_Pos                     _U_(8)                                               /**< (PMC_SCER) Programmable Clock 0 Output Enable Position */
#define PMC_SCER_PCK0_Msk                     (_U_(0x1) << PMC_SCER_PCK0_Pos)                      /**< (PMC_SCER) Programmable Clock 0 Output Enable Mask */
#define PMC_SCER_PCK0(value)                  (PMC_SCER_PCK0_Msk & ((value) << PMC_SCER_PCK0_Pos))
#define PMC_SCER_PCK1_Pos                     _U_(9)                                               /**< (PMC_SCER) Programmable Clock 1 Output Enable Position */
#define PMC_SCER_PCK1_Msk                     (_U_(0x1) << PMC_SCER_PCK1_Pos)                      /**< (PMC_SCER) Programmable Clock 1 Output Enable Mask */
#define PMC_SCER_PCK1(value)                  (PMC_SCER_PCK1_Msk & ((value) << PMC_SCER_PCK1_Pos))
#define PMC_SCER_QSPICLK_Pos                  _U_(19)                                              /**< (PMC_SCER) QSPI 2x Clock Enable Position */
#define PMC_SCER_QSPICLK_Msk                  (_U_(0x1) << PMC_SCER_QSPICLK_Pos)                   /**< (PMC_SCER) QSPI 2x Clock Enable Mask */
#define PMC_SCER_QSPICLK(value)               (PMC_SCER_QSPICLK_Msk & ((value) << PMC_SCER_QSPICLK_Pos))
#define PMC_SCER_Msk                          _U_(0x00080344)                                      /**< (PMC_SCER) Register Mask  */

#define PMC_SCER_PCK_Pos                      _U_(8)                                               /**< (PMC_SCER Position) Programmable Clock x Output Enable */
#define PMC_SCER_PCK_Msk                      (_U_(0x3) << PMC_SCER_PCK_Pos)                       /**< (PMC_SCER Mask) PCK */
#define PMC_SCER_PCK(value)                   (PMC_SCER_PCK_Msk & ((value) << PMC_SCER_PCK_Pos))   

/* -------- PMC_SCDR : (PMC Offset: 0x04) ( /W 32) System Clock Disable Register -------- */
#define PMC_SCDR_DDRCK_Pos                    _U_(2)                                               /**< (PMC_SCDR) MPDDRC/SDRAMC Clock Disable Position */
#define PMC_SCDR_DDRCK_Msk                    (_U_(0x1) << PMC_SCDR_DDRCK_Pos)                     /**< (PMC_SCDR) MPDDRC/SDRAMC Clock Disable Mask */
#define PMC_SCDR_DDRCK(value)                 (PMC_SCDR_DDRCK_Msk & ((value) << PMC_SCDR_DDRCK_Pos))
#define PMC_SCDR_UHP_Pos                      _U_(6)                                               /**< (PMC_SCDR) USB Host OHCI Clocks Disable Position */
#define PMC_SCDR_UHP_Msk                      (_U_(0x1) << PMC_SCDR_UHP_Pos)                       /**< (PMC_SCDR) USB Host OHCI Clocks Disable Mask */
#define PMC_SCDR_UHP(value)                   (PMC_SCDR_UHP_Msk & ((value) << PMC_SCDR_UHP_Pos))  
#define PMC_SCDR_PCK0_Pos                     _U_(8)                                               /**< (PMC_SCDR) Programmable Clock 0 Output Disable Position */
#define PMC_SCDR_PCK0_Msk                     (_U_(0x1) << PMC_SCDR_PCK0_Pos)                      /**< (PMC_SCDR) Programmable Clock 0 Output Disable Mask */
#define PMC_SCDR_PCK0(value)                  (PMC_SCDR_PCK0_Msk & ((value) << PMC_SCDR_PCK0_Pos))
#define PMC_SCDR_PCK1_Pos                     _U_(9)                                               /**< (PMC_SCDR) Programmable Clock 1 Output Disable Position */
#define PMC_SCDR_PCK1_Msk                     (_U_(0x1) << PMC_SCDR_PCK1_Pos)                      /**< (PMC_SCDR) Programmable Clock 1 Output Disable Mask */
#define PMC_SCDR_PCK1(value)                  (PMC_SCDR_PCK1_Msk & ((value) << PMC_SCDR_PCK1_Pos))
#define PMC_SCDR_QSPICLK_Pos                  _U_(19)                                              /**< (PMC_SCDR) QSPI 2x Clock Disable Position */
#define PMC_SCDR_QSPICLK_Msk                  (_U_(0x1) << PMC_SCDR_QSPICLK_Pos)                   /**< (PMC_SCDR) QSPI 2x Clock Disable Mask */
#define PMC_SCDR_QSPICLK(value)               (PMC_SCDR_QSPICLK_Msk & ((value) << PMC_SCDR_QSPICLK_Pos))
#define PMC_SCDR_Msk                          _U_(0x00080344)                                      /**< (PMC_SCDR) Register Mask  */

#define PMC_SCDR_PCK_Pos                      _U_(8)                                               /**< (PMC_SCDR Position) Programmable Clock x Output Disable */
#define PMC_SCDR_PCK_Msk                      (_U_(0x3) << PMC_SCDR_PCK_Pos)                       /**< (PMC_SCDR Mask) PCK */
#define PMC_SCDR_PCK(value)                   (PMC_SCDR_PCK_Msk & ((value) << PMC_SCDR_PCK_Pos))   

/* -------- PMC_SCSR : (PMC Offset: 0x08) ( R/ 32) System Clock Status Register -------- */
#define PMC_SCSR_DDRCK_Pos                    _U_(2)                                               /**< (PMC_SCSR) MPDDRC/SDRAMC Clock Status Position */
#define PMC_SCSR_DDRCK_Msk                    (_U_(0x1) << PMC_SCSR_DDRCK_Pos)                     /**< (PMC_SCSR) MPDDRC/SDRAMC Clock Status Mask */
#define PMC_SCSR_DDRCK(value)                 (PMC_SCSR_DDRCK_Msk & ((value) << PMC_SCSR_DDRCK_Pos))
#define PMC_SCSR_UHP_Pos                      _U_(6)                                               /**< (PMC_SCSR) USB Host OHCI Clocks Status Position */
#define PMC_SCSR_UHP_Msk                      (_U_(0x1) << PMC_SCSR_UHP_Pos)                       /**< (PMC_SCSR) USB Host OHCI Clocks Status Mask */
#define PMC_SCSR_UHP(value)                   (PMC_SCSR_UHP_Msk & ((value) << PMC_SCSR_UHP_Pos))  
#define PMC_SCSR_PCK0_Pos                     _U_(8)                                               /**< (PMC_SCSR) Programmable Clock 0 Output Status Position */
#define PMC_SCSR_PCK0_Msk                     (_U_(0x1) << PMC_SCSR_PCK0_Pos)                      /**< (PMC_SCSR) Programmable Clock 0 Output Status Mask */
#define PMC_SCSR_PCK0(value)                  (PMC_SCSR_PCK0_Msk & ((value) << PMC_SCSR_PCK0_Pos))
#define PMC_SCSR_PCK1_Pos                     _U_(9)                                               /**< (PMC_SCSR) Programmable Clock 1 Output Status Position */
#define PMC_SCSR_PCK1_Msk                     (_U_(0x1) << PMC_SCSR_PCK1_Pos)                      /**< (PMC_SCSR) Programmable Clock 1 Output Status Mask */
#define PMC_SCSR_PCK1(value)                  (PMC_SCSR_PCK1_Msk & ((value) << PMC_SCSR_PCK1_Pos))
#define PMC_SCSR_QSPICLK_Pos                  _U_(19)                                              /**< (PMC_SCSR) QSPI 2x Clock Status Position */
#define PMC_SCSR_QSPICLK_Msk                  (_U_(0x1) << PMC_SCSR_QSPICLK_Pos)                   /**< (PMC_SCSR) QSPI 2x Clock Status Mask */
#define PMC_SCSR_QSPICLK(value)               (PMC_SCSR_QSPICLK_Msk & ((value) << PMC_SCSR_QSPICLK_Pos))
#define PMC_SCSR_Msk                          _U_(0x00080344)                                      /**< (PMC_SCSR) Register Mask  */

#define PMC_SCSR_PCK_Pos                      _U_(8)                                               /**< (PMC_SCSR Position) Programmable Clock x Output Status */
#define PMC_SCSR_PCK_Msk                      (_U_(0x3) << PMC_SCSR_PCK_Pos)                       /**< (PMC_SCSR Mask) PCK */
#define PMC_SCSR_PCK(value)                   (PMC_SCSR_PCK_Msk & ((value) << PMC_SCSR_PCK_Pos))   

/* -------- PMC_PLL_CTRL0 : (PMC Offset: 0x0C) (R/W 32) PLL Control Register 0 -------- */
#define PMC_PLL_CTRL0_DIVPMC_Pos              _U_(0)                                               /**< (PMC_PLL_CTRL0) Divider for PMC Position */
#define PMC_PLL_CTRL0_DIVPMC_Msk              (_U_(0xFF) << PMC_PLL_CTRL0_DIVPMC_Pos)              /**< (PMC_PLL_CTRL0) Divider for PMC Mask */
#define PMC_PLL_CTRL0_DIVPMC(value)           (PMC_PLL_CTRL0_DIVPMC_Msk & ((value) << PMC_PLL_CTRL0_DIVPMC_Pos))
#define PMC_PLL_CTRL0_ENPLL_Pos               _U_(28)                                              /**< (PMC_PLL_CTRL0) Enable PLL Position */
#define PMC_PLL_CTRL0_ENPLL_Msk               (_U_(0x1) << PMC_PLL_CTRL0_ENPLL_Pos)                /**< (PMC_PLL_CTRL0) Enable PLL Mask */
#define PMC_PLL_CTRL0_ENPLL(value)            (PMC_PLL_CTRL0_ENPLL_Msk & ((value) << PMC_PLL_CTRL0_ENPLL_Pos))
#define PMC_PLL_CTRL0_ENPLLCK_Pos             _U_(29)                                              /**< (PMC_PLL_CTRL0) Enable PLL Clock for PMC Position */
#define PMC_PLL_CTRL0_ENPLLCK_Msk             (_U_(0x1) << PMC_PLL_CTRL0_ENPLLCK_Pos)              /**< (PMC_PLL_CTRL0) Enable PLL Clock for PMC Mask */
#define PMC_PLL_CTRL0_ENPLLCK(value)          (PMC_PLL_CTRL0_ENPLLCK_Msk & ((value) << PMC_PLL_CTRL0_ENPLLCK_Pos))
#define PMC_PLL_CTRL0_ENLOCK_Pos              _U_(31)                                              /**< (PMC_PLL_CTRL0) Enable PLL Lock Position */
#define PMC_PLL_CTRL0_ENLOCK_Msk              (_U_(0x1) << PMC_PLL_CTRL0_ENLOCK_Pos)               /**< (PMC_PLL_CTRL0) Enable PLL Lock Mask */
#define PMC_PLL_CTRL0_ENLOCK(value)           (PMC_PLL_CTRL0_ENLOCK_Msk & ((value) << PMC_PLL_CTRL0_ENLOCK_Pos))
#define PMC_PLL_CTRL0_Msk                     _U_(0xB00000FF)                                      /**< (PMC_PLL_CTRL0) Register Mask  */


/* -------- PMC_PLL_CTRL1 : (PMC Offset: 0x10) (R/W 32) PLL Control Register 1 -------- */
#define PMC_PLL_CTRL1_FRACR_Pos               _U_(0)                                               /**< (PMC_PLL_CTRL1) Fractional Loop Divider Setting Position */
#define PMC_PLL_CTRL1_FRACR_Msk               (_U_(0x3FFFFF) << PMC_PLL_CTRL1_FRACR_Pos)           /**< (PMC_PLL_CTRL1) Fractional Loop Divider Setting Mask */
#define PMC_PLL_CTRL1_FRACR(value)            (PMC_PLL_CTRL1_FRACR_Msk & ((value) << PMC_PLL_CTRL1_FRACR_Pos))
#define PMC_PLL_CTRL1_MUL_Pos                 _U_(24)                                              /**< (PMC_PLL_CTRL1) Multiplier Factor Value Position */
#define PMC_PLL_CTRL1_MUL_Msk                 (_U_(0xFF) << PMC_PLL_CTRL1_MUL_Pos)                 /**< (PMC_PLL_CTRL1) Multiplier Factor Value Mask */
#define PMC_PLL_CTRL1_MUL(value)              (PMC_PLL_CTRL1_MUL_Msk & ((value) << PMC_PLL_CTRL1_MUL_Pos))
#define PMC_PLL_CTRL1_Msk                     _U_(0xFF3FFFFF)                                      /**< (PMC_PLL_CTRL1) Register Mask  */


/* -------- PMC_PLL_SSR : (PMC Offset: 0x14) (R/W 32) PLL Spread Spectrum Register -------- */
#define PMC_PLL_SSR_STEP_Pos                  _U_(0)                                               /**< (PMC_PLL_SSR) Spread Spectrum Step Size Position */
#define PMC_PLL_SSR_STEP_Msk                  (_U_(0xFFFF) << PMC_PLL_SSR_STEP_Pos)                /**< (PMC_PLL_SSR) Spread Spectrum Step Size Mask */
#define PMC_PLL_SSR_STEP(value)               (PMC_PLL_SSR_STEP_Msk & ((value) << PMC_PLL_SSR_STEP_Pos))
#define PMC_PLL_SSR_NSTEP_Pos                 _U_(16)                                              /**< (PMC_PLL_SSR) Spread Spectrum Number of Steps Position */
#define PMC_PLL_SSR_NSTEP_Msk                 (_U_(0xFF) << PMC_PLL_SSR_NSTEP_Pos)                 /**< (PMC_PLL_SSR) Spread Spectrum Number of Steps Mask */
#define PMC_PLL_SSR_NSTEP(value)              (PMC_PLL_SSR_NSTEP_Msk & ((value) << PMC_PLL_SSR_NSTEP_Pos))
#define PMC_PLL_SSR_ENSPREAD_Pos              _U_(28)                                              /**< (PMC_PLL_SSR) Spread Spectrum Enable Position */
#define PMC_PLL_SSR_ENSPREAD_Msk              (_U_(0x1) << PMC_PLL_SSR_ENSPREAD_Pos)               /**< (PMC_PLL_SSR) Spread Spectrum Enable Mask */
#define PMC_PLL_SSR_ENSPREAD(value)           (PMC_PLL_SSR_ENSPREAD_Msk & ((value) << PMC_PLL_SSR_ENSPREAD_Pos))
#define PMC_PLL_SSR_Msk                       _U_(0x10FFFFFF)                                      /**< (PMC_PLL_SSR) Register Mask  */


/* -------- PMC_PLL_ACR : (PMC Offset: 0x18) (R/W 32) PLL Analog Control Register -------- */
#define PMC_PLL_ACR_CONTROL_Pos               _U_(0)                                               /**< (PMC_PLL_ACR) PLL CONTROL Value Selection Position */
#define PMC_PLL_ACR_CONTROL_Msk               (_U_(0xFFF) << PMC_PLL_ACR_CONTROL_Pos)              /**< (PMC_PLL_ACR) PLL CONTROL Value Selection Mask */
#define PMC_PLL_ACR_CONTROL(value)            (PMC_PLL_ACR_CONTROL_Msk & ((value) << PMC_PLL_ACR_CONTROL_Pos))
#define PMC_PLL_ACR_UTMIVR_Pos                _U_(12)                                              /**< (PMC_PLL_ACR) UPLL Voltage Regulator Control Position */
#define PMC_PLL_ACR_UTMIVR_Msk                (_U_(0x1) << PMC_PLL_ACR_UTMIVR_Pos)                 /**< (PMC_PLL_ACR) UPLL Voltage Regulator Control Mask */
#define PMC_PLL_ACR_UTMIVR(value)             (PMC_PLL_ACR_UTMIVR_Msk & ((value) << PMC_PLL_ACR_UTMIVR_Pos))
#define PMC_PLL_ACR_UTMIBG_Pos                _U_(13)                                              /**< (PMC_PLL_ACR) UPLL Bandgap Control Position */
#define PMC_PLL_ACR_UTMIBG_Msk                (_U_(0x1) << PMC_PLL_ACR_UTMIBG_Pos)                 /**< (PMC_PLL_ACR) UPLL Bandgap Control Mask */
#define PMC_PLL_ACR_UTMIBG(value)             (PMC_PLL_ACR_UTMIBG_Msk & ((value) << PMC_PLL_ACR_UTMIBG_Pos))
#define PMC_PLL_ACR_LOCK_THR_Pos              _U_(16)                                              /**< (PMC_PLL_ACR) PLL Lock Threshold Value Selection Position */
#define PMC_PLL_ACR_LOCK_THR_Msk              (_U_(0x7) << PMC_PLL_ACR_LOCK_THR_Pos)               /**< (PMC_PLL_ACR) PLL Lock Threshold Value Selection Mask */
#define PMC_PLL_ACR_LOCK_THR(value)           (PMC_PLL_ACR_LOCK_THR_Msk & ((value) << PMC_PLL_ACR_LOCK_THR_Pos))
#define PMC_PLL_ACR_LOOP_FILTER_Pos           _U_(24)                                              /**< (PMC_PLL_ACR) LOOP Filter Selection Position */
#define PMC_PLL_ACR_LOOP_FILTER_Msk           (_U_(0x3F) << PMC_PLL_ACR_LOOP_FILTER_Pos)           /**< (PMC_PLL_ACR) LOOP Filter Selection Mask */
#define PMC_PLL_ACR_LOOP_FILTER(value)        (PMC_PLL_ACR_LOOP_FILTER_Msk & ((value) << PMC_PLL_ACR_LOOP_FILTER_Pos))
#define PMC_PLL_ACR_Msk                       _U_(0x3F073FFF)                                      /**< (PMC_PLL_ACR) Register Mask  */


/* -------- PMC_PLL_UPDT : (PMC Offset: 0x1C) (R/W 32) PLL Update Register -------- */
#define PMC_PLL_UPDT_ID_Pos                   _U_(0)                                               /**< (PMC_PLL_UPDT) PLL ID Position */
#define PMC_PLL_UPDT_ID_Msk                   (_U_(0x1) << PMC_PLL_UPDT_ID_Pos)                    /**< (PMC_PLL_UPDT) PLL ID Mask */
#define PMC_PLL_UPDT_ID(value)                (PMC_PLL_UPDT_ID_Msk & ((value) << PMC_PLL_UPDT_ID_Pos))
#define PMC_PLL_UPDT_UPDATE_Pos               _U_(8)                                               /**< (PMC_PLL_UPDT) PLL Setting Update (write-only) Position */
#define PMC_PLL_UPDT_UPDATE_Msk               (_U_(0x1) << PMC_PLL_UPDT_UPDATE_Pos)                /**< (PMC_PLL_UPDT) PLL Setting Update (write-only) Mask */
#define PMC_PLL_UPDT_UPDATE(value)            (PMC_PLL_UPDT_UPDATE_Msk & ((value) << PMC_PLL_UPDT_UPDATE_Pos))
#define PMC_PLL_UPDT_STUPTIM_Pos              _U_(16)                                              /**< (PMC_PLL_UPDT) Startup Time Position */
#define PMC_PLL_UPDT_STUPTIM_Msk              (_U_(0xFF) << PMC_PLL_UPDT_STUPTIM_Pos)              /**< (PMC_PLL_UPDT) Startup Time Mask */
#define PMC_PLL_UPDT_STUPTIM(value)           (PMC_PLL_UPDT_STUPTIM_Msk & ((value) << PMC_PLL_UPDT_STUPTIM_Pos))
#define PMC_PLL_UPDT_Msk                      _U_(0x00FF0101)                                      /**< (PMC_PLL_UPDT) Register Mask  */


/* -------- CKGR_MOR : (PMC Offset: 0x20) (R/W 32) Main Oscillator Register -------- */
#define CKGR_MOR_MOSCXTEN_Pos                 _U_(0)                                               /**< (CKGR_MOR) Main Crystal Oscillator Enable Position */
#define CKGR_MOR_MOSCXTEN_Msk                 (_U_(0x1) << CKGR_MOR_MOSCXTEN_Pos)                  /**< (CKGR_MOR) Main Crystal Oscillator Enable Mask */
#define CKGR_MOR_MOSCXTEN(value)              (CKGR_MOR_MOSCXTEN_Msk & ((value) << CKGR_MOR_MOSCXTEN_Pos))
#define CKGR_MOR_ULP1_Pos                     _U_(2)                                               /**< (CKGR_MOR) ULP Mode 1 Command (write-only) Position */
#define CKGR_MOR_ULP1_Msk                     (_U_(0x1) << CKGR_MOR_ULP1_Pos)                      /**< (CKGR_MOR) ULP Mode 1 Command (write-only) Mask */
#define CKGR_MOR_ULP1(value)                  (CKGR_MOR_ULP1_Msk & ((value) << CKGR_MOR_ULP1_Pos))
#define CKGR_MOR_MOSCRCEN_Pos                 _U_(3)                                               /**< (CKGR_MOR) Main RC Oscillator Enable Position */
#define CKGR_MOR_MOSCRCEN_Msk                 (_U_(0x1) << CKGR_MOR_MOSCRCEN_Pos)                  /**< (CKGR_MOR) Main RC Oscillator Enable Mask */
#define CKGR_MOR_MOSCRCEN(value)              (CKGR_MOR_MOSCRCEN_Msk & ((value) << CKGR_MOR_MOSCRCEN_Pos))
#define CKGR_MOR_MOSCXTST_Pos                 _U_(8)                                               /**< (CKGR_MOR) Main Crystal Oscillator Startup Time Position */
#define CKGR_MOR_MOSCXTST_Msk                 (_U_(0xFF) << CKGR_MOR_MOSCXTST_Pos)                 /**< (CKGR_MOR) Main Crystal Oscillator Startup Time Mask */
#define CKGR_MOR_MOSCXTST(value)              (CKGR_MOR_MOSCXTST_Msk & ((value) << CKGR_MOR_MOSCXTST_Pos))
#define CKGR_MOR_KEY_Pos                      _U_(16)                                              /**< (CKGR_MOR) Write Access Password Position */
#define CKGR_MOR_KEY_Msk                      (_U_(0xFF) << CKGR_MOR_KEY_Pos)                      /**< (CKGR_MOR) Write Access Password Mask */
#define CKGR_MOR_KEY(value)                   (CKGR_MOR_KEY_Msk & ((value) << CKGR_MOR_KEY_Pos))  
#define   CKGR_MOR_KEY_PASSWD_Val             _U_(0x37)                                            /**< (CKGR_MOR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define CKGR_MOR_KEY_PASSWD                   (CKGR_MOR_KEY_PASSWD_Val << CKGR_MOR_KEY_Pos)        /**< (CKGR_MOR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define CKGR_MOR_MOSCSEL_Pos                  _U_(24)                                              /**< (CKGR_MOR) Main Clock Oscillator Selection Position */
#define CKGR_MOR_MOSCSEL_Msk                  (_U_(0x1) << CKGR_MOR_MOSCSEL_Pos)                   /**< (CKGR_MOR) Main Clock Oscillator Selection Mask */
#define CKGR_MOR_MOSCSEL(value)               (CKGR_MOR_MOSCSEL_Msk & ((value) << CKGR_MOR_MOSCSEL_Pos))
#define   CKGR_MOR_MOSCSEL_RC_Val             _U_(0x0)                                             /**< (CKGR_MOR) The Main RC oscillator is selected.  */
#define   CKGR_MOR_MOSCSEL_XT_Val             _U_(0x1)                                             /**< (CKGR_MOR) The Main crystal oscillator is selected.  */
#define CKGR_MOR_MOSCSEL_RC                   (CKGR_MOR_MOSCSEL_RC_Val << CKGR_MOR_MOSCSEL_Pos)    /**< (CKGR_MOR) The Main RC oscillator is selected. Position  */
#define CKGR_MOR_MOSCSEL_XT                   (CKGR_MOR_MOSCSEL_XT_Val << CKGR_MOR_MOSCSEL_Pos)    /**< (CKGR_MOR) The Main crystal oscillator is selected. Position  */
#define CKGR_MOR_CFDEN_Pos                    _U_(25)                                              /**< (CKGR_MOR) Clock Failure Detector Enable Position */
#define CKGR_MOR_CFDEN_Msk                    (_U_(0x1) << CKGR_MOR_CFDEN_Pos)                     /**< (CKGR_MOR) Clock Failure Detector Enable Mask */
#define CKGR_MOR_CFDEN(value)                 (CKGR_MOR_CFDEN_Msk & ((value) << CKGR_MOR_CFDEN_Pos))
#define CKGR_MOR_XT32KFME_Pos                 _U_(26)                                              /**< (CKGR_MOR) 32.768 kHz Crystal Oscillator Frequency Monitoring Enable Position */
#define CKGR_MOR_XT32KFME_Msk                 (_U_(0x1) << CKGR_MOR_XT32KFME_Pos)                  /**< (CKGR_MOR) 32.768 kHz Crystal Oscillator Frequency Monitoring Enable Mask */
#define CKGR_MOR_XT32KFME(value)              (CKGR_MOR_XT32KFME_Msk & ((value) << CKGR_MOR_XT32KFME_Pos))
#define CKGR_MOR_AUTOMAINSW_Pos               _U_(29)                                              /**< (CKGR_MOR) Automatic Main Clock Source Switching Position */
#define CKGR_MOR_AUTOMAINSW_Msk               (_U_(0x1) << CKGR_MOR_AUTOMAINSW_Pos)                /**< (CKGR_MOR) Automatic Main Clock Source Switching Mask */
#define CKGR_MOR_AUTOMAINSW(value)            (CKGR_MOR_AUTOMAINSW_Msk & ((value) << CKGR_MOR_AUTOMAINSW_Pos))
#define CKGR_MOR_AUTOCPUSW_Pos                _U_(30)                                              /**< (CKGR_MOR) Automatic Processor Clock Source Switching Position */
#define CKGR_MOR_AUTOCPUSW_Msk                (_U_(0x1) << CKGR_MOR_AUTOCPUSW_Pos)                 /**< (CKGR_MOR) Automatic Processor Clock Source Switching Mask */
#define CKGR_MOR_AUTOCPUSW(value)             (CKGR_MOR_AUTOCPUSW_Msk & ((value) << CKGR_MOR_AUTOCPUSW_Pos))
#define CKGR_MOR_Msk                          _U_(0x67FFFF0D)                                      /**< (CKGR_MOR) Register Mask  */

#define CKGR_MOR_ULP_Pos                      _U_(2)                                               /**< (CKGR_MOR Position) ULP Mode x Command (write-only) */
#define CKGR_MOR_ULP_Msk                      (_U_(0x1) << CKGR_MOR_ULP_Pos)                       /**< (CKGR_MOR Mask) ULP */
#define CKGR_MOR_ULP(value)                   (CKGR_MOR_ULP_Msk & ((value) << CKGR_MOR_ULP_Pos))   

/* -------- CKGR_MCFR : (PMC Offset: 0x24) (R/W 32) Main Clock Frequency Register -------- */
#define CKGR_MCFR_MAINF_Pos                   _U_(0)                                               /**< (CKGR_MCFR) Main Clock Frequency Position */
#define CKGR_MCFR_MAINF_Msk                   (_U_(0xFFFF) << CKGR_MCFR_MAINF_Pos)                 /**< (CKGR_MCFR) Main Clock Frequency Mask */
#define CKGR_MCFR_MAINF(value)                (CKGR_MCFR_MAINF_Msk & ((value) << CKGR_MCFR_MAINF_Pos))
#define CKGR_MCFR_MAINFRDY_Pos                _U_(16)                                              /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Position */
#define CKGR_MCFR_MAINFRDY_Msk                (_U_(0x1) << CKGR_MCFR_MAINFRDY_Pos)                 /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Mask */
#define CKGR_MCFR_MAINFRDY(value)             (CKGR_MCFR_MAINFRDY_Msk & ((value) << CKGR_MCFR_MAINFRDY_Pos))
#define CKGR_MCFR_RCMEAS_Pos                  _U_(20)                                              /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Position */
#define CKGR_MCFR_RCMEAS_Msk                  (_U_(0x1) << CKGR_MCFR_RCMEAS_Pos)                   /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Mask */
#define CKGR_MCFR_RCMEAS(value)               (CKGR_MCFR_RCMEAS_Msk & ((value) << CKGR_MCFR_RCMEAS_Pos))
#define CKGR_MCFR_CCSS_Pos                    _U_(24)                                              /**< (CKGR_MCFR) Counter Clock Source Selection Position */
#define CKGR_MCFR_CCSS_Msk                    (_U_(0x1) << CKGR_MCFR_CCSS_Pos)                     /**< (CKGR_MCFR) Counter Clock Source Selection Mask */
#define CKGR_MCFR_CCSS(value)                 (CKGR_MCFR_CCSS_Msk & ((value) << CKGR_MCFR_CCSS_Pos))
#define CKGR_MCFR_Msk                         _U_(0x0111FFFF)                                      /**< (CKGR_MCFR) Register Mask  */


/* -------- PMC_CPU_CKR : (PMC Offset: 0x28) (R/W 32) CPU Clock Register -------- */
#define PMC_CPU_CKR_CSS_Pos                   _U_(0)                                               /**< (PMC_CPU_CKR) MCK Source Selection Position */
#define PMC_CPU_CKR_CSS_Msk                   (_U_(0x3) << PMC_CPU_CKR_CSS_Pos)                    /**< (PMC_CPU_CKR) MCK Source Selection Mask */
#define PMC_CPU_CKR_CSS(value)                (PMC_CPU_CKR_CSS_Msk & ((value) << PMC_CPU_CKR_CSS_Pos))
#define   PMC_CPU_CKR_CSS_SLOW_CLK_Val        _U_(0x0)                                             /**< (PMC_CPU_CKR) MD_SLCK is selected  */
#define   PMC_CPU_CKR_CSS_MAIN_CLK_Val        _U_(0x1)                                             /**< (PMC_CPU_CKR) MAINCK is selected  */
#define   PMC_CPU_CKR_CSS_PLLACK_Val          _U_(0x2)                                             /**< (PMC_CPU_CKR) PLLACK is selected  */
#define   PMC_CPU_CKR_CSS_UPLLCK_Val          _U_(0x3)                                             /**< (PMC_CPU_CKR) UPLL is selected  */
#define PMC_CPU_CKR_CSS_SLOW_CLK              (PMC_CPU_CKR_CSS_SLOW_CLK_Val << PMC_CPU_CKR_CSS_Pos) /**< (PMC_CPU_CKR) MD_SLCK is selected Position  */
#define PMC_CPU_CKR_CSS_MAIN_CLK              (PMC_CPU_CKR_CSS_MAIN_CLK_Val << PMC_CPU_CKR_CSS_Pos) /**< (PMC_CPU_CKR) MAINCK is selected Position  */
#define PMC_CPU_CKR_CSS_PLLACK                (PMC_CPU_CKR_CSS_PLLACK_Val << PMC_CPU_CKR_CSS_Pos)  /**< (PMC_CPU_CKR) PLLACK is selected Position  */
#define PMC_CPU_CKR_CSS_UPLLCK                (PMC_CPU_CKR_CSS_UPLLCK_Val << PMC_CPU_CKR_CSS_Pos)  /**< (PMC_CPU_CKR) UPLL is selected Position  */
#define PMC_CPU_CKR_PRES_Pos                  _U_(4)                                               /**< (PMC_CPU_CKR) Processor Clock Prescaler Position */
#define PMC_CPU_CKR_PRES_Msk                  (_U_(0x7) << PMC_CPU_CKR_PRES_Pos)                   /**< (PMC_CPU_CKR) Processor Clock Prescaler Mask */
#define PMC_CPU_CKR_PRES(value)               (PMC_CPU_CKR_PRES_Msk & ((value) << PMC_CPU_CKR_PRES_Pos))
#define   PMC_CPU_CKR_PRES_CLK_1_Val          _U_(0x0)                                             /**< (PMC_CPU_CKR) Selected clock  */
#define   PMC_CPU_CKR_PRES_CLK_2_Val          _U_(0x1)                                             /**< (PMC_CPU_CKR) Selected clock divided by 2  */
#define   PMC_CPU_CKR_PRES_CLK_4_Val          _U_(0x2)                                             /**< (PMC_CPU_CKR) Selected clock divided by 4  */
#define   PMC_CPU_CKR_PRES_CLK_8_Val          _U_(0x3)                                             /**< (PMC_CPU_CKR) Selected clock divided by 8  */
#define   PMC_CPU_CKR_PRES_CLK_16_Val         _U_(0x4)                                             /**< (PMC_CPU_CKR) Selected clock divided by 16  */
#define   PMC_CPU_CKR_PRES_CLK_32_Val         _U_(0x5)                                             /**< (PMC_CPU_CKR) Selected clock divided by 32  */
#define   PMC_CPU_CKR_PRES_CLK_64_Val         _U_(0x6)                                             /**< (PMC_CPU_CKR) Selected clock divided by 64  */
#define   PMC_CPU_CKR_PRES_CLK_3_Val          _U_(0x7)                                             /**< (PMC_CPU_CKR) Selected clock divided by 3  */
#define PMC_CPU_CKR_PRES_CLK_1                (PMC_CPU_CKR_PRES_CLK_1_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock Position  */
#define PMC_CPU_CKR_PRES_CLK_2                (PMC_CPU_CKR_PRES_CLK_2_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 2 Position  */
#define PMC_CPU_CKR_PRES_CLK_4                (PMC_CPU_CKR_PRES_CLK_4_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 4 Position  */
#define PMC_CPU_CKR_PRES_CLK_8                (PMC_CPU_CKR_PRES_CLK_8_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 8 Position  */
#define PMC_CPU_CKR_PRES_CLK_16               (PMC_CPU_CKR_PRES_CLK_16_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 16 Position  */
#define PMC_CPU_CKR_PRES_CLK_32               (PMC_CPU_CKR_PRES_CLK_32_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 32 Position  */
#define PMC_CPU_CKR_PRES_CLK_64               (PMC_CPU_CKR_PRES_CLK_64_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 64 Position  */
#define PMC_CPU_CKR_PRES_CLK_3                (PMC_CPU_CKR_PRES_CLK_3_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 3 Position  */
#define PMC_CPU_CKR_MDIV_Pos                  _U_(8)                                               /**< (PMC_CPU_CKR) MCK Division Position */
#define PMC_CPU_CKR_MDIV_Msk                  (_U_(0x7) << PMC_CPU_CKR_MDIV_Pos)                   /**< (PMC_CPU_CKR) MCK Division Mask */
#define PMC_CPU_CKR_MDIV(value)               (PMC_CPU_CKR_MDIV_Msk & ((value) << PMC_CPU_CKR_MDIV_Pos))
#define   PMC_CPU_CKR_MDIV_EQ_PCK_Val         _U_(0x0)                                             /**< (PMC_CPU_CKR) MCK is FCLK divided by 1. MCK_2X is FCLK divided by 1.  */
#define   PMC_CPU_CKR_MDIV_PCK_DIV2_Val       _U_(0x1)                                             /**< (PMC_CPU_CKR) MCK is FCLK divided by 2. MCK_2X is FCLK divided by 1.  */
#define   PMC_CPU_CKR_MDIV_PCK_DIV4_Val       _U_(0x2)                                             /**< (PMC_CPU_CKR) MCK is FCLK divided by 4. MCK_2X is FCLK divided by 2.  */
#define   PMC_CPU_CKR_MDIV_PCK_DIV3_Val       _U_(0x3)                                             /**< (PMC_CPU_CKR) MCK is FCLK divided by 3. MCK_2X is FCLK divided by 1.5.  */
#define PMC_CPU_CKR_MDIV_EQ_PCK               (PMC_CPU_CKR_MDIV_EQ_PCK_Val << PMC_CPU_CKR_MDIV_Pos) /**< (PMC_CPU_CKR) MCK is FCLK divided by 1. MCK_2X is FCLK divided by 1. Position  */
#define PMC_CPU_CKR_MDIV_PCK_DIV2             (PMC_CPU_CKR_MDIV_PCK_DIV2_Val << PMC_CPU_CKR_MDIV_Pos) /**< (PMC_CPU_CKR) MCK is FCLK divided by 2. MCK_2X is FCLK divided by 1. Position  */
#define PMC_CPU_CKR_MDIV_PCK_DIV4             (PMC_CPU_CKR_MDIV_PCK_DIV4_Val << PMC_CPU_CKR_MDIV_Pos) /**< (PMC_CPU_CKR) MCK is FCLK divided by 4. MCK_2X is FCLK divided by 2. Position  */
#define PMC_CPU_CKR_MDIV_PCK_DIV3             (PMC_CPU_CKR_MDIV_PCK_DIV3_Val << PMC_CPU_CKR_MDIV_Pos) /**< (PMC_CPU_CKR) MCK is FCLK divided by 3. MCK_2X is FCLK divided by 1.5. Position  */
#define PMC_CPU_CKR_Msk                       _U_(0x00000773)                                      /**< (PMC_CPU_CKR) Register Mask  */


/* -------- PMC_USB : (PMC Offset: 0x38) (R/W 32) USB Clock Register -------- */
#define PMC_USB_USBS_Pos                      _U_(0)                                               /**< (PMC_USB) USB OHCI/EHCI Input Clock Selection Position */
#define PMC_USB_USBS_Msk                      (_U_(0x3) << PMC_USB_USBS_Pos)                       /**< (PMC_USB) USB OHCI/EHCI Input Clock Selection Mask */
#define PMC_USB_USBS(value)                   (PMC_USB_USBS_Msk & ((value) << PMC_USB_USBS_Pos))  
#define   PMC_USB_USBS_PLLA_Val               _U_(0x0)                                             /**< (PMC_USB) USB Clock Input is PLLACK.  */
#define   PMC_USB_USBS_UPLL_Val               _U_(0x1)                                             /**< (PMC_USB) USB Clock Input is UPLLCK.  */
#define   PMC_USB_USBS_MAINXTAL_Val           _U_(0x2)                                             /**< (PMC_USB) USB Clock Input is MAINXTALCK.  */
#define PMC_USB_USBS_PLLA                     (PMC_USB_USBS_PLLA_Val << PMC_USB_USBS_Pos)          /**< (PMC_USB) USB Clock Input is PLLACK. Position  */
#define PMC_USB_USBS_UPLL                     (PMC_USB_USBS_UPLL_Val << PMC_USB_USBS_Pos)          /**< (PMC_USB) USB Clock Input is UPLLCK. Position  */
#define PMC_USB_USBS_MAINXTAL                 (PMC_USB_USBS_MAINXTAL_Val << PMC_USB_USBS_Pos)      /**< (PMC_USB) USB Clock Input is MAINXTALCK. Position  */
#define PMC_USB_USBDIV_Pos                    _U_(8)                                               /**< (PMC_USB) Divider for USB OHCI Clock Position */
#define PMC_USB_USBDIV_Msk                    (_U_(0xF) << PMC_USB_USBDIV_Pos)                     /**< (PMC_USB) Divider for USB OHCI Clock Mask */
#define PMC_USB_USBDIV(value)                 (PMC_USB_USBDIV_Msk & ((value) << PMC_USB_USBDIV_Pos))
#define PMC_USB_Msk                           _U_(0x00000F03)                                      /**< (PMC_USB) Register Mask  */


/* -------- PMC_PCK : (PMC Offset: 0x40) (R/W 32) Programmable Clock Register -------- */
#define PMC_PCK_CSS_Pos                       _U_(0)                                               /**< (PMC_PCK) Programmable Clock Source Selection Position */
#define PMC_PCK_CSS_Msk                       (_U_(0x1F) << PMC_PCK_CSS_Pos)                       /**< (PMC_PCK) Programmable Clock Source Selection Mask */
#define PMC_PCK_CSS(value)                    (PMC_PCK_CSS_Msk & ((value) << PMC_PCK_CSS_Pos))    
#define   PMC_PCK_CSS_MD_SLOW_CLK_Val         _U_(0x0)                                             /**< (PMC_PCK) MD_SLCK is selected  */
#define   PMC_PCK_CSS_TD_SLOW_CLOCK_Val       _U_(0x1)                                             /**< (PMC_PCK) TD_SLCK is selected  */
#define   PMC_PCK_CSS_MAINCK_Val              _U_(0x2)                                             /**< (PMC_PCK) MAINCK is selected  */
#define   PMC_PCK_CSS_MCK_Val                 _U_(0x3)                                             /**< (PMC_PCK) MCK is selected  */
#define   PMC_PCK_CSS_PLLA_Val                _U_(0x4)                                             /**< (PMC_PCK) PLLA is selected.  */
#define   PMC_PCK_CSS_UPLL_Val                _U_(0x5)                                             /**< (PMC_PCK) UPLL is selected.  */
#define PMC_PCK_CSS_MD_SLOW_CLK               (PMC_PCK_CSS_MD_SLOW_CLK_Val << PMC_PCK_CSS_Pos)     /**< (PMC_PCK) MD_SLCK is selected Position  */
#define PMC_PCK_CSS_TD_SLOW_CLOCK             (PMC_PCK_CSS_TD_SLOW_CLOCK_Val << PMC_PCK_CSS_Pos)   /**< (PMC_PCK) TD_SLCK is selected Position  */
#define PMC_PCK_CSS_MAINCK                    (PMC_PCK_CSS_MAINCK_Val << PMC_PCK_CSS_Pos)          /**< (PMC_PCK) MAINCK is selected Position  */
#define PMC_PCK_CSS_MCK                       (PMC_PCK_CSS_MCK_Val << PMC_PCK_CSS_Pos)             /**< (PMC_PCK) MCK is selected Position  */
#define PMC_PCK_CSS_PLLA                      (PMC_PCK_CSS_PLLA_Val << PMC_PCK_CSS_Pos)            /**< (PMC_PCK) PLLA is selected. Position  */
#define PMC_PCK_CSS_UPLL                      (PMC_PCK_CSS_UPLL_Val << PMC_PCK_CSS_Pos)            /**< (PMC_PCK) UPLL is selected. Position  */
#define PMC_PCK_PRES_Pos                      _U_(8)                                               /**< (PMC_PCK) Programmable Clock Prescaler Position */
#define PMC_PCK_PRES_Msk                      (_U_(0xFF) << PMC_PCK_PRES_Pos)                      /**< (PMC_PCK) Programmable Clock Prescaler Mask */
#define PMC_PCK_PRES(value)                   (PMC_PCK_PRES_Msk & ((value) << PMC_PCK_PRES_Pos))  
#define PMC_PCK_Msk                           _U_(0x0000FF1F)                                      /**< (PMC_PCK) Register Mask  */


/* -------- PMC_IER : (PMC Offset: 0x60) ( /W 32) Interrupt Enable Register -------- */
#define PMC_IER_MOSCXTS_Pos                   _U_(0)                                               /**< (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCXTS_Msk                   (_U_(0x1) << PMC_IER_MOSCXTS_Pos)                    /**< (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCXTS(value)                (PMC_IER_MOSCXTS_Msk & ((value) << PMC_IER_MOSCXTS_Pos))
#define PMC_IER_MCKRDY_Pos                    _U_(3)                                               /**< (PMC_IER) Master Clock Ready Interrupt Enable Position */
#define PMC_IER_MCKRDY_Msk                    (_U_(0x1) << PMC_IER_MCKRDY_Pos)                     /**< (PMC_IER) Master Clock Ready Interrupt Enable Mask */
#define PMC_IER_MCKRDY(value)                 (PMC_IER_MCKRDY_Msk & ((value) << PMC_IER_MCKRDY_Pos))
#define PMC_IER_PCKRDY0_Pos                   _U_(8)                                               /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Position */
#define PMC_IER_PCKRDY0_Msk                   (_U_(0x1) << PMC_IER_PCKRDY0_Pos)                    /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Mask */
#define PMC_IER_PCKRDY0(value)                (PMC_IER_PCKRDY0_Msk & ((value) << PMC_IER_PCKRDY0_Pos))
#define PMC_IER_PCKRDY1_Pos                   _U_(9)                                               /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Position */
#define PMC_IER_PCKRDY1_Msk                   (_U_(0x1) << PMC_IER_PCKRDY1_Pos)                    /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Mask */
#define PMC_IER_PCKRDY1(value)                (PMC_IER_PCKRDY1_Msk & ((value) << PMC_IER_PCKRDY1_Pos))
#define PMC_IER_MOSCSELS_Pos                  _U_(16)                                              /**< (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Position */
#define PMC_IER_MOSCSELS_Msk                  (_U_(0x1) << PMC_IER_MOSCSELS_Pos)                   /**< (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Mask */
#define PMC_IER_MOSCSELS(value)               (PMC_IER_MOSCSELS_Msk & ((value) << PMC_IER_MOSCSELS_Pos))
#define PMC_IER_MOSCRCS_Pos                   _U_(17)                                              /**< (PMC_IER) Main RC Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCRCS_Msk                   (_U_(0x1) << PMC_IER_MOSCRCS_Pos)                    /**< (PMC_IER) Main RC Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCRCS(value)                (PMC_IER_MOSCRCS_Msk & ((value) << PMC_IER_MOSCRCS_Pos))
#define PMC_IER_CFDEV_Pos                     _U_(18)                                              /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Position */
#define PMC_IER_CFDEV_Msk                     (_U_(0x1) << PMC_IER_CFDEV_Pos)                      /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Mask */
#define PMC_IER_CFDEV(value)                  (PMC_IER_CFDEV_Msk & ((value) << PMC_IER_CFDEV_Pos))
#define PMC_IER_XT32KERR_Pos                  _U_(21)                                              /**< (PMC_IER) 32.768 kHz Crystal Oscillator Error Interrupt Enable Position */
#define PMC_IER_XT32KERR_Msk                  (_U_(0x1) << PMC_IER_XT32KERR_Pos)                   /**< (PMC_IER) 32.768 kHz Crystal Oscillator Error Interrupt Enable Mask */
#define PMC_IER_XT32KERR(value)               (PMC_IER_XT32KERR_Msk & ((value) << PMC_IER_XT32KERR_Pos))
#define PMC_IER_MCKMON_Pos                    _U_(23)                                              /**< (PMC_IER) Master Clock Clock Monitor Interrupt Enable Position */
#define PMC_IER_MCKMON_Msk                    (_U_(0x1) << PMC_IER_MCKMON_Pos)                     /**< (PMC_IER) Master Clock Clock Monitor Interrupt Enable Mask */
#define PMC_IER_MCKMON(value)                 (PMC_IER_MCKMON_Msk & ((value) << PMC_IER_MCKMON_Pos))
#define PMC_IER_PLL_INT_Pos                   _U_(25)                                              /**< (PMC_IER) PLL Interrupt Enable Position */
#define PMC_IER_PLL_INT_Msk                   (_U_(0x1) << PMC_IER_PLL_INT_Pos)                    /**< (PMC_IER) PLL Interrupt Enable Mask */
#define PMC_IER_PLL_INT(value)                (PMC_IER_PLL_INT_Msk & ((value) << PMC_IER_PLL_INT_Pos))
#define PMC_IER_Msk                           _U_(0x02A70309)                                      /**< (PMC_IER) Register Mask  */

#define PMC_IER_PCKRDY_Pos                    _U_(8)                                               /**< (PMC_IER Position) Programmable Clock Ready x Interrupt Enable */
#define PMC_IER_PCKRDY_Msk                    (_U_(0x3) << PMC_IER_PCKRDY_Pos)                     /**< (PMC_IER Mask) PCKRDY */
#define PMC_IER_PCKRDY(value)                 (PMC_IER_PCKRDY_Msk & ((value) << PMC_IER_PCKRDY_Pos)) 

/* -------- PMC_IDR : (PMC Offset: 0x64) ( /W 32) Interrupt Disable Register -------- */
#define PMC_IDR_MOSCXTS_Pos                   _U_(0)                                               /**< (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCXTS_Msk                   (_U_(0x1) << PMC_IDR_MOSCXTS_Pos)                    /**< (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCXTS(value)                (PMC_IDR_MOSCXTS_Msk & ((value) << PMC_IDR_MOSCXTS_Pos))
#define PMC_IDR_MCKRDY_Pos                    _U_(3)                                               /**< (PMC_IDR) Master Clock Ready Interrupt Disable Position */
#define PMC_IDR_MCKRDY_Msk                    (_U_(0x1) << PMC_IDR_MCKRDY_Pos)                     /**< (PMC_IDR) Master Clock Ready Interrupt Disable Mask */
#define PMC_IDR_MCKRDY(value)                 (PMC_IDR_MCKRDY_Msk & ((value) << PMC_IDR_MCKRDY_Pos))
#define PMC_IDR_PCKRDY0_Pos                   _U_(8)                                               /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Position */
#define PMC_IDR_PCKRDY0_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY0_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY0(value)                (PMC_IDR_PCKRDY0_Msk & ((value) << PMC_IDR_PCKRDY0_Pos))
#define PMC_IDR_PCKRDY1_Pos                   _U_(9)                                               /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Position */
#define PMC_IDR_PCKRDY1_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY1_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY1(value)                (PMC_IDR_PCKRDY1_Msk & ((value) << PMC_IDR_PCKRDY1_Pos))
#define PMC_IDR_MOSCSELS_Pos                  _U_(16)                                              /**< (PMC_IDR) Main Clock Source Oscillator Selection Status Interrupt Disable Position */
#define PMC_IDR_MOSCSELS_Msk                  (_U_(0x1) << PMC_IDR_MOSCSELS_Pos)                   /**< (PMC_IDR) Main Clock Source Oscillator Selection Status Interrupt Disable Mask */
#define PMC_IDR_MOSCSELS(value)               (PMC_IDR_MOSCSELS_Msk & ((value) << PMC_IDR_MOSCSELS_Pos))
#define PMC_IDR_MOSCRCS_Pos                   _U_(17)                                              /**< (PMC_IDR) Main RC Status Interrupt Disable Position */
#define PMC_IDR_MOSCRCS_Msk                   (_U_(0x1) << PMC_IDR_MOSCRCS_Pos)                    /**< (PMC_IDR) Main RC Status Interrupt Disable Mask */
#define PMC_IDR_MOSCRCS(value)                (PMC_IDR_MOSCRCS_Msk & ((value) << PMC_IDR_MOSCRCS_Pos))
#define PMC_IDR_CFDEV_Pos                     _U_(18)                                              /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Position */
#define PMC_IDR_CFDEV_Msk                     (_U_(0x1) << PMC_IDR_CFDEV_Pos)                      /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Mask */
#define PMC_IDR_CFDEV(value)                  (PMC_IDR_CFDEV_Msk & ((value) << PMC_IDR_CFDEV_Pos))
#define PMC_IDR_XT32KERR_Pos                  _U_(21)                                              /**< (PMC_IDR) 32.768 kHz Crystal Oscillator Error Interrupt Disable Position */
#define PMC_IDR_XT32KERR_Msk                  (_U_(0x1) << PMC_IDR_XT32KERR_Pos)                   /**< (PMC_IDR) 32.768 kHz Crystal Oscillator Error Interrupt Disable Mask */
#define PMC_IDR_XT32KERR(value)               (PMC_IDR_XT32KERR_Msk & ((value) << PMC_IDR_XT32KERR_Pos))
#define PMC_IDR_MCKMON_Pos                    _U_(23)                                              /**< (PMC_IDR) Master Clock Clock Monitor Interrupt Disable Position */
#define PMC_IDR_MCKMON_Msk                    (_U_(0x1) << PMC_IDR_MCKMON_Pos)                     /**< (PMC_IDR) Master Clock Clock Monitor Interrupt Disable Mask */
#define PMC_IDR_MCKMON(value)                 (PMC_IDR_MCKMON_Msk & ((value) << PMC_IDR_MCKMON_Pos))
#define PMC_IDR_PLL_INT_Pos                   _U_(25)                                              /**< (PMC_IDR) PLL Interrupt Disable Position */
#define PMC_IDR_PLL_INT_Msk                   (_U_(0x1) << PMC_IDR_PLL_INT_Pos)                    /**< (PMC_IDR) PLL Interrupt Disable Mask */
#define PMC_IDR_PLL_INT(value)                (PMC_IDR_PLL_INT_Msk & ((value) << PMC_IDR_PLL_INT_Pos))
#define PMC_IDR_Msk                           _U_(0x02A70309)                                      /**< (PMC_IDR) Register Mask  */

#define PMC_IDR_PCKRDY_Pos                    _U_(8)                                               /**< (PMC_IDR Position) Programmable Clock Ready x Interrupt Disable */
#define PMC_IDR_PCKRDY_Msk                    (_U_(0x3) << PMC_IDR_PCKRDY_Pos)                     /**< (PMC_IDR Mask) PCKRDY */
#define PMC_IDR_PCKRDY(value)                 (PMC_IDR_PCKRDY_Msk & ((value) << PMC_IDR_PCKRDY_Pos)) 

/* -------- PMC_SR : (PMC Offset: 0x68) ( R/ 32) Status Register -------- */
#define PMC_SR_MOSCXTS_Pos                    _U_(0)                                               /**< (PMC_SR) Main Crystal Oscillator Status Position */
#define PMC_SR_MOSCXTS_Msk                    (_U_(0x1) << PMC_SR_MOSCXTS_Pos)                     /**< (PMC_SR) Main Crystal Oscillator Status Mask */
#define PMC_SR_MOSCXTS(value)                 (PMC_SR_MOSCXTS_Msk & ((value) << PMC_SR_MOSCXTS_Pos))
#define PMC_SR_MCKRDY_Pos                     _U_(3)                                               /**< (PMC_SR) Master Clock Status Position */
#define PMC_SR_MCKRDY_Msk                     (_U_(0x1) << PMC_SR_MCKRDY_Pos)                      /**< (PMC_SR) Master Clock Status Mask */
#define PMC_SR_MCKRDY(value)                  (PMC_SR_MCKRDY_Msk & ((value) << PMC_SR_MCKRDY_Pos))
#define PMC_SR_PCKRDY0_Pos                    _U_(8)                                               /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY0_Msk                    (_U_(0x1) << PMC_SR_PCKRDY0_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY0(value)                 (PMC_SR_PCKRDY0_Msk & ((value) << PMC_SR_PCKRDY0_Pos))
#define PMC_SR_PCKRDY1_Pos                    _U_(9)                                               /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY1_Msk                    (_U_(0x1) << PMC_SR_PCKRDY1_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY1(value)                 (PMC_SR_PCKRDY1_Msk & ((value) << PMC_SR_PCKRDY1_Pos))
#define PMC_SR_MOSCSELS_Pos                   _U_(16)                                              /**< (PMC_SR) Main Clock Source Oscillator Selection Status Position */
#define PMC_SR_MOSCSELS_Msk                   (_U_(0x1) << PMC_SR_MOSCSELS_Pos)                    /**< (PMC_SR) Main Clock Source Oscillator Selection Status Mask */
#define PMC_SR_MOSCSELS(value)                (PMC_SR_MOSCSELS_Msk & ((value) << PMC_SR_MOSCSELS_Pos))
#define PMC_SR_MOSCRCS_Pos                    _U_(17)                                              /**< (PMC_SR) Main RC Oscillator Status Position */
#define PMC_SR_MOSCRCS_Msk                    (_U_(0x1) << PMC_SR_MOSCRCS_Pos)                     /**< (PMC_SR) Main RC Oscillator Status Mask */
#define PMC_SR_MOSCRCS(value)                 (PMC_SR_MOSCRCS_Msk & ((value) << PMC_SR_MOSCRCS_Pos))
#define PMC_SR_CFDEV_Pos                      _U_(18)                                              /**< (PMC_SR) Clock Failure Detector Event Position */
#define PMC_SR_CFDEV_Msk                      (_U_(0x1) << PMC_SR_CFDEV_Pos)                       /**< (PMC_SR) Clock Failure Detector Event Mask */
#define PMC_SR_CFDEV(value)                   (PMC_SR_CFDEV_Msk & ((value) << PMC_SR_CFDEV_Pos))  
#define PMC_SR_CFDS_Pos                       _U_(19)                                              /**< (PMC_SR) Clock Failure Detector Status Position */
#define PMC_SR_CFDS_Msk                       (_U_(0x1) << PMC_SR_CFDS_Pos)                        /**< (PMC_SR) Clock Failure Detector Status Mask */
#define PMC_SR_CFDS(value)                    (PMC_SR_CFDS_Msk & ((value) << PMC_SR_CFDS_Pos))    
#define PMC_SR_FOS_Pos                        _U_(20)                                              /**< (PMC_SR) Clock Failure Detector Fault Output Status Position */
#define PMC_SR_FOS_Msk                        (_U_(0x1) << PMC_SR_FOS_Pos)                         /**< (PMC_SR) Clock Failure Detector Fault Output Status Mask */
#define PMC_SR_FOS(value)                     (PMC_SR_FOS_Msk & ((value) << PMC_SR_FOS_Pos))      
#define PMC_SR_XT32KERR_Pos                   _U_(21)                                              /**< (PMC_SR) Slow Crystal Oscillator Error Position */
#define PMC_SR_XT32KERR_Msk                   (_U_(0x1) << PMC_SR_XT32KERR_Pos)                    /**< (PMC_SR) Slow Crystal Oscillator Error Mask */
#define PMC_SR_XT32KERR(value)                (PMC_SR_XT32KERR_Msk & ((value) << PMC_SR_XT32KERR_Pos))
#define PMC_SR_MCKMON_Pos                     _U_(23)                                              /**< (PMC_SR) Master Clock Clock Monitor Error Position */
#define PMC_SR_MCKMON_Msk                     (_U_(0x1) << PMC_SR_MCKMON_Pos)                      /**< (PMC_SR) Master Clock Clock Monitor Error Mask */
#define PMC_SR_MCKMON(value)                  (PMC_SR_MCKMON_Msk & ((value) << PMC_SR_MCKMON_Pos))
#define PMC_SR_GCLKRDY_Pos                    _U_(24)                                              /**< (PMC_SR) GCLK Ready Position */
#define PMC_SR_GCLKRDY_Msk                    (_U_(0x1) << PMC_SR_GCLKRDY_Pos)                     /**< (PMC_SR) GCLK Ready Mask */
#define PMC_SR_GCLKRDY(value)                 (PMC_SR_GCLKRDY_Msk & ((value) << PMC_SR_GCLKRDY_Pos))
#define PMC_SR_PLL_INT_Pos                    _U_(25)                                              /**< (PMC_SR) PLL Interrupt Status Position */
#define PMC_SR_PLL_INT_Msk                    (_U_(0x1) << PMC_SR_PLL_INT_Pos)                     /**< (PMC_SR) PLL Interrupt Status Mask */
#define PMC_SR_PLL_INT(value)                 (PMC_SR_PLL_INT_Msk & ((value) << PMC_SR_PLL_INT_Pos))
#define PMC_SR_Msk                            _U_(0x03BF0309)                                      /**< (PMC_SR) Register Mask  */

#define PMC_SR_PCKRDY_Pos                     _U_(8)                                               /**< (PMC_SR Position) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY_Msk                     (_U_(0x3) << PMC_SR_PCKRDY_Pos)                      /**< (PMC_SR Mask) PCKRDY */
#define PMC_SR_PCKRDY(value)                  (PMC_SR_PCKRDY_Msk & ((value) << PMC_SR_PCKRDY_Pos)) 

/* -------- PMC_IMR : (PMC Offset: 0x6C) ( R/ 32) Interrupt Mask Register -------- */
#define PMC_IMR_MOSCXTS_Pos                   _U_(0)                                               /**< (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCXTS_Msk                   (_U_(0x1) << PMC_IMR_MOSCXTS_Pos)                    /**< (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCXTS(value)                (PMC_IMR_MOSCXTS_Msk & ((value) << PMC_IMR_MOSCXTS_Pos))
#define PMC_IMR_MCKRDY_Pos                    _U_(3)                                               /**< (PMC_IMR) Master Clock Ready Interrupt Mask Position */
#define PMC_IMR_MCKRDY_Msk                    (_U_(0x1) << PMC_IMR_MCKRDY_Pos)                     /**< (PMC_IMR) Master Clock Ready Interrupt Mask Mask */
#define PMC_IMR_MCKRDY(value)                 (PMC_IMR_MCKRDY_Msk & ((value) << PMC_IMR_MCKRDY_Pos))
#define PMC_IMR_PCKRDY0_Pos                   _U_(8)                                               /**< (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Position */
#define PMC_IMR_PCKRDY0_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY0_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY0(value)                (PMC_IMR_PCKRDY0_Msk & ((value) << PMC_IMR_PCKRDY0_Pos))
#define PMC_IMR_PCKRDY1_Pos                   _U_(9)                                               /**< (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Position */
#define PMC_IMR_PCKRDY1_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY1_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY1(value)                (PMC_IMR_PCKRDY1_Msk & ((value) << PMC_IMR_PCKRDY1_Pos))
#define PMC_IMR_MOSCSELS_Pos                  _U_(16)                                              /**< (PMC_IMR) Main Clock Source Oscillator Selection Status Interrupt Mask Position */
#define PMC_IMR_MOSCSELS_Msk                  (_U_(0x1) << PMC_IMR_MOSCSELS_Pos)                   /**< (PMC_IMR) Main Clock Source Oscillator Selection Status Interrupt Mask Mask */
#define PMC_IMR_MOSCSELS(value)               (PMC_IMR_MOSCSELS_Msk & ((value) << PMC_IMR_MOSCSELS_Pos))
#define PMC_IMR_MOSCRCS_Pos                   _U_(17)                                              /**< (PMC_IMR) Main RC Status Interrupt Mask Position */
#define PMC_IMR_MOSCRCS_Msk                   (_U_(0x1) << PMC_IMR_MOSCRCS_Pos)                    /**< (PMC_IMR) Main RC Status Interrupt Mask Mask */
#define PMC_IMR_MOSCRCS(value)                (PMC_IMR_MOSCRCS_Msk & ((value) << PMC_IMR_MOSCRCS_Pos))
#define PMC_IMR_CFDEV_Pos                     _U_(18)                                              /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Position */
#define PMC_IMR_CFDEV_Msk                     (_U_(0x1) << PMC_IMR_CFDEV_Pos)                      /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Mask */
#define PMC_IMR_CFDEV(value)                  (PMC_IMR_CFDEV_Msk & ((value) << PMC_IMR_CFDEV_Pos))
#define PMC_IMR_XT32KERR_Pos                  _U_(21)                                              /**< (PMC_IMR) 32.768 kHz Crystal Oscillator Error Interrupt Mask Position */
#define PMC_IMR_XT32KERR_Msk                  (_U_(0x1) << PMC_IMR_XT32KERR_Pos)                   /**< (PMC_IMR) 32.768 kHz Crystal Oscillator Error Interrupt Mask Mask */
#define PMC_IMR_XT32KERR(value)               (PMC_IMR_XT32KERR_Msk & ((value) << PMC_IMR_XT32KERR_Pos))
#define PMC_IMR_MCKMON_Pos                    _U_(23)                                              /**< (PMC_IMR) Master Clock Monitor Error Interrupt Mask Position */
#define PMC_IMR_MCKMON_Msk                    (_U_(0x1) << PMC_IMR_MCKMON_Pos)                     /**< (PMC_IMR) Master Clock Monitor Error Interrupt Mask Mask */
#define PMC_IMR_MCKMON(value)                 (PMC_IMR_MCKMON_Msk & ((value) << PMC_IMR_MCKMON_Pos))
#define PMC_IMR_PLL_INT_Pos                   _U_(25)                                              /**< (PMC_IMR) PLL Interrupt Mask Position */
#define PMC_IMR_PLL_INT_Msk                   (_U_(0x1) << PMC_IMR_PLL_INT_Pos)                    /**< (PMC_IMR) PLL Interrupt Mask Mask */
#define PMC_IMR_PLL_INT(value)                (PMC_IMR_PLL_INT_Msk & ((value) << PMC_IMR_PLL_INT_Pos))
#define PMC_IMR_Msk                           _U_(0x02A70309)                                      /**< (PMC_IMR) Register Mask  */

#define PMC_IMR_PCKRDY_Pos                    _U_(8)                                               /**< (PMC_IMR Position) Programmable Clock Ready x Interrupt Mask */
#define PMC_IMR_PCKRDY_Msk                    (_U_(0x3) << PMC_IMR_PCKRDY_Pos)                     /**< (PMC_IMR Mask) PCKRDY */
#define PMC_IMR_PCKRDY(value)                 (PMC_IMR_PCKRDY_Msk & ((value) << PMC_IMR_PCKRDY_Pos)) 

/* -------- PMC_FSMR : (PMC Offset: 0x70) (R/W 32) Fast Startup Mode Register -------- */
#define PMC_FSMR_RTTAL_Pos                    _U_(16)                                              /**< (PMC_FSMR) RTT Alarm Enable Position */
#define PMC_FSMR_RTTAL_Msk                    (_U_(0x1) << PMC_FSMR_RTTAL_Pos)                     /**< (PMC_FSMR) RTT Alarm Enable Mask */
#define PMC_FSMR_RTTAL(value)                 (PMC_FSMR_RTTAL_Msk & ((value) << PMC_FSMR_RTTAL_Pos))
#define PMC_FSMR_RTCAL_Pos                    _U_(17)                                              /**< (PMC_FSMR) RTC Alarm Enable Position */
#define PMC_FSMR_RTCAL_Msk                    (_U_(0x1) << PMC_FSMR_RTCAL_Pos)                     /**< (PMC_FSMR) RTC Alarm Enable Mask */
#define PMC_FSMR_RTCAL(value)                 (PMC_FSMR_RTCAL_Msk & ((value) << PMC_FSMR_RTCAL_Pos))
#define PMC_FSMR_USBAL_Pos                    _U_(18)                                              /**< (PMC_FSMR) USB Alarm Enable Position */
#define PMC_FSMR_USBAL_Msk                    (_U_(0x1) << PMC_FSMR_USBAL_Pos)                     /**< (PMC_FSMR) USB Alarm Enable Mask */
#define PMC_FSMR_USBAL(value)                 (PMC_FSMR_USBAL_Msk & ((value) << PMC_FSMR_USBAL_Pos))
#define PMC_FSMR_WLAN0_Pos                    _U_(24)                                              /**< (PMC_FSMR) Wakeup on LAN[x] Position */
#define PMC_FSMR_WLAN0_Msk                    (_U_(0x1) << PMC_FSMR_WLAN0_Pos)                     /**< (PMC_FSMR) Wakeup on LAN[x] Mask */
#define PMC_FSMR_WLAN0(value)                 (PMC_FSMR_WLAN0_Msk & ((value) << PMC_FSMR_WLAN0_Pos))
#define PMC_FSMR_WLAN1_Pos                    _U_(25)                                              /**< (PMC_FSMR) Wakeup on LAN[x] Position */
#define PMC_FSMR_WLAN1_Msk                    (_U_(0x1) << PMC_FSMR_WLAN1_Pos)                     /**< (PMC_FSMR) Wakeup on LAN[x] Mask */
#define PMC_FSMR_WLAN1(value)                 (PMC_FSMR_WLAN1_Msk & ((value) << PMC_FSMR_WLAN1_Pos))
#define PMC_FSMR_Msk                          _U_(0x03070000)                                      /**< (PMC_FSMR) Register Mask  */

#define PMC_FSMR_WLAN_Pos                     _U_(24)                                              /**< (PMC_FSMR Position) Wakeup on LAN[x] */
#define PMC_FSMR_WLAN_Msk                     (_U_(0x3) << PMC_FSMR_WLAN_Pos)                      /**< (PMC_FSMR Mask) WLAN */
#define PMC_FSMR_WLAN(value)                  (PMC_FSMR_WLAN_Msk & ((value) << PMC_FSMR_WLAN_Pos)) 

/* -------- PMC_WCR : (PMC Offset: 0x74) (R/W 32) Wakeup Control Register -------- */
#define PMC_WCR_WKPIONB_Pos                   _U_(0)                                               /**< (PMC_WCR) Wakeup Input Number Position */
#define PMC_WCR_WKPIONB_Msk                   (_U_(0xF) << PMC_WCR_WKPIONB_Pos)                    /**< (PMC_WCR) Wakeup Input Number Mask */
#define PMC_WCR_WKPIONB(value)                (PMC_WCR_WKPIONB_Msk & ((value) << PMC_WCR_WKPIONB_Pos))
#define PMC_WCR_EN_Pos                        _U_(16)                                              /**< (PMC_WCR) Wakeup Input Enable Position */
#define PMC_WCR_EN_Msk                        (_U_(0x1) << PMC_WCR_EN_Pos)                         /**< (PMC_WCR) Wakeup Input Enable Mask */
#define PMC_WCR_EN(value)                     (PMC_WCR_EN_Msk & ((value) << PMC_WCR_EN_Pos))      
#define PMC_WCR_WIP_Pos                       _U_(17)                                              /**< (PMC_WCR) Wakeup Input Polarity Position */
#define PMC_WCR_WIP_Msk                       (_U_(0x1) << PMC_WCR_WIP_Pos)                        /**< (PMC_WCR) Wakeup Input Polarity Mask */
#define PMC_WCR_WIP(value)                    (PMC_WCR_WIP_Msk & ((value) << PMC_WCR_WIP_Pos))    
#define PMC_WCR_CMD_Pos                       _U_(24)                                              /**< (PMC_WCR) Command Position */
#define PMC_WCR_CMD_Msk                       (_U_(0x1) << PMC_WCR_CMD_Pos)                        /**< (PMC_WCR) Command Mask */
#define PMC_WCR_CMD(value)                    (PMC_WCR_CMD_Msk & ((value) << PMC_WCR_CMD_Pos))    
#define PMC_WCR_Msk                           _U_(0x0103000F)                                      /**< (PMC_WCR) Register Mask  */


/* -------- PMC_FOCR : (PMC Offset: 0x78) ( /W 32) Fault Output Clear Register -------- */
#define PMC_FOCR_FOCLR_Pos                    _U_(0)                                               /**< (PMC_FOCR) Fault Output Clear Position */
#define PMC_FOCR_FOCLR_Msk                    (_U_(0x1) << PMC_FOCR_FOCLR_Pos)                     /**< (PMC_FOCR) Fault Output Clear Mask */
#define PMC_FOCR_FOCLR(value)                 (PMC_FOCR_FOCLR_Msk & ((value) << PMC_FOCR_FOCLR_Pos))
#define PMC_FOCR_Msk                          _U_(0x00000001)                                      /**< (PMC_FOCR) Register Mask  */


/* -------- PMC_WPMR : (PMC Offset: 0x80) (R/W 32) Write Protection Mode Register -------- */
#define PMC_WPMR_WPEN_Pos                     _U_(0)                                               /**< (PMC_WPMR) Write Protection Enable Position */
#define PMC_WPMR_WPEN_Msk                     (_U_(0x1) << PMC_WPMR_WPEN_Pos)                      /**< (PMC_WPMR) Write Protection Enable Mask */
#define PMC_WPMR_WPEN(value)                  (PMC_WPMR_WPEN_Msk & ((value) << PMC_WPMR_WPEN_Pos))
#define PMC_WPMR_WPITEN_Pos                   _U_(1)                                               /**< (PMC_WPMR) Write Protection Interrupt Enable Position */
#define PMC_WPMR_WPITEN_Msk                   (_U_(0x1) << PMC_WPMR_WPITEN_Pos)                    /**< (PMC_WPMR) Write Protection Interrupt Enable Mask */
#define PMC_WPMR_WPITEN(value)                (PMC_WPMR_WPITEN_Msk & ((value) << PMC_WPMR_WPITEN_Pos))
#define PMC_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (PMC_WPMR) Write Protection Key Position */
#define PMC_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << PMC_WPMR_WPKEY_Pos)                /**< (PMC_WPMR) Write Protection Key Mask */
#define PMC_WPMR_WPKEY(value)                 (PMC_WPMR_WPKEY_Msk & ((value) << PMC_WPMR_WPKEY_Pos))
#define   PMC_WPMR_WPKEY_PASSWD_Val           _U_(0x504D43)                                        /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define PMC_WPMR_WPKEY_PASSWD                 (PMC_WPMR_WPKEY_PASSWD_Val << PMC_WPMR_WPKEY_Pos)    /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define PMC_WPMR_Msk                          _U_(0xFFFFFF03)                                      /**< (PMC_WPMR) Register Mask  */


/* -------- PMC_WPSR : (PMC Offset: 0x84) ( R/ 32) Write Protection Status Register -------- */
#define PMC_WPSR_WPVS_Pos                     _U_(0)                                               /**< (PMC_WPSR) Write Protection Violation Status Position */
#define PMC_WPSR_WPVS_Msk                     (_U_(0x1) << PMC_WPSR_WPVS_Pos)                      /**< (PMC_WPSR) Write Protection Violation Status Mask */
#define PMC_WPSR_WPVS(value)                  (PMC_WPSR_WPVS_Msk & ((value) << PMC_WPSR_WPVS_Pos))
#define PMC_WPSR_WPVSRC_Pos                   _U_(8)                                               /**< (PMC_WPSR) Write Protection Violation Source Position */
#define PMC_WPSR_WPVSRC_Msk                   (_U_(0xFFFF) << PMC_WPSR_WPVSRC_Pos)                 /**< (PMC_WPSR) Write Protection Violation Source Mask */
#define PMC_WPSR_WPVSRC(value)                (PMC_WPSR_WPVSRC_Msk & ((value) << PMC_WPSR_WPVSRC_Pos))
#define PMC_WPSR_Msk                          _U_(0x00FFFF01)                                      /**< (PMC_WPSR) Register Mask  */


/* -------- PMC_PCR : (PMC Offset: 0x88) (R/W 32) Peripheral Control Register -------- */
#define PMC_PCR_PID_Pos                       _U_(0)                                               /**< (PMC_PCR) Peripheral ID Position */
#define PMC_PCR_PID_Msk                       (_U_(0x7F) << PMC_PCR_PID_Pos)                       /**< (PMC_PCR) Peripheral ID Mask */
#define PMC_PCR_PID(value)                    (PMC_PCR_PID_Msk & ((value) << PMC_PCR_PID_Pos))    
#define PMC_PCR_GCLKCSS_Pos                   _U_(8)                                               /**< (PMC_PCR) Generic Clock Source Selection Position */
#define PMC_PCR_GCLKCSS_Msk                   (_U_(0x1F) << PMC_PCR_GCLKCSS_Pos)                   /**< (PMC_PCR) Generic Clock Source Selection Mask */
#define PMC_PCR_GCLKCSS(value)                (PMC_PCR_GCLKCSS_Msk & ((value) << PMC_PCR_GCLKCSS_Pos))
#define   PMC_PCR_GCLKCSS_MD_SLOW_CLK_Val     _U_(0x0)                                             /**< (PMC_PCR) MD_SLCK is selected  */
#define   PMC_PCR_GCLKCSS_TD_SLOW_CLOCK_Val   _U_(0x1)                                             /**< (PMC_PCR) TD_SLCK is selected  */
#define   PMC_PCR_GCLKCSS_MAINCK_Val          _U_(0x2)                                             /**< (PMC_PCR) MAINCK is selected  */
#define   PMC_PCR_GCLKCSS_MCK_Val             _U_(0x3)                                             /**< (PMC_PCR) MCK is selected  */
#define   PMC_PCR_GCLKCSS_PLLA_Val            _U_(0x4)                                             /**< (PMC_PCR) PLLA is selected.  */
#define   PMC_PCR_GCLKCSS_UPLL_Val            _U_(0x5)                                             /**< (PMC_PCR) UPLL is selected.  */
#define PMC_PCR_GCLKCSS_MD_SLOW_CLK           (PMC_PCR_GCLKCSS_MD_SLOW_CLK_Val << PMC_PCR_GCLKCSS_Pos) /**< (PMC_PCR) MD_SLCK is selected Position  */
#define PMC_PCR_GCLKCSS_TD_SLOW_CLOCK         (PMC_PCR_GCLKCSS_TD_SLOW_CLOCK_Val << PMC_PCR_GCLKCSS_Pos) /**< (PMC_PCR) TD_SLCK is selected Position  */
#define PMC_PCR_GCLKCSS_MAINCK                (PMC_PCR_GCLKCSS_MAINCK_Val << PMC_PCR_GCLKCSS_Pos)  /**< (PMC_PCR) MAINCK is selected Position  */
#define PMC_PCR_GCLKCSS_MCK                   (PMC_PCR_GCLKCSS_MCK_Val << PMC_PCR_GCLKCSS_Pos)     /**< (PMC_PCR) MCK is selected Position  */
#define PMC_PCR_GCLKCSS_PLLA                  (PMC_PCR_GCLKCSS_PLLA_Val << PMC_PCR_GCLKCSS_Pos)    /**< (PMC_PCR) PLLA is selected. Position  */
#define PMC_PCR_GCLKCSS_UPLL                  (PMC_PCR_GCLKCSS_UPLL_Val << PMC_PCR_GCLKCSS_Pos)    /**< (PMC_PCR) UPLL is selected. Position  */
#define PMC_PCR_GCLKDIV_Pos                   _U_(20)                                              /**< (PMC_PCR) Generic Clock Division Ratio Position */
#define PMC_PCR_GCLKDIV_Msk                   (_U_(0xFF) << PMC_PCR_GCLKDIV_Pos)                   /**< (PMC_PCR) Generic Clock Division Ratio Mask */
#define PMC_PCR_GCLKDIV(value)                (PMC_PCR_GCLKDIV_Msk & ((value) << PMC_PCR_GCLKDIV_Pos))
#define PMC_PCR_EN_Pos                        _U_(28)                                              /**< (PMC_PCR) Enable Position */
#define PMC_PCR_EN_Msk                        (_U_(0x1) << PMC_PCR_EN_Pos)                         /**< (PMC_PCR) Enable Mask */
#define PMC_PCR_EN(value)                     (PMC_PCR_EN_Msk & ((value) << PMC_PCR_EN_Pos))      
#define PMC_PCR_GCLKEN_Pos                    _U_(29)                                              /**< (PMC_PCR) Generic Clock Enable Position */
#define PMC_PCR_GCLKEN_Msk                    (_U_(0x1) << PMC_PCR_GCLKEN_Pos)                     /**< (PMC_PCR) Generic Clock Enable Mask */
#define PMC_PCR_GCLKEN(value)                 (PMC_PCR_GCLKEN_Msk & ((value) << PMC_PCR_GCLKEN_Pos))
#define PMC_PCR_CMD_Pos                       _U_(31)                                              /**< (PMC_PCR) Command Position */
#define PMC_PCR_CMD_Msk                       (_U_(0x1) << PMC_PCR_CMD_Pos)                        /**< (PMC_PCR) Command Mask */
#define PMC_PCR_CMD(value)                    (PMC_PCR_CMD_Msk & ((value) << PMC_PCR_CMD_Pos))    
#define PMC_PCR_Msk                           _U_(0xBFF01F7F)                                      /**< (PMC_PCR) Register Mask  */


/* -------- PMC_OCR : (PMC Offset: 0x8C) (R/W 32) Oscillator Calibration Register -------- */
#define PMC_OCR_CAL12_Pos                     _U_(16)                                              /**< (PMC_OCR) Main RC Oscillator Calibration Bits Position */
#define PMC_OCR_CAL12_Msk                     (_U_(0x7F) << PMC_OCR_CAL12_Pos)                     /**< (PMC_OCR) Main RC Oscillator Calibration Bits Mask */
#define PMC_OCR_CAL12(value)                  (PMC_OCR_CAL12_Msk & ((value) << PMC_OCR_CAL12_Pos))
#define PMC_OCR_SEL12_Pos                     _U_(23)                                              /**< (PMC_OCR) Selection of Main RC Oscillator Calibration Bits Position */
#define PMC_OCR_SEL12_Msk                     (_U_(0x1) << PMC_OCR_SEL12_Pos)                      /**< (PMC_OCR) Selection of Main RC Oscillator Calibration Bits Mask */
#define PMC_OCR_SEL12(value)                  (PMC_OCR_SEL12_Msk & ((value) << PMC_OCR_SEL12_Pos))
#define PMC_OCR_Msk                           _U_(0x00FF0000)                                      /**< (PMC_OCR) Register Mask  */

#define PMC_OCR_SEL_Pos                       _U_(23)                                              /**< (PMC_OCR Position) Selection of Main RC Oscillator Calibration Bits */
#define PMC_OCR_SEL_Msk                       (_U_(0x1) << PMC_OCR_SEL_Pos)                        /**< (PMC_OCR Mask) SEL */
#define PMC_OCR_SEL(value)                    (PMC_OCR_SEL_Msk & ((value) << PMC_OCR_SEL_Pos))     

/* -------- PMC_MCKLIM : (PMC Offset: 0x9C) (R/W 32) MCK Monitor Limits Register -------- */
#define PMC_MCKLIM_MCK_LOW_IT_Pos             _U_(0)                                               /**< (PMC_MCKLIM) MCK Monitoring Low IT Limit Position */
#define PMC_MCKLIM_MCK_LOW_IT_Msk             (_U_(0xFF) << PMC_MCKLIM_MCK_LOW_IT_Pos)             /**< (PMC_MCKLIM) MCK Monitoring Low IT Limit Mask */
#define PMC_MCKLIM_MCK_LOW_IT(value)          (PMC_MCKLIM_MCK_LOW_IT_Msk & ((value) << PMC_MCKLIM_MCK_LOW_IT_Pos))
#define PMC_MCKLIM_MCK_HIGH_IT_Pos            _U_(8)                                               /**< (PMC_MCKLIM) MCK Monitoring High IT Limit Position */
#define PMC_MCKLIM_MCK_HIGH_IT_Msk            (_U_(0xFF) << PMC_MCKLIM_MCK_HIGH_IT_Pos)            /**< (PMC_MCKLIM) MCK Monitoring High IT Limit Mask */
#define PMC_MCKLIM_MCK_HIGH_IT(value)         (PMC_MCKLIM_MCK_HIGH_IT_Msk & ((value) << PMC_MCKLIM_MCK_HIGH_IT_Pos))
#define PMC_MCKLIM_Msk                        _U_(0x0000FFFF)                                      /**< (PMC_MCKLIM) Register Mask  */


/* -------- PMC_CSR0 : (PMC Offset: 0xA0) ( R/ 32) Peripheral Clock Status Register 0 -------- */
#define PMC_CSR0_PID2_Pos                     _U_(2)                                               /**< (PMC_CSR0) Peripheral Clock 2 Status Position */
#define PMC_CSR0_PID2_Msk                     (_U_(0x1) << PMC_CSR0_PID2_Pos)                      /**< (PMC_CSR0) Peripheral Clock 2 Status Mask */
#define PMC_CSR0_PID2(value)                  (PMC_CSR0_PID2_Msk & ((value) << PMC_CSR0_PID2_Pos))
#define PMC_CSR0_PID3_Pos                     _U_(3)                                               /**< (PMC_CSR0) Peripheral Clock 3 Status Position */
#define PMC_CSR0_PID3_Msk                     (_U_(0x1) << PMC_CSR0_PID3_Pos)                      /**< (PMC_CSR0) Peripheral Clock 3 Status Mask */
#define PMC_CSR0_PID3(value)                  (PMC_CSR0_PID3_Msk & ((value) << PMC_CSR0_PID3_Pos))
#define PMC_CSR0_PID4_Pos                     _U_(4)                                               /**< (PMC_CSR0) Peripheral Clock 4 Status Position */
#define PMC_CSR0_PID4_Msk                     (_U_(0x1) << PMC_CSR0_PID4_Pos)                      /**< (PMC_CSR0) Peripheral Clock 4 Status Mask */
#define PMC_CSR0_PID4(value)                  (PMC_CSR0_PID4_Msk & ((value) << PMC_CSR0_PID4_Pos))
#define PMC_CSR0_PID5_Pos                     _U_(5)                                               /**< (PMC_CSR0) Peripheral Clock 5 Status Position */
#define PMC_CSR0_PID5_Msk                     (_U_(0x1) << PMC_CSR0_PID5_Pos)                      /**< (PMC_CSR0) Peripheral Clock 5 Status Mask */
#define PMC_CSR0_PID5(value)                  (PMC_CSR0_PID5_Msk & ((value) << PMC_CSR0_PID5_Pos))
#define PMC_CSR0_PID6_Pos                     _U_(6)                                               /**< (PMC_CSR0) Peripheral Clock 6 Status Position */
#define PMC_CSR0_PID6_Msk                     (_U_(0x1) << PMC_CSR0_PID6_Pos)                      /**< (PMC_CSR0) Peripheral Clock 6 Status Mask */
#define PMC_CSR0_PID6(value)                  (PMC_CSR0_PID6_Msk & ((value) << PMC_CSR0_PID6_Pos))
#define PMC_CSR0_PID7_Pos                     _U_(7)                                               /**< (PMC_CSR0) Peripheral Clock 7 Status Position */
#define PMC_CSR0_PID7_Msk                     (_U_(0x1) << PMC_CSR0_PID7_Pos)                      /**< (PMC_CSR0) Peripheral Clock 7 Status Mask */
#define PMC_CSR0_PID7(value)                  (PMC_CSR0_PID7_Msk & ((value) << PMC_CSR0_PID7_Pos))
#define PMC_CSR0_PID8_Pos                     _U_(8)                                               /**< (PMC_CSR0) Peripheral Clock 8 Status Position */
#define PMC_CSR0_PID8_Msk                     (_U_(0x1) << PMC_CSR0_PID8_Pos)                      /**< (PMC_CSR0) Peripheral Clock 8 Status Mask */
#define PMC_CSR0_PID8(value)                  (PMC_CSR0_PID8_Msk & ((value) << PMC_CSR0_PID8_Pos))
#define PMC_CSR0_PID9_Pos                     _U_(9)                                               /**< (PMC_CSR0) Peripheral Clock 9 Status Position */
#define PMC_CSR0_PID9_Msk                     (_U_(0x1) << PMC_CSR0_PID9_Pos)                      /**< (PMC_CSR0) Peripheral Clock 9 Status Mask */
#define PMC_CSR0_PID9(value)                  (PMC_CSR0_PID9_Msk & ((value) << PMC_CSR0_PID9_Pos))
#define PMC_CSR0_PID10_Pos                    _U_(10)                                              /**< (PMC_CSR0) Peripheral Clock 10 Status Position */
#define PMC_CSR0_PID10_Msk                    (_U_(0x1) << PMC_CSR0_PID10_Pos)                     /**< (PMC_CSR0) Peripheral Clock 10 Status Mask */
#define PMC_CSR0_PID10(value)                 (PMC_CSR0_PID10_Msk & ((value) << PMC_CSR0_PID10_Pos))
#define PMC_CSR0_PID11_Pos                    _U_(11)                                              /**< (PMC_CSR0) Peripheral Clock 11 Status Position */
#define PMC_CSR0_PID11_Msk                    (_U_(0x1) << PMC_CSR0_PID11_Pos)                     /**< (PMC_CSR0) Peripheral Clock 11 Status Mask */
#define PMC_CSR0_PID11(value)                 (PMC_CSR0_PID11_Msk & ((value) << PMC_CSR0_PID11_Pos))
#define PMC_CSR0_PID12_Pos                    _U_(12)                                              /**< (PMC_CSR0) Peripheral Clock 12 Status Position */
#define PMC_CSR0_PID12_Msk                    (_U_(0x1) << PMC_CSR0_PID12_Pos)                     /**< (PMC_CSR0) Peripheral Clock 12 Status Mask */
#define PMC_CSR0_PID12(value)                 (PMC_CSR0_PID12_Msk & ((value) << PMC_CSR0_PID12_Pos))
#define PMC_CSR0_PID13_Pos                    _U_(13)                                              /**< (PMC_CSR0) Peripheral Clock 13 Status Position */
#define PMC_CSR0_PID13_Msk                    (_U_(0x1) << PMC_CSR0_PID13_Pos)                     /**< (PMC_CSR0) Peripheral Clock 13 Status Mask */
#define PMC_CSR0_PID13(value)                 (PMC_CSR0_PID13_Msk & ((value) << PMC_CSR0_PID13_Pos))
#define PMC_CSR0_PID14_Pos                    _U_(14)                                              /**< (PMC_CSR0) Peripheral Clock 14 Status Position */
#define PMC_CSR0_PID14_Msk                    (_U_(0x1) << PMC_CSR0_PID14_Pos)                     /**< (PMC_CSR0) Peripheral Clock 14 Status Mask */
#define PMC_CSR0_PID14(value)                 (PMC_CSR0_PID14_Msk & ((value) << PMC_CSR0_PID14_Pos))
#define PMC_CSR0_PID15_Pos                    _U_(15)                                              /**< (PMC_CSR0) Peripheral Clock 15 Status Position */
#define PMC_CSR0_PID15_Msk                    (_U_(0x1) << PMC_CSR0_PID15_Pos)                     /**< (PMC_CSR0) Peripheral Clock 15 Status Mask */
#define PMC_CSR0_PID15(value)                 (PMC_CSR0_PID15_Msk & ((value) << PMC_CSR0_PID15_Pos))
#define PMC_CSR0_PID16_Pos                    _U_(16)                                              /**< (PMC_CSR0) Peripheral Clock 16 Status Position */
#define PMC_CSR0_PID16_Msk                    (_U_(0x1) << PMC_CSR0_PID16_Pos)                     /**< (PMC_CSR0) Peripheral Clock 16 Status Mask */
#define PMC_CSR0_PID16(value)                 (PMC_CSR0_PID16_Msk & ((value) << PMC_CSR0_PID16_Pos))
#define PMC_CSR0_PID17_Pos                    _U_(17)                                              /**< (PMC_CSR0) Peripheral Clock 17 Status Position */
#define PMC_CSR0_PID17_Msk                    (_U_(0x1) << PMC_CSR0_PID17_Pos)                     /**< (PMC_CSR0) Peripheral Clock 17 Status Mask */
#define PMC_CSR0_PID17(value)                 (PMC_CSR0_PID17_Msk & ((value) << PMC_CSR0_PID17_Pos))
#define PMC_CSR0_PID18_Pos                    _U_(18)                                              /**< (PMC_CSR0) Peripheral Clock 18 Status Position */
#define PMC_CSR0_PID18_Msk                    (_U_(0x1) << PMC_CSR0_PID18_Pos)                     /**< (PMC_CSR0) Peripheral Clock 18 Status Mask */
#define PMC_CSR0_PID18(value)                 (PMC_CSR0_PID18_Msk & ((value) << PMC_CSR0_PID18_Pos))
#define PMC_CSR0_PID19_Pos                    _U_(19)                                              /**< (PMC_CSR0) Peripheral Clock 19 Status Position */
#define PMC_CSR0_PID19_Msk                    (_U_(0x1) << PMC_CSR0_PID19_Pos)                     /**< (PMC_CSR0) Peripheral Clock 19 Status Mask */
#define PMC_CSR0_PID19(value)                 (PMC_CSR0_PID19_Msk & ((value) << PMC_CSR0_PID19_Pos))
#define PMC_CSR0_PID20_Pos                    _U_(20)                                              /**< (PMC_CSR0) Peripheral Clock 20 Status Position */
#define PMC_CSR0_PID20_Msk                    (_U_(0x1) << PMC_CSR0_PID20_Pos)                     /**< (PMC_CSR0) Peripheral Clock 20 Status Mask */
#define PMC_CSR0_PID20(value)                 (PMC_CSR0_PID20_Msk & ((value) << PMC_CSR0_PID20_Pos))
#define PMC_CSR0_PID22_Pos                    _U_(22)                                              /**< (PMC_CSR0) Peripheral Clock 22 Status Position */
#define PMC_CSR0_PID22_Msk                    (_U_(0x1) << PMC_CSR0_PID22_Pos)                     /**< (PMC_CSR0) Peripheral Clock 22 Status Mask */
#define PMC_CSR0_PID22(value)                 (PMC_CSR0_PID22_Msk & ((value) << PMC_CSR0_PID22_Pos))
#define PMC_CSR0_PID23_Pos                    _U_(23)                                              /**< (PMC_CSR0) Peripheral Clock 23 Status Position */
#define PMC_CSR0_PID23_Msk                    (_U_(0x1) << PMC_CSR0_PID23_Pos)                     /**< (PMC_CSR0) Peripheral Clock 23 Status Mask */
#define PMC_CSR0_PID23(value)                 (PMC_CSR0_PID23_Msk & ((value) << PMC_CSR0_PID23_Pos))
#define PMC_CSR0_PID24_Pos                    _U_(24)                                              /**< (PMC_CSR0) Peripheral Clock 24 Status Position */
#define PMC_CSR0_PID24_Msk                    (_U_(0x1) << PMC_CSR0_PID24_Pos)                     /**< (PMC_CSR0) Peripheral Clock 24 Status Mask */
#define PMC_CSR0_PID24(value)                 (PMC_CSR0_PID24_Msk & ((value) << PMC_CSR0_PID24_Pos))
#define PMC_CSR0_PID25_Pos                    _U_(25)                                              /**< (PMC_CSR0) Peripheral Clock 25 Status Position */
#define PMC_CSR0_PID25_Msk                    (_U_(0x1) << PMC_CSR0_PID25_Pos)                     /**< (PMC_CSR0) Peripheral Clock 25 Status Mask */
#define PMC_CSR0_PID25(value)                 (PMC_CSR0_PID25_Msk & ((value) << PMC_CSR0_PID25_Pos))
#define PMC_CSR0_PID26_Pos                    _U_(26)                                              /**< (PMC_CSR0) Peripheral Clock 26 Status Position */
#define PMC_CSR0_PID26_Msk                    (_U_(0x1) << PMC_CSR0_PID26_Pos)                     /**< (PMC_CSR0) Peripheral Clock 26 Status Mask */
#define PMC_CSR0_PID26(value)                 (PMC_CSR0_PID26_Msk & ((value) << PMC_CSR0_PID26_Pos))
#define PMC_CSR0_PID27_Pos                    _U_(27)                                              /**< (PMC_CSR0) Peripheral Clock 27 Status Position */
#define PMC_CSR0_PID27_Msk                    (_U_(0x1) << PMC_CSR0_PID27_Pos)                     /**< (PMC_CSR0) Peripheral Clock 27 Status Mask */
#define PMC_CSR0_PID27(value)                 (PMC_CSR0_PID27_Msk & ((value) << PMC_CSR0_PID27_Pos))
#define PMC_CSR0_PID28_Pos                    _U_(28)                                              /**< (PMC_CSR0) Peripheral Clock 28 Status Position */
#define PMC_CSR0_PID28_Msk                    (_U_(0x1) << PMC_CSR0_PID28_Pos)                     /**< (PMC_CSR0) Peripheral Clock 28 Status Mask */
#define PMC_CSR0_PID28(value)                 (PMC_CSR0_PID28_Msk & ((value) << PMC_CSR0_PID28_Pos))
#define PMC_CSR0_PID29_Pos                    _U_(29)                                              /**< (PMC_CSR0) Peripheral Clock 29 Status Position */
#define PMC_CSR0_PID29_Msk                    (_U_(0x1) << PMC_CSR0_PID29_Pos)                     /**< (PMC_CSR0) Peripheral Clock 29 Status Mask */
#define PMC_CSR0_PID29(value)                 (PMC_CSR0_PID29_Msk & ((value) << PMC_CSR0_PID29_Pos))
#define PMC_CSR0_PID30_Pos                    _U_(30)                                              /**< (PMC_CSR0) Peripheral Clock 30 Status Position */
#define PMC_CSR0_PID30_Msk                    (_U_(0x1) << PMC_CSR0_PID30_Pos)                     /**< (PMC_CSR0) Peripheral Clock 30 Status Mask */
#define PMC_CSR0_PID30(value)                 (PMC_CSR0_PID30_Msk & ((value) << PMC_CSR0_PID30_Pos))
#define PMC_CSR0_Msk                          _U_(0x7FDFFFFC)                                      /**< (PMC_CSR0) Register Mask  */

#define PMC_CSR0_PID_Pos                      _U_(2)                                               /**< (PMC_CSR0 Position) Peripheral Clock 3x Status */
#define PMC_CSR0_PID_Msk                      (_U_(0xFFFFFFF) << PMC_CSR0_PID_Pos)                 /**< (PMC_CSR0 Mask) PID */
#define PMC_CSR0_PID(value)                   (PMC_CSR0_PID_Msk & ((value) << PMC_CSR0_PID_Pos))   

/* -------- PMC_CSR1 : (PMC Offset: 0xA4) ( R/ 32) Peripheral Clock Status Register 1 -------- */
#define PMC_CSR1_PID32_Pos                    _U_(0)                                               /**< (PMC_CSR1) Peripheral Clock 32 Status Position */
#define PMC_CSR1_PID32_Msk                    (_U_(0x1) << PMC_CSR1_PID32_Pos)                     /**< (PMC_CSR1) Peripheral Clock 32 Status Mask */
#define PMC_CSR1_PID32(value)                 (PMC_CSR1_PID32_Msk & ((value) << PMC_CSR1_PID32_Pos))
#define PMC_CSR1_PID33_Pos                    _U_(1)                                               /**< (PMC_CSR1) Peripheral Clock 33 Status Position */
#define PMC_CSR1_PID33_Msk                    (_U_(0x1) << PMC_CSR1_PID33_Pos)                     /**< (PMC_CSR1) Peripheral Clock 33 Status Mask */
#define PMC_CSR1_PID33(value)                 (PMC_CSR1_PID33_Msk & ((value) << PMC_CSR1_PID33_Pos))
#define PMC_CSR1_PID34_Pos                    _U_(2)                                               /**< (PMC_CSR1) Peripheral Clock 34 Status Position */
#define PMC_CSR1_PID34_Msk                    (_U_(0x1) << PMC_CSR1_PID34_Pos)                     /**< (PMC_CSR1) Peripheral Clock 34 Status Mask */
#define PMC_CSR1_PID34(value)                 (PMC_CSR1_PID34_Msk & ((value) << PMC_CSR1_PID34_Pos))
#define PMC_CSR1_PID35_Pos                    _U_(3)                                               /**< (PMC_CSR1) Peripheral Clock 35 Status Position */
#define PMC_CSR1_PID35_Msk                    (_U_(0x1) << PMC_CSR1_PID35_Pos)                     /**< (PMC_CSR1) Peripheral Clock 35 Status Mask */
#define PMC_CSR1_PID35(value)                 (PMC_CSR1_PID35_Msk & ((value) << PMC_CSR1_PID35_Pos))
#define PMC_CSR1_PID36_Pos                    _U_(4)                                               /**< (PMC_CSR1) Peripheral Clock 36 Status Position */
#define PMC_CSR1_PID36_Msk                    (_U_(0x1) << PMC_CSR1_PID36_Pos)                     /**< (PMC_CSR1) Peripheral Clock 36 Status Mask */
#define PMC_CSR1_PID36(value)                 (PMC_CSR1_PID36_Msk & ((value) << PMC_CSR1_PID36_Pos))
#define PMC_CSR1_PID37_Pos                    _U_(5)                                               /**< (PMC_CSR1) Peripheral Clock 37 Status Position */
#define PMC_CSR1_PID37_Msk                    (_U_(0x1) << PMC_CSR1_PID37_Pos)                     /**< (PMC_CSR1) Peripheral Clock 37 Status Mask */
#define PMC_CSR1_PID37(value)                 (PMC_CSR1_PID37_Msk & ((value) << PMC_CSR1_PID37_Pos))
#define PMC_CSR1_PID38_Pos                    _U_(6)                                               /**< (PMC_CSR1) Peripheral Clock 38 Status Position */
#define PMC_CSR1_PID38_Msk                    (_U_(0x1) << PMC_CSR1_PID38_Pos)                     /**< (PMC_CSR1) Peripheral Clock 38 Status Mask */
#define PMC_CSR1_PID38(value)                 (PMC_CSR1_PID38_Msk & ((value) << PMC_CSR1_PID38_Pos))
#define PMC_CSR1_PID39_Pos                    _U_(7)                                               /**< (PMC_CSR1) Peripheral Clock 39 Status Position */
#define PMC_CSR1_PID39_Msk                    (_U_(0x1) << PMC_CSR1_PID39_Pos)                     /**< (PMC_CSR1) Peripheral Clock 39 Status Mask */
#define PMC_CSR1_PID39(value)                 (PMC_CSR1_PID39_Msk & ((value) << PMC_CSR1_PID39_Pos))
#define PMC_CSR1_PID40_Pos                    _U_(8)                                               /**< (PMC_CSR1) Peripheral Clock 40 Status Position */
#define PMC_CSR1_PID40_Msk                    (_U_(0x1) << PMC_CSR1_PID40_Pos)                     /**< (PMC_CSR1) Peripheral Clock 40 Status Mask */
#define PMC_CSR1_PID40(value)                 (PMC_CSR1_PID40_Msk & ((value) << PMC_CSR1_PID40_Pos))
#define PMC_CSR1_PID41_Pos                    _U_(9)                                               /**< (PMC_CSR1) Peripheral Clock 41 Status Position */
#define PMC_CSR1_PID41_Msk                    (_U_(0x1) << PMC_CSR1_PID41_Pos)                     /**< (PMC_CSR1) Peripheral Clock 41 Status Mask */
#define PMC_CSR1_PID41(value)                 (PMC_CSR1_PID41_Msk & ((value) << PMC_CSR1_PID41_Pos))
#define PMC_CSR1_PID42_Pos                    _U_(10)                                              /**< (PMC_CSR1) Peripheral Clock 42 Status Position */
#define PMC_CSR1_PID42_Msk                    (_U_(0x1) << PMC_CSR1_PID42_Pos)                     /**< (PMC_CSR1) Peripheral Clock 42 Status Mask */
#define PMC_CSR1_PID42(value)                 (PMC_CSR1_PID42_Msk & ((value) << PMC_CSR1_PID42_Pos))
#define PMC_CSR1_PID43_Pos                    _U_(11)                                              /**< (PMC_CSR1) Peripheral Clock 43 Status Position */
#define PMC_CSR1_PID43_Msk                    (_U_(0x1) << PMC_CSR1_PID43_Pos)                     /**< (PMC_CSR1) Peripheral Clock 43 Status Mask */
#define PMC_CSR1_PID43(value)                 (PMC_CSR1_PID43_Msk & ((value) << PMC_CSR1_PID43_Pos))
#define PMC_CSR1_PID44_Pos                    _U_(12)                                              /**< (PMC_CSR1) Peripheral Clock 44 Status Position */
#define PMC_CSR1_PID44_Msk                    (_U_(0x1) << PMC_CSR1_PID44_Pos)                     /**< (PMC_CSR1) Peripheral Clock 44 Status Mask */
#define PMC_CSR1_PID44(value)                 (PMC_CSR1_PID44_Msk & ((value) << PMC_CSR1_PID44_Pos))
#define PMC_CSR1_PID45_Pos                    _U_(13)                                              /**< (PMC_CSR1) Peripheral Clock 45 Status Position */
#define PMC_CSR1_PID45_Msk                    (_U_(0x1) << PMC_CSR1_PID45_Pos)                     /**< (PMC_CSR1) Peripheral Clock 45 Status Mask */
#define PMC_CSR1_PID45(value)                 (PMC_CSR1_PID45_Msk & ((value) << PMC_CSR1_PID45_Pos))
#define PMC_CSR1_Msk                          _U_(0x00003FFF)                                      /**< (PMC_CSR1) Register Mask  */

#define PMC_CSR1_PID_Pos                      _U_(0)                                               /**< (PMC_CSR1 Position) Peripheral Clock 45 Status */
#define PMC_CSR1_PID_Msk                      (_U_(0x3FFF) << PMC_CSR1_PID_Pos)                    /**< (PMC_CSR1 Mask) PID */
#define PMC_CSR1_PID(value)                   (PMC_CSR1_PID_Msk & ((value) << PMC_CSR1_PID_Pos))   

/* -------- PMC_GCSR0 : (PMC Offset: 0xC0) ( R/ 32) Generic Clock Status Register 0 -------- */
#define PMC_GCSR0_GPID5_Pos                   _U_(5)                                               /**< (PMC_GCSR0) Generic Clock 5 Status Position */
#define PMC_GCSR0_GPID5_Msk                   (_U_(0x1) << PMC_GCSR0_GPID5_Pos)                    /**< (PMC_GCSR0) Generic Clock 5 Status Mask */
#define PMC_GCSR0_GPID5(value)                (PMC_GCSR0_GPID5_Msk & ((value) << PMC_GCSR0_GPID5_Pos))
#define PMC_GCSR0_GPID6_Pos                   _U_(6)                                               /**< (PMC_GCSR0) Generic Clock 6 Status Position */
#define PMC_GCSR0_GPID6_Msk                   (_U_(0x1) << PMC_GCSR0_GPID6_Pos)                    /**< (PMC_GCSR0) Generic Clock 6 Status Mask */
#define PMC_GCSR0_GPID6(value)                (PMC_GCSR0_GPID6_Msk & ((value) << PMC_GCSR0_GPID6_Pos))
#define PMC_GCSR0_GPID7_Pos                   _U_(7)                                               /**< (PMC_GCSR0) Generic Clock 7 Status Position */
#define PMC_GCSR0_GPID7_Msk                   (_U_(0x1) << PMC_GCSR0_GPID7_Pos)                    /**< (PMC_GCSR0) Generic Clock 7 Status Mask */
#define PMC_GCSR0_GPID7(value)                (PMC_GCSR0_GPID7_Msk & ((value) << PMC_GCSR0_GPID7_Pos))
#define PMC_GCSR0_GPID8_Pos                   _U_(8)                                               /**< (PMC_GCSR0) Generic Clock 8 Status Position */
#define PMC_GCSR0_GPID8_Msk                   (_U_(0x1) << PMC_GCSR0_GPID8_Pos)                    /**< (PMC_GCSR0) Generic Clock 8 Status Mask */
#define PMC_GCSR0_GPID8(value)                (PMC_GCSR0_GPID8_Msk & ((value) << PMC_GCSR0_GPID8_Pos))
#define PMC_GCSR0_GPID9_Pos                   _U_(9)                                               /**< (PMC_GCSR0) Generic Clock 9 Status Position */
#define PMC_GCSR0_GPID9_Msk                   (_U_(0x1) << PMC_GCSR0_GPID9_Pos)                    /**< (PMC_GCSR0) Generic Clock 9 Status Mask */
#define PMC_GCSR0_GPID9(value)                (PMC_GCSR0_GPID9_Msk & ((value) << PMC_GCSR0_GPID9_Pos))
#define PMC_GCSR0_GPID10_Pos                  _U_(10)                                              /**< (PMC_GCSR0) Generic Clock 10 Status Position */
#define PMC_GCSR0_GPID10_Msk                  (_U_(0x1) << PMC_GCSR0_GPID10_Pos)                   /**< (PMC_GCSR0) Generic Clock 10 Status Mask */
#define PMC_GCSR0_GPID10(value)               (PMC_GCSR0_GPID10_Msk & ((value) << PMC_GCSR0_GPID10_Pos))
#define PMC_GCSR0_GPID11_Pos                  _U_(11)                                              /**< (PMC_GCSR0) Generic Clock 11 Status Position */
#define PMC_GCSR0_GPID11_Msk                  (_U_(0x1) << PMC_GCSR0_GPID11_Pos)                   /**< (PMC_GCSR0) Generic Clock 11 Status Mask */
#define PMC_GCSR0_GPID11(value)               (PMC_GCSR0_GPID11_Msk & ((value) << PMC_GCSR0_GPID11_Pos))
#define PMC_GCSR0_GPID12_Pos                  _U_(12)                                              /**< (PMC_GCSR0) Generic Clock 12 Status Position */
#define PMC_GCSR0_GPID12_Msk                  (_U_(0x1) << PMC_GCSR0_GPID12_Pos)                   /**< (PMC_GCSR0) Generic Clock 12 Status Mask */
#define PMC_GCSR0_GPID12(value)               (PMC_GCSR0_GPID12_Msk & ((value) << PMC_GCSR0_GPID12_Pos))
#define PMC_GCSR0_GPID13_Pos                  _U_(13)                                              /**< (PMC_GCSR0) Generic Clock 13 Status Position */
#define PMC_GCSR0_GPID13_Msk                  (_U_(0x1) << PMC_GCSR0_GPID13_Pos)                   /**< (PMC_GCSR0) Generic Clock 13 Status Mask */
#define PMC_GCSR0_GPID13(value)               (PMC_GCSR0_GPID13_Msk & ((value) << PMC_GCSR0_GPID13_Pos))
#define PMC_GCSR0_GPID14_Pos                  _U_(14)                                              /**< (PMC_GCSR0) Generic Clock 14 Status Position */
#define PMC_GCSR0_GPID14_Msk                  (_U_(0x1) << PMC_GCSR0_GPID14_Pos)                   /**< (PMC_GCSR0) Generic Clock 14 Status Mask */
#define PMC_GCSR0_GPID14(value)               (PMC_GCSR0_GPID14_Msk & ((value) << PMC_GCSR0_GPID14_Pos))
#define PMC_GCSR0_GPID15_Pos                  _U_(15)                                              /**< (PMC_GCSR0) Generic Clock 15 Status Position */
#define PMC_GCSR0_GPID15_Msk                  (_U_(0x1) << PMC_GCSR0_GPID15_Pos)                   /**< (PMC_GCSR0) Generic Clock 15 Status Mask */
#define PMC_GCSR0_GPID15(value)               (PMC_GCSR0_GPID15_Msk & ((value) << PMC_GCSR0_GPID15_Pos))
#define PMC_GCSR0_GPID16_Pos                  _U_(16)                                              /**< (PMC_GCSR0) Generic Clock 16 Status Position */
#define PMC_GCSR0_GPID16_Msk                  (_U_(0x1) << PMC_GCSR0_GPID16_Pos)                   /**< (PMC_GCSR0) Generic Clock 16 Status Mask */
#define PMC_GCSR0_GPID16(value)               (PMC_GCSR0_GPID16_Msk & ((value) << PMC_GCSR0_GPID16_Pos))
#define PMC_GCSR0_GPID17_Pos                  _U_(17)                                              /**< (PMC_GCSR0) Generic Clock 17 Status Position */
#define PMC_GCSR0_GPID17_Msk                  (_U_(0x1) << PMC_GCSR0_GPID17_Pos)                   /**< (PMC_GCSR0) Generic Clock 17 Status Mask */
#define PMC_GCSR0_GPID17(value)               (PMC_GCSR0_GPID17_Msk & ((value) << PMC_GCSR0_GPID17_Pos))
#define PMC_GCSR0_GPID19_Pos                  _U_(19)                                              /**< (PMC_GCSR0) Generic Clock 19 Status Position */
#define PMC_GCSR0_GPID19_Msk                  (_U_(0x1) << PMC_GCSR0_GPID19_Pos)                   /**< (PMC_GCSR0) Generic Clock 19 Status Mask */
#define PMC_GCSR0_GPID19(value)               (PMC_GCSR0_GPID19_Msk & ((value) << PMC_GCSR0_GPID19_Pos))
#define PMC_GCSR0_GPID25_Pos                  _U_(25)                                              /**< (PMC_GCSR0) Generic Clock 25 Status Position */
#define PMC_GCSR0_GPID25_Msk                  (_U_(0x1) << PMC_GCSR0_GPID25_Pos)                   /**< (PMC_GCSR0) Generic Clock 25 Status Mask */
#define PMC_GCSR0_GPID25(value)               (PMC_GCSR0_GPID25_Msk & ((value) << PMC_GCSR0_GPID25_Pos))
#define PMC_GCSR0_GPID26_Pos                  _U_(26)                                              /**< (PMC_GCSR0) Generic Clock 26 Status Position */
#define PMC_GCSR0_GPID26_Msk                  (_U_(0x1) << PMC_GCSR0_GPID26_Pos)                   /**< (PMC_GCSR0) Generic Clock 26 Status Mask */
#define PMC_GCSR0_GPID26(value)               (PMC_GCSR0_GPID26_Msk & ((value) << PMC_GCSR0_GPID26_Pos))
#define PMC_GCSR0_Msk                         _U_(0x060BFFE0)                                      /**< (PMC_GCSR0) Register Mask  */

#define PMC_GCSR0_GPID_Pos                    _U_(5)                                               /**< (PMC_GCSR0 Position) Generic Clock 26 Status */
#define PMC_GCSR0_GPID_Msk                    (_U_(0xFFFF) << PMC_GCSR0_GPID_Pos)                  /**< (PMC_GCSR0 Mask) GPID */
#define PMC_GCSR0_GPID(value)                 (PMC_GCSR0_GPID_Msk & ((value) << PMC_GCSR0_GPID_Pos)) 

/* -------- PMC_GCSR1 : (PMC Offset: 0xC4) ( R/ 32) Generic Clock Status Register 1 -------- */
#define PMC_GCSR1_GPID32_Pos                  _U_(0)                                               /**< (PMC_GCSR1) Generic Clock 32 Status Position */
#define PMC_GCSR1_GPID32_Msk                  (_U_(0x1) << PMC_GCSR1_GPID32_Pos)                   /**< (PMC_GCSR1) Generic Clock 32 Status Mask */
#define PMC_GCSR1_GPID32(value)               (PMC_GCSR1_GPID32_Msk & ((value) << PMC_GCSR1_GPID32_Pos))
#define PMC_GCSR1_GPID33_Pos                  _U_(1)                                               /**< (PMC_GCSR1) Generic Clock 33 Status Position */
#define PMC_GCSR1_GPID33_Msk                  (_U_(0x1) << PMC_GCSR1_GPID33_Pos)                   /**< (PMC_GCSR1) Generic Clock 33 Status Mask */
#define PMC_GCSR1_GPID33(value)               (PMC_GCSR1_GPID33_Msk & ((value) << PMC_GCSR1_GPID33_Pos))
#define PMC_GCSR1_GPID34_Pos                  _U_(2)                                               /**< (PMC_GCSR1) Generic Clock 34 Status Position */
#define PMC_GCSR1_GPID34_Msk                  (_U_(0x1) << PMC_GCSR1_GPID34_Pos)                   /**< (PMC_GCSR1) Generic Clock 34 Status Mask */
#define PMC_GCSR1_GPID34(value)               (PMC_GCSR1_GPID34_Msk & ((value) << PMC_GCSR1_GPID34_Pos))
#define PMC_GCSR1_GPID37_Pos                  _U_(5)                                               /**< (PMC_GCSR1) Generic Clock 37 Status Position */
#define PMC_GCSR1_GPID37_Msk                  (_U_(0x1) << PMC_GCSR1_GPID37_Pos)                   /**< (PMC_GCSR1) Generic Clock 37 Status Mask */
#define PMC_GCSR1_GPID37(value)               (PMC_GCSR1_GPID37_Msk & ((value) << PMC_GCSR1_GPID37_Pos))
#define PMC_GCSR1_GPID42_Pos                  _U_(10)                                              /**< (PMC_GCSR1) Generic Clock 42 Status Position */
#define PMC_GCSR1_GPID42_Msk                  (_U_(0x1) << PMC_GCSR1_GPID42_Pos)                   /**< (PMC_GCSR1) Generic Clock 42 Status Mask */
#define PMC_GCSR1_GPID42(value)               (PMC_GCSR1_GPID42_Msk & ((value) << PMC_GCSR1_GPID42_Pos))
#define PMC_GCSR1_GPID45_Pos                  _U_(13)                                              /**< (PMC_GCSR1) Generic Clock 45 Status Position */
#define PMC_GCSR1_GPID45_Msk                  (_U_(0x1) << PMC_GCSR1_GPID45_Pos)                   /**< (PMC_GCSR1) Generic Clock 45 Status Mask */
#define PMC_GCSR1_GPID45(value)               (PMC_GCSR1_GPID45_Msk & ((value) << PMC_GCSR1_GPID45_Pos))
#define PMC_GCSR1_GPID47_Pos                  _U_(15)                                              /**< (PMC_GCSR1) Generic Clock 47 Status Position */
#define PMC_GCSR1_GPID47_Msk                  (_U_(0x1) << PMC_GCSR1_GPID47_Pos)                   /**< (PMC_GCSR1) Generic Clock 47 Status Mask */
#define PMC_GCSR1_GPID47(value)               (PMC_GCSR1_GPID47_Msk & ((value) << PMC_GCSR1_GPID47_Pos))
#define PMC_GCSR1_Msk                         _U_(0x0000A427)                                      /**< (PMC_GCSR1) Register Mask  */

#define PMC_GCSR1_GPID_Pos                    _U_(0)                                               /**< (PMC_GCSR1 Position) Generic Clock 47 Status */
#define PMC_GCSR1_GPID_Msk                    (_U_(0x7F) << PMC_GCSR1_GPID_Pos)                    /**< (PMC_GCSR1 Mask) GPID */
#define PMC_GCSR1_GPID(value)                 (PMC_GCSR1_GPID_Msk & ((value) << PMC_GCSR1_GPID_Pos)) 

/* -------- PMC_PLL_IER : (PMC Offset: 0xE0) ( /W 32) PLL Interrupt Enable Register -------- */
#define PMC_PLL_IER_LOCKA_Pos                 _U_(0)                                               /**< (PMC_PLL_IER) PLLA Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCKA_Msk                 (_U_(0x1) << PMC_PLL_IER_LOCKA_Pos)                  /**< (PMC_PLL_IER) PLLA Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCKA(value)              (PMC_PLL_IER_LOCKA_Msk & ((value) << PMC_PLL_IER_LOCKA_Pos))
#define PMC_PLL_IER_LOCKU_Pos                 _U_(1)                                               /**< (PMC_PLL_IER) UPLL Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCKU_Msk                 (_U_(0x1) << PMC_PLL_IER_LOCKU_Pos)                  /**< (PMC_PLL_IER) UPLL Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCKU(value)              (PMC_PLL_IER_LOCKU_Msk & ((value) << PMC_PLL_IER_LOCKU_Pos))
#define PMC_PLL_IER_UNLOCKA_Pos               _U_(16)                                              /**< (PMC_PLL_IER) PLLA Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCKA_Msk               (_U_(0x1) << PMC_PLL_IER_UNLOCKA_Pos)                /**< (PMC_PLL_IER) PLLA Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCKA(value)            (PMC_PLL_IER_UNLOCKA_Msk & ((value) << PMC_PLL_IER_UNLOCKA_Pos))
#define PMC_PLL_IER_UNLOCKU_Pos               _U_(17)                                              /**< (PMC_PLL_IER) UPLL Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCKU_Msk               (_U_(0x1) << PMC_PLL_IER_UNLOCKU_Pos)                /**< (PMC_PLL_IER) UPLL Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCKU(value)            (PMC_PLL_IER_UNLOCKU_Msk & ((value) << PMC_PLL_IER_UNLOCKU_Pos))
#define PMC_PLL_IER_Msk                       _U_(0x00030003)                                      /**< (PMC_PLL_IER) Register Mask  */


/* -------- PMC_PLL_IDR : (PMC Offset: 0xE4) ( /W 32) PLL Interrupt Disable Register -------- */
#define PMC_PLL_IDR_LOCKA_Pos                 _U_(0)                                               /**< (PMC_PLL_IDR) PLLA Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCKA_Msk                 (_U_(0x1) << PMC_PLL_IDR_LOCKA_Pos)                  /**< (PMC_PLL_IDR) PLLA Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCKA(value)              (PMC_PLL_IDR_LOCKA_Msk & ((value) << PMC_PLL_IDR_LOCKA_Pos))
#define PMC_PLL_IDR_LOCKU_Pos                 _U_(1)                                               /**< (PMC_PLL_IDR) UPLL Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCKU_Msk                 (_U_(0x1) << PMC_PLL_IDR_LOCKU_Pos)                  /**< (PMC_PLL_IDR) UPLL Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCKU(value)              (PMC_PLL_IDR_LOCKU_Msk & ((value) << PMC_PLL_IDR_LOCKU_Pos))
#define PMC_PLL_IDR_UNLOCKA_Pos               _U_(16)                                              /**< (PMC_PLL_IDR) PLLA Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCKA_Msk               (_U_(0x1) << PMC_PLL_IDR_UNLOCKA_Pos)                /**< (PMC_PLL_IDR) PLLA Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCKA(value)            (PMC_PLL_IDR_UNLOCKA_Msk & ((value) << PMC_PLL_IDR_UNLOCKA_Pos))
#define PMC_PLL_IDR_UNLOCKU_Pos               _U_(17)                                              /**< (PMC_PLL_IDR) UPLL Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCKU_Msk               (_U_(0x1) << PMC_PLL_IDR_UNLOCKU_Pos)                /**< (PMC_PLL_IDR) UPLL Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCKU(value)            (PMC_PLL_IDR_UNLOCKU_Msk & ((value) << PMC_PLL_IDR_UNLOCKU_Pos))
#define PMC_PLL_IDR_Msk                       _U_(0x00030003)                                      /**< (PMC_PLL_IDR) Register Mask  */


/* -------- PMC_PLL_IMR : (PMC Offset: 0xE8) ( R/ 32) PLL Interrupt Mask Register -------- */
#define PMC_PLL_IMR_LOCKA_Pos                 _U_(0)                                               /**< (PMC_PLL_IMR) PLLA Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCKA_Msk                 (_U_(0x1) << PMC_PLL_IMR_LOCKA_Pos)                  /**< (PMC_PLL_IMR) PLLA Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCKA(value)              (PMC_PLL_IMR_LOCKA_Msk & ((value) << PMC_PLL_IMR_LOCKA_Pos))
#define PMC_PLL_IMR_LOCKU_Pos                 _U_(1)                                               /**< (PMC_PLL_IMR) UPLL Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCKU_Msk                 (_U_(0x1) << PMC_PLL_IMR_LOCKU_Pos)                  /**< (PMC_PLL_IMR) UPLL Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCKU(value)              (PMC_PLL_IMR_LOCKU_Msk & ((value) << PMC_PLL_IMR_LOCKU_Pos))
#define PMC_PLL_IMR_UNLOCKA_Pos               _U_(16)                                              /**< (PMC_PLL_IMR) PLLA Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCKA_Msk               (_U_(0x1) << PMC_PLL_IMR_UNLOCKA_Pos)                /**< (PMC_PLL_IMR) PLLA Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCKA(value)            (PMC_PLL_IMR_UNLOCKA_Msk & ((value) << PMC_PLL_IMR_UNLOCKA_Pos))
#define PMC_PLL_IMR_UNLOCKU_Pos               _U_(17)                                              /**< (PMC_PLL_IMR) UPLL Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCKU_Msk               (_U_(0x1) << PMC_PLL_IMR_UNLOCKU_Pos)                /**< (PMC_PLL_IMR) UPLL Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCKU(value)            (PMC_PLL_IMR_UNLOCKU_Msk & ((value) << PMC_PLL_IMR_UNLOCKU_Pos))
#define PMC_PLL_IMR_Msk                       _U_(0x00030003)                                      /**< (PMC_PLL_IMR) Register Mask  */


/* -------- PMC_PLL_ISR0 : (PMC Offset: 0xEC) ( R/ 32) PLL Interrupt Status Register 0 -------- */
#define PMC_PLL_ISR0_LOCKA_Pos                _U_(0)                                               /**< (PMC_PLL_ISR0) PLLA Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCKA_Msk                (_U_(0x1) << PMC_PLL_ISR0_LOCKA_Pos)                 /**< (PMC_PLL_ISR0) PLLA Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCKA(value)             (PMC_PLL_ISR0_LOCKA_Msk & ((value) << PMC_PLL_ISR0_LOCKA_Pos))
#define PMC_PLL_ISR0_LOCKU_Pos                _U_(1)                                               /**< (PMC_PLL_ISR0) UPLL Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCKU_Msk                (_U_(0x1) << PMC_PLL_ISR0_LOCKU_Pos)                 /**< (PMC_PLL_ISR0) UPLL Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCKU(value)             (PMC_PLL_ISR0_LOCKU_Msk & ((value) << PMC_PLL_ISR0_LOCKU_Pos))
#define PMC_PLL_ISR0_UNLOCKA_Pos              _U_(16)                                              /**< (PMC_PLL_ISR0) PLLA Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCKA_Msk              (_U_(0x1) << PMC_PLL_ISR0_UNLOCKA_Pos)               /**< (PMC_PLL_ISR0) PLLA Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCKA(value)           (PMC_PLL_ISR0_UNLOCKA_Msk & ((value) << PMC_PLL_ISR0_UNLOCKA_Pos))
#define PMC_PLL_ISR0_UNLOCKU_Pos              _U_(17)                                              /**< (PMC_PLL_ISR0) UPLL Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCKU_Msk              (_U_(0x1) << PMC_PLL_ISR0_UNLOCKU_Pos)               /**< (PMC_PLL_ISR0) UPLL Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCKU(value)           (PMC_PLL_ISR0_UNLOCKU_Msk & ((value) << PMC_PLL_ISR0_UNLOCKU_Pos))
#define PMC_PLL_ISR0_Msk                      _U_(0x00030003)                                      /**< (PMC_PLL_ISR0) Register Mask  */


/* -------- PMC_PLL_ISR1 : (PMC Offset: 0xF0) ( R/ 32) PLL Interrupt Status Register 1 -------- */
#define PMC_PLL_ISR1_UDRA_Pos                 _U_(0)                                               /**< (PMC_PLL_ISR1) PLLA Underflow Position */
#define PMC_PLL_ISR1_UDRA_Msk                 (_U_(0x1) << PMC_PLL_ISR1_UDRA_Pos)                  /**< (PMC_PLL_ISR1) PLLA Underflow Mask */
#define PMC_PLL_ISR1_UDRA(value)              (PMC_PLL_ISR1_UDRA_Msk & ((value) << PMC_PLL_ISR1_UDRA_Pos))
#define PMC_PLL_ISR1_UDRU_Pos                 _U_(1)                                               /**< (PMC_PLL_ISR1) UPLL Underflow Position */
#define PMC_PLL_ISR1_UDRU_Msk                 (_U_(0x1) << PMC_PLL_ISR1_UDRU_Pos)                  /**< (PMC_PLL_ISR1) UPLL Underflow Mask */
#define PMC_PLL_ISR1_UDRU(value)              (PMC_PLL_ISR1_UDRU_Msk & ((value) << PMC_PLL_ISR1_UDRU_Pos))
#define PMC_PLL_ISR1_OVRA_Pos                 _U_(16)                                              /**< (PMC_PLL_ISR1) PLLA Overflow Position */
#define PMC_PLL_ISR1_OVRA_Msk                 (_U_(0x1) << PMC_PLL_ISR1_OVRA_Pos)                  /**< (PMC_PLL_ISR1) PLLA Overflow Mask */
#define PMC_PLL_ISR1_OVRA(value)              (PMC_PLL_ISR1_OVRA_Msk & ((value) << PMC_PLL_ISR1_OVRA_Pos))
#define PMC_PLL_ISR1_OVRU_Pos                 _U_(17)                                              /**< (PMC_PLL_ISR1) UPLL Overflow Position */
#define PMC_PLL_ISR1_OVRU_Msk                 (_U_(0x1) << PMC_PLL_ISR1_OVRU_Pos)                  /**< (PMC_PLL_ISR1) UPLL Overflow Mask */
#define PMC_PLL_ISR1_OVRU(value)              (PMC_PLL_ISR1_OVRU_Msk & ((value) << PMC_PLL_ISR1_OVRU_Pos))
#define PMC_PLL_ISR1_Msk                      _U_(0x00030003)                                      /**< (PMC_PLL_ISR1) Register Mask  */


/** \brief PMC register offsets definitions */
#define PMC_SCER_REG_OFST              (0x00)              /**< (PMC_SCER) System Clock Enable Register Offset */
#define PMC_SCDR_REG_OFST              (0x04)              /**< (PMC_SCDR) System Clock Disable Register Offset */
#define PMC_SCSR_REG_OFST              (0x08)              /**< (PMC_SCSR) System Clock Status Register Offset */
#define PMC_PLL_CTRL0_REG_OFST         (0x0C)              /**< (PMC_PLL_CTRL0) PLL Control Register 0 Offset */
#define PMC_PLL_CTRL1_REG_OFST         (0x10)              /**< (PMC_PLL_CTRL1) PLL Control Register 1 Offset */
#define PMC_PLL_SSR_REG_OFST           (0x14)              /**< (PMC_PLL_SSR) PLL Spread Spectrum Register Offset */
#define PMC_PLL_ACR_REG_OFST           (0x18)              /**< (PMC_PLL_ACR) PLL Analog Control Register Offset */
#define PMC_PLL_UPDT_REG_OFST          (0x1C)              /**< (PMC_PLL_UPDT) PLL Update Register Offset */
#define CKGR_MOR_REG_OFST              (0x20)              /**< (CKGR_MOR) Main Oscillator Register Offset */
#define CKGR_MCFR_REG_OFST             (0x24)              /**< (CKGR_MCFR) Main Clock Frequency Register Offset */
#define PMC_CPU_CKR_REG_OFST           (0x28)              /**< (PMC_CPU_CKR) CPU Clock Register Offset */
#define PMC_USB_REG_OFST               (0x38)              /**< (PMC_USB) USB Clock Register Offset */
#define PMC_PCK_REG_OFST               (0x40)              /**< (PMC_PCK) Programmable Clock Register Offset */
#define PMC_PCK0_REG_OFST              (0x40)              /**< (PMC_PCK0) Programmable Clock Register Offset */
#define PMC_PCK1_REG_OFST              (0x44)              /**< (PMC_PCK1) Programmable Clock Register Offset */
#define PMC_IER_REG_OFST               (0x60)              /**< (PMC_IER) Interrupt Enable Register Offset */
#define PMC_IDR_REG_OFST               (0x64)              /**< (PMC_IDR) Interrupt Disable Register Offset */
#define PMC_SR_REG_OFST                (0x68)              /**< (PMC_SR) Status Register Offset */
#define PMC_IMR_REG_OFST               (0x6C)              /**< (PMC_IMR) Interrupt Mask Register Offset */
#define PMC_FSMR_REG_OFST              (0x70)              /**< (PMC_FSMR) Fast Startup Mode Register Offset */
#define PMC_WCR_REG_OFST               (0x74)              /**< (PMC_WCR) Wakeup Control Register Offset */
#define PMC_FOCR_REG_OFST              (0x78)              /**< (PMC_FOCR) Fault Output Clear Register Offset */
#define PMC_WPMR_REG_OFST              (0x80)              /**< (PMC_WPMR) Write Protection Mode Register Offset */
#define PMC_WPSR_REG_OFST              (0x84)              /**< (PMC_WPSR) Write Protection Status Register Offset */
#define PMC_PCR_REG_OFST               (0x88)              /**< (PMC_PCR) Peripheral Control Register Offset */
#define PMC_OCR_REG_OFST               (0x8C)              /**< (PMC_OCR) Oscillator Calibration Register Offset */
#define PMC_MCKLIM_REG_OFST            (0x9C)              /**< (PMC_MCKLIM) MCK Monitor Limits Register Offset */
#define PMC_CSR0_REG_OFST              (0xA0)              /**< (PMC_CSR0) Peripheral Clock Status Register 0 Offset */
#define PMC_CSR1_REG_OFST              (0xA4)              /**< (PMC_CSR1) Peripheral Clock Status Register 1 Offset */
#define PMC_GCSR0_REG_OFST             (0xC0)              /**< (PMC_GCSR0) Generic Clock Status Register 0 Offset */
#define PMC_GCSR1_REG_OFST             (0xC4)              /**< (PMC_GCSR1) Generic Clock Status Register 1 Offset */
#define PMC_PLL_IER_REG_OFST           (0xE0)              /**< (PMC_PLL_IER) PLL Interrupt Enable Register Offset */
#define PMC_PLL_IDR_REG_OFST           (0xE4)              /**< (PMC_PLL_IDR) PLL Interrupt Disable Register Offset */
#define PMC_PLL_IMR_REG_OFST           (0xE8)              /**< (PMC_PLL_IMR) PLL Interrupt Mask Register Offset */
#define PMC_PLL_ISR0_REG_OFST          (0xEC)              /**< (PMC_PLL_ISR0) PLL Interrupt Status Register 0 Offset */
#define PMC_PLL_ISR1_REG_OFST          (0xF0)              /**< (PMC_PLL_ISR1) PLL Interrupt Status Register 1 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PMC register API structure */
typedef struct
{
  __O   uint32_t                       PMC_SCER;           /**< Offset: 0x00 ( /W  32) System Clock Enable Register */
  __O   uint32_t                       PMC_SCDR;           /**< Offset: 0x04 ( /W  32) System Clock Disable Register */
  __I   uint32_t                       PMC_SCSR;           /**< Offset: 0x08 (R/   32) System Clock Status Register */
  __IO  uint32_t                       PMC_PLL_CTRL0;      /**< Offset: 0x0C (R/W  32) PLL Control Register 0 */
  __IO  uint32_t                       PMC_PLL_CTRL1;      /**< Offset: 0x10 (R/W  32) PLL Control Register 1 */
  __IO  uint32_t                       PMC_PLL_SSR;        /**< Offset: 0x14 (R/W  32) PLL Spread Spectrum Register */
  __IO  uint32_t                       PMC_PLL_ACR;        /**< Offset: 0x18 (R/W  32) PLL Analog Control Register */
  __IO  uint32_t                       PMC_PLL_UPDT;       /**< Offset: 0x1C (R/W  32) PLL Update Register */
  __IO  uint32_t                       CKGR_MOR;           /**< Offset: 0x20 (R/W  32) Main Oscillator Register */
  __IO  uint32_t                       CKGR_MCFR;          /**< Offset: 0x24 (R/W  32) Main Clock Frequency Register */
  __IO  uint32_t                       PMC_CPU_CKR;        /**< Offset: 0x28 (R/W  32) CPU Clock Register */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint32_t                       PMC_USB;            /**< Offset: 0x38 (R/W  32) USB Clock Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       PMC_PCK[2];         /**< Offset: 0x40 (R/W  32) Programmable Clock Register */
  __I   uint8_t                        Reserved3[0x18];
  __O   uint32_t                       PMC_IER;            /**< Offset: 0x60 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PMC_IDR;            /**< Offset: 0x64 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PMC_SR;             /**< Offset: 0x68 (R/   32) Status Register */
  __I   uint32_t                       PMC_IMR;            /**< Offset: 0x6C (R/   32) Interrupt Mask Register */
  __IO  uint32_t                       PMC_FSMR;           /**< Offset: 0x70 (R/W  32) Fast Startup Mode Register */
  __IO  uint32_t                       PMC_WCR;            /**< Offset: 0x74 (R/W  32) Wakeup Control Register */
  __O   uint32_t                       PMC_FOCR;           /**< Offset: 0x78 ( /W  32) Fault Output Clear Register */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       PMC_WPMR;           /**< Offset: 0x80 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PMC_WPSR;           /**< Offset: 0x84 (R/   32) Write Protection Status Register */
  __IO  uint32_t                       PMC_PCR;            /**< Offset: 0x88 (R/W  32) Peripheral Control Register */
  __IO  uint32_t                       PMC_OCR;            /**< Offset: 0x8C (R/W  32) Oscillator Calibration Register */
  __I   uint8_t                        Reserved5[0x0C];
  __IO  uint32_t                       PMC_MCKLIM;         /**< Offset: 0x9C (R/W  32) MCK Monitor Limits Register */
  __I   uint32_t                       PMC_CSR0;           /**< Offset: 0xA0 (R/   32) Peripheral Clock Status Register 0 */
  __I   uint32_t                       PMC_CSR1;           /**< Offset: 0xA4 (R/   32) Peripheral Clock Status Register 1 */
  __I   uint8_t                        Reserved6[0x18];
  __I   uint32_t                       PMC_GCSR0;          /**< Offset: 0xC0 (R/   32) Generic Clock Status Register 0 */
  __I   uint32_t                       PMC_GCSR1;          /**< Offset: 0xC4 (R/   32) Generic Clock Status Register 1 */
  __I   uint8_t                        Reserved7[0x18];
  __O   uint32_t                       PMC_PLL_IER;        /**< Offset: 0xE0 ( /W  32) PLL Interrupt Enable Register */
  __O   uint32_t                       PMC_PLL_IDR;        /**< Offset: 0xE4 ( /W  32) PLL Interrupt Disable Register */
  __I   uint32_t                       PMC_PLL_IMR;        /**< Offset: 0xE8 (R/   32) PLL Interrupt Mask Register */
  __I   uint32_t                       PMC_PLL_ISR0;       /**< Offset: 0xEC (R/   32) PLL Interrupt Status Register 0 */
  __I   uint32_t                       PMC_PLL_ISR1;       /**< Offset: 0xF0 (R/   32) PLL Interrupt Status Register 1 */
} pmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_PMC_COMPONENT_H_ */
