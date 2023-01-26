/*
 * Component description for TRNG
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
#ifndef _SAM9X_TRNG_COMPONENT_H_
#define _SAM9X_TRNG_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TRNG                                         */
/* ************************************************************************** */

/* -------- TRNG_CR : (TRNG Offset: 0x00) ( /W 32) Control Register -------- */
#define TRNG_CR_ENABLE_Pos                    _U_(0)                                               /**< (TRNG_CR) Enable TRNG to Provide Random Values Position */
#define TRNG_CR_ENABLE_Msk                    (_U_(0x1) << TRNG_CR_ENABLE_Pos)                     /**< (TRNG_CR) Enable TRNG to Provide Random Values Mask */
#define TRNG_CR_ENABLE(value)                 (TRNG_CR_ENABLE_Msk & ((value) << TRNG_CR_ENABLE_Pos))
#define TRNG_CR_WAKEY_Pos                     _U_(8)                                               /**< (TRNG_CR) Register Write Access Key Position */
#define TRNG_CR_WAKEY_Msk                     (_U_(0xFFFFFF) << TRNG_CR_WAKEY_Pos)                 /**< (TRNG_CR) Register Write Access Key Mask */
#define TRNG_CR_WAKEY(value)                  (TRNG_CR_WAKEY_Msk & ((value) << TRNG_CR_WAKEY_Pos))
#define   TRNG_CR_WAKEY_PASSWD_Val            _U_(0x524E47)                                        /**< (TRNG_CR) Writing any other value in this field aborts the write operation.  */
#define TRNG_CR_WAKEY_PASSWD                  (TRNG_CR_WAKEY_PASSWD_Val << TRNG_CR_WAKEY_Pos)      /**< (TRNG_CR) Writing any other value in this field aborts the write operation. Position  */
#define TRNG_CR_Msk                           _U_(0xFFFFFF01)                                      /**< (TRNG_CR) Register Mask  */


/* -------- TRNG_MR : (TRNG Offset: 0x04) (R/W 32) Mode Register -------- */
#define TRNG_MR_HALFR_Pos                     _U_(0)                                               /**< (TRNG_MR) Half Rate Enable Position */
#define TRNG_MR_HALFR_Msk                     (_U_(0x1) << TRNG_MR_HALFR_Pos)                      /**< (TRNG_MR) Half Rate Enable Mask */
#define TRNG_MR_HALFR(value)                  (TRNG_MR_HALFR_Msk & ((value) << TRNG_MR_HALFR_Pos))
#define TRNG_MR_Msk                           _U_(0x00000001)                                      /**< (TRNG_MR) Register Mask  */


