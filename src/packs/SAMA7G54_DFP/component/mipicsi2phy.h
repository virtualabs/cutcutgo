/*
 * Component description for MIPICSI2PHY
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
#ifndef _SAMA7G_MIPICSI2PHY_COMPONENT_H_
#define _SAMA7G_MIPICSI2PHY_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MIPICSI2PHY                                  */
/* ************************************************************************** */

/* -------- MIPICSI2PHY_CSI_VERSION : (MIPICSI2PHY Offset: 0x00) ( R/ 32) Read-only register   Contains the version of DWC_mipi_csi2_host coded in 32-bit ASCII code. -------- */
#define MIPICSI2PHY_CSI_VERSION_VERSION_Pos   _U_(0)                                               /**< (MIPICSI2PHY_CSI_VERSION) This field indicates the version of the DWC_mipi_csi2_host. Position */
#define MIPICSI2PHY_CSI_VERSION_VERSION_Msk   (_U_(0xFFFFFFFF) << MIPICSI2PHY_CSI_VERSION_VERSION_Pos) /**< (MIPICSI2PHY_CSI_VERSION) This field indicates the version of the DWC_mipi_csi2_host. Mask */
#define MIPICSI2PHY_CSI_VERSION_VERSION(value) (MIPICSI2PHY_CSI_VERSION_VERSION_Msk & ((value) << MIPICSI2PHY_CSI_VERSION_VERSION_Pos))
#define MIPICSI2PHY_CSI_VERSION_Msk           _U_(0xFFFFFFFF)                                      /**< (MIPICSI2PHY_CSI_VERSION) Register Mask  */


/* -------- MIPICSI2PHY_CSI_N_LANES : (MIPICSI2PHY Offset: 0x04) (R/W 32) Static read and write register   Configures the number of active lanes that the DWC_mipi_csi2_host uses to receive the camera device data. -------- */
#define MIPICSI2PHY_CSI_N_LANES_N_LANES_Pos   _U_(0)                                               /**< (MIPICSI2PHY_CSI_N_LANES) Number of active data lanes:   -000: 1 Data Lane  -001: 2 Data Lanes  -010: 3 Data Lanes  -011: 4 Data Lanes - Only on D-PHY  -100: 5 Data Lanes - Only on D-PHY  -101: 6 Data Lanes - Only on D-PHY  -110: 7 Data Lanes - Only on D-PHY  -111: 8 Data Lanes - Only on D-PHY  This can only be updated when the PHY lane is in stopstate. Position */
#define MIPICSI2PHY_CSI_N_LANES_N_LANES_Msk   (_U_(0x7) << MIPICSI2PHY_CSI_N_LANES_N_LANES_Pos)    /**< (MIPICSI2PHY_CSI_N_LANES) Number of active data lanes:   -000: 1 Data Lane  -001: 2 Data Lanes  -010: 3 Data Lanes  -011: 4 Data Lanes - Only on D-PHY  -100: 5 Data Lanes - Only on D-PHY  -101: 6 Data Lanes - Only on D-PHY  -110: 7 Data Lanes - Only on D-PHY  -111: 8 Data Lanes - Only on D-PHY  This can only be updated when the PHY lane is in stopstate. Mask */
#define MIPICSI2PHY_CSI_N_LANES_N_LANES(value) (MIPICSI2PHY_CSI_N_LANES_N_LANES_Msk & ((value) << MIPICSI2PHY_CSI_N_LANES_N_LANES_Pos))
#define MIPICSI2PHY_CSI_N_LANES_Msk           _U_(0x00000007)                                      /**< (MIPICSI2PHY_CSI_N_LANES) Register Mask  */


/* -------- MIPICSI2PHY_CSI_CSI2_RESETN : (MIPICSI2PHY Offset: 0x08) (R/W 32) Static read and write register   Controls the DWC_mipi_csi2_host logic reset state. When activated, the internal logic of the controller goes into the reset state. The configuration is not reset to default values with this register, instead, only the internal controller logic is affected. -------- */
#define MIPICSI2PHY_CSI_CSI2_RESETN_CSI2_RESETN_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_CSI2_RESETN) DWC_mipi_csi2_host reset output. Active Low. Position */
#define MIPICSI2PHY_CSI_CSI2_RESETN_CSI2_RESETN_Msk (_U_(0x1) << MIPICSI2PHY_CSI_CSI2_RESETN_CSI2_RESETN_Pos) /**< (MIPICSI2PHY_CSI_CSI2_RESETN) DWC_mipi_csi2_host reset output. Active Low. Mask */
#define MIPICSI2PHY_CSI_CSI2_RESETN_CSI2_RESETN(value) (MIPICSI2PHY_CSI_CSI2_RESETN_CSI2_RESETN_Msk & ((value) << MIPICSI2PHY_CSI_CSI2_RESETN_CSI2_RESETN_Pos))
#define MIPICSI2PHY_CSI_CSI2_RESETN_Msk       _U_(0x00000001)                                      /**< (MIPICSI2PHY_CSI_CSI2_RESETN) Register Mask  */


/* -------- MIPICSI2PHY_CSI_INT_ST_MAIN : (MIPICSI2PHY Offset: 0x0C) ( R/ 32) Clear on read register   Contains the status of individual interrupt sources, regardless of the contents of the associated interrupt mask registers, so it is possible to service the interrupt status registers by polling. Reading INT_ST_MAIN register clears the interrupt pin. -------- */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_FATAL_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_phy_fatal. Position */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_FATAL_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_FATAL_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_phy_fatal. Mask */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_FATAL(value) (MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_FATAL_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_FATAL_Pos))
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_FATAL_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_pkt_fatal. Position */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_FATAL_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_FATAL_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_pkt_fatal. Mask */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_FATAL(value) (MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_FATAL_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_FATAL_Pos))
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_FRAME_FATAL_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_frame_fatal. Position */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_FRAME_FATAL_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_FRAME_FATAL_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_frame_fatal. Mask */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_FRAME_FATAL(value) (MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_FRAME_FATAL_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_FRAME_FATAL_Pos))
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_phy. Position */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_phy. Mask */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY(value) (MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PHY_Pos))
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_pkt. Position */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_pkt. Mask */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT(value) (MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_PKT_Pos))
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_LINE_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_line Position */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_LINE_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_LINE_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Status of int_st_line Mask */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_LINE(value) (MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_LINE_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_MAIN_STATUS_INT_LINE_Pos))
#define MIPICSI2PHY_CSI_INT_ST_MAIN_Msk       _U_(0x00070007)                                      /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Register Mask  */


/* -------- MIPICSI2PHY_CSI_DATA_IDS_1 : (MIPICSI2PHY Offset: 0x10) (R/W 32) Static read and write register   Programs the data Ids for matching line error reporting.   Enables up to eight different data Ids that can be identified simultaneously. -------- */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI0_DT_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Data type for programmed data Id 0. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI0_DT_Msk (_U_(0x3F) << MIPICSI2PHY_CSI_DATA_IDS_1_DI0_DT_Pos) /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Data type for programmed data Id 0. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI0_DT(value) (MIPICSI2PHY_CSI_DATA_IDS_1_DI0_DT_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_1_DI0_DT_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI0_VC_Pos _U_(6)                                               /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Virtual channel for programmed data Id 0. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI0_VC_Msk (_U_(0x3) << MIPICSI2PHY_CSI_DATA_IDS_1_DI0_VC_Pos)  /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Virtual channel for programmed data Id 0. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI0_VC(value) (MIPICSI2PHY_CSI_DATA_IDS_1_DI0_VC_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_1_DI0_VC_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI1_DT_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Data type for programmed data Id 1. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI1_DT_Msk (_U_(0x3F) << MIPICSI2PHY_CSI_DATA_IDS_1_DI1_DT_Pos) /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Data type for programmed data Id 1. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI1_DT(value) (MIPICSI2PHY_CSI_DATA_IDS_1_DI1_DT_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_1_DI1_DT_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI1_VC_Pos _U_(14)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Virtual channel for programmed data Id 1. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI1_VC_Msk (_U_(0x3) << MIPICSI2PHY_CSI_DATA_IDS_1_DI1_VC_Pos)  /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Virtual channel for programmed data Id 1. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI1_VC(value) (MIPICSI2PHY_CSI_DATA_IDS_1_DI1_VC_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_1_DI1_VC_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI2_DT_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Data type for programmed Data ID 2. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI2_DT_Msk (_U_(0x3F) << MIPICSI2PHY_CSI_DATA_IDS_1_DI2_DT_Pos) /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Data type for programmed Data ID 2. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI2_DT(value) (MIPICSI2PHY_CSI_DATA_IDS_1_DI2_DT_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_1_DI2_DT_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI2_VC_Pos _U_(22)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Virtual channel for programmed data Id 2. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI2_VC_Msk (_U_(0x3) << MIPICSI2PHY_CSI_DATA_IDS_1_DI2_VC_Pos)  /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Virtual channel for programmed data Id 2. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI2_VC(value) (MIPICSI2PHY_CSI_DATA_IDS_1_DI2_VC_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_1_DI2_VC_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI3_DT_Pos _U_(24)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Data type for programmed data Id 3. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI3_DT_Msk (_U_(0x3F) << MIPICSI2PHY_CSI_DATA_IDS_1_DI3_DT_Pos) /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Data type for programmed data Id 3. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI3_DT(value) (MIPICSI2PHY_CSI_DATA_IDS_1_DI3_DT_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_1_DI3_DT_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI3_VC_Pos _U_(30)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Virtual channel for programmed data Id 3. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI3_VC_Msk (_U_(0x3) << MIPICSI2PHY_CSI_DATA_IDS_1_DI3_VC_Pos)  /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Virtual channel for programmed data Id 3. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_1_DI3_VC(value) (MIPICSI2PHY_CSI_DATA_IDS_1_DI3_VC_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_1_DI3_VC_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_1_Msk        _U_(0xFFFFFFFF)                                      /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Register Mask  */


/* -------- MIPICSI2PHY_CSI_DATA_IDS_2 : (MIPICSI2PHY Offset: 0x14) (R/W 32) Static read and write register   Programs the data Ids for matching line error reporting.   Configures Data ID definition for four additional pairs of data types and virtual channel identifiers. -------- */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI4_DT_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Data type for programmed data Id 4. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI4_DT_Msk (_U_(0x3F) << MIPICSI2PHY_CSI_DATA_IDS_2_DI4_DT_Pos) /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Data type for programmed data Id 4. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI4_DT(value) (MIPICSI2PHY_CSI_DATA_IDS_2_DI4_DT_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_2_DI4_DT_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI4_VC_Pos _U_(6)                                               /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Virtual channel for programmed data Id 4. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI4_VC_Msk (_U_(0x3) << MIPICSI2PHY_CSI_DATA_IDS_2_DI4_VC_Pos)  /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Virtual channel for programmed data Id 4. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI4_VC(value) (MIPICSI2PHY_CSI_DATA_IDS_2_DI4_VC_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_2_DI4_VC_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI5_DT_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Data type for programmed data Id 5. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI5_DT_Msk (_U_(0x3F) << MIPICSI2PHY_CSI_DATA_IDS_2_DI5_DT_Pos) /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Data type for programmed data Id 5. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI5_DT(value) (MIPICSI2PHY_CSI_DATA_IDS_2_DI5_DT_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_2_DI5_DT_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI5_VC_Pos _U_(14)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Virtual channel for programmed data Id 5. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI5_VC_Msk (_U_(0x3) << MIPICSI2PHY_CSI_DATA_IDS_2_DI5_VC_Pos)  /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Virtual channel for programmed data Id 5. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI5_VC(value) (MIPICSI2PHY_CSI_DATA_IDS_2_DI5_VC_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_2_DI5_VC_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI6_DT_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Data type for programmed data Id 6. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI6_DT_Msk (_U_(0x3F) << MIPICSI2PHY_CSI_DATA_IDS_2_DI6_DT_Pos) /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Data type for programmed data Id 6. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI6_DT(value) (MIPICSI2PHY_CSI_DATA_IDS_2_DI6_DT_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_2_DI6_DT_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI6_VC_Pos _U_(22)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Virtual channel for programmed data Id 6. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI6_VC_Msk (_U_(0x3) << MIPICSI2PHY_CSI_DATA_IDS_2_DI6_VC_Pos)  /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Virtual channel for programmed data Id 6. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI6_VC(value) (MIPICSI2PHY_CSI_DATA_IDS_2_DI6_VC_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_2_DI6_VC_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI7_DT_Pos _U_(24)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Data type for programmed data Id 7. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI7_DT_Msk (_U_(0x3F) << MIPICSI2PHY_CSI_DATA_IDS_2_DI7_DT_Pos) /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Data type for programmed data Id 7. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI7_DT(value) (MIPICSI2PHY_CSI_DATA_IDS_2_DI7_DT_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_2_DI7_DT_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI7_VC_Pos _U_(30)                                              /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Virtual channel for programmed data Id 7. Position */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI7_VC_Msk (_U_(0x3) << MIPICSI2PHY_CSI_DATA_IDS_2_DI7_VC_Pos)  /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Virtual channel for programmed data Id 7. Mask */
#define MIPICSI2PHY_CSI_DATA_IDS_2_DI7_VC(value) (MIPICSI2PHY_CSI_DATA_IDS_2_DI7_VC_Msk & ((value) << MIPICSI2PHY_CSI_DATA_IDS_2_DI7_VC_Pos))
#define MIPICSI2PHY_CSI_DATA_IDS_2_Msk        _U_(0xFFFFFFFF)                                      /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Register Mask  */


/* -------- MIPICSI2PHY_CSI_PHY_SHUTDOWNZ : (MIPICSI2PHY Offset: 0x40) (R/W 32) Active low   Controls the PHY Shutdown mode. In this state, the PHY sets the analog and digital circuitry in the Reset state. -------- */
#define MIPICSI2PHY_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_PHY_SHUTDOWNZ) Shutdown input. This line is used to place the complete macro in power down. All analog blocks are in power down mode and digital logic is cleared. Active Low. Position */
#define MIPICSI2PHY_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ_Pos) /**< (MIPICSI2PHY_CSI_PHY_SHUTDOWNZ) Shutdown input. This line is used to place the complete macro in power down. All analog blocks are in power down mode and digital logic is cleared. Active Low. Mask */
#define MIPICSI2PHY_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ(value) (MIPICSI2PHY_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ_Msk & ((value) << MIPICSI2PHY_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ_Pos))
#define MIPICSI2PHY_CSI_PHY_SHUTDOWNZ_Msk     _U_(0x00000001)                                      /**< (MIPICSI2PHY_CSI_PHY_SHUTDOWNZ) Register Mask  */


/* -------- MIPICSI2PHY_CSI_DPHY_RSTZ : (MIPICSI2PHY Offset: 0x44) (R/W 32) Active low   Controls the PHY Reset mode. in this state, the PHY sets the digital circuitry in the Reset State. -------- */
#define MIPICSI2PHY_CSI_DPHY_RSTZ_DPHY_RSTZ_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_DPHY_RSTZ) PHY reset output. Active Low. Position */
#define MIPICSI2PHY_CSI_DPHY_RSTZ_DPHY_RSTZ_Msk (_U_(0x1) << MIPICSI2PHY_CSI_DPHY_RSTZ_DPHY_RSTZ_Pos) /**< (MIPICSI2PHY_CSI_DPHY_RSTZ) PHY reset output. Active Low. Mask */
#define MIPICSI2PHY_CSI_DPHY_RSTZ_DPHY_RSTZ(value) (MIPICSI2PHY_CSI_DPHY_RSTZ_DPHY_RSTZ_Msk & ((value) << MIPICSI2PHY_CSI_DPHY_RSTZ_DPHY_RSTZ_Pos))
#define MIPICSI2PHY_CSI_DPHY_RSTZ_Msk         _U_(0x00000001)                                      /**< (MIPICSI2PHY_CSI_DPHY_RSTZ) Register Mask  */


/* -------- MIPICSI2PHY_CSI_PHY_RX : (MIPICSI2PHY Offset: 0x48) ( R/ 32) Read-only register Contains the status of RX-related signals from PHY:   RXULPSESC*  RXCLKACTIVEHS (D-PHY)  It contains information such as, if the clock lane is receiving high-speed clock signal, or if the data and clock lanes are in Ultra Low Power Mode (ULPM). -------- */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_PHY_RX) Lane module 0 has entered the Ultra Low Power mode. Position */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_0_Pos) /**< (MIPICSI2PHY_CSI_PHY_RX) Lane module 0 has entered the Ultra Low Power mode. Mask */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_0(value) (MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_0_Msk & ((value) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_0_Pos))
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_PHY_RX) Lane module 1 has entered the Ultra Low Power mode Position */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_1_Pos) /**< (MIPICSI2PHY_CSI_PHY_RX) Lane module 1 has entered the Ultra Low Power mode Mask */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_1(value) (MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_1_Msk & ((value) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_1_Pos))
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSCLKNOT_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_PHY_RX) Active Low. This signal indicates that D-PHY Clock Lane module has entered the Ultra Low Power state Position */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSCLKNOT_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSCLKNOT_Pos) /**< (MIPICSI2PHY_CSI_PHY_RX) Active Low. This signal indicates that D-PHY Clock Lane module has entered the Ultra Low Power state Mask */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSCLKNOT(value) (MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSCLKNOT_Msk & ((value) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSCLKNOT_Pos))
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXCLKACTIVEHS_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_PHY_RX) Indicates that D-PHY clock lane is actively receiving a DDR clock Position */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXCLKACTIVEHS_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXCLKACTIVEHS_Pos) /**< (MIPICSI2PHY_CSI_PHY_RX) Indicates that D-PHY clock lane is actively receiving a DDR clock Mask */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXCLKACTIVEHS(value) (MIPICSI2PHY_CSI_PHY_RX_PHY_RXCLKACTIVEHS_Msk & ((value) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXCLKACTIVEHS_Pos))
#define MIPICSI2PHY_CSI_PHY_RX_Msk            _U_(0x00030003)                                      /**< (MIPICSI2PHY_CSI_PHY_RX) Register Mask  */

#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC__Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_PHY_RX Position) Lane module x has entered the Ultra Low Power mode. */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC__Msk (_U_(0x3) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC__Pos) /**< (MIPICSI2PHY_CSI_PHY_RX Mask) PHY_RXULPSESC_ */
#define MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC_(value) (MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC__Msk & ((value) << MIPICSI2PHY_CSI_PHY_RX_PHY_RXULPSESC__Pos)) 

/* -------- MIPICSI2PHY_CSI_PHY_STOPSTATE : (MIPICSI2PHY Offset: 0x4C) ( R/ 32) Read-only register   Contains the STOPSTATE signal status from PHY. -------- */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE) Data lane 0 in Stop state. Position */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_0_Pos) /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE) Data lane 0 in Stop state. Mask */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_0(value) (MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_0_Msk & ((value) << MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_0_Pos))
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE) Data lane 1 in Stop state Position */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_1_Pos) /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE) Data lane 1 in Stop state Mask */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_1(value) (MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_1_Msk & ((value) << MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_1_Pos))
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATECLK_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE) D-PHY Clock lane in Stop state Position */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATECLK_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATECLK_Pos) /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE) D-PHY Clock lane in Stop state Mask */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATECLK(value) (MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATECLK_Msk & ((value) << MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATECLK_Pos))
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_Msk     _U_(0x00010003)                                      /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE) Register Mask  */

