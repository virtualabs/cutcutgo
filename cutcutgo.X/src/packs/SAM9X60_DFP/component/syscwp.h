/*
 * Component description for SYSCWP
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

/* file generated from device description version 2021-05-04T16:22:14Z */
#ifndef _SAM9X_SYSCWP_COMPONENT_H_
#define _SAM9X_SYSCWP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SYSCWP                                       */
/* ************************************************************************** */

/* -------- SYSCWP_SYSC_WPMR : (SYSCWP Offset: 0x00) (R/W 32) Write Protection Mode Register -------- */
#define SYSCWP_SYSC_WPMR_WPEN_Pos             _U_(0)                                               /**< (SYSCWP_SYSC_WPMR) Write Protection Enable Position */
#define SYSCWP_SYSC_WPMR_WPEN_Msk             (_U_(0x1) << SYSCWP_SYSC_WPMR_WPEN_Pos)              /**< (SYSCWP_SYSC_WPMR) Write Protection Enable Mask */
#define SYSCWP_SYSC_WPMR_WPEN(value)          (SYSCWP_SYSC_WPMR_WPEN_Msk & ((value) << SYSCWP_SYSC_WPMR_WPEN_Pos))
#define SYSCWP_SYSC_WPMR_WPITEN_Pos           _U_(1)                                               /**< (SYSCWP_SYSC_WPMR) Write Protection RTC Interrupt Enable Position */
#define SYSCWP_SYSC_WPMR_WPITEN_Msk           (_U_(0x1) << SYSCWP_SYSC_WPMR_WPITEN_Pos)            /**< (SYSCWP_SYSC_WPMR) Write Protection RTC Interrupt Enable Mask */
#define SYSCWP_SYSC_WPMR_WPITEN(value)        (SYSCWP_SYSC_WPMR_WPITEN_Msk & ((value) << SYSCWP_SYSC_WPMR_WPITEN_Pos))
#define SYSCWP_SYSC_WPMR_WPKEY_Pos            _U_(8)                                               /**< (SYSCWP_SYSC_WPMR) Write Protection Key Position */
#define SYSCWP_SYSC_WPMR_WPKEY_Msk            (_U_(0xFFFFFF) << SYSCWP_SYSC_WPMR_WPKEY_Pos)        /**< (SYSCWP_SYSC_WPMR) Write Protection Key Mask */
#define SYSCWP_SYSC_WPMR_WPKEY(value)         (SYSCWP_SYSC_WPMR_WPKEY_Msk & ((value) << SYSCWP_SYSC_WPMR_WPKEY_Pos))
#define   SYSCWP_SYSC_WPMR_WPKEY_PASSWD_Val   _U_(0x535943)                                        /**< (SYSCWP_SYSC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0.  */
#define SYSCWP_SYSC_WPMR_WPKEY_PASSWD         (SYSCWP_SYSC_WPMR_WPKEY_PASSWD_Val << SYSCWP_SYSC_WPMR_WPKEY_Pos) /**< (SYSCWP_SYSC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0. Position  */
#define SYSCWP_SYSC_WPMR_Msk                  _U_(0xFFFFFF03)                                      /**< (SYSCWP_SYSC_WPMR) Register Mask  */


/* -------- SYSCWP_SYSC_WPSR : (SYSCWP Offset: 0x04) ( R/ 32) Write Protection Status Register -------- */
#define SYSCWP_SYSC_WPSR_WPVS_Pos             _U_(0)                                               /**< (SYSCWP_SYSC_WPSR) Write Protection Register Violation Status Position */
#define SYSCWP_SYSC_WPSR_WPVS_Msk             (_U_(0x1) << SYSCWP_SYSC_WPSR_WPVS_Pos)              /**< (SYSCWP_SYSC_WPSR) Write Protection Register Violation Status Mask */
#define SYSCWP_SYSC_WPSR_WPVS(value)          (SYSCWP_SYSC_WPSR_WPVS_Msk & ((value) << SYSCWP_SYSC_WPSR_WPVS_Pos))
#define SYSCWP_SYSC_WPSR_WVSRC_Pos            _U_(8)                                               /**< (SYSCWP_SYSC_WPSR) Write Violation Source Position */
#define SYSCWP_SYSC_WPSR_WVSRC_Msk            (_U_(0xFF) << SYSCWP_SYSC_WPSR_WVSRC_Pos)            /**< (SYSCWP_SYSC_WPSR) Write Violation Source Mask */
#define SYSCWP_SYSC_WPSR_WVSRC(value)         (SYSCWP_SYSC_WPSR_WVSRC_Msk & ((value) << SYSCWP_SYSC_WPSR_WVSRC_Pos))
#define SYSCWP_SYSC_WPSR_Msk                  _U_(0x0000FF01)                                      /**< (SYSCWP_SYSC_WPSR) Register Mask  */


/** \brief SYSCWP register offsets definitions */
#define SYSCWP_SYSC_WPMR_REG_OFST      (0x00)              /**< (SYSCWP_SYSC_WPMR) Write Protection Mode Register Offset */
#define SYSCWP_SYSC_WPSR_REG_OFST      (0x04)              /**< (SYSCWP_SYSC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SYSCWP register API structure */
typedef struct
{
  __IO  uint32_t                       SYSCWP_SYSC_WPMR;   /**< Offset: 0x00 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       SYSCWP_SYSC_WPSR;   /**< Offset: 0x04 (R/   32) Write Protection Status Register */
} syscwp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_SYSCWP_COMPONENT_H_ */
