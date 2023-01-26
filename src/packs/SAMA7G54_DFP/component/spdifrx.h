/*
 * Component description for SPDIFRX
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
#ifndef _SAMA7G_SPDIFRX_COMPONENT_H_
#define _SAMA7G_SPDIFRX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SPDIFRX                                      */
/* ************************************************************************** */

/* -------- SPDIFRX_CHxSR : (SPDIFRX Offset: 0x00) ( R/ 32) Channel X Status Register x -------- */
#define SPDIFRX_CHxSR_RESETVALUE              _U_(0x00)                                            /**<  (SPDIFRX_CHxSR) Channel X Status Register x  Reset Value */

#define SPDIFRX_CHxSR_CHSTATUS_Pos            _U_(0)                                               /**< (SPDIFRX_CHxSR) Channel X Status Data Position */
#define SPDIFRX_CHxSR_CHSTATUS_Msk            (_U_(0xFFFFFFFF) << SPDIFRX_CHxSR_CHSTATUS_Pos)      /**< (SPDIFRX_CHxSR) Channel X Status Data Mask */
#define SPDIFRX_CHxSR_CHSTATUS(value)         (SPDIFRX_CHxSR_CHSTATUS_Msk & ((value) << SPDIFRX_CHxSR_CHSTATUS_Pos))
#define SPDIFRX_CHxSR_Msk                     _U_(0xFFFFFFFF)                                      /**< (SPDIFRX_CHxSR) Register Mask  */


/* -------- SPDIFRX_CHxUD : (SPDIFRX Offset: 0x18) ( R/ 32) Channel X User Data Register x -------- */
#define SPDIFRX_CHxUD_RESETVALUE              _U_(0x00)                                            /**<  (SPDIFRX_CHxUD) Channel X User Data Register x  Reset Value */

#define SPDIFRX_CHxUD_CHUSERDATA_Pos          _U_(0)                                               /**< (SPDIFRX_CHxUD) Channel X User Data Position */
#define SPDIFRX_CHxUD_CHUSERDATA_Msk          (_U_(0xFFFFFFFF) << SPDIFRX_CHxUD_CHUSERDATA_Pos)    /**< (SPDIFRX_CHxUD) Channel X User Data Mask */
#define SPDIFRX_CHxUD_CHUSERDATA(value)       (SPDIFRX_CHxUD_CHUSERDATA_Msk & ((value) << SPDIFRX_CHxUD_CHUSERDATA_Pos))
#define SPDIFRX_CHxUD_Msk                     _U_(0xFFFFFFFF)                                      /**< (SPDIFRX_CHxUD) Register Mask  */


/* -------- SPDIFRX_CR : (SPDIFRX Offset: 0x00) ( /W 32) Control Register -------- */
#define SPDIFRX_CR_SWRST_Pos                  _U_(0)                                               /**< (SPDIFRX_CR) Software Reset Position */
#define SPDIFRX_CR_SWRST_Msk                  (_U_(0x1) << SPDIFRX_CR_SWRST_Pos)                   /**< (SPDIFRX_CR) Software Reset Mask */
#define SPDIFRX_CR_SWRST(value)               (SPDIFRX_CR_SWRST_Msk & ((value) << SPDIFRX_CR_SWRST_Pos))
#define   SPDIFRX_CR_SWRST_0_Val              _U_(0x0)                                             /**< (SPDIFRX_CR) No effect.  */
#define   SPDIFRX_CR_SWRST_1_Val              _U_(0x1)                                             /**< (SPDIFRX_CR) Resets the SPDIF receiver.  */
#define SPDIFRX_CR_SWRST_0                    (SPDIFRX_CR_SWRST_0_Val << SPDIFRX_CR_SWRST_Pos)     /**< (SPDIFRX_CR) No effect. Position  */
#define SPDIFRX_CR_SWRST_1                    (SPDIFRX_CR_SWRST_1_Val << SPDIFRX_CR_SWRST_Pos)     /**< (SPDIFRX_CR) Resets the SPDIF receiver. Position  */
#define SPDIFRX_CR_Msk                        _U_(0x00000001)                                      /**< (SPDIFRX_CR) Register Mask  */


/* -------- SPDIFRX_MR : (SPDIFRX Offset: 0x04) (R/W 32) Mode Register -------- */
#define SPDIFRX_MR_RESETVALUE                 _U_(0x00)                                            /**<  (SPDIFRX_MR) Mode Register  Reset Value */

