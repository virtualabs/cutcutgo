/*
 * Component description for CMCC
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
#ifndef _SAMG55_CMCC_COMPONENT_H_
#define _SAMG55_CMCC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CMCC                                         */
/* ************************************************************************** */

/* -------- CMCC_TYPE : (CMCC Offset: 0x00) ( R/ 32) Cache Controller Type Register -------- */
#define CMCC_TYPE_AP_Pos                      _U_(0)                                               /**< (CMCC_TYPE) Access Port Access Allowed Position */
#define CMCC_TYPE_AP_Msk                      (_U_(0x1) << CMCC_TYPE_AP_Pos)                       /**< (CMCC_TYPE) Access Port Access Allowed Mask */
#define CMCC_TYPE_AP(value)                   (CMCC_TYPE_AP_Msk & ((value) << CMCC_TYPE_AP_Pos))  
#define CMCC_TYPE_GCLK_Pos                    _U_(1)                                               /**< (CMCC_TYPE) Dynamic Clock Gating Supported Position */
#define CMCC_TYPE_GCLK_Msk                    (_U_(0x1) << CMCC_TYPE_GCLK_Pos)                     /**< (CMCC_TYPE) Dynamic Clock Gating Supported Mask */
#define CMCC_TYPE_GCLK(value)                 (CMCC_TYPE_GCLK_Msk & ((value) << CMCC_TYPE_GCLK_Pos))
#define CMCC_TYPE_RANDP_Pos                   _U_(2)                                               /**< (CMCC_TYPE) Random Selection Policy Supported Position */
#define CMCC_TYPE_RANDP_Msk                   (_U_(0x1) << CMCC_TYPE_RANDP_Pos)                    /**< (CMCC_TYPE) Random Selection Policy Supported Mask */
#define CMCC_TYPE_RANDP(value)                (CMCC_TYPE_RANDP_Msk & ((value) << CMCC_TYPE_RANDP_Pos))
#define CMCC_TYPE_LRUP_Pos                    _U_(3)                                               /**< (CMCC_TYPE) Least Recently Used Policy Supported Position */
#define CMCC_TYPE_LRUP_Msk                    (_U_(0x1) << CMCC_TYPE_LRUP_Pos)                     /**< (CMCC_TYPE) Least Recently Used Policy Supported Mask */
#define CMCC_TYPE_LRUP(value)                 (CMCC_TYPE_LRUP_Msk & ((value) << CMCC_TYPE_LRUP_Pos))
#define CMCC_TYPE_RRP_Pos                     _U_(4)                                               /**< (CMCC_TYPE) Random Selection Policy Supported Position */
#define CMCC_TYPE_RRP_Msk                     (_U_(0x1) << CMCC_TYPE_RRP_Pos)                      /**< (CMCC_TYPE) Random Selection Policy Supported Mask */
#define CMCC_TYPE_RRP(value)                  (CMCC_TYPE_RRP_Msk & ((value) << CMCC_TYPE_RRP_Pos))
#define CMCC_TYPE_WAYNUM_Pos                  _U_(5)                                               /**< (CMCC_TYPE) Number of Ways Position */
#define CMCC_TYPE_WAYNUM_Msk                  (_U_(0x3) << CMCC_TYPE_WAYNUM_Pos)                   /**< (CMCC_TYPE) Number of Ways Mask */
#define CMCC_TYPE_WAYNUM(value)               (CMCC_TYPE_WAYNUM_Msk & ((value) << CMCC_TYPE_WAYNUM_Pos))
#define   CMCC_TYPE_WAYNUM_DMAPPED_Val        _U_(0x0)                                             /**< (CMCC_TYPE) Direct Mapped Cache  */
#define   CMCC_TYPE_WAYNUM_ARCH2WAY_Val       _U_(0x1)                                             /**< (CMCC_TYPE) 2-way set associative  */
#define   CMCC_TYPE_WAYNUM_ARCH4WAY_Val       _U_(0x2)                                             /**< (CMCC_TYPE) 4-way set associative  */
#define   CMCC_TYPE_WAYNUM_ARCH8WAY_Val       _U_(0x3)                                             /**< (CMCC_TYPE) 8-way set associative  */
#define CMCC_TYPE_WAYNUM_DMAPPED              (CMCC_TYPE_WAYNUM_DMAPPED_Val << CMCC_TYPE_WAYNUM_Pos) /**< (CMCC_TYPE) Direct Mapped Cache Position  */
#define CMCC_TYPE_WAYNUM_ARCH2WAY             (CMCC_TYPE_WAYNUM_ARCH2WAY_Val << CMCC_TYPE_WAYNUM_Pos) /**< (CMCC_TYPE) 2-way set associative Position  */
#define CMCC_TYPE_WAYNUM_ARCH4WAY             (CMCC_TYPE_WAYNUM_ARCH4WAY_Val << CMCC_TYPE_WAYNUM_Pos) /**< (CMCC_TYPE) 4-way set associative Position  */
#define CMCC_TYPE_WAYNUM_ARCH8WAY             (CMCC_TYPE_WAYNUM_ARCH8WAY_Val << CMCC_TYPE_WAYNUM_Pos) /**< (CMCC_TYPE) 8-way set associative Position  */
#define CMCC_TYPE_LCKDOWN_Pos                 _U_(7)                                               /**< (CMCC_TYPE) Lockdown Supported Position */
#define CMCC_TYPE_LCKDOWN_Msk                 (_U_(0x1) << CMCC_TYPE_LCKDOWN_Pos)                  /**< (CMCC_TYPE) Lockdown Supported Mask */
#define CMCC_TYPE_LCKDOWN(value)              (CMCC_TYPE_LCKDOWN_Msk & ((value) << CMCC_TYPE_LCKDOWN_Pos))
#define CMCC_TYPE_CSIZE_Pos                   _U_(8)                                               /**< (CMCC_TYPE) Data Cache Size Position */
#define CMCC_TYPE_CSIZE_Msk                   (_U_(0x7) << CMCC_TYPE_CSIZE_Pos)                    /**< (CMCC_TYPE) Data Cache Size Mask */
#define CMCC_TYPE_CSIZE(value)                (CMCC_TYPE_CSIZE_Msk & ((value) << CMCC_TYPE_CSIZE_Pos))
#define   CMCC_TYPE_CSIZE_CSIZE_1KB_Val       _U_(0x0)                                             /**< (CMCC_TYPE) Data cache size is 1 Kbyte  */
#define   CMCC_TYPE_CSIZE_CSIZE_2KB_Val       _U_(0x1)                                             /**< (CMCC_TYPE) Data cache size is 2 Kbytes  */
#define   CMCC_TYPE_CSIZE_CSIZE_4KB_Val       _U_(0x2)                                             /**< (CMCC_TYPE) Data cache size is 4 Kbytes  */
#define   CMCC_TYPE_CSIZE_CSIZE_8KB_Val       _U_(0x3)                                             /**< (CMCC_TYPE) Data cache size is 8 Kbytes  */
#define CMCC_TYPE_CSIZE_CSIZE_1KB             (CMCC_TYPE_CSIZE_CSIZE_1KB_Val << CMCC_TYPE_CSIZE_Pos) /**< (CMCC_TYPE) Data cache size is 1 Kbyte Position  */
#define CMCC_TYPE_CSIZE_CSIZE_2KB             (CMCC_TYPE_CSIZE_CSIZE_2KB_Val << CMCC_TYPE_CSIZE_Pos) /**< (CMCC_TYPE) Data cache size is 2 Kbytes Position  */
#define CMCC_TYPE_CSIZE_CSIZE_4KB             (CMCC_TYPE_CSIZE_CSIZE_4KB_Val << CMCC_TYPE_CSIZE_Pos) /**< (CMCC_TYPE) Data cache size is 4 Kbytes Position  */
#define CMCC_TYPE_CSIZE_CSIZE_8KB             (CMCC_TYPE_CSIZE_CSIZE_8KB_Val << CMCC_TYPE_CSIZE_Pos) /**< (CMCC_TYPE) Data cache size is 8 Kbytes Position  */
#define CMCC_TYPE_CLSIZE_Pos                  _U_(11)                                              /**< (CMCC_TYPE) Cache LIne Size Position */
#define CMCC_TYPE_CLSIZE_Msk                  (_U_(0x7) << CMCC_TYPE_CLSIZE_Pos)                   /**< (CMCC_TYPE) Cache LIne Size Mask */
#define CMCC_TYPE_CLSIZE(value)               (CMCC_TYPE_CLSIZE_Msk & ((value) << CMCC_TYPE_CLSIZE_Pos))
#define   CMCC_TYPE_CLSIZE_CLSIZE_1KB_Val     _U_(0x0)                                             /**< (CMCC_TYPE) Cache line size is 4 bytes  */
#define   CMCC_TYPE_CLSIZE_CLSIZE_2KB_Val     _U_(0x1)                                             /**< (CMCC_TYPE) Cache line size is 8 bytes  */
#define   CMCC_TYPE_CLSIZE_CLSIZE_4KB_Val     _U_(0x2)                                             /**< (CMCC_TYPE) Cache line size is 16 bytes  */
#define   CMCC_TYPE_CLSIZE_CLSIZE_8KB_Val     _U_(0x3)                                             /**< (CMCC_TYPE) Cache line size is 32 bytes  */
#define CMCC_TYPE_CLSIZE_CLSIZE_1KB           (CMCC_TYPE_CLSIZE_CLSIZE_1KB_Val << CMCC_TYPE_CLSIZE_Pos) /**< (CMCC_TYPE) Cache line size is 4 bytes Position  */
#define CMCC_TYPE_CLSIZE_CLSIZE_2KB           (CMCC_TYPE_CLSIZE_CLSIZE_2KB_Val << CMCC_TYPE_CLSIZE_Pos) /**< (CMCC_TYPE) Cache line size is 8 bytes Position  */
#define CMCC_TYPE_CLSIZE_CLSIZE_4KB           (CMCC_TYPE_CLSIZE_CLSIZE_4KB_Val << CMCC_TYPE_CLSIZE_Pos) /**< (CMCC_TYPE) Cache line size is 16 bytes Position  */
#define CMCC_TYPE_CLSIZE_CLSIZE_8KB           (CMCC_TYPE_CLSIZE_CLSIZE_8KB_Val << CMCC_TYPE_CLSIZE_Pos) /**< (CMCC_TYPE) Cache line size is 32 bytes Position  */
#define CMCC_TYPE_Msk                         _U_(0x00003FFF)                                      /**< (CMCC_TYPE) Register Mask  */


