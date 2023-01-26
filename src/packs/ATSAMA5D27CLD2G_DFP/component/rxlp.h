/*
 * Component description for RXLP
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
#ifndef _SAMA5D2_RXLP_COMPONENT_H_
#define _SAMA5D2_RXLP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RXLP                                         */
/* ************************************************************************** */

/* -------- RXLP_CR : (RXLP Offset: 0x00) ( /W 32) Control Register -------- */
#define RXLP_CR_RSTRX_Pos                     _U_(2)                                               /**< (RXLP_CR) Reset Receiver Position */
#define RXLP_CR_RSTRX_Msk                     (_U_(0x1) << RXLP_CR_RSTRX_Pos)                      /**< (RXLP_CR) Reset Receiver Mask */
#define RXLP_CR_RSTRX(value)                  (RXLP_CR_RSTRX_Msk & ((value) << RXLP_CR_RSTRX_Pos))
#define RXLP_CR_RXEN_Pos                      _U_(4)                                               /**< (RXLP_CR) Receiver Enable Position */
#define RXLP_CR_RXEN_Msk                      (_U_(0x1) << RXLP_CR_RXEN_Pos)                       /**< (RXLP_CR) Receiver Enable Mask */
#define RXLP_CR_RXEN(value)                   (RXLP_CR_RXEN_Msk & ((value) << RXLP_CR_RXEN_Pos))  
#define RXLP_CR_RXDIS_Pos                     _U_(5)                                               /**< (RXLP_CR) Receiver Disable Position */
#define RXLP_CR_RXDIS_Msk                     (_U_(0x1) << RXLP_CR_RXDIS_Pos)                      /**< (RXLP_CR) Receiver Disable Mask */
#define RXLP_CR_RXDIS(value)                  (RXLP_CR_RXDIS_Msk & ((value) << RXLP_CR_RXDIS_Pos))
#define RXLP_CR_Msk                           _U_(0x00000034)                                      /**< (RXLP_CR) Register Mask  */


/* -------- RXLP_MR : (RXLP Offset: 0x04) (R/W 32) Mode Register -------- */
#define RXLP_MR_FILTER_Pos                    _U_(4)                                               /**< (RXLP_MR) Receiver Digital Filter Position */
#define RXLP_MR_FILTER_Msk                    (_U_(0x1) << RXLP_MR_FILTER_Pos)                     /**< (RXLP_MR) Receiver Digital Filter Mask */
#define RXLP_MR_FILTER(value)                 (RXLP_MR_FILTER_Msk & ((value) << RXLP_MR_FILTER_Pos))
#define   RXLP_MR_FILTER_DISABLED_Val         _U_(0x0)                                             /**< (RXLP_MR) RXLP does not filter the receive line.  */
#define   RXLP_MR_FILTER_ENABLED_Val          _U_(0x1)                                             /**< (RXLP_MR) RXLP filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority).  */
#define RXLP_MR_FILTER_DISABLED               (RXLP_MR_FILTER_DISABLED_Val << RXLP_MR_FILTER_Pos)  /**< (RXLP_MR) RXLP does not filter the receive line. Position  */
#define RXLP_MR_FILTER_ENABLED                (RXLP_MR_FILTER_ENABLED_Val << RXLP_MR_FILTER_Pos)   /**< (RXLP_MR) RXLP filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority). Position  */
#define RXLP_MR_PAR_Pos                       _U_(9)                                               /**< (RXLP_MR) Parity Type Position */
#define RXLP_MR_PAR_Msk                       (_U_(0x7) << RXLP_MR_PAR_Pos)                        /**< (RXLP_MR) Parity Type Mask */
#define RXLP_MR_PAR(value)                    (RXLP_MR_PAR_Msk & ((value) << RXLP_MR_PAR_Pos))    
#define   RXLP_MR_PAR_EVEN_Val                _U_(0x0)                                             /**< (RXLP_MR) Even Parity  */
#define   RXLP_MR_PAR_ODD_Val                 _U_(0x1)                                             /**< (RXLP_MR) Odd Parity  */
#define   RXLP_MR_PAR_SPACE_Val               _U_(0x2)                                             /**< (RXLP_MR) Parity forced to 0  */
#define   RXLP_MR_PAR_MARK_Val                _U_(0x3)                                             /**< (RXLP_MR) Parity forced to 1  */
#define   RXLP_MR_PAR_NO_Val                  _U_(0x4)                                             /**< (RXLP_MR) No parity  */
#define RXLP_MR_PAR_EVEN                      (RXLP_MR_PAR_EVEN_Val << RXLP_MR_PAR_Pos)            /**< (RXLP_MR) Even Parity Position  */
#define RXLP_MR_PAR_ODD                       (RXLP_MR_PAR_ODD_Val << RXLP_MR_PAR_Pos)             /**< (RXLP_MR) Odd Parity Position  */
#define RXLP_MR_PAR_SPACE                     (RXLP_MR_PAR_SPACE_Val << RXLP_MR_PAR_Pos)           /**< (RXLP_MR) Parity forced to 0 Position  */
#define RXLP_MR_PAR_MARK                      (RXLP_MR_PAR_MARK_Val << RXLP_MR_PAR_Pos)            /**< (RXLP_MR) Parity forced to 1 Position  */
#define RXLP_MR_PAR_NO                        (RXLP_MR_PAR_NO_Val << RXLP_MR_PAR_Pos)              /**< (RXLP_MR) No parity Position  */
#define RXLP_MR_Msk                           _U_(0x00000E10)                                      /**< (RXLP_MR) Register Mask  */


