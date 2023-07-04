/*
 * Component description for MEM2MEM
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

/* file generated from device description version 2021-07-26T14:35:51Z */
#ifndef _SAMG55_MEM2MEM_COMPONENT_H_
#define _SAMG55_MEM2MEM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MEM2MEM                                      */
/* ************************************************************************** */

/* -------- MEM2MEM_THR : (MEM2MEM Offset: 0x00) (R/W 32) Memory to Memory Transfer Holding Register -------- */
#define MEM2MEM_THR_THDATA_Pos                _U_(0)                                               /**< (MEM2MEM_THR) Transfer Holding Data Position */
#define MEM2MEM_THR_THDATA_Msk                (_U_(0xFFFFFFFF) << MEM2MEM_THR_THDATA_Pos)          /**< (MEM2MEM_THR) Transfer Holding Data Mask */
#define MEM2MEM_THR_THDATA(value)             (MEM2MEM_THR_THDATA_Msk & ((value) << MEM2MEM_THR_THDATA_Pos))
#define MEM2MEM_THR_Msk                       _U_(0xFFFFFFFF)                                      /**< (MEM2MEM_THR) Register Mask  */


/* -------- MEM2MEM_MR : (MEM2MEM Offset: 0x04) (R/W 32) Memory to Memory Mode Register -------- */
#define MEM2MEM_MR_TSIZE_Pos                  _U_(0)                                               /**< (MEM2MEM_MR) Transfer Size Position */
#define MEM2MEM_MR_TSIZE_Msk                  (_U_(0x3) << MEM2MEM_MR_TSIZE_Pos)                   /**< (MEM2MEM_MR) Transfer Size Mask */
#define MEM2MEM_MR_TSIZE(value)               (MEM2MEM_MR_TSIZE_Msk & ((value) << MEM2MEM_MR_TSIZE_Pos))
#define   MEM2MEM_MR_TSIZE_T_8BIT_Val         _U_(0x0)                                             /**< (MEM2MEM_MR) The buffer size is defined in byte.  */
#define   MEM2MEM_MR_TSIZE_T_16BIT_Val        _U_(0x1)                                             /**< (MEM2MEM_MR) The buffer size is defined in half-word (16-bit).  */
#define   MEM2MEM_MR_TSIZE_T_32BIT_Val        _U_(0x2)                                             /**< (MEM2MEM_MR) The buffer size is defined in word (32-bit). Default value.  */
#define MEM2MEM_MR_TSIZE_T_8BIT               (MEM2MEM_MR_TSIZE_T_8BIT_Val << MEM2MEM_MR_TSIZE_Pos) /**< (MEM2MEM_MR) The buffer size is defined in byte. Position  */
#define MEM2MEM_MR_TSIZE_T_16BIT              (MEM2MEM_MR_TSIZE_T_16BIT_Val << MEM2MEM_MR_TSIZE_Pos) /**< (MEM2MEM_MR) The buffer size is defined in half-word (16-bit). Position  */
#define MEM2MEM_MR_TSIZE_T_32BIT              (MEM2MEM_MR_TSIZE_T_32BIT_Val << MEM2MEM_MR_TSIZE_Pos) /**< (MEM2MEM_MR) The buffer size is defined in word (32-bit). Default value. Position  */
#define MEM2MEM_MR_Msk                        _U_(0x00000003)                                      /**< (MEM2MEM_MR) Register Mask  */


