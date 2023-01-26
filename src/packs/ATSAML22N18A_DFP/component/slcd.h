/**
 * \brief Component description for SLCD
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

/* file generated from device description version 2020-11-19T06:59:39Z */
#ifndef _SAML22_SLCD_COMPONENT_H_
#define _SAML22_SLCD_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SLCD                                         */
/* ************************************************************************** */

/* -------- SLCD_CTRLA : (SLCD Offset: 0x00) (R/W 32) Control A -------- */
#define SLCD_CTRLA_RESETVALUE                 _U_(0x3D80000)                                       /**<  (SLCD_CTRLA) Control A  Reset Value */

#define SLCD_CTRLA_SWRST_Pos                  _U_(0)                                               /**< (SLCD_CTRLA) Software Reset Position */
#define SLCD_CTRLA_SWRST_Msk                  (_U_(0x1) << SLCD_CTRLA_SWRST_Pos)                   /**< (SLCD_CTRLA) Software Reset Mask */
#define SLCD_CTRLA_SWRST(value)               (SLCD_CTRLA_SWRST_Msk & ((value) << SLCD_CTRLA_SWRST_Pos))
#define SLCD_CTRLA_ENABLE_Pos                 _U_(1)                                               /**< (SLCD_CTRLA) Enable Position */
#define SLCD_CTRLA_ENABLE_Msk                 (_U_(0x1) << SLCD_CTRLA_ENABLE_Pos)                  /**< (SLCD_CTRLA) Enable Mask */
#define SLCD_CTRLA_ENABLE(value)              (SLCD_CTRLA_ENABLE_Msk & ((value) << SLCD_CTRLA_ENABLE_Pos))
#define SLCD_CTRLA_DUTY_Pos                   _U_(2)                                               /**< (SLCD_CTRLA) Duty Ratio Position */
#define SLCD_CTRLA_DUTY_Msk                   (_U_(0x7) << SLCD_CTRLA_DUTY_Pos)                    /**< (SLCD_CTRLA) Duty Ratio Mask */
#define SLCD_CTRLA_DUTY(value)                (SLCD_CTRLA_DUTY_Msk & ((value) << SLCD_CTRLA_DUTY_Pos))
#define   SLCD_CTRLA_DUTY_HALF_Val            _U_(0x1)                                             /**< (SLCD_CTRLA) 1/2 duty  */
#define   SLCD_CTRLA_DUTY_THIRD_Val           _U_(0x2)                                             /**< (SLCD_CTRLA) 1/3 duty  */
#define   SLCD_CTRLA_DUTY_FOURTH_Val          _U_(0x3)                                             /**< (SLCD_CTRLA) 1/4 duty  */
#define   SLCD_CTRLA_DUTY_SIXTH_Val           _U_(0x4)                                             /**< (SLCD_CTRLA) 1/6 duty  */
#define   SLCD_CTRLA_DUTY_EIGHT_Val           _U_(0x5)                                             /**< (SLCD_CTRLA) 1/8 duty  */
#define SLCD_CTRLA_DUTY_HALF                  (SLCD_CTRLA_DUTY_HALF_Val << SLCD_CTRLA_DUTY_Pos)    /**< (SLCD_CTRLA) 1/2 duty Position  */
#define SLCD_CTRLA_DUTY_THIRD                 (SLCD_CTRLA_DUTY_THIRD_Val << SLCD_CTRLA_DUTY_Pos)   /**< (SLCD_CTRLA) 1/3 duty Position  */
#define SLCD_CTRLA_DUTY_FOURTH                (SLCD_CTRLA_DUTY_FOURTH_Val << SLCD_CTRLA_DUTY_Pos)  /**< (SLCD_CTRLA) 1/4 duty Position  */
#define SLCD_CTRLA_DUTY_SIXTH                 (SLCD_CTRLA_DUTY_SIXTH_Val << SLCD_CTRLA_DUTY_Pos)   /**< (SLCD_CTRLA) 1/6 duty Position  */
#define SLCD_CTRLA_DUTY_EIGHT                 (SLCD_CTRLA_DUTY_EIGHT_Val << SLCD_CTRLA_DUTY_Pos)   /**< (SLCD_CTRLA) 1/8 duty Position  */
#define SLCD_CTRLA_WMOD_Pos                   _U_(5)                                               /**< (SLCD_CTRLA) Waveform Mode Position */
#define SLCD_CTRLA_WMOD_Msk                   (_U_(0x1) << SLCD_CTRLA_WMOD_Pos)                    /**< (SLCD_CTRLA) Waveform Mode Mask */
#define SLCD_CTRLA_WMOD(value)                (SLCD_CTRLA_WMOD_Msk & ((value) << SLCD_CTRLA_WMOD_Pos))
#define   SLCD_CTRLA_WMOD_LP_Val              _U_(0x0)                                             /**< (SLCD_CTRLA) Low Power Waveform Mode  */
#define   SLCD_CTRLA_WMOD_STD_Val             _U_(0x1)                                             /**< (SLCD_CTRLA) Standard Waveform Mode  */
#define SLCD_CTRLA_WMOD_LP                    (SLCD_CTRLA_WMOD_LP_Val << SLCD_CTRLA_WMOD_Pos)      /**< (SLCD_CTRLA) Low Power Waveform Mode Position  */
#define SLCD_CTRLA_WMOD_STD                   (SLCD_CTRLA_WMOD_STD_Val << SLCD_CTRLA_WMOD_Pos)     /**< (SLCD_CTRLA) Standard Waveform Mode Position  */
#define SLCD_CTRLA_RUNSTDBY_Pos               _U_(6)                                               /**< (SLCD_CTRLA) Run in Standby Position */
#define SLCD_CTRLA_RUNSTDBY_Msk               (_U_(0x1) << SLCD_CTRLA_RUNSTDBY_Pos)                /**< (SLCD_CTRLA) Run in Standby Mask */
#define SLCD_CTRLA_RUNSTDBY(value)            (SLCD_CTRLA_RUNSTDBY_Msk & ((value) << SLCD_CTRLA_RUNSTDBY_Pos))
#define SLCD_CTRLA_PRESC_Pos                  _U_(8)                                               /**< (SLCD_CTRLA) Clock Prescaler Position */
#define SLCD_CTRLA_PRESC_Msk                  (_U_(0x3) << SLCD_CTRLA_PRESC_Pos)                   /**< (SLCD_CTRLA) Clock Prescaler Mask */
#define SLCD_CTRLA_PRESC(value)               (SLCD_CTRLA_PRESC_Msk & ((value) << SLCD_CTRLA_PRESC_Pos))
#define   SLCD_CTRLA_PRESC_PRESC16_Val        _U_(0x0)                                             /**< (SLCD_CTRLA) 16  */
#define   SLCD_CTRLA_PRESC_PRESC32_Val        _U_(0x1)                                             /**< (SLCD_CTRLA) 32  */
#define   SLCD_CTRLA_PRESC_PRESC64_Val        _U_(0x2)                                             /**< (SLCD_CTRLA) 64  */
#define   SLCD_CTRLA_PRESC_PRESC128_Val       _U_(0x3)                                             /**< (SLCD_CTRLA) 128  */
#define SLCD_CTRLA_PRESC_PRESC16              (SLCD_CTRLA_PRESC_PRESC16_Val << SLCD_CTRLA_PRESC_Pos) /**< (SLCD_CTRLA) 16 Position  */
#define SLCD_CTRLA_PRESC_PRESC32              (SLCD_CTRLA_PRESC_PRESC32_Val << SLCD_CTRLA_PRESC_Pos) /**< (SLCD_CTRLA) 32 Position  */
#define SLCD_CTRLA_PRESC_PRESC64              (SLCD_CTRLA_PRESC_PRESC64_Val << SLCD_CTRLA_PRESC_Pos) /**< (SLCD_CTRLA) 64 Position  */
#define SLCD_CTRLA_PRESC_PRESC128             (SLCD_CTRLA_PRESC_PRESC128_Val << SLCD_CTRLA_PRESC_Pos) /**< (SLCD_CTRLA) 128 Position  */
#define SLCD_CTRLA_CKDIV_Pos                  _U_(12)                                              /**< (SLCD_CTRLA) Clock Divider Position */
#define SLCD_CTRLA_CKDIV_Msk                  (_U_(0x7) << SLCD_CTRLA_CKDIV_Pos)                   /**< (SLCD_CTRLA) Clock Divider Mask */
#define SLCD_CTRLA_CKDIV(value)               (SLCD_CTRLA_CKDIV_Msk & ((value) << SLCD_CTRLA_CKDIV_Pos))
#define SLCD_CTRLA_BIAS_Pos                   _U_(16)                                              /**< (SLCD_CTRLA) Bias Setting Position */
#define SLCD_CTRLA_BIAS_Msk                   (_U_(0x3) << SLCD_CTRLA_BIAS_Pos)                    /**< (SLCD_CTRLA) Bias Setting Mask */
#define SLCD_CTRLA_BIAS(value)                (SLCD_CTRLA_BIAS_Msk & ((value) << SLCD_CTRLA_BIAS_Pos))
#define   SLCD_CTRLA_BIAS_HALF_Val            _U_(0x1)                                             /**< (SLCD_CTRLA) 1/2 bias  */
#define   SLCD_CTRLA_BIAS_THIRD_Val           _U_(0x2)                                             /**< (SLCD_CTRLA) 1/3 bias  */
#define   SLCD_CTRLA_BIAS_FOURTH_Val          _U_(0x3)                                             /**< (SLCD_CTRLA) 1/4 bias  */
#define SLCD_CTRLA_BIAS_HALF                  (SLCD_CTRLA_BIAS_HALF_Val << SLCD_CTRLA_BIAS_Pos)    /**< (SLCD_CTRLA) 1/2 bias Position  */
#define SLCD_CTRLA_BIAS_THIRD                 (SLCD_CTRLA_BIAS_THIRD_Val << SLCD_CTRLA_BIAS_Pos)   /**< (SLCD_CTRLA) 1/3 bias Position  */
#define SLCD_CTRLA_BIAS_FOURTH                (SLCD_CTRLA_BIAS_FOURTH_Val << SLCD_CTRLA_BIAS_Pos)  /**< (SLCD_CTRLA) 1/4 bias Position  */
#define SLCD_CTRLA_XVLCD_Pos                  _U_(19)                                              /**< (SLCD_CTRLA) External VLCD Position */
#define SLCD_CTRLA_XVLCD_Msk                  (_U_(0x1) << SLCD_CTRLA_XVLCD_Pos)                   /**< (SLCD_CTRLA) External VLCD Mask */
#define SLCD_CTRLA_XVLCD(value)               (SLCD_CTRLA_XVLCD_Msk & ((value) << SLCD_CTRLA_XVLCD_Pos))
#define SLCD_CTRLA_PRF_Pos                    _U_(20)                                              /**< (SLCD_CTRLA) Power Refresh Frequency Position */
#define SLCD_CTRLA_PRF_Msk                    (_U_(0x3) << SLCD_CTRLA_PRF_Pos)                     /**< (SLCD_CTRLA) Power Refresh Frequency Mask */
#define SLCD_CTRLA_PRF(value)                 (SLCD_CTRLA_PRF_Msk & ((value) << SLCD_CTRLA_PRF_Pos))
#define   SLCD_CTRLA_PRF_PR2000_Val           _U_(0x0)                                             /**< (SLCD_CTRLA) 2kHz  */
#define   SLCD_CTRLA_PRF_PR1000_Val           _U_(0x1)                                             /**< (SLCD_CTRLA) 1kHz  */
#define   SLCD_CTRLA_PRF_PR500_Val            _U_(0x2)                                             /**< (SLCD_CTRLA) 500Hz  */
#define   SLCD_CTRLA_PRF_PR250_Val            _U_(0x3)                                             /**< (SLCD_CTRLA) 250Hz  */
#define SLCD_CTRLA_PRF_PR2000                 (SLCD_CTRLA_PRF_PR2000_Val << SLCD_CTRLA_PRF_Pos)    /**< (SLCD_CTRLA) 2kHz Position  */
#define SLCD_CTRLA_PRF_PR1000                 (SLCD_CTRLA_PRF_PR1000_Val << SLCD_CTRLA_PRF_Pos)    /**< (SLCD_CTRLA) 1kHz Position  */
#define SLCD_CTRLA_PRF_PR500                  (SLCD_CTRLA_PRF_PR500_Val << SLCD_CTRLA_PRF_Pos)     /**< (SLCD_CTRLA) 500Hz Position  */
#define SLCD_CTRLA_PRF_PR250                  (SLCD_CTRLA_PRF_PR250_Val << SLCD_CTRLA_PRF_Pos)     /**< (SLCD_CTRLA) 250Hz Position  */
#define SLCD_CTRLA_DMFCS_Pos                  _U_(22)                                              /**< (SLCD_CTRLA) Display Memory Update Frame Counter Selection Position */
#define SLCD_CTRLA_DMFCS_Msk                  (_U_(0x3) << SLCD_CTRLA_DMFCS_Pos)                   /**< (SLCD_CTRLA) Display Memory Update Frame Counter Selection Mask */
#define SLCD_CTRLA_DMFCS(value)               (SLCD_CTRLA_DMFCS_Msk & ((value) << SLCD_CTRLA_DMFCS_Pos))
#define   SLCD_CTRLA_DMFCS_FC0_Val            _U_(0x0)                                             /**< (SLCD_CTRLA) Frame Counter 0  */
#define   SLCD_CTRLA_DMFCS_FC1_Val            _U_(0x1)                                             /**< (SLCD_CTRLA) Frame Counter 1  */
#define   SLCD_CTRLA_DMFCS_FC2_Val            _U_(0x2)                                             /**< (SLCD_CTRLA) Frame Counter 2  */
#define   SLCD_CTRLA_DMFCS_NFC_Val            _U_(0x3)                                             /**< (SLCD_CTRLA) Frame Counter event to DMU is forced to 0  */
#define SLCD_CTRLA_DMFCS_FC0                  (SLCD_CTRLA_DMFCS_FC0_Val << SLCD_CTRLA_DMFCS_Pos)   /**< (SLCD_CTRLA) Frame Counter 0 Position  */
#define SLCD_CTRLA_DMFCS_FC1                  (SLCD_CTRLA_DMFCS_FC1_Val << SLCD_CTRLA_DMFCS_Pos)   /**< (SLCD_CTRLA) Frame Counter 1 Position  */
#define SLCD_CTRLA_DMFCS_FC2                  (SLCD_CTRLA_DMFCS_FC2_Val << SLCD_CTRLA_DMFCS_Pos)   /**< (SLCD_CTRLA) Frame Counter 2 Position  */
#define SLCD_CTRLA_DMFCS_NFC                  (SLCD_CTRLA_DMFCS_NFC_Val << SLCD_CTRLA_DMFCS_Pos)   /**< (SLCD_CTRLA) Frame Counter event to DMU is forced to 0 Position  */
#define SLCD_CTRLA_RRF_Pos                    _U_(24)                                              /**< (SLCD_CTRLA) Reference Refresh Frequency Position */
#define SLCD_CTRLA_RRF_Msk                    (_U_(0x7) << SLCD_CTRLA_RRF_Pos)                     /**< (SLCD_CTRLA) Reference Refresh Frequency Mask */
#define SLCD_CTRLA_RRF(value)                 (SLCD_CTRLA_RRF_Msk & ((value) << SLCD_CTRLA_RRF_Pos))
#define   SLCD_CTRLA_RRF_RR2000_Val           _U_(0x0)                                             /**< (SLCD_CTRLA) 2kHz  */
#define   SLCD_CTRLA_RRF_RR1000_Val           _U_(0x1)                                             /**< (SLCD_CTRLA) 1kHz  */
#define   SLCD_CTRLA_RRF_RR500_Val            _U_(0x2)                                             /**< (SLCD_CTRLA) 500Hz  */
#define   SLCD_CTRLA_RRF_RR250_Val            _U_(0x3)                                             /**< (SLCD_CTRLA) 250Hz  */
#define   SLCD_CTRLA_RRF_RR125_Val            _U_(0x4)                                             /**< (SLCD_CTRLA) 125Hz  */
#define   SLCD_CTRLA_RRF_RR62_Val             _U_(0x5)                                             /**< (SLCD_CTRLA) 62.5Hz  */
#define SLCD_CTRLA_RRF_RR2000                 (SLCD_CTRLA_RRF_RR2000_Val << SLCD_CTRLA_RRF_Pos)    /**< (SLCD_CTRLA) 2kHz Position  */
#define SLCD_CTRLA_RRF_RR1000                 (SLCD_CTRLA_RRF_RR1000_Val << SLCD_CTRLA_RRF_Pos)    /**< (SLCD_CTRLA) 1kHz Position  */
#define SLCD_CTRLA_RRF_RR500                  (SLCD_CTRLA_RRF_RR500_Val << SLCD_CTRLA_RRF_Pos)     /**< (SLCD_CTRLA) 500Hz Position  */
#define SLCD_CTRLA_RRF_RR250                  (SLCD_CTRLA_RRF_RR250_Val << SLCD_CTRLA_RRF_Pos)     /**< (SLCD_CTRLA) 250Hz Position  */
#define SLCD_CTRLA_RRF_RR125                  (SLCD_CTRLA_RRF_RR125_Val << SLCD_CTRLA_RRF_Pos)     /**< (SLCD_CTRLA) 125Hz Position  */
#define SLCD_CTRLA_RRF_RR62                   (SLCD_CTRLA_RRF_RR62_Val << SLCD_CTRLA_RRF_Pos)      /**< (SLCD_CTRLA) 62.5Hz Position  */
#define SLCD_CTRLA_Msk                        _U_(0x07FB737F)                                      /**< (SLCD_CTRLA) Register Mask  */


