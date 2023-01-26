/*
 * Component description for SPI
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
#ifndef _SAMG55_SPI_COMPONENT_H_
#define _SAMG55_SPI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SPI                                          */
/* ************************************************************************** */

/* -------- SPI_CR : (SPI Offset: 0x00) ( /W 32) SPI Control Register -------- */
#define SPI_CR_SPIEN_Pos                      _U_(0)                                               /**< (SPI_CR) SPI Enable Position */
#define SPI_CR_SPIEN_Msk                      (_U_(0x1) << SPI_CR_SPIEN_Pos)                       /**< (SPI_CR) SPI Enable Mask */
#define SPI_CR_SPIEN(value)                   (SPI_CR_SPIEN_Msk & ((value) << SPI_CR_SPIEN_Pos))  
#define SPI_CR_SPIDIS_Pos                     _U_(1)                                               /**< (SPI_CR) SPI Disable Position */
#define SPI_CR_SPIDIS_Msk                     (_U_(0x1) << SPI_CR_SPIDIS_Pos)                      /**< (SPI_CR) SPI Disable Mask */
#define SPI_CR_SPIDIS(value)                  (SPI_CR_SPIDIS_Msk & ((value) << SPI_CR_SPIDIS_Pos))
#define SPI_CR_SWRST_Pos                      _U_(7)                                               /**< (SPI_CR) SPI Software Reset Position */
#define SPI_CR_SWRST_Msk                      (_U_(0x1) << SPI_CR_SWRST_Pos)                       /**< (SPI_CR) SPI Software Reset Mask */
#define SPI_CR_SWRST(value)                   (SPI_CR_SWRST_Msk & ((value) << SPI_CR_SWRST_Pos))  
#define SPI_CR_REQCLR_Pos                     _U_(12)                                              /**< (SPI_CR) Request to Clear the Comparison Trigger Position */
#define SPI_CR_REQCLR_Msk                     (_U_(0x1) << SPI_CR_REQCLR_Pos)                      /**< (SPI_CR) Request to Clear the Comparison Trigger Mask */
#define SPI_CR_REQCLR(value)                  (SPI_CR_REQCLR_Msk & ((value) << SPI_CR_REQCLR_Pos))
#define SPI_CR_LASTXFER_Pos                   _U_(24)                                              /**< (SPI_CR) Last Transfer Position */
#define SPI_CR_LASTXFER_Msk                   (_U_(0x1) << SPI_CR_LASTXFER_Pos)                    /**< (SPI_CR) Last Transfer Mask */
#define SPI_CR_LASTXFER(value)                (SPI_CR_LASTXFER_Msk & ((value) << SPI_CR_LASTXFER_Pos))
#define SPI_CR_Msk                            _U_(0x01001083)                                      /**< (SPI_CR) Register Mask  */


/* -------- SPI_MR : (SPI Offset: 0x04) (R/W 32) SPI Mode Register -------- */
#define SPI_MR_MSTR_Pos                       _U_(0)                                               /**< (SPI_MR) Master/Slave Mode Position */
#define SPI_MR_MSTR_Msk                       (_U_(0x1) << SPI_MR_MSTR_Pos)                        /**< (SPI_MR) Master/Slave Mode Mask */
#define SPI_MR_MSTR(value)                    (SPI_MR_MSTR_Msk & ((value) << SPI_MR_MSTR_Pos))    
#define SPI_MR_PS_Pos                         _U_(1)                                               /**< (SPI_MR) Peripheral Select Position */
#define SPI_MR_PS_Msk                         (_U_(0x1) << SPI_MR_PS_Pos)                          /**< (SPI_MR) Peripheral Select Mask */
#define SPI_MR_PS(value)                      (SPI_MR_PS_Msk & ((value) << SPI_MR_PS_Pos))        
#define SPI_MR_PCSDEC_Pos                     _U_(2)                                               /**< (SPI_MR) Chip Select Decode Position */
#define SPI_MR_PCSDEC_Msk                     (_U_(0x1) << SPI_MR_PCSDEC_Pos)                      /**< (SPI_MR) Chip Select Decode Mask */
#define SPI_MR_PCSDEC(value)                  (SPI_MR_PCSDEC_Msk & ((value) << SPI_MR_PCSDEC_Pos))
#define SPI_MR_BRSRCCLK_Pos                   _U_(3)                                               /**< (SPI_MR) Bit Rate Source Clock Position */
#define SPI_MR_BRSRCCLK_Msk                   (_U_(0x1) << SPI_MR_BRSRCCLK_Pos)                    /**< (SPI_MR) Bit Rate Source Clock Mask */
#define SPI_MR_BRSRCCLK(value)                (SPI_MR_BRSRCCLK_Msk & ((value) << SPI_MR_BRSRCCLK_Pos))
#define   SPI_MR_BRSRCCLK_PERIPH_CLK_Val      _U_(0x0)                                             /**< (SPI_MR) The peripheral clock is the source clock for the bit rate generation.  */
#define   SPI_MR_BRSRCCLK_PMC_PCK_Val         _U_(0x1)                                             /**< (SPI_MR) PMC PCKx is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define SPI_MR_BRSRCCLK_PERIPH_CLK            (SPI_MR_BRSRCCLK_PERIPH_CLK_Val << SPI_MR_BRSRCCLK_Pos) /**< (SPI_MR) The peripheral clock is the source clock for the bit rate generation. Position  */
#define SPI_MR_BRSRCCLK_PMC_PCK               (SPI_MR_BRSRCCLK_PMC_PCK_Val << SPI_MR_BRSRCCLK_Pos) /**< (SPI_MR) PMC PCKx is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position  */
#define SPI_MR_MODFDIS_Pos                    _U_(4)                                               /**< (SPI_MR) Mode Fault Detection Position */
#define SPI_MR_MODFDIS_Msk                    (_U_(0x1) << SPI_MR_MODFDIS_Pos)                     /**< (SPI_MR) Mode Fault Detection Mask */
#define SPI_MR_MODFDIS(value)                 (SPI_MR_MODFDIS_Msk & ((value) << SPI_MR_MODFDIS_Pos))
#define SPI_MR_WDRBT_Pos                      _U_(5)                                               /**< (SPI_MR) Wait Data Read Before Transfer Position */
#define SPI_MR_WDRBT_Msk                      (_U_(0x1) << SPI_MR_WDRBT_Pos)                       /**< (SPI_MR) Wait Data Read Before Transfer Mask */
#define SPI_MR_WDRBT(value)                   (SPI_MR_WDRBT_Msk & ((value) << SPI_MR_WDRBT_Pos))  
#define SPI_MR_LLB_Pos                        _U_(7)                                               /**< (SPI_MR) Local Loopback Enable Position */
#define SPI_MR_LLB_Msk                        (_U_(0x1) << SPI_MR_LLB_Pos)                         /**< (SPI_MR) Local Loopback Enable Mask */
#define SPI_MR_LLB(value)                     (SPI_MR_LLB_Msk & ((value) << SPI_MR_LLB_Pos))      
#define SPI_MR_CMPMODE_Pos                    _U_(12)                                              /**< (SPI_MR) Comparison Mode Position */
#define SPI_MR_CMPMODE_Msk                    (_U_(0x1) << SPI_MR_CMPMODE_Pos)                     /**< (SPI_MR) Comparison Mode Mask */
#define SPI_MR_CMPMODE(value)                 (SPI_MR_CMPMODE_Msk & ((value) << SPI_MR_CMPMODE_Pos))
#define   SPI_MR_CMPMODE_FLAG_ONLY_Val        _U_(0x0)                                             /**< (SPI_MR) Any character is received and comparison function drives CMP flag.  */
#define   SPI_MR_CMPMODE_START_CONDITION_Val  _U_(0x1)                                             /**< (SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set.  */
#define SPI_MR_CMPMODE_FLAG_ONLY              (SPI_MR_CMPMODE_FLAG_ONLY_Val << SPI_MR_CMPMODE_Pos) /**< (SPI_MR) Any character is received and comparison function drives CMP flag. Position  */
#define SPI_MR_CMPMODE_START_CONDITION        (SPI_MR_CMPMODE_START_CONDITION_Val << SPI_MR_CMPMODE_Pos) /**< (SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set. Position  */
#define SPI_MR_PCS_Pos                        _U_(16)                                              /**< (SPI_MR) Peripheral Chip Select Position */
#define SPI_MR_PCS_Msk                        (_U_(0x3) << SPI_MR_PCS_Pos)                         /**< (SPI_MR) Peripheral Chip Select Mask */
#define SPI_MR_PCS(value)                     (SPI_MR_PCS_Msk & ((value) << SPI_MR_PCS_Pos))      
#define SPI_MR_DLYBCS_Pos                     _U_(24)                                              /**< (SPI_MR) Delay Between Chip Selects Position */
#define SPI_MR_DLYBCS_Msk                     (_U_(0xFF) << SPI_MR_DLYBCS_Pos)                     /**< (SPI_MR) Delay Between Chip Selects Mask */
#define SPI_MR_DLYBCS(value)                  (SPI_MR_DLYBCS_Msk & ((value) << SPI_MR_DLYBCS_Pos))
#define SPI_MR_Msk                            _U_(0xFF0310BF)                                      /**< (SPI_MR) Register Mask  */


