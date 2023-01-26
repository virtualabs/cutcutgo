/*
 * Component description for SFRBU
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
#ifndef _SAMA5D2_SFRBU_COMPONENT_H_
#define _SAMA5D2_SFRBU_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFRBU                                        */
/* ************************************************************************** */

/* -------- SFRBU_PSWBUCTRL : (SFRBU Offset: 0x00) (R/W 32) Power Switch BU Control Register -------- */
#define SFRBU_PSWBUCTRL_SCTRL_Pos             _U_(0)                                               /**< (SFRBU_PSWBUCTRL) Power Switch BU Software Control Position */
#define SFRBU_PSWBUCTRL_SCTRL_Msk             (_U_(0x1) << SFRBU_PSWBUCTRL_SCTRL_Pos)              /**< (SFRBU_PSWBUCTRL) Power Switch BU Software Control Mask */
#define SFRBU_PSWBUCTRL_SCTRL(value)          (SFRBU_PSWBUCTRL_SCTRL_Msk & ((value) << SFRBU_PSWBUCTRL_SCTRL_Pos))
#define SFRBU_PSWBUCTRL_SSWCTRL_Pos           _U_(1)                                               /**< (SFRBU_PSWBUCTRL) Power Switch BU Source Selection Position */
#define SFRBU_PSWBUCTRL_SSWCTRL_Msk           (_U_(0x1) << SFRBU_PSWBUCTRL_SSWCTRL_Pos)            /**< (SFRBU_PSWBUCTRL) Power Switch BU Source Selection Mask */
#define SFRBU_PSWBUCTRL_SSWCTRL(value)        (SFRBU_PSWBUCTRL_SSWCTRL_Msk & ((value) << SFRBU_PSWBUCTRL_SSWCTRL_Pos))
#define SFRBU_PSWBUCTRL_SMCTRL_Pos            _U_(2)                                               /**< (SFRBU_PSWBUCTRL) Allow Power Switch BU Control by Security Module Autobackup (Hardware) Position */
#define SFRBU_PSWBUCTRL_SMCTRL_Msk            (_U_(0x1) << SFRBU_PSWBUCTRL_SMCTRL_Pos)             /**< (SFRBU_PSWBUCTRL) Allow Power Switch BU Control by Security Module Autobackup (Hardware) Mask */
#define SFRBU_PSWBUCTRL_SMCTRL(value)         (SFRBU_PSWBUCTRL_SMCTRL_Msk & ((value) << SFRBU_PSWBUCTRL_SMCTRL_Pos))
#define SFRBU_PSWBUCTRL_STATE_Pos             _U_(3)                                               /**< (SFRBU_PSWBUCTRL) Power Switch BU state (Read-only) Position */
#define SFRBU_PSWBUCTRL_STATE_Msk             (_U_(0x1) << SFRBU_PSWBUCTRL_STATE_Pos)              /**< (SFRBU_PSWBUCTRL) Power Switch BU state (Read-only) Mask */
#define SFRBU_PSWBUCTRL_STATE(value)          (SFRBU_PSWBUCTRL_STATE_Msk & ((value) << SFRBU_PSWBUCTRL_STATE_Pos))
#define SFRBU_PSWBUCTRL_KEYPSWMODE_Pos        _U_(8)                                               /**< (SFRBU_PSWBUCTRL)  Position */
#define SFRBU_PSWBUCTRL_KEYPSWMODE_Msk        (_U_(0xFFFFFF) << SFRBU_PSWBUCTRL_KEYPSWMODE_Pos)    /**< (SFRBU_PSWBUCTRL)  Mask */
#define SFRBU_PSWBUCTRL_KEYPSWMODE(value)     (SFRBU_PSWBUCTRL_KEYPSWMODE_Msk & ((value) << SFRBU_PSWBUCTRL_KEYPSWMODE_Pos))
#define SFRBU_PSWBUCTRL_Msk                   _U_(0xFFFFFF0F)                                      /**< (SFRBU_PSWBUCTRL) Register Mask  */


