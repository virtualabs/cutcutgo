/*
 * Component description for PMECC
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
#ifndef _SAM9X_PMECC_COMPONENT_H_
#define _SAM9X_PMECC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PMECC                                        */
/* ************************************************************************** */

/* -------- PMECC_ECC : (PMECC Offset: 0x00) ( R/ 32) PMECC ECC 0 Register (sec_num = 0) -------- */
#define PMECC_ECC_ECC_Pos                     _U_(0)                                               /**< (PMECC_ECC) BCH Redundancy Position */
#define PMECC_ECC_ECC_Msk                     (_U_(0xFFFFFFFF) << PMECC_ECC_ECC_Pos)               /**< (PMECC_ECC) BCH Redundancy Mask */
#define PMECC_ECC_ECC(value)                  (PMECC_ECC_ECC_Msk & ((value) << PMECC_ECC_ECC_Pos))
#define PMECC_ECC_Msk                         _U_(0xFFFFFFFF)                                      /**< (PMECC_ECC) Register Mask  */


/* -------- PMECC_REM : (PMECC Offset: 0x00) ( R/ 32) PMECC REM 0 Register (sec_num = 0) -------- */
#define PMECC_REM_REM2NP1_Pos                 _U_(0)                                               /**< (PMECC_REM) BCH Remainder 2 * N + 1 Position */
#define PMECC_REM_REM2NP1_Msk                 (_U_(0x3FFF) << PMECC_REM_REM2NP1_Pos)               /**< (PMECC_REM) BCH Remainder 2 * N + 1 Mask */
#define PMECC_REM_REM2NP1(value)              (PMECC_REM_REM2NP1_Msk & ((value) << PMECC_REM_REM2NP1_Pos))
#define PMECC_REM_REM2NP3_Pos                 _U_(16)                                              /**< (PMECC_REM) BCH Remainder 2 * N + 3 Position */
#define PMECC_REM_REM2NP3_Msk                 (_U_(0x3FFF) << PMECC_REM_REM2NP3_Pos)               /**< (PMECC_REM) BCH Remainder 2 * N + 3 Mask */
#define PMECC_REM_REM2NP3(value)              (PMECC_REM_REM2NP3_Msk & ((value) << PMECC_REM_REM2NP3_Pos))
#define PMECC_REM_Msk                         _U_(0x3FFF3FFF)                                      /**< (PMECC_REM) Register Mask  */