/* -------- SLCD_CTRLB : (SLCD Offset: 0x04) (R/W 16) Control B -------- */
#define SLCD_CTRLB_RESETVALUE                 _U_(0x00)                                            /**<  (SLCD_CTRLB) Control B  Reset Value */

#define SLCD_CTRLB_BBD_Pos                    _U_(0)                                               /**< (SLCD_CTRLB) Bias Buffer Enable Duration Position */
#define SLCD_CTRLB_BBD_Msk                    (_U_(0xF) << SLCD_CTRLB_BBD_Pos)                     /**< (SLCD_CTRLB) Bias Buffer Enable Duration Mask */
#define SLCD_CTRLB_BBD(value)                 (SLCD_CTRLB_BBD_Msk & ((value) << SLCD_CTRLB_BBD_Pos))
#define SLCD_CTRLB_BBEN_Pos                   _U_(7)                                               /**< (SLCD_CTRLB) Bias Buffer Enable Position */
#define SLCD_CTRLB_BBEN_Msk                   (_U_(0x1) << SLCD_CTRLB_BBEN_Pos)                    /**< (SLCD_CTRLB) Bias Buffer Enable Mask */
#define SLCD_CTRLB_BBEN(value)                (SLCD_CTRLB_BBEN_Msk & ((value) << SLCD_CTRLB_BBEN_Pos))
#define SLCD_CTRLB_LRD_Pos                    _U_(8)                                               /**< (SLCD_CTRLB) Low Resistance Enable Duration Position */
#define SLCD_CTRLB_LRD_Msk                    (_U_(0xF) << SLCD_CTRLB_LRD_Pos)                     /**< (SLCD_CTRLB) Low Resistance Enable Duration Mask */
#define SLCD_CTRLB_LRD(value)                 (SLCD_CTRLB_LRD_Msk & ((value) << SLCD_CTRLB_LRD_Pos))
#define SLCD_CTRLB_LREN_Pos                   _U_(15)                                              /**< (SLCD_CTRLB) Low Resistance Enable Position */
#define SLCD_CTRLB_LREN_Msk                   (_U_(0x1) << SLCD_CTRLB_LREN_Pos)                    /**< (SLCD_CTRLB) Low Resistance Enable Mask */
#define SLCD_CTRLB_LREN(value)                (SLCD_CTRLB_LREN_Msk & ((value) << SLCD_CTRLB_LREN_Pos))
#define SLCD_CTRLB_Msk                        _U_(0x8F8F)                                          /**< (SLCD_CTRLB) Register Mask  */


/* -------- SLCD_CTRLC : (SLCD Offset: 0x06) (R/W 16) Control C -------- */
#define SLCD_CTRLC_RESETVALUE                 _U_(0x00)                                            /**<  (SLCD_CTRLC) Control C  Reset Value */

#define SLCD_CTRLC_CLEAR_Pos                  _U_(0)                                               /**< (SLCD_CTRLC) Clear Display Memory Position */
#define SLCD_CTRLC_CLEAR_Msk                  (_U_(0x1) << SLCD_CTRLC_CLEAR_Pos)                   /**< (SLCD_CTRLC) Clear Display Memory Mask */
#define SLCD_CTRLC_CLEAR(value)               (SLCD_CTRLC_CLEAR_Msk & ((value) << SLCD_CTRLC_CLEAR_Pos))
#define SLCD_CTRLC_LOCK_Pos                   _U_(1)                                               /**< (SLCD_CTRLC) Lock Shadow Memory Position */
#define SLCD_CTRLC_LOCK_Msk                   (_U_(0x1) << SLCD_CTRLC_LOCK_Pos)                    /**< (SLCD_CTRLC) Lock Shadow Memory Mask */
#define SLCD_CTRLC_LOCK(value)                (SLCD_CTRLC_LOCK_Msk & ((value) << SLCD_CTRLC_LOCK_Pos))
#define SLCD_CTRLC_ABMEN_Pos                  _U_(2)                                               /**< (SLCD_CTRLC) Automated Bit Mapping Enable Position */
#define SLCD_CTRLC_ABMEN_Msk                  (_U_(0x1) << SLCD_CTRLC_ABMEN_Pos)                   /**< (SLCD_CTRLC) Automated Bit Mapping Enable Mask */
#define SLCD_CTRLC_ABMEN(value)               (SLCD_CTRLC_ABMEN_Msk & ((value) << SLCD_CTRLC_ABMEN_Pos))
#define SLCD_CTRLC_ACMEN_Pos                  _U_(3)                                               /**< (SLCD_CTRLC) Automated Character Mapping Enable Position */
#define SLCD_CTRLC_ACMEN_Msk                  (_U_(0x1) << SLCD_CTRLC_ACMEN_Pos)                   /**< (SLCD_CTRLC) Automated Character Mapping Enable Mask */
#define SLCD_CTRLC_ACMEN(value)               (SLCD_CTRLC_ACMEN_Msk & ((value) << SLCD_CTRLC_ACMEN_Pos))
#define SLCD_CTRLC_CTST_Pos                   _U_(4)                                               /**< (SLCD_CTRLC) Contrast Adjustment Position */
#define SLCD_CTRLC_CTST_Msk                   (_U_(0xF) << SLCD_CTRLC_CTST_Pos)                    /**< (SLCD_CTRLC) Contrast Adjustment Mask */
#define SLCD_CTRLC_CTST(value)                (SLCD_CTRLC_CTST_Msk & ((value) << SLCD_CTRLC_CTST_Pos))
#define SLCD_CTRLC_LPPM_Pos                   _U_(8)                                               /**< (SLCD_CTRLC) LCD Power Macro Power mode Position */
#define SLCD_CTRLC_LPPM_Msk                   (_U_(0x3) << SLCD_CTRLC_LPPM_Pos)                    /**< (SLCD_CTRLC) LCD Power Macro Power mode Mask */
#define SLCD_CTRLC_LPPM(value)                (SLCD_CTRLC_LPPM_Msk & ((value) << SLCD_CTRLC_LPPM_Pos))
#define   SLCD_CTRLC_LPPM_AUTO_Val            _U_(0x0)                                             /**< (SLCD_CTRLC) LCD power automatically select regualation mode or pump mode  */
#define   SLCD_CTRLC_LPPM_STEPUP_Val          _U_(0x1)                                             /**< (SLCD_CTRLC) LCD power use step-up pump loop only  */
#define   SLCD_CTRLC_LPPM_STEPDOWN_Val        _U_(0x2)                                             /**< (SLCD_CTRLC) LCD power use step-down drop-out regulation loop only  */
#define SLCD_CTRLC_LPPM_AUTO                  (SLCD_CTRLC_LPPM_AUTO_Val << SLCD_CTRLC_LPPM_Pos)    /**< (SLCD_CTRLC) LCD power automatically select regualation mode or pump mode Position  */
#define SLCD_CTRLC_LPPM_STEPUP                (SLCD_CTRLC_LPPM_STEPUP_Val << SLCD_CTRLC_LPPM_Pos)  /**< (SLCD_CTRLC) LCD power use step-up pump loop only Position  */
#define SLCD_CTRLC_LPPM_STEPDOWN              (SLCD_CTRLC_LPPM_STEPDOWN_Val << SLCD_CTRLC_LPPM_Pos) /**< (SLCD_CTRLC) LCD power use step-down drop-out regulation loop only Position  */
#define SLCD_CTRLC_Msk                        _U_(0x03FF)                                          /**< (SLCD_CTRLC) Register Mask  */


/* -------- SLCD_CTRLD : (SLCD Offset: 0x08) (R/W 8) Control D -------- */
#define SLCD_CTRLD_RESETVALUE                 _U_(0x80)                                            /**<  (SLCD_CTRLD) Control D  Reset Value */