#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA__Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE Position) Data lane x in Stop state. */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA__Msk (_U_(0x3) << MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA__Pos) /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE Mask) PHY_STOPSTATEDATA_ */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA_(value) (MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA__Msk & ((value) << MIPICSI2PHY_CSI_PHY_STOPSTATE_PHY_STOPSTATEDATA__Pos)) 

/* -------- MIPICSI2PHY_CSI_PHY_TEST_CTRL0 : (MIPICSI2PHY Offset: 0x50) (R/W 32) Dynamic register   Control for vendor specific interface in the PHY.   Controls the Synopsys D-PHY Test and Control interface. This register controls the TESTCLR and TESTCLK signals. -------- */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLR_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL0) When active, performs vendor specific interface initialization. Active High.   Note: This line needs an initial high pulse after power up for analog programmability default values to be preset. Position */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLR_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLR_Pos) /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL0) When active, performs vendor specific interface initialization. Active High.   Note: This line needs an initial high pulse after power up for analog programmability default values to be preset. Mask */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLR(value) (MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLR_Msk & ((value) << MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLR_Pos))
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLK_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL0) Clock to capture testdin bus contents into the macro, with testen signal controlling the operation selection. Position */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLK_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLK_Pos) /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL0) Clock to capture testdin bus contents into the macro, with testen signal controlling the operation selection. Mask */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLK(value) (MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLK_Msk & ((value) << MIPICSI2PHY_CSI_PHY_TEST_CTRL0_PHY_TESTCLK_Pos))
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL0_Msk    _U_(0x00000003)                                      /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL0) Register Mask  */


