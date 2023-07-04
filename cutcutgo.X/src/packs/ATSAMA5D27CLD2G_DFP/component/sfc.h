/*
 * Component description for SFC
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
#ifndef _SAMA5D2_SFC_COMPONENT_H_
#define _SAMA5D2_SFC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFC                                          */
/* ************************************************************************** */

/* -------- SFC_KR : (SFC Offset: 0x00) ( /W 32) SFC Key Register -------- */
#define SFC_KR_KEY_Pos                        _U_(0)                                               /**< (SFC_KR) Key Code Position */
#define SFC_KR_KEY_Msk                        (_U_(0xFF) << SFC_KR_KEY_Pos)                        /**< (SFC_KR) Key Code Mask */
#define SFC_KR_KEY(value)                     (SFC_KR_KEY_Msk & ((value) << SFC_KR_KEY_Pos))      
#define SFC_KR_Msk                            _U_(0x000000FF)                                      /**< (SFC_KR) Register Mask  */


/* -------- SFC_MR : (SFC Offset: 0x04) (R/W 32) SFC Mode Register -------- */
#define SFC_MR_MSK_Pos                        _U_(0)                                               /**< (SFC_MR) Mask Data Registers Position */
#define SFC_MR_MSK_Msk                        (_U_(0x1) << SFC_MR_MSK_Pos)                         /**< (SFC_MR) Mask Data Registers Mask */
#define SFC_MR_MSK(value)                     (SFC_MR_MSK_Msk & ((value) << SFC_MR_MSK_Pos))      
#define SFC_MR_SASEL_Pos                      _U_(4)                                               /**< (SFC_MR) Sense Amplifier Selection Position */
#define SFC_MR_SASEL_Msk                      (_U_(0x1) << SFC_MR_SASEL_Pos)                       /**< (SFC_MR) Sense Amplifier Selection Mask */
#define SFC_MR_SASEL(value)                   (SFC_MR_SASEL_Msk & ((value) << SFC_MR_SASEL_Pos))  
#define SFC_MR_Msk                            _U_(0x00000011)                                      /**< (SFC_MR) Register Mask  */


/* -------- SFC_IER : (SFC Offset: 0x10) ( /W 32) SFC Interrupt Enable Register -------- */
#define SFC_IER_PGMC_Pos                      _U_(0)                                               /**< (SFC_IER) Programming Sequence Completed Interrupt Enable Position */
#define SFC_IER_PGMC_Msk                      (_U_(0x1) << SFC_IER_PGMC_Pos)                       /**< (SFC_IER) Programming Sequence Completed Interrupt Enable Mask */
#define SFC_IER_PGMC(value)                   (SFC_IER_PGMC_Msk & ((value) << SFC_IER_PGMC_Pos))  
#define SFC_IER_PGMF_Pos                      _U_(1)                                               /**< (SFC_IER) Programming Sequence Failed Interrupt Enable Position */
#define SFC_IER_PGMF_Msk                      (_U_(0x1) << SFC_IER_PGMF_Pos)                       /**< (SFC_IER) Programming Sequence Failed Interrupt Enable Mask */
#define SFC_IER_PGMF(value)                   (SFC_IER_PGMF_Msk & ((value) << SFC_IER_PGMF_Pos))  
#define SFC_IER_LCHECK_Pos                    _U_(4)                                               /**< (SFC_IER) Live Integrity Check Error Interrupt Enable Position */
#define SFC_IER_LCHECK_Msk                    (_U_(0x1) << SFC_IER_LCHECK_Pos)                     /**< (SFC_IER) Live Integrity Check Error Interrupt Enable Mask */
#define SFC_IER_LCHECK(value)                 (SFC_IER_LCHECK_Msk & ((value) << SFC_IER_LCHECK_Pos))
#define SFC_IER_ACE_Pos                       _U_(17)                                              /**< (SFC_IER) Area Check Error Interrupt Enable Position */
#define SFC_IER_ACE_Msk                       (_U_(0x1) << SFC_IER_ACE_Pos)                        /**< (SFC_IER) Area Check Error Interrupt Enable Mask */
#define SFC_IER_ACE(value)                    (SFC_IER_ACE_Msk & ((value) << SFC_IER_ACE_Pos))    
#define SFC_IER_Msk                           _U_(0x00020013)                                      /**< (SFC_IER) Register Mask  */