#define SLCD_CTRLD_BLANK_Pos                  _U_(0)                                               /**< (SLCD_CTRLD) Blank LCD Position */
#define SLCD_CTRLD_BLANK_Msk                  (_U_(0x1) << SLCD_CTRLD_BLANK_Pos)                   /**< (SLCD_CTRLD) Blank LCD Mask */
#define SLCD_CTRLD_BLANK(value)               (SLCD_CTRLD_BLANK_Msk & ((value) << SLCD_CTRLD_BLANK_Pos))
#define SLCD_CTRLD_BLINK_Pos                  _U_(1)                                               /**< (SLCD_CTRLD) Blinking Enable Position */
#define SLCD_CTRLD_BLINK_Msk                  (_U_(0x1) << SLCD_CTRLD_BLINK_Pos)                   /**< (SLCD_CTRLD) Blinking Enable Mask */
#define SLCD_CTRLD_BLINK(value)               (SLCD_CTRLD_BLINK_Msk & ((value) << SLCD_CTRLD_BLINK_Pos))
#define SLCD_CTRLD_CSREN_Pos                  _U_(2)                                               /**< (SLCD_CTRLD) Circular Shift Register Enable Position */
#define SLCD_CTRLD_CSREN_Msk                  (_U_(0x1) << SLCD_CTRLD_CSREN_Pos)                   /**< (SLCD_CTRLD) Circular Shift Register Enable Mask */
#define SLCD_CTRLD_CSREN(value)               (SLCD_CTRLD_CSREN_Msk & ((value) << SLCD_CTRLD_CSREN_Pos))
#define SLCD_CTRLD_FC0EN_Pos                  _U_(4)                                               /**< (SLCD_CTRLD) Frame Counter 0 Enable Position */
#define SLCD_CTRLD_FC0EN_Msk                  (_U_(0x1) << SLCD_CTRLD_FC0EN_Pos)                   /**< (SLCD_CTRLD) Frame Counter 0 Enable Mask */
#define SLCD_CTRLD_FC0EN(value)               (SLCD_CTRLD_FC0EN_Msk & ((value) << SLCD_CTRLD_FC0EN_Pos))
#define SLCD_CTRLD_FC1EN_Pos                  _U_(5)                                               /**< (SLCD_CTRLD) Frame Counter 1 Enable Position */
#define SLCD_CTRLD_FC1EN_Msk                  (_U_(0x1) << SLCD_CTRLD_FC1EN_Pos)                   /**< (SLCD_CTRLD) Frame Counter 1 Enable Mask */
#define SLCD_CTRLD_FC1EN(value)               (SLCD_CTRLD_FC1EN_Msk & ((value) << SLCD_CTRLD_FC1EN_Pos))
#define SLCD_CTRLD_FC2EN_Pos                  _U_(6)                                               /**< (SLCD_CTRLD) Frame Counter 2 Enable Position */
#define SLCD_CTRLD_FC2EN_Msk                  (_U_(0x1) << SLCD_CTRLD_FC2EN_Pos)                   /**< (SLCD_CTRLD) Frame Counter 2 Enable Mask */
#define SLCD_CTRLD_FC2EN(value)               (SLCD_CTRLD_FC2EN_Msk & ((value) << SLCD_CTRLD_FC2EN_Pos))
#define SLCD_CTRLD_DISPEN_Pos                 _U_(7)                                               /**< (SLCD_CTRLD) Display enable Position */
#define SLCD_CTRLD_DISPEN_Msk                 (_U_(0x1) << SLCD_CTRLD_DISPEN_Pos)                  /**< (SLCD_CTRLD) Display enable Mask */
#define SLCD_CTRLD_DISPEN(value)              (SLCD_CTRLD_DISPEN_Msk & ((value) << SLCD_CTRLD_DISPEN_Pos))
#define SLCD_CTRLD_Msk                        _U_(0xF7)                                            /**< (SLCD_CTRLD) Register Mask  */


/* -------- SLCD_EVCTRL : (SLCD Offset: 0x0C) (R/W 8) Event Control -------- */
#define SLCD_EVCTRL_RESETVALUE                _U_(0x00)                                            /**<  (SLCD_EVCTRL) Event Control  Reset Value */

#define SLCD_EVCTRL_FC0OEO_Pos                _U_(0)                                               /**< (SLCD_EVCTRL) Frame Counter 0 Overflow Event Output Enable Position */
#define SLCD_EVCTRL_FC0OEO_Msk                (_U_(0x1) << SLCD_EVCTRL_FC0OEO_Pos)                 /**< (SLCD_EVCTRL) Frame Counter 0 Overflow Event Output Enable Mask */
#define SLCD_EVCTRL_FC0OEO(value)             (SLCD_EVCTRL_FC0OEO_Msk & ((value) << SLCD_EVCTRL_FC0OEO_Pos))
#define SLCD_EVCTRL_FC1OEO_Pos                _U_(1)                                               /**< (SLCD_EVCTRL) Frame Counter 1 Overflow Event Output Enable Position */
#define SLCD_EVCTRL_FC1OEO_Msk                (_U_(0x1) << SLCD_EVCTRL_FC1OEO_Pos)                 /**< (SLCD_EVCTRL) Frame Counter 1 Overflow Event Output Enable Mask */
#define SLCD_EVCTRL_FC1OEO(value)             (SLCD_EVCTRL_FC1OEO_Msk & ((value) << SLCD_EVCTRL_FC1OEO_Pos))
#define SLCD_EVCTRL_FC2OEO_Pos                _U_(2)                                               /**< (SLCD_EVCTRL) Frame Counter 2 Overflow Event Output Enable Position */
#define SLCD_EVCTRL_FC2OEO_Msk                (_U_(0x1) << SLCD_EVCTRL_FC2OEO_Pos)                 /**< (SLCD_EVCTRL) Frame Counter 2 Overflow Event Output Enable Mask */
#define SLCD_EVCTRL_FC2OEO(value)             (SLCD_EVCTRL_FC2OEO_Msk & ((value) << SLCD_EVCTRL_FC2OEO_Pos))
#define SLCD_EVCTRL_Msk                       _U_(0x07)                                            /**< (SLCD_EVCTRL) Register Mask  */


/* -------- SLCD_INTENCLR : (SLCD Offset: 0x0D) (R/W 8) Interrupt Enable Clear -------- */
#define SLCD_INTENCLR_RESETVALUE              _U_(0x00)                                            /**<  (SLCD_INTENCLR) Interrupt Enable Clear  Reset Value */

#define SLCD_INTENCLR_FC0O_Pos                _U_(0)                                               /**< (SLCD_INTENCLR) Frame Counter 0 Overflow Interrupt Disable Position */
#define SLCD_INTENCLR_FC0O_Msk                (_U_(0x1) << SLCD_INTENCLR_FC0O_Pos)                 /**< (SLCD_INTENCLR) Frame Counter 0 Overflow Interrupt Disable Mask */
#define SLCD_INTENCLR_FC0O(value)             (SLCD_INTENCLR_FC0O_Msk & ((value) << SLCD_INTENCLR_FC0O_Pos))
#define SLCD_INTENCLR_FC1O_Pos                _U_(1)                                               /**< (SLCD_INTENCLR) Frame Counter 1 Overflow Interrupt Disable Position */
#define SLCD_INTENCLR_FC1O_Msk                (_U_(0x1) << SLCD_INTENCLR_FC1O_Pos)                 /**< (SLCD_INTENCLR) Frame Counter 1 Overflow Interrupt Disable Mask */
#define SLCD_INTENCLR_FC1O(value)             (SLCD_INTENCLR_FC1O_Msk & ((value) << SLCD_INTENCLR_FC1O_Pos))
#define SLCD_INTENCLR_FC2O_Pos                _U_(2)                                               /**< (SLCD_INTENCLR) Frame Counter 2 Overflow Interrupt Disable Position */
#define SLCD_INTENCLR_FC2O_Msk                (_U_(0x1) << SLCD_INTENCLR_FC2O_Pos)                 /**< (SLCD_INTENCLR) Frame Counter 2 Overflow Interrupt Disable Mask */
#define SLCD_INTENCLR_FC2O(value)             (SLCD_INTENCLR_FC2O_Msk & ((value) << SLCD_INTENCLR_FC2O_Pos))
#define SLCD_INTENCLR_VLCDRT_Pos              _U_(3)                                               /**< (SLCD_INTENCLR) VLCD Ready Toggle Interrupt Disable Position */
#define SLCD_INTENCLR_VLCDRT_Msk              (_U_(0x1) << SLCD_INTENCLR_VLCDRT_Pos)               /**< (SLCD_INTENCLR) VLCD Ready Toggle Interrupt Disable Mask */
#define SLCD_INTENCLR_VLCDRT(value)           (SLCD_INTENCLR_VLCDRT_Msk & ((value) << SLCD_INTENCLR_VLCDRT_Pos))
#define SLCD_INTENCLR_VLCDST_Pos              _U_(4)                                               /**< (SLCD_INTENCLR) VLCD Status Toggle Interrupt Disable Position */
#define SLCD_INTENCLR_VLCDST_Msk              (_U_(0x1) << SLCD_INTENCLR_VLCDST_Pos)               /**< (SLCD_INTENCLR) VLCD Status Toggle Interrupt Disable Mask */
#define SLCD_INTENCLR_VLCDST(value)           (SLCD_INTENCLR_VLCDST_Msk & ((value) << SLCD_INTENCLR_VLCDST_Pos))
#define SLCD_INTENCLR_PRST_Pos                _U_(5)                                               /**< (SLCD_INTENCLR) Pump Run Status Toggle Interrupt Disable Position */
#define SLCD_INTENCLR_PRST_Msk                (_U_(0x1) << SLCD_INTENCLR_PRST_Pos)                 /**< (SLCD_INTENCLR) Pump Run Status Toggle Interrupt Disable Mask */
#define SLCD_INTENCLR_PRST(value)             (SLCD_INTENCLR_PRST_Msk & ((value) << SLCD_INTENCLR_PRST_Pos))
#define SLCD_INTENCLR_Msk                     _U_(0x3F)                                            /**< (SLCD_INTENCLR) Register Mask  */


/* -------- SLCD_INTENSET : (SLCD Offset: 0x0E) (R/W 8) Interrupt Enable Set -------- */
#define SLCD_INTENSET_RESETVALUE              _U_(0x00)                                            /**<  (SLCD_INTENSET) Interrupt Enable Set  Reset Value */

#define SLCD_INTENSET_FC0O_Pos                _U_(0)                                               /**< (SLCD_INTENSET) Frame Counter 0 Overflow Interrupt Enable Position */
#define SLCD_INTENSET_FC0O_Msk                (_U_(0x1) << SLCD_INTENSET_FC0O_Pos)                 /**< (SLCD_INTENSET) Frame Counter 0 Overflow Interrupt Enable Mask */
#define SLCD_INTENSET_FC0O(value)             (SLCD_INTENSET_FC0O_Msk & ((value) << SLCD_INTENSET_FC0O_Pos))
#define SLCD_INTENSET_FC1O_Pos                _U_(1)                                               /**< (SLCD_INTENSET) Frame Counter 1 Overflow Interrupt Enable Position */
#define SLCD_INTENSET_FC1O_Msk                (_U_(0x1) << SLCD_INTENSET_FC1O_Pos)                 /**< (SLCD_INTENSET) Frame Counter 1 Overflow Interrupt Enable Mask */
#define SLCD_INTENSET_FC1O(value)             (SLCD_INTENSET_FC1O_Msk & ((value) << SLCD_INTENSET_FC1O_Pos))
#define SLCD_INTENSET_FC2O_Pos                _U_(2)                                               /**< (SLCD_INTENSET) Frame Counter 2 Overflow Interrupt Enable Position */
#define SLCD_INTENSET_FC2O_Msk                (_U_(0x1) << SLCD_INTENSET_FC2O_Pos)                 /**< (SLCD_INTENSET) Frame Counter 2 Overflow Interrupt Enable Mask */
#define SLCD_INTENSET_FC2O(value)             (SLCD_INTENSET_FC2O_Msk & ((value) << SLCD_INTENSET_FC2O_Pos))
#define SLCD_INTENSET_VLCDRT_Pos              _U_(3)                                               /**< (SLCD_INTENSET) VLCD Ready Toggle Interrupt Enable Position */
#define SLCD_INTENSET_VLCDRT_Msk              (_U_(0x1) << SLCD_INTENSET_VLCDRT_Pos)               /**< (SLCD_INTENSET) VLCD Ready Toggle Interrupt Enable Mask */
#define SLCD_INTENSET_VLCDRT(value)           (SLCD_INTENSET_VLCDRT_Msk & ((value) << SLCD_INTENSET_VLCDRT_Pos))
#define SLCD_INTENSET_VLCDST_Pos              _U_(4)                                               /**< (SLCD_INTENSET) VLCD Status Toggle Interrupt Enable Position */
#define SLCD_INTENSET_VLCDST_Msk              (_U_(0x1) << SLCD_INTENSET_VLCDST_Pos)               /**< (SLCD_INTENSET) VLCD Status Toggle Interrupt Enable Mask */
#define SLCD_INTENSET_VLCDST(value)           (SLCD_INTENSET_VLCDST_Msk & ((value) << SLCD_INTENSET_VLCDST_Pos))
#define SLCD_INTENSET_PRST_Pos                _U_(5)                                               /**< (SLCD_INTENSET) Pump Run Status Toggle Interrupt Enable Position */
#define SLCD_INTENSET_PRST_Msk                (_U_(0x1) << SLCD_INTENSET_PRST_Pos)                 /**< (SLCD_INTENSET) Pump Run Status Toggle Interrupt Enable Mask */
#define SLCD_INTENSET_PRST(value)             (SLCD_INTENSET_PRST_Msk & ((value) << SLCD_INTENSET_PRST_Pos))
#define SLCD_INTENSET_Msk                     _U_(0x3F)                                            /**< (SLCD_INTENSET) Register Mask  */


