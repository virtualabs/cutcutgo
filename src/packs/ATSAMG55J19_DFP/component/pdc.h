/*
 * Component description for PDC
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
#ifndef _SAMG55_PDC_COMPONENT_H_
#define _SAMG55_PDC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PDC                                          */
/* ************************************************************************** */

/* -------- PDC_PERIPH_RPR : (PDC Offset: 0x00) (R/W 32) Receive Pointer Register -------- */
#define PDC_PERIPH_RPR_RXPTR_Pos              _U_(0)                                               /**< (PDC_PERIPH_RPR) Receive Pointer Register Position */
#define PDC_PERIPH_RPR_RXPTR_Msk              (_U_(0xFFFFFFFF) << PDC_PERIPH_RPR_RXPTR_Pos)        /**< (PDC_PERIPH_RPR) Receive Pointer Register Mask */
#define PDC_PERIPH_RPR_RXPTR(value)           (PDC_PERIPH_RPR_RXPTR_Msk & ((value) << PDC_PERIPH_RPR_RXPTR_Pos))
#define PDC_PERIPH_RPR_Msk                    _U_(0xFFFFFFFF)                                      /**< (PDC_PERIPH_RPR) Register Mask  */


/* -------- PDC_PERIPH_RCR : (PDC Offset: 0x04) (R/W 32) Receive Counter Register -------- */
#define PDC_PERIPH_RCR_RXCTR_Pos              _U_(0)                                               /**< (PDC_PERIPH_RCR) Receive Counter Register Position */
#define PDC_PERIPH_RCR_RXCTR_Msk              (_U_(0xFFFF) << PDC_PERIPH_RCR_RXCTR_Pos)            /**< (PDC_PERIPH_RCR) Receive Counter Register Mask */
#define PDC_PERIPH_RCR_RXCTR(value)           (PDC_PERIPH_RCR_RXCTR_Msk & ((value) << PDC_PERIPH_RCR_RXCTR_Pos))
#define PDC_PERIPH_RCR_Msk                    _U_(0x0000FFFF)                                      /**< (PDC_PERIPH_RCR) Register Mask  */


/* -------- PDC_PERIPH_TPR : (PDC Offset: 0x08) (R/W 32) Transmit Pointer Register -------- */
#define PDC_PERIPH_TPR_TXPTR_Pos              _U_(0)                                               /**< (PDC_PERIPH_TPR) Transmit Counter Register Position */
#define PDC_PERIPH_TPR_TXPTR_Msk              (_U_(0xFFFFFFFF) << PDC_PERIPH_TPR_TXPTR_Pos)        /**< (PDC_PERIPH_TPR) Transmit Counter Register Mask */
#define PDC_PERIPH_TPR_TXPTR(value)           (PDC_PERIPH_TPR_TXPTR_Msk & ((value) << PDC_PERIPH_TPR_TXPTR_Pos))
#define PDC_PERIPH_TPR_Msk                    _U_(0xFFFFFFFF)                                      /**< (PDC_PERIPH_TPR) Register Mask  */


/* -------- PDC_PERIPH_TCR : (PDC Offset: 0x0C) (R/W 32) Transmit Counter Register -------- */
#define PDC_PERIPH_TCR_TXCTR_Pos              _U_(0)                                               /**< (PDC_PERIPH_TCR) Transmit Counter Register Position */
#define PDC_PERIPH_TCR_TXCTR_Msk              (_U_(0xFFFF) << PDC_PERIPH_TCR_TXCTR_Pos)            /**< (PDC_PERIPH_TCR) Transmit Counter Register Mask */
#define PDC_PERIPH_TCR_TXCTR(value)           (PDC_PERIPH_TCR_TXCTR_Msk & ((value) << PDC_PERIPH_TCR_TXCTR_Pos))
#define PDC_PERIPH_TCR_Msk                    _U_(0x0000FFFF)                                      /**< (PDC_PERIPH_TCR) Register Mask  */


