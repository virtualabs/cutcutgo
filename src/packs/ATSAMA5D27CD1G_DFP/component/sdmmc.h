/*
 * Component description for SDMMC
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
#ifndef _SAMA5D2_SDMMC_COMPONENT_H_
#define _SAMA5D2_SDMMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SDMMC                                        */
/* ************************************************************************** */

/* -------- SDMMC_SSAR : (SDMMC Offset: 0x00) (R/W 32) SDMA System Address / Argument 2 Register -------- */
#define SDMMC_SSAR_ADDR_Pos                   _U_(0)                                               /**< (SDMMC_SSAR) SDMA System Address Position */
#define SDMMC_SSAR_ADDR_Msk                   (_U_(0xFFFFFFFF) << SDMMC_SSAR_ADDR_Pos)             /**< (SDMMC_SSAR) SDMA System Address Mask */
#define SDMMC_SSAR_ADDR(value)                (SDMMC_SSAR_ADDR_Msk & ((value) << SDMMC_SSAR_ADDR_Pos))
#define SDMMC_SSAR_ARG2_Pos                   _U_(0)                                               /**< (SDMMC_SSAR) Argument 2 Position */
#define SDMMC_SSAR_ARG2_Msk                   (_U_(0xFFFFFFFF) << SDMMC_SSAR_ARG2_Pos)             /**< (SDMMC_SSAR) Argument 2 Mask */
#define SDMMC_SSAR_ARG2(value)                (SDMMC_SSAR_ARG2_Msk & ((value) << SDMMC_SSAR_ARG2_Pos))
#define SDMMC_SSAR_Msk                        _U_(0xFFFFFFFF)                                      /**< (SDMMC_SSAR) Register Mask  */


/* -------- SDMMC_BSR : (SDMMC Offset: 0x04) (R/W 16) Block Size Register -------- */
#define SDMMC_BSR_BLKSIZE_Pos                 _U_(0)                                               /**< (SDMMC_BSR) Transfer Block Size Position */
#define SDMMC_BSR_BLKSIZE_Msk                 (_U_(0x3FF) << SDMMC_BSR_BLKSIZE_Pos)                /**< (SDMMC_BSR) Transfer Block Size Mask */
#define SDMMC_BSR_BLKSIZE(value)              (SDMMC_BSR_BLKSIZE_Msk & ((value) << SDMMC_BSR_BLKSIZE_Pos))
#define SDMMC_BSR_BOUNDARY_Pos                _U_(12)                                              /**< (SDMMC_BSR) SDMA Buffer Boundary Position */
#define SDMMC_BSR_BOUNDARY_Msk                (_U_(0x7) << SDMMC_BSR_BOUNDARY_Pos)                 /**< (SDMMC_BSR) SDMA Buffer Boundary Mask */
#define SDMMC_BSR_BOUNDARY(value)             (SDMMC_BSR_BOUNDARY_Msk & ((value) << SDMMC_BSR_BOUNDARY_Pos))
#define   SDMMC_BSR_BOUNDARY_4K_Val           _U_(0x0)                                             /**< (SDMMC_BSR) 4-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_8K_Val           _U_(0x1)                                             /**< (SDMMC_BSR) 8-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_16K_Val          _U_(0x2)                                             /**< (SDMMC_BSR) 16-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_32K_Val          _U_(0x3)                                             /**< (SDMMC_BSR) 32-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_64K_Val          _U_(0x4)                                             /**< (SDMMC_BSR) 64-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_128K_Val         _U_(0x5)                                             /**< (SDMMC_BSR) 128-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_256k_Val         _U_(0x6)                                             /**< (SDMMC_BSR) 256-Kbyte boundary  */
#define   SDMMC_BSR_BOUNDARY_512K_Val         _U_(0x7)                                             /**< (SDMMC_BSR) 512-Kbyte boundary  */
#define SDMMC_BSR_BOUNDARY_4K                 (SDMMC_BSR_BOUNDARY_4K_Val << SDMMC_BSR_BOUNDARY_Pos) /**< (SDMMC_BSR) 4-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_8K                 (SDMMC_BSR_BOUNDARY_8K_Val << SDMMC_BSR_BOUNDARY_Pos) /**< (SDMMC_BSR) 8-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_16K                (SDMMC_BSR_BOUNDARY_16K_Val << SDMMC_BSR_BOUNDARY_Pos) /**< (SDMMC_BSR) 16-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_32K                (SDMMC_BSR_BOUNDARY_32K_Val << SDMMC_BSR_BOUNDARY_Pos) /**< (SDMMC_BSR) 32-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_64K                (SDMMC_BSR_BOUNDARY_64K_Val << SDMMC_BSR_BOUNDARY_Pos) /**< (SDMMC_BSR) 64-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_128K               (SDMMC_BSR_BOUNDARY_128K_Val << SDMMC_BSR_BOUNDARY_Pos) /**< (SDMMC_BSR) 128-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_256k               (SDMMC_BSR_BOUNDARY_256k_Val << SDMMC_BSR_BOUNDARY_Pos) /**< (SDMMC_BSR) 256-Kbyte boundary Position  */
#define SDMMC_BSR_BOUNDARY_512K               (SDMMC_BSR_BOUNDARY_512K_Val << SDMMC_BSR_BOUNDARY_Pos) /**< (SDMMC_BSR) 512-Kbyte boundary Position  */
#define SDMMC_BSR_Msk                         _U_(0x73FF)                                          /**< (SDMMC_BSR) Register Mask  */


/* -------- SDMMC_BCR : (SDMMC Offset: 0x06) (R/W 16) Block Count Register -------- */
#define SDMMC_BCR_BLKCNT_Pos                  _U_(0)                                               /**< (SDMMC_BCR) Block Count for Current Transfer Position */
#define SDMMC_BCR_BLKCNT_Msk                  (_U_(0xFFFF) << SDMMC_BCR_BLKCNT_Pos)                /**< (SDMMC_BCR) Block Count for Current Transfer Mask */
#define SDMMC_BCR_BLKCNT(value)               (SDMMC_BCR_BLKCNT_Msk & ((value) << SDMMC_BCR_BLKCNT_Pos))
#define SDMMC_BCR_Msk                         _U_(0xFFFF)                                          /**< (SDMMC_BCR) Register Mask  */


/* -------- SDMMC_ARG1R : (SDMMC Offset: 0x08) (R/W 32) Argument 1 Register -------- */
#define SDMMC_ARG1R_ARG1_Pos                  _U_(0)                                               /**< (SDMMC_ARG1R) Argument 1 Position */
#define SDMMC_ARG1R_ARG1_Msk                  (_U_(0xFFFFFFFF) << SDMMC_ARG1R_ARG1_Pos)            /**< (SDMMC_ARG1R) Argument 1 Mask */
#define SDMMC_ARG1R_ARG1(value)               (SDMMC_ARG1R_ARG1_Msk & ((value) << SDMMC_ARG1R_ARG1_Pos))
#define SDMMC_ARG1R_Msk                       _U_(0xFFFFFFFF)                                      /**< (SDMMC_ARG1R) Register Mask  */


/* -------- SDMMC_TMR : (SDMMC Offset: 0x0C) (R/W 16) Transfer Mode Register -------- */
#define SDMMC_TMR_DMAEN_Pos                   _U_(0)                                               /**< (SDMMC_TMR) DMA Enable Position */
#define SDMMC_TMR_DMAEN_Msk                   (_U_(0x1) << SDMMC_TMR_DMAEN_Pos)                    /**< (SDMMC_TMR) DMA Enable Mask */
#define SDMMC_TMR_DMAEN(value)                (SDMMC_TMR_DMAEN_Msk & ((value) << SDMMC_TMR_DMAEN_Pos))
#define   SDMMC_TMR_DMAEN_DISABLED_Val        _U_(0x0)                                             /**< (SDMMC_TMR) DMA functionality is disabled.  */
#define   SDMMC_TMR_DMAEN_ENABLED_Val         _U_(0x1)                                             /**< (SDMMC_TMR) DMA functionality is enabled.  */
#define SDMMC_TMR_DMAEN_DISABLED              (SDMMC_TMR_DMAEN_DISABLED_Val << SDMMC_TMR_DMAEN_Pos) /**< (SDMMC_TMR) DMA functionality is disabled. Position  */
#define SDMMC_TMR_DMAEN_ENABLED               (SDMMC_TMR_DMAEN_ENABLED_Val << SDMMC_TMR_DMAEN_Pos) /**< (SDMMC_TMR) DMA functionality is enabled. Position  */
#define SDMMC_TMR_BCEN_Pos                    _U_(1)                                               /**< (SDMMC_TMR) Block Count Enable Position */
#define SDMMC_TMR_BCEN_Msk                    (_U_(0x1) << SDMMC_TMR_BCEN_Pos)                     /**< (SDMMC_TMR) Block Count Enable Mask */
#define SDMMC_TMR_BCEN(value)                 (SDMMC_TMR_BCEN_Msk & ((value) << SDMMC_TMR_BCEN_Pos))
#define   SDMMC_TMR_BCEN_DISABLED_Val         _U_(0x0)                                             /**< (SDMMC_TMR) Block count is disabled.  */
#define   SDMMC_TMR_BCEN_ENABLED_Val          _U_(0x1)                                             /**< (SDMMC_TMR) Block count is enabled.  */
#define SDMMC_TMR_BCEN_DISABLED               (SDMMC_TMR_BCEN_DISABLED_Val << SDMMC_TMR_BCEN_Pos)  /**< (SDMMC_TMR) Block count is disabled. Position  */
#define SDMMC_TMR_BCEN_ENABLED                (SDMMC_TMR_BCEN_ENABLED_Val << SDMMC_TMR_BCEN_Pos)   /**< (SDMMC_TMR) Block count is enabled. Position  */
#define SDMMC_TMR_ACMDEN_Pos                  _U_(2)                                               /**< (SDMMC_TMR) Auto Command Enable Position */
#define SDMMC_TMR_ACMDEN_Msk                  (_U_(0x3) << SDMMC_TMR_ACMDEN_Pos)                   /**< (SDMMC_TMR) Auto Command Enable Mask */
#define SDMMC_TMR_ACMDEN(value)               (SDMMC_TMR_ACMDEN_Msk & ((value) << SDMMC_TMR_ACMDEN_Pos))
#define   SDMMC_TMR_ACMDEN_DISABLED_Val       _U_(0x0)                                             /**< (SDMMC_TMR) Auto Command Disabled  */
#define   SDMMC_TMR_ACMDEN_CMD12_Val          _U_(0x1)                                             /**< (SDMMC_TMR) Auto CMD12 Enabled  */
#define   SDMMC_TMR_ACMDEN_CMD23_Val          _U_(0x2)                                             /**< (SDMMC_TMR) Auto CMD23 Enabled  */
#define SDMMC_TMR_ACMDEN_DISABLED             (SDMMC_TMR_ACMDEN_DISABLED_Val << SDMMC_TMR_ACMDEN_Pos) /**< (SDMMC_TMR) Auto Command Disabled Position  */
#define SDMMC_TMR_ACMDEN_CMD12                (SDMMC_TMR_ACMDEN_CMD12_Val << SDMMC_TMR_ACMDEN_Pos) /**< (SDMMC_TMR) Auto CMD12 Enabled Position  */
#define SDMMC_TMR_ACMDEN_CMD23                (SDMMC_TMR_ACMDEN_CMD23_Val << SDMMC_TMR_ACMDEN_Pos) /**< (SDMMC_TMR) Auto CMD23 Enabled Position  */
#define SDMMC_TMR_DTDSEL_Pos                  _U_(4)                                               /**< (SDMMC_TMR) Data Transfer Direction Selection Position */
#define SDMMC_TMR_DTDSEL_Msk                  (_U_(0x1) << SDMMC_TMR_DTDSEL_Pos)                   /**< (SDMMC_TMR) Data Transfer Direction Selection Mask */
#define SDMMC_TMR_DTDSEL(value)               (SDMMC_TMR_DTDSEL_Msk & ((value) << SDMMC_TMR_DTDSEL_Pos))
#define   SDMMC_TMR_DTDSEL_WRITE_Val          _U_(0x0)                                             /**< (SDMMC_TMR) Writes data from the SDMMC to the device.  */
#define   SDMMC_TMR_DTDSEL_READ_Val           _U_(0x1)                                             /**< (SDMMC_TMR) Reads data from the device to the SDMMC.  */
#define SDMMC_TMR_DTDSEL_WRITE                (SDMMC_TMR_DTDSEL_WRITE_Val << SDMMC_TMR_DTDSEL_Pos) /**< (SDMMC_TMR) Writes data from the SDMMC to the device. Position  */
#define SDMMC_TMR_DTDSEL_READ                 (SDMMC_TMR_DTDSEL_READ_Val << SDMMC_TMR_DTDSEL_Pos)  /**< (SDMMC_TMR) Reads data from the device to the SDMMC. Position  */
#define SDMMC_TMR_MSBSEL_Pos                  _U_(5)                                               /**< (SDMMC_TMR) Multi/Single Block Selection Position */
#define SDMMC_TMR_MSBSEL_Msk                  (_U_(0x1) << SDMMC_TMR_MSBSEL_Pos)                   /**< (SDMMC_TMR) Multi/Single Block Selection Mask */
#define SDMMC_TMR_MSBSEL(value)               (SDMMC_TMR_MSBSEL_Msk & ((value) << SDMMC_TMR_MSBSEL_Pos))
#define SDMMC_TMR_Msk                         _U_(0x003F)                                          /**< (SDMMC_TMR) Register Mask  */


/* -------- SDMMC_CR : (SDMMC Offset: 0x0E) (R/W 16) Command Register -------- */
#define SDMMC_CR_RESPTYP_Pos                  _U_(0)                                               /**< (SDMMC_CR) Response Type Position */
#define SDMMC_CR_RESPTYP_Msk                  (_U_(0x3) << SDMMC_CR_RESPTYP_Pos)                   /**< (SDMMC_CR) Response Type Mask */
#define SDMMC_CR_RESPTYP(value)               (SDMMC_CR_RESPTYP_Msk & ((value) << SDMMC_CR_RESPTYP_Pos))
#define   SDMMC_CR_RESPTYP_NORESP_Val         _U_(0x0)                                             /**< (SDMMC_CR) No Response  */
#define   SDMMC_CR_RESPTYP_RL136_Val          _U_(0x1)                                             /**< (SDMMC_CR) Response Length 136  */
#define   SDMMC_CR_RESPTYP_RL48_Val           _U_(0x2)                                             /**< (SDMMC_CR) Response Length 48  */
#define   SDMMC_CR_RESPTYP_RL48BUSY_Val       _U_(0x3)                                             /**< (SDMMC_CR) Response Length 48 with Busy  */
#define SDMMC_CR_RESPTYP_NORESP               (SDMMC_CR_RESPTYP_NORESP_Val << SDMMC_CR_RESPTYP_Pos) /**< (SDMMC_CR) No Response Position  */
#define SDMMC_CR_RESPTYP_RL136                (SDMMC_CR_RESPTYP_RL136_Val << SDMMC_CR_RESPTYP_Pos) /**< (SDMMC_CR) Response Length 136 Position  */
#define SDMMC_CR_RESPTYP_RL48                 (SDMMC_CR_RESPTYP_RL48_Val << SDMMC_CR_RESPTYP_Pos)  /**< (SDMMC_CR) Response Length 48 Position  */
#define SDMMC_CR_RESPTYP_RL48BUSY             (SDMMC_CR_RESPTYP_RL48BUSY_Val << SDMMC_CR_RESPTYP_Pos) /**< (SDMMC_CR) Response Length 48 with Busy Position  */
#define SDMMC_CR_CMDCCEN_Pos                  _U_(3)                                               /**< (SDMMC_CR) Command CRC Check Enable Position */
#define SDMMC_CR_CMDCCEN_Msk                  (_U_(0x1) << SDMMC_CR_CMDCCEN_Pos)                   /**< (SDMMC_CR) Command CRC Check Enable Mask */
#define SDMMC_CR_CMDCCEN(value)               (SDMMC_CR_CMDCCEN_Msk & ((value) << SDMMC_CR_CMDCCEN_Pos))
#define   SDMMC_CR_CMDCCEN_DISABLED_Val       _U_(0x0)                                             /**< (SDMMC_CR) The Command CRC Check is disabled.  */
#define   SDMMC_CR_CMDCCEN_ENABLED_Val        _U_(0x1)                                             /**< (SDMMC_CR) The Command CRC Check is enabled.  */
#define SDMMC_CR_CMDCCEN_DISABLED             (SDMMC_CR_CMDCCEN_DISABLED_Val << SDMMC_CR_CMDCCEN_Pos) /**< (SDMMC_CR) The Command CRC Check is disabled. Position  */
#define SDMMC_CR_CMDCCEN_ENABLED              (SDMMC_CR_CMDCCEN_ENABLED_Val << SDMMC_CR_CMDCCEN_Pos) /**< (SDMMC_CR) The Command CRC Check is enabled. Position  */
#define SDMMC_CR_CMDICEN_Pos                  _U_(4)                                               /**< (SDMMC_CR) Command Index Check Enable Position */
#define SDMMC_CR_CMDICEN_Msk                  (_U_(0x1) << SDMMC_CR_CMDICEN_Pos)                   /**< (SDMMC_CR) Command Index Check Enable Mask */
#define SDMMC_CR_CMDICEN(value)               (SDMMC_CR_CMDICEN_Msk & ((value) << SDMMC_CR_CMDICEN_Pos))
#define   SDMMC_CR_CMDICEN_DISABLED_Val       _U_(0x0)                                             /**< (SDMMC_CR) The Command Index Check is disabled.  */
#define   SDMMC_CR_CMDICEN_ENABLED_Val        _U_(0x1)                                             /**< (SDMMC_CR) The Command Index Check is enabled.  */
#define SDMMC_CR_CMDICEN_DISABLED             (SDMMC_CR_CMDICEN_DISABLED_Val << SDMMC_CR_CMDICEN_Pos) /**< (SDMMC_CR) The Command Index Check is disabled. Position  */
#define SDMMC_CR_CMDICEN_ENABLED              (SDMMC_CR_CMDICEN_ENABLED_Val << SDMMC_CR_CMDICEN_Pos) /**< (SDMMC_CR) The Command Index Check is enabled. Position  */
#define SDMMC_CR_DPSEL_Pos                    _U_(5)                                               /**< (SDMMC_CR) Data Present Select Position */
#define SDMMC_CR_DPSEL_Msk                    (_U_(0x1) << SDMMC_CR_DPSEL_Pos)                     /**< (SDMMC_CR) Data Present Select Mask */
#define SDMMC_CR_DPSEL(value)                 (SDMMC_CR_DPSEL_Msk & ((value) << SDMMC_CR_DPSEL_Pos))
#define SDMMC_CR_CMDTYP_Pos                   _U_(6)                                               /**< (SDMMC_CR) Command Type Position */
#define SDMMC_CR_CMDTYP_Msk                   (_U_(0x3) << SDMMC_CR_CMDTYP_Pos)                    /**< (SDMMC_CR) Command Type Mask */
#define SDMMC_CR_CMDTYP(value)                (SDMMC_CR_CMDTYP_Msk & ((value) << SDMMC_CR_CMDTYP_Pos))
#define   SDMMC_CR_CMDTYP_NORMAL_Val          _U_(0x0)                                             /**< (SDMMC_CR) Other commands  */
#define   SDMMC_CR_CMDTYP_SUSPEND_Val         _U_(0x1)                                             /**< (SDMMC_CR) CMD52 to write "Bus Suspend" in the Card Common Control Registers (CCCR) (for SDIO only)  */
#define   SDMMC_CR_CMDTYP_RESUME_Val          _U_(0x2)                                             /**< (SDMMC_CR) CMD52 to write "Function Select" in the Card Common Control Registers (CCCR) (for SDIO only)  */
#define   SDMMC_CR_CMDTYP_ABORT_Val           _U_(0x3)                                             /**< (SDMMC_CR) CMD12, CMD52 to write "I/O Abort" in the Card Common Control Registers (CCCR) (for SDIO only)  */
#define SDMMC_CR_CMDTYP_NORMAL                (SDMMC_CR_CMDTYP_NORMAL_Val << SDMMC_CR_CMDTYP_Pos)  /**< (SDMMC_CR) Other commands Position  */
#define SDMMC_CR_CMDTYP_SUSPEND               (SDMMC_CR_CMDTYP_SUSPEND_Val << SDMMC_CR_CMDTYP_Pos) /**< (SDMMC_CR) CMD52 to write "Bus Suspend" in the Card Common Control Registers (CCCR) (for SDIO only) Position  */
#define SDMMC_CR_CMDTYP_RESUME                (SDMMC_CR_CMDTYP_RESUME_Val << SDMMC_CR_CMDTYP_Pos)  /**< (SDMMC_CR) CMD52 to write "Function Select" in the Card Common Control Registers (CCCR) (for SDIO only) Position  */
#define SDMMC_CR_CMDTYP_ABORT                 (SDMMC_CR_CMDTYP_ABORT_Val << SDMMC_CR_CMDTYP_Pos)   /**< (SDMMC_CR) CMD12, CMD52 to write "I/O Abort" in the Card Common Control Registers (CCCR) (for SDIO only) Position  */
#define SDMMC_CR_CMDIDX_Pos                   _U_(8)                                               /**< (SDMMC_CR) Command Index Position */
#define SDMMC_CR_CMDIDX_Msk                   (_U_(0x3F) << SDMMC_CR_CMDIDX_Pos)                   /**< (SDMMC_CR) Command Index Mask */
#define SDMMC_CR_CMDIDX(value)                (SDMMC_CR_CMDIDX_Msk & ((value) << SDMMC_CR_CMDIDX_Pos))
#define SDMMC_CR_Msk                          _U_(0x3FFB)                                          /**< (SDMMC_CR) Register Mask  */


/* -------- SDMMC_RR : (SDMMC Offset: 0x10) ( R/ 32) Response Register -------- */
#define SDMMC_RR_CMDRESP_Pos                  _U_(0)                                               /**< (SDMMC_RR) Command Response Position */
#define SDMMC_RR_CMDRESP_Msk                  (_U_(0xFFFFFFFF) << SDMMC_RR_CMDRESP_Pos)            /**< (SDMMC_RR) Command Response Mask */
#define SDMMC_RR_CMDRESP(value)               (SDMMC_RR_CMDRESP_Msk & ((value) << SDMMC_RR_CMDRESP_Pos))
#define SDMMC_RR_Msk                          _U_(0xFFFFFFFF)                                      /**< (SDMMC_RR) Register Mask  */


/* -------- SDMMC_BDPR : (SDMMC Offset: 0x20) (R/W 32) Buffer Data Port Register -------- */
#define SDMMC_BDPR_BUFDATA_Pos                _U_(0)                                               /**< (SDMMC_BDPR) Buffer Data Position */
#define SDMMC_BDPR_BUFDATA_Msk                (_U_(0xFFFFFFFF) << SDMMC_BDPR_BUFDATA_Pos)          /**< (SDMMC_BDPR) Buffer Data Mask */
#define SDMMC_BDPR_BUFDATA(value)             (SDMMC_BDPR_BUFDATA_Msk & ((value) << SDMMC_BDPR_BUFDATA_Pos))
#define SDMMC_BDPR_Msk                        _U_(0xFFFFFFFF)                                      /**< (SDMMC_BDPR) Register Mask  */


/* -------- SDMMC_PSR : (SDMMC Offset: 0x24) ( R/ 32) Present State Register -------- */
#define SDMMC_PSR_CMDINHC_Pos                 _U_(0)                                               /**< (SDMMC_PSR) Command Inhibit (CMD) Position */
#define SDMMC_PSR_CMDINHC_Msk                 (_U_(0x1) << SDMMC_PSR_CMDINHC_Pos)                  /**< (SDMMC_PSR) Command Inhibit (CMD) Mask */
#define SDMMC_PSR_CMDINHC(value)              (SDMMC_PSR_CMDINHC_Msk & ((value) << SDMMC_PSR_CMDINHC_Pos))
#define SDMMC_PSR_CMDINHD_Pos                 _U_(1)                                               /**< (SDMMC_PSR) Command Inhibit (DAT) Position */
#define SDMMC_PSR_CMDINHD_Msk                 (_U_(0x1) << SDMMC_PSR_CMDINHD_Pos)                  /**< (SDMMC_PSR) Command Inhibit (DAT) Mask */
#define SDMMC_PSR_CMDINHD(value)              (SDMMC_PSR_CMDINHD_Msk & ((value) << SDMMC_PSR_CMDINHD_Pos))
#define SDMMC_PSR_DLACT_Pos                   _U_(2)                                               /**< (SDMMC_PSR) DAT Line Active Position */
#define SDMMC_PSR_DLACT_Msk                   (_U_(0x1) << SDMMC_PSR_DLACT_Pos)                    /**< (SDMMC_PSR) DAT Line Active Mask */
#define SDMMC_PSR_DLACT(value)                (SDMMC_PSR_DLACT_Msk & ((value) << SDMMC_PSR_DLACT_Pos))
#define SDMMC_PSR_WTACT_Pos                   _U_(8)                                               /**< (SDMMC_PSR) Write Transfer Active Position */
#define SDMMC_PSR_WTACT_Msk                   (_U_(0x1) << SDMMC_PSR_WTACT_Pos)                    /**< (SDMMC_PSR) Write Transfer Active Mask */
#define SDMMC_PSR_WTACT(value)                (SDMMC_PSR_WTACT_Msk & ((value) << SDMMC_PSR_WTACT_Pos))
#define SDMMC_PSR_RTACT_Pos                   _U_(9)                                               /**< (SDMMC_PSR) Read Transfer Active Position */
#define SDMMC_PSR_RTACT_Msk                   (_U_(0x1) << SDMMC_PSR_RTACT_Pos)                    /**< (SDMMC_PSR) Read Transfer Active Mask */
#define SDMMC_PSR_RTACT(value)                (SDMMC_PSR_RTACT_Msk & ((value) << SDMMC_PSR_RTACT_Pos))
#define SDMMC_PSR_BUFWREN_Pos                 _U_(10)                                              /**< (SDMMC_PSR) Buffer Write Enable Position */
#define SDMMC_PSR_BUFWREN_Msk                 (_U_(0x1) << SDMMC_PSR_BUFWREN_Pos)                  /**< (SDMMC_PSR) Buffer Write Enable Mask */
#define SDMMC_PSR_BUFWREN(value)              (SDMMC_PSR_BUFWREN_Msk & ((value) << SDMMC_PSR_BUFWREN_Pos))
#define SDMMC_PSR_BUFRDEN_Pos                 _U_(11)                                              /**< (SDMMC_PSR) Buffer Read Enable Position */
#define SDMMC_PSR_BUFRDEN_Msk                 (_U_(0x1) << SDMMC_PSR_BUFRDEN_Pos)                  /**< (SDMMC_PSR) Buffer Read Enable Mask */
#define SDMMC_PSR_BUFRDEN(value)              (SDMMC_PSR_BUFRDEN_Msk & ((value) << SDMMC_PSR_BUFRDEN_Pos))
#define SDMMC_PSR_CARDINS_Pos                 _U_(16)                                              /**< (SDMMC_PSR) Card Inserted Position */
#define SDMMC_PSR_CARDINS_Msk                 (_U_(0x1) << SDMMC_PSR_CARDINS_Pos)                  /**< (SDMMC_PSR) Card Inserted Mask */
#define SDMMC_PSR_CARDINS(value)              (SDMMC_PSR_CARDINS_Msk & ((value) << SDMMC_PSR_CARDINS_Pos))
#define SDMMC_PSR_CARDSS_Pos                  _U_(17)                                              /**< (SDMMC_PSR) Card State Stable Position */
#define SDMMC_PSR_CARDSS_Msk                  (_U_(0x1) << SDMMC_PSR_CARDSS_Pos)                   /**< (SDMMC_PSR) Card State Stable Mask */
#define SDMMC_PSR_CARDSS(value)               (SDMMC_PSR_CARDSS_Msk & ((value) << SDMMC_PSR_CARDSS_Pos))
#define SDMMC_PSR_CARDDPL_Pos                 _U_(18)                                              /**< (SDMMC_PSR) Card Detect Pin Level Position */
#define SDMMC_PSR_CARDDPL_Msk                 (_U_(0x1) << SDMMC_PSR_CARDDPL_Pos)                  /**< (SDMMC_PSR) Card Detect Pin Level Mask */
#define SDMMC_PSR_CARDDPL(value)              (SDMMC_PSR_CARDDPL_Msk & ((value) << SDMMC_PSR_CARDDPL_Pos))
#define SDMMC_PSR_WRPPL_Pos                   _U_(19)                                              /**< (SDMMC_PSR) Write Protect Pin Level Position */
#define SDMMC_PSR_WRPPL_Msk                   (_U_(0x1) << SDMMC_PSR_WRPPL_Pos)                    /**< (SDMMC_PSR) Write Protect Pin Level Mask */
#define SDMMC_PSR_WRPPL(value)                (SDMMC_PSR_WRPPL_Msk & ((value) << SDMMC_PSR_WRPPL_Pos))
#define SDMMC_PSR_DATLL_Pos                   _U_(20)                                              /**< (SDMMC_PSR) DAT[3:0] Line Level Position */
#define SDMMC_PSR_DATLL_Msk                   (_U_(0xF) << SDMMC_PSR_DATLL_Pos)                    /**< (SDMMC_PSR) DAT[3:0] Line Level Mask */
#define SDMMC_PSR_DATLL(value)                (SDMMC_PSR_DATLL_Msk & ((value) << SDMMC_PSR_DATLL_Pos))
#define SDMMC_PSR_CMDLL_Pos                   _U_(24)                                              /**< (SDMMC_PSR) CMD Line Level Position */
#define SDMMC_PSR_CMDLL_Msk                   (_U_(0x1) << SDMMC_PSR_CMDLL_Pos)                    /**< (SDMMC_PSR) CMD Line Level Mask */
#define SDMMC_PSR_CMDLL(value)                (SDMMC_PSR_CMDLL_Msk & ((value) << SDMMC_PSR_CMDLL_Pos))
#define SDMMC_PSR_Msk                         _U_(0x01FF0F07)                                      /**< (SDMMC_PSR) Register Mask  */