/* -------- SLCD_INTFLAG : (SLCD Offset: 0x0F) (R/W 8) Interrupt Flag Status and Clear -------- */
#define SLCD_INTFLAG_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define SLCD_INTFLAG_FC0O_Pos                 _U_(0)                                               /**< (SLCD_INTFLAG) Frame Counter 0 Overflow Position */
#define SLCD_INTFLAG_FC0O_Msk                 (_U_(0x1) << SLCD_INTFLAG_FC0O_Pos)                  /**< (SLCD_INTFLAG) Frame Counter 0 Overflow Mask */
#define SLCD_INTFLAG_FC0O(value)              (SLCD_INTFLAG_FC0O_Msk & ((value) << SLCD_INTFLAG_FC0O_Pos))
#define SLCD_INTFLAG_FC1O_Pos                 _U_(1)                                               /**< (SLCD_INTFLAG) Frame Counter 1 Overflow Position */
#define SLCD_INTFLAG_FC1O_Msk                 (_U_(0x1) << SLCD_INTFLAG_FC1O_Pos)                  /**< (SLCD_INTFLAG) Frame Counter 1 Overflow Mask */
#define SLCD_INTFLAG_FC1O(value)              (SLCD_INTFLAG_FC1O_Msk & ((value) << SLCD_INTFLAG_FC1O_Pos))
#define SLCD_INTFLAG_FC2O_Pos                 _U_(2)                                               /**< (SLCD_INTFLAG) Frame Counter 2 Overflow Position */
#define SLCD_INTFLAG_FC2O_Msk                 (_U_(0x1) << SLCD_INTFLAG_FC2O_Pos)                  /**< (SLCD_INTFLAG) Frame Counter 2 Overflow Mask */
#define SLCD_INTFLAG_FC2O(value)              (SLCD_INTFLAG_FC2O_Msk & ((value) << SLCD_INTFLAG_FC2O_Pos))
#define SLCD_INTFLAG_VLCDRT_Pos               _U_(3)                                               /**< (SLCD_INTFLAG) VLCD Ready Toggle Position */
#define SLCD_INTFLAG_VLCDRT_Msk               (_U_(0x1) << SLCD_INTFLAG_VLCDRT_Pos)                /**< (SLCD_INTFLAG) VLCD Ready Toggle Mask */
#define SLCD_INTFLAG_VLCDRT(value)            (SLCD_INTFLAG_VLCDRT_Msk & ((value) << SLCD_INTFLAG_VLCDRT_Pos))
#define SLCD_INTFLAG_VLCDST_Pos               _U_(4)                                               /**< (SLCD_INTFLAG) VLCD Status Toggle Position */
#define SLCD_INTFLAG_VLCDST_Msk               (_U_(0x1) << SLCD_INTFLAG_VLCDST_Pos)                /**< (SLCD_INTFLAG) VLCD Status Toggle Mask */
#define SLCD_INTFLAG_VLCDST(value)            (SLCD_INTFLAG_VLCDST_Msk & ((value) << SLCD_INTFLAG_VLCDST_Pos))
#define SLCD_INTFLAG_PRST_Pos                 _U_(5)                                               /**< (SLCD_INTFLAG) Pump Run Status Toggle Position */
#define SLCD_INTFLAG_PRST_Msk                 (_U_(0x1) << SLCD_INTFLAG_PRST_Pos)                  /**< (SLCD_INTFLAG) Pump Run Status Toggle Mask */
#define SLCD_INTFLAG_PRST(value)              (SLCD_INTFLAG_PRST_Msk & ((value) << SLCD_INTFLAG_PRST_Pos))
#define SLCD_INTFLAG_Msk                      _U_(0x3F)                                            /**< (SLCD_INTFLAG) Register Mask  */


/* -------- SLCD_STATUS : (SLCD Offset: 0x10) ( R/ 8) Status -------- */
#define SLCD_STATUS_RESETVALUE                _U_(0x00)                                            /**<  (SLCD_STATUS) Status  Reset Value */

#define SLCD_STATUS_VLCDR_Pos                 _U_(0)                                               /**< (SLCD_STATUS) VLCD Ready Position */
#define SLCD_STATUS_VLCDR_Msk                 (_U_(0x1) << SLCD_STATUS_VLCDR_Pos)                  /**< (SLCD_STATUS) VLCD Ready Mask */
#define SLCD_STATUS_VLCDR(value)              (SLCD_STATUS_VLCDR_Msk & ((value) << SLCD_STATUS_VLCDR_Pos))
#define SLCD_STATUS_PRUN_Pos                  _U_(1)                                               /**< (SLCD_STATUS) LCD Charge Pump is Running Position */
#define SLCD_STATUS_PRUN_Msk                  (_U_(0x1) << SLCD_STATUS_PRUN_Pos)                   /**< (SLCD_STATUS) LCD Charge Pump is Running Mask */
#define SLCD_STATUS_PRUN(value)               (SLCD_STATUS_PRUN_Msk & ((value) << SLCD_STATUS_PRUN_Pos))
#define SLCD_STATUS_VLCDS_Pos                 _U_(2)                                               /**< (SLCD_STATUS) VLCD Status Position */
#define SLCD_STATUS_VLCDS_Msk                 (_U_(0x1) << SLCD_STATUS_VLCDS_Pos)                  /**< (SLCD_STATUS) VLCD Status Mask */
#define SLCD_STATUS_VLCDS(value)              (SLCD_STATUS_VLCDS_Msk & ((value) << SLCD_STATUS_VLCDS_Pos))
#define SLCD_STATUS_CMWRBUSY_Pos              _U_(3)                                               /**< (SLCD_STATUS) Character mapping write busy Position */
#define SLCD_STATUS_CMWRBUSY_Msk              (_U_(0x1) << SLCD_STATUS_CMWRBUSY_Pos)               /**< (SLCD_STATUS) Character mapping write busy Mask */
#define SLCD_STATUS_CMWRBUSY(value)           (SLCD_STATUS_CMWRBUSY_Msk & ((value) << SLCD_STATUS_CMWRBUSY_Pos))
#define SLCD_STATUS_ACMBUSY_Pos               _U_(4)                                               /**< (SLCD_STATUS) ACM state machine busy Position */
#define SLCD_STATUS_ACMBUSY_Msk               (_U_(0x1) << SLCD_STATUS_ACMBUSY_Pos)                /**< (SLCD_STATUS) ACM state machine busy Mask */
#define SLCD_STATUS_ACMBUSY(value)            (SLCD_STATUS_ACMBUSY_Msk & ((value) << SLCD_STATUS_ACMBUSY_Pos))
#define SLCD_STATUS_ABMBUSY_Pos               _U_(5)                                               /**< (SLCD_STATUS) ABM state machine busy Position */
#define SLCD_STATUS_ABMBUSY_Msk               (_U_(0x1) << SLCD_STATUS_ABMBUSY_Pos)                /**< (SLCD_STATUS) ABM state machine busy Mask */
#define SLCD_STATUS_ABMBUSY(value)            (SLCD_STATUS_ABMBUSY_Msk & ((value) << SLCD_STATUS_ABMBUSY_Pos))
#define SLCD_STATUS_Msk                       _U_(0x3F)                                            /**< (SLCD_STATUS) Register Mask  */


/* -------- SLCD_SYNCBUSY : (SLCD Offset: 0x14) ( R/ 32) Synchronization Busy -------- */
#define SLCD_SYNCBUSY_RESETVALUE              _U_(0x00)                                            /**<  (SLCD_SYNCBUSY) Synchronization Busy  Reset Value */

#define SLCD_SYNCBUSY_SWRST_Pos               _U_(0)                                               /**< (SLCD_SYNCBUSY) Software Reset Position */
#define SLCD_SYNCBUSY_SWRST_Msk               (_U_(0x1) << SLCD_SYNCBUSY_SWRST_Pos)                /**< (SLCD_SYNCBUSY) Software Reset Mask */
#define SLCD_SYNCBUSY_SWRST(value)            (SLCD_SYNCBUSY_SWRST_Msk & ((value) << SLCD_SYNCBUSY_SWRST_Pos))
#define SLCD_SYNCBUSY_ENABLE_Pos              _U_(1)                                               /**< (SLCD_SYNCBUSY) Enable Position */
#define SLCD_SYNCBUSY_ENABLE_Msk              (_U_(0x1) << SLCD_SYNCBUSY_ENABLE_Pos)               /**< (SLCD_SYNCBUSY) Enable Mask */
#define SLCD_SYNCBUSY_ENABLE(value)           (SLCD_SYNCBUSY_ENABLE_Msk & ((value) << SLCD_SYNCBUSY_ENABLE_Pos))
#define SLCD_SYNCBUSY_CTRLD_Pos               _U_(2)                                               /**< (SLCD_SYNCBUSY) Control D Position */
#define SLCD_SYNCBUSY_CTRLD_Msk               (_U_(0x1) << SLCD_SYNCBUSY_CTRLD_Pos)                /**< (SLCD_SYNCBUSY) Control D Mask */
#define SLCD_SYNCBUSY_CTRLD(value)            (SLCD_SYNCBUSY_CTRLD_Msk & ((value) << SLCD_SYNCBUSY_CTRLD_Pos))
#define SLCD_SYNCBUSY_Msk                     _U_(0x00000007)                                      /**< (SLCD_SYNCBUSY) Register Mask  */


/* -------- SLCD_FC0 : (SLCD Offset: 0x18) (R/W 8) Frame Counter 0 Configuration -------- */
#define SLCD_FC0_RESETVALUE                   _U_(0x00)                                            /**<  (SLCD_FC0) Frame Counter 0 Configuration  Reset Value */

#define SLCD_FC0_OVF_Pos                      _U_(0)                                               /**< (SLCD_FC0) Frame Counter Overflow Value Position */
#define SLCD_FC0_OVF_Msk                      (_U_(0x1F) << SLCD_FC0_OVF_Pos)                      /**< (SLCD_FC0) Frame Counter Overflow Value Mask */
#define SLCD_FC0_OVF(value)                   (SLCD_FC0_OVF_Msk & ((value) << SLCD_FC0_OVF_Pos))  
#define SLCD_FC0_PB_Pos                       _U_(7)                                               /**< (SLCD_FC0) Prescaler Bypass Position */
#define SLCD_FC0_PB_Msk                       (_U_(0x1) << SLCD_FC0_PB_Pos)                        /**< (SLCD_FC0) Prescaler Bypass Mask */
#define SLCD_FC0_PB(value)                    (SLCD_FC0_PB_Msk & ((value) << SLCD_FC0_PB_Pos))    
#define SLCD_FC0_Msk                          _U_(0x9F)                                            /**< (SLCD_FC0) Register Mask  */


/* -------- SLCD_FC1 : (SLCD Offset: 0x19) (R/W 8) Frame Counter 1 Configuration -------- */
#define SLCD_FC1_RESETVALUE                   _U_(0x00)                                            /**<  (SLCD_FC1) Frame Counter 1 Configuration  Reset Value */

#define SLCD_FC1_OVF_Pos                      _U_(0)                                               /**< (SLCD_FC1) Frame Counter Overflow Value Position */
#define SLCD_FC1_OVF_Msk                      (_U_(0x1F) << SLCD_FC1_OVF_Pos)                      /**< (SLCD_FC1) Frame Counter Overflow Value Mask */
#define SLCD_FC1_OVF(value)                   (SLCD_FC1_OVF_Msk & ((value) << SLCD_FC1_OVF_Pos))  
#define SLCD_FC1_PB_Pos                       _U_(7)                                               /**< (SLCD_FC1) Prescaler Bypass Position */
#define SLCD_FC1_PB_Msk                       (_U_(0x1) << SLCD_FC1_PB_Pos)                        /**< (SLCD_FC1) Prescaler Bypass Mask */
#define SLCD_FC1_PB(value)                    (SLCD_FC1_PB_Msk & ((value) << SLCD_FC1_PB_Pos))    
#define SLCD_FC1_Msk                          _U_(0x9F)                                            /**< (SLCD_FC1) Register Mask  */


/* -------- SLCD_FC2 : (SLCD Offset: 0x1A) (R/W 8) Frame Counter 2 Configuration -------- */
#define SLCD_FC2_RESETVALUE                   _U_(0x00)                                            /**<  (SLCD_FC2) Frame Counter 2 Configuration  Reset Value */