/* -------- PDC_PERIPH_RNPR : (PDC Offset: 0x10) (R/W 32) Receive Next Pointer Register -------- */
#define PDC_PERIPH_RNPR_RXNPTR_Pos            _U_(0)                                               /**< (PDC_PERIPH_RNPR) Receive Next Pointer Position */
#define PDC_PERIPH_RNPR_RXNPTR_Msk            (_U_(0xFFFFFFFF) << PDC_PERIPH_RNPR_RXNPTR_Pos)      /**< (PDC_PERIPH_RNPR) Receive Next Pointer Mask */
#define PDC_PERIPH_RNPR_RXNPTR(value)         (PDC_PERIPH_RNPR_RXNPTR_Msk & ((value) << PDC_PERIPH_RNPR_RXNPTR_Pos))
#define PDC_PERIPH_RNPR_Msk                   _U_(0xFFFFFFFF)                                      /**< (PDC_PERIPH_RNPR) Register Mask  */


/* -------- PDC_PERIPH_RNCR : (PDC Offset: 0x14) (R/W 32) Receive Next Counter Register -------- */
#define PDC_PERIPH_RNCR_RXNCTR_Pos            _U_(0)                                               /**< (PDC_PERIPH_RNCR) Receive Next Counter Position */
#define PDC_PERIPH_RNCR_RXNCTR_Msk            (_U_(0xFFFF) << PDC_PERIPH_RNCR_RXNCTR_Pos)          /**< (PDC_PERIPH_RNCR) Receive Next Counter Mask */
#define PDC_PERIPH_RNCR_RXNCTR(value)         (PDC_PERIPH_RNCR_RXNCTR_Msk & ((value) << PDC_PERIPH_RNCR_RXNCTR_Pos))
#define PDC_PERIPH_RNCR_Msk                   _U_(0x0000FFFF)                                      /**< (PDC_PERIPH_RNCR) Register Mask  */


/* -------- PDC_PERIPH_TNPR : (PDC Offset: 0x18) (R/W 32) Transmit Next Pointer Register -------- */
#define PDC_PERIPH_TNPR_TXNPTR_Pos            _U_(0)                                               /**< (PDC_PERIPH_TNPR) Transmit Next Pointer Position */
#define PDC_PERIPH_TNPR_TXNPTR_Msk            (_U_(0xFFFFFFFF) << PDC_PERIPH_TNPR_TXNPTR_Pos)      /**< (PDC_PERIPH_TNPR) Transmit Next Pointer Mask */
#define PDC_PERIPH_TNPR_TXNPTR(value)         (PDC_PERIPH_TNPR_TXNPTR_Msk & ((value) << PDC_PERIPH_TNPR_TXNPTR_Pos))
#define PDC_PERIPH_TNPR_Msk                   _U_(0xFFFFFFFF)                                      /**< (PDC_PERIPH_TNPR) Register Mask  */


/* -------- PDC_PERIPH_TNCR : (PDC Offset: 0x1C) (R/W 32) Transmit Next Counter Register -------- */
#define PDC_PERIPH_TNCR_TXNCTR_Pos            _U_(0)                                               /**< (PDC_PERIPH_TNCR) Transmit Counter Next Position */
#define PDC_PERIPH_TNCR_TXNCTR_Msk            (_U_(0xFFFF) << PDC_PERIPH_TNCR_TXNCTR_Pos)          /**< (PDC_PERIPH_TNCR) Transmit Counter Next Mask */
#define PDC_PERIPH_TNCR_TXNCTR(value)         (PDC_PERIPH_TNCR_TXNCTR_Msk & ((value) << PDC_PERIPH_TNCR_TXNCTR_Pos))
#define PDC_PERIPH_TNCR_Msk                   _U_(0x0000FFFF)                                      /**< (PDC_PERIPH_TNCR) Register Mask  */