/* -------- SFC_IDR : (SFC Offset: 0x14) ( /W 32) SFC Interrupt Disable Register -------- */
#define SFC_IDR_PGMC_Pos                      _U_(0)                                               /**< (SFC_IDR) Programming Sequence Completed Interrupt Disable Position */
#define SFC_IDR_PGMC_Msk                      (_U_(0x1) << SFC_IDR_PGMC_Pos)                       /**< (SFC_IDR) Programming Sequence Completed Interrupt Disable Mask */
#define SFC_IDR_PGMC(value)                   (SFC_IDR_PGMC_Msk & ((value) << SFC_IDR_PGMC_Pos))  
#define SFC_IDR_PGMF_Pos                      _U_(1)                                               /**< (SFC_IDR) Programming Sequence Failed Interrupt Disable Position */
#define SFC_IDR_PGMF_Msk                      (_U_(0x1) << SFC_IDR_PGMF_Pos)                       /**< (SFC_IDR) Programming Sequence Failed Interrupt Disable Mask */
#define SFC_IDR_PGMF(value)                   (SFC_IDR_PGMF_Msk & ((value) << SFC_IDR_PGMF_Pos))  
#define SFC_IDR_LCHECK_Pos                    _U_(4)                                               /**< (SFC_IDR) Live Integrity Check Error Interrupt Disable Position */
#define SFC_IDR_LCHECK_Msk                    (_U_(0x1) << SFC_IDR_LCHECK_Pos)                     /**< (SFC_IDR) Live Integrity Check Error Interrupt Disable Mask */
#define SFC_IDR_LCHECK(value)                 (SFC_IDR_LCHECK_Msk & ((value) << SFC_IDR_LCHECK_Pos))
#define SFC_IDR_ACE_Pos                       _U_(17)                                              /**< (SFC_IDR) Area Check Error Interrupt Disable Position */
#define SFC_IDR_ACE_Msk                       (_U_(0x1) << SFC_IDR_ACE_Pos)                        /**< (SFC_IDR) Area Check Error Interrupt Disable Mask */
#define SFC_IDR_ACE(value)                    (SFC_IDR_ACE_Msk & ((value) << SFC_IDR_ACE_Pos))    
#define SFC_IDR_Msk                           _U_(0x00020013)                                      /**< (SFC_IDR) Register Mask  */


/* -------- SFC_IMR : (SFC Offset: 0x18) ( R/ 32) SFC Interrupt Mask Register -------- */
#define SFC_IMR_PGMC_Pos                      _U_(0)                                               /**< (SFC_IMR) Programming Sequence Completed Interrupt Mask Position */
#define SFC_IMR_PGMC_Msk                      (_U_(0x1) << SFC_IMR_PGMC_Pos)                       /**< (SFC_IMR) Programming Sequence Completed Interrupt Mask Mask */
#define SFC_IMR_PGMC(value)                   (SFC_IMR_PGMC_Msk & ((value) << SFC_IMR_PGMC_Pos))  
#define SFC_IMR_PGMF_Pos                      _U_(1)                                               /**< (SFC_IMR) Programming Sequence Failed Interrupt Mask Position */
#define SFC_IMR_PGMF_Msk                      (_U_(0x1) << SFC_IMR_PGMF_Pos)                       /**< (SFC_IMR) Programming Sequence Failed Interrupt Mask Mask */
#define SFC_IMR_PGMF(value)                   (SFC_IMR_PGMF_Msk & ((value) << SFC_IMR_PGMF_Pos))  
#define SFC_IMR_LCHECK_Pos                    _U_(4)                                               /**< (SFC_IMR) Live Integrity Checking Error Interrupt Mask Position */
#define SFC_IMR_LCHECK_Msk                    (_U_(0x1) << SFC_IMR_LCHECK_Pos)                     /**< (SFC_IMR) Live Integrity Checking Error Interrupt Mask Mask */
#define SFC_IMR_LCHECK(value)                 (SFC_IMR_LCHECK_Msk & ((value) << SFC_IMR_LCHECK_Pos))
#define SFC_IMR_ACE_Pos                       _U_(17)                                              /**< (SFC_IMR) Area Check Error Interrupt Mask Position */
#define SFC_IMR_ACE_Msk                       (_U_(0x1) << SFC_IMR_ACE_Pos)                        /**< (SFC_IMR) Area Check Error Interrupt Mask Mask */
#define SFC_IMR_ACE(value)                    (SFC_IMR_ACE_Msk & ((value) << SFC_IMR_ACE_Pos))    
#define SFC_IMR_Msk                           _U_(0x00020013)                                      /**< (SFC_IMR) Register Mask  */