#define SLCD_FC2_OVF_Pos                      _U_(0)                                               /**< (SLCD_FC2) Frame Counter Overflow Value Position */
#define SLCD_FC2_OVF_Msk                      (_U_(0x1F) << SLCD_FC2_OVF_Pos)                      /**< (SLCD_FC2) Frame Counter Overflow Value Mask */
#define SLCD_FC2_OVF(value)                   (SLCD_FC2_OVF_Msk & ((value) << SLCD_FC2_OVF_Pos))  
#define SLCD_FC2_PB_Pos                       _U_(7)                                               /**< (SLCD_FC2) Prescaler Bypass Position */
#define SLCD_FC2_PB_Msk                       (_U_(0x1) << SLCD_FC2_PB_Pos)                        /**< (SLCD_FC2) Prescaler Bypass Mask */
#define SLCD_FC2_PB(value)                    (SLCD_FC2_PB_Msk & ((value) << SLCD_FC2_PB_Pos))    
#define SLCD_FC2_Msk                          _U_(0x9F)                                            /**< (SLCD_FC2) Register Mask  */


/* -------- SLCD_LPENL : (SLCD Offset: 0x1C) (R/W 32) LCD Pin Enable Low -------- */
#define SLCD_LPENL_RESETVALUE                 _U_(0x00)                                            /**<  (SLCD_LPENL) LCD Pin Enable Low  Reset Value */

#define SLCD_LPENL_LPEN_Pos                   _U_(0)                                               /**< (SLCD_LPENL) LCD Pin Enable Position */
#define SLCD_LPENL_LPEN_Msk                   (_U_(0xFFFFFFFF) << SLCD_LPENL_LPEN_Pos)             /**< (SLCD_LPENL) LCD Pin Enable Mask */
#define SLCD_LPENL_LPEN(value)                (SLCD_LPENL_LPEN_Msk & ((value) << SLCD_LPENL_LPEN_Pos))
#define SLCD_LPENL_Msk                        _U_(0xFFFFFFFF)                                      /**< (SLCD_LPENL) Register Mask  */


/* -------- SLCD_LPENH : (SLCD Offset: 0x20) (R/W 32) LCD Pin Enable High -------- */
#define SLCD_LPENH_RESETVALUE                 _U_(0x00)                                            /**<  (SLCD_LPENH) LCD Pin Enable High  Reset Value */

#define SLCD_LPENH_LPEN_Pos                   _U_(0)                                               /**< (SLCD_LPENH) LCD Pin Enable Position */
#define SLCD_LPENH_LPEN_Msk                   (_U_(0xFFFFF) << SLCD_LPENH_LPEN_Pos)                /**< (SLCD_LPENH) LCD Pin Enable Mask */
#define SLCD_LPENH_LPEN(value)                (SLCD_LPENH_LPEN_Msk & ((value) << SLCD_LPENH_LPEN_Pos))
#define SLCD_LPENH_Msk                        _U_(0x000FFFFF)                                      /**< (SLCD_LPENH) Register Mask  */


/* -------- SLCD_SDATAL0 : (SLCD Offset: 0x24) (R/W 32) Segments Data Low for COM0 Line -------- */
#define SLCD_SDATAL0_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAL0) Segments Data Low for COM0 Line  Reset Value */

#define SLCD_SDATAL0_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAL0) Segments Data Position */
#define SLCD_SDATAL0_SDATA_Msk                (_U_(0xFFFFFFFF) << SLCD_SDATAL0_SDATA_Pos)          /**< (SLCD_SDATAL0) Segments Data Mask */
#define SLCD_SDATAL0_SDATA(value)             (SLCD_SDATAL0_SDATA_Msk & ((value) << SLCD_SDATAL0_SDATA_Pos))
#define SLCD_SDATAL0_Msk                      _U_(0xFFFFFFFF)                                      /**< (SLCD_SDATAL0) Register Mask  */


/* -------- SLCD_SDATAH0 : (SLCD Offset: 0x28) (R/W 32) Segments Data High for COM0 Line -------- */
#define SLCD_SDATAH0_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAH0) Segments Data High for COM0 Line  Reset Value */

#define SLCD_SDATAH0_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAH0) Segments Data Position */
#define SLCD_SDATAH0_SDATA_Msk                (_U_(0xFFF) << SLCD_SDATAH0_SDATA_Pos)               /**< (SLCD_SDATAH0) Segments Data Mask */
#define SLCD_SDATAH0_SDATA(value)             (SLCD_SDATAH0_SDATA_Msk & ((value) << SLCD_SDATAH0_SDATA_Pos))
#define SLCD_SDATAH0_Msk                      _U_(0x00000FFF)                                      /**< (SLCD_SDATAH0) Register Mask  */


/* -------- SLCD_SDATAL1 : (SLCD Offset: 0x2C) (R/W 32) Segments Data Low for COM1 Line -------- */
#define SLCD_SDATAL1_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAL1) Segments Data Low for COM1 Line  Reset Value */

#define SLCD_SDATAL1_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAL1) Segments Data Position */
#define SLCD_SDATAL1_SDATA_Msk                (_U_(0xFFFFFFFF) << SLCD_SDATAL1_SDATA_Pos)          /**< (SLCD_SDATAL1) Segments Data Mask */
#define SLCD_SDATAL1_SDATA(value)             (SLCD_SDATAL1_SDATA_Msk & ((value) << SLCD_SDATAL1_SDATA_Pos))
#define SLCD_SDATAL1_Msk                      _U_(0xFFFFFFFF)                                      /**< (SLCD_SDATAL1) Register Mask  */


/* -------- SLCD_SDATAH1 : (SLCD Offset: 0x30) (R/W 32) Segments Data High for COM1 Line -------- */
#define SLCD_SDATAH1_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAH1) Segments Data High for COM1 Line  Reset Value */

#define SLCD_SDATAH1_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAH1) Segments Data Position */
#define SLCD_SDATAH1_SDATA_Msk                (_U_(0xFFF) << SLCD_SDATAH1_SDATA_Pos)               /**< (SLCD_SDATAH1) Segments Data Mask */
#define SLCD_SDATAH1_SDATA(value)             (SLCD_SDATAH1_SDATA_Msk & ((value) << SLCD_SDATAH1_SDATA_Pos))
#define SLCD_SDATAH1_Msk                      _U_(0x00000FFF)                                      /**< (SLCD_SDATAH1) Register Mask  */


/* -------- SLCD_SDATAL2 : (SLCD Offset: 0x34) (R/W 32) Segments Data Low for COM2 Line -------- */
#define SLCD_SDATAL2_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAL2) Segments Data Low for COM2 Line  Reset Value */

#define SLCD_SDATAL2_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAL2) Segments Data Position */
#define SLCD_SDATAL2_SDATA_Msk                (_U_(0xFFFFFFFF) << SLCD_SDATAL2_SDATA_Pos)          /**< (SLCD_SDATAL2) Segments Data Mask */
#define SLCD_SDATAL2_SDATA(value)             (SLCD_SDATAL2_SDATA_Msk & ((value) << SLCD_SDATAL2_SDATA_Pos))
#define SLCD_SDATAL2_Msk                      _U_(0xFFFFFFFF)                                      /**< (SLCD_SDATAL2) Register Mask  */


/* -------- SLCD_SDATAH2 : (SLCD Offset: 0x38) (R/W 32) Segments Data High for COM2 Line -------- */
#define SLCD_SDATAH2_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAH2) Segments Data High for COM2 Line  Reset Value */

#define SLCD_SDATAH2_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAH2) Segments Data Position */
#define SLCD_SDATAH2_SDATA_Msk                (_U_(0xFFF) << SLCD_SDATAH2_SDATA_Pos)               /**< (SLCD_SDATAH2) Segments Data Mask */
#define SLCD_SDATAH2_SDATA(value)             (SLCD_SDATAH2_SDATA_Msk & ((value) << SLCD_SDATAH2_SDATA_Pos))
#define SLCD_SDATAH2_Msk                      _U_(0x00000FFF)                                      /**< (SLCD_SDATAH2) Register Mask  */


/* -------- SLCD_SDATAL3 : (SLCD Offset: 0x3C) (R/W 32) Segments Data Low for COM3 Line -------- */
#define SLCD_SDATAL3_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAL3) Segments Data Low for COM3 Line  Reset Value */

#define SLCD_SDATAL3_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAL3) Segments Data Position */
#define SLCD_SDATAL3_SDATA_Msk                (_U_(0xFFFFFFFF) << SLCD_SDATAL3_SDATA_Pos)          /**< (SLCD_SDATAL3) Segments Data Mask */
#define SLCD_SDATAL3_SDATA(value)             (SLCD_SDATAL3_SDATA_Msk & ((value) << SLCD_SDATAL3_SDATA_Pos))
#define SLCD_SDATAL3_Msk                      _U_(0xFFFFFFFF)                                      /**< (SLCD_SDATAL3) Register Mask  */


/* -------- SLCD_SDATAH3 : (SLCD Offset: 0x40) (R/W 32) Segments Data High for COM3 Line -------- */
#define SLCD_SDATAH3_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAH3) Segments Data High for COM3 Line  Reset Value */

#define SLCD_SDATAH3_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAH3) Segments Data Position */
#define SLCD_SDATAH3_SDATA_Msk                (_U_(0xFFF) << SLCD_SDATAH3_SDATA_Pos)               /**< (SLCD_SDATAH3) Segments Data Mask */
#define SLCD_SDATAH3_SDATA(value)             (SLCD_SDATAH3_SDATA_Msk & ((value) << SLCD_SDATAH3_SDATA_Pos))
#define SLCD_SDATAH3_Msk                      _U_(0x00000FFF)                                      /**< (SLCD_SDATAH3) Register Mask  */


/* -------- SLCD_SDATAL4 : (SLCD Offset: 0x44) (R/W 32) Segments Data Low for COM4 Line -------- */
#define SLCD_SDATAL4_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAL4) Segments Data Low for COM4 Line  Reset Value */

#define SLCD_SDATAL4_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAL4) Segments Data Position */
#define SLCD_SDATAL4_SDATA_Msk                (_U_(0xFFFFFFFF) << SLCD_SDATAL4_SDATA_Pos)          /**< (SLCD_SDATAL4) Segments Data Mask */
#define SLCD_SDATAL4_SDATA(value)             (SLCD_SDATAL4_SDATA_Msk & ((value) << SLCD_SDATAL4_SDATA_Pos))
#define SLCD_SDATAL4_Msk                      _U_(0xFFFFFFFF)                                      /**< (SLCD_SDATAL4) Register Mask  */


/* -------- SLCD_SDATAH4 : (SLCD Offset: 0x48) (R/W 32) Segments Data High for COM4 Line -------- */
#define SLCD_SDATAH4_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAH4) Segments Data High for COM4 Line  Reset Value */

#define SLCD_SDATAH4_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAH4) Segments Data Position */
#define SLCD_SDATAH4_SDATA_Msk                (_U_(0x3FF) << SLCD_SDATAH4_SDATA_Pos)               /**< (SLCD_SDATAH4) Segments Data Mask */
#define SLCD_SDATAH4_SDATA(value)             (SLCD_SDATAH4_SDATA_Msk & ((value) << SLCD_SDATAH4_SDATA_Pos))
#define SLCD_SDATAH4_Msk                      _U_(0x000003FF)                                      /**< (SLCD_SDATAH4) Register Mask  */


/* -------- SLCD_SDATAL5 : (SLCD Offset: 0x4C) (R/W 32) Segments Data Low for COM5 Line -------- */
#define SLCD_SDATAL5_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAL5) Segments Data Low for COM5 Line  Reset Value */

#define SLCD_SDATAL5_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAL5) Segments Data Position */
#define SLCD_SDATAL5_SDATA_Msk                (_U_(0xFFFFFFFF) << SLCD_SDATAL5_SDATA_Pos)          /**< (SLCD_SDATAL5) Segments Data Mask */
#define SLCD_SDATAL5_SDATA(value)             (SLCD_SDATAL5_SDATA_Msk & ((value) << SLCD_SDATAL5_SDATA_Pos))
#define SLCD_SDATAL5_Msk                      _U_(0xFFFFFFFF)                                      /**< (SLCD_SDATAL5) Register Mask  */


/* -------- SLCD_SDATAH5 : (SLCD Offset: 0x50) (R/W 32) Segments Data High for COM5 Line -------- */
#define SLCD_SDATAH5_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAH5) Segments Data High for COM5 Line  Reset Value */

#define SLCD_SDATAH5_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAH5) Segments Data Position */
#define SLCD_SDATAH5_SDATA_Msk                (_U_(0x3FF) << SLCD_SDATAH5_SDATA_Pos)               /**< (SLCD_SDATAH5) Segments Data Mask */
#define SLCD_SDATAH5_SDATA(value)             (SLCD_SDATAH5_SDATA_Msk & ((value) << SLCD_SDATAH5_SDATA_Pos))
#define SLCD_SDATAH5_Msk                      _U_(0x000003FF)                                      /**< (SLCD_SDATAH5) Register Mask  */