/* -------- SFRBU_TSRANGECFG : (SFRBU Offset: 0x04) (R/W 32) TS Range Configuration Register -------- */
#define SFRBU_TSRANGECFG_TSHRSEL_Pos          _U_(0)                                               /**< (SFRBU_TSRANGECFG) Temperature Sensor Range Selection Position */
#define SFRBU_TSRANGECFG_TSHRSEL_Msk          (_U_(0x1) << SFRBU_TSRANGECFG_TSHRSEL_Pos)           /**< (SFRBU_TSRANGECFG) Temperature Sensor Range Selection Mask */
#define SFRBU_TSRANGECFG_TSHRSEL(value)       (SFRBU_TSRANGECFG_TSHRSEL_Msk & ((value) << SFRBU_TSRANGECFG_TSHRSEL_Pos))
#define SFRBU_TSRANGECFG_Msk                  _U_(0x00000001)                                      /**< (SFRBU_TSRANGECFG) Register Mask  */


/* -------- SFRBU_DDRBUMCR : (SFRBU Offset: 0x10) (R/W 32) DDR BU Mode Control Register -------- */
#define SFRBU_DDRBUMCR_BUMEN_Pos              _U_(0)                                               /**< (SFRBU_DDRBUMCR) DDR BU Mode Enable Position */
#define SFRBU_DDRBUMCR_BUMEN_Msk              (_U_(0x1) << SFRBU_DDRBUMCR_BUMEN_Pos)               /**< (SFRBU_DDRBUMCR) DDR BU Mode Enable Mask */
#define SFRBU_DDRBUMCR_BUMEN(value)           (SFRBU_DDRBUMCR_BUMEN_Msk & ((value) << SFRBU_DDRBUMCR_BUMEN_Pos))
#define SFRBU_DDRBUMCR_Msk                    _U_(0x00000001)                                      /**< (SFRBU_DDRBUMCR) Register Mask  */


/* -------- SFRBU_RXLPPUCR : (SFRBU Offset: 0x14) (R/W 32) RXLP Pull-Up Control Register -------- */
#define SFRBU_RXLPPUCR_RXDPUCTRL_Pos          _U_(0)                                               /**< (SFRBU_RXLPPUCR) RXLP RXD Pull-Up Control Position */
#define SFRBU_RXLPPUCR_RXDPUCTRL_Msk          (_U_(0x1) << SFRBU_RXLPPUCR_RXDPUCTRL_Pos)           /**< (SFRBU_RXLPPUCR) RXLP RXD Pull-Up Control Mask */
#define SFRBU_RXLPPUCR_RXDPUCTRL(value)       (SFRBU_RXLPPUCR_RXDPUCTRL_Msk & ((value) << SFRBU_RXLPPUCR_RXDPUCTRL_Pos))
#define SFRBU_RXLPPUCR_Msk                    _U_(0x00000001)                                      /**< (SFRBU_RXLPPUCR) Register Mask  */


/** \brief SFRBU register offsets definitions */
#define SFRBU_PSWBUCTRL_REG_OFST       (0x00)              /**< (SFRBU_PSWBUCTRL) Power Switch BU Control Register Offset */
#define SFRBU_TSRANGECFG_REG_OFST      (0x04)              /**< (SFRBU_TSRANGECFG) TS Range Configuration Register Offset */
#define SFRBU_DDRBUMCR_REG_OFST        (0x10)              /**< (SFRBU_DDRBUMCR) DDR BU Mode Control Register Offset */
#define SFRBU_RXLPPUCR_REG_OFST        (0x14)              /**< (SFRBU_RXLPPUCR) RXLP Pull-Up Control Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFRBU register API structure */
typedef struct
{
  __IO  uint32_t                       SFRBU_PSWBUCTRL;    /**< Offset: 0x00 (R/W  32) Power Switch BU Control Register */
  __IO  uint32_t                       SFRBU_TSRANGECFG;   /**< Offset: 0x04 (R/W  32) TS Range Configuration Register */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       SFRBU_DDRBUMCR;     /**< Offset: 0x10 (R/W  32) DDR BU Mode Control Register */
  __IO  uint32_t                       SFRBU_RXLPPUCR;     /**< Offset: 0x14 (R/W  32) RXLP Pull-Up Control Register */
} sfrbu_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_SFRBU_COMPONENT_H_ */
