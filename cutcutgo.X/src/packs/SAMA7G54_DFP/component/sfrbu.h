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

/* file generated from device description version 2021-07-26T12:51:16Z */
#ifndef _SAMA7G_SFRBU_COMPONENT_H_
#define _SAMA7G_SFRBU_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFRBU                                        */
/* ************************************************************************** */

/* -------- SFRBU_PSWBU : (SFRBU Offset: 0x00) (R/W 32) Power Switch BU Control -------- */
#define SFRBU_PSWBU_RESETVALUE                _U_(0x01)                                            /**<  (SFRBU_PSWBU) Power Switch BU Control  Reset Value */

#define SFRBU_PSWBU_CTRL_Pos                  _U_(0)                                               /**< (SFRBU_PSWBU) Power Switch BU Control Position */
#define SFRBU_PSWBU_CTRL_Msk                  (_U_(0x1) << SFRBU_PSWBU_CTRL_Pos)                   /**< (SFRBU_PSWBU) Power Switch BU Control Mask */
#define SFRBU_PSWBU_CTRL(value)               (SFRBU_PSWBU_CTRL_Msk & ((value) << SFRBU_PSWBU_CTRL_Pos))
#define   SFRBU_PSWBU_CTRL_HARD_Val           _U_(0x0)                                             /**< (SFRBU_PSWBU) Power Switch BU is controlled by hardware (SOFTSWITCH bit has no action).  */
#define   SFRBU_PSWBU_CTRL_SOFT_Val           _U_(0x1)                                             /**< (SFRBU_PSWBU) Power Switch BU is controlled by software (SOFTSWITCH bit has an action).  */
#define SFRBU_PSWBU_CTRL_HARD                 (SFRBU_PSWBU_CTRL_HARD_Val << SFRBU_PSWBU_CTRL_Pos)  /**< (SFRBU_PSWBU) Power Switch BU is controlled by hardware (SOFTSWITCH bit has no action). Position  */
#define SFRBU_PSWBU_CTRL_SOFT                 (SFRBU_PSWBU_CTRL_SOFT_Val << SFRBU_PSWBU_CTRL_Pos)  /**< (SFRBU_PSWBU) Power Switch BU is controlled by software (SOFTSWITCH bit has an action). Position  */
#define SFRBU_PSWBU_SOFTSWITCH_Pos            _U_(1)                                               /**< (SFRBU_PSWBU) Power Switch BU Source Selection Position */
#define SFRBU_PSWBU_SOFTSWITCH_Msk            (_U_(0x1) << SFRBU_PSWBU_SOFTSWITCH_Pos)             /**< (SFRBU_PSWBU) Power Switch BU Source Selection Mask */
#define SFRBU_PSWBU_SOFTSWITCH(value)         (SFRBU_PSWBU_SOFTSWITCH_Msk & ((value) << SFRBU_PSWBU_SOFTSWITCH_Pos))
#define   SFRBU_PSWBU_SOFTSWITCH_VBAT_Val     _U_(0x0)                                             /**< (SFRBU_PSWBU) LDO Supply source is VBAT.  */
#define   SFRBU_PSWBU_SOFTSWITCH_VDDIN33_Val  _U_(0x1)                                             /**< (SFRBU_PSWBU) LDO Supply source is VDDIN33.  */
#define SFRBU_PSWBU_SOFTSWITCH_VBAT           (SFRBU_PSWBU_SOFTSWITCH_VBAT_Val << SFRBU_PSWBU_SOFTSWITCH_Pos) /**< (SFRBU_PSWBU) LDO Supply source is VBAT. Position  */
#define SFRBU_PSWBU_SOFTSWITCH_VDDIN33        (SFRBU_PSWBU_SOFTSWITCH_VDDIN33_Val << SFRBU_PSWBU_SOFTSWITCH_Pos) /**< (SFRBU_PSWBU) LDO Supply source is VDDIN33. Position  */
#define SFRBU_PSWBU_STATE_Pos                 _U_(2)                                               /**< (SFRBU_PSWBU) Power Switch BU State (Read-only) Position */
#define SFRBU_PSWBU_STATE_Msk                 (_U_(0x1) << SFRBU_PSWBU_STATE_Pos)                  /**< (SFRBU_PSWBU) Power Switch BU State (Read-only) Mask */
#define SFRBU_PSWBU_STATE(value)              (SFRBU_PSWBU_STATE_Msk & ((value) << SFRBU_PSWBU_STATE_Pos))
#define   SFRBU_PSWBU_STATE_VBAT_Val          _U_(0x0)                                             /**< (SFRBU_PSWBU) LDO BU Supply source is VBAT.  */
#define   SFRBU_PSWBU_STATE_VDDIN33_Val       _U_(0x1)                                             /**< (SFRBU_PSWBU) LDO BU Supply source is VDDIN33.  */
#define SFRBU_PSWBU_STATE_VBAT                (SFRBU_PSWBU_STATE_VBAT_Val << SFRBU_PSWBU_STATE_Pos) /**< (SFRBU_PSWBU) LDO BU Supply source is VBAT. Position  */
#define SFRBU_PSWBU_STATE_VDDIN33             (SFRBU_PSWBU_STATE_VDDIN33_Val << SFRBU_PSWBU_STATE_Pos) /**< (SFRBU_PSWBU) LDO BU Supply source is VDDIN33. Position  */
#define SFRBU_PSWBU_PSWKEY_Pos                _U_(8)                                               /**< (SFRBU_PSWBU) Specific Value Mandatory to Allow Writing of Other Register Bits (Write-only) Position */
#define SFRBU_PSWBU_PSWKEY_Msk                (_U_(0xFFFFFF) << SFRBU_PSWBU_PSWKEY_Pos)            /**< (SFRBU_PSWBU) Specific Value Mandatory to Allow Writing of Other Register Bits (Write-only) Mask */
#define SFRBU_PSWBU_PSWKEY(value)             (SFRBU_PSWBU_PSWKEY_Msk & ((value) << SFRBU_PSWBU_PSWKEY_Pos))
#define   SFRBU_PSWBU_PSWKEY_PASSWD_Val       _U_(0x4BD20C)                                        /**< (SFRBU_PSWBU) Writing any other value in this field aborts the write operation in the SFRBU_PSWBU register. Always reads as 0.  */
#define SFRBU_PSWBU_PSWKEY_PASSWD             (SFRBU_PSWBU_PSWKEY_PASSWD_Val << SFRBU_PSWBU_PSWKEY_Pos) /**< (SFRBU_PSWBU) Writing any other value in this field aborts the write operation in the SFRBU_PSWBU register. Always reads as 0. Position  */
#define SFRBU_PSWBU_Msk                       _U_(0xFFFFFF07)                                      /**< (SFRBU_PSWBU) Register Mask  */