/* -------- CMCC_CFG : (CMCC Offset: 0x04) (R/W 32) Cache Controller Configuration Register -------- */
#define CMCC_CFG_GCLKDIS_Pos                  _U_(0)                                               /**< (CMCC_CFG) Disable Clock Gating Position */
#define CMCC_CFG_GCLKDIS_Msk                  (_U_(0x1) << CMCC_CFG_GCLKDIS_Pos)                   /**< (CMCC_CFG) Disable Clock Gating Mask */
#define CMCC_CFG_GCLKDIS(value)               (CMCC_CFG_GCLKDIS_Msk & ((value) << CMCC_CFG_GCLKDIS_Pos))
#define CMCC_CFG_ICDIS_Pos                    _U_(1)                                               /**< (CMCC_CFG)  Position */
#define CMCC_CFG_ICDIS_Msk                    (_U_(0x1) << CMCC_CFG_ICDIS_Pos)                     /**< (CMCC_CFG)  Mask */
#define CMCC_CFG_ICDIS(value)                 (CMCC_CFG_ICDIS_Msk & ((value) << CMCC_CFG_ICDIS_Pos))
#define CMCC_CFG_DCDIS_Pos                    _U_(2)                                               /**< (CMCC_CFG)  Position */
#define CMCC_CFG_DCDIS_Msk                    (_U_(0x1) << CMCC_CFG_DCDIS_Pos)                     /**< (CMCC_CFG)  Mask */
#define CMCC_CFG_DCDIS(value)                 (CMCC_CFG_DCDIS_Msk & ((value) << CMCC_CFG_DCDIS_Pos))
#define CMCC_CFG_PRGCSIZE_Pos                 _U_(4)                                               /**< (CMCC_CFG)  Position */
#define CMCC_CFG_PRGCSIZE_Msk                 (_U_(0x7) << CMCC_CFG_PRGCSIZE_Pos)                  /**< (CMCC_CFG)  Mask */
#define CMCC_CFG_PRGCSIZE(value)              (CMCC_CFG_PRGCSIZE_Msk & ((value) << CMCC_CFG_PRGCSIZE_Pos))
#define CMCC_CFG_Msk                          _U_(0x00000077)                                      /**< (CMCC_CFG) Register Mask  */