#define SPDIFRX_MR_RXEN_Pos                   _U_(0)                                               /**< (SPDIFRX_MR) SPDIF Receive Enable Position */
#define SPDIFRX_MR_RXEN_Msk                   (_U_(0x1) << SPDIFRX_MR_RXEN_Pos)                    /**< (SPDIFRX_MR) SPDIF Receive Enable Mask */
#define SPDIFRX_MR_RXEN(value)                (SPDIFRX_MR_RXEN_Msk & ((value) << SPDIFRX_MR_RXEN_Pos))
#define   SPDIFRX_MR_RXEN_DISABLE_Val         _U_(0x0)                                             /**< (SPDIFRX_MR) SPDIF receiver is disabled.  */
#define   SPDIFRX_MR_RXEN_ENABLE_Val          _U_(0x1)                                             /**< (SPDIFRX_MR) SPDIF receiver is enabled.  */
#define SPDIFRX_MR_RXEN_DISABLE               (SPDIFRX_MR_RXEN_DISABLE_Val << SPDIFRX_MR_RXEN_Pos) /**< (SPDIFRX_MR) SPDIF receiver is disabled. Position  */
#define SPDIFRX_MR_RXEN_ENABLE                (SPDIFRX_MR_RXEN_ENABLE_Val << SPDIFRX_MR_RXEN_Pos)  /**< (SPDIFRX_MR) SPDIF receiver is enabled. Position  */
#define SPDIFRX_MR_VBMODE_Pos                 _U_(1)                                               /**< (SPDIFRX_MR) Validity Bit Mode Position */
#define SPDIFRX_MR_VBMODE_Msk                 (_U_(0x1) << SPDIFRX_MR_VBMODE_Pos)                  /**< (SPDIFRX_MR) Validity Bit Mode Mask */
#define SPDIFRX_MR_VBMODE(value)              (SPDIFRX_MR_VBMODE_Msk & ((value) << SPDIFRX_MR_VBMODE_Pos))
#define   SPDIFRX_MR_VBMODE_ALWAYS_LOAD_Val   _U_(0x0)                                             /**< (SPDIFRX_MR) Whatever the validity bit value is, the sample is loaded in FIFO.  */
#define   SPDIFRX_MR_VBMODE_DISCARD_IF_VB1_Val _U_(0x1)                                             /**< (SPDIFRX_MR) The sample is loaded in FIFO only if the validity bit equals 0.  */
#define SPDIFRX_MR_VBMODE_ALWAYS_LOAD         (SPDIFRX_MR_VBMODE_ALWAYS_LOAD_Val << SPDIFRX_MR_VBMODE_Pos) /**< (SPDIFRX_MR) Whatever the validity bit value is, the sample is loaded in FIFO. Position  */
#define SPDIFRX_MR_VBMODE_DISCARD_IF_VB1      (SPDIFRX_MR_VBMODE_DISCARD_IF_VB1_Val << SPDIFRX_MR_VBMODE_Pos) /**< (SPDIFRX_MR) The sample is loaded in FIFO only if the validity bit equals 0. Position  */
#define SPDIFRX_MR_ENDIAN_Pos                 _U_(2)                                               /**< (SPDIFRX_MR) Data Word Endian Mode Position */
#define SPDIFRX_MR_ENDIAN_Msk                 (_U_(0x1) << SPDIFRX_MR_ENDIAN_Pos)                  /**< (SPDIFRX_MR) Data Word Endian Mode Mask */
#define SPDIFRX_MR_ENDIAN(value)              (SPDIFRX_MR_ENDIAN_Msk & ((value) << SPDIFRX_MR_ENDIAN_Pos))
#define   SPDIFRX_MR_ENDIAN_LITTLE_Val        _U_(0x0)                                             /**< (SPDIFRX_MR) Little-endian mode for 24-bit samples.  */
#define   SPDIFRX_MR_ENDIAN_BIG_Val           _U_(0x1)                                             /**< (SPDIFRX_MR) Big-endian mode for 24-bit samples.  */
#define SPDIFRX_MR_ENDIAN_LITTLE              (SPDIFRX_MR_ENDIAN_LITTLE_Val << SPDIFRX_MR_ENDIAN_Pos) /**< (SPDIFRX_MR) Little-endian mode for 24-bit samples. Position  */
#define SPDIFRX_MR_ENDIAN_BIG                 (SPDIFRX_MR_ENDIAN_BIG_Val << SPDIFRX_MR_ENDIAN_Pos) /**< (SPDIFRX_MR) Big-endian mode for 24-bit samples. Position  */
#define SPDIFRX_MR_PBMODE_Pos                 _U_(3)                                               /**< (SPDIFRX_MR) Parity Bit Mode Position */
#define SPDIFRX_MR_PBMODE_Msk                 (_U_(0x1) << SPDIFRX_MR_PBMODE_Pos)                  /**< (SPDIFRX_MR) Parity Bit Mode Mask */
#define SPDIFRX_MR_PBMODE(value)              (SPDIFRX_MR_PBMODE_Msk & ((value) << SPDIFRX_MR_PBMODE_Pos))
#define   SPDIFRX_MR_PBMODE_PARCHECK_Val      _U_(0x0)                                             /**< (SPDIFRX_MR) Parity check enabled on data payload.  */
#define   SPDIFRX_MR_PBMODE_NOPARCHECK_Val    _U_(0x1)                                             /**< (SPDIFRX_MR) There is no parity check on data payload.  */
#define SPDIFRX_MR_PBMODE_PARCHECK            (SPDIFRX_MR_PBMODE_PARCHECK_Val << SPDIFRX_MR_PBMODE_Pos) /**< (SPDIFRX_MR) Parity check enabled on data payload. Position  */
#define SPDIFRX_MR_PBMODE_NOPARCHECK          (SPDIFRX_MR_PBMODE_NOPARCHECK_Val << SPDIFRX_MR_PBMODE_Pos) /**< (SPDIFRX_MR) There is no parity check on data payload. Position  */
#define SPDIFRX_MR_DATAWIDTH_Pos              _U_(4)                                               /**< (SPDIFRX_MR) Sample Data Width Position */
#define SPDIFRX_MR_DATAWIDTH_Msk              (_U_(0x3) << SPDIFRX_MR_DATAWIDTH_Pos)               /**< (SPDIFRX_MR) Sample Data Width Mask */
#define SPDIFRX_MR_DATAWIDTH(value)           (SPDIFRX_MR_DATAWIDTH_Msk & ((value) << SPDIFRX_MR_DATAWIDTH_Pos))
#define   SPDIFRX_MR_DATAWIDTH_24BIT_Val      _U_(0x0)                                             /**< (SPDIFRX_MR) The complete data field is stored in FIFO.  */
#define   SPDIFRX_MR_DATAWIDTH_20BIT_Val      _U_(0x1)                                             /**< (SPDIFRX_MR) Only the 20 MSB are stored in the FIFO.  */
#define   SPDIFRX_MR_DATAWIDTH_16BIT_Val      _U_(0x2)                                             /**< (SPDIFRX_MR) Only the 16 MSB are stored in the FIFO.  */
#define SPDIFRX_MR_DATAWIDTH_24BIT            (SPDIFRX_MR_DATAWIDTH_24BIT_Val << SPDIFRX_MR_DATAWIDTH_Pos) /**< (SPDIFRX_MR) The complete data field is stored in FIFO. Position  */
#define SPDIFRX_MR_DATAWIDTH_20BIT            (SPDIFRX_MR_DATAWIDTH_20BIT_Val << SPDIFRX_MR_DATAWIDTH_Pos) /**< (SPDIFRX_MR) Only the 20 MSB are stored in the FIFO. Position  */
#define SPDIFRX_MR_DATAWIDTH_16BIT            (SPDIFRX_MR_DATAWIDTH_16BIT_Val << SPDIFRX_MR_DATAWIDTH_Pos) /**< (SPDIFRX_MR) Only the 16 MSB are stored in the FIFO. Position  */
#define SPDIFRX_MR_PACK_Pos                   _U_(7)                                               /**< (SPDIFRX_MR) Packed Data Mode in Receive Holding Register Position */
#define SPDIFRX_MR_PACK_Msk                   (_U_(0x1) << SPDIFRX_MR_PACK_Pos)                    /**< (SPDIFRX_MR) Packed Data Mode in Receive Holding Register Mask */
#define SPDIFRX_MR_PACK(value)                (SPDIFRX_MR_PACK_Msk & ((value) << SPDIFRX_MR_PACK_Pos))
#define   SPDIFRX_MR_PACK_DISABLED_Val        _U_(0x0)                                             /**< (SPDIFRX_MR) Each read of SPDIFRX_RHR contains 1 sample and additional information (validity bit, parity bit, user data bit, channel status bit, byte 0 bit 1 of channel status and type of frame carrying the sample).  */
#define   SPDIFRX_MR_PACK_ENABLED_Val         _U_(0x1)                                             /**< (SPDIFRX_MR) The 32-bit SPDIFRX_RHR contains only payload data. Depending on the value of SPDIFRX_MR.DATAWIDTH, the alignment of data differs. This mode optimizes the amount of system memory required to manage the samples.  */
#define SPDIFRX_MR_PACK_DISABLED              (SPDIFRX_MR_PACK_DISABLED_Val << SPDIFRX_MR_PACK_Pos) /**< (SPDIFRX_MR) Each read of SPDIFRX_RHR contains 1 sample and additional information (validity bit, parity bit, user data bit, channel status bit, byte 0 bit 1 of channel status and type of frame carrying the sample). Position  */
#define SPDIFRX_MR_PACK_ENABLED               (SPDIFRX_MR_PACK_ENABLED_Val << SPDIFRX_MR_PACK_Pos) /**< (SPDIFRX_MR) The 32-bit SPDIFRX_RHR contains only payload data. Depending on the value of SPDIFRX_MR.DATAWIDTH, the alignment of data differs. This mode optimizes the amount of system memory required to manage the samples. Position  */
#define SPDIFRX_MR_SBMODE_Pos                 _U_(8)                                               /**< (SPDIFRX_MR) Start of Block Bit Mode Position */
#define SPDIFRX_MR_SBMODE_Msk                 (_U_(0x1) << SPDIFRX_MR_SBMODE_Pos)                  /**< (SPDIFRX_MR) Start of Block Bit Mode Mask */
#define SPDIFRX_MR_SBMODE(value)              (SPDIFRX_MR_SBMODE_Msk & ((value) << SPDIFRX_MR_SBMODE_Pos))
#define   SPDIFRX_MR_SBMODE_ALWAYS_LOAD_Val   _U_(0x0)                                             /**< (SPDIFRX_MR) Whatever the preamble code , the sample is loaded in FIFO.  */
#define   SPDIFRX_MR_SBMODE_DISCARD_Val       _U_(0x1)                                             /**< (SPDIFRX_MR) The sample is loaded in FIFO only if an Start of block is detected.  */
#define SPDIFRX_MR_SBMODE_ALWAYS_LOAD         (SPDIFRX_MR_SBMODE_ALWAYS_LOAD_Val << SPDIFRX_MR_SBMODE_Pos) /**< (SPDIFRX_MR) Whatever the preamble code , the sample is loaded in FIFO. Position  */
#define SPDIFRX_MR_SBMODE_DISCARD             (SPDIFRX_MR_SBMODE_DISCARD_Val << SPDIFRX_MR_SBMODE_Pos) /**< (SPDIFRX_MR) The sample is loaded in FIFO only if an Start of block is detected. Position  */
#define SPDIFRX_MR_AUTORST_Pos                _U_(24)                                              /**< (SPDIFRX_MR) Consecutive Preamble Error Threshold Automatic Restart Position */
#define SPDIFRX_MR_AUTORST_Msk                (_U_(0x1) << SPDIFRX_MR_AUTORST_Pos)                 /**< (SPDIFRX_MR) Consecutive Preamble Error Threshold Automatic Restart Mask */
#define SPDIFRX_MR_AUTORST(value)             (SPDIFRX_MR_AUTORST_Msk & ((value) << SPDIFRX_MR_AUTORST_Pos))
#define   SPDIFRX_MR_AUTORST_NOACTION_Val     _U_(0x0)                                             /**< (SPDIFRX_MR) No action whatever the number of consecutive preamble errors found during the period where SPDIFRX_RSR.ULOCK=0.  */
#define   SPDIFRX_MR_AUTORST_UNLOCK_ON_PRE_ERR_Val _U_(0x1)                                             /**< (SPDIFRX_MR) If 16 consecutive preamble errors are detected, the clock recovery circuitry is restarted.  */
#define SPDIFRX_MR_AUTORST_NOACTION           (SPDIFRX_MR_AUTORST_NOACTION_Val << SPDIFRX_MR_AUTORST_Pos) /**< (SPDIFRX_MR) No action whatever the number of consecutive preamble errors found during the period where SPDIFRX_RSR.ULOCK=0. Position  */
#define SPDIFRX_MR_AUTORST_UNLOCK_ON_PRE_ERR  (SPDIFRX_MR_AUTORST_UNLOCK_ON_PRE_ERR_Val << SPDIFRX_MR_AUTORST_Pos) /**< (SPDIFRX_MR) If 16 consecutive preamble errors are detected, the clock recovery circuitry is restarted. Position  */
#define SPDIFRX_MR_Msk                        _U_(0x010001BF)                                      /**< (SPDIFRX_MR) Register Mask  */