/* -------- SPI_RDR : (SPI Offset: 0x08) ( R/ 32) SPI Receive Data Register -------- */
#define SPI_RDR_RD_Pos                        _U_(0)                                               /**< (SPI_RDR) Receive Data Position */
#define SPI_RDR_RD_Msk                        (_U_(0xFFFF) << SPI_RDR_RD_Pos)                      /**< (SPI_RDR) Receive Data Mask */
#define SPI_RDR_RD(value)                     (SPI_RDR_RD_Msk & ((value) << SPI_RDR_RD_Pos))      
#define SPI_RDR_PCS_Pos                       _U_(16)                                              /**< (SPI_RDR) Peripheral Chip Select Position */
#define SPI_RDR_PCS_Msk                       (_U_(0xF) << SPI_RDR_PCS_Pos)                        /**< (SPI_RDR) Peripheral Chip Select Mask */
#define SPI_RDR_PCS(value)                    (SPI_RDR_PCS_Msk & ((value) << SPI_RDR_PCS_Pos))    
#define SPI_RDR_Msk                           _U_(0x000FFFFF)                                      /**< (SPI_RDR) Register Mask  */


/* -------- SPI_TDR : (SPI Offset: 0x0C) ( /W 32) SPI Transmit Data Register -------- */
#define SPI_TDR_TD_Pos                        _U_(0)                                               /**< (SPI_TDR) Transmit Data Position */
#define SPI_TDR_TD_Msk                        (_U_(0xFFFF) << SPI_TDR_TD_Pos)                      /**< (SPI_TDR) Transmit Data Mask */
#define SPI_TDR_TD(value)                     (SPI_TDR_TD_Msk & ((value) << SPI_TDR_TD_Pos))      
#define SPI_TDR_PCS_Pos                       _U_(16)                                              /**< (SPI_TDR) Peripheral Chip Select Position */
#define SPI_TDR_PCS_Msk                       (_U_(0xF) << SPI_TDR_PCS_Pos)                        /**< (SPI_TDR) Peripheral Chip Select Mask */
#define SPI_TDR_PCS(value)                    (SPI_TDR_PCS_Msk & ((value) << SPI_TDR_PCS_Pos))    
#define SPI_TDR_LASTXFER_Pos                  _U_(24)                                              /**< (SPI_TDR) Last Transfer Position */
#define SPI_TDR_LASTXFER_Msk                  (_U_(0x1) << SPI_TDR_LASTXFER_Pos)                   /**< (SPI_TDR) Last Transfer Mask */
#define SPI_TDR_LASTXFER(value)               (SPI_TDR_LASTXFER_Msk & ((value) << SPI_TDR_LASTXFER_Pos))
#define SPI_TDR_Msk                           _U_(0x010FFFFF)                                      /**< (SPI_TDR) Register Mask  */


/* -------- SPI_SR : (SPI Offset: 0x10) ( R/ 32) SPI Status Register -------- */
#define SPI_SR_RDRF_Pos                       _U_(0)                                               /**< (SPI_SR) Receive Data Register Full (cleared by reading SPI_RDR) Position */
#define SPI_SR_RDRF_Msk                       (_U_(0x1) << SPI_SR_RDRF_Pos)                        /**< (SPI_SR) Receive Data Register Full (cleared by reading SPI_RDR) Mask */
#define SPI_SR_RDRF(value)                    (SPI_SR_RDRF_Msk & ((value) << SPI_SR_RDRF_Pos))    
#define SPI_SR_TDRE_Pos                       _U_(1)                                               /**< (SPI_SR) Transmit Data Register Empty (cleared by writing SPI_TDR) Position */
#define SPI_SR_TDRE_Msk                       (_U_(0x1) << SPI_SR_TDRE_Pos)                        /**< (SPI_SR) Transmit Data Register Empty (cleared by writing SPI_TDR) Mask */
#define SPI_SR_TDRE(value)                    (SPI_SR_TDRE_Msk & ((value) << SPI_SR_TDRE_Pos))    
#define SPI_SR_MODF_Pos                       _U_(2)                                               /**< (SPI_SR) Mode Fault Error (cleared on read) Position */
#define SPI_SR_MODF_Msk                       (_U_(0x1) << SPI_SR_MODF_Pos)                        /**< (SPI_SR) Mode Fault Error (cleared on read) Mask */
#define SPI_SR_MODF(value)                    (SPI_SR_MODF_Msk & ((value) << SPI_SR_MODF_Pos))    
#define SPI_SR_OVRES_Pos                      _U_(3)                                               /**< (SPI_SR) Overrun Error Status (cleared on read) Position */
#define SPI_SR_OVRES_Msk                      (_U_(0x1) << SPI_SR_OVRES_Pos)                       /**< (SPI_SR) Overrun Error Status (cleared on read) Mask */
#define SPI_SR_OVRES(value)                   (SPI_SR_OVRES_Msk & ((value) << SPI_SR_OVRES_Pos))  
#define SPI_SR_ENDRX_Pos                      _U_(4)                                               /**< (SPI_SR) End of RX buffer (cleared by writing SPI_RCR or SPI_RNCR) Position */
#define SPI_SR_ENDRX_Msk                      (_U_(0x1) << SPI_SR_ENDRX_Pos)                       /**< (SPI_SR) End of RX buffer (cleared by writing SPI_RCR or SPI_RNCR) Mask */
#define SPI_SR_ENDRX(value)                   (SPI_SR_ENDRX_Msk & ((value) << SPI_SR_ENDRX_Pos))  
#define SPI_SR_ENDTX_Pos                      _U_(5)                                               /**< (SPI_SR) End of TX buffer (cleared by writing SPI_TCR or SPI_TNCR) Position */
#define SPI_SR_ENDTX_Msk                      (_U_(0x1) << SPI_SR_ENDTX_Pos)                       /**< (SPI_SR) End of TX buffer (cleared by writing SPI_TCR or SPI_TNCR) Mask */
#define SPI_SR_ENDTX(value)                   (SPI_SR_ENDTX_Msk & ((value) << SPI_SR_ENDTX_Pos))  
#define SPI_SR_RXBUFF_Pos                     _U_(6)                                               /**< (SPI_SR) RX Buffer Full (cleared by writing SPI_RCR or SPI_RNCR) Position */
#define SPI_SR_RXBUFF_Msk                     (_U_(0x1) << SPI_SR_RXBUFF_Pos)                      /**< (SPI_SR) RX Buffer Full (cleared by writing SPI_RCR or SPI_RNCR) Mask */
#define SPI_SR_RXBUFF(value)                  (SPI_SR_RXBUFF_Msk & ((value) << SPI_SR_RXBUFF_Pos))
#define SPI_SR_TXBUFE_Pos                     _U_(7)                                               /**< (SPI_SR) TX Buffer Empty (cleared by writing SPI_TCR or SPI_TNCR) Position */
#define SPI_SR_TXBUFE_Msk                     (_U_(0x1) << SPI_SR_TXBUFE_Pos)                      /**< (SPI_SR) TX Buffer Empty (cleared by writing SPI_TCR or SPI_TNCR) Mask */
#define SPI_SR_TXBUFE(value)                  (SPI_SR_TXBUFE_Msk & ((value) << SPI_SR_TXBUFE_Pos))
#define SPI_SR_NSSR_Pos                       _U_(8)                                               /**< (SPI_SR) NSS Rising (cleared on read) Position */
#define SPI_SR_NSSR_Msk                       (_U_(0x1) << SPI_SR_NSSR_Pos)                        /**< (SPI_SR) NSS Rising (cleared on read) Mask */
#define SPI_SR_NSSR(value)                    (SPI_SR_NSSR_Msk & ((value) << SPI_SR_NSSR_Pos))    
#define SPI_SR_TXEMPTY_Pos                    _U_(9)                                               /**< (SPI_SR) Transmission Registers Empty (cleared by writing SPI_TDR) Position */
#define SPI_SR_TXEMPTY_Msk                    (_U_(0x1) << SPI_SR_TXEMPTY_Pos)                     /**< (SPI_SR) Transmission Registers Empty (cleared by writing SPI_TDR) Mask */
#define SPI_SR_TXEMPTY(value)                 (SPI_SR_TXEMPTY_Msk & ((value) << SPI_SR_TXEMPTY_Pos))
#define SPI_SR_UNDES_Pos                      _U_(10)                                              /**< (SPI_SR) Underrun Error Status (slave mode only) (cleared on read) Position */
#define SPI_SR_UNDES_Msk                      (_U_(0x1) << SPI_SR_UNDES_Pos)                       /**< (SPI_SR) Underrun Error Status (slave mode only) (cleared on read) Mask */
#define SPI_SR_UNDES(value)                   (SPI_SR_UNDES_Msk & ((value) << SPI_SR_UNDES_Pos))  
#define SPI_SR_CMP_Pos                        _U_(11)                                              /**< (SPI_SR) Comparison Status (cleared on read) Position */
#define SPI_SR_CMP_Msk                        (_U_(0x1) << SPI_SR_CMP_Pos)                         /**< (SPI_SR) Comparison Status (cleared on read) Mask */
#define SPI_SR_CMP(value)                     (SPI_SR_CMP_Msk & ((value) << SPI_SR_CMP_Pos))      
#define SPI_SR_SPIENS_Pos                     _U_(16)                                              /**< (SPI_SR) SPI Enable Status Position */
#define SPI_SR_SPIENS_Msk                     (_U_(0x1) << SPI_SR_SPIENS_Pos)                      /**< (SPI_SR) SPI Enable Status Mask */
#define SPI_SR_SPIENS(value)                  (SPI_SR_SPIENS_Msk & ((value) << SPI_SR_SPIENS_Pos))
#define SPI_SR_Msk                            _U_(0x00010FFF)                                      /**< (SPI_SR) Register Mask  */


