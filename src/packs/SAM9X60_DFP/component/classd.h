/*
 * Component description for CLASSD
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
#ifndef _SAM9X_CLASSD_COMPONENT_H_
#define _SAM9X_CLASSD_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CLASSD                                       */
/* ************************************************************************** */

/* -------- CLASSD_CR : (CLASSD Offset: 0x00) ( /W 32) Control Register -------- */
#define CLASSD_CR_SWRST_Pos                   _U_(0)                                               /**< (CLASSD_CR) Software Reset Position */
#define CLASSD_CR_SWRST_Msk                   (_U_(0x1) << CLASSD_CR_SWRST_Pos)                    /**< (CLASSD_CR) Software Reset Mask */
#define CLASSD_CR_SWRST(value)                (CLASSD_CR_SWRST_Msk & ((value) << CLASSD_CR_SWRST_Pos))
#define CLASSD_CR_Msk                         _U_(0x00000001)                                      /**< (CLASSD_CR) Register Mask  */


/* -------- CLASSD_MR : (CLASSD Offset: 0x04) (R/W 32) Mode Register -------- */
#define CLASSD_MR_LEN_Pos                     _U_(0)                                               /**< (CLASSD_MR) Left Channel Enable Position */
#define CLASSD_MR_LEN_Msk                     (_U_(0x1) << CLASSD_MR_LEN_Pos)                      /**< (CLASSD_MR) Left Channel Enable Mask */
#define CLASSD_MR_LEN(value)                  (CLASSD_MR_LEN_Msk & ((value) << CLASSD_MR_LEN_Pos))
#define CLASSD_MR_LMUTE_Pos                   _U_(1)                                               /**< (CLASSD_MR) Left Channel Mute Position */
#define CLASSD_MR_LMUTE_Msk                   (_U_(0x1) << CLASSD_MR_LMUTE_Pos)                    /**< (CLASSD_MR) Left Channel Mute Mask */
#define CLASSD_MR_LMUTE(value)                (CLASSD_MR_LMUTE_Msk & ((value) << CLASSD_MR_LMUTE_Pos))
#define CLASSD_MR_REN_Pos                     _U_(4)                                               /**< (CLASSD_MR) Right Channel Enable Position */
#define CLASSD_MR_REN_Msk                     (_U_(0x1) << CLASSD_MR_REN_Pos)                      /**< (CLASSD_MR) Right Channel Enable Mask */
#define CLASSD_MR_REN(value)                  (CLASSD_MR_REN_Msk & ((value) << CLASSD_MR_REN_Pos))
#define CLASSD_MR_RMUTE_Pos                   _U_(5)                                               /**< (CLASSD_MR) Right Channel Mute Position */
#define CLASSD_MR_RMUTE_Msk                   (_U_(0x1) << CLASSD_MR_RMUTE_Pos)                    /**< (CLASSD_MR) Right Channel Mute Mask */
#define CLASSD_MR_RMUTE(value)                (CLASSD_MR_RMUTE_Msk & ((value) << CLASSD_MR_RMUTE_Pos))
#define CLASSD_MR_PWMTYP_Pos                  _U_(8)                                               /**< (CLASSD_MR) PWM Modulation Type Position */
#define CLASSD_MR_PWMTYP_Msk                  (_U_(0x1) << CLASSD_MR_PWMTYP_Pos)                   /**< (CLASSD_MR) PWM Modulation Type Mask */
#define CLASSD_MR_PWMTYP(value)               (CLASSD_MR_PWMTYP_Msk & ((value) << CLASSD_MR_PWMTYP_Pos))
#define   CLASSD_MR_PWMTYP_TRAILING_EDGE_Val  _U_(0x0)                                             /**< (CLASSD_MR) The signal is single-ended.  */
#define   CLASSD_MR_PWMTYP_UNIFORM_Val        _U_(0x1)                                             /**< (CLASSD_MR) The signal is differential.  */
#define CLASSD_MR_PWMTYP_TRAILING_EDGE        (CLASSD_MR_PWMTYP_TRAILING_EDGE_Val << CLASSD_MR_PWMTYP_Pos) /**< (CLASSD_MR) The signal is single-ended. Position  */
#define CLASSD_MR_PWMTYP_UNIFORM              (CLASSD_MR_PWMTYP_UNIFORM_Val << CLASSD_MR_PWMTYP_Pos) /**< (CLASSD_MR) The signal is differential. Position  */
#define CLASSD_MR_NON_OVERLAP_Pos             _U_(16)                                              /**< (CLASSD_MR) Non-Overlapping Enable Position */
#define CLASSD_MR_NON_OVERLAP_Msk             (_U_(0x1) << CLASSD_MR_NON_OVERLAP_Pos)              /**< (CLASSD_MR) Non-Overlapping Enable Mask */
#define CLASSD_MR_NON_OVERLAP(value)          (CLASSD_MR_NON_OVERLAP_Msk & ((value) << CLASSD_MR_NON_OVERLAP_Pos))
#define CLASSD_MR_NOVRVAL_Pos                 _U_(20)                                              /**< (CLASSD_MR) Non-Overlapping Value Position */
#define CLASSD_MR_NOVRVAL_Msk                 (_U_(0x3) << CLASSD_MR_NOVRVAL_Pos)                  /**< (CLASSD_MR) Non-Overlapping Value Mask */
#define CLASSD_MR_NOVRVAL(value)              (CLASSD_MR_NOVRVAL_Msk & ((value) << CLASSD_MR_NOVRVAL_Pos))
#define   CLASSD_MR_NOVRVAL_5NS_Val           _U_(0x0)                                             /**< (CLASSD_MR) Non-overlapping time is 5 ns  */
#define   CLASSD_MR_NOVRVAL_10NS_Val          _U_(0x1)                                             /**< (CLASSD_MR) Non-overlapping time is 10 ns  */
#define   CLASSD_MR_NOVRVAL_15NS_Val          _U_(0x2)                                             /**< (CLASSD_MR) Non-overlapping time is 15 ns  */
#define   CLASSD_MR_NOVRVAL_20NS_Val          _U_(0x3)                                             /**< (CLASSD_MR) Non-overlapping time is 20 ns  */
#define CLASSD_MR_NOVRVAL_5NS                 (CLASSD_MR_NOVRVAL_5NS_Val << CLASSD_MR_NOVRVAL_Pos) /**< (CLASSD_MR) Non-overlapping time is 5 ns Position  */
#define CLASSD_MR_NOVRVAL_10NS                (CLASSD_MR_NOVRVAL_10NS_Val << CLASSD_MR_NOVRVAL_Pos) /**< (CLASSD_MR) Non-overlapping time is 10 ns Position  */
#define CLASSD_MR_NOVRVAL_15NS                (CLASSD_MR_NOVRVAL_15NS_Val << CLASSD_MR_NOVRVAL_Pos) /**< (CLASSD_MR) Non-overlapping time is 15 ns Position  */
#define CLASSD_MR_NOVRVAL_20NS                (CLASSD_MR_NOVRVAL_20NS_Val << CLASSD_MR_NOVRVAL_Pos) /**< (CLASSD_MR) Non-overlapping time is 20 ns Position  */
#define CLASSD_MR_Msk                         _U_(0x00310133)                                      /**< (CLASSD_MR) Register Mask  */