/* -------- MEM2MEM_IER : (MEM2MEM Offset: 0x08) ( /W 32) Memory to Memory Interrupt Enable Register -------- */
#define MEM2MEM_IER_RXEND_Pos                 _U_(0)                                               /**< (MEM2MEM_IER) End of Transfer Interrupt Enable Position */
#define MEM2MEM_IER_RXEND_Msk                 (_U_(0x1) << MEM2MEM_IER_RXEND_Pos)                  /**< (MEM2MEM_IER) End of Transfer Interrupt Enable Mask */
#define MEM2MEM_IER_RXEND(value)              (MEM2MEM_IER_RXEND_Msk & ((value) << MEM2MEM_IER_RXEND_Pos))
#define MEM2MEM_IER_RXBUFF_Pos                _U_(1)                                               /**< (MEM2MEM_IER) Buffer Full Interrupt Enable Position */
#define MEM2MEM_IER_RXBUFF_Msk                (_U_(0x1) << MEM2MEM_IER_RXBUFF_Pos)                 /**< (MEM2MEM_IER) Buffer Full Interrupt Enable Mask */
#define MEM2MEM_IER_RXBUFF(value)             (MEM2MEM_IER_RXBUFF_Msk & ((value) << MEM2MEM_IER_RXBUFF_Pos))
#define MEM2MEM_IER_Msk                       _U_(0x00000003)                                      /**< (MEM2MEM_IER) Register Mask  */


/* -------- MEM2MEM_IDR : (MEM2MEM Offset: 0x0C) ( /W 32) Memory to Memory Interrupt Disable Register -------- */
#define MEM2MEM_IDR_RXEND_Pos                 _U_(0)                                               /**< (MEM2MEM_IDR) End of Transfer Interrupt Disable Position */
#define MEM2MEM_IDR_RXEND_Msk                 (_U_(0x1) << MEM2MEM_IDR_RXEND_Pos)                  /**< (MEM2MEM_IDR) End of Transfer Interrupt Disable Mask */
#define MEM2MEM_IDR_RXEND(value)              (MEM2MEM_IDR_RXEND_Msk & ((value) << MEM2MEM_IDR_RXEND_Pos))
#define MEM2MEM_IDR_RXBUFF_Pos                _U_(1)                                               /**< (MEM2MEM_IDR) Buffer Full Interrupt Disable Position */
#define MEM2MEM_IDR_RXBUFF_Msk                (_U_(0x1) << MEM2MEM_IDR_RXBUFF_Pos)                 /**< (MEM2MEM_IDR) Buffer Full Interrupt Disable Mask */
#define MEM2MEM_IDR_RXBUFF(value)             (MEM2MEM_IDR_RXBUFF_Msk & ((value) << MEM2MEM_IDR_RXBUFF_Pos))
#define MEM2MEM_IDR_Msk                       _U_(0x00000003)                                      /**< (MEM2MEM_IDR) Register Mask  */


/* -------- MEM2MEM_IMR : (MEM2MEM Offset: 0x10) ( R/ 32) Memory to Memory Interrupt Mask Register -------- */
#define MEM2MEM_IMR_RXEND_Pos                 _U_(0)                                               /**< (MEM2MEM_IMR) End of Transfer Interrupt Mask Position */
#define MEM2MEM_IMR_RXEND_Msk                 (_U_(0x1) << MEM2MEM_IMR_RXEND_Pos)                  /**< (MEM2MEM_IMR) End of Transfer Interrupt Mask Mask */
#define MEM2MEM_IMR_RXEND(value)              (MEM2MEM_IMR_RXEND_Msk & ((value) << MEM2MEM_IMR_RXEND_Pos))
#define MEM2MEM_IMR_RXBUFF_Pos                _U_(1)                                               /**< (MEM2MEM_IMR) Buffer Full Interrupt Mask Position */
#define MEM2MEM_IMR_RXBUFF_Msk                (_U_(0x1) << MEM2MEM_IMR_RXBUFF_Pos)                 /**< (MEM2MEM_IMR) Buffer Full Interrupt Mask Mask */
#define MEM2MEM_IMR_RXBUFF(value)             (MEM2MEM_IMR_RXBUFF_Msk & ((value) << MEM2MEM_IMR_RXBUFF_Pos))
#define MEM2MEM_IMR_Msk                       _U_(0x00000003)                                      /**< (MEM2MEM_IMR) Register Mask  */