/* -------- SPI_IER : (SPI Offset: 0x14) ( /W 32) SPI Interrupt Enable Register -------- */
#define SPI_IER_RDRF_Pos                      _U_(0)                                               /**< (SPI_IER) Receive Data Register Full Interrupt Enable Position */
#define SPI_IER_RDRF_Msk                      (_U_(0x1) << SPI_IER_RDRF_Pos)                       /**< (SPI_IER) Receive Data Register Full Interrupt Enable Mask */
#define SPI_IER_RDRF(value)                   (SPI_IER_RDRF_Msk & ((value) << SPI_IER_RDRF_Pos))  
#define SPI_IER_TDRE_Pos                      _U_(1)                                               /**< (SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Position */
#define SPI_IER_TDRE_Msk                      (_U_(0x1) << SPI_IER_TDRE_Pos)                       /**< (SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Mask */
#define SPI_IER_TDRE(value)                   (SPI_IER_TDRE_Msk & ((value) << SPI_IER_TDRE_Pos))  
#define SPI_IER_MODF_Pos                      _U_(2)                                               /**< (SPI_IER) Mode Fault Error Interrupt Enable Position */
#define SPI_IER_MODF_Msk                      (_U_(0x1) << SPI_IER_MODF_Pos)                       /**< (SPI_IER) Mode Fault Error Interrupt Enable Mask */
#define SPI_IER_MODF(value)                   (SPI_IER_MODF_Msk & ((value) << SPI_IER_MODF_Pos))  
#define SPI_IER_OVRES_Pos                     _U_(3)                                               /**< (SPI_IER) Overrun Error Interrupt Enable Position */
#define SPI_IER_OVRES_Msk                     (_U_(0x1) << SPI_IER_OVRES_Pos)                      /**< (SPI_IER) Overrun Error Interrupt Enable Mask */
#define SPI_IER_OVRES(value)                  (SPI_IER_OVRES_Msk & ((value) << SPI_IER_OVRES_Pos))
#define SPI_IER_ENDRX_Pos                     _U_(4)                                               /**< (SPI_IER) End of Receive Buffer Interrupt Enable Position */
#define SPI_IER_ENDRX_Msk                     (_U_(0x1) << SPI_IER_ENDRX_Pos)                      /**< (SPI_IER) End of Receive Buffer Interrupt Enable Mask */
#define SPI_IER_ENDRX(value)                  (SPI_IER_ENDRX_Msk & ((value) << SPI_IER_ENDRX_Pos))
#define SPI_IER_ENDTX_Pos                     _U_(5)                                               /**< (SPI_IER) End of Transmit Buffer Interrupt Enable Position */
#define SPI_IER_ENDTX_Msk                     (_U_(0x1) << SPI_IER_ENDTX_Pos)                      /**< (SPI_IER) End of Transmit Buffer Interrupt Enable Mask */
#define SPI_IER_ENDTX(value)                  (SPI_IER_ENDTX_Msk & ((value) << SPI_IER_ENDTX_Pos))
#define SPI_IER_RXBUFF_Pos                    _U_(6)                                               /**< (SPI_IER) Receive Buffer Full Interrupt Enable Position */
#define SPI_IER_RXBUFF_Msk                    (_U_(0x1) << SPI_IER_RXBUFF_Pos)                     /**< (SPI_IER) Receive Buffer Full Interrupt Enable Mask */
#define SPI_IER_RXBUFF(value)                 (SPI_IER_RXBUFF_Msk & ((value) << SPI_IER_RXBUFF_Pos))
#define SPI_IER_TXBUFE_Pos                    _U_(7)                                               /**< (SPI_IER) Transmit Buffer Empty Interrupt Enable Position */
#define SPI_IER_TXBUFE_Msk                    (_U_(0x1) << SPI_IER_TXBUFE_Pos)                     /**< (SPI_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define SPI_IER_TXBUFE(value)                 (SPI_IER_TXBUFE_Msk & ((value) << SPI_IER_TXBUFE_Pos))
#define SPI_IER_NSSR_Pos                      _U_(8)                                               /**< (SPI_IER) NSS Rising Interrupt Enable Position */
#define SPI_IER_NSSR_Msk                      (_U_(0x1) << SPI_IER_NSSR_Pos)                       /**< (SPI_IER) NSS Rising Interrupt Enable Mask */
#define SPI_IER_NSSR(value)                   (SPI_IER_NSSR_Msk & ((value) << SPI_IER_NSSR_Pos))  
#define SPI_IER_TXEMPTY_Pos                   _U_(9)                                               /**< (SPI_IER) Transmission Registers Empty Enable Position */
#define SPI_IER_TXEMPTY_Msk                   (_U_(0x1) << SPI_IER_TXEMPTY_Pos)                    /**< (SPI_IER) Transmission Registers Empty Enable Mask */
#define SPI_IER_TXEMPTY(value)                (SPI_IER_TXEMPTY_Msk & ((value) << SPI_IER_TXEMPTY_Pos))
#define SPI_IER_UNDES_Pos                     _U_(10)                                              /**< (SPI_IER) Underrun Error Interrupt Enable Position */
#define SPI_IER_UNDES_Msk                     (_U_(0x1) << SPI_IER_UNDES_Pos)                      /**< (SPI_IER) Underrun Error Interrupt Enable Mask */
#define SPI_IER_UNDES(value)                  (SPI_IER_UNDES_Msk & ((value) << SPI_IER_UNDES_Pos))
#define SPI_IER_CMP_Pos                       _U_(11)                                              /**< (SPI_IER) Comparison Interrupt Enable Position */
#define SPI_IER_CMP_Msk                       (_U_(0x1) << SPI_IER_CMP_Pos)                        /**< (SPI_IER) Comparison Interrupt Enable Mask */
#define SPI_IER_CMP(value)                    (SPI_IER_CMP_Msk & ((value) << SPI_IER_CMP_Pos))    
#define SPI_IER_Msk                           _U_(0x00000FFF)                                      /**< (SPI_IER) Register Mask  */