/* -------- CLASSD_INTPMR : (CLASSD Offset: 0x08) (R/W 32) Interpolator Mode Register -------- */
#define CLASSD_INTPMR_ATTL_Pos                _U_(0)                                               /**< (CLASSD_INTPMR) Left Channel Attenuation Position */
#define CLASSD_INTPMR_ATTL_Msk                (_U_(0x7F) << CLASSD_INTPMR_ATTL_Pos)                /**< (CLASSD_INTPMR) Left Channel Attenuation Mask */
#define CLASSD_INTPMR_ATTL(value)             (CLASSD_INTPMR_ATTL_Msk & ((value) << CLASSD_INTPMR_ATTL_Pos))
#define CLASSD_INTPMR_ATTR_Pos                _U_(8)                                               /**< (CLASSD_INTPMR) Right Channel Attenuation Position */
#define CLASSD_INTPMR_ATTR_Msk                (_U_(0x7F) << CLASSD_INTPMR_ATTR_Pos)                /**< (CLASSD_INTPMR) Right Channel Attenuation Mask */
#define CLASSD_INTPMR_ATTR(value)             (CLASSD_INTPMR_ATTR_Msk & ((value) << CLASSD_INTPMR_ATTR_Pos))
#define CLASSD_INTPMR_DSPCLKFREQ_Pos          _U_(16)                                              /**< (CLASSD_INTPMR) DSP Clock Frequency Position */
#define CLASSD_INTPMR_DSPCLKFREQ_Msk          (_U_(0x1) << CLASSD_INTPMR_DSPCLKFREQ_Pos)           /**< (CLASSD_INTPMR) DSP Clock Frequency Mask */
#define CLASSD_INTPMR_DSPCLKFREQ(value)       (CLASSD_INTPMR_DSPCLKFREQ_Msk & ((value) << CLASSD_INTPMR_DSPCLKFREQ_Pos))
#define   CLASSD_INTPMR_DSPCLKFREQ_12M288_Val _U_(0x0)                                             /**< (CLASSD_INTPMR) DSP Clock (DSPCLK) is 12.288 MHz.  */
#define   CLASSD_INTPMR_DSPCLKFREQ_11M2896_Val _U_(0x1)                                             /**< (CLASSD_INTPMR) DSP Clock (DSPCLK) is 11.2896 MHz.  */
#define CLASSD_INTPMR_DSPCLKFREQ_12M288       (CLASSD_INTPMR_DSPCLKFREQ_12M288_Val << CLASSD_INTPMR_DSPCLKFREQ_Pos) /**< (CLASSD_INTPMR) DSP Clock (DSPCLK) is 12.288 MHz. Position  */
#define CLASSD_INTPMR_DSPCLKFREQ_11M2896      (CLASSD_INTPMR_DSPCLKFREQ_11M2896_Val << CLASSD_INTPMR_DSPCLKFREQ_Pos) /**< (CLASSD_INTPMR) DSP Clock (DSPCLK) is 11.2896 MHz. Position  */
#define CLASSD_INTPMR_DEEMP_Pos               _U_(18)                                              /**< (CLASSD_INTPMR) Enable De-emphasis Filter Position */
#define CLASSD_INTPMR_DEEMP_Msk               (_U_(0x1) << CLASSD_INTPMR_DEEMP_Pos)                /**< (CLASSD_INTPMR) Enable De-emphasis Filter Mask */
#define CLASSD_INTPMR_DEEMP(value)            (CLASSD_INTPMR_DEEMP_Msk & ((value) << CLASSD_INTPMR_DEEMP_Pos))
#define   CLASSD_INTPMR_DEEMP_DISABLED_Val    _U_(0x0)                                             /**< (CLASSD_INTPMR) De-emphasis filter is disabled.  */
#define   CLASSD_INTPMR_DEEMP_ENABLED_Val     _U_(0x1)                                             /**< (CLASSD_INTPMR) De-emphasis filter is enabled.  */
#define CLASSD_INTPMR_DEEMP_DISABLED          (CLASSD_INTPMR_DEEMP_DISABLED_Val << CLASSD_INTPMR_DEEMP_Pos) /**< (CLASSD_INTPMR) De-emphasis filter is disabled. Position  */
#define CLASSD_INTPMR_DEEMP_ENABLED           (CLASSD_INTPMR_DEEMP_ENABLED_Val << CLASSD_INTPMR_DEEMP_Pos) /**< (CLASSD_INTPMR) De-emphasis filter is enabled. Position  */
#define CLASSD_INTPMR_SWAP_Pos                _U_(19)                                              /**< (CLASSD_INTPMR) Swap Left and Right Channels Position */
#define CLASSD_INTPMR_SWAP_Msk                (_U_(0x1) << CLASSD_INTPMR_SWAP_Pos)                 /**< (CLASSD_INTPMR) Swap Left and Right Channels Mask */
#define CLASSD_INTPMR_SWAP(value)             (CLASSD_INTPMR_SWAP_Msk & ((value) << CLASSD_INTPMR_SWAP_Pos))
#define   CLASSD_INTPMR_SWAP_LEFT_ON_LSB_Val  _U_(0x0)                                             /**< (CLASSD_INTPMR) Left channel is on CLASSD_THR[15:0], right channel is on CLASSD_THR[31:16].  */
#define   CLASSD_INTPMR_SWAP_RIGHT_ON_LSB_Val _U_(0x1)                                             /**< (CLASSD_INTPMR) Right channel is on CLASSD_THR[15:0], left channel is on CLASSD_THR[31:16].  */
#define CLASSD_INTPMR_SWAP_LEFT_ON_LSB        (CLASSD_INTPMR_SWAP_LEFT_ON_LSB_Val << CLASSD_INTPMR_SWAP_Pos) /**< (CLASSD_INTPMR) Left channel is on CLASSD_THR[15:0], right channel is on CLASSD_THR[31:16]. Position  */
#define CLASSD_INTPMR_SWAP_RIGHT_ON_LSB       (CLASSD_INTPMR_SWAP_RIGHT_ON_LSB_Val << CLASSD_INTPMR_SWAP_Pos) /**< (CLASSD_INTPMR) Right channel is on CLASSD_THR[15:0], left channel is on CLASSD_THR[31:16]. Position  */
#define CLASSD_INTPMR_FRAME_Pos               _U_(20)                                              /**< (CLASSD_INTPMR) CLASSD Incoming Data Sampling Frequency Position */
#define CLASSD_INTPMR_FRAME_Msk               (_U_(0x7) << CLASSD_INTPMR_FRAME_Pos)                /**< (CLASSD_INTPMR) CLASSD Incoming Data Sampling Frequency Mask */
#define CLASSD_INTPMR_FRAME(value)            (CLASSD_INTPMR_FRAME_Msk & ((value) << CLASSD_INTPMR_FRAME_Pos))
#define   CLASSD_INTPMR_FRAME_FRAME_8K_Val    _U_(0x0)                                             /**< (CLASSD_INTPMR) 8 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_16K_Val   _U_(0x1)                                             /**< (CLASSD_INTPMR) 16 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_32K_Val   _U_(0x2)                                             /**< (CLASSD_INTPMR) 32 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_48K_Val   _U_(0x3)                                             /**< (CLASSD_INTPMR) 48 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_96K_Val   _U_(0x4)                                             /**< (CLASSD_INTPMR) 96 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_22K_Val   _U_(0x5)                                             /**< (CLASSD_INTPMR) 22.05 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_44K_Val   _U_(0x6)                                             /**< (CLASSD_INTPMR) 44.1 kHz  */
#define   CLASSD_INTPMR_FRAME_FRAME_88K_Val   _U_(0x7)                                             /**< (CLASSD_INTPMR) 88.2 kHz  */
#define CLASSD_INTPMR_FRAME_FRAME_8K          (CLASSD_INTPMR_FRAME_FRAME_8K_Val << CLASSD_INTPMR_FRAME_Pos) /**< (CLASSD_INTPMR) 8 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_16K         (CLASSD_INTPMR_FRAME_FRAME_16K_Val << CLASSD_INTPMR_FRAME_Pos) /**< (CLASSD_INTPMR) 16 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_32K         (CLASSD_INTPMR_FRAME_FRAME_32K_Val << CLASSD_INTPMR_FRAME_Pos) /**< (CLASSD_INTPMR) 32 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_48K         (CLASSD_INTPMR_FRAME_FRAME_48K_Val << CLASSD_INTPMR_FRAME_Pos) /**< (CLASSD_INTPMR) 48 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_96K         (CLASSD_INTPMR_FRAME_FRAME_96K_Val << CLASSD_INTPMR_FRAME_Pos) /**< (CLASSD_INTPMR) 96 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_22K         (CLASSD_INTPMR_FRAME_FRAME_22K_Val << CLASSD_INTPMR_FRAME_Pos) /**< (CLASSD_INTPMR) 22.05 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_44K         (CLASSD_INTPMR_FRAME_FRAME_44K_Val << CLASSD_INTPMR_FRAME_Pos) /**< (CLASSD_INTPMR) 44.1 kHz Position  */
#define CLASSD_INTPMR_FRAME_FRAME_88K         (CLASSD_INTPMR_FRAME_FRAME_88K_Val << CLASSD_INTPMR_FRAME_Pos) /**< (CLASSD_INTPMR) 88.2 kHz Position  */
#define CLASSD_INTPMR_EQCFG_Pos               _U_(24)                                              /**< (CLASSD_INTPMR) Equalization Selection Position */
#define CLASSD_INTPMR_EQCFG_Msk               (_U_(0xF) << CLASSD_INTPMR_EQCFG_Pos)                /**< (CLASSD_INTPMR) Equalization Selection Mask */
#define CLASSD_INTPMR_EQCFG(value)            (CLASSD_INTPMR_EQCFG_Msk & ((value) << CLASSD_INTPMR_EQCFG_Pos))
#define   CLASSD_INTPMR_EQCFG_FLAT_Val        _U_(0x0)                                             /**< (CLASSD_INTPMR) Flat Response  */
#define   CLASSD_INTPMR_EQCFG_BBOOST12_Val    _U_(0x1)                                             /**< (CLASSD_INTPMR) Bass boost +12 dB  */
#define   CLASSD_INTPMR_EQCFG_BBOOST6_Val     _U_(0x2)                                             /**< (CLASSD_INTPMR) Bass boost +6 dB  */
#define   CLASSD_INTPMR_EQCFG_BCUT12_Val      _U_(0x3)                                             /**< (CLASSD_INTPMR) Bass cut -12 dB  */
#define   CLASSD_INTPMR_EQCFG_BCUT6_Val       _U_(0x4)                                             /**< (CLASSD_INTPMR) Bass cut -6 dB  */
#define   CLASSD_INTPMR_EQCFG_MBOOST3_Val     _U_(0x5)                                             /**< (CLASSD_INTPMR) Medium boost +3 dB  */
#define   CLASSD_INTPMR_EQCFG_MBOOST8_Val     _U_(0x6)                                             /**< (CLASSD_INTPMR) Medium boost +8 dB  */
#define   CLASSD_INTPMR_EQCFG_MCUT3_Val       _U_(0x7)                                             /**< (CLASSD_INTPMR) Medium cut -3 dB  */
#define   CLASSD_INTPMR_EQCFG_MCUT8_Val       _U_(0x8)                                             /**< (CLASSD_INTPMR) Medium cut -8 dB  */
#define   CLASSD_INTPMR_EQCFG_TBOOST12_Val    _U_(0x9)                                             /**< (CLASSD_INTPMR) Treble boost +12 dB  */
#define   CLASSD_INTPMR_EQCFG_TBOOST6_Val     _U_(0xA)                                             /**< (CLASSD_INTPMR) Treble boost +6 dB  */
#define   CLASSD_INTPMR_EQCFG_TCUT12_Val      _U_(0xB)                                             /**< (CLASSD_INTPMR) Treble cut -12 dB  */
#define   CLASSD_INTPMR_EQCFG_TCUT6_Val       _U_(0xC)                                             /**< (CLASSD_INTPMR) Treble cut -6 dB  */
#define CLASSD_INTPMR_EQCFG_FLAT              (CLASSD_INTPMR_EQCFG_FLAT_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Flat Response Position  */
#define CLASSD_INTPMR_EQCFG_BBOOST12          (CLASSD_INTPMR_EQCFG_BBOOST12_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Bass boost +12 dB Position  */
#define CLASSD_INTPMR_EQCFG_BBOOST6           (CLASSD_INTPMR_EQCFG_BBOOST6_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Bass boost +6 dB Position  */
#define CLASSD_INTPMR_EQCFG_BCUT12            (CLASSD_INTPMR_EQCFG_BCUT12_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Bass cut -12 dB Position  */
#define CLASSD_INTPMR_EQCFG_BCUT6             (CLASSD_INTPMR_EQCFG_BCUT6_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Bass cut -6 dB Position  */
#define CLASSD_INTPMR_EQCFG_MBOOST3           (CLASSD_INTPMR_EQCFG_MBOOST3_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Medium boost +3 dB Position  */
#define CLASSD_INTPMR_EQCFG_MBOOST8           (CLASSD_INTPMR_EQCFG_MBOOST8_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Medium boost +8 dB Position  */
#define CLASSD_INTPMR_EQCFG_MCUT3             (CLASSD_INTPMR_EQCFG_MCUT3_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Medium cut -3 dB Position  */
#define CLASSD_INTPMR_EQCFG_MCUT8             (CLASSD_INTPMR_EQCFG_MCUT8_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Medium cut -8 dB Position  */
#define CLASSD_INTPMR_EQCFG_TBOOST12          (CLASSD_INTPMR_EQCFG_TBOOST12_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Treble boost +12 dB Position  */
#define CLASSD_INTPMR_EQCFG_TBOOST6           (CLASSD_INTPMR_EQCFG_TBOOST6_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Treble boost +6 dB Position  */
#define CLASSD_INTPMR_EQCFG_TCUT12            (CLASSD_INTPMR_EQCFG_TCUT12_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Treble cut -12 dB Position  */
#define CLASSD_INTPMR_EQCFG_TCUT6             (CLASSD_INTPMR_EQCFG_TCUT6_Val << CLASSD_INTPMR_EQCFG_Pos) /**< (CLASSD_INTPMR) Treble cut -6 dB Position  */
#define CLASSD_INTPMR_MONO_Pos                _U_(28)                                              /**< (CLASSD_INTPMR) Mono Signal Position */
#define CLASSD_INTPMR_MONO_Msk                (_U_(0x1) << CLASSD_INTPMR_MONO_Pos)                 /**< (CLASSD_INTPMR) Mono Signal Mask */
#define CLASSD_INTPMR_MONO(value)             (CLASSD_INTPMR_MONO_Msk & ((value) << CLASSD_INTPMR_MONO_Pos))
#define   CLASSD_INTPMR_MONO_DISABLED_Val     _U_(0x0)                                             /**< (CLASSD_INTPMR) The signal is sent stereo to the left and right channels.  */
#define   CLASSD_INTPMR_MONO_ENABLED_Val      _U_(0x1)                                             /**< (CLASSD_INTPMR) The same signal is sent on both left and right channels. The sent signal is defined by the MONOMODE field value.  */
#define CLASSD_INTPMR_MONO_DISABLED           (CLASSD_INTPMR_MONO_DISABLED_Val << CLASSD_INTPMR_MONO_Pos) /**< (CLASSD_INTPMR) The signal is sent stereo to the left and right channels. Position  */
#define CLASSD_INTPMR_MONO_ENABLED            (CLASSD_INTPMR_MONO_ENABLED_Val << CLASSD_INTPMR_MONO_Pos) /**< (CLASSD_INTPMR) The same signal is sent on both left and right channels. The sent signal is defined by the MONOMODE field value. Position  */
#define CLASSD_INTPMR_MONOMODE_Pos            _U_(29)                                              /**< (CLASSD_INTPMR) Mono Mode Selection Position */
#define CLASSD_INTPMR_MONOMODE_Msk            (_U_(0x3) << CLASSD_INTPMR_MONOMODE_Pos)             /**< (CLASSD_INTPMR) Mono Mode Selection Mask */
#define CLASSD_INTPMR_MONOMODE(value)         (CLASSD_INTPMR_MONOMODE_Msk & ((value) << CLASSD_INTPMR_MONOMODE_Pos))
#define   CLASSD_INTPMR_MONOMODE_MONOMIX_Val  _U_(0x0)                                             /**< (CLASSD_INTPMR) (left + right) / 2 is sent on both channels  */
#define   CLASSD_INTPMR_MONOMODE_MONOSAT_Val  _U_(0x1)                                             /**< (CLASSD_INTPMR) (left + right) is sent to both channels. If the sum is too high, the result is saturated.  */
#define   CLASSD_INTPMR_MONOMODE_MONOLEFT_Val _U_(0x2)                                             /**< (CLASSD_INTPMR) THR[15:0] is sent on both left and right channels  */
#define   CLASSD_INTPMR_MONOMODE_MONORIGHT_Val _U_(0x3)                                             /**< (CLASSD_INTPMR) THR[31:16] is sent on both left and right channels  */
#define CLASSD_INTPMR_MONOMODE_MONOMIX        (CLASSD_INTPMR_MONOMODE_MONOMIX_Val << CLASSD_INTPMR_MONOMODE_Pos) /**< (CLASSD_INTPMR) (left + right) / 2 is sent on both channels Position  */
#define CLASSD_INTPMR_MONOMODE_MONOSAT        (CLASSD_INTPMR_MONOMODE_MONOSAT_Val << CLASSD_INTPMR_MONOMODE_Pos) /**< (CLASSD_INTPMR) (left + right) is sent to both channels. If the sum is too high, the result is saturated. Position  */
#define CLASSD_INTPMR_MONOMODE_MONOLEFT       (CLASSD_INTPMR_MONOMODE_MONOLEFT_Val << CLASSD_INTPMR_MONOMODE_Pos) /**< (CLASSD_INTPMR) THR[15:0] is sent on both left and right channels Position  */
#define CLASSD_INTPMR_MONOMODE_MONORIGHT      (CLASSD_INTPMR_MONOMODE_MONORIGHT_Val << CLASSD_INTPMR_MONOMODE_Pos) /**< (CLASSD_INTPMR) THR[31:16] is sent on both left and right channels Position  */
#define CLASSD_INTPMR_Msk                     _U_(0x7F7D7F7F)                                      /**< (CLASSD_INTPMR) Register Mask  */