/* -------- SDMMC_HC1R : (SDMMC Offset: 0x28) (R/W 8) Host Control 1 Register -------- */
#define SDMMC_HC1R_Msk                        _U_(0x00)                                            /**< (SDMMC_HC1R) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL_Pos        _U_(0)                                               /**< (SDMMC_HC1R) LED Control Position */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL_Msk        (_U_(0x1) << SDMMC_HC1R_SD_SDIO_LEDCTRL_Pos)         /**< (SDMMC_HC1R) LED Control Mask */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL(value)     (SDMMC_HC1R_SD_SDIO_LEDCTRL_Msk & ((value) << SDMMC_HC1R_SD_SDIO_LEDCTRL_Pos))
#define   SDMMC_HC1R_SD_SDIO_LEDCTRL_OFF_Val  _U_(0x0)                                             /**< (SDMMC_HC1R) LED off.  */
#define   SDMMC_HC1R_SD_SDIO_LEDCTRL_ON_Val   _U_(0x1)                                             /**< (SDMMC_HC1R) LED on.  */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL_OFF        (SDMMC_HC1R_SD_SDIO_LEDCTRL_OFF_Val << SDMMC_HC1R_SD_SDIO_LEDCTRL_Pos) /**< (SDMMC_HC1R) LED off. Position  */
#define SDMMC_HC1R_SD_SDIO_LEDCTRL_ON         (SDMMC_HC1R_SD_SDIO_LEDCTRL_ON_Val << SDMMC_HC1R_SD_SDIO_LEDCTRL_Pos) /**< (SDMMC_HC1R) LED on. Position  */
#define SDMMC_HC1R_SD_SDIO_DW_Pos             _U_(1)                                               /**< (SDMMC_HC1R) Data Width Position */
#define SDMMC_HC1R_SD_SDIO_DW_Msk             (_U_(0x1) << SDMMC_HC1R_SD_SDIO_DW_Pos)              /**< (SDMMC_HC1R) Data Width Mask */
#define SDMMC_HC1R_SD_SDIO_DW(value)          (SDMMC_HC1R_SD_SDIO_DW_Msk & ((value) << SDMMC_HC1R_SD_SDIO_DW_Pos))
#define   SDMMC_HC1R_SD_SDIO_DW_1_BIT_Val     _U_(0x0)                                             /**< (SDMMC_HC1R) 1-bit mode.  */
#define   SDMMC_HC1R_SD_SDIO_DW_4_BIT_Val     _U_(0x1)                                             /**< (SDMMC_HC1R) 4-bit mode.  */
#define SDMMC_HC1R_SD_SDIO_DW_1_BIT           (SDMMC_HC1R_SD_SDIO_DW_1_BIT_Val << SDMMC_HC1R_SD_SDIO_DW_Pos) /**< (SDMMC_HC1R) 1-bit mode. Position  */
#define SDMMC_HC1R_SD_SDIO_DW_4_BIT           (SDMMC_HC1R_SD_SDIO_DW_4_BIT_Val << SDMMC_HC1R_SD_SDIO_DW_Pos) /**< (SDMMC_HC1R) 4-bit mode. Position  */
#define SDMMC_HC1R_SD_SDIO_HSEN_Pos           _U_(2)                                               /**< (SDMMC_HC1R) High Speed Enable Position */
#define SDMMC_HC1R_SD_SDIO_HSEN_Msk           (_U_(0x1) << SDMMC_HC1R_SD_SDIO_HSEN_Pos)            /**< (SDMMC_HC1R) High Speed Enable Mask */
#define SDMMC_HC1R_SD_SDIO_HSEN(value)        (SDMMC_HC1R_SD_SDIO_HSEN_Msk & ((value) << SDMMC_HC1R_SD_SDIO_HSEN_Pos))
#define SDMMC_HC1R_SD_SDIO_DMASEL_Pos         _U_(3)                                               /**< (SDMMC_HC1R) DMA Select Position */
#define SDMMC_HC1R_SD_SDIO_DMASEL_Msk         (_U_(0x3) << SDMMC_HC1R_SD_SDIO_DMASEL_Pos)          /**< (SDMMC_HC1R) DMA Select Mask */
#define SDMMC_HC1R_SD_SDIO_DMASEL(value)      (SDMMC_HC1R_SD_SDIO_DMASEL_Msk & ((value) << SDMMC_HC1R_SD_SDIO_DMASEL_Pos))
#define   SDMMC_HC1R_SD_SDIO_DMASEL_SDMA_Val  _U_(0x0)                                             /**< (SDMMC_HC1R) SDMA is selected  */
#define   SDMMC_HC1R_SD_SDIO_DMASEL_ADMA32_Val _U_(0x2)                                             /**< (SDMMC_HC1R) 32-bit Address ADMA2 is selected  */
#define SDMMC_HC1R_SD_SDIO_DMASEL_SDMA        (SDMMC_HC1R_SD_SDIO_DMASEL_SDMA_Val << SDMMC_HC1R_SD_SDIO_DMASEL_Pos) /**< (SDMMC_HC1R) SDMA is selected Position  */
#define SDMMC_HC1R_SD_SDIO_DMASEL_ADMA32      (SDMMC_HC1R_SD_SDIO_DMASEL_ADMA32_Val << SDMMC_HC1R_SD_SDIO_DMASEL_Pos) /**< (SDMMC_HC1R) 32-bit Address ADMA2 is selected Position  */
#define SDMMC_HC1R_SD_SDIO_CARDDTL_Pos        _U_(6)                                               /**< (SDMMC_HC1R) Card Detect Test Level Position */
#define SDMMC_HC1R_SD_SDIO_CARDDTL_Msk        (_U_(0x1) << SDMMC_HC1R_SD_SDIO_CARDDTL_Pos)         /**< (SDMMC_HC1R) Card Detect Test Level Mask */
#define SDMMC_HC1R_SD_SDIO_CARDDTL(value)     (SDMMC_HC1R_SD_SDIO_CARDDTL_Msk & ((value) << SDMMC_HC1R_SD_SDIO_CARDDTL_Pos))
#define SDMMC_HC1R_SD_SDIO_CARDDSEL_Pos       _U_(7)                                               /**< (SDMMC_HC1R) Card Detect Signal Selection Position */
#define SDMMC_HC1R_SD_SDIO_CARDDSEL_Msk       (_U_(0x1) << SDMMC_HC1R_SD_SDIO_CARDDSEL_Pos)        /**< (SDMMC_HC1R) Card Detect Signal Selection Mask */
#define SDMMC_HC1R_SD_SDIO_CARDDSEL(value)    (SDMMC_HC1R_SD_SDIO_CARDDSEL_Msk & ((value) << SDMMC_HC1R_SD_SDIO_CARDDSEL_Pos))
#define SDMMC_HC1R_SD_SDIO_Msk                _U_(0xDF)                                             /**< (SDMMC_HC1R_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_HC1R_E_MMC_DW_Pos               _U_(1)                                               /**< (SDMMC_HC1R) Data Width Position */
#define SDMMC_HC1R_E_MMC_DW_Msk               (_U_(0x1) << SDMMC_HC1R_E_MMC_DW_Pos)                /**< (SDMMC_HC1R) Data Width Mask */
#define SDMMC_HC1R_E_MMC_DW(value)            (SDMMC_HC1R_E_MMC_DW_Msk & ((value) << SDMMC_HC1R_E_MMC_DW_Pos))
#define   SDMMC_HC1R_E_MMC_DW_1_BIT_Val       _U_(0x0)                                             /**< (SDMMC_HC1R) 1-bit mode.  */
#define   SDMMC_HC1R_E_MMC_DW_4_BIT_Val       _U_(0x1)                                             /**< (SDMMC_HC1R) 4-bit mode.  */
#define SDMMC_HC1R_E_MMC_DW_1_BIT             (SDMMC_HC1R_E_MMC_DW_1_BIT_Val << SDMMC_HC1R_E_MMC_DW_Pos) /**< (SDMMC_HC1R) 1-bit mode. Position  */
#define SDMMC_HC1R_E_MMC_DW_4_BIT             (SDMMC_HC1R_E_MMC_DW_4_BIT_Val << SDMMC_HC1R_E_MMC_DW_Pos) /**< (SDMMC_HC1R) 4-bit mode. Position  */
#define SDMMC_HC1R_E_MMC_HSEN_Pos             _U_(2)                                               /**< (SDMMC_HC1R) High Speed Enable Position */
#define SDMMC_HC1R_E_MMC_HSEN_Msk             (_U_(0x1) << SDMMC_HC1R_E_MMC_HSEN_Pos)              /**< (SDMMC_HC1R) High Speed Enable Mask */
#define SDMMC_HC1R_E_MMC_HSEN(value)          (SDMMC_HC1R_E_MMC_HSEN_Msk & ((value) << SDMMC_HC1R_E_MMC_HSEN_Pos))
#define SDMMC_HC1R_E_MMC_DMASEL_Pos           _U_(3)                                               /**< (SDMMC_HC1R) DMA Select Position */
#define SDMMC_HC1R_E_MMC_DMASEL_Msk           (_U_(0x3) << SDMMC_HC1R_E_MMC_DMASEL_Pos)            /**< (SDMMC_HC1R) DMA Select Mask */
#define SDMMC_HC1R_E_MMC_DMASEL(value)        (SDMMC_HC1R_E_MMC_DMASEL_Msk & ((value) << SDMMC_HC1R_E_MMC_DMASEL_Pos))
#define   SDMMC_HC1R_E_MMC_DMASEL_SDMA_Val    _U_(0x0)                                             /**< (SDMMC_HC1R) SDMA is selected  */
#define   SDMMC_HC1R_E_MMC_DMASEL_ADMA32_Val  _U_(0x2)                                             /**< (SDMMC_HC1R) 32-bit Address ADMA2 is selected  */
#define SDMMC_HC1R_E_MMC_DMASEL_SDMA          (SDMMC_HC1R_E_MMC_DMASEL_SDMA_Val << SDMMC_HC1R_E_MMC_DMASEL_Pos) /**< (SDMMC_HC1R) SDMA is selected Position  */
#define SDMMC_HC1R_E_MMC_DMASEL_ADMA32        (SDMMC_HC1R_E_MMC_DMASEL_ADMA32_Val << SDMMC_HC1R_E_MMC_DMASEL_Pos) /**< (SDMMC_HC1R) 32-bit Address ADMA2 is selected Position  */
#define SDMMC_HC1R_E_MMC_EXTDW_Pos            _U_(5)                                               /**< (SDMMC_HC1R) Extended Data Width Position */
#define SDMMC_HC1R_E_MMC_EXTDW_Msk            (_U_(0x1) << SDMMC_HC1R_E_MMC_EXTDW_Pos)             /**< (SDMMC_HC1R) Extended Data Width Mask */
#define SDMMC_HC1R_E_MMC_EXTDW(value)         (SDMMC_HC1R_E_MMC_EXTDW_Msk & ((value) << SDMMC_HC1R_E_MMC_EXTDW_Pos))
#define SDMMC_HC1R_E_MMC_Msk                  _U_(0x3E)                                             /**< (SDMMC_HC1R_E_MMC) Register Mask  */


/* -------- SDMMC_PCR : (SDMMC Offset: 0x29) (R/W 8) Power Control Register -------- */
#define SDMMC_PCR_SDBPWR_Pos                  _U_(0)                                               /**< (SDMMC_PCR) SD Bus Power Position */
#define SDMMC_PCR_SDBPWR_Msk                  (_U_(0x1) << SDMMC_PCR_SDBPWR_Pos)                   /**< (SDMMC_PCR) SD Bus Power Mask */
#define SDMMC_PCR_SDBPWR(value)               (SDMMC_PCR_SDBPWR_Msk & ((value) << SDMMC_PCR_SDBPWR_Pos))
#define SDMMC_PCR_Msk                         _U_(0x01)                                            /**< (SDMMC_PCR) Register Mask  */


/* -------- SDMMC_BGCR : (SDMMC Offset: 0x2A) (R/W 8) Block Gap Control Register -------- */
#define SDMMC_BGCR_Msk                        _U_(0x00)                                            /**< (SDMMC_BGCR) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_BGCR_SD_SDIO_STPBGR_Pos         _U_(0)                                               /**< (SDMMC_BGCR) Stop At Block Gap Request Position */
#define SDMMC_BGCR_SD_SDIO_STPBGR_Msk         (_U_(0x1) << SDMMC_BGCR_SD_SDIO_STPBGR_Pos)          /**< (SDMMC_BGCR) Stop At Block Gap Request Mask */
#define SDMMC_BGCR_SD_SDIO_STPBGR(value)      (SDMMC_BGCR_SD_SDIO_STPBGR_Msk & ((value) << SDMMC_BGCR_SD_SDIO_STPBGR_Pos))
#define SDMMC_BGCR_SD_SDIO_CONTR_Pos          _U_(1)                                               /**< (SDMMC_BGCR) Continue Request Position */
#define SDMMC_BGCR_SD_SDIO_CONTR_Msk          (_U_(0x1) << SDMMC_BGCR_SD_SDIO_CONTR_Pos)           /**< (SDMMC_BGCR) Continue Request Mask */
#define SDMMC_BGCR_SD_SDIO_CONTR(value)       (SDMMC_BGCR_SD_SDIO_CONTR_Msk & ((value) << SDMMC_BGCR_SD_SDIO_CONTR_Pos))
#define SDMMC_BGCR_SD_SDIO_RWCTRL_Pos         _U_(2)                                               /**< (SDMMC_BGCR) Read Wait Control Position */
#define SDMMC_BGCR_SD_SDIO_RWCTRL_Msk         (_U_(0x1) << SDMMC_BGCR_SD_SDIO_RWCTRL_Pos)          /**< (SDMMC_BGCR) Read Wait Control Mask */
#define SDMMC_BGCR_SD_SDIO_RWCTRL(value)      (SDMMC_BGCR_SD_SDIO_RWCTRL_Msk & ((value) << SDMMC_BGCR_SD_SDIO_RWCTRL_Pos))
#define SDMMC_BGCR_SD_SDIO_INTBG_Pos          _U_(3)                                               /**< (SDMMC_BGCR) Interrupt at Block Gap Position */
#define SDMMC_BGCR_SD_SDIO_INTBG_Msk          (_U_(0x1) << SDMMC_BGCR_SD_SDIO_INTBG_Pos)           /**< (SDMMC_BGCR) Interrupt at Block Gap Mask */
#define SDMMC_BGCR_SD_SDIO_INTBG(value)       (SDMMC_BGCR_SD_SDIO_INTBG_Msk & ((value) << SDMMC_BGCR_SD_SDIO_INTBG_Pos))
#define   SDMMC_BGCR_SD_SDIO_INTBG_DISABLED_Val _U_(0x0)                                             /**< (SDMMC_BGCR) Interrupt detection disabled.  */
#define   SDMMC_BGCR_SD_SDIO_INTBG_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_BGCR) Interrupt detection enabled.  */
#define SDMMC_BGCR_SD_SDIO_INTBG_DISABLED     (SDMMC_BGCR_SD_SDIO_INTBG_DISABLED_Val << SDMMC_BGCR_SD_SDIO_INTBG_Pos) /**< (SDMMC_BGCR) Interrupt detection disabled. Position  */
#define SDMMC_BGCR_SD_SDIO_INTBG_ENABLED      (SDMMC_BGCR_SD_SDIO_INTBG_ENABLED_Val << SDMMC_BGCR_SD_SDIO_INTBG_Pos) /**< (SDMMC_BGCR) Interrupt detection enabled. Position  */
#define SDMMC_BGCR_SD_SDIO_Msk                _U_(0x0F)                                             /**< (SDMMC_BGCR_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_BGCR_E_MMC_STPBGR_Pos           _U_(0)                                               /**< (SDMMC_BGCR) Stop At Block Gap Request Position */
#define SDMMC_BGCR_E_MMC_STPBGR_Msk           (_U_(0x1) << SDMMC_BGCR_E_MMC_STPBGR_Pos)            /**< (SDMMC_BGCR) Stop At Block Gap Request Mask */
#define SDMMC_BGCR_E_MMC_STPBGR(value)        (SDMMC_BGCR_E_MMC_STPBGR_Msk & ((value) << SDMMC_BGCR_E_MMC_STPBGR_Pos))
#define SDMMC_BGCR_E_MMC_CONTR_Pos            _U_(1)                                               /**< (SDMMC_BGCR) Continue Request Position */
#define SDMMC_BGCR_E_MMC_CONTR_Msk            (_U_(0x1) << SDMMC_BGCR_E_MMC_CONTR_Pos)             /**< (SDMMC_BGCR) Continue Request Mask */
#define SDMMC_BGCR_E_MMC_CONTR(value)         (SDMMC_BGCR_E_MMC_CONTR_Msk & ((value) << SDMMC_BGCR_E_MMC_CONTR_Pos))
#define SDMMC_BGCR_E_MMC_Msk                  _U_(0x03)                                             /**< (SDMMC_BGCR_E_MMC) Register Mask  */


/* -------- SDMMC_WCR : (SDMMC Offset: 0x2B) (R/W 8) Wakeup Control Register -------- */
#define SDMMC_WCR_WKENCINT_Pos                _U_(0)                                               /**< (SDMMC_WCR) Wakeup Event Enable on Card Interrupt Position */
#define SDMMC_WCR_WKENCINT_Msk                (_U_(0x1) << SDMMC_WCR_WKENCINT_Pos)                 /**< (SDMMC_WCR) Wakeup Event Enable on Card Interrupt Mask */
#define SDMMC_WCR_WKENCINT(value)             (SDMMC_WCR_WKENCINT_Msk & ((value) << SDMMC_WCR_WKENCINT_Pos))
#define   SDMMC_WCR_WKENCINT_DISABLED_Val     _U_(0x0)                                             /**< (SDMMC_WCR) Wakeup Event disabled.  */
#define   SDMMC_WCR_WKENCINT_ENABLED_Val      _U_(0x1)                                             /**< (SDMMC_WCR) Wakeup Event enabled.  */
#define SDMMC_WCR_WKENCINT_DISABLED           (SDMMC_WCR_WKENCINT_DISABLED_Val << SDMMC_WCR_WKENCINT_Pos) /**< (SDMMC_WCR) Wakeup Event disabled. Position  */
#define SDMMC_WCR_WKENCINT_ENABLED            (SDMMC_WCR_WKENCINT_ENABLED_Val << SDMMC_WCR_WKENCINT_Pos) /**< (SDMMC_WCR) Wakeup Event enabled. Position  */
#define SDMMC_WCR_WKENCINS_Pos                _U_(1)                                               /**< (SDMMC_WCR) Wakeup Event Enable on Card Insertion Position */
#define SDMMC_WCR_WKENCINS_Msk                (_U_(0x1) << SDMMC_WCR_WKENCINS_Pos)                 /**< (SDMMC_WCR) Wakeup Event Enable on Card Insertion Mask */
#define SDMMC_WCR_WKENCINS(value)             (SDMMC_WCR_WKENCINS_Msk & ((value) << SDMMC_WCR_WKENCINS_Pos))
#define   SDMMC_WCR_WKENCINS_DISABLED_Val     _U_(0x0)                                             /**< (SDMMC_WCR) Wakeup Event disabled.  */
#define   SDMMC_WCR_WKENCINS_ENABLED_Val      _U_(0x1)                                             /**< (SDMMC_WCR) Wakeup Event enabled.  */
#define SDMMC_WCR_WKENCINS_DISABLED           (SDMMC_WCR_WKENCINS_DISABLED_Val << SDMMC_WCR_WKENCINS_Pos) /**< (SDMMC_WCR) Wakeup Event disabled. Position  */
#define SDMMC_WCR_WKENCINS_ENABLED            (SDMMC_WCR_WKENCINS_ENABLED_Val << SDMMC_WCR_WKENCINS_Pos) /**< (SDMMC_WCR) Wakeup Event enabled. Position  */
#define SDMMC_WCR_WKENCREM_Pos                _U_(2)                                               /**< (SDMMC_WCR) Wakeup Event Enable on Card Removal Position */
#define SDMMC_WCR_WKENCREM_Msk                (_U_(0x1) << SDMMC_WCR_WKENCREM_Pos)                 /**< (SDMMC_WCR) Wakeup Event Enable on Card Removal Mask */
#define SDMMC_WCR_WKENCREM(value)             (SDMMC_WCR_WKENCREM_Msk & ((value) << SDMMC_WCR_WKENCREM_Pos))
#define   SDMMC_WCR_WKENCREM_DISABLED_Val     _U_(0x0)                                             /**< (SDMMC_WCR) Wakeup Event disabled.  */
#define   SDMMC_WCR_WKENCREM_ENABLED_Val      _U_(0x1)                                             /**< (SDMMC_WCR) Wakeup Event enabled.  */
#define SDMMC_WCR_WKENCREM_DISABLED           (SDMMC_WCR_WKENCREM_DISABLED_Val << SDMMC_WCR_WKENCREM_Pos) /**< (SDMMC_WCR) Wakeup Event disabled. Position  */
#define SDMMC_WCR_WKENCREM_ENABLED            (SDMMC_WCR_WKENCREM_ENABLED_Val << SDMMC_WCR_WKENCREM_Pos) /**< (SDMMC_WCR) Wakeup Event enabled. Position  */
#define SDMMC_WCR_Msk                         _U_(0x07)                                            /**< (SDMMC_WCR) Register Mask  */


/* -------- SDMMC_CCR : (SDMMC Offset: 0x2C) (R/W 16) Clock Control Register -------- */
#define SDMMC_CCR_INTCLKEN_Pos                _U_(0)                                               /**< (SDMMC_CCR) Internal Clock Enable Position */
#define SDMMC_CCR_INTCLKEN_Msk                (_U_(0x1) << SDMMC_CCR_INTCLKEN_Pos)                 /**< (SDMMC_CCR) Internal Clock Enable Mask */
#define SDMMC_CCR_INTCLKEN(value)             (SDMMC_CCR_INTCLKEN_Msk & ((value) << SDMMC_CCR_INTCLKEN_Pos))
#define SDMMC_CCR_INTCLKS_Pos                 _U_(1)                                               /**< (SDMMC_CCR) Internal Clock Stable Position */
#define SDMMC_CCR_INTCLKS_Msk                 (_U_(0x1) << SDMMC_CCR_INTCLKS_Pos)                  /**< (SDMMC_CCR) Internal Clock Stable Mask */
#define SDMMC_CCR_INTCLKS(value)              (SDMMC_CCR_INTCLKS_Msk & ((value) << SDMMC_CCR_INTCLKS_Pos))
#define SDMMC_CCR_SDCLKEN_Pos                 _U_(2)                                               /**< (SDMMC_CCR) SD Clock Enable Position */
#define SDMMC_CCR_SDCLKEN_Msk                 (_U_(0x1) << SDMMC_CCR_SDCLKEN_Pos)                  /**< (SDMMC_CCR) SD Clock Enable Mask */
#define SDMMC_CCR_SDCLKEN(value)              (SDMMC_CCR_SDCLKEN_Msk & ((value) << SDMMC_CCR_SDCLKEN_Pos))
#define SDMMC_CCR_CLKGSEL_Pos                 _U_(5)                                               /**< (SDMMC_CCR) Clock Generator Select Position */
#define SDMMC_CCR_CLKGSEL_Msk                 (_U_(0x1) << SDMMC_CCR_CLKGSEL_Pos)                  /**< (SDMMC_CCR) Clock Generator Select Mask */
#define SDMMC_CCR_CLKGSEL(value)              (SDMMC_CCR_CLKGSEL_Msk & ((value) << SDMMC_CCR_CLKGSEL_Pos))
#define SDMMC_CCR_USDCLKFSEL_Pos              _U_(6)                                               /**< (SDMMC_CCR) Upper Bits of SDCLK Frequency Select Position */
#define SDMMC_CCR_USDCLKFSEL_Msk              (_U_(0x3) << SDMMC_CCR_USDCLKFSEL_Pos)               /**< (SDMMC_CCR) Upper Bits of SDCLK Frequency Select Mask */
#define SDMMC_CCR_USDCLKFSEL(value)           (SDMMC_CCR_USDCLKFSEL_Msk & ((value) << SDMMC_CCR_USDCLKFSEL_Pos))
#define SDMMC_CCR_SDCLKFSEL_Pos               _U_(8)                                               /**< (SDMMC_CCR) SDCLK Frequency Select Position */
#define SDMMC_CCR_SDCLKFSEL_Msk               (_U_(0xFF) << SDMMC_CCR_SDCLKFSEL_Pos)               /**< (SDMMC_CCR) SDCLK Frequency Select Mask */
#define SDMMC_CCR_SDCLKFSEL(value)            (SDMMC_CCR_SDCLKFSEL_Msk & ((value) << SDMMC_CCR_SDCLKFSEL_Pos))
#define SDMMC_CCR_Msk                         _U_(0xFFE7)                                          /**< (SDMMC_CCR) Register Mask  */


/* -------- SDMMC_TCR : (SDMMC Offset: 0x2E) (R/W 8) Timeout Control Register -------- */
#define SDMMC_TCR_DTCVAL_Pos                  _U_(0)                                               /**< (SDMMC_TCR) Data Timeout Counter Value Position */
#define SDMMC_TCR_DTCVAL_Msk                  (_U_(0xF) << SDMMC_TCR_DTCVAL_Pos)                   /**< (SDMMC_TCR) Data Timeout Counter Value Mask */
#define SDMMC_TCR_DTCVAL(value)               (SDMMC_TCR_DTCVAL_Msk & ((value) << SDMMC_TCR_DTCVAL_Pos))
#define SDMMC_TCR_Msk                         _U_(0x0F)                                            /**< (SDMMC_TCR) Register Mask  */


/* -------- SDMMC_SRR : (SDMMC Offset: 0x2F) (R/W 8) Software Reset Register -------- */
#define SDMMC_SRR_SWRSTALL_Pos                _U_(0)                                               /**< (SDMMC_SRR) Software reset for All Position */
#define SDMMC_SRR_SWRSTALL_Msk                (_U_(0x1) << SDMMC_SRR_SWRSTALL_Pos)                 /**< (SDMMC_SRR) Software reset for All Mask */
#define SDMMC_SRR_SWRSTALL(value)             (SDMMC_SRR_SWRSTALL_Msk & ((value) << SDMMC_SRR_SWRSTALL_Pos))
#define SDMMC_SRR_SWRSTCMD_Pos                _U_(1)                                               /**< (SDMMC_SRR) Software reset for CMD line Position */
#define SDMMC_SRR_SWRSTCMD_Msk                (_U_(0x1) << SDMMC_SRR_SWRSTCMD_Pos)                 /**< (SDMMC_SRR) Software reset for CMD line Mask */
#define SDMMC_SRR_SWRSTCMD(value)             (SDMMC_SRR_SWRSTCMD_Msk & ((value) << SDMMC_SRR_SWRSTCMD_Pos))
#define SDMMC_SRR_SWRSTDAT_Pos                _U_(2)                                               /**< (SDMMC_SRR) Software reset for DAT line Position */
#define SDMMC_SRR_SWRSTDAT_Msk                (_U_(0x1) << SDMMC_SRR_SWRSTDAT_Pos)                 /**< (SDMMC_SRR) Software reset for DAT line Mask */
#define SDMMC_SRR_SWRSTDAT(value)             (SDMMC_SRR_SWRSTDAT_Msk & ((value) << SDMMC_SRR_SWRSTDAT_Pos))
#define SDMMC_SRR_Msk                         _U_(0x07)                                            /**< (SDMMC_SRR) Register Mask  */