/* -------- MEM2MEM_ISR : (MEM2MEM Offset: 0x14) ( R/ 32) Memory to Memory Interrupt Status Register -------- */
#define MEM2MEM_ISR_RXEND_Pos                 _U_(0)                                               /**< (MEM2MEM_ISR) End of Transfer Position */
#define MEM2MEM_ISR_RXEND_Msk                 (_U_(0x1) << MEM2MEM_ISR_RXEND_Pos)                  /**< (MEM2MEM_ISR) End of Transfer Mask */
#define MEM2MEM_ISR_RXEND(value)              (MEM2MEM_ISR_RXEND_Msk & ((value) << MEM2MEM_ISR_RXEND_Pos))
#define MEM2MEM_ISR_RXBUFF_Pos                _U_(1)                                               /**< (MEM2MEM_ISR) Buffer Full Position */
#define MEM2MEM_ISR_RXBUFF_Msk                (_U_(0x1) << MEM2MEM_ISR_RXBUFF_Pos)                 /**< (MEM2MEM_ISR) Buffer Full Mask */
#define MEM2MEM_ISR_RXBUFF(value)             (MEM2MEM_ISR_RXBUFF_Msk & ((value) << MEM2MEM_ISR_RXBUFF_Pos))
#define MEM2MEM_ISR_Msk                       _U_(0x00000003)                                      /**< (MEM2MEM_ISR) Register Mask  */


/* -------- MEM2MEM_RPR : (MEM2MEM Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define MEM2MEM_RPR_RXPTR_Pos                 _U_(0)                                               /**< (MEM2MEM_RPR) Receive Pointer Register Position */
#define MEM2MEM_RPR_RXPTR_Msk                 (_U_(0xFFFFFFFF) << MEM2MEM_RPR_RXPTR_Pos)           /**< (MEM2MEM_RPR) Receive Pointer Register Mask */
#define MEM2MEM_RPR_RXPTR(value)              (MEM2MEM_RPR_RXPTR_Msk & ((value) << MEM2MEM_RPR_RXPTR_Pos))
#define MEM2MEM_RPR_Msk                       _U_(0xFFFFFFFF)                                      /**< (MEM2MEM_RPR) Register Mask  */


/* -------- MEM2MEM_RCR : (MEM2MEM Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define MEM2MEM_RCR_RXCTR_Pos                 _U_(0)                                               /**< (MEM2MEM_RCR) Receive Counter Register Position */
#define MEM2MEM_RCR_RXCTR_Msk                 (_U_(0xFFFF) << MEM2MEM_RCR_RXCTR_Pos)               /**< (MEM2MEM_RCR) Receive Counter Register Mask */
#define MEM2MEM_RCR_RXCTR(value)              (MEM2MEM_RCR_RXCTR_Msk & ((value) << MEM2MEM_RCR_RXCTR_Pos))
#define MEM2MEM_RCR_Msk                       _U_(0x0000FFFF)                                      /**< (MEM2MEM_RCR) Register Mask  */


/* -------- MEM2MEM_TPR : (MEM2MEM Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define MEM2MEM_TPR_TXPTR_Pos                 _U_(0)                                               /**< (MEM2MEM_TPR) Transmit Counter Register Position */
#define MEM2MEM_TPR_TXPTR_Msk                 (_U_(0xFFFFFFFF) << MEM2MEM_TPR_TXPTR_Pos)           /**< (MEM2MEM_TPR) Transmit Counter Register Mask */
#define MEM2MEM_TPR_TXPTR(value)              (MEM2MEM_TPR_TXPTR_Msk & ((value) << MEM2MEM_TPR_TXPTR_Pos))
#define MEM2MEM_TPR_Msk                       _U_(0xFFFFFFFF)                                      /**< (MEM2MEM_TPR) Register Mask  */


/* -------- MEM2MEM_TCR : (MEM2MEM Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define MEM2MEM_TCR_TXCTR_Pos                 _U_(0)                                               /**< (MEM2MEM_TCR) Transmit Counter Register Position */
#define MEM2MEM_TCR_TXCTR_Msk                 (_U_(0xFFFF) << MEM2MEM_TCR_TXCTR_Pos)               /**< (MEM2MEM_TCR) Transmit Counter Register Mask */
#define MEM2MEM_TCR_TXCTR(value)              (MEM2MEM_TCR_TXCTR_Msk & ((value) << MEM2MEM_TCR_TXCTR_Pos))
#define MEM2MEM_TCR_Msk                       _U_(0x0000FFFF)                                      /**< (MEM2MEM_TCR) Register Mask  */