/* -------- SFRBU_LDO25CR : (SFRBU Offset: 0x0C) (R/W 32) VDDANAout LDO Pulldown Value -------- */
#define SFRBU_LDO25CR_RESETVALUE              _U_(0x01)                                            /**<  (SFRBU_LDO25CR) VDDANAout LDO Pulldown Value  Reset Value */

#define SFRBU_LDO25CR_PD_VALUE_Pos            _U_(0)                                               /**< (SFRBU_LDO25CR) LDOANA Pull-down Value Position */
#define SFRBU_LDO25CR_PD_VALUE_Msk            (_U_(0x3) << SFRBU_LDO25CR_PD_VALUE_Pos)             /**< (SFRBU_LDO25CR) LDOANA Pull-down Value Mask */
#define SFRBU_LDO25CR_PD_VALUE(value)         (SFRBU_LDO25CR_PD_VALUE_Msk & ((value) << SFRBU_LDO25CR_PD_VALUE_Pos))
#define   SFRBU_LDO25CR_PD_VALUE_NONE_Val     _U_(0x0)                                             /**< (SFRBU_LDO25CR) No pull-down plugged on LDO output when off.  */
#define   SFRBU_LDO25CR_PD_VALUE_500_OHMS_Val _U_(0x1)                                             /**< (SFRBU_LDO25CR) 500 Ohms pull-down plugged on LDO output when off.  */
#define   SFRBU_LDO25CR_PD_VALUE_200_OHMS_Val _U_(0x2)                                             /**< (SFRBU_LDO25CR) 200 Ohms pull-down plugged on LDO output when off.  */
#define   SFRBU_LDO25CR_PD_VALUE_100_OHMS_Val _U_(0x3)                                             /**< (SFRBU_LDO25CR) 100 Ohms pull-down plugged on LDO output when off.  */
#define SFRBU_LDO25CR_PD_VALUE_NONE           (SFRBU_LDO25CR_PD_VALUE_NONE_Val << SFRBU_LDO25CR_PD_VALUE_Pos) /**< (SFRBU_LDO25CR) No pull-down plugged on LDO output when off. Position  */
#define SFRBU_LDO25CR_PD_VALUE_500_OHMS       (SFRBU_LDO25CR_PD_VALUE_500_OHMS_Val << SFRBU_LDO25CR_PD_VALUE_Pos) /**< (SFRBU_LDO25CR) 500 Ohms pull-down plugged on LDO output when off. Position  */
#define SFRBU_LDO25CR_PD_VALUE_200_OHMS       (SFRBU_LDO25CR_PD_VALUE_200_OHMS_Val << SFRBU_LDO25CR_PD_VALUE_Pos) /**< (SFRBU_LDO25CR) 200 Ohms pull-down plugged on LDO output when off. Position  */
#define SFRBU_LDO25CR_PD_VALUE_100_OHMS       (SFRBU_LDO25CR_PD_VALUE_100_OHMS_Val << SFRBU_LDO25CR_PD_VALUE_Pos) /**< (SFRBU_LDO25CR) 100 Ohms pull-down plugged on LDO output when off. Position  */
#define SFRBU_LDO25CR_LOWPOWER_Pos            _U_(2)                                               /**< (SFRBU_LDO25CR) LDOANA Low-Power Mode Control Position */
#define SFRBU_LDO25CR_LOWPOWER_Msk            (_U_(0x1) << SFRBU_LDO25CR_LOWPOWER_Pos)             /**< (SFRBU_LDO25CR) LDOANA Low-Power Mode Control Mask */
#define SFRBU_LDO25CR_LOWPOWER(value)         (SFRBU_LDO25CR_LOWPOWER_Msk & ((value) << SFRBU_LDO25CR_LOWPOWER_Pos))
#define   SFRBU_LDO25CR_LOWPOWER_NOT_SET_Val  _U_(0x0)                                             /**< (SFRBU_LDO25CR) Switches LDOANA Low-power mode off.  */
#define   SFRBU_LDO25CR_LOWPOWER_SET_Val      _U_(0x1)                                             /**< (SFRBU_LDO25CR) Switches LDOANA Low-power mode on.  */
#define SFRBU_LDO25CR_LOWPOWER_NOT_SET        (SFRBU_LDO25CR_LOWPOWER_NOT_SET_Val << SFRBU_LDO25CR_LOWPOWER_Pos) /**< (SFRBU_LDO25CR) Switches LDOANA Low-power mode off. Position  */
#define SFRBU_LDO25CR_LOWPOWER_SET            (SFRBU_LDO25CR_LOWPOWER_SET_Val << SFRBU_LDO25CR_LOWPOWER_Pos) /**< (SFRBU_LDO25CR) Switches LDOANA Low-power mode on. Position  */
#define SFRBU_LDO25CR_STATE_Pos               _U_(3)                                               /**< (SFRBU_LDO25CR) LDOANA Switch On/Off Control Position */
#define SFRBU_LDO25CR_STATE_Msk               (_U_(0x1) << SFRBU_LDO25CR_STATE_Pos)                /**< (SFRBU_LDO25CR) LDOANA Switch On/Off Control Mask */
#define SFRBU_LDO25CR_STATE(value)            (SFRBU_LDO25CR_STATE_Msk & ((value) << SFRBU_LDO25CR_STATE_Pos))
#define   SFRBU_LDO25CR_STATE_ON_Val          _U_(0x0)                                             /**< (SFRBU_LDO25CR) Switches LDOANA on.  */
#define   SFRBU_LDO25CR_STATE_OFF_Val         _U_(0x1)                                             /**< (SFRBU_LDO25CR) Switches LDOANA off.  */
#define SFRBU_LDO25CR_STATE_ON                (SFRBU_LDO25CR_STATE_ON_Val << SFRBU_LDO25CR_STATE_Pos) /**< (SFRBU_LDO25CR) Switches LDOANA on. Position  */
#define SFRBU_LDO25CR_STATE_OFF               (SFRBU_LDO25CR_STATE_OFF_Val << SFRBU_LDO25CR_STATE_Pos) /**< (SFRBU_LDO25CR) Switches LDOANA off. Position  */
#define SFRBU_LDO25CR_LDOANAKEY_Pos           _U_(8)                                               /**< (SFRBU_LDO25CR) Specific value mandatory to allow writing of other register bits Position */
#define SFRBU_LDO25CR_LDOANAKEY_Msk           (_U_(0xFFFFFF) << SFRBU_LDO25CR_LDOANAKEY_Pos)       /**< (SFRBU_LDO25CR) Specific value mandatory to allow writing of other register bits Mask */
#define SFRBU_LDO25CR_LDOANAKEY(value)        (SFRBU_LDO25CR_LDOANAKEY_Msk & ((value) << SFRBU_LDO25CR_LDOANAKEY_Pos))
#define   SFRBU_LDO25CR_LDOANAKEY_PASSWD_Val  _U_(0x3B6E18)                                        /**< (SFRBU_LDO25CR) Writing any other value in this field aborts the write operation in the SFRBU_LDO25CR register. Always reads as 0.  */
#define SFRBU_LDO25CR_LDOANAKEY_PASSWD        (SFRBU_LDO25CR_LDOANAKEY_PASSWD_Val << SFRBU_LDO25CR_LDOANAKEY_Pos) /**< (SFRBU_LDO25CR) Writing any other value in this field aborts the write operation in the SFRBU_LDO25CR register. Always reads as 0. Position  */
#define SFRBU_LDO25CR_Msk                     _U_(0xFFFFFF0F)                                      /**< (SFRBU_LDO25CR) Register Mask  */