/* -------- SPDIFRX_IER : (SPDIFRX Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define SPDIFRX_IER_RXRDY_Pos                 _U_(0)                                               /**< (SPDIFRX_IER) Receive Data Ready Interrupt Enable Position */
#define SPDIFRX_IER_RXRDY_Msk                 (_U_(0x1) << SPDIFRX_IER_RXRDY_Pos)                  /**< (SPDIFRX_IER) Receive Data Ready Interrupt Enable Mask */
#define SPDIFRX_IER_RXRDY(value)              (SPDIFRX_IER_RXRDY_Msk & ((value) << SPDIFRX_IER_RXRDY_Pos))
#define SPDIFRX_IER_LOCKED_Pos                _U_(1)                                               /**< (SPDIFRX_IER) Receiver Synchronized Interrupt Enable Position */
#define SPDIFRX_IER_LOCKED_Msk                (_U_(0x1) << SPDIFRX_IER_LOCKED_Pos)                 /**< (SPDIFRX_IER) Receiver Synchronized Interrupt Enable Mask */
#define SPDIFRX_IER_LOCKED(value)             (SPDIFRX_IER_LOCKED_Msk & ((value) << SPDIFRX_IER_LOCKED_Pos))
#define SPDIFRX_IER_LOSS_Pos                  _U_(2)                                               /**< (SPDIFRX_IER) Loss of Signal Activity While Locked Interrupt Enable Position */
#define SPDIFRX_IER_LOSS_Msk                  (_U_(0x1) << SPDIFRX_IER_LOSS_Pos)                   /**< (SPDIFRX_IER) Loss of Signal Activity While Locked Interrupt Enable Mask */
#define SPDIFRX_IER_LOSS(value)               (SPDIFRX_IER_LOSS_Msk & ((value) << SPDIFRX_IER_LOSS_Pos))
#define SPDIFRX_IER_BLOCKEND_Pos              _U_(3)                                               /**< (SPDIFRX_IER) End of Block Interrupt Enable Position */
#define SPDIFRX_IER_BLOCKEND_Msk              (_U_(0x1) << SPDIFRX_IER_BLOCKEND_Pos)               /**< (SPDIFRX_IER) End of Block Interrupt Enable Mask */
#define SPDIFRX_IER_BLOCKEND(value)           (SPDIFRX_IER_BLOCKEND_Msk & ((value) << SPDIFRX_IER_BLOCKEND_Pos))
#define SPDIFRX_IER_SFE_Pos                   _U_(4)                                               /**< (SPDIFRX_IER) Sampling Frequency Change Event Interrupt Enable Position */
#define SPDIFRX_IER_SFE_Msk                   (_U_(0x1) << SPDIFRX_IER_SFE_Pos)                    /**< (SPDIFRX_IER) Sampling Frequency Change Event Interrupt Enable Mask */
#define SPDIFRX_IER_SFE(value)                (SPDIFRX_IER_SFE_Msk & ((value) << SPDIFRX_IER_SFE_Pos))
#define SPDIFRX_IER_PAR_ERR_Pos               _U_(5)                                               /**< (SPDIFRX_IER) Parity Bit Error Interrupt Enable Position */
#define SPDIFRX_IER_PAR_ERR_Msk               (_U_(0x1) << SPDIFRX_IER_PAR_ERR_Pos)                /**< (SPDIFRX_IER) Parity Bit Error Interrupt Enable Mask */
#define SPDIFRX_IER_PAR_ERR(value)            (SPDIFRX_IER_PAR_ERR_Msk & ((value) << SPDIFRX_IER_PAR_ERR_Pos))
#define SPDIFRX_IER_OVERRUN_Pos               _U_(6)                                               /**< (SPDIFRX_IER) FIFO Overrun, Interrupt Enable Position */
#define SPDIFRX_IER_OVERRUN_Msk               (_U_(0x1) << SPDIFRX_IER_OVERRUN_Pos)                /**< (SPDIFRX_IER) FIFO Overrun, Interrupt Enable Mask */
#define SPDIFRX_IER_OVERRUN(value)            (SPDIFRX_IER_OVERRUN_Msk & ((value) << SPDIFRX_IER_OVERRUN_Pos))
#define SPDIFRX_IER_RXFULL_Pos                _U_(7)                                               /**< (SPDIFRX_IER) Receiver FIFO Full Interrupt Enable Position */
#define SPDIFRX_IER_RXFULL_Msk                (_U_(0x1) << SPDIFRX_IER_RXFULL_Pos)                 /**< (SPDIFRX_IER) Receiver FIFO Full Interrupt Enable Mask */
#define SPDIFRX_IER_RXFULL(value)             (SPDIFRX_IER_RXFULL_Msk & ((value) << SPDIFRX_IER_RXFULL_Pos))
#define SPDIFRX_IER_C1SC_Pos                  _U_(8)                                               /**< (SPDIFRX_IER) Bit 0 to 31 Channel 1 Status Change Interrupt Enable Position */
#define SPDIFRX_IER_C1SC_Msk                  (_U_(0x1) << SPDIFRX_IER_C1SC_Pos)                   /**< (SPDIFRX_IER) Bit 0 to 31 Channel 1 Status Change Interrupt Enable Mask */
#define SPDIFRX_IER_C1SC(value)               (SPDIFRX_IER_C1SC_Msk & ((value) << SPDIFRX_IER_C1SC_Pos))
#define SPDIFRX_IER_C2SC_Pos                  _U_(9)                                               /**< (SPDIFRX_IER) Bit 0 to 31 Channel 2 Status Change Interrupt Enable Position */
#define SPDIFRX_IER_C2SC_Msk                  (_U_(0x1) << SPDIFRX_IER_C2SC_Pos)                   /**< (SPDIFRX_IER) Bit 0 to 31 Channel 2 Status Change Interrupt Enable Mask */
#define SPDIFRX_IER_C2SC(value)               (SPDIFRX_IER_C2SC_Msk & ((value) << SPDIFRX_IER_C2SC_Pos))
#define SPDIFRX_IER_SECE_Pos                  _U_(10)                                              /**< (SPDIFRX_IER) Security Report Interrupt Enable Position */
#define SPDIFRX_IER_SECE_Msk                  (_U_(0x1) << SPDIFRX_IER_SECE_Pos)                   /**< (SPDIFRX_IER) Security Report Interrupt Enable Mask */
#define SPDIFRX_IER_SECE(value)               (SPDIFRX_IER_SECE_Msk & ((value) << SPDIFRX_IER_SECE_Pos))
#define SPDIFRX_IER_BLOCKST_Pos               _U_(11)                                              /**< (SPDIFRX_IER) Start of Block Interrupt Enable Position */
#define SPDIFRX_IER_BLOCKST_Msk               (_U_(0x1) << SPDIFRX_IER_BLOCKST_Pos)                /**< (SPDIFRX_IER) Start of Block Interrupt Enable Mask */
#define SPDIFRX_IER_BLOCKST(value)            (SPDIFRX_IER_BLOCKST_Msk & ((value) << SPDIFRX_IER_BLOCKST_Pos))
#define SPDIFRX_IER_NRZ_ERR_Pos               _U_(12)                                              /**< (SPDIFRX_IER) NRZ Biphase Mark Error in payload data (code violation) Enable Position */
#define SPDIFRX_IER_NRZ_ERR_Msk               (_U_(0x1) << SPDIFRX_IER_NRZ_ERR_Pos)                /**< (SPDIFRX_IER) NRZ Biphase Mark Error in payload data (code violation) Enable Mask */
#define SPDIFRX_IER_NRZ_ERR(value)            (SPDIFRX_IER_NRZ_ERR_Msk & ((value) << SPDIFRX_IER_NRZ_ERR_Pos))
#define SPDIFRX_IER_PRE_ERR_Pos               _U_(13)                                              /**< (SPDIFRX_IER) Preamble Error (code violation) Enable Position */
#define SPDIFRX_IER_PRE_ERR_Msk               (_U_(0x1) << SPDIFRX_IER_PRE_ERR_Pos)                /**< (SPDIFRX_IER) Preamble Error (code violation) Enable Mask */
#define SPDIFRX_IER_PRE_ERR(value)            (SPDIFRX_IER_PRE_ERR_Msk & ((value) << SPDIFRX_IER_PRE_ERR_Pos))
#define SPDIFRX_IER_CP_ERR_Pos                _U_(14)                                              /**< (SPDIFRX_IER) 16 Consecutive Preamble Errors Interrupt Enable Position */
#define SPDIFRX_IER_CP_ERR_Msk                (_U_(0x1) << SPDIFRX_IER_CP_ERR_Pos)                 /**< (SPDIFRX_IER) 16 Consecutive Preamble Errors Interrupt Enable Mask */
#define SPDIFRX_IER_CP_ERR(value)             (SPDIFRX_IER_CP_ERR_Msk & ((value) << SPDIFRX_IER_CP_ERR_Pos))
#define SPDIFRX_IER_Msk                       _U_(0x00007FFF)                                      /**< (SPDIFRX_IER) Register Mask  */


/* -------- SPDIFRX_IDR : (SPDIFRX Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define SPDIFRX_IDR_RXRDY_Pos                 _U_(0)                                               /**< (SPDIFRX_IDR) Receive Data Ready Interrupt Disable Position */
#define SPDIFRX_IDR_RXRDY_Msk                 (_U_(0x1) << SPDIFRX_IDR_RXRDY_Pos)                  /**< (SPDIFRX_IDR) Receive Data Ready Interrupt Disable Mask */
#define SPDIFRX_IDR_RXRDY(value)              (SPDIFRX_IDR_RXRDY_Msk & ((value) << SPDIFRX_IDR_RXRDY_Pos))
#define SPDIFRX_IDR_LOCKED_Pos                _U_(1)                                               /**< (SPDIFRX_IDR) Receiver Synchronized Interrupt Disable Position */
#define SPDIFRX_IDR_LOCKED_Msk                (_U_(0x1) << SPDIFRX_IDR_LOCKED_Pos)                 /**< (SPDIFRX_IDR) Receiver Synchronized Interrupt Disable Mask */
#define SPDIFRX_IDR_LOCKED(value)             (SPDIFRX_IDR_LOCKED_Msk & ((value) << SPDIFRX_IDR_LOCKED_Pos))
#define SPDIFRX_IDR_LOSS_Pos                  _U_(2)                                               /**< (SPDIFRX_IDR) Loss of Signal Activity While Locked Interrupt Disable Position */
#define SPDIFRX_IDR_LOSS_Msk                  (_U_(0x1) << SPDIFRX_IDR_LOSS_Pos)                   /**< (SPDIFRX_IDR) Loss of Signal Activity While Locked Interrupt Disable Mask */
#define SPDIFRX_IDR_LOSS(value)               (SPDIFRX_IDR_LOSS_Msk & ((value) << SPDIFRX_IDR_LOSS_Pos))
#define SPDIFRX_IDR_BLOCKEND_Pos              _U_(3)                                               /**< (SPDIFRX_IDR) End of Block Interrupt Disable Position */
#define SPDIFRX_IDR_BLOCKEND_Msk              (_U_(0x1) << SPDIFRX_IDR_BLOCKEND_Pos)               /**< (SPDIFRX_IDR) End of Block Interrupt Disable Mask */
#define SPDIFRX_IDR_BLOCKEND(value)           (SPDIFRX_IDR_BLOCKEND_Msk & ((value) << SPDIFRX_IDR_BLOCKEND_Pos))
#define SPDIFRX_IDR_SFE_Pos                   _U_(4)                                               /**< (SPDIFRX_IDR) Sampling Frequency Change Event Interrupt Disable Position */
#define SPDIFRX_IDR_SFE_Msk                   (_U_(0x1) << SPDIFRX_IDR_SFE_Pos)                    /**< (SPDIFRX_IDR) Sampling Frequency Change Event Interrupt Disable Mask */
#define SPDIFRX_IDR_SFE(value)                (SPDIFRX_IDR_SFE_Msk & ((value) << SPDIFRX_IDR_SFE_Pos))
#define SPDIFRX_IDR_PAR_ERR_Pos               _U_(5)                                               /**< (SPDIFRX_IDR) Parity Bit Error Interrupt Disable Position */
#define SPDIFRX_IDR_PAR_ERR_Msk               (_U_(0x1) << SPDIFRX_IDR_PAR_ERR_Pos)                /**< (SPDIFRX_IDR) Parity Bit Error Interrupt Disable Mask */
#define SPDIFRX_IDR_PAR_ERR(value)            (SPDIFRX_IDR_PAR_ERR_Msk & ((value) << SPDIFRX_IDR_PAR_ERR_Pos))
#define SPDIFRX_IDR_OVERRUN_Pos               _U_(6)                                               /**< (SPDIFRX_IDR) FIFO Overrun, Interrupt Disable Position */
#define SPDIFRX_IDR_OVERRUN_Msk               (_U_(0x1) << SPDIFRX_IDR_OVERRUN_Pos)                /**< (SPDIFRX_IDR) FIFO Overrun, Interrupt Disable Mask */
#define SPDIFRX_IDR_OVERRUN(value)            (SPDIFRX_IDR_OVERRUN_Msk & ((value) << SPDIFRX_IDR_OVERRUN_Pos))
#define SPDIFRX_IDR_RXFULL_Pos                _U_(7)                                               /**< (SPDIFRX_IDR) Receiver FIFO Full Interrupt Disable Position */
#define SPDIFRX_IDR_RXFULL_Msk                (_U_(0x1) << SPDIFRX_IDR_RXFULL_Pos)                 /**< (SPDIFRX_IDR) Receiver FIFO Full Interrupt Disable Mask */
#define SPDIFRX_IDR_RXFULL(value)             (SPDIFRX_IDR_RXFULL_Msk & ((value) << SPDIFRX_IDR_RXFULL_Pos))
#define SPDIFRX_IDR_C1SC_Pos                  _U_(8)                                               /**< (SPDIFRX_IDR) Bit 0 to 31 Channel 1 Status Change Interrupt Disable Position */
#define SPDIFRX_IDR_C1SC_Msk                  (_U_(0x1) << SPDIFRX_IDR_C1SC_Pos)                   /**< (SPDIFRX_IDR) Bit 0 to 31 Channel 1 Status Change Interrupt Disable Mask */
#define SPDIFRX_IDR_C1SC(value)               (SPDIFRX_IDR_C1SC_Msk & ((value) << SPDIFRX_IDR_C1SC_Pos))
#define SPDIFRX_IDR_C2SC_Pos                  _U_(9)                                               /**< (SPDIFRX_IDR) Bit 0 to 31 Channel 2 Status Change Interrupt Disable Position */
#define SPDIFRX_IDR_C2SC_Msk                  (_U_(0x1) << SPDIFRX_IDR_C2SC_Pos)                   /**< (SPDIFRX_IDR) Bit 0 to 31 Channel 2 Status Change Interrupt Disable Mask */
#define SPDIFRX_IDR_C2SC(value)               (SPDIFRX_IDR_C2SC_Msk & ((value) << SPDIFRX_IDR_C2SC_Pos))
#define SPDIFRX_IDR_SECE_Pos                  _U_(10)                                              /**< (SPDIFRX_IDR) Security Report Interrupt Disable Position */
#define SPDIFRX_IDR_SECE_Msk                  (_U_(0x1) << SPDIFRX_IDR_SECE_Pos)                   /**< (SPDIFRX_IDR) Security Report Interrupt Disable Mask */
#define SPDIFRX_IDR_SECE(value)               (SPDIFRX_IDR_SECE_Msk & ((value) << SPDIFRX_IDR_SECE_Pos))
#define SPDIFRX_IDR_BLOCKST_Pos               _U_(11)                                              /**< (SPDIFRX_IDR) Start of Block Interrupt Disable Position */
#define SPDIFRX_IDR_BLOCKST_Msk               (_U_(0x1) << SPDIFRX_IDR_BLOCKST_Pos)                /**< (SPDIFRX_IDR) Start of Block Interrupt Disable Mask */
#define SPDIFRX_IDR_BLOCKST(value)            (SPDIFRX_IDR_BLOCKST_Msk & ((value) << SPDIFRX_IDR_BLOCKST_Pos))
#define SPDIFRX_IDR_NRZ_ERR_Pos               _U_(12)                                              /**< (SPDIFRX_IDR) NRZ Biphase Mark Error in payload data (code violation) Disable Position */
#define SPDIFRX_IDR_NRZ_ERR_Msk               (_U_(0x1) << SPDIFRX_IDR_NRZ_ERR_Pos)                /**< (SPDIFRX_IDR) NRZ Biphase Mark Error in payload data (code violation) Disable Mask */
#define SPDIFRX_IDR_NRZ_ERR(value)            (SPDIFRX_IDR_NRZ_ERR_Msk & ((value) << SPDIFRX_IDR_NRZ_ERR_Pos))
#define SPDIFRX_IDR_PRE_ERR_Pos               _U_(13)                                              /**< (SPDIFRX_IDR) Preamble Error (code violation) Disable Position */
#define SPDIFRX_IDR_PRE_ERR_Msk               (_U_(0x1) << SPDIFRX_IDR_PRE_ERR_Pos)                /**< (SPDIFRX_IDR) Preamble Error (code violation) Disable Mask */
#define SPDIFRX_IDR_PRE_ERR(value)            (SPDIFRX_IDR_PRE_ERR_Msk & ((value) << SPDIFRX_IDR_PRE_ERR_Pos))
#define SPDIFRX_IDR_CP_ERR_Pos                _U_(14)                                              /**< (SPDIFRX_IDR) 16 Consecutive Preamble Errors Interrupt Disable Position */
#define SPDIFRX_IDR_CP_ERR_Msk                (_U_(0x1) << SPDIFRX_IDR_CP_ERR_Pos)                 /**< (SPDIFRX_IDR) 16 Consecutive Preamble Errors Interrupt Disable Mask */
#define SPDIFRX_IDR_CP_ERR(value)             (SPDIFRX_IDR_CP_ERR_Msk & ((value) << SPDIFRX_IDR_CP_ERR_Pos))
#define SPDIFRX_IDR_Msk                       _U_(0x00007FFF)                                      /**< (SPDIFRX_IDR) Register Mask  */