/* -------- SDMMC_NISTR : (SDMMC Offset: 0x30) (R/W 16) Normal Interrupt Status Register -------- */
#define SDMMC_NISTR_Msk                       _U_(0x0000)                                          /**< (SDMMC_NISTR) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_NISTR_SD_SDIO_CMDC_Pos          _U_(0)                                               /**< (SDMMC_NISTR) Command Complete Position */
#define SDMMC_NISTR_SD_SDIO_CMDC_Msk          (_U_(0x1) << SDMMC_NISTR_SD_SDIO_CMDC_Pos)           /**< (SDMMC_NISTR) Command Complete Mask */
#define SDMMC_NISTR_SD_SDIO_CMDC(value)       (SDMMC_NISTR_SD_SDIO_CMDC_Msk & ((value) << SDMMC_NISTR_SD_SDIO_CMDC_Pos))
#define SDMMC_NISTR_SD_SDIO_TRFC_Pos          _U_(1)                                               /**< (SDMMC_NISTR) Transfer Complete Position */
#define SDMMC_NISTR_SD_SDIO_TRFC_Msk          (_U_(0x1) << SDMMC_NISTR_SD_SDIO_TRFC_Pos)           /**< (SDMMC_NISTR) Transfer Complete Mask */
#define SDMMC_NISTR_SD_SDIO_TRFC(value)       (SDMMC_NISTR_SD_SDIO_TRFC_Msk & ((value) << SDMMC_NISTR_SD_SDIO_TRFC_Pos))
#define SDMMC_NISTR_SD_SDIO_BLKGE_Pos         _U_(2)                                               /**< (SDMMC_NISTR) Block Gap Event Position */
#define SDMMC_NISTR_SD_SDIO_BLKGE_Msk         (_U_(0x1) << SDMMC_NISTR_SD_SDIO_BLKGE_Pos)          /**< (SDMMC_NISTR) Block Gap Event Mask */
#define SDMMC_NISTR_SD_SDIO_BLKGE(value)      (SDMMC_NISTR_SD_SDIO_BLKGE_Msk & ((value) << SDMMC_NISTR_SD_SDIO_BLKGE_Pos))
#define SDMMC_NISTR_SD_SDIO_DMAINT_Pos        _U_(3)                                               /**< (SDMMC_NISTR) DMA Interrupt Position */
#define SDMMC_NISTR_SD_SDIO_DMAINT_Msk        (_U_(0x1) << SDMMC_NISTR_SD_SDIO_DMAINT_Pos)         /**< (SDMMC_NISTR) DMA Interrupt Mask */
#define SDMMC_NISTR_SD_SDIO_DMAINT(value)     (SDMMC_NISTR_SD_SDIO_DMAINT_Msk & ((value) << SDMMC_NISTR_SD_SDIO_DMAINT_Pos))
#define SDMMC_NISTR_SD_SDIO_BWRRDY_Pos        _U_(4)                                               /**< (SDMMC_NISTR) Buffer Write Ready Position */
#define SDMMC_NISTR_SD_SDIO_BWRRDY_Msk        (_U_(0x1) << SDMMC_NISTR_SD_SDIO_BWRRDY_Pos)         /**< (SDMMC_NISTR) Buffer Write Ready Mask */
#define SDMMC_NISTR_SD_SDIO_BWRRDY(value)     (SDMMC_NISTR_SD_SDIO_BWRRDY_Msk & ((value) << SDMMC_NISTR_SD_SDIO_BWRRDY_Pos))
#define SDMMC_NISTR_SD_SDIO_BRDRDY_Pos        _U_(5)                                               /**< (SDMMC_NISTR) Buffer Read Ready Position */
#define SDMMC_NISTR_SD_SDIO_BRDRDY_Msk        (_U_(0x1) << SDMMC_NISTR_SD_SDIO_BRDRDY_Pos)         /**< (SDMMC_NISTR) Buffer Read Ready Mask */
#define SDMMC_NISTR_SD_SDIO_BRDRDY(value)     (SDMMC_NISTR_SD_SDIO_BRDRDY_Msk & ((value) << SDMMC_NISTR_SD_SDIO_BRDRDY_Pos))
#define SDMMC_NISTR_SD_SDIO_CINS_Pos          _U_(6)                                               /**< (SDMMC_NISTR) Card Insertion Position */
#define SDMMC_NISTR_SD_SDIO_CINS_Msk          (_U_(0x1) << SDMMC_NISTR_SD_SDIO_CINS_Pos)           /**< (SDMMC_NISTR) Card Insertion Mask */
#define SDMMC_NISTR_SD_SDIO_CINS(value)       (SDMMC_NISTR_SD_SDIO_CINS_Msk & ((value) << SDMMC_NISTR_SD_SDIO_CINS_Pos))
#define SDMMC_NISTR_SD_SDIO_CREM_Pos          _U_(7)                                               /**< (SDMMC_NISTR) Card Removal Position */
#define SDMMC_NISTR_SD_SDIO_CREM_Msk          (_U_(0x1) << SDMMC_NISTR_SD_SDIO_CREM_Pos)           /**< (SDMMC_NISTR) Card Removal Mask */
#define SDMMC_NISTR_SD_SDIO_CREM(value)       (SDMMC_NISTR_SD_SDIO_CREM_Msk & ((value) << SDMMC_NISTR_SD_SDIO_CREM_Pos))
#define SDMMC_NISTR_SD_SDIO_CINT_Pos          _U_(8)                                               /**< (SDMMC_NISTR) Card Interrupt Position */
#define SDMMC_NISTR_SD_SDIO_CINT_Msk          (_U_(0x1) << SDMMC_NISTR_SD_SDIO_CINT_Pos)           /**< (SDMMC_NISTR) Card Interrupt Mask */
#define SDMMC_NISTR_SD_SDIO_CINT(value)       (SDMMC_NISTR_SD_SDIO_CINT_Msk & ((value) << SDMMC_NISTR_SD_SDIO_CINT_Pos))
#define SDMMC_NISTR_SD_SDIO_ERRINT_Pos        _U_(15)                                              /**< (SDMMC_NISTR) Error Interrupt Position */
#define SDMMC_NISTR_SD_SDIO_ERRINT_Msk        (_U_(0x1) << SDMMC_NISTR_SD_SDIO_ERRINT_Pos)         /**< (SDMMC_NISTR) Error Interrupt Mask */
#define SDMMC_NISTR_SD_SDIO_ERRINT(value)     (SDMMC_NISTR_SD_SDIO_ERRINT_Msk & ((value) << SDMMC_NISTR_SD_SDIO_ERRINT_Pos))
#define SDMMC_NISTR_SD_SDIO_Msk               _U_(0x81FF)                                           /**< (SDMMC_NISTR_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_NISTR_E_MMC_CMDC_Pos            _U_(0)                                               /**< (SDMMC_NISTR) Command Complete Position */
#define SDMMC_NISTR_E_MMC_CMDC_Msk            (_U_(0x1) << SDMMC_NISTR_E_MMC_CMDC_Pos)             /**< (SDMMC_NISTR) Command Complete Mask */
#define SDMMC_NISTR_E_MMC_CMDC(value)         (SDMMC_NISTR_E_MMC_CMDC_Msk & ((value) << SDMMC_NISTR_E_MMC_CMDC_Pos))
#define SDMMC_NISTR_E_MMC_TRFC_Pos            _U_(1)                                               /**< (SDMMC_NISTR) Transfer Complete Position */
#define SDMMC_NISTR_E_MMC_TRFC_Msk            (_U_(0x1) << SDMMC_NISTR_E_MMC_TRFC_Pos)             /**< (SDMMC_NISTR) Transfer Complete Mask */
#define SDMMC_NISTR_E_MMC_TRFC(value)         (SDMMC_NISTR_E_MMC_TRFC_Msk & ((value) << SDMMC_NISTR_E_MMC_TRFC_Pos))
#define SDMMC_NISTR_E_MMC_BLKGE_Pos           _U_(2)                                               /**< (SDMMC_NISTR) Block Gap Event Position */
#define SDMMC_NISTR_E_MMC_BLKGE_Msk           (_U_(0x1) << SDMMC_NISTR_E_MMC_BLKGE_Pos)            /**< (SDMMC_NISTR) Block Gap Event Mask */
#define SDMMC_NISTR_E_MMC_BLKGE(value)        (SDMMC_NISTR_E_MMC_BLKGE_Msk & ((value) << SDMMC_NISTR_E_MMC_BLKGE_Pos))
#define SDMMC_NISTR_E_MMC_DMAINT_Pos          _U_(3)                                               /**< (SDMMC_NISTR) DMA Interrupt Position */
#define SDMMC_NISTR_E_MMC_DMAINT_Msk          (_U_(0x1) << SDMMC_NISTR_E_MMC_DMAINT_Pos)           /**< (SDMMC_NISTR) DMA Interrupt Mask */
#define SDMMC_NISTR_E_MMC_DMAINT(value)       (SDMMC_NISTR_E_MMC_DMAINT_Msk & ((value) << SDMMC_NISTR_E_MMC_DMAINT_Pos))
#define SDMMC_NISTR_E_MMC_BWRRDY_Pos          _U_(4)                                               /**< (SDMMC_NISTR) Buffer Write Ready Position */
#define SDMMC_NISTR_E_MMC_BWRRDY_Msk          (_U_(0x1) << SDMMC_NISTR_E_MMC_BWRRDY_Pos)           /**< (SDMMC_NISTR) Buffer Write Ready Mask */
#define SDMMC_NISTR_E_MMC_BWRRDY(value)       (SDMMC_NISTR_E_MMC_BWRRDY_Msk & ((value) << SDMMC_NISTR_E_MMC_BWRRDY_Pos))
#define SDMMC_NISTR_E_MMC_BRDRDY_Pos          _U_(5)                                               /**< (SDMMC_NISTR) Buffer Read Ready Position */
#define SDMMC_NISTR_E_MMC_BRDRDY_Msk          (_U_(0x1) << SDMMC_NISTR_E_MMC_BRDRDY_Pos)           /**< (SDMMC_NISTR) Buffer Read Ready Mask */
#define SDMMC_NISTR_E_MMC_BRDRDY(value)       (SDMMC_NISTR_E_MMC_BRDRDY_Msk & ((value) << SDMMC_NISTR_E_MMC_BRDRDY_Pos))
#define SDMMC_NISTR_E_MMC_BOOTAR_Pos          _U_(14)                                              /**< (SDMMC_NISTR) Boot Acknowledge Received Position */
#define SDMMC_NISTR_E_MMC_BOOTAR_Msk          (_U_(0x1) << SDMMC_NISTR_E_MMC_BOOTAR_Pos)           /**< (SDMMC_NISTR) Boot Acknowledge Received Mask */
#define SDMMC_NISTR_E_MMC_BOOTAR(value)       (SDMMC_NISTR_E_MMC_BOOTAR_Msk & ((value) << SDMMC_NISTR_E_MMC_BOOTAR_Pos))
#define SDMMC_NISTR_E_MMC_ERRINT_Pos          _U_(15)                                              /**< (SDMMC_NISTR) Error Interrupt Position */
#define SDMMC_NISTR_E_MMC_ERRINT_Msk          (_U_(0x1) << SDMMC_NISTR_E_MMC_ERRINT_Pos)           /**< (SDMMC_NISTR) Error Interrupt Mask */
#define SDMMC_NISTR_E_MMC_ERRINT(value)       (SDMMC_NISTR_E_MMC_ERRINT_Msk & ((value) << SDMMC_NISTR_E_MMC_ERRINT_Pos))
#define SDMMC_NISTR_E_MMC_Msk                 _U_(0xC03F)                                           /**< (SDMMC_NISTR_E_MMC) Register Mask  */


/* -------- SDMMC_EISTR : (SDMMC Offset: 0x32) (R/W 16) Error Interrupt Status Register -------- */
#define SDMMC_EISTR_Msk                       _U_(0x0000)                                          /**< (SDMMC_EISTR) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_EISTR_SD_SDIO_CMDTEO_Pos        _U_(0)                                               /**< (SDMMC_EISTR) Command Timeout Error Position */
#define SDMMC_EISTR_SD_SDIO_CMDTEO_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CMDTEO_Pos)         /**< (SDMMC_EISTR) Command Timeout Error Mask */
#define SDMMC_EISTR_SD_SDIO_CMDTEO(value)     (SDMMC_EISTR_SD_SDIO_CMDTEO_Msk & ((value) << SDMMC_EISTR_SD_SDIO_CMDTEO_Pos))
#define SDMMC_EISTR_SD_SDIO_CMDCRC_Pos        _U_(1)                                               /**< (SDMMC_EISTR) Command CRC Error Position */
#define SDMMC_EISTR_SD_SDIO_CMDCRC_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CMDCRC_Pos)         /**< (SDMMC_EISTR) Command CRC Error Mask */
#define SDMMC_EISTR_SD_SDIO_CMDCRC(value)     (SDMMC_EISTR_SD_SDIO_CMDCRC_Msk & ((value) << SDMMC_EISTR_SD_SDIO_CMDCRC_Pos))
#define SDMMC_EISTR_SD_SDIO_CMDEND_Pos        _U_(2)                                               /**< (SDMMC_EISTR) Command End Bit Error Position */
#define SDMMC_EISTR_SD_SDIO_CMDEND_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CMDEND_Pos)         /**< (SDMMC_EISTR) Command End Bit Error Mask */
#define SDMMC_EISTR_SD_SDIO_CMDEND(value)     (SDMMC_EISTR_SD_SDIO_CMDEND_Msk & ((value) << SDMMC_EISTR_SD_SDIO_CMDEND_Pos))
#define SDMMC_EISTR_SD_SDIO_CMDIDX_Pos        _U_(3)                                               /**< (SDMMC_EISTR) Command Index Error Position */
#define SDMMC_EISTR_SD_SDIO_CMDIDX_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CMDIDX_Pos)         /**< (SDMMC_EISTR) Command Index Error Mask */
#define SDMMC_EISTR_SD_SDIO_CMDIDX(value)     (SDMMC_EISTR_SD_SDIO_CMDIDX_Msk & ((value) << SDMMC_EISTR_SD_SDIO_CMDIDX_Pos))
#define SDMMC_EISTR_SD_SDIO_DATTEO_Pos        _U_(4)                                               /**< (SDMMC_EISTR) Data Timeout Error Position */
#define SDMMC_EISTR_SD_SDIO_DATTEO_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_DATTEO_Pos)         /**< (SDMMC_EISTR) Data Timeout Error Mask */
#define SDMMC_EISTR_SD_SDIO_DATTEO(value)     (SDMMC_EISTR_SD_SDIO_DATTEO_Msk & ((value) << SDMMC_EISTR_SD_SDIO_DATTEO_Pos))
#define SDMMC_EISTR_SD_SDIO_DATCRC_Pos        _U_(5)                                               /**< (SDMMC_EISTR) Data CRC error Position */
#define SDMMC_EISTR_SD_SDIO_DATCRC_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_DATCRC_Pos)         /**< (SDMMC_EISTR) Data CRC error Mask */
#define SDMMC_EISTR_SD_SDIO_DATCRC(value)     (SDMMC_EISTR_SD_SDIO_DATCRC_Msk & ((value) << SDMMC_EISTR_SD_SDIO_DATCRC_Pos))
#define SDMMC_EISTR_SD_SDIO_DATEND_Pos        _U_(6)                                               /**< (SDMMC_EISTR) Data End Bit Error Position */
#define SDMMC_EISTR_SD_SDIO_DATEND_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_DATEND_Pos)         /**< (SDMMC_EISTR) Data End Bit Error Mask */
#define SDMMC_EISTR_SD_SDIO_DATEND(value)     (SDMMC_EISTR_SD_SDIO_DATEND_Msk & ((value) << SDMMC_EISTR_SD_SDIO_DATEND_Pos))
#define SDMMC_EISTR_SD_SDIO_CURLIM_Pos        _U_(7)                                               /**< (SDMMC_EISTR) Current Limit Error Position */
#define SDMMC_EISTR_SD_SDIO_CURLIM_Msk        (_U_(0x1) << SDMMC_EISTR_SD_SDIO_CURLIM_Pos)         /**< (SDMMC_EISTR) Current Limit Error Mask */
#define SDMMC_EISTR_SD_SDIO_CURLIM(value)     (SDMMC_EISTR_SD_SDIO_CURLIM_Msk & ((value) << SDMMC_EISTR_SD_SDIO_CURLIM_Pos))
#define SDMMC_EISTR_SD_SDIO_ACMD_Pos          _U_(8)                                               /**< (SDMMC_EISTR) Auto CMD Error Position */
#define SDMMC_EISTR_SD_SDIO_ACMD_Msk          (_U_(0x1) << SDMMC_EISTR_SD_SDIO_ACMD_Pos)           /**< (SDMMC_EISTR) Auto CMD Error Mask */
#define SDMMC_EISTR_SD_SDIO_ACMD(value)       (SDMMC_EISTR_SD_SDIO_ACMD_Msk & ((value) << SDMMC_EISTR_SD_SDIO_ACMD_Pos))
#define SDMMC_EISTR_SD_SDIO_ADMA_Pos          _U_(9)                                               /**< (SDMMC_EISTR) ADMA Error Position */
#define SDMMC_EISTR_SD_SDIO_ADMA_Msk          (_U_(0x1) << SDMMC_EISTR_SD_SDIO_ADMA_Pos)           /**< (SDMMC_EISTR) ADMA Error Mask */
#define SDMMC_EISTR_SD_SDIO_ADMA(value)       (SDMMC_EISTR_SD_SDIO_ADMA_Msk & ((value) << SDMMC_EISTR_SD_SDIO_ADMA_Pos))
#define SDMMC_EISTR_SD_SDIO_Msk               _U_(0x03FF)                                           /**< (SDMMC_EISTR_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_EISTR_E_MMC_CMDTEO_Pos          _U_(0)                                               /**< (SDMMC_EISTR) Command Timeout Error Position */
#define SDMMC_EISTR_E_MMC_CMDTEO_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_CMDTEO_Pos)           /**< (SDMMC_EISTR) Command Timeout Error Mask */
#define SDMMC_EISTR_E_MMC_CMDTEO(value)       (SDMMC_EISTR_E_MMC_CMDTEO_Msk & ((value) << SDMMC_EISTR_E_MMC_CMDTEO_Pos))
#define SDMMC_EISTR_E_MMC_CMDCRC_Pos          _U_(1)                                               /**< (SDMMC_EISTR) Command CRC Error Position */
#define SDMMC_EISTR_E_MMC_CMDCRC_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_CMDCRC_Pos)           /**< (SDMMC_EISTR) Command CRC Error Mask */
#define SDMMC_EISTR_E_MMC_CMDCRC(value)       (SDMMC_EISTR_E_MMC_CMDCRC_Msk & ((value) << SDMMC_EISTR_E_MMC_CMDCRC_Pos))
#define SDMMC_EISTR_E_MMC_CMDEND_Pos          _U_(2)                                               /**< (SDMMC_EISTR) Command End Bit Error Position */
#define SDMMC_EISTR_E_MMC_CMDEND_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_CMDEND_Pos)           /**< (SDMMC_EISTR) Command End Bit Error Mask */
#define SDMMC_EISTR_E_MMC_CMDEND(value)       (SDMMC_EISTR_E_MMC_CMDEND_Msk & ((value) << SDMMC_EISTR_E_MMC_CMDEND_Pos))
#define SDMMC_EISTR_E_MMC_CMDIDX_Pos          _U_(3)                                               /**< (SDMMC_EISTR) Command Index Error Position */
#define SDMMC_EISTR_E_MMC_CMDIDX_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_CMDIDX_Pos)           /**< (SDMMC_EISTR) Command Index Error Mask */
#define SDMMC_EISTR_E_MMC_CMDIDX(value)       (SDMMC_EISTR_E_MMC_CMDIDX_Msk & ((value) << SDMMC_EISTR_E_MMC_CMDIDX_Pos))
#define SDMMC_EISTR_E_MMC_DATTEO_Pos          _U_(4)                                               /**< (SDMMC_EISTR) Data Timeout error Position */
#define SDMMC_EISTR_E_MMC_DATTEO_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_DATTEO_Pos)           /**< (SDMMC_EISTR) Data Timeout error Mask */
#define SDMMC_EISTR_E_MMC_DATTEO(value)       (SDMMC_EISTR_E_MMC_DATTEO_Msk & ((value) << SDMMC_EISTR_E_MMC_DATTEO_Pos))
#define SDMMC_EISTR_E_MMC_DATCRC_Pos          _U_(5)                                               /**< (SDMMC_EISTR) Data CRC Error Position */
#define SDMMC_EISTR_E_MMC_DATCRC_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_DATCRC_Pos)           /**< (SDMMC_EISTR) Data CRC Error Mask */
#define SDMMC_EISTR_E_MMC_DATCRC(value)       (SDMMC_EISTR_E_MMC_DATCRC_Msk & ((value) << SDMMC_EISTR_E_MMC_DATCRC_Pos))
#define SDMMC_EISTR_E_MMC_DATEND_Pos          _U_(6)                                               /**< (SDMMC_EISTR) Data End Bit Error Position */
#define SDMMC_EISTR_E_MMC_DATEND_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_DATEND_Pos)           /**< (SDMMC_EISTR) Data End Bit Error Mask */
#define SDMMC_EISTR_E_MMC_DATEND(value)       (SDMMC_EISTR_E_MMC_DATEND_Msk & ((value) << SDMMC_EISTR_E_MMC_DATEND_Pos))
#define SDMMC_EISTR_E_MMC_CURLIM_Pos          _U_(7)                                               /**< (SDMMC_EISTR) Current Limit Error Position */
#define SDMMC_EISTR_E_MMC_CURLIM_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_CURLIM_Pos)           /**< (SDMMC_EISTR) Current Limit Error Mask */
#define SDMMC_EISTR_E_MMC_CURLIM(value)       (SDMMC_EISTR_E_MMC_CURLIM_Msk & ((value) << SDMMC_EISTR_E_MMC_CURLIM_Pos))
#define SDMMC_EISTR_E_MMC_ACMD_Pos            _U_(8)                                               /**< (SDMMC_EISTR) Auto CMD Error Position */
#define SDMMC_EISTR_E_MMC_ACMD_Msk            (_U_(0x1) << SDMMC_EISTR_E_MMC_ACMD_Pos)             /**< (SDMMC_EISTR) Auto CMD Error Mask */
#define SDMMC_EISTR_E_MMC_ACMD(value)         (SDMMC_EISTR_E_MMC_ACMD_Msk & ((value) << SDMMC_EISTR_E_MMC_ACMD_Pos))
#define SDMMC_EISTR_E_MMC_ADMA_Pos            _U_(9)                                               /**< (SDMMC_EISTR) ADMA Error Position */
#define SDMMC_EISTR_E_MMC_ADMA_Msk            (_U_(0x1) << SDMMC_EISTR_E_MMC_ADMA_Pos)             /**< (SDMMC_EISTR) ADMA Error Mask */
#define SDMMC_EISTR_E_MMC_ADMA(value)         (SDMMC_EISTR_E_MMC_ADMA_Msk & ((value) << SDMMC_EISTR_E_MMC_ADMA_Pos))
#define SDMMC_EISTR_E_MMC_BOOTAE_Pos          _U_(12)                                              /**< (SDMMC_EISTR) Boot Acknowledge Error Position */
#define SDMMC_EISTR_E_MMC_BOOTAE_Msk          (_U_(0x1) << SDMMC_EISTR_E_MMC_BOOTAE_Pos)           /**< (SDMMC_EISTR) Boot Acknowledge Error Mask */
#define SDMMC_EISTR_E_MMC_BOOTAE(value)       (SDMMC_EISTR_E_MMC_BOOTAE_Msk & ((value) << SDMMC_EISTR_E_MMC_BOOTAE_Pos))
#define SDMMC_EISTR_E_MMC_Msk                 _U_(0x13FF)                                           /**< (SDMMC_EISTR_E_MMC) Register Mask  */


/* -------- SDMMC_NISTER : (SDMMC Offset: 0x34) (R/W 16) Normal Interrupt Status Enable Register -------- */
#define SDMMC_NISTER_Msk                      _U_(0x0000)                                          /**< (SDMMC_NISTER) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_NISTER_SD_SDIO_CMDC_Pos         _U_(0)                                               /**< (SDMMC_NISTER) Command Complete Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_CMDC_Msk         (_U_(0x1) << SDMMC_NISTER_SD_SDIO_CMDC_Pos)          /**< (SDMMC_NISTER) Command Complete Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_CMDC(value)      (SDMMC_NISTER_SD_SDIO_CMDC_Msk & ((value) << SDMMC_NISTER_SD_SDIO_CMDC_Pos))
#define   SDMMC_NISTER_SD_SDIO_CMDC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_CMDC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_CMDC_MASKED      (SDMMC_NISTER_SD_SDIO_CMDC_MASKED_Val << SDMMC_NISTER_SD_SDIO_CMDC_Pos) /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_CMDC_ENABLED     (SDMMC_NISTER_SD_SDIO_CMDC_ENABLED_Val << SDMMC_NISTER_SD_SDIO_CMDC_Pos) /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_TRFC_Pos         _U_(1)                                               /**< (SDMMC_NISTER) Transfer Complete Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_TRFC_Msk         (_U_(0x1) << SDMMC_NISTER_SD_SDIO_TRFC_Pos)          /**< (SDMMC_NISTER) Transfer Complete Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_TRFC(value)      (SDMMC_NISTER_SD_SDIO_TRFC_Msk & ((value) << SDMMC_NISTER_SD_SDIO_TRFC_Pos))
#define   SDMMC_NISTER_SD_SDIO_TRFC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_TRFC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_TRFC_MASKED      (SDMMC_NISTER_SD_SDIO_TRFC_MASKED_Val << SDMMC_NISTER_SD_SDIO_TRFC_Pos) /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_TRFC_ENABLED     (SDMMC_NISTER_SD_SDIO_TRFC_ENABLED_Val << SDMMC_NISTER_SD_SDIO_TRFC_Pos) /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_BLKGE_Pos        _U_(2)                                               /**< (SDMMC_NISTER) Block Gap Event Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_BLKGE_Msk        (_U_(0x1) << SDMMC_NISTER_SD_SDIO_BLKGE_Pos)         /**< (SDMMC_NISTER) Block Gap Event Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_BLKGE(value)     (SDMMC_NISTER_SD_SDIO_BLKGE_Msk & ((value) << SDMMC_NISTER_SD_SDIO_BLKGE_Pos))
#define   SDMMC_NISTER_SD_SDIO_BLKGE_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_BLKGE_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_BLKGE_MASKED     (SDMMC_NISTER_SD_SDIO_BLKGE_MASKED_Val << SDMMC_NISTER_SD_SDIO_BLKGE_Pos) /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_BLKGE_ENABLED    (SDMMC_NISTER_SD_SDIO_BLKGE_ENABLED_Val << SDMMC_NISTER_SD_SDIO_BLKGE_Pos) /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_DMAINT_Pos       _U_(3)                                               /**< (SDMMC_NISTER) DMA Interrupt Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_DMAINT_Msk       (_U_(0x1) << SDMMC_NISTER_SD_SDIO_DMAINT_Pos)        /**< (SDMMC_NISTER) DMA Interrupt Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_DMAINT(value)    (SDMMC_NISTER_SD_SDIO_DMAINT_Msk & ((value) << SDMMC_NISTER_SD_SDIO_DMAINT_Pos))
#define   SDMMC_NISTER_SD_SDIO_DMAINT_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_DMAINT_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_DMAINT_MASKED    (SDMMC_NISTER_SD_SDIO_DMAINT_MASKED_Val << SDMMC_NISTER_SD_SDIO_DMAINT_Pos) /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_DMAINT_ENABLED   (SDMMC_NISTER_SD_SDIO_DMAINT_ENABLED_Val << SDMMC_NISTER_SD_SDIO_DMAINT_Pos) /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_BWRRDY_Pos       _U_(4)                                               /**< (SDMMC_NISTER) Buffer Write Ready Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_BWRRDY_Msk       (_U_(0x1) << SDMMC_NISTER_SD_SDIO_BWRRDY_Pos)        /**< (SDMMC_NISTER) Buffer Write Ready Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_BWRRDY(value)    (SDMMC_NISTER_SD_SDIO_BWRRDY_Msk & ((value) << SDMMC_NISTER_SD_SDIO_BWRRDY_Pos))
#define   SDMMC_NISTER_SD_SDIO_BWRRDY_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_BWRRDY_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_BWRRDY_MASKED    (SDMMC_NISTER_SD_SDIO_BWRRDY_MASKED_Val << SDMMC_NISTER_SD_SDIO_BWRRDY_Pos) /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_BWRRDY_ENABLED   (SDMMC_NISTER_SD_SDIO_BWRRDY_ENABLED_Val << SDMMC_NISTER_SD_SDIO_BWRRDY_Pos) /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_BRDRDY_Pos       _U_(5)                                               /**< (SDMMC_NISTER) Buffer Read Ready Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_BRDRDY_Msk       (_U_(0x1) << SDMMC_NISTER_SD_SDIO_BRDRDY_Pos)        /**< (SDMMC_NISTER) Buffer Read Ready Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_BRDRDY(value)    (SDMMC_NISTER_SD_SDIO_BRDRDY_Msk & ((value) << SDMMC_NISTER_SD_SDIO_BRDRDY_Pos))
#define   SDMMC_NISTER_SD_SDIO_BRDRDY_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_BRDRDY_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_BRDRDY_MASKED    (SDMMC_NISTER_SD_SDIO_BRDRDY_MASKED_Val << SDMMC_NISTER_SD_SDIO_BRDRDY_Pos) /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_BRDRDY_ENABLED   (SDMMC_NISTER_SD_SDIO_BRDRDY_ENABLED_Val << SDMMC_NISTER_SD_SDIO_BRDRDY_Pos) /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_CINS_Pos         _U_(6)                                               /**< (SDMMC_NISTER) Card Insertion Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_CINS_Msk         (_U_(0x1) << SDMMC_NISTER_SD_SDIO_CINS_Pos)          /**< (SDMMC_NISTER) Card Insertion Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_CINS(value)      (SDMMC_NISTER_SD_SDIO_CINS_Msk & ((value) << SDMMC_NISTER_SD_SDIO_CINS_Pos))
#define   SDMMC_NISTER_SD_SDIO_CINS_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The CINS status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_CINS_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The CINS status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_CINS_MASKED      (SDMMC_NISTER_SD_SDIO_CINS_MASKED_Val << SDMMC_NISTER_SD_SDIO_CINS_Pos) /**< (SDMMC_NISTER) The CINS status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_CINS_ENABLED     (SDMMC_NISTER_SD_SDIO_CINS_ENABLED_Val << SDMMC_NISTER_SD_SDIO_CINS_Pos) /**< (SDMMC_NISTER) The CINS status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_CREM_Pos         _U_(7)                                               /**< (SDMMC_NISTER) Card Removal Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_CREM_Msk         (_U_(0x1) << SDMMC_NISTER_SD_SDIO_CREM_Pos)          /**< (SDMMC_NISTER) Card Removal Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_CREM(value)      (SDMMC_NISTER_SD_SDIO_CREM_Msk & ((value) << SDMMC_NISTER_SD_SDIO_CREM_Pos))
#define   SDMMC_NISTER_SD_SDIO_CREM_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The CREM status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_CREM_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The CREM status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_CREM_MASKED      (SDMMC_NISTER_SD_SDIO_CREM_MASKED_Val << SDMMC_NISTER_SD_SDIO_CREM_Pos) /**< (SDMMC_NISTER) The CREM status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_CREM_ENABLED     (SDMMC_NISTER_SD_SDIO_CREM_ENABLED_Val << SDMMC_NISTER_SD_SDIO_CREM_Pos) /**< (SDMMC_NISTER) The CREM status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_CINT_Pos         _U_(8)                                               /**< (SDMMC_NISTER) Card Interrupt Status Enable Position */
#define SDMMC_NISTER_SD_SDIO_CINT_Msk         (_U_(0x1) << SDMMC_NISTER_SD_SDIO_CINT_Pos)          /**< (SDMMC_NISTER) Card Interrupt Status Enable Mask */
#define SDMMC_NISTER_SD_SDIO_CINT(value)      (SDMMC_NISTER_SD_SDIO_CINT_Msk & ((value) << SDMMC_NISTER_SD_SDIO_CINT_Pos))
#define   SDMMC_NISTER_SD_SDIO_CINT_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The CINT status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_SD_SDIO_CINT_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The CINT status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_SD_SDIO_CINT_MASKED      (SDMMC_NISTER_SD_SDIO_CINT_MASKED_Val << SDMMC_NISTER_SD_SDIO_CINT_Pos) /**< (SDMMC_NISTER) The CINT status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_SD_SDIO_CINT_ENABLED     (SDMMC_NISTER_SD_SDIO_CINT_ENABLED_Val << SDMMC_NISTER_SD_SDIO_CINT_Pos) /**< (SDMMC_NISTER) The CINT status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_SD_SDIO_Msk              _U_(0x01FF)                                           /**< (SDMMC_NISTER_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_NISTER_E_MMC_CMDC_Pos           _U_(0)                                               /**< (SDMMC_NISTER) Command Complete Status Enable Position */
#define SDMMC_NISTER_E_MMC_CMDC_Msk           (_U_(0x1) << SDMMC_NISTER_E_MMC_CMDC_Pos)            /**< (SDMMC_NISTER) Command Complete Status Enable Mask */
#define SDMMC_NISTER_E_MMC_CMDC(value)        (SDMMC_NISTER_E_MMC_CMDC_Msk & ((value) << SDMMC_NISTER_E_MMC_CMDC_Pos))
#define   SDMMC_NISTER_E_MMC_CMDC_MASKED_Val  _U_(0x0)                                             /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_CMDC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_CMDC_MASKED        (SDMMC_NISTER_E_MMC_CMDC_MASKED_Val << SDMMC_NISTER_E_MMC_CMDC_Pos) /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_CMDC_ENABLED       (SDMMC_NISTER_E_MMC_CMDC_ENABLED_Val << SDMMC_NISTER_E_MMC_CMDC_Pos) /**< (SDMMC_NISTER) The CMDC status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_TRFC_Pos           _U_(1)                                               /**< (SDMMC_NISTER) Transfer Complete Status Enable Position */
#define SDMMC_NISTER_E_MMC_TRFC_Msk           (_U_(0x1) << SDMMC_NISTER_E_MMC_TRFC_Pos)            /**< (SDMMC_NISTER) Transfer Complete Status Enable Mask */
#define SDMMC_NISTER_E_MMC_TRFC(value)        (SDMMC_NISTER_E_MMC_TRFC_Msk & ((value) << SDMMC_NISTER_E_MMC_TRFC_Pos))
#define   SDMMC_NISTER_E_MMC_TRFC_MASKED_Val  _U_(0x0)                                             /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_TRFC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_TRFC_MASKED        (SDMMC_NISTER_E_MMC_TRFC_MASKED_Val << SDMMC_NISTER_E_MMC_TRFC_Pos) /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_TRFC_ENABLED       (SDMMC_NISTER_E_MMC_TRFC_ENABLED_Val << SDMMC_NISTER_E_MMC_TRFC_Pos) /**< (SDMMC_NISTER) The TRFC status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_BLKGE_Pos          _U_(2)                                               /**< (SDMMC_NISTER) Block Gap Event Status Enable Position */
#define SDMMC_NISTER_E_MMC_BLKGE_Msk          (_U_(0x1) << SDMMC_NISTER_E_MMC_BLKGE_Pos)           /**< (SDMMC_NISTER) Block Gap Event Status Enable Mask */
#define SDMMC_NISTER_E_MMC_BLKGE(value)       (SDMMC_NISTER_E_MMC_BLKGE_Msk & ((value) << SDMMC_NISTER_E_MMC_BLKGE_Pos))
#define   SDMMC_NISTER_E_MMC_BLKGE_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_BLKGE_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_BLKGE_MASKED       (SDMMC_NISTER_E_MMC_BLKGE_MASKED_Val << SDMMC_NISTER_E_MMC_BLKGE_Pos) /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_BLKGE_ENABLED      (SDMMC_NISTER_E_MMC_BLKGE_ENABLED_Val << SDMMC_NISTER_E_MMC_BLKGE_Pos) /**< (SDMMC_NISTER) The BLKGE status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_DMAINT_Pos         _U_(3)                                               /**< (SDMMC_NISTER) DMA Interrupt Status Enable Position */
#define SDMMC_NISTER_E_MMC_DMAINT_Msk         (_U_(0x1) << SDMMC_NISTER_E_MMC_DMAINT_Pos)          /**< (SDMMC_NISTER) DMA Interrupt Status Enable Mask */
#define SDMMC_NISTER_E_MMC_DMAINT(value)      (SDMMC_NISTER_E_MMC_DMAINT_Msk & ((value) << SDMMC_NISTER_E_MMC_DMAINT_Pos))
#define   SDMMC_NISTER_E_MMC_DMAINT_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_DMAINT_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_DMAINT_MASKED      (SDMMC_NISTER_E_MMC_DMAINT_MASKED_Val << SDMMC_NISTER_E_MMC_DMAINT_Pos) /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_DMAINT_ENABLED     (SDMMC_NISTER_E_MMC_DMAINT_ENABLED_Val << SDMMC_NISTER_E_MMC_DMAINT_Pos) /**< (SDMMC_NISTER) The DMAINT status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_BWRRDY_Pos         _U_(4)                                               /**< (SDMMC_NISTER) Buffer Write Ready Status Enable Position */
#define SDMMC_NISTER_E_MMC_BWRRDY_Msk         (_U_(0x1) << SDMMC_NISTER_E_MMC_BWRRDY_Pos)          /**< (SDMMC_NISTER) Buffer Write Ready Status Enable Mask */
#define SDMMC_NISTER_E_MMC_BWRRDY(value)      (SDMMC_NISTER_E_MMC_BWRRDY_Msk & ((value) << SDMMC_NISTER_E_MMC_BWRRDY_Pos))
#define   SDMMC_NISTER_E_MMC_BWRRDY_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_BWRRDY_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_BWRRDY_MASKED      (SDMMC_NISTER_E_MMC_BWRRDY_MASKED_Val << SDMMC_NISTER_E_MMC_BWRRDY_Pos) /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_BWRRDY_ENABLED     (SDMMC_NISTER_E_MMC_BWRRDY_ENABLED_Val << SDMMC_NISTER_E_MMC_BWRRDY_Pos) /**< (SDMMC_NISTER) The BWRRDY status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_BRDRDY_Pos         _U_(5)                                               /**< (SDMMC_NISTER) Buffer Read Ready Status Enable Position */
#define SDMMC_NISTER_E_MMC_BRDRDY_Msk         (_U_(0x1) << SDMMC_NISTER_E_MMC_BRDRDY_Pos)          /**< (SDMMC_NISTER) Buffer Read Ready Status Enable Mask */
#define SDMMC_NISTER_E_MMC_BRDRDY(value)      (SDMMC_NISTER_E_MMC_BRDRDY_Msk & ((value) << SDMMC_NISTER_E_MMC_BRDRDY_Pos))
#define   SDMMC_NISTER_E_MMC_BRDRDY_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_BRDRDY_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_BRDRDY_MASKED      (SDMMC_NISTER_E_MMC_BRDRDY_MASKED_Val << SDMMC_NISTER_E_MMC_BRDRDY_Pos) /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_BRDRDY_ENABLED     (SDMMC_NISTER_E_MMC_BRDRDY_ENABLED_Val << SDMMC_NISTER_E_MMC_BRDRDY_Pos) /**< (SDMMC_NISTER) The BRDRDY status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_BOOTAR_Pos         _U_(14)                                              /**< (SDMMC_NISTER) Boot Acknowledge Received Status Enable Position */
#define SDMMC_NISTER_E_MMC_BOOTAR_Msk         (_U_(0x1) << SDMMC_NISTER_E_MMC_BOOTAR_Pos)          /**< (SDMMC_NISTER) Boot Acknowledge Received Status Enable Mask */
#define SDMMC_NISTER_E_MMC_BOOTAR(value)      (SDMMC_NISTER_E_MMC_BOOTAR_Msk & ((value) << SDMMC_NISTER_E_MMC_BOOTAR_Pos))
#define   SDMMC_NISTER_E_MMC_BOOTAR_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISTER) The BOOTAR status flag in SDMMC_NISTR is masked.  */
#define   SDMMC_NISTER_E_MMC_BOOTAR_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISTER) The BOOTAR status flag in SDMMC_NISTR is enabled.  */
#define SDMMC_NISTER_E_MMC_BOOTAR_MASKED      (SDMMC_NISTER_E_MMC_BOOTAR_MASKED_Val << SDMMC_NISTER_E_MMC_BOOTAR_Pos) /**< (SDMMC_NISTER) The BOOTAR status flag in SDMMC_NISTR is masked. Position  */
#define SDMMC_NISTER_E_MMC_BOOTAR_ENABLED     (SDMMC_NISTER_E_MMC_BOOTAR_ENABLED_Val << SDMMC_NISTER_E_MMC_BOOTAR_Pos) /**< (SDMMC_NISTER) The BOOTAR status flag in SDMMC_NISTR is enabled. Position  */
#define SDMMC_NISTER_E_MMC_Msk                _U_(0x403F)                                           /**< (SDMMC_NISTER_E_MMC) Register Mask  */