/* -------- PMECC_CFG : (PMECC Offset: 0x00) (R/W 32) PMECC Configuration Register -------- */
#define PMECC_CFG_BCH_ERR_Pos                 _U_(0)                                               /**< (PMECC_CFG) Error Correct Capability Position */
#define PMECC_CFG_BCH_ERR_Msk                 (_U_(0x7) << PMECC_CFG_BCH_ERR_Pos)                  /**< (PMECC_CFG) Error Correct Capability Mask */
#define PMECC_CFG_BCH_ERR(value)              (PMECC_CFG_BCH_ERR_Msk & ((value) << PMECC_CFG_BCH_ERR_Pos))
#define   PMECC_CFG_BCH_ERR_BCH_ERR2_Val      _U_(0x0)                                             /**< (PMECC_CFG) 2 errors  */
#define   PMECC_CFG_BCH_ERR_BCH_ERR4_Val      _U_(0x1)                                             /**< (PMECC_CFG) 4 errors  */
#define   PMECC_CFG_BCH_ERR_BCH_ERR8_Val      _U_(0x2)                                             /**< (PMECC_CFG) 8 errors  */
#define   PMECC_CFG_BCH_ERR_BCH_ERR12_Val     _U_(0x3)                                             /**< (PMECC_CFG) 12 errors  */
#define   PMECC_CFG_BCH_ERR_BCH_ERR24_Val     _U_(0x4)                                             /**< (PMECC_CFG) 24 errors  */
#define PMECC_CFG_BCH_ERR_BCH_ERR2            (PMECC_CFG_BCH_ERR_BCH_ERR2_Val << PMECC_CFG_BCH_ERR_Pos) /**< (PMECC_CFG) 2 errors Position  */
#define PMECC_CFG_BCH_ERR_BCH_ERR4            (PMECC_CFG_BCH_ERR_BCH_ERR4_Val << PMECC_CFG_BCH_ERR_Pos) /**< (PMECC_CFG) 4 errors Position  */
#define PMECC_CFG_BCH_ERR_BCH_ERR8            (PMECC_CFG_BCH_ERR_BCH_ERR8_Val << PMECC_CFG_BCH_ERR_Pos) /**< (PMECC_CFG) 8 errors Position  */
#define PMECC_CFG_BCH_ERR_BCH_ERR12           (PMECC_CFG_BCH_ERR_BCH_ERR12_Val << PMECC_CFG_BCH_ERR_Pos) /**< (PMECC_CFG) 12 errors Position  */
#define PMECC_CFG_BCH_ERR_BCH_ERR24           (PMECC_CFG_BCH_ERR_BCH_ERR24_Val << PMECC_CFG_BCH_ERR_Pos) /**< (PMECC_CFG) 24 errors Position  */
#define PMECC_CFG_SECTORSZ_Pos                _U_(4)                                               /**< (PMECC_CFG) Sector Size Position */
#define PMECC_CFG_SECTORSZ_Msk                (_U_(0x1) << PMECC_CFG_SECTORSZ_Pos)                 /**< (PMECC_CFG) Sector Size Mask */
#define PMECC_CFG_SECTORSZ(value)             (PMECC_CFG_SECTORSZ_Msk & ((value) << PMECC_CFG_SECTORSZ_Pos))
#define PMECC_CFG_PAGESIZE_Pos                _U_(8)                                               /**< (PMECC_CFG) Number of Sectors in the Page Position */
#define PMECC_CFG_PAGESIZE_Msk                (_U_(0x3) << PMECC_CFG_PAGESIZE_Pos)                 /**< (PMECC_CFG) Number of Sectors in the Page Mask */
#define PMECC_CFG_PAGESIZE(value)             (PMECC_CFG_PAGESIZE_Msk & ((value) << PMECC_CFG_PAGESIZE_Pos))
#define   PMECC_CFG_PAGESIZE_PAGESIZE_1SEC_Val _U_(0x0)                                             /**< (PMECC_CFG) 1 sector for main area (512 or 1024 bytes)  */
#define   PMECC_CFG_PAGESIZE_PAGESIZE_2SEC_Val _U_(0x1)                                             /**< (PMECC_CFG) 2 sectors for main area (1024 or 2048 bytes)  */
#define   PMECC_CFG_PAGESIZE_PAGESIZE_4SEC_Val _U_(0x2)                                             /**< (PMECC_CFG) 4 sectors for main area (2048 or 4096 bytes)  */
#define   PMECC_CFG_PAGESIZE_PAGESIZE_8SEC_Val _U_(0x3)                                             /**< (PMECC_CFG) 8 sectors for main area (4096 or 8192 bytes)  */
#define PMECC_CFG_PAGESIZE_PAGESIZE_1SEC      (PMECC_CFG_PAGESIZE_PAGESIZE_1SEC_Val << PMECC_CFG_PAGESIZE_Pos) /**< (PMECC_CFG) 1 sector for main area (512 or 1024 bytes) Position  */
#define PMECC_CFG_PAGESIZE_PAGESIZE_2SEC      (PMECC_CFG_PAGESIZE_PAGESIZE_2SEC_Val << PMECC_CFG_PAGESIZE_Pos) /**< (PMECC_CFG) 2 sectors for main area (1024 or 2048 bytes) Position  */
#define PMECC_CFG_PAGESIZE_PAGESIZE_4SEC      (PMECC_CFG_PAGESIZE_PAGESIZE_4SEC_Val << PMECC_CFG_PAGESIZE_Pos) /**< (PMECC_CFG) 4 sectors for main area (2048 or 4096 bytes) Position  */
#define PMECC_CFG_PAGESIZE_PAGESIZE_8SEC      (PMECC_CFG_PAGESIZE_PAGESIZE_8SEC_Val << PMECC_CFG_PAGESIZE_Pos) /**< (PMECC_CFG) 8 sectors for main area (4096 or 8192 bytes) Position  */
#define PMECC_CFG_NANDWR_Pos                  _U_(12)                                              /**< (PMECC_CFG) NAND Write Access Position */
#define PMECC_CFG_NANDWR_Msk                  (_U_(0x1) << PMECC_CFG_NANDWR_Pos)                   /**< (PMECC_CFG) NAND Write Access Mask */
#define PMECC_CFG_NANDWR(value)               (PMECC_CFG_NANDWR_Msk & ((value) << PMECC_CFG_NANDWR_Pos))
#define PMECC_CFG_SPAREEN_Pos                 _U_(16)                                              /**< (PMECC_CFG) Spare Enable Position */
#define PMECC_CFG_SPAREEN_Msk                 (_U_(0x1) << PMECC_CFG_SPAREEN_Pos)                  /**< (PMECC_CFG) Spare Enable Mask */
#define PMECC_CFG_SPAREEN(value)              (PMECC_CFG_SPAREEN_Msk & ((value) << PMECC_CFG_SPAREEN_Pos))
#define PMECC_CFG_AUTO_Pos                    _U_(20)                                              /**< (PMECC_CFG) Automatic Mode Enable Position */
#define PMECC_CFG_AUTO_Msk                    (_U_(0x1) << PMECC_CFG_AUTO_Pos)                     /**< (PMECC_CFG) Automatic Mode Enable Mask */
#define PMECC_CFG_AUTO(value)                 (PMECC_CFG_AUTO_Msk & ((value) << PMECC_CFG_AUTO_Pos))
#define PMECC_CFG_Msk                         _U_(0x00111317)                                      /**< (PMECC_CFG) Register Mask  */