/* -------- SPI_IDR : (SPI Offset: 0x18) ( /W 32) SPI Interrupt Disable Register -------- */
#define SPI_IDR_RDRF_Pos                      _U_(0)                                               /**< (SPI_IDR) Receive Data Register Full Interrupt Disable Position */
#define SPI_IDR_RDRF_Msk                      (_U_(0x1) << SPI_IDR_RDRF_Pos)                       /**< (SPI_IDR) Receive Data Register Full Interrupt Disable Mask */
#define SPI_IDR_RDRF(value)                   (SPI_IDR_RDRF_Msk & ((value) << SPI_IDR_RDRF_Pos))  
#define SPI_IDR_TDRE_Pos                      _U_(1)                                               /**< (SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Position */
#define SPI_IDR_TDRE_Msk                      (_U_(0x1) << SPI_IDR_TDRE_Pos)                       /**< (SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Mask */
#define SPI_IDR_TDRE(value)                   (SPI_IDR_TDRE_Msk & ((value) << SPI_IDR_TDRE_Pos))  
#define SPI_IDR_MODF_Pos                      _U_(2)                                               /**< (SPI_IDR) Mode Fault Error Interrupt Disable Position */
#define SPI_IDR_MODF_Msk                      (_U_(0x1) << SPI_IDR_MODF_Pos)                       /**< (SPI_IDR) Mode Fault Error Interrupt Disable Mask */
#define SPI_IDR_MODF(value)                   (SPI_IDR_MODF_Msk & ((value) << SPI_IDR_MODF_Pos))  
#define SPI_IDR_OVRES_Pos                     _U_(3)                                               /**< (SPI_IDR) Overrun Error Interrupt Disable Position */
#define SPI_IDR_OVRES_Msk                     (_U_(0x1) << SPI_IDR_OVRES_Pos)                      /**< (SPI_IDR) Overrun Error Interrupt Disable Mask */
#define SPI_IDR_OVRES(value)                  (SPI_IDR_OVRES_Msk & ((value) << SPI_IDR_OVRES_Pos))
#define SPI_IDR_ENDRX_Pos                     _U_(4)                                               /**< (SPI_IDR) End of Receive Buffer Interrupt Disable Position */
#define SPI_IDR_ENDRX_Msk                     (_U_(0x1) << SPI_IDR_ENDRX_Pos)                      /**< (SPI_IDR) End of Receive Buffer Interrupt Disable Mask */
#define SPI_IDR_ENDRX(value)                  (SPI_IDR_ENDRX_Msk & ((value) << SPI_IDR_ENDRX_Pos))
#define SPI_IDR_ENDTX_Pos                     _U_(5)                                               /**< (SPI_IDR) End of Transmit Buffer Interrupt Disable Position */
#define SPI_IDR_ENDTX_Msk                     (_U_(0x1) << SPI_IDR_ENDTX_Pos)                      /**< (SPI_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define SPI_IDR_ENDTX(value)                  (SPI_IDR_ENDTX_Msk & ((value) << SPI_IDR_ENDTX_Pos))
#define SPI_IDR_RXBUFF_Pos                    _U_(6)                                               /**< (SPI_IDR) Receive Buffer Full Interrupt Disable Position */
#define SPI_IDR_RXBUFF_Msk                    (_U_(0x1) << SPI_IDR_RXBUFF_Pos)                     /**< (SPI_IDR) Receive Buffer Full Interrupt Disable Mask */
#define SPI_IDR_RXBUFF(value)                 (SPI_IDR_RXBUFF_Msk & ((value) << SPI_IDR_RXBUFF_Pos))
#define SPI_IDR_TXBUFE_Pos                    _U_(7)                                               /**< (SPI_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define SPI_IDR_TXBUFE_Msk                    (_U_(0x1) << SPI_IDR_TXBUFE_Pos)                     /**< (SPI_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define SPI_IDR_TXBUFE(value)                 (SPI_IDR_TXBUFE_Msk & ((value) << SPI_IDR_TXBUFE_Pos))
#define SPI_IDR_NSSR_Pos                      _U_(8)                                               /**< (SPI_IDR) NSS Rising Interrupt Disable Position */
#define SPI_IDR_NSSR_Msk                      (_U_(0x1) << SPI_IDR_NSSR_Pos)                       /**< (SPI_IDR) NSS Rising Interrupt Disable Mask */
#define SPI_IDR_NSSR(value)                   (SPI_IDR_NSSR_Msk & ((value) << SPI_IDR_NSSR_Pos))  
#define SPI_IDR_TXEMPTY_Pos                   _U_(9)                                               /**< (SPI_IDR) Transmission Registers Empty Disable Position */
#define SPI_IDR_TXEMPTY_Msk                   (_U_(0x1) << SPI_IDR_TXEMPTY_Pos)                    /**< (SPI_IDR) Transmission Registers Empty Disable Mask */
#define SPI_IDR_TXEMPTY(value)                (SPI_IDR_TXEMPTY_Msk & ((value) << SPI_IDR_TXEMPTY_Pos))
#define SPI_IDR_UNDES_Pos                     _U_(10)                                              /**< (SPI_IDR) Underrun Error Interrupt Disable Position */
#define SPI_IDR_UNDES_Msk                     (_U_(0x1) << SPI_IDR_UNDES_Pos)                      /**< (SPI_IDR) Underrun Error Interrupt Disable Mask */
#define SPI_IDR_UNDES(value)                  (SPI_IDR_UNDES_Msk & ((value) << SPI_IDR_UNDES_Pos))
#define SPI_IDR_CMP_Pos                       _U_(11)                                              /**< (SPI_IDR) Comparison Interrupt Disable Position */
#define SPI_IDR_CMP_Msk                       (_U_(0x1) << SPI_IDR_CMP_Pos)                        /**< (SPI_IDR) Comparison Interrupt Disable Mask */
#define SPI_IDR_CMP(value)                    (SPI_IDR_CMP_Msk & ((value) << SPI_IDR_CMP_Pos))    
#define SPI_IDR_Msk                           _U_(0x00000FFF)                                      /**< (SPI_IDR) Register Mask  */


