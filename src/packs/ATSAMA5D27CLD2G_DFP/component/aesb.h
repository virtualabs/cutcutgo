/*
 * Component description for AESB
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
#ifndef _SAMA5D2_AESB_COMPONENT_H_
#define _SAMA5D2_AESB_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR AESB                                         */
/* ************************************************************************** */

/* -------- AESB_CR : (AESB Offset: 0x00) ( /W 32) Control Register -------- */
#define AESB_CR_START_Pos                     _U_(0)                                               /**< (AESB_CR) Start Processing Position */
#define AESB_CR_START_Msk                     (_U_(0x1) << AESB_CR_START_Pos)                      /**< (AESB_CR) Start Processing Mask */
#define AESB_CR_START(value)                  (AESB_CR_START_Msk & ((value) << AESB_CR_START_Pos))
#define AESB_CR_SWRST_Pos                     _U_(8)                                               /**< (AESB_CR) Software Reset Position */
#define AESB_CR_SWRST_Msk                     (_U_(0x1) << AESB_CR_SWRST_Pos)                      /**< (AESB_CR) Software Reset Mask */
#define AESB_CR_SWRST(value)                  (AESB_CR_SWRST_Msk & ((value) << AESB_CR_SWRST_Pos))
#define AESB_CR_Msk                           _U_(0x00000101)                                      /**< (AESB_CR) Register Mask  */


