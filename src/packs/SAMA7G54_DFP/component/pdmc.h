/*
 * Component description for PDMC
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
#ifndef _SAMA7G_PDMC_COMPONENT_H_
#define _SAMA7G_PDMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PDMC                                         */
/* ************************************************************************** */

/* -------- PDMC_CR : (PDMC Offset: 0x00) ( /W 32) Control Register -------- */
#define PDMC_CR_SWRST_Pos                     _U_(0)                                               /**< (PDMC_CR) Software Reset Position */
#define PDMC_CR_SWRST_Msk                     (_U_(0x1) << PDMC_CR_SWRST_Pos)                      /**< (PDMC_CR) Software Reset Mask */
#define PDMC_CR_SWRST(value)                  (PDMC_CR_SWRST_Msk & ((value) << PDMC_CR_SWRST_Pos))
#define   PDMC_CR_SWRST_0_Val                 _U_(0x0)                                             /**< (PDMC_CR) No effect.  */
#define   PDMC_CR_SWRST_1_Val                 _U_(0x1)                                             /**< (PDMC_CR) Resets the PDMC interface.  */
#define PDMC_CR_SWRST_0                       (PDMC_CR_SWRST_0_Val << PDMC_CR_SWRST_Pos)           /**< (PDMC_CR) No effect. Position  */
#define PDMC_CR_SWRST_1                       (PDMC_CR_SWRST_1_Val << PDMC_CR_SWRST_Pos)           /**< (PDMC_CR) Resets the PDMC interface. Position  */
#define PDMC_CR_Msk                           _U_(0x00000001)                                      /**< (PDMC_CR) Register Mask  */


/* -------- PDMC_MR : (PDMC Offset: 0x04) (R/W 32) Mode Register -------- */
#define PDMC_MR_RESETVALUE                    _U_(0x00)                                            /**<  (PDMC_MR) Mode Register  Reset Value */