/* -------- PMECC_SAREA : (PMECC Offset: 0x04) (R/W 32) PMECC Spare Area Size Register -------- */
#define PMECC_SAREA_SPARESIZE_Pos             _U_(0)                                               /**< (PMECC_SAREA) Spare Area Size Position */
#define PMECC_SAREA_SPARESIZE_Msk             (_U_(0x1FF) << PMECC_SAREA_SPARESIZE_Pos)            /**< (PMECC_SAREA) Spare Area Size Mask */
#define PMECC_SAREA_SPARESIZE(value)          (PMECC_SAREA_SPARESIZE_Msk & ((value) << PMECC_SAREA_SPARESIZE_Pos))
#define PMECC_SAREA_Msk                       _U_(0x000001FF)                                      /**< (PMECC_SAREA) Register Mask  */


/* -------- PMECC_SADDR : (PMECC Offset: 0x08) (R/W 32) PMECC Start Address Register -------- */
#define PMECC_SADDR_STARTADDR_Pos             _U_(0)                                               /**< (PMECC_SADDR) ECC Area Start Address (byte oriented address) Position */
#define PMECC_SADDR_STARTADDR_Msk             (_U_(0x1FF) << PMECC_SADDR_STARTADDR_Pos)            /**< (PMECC_SADDR) ECC Area Start Address (byte oriented address) Mask */
#define PMECC_SADDR_STARTADDR(value)          (PMECC_SADDR_STARTADDR_Msk & ((value) << PMECC_SADDR_STARTADDR_Pos))
#define PMECC_SADDR_Msk                       _U_(0x000001FF)                                      /**< (PMECC_SADDR) Register Mask  */


/* -------- PMECC_EADDR : (PMECC Offset: 0x0C) (R/W 32) PMECC End Address Register -------- */
#define PMECC_EADDR_ENDADDR_Pos               _U_(0)                                               /**< (PMECC_EADDR) ECC Area End Address (byte oriented address) Position */
#define PMECC_EADDR_ENDADDR_Msk               (_U_(0x1FF) << PMECC_EADDR_ENDADDR_Pos)              /**< (PMECC_EADDR) ECC Area End Address (byte oriented address) Mask */
#define PMECC_EADDR_ENDADDR(value)            (PMECC_EADDR_ENDADDR_Msk & ((value) << PMECC_EADDR_ENDADDR_Pos))
#define PMECC_EADDR_Msk                       _U_(0x000001FF)                                      /**< (PMECC_EADDR) Register Mask  */


/* -------- PMECC_CLK : (PMECC Offset: 0x10) (R/W 32) PMECC Clock Control Register -------- */
#define PMECC_CLK_CLKCTRL_Pos                 _U_(0)                                               /**< (PMECC_CLK) Clock Control Register Position */
#define PMECC_CLK_CLKCTRL_Msk                 (_U_(0x7) << PMECC_CLK_CLKCTRL_Pos)                  /**< (PMECC_CLK) Clock Control Register Mask */
#define PMECC_CLK_CLKCTRL(value)              (PMECC_CLK_CLKCTRL_Msk & ((value) << PMECC_CLK_CLKCTRL_Pos))
#define PMECC_CLK_Msk                         _U_(0x00000007)                                      /**< (PMECC_CLK) Register Mask  */


