/*
 * Component description for PDMIC
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
#ifndef _SAMA5D2_PDMIC_COMPONENT_H_
#define _SAMA5D2_PDMIC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PDMIC                                        */
/* ************************************************************************** */

/* -------- PDMIC_CR : (PDMIC Offset: 0x00) (R/W 32) Control Register -------- */
#define PDMIC_CR_SWRST_Pos                    _U_(0)                                               /**< (PDMIC_CR) Software Reset Position */
#define PDMIC_CR_SWRST_Msk                    (_U_(0x1) << PDMIC_CR_SWRST_Pos)                     /**< (PDMIC_CR) Software Reset Mask */
#define PDMIC_CR_SWRST(value)                 (PDMIC_CR_SWRST_Msk & ((value) << PDMIC_CR_SWRST_Pos))
#define PDMIC_CR_ENPDM_Pos                    _U_(4)                                               /**< (PDMIC_CR) Enable PDM Position */
#define PDMIC_CR_ENPDM_Msk                    (_U_(0x1) << PDMIC_CR_ENPDM_Pos)                     /**< (PDMIC_CR) Enable PDM Mask */
#define PDMIC_CR_ENPDM(value)                 (PDMIC_CR_ENPDM_Msk & ((value) << PDMIC_CR_ENPDM_Pos))
#define PDMIC_CR_Msk                          _U_(0x00000011)                                      /**< (PDMIC_CR) Register Mask  */


/* -------- PDMIC_MR : (PDMIC Offset: 0x04) (R/W 32) Mode Register -------- */
#define PDMIC_MR_CLKS_Pos                     _U_(4)                                               /**< (PDMIC_MR) Clock Source Selection Position */
#define PDMIC_MR_CLKS_Msk                     (_U_(0x1) << PDMIC_MR_CLKS_Pos)                      /**< (PDMIC_MR) Clock Source Selection Mask */
#define PDMIC_MR_CLKS(value)                  (PDMIC_MR_CLKS_Msk & ((value) << PDMIC_MR_CLKS_Pos))
#define PDMIC_MR_PRESCAL_Pos                  _U_(8)                                               /**< (PDMIC_MR) Prescaler Rate Selection Position */
#define PDMIC_MR_PRESCAL_Msk                  (_U_(0x7F) << PDMIC_MR_PRESCAL_Pos)                  /**< (PDMIC_MR) Prescaler Rate Selection Mask */
#define PDMIC_MR_PRESCAL(value)               (PDMIC_MR_PRESCAL_Msk & ((value) << PDMIC_MR_PRESCAL_Pos))
#define PDMIC_MR_Msk                          _U_(0x00007F10)                                      /**< (PDMIC_MR) Register Mask  */


/* -------- PDMIC_CDR : (PDMIC Offset: 0x14) ( R/ 32) Converted Data Register -------- */
#define PDMIC_CDR_DATA_Pos                    _U_(0)                                               /**< (PDMIC_CDR) Data Converted Position */
#define PDMIC_CDR_DATA_Msk                    (_U_(0xFFFFFFFF) << PDMIC_CDR_DATA_Pos)              /**< (PDMIC_CDR) Data Converted Mask */
#define PDMIC_CDR_DATA(value)                 (PDMIC_CDR_DATA_Msk & ((value) << PDMIC_CDR_DATA_Pos))
#define PDMIC_CDR_Msk                         _U_(0xFFFFFFFF)                                      /**< (PDMIC_CDR) Register Mask  */


/* -------- PDMIC_IER : (PDMIC Offset: 0x18) ( /W 32) Interrupt Enable Register -------- */
#define PDMIC_IER_DRDY_Pos                    _U_(24)                                              /**< (PDMIC_IER) Data Ready Interrupt Enable Position */
#define PDMIC_IER_DRDY_Msk                    (_U_(0x1) << PDMIC_IER_DRDY_Pos)                     /**< (PDMIC_IER) Data Ready Interrupt Enable Mask */
#define PDMIC_IER_DRDY(value)                 (PDMIC_IER_DRDY_Msk & ((value) << PDMIC_IER_DRDY_Pos))
#define PDMIC_IER_OVRE_Pos                    _U_(25)                                              /**< (PDMIC_IER) Overrun Error Interrupt Enable Position */
#define PDMIC_IER_OVRE_Msk                    (_U_(0x1) << PDMIC_IER_OVRE_Pos)                     /**< (PDMIC_IER) Overrun Error Interrupt Enable Mask */
#define PDMIC_IER_OVRE(value)                 (PDMIC_IER_OVRE_Msk & ((value) << PDMIC_IER_OVRE_Pos))
#define PDMIC_IER_Msk                         _U_(0x03000000)                                      /**< (PDMIC_IER) Register Mask  */