#define PDMC_MR_PDMCEN0_Pos                   _U_(0)                                               /**< (PDMC_MR) PDMC Channel 0 Enable Position */
#define PDMC_MR_PDMCEN0_Msk                   (_U_(0x1) << PDMC_MR_PDMCEN0_Pos)                    /**< (PDMC_MR) PDMC Channel 0 Enable Mask */
#define PDMC_MR_PDMCEN0(value)                (PDMC_MR_PDMCEN0_Msk & ((value) << PDMC_MR_PDMCEN0_Pos))
#define   PDMC_MR_PDMCEN0_DISABLE_Val         _U_(0x0)                                             /**< (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN0_ENABLE_Val          _U_(0x1)                                             /**< (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN0_DISABLE               (PDMC_MR_PDMCEN0_DISABLE_Val << PDMC_MR_PDMCEN0_Pos) /**< (PDMC_MR) PDMC is disabled. Position  */
#define PDMC_MR_PDMCEN0_ENABLE                (PDMC_MR_PDMCEN0_ENABLE_Val << PDMC_MR_PDMCEN0_Pos)  /**< (PDMC_MR) PDMC is enabled. Position  */
#define PDMC_MR_PDMCEN1_Pos                   _U_(1)                                               /**< (PDMC_MR) PDMC Channel 1 Enable Position */
#define PDMC_MR_PDMCEN1_Msk                   (_U_(0x1) << PDMC_MR_PDMCEN1_Pos)                    /**< (PDMC_MR) PDMC Channel 1 Enable Mask */
#define PDMC_MR_PDMCEN1(value)                (PDMC_MR_PDMCEN1_Msk & ((value) << PDMC_MR_PDMCEN1_Pos))
#define   PDMC_MR_PDMCEN1_DISABLE_Val         _U_(0x0)                                             /**< (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN1_ENABLE_Val          _U_(0x1)                                             /**< (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN1_DISABLE               (PDMC_MR_PDMCEN1_DISABLE_Val << PDMC_MR_PDMCEN1_Pos) /**< (PDMC_MR) PDMC is disabled. Position  */
#define PDMC_MR_PDMCEN1_ENABLE                (PDMC_MR_PDMCEN1_ENABLE_Val << PDMC_MR_PDMCEN1_Pos)  /**< (PDMC_MR) PDMC is enabled. Position  */
#define PDMC_MR_PDMCEN2_Pos                   _U_(2)                                               /**< (PDMC_MR) PDMC Channel 2 Enable Position */
#define PDMC_MR_PDMCEN2_Msk                   (_U_(0x1) << PDMC_MR_PDMCEN2_Pos)                    /**< (PDMC_MR) PDMC Channel 2 Enable Mask */
#define PDMC_MR_PDMCEN2(value)                (PDMC_MR_PDMCEN2_Msk & ((value) << PDMC_MR_PDMCEN2_Pos))
#define   PDMC_MR_PDMCEN2_DISABLE_Val         _U_(0x0)                                             /**< (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN2_ENABLE_Val          _U_(0x1)                                             /**< (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN2_DISABLE               (PDMC_MR_PDMCEN2_DISABLE_Val << PDMC_MR_PDMCEN2_Pos) /**< (PDMC_MR) PDMC is disabled. Position  */
#define PDMC_MR_PDMCEN2_ENABLE                (PDMC_MR_PDMCEN2_ENABLE_Val << PDMC_MR_PDMCEN2_Pos)  /**< (PDMC_MR) PDMC is enabled. Position  */
#define PDMC_MR_PDMCEN3_Pos                   _U_(3)                                               /**< (PDMC_MR) PDMC Channel 3 Enable Position */
#define PDMC_MR_PDMCEN3_Msk                   (_U_(0x1) << PDMC_MR_PDMCEN3_Pos)                    /**< (PDMC_MR) PDMC Channel 3 Enable Mask */
#define PDMC_MR_PDMCEN3(value)                (PDMC_MR_PDMCEN3_Msk & ((value) << PDMC_MR_PDMCEN3_Pos))
#define   PDMC_MR_PDMCEN3_DISABLE_Val         _U_(0x0)                                             /**< (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN3_ENABLE_Val          _U_(0x1)                                             /**< (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN3_DISABLE               (PDMC_MR_PDMCEN3_DISABLE_Val << PDMC_MR_PDMCEN3_Pos) /**< (PDMC_MR) PDMC is disabled. Position  */
#define PDMC_MR_PDMCEN3_ENABLE                (PDMC_MR_PDMCEN3_ENABLE_Val << PDMC_MR_PDMCEN3_Pos)  /**< (PDMC_MR) PDMC is enabled. Position  */
#define PDMC_MR_OSR_Pos                       _U_(16)                                              /**< (PDMC_MR) Audio Oversampling Ratio Position */
#define PDMC_MR_OSR_Msk                       (_U_(0x3) << PDMC_MR_OSR_Pos)                        /**< (PDMC_MR) Audio Oversampling Ratio Mask */
#define PDMC_MR_OSR(value)                    (PDMC_MR_OSR_Msk & ((value) << PDMC_MR_OSR_Pos))    
#define   PDMC_MR_OSR_OSR64_Val               _U_(0x1)                                             /**< (PDMC_MR) OSR is 64.  */
#define   PDMC_MR_OSR_OSR128_Val              _U_(0x2)                                             /**< (PDMC_MR) OSR is 128.  */
#define   PDMC_MR_OSR_OSR256_Val              _U_(0x3)                                             /**< (PDMC_MR) OSR is 256.  */
#define PDMC_MR_OSR_OSR64                     (PDMC_MR_OSR_OSR64_Val << PDMC_MR_OSR_Pos)           /**< (PDMC_MR) OSR is 64. Position  */
#define PDMC_MR_OSR_OSR128                    (PDMC_MR_OSR_OSR128_Val << PDMC_MR_OSR_Pos)          /**< (PDMC_MR) OSR is 128. Position  */
#define PDMC_MR_OSR_OSR256                    (PDMC_MR_OSR_OSR256_Val << PDMC_MR_OSR_Pos)          /**< (PDMC_MR) OSR is 256. Position  */
#define PDMC_MR_SINCORDER_Pos                 _U_(20)                                              /**< (PDMC_MR) SINC Filter Order Position */
#define PDMC_MR_SINCORDER_Msk                 (_U_(0xF) << PDMC_MR_SINCORDER_Pos)                  /**< (PDMC_MR) SINC Filter Order Mask */
#define PDMC_MR_SINCORDER(value)              (PDMC_MR_SINCORDER_Msk & ((value) << PDMC_MR_SINCORDER_Pos))
#define   PDMC_MR_SINCORDER_ORDER1_Val        _U_(0x1)                                             /**< (PDMC_MR) SINC filter order is 1.  */
#define   PDMC_MR_SINCORDER_ORDER2_Val        _U_(0x2)                                             /**< (PDMC_MR) SINC filter order is 2.  */
#define   PDMC_MR_SINCORDER_ORDER3_Val        _U_(0x3)                                             /**< (PDMC_MR) SINC filter order is 3. Recommended if SINC_OSR=0  */
#define   PDMC_MR_SINCORDER_ORDER4_Val        _U_(0x4)                                             /**< (PDMC_MR) SINC filter order is 4.  */
#define   PDMC_MR_SINCORDER_ORDER5_Val        _U_(0x5)                                             /**< (PDMC_MR) SINC filter order is 5.  */
#define PDMC_MR_SINCORDER_ORDER1              (PDMC_MR_SINCORDER_ORDER1_Val << PDMC_MR_SINCORDER_Pos) /**< (PDMC_MR) SINC filter order is 1. Position  */
#define PDMC_MR_SINCORDER_ORDER2              (PDMC_MR_SINCORDER_ORDER2_Val << PDMC_MR_SINCORDER_Pos) /**< (PDMC_MR) SINC filter order is 2. Position  */
#define PDMC_MR_SINCORDER_ORDER3              (PDMC_MR_SINCORDER_ORDER3_Val << PDMC_MR_SINCORDER_Pos) /**< (PDMC_MR) SINC filter order is 3. Recommended if SINC_OSR=0 Position  */
#define PDMC_MR_SINCORDER_ORDER4              (PDMC_MR_SINCORDER_ORDER4_Val << PDMC_MR_SINCORDER_Pos) /**< (PDMC_MR) SINC filter order is 4. Position  */
#define PDMC_MR_SINCORDER_ORDER5              (PDMC_MR_SINCORDER_ORDER5_Val << PDMC_MR_SINCORDER_Pos) /**< (PDMC_MR) SINC filter order is 5. Position  */
#define PDMC_MR_SINC_OSR_Pos                  _U_(24)                                              /**< (PDMC_MR) SINC Filter Oversampling Ratio Position */
#define PDMC_MR_SINC_OSR_Msk                  (_U_(0xF) << PDMC_MR_SINC_OSR_Pos)                   /**< (PDMC_MR) SINC Filter Oversampling Ratio Mask */
#define PDMC_MR_SINC_OSR(value)               (PDMC_MR_SINC_OSR_Msk & ((value) << PDMC_MR_SINC_OSR_Pos))
#define   PDMC_MR_SINC_OSR_DISABLE_Val        _U_(0x0)                                             /**< (PDMC_MR) Audio filtering mode. The SINC filter OSR is implicitly defined by the PDMC_MR.OSR field.  */
#define   PDMC_MR_SINC_OSR_OSR8_Val           _U_(0x1)                                             /**< (PDMC_MR) The SINC filter OSR is 8.  */
#define   PDMC_MR_SINC_OSR_OSR16_Val          _U_(0x2)                                             /**< (PDMC_MR) The SINC filter OSR is 16.  */
#define   PDMC_MR_SINC_OSR_OSR32_Val          _U_(0x3)                                             /**< (PDMC_MR) The SINC filter OSR is 32.  */
#define   PDMC_MR_SINC_OSR_OSR64_Val          _U_(0x4)                                             /**< (PDMC_MR) The SINC filter OSR is 64.  */
#define   PDMC_MR_SINC_OSR_OSR128_Val         _U_(0x5)                                             /**< (PDMC_MR) The SINC filter OSR is 128.  */
#define   PDMC_MR_SINC_OSR_OSR256_Val         _U_(0x6)                                             /**< (PDMC_MR) The SINC filter OSR is 256.  */
#define PDMC_MR_SINC_OSR_DISABLE              (PDMC_MR_SINC_OSR_DISABLE_Val << PDMC_MR_SINC_OSR_Pos) /**< (PDMC_MR) Audio filtering mode. The SINC filter OSR is implicitly defined by the PDMC_MR.OSR field. Position  */
#define PDMC_MR_SINC_OSR_OSR8                 (PDMC_MR_SINC_OSR_OSR8_Val << PDMC_MR_SINC_OSR_Pos)  /**< (PDMC_MR) The SINC filter OSR is 8. Position  */
#define PDMC_MR_SINC_OSR_OSR16                (PDMC_MR_SINC_OSR_OSR16_Val << PDMC_MR_SINC_OSR_Pos) /**< (PDMC_MR) The SINC filter OSR is 16. Position  */
#define PDMC_MR_SINC_OSR_OSR32                (PDMC_MR_SINC_OSR_OSR32_Val << PDMC_MR_SINC_OSR_Pos) /**< (PDMC_MR) The SINC filter OSR is 32. Position  */
#define PDMC_MR_SINC_OSR_OSR64                (PDMC_MR_SINC_OSR_OSR64_Val << PDMC_MR_SINC_OSR_Pos) /**< (PDMC_MR) The SINC filter OSR is 64. Position  */
#define PDMC_MR_SINC_OSR_OSR128               (PDMC_MR_SINC_OSR_OSR128_Val << PDMC_MR_SINC_OSR_Pos) /**< (PDMC_MR) The SINC filter OSR is 128. Position  */
#define PDMC_MR_SINC_OSR_OSR256               (PDMC_MR_SINC_OSR_OSR256_Val << PDMC_MR_SINC_OSR_Pos) /**< (PDMC_MR) The SINC filter OSR is 256. Position  */
#define PDMC_MR_CHUNK_Pos                     _U_(28)                                              /**< (PDMC_MR) Chunk Size Position */
#define PDMC_MR_CHUNK_Msk                     (_U_(0xF) << PDMC_MR_CHUNK_Pos)                      /**< (PDMC_MR) Chunk Size Mask */
#define PDMC_MR_CHUNK(value)                  (PDMC_MR_CHUNK_Msk & ((value) << PDMC_MR_CHUNK_Pos))
#define PDMC_MR_Msk                           _U_(0xFFF3000F)                                      /**< (PDMC_MR) Register Mask  */