/* -------- TRNG_PKBCR : (TRNG Offset: 0x08) ( /W 32) Private Key Bus Control Register -------- */
#define TRNG_PKBCR_KID_Pos                    _U_(0)                                               /**< (TRNG_PKBCR) Key ID (Must be Always Written to 0) Position */
#define TRNG_PKBCR_KID_Msk                    (_U_(0x1) << TRNG_PKBCR_KID_Pos)                     /**< (TRNG_PKBCR) Key ID (Must be Always Written to 0) Mask */
#define TRNG_PKBCR_KID(value)                 (TRNG_PKBCR_KID_Msk & ((value) << TRNG_PKBCR_KID_Pos))
#define TRNG_PKBCR_KSLAVE_Pos                 _U_(4)                                               /**< (TRNG_PKBCR) Key Bus Slave Position */
#define TRNG_PKBCR_KSLAVE_Msk                 (_U_(0x3) << TRNG_PKBCR_KSLAVE_Pos)                  /**< (TRNG_PKBCR) Key Bus Slave Mask */
#define TRNG_PKBCR_KSLAVE(value)              (TRNG_PKBCR_KSLAVE_Msk & ((value) << TRNG_PKBCR_KSLAVE_Pos))
#define   TRNG_PKBCR_KSLAVE_TDES_ID_Val       _U_(0x0)                                             /**< (TRNG_PKBCR) Selects the TDES.  */
#define   TRNG_PKBCR_KSLAVE_AES_ID_Val        _U_(0x1)                                             /**< (TRNG_PKBCR) Selects the AES.  */
#define   TRNG_PKBCR_KSLAVE_OTPC_ID_Val       _U_(0x2)                                             /**< (TRNG_PKBCR) Selects the OTPC.  */
#define TRNG_PKBCR_KSLAVE_TDES_ID             (TRNG_PKBCR_KSLAVE_TDES_ID_Val << TRNG_PKBCR_KSLAVE_Pos) /**< (TRNG_PKBCR) Selects the TDES. Position  */
#define TRNG_PKBCR_KSLAVE_AES_ID              (TRNG_PKBCR_KSLAVE_AES_ID_Val << TRNG_PKBCR_KSLAVE_Pos) /**< (TRNG_PKBCR) Selects the AES. Position  */
#define TRNG_PKBCR_KSLAVE_OTPC_ID             (TRNG_PKBCR_KSLAVE_OTPC_ID_Val << TRNG_PKBCR_KSLAVE_Pos) /**< (TRNG_PKBCR) Selects the OTPC. Position  */
#define TRNG_PKBCR_KLENGTH_Pos                _U_(8)                                               /**< (TRNG_PKBCR) Key Length Position */
#define TRNG_PKBCR_KLENGTH_Msk                (_U_(0xFF) << TRNG_PKBCR_KLENGTH_Pos)                /**< (TRNG_PKBCR) Key Length Mask */
#define TRNG_PKBCR_KLENGTH(value)             (TRNG_PKBCR_KLENGTH_Msk & ((value) << TRNG_PKBCR_KLENGTH_Pos))
#define TRNG_PKBCR_WAKEY_Pos                  _U_(16)                                              /**< (TRNG_PKBCR) Register Write Access Key Position */
#define TRNG_PKBCR_WAKEY_Msk                  (_U_(0xFFFF) << TRNG_PKBCR_WAKEY_Pos)                /**< (TRNG_PKBCR) Register Write Access Key Mask */
#define TRNG_PKBCR_WAKEY(value)               (TRNG_PKBCR_WAKEY_Msk & ((value) << TRNG_PKBCR_WAKEY_Pos))
#define   TRNG_PKBCR_WAKEY_PASSWD_Val         _U_(0x524B)                                          /**< (TRNG_PKBCR) Writing any other value in this field aborts the write operation.  */
#define TRNG_PKBCR_WAKEY_PASSWD               (TRNG_PKBCR_WAKEY_PASSWD_Val << TRNG_PKBCR_WAKEY_Pos) /**< (TRNG_PKBCR) Writing any other value in this field aborts the write operation. Position  */
#define TRNG_PKBCR_Msk                        _U_(0xFFFFFF31)                                      /**< (TRNG_PKBCR) Register Mask  */


/* -------- TRNG_IER : (TRNG Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define TRNG_IER_DATRDY_Pos                   _U_(0)                                               /**< (TRNG_IER) Data Ready Interrupt Enable Position */
#define TRNG_IER_DATRDY_Msk                   (_U_(0x1) << TRNG_IER_DATRDY_Pos)                    /**< (TRNG_IER) Data Ready Interrupt Enable Mask */
#define TRNG_IER_DATRDY(value)                (TRNG_IER_DATRDY_Msk & ((value) << TRNG_IER_DATRDY_Pos))
#define TRNG_IER_SECE_Pos                     _U_(1)                                               /**< (TRNG_IER) Security and/or Safety Event Interrupt Enable Position */
#define TRNG_IER_SECE_Msk                     (_U_(0x1) << TRNG_IER_SECE_Pos)                      /**< (TRNG_IER) Security and/or Safety Event Interrupt Enable Mask */
#define TRNG_IER_SECE(value)                  (TRNG_IER_SECE_Msk & ((value) << TRNG_IER_SECE_Pos))
#define TRNG_IER_EOTPKB_Pos                   _U_(2)                                               /**< (TRNG_IER) End Of Transfer on Private Key Bus Interrupt Enable Position */
#define TRNG_IER_EOTPKB_Msk                   (_U_(0x1) << TRNG_IER_EOTPKB_Pos)                    /**< (TRNG_IER) End Of Transfer on Private Key Bus Interrupt Enable Mask */
#define TRNG_IER_EOTPKB(value)                (TRNG_IER_EOTPKB_Msk & ((value) << TRNG_IER_EOTPKB_Pos))
#define TRNG_IER_Msk                          _U_(0x00000007)                                      /**< (TRNG_IER) Register Mask  */