/* -------- PDMIC_IDR : (PDMIC Offset: 0x1C) ( /W 32) Interrupt Disable Register -------- */
#define PDMIC_IDR_DRDY_Pos                    _U_(24)                                              /**< (PDMIC_IDR) Data Ready Interrupt Disable Position */
#define PDMIC_IDR_DRDY_Msk                    (_U_(0x1) << PDMIC_IDR_DRDY_Pos)                     /**< (PDMIC_IDR) Data Ready Interrupt Disable Mask */
#define PDMIC_IDR_DRDY(value)                 (PDMIC_IDR_DRDY_Msk & ((value) << PDMIC_IDR_DRDY_Pos))
#define PDMIC_IDR_OVRE_Pos                    _U_(25)                                              /**< (PDMIC_IDR) General Overrun Error Interrupt Disable Position */
#define PDMIC_IDR_OVRE_Msk                    (_U_(0x1) << PDMIC_IDR_OVRE_Pos)                     /**< (PDMIC_IDR) General Overrun Error Interrupt Disable Mask */
#define PDMIC_IDR_OVRE(value)                 (PDMIC_IDR_OVRE_Msk & ((value) << PDMIC_IDR_OVRE_Pos))
#define PDMIC_IDR_Msk                         _U_(0x03000000)                                      /**< (PDMIC_IDR) Register Mask  */


/* -------- PDMIC_IMR : (PDMIC Offset: 0x20) ( R/ 32) Interrupt Mask Register -------- */
#define PDMIC_IMR_DRDY_Pos                    _U_(24)                                              /**< (PDMIC_IMR) Data Ready Interrupt Mask Position */
#define PDMIC_IMR_DRDY_Msk                    (_U_(0x1) << PDMIC_IMR_DRDY_Pos)                     /**< (PDMIC_IMR) Data Ready Interrupt Mask Mask */
#define PDMIC_IMR_DRDY(value)                 (PDMIC_IMR_DRDY_Msk & ((value) << PDMIC_IMR_DRDY_Pos))
#define PDMIC_IMR_OVRE_Pos                    _U_(25)                                              /**< (PDMIC_IMR) General Overrun Error Interrupt Mask Position */
#define PDMIC_IMR_OVRE_Msk                    (_U_(0x1) << PDMIC_IMR_OVRE_Pos)                     /**< (PDMIC_IMR) General Overrun Error Interrupt Mask Mask */
#define PDMIC_IMR_OVRE(value)                 (PDMIC_IMR_OVRE_Msk & ((value) << PDMIC_IMR_OVRE_Pos))
#define PDMIC_IMR_Msk                         _U_(0x03000000)                                      /**< (PDMIC_IMR) Register Mask  */