/* -------- MIPICSI2PHY_CSI_PHY_TEST_CTRL1 : (MIPICSI2PHY Offset: 0x54) (R/W 32) Dynamic register   Control for vendor specific interface in the PHY.   Controls the Synopsys D-PHY Test and Control interface. This register controls the TESTENABLE signal and the TESTDIN bus. Reading from this register retrieves the value from TESTDOUT. -------- */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDIN_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL1) Test interface 8-bit data input for programming internal registers and accessing test functionalities. Position */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDIN_Msk (_U_(0xFF) << MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDIN_Pos) /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL1) Test interface 8-bit data input for programming internal registers and accessing test functionalities. Mask */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDIN(value) (MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDIN_Msk & ((value) << MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDIN_Pos))
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDOUT_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL1) Vendor-specific 8-bit data output for reading data and other probing functionalities. Position */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDOUT_Msk (_U_(0xFF) << MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDOUT_Pos) /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL1) Vendor-specific 8-bit data output for reading data and other probing functionalities. Mask */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDOUT(value) (MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDOUT_Msk & ((value) << MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTDOUT_Pos))
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTEN_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL1) When asserted high, it configures an address write operation on the falling edge of testclk. When asserted low, it configures a data write operation on the rising edge of testclk. Position */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTEN_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTEN_Pos) /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL1) When asserted high, it configures an address write operation on the falling edge of testclk. When asserted low, it configures a data write operation on the rising edge of testclk. Mask */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTEN(value) (MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTEN_Msk & ((value) << MIPICSI2PHY_CSI_PHY_TEST_CTRL1_PHY_TESTEN_Pos))
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_Msk    _U_(0x0001FFFF)                                      /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL1) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_MODE : (MIPICSI2PHY Offset: 0x80) (R/W 32) This register selects how the IPI interface generates the video frame -------- */
#define MIPICSI2PHY_CSI_IPI_MODE_IPI_MODE_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_MODE) This field indicates the video mode transmission type as follows:  - 0: Camera timing - 1: Controller timing Position */
#define MIPICSI2PHY_CSI_IPI_MODE_IPI_MODE_Msk (_U_(0x1) << MIPICSI2PHY_CSI_IPI_MODE_IPI_MODE_Pos)  /**< (MIPICSI2PHY_CSI_IPI_MODE) This field indicates the video mode transmission type as follows:  - 0: Camera timing - 1: Controller timing Mask */
#define MIPICSI2PHY_CSI_IPI_MODE_IPI_MODE(value) (MIPICSI2PHY_CSI_IPI_MODE_IPI_MODE_Msk & ((value) << MIPICSI2PHY_CSI_IPI_MODE_IPI_MODE_Pos))
#define MIPICSI2PHY_CSI_IPI_MODE_IPI_COLOR_COM_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_IPI_MODE) This field indicates if color mode components are delivered as follows:  - 0: 48 bits interface - 1: 16 bits interface Position */
#define MIPICSI2PHY_CSI_IPI_MODE_IPI_COLOR_COM_Msk (_U_(0x1) << MIPICSI2PHY_CSI_IPI_MODE_IPI_COLOR_COM_Pos) /**< (MIPICSI2PHY_CSI_IPI_MODE) This field indicates if color mode components are delivered as follows:  - 0: 48 bits interface - 1: 16 bits interface Mask */
#define MIPICSI2PHY_CSI_IPI_MODE_IPI_COLOR_COM(value) (MIPICSI2PHY_CSI_IPI_MODE_IPI_COLOR_COM_Msk & ((value) << MIPICSI2PHY_CSI_IPI_MODE_IPI_COLOR_COM_Pos))
#define MIPICSI2PHY_CSI_IPI_MODE_Msk          _U_(0x00000101)                                      /**< (MIPICSI2PHY_CSI_IPI_MODE) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_VCID : (MIPICSI2PHY Offset: 0x84) (R/W 32) This register selects the virtual channel processed by IPI -------- */
#define MIPICSI2PHY_CSI_IPI_VCID_IP_VCID_Pos  _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_VCID) Virtual channel of data to be processed by pixel interface Position */
#define MIPICSI2PHY_CSI_IPI_VCID_IP_VCID_Msk  (_U_(0x3) << MIPICSI2PHY_CSI_IPI_VCID_IP_VCID_Pos)   /**< (MIPICSI2PHY_CSI_IPI_VCID) Virtual channel of data to be processed by pixel interface Mask */
#define MIPICSI2PHY_CSI_IPI_VCID_IP_VCID(value) (MIPICSI2PHY_CSI_IPI_VCID_IP_VCID_Msk & ((value) << MIPICSI2PHY_CSI_IPI_VCID_IP_VCID_Pos))
#define MIPICSI2PHY_CSI_IPI_VCID_Msk          _U_(0x00000003)                                      /**< (MIPICSI2PHY_CSI_IPI_VCID) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_DATA_TYPE : (MIPICSI2PHY Offset: 0x88) (R/W 32) This register selects the data type processed by IPI -------- */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Data type of data to be processed by pixel interface Position */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Msk (_U_(0x3F) << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Data type of data to be processed by pixel interface Mask */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE(value) (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Msk & ((value) << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos))
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_FS_Val _U_(0x0)                                             /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Frame Start signaling  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_FE_Val _U_(0x1)                                             /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Frame End signaling  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_LS_Val _U_(0x2)                                             /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Line Start signaling  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_LE_Val _U_(0x3)                                             /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Line End signaling  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_BLANK_Val _U_(0x11)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Blanking packet  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_8_Val _U_(0x18)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 8-bit data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_10_Val _U_(0x19)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 10-bit data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_8L_Val _U_(0x1A)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 8-bit Legacy data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_8C_Val _U_(0x1C)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 8-bit (Chroma Shifted Pixel Sampling) data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_10C_Val _U_(0x1D)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 10-bit (Chroma Shifted Pixel Sampling) data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV422_8_Val _U_(0x1E)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV422 8-bit data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV422_10_Val _U_(0x1F)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV422 10-bit data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB444_Val _U_(0x20)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB444 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB555_Val _U_(0x21)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB555 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB565_Val _U_(0x22)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB565 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB666_Val _U_(0x23)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB666 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB888_Val _U_(0x24)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB888 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW6_Val _U_(0x28)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW6 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW7_Val _U_(0x29)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW7 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW8_Val _U_(0x2A)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW8 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW10_Val _U_(0x2B)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW10 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW12_Val _U_(0x2C)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW12 data format  */
#define   MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW14_Val _U_(0x2D)                                            /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW14 data format  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_FS (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_FS_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Frame Start signaling Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_FE (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_FE_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Frame End signaling Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_LS (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_LS_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Line Start signaling Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_LE (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_LE_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Line End signaling Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_BLANK (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_BLANK_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Blanking packet Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_8 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_8_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 8-bit data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_10 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_10_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 10-bit data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_8L (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_8L_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 8-bit Legacy data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_8C (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_8C_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 8-bit (Chroma Shifted Pixel Sampling) data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_10C (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV420_10C_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV420 10-bit (Chroma Shifted Pixel Sampling) data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV422_8 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV422_8_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV422 8-bit data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV422_10 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_YUV422_10_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) YUV422 10-bit data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB444 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB444_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB444 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB555 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB555_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB555 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB565 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB565_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB565 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB666 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB666_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB666 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB888 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RGB888_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RGB888 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW6 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW6_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW6 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW7 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW7_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW7 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW8 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW8_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW8 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW10 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW10_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW10 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW12 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW12_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW12 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW14 (MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_RAW14_Val << MIPICSI2PHY_CSI_IPI_DATA_TYPE_IPI_DATA_TYPE_Pos) /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) RAW14 data format Position  */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_Msk     _U_(0x0000003F)                                      /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_MEM_FLUSH : (MIPICSI2PHY Offset: 0x8C) (R/W 32) This register control the flush of IPI memory -------- */
#define MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_FLUSH_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_MEM_FLUSH) Flush IPI memory. This bit is auto clear Position */
#define MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_FLUSH_Msk (_U_(0x1) << MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_FLUSH_Pos) /**< (MIPICSI2PHY_CSI_IPI_MEM_FLUSH) Flush IPI memory. This bit is auto clear Mask */
#define MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_FLUSH(value) (MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_FLUSH_Msk & ((value) << MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_FLUSH_Pos))
#define MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_AUTO_FLUSH_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_IPI_MEM_FLUSH) Memory is automatically flushed at each vsync Position */
#define MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_AUTO_FLUSH_Msk (_U_(0x1) << MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_AUTO_FLUSH_Pos) /**< (MIPICSI2PHY_CSI_IPI_MEM_FLUSH) Memory is automatically flushed at each vsync Mask */
#define MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_AUTO_FLUSH(value) (MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_AUTO_FLUSH_Msk & ((value) << MIPICSI2PHY_CSI_IPI_MEM_FLUSH_IPI_AUTO_FLUSH_Pos))
#define MIPICSI2PHY_CSI_IPI_MEM_FLUSH_Msk     _U_(0x00000101)                                      /**< (MIPICSI2PHY_CSI_IPI_MEM_FLUSH) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_HSA_TIME : (MIPICSI2PHY Offset: 0x90) (R/W 32) This register configures the video Horizontal Synchronism Active (HSA) time -------- */
#define MIPICSI2PHY_CSI_IPI_HSA_TIME_IPI_HSA_TIME_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_HSA_TIME) This field configures the Horizontal Synchronism Active period in pixclk cycles Position */
#define MIPICSI2PHY_CSI_IPI_HSA_TIME_IPI_HSA_TIME_Msk (_U_(0xFFF) << MIPICSI2PHY_CSI_IPI_HSA_TIME_IPI_HSA_TIME_Pos) /**< (MIPICSI2PHY_CSI_IPI_HSA_TIME) This field configures the Horizontal Synchronism Active period in pixclk cycles Mask */
#define MIPICSI2PHY_CSI_IPI_HSA_TIME_IPI_HSA_TIME(value) (MIPICSI2PHY_CSI_IPI_HSA_TIME_IPI_HSA_TIME_Msk & ((value) << MIPICSI2PHY_CSI_IPI_HSA_TIME_IPI_HSA_TIME_Pos))
#define MIPICSI2PHY_CSI_IPI_HSA_TIME_Msk      _U_(0x00000FFF)                                      /**< (MIPICSI2PHY_CSI_IPI_HSA_TIME) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_HBP_TIME : (MIPICSI2PHY Offset: 0x94) (R/W 32) This register configures the video Horizontal Back Porch (HBP) time -------- */
#define MIPICSI2PHY_CSI_IPI_HBP_TIME_IPI_HBP_TIME_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_HBP_TIME) This field configures the Horizontal Back Porch period in pixclk cycles Position */
#define MIPICSI2PHY_CSI_IPI_HBP_TIME_IPI_HBP_TIME_Msk (_U_(0xFFF) << MIPICSI2PHY_CSI_IPI_HBP_TIME_IPI_HBP_TIME_Pos) /**< (MIPICSI2PHY_CSI_IPI_HBP_TIME) This field configures the Horizontal Back Porch period in pixclk cycles Mask */
#define MIPICSI2PHY_CSI_IPI_HBP_TIME_IPI_HBP_TIME(value) (MIPICSI2PHY_CSI_IPI_HBP_TIME_IPI_HBP_TIME_Msk & ((value) << MIPICSI2PHY_CSI_IPI_HBP_TIME_IPI_HBP_TIME_Pos))
#define MIPICSI2PHY_CSI_IPI_HBP_TIME_Msk      _U_(0x00000FFF)                                      /**< (MIPICSI2PHY_CSI_IPI_HBP_TIME) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_HSD_TIME : (MIPICSI2PHY Offset: 0x98) (R/W 32) This register configures the video Horizontal Sync Delay (HSD) time -------- */
#define MIPICSI2PHY_CSI_IPI_HSD_TIME_IPI_HSD_TIME_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_HSD_TIME) This field configures the Horizontal Sync Porch delay period in pixclk cycles Position */
#define MIPICSI2PHY_CSI_IPI_HSD_TIME_IPI_HSD_TIME_Msk (_U_(0xFFF) << MIPICSI2PHY_CSI_IPI_HSD_TIME_IPI_HSD_TIME_Pos) /**< (MIPICSI2PHY_CSI_IPI_HSD_TIME) This field configures the Horizontal Sync Porch delay period in pixclk cycles Mask */
#define MIPICSI2PHY_CSI_IPI_HSD_TIME_IPI_HSD_TIME(value) (MIPICSI2PHY_CSI_IPI_HSD_TIME_IPI_HSD_TIME_Msk & ((value) << MIPICSI2PHY_CSI_IPI_HSD_TIME_IPI_HSD_TIME_Pos))
#define MIPICSI2PHY_CSI_IPI_HSD_TIME_Msk      _U_(0x00000FFF)                                      /**< (MIPICSI2PHY_CSI_IPI_HSD_TIME) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_HLINE_TIME : (MIPICSI2PHY Offset: 0x9C) (R/W 32) This register configures the overall time for each video line -------- */
#define MIPICSI2PHY_CSI_IPI_HLINE_TIME_IPI_HLINE_TIME_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_HLINE_TIME) This field configures the size of the line time counted in pixclk cycles Position */
#define MIPICSI2PHY_CSI_IPI_HLINE_TIME_IPI_HLINE_TIME_Msk (_U_(0x7FFF) << MIPICSI2PHY_CSI_IPI_HLINE_TIME_IPI_HLINE_TIME_Pos) /**< (MIPICSI2PHY_CSI_IPI_HLINE_TIME) This field configures the size of the line time counted in pixclk cycles Mask */
#define MIPICSI2PHY_CSI_IPI_HLINE_TIME_IPI_HLINE_TIME(value) (MIPICSI2PHY_CSI_IPI_HLINE_TIME_IPI_HLINE_TIME_Msk & ((value) << MIPICSI2PHY_CSI_IPI_HLINE_TIME_IPI_HLINE_TIME_Pos))
#define MIPICSI2PHY_CSI_IPI_HLINE_TIME_Msk    _U_(0x00007FFF)                                      /**< (MIPICSI2PHY_CSI_IPI_HLINE_TIME) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_VSA_LINES : (MIPICSI2PHY Offset: 0xB0) (R/W 32) This register configures the Vertical Synchronism Active (VSA) period -------- */
#define MIPICSI2PHY_CSI_IPI_VSA_LINES_IPI_VSA_LINES_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_VSA_LINES) This field configures the Vertical Synchronism Active period measured in number of horizontal lines Position */
#define MIPICSI2PHY_CSI_IPI_VSA_LINES_IPI_VSA_LINES_Msk (_U_(0x3FF) << MIPICSI2PHY_CSI_IPI_VSA_LINES_IPI_VSA_LINES_Pos) /**< (MIPICSI2PHY_CSI_IPI_VSA_LINES) This field configures the Vertical Synchronism Active period measured in number of horizontal lines Mask */
#define MIPICSI2PHY_CSI_IPI_VSA_LINES_IPI_VSA_LINES(value) (MIPICSI2PHY_CSI_IPI_VSA_LINES_IPI_VSA_LINES_Msk & ((value) << MIPICSI2PHY_CSI_IPI_VSA_LINES_IPI_VSA_LINES_Pos))
#define MIPICSI2PHY_CSI_IPI_VSA_LINES_Msk     _U_(0x000003FF)                                      /**< (MIPICSI2PHY_CSI_IPI_VSA_LINES) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_VBP_LINES : (MIPICSI2PHY Offset: 0xB4) (R/W 32) This register configures the Vertical Back Porch (VBP) period -------- */
#define MIPICSI2PHY_CSI_IPI_VBP_LINES_IPI_VBP_LINES_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_VBP_LINES) This field configures the Vertical Back Porch period measured in number of horizontal lines Position */
#define MIPICSI2PHY_CSI_IPI_VBP_LINES_IPI_VBP_LINES_Msk (_U_(0x3FF) << MIPICSI2PHY_CSI_IPI_VBP_LINES_IPI_VBP_LINES_Pos) /**< (MIPICSI2PHY_CSI_IPI_VBP_LINES) This field configures the Vertical Back Porch period measured in number of horizontal lines Mask */
#define MIPICSI2PHY_CSI_IPI_VBP_LINES_IPI_VBP_LINES(value) (MIPICSI2PHY_CSI_IPI_VBP_LINES_IPI_VBP_LINES_Msk & ((value) << MIPICSI2PHY_CSI_IPI_VBP_LINES_IPI_VBP_LINES_Pos))
#define MIPICSI2PHY_CSI_IPI_VBP_LINES_Msk     _U_(0x000003FF)                                      /**< (MIPICSI2PHY_CSI_IPI_VBP_LINES) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_VFP_LINES : (MIPICSI2PHY Offset: 0xB8) (R/W 32) This register configures the Vertical Front Porch (VFP) period -------- */
#define MIPICSI2PHY_CSI_IPI_VFP_LINES_IPI_VFP_LINES_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_VFP_LINES) This field configures the Vertical Front Porch period measured in number of horizontal lines Position */
#define MIPICSI2PHY_CSI_IPI_VFP_LINES_IPI_VFP_LINES_Msk (_U_(0x3FF) << MIPICSI2PHY_CSI_IPI_VFP_LINES_IPI_VFP_LINES_Pos) /**< (MIPICSI2PHY_CSI_IPI_VFP_LINES) This field configures the Vertical Front Porch period measured in number of horizontal lines Mask */
#define MIPICSI2PHY_CSI_IPI_VFP_LINES_IPI_VFP_LINES(value) (MIPICSI2PHY_CSI_IPI_VFP_LINES_IPI_VFP_LINES_Msk & ((value) << MIPICSI2PHY_CSI_IPI_VFP_LINES_IPI_VFP_LINES_Pos))
#define MIPICSI2PHY_CSI_IPI_VFP_LINES_Msk     _U_(0x000003FF)                                      /**< (MIPICSI2PHY_CSI_IPI_VFP_LINES) Register Mask  */


/* -------- MIPICSI2PHY_CSI_IPI_VACTIVE_LINES : (MIPICSI2PHY Offset: 0xBC) (R/W 32) This register configures the vertical resolution of the video -------- */
#define MIPICSI2PHY_CSI_IPI_VACTIVE_LINES_IPI_VACTIVE_LINES_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_IPI_VACTIVE_LINES) This field configures the Vertical Active period measured in number of horizontal lines Position */
#define MIPICSI2PHY_CSI_IPI_VACTIVE_LINES_IPI_VACTIVE_LINES_Msk (_U_(0x3FFF) << MIPICSI2PHY_CSI_IPI_VACTIVE_LINES_IPI_VACTIVE_LINES_Pos) /**< (MIPICSI2PHY_CSI_IPI_VACTIVE_LINES) This field configures the Vertical Active period measured in number of horizontal lines Mask */
#define MIPICSI2PHY_CSI_IPI_VACTIVE_LINES_IPI_VACTIVE_LINES(value) (MIPICSI2PHY_CSI_IPI_VACTIVE_LINES_IPI_VACTIVE_LINES_Msk & ((value) << MIPICSI2PHY_CSI_IPI_VACTIVE_LINES_IPI_VACTIVE_LINES_Pos))
#define MIPICSI2PHY_CSI_IPI_VACTIVE_LINES_Msk _U_(0x00003FFF)                                      /**< (MIPICSI2PHY_CSI_IPI_VACTIVE_LINES) Register Mask  */


