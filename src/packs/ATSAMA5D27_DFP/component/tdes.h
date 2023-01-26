/*
 * Component description for TDES
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
#ifndef _SAMA5D2_TDES_COMPONENT_H_
#define _SAMA5D2_TDES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TDES                                         */
/* ************************************************************************** */

/* -------- TDES_CR : (TDES Offset: 0x00) ( /W 32) Control Register -------- */
#define TDES_CR_START_Pos                     _U_(0)                                               /**< (TDES_CR) Start Processing Position */
#define TDES_CR_START_Msk                     (_U_(0x1) << TDES_CR_START_Pos)                      /**< (TDES_CR) Start Processing Mask */
#define TDES_CR_START(value)                  (TDES_CR_START_Msk & ((value) << TDES_CR_START_Pos))
#define TDES_CR_SWRST_Pos                     _U_(8)                                               /**< (TDES_CR) Software Reset Position */
#define TDES_CR_SWRST_Msk                     (_U_(0x1) << TDES_CR_SWRST_Pos)                      /**< (TDES_CR) Software Reset Mask */
#define TDES_CR_SWRST(value)                  (TDES_CR_SWRST_Msk & ((value) << TDES_CR_SWRST_Pos))
#define TDES_CR_Msk                           _U_(0x00000101)                                      /**< (TDES_CR) Register Mask  */