/* -------- AESB_MR : (AESB Offset: 0x04) (R/W 32) Mode Register -------- */
#define AESB_MR_CIPHER_Pos                    _U_(0)                                               /**< (AESB_MR) Processing Mode Position */
#define AESB_MR_CIPHER_Msk                    (_U_(0x1) << AESB_MR_CIPHER_Pos)                     /**< (AESB_MR) Processing Mode Mask */
#define AESB_MR_CIPHER(value)                 (AESB_MR_CIPHER_Msk & ((value) << AESB_MR_CIPHER_Pos))
#define AESB_MR_AAHB_Pos                      _U_(2)                                               /**< (AESB_MR) Automatic Bridge Mode Position */
#define AESB_MR_AAHB_Msk                      (_U_(0x1) << AESB_MR_AAHB_Pos)                       /**< (AESB_MR) Automatic Bridge Mode Mask */
#define AESB_MR_AAHB(value)                   (AESB_MR_AAHB_Msk & ((value) << AESB_MR_AAHB_Pos))  
#define AESB_MR_DUALBUFF_Pos                  _U_(3)                                               /**< (AESB_MR) Dual Input Buffer Position */
#define AESB_MR_DUALBUFF_Msk                  (_U_(0x1) << AESB_MR_DUALBUFF_Pos)                   /**< (AESB_MR) Dual Input Buffer Mask */
#define AESB_MR_DUALBUFF(value)               (AESB_MR_DUALBUFF_Msk & ((value) << AESB_MR_DUALBUFF_Pos))
#define   AESB_MR_DUALBUFF_INACTIVE_Val       _U_(0x0)                                             /**< (AESB_MR) AESB_IDATARx cannot be written during processing of previous block.  */
#define   AESB_MR_DUALBUFF_ACTIVE_Val         _U_(0x1)                                             /**< (AESB_MR) AESB_IDATARx can be written during processing of previous block when SMOD = 0x2. It speeds up the overall runtime of large files.  */
#define AESB_MR_DUALBUFF_INACTIVE             (AESB_MR_DUALBUFF_INACTIVE_Val << AESB_MR_DUALBUFF_Pos) /**< (AESB_MR) AESB_IDATARx cannot be written during processing of previous block. Position  */
#define AESB_MR_DUALBUFF_ACTIVE               (AESB_MR_DUALBUFF_ACTIVE_Val << AESB_MR_DUALBUFF_Pos) /**< (AESB_MR) AESB_IDATARx can be written during processing of previous block when SMOD = 0x2. It speeds up the overall runtime of large files. Position  */
#define AESB_MR_PROCDLY_Pos                   _U_(4)                                               /**< (AESB_MR) Processing Delay Position */
#define AESB_MR_PROCDLY_Msk                   (_U_(0xF) << AESB_MR_PROCDLY_Pos)                    /**< (AESB_MR) Processing Delay Mask */
#define AESB_MR_PROCDLY(value)                (AESB_MR_PROCDLY_Msk & ((value) << AESB_MR_PROCDLY_Pos))
#define AESB_MR_SMOD_Pos                      _U_(8)                                               /**< (AESB_MR) Start Mode Position */
#define AESB_MR_SMOD_Msk                      (_U_(0x3) << AESB_MR_SMOD_Pos)                       /**< (AESB_MR) Start Mode Mask */
#define AESB_MR_SMOD(value)                   (AESB_MR_SMOD_Msk & ((value) << AESB_MR_SMOD_Pos))  
#define   AESB_MR_SMOD_MANUAL_START_Val       _U_(0x0)                                             /**< (AESB_MR) Manual mode  */
#define   AESB_MR_SMOD_AUTO_START_Val         _U_(0x1)                                             /**< (AESB_MR) Auto mode  */
#define   AESB_MR_SMOD_IDATAR0_START_Val      _U_(0x2)                                             /**< (AESB_MR) AESB_IDATAR0 access only Auto mode  */
#define AESB_MR_SMOD_MANUAL_START             (AESB_MR_SMOD_MANUAL_START_Val << AESB_MR_SMOD_Pos)  /**< (AESB_MR) Manual mode Position  */
#define AESB_MR_SMOD_AUTO_START               (AESB_MR_SMOD_AUTO_START_Val << AESB_MR_SMOD_Pos)    /**< (AESB_MR) Auto mode Position  */
#define AESB_MR_SMOD_IDATAR0_START            (AESB_MR_SMOD_IDATAR0_START_Val << AESB_MR_SMOD_Pos) /**< (AESB_MR) AESB_IDATAR0 access only Auto mode Position  */
#define AESB_MR_OPMOD_Pos                     _U_(12)                                              /**< (AESB_MR) Operating Mode Position */
#define AESB_MR_OPMOD_Msk                     (_U_(0x7) << AESB_MR_OPMOD_Pos)                      /**< (AESB_MR) Operating Mode Mask */
#define AESB_MR_OPMOD(value)                  (AESB_MR_OPMOD_Msk & ((value) << AESB_MR_OPMOD_Pos))
#define   AESB_MR_OPMOD_ECB_Val               _U_(0x0)                                             /**< (AESB_MR) Electronic Code Book mode  */
#define   AESB_MR_OPMOD_CBC_Val               _U_(0x1)                                             /**< (AESB_MR) Cipher Block Chaining mode  */
#define   AESB_MR_OPMOD_CTR_Val               _U_(0x4)                                             /**< (AESB_MR) Counter mode (16-bit internal counter)  */
#define AESB_MR_OPMOD_ECB                     (AESB_MR_OPMOD_ECB_Val << AESB_MR_OPMOD_Pos)         /**< (AESB_MR) Electronic Code Book mode Position  */
#define AESB_MR_OPMOD_CBC                     (AESB_MR_OPMOD_CBC_Val << AESB_MR_OPMOD_Pos)         /**< (AESB_MR) Cipher Block Chaining mode Position  */
#define AESB_MR_OPMOD_CTR                     (AESB_MR_OPMOD_CTR_Val << AESB_MR_OPMOD_Pos)         /**< (AESB_MR) Counter mode (16-bit internal counter) Position  */
#define AESB_MR_LOD_Pos                       _U_(15)                                              /**< (AESB_MR) Last Output Data Mode Position */
#define AESB_MR_LOD_Msk                       (_U_(0x1) << AESB_MR_LOD_Pos)                        /**< (AESB_MR) Last Output Data Mode Mask */
#define AESB_MR_LOD(value)                    (AESB_MR_LOD_Msk & ((value) << AESB_MR_LOD_Pos))    
#define AESB_MR_CKEY_Pos                      _U_(20)                                              /**< (AESB_MR) Key Position */
#define AESB_MR_CKEY_Msk                      (_U_(0xF) << AESB_MR_CKEY_Pos)                       /**< (AESB_MR) Key Mask */
#define AESB_MR_CKEY(value)                   (AESB_MR_CKEY_Msk & ((value) << AESB_MR_CKEY_Pos))  
#define   AESB_MR_CKEY_PASSWD_Val             _U_(0xE)                                             /**< (AESB_MR) This field must be written with 0xE the first time that AESB_MR is programmed. For subsequent programming of the AESB_MR register, any value can be written, including that of 0xE.Always reads as 0.  */
#define AESB_MR_CKEY_PASSWD                   (AESB_MR_CKEY_PASSWD_Val << AESB_MR_CKEY_Pos)        /**< (AESB_MR) This field must be written with 0xE the first time that AESB_MR is programmed. For subsequent programming of the AESB_MR register, any value can be written, including that of 0xE.Always reads as 0. Position  */
#define AESB_MR_Msk                           _U_(0x00F0F3FD)                                      /**< (AESB_MR) Register Mask  */