/* -------- SPDIFRX_IMR : (SPDIFRX Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define SPDIFRX_IMR_RESETVALUE                _U_(0x00)                                            /**<  (SPDIFRX_IMR) Interrupt Mask Register  Reset Value */

#define SPDIFRX_IMR_RXRDY_Pos                 _U_(0)                                               /**< (SPDIFRX_IMR) Receive Data Ready Interrupt Mask Position */
#define SPDIFRX_IMR_RXRDY_Msk                 (_U_(0x1) << SPDIFRX_IMR_RXRDY_Pos)                  /**< (SPDIFRX_IMR) Receive Data Ready Interrupt Mask Mask */
#define SPDIFRX_IMR_RXRDY(value)              (SPDIFRX_IMR_RXRDY_Msk & ((value) << SPDIFRX_IMR_RXRDY_Pos))
#define SPDIFRX_IMR_LOCKED_Pos                _U_(1)                                               /**< (SPDIFRX_IMR) Receiver Synchronized Interrupt Mask Position */
#define SPDIFRX_IMR_LOCKED_Msk                (_U_(0x1) << SPDIFRX_IMR_LOCKED_Pos)                 /**< (SPDIFRX_IMR) Receiver Synchronized Interrupt Mask Mask */
#define SPDIFRX_IMR_LOCKED(value)             (SPDIFRX_IMR_LOCKED_Msk & ((value) << SPDIFRX_IMR_LOCKED_Pos))
#define SPDIFRX_IMR_LOSS_Pos                  _U_(2)                                               /**< (SPDIFRX_IMR) Loss of Signal Activity While Locked Interrupt Mask Position */
#define SPDIFRX_IMR_LOSS_Msk                  (_U_(0x1) << SPDIFRX_IMR_LOSS_Pos)                   /**< (SPDIFRX_IMR) Loss of Signal Activity While Locked Interrupt Mask Mask */
#define SPDIFRX_IMR_LOSS(value)               (SPDIFRX_IMR_LOSS_Msk & ((value) << SPDIFRX_IMR_LOSS_Pos))
#define SPDIFRX_IMR_BLOCKEND_Pos              _U_(3)                                               /**< (SPDIFRX_IMR) End of Block Interrupt Mask Position */
#define SPDIFRX_IMR_BLOCKEND_Msk              (_U_(0x1) << SPDIFRX_IMR_BLOCKEND_Pos)               /**< (SPDIFRX_IMR) End of Block Interrupt Mask Mask */
#define SPDIFRX_IMR_BLOCKEND(value)           (SPDIFRX_IMR_BLOCKEND_Msk & ((value) << SPDIFRX_IMR_BLOCKEND_Pos))
#define SPDIFRX_IMR_SFE_Pos                   _U_(4)                                               /**< (SPDIFRX_IMR) Sampling Frequency Change Event Interrupt Mask Position */
#define SPDIFRX_IMR_SFE_Msk                   (_U_(0x1) << SPDIFRX_IMR_SFE_Pos)                    /**< (SPDIFRX_IMR) Sampling Frequency Change Event Interrupt Mask Mask */
#define SPDIFRX_IMR_SFE(value)                (SPDIFRX_IMR_SFE_Msk & ((value) << SPDIFRX_IMR_SFE_Pos))
#define SPDIFRX_IMR_PAR_ERR_Pos               _U_(5)                                               /**< (SPDIFRX_IMR) Parity Bit Error Interrupt Mask Position */
#define SPDIFRX_IMR_PAR_ERR_Msk               (_U_(0x1) << SPDIFRX_IMR_PAR_ERR_Pos)                /**< (SPDIFRX_IMR) Parity Bit Error Interrupt Mask Mask */
#define SPDIFRX_IMR_PAR_ERR(value)            (SPDIFRX_IMR_PAR_ERR_Msk & ((value) << SPDIFRX_IMR_PAR_ERR_Pos))
#define SPDIFRX_IMR_OVERRUN_Pos               _U_(6)                                               /**< (SPDIFRX_IMR) FIFO Overrun, Interrupt Mask Position */
#define SPDIFRX_IMR_OVERRUN_Msk               (_U_(0x1) << SPDIFRX_IMR_OVERRUN_Pos)                /**< (SPDIFRX_IMR) FIFO Overrun, Interrupt Mask Mask */
#define SPDIFRX_IMR_OVERRUN(value)            (SPDIFRX_IMR_OVERRUN_Msk & ((value) << SPDIFRX_IMR_OVERRUN_Pos))
#define SPDIFRX_IMR_RXFULL_Pos                _U_(7)                                               /**< (SPDIFRX_IMR) Receiver FIFO Full Interrupt Mask Position */
#define SPDIFRX_IMR_RXFULL_Msk                (_U_(0x1) << SPDIFRX_IMR_RXFULL_Pos)                 /**< (SPDIFRX_IMR) Receiver FIFO Full Interrupt Mask Mask */
#define SPDIFRX_IMR_RXFULL(value)             (SPDIFRX_IMR_RXFULL_Msk & ((value) << SPDIFRX_IMR_RXFULL_Pos))
#define SPDIFRX_IMR_C1SC_Pos                  _U_(8)                                               /**< (SPDIFRX_IMR) Bit 0 to 31 Channel 1 Status Change Interrupt Mask Position */
#define SPDIFRX_IMR_C1SC_Msk                  (_U_(0x1) << SPDIFRX_IMR_C1SC_Pos)                   /**< (SPDIFRX_IMR) Bit 0 to 31 Channel 1 Status Change Interrupt Mask Mask */
#define SPDIFRX_IMR_C1SC(value)               (SPDIFRX_IMR_C1SC_Msk & ((value) << SPDIFRX_IMR_C1SC_Pos))
#define SPDIFRX_IMR_C2SC_Pos                  _U_(9)                                               /**< (SPDIFRX_IMR) Bit 0 to 31 Channel 2 Status Change Interrupt Mask Position */
#define SPDIFRX_IMR_C2SC_Msk                  (_U_(0x1) << SPDIFRX_IMR_C2SC_Pos)                   /**< (SPDIFRX_IMR) Bit 0 to 31 Channel 2 Status Change Interrupt Mask Mask */
#define SPDIFRX_IMR_C2SC(value)               (SPDIFRX_IMR_C2SC_Msk & ((value) << SPDIFRX_IMR_C2SC_Pos))
#define SPDIFRX_IMR_SECE_Pos                  _U_(10)                                              /**< (SPDIFRX_IMR) Security Report Interrupt Interrupt Mask Position */
#define SPDIFRX_IMR_SECE_Msk                  (_U_(0x1) << SPDIFRX_IMR_SECE_Pos)                   /**< (SPDIFRX_IMR) Security Report Interrupt Interrupt Mask Mask */
#define SPDIFRX_IMR_SECE(value)               (SPDIFRX_IMR_SECE_Msk & ((value) << SPDIFRX_IMR_SECE_Pos))
#define SPDIFRX_IMR_BLOCKST_Pos               _U_(11)                                              /**< (SPDIFRX_IMR) Start of Block Interrupt Interrupt Mask Position */
#define SPDIFRX_IMR_BLOCKST_Msk               (_U_(0x1) << SPDIFRX_IMR_BLOCKST_Pos)                /**< (SPDIFRX_IMR) Start of Block Interrupt Interrupt Mask Mask */
#define SPDIFRX_IMR_BLOCKST(value)            (SPDIFRX_IMR_BLOCKST_Msk & ((value) << SPDIFRX_IMR_BLOCKST_Pos))
#define SPDIFRX_IMR_NRZ_ERR_Pos               _U_(12)                                              /**< (SPDIFRX_IMR) NRZ Biphase Mark Error in payload data (code violation) Interrupt Mask Position */
#define SPDIFRX_IMR_NRZ_ERR_Msk               (_U_(0x1) << SPDIFRX_IMR_NRZ_ERR_Pos)                /**< (SPDIFRX_IMR) NRZ Biphase Mark Error in payload data (code violation) Interrupt Mask Mask */
#define SPDIFRX_IMR_NRZ_ERR(value)            (SPDIFRX_IMR_NRZ_ERR_Msk & ((value) << SPDIFRX_IMR_NRZ_ERR_Pos))
#define SPDIFRX_IMR_PRE_ERR_Pos               _U_(13)                                              /**< (SPDIFRX_IMR) Preamble Error (code violation) Interrupt Mask Position */
#define SPDIFRX_IMR_PRE_ERR_Msk               (_U_(0x1) << SPDIFRX_IMR_PRE_ERR_Pos)                /**< (SPDIFRX_IMR) Preamble Error (code violation) Interrupt Mask Mask */
#define SPDIFRX_IMR_PRE_ERR(value)            (SPDIFRX_IMR_PRE_ERR_Msk & ((value) << SPDIFRX_IMR_PRE_ERR_Pos))
#define SPDIFRX_IMR_CP_ERR_Pos                _U_(14)                                              /**< (SPDIFRX_IMR) 16 Consecutive Preamble Errors Interrupt Mask Position */
#define SPDIFRX_IMR_CP_ERR_Msk                (_U_(0x1) << SPDIFRX_IMR_CP_ERR_Pos)                 /**< (SPDIFRX_IMR) 16 Consecutive Preamble Errors Interrupt Mask Mask */
#define SPDIFRX_IMR_CP_ERR(value)             (SPDIFRX_IMR_CP_ERR_Msk & ((value) << SPDIFRX_IMR_CP_ERR_Pos))
#define SPDIFRX_IMR_Msk                       _U_(0x00007FFF)                                      /**< (SPDIFRX_IMR) Register Mask  */


