/*
 * Component description for ASRC
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
#ifndef _SAMA7G_ASRC_COMPONENT_H_
#define _SAMA7G_ASRC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ASRC                                         */
/* ************************************************************************** */

/* -------- ASRC_CR : (ASRC Offset: 0x00) ( /W 32) Control Register -------- */
#define ASRC_CR_SWRST_Pos                     _U_(0)                                               /**< (ASRC_CR) Software Reset Position */
#define ASRC_CR_SWRST_Msk                     (_U_(0x1) << ASRC_CR_SWRST_Pos)                      /**< (ASRC_CR) Software Reset Mask */
#define ASRC_CR_SWRST(value)                  (ASRC_CR_SWRST_Msk & ((value) << ASRC_CR_SWRST_Pos))
#define   ASRC_CR_SWRST_0_Val                 _U_(0x0)                                             /**< (ASRC_CR) No effect.  */
#define   ASRC_CR_SWRST_1_Val                 _U_(0x1)                                             /**< (ASRC_CR) Resets the ASRC.  */
#define ASRC_CR_SWRST_0                       (ASRC_CR_SWRST_0_Val << ASRC_CR_SWRST_Pos)           /**< (ASRC_CR) No effect. Position  */
#define ASRC_CR_SWRST_1                       (ASRC_CR_SWRST_1_Val << ASRC_CR_SWRST_Pos)           /**< (ASRC_CR) Resets the ASRC. Position  */
#define ASRC_CR_Msk                           _U_(0x00000001)                                      /**< (ASRC_CR) Register Mask  */


/* -------- ASRC_MR : (ASRC Offset: 0x04) (R/W 32) Mode Register -------- */
#define ASRC_MR_RESETVALUE                    _U_(0x00)                                            /**<  (ASRC_MR) Mode Register  Reset Value */

#define ASRC_MR_ASRCEN0_Pos                   _U_(0)                                               /**< (ASRC_MR) ASRC Stereo Channel 0 Enable Position */
#define ASRC_MR_ASRCEN0_Msk                   (_U_(0x1) << ASRC_MR_ASRCEN0_Pos)                    /**< (ASRC_MR) ASRC Stereo Channel 0 Enable Mask */
#define ASRC_MR_ASRCEN0(value)                (ASRC_MR_ASRCEN0_Msk & ((value) << ASRC_MR_ASRCEN0_Pos))
#define   ASRC_MR_ASRCEN0_DISABLE_Val         _U_(0x0)                                             /**< (ASRC_MR) DSPx is disabled.  */
#define   ASRC_MR_ASRCEN0_ENABLE_Val          _U_(0x1)                                             /**< (ASRC_MR) DSPx is enabled.  */
#define ASRC_MR_ASRCEN0_DISABLE               (ASRC_MR_ASRCEN0_DISABLE_Val << ASRC_MR_ASRCEN0_Pos) /**< (ASRC_MR) DSPx is disabled. Position  */
#define ASRC_MR_ASRCEN0_ENABLE                (ASRC_MR_ASRCEN0_ENABLE_Val << ASRC_MR_ASRCEN0_Pos)  /**< (ASRC_MR) DSPx is enabled. Position  */
#define ASRC_MR_ASRCEN1_Pos                   _U_(1)                                               /**< (ASRC_MR) ASRC Stereo Channel 1 Enable Position */
#define ASRC_MR_ASRCEN1_Msk                   (_U_(0x1) << ASRC_MR_ASRCEN1_Pos)                    /**< (ASRC_MR) ASRC Stereo Channel 1 Enable Mask */
#define ASRC_MR_ASRCEN1(value)                (ASRC_MR_ASRCEN1_Msk & ((value) << ASRC_MR_ASRCEN1_Pos))
#define   ASRC_MR_ASRCEN1_DISABLE_Val         _U_(0x0)                                             /**< (ASRC_MR) DSPx is disabled.  */
#define   ASRC_MR_ASRCEN1_ENABLE_Val          _U_(0x1)                                             /**< (ASRC_MR) DSPx is enabled.  */
#define ASRC_MR_ASRCEN1_DISABLE               (ASRC_MR_ASRCEN1_DISABLE_Val << ASRC_MR_ASRCEN1_Pos) /**< (ASRC_MR) DSPx is disabled. Position  */
#define ASRC_MR_ASRCEN1_ENABLE                (ASRC_MR_ASRCEN1_ENABLE_Val << ASRC_MR_ASRCEN1_Pos)  /**< (ASRC_MR) DSPx is enabled. Position  */
#define ASRC_MR_ASRCEN2_Pos                   _U_(2)                                               /**< (ASRC_MR) ASRC Stereo Channel 2 Enable Position */
#define ASRC_MR_ASRCEN2_Msk                   (_U_(0x1) << ASRC_MR_ASRCEN2_Pos)                    /**< (ASRC_MR) ASRC Stereo Channel 2 Enable Mask */
#define ASRC_MR_ASRCEN2(value)                (ASRC_MR_ASRCEN2_Msk & ((value) << ASRC_MR_ASRCEN2_Pos))
#define   ASRC_MR_ASRCEN2_DISABLE_Val         _U_(0x0)                                             /**< (ASRC_MR) DSPx is disabled.  */
#define   ASRC_MR_ASRCEN2_ENABLE_Val          _U_(0x1)                                             /**< (ASRC_MR) DSPx is enabled.  */
#define ASRC_MR_ASRCEN2_DISABLE               (ASRC_MR_ASRCEN2_DISABLE_Val << ASRC_MR_ASRCEN2_Pos) /**< (ASRC_MR) DSPx is disabled. Position  */
#define ASRC_MR_ASRCEN2_ENABLE                (ASRC_MR_ASRCEN2_ENABLE_Val << ASRC_MR_ASRCEN2_Pos)  /**< (ASRC_MR) DSPx is enabled. Position  */
#define ASRC_MR_ASRCEN3_Pos                   _U_(3)                                               /**< (ASRC_MR) ASRC Stereo Channel 3 Enable Position */
#define ASRC_MR_ASRCEN3_Msk                   (_U_(0x1) << ASRC_MR_ASRCEN3_Pos)                    /**< (ASRC_MR) ASRC Stereo Channel 3 Enable Mask */
#define ASRC_MR_ASRCEN3(value)                (ASRC_MR_ASRCEN3_Msk & ((value) << ASRC_MR_ASRCEN3_Pos))
#define   ASRC_MR_ASRCEN3_DISABLE_Val         _U_(0x0)                                             /**< (ASRC_MR) DSPx is disabled.  */
#define   ASRC_MR_ASRCEN3_ENABLE_Val          _U_(0x1)                                             /**< (ASRC_MR) DSPx is enabled.  */
#define ASRC_MR_ASRCEN3_DISABLE               (ASRC_MR_ASRCEN3_DISABLE_Val << ASRC_MR_ASRCEN3_Pos) /**< (ASRC_MR) DSPx is disabled. Position  */
#define ASRC_MR_ASRCEN3_ENABLE                (ASRC_MR_ASRCEN3_ENABLE_Val << ASRC_MR_ASRCEN3_Pos)  /**< (ASRC_MR) DSPx is enabled. Position  */
#define ASRC_MR_GT96K_Pos                     _U_(12)                                              /**< (ASRC_MR) Frequency Sampling Greater Than 96 kHz Position */
#define ASRC_MR_GT96K_Msk                     (_U_(0x1) << ASRC_MR_GT96K_Pos)                      /**< (ASRC_MR) Frequency Sampling Greater Than 96 kHz Mask */
#define ASRC_MR_GT96K(value)                  (ASRC_MR_GT96K_Msk & ((value) << ASRC_MR_GT96K_Pos))
#define   ASRC_MR_GT96K_DISABLE_Val           _U_(0x0)                                             /**< (ASRC_MR) Up to 4 DSP with up to 96 kHz as the upper bound limit of the sampling frequency.  */
#define   ASRC_MR_GT96K_ENABLE_Val            _U_(0x1)                                             /**< (ASRC_MR) Up to 2 DSP with up to 192 kHz as the upper bound limit of the sampling frequency. The number of enabled DSPs is limited to 2.  */
#define ASRC_MR_GT96K_DISABLE                 (ASRC_MR_GT96K_DISABLE_Val << ASRC_MR_GT96K_Pos)     /**< (ASRC_MR) Up to 4 DSP with up to 96 kHz as the upper bound limit of the sampling frequency. Position  */
#define ASRC_MR_GT96K_ENABLE                  (ASRC_MR_GT96K_ENABLE_Val << ASRC_MR_GT96K_Pos)      /**< (ASRC_MR) Up to 2 DSP with up to 192 kHz as the upper bound limit of the sampling frequency. The number of enabled DSPs is limited to 2. Position  */
#define ASRC_MR_Msk                           _U_(0x0000100F)                                      /**< (ASRC_MR) Register Mask  */

#define ASRC_MR_ASRCEN_Pos                    _U_(0)                                               /**< (ASRC_MR Position) ASRC Stereo Channel x Enable */
#define ASRC_MR_ASRCEN_Msk                    (_U_(0xF) << ASRC_MR_ASRCEN_Pos)                     /**< (ASRC_MR Mask) ASRCEN */
#define ASRC_MR_ASRCEN(value)                 (ASRC_MR_ASRCEN_Msk & ((value) << ASRC_MR_ASRCEN_Pos)) 

/* -------- ASRC_RATIO : (ASRC Offset: 0x08) (R/W 32) Ratio Register of Stereo Channel x -------- */
#define ASRC_RATIO_RESETVALUE                 _U_(0x4000400)                                       /**<  (ASRC_RATIO) Ratio Register of Stereo Channel x  Reset Value */

#define ASRC_RATIO_INRATIO_Pos                _U_(0)                                               /**< (ASRC_RATIO) Input Internal Sampling Rate Ratio Position */
#define ASRC_RATIO_INRATIO_Msk                (_U_(0xFFFF) << ASRC_RATIO_INRATIO_Pos)              /**< (ASRC_RATIO) Input Internal Sampling Rate Ratio Mask */
#define ASRC_RATIO_INRATIO(value)             (ASRC_RATIO_INRATIO_Msk & ((value) << ASRC_RATIO_INRATIO_Pos))
#define ASRC_RATIO_OUTRATIO_Pos               _U_(16)                                              /**< (ASRC_RATIO) Output Internal Sampling Rate Ratio Position */
#define ASRC_RATIO_OUTRATIO_Msk               (_U_(0xFFFF) << ASRC_RATIO_OUTRATIO_Pos)             /**< (ASRC_RATIO) Output Internal Sampling Rate Ratio Mask */
#define ASRC_RATIO_OUTRATIO(value)            (ASRC_RATIO_OUTRATIO_Msk & ((value) << ASRC_RATIO_OUTRATIO_Pos))
#define ASRC_RATIO_Msk                        _U_(0xFFFFFFFF)                                      /**< (ASRC_RATIO) Register Mask  */


/* -------- ASRC_VBPS_IN : (ASRC Offset: 0x18) (R/W 32) Valid Bit Per Sample In Register -------- */
#define ASRC_VBPS_IN_RESETVALUE               _U_(0x00)                                            /**<  (ASRC_VBPS_IN) Valid Bit Per Sample In Register  Reset Value */

#define ASRC_VBPS_IN_VBPS_IN0_Pos             _U_(0)                                               /**< (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 0 Position */
#define ASRC_VBPS_IN_VBPS_IN0_Msk             (_U_(0xF) << ASRC_VBPS_IN_VBPS_IN0_Pos)              /**< (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 0 Mask */
#define ASRC_VBPS_IN_VBPS_IN0(value)          (ASRC_VBPS_IN_VBPS_IN0_Msk & ((value) << ASRC_VBPS_IN_VBPS_IN0_Pos))
#define   ASRC_VBPS_IN_VBPS_IN0_8_BIT_Val     _U_(0x0)                                             /**< (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:7] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN0_16_BIT_Val    _U_(0x1)                                             /**< (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_20_BIT_Val    _U_(0x2)                                             /**< (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_24_BIT_Val    _U_(0x3)                                             /**< (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_32_BIT_Val    _U_(0x4)                                             /**< (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_10_BIT_Val    _U_(0x5)                                             /**< (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN0_12_BIT_Val    _U_(0x6)                                             /**< (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_14_BIT_Val    _U_(0x7)                                             /**< (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_18_BIT_Val    _U_(0x8)                                             /**< (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define ASRC_VBPS_IN_VBPS_IN0_8_BIT           (ASRC_VBPS_IN_VBPS_IN0_8_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /**< (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:7] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s. Position  */
#define ASRC_VBPS_IN_VBPS_IN0_16_BIT          (ASRC_VBPS_IN_VBPS_IN0_16_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /**< (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN0_20_BIT          (ASRC_VBPS_IN_VBPS_IN0_20_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /**< (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN0_24_BIT          (ASRC_VBPS_IN_VBPS_IN0_24_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /**< (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN0_32_BIT          (ASRC_VBPS_IN_VBPS_IN0_32_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /**< (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN0_10_BIT          (ASRC_VBPS_IN_VBPS_IN0_10_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /**< (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s. Position  */
#define ASRC_VBPS_IN_VBPS_IN0_12_BIT          (ASRC_VBPS_IN_VBPS_IN0_12_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /**< (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN0_14_BIT          (ASRC_VBPS_IN_VBPS_IN0_14_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /**< (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN0_18_BIT          (ASRC_VBPS_IN_VBPS_IN0_18_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /**< (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN1_Pos             _U_(8)                                               /**< (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 1 Position */
#define ASRC_VBPS_IN_VBPS_IN1_Msk             (_U_(0xF) << ASRC_VBPS_IN_VBPS_IN1_Pos)              /**< (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 1 Mask */
#define ASRC_VBPS_IN_VBPS_IN1(value)          (ASRC_VBPS_IN_VBPS_IN1_Msk & ((value) << ASRC_VBPS_IN_VBPS_IN1_Pos))
#define   ASRC_VBPS_IN_VBPS_IN1_8_BIT_Val     _U_(0x0)                                             /**< (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:7] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN1_16_BIT_Val    _U_(0x1)                                             /**< (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_20_BIT_Val    _U_(0x2)                                             /**< (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_24_BIT_Val    _U_(0x3)                                             /**< (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_32_BIT_Val    _U_(0x4)                                             /**< (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_10_BIT_Val    _U_(0x5)                                             /**< (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN1_12_BIT_Val    _U_(0x6)                                             /**< (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_14_BIT_Val    _U_(0x7)                                             /**< (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_18_BIT_Val    _U_(0x8)                                             /**< (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define ASRC_VBPS_IN_VBPS_IN1_8_BIT           (ASRC_VBPS_IN_VBPS_IN1_8_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /**< (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:7] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s. Position  */
#define ASRC_VBPS_IN_VBPS_IN1_16_BIT          (ASRC_VBPS_IN_VBPS_IN1_16_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /**< (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN1_20_BIT          (ASRC_VBPS_IN_VBPS_IN1_20_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /**< (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN1_24_BIT          (ASRC_VBPS_IN_VBPS_IN1_24_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /**< (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN1_32_BIT          (ASRC_VBPS_IN_VBPS_IN1_32_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /**< (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN1_10_BIT          (ASRC_VBPS_IN_VBPS_IN1_10_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /**< (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s. Position  */
#define ASRC_VBPS_IN_VBPS_IN1_12_BIT          (ASRC_VBPS_IN_VBPS_IN1_12_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /**< (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN1_14_BIT          (ASRC_VBPS_IN_VBPS_IN1_14_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /**< (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN1_18_BIT          (ASRC_VBPS_IN_VBPS_IN1_18_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /**< (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN2_Pos             _U_(16)                                              /**< (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 2 Position */
#define ASRC_VBPS_IN_VBPS_IN2_Msk             (_U_(0xF) << ASRC_VBPS_IN_VBPS_IN2_Pos)              /**< (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 2 Mask */
#define ASRC_VBPS_IN_VBPS_IN2(value)          (ASRC_VBPS_IN_VBPS_IN2_Msk & ((value) << ASRC_VBPS_IN_VBPS_IN2_Pos))
#define   ASRC_VBPS_IN_VBPS_IN2_8_BIT_Val     _U_(0x0)                                             /**< (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:7] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN2_16_BIT_Val    _U_(0x1)                                             /**< (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_20_BIT_Val    _U_(0x2)                                             /**< (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_24_BIT_Val    _U_(0x3)                                             /**< (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_32_BIT_Val    _U_(0x4)                                             /**< (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_10_BIT_Val    _U_(0x5)                                             /**< (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN2_12_BIT_Val    _U_(0x6)                                             /**< (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_14_BIT_Val    _U_(0x7)                                             /**< (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_18_BIT_Val    _U_(0x8)                                             /**< (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define ASRC_VBPS_IN_VBPS_IN2_8_BIT           (ASRC_VBPS_IN_VBPS_IN2_8_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /**< (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:7] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s. Position  */
#define ASRC_VBPS_IN_VBPS_IN2_16_BIT          (ASRC_VBPS_IN_VBPS_IN2_16_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /**< (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN2_20_BIT          (ASRC_VBPS_IN_VBPS_IN2_20_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /**< (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN2_24_BIT          (ASRC_VBPS_IN_VBPS_IN2_24_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /**< (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN2_32_BIT          (ASRC_VBPS_IN_VBPS_IN2_32_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /**< (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN2_10_BIT          (ASRC_VBPS_IN_VBPS_IN2_10_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /**< (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s. Position  */
#define ASRC_VBPS_IN_VBPS_IN2_12_BIT          (ASRC_VBPS_IN_VBPS_IN2_12_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /**< (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN2_14_BIT          (ASRC_VBPS_IN_VBPS_IN2_14_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /**< (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN2_18_BIT          (ASRC_VBPS_IN_VBPS_IN2_18_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /**< (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN3_Pos             _U_(24)                                              /**< (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 3 Position */
#define ASRC_VBPS_IN_VBPS_IN3_Msk             (_U_(0xF) << ASRC_VBPS_IN_VBPS_IN3_Pos)              /**< (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 3 Mask */
#define ASRC_VBPS_IN_VBPS_IN3(value)          (ASRC_VBPS_IN_VBPS_IN3_Msk & ((value) << ASRC_VBPS_IN_VBPS_IN3_Pos))
#define   ASRC_VBPS_IN_VBPS_IN3_8_BIT_Val     _U_(0x0)                                             /**< (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:7] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN3_16_BIT_Val    _U_(0x1)                                             /**< (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_20_BIT_Val    _U_(0x2)                                             /**< (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_24_BIT_Val    _U_(0x3)                                             /**< (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_32_BIT_Val    _U_(0x4)                                             /**< (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_10_BIT_Val    _U_(0x5)                                             /**< (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN3_12_BIT_Val    _U_(0x6)                                             /**< (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_14_BIT_Val    _U_(0x7)                                             /**< (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_18_BIT_Val    _U_(0x8)                                             /**< (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define ASRC_VBPS_IN_VBPS_IN3_8_BIT           (ASRC_VBPS_IN_VBPS_IN3_8_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /**< (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:7] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s. Position  */
#define ASRC_VBPS_IN_VBPS_IN3_16_BIT          (ASRC_VBPS_IN_VBPS_IN3_16_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /**< (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN3_20_BIT          (ASRC_VBPS_IN_VBPS_IN3_20_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /**< (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN3_24_BIT          (ASRC_VBPS_IN_VBPS_IN3_24_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /**< (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN3_32_BIT          (ASRC_VBPS_IN_VBPS_IN3_32_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /**< (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN3_10_BIT          (ASRC_VBPS_IN_VBPS_IN3_10_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /**< (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s. Position  */
#define ASRC_VBPS_IN_VBPS_IN3_12_BIT          (ASRC_VBPS_IN_VBPS_IN3_12_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /**< (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN3_14_BIT          (ASRC_VBPS_IN_VBPS_IN3_14_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /**< (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_VBPS_IN3_18_BIT          (ASRC_VBPS_IN_VBPS_IN3_18_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /**< (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP. Position  */
#define ASRC_VBPS_IN_Msk                      _U_(0x0F0F0F0F)                                      /**< (ASRC_VBPS_IN) Register Mask  */


