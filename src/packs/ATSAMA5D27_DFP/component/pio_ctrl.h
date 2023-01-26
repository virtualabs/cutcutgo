/**
 * \brief Component description for PIO_CTRL
 *
 * Copyright (c) 2019 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2019-06-13T17:45:36Z */
#ifndef _SAMA5D2_PIO_CTRL_COMPONENT_H_
#define _SAMA5D2_PIO_CTRL_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PIO_CTRL                                     */
/* ************************************************************************** */

/* -------- PIO_CTRL_WPMR : (PIO_CTRL Offset: 0xE0) (R/W 32) PIO Write Protection Mode Register -------- */
#define PIO_CTRL_WPMR_WPEN_Pos                _U_(0)                                               /**< (PIO_CTRL_WPMR) Write Protection Enable Position */
#define PIO_CTRL_WPMR_WPEN_Msk                (_U_(0x1) << PIO_CTRL_WPMR_WPEN_Pos)                 /**< (PIO_CTRL_WPMR) Write Protection Enable Mask */
#define PIO_CTRL_WPMR_WPEN(value)             (PIO_CTRL_WPMR_WPEN_Msk & ((value) << PIO_CTRL_WPMR_WPEN_Pos))
#define PIO_CTRL_WPMR_WPITEN_Pos              _U_(1)                                               /**< (PIO_CTRL_WPMR) Write Protection Interrupt Enable Position */
#define PIO_CTRL_WPMR_WPITEN_Msk              (_U_(0x1) << PIO_CTRL_WPMR_WPITEN_Pos)               /**< (PIO_CTRL_WPMR) Write Protection Interrupt Enable Mask */
#define PIO_CTRL_WPMR_WPITEN(value)           (PIO_CTRL_WPMR_WPITEN_Msk & ((value) << PIO_CTRL_WPMR_WPITEN_Pos))
#define PIO_CTRL_WPMR_WPKEY_Pos               _U_(8)                                               /**< (PIO_CTRL_WPMR) Write Protection Key Position */
#define PIO_CTRL_WPMR_WPKEY_Msk               (_U_(0xFFFFFF) << PIO_CTRL_WPMR_WPKEY_Pos)           /**< (PIO_CTRL_WPMR) Write Protection Key Mask */
#define PIO_CTRL_WPMR_WPKEY(value)            (PIO_CTRL_WPMR_WPKEY_Msk & ((value) << PIO_CTRL_WPMR_WPKEY_Pos))
#define   PIO_CTRL_WPMR_WPKEY_PASSWD_Val      _U_(0x50494F)                                        /**< (PIO_CTRL_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define PIO_CTRL_WPMR_WPKEY_PASSWD            (PIO_CTRL_WPMR_WPKEY_PASSWD_Val << PIO_CTRL_WPMR_WPKEY_Pos) /**< (PIO_CTRL_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define PIO_CTRL_WPMR_Msk                     _U_(0xFFFFFF03)                                      /**< (PIO_CTRL_WPMR) Register Mask  */


/* -------- PIO_CTRL_WPSR : (PIO_CTRL Offset: 0xE4) ( R/ 32) PIO Write Protection Status Register -------- */
#define PIO_CTRL_WPSR_WPVS_Pos                _U_(0)                                               /**< (PIO_CTRL_WPSR) Write Protection Violation Status Position */
#define PIO_CTRL_WPSR_WPVS_Msk                (_U_(0x1) << PIO_CTRL_WPSR_WPVS_Pos)                 /**< (PIO_CTRL_WPSR) Write Protection Violation Status Mask */
#define PIO_CTRL_WPSR_WPVS(value)             (PIO_CTRL_WPSR_WPVS_Msk & ((value) << PIO_CTRL_WPSR_WPVS_Pos))
#define PIO_CTRL_WPSR_WPVSRC_Pos              _U_(8)                                               /**< (PIO_CTRL_WPSR) Write Protection Violation Source Position */
#define PIO_CTRL_WPSR_WPVSRC_Msk              (_U_(0xFFFF) << PIO_CTRL_WPSR_WPVSRC_Pos)            /**< (PIO_CTRL_WPSR) Write Protection Violation Source Mask */
#define PIO_CTRL_WPSR_WPVSRC(value)           (PIO_CTRL_WPSR_WPVSRC_Msk & ((value) << PIO_CTRL_WPSR_WPVSRC_Pos))
#define PIO_CTRL_WPSR_Msk                     _U_(0x00FFFF01)                                      /**< (PIO_CTRL_WPSR) Register Mask  */


/** \brief PIO_CTRL register offsets definitions */
#define PIO_CTRL_WPMR_REG_OFST         (0xE0)              /**< (PIO_CTRL_WPMR) PIO Write Protection Mode Register Offset */
#define PIO_CTRL_WPSR_REG_OFST         (0xE4)              /**< (PIO_CTRL_WPSR) PIO Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PIO_CTRL register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0xE0];
  __IO  uint32_t                       PIO_CTRL_WPMR;      /**< Offset: 0xE0 (R/W  32) PIO Write Protection Mode Register */
  __I   uint32_t                       PIO_CTRL_WPSR;      /**< Offset: 0xE4 (R/   32) PIO Write Protection Status Register */
} pio_ctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_PIO_CTRL_COMPONENT_H_ */
