/*
 * Component description for MPDDRC
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
#ifndef _SAM9X_MPDDRC_COMPONENT_H_
#define _SAM9X_MPDDRC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MPDDRC                                       */
/* ************************************************************************** */

/* -------- MPDDRC_MR : (MPDDRC Offset: 0x00) (R/W 32) Mode Register -------- */
#define MPDDRC_MR_MODE_Pos                    _U_(0)                                               /**< (MPDDRC_MR) MPDDRC Command Mode Position */
#define MPDDRC_MR_MODE_Msk                    (_U_(0x7) << MPDDRC_MR_MODE_Pos)                     /**< (MPDDRC_MR) MPDDRC Command Mode Mask */
#define MPDDRC_MR_MODE(value)                 (MPDDRC_MR_MODE_Msk & ((value) << MPDDRC_MR_MODE_Pos))
#define   MPDDRC_MR_MODE_NORMAL_CMD_Val       _U_(0x0)                                             /**< (MPDDRC_MR) Normal Mode. Any access to the MPDDRC is decoded normally. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_NOP_CMD_Val          _U_(0x1)                                             /**< (MPDDRC_MR) The MPDDRC issues a NOP command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_PRCGALL_CMD_Val      _U_(0x2)                                             /**< (MPDDRC_MR) The MPDDRC issues the All Banks Precharge command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the SDRAM.  */
#define   MPDDRC_MR_MODE_LMR_CMD_Val          _U_(0x3)                                             /**< (MPDDRC_MR) The MPDDRC issues a Load Mode Register command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_RFSH_CMD_Val         _U_(0x4)                                             /**< (MPDDRC_MR) The MPDDRC issues an Autorefresh command when the DDR-SDRAM device is accessed regardless of the cycle. Previously, an All Banks Precharge command must be issued. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_EXT_LMR_CMD_Val      _U_(0x5)                                             /**< (MPDDRC_MR) The MPDDRC issues an Extended Load Mode Register command when the SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. The write in the DDR-SDRAM must be done in the appropriate bank.  */
#define   MPDDRC_MR_MODE_DEEP_MD_Val          _U_(0x6)                                             /**< (MPDDRC_MR) Deep Power mode: Access to Deep Powerdown mode  */
#define MPDDRC_MR_MODE_NORMAL_CMD             (MPDDRC_MR_MODE_NORMAL_CMD_Val << MPDDRC_MR_MODE_Pos) /**< (MPDDRC_MR) Normal Mode. Any access to the MPDDRC is decoded normally. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position  */
#define MPDDRC_MR_MODE_NOP_CMD                (MPDDRC_MR_MODE_NOP_CMD_Val << MPDDRC_MR_MODE_Pos)   /**< (MPDDRC_MR) The MPDDRC issues a NOP command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position  */
#define MPDDRC_MR_MODE_PRCGALL_CMD            (MPDDRC_MR_MODE_PRCGALL_CMD_Val << MPDDRC_MR_MODE_Pos) /**< (MPDDRC_MR) The MPDDRC issues the All Banks Precharge command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the SDRAM. Position  */
#define MPDDRC_MR_MODE_LMR_CMD                (MPDDRC_MR_MODE_LMR_CMD_Val << MPDDRC_MR_MODE_Pos)   /**< (MPDDRC_MR) The MPDDRC issues a Load Mode Register command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position  */
#define MPDDRC_MR_MODE_RFSH_CMD               (MPDDRC_MR_MODE_RFSH_CMD_Val << MPDDRC_MR_MODE_Pos)  /**< (MPDDRC_MR) The MPDDRC issues an Autorefresh command when the DDR-SDRAM device is accessed regardless of the cycle. Previously, an All Banks Precharge command must be issued. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position  */
#define MPDDRC_MR_MODE_EXT_LMR_CMD            (MPDDRC_MR_MODE_EXT_LMR_CMD_Val << MPDDRC_MR_MODE_Pos) /**< (MPDDRC_MR) The MPDDRC issues an Extended Load Mode Register command when the SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. The write in the DDR-SDRAM must be done in the appropriate bank. Position  */
#define MPDDRC_MR_MODE_DEEP_MD                (MPDDRC_MR_MODE_DEEP_MD_Val << MPDDRC_MR_MODE_Pos)   /**< (MPDDRC_MR) Deep Power mode: Access to Deep Powerdown mode Position  */
#define MPDDRC_MR_Msk                         _U_(0x00000007)                                      /**< (MPDDRC_MR) Register Mask  */


/* -------- MPDDRC_RTR : (MPDDRC Offset: 0x04) (R/W 32) Refresh Timer Register -------- */
#define MPDDRC_RTR_COUNT_Pos                  _U_(0)                                               /**< (MPDDRC_RTR) MPDDRC Refresh Timer Count Position */
#define MPDDRC_RTR_COUNT_Msk                  (_U_(0xFFF) << MPDDRC_RTR_COUNT_Pos)                 /**< (MPDDRC_RTR) MPDDRC Refresh Timer Count Mask */
#define MPDDRC_RTR_COUNT(value)               (MPDDRC_RTR_COUNT_Msk & ((value) << MPDDRC_RTR_COUNT_Pos))
#define MPDDRC_RTR_Msk                        _U_(0x00000FFF)                                      /**< (MPDDRC_RTR) Register Mask  */


/* -------- MPDDRC_CR : (MPDDRC Offset: 0x08) (R/W 32) Configuration Register -------- */
#define MPDDRC_CR_NC_Pos                      _U_(0)                                               /**< (MPDDRC_CR) Number of Column Bits Position */
#define MPDDRC_CR_NC_Msk                      (_U_(0x3) << MPDDRC_CR_NC_Pos)                       /**< (MPDDRC_CR) Number of Column Bits Mask */
#define MPDDRC_CR_NC(value)                   (MPDDRC_CR_NC_Msk & ((value) << MPDDRC_CR_NC_Pos))  
#define   MPDDRC_CR_NC_DDR9_MDDR8_COL_BITS_Val _U_(0x0)                                             /**< (MPDDRC_CR) 9 bits to define the column number, up to 512 columns, for DDR2-SDRAM 8 bits to define the column number, up to 256 columns, for LPDDR1-SDRAM  */
#define   MPDDRC_CR_NC_DDR10_MDDR9_COL_BITS_Val _U_(0x1)                                             /**< (MPDDRC_CR) 10 bits to define the column number, up to 1024 columns, for DDR2-SDRAM 9 bits to define the column number, up to 512 columns, for LPDDR1-SDRAM  */
#define   MPDDRC_CR_NC_DDR11_MDDR10_COL_BITS_Val _U_(0x2)                                             /**< (MPDDRC_CR) 11 bits to define the column number, up to 2048 columns, for DDR2-SDRAM 10 bits to define the column number, up to 1024 columns, for LPDDR1-SDRAM  */
#define   MPDDRC_CR_NC_DDR12_MDDR11_COL_BITS_Val _U_(0x3)                                             /**< (MPDDRC_CR) 12 bits to define the column number, up to 4096 columns, for DDR2-SDRAM 11 bits to define the column number, up to 2048 columns, for LPDDR1-SDRAM  */
#define MPDDRC_CR_NC_DDR9_MDDR8_COL_BITS      (MPDDRC_CR_NC_DDR9_MDDR8_COL_BITS_Val << MPDDRC_CR_NC_Pos) /**< (MPDDRC_CR) 9 bits to define the column number, up to 512 columns, for DDR2-SDRAM 8 bits to define the column number, up to 256 columns, for LPDDR1-SDRAM Position  */
#define MPDDRC_CR_NC_DDR10_MDDR9_COL_BITS     (MPDDRC_CR_NC_DDR10_MDDR9_COL_BITS_Val << MPDDRC_CR_NC_Pos) /**< (MPDDRC_CR) 10 bits to define the column number, up to 1024 columns, for DDR2-SDRAM 9 bits to define the column number, up to 512 columns, for LPDDR1-SDRAM Position  */
#define MPDDRC_CR_NC_DDR11_MDDR10_COL_BITS    (MPDDRC_CR_NC_DDR11_MDDR10_COL_BITS_Val << MPDDRC_CR_NC_Pos) /**< (MPDDRC_CR) 11 bits to define the column number, up to 2048 columns, for DDR2-SDRAM 10 bits to define the column number, up to 1024 columns, for LPDDR1-SDRAM Position  */
#define MPDDRC_CR_NC_DDR12_MDDR11_COL_BITS    (MPDDRC_CR_NC_DDR12_MDDR11_COL_BITS_Val << MPDDRC_CR_NC_Pos) /**< (MPDDRC_CR) 12 bits to define the column number, up to 4096 columns, for DDR2-SDRAM 11 bits to define the column number, up to 2048 columns, for LPDDR1-SDRAM Position  */
#define MPDDRC_CR_NR_Pos                      _U_(2)                                               /**< (MPDDRC_CR) Number of Row Bits. Position */
#define MPDDRC_CR_NR_Msk                      (_U_(0x3) << MPDDRC_CR_NR_Pos)                       /**< (MPDDRC_CR) Number of Row Bits. Mask */
#define MPDDRC_CR_NR(value)                   (MPDDRC_CR_NR_Msk & ((value) << MPDDRC_CR_NR_Pos))  
#define   MPDDRC_CR_NR_11_ROW_BITS_Val        _U_(0x0)                                             /**< (MPDDRC_CR) 11 bits to define the row number, up to 2048 rows  */
#define   MPDDRC_CR_NR_12_ROW_BITS_Val        _U_(0x1)                                             /**< (MPDDRC_CR) 12 bits to define the row number, up to 4096 rows  */
#define   MPDDRC_CR_NR_13_ROW_BITS_Val        _U_(0x2)                                             /**< (MPDDRC_CR) 13 bits to define the row number, up to 8192 rows  */
#define   MPDDRC_CR_NR_14_ROW_BITS_Val        _U_(0x3)                                             /**< (MPDDRC_CR) 14 bits to define the row number, up to 16384 rows  */
#define MPDDRC_CR_NR_11_ROW_BITS              (MPDDRC_CR_NR_11_ROW_BITS_Val << MPDDRC_CR_NR_Pos)   /**< (MPDDRC_CR) 11 bits to define the row number, up to 2048 rows Position  */
#define MPDDRC_CR_NR_12_ROW_BITS              (MPDDRC_CR_NR_12_ROW_BITS_Val << MPDDRC_CR_NR_Pos)   /**< (MPDDRC_CR) 12 bits to define the row number, up to 4096 rows Position  */
#define MPDDRC_CR_NR_13_ROW_BITS              (MPDDRC_CR_NR_13_ROW_BITS_Val << MPDDRC_CR_NR_Pos)   /**< (MPDDRC_CR) 13 bits to define the row number, up to 8192 rows Position  */
#define MPDDRC_CR_NR_14_ROW_BITS              (MPDDRC_CR_NR_14_ROW_BITS_Val << MPDDRC_CR_NR_Pos)   /**< (MPDDRC_CR) 14 bits to define the row number, up to 16384 rows Position  */
#define MPDDRC_CR_CAS_Pos                     _U_(4)                                               /**< (MPDDRC_CR) CAS Latency Position */
#define MPDDRC_CR_CAS_Msk                     (_U_(0x7) << MPDDRC_CR_CAS_Pos)                      /**< (MPDDRC_CR) CAS Latency Mask */
#define MPDDRC_CR_CAS(value)                  (MPDDRC_CR_CAS_Msk & ((value) << MPDDRC_CR_CAS_Pos))
#define   MPDDRC_CR_CAS_DDR_CAS2_Val          _U_(0x2)                                             /**< (MPDDRC_CR) LPDDR1 CAS Latency 2  */
#define   MPDDRC_CR_CAS_DDR_CAS3_Val          _U_(0x3)                                             /**< (MPDDRC_CR) DDR2/LPDDR1 CAS Latency 3  */
#define MPDDRC_CR_CAS_DDR_CAS2                (MPDDRC_CR_CAS_DDR_CAS2_Val << MPDDRC_CR_CAS_Pos)    /**< (MPDDRC_CR) LPDDR1 CAS Latency 2 Position  */
#define MPDDRC_CR_CAS_DDR_CAS3                (MPDDRC_CR_CAS_DDR_CAS3_Val << MPDDRC_CR_CAS_Pos)    /**< (MPDDRC_CR) DDR2/LPDDR1 CAS Latency 3 Position  */
#define MPDDRC_CR_DLL_Pos                     _U_(7)                                               /**< (MPDDRC_CR) Reset DLL Position */
#define MPDDRC_CR_DLL_Msk                     (_U_(0x1) << MPDDRC_CR_DLL_Pos)                      /**< (MPDDRC_CR) Reset DLL Mask */
#define MPDDRC_CR_DLL(value)                  (MPDDRC_CR_DLL_Msk & ((value) << MPDDRC_CR_DLL_Pos))
#define   MPDDRC_CR_DLL_RESET_DISABLED_Val    _U_(0x0)                                             /**< (MPDDRC_CR) Disable DLL reset  */
#define   MPDDRC_CR_DLL_RESET_ENABLED_Val     _U_(0x1)                                             /**< (MPDDRC_CR) Enable DLL reset  */
#define MPDDRC_CR_DLL_RESET_DISABLED          (MPDDRC_CR_DLL_RESET_DISABLED_Val << MPDDRC_CR_DLL_Pos) /**< (MPDDRC_CR) Disable DLL reset Position  */
#define MPDDRC_CR_DLL_RESET_ENABLED           (MPDDRC_CR_DLL_RESET_ENABLED_Val << MPDDRC_CR_DLL_Pos) /**< (MPDDRC_CR) Enable DLL reset Position  */
#define MPDDRC_CR_DIC_DS_Pos                  _U_(8)                                               /**< (MPDDRC_CR) Output Driver Impedance Control (Drive Strength) Position */
#define MPDDRC_CR_DIC_DS_Msk                  (_U_(0x1) << MPDDRC_CR_DIC_DS_Pos)                   /**< (MPDDRC_CR) Output Driver Impedance Control (Drive Strength) Mask */
#define MPDDRC_CR_DIC_DS(value)               (MPDDRC_CR_DIC_DS_Msk & ((value) << MPDDRC_CR_DIC_DS_Pos))
#define   MPDDRC_CR_DIC_DS_DDR2_NORMALSTRENGTH_Val _U_(0x0)                                             /**< (MPDDRC_CR) Normal drive strength (DDR2)  */
#define   MPDDRC_CR_DIC_DS_DDR2_WEAKSTRENGTH_Val _U_(0x1)                                             /**< (MPDDRC_CR) Weak drive strength (DDR2)  */
#define MPDDRC_CR_DIC_DS_DDR2_NORMALSTRENGTH  (MPDDRC_CR_DIC_DS_DDR2_NORMALSTRENGTH_Val << MPDDRC_CR_DIC_DS_Pos) /**< (MPDDRC_CR) Normal drive strength (DDR2) Position  */
#define MPDDRC_CR_DIC_DS_DDR2_WEAKSTRENGTH    (MPDDRC_CR_DIC_DS_DDR2_WEAKSTRENGTH_Val << MPDDRC_CR_DIC_DS_Pos) /**< (MPDDRC_CR) Weak drive strength (DDR2) Position  */
#define MPDDRC_CR_DIS_DLL_Pos                 _U_(9)                                               /**< (MPDDRC_CR) DISABLE DLL Position */
#define MPDDRC_CR_DIS_DLL_Msk                 (_U_(0x1) << MPDDRC_CR_DIS_DLL_Pos)                  /**< (MPDDRC_CR) DISABLE DLL Mask */
#define MPDDRC_CR_DIS_DLL(value)              (MPDDRC_CR_DIS_DLL_Msk & ((value) << MPDDRC_CR_DIS_DLL_Pos))
#define MPDDRC_CR_OCD_Pos                     _U_(12)                                              /**< (MPDDRC_CR) Off-chip Driver Position */
#define MPDDRC_CR_OCD_Msk                     (_U_(0x7) << MPDDRC_CR_OCD_Pos)                      /**< (MPDDRC_CR) Off-chip Driver Mask */
#define MPDDRC_CR_OCD(value)                  (MPDDRC_CR_OCD_Msk & ((value) << MPDDRC_CR_OCD_Pos))
#define   MPDDRC_CR_OCD_DDR2_EXITCALIB_Val    _U_(0x0)                                             /**< (MPDDRC_CR) Exit from OCD Calibration mode and maintain settings  */
#define   MPDDRC_CR_OCD_DDR2_DEFAULT_CALIB_Val _U_(0x7)                                             /**< (MPDDRC_CR) OCD calibration default  */
#define MPDDRC_CR_OCD_DDR2_EXITCALIB          (MPDDRC_CR_OCD_DDR2_EXITCALIB_Val << MPDDRC_CR_OCD_Pos) /**< (MPDDRC_CR) Exit from OCD Calibration mode and maintain settings Position  */
#define MPDDRC_CR_OCD_DDR2_DEFAULT_CALIB      (MPDDRC_CR_OCD_DDR2_DEFAULT_CALIB_Val << MPDDRC_CR_OCD_Pos) /**< (MPDDRC_CR) OCD calibration default Position  */
#define MPDDRC_CR_DQMS_Pos                    _U_(16)                                              /**< (MPDDRC_CR) Mask Data is Shared Position */
#define MPDDRC_CR_DQMS_Msk                    (_U_(0x1) << MPDDRC_CR_DQMS_Pos)                     /**< (MPDDRC_CR) Mask Data is Shared Mask */
#define MPDDRC_CR_DQMS(value)                 (MPDDRC_CR_DQMS_Msk & ((value) << MPDDRC_CR_DQMS_Pos))
#define   MPDDRC_CR_DQMS_NOT_SHARED_Val       _U_(0x0)                                             /**< (MPDDRC_CR) DQM is not shared with another controller  */
#define   MPDDRC_CR_DQMS_SHARED_Val           _U_(0x1)                                             /**< (MPDDRC_CR) DQM is shared with another controller  */
#define MPDDRC_CR_DQMS_NOT_SHARED             (MPDDRC_CR_DQMS_NOT_SHARED_Val << MPDDRC_CR_DQMS_Pos) /**< (MPDDRC_CR) DQM is not shared with another controller Position  */
#define MPDDRC_CR_DQMS_SHARED                 (MPDDRC_CR_DQMS_SHARED_Val << MPDDRC_CR_DQMS_Pos)    /**< (MPDDRC_CR) DQM is shared with another controller Position  */
#define MPDDRC_CR_LC_LPDDR1_Pos               _U_(19)                                              /**< (MPDDRC_CR) Low-cost Low-power DDR1 Position */
#define MPDDRC_CR_LC_LPDDR1_Msk               (_U_(0x1) << MPDDRC_CR_LC_LPDDR1_Pos)                /**< (MPDDRC_CR) Low-cost Low-power DDR1 Mask */
#define MPDDRC_CR_LC_LPDDR1(value)            (MPDDRC_CR_LC_LPDDR1_Msk & ((value) << MPDDRC_CR_LC_LPDDR1_Pos))
#define   MPDDRC_CR_LC_LPDDR1_NOT_2_BANKS_Val _U_(0x0)                                             /**< (MPDDRC_CR) Any type of memory devices except of low cost, low density Low Power DDR1.  */
#define   MPDDRC_CR_LC_LPDDR1_2_BANKS_LPDDR1_Val _U_(0x1)                                             /**< (MPDDRC_CR) Low-cost and low-density low-power DDR1. These devices have a density of 32 Mbits and are organized as two internal banks. To use this feature, the user has to define the type of memory and the data bus width (see Section 8.8 "MPDDRC Memory Device Register"). The 16-bit memory device is organized as 2 banks, 9 columns and 11 rows.  */
#define MPDDRC_CR_LC_LPDDR1_NOT_2_BANKS       (MPDDRC_CR_LC_LPDDR1_NOT_2_BANKS_Val << MPDDRC_CR_LC_LPDDR1_Pos) /**< (MPDDRC_CR) Any type of memory devices except of low cost, low density Low Power DDR1. Position  */
#define MPDDRC_CR_LC_LPDDR1_2_BANKS_LPDDR1    (MPDDRC_CR_LC_LPDDR1_2_BANKS_LPDDR1_Val << MPDDRC_CR_LC_LPDDR1_Pos) /**< (MPDDRC_CR) Low-cost and low-density low-power DDR1. These devices have a density of 32 Mbits and are organized as two internal banks. To use this feature, the user has to define the type of memory and the data bus width (see Section 8.8 "MPDDRC Memory Device Register"). The 16-bit memory device is organized as 2 banks, 9 columns and 11 rows. Position  */
#define MPDDRC_CR_NB_Pos                      _U_(20)                                              /**< (MPDDRC_CR) Number of Banks Position */
#define MPDDRC_CR_NB_Msk                      (_U_(0x1) << MPDDRC_CR_NB_Pos)                       /**< (MPDDRC_CR) Number of Banks Mask */
#define MPDDRC_CR_NB(value)                   (MPDDRC_CR_NB_Msk & ((value) << MPDDRC_CR_NB_Pos))  
#define   MPDDRC_CR_NB_4_BANKS_Val            _U_(0x0)                                             /**< (MPDDRC_CR) 4-bank memory devices  */
#define   MPDDRC_CR_NB_8_BANKS_Val            _U_(0x1)                                             /**< (MPDDRC_CR) 8 banks. Only possible when using DDR2-SDRAM devices.  */
#define MPDDRC_CR_NB_4_BANKS                  (MPDDRC_CR_NB_4_BANKS_Val << MPDDRC_CR_NB_Pos)       /**< (MPDDRC_CR) 4-bank memory devices Position  */
#define MPDDRC_CR_NB_8_BANKS                  (MPDDRC_CR_NB_8_BANKS_Val << MPDDRC_CR_NB_Pos)       /**< (MPDDRC_CR) 8 banks. Only possible when using DDR2-SDRAM devices. Position  */
#define MPDDRC_CR_NDQS_Pos                    _U_(21)                                              /**< (MPDDRC_CR) Not DQS. Position */
#define MPDDRC_CR_NDQS_Msk                    (_U_(0x1) << MPDDRC_CR_NDQS_Pos)                     /**< (MPDDRC_CR) Not DQS. Mask */
#define MPDDRC_CR_NDQS(value)                 (MPDDRC_CR_NDQS_Msk & ((value) << MPDDRC_CR_NDQS_Pos))
#define   MPDDRC_CR_NDQS_ENABLED_Val          _U_(0x0)                                             /**< (MPDDRC_CR) 'Not DQS' is enabled.  */
#define   MPDDRC_CR_NDQS_DISABLED_Val         _U_(0x1)                                             /**< (MPDDRC_CR) 'Not DQS' is disabled.  */
#define MPDDRC_CR_NDQS_ENABLED                (MPDDRC_CR_NDQS_ENABLED_Val << MPDDRC_CR_NDQS_Pos)   /**< (MPDDRC_CR) 'Not DQS' is enabled. Position  */
#define MPDDRC_CR_NDQS_DISABLED               (MPDDRC_CR_NDQS_DISABLED_Val << MPDDRC_CR_NDQS_Pos)  /**< (MPDDRC_CR) 'Not DQS' is disabled. Position  */
#define MPDDRC_CR_DECOD_Pos                   _U_(22)                                              /**< (MPDDRC_CR) Type of Decoding Position */
#define MPDDRC_CR_DECOD_Msk                   (_U_(0x1) << MPDDRC_CR_DECOD_Pos)                    /**< (MPDDRC_CR) Type of Decoding Mask */
#define MPDDRC_CR_DECOD(value)                (MPDDRC_CR_DECOD_Msk & ((value) << MPDDRC_CR_DECOD_Pos))
#define   MPDDRC_CR_DECOD_SEQUENTIAL_Val      _U_(0x0)                                             /**< (MPDDRC_CR) Method for address mapping where banks alternate at each last DDR-SDRAM page of the current bank.  */
#define   MPDDRC_CR_DECOD_INTERLEAVED_Val     _U_(0x1)                                             /**< (MPDDRC_CR) Method for address mapping where banks alternate at each DDR-SDRAM end of page of the current bank.  */
#define MPDDRC_CR_DECOD_SEQUENTIAL            (MPDDRC_CR_DECOD_SEQUENTIAL_Val << MPDDRC_CR_DECOD_Pos) /**< (MPDDRC_CR) Method for address mapping where banks alternate at each last DDR-SDRAM page of the current bank. Position  */
#define MPDDRC_CR_DECOD_INTERLEAVED           (MPDDRC_CR_DECOD_INTERLEAVED_Val << MPDDRC_CR_DECOD_Pos) /**< (MPDDRC_CR) Method for address mapping where banks alternate at each DDR-SDRAM end of page of the current bank. Position  */
#define MPDDRC_CR_UNAL_Pos                    _U_(23)                                              /**< (MPDDRC_CR) This bit must always be written to 1 Position */
#define MPDDRC_CR_UNAL_Msk                    (_U_(0x1) << MPDDRC_CR_UNAL_Pos)                     /**< (MPDDRC_CR) This bit must always be written to 1 Mask */
#define MPDDRC_CR_UNAL(value)                 (MPDDRC_CR_UNAL_Msk & ((value) << MPDDRC_CR_UNAL_Pos))
#define MPDDRC_CR_Msk                         _U_(0x00F973FF)                                      /**< (MPDDRC_CR) Register Mask  */