/* -------- MIPICSI2PHY_CSI_PHY_CAL : (MIPICSI2PHY Offset: 0xCC) ( R/ 32) Clear on read register    Contains the CALIBRATION signal status from Synopsys D-PHY. -------- */
#define MIPICSI2PHY_CSI_PHY_CAL_RXSKEWCALHS_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_PHY_CAL) A low-to-high transition on rxskewcalhs signal means that the PHY has initiated the de-skew calibration.. Position */
#define MIPICSI2PHY_CSI_PHY_CAL_RXSKEWCALHS_Msk (_U_(0x1) << MIPICSI2PHY_CSI_PHY_CAL_RXSKEWCALHS_Pos) /**< (MIPICSI2PHY_CSI_PHY_CAL) A low-to-high transition on rxskewcalhs signal means that the PHY has initiated the de-skew calibration.. Mask */
#define MIPICSI2PHY_CSI_PHY_CAL_RXSKEWCALHS(value) (MIPICSI2PHY_CSI_PHY_CAL_RXSKEWCALHS_Msk & ((value) << MIPICSI2PHY_CSI_PHY_CAL_RXSKEWCALHS_Pos))
#define MIPICSI2PHY_CSI_PHY_CAL_Msk           _U_(0x00000001)                                      /**< (MIPICSI2PHY_CSI_PHY_CAL) Register Mask  */