/* -------- MEM2MEM_RNPR : (MEM2MEM Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define MEM2MEM_RNPR_RXNPTR_Pos               _U_(0)                                               /**< (MEM2MEM_RNPR) Receive Next Pointer Position */
#define MEM2MEM_RNPR_RXNPTR_Msk               (_U_(0xFFFFFFFF) << MEM2MEM_RNPR_RXNPTR_Pos)         /**< (MEM2MEM_RNPR) Receive Next Pointer Mask */
#define MEM2MEM_RNPR_RXNPTR(value)            (MEM2MEM_RNPR_RXNPTR_Msk & ((value) << MEM2MEM_RNPR_RXNPTR_Pos))
#define MEM2MEM_RNPR_Msk                      _U_(0xFFFFFFFF)                                      /**< (MEM2MEM_RNPR) Register Mask  */


/* -------- MEM2MEM_RNCR : (MEM2MEM Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define MEM2MEM_RNCR_RXNCTR_Pos               _U_(0)                                               /**< (MEM2MEM_RNCR) Receive Next Counter Position */
#define MEM2MEM_RNCR_RXNCTR_Msk               (_U_(0xFFFF) << MEM2MEM_RNCR_RXNCTR_Pos)             /**< (MEM2MEM_RNCR) Receive Next Counter Mask */
#define MEM2MEM_RNCR_RXNCTR(value)            (MEM2MEM_RNCR_RXNCTR_Msk & ((value) << MEM2MEM_RNCR_RXNCTR_Pos))
#define MEM2MEM_RNCR_Msk                      _U_(0x0000FFFF)                                      /**< (MEM2MEM_RNCR) Register Mask  */


/* -------- MEM2MEM_TNPR : (MEM2MEM Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define MEM2MEM_TNPR_TXNPTR_Pos               _U_(0)                                               /**< (MEM2MEM_TNPR) Transmit Next Pointer Position */
#define MEM2MEM_TNPR_TXNPTR_Msk               (_U_(0xFFFFFFFF) << MEM2MEM_TNPR_TXNPTR_Pos)         /**< (MEM2MEM_TNPR) Transmit Next Pointer Mask */
#define MEM2MEM_TNPR_TXNPTR(value)            (MEM2MEM_TNPR_TXNPTR_Msk & ((value) << MEM2MEM_TNPR_TXNPTR_Pos))
#define MEM2MEM_TNPR_Msk                      _U_(0xFFFFFFFF)                                      /**< (MEM2MEM_TNPR) Register Mask  */


/* -------- MEM2MEM_TNCR : (MEM2MEM Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define MEM2MEM_TNCR_TXNCTR_Pos               _U_(0)                                               /**< (MEM2MEM_TNCR) Transmit Counter Next Position */
#define MEM2MEM_TNCR_TXNCTR_Msk               (_U_(0xFFFF) << MEM2MEM_TNCR_TXNCTR_Pos)             /**< (MEM2MEM_TNCR) Transmit Counter Next Mask */
#define MEM2MEM_TNCR_TXNCTR(value)            (MEM2MEM_TNCR_TXNCTR_Msk & ((value) << MEM2MEM_TNCR_TXNCTR_Pos))
#define MEM2MEM_TNCR_Msk                      _U_(0x0000FFFF)                                      /**< (MEM2MEM_TNCR) Register Mask  */