#define MPDDRC_CR_LC_LPDDR_Pos                _U_(19)                                              /**< (MPDDRC_CR Position) Low-cost Low-power DDRx */
#define MPDDRC_CR_LC_LPDDR_Msk                (_U_(0x1) << MPDDRC_CR_LC_LPDDR_Pos)                 /**< (MPDDRC_CR Mask) LC_LPDDR */
#define MPDDRC_CR_LC_LPDDR(value)             (MPDDRC_CR_LC_LPDDR_Msk & ((value) << MPDDRC_CR_LC_LPDDR_Pos)) 

/* -------- MPDDRC_TPR0 : (MPDDRC Offset: 0x0C) (R/W 32) Timing Parameter 0 Register -------- */
#define MPDDRC_TPR0_TRAS_Pos                  _U_(0)                                               /**< (MPDDRC_TPR0) Active to Precharge Delay Position */
#define MPDDRC_TPR0_TRAS_Msk                  (_U_(0xF) << MPDDRC_TPR0_TRAS_Pos)                   /**< (MPDDRC_TPR0) Active to Precharge Delay Mask */
#define MPDDRC_TPR0_TRAS(value)               (MPDDRC_TPR0_TRAS_Msk & ((value) << MPDDRC_TPR0_TRAS_Pos))
#define MPDDRC_TPR0_TRCD_Pos                  _U_(4)                                               /**< (MPDDRC_TPR0) Row to Column Delay Position */
#define MPDDRC_TPR0_TRCD_Msk                  (_U_(0xF) << MPDDRC_TPR0_TRCD_Pos)                   /**< (MPDDRC_TPR0) Row to Column Delay Mask */
#define MPDDRC_TPR0_TRCD(value)               (MPDDRC_TPR0_TRCD_Msk & ((value) << MPDDRC_TPR0_TRCD_Pos))
#define MPDDRC_TPR0_TWR_Pos                   _U_(8)                                               /**< (MPDDRC_TPR0) Write Recovery Delay Position */
#define MPDDRC_TPR0_TWR_Msk                   (_U_(0xF) << MPDDRC_TPR0_TWR_Pos)                    /**< (MPDDRC_TPR0) Write Recovery Delay Mask */
#define MPDDRC_TPR0_TWR(value)                (MPDDRC_TPR0_TWR_Msk & ((value) << MPDDRC_TPR0_TWR_Pos))
#define MPDDRC_TPR0_TRC_Pos                   _U_(12)                                              /**< (MPDDRC_TPR0) Row Cycle Delay Position */
#define MPDDRC_TPR0_TRC_Msk                   (_U_(0xF) << MPDDRC_TPR0_TRC_Pos)                    /**< (MPDDRC_TPR0) Row Cycle Delay Mask */
#define MPDDRC_TPR0_TRC(value)                (MPDDRC_TPR0_TRC_Msk & ((value) << MPDDRC_TPR0_TRC_Pos))
#define MPDDRC_TPR0_TRP_Pos                   _U_(16)                                              /**< (MPDDRC_TPR0) Row Precharge Delay Position */
#define MPDDRC_TPR0_TRP_Msk                   (_U_(0xF) << MPDDRC_TPR0_TRP_Pos)                    /**< (MPDDRC_TPR0) Row Precharge Delay Mask */
#define MPDDRC_TPR0_TRP(value)                (MPDDRC_TPR0_TRP_Msk & ((value) << MPDDRC_TPR0_TRP_Pos))
#define MPDDRC_TPR0_TRRD_Pos                  _U_(20)                                              /**< (MPDDRC_TPR0) Active BankA to Active BankB Position */
#define MPDDRC_TPR0_TRRD_Msk                  (_U_(0xF) << MPDDRC_TPR0_TRRD_Pos)                   /**< (MPDDRC_TPR0) Active BankA to Active BankB Mask */
#define MPDDRC_TPR0_TRRD(value)               (MPDDRC_TPR0_TRRD_Msk & ((value) << MPDDRC_TPR0_TRRD_Pos))
#define MPDDRC_TPR0_TWTR_Pos                  _U_(24)                                              /**< (MPDDRC_TPR0) Internal Write to Read Delay Position */
#define MPDDRC_TPR0_TWTR_Msk                  (_U_(0x7) << MPDDRC_TPR0_TWTR_Pos)                   /**< (MPDDRC_TPR0) Internal Write to Read Delay Mask */
#define MPDDRC_TPR0_TWTR(value)               (MPDDRC_TPR0_TWTR_Msk & ((value) << MPDDRC_TPR0_TWTR_Pos))
#define MPDDRC_TPR0_TMRD_Pos                  _U_(28)                                              /**< (MPDDRC_TPR0) Load Mode Register Command to Activate or Refresh Command Position */
#define MPDDRC_TPR0_TMRD_Msk                  (_U_(0xF) << MPDDRC_TPR0_TMRD_Pos)                   /**< (MPDDRC_TPR0) Load Mode Register Command to Activate or Refresh Command Mask */
#define MPDDRC_TPR0_TMRD(value)               (MPDDRC_TPR0_TMRD_Msk & ((value) << MPDDRC_TPR0_TMRD_Pos))
#define MPDDRC_TPR0_Msk                       _U_(0xF7FFFFFF)                                      /**< (MPDDRC_TPR0) Register Mask  */


/* -------- MPDDRC_TPR1 : (MPDDRC Offset: 0x10) (R/W 32) Timing Parameter 1 Register -------- */
#define MPDDRC_TPR1_TRFC_Pos                  _U_(0)                                               /**< (MPDDRC_TPR1) Row Refresh Cycle Position */
#define MPDDRC_TPR1_TRFC_Msk                  (_U_(0x7F) << MPDDRC_TPR1_TRFC_Pos)                  /**< (MPDDRC_TPR1) Row Refresh Cycle Mask */
#define MPDDRC_TPR1_TRFC(value)               (MPDDRC_TPR1_TRFC_Msk & ((value) << MPDDRC_TPR1_TRFC_Pos))
#define MPDDRC_TPR1_TXSNR_Pos                 _U_(8)                                               /**< (MPDDRC_TPR1) Exit Self-refresh Delay to Non-Read Command Position */
#define MPDDRC_TPR1_TXSNR_Msk                 (_U_(0xFF) << MPDDRC_TPR1_TXSNR_Pos)                 /**< (MPDDRC_TPR1) Exit Self-refresh Delay to Non-Read Command Mask */
#define MPDDRC_TPR1_TXSNR(value)              (MPDDRC_TPR1_TXSNR_Msk & ((value) << MPDDRC_TPR1_TXSNR_Pos))
#define MPDDRC_TPR1_TXSRD_Pos                 _U_(16)                                              /**< (MPDDRC_TPR1) Exit Self-refresh Delay to Read Command Position */
#define MPDDRC_TPR1_TXSRD_Msk                 (_U_(0xFF) << MPDDRC_TPR1_TXSRD_Pos)                 /**< (MPDDRC_TPR1) Exit Self-refresh Delay to Read Command Mask */
#define MPDDRC_TPR1_TXSRD(value)              (MPDDRC_TPR1_TXSRD_Msk & ((value) << MPDDRC_TPR1_TXSRD_Pos))
#define MPDDRC_TPR1_TXP_Pos                   _U_(24)                                              /**< (MPDDRC_TPR1) Exit Powerdown Delay to First Command Position */
#define MPDDRC_TPR1_TXP_Msk                   (_U_(0xF) << MPDDRC_TPR1_TXP_Pos)                    /**< (MPDDRC_TPR1) Exit Powerdown Delay to First Command Mask */
#define MPDDRC_TPR1_TXP(value)                (MPDDRC_TPR1_TXP_Msk & ((value) << MPDDRC_TPR1_TXP_Pos))
#define MPDDRC_TPR1_Msk                       _U_(0x0FFFFF7F)                                      /**< (MPDDRC_TPR1) Register Mask  */