#define PDMC_MR_PDMCEN_Pos                    _U_(0)                                               /**< (PDMC_MR Position) PDMC Channel x Enable */
#define PDMC_MR_PDMCEN_Msk                    (_U_(0xF) << PDMC_MR_PDMCEN_Pos)                     /**< (PDMC_MR Mask) PDMCEN */
#define PDMC_MR_PDMCEN(value)                 (PDMC_MR_PDMCEN_Msk & ((value) << PDMC_MR_PDMCEN_Pos)) 

/* -------- PDMC_CFGR : (PDMC Offset: 0x08) (R/W 32) Configuration Register -------- */
#define PDMC_CFGR_RESETVALUE                  _U_(0x500044)                                        /**<  (PDMC_CFGR) Configuration Register  Reset Value */

#define PDMC_CFGR_BSSEL0_Pos                  _U_(0)                                               /**< (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL0_Msk                  (_U_(0x1) << PDMC_CFGR_BSSEL0_Pos)                   /**< (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL0(value)               (PDMC_CFGR_BSSEL0_Msk & ((value) << PDMC_CFGR_BSSEL0_Pos))
#define   PDMC_CFGR_BSSEL0_0_Val              _U_(0x0)                                             /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL0_1_Val              _U_(0x1)                                             /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL0_0                    (PDMC_CFGR_BSSEL0_0_Val << PDMC_CFGR_BSSEL0_Pos)     /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on positive edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL0_1                    (PDMC_CFGR_BSSEL0_1_Val << PDMC_CFGR_BSSEL0_Pos)     /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on negative edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL1_Pos                  _U_(2)                                               /**< (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL1_Msk                  (_U_(0x1) << PDMC_CFGR_BSSEL1_Pos)                   /**< (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL1(value)               (PDMC_CFGR_BSSEL1_Msk & ((value) << PDMC_CFGR_BSSEL1_Pos))
#define   PDMC_CFGR_BSSEL1_0_Val              _U_(0x0)                                             /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL1_1_Val              _U_(0x1)                                             /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL1_0                    (PDMC_CFGR_BSSEL1_0_Val << PDMC_CFGR_BSSEL1_Pos)     /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on positive edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL1_1                    (PDMC_CFGR_BSSEL1_1_Val << PDMC_CFGR_BSSEL1_Pos)     /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on negative edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL2_Pos                  _U_(4)                                               /**< (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL2_Msk                  (_U_(0x1) << PDMC_CFGR_BSSEL2_Pos)                   /**< (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL2(value)               (PDMC_CFGR_BSSEL2_Msk & ((value) << PDMC_CFGR_BSSEL2_Pos))
#define   PDMC_CFGR_BSSEL2_0_Val              _U_(0x0)                                             /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL2_1_Val              _U_(0x1)                                             /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL2_0                    (PDMC_CFGR_BSSEL2_0_Val << PDMC_CFGR_BSSEL2_Pos)     /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on positive edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL2_1                    (PDMC_CFGR_BSSEL2_1_Val << PDMC_CFGR_BSSEL2_Pos)     /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on negative edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL3_Pos                  _U_(6)                                               /**< (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL3_Msk                  (_U_(0x1) << PDMC_CFGR_BSSEL3_Pos)                   /**< (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL3(value)               (PDMC_CFGR_BSSEL3_Msk & ((value) << PDMC_CFGR_BSSEL3_Pos))
#define   PDMC_CFGR_BSSEL3_0_Val              _U_(0x0)                                             /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL3_1_Val              _U_(0x1)                                             /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL3_0                    (PDMC_CFGR_BSSEL3_0_Val << PDMC_CFGR_BSSEL3_Pos)     /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on positive edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL3_1                    (PDMC_CFGR_BSSEL3_1_Val << PDMC_CFGR_BSSEL3_Pos)     /**< (PDMC_CFGR) The selected PDMC_DSx source is sampled on negative edge of PDMC_CLK. Position  */
#define PDMC_CFGR_PDMSEL0_Pos                 _U_(16)                                              /**< (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL0_Msk                 (_U_(0x1) << PDMC_CFGR_PDMSEL0_Pos)                  /**< (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL0(value)              (PDMC_CFGR_PDMSEL0_Msk & ((value) << PDMC_CFGR_PDMSEL0_Pos))
#define   PDMC_CFGR_PDMSEL0_0_Val             _U_(0x0)                                             /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL0_1_Val             _U_(0x1)                                             /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL0_0                   (PDMC_CFGR_PDMSEL0_0_Val << PDMC_CFGR_PDMSEL0_Pos)   /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position  */
#define PDMC_CFGR_PDMSEL0_1                   (PDMC_CFGR_PDMSEL0_1_Val << PDMC_CFGR_PDMSEL0_Pos)   /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position  */
#define PDMC_CFGR_PDMSEL1_Pos                 _U_(18)                                              /**< (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL1_Msk                 (_U_(0x1) << PDMC_CFGR_PDMSEL1_Pos)                  /**< (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL1(value)              (PDMC_CFGR_PDMSEL1_Msk & ((value) << PDMC_CFGR_PDMSEL1_Pos))
#define   PDMC_CFGR_PDMSEL1_0_Val             _U_(0x0)                                             /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL1_1_Val             _U_(0x1)                                             /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL1_0                   (PDMC_CFGR_PDMSEL1_0_Val << PDMC_CFGR_PDMSEL1_Pos)   /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position  */
#define PDMC_CFGR_PDMSEL1_1                   (PDMC_CFGR_PDMSEL1_1_Val << PDMC_CFGR_PDMSEL1_Pos)   /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position  */
#define PDMC_CFGR_PDMSEL2_Pos                 _U_(20)                                              /**< (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL2_Msk                 (_U_(0x1) << PDMC_CFGR_PDMSEL2_Pos)                  /**< (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL2(value)              (PDMC_CFGR_PDMSEL2_Msk & ((value) << PDMC_CFGR_PDMSEL2_Pos))
#define   PDMC_CFGR_PDMSEL2_0_Val             _U_(0x0)                                             /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL2_1_Val             _U_(0x1)                                             /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL2_0                   (PDMC_CFGR_PDMSEL2_0_Val << PDMC_CFGR_PDMSEL2_Pos)   /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position  */
#define PDMC_CFGR_PDMSEL2_1                   (PDMC_CFGR_PDMSEL2_1_Val << PDMC_CFGR_PDMSEL2_Pos)   /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position  */
#define PDMC_CFGR_PDMSEL3_Pos                 _U_(22)                                              /**< (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL3_Msk                 (_U_(0x1) << PDMC_CFGR_PDMSEL3_Pos)                  /**< (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL3(value)              (PDMC_CFGR_PDMSEL3_Msk & ((value) << PDMC_CFGR_PDMSEL3_Pos))
#define   PDMC_CFGR_PDMSEL3_0_Val             _U_(0x0)                                             /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL3_1_Val             _U_(0x1)                                             /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL3_0                   (PDMC_CFGR_PDMSEL3_0_Val << PDMC_CFGR_PDMSEL3_Pos)   /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position  */
#define PDMC_CFGR_PDMSEL3_1                   (PDMC_CFGR_PDMSEL3_1_Val << PDMC_CFGR_PDMSEL3_Pos)   /**< (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position  */
#define PDMC_CFGR_Msk                         _U_(0x00550055)                                      /**< (PDMC_CFGR) Register Mask  */