/* -------- SPDIFRX_ISR : (SPDIFRX Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define SPDIFRX_ISR_RESETVALUE                _U_(0x00)                                            /**<  (SPDIFRX_ISR) Interrupt Status Register  Reset Value */

#define SPDIFRX_ISR_RXRDY_Pos                 _U_(0)                                               /**< (SPDIFRX_ISR) Receive Data Ready Interrupt Status (cleared when reading SPDIFRX_RHR) Position */
#define SPDIFRX_ISR_RXRDY_Msk                 (_U_(0x1) << SPDIFRX_ISR_RXRDY_Pos)                  /**< (SPDIFRX_ISR) Receive Data Ready Interrupt Status (cleared when reading SPDIFRX_RHR) Mask */
#define SPDIFRX_ISR_RXRDY(value)              (SPDIFRX_ISR_RXRDY_Msk & ((value) << SPDIFRX_ISR_RXRDY_Pos))
#define SPDIFRX_ISR_LOCKED_Pos                _U_(1)                                               /**< (SPDIFRX_ISR) Receiver Synchronized Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_LOCKED_Msk                (_U_(0x1) << SPDIFRX_ISR_LOCKED_Pos)                 /**< (SPDIFRX_ISR) Receiver Synchronized Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_LOCKED(value)             (SPDIFRX_ISR_LOCKED_Msk & ((value) << SPDIFRX_ISR_LOCKED_Pos))
#define SPDIFRX_ISR_LOSS_Pos                  _U_(2)                                               /**< (SPDIFRX_ISR) Loss of Signal Activity While Locked Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_LOSS_Msk                  (_U_(0x1) << SPDIFRX_ISR_LOSS_Pos)                   /**< (SPDIFRX_ISR) Loss of Signal Activity While Locked Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_LOSS(value)               (SPDIFRX_ISR_LOSS_Msk & ((value) << SPDIFRX_ISR_LOSS_Pos))
#define SPDIFRX_ISR_BLOCKEND_Pos              _U_(3)                                               /**< (SPDIFRX_ISR) End of Block Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_BLOCKEND_Msk              (_U_(0x1) << SPDIFRX_ISR_BLOCKEND_Pos)               /**< (SPDIFRX_ISR) End of Block Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_BLOCKEND(value)           (SPDIFRX_ISR_BLOCKEND_Msk & ((value) << SPDIFRX_ISR_BLOCKEND_Pos))
#define SPDIFRX_ISR_SFE_Pos                   _U_(4)                                               /**< (SPDIFRX_ISR) Sampling Frequency Change Event Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_SFE_Msk                   (_U_(0x1) << SPDIFRX_ISR_SFE_Pos)                    /**< (SPDIFRX_ISR) Sampling Frequency Change Event Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_SFE(value)                (SPDIFRX_ISR_SFE_Msk & ((value) << SPDIFRX_ISR_SFE_Pos))
#define SPDIFRX_ISR_PAR_ERR_Pos               _U_(5)                                               /**< (SPDIFRX_ISR) Parity Bit Error Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_PAR_ERR_Msk               (_U_(0x1) << SPDIFRX_ISR_PAR_ERR_Pos)                /**< (SPDIFRX_ISR) Parity Bit Error Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_PAR_ERR(value)            (SPDIFRX_ISR_PAR_ERR_Msk & ((value) << SPDIFRX_ISR_PAR_ERR_Pos))
#define SPDIFRX_ISR_OVERRUN_Pos               _U_(6)                                               /**< (SPDIFRX_ISR) FIFO Overrun, Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_OVERRUN_Msk               (_U_(0x1) << SPDIFRX_ISR_OVERRUN_Pos)                /**< (SPDIFRX_ISR) FIFO Overrun, Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_OVERRUN(value)            (SPDIFRX_ISR_OVERRUN_Msk & ((value) << SPDIFRX_ISR_OVERRUN_Pos))
#define SPDIFRX_ISR_RXFULL_Pos                _U_(7)                                               /**< (SPDIFRX_ISR) Receiver FIFO Full Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_RXFULL_Msk                (_U_(0x1) << SPDIFRX_ISR_RXFULL_Pos)                 /**< (SPDIFRX_ISR) Receiver FIFO Full Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_RXFULL(value)             (SPDIFRX_ISR_RXFULL_Msk & ((value) << SPDIFRX_ISR_RXFULL_Pos))
#define SPDIFRX_ISR_C1SC_Pos                  _U_(8)                                               /**< (SPDIFRX_ISR) Bit 0 to 31 Channel 1 Status Change (cleared on read) Position */
#define SPDIFRX_ISR_C1SC_Msk                  (_U_(0x1) << SPDIFRX_ISR_C1SC_Pos)                   /**< (SPDIFRX_ISR) Bit 0 to 31 Channel 1 Status Change (cleared on read) Mask */
#define SPDIFRX_ISR_C1SC(value)               (SPDIFRX_ISR_C1SC_Msk & ((value) << SPDIFRX_ISR_C1SC_Pos))
#define SPDIFRX_ISR_C2SC_Pos                  _U_(9)                                               /**< (SPDIFRX_ISR) Bit 0 to 31 Channel 2 Status Change (cleared on read) Position */
#define SPDIFRX_ISR_C2SC_Msk                  (_U_(0x1) << SPDIFRX_ISR_C2SC_Pos)                   /**< (SPDIFRX_ISR) Bit 0 to 31 Channel 2 Status Change (cleared on read) Mask */
#define SPDIFRX_ISR_C2SC(value)               (SPDIFRX_ISR_C2SC_Msk & ((value) << SPDIFRX_ISR_C2SC_Pos))
#define SPDIFRX_ISR_SECE_Pos                  _U_(10)                                              /**< (SPDIFRX_ISR) Security Report Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_SECE_Msk                  (_U_(0x1) << SPDIFRX_ISR_SECE_Pos)                   /**< (SPDIFRX_ISR) Security Report Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_SECE(value)               (SPDIFRX_ISR_SECE_Msk & ((value) << SPDIFRX_ISR_SECE_Pos))
#define SPDIFRX_ISR_BLOCKST_Pos               _U_(11)                                              /**< (SPDIFRX_ISR) Start of Block Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_BLOCKST_Msk               (_U_(0x1) << SPDIFRX_ISR_BLOCKST_Pos)                /**< (SPDIFRX_ISR) Start of Block Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_BLOCKST(value)            (SPDIFRX_ISR_BLOCKST_Msk & ((value) << SPDIFRX_ISR_BLOCKST_Pos))
#define SPDIFRX_ISR_NRZ_ERR_Pos               _U_(12)                                              /**< (SPDIFRX_ISR) NRZ Biphase Mark Error in payload data (code violation) Status (cleared on read) Position */
#define SPDIFRX_ISR_NRZ_ERR_Msk               (_U_(0x1) << SPDIFRX_ISR_NRZ_ERR_Pos)                /**< (SPDIFRX_ISR) NRZ Biphase Mark Error in payload data (code violation) Status (cleared on read) Mask */
#define SPDIFRX_ISR_NRZ_ERR(value)            (SPDIFRX_ISR_NRZ_ERR_Msk & ((value) << SPDIFRX_ISR_NRZ_ERR_Pos))
#define SPDIFRX_ISR_PRE_ERR_Pos               _U_(13)                                              /**< (SPDIFRX_ISR) Preamble Error (code violation) Status (cleared on read) Position */
#define SPDIFRX_ISR_PRE_ERR_Msk               (_U_(0x1) << SPDIFRX_ISR_PRE_ERR_Pos)                /**< (SPDIFRX_ISR) Preamble Error (code violation) Status (cleared on read) Mask */
#define SPDIFRX_ISR_PRE_ERR(value)            (SPDIFRX_ISR_PRE_ERR_Msk & ((value) << SPDIFRX_ISR_PRE_ERR_Pos))
#define SPDIFRX_ISR_CP_ERR_Pos                _U_(14)                                              /**< (SPDIFRX_ISR) 16 Consecutive Preamble Errors Interrupt Status (cleared on read) Position */
#define SPDIFRX_ISR_CP_ERR_Msk                (_U_(0x1) << SPDIFRX_ISR_CP_ERR_Pos)                 /**< (SPDIFRX_ISR) 16 Consecutive Preamble Errors Interrupt Status (cleared on read) Mask */
#define SPDIFRX_ISR_CP_ERR(value)             (SPDIFRX_ISR_CP_ERR_Msk & ((value) << SPDIFRX_ISR_CP_ERR_Pos))
#define SPDIFRX_ISR_Msk                       _U_(0x00007FFF)                                      /**< (SPDIFRX_ISR) Register Mask  */