/* -------- MPDDRC_TPR2 : (MPDDRC Offset: 0x14) (R/W 32) Timing Parameter 2 Register -------- */
#define MPDDRC_TPR2_TXARD_Pos                 _U_(0)                                               /**< (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Fast Exit" Position */
#define MPDDRC_TPR2_TXARD_Msk                 (_U_(0xF) << MPDDRC_TPR2_TXARD_Pos)                  /**< (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Fast Exit" Mask */
#define MPDDRC_TPR2_TXARD(value)              (MPDDRC_TPR2_TXARD_Msk & ((value) << MPDDRC_TPR2_TXARD_Pos))
#define MPDDRC_TPR2_TXARDS_Pos                _U_(4)                                               /**< (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Slow Exit" Position */
#define MPDDRC_TPR2_TXARDS_Msk                (_U_(0xF) << MPDDRC_TPR2_TXARDS_Pos)                 /**< (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Slow Exit" Mask */
#define MPDDRC_TPR2_TXARDS(value)             (MPDDRC_TPR2_TXARDS_Msk & ((value) << MPDDRC_TPR2_TXARDS_Pos))
#define MPDDRC_TPR2_TRPA_Pos                  _U_(8)                                               /**< (MPDDRC_TPR2) Row Precharge All Delay Position */
#define MPDDRC_TPR2_TRPA_Msk                  (_U_(0xF) << MPDDRC_TPR2_TRPA_Pos)                   /**< (MPDDRC_TPR2) Row Precharge All Delay Mask */
#define MPDDRC_TPR2_TRPA(value)               (MPDDRC_TPR2_TRPA_Msk & ((value) << MPDDRC_TPR2_TRPA_Pos))
#define MPDDRC_TPR2_TRTP_Pos                  _U_(12)                                              /**< (MPDDRC_TPR2) Read to Precharge Position */
#define MPDDRC_TPR2_TRTP_Msk                  (_U_(0x7) << MPDDRC_TPR2_TRTP_Pos)                   /**< (MPDDRC_TPR2) Read to Precharge Mask */
#define MPDDRC_TPR2_TRTP(value)               (MPDDRC_TPR2_TRTP_Msk & ((value) << MPDDRC_TPR2_TRTP_Pos))
#define MPDDRC_TPR2_TFAW_Pos                  _U_(16)                                              /**< (MPDDRC_TPR2) Four Active Windows Position */
#define MPDDRC_TPR2_TFAW_Msk                  (_U_(0xF) << MPDDRC_TPR2_TFAW_Pos)                   /**< (MPDDRC_TPR2) Four Active Windows Mask */
#define MPDDRC_TPR2_TFAW(value)               (MPDDRC_TPR2_TFAW_Msk & ((value) << MPDDRC_TPR2_TFAW_Pos))
#define MPDDRC_TPR2_Msk                       _U_(0x000F7FFF)                                      /**< (MPDDRC_TPR2) Register Mask  */


/* -------- MPDDRC_LPR : (MPDDRC Offset: 0x1C) (R/W 32) Low-Power Register -------- */
#define MPDDRC_LPR_LPCB_Pos                   _U_(0)                                               /**< (MPDDRC_LPR) Low-power Command Bit Position */
#define MPDDRC_LPR_LPCB_Msk                   (_U_(0x3) << MPDDRC_LPR_LPCB_Pos)                    /**< (MPDDRC_LPR) Low-power Command Bit Mask */
#define MPDDRC_LPR_LPCB(value)                (MPDDRC_LPR_LPCB_Msk & ((value) << MPDDRC_LPR_LPCB_Pos))
#define   MPDDRC_LPR_LPCB_NOLOWPOWER_Val      _U_(0x0)                                             /**< (MPDDRC_LPR) Low-power feature is inhibited. No Powerdown, Self-refresh and Deep power modes are issued to the DDR-SDRAM device.  */
#define   MPDDRC_LPR_LPCB_SELFREFRESH_Val     _U_(0x1)                                             /**< (MPDDRC_LPR) The MPDDRC issues a self-refresh command to the DDR-SDRAM device, the clock(s) is/are deactivated and the CKE signal is set low. The DDR-SDRAM device leaves the Self-refresh mode when accessed and reenters it after the access.  */
#define   MPDDRC_LPR_LPCB_POWERDOWN_Val       _U_(0x2)                                             /**< (MPDDRC_LPR) The MPDDRC issues a Powerdown command to the DDR-SDRAM device after each access, the CKE signal is set low. The DDR-SDRAM device leaves the Powerdown mode when accessed and reenters it after the access.  */
#define   MPDDRC_LPR_LPCB_DEEPPOWERDOWN_Val   _U_(0x3)                                             /**< (MPDDRC_LPR) The MPDDRC issues a Deep Powerdown command to the low-power DDR-SDRAM device.  */
#define MPDDRC_LPR_LPCB_NOLOWPOWER            (MPDDRC_LPR_LPCB_NOLOWPOWER_Val << MPDDRC_LPR_LPCB_Pos) /**< (MPDDRC_LPR) Low-power feature is inhibited. No Powerdown, Self-refresh and Deep power modes are issued to the DDR-SDRAM device. Position  */
#define MPDDRC_LPR_LPCB_SELFREFRESH           (MPDDRC_LPR_LPCB_SELFREFRESH_Val << MPDDRC_LPR_LPCB_Pos) /**< (MPDDRC_LPR) The MPDDRC issues a self-refresh command to the DDR-SDRAM device, the clock(s) is/are deactivated and the CKE signal is set low. The DDR-SDRAM device leaves the Self-refresh mode when accessed and reenters it after the access. Position  */
#define MPDDRC_LPR_LPCB_POWERDOWN             (MPDDRC_LPR_LPCB_POWERDOWN_Val << MPDDRC_LPR_LPCB_Pos) /**< (MPDDRC_LPR) The MPDDRC issues a Powerdown command to the DDR-SDRAM device after each access, the CKE signal is set low. The DDR-SDRAM device leaves the Powerdown mode when accessed and reenters it after the access. Position  */
#define MPDDRC_LPR_LPCB_DEEPPOWERDOWN         (MPDDRC_LPR_LPCB_DEEPPOWERDOWN_Val << MPDDRC_LPR_LPCB_Pos) /**< (MPDDRC_LPR) The MPDDRC issues a Deep Powerdown command to the low-power DDR-SDRAM device. Position  */
#define MPDDRC_LPR_CLK_FR_Pos                 _U_(2)                                               /**< (MPDDRC_LPR) Clock Frozen Command Bit Position */
#define MPDDRC_LPR_CLK_FR_Msk                 (_U_(0x1) << MPDDRC_LPR_CLK_FR_Pos)                  /**< (MPDDRC_LPR) Clock Frozen Command Bit Mask */
#define MPDDRC_LPR_CLK_FR(value)              (MPDDRC_LPR_CLK_FR_Msk & ((value) << MPDDRC_LPR_CLK_FR_Pos))
#define   MPDDRC_LPR_CLK_FR_DISABLED_Val      _U_(0x0)                                             /**< (MPDDRC_LPR) Clock(s) is/are not frozen.  */
#define   MPDDRC_LPR_CLK_FR_ENABLED_Val       _U_(0x1)                                             /**< (MPDDRC_LPR) Clock(s) is/are frozen.  */
#define MPDDRC_LPR_CLK_FR_DISABLED            (MPDDRC_LPR_CLK_FR_DISABLED_Val << MPDDRC_LPR_CLK_FR_Pos) /**< (MPDDRC_LPR) Clock(s) is/are not frozen. Position  */
#define MPDDRC_LPR_CLK_FR_ENABLED             (MPDDRC_LPR_CLK_FR_ENABLED_Val << MPDDRC_LPR_CLK_FR_Pos) /**< (MPDDRC_LPR) Clock(s) is/are frozen. Position  */
#define MPDDRC_LPR_PASR_Pos                   _U_(4)                                               /**< (MPDDRC_LPR) Partial Array Self-refresh Position */
#define MPDDRC_LPR_PASR_Msk                   (_U_(0x7) << MPDDRC_LPR_PASR_Pos)                    /**< (MPDDRC_LPR) Partial Array Self-refresh Mask */
#define MPDDRC_LPR_PASR(value)                (MPDDRC_LPR_PASR_Msk & ((value) << MPDDRC_LPR_PASR_Pos))
#define MPDDRC_LPR_DS_Pos                     _U_(8)                                               /**< (MPDDRC_LPR) Drive Strength Position */
#define MPDDRC_LPR_DS_Msk                     (_U_(0x7) << MPDDRC_LPR_DS_Pos)                      /**< (MPDDRC_LPR) Drive Strength Mask */
#define MPDDRC_LPR_DS(value)                  (MPDDRC_LPR_DS_Msk & ((value) << MPDDRC_LPR_DS_Pos))
#define   MPDDRC_LPR_DS_DS_FULL_Val           _U_(0x0)                                             /**< (MPDDRC_LPR) Full drive strength  */
#define   MPDDRC_LPR_DS_DS_HALF_Val           _U_(0x1)                                             /**< (MPDDRC_LPR) Half drive strength  */
#define   MPDDRC_LPR_DS_DS_QUARTER_Val        _U_(0x2)                                             /**< (MPDDRC_LPR) Quarter drive strength  */
#define   MPDDRC_LPR_DS_DS_OCTANT_Val         _U_(0x3)                                             /**< (MPDDRC_LPR) Octant drive strength  */
#define MPDDRC_LPR_DS_DS_FULL                 (MPDDRC_LPR_DS_DS_FULL_Val << MPDDRC_LPR_DS_Pos)     /**< (MPDDRC_LPR) Full drive strength Position  */
#define MPDDRC_LPR_DS_DS_HALF                 (MPDDRC_LPR_DS_DS_HALF_Val << MPDDRC_LPR_DS_Pos)     /**< (MPDDRC_LPR) Half drive strength Position  */
#define MPDDRC_LPR_DS_DS_QUARTER              (MPDDRC_LPR_DS_DS_QUARTER_Val << MPDDRC_LPR_DS_Pos)  /**< (MPDDRC_LPR) Quarter drive strength Position  */
#define MPDDRC_LPR_DS_DS_OCTANT               (MPDDRC_LPR_DS_DS_OCTANT_Val << MPDDRC_LPR_DS_Pos)   /**< (MPDDRC_LPR) Octant drive strength Position  */
#define MPDDRC_LPR_TIMEOUT_Pos                _U_(12)                                              /**< (MPDDRC_LPR) Time Between Last Transfer and Low-Power Mode Position */
#define MPDDRC_LPR_TIMEOUT_Msk                (_U_(0x3) << MPDDRC_LPR_TIMEOUT_Pos)                 /**< (MPDDRC_LPR) Time Between Last Transfer and Low-Power Mode Mask */
#define MPDDRC_LPR_TIMEOUT(value)             (MPDDRC_LPR_TIMEOUT_Msk & ((value) << MPDDRC_LPR_TIMEOUT_Pos))
#define   MPDDRC_LPR_TIMEOUT_NONE_Val         _U_(0x0)                                             /**< (MPDDRC_LPR) SDRAM Low-power mode is activated immediately after the end of the last transfer.  */
#define   MPDDRC_LPR_TIMEOUT_DELAY_64_CLK_Val _U_(0x1)                                             /**< (MPDDRC_LPR) SDRAM Low-power mode is activated 64 clock cycles after the end of the last transfer.  */
#define   MPDDRC_LPR_TIMEOUT_DELAY_128_CLK_Val _U_(0x2)                                             /**< (MPDDRC_LPR) SDRAM Low-power mode is activated 128 clock cycles after the end of the last transfer.  */
#define MPDDRC_LPR_TIMEOUT_NONE               (MPDDRC_LPR_TIMEOUT_NONE_Val << MPDDRC_LPR_TIMEOUT_Pos) /**< (MPDDRC_LPR) SDRAM Low-power mode is activated immediately after the end of the last transfer. Position  */
#define MPDDRC_LPR_TIMEOUT_DELAY_64_CLK       (MPDDRC_LPR_TIMEOUT_DELAY_64_CLK_Val << MPDDRC_LPR_TIMEOUT_Pos) /**< (MPDDRC_LPR) SDRAM Low-power mode is activated 64 clock cycles after the end of the last transfer. Position  */
#define MPDDRC_LPR_TIMEOUT_DELAY_128_CLK      (MPDDRC_LPR_TIMEOUT_DELAY_128_CLK_Val << MPDDRC_LPR_TIMEOUT_Pos) /**< (MPDDRC_LPR) SDRAM Low-power mode is activated 128 clock cycles after the end of the last transfer. Position  */
#define MPDDRC_LPR_SELFAUTO_Pos               _U_(14)                                              /**< (MPDDRC_LPR) Self-refresh Exit Autorefresh Position */
#define MPDDRC_LPR_SELFAUTO_Msk               (_U_(0x1) << MPDDRC_LPR_SELFAUTO_Pos)                /**< (MPDDRC_LPR) Self-refresh Exit Autorefresh Mask */
#define MPDDRC_LPR_SELFAUTO(value)            (MPDDRC_LPR_SELFAUTO_Msk & ((value) << MPDDRC_LPR_SELFAUTO_Pos))
#define MPDDRC_LPR_APDE_Pos                   _U_(16)                                              /**< (MPDDRC_LPR) Active Power Down Exit Time Position */
#define MPDDRC_LPR_APDE_Msk                   (_U_(0x1) << MPDDRC_LPR_APDE_Pos)                    /**< (MPDDRC_LPR) Active Power Down Exit Time Mask */
#define MPDDRC_LPR_APDE(value)                (MPDDRC_LPR_APDE_Msk & ((value) << MPDDRC_LPR_APDE_Pos))
#define   MPDDRC_LPR_APDE_DDR2_FAST_EXIT_Val  _U_(0x0)                                             /**< (MPDDRC_LPR) Fast Exit from Power Down. DDR2-SDRAM devices only.  */
#define   MPDDRC_LPR_APDE_DDR2_SLOW_EXIT_Val  _U_(0x1)                                             /**< (MPDDRC_LPR) Slow Exit from Power Down. DDR2-SDRAM devices only.  */
#define MPDDRC_LPR_APDE_DDR2_FAST_EXIT        (MPDDRC_LPR_APDE_DDR2_FAST_EXIT_Val << MPDDRC_LPR_APDE_Pos) /**< (MPDDRC_LPR) Fast Exit from Power Down. DDR2-SDRAM devices only. Position  */
#define MPDDRC_LPR_APDE_DDR2_SLOW_EXIT        (MPDDRC_LPR_APDE_DDR2_SLOW_EXIT_Val << MPDDRC_LPR_APDE_Pos) /**< (MPDDRC_LPR) Slow Exit from Power Down. DDR2-SDRAM devices only. Position  */
#define MPDDRC_LPR_UPD_MR_Pos                 _U_(20)                                              /**< (MPDDRC_LPR) Update Load Mode Register and Extended Mode Register Position */
#define MPDDRC_LPR_UPD_MR_Msk                 (_U_(0x3) << MPDDRC_LPR_UPD_MR_Pos)                  /**< (MPDDRC_LPR) Update Load Mode Register and Extended Mode Register Mask */
#define MPDDRC_LPR_UPD_MR(value)              (MPDDRC_LPR_UPD_MR_Msk & ((value) << MPDDRC_LPR_UPD_MR_Pos))
#define   MPDDRC_LPR_UPD_MR_NO_UPDATE_Val     _U_(0x0)                                             /**< (MPDDRC_LPR) Update of Load Mode and Extended Mode registers is disabled.  */
#define   MPDDRC_LPR_UPD_MR_UPDATE_SHAREDBUS_Val _U_(0x1)                                             /**< (MPDDRC_LPR) MPDDRC shares an external bus. Automatic update is done during a refresh command and a pending read or write access in the SDRAM device.  */
#define   MPDDRC_LPR_UPD_MR_UPDATE_NOSHAREDBUS_Val _U_(0x2)                                             /**< (MPDDRC_LPR) MPDDRC does not share an external bus. Automatic update is done before entering Self-refresh mode.  */
#define MPDDRC_LPR_UPD_MR_NO_UPDATE           (MPDDRC_LPR_UPD_MR_NO_UPDATE_Val << MPDDRC_LPR_UPD_MR_Pos) /**< (MPDDRC_LPR) Update of Load Mode and Extended Mode registers is disabled. Position  */
#define MPDDRC_LPR_UPD_MR_UPDATE_SHAREDBUS    (MPDDRC_LPR_UPD_MR_UPDATE_SHAREDBUS_Val << MPDDRC_LPR_UPD_MR_Pos) /**< (MPDDRC_LPR) MPDDRC shares an external bus. Automatic update is done during a refresh command and a pending read or write access in the SDRAM device. Position  */
#define MPDDRC_LPR_UPD_MR_UPDATE_NOSHAREDBUS  (MPDDRC_LPR_UPD_MR_UPDATE_NOSHAREDBUS_Val << MPDDRC_LPR_UPD_MR_Pos) /**< (MPDDRC_LPR) MPDDRC does not share an external bus. Automatic update is done before entering Self-refresh mode. Position  */
#define MPDDRC_LPR_CHG_FRQ_Pos                _U_(24)                                              /**< (MPDDRC_LPR) Change Clock Frequency During Self-refresh Mode Position */
#define MPDDRC_LPR_CHG_FRQ_Msk                (_U_(0x1) << MPDDRC_LPR_CHG_FRQ_Pos)                 /**< (MPDDRC_LPR) Change Clock Frequency During Self-refresh Mode Mask */
#define MPDDRC_LPR_CHG_FRQ(value)             (MPDDRC_LPR_CHG_FRQ_Msk & ((value) << MPDDRC_LPR_CHG_FRQ_Pos))
#define MPDDRC_LPR_SELF_DONE_Pos              _U_(25)                                              /**< (MPDDRC_LPR) Self-refresh is Done (read-only) Position */
#define MPDDRC_LPR_SELF_DONE_Msk              (_U_(0x1) << MPDDRC_LPR_SELF_DONE_Pos)               /**< (MPDDRC_LPR) Self-refresh is Done (read-only) Mask */
#define MPDDRC_LPR_SELF_DONE(value)           (MPDDRC_LPR_SELF_DONE_Msk & ((value) << MPDDRC_LPR_SELF_DONE_Pos))
#define MPDDRC_LPR_Msk                        _U_(0x03317777)                                      /**< (MPDDRC_LPR) Register Mask  */