/* -------- ASRC_VBPS_OUT : (ASRC Offset: 0x1C) (R/W 32) Valid Bit Per Sample Out Register -------- */
#define ASRC_VBPS_OUT_RESETVALUE              _U_(0x00)                                            /**<  (ASRC_VBPS_OUT) Valid Bit Per Sample Out Register  Reset Value */

#define ASRC_VBPS_OUT_VBPS_OUT0_Pos           _U_(0)                                               /**< (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 0 Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_Msk           (_U_(0xF) << ASRC_VBPS_OUT_VBPS_OUT0_Pos)            /**< (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 0 Mask */
#define ASRC_VBPS_OUT_VBPS_OUT0(value)        (ASRC_VBPS_OUT_VBPS_OUT0_Msk & ((value) << ASRC_VBPS_OUT_VBPS_OUT0_Pos))
#define   ASRC_VBPS_OUT_VBPS_OUT0_8_BIT_Val   _U_(0x0)                                             /**< (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_16_BIT_Val  _U_(0x1)                                             /**< (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_20_BIT_Val  _U_(0x2)                                             /**< (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_24_BIT_Val  _U_(0x3)                                             /**< (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_32_BIT_Val  _U_(0x4)                                             /**< (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [23:17] of the DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_10_BIT_Val  _U_(0x5)                                             /**< (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_12_BIT_Val  _U_(0x6)                                             /**< (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_14_BIT_Val  _U_(0x7)                                             /**< (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_18_BIT_Val  _U_(0x8)                                             /**< (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define ASRC_VBPS_OUT_VBPS_OUT0_8_BIT         (ASRC_VBPS_OUT_VBPS_OUT0_8_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /**< (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT0_16_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_16_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /**< (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT0_20_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_20_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /**< (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT0_24_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_24_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /**< (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT0_32_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_32_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /**< (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [23:17] of the DSP output. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT0_10_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_10_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /**< (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT0_12_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_12_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /**< (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT0_14_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_14_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /**< (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT0_18_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_18_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /**< (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT1_Pos           _U_(8)                                               /**< (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 1 Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_Msk           (_U_(0xF) << ASRC_VBPS_OUT_VBPS_OUT1_Pos)            /**< (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 1 Mask */
#define ASRC_VBPS_OUT_VBPS_OUT1(value)        (ASRC_VBPS_OUT_VBPS_OUT1_Msk & ((value) << ASRC_VBPS_OUT_VBPS_OUT1_Pos))
#define   ASRC_VBPS_OUT_VBPS_OUT1_8_BIT_Val   _U_(0x0)                                             /**< (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_16_BIT_Val  _U_(0x1)                                             /**< (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_20_BIT_Val  _U_(0x2)                                             /**< (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_24_BIT_Val  _U_(0x3)                                             /**< (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_32_BIT_Val  _U_(0x4)                                             /**< (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [23:17] of the DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_10_BIT_Val  _U_(0x5)                                             /**< (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_12_BIT_Val  _U_(0x6)                                             /**< (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_14_BIT_Val  _U_(0x7)                                             /**< (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_18_BIT_Val  _U_(0x8)                                             /**< (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define ASRC_VBPS_OUT_VBPS_OUT1_8_BIT         (ASRC_VBPS_OUT_VBPS_OUT1_8_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /**< (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT1_16_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_16_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /**< (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT1_20_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_20_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /**< (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT1_24_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_24_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /**< (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT1_32_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_32_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /**< (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [23:17] of the DSP output. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT1_10_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_10_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /**< (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT1_12_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_12_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /**< (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT1_14_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_14_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /**< (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT1_18_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_18_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /**< (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT2_Pos           _U_(16)                                              /**< (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 2 Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_Msk           (_U_(0xF) << ASRC_VBPS_OUT_VBPS_OUT2_Pos)            /**< (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 2 Mask */
#define ASRC_VBPS_OUT_VBPS_OUT2(value)        (ASRC_VBPS_OUT_VBPS_OUT2_Msk & ((value) << ASRC_VBPS_OUT_VBPS_OUT2_Pos))
#define   ASRC_VBPS_OUT_VBPS_OUT2_8_BIT_Val   _U_(0x0)                                             /**< (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_16_BIT_Val  _U_(0x1)                                             /**< (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_20_BIT_Val  _U_(0x2)                                             /**< (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_24_BIT_Val  _U_(0x3)                                             /**< (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_32_BIT_Val  _U_(0x4)                                             /**< (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [23:17] of the DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_10_BIT_Val  _U_(0x5)                                             /**< (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_12_BIT_Val  _U_(0x6)                                             /**< (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_14_BIT_Val  _U_(0x7)                                             /**< (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_18_BIT_Val  _U_(0x8)                                             /**< (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define ASRC_VBPS_OUT_VBPS_OUT2_8_BIT         (ASRC_VBPS_OUT_VBPS_OUT2_8_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /**< (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT2_16_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_16_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /**< (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT2_20_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_20_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /**< (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT2_24_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_24_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /**< (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT2_32_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_32_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /**< (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [23:17] of the DSP output. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT2_10_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_10_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /**< (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT2_12_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_12_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /**< (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT2_14_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_14_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /**< (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT2_18_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_18_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /**< (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT3_Pos           _U_(24)                                              /**< (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 3 Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_Msk           (_U_(0xF) << ASRC_VBPS_OUT_VBPS_OUT3_Pos)            /**< (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 3 Mask */
#define ASRC_VBPS_OUT_VBPS_OUT3(value)        (ASRC_VBPS_OUT_VBPS_OUT3_Msk & ((value) << ASRC_VBPS_OUT_VBPS_OUT3_Pos))
#define   ASRC_VBPS_OUT_VBPS_OUT3_8_BIT_Val   _U_(0x0)                                             /**< (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_16_BIT_Val  _U_(0x1)                                             /**< (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_20_BIT_Val  _U_(0x2)                                             /**< (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_24_BIT_Val  _U_(0x3)                                             /**< (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_32_BIT_Val  _U_(0x4)                                             /**< (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [23:17] of the DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_10_BIT_Val  _U_(0x5)                                             /**< (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_12_BIT_Val  _U_(0x6)                                             /**< (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_14_BIT_Val  _U_(0x7)                                             /**< (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_18_BIT_Val  _U_(0x8)                                             /**< (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define ASRC_VBPS_OUT_VBPS_OUT3_8_BIT         (ASRC_VBPS_OUT_VBPS_OUT3_8_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /**< (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT3_16_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_16_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /**< (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT3_20_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_20_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /**< (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT3_24_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_24_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /**< (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT3_32_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_32_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /**< (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [23:17] of the DSP output. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT3_10_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_10_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /**< (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT3_12_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_12_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /**< (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT3_14_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_14_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /**< (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_VBPS_OUT3_18_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_18_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /**< (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position  */
#define ASRC_VBPS_OUT_Msk                     _U_(0x0F0F0F0F)                                      /**< (ASRC_VBPS_OUT) Register Mask  */


/* -------- ASRC_CH_CONF : (ASRC Offset: 0x20) (R/W 32) Channel Configuration Register -------- */
#define ASRC_CH_CONF_RESETVALUE               _U_(0x00)                                            /**<  (ASRC_CH_CONF) Channel Configuration Register  Reset Value */