/* -------- SDMMC_EISTER : (SDMMC Offset: 0x36) (R/W 16) Error Interrupt Status Enable Register -------- */
#define SDMMC_EISTER_Msk                      _U_(0x0000)                                          /**< (SDMMC_EISTER) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_EISTER_SD_SDIO_CMDTEO_Pos       _U_(0)                                               /**< (SDMMC_EISTER) Command Timeout Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CMDTEO_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CMDTEO_Pos)        /**< (SDMMC_EISTER) Command Timeout Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CMDTEO(value)    (SDMMC_EISTER_SD_SDIO_CMDTEO_Msk & ((value) << SDMMC_EISTER_SD_SDIO_CMDTEO_Pos))
#define   SDMMC_EISTER_SD_SDIO_CMDTEO_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CMDTEO_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CMDTEO_MASKED    (SDMMC_EISTER_SD_SDIO_CMDTEO_MASKED_Val << SDMMC_EISTER_SD_SDIO_CMDTEO_Pos) /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDTEO_ENABLED   (SDMMC_EISTER_SD_SDIO_CMDTEO_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CMDTEO_Pos) /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDCRC_Pos       _U_(1)                                               /**< (SDMMC_EISTER) Command CRC Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CMDCRC_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CMDCRC_Pos)        /**< (SDMMC_EISTER) Command CRC Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CMDCRC(value)    (SDMMC_EISTER_SD_SDIO_CMDCRC_Msk & ((value) << SDMMC_EISTER_SD_SDIO_CMDCRC_Pos))
#define   SDMMC_EISTER_SD_SDIO_CMDCRC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CMDCRC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CMDCRC_MASKED    (SDMMC_EISTER_SD_SDIO_CMDCRC_MASKED_Val << SDMMC_EISTER_SD_SDIO_CMDCRC_Pos) /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDCRC_ENABLED   (SDMMC_EISTER_SD_SDIO_CMDCRC_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CMDCRC_Pos) /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDEND_Pos       _U_(2)                                               /**< (SDMMC_EISTER) Command End Bit Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CMDEND_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CMDEND_Pos)        /**< (SDMMC_EISTER) Command End Bit Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CMDEND(value)    (SDMMC_EISTER_SD_SDIO_CMDEND_Msk & ((value) << SDMMC_EISTER_SD_SDIO_CMDEND_Pos))
#define   SDMMC_EISTER_SD_SDIO_CMDEND_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CMDEND_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CMDEND_MASKED    (SDMMC_EISTER_SD_SDIO_CMDEND_MASKED_Val << SDMMC_EISTER_SD_SDIO_CMDEND_Pos) /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDEND_ENABLED   (SDMMC_EISTER_SD_SDIO_CMDEND_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CMDEND_Pos) /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDIDX_Pos       _U_(3)                                               /**< (SDMMC_EISTER) Command Index Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CMDIDX_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CMDIDX_Pos)        /**< (SDMMC_EISTER) Command Index Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CMDIDX(value)    (SDMMC_EISTER_SD_SDIO_CMDIDX_Msk & ((value) << SDMMC_EISTER_SD_SDIO_CMDIDX_Pos))
#define   SDMMC_EISTER_SD_SDIO_CMDIDX_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CMDIDX_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CMDIDX_MASKED    (SDMMC_EISTER_SD_SDIO_CMDIDX_MASKED_Val << SDMMC_EISTER_SD_SDIO_CMDIDX_Pos) /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CMDIDX_ENABLED   (SDMMC_EISTER_SD_SDIO_CMDIDX_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CMDIDX_Pos) /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_DATTEO_Pos       _U_(4)                                               /**< (SDMMC_EISTER) Data Timeout Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_DATTEO_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_DATTEO_Pos)        /**< (SDMMC_EISTER) Data Timeout Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_DATTEO(value)    (SDMMC_EISTER_SD_SDIO_DATTEO_Msk & ((value) << SDMMC_EISTER_SD_SDIO_DATTEO_Pos))
#define   SDMMC_EISTER_SD_SDIO_DATTEO_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_DATTEO_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_DATTEO_MASKED    (SDMMC_EISTER_SD_SDIO_DATTEO_MASKED_Val << SDMMC_EISTER_SD_SDIO_DATTEO_Pos) /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_DATTEO_ENABLED   (SDMMC_EISTER_SD_SDIO_DATTEO_ENABLED_Val << SDMMC_EISTER_SD_SDIO_DATTEO_Pos) /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_DATCRC_Pos       _U_(5)                                               /**< (SDMMC_EISTER) Data CRC Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_DATCRC_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_DATCRC_Pos)        /**< (SDMMC_EISTER) Data CRC Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_DATCRC(value)    (SDMMC_EISTER_SD_SDIO_DATCRC_Msk & ((value) << SDMMC_EISTER_SD_SDIO_DATCRC_Pos))
#define   SDMMC_EISTER_SD_SDIO_DATCRC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_DATCRC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_DATCRC_MASKED    (SDMMC_EISTER_SD_SDIO_DATCRC_MASKED_Val << SDMMC_EISTER_SD_SDIO_DATCRC_Pos) /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_DATCRC_ENABLED   (SDMMC_EISTER_SD_SDIO_DATCRC_ENABLED_Val << SDMMC_EISTER_SD_SDIO_DATCRC_Pos) /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_DATEND_Pos       _U_(6)                                               /**< (SDMMC_EISTER) Data End Bit Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_DATEND_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_DATEND_Pos)        /**< (SDMMC_EISTER) Data End Bit Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_DATEND(value)    (SDMMC_EISTER_SD_SDIO_DATEND_Msk & ((value) << SDMMC_EISTER_SD_SDIO_DATEND_Pos))
#define   SDMMC_EISTER_SD_SDIO_DATEND_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_DATEND_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_DATEND_MASKED    (SDMMC_EISTER_SD_SDIO_DATEND_MASKED_Val << SDMMC_EISTER_SD_SDIO_DATEND_Pos) /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_DATEND_ENABLED   (SDMMC_EISTER_SD_SDIO_DATEND_ENABLED_Val << SDMMC_EISTER_SD_SDIO_DATEND_Pos) /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_CURLIM_Pos       _U_(7)                                               /**< (SDMMC_EISTER) Current Limit Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_CURLIM_Msk       (_U_(0x1) << SDMMC_EISTER_SD_SDIO_CURLIM_Pos)        /**< (SDMMC_EISTER) Current Limit Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_CURLIM(value)    (SDMMC_EISTER_SD_SDIO_CURLIM_Msk & ((value) << SDMMC_EISTER_SD_SDIO_CURLIM_Pos))
#define   SDMMC_EISTER_SD_SDIO_CURLIM_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_CURLIM_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_CURLIM_MASKED    (SDMMC_EISTER_SD_SDIO_CURLIM_MASKED_Val << SDMMC_EISTER_SD_SDIO_CURLIM_Pos) /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_CURLIM_ENABLED   (SDMMC_EISTER_SD_SDIO_CURLIM_ENABLED_Val << SDMMC_EISTER_SD_SDIO_CURLIM_Pos) /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_ACMD_Pos         _U_(8)                                               /**< (SDMMC_EISTER) Auto CMD Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_ACMD_Msk         (_U_(0x1) << SDMMC_EISTER_SD_SDIO_ACMD_Pos)          /**< (SDMMC_EISTER) Auto CMD Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_ACMD(value)      (SDMMC_EISTER_SD_SDIO_ACMD_Msk & ((value) << SDMMC_EISTER_SD_SDIO_ACMD_Pos))
#define   SDMMC_EISTER_SD_SDIO_ACMD_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_ACMD_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_ACMD_MASKED      (SDMMC_EISTER_SD_SDIO_ACMD_MASKED_Val << SDMMC_EISTER_SD_SDIO_ACMD_Pos) /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_ACMD_ENABLED     (SDMMC_EISTER_SD_SDIO_ACMD_ENABLED_Val << SDMMC_EISTER_SD_SDIO_ACMD_Pos) /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_ADMA_Pos         _U_(9)                                               /**< (SDMMC_EISTER) ADMA Error Status Enable Position */
#define SDMMC_EISTER_SD_SDIO_ADMA_Msk         (_U_(0x1) << SDMMC_EISTER_SD_SDIO_ADMA_Pos)          /**< (SDMMC_EISTER) ADMA Error Status Enable Mask */
#define SDMMC_EISTER_SD_SDIO_ADMA(value)      (SDMMC_EISTER_SD_SDIO_ADMA_Msk & ((value) << SDMMC_EISTER_SD_SDIO_ADMA_Pos))
#define   SDMMC_EISTER_SD_SDIO_ADMA_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_SD_SDIO_ADMA_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_SD_SDIO_ADMA_MASKED      (SDMMC_EISTER_SD_SDIO_ADMA_MASKED_Val << SDMMC_EISTER_SD_SDIO_ADMA_Pos) /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_SD_SDIO_ADMA_ENABLED     (SDMMC_EISTER_SD_SDIO_ADMA_ENABLED_Val << SDMMC_EISTER_SD_SDIO_ADMA_Pos) /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_SD_SDIO_Msk              _U_(0x03FF)                                           /**< (SDMMC_EISTER_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_EISTER_E_MMC_CMDTEO_Pos         _U_(0)                                               /**< (SDMMC_EISTER) Command Timeout Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CMDTEO_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_CMDTEO_Pos)          /**< (SDMMC_EISTER) Command Timeout Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CMDTEO(value)      (SDMMC_EISTER_E_MMC_CMDTEO_Msk & ((value) << SDMMC_EISTER_E_MMC_CMDTEO_Pos))
#define   SDMMC_EISTER_E_MMC_CMDTEO_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CMDTEO_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CMDTEO_MASKED      (SDMMC_EISTER_E_MMC_CMDTEO_MASKED_Val << SDMMC_EISTER_E_MMC_CMDTEO_Pos) /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CMDTEO_ENABLED     (SDMMC_EISTER_E_MMC_CMDTEO_ENABLED_Val << SDMMC_EISTER_E_MMC_CMDTEO_Pos) /**< (SDMMC_EISTER) The CMDTEO status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_CMDCRC_Pos         _U_(1)                                               /**< (SDMMC_EISTER) Command CRC Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CMDCRC_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_CMDCRC_Pos)          /**< (SDMMC_EISTER) Command CRC Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CMDCRC(value)      (SDMMC_EISTER_E_MMC_CMDCRC_Msk & ((value) << SDMMC_EISTER_E_MMC_CMDCRC_Pos))
#define   SDMMC_EISTER_E_MMC_CMDCRC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CMDCRC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CMDCRC_MASKED      (SDMMC_EISTER_E_MMC_CMDCRC_MASKED_Val << SDMMC_EISTER_E_MMC_CMDCRC_Pos) /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CMDCRC_ENABLED     (SDMMC_EISTER_E_MMC_CMDCRC_ENABLED_Val << SDMMC_EISTER_E_MMC_CMDCRC_Pos) /**< (SDMMC_EISTER) The CMDCRC status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_CMDEND_Pos         _U_(2)                                               /**< (SDMMC_EISTER) Command End Bit Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CMDEND_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_CMDEND_Pos)          /**< (SDMMC_EISTER) Command End Bit Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CMDEND(value)      (SDMMC_EISTER_E_MMC_CMDEND_Msk & ((value) << SDMMC_EISTER_E_MMC_CMDEND_Pos))
#define   SDMMC_EISTER_E_MMC_CMDEND_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CMDEND_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CMDEND_MASKED      (SDMMC_EISTER_E_MMC_CMDEND_MASKED_Val << SDMMC_EISTER_E_MMC_CMDEND_Pos) /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CMDEND_ENABLED     (SDMMC_EISTER_E_MMC_CMDEND_ENABLED_Val << SDMMC_EISTER_E_MMC_CMDEND_Pos) /**< (SDMMC_EISTER) The CMDEND status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_CMDIDX_Pos         _U_(3)                                               /**< (SDMMC_EISTER) Command Index Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CMDIDX_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_CMDIDX_Pos)          /**< (SDMMC_EISTER) Command Index Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CMDIDX(value)      (SDMMC_EISTER_E_MMC_CMDIDX_Msk & ((value) << SDMMC_EISTER_E_MMC_CMDIDX_Pos))
#define   SDMMC_EISTER_E_MMC_CMDIDX_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CMDIDX_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CMDIDX_MASKED      (SDMMC_EISTER_E_MMC_CMDIDX_MASKED_Val << SDMMC_EISTER_E_MMC_CMDIDX_Pos) /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CMDIDX_ENABLED     (SDMMC_EISTER_E_MMC_CMDIDX_ENABLED_Val << SDMMC_EISTER_E_MMC_CMDIDX_Pos) /**< (SDMMC_EISTER) The CMDIDX status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_DATTEO_Pos         _U_(4)                                               /**< (SDMMC_EISTER) Data Timeout Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_DATTEO_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_DATTEO_Pos)          /**< (SDMMC_EISTER) Data Timeout Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_DATTEO(value)      (SDMMC_EISTER_E_MMC_DATTEO_Msk & ((value) << SDMMC_EISTER_E_MMC_DATTEO_Pos))
#define   SDMMC_EISTER_E_MMC_DATTEO_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_DATTEO_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_DATTEO_MASKED      (SDMMC_EISTER_E_MMC_DATTEO_MASKED_Val << SDMMC_EISTER_E_MMC_DATTEO_Pos) /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_DATTEO_ENABLED     (SDMMC_EISTER_E_MMC_DATTEO_ENABLED_Val << SDMMC_EISTER_E_MMC_DATTEO_Pos) /**< (SDMMC_EISTER) The DATTEO status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_DATCRC_Pos         _U_(5)                                               /**< (SDMMC_EISTER) Data CRC Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_DATCRC_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_DATCRC_Pos)          /**< (SDMMC_EISTER) Data CRC Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_DATCRC(value)      (SDMMC_EISTER_E_MMC_DATCRC_Msk & ((value) << SDMMC_EISTER_E_MMC_DATCRC_Pos))
#define   SDMMC_EISTER_E_MMC_DATCRC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_DATCRC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_DATCRC_MASKED      (SDMMC_EISTER_E_MMC_DATCRC_MASKED_Val << SDMMC_EISTER_E_MMC_DATCRC_Pos) /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_DATCRC_ENABLED     (SDMMC_EISTER_E_MMC_DATCRC_ENABLED_Val << SDMMC_EISTER_E_MMC_DATCRC_Pos) /**< (SDMMC_EISTER) The DATCRC status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_DATEND_Pos         _U_(6)                                               /**< (SDMMC_EISTER) Data End Bit Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_DATEND_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_DATEND_Pos)          /**< (SDMMC_EISTER) Data End Bit Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_DATEND(value)      (SDMMC_EISTER_E_MMC_DATEND_Msk & ((value) << SDMMC_EISTER_E_MMC_DATEND_Pos))
#define   SDMMC_EISTER_E_MMC_DATEND_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_DATEND_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_DATEND_MASKED      (SDMMC_EISTER_E_MMC_DATEND_MASKED_Val << SDMMC_EISTER_E_MMC_DATEND_Pos) /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_DATEND_ENABLED     (SDMMC_EISTER_E_MMC_DATEND_ENABLED_Val << SDMMC_EISTER_E_MMC_DATEND_Pos) /**< (SDMMC_EISTER) The DATEND status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_CURLIM_Pos         _U_(7)                                               /**< (SDMMC_EISTER) Current Limit Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_CURLIM_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_CURLIM_Pos)          /**< (SDMMC_EISTER) Current Limit Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_CURLIM(value)      (SDMMC_EISTER_E_MMC_CURLIM_Msk & ((value) << SDMMC_EISTER_E_MMC_CURLIM_Pos))
#define   SDMMC_EISTER_E_MMC_CURLIM_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_CURLIM_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_CURLIM_MASKED      (SDMMC_EISTER_E_MMC_CURLIM_MASKED_Val << SDMMC_EISTER_E_MMC_CURLIM_Pos) /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_CURLIM_ENABLED     (SDMMC_EISTER_E_MMC_CURLIM_ENABLED_Val << SDMMC_EISTER_E_MMC_CURLIM_Pos) /**< (SDMMC_EISTER) The CURLIM status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_ACMD_Pos           _U_(8)                                               /**< (SDMMC_EISTER) Auto CMD Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_ACMD_Msk           (_U_(0x1) << SDMMC_EISTER_E_MMC_ACMD_Pos)            /**< (SDMMC_EISTER) Auto CMD Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_ACMD(value)        (SDMMC_EISTER_E_MMC_ACMD_Msk & ((value) << SDMMC_EISTER_E_MMC_ACMD_Pos))
#define   SDMMC_EISTER_E_MMC_ACMD_MASKED_Val  _U_(0x0)                                             /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_ACMD_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_ACMD_MASKED        (SDMMC_EISTER_E_MMC_ACMD_MASKED_Val << SDMMC_EISTER_E_MMC_ACMD_Pos) /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_ACMD_ENABLED       (SDMMC_EISTER_E_MMC_ACMD_ENABLED_Val << SDMMC_EISTER_E_MMC_ACMD_Pos) /**< (SDMMC_EISTER) The ACMD status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_ADMA_Pos           _U_(9)                                               /**< (SDMMC_EISTER) ADMA Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_ADMA_Msk           (_U_(0x1) << SDMMC_EISTER_E_MMC_ADMA_Pos)            /**< (SDMMC_EISTER) ADMA Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_ADMA(value)        (SDMMC_EISTER_E_MMC_ADMA_Msk & ((value) << SDMMC_EISTER_E_MMC_ADMA_Pos))
#define   SDMMC_EISTER_E_MMC_ADMA_MASKED_Val  _U_(0x0)                                             /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_ADMA_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_ADMA_MASKED        (SDMMC_EISTER_E_MMC_ADMA_MASKED_Val << SDMMC_EISTER_E_MMC_ADMA_Pos) /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_ADMA_ENABLED       (SDMMC_EISTER_E_MMC_ADMA_ENABLED_Val << SDMMC_EISTER_E_MMC_ADMA_Pos) /**< (SDMMC_EISTER) The ADMA status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_BOOTAE_Pos         _U_(12)                                              /**< (SDMMC_EISTER) Boot Acknowledge Error Status Enable Position */
#define SDMMC_EISTER_E_MMC_BOOTAE_Msk         (_U_(0x1) << SDMMC_EISTER_E_MMC_BOOTAE_Pos)          /**< (SDMMC_EISTER) Boot Acknowledge Error Status Enable Mask */
#define SDMMC_EISTER_E_MMC_BOOTAE(value)      (SDMMC_EISTER_E_MMC_BOOTAE_Msk & ((value) << SDMMC_EISTER_E_MMC_BOOTAE_Pos))
#define   SDMMC_EISTER_E_MMC_BOOTAE_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISTER) The BOOTAE status flag in SDMMC_EISTR is masked.  */
#define   SDMMC_EISTER_E_MMC_BOOTAE_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISTER) The BOOTAE status flag in SDMMC_EISTR is enabled.  */
#define SDMMC_EISTER_E_MMC_BOOTAE_MASKED      (SDMMC_EISTER_E_MMC_BOOTAE_MASKED_Val << SDMMC_EISTER_E_MMC_BOOTAE_Pos) /**< (SDMMC_EISTER) The BOOTAE status flag in SDMMC_EISTR is masked. Position  */
#define SDMMC_EISTER_E_MMC_BOOTAE_ENABLED     (SDMMC_EISTER_E_MMC_BOOTAE_ENABLED_Val << SDMMC_EISTER_E_MMC_BOOTAE_Pos) /**< (SDMMC_EISTER) The BOOTAE status flag in SDMMC_EISTR is enabled. Position  */
#define SDMMC_EISTER_E_MMC_Msk                _U_(0x13FF)                                           /**< (SDMMC_EISTER_E_MMC) Register Mask  */


