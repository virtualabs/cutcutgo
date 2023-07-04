/*
 * Component description for TZAESB
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
#ifndef _SAMA7G_TZAESB_COMPONENT_H_
#define _SAMA7G_TZAESB_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TZAESB                                       */
/* ************************************************************************** */

/* -------- TZAESB_CR : (TZAESB Offset: 0x00) ( /W 32) Control Register -------- */
#define TZAESB_CR_START_Pos                   _U_(0)                                               /**< (TZAESB_CR) Start Processing Position */
#define TZAESB_CR_START_Msk                   (_U_(0x1) << TZAESB_CR_START_Pos)                    /**< (TZAESB_CR) Start Processing Mask */
#define TZAESB_CR_START(value)                (TZAESB_CR_START_Msk & ((value) << TZAESB_CR_START_Pos))
#define   TZAESB_CR_START_0_Val               _U_(0x0)                                             /**< (TZAESB_CR) No effect.  */
#define   TZAESB_CR_START_1_Val               _U_(0x1)                                             /**< (TZAESB_CR) Starts manual encryption/decryption process.  */
#define TZAESB_CR_START_0                     (TZAESB_CR_START_0_Val << TZAESB_CR_START_Pos)       /**< (TZAESB_CR) No effect. Position  */
#define TZAESB_CR_START_1                     (TZAESB_CR_START_1_Val << TZAESB_CR_START_Pos)       /**< (TZAESB_CR) Starts manual encryption/decryption process. Position  */
#define TZAESB_CR_SWRST_Pos                   _U_(8)                                               /**< (TZAESB_CR) Software Reset Position */
#define TZAESB_CR_SWRST_Msk                   (_U_(0x1) << TZAESB_CR_SWRST_Pos)                    /**< (TZAESB_CR) Software Reset Mask */
#define TZAESB_CR_SWRST(value)                (TZAESB_CR_SWRST_Msk & ((value) << TZAESB_CR_SWRST_Pos))
#define   TZAESB_CR_SWRST_0_Val               _U_(0x0)                                             /**< (TZAESB_CR) No effect.  */
#define   TZAESB_CR_SWRST_1_Val               _U_(0x1)                                             /**< (TZAESB_CR) Resets the TZAESB. A software triggered hardware reset of the TZAESB interface is performed.  */
#define TZAESB_CR_SWRST_0                     (TZAESB_CR_SWRST_0_Val << TZAESB_CR_SWRST_Pos)       /**< (TZAESB_CR) No effect. Position  */
#define TZAESB_CR_SWRST_1                     (TZAESB_CR_SWRST_1_Val << TZAESB_CR_SWRST_Pos)       /**< (TZAESB_CR) Resets the TZAESB. A software triggered hardware reset of the TZAESB interface is performed. Position  */
#define TZAESB_CR_UNLOCK_Pos                  _U_(24)                                              /**< (TZAESB_CR) Unlock Processing Position */
#define TZAESB_CR_UNLOCK_Msk                  (_U_(0x1) << TZAESB_CR_UNLOCK_Pos)                   /**< (TZAESB_CR) Unlock Processing Mask */
#define TZAESB_CR_UNLOCK(value)               (TZAESB_CR_UNLOCK_Msk & ((value) << TZAESB_CR_UNLOCK_Pos))
#define   TZAESB_CR_UNLOCK_0_Val              _U_(0x0)                                             /**< (TZAESB_CR) No effect.  */
#define   TZAESB_CR_UNLOCK_1_Val              _U_(0x1)                                             /**< (TZAESB_CR) Unlocks the processing in case of abnormal event detection if TZAESB_WPMR.ACTION > 0.  */
#define TZAESB_CR_UNLOCK_0                    (TZAESB_CR_UNLOCK_0_Val << TZAESB_CR_UNLOCK_Pos)     /**< (TZAESB_CR) No effect. Position  */
#define TZAESB_CR_UNLOCK_1                    (TZAESB_CR_UNLOCK_1_Val << TZAESB_CR_UNLOCK_Pos)     /**< (TZAESB_CR) Unlocks the processing in case of abnormal event detection if TZAESB_WPMR.ACTION > 0. Position  */
#define TZAESB_CR_Msk                         _U_(0x01000101)                                      /**< (TZAESB_CR) Register Mask  */


/* -------- TZAESB_MR : (TZAESB Offset: 0x04) (R/W 32) Mode Register -------- */
#define TZAESB_MR_RESETVALUE                  _U_(0x04)                                            /**<  (TZAESB_MR) Mode Register  Reset Value */

#define TZAESB_MR_PROCDLY_Pos                 _U_(4)                                               /**< (TZAESB_MR) Processing Delay Position */
#define TZAESB_MR_PROCDLY_Msk                 (_U_(0xF) << TZAESB_MR_PROCDLY_Pos)                  /**< (TZAESB_MR) Processing Delay Mask */
#define TZAESB_MR_PROCDLY(value)              (TZAESB_MR_PROCDLY_Msk & ((value) << TZAESB_MR_PROCDLY_Pos))
#define TZAESB_MR_OPMOD_Pos                   _U_(12)                                              /**< (TZAESB_MR) Operating Mode Position */
#define TZAESB_MR_OPMOD_Msk                   (_U_(0x7) << TZAESB_MR_OPMOD_Pos)                    /**< (TZAESB_MR) Operating Mode Mask */
#define TZAESB_MR_OPMOD(value)                (TZAESB_MR_OPMOD_Msk & ((value) << TZAESB_MR_OPMOD_Pos))
#define   TZAESB_MR_OPMOD_CTR_Val             _U_(0x4)                                             /**< (TZAESB_MR) Counter mode (16-bit internal counter)  */
#define TZAESB_MR_OPMOD_CTR                   (TZAESB_MR_OPMOD_CTR_Val << TZAESB_MR_OPMOD_Pos)     /**< (TZAESB_MR) Counter mode (16-bit internal counter) Position  */
#define TZAESB_MR_CKEY_Pos                    _U_(20)                                              /**< (TZAESB_MR) Key Position */
#define TZAESB_MR_CKEY_Msk                    (_U_(0xF) << TZAESB_MR_CKEY_Pos)                     /**< (TZAESB_MR) Key Mask */
#define TZAESB_MR_CKEY(value)                 (TZAESB_MR_CKEY_Msk & ((value) << TZAESB_MR_CKEY_Pos))
#define   TZAESB_MR_CKEY_PASSWD_Val           _U_(0xE)                                             /**< (TZAESB_MR) Must be written with 0xE the first time that TZAESB_MR is programmed. For subsequent programming of TZAESB_MR, any value can be written, including that of 0xE. Always reads as 0.  */
#define TZAESB_MR_CKEY_PASSWD                 (TZAESB_MR_CKEY_PASSWD_Val << TZAESB_MR_CKEY_Pos)    /**< (TZAESB_MR) Must be written with 0xE the first time that TZAESB_MR is programmed. For subsequent programming of TZAESB_MR, any value can be written, including that of 0xE. Always reads as 0. Position  */
#define TZAESB_MR_TAMPCLR_Pos                 _U_(31)                                              /**< (TZAESB_MR) Tamper Clear Enable Position */
#define TZAESB_MR_TAMPCLR_Msk                 (_U_(0x1) << TZAESB_MR_TAMPCLR_Pos)                  /**< (TZAESB_MR) Tamper Clear Enable Mask */
#define TZAESB_MR_TAMPCLR(value)              (TZAESB_MR_TAMPCLR_Msk & ((value) << TZAESB_MR_TAMPCLR_Pos))
#define   TZAESB_MR_TAMPCLR_0_Val             _U_(0x0)                                             /**< (TZAESB_MR) A tamper detection event has no effect on the TZAESB_KEYWRx key.  */
#define   TZAESB_MR_TAMPCLR_1_Val             _U_(0x1)                                             /**< (TZAESB_MR) A tamper detection event immediately clears the TZAESB_KEYWRx key.  */
#define TZAESB_MR_TAMPCLR_0                   (TZAESB_MR_TAMPCLR_0_Val << TZAESB_MR_TAMPCLR_Pos)   /**< (TZAESB_MR) A tamper detection event has no effect on the TZAESB_KEYWRx key. Position  */
#define TZAESB_MR_TAMPCLR_1                   (TZAESB_MR_TAMPCLR_1_Val << TZAESB_MR_TAMPCLR_Pos)   /**< (TZAESB_MR) A tamper detection event immediately clears the TZAESB_KEYWRx key. Position  */
#define TZAESB_MR_Msk                         _U_(0x80F070F0)                                      /**< (TZAESB_MR) Register Mask  */