#define ASRC_CH_CONF_THROPMODE_Pos            _U_(0)                                               /**< (ASRC_CH_CONF) Transmit Holding Registers Operating Mode Position */
#define ASRC_CH_CONF_THROPMODE_Msk            (_U_(0x7) << ASRC_CH_CONF_THROPMODE_Pos)             /**< (ASRC_CH_CONF) Transmit Holding Registers Operating Mode Mask */
#define ASRC_CH_CONF_THROPMODE(value)         (ASRC_CH_CONF_THROPMODE_Msk & ((value) << ASRC_CH_CONF_THROPMODE_Pos))
#define   ASRC_CH_CONF_THROPMODE_THRX_UPTO_2CH_Val _U_(0x0)                                             /**< (ASRC_CH_CONF) The ASRC_THRx can receive up to 2 audio streams (e.g. 1 stereo channel for each ASRC_THR). Each ASRC_THRx is routed on each Stereo DSP x.  */
#define   ASRC_CH_CONF_THROPMODE_THR0_UPTO_4CH_Val _U_(0x1)                                             /**< (ASRC_CH_CONF) The ASRC_THR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR0). The ARSC_THR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR1). The ARSC_THR2 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR2). ASRC_THR3 must not be used.  */
#define   ASRC_CH_CONF_THROPMODE_THR01_UPTO_4CH_Val _U_(0x2)                                             /**< (ASRC_CH_CONF) The ASRC_THR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR0). The ASRC_THR1 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR1). ASRC_THR2 and ASRC_THR3 must not be used.  */
#define   ASRC_CH_CONF_THROPMODE_THR0_UPTO_6CH_Val _U_(0x3)                                             /**< (ASRC_CH_CONF) The ASRC_THR0 can receive up to 6 audio streams (e.g. up to 3 stereo channels on ASRC_THR0). The ARSC_THR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR1) ASRC_THR2 and ASRC_THR3 must not be used.  */
#define   ASRC_CH_CONF_THROPMODE_THR0_UPTO_8CH_Val _U_(0x4)                                             /**< (ASRC_CH_CONF) The ASRC_THR0 can receive up to 8 audio streams (e.g. up to 4 stereo channels on ASRC_THR0). ASRC_THR1,ASRC_THR2 and ASRC_RHR3 must not be used.  */
#define ASRC_CH_CONF_THROPMODE_THRX_UPTO_2CH  (ASRC_CH_CONF_THROPMODE_THRX_UPTO_2CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_THRx can receive up to 2 audio streams (e.g. 1 stereo channel for each ASRC_THR). Each ASRC_THRx is routed on each Stereo DSP x. Position  */
#define ASRC_CH_CONF_THROPMODE_THR0_UPTO_4CH  (ASRC_CH_CONF_THROPMODE_THR0_UPTO_4CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_THR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR0). The ARSC_THR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR1). The ARSC_THR2 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR2). ASRC_THR3 must not be used. Position  */
#define ASRC_CH_CONF_THROPMODE_THR01_UPTO_4CH (ASRC_CH_CONF_THROPMODE_THR01_UPTO_4CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_THR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR0). The ASRC_THR1 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR1). ASRC_THR2 and ASRC_THR3 must not be used. Position  */
#define ASRC_CH_CONF_THROPMODE_THR0_UPTO_6CH  (ASRC_CH_CONF_THROPMODE_THR0_UPTO_6CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_THR0 can receive up to 6 audio streams (e.g. up to 3 stereo channels on ASRC_THR0). The ARSC_THR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR1) ASRC_THR2 and ASRC_THR3 must not be used. Position  */
#define ASRC_CH_CONF_THROPMODE_THR0_UPTO_8CH  (ASRC_CH_CONF_THROPMODE_THR0_UPTO_8CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_THR0 can receive up to 8 audio streams (e.g. up to 4 stereo channels on ASRC_THR0). ASRC_THR1,ASRC_THR2 and ASRC_RHR3 must not be used. Position  */
#define ASRC_CH_CONF_RHROPMODE_Pos            _U_(4)                                               /**< (ASRC_CH_CONF) Receive Holding Registers Operating Mode Position */
#define ASRC_CH_CONF_RHROPMODE_Msk            (_U_(0x7) << ASRC_CH_CONF_RHROPMODE_Pos)             /**< (ASRC_CH_CONF) Receive Holding Registers Operating Mode Mask */
#define ASRC_CH_CONF_RHROPMODE(value)         (ASRC_CH_CONF_RHROPMODE_Msk & ((value) << ASRC_CH_CONF_RHROPMODE_Pos))
#define   ASRC_CH_CONF_RHROPMODE_RHRX_UPTO_2CH_Val _U_(0x0)                                             /**< (ASRC_CH_CONF) The ASRC_RHRx can receive up to 2 audio streams (e.g. 1 stereo channel for each ASRC_RHR). Each ASRC_RHRx is routed on each Stereo DSP x.  */
#define   ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_4CH_Val _U_(0x1)                                             /**< (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR0). The ARSC_RHR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR1). The ARSC_RHR2 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR2). ASRC_RHR3 must not be used.  */
#define   ASRC_CH_CONF_RHROPMODE_RHR01_UPTO_4CH_Val _U_(0x2)                                             /**< (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR0). The ASRC_RHR1 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR1). ASRC_RHR2 and ASRC_RHR3 must not be used.  */
#define   ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_6CH_Val _U_(0x3)                                             /**< (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 6 audio streams (e.g. up to 3 stereo channels on ASRC_RHR0). The ARSC_RHR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR1) ASRC_RHR2 and ASRC_RHR3 must not be used.  */
#define   ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_8CH_Val _U_(0x4)                                             /**< (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 8 audio streams (e.g. up to 4 stereo channels on ASRC_RHR0). ASRC_RHR1,ASRC_RHR2 and ASRC_RHR3 must not be used.  */
#define ASRC_CH_CONF_RHROPMODE_RHRX_UPTO_2CH  (ASRC_CH_CONF_RHROPMODE_RHRX_UPTO_2CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_RHRx can receive up to 2 audio streams (e.g. 1 stereo channel for each ASRC_RHR). Each ASRC_RHRx is routed on each Stereo DSP x. Position  */
#define ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_4CH  (ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_4CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR0). The ARSC_RHR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR1). The ARSC_RHR2 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR2). ASRC_RHR3 must not be used. Position  */
#define ASRC_CH_CONF_RHROPMODE_RHR01_UPTO_4CH (ASRC_CH_CONF_RHROPMODE_RHR01_UPTO_4CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR0). The ASRC_RHR1 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR1). ASRC_RHR2 and ASRC_RHR3 must not be used. Position  */
#define ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_6CH  (ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_6CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 6 audio streams (e.g. up to 3 stereo channels on ASRC_RHR0). The ARSC_RHR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR1) ASRC_RHR2 and ASRC_RHR3 must not be used. Position  */
#define ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_8CH  (ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_8CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /**< (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 8 audio streams (e.g. up to 4 stereo channels on ASRC_RHR0). ASRC_RHR1,ASRC_RHR2 and ASRC_RHR3 must not be used. Position  */
#define ASRC_CH_CONF_MONO0_Pos                _U_(8)                                               /**< (ASRC_CH_CONF) DSP 0 Mono Operating Mode Position */
#define ASRC_CH_CONF_MONO0_Msk                (_U_(0x1) << ASRC_CH_CONF_MONO0_Pos)                 /**< (ASRC_CH_CONF) DSP 0 Mono Operating Mode Mask */
#define ASRC_CH_CONF_MONO0(value)             (ASRC_CH_CONF_MONO0_Msk & ((value) << ASRC_CH_CONF_MONO0_Pos))
#define   ASRC_CH_CONF_MONO0_DISABLED_Val     _U_(0x0)                                             /**< (ASRC_CH_CONF) DSP operates in Stereo mode.  */
#define   ASRC_CH_CONF_MONO0_ENABLED_Val      _U_(0x1)                                             /**< (ASRC_CH_CONF) DSP operates in Mono mode.  */
#define ASRC_CH_CONF_MONO0_DISABLED           (ASRC_CH_CONF_MONO0_DISABLED_Val << ASRC_CH_CONF_MONO0_Pos) /**< (ASRC_CH_CONF) DSP operates in Stereo mode. Position  */
#define ASRC_CH_CONF_MONO0_ENABLED            (ASRC_CH_CONF_MONO0_ENABLED_Val << ASRC_CH_CONF_MONO0_Pos) /**< (ASRC_CH_CONF) DSP operates in Mono mode. Position  */
#define ASRC_CH_CONF_MONO1_Pos                _U_(9)                                               /**< (ASRC_CH_CONF) DSP 1 Mono Operating Mode Position */
#define ASRC_CH_CONF_MONO1_Msk                (_U_(0x1) << ASRC_CH_CONF_MONO1_Pos)                 /**< (ASRC_CH_CONF) DSP 1 Mono Operating Mode Mask */
#define ASRC_CH_CONF_MONO1(value)             (ASRC_CH_CONF_MONO1_Msk & ((value) << ASRC_CH_CONF_MONO1_Pos))
#define   ASRC_CH_CONF_MONO1_DISABLED_Val     _U_(0x0)                                             /**< (ASRC_CH_CONF) DSP operates in Stereo mode.  */
#define   ASRC_CH_CONF_MONO1_ENABLED_Val      _U_(0x1)                                             /**< (ASRC_CH_CONF) DSP operates in Mono mode.  */
#define ASRC_CH_CONF_MONO1_DISABLED           (ASRC_CH_CONF_MONO1_DISABLED_Val << ASRC_CH_CONF_MONO1_Pos) /**< (ASRC_CH_CONF) DSP operates in Stereo mode. Position  */
#define ASRC_CH_CONF_MONO1_ENABLED            (ASRC_CH_CONF_MONO1_ENABLED_Val << ASRC_CH_CONF_MONO1_Pos) /**< (ASRC_CH_CONF) DSP operates in Mono mode. Position  */
#define ASRC_CH_CONF_MONO2_Pos                _U_(10)                                              /**< (ASRC_CH_CONF) DSP 2 Mono Operating Mode Position */
#define ASRC_CH_CONF_MONO2_Msk                (_U_(0x1) << ASRC_CH_CONF_MONO2_Pos)                 /**< (ASRC_CH_CONF) DSP 2 Mono Operating Mode Mask */
#define ASRC_CH_CONF_MONO2(value)             (ASRC_CH_CONF_MONO2_Msk & ((value) << ASRC_CH_CONF_MONO2_Pos))
#define   ASRC_CH_CONF_MONO2_DISABLED_Val     _U_(0x0)                                             /**< (ASRC_CH_CONF) DSP operates in Stereo mode.  */
#define   ASRC_CH_CONF_MONO2_ENABLED_Val      _U_(0x1)                                             /**< (ASRC_CH_CONF) DSP operates in Mono mode.  */
#define ASRC_CH_CONF_MONO2_DISABLED           (ASRC_CH_CONF_MONO2_DISABLED_Val << ASRC_CH_CONF_MONO2_Pos) /**< (ASRC_CH_CONF) DSP operates in Stereo mode. Position  */
#define ASRC_CH_CONF_MONO2_ENABLED            (ASRC_CH_CONF_MONO2_ENABLED_Val << ASRC_CH_CONF_MONO2_Pos) /**< (ASRC_CH_CONF) DSP operates in Mono mode. Position  */
#define ASRC_CH_CONF_MONO3_Pos                _U_(11)                                              /**< (ASRC_CH_CONF) DSP 3 Mono Operating Mode Position */
#define ASRC_CH_CONF_MONO3_Msk                (_U_(0x1) << ASRC_CH_CONF_MONO3_Pos)                 /**< (ASRC_CH_CONF) DSP 3 Mono Operating Mode Mask */
#define ASRC_CH_CONF_MONO3(value)             (ASRC_CH_CONF_MONO3_Msk & ((value) << ASRC_CH_CONF_MONO3_Pos))
#define   ASRC_CH_CONF_MONO3_DISABLED_Val     _U_(0x0)                                             /**< (ASRC_CH_CONF) DSP operates in Stereo mode.  */
#define   ASRC_CH_CONF_MONO3_ENABLED_Val      _U_(0x1)                                             /**< (ASRC_CH_CONF) DSP operates in Mono mode.  */
#define ASRC_CH_CONF_MONO3_DISABLED           (ASRC_CH_CONF_MONO3_DISABLED_Val << ASRC_CH_CONF_MONO3_Pos) /**< (ASRC_CH_CONF) DSP operates in Stereo mode. Position  */
#define ASRC_CH_CONF_MONO3_ENABLED            (ASRC_CH_CONF_MONO3_ENABLED_Val << ASRC_CH_CONF_MONO3_Pos) /**< (ASRC_CH_CONF) DSP operates in Mono mode. Position  */
#define ASRC_CH_CONF_CHUNK0_Pos               _U_(16)                                              /**< (ASRC_CH_CONF) DMA DSP 0 CHUNK Size Position */
#define ASRC_CH_CONF_CHUNK0_Msk               (_U_(0x7) << ASRC_CH_CONF_CHUNK0_Pos)                /**< (ASRC_CH_CONF) DMA DSP 0 CHUNK Size Mask */
#define ASRC_CH_CONF_CHUNK0(value)            (ASRC_CH_CONF_CHUNK0_Msk & ((value) << ASRC_CH_CONF_CHUNK0_Pos))
#define   ASRC_CH_CONF_CHUNK0_1_DATA_Val      _U_(0x0)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK0_2_DATA_Val      _U_(0x1)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK0_4_DATA_Val      _U_(0x2)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK0_8_DATA_Val      _U_(0x3)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK0_16_DATA_Val     _U_(0x4)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event.  */
#define ASRC_CH_CONF_CHUNK0_1_DATA            (ASRC_CH_CONF_CHUNK0_1_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK0_2_DATA            (ASRC_CH_CONF_CHUNK0_2_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK0_4_DATA            (ASRC_CH_CONF_CHUNK0_4_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK0_8_DATA            (ASRC_CH_CONF_CHUNK0_8_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK0_16_DATA           (ASRC_CH_CONF_CHUNK0_16_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK1_Pos               _U_(20)                                              /**< (ASRC_CH_CONF) DMA DSP 1 CHUNK Size Position */
#define ASRC_CH_CONF_CHUNK1_Msk               (_U_(0x7) << ASRC_CH_CONF_CHUNK1_Pos)                /**< (ASRC_CH_CONF) DMA DSP 1 CHUNK Size Mask */
#define ASRC_CH_CONF_CHUNK1(value)            (ASRC_CH_CONF_CHUNK1_Msk & ((value) << ASRC_CH_CONF_CHUNK1_Pos))
#define   ASRC_CH_CONF_CHUNK1_1_DATA_Val      _U_(0x0)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK1_2_DATA_Val      _U_(0x1)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK1_4_DATA_Val      _U_(0x2)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK1_8_DATA_Val      _U_(0x3)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK1_16_DATA_Val     _U_(0x4)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event.  */
#define ASRC_CH_CONF_CHUNK1_1_DATA            (ASRC_CH_CONF_CHUNK1_1_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK1_2_DATA            (ASRC_CH_CONF_CHUNK1_2_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK1_4_DATA            (ASRC_CH_CONF_CHUNK1_4_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK1_8_DATA            (ASRC_CH_CONF_CHUNK1_8_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK1_16_DATA           (ASRC_CH_CONF_CHUNK1_16_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK2_Pos               _U_(24)                                              /**< (ASRC_CH_CONF) DMA DSP 2 CHUNK Size Position */
#define ASRC_CH_CONF_CHUNK2_Msk               (_U_(0x7) << ASRC_CH_CONF_CHUNK2_Pos)                /**< (ASRC_CH_CONF) DMA DSP 2 CHUNK Size Mask */
#define ASRC_CH_CONF_CHUNK2(value)            (ASRC_CH_CONF_CHUNK2_Msk & ((value) << ASRC_CH_CONF_CHUNK2_Pos))
#define   ASRC_CH_CONF_CHUNK2_1_DATA_Val      _U_(0x0)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK2_2_DATA_Val      _U_(0x1)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK2_4_DATA_Val      _U_(0x2)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK2_8_DATA_Val      _U_(0x3)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK2_16_DATA_Val     _U_(0x4)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event.  */
#define ASRC_CH_CONF_CHUNK2_1_DATA            (ASRC_CH_CONF_CHUNK2_1_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK2_2_DATA            (ASRC_CH_CONF_CHUNK2_2_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK2_4_DATA            (ASRC_CH_CONF_CHUNK2_4_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK2_8_DATA            (ASRC_CH_CONF_CHUNK2_8_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK2_16_DATA           (ASRC_CH_CONF_CHUNK2_16_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK3_Pos               _U_(28)                                              /**< (ASRC_CH_CONF) DMA DSP 3 CHUNK Size Position */
#define ASRC_CH_CONF_CHUNK3_Msk               (_U_(0x7) << ASRC_CH_CONF_CHUNK3_Pos)                /**< (ASRC_CH_CONF) DMA DSP 3 CHUNK Size Mask */
#define ASRC_CH_CONF_CHUNK3(value)            (ASRC_CH_CONF_CHUNK3_Msk & ((value) << ASRC_CH_CONF_CHUNK3_Pos))
#define   ASRC_CH_CONF_CHUNK3_1_DATA_Val      _U_(0x0)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK3_2_DATA_Val      _U_(0x1)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK3_4_DATA_Val      _U_(0x2)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK3_8_DATA_Val      _U_(0x3)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK3_16_DATA_Val     _U_(0x4)                                             /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event.  */
#define ASRC_CH_CONF_CHUNK3_1_DATA            (ASRC_CH_CONF_CHUNK3_1_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK3_2_DATA            (ASRC_CH_CONF_CHUNK3_2_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK3_4_DATA            (ASRC_CH_CONF_CHUNK3_4_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK3_8_DATA            (ASRC_CH_CONF_CHUNK3_8_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_CHUNK3_16_DATA           (ASRC_CH_CONF_CHUNK3_16_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /**< (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event. Position  */
#define ASRC_CH_CONF_Msk                      _U_(0x77770F77)                                      /**< (ASRC_CH_CONF) Register Mask  */

#define ASRC_CH_CONF_MONO_Pos                 _U_(8)                                               /**< (ASRC_CH_CONF Position) DSP x Mono Operating Mode */
#define ASRC_CH_CONF_MONO_Msk                 (_U_(0xF) << ASRC_CH_CONF_MONO_Pos)                  /**< (ASRC_CH_CONF Mask) MONO */
#define ASRC_CH_CONF_MONO(value)              (ASRC_CH_CONF_MONO_Msk & ((value) << ASRC_CH_CONF_MONO_Pos)) 

/* -------- ASRC_TRIG : (ASRC Offset: 0x24) (R/W 32) Trigger Selection Register -------- */
#define ASRC_TRIG_RESETVALUE                  _U_(0x00)                                            /**<  (ASRC_TRIG) Trigger Selection Register  Reset Value */