/* -------- MPDDRC_MD : (MPDDRC Offset: 0x20) (R/W 32) Memory Device Register -------- */
#define MPDDRC_MD_MD_Pos                      _U_(0)                                               /**< (MPDDRC_MD) Memory Device Position */
#define MPDDRC_MD_MD_Msk                      (_U_(0x7) << MPDDRC_MD_MD_Pos)                       /**< (MPDDRC_MD) Memory Device Mask */
#define MPDDRC_MD_MD(value)                   (MPDDRC_MD_MD_Msk & ((value) << MPDDRC_MD_MD_Pos))  
#define   MPDDRC_MD_MD_LPDDR_SDRAM_Val        _U_(0x3)                                             /**< (MPDDRC_MD) Low-power DDR1-SDRAM  */
#define   MPDDRC_MD_MD_DDR2_SDRAM_Val         _U_(0x6)                                             /**< (MPDDRC_MD) DDR2-SDRAM  */
#define MPDDRC_MD_MD_LPDDR_SDRAM              (MPDDRC_MD_MD_LPDDR_SDRAM_Val << MPDDRC_MD_MD_Pos)   /**< (MPDDRC_MD) Low-power DDR1-SDRAM Position  */
#define MPDDRC_MD_MD_DDR2_SDRAM               (MPDDRC_MD_MD_DDR2_SDRAM_Val << MPDDRC_MD_MD_Pos)    /**< (MPDDRC_MD) DDR2-SDRAM Position  */
#define MPDDRC_MD_DBW_Pos                     _U_(4)                                               /**< (MPDDRC_MD) Data Bus Width Position */
#define MPDDRC_MD_DBW_Msk                     (_U_(0x1) << MPDDRC_MD_DBW_Pos)                      /**< (MPDDRC_MD) Data Bus Width Mask */
#define MPDDRC_MD_DBW(value)                  (MPDDRC_MD_DBW_Msk & ((value) << MPDDRC_MD_DBW_Pos))
#define   MPDDRC_MD_DBW_DBW_16_BITS_Val       _U_(0x1)                                             /**< (MPDDRC_MD) Data bus width is 16 bits.  */
#define MPDDRC_MD_DBW_DBW_16_BITS             (MPDDRC_MD_DBW_DBW_16_BITS_Val << MPDDRC_MD_DBW_Pos) /**< (MPDDRC_MD) Data bus width is 16 bits. Position  */
#define MPDDRC_MD_Msk                         _U_(0x00000017)                                      /**< (MPDDRC_MD) Register Mask  */


/* -------- MPDDRC_IO_CALIBR : (MPDDRC Offset: 0x34) (R/W 32) I/O Calibration Register -------- */
#define MPDDRC_IO_CALIBR_CK_F_RANGE_Pos       _U_(0)                                               /**< (MPDDRC_IO_CALIBR) DDRCK Maximum Clock Frequency Range Indicator Position */
#define MPDDRC_IO_CALIBR_CK_F_RANGE_Msk       (_U_(0x7) << MPDDRC_IO_CALIBR_CK_F_RANGE_Pos)        /**< (MPDDRC_IO_CALIBR) DDRCK Maximum Clock Frequency Range Indicator Mask */
#define MPDDRC_IO_CALIBR_CK_F_RANGE(value)    (MPDDRC_IO_CALIBR_CK_F_RANGE_Msk & ((value) << MPDDRC_IO_CALIBR_CK_F_RANGE_Pos))
#define MPDDRC_IO_CALIBR_TZQIO_Pos            _U_(8)                                               /**< (MPDDRC_IO_CALIBR) IO Calibration Position */
#define MPDDRC_IO_CALIBR_TZQIO_Msk            (_U_(0x7F) << MPDDRC_IO_CALIBR_TZQIO_Pos)            /**< (MPDDRC_IO_CALIBR) IO Calibration Mask */
#define MPDDRC_IO_CALIBR_TZQIO(value)         (MPDDRC_IO_CALIBR_TZQIO_Msk & ((value) << MPDDRC_IO_CALIBR_TZQIO_Pos))
#define MPDDRC_IO_CALIBR_CALCODEP_Pos         _U_(16)                                              /**< (MPDDRC_IO_CALIBR) Number of P-type Transistors (read-only) Position */
#define MPDDRC_IO_CALIBR_CALCODEP_Msk         (_U_(0xF) << MPDDRC_IO_CALIBR_CALCODEP_Pos)          /**< (MPDDRC_IO_CALIBR) Number of P-type Transistors (read-only) Mask */
#define MPDDRC_IO_CALIBR_CALCODEP(value)      (MPDDRC_IO_CALIBR_CALCODEP_Msk & ((value) << MPDDRC_IO_CALIBR_CALCODEP_Pos))
#define MPDDRC_IO_CALIBR_CALCODEN_Pos         _U_(20)                                              /**< (MPDDRC_IO_CALIBR) Number of N-type Transistors (read-only) Position */
#define MPDDRC_IO_CALIBR_CALCODEN_Msk         (_U_(0xF) << MPDDRC_IO_CALIBR_CALCODEN_Pos)          /**< (MPDDRC_IO_CALIBR) Number of N-type Transistors (read-only) Mask */
#define MPDDRC_IO_CALIBR_CALCODEN(value)      (MPDDRC_IO_CALIBR_CALCODEN_Msk & ((value) << MPDDRC_IO_CALIBR_CALCODEN_Pos))
#define MPDDRC_IO_CALIBR_Msk                  _U_(0x00FF7F07)                                      /**< (MPDDRC_IO_CALIBR) Register Mask  */


/* -------- MPDDRC_OCMS : (MPDDRC Offset: 0x38) (R/W 32) OCMS Register -------- */
#define MPDDRC_OCMS_SCR_EN_Pos                _U_(0)                                               /**< (MPDDRC_OCMS) Scrambling Enable Position */
#define MPDDRC_OCMS_SCR_EN_Msk                (_U_(0x1) << MPDDRC_OCMS_SCR_EN_Pos)                 /**< (MPDDRC_OCMS) Scrambling Enable Mask */
#define MPDDRC_OCMS_SCR_EN(value)             (MPDDRC_OCMS_SCR_EN_Msk & ((value) << MPDDRC_OCMS_SCR_EN_Pos))
#define MPDDRC_OCMS_TAMPCLR_Pos               _U_(4)                                               /**< (MPDDRC_OCMS) Tamper Clear Enable Position */
#define MPDDRC_OCMS_TAMPCLR_Msk               (_U_(0x1) << MPDDRC_OCMS_TAMPCLR_Pos)                /**< (MPDDRC_OCMS) Tamper Clear Enable Mask */
#define MPDDRC_OCMS_TAMPCLR(value)            (MPDDRC_OCMS_TAMPCLR_Msk & ((value) << MPDDRC_OCMS_TAMPCLR_Pos))
#define MPDDRC_OCMS_Msk                       _U_(0x00000011)                                      /**< (MPDDRC_OCMS) Register Mask  */


/* -------- MPDDRC_OCMS_KEY1 : (MPDDRC Offset: 0x3C) ( /W 32) OCMS KEY1 Register -------- */
#define MPDDRC_OCMS_KEY1_KEY1_Pos             _U_(0)                                               /**< (MPDDRC_OCMS_KEY1) Off-chip Memory Scrambling (OCMS) Key Part 1 Position */
#define MPDDRC_OCMS_KEY1_KEY1_Msk             (_U_(0xFFFFFFFF) << MPDDRC_OCMS_KEY1_KEY1_Pos)       /**< (MPDDRC_OCMS_KEY1) Off-chip Memory Scrambling (OCMS) Key Part 1 Mask */
#define MPDDRC_OCMS_KEY1_KEY1(value)          (MPDDRC_OCMS_KEY1_KEY1_Msk & ((value) << MPDDRC_OCMS_KEY1_KEY1_Pos))
#define MPDDRC_OCMS_KEY1_Msk                  _U_(0xFFFFFFFF)                                      /**< (MPDDRC_OCMS_KEY1) Register Mask  */


/* -------- MPDDRC_OCMS_KEY2 : (MPDDRC Offset: 0x40) ( /W 32) OCMS KEY2 Register -------- */
#define MPDDRC_OCMS_KEY2_KEY2_Pos             _U_(0)                                               /**< (MPDDRC_OCMS_KEY2) Off-chip Memory Scrambling (OCMS) Key Part 2 Position */
#define MPDDRC_OCMS_KEY2_KEY2_Msk             (_U_(0xFFFFFFFF) << MPDDRC_OCMS_KEY2_KEY2_Pos)       /**< (MPDDRC_OCMS_KEY2) Off-chip Memory Scrambling (OCMS) Key Part 2 Mask */
#define MPDDRC_OCMS_KEY2_KEY2(value)          (MPDDRC_OCMS_KEY2_KEY2_Msk & ((value) << MPDDRC_OCMS_KEY2_KEY2_Pos))
#define MPDDRC_OCMS_KEY2_Msk                  _U_(0xFFFFFFFF)                                      /**< (MPDDRC_OCMS_KEY2) Register Mask  */


/* -------- MPDDRC_CONF_ARBITER : (MPDDRC Offset: 0x44) (R/W 32) Configuration Arbiter Register -------- */
#define MPDDRC_CONF_ARBITER_ARB_Pos           _U_(0)                                               /**< (MPDDRC_CONF_ARBITER) Type of Arbitration Position */
#define MPDDRC_CONF_ARBITER_ARB_Msk           (_U_(0x3) << MPDDRC_CONF_ARBITER_ARB_Pos)            /**< (MPDDRC_CONF_ARBITER) Type of Arbitration Mask */
#define MPDDRC_CONF_ARBITER_ARB(value)        (MPDDRC_CONF_ARBITER_ARB_Msk & ((value) << MPDDRC_CONF_ARBITER_ARB_Pos))
#define   MPDDRC_CONF_ARBITER_ARB_ROUND_Val   _U_(0x0)                                             /**< (MPDDRC_CONF_ARBITER) Round-Robin Policy  */
#define   MPDDRC_CONF_ARBITER_ARB_NB_REQUEST_Val _U_(0x1)                                             /**< (MPDDRC_CONF_ARBITER) Request Policy  */
#define   MPDDRC_CONF_ARBITER_ARB_BANDWIDTH_Val _U_(0x2)                                             /**< (MPDDRC_CONF_ARBITER) Bandwidth Policy  */
#define   MPDDRC_CONF_ARBITER_ARB_LQOS_Val    _U_(0x3)                                             /**< (MPDDRC_CONF_ARBITER) Quality of Service Policy  */
#define MPDDRC_CONF_ARBITER_ARB_ROUND         (MPDDRC_CONF_ARBITER_ARB_ROUND_Val << MPDDRC_CONF_ARBITER_ARB_Pos) /**< (MPDDRC_CONF_ARBITER) Round-Robin Policy Position  */
#define MPDDRC_CONF_ARBITER_ARB_NB_REQUEST    (MPDDRC_CONF_ARBITER_ARB_NB_REQUEST_Val << MPDDRC_CONF_ARBITER_ARB_Pos) /**< (MPDDRC_CONF_ARBITER) Request Policy Position  */
#define MPDDRC_CONF_ARBITER_ARB_BANDWIDTH     (MPDDRC_CONF_ARBITER_ARB_BANDWIDTH_Val << MPDDRC_CONF_ARBITER_ARB_Pos) /**< (MPDDRC_CONF_ARBITER) Bandwidth Policy Position  */
#define MPDDRC_CONF_ARBITER_ARB_LQOS          (MPDDRC_CONF_ARBITER_ARB_LQOS_Val << MPDDRC_CONF_ARBITER_ARB_Pos) /**< (MPDDRC_CONF_ARBITER) Quality of Service Policy Position  */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos   _U_(3)                                               /**< (MPDDRC_CONF_ARBITER) Bandwidth Max or Current Position */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Msk   (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos)    /**< (MPDDRC_CONF_ARBITER) Bandwidth Max or Current Mask */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR(value) (MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Msk & ((value) << MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos))
#define MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos      _U_(8)                                               /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0_Msk      (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos)       /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P0_Msk & ((value) << MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos))
#define MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos      _U_(9)                                               /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1_Msk      (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos)       /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P1_Msk & ((value) << MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos))
#define MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos      _U_(10)                                              /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2_Msk      (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos)       /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P2_Msk & ((value) << MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos))
#define MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos      _U_(11)                                              /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3_Msk      (_U_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos)       /**< (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P3_Msk & ((value) << MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos))
#define MPDDRC_CONF_ARBITER_MA_PR_P0_Pos      _U_(16)                                              /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P0_Msk      (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P0_Pos)       /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P0(value)   (MPDDRC_CONF_ARBITER_MA_PR_P0_Msk & ((value) << MPDDRC_CONF_ARBITER_MA_PR_P0_Pos))
#define MPDDRC_CONF_ARBITER_MA_PR_P1_Pos      _U_(17)                                              /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P1_Msk      (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P1_Pos)       /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P1(value)   (MPDDRC_CONF_ARBITER_MA_PR_P1_Msk & ((value) << MPDDRC_CONF_ARBITER_MA_PR_P1_Pos))
#define MPDDRC_CONF_ARBITER_MA_PR_P2_Pos      _U_(18)                                              /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P2_Msk      (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P2_Pos)       /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P2(value)   (MPDDRC_CONF_ARBITER_MA_PR_P2_Msk & ((value) << MPDDRC_CONF_ARBITER_MA_PR_P2_Pos))
#define MPDDRC_CONF_ARBITER_MA_PR_P3_Pos      _U_(19)                                              /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P3_Msk      (_U_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P3_Pos)       /**< (MPDDRC_CONF_ARBITER) Master or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P3(value)   (MPDDRC_CONF_ARBITER_MA_PR_P3_Msk & ((value) << MPDDRC_CONF_ARBITER_MA_PR_P3_Pos))
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos  _U_(24)                                              /**< (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0_Msk  (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos)   /**< (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P0_Msk & ((value) << MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos))
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos  _U_(25)                                              /**< (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1_Msk  (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos)   /**< (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P1_Msk & ((value) << MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos))
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos  _U_(26)                                              /**< (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2_Msk  (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos)   /**< (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P2_Msk & ((value) << MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos))
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos  _U_(27)                                              /**< (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3_Msk  (_U_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos)   /**< (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P3_Msk & ((value) << MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos))
#define MPDDRC_CONF_ARBITER_Msk               _U_(0x0F0F0F0B)                                      /**< (MPDDRC_CONF_ARBITER) Register Mask  */

#define MPDDRC_CONF_ARBITER_RQ_WD_P_Pos       _U_(8)                                               /**< (MPDDRC_CONF_ARBITER Position) Request or Word from Port X */
#define MPDDRC_CONF_ARBITER_RQ_WD_P_Msk       (_U_(0xF) << MPDDRC_CONF_ARBITER_RQ_WD_P_Pos)        /**< (MPDDRC_CONF_ARBITER Mask) RQ_WD_P */
#define MPDDRC_CONF_ARBITER_RQ_WD_P(value)    (MPDDRC_CONF_ARBITER_RQ_WD_P_Msk & ((value) << MPDDRC_CONF_ARBITER_RQ_WD_P_Pos)) 
#define MPDDRC_CONF_ARBITER_MA_PR_P_Pos       _U_(16)                                              /**< (MPDDRC_CONF_ARBITER Position) Master or Software Provide Information */
#define MPDDRC_CONF_ARBITER_MA_PR_P_Msk       (_U_(0xF) << MPDDRC_CONF_ARBITER_MA_PR_P_Pos)        /**< (MPDDRC_CONF_ARBITER Mask) MA_PR_P */
#define MPDDRC_CONF_ARBITER_MA_PR_P(value)    (MPDDRC_CONF_ARBITER_MA_PR_P_Msk & ((value) << MPDDRC_CONF_ARBITER_MA_PR_P_Pos)) 
#define MPDDRC_CONF_ARBITER_BDW_BURST_P_Pos   _U_(24)                                              /**< (MPDDRC_CONF_ARBITER Position) Bandwidth Arbitration Mode on Port X */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P_Msk   (_U_(0xF) << MPDDRC_CONF_ARBITER_BDW_BURST_P_Pos)    /**< (MPDDRC_CONF_ARBITER Mask) BDW_BURST_P */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P_Msk & ((value) << MPDDRC_CONF_ARBITER_BDW_BURST_P_Pos)) 