/* -------- CLASSD_INTSR : (CLASSD Offset: 0x0C) ( R/ 32) Interpolator Status Register -------- */
#define CLASSD_INTSR_CFGERR_Pos               _U_(0)                                               /**< (CLASSD_INTSR) Configuration Error Position */
#define CLASSD_INTSR_CFGERR_Msk               (_U_(0x1) << CLASSD_INTSR_CFGERR_Pos)                /**< (CLASSD_INTSR) Configuration Error Mask */
#define CLASSD_INTSR_CFGERR(value)            (CLASSD_INTSR_CFGERR_Msk & ((value) << CLASSD_INTSR_CFGERR_Pos))
#define CLASSD_INTSR_Msk                      _U_(0x00000001)                                      /**< (CLASSD_INTSR) Register Mask  */


/* -------- CLASSD_THR : (CLASSD Offset: 0x10) (R/W 32) Transmit Holding Register -------- */
#define CLASSD_THR_LDATA_Pos                  _U_(0)                                               /**< (CLASSD_THR) Left Channel Data Position */
#define CLASSD_THR_LDATA_Msk                  (_U_(0xFFFF) << CLASSD_THR_LDATA_Pos)                /**< (CLASSD_THR) Left Channel Data Mask */
#define CLASSD_THR_LDATA(value)               (CLASSD_THR_LDATA_Msk & ((value) << CLASSD_THR_LDATA_Pos))
#define CLASSD_THR_RDATA_Pos                  _U_(16)                                              /**< (CLASSD_THR) Right Channel Data Position */
#define CLASSD_THR_RDATA_Msk                  (_U_(0xFFFF) << CLASSD_THR_RDATA_Pos)                /**< (CLASSD_THR) Right Channel Data Mask */
#define CLASSD_THR_RDATA(value)               (CLASSD_THR_RDATA_Msk & ((value) << CLASSD_THR_RDATA_Pos))
#define CLASSD_THR_Msk                        _U_(0xFFFFFFFF)                                      /**< (CLASSD_THR) Register Mask  */