/* -------- TRNG_IDR : (TRNG Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define TRNG_IDR_DATRDY_Pos                   _U_(0)                                               /**< (TRNG_IDR) Data Ready Interrupt Disable Position */
#define TRNG_IDR_DATRDY_Msk                   (_U_(0x1) << TRNG_IDR_DATRDY_Pos)                    /**< (TRNG_IDR) Data Ready Interrupt Disable Mask */
#define TRNG_IDR_DATRDY(value)                (TRNG_IDR_DATRDY_Msk & ((value) << TRNG_IDR_DATRDY_Pos))
#define TRNG_IDR_SECE_Pos                     _U_(1)                                               /**< (TRNG_IDR) Security and/or Safety Event Interrupt Disable Position */
#define TRNG_IDR_SECE_Msk                     (_U_(0x1) << TRNG_IDR_SECE_Pos)                      /**< (TRNG_IDR) Security and/or Safety Event Interrupt Disable Mask */
#define TRNG_IDR_SECE(value)                  (TRNG_IDR_SECE_Msk & ((value) << TRNG_IDR_SECE_Pos))
#define TRNG_IDR_EOTPKB_Pos                   _U_(2)                                               /**< (TRNG_IDR) End Of Transfer on Private Key Bus Interrupt Disable Position */
#define TRNG_IDR_EOTPKB_Msk                   (_U_(0x1) << TRNG_IDR_EOTPKB_Pos)                    /**< (TRNG_IDR) End Of Transfer on Private Key Bus Interrupt Disable Mask */
#define TRNG_IDR_EOTPKB(value)                (TRNG_IDR_EOTPKB_Msk & ((value) << TRNG_IDR_EOTPKB_Pos))
#define TRNG_IDR_Msk                          _U_(0x00000007)                                      /**< (TRNG_IDR) Register Mask  */


/* -------- TRNG_IMR : (TRNG Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define TRNG_IMR_DATRDY_Pos                   _U_(0)                                               /**< (TRNG_IMR) Data Ready Interrupt Mask Position */
#define TRNG_IMR_DATRDY_Msk                   (_U_(0x1) << TRNG_IMR_DATRDY_Pos)                    /**< (TRNG_IMR) Data Ready Interrupt Mask Mask */
#define TRNG_IMR_DATRDY(value)                (TRNG_IMR_DATRDY_Msk & ((value) << TRNG_IMR_DATRDY_Pos))
#define TRNG_IMR_SECE_Pos                     _U_(1)                                               /**< (TRNG_IMR) Security and/or Safety Event Interrupt Mask Position */
#define TRNG_IMR_SECE_Msk                     (_U_(0x1) << TRNG_IMR_SECE_Pos)                      /**< (TRNG_IMR) Security and/or Safety Event Interrupt Mask Mask */
#define TRNG_IMR_SECE(value)                  (TRNG_IMR_SECE_Msk & ((value) << TRNG_IMR_SECE_Pos))
#define TRNG_IMR_EOTPKB_Pos                   _U_(2)                                               /**< (TRNG_IMR) End Of Transfer on Private Key Bus Interrupt Mask Position */
#define TRNG_IMR_EOTPKB_Msk                   (_U_(0x1) << TRNG_IMR_EOTPKB_Pos)                    /**< (TRNG_IMR) End Of Transfer on Private Key Bus Interrupt Mask Mask */
#define TRNG_IMR_EOTPKB(value)                (TRNG_IMR_EOTPKB_Msk & ((value) << TRNG_IMR_EOTPKB_Pos))
#define TRNG_IMR_Msk                          _U_(0x00000007)                                      /**< (TRNG_IMR) Register Mask  */