#define ASRC_TRIG_TRIGSELIN0_Pos              _U_(0)                                               /**< (ASRC_TRIG) Input Trigger Source Selection of Channel 0 Position */
#define ASRC_TRIG_TRIGSELIN0_Msk              (_U_(0xF) << ASRC_TRIG_TRIGSELIN0_Pos)               /**< (ASRC_TRIG) Input Trigger Source Selection of Channel 0 Mask */
#define ASRC_TRIG_TRIGSELIN0(value)           (ASRC_TRIG_TRIGSELIN0_Msk & ((value) << ASRC_TRIG_TRIGSELIN0_Pos))
#define   ASRC_TRIG_TRIGSELIN0_GCLKDIV_Val    _U_(0x0)                                             /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELIN0_I2SMCC0_ws_Val _U_(0x1)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_I2SMCC1_ws_Val _U_(0x2)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_PDMC0_data_synchro_Val _U_(0x3)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_PDMC1_data_synchro_Val _U_(0x4)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_SSC0_RF_Val    _U_(0x5)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_SSC0_TF_Val    _U_(0x6)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_SSC1_RF_Val    _U_(0x7)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELIN0_GCLKDIV          (ASRC_TRIG_TRIGSELIN0_GCLKDIV_Val << ASRC_TRIG_TRIGSELIN0_Pos) /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position  */
#define ASRC_TRIG_TRIGSELIN0_I2SMCC0_ws       (ASRC_TRIG_TRIGSELIN0_I2SMCC0_ws_Val << ASRC_TRIG_TRIGSELIN0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN0_I2SMCC1_ws       (ASRC_TRIG_TRIGSELIN0_I2SMCC1_ws_Val << ASRC_TRIG_TRIGSELIN0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN0_PDMC0_data_synchro (ASRC_TRIG_TRIGSELIN0_PDMC0_data_synchro_Val << ASRC_TRIG_TRIGSELIN0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN0_PDMC1_data_synchro (ASRC_TRIG_TRIGSELIN0_PDMC1_data_synchro_Val << ASRC_TRIG_TRIGSELIN0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN0_SSC0_RF          (ASRC_TRIG_TRIGSELIN0_SSC0_RF_Val << ASRC_TRIG_TRIGSELIN0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN0_SSC0_TF          (ASRC_TRIG_TRIGSELIN0_SSC0_TF_Val << ASRC_TRIG_TRIGSELIN0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN0_SSC1_RF          (ASRC_TRIG_TRIGSELIN0_SSC1_RF_Val << ASRC_TRIG_TRIGSELIN0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN1_Pos              _U_(4)                                               /**< (ASRC_TRIG) Input Trigger Source Selection of Channel 1 Position */
#define ASRC_TRIG_TRIGSELIN1_Msk              (_U_(0xF) << ASRC_TRIG_TRIGSELIN1_Pos)               /**< (ASRC_TRIG) Input Trigger Source Selection of Channel 1 Mask */
#define ASRC_TRIG_TRIGSELIN1(value)           (ASRC_TRIG_TRIGSELIN1_Msk & ((value) << ASRC_TRIG_TRIGSELIN1_Pos))
#define   ASRC_TRIG_TRIGSELIN1_GCLKDIV_Val    _U_(0x0)                                             /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELIN1_I2SMCC0_ws_Val _U_(0x1)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_I2SMCC1_ws_Val _U_(0x2)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_PDMC0_data_synchro_Val _U_(0x3)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_PDMC1_data_synchro_Val _U_(0x4)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_SSC0_RF_Val    _U_(0x5)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_SSC0_TF_Val    _U_(0x6)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_SSC1_RF_Val    _U_(0x7)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELIN1_GCLKDIV          (ASRC_TRIG_TRIGSELIN1_GCLKDIV_Val << ASRC_TRIG_TRIGSELIN1_Pos) /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position  */
#define ASRC_TRIG_TRIGSELIN1_I2SMCC0_ws       (ASRC_TRIG_TRIGSELIN1_I2SMCC0_ws_Val << ASRC_TRIG_TRIGSELIN1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN1_I2SMCC1_ws       (ASRC_TRIG_TRIGSELIN1_I2SMCC1_ws_Val << ASRC_TRIG_TRIGSELIN1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN1_PDMC0_data_synchro (ASRC_TRIG_TRIGSELIN1_PDMC0_data_synchro_Val << ASRC_TRIG_TRIGSELIN1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN1_PDMC1_data_synchro (ASRC_TRIG_TRIGSELIN1_PDMC1_data_synchro_Val << ASRC_TRIG_TRIGSELIN1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN1_SSC0_RF          (ASRC_TRIG_TRIGSELIN1_SSC0_RF_Val << ASRC_TRIG_TRIGSELIN1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN1_SSC0_TF          (ASRC_TRIG_TRIGSELIN1_SSC0_TF_Val << ASRC_TRIG_TRIGSELIN1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN1_SSC1_RF          (ASRC_TRIG_TRIGSELIN1_SSC1_RF_Val << ASRC_TRIG_TRIGSELIN1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN2_Pos              _U_(8)                                               /**< (ASRC_TRIG) Input Trigger Source Selection of Channel 2 Position */
#define ASRC_TRIG_TRIGSELIN2_Msk              (_U_(0xF) << ASRC_TRIG_TRIGSELIN2_Pos)               /**< (ASRC_TRIG) Input Trigger Source Selection of Channel 2 Mask */
#define ASRC_TRIG_TRIGSELIN2(value)           (ASRC_TRIG_TRIGSELIN2_Msk & ((value) << ASRC_TRIG_TRIGSELIN2_Pos))
#define   ASRC_TRIG_TRIGSELIN2_GCLKDIV_Val    _U_(0x0)                                             /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELIN2_I2SMCC0_ws_Val _U_(0x1)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_I2SMCC1_ws_Val _U_(0x2)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_PDMC0_data_synchro_Val _U_(0x3)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_PDMC1_data_synchro_Val _U_(0x4)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_SSC0_RF_Val    _U_(0x5)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_SSC0_TF_Val    _U_(0x6)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_SSC1_RF_Val    _U_(0x7)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELIN2_GCLKDIV          (ASRC_TRIG_TRIGSELIN2_GCLKDIV_Val << ASRC_TRIG_TRIGSELIN2_Pos) /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position  */
#define ASRC_TRIG_TRIGSELIN2_I2SMCC0_ws       (ASRC_TRIG_TRIGSELIN2_I2SMCC0_ws_Val << ASRC_TRIG_TRIGSELIN2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN2_I2SMCC1_ws       (ASRC_TRIG_TRIGSELIN2_I2SMCC1_ws_Val << ASRC_TRIG_TRIGSELIN2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN2_PDMC0_data_synchro (ASRC_TRIG_TRIGSELIN2_PDMC0_data_synchro_Val << ASRC_TRIG_TRIGSELIN2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN2_PDMC1_data_synchro (ASRC_TRIG_TRIGSELIN2_PDMC1_data_synchro_Val << ASRC_TRIG_TRIGSELIN2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN2_SSC0_RF          (ASRC_TRIG_TRIGSELIN2_SSC0_RF_Val << ASRC_TRIG_TRIGSELIN2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN2_SSC0_TF          (ASRC_TRIG_TRIGSELIN2_SSC0_TF_Val << ASRC_TRIG_TRIGSELIN2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN2_SSC1_RF          (ASRC_TRIG_TRIGSELIN2_SSC1_RF_Val << ASRC_TRIG_TRIGSELIN2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN3_Pos              _U_(12)                                              /**< (ASRC_TRIG) Input Trigger Source Selection of Channel 3 Position */
#define ASRC_TRIG_TRIGSELIN3_Msk              (_U_(0xF) << ASRC_TRIG_TRIGSELIN3_Pos)               /**< (ASRC_TRIG) Input Trigger Source Selection of Channel 3 Mask */
#define ASRC_TRIG_TRIGSELIN3(value)           (ASRC_TRIG_TRIGSELIN3_Msk & ((value) << ASRC_TRIG_TRIGSELIN3_Pos))
#define   ASRC_TRIG_TRIGSELIN3_GCLKDIV_Val    _U_(0x0)                                             /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELIN3_I2SMCC0_ws_Val _U_(0x1)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_I2SMCC1_ws_Val _U_(0x2)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_PDMC0_data_synchro_Val _U_(0x3)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_PDMC1_data_synchro_Val _U_(0x4)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_SSC0_RF_Val    _U_(0x5)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_SSC0_TF_Val    _U_(0x6)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_SSC1_RF_Val    _U_(0x7)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELIN3_GCLKDIV          (ASRC_TRIG_TRIGSELIN3_GCLKDIV_Val << ASRC_TRIG_TRIGSELIN3_Pos) /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position  */
#define ASRC_TRIG_TRIGSELIN3_I2SMCC0_ws       (ASRC_TRIG_TRIGSELIN3_I2SMCC0_ws_Val << ASRC_TRIG_TRIGSELIN3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN3_I2SMCC1_ws       (ASRC_TRIG_TRIGSELIN3_I2SMCC1_ws_Val << ASRC_TRIG_TRIGSELIN3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN3_PDMC0_data_synchro (ASRC_TRIG_TRIGSELIN3_PDMC0_data_synchro_Val << ASRC_TRIG_TRIGSELIN3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN3_PDMC1_data_synchro (ASRC_TRIG_TRIGSELIN3_PDMC1_data_synchro_Val << ASRC_TRIG_TRIGSELIN3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN3_SSC0_RF          (ASRC_TRIG_TRIGSELIN3_SSC0_RF_Val << ASRC_TRIG_TRIGSELIN3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN3_SSC0_TF          (ASRC_TRIG_TRIGSELIN3_SSC0_TF_Val << ASRC_TRIG_TRIGSELIN3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELIN3_SSC1_RF          (ASRC_TRIG_TRIGSELIN3_SSC1_RF_Val << ASRC_TRIG_TRIGSELIN3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT0_Pos             _U_(16)                                              /**< (ASRC_TRIG) Output Trigger Source Selection of Channel 0 Position */
#define ASRC_TRIG_TRIGSELOUT0_Msk             (_U_(0xF) << ASRC_TRIG_TRIGSELOUT0_Pos)              /**< (ASRC_TRIG) Output Trigger Source Selection of Channel 0 Mask */
#define ASRC_TRIG_TRIGSELOUT0(value)          (ASRC_TRIG_TRIGSELOUT0_Msk & ((value) << ASRC_TRIG_TRIGSELOUT0_Pos))
#define   ASRC_TRIG_TRIGSELOUT0_GCLKDIV_Val   _U_(0x0)                                             /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELOUT0_I2SMCC0_ws_Val _U_(0x1)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_I2SMCC1_ws_Val _U_(0x2)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_PDMC0_data_synchro_Val _U_(0x3)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_PDMC1_data_synchro_Val _U_(0x4)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_SSC0_RF_Val   _U_(0x5)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_SSC0_TF_Val   _U_(0x6)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_SSC1_RF_Val   _U_(0x7)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELOUT0_GCLKDIV         (ASRC_TRIG_TRIGSELOUT0_GCLKDIV_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position  */
#define ASRC_TRIG_TRIGSELOUT0_I2SMCC0_ws      (ASRC_TRIG_TRIGSELOUT0_I2SMCC0_ws_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT0_I2SMCC1_ws      (ASRC_TRIG_TRIGSELOUT0_I2SMCC1_ws_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT0_PDMC0_data_synchro (ASRC_TRIG_TRIGSELOUT0_PDMC0_data_synchro_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT0_PDMC1_data_synchro (ASRC_TRIG_TRIGSELOUT0_PDMC1_data_synchro_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT0_SSC0_RF         (ASRC_TRIG_TRIGSELOUT0_SSC0_RF_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT0_SSC0_TF         (ASRC_TRIG_TRIGSELOUT0_SSC0_TF_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT0_SSC1_RF         (ASRC_TRIG_TRIGSELOUT0_SSC1_RF_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT1_Pos             _U_(20)                                              /**< (ASRC_TRIG) Output Trigger Source Selection of Channel 1 Position */
#define ASRC_TRIG_TRIGSELOUT1_Msk             (_U_(0xF) << ASRC_TRIG_TRIGSELOUT1_Pos)              /**< (ASRC_TRIG) Output Trigger Source Selection of Channel 1 Mask */
#define ASRC_TRIG_TRIGSELOUT1(value)          (ASRC_TRIG_TRIGSELOUT1_Msk & ((value) << ASRC_TRIG_TRIGSELOUT1_Pos))
#define   ASRC_TRIG_TRIGSELOUT1_GCLKDIV_Val   _U_(0x0)                                             /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELOUT1_I2SMCC0_ws_Val _U_(0x1)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_I2SMCC1_ws_Val _U_(0x2)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_PDMC0_data_synchro_Val _U_(0x3)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_PDMC1_data_synchro_Val _U_(0x4)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_SSC0_RF_Val   _U_(0x5)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_SSC0_TF_Val   _U_(0x6)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_SSC1_RF_Val   _U_(0x7)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELOUT1_GCLKDIV         (ASRC_TRIG_TRIGSELOUT1_GCLKDIV_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position  */
#define ASRC_TRIG_TRIGSELOUT1_I2SMCC0_ws      (ASRC_TRIG_TRIGSELOUT1_I2SMCC0_ws_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT1_I2SMCC1_ws      (ASRC_TRIG_TRIGSELOUT1_I2SMCC1_ws_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT1_PDMC0_data_synchro (ASRC_TRIG_TRIGSELOUT1_PDMC0_data_synchro_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT1_PDMC1_data_synchro (ASRC_TRIG_TRIGSELOUT1_PDMC1_data_synchro_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT1_SSC0_RF         (ASRC_TRIG_TRIGSELOUT1_SSC0_RF_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT1_SSC0_TF         (ASRC_TRIG_TRIGSELOUT1_SSC0_TF_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT1_SSC1_RF         (ASRC_TRIG_TRIGSELOUT1_SSC1_RF_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT2_Pos             _U_(24)                                              /**< (ASRC_TRIG) Output Trigger Source Selection of Channel 2 Position */
#define ASRC_TRIG_TRIGSELOUT2_Msk             (_U_(0xF) << ASRC_TRIG_TRIGSELOUT2_Pos)              /**< (ASRC_TRIG) Output Trigger Source Selection of Channel 2 Mask */
#define ASRC_TRIG_TRIGSELOUT2(value)          (ASRC_TRIG_TRIGSELOUT2_Msk & ((value) << ASRC_TRIG_TRIGSELOUT2_Pos))
#define   ASRC_TRIG_TRIGSELOUT2_GCLKDIV_Val   _U_(0x0)                                             /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELOUT2_I2SMCC0_ws_Val _U_(0x1)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_I2SMCC1_ws_Val _U_(0x2)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_PDMC0_data_synchro_Val _U_(0x3)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_PDMC1_data_synchro_Val _U_(0x4)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_SSC0_RF_Val   _U_(0x5)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_SSC0_TF_Val   _U_(0x6)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_SSC1_RF_Val   _U_(0x7)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELOUT2_GCLKDIV         (ASRC_TRIG_TRIGSELOUT2_GCLKDIV_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position  */
#define ASRC_TRIG_TRIGSELOUT2_I2SMCC0_ws      (ASRC_TRIG_TRIGSELOUT2_I2SMCC0_ws_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT2_I2SMCC1_ws      (ASRC_TRIG_TRIGSELOUT2_I2SMCC1_ws_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT2_PDMC0_data_synchro (ASRC_TRIG_TRIGSELOUT2_PDMC0_data_synchro_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT2_PDMC1_data_synchro (ASRC_TRIG_TRIGSELOUT2_PDMC1_data_synchro_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT2_SSC0_RF         (ASRC_TRIG_TRIGSELOUT2_SSC0_RF_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT2_SSC0_TF         (ASRC_TRIG_TRIGSELOUT2_SSC0_TF_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT2_SSC1_RF         (ASRC_TRIG_TRIGSELOUT2_SSC1_RF_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT3_Pos             _U_(28)                                              /**< (ASRC_TRIG) Output Trigger Source Selection of Channel 3 Position */
#define ASRC_TRIG_TRIGSELOUT3_Msk             (_U_(0xF) << ASRC_TRIG_TRIGSELOUT3_Pos)              /**< (ASRC_TRIG) Output Trigger Source Selection of Channel 3 Mask */
#define ASRC_TRIG_TRIGSELOUT3(value)          (ASRC_TRIG_TRIGSELOUT3_Msk & ((value) << ASRC_TRIG_TRIGSELOUT3_Pos))
#define   ASRC_TRIG_TRIGSELOUT3_GCLKDIV_Val   _U_(0x0)                                             /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELOUT3_I2SMCC0_ws_Val _U_(0x1)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_I2SMCC1_ws_Val _U_(0x2)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_PDMC0_data_synchro_Val _U_(0x3)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_PDMC1_data_synchro_Val _U_(0x4)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_SSC0_RF_Val   _U_(0x5)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_SSC0_TF_Val   _U_(0x6)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_SSC1_RF_Val   _U_(0x7)                                             /**< (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELOUT3_GCLKDIV         (ASRC_TRIG_TRIGSELOUT3_GCLKDIV_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /**< (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position  */
#define ASRC_TRIG_TRIGSELOUT3_I2SMCC0_ws      (ASRC_TRIG_TRIGSELOUT3_I2SMCC0_ws_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT3_I2SMCC1_ws      (ASRC_TRIG_TRIGSELOUT3_I2SMCC1_ws_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT3_PDMC0_data_synchro (ASRC_TRIG_TRIGSELOUT3_PDMC0_data_synchro_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT3_PDMC1_data_synchro (ASRC_TRIG_TRIGSELOUT3_PDMC1_data_synchro_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT3_SSC0_RF         (ASRC_TRIG_TRIGSELOUT3_SSC0_RF_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT3_SSC0_TF         (ASRC_TRIG_TRIGSELOUT3_SSC0_TF_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_TRIGSELOUT3_SSC1_RF         (ASRC_TRIG_TRIGSELOUT3_SSC1_RF_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /**< (ASRC_TRIG) Trigger event from audio peripheral. Position  */
#define ASRC_TRIG_Msk                         _U_(0xFFFFFFFF)                                      /**< (ASRC_TRIG) Register Mask  */


/* -------- ASRC_RHR : (ASRC Offset: 0x28) ( R/ 32) Receive Holding Register x -------- */
#define ASRC_RHR_RESETVALUE                   _U_(0x00)                                            /**<  (ASRC_RHR) Receive Holding Register x  Reset Value */

#define ASRC_RHR_DATA_Pos                     _U_(0)                                               /**< (ASRC_RHR) Converted Data Position */
#define ASRC_RHR_DATA_Msk                     (_U_(0xFFFFFFFF) << ASRC_RHR_DATA_Pos)               /**< (ASRC_RHR) Converted Data Mask */
#define ASRC_RHR_DATA(value)                  (ASRC_RHR_DATA_Msk & ((value) << ASRC_RHR_DATA_Pos))
#define ASRC_RHR_Msk                          _U_(0xFFFFFFFF)                                      /**< (ASRC_RHR) Register Mask  */


/* -------- ASRC_THR : (ASRC Offset: 0x48) ( /W 32) Transmit Holding Register x -------- */
#define ASRC_THR_DATA_Pos                     _U_(0)                                               /**< (ASRC_THR) Data to Convert Position */
#define ASRC_THR_DATA_Msk                     (_U_(0xFFFFFFFF) << ASRC_THR_DATA_Pos)               /**< (ASRC_THR) Data to Convert Mask */
#define ASRC_THR_DATA(value)                  (ASRC_THR_DATA_Msk & ((value) << ASRC_THR_DATA_Pos))
#define ASRC_THR_Msk                          _U_(0xFFFFFFFF)                                      /**< (ASRC_THR) Register Mask  */