/* -------- TDES_MR : (TDES Offset: 0x04) (R/W 32) Mode Register -------- */
#define TDES_MR_CIPHER_Pos                    _U_(0)                                               /**< (TDES_MR) Processing Mode Position */
#define TDES_MR_CIPHER_Msk                    (_U_(0x1) << TDES_MR_CIPHER_Pos)                     /**< (TDES_MR) Processing Mode Mask */
#define TDES_MR_CIPHER(value)                 (TDES_MR_CIPHER_Msk & ((value) << TDES_MR_CIPHER_Pos))
#define   TDES_MR_CIPHER_DECRYPT_Val          _U_(0x0)                                             /**< (TDES_MR) Decrypts data.  */
#define   TDES_MR_CIPHER_ENCRYPT_Val          _U_(0x1)                                             /**< (TDES_MR) Encrypts data.  */
#define TDES_MR_CIPHER_DECRYPT                (TDES_MR_CIPHER_DECRYPT_Val << TDES_MR_CIPHER_Pos)   /**< (TDES_MR) Decrypts data. Position  */
#define TDES_MR_CIPHER_ENCRYPT                (TDES_MR_CIPHER_ENCRYPT_Val << TDES_MR_CIPHER_Pos)   /**< (TDES_MR) Encrypts data. Position  */
#define TDES_MR_TDESMOD_Pos                   _U_(1)                                               /**< (TDES_MR) ALGORITHM Mode Position */
#define TDES_MR_TDESMOD_Msk                   (_U_(0x3) << TDES_MR_TDESMOD_Pos)                    /**< (TDES_MR) ALGORITHM Mode Mask */
#define TDES_MR_TDESMOD(value)                (TDES_MR_TDESMOD_Msk & ((value) << TDES_MR_TDESMOD_Pos))
#define   TDES_MR_TDESMOD_SINGLE_DES_Val      _U_(0x0)                                             /**< (TDES_MR) Single DES processing using Key 1 Registers  */
#define   TDES_MR_TDESMOD_TRIPLE_DES_Val      _U_(0x1)                                             /**< (TDES_MR) Triple DES processing using Key 1, Key 2 and Key 3 Registers  */
#define   TDES_MR_TDESMOD_XTEA_Val            _U_(0x2)                                             /**< (TDES_MR) XTEA processing using Key 1 and Key 2 Registers  */
#define TDES_MR_TDESMOD_SINGLE_DES            (TDES_MR_TDESMOD_SINGLE_DES_Val << TDES_MR_TDESMOD_Pos) /**< (TDES_MR) Single DES processing using Key 1 Registers Position  */
#define TDES_MR_TDESMOD_TRIPLE_DES            (TDES_MR_TDESMOD_TRIPLE_DES_Val << TDES_MR_TDESMOD_Pos) /**< (TDES_MR) Triple DES processing using Key 1, Key 2 and Key 3 Registers Position  */
#define TDES_MR_TDESMOD_XTEA                  (TDES_MR_TDESMOD_XTEA_Val << TDES_MR_TDESMOD_Pos)    /**< (TDES_MR) XTEA processing using Key 1 and Key 2 Registers Position  */
#define TDES_MR_KEYMOD_Pos                    _U_(4)                                               /**< (TDES_MR) Key Mode Position */
#define TDES_MR_KEYMOD_Msk                    (_U_(0x1) << TDES_MR_KEYMOD_Pos)                     /**< (TDES_MR) Key Mode Mask */
#define TDES_MR_KEYMOD(value)                 (TDES_MR_KEYMOD_Msk & ((value) << TDES_MR_KEYMOD_Pos))
#define TDES_MR_SMOD_Pos                      _U_(8)                                               /**< (TDES_MR) Start Mode Position */
#define TDES_MR_SMOD_Msk                      (_U_(0x3) << TDES_MR_SMOD_Pos)                       /**< (TDES_MR) Start Mode Mask */
#define TDES_MR_SMOD(value)                   (TDES_MR_SMOD_Msk & ((value) << TDES_MR_SMOD_Pos))  
#define   TDES_MR_SMOD_MANUAL_START_Val       _U_(0x0)                                             /**< (TDES_MR) Manual Mode  */
#define   TDES_MR_SMOD_AUTO_START_Val         _U_(0x1)                                             /**< (TDES_MR) Auto Mode  */
#define   TDES_MR_SMOD_IDATAR0_START_Val      _U_(0x2)                                             /**< (TDES_MR) TDES_IDATAR0 accesses only Auto Mode  */
#define TDES_MR_SMOD_MANUAL_START             (TDES_MR_SMOD_MANUAL_START_Val << TDES_MR_SMOD_Pos)  /**< (TDES_MR) Manual Mode Position  */
#define TDES_MR_SMOD_AUTO_START               (TDES_MR_SMOD_AUTO_START_Val << TDES_MR_SMOD_Pos)    /**< (TDES_MR) Auto Mode Position  */
#define TDES_MR_SMOD_IDATAR0_START            (TDES_MR_SMOD_IDATAR0_START_Val << TDES_MR_SMOD_Pos) /**< (TDES_MR) TDES_IDATAR0 accesses only Auto Mode Position  */
#define TDES_MR_OPMOD_Pos                     _U_(12)                                              /**< (TDES_MR) Operating Mode Position */
#define TDES_MR_OPMOD_Msk                     (_U_(0x3) << TDES_MR_OPMOD_Pos)                      /**< (TDES_MR) Operating Mode Mask */
#define TDES_MR_OPMOD(value)                  (TDES_MR_OPMOD_Msk & ((value) << TDES_MR_OPMOD_Pos))
#define   TDES_MR_OPMOD_ECB_Val               _U_(0x0)                                             /**< (TDES_MR) Electronic Code Book mode  */
#define   TDES_MR_OPMOD_CBC_Val               _U_(0x1)                                             /**< (TDES_MR) Cipher Block Chaining mode  */
#define   TDES_MR_OPMOD_OFB_Val               _U_(0x2)                                             /**< (TDES_MR) Output Feedback mode  */
#define   TDES_MR_OPMOD_CFB_Val               _U_(0x3)                                             /**< (TDES_MR) Cipher Feedback mode  */
#define TDES_MR_OPMOD_ECB                     (TDES_MR_OPMOD_ECB_Val << TDES_MR_OPMOD_Pos)         /**< (TDES_MR) Electronic Code Book mode Position  */
#define TDES_MR_OPMOD_CBC                     (TDES_MR_OPMOD_CBC_Val << TDES_MR_OPMOD_Pos)         /**< (TDES_MR) Cipher Block Chaining mode Position  */
#define TDES_MR_OPMOD_OFB                     (TDES_MR_OPMOD_OFB_Val << TDES_MR_OPMOD_Pos)         /**< (TDES_MR) Output Feedback mode Position  */
#define TDES_MR_OPMOD_CFB                     (TDES_MR_OPMOD_CFB_Val << TDES_MR_OPMOD_Pos)         /**< (TDES_MR) Cipher Feedback mode Position  */
#define TDES_MR_LOD_Pos                       _U_(15)                                              /**< (TDES_MR) Last Output Data Mode Position */
#define TDES_MR_LOD_Msk                       (_U_(0x1) << TDES_MR_LOD_Pos)                        /**< (TDES_MR) Last Output Data Mode Mask */
#define TDES_MR_LOD(value)                    (TDES_MR_LOD_Msk & ((value) << TDES_MR_LOD_Pos))    
#define TDES_MR_CFBS_Pos                      _U_(16)                                              /**< (TDES_MR) Cipher Feedback Data Size Position */
#define TDES_MR_CFBS_Msk                      (_U_(0x3) << TDES_MR_CFBS_Pos)                       /**< (TDES_MR) Cipher Feedback Data Size Mask */
#define TDES_MR_CFBS(value)                   (TDES_MR_CFBS_Msk & ((value) << TDES_MR_CFBS_Pos))  
#define   TDES_MR_CFBS_SIZE_64BIT_Val         _U_(0x0)                                             /**< (TDES_MR) 64-bit  */
#define   TDES_MR_CFBS_SIZE_32BIT_Val         _U_(0x1)                                             /**< (TDES_MR) 32-bit  */
#define   TDES_MR_CFBS_SIZE_16BIT_Val         _U_(0x2)                                             /**< (TDES_MR) 16-bit  */
#define   TDES_MR_CFBS_SIZE_8BIT_Val          _U_(0x3)                                             /**< (TDES_MR) 8-bit  */
#define TDES_MR_CFBS_SIZE_64BIT               (TDES_MR_CFBS_SIZE_64BIT_Val << TDES_MR_CFBS_Pos)    /**< (TDES_MR) 64-bit Position  */
#define TDES_MR_CFBS_SIZE_32BIT               (TDES_MR_CFBS_SIZE_32BIT_Val << TDES_MR_CFBS_Pos)    /**< (TDES_MR) 32-bit Position  */
#define TDES_MR_CFBS_SIZE_16BIT               (TDES_MR_CFBS_SIZE_16BIT_Val << TDES_MR_CFBS_Pos)    /**< (TDES_MR) 16-bit Position  */
#define TDES_MR_CFBS_SIZE_8BIT                (TDES_MR_CFBS_SIZE_8BIT_Val << TDES_MR_CFBS_Pos)     /**< (TDES_MR) 8-bit Position  */
#define TDES_MR_Msk                           _U_(0x0003B317)                                      /**< (TDES_MR) Register Mask  */