/* -------- AESB_IER : (AESB Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define AESB_IER_DATRDY_Pos                   _U_(0)                                               /**< (AESB_IER) Data Ready Interrupt Enable Position */
#define AESB_IER_DATRDY_Msk                   (_U_(0x1) << AESB_IER_DATRDY_Pos)                    /**< (AESB_IER) Data Ready Interrupt Enable Mask */
#define AESB_IER_DATRDY(value)                (AESB_IER_DATRDY_Msk & ((value) << AESB_IER_DATRDY_Pos))
#define AESB_IER_URAD_Pos                     _U_(8)                                               /**< (AESB_IER) Unspecified Register Access Detection Interrupt Enable Position */
#define AESB_IER_URAD_Msk                     (_U_(0x1) << AESB_IER_URAD_Pos)                      /**< (AESB_IER) Unspecified Register Access Detection Interrupt Enable Mask */
#define AESB_IER_URAD(value)                  (AESB_IER_URAD_Msk & ((value) << AESB_IER_URAD_Pos))
#define AESB_IER_Msk                          _U_(0x00000101)                                      /**< (AESB_IER) Register Mask  */


/* -------- AESB_IDR : (AESB Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define AESB_IDR_DATRDY_Pos                   _U_(0)                                               /**< (AESB_IDR) Data Ready Interrupt Disable Position */
#define AESB_IDR_DATRDY_Msk                   (_U_(0x1) << AESB_IDR_DATRDY_Pos)                    /**< (AESB_IDR) Data Ready Interrupt Disable Mask */
#define AESB_IDR_DATRDY(value)                (AESB_IDR_DATRDY_Msk & ((value) << AESB_IDR_DATRDY_Pos))
#define AESB_IDR_URAD_Pos                     _U_(8)                                               /**< (AESB_IDR) Unspecified Register Access Detection Interrupt Disable Position */
#define AESB_IDR_URAD_Msk                     (_U_(0x1) << AESB_IDR_URAD_Pos)                      /**< (AESB_IDR) Unspecified Register Access Detection Interrupt Disable Mask */
#define AESB_IDR_URAD(value)                  (AESB_IDR_URAD_Msk & ((value) << AESB_IDR_URAD_Pos))
#define AESB_IDR_Msk                          _U_(0x00000101)                                      /**< (AESB_IDR) Register Mask  */