/* -------- TZAESB_IER : (TZAESB Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define TZAESB_IER_URAD_Pos                   _U_(8)                                               /**< (TZAESB_IER) Unspecified Register Access Detection Interrupt Enable Position */
#define TZAESB_IER_URAD_Msk                   (_U_(0x1) << TZAESB_IER_URAD_Pos)                    /**< (TZAESB_IER) Unspecified Register Access Detection Interrupt Enable Mask */
#define TZAESB_IER_URAD(value)                (TZAESB_IER_URAD_Msk & ((value) << TZAESB_IER_URAD_Pos))
#define TZAESB_IER_SECE_Pos                   _U_(19)                                              /**< (TZAESB_IER) Security and/or Safety Event Position */
#define TZAESB_IER_SECE_Msk                   (_U_(0x1) << TZAESB_IER_SECE_Pos)                    /**< (TZAESB_IER) Security and/or Safety Event Mask */
#define TZAESB_IER_SECE(value)                (TZAESB_IER_SECE_Msk & ((value) << TZAESB_IER_SECE_Pos))
#define TZAESB_IER_Msk                        _U_(0x00080100)                                      /**< (TZAESB_IER) Register Mask  */


/* -------- TZAESB_IDR : (TZAESB Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define TZAESB_IDR_URAD_Pos                   _U_(8)                                               /**< (TZAESB_IDR) Unspecified Register Access Detection Interrupt Disable Position */
#define TZAESB_IDR_URAD_Msk                   (_U_(0x1) << TZAESB_IDR_URAD_Pos)                    /**< (TZAESB_IDR) Unspecified Register Access Detection Interrupt Disable Mask */
#define TZAESB_IDR_URAD(value)                (TZAESB_IDR_URAD_Msk & ((value) << TZAESB_IDR_URAD_Pos))
#define TZAESB_IDR_SECE_Pos                   _U_(19)                                              /**< (TZAESB_IDR) Security and/or Safety Event Position */
#define TZAESB_IDR_SECE_Msk                   (_U_(0x1) << TZAESB_IDR_SECE_Pos)                    /**< (TZAESB_IDR) Security and/or Safety Event Mask */
#define TZAESB_IDR_SECE(value)                (TZAESB_IDR_SECE_Msk & ((value) << TZAESB_IDR_SECE_Pos))
#define TZAESB_IDR_Msk                        _U_(0x00080100)                                      /**< (TZAESB_IDR) Register Mask  */


/* -------- TZAESB_IMR : (TZAESB Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define TZAESB_IMR_RESETVALUE                 _U_(0x00)                                            /**<  (TZAESB_IMR) Interrupt Mask Register  Reset Value */

#define TZAESB_IMR_URAD_Pos                   _U_(8)                                               /**< (TZAESB_IMR) Unspecified Register Access Detection Interrupt Mask Position */
#define TZAESB_IMR_URAD_Msk                   (_U_(0x1) << TZAESB_IMR_URAD_Pos)                    /**< (TZAESB_IMR) Unspecified Register Access Detection Interrupt Mask Mask */
#define TZAESB_IMR_URAD(value)                (TZAESB_IMR_URAD_Msk & ((value) << TZAESB_IMR_URAD_Pos))
#define TZAESB_IMR_SECE_Pos                   _U_(19)                                              /**< (TZAESB_IMR) Security and/or Safety Event Position */
#define TZAESB_IMR_SECE_Msk                   (_U_(0x1) << TZAESB_IMR_SECE_Pos)                    /**< (TZAESB_IMR) Security and/or Safety Event Mask */
#define TZAESB_IMR_SECE(value)                (TZAESB_IMR_SECE_Msk & ((value) << TZAESB_IMR_SECE_Pos))
#define TZAESB_IMR_Msk                        _U_(0x00080100)                                      /**< (TZAESB_IMR) Register Mask  */


/* -------- TZAESB_ISR : (TZAESB Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define TZAESB_ISR_RESETVALUE                 _U_(0x00)                                            /**<  (TZAESB_ISR) Interrupt Status Register  Reset Value */