/* -------- SLCD_SDATAL6 : (SLCD Offset: 0x54) (R/W 32) Segments Data Low for COM6 Line -------- */
#define SLCD_SDATAL6_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAL6) Segments Data Low for COM6 Line  Reset Value */

#define SLCD_SDATAL6_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAL6) Segments Data Position */
#define SLCD_SDATAL6_SDATA_Msk                (_U_(0xFFFFFFFF) << SLCD_SDATAL6_SDATA_Pos)          /**< (SLCD_SDATAL6) Segments Data Mask */
#define SLCD_SDATAL6_SDATA(value)             (SLCD_SDATAL6_SDATA_Msk & ((value) << SLCD_SDATAL6_SDATA_Pos))
#define SLCD_SDATAL6_Msk                      _U_(0xFFFFFFFF)                                      /**< (SLCD_SDATAL6) Register Mask  */


/* -------- SLCD_SDATAH6 : (SLCD Offset: 0x58) (R/W 32) Segments Data High for COM6 Line -------- */
#define SLCD_SDATAH6_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAH6) Segments Data High for COM6 Line  Reset Value */

#define SLCD_SDATAH6_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAH6) Segments Data Position */
#define SLCD_SDATAH6_SDATA_Msk                (_U_(0xFF) << SLCD_SDATAH6_SDATA_Pos)                /**< (SLCD_SDATAH6) Segments Data Mask */
#define SLCD_SDATAH6_SDATA(value)             (SLCD_SDATAH6_SDATA_Msk & ((value) << SLCD_SDATAH6_SDATA_Pos))
#define SLCD_SDATAH6_Msk                      _U_(0x000000FF)                                      /**< (SLCD_SDATAH6) Register Mask  */


/* -------- SLCD_SDATAL7 : (SLCD Offset: 0x5C) (R/W 32) Segments Data Low for COM7 Line -------- */
#define SLCD_SDATAL7_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAL7) Segments Data Low for COM7 Line  Reset Value */

#define SLCD_SDATAL7_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAL7) Segments Data Position */
#define SLCD_SDATAL7_SDATA_Msk                (_U_(0xFFFFFFFF) << SLCD_SDATAL7_SDATA_Pos)          /**< (SLCD_SDATAL7) Segments Data Mask */
#define SLCD_SDATAL7_SDATA(value)             (SLCD_SDATAL7_SDATA_Msk & ((value) << SLCD_SDATAL7_SDATA_Pos))
#define SLCD_SDATAL7_Msk                      _U_(0xFFFFFFFF)                                      /**< (SLCD_SDATAL7) Register Mask  */


/* -------- SLCD_SDATAH7 : (SLCD Offset: 0x60) (R/W 32) Segments Data High for COM7 Line -------- */
#define SLCD_SDATAH7_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_SDATAH7) Segments Data High for COM7 Line  Reset Value */

#define SLCD_SDATAH7_SDATA_Pos                _U_(0)                                               /**< (SLCD_SDATAH7) Segments Data Position */
#define SLCD_SDATAH7_SDATA_Msk                (_U_(0xFF) << SLCD_SDATAH7_SDATA_Pos)                /**< (SLCD_SDATAH7) Segments Data Mask */
#define SLCD_SDATAH7_SDATA(value)             (SLCD_SDATAH7_SDATA_Msk & ((value) << SLCD_SDATAH7_SDATA_Pos))
#define SLCD_SDATAH7_Msk                      _U_(0x000000FF)                                      /**< (SLCD_SDATAH7) Register Mask  */


/* -------- SLCD_ISDATA : (SLCD Offset: 0x64) ( /W 32) Indirect Segments Data Access -------- */
#define SLCD_ISDATA_RESETVALUE                _U_(0x00)                                            /**<  (SLCD_ISDATA) Indirect Segments Data Access  Reset Value */

#define SLCD_ISDATA_SDATA_Pos                 _U_(0)                                               /**< (SLCD_ISDATA) Segments Data Position */
#define SLCD_ISDATA_SDATA_Msk                 (_U_(0xFF) << SLCD_ISDATA_SDATA_Pos)                 /**< (SLCD_ISDATA) Segments Data Mask */
#define SLCD_ISDATA_SDATA(value)              (SLCD_ISDATA_SDATA_Msk & ((value) << SLCD_ISDATA_SDATA_Pos))
#define SLCD_ISDATA_SDMASK_Pos                _U_(8)                                               /**< (SLCD_ISDATA) Segments Data Mask Position */
#define SLCD_ISDATA_SDMASK_Msk                (_U_(0xFF) << SLCD_ISDATA_SDMASK_Pos)                /**< (SLCD_ISDATA) Segments Data Mask Mask */
#define SLCD_ISDATA_SDMASK(value)             (SLCD_ISDATA_SDMASK_Msk & ((value) << SLCD_ISDATA_SDMASK_Pos))
#define SLCD_ISDATA_OFF_Pos                   _U_(16)                                              /**< (SLCD_ISDATA) Byte Offset Position */
#define SLCD_ISDATA_OFF_Msk                   (_U_(0x3F) << SLCD_ISDATA_OFF_Pos)                   /**< (SLCD_ISDATA) Byte Offset Mask */
#define SLCD_ISDATA_OFF(value)                (SLCD_ISDATA_OFF_Msk & ((value) << SLCD_ISDATA_OFF_Pos))
#define SLCD_ISDATA_Msk                       _U_(0x003FFFFF)                                      /**< (SLCD_ISDATA) Register Mask  */


/* -------- SLCD_BCFG : (SLCD Offset: 0x68) (R/W 32) Blink Configuration -------- */
#define SLCD_BCFG_RESETVALUE                  _U_(0x00)                                            /**<  (SLCD_BCFG) Blink Configuration  Reset Value */

#define SLCD_BCFG_MODE_Pos                    _U_(0)                                               /**< (SLCD_BCFG) Blinking Mode Position */
#define SLCD_BCFG_MODE_Msk                    (_U_(0x1) << SLCD_BCFG_MODE_Pos)                     /**< (SLCD_BCFG) Blinking Mode Mask */
#define SLCD_BCFG_MODE(value)                 (SLCD_BCFG_MODE_Msk & ((value) << SLCD_BCFG_MODE_Pos))
#define   SLCD_BCFG_MODE_BLINKALL_Val         _U_(0x0)                                             /**< (SLCD_BCFG) Blink all segments  */
#define   SLCD_BCFG_MODE_BLINKSEL_Val         _U_(0x1)                                             /**< (SLCD_BCFG) Blink selected segments  */
#define SLCD_BCFG_MODE_BLINKALL               (SLCD_BCFG_MODE_BLINKALL_Val << SLCD_BCFG_MODE_Pos)  /**< (SLCD_BCFG) Blink all segments Position  */
#define SLCD_BCFG_MODE_BLINKSEL               (SLCD_BCFG_MODE_BLINKSEL_Val << SLCD_BCFG_MODE_Pos)  /**< (SLCD_BCFG) Blink selected segments Position  */
#define SLCD_BCFG_FCS_Pos                     _U_(1)                                               /**< (SLCD_BCFG) Frame Counter Selection Position */
#define SLCD_BCFG_FCS_Msk                     (_U_(0x3) << SLCD_BCFG_FCS_Pos)                      /**< (SLCD_BCFG) Frame Counter Selection Mask */
#define SLCD_BCFG_FCS(value)                  (SLCD_BCFG_FCS_Msk & ((value) << SLCD_BCFG_FCS_Pos))
#define   SLCD_BCFG_FCS_FC0_Val               _U_(0x0)                                             /**< (SLCD_BCFG) Frame Counter 0  */
#define   SLCD_BCFG_FCS_FC1_Val               _U_(0x1)                                             /**< (SLCD_BCFG) Frame Counter 1  */
#define   SLCD_BCFG_FCS_FC2_Val               _U_(0x2)                                             /**< (SLCD_BCFG) Frame Counter 2  */
#define SLCD_BCFG_FCS_FC0                     (SLCD_BCFG_FCS_FC0_Val << SLCD_BCFG_FCS_Pos)         /**< (SLCD_BCFG) Frame Counter 0 Position  */
#define SLCD_BCFG_FCS_FC1                     (SLCD_BCFG_FCS_FC1_Val << SLCD_BCFG_FCS_Pos)         /**< (SLCD_BCFG) Frame Counter 1 Position  */
#define SLCD_BCFG_FCS_FC2                     (SLCD_BCFG_FCS_FC2_Val << SLCD_BCFG_FCS_Pos)         /**< (SLCD_BCFG) Frame Counter 2 Position  */
#define SLCD_BCFG_BSS0_Pos                    _U_(8)                                               /**< (SLCD_BCFG) Blink Segment Selection 0 Position */
#define SLCD_BCFG_BSS0_Msk                    (_U_(0xFF) << SLCD_BCFG_BSS0_Pos)                    /**< (SLCD_BCFG) Blink Segment Selection 0 Mask */
#define SLCD_BCFG_BSS0(value)                 (SLCD_BCFG_BSS0_Msk & ((value) << SLCD_BCFG_BSS0_Pos))
#define SLCD_BCFG_BSS1_Pos                    _U_(16)                                              /**< (SLCD_BCFG) Blink Segment Selection 1 Position */
#define SLCD_BCFG_BSS1_Msk                    (_U_(0xFF) << SLCD_BCFG_BSS1_Pos)                    /**< (SLCD_BCFG) Blink Segment Selection 1 Mask */
#define SLCD_BCFG_BSS1(value)                 (SLCD_BCFG_BSS1_Msk & ((value) << SLCD_BCFG_BSS1_Pos))
#define SLCD_BCFG_Msk                         _U_(0x00FFFF07)                                      /**< (SLCD_BCFG) Register Mask  */


/* -------- SLCD_CSRCFG : (SLCD Offset: 0x6C) (R/W 32) Circular Shift Register Configuration -------- */
#define SLCD_CSRCFG_RESETVALUE                _U_(0x00)                                            /**<  (SLCD_CSRCFG) Circular Shift Register Configuration  Reset Value */

#define SLCD_CSRCFG_DIR_Pos                   _U_(0)                                               /**< (SLCD_CSRCFG) Direction Position */
#define SLCD_CSRCFG_DIR_Msk                   (_U_(0x1) << SLCD_CSRCFG_DIR_Pos)                    /**< (SLCD_CSRCFG) Direction Mask */
#define SLCD_CSRCFG_DIR(value)                (SLCD_CSRCFG_DIR_Msk & ((value) << SLCD_CSRCFG_DIR_Pos))
#define SLCD_CSRCFG_FCS_Pos                   _U_(1)                                               /**< (SLCD_CSRCFG) Frame Counter Selection Position */
#define SLCD_CSRCFG_FCS_Msk                   (_U_(0x3) << SLCD_CSRCFG_FCS_Pos)                    /**< (SLCD_CSRCFG) Frame Counter Selection Mask */
#define SLCD_CSRCFG_FCS(value)                (SLCD_CSRCFG_FCS_Msk & ((value) << SLCD_CSRCFG_FCS_Pos))
#define   SLCD_CSRCFG_FCS_FC0_Val             _U_(0x0)                                             /**< (SLCD_CSRCFG) Frame Counter 0  */
#define   SLCD_CSRCFG_FCS_FC1_Val             _U_(0x1)                                             /**< (SLCD_CSRCFG) Frame Counter 1  */
#define   SLCD_CSRCFG_FCS_FC2_Val             _U_(0x2)                                             /**< (SLCD_CSRCFG) Frame Counter 2  */
#define SLCD_CSRCFG_FCS_FC0                   (SLCD_CSRCFG_FCS_FC0_Val << SLCD_CSRCFG_FCS_Pos)     /**< (SLCD_CSRCFG) Frame Counter 0 Position  */
#define SLCD_CSRCFG_FCS_FC1                   (SLCD_CSRCFG_FCS_FC1_Val << SLCD_CSRCFG_FCS_Pos)     /**< (SLCD_CSRCFG) Frame Counter 1 Position  */
#define SLCD_CSRCFG_FCS_FC2                   (SLCD_CSRCFG_FCS_FC2_Val << SLCD_CSRCFG_FCS_Pos)     /**< (SLCD_CSRCFG) Frame Counter 2 Position  */
#define SLCD_CSRCFG_SIZE_Pos                  _U_(4)                                               /**< (SLCD_CSRCFG) Circular Shift Register Size Position */
#define SLCD_CSRCFG_SIZE_Msk                  (_U_(0xF) << SLCD_CSRCFG_SIZE_Pos)                   /**< (SLCD_CSRCFG) Circular Shift Register Size Mask */
#define SLCD_CSRCFG_SIZE(value)               (SLCD_CSRCFG_SIZE_Msk & ((value) << SLCD_CSRCFG_SIZE_Pos))
#define SLCD_CSRCFG_DATA_Pos                  _U_(8)                                               /**< (SLCD_CSRCFG) Circular Shift Register Value Position */
#define SLCD_CSRCFG_DATA_Msk                  (_U_(0xFFFF) << SLCD_CSRCFG_DATA_Pos)                /**< (SLCD_CSRCFG) Circular Shift Register Value Mask */
#define SLCD_CSRCFG_DATA(value)               (SLCD_CSRCFG_DATA_Msk & ((value) << SLCD_CSRCFG_DATA_Pos))
#define SLCD_CSRCFG_Msk                       _U_(0x00FFFFF7)                                      /**< (SLCD_CSRCFG) Register Mask  */