/* -------- TDES_IER : (TDES Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define TDES_IER_DATRDY_Pos                   _U_(0)                                               /**< (TDES_IER) Data Ready Interrupt Enable Position */
#define TDES_IER_DATRDY_Msk                   (_U_(0x1) << TDES_IER_DATRDY_Pos)                    /**< (TDES_IER) Data Ready Interrupt Enable Mask */
#define TDES_IER_DATRDY(value)                (TDES_IER_DATRDY_Msk & ((value) << TDES_IER_DATRDY_Pos))
#define TDES_IER_URAD_Pos                     _U_(8)                                               /**< (TDES_IER) Unspecified Register Access Detection Interrupt Enable Position */
#define TDES_IER_URAD_Msk                     (_U_(0x1) << TDES_IER_URAD_Pos)                      /**< (TDES_IER) Unspecified Register Access Detection Interrupt Enable Mask */
#define TDES_IER_URAD(value)                  (TDES_IER_URAD_Msk & ((value) << TDES_IER_URAD_Pos))
#define TDES_IER_Msk                          _U_(0x00000101)                                      /**< (TDES_IER) Register Mask  */


/* -------- TDES_IDR : (TDES Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define TDES_IDR_DATRDY_Pos                   _U_(0)                                               /**< (TDES_IDR) Data Ready Interrupt Disable Position */
#define TDES_IDR_DATRDY_Msk                   (_U_(0x1) << TDES_IDR_DATRDY_Pos)                    /**< (TDES_IDR) Data Ready Interrupt Disable Mask */
#define TDES_IDR_DATRDY(value)                (TDES_IDR_DATRDY_Msk & ((value) << TDES_IDR_DATRDY_Pos))
#define TDES_IDR_URAD_Pos                     _U_(8)                                               /**< (TDES_IDR) Unspecified Register Access Detection Interrupt Disable Position */
#define TDES_IDR_URAD_Msk                     (_U_(0x1) << TDES_IDR_URAD_Pos)                      /**< (TDES_IDR) Unspecified Register Access Detection Interrupt Disable Mask */
#define TDES_IDR_URAD(value)                  (TDES_IDR_URAD_Msk & ((value) << TDES_IDR_URAD_Pos))
#define TDES_IDR_Msk                          _U_(0x00000101)                                      /**< (TDES_IDR) Register Mask  */