/* -------- PDC_PERIPH_PTCR : (PDC Offset: 0x20) ( /W 32) Transfer Control Register -------- */
#define PDC_PERIPH_PTCR_RXTEN_Pos             _U_(0)                                               /**< (PDC_PERIPH_PTCR) Receiver Transfer Enable Position */
#define PDC_PERIPH_PTCR_RXTEN_Msk             (_U_(0x1) << PDC_PERIPH_PTCR_RXTEN_Pos)              /**< (PDC_PERIPH_PTCR) Receiver Transfer Enable Mask */
#define PDC_PERIPH_PTCR_RXTEN(value)          (PDC_PERIPH_PTCR_RXTEN_Msk & ((value) << PDC_PERIPH_PTCR_RXTEN_Pos))
#define PDC_PERIPH_PTCR_RXTDIS_Pos            _U_(1)                                               /**< (PDC_PERIPH_PTCR) Receiver Transfer Disable Position */
#define PDC_PERIPH_PTCR_RXTDIS_Msk            (_U_(0x1) << PDC_PERIPH_PTCR_RXTDIS_Pos)             /**< (PDC_PERIPH_PTCR) Receiver Transfer Disable Mask */
#define PDC_PERIPH_PTCR_RXTDIS(value)         (PDC_PERIPH_PTCR_RXTDIS_Msk & ((value) << PDC_PERIPH_PTCR_RXTDIS_Pos))
#define PDC_PERIPH_PTCR_TXTEN_Pos             _U_(8)                                               /**< (PDC_PERIPH_PTCR) Transmitter Transfer Enable Position */
#define PDC_PERIPH_PTCR_TXTEN_Msk             (_U_(0x1) << PDC_PERIPH_PTCR_TXTEN_Pos)              /**< (PDC_PERIPH_PTCR) Transmitter Transfer Enable Mask */
#define PDC_PERIPH_PTCR_TXTEN(value)          (PDC_PERIPH_PTCR_TXTEN_Msk & ((value) << PDC_PERIPH_PTCR_TXTEN_Pos))
#define PDC_PERIPH_PTCR_TXTDIS_Pos            _U_(9)                                               /**< (PDC_PERIPH_PTCR) Transmitter Transfer Disable Position */
#define PDC_PERIPH_PTCR_TXTDIS_Msk            (_U_(0x1) << PDC_PERIPH_PTCR_TXTDIS_Pos)             /**< (PDC_PERIPH_PTCR) Transmitter Transfer Disable Mask */
#define PDC_PERIPH_PTCR_TXTDIS(value)         (PDC_PERIPH_PTCR_TXTDIS_Msk & ((value) << PDC_PERIPH_PTCR_TXTDIS_Pos))
#define PDC_PERIPH_PTCR_RXCBEN_Pos            _U_(16)                                              /**< (PDC_PERIPH_PTCR) Receiver Circular Buffer Enable Position */
#define PDC_PERIPH_PTCR_RXCBEN_Msk            (_U_(0x1) << PDC_PERIPH_PTCR_RXCBEN_Pos)             /**< (PDC_PERIPH_PTCR) Receiver Circular Buffer Enable Mask */
#define PDC_PERIPH_PTCR_RXCBEN(value)         (PDC_PERIPH_PTCR_RXCBEN_Msk & ((value) << PDC_PERIPH_PTCR_RXCBEN_Pos))
#define PDC_PERIPH_PTCR_RXCBDIS_Pos           _U_(17)                                              /**< (PDC_PERIPH_PTCR) Receiver Circular Buffer Disable Position */
#define PDC_PERIPH_PTCR_RXCBDIS_Msk           (_U_(0x1) << PDC_PERIPH_PTCR_RXCBDIS_Pos)            /**< (PDC_PERIPH_PTCR) Receiver Circular Buffer Disable Mask */
#define PDC_PERIPH_PTCR_RXCBDIS(value)        (PDC_PERIPH_PTCR_RXCBDIS_Msk & ((value) << PDC_PERIPH_PTCR_RXCBDIS_Pos))
#define PDC_PERIPH_PTCR_TXCBEN_Pos            _U_(18)                                              /**< (PDC_PERIPH_PTCR) Transmitter Circular Buffer Enable Position */
#define PDC_PERIPH_PTCR_TXCBEN_Msk            (_U_(0x1) << PDC_PERIPH_PTCR_TXCBEN_Pos)             /**< (PDC_PERIPH_PTCR) Transmitter Circular Buffer Enable Mask */
#define PDC_PERIPH_PTCR_TXCBEN(value)         (PDC_PERIPH_PTCR_TXCBEN_Msk & ((value) << PDC_PERIPH_PTCR_TXCBEN_Pos))
#define PDC_PERIPH_PTCR_TXCBDIS_Pos           _U_(19)                                              /**< (PDC_PERIPH_PTCR) Transmitter Circular Buffer Disable Position */
#define PDC_PERIPH_PTCR_TXCBDIS_Msk           (_U_(0x1) << PDC_PERIPH_PTCR_TXCBDIS_Pos)            /**< (PDC_PERIPH_PTCR) Transmitter Circular Buffer Disable Mask */
#define PDC_PERIPH_PTCR_TXCBDIS(value)        (PDC_PERIPH_PTCR_TXCBDIS_Msk & ((value) << PDC_PERIPH_PTCR_TXCBDIS_Pos))
#define PDC_PERIPH_PTCR_ERRCLR_Pos            _U_(24)                                              /**< (PDC_PERIPH_PTCR) Transfer Bus Error Clear Position */
#define PDC_PERIPH_PTCR_ERRCLR_Msk            (_U_(0x1) << PDC_PERIPH_PTCR_ERRCLR_Pos)             /**< (PDC_PERIPH_PTCR) Transfer Bus Error Clear Mask */
#define PDC_PERIPH_PTCR_ERRCLR(value)         (PDC_PERIPH_PTCR_ERRCLR_Msk & ((value) << PDC_PERIPH_PTCR_ERRCLR_Pos))
#define PDC_PERIPH_PTCR_Msk                   _U_(0x010F0303)                                      /**< (PDC_PERIPH_PTCR) Register Mask  */