/* -------- SFC_SR : (SFC Offset: 0x1C) ( R/ 32) SFC Status Register -------- */
#define SFC_SR_PGMC_Pos                       _U_(0)                                               /**< (SFC_SR) Programming Sequence Completed (cleared on read) Position */
#define SFC_SR_PGMC_Msk                       (_U_(0x1) << SFC_SR_PGMC_Pos)                        /**< (SFC_SR) Programming Sequence Completed (cleared on read) Mask */
#define SFC_SR_PGMC(value)                    (SFC_SR_PGMC_Msk & ((value) << SFC_SR_PGMC_Pos))    
#define SFC_SR_PGMF_Pos                       _U_(1)                                               /**< (SFC_SR) Programming Sequence Failed (cleared on read) Position */
#define SFC_SR_PGMF_Msk                       (_U_(0x1) << SFC_SR_PGMF_Pos)                        /**< (SFC_SR) Programming Sequence Failed (cleared on read) Mask */
#define SFC_SR_PGMF(value)                    (SFC_SR_PGMF_Msk & ((value) << SFC_SR_PGMF_Pos))    
#define SFC_SR_LCHECK_Pos                     _U_(4)                                               /**< (SFC_SR) Live Integrity Checking Error (cleared on read) Position */
#define SFC_SR_LCHECK_Msk                     (_U_(0x1) << SFC_SR_LCHECK_Pos)                      /**< (SFC_SR) Live Integrity Checking Error (cleared on read) Mask */
#define SFC_SR_LCHECK(value)                  (SFC_SR_LCHECK_Msk & ((value) << SFC_SR_LCHECK_Pos))
#define SFC_SR_APLE_Pos                       _U_(16)                                              /**< (SFC_SR) Area Programming Lock Error (cleared on read) Position */
#define SFC_SR_APLE_Msk                       (_U_(0x1) << SFC_SR_APLE_Pos)                        /**< (SFC_SR) Area Programming Lock Error (cleared on read) Mask */
#define SFC_SR_APLE(value)                    (SFC_SR_APLE_Msk & ((value) << SFC_SR_APLE_Pos))    
#define SFC_SR_ACE_Pos                        _U_(17)                                              /**< (SFC_SR) Area Check Error (cleared on read) Position */
#define SFC_SR_ACE_Msk                        (_U_(0x1) << SFC_SR_ACE_Pos)                         /**< (SFC_SR) Area Check Error (cleared on read) Mask */
#define SFC_SR_ACE(value)                     (SFC_SR_ACE_Msk & ((value) << SFC_SR_ACE_Pos))      
#define SFC_SR_Msk                            _U_(0x00030013)                                      /**< (SFC_SR) Register Mask  */


/* -------- SFC_DR : (SFC Offset: 0x20) (R/W 32) SFC Data Register -------- */
#define SFC_DR_DATA_Pos                       _U_(0)                                               /**< (SFC_DR) Fuse Data Position */
#define SFC_DR_DATA_Msk                       (_U_(0xFFFFFFFF) << SFC_DR_DATA_Pos)                 /**< (SFC_DR) Fuse Data Mask */
#define SFC_DR_DATA(value)                    (SFC_DR_DATA_Msk & ((value) << SFC_DR_DATA_Pos))    
#define SFC_DR_Msk                            _U_(0xFFFFFFFF)                                      /**< (SFC_DR) Register Mask  */