/* -------- SDMMC_NISIER : (SDMMC Offset: 0x38) (R/W 16) Normal Interrupt Signal Enable Register -------- */
#define SDMMC_NISIER_Msk                      _U_(0x0000)                                          /**< (SDMMC_NISIER) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_NISIER_SD_SDIO_CMDC_Pos         _U_(0)                                               /**< (SDMMC_NISIER) Command Complete Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_CMDC_Msk         (_U_(0x1) << SDMMC_NISIER_SD_SDIO_CMDC_Pos)          /**< (SDMMC_NISIER) Command Complete Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_CMDC(value)      (SDMMC_NISIER_SD_SDIO_CMDC_Msk & ((value) << SDMMC_NISIER_SD_SDIO_CMDC_Pos))
#define   SDMMC_NISIER_SD_SDIO_CMDC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the CMDC status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_CMDC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the CMDC status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_CMDC_MASKED      (SDMMC_NISIER_SD_SDIO_CMDC_MASKED_Val << SDMMC_NISIER_SD_SDIO_CMDC_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the CMDC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CMDC_ENABLED     (SDMMC_NISIER_SD_SDIO_CMDC_ENABLED_Val << SDMMC_NISIER_SD_SDIO_CMDC_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the CMDC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_TRFC_Pos         _U_(1)                                               /**< (SDMMC_NISIER) Transfer Complete Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_TRFC_Msk         (_U_(0x1) << SDMMC_NISIER_SD_SDIO_TRFC_Pos)          /**< (SDMMC_NISIER) Transfer Complete Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_TRFC(value)      (SDMMC_NISIER_SD_SDIO_TRFC_Msk & ((value) << SDMMC_NISIER_SD_SDIO_TRFC_Pos))
#define   SDMMC_NISIER_SD_SDIO_TRFC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the TRFC status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_TRFC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the TRFC status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_TRFC_MASKED      (SDMMC_NISIER_SD_SDIO_TRFC_MASKED_Val << SDMMC_NISIER_SD_SDIO_TRFC_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the TRFC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_TRFC_ENABLED     (SDMMC_NISIER_SD_SDIO_TRFC_ENABLED_Val << SDMMC_NISIER_SD_SDIO_TRFC_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the TRFC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BLKGE_Pos        _U_(2)                                               /**< (SDMMC_NISIER) Block Gap Event Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_BLKGE_Msk        (_U_(0x1) << SDMMC_NISIER_SD_SDIO_BLKGE_Pos)         /**< (SDMMC_NISIER) Block Gap Event Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_BLKGE(value)     (SDMMC_NISIER_SD_SDIO_BLKGE_Msk & ((value) << SDMMC_NISIER_SD_SDIO_BLKGE_Pos))
#define   SDMMC_NISIER_SD_SDIO_BLKGE_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the BLKGE status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_BLKGE_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the BLKGE status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_BLKGE_MASKED     (SDMMC_NISIER_SD_SDIO_BLKGE_MASKED_Val << SDMMC_NISIER_SD_SDIO_BLKGE_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the BLKGE status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BLKGE_ENABLED    (SDMMC_NISIER_SD_SDIO_BLKGE_ENABLED_Val << SDMMC_NISIER_SD_SDIO_BLKGE_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the BLKGE status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_DMAINT_Pos       _U_(3)                                               /**< (SDMMC_NISIER) DMA Interrupt Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_DMAINT_Msk       (_U_(0x1) << SDMMC_NISIER_SD_SDIO_DMAINT_Pos)        /**< (SDMMC_NISIER) DMA Interrupt Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_DMAINT(value)    (SDMMC_NISIER_SD_SDIO_DMAINT_Msk & ((value) << SDMMC_NISIER_SD_SDIO_DMAINT_Pos))
#define   SDMMC_NISIER_SD_SDIO_DMAINT_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the DMAINT status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_DMAINT_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the DMAINT status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_DMAINT_MASKED    (SDMMC_NISIER_SD_SDIO_DMAINT_MASKED_Val << SDMMC_NISIER_SD_SDIO_DMAINT_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the DMAINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_DMAINT_ENABLED   (SDMMC_NISIER_SD_SDIO_DMAINT_ENABLED_Val << SDMMC_NISIER_SD_SDIO_DMAINT_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the DMAINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BWRRDY_Pos       _U_(4)                                               /**< (SDMMC_NISIER) Buffer Write Ready Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_BWRRDY_Msk       (_U_(0x1) << SDMMC_NISIER_SD_SDIO_BWRRDY_Pos)        /**< (SDMMC_NISIER) Buffer Write Ready Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_BWRRDY(value)    (SDMMC_NISIER_SD_SDIO_BWRRDY_Msk & ((value) << SDMMC_NISIER_SD_SDIO_BWRRDY_Pos))
#define   SDMMC_NISIER_SD_SDIO_BWRRDY_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the BWRRDY status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_BWRRDY_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the BWRRDY status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_BWRRDY_MASKED    (SDMMC_NISIER_SD_SDIO_BWRRDY_MASKED_Val << SDMMC_NISIER_SD_SDIO_BWRRDY_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the BWRRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BWRRDY_ENABLED   (SDMMC_NISIER_SD_SDIO_BWRRDY_ENABLED_Val << SDMMC_NISIER_SD_SDIO_BWRRDY_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the BWRRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BRDRDY_Pos       _U_(5)                                               /**< (SDMMC_NISIER) Buffer Read Ready Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_BRDRDY_Msk       (_U_(0x1) << SDMMC_NISIER_SD_SDIO_BRDRDY_Pos)        /**< (SDMMC_NISIER) Buffer Read Ready Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_BRDRDY(value)    (SDMMC_NISIER_SD_SDIO_BRDRDY_Msk & ((value) << SDMMC_NISIER_SD_SDIO_BRDRDY_Pos))
#define   SDMMC_NISIER_SD_SDIO_BRDRDY_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the BRDRDY status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_BRDRDY_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the BRDRDY status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_BRDRDY_MASKED    (SDMMC_NISIER_SD_SDIO_BRDRDY_MASKED_Val << SDMMC_NISIER_SD_SDIO_BRDRDY_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the BRDRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_BRDRDY_ENABLED   (SDMMC_NISIER_SD_SDIO_BRDRDY_ENABLED_Val << SDMMC_NISIER_SD_SDIO_BRDRDY_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the BRDRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CINS_Pos         _U_(6)                                               /**< (SDMMC_NISIER) Card Insertion Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_CINS_Msk         (_U_(0x1) << SDMMC_NISIER_SD_SDIO_CINS_Pos)          /**< (SDMMC_NISIER) Card Insertion Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_CINS(value)      (SDMMC_NISIER_SD_SDIO_CINS_Msk & ((value) << SDMMC_NISIER_SD_SDIO_CINS_Pos))
#define   SDMMC_NISIER_SD_SDIO_CINS_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the CINS status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_CINS_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the CINS status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_CINS_MASKED      (SDMMC_NISIER_SD_SDIO_CINS_MASKED_Val << SDMMC_NISIER_SD_SDIO_CINS_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the CINS status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CINS_ENABLED     (SDMMC_NISIER_SD_SDIO_CINS_ENABLED_Val << SDMMC_NISIER_SD_SDIO_CINS_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the CINS status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CREM_Pos         _U_(7)                                               /**< (SDMMC_NISIER) Card Removal Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_CREM_Msk         (_U_(0x1) << SDMMC_NISIER_SD_SDIO_CREM_Pos)          /**< (SDMMC_NISIER) Card Removal Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_CREM(value)      (SDMMC_NISIER_SD_SDIO_CREM_Msk & ((value) << SDMMC_NISIER_SD_SDIO_CREM_Pos))
#define   SDMMC_NISIER_SD_SDIO_CREM_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the CREM status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_CREM_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the CREM status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_CREM_MASKED      (SDMMC_NISIER_SD_SDIO_CREM_MASKED_Val << SDMMC_NISIER_SD_SDIO_CREM_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the CREM status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CREM_ENABLED     (SDMMC_NISIER_SD_SDIO_CREM_ENABLED_Val << SDMMC_NISIER_SD_SDIO_CREM_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the CREM status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CINT_Pos         _U_(8)                                               /**< (SDMMC_NISIER) Card Interrupt Signal Enable Position */
#define SDMMC_NISIER_SD_SDIO_CINT_Msk         (_U_(0x1) << SDMMC_NISIER_SD_SDIO_CINT_Pos)          /**< (SDMMC_NISIER) Card Interrupt Signal Enable Mask */
#define SDMMC_NISIER_SD_SDIO_CINT(value)      (SDMMC_NISIER_SD_SDIO_CINT_Msk & ((value) << SDMMC_NISIER_SD_SDIO_CINT_Pos))
#define   SDMMC_NISIER_SD_SDIO_CINT_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the CINT status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_SD_SDIO_CINT_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the CINT status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_SD_SDIO_CINT_MASKED      (SDMMC_NISIER_SD_SDIO_CINT_MASKED_Val << SDMMC_NISIER_SD_SDIO_CINT_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the CINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_CINT_ENABLED     (SDMMC_NISIER_SD_SDIO_CINT_ENABLED_Val << SDMMC_NISIER_SD_SDIO_CINT_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the CINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_SD_SDIO_Msk              _U_(0x01FF)                                           /**< (SDMMC_NISIER_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_NISIER_E_MMC_CMDC_Pos           _U_(0)                                               /**< (SDMMC_NISIER) Command Complete Signal Enable Position */
#define SDMMC_NISIER_E_MMC_CMDC_Msk           (_U_(0x1) << SDMMC_NISIER_E_MMC_CMDC_Pos)            /**< (SDMMC_NISIER) Command Complete Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_CMDC(value)        (SDMMC_NISIER_E_MMC_CMDC_Msk & ((value) << SDMMC_NISIER_E_MMC_CMDC_Pos))
#define   SDMMC_NISIER_E_MMC_CMDC_MASKED_Val  _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the CMDC status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_CMDC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the CMDC status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_CMDC_MASKED        (SDMMC_NISIER_E_MMC_CMDC_MASKED_Val << SDMMC_NISIER_E_MMC_CMDC_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the CMDC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_CMDC_ENABLED       (SDMMC_NISIER_E_MMC_CMDC_ENABLED_Val << SDMMC_NISIER_E_MMC_CMDC_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the CMDC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_TRFC_Pos           _U_(1)                                               /**< (SDMMC_NISIER) Transfer Complete Signal Enable Position */
#define SDMMC_NISIER_E_MMC_TRFC_Msk           (_U_(0x1) << SDMMC_NISIER_E_MMC_TRFC_Pos)            /**< (SDMMC_NISIER) Transfer Complete Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_TRFC(value)        (SDMMC_NISIER_E_MMC_TRFC_Msk & ((value) << SDMMC_NISIER_E_MMC_TRFC_Pos))
#define   SDMMC_NISIER_E_MMC_TRFC_MASKED_Val  _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the TRFC status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_TRFC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the TRFC status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_TRFC_MASKED        (SDMMC_NISIER_E_MMC_TRFC_MASKED_Val << SDMMC_NISIER_E_MMC_TRFC_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the TRFC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_TRFC_ENABLED       (SDMMC_NISIER_E_MMC_TRFC_ENABLED_Val << SDMMC_NISIER_E_MMC_TRFC_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the TRFC status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BLKGE_Pos          _U_(2)                                               /**< (SDMMC_NISIER) Block Gap Event Signal Enable Position */
#define SDMMC_NISIER_E_MMC_BLKGE_Msk          (_U_(0x1) << SDMMC_NISIER_E_MMC_BLKGE_Pos)           /**< (SDMMC_NISIER) Block Gap Event Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_BLKGE(value)       (SDMMC_NISIER_E_MMC_BLKGE_Msk & ((value) << SDMMC_NISIER_E_MMC_BLKGE_Pos))
#define   SDMMC_NISIER_E_MMC_BLKGE_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the BLKGE status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_BLKGE_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the BLKGE status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_BLKGE_MASKED       (SDMMC_NISIER_E_MMC_BLKGE_MASKED_Val << SDMMC_NISIER_E_MMC_BLKGE_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the BLKGE status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BLKGE_ENABLED      (SDMMC_NISIER_E_MMC_BLKGE_ENABLED_Val << SDMMC_NISIER_E_MMC_BLKGE_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the BLKGE status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_DMAINT_Pos         _U_(3)                                               /**< (SDMMC_NISIER) DMA Interrupt Signal Enable Position */
#define SDMMC_NISIER_E_MMC_DMAINT_Msk         (_U_(0x1) << SDMMC_NISIER_E_MMC_DMAINT_Pos)          /**< (SDMMC_NISIER) DMA Interrupt Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_DMAINT(value)      (SDMMC_NISIER_E_MMC_DMAINT_Msk & ((value) << SDMMC_NISIER_E_MMC_DMAINT_Pos))
#define   SDMMC_NISIER_E_MMC_DMAINT_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the DMAINT status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_DMAINT_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the DMAINT status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_DMAINT_MASKED      (SDMMC_NISIER_E_MMC_DMAINT_MASKED_Val << SDMMC_NISIER_E_MMC_DMAINT_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the DMAINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_DMAINT_ENABLED     (SDMMC_NISIER_E_MMC_DMAINT_ENABLED_Val << SDMMC_NISIER_E_MMC_DMAINT_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the DMAINT status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BWRRDY_Pos         _U_(4)                                               /**< (SDMMC_NISIER) Buffer Write Ready Signal Enable Position */
#define SDMMC_NISIER_E_MMC_BWRRDY_Msk         (_U_(0x1) << SDMMC_NISIER_E_MMC_BWRRDY_Pos)          /**< (SDMMC_NISIER) Buffer Write Ready Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_BWRRDY(value)      (SDMMC_NISIER_E_MMC_BWRRDY_Msk & ((value) << SDMMC_NISIER_E_MMC_BWRRDY_Pos))
#define   SDMMC_NISIER_E_MMC_BWRRDY_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the BWRRDY status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_BWRRDY_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the BWRRDY status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_BWRRDY_MASKED      (SDMMC_NISIER_E_MMC_BWRRDY_MASKED_Val << SDMMC_NISIER_E_MMC_BWRRDY_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the BWRRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BWRRDY_ENABLED     (SDMMC_NISIER_E_MMC_BWRRDY_ENABLED_Val << SDMMC_NISIER_E_MMC_BWRRDY_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the BWRRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BRDRDY_Pos         _U_(5)                                               /**< (SDMMC_NISIER) Buffer Read Ready Signal Enable Position */
#define SDMMC_NISIER_E_MMC_BRDRDY_Msk         (_U_(0x1) << SDMMC_NISIER_E_MMC_BRDRDY_Pos)          /**< (SDMMC_NISIER) Buffer Read Ready Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_BRDRDY(value)      (SDMMC_NISIER_E_MMC_BRDRDY_Msk & ((value) << SDMMC_NISIER_E_MMC_BRDRDY_Pos))
#define   SDMMC_NISIER_E_MMC_BRDRDY_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the BRDRDY status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_BRDRDY_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the BRDRDY status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_BRDRDY_MASKED      (SDMMC_NISIER_E_MMC_BRDRDY_MASKED_Val << SDMMC_NISIER_E_MMC_BRDRDY_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the BRDRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BRDRDY_ENABLED     (SDMMC_NISIER_E_MMC_BRDRDY_ENABLED_Val << SDMMC_NISIER_E_MMC_BRDRDY_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the BRDRDY status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BOOTAR_Pos         _U_(14)                                              /**< (SDMMC_NISIER) Boot Acknowledge Received Signal Enable Position */
#define SDMMC_NISIER_E_MMC_BOOTAR_Msk         (_U_(0x1) << SDMMC_NISIER_E_MMC_BOOTAR_Pos)          /**< (SDMMC_NISIER) Boot Acknowledge Received Signal Enable Mask */
#define SDMMC_NISIER_E_MMC_BOOTAR(value)      (SDMMC_NISIER_E_MMC_BOOTAR_Msk & ((value) << SDMMC_NISIER_E_MMC_BOOTAR_Pos))
#define   SDMMC_NISIER_E_MMC_BOOTAR_MASKED_Val _U_(0x0)                                             /**< (SDMMC_NISIER) No interrupt is generated when the BOOTAR status rises in SDMMC_NISTR.  */
#define   SDMMC_NISIER_E_MMC_BOOTAR_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_NISIER) An interrupt is generated when the BOOTAR status rises in SDMMC_NISTR.  */
#define SDMMC_NISIER_E_MMC_BOOTAR_MASKED      (SDMMC_NISIER_E_MMC_BOOTAR_MASKED_Val << SDMMC_NISIER_E_MMC_BOOTAR_Pos) /**< (SDMMC_NISIER) No interrupt is generated when the BOOTAR status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_BOOTAR_ENABLED     (SDMMC_NISIER_E_MMC_BOOTAR_ENABLED_Val << SDMMC_NISIER_E_MMC_BOOTAR_Pos) /**< (SDMMC_NISIER) An interrupt is generated when the BOOTAR status rises in SDMMC_NISTR. Position  */
#define SDMMC_NISIER_E_MMC_Msk                _U_(0x403F)                                           /**< (SDMMC_NISIER_E_MMC) Register Mask  */


/* -------- SDMMC_EISIER : (SDMMC Offset: 0x3A) (R/W 16) Error Interrupt Signal Enable Register -------- */
#define SDMMC_EISIER_Msk                      _U_(0x0000)                                          /**< (SDMMC_EISIER) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_EISIER_SD_SDIO_CMDTEO_Pos       _U_(0)                                               /**< (SDMMC_EISIER) Command Timeout Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CMDTEO_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CMDTEO_Pos)        /**< (SDMMC_EISIER) Command Timeout Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CMDTEO(value)    (SDMMC_EISIER_SD_SDIO_CMDTEO_Msk & ((value) << SDMMC_EISIER_SD_SDIO_CMDTEO_Pos))
#define   SDMMC_EISIER_SD_SDIO_CMDTEO_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CMDTEO status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CMDTEO_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CMDTEO status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CMDTEO_MASKED    (SDMMC_EISIER_SD_SDIO_CMDTEO_MASKED_Val << SDMMC_EISIER_SD_SDIO_CMDTEO_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CMDTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDTEO_ENABLED   (SDMMC_EISIER_SD_SDIO_CMDTEO_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CMDTEO_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CMDTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDCRC_Pos       _U_(1)                                               /**< (SDMMC_EISIER) Command CRC Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CMDCRC_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CMDCRC_Pos)        /**< (SDMMC_EISIER) Command CRC Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CMDCRC(value)    (SDMMC_EISIER_SD_SDIO_CMDCRC_Msk & ((value) << SDMMC_EISIER_SD_SDIO_CMDCRC_Pos))
#define   SDMMC_EISIER_SD_SDIO_CMDCRC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CDMCRC status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CMDCRC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CMDCRC status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CMDCRC_MASKED    (SDMMC_EISIER_SD_SDIO_CMDCRC_MASKED_Val << SDMMC_EISIER_SD_SDIO_CMDCRC_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CDMCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDCRC_ENABLED   (SDMMC_EISIER_SD_SDIO_CMDCRC_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CMDCRC_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CMDCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDEND_Pos       _U_(2)                                               /**< (SDMMC_EISIER) Command End Bit Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CMDEND_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CMDEND_Pos)        /**< (SDMMC_EISIER) Command End Bit Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CMDEND(value)    (SDMMC_EISIER_SD_SDIO_CMDEND_Msk & ((value) << SDMMC_EISIER_SD_SDIO_CMDEND_Pos))
#define   SDMMC_EISIER_SD_SDIO_CMDEND_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CMDEND status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CMDEND_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CMDEND status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CMDEND_MASKED    (SDMMC_EISIER_SD_SDIO_CMDEND_MASKED_Val << SDMMC_EISIER_SD_SDIO_CMDEND_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CMDEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDEND_ENABLED   (SDMMC_EISIER_SD_SDIO_CMDEND_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CMDEND_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CMDEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDIDX_Pos       _U_(3)                                               /**< (SDMMC_EISIER) Command Index Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CMDIDX_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CMDIDX_Pos)        /**< (SDMMC_EISIER) Command Index Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CMDIDX(value)    (SDMMC_EISIER_SD_SDIO_CMDIDX_Msk & ((value) << SDMMC_EISIER_SD_SDIO_CMDIDX_Pos))
#define   SDMMC_EISIER_SD_SDIO_CMDIDX_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CMDIDX status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CMDIDX_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CMDIDX status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CMDIDX_MASKED    (SDMMC_EISIER_SD_SDIO_CMDIDX_MASKED_Val << SDMMC_EISIER_SD_SDIO_CMDIDX_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CMDIDX status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CMDIDX_ENABLED   (SDMMC_EISIER_SD_SDIO_CMDIDX_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CMDIDX_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CMDIDX status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATTEO_Pos       _U_(4)                                               /**< (SDMMC_EISIER) Data Timeout Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_DATTEO_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_DATTEO_Pos)        /**< (SDMMC_EISIER) Data Timeout Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_DATTEO(value)    (SDMMC_EISIER_SD_SDIO_DATTEO_Msk & ((value) << SDMMC_EISIER_SD_SDIO_DATTEO_Pos))
#define   SDMMC_EISIER_SD_SDIO_DATTEO_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the DATTEO status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_DATTEO_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the DATTEO status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_DATTEO_MASKED    (SDMMC_EISIER_SD_SDIO_DATTEO_MASKED_Val << SDMMC_EISIER_SD_SDIO_DATTEO_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the DATTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATTEO_ENABLED   (SDMMC_EISIER_SD_SDIO_DATTEO_ENABLED_Val << SDMMC_EISIER_SD_SDIO_DATTEO_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the DATTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATCRC_Pos       _U_(5)                                               /**< (SDMMC_EISIER) Data CRC Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_DATCRC_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_DATCRC_Pos)        /**< (SDMMC_EISIER) Data CRC Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_DATCRC(value)    (SDMMC_EISIER_SD_SDIO_DATCRC_Msk & ((value) << SDMMC_EISIER_SD_SDIO_DATCRC_Pos))
#define   SDMMC_EISIER_SD_SDIO_DATCRC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the DATCRC status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_DATCRC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the DATCRC status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_DATCRC_MASKED    (SDMMC_EISIER_SD_SDIO_DATCRC_MASKED_Val << SDMMC_EISIER_SD_SDIO_DATCRC_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the DATCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATCRC_ENABLED   (SDMMC_EISIER_SD_SDIO_DATCRC_ENABLED_Val << SDMMC_EISIER_SD_SDIO_DATCRC_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the DATCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATEND_Pos       _U_(6)                                               /**< (SDMMC_EISIER) Data End Bit Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_DATEND_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_DATEND_Pos)        /**< (SDMMC_EISIER) Data End Bit Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_DATEND(value)    (SDMMC_EISIER_SD_SDIO_DATEND_Msk & ((value) << SDMMC_EISIER_SD_SDIO_DATEND_Pos))
#define   SDMMC_EISIER_SD_SDIO_DATEND_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the DATEND status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_DATEND_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the DATEND status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_DATEND_MASKED    (SDMMC_EISIER_SD_SDIO_DATEND_MASKED_Val << SDMMC_EISIER_SD_SDIO_DATEND_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the DATEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_DATEND_ENABLED   (SDMMC_EISIER_SD_SDIO_DATEND_ENABLED_Val << SDMMC_EISIER_SD_SDIO_DATEND_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the DATEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CURLIM_Pos       _U_(7)                                               /**< (SDMMC_EISIER) Current Limit Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_CURLIM_Msk       (_U_(0x1) << SDMMC_EISIER_SD_SDIO_CURLIM_Pos)        /**< (SDMMC_EISIER) Current Limit Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_CURLIM(value)    (SDMMC_EISIER_SD_SDIO_CURLIM_Msk & ((value) << SDMMC_EISIER_SD_SDIO_CURLIM_Pos))
#define   SDMMC_EISIER_SD_SDIO_CURLIM_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CURLIM status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_CURLIM_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CURLIM status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_CURLIM_MASKED    (SDMMC_EISIER_SD_SDIO_CURLIM_MASKED_Val << SDMMC_EISIER_SD_SDIO_CURLIM_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CURLIM status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_CURLIM_ENABLED   (SDMMC_EISIER_SD_SDIO_CURLIM_ENABLED_Val << SDMMC_EISIER_SD_SDIO_CURLIM_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CURLIM status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_ACMD_Pos         _U_(8)                                               /**< (SDMMC_EISIER) Auto CMD Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_ACMD_Msk         (_U_(0x1) << SDMMC_EISIER_SD_SDIO_ACMD_Pos)          /**< (SDMMC_EISIER) Auto CMD Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_ACMD(value)      (SDMMC_EISIER_SD_SDIO_ACMD_Msk & ((value) << SDMMC_EISIER_SD_SDIO_ACMD_Pos))
#define   SDMMC_EISIER_SD_SDIO_ACMD_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the ACMD status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_ACMD_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the ACMD status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_ACMD_MASKED      (SDMMC_EISIER_SD_SDIO_ACMD_MASKED_Val << SDMMC_EISIER_SD_SDIO_ACMD_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the ACMD status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_ACMD_ENABLED     (SDMMC_EISIER_SD_SDIO_ACMD_ENABLED_Val << SDMMC_EISIER_SD_SDIO_ACMD_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the ACMD status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_ADMA_Pos         _U_(9)                                               /**< (SDMMC_EISIER) ADMA Error Signal Enable Position */
#define SDMMC_EISIER_SD_SDIO_ADMA_Msk         (_U_(0x1) << SDMMC_EISIER_SD_SDIO_ADMA_Pos)          /**< (SDMMC_EISIER) ADMA Error Signal Enable Mask */
#define SDMMC_EISIER_SD_SDIO_ADMA(value)      (SDMMC_EISIER_SD_SDIO_ADMA_Msk & ((value) << SDMMC_EISIER_SD_SDIO_ADMA_Pos))
#define   SDMMC_EISIER_SD_SDIO_ADMA_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the ADMA status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_SD_SDIO_ADMA_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the ADMA status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_SD_SDIO_ADMA_MASKED      (SDMMC_EISIER_SD_SDIO_ADMA_MASKED_Val << SDMMC_EISIER_SD_SDIO_ADMA_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the ADMA status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_ADMA_ENABLED     (SDMMC_EISIER_SD_SDIO_ADMA_ENABLED_Val << SDMMC_EISIER_SD_SDIO_ADMA_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the ADMA status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_SD_SDIO_Msk              _U_(0x03FF)                                           /**< (SDMMC_EISIER_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_EISIER_E_MMC_CMDTEO_Pos         _U_(0)                                               /**< (SDMMC_EISIER) Command Timeout Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CMDTEO_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_CMDTEO_Pos)          /**< (SDMMC_EISIER) Command Timeout Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CMDTEO(value)      (SDMMC_EISIER_E_MMC_CMDTEO_Msk & ((value) << SDMMC_EISIER_E_MMC_CMDTEO_Pos))
#define   SDMMC_EISIER_E_MMC_CMDTEO_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CMDTEO status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CMDTEO_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CMDTEO status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CMDTEO_MASKED      (SDMMC_EISIER_E_MMC_CMDTEO_MASKED_Val << SDMMC_EISIER_E_MMC_CMDTEO_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CMDTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDTEO_ENABLED     (SDMMC_EISIER_E_MMC_CMDTEO_ENABLED_Val << SDMMC_EISIER_E_MMC_CMDTEO_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CMDTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDCRC_Pos         _U_(1)                                               /**< (SDMMC_EISIER) Command CRC Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CMDCRC_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_CMDCRC_Pos)          /**< (SDMMC_EISIER) Command CRC Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CMDCRC(value)      (SDMMC_EISIER_E_MMC_CMDCRC_Msk & ((value) << SDMMC_EISIER_E_MMC_CMDCRC_Pos))
#define   SDMMC_EISIER_E_MMC_CMDCRC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CDMCRC status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CMDCRC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CMDCRC status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CMDCRC_MASKED      (SDMMC_EISIER_E_MMC_CMDCRC_MASKED_Val << SDMMC_EISIER_E_MMC_CMDCRC_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CDMCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDCRC_ENABLED     (SDMMC_EISIER_E_MMC_CMDCRC_ENABLED_Val << SDMMC_EISIER_E_MMC_CMDCRC_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CMDCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDEND_Pos         _U_(2)                                               /**< (SDMMC_EISIER) Command End Bit Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CMDEND_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_CMDEND_Pos)          /**< (SDMMC_EISIER) Command End Bit Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CMDEND(value)      (SDMMC_EISIER_E_MMC_CMDEND_Msk & ((value) << SDMMC_EISIER_E_MMC_CMDEND_Pos))
#define   SDMMC_EISIER_E_MMC_CMDEND_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CMDEND status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CMDEND_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CMDEND status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CMDEND_MASKED      (SDMMC_EISIER_E_MMC_CMDEND_MASKED_Val << SDMMC_EISIER_E_MMC_CMDEND_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CMDEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDEND_ENABLED     (SDMMC_EISIER_E_MMC_CMDEND_ENABLED_Val << SDMMC_EISIER_E_MMC_CMDEND_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CMDEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDIDX_Pos         _U_(3)                                               /**< (SDMMC_EISIER) Command Index Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CMDIDX_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_CMDIDX_Pos)          /**< (SDMMC_EISIER) Command Index Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CMDIDX(value)      (SDMMC_EISIER_E_MMC_CMDIDX_Msk & ((value) << SDMMC_EISIER_E_MMC_CMDIDX_Pos))
#define   SDMMC_EISIER_E_MMC_CMDIDX_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CMDIDX status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CMDIDX_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CMDIDX status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CMDIDX_MASKED      (SDMMC_EISIER_E_MMC_CMDIDX_MASKED_Val << SDMMC_EISIER_E_MMC_CMDIDX_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CMDIDX status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CMDIDX_ENABLED     (SDMMC_EISIER_E_MMC_CMDIDX_ENABLED_Val << SDMMC_EISIER_E_MMC_CMDIDX_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CMDIDX status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATTEO_Pos         _U_(4)                                               /**< (SDMMC_EISIER) Data Timeout Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_DATTEO_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_DATTEO_Pos)          /**< (SDMMC_EISIER) Data Timeout Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_DATTEO(value)      (SDMMC_EISIER_E_MMC_DATTEO_Msk & ((value) << SDMMC_EISIER_E_MMC_DATTEO_Pos))
#define   SDMMC_EISIER_E_MMC_DATTEO_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the DATTEO status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_DATTEO_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the DATTEO status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_DATTEO_MASKED      (SDMMC_EISIER_E_MMC_DATTEO_MASKED_Val << SDMMC_EISIER_E_MMC_DATTEO_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the DATTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATTEO_ENABLED     (SDMMC_EISIER_E_MMC_DATTEO_ENABLED_Val << SDMMC_EISIER_E_MMC_DATTEO_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the DATTEO status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATCRC_Pos         _U_(5)                                               /**< (SDMMC_EISIER) Data CRC Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_DATCRC_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_DATCRC_Pos)          /**< (SDMMC_EISIER) Data CRC Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_DATCRC(value)      (SDMMC_EISIER_E_MMC_DATCRC_Msk & ((value) << SDMMC_EISIER_E_MMC_DATCRC_Pos))
#define   SDMMC_EISIER_E_MMC_DATCRC_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the DATCRC status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_DATCRC_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the DATCRC status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_DATCRC_MASKED      (SDMMC_EISIER_E_MMC_DATCRC_MASKED_Val << SDMMC_EISIER_E_MMC_DATCRC_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the DATCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATCRC_ENABLED     (SDMMC_EISIER_E_MMC_DATCRC_ENABLED_Val << SDMMC_EISIER_E_MMC_DATCRC_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the DATCRC status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATEND_Pos         _U_(6)                                               /**< (SDMMC_EISIER) Data End Bit Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_DATEND_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_DATEND_Pos)          /**< (SDMMC_EISIER) Data End Bit Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_DATEND(value)      (SDMMC_EISIER_E_MMC_DATEND_Msk & ((value) << SDMMC_EISIER_E_MMC_DATEND_Pos))
#define   SDMMC_EISIER_E_MMC_DATEND_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the DATEND status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_DATEND_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the DATEND status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_DATEND_MASKED      (SDMMC_EISIER_E_MMC_DATEND_MASKED_Val << SDMMC_EISIER_E_MMC_DATEND_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the DATEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_DATEND_ENABLED     (SDMMC_EISIER_E_MMC_DATEND_ENABLED_Val << SDMMC_EISIER_E_MMC_DATEND_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the DATEND status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CURLIM_Pos         _U_(7)                                               /**< (SDMMC_EISIER) Current Limit Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_CURLIM_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_CURLIM_Pos)          /**< (SDMMC_EISIER) Current Limit Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_CURLIM(value)      (SDMMC_EISIER_E_MMC_CURLIM_Msk & ((value) << SDMMC_EISIER_E_MMC_CURLIM_Pos))
#define   SDMMC_EISIER_E_MMC_CURLIM_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the CURLIM status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_CURLIM_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the CURLIM status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_CURLIM_MASKED      (SDMMC_EISIER_E_MMC_CURLIM_MASKED_Val << SDMMC_EISIER_E_MMC_CURLIM_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the CURLIM status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_CURLIM_ENABLED     (SDMMC_EISIER_E_MMC_CURLIM_ENABLED_Val << SDMMC_EISIER_E_MMC_CURLIM_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the CURLIM status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_ACMD_Pos           _U_(8)                                               /**< (SDMMC_EISIER) Auto CMD Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_ACMD_Msk           (_U_(0x1) << SDMMC_EISIER_E_MMC_ACMD_Pos)            /**< (SDMMC_EISIER) Auto CMD Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_ACMD(value)        (SDMMC_EISIER_E_MMC_ACMD_Msk & ((value) << SDMMC_EISIER_E_MMC_ACMD_Pos))
#define   SDMMC_EISIER_E_MMC_ACMD_MASKED_Val  _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the ACMD status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_ACMD_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the ACMD status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_ACMD_MASKED        (SDMMC_EISIER_E_MMC_ACMD_MASKED_Val << SDMMC_EISIER_E_MMC_ACMD_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the ACMD status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_ACMD_ENABLED       (SDMMC_EISIER_E_MMC_ACMD_ENABLED_Val << SDMMC_EISIER_E_MMC_ACMD_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the ACMD status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_ADMA_Pos           _U_(9)                                               /**< (SDMMC_EISIER) ADMA Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_ADMA_Msk           (_U_(0x1) << SDMMC_EISIER_E_MMC_ADMA_Pos)            /**< (SDMMC_EISIER) ADMA Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_ADMA(value)        (SDMMC_EISIER_E_MMC_ADMA_Msk & ((value) << SDMMC_EISIER_E_MMC_ADMA_Pos))
#define   SDMMC_EISIER_E_MMC_ADMA_MASKED_Val  _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the ADMA status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_ADMA_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the ADMA status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_ADMA_MASKED        (SDMMC_EISIER_E_MMC_ADMA_MASKED_Val << SDMMC_EISIER_E_MMC_ADMA_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the ADMA status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_ADMA_ENABLED       (SDMMC_EISIER_E_MMC_ADMA_ENABLED_Val << SDMMC_EISIER_E_MMC_ADMA_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the ADMA status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_BOOTAE_Pos         _U_(12)                                              /**< (SDMMC_EISIER) Boot Acknowledge Error Signal Enable Position */
#define SDMMC_EISIER_E_MMC_BOOTAE_Msk         (_U_(0x1) << SDMMC_EISIER_E_MMC_BOOTAE_Pos)          /**< (SDMMC_EISIER) Boot Acknowledge Error Signal Enable Mask */
#define SDMMC_EISIER_E_MMC_BOOTAE(value)      (SDMMC_EISIER_E_MMC_BOOTAE_Msk & ((value) << SDMMC_EISIER_E_MMC_BOOTAE_Pos))
#define   SDMMC_EISIER_E_MMC_BOOTAE_MASKED_Val _U_(0x0)                                             /**< (SDMMC_EISIER) No interrupt is generated when the BOOTAE status rises in SDMMC_EISTR.  */
#define   SDMMC_EISIER_E_MMC_BOOTAE_ENABLED_Val _U_(0x1)                                             /**< (SDMMC_EISIER) An interrupt is generated when the BOOTAE status rises in SDMMC_EISTR.  */
#define SDMMC_EISIER_E_MMC_BOOTAE_MASKED      (SDMMC_EISIER_E_MMC_BOOTAE_MASKED_Val << SDMMC_EISIER_E_MMC_BOOTAE_Pos) /**< (SDMMC_EISIER) No interrupt is generated when the BOOTAE status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_BOOTAE_ENABLED     (SDMMC_EISIER_E_MMC_BOOTAE_ENABLED_Val << SDMMC_EISIER_E_MMC_BOOTAE_Pos) /**< (SDMMC_EISIER) An interrupt is generated when the BOOTAE status rises in SDMMC_EISTR. Position  */
#define SDMMC_EISIER_E_MMC_Msk                _U_(0x13FF)                                           /**< (SDMMC_EISIER_E_MMC) Register Mask  */