/* -------- TDES_IMR : (TDES Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define TDES_IMR_DATRDY_Pos                   _U_(0)                                               /**< (TDES_IMR) Data Ready Interrupt Mask Position */
#define TDES_IMR_DATRDY_Msk                   (_U_(0x1) << TDES_IMR_DATRDY_Pos)                    /**< (TDES_IMR) Data Ready Interrupt Mask Mask */
#define TDES_IMR_DATRDY(value)                (TDES_IMR_DATRDY_Msk & ((value) << TDES_IMR_DATRDY_Pos))
#define TDES_IMR_URAD_Pos                     _U_(8)                                               /**< (TDES_IMR) Unspecified Register Access Detection Interrupt Mask Position */
#define TDES_IMR_URAD_Msk                     (_U_(0x1) << TDES_IMR_URAD_Pos)                      /**< (TDES_IMR) Unspecified Register Access Detection Interrupt Mask Mask */
#define TDES_IMR_URAD(value)                  (TDES_IMR_URAD_Msk & ((value) << TDES_IMR_URAD_Pos))
#define TDES_IMR_Msk                          _U_(0x00000101)                                      /**< (TDES_IMR) Register Mask  */


/* -------- TDES_ISR : (TDES Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define TDES_ISR_DATRDY_Pos                   _U_(0)                                               /**< (TDES_ISR) Data Ready (cleared by setting bit START or bit SWRST in TDES_CR or by reading TDES_ODATARx) Position */
#define TDES_ISR_DATRDY_Msk                   (_U_(0x1) << TDES_ISR_DATRDY_Pos)                    /**< (TDES_ISR) Data Ready (cleared by setting bit START or bit SWRST in TDES_CR or by reading TDES_ODATARx) Mask */
#define TDES_ISR_DATRDY(value)                (TDES_ISR_DATRDY_Msk & ((value) << TDES_ISR_DATRDY_Pos))
#define TDES_ISR_URAD_Pos                     _U_(8)                                               /**< (TDES_ISR) Unspecified Register Access Detection Status (cleared by setting bit TDES_CR.SWRST) Position */
#define TDES_ISR_URAD_Msk                     (_U_(0x1) << TDES_ISR_URAD_Pos)                      /**< (TDES_ISR) Unspecified Register Access Detection Status (cleared by setting bit TDES_CR.SWRST) Mask */
#define TDES_ISR_URAD(value)                  (TDES_ISR_URAD_Msk & ((value) << TDES_ISR_URAD_Pos))
#define TDES_ISR_URAT_Pos                     _U_(12)                                              /**< (TDES_ISR) Unspecified Register Access (cleared by setting bit TDES_CR.SWRST) Position */
#define TDES_ISR_URAT_Msk                     (_U_(0x3) << TDES_ISR_URAT_Pos)                      /**< (TDES_ISR) Unspecified Register Access (cleared by setting bit TDES_CR.SWRST) Mask */
#define TDES_ISR_URAT(value)                  (TDES_ISR_URAT_Msk & ((value) << TDES_ISR_URAT_Pos))
#define   TDES_ISR_URAT_IDR_WR_PROCESSING_Val _U_(0x0)                                             /**< (TDES_ISR) Input Data Register written during data processing when SMOD = 0x2 mode.  */
#define   TDES_ISR_URAT_ODR_RD_PROCESSING_Val _U_(0x1)                                             /**< (TDES_ISR) Output Data Register read during data processing.  */
#define   TDES_ISR_URAT_MR_WR_PROCESSING_Val  _U_(0x2)                                             /**< (TDES_ISR) Mode Register written during data processing.  */
#define   TDES_ISR_URAT_WOR_RD_ACCESS_Val     _U_(0x3)                                             /**< (TDES_ISR) Write-only register read access.  */
#define TDES_ISR_URAT_IDR_WR_PROCESSING       (TDES_ISR_URAT_IDR_WR_PROCESSING_Val << TDES_ISR_URAT_Pos) /**< (TDES_ISR) Input Data Register written during data processing when SMOD = 0x2 mode. Position  */
#define TDES_ISR_URAT_ODR_RD_PROCESSING       (TDES_ISR_URAT_ODR_RD_PROCESSING_Val << TDES_ISR_URAT_Pos) /**< (TDES_ISR) Output Data Register read during data processing. Position  */
#define TDES_ISR_URAT_MR_WR_PROCESSING        (TDES_ISR_URAT_MR_WR_PROCESSING_Val << TDES_ISR_URAT_Pos) /**< (TDES_ISR) Mode Register written during data processing. Position  */
#define TDES_ISR_URAT_WOR_RD_ACCESS           (TDES_ISR_URAT_WOR_RD_ACCESS_Val << TDES_ISR_URAT_Pos) /**< (TDES_ISR) Write-only register read access. Position  */
#define TDES_ISR_Msk                          _U_(0x00003101)                                      /**< (TDES_ISR) Register Mask  */