/* -------- CLASSD_IER : (CLASSD Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#define CLASSD_IER_DATRDY_Pos                 _U_(0)                                               /**< (CLASSD_IER) Data Ready Position */
#define CLASSD_IER_DATRDY_Msk                 (_U_(0x1) << CLASSD_IER_DATRDY_Pos)                  /**< (CLASSD_IER) Data Ready Mask */
#define CLASSD_IER_DATRDY(value)              (CLASSD_IER_DATRDY_Msk & ((value) << CLASSD_IER_DATRDY_Pos))
#define CLASSD_IER_Msk                        _U_(0x00000001)                                      /**< (CLASSD_IER) Register Mask  */


/* -------- CLASSD_IDR : (CLASSD Offset: 0x18) ( /W 32) Interrupt Disable Register -------- */
#define CLASSD_IDR_DATRDY_Pos                 _U_(0)                                               /**< (CLASSD_IDR) Data Ready Position */
#define CLASSD_IDR_DATRDY_Msk                 (_U_(0x1) << CLASSD_IDR_DATRDY_Pos)                  /**< (CLASSD_IDR) Data Ready Mask */
#define CLASSD_IDR_DATRDY(value)              (CLASSD_IDR_DATRDY_Msk & ((value) << CLASSD_IDR_DATRDY_Pos))
#define CLASSD_IDR_Msk                        _U_(0x00000001)                                      /**< (CLASSD_IDR) Register Mask  */