/* -------- RXLP_RHR : (RXLP Offset: 0x18) ( R/ 32) Receive Holding Register -------- */
#define RXLP_RHR_RXCHR_Pos                    _U_(0)                                               /**< (RXLP_RHR) Received Character Position */
#define RXLP_RHR_RXCHR_Msk                    (_U_(0xFF) << RXLP_RHR_RXCHR_Pos)                    /**< (RXLP_RHR) Received Character Mask */
#define RXLP_RHR_RXCHR(value)                 (RXLP_RHR_RXCHR_Msk & ((value) << RXLP_RHR_RXCHR_Pos))
#define RXLP_RHR_Msk                          _U_(0x000000FF)                                      /**< (RXLP_RHR) Register Mask  */


/* -------- RXLP_BRGR : (RXLP Offset: 0x20) (R/W 32) Baud Rate Generator Register -------- */
#define RXLP_BRGR_CD_Pos                      _U_(0)                                               /**< (RXLP_BRGR) Clock Divisor Position */
#define RXLP_BRGR_CD_Msk                      (_U_(0x3) << RXLP_BRGR_CD_Pos)                       /**< (RXLP_BRGR) Clock Divisor Mask */
#define RXLP_BRGR_CD(value)                   (RXLP_BRGR_CD_Msk & ((value) << RXLP_BRGR_CD_Pos))  
#define RXLP_BRGR_Msk                         _U_(0x00000003)                                      /**< (RXLP_BRGR) Register Mask  */


/* -------- RXLP_CMPR : (RXLP Offset: 0x24) (R/W 32) Comparison Register -------- */
#define RXLP_CMPR_VAL1_Pos                    _U_(0)                                               /**< (RXLP_CMPR) First Comparison Value for Received Character Position */
#define RXLP_CMPR_VAL1_Msk                    (_U_(0xFF) << RXLP_CMPR_VAL1_Pos)                    /**< (RXLP_CMPR) First Comparison Value for Received Character Mask */
#define RXLP_CMPR_VAL1(value)                 (RXLP_CMPR_VAL1_Msk & ((value) << RXLP_CMPR_VAL1_Pos))
#define RXLP_CMPR_VAL2_Pos                    _U_(16)                                              /**< (RXLP_CMPR) Second Comparison Value for Received Character Position */
#define RXLP_CMPR_VAL2_Msk                    (_U_(0xFF) << RXLP_CMPR_VAL2_Pos)                    /**< (RXLP_CMPR) Second Comparison Value for Received Character Mask */
#define RXLP_CMPR_VAL2(value)                 (RXLP_CMPR_VAL2_Msk & ((value) << RXLP_CMPR_VAL2_Pos))
#define RXLP_CMPR_Msk                         _U_(0x00FF00FF)                                      /**< (RXLP_CMPR) Register Mask  */


/* -------- RXLP_WPMR : (RXLP Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define RXLP_WPMR_WPEN_Pos                    _U_(0)                                               /**< (RXLP_WPMR) Write Protection Enable Position */
#define RXLP_WPMR_WPEN_Msk                    (_U_(0x1) << RXLP_WPMR_WPEN_Pos)                     /**< (RXLP_WPMR) Write Protection Enable Mask */
#define RXLP_WPMR_WPEN(value)                 (RXLP_WPMR_WPEN_Msk & ((value) << RXLP_WPMR_WPEN_Pos))
#define RXLP_WPMR_WPKEY_Pos                   _U_(8)                                               /**< (RXLP_WPMR) Write Protection Key Position */
#define RXLP_WPMR_WPKEY_Msk                   (_U_(0xFFFFFF) << RXLP_WPMR_WPKEY_Pos)               /**< (RXLP_WPMR) Write Protection Key Mask */
#define RXLP_WPMR_WPKEY(value)                (RXLP_WPMR_WPKEY_Msk & ((value) << RXLP_WPMR_WPKEY_Pos))
#define   RXLP_WPMR_WPKEY_PASSWD_Val          _U_(0x52584C)                                        /**< (RXLP_WPMR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define RXLP_WPMR_WPKEY_PASSWD                (RXLP_WPMR_WPKEY_PASSWD_Val << RXLP_WPMR_WPKEY_Pos)  /**< (RXLP_WPMR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define RXLP_WPMR_Msk                         _U_(0xFFFFFF01)                                      /**< (RXLP_WPMR) Register Mask  */


/** \brief RXLP register offsets definitions */
#define RXLP_CR_REG_OFST               (0x00)              /**< (RXLP_CR) Control Register Offset */
#define RXLP_MR_REG_OFST               (0x04)              /**< (RXLP_MR) Mode Register Offset */
#define RXLP_RHR_REG_OFST              (0x18)              /**< (RXLP_RHR) Receive Holding Register Offset */
#define RXLP_BRGR_REG_OFST             (0x20)              /**< (RXLP_BRGR) Baud Rate Generator Register Offset */
#define RXLP_CMPR_REG_OFST             (0x24)              /**< (RXLP_CMPR) Comparison Register Offset */
#define RXLP_WPMR_REG_OFST             (0xE4)              /**< (RXLP_WPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RXLP register API structure */
typedef struct
{
  __O   uint32_t                       RXLP_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       RXLP_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0x10];
  __I   uint32_t                       RXLP_RHR;           /**< Offset: 0x18 (R/   32) Receive Holding Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       RXLP_BRGR;          /**< Offset: 0x20 (R/W  32) Baud Rate Generator Register */
  __IO  uint32_t                       RXLP_CMPR;          /**< Offset: 0x24 (R/W  32) Comparison Register */
  __I   uint8_t                        Reserved3[0xBC];
  __IO  uint32_t                       RXLP_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
} rxlp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_RXLP_COMPONENT_H_ */