/* -------- TDES_KEY1WR : (TDES Offset: 0x20) ( /W 32) Key 1 Word Register -------- */
#define TDES_KEY1WR_KEY1W_Pos                 _U_(0)                                               /**< (TDES_KEY1WR) Key 1 Word Position */
#define TDES_KEY1WR_KEY1W_Msk                 (_U_(0xFFFFFFFF) << TDES_KEY1WR_KEY1W_Pos)           /**< (TDES_KEY1WR) Key 1 Word Mask */
#define TDES_KEY1WR_KEY1W(value)              (TDES_KEY1WR_KEY1W_Msk & ((value) << TDES_KEY1WR_KEY1W_Pos))
#define TDES_KEY1WR_Msk                       _U_(0xFFFFFFFF)                                      /**< (TDES_KEY1WR) Register Mask  */


/* -------- TDES_KEY2WR : (TDES Offset: 0x28) ( /W 32) Key 2 Word Register -------- */
#define TDES_KEY2WR_KEY2W_Pos                 _U_(0)                                               /**< (TDES_KEY2WR) Key 2 Word Position */
#define TDES_KEY2WR_KEY2W_Msk                 (_U_(0xFFFFFFFF) << TDES_KEY2WR_KEY2W_Pos)           /**< (TDES_KEY2WR) Key 2 Word Mask */
#define TDES_KEY2WR_KEY2W(value)              (TDES_KEY2WR_KEY2W_Msk & ((value) << TDES_KEY2WR_KEY2W_Pos))
#define TDES_KEY2WR_Msk                       _U_(0xFFFFFFFF)                                      /**< (TDES_KEY2WR) Register Mask  */


/* -------- TDES_KEY3WR : (TDES Offset: 0x30) ( /W 32) Key 3 Word Register -------- */
#define TDES_KEY3WR_KEY3W_Pos                 _U_(0)                                               /**< (TDES_KEY3WR) Key 3 Word Position */
#define TDES_KEY3WR_KEY3W_Msk                 (_U_(0xFFFFFFFF) << TDES_KEY3WR_KEY3W_Pos)           /**< (TDES_KEY3WR) Key 3 Word Mask */
#define TDES_KEY3WR_KEY3W(value)              (TDES_KEY3WR_KEY3W_Msk & ((value) << TDES_KEY3WR_KEY3W_Pos))
#define TDES_KEY3WR_Msk                       _U_(0xFFFFFFFF)                                      /**< (TDES_KEY3WR) Register Mask  */