/* -------- CMCC_CTRL : (CMCC Offset: 0x08) ( /W 32) Cache Controller Control Register -------- */
#define CMCC_CTRL_CEN_Pos                     _U_(0)                                               /**< (CMCC_CTRL) Cache Controller Enable Position */
#define CMCC_CTRL_CEN_Msk                     (_U_(0x1) << CMCC_CTRL_CEN_Pos)                      /**< (CMCC_CTRL) Cache Controller Enable Mask */
#define CMCC_CTRL_CEN(value)                  (CMCC_CTRL_CEN_Msk & ((value) << CMCC_CTRL_CEN_Pos))
#define CMCC_CTRL_Msk                         _U_(0x00000001)                                      /**< (CMCC_CTRL) Register Mask  */


/* -------- CMCC_SR : (CMCC Offset: 0x0C) ( R/ 32) Cache Controller Status Register -------- */
#define CMCC_SR_CSTS_Pos                      _U_(0)                                               /**< (CMCC_SR) Cache Controller Status Position */
#define CMCC_SR_CSTS_Msk                      (_U_(0x1) << CMCC_SR_CSTS_Pos)                       /**< (CMCC_SR) Cache Controller Status Mask */
#define CMCC_SR_CSTS(value)                   (CMCC_SR_CSTS_Msk & ((value) << CMCC_SR_CSTS_Pos))  
#define CMCC_SR_Msk                           _U_(0x00000001)                                      /**< (CMCC_SR) Register Mask  */


