/*
 * Component description for GPBR
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
#ifndef _SAMG55_GPBR_COMPONENT_H_
#define _SAMG55_GPBR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GPBR                                         */
/* ************************************************************************** */

/* -------- SYS_GPBR : (GPBR Offset: 0x00) (R/W 32) General Purpose Backup Register 0 -------- */
#define SYS_GPBR_GPBR_VALUE_Pos               _U_(0)                                               /**< (SYS_GPBR) Value of GPBR x Position */
#define SYS_GPBR_GPBR_VALUE_Msk               (_U_(0xFFFFFFFF) << SYS_GPBR_GPBR_VALUE_Pos)         /**< (SYS_GPBR) Value of GPBR x Mask */
#define SYS_GPBR_GPBR_VALUE(value)            (SYS_GPBR_GPBR_VALUE_Msk & ((value) << SYS_GPBR_GPBR_VALUE_Pos))
#define SYS_GPBR_Msk                          _U_(0xFFFFFFFF)                                      /**< (SYS_GPBR) Register Mask  */


/** \brief GPBR register offsets definitions */
#define SYS_GPBR_REG_OFST              (0x00)              /**< (SYS_GPBR) General Purpose Backup Register 0 Offset */
#define SYS_GPBR0_REG_OFST             (0x00)              /**< (SYS_GPBR0) General Purpose Backup Register 0 Offset */
#define SYS_GPBR1_REG_OFST             (0x04)              /**< (SYS_GPBR1) General Purpose Backup Register 0 Offset */
#define SYS_GPBR2_REG_OFST             (0x08)              /**< (SYS_GPBR2) General Purpose Backup Register 0 Offset */
#define SYS_GPBR3_REG_OFST             (0x0C)              /**< (SYS_GPBR3) General Purpose Backup Register 0 Offset */
#define SYS_GPBR4_REG_OFST             (0x10)              /**< (SYS_GPBR4) General Purpose Backup Register 0 Offset */
#define SYS_GPBR5_REG_OFST             (0x14)              /**< (SYS_GPBR5) General Purpose Backup Register 0 Offset */
#define SYS_GPBR6_REG_OFST             (0x18)              /**< (SYS_GPBR6) General Purpose Backup Register 0 Offset */
#define SYS_GPBR7_REG_OFST             (0x1C)              /**< (SYS_GPBR7) General Purpose Backup Register 0 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPBR register API structure */
typedef struct
{
  __IO  uint32_t                       SYS_GPBR[8];        /**< Offset: 0x00 (R/W  32) General Purpose Backup Register 0 */
} gpbr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_GPBR_COMPONENT_H_ */