/* -------- TDES_IDATAR : (TDES Offset: 0x40) ( /W 32) Input Data Register -------- */
#define TDES_IDATAR_IDATA_Pos                 _U_(0)                                               /**< (TDES_IDATAR) Input Data Position */
#define TDES_IDATAR_IDATA_Msk                 (_U_(0xFFFFFFFF) << TDES_IDATAR_IDATA_Pos)           /**< (TDES_IDATAR) Input Data Mask */
#define TDES_IDATAR_IDATA(value)              (TDES_IDATAR_IDATA_Msk & ((value) << TDES_IDATAR_IDATA_Pos))
#define TDES_IDATAR_Msk                       _U_(0xFFFFFFFF)                                      /**< (TDES_IDATAR) Register Mask  */


/* -------- TDES_ODATAR : (TDES Offset: 0x50) ( R/ 32) Output Data Register -------- */
#define TDES_ODATAR_ODATA_Pos                 _U_(0)                                               /**< (TDES_ODATAR) Output Data Position */
#define TDES_ODATAR_ODATA_Msk                 (_U_(0xFFFFFFFF) << TDES_ODATAR_ODATA_Pos)           /**< (TDES_ODATAR) Output Data Mask */
#define TDES_ODATAR_ODATA(value)              (TDES_ODATAR_ODATA_Msk & ((value) << TDES_ODATAR_ODATA_Pos))
#define TDES_ODATAR_Msk                       _U_(0xFFFFFFFF)                                      /**< (TDES_ODATAR) Register Mask  */


/* -------- TDES_IVR : (TDES Offset: 0x60) ( /W 32) Initialization Vector Register -------- */
#define TDES_IVR_IV_Pos                       _U_(0)                                               /**< (TDES_IVR) Initialization Vector Position */
#define TDES_IVR_IV_Msk                       (_U_(0xFFFFFFFF) << TDES_IVR_IV_Pos)                 /**< (TDES_IVR) Initialization Vector Mask */
#define TDES_IVR_IV(value)                    (TDES_IVR_IV_Msk & ((value) << TDES_IVR_IV_Pos))    
#define TDES_IVR_Msk                          _U_(0xFFFFFFFF)                                      /**< (TDES_IVR) Register Mask  */


/* -------- TDES_XTEA_RNDR : (TDES Offset: 0x70) (R/W 32) XTEA Rounds Register -------- */
#define TDES_XTEA_RNDR_XTEA_RNDS_Pos          _U_(0)                                               /**< (TDES_XTEA_RNDR) Number of Rounds Position */
#define TDES_XTEA_RNDR_XTEA_RNDS_Msk          (_U_(0x3F) << TDES_XTEA_RNDR_XTEA_RNDS_Pos)          /**< (TDES_XTEA_RNDR) Number of Rounds Mask */
#define TDES_XTEA_RNDR_XTEA_RNDS(value)       (TDES_XTEA_RNDR_XTEA_RNDS_Msk & ((value) << TDES_XTEA_RNDR_XTEA_RNDS_Pos))
#define TDES_XTEA_RNDR_Msk                    _U_(0x0000003F)                                      /**< (TDES_XTEA_RNDR) Register Mask  */