/* -------- PDMIC_ISR : (PDMIC Offset: 0x24) ( R/ 32) Interrupt Status Register -------- */
#define PDMIC_ISR_FIFOCNT_Pos                 _U_(16)                                              /**< (PDMIC_ISR) FIFO Count Position */
#define PDMIC_ISR_FIFOCNT_Msk                 (_U_(0xFF) << PDMIC_ISR_FIFOCNT_Pos)                 /**< (PDMIC_ISR) FIFO Count Mask */
#define PDMIC_ISR_FIFOCNT(value)              (PDMIC_ISR_FIFOCNT_Msk & ((value) << PDMIC_ISR_FIFOCNT_Pos))
#define PDMIC_ISR_DRDY_Pos                    _U_(24)                                              /**< (PDMIC_ISR) Data Ready (cleared by reading PDMIC_CDR) Position */
#define PDMIC_ISR_DRDY_Msk                    (_U_(0x1) << PDMIC_ISR_DRDY_Pos)                     /**< (PDMIC_ISR) Data Ready (cleared by reading PDMIC_CDR) Mask */
#define PDMIC_ISR_DRDY(value)                 (PDMIC_ISR_DRDY_Msk & ((value) << PDMIC_ISR_DRDY_Pos))
#define PDMIC_ISR_OVRE_Pos                    _U_(25)                                              /**< (PDMIC_ISR) Overrun Error (cleared on read) Position */
#define PDMIC_ISR_OVRE_Msk                    (_U_(0x1) << PDMIC_ISR_OVRE_Pos)                     /**< (PDMIC_ISR) Overrun Error (cleared on read) Mask */
#define PDMIC_ISR_OVRE(value)                 (PDMIC_ISR_OVRE_Msk & ((value) << PDMIC_ISR_OVRE_Pos))
#define PDMIC_ISR_Msk                         _U_(0x03FF0000)                                      /**< (PDMIC_ISR) Register Mask  */


/* -------- PDMIC_DSPR0 : (PDMIC Offset: 0x58) (R/W 32) DSP Configuration Register 0 -------- */
#define PDMIC_DSPR0_HPFBYP_Pos                _U_(1)                                               /**< (PDMIC_DSPR0) High-Pass Filter Bypass Position */
#define PDMIC_DSPR0_HPFBYP_Msk                (_U_(0x1) << PDMIC_DSPR0_HPFBYP_Pos)                 /**< (PDMIC_DSPR0) High-Pass Filter Bypass Mask */
#define PDMIC_DSPR0_HPFBYP(value)             (PDMIC_DSPR0_HPFBYP_Msk & ((value) << PDMIC_DSPR0_HPFBYP_Pos))
#define PDMIC_DSPR0_SINBYP_Pos                _U_(2)                                               /**< (PDMIC_DSPR0) SINCC Filter Bypass Position */
#define PDMIC_DSPR0_SINBYP_Msk                (_U_(0x1) << PDMIC_DSPR0_SINBYP_Pos)                 /**< (PDMIC_DSPR0) SINCC Filter Bypass Mask */
#define PDMIC_DSPR0_SINBYP(value)             (PDMIC_DSPR0_SINBYP_Msk & ((value) << PDMIC_DSPR0_SINBYP_Pos))
#define PDMIC_DSPR0_SIZE_Pos                  _U_(3)                                               /**< (PDMIC_DSPR0) Data Size Position */
#define PDMIC_DSPR0_SIZE_Msk                  (_U_(0x1) << PDMIC_DSPR0_SIZE_Pos)                   /**< (PDMIC_DSPR0) Data Size Mask */
#define PDMIC_DSPR0_SIZE(value)               (PDMIC_DSPR0_SIZE_Msk & ((value) << PDMIC_DSPR0_SIZE_Pos))
#define PDMIC_DSPR0_OSR_Pos                   _U_(4)                                               /**< (PDMIC_DSPR0) Global Oversampling Ratio Position */
#define PDMIC_DSPR0_OSR_Msk                   (_U_(0x7) << PDMIC_DSPR0_OSR_Pos)                    /**< (PDMIC_DSPR0) Global Oversampling Ratio Mask */
#define PDMIC_DSPR0_OSR(value)                (PDMIC_DSPR0_OSR_Msk & ((value) << PDMIC_DSPR0_OSR_Pos))
#define   PDMIC_DSPR0_OSR_128_Val             _U_(0x0)                                             /**< (PDMIC_DSPR0) Global Oversampling ratio is 128 (SINC filter oversampling ratio is 64)  */
#define   PDMIC_DSPR0_OSR_64_Val              _U_(0x1)                                             /**< (PDMIC_DSPR0) Global Oversampling ratio is 64 (SINC filter oversampling ratio is 32)  */
#define PDMIC_DSPR0_OSR_128                   (PDMIC_DSPR0_OSR_128_Val << PDMIC_DSPR0_OSR_Pos)     /**< (PDMIC_DSPR0) Global Oversampling ratio is 128 (SINC filter oversampling ratio is 64) Position  */
#define PDMIC_DSPR0_OSR_64                    (PDMIC_DSPR0_OSR_64_Val << PDMIC_DSPR0_OSR_Pos)      /**< (PDMIC_DSPR0) Global Oversampling ratio is 64 (SINC filter oversampling ratio is 32) Position  */
#define PDMIC_DSPR0_SCALE_Pos                 _U_(8)                                               /**< (PDMIC_DSPR0) Data Scale Position */
#define PDMIC_DSPR0_SCALE_Msk                 (_U_(0xF) << PDMIC_DSPR0_SCALE_Pos)                  /**< (PDMIC_DSPR0) Data Scale Mask */
#define PDMIC_DSPR0_SCALE(value)              (PDMIC_DSPR0_SCALE_Msk & ((value) << PDMIC_DSPR0_SCALE_Pos))
#define PDMIC_DSPR0_SHIFT_Pos                 _U_(12)                                              /**< (PDMIC_DSPR0) Data Shift Position */
#define PDMIC_DSPR0_SHIFT_Msk                 (_U_(0xF) << PDMIC_DSPR0_SHIFT_Pos)                  /**< (PDMIC_DSPR0) Data Shift Mask */
#define PDMIC_DSPR0_SHIFT(value)              (PDMIC_DSPR0_SHIFT_Msk & ((value) << PDMIC_DSPR0_SHIFT_Pos))
#define PDMIC_DSPR0_Msk                       _U_(0x0000FF7E)                                      /**< (PDMIC_DSPR0) Register Mask  */