#define TZAESB_ISR_URAD_Pos                   _U_(8)                                               /**< (TZAESB_ISR) Unspecified Register Access Detection Status Position */
#define TZAESB_ISR_URAD_Msk                   (_U_(0x1) << TZAESB_ISR_URAD_Pos)                    /**< (TZAESB_ISR) Unspecified Register Access Detection Status Mask */
#define TZAESB_ISR_URAD(value)                (TZAESB_ISR_URAD_Msk & ((value) << TZAESB_ISR_URAD_Pos))
#define   TZAESB_ISR_URAD_0_Val               _U_(0x0)                                             /**< (TZAESB_ISR) No unspecified register access has been detected since the last SWRST.  */
#define   TZAESB_ISR_URAD_1_Val               _U_(0x1)                                             /**< (TZAESB_ISR) At least one unspecified register access has been detected since the last SWRST.  */
#define TZAESB_ISR_URAD_0                     (TZAESB_ISR_URAD_0_Val << TZAESB_ISR_URAD_Pos)       /**< (TZAESB_ISR) No unspecified register access has been detected since the last SWRST. Position  */
#define TZAESB_ISR_URAD_1                     (TZAESB_ISR_URAD_1_Val << TZAESB_ISR_URAD_Pos)       /**< (TZAESB_ISR) At least one unspecified register access has been detected since the last SWRST. Position  */
#define TZAESB_ISR_URAT_Pos                   _U_(12)                                              /**< (TZAESB_ISR) Unspecified Register Access Position */
#define TZAESB_ISR_URAT_Msk                   (_U_(0xF) << TZAESB_ISR_URAT_Pos)                    /**< (TZAESB_ISR) Unspecified Register Access Mask */
#define TZAESB_ISR_URAT(value)                (TZAESB_ISR_URAT_Msk & ((value) << TZAESB_ISR_URAT_Pos))
#define   TZAESB_ISR_URAT_IDR_WR_PROCESSING_Val _U_(0x0)                                             /**< (TZAESB_ISR) Input Data register written during the data processing  */
#define   TZAESB_ISR_URAT_ODR_RD_PROCESSING_Val _U_(0x1)                                             /**< (TZAESB_ISR) Output Data register read during the data processing  */
#define   TZAESB_ISR_URAT_MR_WR_PROCESSING_Val _U_(0x2)                                             /**< (TZAESB_ISR) Mode register written during the data processing  */
#define   TZAESB_ISR_URAT_ODR_RD_SUBKGEN_Val  _U_(0x3)                                             /**< (TZAESB_ISR) Output Data register read during the sub-keys generation  */
#define   TZAESB_ISR_URAT_MR_WR_SUBKGEN_Val   _U_(0x4)                                             /**< (TZAESB_ISR) Mode register written during the sub-keys generation  */
#define   TZAESB_ISR_URAT_WOR_RD_ACCESS_Val   _U_(0x5)                                             /**< (TZAESB_ISR) Write-only register read access  */
#define TZAESB_ISR_URAT_IDR_WR_PROCESSING     (TZAESB_ISR_URAT_IDR_WR_PROCESSING_Val << TZAESB_ISR_URAT_Pos) /**< (TZAESB_ISR) Input Data register written during the data processing Position  */
#define TZAESB_ISR_URAT_ODR_RD_PROCESSING     (TZAESB_ISR_URAT_ODR_RD_PROCESSING_Val << TZAESB_ISR_URAT_Pos) /**< (TZAESB_ISR) Output Data register read during the data processing Position  */
#define TZAESB_ISR_URAT_MR_WR_PROCESSING      (TZAESB_ISR_URAT_MR_WR_PROCESSING_Val << TZAESB_ISR_URAT_Pos) /**< (TZAESB_ISR) Mode register written during the data processing Position  */
#define TZAESB_ISR_URAT_ODR_RD_SUBKGEN        (TZAESB_ISR_URAT_ODR_RD_SUBKGEN_Val << TZAESB_ISR_URAT_Pos) /**< (TZAESB_ISR) Output Data register read during the sub-keys generation Position  */
#define TZAESB_ISR_URAT_MR_WR_SUBKGEN         (TZAESB_ISR_URAT_MR_WR_SUBKGEN_Val << TZAESB_ISR_URAT_Pos) /**< (TZAESB_ISR) Mode register written during the sub-keys generation Position  */
#define TZAESB_ISR_URAT_WOR_RD_ACCESS         (TZAESB_ISR_URAT_WOR_RD_ACCESS_Val << TZAESB_ISR_URAT_Pos) /**< (TZAESB_ISR) Write-only register read access Position  */
#define TZAESB_ISR_SECE_Pos                   _U_(19)                                              /**< (TZAESB_ISR) Security and/or Safety Event Position */
#define TZAESB_ISR_SECE_Msk                   (_U_(0x1) << TZAESB_ISR_SECE_Pos)                    /**< (TZAESB_ISR) Security and/or Safety Event Mask */
#define TZAESB_ISR_SECE(value)                (TZAESB_ISR_SECE_Msk & ((value) << TZAESB_ISR_SECE_Pos))
#define   TZAESB_ISR_SECE_0_Val               _U_(0x0)                                             /**< (TZAESB_ISR) There is no security report in TZAESB_WPSR.  */
#define   TZAESB_ISR_SECE_1_Val               _U_(0x1)                                             /**< (TZAESB_ISR) One security flag is set in TZAESB_WPSR.  */
#define TZAESB_ISR_SECE_0                     (TZAESB_ISR_SECE_0_Val << TZAESB_ISR_SECE_Pos)       /**< (TZAESB_ISR) There is no security report in TZAESB_WPSR. Position  */
#define TZAESB_ISR_SECE_1                     (TZAESB_ISR_SECE_1_Val << TZAESB_ISR_SECE_Pos)       /**< (TZAESB_ISR) One security flag is set in TZAESB_WPSR. Position  */
#define TZAESB_ISR_Msk                        _U_(0x0008F100)                                      /**< (TZAESB_ISR) Register Mask  */


/* -------- TZAESB_KEYWR : (TZAESB Offset: 0x20) ( /W 32) Key Word Register x -------- */
#define TZAESB_KEYWR_KEYW_Pos                 _U_(0)                                               /**< (TZAESB_KEYWR) Key Word Position */
#define TZAESB_KEYWR_KEYW_Msk                 (_U_(0xFFFFFFFF) << TZAESB_KEYWR_KEYW_Pos)           /**< (TZAESB_KEYWR) Key Word Mask */
#define TZAESB_KEYWR_KEYW(value)              (TZAESB_KEYWR_KEYW_Msk & ((value) << TZAESB_KEYWR_KEYW_Pos))
#define TZAESB_KEYWR_Msk                      _U_(0xFFFFFFFF)                                      /**< (TZAESB_KEYWR) Register Mask  */


/* -------- TZAESB_IVR : (TZAESB Offset: 0x60) ( /W 32) Initialization Vector Register x -------- */
#define TZAESB_IVR_IV_Pos                     _U_(0)                                               /**< (TZAESB_IVR) Initialization Vector Position */
#define TZAESB_IVR_IV_Msk                     (_U_(0xFFFFFFFF) << TZAESB_IVR_IV_Pos)               /**< (TZAESB_IVR) Initialization Vector Mask */
#define TZAESB_IVR_IV(value)                  (TZAESB_IVR_IV_Msk & ((value) << TZAESB_IVR_IV_Pos))
#define TZAESB_IVR_Msk                        _U_(0xFFFFFFFF)                                      /**< (TZAESB_IVR) Register Mask  */