/* -------- TRNG_ISR : (TRNG Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define TRNG_ISR_DATRDY_Pos                   _U_(0)                                               /**< (TRNG_ISR) Data Ready (cleared on read) Position */
#define TRNG_ISR_DATRDY_Msk                   (_U_(0x1) << TRNG_ISR_DATRDY_Pos)                    /**< (TRNG_ISR) Data Ready (cleared on read) Mask */
#define TRNG_ISR_DATRDY(value)                (TRNG_ISR_DATRDY_Msk & ((value) << TRNG_ISR_DATRDY_Pos))
#define TRNG_ISR_SECE_Pos                     _U_(1)                                               /**< (TRNG_ISR) Security and/or Safety Event (cleared on read) Position */
#define TRNG_ISR_SECE_Msk                     (_U_(0x1) << TRNG_ISR_SECE_Pos)                      /**< (TRNG_ISR) Security and/or Safety Event (cleared on read) Mask */
#define TRNG_ISR_SECE(value)                  (TRNG_ISR_SECE_Msk & ((value) << TRNG_ISR_SECE_Pos))
#define TRNG_ISR_EOTPKB_Pos                   _U_(2)                                               /**< (TRNG_ISR) End Of Transfer on Private Key Bus (cleared on read) Position */
#define TRNG_ISR_EOTPKB_Msk                   (_U_(0x1) << TRNG_ISR_EOTPKB_Pos)                    /**< (TRNG_ISR) End Of Transfer on Private Key Bus (cleared on read) Mask */
#define TRNG_ISR_EOTPKB(value)                (TRNG_ISR_EOTPKB_Msk & ((value) << TRNG_ISR_EOTPKB_Pos))
#define TRNG_ISR_Msk                          _U_(0x00000007)                                      /**< (TRNG_ISR) Register Mask  */


/* -------- TRNG_ODATA : (TRNG Offset: 0x50) ( R/ 32) Output Data Register -------- */
#define TRNG_ODATA_ODATA_Pos                  _U_(0)                                               /**< (TRNG_ODATA) Output Data Position */
#define TRNG_ODATA_ODATA_Msk                  (_U_(0xFFFFFFFF) << TRNG_ODATA_ODATA_Pos)            /**< (TRNG_ODATA) Output Data Mask */
#define TRNG_ODATA_ODATA(value)               (TRNG_ODATA_ODATA_Msk & ((value) << TRNG_ODATA_ODATA_Pos))
#define TRNG_ODATA_Msk                        _U_(0xFFFFFFFF)                                      /**< (TRNG_ODATA) Register Mask  */