/* -------- MIPICSI2PHY_CSI_INT_ST_PHY_FATAL : (MIPICSI2PHY Offset: 0xE0) ( R/ 32) Clear on read register   Groups the fatal interruptions caused by PHY Packet discarded.   Stores the source of the error.   Reading INT_ST_PHY_FATAL register does not clear the interrupt pin. -------- */
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL) Start of transmission error on data lane 0 (no synchronization achieved). Position */
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_0_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL) Start of transmission error on data lane 0 (no synchronization achieved). Mask */
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_0(value) (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_0_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_0_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL) Start of transmission error on data lane 1 (no synchronization achieved) Position */
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_1_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL) Start of transmission error on data lane 1 (no synchronization achieved) Mask */
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_1(value) (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_1_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_1_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_Msk  _U_(0x00000003)                                      /**< (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL) Register Mask  */

#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS__Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL Position) Start of transmission error on data lane x (no synchronization achieved) */
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS__Msk (_U_(0x3) << MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS__Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL Mask) PHY_ERRSOTSYNCHS_ */
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS_(value) (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS__Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_PHY_ERRSOTSYNCHS__Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL : (MIPICSI2PHY Offset: 0xE4) (R/W 32) Static read and write register    Interrupt mask for INT_ST_PHY_FATAL controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. -------- */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL) Mask for phy_errsotsynchs_0. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_0_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL) Mask for phy_errsotsynchs_0. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_0(value) (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_0_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_0_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL) Mask for phy_errsotsynchs_1 Position */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_1_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL) Mask for phy_errsotsynchs_1 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_1(value) (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_1_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_1_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_Msk _U_(0x00000003)                                      /**< (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL) Register Mask  */

#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS__Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL Position) Mask for phy_errsotsynchs_x */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS__Msk (_U_(0x3) << MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS__Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL Mask) MASK_PHY_ERRSOTSYNCHS_ */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS_(value) (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS__Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_MASK_PHY_ERRSOTSYNCHS__Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL : (MIPICSI2PHY Offset: 0xE8) (R/W 32) Static read and write register    Interrupt Force register is used for test purposes, and allows triggering INT_ST_PHY_FATAL interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, since it may be extremely complex to generate stimuli for that purpose. -------- */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL) Force phy_errsotsynchs_0. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_0_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL) Force phy_errsotsynchs_0. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_0(value) (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_0_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_0_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL) Force phy_errsotsynchs_1 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_1_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL) Force phy_errsotsynchs_1 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_1(value) (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_1_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_1_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_Msk _U_(0x00000003)                                      /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL) Register Mask  */

#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS__Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL Position) Force phy_errsotsynchs_x */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS__Msk (_U_(0x3) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS__Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL Mask) FORCE_PHY_ERRSOTSYNCHS_ */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS_(value) (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS__Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_FORCE_PHY_ERRSOTSYNCHS__Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_ST_PKT_FATAL : (MIPICSI2PHY Offset: 0xF0) ( R/ 32) Clear on read register    Groups the fatal interruption related with Packet construction. Packet discarded.   Notifies which interruption bit has caused the interruption.   Stores the source of the error.   Reading INT_ST_PKT_FATAL register does not clear the interrupt pin. -------- */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC0_ERR_CRC_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Payload Checksum error detected on virtual channel 0. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC0_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC0_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Payload Checksum error detected on virtual channel 0. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC0_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC0_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC0_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC1_ERR_CRC_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Payload Checksum error detected on virtual channel 1. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC1_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC1_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Payload Checksum error detected on virtual channel 1. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC1_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC1_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC1_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC2_ERR_CRC_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Payload Checksum error detected on virtual channel 2. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC2_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC2_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Payload Checksum error detected on virtual channel 2. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC2_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC2_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC2_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC3_ERR_CRC_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Payload Checksum error detected on virtual channel 3. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC3_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC3_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Payload Checksum error detected on virtual channel 3. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC3_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC3_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_VC3_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_ERR_ECC_DOUBLE_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) D-PHY mode : Header ECC contains at least 2 errors, unrecoverable.   C-PHY mode : Header CRC unrecoverable. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_ERR_ECC_DOUBLE_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_ERR_ECC_DOUBLE_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) D-PHY mode : Header ECC contains at least 2 errors, unrecoverable.   C-PHY mode : Header CRC unrecoverable. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_ERR_ECC_DOUBLE(value) (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_ERR_ECC_DOUBLE_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_ERR_ECC_DOUBLE_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_Msk  _U_(0x0001000F)                                      /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Register Mask  */


/* -------- MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL : (MIPICSI2PHY Offset: 0xF4) (R/W 32) Static read and write register    Interrupt mask for INT_ST_PKT_FATAL controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. -------- */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC0_ERR_CRC_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for vc0_err_crc. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC0_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC0_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for vc0_err_crc. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC0_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC0_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC0_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC1_ERR_CRC_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for vc1_err_crc. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC1_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC1_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for vc1_err_crc. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC1_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC1_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC1_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC2_ERR_CRC_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for vc2_err_crc. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC2_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC2_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for vc2_err_crc. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC2_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC2_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC2_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC3_ERR_CRC_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for vc3_err_crc. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC3_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC3_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for vc3_err_crc. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC3_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC3_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_VC3_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_ERR_ECC_DOUBLE_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for err_ecc_double. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_ERR_ECC_DOUBLE_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_ERR_ECC_DOUBLE_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Mask for err_ecc_double. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_ERR_ECC_DOUBLE(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_ERR_ECC_DOUBLE_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_MASK_ERR_ECC_DOUBLE_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_Msk _U_(0x0001000F)                                      /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Register Mask  */


/* -------- MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL : (MIPICSI2PHY Offset: 0xF8) (R/W 32) Static read and write register   Interrupt force register is used for test purposes, and allows triggering INT_ST_PKT_FATAL interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, since it may be extremely complex to generate stimuli for that purpose. -------- */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC0_ERR_CRC_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force vc0_err_crc. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC0_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC0_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force vc0_err_crc. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC0_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC0_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC0_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC1_ERR_CRC_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force vc1_err_crc. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC1_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC1_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force vc1_err_crc. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC1_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC1_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC1_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC2_ERR_CRC_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force vc2_err_crc. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC2_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC2_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force vc2_err_crc. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC2_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC2_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC2_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC3_ERR_CRC_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force vc3_err_crc. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC3_ERR_CRC_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC3_ERR_CRC_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force vc3_err_crc. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC3_ERR_CRC(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC3_ERR_CRC_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_VC3_ERR_CRC_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_ERR_ECC_DOUBLE_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force err_ecc_double. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_ERR_ECC_DOUBLE_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_ERR_ECC_DOUBLE_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Force err_ecc_double. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_ERR_ECC_DOUBLE(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_ERR_ECC_DOUBLE_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_FORCE_ERR_ECC_DOUBLE_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_Msk _U_(0x0001000F)                                      /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Register Mask  */


/* -------- MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL : (MIPICSI2PHY Offset: 0x100) ( R/ 32) Clear on read register    Fatal interruption related with Frame construction. Packet discarded.   Groups and notifies which interruption bits caused the interruption.   Stores the source of the error.   Reading INT_ST_FRAME_FATAL register does not clear the interrupt pin. -------- */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Error matching Frame Start with Frame End for virtual channel 0. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Error matching Frame Start with Frame End for virtual channel 0. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC0(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Error matching Frame Start with Frame End for virtual channel 1. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Error matching Frame Start with Frame End for virtual channel 1. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC1(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC2_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Error matching Frame Start with Frame End for virtual channel 2. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Error matching Frame Start with Frame End for virtual channel 2. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC2(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC3_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Error matching Frame Start with Frame End for virtual channel 3. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Error matching Frame Start with Frame End for virtual channel 3. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC3(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC0_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Incorrect Frame sequence detected in Virtual Channel 0. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Incorrect Frame sequence detected in Virtual Channel 0. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC0(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC1_Pos _U_(9)                                               /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Incorrect Frame sequence detected in Virtual Channel 1. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Incorrect Frame sequence detected in Virtual Channel 1. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC1(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC2_Pos _U_(10)                                              /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Incorrect Frame sequence detected in Virtual Channel 2. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Incorrect Frame sequence detected in Virtual Channel 2. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC2(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC3_Pos _U_(11)                                              /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Incorrect Frame sequence detected in Virtual Channel 3. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Incorrect Frame sequence detected in Virtual Channel 3. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC3(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC0_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Last received Frame in virtual channel 0, had at least one CRC error. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Last received Frame in virtual channel 0, had at least one CRC error. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC0(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC1_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Last received Frame in virtual channel 1, had at least one CRC error. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Last received Frame in virtual channel 1, had at least one CRC error. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC1(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC2_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Last received Frame in virtual channel 2, had at least one CRC error. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Last received Frame in virtual channel 2, had at least one CRC error. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC2(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC3_Pos _U_(19)                                              /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Last received Frame in virtual channel 3, had at least one CRC error. Position */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Last received Frame in virtual channel 3, had at least one CRC error. Mask */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC3(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_Msk _U_(0x000F0F0F)                                      /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Register Mask  */

#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL Position) Error matching Frame Start with Frame End for virtual channel x. */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL Mask) ERR_F_BNDRY_MATCH_VC */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_BNDRY_MATCH_VC_Pos)) 
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL Position) Incorrect Frame sequence detected in Virtual Channel x. */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL Mask) ERR_F_SEQ_VC */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_F_SEQ_VC_Pos)) 
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL Position) Last received Frame in virtual channel 3, had at least one CRC error. */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL Mask) ERR_FRAME_DATA_VC */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC(value) (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_ERR_FRAME_DATA_VC_Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL : (MIPICSI2PHY Offset: 0x104) (R/W 32) Static read and write register    Interrupt mask for INT_ST_FRAME_FATAL controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. -------- */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_bndry_match_vc0. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_bndry_match_vc0. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC0(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_bndry_match_vc1. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_bndry_match_vc1. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC1(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC2_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_bndry_match_vc2. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_bndry_match_vc2. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC2(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC3_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_bndry_match_vc3. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_bndry_match_vc3. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC3(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC0_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_seq_vc0. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_seq_vc0. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC0(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC1_Pos _U_(9)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_seq_vc1. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_seq_vc1. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC1(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC2_Pos _U_(10)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_seq_vc2. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_seq_vc2. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC2(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC3_Pos _U_(11)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_seq_vc3. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_f_seq_vc3. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC3(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC0_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_frame_data_vc0. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_frame_data_vc0. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC0(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC1_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_frame_data_vc1. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_frame_data_vc1. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC1(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC2_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_frame_data_vc2. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_frame_data_vc2. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC2(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC3_Pos _U_(19)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_frame_data_vc3. Position */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Mask for err_frame_data_vc3. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC3(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_Msk _U_(0x000F0F0F)                                      /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Register Mask  */

#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL Position) Mask for err_f_bndry_match_vcx. */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL Mask) MASK_ERR_F_BNDRY_MATCH_VC */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_BNDRY_MATCH_VC_Pos)) 
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL Position) Mask for err_f_seq_vcx. */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL Mask) MASK_ERR_F_SEQ_VC */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_F_SEQ_VC_Pos)) 
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL Position) Mask for err_frame_data_vc3. */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL Mask) MASK_ERR_FRAME_DATA_VC */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC(value) (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_MASK_ERR_FRAME_DATA_VC_Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL : (MIPICSI2PHY Offset: 0x108) (R/W 32) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_FRAME_FATAL interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. -------- */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_bndry_match_vc0. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_bndry_match_vc0. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC0(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_bndry_match_vc1. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_bndry_match_vc1. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC1(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC2_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_bndry_match_vc2. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_bndry_match_vc2. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC2(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC3_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_bndry_match_vc3. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_bndry_match_vc3. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC3(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC0_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_seq_vc0. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_seq_vc0. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC0(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC1_Pos _U_(9)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_seq_vc1. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_seq_vc1. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC1(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC2_Pos _U_(10)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_seq_vc2. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_seq_vc2. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC2(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC3_Pos _U_(11)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_seq_vc3. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_f_seq_vc3. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC3(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC0_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_frame_data_vc0. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_frame_data_vc0. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC0(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC1_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_frame_data_vc1. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_frame_data_vc1. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC1(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC2_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_frame_data_vc2. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_frame_data_vc2. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC2(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC3_Pos _U_(19)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_frame_data_vc3. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Force err_frame_data_vc3. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC3(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_Msk _U_(0x000F0F0F)                                      /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Register Mask  */

#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL Position) Force err_f_bndry_match_vcx. */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL Mask) FORCE_ERR_F_BNDRY_MATCH_VC */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_BNDRY_MATCH_VC_Pos)) 
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC_Pos _U_(8)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL Position) Force err_f_seq_vcx. */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL Mask) FORCE_ERR_F_SEQ_VC */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_F_SEQ_VC_Pos)) 
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL Position) Force err_frame_data_vc3. */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL Mask) FORCE_ERR_FRAME_DATA_VC */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC(value) (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_FORCE_ERR_FRAME_DATA_VC_Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_ST_PHY : (MIPICSI2PHY Offset: 0x110) ( R/ 32) Clear on read register    Interruption caused by PHY.   Groups and notifies which interruption bits caused the interruption.   Stores the source of the error.   Reading INT_ST_PHY register does not clear the interrupt pin. -------- */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Start of transmission error on data lane 0 (synchronization can still be achieved). Position */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_0_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Start of transmission error on data lane 0 (synchronization can still be achieved). Mask */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_0(value) (MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_0_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_0_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Start of transmission error on data lane 1 (synchronization can still be achieved) Position */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_1_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Start of transmission error on data lane 1 (synchronization can still be achieved) Mask */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_1(value) (MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_1_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_1_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_0_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Start of Transmission Error on data lane 0 (no synchronization achieved). Position */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_0_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Start of Transmission Error on data lane 0 (no synchronization achieved). Mask */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_0(value) (MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_0_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_0_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_1_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Start of Transmission Error on data lane 1 (no synchronization achieved) Position */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_1_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Start of Transmission Error on data lane 1 (no synchronization achieved) Mask */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_1(value) (MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_1_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_1_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PHY_Msk        _U_(0x00030003)                                      /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Register Mask  */

#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS__Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PHY Position) Start of transmission error on data lane x (synchronization can still be achieved). */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS__Msk (_U_(0x3) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS__Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PHY Mask) PHY_ERRSOTHS_ */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS_(value) (MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS__Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRSOTHS__Pos)) 
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC__Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_ST_PHY Position) Start of Transmission Error on data lane x (no synchronization achieved) */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC__Msk (_U_(0x3) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC__Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PHY Mask) PHY_ERRESC_ */
#define MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC_(value) (MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC__Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PHY_PHY_ERRESC__Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_MSK_PHY : (MIPICSI2PHY Offset: 0x114) (R/W 32) Static read and write register    Interrupt mask for INT_ST_PHY controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. -------- */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Mask for phy_errsoths_0. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_0_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Mask for phy_errsoths_0. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_0(value) (MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_0_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_0_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Mask for phy_errsoths_1 Position */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_1_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Mask for phy_errsoths_1 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_1(value) (MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_1_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_1_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_0_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Mask for phy_erresc_0. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_0_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Mask for phy_erresc_0. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_0(value) (MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_0_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_0_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_1_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Mask for phy_erresc_1 Position */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_1_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Mask for phy_erresc_1 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_1(value) (MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_1_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_1_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PHY_Msk       _U_(0x00030003)                                      /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Register Mask  */

#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS__Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PHY Position) Mask for phy_errsoths_x. */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS__Msk (_U_(0x3) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS__Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PHY Mask) MASK_PHY_ERRSOTHS_ */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS_(value) (MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS__Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRSOTHS__Pos)) 
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC__Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_PHY Position) Mask for phy_erresc_x */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC__Msk (_U_(0x3) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC__Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PHY Mask) MASK_PHY_ERRESC_ */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC_(value) (MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC__Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PHY_MASK_PHY_ERRESC__Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_FORCE_PHY : (MIPICSI2PHY Offset: 0x118) (R/W 32) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_PHY interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. -------- */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Force phy_errsoths_0. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_0_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Force phy_errsoths_0. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_0(value) (MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_0_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_0_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Force phy_errsoths_1 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_1_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Force phy_errsoths_1 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_1(value) (MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_1_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_1_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_0_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Force phy_erresc_0 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_0_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Force phy_erresc_0 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_0(value) (MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_0_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_0_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_1_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Force phy_erresc_1 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_1_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Force phy_erresc_1 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_1(value) (MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_1_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_1_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_Msk     _U_(0x00030003)                                      /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Register Mask  */

#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS__Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY Position) Force phy_errsoths_x. */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS__Msk (_U_(0x3) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS__Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY Mask) FORCE_PHY_ERRSOTHS_ */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS_(value) (MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS__Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRSOTHS__Pos)) 
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC__Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY Position) Force phy_erresc_x */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC__Msk (_U_(0x3) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC__Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY Mask) FORCE_PHY_ERRESC_ */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC_(value) (MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC__Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PHY_FORCE_PHY_ERRESC__Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_ST_PKT : (MIPICSI2PHY Offset: 0x120) ( R/ 32) Clear on read register    Interruption related with Packet construction. Packet discarded.   Groups and notifies which interruption bits caused the interruption.   Stores the source of the error.   Reading INT_ST_PKT register does not clear the interrupt pin. -------- */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Unrecognized or unimplemented data type detected in virtual channel 0. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Unrecognized or unimplemented data type detected in virtual channel 0. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC0(value) (MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Unrecognized or unimplemented data type detected in virtual channel 1. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Unrecognized or unimplemented data type detected in virtual channel 1. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC1(value) (MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC2_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Unrecognized or unimplemented data type detected in virtual channel 2. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Unrecognized or unimplemented data type detected in virtual channel 2. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC2(value) (MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC3_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Unrecognized or unimplemented data type detected in virtual channel 3. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Unrecognized or unimplemented data type detected in virtual channel 3. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC3(value) (MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC0_ERR_ECC_CORRECTED_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_ST_PKT) D-PHY mode : Header error detected and corrected on virtual channel 0.   C-PHY mode : Header CRC recoverable on virtual channel 0. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC0_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_VC0_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT) D-PHY mode : Header error detected and corrected on virtual channel 0.   C-PHY mode : Header CRC recoverable on virtual channel 0. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC0_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_ST_PKT_VC0_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_VC0_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC1_ERR_ECC_CORRECTED_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_ST_PKT) D-PHY mode : Header error detected and corrected on virtual channel 1.   C-PHY mode : Header CRC recoverable on virtual channel 1. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC1_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_VC1_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT) D-PHY mode : Header error detected and corrected on virtual channel 1.   C-PHY mode : Header CRC recoverable on virtual channel 1. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC1_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_ST_PKT_VC1_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_VC1_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC2_ERR_ECC_CORRECTED_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_ST_PKT) D-PHY mode : Header error detected and corrected on virtual channel 2.  C-PHY mode : Header CRC recoverable on virtual channel 2. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC2_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_VC2_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT) D-PHY mode : Header error detected and corrected on virtual channel 2.  C-PHY mode : Header CRC recoverable on virtual channel 2. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC2_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_ST_PKT_VC2_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_VC2_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC3_ERR_ECC_CORRECTED_Pos _U_(19)                                              /**< (MIPICSI2PHY_CSI_INT_ST_PKT) D-PHY mode : Header error detected and corrected on virtual channel 3.  C-PHY mode : Header CRC recoverable on virtual channel 3. Position */
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC3_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_PKT_VC3_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT) D-PHY mode : Header error detected and corrected on virtual channel 3.  C-PHY mode : Header CRC recoverable on virtual channel 3. Mask */
#define MIPICSI2PHY_CSI_INT_ST_PKT_VC3_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_ST_PKT_VC3_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_VC3_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_ST_PKT_Msk        _U_(0x000F000F)                                      /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Register Mask  */

#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_PKT Position) Unrecognized or unimplemented data type detected in virtual channel x. */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_PKT Mask) ERR_ID_VC */
#define MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC(value) (MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_PKT_ERR_ID_VC_Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_MSK_PKT : (MIPICSI2PHY Offset: 0x124) (R/W 32) Static read and write register    Interrupt mask for INT_ST_PKT controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. -------- */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for err_id_vc0. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for err_id_vc0. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC0(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for err_id_vc1. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for err_id_vc1. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC1(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC2_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for err_id_vc2. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for err_id_vc2. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC2(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC3_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for err_id_vc3. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for err_id_vc3. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC3(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC0_ERR_ECC_CORRECTED_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for vc0_err_ecc_corrected. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC0_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC0_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for vc0_err_ecc_corrected. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC0_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC0_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC0_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC1_ERR_ECC_CORRECTED_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for vc1_err_ecc_corrected. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC1_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC1_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for vc1_err_ecc_corrected. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC1_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC1_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC1_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC2_ERR_ECC_CORRECTED_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for vc2_err_ecc_corrected. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC2_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC2_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for vc2_err_ecc_corrected. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC2_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC2_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC2_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC3_ERR_ECC_CORRECTED_Pos _U_(19)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for vc3_err_ecc_corrected. Position */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC3_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC3_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Mask for vc3_err_ecc_corrected. Mask */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC3_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC3_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_VC3_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_PKT_Msk       _U_(0x000F000F)                                      /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Register Mask  */

#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_PKT Position) Mask for err_id_vcx. */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_PKT Mask) MASK_ERR_ID_VC */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC(value) (MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_PKT_MASK_ERR_ID_VC_Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_FORCE_PKT : (MIPICSI2PHY Offset: 0x128) (R/W 32) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_PKT interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. -------- */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force err_id_vc0. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC0_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force err_id_vc0. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC0(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC0_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC0_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force err_id_vc1. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC1_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force err_id_vc1. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC1(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC1_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC1_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC2_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force err_id_vc2. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC2_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force err_id_vc2. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC2(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC2_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC2_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC3_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force err_id_vc3. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC3_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force err_id_vc3. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC3(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC3_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC3_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC0_ERR_ECC_CORRECTED_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force vc0_err_ecc_corrected. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC0_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC0_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force vc0_err_ecc_corrected. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC0_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC0_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC0_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC1_ERR_ECC_CORRECTED_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force vc1_err_ecc_corrected. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC1_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC1_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force vc1_err_ecc_corrected. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC1_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC1_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC1_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC2_ERR_ECC_CORRECTED_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force vc2_err_ecc_corrected. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC2_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC2_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force vc2_err_ecc_corrected. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC2_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC2_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC2_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC3_ERR_ECC_CORRECTED_Pos _U_(19)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force vc3_err_ecc_corrected. Position */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC3_ERR_ECC_CORRECTED_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC3_ERR_ECC_CORRECTED_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Force vc3_err_ecc_corrected. Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC3_ERR_ECC_CORRECTED(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC3_ERR_ECC_CORRECTED_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_VC3_ERR_ECC_CORRECTED_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_Msk     _U_(0x000F000F)                                      /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Register Mask  */

#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT Position) Force err_id_vcx. */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC_Msk (_U_(0xF) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT Mask) FORCE_ERR_ID_VC */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC(value) (MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_PKT_FORCE_ERR_ID_VC_Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_ST_LINE : (MIPICSI2PHY Offset: 0x130) ( R/ 32) Clear on read register    Interruption related with Line construction.    Groups and notifies which interruption bits caused the interruption.  Stores the source of the error.   Reading INT_ST_LINE register does not clear the interrupt pin. -------- */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc0 and dt0 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI0_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc0 and dt0 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI0(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI0_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI0_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc1 and dt1 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI1_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc1 and dt1 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI1(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI1_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI1_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI2_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc2 and dt2 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI2_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc2 and dt2 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI2(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI2_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI2_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI3_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc3 and dt3 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI3_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc3 and dt3 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI3(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI3_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI3_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI4_Pos _U_(4)                                               /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc4 and dt4 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI4_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI4_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc4 and dt4 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI4(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI4_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI4_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI5_Pos _U_(5)                                               /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc5 and dt5 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI5_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI5_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc5 and dt5 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI5(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI5_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI5_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI6_Pos _U_(6)                                               /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc6 and dt6 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI6_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI6_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc6 and dt6 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI6(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI6_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI6_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI7_Pos _U_(7)                                               /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc7 and dt7 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI7_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI7_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error matching line start with line end for vc7 and dt7 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI7(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI7_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI7_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI0_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc0 and dt0 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI0_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc0 and dt0 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI0(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI0_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI0_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI1_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc1 and dt1 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI1_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc1 and dt1 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI1(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI1_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI1_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI2_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc2 and dt2 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI2_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc2 and dt2 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI2(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI2_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI2_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI3_Pos _U_(19)                                              /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc3 and dt3 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI3_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc3 and dt3 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI3(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI3_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI3_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI4_Pos _U_(20)                                              /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc4 and dt4 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI4_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI4_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc4 and dt4 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI4(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI4_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI4_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI5_Pos _U_(21)                                              /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc5 and dt5 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI5_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI5_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc5 and dt5 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI5(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI5_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI5_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI6_Pos _U_(22)                                              /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc6 and dt6 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI6_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI6_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc6 and dt6 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI6(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI6_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI6_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI7_Pos _U_(23)                                              /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc7 and dt7 Position */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI7_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI7_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Error in the sequence of lines for vc7 and dt7 Mask */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI7(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI7_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI7_Pos))
#define MIPICSI2PHY_CSI_INT_ST_LINE_Msk       _U_(0x00FF00FF)                                      /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Register Mask  */

#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_LINE Position) Error matching line start with line end for vcx and dtx */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI_Msk (_U_(0xFF) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE Mask) ERR_L_BNDRY_MATCH_DI */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_BNDRY_MATCH_DI_Pos)) 
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_ST_LINE Position) Error in the sequence of lines for vc7 and dt7 */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI_Msk (_U_(0xFF) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_LINE Mask) ERR_L_SEQ_DI */
#define MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI(value) (MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_LINE_ERR_L_SEQ_DI_Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_MSK_LINE : (MIPICSI2PHY Offset: 0x134) (R/W 32) Static read and write register    Interrupt mask for INT_ST_LINE controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. -------- */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di0 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI0_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di0 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI0(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI0_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI0_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di1 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI1_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di1 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI1(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI1_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI1_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI2_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di2 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI2_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di2 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI2(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI2_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI2_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI3_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di3 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI3_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di3 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI3(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI3_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI3_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI4_Pos _U_(4)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di4 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI4_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI4_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di4 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI4(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI4_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI4_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI5_Pos _U_(5)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di5 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI5_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI5_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di5 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI5(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI5_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI5_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI6_Pos _U_(6)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di6 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI6_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI6_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di6 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI6(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI6_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI6_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI7_Pos _U_(7)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di7 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI7_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI7_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_bndry_match_di7 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI7(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI7_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI7_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI0_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di0 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI0_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di0 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI0(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI0_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI0_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI1_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di1 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI1_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di1 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI1(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI1_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI1_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI2_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di2 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI2_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di2 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI2(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI2_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI2_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI3_Pos _U_(19)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di3 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI3_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di3 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI3(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI3_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI3_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI4_Pos _U_(20)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di4 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI4_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI4_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di4 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI4(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI4_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI4_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI5_Pos _U_(21)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di5 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI5_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI5_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di5 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI5(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI5_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI5_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI6_Pos _U_(22)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di6 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI6_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI6_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di6 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI6(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI6_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI6_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI7_Pos _U_(23)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di7 Position */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI7_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI7_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Mask for err_l_seq_di7 Mask */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI7(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI7_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI7_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_LINE_Msk      _U_(0x00FF00FF)                                      /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Register Mask  */

#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_LINE Position) Mask for err_l_bndry_match_dix */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI_Msk (_U_(0xFF) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE Mask) MASK_ERR_L_BNDRY_MATCH_DI */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_BNDRY_MATCH_DI_Pos)) 
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_MSK_LINE Position) Mask for err_l_seq_di7 */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI_Msk (_U_(0xFF) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_LINE Mask) MASK_ERR_L_SEQ_DI */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI(value) (MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_LINE_MASK_ERR_L_SEQ_DI_Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_FORCE_LINE : (MIPICSI2PHY Offset: 0x138) (R/W 32) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_LINE interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. -------- */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI0_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di0 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI0_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di0 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI0(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI0_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI0_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI1_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di1 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI1_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di1 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI1(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI1_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI1_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI2_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di2 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI2_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di2 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI2(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI2_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI2_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI3_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di3 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI3_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di3 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI3(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI3_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI3_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI4_Pos _U_(4)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di4 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI4_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI4_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di4 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI4(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI4_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI4_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI5_Pos _U_(5)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di5 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI5_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI5_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di5 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI5(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI5_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI5_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI6_Pos _U_(6)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di6 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI6_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI6_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di6 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI6(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI6_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI6_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI7_Pos _U_(7)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di7 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI7_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI7_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_bndry_match_di7 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI7(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI7_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI7_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI0_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di0 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI0_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI0_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di0 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI0(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI0_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI0_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI1_Pos _U_(17)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di1 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI1_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI1_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di1 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI1(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI1_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI1_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI2_Pos _U_(18)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di2 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI2_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI2_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di2 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI2(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI2_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI2_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI3_Pos _U_(19)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di3 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI3_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI3_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di3 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI3(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI3_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI3_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI4_Pos _U_(20)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di4 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI4_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI4_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di4 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI4(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI4_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI4_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI5_Pos _U_(21)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di5 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI5_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI5_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di5 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI5(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI5_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI5_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI6_Pos _U_(22)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di6 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI6_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI6_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di6 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI6(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI6_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI6_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI7_Pos _U_(23)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di7 Position */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI7_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI7_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Force err_l_seq_di7 Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI7(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI7_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI7_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_Msk    _U_(0x00FF00FF)                                      /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Register Mask  */

#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE Position) Force err_l_bndry_match_dix */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI_Msk (_U_(0xFF) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE Mask) FORCE_ERR_L_BNDRY_MATCH_DI */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_BNDRY_MATCH_DI_Pos)) 
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI_Pos _U_(16)                                              /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE Position) Force err_l_seq_di7 */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI_Msk (_U_(0xFF) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE Mask) FORCE_ERR_L_SEQ_DI */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI(value) (MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_LINE_FORCE_ERR_L_SEQ_DI_Pos)) 

/* -------- MIPICSI2PHY_CSI_INT_ST_IPI : (MIPICSI2PHY Offset: 0x140) ( R/ 32) Clear on read register Fatal Interruption caused by IPI interface. Groups and notifies which interruption bits caused the interruption. Stores the source of the error. Reading INT_ST_IPI register does not clear the interrupt pin -------- */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_UNDERFLOW_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_ST_IPI) The FIFO has become empty before the expected number of pixels (calculated from the packet's header) could be extracted to the pixel interface Position */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_UNDERFLOW_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_UNDERFLOW_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_IPI) The FIFO has become empty before the expected number of pixels (calculated from the packet's header) could be extracted to the pixel interface Mask */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_UNDERFLOW(value) (MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_UNDERFLOW_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_UNDERFLOW_Pos))
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_OVERFLOW_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_ST_IPI) The FIFO of pixel interface has lost information because some more data arrived when it was full Position */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_OVERFLOW_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_OVERFLOW_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_IPI) The FIFO of pixel interface has lost information because some more data arrived when it was full Mask */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_OVERFLOW(value) (MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_OVERFLOW_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_OVERFLOW_Pos))
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FRAME_SYNC_ERR_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_ST_IPI) New frame is received but previous has not been completed Position */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FRAME_SYNC_ERR_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FRAME_SYNC_ERR_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_IPI) New frame is received but previous has not been completed Mask */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FRAME_SYNC_ERR(value) (MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FRAME_SYNC_ERR_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FRAME_SYNC_ERR_Pos))
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_NEMPTY_FS_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_ST_IPI) The FIFO of pixel interface is not empty at the start of a new frame. If this is expected this interrupt should be masked Position */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_NEMPTY_FS_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_NEMPTY_FS_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_IPI) The FIFO of pixel interface is not empty at the start of a new frame. If this is expected this interrupt should be masked Mask */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_NEMPTY_FS(value) (MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_NEMPTY_FS_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_FIFO_NEMPTY_FS_Pos))
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_HLINE_ERR_Pos _U_(4)                                               /**< (MIPICSI2PHY_CSI_INT_ST_IPI) Horizontal line time error (only available in controller mode) Position */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_HLINE_ERR_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_HLINE_ERR_Pos) /**< (MIPICSI2PHY_CSI_INT_ST_IPI) Horizontal line time error (only available in controller mode) Mask */
#define MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_HLINE_ERR(value) (MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_HLINE_ERR_Msk & ((value) << MIPICSI2PHY_CSI_INT_ST_IPI_PIXEL_IF_HLINE_ERR_Pos))
#define MIPICSI2PHY_CSI_INT_ST_IPI_Msk        _U_(0x0000001F)                                      /**< (MIPICSI2PHY_CSI_INT_ST_IPI) Register Mask  */


/* -------- MIPICSI2PHY_CSI_INT_MSK_IPI : (MIPICSI2PHY Offset: 0x144) (R/W 32) Static read and write register Each bit of this register masks the interruption from INT_ST_IPI from generating an interruption event. Once a bit of the mask is active, the respective error of the INT_ST_ IPI register is masked preventing the error signal from signaling an interruption through the interrupt pin -------- */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_UNDERFLOW_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask for pixel_if_fifo_underflow Position */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_UNDERFLOW_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_UNDERFLOW_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask for pixel_if_fifo_underflow Mask */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_UNDERFLOW(value) (MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_UNDERFLOW_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_UNDERFLOW_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_OVERFLOW_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask for pixel_if_fifo_overflow Position */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_OVERFLOW_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_OVERFLOW_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask for pixel_if_fifo_overflow Mask */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_OVERFLOW(value) (MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_OVERFLOW_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_OVERFLOW_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_FRAME_SYNC_ERR_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask for pixel_if_frame_sync_err Position */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_FRAME_SYNC_ERR_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_FRAME_SYNC_ERR_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask for pixel_if_frame_sync_err Mask */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_FRAME_SYNC_ERR(value) (MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_FRAME_SYNC_ERR_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_FRAME_SYNC_ERR_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_NEMPTY_FS_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask pixel_if_fifo_nempty_fs Position */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_NEMPTY_FS_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_NEMPTY_FS_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask pixel_if_fifo_nempty_fs Mask */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_NEMPTY_FS(value) (MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_NEMPTY_FS_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_FIFO_NEMPTY_FS_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_HLINE_ERR_Pos _U_(4)                                               /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask pixel_if_hline_err Position */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_HLINE_ERR_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_HLINE_ERR_Pos) /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Mask pixel_if_hline_err Mask */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_HLINE_ERR(value) (MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_HLINE_ERR_Msk & ((value) << MIPICSI2PHY_CSI_INT_MSK_IPI_MSK_PIXEL_IF_HLINE_ERR_Pos))
#define MIPICSI2PHY_CSI_INT_MSK_IPI_Msk       _U_(0x0000001F)                                      /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Register Mask  */


/* -------- MIPICSI2PHY_CSI_INT_FORCE_IPI : (MIPICSI2PHY Offset: 0x148) (R/W 32) Static read and write register Interrupt force register is used for test purposes, and allows triggering INT_ST_IPI interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose -------- */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_UNDERFLOW_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force for pixel_if_fifo_underflow Position */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_UNDERFLOW_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_UNDERFLOW_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force for pixel_if_fifo_underflow Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_UNDERFLOW(value) (MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_UNDERFLOW_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_UNDERFLOW_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_OVERFLOW_Pos _U_(1)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force for pixel_if_fifo_overflow Position */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_OVERFLOW_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_OVERFLOW_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force for pixel_if_fifo_overflow Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_OVERFLOW(value) (MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_OVERFLOW_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_OVERFLOW_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_FRAME_SYNC_ERR_Pos _U_(2)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force for frame_sync_err Position */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_FRAME_SYNC_ERR_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_FRAME_SYNC_ERR_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force for frame_sync_err Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_FRAME_SYNC_ERR(value) (MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_FRAME_SYNC_ERR_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_FRAME_SYNC_ERR_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_NEMPTY_FS_Pos _U_(3)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force pixel_if_fifo_nempty_fs Position */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_NEMPTY_FS_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_NEMPTY_FS_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force pixel_if_fifo_nempty_fs Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_NEMPTY_FS(value) (MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_NEMPTY_FS_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_FIFO_NEMPTY_FS_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_HLINE_ERR_Pos _U_(4)                                               /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force pixel_if_hline_err Position */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_HLINE_ERR_Msk (_U_(0x1) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_HLINE_ERR_Pos) /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Force pixel_if_hline_err Mask */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_HLINE_ERR(value) (MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_HLINE_ERR_Msk & ((value) << MIPICSI2PHY_CSI_INT_FORCE_IPI_FORCE_PIXEL_IF_HLINE_ERR_Pos))
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_Msk     _U_(0x0000001F)                                      /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Register Mask  */


/* -------- MIPICSI2PHY_CSI_SCRAMBLING : (MIPICSI2PHY Offset: 0x300) (R/W 32) This register configures the De-scrambler block. -------- */
#define MIPICSI2PHY_CSI_SCRAMBLING_SCRAMBLE_ENABLE_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_SCRAMBLING) Enables data de-scrambling on the controller side. Position */
#define MIPICSI2PHY_CSI_SCRAMBLING_SCRAMBLE_ENABLE_Msk (_U_(0x1) << MIPICSI2PHY_CSI_SCRAMBLING_SCRAMBLE_ENABLE_Pos) /**< (MIPICSI2PHY_CSI_SCRAMBLING) Enables data de-scrambling on the controller side. Mask */
#define MIPICSI2PHY_CSI_SCRAMBLING_SCRAMBLE_ENABLE(value) (MIPICSI2PHY_CSI_SCRAMBLING_SCRAMBLE_ENABLE_Msk & ((value) << MIPICSI2PHY_CSI_SCRAMBLING_SCRAMBLE_ENABLE_Pos))
#define MIPICSI2PHY_CSI_SCRAMBLING_Msk        _U_(0x00000001)                                      /**< (MIPICSI2PHY_CSI_SCRAMBLING) Register Mask  */


/* -------- MIPICSI2PHY_CSI_SCRAMBLING_SEED1 : (MIPICSI2PHY Offset: 0x304) (R/W 32) This register configures the seed used by De-scrambler block for lane 1 -------- */
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED1_SCRAMBLE_SEED_LANE1_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_SCRAMBLING_SEED1) Seed used by De-scrambler block for lane 1 Position */
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED1_SCRAMBLE_SEED_LANE1_Msk (_U_(0xFFFF) << MIPICSI2PHY_CSI_SCRAMBLING_SEED1_SCRAMBLE_SEED_LANE1_Pos) /**< (MIPICSI2PHY_CSI_SCRAMBLING_SEED1) Seed used by De-scrambler block for lane 1 Mask */
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED1_SCRAMBLE_SEED_LANE1(value) (MIPICSI2PHY_CSI_SCRAMBLING_SEED1_SCRAMBLE_SEED_LANE1_Msk & ((value) << MIPICSI2PHY_CSI_SCRAMBLING_SEED1_SCRAMBLE_SEED_LANE1_Pos))
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED1_Msk  _U_(0x0000FFFF)                                      /**< (MIPICSI2PHY_CSI_SCRAMBLING_SEED1) Register Mask  */


/* -------- MIPICSI2PHY_CSI_SCRAMBLING_SEED2 : (MIPICSI2PHY Offset: 0x308) (R/W 32) This register configures the seed used by De-scrambler block for lane 2 -------- */
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED2_SCRAMBLE_SEED_LANE2_Pos _U_(0)                                               /**< (MIPICSI2PHY_CSI_SCRAMBLING_SEED2) Seed used by De-scrambler block for lane 2 Position */
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED2_SCRAMBLE_SEED_LANE2_Msk (_U_(0xFFFF) << MIPICSI2PHY_CSI_SCRAMBLING_SEED2_SCRAMBLE_SEED_LANE2_Pos) /**< (MIPICSI2PHY_CSI_SCRAMBLING_SEED2) Seed used by De-scrambler block for lane 2 Mask */
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED2_SCRAMBLE_SEED_LANE2(value) (MIPICSI2PHY_CSI_SCRAMBLING_SEED2_SCRAMBLE_SEED_LANE2_Msk & ((value) << MIPICSI2PHY_CSI_SCRAMBLING_SEED2_SCRAMBLE_SEED_LANE2_Pos))
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED2_Msk  _U_(0x0000FFFF)                                      /**< (MIPICSI2PHY_CSI_SCRAMBLING_SEED2) Register Mask  */


/** \brief MIPICSI2PHY register offsets definitions */
#define MIPICSI2PHY_CSI_VERSION_REG_OFST (0x00)              /**< (MIPICSI2PHY_CSI_VERSION) Read-only register   Contains the version of DWC_mipi_csi2_host coded in 32-bit ASCII code. Offset */
#define MIPICSI2PHY_CSI_N_LANES_REG_OFST (0x04)              /**< (MIPICSI2PHY_CSI_N_LANES) Static read and write register   Configures the number of active lanes that the DWC_mipi_csi2_host uses to receive the camera device data. Offset */
#define MIPICSI2PHY_CSI_CSI2_RESETN_REG_OFST (0x08)              /**< (MIPICSI2PHY_CSI_CSI2_RESETN) Static read and write register   Controls the DWC_mipi_csi2_host logic reset state. When activated, the internal logic of the controller goes into the reset state. The configuration is not reset to default values with this register, instead, only the internal controller logic is affected. Offset */
#define MIPICSI2PHY_CSI_INT_ST_MAIN_REG_OFST (0x0C)              /**< (MIPICSI2PHY_CSI_INT_ST_MAIN) Clear on read register   Contains the status of individual interrupt sources, regardless of the contents of the associated interrupt mask registers, so it is possible to service the interrupt status registers by polling. Reading INT_ST_MAIN register clears the interrupt pin. Offset */
#define MIPICSI2PHY_CSI_DATA_IDS_1_REG_OFST (0x10)              /**< (MIPICSI2PHY_CSI_DATA_IDS_1) Static read and write register   Programs the data Ids for matching line error reporting.   Enables up to eight different data Ids that can be identified simultaneously. Offset */
#define MIPICSI2PHY_CSI_DATA_IDS_2_REG_OFST (0x14)              /**< (MIPICSI2PHY_CSI_DATA_IDS_2) Static read and write register   Programs the data Ids for matching line error reporting.   Configures Data ID definition for four additional pairs of data types and virtual channel identifiers. Offset */
#define MIPICSI2PHY_CSI_PHY_SHUTDOWNZ_REG_OFST (0x40)              /**< (MIPICSI2PHY_CSI_PHY_SHUTDOWNZ) Active low   Controls the PHY Shutdown mode. In this state, the PHY sets the analog and digital circuitry in the Reset state. Offset */
#define MIPICSI2PHY_CSI_DPHY_RSTZ_REG_OFST (0x44)              /**< (MIPICSI2PHY_CSI_DPHY_RSTZ) Active low   Controls the PHY Reset mode. in this state, the PHY sets the digital circuitry in the Reset State. Offset */
#define MIPICSI2PHY_CSI_PHY_RX_REG_OFST (0x48)              /**< (MIPICSI2PHY_CSI_PHY_RX) Read-only register Contains the status of RX-related signals from PHY:   RXULPSESC*  RXCLKACTIVEHS (D-PHY)  It contains information such as, if the clock lane is receiving high-speed clock signal, or if the data and clock lanes are in Ultra Low Power Mode (ULPM). Offset */
#define MIPICSI2PHY_CSI_PHY_STOPSTATE_REG_OFST (0x4C)              /**< (MIPICSI2PHY_CSI_PHY_STOPSTATE) Read-only register   Contains the STOPSTATE signal status from PHY. Offset */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL0_REG_OFST (0x50)              /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL0) Dynamic register   Control for vendor specific interface in the PHY.   Controls the Synopsys D-PHY Test and Control interface. This register controls the TESTCLR and TESTCLK signals. Offset */
#define MIPICSI2PHY_CSI_PHY_TEST_CTRL1_REG_OFST (0x54)              /**< (MIPICSI2PHY_CSI_PHY_TEST_CTRL1) Dynamic register   Control for vendor specific interface in the PHY.   Controls the Synopsys D-PHY Test and Control interface. This register controls the TESTENABLE signal and the TESTDIN bus. Reading from this register retrieves the value from TESTDOUT. Offset */
#define MIPICSI2PHY_CSI_IPI_MODE_REG_OFST (0x80)              /**< (MIPICSI2PHY_CSI_IPI_MODE) This register selects how the IPI interface generates the video frame Offset */
#define MIPICSI2PHY_CSI_IPI_VCID_REG_OFST (0x84)              /**< (MIPICSI2PHY_CSI_IPI_VCID) This register selects the virtual channel processed by IPI Offset */
#define MIPICSI2PHY_CSI_IPI_DATA_TYPE_REG_OFST (0x88)              /**< (MIPICSI2PHY_CSI_IPI_DATA_TYPE) This register selects the data type processed by IPI Offset */
#define MIPICSI2PHY_CSI_IPI_MEM_FLUSH_REG_OFST (0x8C)              /**< (MIPICSI2PHY_CSI_IPI_MEM_FLUSH) This register control the flush of IPI memory Offset */
#define MIPICSI2PHY_CSI_IPI_HSA_TIME_REG_OFST (0x90)              /**< (MIPICSI2PHY_CSI_IPI_HSA_TIME) This register configures the video Horizontal Synchronism Active (HSA) time Offset */
#define MIPICSI2PHY_CSI_IPI_HBP_TIME_REG_OFST (0x94)              /**< (MIPICSI2PHY_CSI_IPI_HBP_TIME) This register configures the video Horizontal Back Porch (HBP) time Offset */
#define MIPICSI2PHY_CSI_IPI_HSD_TIME_REG_OFST (0x98)              /**< (MIPICSI2PHY_CSI_IPI_HSD_TIME) This register configures the video Horizontal Sync Delay (HSD) time Offset */
#define MIPICSI2PHY_CSI_IPI_HLINE_TIME_REG_OFST (0x9C)              /**< (MIPICSI2PHY_CSI_IPI_HLINE_TIME) This register configures the overall time for each video line Offset */
#define MIPICSI2PHY_CSI_IPI_VSA_LINES_REG_OFST (0xB0)              /**< (MIPICSI2PHY_CSI_IPI_VSA_LINES) This register configures the Vertical Synchronism Active (VSA) period Offset */
#define MIPICSI2PHY_CSI_IPI_VBP_LINES_REG_OFST (0xB4)              /**< (MIPICSI2PHY_CSI_IPI_VBP_LINES) This register configures the Vertical Back Porch (VBP) period Offset */
#define MIPICSI2PHY_CSI_IPI_VFP_LINES_REG_OFST (0xB8)              /**< (MIPICSI2PHY_CSI_IPI_VFP_LINES) This register configures the Vertical Front Porch (VFP) period Offset */
#define MIPICSI2PHY_CSI_IPI_VACTIVE_LINES_REG_OFST (0xBC)              /**< (MIPICSI2PHY_CSI_IPI_VACTIVE_LINES) This register configures the vertical resolution of the video Offset */
#define MIPICSI2PHY_CSI_PHY_CAL_REG_OFST (0xCC)              /**< (MIPICSI2PHY_CSI_PHY_CAL) Clear on read register    Contains the CALIBRATION signal status from Synopsys D-PHY. Offset */
#define MIPICSI2PHY_CSI_INT_ST_PHY_FATAL_REG_OFST (0xE0)              /**< (MIPICSI2PHY_CSI_INT_ST_PHY_FATAL) Clear on read register   Groups the fatal interruptions caused by PHY Packet discarded.   Stores the source of the error.   Reading INT_ST_PHY_FATAL register does not clear the interrupt pin. Offset */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL_REG_OFST (0xE4)              /**< (MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL) Static read and write register    Interrupt mask for INT_ST_PHY_FATAL controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. Offset */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL_REG_OFST (0xE8)              /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL) Static read and write register    Interrupt Force register is used for test purposes, and allows triggering INT_ST_PHY_FATAL interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, since it may be extremely complex to generate stimuli for that purpose. Offset */
#define MIPICSI2PHY_CSI_INT_ST_PKT_FATAL_REG_OFST (0xF0)              /**< (MIPICSI2PHY_CSI_INT_ST_PKT_FATAL) Clear on read register    Groups the fatal interruption related with Packet construction. Packet discarded.   Notifies which interruption bit has caused the interruption.   Stores the source of the error.   Reading INT_ST_PKT_FATAL register does not clear the interrupt pin. Offset */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL_REG_OFST (0xF4)              /**< (MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL) Static read and write register    Interrupt mask for INT_ST_PKT_FATAL controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. Offset */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL_REG_OFST (0xF8)              /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL) Static read and write register   Interrupt force register is used for test purposes, and allows triggering INT_ST_PKT_FATAL interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, since it may be extremely complex to generate stimuli for that purpose. Offset */
#define MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL_REG_OFST (0x100)             /**< (MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL) Clear on read register    Fatal interruption related with Frame construction. Packet discarded.   Groups and notifies which interruption bits caused the interruption.   Stores the source of the error.   Reading INT_ST_FRAME_FATAL register does not clear the interrupt pin. Offset */
#define MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL_REG_OFST (0x104)             /**< (MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL) Static read and write register    Interrupt mask for INT_ST_FRAME_FATAL controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. Offset */
#define MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL_REG_OFST (0x108)             /**< (MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_FRAME_FATAL interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. Offset */
#define MIPICSI2PHY_CSI_INT_ST_PHY_REG_OFST (0x110)             /**< (MIPICSI2PHY_CSI_INT_ST_PHY) Clear on read register    Interruption caused by PHY.   Groups and notifies which interruption bits caused the interruption.   Stores the source of the error.   Reading INT_ST_PHY register does not clear the interrupt pin. Offset */
#define MIPICSI2PHY_CSI_INT_MSK_PHY_REG_OFST (0x114)             /**< (MIPICSI2PHY_CSI_INT_MSK_PHY) Static read and write register    Interrupt mask for INT_ST_PHY controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. Offset */
#define MIPICSI2PHY_CSI_INT_FORCE_PHY_REG_OFST (0x118)             /**< (MIPICSI2PHY_CSI_INT_FORCE_PHY) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_PHY interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. Offset */
#define MIPICSI2PHY_CSI_INT_ST_PKT_REG_OFST (0x120)             /**< (MIPICSI2PHY_CSI_INT_ST_PKT) Clear on read register    Interruption related with Packet construction. Packet discarded.   Groups and notifies which interruption bits caused the interruption.   Stores the source of the error.   Reading INT_ST_PKT register does not clear the interrupt pin. Offset */
#define MIPICSI2PHY_CSI_INT_MSK_PKT_REG_OFST (0x124)             /**< (MIPICSI2PHY_CSI_INT_MSK_PKT) Static read and write register    Interrupt mask for INT_ST_PKT controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. Offset */
#define MIPICSI2PHY_CSI_INT_FORCE_PKT_REG_OFST (0x128)             /**< (MIPICSI2PHY_CSI_INT_FORCE_PKT) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_PKT interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. Offset */
#define MIPICSI2PHY_CSI_INT_ST_LINE_REG_OFST (0x130)             /**< (MIPICSI2PHY_CSI_INT_ST_LINE) Clear on read register    Interruption related with Line construction.    Groups and notifies which interruption bits caused the interruption.  Stores the source of the error.   Reading INT_ST_LINE register does not clear the interrupt pin. Offset */
#define MIPICSI2PHY_CSI_INT_MSK_LINE_REG_OFST (0x134)             /**< (MIPICSI2PHY_CSI_INT_MSK_LINE) Static read and write register    Interrupt mask for INT_ST_LINE controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. Offset */
#define MIPICSI2PHY_CSI_INT_FORCE_LINE_REG_OFST (0x138)             /**< (MIPICSI2PHY_CSI_INT_FORCE_LINE) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_LINE interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. Offset */
#define MIPICSI2PHY_CSI_INT_ST_IPI_REG_OFST (0x140)             /**< (MIPICSI2PHY_CSI_INT_ST_IPI) Clear on read register Fatal Interruption caused by IPI interface. Groups and notifies which interruption bits caused the interruption. Stores the source of the error. Reading INT_ST_IPI register does not clear the interrupt pin Offset */
#define MIPICSI2PHY_CSI_INT_MSK_IPI_REG_OFST (0x144)             /**< (MIPICSI2PHY_CSI_INT_MSK_IPI) Static read and write register Each bit of this register masks the interruption from INT_ST_IPI from generating an interruption event. Once a bit of the mask is active, the respective error of the INT_ST_ IPI register is masked preventing the error signal from signaling an interruption through the interrupt pin Offset */
#define MIPICSI2PHY_CSI_INT_FORCE_IPI_REG_OFST (0x148)             /**< (MIPICSI2PHY_CSI_INT_FORCE_IPI) Static read and write register Interrupt force register is used for test purposes, and allows triggering INT_ST_IPI interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose Offset */
#define MIPICSI2PHY_CSI_SCRAMBLING_REG_OFST (0x300)             /**< (MIPICSI2PHY_CSI_SCRAMBLING) This register configures the De-scrambler block. Offset */
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED1_REG_OFST (0x304)             /**< (MIPICSI2PHY_CSI_SCRAMBLING_SEED1) This register configures the seed used by De-scrambler block for lane 1 Offset */
#define MIPICSI2PHY_CSI_SCRAMBLING_SEED2_REG_OFST (0x308)             /**< (MIPICSI2PHY_CSI_SCRAMBLING_SEED2) This register configures the seed used by De-scrambler block for lane 2 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MIPICSI2PHY register API structure */
typedef struct
{  /* Camera Serial Interface 2 Controller and MIPI PHY */
  __I   uint32_t                       MIPICSI2PHY_CSI_VERSION; /**< Offset: 0x00 (R/   32) Read-only register   Contains the version of DWC_mipi_csi2_host coded in 32-bit ASCII code. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_N_LANES; /**< Offset: 0x04 (R/W  32) Static read and write register   Configures the number of active lanes that the DWC_mipi_csi2_host uses to receive the camera device data. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_CSI2_RESETN; /**< Offset: 0x08 (R/W  32) Static read and write register   Controls the DWC_mipi_csi2_host logic reset state. When activated, the internal logic of the controller goes into the reset state. The configuration is not reset to default values with this register, instead, only the internal controller logic is affected. */
  __I   uint32_t                       MIPICSI2PHY_CSI_INT_ST_MAIN; /**< Offset: 0x0C (R/   32) Clear on read register   Contains the status of individual interrupt sources, regardless of the contents of the associated interrupt mask registers, so it is possible to service the interrupt status registers by polling. Reading INT_ST_MAIN register clears the interrupt pin. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_DATA_IDS_1; /**< Offset: 0x10 (R/W  32) Static read and write register   Programs the data Ids for matching line error reporting.   Enables up to eight different data Ids that can be identified simultaneously. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_DATA_IDS_2; /**< Offset: 0x14 (R/W  32) Static read and write register   Programs the data Ids for matching line error reporting.   Configures Data ID definition for four additional pairs of data types and virtual channel identifiers. */
  __I   uint8_t                        Reserved1[0x28];
  __IO  uint32_t                       MIPICSI2PHY_CSI_PHY_SHUTDOWNZ; /**< Offset: 0x40 (R/W  32) Active low   Controls the PHY Shutdown mode. In this state, the PHY sets the analog and digital circuitry in the Reset state. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_DPHY_RSTZ; /**< Offset: 0x44 (R/W  32) Active low   Controls the PHY Reset mode. in this state, the PHY sets the digital circuitry in the Reset State. */
  __I   uint32_t                       MIPICSI2PHY_CSI_PHY_RX; /**< Offset: 0x48 (R/   32) Read-only register Contains the status of RX-related signals from PHY:   RXULPSESC*  RXCLKACTIVEHS (D-PHY)  It contains information such as, if the clock lane is receiving high-speed clock signal, or if the data and clock lanes are in Ultra Low Power Mode (ULPM). */
  __I   uint32_t                       MIPICSI2PHY_CSI_PHY_STOPSTATE; /**< Offset: 0x4C (R/   32) Read-only register   Contains the STOPSTATE signal status from PHY. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_PHY_TEST_CTRL0; /**< Offset: 0x50 (R/W  32) Dynamic register   Control for vendor specific interface in the PHY.   Controls the Synopsys D-PHY Test and Control interface. This register controls the TESTCLR and TESTCLK signals. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_PHY_TEST_CTRL1; /**< Offset: 0x54 (R/W  32) Dynamic register   Control for vendor specific interface in the PHY.   Controls the Synopsys D-PHY Test and Control interface. This register controls the TESTENABLE signal and the TESTDIN bus. Reading from this register retrieves the value from TESTDOUT. */
  __I   uint8_t                        Reserved2[0x28];
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_MODE; /**< Offset: 0x80 (R/W  32) This register selects how the IPI interface generates the video frame */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_VCID; /**< Offset: 0x84 (R/W  32) This register selects the virtual channel processed by IPI */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_DATA_TYPE; /**< Offset: 0x88 (R/W  32) This register selects the data type processed by IPI */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_MEM_FLUSH; /**< Offset: 0x8C (R/W  32) This register control the flush of IPI memory */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_HSA_TIME; /**< Offset: 0x90 (R/W  32) This register configures the video Horizontal Synchronism Active (HSA) time */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_HBP_TIME; /**< Offset: 0x94 (R/W  32) This register configures the video Horizontal Back Porch (HBP) time */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_HSD_TIME; /**< Offset: 0x98 (R/W  32) This register configures the video Horizontal Sync Delay (HSD) time */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_HLINE_TIME; /**< Offset: 0x9C (R/W  32) This register configures the overall time for each video line */
  __I   uint8_t                        Reserved3[0x10];
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_VSA_LINES; /**< Offset: 0xB0 (R/W  32) This register configures the Vertical Synchronism Active (VSA) period */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_VBP_LINES; /**< Offset: 0xB4 (R/W  32) This register configures the Vertical Back Porch (VBP) period */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_VFP_LINES; /**< Offset: 0xB8 (R/W  32) This register configures the Vertical Front Porch (VFP) period */
  __IO  uint32_t                       MIPICSI2PHY_CSI_IPI_VACTIVE_LINES; /**< Offset: 0xBC (R/W  32) This register configures the vertical resolution of the video */
  __I   uint8_t                        Reserved4[0x0C];
  __I   uint32_t                       MIPICSI2PHY_CSI_PHY_CAL; /**< Offset: 0xCC (R/   32) Clear on read register    Contains the CALIBRATION signal status from Synopsys D-PHY. */
  __I   uint8_t                        Reserved5[0x10];
  __I   uint32_t                       MIPICSI2PHY_CSI_INT_ST_PHY_FATAL; /**< Offset: 0xE0 (R/   32) Clear on read register   Groups the fatal interruptions caused by PHY Packet discarded.   Stores the source of the error.   Reading INT_ST_PHY_FATAL register does not clear the interrupt pin. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_MSK_PHY_FATAL; /**< Offset: 0xE4 (R/W  32) Static read and write register    Interrupt mask for INT_ST_PHY_FATAL controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_FORCE_PHY_FATAL; /**< Offset: 0xE8 (R/W  32) Static read and write register    Interrupt Force register is used for test purposes, and allows triggering INT_ST_PHY_FATAL interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, since it may be extremely complex to generate stimuli for that purpose. */
  __I   uint8_t                        Reserved6[0x04];
  __I   uint32_t                       MIPICSI2PHY_CSI_INT_ST_PKT_FATAL; /**< Offset: 0xF0 (R/   32) Clear on read register    Groups the fatal interruption related with Packet construction. Packet discarded.   Notifies which interruption bit has caused the interruption.   Stores the source of the error.   Reading INT_ST_PKT_FATAL register does not clear the interrupt pin. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_MSK_PKT_FATAL; /**< Offset: 0xF4 (R/W  32) Static read and write register    Interrupt mask for INT_ST_PKT_FATAL controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_FORCE_PKT_FATAL; /**< Offset: 0xF8 (R/W  32) Static read and write register   Interrupt force register is used for test purposes, and allows triggering INT_ST_PKT_FATAL interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, since it may be extremely complex to generate stimuli for that purpose. */
  __I   uint8_t                        Reserved7[0x04];
  __I   uint32_t                       MIPICSI2PHY_CSI_INT_ST_FRAME_FATAL; /**< Offset: 0x100 (R/   32) Clear on read register    Fatal interruption related with Frame construction. Packet discarded.   Groups and notifies which interruption bits caused the interruption.   Stores the source of the error.   Reading INT_ST_FRAME_FATAL register does not clear the interrupt pin. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_MSK_FRAME_FATAL; /**< Offset: 0x104 (R/W  32) Static read and write register    Interrupt mask for INT_ST_FRAME_FATAL controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_FORCE_FRAME_FATAL; /**< Offset: 0x108 (R/W  32) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_FRAME_FATAL interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. */
  __I   uint8_t                        Reserved8[0x04];
  __I   uint32_t                       MIPICSI2PHY_CSI_INT_ST_PHY; /**< Offset: 0x110 (R/   32) Clear on read register    Interruption caused by PHY.   Groups and notifies which interruption bits caused the interruption.   Stores the source of the error.   Reading INT_ST_PHY register does not clear the interrupt pin. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_MSK_PHY; /**< Offset: 0x114 (R/W  32) Static read and write register    Interrupt mask for INT_ST_PHY controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_FORCE_PHY; /**< Offset: 0x118 (R/W  32) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_PHY interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. */
  __I   uint8_t                        Reserved9[0x04];
  __I   uint32_t                       MIPICSI2PHY_CSI_INT_ST_PKT; /**< Offset: 0x120 (R/   32) Clear on read register    Interruption related with Packet construction. Packet discarded.   Groups and notifies which interruption bits caused the interruption.   Stores the source of the error.   Reading INT_ST_PKT register does not clear the interrupt pin. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_MSK_PKT; /**< Offset: 0x124 (R/W  32) Static read and write register    Interrupt mask for INT_ST_PKT controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_FORCE_PKT; /**< Offset: 0x128 (R/W  32) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_PKT interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. */
  __I   uint8_t                        Reserved10[0x04];
  __I   uint32_t                       MIPICSI2PHY_CSI_INT_ST_LINE; /**< Offset: 0x130 (R/   32) Clear on read register    Interruption related with Line construction.    Groups and notifies which interruption bits caused the interruption.  Stores the source of the error.   Reading INT_ST_LINE register does not clear the interrupt pin. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_MSK_LINE; /**< Offset: 0x134 (R/W  32) Static read and write register    Interrupt mask for INT_ST_LINE controls which interrupt status bits will trigger the interrupt pin. Bit at 1 - Enable the interrupt source. Bit at 0 - Interrupt source is masked. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_FORCE_LINE; /**< Offset: 0x138 (R/W  32) Static read and write register    Interrupt force register is used for test purposes, and allows triggering INT_ST_LINE interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose. */
  __I   uint8_t                        Reserved11[0x04];
  __I   uint32_t                       MIPICSI2PHY_CSI_INT_ST_IPI; /**< Offset: 0x140 (R/   32) Clear on read register Fatal Interruption caused by IPI interface. Groups and notifies which interruption bits caused the interruption. Stores the source of the error. Reading INT_ST_IPI register does not clear the interrupt pin */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_MSK_IPI; /**< Offset: 0x144 (R/W  32) Static read and write register Each bit of this register masks the interruption from INT_ST_IPI from generating an interruption event. Once a bit of the mask is active, the respective error of the INT_ST_ IPI register is masked preventing the error signal from signaling an interruption through the interrupt pin */
  __IO  uint32_t                       MIPICSI2PHY_CSI_INT_FORCE_IPI; /**< Offset: 0x148 (R/W  32) Static read and write register Interrupt force register is used for test purposes, and allows triggering INT_ST_IPI interrupt events individually, without the need to activate the conditions that trigger the interrupt sources, because it may be extremely complex to generate stimuli for that purpose */
  __I   uint8_t                        Reserved12[0x1B4];
  __IO  uint32_t                       MIPICSI2PHY_CSI_SCRAMBLING; /**< Offset: 0x300 (R/W  32) This register configures the De-scrambler block. */
  __IO  uint32_t                       MIPICSI2PHY_CSI_SCRAMBLING_SEED1; /**< Offset: 0x304 (R/W  32) This register configures the seed used by De-scrambler block for lane 1 */
  __IO  uint32_t                       MIPICSI2PHY_CSI_SCRAMBLING_SEED2; /**< Offset: 0x308 (R/W  32) This register configures the seed used by De-scrambler block for lane 2 */
} mipicsi2phy_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_MIPICSI2PHY_COMPONENT_H_ */