/* -------- PDMIC_DSPR1 : (PDMIC Offset: 0x5C) (R/W 32) DSP Configuration Register 1 -------- */
#define PDMIC_DSPR1_DGAIN_Pos                 _U_(0)                                               /**< (PDMIC_DSPR1) Gain Correction Position */
#define PDMIC_DSPR1_DGAIN_Msk                 (_U_(0x7FFF) << PDMIC_DSPR1_DGAIN_Pos)               /**< (PDMIC_DSPR1) Gain Correction Mask */
#define PDMIC_DSPR1_DGAIN(value)              (PDMIC_DSPR1_DGAIN_Msk & ((value) << PDMIC_DSPR1_DGAIN_Pos))
#define PDMIC_DSPR1_OFFSET_Pos                _U_(16)                                              /**< (PDMIC_DSPR1) Offset Correction Position */
#define PDMIC_DSPR1_OFFSET_Msk                (_U_(0xFFFF) << PDMIC_DSPR1_OFFSET_Pos)              /**< (PDMIC_DSPR1) Offset Correction Mask */
#define PDMIC_DSPR1_OFFSET(value)             (PDMIC_DSPR1_OFFSET_Msk & ((value) << PDMIC_DSPR1_OFFSET_Pos))
#define PDMIC_DSPR1_Msk                       _U_(0xFFFF7FFF)                                      /**< (PDMIC_DSPR1) Register Mask  */


/* -------- PDMIC_WPMR : (PDMIC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define PDMIC_WPMR_WPEN_Pos                   _U_(0)                                               /**< (PDMIC_WPMR) Write Protection Enable Position */
#define PDMIC_WPMR_WPEN_Msk                   (_U_(0x1) << PDMIC_WPMR_WPEN_Pos)                    /**< (PDMIC_WPMR) Write Protection Enable Mask */
#define PDMIC_WPMR_WPEN(value)                (PDMIC_WPMR_WPEN_Msk & ((value) << PDMIC_WPMR_WPEN_Pos))
#define PDMIC_WPMR_WPKEY_Pos                  _U_(8)                                               /**< (PDMIC_WPMR) Write Protection Key Position */
#define PDMIC_WPMR_WPKEY_Msk                  (_U_(0xFFFFFF) << PDMIC_WPMR_WPKEY_Pos)              /**< (PDMIC_WPMR) Write Protection Key Mask */
#define PDMIC_WPMR_WPKEY(value)               (PDMIC_WPMR_WPKEY_Msk & ((value) << PDMIC_WPMR_WPKEY_Pos))
#define   PDMIC_WPMR_WPKEY_PASSWD_Val         _U_(0x414443)                                        /**< (PDMIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define PDMIC_WPMR_WPKEY_PASSWD               (PDMIC_WPMR_WPKEY_PASSWD_Val << PDMIC_WPMR_WPKEY_Pos) /**< (PDMIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define PDMIC_WPMR_Msk                        _U_(0xFFFFFF01)                                      /**< (PDMIC_WPMR) Register Mask  */