/* -------- SPDIFRX_RSR : (SPDIFRX Offset: 0x20) ( R/ 32) Status Register -------- */
#define SPDIFRX_RSR_RESETVALUE                _U_(0x01)                                            /**<  (SPDIFRX_RSR) Status Register  Reset Value */

#define SPDIFRX_RSR_ULOCK_Pos                 _U_(0)                                               /**< (SPDIFRX_RSR) Unlocked Receiver Position */
#define SPDIFRX_RSR_ULOCK_Msk                 (_U_(0x1) << SPDIFRX_RSR_ULOCK_Pos)                  /**< (SPDIFRX_RSR) Unlocked Receiver Mask */
#define SPDIFRX_RSR_ULOCK(value)              (SPDIFRX_RSR_ULOCK_Msk & ((value) << SPDIFRX_RSR_ULOCK_Pos))
#define   SPDIFRX_RSR_ULOCK_0_Val             _U_(0x0)                                             /**< (SPDIFRX_RSR) The receiver is synchronized and loads data.  */
#define   SPDIFRX_RSR_ULOCK_1_Val             _U_(0x1)                                             /**< (SPDIFRX_RSR) The receiver is not locked because it is searching for SPDIF receive line frequency or preambles. See BADF, LOWF, and NOSIGNAL for reasons of unlocked state.  */
#define SPDIFRX_RSR_ULOCK_0                   (SPDIFRX_RSR_ULOCK_0_Val << SPDIFRX_RSR_ULOCK_Pos)   /**< (SPDIFRX_RSR) The receiver is synchronized and loads data. Position  */
#define SPDIFRX_RSR_ULOCK_1                   (SPDIFRX_RSR_ULOCK_1_Val << SPDIFRX_RSR_ULOCK_Pos)   /**< (SPDIFRX_RSR) The receiver is not locked because it is searching for SPDIF receive line frequency or preambles. See BADF, LOWF, and NOSIGNAL for reasons of unlocked state. Position  */
#define SPDIFRX_RSR_BADF_Pos                  _U_(1)                                               /**< (SPDIFRX_RSR) Bad Format Detected on SPDIF RX Line Position */
#define SPDIFRX_RSR_BADF_Msk                  (_U_(0x1) << SPDIFRX_RSR_BADF_Pos)                   /**< (SPDIFRX_RSR) Bad Format Detected on SPDIF RX Line Mask */
#define SPDIFRX_RSR_BADF(value)               (SPDIFRX_RSR_BADF_Msk & ((value) << SPDIFRX_RSR_BADF_Pos))
#define   SPDIFRX_RSR_BADF_0_Val              _U_(0x0)                                             /**< (SPDIFRX_RSR) The receiver is synchronized or the receiver is searching for SPDIF receive line frequency or preambles.  */
#define   SPDIFRX_RSR_BADF_1_Val              _U_(0x1)                                             /**< (SPDIFRX_RSR) The receiver is not able to detect a SPDIF format on the receive line.  */
#define SPDIFRX_RSR_BADF_0                    (SPDIFRX_RSR_BADF_0_Val << SPDIFRX_RSR_BADF_Pos)     /**< (SPDIFRX_RSR) The receiver is synchronized or the receiver is searching for SPDIF receive line frequency or preambles. Position  */
#define SPDIFRX_RSR_BADF_1                    (SPDIFRX_RSR_BADF_1_Val << SPDIFRX_RSR_BADF_Pos)     /**< (SPDIFRX_RSR) The receiver is not able to detect a SPDIF format on the receive line. Position  */
#define SPDIFRX_RSR_LOWF_Pos                  _U_(2)                                               /**< (SPDIFRX_RSR) Low Clock Frequency provided on GCLK Clock Position */
#define SPDIFRX_RSR_LOWF_Msk                  (_U_(0x1) << SPDIFRX_RSR_LOWF_Pos)                   /**< (SPDIFRX_RSR) Low Clock Frequency provided on GCLK Clock Mask */
#define SPDIFRX_RSR_LOWF(value)               (SPDIFRX_RSR_LOWF_Msk & ((value) << SPDIFRX_RSR_LOWF_Pos))
#define   SPDIFRX_RSR_LOWF_0_Val              _U_(0x0)                                             /**< (SPDIFRX_RSR) The receiver is synchronized or the receiver is determining the sample frequency of the receive line or searching preambles.  */
#define   SPDIFRX_RSR_LOWF_1_Val              _U_(0x1)                                             /**< (SPDIFRX_RSR) The receiver is not able to recover the protocol because the GCLK clock frequency is lower than the minimum required.  */
#define SPDIFRX_RSR_LOWF_0                    (SPDIFRX_RSR_LOWF_0_Val << SPDIFRX_RSR_LOWF_Pos)     /**< (SPDIFRX_RSR) The receiver is synchronized or the receiver is determining the sample frequency of the receive line or searching preambles. Position  */
#define SPDIFRX_RSR_LOWF_1                    (SPDIFRX_RSR_LOWF_1_Val << SPDIFRX_RSR_LOWF_Pos)     /**< (SPDIFRX_RSR) The receiver is not able to recover the protocol because the GCLK clock frequency is lower than the minimum required. Position  */
#define SPDIFRX_RSR_NOSIGNAL_Pos              _U_(3)                                               /**< (SPDIFRX_RSR) No Signal on Receive Line Position */
#define SPDIFRX_RSR_NOSIGNAL_Msk              (_U_(0x1) << SPDIFRX_RSR_NOSIGNAL_Pos)               /**< (SPDIFRX_RSR) No Signal on Receive Line Mask */
#define SPDIFRX_RSR_NOSIGNAL(value)           (SPDIFRX_RSR_NOSIGNAL_Msk & ((value) << SPDIFRX_RSR_NOSIGNAL_Pos))
#define   SPDIFRX_RSR_NOSIGNAL_0_Val          _U_(0x0)                                             /**< (SPDIFRX_RSR) The receiver is synchronized or searching for receive line frequency or preambles.  */
#define   SPDIFRX_RSR_NOSIGNAL_1_Val          _U_(0x1)                                             /**< (SPDIFRX_RSR) The receiver is not able to find any activity (no edge) on RX line.  */
#define SPDIFRX_RSR_NOSIGNAL_0                (SPDIFRX_RSR_NOSIGNAL_0_Val << SPDIFRX_RSR_NOSIGNAL_Pos) /**< (SPDIFRX_RSR) The receiver is synchronized or searching for receive line frequency or preambles. Position  */
#define SPDIFRX_RSR_NOSIGNAL_1                (SPDIFRX_RSR_NOSIGNAL_1_Val << SPDIFRX_RSR_NOSIGNAL_Pos) /**< (SPDIFRX_RSR) The receiver is not able to find any activity (no edge) on RX line. Position  */
#define SPDIFRX_RSR_IFS_Pos                   _U_(16)                                              /**< (SPDIFRX_RSR) Image of Sampling Frequency Position */
#define SPDIFRX_RSR_IFS_Msk                   (_U_(0xFFF) << SPDIFRX_RSR_IFS_Pos)                  /**< (SPDIFRX_RSR) Image of Sampling Frequency Mask */
#define SPDIFRX_RSR_IFS(value)                (SPDIFRX_RSR_IFS_Msk & ((value) << SPDIFRX_RSR_IFS_Pos))
#define SPDIFRX_RSR_Msk                       _U_(0x0FFF000F)                                      /**< (SPDIFRX_RSR) Register Mask  */


/* -------- SPDIFRX_RHR : (SPDIFRX Offset: 0x24) ( R/ 32) Holding Register -------- */
#define SPDIFRX_RHR_RESETVALUE                _U_(0x00)                                            /**<  (SPDIFRX_RHR) Holding Register  Reset Value */

#define SPDIFRX_RHR_DATA_Pos                  _U_(0)                                               /**< (SPDIFRX_RHR) Channel 1 and 2 Data Position */
#define SPDIFRX_RHR_DATA_Msk                  (_U_(0xFFFFFFFF) << SPDIFRX_RHR_DATA_Pos)            /**< (SPDIFRX_RHR) Channel 1 and 2 Data Mask */
#define SPDIFRX_RHR_DATA(value)               (SPDIFRX_RHR_DATA_Msk & ((value) << SPDIFRX_RHR_DATA_Pos))
#define SPDIFRX_RHR_Msk                       _U_(0xFFFFFFFF)                                      /**< (SPDIFRX_RHR) Register Mask  */


/* -------- SPDIFRX_WPMR : (SPDIFRX Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SPDIFRX_WPMR_RESETVALUE               _U_(0x00)                                            /**<  (SPDIFRX_WPMR) Write Protection Mode Register  Reset Value */