/* -------- CMCC_MAINT0 : (CMCC Offset: 0x20) ( /W 32) Cache Controller Maintenance Register 0 -------- */
#define CMCC_MAINT0_INVALL_Pos                _U_(0)                                               /**< (CMCC_MAINT0) Cache Controller Invalidate All Position */
#define CMCC_MAINT0_INVALL_Msk                (_U_(0x1) << CMCC_MAINT0_INVALL_Pos)                 /**< (CMCC_MAINT0) Cache Controller Invalidate All Mask */
#define CMCC_MAINT0_INVALL(value)             (CMCC_MAINT0_INVALL_Msk & ((value) << CMCC_MAINT0_INVALL_Pos))
#define CMCC_MAINT0_Msk                       _U_(0x00000001)                                      /**< (CMCC_MAINT0) Register Mask  */


/* -------- CMCC_MAINT1 : (CMCC Offset: 0x24) ( /W 32) Cache Controller Maintenance Register 1 -------- */
#define CMCC_MAINT1_INDEX_Pos                 _U_(4)                                               /**< (CMCC_MAINT1) Invalidate Index Position */
#define CMCC_MAINT1_INDEX_Msk                 (_U_(0x1F) << CMCC_MAINT1_INDEX_Pos)                 /**< (CMCC_MAINT1) Invalidate Index Mask */
#define CMCC_MAINT1_INDEX(value)              (CMCC_MAINT1_INDEX_Msk & ((value) << CMCC_MAINT1_INDEX_Pos))
#define CMCC_MAINT1_WAY_Pos                   _U_(30)                                              /**< (CMCC_MAINT1) Invalidate Way Position */
#define CMCC_MAINT1_WAY_Msk                   (_U_(0x3) << CMCC_MAINT1_WAY_Pos)                    /**< (CMCC_MAINT1) Invalidate Way Mask */
#define CMCC_MAINT1_WAY(value)                (CMCC_MAINT1_WAY_Msk & ((value) << CMCC_MAINT1_WAY_Pos))
#define   CMCC_MAINT1_WAY_WAY0_Val            _U_(0x0)                                             /**< (CMCC_MAINT1) Way 0 is selection for index invalidation  */
#define   CMCC_MAINT1_WAY_WAY1_Val            _U_(0x1)                                             /**< (CMCC_MAINT1) Way 1 is selection for index invalidation  */
#define   CMCC_MAINT1_WAY_WAY2_Val            _U_(0x2)                                             /**< (CMCC_MAINT1) Way 2 is selection for index invalidation  */
#define   CMCC_MAINT1_WAY_WAY3_Val            _U_(0x3)                                             /**< (CMCC_MAINT1) Way 3 is selection for index invalidation  */
#define CMCC_MAINT1_WAY_WAY0                  (CMCC_MAINT1_WAY_WAY0_Val << CMCC_MAINT1_WAY_Pos)    /**< (CMCC_MAINT1) Way 0 is selection for index invalidation Position  */
#define CMCC_MAINT1_WAY_WAY1                  (CMCC_MAINT1_WAY_WAY1_Val << CMCC_MAINT1_WAY_Pos)    /**< (CMCC_MAINT1) Way 1 is selection for index invalidation Position  */
#define CMCC_MAINT1_WAY_WAY2                  (CMCC_MAINT1_WAY_WAY2_Val << CMCC_MAINT1_WAY_Pos)    /**< (CMCC_MAINT1) Way 2 is selection for index invalidation Position  */
#define CMCC_MAINT1_WAY_WAY3                  (CMCC_MAINT1_WAY_WAY3_Val << CMCC_MAINT1_WAY_Pos)    /**< (CMCC_MAINT1) Way 3 is selection for index invalidation Position  */
#define CMCC_MAINT1_Msk                       _U_(0xC00001F0)                                      /**< (CMCC_MAINT1) Register Mask  */