/* -------- MPDDRC_TIMEOUT : (MPDDRC Offset: 0x48) (R/W 32) Timeout Register -------- */
#define MPDDRC_TIMEOUT_TIMEOUT_P0_Pos         _U_(0)                                               /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P0_Msk         (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P0_Pos)          /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P0(value)      (MPDDRC_TIMEOUT_TIMEOUT_P0_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P0_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P1_Pos         _U_(4)                                               /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P1_Msk         (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P1_Pos)          /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P1(value)      (MPDDRC_TIMEOUT_TIMEOUT_P1_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P1_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P2_Pos         _U_(8)                                               /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P2_Msk         (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P2_Pos)          /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P2(value)      (MPDDRC_TIMEOUT_TIMEOUT_P2_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P2_Pos))
#define MPDDRC_TIMEOUT_TIMEOUT_P3_Pos         _U_(12)                                              /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P3_Msk         (_U_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P3_Pos)          /**< (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P3(value)      (MPDDRC_TIMEOUT_TIMEOUT_P3_Msk & ((value) << MPDDRC_TIMEOUT_TIMEOUT_P3_Pos))
#define MPDDRC_TIMEOUT_Msk                    _U_(0x0000FFFF)                                      /**< (MPDDRC_TIMEOUT) Register Mask  */


/* -------- MPDDRC_REQ_PORT_0123 : (MPDDRC Offset: 0x4C) (R/W 32) Request Port 0-1-2-3 Register -------- */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Pos _U_(0)                                               /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Pos) /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Msk & ((value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Pos))
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Pos _U_(8)                                               /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Pos) /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Msk & ((value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Pos))
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Pos _U_(16)                                              /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Pos) /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Msk & ((value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Pos))
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Pos _U_(24)                                              /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Msk (_U_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Pos) /**< (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Msk & ((value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Pos))
#define MPDDRC_REQ_PORT_0123_Msk              _U_(0xFFFFFFFF)                                      /**< (MPDDRC_REQ_PORT_0123) Register Mask  */


/* -------- MPDDRC_BDW_PORT_0123 : (MPDDRC Offset: 0x54) ( R/ 32) Current/Maximum Bandwidth Port 0-1-2-3 Register -------- */
#define MPDDRC_BDW_PORT_0123_BDW_P0_Pos       _U_(0)                                               /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P0_Msk       (_U_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P0_Pos)       /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P0(value)    (MPDDRC_BDW_PORT_0123_BDW_P0_Msk & ((value) << MPDDRC_BDW_PORT_0123_BDW_P0_Pos))
#define MPDDRC_BDW_PORT_0123_BDW_P1_Pos       _U_(8)                                               /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P1_Msk       (_U_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P1_Pos)       /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P1(value)    (MPDDRC_BDW_PORT_0123_BDW_P1_Msk & ((value) << MPDDRC_BDW_PORT_0123_BDW_P1_Pos))
#define MPDDRC_BDW_PORT_0123_BDW_P2_Pos       _U_(16)                                              /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P2_Msk       (_U_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P2_Pos)       /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P2(value)    (MPDDRC_BDW_PORT_0123_BDW_P2_Msk & ((value) << MPDDRC_BDW_PORT_0123_BDW_P2_Pos))
#define MPDDRC_BDW_PORT_0123_BDW_P3_Pos       _U_(24)                                              /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P3_Msk       (_U_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P3_Pos)       /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P3(value)    (MPDDRC_BDW_PORT_0123_BDW_P3_Msk & ((value) << MPDDRC_BDW_PORT_0123_BDW_P3_Pos))
#define MPDDRC_BDW_PORT_0123_Msk              _U_(0x7F7F7F7F)                                      /**< (MPDDRC_BDW_PORT_0123) Register Mask  */