/* -------- PMECC_CTRL : (PMECC Offset: 0x14) ( /W 32) PMECC Control Register -------- */
#define PMECC_CTRL_RST_Pos                    _U_(0)                                               /**< (PMECC_CTRL) Reset the PMECC Module Position */
#define PMECC_CTRL_RST_Msk                    (_U_(0x1) << PMECC_CTRL_RST_Pos)                     /**< (PMECC_CTRL) Reset the PMECC Module Mask */
#define PMECC_CTRL_RST(value)                 (PMECC_CTRL_RST_Msk & ((value) << PMECC_CTRL_RST_Pos))
#define PMECC_CTRL_DATA_Pos                   _U_(1)                                               /**< (PMECC_CTRL) Start a Data Phase Position */
#define PMECC_CTRL_DATA_Msk                   (_U_(0x1) << PMECC_CTRL_DATA_Pos)                    /**< (PMECC_CTRL) Start a Data Phase Mask */
#define PMECC_CTRL_DATA(value)                (PMECC_CTRL_DATA_Msk & ((value) << PMECC_CTRL_DATA_Pos))
#define PMECC_CTRL_USER_Pos                   _U_(2)                                               /**< (PMECC_CTRL) Start a User Mode Phase Position */
#define PMECC_CTRL_USER_Msk                   (_U_(0x1) << PMECC_CTRL_USER_Pos)                    /**< (PMECC_CTRL) Start a User Mode Phase Mask */
#define PMECC_CTRL_USER(value)                (PMECC_CTRL_USER_Msk & ((value) << PMECC_CTRL_USER_Pos))
#define PMECC_CTRL_ENABLE_Pos                 _U_(4)                                               /**< (PMECC_CTRL) PMECC Module Enable Position */
#define PMECC_CTRL_ENABLE_Msk                 (_U_(0x1) << PMECC_CTRL_ENABLE_Pos)                  /**< (PMECC_CTRL) PMECC Module Enable Mask */
#define PMECC_CTRL_ENABLE(value)              (PMECC_CTRL_ENABLE_Msk & ((value) << PMECC_CTRL_ENABLE_Pos))
#define PMECC_CTRL_DISABLE_Pos                _U_(5)                                               /**< (PMECC_CTRL) PMECC Module Disable Position */
#define PMECC_CTRL_DISABLE_Msk                (_U_(0x1) << PMECC_CTRL_DISABLE_Pos)                 /**< (PMECC_CTRL) PMECC Module Disable Mask */
#define PMECC_CTRL_DISABLE(value)             (PMECC_CTRL_DISABLE_Msk & ((value) << PMECC_CTRL_DISABLE_Pos))
#define PMECC_CTRL_Msk                        _U_(0x00000037)                                      /**< (PMECC_CTRL) Register Mask  */


/* -------- PMECC_SR : (PMECC Offset: 0x18) ( R/ 32) PMECC Status Register -------- */
#define PMECC_SR_BUSY_Pos                     _U_(0)                                               /**< (PMECC_SR) The Kernel of the PMECC is Busy Position */
#define PMECC_SR_BUSY_Msk                     (_U_(0x1) << PMECC_SR_BUSY_Pos)                      /**< (PMECC_SR) The Kernel of the PMECC is Busy Mask */
#define PMECC_SR_BUSY(value)                  (PMECC_SR_BUSY_Msk & ((value) << PMECC_SR_BUSY_Pos))
#define PMECC_SR_ENABLE_Pos                   _U_(4)                                               /**< (PMECC_SR) PMECC Module Status Position */
#define PMECC_SR_ENABLE_Msk                   (_U_(0x1) << PMECC_SR_ENABLE_Pos)                    /**< (PMECC_SR) PMECC Module Status Mask */
#define PMECC_SR_ENABLE(value)                (PMECC_SR_ENABLE_Msk & ((value) << PMECC_SR_ENABLE_Pos))
#define PMECC_SR_Msk                          _U_(0x00000011)                                      /**< (PMECC_SR) Register Mask  */


/* -------- PMECC_IER : (PMECC Offset: 0x1C) ( /W 32) PMECC Interrupt Enable register -------- */
#define PMECC_IER_ERRIE_Pos                   _U_(0)                                               /**< (PMECC_IER) Error Interrupt Enable Position */
#define PMECC_IER_ERRIE_Msk                   (_U_(0x1) << PMECC_IER_ERRIE_Pos)                    /**< (PMECC_IER) Error Interrupt Enable Mask */
#define PMECC_IER_ERRIE(value)                (PMECC_IER_ERRIE_Msk & ((value) << PMECC_IER_ERRIE_Pos))
#define PMECC_IER_Msk                         _U_(0x00000001)                                      /**< (PMECC_IER) Register Mask  */