/* -------- ASRC_IER : (ASRC Offset: 0x68) ( /W 32) Interrupt Enable Register x -------- */
#define ASRC_IER_RXRDY_Pos                    _U_(0)                                               /**< (ASRC_IER) Receive Ready Interrupt Enable Position */
#define ASRC_IER_RXRDY_Msk                    (_U_(0x1) << ASRC_IER_RXRDY_Pos)                     /**< (ASRC_IER) Receive Ready Interrupt Enable Mask */
#define ASRC_IER_RXRDY(value)                 (ASRC_IER_RXRDY_Msk & ((value) << ASRC_IER_RXRDY_Pos))
#define ASRC_IER_RXEMPTY_Pos                  _U_(1)                                               /**< (ASRC_IER) Receive FIFO Empty Interrupt Enable Position */
#define ASRC_IER_RXEMPTY_Msk                  (_U_(0x1) << ASRC_IER_RXEMPTY_Pos)                   /**< (ASRC_IER) Receive FIFO Empty Interrupt Enable Mask */
#define ASRC_IER_RXEMPTY(value)               (ASRC_IER_RXEMPTY_Msk & ((value) << ASRC_IER_RXEMPTY_Pos))
#define ASRC_IER_RXFULL_Pos                   _U_(2)                                               /**< (ASRC_IER) Receive FIFO Full Interrupt Enable Position */
#define ASRC_IER_RXFULL_Msk                   (_U_(0x1) << ASRC_IER_RXFULL_Pos)                    /**< (ASRC_IER) Receive FIFO Full Interrupt Enable Mask */
#define ASRC_IER_RXFULL(value)                (ASRC_IER_RXFULL_Msk & ((value) << ASRC_IER_RXFULL_Pos))
#define ASRC_IER_RXCHUNK_Pos                  _U_(3)                                               /**< (ASRC_IER) Receive FIFO Chunk Interrupt Enable Position */
#define ASRC_IER_RXCHUNK_Msk                  (_U_(0x1) << ASRC_IER_RXCHUNK_Pos)                   /**< (ASRC_IER) Receive FIFO Chunk Interrupt Enable Mask */
#define ASRC_IER_RXCHUNK(value)               (ASRC_IER_RXCHUNK_Msk & ((value) << ASRC_IER_RXCHUNK_Pos))
#define ASRC_IER_RXUDR_Pos                    _U_(4)                                               /**< (ASRC_IER) Receive Under Flow Interrupt Enable Position */
#define ASRC_IER_RXUDR_Msk                    (_U_(0x1) << ASRC_IER_RXUDR_Pos)                     /**< (ASRC_IER) Receive Under Flow Interrupt Enable Mask */
#define ASRC_IER_RXUDR(value)                 (ASRC_IER_RXUDR_Msk & ((value) << ASRC_IER_RXUDR_Pos))
#define ASRC_IER_RXOVR_Pos                    _U_(5)                                               /**< (ASRC_IER) Receive Over Flow Interrupt Enable Position */
#define ASRC_IER_RXOVR_Msk                    (_U_(0x1) << ASRC_IER_RXOVR_Pos)                     /**< (ASRC_IER) Receive Over Flow Interrupt Enable Mask */
#define ASRC_IER_RXOVR(value)                 (ASRC_IER_RXOVR_Msk & ((value) << ASRC_IER_RXOVR_Pos))
#define ASRC_IER_TXRDY_Pos                    _U_(8)                                               /**< (ASRC_IER) Transmit Ready Interrupt Enable Position */
#define ASRC_IER_TXRDY_Msk                    (_U_(0x1) << ASRC_IER_TXRDY_Pos)                     /**< (ASRC_IER) Transmit Ready Interrupt Enable Mask */
#define ASRC_IER_TXRDY(value)                 (ASRC_IER_TXRDY_Msk & ((value) << ASRC_IER_TXRDY_Pos))
#define ASRC_IER_TXEMPTY_Pos                  _U_(9)                                               /**< (ASRC_IER) Transmit FIFO Empty Interrupt Enable Position */
#define ASRC_IER_TXEMPTY_Msk                  (_U_(0x1) << ASRC_IER_TXEMPTY_Pos)                   /**< (ASRC_IER) Transmit FIFO Empty Interrupt Enable Mask */
#define ASRC_IER_TXEMPTY(value)               (ASRC_IER_TXEMPTY_Msk & ((value) << ASRC_IER_TXEMPTY_Pos))
#define ASRC_IER_TXFULL_Pos                   _U_(10)                                              /**< (ASRC_IER) Transmit FIFO Full Interrupt Enable Position */
#define ASRC_IER_TXFULL_Msk                   (_U_(0x1) << ASRC_IER_TXFULL_Pos)                    /**< (ASRC_IER) Transmit FIFO Full Interrupt Enable Mask */
#define ASRC_IER_TXFULL(value)                (ASRC_IER_TXFULL_Msk & ((value) << ASRC_IER_TXFULL_Pos))
#define ASRC_IER_TXCHUNK_Pos                  _U_(11)                                              /**< (ASRC_IER) Transmit FIFO Chunk Interrupt Enable Position */
#define ASRC_IER_TXCHUNK_Msk                  (_U_(0x1) << ASRC_IER_TXCHUNK_Pos)                   /**< (ASRC_IER) Transmit FIFO Chunk Interrupt Enable Mask */
#define ASRC_IER_TXCHUNK(value)               (ASRC_IER_TXCHUNK_Msk & ((value) << ASRC_IER_TXCHUNK_Pos))
#define ASRC_IER_TXUDR_Pos                    _U_(12)                                              /**< (ASRC_IER) Transmit Under Flow Interrupt Enable Position */
#define ASRC_IER_TXUDR_Msk                    (_U_(0x1) << ASRC_IER_TXUDR_Pos)                     /**< (ASRC_IER) Transmit Under Flow Interrupt Enable Mask */
#define ASRC_IER_TXUDR(value)                 (ASRC_IER_TXUDR_Msk & ((value) << ASRC_IER_TXUDR_Pos))
#define ASRC_IER_TXOVR_Pos                    _U_(13)                                              /**< (ASRC_IER) Transmit Over Flow Interrupt Enable Position */
#define ASRC_IER_TXOVR_Msk                    (_U_(0x1) << ASRC_IER_TXOVR_Pos)                     /**< (ASRC_IER) Transmit Over Flow Interrupt Enable Mask */
#define ASRC_IER_TXOVR(value)                 (ASRC_IER_TXOVR_Msk & ((value) << ASRC_IER_TXOVR_Pos))
#define ASRC_IER_SECE_Pos                     _U_(16)                                              /**< (ASRC_IER) Security/Safety Report Enable Position */
#define ASRC_IER_SECE_Msk                     (_U_(0x1) << ASRC_IER_SECE_Pos)                      /**< (ASRC_IER) Security/Safety Report Enable Mask */
#define ASRC_IER_SECE(value)                  (ASRC_IER_SECE_Msk & ((value) << ASRC_IER_SECE_Pos))
#define ASRC_IER_LOCK_Pos                     _U_(30)                                              /**< (ASRC_IER) DPLL locked Interrupt Enable Position */
#define ASRC_IER_LOCK_Msk                     (_U_(0x1) << ASRC_IER_LOCK_Pos)                      /**< (ASRC_IER) DPLL locked Interrupt Enable Mask */
#define ASRC_IER_LOCK(value)                  (ASRC_IER_LOCK_Msk & ((value) << ASRC_IER_LOCK_Pos))
#define ASRC_IER_UNLOCK_Pos                   _U_(31)                                              /**< (ASRC_IER) DPLL Unlocked Interrupt Enable Position */
#define ASRC_IER_UNLOCK_Msk                   (_U_(0x1) << ASRC_IER_UNLOCK_Pos)                    /**< (ASRC_IER) DPLL Unlocked Interrupt Enable Mask */
#define ASRC_IER_UNLOCK(value)                (ASRC_IER_UNLOCK_Msk & ((value) << ASRC_IER_UNLOCK_Pos))
#define ASRC_IER_Msk                          _U_(0xC0013F3F)                                      /**< (ASRC_IER) Register Mask  */


/* -------- ASRC_IDR : (ASRC Offset: 0x78) ( /W 32) Interrupt Disable Register x -------- */
#define ASRC_IDR_RXRDY_Pos                    _U_(0)                                               /**< (ASRC_IDR) Receive Ready Interrupt Disable Position */
#define ASRC_IDR_RXRDY_Msk                    (_U_(0x1) << ASRC_IDR_RXRDY_Pos)                     /**< (ASRC_IDR) Receive Ready Interrupt Disable Mask */
#define ASRC_IDR_RXRDY(value)                 (ASRC_IDR_RXRDY_Msk & ((value) << ASRC_IDR_RXRDY_Pos))
#define ASRC_IDR_RXEMPTY_Pos                  _U_(1)                                               /**< (ASRC_IDR) Receive FIFO Empty Interrupt Disable Position */
#define ASRC_IDR_RXEMPTY_Msk                  (_U_(0x1) << ASRC_IDR_RXEMPTY_Pos)                   /**< (ASRC_IDR) Receive FIFO Empty Interrupt Disable Mask */
#define ASRC_IDR_RXEMPTY(value)               (ASRC_IDR_RXEMPTY_Msk & ((value) << ASRC_IDR_RXEMPTY_Pos))
#define ASRC_IDR_RXFULL_Pos                   _U_(2)                                               /**< (ASRC_IDR) Receive FIFO Full Interrupt Disable Position */
#define ASRC_IDR_RXFULL_Msk                   (_U_(0x1) << ASRC_IDR_RXFULL_Pos)                    /**< (ASRC_IDR) Receive FIFO Full Interrupt Disable Mask */
#define ASRC_IDR_RXFULL(value)                (ASRC_IDR_RXFULL_Msk & ((value) << ASRC_IDR_RXFULL_Pos))
#define ASRC_IDR_RXCHUNK_Pos                  _U_(3)                                               /**< (ASRC_IDR) Receive FIFO Chunk Interrupt Disable Position */
#define ASRC_IDR_RXCHUNK_Msk                  (_U_(0x1) << ASRC_IDR_RXCHUNK_Pos)                   /**< (ASRC_IDR) Receive FIFO Chunk Interrupt Disable Mask */
#define ASRC_IDR_RXCHUNK(value)               (ASRC_IDR_RXCHUNK_Msk & ((value) << ASRC_IDR_RXCHUNK_Pos))
#define ASRC_IDR_RXUDR_Pos                    _U_(4)                                               /**< (ASRC_IDR) Receive Under Flow Interrupt Disable Position */
#define ASRC_IDR_RXUDR_Msk                    (_U_(0x1) << ASRC_IDR_RXUDR_Pos)                     /**< (ASRC_IDR) Receive Under Flow Interrupt Disable Mask */
#define ASRC_IDR_RXUDR(value)                 (ASRC_IDR_RXUDR_Msk & ((value) << ASRC_IDR_RXUDR_Pos))
#define ASRC_IDR_RXOVR_Pos                    _U_(5)                                               /**< (ASRC_IDR) Receive Over Flow Interrupt Disable Position */
#define ASRC_IDR_RXOVR_Msk                    (_U_(0x1) << ASRC_IDR_RXOVR_Pos)                     /**< (ASRC_IDR) Receive Over Flow Interrupt Disable Mask */
#define ASRC_IDR_RXOVR(value)                 (ASRC_IDR_RXOVR_Msk & ((value) << ASRC_IDR_RXOVR_Pos))
#define ASRC_IDR_TXRDY_Pos                    _U_(8)                                               /**< (ASRC_IDR) Transmit Ready Interrupt Disable Position */
#define ASRC_IDR_TXRDY_Msk                    (_U_(0x1) << ASRC_IDR_TXRDY_Pos)                     /**< (ASRC_IDR) Transmit Ready Interrupt Disable Mask */
#define ASRC_IDR_TXRDY(value)                 (ASRC_IDR_TXRDY_Msk & ((value) << ASRC_IDR_TXRDY_Pos))
#define ASRC_IDR_TXEMPTY_Pos                  _U_(9)                                               /**< (ASRC_IDR) Transmit FIFO Empty Interrupt Disable Position */
#define ASRC_IDR_TXEMPTY_Msk                  (_U_(0x1) << ASRC_IDR_TXEMPTY_Pos)                   /**< (ASRC_IDR) Transmit FIFO Empty Interrupt Disable Mask */
#define ASRC_IDR_TXEMPTY(value)               (ASRC_IDR_TXEMPTY_Msk & ((value) << ASRC_IDR_TXEMPTY_Pos))
#define ASRC_IDR_TXFULL_Pos                   _U_(10)                                              /**< (ASRC_IDR) Transmit FIFO Full Interrupt Disable Position */
#define ASRC_IDR_TXFULL_Msk                   (_U_(0x1) << ASRC_IDR_TXFULL_Pos)                    /**< (ASRC_IDR) Transmit FIFO Full Interrupt Disable Mask */
#define ASRC_IDR_TXFULL(value)                (ASRC_IDR_TXFULL_Msk & ((value) << ASRC_IDR_TXFULL_Pos))
#define ASRC_IDR_TXCHUNK_Pos                  _U_(11)                                              /**< (ASRC_IDR) Transmit FIFO Chunk Interrupt Disable Position */
#define ASRC_IDR_TXCHUNK_Msk                  (_U_(0x1) << ASRC_IDR_TXCHUNK_Pos)                   /**< (ASRC_IDR) Transmit FIFO Chunk Interrupt Disable Mask */
#define ASRC_IDR_TXCHUNK(value)               (ASRC_IDR_TXCHUNK_Msk & ((value) << ASRC_IDR_TXCHUNK_Pos))
#define ASRC_IDR_TXUDR_Pos                    _U_(12)                                              /**< (ASRC_IDR) Transmit Under Flow Interrupt Disable Position */
#define ASRC_IDR_TXUDR_Msk                    (_U_(0x1) << ASRC_IDR_TXUDR_Pos)                     /**< (ASRC_IDR) Transmit Under Flow Interrupt Disable Mask */
#define ASRC_IDR_TXUDR(value)                 (ASRC_IDR_TXUDR_Msk & ((value) << ASRC_IDR_TXUDR_Pos))
#define ASRC_IDR_TXOVR_Pos                    _U_(13)                                              /**< (ASRC_IDR) Transmit Over Flow Interrupt Disable Position */
#define ASRC_IDR_TXOVR_Msk                    (_U_(0x1) << ASRC_IDR_TXOVR_Pos)                     /**< (ASRC_IDR) Transmit Over Flow Interrupt Disable Mask */
#define ASRC_IDR_TXOVR(value)                 (ASRC_IDR_TXOVR_Msk & ((value) << ASRC_IDR_TXOVR_Pos))
#define ASRC_IDR_SECE_Pos                     _U_(16)                                              /**< (ASRC_IDR) Security/Safety Report Disable Position */
#define ASRC_IDR_SECE_Msk                     (_U_(0x1) << ASRC_IDR_SECE_Pos)                      /**< (ASRC_IDR) Security/Safety Report Disable Mask */
#define ASRC_IDR_SECE(value)                  (ASRC_IDR_SECE_Msk & ((value) << ASRC_IDR_SECE_Pos))
#define ASRC_IDR_LOCK_Pos                     _U_(30)                                              /**< (ASRC_IDR) DPLL locked Interrupt Disable Position */
#define ASRC_IDR_LOCK_Msk                     (_U_(0x1) << ASRC_IDR_LOCK_Pos)                      /**< (ASRC_IDR) DPLL locked Interrupt Disable Mask */
#define ASRC_IDR_LOCK(value)                  (ASRC_IDR_LOCK_Msk & ((value) << ASRC_IDR_LOCK_Pos))
#define ASRC_IDR_UNLOCK_Pos                   _U_(31)                                              /**< (ASRC_IDR) DPLL Unlocked Interrupt Disable Position */
#define ASRC_IDR_UNLOCK_Msk                   (_U_(0x1) << ASRC_IDR_UNLOCK_Pos)                    /**< (ASRC_IDR) DPLL Unlocked Interrupt Disable Mask */
#define ASRC_IDR_UNLOCK(value)                (ASRC_IDR_UNLOCK_Msk & ((value) << ASRC_IDR_UNLOCK_Pos))
#define ASRC_IDR_Msk                          _U_(0xC0013F3F)                                      /**< (ASRC_IDR) Register Mask  */


/* -------- ASRC_IMR : (ASRC Offset: 0x88) ( R/ 32) Interrupt Mask Register x -------- */
#define ASRC_IMR_RESETVALUE                   _U_(0x00)                                            /**<  (ASRC_IMR) Interrupt Mask Register x  Reset Value */