#define SPDIFRX_WPMR_WPEN_Pos                 _U_(0)                                               /**< (SPDIFRX_WPMR) Write Protection Enable Position */
#define SPDIFRX_WPMR_WPEN_Msk                 (_U_(0x1) << SPDIFRX_WPMR_WPEN_Pos)                  /**< (SPDIFRX_WPMR) Write Protection Enable Mask */
#define SPDIFRX_WPMR_WPEN(value)              (SPDIFRX_WPMR_WPEN_Msk & ((value) << SPDIFRX_WPMR_WPEN_Pos))
#define   SPDIFRX_WPMR_WPEN_0_Val             _U_(0x0)                                             /**< (SPDIFRX_WPMR) Disables the write protection if WPKEY corresponds to 0x535044 ("SPD" in ASCII).  */
#define   SPDIFRX_WPMR_WPEN_1_Val             _U_(0x1)                                             /**< (SPDIFRX_WPMR) Enables the write protection is enabled. All accesses to configuration registers are canceled and generate an error in the SPDIFRX_WPSR register.  */
#define SPDIFRX_WPMR_WPEN_0                   (SPDIFRX_WPMR_WPEN_0_Val << SPDIFRX_WPMR_WPEN_Pos)   /**< (SPDIFRX_WPMR) Disables the write protection if WPKEY corresponds to 0x535044 ("SPD" in ASCII). Position  */
#define SPDIFRX_WPMR_WPEN_1                   (SPDIFRX_WPMR_WPEN_1_Val << SPDIFRX_WPMR_WPEN_Pos)   /**< (SPDIFRX_WPMR) Enables the write protection is enabled. All accesses to configuration registers are canceled and generate an error in the SPDIFRX_WPSR register. Position  */
#define SPDIFRX_WPMR_WPITEN_Pos               _U_(1)                                               /**< (SPDIFRX_WPMR) Write Protection Interrupt Enable Position */
#define SPDIFRX_WPMR_WPITEN_Msk               (_U_(0x1) << SPDIFRX_WPMR_WPITEN_Pos)                /**< (SPDIFRX_WPMR) Write Protection Interrupt Enable Mask */
#define SPDIFRX_WPMR_WPITEN(value)            (SPDIFRX_WPMR_WPITEN_Msk & ((value) << SPDIFRX_WPMR_WPITEN_Pos))
#define   SPDIFRX_WPMR_WPITEN_0_Val           _U_(0x0)                                             /**< (SPDIFRX_WPMR) Disables the write protection on Interrupt registers if WPKEY corresponds to 0x535044.  */
#define   SPDIFRX_WPMR_WPITEN_1_Val           _U_(0x1)                                             /**< (SPDIFRX_WPMR) Enables the write protection on Interrupt registers if WPKEY corresponds to 0x535044.  */
#define SPDIFRX_WPMR_WPITEN_0                 (SPDIFRX_WPMR_WPITEN_0_Val << SPDIFRX_WPMR_WPITEN_Pos) /**< (SPDIFRX_WPMR) Disables the write protection on Interrupt registers if WPKEY corresponds to 0x535044. Position  */
#define SPDIFRX_WPMR_WPITEN_1                 (SPDIFRX_WPMR_WPITEN_1_Val << SPDIFRX_WPMR_WPITEN_Pos) /**< (SPDIFRX_WPMR) Enables the write protection on Interrupt registers if WPKEY corresponds to 0x535044. Position  */
#define SPDIFRX_WPMR_WPCREN_Pos               _U_(2)                                               /**< (SPDIFRX_WPMR) Write Protection Control Register Enable Position */
#define SPDIFRX_WPMR_WPCREN_Msk               (_U_(0x1) << SPDIFRX_WPMR_WPCREN_Pos)                /**< (SPDIFRX_WPMR) Write Protection Control Register Enable Mask */
#define SPDIFRX_WPMR_WPCREN(value)            (SPDIFRX_WPMR_WPCREN_Msk & ((value) << SPDIFRX_WPMR_WPCREN_Pos))
#define   SPDIFRX_WPMR_WPCREN_0_Val           _U_(0x0)                                             /**< (SPDIFRX_WPMR) Disables the write protection on the Control register (SPDIFRX_CR) if WPKEY corresponds to 0x535044.  */
#define   SPDIFRX_WPMR_WPCREN_1_Val           _U_(0x1)                                             /**< (SPDIFRX_WPMR) Enables the write protection on the Control register (SPDIFRX_CR) if WPKEY corresponds to 0x535044.  */
#define SPDIFRX_WPMR_WPCREN_0                 (SPDIFRX_WPMR_WPCREN_0_Val << SPDIFRX_WPMR_WPCREN_Pos) /**< (SPDIFRX_WPMR) Disables the write protection on the Control register (SPDIFRX_CR) if WPKEY corresponds to 0x535044. Position  */
#define SPDIFRX_WPMR_WPCREN_1                 (SPDIFRX_WPMR_WPCREN_1_Val << SPDIFRX_WPMR_WPCREN_Pos) /**< (SPDIFRX_WPMR) Enables the write protection on the Control register (SPDIFRX_CR) if WPKEY corresponds to 0x535044. Position  */
#define SPDIFRX_WPMR_FIRSTE_Pos               _U_(4)                                               /**< (SPDIFRX_WPMR) First Error Report Enable Position */
#define SPDIFRX_WPMR_FIRSTE_Msk               (_U_(0x1) << SPDIFRX_WPMR_FIRSTE_Pos)                /**< (SPDIFRX_WPMR) First Error Report Enable Mask */
#define SPDIFRX_WPMR_FIRSTE(value)            (SPDIFRX_WPMR_FIRSTE_Msk & ((value) << SPDIFRX_WPMR_FIRSTE_Pos))
#define   SPDIFRX_WPMR_FIRSTE_0_Val           _U_(0x0)                                             /**< (SPDIFRX_WPMR) The last write protection violation source is reported in SPDIFRX_WPSR.WPSRC and the last software control error type is reported in SPDIFRX_WPSR.SWETYP. The SPDIFRX_ISR.SECE flag is set at the first error occurrence within a series.  */
#define   SPDIFRX_WPMR_FIRSTE_1_Val           _U_(0x1)                                             /**< (SPDIFRX_WPMR) Only the first write protection violation source is reported in SPDIFRX_WPSR.WPSRC and only the first software control error type is reported in SPDIFRX_WPSR.SWETYP. The SPDIFRX_ISR.SECE flag is set at the first error occurrence within a series.  */
#define SPDIFRX_WPMR_FIRSTE_0                 (SPDIFRX_WPMR_FIRSTE_0_Val << SPDIFRX_WPMR_FIRSTE_Pos) /**< (SPDIFRX_WPMR) The last write protection violation source is reported in SPDIFRX_WPSR.WPSRC and the last software control error type is reported in SPDIFRX_WPSR.SWETYP. The SPDIFRX_ISR.SECE flag is set at the first error occurrence within a series. Position  */
#define SPDIFRX_WPMR_FIRSTE_1                 (SPDIFRX_WPMR_FIRSTE_1_Val << SPDIFRX_WPMR_FIRSTE_Pos) /**< (SPDIFRX_WPMR) Only the first write protection violation source is reported in SPDIFRX_WPSR.WPSRC and only the first software control error type is reported in SPDIFRX_WPSR.SWETYP. The SPDIFRX_ISR.SECE flag is set at the first error occurrence within a series. Position  */
#define SPDIFRX_WPMR_WPKEY_Pos                _U_(8)                                               /**< (SPDIFRX_WPMR) Write Protection Key Position */
#define SPDIFRX_WPMR_WPKEY_Msk                (_U_(0xFFFFFF) << SPDIFRX_WPMR_WPKEY_Pos)            /**< (SPDIFRX_WPMR) Write Protection Key Mask */
#define SPDIFRX_WPMR_WPKEY(value)             (SPDIFRX_WPMR_WPKEY_Msk & ((value) << SPDIFRX_WPMR_WPKEY_Pos))
#define   SPDIFRX_WPMR_WPKEY_PASSWD_Val       _U_(0x535044)                                        /**< (SPDIFRX_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN and WPCREN bits. Always reads at 0.  */
#define SPDIFRX_WPMR_WPKEY_PASSWD             (SPDIFRX_WPMR_WPKEY_PASSWD_Val << SPDIFRX_WPMR_WPKEY_Pos) /**< (SPDIFRX_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN and WPCREN bits. Always reads at 0. Position  */
#define SPDIFRX_WPMR_Msk                      _U_(0xFFFFFF17)                                      /**< (SPDIFRX_WPMR) Register Mask  */


/* -------- SPDIFRX_WPSR : (SPDIFRX Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define SPDIFRX_WPSR_RESETVALUE               _U_(0x00)                                            /**<  (SPDIFRX_WPSR) Write Protection Status Register  Reset Value */

#define SPDIFRX_WPSR_WPVS_Pos                 _U_(0)                                               /**< (SPDIFRX_WPSR) Write Protection Violation Status (cleared on read) Position */
#define SPDIFRX_WPSR_WPVS_Msk                 (_U_(0x1) << SPDIFRX_WPSR_WPVS_Pos)                  /**< (SPDIFRX_WPSR) Write Protection Violation Status (cleared on read) Mask */
#define SPDIFRX_WPSR_WPVS(value)              (SPDIFRX_WPSR_WPVS_Msk & ((value) << SPDIFRX_WPSR_WPVS_Pos))
#define   SPDIFRX_WPSR_WPVS_0_Val             _U_(0x0)                                             /**< (SPDIFRX_WPSR) No write protection violation has occurred since the last read of SPDIFRX_WPSR.  */
#define   SPDIFRX_WPSR_WPVS_1_Val             _U_(0x1)                                             /**< (SPDIFRX_WPSR) A write protection violation has occurred since the last read of SPDIFRX_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC.  */
#define SPDIFRX_WPSR_WPVS_0                   (SPDIFRX_WPSR_WPVS_0_Val << SPDIFRX_WPSR_WPVS_Pos)   /**< (SPDIFRX_WPSR) No write protection violation has occurred since the last read of SPDIFRX_WPSR. Position  */
#define SPDIFRX_WPSR_WPVS_1                   (SPDIFRX_WPSR_WPVS_1_Val << SPDIFRX_WPSR_WPVS_Pos)   /**< (SPDIFRX_WPSR) A write protection violation has occurred since the last read of SPDIFRX_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC. Position  */
#define SPDIFRX_WPSR_SEQE_Pos                 _U_(2)                                               /**< (SPDIFRX_WPSR) Internal Sequencer Error (cleared on read) Position */
#define SPDIFRX_WPSR_SEQE_Msk                 (_U_(0x1) << SPDIFRX_WPSR_SEQE_Pos)                  /**< (SPDIFRX_WPSR) Internal Sequencer Error (cleared on read) Mask */
#define SPDIFRX_WPSR_SEQE(value)              (SPDIFRX_WPSR_SEQE_Msk & ((value) << SPDIFRX_WPSR_SEQE_Pos))
#define   SPDIFRX_WPSR_SEQE_0_Val             _U_(0x0)                                             /**< (SPDIFRX_WPSR) No peripheral internal sequencer error has occurred since the last read of SPDIFRX_WPSR.  */
#define   SPDIFRX_WPSR_SEQE_1_Val             _U_(0x1)                                             /**< (SPDIFRX_WPSR) A peripheral internal sequencer error has occurred since the last read of SPDIFRX_WPSR. This flag can only be set under abnormal operating conditions.  */
#define SPDIFRX_WPSR_SEQE_0                   (SPDIFRX_WPSR_SEQE_0_Val << SPDIFRX_WPSR_SEQE_Pos)   /**< (SPDIFRX_WPSR) No peripheral internal sequencer error has occurred since the last read of SPDIFRX_WPSR. Position  */
#define SPDIFRX_WPSR_SEQE_1                   (SPDIFRX_WPSR_SEQE_1_Val << SPDIFRX_WPSR_SEQE_Pos)   /**< (SPDIFRX_WPSR) A peripheral internal sequencer error has occurred since the last read of SPDIFRX_WPSR. This flag can only be set under abnormal operating conditions. Position  */
#define SPDIFRX_WPSR_SWE_Pos                  _U_(3)                                               /**< (SPDIFRX_WPSR) Software Control Error (cleared on read) Position */
#define SPDIFRX_WPSR_SWE_Msk                  (_U_(0x1) << SPDIFRX_WPSR_SWE_Pos)                   /**< (SPDIFRX_WPSR) Software Control Error (cleared on read) Mask */
#define SPDIFRX_WPSR_SWE(value)               (SPDIFRX_WPSR_SWE_Msk & ((value) << SPDIFRX_WPSR_SWE_Pos))
#define   SPDIFRX_WPSR_SWE_0_Val              _U_(0x0)                                             /**< (SPDIFRX_WPSR) No software error has occurred since the last read of SPDIFRX_WPSR.  */
#define   SPDIFRX_WPSR_SWE_1_Val              _U_(0x1)                                             /**< (SPDIFRX_WPSR) A software error has occurred since the last read of SPDIFRX_WPSR. The field SWETYP details the type of software abnormal access; the associated incorrect software access is reported in the field WPSRC (if WPVS=0).  */
#define SPDIFRX_WPSR_SWE_0                    (SPDIFRX_WPSR_SWE_0_Val << SPDIFRX_WPSR_SWE_Pos)     /**< (SPDIFRX_WPSR) No software error has occurred since the last read of SPDIFRX_WPSR. Position  */
#define SPDIFRX_WPSR_SWE_1                    (SPDIFRX_WPSR_SWE_1_Val << SPDIFRX_WPSR_SWE_Pos)     /**< (SPDIFRX_WPSR) A software error has occurred since the last read of SPDIFRX_WPSR. The field SWETYP details the type of software abnormal access; the associated incorrect software access is reported in the field WPSRC (if WPVS=0). Position  */
#define SPDIFRX_WPSR_WPSRC_Pos                _U_(8)                                               /**< (SPDIFRX_WPSR) Write Protection Source Position */
#define SPDIFRX_WPSR_WPSRC_Msk                (_U_(0xFFFF) << SPDIFRX_WPSR_WPSRC_Pos)              /**< (SPDIFRX_WPSR) Write Protection Source Mask */
#define SPDIFRX_WPSR_WPSRC(value)             (SPDIFRX_WPSR_WPSRC_Msk & ((value) << SPDIFRX_WPSR_WPSRC_Pos))
#define SPDIFRX_WPSR_SWETYP_Pos               _U_(24)                                              /**< (SPDIFRX_WPSR) Software Error Type (cleared on read) Position */
#define SPDIFRX_WPSR_SWETYP_Msk               (_U_(0x3) << SPDIFRX_WPSR_SWETYP_Pos)                /**< (SPDIFRX_WPSR) Software Error Type (cleared on read) Mask */
#define SPDIFRX_WPSR_SWETYP(value)            (SPDIFRX_WPSR_SWETYP_Msk & ((value) << SPDIFRX_WPSR_SWETYP_Pos))
#define   SPDIFRX_WPSR_SWETYP_READ_WO_Val     _U_(0x0)                                             /**< (SPDIFRX_WPSR) A write-only register has been read (warning).  */
#define   SPDIFRX_WPSR_SWETYP_WRITE_RO_Val    _U_(0x1)                                             /**< (SPDIFRX_WPSR) A write access has been performed on a read-only register (Warning).  */
#define   SPDIFRX_WPSR_SWETYP_UNDEF_RW_Val    _U_(0x2)                                             /**< (SPDIFRX_WPSR) Access to an undefined address (warning).  */
#define SPDIFRX_WPSR_SWETYP_READ_WO           (SPDIFRX_WPSR_SWETYP_READ_WO_Val << SPDIFRX_WPSR_SWETYP_Pos) /**< (SPDIFRX_WPSR) A write-only register has been read (warning). Position  */
#define SPDIFRX_WPSR_SWETYP_WRITE_RO          (SPDIFRX_WPSR_SWETYP_WRITE_RO_Val << SPDIFRX_WPSR_SWETYP_Pos) /**< (SPDIFRX_WPSR) A write access has been performed on a read-only register (Warning). Position  */
#define SPDIFRX_WPSR_SWETYP_UNDEF_RW          (SPDIFRX_WPSR_SWETYP_UNDEF_RW_Val << SPDIFRX_WPSR_SWETYP_Pos) /**< (SPDIFRX_WPSR) Access to an undefined address (warning). Position  */
#define SPDIFRX_WPSR_Msk                      _U_(0x03FFFF0D)                                      /**< (SPDIFRX_WPSR) Register Mask  */