/* -------- MPDDRC_RD_DATA_PATH : (MPDDRC Offset: 0x5C) (R/W 32) Read Data Path Register -------- */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos _U_(0)                                               /**< (MPDDRC_RD_DATA_PATH) Shift Sampling Point of Data Position */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Msk (_U_(0x3) << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /**< (MPDDRC_RD_DATA_PATH) Shift Sampling Point of Data Mask */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING(value) (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Msk & ((value) << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos))
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_NO_SHIFT_Val _U_(0x0)                                             /**< (MPDDRC_RD_DATA_PATH) Initial sampling point.  */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_ONE_CYCLE_Val _U_(0x1)                                             /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by one cycle.  */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_TWO_CYCLES_Val _U_(0x2)                                             /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by two cycles.  */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_THREE_CYCLES_Val _U_(0x3)                                             /**< (MPDDRC_RD_DATA_PATH) Not applicable for DDR2 and LPDDR1 devices.  */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_NO_SHIFT (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_NO_SHIFT_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /**< (MPDDRC_RD_DATA_PATH) Initial sampling point. Position  */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_ONE_CYCLE (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_ONE_CYCLE_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by one cycle. Position  */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_TWO_CYCLES (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_TWO_CYCLES_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /**< (MPDDRC_RD_DATA_PATH) Sampling point is shifted by two cycles. Position  */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_THREE_CYCLES (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_THREE_CYCLES_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /**< (MPDDRC_RD_DATA_PATH) Not applicable for DDR2 and LPDDR1 devices. Position  */
#define MPDDRC_RD_DATA_PATH_Msk               _U_(0x00000003)                                      /**< (MPDDRC_RD_DATA_PATH) Register Mask  */


/* -------- MPDDRC_MCFGR : (MPDDRC Offset: 0x60) (R/W 32) Monitor Configuration Register -------- */
#define MPDDRC_MCFGR_EN_MONI_Pos              _U_(0)                                               /**< (MPDDRC_MCFGR) Enable Monitor Position */
#define MPDDRC_MCFGR_EN_MONI_Msk              (_U_(0x1) << MPDDRC_MCFGR_EN_MONI_Pos)               /**< (MPDDRC_MCFGR) Enable Monitor Mask */
#define MPDDRC_MCFGR_EN_MONI(value)           (MPDDRC_MCFGR_EN_MONI_Msk & ((value) << MPDDRC_MCFGR_EN_MONI_Pos))
#define MPDDRC_MCFGR_SOFT_RESET_Pos           _U_(1)                                               /**< (MPDDRC_MCFGR) Soft Reset Position */
#define MPDDRC_MCFGR_SOFT_RESET_Msk           (_U_(0x1) << MPDDRC_MCFGR_SOFT_RESET_Pos)            /**< (MPDDRC_MCFGR) Soft Reset Mask */
#define MPDDRC_MCFGR_SOFT_RESET(value)        (MPDDRC_MCFGR_SOFT_RESET_Msk & ((value) << MPDDRC_MCFGR_SOFT_RESET_Pos))
#define MPDDRC_MCFGR_RUN_Pos                  _U_(4)                                               /**< (MPDDRC_MCFGR) Control Monitor Position */
#define MPDDRC_MCFGR_RUN_Msk                  (_U_(0x1) << MPDDRC_MCFGR_RUN_Pos)                   /**< (MPDDRC_MCFGR) Control Monitor Mask */
#define MPDDRC_MCFGR_RUN(value)               (MPDDRC_MCFGR_RUN_Msk & ((value) << MPDDRC_MCFGR_RUN_Pos))
#define MPDDRC_MCFGR_READ_WRITE_Pos           _U_(8)                                               /**< (MPDDRC_MCFGR) Read/Write Access Position */
#define MPDDRC_MCFGR_READ_WRITE_Msk           (_U_(0x3) << MPDDRC_MCFGR_READ_WRITE_Pos)            /**< (MPDDRC_MCFGR) Read/Write Access Mask */
#define MPDDRC_MCFGR_READ_WRITE(value)        (MPDDRC_MCFGR_READ_WRITE_Msk & ((value) << MPDDRC_MCFGR_READ_WRITE_Pos))
#define   MPDDRC_MCFGR_READ_WRITE_TRIG_RD_WR_Val _U_(0x0)                                             /**< (MPDDRC_MCFGR) Read and Write accesses are triggered.  */
#define   MPDDRC_MCFGR_READ_WRITE_TRIG_WR_Val _U_(0x1)                                             /**< (MPDDRC_MCFGR) Only Write accesses are triggered.  */
#define   MPDDRC_MCFGR_READ_WRITE_TRIG_RD_Val _U_(0x2)                                             /**< (MPDDRC_MCFGR) Only Read accesses are triggered.  */
#define MPDDRC_MCFGR_READ_WRITE_TRIG_RD_WR    (MPDDRC_MCFGR_READ_WRITE_TRIG_RD_WR_Val << MPDDRC_MCFGR_READ_WRITE_Pos) /**< (MPDDRC_MCFGR) Read and Write accesses are triggered. Position  */
#define MPDDRC_MCFGR_READ_WRITE_TRIG_WR       (MPDDRC_MCFGR_READ_WRITE_TRIG_WR_Val << MPDDRC_MCFGR_READ_WRITE_Pos) /**< (MPDDRC_MCFGR) Only Write accesses are triggered. Position  */
#define MPDDRC_MCFGR_READ_WRITE_TRIG_RD       (MPDDRC_MCFGR_READ_WRITE_TRIG_RD_Val << MPDDRC_MCFGR_READ_WRITE_Pos) /**< (MPDDRC_MCFGR) Only Read accesses are triggered. Position  */
#define MPDDRC_MCFGR_REFR_CALIB_Pos           _U_(10)                                              /**< (MPDDRC_MCFGR) Refresh Calibration Position */
#define MPDDRC_MCFGR_REFR_CALIB_Msk           (_U_(0x1) << MPDDRC_MCFGR_REFR_CALIB_Pos)            /**< (MPDDRC_MCFGR) Refresh Calibration Mask */
#define MPDDRC_MCFGR_REFR_CALIB(value)        (MPDDRC_MCFGR_REFR_CALIB_Msk & ((value) << MPDDRC_MCFGR_REFR_CALIB_Pos))
#define MPDDRC_MCFGR_INFO_Pos                 _U_(11)                                              /**< (MPDDRC_MCFGR) Information Type Position */
#define MPDDRC_MCFGR_INFO_Msk                 (_U_(0x7) << MPDDRC_MCFGR_INFO_Pos)                  /**< (MPDDRC_MCFGR) Information Type Mask */
#define MPDDRC_MCFGR_INFO(value)              (MPDDRC_MCFGR_INFO_Msk & ((value) << MPDDRC_MCFGR_INFO_Pos))
#define   MPDDRC_MCFGR_INFO_MAX_WAIT_Val      _U_(0x0)                                             /**< (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time  */
#define   MPDDRC_MCFGR_INFO_NB_TRANSFERS_Val  _U_(0x1)                                             /**< (MPDDRC_MCFGR) Number of transfers on the port  */
#define   MPDDRC_MCFGR_INFO_TOTAL_LATENCY_Val _U_(0x2)                                             /**< (MPDDRC_MCFGR) Total latency on the port  */
#define   MPDDRC_MCFGR_INFO_MAX_WAIT_QOS01_Val _U_(0x4)                                             /**< (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time, depending on QOS values (0 and 1)  */
#define   MPDDRC_MCFGR_INFO_MAX_WAIT_QOS23_Val _U_(0x5)                                             /**< (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time, depending on QOS values (2 and 3)  */
#define MPDDRC_MCFGR_INFO_MAX_WAIT            (MPDDRC_MCFGR_INFO_MAX_WAIT_Val << MPDDRC_MCFGR_INFO_Pos) /**< (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time Position  */
#define MPDDRC_MCFGR_INFO_NB_TRANSFERS        (MPDDRC_MCFGR_INFO_NB_TRANSFERS_Val << MPDDRC_MCFGR_INFO_Pos) /**< (MPDDRC_MCFGR) Number of transfers on the port Position  */
#define MPDDRC_MCFGR_INFO_TOTAL_LATENCY       (MPDDRC_MCFGR_INFO_TOTAL_LATENCY_Val << MPDDRC_MCFGR_INFO_Pos) /**< (MPDDRC_MCFGR) Total latency on the port Position  */
#define MPDDRC_MCFGR_INFO_MAX_WAIT_QOS01      (MPDDRC_MCFGR_INFO_MAX_WAIT_QOS01_Val << MPDDRC_MCFGR_INFO_Pos) /**< (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time, depending on QOS values (0 and 1) Position  */
#define MPDDRC_MCFGR_INFO_MAX_WAIT_QOS23      (MPDDRC_MCFGR_INFO_MAX_WAIT_QOS23_Val << MPDDRC_MCFGR_INFO_Pos) /**< (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time, depending on QOS values (2 and 3) Position  */
#define MPDDRC_MCFGR_Msk                      _U_(0x00003F13)                                      /**< (MPDDRC_MCFGR) Register Mask  */


/* -------- MPDDRC_MADDR0 : (MPDDRC Offset: 0x64) (R/W 32) Monitor Address High/Low Port 0 Register -------- */
#define MPDDRC_MADDR0_ADDR_LOW_PORT0_Pos      _U_(0)                                               /**< (MPDDRC_MADDR0) Address Low on Port 0 Position */
#define MPDDRC_MADDR0_ADDR_LOW_PORT0_Msk      (_U_(0xFFFF) << MPDDRC_MADDR0_ADDR_LOW_PORT0_Pos)    /**< (MPDDRC_MADDR0) Address Low on Port 0 Mask */
#define MPDDRC_MADDR0_ADDR_LOW_PORT0(value)   (MPDDRC_MADDR0_ADDR_LOW_PORT0_Msk & ((value) << MPDDRC_MADDR0_ADDR_LOW_PORT0_Pos))
#define MPDDRC_MADDR0_ADDR_HIGH_PORT0_Pos     _U_(16)                                              /**< (MPDDRC_MADDR0) Address High on Port 0 Position */
#define MPDDRC_MADDR0_ADDR_HIGH_PORT0_Msk     (_U_(0xFFFF) << MPDDRC_MADDR0_ADDR_HIGH_PORT0_Pos)   /**< (MPDDRC_MADDR0) Address High on Port 0 Mask */
#define MPDDRC_MADDR0_ADDR_HIGH_PORT0(value)  (MPDDRC_MADDR0_ADDR_HIGH_PORT0_Msk & ((value) << MPDDRC_MADDR0_ADDR_HIGH_PORT0_Pos))
#define MPDDRC_MADDR0_Msk                     _U_(0xFFFFFFFF)                                      /**< (MPDDRC_MADDR0) Register Mask  */


/* -------- MPDDRC_MADDR1 : (MPDDRC Offset: 0x68) (R/W 32) Monitor Address High/Low Port 1 Register -------- */
#define MPDDRC_MADDR1_ADDR_LOW_PORT1_Pos      _U_(0)                                               /**< (MPDDRC_MADDR1) Address Low on Port 1 Position */
#define MPDDRC_MADDR1_ADDR_LOW_PORT1_Msk      (_U_(0xFFFF) << MPDDRC_MADDR1_ADDR_LOW_PORT1_Pos)    /**< (MPDDRC_MADDR1) Address Low on Port 1 Mask */
#define MPDDRC_MADDR1_ADDR_LOW_PORT1(value)   (MPDDRC_MADDR1_ADDR_LOW_PORT1_Msk & ((value) << MPDDRC_MADDR1_ADDR_LOW_PORT1_Pos))
#define MPDDRC_MADDR1_ADDR_HIGH_PORT1_Pos     _U_(16)                                              /**< (MPDDRC_MADDR1) Address High on Port 1 Position */
#define MPDDRC_MADDR1_ADDR_HIGH_PORT1_Msk     (_U_(0xFFFF) << MPDDRC_MADDR1_ADDR_HIGH_PORT1_Pos)   /**< (MPDDRC_MADDR1) Address High on Port 1 Mask */
#define MPDDRC_MADDR1_ADDR_HIGH_PORT1(value)  (MPDDRC_MADDR1_ADDR_HIGH_PORT1_Msk & ((value) << MPDDRC_MADDR1_ADDR_HIGH_PORT1_Pos))
#define MPDDRC_MADDR1_Msk                     _U_(0xFFFFFFFF)                                      /**< (MPDDRC_MADDR1) Register Mask  */


/* -------- MPDDRC_MADDR2 : (MPDDRC Offset: 0x6C) (R/W 32) Monitor Address High/Low Port 2 Register -------- */
#define MPDDRC_MADDR2_ADDR_LOW_PORT2_Pos      _U_(0)                                               /**< (MPDDRC_MADDR2) Address Low on Port 2 Position */
#define MPDDRC_MADDR2_ADDR_LOW_PORT2_Msk      (_U_(0xFFFF) << MPDDRC_MADDR2_ADDR_LOW_PORT2_Pos)    /**< (MPDDRC_MADDR2) Address Low on Port 2 Mask */
#define MPDDRC_MADDR2_ADDR_LOW_PORT2(value)   (MPDDRC_MADDR2_ADDR_LOW_PORT2_Msk & ((value) << MPDDRC_MADDR2_ADDR_LOW_PORT2_Pos))
#define MPDDRC_MADDR2_ADDR_HIGH_PORT2_Pos     _U_(16)                                              /**< (MPDDRC_MADDR2) Address High on Port 2 Position */
#define MPDDRC_MADDR2_ADDR_HIGH_PORT2_Msk     (_U_(0xFFFF) << MPDDRC_MADDR2_ADDR_HIGH_PORT2_Pos)   /**< (MPDDRC_MADDR2) Address High on Port 2 Mask */
#define MPDDRC_MADDR2_ADDR_HIGH_PORT2(value)  (MPDDRC_MADDR2_ADDR_HIGH_PORT2_Msk & ((value) << MPDDRC_MADDR2_ADDR_HIGH_PORT2_Pos))
#define MPDDRC_MADDR2_Msk                     _U_(0xFFFFFFFF)                                      /**< (MPDDRC_MADDR2) Register Mask  */


/* -------- MPDDRC_MADDR3 : (MPDDRC Offset: 0x70) (R/W 32) Monitor Address High/Low Port 3 Register -------- */
#define MPDDRC_MADDR3_ADDR_LOW_PORT3_Pos      _U_(0)                                               /**< (MPDDRC_MADDR3) Address Low on Port 3 Position */
#define MPDDRC_MADDR3_ADDR_LOW_PORT3_Msk      (_U_(0xFFFF) << MPDDRC_MADDR3_ADDR_LOW_PORT3_Pos)    /**< (MPDDRC_MADDR3) Address Low on Port 3 Mask */
#define MPDDRC_MADDR3_ADDR_LOW_PORT3(value)   (MPDDRC_MADDR3_ADDR_LOW_PORT3_Msk & ((value) << MPDDRC_MADDR3_ADDR_LOW_PORT3_Pos))
#define MPDDRC_MADDR3_ADDR_HIGH_PORT3_Pos     _U_(16)                                              /**< (MPDDRC_MADDR3) Address High on Port 3 Position */
#define MPDDRC_MADDR3_ADDR_HIGH_PORT3_Msk     (_U_(0xFFFF) << MPDDRC_MADDR3_ADDR_HIGH_PORT3_Pos)   /**< (MPDDRC_MADDR3) Address High on Port 3 Mask */
#define MPDDRC_MADDR3_ADDR_HIGH_PORT3(value)  (MPDDRC_MADDR3_ADDR_HIGH_PORT3_Msk & ((value) << MPDDRC_MADDR3_ADDR_HIGH_PORT3_Pos))
#define MPDDRC_MADDR3_Msk                     _U_(0xFFFFFFFF)                                      /**< (MPDDRC_MADDR3) Register Mask  */


/* -------- MPDDRC_MINFO0 : (MPDDRC Offset: 0x84) ( R/ 32) Monitor Information Port 0 Register -------- */
#define MPDDRC_MINFO0_Msk                     _U_(0x00000000)                                      /**< (MPDDRC_MINFO0) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Pos _U_(0)                                               /**< (MPDDRC_MINFO0) Address High on Port 0 Position */
#define MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Pos) /**< (MPDDRC_MINFO0) Address High on Port 0 Mask */
#define MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING(value) (MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Msk & ((value) << MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Pos))
#define MPDDRC_MINFO0_MAX_WAIT_BURST_Pos      _U_(16)                                              /**< (MPDDRC_MINFO0) Type of Burst on Port 0 Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_Msk      (_U_(0x7) << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)       /**< (MPDDRC_MINFO0) Type of Burst on Port 0 Mask */
#define MPDDRC_MINFO0_MAX_WAIT_BURST(value)   (MPDDRC_MINFO0_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                             /**< (MPDDRC_MINFO0) Single transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                             /**< (MPDDRC_MINFO0) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                             /**< (MPDDRC_MINFO0) 4-beat wrapping burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                             /**< (MPDDRC_MINFO0) 4-beat incrementing burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                             /**< (MPDDRC_MINFO0) 8-beat wrapping burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                             /**< (MPDDRC_MINFO0) 8-beat incrementing burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                             /**< (MPDDRC_MINFO0) 16-beat wrapping burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                             /**< (MPDDRC_MINFO0) 16-beat incrementing burst  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO0_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO0) Single transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO0) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO0) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO0) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO0) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO0) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO0) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO0) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos       _U_(20)                                              /**< (MPDDRC_MINFO0) Transfer Size on Port 0 Position */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_Msk       (_U_(0x7) << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos)        /**< (MPDDRC_MINFO0) Transfer Size on Port 0 Mask */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO0_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                             /**< (MPDDRC_MINFO0) Byte transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                             /**< (MPDDRC_MINFO0) Halfword transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                             /**< (MPDDRC_MINFO0) Word transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                             /**< (MPDDRC_MINFO0) Dword transfer  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO0_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO0) Byte transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO0_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO0) Halfword transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO0_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO0) Word transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO0_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO0) Dword transfer Position  */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos _U_(24)                                              /**< (MPDDRC_MINFO0) Read or Write Access on Port 0 Position */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO0) Read or Write Access on Port 0 Mask */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Msk & ((value) << MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos))
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos       _U_(25)                                              /**< (MPDDRC_MINFO0) Value of Quality Of Service on Port 0 Position */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_Msk       (_U_(0x3) << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos)        /**< (MPDDRC_MINFO0) Value of Quality Of Service on Port 0 Mask */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO0_MAX_WAIT_LQOS_Msk & ((value) << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO0_MAX_WAIT_LQOS_BACKGROUND_Val _U_(0x0)                                             /**< (MPDDRC_MINFO0) Background transfers  */
#define   MPDDRC_MINFO0_MAX_WAIT_LQOS_BANDWIDTH_Val _U_(0x1)                                             /**< (MPDDRC_MINFO0) Bandwidth sensitive  */
#define   MPDDRC_MINFO0_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _U_(0x2)                                             /**< (MPDDRC_MINFO0) Latency sensitive  */
#define   MPDDRC_MINFO0_MAX_WAIT_LQOS_CRITICAL_LAT_Val _U_(0x3)                                             /**< (MPDDRC_MINFO0) Latency critical  */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO0_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO0) Background transfers Position  */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO0_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO0) Bandwidth sensitive Position  */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO0_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO0) Latency sensitive Position  */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO0_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO0) Latency critical Position  */
#define MPDDRC_MINFO0_MAX_WAIT_Msk            _U_(0x0777FFFF)                                       /**< (MPDDRC_MINFO0_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Pos _U_(0)                                               /**< (MPDDRC_MINFO0) Number of Transfers on Port 0 Position */
#define MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Pos) /**< (MPDDRC_MINFO0) Number of Transfers on Port 0 Mask */
#define MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS(value) (MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO0_NB_TRANSFERS_Msk        _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO0_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Pos _U_(0)                                               /**< (MPDDRC_MINFO0) Total Latency on Port 0 Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Pos) /**< (MPDDRC_MINFO0) Total Latency on Port 0 Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY(value) (MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_Msk       _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO0_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Pos _U_(0)                                               /**< (MPDDRC_MINFO0) Total Latency on Port 0 when value of qos is 0 Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Msk (_U_(0xFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Pos) /**< (MPDDRC_MINFO0) Total Latency on Port 0 when value of qos is 0 Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Msk & ((value) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Pos _U_(16)                                              /**< (MPDDRC_MINFO0) Total Latency on Port 1 when value of qos is 1 Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Msk (_U_(0xFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Pos) /**< (MPDDRC_MINFO0) Total Latency on Port 1 when value of qos is 1 Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Msk & ((value) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_Msk _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO0_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Pos _U_(0)                                               /**< (MPDDRC_MINFO0) Total Latency on Port 2 when value of qos is 2 Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Msk (_U_(0xFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Pos) /**< (MPDDRC_MINFO0) Total Latency on Port 2 when value of qos is 2 Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Msk & ((value) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Pos _U_(16)                                              /**< (MPDDRC_MINFO0) Total Latency on Port 3 when value of qos is 3 Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Msk (_U_(0xFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Pos) /**< (MPDDRC_MINFO0) Total Latency on Port 3 when value of qos is 3 Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Msk & ((value) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_Msk _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO0_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_MINFO1 : (MPDDRC Offset: 0x88) ( R/ 32) Monitor Information Port 1 Register -------- */
#define MPDDRC_MINFO1_Msk                     _U_(0x00000000)                                      /**< (MPDDRC_MINFO1) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Pos _U_(0)                                               /**< (MPDDRC_MINFO1) Address High on Port 1 Position */
#define MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Pos) /**< (MPDDRC_MINFO1) Address High on Port 1 Mask */
#define MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING(value) (MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Msk & ((value) << MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Pos))
#define MPDDRC_MINFO1_MAX_WAIT_BURST_Pos      _U_(16)                                              /**< (MPDDRC_MINFO1) Type of Burst on Port 1 Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_Msk      (_U_(0x7) << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)       /**< (MPDDRC_MINFO1) Type of Burst on Port 1 Mask */
#define MPDDRC_MINFO1_MAX_WAIT_BURST(value)   (MPDDRC_MINFO1_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                             /**< (MPDDRC_MINFO1) Single transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                             /**< (MPDDRC_MINFO1) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                             /**< (MPDDRC_MINFO1) 4-beat wrapping burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                             /**< (MPDDRC_MINFO1) 4-beat incrementing burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                             /**< (MPDDRC_MINFO1) 8-beat wrapping burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                             /**< (MPDDRC_MINFO1) 8-beat incrementing burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                             /**< (MPDDRC_MINFO1) 16-beat wrapping burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                             /**< (MPDDRC_MINFO1) 16-beat incrementing burst  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO1_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO1) Single transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO1) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO1) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO1) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO1) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO1) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO1) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO1) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos       _U_(20)                                              /**< (MPDDRC_MINFO1) Transfer Size on Port 1 Position */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_Msk       (_U_(0x7) << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos)        /**< (MPDDRC_MINFO1) Transfer Size on Port 1 Mask */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO1_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                             /**< (MPDDRC_MINFO1) Byte transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                             /**< (MPDDRC_MINFO1) Halfword transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                             /**< (MPDDRC_MINFO1) Word transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                             /**< (MPDDRC_MINFO1) Dword transfer  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO1_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO1) Byte transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO1_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO1) Halfword transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO1_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO1) Word transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO1_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO1) Dword transfer Position  */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos _U_(24)                                              /**< (MPDDRC_MINFO1) Read or Write Access on Port 1 Position */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO1) Read or Write Access on Port 1 Mask */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Msk & ((value) << MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos))
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos       _U_(25)                                              /**< (MPDDRC_MINFO1) Value of Quality Of Service on Port 1 Position */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_Msk       (_U_(0x3) << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos)        /**< (MPDDRC_MINFO1) Value of Quality Of Service on Port 1 Mask */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO1_MAX_WAIT_LQOS_Msk & ((value) << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO1_MAX_WAIT_LQOS_BACKGROUND_Val _U_(0x0)                                             /**< (MPDDRC_MINFO1) Background transfers  */
#define   MPDDRC_MINFO1_MAX_WAIT_LQOS_BANDWIDTH_Val _U_(0x1)                                             /**< (MPDDRC_MINFO1) Bandwidth sensitive  */
#define   MPDDRC_MINFO1_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _U_(0x2)                                             /**< (MPDDRC_MINFO1) Latency sensitive  */
#define   MPDDRC_MINFO1_MAX_WAIT_LQOS_CRITICAL_LAT_Val _U_(0x3)                                             /**< (MPDDRC_MINFO1) Latency critical  */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO1_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO1) Background transfers Position  */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO1_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO1) Bandwidth sensitive Position  */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO1_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO1) Latency sensitive Position  */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO1_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO1) Latency critical Position  */
#define MPDDRC_MINFO1_MAX_WAIT_Msk            _U_(0x0777FFFF)                                       /**< (MPDDRC_MINFO1_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Pos _U_(0)                                               /**< (MPDDRC_MINFO1) Number of Transfers on Port 1 Position */
#define MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Pos) /**< (MPDDRC_MINFO1) Number of Transfers on Port 1 Mask */
#define MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS(value) (MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO1_NB_TRANSFERS_Msk        _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO1_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Pos _U_(0)                                               /**< (MPDDRC_MINFO1) Total Latency on Port 1 Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Pos) /**< (MPDDRC_MINFO1) Total Latency on Port 1 Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY(value) (MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_Msk       _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO1_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Pos _U_(0)                                               /**< (MPDDRC_MINFO1) Total Latency on Port 0 when value of qos is 0 Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Msk (_U_(0xFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Pos) /**< (MPDDRC_MINFO1) Total Latency on Port 0 when value of qos is 0 Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Msk & ((value) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Pos _U_(16)                                              /**< (MPDDRC_MINFO1) Total Latency on Port 1 when value of qos is 1 Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Msk (_U_(0xFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Pos) /**< (MPDDRC_MINFO1) Total Latency on Port 1 when value of qos is 1 Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Msk & ((value) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_Msk _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO1_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Pos _U_(0)                                               /**< (MPDDRC_MINFO1) Total Latency on Port 2 when value of qos is 2 Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Msk (_U_(0xFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Pos) /**< (MPDDRC_MINFO1) Total Latency on Port 2 when value of qos is 2 Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Msk & ((value) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Pos _U_(16)                                              /**< (MPDDRC_MINFO1) Total Latency on Port 3 when value of qos is 3 Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Msk (_U_(0xFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Pos) /**< (MPDDRC_MINFO1) Total Latency on Port 3 when value of qos is 3 Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Msk & ((value) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_Msk _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO1_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_MINFO2 : (MPDDRC Offset: 0x8C) ( R/ 32) Monitor Information Port 2 Register -------- */
#define MPDDRC_MINFO2_Msk                     _U_(0x00000000)                                      /**< (MPDDRC_MINFO2) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Pos _U_(0)                                               /**< (MPDDRC_MINFO2) Address High on Port 2 Position */
#define MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Pos) /**< (MPDDRC_MINFO2) Address High on Port 2 Mask */
#define MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING(value) (MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Msk & ((value) << MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Pos))
#define MPDDRC_MINFO2_MAX_WAIT_BURST_Pos      _U_(16)                                              /**< (MPDDRC_MINFO2) Type of Burst on Port 2 Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_Msk      (_U_(0x7) << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)       /**< (MPDDRC_MINFO2) Type of Burst on Port 2 Mask */
#define MPDDRC_MINFO2_MAX_WAIT_BURST(value)   (MPDDRC_MINFO2_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                             /**< (MPDDRC_MINFO2) Single transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                             /**< (MPDDRC_MINFO2) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                             /**< (MPDDRC_MINFO2) 4-beat wrapping burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                             /**< (MPDDRC_MINFO2) 4-beat incrementing burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                             /**< (MPDDRC_MINFO2) 8-beat wrapping burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                             /**< (MPDDRC_MINFO2) 8-beat incrementing burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                             /**< (MPDDRC_MINFO2) 16-beat wrapping burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                             /**< (MPDDRC_MINFO2) 16-beat incrementing burst  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO2_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO2) Single transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO2) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO2) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO2) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO2) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO2) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO2) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO2) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos       _U_(20)                                              /**< (MPDDRC_MINFO2) Transfer Size on Port 2 Position */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_Msk       (_U_(0x7) << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos)        /**< (MPDDRC_MINFO2) Transfer Size on Port 2 Mask */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO2_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                             /**< (MPDDRC_MINFO2) Byte transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                             /**< (MPDDRC_MINFO2) Halfword transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                             /**< (MPDDRC_MINFO2) Word transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                             /**< (MPDDRC_MINFO2) Dword transfer  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO2_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO2) Byte transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO2_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO2) Halfword transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO2_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO2) Word transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO2_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO2) Dword transfer Position  */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos _U_(24)                                              /**< (MPDDRC_MINFO2) Read or Write Access on Port 2 Position */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO2) Read or Write Access on Port 2 Mask */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Msk & ((value) << MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos))
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos       _U_(25)                                              /**< (MPDDRC_MINFO2) Value of Quality Of Service on Port 2 Position */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_Msk       (_U_(0x3) << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos)        /**< (MPDDRC_MINFO2) Value of Quality Of Service on Port 2 Mask */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO2_MAX_WAIT_LQOS_Msk & ((value) << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO2_MAX_WAIT_LQOS_BACKGROUND_Val _U_(0x0)                                             /**< (MPDDRC_MINFO2) Background transfers  */
#define   MPDDRC_MINFO2_MAX_WAIT_LQOS_BANDWIDTH_Val _U_(0x1)                                             /**< (MPDDRC_MINFO2) Bandwidth sensitive  */
#define   MPDDRC_MINFO2_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _U_(0x2)                                             /**< (MPDDRC_MINFO2) Latency sensitive  */
#define   MPDDRC_MINFO2_MAX_WAIT_LQOS_CRITICAL_LAT_Val _U_(0x3)                                             /**< (MPDDRC_MINFO2) Latency critical  */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO2_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO2) Background transfers Position  */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO2_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO2) Bandwidth sensitive Position  */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO2_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO2) Latency sensitive Position  */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO2_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO2) Latency critical Position  */
#define MPDDRC_MINFO2_MAX_WAIT_Msk            _U_(0x0777FFFF)                                       /**< (MPDDRC_MINFO2_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Pos _U_(0)                                               /**< (MPDDRC_MINFO2) Number of Transfers on Port 2 Position */
#define MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Pos) /**< (MPDDRC_MINFO2) Number of Transfers on Port 2 Mask */
#define MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS(value) (MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO2_NB_TRANSFERS_Msk        _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO2_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Pos _U_(0)                                               /**< (MPDDRC_MINFO2) Total Latency on Port 2 Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Pos) /**< (MPDDRC_MINFO2) Total Latency on Port 2 Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY(value) (MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_Msk       _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO2_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Pos _U_(0)                                               /**< (MPDDRC_MINFO2) Total Latency on Port 0 when value of qos is 0 Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Msk (_U_(0xFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Pos) /**< (MPDDRC_MINFO2) Total Latency on Port 0 when value of qos is 0 Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Msk & ((value) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Pos _U_(16)                                              /**< (MPDDRC_MINFO2) Total Latency on Port 1 when value of qos is 1 Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Msk (_U_(0xFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Pos) /**< (MPDDRC_MINFO2) Total Latency on Port 1 when value of qos is 1 Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Msk & ((value) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_Msk _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO2_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Pos _U_(0)                                               /**< (MPDDRC_MINFO2) Total Latency on Port 2 when value of qos is 2 Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Msk (_U_(0xFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Pos) /**< (MPDDRC_MINFO2) Total Latency on Port 2 when value of qos is 2 Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Msk & ((value) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Pos _U_(16)                                              /**< (MPDDRC_MINFO2) Total Latency on Port 3 when value of qos is 3 Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Msk (_U_(0xFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Pos) /**< (MPDDRC_MINFO2) Total Latency on Port 3 when value of qos is 3 Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Msk & ((value) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_Msk _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO2_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_MINFO3 : (MPDDRC Offset: 0x90) ( R/ 32) Monitor Information Port 3 Register -------- */
#define MPDDRC_MINFO3_Msk                     _U_(0x00000000)                                      /**< (MPDDRC_MINFO3) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Pos _U_(0)                                               /**< (MPDDRC_MINFO3) Address High on Port 3 Position */
#define MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Msk (_U_(0xFFFF) << MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Pos) /**< (MPDDRC_MINFO3) Address High on Port 3 Mask */
#define MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING(value) (MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Msk & ((value) << MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Pos))
#define MPDDRC_MINFO3_MAX_WAIT_BURST_Pos      _U_(16)                                              /**< (MPDDRC_MINFO3) Type of Burst on Port 3 Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_Msk      (_U_(0x7) << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)       /**< (MPDDRC_MINFO3) Type of Burst on Port 3 Mask */
#define MPDDRC_MINFO3_MAX_WAIT_BURST(value)   (MPDDRC_MINFO3_MAX_WAIT_BURST_Msk & ((value) << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_SINGLE_Val _U_(0x0)                                             /**< (MPDDRC_MINFO3) Single transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR_Val _U_(0x1)                                             /**< (MPDDRC_MINFO3) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP4_Val _U_(0x2)                                             /**< (MPDDRC_MINFO3) 4-beat wrapping burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR4_Val _U_(0x3)                                             /**< (MPDDRC_MINFO3) 4-beat incrementing burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP8_Val _U_(0x4)                                             /**< (MPDDRC_MINFO3) 8-beat wrapping burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR8_Val _U_(0x5)                                             /**< (MPDDRC_MINFO3) 8-beat incrementing burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP16_Val _U_(0x6)                                             /**< (MPDDRC_MINFO3) 16-beat wrapping burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR16_Val _U_(0x7)                                             /**< (MPDDRC_MINFO3) 16-beat incrementing burst  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO3_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO3) Single transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO3) Incrementing burst of unspecified length Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO3) 4-beat wrapping burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO3) 4-beat incrementing burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO3) 8-beat wrapping burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO3) 8-beat incrementing burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO3) 16-beat wrapping burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /**< (MPDDRC_MINFO3) 16-beat incrementing burst Position  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos       _U_(20)                                              /**< (MPDDRC_MINFO3) Transfer Size on Port 3 Position */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_Msk       (_U_(0x7) << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos)        /**< (MPDDRC_MINFO3) Transfer Size on Port 3 Mask */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO3_MAX_WAIT_SIZE_Msk & ((value) << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_8BITS_Val _U_(0x0)                                             /**< (MPDDRC_MINFO3) Byte transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_16BITS_Val _U_(0x1)                                             /**< (MPDDRC_MINFO3) Halfword transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_32BITS_Val _U_(0x2)                                             /**< (MPDDRC_MINFO3) Word transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_64BITS_Val _U_(0x3)                                             /**< (MPDDRC_MINFO3) Dword transfer  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO3_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO3) Byte transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO3_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO3) Halfword transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO3_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO3) Word transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO3_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos) /**< (MPDDRC_MINFO3) Dword transfer Position  */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos _U_(24)                                              /**< (MPDDRC_MINFO3) Read or Write Access on Port 3 Position */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Msk (_U_(0x1) << MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos)  /**< (MPDDRC_MINFO3) Read or Write Access on Port 3 Mask */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Msk & ((value) << MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos))
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos       _U_(25)                                              /**< (MPDDRC_MINFO3) Value of Quality Of Service on Port 3 Position */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_Msk       (_U_(0x3) << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos)        /**< (MPDDRC_MINFO3) Value of Quality Of Service on Port 3 Mask */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO3_MAX_WAIT_LQOS_Msk & ((value) << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO3_MAX_WAIT_LQOS_BACKGROUND_Val _U_(0x0)                                             /**< (MPDDRC_MINFO3) Background transfers  */
#define   MPDDRC_MINFO3_MAX_WAIT_LQOS_BANDWIDTH_Val _U_(0x1)                                             /**< (MPDDRC_MINFO3) Bandwidth sensitive  */
#define   MPDDRC_MINFO3_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _U_(0x2)                                             /**< (MPDDRC_MINFO3) Latency sensitive  */
#define   MPDDRC_MINFO3_MAX_WAIT_LQOS_CRITICAL_LAT_Val _U_(0x3)                                             /**< (MPDDRC_MINFO3) Latency critical  */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO3_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO3) Background transfers Position  */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO3_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO3) Bandwidth sensitive Position  */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO3_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO3) Latency sensitive Position  */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO3_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos) /**< (MPDDRC_MINFO3) Latency critical Position  */
#define MPDDRC_MINFO3_MAX_WAIT_Msk            _U_(0x0777FFFF)                                       /**< (MPDDRC_MINFO3_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Pos _U_(0)                                               /**< (MPDDRC_MINFO3) Number of Transfers on Port 3 Position */
#define MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Pos) /**< (MPDDRC_MINFO3) Number of Transfers on Port 3 Mask */
#define MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS(value) (MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Msk & ((value) << MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO3_NB_TRANSFERS_Msk        _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO3_NB_TRANSFERS) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Pos _U_(0)                                               /**< (MPDDRC_MINFO3) Total Latency on Port 3 Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Msk (_U_(0xFFFFFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Pos) /**< (MPDDRC_MINFO3) Total Latency on Port 3 Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY(value) (MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Msk & ((value) << MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_Msk       _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO3_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Pos _U_(0)                                               /**< (MPDDRC_MINFO3) Total Latency on Port 0 when value of qos is 0 Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Msk (_U_(0xFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Pos) /**< (MPDDRC_MINFO3) Total Latency on Port 0 when value of qos is 0 Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Msk & ((value) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Pos _U_(16)                                              /**< (MPDDRC_MINFO3) Total Latency on Port 1 when value of qos is 1 Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Msk (_U_(0xFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Pos) /**< (MPDDRC_MINFO3) Total Latency on Port 1 when value of qos is 1 Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Msk & ((value) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_Msk _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO3_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Pos _U_(0)                                               /**< (MPDDRC_MINFO3) Total Latency on Port 2 when value of qos is 2 Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Msk (_U_(0xFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Pos) /**< (MPDDRC_MINFO3) Total Latency on Port 2 when value of qos is 2 Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Msk & ((value) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Pos _U_(16)                                              /**< (MPDDRC_MINFO3) Total Latency on Port 3 when value of qos is 3 Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Msk (_U_(0xFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Pos) /**< (MPDDRC_MINFO3) Total Latency on Port 3 when value of qos is 3 Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Msk & ((value) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_Msk _U_(0xFFFFFFFF)                                       /**< (MPDDRC_MINFO3_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_IER : (MPDDRC Offset: 0xC0) ( /W 32) Interrupt Enable Register -------- */
#define MPDDRC_IER_SEC_Pos                    _U_(0)                                               /**< (MPDDRC_IER) Security and /or Safety Interrupt Enable Position */
#define MPDDRC_IER_SEC_Msk                    (_U_(0x1) << MPDDRC_IER_SEC_Pos)                     /**< (MPDDRC_IER) Security and /or Safety Interrupt Enable Mask */
#define MPDDRC_IER_SEC(value)                 (MPDDRC_IER_SEC_Msk & ((value) << MPDDRC_IER_SEC_Pos))
#define MPDDRC_IER_RD_ERR_Pos                 _U_(1)                                               /**< (MPDDRC_IER) Read Error Interrupt Enable Position */
#define MPDDRC_IER_RD_ERR_Msk                 (_U_(0x1) << MPDDRC_IER_RD_ERR_Pos)                  /**< (MPDDRC_IER) Read Error Interrupt Enable Mask */
#define MPDDRC_IER_RD_ERR(value)              (MPDDRC_IER_RD_ERR_Msk & ((value) << MPDDRC_IER_RD_ERR_Pos))
#define MPDDRC_IER_Msk                        _U_(0x00000003)                                      /**< (MPDDRC_IER) Register Mask  */


/* -------- MPDDRC_IDR : (MPDDRC Offset: 0xC4) ( /W 32) Interrupt Disable Register -------- */
#define MPDDRC_IDR_SEC_Pos                    _U_(0)                                               /**< (MPDDRC_IDR) Security and /or Safety Interrupt Disable Position */
#define MPDDRC_IDR_SEC_Msk                    (_U_(0x1) << MPDDRC_IDR_SEC_Pos)                     /**< (MPDDRC_IDR) Security and /or Safety Interrupt Disable Mask */
#define MPDDRC_IDR_SEC(value)                 (MPDDRC_IDR_SEC_Msk & ((value) << MPDDRC_IDR_SEC_Pos))
#define MPDDRC_IDR_RD_ERR_Pos                 _U_(1)                                               /**< (MPDDRC_IDR) Read Error Interrupt Disable Position */
#define MPDDRC_IDR_RD_ERR_Msk                 (_U_(0x1) << MPDDRC_IDR_RD_ERR_Pos)                  /**< (MPDDRC_IDR) Read Error Interrupt Disable Mask */
#define MPDDRC_IDR_RD_ERR(value)              (MPDDRC_IDR_RD_ERR_Msk & ((value) << MPDDRC_IDR_RD_ERR_Pos))
#define MPDDRC_IDR_Msk                        _U_(0x00000003)                                      /**< (MPDDRC_IDR) Register Mask  */


/* -------- MPDDRC_IMR : (MPDDRC Offset: 0xC8) ( R/ 32) Interrupt Mask Register -------- */
#define MPDDRC_IMR_SEC_Pos                    _U_(0)                                               /**< (MPDDRC_IMR) Security and /or Safety Interrupt Mask Position */
#define MPDDRC_IMR_SEC_Msk                    (_U_(0x1) << MPDDRC_IMR_SEC_Pos)                     /**< (MPDDRC_IMR) Security and /or Safety Interrupt Mask Mask */
#define MPDDRC_IMR_SEC(value)                 (MPDDRC_IMR_SEC_Msk & ((value) << MPDDRC_IMR_SEC_Pos))
#define MPDDRC_IMR_RD_ERR_Pos                 _U_(1)                                               /**< (MPDDRC_IMR) Read Error Interrupt Mask Position */
#define MPDDRC_IMR_RD_ERR_Msk                 (_U_(0x1) << MPDDRC_IMR_RD_ERR_Pos)                  /**< (MPDDRC_IMR) Read Error Interrupt Mask Mask */
#define MPDDRC_IMR_RD_ERR(value)              (MPDDRC_IMR_RD_ERR_Msk & ((value) << MPDDRC_IMR_RD_ERR_Pos))
#define MPDDRC_IMR_Msk                        _U_(0x00000003)                                      /**< (MPDDRC_IMR) Register Mask  */


/* -------- MPDDRC_ISR : (MPDDRC Offset: 0xCC) ( R/ 32) Interrupt Status Register -------- */
#define MPDDRC_ISR_SEC_Pos                    _U_(0)                                               /**< (MPDDRC_ISR) Security and /or Safety Event Position */
#define MPDDRC_ISR_SEC_Msk                    (_U_(0x1) << MPDDRC_ISR_SEC_Pos)                     /**< (MPDDRC_ISR) Security and /or Safety Event Mask */
#define MPDDRC_ISR_SEC(value)                 (MPDDRC_ISR_SEC_Msk & ((value) << MPDDRC_ISR_SEC_Pos))
#define MPDDRC_ISR_RD_ERR_Pos                 _U_(1)                                               /**< (MPDDRC_ISR) Read Error Position */
#define MPDDRC_ISR_RD_ERR_Msk                 (_U_(0x1) << MPDDRC_ISR_RD_ERR_Pos)                  /**< (MPDDRC_ISR) Read Error Mask */
#define MPDDRC_ISR_RD_ERR(value)              (MPDDRC_ISR_RD_ERR_Msk & ((value) << MPDDRC_ISR_RD_ERR_Pos))
#define MPDDRC_ISR_Msk                        _U_(0x00000003)                                      /**< (MPDDRC_ISR) Register Mask  */


/* -------- MPDDRC_SAFETY : (MPDDRC Offset: 0xD0) (R/W 32) Safety Register -------- */
#define MPDDRC_SAFETY_ADDRESS_Pos             _U_(0)                                               /**< (MPDDRC_SAFETY) Memory Device Address Position */
#define MPDDRC_SAFETY_ADDRESS_Msk             (_U_(0xFFFFFFF) << MPDDRC_SAFETY_ADDRESS_Pos)        /**< (MPDDRC_SAFETY) Memory Device Address Mask */
#define MPDDRC_SAFETY_ADDRESS(value)          (MPDDRC_SAFETY_ADDRESS_Msk & ((value) << MPDDRC_SAFETY_ADDRESS_Pos))
#define MPDDRC_SAFETY_EN_Pos                  _U_(28)                                              /**< (MPDDRC_SAFETY) Enable Periodic Check of Memory Device Position */
#define MPDDRC_SAFETY_EN_Msk                  (_U_(0x1) << MPDDRC_SAFETY_EN_Pos)                   /**< (MPDDRC_SAFETY) Enable Periodic Check of Memory Device Mask */
#define MPDDRC_SAFETY_EN(value)               (MPDDRC_SAFETY_EN_Msk & ((value) << MPDDRC_SAFETY_EN_Pos))
#define MPDDRC_SAFETY_Msk                     _U_(0x1FFFFFFF)                                      /**< (MPDDRC_SAFETY) Register Mask  */


/* -------- MPDDRC_WPMR : (MPDDRC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define MPDDRC_WPMR_WPEN_Pos                  _U_(0)                                               /**< (MPDDRC_WPMR) Write Protection Enable Position */
#define MPDDRC_WPMR_WPEN_Msk                  (_U_(0x1) << MPDDRC_WPMR_WPEN_Pos)                   /**< (MPDDRC_WPMR) Write Protection Enable Mask */
#define MPDDRC_WPMR_WPEN(value)               (MPDDRC_WPMR_WPEN_Msk & ((value) << MPDDRC_WPMR_WPEN_Pos))
#define MPDDRC_WPMR_WPITEN_Pos                _U_(1)                                               /**< (MPDDRC_WPMR) Write Protection Interruption Enable Position */
#define MPDDRC_WPMR_WPITEN_Msk                (_U_(0x1) << MPDDRC_WPMR_WPITEN_Pos)                 /**< (MPDDRC_WPMR) Write Protection Interruption Enable Mask */
#define MPDDRC_WPMR_WPITEN(value)             (MPDDRC_WPMR_WPITEN_Msk & ((value) << MPDDRC_WPMR_WPITEN_Pos))
#define MPDDRC_WPMR_FIRSTE_Pos                _U_(4)                                               /**< (MPDDRC_WPMR) First Error Report Enable Position */
#define MPDDRC_WPMR_FIRSTE_Msk                (_U_(0x1) << MPDDRC_WPMR_FIRSTE_Pos)                 /**< (MPDDRC_WPMR) First Error Report Enable Mask */
#define MPDDRC_WPMR_FIRSTE(value)             (MPDDRC_WPMR_FIRSTE_Msk & ((value) << MPDDRC_WPMR_FIRSTE_Pos))
#define MPDDRC_WPMR_WPKEY_Pos                 _U_(8)                                               /**< (MPDDRC_WPMR) Write Protection Key Position */
#define MPDDRC_WPMR_WPKEY_Msk                 (_U_(0xFFFFFF) << MPDDRC_WPMR_WPKEY_Pos)             /**< (MPDDRC_WPMR) Write Protection Key Mask */
#define MPDDRC_WPMR_WPKEY(value)              (MPDDRC_WPMR_WPKEY_Msk & ((value) << MPDDRC_WPMR_WPKEY_Pos))
#define   MPDDRC_WPMR_WPKEY_PASSWD_Val        _U_(0x444452)                                        /**< (MPDDRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0.  */
#define MPDDRC_WPMR_WPKEY_PASSWD              (MPDDRC_WPMR_WPKEY_PASSWD_Val << MPDDRC_WPMR_WPKEY_Pos) /**< (MPDDRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0. Position  */
#define MPDDRC_WPMR_Msk                       _U_(0xFFFFFF13)                                      /**< (MPDDRC_WPMR) Register Mask  */


/* -------- MPDDRC_WPSR : (MPDDRC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define MPDDRC_WPSR_WPVS_Pos                  _U_(0)                                               /**< (MPDDRC_WPSR) Write Protection Enable Position */
#define MPDDRC_WPSR_WPVS_Msk                  (_U_(0x1) << MPDDRC_WPSR_WPVS_Pos)                   /**< (MPDDRC_WPSR) Write Protection Enable Mask */
#define MPDDRC_WPSR_WPVS(value)               (MPDDRC_WPSR_WPVS_Msk & ((value) << MPDDRC_WPSR_WPVS_Pos))
#define MPDDRC_WPSR_CGD_Pos                   _U_(1)                                               /**< (MPDDRC_WPSR) Clock Glitch Detected (cleared on read) Position */
#define MPDDRC_WPSR_CGD_Msk                   (_U_(0x1) << MPDDRC_WPSR_CGD_Pos)                    /**< (MPDDRC_WPSR) Clock Glitch Detected (cleared on read) Mask */
#define MPDDRC_WPSR_CGD(value)                (MPDDRC_WPSR_CGD_Msk & ((value) << MPDDRC_WPSR_CGD_Pos))
#define MPDDRC_WPSR_SEQE_Pos                  _U_(2)                                               /**< (MPDDRC_WPSR) Internal Sequencer Error (cleared on read) Position */
#define MPDDRC_WPSR_SEQE_Msk                  (_U_(0x1) << MPDDRC_WPSR_SEQE_Pos)                   /**< (MPDDRC_WPSR) Internal Sequencer Error (cleared on read) Mask */
#define MPDDRC_WPSR_SEQE(value)               (MPDDRC_WPSR_SEQE_Msk & ((value) << MPDDRC_WPSR_SEQE_Pos))
#define MPDDRC_WPSR_SWE_Pos                   _U_(3)                                               /**< (MPDDRC_WPSR) Software Control Error (cleared on read) Position */
#define MPDDRC_WPSR_SWE_Msk                   (_U_(0x1) << MPDDRC_WPSR_SWE_Pos)                    /**< (MPDDRC_WPSR) Software Control Error (cleared on read) Mask */
#define MPDDRC_WPSR_SWE(value)                (MPDDRC_WPSR_SWE_Msk & ((value) << MPDDRC_WPSR_SWE_Pos))
#define MPDDRC_WPSR_WPVSRC_Pos                _U_(8)                                               /**< (MPDDRC_WPSR) Write Protection Violation Source Position */
#define MPDDRC_WPSR_WPVSRC_Msk                (_U_(0xFFFF) << MPDDRC_WPSR_WPVSRC_Pos)              /**< (MPDDRC_WPSR) Write Protection Violation Source Mask */
#define MPDDRC_WPSR_WPVSRC(value)             (MPDDRC_WPSR_WPVSRC_Msk & ((value) << MPDDRC_WPSR_WPVSRC_Pos))
#define MPDDRC_WPSR_SWETYP_Pos                _U_(24)                                              /**< (MPDDRC_WPSR) Software Error Type (cleared on read) Position */
#define MPDDRC_WPSR_SWETYP_Msk                (_U_(0x3) << MPDDRC_WPSR_SWETYP_Pos)                 /**< (MPDDRC_WPSR) Software Error Type (cleared on read) Mask */
#define MPDDRC_WPSR_SWETYP(value)             (MPDDRC_WPSR_SWETYP_Msk & ((value) << MPDDRC_WPSR_SWETYP_Pos))
#define   MPDDRC_WPSR_SWETYP_READ_WO_Val      _U_(0x0)                                             /**< (MPDDRC_WPSR) A write-only register has been read (warning).  */
#define   MPDDRC_WPSR_SWETYP_WRITE_RO_Val     _U_(0x1)                                             /**< (MPDDRC_WPSR) MPDDRC is enabled and a write access has been performed on a read-only register (warning).  */
#define   MPDDRC_WPSR_SWETYP_UNDEF_RW_Val     _U_(0x2)                                             /**< (MPDDRC_WPSR) Access to an undefined address (warning).  */
#define   MPDDRC_WPSR_SWETYP_W_AFTER_INIT_Val _U_(0x3)                                             /**< (MPDDRC_WPSR) Abnormal use of MPDDRC user interface when memory device is already configured and initialized, i.e., if MPDDRC_RTR.COUNT > 0 (error).  */
#define MPDDRC_WPSR_SWETYP_READ_WO            (MPDDRC_WPSR_SWETYP_READ_WO_Val << MPDDRC_WPSR_SWETYP_Pos) /**< (MPDDRC_WPSR) A write-only register has been read (warning). Position  */
#define MPDDRC_WPSR_SWETYP_WRITE_RO           (MPDDRC_WPSR_SWETYP_WRITE_RO_Val << MPDDRC_WPSR_SWETYP_Pos) /**< (MPDDRC_WPSR) MPDDRC is enabled and a write access has been performed on a read-only register (warning). Position  */
#define MPDDRC_WPSR_SWETYP_UNDEF_RW           (MPDDRC_WPSR_SWETYP_UNDEF_RW_Val << MPDDRC_WPSR_SWETYP_Pos) /**< (MPDDRC_WPSR) Access to an undefined address (warning). Position  */
#define MPDDRC_WPSR_SWETYP_W_AFTER_INIT       (MPDDRC_WPSR_SWETYP_W_AFTER_INIT_Val << MPDDRC_WPSR_SWETYP_Pos) /**< (MPDDRC_WPSR) Abnormal use of MPDDRC user interface when memory device is already configured and initialized, i.e., if MPDDRC_RTR.COUNT > 0 (error). Position  */
#define MPDDRC_WPSR_ECLASS_Pos                _U_(31)                                              /**< (MPDDRC_WPSR) Software Error Class (cleared on read) Position */
#define MPDDRC_WPSR_ECLASS_Msk                (_U_(0x1) << MPDDRC_WPSR_ECLASS_Pos)                 /**< (MPDDRC_WPSR) Software Error Class (cleared on read) Mask */
#define MPDDRC_WPSR_ECLASS(value)             (MPDDRC_WPSR_ECLASS_Msk & ((value) << MPDDRC_WPSR_ECLASS_Pos))
#define   MPDDRC_WPSR_ECLASS_WARNING_Val      _U_(0x0)                                             /**< (MPDDRC_WPSR) An abnormal access that does not affect system functionality is performed.  */
#define   MPDDRC_WPSR_ECLASS_ERROR_Val        _U_(0x1)                                             /**< (MPDDRC_WPSR) An access is performed into some registers after memory device initialization sequence.  */
#define MPDDRC_WPSR_ECLASS_WARNING            (MPDDRC_WPSR_ECLASS_WARNING_Val << MPDDRC_WPSR_ECLASS_Pos) /**< (MPDDRC_WPSR) An abnormal access that does not affect system functionality is performed. Position  */
#define MPDDRC_WPSR_ECLASS_ERROR              (MPDDRC_WPSR_ECLASS_ERROR_Val << MPDDRC_WPSR_ECLASS_Pos) /**< (MPDDRC_WPSR) An access is performed into some registers after memory device initialization sequence. Position  */
#define MPDDRC_WPSR_Msk                       _U_(0x83FFFF0F)                                      /**< (MPDDRC_WPSR) Register Mask  */


/** \brief MPDDRC register offsets definitions */
#define MPDDRC_MR_REG_OFST             (0x00)              /**< (MPDDRC_MR) Mode Register Offset */
#define MPDDRC_RTR_REG_OFST            (0x04)              /**< (MPDDRC_RTR) Refresh Timer Register Offset */
#define MPDDRC_CR_REG_OFST             (0x08)              /**< (MPDDRC_CR) Configuration Register Offset */
#define MPDDRC_TPR0_REG_OFST           (0x0C)              /**< (MPDDRC_TPR0) Timing Parameter 0 Register Offset */
#define MPDDRC_TPR1_REG_OFST           (0x10)              /**< (MPDDRC_TPR1) Timing Parameter 1 Register Offset */
#define MPDDRC_TPR2_REG_OFST           (0x14)              /**< (MPDDRC_TPR2) Timing Parameter 2 Register Offset */
#define MPDDRC_LPR_REG_OFST            (0x1C)              /**< (MPDDRC_LPR) Low-Power Register Offset */
#define MPDDRC_MD_REG_OFST             (0x20)              /**< (MPDDRC_MD) Memory Device Register Offset */
#define MPDDRC_IO_CALIBR_REG_OFST      (0x34)              /**< (MPDDRC_IO_CALIBR) I/O Calibration Register Offset */
#define MPDDRC_OCMS_REG_OFST           (0x38)              /**< (MPDDRC_OCMS) OCMS Register Offset */
#define MPDDRC_OCMS_KEY1_REG_OFST      (0x3C)              /**< (MPDDRC_OCMS_KEY1) OCMS KEY1 Register Offset */
#define MPDDRC_OCMS_KEY2_REG_OFST      (0x40)              /**< (MPDDRC_OCMS_KEY2) OCMS KEY2 Register Offset */
#define MPDDRC_CONF_ARBITER_REG_OFST   (0x44)              /**< (MPDDRC_CONF_ARBITER) Configuration Arbiter Register Offset */
#define MPDDRC_TIMEOUT_REG_OFST        (0x48)              /**< (MPDDRC_TIMEOUT) Timeout Register Offset */
#define MPDDRC_REQ_PORT_0123_REG_OFST  (0x4C)              /**< (MPDDRC_REQ_PORT_0123) Request Port 0-1-2-3 Register Offset */
#define MPDDRC_BDW_PORT_0123_REG_OFST  (0x54)              /**< (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth Port 0-1-2-3 Register Offset */
#define MPDDRC_RD_DATA_PATH_REG_OFST   (0x5C)              /**< (MPDDRC_RD_DATA_PATH) Read Data Path Register Offset */
#define MPDDRC_MCFGR_REG_OFST          (0x60)              /**< (MPDDRC_MCFGR) Monitor Configuration Register Offset */
#define MPDDRC_MADDR0_REG_OFST         (0x64)              /**< (MPDDRC_MADDR0) Monitor Address High/Low Port 0 Register Offset */
#define MPDDRC_MADDR1_REG_OFST         (0x68)              /**< (MPDDRC_MADDR1) Monitor Address High/Low Port 1 Register Offset */
#define MPDDRC_MADDR2_REG_OFST         (0x6C)              /**< (MPDDRC_MADDR2) Monitor Address High/Low Port 2 Register Offset */
#define MPDDRC_MADDR3_REG_OFST         (0x70)              /**< (MPDDRC_MADDR3) Monitor Address High/Low Port 3 Register Offset */
#define MPDDRC_MINFO0_REG_OFST         (0x84)              /**< (MPDDRC_MINFO0) Monitor Information Port 0 Register Offset */
#define MPDDRC_MINFO1_REG_OFST         (0x88)              /**< (MPDDRC_MINFO1) Monitor Information Port 1 Register Offset */
#define MPDDRC_MINFO2_REG_OFST         (0x8C)              /**< (MPDDRC_MINFO2) Monitor Information Port 2 Register Offset */
#define MPDDRC_MINFO3_REG_OFST         (0x90)              /**< (MPDDRC_MINFO3) Monitor Information Port 3 Register Offset */
#define MPDDRC_IER_REG_OFST            (0xC0)              /**< (MPDDRC_IER) Interrupt Enable Register Offset */
#define MPDDRC_IDR_REG_OFST            (0xC4)              /**< (MPDDRC_IDR) Interrupt Disable Register Offset */
#define MPDDRC_IMR_REG_OFST            (0xC8)              /**< (MPDDRC_IMR) Interrupt Mask Register Offset */
#define MPDDRC_ISR_REG_OFST            (0xCC)              /**< (MPDDRC_ISR) Interrupt Status Register Offset */
#define MPDDRC_SAFETY_REG_OFST         (0xD0)              /**< (MPDDRC_SAFETY) Safety Register Offset */
#define MPDDRC_WPMR_REG_OFST           (0xE4)              /**< (MPDDRC_WPMR) Write Protection Mode Register Offset */
#define MPDDRC_WPSR_REG_OFST           (0xE8)              /**< (MPDDRC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MPDDRC register API structure */
typedef struct
{
  __IO  uint32_t                       MPDDRC_MR;          /**< Offset: 0x00 (R/W  32) Mode Register */
  __IO  uint32_t                       MPDDRC_RTR;         /**< Offset: 0x04 (R/W  32) Refresh Timer Register */
  __IO  uint32_t                       MPDDRC_CR;          /**< Offset: 0x08 (R/W  32) Configuration Register */
  __IO  uint32_t                       MPDDRC_TPR0;        /**< Offset: 0x0C (R/W  32) Timing Parameter 0 Register */
  __IO  uint32_t                       MPDDRC_TPR1;        /**< Offset: 0x10 (R/W  32) Timing Parameter 1 Register */
  __IO  uint32_t                       MPDDRC_TPR2;        /**< Offset: 0x14 (R/W  32) Timing Parameter 2 Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       MPDDRC_LPR;         /**< Offset: 0x1C (R/W  32) Low-Power Register */
  __IO  uint32_t                       MPDDRC_MD;          /**< Offset: 0x20 (R/W  32) Memory Device Register */
  __I   uint8_t                        Reserved2[0x10];
  __IO  uint32_t                       MPDDRC_IO_CALIBR;   /**< Offset: 0x34 (R/W  32) I/O Calibration Register */
  __IO  uint32_t                       MPDDRC_OCMS;        /**< Offset: 0x38 (R/W  32) OCMS Register */
  __O   uint32_t                       MPDDRC_OCMS_KEY1;   /**< Offset: 0x3C ( /W  32) OCMS KEY1 Register */
  __O   uint32_t                       MPDDRC_OCMS_KEY2;   /**< Offset: 0x40 ( /W  32) OCMS KEY2 Register */
  __IO  uint32_t                       MPDDRC_CONF_ARBITER; /**< Offset: 0x44 (R/W  32) Configuration Arbiter Register */
  __IO  uint32_t                       MPDDRC_TIMEOUT;     /**< Offset: 0x48 (R/W  32) Timeout Register */
  __IO  uint32_t                       MPDDRC_REQ_PORT_0123; /**< Offset: 0x4C (R/W  32) Request Port 0-1-2-3 Register */
  __I   uint8_t                        Reserved3[0x04];
  __I   uint32_t                       MPDDRC_BDW_PORT_0123; /**< Offset: 0x54 (R/   32) Current/Maximum Bandwidth Port 0-1-2-3 Register */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       MPDDRC_RD_DATA_PATH; /**< Offset: 0x5C (R/W  32) Read Data Path Register */
  __IO  uint32_t                       MPDDRC_MCFGR;       /**< Offset: 0x60 (R/W  32) Monitor Configuration Register */
  __IO  uint32_t                       MPDDRC_MADDR0;      /**< Offset: 0x64 (R/W  32) Monitor Address High/Low Port 0 Register */
  __IO  uint32_t                       MPDDRC_MADDR1;      /**< Offset: 0x68 (R/W  32) Monitor Address High/Low Port 1 Register */
  __IO  uint32_t                       MPDDRC_MADDR2;      /**< Offset: 0x6C (R/W  32) Monitor Address High/Low Port 2 Register */
  __IO  uint32_t                       MPDDRC_MADDR3;      /**< Offset: 0x70 (R/W  32) Monitor Address High/Low Port 3 Register */
  __I   uint8_t                        Reserved5[0x10];
  __I   uint32_t                       MPDDRC_MINFO0;      /**< Offset: 0x84 (R/   32) Monitor Information Port 0 Register */
  __I   uint32_t                       MPDDRC_MINFO1;      /**< Offset: 0x88 (R/   32) Monitor Information Port 1 Register */
  __I   uint32_t                       MPDDRC_MINFO2;      /**< Offset: 0x8C (R/   32) Monitor Information Port 2 Register */
  __I   uint32_t                       MPDDRC_MINFO3;      /**< Offset: 0x90 (R/   32) Monitor Information Port 3 Register */
  __I   uint8_t                        Reserved6[0x2C];
  __O   uint32_t                       MPDDRC_IER;         /**< Offset: 0xC0 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       MPDDRC_IDR;         /**< Offset: 0xC4 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       MPDDRC_IMR;         /**< Offset: 0xC8 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       MPDDRC_ISR;         /**< Offset: 0xCC (R/   32) Interrupt Status Register */
  __IO  uint32_t                       MPDDRC_SAFETY;      /**< Offset: 0xD0 (R/W  32) Safety Register */
  __I   uint8_t                        Reserved7[0x10];
  __IO  uint32_t                       MPDDRC_WPMR;        /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       MPDDRC_WPSR;        /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} mpddrc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_MPDDRC_COMPONENT_H_ */