/* -------- CLASSD_IMR : (CLASSD Offset: 0x1C) (R/W 32) Interrupt Mask Register -------- */
#define CLASSD_IMR_DATRDY_Pos                 _U_(0)                                               /**< (CLASSD_IMR) Data Ready Position */
#define CLASSD_IMR_DATRDY_Msk                 (_U_(0x1) << CLASSD_IMR_DATRDY_Pos)                  /**< (CLASSD_IMR) Data Ready Mask */
#define CLASSD_IMR_DATRDY(value)              (CLASSD_IMR_DATRDY_Msk & ((value) << CLASSD_IMR_DATRDY_Pos))
#define CLASSD_IMR_Msk                        _U_(0x00000001)                                      /**< (CLASSD_IMR) Register Mask  */


/* -------- CLASSD_ISR : (CLASSD Offset: 0x20) ( R/ 32) Interrupt Status Register -------- */
#define CLASSD_ISR_DATRDY_Pos                 _U_(0)                                               /**< (CLASSD_ISR) Data Ready Position */
#define CLASSD_ISR_DATRDY_Msk                 (_U_(0x1) << CLASSD_ISR_DATRDY_Pos)                  /**< (CLASSD_ISR) Data Ready Mask */
#define CLASSD_ISR_DATRDY(value)              (CLASSD_ISR_DATRDY_Msk & ((value) << CLASSD_ISR_DATRDY_Pos))
#define CLASSD_ISR_Msk                        _U_(0x00000001)                                      /**< (CLASSD_ISR) Register Mask  */