/* -------- SDMMC_ACESR : (SDMMC Offset: 0x3C) ( R/ 16) Auto CMD Error Status Register -------- */
#define SDMMC_ACESR_ACMD12NE_Pos              _U_(0)                                               /**< (SDMMC_ACESR) Auto CMD12 Not Executed Position */
#define SDMMC_ACESR_ACMD12NE_Msk              (_U_(0x1) << SDMMC_ACESR_ACMD12NE_Pos)               /**< (SDMMC_ACESR) Auto CMD12 Not Executed Mask */
#define SDMMC_ACESR_ACMD12NE(value)           (SDMMC_ACESR_ACMD12NE_Msk & ((value) << SDMMC_ACESR_ACMD12NE_Pos))
#define SDMMC_ACESR_ACMDTEO_Pos               _U_(1)                                               /**< (SDMMC_ACESR) Auto CMD Timeout Error Position */
#define SDMMC_ACESR_ACMDTEO_Msk               (_U_(0x1) << SDMMC_ACESR_ACMDTEO_Pos)                /**< (SDMMC_ACESR) Auto CMD Timeout Error Mask */
#define SDMMC_ACESR_ACMDTEO(value)            (SDMMC_ACESR_ACMDTEO_Msk & ((value) << SDMMC_ACESR_ACMDTEO_Pos))
#define SDMMC_ACESR_ACMDCRC_Pos               _U_(2)                                               /**< (SDMMC_ACESR) Auto CMD CRC Error Position */
#define SDMMC_ACESR_ACMDCRC_Msk               (_U_(0x1) << SDMMC_ACESR_ACMDCRC_Pos)                /**< (SDMMC_ACESR) Auto CMD CRC Error Mask */
#define SDMMC_ACESR_ACMDCRC(value)            (SDMMC_ACESR_ACMDCRC_Msk & ((value) << SDMMC_ACESR_ACMDCRC_Pos))
#define SDMMC_ACESR_ACMDEND_Pos               _U_(3)                                               /**< (SDMMC_ACESR) Auto CMD End Bit Error Position */
#define SDMMC_ACESR_ACMDEND_Msk               (_U_(0x1) << SDMMC_ACESR_ACMDEND_Pos)                /**< (SDMMC_ACESR) Auto CMD End Bit Error Mask */
#define SDMMC_ACESR_ACMDEND(value)            (SDMMC_ACESR_ACMDEND_Msk & ((value) << SDMMC_ACESR_ACMDEND_Pos))
#define SDMMC_ACESR_ACMDIDX_Pos               _U_(4)                                               /**< (SDMMC_ACESR) Auto CMD Index Error Position */
#define SDMMC_ACESR_ACMDIDX_Msk               (_U_(0x1) << SDMMC_ACESR_ACMDIDX_Pos)                /**< (SDMMC_ACESR) Auto CMD Index Error Mask */
#define SDMMC_ACESR_ACMDIDX(value)            (SDMMC_ACESR_ACMDIDX_Msk & ((value) << SDMMC_ACESR_ACMDIDX_Pos))
#define SDMMC_ACESR_CMDNI_Pos                 _U_(7)                                               /**< (SDMMC_ACESR) Command Not Issued by Auto CMD12 Error Position */
#define SDMMC_ACESR_CMDNI_Msk                 (_U_(0x1) << SDMMC_ACESR_CMDNI_Pos)                  /**< (SDMMC_ACESR) Command Not Issued by Auto CMD12 Error Mask */
#define SDMMC_ACESR_CMDNI(value)              (SDMMC_ACESR_CMDNI_Msk & ((value) << SDMMC_ACESR_CMDNI_Pos))
#define SDMMC_ACESR_Msk                       _U_(0x009F)                                          /**< (SDMMC_ACESR) Register Mask  */


/* -------- SDMMC_HC2R : (SDMMC Offset: 0x3E) (R/W 16) Host Control 2 Register -------- */
#define SDMMC_HC2R_Msk                        _U_(0x0000)                                          /**< (SDMMC_HC2R) Register Mask  */

/* SD_SDIO mode */
#define SDMMC_HC2R_SD_SDIO_UHSMS_Pos          _U_(0)                                               /**< (SDMMC_HC2R) UHS Mode Select Position */
#define SDMMC_HC2R_SD_SDIO_UHSMS_Msk          (_U_(0x7) << SDMMC_HC2R_SD_SDIO_UHSMS_Pos)           /**< (SDMMC_HC2R) UHS Mode Select Mask */
#define SDMMC_HC2R_SD_SDIO_UHSMS(value)       (SDMMC_HC2R_SD_SDIO_UHSMS_Msk & ((value) << SDMMC_HC2R_SD_SDIO_UHSMS_Pos))
#define   SDMMC_HC2R_SD_SDIO_UHSMS_SDR12_Val  _U_(0x0)                                             /**< (SDMMC_HC2R) UHS SDR12 Mode  */
#define   SDMMC_HC2R_SD_SDIO_UHSMS_SDR25_Val  _U_(0x1)                                             /**< (SDMMC_HC2R) UHS SDR25 Mode  */
#define   SDMMC_HC2R_SD_SDIO_UHSMS_SDR50_Val  _U_(0x2)                                             /**< (SDMMC_HC2R) UHS SDR50 Mode  */
#define   SDMMC_HC2R_SD_SDIO_UHSMS_SDR104_Val _U_(0x3)                                             /**< (SDMMC_HC2R) UHS SDR104 Mode  */
#define   SDMMC_HC2R_SD_SDIO_UHSMS_DDR50_Val  _U_(0x4)                                             /**< (SDMMC_HC2R) UHS DDR50 Mode  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_SDR12        (SDMMC_HC2R_SD_SDIO_UHSMS_SDR12_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos) /**< (SDMMC_HC2R) UHS SDR12 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_SDR25        (SDMMC_HC2R_SD_SDIO_UHSMS_SDR25_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos) /**< (SDMMC_HC2R) UHS SDR25 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_SDR50        (SDMMC_HC2R_SD_SDIO_UHSMS_SDR50_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos) /**< (SDMMC_HC2R) UHS SDR50 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_SDR104       (SDMMC_HC2R_SD_SDIO_UHSMS_SDR104_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos) /**< (SDMMC_HC2R) UHS SDR104 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_UHSMS_DDR50        (SDMMC_HC2R_SD_SDIO_UHSMS_DDR50_Val << SDMMC_HC2R_SD_SDIO_UHSMS_Pos) /**< (SDMMC_HC2R) UHS DDR50 Mode Position  */
#define SDMMC_HC2R_SD_SDIO_VS18EN_Pos         _U_(3)                                               /**< (SDMMC_HC2R) 1.8V Signaling Enable Position */
#define SDMMC_HC2R_SD_SDIO_VS18EN_Msk         (_U_(0x1) << SDMMC_HC2R_SD_SDIO_VS18EN_Pos)          /**< (SDMMC_HC2R) 1.8V Signaling Enable Mask */
#define SDMMC_HC2R_SD_SDIO_VS18EN(value)      (SDMMC_HC2R_SD_SDIO_VS18EN_Msk & ((value) << SDMMC_HC2R_SD_SDIO_VS18EN_Pos))
#define SDMMC_HC2R_SD_SDIO_DRVSEL_Pos         _U_(4)                                               /**< (SDMMC_HC2R) Driver Strength Select Position */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_Msk         (_U_(0x3) << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos)          /**< (SDMMC_HC2R) Driver Strength Select Mask */
#define SDMMC_HC2R_SD_SDIO_DRVSEL(value)      (SDMMC_HC2R_SD_SDIO_DRVSEL_Msk & ((value) << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos))
#define   SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEB_Val _U_(0x0)                                             /**< (SDMMC_HC2R) Driver Type B is selected (Default)  */
#define   SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEA_Val _U_(0x1)                                             /**< (SDMMC_HC2R) Driver Type A is selected  */
#define   SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEC_Val _U_(0x2)                                             /**< (SDMMC_HC2R) Driver Type C is selected  */
#define   SDMMC_HC2R_SD_SDIO_DRVSEL_TYPED_Val _U_(0x3)                                             /**< (SDMMC_HC2R) Driver Type D is selected  */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEB       (SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEB_Val << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos) /**< (SDMMC_HC2R) Driver Type B is selected (Default) Position  */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEA       (SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEA_Val << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos) /**< (SDMMC_HC2R) Driver Type A is selected Position  */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEC       (SDMMC_HC2R_SD_SDIO_DRVSEL_TYPEC_Val << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos) /**< (SDMMC_HC2R) Driver Type C is selected Position  */
#define SDMMC_HC2R_SD_SDIO_DRVSEL_TYPED       (SDMMC_HC2R_SD_SDIO_DRVSEL_TYPED_Val << SDMMC_HC2R_SD_SDIO_DRVSEL_Pos) /**< (SDMMC_HC2R) Driver Type D is selected Position  */
#define SDMMC_HC2R_SD_SDIO_EXTUN_Pos          _U_(6)                                               /**< (SDMMC_HC2R) Execute Tuning Position */
#define SDMMC_HC2R_SD_SDIO_EXTUN_Msk          (_U_(0x1) << SDMMC_HC2R_SD_SDIO_EXTUN_Pos)           /**< (SDMMC_HC2R) Execute Tuning Mask */
#define SDMMC_HC2R_SD_SDIO_EXTUN(value)       (SDMMC_HC2R_SD_SDIO_EXTUN_Msk & ((value) << SDMMC_HC2R_SD_SDIO_EXTUN_Pos))
#define SDMMC_HC2R_SD_SDIO_SCLKSEL_Pos        _U_(7)                                               /**< (SDMMC_HC2R) Sampling Clock Select Position */
#define SDMMC_HC2R_SD_SDIO_SCLKSEL_Msk        (_U_(0x1) << SDMMC_HC2R_SD_SDIO_SCLKSEL_Pos)         /**< (SDMMC_HC2R) Sampling Clock Select Mask */
#define SDMMC_HC2R_SD_SDIO_SCLKSEL(value)     (SDMMC_HC2R_SD_SDIO_SCLKSEL_Msk & ((value) << SDMMC_HC2R_SD_SDIO_SCLKSEL_Pos))
#define SDMMC_HC2R_SD_SDIO_ASINTEN_Pos        _U_(14)                                              /**< (SDMMC_HC2R) Asynchronous Interrupt Enable Position */
#define SDMMC_HC2R_SD_SDIO_ASINTEN_Msk        (_U_(0x1) << SDMMC_HC2R_SD_SDIO_ASINTEN_Pos)         /**< (SDMMC_HC2R) Asynchronous Interrupt Enable Mask */
#define SDMMC_HC2R_SD_SDIO_ASINTEN(value)     (SDMMC_HC2R_SD_SDIO_ASINTEN_Msk & ((value) << SDMMC_HC2R_SD_SDIO_ASINTEN_Pos))
#define SDMMC_HC2R_SD_SDIO_PVALEN_Pos         _U_(15)                                              /**< (SDMMC_HC2R) Preset Value Enable Position */
#define SDMMC_HC2R_SD_SDIO_PVALEN_Msk         (_U_(0x1) << SDMMC_HC2R_SD_SDIO_PVALEN_Pos)          /**< (SDMMC_HC2R) Preset Value Enable Mask */
#define SDMMC_HC2R_SD_SDIO_PVALEN(value)      (SDMMC_HC2R_SD_SDIO_PVALEN_Msk & ((value) << SDMMC_HC2R_SD_SDIO_PVALEN_Pos))
#define SDMMC_HC2R_SD_SDIO_Msk                _U_(0xC0FF)                                           /**< (SDMMC_HC2R_SD_SDIO) Register Mask  */

/* E_MMC mode */
#define SDMMC_HC2R_E_MMC_HS200EN_Pos          _U_(0)                                               /**< (SDMMC_HC2R) HS200 Mode Enable Position */
#define SDMMC_HC2R_E_MMC_HS200EN_Msk          (_U_(0xF) << SDMMC_HC2R_E_MMC_HS200EN_Pos)           /**< (SDMMC_HC2R) HS200 Mode Enable Mask */
#define SDMMC_HC2R_E_MMC_HS200EN(value)       (SDMMC_HC2R_E_MMC_HS200EN_Msk & ((value) << SDMMC_HC2R_E_MMC_HS200EN_Pos))
#define SDMMC_HC2R_E_MMC_DRVSEL_Pos           _U_(4)                                               /**< (SDMMC_HC2R) Driver Strength Select Position */
#define SDMMC_HC2R_E_MMC_DRVSEL_Msk           (_U_(0x3) << SDMMC_HC2R_E_MMC_DRVSEL_Pos)            /**< (SDMMC_HC2R) Driver Strength Select Mask */
#define SDMMC_HC2R_E_MMC_DRVSEL(value)        (SDMMC_HC2R_E_MMC_DRVSEL_Msk & ((value) << SDMMC_HC2R_E_MMC_DRVSEL_Pos))
#define   SDMMC_HC2R_E_MMC_DRVSEL_TYPEB_Val   _U_(0x0)                                             /**< (SDMMC_HC2R) Driver Type B is selected (Default)  */
#define   SDMMC_HC2R_E_MMC_DRVSEL_TYPEA_Val   _U_(0x1)                                             /**< (SDMMC_HC2R) Driver Type A is selected  */
#define   SDMMC_HC2R_E_MMC_DRVSEL_TYPEC_Val   _U_(0x2)                                             /**< (SDMMC_HC2R) Driver Type C is selected  */
#define   SDMMC_HC2R_E_MMC_DRVSEL_TYPED_Val   _U_(0x3)                                             /**< (SDMMC_HC2R) Driver Type D is selected  */
#define SDMMC_HC2R_E_MMC_DRVSEL_TYPEB         (SDMMC_HC2R_E_MMC_DRVSEL_TYPEB_Val << SDMMC_HC2R_E_MMC_DRVSEL_Pos) /**< (SDMMC_HC2R) Driver Type B is selected (Default) Position  */
#define SDMMC_HC2R_E_MMC_DRVSEL_TYPEA         (SDMMC_HC2R_E_MMC_DRVSEL_TYPEA_Val << SDMMC_HC2R_E_MMC_DRVSEL_Pos) /**< (SDMMC_HC2R) Driver Type A is selected Position  */
#define SDMMC_HC2R_E_MMC_DRVSEL_TYPEC         (SDMMC_HC2R_E_MMC_DRVSEL_TYPEC_Val << SDMMC_HC2R_E_MMC_DRVSEL_Pos) /**< (SDMMC_HC2R) Driver Type C is selected Position  */
#define SDMMC_HC2R_E_MMC_DRVSEL_TYPED         (SDMMC_HC2R_E_MMC_DRVSEL_TYPED_Val << SDMMC_HC2R_E_MMC_DRVSEL_Pos) /**< (SDMMC_HC2R) Driver Type D is selected Position  */
#define SDMMC_HC2R_E_MMC_EXTUN_Pos            _U_(6)                                               /**< (SDMMC_HC2R) Execute Tuning Position */
#define SDMMC_HC2R_E_MMC_EXTUN_Msk            (_U_(0x1) << SDMMC_HC2R_E_MMC_EXTUN_Pos)             /**< (SDMMC_HC2R) Execute Tuning Mask */
#define SDMMC_HC2R_E_MMC_EXTUN(value)         (SDMMC_HC2R_E_MMC_EXTUN_Msk & ((value) << SDMMC_HC2R_E_MMC_EXTUN_Pos))
#define SDMMC_HC2R_E_MMC_SCLKSEL_Pos          _U_(7)                                               /**< (SDMMC_HC2R) Sampling Clock Select Position */
#define SDMMC_HC2R_E_MMC_SCLKSEL_Msk          (_U_(0x1) << SDMMC_HC2R_E_MMC_SCLKSEL_Pos)           /**< (SDMMC_HC2R) Sampling Clock Select Mask */
#define SDMMC_HC2R_E_MMC_SCLKSEL(value)       (SDMMC_HC2R_E_MMC_SCLKSEL_Msk & ((value) << SDMMC_HC2R_E_MMC_SCLKSEL_Pos))
#define SDMMC_HC2R_E_MMC_PVALEN_Pos           _U_(15)                                              /**< (SDMMC_HC2R) Preset Value Enable Position */
#define SDMMC_HC2R_E_MMC_PVALEN_Msk           (_U_(0x1) << SDMMC_HC2R_E_MMC_PVALEN_Pos)            /**< (SDMMC_HC2R) Preset Value Enable Mask */
#define SDMMC_HC2R_E_MMC_PVALEN(value)        (SDMMC_HC2R_E_MMC_PVALEN_Msk & ((value) << SDMMC_HC2R_E_MMC_PVALEN_Pos))
#define SDMMC_HC2R_E_MMC_Msk                  _U_(0x80FF)                                           /**< (SDMMC_HC2R_E_MMC) Register Mask  */


/* -------- SDMMC_CA0R : (SDMMC Offset: 0x40) ( R/ 32) Capabilities 0 Register -------- */
#define SDMMC_CA0R_TEOCLKF_Pos                _U_(0)                                               /**< (SDMMC_CA0R) Timeout Clock Frequency Position */
#define SDMMC_CA0R_TEOCLKF_Msk                (_U_(0x3F) << SDMMC_CA0R_TEOCLKF_Pos)                /**< (SDMMC_CA0R) Timeout Clock Frequency Mask */
#define SDMMC_CA0R_TEOCLKF(value)             (SDMMC_CA0R_TEOCLKF_Msk & ((value) << SDMMC_CA0R_TEOCLKF_Pos))
#define SDMMC_CA0R_TEOCLKU_Pos                _U_(7)                                               /**< (SDMMC_CA0R) Timeout Clock Unit Position */
#define SDMMC_CA0R_TEOCLKU_Msk                (_U_(0x1) << SDMMC_CA0R_TEOCLKU_Pos)                 /**< (SDMMC_CA0R) Timeout Clock Unit Mask */
#define SDMMC_CA0R_TEOCLKU(value)             (SDMMC_CA0R_TEOCLKU_Msk & ((value) << SDMMC_CA0R_TEOCLKU_Pos))
#define SDMMC_CA0R_BASECLKF_Pos               _U_(8)                                               /**< (SDMMC_CA0R) Base Clock Frequency Position */
#define SDMMC_CA0R_BASECLKF_Msk               (_U_(0xFF) << SDMMC_CA0R_BASECLKF_Pos)               /**< (SDMMC_CA0R) Base Clock Frequency Mask */
#define SDMMC_CA0R_BASECLKF(value)            (SDMMC_CA0R_BASECLKF_Msk & ((value) << SDMMC_CA0R_BASECLKF_Pos))
#define SDMMC_CA0R_MAXBLKL_Pos                _U_(16)                                              /**< (SDMMC_CA0R) Max Block Length Position */
#define SDMMC_CA0R_MAXBLKL_Msk                (_U_(0x3) << SDMMC_CA0R_MAXBLKL_Pos)                 /**< (SDMMC_CA0R) Max Block Length Mask */
#define SDMMC_CA0R_MAXBLKL(value)             (SDMMC_CA0R_MAXBLKL_Msk & ((value) << SDMMC_CA0R_MAXBLKL_Pos))
#define   SDMMC_CA0R_MAXBLKL_512_Val          _U_(0x0)                                             /**< (SDMMC_CA0R) 512 bytes  */
#define   SDMMC_CA0R_MAXBLKL_1024_Val         _U_(0x1)                                             /**< (SDMMC_CA0R) 1024 bytes  */
#define   SDMMC_CA0R_MAXBLKL_2048_Val         _U_(0x2)                                             /**< (SDMMC_CA0R) 2048 bytes  */
#define SDMMC_CA0R_MAXBLKL_512                (SDMMC_CA0R_MAXBLKL_512_Val << SDMMC_CA0R_MAXBLKL_Pos) /**< (SDMMC_CA0R) 512 bytes Position  */
#define SDMMC_CA0R_MAXBLKL_1024               (SDMMC_CA0R_MAXBLKL_1024_Val << SDMMC_CA0R_MAXBLKL_Pos) /**< (SDMMC_CA0R) 1024 bytes Position  */
#define SDMMC_CA0R_MAXBLKL_2048               (SDMMC_CA0R_MAXBLKL_2048_Val << SDMMC_CA0R_MAXBLKL_Pos) /**< (SDMMC_CA0R) 2048 bytes Position  */
#define SDMMC_CA0R_ED8SUP_Pos                 _U_(18)                                              /**< (SDMMC_CA0R) 8-Bit Support for Embedded Device Position */
#define SDMMC_CA0R_ED8SUP_Msk                 (_U_(0x1) << SDMMC_CA0R_ED8SUP_Pos)                  /**< (SDMMC_CA0R) 8-Bit Support for Embedded Device Mask */
#define SDMMC_CA0R_ED8SUP(value)              (SDMMC_CA0R_ED8SUP_Msk & ((value) << SDMMC_CA0R_ED8SUP_Pos))
#define SDMMC_CA0R_ADMA2SUP_Pos               _U_(19)                                              /**< (SDMMC_CA0R) ADMA2 Support Position */
#define SDMMC_CA0R_ADMA2SUP_Msk               (_U_(0x1) << SDMMC_CA0R_ADMA2SUP_Pos)                /**< (SDMMC_CA0R) ADMA2 Support Mask */
#define SDMMC_CA0R_ADMA2SUP(value)            (SDMMC_CA0R_ADMA2SUP_Msk & ((value) << SDMMC_CA0R_ADMA2SUP_Pos))
#define SDMMC_CA0R_HSSUP_Pos                  _U_(21)                                              /**< (SDMMC_CA0R) High Speed Support Position */
#define SDMMC_CA0R_HSSUP_Msk                  (_U_(0x1) << SDMMC_CA0R_HSSUP_Pos)                   /**< (SDMMC_CA0R) High Speed Support Mask */
#define SDMMC_CA0R_HSSUP(value)               (SDMMC_CA0R_HSSUP_Msk & ((value) << SDMMC_CA0R_HSSUP_Pos))
#define SDMMC_CA0R_SDMASUP_Pos                _U_(22)                                              /**< (SDMMC_CA0R) SDMA Support Position */
#define SDMMC_CA0R_SDMASUP_Msk                (_U_(0x1) << SDMMC_CA0R_SDMASUP_Pos)                 /**< (SDMMC_CA0R) SDMA Support Mask */
#define SDMMC_CA0R_SDMASUP(value)             (SDMMC_CA0R_SDMASUP_Msk & ((value) << SDMMC_CA0R_SDMASUP_Pos))
#define SDMMC_CA0R_SRSUP_Pos                  _U_(23)                                              /**< (SDMMC_CA0R) Suspend/Resume Support Position */
#define SDMMC_CA0R_SRSUP_Msk                  (_U_(0x1) << SDMMC_CA0R_SRSUP_Pos)                   /**< (SDMMC_CA0R) Suspend/Resume Support Mask */
#define SDMMC_CA0R_SRSUP(value)               (SDMMC_CA0R_SRSUP_Msk & ((value) << SDMMC_CA0R_SRSUP_Pos))
#define SDMMC_CA0R_V33VSUP_Pos                _U_(24)                                              /**< (SDMMC_CA0R) Voltage Support 3.3V Position */
#define SDMMC_CA0R_V33VSUP_Msk                (_U_(0x1) << SDMMC_CA0R_V33VSUP_Pos)                 /**< (SDMMC_CA0R) Voltage Support 3.3V Mask */
#define SDMMC_CA0R_V33VSUP(value)             (SDMMC_CA0R_V33VSUP_Msk & ((value) << SDMMC_CA0R_V33VSUP_Pos))
#define SDMMC_CA0R_V30VSUP_Pos                _U_(25)                                              /**< (SDMMC_CA0R) Voltage Support 3.0V Position */
#define SDMMC_CA0R_V30VSUP_Msk                (_U_(0x1) << SDMMC_CA0R_V30VSUP_Pos)                 /**< (SDMMC_CA0R) Voltage Support 3.0V Mask */
#define SDMMC_CA0R_V30VSUP(value)             (SDMMC_CA0R_V30VSUP_Msk & ((value) << SDMMC_CA0R_V30VSUP_Pos))
#define SDMMC_CA0R_V18VSUP_Pos                _U_(26)                                              /**< (SDMMC_CA0R) Voltage Support 1.8V Position */
#define SDMMC_CA0R_V18VSUP_Msk                (_U_(0x1) << SDMMC_CA0R_V18VSUP_Pos)                 /**< (SDMMC_CA0R) Voltage Support 1.8V Mask */
#define SDMMC_CA0R_V18VSUP(value)             (SDMMC_CA0R_V18VSUP_Msk & ((value) << SDMMC_CA0R_V18VSUP_Pos))
#define SDMMC_CA0R_SB64SUP_Pos                _U_(28)                                              /**< (SDMMC_CA0R) 64-Bit System Bus Support Position */
#define SDMMC_CA0R_SB64SUP_Msk                (_U_(0x1) << SDMMC_CA0R_SB64SUP_Pos)                 /**< (SDMMC_CA0R) 64-Bit System Bus Support Mask */
#define SDMMC_CA0R_SB64SUP(value)             (SDMMC_CA0R_SB64SUP_Msk & ((value) << SDMMC_CA0R_SB64SUP_Pos))
#define SDMMC_CA0R_ASINTSUP_Pos               _U_(29)                                              /**< (SDMMC_CA0R) Asynchronous Interrupt Support Position */
#define SDMMC_CA0R_ASINTSUP_Msk               (_U_(0x1) << SDMMC_CA0R_ASINTSUP_Pos)                /**< (SDMMC_CA0R) Asynchronous Interrupt Support Mask */
#define SDMMC_CA0R_ASINTSUP(value)            (SDMMC_CA0R_ASINTSUP_Msk & ((value) << SDMMC_CA0R_ASINTSUP_Pos))
#define SDMMC_CA0R_SLTYPE_Pos                 _U_(30)                                              /**< (SDMMC_CA0R) Slot Type Position */
#define SDMMC_CA0R_SLTYPE_Msk                 (_U_(0x3) << SDMMC_CA0R_SLTYPE_Pos)                  /**< (SDMMC_CA0R) Slot Type Mask */
#define SDMMC_CA0R_SLTYPE(value)              (SDMMC_CA0R_SLTYPE_Msk & ((value) << SDMMC_CA0R_SLTYPE_Pos))
#define SDMMC_CA0R_Msk                        _U_(0xF7EFFFBF)                                      /**< (SDMMC_CA0R) Register Mask  */


/* -------- SDMMC_CA1R : (SDMMC Offset: 0x44) (R/W 32) Capabilities 1 Register -------- */
#define SDMMC_CA1R_SDR50SUP_Pos               _U_(0)                                               /**< (SDMMC_CA1R) SDR50 Support Position */
#define SDMMC_CA1R_SDR50SUP_Msk               (_U_(0x1) << SDMMC_CA1R_SDR50SUP_Pos)                /**< (SDMMC_CA1R) SDR50 Support Mask */
#define SDMMC_CA1R_SDR50SUP(value)            (SDMMC_CA1R_SDR50SUP_Msk & ((value) << SDMMC_CA1R_SDR50SUP_Pos))
#define SDMMC_CA1R_SDR104SUP_Pos              _U_(1)                                               /**< (SDMMC_CA1R) SDR104 Support Position */
#define SDMMC_CA1R_SDR104SUP_Msk              (_U_(0x1) << SDMMC_CA1R_SDR104SUP_Pos)               /**< (SDMMC_CA1R) SDR104 Support Mask */
#define SDMMC_CA1R_SDR104SUP(value)           (SDMMC_CA1R_SDR104SUP_Msk & ((value) << SDMMC_CA1R_SDR104SUP_Pos))
#define SDMMC_CA1R_DDR50SUP_Pos               _U_(2)                                               /**< (SDMMC_CA1R) DDR50 Support Position */
#define SDMMC_CA1R_DDR50SUP_Msk               (_U_(0x1) << SDMMC_CA1R_DDR50SUP_Pos)                /**< (SDMMC_CA1R) DDR50 Support Mask */
#define SDMMC_CA1R_DDR50SUP(value)            (SDMMC_CA1R_DDR50SUP_Msk & ((value) << SDMMC_CA1R_DDR50SUP_Pos))
#define SDMMC_CA1R_DRVASUP_Pos                _U_(4)                                               /**< (SDMMC_CA1R) Driver Type A Support Position */
#define SDMMC_CA1R_DRVASUP_Msk                (_U_(0x1) << SDMMC_CA1R_DRVASUP_Pos)                 /**< (SDMMC_CA1R) Driver Type A Support Mask */
#define SDMMC_CA1R_DRVASUP(value)             (SDMMC_CA1R_DRVASUP_Msk & ((value) << SDMMC_CA1R_DRVASUP_Pos))
#define SDMMC_CA1R_DRVCSUP_Pos                _U_(5)                                               /**< (SDMMC_CA1R) Driver Type C Support Position */
#define SDMMC_CA1R_DRVCSUP_Msk                (_U_(0x1) << SDMMC_CA1R_DRVCSUP_Pos)                 /**< (SDMMC_CA1R) Driver Type C Support Mask */
#define SDMMC_CA1R_DRVCSUP(value)             (SDMMC_CA1R_DRVCSUP_Msk & ((value) << SDMMC_CA1R_DRVCSUP_Pos))
#define SDMMC_CA1R_DRVDSUP_Pos                _U_(6)                                               /**< (SDMMC_CA1R) Driver Type D Support Position */
#define SDMMC_CA1R_DRVDSUP_Msk                (_U_(0x1) << SDMMC_CA1R_DRVDSUP_Pos)                 /**< (SDMMC_CA1R) Driver Type D Support Mask */
#define SDMMC_CA1R_DRVDSUP(value)             (SDMMC_CA1R_DRVDSUP_Msk & ((value) << SDMMC_CA1R_DRVDSUP_Pos))
#define SDMMC_CA1R_TCNTRT_Pos                 _U_(8)                                               /**< (SDMMC_CA1R) Timer Count For Retuning Position */
#define SDMMC_CA1R_TCNTRT_Msk                 (_U_(0xF) << SDMMC_CA1R_TCNTRT_Pos)                  /**< (SDMMC_CA1R) Timer Count For Retuning Mask */
#define SDMMC_CA1R_TCNTRT(value)              (SDMMC_CA1R_TCNTRT_Msk & ((value) << SDMMC_CA1R_TCNTRT_Pos))
#define SDMMC_CA1R_TSDR50_Pos                 _U_(13)                                              /**< (SDMMC_CA1R) Use Tuning for SDR50 Position */
#define SDMMC_CA1R_TSDR50_Msk                 (_U_(0x1) << SDMMC_CA1R_TSDR50_Pos)                  /**< (SDMMC_CA1R) Use Tuning for SDR50 Mask */
#define SDMMC_CA1R_TSDR50(value)              (SDMMC_CA1R_TSDR50_Msk & ((value) << SDMMC_CA1R_TSDR50_Pos))
#define SDMMC_CA1R_RTMOD_Pos                  _U_(14)                                              /**< (SDMMC_CA1R) Retuning Modes Position */
#define SDMMC_CA1R_RTMOD_Msk                  (_U_(0x3) << SDMMC_CA1R_RTMOD_Pos)                   /**< (SDMMC_CA1R) Retuning Modes Mask */
#define SDMMC_CA1R_RTMOD(value)               (SDMMC_CA1R_RTMOD_Msk & ((value) << SDMMC_CA1R_RTMOD_Pos))
#define   SDMMC_CA1R_RTMOD_MODE1_Val          _U_(0x0)                                             /**< (SDMMC_CA1R) Timer  */
#define   SDMMC_CA1R_RTMOD_MODE2_Val          _U_(0x1)                                             /**< (SDMMC_CA1R) Timer and Retuning Request  */
#define   SDMMC_CA1R_RTMOD_MODE3_Val          _U_(0x2)                                             /**< (SDMMC_CA1R) Auto Retuning (for transfer) Timer and Retuning Request  */
#define SDMMC_CA1R_RTMOD_MODE1                (SDMMC_CA1R_RTMOD_MODE1_Val << SDMMC_CA1R_RTMOD_Pos) /**< (SDMMC_CA1R) Timer Position  */
#define SDMMC_CA1R_RTMOD_MODE2                (SDMMC_CA1R_RTMOD_MODE2_Val << SDMMC_CA1R_RTMOD_Pos) /**< (SDMMC_CA1R) Timer and Retuning Request Position  */
#define SDMMC_CA1R_RTMOD_MODE3                (SDMMC_CA1R_RTMOD_MODE3_Val << SDMMC_CA1R_RTMOD_Pos) /**< (SDMMC_CA1R) Auto Retuning (for transfer) Timer and Retuning Request Position  */
#define SDMMC_CA1R_CLKMULT_Pos                _U_(16)                                              /**< (SDMMC_CA1R) Clock Multiplier Position */
#define SDMMC_CA1R_CLKMULT_Msk                (_U_(0xFF) << SDMMC_CA1R_CLKMULT_Pos)                /**< (SDMMC_CA1R) Clock Multiplier Mask */
#define SDMMC_CA1R_CLKMULT(value)             (SDMMC_CA1R_CLKMULT_Msk & ((value) << SDMMC_CA1R_CLKMULT_Pos))
#define SDMMC_CA1R_Msk                        _U_(0x00FFEF77)                                      /**< (SDMMC_CA1R) Register Mask  */