/* -------- TZAESB_EMR : (TZAESB Offset: 0xB0) (R/W 32) Extended Mode Register -------- */
#define TZAESB_EMR_RESETVALUE                 _U_(0x00)                                            /**<  (TZAESB_EMR) Extended Mode Register  Reset Value */

#define TZAESB_EMR_PKWO_Pos                   _U_(6)                                               /**< (TZAESB_EMR) Private Key Write Once Position */
#define TZAESB_EMR_PKWO_Msk                   (_U_(0x1) << TZAESB_EMR_PKWO_Pos)                    /**< (TZAESB_EMR) Private Key Write Once Mask */
#define TZAESB_EMR_PKWO(value)                (TZAESB_EMR_PKWO_Msk & ((value) << TZAESB_EMR_PKWO_Pos))
#define   TZAESB_EMR_PKWO_0_Val               _U_(0x0)                                             /**< (TZAESB_EMR) The Private Key internal registers can be written multiple times through the Private Key bus.  */
#define   TZAESB_EMR_PKWO_1_Val               _U_(0x1)                                             /**< (TZAESB_EMR) The Private Key internal registers can be written only once through the Private Key bus until hardware reset.  */
#define TZAESB_EMR_PKWO_0                     (TZAESB_EMR_PKWO_0_Val << TZAESB_EMR_PKWO_Pos)       /**< (TZAESB_EMR) The Private Key internal registers can be written multiple times through the Private Key bus. Position  */
#define TZAESB_EMR_PKWO_1                     (TZAESB_EMR_PKWO_1_Val << TZAESB_EMR_PKWO_Pos)       /**< (TZAESB_EMR) The Private Key internal registers can be written only once through the Private Key bus until hardware reset. Position  */
#define TZAESB_EMR_PKRS_Pos                   _U_(7)                                               /**< (TZAESB_EMR) Private Key Internal Register Select Position */
#define TZAESB_EMR_PKRS_Msk                   (_U_(0x1) << TZAESB_EMR_PKRS_Pos)                    /**< (TZAESB_EMR) Private Key Internal Register Select Mask */
#define TZAESB_EMR_PKRS(value)                (TZAESB_EMR_PKRS_Msk & ((value) << TZAESB_EMR_PKRS_Pos))
#define   TZAESB_EMR_PKRS_0_Val               _U_(0x0)                                             /**< (TZAESB_EMR) The key used by the TZAESB is in the TZAESB_KEYWRx.  */
#define   TZAESB_EMR_PKRS_1_Val               _U_(0x1)                                             /**< (TZAESB_EMR) The key used by the TZAESB is in the Private Key internal registers written through the Private Key bus.  */
#define TZAESB_EMR_PKRS_0                     (TZAESB_EMR_PKRS_0_Val << TZAESB_EMR_PKRS_Pos)       /**< (TZAESB_EMR) The key used by the TZAESB is in the TZAESB_KEYWRx. Position  */
#define TZAESB_EMR_PKRS_1                     (TZAESB_EMR_PKRS_1_Val << TZAESB_EMR_PKRS_Pos)       /**< (TZAESB_EMR) The key used by the TZAESB is in the Private Key internal registers written through the Private Key bus. Position  */
#define TZAESB_EMR_Msk                        _U_(0x000000C0)                                      /**< (TZAESB_EMR) Register Mask  */


/* -------- TZAESB_WPMR : (TZAESB Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define TZAESB_WPMR_RESETVALUE                _U_(0x00)                                            /**<  (TZAESB_WPMR) Write Protection Mode Register  Reset Value */