#define PDMC_CFGR_BSSEL_Pos                   _U_(0)                                               /**< (PDMC_CFGR Position) Bitstream Source Selection */
#define PDMC_CFGR_BSSEL_Msk                   (_U_(0xF) << PDMC_CFGR_BSSEL_Pos)                    /**< (PDMC_CFGR Mask) BSSEL */
#define PDMC_CFGR_BSSEL(value)                (PDMC_CFGR_BSSEL_Msk & ((value) << PDMC_CFGR_BSSEL_Pos)) 
#define PDMC_CFGR_PDMSEL_Pos                  _U_(16)                                              /**< (PDMC_CFGR Position) PDM Microphone Source Selection */
#define PDMC_CFGR_PDMSEL_Msk                  (_U_(0xF) << PDMC_CFGR_PDMSEL_Pos)                   /**< (PDMC_CFGR Mask) PDMSEL */
#define PDMC_CFGR_PDMSEL(value)               (PDMC_CFGR_PDMSEL_Msk & ((value) << PDMC_CFGR_PDMSEL_Pos)) 

/* -------- PDMC_RHR : (PDMC Offset: 0x0C) ( R/ 32) Receive Holding Register -------- */
#define PDMC_RHR_RESETVALUE                   _U_(0x00)                                            /**<  (PDMC_RHR) Receive Holding Register  Reset Value */

#define PDMC_RHR_DATA_Pos                     _U_(0)                                               /**< (PDMC_RHR) Converted Data Position */
#define PDMC_RHR_DATA_Msk                     (_U_(0xFFFFFF) << PDMC_RHR_DATA_Pos)                 /**< (PDMC_RHR) Converted Data Mask */
#define PDMC_RHR_DATA(value)                  (PDMC_RHR_DATA_Msk & ((value) << PDMC_RHR_DATA_Pos))
#define PDMC_RHR_CHANNEL_Pos                  _U_(24)                                              /**< (PDMC_RHR) Channel Index of Data Position */
#define PDMC_RHR_CHANNEL_Msk                  (_U_(0xFF) << PDMC_RHR_CHANNEL_Pos)                  /**< (PDMC_RHR) Channel Index of Data Mask */
#define PDMC_RHR_CHANNEL(value)               (PDMC_RHR_CHANNEL_Msk & ((value) << PDMC_RHR_CHANNEL_Pos))
#define PDMC_RHR_Msk                          _U_(0xFFFFFFFF)                                      /**< (PDMC_RHR) Register Mask  */


/* -------- PDMC_IER : (PDMC Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#define PDMC_IER_RXRDY_Pos                    _U_(0)                                               /**< (PDMC_IER) Receive Ready Interrupt Enable Position */
#define PDMC_IER_RXRDY_Msk                    (_U_(0x1) << PDMC_IER_RXRDY_Pos)                     /**< (PDMC_IER) Receive Ready Interrupt Enable Mask */
#define PDMC_IER_RXRDY(value)                 (PDMC_IER_RXRDY_Msk & ((value) << PDMC_IER_RXRDY_Pos))
#define PDMC_IER_RXEMPTY_Pos                  _U_(1)                                               /**< (PDMC_IER) Receive FIFO Empty Interrupt Enable Position */
#define PDMC_IER_RXEMPTY_Msk                  (_U_(0x1) << PDMC_IER_RXEMPTY_Pos)                   /**< (PDMC_IER) Receive FIFO Empty Interrupt Enable Mask */
#define PDMC_IER_RXEMPTY(value)               (PDMC_IER_RXEMPTY_Msk & ((value) << PDMC_IER_RXEMPTY_Pos))
#define PDMC_IER_RXFULL_Pos                   _U_(2)                                               /**< (PDMC_IER) Receive FIFO Full Interrupt Enable Position */
#define PDMC_IER_RXFULL_Msk                   (_U_(0x1) << PDMC_IER_RXFULL_Pos)                    /**< (PDMC_IER) Receive FIFO Full Interrupt Enable Mask */
#define PDMC_IER_RXFULL(value)                (PDMC_IER_RXFULL_Msk & ((value) << PDMC_IER_RXFULL_Pos))
#define PDMC_IER_RXCHUNK_Pos                  _U_(3)                                               /**< (PDMC_IER) Receive FIFO Chunk Interrupt Enable Position */
#define PDMC_IER_RXCHUNK_Msk                  (_U_(0x1) << PDMC_IER_RXCHUNK_Pos)                   /**< (PDMC_IER) Receive FIFO Chunk Interrupt Enable Mask */
#define PDMC_IER_RXCHUNK(value)               (PDMC_IER_RXCHUNK_Msk & ((value) << PDMC_IER_RXCHUNK_Pos))
#define PDMC_IER_RXUDR_Pos                    _U_(4)                                               /**< (PDMC_IER) Receive Under Flow Interrupt Enable Position */
#define PDMC_IER_RXUDR_Msk                    (_U_(0x1) << PDMC_IER_RXUDR_Pos)                     /**< (PDMC_IER) Receive Under Flow Interrupt Enable Mask */
#define PDMC_IER_RXUDR(value)                 (PDMC_IER_RXUDR_Msk & ((value) << PDMC_IER_RXUDR_Pos))
#define PDMC_IER_RXOVR_Pos                    _U_(5)                                               /**< (PDMC_IER) Receive Over Flow Interrupt Enable Position */
#define PDMC_IER_RXOVR_Msk                    (_U_(0x1) << PDMC_IER_RXOVR_Pos)                     /**< (PDMC_IER) Receive Over Flow Interrupt Enable Mask */
#define PDMC_IER_RXOVR(value)                 (PDMC_IER_RXOVR_Msk & ((value) << PDMC_IER_RXOVR_Pos))
#define PDMC_IER_WPERR_Pos                    _U_(28)                                              /**< (PDMC_IER) Write Protection Error Enable Position */
#define PDMC_IER_WPERR_Msk                    (_U_(0x1) << PDMC_IER_WPERR_Pos)                     /**< (PDMC_IER) Write Protection Error Enable Mask */
#define PDMC_IER_WPERR(value)                 (PDMC_IER_WPERR_Msk & ((value) << PDMC_IER_WPERR_Pos))
#define PDMC_IER_Msk                          _U_(0x1000003F)                                      /**< (PDMC_IER) Register Mask  */


