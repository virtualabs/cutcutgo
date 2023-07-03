/*
 * Component description for CHIPID
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

/* file generated from device description version 2021-07-26T12:51:16Z */
#ifndef _SAMA7G_CHIPID_COMPONENT_H_
#define _SAMA7G_CHIPID_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CHIPID                                       */
/* ************************************************************************** */

/* -------- CHIPID_CIDR : (CHIPID Offset: 0x00) ( R/ 32) Chip ID Register -------- */
#define CHIPID_CIDR_VERSION_Pos               _U_(0)                                               /**< (CHIPID_CIDR) Version of the Device Position */
#define CHIPID_CIDR_VERSION_Msk               (_U_(0xF) << CHIPID_CIDR_VERSION_Pos)                /**< (CHIPID_CIDR) Version of the Device Mask */
#define CHIPID_CIDR_VERSION(value)            (CHIPID_CIDR_VERSION_Msk & ((value) << CHIPID_CIDR_VERSION_Pos))
#define CHIPID_CIDR_ONE_Pos                   _U_(4)                                               /**< (CHIPID_CIDR) Must be at '1' Position */
#define CHIPID_CIDR_ONE_Msk                   (_U_(0x1) << CHIPID_CIDR_ONE_Pos)                    /**< (CHIPID_CIDR) Must be at '1' Mask */
#define CHIPID_CIDR_ONE(value)                (CHIPID_CIDR_ONE_Msk & ((value) << CHIPID_CIDR_ONE_Pos))
#define CHIPID_CIDR_ID_Pos                    _U_(5)                                               /**< (CHIPID_CIDR) Product ID Position */
#define CHIPID_CIDR_ID_Msk                    (_U_(0x7FFFFF) << CHIPID_CIDR_ID_Pos)                /**< (CHIPID_CIDR) Product ID Mask */
#define CHIPID_CIDR_ID(value)                 (CHIPID_CIDR_ID_Msk & ((value) << CHIPID_CIDR_ID_Pos))
#define CHIPID_CIDR_EXT_Pos                   _U_(31)                                              /**< (CHIPID_CIDR) Extension Flag Position */
#define CHIPID_CIDR_EXT_Msk                   (_U_(0x1) << CHIPID_CIDR_EXT_Pos)                    /**< (CHIPID_CIDR) Extension Flag Mask */
#define CHIPID_CIDR_EXT(value)                (CHIPID_CIDR_EXT_Msk & ((value) << CHIPID_CIDR_EXT_Pos))
#define   CHIPID_CIDR_EXT_0_Val               _U_(0x0)                                             /**< (CHIPID_CIDR) Chip ID has a single register definition without extension.  */
#define   CHIPID_CIDR_EXT_1_Val               _U_(0x1)                                             /**< (CHIPID_CIDR) An extended Chip ID exists.  */
#define CHIPID_CIDR_EXT_0                     (CHIPID_CIDR_EXT_0_Val << CHIPID_CIDR_EXT_Pos)       /**< (CHIPID_CIDR) Chip ID has a single register definition without extension. Position  */
#define CHIPID_CIDR_EXT_1                     (CHIPID_CIDR_EXT_1_Val << CHIPID_CIDR_EXT_Pos)       /**< (CHIPID_CIDR) An extended Chip ID exists. Position  */
#define CHIPID_CIDR_Msk                       _U_(0x8FFFFFFF)                                      /**< (CHIPID_CIDR) Register Mask  */


/* -------- CHIPID_EXID : (CHIPID Offset: 0x04) ( R/ 32) Chip ID Extension Register -------- */
#define CHIPID_EXID_EXID_Pos                  _U_(0)                                               /**< (CHIPID_EXID) Chip ID Extension Position */
#define CHIPID_EXID_EXID_Msk                  (_U_(0xFFFFFFFF) << CHIPID_EXID_EXID_Pos)            /**< (CHIPID_EXID) Chip ID Extension Mask */
#define CHIPID_EXID_EXID(value)               (CHIPID_EXID_EXID_Msk & ((value) << CHIPID_EXID_EXID_Pos))
#define CHIPID_EXID_Msk                       _U_(0xFFFFFFFF)                                      /**< (CHIPID_EXID) Register Mask  */


/** \brief CHIPID register offsets definitions */
#define CHIPID_CIDR_REG_OFST           (0x00)              /**< (CHIPID_CIDR) Chip ID Register Offset */
#define CHIPID_EXID_REG_OFST           (0x04)              /**< (CHIPID_EXID) Chip ID Extension Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CHIPID register API structure */
typedef struct
{  /* Chip Identifier */
  __I   uint32_t                       CHIPID_CIDR;        /**< Offset: 0x00 (R/   32) Chip ID Register */
  __I   uint32_t                       CHIPID_EXID;        /**< Offset: 0x04 (R/   32) Chip ID Extension Register */
} chipid_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_CHIPID_COMPONENT_H_ */