#define TZAESB_WPMR_WPEN_Pos                  _U_(0)                                               /**< (TZAESB_WPMR) Write Protection Configuration Enable Position */
#define TZAESB_WPMR_WPEN_Msk                  (_U_(0x1) << TZAESB_WPMR_WPEN_Pos)                   /**< (TZAESB_WPMR) Write Protection Configuration Enable Mask */
#define TZAESB_WPMR_WPEN(value)               (TZAESB_WPMR_WPEN_Msk & ((value) << TZAESB_WPMR_WPEN_Pos))
#define   TZAESB_WPMR_WPEN_0_Val              _U_(0x0)                                             /**< (TZAESB_WPMR) Disables the write protection on configuration registers if WPKEY corresponds to 0x414553 ("AES" in ASCII).  */
#define   TZAESB_WPMR_WPEN_1_Val              _U_(0x1)                                             /**< (TZAESB_WPMR) Enables the write protection on configuration registers if WPKEY corresponds to 0x414553 ("AES" in ASCII).  */
#define TZAESB_WPMR_WPEN_0                    (TZAESB_WPMR_WPEN_0_Val << TZAESB_WPMR_WPEN_Pos)     /**< (TZAESB_WPMR) Disables the write protection on configuration registers if WPKEY corresponds to 0x414553 ("AES" in ASCII). Position  */
#define TZAESB_WPMR_WPEN_1                    (TZAESB_WPMR_WPEN_1_Val << TZAESB_WPMR_WPEN_Pos)     /**< (TZAESB_WPMR) Enables the write protection on configuration registers if WPKEY corresponds to 0x414553 ("AES" in ASCII). Position  */
#define TZAESB_WPMR_WPITEN_Pos                _U_(1)                                               /**< (TZAESB_WPMR) Write Protection Interruption Enable Position */
#define TZAESB_WPMR_WPITEN_Msk                (_U_(0x1) << TZAESB_WPMR_WPITEN_Pos)                 /**< (TZAESB_WPMR) Write Protection Interruption Enable Mask */
#define TZAESB_WPMR_WPITEN(value)             (TZAESB_WPMR_WPITEN_Msk & ((value) << TZAESB_WPMR_WPITEN_Pos))
#define   TZAESB_WPMR_WPITEN_0_Val            _U_(0x0)                                             /**< (TZAESB_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x414553 ("AES" in ASCII).  */
#define   TZAESB_WPMR_WPITEN_1_Val            _U_(0x1)                                             /**< (TZAESB_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x414553 ("AES" in ASCII).  */
#define TZAESB_WPMR_WPITEN_0                  (TZAESB_WPMR_WPITEN_0_Val << TZAESB_WPMR_WPITEN_Pos) /**< (TZAESB_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x414553 ("AES" in ASCII). Position  */
#define TZAESB_WPMR_WPITEN_1                  (TZAESB_WPMR_WPITEN_1_Val << TZAESB_WPMR_WPITEN_Pos) /**< (TZAESB_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x414553 ("AES" in ASCII). Position  */
#define TZAESB_WPMR_WPCREN_Pos                _U_(2)                                               /**< (TZAESB_WPMR) Write Protection Control Enable Position */
#define TZAESB_WPMR_WPCREN_Msk                (_U_(0x1) << TZAESB_WPMR_WPCREN_Pos)                 /**< (TZAESB_WPMR) Write Protection Control Enable Mask */
#define TZAESB_WPMR_WPCREN(value)             (TZAESB_WPMR_WPCREN_Msk & ((value) << TZAESB_WPMR_WPCREN_Pos))
#define   TZAESB_WPMR_WPCREN_0_Val            _U_(0x0)                                             /**< (TZAESB_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x414553 ("AES" in ASCII).  */
#define   TZAESB_WPMR_WPCREN_1_Val            _U_(0x1)                                             /**< (TZAESB_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x414553 ("AES" in ASCII).  */
#define TZAESB_WPMR_WPCREN_0                  (TZAESB_WPMR_WPCREN_0_Val << TZAESB_WPMR_WPCREN_Pos) /**< (TZAESB_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x414553 ("AES" in ASCII). Position  */
#define TZAESB_WPMR_WPCREN_1                  (TZAESB_WPMR_WPCREN_1_Val << TZAESB_WPMR_WPCREN_Pos) /**< (TZAESB_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x414553 ("AES" in ASCII). Position  */
#define TZAESB_WPMR_FIRSTE_Pos                _U_(4)                                               /**< (TZAESB_WPMR) First Error Report Enable Position */
#define TZAESB_WPMR_FIRSTE_Msk                (_U_(0x1) << TZAESB_WPMR_FIRSTE_Pos)                 /**< (TZAESB_WPMR) First Error Report Enable Mask */
#define TZAESB_WPMR_FIRSTE(value)             (TZAESB_WPMR_FIRSTE_Msk & ((value) << TZAESB_WPMR_FIRSTE_Pos))
#define   TZAESB_WPMR_FIRSTE_0_Val            _U_(0x0)                                             /**< (TZAESB_WPMR) The last write protection violation source is reported in TZAESB_WPSR.WPVSRC and the last software control error type is reported in TZAESB_WPSR.SWETYP. The TZAESB_ISR.SECE flag is set at the first error occurrence within a series.  */
#define   TZAESB_WPMR_FIRSTE_1_Val            _U_(0x1)                                             /**< (TZAESB_WPMR) Only the first write protection violation source is reported in TZAESB_WPSR.WPVSRC and only the first software control error type is reported in TZAESB_WPSR.SWETYP. The TZAESB_ISR.SECE flag is set at the first error occurrence within a series.  */
#define TZAESB_WPMR_FIRSTE_0                  (TZAESB_WPMR_FIRSTE_0_Val << TZAESB_WPMR_FIRSTE_Pos) /**< (TZAESB_WPMR) The last write protection violation source is reported in TZAESB_WPSR.WPVSRC and the last software control error type is reported in TZAESB_WPSR.SWETYP. The TZAESB_ISR.SECE flag is set at the first error occurrence within a series. Position  */
#define TZAESB_WPMR_FIRSTE_1                  (TZAESB_WPMR_FIRSTE_1_Val << TZAESB_WPMR_FIRSTE_Pos) /**< (TZAESB_WPMR) Only the first write protection violation source is reported in TZAESB_WPSR.WPVSRC and only the first software control error type is reported in TZAESB_WPSR.SWETYP. The TZAESB_ISR.SECE flag is set at the first error occurrence within a series. Position  */
#define TZAESB_WPMR_ACTION_Pos                _U_(5)                                               /**< (TZAESB_WPMR) Action on Abnormal Event Detection Position */
#define TZAESB_WPMR_ACTION_Msk                (_U_(0x7) << TZAESB_WPMR_ACTION_Pos)                 /**< (TZAESB_WPMR) Action on Abnormal Event Detection Mask */
#define TZAESB_WPMR_ACTION(value)             (TZAESB_WPMR_ACTION_Msk & ((value) << TZAESB_WPMR_ACTION_Pos))
#define   TZAESB_WPMR_ACTION_REPORT_ONLY_Val  _U_(0x0)                                             /**< (TZAESB_WPMR) No action (stop or clear key) is performed when one of PKRPVS, WPVS, CGD, SEQE, or SWE flags is set.  */
#define   TZAESB_WPMR_ACTION_LOCK_PKRPVS_WPVS_SWE_Val _U_(0x1)                                             /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.PKRPVS/WPVS/SWE event detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued.  */
#define   TZAESB_WPMR_ACTION_LOCK_CGD_SEQE_Val _U_(0x2)                                             /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.CGD/SEQE event detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued.  */
#define   TZAESB_WPMR_ACTION_LOCK_ANY_EV_Val  _U_(0x3)                                             /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.PKRPVS/WPVS/CGD/SEQE/SWE events detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued.  */
#define   TZAESB_WPMR_ACTION_CLEAR_PKRPVS_WPVS_SWE_Val _U_(0x4)                                             /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.PKRPVS/WPVS/SWE events detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued. Moreover, the TZAESB_KEYWRx key is immediately cleared.  */
#define   TZAESB_WPMR_ACTION_CLEAR_CGD_SEQE_Val _U_(0x5)                                             /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.CGD/SEQE events detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued. Moreover, the TZAESB_KEYWRx key is immediately cleared.  */
#define   TZAESB_WPMR_ACTION_CLEAR_ANY_EV_Val _U_(0x6)                                             /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.PKRPVS/WPVS/CGD/SEQE/SWE events detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued. Moreover, the TZAESB_KEYWRx key is immediately cleared.  */
#define TZAESB_WPMR_ACTION_REPORT_ONLY        (TZAESB_WPMR_ACTION_REPORT_ONLY_Val << TZAESB_WPMR_ACTION_Pos) /**< (TZAESB_WPMR) No action (stop or clear key) is performed when one of PKRPVS, WPVS, CGD, SEQE, or SWE flags is set. Position  */
#define TZAESB_WPMR_ACTION_LOCK_PKRPVS_WPVS_SWE (TZAESB_WPMR_ACTION_LOCK_PKRPVS_WPVS_SWE_Val << TZAESB_WPMR_ACTION_Pos) /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.PKRPVS/WPVS/SWE event detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued. Position  */
#define TZAESB_WPMR_ACTION_LOCK_CGD_SEQE      (TZAESB_WPMR_ACTION_LOCK_CGD_SEQE_Val << TZAESB_WPMR_ACTION_Pos) /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.CGD/SEQE event detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued. Position  */
#define TZAESB_WPMR_ACTION_LOCK_ANY_EV        (TZAESB_WPMR_ACTION_LOCK_ANY_EV_Val << TZAESB_WPMR_ACTION_Pos) /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.PKRPVS/WPVS/CGD/SEQE/SWE events detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued. Position  */
#define TZAESB_WPMR_ACTION_CLEAR_PKRPVS_WPVS_SWE (TZAESB_WPMR_ACTION_CLEAR_PKRPVS_WPVS_SWE_Val << TZAESB_WPMR_ACTION_Pos) /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.PKRPVS/WPVS/SWE events detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued. Moreover, the TZAESB_KEYWRx key is immediately cleared. Position  */
#define TZAESB_WPMR_ACTION_CLEAR_CGD_SEQE     (TZAESB_WPMR_ACTION_CLEAR_CGD_SEQE_Val << TZAESB_WPMR_ACTION_Pos) /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.CGD/SEQE events detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued. Moreover, the TZAESB_KEYWRx key is immediately cleared. Position  */
#define TZAESB_WPMR_ACTION_CLEAR_ANY_EV       (TZAESB_WPMR_ACTION_CLEAR_ANY_EV_Val << TZAESB_WPMR_ACTION_Pos) /**< (TZAESB_WPMR) If a processing is in progress when the TZAESB_WPSR.PKRPVS/WPVS/CGD/SEQE/SWE events detection occurs, the current processing is ended normally but no other processing is started while a TZAESB_CR.UNLOCK command is issued. Moreover, the TZAESB_KEYWRx key is immediately cleared. Position  */
#define TZAESB_WPMR_WPKEY_Pos                 _U_(8)                                               /**< (TZAESB_WPMR) Write Protection Key Position */
#define TZAESB_WPMR_WPKEY_Msk                 (_U_(0xFFFFFF) << TZAESB_WPMR_WPKEY_Pos)             /**< (TZAESB_WPMR) Write Protection Key Mask */
#define TZAESB_WPMR_WPKEY(value)              (TZAESB_WPMR_WPKEY_Msk & ((value) << TZAESB_WPMR_WPKEY_Pos))
#define   TZAESB_WPMR_WPKEY_PASSWD_Val        _U_(0x414553)                                        /**< (TZAESB_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN and WPCREN bits. Always reads as 0.  */
#define TZAESB_WPMR_WPKEY_PASSWD              (TZAESB_WPMR_WPKEY_PASSWD_Val << TZAESB_WPMR_WPKEY_Pos) /**< (TZAESB_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN and WPCREN bits. Always reads as 0. Position  */
#define TZAESB_WPMR_Msk                       _U_(0xFFFFFFF7)                                      /**< (TZAESB_WPMR) Register Mask  */