/* -------- AESB_IMR : (AESB Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define AESB_IMR_DATRDY_Pos                   _U_(0)                                               /**< (AESB_IMR) Data Ready Interrupt Mask Position */
#define AESB_IMR_DATRDY_Msk                   (_U_(0x1) << AESB_IMR_DATRDY_Pos)                    /**< (AESB_IMR) Data Ready Interrupt Mask Mask */
#define AESB_IMR_DATRDY(value)                (AESB_IMR_DATRDY_Msk & ((value) << AESB_IMR_DATRDY_Pos))
#define AESB_IMR_URAD_Pos                     _U_(8)                                               /**< (AESB_IMR) Unspecified Register Access Detection Interrupt Mask Position */
#define AESB_IMR_URAD_Msk                     (_U_(0x1) << AESB_IMR_URAD_Pos)                      /**< (AESB_IMR) Unspecified Register Access Detection Interrupt Mask Mask */
#define AESB_IMR_URAD(value)                  (AESB_IMR_URAD_Msk & ((value) << AESB_IMR_URAD_Pos))
#define AESB_IMR_Msk                          _U_(0x00000101)                                      /**< (AESB_IMR) Register Mask  */


/* -------- AESB_ISR : (AESB Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define AESB_ISR_DATRDY_Pos                   _U_(0)                                               /**< (AESB_ISR) Data Ready Position */
#define AESB_ISR_DATRDY_Msk                   (_U_(0x1) << AESB_ISR_DATRDY_Pos)                    /**< (AESB_ISR) Data Ready Mask */
#define AESB_ISR_DATRDY(value)                (AESB_ISR_DATRDY_Msk & ((value) << AESB_ISR_DATRDY_Pos))
#define AESB_ISR_URAD_Pos                     _U_(8)                                               /**< (AESB_ISR) Unspecified Register Access Detection Status Position */
#define AESB_ISR_URAD_Msk                     (_U_(0x1) << AESB_ISR_URAD_Pos)                      /**< (AESB_ISR) Unspecified Register Access Detection Status Mask */
#define AESB_ISR_URAD(value)                  (AESB_ISR_URAD_Msk & ((value) << AESB_ISR_URAD_Pos))
#define AESB_ISR_URAT_Pos                     _U_(12)                                              /**< (AESB_ISR) Unspecified Register Access Position */
#define AESB_ISR_URAT_Msk                     (_U_(0xF) << AESB_ISR_URAT_Pos)                      /**< (AESB_ISR) Unspecified Register Access Mask */
#define AESB_ISR_URAT(value)                  (AESB_ISR_URAT_Msk & ((value) << AESB_ISR_URAT_Pos))
#define   AESB_ISR_URAT_IDR_WR_PROCESSING_Val _U_(0x0)                                             /**< (AESB_ISR) Input Data Register written during the data processing when SMOD = 0x2 mode  */
#define   AESB_ISR_URAT_ODR_RD_PROCESSING_Val _U_(0x1)                                             /**< (AESB_ISR) Output Data Register read during the data processing  */
#define   AESB_ISR_URAT_MR_WR_PROCESSING_Val  _U_(0x2)                                             /**< (AESB_ISR) Mode Register written during the data processing  */
#define   AESB_ISR_URAT_ODR_RD_SUBKGEN_Val    _U_(0x3)                                             /**< (AESB_ISR) Output Data Register read during the sub-keys generation  */
#define   AESB_ISR_URAT_MR_WR_SUBKGEN_Val     _U_(0x4)                                             /**< (AESB_ISR) Mode Register written during the sub-keys generation  */
#define   AESB_ISR_URAT_WOR_RD_ACCESS_Val     _U_(0x5)                                             /**< (AESB_ISR) Write-only register read access  */
#define AESB_ISR_URAT_IDR_WR_PROCESSING       (AESB_ISR_URAT_IDR_WR_PROCESSING_Val << AESB_ISR_URAT_Pos) /**< (AESB_ISR) Input Data Register written during the data processing when SMOD = 0x2 mode Position  */
#define AESB_ISR_URAT_ODR_RD_PROCESSING       (AESB_ISR_URAT_ODR_RD_PROCESSING_Val << AESB_ISR_URAT_Pos) /**< (AESB_ISR) Output Data Register read during the data processing Position  */
#define AESB_ISR_URAT_MR_WR_PROCESSING        (AESB_ISR_URAT_MR_WR_PROCESSING_Val << AESB_ISR_URAT_Pos) /**< (AESB_ISR) Mode Register written during the data processing Position  */
#define AESB_ISR_URAT_ODR_RD_SUBKGEN          (AESB_ISR_URAT_ODR_RD_SUBKGEN_Val << AESB_ISR_URAT_Pos) /**< (AESB_ISR) Output Data Register read during the sub-keys generation Position  */
#define AESB_ISR_URAT_MR_WR_SUBKGEN           (AESB_ISR_URAT_MR_WR_SUBKGEN_Val << AESB_ISR_URAT_Pos) /**< (AESB_ISR) Mode Register written during the sub-keys generation Position  */
#define AESB_ISR_URAT_WOR_RD_ACCESS           (AESB_ISR_URAT_WOR_RD_ACCESS_Val << AESB_ISR_URAT_Pos) /**< (AESB_ISR) Write-only register read access Position  */
#define AESB_ISR_Msk                          _U_(0x0000F101)                                      /**< (AESB_ISR) Register Mask  */


