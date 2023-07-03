/*
 * Component description for PIT
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
#ifndef _SAMA5D2_PIT_COMPONENT_H_
#define _SAMA5D2_PIT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PIT                                          */
/* ************************************************************************** */

/* -------- PIT_MR : (PIT Offset: 0x00) (R/W 32) Mode Register -------- */
#define PIT_MR_PIV_Pos                        _U_(0)                                               /**< (PIT_MR) Periodic Interval Value Position */
#define PIT_MR_PIV_Msk                        (_U_(0xFFFFF) << PIT_MR_PIV_Pos)                     /**< (PIT_MR) Periodic Interval Value Mask */
#define PIT_MR_PIV(value)                     (PIT_MR_PIV_Msk & ((value) << PIT_MR_PIV_Pos))      
#define PIT_MR_PITEN_Pos                      _U_(24)                                              /**< (PIT_MR) Period Interval Timer Enabled Position */
#define PIT_MR_PITEN_Msk                      (_U_(0x1) << PIT_MR_PITEN_Pos)                       /**< (PIT_MR) Period Interval Timer Enabled Mask */
#define PIT_MR_PITEN(value)                   (PIT_MR_PITEN_Msk & ((value) << PIT_MR_PITEN_Pos))  
#define PIT_MR_PITIEN_Pos                     _U_(25)                                              /**< (PIT_MR) Periodic Interval Timer Interrupt Enable Position */
#define PIT_MR_PITIEN_Msk                     (_U_(0x1) << PIT_MR_PITIEN_Pos)                      /**< (PIT_MR) Periodic Interval Timer Interrupt Enable Mask */
#define PIT_MR_PITIEN(value)                  (PIT_MR_PITIEN_Msk & ((value) << PIT_MR_PITIEN_Pos))
#define PIT_MR_Msk                            _U_(0x030FFFFF)                                      /**< (PIT_MR) Register Mask  */


/* -------- PIT_SR : (PIT Offset: 0x04) ( R/ 32) Status Register -------- */
#define PIT_SR_PITS_Pos                       _U_(0)                                               /**< (PIT_SR) Periodic Interval Timer Status Position */
#define PIT_SR_PITS_Msk                       (_U_(0x1) << PIT_SR_PITS_Pos)                        /**< (PIT_SR) Periodic Interval Timer Status Mask */
#define PIT_SR_PITS(value)                    (PIT_SR_PITS_Msk & ((value) << PIT_SR_PITS_Pos))    
#define PIT_SR_Msk                            _U_(0x00000001)                                      /**< (PIT_SR) Register Mask  */


/* -------- PIT_PIVR : (PIT Offset: 0x08) ( R/ 32) Periodic Interval Value Register -------- */
#define PIT_PIVR_CPIV_Pos                     _U_(0)                                               /**< (PIT_PIVR) Current Periodic Interval Value Position */
#define PIT_PIVR_CPIV_Msk                     (_U_(0xFFFFF) << PIT_PIVR_CPIV_Pos)                  /**< (PIT_PIVR) Current Periodic Interval Value Mask */
#define PIT_PIVR_CPIV(value)                  (PIT_PIVR_CPIV_Msk & ((value) << PIT_PIVR_CPIV_Pos))
#define PIT_PIVR_PICNT_Pos                    _U_(20)                                              /**< (PIT_PIVR) Periodic Interval Counter Position */
#define PIT_PIVR_PICNT_Msk                    (_U_(0xFFF) << PIT_PIVR_PICNT_Pos)                   /**< (PIT_PIVR) Periodic Interval Counter Mask */
#define PIT_PIVR_PICNT(value)                 (PIT_PIVR_PICNT_Msk & ((value) << PIT_PIVR_PICNT_Pos))
#define PIT_PIVR_Msk                          _U_(0xFFFFFFFF)                                      /**< (PIT_PIVR) Register Mask  */


/* -------- PIT_PIIR : (PIT Offset: 0x0C) ( R/ 32) Periodic Interval Image Register -------- */
#define PIT_PIIR_CPIV_Pos                     _U_(0)                                               /**< (PIT_PIIR) Current Periodic Interval Value Position */
#define PIT_PIIR_CPIV_Msk                     (_U_(0xFFFFF) << PIT_PIIR_CPIV_Pos)                  /**< (PIT_PIIR) Current Periodic Interval Value Mask */
#define PIT_PIIR_CPIV(value)                  (PIT_PIIR_CPIV_Msk & ((value) << PIT_PIIR_CPIV_Pos))
#define PIT_PIIR_PICNT_Pos                    _U_(20)                                              /**< (PIT_PIIR) Periodic Interval Counter Position */
#define PIT_PIIR_PICNT_Msk                    (_U_(0xFFF) << PIT_PIIR_PICNT_Pos)                   /**< (PIT_PIIR) Periodic Interval Counter Mask */
#define PIT_PIIR_PICNT(value)                 (PIT_PIIR_PICNT_Msk & ((value) << PIT_PIIR_PICNT_Pos))
#define PIT_PIIR_Msk                          _U_(0xFFFFFFFF)                                      /**< (PIT_PIIR) Register Mask  */


/** \brief PIT register offsets definitions */
#define PIT_MR_REG_OFST                (0x00)              /**< (PIT_MR) Mode Register Offset */
#define PIT_SR_REG_OFST                (0x04)              /**< (PIT_SR) Status Register Offset */
#define PIT_PIVR_REG_OFST              (0x08)              /**< (PIT_PIVR) Periodic Interval Value Register Offset */
#define PIT_PIIR_REG_OFST              (0x0C)              /**< (PIT_PIIR) Periodic Interval Image Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PIT register API structure */
typedef struct
{
  __IO  uint32_t                       PIT_MR;             /**< Offset: 0x00 (R/W  32) Mode Register */
  __I   uint32_t                       PIT_SR;             /**< Offset: 0x04 (R/   32) Status Register */
  __I   uint32_t                       PIT_PIVR;           /**< Offset: 0x08 (R/   32) Periodic Interval Value Register */
  __I   uint32_t                       PIT_PIIR;           /**< Offset: 0x0C (R/   32) Periodic Interval Image Register */
} pit_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_PIT_COMPONENT_H_ */