/* -------- MEM2MEM_PTCR : (MEM2MEM Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define MEM2MEM_PTCR_RXTEN_Pos                _U_(0)                                               /**< (MEM2MEM_PTCR) Receiver Transfer Enable Position */
#define MEM2MEM_PTCR_RXTEN_Msk                (_U_(0x1) << MEM2MEM_PTCR_RXTEN_Pos)                 /**< (MEM2MEM_PTCR) Receiver Transfer Enable Mask */
#define MEM2MEM_PTCR_RXTEN(value)             (MEM2MEM_PTCR_RXTEN_Msk & ((value) << MEM2MEM_PTCR_RXTEN_Pos))
#define MEM2MEM_PTCR_RXTDIS_Pos               _U_(1)                                               /**< (MEM2MEM_PTCR) Receiver Transfer Disable Position */
#define MEM2MEM_PTCR_RXTDIS_Msk               (_U_(0x1) << MEM2MEM_PTCR_RXTDIS_Pos)                /**< (MEM2MEM_PTCR) Receiver Transfer Disable Mask */
#define MEM2MEM_PTCR_RXTDIS(value)            (MEM2MEM_PTCR_RXTDIS_Msk & ((value) << MEM2MEM_PTCR_RXTDIS_Pos))
#define MEM2MEM_PTCR_TXTEN_Pos                _U_(8)                                               /**< (MEM2MEM_PTCR) Transmitter Transfer Enable Position */
#define MEM2MEM_PTCR_TXTEN_Msk                (_U_(0x1) << MEM2MEM_PTCR_TXTEN_Pos)                 /**< (MEM2MEM_PTCR) Transmitter Transfer Enable Mask */
#define MEM2MEM_PTCR_TXTEN(value)             (MEM2MEM_PTCR_TXTEN_Msk & ((value) << MEM2MEM_PTCR_TXTEN_Pos))
#define MEM2MEM_PTCR_TXTDIS_Pos               _U_(9)                                               /**< (MEM2MEM_PTCR) Transmitter Transfer Disable Position */
#define MEM2MEM_PTCR_TXTDIS_Msk               (_U_(0x1) << MEM2MEM_PTCR_TXTDIS_Pos)                /**< (MEM2MEM_PTCR) Transmitter Transfer Disable Mask */
#define MEM2MEM_PTCR_TXTDIS(value)            (MEM2MEM_PTCR_TXTDIS_Msk & ((value) << MEM2MEM_PTCR_TXTDIS_Pos))
#define MEM2MEM_PTCR_RXCBEN_Pos               _U_(16)                                              /**< (MEM2MEM_PTCR) Receiver Circular Buffer Enable Position */
#define MEM2MEM_PTCR_RXCBEN_Msk               (_U_(0x1) << MEM2MEM_PTCR_RXCBEN_Pos)                /**< (MEM2MEM_PTCR) Receiver Circular Buffer Enable Mask */
#define MEM2MEM_PTCR_RXCBEN(value)            (MEM2MEM_PTCR_RXCBEN_Msk & ((value) << MEM2MEM_PTCR_RXCBEN_Pos))
#define MEM2MEM_PTCR_RXCBDIS_Pos              _U_(17)                                              /**< (MEM2MEM_PTCR) Receiver Circular Buffer Disable Position */
#define MEM2MEM_PTCR_RXCBDIS_Msk              (_U_(0x1) << MEM2MEM_PTCR_RXCBDIS_Pos)               /**< (MEM2MEM_PTCR) Receiver Circular Buffer Disable Mask */
#define MEM2MEM_PTCR_RXCBDIS(value)           (MEM2MEM_PTCR_RXCBDIS_Msk & ((value) << MEM2MEM_PTCR_RXCBDIS_Pos))
#define MEM2MEM_PTCR_TXCBEN_Pos               _U_(18)                                              /**< (MEM2MEM_PTCR) Transmitter Circular Buffer Enable Position */
#define MEM2MEM_PTCR_TXCBEN_Msk               (_U_(0x1) << MEM2MEM_PTCR_TXCBEN_Pos)                /**< (MEM2MEM_PTCR) Transmitter Circular Buffer Enable Mask */
#define MEM2MEM_PTCR_TXCBEN(value)            (MEM2MEM_PTCR_TXCBEN_Msk & ((value) << MEM2MEM_PTCR_TXCBEN_Pos))
#define MEM2MEM_PTCR_TXCBDIS_Pos              _U_(19)                                              /**< (MEM2MEM_PTCR) Transmitter Circular Buffer Disable Position */
#define MEM2MEM_PTCR_TXCBDIS_Msk              (_U_(0x1) << MEM2MEM_PTCR_TXCBDIS_Pos)               /**< (MEM2MEM_PTCR) Transmitter Circular Buffer Disable Mask */
#define MEM2MEM_PTCR_TXCBDIS(value)           (MEM2MEM_PTCR_TXCBDIS_Msk & ((value) << MEM2MEM_PTCR_TXCBDIS_Pos))
#define MEM2MEM_PTCR_ERRCLR_Pos               _U_(24)                                              /**< (MEM2MEM_PTCR) Transfer Bus Error Clear Position */
#define MEM2MEM_PTCR_ERRCLR_Msk               (_U_(0x1) << MEM2MEM_PTCR_ERRCLR_Pos)                /**< (MEM2MEM_PTCR) Transfer Bus Error Clear Mask */
#define MEM2MEM_PTCR_ERRCLR(value)            (MEM2MEM_PTCR_ERRCLR_Msk & ((value) << MEM2MEM_PTCR_ERRCLR_Pos))
#define MEM2MEM_PTCR_Msk                      _U_(0x010F0303)                                      /**< (MEM2MEM_PTCR) Register Mask  */