/* -------- TZAESB_WPSR : (TZAESB Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define TZAESB_WPSR_RESETVALUE                _U_(0x00)                                            /**<  (TZAESB_WPSR) Write Protection Status Register  Reset Value */

#define TZAESB_WPSR_WPVS_Pos                  _U_(0)                                               /**< (TZAESB_WPSR) Write Protection Violation Status (cleared on read) Position */
#define TZAESB_WPSR_WPVS_Msk                  (_U_(0x1) << TZAESB_WPSR_WPVS_Pos)                   /**< (TZAESB_WPSR) Write Protection Violation Status (cleared on read) Mask */
#define TZAESB_WPSR_WPVS(value)               (TZAESB_WPSR_WPVS_Msk & ((value) << TZAESB_WPSR_WPVS_Pos))
#define   TZAESB_WPSR_WPVS_0_Val              _U_(0x0)                                             /**< (TZAESB_WPSR) No write protect violation has occurred since the last read of TZAESB_WPSR.  */
#define   TZAESB_WPSR_WPVS_1_Val              _U_(0x1)                                             /**< (TZAESB_WPSR) A write protect violation has occurred since the last read of TZAESB_WPSR. The address offset of the violated register is reported into field WPVSRC.  */
#define TZAESB_WPSR_WPVS_0                    (TZAESB_WPSR_WPVS_0_Val << TZAESB_WPSR_WPVS_Pos)     /**< (TZAESB_WPSR) No write protect violation has occurred since the last read of TZAESB_WPSR. Position  */
#define TZAESB_WPSR_WPVS_1                    (TZAESB_WPSR_WPVS_1_Val << TZAESB_WPSR_WPVS_Pos)     /**< (TZAESB_WPSR) A write protect violation has occurred since the last read of TZAESB_WPSR. The address offset of the violated register is reported into field WPVSRC. Position  */
#define TZAESB_WPSR_CGD_Pos                   _U_(1)                                               /**< (TZAESB_WPSR) Clock Glitch Detected (cleared on read) Position */
#define TZAESB_WPSR_CGD_Msk                   (_U_(0x1) << TZAESB_WPSR_CGD_Pos)                    /**< (TZAESB_WPSR) Clock Glitch Detected (cleared on read) Mask */
#define TZAESB_WPSR_CGD(value)                (TZAESB_WPSR_CGD_Msk & ((value) << TZAESB_WPSR_CGD_Pos))
#define   TZAESB_WPSR_CGD_0_Val               _U_(0x0)                                             /**< (TZAESB_WPSR) No clock glitch has occurred since the last read of TZAESB_WPSR. Under normal operating conditions, this bit is always cleared.  */
#define   TZAESB_WPSR_CGD_1_Val               _U_(0x1)                                             /**< (TZAESB_WPSR) A clock glitch has occurred since the last read of TZAESB_WPSR. This flag can only be set in case of an abnormal clock signal waveform (glitch).  */
#define TZAESB_WPSR_CGD_0                     (TZAESB_WPSR_CGD_0_Val << TZAESB_WPSR_CGD_Pos)       /**< (TZAESB_WPSR) No clock glitch has occurred since the last read of TZAESB_WPSR. Under normal operating conditions, this bit is always cleared. Position  */
#define TZAESB_WPSR_CGD_1                     (TZAESB_WPSR_CGD_1_Val << TZAESB_WPSR_CGD_Pos)       /**< (TZAESB_WPSR) A clock glitch has occurred since the last read of TZAESB_WPSR. This flag can only be set in case of an abnormal clock signal waveform (glitch). Position  */
#define TZAESB_WPSR_SEQE_Pos                  _U_(2)                                               /**< (TZAESB_WPSR) Internal Sequencer Error (cleared on read) Position */
#define TZAESB_WPSR_SEQE_Msk                  (_U_(0x1) << TZAESB_WPSR_SEQE_Pos)                   /**< (TZAESB_WPSR) Internal Sequencer Error (cleared on read) Mask */
#define TZAESB_WPSR_SEQE(value)               (TZAESB_WPSR_SEQE_Msk & ((value) << TZAESB_WPSR_SEQE_Pos))
#define   TZAESB_WPSR_SEQE_0_Val              _U_(0x0)                                             /**< (TZAESB_WPSR) No peripheral internal sequencer error has occurred since the last read of TZAESB_WPSR.  */
#define   TZAESB_WPSR_SEQE_1_Val              _U_(0x1)                                             /**< (TZAESB_WPSR) A peripheral internal sequencer error has occurred since the last read of TZAESB_WPSR. This flag can only be set under abnormal operating conditions.  */
#define TZAESB_WPSR_SEQE_0                    (TZAESB_WPSR_SEQE_0_Val << TZAESB_WPSR_SEQE_Pos)     /**< (TZAESB_WPSR) No peripheral internal sequencer error has occurred since the last read of TZAESB_WPSR. Position  */
#define TZAESB_WPSR_SEQE_1                    (TZAESB_WPSR_SEQE_1_Val << TZAESB_WPSR_SEQE_Pos)     /**< (TZAESB_WPSR) A peripheral internal sequencer error has occurred since the last read of TZAESB_WPSR. This flag can only be set under abnormal operating conditions. Position  */
#define TZAESB_WPSR_SWE_Pos                   _U_(3)                                               /**< (TZAESB_WPSR) Software Control Error (cleared on read) Position */
#define TZAESB_WPSR_SWE_Msk                   (_U_(0x1) << TZAESB_WPSR_SWE_Pos)                    /**< (TZAESB_WPSR) Software Control Error (cleared on read) Mask */
#define TZAESB_WPSR_SWE(value)                (TZAESB_WPSR_SWE_Msk & ((value) << TZAESB_WPSR_SWE_Pos))
#define   TZAESB_WPSR_SWE_0_Val               _U_(0x0)                                             /**< (TZAESB_WPSR) No software error has occurred since the last read of TZAESB_WPSR.  */
#define   TZAESB_WPSR_SWE_1_Val               _U_(0x1)                                             /**< (TZAESB_WPSR) A software error has occurred since the last read of TZAESB_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0).  */
#define TZAESB_WPSR_SWE_0                     (TZAESB_WPSR_SWE_0_Val << TZAESB_WPSR_SWE_Pos)       /**< (TZAESB_WPSR) No software error has occurred since the last read of TZAESB_WPSR. Position  */
#define TZAESB_WPSR_SWE_1                     (TZAESB_WPSR_SWE_1_Val << TZAESB_WPSR_SWE_Pos)       /**< (TZAESB_WPSR) A software error has occurred since the last read of TZAESB_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0). Position  */
#define TZAESB_WPSR_PKRPVS_Pos                _U_(4)                                               /**< (TZAESB_WPSR) Private Key Internal Register Protection Violation Status (cleared on read) Position */
#define TZAESB_WPSR_PKRPVS_Msk                (_U_(0x1) << TZAESB_WPSR_PKRPVS_Pos)                 /**< (TZAESB_WPSR) Private Key Internal Register Protection Violation Status (cleared on read) Mask */
#define TZAESB_WPSR_PKRPVS(value)             (TZAESB_WPSR_PKRPVS_Msk & ((value) << TZAESB_WPSR_PKRPVS_Pos))
#define   TZAESB_WPSR_PKRPVS_0_Val            _U_(0x0)                                             /**< (TZAESB_WPSR) No Private Key internal register access violation has occurred since the last read of TZAESB_WPSR.  */
#define   TZAESB_WPSR_PKRPVS_1_Val            _U_(0x1)                                             /**< (TZAESB_WPSR) A Private Key internal register access violation has occurred since the last read of TZAESB_WPSR.  */
#define TZAESB_WPSR_PKRPVS_0                  (TZAESB_WPSR_PKRPVS_0_Val << TZAESB_WPSR_PKRPVS_Pos) /**< (TZAESB_WPSR) No Private Key internal register access violation has occurred since the last read of TZAESB_WPSR. Position  */
#define TZAESB_WPSR_PKRPVS_1                  (TZAESB_WPSR_PKRPVS_1_Val << TZAESB_WPSR_PKRPVS_Pos) /**< (TZAESB_WPSR) A Private Key internal register access violation has occurred since the last read of TZAESB_WPSR. Position  */
#define TZAESB_WPSR_WPVSRC_Pos                _U_(8)                                               /**< (TZAESB_WPSR) Write Protection Violation Source Position */
#define TZAESB_WPSR_WPVSRC_Msk                (_U_(0xFF) << TZAESB_WPSR_WPVSRC_Pos)                /**< (TZAESB_WPSR) Write Protection Violation Source Mask */
#define TZAESB_WPSR_WPVSRC(value)             (TZAESB_WPSR_WPVSRC_Msk & ((value) << TZAESB_WPSR_WPVSRC_Pos))
#define TZAESB_WPSR_SWETYP_Pos                _U_(24)                                              /**< (TZAESB_WPSR) Software Error Type (cleared on read) Position */
#define TZAESB_WPSR_SWETYP_Msk                (_U_(0xF) << TZAESB_WPSR_SWETYP_Pos)                 /**< (TZAESB_WPSR) Software Error Type (cleared on read) Mask */
#define TZAESB_WPSR_SWETYP(value)             (TZAESB_WPSR_SWETYP_Msk & ((value) << TZAESB_WPSR_SWETYP_Pos))
#define   TZAESB_WPSR_SWETYP_READ_WO_Val      _U_(0x0)                                             /**< (TZAESB_WPSR) A write-only register has been read (Warning).  */
#define   TZAESB_WPSR_SWETYP_WRITE_RO_Val     _U_(0x1)                                             /**< (TZAESB_WPSR) TZAESB is enabled and a write access has been performed on a read-only register (Warning).  */
#define   TZAESB_WPSR_SWETYP_UNDEF_RW_Val     _U_(0x2)                                             /**< (TZAESB_WPSR) Access to an undefined address (Warning).  */
#define   TZAESB_WPSR_SWETYP_CTRL_START_Val   _U_(0x3)                                             /**< (TZAESB_WPSR) Abnormal use of TZAESB_CR.START command when DMA access is configured.  */
#define   TZAESB_WPSR_SWETYP_WEIRD_ACTION_Val _U_(0x4)                                             /**< (TZAESB_WPSR) A Private Key bus access, key write, init value write, output data read or TZAESB_MR and TZAESB_EMR write has been performed while a process is in progress (abnormal).  */
#define   TZAESB_WPSR_SWETYP_INCOMPLETE_KEY_Val _U_(0x5)                                             /**< (TZAESB_WPSR) A tentative of start is required while the key is not fully loaded into the TZAESB_KEYWRx registers.  */
#define TZAESB_WPSR_SWETYP_READ_WO            (TZAESB_WPSR_SWETYP_READ_WO_Val << TZAESB_WPSR_SWETYP_Pos) /**< (TZAESB_WPSR) A write-only register has been read (Warning). Position  */
#define TZAESB_WPSR_SWETYP_WRITE_RO           (TZAESB_WPSR_SWETYP_WRITE_RO_Val << TZAESB_WPSR_SWETYP_Pos) /**< (TZAESB_WPSR) TZAESB is enabled and a write access has been performed on a read-only register (Warning). Position  */
#define TZAESB_WPSR_SWETYP_UNDEF_RW           (TZAESB_WPSR_SWETYP_UNDEF_RW_Val << TZAESB_WPSR_SWETYP_Pos) /**< (TZAESB_WPSR) Access to an undefined address (Warning). Position  */
#define TZAESB_WPSR_SWETYP_CTRL_START         (TZAESB_WPSR_SWETYP_CTRL_START_Val << TZAESB_WPSR_SWETYP_Pos) /**< (TZAESB_WPSR) Abnormal use of TZAESB_CR.START command when DMA access is configured. Position  */
#define TZAESB_WPSR_SWETYP_WEIRD_ACTION       (TZAESB_WPSR_SWETYP_WEIRD_ACTION_Val << TZAESB_WPSR_SWETYP_Pos) /**< (TZAESB_WPSR) A Private Key bus access, key write, init value write, output data read or TZAESB_MR and TZAESB_EMR write has been performed while a process is in progress (abnormal). Position  */
#define TZAESB_WPSR_SWETYP_INCOMPLETE_KEY     (TZAESB_WPSR_SWETYP_INCOMPLETE_KEY_Val << TZAESB_WPSR_SWETYP_Pos) /**< (TZAESB_WPSR) A tentative of start is required while the key is not fully loaded into the TZAESB_KEYWRx registers. Position  */
#define TZAESB_WPSR_ECLASS_Pos                _U_(31)                                              /**< (TZAESB_WPSR) Software Error Class (cleared on read) Position */
#define TZAESB_WPSR_ECLASS_Msk                (_U_(0x1) << TZAESB_WPSR_ECLASS_Pos)                 /**< (TZAESB_WPSR) Software Error Class (cleared on read) Mask */
#define TZAESB_WPSR_ECLASS(value)             (TZAESB_WPSR_ECLASS_Msk & ((value) << TZAESB_WPSR_ECLASS_Pos))
#define   TZAESB_WPSR_ECLASS_WARNING_Val      _U_(0x0)                                             /**< (TZAESB_WPSR) An abnormal access that does not affect system functionality  */
#define   TZAESB_WPSR_ECLASS_ERROR_Val        _U_(0x1)                                             /**< (TZAESB_WPSR) An access is performed into key, input data, control registers while the TZAESB is performing an encryption/decryption or a start is request by software or DMA while the key is not fully configured.  */
#define TZAESB_WPSR_ECLASS_WARNING            (TZAESB_WPSR_ECLASS_WARNING_Val << TZAESB_WPSR_ECLASS_Pos) /**< (TZAESB_WPSR) An abnormal access that does not affect system functionality Position  */
#define TZAESB_WPSR_ECLASS_ERROR              (TZAESB_WPSR_ECLASS_ERROR_Val << TZAESB_WPSR_ECLASS_Pos) /**< (TZAESB_WPSR) An access is performed into key, input data, control registers while the TZAESB is performing an encryption/decryption or a start is request by software or DMA while the key is not fully configured. Position  */
#define TZAESB_WPSR_Msk                       _U_(0x8F00FF1F)                                      /**< (TZAESB_WPSR) Register Mask  */