/* -------- SPI_IMR : (SPI Offset: 0x1C) ( R/ 32) SPI Interrupt Mask Register -------- */
#define SPI_IMR_RDRF_Pos                      _U_(0)                                               /**< (SPI_IMR) Receive Data Register Full Interrupt Mask Position */
#define SPI_IMR_RDRF_Msk                      (_U_(0x1) << SPI_IMR_RDRF_Pos)                       /**< (SPI_IMR) Receive Data Register Full Interrupt Mask Mask */
#define SPI_IMR_RDRF(value)                   (SPI_IMR_RDRF_Msk & ((value) << SPI_IMR_RDRF_Pos))  
#define SPI_IMR_TDRE_Pos                      _U_(1)                                               /**< (SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Position */
#define SPI_IMR_TDRE_Msk                      (_U_(0x1) << SPI_IMR_TDRE_Pos)                       /**< (SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Mask */
#define SPI_IMR_TDRE(value)                   (SPI_IMR_TDRE_Msk & ((value) << SPI_IMR_TDRE_Pos))  
#define SPI_IMR_MODF_Pos                      _U_(2)                                               /**< (SPI_IMR) Mode Fault Error Interrupt Mask Position */
#define SPI_IMR_MODF_Msk                      (_U_(0x1) << SPI_IMR_MODF_Pos)                       /**< (SPI_IMR) Mode Fault Error Interrupt Mask Mask */
#define SPI_IMR_MODF(value)                   (SPI_IMR_MODF_Msk & ((value) << SPI_IMR_MODF_Pos))  
#define SPI_IMR_OVRES_Pos                     _U_(3)                                               /**< (SPI_IMR) Overrun Error Interrupt Mask Position */
#define SPI_IMR_OVRES_Msk                     (_U_(0x1) << SPI_IMR_OVRES_Pos)                      /**< (SPI_IMR) Overrun Error Interrupt Mask Mask */
#define SPI_IMR_OVRES(value)                  (SPI_IMR_OVRES_Msk & ((value) << SPI_IMR_OVRES_Pos))
#define SPI_IMR_ENDRX_Pos                     _U_(4)                                               /**< (SPI_IMR) End of Receive Buffer Interrupt Mask Position */
#define SPI_IMR_ENDRX_Msk                     (_U_(0x1) << SPI_IMR_ENDRX_Pos)                      /**< (SPI_IMR) End of Receive Buffer Interrupt Mask Mask */
#define SPI_IMR_ENDRX(value)                  (SPI_IMR_ENDRX_Msk & ((value) << SPI_IMR_ENDRX_Pos))
#define SPI_IMR_ENDTX_Pos                     _U_(5)                                               /**< (SPI_IMR) End of Transmit Buffer Interrupt Mask Position */
#define SPI_IMR_ENDTX_Msk                     (_U_(0x1) << SPI_IMR_ENDTX_Pos)                      /**< (SPI_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define SPI_IMR_ENDTX(value)                  (SPI_IMR_ENDTX_Msk & ((value) << SPI_IMR_ENDTX_Pos))
#define SPI_IMR_RXBUFF_Pos                    _U_(6)                                               /**< (SPI_IMR) Receive Buffer Full Interrupt Mask Position */
#define SPI_IMR_RXBUFF_Msk                    (_U_(0x1) << SPI_IMR_RXBUFF_Pos)                     /**< (SPI_IMR) Receive Buffer Full Interrupt Mask Mask */
#define SPI_IMR_RXBUFF(value)                 (SPI_IMR_RXBUFF_Msk & ((value) << SPI_IMR_RXBUFF_Pos))
#define SPI_IMR_TXBUFE_Pos                    _U_(7)                                               /**< (SPI_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define SPI_IMR_TXBUFE_Msk                    (_U_(0x1) << SPI_IMR_TXBUFE_Pos)                     /**< (SPI_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define SPI_IMR_TXBUFE(value)                 (SPI_IMR_TXBUFE_Msk & ((value) << SPI_IMR_TXBUFE_Pos))
#define SPI_IMR_NSSR_Pos                      _U_(8)                                               /**< (SPI_IMR) NSS Rising Interrupt Mask Position */
#define SPI_IMR_NSSR_Msk                      (_U_(0x1) << SPI_IMR_NSSR_Pos)                       /**< (SPI_IMR) NSS Rising Interrupt Mask Mask */
#define SPI_IMR_NSSR(value)                   (SPI_IMR_NSSR_Msk & ((value) << SPI_IMR_NSSR_Pos))  
#define SPI_IMR_TXEMPTY_Pos                   _U_(9)                                               /**< (SPI_IMR) Transmission Registers Empty Mask Position */
#define SPI_IMR_TXEMPTY_Msk                   (_U_(0x1) << SPI_IMR_TXEMPTY_Pos)                    /**< (SPI_IMR) Transmission Registers Empty Mask Mask */
#define SPI_IMR_TXEMPTY(value)                (SPI_IMR_TXEMPTY_Msk & ((value) << SPI_IMR_TXEMPTY_Pos))
#define SPI_IMR_UNDES_Pos                     _U_(10)                                              /**< (SPI_IMR) Underrun Error Interrupt Mask Position */
#define SPI_IMR_UNDES_Msk                     (_U_(0x1) << SPI_IMR_UNDES_Pos)                      /**< (SPI_IMR) Underrun Error Interrupt Mask Mask */
#define SPI_IMR_UNDES(value)                  (SPI_IMR_UNDES_Msk & ((value) << SPI_IMR_UNDES_Pos))
#define SPI_IMR_CMP_Pos                       _U_(11)                                              /**< (SPI_IMR) Comparison Interrupt Mask Position */
#define SPI_IMR_CMP_Msk                       (_U_(0x1) << SPI_IMR_CMP_Pos)                        /**< (SPI_IMR) Comparison Interrupt Mask Mask */
#define SPI_IMR_CMP(value)                    (SPI_IMR_CMP_Msk & ((value) << SPI_IMR_CMP_Pos))    
#define SPI_IMR_Msk                           _U_(0x00000FFF)                                      /**< (SPI_IMR) Register Mask  */


/* -------- SPI_CSR : (SPI Offset: 0x30) (R/W 32) SPI Chip Select Register 0 -------- */
#define SPI_CSR_CPOL_Pos                      _U_(0)                                               /**< (SPI_CSR) Clock Polarity Position */
#define SPI_CSR_CPOL_Msk                      (_U_(0x1) << SPI_CSR_CPOL_Pos)                       /**< (SPI_CSR) Clock Polarity Mask */
#define SPI_CSR_CPOL(value)                   (SPI_CSR_CPOL_Msk & ((value) << SPI_CSR_CPOL_Pos))  
#define SPI_CSR_NCPHA_Pos                     _U_(1)                                               /**< (SPI_CSR) Clock Phase Position */
#define SPI_CSR_NCPHA_Msk                     (_U_(0x1) << SPI_CSR_NCPHA_Pos)                      /**< (SPI_CSR) Clock Phase Mask */
#define SPI_CSR_NCPHA(value)                  (SPI_CSR_NCPHA_Msk & ((value) << SPI_CSR_NCPHA_Pos))
#define SPI_CSR_CSNAAT_Pos                    _U_(2)                                               /**< (SPI_CSR) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) Position */
#define SPI_CSR_CSNAAT_Msk                    (_U_(0x1) << SPI_CSR_CSNAAT_Pos)                     /**< (SPI_CSR) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) Mask */
#define SPI_CSR_CSNAAT(value)                 (SPI_CSR_CSNAAT_Msk & ((value) << SPI_CSR_CSNAAT_Pos))
#define SPI_CSR_CSAAT_Pos                     _U_(3)                                               /**< (SPI_CSR) Chip Select Active After Transfer Position */
#define SPI_CSR_CSAAT_Msk                     (_U_(0x1) << SPI_CSR_CSAAT_Pos)                      /**< (SPI_CSR) Chip Select Active After Transfer Mask */
#define SPI_CSR_CSAAT(value)                  (SPI_CSR_CSAAT_Msk & ((value) << SPI_CSR_CSAAT_Pos))
#define SPI_CSR_BITS_Pos                      _U_(4)                                               /**< (SPI_CSR) Bits Per Transfer Position */
#define SPI_CSR_BITS_Msk                      (_U_(0xF) << SPI_CSR_BITS_Pos)                       /**< (SPI_CSR) Bits Per Transfer Mask */
#define SPI_CSR_BITS(value)                   (SPI_CSR_BITS_Msk & ((value) << SPI_CSR_BITS_Pos))  
#define   SPI_CSR_BITS_8_BIT_Val              _U_(0x0)                                             /**< (SPI_CSR) 8 bits for transfer  */
#define   SPI_CSR_BITS_9_BIT_Val              _U_(0x1)                                             /**< (SPI_CSR) 9 bits for transfer  */
#define   SPI_CSR_BITS_10_BIT_Val             _U_(0x2)                                             /**< (SPI_CSR) 10 bits for transfer  */
#define   SPI_CSR_BITS_11_BIT_Val             _U_(0x3)                                             /**< (SPI_CSR) 11 bits for transfer  */
#define   SPI_CSR_BITS_12_BIT_Val             _U_(0x4)                                             /**< (SPI_CSR) 12 bits for transfer  */
#define   SPI_CSR_BITS_13_BIT_Val             _U_(0x5)                                             /**< (SPI_CSR) 13 bits for transfer  */
#define   SPI_CSR_BITS_14_BIT_Val             _U_(0x6)                                             /**< (SPI_CSR) 14 bits for transfer  */
#define   SPI_CSR_BITS_15_BIT_Val             _U_(0x7)                                             /**< (SPI_CSR) 15 bits for transfer  */
#define   SPI_CSR_BITS_16_BIT_Val             _U_(0x8)                                             /**< (SPI_CSR) 16 bits for transfer  */
#define SPI_CSR_BITS_8_BIT                    (SPI_CSR_BITS_8_BIT_Val << SPI_CSR_BITS_Pos)         /**< (SPI_CSR) 8 bits for transfer Position  */
#define SPI_CSR_BITS_9_BIT                    (SPI_CSR_BITS_9_BIT_Val << SPI_CSR_BITS_Pos)         /**< (SPI_CSR) 9 bits for transfer Position  */
#define SPI_CSR_BITS_10_BIT                   (SPI_CSR_BITS_10_BIT_Val << SPI_CSR_BITS_Pos)        /**< (SPI_CSR) 10 bits for transfer Position  */
#define SPI_CSR_BITS_11_BIT                   (SPI_CSR_BITS_11_BIT_Val << SPI_CSR_BITS_Pos)        /**< (SPI_CSR) 11 bits for transfer Position  */
#define SPI_CSR_BITS_12_BIT                   (SPI_CSR_BITS_12_BIT_Val << SPI_CSR_BITS_Pos)        /**< (SPI_CSR) 12 bits for transfer Position  */
#define SPI_CSR_BITS_13_BIT                   (SPI_CSR_BITS_13_BIT_Val << SPI_CSR_BITS_Pos)        /**< (SPI_CSR) 13 bits for transfer Position  */
#define SPI_CSR_BITS_14_BIT                   (SPI_CSR_BITS_14_BIT_Val << SPI_CSR_BITS_Pos)        /**< (SPI_CSR) 14 bits for transfer Position  */
#define SPI_CSR_BITS_15_BIT                   (SPI_CSR_BITS_15_BIT_Val << SPI_CSR_BITS_Pos)        /**< (SPI_CSR) 15 bits for transfer Position  */
#define SPI_CSR_BITS_16_BIT                   (SPI_CSR_BITS_16_BIT_Val << SPI_CSR_BITS_Pos)        /**< (SPI_CSR) 16 bits for transfer Position  */
#define SPI_CSR_SCBR_Pos                      _U_(8)                                               /**< (SPI_CSR) Serial Clock Bit Rate Position */
#define SPI_CSR_SCBR_Msk                      (_U_(0xFF) << SPI_CSR_SCBR_Pos)                      /**< (SPI_CSR) Serial Clock Bit Rate Mask */
#define SPI_CSR_SCBR(value)                   (SPI_CSR_SCBR_Msk & ((value) << SPI_CSR_SCBR_Pos))  
#define SPI_CSR_DLYBS_Pos                     _U_(16)                                              /**< (SPI_CSR) Delay Before SPCK Position */
#define SPI_CSR_DLYBS_Msk                     (_U_(0xFF) << SPI_CSR_DLYBS_Pos)                     /**< (SPI_CSR) Delay Before SPCK Mask */
#define SPI_CSR_DLYBS(value)                  (SPI_CSR_DLYBS_Msk & ((value) << SPI_CSR_DLYBS_Pos))
#define SPI_CSR_DLYBCT_Pos                    _U_(24)                                              /**< (SPI_CSR) Delay Between Consecutive Transfers Position */
#define SPI_CSR_DLYBCT_Msk                    (_U_(0xFF) << SPI_CSR_DLYBCT_Pos)                    /**< (SPI_CSR) Delay Between Consecutive Transfers Mask */
#define SPI_CSR_DLYBCT(value)                 (SPI_CSR_DLYBCT_Msk & ((value) << SPI_CSR_DLYBCT_Pos))
#define SPI_CSR_Msk                           _U_(0xFFFFFFFF)                                      /**< (SPI_CSR) Register Mask  */