/** \brief TDES register offsets definitions */
#define TDES_CR_REG_OFST               (0x00)              /**< (TDES_CR) Control Register Offset */
#define TDES_MR_REG_OFST               (0x04)              /**< (TDES_MR) Mode Register Offset */
#define TDES_IER_REG_OFST              (0x10)              /**< (TDES_IER) Interrupt Enable Register Offset */
#define TDES_IDR_REG_OFST              (0x14)              /**< (TDES_IDR) Interrupt Disable Register Offset */
#define TDES_IMR_REG_OFST              (0x18)              /**< (TDES_IMR) Interrupt Mask Register Offset */
#define TDES_ISR_REG_OFST              (0x1C)              /**< (TDES_ISR) Interrupt Status Register Offset */
#define TDES_KEY1WR_REG_OFST           (0x20)              /**< (TDES_KEY1WR) Key 1 Word Register Offset */
#define TDES_KEY1WR0_REG_OFST          (0x20)              /**< (TDES_KEY1WR0) Key 1 Word Register Offset */
#define TDES_KEY1WR1_REG_OFST          (0x24)              /**< (TDES_KEY1WR1) Key 1 Word Register Offset */
#define TDES_KEY2WR_REG_OFST           (0x28)              /**< (TDES_KEY2WR) Key 2 Word Register Offset */
#define TDES_KEY2WR0_REG_OFST          (0x28)              /**< (TDES_KEY2WR0) Key 2 Word Register Offset */
#define TDES_KEY2WR1_REG_OFST          (0x2C)              /**< (TDES_KEY2WR1) Key 2 Word Register Offset */
#define TDES_KEY3WR_REG_OFST           (0x30)              /**< (TDES_KEY3WR) Key 3 Word Register Offset */
#define TDES_KEY3WR0_REG_OFST          (0x30)              /**< (TDES_KEY3WR0) Key 3 Word Register Offset */
#define TDES_KEY3WR1_REG_OFST          (0x34)              /**< (TDES_KEY3WR1) Key 3 Word Register Offset */
#define TDES_IDATAR_REG_OFST           (0x40)              /**< (TDES_IDATAR) Input Data Register Offset */
#define TDES_IDATAR0_REG_OFST          (0x40)              /**< (TDES_IDATAR0) Input Data Register Offset */
#define TDES_IDATAR1_REG_OFST          (0x44)              /**< (TDES_IDATAR1) Input Data Register Offset */
#define TDES_ODATAR_REG_OFST           (0x50)              /**< (TDES_ODATAR) Output Data Register Offset */
#define TDES_ODATAR0_REG_OFST          (0x50)              /**< (TDES_ODATAR0) Output Data Register Offset */
#define TDES_ODATAR1_REG_OFST          (0x54)              /**< (TDES_ODATAR1) Output Data Register Offset */
#define TDES_IVR_REG_OFST              (0x60)              /**< (TDES_IVR) Initialization Vector Register Offset */
#define TDES_IVR0_REG_OFST             (0x60)              /**< (TDES_IVR0) Initialization Vector Register Offset */
#define TDES_IVR1_REG_OFST             (0x64)              /**< (TDES_IVR1) Initialization Vector Register Offset */
#define TDES_XTEA_RNDR_REG_OFST        (0x70)              /**< (TDES_XTEA_RNDR) XTEA Rounds Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TDES register API structure */
typedef struct
{
  __O   uint32_t                       TDES_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       TDES_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0x08];
  __O   uint32_t                       TDES_IER;           /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       TDES_IDR;           /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       TDES_IMR;           /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       TDES_ISR;           /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __O   uint32_t                       TDES_KEY1WR[2];     /**< Offset: 0x20 ( /W  32) Key 1 Word Register */
  __O   uint32_t                       TDES_KEY2WR[2];     /**< Offset: 0x28 ( /W  32) Key 2 Word Register */
  __O   uint32_t                       TDES_KEY3WR[2];     /**< Offset: 0x30 ( /W  32) Key 3 Word Register */
  __I   uint8_t                        Reserved2[0x08];
  __O   uint32_t                       TDES_IDATAR[2];     /**< Offset: 0x40 ( /W  32) Input Data Register */
  __I   uint8_t                        Reserved3[0x08];
  __I   uint32_t                       TDES_ODATAR[2];     /**< Offset: 0x50 (R/   32) Output Data Register */
  __I   uint8_t                        Reserved4[0x08];
  __O   uint32_t                       TDES_IVR[2];        /**< Offset: 0x60 ( /W  32) Initialization Vector Register */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       TDES_XTEA_RNDR;     /**< Offset: 0x70 (R/W  32) XTEA Rounds Register */
} tdes_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_TDES_COMPONENT_H_ */