/* -------- MEM2MEM_PTSR : (MEM2MEM Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define MEM2MEM_PTSR_RXTEN_Pos                _U_(0)                                               /**< (MEM2MEM_PTSR) Receiver Transfer Enable Position */
#define MEM2MEM_PTSR_RXTEN_Msk                (_U_(0x1) << MEM2MEM_PTSR_RXTEN_Pos)                 /**< (MEM2MEM_PTSR) Receiver Transfer Enable Mask */
#define MEM2MEM_PTSR_RXTEN(value)             (MEM2MEM_PTSR_RXTEN_Msk & ((value) << MEM2MEM_PTSR_RXTEN_Pos))
#define MEM2MEM_PTSR_TXTEN_Pos                _U_(8)                                               /**< (MEM2MEM_PTSR) Transmitter Transfer Enable Position */
#define MEM2MEM_PTSR_TXTEN_Msk                (_U_(0x1) << MEM2MEM_PTSR_TXTEN_Pos)                 /**< (MEM2MEM_PTSR) Transmitter Transfer Enable Mask */
#define MEM2MEM_PTSR_TXTEN(value)             (MEM2MEM_PTSR_TXTEN_Msk & ((value) << MEM2MEM_PTSR_TXTEN_Pos))
#define MEM2MEM_PTSR_RXCBEN_Pos               _U_(16)                                              /**< (MEM2MEM_PTSR) Receiver Circular Buffer Enable Position */
#define MEM2MEM_PTSR_RXCBEN_Msk               (_U_(0x1) << MEM2MEM_PTSR_RXCBEN_Pos)                /**< (MEM2MEM_PTSR) Receiver Circular Buffer Enable Mask */
#define MEM2MEM_PTSR_RXCBEN(value)            (MEM2MEM_PTSR_RXCBEN_Msk & ((value) << MEM2MEM_PTSR_RXCBEN_Pos))
#define MEM2MEM_PTSR_TXCBEN_Pos               _U_(18)                                              /**< (MEM2MEM_PTSR) Transmitter Circular Buffer Enable Position */
#define MEM2MEM_PTSR_TXCBEN_Msk               (_U_(0x1) << MEM2MEM_PTSR_TXCBEN_Pos)                /**< (MEM2MEM_PTSR) Transmitter Circular Buffer Enable Mask */
#define MEM2MEM_PTSR_TXCBEN(value)            (MEM2MEM_PTSR_TXCBEN_Msk & ((value) << MEM2MEM_PTSR_TXCBEN_Pos))
#define MEM2MEM_PTSR_ERR_Pos                  _U_(24)                                              /**< (MEM2MEM_PTSR) Transfer Bus Error Position */
#define MEM2MEM_PTSR_ERR_Msk                  (_U_(0x1) << MEM2MEM_PTSR_ERR_Pos)                   /**< (MEM2MEM_PTSR) Transfer Bus Error Mask */
#define MEM2MEM_PTSR_ERR(value)               (MEM2MEM_PTSR_ERR_Msk & ((value) << MEM2MEM_PTSR_ERR_Pos))
#define MEM2MEM_PTSR_Msk                      _U_(0x01050101)                                      /**< (MEM2MEM_PTSR) Register Mask  */