#define ASRC_IMR_RXRDY_Pos                    _U_(0)                                               /**< (ASRC_IMR) Receive Ready Interrupt Mask Position */
#define ASRC_IMR_RXRDY_Msk                    (_U_(0x1) << ASRC_IMR_RXRDY_Pos)                     /**< (ASRC_IMR) Receive Ready Interrupt Mask Mask */
#define ASRC_IMR_RXRDY(value)                 (ASRC_IMR_RXRDY_Msk & ((value) << ASRC_IMR_RXRDY_Pos))
#define ASRC_IMR_RXEMPTY_Pos                  _U_(1)                                               /**< (ASRC_IMR) Receive FIFO Empty Interrupt Mask Position */
#define ASRC_IMR_RXEMPTY_Msk                  (_U_(0x1) << ASRC_IMR_RXEMPTY_Pos)                   /**< (ASRC_IMR) Receive FIFO Empty Interrupt Mask Mask */
#define ASRC_IMR_RXEMPTY(value)               (ASRC_IMR_RXEMPTY_Msk & ((value) << ASRC_IMR_RXEMPTY_Pos))
#define ASRC_IMR_RXFULL_Pos                   _U_(2)                                               /**< (ASRC_IMR) Receive FIFO Full Interrupt Mask Position */
#define ASRC_IMR_RXFULL_Msk                   (_U_(0x1) << ASRC_IMR_RXFULL_Pos)                    /**< (ASRC_IMR) Receive FIFO Full Interrupt Mask Mask */
#define ASRC_IMR_RXFULL(value)                (ASRC_IMR_RXFULL_Msk & ((value) << ASRC_IMR_RXFULL_Pos))
#define ASRC_IMR_RXCHUNK_Pos                  _U_(3)                                               /**< (ASRC_IMR) Receive FIFO Chunk Interrupt Mask Position */
#define ASRC_IMR_RXCHUNK_Msk                  (_U_(0x1) << ASRC_IMR_RXCHUNK_Pos)                   /**< (ASRC_IMR) Receive FIFO Chunk Interrupt Mask Mask */
#define ASRC_IMR_RXCHUNK(value)               (ASRC_IMR_RXCHUNK_Msk & ((value) << ASRC_IMR_RXCHUNK_Pos))
#define ASRC_IMR_RXUDR_Pos                    _U_(4)                                               /**< (ASRC_IMR) Receive Under Flow Interrupt Mask Position */
#define ASRC_IMR_RXUDR_Msk                    (_U_(0x1) << ASRC_IMR_RXUDR_Pos)                     /**< (ASRC_IMR) Receive Under Flow Interrupt Mask Mask */
#define ASRC_IMR_RXUDR(value)                 (ASRC_IMR_RXUDR_Msk & ((value) << ASRC_IMR_RXUDR_Pos))
#define ASRC_IMR_RXOVR_Pos                    _U_(5)                                               /**< (ASRC_IMR) Receive Over Flow Interrupt Mask Position */
#define ASRC_IMR_RXOVR_Msk                    (_U_(0x1) << ASRC_IMR_RXOVR_Pos)                     /**< (ASRC_IMR) Receive Over Flow Interrupt Mask Mask */
#define ASRC_IMR_RXOVR(value)                 (ASRC_IMR_RXOVR_Msk & ((value) << ASRC_IMR_RXOVR_Pos))
#define ASRC_IMR_TXRDY_Pos                    _U_(8)                                               /**< (ASRC_IMR) Transmit Ready Interrupt Mask Position */
#define ASRC_IMR_TXRDY_Msk                    (_U_(0x1) << ASRC_IMR_TXRDY_Pos)                     /**< (ASRC_IMR) Transmit Ready Interrupt Mask Mask */
#define ASRC_IMR_TXRDY(value)                 (ASRC_IMR_TXRDY_Msk & ((value) << ASRC_IMR_TXRDY_Pos))
#define ASRC_IMR_TXEMPTY_Pos                  _U_(9)                                               /**< (ASRC_IMR) Transmit FIFO Empty Interrupt Mask Position */
#define ASRC_IMR_TXEMPTY_Msk                  (_U_(0x1) << ASRC_IMR_TXEMPTY_Pos)                   /**< (ASRC_IMR) Transmit FIFO Empty Interrupt Mask Mask */
#define ASRC_IMR_TXEMPTY(value)               (ASRC_IMR_TXEMPTY_Msk & ((value) << ASRC_IMR_TXEMPTY_Pos))
#define ASRC_IMR_TXFULL_Pos                   _U_(10)                                              /**< (ASRC_IMR) Transmit FIFO Full Interrupt Mask Position */
#define ASRC_IMR_TXFULL_Msk                   (_U_(0x1) << ASRC_IMR_TXFULL_Pos)                    /**< (ASRC_IMR) Transmit FIFO Full Interrupt Mask Mask */
#define ASRC_IMR_TXFULL(value)                (ASRC_IMR_TXFULL_Msk & ((value) << ASRC_IMR_TXFULL_Pos))
#define ASRC_IMR_TXCHUNK_Pos                  _U_(11)                                              /**< (ASRC_IMR) Transmit FIFO Chunk Interrupt Mask Position */
#define ASRC_IMR_TXCHUNK_Msk                  (_U_(0x1) << ASRC_IMR_TXCHUNK_Pos)                   /**< (ASRC_IMR) Transmit FIFO Chunk Interrupt Mask Mask */
#define ASRC_IMR_TXCHUNK(value)               (ASRC_IMR_TXCHUNK_Msk & ((value) << ASRC_IMR_TXCHUNK_Pos))
#define ASRC_IMR_TXUDR_Pos                    _U_(12)                                              /**< (ASRC_IMR) Transmit Under Flow Interrupt Mask Position */
#define ASRC_IMR_TXUDR_Msk                    (_U_(0x1) << ASRC_IMR_TXUDR_Pos)                     /**< (ASRC_IMR) Transmit Under Flow Interrupt Mask Mask */
#define ASRC_IMR_TXUDR(value)                 (ASRC_IMR_TXUDR_Msk & ((value) << ASRC_IMR_TXUDR_Pos))
#define ASRC_IMR_TXOVR_Pos                    _U_(13)                                              /**< (ASRC_IMR) Transmit Over Flow Interrupt Mask Position */
#define ASRC_IMR_TXOVR_Msk                    (_U_(0x1) << ASRC_IMR_TXOVR_Pos)                     /**< (ASRC_IMR) Transmit Over Flow Interrupt Mask Mask */
#define ASRC_IMR_TXOVR(value)                 (ASRC_IMR_TXOVR_Msk & ((value) << ASRC_IMR_TXOVR_Pos))
#define ASRC_IMR_SECE_Pos                     _U_(16)                                              /**< (ASRC_IMR) Security/Safety Report Mask Position */
#define ASRC_IMR_SECE_Msk                     (_U_(0x1) << ASRC_IMR_SECE_Pos)                      /**< (ASRC_IMR) Security/Safety Report Mask Mask */
#define ASRC_IMR_SECE(value)                  (ASRC_IMR_SECE_Msk & ((value) << ASRC_IMR_SECE_Pos))
#define ASRC_IMR_LOCK_Pos                     _U_(30)                                              /**< (ASRC_IMR) DPLL locked Interrupt Mask Position */
#define ASRC_IMR_LOCK_Msk                     (_U_(0x1) << ASRC_IMR_LOCK_Pos)                      /**< (ASRC_IMR) DPLL locked Interrupt Mask Mask */
#define ASRC_IMR_LOCK(value)                  (ASRC_IMR_LOCK_Msk & ((value) << ASRC_IMR_LOCK_Pos))
#define ASRC_IMR_UNLOCK_Pos                   _U_(31)                                              /**< (ASRC_IMR) DPLL Unlocked Interrupt Mask Position */
#define ASRC_IMR_UNLOCK_Msk                   (_U_(0x1) << ASRC_IMR_UNLOCK_Pos)                    /**< (ASRC_IMR) DPLL Unlocked Interrupt Mask Mask */
#define ASRC_IMR_UNLOCK(value)                (ASRC_IMR_UNLOCK_Msk & ((value) << ASRC_IMR_UNLOCK_Pos))
#define ASRC_IMR_Msk                          _U_(0xC0013F3F)                                      /**< (ASRC_IMR) Register Mask  */


/* -------- ASRC_ISR : (ASRC Offset: 0x98) ( R/ 32) Interrupt Status Register x -------- */
#define ASRC_ISR_RESETVALUE                   _U_(0x80000302)                                      /**<  (ASRC_ISR) Interrupt Status Register x  Reset Value */

#define ASRC_ISR_RXRDY_Pos                    _U_(0)                                               /**< (ASRC_ISR) Receive Ready Interrupt Status Position */
#define ASRC_ISR_RXRDY_Msk                    (_U_(0x1) << ASRC_ISR_RXRDY_Pos)                     /**< (ASRC_ISR) Receive Ready Interrupt Status Mask */
#define ASRC_ISR_RXRDY(value)                 (ASRC_ISR_RXRDY_Msk & ((value) << ASRC_ISR_RXRDY_Pos))
#define ASRC_ISR_RXEMPTY_Pos                  _U_(1)                                               /**< (ASRC_ISR) Receive FIFO Empty Interrupt Status Position */
#define ASRC_ISR_RXEMPTY_Msk                  (_U_(0x1) << ASRC_ISR_RXEMPTY_Pos)                   /**< (ASRC_ISR) Receive FIFO Empty Interrupt Status Mask */
#define ASRC_ISR_RXEMPTY(value)               (ASRC_ISR_RXEMPTY_Msk & ((value) << ASRC_ISR_RXEMPTY_Pos))
#define ASRC_ISR_RXFULL_Pos                   _U_(2)                                               /**< (ASRC_ISR) Receive FIFO Full Interrupt Status Position */
#define ASRC_ISR_RXFULL_Msk                   (_U_(0x1) << ASRC_ISR_RXFULL_Pos)                    /**< (ASRC_ISR) Receive FIFO Full Interrupt Status Mask */
#define ASRC_ISR_RXFULL(value)                (ASRC_ISR_RXFULL_Msk & ((value) << ASRC_ISR_RXFULL_Pos))
#define ASRC_ISR_RXCHUNK_Pos                  _U_(3)                                               /**< (ASRC_ISR) Receive FIFO Chunk Interrupt Status Position */
#define ASRC_ISR_RXCHUNK_Msk                  (_U_(0x1) << ASRC_ISR_RXCHUNK_Pos)                   /**< (ASRC_ISR) Receive FIFO Chunk Interrupt Status Mask */
#define ASRC_ISR_RXCHUNK(value)               (ASRC_ISR_RXCHUNK_Msk & ((value) << ASRC_ISR_RXCHUNK_Pos))
#define ASRC_ISR_RXUDR_Pos                    _U_(4)                                               /**< (ASRC_ISR) Receive Under Flow Interrupt Status (cleared on read) Position */
#define ASRC_ISR_RXUDR_Msk                    (_U_(0x1) << ASRC_ISR_RXUDR_Pos)                     /**< (ASRC_ISR) Receive Under Flow Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_RXUDR(value)                 (ASRC_ISR_RXUDR_Msk & ((value) << ASRC_ISR_RXUDR_Pos))
#define ASRC_ISR_RXOVR_Pos                    _U_(5)                                               /**< (ASRC_ISR) Receive Over Flow Interrupt Status (cleared on read) Position */
#define ASRC_ISR_RXOVR_Msk                    (_U_(0x1) << ASRC_ISR_RXOVR_Pos)                     /**< (ASRC_ISR) Receive Over Flow Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_RXOVR(value)                 (ASRC_ISR_RXOVR_Msk & ((value) << ASRC_ISR_RXOVR_Pos))
#define ASRC_ISR_TXRDY_Pos                    _U_(8)                                               /**< (ASRC_ISR) Transmit Ready Interrupt Status Position */
#define ASRC_ISR_TXRDY_Msk                    (_U_(0x1) << ASRC_ISR_TXRDY_Pos)                     /**< (ASRC_ISR) Transmit Ready Interrupt Status Mask */
#define ASRC_ISR_TXRDY(value)                 (ASRC_ISR_TXRDY_Msk & ((value) << ASRC_ISR_TXRDY_Pos))
#define ASRC_ISR_TXEMPTY_Pos                  _U_(9)                                               /**< (ASRC_ISR) Transmit FIFO Empty Interrupt Status Position */
#define ASRC_ISR_TXEMPTY_Msk                  (_U_(0x1) << ASRC_ISR_TXEMPTY_Pos)                   /**< (ASRC_ISR) Transmit FIFO Empty Interrupt Status Mask */
#define ASRC_ISR_TXEMPTY(value)               (ASRC_ISR_TXEMPTY_Msk & ((value) << ASRC_ISR_TXEMPTY_Pos))
#define ASRC_ISR_TXFULL_Pos                   _U_(10)                                              /**< (ASRC_ISR) Transmit FIFO Full Interrupt Status Position */
#define ASRC_ISR_TXFULL_Msk                   (_U_(0x1) << ASRC_ISR_TXFULL_Pos)                    /**< (ASRC_ISR) Transmit FIFO Full Interrupt Status Mask */
#define ASRC_ISR_TXFULL(value)                (ASRC_ISR_TXFULL_Msk & ((value) << ASRC_ISR_TXFULL_Pos))
#define ASRC_ISR_TXCHUNK_Pos                  _U_(11)                                              /**< (ASRC_ISR) Transmit FIFO Chunk Interrupt Status Position */
#define ASRC_ISR_TXCHUNK_Msk                  (_U_(0x1) << ASRC_ISR_TXCHUNK_Pos)                   /**< (ASRC_ISR) Transmit FIFO Chunk Interrupt Status Mask */
#define ASRC_ISR_TXCHUNK(value)               (ASRC_ISR_TXCHUNK_Msk & ((value) << ASRC_ISR_TXCHUNK_Pos))
#define ASRC_ISR_TXUDR_Pos                    _U_(12)                                              /**< (ASRC_ISR) Transmit Under Flow Interrupt Status (cleared on read) Position */
#define ASRC_ISR_TXUDR_Msk                    (_U_(0x1) << ASRC_ISR_TXUDR_Pos)                     /**< (ASRC_ISR) Transmit Under Flow Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_TXUDR(value)                 (ASRC_ISR_TXUDR_Msk & ((value) << ASRC_ISR_TXUDR_Pos))
#define ASRC_ISR_TXOVR_Pos                    _U_(13)                                              /**< (ASRC_ISR) Transmit Over Flow Interrupt Status (cleared on read) Position */
#define ASRC_ISR_TXOVR_Msk                    (_U_(0x1) << ASRC_ISR_TXOVR_Pos)                     /**< (ASRC_ISR) Transmit Over Flow Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_TXOVR(value)                 (ASRC_ISR_TXOVR_Msk & ((value) << ASRC_ISR_TXOVR_Pos))
#define ASRC_ISR_SECE_Pos                     _U_(16)                                              /**< (ASRC_ISR) Security and/or Safety Event (cleared on read) Position */
#define ASRC_ISR_SECE_Msk                     (_U_(0x1) << ASRC_ISR_SECE_Pos)                      /**< (ASRC_ISR) Security and/or Safety Event (cleared on read) Mask */
#define ASRC_ISR_SECE(value)                  (ASRC_ISR_SECE_Msk & ((value) << ASRC_ISR_SECE_Pos))
#define   ASRC_ISR_SECE_0_Val                 _U_(0x0)                                             /**< (ASRC_ISR) No security or safety event has occurred since the last read of ASRC_ISR register  */
#define   ASRC_ISR_SECE_1_Val                 _U_(0x1)                                             /**< (ASRC_ISR) One or more safety or security events has occurred since the last read of ASRC_ISR. For details on the event, refer to ASRC_WPSR.  */
#define ASRC_ISR_SECE_0                       (ASRC_ISR_SECE_0_Val << ASRC_ISR_SECE_Pos)           /**< (ASRC_ISR) No security or safety event has occurred since the last read of ASRC_ISR register Position  */
#define ASRC_ISR_SECE_1                       (ASRC_ISR_SECE_1_Val << ASRC_ISR_SECE_Pos)           /**< (ASRC_ISR) One or more safety or security events has occurred since the last read of ASRC_ISR. For details on the event, refer to ASRC_WPSR. Position  */
#define ASRC_ISR_LOCK_Pos                     _U_(30)                                              /**< (ASRC_ISR) DPLL locked Interrupt Status Position */
#define ASRC_ISR_LOCK_Msk                     (_U_(0x1) << ASRC_ISR_LOCK_Pos)                      /**< (ASRC_ISR) DPLL locked Interrupt Status Mask */
#define ASRC_ISR_LOCK(value)                  (ASRC_ISR_LOCK_Msk & ((value) << ASRC_ISR_LOCK_Pos))
#define ASRC_ISR_UNLOCK_Pos                   _U_(31)                                              /**< (ASRC_ISR) DPLL Unlocked Interrupt Status Position */
#define ASRC_ISR_UNLOCK_Msk                   (_U_(0x1) << ASRC_ISR_UNLOCK_Pos)                    /**< (ASRC_ISR) DPLL Unlocked Interrupt Status Mask */
#define ASRC_ISR_UNLOCK(value)                (ASRC_ISR_UNLOCK_Msk & ((value) << ASRC_ISR_UNLOCK_Pos))
#define ASRC_ISR_Msk                          _U_(0xC0013F3F)                                      /**< (ASRC_ISR) Register Mask  */


/* -------- ASRC_ESR : (ASRC Offset: 0xA8) ( R/ 32) Error Status Register -------- */
#define ASRC_ESR_RESETVALUE                   _U_(0x00)                                            /**<  (ASRC_ESR) Error Status Register  Reset Value */