/* -------- PDMC_IDR : (PDMC Offset: 0x18) ( /W 32) Interrupt Disable Register -------- */
#define PDMC_IDR_RXRDY_Pos                    _U_(0)                                               /**< (PDMC_IDR) Receive Ready Interrupt Disable Position */
#define PDMC_IDR_RXRDY_Msk                    (_U_(0x1) << PDMC_IDR_RXRDY_Pos)                     /**< (PDMC_IDR) Receive Ready Interrupt Disable Mask */
#define PDMC_IDR_RXRDY(value)                 (PDMC_IDR_RXRDY_Msk & ((value) << PDMC_IDR_RXRDY_Pos))
#define PDMC_IDR_RXEMPTY_Pos                  _U_(1)                                               /**< (PDMC_IDR) Receive FIFO Empty Interrupt Disable Position */
#define PDMC_IDR_RXEMPTY_Msk                  (_U_(0x1) << PDMC_IDR_RXEMPTY_Pos)                   /**< (PDMC_IDR) Receive FIFO Empty Interrupt Disable Mask */
#define PDMC_IDR_RXEMPTY(value)               (PDMC_IDR_RXEMPTY_Msk & ((value) << PDMC_IDR_RXEMPTY_Pos))
#define PDMC_IDR_RXFULL_Pos                   _U_(2)                                               /**< (PDMC_IDR) Receive FIFO Full Interrupt Disable Position */
#define PDMC_IDR_RXFULL_Msk                   (_U_(0x1) << PDMC_IDR_RXFULL_Pos)                    /**< (PDMC_IDR) Receive FIFO Full Interrupt Disable Mask */
#define PDMC_IDR_RXFULL(value)                (PDMC_IDR_RXFULL_Msk & ((value) << PDMC_IDR_RXFULL_Pos))
#define PDMC_IDR_RXCHUNK_Pos                  _U_(3)                                               /**< (PDMC_IDR) Receive FIFO Chunk Interrupt Disable Position */
#define PDMC_IDR_RXCHUNK_Msk                  (_U_(0x1) << PDMC_IDR_RXCHUNK_Pos)                   /**< (PDMC_IDR) Receive FIFO Chunk Interrupt Disable Mask */
#define PDMC_IDR_RXCHUNK(value)               (PDMC_IDR_RXCHUNK_Msk & ((value) << PDMC_IDR_RXCHUNK_Pos))
#define PDMC_IDR_RXUDR_Pos                    _U_(4)                                               /**< (PDMC_IDR) Receive Under Flow Interrupt Disable Position */
#define PDMC_IDR_RXUDR_Msk                    (_U_(0x1) << PDMC_IDR_RXUDR_Pos)                     /**< (PDMC_IDR) Receive Under Flow Interrupt Disable Mask */
#define PDMC_IDR_RXUDR(value)                 (PDMC_IDR_RXUDR_Msk & ((value) << PDMC_IDR_RXUDR_Pos))
#define PDMC_IDR_RXOVR_Pos                    _U_(5)                                               /**< (PDMC_IDR) Receive Over Flow Interrupt Disable Position */
#define PDMC_IDR_RXOVR_Msk                    (_U_(0x1) << PDMC_IDR_RXOVR_Pos)                     /**< (PDMC_IDR) Receive Over Flow Interrupt Disable Mask */
#define PDMC_IDR_RXOVR(value)                 (PDMC_IDR_RXOVR_Msk & ((value) << PDMC_IDR_RXOVR_Pos))
#define PDMC_IDR_WPERR_Pos                    _U_(28)                                              /**< (PDMC_IDR) Write Protection Error Disable Position */
#define PDMC_IDR_WPERR_Msk                    (_U_(0x1) << PDMC_IDR_WPERR_Pos)                     /**< (PDMC_IDR) Write Protection Error Disable Mask */
#define PDMC_IDR_WPERR(value)                 (PDMC_IDR_WPERR_Msk & ((value) << PDMC_IDR_WPERR_Pos))
#define PDMC_IDR_Msk                          _U_(0x1000003F)                                      /**< (PDMC_IDR) Register Mask  */


/* -------- PDMC_IMR : (PDMC Offset: 0x1C) ( R/ 32) Interrupt Mask Register -------- */
#define PDMC_IMR_RESETVALUE                   _U_(0x00)                                            /**<  (PDMC_IMR) Interrupt Mask Register  Reset Value */

#define PDMC_IMR_RXRDY_Pos                    _U_(0)                                               /**< (PDMC_IMR) Receive Ready Interrupt Mask Position */
#define PDMC_IMR_RXRDY_Msk                    (_U_(0x1) << PDMC_IMR_RXRDY_Pos)                     /**< (PDMC_IMR) Receive Ready Interrupt Mask Mask */
#define PDMC_IMR_RXRDY(value)                 (PDMC_IMR_RXRDY_Msk & ((value) << PDMC_IMR_RXRDY_Pos))
#define PDMC_IMR_RXEMPTY_Pos                  _U_(1)                                               /**< (PDMC_IMR) Receive FIFO Empty Interrupt Mask Position */
#define PDMC_IMR_RXEMPTY_Msk                  (_U_(0x1) << PDMC_IMR_RXEMPTY_Pos)                   /**< (PDMC_IMR) Receive FIFO Empty Interrupt Mask Mask */
#define PDMC_IMR_RXEMPTY(value)               (PDMC_IMR_RXEMPTY_Msk & ((value) << PDMC_IMR_RXEMPTY_Pos))
#define PDMC_IMR_RXFULL_Pos                   _U_(2)                                               /**< (PDMC_IMR) Receive FIFO Full Interrupt Mask Position */
#define PDMC_IMR_RXFULL_Msk                   (_U_(0x1) << PDMC_IMR_RXFULL_Pos)                    /**< (PDMC_IMR) Receive FIFO Full Interrupt Mask Mask */
#define PDMC_IMR_RXFULL(value)                (PDMC_IMR_RXFULL_Msk & ((value) << PDMC_IMR_RXFULL_Pos))
#define PDMC_IMR_RXCHUNK_Pos                  _U_(3)                                               /**< (PDMC_IMR) Receive FIFO Chunk Interrupt Mask Position */
#define PDMC_IMR_RXCHUNK_Msk                  (_U_(0x1) << PDMC_IMR_RXCHUNK_Pos)                   /**< (PDMC_IMR) Receive FIFO Chunk Interrupt Mask Mask */
#define PDMC_IMR_RXCHUNK(value)               (PDMC_IMR_RXCHUNK_Msk & ((value) << PDMC_IMR_RXCHUNK_Pos))
#define PDMC_IMR_RXUDR_Pos                    _U_(4)                                               /**< (PDMC_IMR) Receive Under Flow Interrupt Mask Position */
#define PDMC_IMR_RXUDR_Msk                    (_U_(0x1) << PDMC_IMR_RXUDR_Pos)                     /**< (PDMC_IMR) Receive Under Flow Interrupt Mask Mask */
#define PDMC_IMR_RXUDR(value)                 (PDMC_IMR_RXUDR_Msk & ((value) << PDMC_IMR_RXUDR_Pos))
#define PDMC_IMR_RXOVR_Pos                    _U_(5)                                               /**< (PDMC_IMR) Receive Over Flow Interrupt Mask Position */
#define PDMC_IMR_RXOVR_Msk                    (_U_(0x1) << PDMC_IMR_RXOVR_Pos)                     /**< (PDMC_IMR) Receive Over Flow Interrupt Mask Mask */
#define PDMC_IMR_RXOVR(value)                 (PDMC_IMR_RXOVR_Msk & ((value) << PDMC_IMR_RXOVR_Pos))
#define PDMC_IMR_WPERR_Pos                    _U_(28)                                              /**< (PDMC_IMR) Write Protection Error Mask Position */
#define PDMC_IMR_WPERR_Msk                    (_U_(0x1) << PDMC_IMR_WPERR_Pos)                     /**< (PDMC_IMR) Write Protection Error Mask Mask */
#define PDMC_IMR_WPERR(value)                 (PDMC_IMR_WPERR_Msk & ((value) << PDMC_IMR_WPERR_Pos))
#define PDMC_IMR_Msk                          _U_(0x1000003F)                                      /**< (PDMC_IMR) Register Mask  */