/* -------- AESB_KEYWR : (AESB Offset: 0x20) ( /W 32) Key Word Register -------- */
#define AESB_KEYWR_KEYW_Pos                   _U_(0)                                               /**< (AESB_KEYWR) Key Word Position */
#define AESB_KEYWR_KEYW_Msk                   (_U_(0xFFFFFFFF) << AESB_KEYWR_KEYW_Pos)             /**< (AESB_KEYWR) Key Word Mask */
#define AESB_KEYWR_KEYW(value)                (AESB_KEYWR_KEYW_Msk & ((value) << AESB_KEYWR_KEYW_Pos))
#define AESB_KEYWR_Msk                        _U_(0xFFFFFFFF)                                      /**< (AESB_KEYWR) Register Mask  */


/* -------- AESB_IDATAR : (AESB Offset: 0x40) ( /W 32) Input Data Register -------- */
#define AESB_IDATAR_IDATA_Pos                 _U_(0)                                               /**< (AESB_IDATAR) Input Data Word Position */
#define AESB_IDATAR_IDATA_Msk                 (_U_(0xFFFFFFFF) << AESB_IDATAR_IDATA_Pos)           /**< (AESB_IDATAR) Input Data Word Mask */
#define AESB_IDATAR_IDATA(value)              (AESB_IDATAR_IDATA_Msk & ((value) << AESB_IDATAR_IDATA_Pos))
#define AESB_IDATAR_Msk                       _U_(0xFFFFFFFF)                                      /**< (AESB_IDATAR) Register Mask  */


/* -------- AESB_ODATAR : (AESB Offset: 0x50) ( R/ 32) Output Data Register -------- */
#define AESB_ODATAR_ODATA_Pos                 _U_(0)                                               /**< (AESB_ODATAR) Output Data Position */
#define AESB_ODATAR_ODATA_Msk                 (_U_(0xFFFFFFFF) << AESB_ODATAR_ODATA_Pos)           /**< (AESB_ODATAR) Output Data Mask */
#define AESB_ODATAR_ODATA(value)              (AESB_ODATAR_ODATA_Msk & ((value) << AESB_ODATAR_ODATA_Pos))
#define AESB_ODATAR_Msk                       _U_(0xFFFFFFFF)                                      /**< (AESB_ODATAR) Register Mask  */


/* -------- AESB_IVR : (AESB Offset: 0x60) ( /W 32) Initialization Vector Register -------- */
#define AESB_IVR_IV_Pos                       _U_(0)                                               /**< (AESB_IVR) Initialization Vector Position */
#define AESB_IVR_IV_Msk                       (_U_(0xFFFFFFFF) << AESB_IVR_IV_Pos)                 /**< (AESB_IVR) Initialization Vector Mask */
#define AESB_IVR_IV(value)                    (AESB_IVR_IV_Msk & ((value) << AESB_IVR_IV_Pos))    
#define AESB_IVR_Msk                          _U_(0xFFFFFFFF)                                      /**< (AESB_IVR) Register Mask  */


