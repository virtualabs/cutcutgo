/*
 * Component description for AXIMX
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
#ifndef _SAMA5D2_AXIMX_COMPONENT_H_
#define _SAMA5D2_AXIMX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR AXIMX                                        */
/* ************************************************************************** */

/* -------- AXIMX_REMAP : (AXIMX Offset: 0x00) ( /W 32) AXI Matrix Remap Register -------- */
#define AXIMX_REMAP_REMAP0_Pos                _U_(0)                                               /**< (AXIMX_REMAP) Remap State 0 Position */
#define AXIMX_REMAP_REMAP0_Msk                (_U_(0x1) << AXIMX_REMAP_REMAP0_Pos)                 /**< (AXIMX_REMAP) Remap State 0 Mask */
#define AXIMX_REMAP_REMAP0(value)             (AXIMX_REMAP_REMAP0_Msk & ((value) << AXIMX_REMAP_REMAP0_Pos))
#define AXIMX_REMAP_Msk                       _U_(0x00000001)                                      /**< (AXIMX_REMAP) Register Mask  */

#define AXIMX_REMAP_REMAP_Pos                 _U_(0)                                               /**< (AXIMX_REMAP Position) Remap State x */
#define AXIMX_REMAP_REMAP_Msk                 (_U_(0x1) << AXIMX_REMAP_REMAP_Pos)                  /**< (AXIMX_REMAP Mask) REMAP */
#define AXIMX_REMAP_REMAP(value)              (AXIMX_REMAP_REMAP_Msk & ((value) << AXIMX_REMAP_REMAP_Pos)) 

/** \brief AXIMX register offsets definitions */
#define AXIMX_REMAP_REG_OFST           (0x00)              /**< (AXIMX_REMAP) AXI Matrix Remap Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief AXIMX register API structure */
typedef struct
{
  __O   uint32_t                       AXIMX_REMAP;        /**< Offset: 0x00 ( /W  32) AXI Matrix Remap Register */
} aximx_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_AXIMX_COMPONENT_H_ */