/** \brief MEM2MEM register offsets definitions */
#define MEM2MEM_THR_REG_OFST           (0x00)              /**< (MEM2MEM_THR) Memory to Memory Transfer Holding Register Offset */
#define MEM2MEM_MR_REG_OFST            (0x04)              /**< (MEM2MEM_MR) Memory to Memory Mode Register Offset */
#define MEM2MEM_IER_REG_OFST           (0x08)              /**< (MEM2MEM_IER) Memory to Memory Interrupt Enable Register Offset */
#define MEM2MEM_IDR_REG_OFST           (0x0C)              /**< (MEM2MEM_IDR) Memory to Memory Interrupt Disable Register Offset */
#define MEM2MEM_IMR_REG_OFST           (0x10)              /**< (MEM2MEM_IMR) Memory to Memory Interrupt Mask Register Offset */
#define MEM2MEM_ISR_REG_OFST           (0x14)              /**< (MEM2MEM_ISR) Memory to Memory Interrupt Status Register Offset */
#define MEM2MEM_RPR_REG_OFST           (0x100)             /**< (MEM2MEM_RPR) Receive Pointer Register Offset */
#define MEM2MEM_RCR_REG_OFST           (0x104)             /**< (MEM2MEM_RCR) Receive Counter Register Offset */
#define MEM2MEM_TPR_REG_OFST           (0x108)             /**< (MEM2MEM_TPR) Transmit Pointer Register Offset */
#define MEM2MEM_TCR_REG_OFST           (0x10C)             /**< (MEM2MEM_TCR) Transmit Counter Register Offset */
#define MEM2MEM_RNPR_REG_OFST          (0x110)             /**< (MEM2MEM_RNPR) Receive Next Pointer Register Offset */
#define MEM2MEM_RNCR_REG_OFST          (0x114)             /**< (MEM2MEM_RNCR) Receive Next Counter Register Offset */
#define MEM2MEM_TNPR_REG_OFST          (0x118)             /**< (MEM2MEM_TNPR) Transmit Next Pointer Register Offset */
#define MEM2MEM_TNCR_REG_OFST          (0x11C)             /**< (MEM2MEM_TNCR) Transmit Next Counter Register Offset */
#define MEM2MEM_PTCR_REG_OFST          (0x120)             /**< (MEM2MEM_PTCR) Transfer Control Register Offset */
#define MEM2MEM_PTSR_REG_OFST          (0x124)             /**< (MEM2MEM_PTSR) Transfer Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MEM2MEM register API structure */
typedef struct
{
  __IO  uint32_t                       MEM2MEM_THR;        /**< Offset: 0x00 (R/W  32) Memory to Memory Transfer Holding Register */
  __IO  uint32_t                       MEM2MEM_MR;         /**< Offset: 0x04 (R/W  32) Memory to Memory Mode Register */
  __O   uint32_t                       MEM2MEM_IER;        /**< Offset: 0x08 ( /W  32) Memory to Memory Interrupt Enable Register */
  __O   uint32_t                       MEM2MEM_IDR;        /**< Offset: 0x0C ( /W  32) Memory to Memory Interrupt Disable Register */
  __I   uint32_t                       MEM2MEM_IMR;        /**< Offset: 0x10 (R/   32) Memory to Memory Interrupt Mask Register */
  __I   uint32_t                       MEM2MEM_ISR;        /**< Offset: 0x14 (R/   32) Memory to Memory Interrupt Status Register */
  __I   uint8_t                        Reserved1[0xE8];
  __IO  uint32_t                       MEM2MEM_RPR;        /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       MEM2MEM_RCR;        /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       MEM2MEM_TPR;        /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       MEM2MEM_TCR;        /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       MEM2MEM_RNPR;       /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       MEM2MEM_RNCR;       /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       MEM2MEM_TNPR;       /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       MEM2MEM_TNCR;       /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       MEM2MEM_PTCR;       /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       MEM2MEM_PTSR;       /**< Offset: 0x124 (R/   32) Transfer Status Register */
} mem2mem_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_MEM2MEM_COMPONENT_H_ */