/* -------- SPDIFRX_VERSION : (SPDIFRX Offset: 0xFC) ( R/ 32) Version Register -------- */
#define SPDIFRX_VERSION_RESETVALUE            _U_(0x00)                                            /**<  (SPDIFRX_VERSION) Version Register  Reset Value */

#define SPDIFRX_VERSION_VERSION_Pos           _U_(0)                                               /**< (SPDIFRX_VERSION) Version Position */
#define SPDIFRX_VERSION_VERSION_Msk           (_U_(0xFFF) << SPDIFRX_VERSION_VERSION_Pos)          /**< (SPDIFRX_VERSION) Version Mask */
#define SPDIFRX_VERSION_VERSION(value)        (SPDIFRX_VERSION_VERSION_Msk & ((value) << SPDIFRX_VERSION_VERSION_Pos))
#define SPDIFRX_VERSION_MFN_Pos               _U_(16)                                              /**< (SPDIFRX_VERSION) Metal Fix Number Position */
#define SPDIFRX_VERSION_MFN_Msk               (_U_(0x7) << SPDIFRX_VERSION_MFN_Pos)                /**< (SPDIFRX_VERSION) Metal Fix Number Mask */
#define SPDIFRX_VERSION_MFN(value)            (SPDIFRX_VERSION_MFN_Msk & ((value) << SPDIFRX_VERSION_MFN_Pos))
#define SPDIFRX_VERSION_Msk                   _U_(0x00070FFF)                                      /**< (SPDIFRX_VERSION) Register Mask  */


/** \brief SPDIFRX register offsets definitions */
#define SPDIFRX_CHxSR_REG_OFST         (0x00)              /**< (SPDIFRX_CHxSR) Channel X Status Register x Offset */
#define SPDIFRX_CHxSR0_REG_OFST        (0x00)              /**< (SPDIFRX_CHxSR0) Channel X Status Register x Offset */
#define SPDIFRX_CHxSR1_REG_OFST        (0x04)              /**< (SPDIFRX_CHxSR1) Channel X Status Register x Offset */
#define SPDIFRX_CHxSR2_REG_OFST        (0x08)              /**< (SPDIFRX_CHxSR2) Channel X Status Register x Offset */
#define SPDIFRX_CHxSR3_REG_OFST        (0x0C)              /**< (SPDIFRX_CHxSR3) Channel X Status Register x Offset */
#define SPDIFRX_CHxSR4_REG_OFST        (0x10)              /**< (SPDIFRX_CHxSR4) Channel X Status Register x Offset */
#define SPDIFRX_CHxSR5_REG_OFST        (0x14)              /**< (SPDIFRX_CHxSR5) Channel X Status Register x Offset */
#define SPDIFRX_CHxUD_REG_OFST         (0x18)              /**< (SPDIFRX_CHxUD) Channel X User Data Register x Offset */
#define SPDIFRX_CHxUD0_REG_OFST        (0x18)              /**< (SPDIFRX_CHxUD0) Channel X User Data Register x Offset */
#define SPDIFRX_CHxUD1_REG_OFST        (0x1C)              /**< (SPDIFRX_CHxUD1) Channel X User Data Register x Offset */
#define SPDIFRX_CHxUD2_REG_OFST        (0x20)              /**< (SPDIFRX_CHxUD2) Channel X User Data Register x Offset */
#define SPDIFRX_CHxUD3_REG_OFST        (0x24)              /**< (SPDIFRX_CHxUD3) Channel X User Data Register x Offset */
#define SPDIFRX_CHxUD4_REG_OFST        (0x28)              /**< (SPDIFRX_CHxUD4) Channel X User Data Register x Offset */
#define SPDIFRX_CHxUD5_REG_OFST        (0x2C)              /**< (SPDIFRX_CHxUD5) Channel X User Data Register x Offset */
#define SPDIFRX_CR_REG_OFST            (0x00)              /**< (SPDIFRX_CR) Control Register Offset */
#define SPDIFRX_MR_REG_OFST            (0x04)              /**< (SPDIFRX_MR) Mode Register Offset */
#define SPDIFRX_IER_REG_OFST           (0x10)              /**< (SPDIFRX_IER) Interrupt Enable Register Offset */
#define SPDIFRX_IDR_REG_OFST           (0x14)              /**< (SPDIFRX_IDR) Interrupt Disable Register Offset */
#define SPDIFRX_IMR_REG_OFST           (0x18)              /**< (SPDIFRX_IMR) Interrupt Mask Register Offset */
#define SPDIFRX_ISR_REG_OFST           (0x1C)              /**< (SPDIFRX_ISR) Interrupt Status Register Offset */
#define SPDIFRX_RSR_REG_OFST           (0x20)              /**< (SPDIFRX_RSR) Status Register Offset */
#define SPDIFRX_RHR_REG_OFST           (0x24)              /**< (SPDIFRX_RHR) Holding Register Offset */
#define SPDIFRX_WPMR_REG_OFST          (0xE4)              /**< (SPDIFRX_WPMR) Write Protection Mode Register Offset */
#define SPDIFRX_WPSR_REG_OFST          (0xE8)              /**< (SPDIFRX_WPSR) Write Protection Status Register Offset */
#define SPDIFRX_VERSION_REG_OFST       (0xFC)              /**< (SPDIFRX_VERSION) Version Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SPDIFRX_CH register API structure */
typedef struct
{
  __I   uint32_t                       SPDIFRX_CHxSR[6];   /**< Offset: 0x00 (R/   32) Channel X Status Register x */
  __I   uint32_t                       SPDIFRX_CHxUD[6];   /**< Offset: 0x18 (R/   32) Channel X User Data Register x */
} spdifrx_ch_registers_t;

#define SPDIFRX_CH_NUMBER _U_(2)

/** \brief SPDIFRX register API structure */
typedef struct
{  /* Sony/Philips Digital Interface Receiver */
  __O   uint32_t                       SPDIFRX_CR;         /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       SPDIFRX_MR;         /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0x08];
  __O   uint32_t                       SPDIFRX_IER;        /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       SPDIFRX_IDR;        /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       SPDIFRX_IMR;        /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       SPDIFRX_ISR;        /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __I   uint32_t                       SPDIFRX_RSR;        /**< Offset: 0x20 (R/   32) Status Register */
  __I   uint32_t                       SPDIFRX_RHR;        /**< Offset: 0x24 (R/   32) Holding Register */
  __I   uint8_t                        Reserved2[0x08];
        spdifrx_ch_registers_t         SPDIFRX_CH[SPDIFRX_CH_NUMBER]; /**< Offset: 0x30  */
  __I   uint8_t                        Reserved3[0x54];
  __IO  uint32_t                       SPDIFRX_WPMR;       /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       SPDIFRX_WPSR;       /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved4[0x10];
  __I   uint32_t                       SPDIFRX_VERSION;    /**< Offset: 0xFC (R/   32) Version Register */
} spdifrx_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_SPDIFRX_COMPONENT_H_ */