/* -------- SPI_CMPR : (SPI Offset: 0x48) (R/W 32) SPI Comparison Register -------- */
#define SPI_CMPR_VAL1_Pos                     _U_(0)                                               /**< (SPI_CMPR) First Comparison Value for Received Character Position */
#define SPI_CMPR_VAL1_Msk                     (_U_(0xFFFF) << SPI_CMPR_VAL1_Pos)                   /**< (SPI_CMPR) First Comparison Value for Received Character Mask */
#define SPI_CMPR_VAL1(value)                  (SPI_CMPR_VAL1_Msk & ((value) << SPI_CMPR_VAL1_Pos))
#define SPI_CMPR_VAL2_Pos                     _U_(16)                                              /**< (SPI_CMPR) Second Comparison Value for Received Character Position */
#define SPI_CMPR_VAL2_Msk                     (_U_(0xFFFF) << SPI_CMPR_VAL2_Pos)                   /**< (SPI_CMPR) Second Comparison Value for Received Character Mask */
#define SPI_CMPR_VAL2(value)                  (SPI_CMPR_VAL2_Msk & ((value) << SPI_CMPR_VAL2_Pos))
#define SPI_CMPR_Msk                          _U_(0xFFFFFFFF)                                      /**< (SPI_CMPR) Register Mask  */


/* -------- SPI_WPMR : (SPI Offset: 0xE4) (R/W 32) SPI Write Protection Mode Register -------- */
#define SPI_WPMR_WPEN_Pos                     _U_(0)                                               /**< (SPI_WPMR) Write Protection Enable Position */
#define SPI_WPMR_WPEN_Msk                     (_U_(0x1) << SPI_WPMR_WPEN_Pos)                      /**< (SPI_WPMR) Write Protection Enable Mask */
#define SPI_WPMR_WPEN(value)                  (SPI_WPMR_WPEN_Msk & ((value) << SPI_WPMR_WPEN_Pos))
#define SPI_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (SPI_WPMR) Write Protect Key Position */
#define SPI_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << SPI_WPMR_WPKEY_Pos)                /**< (SPI_WPMR) Write Protect Key Mask */
#define SPI_WPMR_WPKEY(value)                 (SPI_WPMR_WPKEY_Msk & ((value) << SPI_WPMR_WPKEY_Pos))
#define   SPI_WPMR_WPKEY_PASSWD_Val           _U_(0x535049)                                        /**< (SPI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0  */
#define SPI_WPMR_WPKEY_PASSWD                 (SPI_WPMR_WPKEY_PASSWD_Val << SPI_WPMR_WPKEY_Pos)    /**< (SPI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0 Position  */
#define SPI_WPMR_Msk                          _U_(0xFFFFFF01)                                      /**< (SPI_WPMR) Register Mask  */


/* -------- SPI_WPSR : (SPI Offset: 0xE8) ( R/ 32) SPI Write Protection Status Register -------- */
#define SPI_WPSR_WPVS_Pos                     _U_(0)                                               /**< (SPI_WPSR) Write Protection Violation Status Position */
#define SPI_WPSR_WPVS_Msk                     (_U_(0x1) << SPI_WPSR_WPVS_Pos)                      /**< (SPI_WPSR) Write Protection Violation Status Mask */
#define SPI_WPSR_WPVS(value)                  (SPI_WPSR_WPVS_Msk & ((value) << SPI_WPSR_WPVS_Pos))
#define SPI_WPSR_WPVSRC_Pos                   _U_(8)                                               /**< (SPI_WPSR) Write Protection Violation Source Position */
#define SPI_WPSR_WPVSRC_Msk                   (_U_(0xFF) << SPI_WPSR_WPVSRC_Pos)                   /**< (SPI_WPSR) Write Protection Violation Source Mask */
#define SPI_WPSR_WPVSRC(value)                (SPI_WPSR_WPVSRC_Msk & ((value) << SPI_WPSR_WPVSRC_Pos))
#define SPI_WPSR_Msk                          _U_(0x0000FF01)                                      /**< (SPI_WPSR) Register Mask  */


/* -------- SPI_RPR : (SPI Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define SPI_RPR_RXPTR_Pos                     _U_(0)                                               /**< (SPI_RPR) Receive Pointer Register Position */
#define SPI_RPR_RXPTR_Msk                     (_U_(0xFFFFFFFF) << SPI_RPR_RXPTR_Pos)               /**< (SPI_RPR) Receive Pointer Register Mask */
#define SPI_RPR_RXPTR(value)                  (SPI_RPR_RXPTR_Msk & ((value) << SPI_RPR_RXPTR_Pos))
#define SPI_RPR_Msk                           _U_(0xFFFFFFFF)                                      /**< (SPI_RPR) Register Mask  */


/* -------- SPI_RCR : (SPI Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define SPI_RCR_RXCTR_Pos                     _U_(0)                                               /**< (SPI_RCR) Receive Counter Register Position */
#define SPI_RCR_RXCTR_Msk                     (_U_(0xFFFF) << SPI_RCR_RXCTR_Pos)                   /**< (SPI_RCR) Receive Counter Register Mask */
#define SPI_RCR_RXCTR(value)                  (SPI_RCR_RXCTR_Msk & ((value) << SPI_RCR_RXCTR_Pos))
#define SPI_RCR_Msk                           _U_(0x0000FFFF)                                      /**< (SPI_RCR) Register Mask  */


/* -------- SPI_TPR : (SPI Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define SPI_TPR_TXPTR_Pos                     _U_(0)                                               /**< (SPI_TPR) Transmit Counter Register Position */
#define SPI_TPR_TXPTR_Msk                     (_U_(0xFFFFFFFF) << SPI_TPR_TXPTR_Pos)               /**< (SPI_TPR) Transmit Counter Register Mask */
#define SPI_TPR_TXPTR(value)                  (SPI_TPR_TXPTR_Msk & ((value) << SPI_TPR_TXPTR_Pos))
#define SPI_TPR_Msk                           _U_(0xFFFFFFFF)                                      /**< (SPI_TPR) Register Mask  */