/* -------- PDC_PERIPH_PTSR : (PDC Offset: 0x24) ( R/ 32) Transfer Status Register -------- */
#define PDC_PERIPH_PTSR_RXTEN_Pos             _U_(0)                                               /**< (PDC_PERIPH_PTSR) Receiver Transfer Enable Position */
#define PDC_PERIPH_PTSR_RXTEN_Msk             (_U_(0x1) << PDC_PERIPH_PTSR_RXTEN_Pos)              /**< (PDC_PERIPH_PTSR) Receiver Transfer Enable Mask */
#define PDC_PERIPH_PTSR_RXTEN(value)          (PDC_PERIPH_PTSR_RXTEN_Msk & ((value) << PDC_PERIPH_PTSR_RXTEN_Pos))
#define PDC_PERIPH_PTSR_TXTEN_Pos             _U_(8)                                               /**< (PDC_PERIPH_PTSR) Transmitter Transfer Enable Position */
#define PDC_PERIPH_PTSR_TXTEN_Msk             (_U_(0x1) << PDC_PERIPH_PTSR_TXTEN_Pos)              /**< (PDC_PERIPH_PTSR) Transmitter Transfer Enable Mask */
#define PDC_PERIPH_PTSR_TXTEN(value)          (PDC_PERIPH_PTSR_TXTEN_Msk & ((value) << PDC_PERIPH_PTSR_TXTEN_Pos))
#define PDC_PERIPH_PTSR_RXCBEN_Pos            _U_(16)                                              /**< (PDC_PERIPH_PTSR) Receiver Circular Buffer Enable Position */
#define PDC_PERIPH_PTSR_RXCBEN_Msk            (_U_(0x1) << PDC_PERIPH_PTSR_RXCBEN_Pos)             /**< (PDC_PERIPH_PTSR) Receiver Circular Buffer Enable Mask */
#define PDC_PERIPH_PTSR_RXCBEN(value)         (PDC_PERIPH_PTSR_RXCBEN_Msk & ((value) << PDC_PERIPH_PTSR_RXCBEN_Pos))
#define PDC_PERIPH_PTSR_TXCBEN_Pos            _U_(18)                                              /**< (PDC_PERIPH_PTSR) Transmitter Circular Buffer Enable Position */
#define PDC_PERIPH_PTSR_TXCBEN_Msk            (_U_(0x1) << PDC_PERIPH_PTSR_TXCBEN_Pos)             /**< (PDC_PERIPH_PTSR) Transmitter Circular Buffer Enable Mask */
#define PDC_PERIPH_PTSR_TXCBEN(value)         (PDC_PERIPH_PTSR_TXCBEN_Msk & ((value) << PDC_PERIPH_PTSR_TXCBEN_Pos))
#define PDC_PERIPH_PTSR_ERR_Pos               _U_(24)                                              /**< (PDC_PERIPH_PTSR) Transfer Bus Error Position */
#define PDC_PERIPH_PTSR_ERR_Msk               (_U_(0x1) << PDC_PERIPH_PTSR_ERR_Pos)                /**< (PDC_PERIPH_PTSR) Transfer Bus Error Mask */
#define PDC_PERIPH_PTSR_ERR(value)            (PDC_PERIPH_PTSR_ERR_Msk & ((value) << PDC_PERIPH_PTSR_ERR_Pos))
#define PDC_PERIPH_PTSR_Msk                   _U_(0x01050101)                                      /**< (PDC_PERIPH_PTSR) Register Mask  */