#define ASRC_ESR_INCFGERR_Pos                 _U_(0)                                               /**< (ASRC_ESR) Input Configuration Error Position */
#define ASRC_ESR_INCFGERR_Msk                 (_U_(0x1F) << ASRC_ESR_INCFGERR_Pos)                 /**< (ASRC_ESR) Input Configuration Error Mask */
#define ASRC_ESR_INCFGERR(value)              (ASRC_ESR_INCFGERR_Msk & ((value) << ASRC_ESR_INCFGERR_Pos))
#define   ASRC_ESR_INCFGERR_OUTCFG_OK_Val     _U_(0x0)                                             /**< (ASRC_ESR) Correct configuration of ASRC_MR, ASRC_VBPS_OUT, ASRC_CH_CONF.  */
#define   ASRC_ESR_INCFGERR_OP0_D0_CHK16_8M_Val _U_(0x1)                                             /**< (ASRC_ESR) Channel operating mode 0, DSP0: CHUNK0=16 or CHUNK0=8 and MONO0=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP0_D1_CHK16_8M_Val _U_(0x2)                                             /**< (ASRC_ESR) Channel operating mode 0, DSP1: CHUNK1=16 or CHUNK1=8 and MONO1=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP0_D2_CHK16_8M_Val _U_(0x3)                                             /**< (ASRC_ESR) Channel operating mode 0, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP0_D3_CHK16_8M_Val _U_(0x4)                                             /**< (ASRC_ESR) Channel operating mode 0, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP1_D01_EN_Val    _U_(0x5)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP1_D01_M_Val     _U_(0x6)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: MONO0=1, MONO1=0 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP1_D01_CHK16_Val _U_(0x7)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP1_D2_CHK16_8M_Val _U_(0x8)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP1_D3_CHK16_8M_Val _U_(0x9)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP2_D01_EN_Val    _U_(0xA)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP2_D01_M_Val     _U_(0xB)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: MONO0=1, MONO1=0 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP2_D01_CHK16_Val _U_(0xC)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP2_D23_EN_Val    _U_(0xD)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP2_D23_M_Val     _U_(0xE)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: MONO2=1, MONO3=0 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP2_D23_CHK16_Val _U_(0xF)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: CHUNK2=16 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP3_D012_EN_Val   _U_(0x10)                                            /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: enable configuration is not correct (at least 1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP3_D012_M_Val    _U_(0x11)                                            /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 is not supported).  */
#define   ASRC_ESR_INCFGERR_OP3_D012_CHK16_Val _U_(0x12)                                            /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP3_D3_CHK16_8M_Val _U_(0x13)                                            /**< (ASRC_ESR) Channel operating mode 3, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP4_D0123_EN_Val  _U_(0x14)                                            /**< (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: enable configuration is not correct (at least 1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP4_D0123_M_Val   _U_(0x15)                                            /**< (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 or MONO3=0 is not supported).  */
#define ASRC_ESR_INCFGERR_OUTCFG_OK           (ASRC_ESR_INCFGERR_OUTCFG_OK_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Correct configuration of ASRC_MR, ASRC_VBPS_OUT, ASRC_CH_CONF. Position  */
#define ASRC_ESR_INCFGERR_OP0_D0_CHK16_8M     (ASRC_ESR_INCFGERR_OP0_D0_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 0, DSP0: CHUNK0=16 or CHUNK0=8 and MONO0=1 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP0_D1_CHK16_8M     (ASRC_ESR_INCFGERR_OP0_D1_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 0, DSP1: CHUNK1=16 or CHUNK1=8 and MONO1=1 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP0_D2_CHK16_8M     (ASRC_ESR_INCFGERR_OP0_D2_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 0, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP0_D3_CHK16_8M     (ASRC_ESR_INCFGERR_OP0_D3_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 0, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP1_D01_EN          (ASRC_ESR_INCFGERR_OP1_D01_EN_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: enable configuration is not correct (1 DSP is disabled) Position  */
#define ASRC_ESR_INCFGERR_OP1_D01_M           (ASRC_ESR_INCFGERR_OP1_D01_M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: MONO0=1, MONO1=0 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP1_D01_CHK16       (ASRC_ESR_INCFGERR_OP1_D01_CHK16_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: CHUNK0=16 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP1_D2_CHK16_8M     (ASRC_ESR_INCFGERR_OP1_D2_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP1_D3_CHK16_8M     (ASRC_ESR_INCFGERR_OP1_D3_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP2_D01_EN          (ASRC_ESR_INCFGERR_OP2_D01_EN_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: enable configuration is not correct (1 DSP is disabled) Position  */
#define ASRC_ESR_INCFGERR_OP2_D01_M           (ASRC_ESR_INCFGERR_OP2_D01_M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: MONO0=1, MONO1=0 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP2_D01_CHK16       (ASRC_ESR_INCFGERR_OP2_D01_CHK16_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: CHUNK0=16 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP2_D23_EN          (ASRC_ESR_INCFGERR_OP2_D23_EN_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: enable configuration is not correct (1 DSP is disabled) Position  */
#define ASRC_ESR_INCFGERR_OP2_D23_M           (ASRC_ESR_INCFGERR_OP2_D23_M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: MONO2=1, MONO3=0 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP2_D23_CHK16       (ASRC_ESR_INCFGERR_OP2_D23_CHK16_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: CHUNK2=16 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP3_D012_EN         (ASRC_ESR_INCFGERR_OP3_D012_EN_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: enable configuration is not correct (at least 1 DSP is disabled) Position  */
#define ASRC_ESR_INCFGERR_OP3_D012_M          (ASRC_ESR_INCFGERR_OP3_D012_M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 is not supported). Position  */
#define ASRC_ESR_INCFGERR_OP3_D012_CHK16      (ASRC_ESR_INCFGERR_OP3_D012_CHK16_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: CHUNK0=16 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP3_D3_CHK16_8M     (ASRC_ESR_INCFGERR_OP3_D3_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 3, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3 is not supported. Position  */
#define ASRC_ESR_INCFGERR_OP4_D0123_EN        (ASRC_ESR_INCFGERR_OP4_D0123_EN_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: enable configuration is not correct (at least 1 DSP is disabled) Position  */
#define ASRC_ESR_INCFGERR_OP4_D0123_M         (ASRC_ESR_INCFGERR_OP4_D0123_M_Val << ASRC_ESR_INCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 or MONO3=0 is not supported). Position  */
#define ASRC_ESR_OUTCFGERR_Pos                _U_(8)                                               /**< (ASRC_ESR) Output Configuration Error Position */
#define ASRC_ESR_OUTCFGERR_Msk                (_U_(0x1F) << ASRC_ESR_OUTCFGERR_Pos)                /**< (ASRC_ESR) Output Configuration Error Mask */
#define ASRC_ESR_OUTCFGERR(value)             (ASRC_ESR_OUTCFGERR_Msk & ((value) << ASRC_ESR_OUTCFGERR_Pos))
#define   ASRC_ESR_OUTCFGERR_OUTCFG_OK_Val    _U_(0x0)                                             /**< (ASRC_ESR) Correct configuration of ASRC_MR, ASRC_VBPS_OUT, ASRC_CH_CONF.  */
#define   ASRC_ESR_OUTCFGERR_OP0_D0_CHK16_8M_Val _U_(0x1)                                             /**< (ASRC_ESR) Channel operating mode 0, DSP0: CHUNK0=16 or CHUNK0=8 and MONO0=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP0_D1_CHK16_8M_Val _U_(0x2)                                             /**< (ASRC_ESR) Channel operating mode 0, DSP1: CHUNK1=16 or CHUNK1=8 and MONO1=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP0_D2_CHK16_8M_Val _U_(0x3)                                             /**< (ASRC_ESR) Channel operating mode 0, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP0_D3_CHK16_8M_Val _U_(0x4)                                             /**< (ASRC_ESR) Channel operating mode 0, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP1_D01_EN_Val   _U_(0x5)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP1_D01_M_Val    _U_(0x6)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: MONO0=1, MONO1=0 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP1_D01_CHK16_Val _U_(0x7)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP1_D2_CHK16_8M_Val _U_(0x8)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP1_D3_CHK16_8M_Val _U_(0x9)                                             /**< (ASRC_ESR) Channel operating mode 1, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP2_D01_EN_Val   _U_(0xA)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP2_D01_M_Val    _U_(0xB)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: MONO0=1, MONO1=0 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP2_D01_CHK16_Val _U_(0xC)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP2_D23_EN_Val   _U_(0xD)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP2_D23_M_Val    _U_(0xE)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: MONO2=1, MONO3=0 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP2_D23_CHK16_Val _U_(0xF)                                             /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: CHUNK2=16 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP3_D012_EN_Val  _U_(0x10)                                            /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: enable configuration is not correct (at least 1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP3_D012_M_Val   _U_(0x11)                                            /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 is not supported).  */
#define   ASRC_ESR_OUTCFGERR_OP3_D012_CHK16_Val _U_(0x12)                                            /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP3_D3_CHK16_8M_Val _U_(0x13)                                            /**< (ASRC_ESR) Channel operating mode 3, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP4_D0123_EN_Val _U_(0x14)                                            /**< (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: enable configuration is not correct (at least 1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP4_D0123_M_Val  _U_(0x15)                                            /**< (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 or MONO3=0 is not supported).  */
#define ASRC_ESR_OUTCFGERR_OUTCFG_OK          (ASRC_ESR_OUTCFGERR_OUTCFG_OK_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Correct configuration of ASRC_MR, ASRC_VBPS_OUT, ASRC_CH_CONF. Position  */
#define ASRC_ESR_OUTCFGERR_OP0_D0_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP0_D0_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 0, DSP0: CHUNK0=16 or CHUNK0=8 and MONO0=1 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP0_D1_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP0_D1_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 0, DSP1: CHUNK1=16 or CHUNK1=8 and MONO1=1 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP0_D2_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP0_D2_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 0, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP0_D3_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP0_D3_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 0, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP1_D01_EN         (ASRC_ESR_OUTCFGERR_OP1_D01_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: enable configuration is not correct (1 DSP is disabled) Position  */
#define ASRC_ESR_OUTCFGERR_OP1_D01_M          (ASRC_ESR_OUTCFGERR_OP1_D01_M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: MONO0=1, MONO1=0 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP1_D01_CHK16      (ASRC_ESR_OUTCFGERR_OP1_D01_CHK16_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP0/1: CHUNK0=16 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP1_D2_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP1_D2_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP1_D3_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP1_D3_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 1, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP2_D01_EN         (ASRC_ESR_OUTCFGERR_OP2_D01_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: enable configuration is not correct (1 DSP is disabled) Position  */
#define ASRC_ESR_OUTCFGERR_OP2_D01_M          (ASRC_ESR_OUTCFGERR_OP2_D01_M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: MONO0=1, MONO1=0 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP2_D01_CHK16      (ASRC_ESR_OUTCFGERR_OP2_D01_CHK16_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP0/1: CHUNK0=16 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP2_D23_EN         (ASRC_ESR_OUTCFGERR_OP2_D23_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: enable configuration is not correct (1 DSP is disabled) Position  */
#define ASRC_ESR_OUTCFGERR_OP2_D23_M          (ASRC_ESR_OUTCFGERR_OP2_D23_M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: MONO2=1, MONO3=0 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP2_D23_CHK16      (ASRC_ESR_OUTCFGERR_OP2_D23_CHK16_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 2, DSP2/3: CHUNK2=16 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP3_D012_EN        (ASRC_ESR_OUTCFGERR_OP3_D012_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: enable configuration is not correct (at least 1 DSP is disabled) Position  */
#define ASRC_ESR_OUTCFGERR_OP3_D012_M         (ASRC_ESR_OUTCFGERR_OP3_D012_M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 is not supported). Position  */
#define ASRC_ESR_OUTCFGERR_OP3_D012_CHK16     (ASRC_ESR_OUTCFGERR_OP3_D012_CHK16_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 3, DSP0/1/2: CHUNK0=16 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP3_D3_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP3_D3_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 3, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3 is not supported. Position  */
#define ASRC_ESR_OUTCFGERR_OP4_D0123_EN       (ASRC_ESR_OUTCFGERR_OP4_D0123_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: enable configuration is not correct (at least 1 DSP is disabled) Position  */
#define ASRC_ESR_OUTCFGERR_OP4_D0123_M        (ASRC_ESR_OUTCFGERR_OP4_D0123_M_Val << ASRC_ESR_OUTCFGERR_Pos) /**< (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 or MONO3=0 is not supported). Position  */
#define ASRC_ESR_DERR_Pos                     _U_(15)                                              /**< (ASRC_ESR) DSP Overflow Error Position */
#define ASRC_ESR_DERR_Msk                     (_U_(0x1) << ASRC_ESR_DERR_Pos)                      /**< (ASRC_ESR) DSP Overflow Error Mask */
#define ASRC_ESR_DERR(value)                  (ASRC_ESR_DERR_Msk & ((value) << ASRC_ESR_DERR_Pos))
#define   ASRC_ESR_DERR_0_Val                 _U_(0x0)                                             /**< (ASRC_ESR) No DSP overflow error detected.  */
#define   ASRC_ESR_DERR_1_Val                 _U_(0x1)                                             /**< (ASRC_ESR) The sampling frequency overpasses the value allowed by the configuration.  */
#define ASRC_ESR_DERR_0                       (ASRC_ESR_DERR_0_Val << ASRC_ESR_DERR_Pos)           /**< (ASRC_ESR) No DSP overflow error detected. Position  */
#define ASRC_ESR_DERR_1                       (ASRC_ESR_DERR_1_Val << ASRC_ESR_DERR_Pos)           /**< (ASRC_ESR) The sampling frequency overpasses the value allowed by the configuration. Position  */
#define ASRC_ESR_Msk                          _U_(0x00009F1F)                                      /**< (ASRC_ESR) Register Mask  */


/* -------- ASRC_WPMR : (ASRC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define ASRC_WPMR_RESETVALUE                  _U_(0x00)                                            /**<  (ASRC_WPMR) Write Protection Mode Register  Reset Value */

#define ASRC_WPMR_WPEN_Pos                    _U_(0)                                               /**< (ASRC_WPMR) Write Protection Enable Position */
#define ASRC_WPMR_WPEN_Msk                    (_U_(0x1) << ASRC_WPMR_WPEN_Pos)                     /**< (ASRC_WPMR) Write Protection Enable Mask */
#define ASRC_WPMR_WPEN(value)                 (ASRC_WPMR_WPEN_Msk & ((value) << ASRC_WPMR_WPEN_Pos))
#define   ASRC_WPMR_WPEN_0_Val                _U_(0x0)                                             /**< (ASRC_WPMR) The write protection is disabled  */
#define   ASRC_WPMR_WPEN_1_Val                _U_(0x1)                                             /**< (ASRC_WPMR) The write protection is enabled. All write accesses to configuration registers are canceled and generate an error in the ASRC_WPSR register  */
#define ASRC_WPMR_WPEN_0                      (ASRC_WPMR_WPEN_0_Val << ASRC_WPMR_WPEN_Pos)         /**< (ASRC_WPMR) The write protection is disabled Position  */
#define ASRC_WPMR_WPEN_1                      (ASRC_WPMR_WPEN_1_Val << ASRC_WPMR_WPEN_Pos)         /**< (ASRC_WPMR) The write protection is enabled. All write accesses to configuration registers are canceled and generate an error in the ASRC_WPSR register Position  */
#define ASRC_WPMR_WPITEN_Pos                  _U_(1)                                               /**< (ASRC_WPMR) Write Protection Interrupt Enable Position */
#define ASRC_WPMR_WPITEN_Msk                  (_U_(0x1) << ASRC_WPMR_WPITEN_Pos)                   /**< (ASRC_WPMR) Write Protection Interrupt Enable Mask */
#define ASRC_WPMR_WPITEN(value)               (ASRC_WPMR_WPITEN_Msk & ((value) << ASRC_WPMR_WPITEN_Pos))
#define   ASRC_WPMR_WPITEN_0_Val              _U_(0x0)                                             /**< (ASRC_WPMR) The write protection of interrupt registers is disabled  */
#define   ASRC_WPMR_WPITEN_1_Val              _U_(0x1)                                             /**< (ASRC_WPMR) The write protection of interrupt registers is enabled. Any attempt to modify the interrupt configuration is cancelled and leads to an error in the ASRC_WPSR register.  */
#define ASRC_WPMR_WPITEN_0                    (ASRC_WPMR_WPITEN_0_Val << ASRC_WPMR_WPITEN_Pos)     /**< (ASRC_WPMR) The write protection of interrupt registers is disabled Position  */
#define ASRC_WPMR_WPITEN_1                    (ASRC_WPMR_WPITEN_1_Val << ASRC_WPMR_WPITEN_Pos)     /**< (ASRC_WPMR) The write protection of interrupt registers is enabled. Any attempt to modify the interrupt configuration is cancelled and leads to an error in the ASRC_WPSR register. Position  */
#define ASRC_WPMR_WPCREN_Pos                  _U_(2)                                               /**< (ASRC_WPMR) Write Protection Control Register Enable Position */
#define ASRC_WPMR_WPCREN_Msk                  (_U_(0x1) << ASRC_WPMR_WPCREN_Pos)                   /**< (ASRC_WPMR) Write Protection Control Register Enable Mask */
#define ASRC_WPMR_WPCREN(value)               (ASRC_WPMR_WPCREN_Msk & ((value) << ASRC_WPMR_WPCREN_Pos))
#define   ASRC_WPMR_WPCREN_0_Val              _U_(0x0)                                             /**< (ASRC_WPMR) The write protection of interrupts is disabled  */
#define   ASRC_WPMR_WPCREN_1_Val              _U_(0x1)                                             /**< (ASRC_WPMR) The write protection of interrupts is enabled. Any attempt to modify the interrupt configuration is cancelled and leads to an error in the ASRC_WPSR register.  */
#define ASRC_WPMR_WPCREN_0                    (ASRC_WPMR_WPCREN_0_Val << ASRC_WPMR_WPCREN_Pos)     /**< (ASRC_WPMR) The write protection of interrupts is disabled Position  */
#define ASRC_WPMR_WPCREN_1                    (ASRC_WPMR_WPCREN_1_Val << ASRC_WPMR_WPCREN_Pos)     /**< (ASRC_WPMR) The write protection of interrupts is enabled. Any attempt to modify the interrupt configuration is cancelled and leads to an error in the ASRC_WPSR register. Position  */
#define ASRC_WPMR_WPKEY_Pos                   _U_(8)                                               /**< (ASRC_WPMR) Write Protection Key Position */
#define ASRC_WPMR_WPKEY_Msk                   (_U_(0xFFFFFF) << ASRC_WPMR_WPKEY_Pos)               /**< (ASRC_WPMR) Write Protection Key Mask */
#define ASRC_WPMR_WPKEY(value)                (ASRC_WPMR_WPKEY_Msk & ((value) << ASRC_WPMR_WPKEY_Pos))
#define   ASRC_WPMR_WPKEY_PASSWD_Val          _U_(0x535243)                                        /**< (ASRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always read at 0.  */
#define ASRC_WPMR_WPKEY_PASSWD                (ASRC_WPMR_WPKEY_PASSWD_Val << ASRC_WPMR_WPKEY_Pos)  /**< (ASRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always read at 0. Position  */
#define ASRC_WPMR_Msk                         _U_(0xFFFFFF07)                                      /**< (ASRC_WPMR) Register Mask  */