/* -------- CLASSD_WPMR : (CLASSD Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define CLASSD_WPMR_WPEN_Pos                  _U_(0)                                               /**< (CLASSD_WPMR) Write Protection Enable Position */
#define CLASSD_WPMR_WPEN_Msk                  (_U_(0x1) << CLASSD_WPMR_WPEN_Pos)                   /**< (CLASSD_WPMR) Write Protection Enable Mask */
#define CLASSD_WPMR_WPEN(value)               (CLASSD_WPMR_WPEN_Msk & ((value) << CLASSD_WPMR_WPEN_Pos))
#define CLASSD_WPMR_WPKEY_Pos                 _U_(8)                                               /**< (CLASSD_WPMR) Write Protection Key Position */
#define CLASSD_WPMR_WPKEY_Msk                 (_U_(0xFFFFFF) << CLASSD_WPMR_WPKEY_Pos)             /**< (CLASSD_WPMR) Write Protection Key Mask */
#define CLASSD_WPMR_WPKEY(value)              (CLASSD_WPMR_WPKEY_Msk & ((value) << CLASSD_WPMR_WPKEY_Pos))
#define   CLASSD_WPMR_WPKEY_PASSWD_Val        _U_(0x434C44)                                        /**< (CLASSD_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define CLASSD_WPMR_WPKEY_PASSWD              (CLASSD_WPMR_WPKEY_PASSWD_Val << CLASSD_WPMR_WPKEY_Pos) /**< (CLASSD_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define CLASSD_WPMR_Msk                       _U_(0xFFFFFF01)                                      /**< (CLASSD_WPMR) Register Mask  */