/* -------- SPI_TCR : (SPI Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define SPI_TCR_TXCTR_Pos                     _U_(0)                                               /**< (SPI_TCR) Transmit Counter Register Position */
#define SPI_TCR_TXCTR_Msk                     (_U_(0xFFFF) << SPI_TCR_TXCTR_Pos)                   /**< (SPI_TCR) Transmit Counter Register Mask */
#define SPI_TCR_TXCTR(value)                  (SPI_TCR_TXCTR_Msk & ((value) << SPI_TCR_TXCTR_Pos))
#define SPI_TCR_Msk                           _U_(0x0000FFFF)                                      /**< (SPI_TCR) Register Mask  */


/* -------- SPI_RNPR : (SPI Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define SPI_RNPR_RXNPTR_Pos                   _U_(0)                                               /**< (SPI_RNPR) Receive Next Pointer Position */
#define SPI_RNPR_RXNPTR_Msk                   (_U_(0xFFFFFFFF) << SPI_RNPR_RXNPTR_Pos)             /**< (SPI_RNPR) Receive Next Pointer Mask */
#define SPI_RNPR_RXNPTR(value)                (SPI_RNPR_RXNPTR_Msk & ((value) << SPI_RNPR_RXNPTR_Pos))
#define SPI_RNPR_Msk                          _U_(0xFFFFFFFF)                                      /**< (SPI_RNPR) Register Mask  */


/* -------- SPI_RNCR : (SPI Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define SPI_RNCR_RXNCTR_Pos                   _U_(0)                                               /**< (SPI_RNCR) Receive Next Counter Position */
#define SPI_RNCR_RXNCTR_Msk                   (_U_(0xFFFF) << SPI_RNCR_RXNCTR_Pos)                 /**< (SPI_RNCR) Receive Next Counter Mask */
#define SPI_RNCR_RXNCTR(value)                (SPI_RNCR_RXNCTR_Msk & ((value) << SPI_RNCR_RXNCTR_Pos))
#define SPI_RNCR_Msk                          _U_(0x0000FFFF)                                      /**< (SPI_RNCR) Register Mask  */


/* -------- SPI_TNPR : (SPI Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define SPI_TNPR_TXNPTR_Pos                   _U_(0)                                               /**< (SPI_TNPR) Transmit Next Pointer Position */
#define SPI_TNPR_TXNPTR_Msk                   (_U_(0xFFFFFFFF) << SPI_TNPR_TXNPTR_Pos)             /**< (SPI_TNPR) Transmit Next Pointer Mask */
#define SPI_TNPR_TXNPTR(value)                (SPI_TNPR_TXNPTR_Msk & ((value) << SPI_TNPR_TXNPTR_Pos))
#define SPI_TNPR_Msk                          _U_(0xFFFFFFFF)                                      /**< (SPI_TNPR) Register Mask  */


/* -------- SPI_TNCR : (SPI Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define SPI_TNCR_TXNCTR_Pos                   _U_(0)                                               /**< (SPI_TNCR) Transmit Counter Next Position */
#define SPI_TNCR_TXNCTR_Msk                   (_U_(0xFFFF) << SPI_TNCR_TXNCTR_Pos)                 /**< (SPI_TNCR) Transmit Counter Next Mask */
#define SPI_TNCR_TXNCTR(value)                (SPI_TNCR_TXNCTR_Msk & ((value) << SPI_TNCR_TXNCTR_Pos))
#define SPI_TNCR_Msk                          _U_(0x0000FFFF)                                      /**< (SPI_TNCR) Register Mask  */


/* -------- SPI_PTCR : (SPI Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define SPI_PTCR_RXTEN_Pos                    _U_(0)                                               /**< (SPI_PTCR) Receiver Transfer Enable Position */
#define SPI_PTCR_RXTEN_Msk                    (_U_(0x1) << SPI_PTCR_RXTEN_Pos)                     /**< (SPI_PTCR) Receiver Transfer Enable Mask */
#define SPI_PTCR_RXTEN(value)                 (SPI_PTCR_RXTEN_Msk & ((value) << SPI_PTCR_RXTEN_Pos))
#define SPI_PTCR_RXTDIS_Pos                   _U_(1)                                               /**< (SPI_PTCR) Receiver Transfer Disable Position */
#define SPI_PTCR_RXTDIS_Msk                   (_U_(0x1) << SPI_PTCR_RXTDIS_Pos)                    /**< (SPI_PTCR) Receiver Transfer Disable Mask */
#define SPI_PTCR_RXTDIS(value)                (SPI_PTCR_RXTDIS_Msk & ((value) << SPI_PTCR_RXTDIS_Pos))
#define SPI_PTCR_TXTEN_Pos                    _U_(8)                                               /**< (SPI_PTCR) Transmitter Transfer Enable Position */
#define SPI_PTCR_TXTEN_Msk                    (_U_(0x1) << SPI_PTCR_TXTEN_Pos)                     /**< (SPI_PTCR) Transmitter Transfer Enable Mask */
#define SPI_PTCR_TXTEN(value)                 (SPI_PTCR_TXTEN_Msk & ((value) << SPI_PTCR_TXTEN_Pos))
#define SPI_PTCR_TXTDIS_Pos                   _U_(9)                                               /**< (SPI_PTCR) Transmitter Transfer Disable Position */
#define SPI_PTCR_TXTDIS_Msk                   (_U_(0x1) << SPI_PTCR_TXTDIS_Pos)                    /**< (SPI_PTCR) Transmitter Transfer Disable Mask */
#define SPI_PTCR_TXTDIS(value)                (SPI_PTCR_TXTDIS_Msk & ((value) << SPI_PTCR_TXTDIS_Pos))
#define SPI_PTCR_RXCBEN_Pos                   _U_(16)                                              /**< (SPI_PTCR) Receiver Circular Buffer Enable Position */
#define SPI_PTCR_RXCBEN_Msk                   (_U_(0x1) << SPI_PTCR_RXCBEN_Pos)                    /**< (SPI_PTCR) Receiver Circular Buffer Enable Mask */
#define SPI_PTCR_RXCBEN(value)                (SPI_PTCR_RXCBEN_Msk & ((value) << SPI_PTCR_RXCBEN_Pos))
#define SPI_PTCR_RXCBDIS_Pos                  _U_(17)                                              /**< (SPI_PTCR) Receiver Circular Buffer Disable Position */
#define SPI_PTCR_RXCBDIS_Msk                  (_U_(0x1) << SPI_PTCR_RXCBDIS_Pos)                   /**< (SPI_PTCR) Receiver Circular Buffer Disable Mask */
#define SPI_PTCR_RXCBDIS(value)               (SPI_PTCR_RXCBDIS_Msk & ((value) << SPI_PTCR_RXCBDIS_Pos))
#define SPI_PTCR_TXCBEN_Pos                   _U_(18)                                              /**< (SPI_PTCR) Transmitter Circular Buffer Enable Position */
#define SPI_PTCR_TXCBEN_Msk                   (_U_(0x1) << SPI_PTCR_TXCBEN_Pos)                    /**< (SPI_PTCR) Transmitter Circular Buffer Enable Mask */
#define SPI_PTCR_TXCBEN(value)                (SPI_PTCR_TXCBEN_Msk & ((value) << SPI_PTCR_TXCBEN_Pos))
#define SPI_PTCR_TXCBDIS_Pos                  _U_(19)                                              /**< (SPI_PTCR) Transmitter Circular Buffer Disable Position */
#define SPI_PTCR_TXCBDIS_Msk                  (_U_(0x1) << SPI_PTCR_TXCBDIS_Pos)                   /**< (SPI_PTCR) Transmitter Circular Buffer Disable Mask */
#define SPI_PTCR_TXCBDIS(value)               (SPI_PTCR_TXCBDIS_Msk & ((value) << SPI_PTCR_TXCBDIS_Pos))
#define SPI_PTCR_ERRCLR_Pos                   _U_(24)                                              /**< (SPI_PTCR) Transfer Bus Error Clear Position */
#define SPI_PTCR_ERRCLR_Msk                   (_U_(0x1) << SPI_PTCR_ERRCLR_Pos)                    /**< (SPI_PTCR) Transfer Bus Error Clear Mask */
#define SPI_PTCR_ERRCLR(value)                (SPI_PTCR_ERRCLR_Msk & ((value) << SPI_PTCR_ERRCLR_Pos))
#define SPI_PTCR_Msk                          _U_(0x010F0303)                                      /**< (SPI_PTCR) Register Mask  */