#define SDMMC_CA1R_TSDR_Pos                   _U_(13)                                              /**< (SDMMC_CA1R Position) Use Tuning for SDR5x */
#define SDMMC_CA1R_TSDR_Msk                   (_U_(0x1) << SDMMC_CA1R_TSDR_Pos)                    /**< (SDMMC_CA1R Mask) TSDR */
#define SDMMC_CA1R_TSDR(value)                (SDMMC_CA1R_TSDR_Msk & ((value) << SDMMC_CA1R_TSDR_Pos)) 

/* -------- SDMMC_MCCAR : (SDMMC Offset: 0x48) (R/W 32) Maximum Current Capabilities Register -------- */
#define SDMMC_MCCAR_MAXCUR33V_Pos             _U_(0)                                               /**< (SDMMC_MCCAR) Maximum Current for 3.3V Position */
#define SDMMC_MCCAR_MAXCUR33V_Msk             (_U_(0xFF) << SDMMC_MCCAR_MAXCUR33V_Pos)             /**< (SDMMC_MCCAR) Maximum Current for 3.3V Mask */
#define SDMMC_MCCAR_MAXCUR33V(value)          (SDMMC_MCCAR_MAXCUR33V_Msk & ((value) << SDMMC_MCCAR_MAXCUR33V_Pos))
#define SDMMC_MCCAR_MAXCUR30V_Pos             _U_(8)                                               /**< (SDMMC_MCCAR) Maximum Current for 3.0V Position */
#define SDMMC_MCCAR_MAXCUR30V_Msk             (_U_(0xFF) << SDMMC_MCCAR_MAXCUR30V_Pos)             /**< (SDMMC_MCCAR) Maximum Current for 3.0V Mask */
#define SDMMC_MCCAR_MAXCUR30V(value)          (SDMMC_MCCAR_MAXCUR30V_Msk & ((value) << SDMMC_MCCAR_MAXCUR30V_Pos))
#define SDMMC_MCCAR_MAXCUR18V_Pos             _U_(16)                                              /**< (SDMMC_MCCAR) Maximum Current for 1.8V Position */
#define SDMMC_MCCAR_MAXCUR18V_Msk             (_U_(0xFF) << SDMMC_MCCAR_MAXCUR18V_Pos)             /**< (SDMMC_MCCAR) Maximum Current for 1.8V Mask */
#define SDMMC_MCCAR_MAXCUR18V(value)          (SDMMC_MCCAR_MAXCUR18V_Msk & ((value) << SDMMC_MCCAR_MAXCUR18V_Pos))
#define SDMMC_MCCAR_Msk                       _U_(0x00FFFFFF)                                      /**< (SDMMC_MCCAR) Register Mask  */


/* -------- SDMMC_FERACES : (SDMMC Offset: 0x50) ( /W 16) Force Event Register for Auto CMD Error Status -------- */
#define SDMMC_FERACES_ACMD12NE_Pos            _U_(0)                                               /**< (SDMMC_FERACES) Force Event for Auto CMD12 Not Executed Position */
#define SDMMC_FERACES_ACMD12NE_Msk            (_U_(0x1) << SDMMC_FERACES_ACMD12NE_Pos)             /**< (SDMMC_FERACES) Force Event for Auto CMD12 Not Executed Mask */
#define SDMMC_FERACES_ACMD12NE(value)         (SDMMC_FERACES_ACMD12NE_Msk & ((value) << SDMMC_FERACES_ACMD12NE_Pos))
#define SDMMC_FERACES_ACMDTEO_Pos             _U_(1)                                               /**< (SDMMC_FERACES) Force Event for Auto CMD Timeout Error Position */
#define SDMMC_FERACES_ACMDTEO_Msk             (_U_(0x1) << SDMMC_FERACES_ACMDTEO_Pos)              /**< (SDMMC_FERACES) Force Event for Auto CMD Timeout Error Mask */
#define SDMMC_FERACES_ACMDTEO(value)          (SDMMC_FERACES_ACMDTEO_Msk & ((value) << SDMMC_FERACES_ACMDTEO_Pos))
#define SDMMC_FERACES_ACMDCRC_Pos             _U_(2)                                               /**< (SDMMC_FERACES) Force Event for Auto CMD CRC Error Position */
#define SDMMC_FERACES_ACMDCRC_Msk             (_U_(0x1) << SDMMC_FERACES_ACMDCRC_Pos)              /**< (SDMMC_FERACES) Force Event for Auto CMD CRC Error Mask */
#define SDMMC_FERACES_ACMDCRC(value)          (SDMMC_FERACES_ACMDCRC_Msk & ((value) << SDMMC_FERACES_ACMDCRC_Pos))
#define SDMMC_FERACES_ACMDEND_Pos             _U_(3)                                               /**< (SDMMC_FERACES) Force Event for Auto CMD End Bit Error Position */
#define SDMMC_FERACES_ACMDEND_Msk             (_U_(0x1) << SDMMC_FERACES_ACMDEND_Pos)              /**< (SDMMC_FERACES) Force Event for Auto CMD End Bit Error Mask */
#define SDMMC_FERACES_ACMDEND(value)          (SDMMC_FERACES_ACMDEND_Msk & ((value) << SDMMC_FERACES_ACMDEND_Pos))
#define SDMMC_FERACES_ACMDIDX_Pos             _U_(4)                                               /**< (SDMMC_FERACES) Force Event for Auto CMD Index Error Position */
#define SDMMC_FERACES_ACMDIDX_Msk             (_U_(0x1) << SDMMC_FERACES_ACMDIDX_Pos)              /**< (SDMMC_FERACES) Force Event for Auto CMD Index Error Mask */
#define SDMMC_FERACES_ACMDIDX(value)          (SDMMC_FERACES_ACMDIDX_Msk & ((value) << SDMMC_FERACES_ACMDIDX_Pos))
#define SDMMC_FERACES_CMDNI_Pos               _U_(7)                                               /**< (SDMMC_FERACES) Force Event for Command Not Issued by Auto CMD12 Error Position */
#define SDMMC_FERACES_CMDNI_Msk               (_U_(0x1) << SDMMC_FERACES_CMDNI_Pos)                /**< (SDMMC_FERACES) Force Event for Command Not Issued by Auto CMD12 Error Mask */
#define SDMMC_FERACES_CMDNI(value)            (SDMMC_FERACES_CMDNI_Msk & ((value) << SDMMC_FERACES_CMDNI_Pos))
#define SDMMC_FERACES_Msk                     _U_(0x009F)                                          /**< (SDMMC_FERACES) Register Mask  */


/* -------- SDMMC_FEREIS : (SDMMC Offset: 0x52) ( /W 16) Force Event Register for Error Interrupt Status -------- */
#define SDMMC_FEREIS_CMDTEO_Pos               _U_(0)                                               /**< (SDMMC_FEREIS) Force Event for Command Timeout Error Position */
#define SDMMC_FEREIS_CMDTEO_Msk               (_U_(0x1) << SDMMC_FEREIS_CMDTEO_Pos)                /**< (SDMMC_FEREIS) Force Event for Command Timeout Error Mask */
#define SDMMC_FEREIS_CMDTEO(value)            (SDMMC_FEREIS_CMDTEO_Msk & ((value) << SDMMC_FEREIS_CMDTEO_Pos))
#define SDMMC_FEREIS_CMDCRC_Pos               _U_(1)                                               /**< (SDMMC_FEREIS) Force Event for Command CRC Error Position */
#define SDMMC_FEREIS_CMDCRC_Msk               (_U_(0x1) << SDMMC_FEREIS_CMDCRC_Pos)                /**< (SDMMC_FEREIS) Force Event for Command CRC Error Mask */
#define SDMMC_FEREIS_CMDCRC(value)            (SDMMC_FEREIS_CMDCRC_Msk & ((value) << SDMMC_FEREIS_CMDCRC_Pos))
#define SDMMC_FEREIS_CMDEND_Pos               _U_(2)                                               /**< (SDMMC_FEREIS) Force Event for Command End Bit Error Position */
#define SDMMC_FEREIS_CMDEND_Msk               (_U_(0x1) << SDMMC_FEREIS_CMDEND_Pos)                /**< (SDMMC_FEREIS) Force Event for Command End Bit Error Mask */
#define SDMMC_FEREIS_CMDEND(value)            (SDMMC_FEREIS_CMDEND_Msk & ((value) << SDMMC_FEREIS_CMDEND_Pos))
#define SDMMC_FEREIS_CMDIDX_Pos               _U_(3)                                               /**< (SDMMC_FEREIS) Force Event for Command Index Error Position */
#define SDMMC_FEREIS_CMDIDX_Msk               (_U_(0x1) << SDMMC_FEREIS_CMDIDX_Pos)                /**< (SDMMC_FEREIS) Force Event for Command Index Error Mask */
#define SDMMC_FEREIS_CMDIDX(value)            (SDMMC_FEREIS_CMDIDX_Msk & ((value) << SDMMC_FEREIS_CMDIDX_Pos))
#define SDMMC_FEREIS_DATTEO_Pos               _U_(4)                                               /**< (SDMMC_FEREIS) Force Event for Data Timeout error Position */
#define SDMMC_FEREIS_DATTEO_Msk               (_U_(0x1) << SDMMC_FEREIS_DATTEO_Pos)                /**< (SDMMC_FEREIS) Force Event for Data Timeout error Mask */
#define SDMMC_FEREIS_DATTEO(value)            (SDMMC_FEREIS_DATTEO_Msk & ((value) << SDMMC_FEREIS_DATTEO_Pos))
#define SDMMC_FEREIS_DATCRC_Pos               _U_(5)                                               /**< (SDMMC_FEREIS) Force Event for Data CRC error Position */
#define SDMMC_FEREIS_DATCRC_Msk               (_U_(0x1) << SDMMC_FEREIS_DATCRC_Pos)                /**< (SDMMC_FEREIS) Force Event for Data CRC error Mask */
#define SDMMC_FEREIS_DATCRC(value)            (SDMMC_FEREIS_DATCRC_Msk & ((value) << SDMMC_FEREIS_DATCRC_Pos))
#define SDMMC_FEREIS_DATEND_Pos               _U_(6)                                               /**< (SDMMC_FEREIS) Force Event for Data End Bit Error Position */
#define SDMMC_FEREIS_DATEND_Msk               (_U_(0x1) << SDMMC_FEREIS_DATEND_Pos)                /**< (SDMMC_FEREIS) Force Event for Data End Bit Error Mask */
#define SDMMC_FEREIS_DATEND(value)            (SDMMC_FEREIS_DATEND_Msk & ((value) << SDMMC_FEREIS_DATEND_Pos))
#define SDMMC_FEREIS_CURLIM_Pos               _U_(7)                                               /**< (SDMMC_FEREIS) Force Event for Current Limit Error Position */
#define SDMMC_FEREIS_CURLIM_Msk               (_U_(0x1) << SDMMC_FEREIS_CURLIM_Pos)                /**< (SDMMC_FEREIS) Force Event for Current Limit Error Mask */
#define SDMMC_FEREIS_CURLIM(value)            (SDMMC_FEREIS_CURLIM_Msk & ((value) << SDMMC_FEREIS_CURLIM_Pos))
#define SDMMC_FEREIS_ACMD_Pos                 _U_(8)                                               /**< (SDMMC_FEREIS) Force Event for Auto CMD Error Position */
#define SDMMC_FEREIS_ACMD_Msk                 (_U_(0x1) << SDMMC_FEREIS_ACMD_Pos)                  /**< (SDMMC_FEREIS) Force Event for Auto CMD Error Mask */
#define SDMMC_FEREIS_ACMD(value)              (SDMMC_FEREIS_ACMD_Msk & ((value) << SDMMC_FEREIS_ACMD_Pos))
#define SDMMC_FEREIS_ADMA_Pos                 _U_(9)                                               /**< (SDMMC_FEREIS) Force Event for ADMA Error Position */
#define SDMMC_FEREIS_ADMA_Msk                 (_U_(0x1) << SDMMC_FEREIS_ADMA_Pos)                  /**< (SDMMC_FEREIS) Force Event for ADMA Error Mask */
#define SDMMC_FEREIS_ADMA(value)              (SDMMC_FEREIS_ADMA_Msk & ((value) << SDMMC_FEREIS_ADMA_Pos))
#define SDMMC_FEREIS_BOOTAE_Pos               _U_(12)                                              /**< (SDMMC_FEREIS) Force Event for Boot Acknowledge Error Position */
#define SDMMC_FEREIS_BOOTAE_Msk               (_U_(0x1) << SDMMC_FEREIS_BOOTAE_Pos)                /**< (SDMMC_FEREIS) Force Event for Boot Acknowledge Error Mask */
#define SDMMC_FEREIS_BOOTAE(value)            (SDMMC_FEREIS_BOOTAE_Msk & ((value) << SDMMC_FEREIS_BOOTAE_Pos))
#define SDMMC_FEREIS_Msk                      _U_(0x13FF)                                          /**< (SDMMC_FEREIS) Register Mask  */


/* -------- SDMMC_AESR : (SDMMC Offset: 0x54) ( R/ 8) ADMA Error Status Register -------- */
#define SDMMC_AESR_ERRST_Pos                  _U_(0)                                               /**< (SDMMC_AESR) ADMA Error State Position */
#define SDMMC_AESR_ERRST_Msk                  (_U_(0x3) << SDMMC_AESR_ERRST_Pos)                   /**< (SDMMC_AESR) ADMA Error State Mask */
#define SDMMC_AESR_ERRST(value)               (SDMMC_AESR_ERRST_Msk & ((value) << SDMMC_AESR_ERRST_Pos))
#define SDMMC_AESR_LMIS_Pos                   _U_(2)                                               /**< (SDMMC_AESR) ADMA Length Mismatch Error Position */
#define SDMMC_AESR_LMIS_Msk                   (_U_(0x1) << SDMMC_AESR_LMIS_Pos)                    /**< (SDMMC_AESR) ADMA Length Mismatch Error Mask */
#define SDMMC_AESR_LMIS(value)                (SDMMC_AESR_LMIS_Msk & ((value) << SDMMC_AESR_LMIS_Pos))
#define SDMMC_AESR_Msk                        _U_(0x07)                                            /**< (SDMMC_AESR) Register Mask  */


/* -------- SDMMC_ASAR0 : (SDMMC Offset: 0x58) (R/W 32) ADMA System Address Register 0 -------- */
#define SDMMC_ASAR0_ADMASA_Pos                _U_(0)                                               /**< (SDMMC_ASAR0) ADMA System Address Position */
#define SDMMC_ASAR0_ADMASA_Msk                (_U_(0xFFFFFFFF) << SDMMC_ASAR0_ADMASA_Pos)          /**< (SDMMC_ASAR0) ADMA System Address Mask */
#define SDMMC_ASAR0_ADMASA(value)             (SDMMC_ASAR0_ADMASA_Msk & ((value) << SDMMC_ASAR0_ADMASA_Pos))
#define SDMMC_ASAR0_Msk                       _U_(0xFFFFFFFF)                                      /**< (SDMMC_ASAR0) Register Mask  */


/* -------- SDMMC_PVR : (SDMMC Offset: 0x60) (R/W 16) Preset Value Register 0 (for initialization) -------- */
#define SDMMC_PVR_SDCLKFSEL_Pos               _U_(0)                                               /**< (SDMMC_PVR) SDCLK Frequency Select Position */
#define SDMMC_PVR_SDCLKFSEL_Msk               (_U_(0x3FF) << SDMMC_PVR_SDCLKFSEL_Pos)              /**< (SDMMC_PVR) SDCLK Frequency Select Mask */
#define SDMMC_PVR_SDCLKFSEL(value)            (SDMMC_PVR_SDCLKFSEL_Msk & ((value) << SDMMC_PVR_SDCLKFSEL_Pos))
#define SDMMC_PVR_CLKGSEL_Pos                 _U_(10)                                              /**< (SDMMC_PVR) Clock Generator Select Position */
#define SDMMC_PVR_CLKGSEL_Msk                 (_U_(0x1) << SDMMC_PVR_CLKGSEL_Pos)                  /**< (SDMMC_PVR) Clock Generator Select Mask */
#define SDMMC_PVR_CLKGSEL(value)              (SDMMC_PVR_CLKGSEL_Msk & ((value) << SDMMC_PVR_CLKGSEL_Pos))
#define SDMMC_PVR_DRVSEL_Pos                  _U_(14)                                              /**< (SDMMC_PVR) Driver Strength Select Position */
#define SDMMC_PVR_DRVSEL_Msk                  (_U_(0x3) << SDMMC_PVR_DRVSEL_Pos)                   /**< (SDMMC_PVR) Driver Strength Select Mask */
#define SDMMC_PVR_DRVSEL(value)               (SDMMC_PVR_DRVSEL_Msk & ((value) << SDMMC_PVR_DRVSEL_Pos))
#define SDMMC_PVR_Msk                         _U_(0xC7FF)                                          /**< (SDMMC_PVR) Register Mask  */


/* -------- SDMMC_SISR : (SDMMC Offset: 0xFC) ( R/ 16) Slot Interrupt Status Register -------- */
#define SDMMC_SISR_INTSSL_Pos                 _U_(0)                                               /**< (SDMMC_SISR) Interrupt Signal for Each Slot Position */
#define SDMMC_SISR_INTSSL_Msk                 (_U_(0x3) << SDMMC_SISR_INTSSL_Pos)                  /**< (SDMMC_SISR) Interrupt Signal for Each Slot Mask */
#define SDMMC_SISR_INTSSL(value)              (SDMMC_SISR_INTSSL_Msk & ((value) << SDMMC_SISR_INTSSL_Pos))
#define SDMMC_SISR_Msk                        _U_(0x0003)                                          /**< (SDMMC_SISR) Register Mask  */


/* -------- SDMMC_HCVR : (SDMMC Offset: 0xFE) ( R/ 16) Host Controller Version Register -------- */
#define SDMMC_HCVR_SVER_Pos                   _U_(0)                                               /**< (SDMMC_HCVR) Specification Version Number Position */
#define SDMMC_HCVR_SVER_Msk                   (_U_(0xFF) << SDMMC_HCVR_SVER_Pos)                   /**< (SDMMC_HCVR) Specification Version Number Mask */
#define SDMMC_HCVR_SVER(value)                (SDMMC_HCVR_SVER_Msk & ((value) << SDMMC_HCVR_SVER_Pos))
#define SDMMC_HCVR_VVER_Pos                   _U_(8)                                               /**< (SDMMC_HCVR) Vendor Version Number Position */
#define SDMMC_HCVR_VVER_Msk                   (_U_(0xFF) << SDMMC_HCVR_VVER_Pos)                   /**< (SDMMC_HCVR) Vendor Version Number Mask */
#define SDMMC_HCVR_VVER(value)                (SDMMC_HCVR_VVER_Msk & ((value) << SDMMC_HCVR_VVER_Pos))
#define SDMMC_HCVR_Msk                        _U_(0xFFFF)                                          /**< (SDMMC_HCVR) Register Mask  */


/* -------- SDMMC_APSR : (SDMMC Offset: 0x200) ( R/ 32) Additional Present State Register -------- */
#define SDMMC_APSR_HDATLL_Pos                 _U_(0)                                               /**< (SDMMC_APSR) DAT[7:4] High Line Level Position */
#define SDMMC_APSR_HDATLL_Msk                 (_U_(0xF) << SDMMC_APSR_HDATLL_Pos)                  /**< (SDMMC_APSR) DAT[7:4] High Line Level Mask */
#define SDMMC_APSR_HDATLL(value)              (SDMMC_APSR_HDATLL_Msk & ((value) << SDMMC_APSR_HDATLL_Pos))
#define SDMMC_APSR_Msk                        _U_(0x0000000F)                                      /**< (SDMMC_APSR) Register Mask  */


/* -------- SDMMC_MC1R : (SDMMC Offset: 0x204) (R/W 8) e.MMC Control 1 Register -------- */
#define SDMMC_MC1R_CMDTYP_Pos                 _U_(0)                                               /**< (SDMMC_MC1R) e.MMC Command Type Position */
#define SDMMC_MC1R_CMDTYP_Msk                 (_U_(0x3) << SDMMC_MC1R_CMDTYP_Pos)                  /**< (SDMMC_MC1R) e.MMC Command Type Mask */
#define SDMMC_MC1R_CMDTYP(value)              (SDMMC_MC1R_CMDTYP_Msk & ((value) << SDMMC_MC1R_CMDTYP_Pos))
#define   SDMMC_MC1R_CMDTYP_NORMAL_Val        _U_(0x0)                                             /**< (SDMMC_MC1R) The command is not an e.MMC specific command.  */
#define   SDMMC_MC1R_CMDTYP_WAITIRQ_Val       _U_(0x1)                                             /**< (SDMMC_MC1R) This bit must be set to 1 when the e.MMC is in Interrupt mode (CMD40). Refer to "Interrupt Mode" in the "Embedded MultiMedia Card (e.MMC) Electrical Standard 4.51" .  */
#define   SDMMC_MC1R_CMDTYP_STREAM_Val        _U_(0x2)                                             /**< (SDMMC_MC1R) This bit must be set to 1 in the case of Stream Read(CMD11) or Stream Write (CMD20). Only effective for e.MMC up to revision 4.41.  */
#define   SDMMC_MC1R_CMDTYP_BOOT_Val          _U_(0x3)                                             /**< (SDMMC_MC1R) Starts a Boot Operation mode at the next write to SDMMC_CR. Boot data are read directly from e.MMC device.  */
#define SDMMC_MC1R_CMDTYP_NORMAL              (SDMMC_MC1R_CMDTYP_NORMAL_Val << SDMMC_MC1R_CMDTYP_Pos) /**< (SDMMC_MC1R) The command is not an e.MMC specific command. Position  */
#define SDMMC_MC1R_CMDTYP_WAITIRQ             (SDMMC_MC1R_CMDTYP_WAITIRQ_Val << SDMMC_MC1R_CMDTYP_Pos) /**< (SDMMC_MC1R) This bit must be set to 1 when the e.MMC is in Interrupt mode (CMD40). Refer to "Interrupt Mode" in the "Embedded MultiMedia Card (e.MMC) Electrical Standard 4.51" . Position  */
#define SDMMC_MC1R_CMDTYP_STREAM              (SDMMC_MC1R_CMDTYP_STREAM_Val << SDMMC_MC1R_CMDTYP_Pos) /**< (SDMMC_MC1R) This bit must be set to 1 in the case of Stream Read(CMD11) or Stream Write (CMD20). Only effective for e.MMC up to revision 4.41. Position  */
#define SDMMC_MC1R_CMDTYP_BOOT                (SDMMC_MC1R_CMDTYP_BOOT_Val << SDMMC_MC1R_CMDTYP_Pos) /**< (SDMMC_MC1R) Starts a Boot Operation mode at the next write to SDMMC_CR. Boot data are read directly from e.MMC device. Position  */
#define SDMMC_MC1R_DDR_Pos                    _U_(3)                                               /**< (SDMMC_MC1R) e.MMC HSDDR Mode Position */
#define SDMMC_MC1R_DDR_Msk                    (_U_(0x1) << SDMMC_MC1R_DDR_Pos)                     /**< (SDMMC_MC1R) e.MMC HSDDR Mode Mask */
#define SDMMC_MC1R_DDR(value)                 (SDMMC_MC1R_DDR_Msk & ((value) << SDMMC_MC1R_DDR_Pos))
#define SDMMC_MC1R_OPD_Pos                    _U_(4)                                               /**< (SDMMC_MC1R) e.MMC Open Drain Mode Position */
#define SDMMC_MC1R_OPD_Msk                    (_U_(0x1) << SDMMC_MC1R_OPD_Pos)                     /**< (SDMMC_MC1R) e.MMC Open Drain Mode Mask */
#define SDMMC_MC1R_OPD(value)                 (SDMMC_MC1R_OPD_Msk & ((value) << SDMMC_MC1R_OPD_Pos))
#define SDMMC_MC1R_BOOTA_Pos                  _U_(5)                                               /**< (SDMMC_MC1R) e.MMC Boot Acknowledge Enable Position */
#define SDMMC_MC1R_BOOTA_Msk                  (_U_(0x1) << SDMMC_MC1R_BOOTA_Pos)                   /**< (SDMMC_MC1R) e.MMC Boot Acknowledge Enable Mask */
#define SDMMC_MC1R_BOOTA(value)               (SDMMC_MC1R_BOOTA_Msk & ((value) << SDMMC_MC1R_BOOTA_Pos))
#define SDMMC_MC1R_RSTN_Pos                   _U_(6)                                               /**< (SDMMC_MC1R) e.MMC Reset Signal Position */
#define SDMMC_MC1R_RSTN_Msk                   (_U_(0x1) << SDMMC_MC1R_RSTN_Pos)                    /**< (SDMMC_MC1R) e.MMC Reset Signal Mask */
#define SDMMC_MC1R_RSTN(value)                (SDMMC_MC1R_RSTN_Msk & ((value) << SDMMC_MC1R_RSTN_Pos))
#define SDMMC_MC1R_FCD_Pos                    _U_(7)                                               /**< (SDMMC_MC1R) e.MMC Force Card Detect Position */
#define SDMMC_MC1R_FCD_Msk                    (_U_(0x1) << SDMMC_MC1R_FCD_Pos)                     /**< (SDMMC_MC1R) e.MMC Force Card Detect Mask */
#define SDMMC_MC1R_FCD(value)                 (SDMMC_MC1R_FCD_Msk & ((value) << SDMMC_MC1R_FCD_Pos))
#define SDMMC_MC1R_Msk                        _U_(0xFB)                                            /**< (SDMMC_MC1R) Register Mask  */


/* -------- SDMMC_MC2R : (SDMMC Offset: 0x205) ( /W 8) e.MMC Control 2 Register -------- */
#define SDMMC_MC2R_SRESP_Pos                  _U_(0)                                               /**< (SDMMC_MC2R) e.MMC Abort Wait IRQ Position */
#define SDMMC_MC2R_SRESP_Msk                  (_U_(0x1) << SDMMC_MC2R_SRESP_Pos)                   /**< (SDMMC_MC2R) e.MMC Abort Wait IRQ Mask */
#define SDMMC_MC2R_SRESP(value)               (SDMMC_MC2R_SRESP_Msk & ((value) << SDMMC_MC2R_SRESP_Pos))
#define SDMMC_MC2R_ABOOT_Pos                  _U_(1)                                               /**< (SDMMC_MC2R) e.MMC Abort Boot Position */
#define SDMMC_MC2R_ABOOT_Msk                  (_U_(0x1) << SDMMC_MC2R_ABOOT_Pos)                   /**< (SDMMC_MC2R) e.MMC Abort Boot Mask */
#define SDMMC_MC2R_ABOOT(value)               (SDMMC_MC2R_ABOOT_Msk & ((value) << SDMMC_MC2R_ABOOT_Pos))
#define SDMMC_MC2R_Msk                        _U_(0x03)                                            /**< (SDMMC_MC2R) Register Mask  */


/* -------- SDMMC_ACR : (SDMMC Offset: 0x208) (R/W 32) AHB Control Register -------- */
#define SDMMC_ACR_BMAX_Pos                    _U_(0)                                               /**< (SDMMC_ACR) AHB Maximum Burst Position */
#define SDMMC_ACR_BMAX_Msk                    (_U_(0x3) << SDMMC_ACR_BMAX_Pos)                     /**< (SDMMC_ACR) AHB Maximum Burst Mask */
#define SDMMC_ACR_BMAX(value)                 (SDMMC_ACR_BMAX_Msk & ((value) << SDMMC_ACR_BMAX_Pos))
#define   SDMMC_ACR_BMAX_INCR16_Val           _U_(0x0)                                             /**< (SDMMC_ACR) The maximum burst size is INCR16.  */
#define   SDMMC_ACR_BMAX_INCR8_Val            _U_(0x1)                                             /**< (SDMMC_ACR) The maximum burst size is INCR8.  */
#define   SDMMC_ACR_BMAX_INCR4_Val            _U_(0x2)                                             /**< (SDMMC_ACR) The maximum burst size is INCR4.  */
#define   SDMMC_ACR_BMAX_SINGLE_Val           _U_(0x3)                                             /**< (SDMMC_ACR) Only SINGLE transfers are performed.  */
#define SDMMC_ACR_BMAX_INCR16                 (SDMMC_ACR_BMAX_INCR16_Val << SDMMC_ACR_BMAX_Pos)    /**< (SDMMC_ACR) The maximum burst size is INCR16. Position  */
#define SDMMC_ACR_BMAX_INCR8                  (SDMMC_ACR_BMAX_INCR8_Val << SDMMC_ACR_BMAX_Pos)     /**< (SDMMC_ACR) The maximum burst size is INCR8. Position  */
#define SDMMC_ACR_BMAX_INCR4                  (SDMMC_ACR_BMAX_INCR4_Val << SDMMC_ACR_BMAX_Pos)     /**< (SDMMC_ACR) The maximum burst size is INCR4. Position  */
#define SDMMC_ACR_BMAX_SINGLE                 (SDMMC_ACR_BMAX_SINGLE_Val << SDMMC_ACR_BMAX_Pos)    /**< (SDMMC_ACR) Only SINGLE transfers are performed. Position  */
#define SDMMC_ACR_Msk                         _U_(0x00000003)                                      /**< (SDMMC_ACR) Register Mask  */