/** \brief CLASSD register offsets definitions */
#define CLASSD_CR_REG_OFST             (0x00)              /**< (CLASSD_CR) Control Register Offset */
#define CLASSD_MR_REG_OFST             (0x04)              /**< (CLASSD_MR) Mode Register Offset */
#define CLASSD_INTPMR_REG_OFST         (0x08)              /**< (CLASSD_INTPMR) Interpolator Mode Register Offset */
#define CLASSD_INTSR_REG_OFST          (0x0C)              /**< (CLASSD_INTSR) Interpolator Status Register Offset */
#define CLASSD_THR_REG_OFST            (0x10)              /**< (CLASSD_THR) Transmit Holding Register Offset */
#define CLASSD_IER_REG_OFST            (0x14)              /**< (CLASSD_IER) Interrupt Enable Register Offset */
#define CLASSD_IDR_REG_OFST            (0x18)              /**< (CLASSD_IDR) Interrupt Disable Register Offset */
#define CLASSD_IMR_REG_OFST            (0x1C)              /**< (CLASSD_IMR) Interrupt Mask Register Offset */
#define CLASSD_ISR_REG_OFST            (0x20)              /**< (CLASSD_ISR) Interrupt Status Register Offset */
#define CLASSD_WPMR_REG_OFST           (0xE4)              /**< (CLASSD_WPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CLASSD register API structure */
typedef struct
{
  __O   uint32_t                       CLASSD_CR;          /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       CLASSD_MR;          /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       CLASSD_INTPMR;      /**< Offset: 0x08 (R/W  32) Interpolator Mode Register */
  __I   uint32_t                       CLASSD_INTSR;       /**< Offset: 0x0C (R/   32) Interpolator Status Register */
  __IO  uint32_t                       CLASSD_THR;         /**< Offset: 0x10 (R/W  32) Transmit Holding Register */
  __O   uint32_t                       CLASSD_IER;         /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       CLASSD_IDR;         /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __IO  uint32_t                       CLASSD_IMR;         /**< Offset: 0x1C (R/W  32) Interrupt Mask Register */
  __I   uint32_t                       CLASSD_ISR;         /**< Offset: 0x20 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved1[0xC0];
  __IO  uint32_t                       CLASSD_WPMR;        /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
} classd_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_CLASSD_COMPONENT_H_ */
