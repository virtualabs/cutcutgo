/*
 * Component description for BSC
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
#ifndef _SAM9X_BSC_COMPONENT_H_
#define _SAM9X_BSC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR BSC                                          */
/* ************************************************************************** */

/* -------- BSC_CR : (BSC Offset: 0x00) (R/W 32) Boot Sequence Controller Configuration Register -------- */
#define BSC_CR_BOOT_Pos                       _U_(0)                                               /**< (BSC_CR) Boot Media Sequence Position */
#define BSC_CR_BOOT_Msk                       (_U_(0x7) << BSC_CR_BOOT_Pos)                        /**< (BSC_CR) Boot Media Sequence Mask */
#define BSC_CR_BOOT(value)                    (BSC_CR_BOOT_Msk & ((value) << BSC_CR_BOOT_Pos))    
#define BSC_CR_WPKEY_Pos                      _U_(16)                                              /**< (BSC_CR) Write Protection Key (Write-only) Position */
#define BSC_CR_WPKEY_Msk                      (_U_(0xFFFF) << BSC_CR_WPKEY_Pos)                    /**< (BSC_CR) Write Protection Key (Write-only) Mask */
#define BSC_CR_WPKEY(value)                   (BSC_CR_WPKEY_Msk & ((value) << BSC_CR_WPKEY_Pos))  
#define   BSC_CR_WPKEY_PASSWD_Val             _U_(0x6683)                                          /**< (BSC_CR) Writing any other value in this field aborts the write operation of the BOOT field. Always reads as 0.  */
#define BSC_CR_WPKEY_PASSWD                   (BSC_CR_WPKEY_PASSWD_Val << BSC_CR_WPKEY_Pos)        /**< (BSC_CR) Writing any other value in this field aborts the write operation of the BOOT field. Always reads as 0. Position  */
#define BSC_CR_Msk                            _U_(0xFFFF0007)                                      /**< (BSC_CR) Register Mask  */


/** \brief BSC register offsets definitions */
#define BSC_CR_REG_OFST                (0x00)              /**< (BSC_CR) Boot Sequence Controller Configuration Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief BSC register API structure */
typedef struct
{
  __IO  uint32_t                       BSC_CR;             /**< Offset: 0x00 (R/W  32) Boot Sequence Controller Configuration Register */
} bsc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_BSC_COMPONENT_H_ */