/* -------- TRNG_WPMR : (TRNG Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define TRNG_WPMR_WPEN_Pos                    _U_(0)                                               /**< (TRNG_WPMR) Write Protection Enable Position */
#define TRNG_WPMR_WPEN_Msk                    (_U_(0x1) << TRNG_WPMR_WPEN_Pos)                     /**< (TRNG_WPMR) Write Protection Enable Mask */
#define TRNG_WPMR_WPEN(value)                 (TRNG_WPMR_WPEN_Msk & ((value) << TRNG_WPMR_WPEN_Pos))
#define TRNG_WPMR_WPITEN_Pos                  _U_(1)                                               /**< (TRNG_WPMR) Write Protection Interrupt Enable Position */
#define TRNG_WPMR_WPITEN_Msk                  (_U_(0x1) << TRNG_WPMR_WPITEN_Pos)                   /**< (TRNG_WPMR) Write Protection Interrupt Enable Mask */
#define TRNG_WPMR_WPITEN(value)               (TRNG_WPMR_WPITEN_Msk & ((value) << TRNG_WPMR_WPITEN_Pos))
#define TRNG_WPMR_WPCREN_Pos                  _U_(2)                                               /**< (TRNG_WPMR) Write Protection Control Enable Position */
#define TRNG_WPMR_WPCREN_Msk                  (_U_(0x1) << TRNG_WPMR_WPCREN_Pos)                   /**< (TRNG_WPMR) Write Protection Control Enable Mask */
#define TRNG_WPMR_WPCREN(value)               (TRNG_WPMR_WPCREN_Msk & ((value) << TRNG_WPMR_WPCREN_Pos))
#define TRNG_WPMR_FIRSTE_Pos                  _U_(4)                                               /**< (TRNG_WPMR) First Error Report Enable Position */
#define TRNG_WPMR_FIRSTE_Msk                  (_U_(0x1) << TRNG_WPMR_FIRSTE_Pos)                   /**< (TRNG_WPMR) First Error Report Enable Mask */
#define TRNG_WPMR_FIRSTE(value)               (TRNG_WPMR_FIRSTE_Msk & ((value) << TRNG_WPMR_FIRSTE_Pos))
#define TRNG_WPMR_WPKEY_Pos                   _U_(8)                                               /**< (TRNG_WPMR) Write Protection Key Position */
#define TRNG_WPMR_WPKEY_Msk                   (_U_(0xFFFFFF) << TRNG_WPMR_WPKEY_Pos)               /**< (TRNG_WPMR) Write Protection Key Mask */
#define TRNG_WPMR_WPKEY(value)                (TRNG_WPMR_WPKEY_Msk & ((value) << TRNG_WPMR_WPKEY_Pos))
#define   TRNG_WPMR_WPKEY_PASSWD_Val          _U_(0x524E47)                                        /**< (TRNG_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0.  */
#define TRNG_WPMR_WPKEY_PASSWD                (TRNG_WPMR_WPKEY_PASSWD_Val << TRNG_WPMR_WPKEY_Pos)  /**< (TRNG_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0. Position  */
#define TRNG_WPMR_Msk                         _U_(0xFFFFFF17)                                      /**< (TRNG_WPMR) Register Mask  */