/* -------- SLCD_CMCFG : (SLCD Offset: 0x70) (R/W 8) Character Mapping Configuration -------- */
#define SLCD_CMCFG_RESETVALUE                 _U_(0x00)                                            /**<  (SLCD_CMCFG) Character Mapping Configuration  Reset Value */

#define SLCD_CMCFG_NSEG_Pos                   _U_(0)                                               /**< (SLCD_CMCFG) Number of SEG lines Position */
#define SLCD_CMCFG_NSEG_Msk                   (_U_(0x7) << SLCD_CMCFG_NSEG_Pos)                    /**< (SLCD_CMCFG) Number of SEG lines Mask */
#define SLCD_CMCFG_NSEG(value)                (SLCD_CMCFG_NSEG_Msk & ((value) << SLCD_CMCFG_NSEG_Pos))
#define SLCD_CMCFG_DEC_Pos                    _U_(3)                                               /**< (SLCD_CMCFG) Decrement SEG Line Index Position */
#define SLCD_CMCFG_DEC_Msk                    (_U_(0x1) << SLCD_CMCFG_DEC_Pos)                     /**< (SLCD_CMCFG) Decrement SEG Line Index Mask */
#define SLCD_CMCFG_DEC(value)                 (SLCD_CMCFG_DEC_Msk & ((value) << SLCD_CMCFG_DEC_Pos))
#define SLCD_CMCFG_Msk                        _U_(0x0F)                                            /**< (SLCD_CMCFG) Register Mask  */


/* -------- SLCD_ACMCFG : (SLCD Offset: 0x74) (R/W 32) Automated Character Mapping Configuration -------- */
#define SLCD_ACMCFG_RESETVALUE                _U_(0x00)                                            /**<  (SLCD_ACMCFG) Automated Character Mapping Configuration  Reset Value */

#define SLCD_ACMCFG_NCOM_Pos                  _U_(0)                                               /**< (SLCD_ACMCFG) COM Lines per Row Position */
#define SLCD_ACMCFG_NCOM_Msk                  (_U_(0x7) << SLCD_ACMCFG_NCOM_Pos)                   /**< (SLCD_ACMCFG) COM Lines per Row Mask */
#define SLCD_ACMCFG_NCOM(value)               (SLCD_ACMCFG_NCOM_Msk & ((value) << SLCD_ACMCFG_NCOM_Pos))
#define SLCD_ACMCFG_NDIG_Pos                  _U_(4)                                               /**< (SLCD_ACMCFG) Number of Digit Position */
#define SLCD_ACMCFG_NDIG_Msk                  (_U_(0xF) << SLCD_ACMCFG_NDIG_Pos)                   /**< (SLCD_ACMCFG) Number of Digit Mask */
#define SLCD_ACMCFG_NDIG(value)               (SLCD_ACMCFG_NDIG_Msk & ((value) << SLCD_ACMCFG_NDIG_Pos))
#define SLCD_ACMCFG_STEPS_Pos                 _U_(8)                                               /**< (SLCD_ACMCFG) Scrolling Steps Position */
#define SLCD_ACMCFG_STEPS_Msk                 (_U_(0xFF) << SLCD_ACMCFG_STEPS_Pos)                 /**< (SLCD_ACMCFG) Scrolling Steps Mask */
#define SLCD_ACMCFG_STEPS(value)              (SLCD_ACMCFG_STEPS_Msk & ((value) << SLCD_ACMCFG_STEPS_Pos))
#define SLCD_ACMCFG_NDROW_Pos                 _U_(16)                                              /**< (SLCD_ACMCFG) Number of Digit per Row Position */
#define SLCD_ACMCFG_NDROW_Msk                 (_U_(0x3F) << SLCD_ACMCFG_NDROW_Pos)                 /**< (SLCD_ACMCFG) Number of Digit per Row Mask */
#define SLCD_ACMCFG_NDROW(value)              (SLCD_ACMCFG_NDROW_Msk & ((value) << SLCD_ACMCFG_NDROW_Pos))
#define SLCD_ACMCFG_MODE_Pos                  _U_(23)                                              /**< (SLCD_ACMCFG) Mode Position */
#define SLCD_ACMCFG_MODE_Msk                  (_U_(0x1) << SLCD_ACMCFG_MODE_Pos)                   /**< (SLCD_ACMCFG) Mode Mask */
#define SLCD_ACMCFG_MODE(value)               (SLCD_ACMCFG_MODE_Msk & ((value) << SLCD_ACMCFG_MODE_Pos))
#define   SLCD_ACMCFG_MODE_SEQ_Val            _U_(0x0)                                             /**< (SLCD_ACMCFG) Sequential Display Mode  */
#define   SLCD_ACMCFG_MODE_SCROLL_Val         _U_(0x1)                                             /**< (SLCD_ACMCFG) Scrolling Display Mode  */
#define SLCD_ACMCFG_MODE_SEQ                  (SLCD_ACMCFG_MODE_SEQ_Val << SLCD_ACMCFG_MODE_Pos)   /**< (SLCD_ACMCFG) Sequential Display Mode Position  */
#define SLCD_ACMCFG_MODE_SCROLL               (SLCD_ACMCFG_MODE_SCROLL_Val << SLCD_ACMCFG_MODE_Pos) /**< (SLCD_ACMCFG) Scrolling Display Mode Position  */
#define SLCD_ACMCFG_STSEG_Pos                 _U_(24)                                              /**< (SLCD_ACMCFG) Start SEG Line Position */
#define SLCD_ACMCFG_STSEG_Msk                 (_U_(0x3F) << SLCD_ACMCFG_STSEG_Pos)                 /**< (SLCD_ACMCFG) Start SEG Line Mask */
#define SLCD_ACMCFG_STSEG(value)              (SLCD_ACMCFG_STSEG_Msk & ((value) << SLCD_ACMCFG_STSEG_Pos))
#define SLCD_ACMCFG_FCS_Pos                   _U_(30)                                              /**< (SLCD_ACMCFG) Frame Counter Selection Position */
#define SLCD_ACMCFG_FCS_Msk                   (_U_(0x3) << SLCD_ACMCFG_FCS_Pos)                    /**< (SLCD_ACMCFG) Frame Counter Selection Mask */
#define SLCD_ACMCFG_FCS(value)                (SLCD_ACMCFG_FCS_Msk & ((value) << SLCD_ACMCFG_FCS_Pos))
#define   SLCD_ACMCFG_FCS_FC0_Val             _U_(0x0)                                             /**< (SLCD_ACMCFG) Frame Counter 0  */
#define   SLCD_ACMCFG_FCS_FC1_Val             _U_(0x1)                                             /**< (SLCD_ACMCFG) Frame Counter 1  */
#define   SLCD_ACMCFG_FCS_FC2_Val             _U_(0x2)                                             /**< (SLCD_ACMCFG) Frame Counter 2  */
#define SLCD_ACMCFG_FCS_FC0                   (SLCD_ACMCFG_FCS_FC0_Val << SLCD_ACMCFG_FCS_Pos)     /**< (SLCD_ACMCFG) Frame Counter 0 Position  */
#define SLCD_ACMCFG_FCS_FC1                   (SLCD_ACMCFG_FCS_FC1_Val << SLCD_ACMCFG_FCS_Pos)     /**< (SLCD_ACMCFG) Frame Counter 1 Position  */
#define SLCD_ACMCFG_FCS_FC2                   (SLCD_ACMCFG_FCS_FC2_Val << SLCD_ACMCFG_FCS_Pos)     /**< (SLCD_ACMCFG) Frame Counter 2 Position  */
#define SLCD_ACMCFG_Msk                       _U_(0xFFBFFFF7)                                      /**< (SLCD_ACMCFG) Register Mask  */


/* -------- SLCD_ABMCFG : (SLCD Offset: 0x78) (R/W 8) Automated Bit Mapping Configuration -------- */
#define SLCD_ABMCFG_RESETVALUE                _U_(0x00)                                            /**<  (SLCD_ABMCFG) Automated Bit Mapping Configuration  Reset Value */

#define SLCD_ABMCFG_FCS_Pos                   _U_(0)                                               /**< (SLCD_ABMCFG) Frame Counter Selection Position */
#define SLCD_ABMCFG_FCS_Msk                   (_U_(0x3) << SLCD_ABMCFG_FCS_Pos)                    /**< (SLCD_ABMCFG) Frame Counter Selection Mask */
#define SLCD_ABMCFG_FCS(value)                (SLCD_ABMCFG_FCS_Msk & ((value) << SLCD_ABMCFG_FCS_Pos))
#define   SLCD_ABMCFG_FCS_FC0_Val             _U_(0x0)                                             /**< (SLCD_ABMCFG) Frame Counter 0  */
#define   SLCD_ABMCFG_FCS_FC1_Val             _U_(0x1)                                             /**< (SLCD_ABMCFG) Frame Counter 1  */
#define   SLCD_ABMCFG_FCS_FC2_Val             _U_(0x2)                                             /**< (SLCD_ABMCFG) Frame Counter 2  */
#define SLCD_ABMCFG_FCS_FC0                   (SLCD_ABMCFG_FCS_FC0_Val << SLCD_ABMCFG_FCS_Pos)     /**< (SLCD_ABMCFG) Frame Counter 0 Position  */
#define SLCD_ABMCFG_FCS_FC1                   (SLCD_ABMCFG_FCS_FC1_Val << SLCD_ABMCFG_FCS_Pos)     /**< (SLCD_ABMCFG) Frame Counter 1 Position  */
#define SLCD_ABMCFG_FCS_FC2                   (SLCD_ABMCFG_FCS_FC2_Val << SLCD_ABMCFG_FCS_Pos)     /**< (SLCD_ABMCFG) Frame Counter 2 Position  */
#define SLCD_ABMCFG_SIZE_Pos                  _U_(2)                                               /**< (SLCD_ABMCFG) Size Position */
#define SLCD_ABMCFG_SIZE_Msk                  (_U_(0x3F) << SLCD_ABMCFG_SIZE_Pos)                  /**< (SLCD_ABMCFG) Size Mask */
#define SLCD_ABMCFG_SIZE(value)               (SLCD_ABMCFG_SIZE_Msk & ((value) << SLCD_ABMCFG_SIZE_Pos))
#define SLCD_ABMCFG_Msk                       _U_(0xFF)                                            /**< (SLCD_ABMCFG) Register Mask  */


/* -------- SLCD_CMDATA : (SLCD Offset: 0x7C) ( /W 32) Character Mapping Segments Data -------- */
#define SLCD_CMDATA_RESETVALUE                _U_(0x00)                                            /**<  (SLCD_CMDATA) Character Mapping Segments Data  Reset Value */

#define SLCD_CMDATA_SDATA_Pos                 _U_(0)                                               /**< (SLCD_CMDATA) Segments Data Position */
#define SLCD_CMDATA_SDATA_Msk                 (_U_(0xFFFFFF) << SLCD_CMDATA_SDATA_Pos)             /**< (SLCD_CMDATA) Segments Data Mask */
#define SLCD_CMDATA_SDATA(value)              (SLCD_CMDATA_SDATA_Msk & ((value) << SLCD_CMDATA_SDATA_Pos))
#define SLCD_CMDATA_Msk                       _U_(0x00FFFFFF)                                      /**< (SLCD_CMDATA) Register Mask  */


/* -------- SLCD_CMDMASK : (SLCD Offset: 0x80) (R/W 32) Character Mapping Segments Data Mask -------- */
#define SLCD_CMDMASK_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_CMDMASK) Character Mapping Segments Data Mask  Reset Value */

#define SLCD_CMDMASK_SDMASK_Pos               _U_(0)                                               /**< (SLCD_CMDMASK) Segments Data Mask Position */
#define SLCD_CMDMASK_SDMASK_Msk               (_U_(0xFFFFFF) << SLCD_CMDMASK_SDMASK_Pos)           /**< (SLCD_CMDMASK) Segments Data Mask Mask */
#define SLCD_CMDMASK_SDMASK(value)            (SLCD_CMDMASK_SDMASK_Msk & ((value) << SLCD_CMDMASK_SDMASK_Pos))
#define SLCD_CMDMASK_Msk                      _U_(0x00FFFFFF)                                      /**< (SLCD_CMDMASK) Register Mask  */