/** \brief AESB register offsets definitions */
#define AESB_CR_REG_OFST               (0x00)              /**< (AESB_CR) Control Register Offset */
#define AESB_MR_REG_OFST               (0x04)              /**< (AESB_MR) Mode Register Offset */
#define AESB_IER_REG_OFST              (0x10)              /**< (AESB_IER) Interrupt Enable Register Offset */
#define AESB_IDR_REG_OFST              (0x14)              /**< (AESB_IDR) Interrupt Disable Register Offset */
#define AESB_IMR_REG_OFST              (0x18)              /**< (AESB_IMR) Interrupt Mask Register Offset */
#define AESB_ISR_REG_OFST              (0x1C)              /**< (AESB_ISR) Interrupt Status Register Offset */
#define AESB_KEYWR_REG_OFST            (0x20)              /**< (AESB_KEYWR) Key Word Register Offset */
#define AESB_KEYWR0_REG_OFST           (0x20)              /**< (AESB_KEYWR0) Key Word Register Offset */
#define AESB_KEYWR1_REG_OFST           (0x24)              /**< (AESB_KEYWR1) Key Word Register Offset */
#define AESB_KEYWR2_REG_OFST           (0x28)              /**< (AESB_KEYWR2) Key Word Register Offset */
#define AESB_KEYWR3_REG_OFST           (0x2C)              /**< (AESB_KEYWR3) Key Word Register Offset */
#define AESB_IDATAR_REG_OFST           (0x40)              /**< (AESB_IDATAR) Input Data Register Offset */
#define AESB_IDATAR0_REG_OFST          (0x40)              /**< (AESB_IDATAR0) Input Data Register Offset */
#define AESB_IDATAR1_REG_OFST          (0x44)              /**< (AESB_IDATAR1) Input Data Register Offset */
#define AESB_IDATAR2_REG_OFST          (0x48)              /**< (AESB_IDATAR2) Input Data Register Offset */
#define AESB_IDATAR3_REG_OFST          (0x4C)              /**< (AESB_IDATAR3) Input Data Register Offset */
#define AESB_ODATAR_REG_OFST           (0x50)              /**< (AESB_ODATAR) Output Data Register Offset */
#define AESB_ODATAR0_REG_OFST          (0x50)              /**< (AESB_ODATAR0) Output Data Register Offset */
#define AESB_ODATAR1_REG_OFST          (0x54)              /**< (AESB_ODATAR1) Output Data Register Offset */
#define AESB_ODATAR2_REG_OFST          (0x58)              /**< (AESB_ODATAR2) Output Data Register Offset */
#define AESB_ODATAR3_REG_OFST          (0x5C)              /**< (AESB_ODATAR3) Output Data Register Offset */
#define AESB_IVR_REG_OFST              (0x60)              /**< (AESB_IVR) Initialization Vector Register Offset */
#define AESB_IVR0_REG_OFST             (0x60)              /**< (AESB_IVR0) Initialization Vector Register Offset */
#define AESB_IVR1_REG_OFST             (0x64)              /**< (AESB_IVR1) Initialization Vector Register Offset */
#define AESB_IVR2_REG_OFST             (0x68)              /**< (AESB_IVR2) Initialization Vector Register Offset */
#define AESB_IVR3_REG_OFST             (0x6C)              /**< (AESB_IVR3) Initialization Vector Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief AESB register API structure */
typedef struct
{
  __O   uint32_t                       AESB_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       AESB_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0x08];
  __O   uint32_t                       AESB_IER;           /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       AESB_IDR;           /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       AESB_IMR;           /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       AESB_ISR;           /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __O   uint32_t                       AESB_KEYWR[4];      /**< Offset: 0x20 ( /W  32) Key Word Register */
  __I   uint8_t                        Reserved2[0x10];
  __O   uint32_t                       AESB_IDATAR[4];     /**< Offset: 0x40 ( /W  32) Input Data Register */
  __I   uint32_t                       AESB_ODATAR[4];     /**< Offset: 0x50 (R/   32) Output Data Register */
  __O   uint32_t                       AESB_IVR[4];        /**< Offset: 0x60 ( /W  32) Initialization Vector Register */
} aesb_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_AESB_COMPONENT_H_ */