/* -------- TRNG_WPSR : (TRNG Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define TRNG_WPSR_WPVS_Pos                    _U_(0)                                               /**< (TRNG_WPSR) Write Protection Violation Status (cleared on read) Position */
#define TRNG_WPSR_WPVS_Msk                    (_U_(0x1) << TRNG_WPSR_WPVS_Pos)                     /**< (TRNG_WPSR) Write Protection Violation Status (cleared on read) Mask */
#define TRNG_WPSR_WPVS(value)                 (TRNG_WPSR_WPVS_Msk & ((value) << TRNG_WPSR_WPVS_Pos))
#define TRNG_WPSR_CGD_Pos                     _U_(1)                                               /**< (TRNG_WPSR) Clock Glitch Detected (cleared on read) Position */
#define TRNG_WPSR_CGD_Msk                     (_U_(0x1) << TRNG_WPSR_CGD_Pos)                      /**< (TRNG_WPSR) Clock Glitch Detected (cleared on read) Mask */
#define TRNG_WPSR_CGD(value)                  (TRNG_WPSR_CGD_Msk & ((value) << TRNG_WPSR_CGD_Pos))
#define TRNG_WPSR_SEQE_Pos                    _U_(2)                                               /**< (TRNG_WPSR) Internal Sequencer Error (cleared on read) Position */
#define TRNG_WPSR_SEQE_Msk                    (_U_(0x1) << TRNG_WPSR_SEQE_Pos)                     /**< (TRNG_WPSR) Internal Sequencer Error (cleared on read) Mask */
#define TRNG_WPSR_SEQE(value)                 (TRNG_WPSR_SEQE_Msk & ((value) << TRNG_WPSR_SEQE_Pos))
#define TRNG_WPSR_SWE_Pos                     _U_(3)                                               /**< (TRNG_WPSR) Software Control Error (cleared on read) Position */
#define TRNG_WPSR_SWE_Msk                     (_U_(0x1) << TRNG_WPSR_SWE_Pos)                      /**< (TRNG_WPSR) Software Control Error (cleared on read) Mask */
#define TRNG_WPSR_SWE(value)                  (TRNG_WPSR_SWE_Msk & ((value) << TRNG_WPSR_SWE_Pos))
#define TRNG_WPSR_WPVSRC_Pos                  _U_(8)                                               /**< (TRNG_WPSR) Write Protection Violation Source (cleared on read) Position */
#define TRNG_WPSR_WPVSRC_Msk                  (_U_(0xFFFF) << TRNG_WPSR_WPVSRC_Pos)                /**< (TRNG_WPSR) Write Protection Violation Source (cleared on read) Mask */
#define TRNG_WPSR_WPVSRC(value)               (TRNG_WPSR_WPVSRC_Msk & ((value) << TRNG_WPSR_WPVSRC_Pos))
#define TRNG_WPSR_SWETYP_Pos                  _U_(24)                                              /**< (TRNG_WPSR) Software Error Type (cleared on read) Position */
#define TRNG_WPSR_SWETYP_Msk                  (_U_(0xF) << TRNG_WPSR_SWETYP_Pos)                   /**< (TRNG_WPSR) Software Error Type (cleared on read) Mask */
#define TRNG_WPSR_SWETYP(value)               (TRNG_WPSR_SWETYP_Msk & ((value) << TRNG_WPSR_SWETYP_Pos))
#define   TRNG_WPSR_SWETYP_READ_WO_Val        _U_(0x0)                                             /**< (TRNG_WPSR) TRNG is enabled and a write-only register has been read (Warning).  */
#define   TRNG_WPSR_SWETYP_WRITE_RO_Val       _U_(0x1)                                             /**< (TRNG_WPSR) TRNG is enabled and a write access has been performed on a read-only register (Warning).  */
#define   TRNG_WPSR_SWETYP_UNDEF_RW_Val       _U_(0x2)                                             /**< (TRNG_WPSR) Access to an undefined address.  */
#define   TRNG_WPSR_SWETYP_TRNG_DIS_Val       _U_(0x3)                                             /**< (TRNG_WPSR) The TRNG_ODATA register was read when TRNG was disabled or TRNG used for private key bus transfer (Error).  */
#define   TRNG_WPSR_SWETYP_PKB_BUSY_Val       _U_(0x4)                                             /**< (TRNG_WPSR) A write access to the PKB_CTRL register has been attempted during a private key bus transfer (Error).  */
#define TRNG_WPSR_SWETYP_READ_WO              (TRNG_WPSR_SWETYP_READ_WO_Val << TRNG_WPSR_SWETYP_Pos) /**< (TRNG_WPSR) TRNG is enabled and a write-only register has been read (Warning). Position  */
#define TRNG_WPSR_SWETYP_WRITE_RO             (TRNG_WPSR_SWETYP_WRITE_RO_Val << TRNG_WPSR_SWETYP_Pos) /**< (TRNG_WPSR) TRNG is enabled and a write access has been performed on a read-only register (Warning). Position  */
#define TRNG_WPSR_SWETYP_UNDEF_RW             (TRNG_WPSR_SWETYP_UNDEF_RW_Val << TRNG_WPSR_SWETYP_Pos) /**< (TRNG_WPSR) Access to an undefined address. Position  */
#define TRNG_WPSR_SWETYP_TRNG_DIS             (TRNG_WPSR_SWETYP_TRNG_DIS_Val << TRNG_WPSR_SWETYP_Pos) /**< (TRNG_WPSR) The TRNG_ODATA register was read when TRNG was disabled or TRNG used for private key bus transfer (Error). Position  */
#define TRNG_WPSR_SWETYP_PKB_BUSY             (TRNG_WPSR_SWETYP_PKB_BUSY_Val << TRNG_WPSR_SWETYP_Pos) /**< (TRNG_WPSR) A write access to the PKB_CTRL register has been attempted during a private key bus transfer (Error). Position  */
#define TRNG_WPSR_ECLASS_Pos                  _U_(31)                                              /**< (TRNG_WPSR) Software Error Class (cleared on read) Position */
#define TRNG_WPSR_ECLASS_Msk                  (_U_(0x1) << TRNG_WPSR_ECLASS_Pos)                   /**< (TRNG_WPSR) Software Error Class (cleared on read) Mask */
#define TRNG_WPSR_ECLASS(value)               (TRNG_WPSR_ECLASS_Msk & ((value) << TRNG_WPSR_ECLASS_Pos))
#define   TRNG_WPSR_ECLASS_WARNING_Val        _U_(0x0)                                             /**< (TRNG_WPSR) An abnormal access that does not affect system functionality.  */
#define   TRNG_WPSR_ECLASS_ERROR_Val          _U_(0x1)                                             /**< (TRNG_WPSR) Reading TRNG_ODATA when TRNG was disabled or TRNG used for private key bus transfer. TRNG does not provide a random value. Writing to the PKB_CTRL register while a private key bus transfer is ongoing does not launch a new private key bus transfer.  */
#define TRNG_WPSR_ECLASS_WARNING              (TRNG_WPSR_ECLASS_WARNING_Val << TRNG_WPSR_ECLASS_Pos) /**< (TRNG_WPSR) An abnormal access that does not affect system functionality. Position  */
#define TRNG_WPSR_ECLASS_ERROR                (TRNG_WPSR_ECLASS_ERROR_Val << TRNG_WPSR_ECLASS_Pos) /**< (TRNG_WPSR) Reading TRNG_ODATA when TRNG was disabled or TRNG used for private key bus transfer. TRNG does not provide a random value. Writing to the PKB_CTRL register while a private key bus transfer is ongoing does not launch a new private key bus transfer. Position  */
#define TRNG_WPSR_Msk                         _U_(0x8FFFFF0F)                                      /**< (TRNG_WPSR) Register Mask  */