/* -------- PDMC_ISR : (PDMC Offset: 0x20) ( R/ 32) Interrupt Status Register -------- */
#define PDMC_ISR_RESETVALUE                   _U_(0x00)                                            /**<  (PDMC_ISR) Interrupt Status Register  Reset Value */

#define PDMC_ISR_RXRDY_Pos                    _U_(0)                                               /**< (PDMC_ISR) Receive Ready Interrupt Status Position */
#define PDMC_ISR_RXRDY_Msk                    (_U_(0x1) << PDMC_ISR_RXRDY_Pos)                     /**< (PDMC_ISR) Receive Ready Interrupt Status Mask */
#define PDMC_ISR_RXRDY(value)                 (PDMC_ISR_RXRDY_Msk & ((value) << PDMC_ISR_RXRDY_Pos))
#define   PDMC_ISR_RXRDY_0_Val                _U_(0x0)                                             /**< (PDMC_ISR) There is no data in the RX FIFO.  */
#define   PDMC_ISR_RXRDY_1_Val                _U_(0x1)                                             /**< (PDMC_ISR) At least one data is in the RX FIFO and can be read through the PDMC_RHR register.  */
#define PDMC_ISR_RXRDY_0                      (PDMC_ISR_RXRDY_0_Val << PDMC_ISR_RXRDY_Pos)         /**< (PDMC_ISR) There is no data in the RX FIFO. Position  */
#define PDMC_ISR_RXRDY_1                      (PDMC_ISR_RXRDY_1_Val << PDMC_ISR_RXRDY_Pos)         /**< (PDMC_ISR) At least one data is in the RX FIFO and can be read through the PDMC_RHR register. Position  */
#define PDMC_ISR_RXEMPTY_Pos                  _U_(1)                                               /**< (PDMC_ISR) Receive FIFO Empty Interrupt Status Position */
#define PDMC_ISR_RXEMPTY_Msk                  (_U_(0x1) << PDMC_ISR_RXEMPTY_Pos)                   /**< (PDMC_ISR) Receive FIFO Empty Interrupt Status Mask */
#define PDMC_ISR_RXEMPTY(value)               (PDMC_ISR_RXEMPTY_Msk & ((value) << PDMC_ISR_RXEMPTY_Pos))
#define   PDMC_ISR_RXEMPTY_0_Val              _U_(0x0)                                             /**< (PDMC_ISR) At least one data is in the RX FIFO.  */
#define   PDMC_ISR_RXEMPTY_1_Val              _U_(0x1)                                             /**< (PDMC_ISR) The RX FIFO is empty.  */
#define PDMC_ISR_RXEMPTY_0                    (PDMC_ISR_RXEMPTY_0_Val << PDMC_ISR_RXEMPTY_Pos)     /**< (PDMC_ISR) At least one data is in the RX FIFO. Position  */
#define PDMC_ISR_RXEMPTY_1                    (PDMC_ISR_RXEMPTY_1_Val << PDMC_ISR_RXEMPTY_Pos)     /**< (PDMC_ISR) The RX FIFO is empty. Position  */
#define PDMC_ISR_RXFULL_Pos                   _U_(2)                                               /**< (PDMC_ISR) Receive FIFO Full Interrupt Status Position */
#define PDMC_ISR_RXFULL_Msk                   (_U_(0x1) << PDMC_ISR_RXFULL_Pos)                    /**< (PDMC_ISR) Receive FIFO Full Interrupt Status Mask */
#define PDMC_ISR_RXFULL(value)                (PDMC_ISR_RXFULL_Msk & ((value) << PDMC_ISR_RXFULL_Pos))
#define   PDMC_ISR_RXFULL_0_Val               _U_(0x0)                                             /**< (PDMC_ISR) The RX FIFO is not full and can still receive data.  */
#define   PDMC_ISR_RXFULL_1_Val               _U_(0x1)                                             /**< (PDMC_ISR) The RX FIFO is full and cannot receive more data.  */
#define PDMC_ISR_RXFULL_0                     (PDMC_ISR_RXFULL_0_Val << PDMC_ISR_RXFULL_Pos)       /**< (PDMC_ISR) The RX FIFO is not full and can still receive data. Position  */
#define PDMC_ISR_RXFULL_1                     (PDMC_ISR_RXFULL_1_Val << PDMC_ISR_RXFULL_Pos)       /**< (PDMC_ISR) The RX FIFO is full and cannot receive more data. Position  */
#define PDMC_ISR_RXCHUNK_Pos                  _U_(3)                                               /**< (PDMC_ISR) Receive FIFO Chunk Interrupt Status Position */
#define PDMC_ISR_RXCHUNK_Msk                  (_U_(0x1) << PDMC_ISR_RXCHUNK_Pos)                   /**< (PDMC_ISR) Receive FIFO Chunk Interrupt Status Mask */
#define PDMC_ISR_RXCHUNK(value)               (PDMC_ISR_RXCHUNK_Msk & ((value) << PDMC_ISR_RXCHUNK_Pos))
#define   PDMC_ISR_RXCHUNK_0_Val              _U_(0x0)                                             /**< (PDMC_ISR) There is less than PDMC_MR.CHUNK data in the RX FIFO.  */
#define   PDMC_ISR_RXCHUNK_1_Val              _U_(0x1)                                             /**< (PDMC_ISR) At least PDMC_MR.CHUNK data can be read in the RX FIFO.  */
#define PDMC_ISR_RXCHUNK_0                    (PDMC_ISR_RXCHUNK_0_Val << PDMC_ISR_RXCHUNK_Pos)     /**< (PDMC_ISR) There is less than PDMC_MR.CHUNK data in the RX FIFO. Position  */
#define PDMC_ISR_RXCHUNK_1                    (PDMC_ISR_RXCHUNK_1_Val << PDMC_ISR_RXCHUNK_Pos)     /**< (PDMC_ISR) At least PDMC_MR.CHUNK data can be read in the RX FIFO. Position  */
#define PDMC_ISR_RXUDR_Pos                    _U_(4)                                               /**< (PDMC_ISR) Receive Under Flow Interrupt Status (cleared on read) Position */
#define PDMC_ISR_RXUDR_Msk                    (_U_(0x1) << PDMC_ISR_RXUDR_Pos)                     /**< (PDMC_ISR) Receive Under Flow Interrupt Status (cleared on read) Mask */
#define PDMC_ISR_RXUDR(value)                 (PDMC_ISR_RXUDR_Msk & ((value) << PDMC_ISR_RXUDR_Pos))
#define   PDMC_ISR_RXUDR_0_Val                _U_(0x0)                                             /**< (PDMC_ISR) No underflow event occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_RXUDR_1_Val                _U_(0x1)                                             /**< (PDMC_ISR) At least one underflow event occurred since the last read of PDMC_ISR.  */
#define PDMC_ISR_RXUDR_0                      (PDMC_ISR_RXUDR_0_Val << PDMC_ISR_RXUDR_Pos)         /**< (PDMC_ISR) No underflow event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_RXUDR_1                      (PDMC_ISR_RXUDR_1_Val << PDMC_ISR_RXUDR_Pos)         /**< (PDMC_ISR) At least one underflow event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_RXOVR_Pos                    _U_(5)                                               /**< (PDMC_ISR) Receive Over Flow Interrupt Status (cleared on read) Position */
#define PDMC_ISR_RXOVR_Msk                    (_U_(0x1) << PDMC_ISR_RXOVR_Pos)                     /**< (PDMC_ISR) Receive Over Flow Interrupt Status (cleared on read) Mask */
#define PDMC_ISR_RXOVR(value)                 (PDMC_ISR_RXOVR_Msk & ((value) << PDMC_ISR_RXOVR_Pos))
#define   PDMC_ISR_RXOVR_0_Val                _U_(0x0)                                             /**< (PDMC_ISR) No overflow event occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_RXOVR_1_Val                _U_(0x1)                                             /**< (PDMC_ISR) At least one overflow event occurred since the last read of PDMC_ISR.  */
#define PDMC_ISR_RXOVR_0                      (PDMC_ISR_RXOVR_0_Val << PDMC_ISR_RXOVR_Pos)         /**< (PDMC_ISR) No overflow event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_RXOVR_1                      (PDMC_ISR_RXOVR_1_Val << PDMC_ISR_RXOVR_Pos)         /**< (PDMC_ISR) At least one overflow event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SECE_Pos                     _U_(18)                                              /**< (PDMC_ISR) Security and/or Safety Event (cleared on read) Position */
#define PDMC_ISR_SECE_Msk                     (_U_(0x1) << PDMC_ISR_SECE_Pos)                      /**< (PDMC_ISR) Security and/or Safety Event (cleared on read) Mask */
#define PDMC_ISR_SECE(value)                  (PDMC_ISR_SECE_Msk & ((value) << PDMC_ISR_SECE_Pos))
#define   PDMC_ISR_SECE_0_Val                 _U_(0x0)                                             /**< (PDMC_ISR) No security or safety event has occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_SECE_1_Val                 _U_(0x1)                                             /**< (PDMC_ISR) One or more safety or security event occurred since the last read of PDMC_ISR. For details on the event, see PDMC Write Protection Status Register.  */
#define PDMC_ISR_SECE_0                       (PDMC_ISR_SECE_0_Val << PDMC_ISR_SECE_Pos)           /**< (PDMC_ISR) No security or safety event has occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SECE_1                       (PDMC_ISR_SECE_1_Val << PDMC_ISR_SECE_Pos)           /**< (PDMC_ISR) One or more safety or security event occurred since the last read of PDMC_ISR. For details on the event, see PDMC Write Protection Status Register. Position  */
#define PDMC_ISR_WPERR_Pos                    _U_(28)                                              /**< (PDMC_ISR) Write Protection Error Status (cleared on read) Position */
#define PDMC_ISR_WPERR_Msk                    (_U_(0x1) << PDMC_ISR_WPERR_Pos)                     /**< (PDMC_ISR) Write Protection Error Status (cleared on read) Mask */
#define PDMC_ISR_WPERR(value)                 (PDMC_ISR_WPERR_Msk & ((value) << PDMC_ISR_WPERR_Pos))
#define   PDMC_ISR_WPERR_0_Val                _U_(0x0)                                             /**< (PDMC_ISR) No write protection error event occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_WPERR_1_Val                _U_(0x1)                                             /**< (PDMC_ISR) At least one write protection error event occurred since the last read of PDMC_ISR.  */
#define PDMC_ISR_WPERR_0                      (PDMC_ISR_WPERR_0_Val << PDMC_ISR_WPERR_Pos)         /**< (PDMC_ISR) No write protection error event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_WPERR_1                      (PDMC_ISR_WPERR_1_Val << PDMC_ISR_WPERR_Pos)         /**< (PDMC_ISR) At least one write protection error event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_Msk                          _U_(0x1004003F)                                      /**< (PDMC_ISR) Register Mask  */