/* -------- PMECC_IDR : (PMECC Offset: 0x20) ( /W 32) PMECC Interrupt Disable Register -------- */
#define PMECC_IDR_ERRID_Pos                   _U_(0)                                               /**< (PMECC_IDR) Error Interrupt Disable Position */
#define PMECC_IDR_ERRID_Msk                   (_U_(0x1) << PMECC_IDR_ERRID_Pos)                    /**< (PMECC_IDR) Error Interrupt Disable Mask */
#define PMECC_IDR_ERRID(value)                (PMECC_IDR_ERRID_Msk & ((value) << PMECC_IDR_ERRID_Pos))
#define PMECC_IDR_Msk                         _U_(0x00000001)                                      /**< (PMECC_IDR) Register Mask  */


/* -------- PMECC_IMR : (PMECC Offset: 0x24) ( R/ 32) PMECC Interrupt Mask Register -------- */
#define PMECC_IMR_ERRIM_Pos                   _U_(0)                                               /**< (PMECC_IMR) Error Interrupt Mask Position */
#define PMECC_IMR_ERRIM_Msk                   (_U_(0x1) << PMECC_IMR_ERRIM_Pos)                    /**< (PMECC_IMR) Error Interrupt Mask Mask */
#define PMECC_IMR_ERRIM(value)                (PMECC_IMR_ERRIM_Msk & ((value) << PMECC_IMR_ERRIM_Pos))
#define PMECC_IMR_Msk                         _U_(0x00000001)                                      /**< (PMECC_IMR) Register Mask  */


/* -------- PMECC_ISR : (PMECC Offset: 0x28) ( R/ 32) PMECC Interrupt Status Register -------- */
#define PMECC_ISR_ERRIS_Pos                   _U_(0)                                               /**< (PMECC_ISR) Error Interrupt Status Position */
#define PMECC_ISR_ERRIS_Msk                   (_U_(0xFF) << PMECC_ISR_ERRIS_Pos)                   /**< (PMECC_ISR) Error Interrupt Status Mask */
#define PMECC_ISR_ERRIS(value)                (PMECC_ISR_ERRIS_Msk & ((value) << PMECC_ISR_ERRIS_Pos))
#define PMECC_ISR_Msk                         _U_(0x000000FF)                                      /**< (PMECC_ISR) Register Mask  */