/** \brief TRNG register offsets definitions */
#define TRNG_CR_REG_OFST               (0x00)              /**< (TRNG_CR) Control Register Offset */
#define TRNG_MR_REG_OFST               (0x04)              /**< (TRNG_MR) Mode Register Offset */
#define TRNG_PKBCR_REG_OFST            (0x08)              /**< (TRNG_PKBCR) Private Key Bus Control Register Offset */
#define TRNG_IER_REG_OFST              (0x10)              /**< (TRNG_IER) Interrupt Enable Register Offset */
#define TRNG_IDR_REG_OFST              (0x14)              /**< (TRNG_IDR) Interrupt Disable Register Offset */
#define TRNG_IMR_REG_OFST              (0x18)              /**< (TRNG_IMR) Interrupt Mask Register Offset */
#define TRNG_ISR_REG_OFST              (0x1C)              /**< (TRNG_ISR) Interrupt Status Register Offset */
#define TRNG_ODATA_REG_OFST            (0x50)              /**< (TRNG_ODATA) Output Data Register Offset */
#define TRNG_WPMR_REG_OFST             (0xE4)              /**< (TRNG_WPMR) Write Protection Mode Register Offset */
#define TRNG_WPSR_REG_OFST             (0xE8)              /**< (TRNG_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TRNG register API structure */
typedef struct
{
  __O   uint32_t                       TRNG_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       TRNG_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __O   uint32_t                       TRNG_PKBCR;         /**< Offset: 0x08 ( /W  32) Private Key Bus Control Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       TRNG_IER;           /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       TRNG_IDR;           /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       TRNG_IMR;           /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       TRNG_ISR;           /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved2[0x30];
  __I   uint32_t                       TRNG_ODATA;         /**< Offset: 0x50 (R/   32) Output Data Register */
  __I   uint8_t                        Reserved3[0x90];
  __IO  uint32_t                       TRNG_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       TRNG_WPSR;          /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} trng_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_TRNG_COMPONENT_H_ */