/* -------- SFRBU_DDRPWR : (SFRBU Offset: 0x10) (R/W 32) DDR Power Control -------- */
#define SFRBU_DDRPWR_RESETVALUE               _U_(0x00)                                            /**<  (SFRBU_DDRPWR) DDR Power Control  Reset Value */

#define SFRBU_DDRPWR_STATE_Pos                _U_(0)                                               /**< (SFRBU_DDRPWR) DDR Power Mode State Position */
#define SFRBU_DDRPWR_STATE_Msk                (_U_(0x1) << SFRBU_DDRPWR_STATE_Pos)                 /**< (SFRBU_DDRPWR) DDR Power Mode State Mask */
#define SFRBU_DDRPWR_STATE(value)             (SFRBU_DDRPWR_STATE_Msk & ((value) << SFRBU_DDRPWR_STATE_Pos))
#define   SFRBU_DDRPWR_STATE_ON_Val           _U_(0x0)                                             /**< (SFRBU_DDRPWR) DDR Power mode is on.  */
#define   SFRBU_DDRPWR_STATE_OFF_Val          _U_(0x1)                                             /**< (SFRBU_DDRPWR) DDR Power mode is off.  */
#define SFRBU_DDRPWR_STATE_ON                 (SFRBU_DDRPWR_STATE_ON_Val << SFRBU_DDRPWR_STATE_Pos) /**< (SFRBU_DDRPWR) DDR Power mode is on. Position  */
#define SFRBU_DDRPWR_STATE_OFF                (SFRBU_DDRPWR_STATE_OFF_Val << SFRBU_DDRPWR_STATE_Pos) /**< (SFRBU_DDRPWR) DDR Power mode is off. Position  */
#define SFRBU_DDRPWR_Msk                      _U_(0x00000001)                                      /**< (SFRBU_DDRPWR) Register Mask  */


/** \brief SFRBU register offsets definitions */
#define SFRBU_PSWBU_REG_OFST           (0x00)              /**< (SFRBU_PSWBU) Power Switch BU Control Offset */
#define SFRBU_LDO25CR_REG_OFST         (0x0C)              /**< (SFRBU_LDO25CR) VDDANAout LDO Pulldown Value Offset */
#define SFRBU_DDRPWR_REG_OFST          (0x10)              /**< (SFRBU_DDRPWR) DDR Power Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFRBU register API structure */
typedef struct
{  /* Special Function Register Backup */
  __IO  uint32_t                       SFRBU_PSWBU;        /**< Offset: 0x00 (R/W  32) Power Switch BU Control */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       SFRBU_LDO25CR;      /**< Offset: 0x0C (R/W  32) VDDANAout LDO Pulldown Value */
  __IO  uint32_t                       SFRBU_DDRPWR;       /**< Offset: 0x10 (R/W  32) DDR Power Control */
} sfrbu_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_SFRBU_COMPONENT_H_ */