/** \brief PMECC register offsets definitions */
#define PMECC_ECC_REG_OFST             (0x00)              /**< (PMECC_ECC) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC0_REG_OFST            (0x00)              /**< (PMECC_ECC0) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC1_REG_OFST            (0x04)              /**< (PMECC_ECC1) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC2_REG_OFST            (0x08)              /**< (PMECC_ECC2) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC3_REG_OFST            (0x0C)              /**< (PMECC_ECC3) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC4_REG_OFST            (0x10)              /**< (PMECC_ECC4) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC5_REG_OFST            (0x14)              /**< (PMECC_ECC5) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC6_REG_OFST            (0x18)              /**< (PMECC_ECC6) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC7_REG_OFST            (0x1C)              /**< (PMECC_ECC7) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC8_REG_OFST            (0x20)              /**< (PMECC_ECC8) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC9_REG_OFST            (0x24)              /**< (PMECC_ECC9) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_ECC10_REG_OFST           (0x28)              /**< (PMECC_ECC10) PMECC ECC 0 Register (sec_num = 0) Offset */
#define PMECC_REM_REG_OFST             (0x00)              /**< (PMECC_REM) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM0_REG_OFST            (0x00)              /**< (PMECC_REM0) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM1_REG_OFST            (0x04)              /**< (PMECC_REM1) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM2_REG_OFST            (0x08)              /**< (PMECC_REM2) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM3_REG_OFST            (0x0C)              /**< (PMECC_REM3) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM4_REG_OFST            (0x10)              /**< (PMECC_REM4) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM5_REG_OFST            (0x14)              /**< (PMECC_REM5) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM6_REG_OFST            (0x18)              /**< (PMECC_REM6) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM7_REG_OFST            (0x1C)              /**< (PMECC_REM7) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM8_REG_OFST            (0x20)              /**< (PMECC_REM8) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM9_REG_OFST            (0x24)              /**< (PMECC_REM9) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM10_REG_OFST           (0x28)              /**< (PMECC_REM10) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_REM11_REG_OFST           (0x2C)              /**< (PMECC_REM11) PMECC REM 0 Register (sec_num = 0) Offset */
#define PMECC_CFG_REG_OFST             (0x00)              /**< (PMECC_CFG) PMECC Configuration Register Offset */
#define PMECC_SAREA_REG_OFST           (0x04)              /**< (PMECC_SAREA) PMECC Spare Area Size Register Offset */
#define PMECC_SADDR_REG_OFST           (0x08)              /**< (PMECC_SADDR) PMECC Start Address Register Offset */
#define PMECC_EADDR_REG_OFST           (0x0C)              /**< (PMECC_EADDR) PMECC End Address Register Offset */
#define PMECC_CLK_REG_OFST             (0x10)              /**< (PMECC_CLK) PMECC Clock Control Register Offset */
#define PMECC_CTRL_REG_OFST            (0x14)              /**< (PMECC_CTRL) PMECC Control Register Offset */
#define PMECC_SR_REG_OFST              (0x18)              /**< (PMECC_SR) PMECC Status Register Offset */
#define PMECC_IER_REG_OFST             (0x1C)              /**< (PMECC_IER) PMECC Interrupt Enable register Offset */
#define PMECC_IDR_REG_OFST             (0x20)              /**< (PMECC_IDR) PMECC Interrupt Disable Register Offset */
#define PMECC_IMR_REG_OFST             (0x24)              /**< (PMECC_IMR) PMECC Interrupt Mask Register Offset */
#define PMECC_ISR_REG_OFST             (0x28)              /**< (PMECC_ISR) PMECC Interrupt Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PMECC_ECC register API structure */
typedef struct
{
  __I   uint32_t                       PMECC_ECC[11];      /**< Offset: 0x00 (R/   32) PMECC ECC 0 Register (sec_num = 0) */
  __I   uint8_t                        Reserved1[0x14];
} pmecc_ecc_registers_t;

/** \brief PMECC_REM register API structure */
typedef struct
{
  __I   uint32_t                       PMECC_REM[12];      /**< Offset: 0x00 (R/   32) PMECC REM 0 Register (sec_num = 0) */
  __I   uint8_t                        Reserved1[0x10];
} pmecc_rem_registers_t;

#define PMECC_ECC_NUMBER _U_(8)

#define PMECC_REM_NUMBER _U_(8)

/** \brief PMECC register API structure */
typedef struct
{
  __IO  uint32_t                       PMECC_CFG;          /**< Offset: 0x00 (R/W  32) PMECC Configuration Register */
  __IO  uint32_t                       PMECC_SAREA;        /**< Offset: 0x04 (R/W  32) PMECC Spare Area Size Register */
  __IO  uint32_t                       PMECC_SADDR;        /**< Offset: 0x08 (R/W  32) PMECC Start Address Register */
  __IO  uint32_t                       PMECC_EADDR;        /**< Offset: 0x0C (R/W  32) PMECC End Address Register */
  __IO  uint32_t                       PMECC_CLK;          /**< Offset: 0x10 (R/W  32) PMECC Clock Control Register */
  __O   uint32_t                       PMECC_CTRL;         /**< Offset: 0x14 ( /W  32) PMECC Control Register */
  __I   uint32_t                       PMECC_SR;           /**< Offset: 0x18 (R/   32) PMECC Status Register */
  __O   uint32_t                       PMECC_IER;          /**< Offset: 0x1C ( /W  32) PMECC Interrupt Enable register */
  __O   uint32_t                       PMECC_IDR;          /**< Offset: 0x20 ( /W  32) PMECC Interrupt Disable Register */
  __I   uint32_t                       PMECC_IMR;          /**< Offset: 0x24 (R/   32) PMECC Interrupt Mask Register */
  __I   uint32_t                       PMECC_ISR;          /**< Offset: 0x28 (R/   32) PMECC Interrupt Status Register */
  __I   uint8_t                        Reserved1[0x14];
        pmecc_ecc_registers_t          PMECC_ECC[PMECC_ECC_NUMBER]; /**< Offset: 0x40  */
        pmecc_rem_registers_t          PMECC_REM[PMECC_REM_NUMBER]; /**< Offset: 0x240  */
} pmecc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_PMECC_COMPONENT_H_ */