/* -------- PDMIC_WPSR : (PDMIC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define PDMIC_WPSR_WPVS_Pos                   _U_(0)                                               /**< (PDMIC_WPSR) Write Protection Violation Status Position */
#define PDMIC_WPSR_WPVS_Msk                   (_U_(0x1) << PDMIC_WPSR_WPVS_Pos)                    /**< (PDMIC_WPSR) Write Protection Violation Status Mask */
#define PDMIC_WPSR_WPVS(value)                (PDMIC_WPSR_WPVS_Msk & ((value) << PDMIC_WPSR_WPVS_Pos))
#define PDMIC_WPSR_WPVSRC_Pos                 _U_(8)                                               /**< (PDMIC_WPSR) Write Protection Violation Source Position */
#define PDMIC_WPSR_WPVSRC_Msk                 (_U_(0xFFFF) << PDMIC_WPSR_WPVSRC_Pos)               /**< (PDMIC_WPSR) Write Protection Violation Source Mask */
#define PDMIC_WPSR_WPVSRC(value)              (PDMIC_WPSR_WPVSRC_Msk & ((value) << PDMIC_WPSR_WPVSRC_Pos))
#define PDMIC_WPSR_Msk                        _U_(0x00FFFF01)                                      /**< (PDMIC_WPSR) Register Mask  */


/** \brief PDMIC register offsets definitions */
#define PDMIC_CR_REG_OFST              (0x00)              /**< (PDMIC_CR) Control Register Offset */
#define PDMIC_MR_REG_OFST              (0x04)              /**< (PDMIC_MR) Mode Register Offset */
#define PDMIC_CDR_REG_OFST             (0x14)              /**< (PDMIC_CDR) Converted Data Register Offset */
#define PDMIC_IER_REG_OFST             (0x18)              /**< (PDMIC_IER) Interrupt Enable Register Offset */
#define PDMIC_IDR_REG_OFST             (0x1C)              /**< (PDMIC_IDR) Interrupt Disable Register Offset */
#define PDMIC_IMR_REG_OFST             (0x20)              /**< (PDMIC_IMR) Interrupt Mask Register Offset */
#define PDMIC_ISR_REG_OFST             (0x24)              /**< (PDMIC_ISR) Interrupt Status Register Offset */
#define PDMIC_DSPR0_REG_OFST           (0x58)              /**< (PDMIC_DSPR0) DSP Configuration Register 0 Offset */
#define PDMIC_DSPR1_REG_OFST           (0x5C)              /**< (PDMIC_DSPR1) DSP Configuration Register 1 Offset */
#define PDMIC_WPMR_REG_OFST            (0xE4)              /**< (PDMIC_WPMR) Write Protection Mode Register Offset */
#define PDMIC_WPSR_REG_OFST            (0xE8)              /**< (PDMIC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PDMIC register API structure */
typedef struct
{
  __IO  uint32_t                       PDMIC_CR;           /**< Offset: 0x00 (R/W  32) Control Register */
  __IO  uint32_t                       PDMIC_MR;           /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0x0C];
  __I   uint32_t                       PDMIC_CDR;          /**< Offset: 0x14 (R/   32) Converted Data Register */
  __O   uint32_t                       PDMIC_IER;          /**< Offset: 0x18 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PDMIC_IDR;          /**< Offset: 0x1C ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PDMIC_IMR;          /**< Offset: 0x20 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       PDMIC_ISR;          /**< Offset: 0x24 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved2[0x30];
  __IO  uint32_t                       PDMIC_DSPR0;        /**< Offset: 0x58 (R/W  32) DSP Configuration Register 0 */
  __IO  uint32_t                       PDMIC_DSPR1;        /**< Offset: 0x5C (R/W  32) DSP Configuration Register 1 */
  __I   uint8_t                        Reserved3[0x84];
  __IO  uint32_t                       PDMIC_WPMR;         /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PDMIC_WPSR;         /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} pdmic_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_PDMIC_COMPONENT_H_ */