/* -------- SPI_PTSR : (SPI Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define SPI_PTSR_RXTEN_Pos                    _U_(0)                                               /**< (SPI_PTSR) Receiver Transfer Enable Position */
#define SPI_PTSR_RXTEN_Msk                    (_U_(0x1) << SPI_PTSR_RXTEN_Pos)                     /**< (SPI_PTSR) Receiver Transfer Enable Mask */
#define SPI_PTSR_RXTEN(value)                 (SPI_PTSR_RXTEN_Msk & ((value) << SPI_PTSR_RXTEN_Pos))
#define SPI_PTSR_TXTEN_Pos                    _U_(8)                                               /**< (SPI_PTSR) Transmitter Transfer Enable Position */
#define SPI_PTSR_TXTEN_Msk                    (_U_(0x1) << SPI_PTSR_TXTEN_Pos)                     /**< (SPI_PTSR) Transmitter Transfer Enable Mask */
#define SPI_PTSR_TXTEN(value)                 (SPI_PTSR_TXTEN_Msk & ((value) << SPI_PTSR_TXTEN_Pos))
#define SPI_PTSR_RXCBEN_Pos                   _U_(16)                                              /**< (SPI_PTSR) Receiver Circular Buffer Enable Position */
#define SPI_PTSR_RXCBEN_Msk                   (_U_(0x1) << SPI_PTSR_RXCBEN_Pos)                    /**< (SPI_PTSR) Receiver Circular Buffer Enable Mask */
#define SPI_PTSR_RXCBEN(value)                (SPI_PTSR_RXCBEN_Msk & ((value) << SPI_PTSR_RXCBEN_Pos))
#define SPI_PTSR_TXCBEN_Pos                   _U_(18)                                              /**< (SPI_PTSR) Transmitter Circular Buffer Enable Position */
#define SPI_PTSR_TXCBEN_Msk                   (_U_(0x1) << SPI_PTSR_TXCBEN_Pos)                    /**< (SPI_PTSR) Transmitter Circular Buffer Enable Mask */
#define SPI_PTSR_TXCBEN(value)                (SPI_PTSR_TXCBEN_Msk & ((value) << SPI_PTSR_TXCBEN_Pos))
#define SPI_PTSR_ERR_Pos                      _U_(24)                                              /**< (SPI_PTSR) Transfer Bus Error Position */
#define SPI_PTSR_ERR_Msk                      (_U_(0x1) << SPI_PTSR_ERR_Pos)                       /**< (SPI_PTSR) Transfer Bus Error Mask */
#define SPI_PTSR_ERR(value)                   (SPI_PTSR_ERR_Msk & ((value) << SPI_PTSR_ERR_Pos))  
#define SPI_PTSR_Msk                          _U_(0x01050101)                                      /**< (SPI_PTSR) Register Mask  */


/** \brief SPI register offsets definitions */
#define SPI_CR_REG_OFST                (0x00)              /**< (SPI_CR) SPI Control Register Offset */
#define SPI_MR_REG_OFST                (0x04)              /**< (SPI_MR) SPI Mode Register Offset */
#define SPI_RDR_REG_OFST               (0x08)              /**< (SPI_RDR) SPI Receive Data Register Offset */
#define SPI_TDR_REG_OFST               (0x0C)              /**< (SPI_TDR) SPI Transmit Data Register Offset */
#define SPI_SR_REG_OFST                (0x10)              /**< (SPI_SR) SPI Status Register Offset */
#define SPI_IER_REG_OFST               (0x14)              /**< (SPI_IER) SPI Interrupt Enable Register Offset */
#define SPI_IDR_REG_OFST               (0x18)              /**< (SPI_IDR) SPI Interrupt Disable Register Offset */
#define SPI_IMR_REG_OFST               (0x1C)              /**< (SPI_IMR) SPI Interrupt Mask Register Offset */
#define SPI_CSR_REG_OFST               (0x30)              /**< (SPI_CSR) SPI Chip Select Register 0 Offset */
#define SPI_CSR0_REG_OFST              (0x30)              /**< (SPI_CSR0) SPI Chip Select Register 0 Offset */
#define SPI_CSR1_REG_OFST              (0x34)              /**< (SPI_CSR1) SPI Chip Select Register 0 Offset */
#define SPI_CMPR_REG_OFST              (0x48)              /**< (SPI_CMPR) SPI Comparison Register Offset */
#define SPI_WPMR_REG_OFST              (0xE4)              /**< (SPI_WPMR) SPI Write Protection Mode Register Offset */
#define SPI_WPSR_REG_OFST              (0xE8)              /**< (SPI_WPSR) SPI Write Protection Status Register Offset */
#define SPI_RPR_REG_OFST               (0x100)             /**< (SPI_RPR) Receive Pointer Register Offset */
#define SPI_RCR_REG_OFST               (0x104)             /**< (SPI_RCR) Receive Counter Register Offset */
#define SPI_TPR_REG_OFST               (0x108)             /**< (SPI_TPR) Transmit Pointer Register Offset */
#define SPI_TCR_REG_OFST               (0x10C)             /**< (SPI_TCR) Transmit Counter Register Offset */
#define SPI_RNPR_REG_OFST              (0x110)             /**< (SPI_RNPR) Receive Next Pointer Register Offset */
#define SPI_RNCR_REG_OFST              (0x114)             /**< (SPI_RNCR) Receive Next Counter Register Offset */
#define SPI_TNPR_REG_OFST              (0x118)             /**< (SPI_TNPR) Transmit Next Pointer Register Offset */
#define SPI_TNCR_REG_OFST              (0x11C)             /**< (SPI_TNCR) Transmit Next Counter Register Offset */
#define SPI_PTCR_REG_OFST              (0x120)             /**< (SPI_PTCR) Transfer Control Register Offset */
#define SPI_PTSR_REG_OFST              (0x124)             /**< (SPI_PTSR) Transfer Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SPI register API structure */
typedef struct
{
  __O   uint32_t                       SPI_CR;             /**< Offset: 0x00 ( /W  32) SPI Control Register */
  __IO  uint32_t                       SPI_MR;             /**< Offset: 0x04 (R/W  32) SPI Mode Register */
  __I   uint32_t                       SPI_RDR;            /**< Offset: 0x08 (R/   32) SPI Receive Data Register */
  __O   uint32_t                       SPI_TDR;            /**< Offset: 0x0C ( /W  32) SPI Transmit Data Register */
  __I   uint32_t                       SPI_SR;             /**< Offset: 0x10 (R/   32) SPI Status Register */
  __O   uint32_t                       SPI_IER;            /**< Offset: 0x14 ( /W  32) SPI Interrupt Enable Register */
  __O   uint32_t                       SPI_IDR;            /**< Offset: 0x18 ( /W  32) SPI Interrupt Disable Register */
  __I   uint32_t                       SPI_IMR;            /**< Offset: 0x1C (R/   32) SPI Interrupt Mask Register */
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       SPI_CSR[2];         /**< Offset: 0x30 (R/W  32) SPI Chip Select Register 0 */
  __I   uint8_t                        Reserved2[0x10];
  __IO  uint32_t                       SPI_CMPR;           /**< Offset: 0x48 (R/W  32) SPI Comparison Register */
  __I   uint8_t                        Reserved3[0x98];
  __IO  uint32_t                       SPI_WPMR;           /**< Offset: 0xE4 (R/W  32) SPI Write Protection Mode Register */
  __I   uint32_t                       SPI_WPSR;           /**< Offset: 0xE8 (R/   32) SPI Write Protection Status Register */
  __I   uint8_t                        Reserved4[0x14];
  __IO  uint32_t                       SPI_RPR;            /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       SPI_RCR;            /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       SPI_TPR;            /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       SPI_TCR;            /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       SPI_RNPR;           /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       SPI_RNCR;           /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       SPI_TNPR;           /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       SPI_TNCR;           /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       SPI_PTCR;           /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       SPI_PTSR;           /**< Offset: 0x124 (R/   32) Transfer Status Register */
} spi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_SPI_COMPONENT_H_ */
