/*
 * Component description for ACC
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
#ifndef _SAMA5D2_ACC_COMPONENT_H_
#define _SAMA5D2_ACC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ACC                                          */
/* ************************************************************************** */

/* -------- ACC_CR : (ACC Offset: 0x00) ( /W 32) Control Register -------- */
#define ACC_CR_SWRST_Pos                      _U_(0)                                               /**< (ACC_CR) Software Reset Position */
#define ACC_CR_SWRST_Msk                      (_U_(0x1) << ACC_CR_SWRST_Pos)                       /**< (ACC_CR) Software Reset Mask */
#define ACC_CR_SWRST(value)                   (ACC_CR_SWRST_Msk & ((value) << ACC_CR_SWRST_Pos))  
#define ACC_CR_Msk                            _U_(0x00000001)                                      /**< (ACC_CR) Register Mask  */


/* -------- ACC_MR : (ACC Offset: 0x04) (R/W 32) Mode Register -------- */
#define ACC_MR_ACEN_Pos                       _U_(8)                                               /**< (ACC_MR) Analog Comparator Enable Position */
#define ACC_MR_ACEN_Msk                       (_U_(0x1) << ACC_MR_ACEN_Pos)                        /**< (ACC_MR) Analog Comparator Enable Mask */
#define ACC_MR_ACEN(value)                    (ACC_MR_ACEN_Msk & ((value) << ACC_MR_ACEN_Pos))    
#define   ACC_MR_ACEN_DIS_Val                 _U_(0x0)                                             /**< (ACC_MR) Analog comparator disabled.  */
#define   ACC_MR_ACEN_EN_Val                  _U_(0x1)                                             /**< (ACC_MR) Analog comparator enabled.  */
#define ACC_MR_ACEN_DIS                       (ACC_MR_ACEN_DIS_Val << ACC_MR_ACEN_Pos)             /**< (ACC_MR) Analog comparator disabled. Position  */
#define ACC_MR_ACEN_EN                        (ACC_MR_ACEN_EN_Val << ACC_MR_ACEN_Pos)              /**< (ACC_MR) Analog comparator enabled. Position  */
#define ACC_MR_INV_Pos                        _U_(12)                                              /**< (ACC_MR) Invert Comparator Output Position */
#define ACC_MR_INV_Msk                        (_U_(0x1) << ACC_MR_INV_Pos)                         /**< (ACC_MR) Invert Comparator Output Mask */
#define ACC_MR_INV(value)                     (ACC_MR_INV_Msk & ((value) << ACC_MR_INV_Pos))      
#define   ACC_MR_INV_DIS_Val                  _U_(0x0)                                             /**< (ACC_MR) Analog comparator output is directly processed.  */
#define   ACC_MR_INV_EN_Val                   _U_(0x1)                                             /**< (ACC_MR) Analog comparator output is inverted prior to being processed.  */
#define ACC_MR_INV_DIS                        (ACC_MR_INV_DIS_Val << ACC_MR_INV_Pos)               /**< (ACC_MR) Analog comparator output is directly processed. Position  */
#define ACC_MR_INV_EN                         (ACC_MR_INV_EN_Val << ACC_MR_INV_Pos)                /**< (ACC_MR) Analog comparator output is inverted prior to being processed. Position  */
#define ACC_MR_Msk                            _U_(0x00001100)                                      /**< (ACC_MR) Register Mask  */


/* -------- ACC_WPMR : (ACC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define ACC_WPMR_WPEN_Pos                     _U_(0)                                               /**< (ACC_WPMR) Write Protection Enable Position */
#define ACC_WPMR_WPEN_Msk                     (_U_(0x1) << ACC_WPMR_WPEN_Pos)                      /**< (ACC_WPMR) Write Protection Enable Mask */
#define ACC_WPMR_WPEN(value)                  (ACC_WPMR_WPEN_Msk & ((value) << ACC_WPMR_WPEN_Pos))
#define ACC_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (ACC_WPMR) Write Protection Key Position */
#define ACC_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << ACC_WPMR_WPKEY_Pos)                /**< (ACC_WPMR) Write Protection Key Mask */
#define ACC_WPMR_WPKEY(value)                 (ACC_WPMR_WPKEY_Msk & ((value) << ACC_WPMR_WPKEY_Pos))
#define   ACC_WPMR_WPKEY_PASSWD_Val           _U_(0x414343)                                        /**< (ACC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define ACC_WPMR_WPKEY_PASSWD                 (ACC_WPMR_WPKEY_PASSWD_Val << ACC_WPMR_WPKEY_Pos)    /**< (ACC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define ACC_WPMR_Msk                          _U_(0xFFFFFF01)                                      /**< (ACC_WPMR) Register Mask  */


/* -------- ACC_WPSR : (ACC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define ACC_WPSR_WPVS_Pos                     _U_(0)                                               /**< (ACC_WPSR) Write Protection Violation Status Position */
#define ACC_WPSR_WPVS_Msk                     (_U_(0x1) << ACC_WPSR_WPVS_Pos)                      /**< (ACC_WPSR) Write Protection Violation Status Mask */
#define ACC_WPSR_WPVS(value)                  (ACC_WPSR_WPVS_Msk & ((value) << ACC_WPSR_WPVS_Pos))
#define ACC_WPSR_Msk                          _U_(0x00000001)                                      /**< (ACC_WPSR) Register Mask  */


/** \brief ACC register offsets definitions */
#define ACC_CR_REG_OFST                (0x00)              /**< (ACC_CR) Control Register Offset */
#define ACC_MR_REG_OFST                (0x04)              /**< (ACC_MR) Mode Register Offset */
#define ACC_WPMR_REG_OFST              (0xE4)              /**< (ACC_WPMR) Write Protection Mode Register Offset */
#define ACC_WPSR_REG_OFST              (0xE8)              /**< (ACC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ACC register API structure */
typedef struct
{
  __O   uint32_t                       ACC_CR;             /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       ACC_MR;             /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0xDC];
  __IO  uint32_t                       ACC_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       ACC_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} acc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_ACC_COMPONENT_H_ */