/* -------- ASRC_WPSR : (ASRC Offset: 0xE8) (R/W 32) Write Protection Status Register -------- */
#define ASRC_WPSR_RESETVALUE                  _U_(0x00)                                            /**<  (ASRC_WPSR) Write Protection Status Register  Reset Value */

#define ASRC_WPSR_WPVS_Pos                    _U_(0)                                               /**< (ASRC_WPSR) Write Protection Violation Status (cleared on read) Position */
#define ASRC_WPSR_WPVS_Msk                    (_U_(0x1) << ASRC_WPSR_WPVS_Pos)                     /**< (ASRC_WPSR) Write Protection Violation Status (cleared on read) Mask */
#define ASRC_WPSR_WPVS(value)                 (ASRC_WPSR_WPVS_Msk & ((value) << ASRC_WPSR_WPVS_Pos))
#define   ASRC_WPSR_WPVS_0_Val                _U_(0x0)                                             /**< (ASRC_WPSR) No write protection violation has occurred since the last read of ASRC_WPSR  */
#define   ASRC_WPSR_WPVS_1_Val                _U_(0x1)                                             /**< (ASRC_WPSR) A write protection violation has occurred since the last read of ASRC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported in field WPSRC.  */
#define ASRC_WPSR_WPVS_0                      (ASRC_WPSR_WPVS_0_Val << ASRC_WPSR_WPVS_Pos)         /**< (ASRC_WPSR) No write protection violation has occurred since the last read of ASRC_WPSR Position  */
#define ASRC_WPSR_WPVS_1                      (ASRC_WPSR_WPVS_1_Val << ASRC_WPSR_WPVS_Pos)         /**< (ASRC_WPSR) A write protection violation has occurred since the last read of ASRC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported in field WPSRC. Position  */
#define ASRC_WPSR_SEQE_Pos                    _U_(2)                                               /**< (ASRC_WPSR) Internal Sequencer Error (cleared on read) Position */
#define ASRC_WPSR_SEQE_Msk                    (_U_(0x1) << ASRC_WPSR_SEQE_Pos)                     /**< (ASRC_WPSR) Internal Sequencer Error (cleared on read) Mask */
#define ASRC_WPSR_SEQE(value)                 (ASRC_WPSR_SEQE_Msk & ((value) << ASRC_WPSR_SEQE_Pos))
#define   ASRC_WPSR_SEQE_0_Val                _U_(0x0)                                             /**< (ASRC_WPSR) No peripheral internal sequencer error has occurred since the last read of ASRC_WPSR  */
#define   ASRC_WPSR_SEQE_1_Val                _U_(0x1)                                             /**< (ASRC_WPSR) A peripheral internal sequencer error has occurred since the last read of ASRC_WPSR.  */
#define ASRC_WPSR_SEQE_0                      (ASRC_WPSR_SEQE_0_Val << ASRC_WPSR_SEQE_Pos)         /**< (ASRC_WPSR) No peripheral internal sequencer error has occurred since the last read of ASRC_WPSR Position  */
#define ASRC_WPSR_SEQE_1                      (ASRC_WPSR_SEQE_1_Val << ASRC_WPSR_SEQE_Pos)         /**< (ASRC_WPSR) A peripheral internal sequencer error has occurred since the last read of ASRC_WPSR. Position  */
#define ASRC_WPSR_SWE_Pos                     _U_(3)                                               /**< (ASRC_WPSR) Software Control Error (cleared on read) Position */
#define ASRC_WPSR_SWE_Msk                     (_U_(0x1) << ASRC_WPSR_SWE_Pos)                      /**< (ASRC_WPSR) Software Control Error (cleared on read) Mask */
#define ASRC_WPSR_SWE(value)                  (ASRC_WPSR_SWE_Msk & ((value) << ASRC_WPSR_SWE_Pos))
#define   ASRC_WPSR_SWE_0_Val                 _U_(0x0)                                             /**< (ASRC_WPSR) No software error has occurred since the last read of ASRC_WPSR.  */
#define   ASRC_WPSR_SWE_1_Val                 _U_(0x1)                                             /**< (ASRC_WPSR) A software error has occurred since the last read of ASRC_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0).  */
#define ASRC_WPSR_SWE_0                       (ASRC_WPSR_SWE_0_Val << ASRC_WPSR_SWE_Pos)           /**< (ASRC_WPSR) No software error has occurred since the last read of ASRC_WPSR. Position  */
#define ASRC_WPSR_SWE_1                       (ASRC_WPSR_SWE_1_Val << ASRC_WPSR_SWE_Pos)           /**< (ASRC_WPSR) A software error has occurred since the last read of ASRC_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0). Position  */
#define ASRC_WPSR_WPSRC_Pos                   _U_(8)                                               /**< (ASRC_WPSR) Write Protection Source (cleared on read) Position */
#define ASRC_WPSR_WPSRC_Msk                   (_U_(0xFFFF) << ASRC_WPSR_WPSRC_Pos)                 /**< (ASRC_WPSR) Write Protection Source (cleared on read) Mask */
#define ASRC_WPSR_WPSRC(value)                (ASRC_WPSR_WPSRC_Msk & ((value) << ASRC_WPSR_WPSRC_Pos))
#define ASRC_WPSR_SWETYP_Pos                  _U_(24)                                              /**< (ASRC_WPSR) Software Error Type (cleared on read) Position */
#define ASRC_WPSR_SWETYP_Msk                  (_U_(0x3) << ASRC_WPSR_SWETYP_Pos)                   /**< (ASRC_WPSR) Software Error Type (cleared on read) Mask */
#define ASRC_WPSR_SWETYP(value)               (ASRC_WPSR_SWETYP_Msk & ((value) << ASRC_WPSR_SWETYP_Pos))
#define   ASRC_WPSR_SWETYP_READ_WO_Val        _U_(0x0)                                             /**< (ASRC_WPSR) A Write-only register has been read.  */
#define   ASRC_WPSR_SWETYP_WRITE_RO_Val       _U_(0x1)                                             /**< (ASRC_WPSR) A write access has been performed on a Read-only register.  */
#define   ASRC_WPSR_SWETYP_UNDEF_RW_Val       _U_(0x2)                                             /**< (ASRC_WPSR) Access to an undefined address.  */
#define ASRC_WPSR_SWETYP_READ_WO              (ASRC_WPSR_SWETYP_READ_WO_Val << ASRC_WPSR_SWETYP_Pos) /**< (ASRC_WPSR) A Write-only register has been read. Position  */
#define ASRC_WPSR_SWETYP_WRITE_RO             (ASRC_WPSR_SWETYP_WRITE_RO_Val << ASRC_WPSR_SWETYP_Pos) /**< (ASRC_WPSR) A write access has been performed on a Read-only register. Position  */
#define ASRC_WPSR_SWETYP_UNDEF_RW             (ASRC_WPSR_SWETYP_UNDEF_RW_Val << ASRC_WPSR_SWETYP_Pos) /**< (ASRC_WPSR) Access to an undefined address. Position  */
#define ASRC_WPSR_Msk                         _U_(0x03FFFF0D)                                      /**< (ASRC_WPSR) Register Mask  */


/** \brief ASRC register offsets definitions */
#define ASRC_CR_REG_OFST               (0x00)              /**< (ASRC_CR) Control Register Offset */
#define ASRC_MR_REG_OFST               (0x04)              /**< (ASRC_MR) Mode Register Offset */
#define ASRC_RATIO_REG_OFST            (0x08)              /**< (ASRC_RATIO) Ratio Register of Stereo Channel x Offset */
#define ASRC_RATIO0_REG_OFST           (0x08)              /**< (ASRC_RATIO0) Ratio Register of Stereo Channel x Offset */
#define ASRC_RATIO1_REG_OFST           (0x0C)              /**< (ASRC_RATIO1) Ratio Register of Stereo Channel x Offset */
#define ASRC_RATIO2_REG_OFST           (0x10)              /**< (ASRC_RATIO2) Ratio Register of Stereo Channel x Offset */
#define ASRC_RATIO3_REG_OFST           (0x14)              /**< (ASRC_RATIO3) Ratio Register of Stereo Channel x Offset */
#define ASRC_VBPS_IN_REG_OFST          (0x18)              /**< (ASRC_VBPS_IN) Valid Bit Per Sample In Register Offset */
#define ASRC_VBPS_OUT_REG_OFST         (0x1C)              /**< (ASRC_VBPS_OUT) Valid Bit Per Sample Out Register Offset */
#define ASRC_CH_CONF_REG_OFST          (0x20)              /**< (ASRC_CH_CONF) Channel Configuration Register Offset */
#define ASRC_TRIG_REG_OFST             (0x24)              /**< (ASRC_TRIG) Trigger Selection Register Offset */
#define ASRC_RHR_REG_OFST              (0x28)              /**< (ASRC_RHR) Receive Holding Register x Offset */
#define ASRC_RHR0_REG_OFST             (0x28)              /**< (ASRC_RHR0) Receive Holding Register x Offset */
#define ASRC_RHR1_REG_OFST             (0x2C)              /**< (ASRC_RHR1) Receive Holding Register x Offset */
#define ASRC_RHR2_REG_OFST             (0x30)              /**< (ASRC_RHR2) Receive Holding Register x Offset */
#define ASRC_RHR3_REG_OFST             (0x34)              /**< (ASRC_RHR3) Receive Holding Register x Offset */
#define ASRC_THR_REG_OFST              (0x48)              /**< (ASRC_THR) Transmit Holding Register x Offset */
#define ASRC_THR0_REG_OFST             (0x48)              /**< (ASRC_THR0) Transmit Holding Register x Offset */
#define ASRC_THR1_REG_OFST             (0x4C)              /**< (ASRC_THR1) Transmit Holding Register x Offset */
#define ASRC_THR2_REG_OFST             (0x50)              /**< (ASRC_THR2) Transmit Holding Register x Offset */
#define ASRC_THR3_REG_OFST             (0x54)              /**< (ASRC_THR3) Transmit Holding Register x Offset */
#define ASRC_IER_REG_OFST              (0x68)              /**< (ASRC_IER) Interrupt Enable Register x Offset */
#define ASRC_IER0_REG_OFST             (0x68)              /**< (ASRC_IER0) Interrupt Enable Register x Offset */
#define ASRC_IER1_REG_OFST             (0x6C)              /**< (ASRC_IER1) Interrupt Enable Register x Offset */
#define ASRC_IER2_REG_OFST             (0x70)              /**< (ASRC_IER2) Interrupt Enable Register x Offset */
#define ASRC_IER3_REG_OFST             (0x74)              /**< (ASRC_IER3) Interrupt Enable Register x Offset */
#define ASRC_IDR_REG_OFST              (0x78)              /**< (ASRC_IDR) Interrupt Disable Register x Offset */
#define ASRC_IDR0_REG_OFST             (0x78)              /**< (ASRC_IDR0) Interrupt Disable Register x Offset */
#define ASRC_IDR1_REG_OFST             (0x7C)              /**< (ASRC_IDR1) Interrupt Disable Register x Offset */
#define ASRC_IDR2_REG_OFST             (0x80)              /**< (ASRC_IDR2) Interrupt Disable Register x Offset */
#define ASRC_IDR3_REG_OFST             (0x84)              /**< (ASRC_IDR3) Interrupt Disable Register x Offset */
#define ASRC_IMR_REG_OFST              (0x88)              /**< (ASRC_IMR) Interrupt Mask Register x Offset */
#define ASRC_IMR0_REG_OFST             (0x88)              /**< (ASRC_IMR0) Interrupt Mask Register x Offset */
#define ASRC_IMR1_REG_OFST             (0x8C)              /**< (ASRC_IMR1) Interrupt Mask Register x Offset */
#define ASRC_IMR2_REG_OFST             (0x90)              /**< (ASRC_IMR2) Interrupt Mask Register x Offset */
#define ASRC_IMR3_REG_OFST             (0x94)              /**< (ASRC_IMR3) Interrupt Mask Register x Offset */
#define ASRC_ISR_REG_OFST              (0x98)              /**< (ASRC_ISR) Interrupt Status Register x Offset */
#define ASRC_ISR0_REG_OFST             (0x98)              /**< (ASRC_ISR0) Interrupt Status Register x Offset */
#define ASRC_ISR1_REG_OFST             (0x9C)              /**< (ASRC_ISR1) Interrupt Status Register x Offset */
#define ASRC_ISR2_REG_OFST             (0xA0)              /**< (ASRC_ISR2) Interrupt Status Register x Offset */
#define ASRC_ISR3_REG_OFST             (0xA4)              /**< (ASRC_ISR3) Interrupt Status Register x Offset */
#define ASRC_ESR_REG_OFST              (0xA8)              /**< (ASRC_ESR) Error Status Register Offset */
#define ASRC_WPMR_REG_OFST             (0xE4)              /**< (ASRC_WPMR) Write Protection Mode Register Offset */
#define ASRC_WPSR_REG_OFST             (0xE8)              /**< (ASRC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ASRC register API structure */
typedef struct
{  /* Asynchronous Sample Rate Converter */
  __O   uint32_t                       ASRC_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       ASRC_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       ASRC_RATIO[4];      /**< Offset: 0x08 (R/W  32) Ratio Register of Stereo Channel x */
  __IO  uint32_t                       ASRC_VBPS_IN;       /**< Offset: 0x18 (R/W  32) Valid Bit Per Sample In Register */
  __IO  uint32_t                       ASRC_VBPS_OUT;      /**< Offset: 0x1C (R/W  32) Valid Bit Per Sample Out Register */
  __IO  uint32_t                       ASRC_CH_CONF;       /**< Offset: 0x20 (R/W  32) Channel Configuration Register */
  __IO  uint32_t                       ASRC_TRIG;          /**< Offset: 0x24 (R/W  32) Trigger Selection Register */
  __I   uint32_t                       ASRC_RHR[4];        /**< Offset: 0x28 (R/   32) Receive Holding Register x */
  __I   uint8_t                        Reserved1[0x10];
  __O   uint32_t                       ASRC_THR[4];        /**< Offset: 0x48 ( /W  32) Transmit Holding Register x */
  __I   uint8_t                        Reserved2[0x10];
  __O   uint32_t                       ASRC_IER[4];        /**< Offset: 0x68 ( /W  32) Interrupt Enable Register x */
  __O   uint32_t                       ASRC_IDR[4];        /**< Offset: 0x78 ( /W  32) Interrupt Disable Register x */
  __I   uint32_t                       ASRC_IMR[4];        /**< Offset: 0x88 (R/   32) Interrupt Mask Register x */
  __I   uint32_t                       ASRC_ISR[4];        /**< Offset: 0x98 (R/   32) Interrupt Status Register x */
  __I   uint32_t                       ASRC_ESR;           /**< Offset: 0xA8 (R/   32) Error Status Register */
  __I   uint8_t                        Reserved3[0x38];
  __IO  uint32_t                       ASRC_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __IO  uint32_t                       ASRC_WPSR;          /**< Offset: 0xE8 (R/W  32) Write Protection Status Register */
} asrc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_ASRC_COMPONENT_H_ */