/** \brief TZAESB register offsets definitions */
#define TZAESB_CR_REG_OFST             (0x00)              /**< (TZAESB_CR) Control Register Offset */
#define TZAESB_MR_REG_OFST             (0x04)              /**< (TZAESB_MR) Mode Register Offset */
#define TZAESB_IER_REG_OFST            (0x10)              /**< (TZAESB_IER) Interrupt Enable Register Offset */
#define TZAESB_IDR_REG_OFST            (0x14)              /**< (TZAESB_IDR) Interrupt Disable Register Offset */
#define TZAESB_IMR_REG_OFST            (0x18)              /**< (TZAESB_IMR) Interrupt Mask Register Offset */
#define TZAESB_ISR_REG_OFST            (0x1C)              /**< (TZAESB_ISR) Interrupt Status Register Offset */
#define TZAESB_KEYWR_REG_OFST          (0x20)              /**< (TZAESB_KEYWR) Key Word Register x Offset */
#define TZAESB_KEYWR0_REG_OFST         (0x20)              /**< (TZAESB_KEYWR0) Key Word Register x Offset */
#define TZAESB_KEYWR1_REG_OFST         (0x24)              /**< (TZAESB_KEYWR1) Key Word Register x Offset */
#define TZAESB_KEYWR2_REG_OFST         (0x28)              /**< (TZAESB_KEYWR2) Key Word Register x Offset */
#define TZAESB_KEYWR3_REG_OFST         (0x2C)              /**< (TZAESB_KEYWR3) Key Word Register x Offset */
#define TZAESB_IVR_REG_OFST            (0x60)              /**< (TZAESB_IVR) Initialization Vector Register x Offset */
#define TZAESB_IVR0_REG_OFST           (0x60)              /**< (TZAESB_IVR0) Initialization Vector Register x Offset */
#define TZAESB_IVR1_REG_OFST           (0x64)              /**< (TZAESB_IVR1) Initialization Vector Register x Offset */
#define TZAESB_IVR2_REG_OFST           (0x68)              /**< (TZAESB_IVR2) Initialization Vector Register x Offset */
#define TZAESB_IVR3_REG_OFST           (0x6C)              /**< (TZAESB_IVR3) Initialization Vector Register x Offset */
#define TZAESB_EMR_REG_OFST            (0xB0)              /**< (TZAESB_EMR) Extended Mode Register Offset */
#define TZAESB_WPMR_REG_OFST           (0xE4)              /**< (TZAESB_WPMR) Write Protection Mode Register Offset */
#define TZAESB_WPSR_REG_OFST           (0xE8)              /**< (TZAESB_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TZAESB register API structure */
typedef struct
{  /* TrustZone Advanced Encryption Standard Bridge */
  __O   uint32_t                       TZAESB_CR;          /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       TZAESB_MR;          /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0x08];
  __O   uint32_t                       TZAESB_IER;         /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       TZAESB_IDR;         /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       TZAESB_IMR;         /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       TZAESB_ISR;         /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __O   uint32_t                       TZAESB_KEYWR[4];    /**< Offset: 0x20 ( /W  32) Key Word Register x */
  __I   uint8_t                        Reserved2[0x30];
  __O   uint32_t                       TZAESB_IVR[4];      /**< Offset: 0x60 ( /W  32) Initialization Vector Register x */
  __I   uint8_t                        Reserved3[0x40];
  __IO  uint32_t                       TZAESB_EMR;         /**< Offset: 0xB0 (R/W  32) Extended Mode Register */
  __I   uint8_t                        Reserved4[0x30];
  __IO  uint32_t                       TZAESB_WPMR;        /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       TZAESB_WPSR;        /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} tzaesb_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_TZAESB_COMPONENT_H_ */