/** \brief SFC register offsets definitions */
#define SFC_KR_REG_OFST                (0x00)              /**< (SFC_KR) SFC Key Register Offset */
#define SFC_MR_REG_OFST                (0x04)              /**< (SFC_MR) SFC Mode Register Offset */
#define SFC_IER_REG_OFST               (0x10)              /**< (SFC_IER) SFC Interrupt Enable Register Offset */
#define SFC_IDR_REG_OFST               (0x14)              /**< (SFC_IDR) SFC Interrupt Disable Register Offset */
#define SFC_IMR_REG_OFST               (0x18)              /**< (SFC_IMR) SFC Interrupt Mask Register Offset */
#define SFC_SR_REG_OFST                (0x1C)              /**< (SFC_SR) SFC Status Register Offset */
#define SFC_DR_REG_OFST                (0x20)              /**< (SFC_DR) SFC Data Register Offset */
#define SFC_DR0_REG_OFST               (0x20)              /**< (SFC_DR0) SFC Data Register Offset */
#define SFC_DR1_REG_OFST               (0x24)              /**< (SFC_DR1) SFC Data Register Offset */
#define SFC_DR2_REG_OFST               (0x28)              /**< (SFC_DR2) SFC Data Register Offset */
#define SFC_DR3_REG_OFST               (0x2C)              /**< (SFC_DR3) SFC Data Register Offset */
#define SFC_DR4_REG_OFST               (0x30)              /**< (SFC_DR4) SFC Data Register Offset */
#define SFC_DR5_REG_OFST               (0x34)              /**< (SFC_DR5) SFC Data Register Offset */
#define SFC_DR6_REG_OFST               (0x38)              /**< (SFC_DR6) SFC Data Register Offset */
#define SFC_DR7_REG_OFST               (0x3C)              /**< (SFC_DR7) SFC Data Register Offset */
#define SFC_DR8_REG_OFST               (0x40)              /**< (SFC_DR8) SFC Data Register Offset */
#define SFC_DR9_REG_OFST               (0x44)              /**< (SFC_DR9) SFC Data Register Offset */
#define SFC_DR10_REG_OFST              (0x48)              /**< (SFC_DR10) SFC Data Register Offset */
#define SFC_DR11_REG_OFST              (0x4C)              /**< (SFC_DR11) SFC Data Register Offset */
#define SFC_DR12_REG_OFST              (0x50)              /**< (SFC_DR12) SFC Data Register Offset */
#define SFC_DR13_REG_OFST              (0x54)              /**< (SFC_DR13) SFC Data Register Offset */
#define SFC_DR14_REG_OFST              (0x58)              /**< (SFC_DR14) SFC Data Register Offset */
#define SFC_DR15_REG_OFST              (0x5C)              /**< (SFC_DR15) SFC Data Register Offset */
#define SFC_DR16_REG_OFST              (0x60)              /**< (SFC_DR16) SFC Data Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFC register API structure */
typedef struct
{
  __O   uint32_t                       SFC_KR;             /**< Offset: 0x00 ( /W  32) SFC Key Register */
  __IO  uint32_t                       SFC_MR;             /**< Offset: 0x04 (R/W  32) SFC Mode Register */
  __I   uint8_t                        Reserved1[0x08];
  __O   uint32_t                       SFC_IER;            /**< Offset: 0x10 ( /W  32) SFC Interrupt Enable Register */
  __O   uint32_t                       SFC_IDR;            /**< Offset: 0x14 ( /W  32) SFC Interrupt Disable Register */
  __I   uint32_t                       SFC_IMR;            /**< Offset: 0x18 (R/   32) SFC Interrupt Mask Register */
  __I   uint32_t                       SFC_SR;             /**< Offset: 0x1C (R/   32) SFC Status Register */
  __IO  uint32_t                       SFC_DR[17];         /**< Offset: 0x20 (R/W  32) SFC Data Register */
} sfc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_SFC_COMPONENT_H_ */