/** \brief PDC register offsets definitions */
#define PDC_PERIPH_RPR_REG_OFST        (0x00)              /**< (PDC_PERIPH_RPR) Receive Pointer Register Offset */
#define PDC_PERIPH_RCR_REG_OFST        (0x04)              /**< (PDC_PERIPH_RCR) Receive Counter Register Offset */
#define PDC_PERIPH_TPR_REG_OFST        (0x08)              /**< (PDC_PERIPH_TPR) Transmit Pointer Register Offset */
#define PDC_PERIPH_TCR_REG_OFST        (0x0C)              /**< (PDC_PERIPH_TCR) Transmit Counter Register Offset */
#define PDC_PERIPH_RNPR_REG_OFST       (0x10)              /**< (PDC_PERIPH_RNPR) Receive Next Pointer Register Offset */
#define PDC_PERIPH_RNCR_REG_OFST       (0x14)              /**< (PDC_PERIPH_RNCR) Receive Next Counter Register Offset */
#define PDC_PERIPH_TNPR_REG_OFST       (0x18)              /**< (PDC_PERIPH_TNPR) Transmit Next Pointer Register Offset */
#define PDC_PERIPH_TNCR_REG_OFST       (0x1C)              /**< (PDC_PERIPH_TNCR) Transmit Next Counter Register Offset */
#define PDC_PERIPH_PTCR_REG_OFST       (0x20)              /**< (PDC_PERIPH_PTCR) Transfer Control Register Offset */
#define PDC_PERIPH_PTSR_REG_OFST       (0x24)              /**< (PDC_PERIPH_PTSR) Transfer Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PDC register API structure */
typedef struct
{
  __IO  uint32_t                       PDC_PERIPH_RPR;     /**< Offset: 0x00 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       PDC_PERIPH_RCR;     /**< Offset: 0x04 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       PDC_PERIPH_TPR;     /**< Offset: 0x08 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       PDC_PERIPH_TCR;     /**< Offset: 0x0C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       PDC_PERIPH_RNPR;    /**< Offset: 0x10 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       PDC_PERIPH_RNCR;    /**< Offset: 0x14 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       PDC_PERIPH_TNPR;    /**< Offset: 0x18 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       PDC_PERIPH_TNCR;    /**< Offset: 0x1C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       PDC_PERIPH_PTCR;    /**< Offset: 0x20 ( /W  32) Transfer Control Register */
  __I   uint32_t                       PDC_PERIPH_PTSR;    /**< Offset: 0x24 (R/   32) Transfer Status Register */
} pdc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_PDC_COMPONENT_H_ */