/* -------- PDMC_WPMR : (PDMC Offset: 0x2C) (R/W 32) Write Protection Mode Register -------- */
#define PDMC_WPMR_RESETVALUE                  _U_(0x00)                                            /**<  (PDMC_WPMR) Write Protection Mode Register  Reset Value */

#define PDMC_WPMR_WPEN_Pos                    _U_(0)                                               /**< (PDMC_WPMR) Write Protection Enable Position */
#define PDMC_WPMR_WPEN_Msk                    (_U_(0x1) << PDMC_WPMR_WPEN_Pos)                     /**< (PDMC_WPMR) Write Protection Enable Mask */
#define PDMC_WPMR_WPEN(value)                 (PDMC_WPMR_WPEN_Msk & ((value) << PDMC_WPMR_WPEN_Pos))
#define   PDMC_WPMR_WPEN_0_Val                _U_(0x0)                                             /**< (PDMC_WPMR) Disables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define   PDMC_WPMR_WPEN_1_Val                _U_(0x1)                                             /**< (PDMC_WPMR) Enables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define PDMC_WPMR_WPEN_0                      (PDMC_WPMR_WPEN_0_Val << PDMC_WPMR_WPEN_Pos)         /**< (PDMC_WPMR) Disables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_WPEN_1                      (PDMC_WPMR_WPEN_1_Val << PDMC_WPMR_WPEN_Pos)         /**< (PDMC_WPMR) Enables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_WPITEN_Pos                  _U_(1)                                               /**< (PDMC_WPMR) Write Protection Interrupt Enable Position */
#define PDMC_WPMR_WPITEN_Msk                  (_U_(0x1) << PDMC_WPMR_WPITEN_Pos)                   /**< (PDMC_WPMR) Write Protection Interrupt Enable Mask */
#define PDMC_WPMR_WPITEN(value)               (PDMC_WPMR_WPITEN_Msk & ((value) << PDMC_WPMR_WPITEN_Pos))
#define   PDMC_WPMR_WPITEN_0_Val              _U_(0x0)                                             /**< (PDMC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define   PDMC_WPMR_WPITEN_1_Val              _U_(0x1)                                             /**< (PDMC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define PDMC_WPMR_WPITEN_0                    (PDMC_WPMR_WPITEN_0_Val << PDMC_WPMR_WPITEN_Pos)     /**< (PDMC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_WPITEN_1                    (PDMC_WPMR_WPITEN_1_Val << PDMC_WPMR_WPITEN_Pos)     /**< (PDMC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_WPKEY_Pos                   _U_(8)                                               /**< (PDMC_WPMR) Write Protection Key Position */
#define PDMC_WPMR_WPKEY_Msk                   (_U_(0xFFFFFF) << PDMC_WPMR_WPKEY_Pos)               /**< (PDMC_WPMR) Write Protection Key Mask */
#define PDMC_WPMR_WPKEY(value)                (PDMC_WPMR_WPKEY_Msk & ((value) << PDMC_WPMR_WPKEY_Pos))
#define   PDMC_WPMR_WPKEY_PASSWD_Val          _U_(0x50444D)                                        /**< (PDMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always read at 0.  */
#define PDMC_WPMR_WPKEY_PASSWD                (PDMC_WPMR_WPKEY_PASSWD_Val << PDMC_WPMR_WPKEY_Pos)  /**< (PDMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always read at 0. Position  */
#define PDMC_WPMR_Msk                         _U_(0xFFFFFF03)                                      /**< (PDMC_WPMR) Register Mask  */