/* -------- CMCC_MCFG : (CMCC Offset: 0x28) (R/W 32) Cache Controller Monitor Configuration Register -------- */
#define CMCC_MCFG_MODE_Pos                    _U_(0)                                               /**< (CMCC_MCFG) Cache Controller Monitor Counter Mode Position */
#define CMCC_MCFG_MODE_Msk                    (_U_(0x3) << CMCC_MCFG_MODE_Pos)                     /**< (CMCC_MCFG) Cache Controller Monitor Counter Mode Mask */
#define CMCC_MCFG_MODE(value)                 (CMCC_MCFG_MODE_Msk & ((value) << CMCC_MCFG_MODE_Pos))
#define   CMCC_MCFG_MODE_CYCLE_COUNT_Val      _U_(0x0)                                             /**< (CMCC_MCFG) Cycle counter  */
#define   CMCC_MCFG_MODE_IHIT_COUNT_Val       _U_(0x1)                                             /**< (CMCC_MCFG) Instruction hit counter  */
#define   CMCC_MCFG_MODE_DHIT_COUNT_Val       _U_(0x2)                                             /**< (CMCC_MCFG) Data hit counter  */
#define CMCC_MCFG_MODE_CYCLE_COUNT            (CMCC_MCFG_MODE_CYCLE_COUNT_Val << CMCC_MCFG_MODE_Pos) /**< (CMCC_MCFG) Cycle counter Position  */
#define CMCC_MCFG_MODE_IHIT_COUNT             (CMCC_MCFG_MODE_IHIT_COUNT_Val << CMCC_MCFG_MODE_Pos) /**< (CMCC_MCFG) Instruction hit counter Position  */
#define CMCC_MCFG_MODE_DHIT_COUNT             (CMCC_MCFG_MODE_DHIT_COUNT_Val << CMCC_MCFG_MODE_Pos) /**< (CMCC_MCFG) Data hit counter Position  */
#define CMCC_MCFG_Msk                         _U_(0x00000003)                                      /**< (CMCC_MCFG) Register Mask  */


/* -------- CMCC_MEN : (CMCC Offset: 0x2C) (R/W 32) Cache Controller Monitor Enable Register -------- */
#define CMCC_MEN_MENABLE_Pos                  _U_(0)                                               /**< (CMCC_MEN) Cache Controller Monitor Enable Position */
#define CMCC_MEN_MENABLE_Msk                  (_U_(0x1) << CMCC_MEN_MENABLE_Pos)                   /**< (CMCC_MEN) Cache Controller Monitor Enable Mask */
#define CMCC_MEN_MENABLE(value)               (CMCC_MEN_MENABLE_Msk & ((value) << CMCC_MEN_MENABLE_Pos))
#define CMCC_MEN_Msk                          _U_(0x00000001)                                      /**< (CMCC_MEN) Register Mask  */