/* -------- SDMMC_CC2R : (SDMMC Offset: 0x20C) (R/W 32) Clock Control 2 Register -------- */
#define SDMMC_CC2R_FSDCLKD_Pos                _U_(0)                                               /**< (SDMMC_CC2R) Force SDCLK Disabled Position */
#define SDMMC_CC2R_FSDCLKD_Msk                (_U_(0x1) << SDMMC_CC2R_FSDCLKD_Pos)                 /**< (SDMMC_CC2R) Force SDCLK Disabled Mask */
#define SDMMC_CC2R_FSDCLKD(value)             (SDMMC_CC2R_FSDCLKD_Msk & ((value) << SDMMC_CC2R_FSDCLKD_Pos))
#define SDMMC_CC2R_Msk                        _U_(0x00000001)                                      /**< (SDMMC_CC2R) Register Mask  */


/* -------- SDMMC_RTC1R : (SDMMC Offset: 0x210) (R/W 8) Retuning Timer Control 1 Register -------- */
#define SDMMC_RTC1R_TMREN_Pos                 _U_(0)                                               /**< (SDMMC_RTC1R) Retuning Timer Enable Position */
#define SDMMC_RTC1R_TMREN_Msk                 (_U_(0x1) << SDMMC_RTC1R_TMREN_Pos)                  /**< (SDMMC_RTC1R) Retuning Timer Enable Mask */
#define SDMMC_RTC1R_TMREN(value)              (SDMMC_RTC1R_TMREN_Msk & ((value) << SDMMC_RTC1R_TMREN_Pos))
#define   SDMMC_RTC1R_TMREN_DISABLED_Val      _U_(0x0)                                             /**< (SDMMC_RTC1R) The retuning timer is disabled.  */
#define   SDMMC_RTC1R_TMREN_ENABLED_Val       _U_(0x1)                                             /**< (SDMMC_RTC1R) The retuning timer is enabled.  */
#define SDMMC_RTC1R_TMREN_DISABLED            (SDMMC_RTC1R_TMREN_DISABLED_Val << SDMMC_RTC1R_TMREN_Pos) /**< (SDMMC_RTC1R) The retuning timer is disabled. Position  */
#define SDMMC_RTC1R_TMREN_ENABLED             (SDMMC_RTC1R_TMREN_ENABLED_Val << SDMMC_RTC1R_TMREN_Pos) /**< (SDMMC_RTC1R) The retuning timer is enabled. Position  */
#define SDMMC_RTC1R_Msk                       _U_(0x01)                                            /**< (SDMMC_RTC1R) Register Mask  */


/* -------- SDMMC_RTC2R : (SDMMC Offset: 0x211) ( /W 8) Retuning Timer Control 2 Register -------- */
#define SDMMC_RTC2R_RLD_Pos                   _U_(0)                                               /**< (SDMMC_RTC2R) Retuning Timer Reload Position */
#define SDMMC_RTC2R_RLD_Msk                   (_U_(0x1) << SDMMC_RTC2R_RLD_Pos)                    /**< (SDMMC_RTC2R) Retuning Timer Reload Mask */
#define SDMMC_RTC2R_RLD(value)                (SDMMC_RTC2R_RLD_Msk & ((value) << SDMMC_RTC2R_RLD_Pos))
#define SDMMC_RTC2R_Msk                       _U_(0x01)                                            /**< (SDMMC_RTC2R) Register Mask  */


/* -------- SDMMC_RTCVR : (SDMMC Offset: 0x214) (R/W 32) Retuning Timer Counter Value Register -------- */
#define SDMMC_RTCVR_TCVAL_Pos                 _U_(0)                                               /**< (SDMMC_RTCVR) Retuning Timer Counter Value Position */
#define SDMMC_RTCVR_TCVAL_Msk                 (_U_(0xF) << SDMMC_RTCVR_TCVAL_Pos)                  /**< (SDMMC_RTCVR) Retuning Timer Counter Value Mask */
#define SDMMC_RTCVR_TCVAL(value)              (SDMMC_RTCVR_TCVAL_Msk & ((value) << SDMMC_RTCVR_TCVAL_Pos))
#define SDMMC_RTCVR_Msk                       _U_(0x0000000F)                                      /**< (SDMMC_RTCVR) Register Mask  */


/* -------- SDMMC_RTISTER : (SDMMC Offset: 0x218) (R/W 8) Retuning Timer Interrupt Status Enable Register -------- */
#define SDMMC_RTISTER_TEVT_Pos                _U_(0)                                               /**< (SDMMC_RTISTER) Retuning Timer Event Position */
#define SDMMC_RTISTER_TEVT_Msk                (_U_(0x1) << SDMMC_RTISTER_TEVT_Pos)                 /**< (SDMMC_RTISTER) Retuning Timer Event Mask */
#define SDMMC_RTISTER_TEVT(value)             (SDMMC_RTISTER_TEVT_Msk & ((value) << SDMMC_RTISTER_TEVT_Pos))
#define   SDMMC_RTISTER_TEVT_MASKED_Val       _U_(0x0)                                             /**< (SDMMC_RTISTER) The TEVT status flag in SDMMC_RTISTR is masked.  */
#define   SDMMC_RTISTER_TEVT_ENABLED_Val      _U_(0x1)                                             /**< (SDMMC_RTISTER) The TEVT status flag in SDMMC_RTISTR is enabled.  */
#define SDMMC_RTISTER_TEVT_MASKED             (SDMMC_RTISTER_TEVT_MASKED_Val << SDMMC_RTISTER_TEVT_Pos) /**< (SDMMC_RTISTER) The TEVT status flag in SDMMC_RTISTR is masked. Position  */
#define SDMMC_RTISTER_TEVT_ENABLED            (SDMMC_RTISTER_TEVT_ENABLED_Val << SDMMC_RTISTER_TEVT_Pos) /**< (SDMMC_RTISTER) The TEVT status flag in SDMMC_RTISTR is enabled. Position  */
#define SDMMC_RTISTER_Msk                     _U_(0x01)                                            /**< (SDMMC_RTISTER) Register Mask  */


/* -------- SDMMC_RTISIER : (SDMMC Offset: 0x219) (R/W 8) Retuning Timer Interrupt Signal Enable Register -------- */
#define SDMMC_RTISIER_TEVT_Pos                _U_(0)                                               /**< (SDMMC_RTISIER) Retuning Timer Event Position */
#define SDMMC_RTISIER_TEVT_Msk                (_U_(0x1) << SDMMC_RTISIER_TEVT_Pos)                 /**< (SDMMC_RTISIER) Retuning Timer Event Mask */
#define SDMMC_RTISIER_TEVT(value)             (SDMMC_RTISIER_TEVT_Msk & ((value) << SDMMC_RTISIER_TEVT_Pos))
#define   SDMMC_RTISIER_TEVT_MASKED_Val       _U_(0x0)                                             /**< (SDMMC_RTISIER) No interrupt is generated when the TEVT status rises in SDMMC_RTISTR.  */
#define   SDMMC_RTISIER_TEVT_ENABLED_Val      _U_(0x1)                                             /**< (SDMMC_RTISIER) An interrupt is generated when the TEVT status rises in SDMMC_RTISTR.  */
#define SDMMC_RTISIER_TEVT_MASKED             (SDMMC_RTISIER_TEVT_MASKED_Val << SDMMC_RTISIER_TEVT_Pos) /**< (SDMMC_RTISIER) No interrupt is generated when the TEVT status rises in SDMMC_RTISTR. Position  */
#define SDMMC_RTISIER_TEVT_ENABLED            (SDMMC_RTISIER_TEVT_ENABLED_Val << SDMMC_RTISIER_TEVT_Pos) /**< (SDMMC_RTISIER) An interrupt is generated when the TEVT status rises in SDMMC_RTISTR. Position  */
#define SDMMC_RTISIER_Msk                     _U_(0x01)                                            /**< (SDMMC_RTISIER) Register Mask  */


/* -------- SDMMC_RTISTR : (SDMMC Offset: 0x21C) (R/W 8) Retuning Timer Interrupt Status Register -------- */
#define SDMMC_RTISTR_TEVT_Pos                 _U_(0)                                               /**< (SDMMC_RTISTR) Retuning Timer Event Position */
#define SDMMC_RTISTR_TEVT_Msk                 (_U_(0x1) << SDMMC_RTISTR_TEVT_Pos)                  /**< (SDMMC_RTISTR) Retuning Timer Event Mask */
#define SDMMC_RTISTR_TEVT(value)              (SDMMC_RTISTR_TEVT_Msk & ((value) << SDMMC_RTISTR_TEVT_Pos))
#define SDMMC_RTISTR_Msk                      _U_(0x01)                                            /**< (SDMMC_RTISTR) Register Mask  */


/* -------- SDMMC_RTSSR : (SDMMC Offset: 0x21D) ( R/ 8) Retuning Timer Status Slots Register -------- */
#define SDMMC_RTSSR_TEVTSLOT_Pos              _U_(0)                                               /**< (SDMMC_RTSSR) Retuning Timer Event Slots Position */
#define SDMMC_RTSSR_TEVTSLOT_Msk              (_U_(0x3) << SDMMC_RTSSR_TEVTSLOT_Pos)               /**< (SDMMC_RTSSR) Retuning Timer Event Slots Mask */
#define SDMMC_RTSSR_TEVTSLOT(value)           (SDMMC_RTSSR_TEVTSLOT_Msk & ((value) << SDMMC_RTSSR_TEVTSLOT_Pos))
#define SDMMC_RTSSR_Msk                       _U_(0x03)                                            /**< (SDMMC_RTSSR) Register Mask  */


/* -------- SDMMC_TUNCR : (SDMMC Offset: 0x220) (R/W 32) Tuning Control Register -------- */
#define SDMMC_TUNCR_SMPLPT_Pos                _U_(0)                                               /**< (SDMMC_TUNCR) Sampling Point Position */
#define SDMMC_TUNCR_SMPLPT_Msk                (_U_(0x1) << SDMMC_TUNCR_SMPLPT_Pos)                 /**< (SDMMC_TUNCR) Sampling Point Mask */
#define SDMMC_TUNCR_SMPLPT(value)             (SDMMC_TUNCR_SMPLPT_Msk & ((value) << SDMMC_TUNCR_SMPLPT_Pos))
#define SDMMC_TUNCR_Msk                       _U_(0x00000001)                                      /**< (SDMMC_TUNCR) Register Mask  */


/* -------- SDMMC_CACR : (SDMMC Offset: 0x230) (R/W 32) Capabilities Control Register -------- */
#define SDMMC_CACR_CAPWREN_Pos                _U_(0)                                               /**< (SDMMC_CACR) Capabilities Write Enable Position */
#define SDMMC_CACR_CAPWREN_Msk                (_U_(0x1) << SDMMC_CACR_CAPWREN_Pos)                 /**< (SDMMC_CACR) Capabilities Write Enable Mask */
#define SDMMC_CACR_CAPWREN(value)             (SDMMC_CACR_CAPWREN_Msk & ((value) << SDMMC_CACR_CAPWREN_Pos))
#define SDMMC_CACR_KEY_Pos                    _U_(8)                                               /**< (SDMMC_CACR) Key Position */
#define SDMMC_CACR_KEY_Msk                    (_U_(0xFF) << SDMMC_CACR_KEY_Pos)                    /**< (SDMMC_CACR) Key Mask */
#define SDMMC_CACR_KEY(value)                 (SDMMC_CACR_KEY_Msk & ((value) << SDMMC_CACR_KEY_Pos))
#define SDMMC_CACR_Msk                        _U_(0x0000FF01)                                      /**< (SDMMC_CACR) Register Mask  */


/* -------- SDMMC_CALCR : (SDMMC Offset: 0x240) (R/W 32) Calibration Control Register -------- */
#define SDMMC_CALCR_EN_Pos                    _U_(0)                                               /**< (SDMMC_CALCR) PADs Calibration Enable Position */
#define SDMMC_CALCR_EN_Msk                    (_U_(0x1) << SDMMC_CALCR_EN_Pos)                     /**< (SDMMC_CALCR) PADs Calibration Enable Mask */
#define SDMMC_CALCR_EN(value)                 (SDMMC_CALCR_EN_Msk & ((value) << SDMMC_CALCR_EN_Pos))
#define SDMMC_CALCR_ALWYSON_Pos               _U_(4)                                               /**< (SDMMC_CALCR) Calibration Analog Always ON Position */
#define SDMMC_CALCR_ALWYSON_Msk               (_U_(0x1) << SDMMC_CALCR_ALWYSON_Pos)                /**< (SDMMC_CALCR) Calibration Analog Always ON Mask */
#define SDMMC_CALCR_ALWYSON(value)            (SDMMC_CALCR_ALWYSON_Msk & ((value) << SDMMC_CALCR_ALWYSON_Pos))
#define SDMMC_CALCR_TUNDIS_Pos                _U_(5)                                               /**< (SDMMC_CALCR) Calibration During Tuning Disabled Position */
#define SDMMC_CALCR_TUNDIS_Msk                (_U_(0x1) << SDMMC_CALCR_TUNDIS_Pos)                 /**< (SDMMC_CALCR) Calibration During Tuning Disabled Mask */
#define SDMMC_CALCR_TUNDIS(value)             (SDMMC_CALCR_TUNDIS_Msk & ((value) << SDMMC_CALCR_TUNDIS_Pos))
#define SDMMC_CALCR_CNTVAL_Pos                _U_(8)                                               /**< (SDMMC_CALCR) Calibration Counter Value Position */
#define SDMMC_CALCR_CNTVAL_Msk                (_U_(0xFF) << SDMMC_CALCR_CNTVAL_Pos)                /**< (SDMMC_CALCR) Calibration Counter Value Mask */
#define SDMMC_CALCR_CNTVAL(value)             (SDMMC_CALCR_CNTVAL_Msk & ((value) << SDMMC_CALCR_CNTVAL_Pos))
#define SDMMC_CALCR_CALN_Pos                  _U_(16)                                              /**< (SDMMC_CALCR) Calibration N Status Position */
#define SDMMC_CALCR_CALN_Msk                  (_U_(0xF) << SDMMC_CALCR_CALN_Pos)                   /**< (SDMMC_CALCR) Calibration N Status Mask */
#define SDMMC_CALCR_CALN(value)               (SDMMC_CALCR_CALN_Msk & ((value) << SDMMC_CALCR_CALN_Pos))
#define SDMMC_CALCR_CALP_Pos                  _U_(24)                                              /**< (SDMMC_CALCR) Calibration P Status Position */
#define SDMMC_CALCR_CALP_Msk                  (_U_(0xF) << SDMMC_CALCR_CALP_Pos)                   /**< (SDMMC_CALCR) Calibration P Status Mask */
#define SDMMC_CALCR_CALP(value)               (SDMMC_CALCR_CALP_Msk & ((value) << SDMMC_CALCR_CALP_Pos))
#define SDMMC_CALCR_Msk                       _U_(0x0F0FFF31)                                      /**< (SDMMC_CALCR) Register Mask  */


/** \brief SDMMC register offsets definitions */
#define SDMMC_SSAR_REG_OFST            (0x00)              /**< (SDMMC_SSAR) SDMA System Address / Argument 2 Register Offset */
#define SDMMC_BSR_REG_OFST             (0x04)              /**< (SDMMC_BSR) Block Size Register Offset */
#define SDMMC_BCR_REG_OFST             (0x06)              /**< (SDMMC_BCR) Block Count Register Offset */
#define SDMMC_ARG1R_REG_OFST           (0x08)              /**< (SDMMC_ARG1R) Argument 1 Register Offset */
#define SDMMC_TMR_REG_OFST             (0x0C)              /**< (SDMMC_TMR) Transfer Mode Register Offset */
#define SDMMC_CR_REG_OFST              (0x0E)              /**< (SDMMC_CR) Command Register Offset */
#define SDMMC_RR_REG_OFST              (0x10)              /**< (SDMMC_RR) Response Register Offset */
#define SDMMC_RR0_REG_OFST             (0x10)              /**< (SDMMC_RR0) Response Register Offset */
#define SDMMC_RR1_REG_OFST             (0x14)              /**< (SDMMC_RR1) Response Register Offset */
#define SDMMC_RR2_REG_OFST             (0x18)              /**< (SDMMC_RR2) Response Register Offset */
#define SDMMC_RR3_REG_OFST             (0x1C)              /**< (SDMMC_RR3) Response Register Offset */
#define SDMMC_BDPR_REG_OFST            (0x20)              /**< (SDMMC_BDPR) Buffer Data Port Register Offset */
#define SDMMC_PSR_REG_OFST             (0x24)              /**< (SDMMC_PSR) Present State Register Offset */
#define SDMMC_HC1R_REG_OFST            (0x28)              /**< (SDMMC_HC1R) Host Control 1 Register Offset */
#define SDMMC_PCR_REG_OFST             (0x29)              /**< (SDMMC_PCR) Power Control Register Offset */
#define SDMMC_BGCR_REG_OFST            (0x2A)              /**< (SDMMC_BGCR) Block Gap Control Register Offset */
#define SDMMC_WCR_REG_OFST             (0x2B)              /**< (SDMMC_WCR) Wakeup Control Register Offset */
#define SDMMC_CCR_REG_OFST             (0x2C)              /**< (SDMMC_CCR) Clock Control Register Offset */
#define SDMMC_TCR_REG_OFST             (0x2E)              /**< (SDMMC_TCR) Timeout Control Register Offset */
#define SDMMC_SRR_REG_OFST             (0x2F)              /**< (SDMMC_SRR) Software Reset Register Offset */
#define SDMMC_NISTR_REG_OFST           (0x30)              /**< (SDMMC_NISTR) Normal Interrupt Status Register Offset */
#define SDMMC_EISTR_REG_OFST           (0x32)              /**< (SDMMC_EISTR) Error Interrupt Status Register Offset */
#define SDMMC_NISTER_REG_OFST          (0x34)              /**< (SDMMC_NISTER) Normal Interrupt Status Enable Register Offset */
#define SDMMC_EISTER_REG_OFST          (0x36)              /**< (SDMMC_EISTER) Error Interrupt Status Enable Register Offset */
#define SDMMC_NISIER_REG_OFST          (0x38)              /**< (SDMMC_NISIER) Normal Interrupt Signal Enable Register Offset */
#define SDMMC_EISIER_REG_OFST          (0x3A)              /**< (SDMMC_EISIER) Error Interrupt Signal Enable Register Offset */
#define SDMMC_ACESR_REG_OFST           (0x3C)              /**< (SDMMC_ACESR) Auto CMD Error Status Register Offset */
#define SDMMC_HC2R_REG_OFST            (0x3E)              /**< (SDMMC_HC2R) Host Control 2 Register Offset */
#define SDMMC_CA0R_REG_OFST            (0x40)              /**< (SDMMC_CA0R) Capabilities 0 Register Offset */
#define SDMMC_CA1R_REG_OFST            (0x44)              /**< (SDMMC_CA1R) Capabilities 1 Register Offset */
#define SDMMC_MCCAR_REG_OFST           (0x48)              /**< (SDMMC_MCCAR) Maximum Current Capabilities Register Offset */
#define SDMMC_FERACES_REG_OFST         (0x50)              /**< (SDMMC_FERACES) Force Event Register for Auto CMD Error Status Offset */
#define SDMMC_FEREIS_REG_OFST          (0x52)              /**< (SDMMC_FEREIS) Force Event Register for Error Interrupt Status Offset */
#define SDMMC_AESR_REG_OFST            (0x54)              /**< (SDMMC_AESR) ADMA Error Status Register Offset */
#define SDMMC_ASAR0_REG_OFST           (0x58)              /**< (SDMMC_ASAR0) ADMA System Address Register 0 Offset */
#define SDMMC_PVR_REG_OFST             (0x60)              /**< (SDMMC_PVR) Preset Value Register 0 (for initialization) Offset */
#define SDMMC_PVR0_REG_OFST            (0x60)              /**< (SDMMC_PVR0) Preset Value Register 0 (for initialization) Offset */
#define SDMMC_PVR1_REG_OFST            (0x62)              /**< (SDMMC_PVR1) Preset Value Register 0 (for initialization) Offset */
#define SDMMC_PVR2_REG_OFST            (0x64)              /**< (SDMMC_PVR2) Preset Value Register 0 (for initialization) Offset */
#define SDMMC_PVR3_REG_OFST            (0x66)              /**< (SDMMC_PVR3) Preset Value Register 0 (for initialization) Offset */
#define SDMMC_PVR4_REG_OFST            (0x68)              /**< (SDMMC_PVR4) Preset Value Register 0 (for initialization) Offset */
#define SDMMC_PVR5_REG_OFST            (0x6A)              /**< (SDMMC_PVR5) Preset Value Register 0 (for initialization) Offset */
#define SDMMC_PVR6_REG_OFST            (0x6C)              /**< (SDMMC_PVR6) Preset Value Register 0 (for initialization) Offset */
#define SDMMC_PVR7_REG_OFST            (0x6E)              /**< (SDMMC_PVR7) Preset Value Register 0 (for initialization) Offset */
#define SDMMC_SISR_REG_OFST            (0xFC)              /**< (SDMMC_SISR) Slot Interrupt Status Register Offset */
#define SDMMC_HCVR_REG_OFST            (0xFE)              /**< (SDMMC_HCVR) Host Controller Version Register Offset */
#define SDMMC_APSR_REG_OFST            (0x200)             /**< (SDMMC_APSR) Additional Present State Register Offset */
#define SDMMC_MC1R_REG_OFST            (0x204)             /**< (SDMMC_MC1R) e.MMC Control 1 Register Offset */
#define SDMMC_MC2R_REG_OFST            (0x205)             /**< (SDMMC_MC2R) e.MMC Control 2 Register Offset */
#define SDMMC_ACR_REG_OFST             (0x208)             /**< (SDMMC_ACR) AHB Control Register Offset */
#define SDMMC_CC2R_REG_OFST            (0x20C)             /**< (SDMMC_CC2R) Clock Control 2 Register Offset */
#define SDMMC_RTC1R_REG_OFST           (0x210)             /**< (SDMMC_RTC1R) Retuning Timer Control 1 Register Offset */
#define SDMMC_RTC2R_REG_OFST           (0x211)             /**< (SDMMC_RTC2R) Retuning Timer Control 2 Register Offset */
#define SDMMC_RTCVR_REG_OFST           (0x214)             /**< (SDMMC_RTCVR) Retuning Timer Counter Value Register Offset */
#define SDMMC_RTISTER_REG_OFST         (0x218)             /**< (SDMMC_RTISTER) Retuning Timer Interrupt Status Enable Register Offset */
#define SDMMC_RTISIER_REG_OFST         (0x219)             /**< (SDMMC_RTISIER) Retuning Timer Interrupt Signal Enable Register Offset */
#define SDMMC_RTISTR_REG_OFST          (0x21C)             /**< (SDMMC_RTISTR) Retuning Timer Interrupt Status Register Offset */
#define SDMMC_RTSSR_REG_OFST           (0x21D)             /**< (SDMMC_RTSSR) Retuning Timer Status Slots Register Offset */
#define SDMMC_TUNCR_REG_OFST           (0x220)             /**< (SDMMC_TUNCR) Tuning Control Register Offset */
#define SDMMC_CACR_REG_OFST            (0x230)             /**< (SDMMC_CACR) Capabilities Control Register Offset */
#define SDMMC_CALCR_REG_OFST           (0x240)             /**< (SDMMC_CALCR) Calibration Control Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SDMMC register API structure */
typedef struct
{
  __IO  uint32_t                       SDMMC_SSAR;         /**< Offset: 0x00 (R/W  32) SDMA System Address / Argument 2 Register */
  __IO  uint16_t                       SDMMC_BSR;          /**< Offset: 0x04 (R/W  16) Block Size Register */
  __IO  uint16_t                       SDMMC_BCR;          /**< Offset: 0x06 (R/W  16) Block Count Register */
  __IO  uint32_t                       SDMMC_ARG1R;        /**< Offset: 0x08 (R/W  32) Argument 1 Register */
  __IO  uint16_t                       SDMMC_TMR;          /**< Offset: 0x0C (R/W  16) Transfer Mode Register */
  __IO  uint16_t                       SDMMC_CR;           /**< Offset: 0x0E (R/W  16) Command Register */
  __I   uint32_t                       SDMMC_RR[4];        /**< Offset: 0x10 (R/   32) Response Register */
  __IO  uint32_t                       SDMMC_BDPR;         /**< Offset: 0x20 (R/W  32) Buffer Data Port Register */
  __I   uint32_t                       SDMMC_PSR;          /**< Offset: 0x24 (R/   32) Present State Register */
  __IO  uint8_t                        SDMMC_HC1R;         /**< Offset: 0x28 (R/W  8) Host Control 1 Register */
  __IO  uint8_t                        SDMMC_PCR;          /**< Offset: 0x29 (R/W  8) Power Control Register */
  __IO  uint8_t                        SDMMC_BGCR;         /**< Offset: 0x2A (R/W  8) Block Gap Control Register */
  __IO  uint8_t                        SDMMC_WCR;          /**< Offset: 0x2B (R/W  8) Wakeup Control Register */
  __IO  uint16_t                       SDMMC_CCR;          /**< Offset: 0x2C (R/W  16) Clock Control Register */
  __IO  uint8_t                        SDMMC_TCR;          /**< Offset: 0x2E (R/W  8) Timeout Control Register */
  __IO  uint8_t                        SDMMC_SRR;          /**< Offset: 0x2F (R/W  8) Software Reset Register */
  __IO  uint16_t                       SDMMC_NISTR;        /**< Offset: 0x30 (R/W  16) Normal Interrupt Status Register */
  __IO  uint16_t                       SDMMC_EISTR;        /**< Offset: 0x32 (R/W  16) Error Interrupt Status Register */
  __IO  uint16_t                       SDMMC_NISTER;       /**< Offset: 0x34 (R/W  16) Normal Interrupt Status Enable Register */
  __IO  uint16_t                       SDMMC_EISTER;       /**< Offset: 0x36 (R/W  16) Error Interrupt Status Enable Register */
  __IO  uint16_t                       SDMMC_NISIER;       /**< Offset: 0x38 (R/W  16) Normal Interrupt Signal Enable Register */
  __IO  uint16_t                       SDMMC_EISIER;       /**< Offset: 0x3A (R/W  16) Error Interrupt Signal Enable Register */
  __I   uint16_t                       SDMMC_ACESR;        /**< Offset: 0x3C (R/   16) Auto CMD Error Status Register */
  __IO  uint16_t                       SDMMC_HC2R;         /**< Offset: 0x3E (R/W  16) Host Control 2 Register */
  __I   uint32_t                       SDMMC_CA0R;         /**< Offset: 0x40 (R/   32) Capabilities 0 Register */
  __IO  uint32_t                       SDMMC_CA1R;         /**< Offset: 0x44 (R/W  32) Capabilities 1 Register */
  __IO  uint32_t                       SDMMC_MCCAR;        /**< Offset: 0x48 (R/W  32) Maximum Current Capabilities Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint16_t                       SDMMC_FERACES;      /**< Offset: 0x50 ( /W  16) Force Event Register for Auto CMD Error Status */
  __O   uint16_t                       SDMMC_FEREIS;       /**< Offset: 0x52 ( /W  16) Force Event Register for Error Interrupt Status */
  __I   uint8_t                        SDMMC_AESR;         /**< Offset: 0x54 (R/   8) ADMA Error Status Register */
  __I   uint8_t                        Reserved2[0x03];
  __IO  uint32_t                       SDMMC_ASAR0;        /**< Offset: 0x58 (R/W  32) ADMA System Address Register 0 */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint16_t                       SDMMC_PVR[8];       /**< Offset: 0x60 (R/W  16) Preset Value Register 0 (for initialization) */
  __I   uint8_t                        Reserved4[0x8C];
  __I   uint16_t                       SDMMC_SISR;         /**< Offset: 0xFC (R/   16) Slot Interrupt Status Register */
  __I   uint16_t                       SDMMC_HCVR;         /**< Offset: 0xFE (R/   16) Host Controller Version Register */
  __I   uint8_t                        Reserved5[0x100];
  __I   uint32_t                       SDMMC_APSR;         /**< Offset: 0x200 (R/   32) Additional Present State Register */
  __IO  uint8_t                        SDMMC_MC1R;         /**< Offset: 0x204 (R/W  8) e.MMC Control 1 Register */
  __O   uint8_t                        SDMMC_MC2R;         /**< Offset: 0x205 ( /W  8) e.MMC Control 2 Register */
  __I   uint8_t                        Reserved6[0x02];
  __IO  uint32_t                       SDMMC_ACR;          /**< Offset: 0x208 (R/W  32) AHB Control Register */
  __IO  uint32_t                       SDMMC_CC2R;         /**< Offset: 0x20C (R/W  32) Clock Control 2 Register */
  __IO  uint8_t                        SDMMC_RTC1R;        /**< Offset: 0x210 (R/W  8) Retuning Timer Control 1 Register */
  __O   uint8_t                        SDMMC_RTC2R;        /**< Offset: 0x211 ( /W  8) Retuning Timer Control 2 Register */
  __I   uint8_t                        Reserved7[0x02];
  __IO  uint32_t                       SDMMC_RTCVR;        /**< Offset: 0x214 (R/W  32) Retuning Timer Counter Value Register */
  __IO  uint8_t                        SDMMC_RTISTER;      /**< Offset: 0x218 (R/W  8) Retuning Timer Interrupt Status Enable Register */
  __IO  uint8_t                        SDMMC_RTISIER;      /**< Offset: 0x219 (R/W  8) Retuning Timer Interrupt Signal Enable Register */
  __I   uint8_t                        Reserved8[0x02];
  __IO  uint8_t                        SDMMC_RTISTR;       /**< Offset: 0x21C (R/W  8) Retuning Timer Interrupt Status Register */
  __I   uint8_t                        SDMMC_RTSSR;        /**< Offset: 0x21D (R/   8) Retuning Timer Status Slots Register */
  __I   uint8_t                        Reserved9[0x02];
  __IO  uint32_t                       SDMMC_TUNCR;        /**< Offset: 0x220 (R/W  32) Tuning Control Register */
  __I   uint8_t                        Reserved10[0x0C];
  __IO  uint32_t                       SDMMC_CACR;         /**< Offset: 0x230 (R/W  32) Capabilities Control Register */
  __I   uint8_t                        Reserved11[0x0C];
  __IO  uint32_t                       SDMMC_CALCR;        /**< Offset: 0x240 (R/W  32) Calibration Control Register */
} sdmmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_SDMMC_COMPONENT_H_ */