/* -------- SLCD_CMINDEX : (SLCD Offset: 0x84) (R/W 16) Character Mapping SEG/COM Index -------- */
#define SLCD_CMINDEX_RESETVALUE               _U_(0x00)                                            /**<  (SLCD_CMINDEX) Character Mapping SEG/COM Index  Reset Value */

#define SLCD_CMINDEX_SINDEX_Pos               _U_(0)                                               /**< (SLCD_CMINDEX) SEG Line Index Position */
#define SLCD_CMINDEX_SINDEX_Msk               (_U_(0x3F) << SLCD_CMINDEX_SINDEX_Pos)               /**< (SLCD_CMINDEX) SEG Line Index Mask */
#define SLCD_CMINDEX_SINDEX(value)            (SLCD_CMINDEX_SINDEX_Msk & ((value) << SLCD_CMINDEX_SINDEX_Pos))
#define SLCD_CMINDEX_CINDEX_Pos               _U_(8)                                               /**< (SLCD_CMINDEX) COM Line Index Position */
#define SLCD_CMINDEX_CINDEX_Msk               (_U_(0x7) << SLCD_CMINDEX_CINDEX_Pos)                /**< (SLCD_CMINDEX) COM Line Index Mask */
#define SLCD_CMINDEX_CINDEX(value)            (SLCD_CMINDEX_CINDEX_Msk & ((value) << SLCD_CMINDEX_CINDEX_Pos))
#define SLCD_CMINDEX_Msk                      _U_(0x073F)                                          /**< (SLCD_CMINDEX) Register Mask  */


/** \brief SLCD register offsets definitions */
#define SLCD_CTRLA_REG_OFST            (0x00)              /**< (SLCD_CTRLA) Control A Offset */
#define SLCD_CTRLB_REG_OFST            (0x04)              /**< (SLCD_CTRLB) Control B Offset */
#define SLCD_CTRLC_REG_OFST            (0x06)              /**< (SLCD_CTRLC) Control C Offset */
#define SLCD_CTRLD_REG_OFST            (0x08)              /**< (SLCD_CTRLD) Control D Offset */
#define SLCD_EVCTRL_REG_OFST           (0x0C)              /**< (SLCD_EVCTRL) Event Control Offset */
#define SLCD_INTENCLR_REG_OFST         (0x0D)              /**< (SLCD_INTENCLR) Interrupt Enable Clear Offset */
#define SLCD_INTENSET_REG_OFST         (0x0E)              /**< (SLCD_INTENSET) Interrupt Enable Set Offset */
#define SLCD_INTFLAG_REG_OFST          (0x0F)              /**< (SLCD_INTFLAG) Interrupt Flag Status and Clear Offset */
#define SLCD_STATUS_REG_OFST           (0x10)              /**< (SLCD_STATUS) Status Offset */
#define SLCD_SYNCBUSY_REG_OFST         (0x14)              /**< (SLCD_SYNCBUSY) Synchronization Busy Offset */
#define SLCD_FC0_REG_OFST              (0x18)              /**< (SLCD_FC0) Frame Counter 0 Configuration Offset */
#define SLCD_FC1_REG_OFST              (0x19)              /**< (SLCD_FC1) Frame Counter 1 Configuration Offset */
#define SLCD_FC2_REG_OFST              (0x1A)              /**< (SLCD_FC2) Frame Counter 2 Configuration Offset */
#define SLCD_LPENL_REG_OFST            (0x1C)              /**< (SLCD_LPENL) LCD Pin Enable Low Offset */
#define SLCD_LPENH_REG_OFST            (0x20)              /**< (SLCD_LPENH) LCD Pin Enable High Offset */
#define SLCD_SDATAL0_REG_OFST          (0x24)              /**< (SLCD_SDATAL0) Segments Data Low for COM0 Line Offset */
#define SLCD_SDATAH0_REG_OFST          (0x28)              /**< (SLCD_SDATAH0) Segments Data High for COM0 Line Offset */
#define SLCD_SDATAL1_REG_OFST          (0x2C)              /**< (SLCD_SDATAL1) Segments Data Low for COM1 Line Offset */
#define SLCD_SDATAH1_REG_OFST          (0x30)              /**< (SLCD_SDATAH1) Segments Data High for COM1 Line Offset */
#define SLCD_SDATAL2_REG_OFST          (0x34)              /**< (SLCD_SDATAL2) Segments Data Low for COM2 Line Offset */
#define SLCD_SDATAH2_REG_OFST          (0x38)              /**< (SLCD_SDATAH2) Segments Data High for COM2 Line Offset */
#define SLCD_SDATAL3_REG_OFST          (0x3C)              /**< (SLCD_SDATAL3) Segments Data Low for COM3 Line Offset */
#define SLCD_SDATAH3_REG_OFST          (0x40)              /**< (SLCD_SDATAH3) Segments Data High for COM3 Line Offset */
#define SLCD_SDATAL4_REG_OFST          (0x44)              /**< (SLCD_SDATAL4) Segments Data Low for COM4 Line Offset */
#define SLCD_SDATAH4_REG_OFST          (0x48)              /**< (SLCD_SDATAH4) Segments Data High for COM4 Line Offset */
#define SLCD_SDATAL5_REG_OFST          (0x4C)              /**< (SLCD_SDATAL5) Segments Data Low for COM5 Line Offset */
#define SLCD_SDATAH5_REG_OFST          (0x50)              /**< (SLCD_SDATAH5) Segments Data High for COM5 Line Offset */
#define SLCD_SDATAL6_REG_OFST          (0x54)              /**< (SLCD_SDATAL6) Segments Data Low for COM6 Line Offset */
#define SLCD_SDATAH6_REG_OFST          (0x58)              /**< (SLCD_SDATAH6) Segments Data High for COM6 Line Offset */
#define SLCD_SDATAL7_REG_OFST          (0x5C)              /**< (SLCD_SDATAL7) Segments Data Low for COM7 Line Offset */
#define SLCD_SDATAH7_REG_OFST          (0x60)              /**< (SLCD_SDATAH7) Segments Data High for COM7 Line Offset */
#define SLCD_ISDATA_REG_OFST           (0x64)              /**< (SLCD_ISDATA) Indirect Segments Data Access Offset */
#define SLCD_BCFG_REG_OFST             (0x68)              /**< (SLCD_BCFG) Blink Configuration Offset */
#define SLCD_CSRCFG_REG_OFST           (0x6C)              /**< (SLCD_CSRCFG) Circular Shift Register Configuration Offset */
#define SLCD_CMCFG_REG_OFST            (0x70)              /**< (SLCD_CMCFG) Character Mapping Configuration Offset */
#define SLCD_ACMCFG_REG_OFST           (0x74)              /**< (SLCD_ACMCFG) Automated Character Mapping Configuration Offset */
#define SLCD_ABMCFG_REG_OFST           (0x78)              /**< (SLCD_ABMCFG) Automated Bit Mapping Configuration Offset */
#define SLCD_CMDATA_REG_OFST           (0x7C)              /**< (SLCD_CMDATA) Character Mapping Segments Data Offset */
#define SLCD_CMDMASK_REG_OFST          (0x80)              /**< (SLCD_CMDMASK) Character Mapping Segments Data Mask Offset */
#define SLCD_CMINDEX_REG_OFST          (0x84)              /**< (SLCD_CMINDEX) Character Mapping SEG/COM Index Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SLCD register API structure */
typedef struct
{  /* Segment Liquid Crystal Display Controller */
  __IO  uint32_t                       SLCD_CTRLA;         /**< Offset: 0x00 (R/W  32) Control A */
  __IO  uint16_t                       SLCD_CTRLB;         /**< Offset: 0x04 (R/W  16) Control B */
  __IO  uint16_t                       SLCD_CTRLC;         /**< Offset: 0x06 (R/W  16) Control C */
  __IO  uint8_t                        SLCD_CTRLD;         /**< Offset: 0x08 (R/W  8) Control D */
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint8_t                        SLCD_EVCTRL;        /**< Offset: 0x0C (R/W  8) Event Control */
  __IO  uint8_t                        SLCD_INTENCLR;      /**< Offset: 0x0D (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        SLCD_INTENSET;      /**< Offset: 0x0E (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        SLCD_INTFLAG;       /**< Offset: 0x0F (R/W  8) Interrupt Flag Status and Clear */
  __I   uint8_t                        SLCD_STATUS;        /**< Offset: 0x10 (R/   8) Status */
  __I   uint8_t                        Reserved2[0x03];
  __I   uint32_t                       SLCD_SYNCBUSY;      /**< Offset: 0x14 (R/   32) Synchronization Busy */
  __IO  uint8_t                        SLCD_FC0;           /**< Offset: 0x18 (R/W  8) Frame Counter 0 Configuration */
  __IO  uint8_t                        SLCD_FC1;           /**< Offset: 0x19 (R/W  8) Frame Counter 1 Configuration */
  __IO  uint8_t                        SLCD_FC2;           /**< Offset: 0x1A (R/W  8) Frame Counter 2 Configuration */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint32_t                       SLCD_LPENL;         /**< Offset: 0x1C (R/W  32) LCD Pin Enable Low */
  __IO  uint32_t                       SLCD_LPENH;         /**< Offset: 0x20 (R/W  32) LCD Pin Enable High */
  __IO  uint32_t                       SLCD_SDATAL0;       /**< Offset: 0x24 (R/W  32) Segments Data Low for COM0 Line */
  __IO  uint32_t                       SLCD_SDATAH0;       /**< Offset: 0x28 (R/W  32) Segments Data High for COM0 Line */
  __IO  uint32_t                       SLCD_SDATAL1;       /**< Offset: 0x2C (R/W  32) Segments Data Low for COM1 Line */
  __IO  uint32_t                       SLCD_SDATAH1;       /**< Offset: 0x30 (R/W  32) Segments Data High for COM1 Line */
  __IO  uint32_t                       SLCD_SDATAL2;       /**< Offset: 0x34 (R/W  32) Segments Data Low for COM2 Line */
  __IO  uint32_t                       SLCD_SDATAH2;       /**< Offset: 0x38 (R/W  32) Segments Data High for COM2 Line */
  __IO  uint32_t                       SLCD_SDATAL3;       /**< Offset: 0x3C (R/W  32) Segments Data Low for COM3 Line */
  __IO  uint32_t                       SLCD_SDATAH3;       /**< Offset: 0x40 (R/W  32) Segments Data High for COM3 Line */
  __IO  uint32_t                       SLCD_SDATAL4;       /**< Offset: 0x44 (R/W  32) Segments Data Low for COM4 Line */
  __IO  uint32_t                       SLCD_SDATAH4;       /**< Offset: 0x48 (R/W  32) Segments Data High for COM4 Line */
  __IO  uint32_t                       SLCD_SDATAL5;       /**< Offset: 0x4C (R/W  32) Segments Data Low for COM5 Line */
  __IO  uint32_t                       SLCD_SDATAH5;       /**< Offset: 0x50 (R/W  32) Segments Data High for COM5 Line */
  __IO  uint32_t                       SLCD_SDATAL6;       /**< Offset: 0x54 (R/W  32) Segments Data Low for COM6 Line */
  __IO  uint32_t                       SLCD_SDATAH6;       /**< Offset: 0x58 (R/W  32) Segments Data High for COM6 Line */
  __IO  uint32_t                       SLCD_SDATAL7;       /**< Offset: 0x5C (R/W  32) Segments Data Low for COM7 Line */
  __IO  uint32_t                       SLCD_SDATAH7;       /**< Offset: 0x60 (R/W  32) Segments Data High for COM7 Line */
  __O   uint32_t                       SLCD_ISDATA;        /**< Offset: 0x64 ( /W  32) Indirect Segments Data Access */
  __IO  uint32_t                       SLCD_BCFG;          /**< Offset: 0x68 (R/W  32) Blink Configuration */
  __IO  uint32_t                       SLCD_CSRCFG;        /**< Offset: 0x6C (R/W  32) Circular Shift Register Configuration */
  __IO  uint8_t                        SLCD_CMCFG;         /**< Offset: 0x70 (R/W  8) Character Mapping Configuration */
  __I   uint8_t                        Reserved4[0x03];
  __IO  uint32_t                       SLCD_ACMCFG;        /**< Offset: 0x74 (R/W  32) Automated Character Mapping Configuration */
  __IO  uint8_t                        SLCD_ABMCFG;        /**< Offset: 0x78 (R/W  8) Automated Bit Mapping Configuration */
  __I   uint8_t                        Reserved5[0x03];
  __O   uint32_t                       SLCD_CMDATA;        /**< Offset: 0x7C ( /W  32) Character Mapping Segments Data */
  __IO  uint32_t                       SLCD_CMDMASK;       /**< Offset: 0x80 (R/W  32) Character Mapping Segments Data Mask */
  __IO  uint16_t                       SLCD_CMINDEX;       /**< Offset: 0x84 (R/W  16) Character Mapping SEG/COM Index */
} slcd_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAML22_SLCD_COMPONENT_H_ */