/* -------- CMCC_MCTRL : (CMCC Offset: 0x30) ( /W 32) Cache Controller Monitor Control Register -------- */
#define CMCC_MCTRL_SWRST_Pos                  _U_(0)                                               /**< (CMCC_MCTRL) Monitor Position */
#define CMCC_MCTRL_SWRST_Msk                  (_U_(0x1) << CMCC_MCTRL_SWRST_Pos)                   /**< (CMCC_MCTRL) Monitor Mask */
#define CMCC_MCTRL_SWRST(value)               (CMCC_MCTRL_SWRST_Msk & ((value) << CMCC_MCTRL_SWRST_Pos))
#define CMCC_MCTRL_Msk                        _U_(0x00000001)                                      /**< (CMCC_MCTRL) Register Mask  */


/* -------- CMCC_MSR : (CMCC Offset: 0x34) ( R/ 32) Cache Controller Monitor Status Register -------- */
#define CMCC_MSR_EVENT_CNT_Pos                _U_(0)                                               /**< (CMCC_MSR) Monitor Event Counter Position */
#define CMCC_MSR_EVENT_CNT_Msk                (_U_(0xFFFFFFFF) << CMCC_MSR_EVENT_CNT_Pos)          /**< (CMCC_MSR) Monitor Event Counter Mask */
#define CMCC_MSR_EVENT_CNT(value)             (CMCC_MSR_EVENT_CNT_Msk & ((value) << CMCC_MSR_EVENT_CNT_Pos))
#define CMCC_MSR_Msk                          _U_(0xFFFFFFFF)                                      /**< (CMCC_MSR) Register Mask  */


/** \brief CMCC register offsets definitions */
#define CMCC_TYPE_REG_OFST             (0x00)              /**< (CMCC_TYPE) Cache Controller Type Register Offset */
#define CMCC_CFG_REG_OFST              (0x04)              /**< (CMCC_CFG) Cache Controller Configuration Register Offset */
#define CMCC_CTRL_REG_OFST             (0x08)              /**< (CMCC_CTRL) Cache Controller Control Register Offset */
#define CMCC_SR_REG_OFST               (0x0C)              /**< (CMCC_SR) Cache Controller Status Register Offset */
#define CMCC_MAINT0_REG_OFST           (0x20)              /**< (CMCC_MAINT0) Cache Controller Maintenance Register 0 Offset */
#define CMCC_MAINT1_REG_OFST           (0x24)              /**< (CMCC_MAINT1) Cache Controller Maintenance Register 1 Offset */
#define CMCC_MCFG_REG_OFST             (0x28)              /**< (CMCC_MCFG) Cache Controller Monitor Configuration Register Offset */
#define CMCC_MEN_REG_OFST              (0x2C)              /**< (CMCC_MEN) Cache Controller Monitor Enable Register Offset */
#define CMCC_MCTRL_REG_OFST            (0x30)              /**< (CMCC_MCTRL) Cache Controller Monitor Control Register Offset */
#define CMCC_MSR_REG_OFST              (0x34)              /**< (CMCC_MSR) Cache Controller Monitor Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CMCC register API structure */
typedef struct
{
  __I   uint32_t                       CMCC_TYPE;          /**< Offset: 0x00 (R/   32) Cache Controller Type Register */
  __IO  uint32_t                       CMCC_CFG;           /**< Offset: 0x04 (R/W  32) Cache Controller Configuration Register */
  __O   uint32_t                       CMCC_CTRL;          /**< Offset: 0x08 ( /W  32) Cache Controller Control Register */
  __I   uint32_t                       CMCC_SR;            /**< Offset: 0x0C (R/   32) Cache Controller Status Register */
  __I   uint8_t                        Reserved1[0x10];
  __O   uint32_t                       CMCC_MAINT0;        /**< Offset: 0x20 ( /W  32) Cache Controller Maintenance Register 0 */
  __O   uint32_t                       CMCC_MAINT1;        /**< Offset: 0x24 ( /W  32) Cache Controller Maintenance Register 1 */
  __IO  uint32_t                       CMCC_MCFG;          /**< Offset: 0x28 (R/W  32) Cache Controller Monitor Configuration Register */
  __IO  uint32_t                       CMCC_MEN;           /**< Offset: 0x2C (R/W  32) Cache Controller Monitor Enable Register */
  __O   uint32_t                       CMCC_MCTRL;         /**< Offset: 0x30 ( /W  32) Cache Controller Monitor Control Register */
  __I   uint32_t                       CMCC_MSR;           /**< Offset: 0x34 (R/   32) Cache Controller Monitor Status Register */
} cmcc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_CMCC_COMPONENT_H_ */