/* -------- PDMC_WPSR : (PDMC Offset: 0x30) ( R/ 32) Write Protection Status Register -------- */
#define PDMC_WPSR_RESETVALUE                  _U_(0x00)                                            /**<  (PDMC_WPSR) Write Protection Status Register  Reset Value */

#define PDMC_WPSR_WPVS_Pos                    _U_(0)                                               /**< (PDMC_WPSR) Write Protection Violation Status Position */
#define PDMC_WPSR_WPVS_Msk                    (_U_(0x1) << PDMC_WPSR_WPVS_Pos)                     /**< (PDMC_WPSR) Write Protection Violation Status Mask */
#define PDMC_WPSR_WPVS(value)                 (PDMC_WPSR_WPVS_Msk & ((value) << PDMC_WPSR_WPVS_Pos))
#define   PDMC_WPSR_WPVS_0_Val                _U_(0x0)                                             /**< (PDMC_WPSR) No write protection violation has occurred since the last read of PDMC_WPSR.  */
#define   PDMC_WPSR_WPVS_1_Val                _U_(0x1)                                             /**< (PDMC_WPSR) A write protection violation has occurred since the last read of PDMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC.  */
#define PDMC_WPSR_WPVS_0                      (PDMC_WPSR_WPVS_0_Val << PDMC_WPSR_WPVS_Pos)         /**< (PDMC_WPSR) No write protection violation has occurred since the last read of PDMC_WPSR. Position  */
#define PDMC_WPSR_WPVS_1                      (PDMC_WPSR_WPVS_1_Val << PDMC_WPSR_WPVS_Pos)         /**< (PDMC_WPSR) A write protection violation has occurred since the last read of PDMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC. Position  */
#define PDMC_WPSR_SEQE_Pos                    _U_(2)                                               /**< (PDMC_WPSR) Internal Sequencer Error Position */
#define PDMC_WPSR_SEQE_Msk                    (_U_(0x1) << PDMC_WPSR_SEQE_Pos)                     /**< (PDMC_WPSR) Internal Sequencer Error Mask */
#define PDMC_WPSR_SEQE(value)                 (PDMC_WPSR_SEQE_Msk & ((value) << PDMC_WPSR_SEQE_Pos))
#define   PDMC_WPSR_SEQE_0_Val                _U_(0x0)                                             /**< (PDMC_WPSR) No peripheral internal sequencer error has occurred since the last read of PDMC_WPSR.  */
#define   PDMC_WPSR_SEQE_1_Val                _U_(0x1)                                             /**< (PDMC_WPSR) A peripheral internal sequencer error has occurred since the last read of PDMC_WPSR.  */
#define PDMC_WPSR_SEQE_0                      (PDMC_WPSR_SEQE_0_Val << PDMC_WPSR_SEQE_Pos)         /**< (PDMC_WPSR) No peripheral internal sequencer error has occurred since the last read of PDMC_WPSR. Position  */
#define PDMC_WPSR_SEQE_1                      (PDMC_WPSR_SEQE_1_Val << PDMC_WPSR_SEQE_Pos)         /**< (PDMC_WPSR) A peripheral internal sequencer error has occurred since the last read of PDMC_WPSR. Position  */
#define PDMC_WPSR_WPSRC_Pos                   _U_(8)                                               /**< (PDMC_WPSR) Write Protection Source Position */
#define PDMC_WPSR_WPSRC_Msk                   (_U_(0xFFFF) << PDMC_WPSR_WPSRC_Pos)                 /**< (PDMC_WPSR) Write Protection Source Mask */
#define PDMC_WPSR_WPSRC(value)                (PDMC_WPSR_WPSRC_Msk & ((value) << PDMC_WPSR_WPSRC_Pos))
#define PDMC_WPSR_Msk                         _U_(0x00FFFF05)                                      /**< (PDMC_WPSR) Register Mask  */


/** \brief PDMC register offsets definitions */
#define PDMC_CR_REG_OFST               (0x00)              /**< (PDMC_CR) Control Register Offset */
#define PDMC_MR_REG_OFST               (0x04)              /**< (PDMC_MR) Mode Register Offset */
#define PDMC_CFGR_REG_OFST             (0x08)              /**< (PDMC_CFGR) Configuration Register Offset */
#define PDMC_RHR_REG_OFST              (0x0C)              /**< (PDMC_RHR) Receive Holding Register Offset */
#define PDMC_IER_REG_OFST              (0x14)              /**< (PDMC_IER) Interrupt Enable Register Offset */
#define PDMC_IDR_REG_OFST              (0x18)              /**< (PDMC_IDR) Interrupt Disable Register Offset */
#define PDMC_IMR_REG_OFST              (0x1C)              /**< (PDMC_IMR) Interrupt Mask Register Offset */
#define PDMC_ISR_REG_OFST              (0x20)              /**< (PDMC_ISR) Interrupt Status Register Offset */
#define PDMC_WPMR_REG_OFST             (0x2C)              /**< (PDMC_WPMR) Write Protection Mode Register Offset */
#define PDMC_WPSR_REG_OFST             (0x30)              /**< (PDMC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PDMC register API structure */
typedef struct
{  /* Pulse Density Microphone Controller */
  __O   uint32_t                       PDMC_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       PDMC_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       PDMC_CFGR;          /**< Offset: 0x08 (R/W  32) Configuration Register */
  __I   uint32_t                       PDMC_RHR;           /**< Offset: 0x0C (R/   32) Receive Holding Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       PDMC_IER;           /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PDMC_IDR;           /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PDMC_IMR;           /**< Offset: 0x1C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       PDMC_ISR;           /**< Offset: 0x20 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved2[0x08];
  __IO  uint32_t                       PDMC_WPMR;          /**< Offset: 0x2C (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PDMC_WPSR;          /**< Offset: 0x30 (R/   32) Write Protection Status Register */
} pdmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_PDMC_COMPONENT_H_ */
