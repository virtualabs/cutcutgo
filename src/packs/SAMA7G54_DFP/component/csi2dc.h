/*
 * Component description for CSI2DC
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
#ifndef _SAMA7G_CSI2DC_COMPONENT_H_
#define _SAMA7G_CSI2DC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CSI2DC                                       */
/* ************************************************************************** */

/* -------- CSI2DC_IDSEW0R : (CSI2DC Offset: 0x00) ( R/ 32) IDS Entry Word 0 Register  -------- */
#define CSI2DC_IDSEW0R_RESETVALUE             _U_(0x00)                                            /**<  (CSI2DC_IDSEW0R) IDS Entry Word 0 Register   Reset Value */

#define CSI2DC_IDSEW0R_DT_Pos                 _U_(0)                                               /**< (CSI2DC_IDSEW0R) Data Type Position */
#define CSI2DC_IDSEW0R_DT_Msk                 (_U_(0x3F) << CSI2DC_IDSEW0R_DT_Pos)                 /**< (CSI2DC_IDSEW0R) Data Type Mask */
#define CSI2DC_IDSEW0R_DT(value)              (CSI2DC_IDSEW0R_DT_Msk & ((value) << CSI2DC_IDSEW0R_DT_Pos))
#define CSI2DC_IDSEW0R_VC_Pos                 _U_(6)                                               /**< (CSI2DC_IDSEW0R) Virtual Channel Identifier Position */
#define CSI2DC_IDSEW0R_VC_Msk                 (_U_(0x3) << CSI2DC_IDSEW0R_VC_Pos)                  /**< (CSI2DC_IDSEW0R) Virtual Channel Identifier Mask */
#define CSI2DC_IDSEW0R_VC(value)              (CSI2DC_IDSEW0R_VC_Msk & ((value) << CSI2DC_IDSEW0R_VC_Pos))
#define   CSI2DC_IDSEW0R_VC_VC0_Val           _U_(0x0)                                             /**< (CSI2DC_IDSEW0R) Virtual Channel 0  */
#define   CSI2DC_IDSEW0R_VC_VC1_Val           _U_(0x1)                                             /**< (CSI2DC_IDSEW0R) Virtual Channel 1  */
#define   CSI2DC_IDSEW0R_VC_VC2_Val           _U_(0x2)                                             /**< (CSI2DC_IDSEW0R) Virtual Channel 2  */
#define   CSI2DC_IDSEW0R_VC_VC3_Val           _U_(0x3)                                             /**< (CSI2DC_IDSEW0R) Virtual Channel 3  */
#define CSI2DC_IDSEW0R_VC_VC0                 (CSI2DC_IDSEW0R_VC_VC0_Val << CSI2DC_IDSEW0R_VC_Pos) /**< (CSI2DC_IDSEW0R) Virtual Channel 0 Position  */
#define CSI2DC_IDSEW0R_VC_VC1                 (CSI2DC_IDSEW0R_VC_VC1_Val << CSI2DC_IDSEW0R_VC_Pos) /**< (CSI2DC_IDSEW0R) Virtual Channel 1 Position  */
#define CSI2DC_IDSEW0R_VC_VC2                 (CSI2DC_IDSEW0R_VC_VC2_Val << CSI2DC_IDSEW0R_VC_Pos) /**< (CSI2DC_IDSEW0R) Virtual Channel 2 Position  */
#define CSI2DC_IDSEW0R_VC_VC3                 (CSI2DC_IDSEW0R_VC_VC3_Val << CSI2DC_IDSEW0R_VC_Pos) /**< (CSI2DC_IDSEW0R) Virtual Channel 3 Position  */
#define CSI2DC_IDSEW0R_Msk                    _U_(0x000000FF)                                      /**< (CSI2DC_IDSEW0R) Register Mask  */


/* -------- CSI2DC_IDSEW1R : (CSI2DC Offset: 0x04) ( R/ 32) IDS Entry Word 1 Register  -------- */
#define CSI2DC_IDSEW1R_RESETVALUE             _U_(0x00)                                            /**<  (CSI2DC_IDSEW1R) IDS Entry Word 1 Register   Reset Value */

#define CSI2DC_IDSEW1R_WC_Pos                 _U_(0)                                               /**< (CSI2DC_IDSEW1R) Word Count for Image Data Packet Captured Position */
#define CSI2DC_IDSEW1R_WC_Msk                 (_U_(0xFFFF) << CSI2DC_IDSEW1R_WC_Pos)               /**< (CSI2DC_IDSEW1R) Word Count for Image Data Packet Captured Mask */
#define CSI2DC_IDSEW1R_WC(value)              (CSI2DC_IDSEW1R_WC_Msk & ((value) << CSI2DC_IDSEW1R_WC_Pos))
#define CSI2DC_IDSEW1R_RC_Pos                 _U_(16)                                              /**< (CSI2DC_IDSEW1R) Row Count for Image Data Packet Captured Position */
#define CSI2DC_IDSEW1R_RC_Msk                 (_U_(0xFFFF) << CSI2DC_IDSEW1R_RC_Pos)               /**< (CSI2DC_IDSEW1R) Row Count for Image Data Packet Captured Mask */
#define CSI2DC_IDSEW1R_RC(value)              (CSI2DC_IDSEW1R_RC_Msk & ((value) << CSI2DC_IDSEW1R_RC_Pos))
#define CSI2DC_IDSEW1R_Msk                    _U_(0xFFFFFFFF)                                      /**< (CSI2DC_IDSEW1R) Register Mask  */


/* -------- CSI2DC_GCFGR : (CSI2DC Offset: 0x00) (R/W 32) Global Configuration Register -------- */
#define CSI2DC_GCFGR_RESETVALUE               _U_(0x00)                                            /**<  (CSI2DC_GCFGR) Global Configuration Register  Reset Value */

#define CSI2DC_GCFGR_MIPIFRN_Pos              _U_(0)                                               /**< (CSI2DC_GCFGR) MIPI Interface Free Running Clock Position */
#define CSI2DC_GCFGR_MIPIFRN_Msk              (_U_(0x1) << CSI2DC_GCFGR_MIPIFRN_Pos)               /**< (CSI2DC_GCFGR) MIPI Interface Free Running Clock Mask */
#define CSI2DC_GCFGR_MIPIFRN(value)           (CSI2DC_GCFGR_MIPIFRN_Msk & ((value) << CSI2DC_GCFGR_MIPIFRN_Pos))
#define   CSI2DC_GCFGR_MIPIFRN_0_Val          _U_(0x0)                                             /**< (CSI2DC_GCFGR) The sensor MIPI clock is free-running.  */
#define   CSI2DC_GCFGR_MIPIFRN_1_Val          _U_(0x1)                                             /**< (CSI2DC_GCFGR) The sensor MIPI clock is gated.  */
#define CSI2DC_GCFGR_MIPIFRN_0                (CSI2DC_GCFGR_MIPIFRN_0_Val << CSI2DC_GCFGR_MIPIFRN_Pos) /**< (CSI2DC_GCFGR) The sensor MIPI clock is free-running. Position  */
#define CSI2DC_GCFGR_MIPIFRN_1                (CSI2DC_GCFGR_MIPIFRN_1_Val << CSI2DC_GCFGR_MIPIFRN_Pos) /**< (CSI2DC_GCFGR) The sensor MIPI clock is gated. Position  */
#define CSI2DC_GCFGR_GPIOSEL_Pos              _U_(1)                                               /**< (CSI2DC_GCFGR) GPIO Parallel Interface Selection Position */
#define CSI2DC_GCFGR_GPIOSEL_Msk              (_U_(0x1) << CSI2DC_GCFGR_GPIOSEL_Pos)               /**< (CSI2DC_GCFGR) GPIO Parallel Interface Selection Mask */
#define CSI2DC_GCFGR_GPIOSEL(value)           (CSI2DC_GCFGR_GPIOSEL_Msk & ((value) << CSI2DC_GCFGR_GPIOSEL_Pos))
#define   CSI2DC_GCFGR_GPIOSEL_0_Val          _U_(0x0)                                             /**< (CSI2DC_GCFGR) The MIPI CSI-2 serial interface is activated.  */
#define   CSI2DC_GCFGR_GPIOSEL_1_Val          _U_(0x1)                                             /**< (CSI2DC_GCFGR) The GPIO parallel interface is selected and internally routed to the Image Signal Processor.  */
#define CSI2DC_GCFGR_GPIOSEL_0                (CSI2DC_GCFGR_GPIOSEL_0_Val << CSI2DC_GCFGR_GPIOSEL_Pos) /**< (CSI2DC_GCFGR) The MIPI CSI-2 serial interface is activated. Position  */
#define CSI2DC_GCFGR_GPIOSEL_1                (CSI2DC_GCFGR_GPIOSEL_1_Val << CSI2DC_GCFGR_GPIOSEL_Pos) /**< (CSI2DC_GCFGR) The GPIO parallel interface is selected and internally routed to the Image Signal Processor. Position  */
#define CSI2DC_GCFGR_ULC_Pos                  _U_(2)                                               /**< (CSI2DC_GCFGR) Use Optional Line Packet Delimiter Position */
#define CSI2DC_GCFGR_ULC_Msk                  (_U_(0x1) << CSI2DC_GCFGR_ULC_Pos)                   /**< (CSI2DC_GCFGR) Use Optional Line Packet Delimiter Mask */
#define CSI2DC_GCFGR_ULC(value)               (CSI2DC_GCFGR_ULC_Msk & ((value) << CSI2DC_GCFGR_ULC_Pos))
#define   CSI2DC_GCFGR_ULC_0_Val              _U_(0x0)                                             /**< (CSI2DC_GCFGR) Line packets are not used to define the line boundary.  */
#define   CSI2DC_GCFGR_ULC_1_Val              _U_(0x1)                                             /**< (CSI2DC_GCFGR) Line Start and Line End optional packets are used to activate and deactivate the line.  */
#define CSI2DC_GCFGR_ULC_0                    (CSI2DC_GCFGR_ULC_0_Val << CSI2DC_GCFGR_ULC_Pos)     /**< (CSI2DC_GCFGR) Line packets are not used to define the line boundary. Position  */
#define CSI2DC_GCFGR_ULC_1                    (CSI2DC_GCFGR_ULC_1_Val << CSI2DC_GCFGR_ULC_Pos)     /**< (CSI2DC_GCFGR) Line Start and Line End optional packets are used to activate and deactivate the line. Position  */
#define CSI2DC_GCFGR_SECDEDN_Pos              _U_(3)                                               /**< (CSI2DC_GCFGR) Single Error Correction Double Error Detection Enable Position */
#define CSI2DC_GCFGR_SECDEDN_Msk              (_U_(0x1) << CSI2DC_GCFGR_SECDEDN_Pos)               /**< (CSI2DC_GCFGR) Single Error Correction Double Error Detection Enable Mask */
#define CSI2DC_GCFGR_SECDEDN(value)           (CSI2DC_GCFGR_SECDEDN_Msk & ((value) << CSI2DC_GCFGR_SECDEDN_Pos))
#define   CSI2DC_GCFGR_SECDEDN_0_Val          _U_(0x0)                                             /**< (CSI2DC_GCFGR) Packet header error correction is activated.  */
#define   CSI2DC_GCFGR_SECDEDN_1_Val          _U_(0x1)                                             /**< (CSI2DC_GCFGR) Packet header error correction is disabled.  */
#define CSI2DC_GCFGR_SECDEDN_0                (CSI2DC_GCFGR_SECDEDN_0_Val << CSI2DC_GCFGR_SECDEDN_Pos) /**< (CSI2DC_GCFGR) Packet header error correction is activated. Position  */
#define CSI2DC_GCFGR_SECDEDN_1                (CSI2DC_GCFGR_SECDEDN_1_Val << CSI2DC_GCFGR_SECDEDN_Pos) /**< (CSI2DC_GCFGR) Packet header error correction is disabled. Position  */
#define CSI2DC_GCFGR_HLC_Pos                  _U_(4)                                               /**< (CSI2DC_GCFGR) CSI2DC Output Waveform Inter-line Minimum Delay Position */
#define CSI2DC_GCFGR_HLC_Msk                  (_U_(0xF) << CSI2DC_GCFGR_HLC_Pos)                   /**< (CSI2DC_GCFGR) CSI2DC Output Waveform Inter-line Minimum Delay Mask */
#define CSI2DC_GCFGR_HLC(value)               (CSI2DC_GCFGR_HLC_Msk & ((value) << CSI2DC_GCFGR_HLC_Pos))
#define CSI2DC_GCFGR_Msk                      _U_(0x000000FF)                                      /**< (CSI2DC_GCFGR) Register Mask  */


/* -------- CSI2DC_GCTLR : (CSI2DC Offset: 0x04) ( /W 32) Global Control Register -------- */
#define CSI2DC_GCTLR_SWRST_Pos                _U_(0)                                               /**< (CSI2DC_GCTLR) Software Reset Position */
#define CSI2DC_GCTLR_SWRST_Msk                (_U_(0x1) << CSI2DC_GCTLR_SWRST_Pos)                 /**< (CSI2DC_GCTLR) Software Reset Mask */
#define CSI2DC_GCTLR_SWRST(value)             (CSI2DC_GCTLR_SWRST_Msk & ((value) << CSI2DC_GCTLR_SWRST_Pos))
#define   CSI2DC_GCTLR_SWRST_0_Val            _U_(0x0)                                             /**< (CSI2DC_GCTLR) No effect.  */
#define   CSI2DC_GCTLR_SWRST_1_Val            _U_(0x1)                                             /**< (CSI2DC_GCTLR) Starts a software reset operation.  */
#define CSI2DC_GCTLR_SWRST_0                  (CSI2DC_GCTLR_SWRST_0_Val << CSI2DC_GCTLR_SWRST_Pos) /**< (CSI2DC_GCTLR) No effect. Position  */
#define CSI2DC_GCTLR_SWRST_1                  (CSI2DC_GCTLR_SWRST_1_Val << CSI2DC_GCTLR_SWRST_Pos) /**< (CSI2DC_GCTLR) Starts a software reset operation. Position  */
#define CSI2DC_GCTLR_Msk                      _U_(0x00000001)                                      /**< (CSI2DC_GCTLR) Register Mask  */


/* -------- CSI2DC_GSR : (CSI2DC Offset: 0x08) ( R/ 32) Global Status Register -------- */
#define CSI2DC_GSR_RESETVALUE                 _U_(0x00)                                            /**<  (CSI2DC_GSR) Global Status Register  Reset Value */

#define CSI2DC_GSR_RSTIP_Pos                  _U_(0)                                               /**< (CSI2DC_GSR) Reset in Progress Position */
#define CSI2DC_GSR_RSTIP_Msk                  (_U_(0x1) << CSI2DC_GSR_RSTIP_Pos)                   /**< (CSI2DC_GSR) Reset in Progress Mask */
#define CSI2DC_GSR_RSTIP(value)               (CSI2DC_GSR_RSTIP_Msk & ((value) << CSI2DC_GSR_RSTIP_Pos))
#define   CSI2DC_GSR_RSTIP_0_Val              _U_(0x0)                                             /**< (CSI2DC_GSR) No reset in progress for the synchronous domain.  */
#define   CSI2DC_GSR_RSTIP_1_Val              _U_(0x1)                                             /**< (CSI2DC_GSR) Synchronous domain is being reset.  */
#define CSI2DC_GSR_RSTIP_0                    (CSI2DC_GSR_RSTIP_0_Val << CSI2DC_GSR_RSTIP_Pos)     /**< (CSI2DC_GSR) No reset in progress for the synchronous domain. Position  */
#define CSI2DC_GSR_RSTIP_1                    (CSI2DC_GSR_RSTIP_1_Val << CSI2DC_GSR_RSTIP_Pos)     /**< (CSI2DC_GSR) Synchronous domain is being reset. Position  */
#define CSI2DC_GSR_ARSTIP_Pos                 _U_(1)                                               /**< (CSI2DC_GSR) Asynchronous Reset in Progress Position */
#define CSI2DC_GSR_ARSTIP_Msk                 (_U_(0x1) << CSI2DC_GSR_ARSTIP_Pos)                  /**< (CSI2DC_GSR) Asynchronous Reset in Progress Mask */
#define CSI2DC_GSR_ARSTIP(value)              (CSI2DC_GSR_ARSTIP_Msk & ((value) << CSI2DC_GSR_ARSTIP_Pos))
#define   CSI2DC_GSR_ARSTIP_0_Val             _U_(0x0)                                             /**< (CSI2DC_GSR) No reset in progress for the asynchronous domain.  */
#define   CSI2DC_GSR_ARSTIP_1_Val             _U_(0x1)                                             /**< (CSI2DC_GSR) Asynchronous domain is being reset.  */
#define CSI2DC_GSR_ARSTIP_0                   (CSI2DC_GSR_ARSTIP_0_Val << CSI2DC_GSR_ARSTIP_Pos)   /**< (CSI2DC_GSR) No reset in progress for the asynchronous domain. Position  */
#define CSI2DC_GSR_ARSTIP_1                   (CSI2DC_GSR_ARSTIP_1_Val << CSI2DC_GSR_ARSTIP_Pos)   /**< (CSI2DC_GSR) Asynchronous domain is being reset. Position  */
#define CSI2DC_GSR_Msk                        _U_(0x00000003)                                      /**< (CSI2DC_GSR) Register Mask  */


/* -------- CSI2DC_GIER : (CSI2DC Offset: 0x0C) ( /W 32) Global Interrupt Enable Register -------- */
#define CSI2DC_GIER_SSP_Pos                   _U_(0)                                               /**< (CSI2DC_GIER) Synchronization Short Packet Interrupt Enable Position */
#define CSI2DC_GIER_SSP_Msk                   (_U_(0x1) << CSI2DC_GIER_SSP_Pos)                    /**< (CSI2DC_GIER) Synchronization Short Packet Interrupt Enable Mask */
#define CSI2DC_GIER_SSP(value)                (CSI2DC_GIER_SSP_Msk & ((value) << CSI2DC_GIER_SSP_Pos))
#define CSI2DC_GIER_GSP_Pos                   _U_(1)                                               /**< (CSI2DC_GIER) Generic Short Packet Interrupt Enable Position */
#define CSI2DC_GIER_GSP_Msk                   (_U_(0x1) << CSI2DC_GIER_GSP_Pos)                    /**< (CSI2DC_GIER) Generic Short Packet Interrupt Enable Mask */
#define CSI2DC_GIER_GSP(value)                (CSI2DC_GIER_GSP_Msk & ((value) << CSI2DC_GIER_GSP_Pos))
#define CSI2DC_GIER_GLP_Pos                   _U_(2)                                               /**< (CSI2DC_GIER) Generic Long Packet Interrupt Enable Position */
#define CSI2DC_GIER_GLP_Msk                   (_U_(0x1) << CSI2DC_GIER_GLP_Pos)                    /**< (CSI2DC_GIER) Generic Long Packet Interrupt Enable Mask */
#define CSI2DC_GIER_GLP(value)                (CSI2DC_GIER_GLP_Msk & ((value) << CSI2DC_GIER_GLP_Pos))
#define CSI2DC_GIER_IDS_Pos                   _U_(3)                                               /**< (CSI2DC_GIER) Image Data Packet Snoop Controller Interrupt Enable Position */
#define CSI2DC_GIER_IDS_Msk                   (_U_(0x1) << CSI2DC_GIER_IDS_Pos)                    /**< (CSI2DC_GIER) Image Data Packet Snoop Controller Interrupt Enable Mask */
#define CSI2DC_GIER_IDS(value)                (CSI2DC_GIER_IDS_Msk & ((value) << CSI2DC_GIER_IDS_Pos))
#define CSI2DC_GIER_VP_Pos                    _U_(4)                                               /**< (CSI2DC_GIER) Video Pipe Interrupt Enable Position */
#define CSI2DC_GIER_VP_Msk                    (_U_(0x1) << CSI2DC_GIER_VP_Pos)                     /**< (CSI2DC_GIER) Video Pipe Interrupt Enable Mask */
#define CSI2DC_GIER_VP(value)                 (CSI2DC_GIER_VP_Msk & ((value) << CSI2DC_GIER_VP_Pos))
#define CSI2DC_GIER_DP_Pos                    _U_(5)                                               /**< (CSI2DC_GIER) Data Pipe Interrupt Enable Position */
#define CSI2DC_GIER_DP_Msk                    (_U_(0x1) << CSI2DC_GIER_DP_Pos)                     /**< (CSI2DC_GIER) Data Pipe Interrupt Enable Mask */
#define CSI2DC_GIER_DP(value)                 (CSI2DC_GIER_DP_Msk & ((value) << CSI2DC_GIER_DP_Pos))
#define CSI2DC_GIER_SEC_Pos                   _U_(6)                                               /**< (CSI2DC_GIER) Packet Header Single Bit Error Corrected Enable Position */
#define CSI2DC_GIER_SEC_Msk                   (_U_(0x1) << CSI2DC_GIER_SEC_Pos)                    /**< (CSI2DC_GIER) Packet Header Single Bit Error Corrected Enable Mask */
#define CSI2DC_GIER_SEC(value)                (CSI2DC_GIER_SEC_Msk & ((value) << CSI2DC_GIER_SEC_Pos))
#define CSI2DC_GIER_DED_Pos                   _U_(7)                                               /**< (CSI2DC_GIER) Packet Header Double Bit Error Detected Enable Position */
#define CSI2DC_GIER_DED_Msk                   (_U_(0x1) << CSI2DC_GIER_DED_Pos)                    /**< (CSI2DC_GIER) Packet Header Double Bit Error Detected Enable Mask */
#define CSI2DC_GIER_DED(value)                (CSI2DC_GIER_DED_Msk & ((value) << CSI2DC_GIER_DED_Pos))
#define CSI2DC_GIER_Msk                       _U_(0x000000FF)                                      /**< (CSI2DC_GIER) Register Mask  */


/* -------- CSI2DC_GIDR : (CSI2DC Offset: 0x10) ( /W 32) Global Interrupt Disable Register -------- */
#define CSI2DC_GIDR_SSP_Pos                   _U_(0)                                               /**< (CSI2DC_GIDR) Synchronization Short Packet Interrupt Disable Position */
#define CSI2DC_GIDR_SSP_Msk                   (_U_(0x1) << CSI2DC_GIDR_SSP_Pos)                    /**< (CSI2DC_GIDR) Synchronization Short Packet Interrupt Disable Mask */
#define CSI2DC_GIDR_SSP(value)                (CSI2DC_GIDR_SSP_Msk & ((value) << CSI2DC_GIDR_SSP_Pos))
#define CSI2DC_GIDR_GSP_Pos                   _U_(1)                                               /**< (CSI2DC_GIDR) Generic Short Packet Interrupt Disable Position */
#define CSI2DC_GIDR_GSP_Msk                   (_U_(0x1) << CSI2DC_GIDR_GSP_Pos)                    /**< (CSI2DC_GIDR) Generic Short Packet Interrupt Disable Mask */
#define CSI2DC_GIDR_GSP(value)                (CSI2DC_GIDR_GSP_Msk & ((value) << CSI2DC_GIDR_GSP_Pos))
#define CSI2DC_GIDR_GLP_Pos                   _U_(2)                                               /**< (CSI2DC_GIDR) Generic Long Packet Interrupt Disable Position */
#define CSI2DC_GIDR_GLP_Msk                   (_U_(0x1) << CSI2DC_GIDR_GLP_Pos)                    /**< (CSI2DC_GIDR) Generic Long Packet Interrupt Disable Mask */
#define CSI2DC_GIDR_GLP(value)                (CSI2DC_GIDR_GLP_Msk & ((value) << CSI2DC_GIDR_GLP_Pos))
#define CSI2DC_GIDR_IDS_Pos                   _U_(3)                                               /**< (CSI2DC_GIDR) Image Data Packet Snoop Controller Interrupt Disable Position */
#define CSI2DC_GIDR_IDS_Msk                   (_U_(0x1) << CSI2DC_GIDR_IDS_Pos)                    /**< (CSI2DC_GIDR) Image Data Packet Snoop Controller Interrupt Disable Mask */
#define CSI2DC_GIDR_IDS(value)                (CSI2DC_GIDR_IDS_Msk & ((value) << CSI2DC_GIDR_IDS_Pos))
#define CSI2DC_GIDR_VP_Pos                    _U_(4)                                               /**< (CSI2DC_GIDR) Video Pipe Interrupt Disable Position */
#define CSI2DC_GIDR_VP_Msk                    (_U_(0x1) << CSI2DC_GIDR_VP_Pos)                     /**< (CSI2DC_GIDR) Video Pipe Interrupt Disable Mask */
#define CSI2DC_GIDR_VP(value)                 (CSI2DC_GIDR_VP_Msk & ((value) << CSI2DC_GIDR_VP_Pos))
#define CSI2DC_GIDR_DP_Pos                    _U_(5)                                               /**< (CSI2DC_GIDR) Data Pipe Interrupt Disable Position */
#define CSI2DC_GIDR_DP_Msk                    (_U_(0x1) << CSI2DC_GIDR_DP_Pos)                     /**< (CSI2DC_GIDR) Data Pipe Interrupt Disable Mask */
#define CSI2DC_GIDR_DP(value)                 (CSI2DC_GIDR_DP_Msk & ((value) << CSI2DC_GIDR_DP_Pos))
#define CSI2DC_GIDR_SEC_Pos                   _U_(6)                                               /**< (CSI2DC_GIDR) Single Bit Error Corrected Interrupt Disable Position */
#define CSI2DC_GIDR_SEC_Msk                   (_U_(0x1) << CSI2DC_GIDR_SEC_Pos)                    /**< (CSI2DC_GIDR) Single Bit Error Corrected Interrupt Disable Mask */
#define CSI2DC_GIDR_SEC(value)                (CSI2DC_GIDR_SEC_Msk & ((value) << CSI2DC_GIDR_SEC_Pos))
#define CSI2DC_GIDR_DED_Pos                   _U_(7)                                               /**< (CSI2DC_GIDR) Double Bit Error Detected Interrupt Disable Position */
#define CSI2DC_GIDR_DED_Msk                   (_U_(0x1) << CSI2DC_GIDR_DED_Pos)                    /**< (CSI2DC_GIDR) Double Bit Error Detected Interrupt Disable Mask */
#define CSI2DC_GIDR_DED(value)                (CSI2DC_GIDR_DED_Msk & ((value) << CSI2DC_GIDR_DED_Pos))
#define CSI2DC_GIDR_Msk                       _U_(0x000000FF)                                      /**< (CSI2DC_GIDR) Register Mask  */


/* -------- CSI2DC_GIMR : (CSI2DC Offset: 0x14) ( R/ 32) Global Interrupt Mask Register -------- */
#define CSI2DC_GIMR_RESETVALUE                _U_(0x00)                                            /**<  (CSI2DC_GIMR) Global Interrupt Mask Register  Reset Value */

#define CSI2DC_GIMR_SSP_Pos                   _U_(0)                                               /**< (CSI2DC_GIMR) Synchronization Short Packet Interrupt Mask Position */
#define CSI2DC_GIMR_SSP_Msk                   (_U_(0x1) << CSI2DC_GIMR_SSP_Pos)                    /**< (CSI2DC_GIMR) Synchronization Short Packet Interrupt Mask Mask */
#define CSI2DC_GIMR_SSP(value)                (CSI2DC_GIMR_SSP_Msk & ((value) << CSI2DC_GIMR_SSP_Pos))
#define CSI2DC_GIMR_GSP_Pos                   _U_(1)                                               /**< (CSI2DC_GIMR) Generic Short Packet Interrupt Mask Position */
#define CSI2DC_GIMR_GSP_Msk                   (_U_(0x1) << CSI2DC_GIMR_GSP_Pos)                    /**< (CSI2DC_GIMR) Generic Short Packet Interrupt Mask Mask */
#define CSI2DC_GIMR_GSP(value)                (CSI2DC_GIMR_GSP_Msk & ((value) << CSI2DC_GIMR_GSP_Pos))
#define CSI2DC_GIMR_GLP_Pos                   _U_(2)                                               /**< (CSI2DC_GIMR) Generic Long Packet Interrupt Mask Position */
#define CSI2DC_GIMR_GLP_Msk                   (_U_(0x1) << CSI2DC_GIMR_GLP_Pos)                    /**< (CSI2DC_GIMR) Generic Long Packet Interrupt Mask Mask */
#define CSI2DC_GIMR_GLP(value)                (CSI2DC_GIMR_GLP_Msk & ((value) << CSI2DC_GIMR_GLP_Pos))
#define CSI2DC_GIMR_IDS_Pos                   _U_(3)                                               /**< (CSI2DC_GIMR) Image Data Packet Snoop Controller Interrupt Mask Position */
#define CSI2DC_GIMR_IDS_Msk                   (_U_(0x1) << CSI2DC_GIMR_IDS_Pos)                    /**< (CSI2DC_GIMR) Image Data Packet Snoop Controller Interrupt Mask Mask */
#define CSI2DC_GIMR_IDS(value)                (CSI2DC_GIMR_IDS_Msk & ((value) << CSI2DC_GIMR_IDS_Pos))
#define CSI2DC_GIMR_VP_Pos                    _U_(4)                                               /**< (CSI2DC_GIMR) Video Pipe Interrupt Disable Interrupt Mask Position */
#define CSI2DC_GIMR_VP_Msk                    (_U_(0x1) << CSI2DC_GIMR_VP_Pos)                     /**< (CSI2DC_GIMR) Video Pipe Interrupt Disable Interrupt Mask Mask */
#define CSI2DC_GIMR_VP(value)                 (CSI2DC_GIMR_VP_Msk & ((value) << CSI2DC_GIMR_VP_Pos))
#define CSI2DC_GIMR_DP_Pos                    _U_(5)                                               /**< (CSI2DC_GIMR) Data Pipe Interrupt Disable Interrupt Mask Position */
#define CSI2DC_GIMR_DP_Msk                    (_U_(0x1) << CSI2DC_GIMR_DP_Pos)                     /**< (CSI2DC_GIMR) Data Pipe Interrupt Disable Interrupt Mask Mask */
#define CSI2DC_GIMR_DP(value)                 (CSI2DC_GIMR_DP_Msk & ((value) << CSI2DC_GIMR_DP_Pos))
#define CSI2DC_GIMR_SEC_Pos                   _U_(6)                                               /**< (CSI2DC_GIMR) Single Error Corrected Interrupt Disable Interrupt Mask Position */
#define CSI2DC_GIMR_SEC_Msk                   (_U_(0x1) << CSI2DC_GIMR_SEC_Pos)                    /**< (CSI2DC_GIMR) Single Error Corrected Interrupt Disable Interrupt Mask Mask */
#define CSI2DC_GIMR_SEC(value)                (CSI2DC_GIMR_SEC_Msk & ((value) << CSI2DC_GIMR_SEC_Pos))
#define CSI2DC_GIMR_DED_Pos                   _U_(7)                                               /**< (CSI2DC_GIMR) Double Error Detected Interrupt Disable Interrupt Mask Position */
#define CSI2DC_GIMR_DED_Msk                   (_U_(0x1) << CSI2DC_GIMR_DED_Pos)                    /**< (CSI2DC_GIMR) Double Error Detected Interrupt Disable Interrupt Mask Mask */
#define CSI2DC_GIMR_DED(value)                (CSI2DC_GIMR_DED_Msk & ((value) << CSI2DC_GIMR_DED_Pos))
#define CSI2DC_GIMR_Msk                       _U_(0x000000FF)                                      /**< (CSI2DC_GIMR) Register Mask  */


/* -------- CSI2DC_GISR : (CSI2DC Offset: 0x18) ( R/ 32) Global Interrupt Status Register -------- */
#define CSI2DC_GISR_RESETVALUE                _U_(0x00)                                            /**<  (CSI2DC_GISR) Global Interrupt Status Register  Reset Value */

#define CSI2DC_GISR_SSP_Pos                   _U_(0)                                               /**< (CSI2DC_GISR) Synchronization Short Packet Interrupt Status Position */
#define CSI2DC_GISR_SSP_Msk                   (_U_(0x1) << CSI2DC_GISR_SSP_Pos)                    /**< (CSI2DC_GISR) Synchronization Short Packet Interrupt Status Mask */
#define CSI2DC_GISR_SSP(value)                (CSI2DC_GISR_SSP_Msk & ((value) << CSI2DC_GISR_SSP_Pos))
#define   CSI2DC_GISR_SSP_0_Val               _U_(0x0)                                             /**< (CSI2DC_GISR) Either the interrupt source is masked at the SSP level or no interrupt is pending for SSP.  */
#define   CSI2DC_GISR_SSP_1_Val               _U_(0x1)                                             /**< (CSI2DC_GISR) A Synchronization Short Packet interrupt is pending.  */
#define CSI2DC_GISR_SSP_0                     (CSI2DC_GISR_SSP_0_Val << CSI2DC_GISR_SSP_Pos)       /**< (CSI2DC_GISR) Either the interrupt source is masked at the SSP level or no interrupt is pending for SSP. Position  */
#define CSI2DC_GISR_SSP_1                     (CSI2DC_GISR_SSP_1_Val << CSI2DC_GISR_SSP_Pos)       /**< (CSI2DC_GISR) A Synchronization Short Packet interrupt is pending. Position  */
#define CSI2DC_GISR_GSP_Pos                   _U_(1)                                               /**< (CSI2DC_GISR) Generic Short Packet Interrupt Status Position */
#define CSI2DC_GISR_GSP_Msk                   (_U_(0x1) << CSI2DC_GISR_GSP_Pos)                    /**< (CSI2DC_GISR) Generic Short Packet Interrupt Status Mask */
#define CSI2DC_GISR_GSP(value)                (CSI2DC_GISR_GSP_Msk & ((value) << CSI2DC_GISR_GSP_Pos))
#define   CSI2DC_GISR_GSP_0_Val               _U_(0x0)                                             /**< (CSI2DC_GISR) Either the interrupt source is masked at the GSP level or no interrupt is pending for GSP.  */
#define   CSI2DC_GISR_GSP_1_Val               _U_(0x1)                                             /**< (CSI2DC_GISR) A Generic Short Packet interrupt is pending.  */
#define CSI2DC_GISR_GSP_0                     (CSI2DC_GISR_GSP_0_Val << CSI2DC_GISR_GSP_Pos)       /**< (CSI2DC_GISR) Either the interrupt source is masked at the GSP level or no interrupt is pending for GSP. Position  */
#define CSI2DC_GISR_GSP_1                     (CSI2DC_GISR_GSP_1_Val << CSI2DC_GISR_GSP_Pos)       /**< (CSI2DC_GISR) A Generic Short Packet interrupt is pending. Position  */
#define CSI2DC_GISR_GLP_Pos                   _U_(2)                                               /**< (CSI2DC_GISR) Generic Long Packet Interrupt Status Position */
#define CSI2DC_GISR_GLP_Msk                   (_U_(0x1) << CSI2DC_GISR_GLP_Pos)                    /**< (CSI2DC_GISR) Generic Long Packet Interrupt Status Mask */
#define CSI2DC_GISR_GLP(value)                (CSI2DC_GISR_GLP_Msk & ((value) << CSI2DC_GISR_GLP_Pos))
#define   CSI2DC_GISR_GLP_0_Val               _U_(0x0)                                             /**< (CSI2DC_GISR) Either the interrupt source is masked at the GLP level or no interrupt is pending for GLP.  */
#define   CSI2DC_GISR_GLP_1_Val               _U_(0x1)                                             /**< (CSI2DC_GISR) A Generic Long Packet interrupt is pending.  */
#define CSI2DC_GISR_GLP_0                     (CSI2DC_GISR_GLP_0_Val << CSI2DC_GISR_GLP_Pos)       /**< (CSI2DC_GISR) Either the interrupt source is masked at the GLP level or no interrupt is pending for GLP. Position  */
#define CSI2DC_GISR_GLP_1                     (CSI2DC_GISR_GLP_1_Val << CSI2DC_GISR_GLP_Pos)       /**< (CSI2DC_GISR) A Generic Long Packet interrupt is pending. Position  */
#define CSI2DC_GISR_IDS_Pos                   _U_(3)                                               /**< (CSI2DC_GISR) Image Data Packet Snoop Controller Interrupt Status Position */
#define CSI2DC_GISR_IDS_Msk                   (_U_(0x1) << CSI2DC_GISR_IDS_Pos)                    /**< (CSI2DC_GISR) Image Data Packet Snoop Controller Interrupt Status Mask */
#define CSI2DC_GISR_IDS(value)                (CSI2DC_GISR_IDS_Msk & ((value) << CSI2DC_GISR_IDS_Pos))
#define   CSI2DC_GISR_IDS_0_Val               _U_(0x0)                                             /**< (CSI2DC_GISR) Either the interrupt source is masked at the IDS level or no interrupt is pending for IDS.  */
#define   CSI2DC_GISR_IDS_1_Val               _U_(0x1)                                             /**< (CSI2DC_GISR) A new Image Data Packet interrupt is pending.  */
#define CSI2DC_GISR_IDS_0                     (CSI2DC_GISR_IDS_0_Val << CSI2DC_GISR_IDS_Pos)       /**< (CSI2DC_GISR) Either the interrupt source is masked at the IDS level or no interrupt is pending for IDS. Position  */
#define CSI2DC_GISR_IDS_1                     (CSI2DC_GISR_IDS_1_Val << CSI2DC_GISR_IDS_Pos)       /**< (CSI2DC_GISR) A new Image Data Packet interrupt is pending. Position  */
#define CSI2DC_GISR_VP_Pos                    _U_(4)                                               /**< (CSI2DC_GISR) Video Pipe Interrupt Status Position */
#define CSI2DC_GISR_VP_Msk                    (_U_(0x1) << CSI2DC_GISR_VP_Pos)                     /**< (CSI2DC_GISR) Video Pipe Interrupt Status Mask */
#define CSI2DC_GISR_VP(value)                 (CSI2DC_GISR_VP_Msk & ((value) << CSI2DC_GISR_VP_Pos))
#define   CSI2DC_GISR_VP_0_Val                _U_(0x0)                                             /**< (CSI2DC_GISR) Either the interrupt source is masked at the VP level or no interrupt is pending for VP.  */
#define   CSI2DC_GISR_VP_1_Val                _U_(0x1)                                             /**< (CSI2DC_GISR) A Video Pipe interrupt is pending.  */
#define CSI2DC_GISR_VP_0                      (CSI2DC_GISR_VP_0_Val << CSI2DC_GISR_VP_Pos)         /**< (CSI2DC_GISR) Either the interrupt source is masked at the VP level or no interrupt is pending for VP. Position  */
#define CSI2DC_GISR_VP_1                      (CSI2DC_GISR_VP_1_Val << CSI2DC_GISR_VP_Pos)         /**< (CSI2DC_GISR) A Video Pipe interrupt is pending. Position  */
#define CSI2DC_GISR_DP_Pos                    _U_(5)                                               /**< (CSI2DC_GISR) Data Pipe Interrupt Status Position */
#define CSI2DC_GISR_DP_Msk                    (_U_(0x1) << CSI2DC_GISR_DP_Pos)                     /**< (CSI2DC_GISR) Data Pipe Interrupt Status Mask */
#define CSI2DC_GISR_DP(value)                 (CSI2DC_GISR_DP_Msk & ((value) << CSI2DC_GISR_DP_Pos))
#define   CSI2DC_GISR_DP_0_Val                _U_(0x0)                                             /**< (CSI2DC_GISR) Either the interrupt source is masked at the DP level or no interrupt is pending for DP.  */
#define   CSI2DC_GISR_DP_1_Val                _U_(0x1)                                             /**< (CSI2DC_GISR) A Data Pipe interrupt is pending.  */
#define CSI2DC_GISR_DP_0                      (CSI2DC_GISR_DP_0_Val << CSI2DC_GISR_DP_Pos)         /**< (CSI2DC_GISR) Either the interrupt source is masked at the DP level or no interrupt is pending for DP. Position  */
#define CSI2DC_GISR_DP_1                      (CSI2DC_GISR_DP_1_Val << CSI2DC_GISR_DP_Pos)         /**< (CSI2DC_GISR) A Data Pipe interrupt is pending. Position  */
#define CSI2DC_GISR_SEC_Pos                   _U_(6)                                               /**< (CSI2DC_GISR) Single Bit Error Corrected Interrupt Status Position */
#define CSI2DC_GISR_SEC_Msk                   (_U_(0x1) << CSI2DC_GISR_SEC_Pos)                    /**< (CSI2DC_GISR) Single Bit Error Corrected Interrupt Status Mask */
#define CSI2DC_GISR_SEC(value)                (CSI2DC_GISR_SEC_Msk & ((value) << CSI2DC_GISR_SEC_Pos))
#define   CSI2DC_GISR_SEC_0_Val               _U_(0x0)                                             /**< (CSI2DC_GISR) No Single Bit Error Corrected interrupt is pending.  */
#define   CSI2DC_GISR_SEC_1_Val               _U_(0x1)                                             /**< (CSI2DC_GISR) A single bit error has been detected and corrected in the packet header. This bit is reset after the register read operation.  */
#define CSI2DC_GISR_SEC_0                     (CSI2DC_GISR_SEC_0_Val << CSI2DC_GISR_SEC_Pos)       /**< (CSI2DC_GISR) No Single Bit Error Corrected interrupt is pending. Position  */
#define CSI2DC_GISR_SEC_1                     (CSI2DC_GISR_SEC_1_Val << CSI2DC_GISR_SEC_Pos)       /**< (CSI2DC_GISR) A single bit error has been detected and corrected in the packet header. This bit is reset after the register read operation. Position  */
#define CSI2DC_GISR_DED_Pos                   _U_(7)                                               /**< (CSI2DC_GISR) Double Bit Error Detected Interrupt Status Position */
#define CSI2DC_GISR_DED_Msk                   (_U_(0x1) << CSI2DC_GISR_DED_Pos)                    /**< (CSI2DC_GISR) Double Bit Error Detected Interrupt Status Mask */
#define CSI2DC_GISR_DED(value)                (CSI2DC_GISR_DED_Msk & ((value) << CSI2DC_GISR_DED_Pos))
#define   CSI2DC_GISR_DED_0_Val               _U_(0x0)                                             /**< (CSI2DC_GISR) No double bit error detected is pending.  */
#define   CSI2DC_GISR_DED_1_Val               _U_(0x1)                                             /**< (CSI2DC_GISR) A double bit error has been detected in the packet header. This bit is reset after the register read operation.  */
#define CSI2DC_GISR_DED_0                     (CSI2DC_GISR_DED_0_Val << CSI2DC_GISR_DED_Pos)       /**< (CSI2DC_GISR) No double bit error detected is pending. Position  */
#define CSI2DC_GISR_DED_1                     (CSI2DC_GISR_DED_1_Val << CSI2DC_GISR_DED_Pos)       /**< (CSI2DC_GISR) A double bit error has been detected in the packet header. This bit is reset after the register read operation. Position  */
#define CSI2DC_GISR_Msk                       _U_(0x000000FF)                                      /**< (CSI2DC_GISR) Register Mask  */


/* -------- CSI2DC_SSPIER : (CSI2DC Offset: 0x1C) ( /W 32) SSP Interrupt Enable Register -------- */
#define CSI2DC_SSPIER_FS_Pos                  _U_(0)                                               /**< (CSI2DC_SSPIER) Frame Start Interrupt Enable Position */
#define CSI2DC_SSPIER_FS_Msk                  (_U_(0xF) << CSI2DC_SSPIER_FS_Pos)                   /**< (CSI2DC_SSPIER) Frame Start Interrupt Enable Mask */
#define CSI2DC_SSPIER_FS(value)               (CSI2DC_SSPIER_FS_Msk & ((value) << CSI2DC_SSPIER_FS_Pos))
#define   CSI2DC_SSPIER_FS_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIER) No effect.  */
#define   CSI2DC_SSPIER_FS_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIER) Setting a bit at position i in the FS field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Frame Start is detected.  */
#define CSI2DC_SSPIER_FS_0                    (CSI2DC_SSPIER_FS_0_Val << CSI2DC_SSPIER_FS_Pos)     /**< (CSI2DC_SSPIER) No effect. Position  */
#define CSI2DC_SSPIER_FS_1                    (CSI2DC_SSPIER_FS_1_Val << CSI2DC_SSPIER_FS_Pos)     /**< (CSI2DC_SSPIER) Setting a bit at position i in the FS field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Frame Start is detected. Position  */
#define CSI2DC_SSPIER_FE_Pos                  _U_(4)                                               /**< (CSI2DC_SSPIER) Frame End Interrupt Enable Position */
#define CSI2DC_SSPIER_FE_Msk                  (_U_(0xF) << CSI2DC_SSPIER_FE_Pos)                   /**< (CSI2DC_SSPIER) Frame End Interrupt Enable Mask */
#define CSI2DC_SSPIER_FE(value)               (CSI2DC_SSPIER_FE_Msk & ((value) << CSI2DC_SSPIER_FE_Pos))
#define   CSI2DC_SSPIER_FE_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIER) No effect.  */
#define   CSI2DC_SSPIER_FE_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIER) Setting a bit at position i in the FE field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Frame End is detected.  */
#define CSI2DC_SSPIER_FE_0                    (CSI2DC_SSPIER_FE_0_Val << CSI2DC_SSPIER_FE_Pos)     /**< (CSI2DC_SSPIER) No effect. Position  */
#define CSI2DC_SSPIER_FE_1                    (CSI2DC_SSPIER_FE_1_Val << CSI2DC_SSPIER_FE_Pos)     /**< (CSI2DC_SSPIER) Setting a bit at position i in the FE field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Frame End is detected. Position  */
#define CSI2DC_SSPIER_LS_Pos                  _U_(8)                                               /**< (CSI2DC_SSPIER) Line Start Interrupt Enable Position */
#define CSI2DC_SSPIER_LS_Msk                  (_U_(0xF) << CSI2DC_SSPIER_LS_Pos)                   /**< (CSI2DC_SSPIER) Line Start Interrupt Enable Mask */
#define CSI2DC_SSPIER_LS(value)               (CSI2DC_SSPIER_LS_Msk & ((value) << CSI2DC_SSPIER_LS_Pos))
#define   CSI2DC_SSPIER_LS_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIER) No effect.  */
#define   CSI2DC_SSPIER_LS_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIER) Setting a bit at position i in the LS field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Line Start is detected. Line Synchronization packets are optional.  */
#define CSI2DC_SSPIER_LS_0                    (CSI2DC_SSPIER_LS_0_Val << CSI2DC_SSPIER_LS_Pos)     /**< (CSI2DC_SSPIER) No effect. Position  */
#define CSI2DC_SSPIER_LS_1                    (CSI2DC_SSPIER_LS_1_Val << CSI2DC_SSPIER_LS_Pos)     /**< (CSI2DC_SSPIER) Setting a bit at position i in the LS field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Line Start is detected. Line Synchronization packets are optional. Position  */
#define CSI2DC_SSPIER_LE_Pos                  _U_(12)                                              /**< (CSI2DC_SSPIER) Line End Interrupt Enable Position */
#define CSI2DC_SSPIER_LE_Msk                  (_U_(0xF) << CSI2DC_SSPIER_LE_Pos)                   /**< (CSI2DC_SSPIER) Line End Interrupt Enable Mask */
#define CSI2DC_SSPIER_LE(value)               (CSI2DC_SSPIER_LE_Msk & ((value) << CSI2DC_SSPIER_LE_Pos))
#define   CSI2DC_SSPIER_LE_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIER) No effect.  */
#define   CSI2DC_SSPIER_LE_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIER) Setting a bit at position i in the LE field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Line End is detected. Line Synchronization packets are optional.  */
#define CSI2DC_SSPIER_LE_0                    (CSI2DC_SSPIER_LE_0_Val << CSI2DC_SSPIER_LE_Pos)     /**< (CSI2DC_SSPIER) No effect. Position  */
#define CSI2DC_SSPIER_LE_1                    (CSI2DC_SSPIER_LE_1_Val << CSI2DC_SSPIER_LE_Pos)     /**< (CSI2DC_SSPIER) Setting a bit at position i in the LE field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Line End is detected. Line Synchronization packets are optional. Position  */
#define CSI2DC_SSPIER_RE_Pos                  _U_(16)                                              /**< (CSI2DC_SSPIER) Reserved Short Packet Interrupt Enable Position */
#define CSI2DC_SSPIER_RE_Msk                  (_U_(0xF) << CSI2DC_SSPIER_RE_Pos)                   /**< (CSI2DC_SSPIER) Reserved Short Packet Interrupt Enable Mask */
#define CSI2DC_SSPIER_RE(value)               (CSI2DC_SSPIER_RE_Msk & ((value) << CSI2DC_SSPIER_RE_Pos))
#define   CSI2DC_SSPIER_RE_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIER) No effect.  */
#define   CSI2DC_SSPIER_RE_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIER) Setting a bit at position i in the RE field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Reserved Short Packet is detected.  */
#define CSI2DC_SSPIER_RE_0                    (CSI2DC_SSPIER_RE_0_Val << CSI2DC_SSPIER_RE_Pos)     /**< (CSI2DC_SSPIER) No effect. Position  */
#define CSI2DC_SSPIER_RE_1                    (CSI2DC_SSPIER_RE_1_Val << CSI2DC_SSPIER_RE_Pos)     /**< (CSI2DC_SSPIER) Setting a bit at position i in the RE field will set the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Reserved Short Packet is detected. Position  */
#define CSI2DC_SSPIER_Msk                     _U_(0x000FFFFF)                                      /**< (CSI2DC_SSPIER) Register Mask  */


/* -------- CSI2DC_SSPIDR : (CSI2DC Offset: 0x20) ( /W 32) SSP Interrupt Disable Register -------- */
#define CSI2DC_SSPIDR_FS_Pos                  _U_(0)                                               /**< (CSI2DC_SSPIDR) Frame Start Interrupt Disable Position */
#define CSI2DC_SSPIDR_FS_Msk                  (_U_(0xF) << CSI2DC_SSPIDR_FS_Pos)                   /**< (CSI2DC_SSPIDR) Frame Start Interrupt Disable Mask */
#define CSI2DC_SSPIDR_FS(value)               (CSI2DC_SSPIDR_FS_Msk & ((value) << CSI2DC_SSPIDR_FS_Pos))
#define CSI2DC_SSPIDR_FE_Pos                  _U_(4)                                               /**< (CSI2DC_SSPIDR) Frame End Interrupt Disable Position */
#define CSI2DC_SSPIDR_FE_Msk                  (_U_(0xF) << CSI2DC_SSPIDR_FE_Pos)                   /**< (CSI2DC_SSPIDR) Frame End Interrupt Disable Mask */
#define CSI2DC_SSPIDR_FE(value)               (CSI2DC_SSPIDR_FE_Msk & ((value) << CSI2DC_SSPIDR_FE_Pos))
#define CSI2DC_SSPIDR_LS_Pos                  _U_(8)                                               /**< (CSI2DC_SSPIDR) Line Start Interrupt Disable Position */
#define CSI2DC_SSPIDR_LS_Msk                  (_U_(0xF) << CSI2DC_SSPIDR_LS_Pos)                   /**< (CSI2DC_SSPIDR) Line Start Interrupt Disable Mask */
#define CSI2DC_SSPIDR_LS(value)               (CSI2DC_SSPIDR_LS_Msk & ((value) << CSI2DC_SSPIDR_LS_Pos))
#define CSI2DC_SSPIDR_LE_Pos                  _U_(12)                                              /**< (CSI2DC_SSPIDR) Line End Interrupt Disable Position */
#define CSI2DC_SSPIDR_LE_Msk                  (_U_(0xF) << CSI2DC_SSPIDR_LE_Pos)                   /**< (CSI2DC_SSPIDR) Line End Interrupt Disable Mask */
#define CSI2DC_SSPIDR_LE(value)               (CSI2DC_SSPIDR_LE_Msk & ((value) << CSI2DC_SSPIDR_LE_Pos))
#define CSI2DC_SSPIDR_RE_Pos                  _U_(16)                                              /**< (CSI2DC_SSPIDR) Reserved Short Packet Interrupt Disable Position */
#define CSI2DC_SSPIDR_RE_Msk                  (_U_(0xF) << CSI2DC_SSPIDR_RE_Pos)                   /**< (CSI2DC_SSPIDR) Reserved Short Packet Interrupt Disable Mask */
#define CSI2DC_SSPIDR_RE(value)               (CSI2DC_SSPIDR_RE_Msk & ((value) << CSI2DC_SSPIDR_RE_Pos))
#define CSI2DC_SSPIDR_Msk                     _U_(0x000FFFFF)                                      /**< (CSI2DC_SSPIDR) Register Mask  */


/* -------- CSI2DC_SSPIMR : (CSI2DC Offset: 0x24) ( R/ 32) SSP Interrupt Mask Register -------- */
#define CSI2DC_SSPIMR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_SSPIMR) SSP Interrupt Mask Register  Reset Value */

#define CSI2DC_SSPIMR_FS_Pos                  _U_(0)                                               /**< (CSI2DC_SSPIMR) Frame Start Interrupt Mask Position */
#define CSI2DC_SSPIMR_FS_Msk                  (_U_(0xF) << CSI2DC_SSPIMR_FS_Pos)                   /**< (CSI2DC_SSPIMR) Frame Start Interrupt Mask Mask */
#define CSI2DC_SSPIMR_FS(value)               (CSI2DC_SSPIMR_FS_Msk & ((value) << CSI2DC_SSPIMR_FS_Pos))
#define   CSI2DC_SSPIMR_FS_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field FS indicates that the Frame Start interrupt is masked for virtual channel i.  */
#define   CSI2DC_SSPIMR_FS_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIMR) A bit set at position i in field FS indicates that Frame Start interrupt is activated for virtual channel i.  */
#define CSI2DC_SSPIMR_FS_0                    (CSI2DC_SSPIMR_FS_0_Val << CSI2DC_SSPIMR_FS_Pos)     /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field FS indicates that the Frame Start interrupt is masked for virtual channel i. Position  */
#define CSI2DC_SSPIMR_FS_1                    (CSI2DC_SSPIMR_FS_1_Val << CSI2DC_SSPIMR_FS_Pos)     /**< (CSI2DC_SSPIMR) A bit set at position i in field FS indicates that Frame Start interrupt is activated for virtual channel i. Position  */
#define CSI2DC_SSPIMR_FE_Pos                  _U_(4)                                               /**< (CSI2DC_SSPIMR) Frame End Interrupt Mask Position */
#define CSI2DC_SSPIMR_FE_Msk                  (_U_(0xF) << CSI2DC_SSPIMR_FE_Pos)                   /**< (CSI2DC_SSPIMR) Frame End Interrupt Mask Mask */
#define CSI2DC_SSPIMR_FE(value)               (CSI2DC_SSPIMR_FE_Msk & ((value) << CSI2DC_SSPIMR_FE_Pos))
#define   CSI2DC_SSPIMR_FE_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field FE indicates that the Frame End interrupt is masked for virtual channel i.  */
#define   CSI2DC_SSPIMR_FE_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIMR) A bit set at position i in field FE indicates that Frame End interrupt is activated for virtual channel i.  */
#define CSI2DC_SSPIMR_FE_0                    (CSI2DC_SSPIMR_FE_0_Val << CSI2DC_SSPIMR_FE_Pos)     /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field FE indicates that the Frame End interrupt is masked for virtual channel i. Position  */
#define CSI2DC_SSPIMR_FE_1                    (CSI2DC_SSPIMR_FE_1_Val << CSI2DC_SSPIMR_FE_Pos)     /**< (CSI2DC_SSPIMR) A bit set at position i in field FE indicates that Frame End interrupt is activated for virtual channel i. Position  */
#define CSI2DC_SSPIMR_LS_Pos                  _U_(8)                                               /**< (CSI2DC_SSPIMR) Line Start Interrupt Mask Position */
#define CSI2DC_SSPIMR_LS_Msk                  (_U_(0xF) << CSI2DC_SSPIMR_LS_Pos)                   /**< (CSI2DC_SSPIMR) Line Start Interrupt Mask Mask */
#define CSI2DC_SSPIMR_LS(value)               (CSI2DC_SSPIMR_LS_Msk & ((value) << CSI2DC_SSPIMR_LS_Pos))
#define   CSI2DC_SSPIMR_LS_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field LS indicates that the Line Start interrupt is masked for virtual channel i.  */
#define   CSI2DC_SSPIMR_LS_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIMR) A bit set at position i in field LS indicates that Line Start interrupt is activated for virtual channel i.  */
#define CSI2DC_SSPIMR_LS_0                    (CSI2DC_SSPIMR_LS_0_Val << CSI2DC_SSPIMR_LS_Pos)     /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field LS indicates that the Line Start interrupt is masked for virtual channel i. Position  */
#define CSI2DC_SSPIMR_LS_1                    (CSI2DC_SSPIMR_LS_1_Val << CSI2DC_SSPIMR_LS_Pos)     /**< (CSI2DC_SSPIMR) A bit set at position i in field LS indicates that Line Start interrupt is activated for virtual channel i. Position  */
#define CSI2DC_SSPIMR_LE_Pos                  _U_(12)                                              /**< (CSI2DC_SSPIMR) Line End Interrupt Mask Position */
#define CSI2DC_SSPIMR_LE_Msk                  (_U_(0xF) << CSI2DC_SSPIMR_LE_Pos)                   /**< (CSI2DC_SSPIMR) Line End Interrupt Mask Mask */
#define CSI2DC_SSPIMR_LE(value)               (CSI2DC_SSPIMR_LE_Msk & ((value) << CSI2DC_SSPIMR_LE_Pos))
#define   CSI2DC_SSPIMR_LE_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field LE indicates that the Line End interrupt is masked for virtual channel i.  */
#define   CSI2DC_SSPIMR_LE_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIMR) A bit set at position i in field LE indicates that Line End interrupt is activated for virtual channel i.  */
#define CSI2DC_SSPIMR_LE_0                    (CSI2DC_SSPIMR_LE_0_Val << CSI2DC_SSPIMR_LE_Pos)     /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field LE indicates that the Line End interrupt is masked for virtual channel i. Position  */
#define CSI2DC_SSPIMR_LE_1                    (CSI2DC_SSPIMR_LE_1_Val << CSI2DC_SSPIMR_LE_Pos)     /**< (CSI2DC_SSPIMR) A bit set at position i in field LE indicates that Line End interrupt is activated for virtual channel i. Position  */
#define CSI2DC_SSPIMR_RE_Pos                  _U_(16)                                              /**< (CSI2DC_SSPIMR) Reserved Short Packet Interrupt Mask Position */
#define CSI2DC_SSPIMR_RE_Msk                  (_U_(0xF) << CSI2DC_SSPIMR_RE_Pos)                   /**< (CSI2DC_SSPIMR) Reserved Short Packet Interrupt Mask Mask */
#define CSI2DC_SSPIMR_RE(value)               (CSI2DC_SSPIMR_RE_Msk & ((value) << CSI2DC_SSPIMR_RE_Pos))
#define   CSI2DC_SSPIMR_RE_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field RE indicates that the Reserved Packet interrupt is masked for virtual channel i.  */
#define   CSI2DC_SSPIMR_RE_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPIMR) A bit set at position i in field RE indicates that Reserved Packet interrupt is activated for virtual channel i.  */
#define CSI2DC_SSPIMR_RE_0                    (CSI2DC_SSPIMR_RE_0_Val << CSI2DC_SSPIMR_RE_Pos)     /**< (CSI2DC_SSPIMR) A bit cleared at position i in the field RE indicates that the Reserved Packet interrupt is masked for virtual channel i. Position  */
#define CSI2DC_SSPIMR_RE_1                    (CSI2DC_SSPIMR_RE_1_Val << CSI2DC_SSPIMR_RE_Pos)     /**< (CSI2DC_SSPIMR) A bit set at position i in field RE indicates that Reserved Packet interrupt is activated for virtual channel i. Position  */
#define CSI2DC_SSPIMR_Msk                     _U_(0x000FFFFF)                                      /**< (CSI2DC_SSPIMR) Register Mask  */


/* -------- CSI2DC_SSPISR : (CSI2DC Offset: 0x28) ( R/ 32) SSP Interrupt Status Register -------- */
#define CSI2DC_SSPISR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_SSPISR) SSP Interrupt Status Register  Reset Value */

#define CSI2DC_SSPISR_FS_Pos                  _U_(0)                                               /**< (CSI2DC_SSPISR) Frame Start Interrupt Mask Position */
#define CSI2DC_SSPISR_FS_Msk                  (_U_(0xF) << CSI2DC_SSPISR_FS_Pos)                   /**< (CSI2DC_SSPISR) Frame Start Interrupt Mask Mask */
#define CSI2DC_SSPISR_FS(value)               (CSI2DC_SSPISR_FS_Msk & ((value) << CSI2DC_SSPISR_FS_Pos))
#define   CSI2DC_SSPISR_FS_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPISR) A bit cleared at position i in the field FS indicates that no Frame Start interrupt is pending for virtual channel i.  */
#define   CSI2DC_SSPISR_FS_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPISR) A bit set at position i in the field FS indicates that a Frame Start interrupt is pending for virtual channel i.  */
#define CSI2DC_SSPISR_FS_0                    (CSI2DC_SSPISR_FS_0_Val << CSI2DC_SSPISR_FS_Pos)     /**< (CSI2DC_SSPISR) A bit cleared at position i in the field FS indicates that no Frame Start interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_FS_1                    (CSI2DC_SSPISR_FS_1_Val << CSI2DC_SSPISR_FS_Pos)     /**< (CSI2DC_SSPISR) A bit set at position i in the field FS indicates that a Frame Start interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_FE_Pos                  _U_(4)                                               /**< (CSI2DC_SSPISR) Frame End Interrupt Mask Position */
#define CSI2DC_SSPISR_FE_Msk                  (_U_(0xF) << CSI2DC_SSPISR_FE_Pos)                   /**< (CSI2DC_SSPISR) Frame End Interrupt Mask Mask */
#define CSI2DC_SSPISR_FE(value)               (CSI2DC_SSPISR_FE_Msk & ((value) << CSI2DC_SSPISR_FE_Pos))
#define   CSI2DC_SSPISR_FE_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPISR) A bit cleared at position i in the field FE indicates that no Frame End interrupt is pending for virtual channel i.  */
#define   CSI2DC_SSPISR_FE_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPISR) A bit set at position i in the field FE indicates that a Frame End interrupt is pending for virtual channel i.  */
#define CSI2DC_SSPISR_FE_0                    (CSI2DC_SSPISR_FE_0_Val << CSI2DC_SSPISR_FE_Pos)     /**< (CSI2DC_SSPISR) A bit cleared at position i in the field FE indicates that no Frame End interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_FE_1                    (CSI2DC_SSPISR_FE_1_Val << CSI2DC_SSPISR_FE_Pos)     /**< (CSI2DC_SSPISR) A bit set at position i in the field FE indicates that a Frame End interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_LS_Pos                  _U_(8)                                               /**< (CSI2DC_SSPISR) Line Start Interrupt Mask Position */
#define CSI2DC_SSPISR_LS_Msk                  (_U_(0xF) << CSI2DC_SSPISR_LS_Pos)                   /**< (CSI2DC_SSPISR) Line Start Interrupt Mask Mask */
#define CSI2DC_SSPISR_LS(value)               (CSI2DC_SSPISR_LS_Msk & ((value) << CSI2DC_SSPISR_LS_Pos))
#define   CSI2DC_SSPISR_LS_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPISR) A bit cleared at position i in the field LS indicates that no Line Start interrupt is pending for virtual channel i.  */
#define   CSI2DC_SSPISR_LS_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPISR) A bit set at position i in the field LS indicates that a Line Start interrupt is pending for virtual channel i.  */
#define CSI2DC_SSPISR_LS_0                    (CSI2DC_SSPISR_LS_0_Val << CSI2DC_SSPISR_LS_Pos)     /**< (CSI2DC_SSPISR) A bit cleared at position i in the field LS indicates that no Line Start interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_LS_1                    (CSI2DC_SSPISR_LS_1_Val << CSI2DC_SSPISR_LS_Pos)     /**< (CSI2DC_SSPISR) A bit set at position i in the field LS indicates that a Line Start interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_LE_Pos                  _U_(12)                                              /**< (CSI2DC_SSPISR) Line End Interrupt Mask Position */
#define CSI2DC_SSPISR_LE_Msk                  (_U_(0xF) << CSI2DC_SSPISR_LE_Pos)                   /**< (CSI2DC_SSPISR) Line End Interrupt Mask Mask */
#define CSI2DC_SSPISR_LE(value)               (CSI2DC_SSPISR_LE_Msk & ((value) << CSI2DC_SSPISR_LE_Pos))
#define   CSI2DC_SSPISR_LE_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPISR) A bit cleared at position i in the field LE indicates that no Line End interrupt is pending for virtual channel i.  */
#define   CSI2DC_SSPISR_LE_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPISR) A bit set at position i in the field LE indicates that a Line End interrupt is pending for virtual channel i.  */
#define CSI2DC_SSPISR_LE_0                    (CSI2DC_SSPISR_LE_0_Val << CSI2DC_SSPISR_LE_Pos)     /**< (CSI2DC_SSPISR) A bit cleared at position i in the field LE indicates that no Line End interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_LE_1                    (CSI2DC_SSPISR_LE_1_Val << CSI2DC_SSPISR_LE_Pos)     /**< (CSI2DC_SSPISR) A bit set at position i in the field LE indicates that a Line End interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_RE_Pos                  _U_(16)                                              /**< (CSI2DC_SSPISR) Reserved Short Packet Interrupt Mask Position */
#define CSI2DC_SSPISR_RE_Msk                  (_U_(0xF) << CSI2DC_SSPISR_RE_Pos)                   /**< (CSI2DC_SSPISR) Reserved Short Packet Interrupt Mask Mask */
#define CSI2DC_SSPISR_RE(value)               (CSI2DC_SSPISR_RE_Msk & ((value) << CSI2DC_SSPISR_RE_Pos))
#define   CSI2DC_SSPISR_RE_0_Val              _U_(0x0)                                             /**< (CSI2DC_SSPISR) A bit cleared at position i in the field RE indicates that no Reserved Short Packet interrupt is pending for virtual channel i.  */
#define   CSI2DC_SSPISR_RE_1_Val              _U_(0x1)                                             /**< (CSI2DC_SSPISR) A bit set at position i in the field RE indicates that no Reserved Short Packet interrupt is pending for virtual channel i.  */
#define CSI2DC_SSPISR_RE_0                    (CSI2DC_SSPISR_RE_0_Val << CSI2DC_SSPISR_RE_Pos)     /**< (CSI2DC_SSPISR) A bit cleared at position i in the field RE indicates that no Reserved Short Packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_RE_1                    (CSI2DC_SSPISR_RE_1_Val << CSI2DC_SSPISR_RE_Pos)     /**< (CSI2DC_SSPISR) A bit set at position i in the field RE indicates that no Reserved Short Packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_SSPISR_Msk                     _U_(0x000FFFFF)                                      /**< (CSI2DC_SSPISR) Register Mask  */


/* -------- CSI2DC_FNVC0R : (CSI2DC Offset: 0x2C) ( R/ 32) Frame Number VC0 Register -------- */
#define CSI2DC_FNVC0R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_FNVC0R) Frame Number VC0 Register  Reset Value */

#define CSI2DC_FNVC0R_FN_Pos                  _U_(0)                                               /**< (CSI2DC_FNVC0R) Frame Number for Virtual Channel 0 Position */
#define CSI2DC_FNVC0R_FN_Msk                  (_U_(0xFFFF) << CSI2DC_FNVC0R_FN_Pos)                /**< (CSI2DC_FNVC0R) Frame Number for Virtual Channel 0 Mask */
#define CSI2DC_FNVC0R_FN(value)               (CSI2DC_FNVC0R_FN_Msk & ((value) << CSI2DC_FNVC0R_FN_Pos))
#define CSI2DC_FNVC0R_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_FNVC0R) Register Mask  */


/* -------- CSI2DC_FNVC1R : (CSI2DC Offset: 0x30) ( R/ 32) Frame Number VC0 Register -------- */
#define CSI2DC_FNVC1R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_FNVC1R) Frame Number VC0 Register  Reset Value */

#define CSI2DC_FNVC1R_FN_Pos                  _U_(0)                                               /**< (CSI2DC_FNVC1R) Frame Number for Virtual Channel 0 Position */
#define CSI2DC_FNVC1R_FN_Msk                  (_U_(0xFFFF) << CSI2DC_FNVC1R_FN_Pos)                /**< (CSI2DC_FNVC1R) Frame Number for Virtual Channel 0 Mask */
#define CSI2DC_FNVC1R_FN(value)               (CSI2DC_FNVC1R_FN_Msk & ((value) << CSI2DC_FNVC1R_FN_Pos))
#define CSI2DC_FNVC1R_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_FNVC1R) Register Mask  */


/* -------- CSI2DC_FNVC2R : (CSI2DC Offset: 0x34) ( R/ 32) Frame Number VC0 Register -------- */
#define CSI2DC_FNVC2R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_FNVC2R) Frame Number VC0 Register  Reset Value */

#define CSI2DC_FNVC2R_FN_Pos                  _U_(0)                                               /**< (CSI2DC_FNVC2R) Frame Number for Virtual Channel 0 Position */
#define CSI2DC_FNVC2R_FN_Msk                  (_U_(0xFFFF) << CSI2DC_FNVC2R_FN_Pos)                /**< (CSI2DC_FNVC2R) Frame Number for Virtual Channel 0 Mask */
#define CSI2DC_FNVC2R_FN(value)               (CSI2DC_FNVC2R_FN_Msk & ((value) << CSI2DC_FNVC2R_FN_Pos))
#define CSI2DC_FNVC2R_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_FNVC2R) Register Mask  */


/* -------- CSI2DC_FNVC3R : (CSI2DC Offset: 0x38) ( R/ 32) Frame Number VC0 Register -------- */
#define CSI2DC_FNVC3R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_FNVC3R) Frame Number VC0 Register  Reset Value */

#define CSI2DC_FNVC3R_FN_Pos                  _U_(0)                                               /**< (CSI2DC_FNVC3R) Frame Number for Virtual Channel 0 Position */
#define CSI2DC_FNVC3R_FN_Msk                  (_U_(0xFFFF) << CSI2DC_FNVC3R_FN_Pos)                /**< (CSI2DC_FNVC3R) Frame Number for Virtual Channel 0 Mask */
#define CSI2DC_FNVC3R_FN(value)               (CSI2DC_FNVC3R_FN_Msk & ((value) << CSI2DC_FNVC3R_FN_Pos))
#define CSI2DC_FNVC3R_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_FNVC3R) Register Mask  */


/* -------- CSI2DC_LNVC0R : (CSI2DC Offset: 0x3C) ( R/ 32) Line Number VC0 Register -------- */
#define CSI2DC_LNVC0R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_LNVC0R) Line Number VC0 Register  Reset Value */

#define CSI2DC_LNVC0R_LN_Pos                  _U_(0)                                               /**< (CSI2DC_LNVC0R) Line Number for Virtual Channel 0 Position */
#define CSI2DC_LNVC0R_LN_Msk                  (_U_(0xFFFF) << CSI2DC_LNVC0R_LN_Pos)                /**< (CSI2DC_LNVC0R) Line Number for Virtual Channel 0 Mask */
#define CSI2DC_LNVC0R_LN(value)               (CSI2DC_LNVC0R_LN_Msk & ((value) << CSI2DC_LNVC0R_LN_Pos))
#define CSI2DC_LNVC0R_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_LNVC0R) Register Mask  */


/* -------- CSI2DC_LNVC1R : (CSI2DC Offset: 0x40) ( R/ 32) Line Number VC0 Register -------- */
#define CSI2DC_LNVC1R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_LNVC1R) Line Number VC0 Register  Reset Value */

#define CSI2DC_LNVC1R_LN_Pos                  _U_(0)                                               /**< (CSI2DC_LNVC1R) Line Number for Virtual Channel 0 Position */
#define CSI2DC_LNVC1R_LN_Msk                  (_U_(0xFFFF) << CSI2DC_LNVC1R_LN_Pos)                /**< (CSI2DC_LNVC1R) Line Number for Virtual Channel 0 Mask */
#define CSI2DC_LNVC1R_LN(value)               (CSI2DC_LNVC1R_LN_Msk & ((value) << CSI2DC_LNVC1R_LN_Pos))
#define CSI2DC_LNVC1R_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_LNVC1R) Register Mask  */


/* -------- CSI2DC_LNVC2R : (CSI2DC Offset: 0x44) ( R/ 32) Line Number VC0 Register -------- */
#define CSI2DC_LNVC2R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_LNVC2R) Line Number VC0 Register  Reset Value */

#define CSI2DC_LNVC2R_LN_Pos                  _U_(0)                                               /**< (CSI2DC_LNVC2R) Line Number for Virtual Channel 0 Position */
#define CSI2DC_LNVC2R_LN_Msk                  (_U_(0xFFFF) << CSI2DC_LNVC2R_LN_Pos)                /**< (CSI2DC_LNVC2R) Line Number for Virtual Channel 0 Mask */
#define CSI2DC_LNVC2R_LN(value)               (CSI2DC_LNVC2R_LN_Msk & ((value) << CSI2DC_LNVC2R_LN_Pos))
#define CSI2DC_LNVC2R_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_LNVC2R) Register Mask  */


/* -------- CSI2DC_LNVC3R : (CSI2DC Offset: 0x48) ( R/ 32) Line Number VC0 Register -------- */
#define CSI2DC_LNVC3R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_LNVC3R) Line Number VC0 Register  Reset Value */

#define CSI2DC_LNVC3R_LN_Pos                  _U_(0)                                               /**< (CSI2DC_LNVC3R) Line Number for Virtual Channel 0 Position */
#define CSI2DC_LNVC3R_LN_Msk                  (_U_(0xFFFF) << CSI2DC_LNVC3R_LN_Pos)                /**< (CSI2DC_LNVC3R) Line Number for Virtual Channel 0 Mask */
#define CSI2DC_LNVC3R_LN(value)               (CSI2DC_LNVC3R_LN_Msk & ((value) << CSI2DC_LNVC3R_LN_Pos))
#define CSI2DC_LNVC3R_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_LNVC3R) Register Mask  */


/* -------- CSI2DC_GSPIER : (CSI2DC Offset: 0x5C) ( /W 32) GSP Interrupt Enable Register -------- */
#define CSI2DC_GSPIER_GSPRDY_Pos              _U_(0)                                               /**< (CSI2DC_GSPIER) Generic Short Packet Ready Interrupt Enable Position */
#define CSI2DC_GSPIER_GSPRDY_Msk              (_U_(0xF) << CSI2DC_GSPIER_GSPRDY_Pos)               /**< (CSI2DC_GSPIER) Generic Short Packet Ready Interrupt Enable Mask */
#define CSI2DC_GSPIER_GSPRDY(value)           (CSI2DC_GSPIER_GSPRDY_Msk & ((value) << CSI2DC_GSPIER_GSPRDY_Pos))
#define   CSI2DC_GSPIER_GSPRDY_0_Val          _U_(0x0)                                             /**< (CSI2DC_GSPIER) No effect.  */
#define   CSI2DC_GSPIER_GSPRDY_1_Val          _U_(0x1)                                             /**< (CSI2DC_GSPIER) Setting a bit at position i in the GSPRDY field will set the interrupt mask bit, and virtual channel i can generate a Generic Short Packet interrupt.  */
#define CSI2DC_GSPIER_GSPRDY_0                (CSI2DC_GSPIER_GSPRDY_0_Val << CSI2DC_GSPIER_GSPRDY_Pos) /**< (CSI2DC_GSPIER) No effect. Position  */
#define CSI2DC_GSPIER_GSPRDY_1                (CSI2DC_GSPIER_GSPRDY_1_Val << CSI2DC_GSPIER_GSPRDY_Pos) /**< (CSI2DC_GSPIER) Setting a bit at position i in the GSPRDY field will set the interrupt mask bit, and virtual channel i can generate a Generic Short Packet interrupt. Position  */
#define CSI2DC_GSPIER_GSPERR_Pos              _U_(4)                                               /**< (CSI2DC_GSPIER) Generic Short Packet Error Interrupt Enable Position */
#define CSI2DC_GSPIER_GSPERR_Msk              (_U_(0xF) << CSI2DC_GSPIER_GSPERR_Pos)               /**< (CSI2DC_GSPIER) Generic Short Packet Error Interrupt Enable Mask */
#define CSI2DC_GSPIER_GSPERR(value)           (CSI2DC_GSPIER_GSPERR_Msk & ((value) << CSI2DC_GSPIER_GSPERR_Pos))
#define   CSI2DC_GSPIER_GSPERR_0_Val          _U_(0x0)                                             /**< (CSI2DC_GSPIER) No effect.  */
#define   CSI2DC_GSPIER_GSPERR_1_Val          _U_(0x1)                                             /**< (CSI2DC_GSPIER) Setting a bit at position i in the GSPERR field will set the interrupt mask bit, and virtual channel i can generate a Generic Short Packet Error interrupt.  */
#define CSI2DC_GSPIER_GSPERR_0                (CSI2DC_GSPIER_GSPERR_0_Val << CSI2DC_GSPIER_GSPERR_Pos) /**< (CSI2DC_GSPIER) No effect. Position  */
#define CSI2DC_GSPIER_GSPERR_1                (CSI2DC_GSPIER_GSPERR_1_Val << CSI2DC_GSPIER_GSPERR_Pos) /**< (CSI2DC_GSPIER) Setting a bit at position i in the GSPERR field will set the interrupt mask bit, and virtual channel i can generate a Generic Short Packet Error interrupt. Position  */
#define CSI2DC_GSPIER_Msk                     _U_(0x000000FF)                                      /**< (CSI2DC_GSPIER) Register Mask  */


/* -------- CSI2DC_GSPIDR : (CSI2DC Offset: 0x60) ( /W 32) GSP Interrupt Disable Register -------- */
#define CSI2DC_GSPIDR_GSPRDY_Pos              _U_(0)                                               /**< (CSI2DC_GSPIDR) Generic Short Packet Ready Interrupt Disable Position */
#define CSI2DC_GSPIDR_GSPRDY_Msk              (_U_(0xF) << CSI2DC_GSPIDR_GSPRDY_Pos)               /**< (CSI2DC_GSPIDR) Generic Short Packet Ready Interrupt Disable Mask */
#define CSI2DC_GSPIDR_GSPRDY(value)           (CSI2DC_GSPIDR_GSPRDY_Msk & ((value) << CSI2DC_GSPIDR_GSPRDY_Pos))
#define   CSI2DC_GSPIDR_GSPRDY_0_Val          _U_(0x0)                                             /**< (CSI2DC_GSPIDR) No effect.  */
#define   CSI2DC_GSPIDR_GSPRDY_1_Val          _U_(0x1)                                             /**< (CSI2DC_GSPIDR) Setting a bit at position i in the GSPRDY field will clear the interrupt mask bit for virtual channel i.  */
#define CSI2DC_GSPIDR_GSPRDY_0                (CSI2DC_GSPIDR_GSPRDY_0_Val << CSI2DC_GSPIDR_GSPRDY_Pos) /**< (CSI2DC_GSPIDR) No effect. Position  */
#define CSI2DC_GSPIDR_GSPRDY_1                (CSI2DC_GSPIDR_GSPRDY_1_Val << CSI2DC_GSPIDR_GSPRDY_Pos) /**< (CSI2DC_GSPIDR) Setting a bit at position i in the GSPRDY field will clear the interrupt mask bit for virtual channel i. Position  */
#define CSI2DC_GSPIDR_GSPERR_Pos              _U_(4)                                               /**< (CSI2DC_GSPIDR) Generic Short Packet Error Interrupt Disable Position */
#define CSI2DC_GSPIDR_GSPERR_Msk              (_U_(0xF) << CSI2DC_GSPIDR_GSPERR_Pos)               /**< (CSI2DC_GSPIDR) Generic Short Packet Error Interrupt Disable Mask */
#define CSI2DC_GSPIDR_GSPERR(value)           (CSI2DC_GSPIDR_GSPERR_Msk & ((value) << CSI2DC_GSPIDR_GSPERR_Pos))
#define   CSI2DC_GSPIDR_GSPERR_0_Val          _U_(0x0)                                             /**< (CSI2DC_GSPIDR) No effect.  */
#define   CSI2DC_GSPIDR_GSPERR_1_Val          _U_(0x1)                                             /**< (CSI2DC_GSPIDR) Setting a bit at position i in the GSPERR field will clear the interrupt mask bit for virtual channel i.  */
#define CSI2DC_GSPIDR_GSPERR_0                (CSI2DC_GSPIDR_GSPERR_0_Val << CSI2DC_GSPIDR_GSPERR_Pos) /**< (CSI2DC_GSPIDR) No effect. Position  */
#define CSI2DC_GSPIDR_GSPERR_1                (CSI2DC_GSPIDR_GSPERR_1_Val << CSI2DC_GSPIDR_GSPERR_Pos) /**< (CSI2DC_GSPIDR) Setting a bit at position i in the GSPERR field will clear the interrupt mask bit for virtual channel i. Position  */
#define CSI2DC_GSPIDR_Msk                     _U_(0x000000FF)                                      /**< (CSI2DC_GSPIDR) Register Mask  */


/* -------- CSI2DC_GSPIMR : (CSI2DC Offset: 0x64) ( R/ 32) GSP Interrupt Mask Register -------- */
#define CSI2DC_GSPIMR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_GSPIMR) GSP Interrupt Mask Register  Reset Value */

#define CSI2DC_GSPIMR_GSPRDY_Pos              _U_(0)                                               /**< (CSI2DC_GSPIMR) Generic Short Packet Ready Interrupt Mask bit Position */
#define CSI2DC_GSPIMR_GSPRDY_Msk              (_U_(0xF) << CSI2DC_GSPIMR_GSPRDY_Pos)               /**< (CSI2DC_GSPIMR) Generic Short Packet Ready Interrupt Mask bit Mask */
#define CSI2DC_GSPIMR_GSPRDY(value)           (CSI2DC_GSPIMR_GSPRDY_Msk & ((value) << CSI2DC_GSPIMR_GSPRDY_Pos))
#define   CSI2DC_GSPIMR_GSPRDY_0_Val          _U_(0x0)                                             /**< (CSI2DC_GSPIMR) A bit cleared at position i in the field GSPRDY indicates that the GSP Ready interrupt is masked for virtual channel i.  */
#define   CSI2DC_GSPIMR_GSPRDY_1_Val          _U_(0x1)                                             /**< (CSI2DC_GSPIMR) A bit set at position i in field GSPRDY indicates that the GSP Ready interrupt is activated for virtual channel i.  */
#define CSI2DC_GSPIMR_GSPRDY_0                (CSI2DC_GSPIMR_GSPRDY_0_Val << CSI2DC_GSPIMR_GSPRDY_Pos) /**< (CSI2DC_GSPIMR) A bit cleared at position i in the field GSPRDY indicates that the GSP Ready interrupt is masked for virtual channel i. Position  */
#define CSI2DC_GSPIMR_GSPRDY_1                (CSI2DC_GSPIMR_GSPRDY_1_Val << CSI2DC_GSPIMR_GSPRDY_Pos) /**< (CSI2DC_GSPIMR) A bit set at position i in field GSPRDY indicates that the GSP Ready interrupt is activated for virtual channel i. Position  */
#define CSI2DC_GSPIMR_GSPERR_Pos              _U_(4)                                               /**< (CSI2DC_GSPIMR) Generic Short Packet Error Interrupt Mask bit Position */
#define CSI2DC_GSPIMR_GSPERR_Msk              (_U_(0xF) << CSI2DC_GSPIMR_GSPERR_Pos)               /**< (CSI2DC_GSPIMR) Generic Short Packet Error Interrupt Mask bit Mask */
#define CSI2DC_GSPIMR_GSPERR(value)           (CSI2DC_GSPIMR_GSPERR_Msk & ((value) << CSI2DC_GSPIMR_GSPERR_Pos))
#define   CSI2DC_GSPIMR_GSPERR_0_Val          _U_(0x0)                                             /**< (CSI2DC_GSPIMR) A bit cleared at position i in the field GSPERR indicates that the GSP Error interrupt is masked.  */
#define   CSI2DC_GSPIMR_GSPERR_1_Val          _U_(0x1)                                             /**< (CSI2DC_GSPIMR) A bit set at position i in field GSPERR indicates that the GSP Error interrupt is activated.  */
#define CSI2DC_GSPIMR_GSPERR_0                (CSI2DC_GSPIMR_GSPERR_0_Val << CSI2DC_GSPIMR_GSPERR_Pos) /**< (CSI2DC_GSPIMR) A bit cleared at position i in the field GSPERR indicates that the GSP Error interrupt is masked. Position  */
#define CSI2DC_GSPIMR_GSPERR_1                (CSI2DC_GSPIMR_GSPERR_1_Val << CSI2DC_GSPIMR_GSPERR_Pos) /**< (CSI2DC_GSPIMR) A bit set at position i in field GSPERR indicates that the GSP Error interrupt is activated. Position  */
#define CSI2DC_GSPIMR_Msk                     _U_(0x000000FF)                                      /**< (CSI2DC_GSPIMR) Register Mask  */


/* -------- CSI2DC_GSPISR : (CSI2DC Offset: 0x68) ( R/ 32) GSP Interrupt Status Register -------- */
#define CSI2DC_GSPISR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_GSPISR) GSP Interrupt Status Register  Reset Value */

#define CSI2DC_GSPISR_GSPRDY_Pos              _U_(0)                                               /**< (CSI2DC_GSPISR) Generic Short Packet Ready Interrupt Status Bit Position */
#define CSI2DC_GSPISR_GSPRDY_Msk              (_U_(0xF) << CSI2DC_GSPISR_GSPRDY_Pos)               /**< (CSI2DC_GSPISR) Generic Short Packet Ready Interrupt Status Bit Mask */
#define CSI2DC_GSPISR_GSPRDY(value)           (CSI2DC_GSPISR_GSPRDY_Msk & ((value) << CSI2DC_GSPISR_GSPRDY_Pos))
#define   CSI2DC_GSPISR_GSPRDY_0_Val          _U_(0x0)                                             /**< (CSI2DC_GSPISR) A bit cleared at position i in the field GSPRDY indicates that no Generic Short Packet Ready interrupt is pending for virtual channel i.  */
#define   CSI2DC_GSPISR_GSPRDY_1_Val          _U_(0x1)                                             /**< (CSI2DC_GSPISR) A bit set at position i in the field GSPRDY indicates that a Generic Short Packet Ready interrupt is pending for virtual channel i.  */
#define CSI2DC_GSPISR_GSPRDY_0                (CSI2DC_GSPISR_GSPRDY_0_Val << CSI2DC_GSPISR_GSPRDY_Pos) /**< (CSI2DC_GSPISR) A bit cleared at position i in the field GSPRDY indicates that no Generic Short Packet Ready interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GSPISR_GSPRDY_1                (CSI2DC_GSPISR_GSPRDY_1_Val << CSI2DC_GSPISR_GSPRDY_Pos) /**< (CSI2DC_GSPISR) A bit set at position i in the field GSPRDY indicates that a Generic Short Packet Ready interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GSPISR_GSPERR_Pos              _U_(4)                                               /**< (CSI2DC_GSPISR) Generic Short Packet Error Interrupt Status Bit Position */
#define CSI2DC_GSPISR_GSPERR_Msk              (_U_(0xF) << CSI2DC_GSPISR_GSPERR_Pos)               /**< (CSI2DC_GSPISR) Generic Short Packet Error Interrupt Status Bit Mask */
#define CSI2DC_GSPISR_GSPERR(value)           (CSI2DC_GSPISR_GSPERR_Msk & ((value) << CSI2DC_GSPISR_GSPERR_Pos))
#define   CSI2DC_GSPISR_GSPERR_0_Val          _U_(0x0)                                             /**< (CSI2DC_GSPISR) A bit cleared at position i in the field GSPERR indicates that no Generic Short Packet Error interrupt is pending for virtual channel i.  */
#define   CSI2DC_GSPISR_GSPERR_1_Val          _U_(0x1)                                             /**< (CSI2DC_GSPISR) A bit set at position i in the field GSPERR indicates that a Generic Short Packet Error overflow interrupt has occurred since the last read of the status register.  */
#define CSI2DC_GSPISR_GSPERR_0                (CSI2DC_GSPISR_GSPERR_0_Val << CSI2DC_GSPISR_GSPERR_Pos) /**< (CSI2DC_GSPISR) A bit cleared at position i in the field GSPERR indicates that no Generic Short Packet Error interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GSPISR_GSPERR_1                (CSI2DC_GSPISR_GSPERR_1_Val << CSI2DC_GSPISR_GSPERR_Pos) /**< (CSI2DC_GSPISR) A bit set at position i in the field GSPERR indicates that a Generic Short Packet Error overflow interrupt has occurred since the last read of the status register. Position  */
#define CSI2DC_GSPISR_Msk                     _U_(0x000000FF)                                      /**< (CSI2DC_GSPISR) Register Mask  */


/* -------- CSI2DC_GSPS0R : (CSI2DC Offset: 0x6C) ( R/ 32) GSP Status 0 Register -------- */
#define CSI2DC_GSPS0R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_GSPS0R) GSP Status 0 Register  Reset Value */

#define CSI2DC_GSPS0R_VALUE_Pos               _U_(0)                                               /**< (CSI2DC_GSPS0R) Generic Short Packet 16-bit Data Value for Virtual Channel 0 Position */
#define CSI2DC_GSPS0R_VALUE_Msk               (_U_(0xFFFF) << CSI2DC_GSPS0R_VALUE_Pos)             /**< (CSI2DC_GSPS0R) Generic Short Packet 16-bit Data Value for Virtual Channel 0 Mask */
#define CSI2DC_GSPS0R_VALUE(value)            (CSI2DC_GSPS0R_VALUE_Msk & ((value) << CSI2DC_GSPS0R_VALUE_Pos))
#define CSI2DC_GSPS0R_TYPE_Pos                _U_(16)                                              /**< (CSI2DC_GSPS0R) Generic Short Packet Type Value for Virtual Channel 0 Position */
#define CSI2DC_GSPS0R_TYPE_Msk                (_U_(0x3F) << CSI2DC_GSPS0R_TYPE_Pos)                /**< (CSI2DC_GSPS0R) Generic Short Packet Type Value for Virtual Channel 0 Mask */
#define CSI2DC_GSPS0R_TYPE(value)             (CSI2DC_GSPS0R_TYPE_Msk & ((value) << CSI2DC_GSPS0R_TYPE_Pos))
#define CSI2DC_GSPS0R_Msk                     _U_(0x003FFFFF)                                      /**< (CSI2DC_GSPS0R) Register Mask  */


/* -------- CSI2DC_GSPS1R : (CSI2DC Offset: 0x70) ( R/ 32) GSP Status 1 Register -------- */
#define CSI2DC_GSPS1R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_GSPS1R) GSP Status 1 Register  Reset Value */

#define CSI2DC_GSPS1R_VALUE_Pos               _U_(0)                                               /**< (CSI2DC_GSPS1R) Generic Short Packet 16-bit Data Value for Virtual Channel 0 Position */
#define CSI2DC_GSPS1R_VALUE_Msk               (_U_(0xFFFF) << CSI2DC_GSPS1R_VALUE_Pos)             /**< (CSI2DC_GSPS1R) Generic Short Packet 16-bit Data Value for Virtual Channel 0 Mask */
#define CSI2DC_GSPS1R_VALUE(value)            (CSI2DC_GSPS1R_VALUE_Msk & ((value) << CSI2DC_GSPS1R_VALUE_Pos))
#define CSI2DC_GSPS1R_TYPE_Pos                _U_(16)                                              /**< (CSI2DC_GSPS1R) Generic Short Packet Type Value for Virtual Channel 0 Position */
#define CSI2DC_GSPS1R_TYPE_Msk                (_U_(0x3F) << CSI2DC_GSPS1R_TYPE_Pos)                /**< (CSI2DC_GSPS1R) Generic Short Packet Type Value for Virtual Channel 0 Mask */
#define CSI2DC_GSPS1R_TYPE(value)             (CSI2DC_GSPS1R_TYPE_Msk & ((value) << CSI2DC_GSPS1R_TYPE_Pos))
#define CSI2DC_GSPS1R_Msk                     _U_(0x003FFFFF)                                      /**< (CSI2DC_GSPS1R) Register Mask  */


/* -------- CSI2DC_GSPS2R : (CSI2DC Offset: 0x74) ( R/ 32) GSP Status 2 Register -------- */
#define CSI2DC_GSPS2R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_GSPS2R) GSP Status 2 Register  Reset Value */

#define CSI2DC_GSPS2R_VALUE_Pos               _U_(0)                                               /**< (CSI2DC_GSPS2R) Generic Short Packet 16-bit Data Value for Virtual Channel 0 Position */
#define CSI2DC_GSPS2R_VALUE_Msk               (_U_(0xFFFF) << CSI2DC_GSPS2R_VALUE_Pos)             /**< (CSI2DC_GSPS2R) Generic Short Packet 16-bit Data Value for Virtual Channel 0 Mask */
#define CSI2DC_GSPS2R_VALUE(value)            (CSI2DC_GSPS2R_VALUE_Msk & ((value) << CSI2DC_GSPS2R_VALUE_Pos))
#define CSI2DC_GSPS2R_TYPE_Pos                _U_(16)                                              /**< (CSI2DC_GSPS2R) Generic Short Packet Type Value for Virtual Channel 0 Position */
#define CSI2DC_GSPS2R_TYPE_Msk                (_U_(0x3F) << CSI2DC_GSPS2R_TYPE_Pos)                /**< (CSI2DC_GSPS2R) Generic Short Packet Type Value for Virtual Channel 0 Mask */
#define CSI2DC_GSPS2R_TYPE(value)             (CSI2DC_GSPS2R_TYPE_Msk & ((value) << CSI2DC_GSPS2R_TYPE_Pos))
#define CSI2DC_GSPS2R_Msk                     _U_(0x003FFFFF)                                      /**< (CSI2DC_GSPS2R) Register Mask  */


/* -------- CSI2DC_GSPS3R : (CSI2DC Offset: 0x78) ( R/ 32) GSP Status 3 Register -------- */
#define CSI2DC_GSPS3R_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_GSPS3R) GSP Status 3 Register  Reset Value */

#define CSI2DC_GSPS3R_VALUE_Pos               _U_(0)                                               /**< (CSI2DC_GSPS3R) Generic Short Packet 16-bit Data Value for Virtual Channel 0 Position */
#define CSI2DC_GSPS3R_VALUE_Msk               (_U_(0xFFFF) << CSI2DC_GSPS3R_VALUE_Pos)             /**< (CSI2DC_GSPS3R) Generic Short Packet 16-bit Data Value for Virtual Channel 0 Mask */
#define CSI2DC_GSPS3R_VALUE(value)            (CSI2DC_GSPS3R_VALUE_Msk & ((value) << CSI2DC_GSPS3R_VALUE_Pos))
#define CSI2DC_GSPS3R_TYPE_Pos                _U_(16)                                              /**< (CSI2DC_GSPS3R) Generic Short Packet Type Value for Virtual Channel 0 Position */
#define CSI2DC_GSPS3R_TYPE_Msk                (_U_(0x3F) << CSI2DC_GSPS3R_TYPE_Pos)                /**< (CSI2DC_GSPS3R) Generic Short Packet Type Value for Virtual Channel 0 Mask */
#define CSI2DC_GSPS3R_TYPE(value)             (CSI2DC_GSPS3R_TYPE_Msk & ((value) << CSI2DC_GSPS3R_TYPE_Pos))
#define CSI2DC_GSPS3R_Msk                     _U_(0x003FFFFF)                                      /**< (CSI2DC_GSPS3R) Register Mask  */


/* -------- CSI2DC_GLPIER : (CSI2DC Offset: 0x7C) ( /W 32) GLP Interrupt Enable Register -------- */
#define CSI2DC_GLPIER_NU_Pos                  _U_(0)                                               /**< (CSI2DC_GLPIER) Null Interrupt Enable Bit Position */
#define CSI2DC_GLPIER_NU_Msk                  (_U_(0xF) << CSI2DC_GLPIER_NU_Pos)                   /**< (CSI2DC_GLPIER) Null Interrupt Enable Bit Mask */
#define CSI2DC_GLPIER_NU(value)               (CSI2DC_GLPIER_NU_Msk & ((value) << CSI2DC_GLPIER_NU_Pos))
#define   CSI2DC_GLPIER_NU_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPIER) No effect.  */
#define   CSI2DC_GLPIER_NU_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPIER) Setting a bit at position i in the NU field sets the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a null long packet is detected.  */
#define CSI2DC_GLPIER_NU_0                    (CSI2DC_GLPIER_NU_0_Val << CSI2DC_GLPIER_NU_Pos)     /**< (CSI2DC_GLPIER) No effect. Position  */
#define CSI2DC_GLPIER_NU_1                    (CSI2DC_GLPIER_NU_1_Val << CSI2DC_GLPIER_NU_Pos)     /**< (CSI2DC_GLPIER) Setting a bit at position i in the NU field sets the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a null long packet is detected. Position  */
#define CSI2DC_GLPIER_BL_Pos                  _U_(4)                                               /**< (CSI2DC_GLPIER) Blanking Data Interrupt Enable Bit Position */
#define CSI2DC_GLPIER_BL_Msk                  (_U_(0xF) << CSI2DC_GLPIER_BL_Pos)                   /**< (CSI2DC_GLPIER) Blanking Data Interrupt Enable Bit Mask */
#define CSI2DC_GLPIER_BL(value)               (CSI2DC_GLPIER_BL_Msk & ((value) << CSI2DC_GLPIER_BL_Pos))
#define   CSI2DC_GLPIER_BL_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPIER) No effect.  */
#define   CSI2DC_GLPIER_BL_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPIER) Setting a bit at position i in the BL field sets the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Blank packet is detected.  */
#define CSI2DC_GLPIER_BL_0                    (CSI2DC_GLPIER_BL_0_Val << CSI2DC_GLPIER_BL_Pos)     /**< (CSI2DC_GLPIER) No effect. Position  */
#define CSI2DC_GLPIER_BL_1                    (CSI2DC_GLPIER_BL_1_Val << CSI2DC_GLPIER_BL_Pos)     /**< (CSI2DC_GLPIER) Setting a bit at position i in the BL field sets the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a Blank packet is detected. Position  */
#define CSI2DC_GLPIER_EB_Pos                  _U_(8)                                               /**< (CSI2DC_GLPIER) Embedded 8-bit Non-Image Data Interrupt Enable Bit Position */
#define CSI2DC_GLPIER_EB_Msk                  (_U_(0xF) << CSI2DC_GLPIER_EB_Pos)                   /**< (CSI2DC_GLPIER) Embedded 8-bit Non-Image Data Interrupt Enable Bit Mask */
#define CSI2DC_GLPIER_EB(value)               (CSI2DC_GLPIER_EB_Msk & ((value) << CSI2DC_GLPIER_EB_Pos))
#define   CSI2DC_GLPIER_EB_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPIER) No effect.  */
#define   CSI2DC_GLPIER_EB_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPIER) Setting a bit at position i in the EB field sets the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a non-image data packet is detected.  */
#define CSI2DC_GLPIER_EB_0                    (CSI2DC_GLPIER_EB_0_Val << CSI2DC_GLPIER_EB_Pos)     /**< (CSI2DC_GLPIER) No effect. Position  */
#define CSI2DC_GLPIER_EB_1                    (CSI2DC_GLPIER_EB_1_Val << CSI2DC_GLPIER_EB_Pos)     /**< (CSI2DC_GLPIER) Setting a bit at position i in the EB field sets the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a non-image data packet is detected. Position  */
#define CSI2DC_GLPIER_RE_Pos                  _U_(12)                                              /**< (CSI2DC_GLPIER) Reserved Packet Interrupt Enable Bit Position */
#define CSI2DC_GLPIER_RE_Msk                  (_U_(0xF) << CSI2DC_GLPIER_RE_Pos)                   /**< (CSI2DC_GLPIER) Reserved Packet Interrupt Enable Bit Mask */
#define CSI2DC_GLPIER_RE(value)               (CSI2DC_GLPIER_RE_Msk & ((value) << CSI2DC_GLPIER_RE_Pos))
#define   CSI2DC_GLPIER_RE_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPIER) No effect.  */
#define   CSI2DC_GLPIER_RE_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPIER) Setting a bit at position i in the RE field sets the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a reserved long packet is detected. A reserved long packet includes data types from 0x13 to 0x17.  */
#define CSI2DC_GLPIER_RE_0                    (CSI2DC_GLPIER_RE_0_Val << CSI2DC_GLPIER_RE_Pos)     /**< (CSI2DC_GLPIER) No effect. Position  */
#define CSI2DC_GLPIER_RE_1                    (CSI2DC_GLPIER_RE_1_Val << CSI2DC_GLPIER_RE_Pos)     /**< (CSI2DC_GLPIER) Setting a bit at position i in the RE field sets the interrupt mask bit for virtual channel i, and this virtual channel can generate an interrupt when a reserved long packet is detected. A reserved long packet includes data types from 0x13 to 0x17. Position  */
#define CSI2DC_GLPIER_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_GLPIER) Register Mask  */


/* -------- CSI2DC_GLPIDR : (CSI2DC Offset: 0x80) ( /W 32) GLP Interrupt Disable Register -------- */
#define CSI2DC_GLPIDR_NU_Pos                  _U_(0)                                               /**< (CSI2DC_GLPIDR) Null Interrupt Disable Bit Position */
#define CSI2DC_GLPIDR_NU_Msk                  (_U_(0xF) << CSI2DC_GLPIDR_NU_Pos)                   /**< (CSI2DC_GLPIDR) Null Interrupt Disable Bit Mask */
#define CSI2DC_GLPIDR_NU(value)               (CSI2DC_GLPIDR_NU_Msk & ((value) << CSI2DC_GLPIDR_NU_Pos))
#define CSI2DC_GLPIDR_BL_Pos                  _U_(4)                                               /**< (CSI2DC_GLPIDR) Blanking Data Interrupt Disable Bit Position */
#define CSI2DC_GLPIDR_BL_Msk                  (_U_(0xF) << CSI2DC_GLPIDR_BL_Pos)                   /**< (CSI2DC_GLPIDR) Blanking Data Interrupt Disable Bit Mask */
#define CSI2DC_GLPIDR_BL(value)               (CSI2DC_GLPIDR_BL_Msk & ((value) << CSI2DC_GLPIDR_BL_Pos))
#define CSI2DC_GLPIDR_EB_Pos                  _U_(8)                                               /**< (CSI2DC_GLPIDR) Embedded 8-bit Non-Image Data Interrupt Disable Bit Position */
#define CSI2DC_GLPIDR_EB_Msk                  (_U_(0xF) << CSI2DC_GLPIDR_EB_Pos)                   /**< (CSI2DC_GLPIDR) Embedded 8-bit Non-Image Data Interrupt Disable Bit Mask */
#define CSI2DC_GLPIDR_EB(value)               (CSI2DC_GLPIDR_EB_Msk & ((value) << CSI2DC_GLPIDR_EB_Pos))
#define CSI2DC_GLPIDR_RE_Pos                  _U_(12)                                              /**< (CSI2DC_GLPIDR) Reserved Packet Interrupt Disable Bit Position */
#define CSI2DC_GLPIDR_RE_Msk                  (_U_(0xF) << CSI2DC_GLPIDR_RE_Pos)                   /**< (CSI2DC_GLPIDR) Reserved Packet Interrupt Disable Bit Mask */
#define CSI2DC_GLPIDR_RE(value)               (CSI2DC_GLPIDR_RE_Msk & ((value) << CSI2DC_GLPIDR_RE_Pos))
#define CSI2DC_GLPIDR_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_GLPIDR) Register Mask  */


/* -------- CSI2DC_GLPIMR : (CSI2DC Offset: 0x84) ( R/ 32) GLP Interrupt Mask Register -------- */
#define CSI2DC_GLPIMR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_GLPIMR) GLP Interrupt Mask Register  Reset Value */

#define CSI2DC_GLPIMR_NU_Pos                  _U_(0)                                               /**< (CSI2DC_GLPIMR) Null Packet Interrupt Mask Bit Position */
#define CSI2DC_GLPIMR_NU_Msk                  (_U_(0xF) << CSI2DC_GLPIMR_NU_Pos)                   /**< (CSI2DC_GLPIMR) Null Packet Interrupt Mask Bit Mask */
#define CSI2DC_GLPIMR_NU(value)               (CSI2DC_GLPIMR_NU_Msk & ((value) << CSI2DC_GLPIMR_NU_Pos))
#define   CSI2DC_GLPIMR_NU_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPIMR) A bit cleared at position i in the field NU indicates that the Null Packet interrupt is masked for virtual channel i.  */
#define   CSI2DC_GLPIMR_NU_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPIMR) A bit set at position i in field NU indicates that the Null Packet interrupt is activated for virtual channel i.  */
#define CSI2DC_GLPIMR_NU_0                    (CSI2DC_GLPIMR_NU_0_Val << CSI2DC_GLPIMR_NU_Pos)     /**< (CSI2DC_GLPIMR) A bit cleared at position i in the field NU indicates that the Null Packet interrupt is masked for virtual channel i. Position  */
#define CSI2DC_GLPIMR_NU_1                    (CSI2DC_GLPIMR_NU_1_Val << CSI2DC_GLPIMR_NU_Pos)     /**< (CSI2DC_GLPIMR) A bit set at position i in field NU indicates that the Null Packet interrupt is activated for virtual channel i. Position  */
#define CSI2DC_GLPIMR_BL_Pos                  _U_(4)                                               /**< (CSI2DC_GLPIMR) Blanking Data Packet Interrupt Mask Bit Position */
#define CSI2DC_GLPIMR_BL_Msk                  (_U_(0xF) << CSI2DC_GLPIMR_BL_Pos)                   /**< (CSI2DC_GLPIMR) Blanking Data Packet Interrupt Mask Bit Mask */
#define CSI2DC_GLPIMR_BL(value)               (CSI2DC_GLPIMR_BL_Msk & ((value) << CSI2DC_GLPIMR_BL_Pos))
#define   CSI2DC_GLPIMR_BL_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPIMR) A bit cleared at position i in the field BL indicates that the Blanking Data Packet interrupt is masked for virtual channel i.  */
#define   CSI2DC_GLPIMR_BL_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPIMR) A bit set at position i in field BL indicates that the Blanking Data Packet interrupt is activated for virtual channel i.  */
#define CSI2DC_GLPIMR_BL_0                    (CSI2DC_GLPIMR_BL_0_Val << CSI2DC_GLPIMR_BL_Pos)     /**< (CSI2DC_GLPIMR) A bit cleared at position i in the field BL indicates that the Blanking Data Packet interrupt is masked for virtual channel i. Position  */
#define CSI2DC_GLPIMR_BL_1                    (CSI2DC_GLPIMR_BL_1_Val << CSI2DC_GLPIMR_BL_Pos)     /**< (CSI2DC_GLPIMR) A bit set at position i in field BL indicates that the Blanking Data Packet interrupt is activated for virtual channel i. Position  */
#define CSI2DC_GLPIMR_EB_Pos                  _U_(8)                                               /**< (CSI2DC_GLPIMR) Embedded 8-bit Non-Image Data Packet Interrupt Mask Bit Position */
#define CSI2DC_GLPIMR_EB_Msk                  (_U_(0xF) << CSI2DC_GLPIMR_EB_Pos)                   /**< (CSI2DC_GLPIMR) Embedded 8-bit Non-Image Data Packet Interrupt Mask Bit Mask */
#define CSI2DC_GLPIMR_EB(value)               (CSI2DC_GLPIMR_EB_Msk & ((value) << CSI2DC_GLPIMR_EB_Pos))
#define   CSI2DC_GLPIMR_EB_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPIMR) A bit cleared at position i in the field EB indicates that the embedded data packet interrupt is masked for virtual channel i.  */
#define   CSI2DC_GLPIMR_EB_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPIMR) A bit set at position i in field EB indicates that the embedded data packet interrupt is activated for virtual channel i.  */
#define CSI2DC_GLPIMR_EB_0                    (CSI2DC_GLPIMR_EB_0_Val << CSI2DC_GLPIMR_EB_Pos)     /**< (CSI2DC_GLPIMR) A bit cleared at position i in the field EB indicates that the embedded data packet interrupt is masked for virtual channel i. Position  */
#define CSI2DC_GLPIMR_EB_1                    (CSI2DC_GLPIMR_EB_1_Val << CSI2DC_GLPIMR_EB_Pos)     /**< (CSI2DC_GLPIMR) A bit set at position i in field EB indicates that the embedded data packet interrupt is activated for virtual channel i. Position  */
#define CSI2DC_GLPIMR_RE_Pos                  _U_(12)                                              /**< (CSI2DC_GLPIMR) Reserved Packet Interrupt Mask Bit Position */
#define CSI2DC_GLPIMR_RE_Msk                  (_U_(0xF) << CSI2DC_GLPIMR_RE_Pos)                   /**< (CSI2DC_GLPIMR) Reserved Packet Interrupt Mask Bit Mask */
#define CSI2DC_GLPIMR_RE(value)               (CSI2DC_GLPIMR_RE_Msk & ((value) << CSI2DC_GLPIMR_RE_Pos))
#define   CSI2DC_GLPIMR_RE_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPIMR) A bit cleared at position i in the field RE indicates that the Reserved Packet interrupt is masked for virtual channel i.  */
#define   CSI2DC_GLPIMR_RE_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPIMR) A bit set at position i in field NU indicates that the Reserved Packet interrupt is activated for virtual channel i.  */
#define CSI2DC_GLPIMR_RE_0                    (CSI2DC_GLPIMR_RE_0_Val << CSI2DC_GLPIMR_RE_Pos)     /**< (CSI2DC_GLPIMR) A bit cleared at position i in the field RE indicates that the Reserved Packet interrupt is masked for virtual channel i. Position  */
#define CSI2DC_GLPIMR_RE_1                    (CSI2DC_GLPIMR_RE_1_Val << CSI2DC_GLPIMR_RE_Pos)     /**< (CSI2DC_GLPIMR) A bit set at position i in field NU indicates that the Reserved Packet interrupt is activated for virtual channel i. Position  */
#define CSI2DC_GLPIMR_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_GLPIMR) Register Mask  */


/* -------- CSI2DC_GLPISR : (CSI2DC Offset: 0x88) ( R/ 32) GLP Interrupt Status Register -------- */
#define CSI2DC_GLPISR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_GLPISR) GLP Interrupt Status Register  Reset Value */

#define CSI2DC_GLPISR_NU_Pos                  _U_(0)                                               /**< (CSI2DC_GLPISR) Null Generic Long Packet Ready Interrupt Status Bit Position */
#define CSI2DC_GLPISR_NU_Msk                  (_U_(0xF) << CSI2DC_GLPISR_NU_Pos)                   /**< (CSI2DC_GLPISR) Null Generic Long Packet Ready Interrupt Status Bit Mask */
#define CSI2DC_GLPISR_NU(value)               (CSI2DC_GLPISR_NU_Msk & ((value) << CSI2DC_GLPISR_NU_Pos))
#define   CSI2DC_GLPISR_NU_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPISR) A bit cleared at position i in the field NU indicates that no null packet interrupt is pending for virtual channel i.  */
#define   CSI2DC_GLPISR_NU_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPISR) A bit set at position i in the field NU indicates that a null packet interrupt is pending for virtual channel i.  */
#define CSI2DC_GLPISR_NU_0                    (CSI2DC_GLPISR_NU_0_Val << CSI2DC_GLPISR_NU_Pos)     /**< (CSI2DC_GLPISR) A bit cleared at position i in the field NU indicates that no null packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GLPISR_NU_1                    (CSI2DC_GLPISR_NU_1_Val << CSI2DC_GLPISR_NU_Pos)     /**< (CSI2DC_GLPISR) A bit set at position i in the field NU indicates that a null packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GLPISR_BL_Pos                  _U_(4)                                               /**< (CSI2DC_GLPISR) Blanking Data Generic Long Packet Ready Interrupt Status Bit Position */
#define CSI2DC_GLPISR_BL_Msk                  (_U_(0xF) << CSI2DC_GLPISR_BL_Pos)                   /**< (CSI2DC_GLPISR) Blanking Data Generic Long Packet Ready Interrupt Status Bit Mask */
#define CSI2DC_GLPISR_BL(value)               (CSI2DC_GLPISR_BL_Msk & ((value) << CSI2DC_GLPISR_BL_Pos))
#define   CSI2DC_GLPISR_BL_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPISR) A bit cleared at position i in the field BL indicates that no blanking data packet interrupt is pending for virtual channel i.  */
#define   CSI2DC_GLPISR_BL_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPISR) A bit set at position i in the field BL indicates that a blanking packet interrupt is pending for virtual channel i.  */
#define CSI2DC_GLPISR_BL_0                    (CSI2DC_GLPISR_BL_0_Val << CSI2DC_GLPISR_BL_Pos)     /**< (CSI2DC_GLPISR) A bit cleared at position i in the field BL indicates that no blanking data packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GLPISR_BL_1                    (CSI2DC_GLPISR_BL_1_Val << CSI2DC_GLPISR_BL_Pos)     /**< (CSI2DC_GLPISR) A bit set at position i in the field BL indicates that a blanking packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GLPISR_EB_Pos                  _U_(8)                                               /**< (CSI2DC_GLPISR) Embedded 8-bit data Generic Long Packet Ready Interrupt Status Bit Position */
#define CSI2DC_GLPISR_EB_Msk                  (_U_(0xF) << CSI2DC_GLPISR_EB_Pos)                   /**< (CSI2DC_GLPISR) Embedded 8-bit data Generic Long Packet Ready Interrupt Status Bit Mask */
#define CSI2DC_GLPISR_EB(value)               (CSI2DC_GLPISR_EB_Msk & ((value) << CSI2DC_GLPISR_EB_Pos))
#define   CSI2DC_GLPISR_EB_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPISR) A bit cleared at position i in the field EB indicates that no embedded data packet interrupt is pending for virtual channel i.  */
#define   CSI2DC_GLPISR_EB_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPISR) A bit set at position i in the field EB indicates that an embedded data packet interrupt is pending for virtual channel i.  */
#define CSI2DC_GLPISR_EB_0                    (CSI2DC_GLPISR_EB_0_Val << CSI2DC_GLPISR_EB_Pos)     /**< (CSI2DC_GLPISR) A bit cleared at position i in the field EB indicates that no embedded data packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GLPISR_EB_1                    (CSI2DC_GLPISR_EB_1_Val << CSI2DC_GLPISR_EB_Pos)     /**< (CSI2DC_GLPISR) A bit set at position i in the field EB indicates that an embedded data packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GLPISR_RE_Pos                  _U_(12)                                              /**< (CSI2DC_GLPISR) Reserved Generic Long Packet Ready Interrupt Status Bit Position */
#define CSI2DC_GLPISR_RE_Msk                  (_U_(0xF) << CSI2DC_GLPISR_RE_Pos)                   /**< (CSI2DC_GLPISR) Reserved Generic Long Packet Ready Interrupt Status Bit Mask */
#define CSI2DC_GLPISR_RE(value)               (CSI2DC_GLPISR_RE_Msk & ((value) << CSI2DC_GLPISR_RE_Pos))
#define   CSI2DC_GLPISR_RE_0_Val              _U_(0x0)                                             /**< (CSI2DC_GLPISR) A bit cleared at position i in the field BL indicates that no reserved packet interrupt is pending for virtual channel i.  */
#define   CSI2DC_GLPISR_RE_1_Val              _U_(0x1)                                             /**< (CSI2DC_GLPISR) A bit set at position i in the field BL indicates that a reserved packet interrupt is pending for virtual channel i.  */
#define CSI2DC_GLPISR_RE_0                    (CSI2DC_GLPISR_RE_0_Val << CSI2DC_GLPISR_RE_Pos)     /**< (CSI2DC_GLPISR) A bit cleared at position i in the field BL indicates that no reserved packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GLPISR_RE_1                    (CSI2DC_GLPISR_RE_1_Val << CSI2DC_GLPISR_RE_Pos)     /**< (CSI2DC_GLPISR) A bit set at position i in the field BL indicates that a reserved packet interrupt is pending for virtual channel i. Position  */
#define CSI2DC_GLPISR_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_GLPISR) Register Mask  */


/* -------- CSI2DC_IDSCR : (CSI2DC Offset: 0x8C) ( /W 32) IDS Control Register -------- */
#define CSI2DC_IDSCR_SWRST_Pos                _U_(0)                                               /**< (CSI2DC_IDSCR) Software Reset Position */
#define CSI2DC_IDSCR_SWRST_Msk                (_U_(0x1) << CSI2DC_IDSCR_SWRST_Pos)                 /**< (CSI2DC_IDSCR) Software Reset Mask */
#define CSI2DC_IDSCR_SWRST(value)             (CSI2DC_IDSCR_SWRST_Msk & ((value) << CSI2DC_IDSCR_SWRST_Pos))
#define   CSI2DC_IDSCR_SWRST_0_Val            _U_(0x0)                                             /**< (CSI2DC_IDSCR) No effect.  */
#define   CSI2DC_IDSCR_SWRST_1_Val            _U_(0x1)                                             /**< (CSI2DC_IDSCR) Performs an IDS software reset of the table. Read value when set indicates that the software reset is in progress.  */
#define CSI2DC_IDSCR_SWRST_0                  (CSI2DC_IDSCR_SWRST_0_Val << CSI2DC_IDSCR_SWRST_Pos) /**< (CSI2DC_IDSCR) No effect. Position  */
#define CSI2DC_IDSCR_SWRST_1                  (CSI2DC_IDSCR_SWRST_1_Val << CSI2DC_IDSCR_SWRST_Pos) /**< (CSI2DC_IDSCR) Performs an IDS software reset of the table. Read value when set indicates that the software reset is in progress. Position  */
#define CSI2DC_IDSCR_Msk                      _U_(0x00000001)                                      /**< (CSI2DC_IDSCR) Register Mask  */


/* -------- CSI2DC_IDSIER : (CSI2DC Offset: 0x90) ( /W 32) IDS Interrupt Enable Register -------- */
#define CSI2DC_IDSIER_IDS_Pos                 _U_(0)                                               /**< (CSI2DC_IDSIER) Image Data Snoop Interrupt Enable Position */
#define CSI2DC_IDSIER_IDS_Msk                 (_U_(0xF) << CSI2DC_IDSIER_IDS_Pos)                  /**< (CSI2DC_IDSIER) Image Data Snoop Interrupt Enable Mask */
#define CSI2DC_IDSIER_IDS(value)              (CSI2DC_IDSIER_IDS_Msk & ((value) << CSI2DC_IDSIER_IDS_Pos))
#define   CSI2DC_IDSIER_IDS_0_Val             _U_(0x0)                                             /**< (CSI2DC_IDSIER) No effect.  */
#define   CSI2DC_IDSIER_IDS_1_Val             _U_(0x1)                                             /**< (CSI2DC_IDSIER) Setting a bit at position i in the IDS field will set the interrupt mask bit for table entry i, and this entry can generate an interrupt when an image data packet is captured by the snoop controller.  */
#define CSI2DC_IDSIER_IDS_0                   (CSI2DC_IDSIER_IDS_0_Val << CSI2DC_IDSIER_IDS_Pos)   /**< (CSI2DC_IDSIER) No effect. Position  */
#define CSI2DC_IDSIER_IDS_1                   (CSI2DC_IDSIER_IDS_1_Val << CSI2DC_IDSIER_IDS_Pos)   /**< (CSI2DC_IDSIER) Setting a bit at position i in the IDS field will set the interrupt mask bit for table entry i, and this entry can generate an interrupt when an image data packet is captured by the snoop controller. Position  */
#define CSI2DC_IDSIER_OVF_Pos                 _U_(4)                                               /**< (CSI2DC_IDSIER) Image Data Snoop Overflow Interrupt Enable Position */
#define CSI2DC_IDSIER_OVF_Msk                 (_U_(0x1) << CSI2DC_IDSIER_OVF_Pos)                  /**< (CSI2DC_IDSIER) Image Data Snoop Overflow Interrupt Enable Mask */
#define CSI2DC_IDSIER_OVF(value)              (CSI2DC_IDSIER_OVF_Msk & ((value) << CSI2DC_IDSIER_OVF_Pos))
#define   CSI2DC_IDSIER_OVF_0_Val             _U_(0x0)                                             /**< (CSI2DC_IDSIER) No effect.  */
#define   CSI2DC_IDSIER_OVF_1_Val             _U_(0x1)                                             /**< (CSI2DC_IDSIER) Enables the Image Data Snoop Overflow interrupt.  */
#define CSI2DC_IDSIER_OVF_0                   (CSI2DC_IDSIER_OVF_0_Val << CSI2DC_IDSIER_OVF_Pos)   /**< (CSI2DC_IDSIER) No effect. Position  */
#define CSI2DC_IDSIER_OVF_1                   (CSI2DC_IDSIER_OVF_1_Val << CSI2DC_IDSIER_OVF_Pos)   /**< (CSI2DC_IDSIER) Enables the Image Data Snoop Overflow interrupt. Position  */
#define CSI2DC_IDSIER_Msk                     _U_(0x0000001F)                                      /**< (CSI2DC_IDSIER) Register Mask  */


/* -------- CSI2DC_IDSIDR : (CSI2DC Offset: 0x94) ( /W 32) IDS Interrupt Disable Register -------- */
#define CSI2DC_IDSIDR_IDS_Pos                 _U_(0)                                               /**< (CSI2DC_IDSIDR) Image Data Snoop Interrupt Disable Position */
#define CSI2DC_IDSIDR_IDS_Msk                 (_U_(0xF) << CSI2DC_IDSIDR_IDS_Pos)                  /**< (CSI2DC_IDSIDR) Image Data Snoop Interrupt Disable Mask */
#define CSI2DC_IDSIDR_IDS(value)              (CSI2DC_IDSIDR_IDS_Msk & ((value) << CSI2DC_IDSIDR_IDS_Pos))
#define   CSI2DC_IDSIDR_IDS_0_Val             _U_(0x0)                                             /**< (CSI2DC_IDSIDR) No effect.  */
#define   CSI2DC_IDSIDR_IDS_1_Val             _U_(0x1)                                             /**< (CSI2DC_IDSIDR) Setting a bit at position i in the IDS field will clear the interrupt mask bit for table entry i.  */
#define CSI2DC_IDSIDR_IDS_0                   (CSI2DC_IDSIDR_IDS_0_Val << CSI2DC_IDSIDR_IDS_Pos)   /**< (CSI2DC_IDSIDR) No effect. Position  */
#define CSI2DC_IDSIDR_IDS_1                   (CSI2DC_IDSIDR_IDS_1_Val << CSI2DC_IDSIDR_IDS_Pos)   /**< (CSI2DC_IDSIDR) Setting a bit at position i in the IDS field will clear the interrupt mask bit for table entry i. Position  */
#define CSI2DC_IDSIDR_OVF_Pos                 _U_(4)                                               /**< (CSI2DC_IDSIDR) Image Data Snoop Overflow Interrupt Disable Position */
#define CSI2DC_IDSIDR_OVF_Msk                 (_U_(0x1) << CSI2DC_IDSIDR_OVF_Pos)                  /**< (CSI2DC_IDSIDR) Image Data Snoop Overflow Interrupt Disable Mask */
#define CSI2DC_IDSIDR_OVF(value)              (CSI2DC_IDSIDR_OVF_Msk & ((value) << CSI2DC_IDSIDR_OVF_Pos))
#define   CSI2DC_IDSIDR_OVF_0_Val             _U_(0x0)                                             /**< (CSI2DC_IDSIDR) No effect.  */
#define   CSI2DC_IDSIDR_OVF_1_Val             _U_(0x1)                                             /**< (CSI2DC_IDSIDR) Disables the Image Data Snoop Overflow interrupt.  */
#define CSI2DC_IDSIDR_OVF_0                   (CSI2DC_IDSIDR_OVF_0_Val << CSI2DC_IDSIDR_OVF_Pos)   /**< (CSI2DC_IDSIDR) No effect. Position  */
#define CSI2DC_IDSIDR_OVF_1                   (CSI2DC_IDSIDR_OVF_1_Val << CSI2DC_IDSIDR_OVF_Pos)   /**< (CSI2DC_IDSIDR) Disables the Image Data Snoop Overflow interrupt. Position  */
#define CSI2DC_IDSIDR_Msk                     _U_(0x0000001F)                                      /**< (CSI2DC_IDSIDR) Register Mask  */


/* -------- CSI2DC_IDSIMR : (CSI2DC Offset: 0x98) ( R/ 32) IDS Interrupt Mask Register -------- */
#define CSI2DC_IDSIMR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_IDSIMR) IDS Interrupt Mask Register  Reset Value */

#define CSI2DC_IDSIMR_IDS_Pos                 _U_(0)                                               /**< (CSI2DC_IDSIMR) Image Data Snoop Interrupt Mask Bit Position */
#define CSI2DC_IDSIMR_IDS_Msk                 (_U_(0xF) << CSI2DC_IDSIMR_IDS_Pos)                  /**< (CSI2DC_IDSIMR) Image Data Snoop Interrupt Mask Bit Mask */
#define CSI2DC_IDSIMR_IDS(value)              (CSI2DC_IDSIMR_IDS_Msk & ((value) << CSI2DC_IDSIMR_IDS_Pos))
#define   CSI2DC_IDSIMR_IDS_0_Val             _U_(0x0)                                             /**< (CSI2DC_IDSIMR) A bit cleared at position i in the field IDS indicates that the Image Data Snoop interrupt is masked for table entry i.  */
#define   CSI2DC_IDSIMR_IDS_1_Val             _U_(0x1)                                             /**< (CSI2DC_IDSIMR) A bit set at position i in field IDS indicates that Image Data Snoop interrupt is activated for table entry i.  */
#define CSI2DC_IDSIMR_IDS_0                   (CSI2DC_IDSIMR_IDS_0_Val << CSI2DC_IDSIMR_IDS_Pos)   /**< (CSI2DC_IDSIMR) A bit cleared at position i in the field IDS indicates that the Image Data Snoop interrupt is masked for table entry i. Position  */
#define CSI2DC_IDSIMR_IDS_1                   (CSI2DC_IDSIMR_IDS_1_Val << CSI2DC_IDSIMR_IDS_Pos)   /**< (CSI2DC_IDSIMR) A bit set at position i in field IDS indicates that Image Data Snoop interrupt is activated for table entry i. Position  */
#define CSI2DC_IDSIMR_OVF_Pos                 _U_(4)                                               /**< (CSI2DC_IDSIMR) Image Data Snoop Overflow Interrupt Mask Position */
#define CSI2DC_IDSIMR_OVF_Msk                 (_U_(0x1) << CSI2DC_IDSIMR_OVF_Pos)                  /**< (CSI2DC_IDSIMR) Image Data Snoop Overflow Interrupt Mask Mask */
#define CSI2DC_IDSIMR_OVF(value)              (CSI2DC_IDSIMR_OVF_Msk & ((value) << CSI2DC_IDSIMR_OVF_Pos))
#define   CSI2DC_IDSIMR_OVF_0_Val             _U_(0x0)                                             /**< (CSI2DC_IDSIMR) No effect.  */
#define   CSI2DC_IDSIMR_OVF_1_Val             _U_(0x1)                                             /**< (CSI2DC_IDSIMR) Indicates that the Image Data Snoop Overflow interrupt is activated.  */
#define CSI2DC_IDSIMR_OVF_0                   (CSI2DC_IDSIMR_OVF_0_Val << CSI2DC_IDSIMR_OVF_Pos)   /**< (CSI2DC_IDSIMR) No effect. Position  */
#define CSI2DC_IDSIMR_OVF_1                   (CSI2DC_IDSIMR_OVF_1_Val << CSI2DC_IDSIMR_OVF_Pos)   /**< (CSI2DC_IDSIMR) Indicates that the Image Data Snoop Overflow interrupt is activated. Position  */
#define CSI2DC_IDSIMR_Msk                     _U_(0x0000001F)                                      /**< (CSI2DC_IDSIMR) Register Mask  */


/* -------- CSI2DC_IDSISR : (CSI2DC Offset: 0x9C) ( R/ 32) IDS Interrupt Status Register -------- */
#define CSI2DC_IDSISR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_IDSISR) IDS Interrupt Status Register  Reset Value */

#define CSI2DC_IDSISR_IDS_Pos                 _U_(0)                                               /**< (CSI2DC_IDSISR) Image Data Snoop Interrupt Status Bit Position */
#define CSI2DC_IDSISR_IDS_Msk                 (_U_(0xF) << CSI2DC_IDSISR_IDS_Pos)                  /**< (CSI2DC_IDSISR) Image Data Snoop Interrupt Status Bit Mask */
#define CSI2DC_IDSISR_IDS(value)              (CSI2DC_IDSISR_IDS_Msk & ((value) << CSI2DC_IDSISR_IDS_Pos))
#define   CSI2DC_IDSISR_IDS_0_Val             _U_(0x0)                                             /**< (CSI2DC_IDSISR) A bit cleared at position i in the field IDS indicates that no Image Data Snoop interrupt is pending for virtual channel i.  */
#define   CSI2DC_IDSISR_IDS_1_Val             _U_(0x1)                                             /**< (CSI2DC_IDSISR) A bit set at position i in the field IDS indicates that a new Image Data Snoop entry interrupt is pending for table entry i.  */
#define CSI2DC_IDSISR_IDS_0                   (CSI2DC_IDSISR_IDS_0_Val << CSI2DC_IDSISR_IDS_Pos)   /**< (CSI2DC_IDSISR) A bit cleared at position i in the field IDS indicates that no Image Data Snoop interrupt is pending for virtual channel i. Position  */
#define CSI2DC_IDSISR_IDS_1                   (CSI2DC_IDSISR_IDS_1_Val << CSI2DC_IDSISR_IDS_Pos)   /**< (CSI2DC_IDSISR) A bit set at position i in the field IDS indicates that a new Image Data Snoop entry interrupt is pending for table entry i. Position  */
#define CSI2DC_IDSISR_OVF_Pos                 _U_(4)                                               /**< (CSI2DC_IDSISR) Image Data Snoop Overflow Interrupt Status Position */
#define CSI2DC_IDSISR_OVF_Msk                 (_U_(0x1) << CSI2DC_IDSISR_OVF_Pos)                  /**< (CSI2DC_IDSISR) Image Data Snoop Overflow Interrupt Status Mask */
#define CSI2DC_IDSISR_OVF(value)              (CSI2DC_IDSISR_OVF_Msk & ((value) << CSI2DC_IDSISR_OVF_Pos))
#define   CSI2DC_IDSISR_OVF_0_Val             _U_(0x0)                                             /**< (CSI2DC_IDSISR) No effect.  */
#define   CSI2DC_IDSISR_OVF_1_Val             _U_(0x1)                                             /**< (CSI2DC_IDSISR) Indicates that the IDS controller captured more than 4 entries.  */
#define CSI2DC_IDSISR_OVF_0                   (CSI2DC_IDSISR_OVF_0_Val << CSI2DC_IDSISR_OVF_Pos)   /**< (CSI2DC_IDSISR) No effect. Position  */
#define CSI2DC_IDSISR_OVF_1                   (CSI2DC_IDSISR_OVF_1_Val << CSI2DC_IDSISR_OVF_Pos)   /**< (CSI2DC_IDSISR) Indicates that the IDS controller captured more than 4 entries. Position  */
#define CSI2DC_IDSISR_Msk                     _U_(0x0000001F)                                      /**< (CSI2DC_IDSISR) Register Mask  */


/* -------- CSI2DC_PUR : (CSI2DC Offset: 0xC0) ( /W 32) Pipe Update Register -------- */
#define CSI2DC_PUR_VP_Pos                     _U_(0)                                               /**< (CSI2DC_PUR) Video Pipe Attributes Update Position */
#define CSI2DC_PUR_VP_Msk                     (_U_(0x1) << CSI2DC_PUR_VP_Pos)                      /**< (CSI2DC_PUR) Video Pipe Attributes Update Mask */
#define CSI2DC_PUR_VP(value)                  (CSI2DC_PUR_VP_Msk & ((value) << CSI2DC_PUR_VP_Pos))
#define   CSI2DC_PUR_VP_0_Val                 _U_(0x0)                                             /**< (CSI2DC_PUR) No effect.  */
#define   CSI2DC_PUR_VP_1_Val                 _U_(0x1)                                             /**< (CSI2DC_PUR) Transfers current configuration to Video Pipe Configuration registers on the next Frame Start Packet detection if the FS packet virtual channel ID matches the CSI2DC_VPCFG.VC field. This field must be set after video pipe configuration, otherwise the settings will not be updated.  */
#define CSI2DC_PUR_VP_0                       (CSI2DC_PUR_VP_0_Val << CSI2DC_PUR_VP_Pos)           /**< (CSI2DC_PUR) No effect. Position  */
#define CSI2DC_PUR_VP_1                       (CSI2DC_PUR_VP_1_Val << CSI2DC_PUR_VP_Pos)           /**< (CSI2DC_PUR) Transfers current configuration to Video Pipe Configuration registers on the next Frame Start Packet detection if the FS packet virtual channel ID matches the CSI2DC_VPCFG.VC field. This field must be set after video pipe configuration, otherwise the settings will not be updated. Position  */
#define CSI2DC_PUR_DP_Pos                     _U_(1)                                               /**< (CSI2DC_PUR) Data Pipe Attributes Update Position */
#define CSI2DC_PUR_DP_Msk                     (_U_(0x1) << CSI2DC_PUR_DP_Pos)                      /**< (CSI2DC_PUR) Data Pipe Attributes Update Mask */
#define CSI2DC_PUR_DP(value)                  (CSI2DC_PUR_DP_Msk & ((value) << CSI2DC_PUR_DP_Pos))
#define   CSI2DC_PUR_DP_0_Val                 _U_(0x0)                                             /**< (CSI2DC_PUR) No effect.  */
#define   CSI2DC_PUR_DP_1_Val                 _U_(0x1)                                             /**< (CSI2DC_PUR) Transfers current configuration to Data Pipe Configuration registers on the next Frame Start Packet detection if the FS packet virtual channel ID matches the CSI2DC_DPCFG.VC field. This field must be set after data pipe configuration, otherwise the settings will not be updated.  */
#define CSI2DC_PUR_DP_0                       (CSI2DC_PUR_DP_0_Val << CSI2DC_PUR_DP_Pos)           /**< (CSI2DC_PUR) No effect. Position  */
#define CSI2DC_PUR_DP_1                       (CSI2DC_PUR_DP_1_Val << CSI2DC_PUR_DP_Pos)           /**< (CSI2DC_PUR) Transfers current configuration to Data Pipe Configuration registers on the next Frame Start Packet detection if the FS packet virtual channel ID matches the CSI2DC_DPCFG.VC field. This field must be set after data pipe configuration, otherwise the settings will not be updated. Position  */
#define CSI2DC_PUR_Msk                        _U_(0x00000003)                                      /**< (CSI2DC_PUR) Register Mask  */


/* -------- CSI2DC_PUSR : (CSI2DC Offset: 0xC4) ( R/ 32) Pipe Update Status Register -------- */
#define CSI2DC_PUSR_RESETVALUE                _U_(0x00)                                            /**<  (CSI2DC_PUSR) Pipe Update Status Register  Reset Value */

#define CSI2DC_PUSR_VP_Pos                    _U_(0)                                               /**< (CSI2DC_PUSR) Video Pipe Update Position */
#define CSI2DC_PUSR_VP_Msk                    (_U_(0x1) << CSI2DC_PUSR_VP_Pos)                     /**< (CSI2DC_PUSR) Video Pipe Update Mask */
#define CSI2DC_PUSR_VP(value)                 (CSI2DC_PUSR_VP_Msk & ((value) << CSI2DC_PUSR_VP_Pos))
#define   CSI2DC_PUSR_VP_0_Val                _U_(0x0)                                             /**< (CSI2DC_PUSR) No video pipe in progress.  */
#define   CSI2DC_PUSR_VP_1_Val                _U_(0x1)                                             /**< (CSI2DC_PUSR) Video pipe configuration is in progress. This bit is cleared at the next frame start packet if the virtual channel identifier matches the CSI2DC_VPCFG.VC field.  */
#define CSI2DC_PUSR_VP_0                      (CSI2DC_PUSR_VP_0_Val << CSI2DC_PUSR_VP_Pos)         /**< (CSI2DC_PUSR) No video pipe in progress. Position  */
#define CSI2DC_PUSR_VP_1                      (CSI2DC_PUSR_VP_1_Val << CSI2DC_PUSR_VP_Pos)         /**< (CSI2DC_PUSR) Video pipe configuration is in progress. This bit is cleared at the next frame start packet if the virtual channel identifier matches the CSI2DC_VPCFG.VC field. Position  */
#define CSI2DC_PUSR_DP_Pos                    _U_(1)                                               /**< (CSI2DC_PUSR) Data Pipe Update Position */
#define CSI2DC_PUSR_DP_Msk                    (_U_(0x1) << CSI2DC_PUSR_DP_Pos)                     /**< (CSI2DC_PUSR) Data Pipe Update Mask */
#define CSI2DC_PUSR_DP(value)                 (CSI2DC_PUSR_DP_Msk & ((value) << CSI2DC_PUSR_DP_Pos))
#define   CSI2DC_PUSR_DP_0_Val                _U_(0x0)                                             /**< (CSI2DC_PUSR) No data pipe in progress.  */
#define   CSI2DC_PUSR_DP_1_Val                _U_(0x1)                                             /**< (CSI2DC_PUSR) Data pipe configuration is in progress. This bit is cleared at the next frame start packet if the virtual channel identifier matches the CSI2DC_DPCFG.VC field.  */
#define CSI2DC_PUSR_DP_0                      (CSI2DC_PUSR_DP_0_Val << CSI2DC_PUSR_DP_Pos)         /**< (CSI2DC_PUSR) No data pipe in progress. Position  */
#define CSI2DC_PUSR_DP_1                      (CSI2DC_PUSR_DP_1_Val << CSI2DC_PUSR_DP_Pos)         /**< (CSI2DC_PUSR) Data pipe configuration is in progress. This bit is cleared at the next frame start packet if the virtual channel identifier matches the CSI2DC_DPCFG.VC field. Position  */
#define CSI2DC_PUSR_SIP_Pos                   _U_(31)                                              /**< (CSI2DC_PUSR) Synchronization In Progress Position */
#define CSI2DC_PUSR_SIP_Msk                   (_U_(0x1) << CSI2DC_PUSR_SIP_Pos)                    /**< (CSI2DC_PUSR) Synchronization In Progress Mask */
#define CSI2DC_PUSR_SIP(value)                (CSI2DC_PUSR_SIP_Msk & ((value) << CSI2DC_PUSR_SIP_Pos))
#define   CSI2DC_PUSR_SIP_0_Val               _U_(0x0)                                             /**< (CSI2DC_PUSR) No synchronization pending.  */
#define   CSI2DC_PUSR_SIP_1_Val               _U_(0x1)                                             /**< (CSI2DC_PUSR) Synchronization across clock domain boundary is in progress. If the MIPI interface clock is gated, the synchronization procedure will wait for the first valid MIPI packet to activate the receiver clock.  */
#define CSI2DC_PUSR_SIP_0                     (CSI2DC_PUSR_SIP_0_Val << CSI2DC_PUSR_SIP_Pos)       /**< (CSI2DC_PUSR) No synchronization pending. Position  */
#define CSI2DC_PUSR_SIP_1                     (CSI2DC_PUSR_SIP_1_Val << CSI2DC_PUSR_SIP_Pos)       /**< (CSI2DC_PUSR) Synchronization across clock domain boundary is in progress. If the MIPI interface clock is gated, the synchronization procedure will wait for the first valid MIPI packet to activate the receiver clock. Position  */
#define CSI2DC_PUSR_Msk                       _U_(0x80000003)                                      /**< (CSI2DC_PUSR) Register Mask  */


/* -------- CSI2DC_DPIER : (CSI2DC Offset: 0xC8) ( /W 32) Data Pipe Interrupt Enable Register -------- */
#define CSI2DC_DPIER_CAPTURE_Pos              _U_(0)                                               /**< (CSI2DC_DPIER) Data Pipe Capture Done Interrupt Enable Position */
#define CSI2DC_DPIER_CAPTURE_Msk              (_U_(0x1) << CSI2DC_DPIER_CAPTURE_Pos)               /**< (CSI2DC_DPIER) Data Pipe Capture Done Interrupt Enable Mask */
#define CSI2DC_DPIER_CAPTURE(value)           (CSI2DC_DPIER_CAPTURE_Msk & ((value) << CSI2DC_DPIER_CAPTURE_Pos))
#define CSI2DC_DPIER_RXRDY0_Pos               _U_(1)                                               /**< (CSI2DC_DPIER) Bank 0, Packet Received Interrupt Enable Position */
#define CSI2DC_DPIER_RXRDY0_Msk               (_U_(0x1) << CSI2DC_DPIER_RXRDY0_Pos)                /**< (CSI2DC_DPIER) Bank 0, Packet Received Interrupt Enable Mask */
#define CSI2DC_DPIER_RXRDY0(value)            (CSI2DC_DPIER_RXRDY0_Msk & ((value) << CSI2DC_DPIER_RXRDY0_Pos))
#define CSI2DC_DPIER_RXRDY1_Pos               _U_(2)                                               /**< (CSI2DC_DPIER) Bank 1, Packet Received Interrupt Enable Position */
#define CSI2DC_DPIER_RXRDY1_Msk               (_U_(0x1) << CSI2DC_DPIER_RXRDY1_Pos)                /**< (CSI2DC_DPIER) Bank 1, Packet Received Interrupt Enable Mask */
#define CSI2DC_DPIER_RXRDY1(value)            (CSI2DC_DPIER_RXRDY1_Msk & ((value) << CSI2DC_DPIER_RXRDY1_Pos))
#define CSI2DC_DPIER_RXOVF0_Pos               _U_(3)                                               /**< (CSI2DC_DPIER) Bank 0, Packet Overflow Interrupt Enable Position */
#define CSI2DC_DPIER_RXOVF0_Msk               (_U_(0x1) << CSI2DC_DPIER_RXOVF0_Pos)                /**< (CSI2DC_DPIER) Bank 0, Packet Overflow Interrupt Enable Mask */
#define CSI2DC_DPIER_RXOVF0(value)            (CSI2DC_DPIER_RXOVF0_Msk & ((value) << CSI2DC_DPIER_RXOVF0_Pos))
#define CSI2DC_DPIER_RXOVF1_Pos               _U_(4)                                               /**< (CSI2DC_DPIER) Bank 1, Packet Overflow Interrupt Enable Position */
#define CSI2DC_DPIER_RXOVF1_Msk               (_U_(0x1) << CSI2DC_DPIER_RXOVF1_Pos)                /**< (CSI2DC_DPIER) Bank 1, Packet Overflow Interrupt Enable Mask */
#define CSI2DC_DPIER_RXOVF1(value)            (CSI2DC_DPIER_RXOVF1_Msk & ((value) << CSI2DC_DPIER_RXOVF1_Pos))
#define CSI2DC_DPIER_DATOVF_Pos               _U_(5)                                               /**< (CSI2DC_DPIER) Data Pipe Overflow Interrupt Enable Position */
#define CSI2DC_DPIER_DATOVF_Msk               (_U_(0x1) << CSI2DC_DPIER_DATOVF_Pos)                /**< (CSI2DC_DPIER) Data Pipe Overflow Interrupt Enable Mask */
#define CSI2DC_DPIER_DATOVF(value)            (CSI2DC_DPIER_DATOVF_Msk & ((value) << CSI2DC_DPIER_DATOVF_Pos))
#define CSI2DC_DPIER_STE_Pos                  _U_(6)                                               /**< (CSI2DC_DPIER) Shorter Than Expected Packet Received Interrupt Enable Position */
#define CSI2DC_DPIER_STE_Msk                  (_U_(0x1) << CSI2DC_DPIER_STE_Pos)                   /**< (CSI2DC_DPIER) Shorter Than Expected Packet Received Interrupt Enable Mask */
#define CSI2DC_DPIER_STE(value)               (CSI2DC_DPIER_STE_Msk & ((value) << CSI2DC_DPIER_STE_Pos))
#define CSI2DC_DPIER_LTE_Pos                  _U_(7)                                               /**< (CSI2DC_DPIER) Longer Than Expected Packet Received Interrupt Enable Bit Position */
#define CSI2DC_DPIER_LTE_Msk                  (_U_(0x1) << CSI2DC_DPIER_LTE_Pos)                   /**< (CSI2DC_DPIER) Longer Than Expected Packet Received Interrupt Enable Bit Mask */
#define CSI2DC_DPIER_LTE(value)               (CSI2DC_DPIER_LTE_Msk & ((value) << CSI2DC_DPIER_LTE_Pos))
#define CSI2DC_DPIER_Msk                      _U_(0x000000FF)                                      /**< (CSI2DC_DPIER) Register Mask  */

#define CSI2DC_DPIER_RXRDY_Pos                _U_(1)                                               /**< (CSI2DC_DPIER Position) Bank x, Packet Received Interrupt Enable */
#define CSI2DC_DPIER_RXRDY_Msk                (_U_(0x3) << CSI2DC_DPIER_RXRDY_Pos)                 /**< (CSI2DC_DPIER Mask) RXRDY */
#define CSI2DC_DPIER_RXRDY(value)             (CSI2DC_DPIER_RXRDY_Msk & ((value) << CSI2DC_DPIER_RXRDY_Pos)) 
#define CSI2DC_DPIER_RXOVF_Pos                _U_(3)                                               /**< (CSI2DC_DPIER Position) Bank x, Packet Overflow Interrupt Enable */
#define CSI2DC_DPIER_RXOVF_Msk                (_U_(0x3) << CSI2DC_DPIER_RXOVF_Pos)                 /**< (CSI2DC_DPIER Mask) RXOVF */
#define CSI2DC_DPIER_RXOVF(value)             (CSI2DC_DPIER_RXOVF_Msk & ((value) << CSI2DC_DPIER_RXOVF_Pos)) 

/* -------- CSI2DC_DPIDR : (CSI2DC Offset: 0xCC) ( /W 32) Data Pipe Interrupt Disable Register -------- */
#define CSI2DC_DPIDR_CAPTURE_Pos              _U_(0)                                               /**< (CSI2DC_DPIDR) Data Pipe Capture Done Interrupt Disable Position */
#define CSI2DC_DPIDR_CAPTURE_Msk              (_U_(0x1) << CSI2DC_DPIDR_CAPTURE_Pos)               /**< (CSI2DC_DPIDR) Data Pipe Capture Done Interrupt Disable Mask */
#define CSI2DC_DPIDR_CAPTURE(value)           (CSI2DC_DPIDR_CAPTURE_Msk & ((value) << CSI2DC_DPIDR_CAPTURE_Pos))
#define CSI2DC_DPIDR_RXRDY0_Pos               _U_(1)                                               /**< (CSI2DC_DPIDR) Bank 0, Packet Received Interrupt Disable Position */
#define CSI2DC_DPIDR_RXRDY0_Msk               (_U_(0x1) << CSI2DC_DPIDR_RXRDY0_Pos)                /**< (CSI2DC_DPIDR) Bank 0, Packet Received Interrupt Disable Mask */
#define CSI2DC_DPIDR_RXRDY0(value)            (CSI2DC_DPIDR_RXRDY0_Msk & ((value) << CSI2DC_DPIDR_RXRDY0_Pos))
#define CSI2DC_DPIDR_RXRDY1_Pos               _U_(2)                                               /**< (CSI2DC_DPIDR) Bank 1, Packet Received Interrupt Disable Position */
#define CSI2DC_DPIDR_RXRDY1_Msk               (_U_(0x1) << CSI2DC_DPIDR_RXRDY1_Pos)                /**< (CSI2DC_DPIDR) Bank 1, Packet Received Interrupt Disable Mask */
#define CSI2DC_DPIDR_RXRDY1(value)            (CSI2DC_DPIDR_RXRDY1_Msk & ((value) << CSI2DC_DPIDR_RXRDY1_Pos))
#define CSI2DC_DPIDR_RXOVF0_Pos               _U_(3)                                               /**< (CSI2DC_DPIDR) Bank 0, Packet Overflow Interrupt Disable Position */
#define CSI2DC_DPIDR_RXOVF0_Msk               (_U_(0x1) << CSI2DC_DPIDR_RXOVF0_Pos)                /**< (CSI2DC_DPIDR) Bank 0, Packet Overflow Interrupt Disable Mask */
#define CSI2DC_DPIDR_RXOVF0(value)            (CSI2DC_DPIDR_RXOVF0_Msk & ((value) << CSI2DC_DPIDR_RXOVF0_Pos))
#define CSI2DC_DPIDR_RXOVF1_Pos               _U_(4)                                               /**< (CSI2DC_DPIDR) Bank 1, Packet Overflow Interrupt Disable Position */
#define CSI2DC_DPIDR_RXOVF1_Msk               (_U_(0x1) << CSI2DC_DPIDR_RXOVF1_Pos)                /**< (CSI2DC_DPIDR) Bank 1, Packet Overflow Interrupt Disable Mask */
#define CSI2DC_DPIDR_RXOVF1(value)            (CSI2DC_DPIDR_RXOVF1_Msk & ((value) << CSI2DC_DPIDR_RXOVF1_Pos))
#define CSI2DC_DPIDR_DATOVF_Pos               _U_(5)                                               /**< (CSI2DC_DPIDR) Data Pipe Overflow Interrupt Disable Position */
#define CSI2DC_DPIDR_DATOVF_Msk               (_U_(0x1) << CSI2DC_DPIDR_DATOVF_Pos)                /**< (CSI2DC_DPIDR) Data Pipe Overflow Interrupt Disable Mask */
#define CSI2DC_DPIDR_DATOVF(value)            (CSI2DC_DPIDR_DATOVF_Msk & ((value) << CSI2DC_DPIDR_DATOVF_Pos))
#define CSI2DC_DPIDR_STE_Pos                  _U_(6)                                               /**< (CSI2DC_DPIDR) Shorter Than Expected Packet Received Interrupt Disable Position */
#define CSI2DC_DPIDR_STE_Msk                  (_U_(0x1) << CSI2DC_DPIDR_STE_Pos)                   /**< (CSI2DC_DPIDR) Shorter Than Expected Packet Received Interrupt Disable Mask */
#define CSI2DC_DPIDR_STE(value)               (CSI2DC_DPIDR_STE_Msk & ((value) << CSI2DC_DPIDR_STE_Pos))
#define CSI2DC_DPIDR_LTE_Pos                  _U_(7)                                               /**< (CSI2DC_DPIDR) Longer Than Expected Packet Received Interrupt Disable Position */
#define CSI2DC_DPIDR_LTE_Msk                  (_U_(0x1) << CSI2DC_DPIDR_LTE_Pos)                   /**< (CSI2DC_DPIDR) Longer Than Expected Packet Received Interrupt Disable Mask */
#define CSI2DC_DPIDR_LTE(value)               (CSI2DC_DPIDR_LTE_Msk & ((value) << CSI2DC_DPIDR_LTE_Pos))
#define CSI2DC_DPIDR_Msk                      _U_(0x000000FF)                                      /**< (CSI2DC_DPIDR) Register Mask  */

#define CSI2DC_DPIDR_RXRDY_Pos                _U_(1)                                               /**< (CSI2DC_DPIDR Position) Bank x, Packet Received Interrupt Disable */
#define CSI2DC_DPIDR_RXRDY_Msk                (_U_(0x3) << CSI2DC_DPIDR_RXRDY_Pos)                 /**< (CSI2DC_DPIDR Mask) RXRDY */
#define CSI2DC_DPIDR_RXRDY(value)             (CSI2DC_DPIDR_RXRDY_Msk & ((value) << CSI2DC_DPIDR_RXRDY_Pos)) 
#define CSI2DC_DPIDR_RXOVF_Pos                _U_(3)                                               /**< (CSI2DC_DPIDR Position) Bank x, Packet Overflow Interrupt Disable */
#define CSI2DC_DPIDR_RXOVF_Msk                (_U_(0x3) << CSI2DC_DPIDR_RXOVF_Pos)                 /**< (CSI2DC_DPIDR Mask) RXOVF */
#define CSI2DC_DPIDR_RXOVF(value)             (CSI2DC_DPIDR_RXOVF_Msk & ((value) << CSI2DC_DPIDR_RXOVF_Pos)) 

/* -------- CSI2DC_DPIMR : (CSI2DC Offset: 0xD0) ( R/ 32) Data Pipe Interrupt Mask Register -------- */
#define CSI2DC_DPIMR_RESETVALUE               _U_(0x00)                                            /**<  (CSI2DC_DPIMR) Data Pipe Interrupt Mask Register  Reset Value */

#define CSI2DC_DPIMR_CAPTURE_Pos              _U_(0)                                               /**< (CSI2DC_DPIMR) Data Pipe Capture Done Interrupt Mask Position */
#define CSI2DC_DPIMR_CAPTURE_Msk              (_U_(0x1) << CSI2DC_DPIMR_CAPTURE_Pos)               /**< (CSI2DC_DPIMR) Data Pipe Capture Done Interrupt Mask Mask */
#define CSI2DC_DPIMR_CAPTURE(value)           (CSI2DC_DPIMR_CAPTURE_Msk & ((value) << CSI2DC_DPIMR_CAPTURE_Pos))
#define CSI2DC_DPIMR_RXRDY0_Pos               _U_(1)                                               /**< (CSI2DC_DPIMR) Bank 0, Packet Received Interrupt Mask Position */
#define CSI2DC_DPIMR_RXRDY0_Msk               (_U_(0x1) << CSI2DC_DPIMR_RXRDY0_Pos)                /**< (CSI2DC_DPIMR) Bank 0, Packet Received Interrupt Mask Mask */
#define CSI2DC_DPIMR_RXRDY0(value)            (CSI2DC_DPIMR_RXRDY0_Msk & ((value) << CSI2DC_DPIMR_RXRDY0_Pos))
#define CSI2DC_DPIMR_RXRDY1_Pos               _U_(2)                                               /**< (CSI2DC_DPIMR) Bank 1, Packet Received Interrupt Mask Position */
#define CSI2DC_DPIMR_RXRDY1_Msk               (_U_(0x1) << CSI2DC_DPIMR_RXRDY1_Pos)                /**< (CSI2DC_DPIMR) Bank 1, Packet Received Interrupt Mask Mask */
#define CSI2DC_DPIMR_RXRDY1(value)            (CSI2DC_DPIMR_RXRDY1_Msk & ((value) << CSI2DC_DPIMR_RXRDY1_Pos))
#define CSI2DC_DPIMR_RXOVF0_Pos               _U_(3)                                               /**< (CSI2DC_DPIMR) Bank 0, Packet Overflow Interrupt Mask Position */
#define CSI2DC_DPIMR_RXOVF0_Msk               (_U_(0x1) << CSI2DC_DPIMR_RXOVF0_Pos)                /**< (CSI2DC_DPIMR) Bank 0, Packet Overflow Interrupt Mask Mask */
#define CSI2DC_DPIMR_RXOVF0(value)            (CSI2DC_DPIMR_RXOVF0_Msk & ((value) << CSI2DC_DPIMR_RXOVF0_Pos))
#define CSI2DC_DPIMR_RXOVF1_Pos               _U_(4)                                               /**< (CSI2DC_DPIMR) Bank 1, Packet Overflow Interrupt Mask Position */
#define CSI2DC_DPIMR_RXOVF1_Msk               (_U_(0x1) << CSI2DC_DPIMR_RXOVF1_Pos)                /**< (CSI2DC_DPIMR) Bank 1, Packet Overflow Interrupt Mask Mask */
#define CSI2DC_DPIMR_RXOVF1(value)            (CSI2DC_DPIMR_RXOVF1_Msk & ((value) << CSI2DC_DPIMR_RXOVF1_Pos))
#define CSI2DC_DPIMR_DATOVF_Pos               _U_(5)                                               /**< (CSI2DC_DPIMR) Data Pipe Overflow Interrupt Mask Position */
#define CSI2DC_DPIMR_DATOVF_Msk               (_U_(0x1) << CSI2DC_DPIMR_DATOVF_Pos)                /**< (CSI2DC_DPIMR) Data Pipe Overflow Interrupt Mask Mask */
#define CSI2DC_DPIMR_DATOVF(value)            (CSI2DC_DPIMR_DATOVF_Msk & ((value) << CSI2DC_DPIMR_DATOVF_Pos))
#define CSI2DC_DPIMR_STE_Pos                  _U_(6)                                               /**< (CSI2DC_DPIMR) Shorter Than Expected Packet Received Interrupt Mask Position */
#define CSI2DC_DPIMR_STE_Msk                  (_U_(0x1) << CSI2DC_DPIMR_STE_Pos)                   /**< (CSI2DC_DPIMR) Shorter Than Expected Packet Received Interrupt Mask Mask */
#define CSI2DC_DPIMR_STE(value)               (CSI2DC_DPIMR_STE_Msk & ((value) << CSI2DC_DPIMR_STE_Pos))
#define CSI2DC_DPIMR_LTE_Pos                  _U_(7)                                               /**< (CSI2DC_DPIMR) Longer Than Expected Packet Received Interrupt Mask Position */
#define CSI2DC_DPIMR_LTE_Msk                  (_U_(0x1) << CSI2DC_DPIMR_LTE_Pos)                   /**< (CSI2DC_DPIMR) Longer Than Expected Packet Received Interrupt Mask Mask */
#define CSI2DC_DPIMR_LTE(value)               (CSI2DC_DPIMR_LTE_Msk & ((value) << CSI2DC_DPIMR_LTE_Pos))
#define CSI2DC_DPIMR_Msk                      _U_(0x000000FF)                                      /**< (CSI2DC_DPIMR) Register Mask  */

#define CSI2DC_DPIMR_RXRDY_Pos                _U_(1)                                               /**< (CSI2DC_DPIMR Position) Bank x, Packet Received Interrupt Mask */
#define CSI2DC_DPIMR_RXRDY_Msk                (_U_(0x3) << CSI2DC_DPIMR_RXRDY_Pos)                 /**< (CSI2DC_DPIMR Mask) RXRDY */
#define CSI2DC_DPIMR_RXRDY(value)             (CSI2DC_DPIMR_RXRDY_Msk & ((value) << CSI2DC_DPIMR_RXRDY_Pos)) 
#define CSI2DC_DPIMR_RXOVF_Pos                _U_(3)                                               /**< (CSI2DC_DPIMR Position) Bank x, Packet Overflow Interrupt Mask */
#define CSI2DC_DPIMR_RXOVF_Msk                (_U_(0x3) << CSI2DC_DPIMR_RXOVF_Pos)                 /**< (CSI2DC_DPIMR Mask) RXOVF */
#define CSI2DC_DPIMR_RXOVF(value)             (CSI2DC_DPIMR_RXOVF_Msk & ((value) << CSI2DC_DPIMR_RXOVF_Pos)) 

/* -------- CSI2DC_DPISR : (CSI2DC Offset: 0xD4) ( R/ 32) Data Pipe Interrupt Status Register -------- */
#define CSI2DC_DPISR_RESETVALUE               _U_(0x00)                                            /**<  (CSI2DC_DPISR) Data Pipe Interrupt Status Register  Reset Value */

#define CSI2DC_DPISR_CAPTURE_Pos              _U_(0)                                               /**< (CSI2DC_DPISR) Captured Frame Position */
#define CSI2DC_DPISR_CAPTURE_Msk              (_U_(0x1) << CSI2DC_DPISR_CAPTURE_Pos)               /**< (CSI2DC_DPISR) Captured Frame Mask */
#define CSI2DC_DPISR_CAPTURE(value)           (CSI2DC_DPISR_CAPTURE_Msk & ((value) << CSI2DC_DPISR_CAPTURE_Pos))
#define   CSI2DC_DPISR_CAPTURE_0_Val          _U_(0x0)                                             /**< (CSI2DC_DPISR) No frame captured on the data pipe interface since the last clear operation of the register.  */
#define   CSI2DC_DPISR_CAPTURE_1_Val          _U_(0x1)                                             /**< (CSI2DC_DPISR) A new frame has been captured in the data pipe.  */
#define CSI2DC_DPISR_CAPTURE_0                (CSI2DC_DPISR_CAPTURE_0_Val << CSI2DC_DPISR_CAPTURE_Pos) /**< (CSI2DC_DPISR) No frame captured on the data pipe interface since the last clear operation of the register. Position  */
#define CSI2DC_DPISR_CAPTURE_1                (CSI2DC_DPISR_CAPTURE_1_Val << CSI2DC_DPISR_CAPTURE_Pos) /**< (CSI2DC_DPISR) A new frame has been captured in the data pipe. Position  */
#define CSI2DC_DPISR_RXRDY0_Pos               _U_(1)                                               /**< (CSI2DC_DPISR) Bank 0 Packet Received Position */
#define CSI2DC_DPISR_RXRDY0_Msk               (_U_(0x1) << CSI2DC_DPISR_RXRDY0_Pos)                /**< (CSI2DC_DPISR) Bank 0 Packet Received Mask */
#define CSI2DC_DPISR_RXRDY0(value)            (CSI2DC_DPISR_RXRDY0_Msk & ((value) << CSI2DC_DPISR_RXRDY0_Pos))
#define   CSI2DC_DPISR_RXRDY0_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPISR) No packet received in bank 0 since the last clear operation of the register.  */
#define   CSI2DC_DPISR_RXRDY0_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPISR) A new packet has been captured in the data pipe.  */
#define CSI2DC_DPISR_RXRDY0_0                 (CSI2DC_DPISR_RXRDY0_0_Val << CSI2DC_DPISR_RXRDY0_Pos) /**< (CSI2DC_DPISR) No packet received in bank 0 since the last clear operation of the register. Position  */
#define CSI2DC_DPISR_RXRDY0_1                 (CSI2DC_DPISR_RXRDY0_1_Val << CSI2DC_DPISR_RXRDY0_Pos) /**< (CSI2DC_DPISR) A new packet has been captured in the data pipe. Position  */
#define CSI2DC_DPISR_RXRDY1_Pos               _U_(2)                                               /**< (CSI2DC_DPISR) Bank 1 Packet Received Position */
#define CSI2DC_DPISR_RXRDY1_Msk               (_U_(0x1) << CSI2DC_DPISR_RXRDY1_Pos)                /**< (CSI2DC_DPISR) Bank 1 Packet Received Mask */
#define CSI2DC_DPISR_RXRDY1(value)            (CSI2DC_DPISR_RXRDY1_Msk & ((value) << CSI2DC_DPISR_RXRDY1_Pos))
#define   CSI2DC_DPISR_RXRDY1_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPISR) No packet received in bank 1 since the last clear operation of the register.  */
#define   CSI2DC_DPISR_RXRDY1_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPISR) A new packet has been captured in the data pipe.  */
#define CSI2DC_DPISR_RXRDY1_0                 (CSI2DC_DPISR_RXRDY1_0_Val << CSI2DC_DPISR_RXRDY1_Pos) /**< (CSI2DC_DPISR) No packet received in bank 1 since the last clear operation of the register. Position  */
#define CSI2DC_DPISR_RXRDY1_1                 (CSI2DC_DPISR_RXRDY1_1_Val << CSI2DC_DPISR_RXRDY1_Pos) /**< (CSI2DC_DPISR) A new packet has been captured in the data pipe. Position  */
#define CSI2DC_DPISR_RXOVF0_Pos               _U_(3)                                               /**< (CSI2DC_DPISR) Bank 0 Overflow Position */
#define CSI2DC_DPISR_RXOVF0_Msk               (_U_(0x1) << CSI2DC_DPISR_RXOVF0_Pos)                /**< (CSI2DC_DPISR) Bank 0 Overflow Mask */
#define CSI2DC_DPISR_RXOVF0(value)            (CSI2DC_DPISR_RXOVF0_Msk & ((value) << CSI2DC_DPISR_RXOVF0_Pos))
#define   CSI2DC_DPISR_RXOVF0_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPISR) No overflow detected.  */
#define   CSI2DC_DPISR_RXOVF0_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPISR) An overflow occurred in bank 0.  */
#define CSI2DC_DPISR_RXOVF0_0                 (CSI2DC_DPISR_RXOVF0_0_Val << CSI2DC_DPISR_RXOVF0_Pos) /**< (CSI2DC_DPISR) No overflow detected. Position  */
#define CSI2DC_DPISR_RXOVF0_1                 (CSI2DC_DPISR_RXOVF0_1_Val << CSI2DC_DPISR_RXOVF0_Pos) /**< (CSI2DC_DPISR) An overflow occurred in bank 0. Position  */
#define CSI2DC_DPISR_RXOVF1_Pos               _U_(4)                                               /**< (CSI2DC_DPISR) Bank 1 Overflow Position */
#define CSI2DC_DPISR_RXOVF1_Msk               (_U_(0x1) << CSI2DC_DPISR_RXOVF1_Pos)                /**< (CSI2DC_DPISR) Bank 1 Overflow Mask */
#define CSI2DC_DPISR_RXOVF1(value)            (CSI2DC_DPISR_RXOVF1_Msk & ((value) << CSI2DC_DPISR_RXOVF1_Pos))
#define   CSI2DC_DPISR_RXOVF1_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPISR) No overflow detected.  */
#define   CSI2DC_DPISR_RXOVF1_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPISR) An overflow occurred in bank 1.  */
#define CSI2DC_DPISR_RXOVF1_0                 (CSI2DC_DPISR_RXOVF1_0_Val << CSI2DC_DPISR_RXOVF1_Pos) /**< (CSI2DC_DPISR) No overflow detected. Position  */
#define CSI2DC_DPISR_RXOVF1_1                 (CSI2DC_DPISR_RXOVF1_1_Val << CSI2DC_DPISR_RXOVF1_Pos) /**< (CSI2DC_DPISR) An overflow occurred in bank 1. Position  */
#define CSI2DC_DPISR_DATOVF_Pos               _U_(5)                                               /**< (CSI2DC_DPISR) Data Overflow Position */
#define CSI2DC_DPISR_DATOVF_Msk               (_U_(0x1) << CSI2DC_DPISR_DATOVF_Pos)                /**< (CSI2DC_DPISR) Data Overflow Mask */
#define CSI2DC_DPISR_DATOVF(value)            (CSI2DC_DPISR_DATOVF_Msk & ((value) << CSI2DC_DPISR_DATOVF_Pos))
#define   CSI2DC_DPISR_DATOVF_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPISR) No overflow detected.  */
#define   CSI2DC_DPISR_DATOVF_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPISR) Data overflow in the clock domain crossing FIFO.  */
#define CSI2DC_DPISR_DATOVF_0                 (CSI2DC_DPISR_DATOVF_0_Val << CSI2DC_DPISR_DATOVF_Pos) /**< (CSI2DC_DPISR) No overflow detected. Position  */
#define CSI2DC_DPISR_DATOVF_1                 (CSI2DC_DPISR_DATOVF_1_Val << CSI2DC_DPISR_DATOVF_Pos) /**< (CSI2DC_DPISR) Data overflow in the clock domain crossing FIFO. Position  */
#define CSI2DC_DPISR_STE_Pos                  _U_(6)                                               /**< (CSI2DC_DPISR) Packet Shorter Than Expected Position */
#define CSI2DC_DPISR_STE_Msk                  (_U_(0x1) << CSI2DC_DPISR_STE_Pos)                   /**< (CSI2DC_DPISR) Packet Shorter Than Expected Mask */
#define CSI2DC_DPISR_STE(value)               (CSI2DC_DPISR_STE_Msk & ((value) << CSI2DC_DPISR_STE_Pos))
#define   CSI2DC_DPISR_STE_0_Val              _U_(0x0)                                             /**< (CSI2DC_DPISR) No STE packet detected.  */
#define   CSI2DC_DPISR_STE_1_Val              _U_(0x1)                                             /**< (CSI2DC_DPISR) A packet has been received but the actual length is shorter that the packet word count value.  */
#define CSI2DC_DPISR_STE_0                    (CSI2DC_DPISR_STE_0_Val << CSI2DC_DPISR_STE_Pos)     /**< (CSI2DC_DPISR) No STE packet detected. Position  */
#define CSI2DC_DPISR_STE_1                    (CSI2DC_DPISR_STE_1_Val << CSI2DC_DPISR_STE_Pos)     /**< (CSI2DC_DPISR) A packet has been received but the actual length is shorter that the packet word count value. Position  */
#define CSI2DC_DPISR_LTE_Pos                  _U_(7)                                               /**< (CSI2DC_DPISR) Packet Longer Than Expected Position */
#define CSI2DC_DPISR_LTE_Msk                  (_U_(0x1) << CSI2DC_DPISR_LTE_Pos)                   /**< (CSI2DC_DPISR) Packet Longer Than Expected Mask */
#define CSI2DC_DPISR_LTE(value)               (CSI2DC_DPISR_LTE_Msk & ((value) << CSI2DC_DPISR_LTE_Pos))
#define   CSI2DC_DPISR_LTE_0_Val              _U_(0x0)                                             /**< (CSI2DC_DPISR) No LTE packet detected.  */
#define   CSI2DC_DPISR_LTE_1_Val              _U_(0x1)                                             /**< (CSI2DC_DPISR) A packet has been received but the actual length is longer that the packet word count value.  */
#define CSI2DC_DPISR_LTE_0                    (CSI2DC_DPISR_LTE_0_Val << CSI2DC_DPISR_LTE_Pos)     /**< (CSI2DC_DPISR) No LTE packet detected. Position  */
#define CSI2DC_DPISR_LTE_1                    (CSI2DC_DPISR_LTE_1_Val << CSI2DC_DPISR_LTE_Pos)     /**< (CSI2DC_DPISR) A packet has been received but the actual length is longer that the packet word count value. Position  */
#define CSI2DC_DPISR_Msk                      _U_(0x000000FF)                                      /**< (CSI2DC_DPISR) Register Mask  */

#define CSI2DC_DPISR_RXRDY_Pos                _U_(1)                                               /**< (CSI2DC_DPISR Position) Bank x Packet Received */
#define CSI2DC_DPISR_RXRDY_Msk                (_U_(0x3) << CSI2DC_DPISR_RXRDY_Pos)                 /**< (CSI2DC_DPISR Mask) RXRDY */
#define CSI2DC_DPISR_RXRDY(value)             (CSI2DC_DPISR_RXRDY_Msk & ((value) << CSI2DC_DPISR_RXRDY_Pos)) 
#define CSI2DC_DPISR_RXOVF_Pos                _U_(3)                                               /**< (CSI2DC_DPISR Position) Bank x Overflow */
#define CSI2DC_DPISR_RXOVF_Msk                (_U_(0x3) << CSI2DC_DPISR_RXOVF_Pos)                 /**< (CSI2DC_DPISR Mask) RXOVF */
#define CSI2DC_DPISR_RXOVF(value)             (CSI2DC_DPISR_RXOVF_Msk & ((value) << CSI2DC_DPISR_RXOVF_Pos)) 

/* -------- CSI2DC_DPICR : (CSI2DC Offset: 0xD8) ( /W 32) Data Pipe Interrupt Clear Register -------- */
#define CSI2DC_DPICR_CAPTURE_Pos              _U_(0)                                               /**< (CSI2DC_DPICR) Captured Frame Interrupt Clear Register Position */
#define CSI2DC_DPICR_CAPTURE_Msk              (_U_(0x1) << CSI2DC_DPICR_CAPTURE_Pos)               /**< (CSI2DC_DPICR) Captured Frame Interrupt Clear Register Mask */
#define CSI2DC_DPICR_CAPTURE(value)           (CSI2DC_DPICR_CAPTURE_Msk & ((value) << CSI2DC_DPICR_CAPTURE_Pos))
#define   CSI2DC_DPICR_CAPTURE_0_Val          _U_(0x0)                                             /**< (CSI2DC_DPICR) No effect.  */
#define   CSI2DC_DPICR_CAPTURE_1_Val          _U_(0x1)                                             /**< (CSI2DC_DPICR) Clears the Captured Frame interrupt.  */
#define CSI2DC_DPICR_CAPTURE_0                (CSI2DC_DPICR_CAPTURE_0_Val << CSI2DC_DPICR_CAPTURE_Pos) /**< (CSI2DC_DPICR) No effect. Position  */
#define CSI2DC_DPICR_CAPTURE_1                (CSI2DC_DPICR_CAPTURE_1_Val << CSI2DC_DPICR_CAPTURE_Pos) /**< (CSI2DC_DPICR) Clears the Captured Frame interrupt. Position  */
#define CSI2DC_DPICR_RXRDY0_Pos               _U_(1)                                               /**< (CSI2DC_DPICR) Bank 0 Packet Received Interrupt Clear Register Position */
#define CSI2DC_DPICR_RXRDY0_Msk               (_U_(0x1) << CSI2DC_DPICR_RXRDY0_Pos)                /**< (CSI2DC_DPICR) Bank 0 Packet Received Interrupt Clear Register Mask */
#define CSI2DC_DPICR_RXRDY0(value)            (CSI2DC_DPICR_RXRDY0_Msk & ((value) << CSI2DC_DPICR_RXRDY0_Pos))
#define   CSI2DC_DPICR_RXRDY0_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPICR) No effect.  */
#define   CSI2DC_DPICR_RXRDY0_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPICR) Clears the Bank 0 Packet Received interrupt.  */
#define CSI2DC_DPICR_RXRDY0_0                 (CSI2DC_DPICR_RXRDY0_0_Val << CSI2DC_DPICR_RXRDY0_Pos) /**< (CSI2DC_DPICR) No effect. Position  */
#define CSI2DC_DPICR_RXRDY0_1                 (CSI2DC_DPICR_RXRDY0_1_Val << CSI2DC_DPICR_RXRDY0_Pos) /**< (CSI2DC_DPICR) Clears the Bank 0 Packet Received interrupt. Position  */
#define CSI2DC_DPICR_RXRDY1_Pos               _U_(2)                                               /**< (CSI2DC_DPICR) Bank 1 Packet Received Interrupt Clear Register Position */
#define CSI2DC_DPICR_RXRDY1_Msk               (_U_(0x1) << CSI2DC_DPICR_RXRDY1_Pos)                /**< (CSI2DC_DPICR) Bank 1 Packet Received Interrupt Clear Register Mask */
#define CSI2DC_DPICR_RXRDY1(value)            (CSI2DC_DPICR_RXRDY1_Msk & ((value) << CSI2DC_DPICR_RXRDY1_Pos))
#define   CSI2DC_DPICR_RXRDY1_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPICR) No effect.  */
#define   CSI2DC_DPICR_RXRDY1_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPICR) Clears the Bank 1 Packet Received interrupt.  */
#define CSI2DC_DPICR_RXRDY1_0                 (CSI2DC_DPICR_RXRDY1_0_Val << CSI2DC_DPICR_RXRDY1_Pos) /**< (CSI2DC_DPICR) No effect. Position  */
#define CSI2DC_DPICR_RXRDY1_1                 (CSI2DC_DPICR_RXRDY1_1_Val << CSI2DC_DPICR_RXRDY1_Pos) /**< (CSI2DC_DPICR) Clears the Bank 1 Packet Received interrupt. Position  */
#define CSI2DC_DPICR_RXOVF0_Pos               _U_(3)                                               /**< (CSI2DC_DPICR) Bank 0 Packet Overflow Interrupt Clear Register Position */
#define CSI2DC_DPICR_RXOVF0_Msk               (_U_(0x1) << CSI2DC_DPICR_RXOVF0_Pos)                /**< (CSI2DC_DPICR) Bank 0 Packet Overflow Interrupt Clear Register Mask */
#define CSI2DC_DPICR_RXOVF0(value)            (CSI2DC_DPICR_RXOVF0_Msk & ((value) << CSI2DC_DPICR_RXOVF0_Pos))
#define   CSI2DC_DPICR_RXOVF0_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPICR) No effect.  */
#define   CSI2DC_DPICR_RXOVF0_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPICR) Clears the Bank 0 Packet Overflow interrupt.  */
#define CSI2DC_DPICR_RXOVF0_0                 (CSI2DC_DPICR_RXOVF0_0_Val << CSI2DC_DPICR_RXOVF0_Pos) /**< (CSI2DC_DPICR) No effect. Position  */
#define CSI2DC_DPICR_RXOVF0_1                 (CSI2DC_DPICR_RXOVF0_1_Val << CSI2DC_DPICR_RXOVF0_Pos) /**< (CSI2DC_DPICR) Clears the Bank 0 Packet Overflow interrupt. Position  */
#define CSI2DC_DPICR_RXOVF1_Pos               _U_(4)                                               /**< (CSI2DC_DPICR) Bank 1 Packet Overflow Interrupt Clear Register Position */
#define CSI2DC_DPICR_RXOVF1_Msk               (_U_(0x1) << CSI2DC_DPICR_RXOVF1_Pos)                /**< (CSI2DC_DPICR) Bank 1 Packet Overflow Interrupt Clear Register Mask */
#define CSI2DC_DPICR_RXOVF1(value)            (CSI2DC_DPICR_RXOVF1_Msk & ((value) << CSI2DC_DPICR_RXOVF1_Pos))
#define   CSI2DC_DPICR_RXOVF1_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPICR) No effect.  */
#define   CSI2DC_DPICR_RXOVF1_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPICR) Clears the Bank 1 Packet Overflow interrupt.  */
#define CSI2DC_DPICR_RXOVF1_0                 (CSI2DC_DPICR_RXOVF1_0_Val << CSI2DC_DPICR_RXOVF1_Pos) /**< (CSI2DC_DPICR) No effect. Position  */
#define CSI2DC_DPICR_RXOVF1_1                 (CSI2DC_DPICR_RXOVF1_1_Val << CSI2DC_DPICR_RXOVF1_Pos) /**< (CSI2DC_DPICR) Clears the Bank 1 Packet Overflow interrupt. Position  */
#define CSI2DC_DPICR_DATOVF_Pos               _U_(5)                                               /**< (CSI2DC_DPICR) Data Overflow Interrupt Clear Register Position */
#define CSI2DC_DPICR_DATOVF_Msk               (_U_(0x1) << CSI2DC_DPICR_DATOVF_Pos)                /**< (CSI2DC_DPICR) Data Overflow Interrupt Clear Register Mask */
#define CSI2DC_DPICR_DATOVF(value)            (CSI2DC_DPICR_DATOVF_Msk & ((value) << CSI2DC_DPICR_DATOVF_Pos))
#define   CSI2DC_DPICR_DATOVF_0_Val           _U_(0x0)                                             /**< (CSI2DC_DPICR) No effect.  */
#define   CSI2DC_DPICR_DATOVF_1_Val           _U_(0x1)                                             /**< (CSI2DC_DPICR) Clears the Data Overflow interrupt.  */
#define CSI2DC_DPICR_DATOVF_0                 (CSI2DC_DPICR_DATOVF_0_Val << CSI2DC_DPICR_DATOVF_Pos) /**< (CSI2DC_DPICR) No effect. Position  */
#define CSI2DC_DPICR_DATOVF_1                 (CSI2DC_DPICR_DATOVF_1_Val << CSI2DC_DPICR_DATOVF_Pos) /**< (CSI2DC_DPICR) Clears the Data Overflow interrupt. Position  */
#define CSI2DC_DPICR_STE_Pos                  _U_(6)                                               /**< (CSI2DC_DPICR) Packet Shorter Than Expected Interrupt Clear Register Position */
#define CSI2DC_DPICR_STE_Msk                  (_U_(0x1) << CSI2DC_DPICR_STE_Pos)                   /**< (CSI2DC_DPICR) Packet Shorter Than Expected Interrupt Clear Register Mask */
#define CSI2DC_DPICR_STE(value)               (CSI2DC_DPICR_STE_Msk & ((value) << CSI2DC_DPICR_STE_Pos))
#define   CSI2DC_DPICR_STE_0_Val              _U_(0x0)                                             /**< (CSI2DC_DPICR) No effect.  */
#define   CSI2DC_DPICR_STE_1_Val              _U_(0x1)                                             /**< (CSI2DC_DPICR) Clears the STE interrupt.  */
#define CSI2DC_DPICR_STE_0                    (CSI2DC_DPICR_STE_0_Val << CSI2DC_DPICR_STE_Pos)     /**< (CSI2DC_DPICR) No effect. Position  */
#define CSI2DC_DPICR_STE_1                    (CSI2DC_DPICR_STE_1_Val << CSI2DC_DPICR_STE_Pos)     /**< (CSI2DC_DPICR) Clears the STE interrupt. Position  */
#define CSI2DC_DPICR_LTE_Pos                  _U_(7)                                               /**< (CSI2DC_DPICR) Packet Longer Than Expected Interrupt Clear Register Position */
#define CSI2DC_DPICR_LTE_Msk                  (_U_(0x1) << CSI2DC_DPICR_LTE_Pos)                   /**< (CSI2DC_DPICR) Packet Longer Than Expected Interrupt Clear Register Mask */
#define CSI2DC_DPICR_LTE(value)               (CSI2DC_DPICR_LTE_Msk & ((value) << CSI2DC_DPICR_LTE_Pos))
#define   CSI2DC_DPICR_LTE_0_Val              _U_(0x0)                                             /**< (CSI2DC_DPICR) No effect.  */
#define   CSI2DC_DPICR_LTE_1_Val              _U_(0x1)                                             /**< (CSI2DC_DPICR) Clears the LTE interrupt.  */
#define CSI2DC_DPICR_LTE_0                    (CSI2DC_DPICR_LTE_0_Val << CSI2DC_DPICR_LTE_Pos)     /**< (CSI2DC_DPICR) No effect. Position  */
#define CSI2DC_DPICR_LTE_1                    (CSI2DC_DPICR_LTE_1_Val << CSI2DC_DPICR_LTE_Pos)     /**< (CSI2DC_DPICR) Clears the LTE interrupt. Position  */
#define CSI2DC_DPICR_Msk                      _U_(0x000000FF)                                      /**< (CSI2DC_DPICR) Register Mask  */

#define CSI2DC_DPICR_RXRDY_Pos                _U_(1)                                               /**< (CSI2DC_DPICR Position) Bank x Packet Received Interrupt Clear Register */
#define CSI2DC_DPICR_RXRDY_Msk                (_U_(0x3) << CSI2DC_DPICR_RXRDY_Pos)                 /**< (CSI2DC_DPICR Mask) RXRDY */
#define CSI2DC_DPICR_RXRDY(value)             (CSI2DC_DPICR_RXRDY_Msk & ((value) << CSI2DC_DPICR_RXRDY_Pos)) 
#define CSI2DC_DPICR_RXOVF_Pos                _U_(3)                                               /**< (CSI2DC_DPICR Position) Bank x Packet Overflow Interrupt Clear Register */
#define CSI2DC_DPICR_RXOVF_Msk                (_U_(0x3) << CSI2DC_DPICR_RXOVF_Pos)                 /**< (CSI2DC_DPICR Mask) RXOVF */
#define CSI2DC_DPICR_RXOVF(value)             (CSI2DC_DPICR_RXOVF_Msk & ((value) << CSI2DC_DPICR_RXOVF_Pos)) 

/* -------- CSI2DC_DPER : (CSI2DC Offset: 0xDC) (R/W 32) Data Pipe Enable Register -------- */
#define CSI2DC_DPER_RESETVALUE                _U_(0x00)                                            /**<  (CSI2DC_DPER) Data Pipe Enable Register  Reset Value */

#define CSI2DC_DPER_ENABLE_Pos                _U_(0)                                               /**< (CSI2DC_DPER) Data Pipe Enable Position */
#define CSI2DC_DPER_ENABLE_Msk                (_U_(0x1) << CSI2DC_DPER_ENABLE_Pos)                 /**< (CSI2DC_DPER) Data Pipe Enable Mask */
#define CSI2DC_DPER_ENABLE(value)             (CSI2DC_DPER_ENABLE_Msk & ((value) << CSI2DC_DPER_ENABLE_Pos))
#define   CSI2DC_DPER_ENABLE_0_Val            _U_(0x0)                                             /**< (CSI2DC_DPER) Data pipe disabled.  */
#define   CSI2DC_DPER_ENABLE_1_Val            _U_(0x1)                                             /**< (CSI2DC_DPER) Data pipe enabled.  */
#define CSI2DC_DPER_ENABLE_0                  (CSI2DC_DPER_ENABLE_0_Val << CSI2DC_DPER_ENABLE_Pos) /**< (CSI2DC_DPER) Data pipe disabled. Position  */
#define CSI2DC_DPER_ENABLE_1                  (CSI2DC_DPER_ENABLE_1_Val << CSI2DC_DPER_ENABLE_Pos) /**< (CSI2DC_DPER) Data pipe enabled. Position  */
#define CSI2DC_DPER_Msk                       _U_(0x00000001)                                      /**< (CSI2DC_DPER) Register Mask  */


/* -------- CSI2DC_DPCFGR : (CSI2DC Offset: 0xE0) (R/W 32) Data Pipe Configuration Register -------- */
#define CSI2DC_DPCFGR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_DPCFGR) Data Pipe Configuration Register  Reset Value */

#define CSI2DC_DPCFGR_DT_Pos                  _U_(0)                                               /**< (CSI2DC_DPCFGR) Data Type for Data Pipe Position */
#define CSI2DC_DPCFGR_DT_Msk                  (_U_(0x3F) << CSI2DC_DPCFGR_DT_Pos)                  /**< (CSI2DC_DPCFGR) Data Type for Data Pipe Mask */
#define CSI2DC_DPCFGR_DT(value)               (CSI2DC_DPCFGR_DT_Msk & ((value) << CSI2DC_DPCFGR_DT_Pos))
#define CSI2DC_DPCFGR_VC_Pos                  _U_(6)                                               /**< (CSI2DC_DPCFGR) Virtual Channel for Data Pipe Position */
#define CSI2DC_DPCFGR_VC_Msk                  (_U_(0x3) << CSI2DC_DPCFGR_VC_Pos)                   /**< (CSI2DC_DPCFGR) Virtual Channel for Data Pipe Mask */
#define CSI2DC_DPCFGR_VC(value)               (CSI2DC_DPCFGR_VC_Msk & ((value) << CSI2DC_DPCFGR_VC_Pos))
#define CSI2DC_DPCFGR_BO_Pos                  _U_(16)                                              /**< (CSI2DC_DPCFGR) Bank Offset Position */
#define CSI2DC_DPCFGR_BO_Msk                  (_U_(0x7FF) << CSI2DC_DPCFGR_BO_Pos)                 /**< (CSI2DC_DPCFGR) Bank Offset Mask */
#define CSI2DC_DPCFGR_BO(value)               (CSI2DC_DPCFGR_BO_Msk & ((value) << CSI2DC_DPCFGR_BO_Pos))
#define CSI2DC_DPCFGR_Msk                     _U_(0x07FF00FF)                                      /**< (CSI2DC_DPCFGR) Register Mask  */


/* -------- CSI2DC_DPDCR : (CSI2DC Offset: 0xE4) (R/W 32) Data Pipe DMA Configuration Register -------- */
#define CSI2DC_DPDCR_RESETVALUE               _U_(0x00)                                            /**<  (CSI2DC_DPDCR) Data Pipe DMA Configuration Register  Reset Value */

#define CSI2DC_DPDCR_DMA_Pos                  _U_(0)                                               /**< (CSI2DC_DPDCR) DMA Mode Enabled Position */
#define CSI2DC_DPDCR_DMA_Msk                  (_U_(0x1) << CSI2DC_DPDCR_DMA_Pos)                   /**< (CSI2DC_DPDCR) DMA Mode Enabled Mask */
#define CSI2DC_DPDCR_DMA(value)               (CSI2DC_DPDCR_DMA_Msk & ((value) << CSI2DC_DPDCR_DMA_Pos))
#define   CSI2DC_DPDCR_DMA_0_Val              _U_(0x0)                                             /**< (CSI2DC_DPDCR) DMA slave interface is disabled.  */
#define   CSI2DC_DPDCR_DMA_1_Val              _U_(0x1)                                             /**< (CSI2DC_DPDCR) DMA slave interface is enabled.  */
#define CSI2DC_DPDCR_DMA_0                    (CSI2DC_DPDCR_DMA_0_Val << CSI2DC_DPDCR_DMA_Pos)     /**< (CSI2DC_DPDCR) DMA slave interface is disabled. Position  */
#define CSI2DC_DPDCR_DMA_1                    (CSI2DC_DPDCR_DMA_1_Val << CSI2DC_DPDCR_DMA_Pos)     /**< (CSI2DC_DPDCR) DMA slave interface is enabled. Position  */
#define CSI2DC_DPDCR_CSIZE_Pos                _U_(4)                                               /**< (CSI2DC_DPDCR) DMA Chunk Size Position */
#define CSI2DC_DPDCR_CSIZE_Msk                (_U_(0x7) << CSI2DC_DPDCR_CSIZE_Pos)                 /**< (CSI2DC_DPDCR) DMA Chunk Size Mask */
#define CSI2DC_DPDCR_CSIZE(value)             (CSI2DC_DPDCR_CSIZE_Msk & ((value) << CSI2DC_DPDCR_CSIZE_Pos))
#define   CSI2DC_DPDCR_CSIZE_CHK_1_Val        _U_(0x0)                                             /**< (CSI2DC_DPDCR) 1 data transferred  */
#define   CSI2DC_DPDCR_CSIZE_CHK_2_Val        _U_(0x1)                                             /**< (CSI2DC_DPDCR) 2 data transferred  */
#define   CSI2DC_DPDCR_CSIZE_CHK_4_Val        _U_(0x2)                                             /**< (CSI2DC_DPDCR) 4 data transferred  */
#define   CSI2DC_DPDCR_CSIZE_CHK_8_Val        _U_(0x3)                                             /**< (CSI2DC_DPDCR) 8 data transferred  */
#define   CSI2DC_DPDCR_CSIZE_CHK_16_Val       _U_(0x4)                                             /**< (CSI2DC_DPDCR) 16 data transferred  */
#define CSI2DC_DPDCR_CSIZE_CHK_1              (CSI2DC_DPDCR_CSIZE_CHK_1_Val << CSI2DC_DPDCR_CSIZE_Pos) /**< (CSI2DC_DPDCR) 1 data transferred Position  */
#define CSI2DC_DPDCR_CSIZE_CHK_2              (CSI2DC_DPDCR_CSIZE_CHK_2_Val << CSI2DC_DPDCR_CSIZE_Pos) /**< (CSI2DC_DPDCR) 2 data transferred Position  */
#define CSI2DC_DPDCR_CSIZE_CHK_4              (CSI2DC_DPDCR_CSIZE_CHK_4_Val << CSI2DC_DPDCR_CSIZE_Pos) /**< (CSI2DC_DPDCR) 4 data transferred Position  */
#define CSI2DC_DPDCR_CSIZE_CHK_8              (CSI2DC_DPDCR_CSIZE_CHK_8_Val << CSI2DC_DPDCR_CSIZE_Pos) /**< (CSI2DC_DPDCR) 8 data transferred Position  */
#define CSI2DC_DPDCR_CSIZE_CHK_16             (CSI2DC_DPDCR_CSIZE_CHK_16_Val << CSI2DC_DPDCR_CSIZE_Pos) /**< (CSI2DC_DPDCR) 16 data transferred Position  */
#define CSI2DC_DPDCR_TC_Pos                   _U_(16)                                              /**< (CSI2DC_DPDCR) DMA Transfer Count Position */
#define CSI2DC_DPDCR_TC_Msk                   (_U_(0xFFFF) << CSI2DC_DPDCR_TC_Pos)                 /**< (CSI2DC_DPDCR) DMA Transfer Count Mask */
#define CSI2DC_DPDCR_TC(value)                (CSI2DC_DPDCR_TC_Msk & ((value) << CSI2DC_DPDCR_TC_Pos))
#define CSI2DC_DPDCR_Msk                      _U_(0xFFFF0071)                                      /**< (CSI2DC_DPDCR) Register Mask  */


/* -------- CSI2DC_VPIER : (CSI2DC Offset: 0xE8) ( /W 32) Video Pipe Interrupt Enable Register -------- */
#define CSI2DC_VPIER_CAPTURE_Pos              _U_(0)                                               /**< (CSI2DC_VPIER) Video Pipeline Capture Interrupt Enable Position */
#define CSI2DC_VPIER_CAPTURE_Msk              (_U_(0x1) << CSI2DC_VPIER_CAPTURE_Pos)               /**< (CSI2DC_VPIER) Video Pipeline Capture Interrupt Enable Mask */
#define CSI2DC_VPIER_CAPTURE(value)           (CSI2DC_VPIER_CAPTURE_Msk & ((value) << CSI2DC_VPIER_CAPTURE_Pos))
#define CSI2DC_VPIER_RATEOVF_Pos              _U_(1)                                               /**< (CSI2DC_VPIER) Rate Buffer Overflow Interrupt Enable Position */
#define CSI2DC_VPIER_RATEOVF_Msk              (_U_(0x1) << CSI2DC_VPIER_RATEOVF_Pos)               /**< (CSI2DC_VPIER) Rate Buffer Overflow Interrupt Enable Mask */
#define CSI2DC_VPIER_RATEOVF(value)           (CSI2DC_VPIER_RATEOVF_Msk & ((value) << CSI2DC_VPIER_RATEOVF_Pos))
#define CSI2DC_VPIER_CTLOVF_Pos               _U_(2)                                               /**< (CSI2DC_VPIER) Control Buffer Overflow Interrupt Enable Position */
#define CSI2DC_VPIER_CTLOVF_Msk               (_U_(0x1) << CSI2DC_VPIER_CTLOVF_Pos)                /**< (CSI2DC_VPIER) Control Buffer Overflow Interrupt Enable Mask */
#define CSI2DC_VPIER_CTLOVF(value)            (CSI2DC_VPIER_CTLOVF_Msk & ((value) << CSI2DC_VPIER_CTLOVF_Pos))
#define CSI2DC_VPIER_STE_Pos                  _U_(3)                                               /**< (CSI2DC_VPIER) Packet Shorter Than Expected Interrupt Enable Position */
#define CSI2DC_VPIER_STE_Msk                  (_U_(0x1) << CSI2DC_VPIER_STE_Pos)                   /**< (CSI2DC_VPIER) Packet Shorter Than Expected Interrupt Enable Mask */
#define CSI2DC_VPIER_STE(value)               (CSI2DC_VPIER_STE_Msk & ((value) << CSI2DC_VPIER_STE_Pos))
#define CSI2DC_VPIER_LTE_Pos                  _U_(4)                                               /**< (CSI2DC_VPIER) Packet Longer Than Expected Interrupt Enable Position */
#define CSI2DC_VPIER_LTE_Msk                  (_U_(0x1) << CSI2DC_VPIER_LTE_Pos)                   /**< (CSI2DC_VPIER) Packet Longer Than Expected Interrupt Enable Mask */
#define CSI2DC_VPIER_LTE(value)               (CSI2DC_VPIER_LTE_Msk & ((value) << CSI2DC_VPIER_LTE_Pos))
#define CSI2DC_VPIER_PKTOVF_Pos               _U_(5)                                               /**< (CSI2DC_VPIER) Packet Overflow For Video Pipe Interrupt Enable Position */
#define CSI2DC_VPIER_PKTOVF_Msk               (_U_(0x1) << CSI2DC_VPIER_PKTOVF_Pos)                /**< (CSI2DC_VPIER) Packet Overflow For Video Pipe Interrupt Enable Mask */
#define CSI2DC_VPIER_PKTOVF(value)            (CSI2DC_VPIER_PKTOVF_Msk & ((value) << CSI2DC_VPIER_PKTOVF_Pos))
#define CSI2DC_VPIER_Msk                      _U_(0x0000003F)                                      /**< (CSI2DC_VPIER) Register Mask  */


/* -------- CSI2DC_VPIDR : (CSI2DC Offset: 0xEC) ( /W 32) Video Pipe Interrupt Disable Register -------- */
#define CSI2DC_VPIDR_CAPTURE_Pos              _U_(0)                                               /**< (CSI2DC_VPIDR) Video Pipeline Capture Interrupt Disable Position */
#define CSI2DC_VPIDR_CAPTURE_Msk              (_U_(0x1) << CSI2DC_VPIDR_CAPTURE_Pos)               /**< (CSI2DC_VPIDR) Video Pipeline Capture Interrupt Disable Mask */
#define CSI2DC_VPIDR_CAPTURE(value)           (CSI2DC_VPIDR_CAPTURE_Msk & ((value) << CSI2DC_VPIDR_CAPTURE_Pos))
#define CSI2DC_VPIDR_RATEOVF_Pos              _U_(1)                                               /**< (CSI2DC_VPIDR) Rate Buffer Overflow Interrupt Disable Position */
#define CSI2DC_VPIDR_RATEOVF_Msk              (_U_(0x1) << CSI2DC_VPIDR_RATEOVF_Pos)               /**< (CSI2DC_VPIDR) Rate Buffer Overflow Interrupt Disable Mask */
#define CSI2DC_VPIDR_RATEOVF(value)           (CSI2DC_VPIDR_RATEOVF_Msk & ((value) << CSI2DC_VPIDR_RATEOVF_Pos))
#define CSI2DC_VPIDR_CTLOVF_Pos               _U_(2)                                               /**< (CSI2DC_VPIDR) Control Buffer Overflow Interrupt Disable Position */
#define CSI2DC_VPIDR_CTLOVF_Msk               (_U_(0x1) << CSI2DC_VPIDR_CTLOVF_Pos)                /**< (CSI2DC_VPIDR) Control Buffer Overflow Interrupt Disable Mask */
#define CSI2DC_VPIDR_CTLOVF(value)            (CSI2DC_VPIDR_CTLOVF_Msk & ((value) << CSI2DC_VPIDR_CTLOVF_Pos))
#define CSI2DC_VPIDR_STE_Pos                  _U_(3)                                               /**< (CSI2DC_VPIDR) Packet Shorter Than Expected Interrupt Disable Position */
#define CSI2DC_VPIDR_STE_Msk                  (_U_(0x1) << CSI2DC_VPIDR_STE_Pos)                   /**< (CSI2DC_VPIDR) Packet Shorter Than Expected Interrupt Disable Mask */
#define CSI2DC_VPIDR_STE(value)               (CSI2DC_VPIDR_STE_Msk & ((value) << CSI2DC_VPIDR_STE_Pos))
#define CSI2DC_VPIDR_LTE_Pos                  _U_(4)                                               /**< (CSI2DC_VPIDR) Packet Longer Than Expected Interrupt Disable Position */
#define CSI2DC_VPIDR_LTE_Msk                  (_U_(0x1) << CSI2DC_VPIDR_LTE_Pos)                   /**< (CSI2DC_VPIDR) Packet Longer Than Expected Interrupt Disable Mask */
#define CSI2DC_VPIDR_LTE(value)               (CSI2DC_VPIDR_LTE_Msk & ((value) << CSI2DC_VPIDR_LTE_Pos))
#define CSI2DC_VPIDR_PKTOVF_Pos               _U_(5)                                               /**< (CSI2DC_VPIDR) Packet Overflow For Video Pipe Interrupt Disable Position */
#define CSI2DC_VPIDR_PKTOVF_Msk               (_U_(0x1) << CSI2DC_VPIDR_PKTOVF_Pos)                /**< (CSI2DC_VPIDR) Packet Overflow For Video Pipe Interrupt Disable Mask */
#define CSI2DC_VPIDR_PKTOVF(value)            (CSI2DC_VPIDR_PKTOVF_Msk & ((value) << CSI2DC_VPIDR_PKTOVF_Pos))
#define CSI2DC_VPIDR_Msk                      _U_(0x0000003F)                                      /**< (CSI2DC_VPIDR) Register Mask  */


/* -------- CSI2DC_VPIMR : (CSI2DC Offset: 0xF0) ( R/ 32) Video Pipe Interrupt Mask Register -------- */
#define CSI2DC_VPIMR_RESETVALUE               _U_(0x00)                                            /**<  (CSI2DC_VPIMR) Video Pipe Interrupt Mask Register  Reset Value */

#define CSI2DC_VPIMR_CAPTURE_Pos              _U_(0)                                               /**< (CSI2DC_VPIMR) Video Pipeline Capture Interrupt Mask Position */
#define CSI2DC_VPIMR_CAPTURE_Msk              (_U_(0x1) << CSI2DC_VPIMR_CAPTURE_Pos)               /**< (CSI2DC_VPIMR) Video Pipeline Capture Interrupt Mask Mask */
#define CSI2DC_VPIMR_CAPTURE(value)           (CSI2DC_VPIMR_CAPTURE_Msk & ((value) << CSI2DC_VPIMR_CAPTURE_Pos))
#define CSI2DC_VPIMR_RATEOVF_Pos              _U_(1)                                               /**< (CSI2DC_VPIMR) Rate Buffer Overflow Interrupt Mask Position */
#define CSI2DC_VPIMR_RATEOVF_Msk              (_U_(0x1) << CSI2DC_VPIMR_RATEOVF_Pos)               /**< (CSI2DC_VPIMR) Rate Buffer Overflow Interrupt Mask Mask */
#define CSI2DC_VPIMR_RATEOVF(value)           (CSI2DC_VPIMR_RATEOVF_Msk & ((value) << CSI2DC_VPIMR_RATEOVF_Pos))
#define CSI2DC_VPIMR_CTLOVF_Pos               _U_(2)                                               /**< (CSI2DC_VPIMR) Control Buffer Overflow Interrupt Mask Position */
#define CSI2DC_VPIMR_CTLOVF_Msk               (_U_(0x1) << CSI2DC_VPIMR_CTLOVF_Pos)                /**< (CSI2DC_VPIMR) Control Buffer Overflow Interrupt Mask Mask */
#define CSI2DC_VPIMR_CTLOVF(value)            (CSI2DC_VPIMR_CTLOVF_Msk & ((value) << CSI2DC_VPIMR_CTLOVF_Pos))
#define CSI2DC_VPIMR_STE_Pos                  _U_(3)                                               /**< (CSI2DC_VPIMR) Packet Shorter Than Expected Interrupt Mask Position */
#define CSI2DC_VPIMR_STE_Msk                  (_U_(0x1) << CSI2DC_VPIMR_STE_Pos)                   /**< (CSI2DC_VPIMR) Packet Shorter Than Expected Interrupt Mask Mask */
#define CSI2DC_VPIMR_STE(value)               (CSI2DC_VPIMR_STE_Msk & ((value) << CSI2DC_VPIMR_STE_Pos))
#define CSI2DC_VPIMR_LTE_Pos                  _U_(4)                                               /**< (CSI2DC_VPIMR) Packet Longer Than Expected Interrupt Mask Position */
#define CSI2DC_VPIMR_LTE_Msk                  (_U_(0x1) << CSI2DC_VPIMR_LTE_Pos)                   /**< (CSI2DC_VPIMR) Packet Longer Than Expected Interrupt Mask Mask */
#define CSI2DC_VPIMR_LTE(value)               (CSI2DC_VPIMR_LTE_Msk & ((value) << CSI2DC_VPIMR_LTE_Pos))
#define CSI2DC_VPIMR_PKTOVF_Pos               _U_(5)                                               /**< (CSI2DC_VPIMR) Packet Overflow For Video Pipe Interrupt Mask Position */
#define CSI2DC_VPIMR_PKTOVF_Msk               (_U_(0x1) << CSI2DC_VPIMR_PKTOVF_Pos)                /**< (CSI2DC_VPIMR) Packet Overflow For Video Pipe Interrupt Mask Mask */
#define CSI2DC_VPIMR_PKTOVF(value)            (CSI2DC_VPIMR_PKTOVF_Msk & ((value) << CSI2DC_VPIMR_PKTOVF_Pos))
#define CSI2DC_VPIMR_Msk                      _U_(0x0000003F)                                      /**< (CSI2DC_VPIMR) Register Mask  */


/* -------- CSI2DC_VPISR : (CSI2DC Offset: 0xF4) ( R/ 32) Video Pipe Interrupt Status Register -------- */
#define CSI2DC_VPISR_RESETVALUE               _U_(0x00)                                            /**<  (CSI2DC_VPISR) Video Pipe Interrupt Status Register  Reset Value */

#define CSI2DC_VPISR_CAPTURE_Pos              _U_(0)                                               /**< (CSI2DC_VPISR) Video Pipeline Capture Status Position */
#define CSI2DC_VPISR_CAPTURE_Msk              (_U_(0x1) << CSI2DC_VPISR_CAPTURE_Pos)               /**< (CSI2DC_VPISR) Video Pipeline Capture Status Mask */
#define CSI2DC_VPISR_CAPTURE(value)           (CSI2DC_VPISR_CAPTURE_Msk & ((value) << CSI2DC_VPISR_CAPTURE_Pos))
#define   CSI2DC_VPISR_CAPTURE_0_Val          _U_(0x0)                                             /**< (CSI2DC_VPISR) No frame capture since the last read of the register.  */
#define   CSI2DC_VPISR_CAPTURE_1_Val          _U_(0x1)                                             /**< (CSI2DC_VPISR) A frame has been captured in the video pipeline.  */
#define CSI2DC_VPISR_CAPTURE_0                (CSI2DC_VPISR_CAPTURE_0_Val << CSI2DC_VPISR_CAPTURE_Pos) /**< (CSI2DC_VPISR) No frame capture since the last read of the register. Position  */
#define CSI2DC_VPISR_CAPTURE_1                (CSI2DC_VPISR_CAPTURE_1_Val << CSI2DC_VPISR_CAPTURE_Pos) /**< (CSI2DC_VPISR) A frame has been captured in the video pipeline. Position  */
#define CSI2DC_VPISR_RATEOVF_Pos              _U_(1)                                               /**< (CSI2DC_VPISR) Rate Buffer Overflow Interrupt Mask Position */
#define CSI2DC_VPISR_RATEOVF_Msk              (_U_(0x1) << CSI2DC_VPISR_RATEOVF_Pos)               /**< (CSI2DC_VPISR) Rate Buffer Overflow Interrupt Mask Mask */
#define CSI2DC_VPISR_RATEOVF(value)           (CSI2DC_VPISR_RATEOVF_Msk & ((value) << CSI2DC_VPISR_RATEOVF_Pos))
#define   CSI2DC_VPISR_RATEOVF_0_Val          _U_(0x0)                                             /**< (CSI2DC_VPISR) No Rate Buffer Overflow since the last read of the register  */
#define   CSI2DC_VPISR_RATEOVF_1_Val          _U_(0x1)                                             /**< (CSI2DC_VPISR) A Rate Buffer Overflow has been detected.  */
#define CSI2DC_VPISR_RATEOVF_0                (CSI2DC_VPISR_RATEOVF_0_Val << CSI2DC_VPISR_RATEOVF_Pos) /**< (CSI2DC_VPISR) No Rate Buffer Overflow since the last read of the register Position  */
#define CSI2DC_VPISR_RATEOVF_1                (CSI2DC_VPISR_RATEOVF_1_Val << CSI2DC_VPISR_RATEOVF_Pos) /**< (CSI2DC_VPISR) A Rate Buffer Overflow has been detected. Position  */
#define CSI2DC_VPISR_CTLOVF_Pos               _U_(2)                                               /**< (CSI2DC_VPISR) Control Buffer Overflow Interrupt Mask Position */
#define CSI2DC_VPISR_CTLOVF_Msk               (_U_(0x1) << CSI2DC_VPISR_CTLOVF_Pos)                /**< (CSI2DC_VPISR) Control Buffer Overflow Interrupt Mask Mask */
#define CSI2DC_VPISR_CTLOVF(value)            (CSI2DC_VPISR_CTLOVF_Msk & ((value) << CSI2DC_VPISR_CTLOVF_Pos))
#define   CSI2DC_VPISR_CTLOVF_0_Val           _U_(0x0)                                             /**< (CSI2DC_VPISR) No Control Buffer Overflow since the last read of the register.  */
#define   CSI2DC_VPISR_CTLOVF_1_Val           _U_(0x1)                                             /**< (CSI2DC_VPISR) A Control Buffer Overflow has been detected.  */
#define CSI2DC_VPISR_CTLOVF_0                 (CSI2DC_VPISR_CTLOVF_0_Val << CSI2DC_VPISR_CTLOVF_Pos) /**< (CSI2DC_VPISR) No Control Buffer Overflow since the last read of the register. Position  */
#define CSI2DC_VPISR_CTLOVF_1                 (CSI2DC_VPISR_CTLOVF_1_Val << CSI2DC_VPISR_CTLOVF_Pos) /**< (CSI2DC_VPISR) A Control Buffer Overflow has been detected. Position  */
#define CSI2DC_VPISR_STE_Pos                  _U_(3)                                               /**< (CSI2DC_VPISR) Packet Shorter Than Expected Interrupt Mask Position */
#define CSI2DC_VPISR_STE_Msk                  (_U_(0x1) << CSI2DC_VPISR_STE_Pos)                   /**< (CSI2DC_VPISR) Packet Shorter Than Expected Interrupt Mask Mask */
#define CSI2DC_VPISR_STE(value)               (CSI2DC_VPISR_STE_Msk & ((value) << CSI2DC_VPISR_STE_Pos))
#define   CSI2DC_VPISR_STE_0_Val              _U_(0x0)                                             /**< (CSI2DC_VPISR) No packet shorter than expected since the last read of the register.  */
#define   CSI2DC_VPISR_STE_1_Val              _U_(0x1)                                             /**< (CSI2DC_VPISR) The Packet Shorter Than Expected interrupt is activated.  */
#define CSI2DC_VPISR_STE_0                    (CSI2DC_VPISR_STE_0_Val << CSI2DC_VPISR_STE_Pos)     /**< (CSI2DC_VPISR) No packet shorter than expected since the last read of the register. Position  */
#define CSI2DC_VPISR_STE_1                    (CSI2DC_VPISR_STE_1_Val << CSI2DC_VPISR_STE_Pos)     /**< (CSI2DC_VPISR) The Packet Shorter Than Expected interrupt is activated. Position  */
#define CSI2DC_VPISR_LTE_Pos                  _U_(4)                                               /**< (CSI2DC_VPISR) Packet Longer Than Expected Interrupt Mask Position */
#define CSI2DC_VPISR_LTE_Msk                  (_U_(0x1) << CSI2DC_VPISR_LTE_Pos)                   /**< (CSI2DC_VPISR) Packet Longer Than Expected Interrupt Mask Mask */
#define CSI2DC_VPISR_LTE(value)               (CSI2DC_VPISR_LTE_Msk & ((value) << CSI2DC_VPISR_LTE_Pos))
#define   CSI2DC_VPISR_LTE_0_Val              _U_(0x0)                                             /**< (CSI2DC_VPISR) Packet Longer Than Expected interrupt is masked.  */
#define   CSI2DC_VPISR_LTE_1_Val              _U_(0x1)                                             /**< (CSI2DC_VPISR) Packet Longer Than Expected interrupt is activated.  */
#define CSI2DC_VPISR_LTE_0                    (CSI2DC_VPISR_LTE_0_Val << CSI2DC_VPISR_LTE_Pos)     /**< (CSI2DC_VPISR) Packet Longer Than Expected interrupt is masked. Position  */
#define CSI2DC_VPISR_LTE_1                    (CSI2DC_VPISR_LTE_1_Val << CSI2DC_VPISR_LTE_Pos)     /**< (CSI2DC_VPISR) Packet Longer Than Expected interrupt is activated. Position  */
#define CSI2DC_VPISR_PKTOVF_Pos               _U_(5)                                               /**< (CSI2DC_VPISR) Packet Overflow For Video Pipe Interrupt Mask Position */
#define CSI2DC_VPISR_PKTOVF_Msk               (_U_(0x1) << CSI2DC_VPISR_PKTOVF_Pos)                /**< (CSI2DC_VPISR) Packet Overflow For Video Pipe Interrupt Mask Mask */
#define CSI2DC_VPISR_PKTOVF(value)            (CSI2DC_VPISR_PKTOVF_Msk & ((value) << CSI2DC_VPISR_PKTOVF_Pos))
#define   CSI2DC_VPISR_PKTOVF_0_Val           _U_(0x0)                                             /**< (CSI2DC_VPISR) Packet Overflow For Video Pipe interrupt is masked.  */
#define   CSI2DC_VPISR_PKTOVF_1_Val           _U_(0x1)                                             /**< (CSI2DC_VPISR) Packet Overflow For Video Pipe interrupt is activated.  */
#define CSI2DC_VPISR_PKTOVF_0                 (CSI2DC_VPISR_PKTOVF_0_Val << CSI2DC_VPISR_PKTOVF_Pos) /**< (CSI2DC_VPISR) Packet Overflow For Video Pipe interrupt is masked. Position  */
#define CSI2DC_VPISR_PKTOVF_1                 (CSI2DC_VPISR_PKTOVF_1_Val << CSI2DC_VPISR_PKTOVF_Pos) /**< (CSI2DC_VPISR) Packet Overflow For Video Pipe interrupt is activated. Position  */
#define CSI2DC_VPISR_Msk                      _U_(0x0000003F)                                      /**< (CSI2DC_VPISR) Register Mask  */


/* -------- CSI2DC_VPER : (CSI2DC Offset: 0xF8) (R/W 32) Video Pipe Enable Register -------- */
#define CSI2DC_VPER_RESETVALUE                _U_(0x00)                                            /**<  (CSI2DC_VPER) Video Pipe Enable Register  Reset Value */

#define CSI2DC_VPER_ENABLE_Pos                _U_(0)                                               /**< (CSI2DC_VPER) Video Pipe Enable Position */
#define CSI2DC_VPER_ENABLE_Msk                (_U_(0x1) << CSI2DC_VPER_ENABLE_Pos)                 /**< (CSI2DC_VPER) Video Pipe Enable Mask */
#define CSI2DC_VPER_ENABLE(value)             (CSI2DC_VPER_ENABLE_Msk & ((value) << CSI2DC_VPER_ENABLE_Pos))
#define   CSI2DC_VPER_ENABLE_0_Val            _U_(0x0)                                             /**< (CSI2DC_VPER) Video pipe disabled.  */
#define   CSI2DC_VPER_ENABLE_1_Val            _U_(0x1)                                             /**< (CSI2DC_VPER) Video pipe enabled.  */
#define CSI2DC_VPER_ENABLE_0                  (CSI2DC_VPER_ENABLE_0_Val << CSI2DC_VPER_ENABLE_Pos) /**< (CSI2DC_VPER) Video pipe disabled. Position  */
#define CSI2DC_VPER_ENABLE_1                  (CSI2DC_VPER_ENABLE_1_Val << CSI2DC_VPER_ENABLE_Pos) /**< (CSI2DC_VPER) Video pipe enabled. Position  */
#define CSI2DC_VPER_Msk                       _U_(0x00000001)                                      /**< (CSI2DC_VPER) Register Mask  */


/* -------- CSI2DC_VPCFGR : (CSI2DC Offset: 0xFC) (R/W 32) Video Pipe Configuration Register -------- */
#define CSI2DC_VPCFGR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_VPCFGR) Video Pipe Configuration Register  Reset Value */

#define CSI2DC_VPCFGR_DT_Pos                  _U_(0)                                               /**< (CSI2DC_VPCFGR) Data Type Position */
#define CSI2DC_VPCFGR_DT_Msk                  (_U_(0x3F) << CSI2DC_VPCFGR_DT_Pos)                  /**< (CSI2DC_VPCFGR) Data Type Mask */
#define CSI2DC_VPCFGR_DT(value)               (CSI2DC_VPCFGR_DT_Msk & ((value) << CSI2DC_VPCFGR_DT_Pos))
#define CSI2DC_VPCFGR_VC_Pos                  _U_(6)                                               /**< (CSI2DC_VPCFGR) Virtual Channel Identifier Position */
#define CSI2DC_VPCFGR_VC_Msk                  (_U_(0x3) << CSI2DC_VPCFGR_VC_Pos)                   /**< (CSI2DC_VPCFGR) Virtual Channel Identifier Mask */
#define CSI2DC_VPCFGR_VC(value)               (CSI2DC_VPCFGR_VC_Msk & ((value) << CSI2DC_VPCFGR_VC_Pos))
#define CSI2DC_VPCFGR_DE_Pos                  _U_(8)                                               /**< (CSI2DC_VPCFGR) Decompression Enable Position */
#define CSI2DC_VPCFGR_DE_Msk                  (_U_(0x1) << CSI2DC_VPCFGR_DE_Pos)                   /**< (CSI2DC_VPCFGR) Decompression Enable Mask */
#define CSI2DC_VPCFGR_DE(value)               (CSI2DC_VPCFGR_DE_Msk & ((value) << CSI2DC_VPCFGR_DE_Pos))
#define   CSI2DC_VPCFGR_DE_0_Val              _U_(0x0)                                             /**< (CSI2DC_VPCFGR) Decompression disabled.  */
#define   CSI2DC_VPCFGR_DE_1_Val              _U_(0x1)                                             /**< (CSI2DC_VPCFGR) Decompression enabled.  */
#define CSI2DC_VPCFGR_DE_0                    (CSI2DC_VPCFGR_DE_0_Val << CSI2DC_VPCFGR_DE_Pos)     /**< (CSI2DC_VPCFGR) Decompression disabled. Position  */
#define CSI2DC_VPCFGR_DE_1                    (CSI2DC_VPCFGR_DE_1_Val << CSI2DC_VPCFGR_DE_Pos)     /**< (CSI2DC_VPCFGR) Decompression enabled. Position  */
#define CSI2DC_VPCFGR_DM_Pos                  _U_(9)                                               /**< (CSI2DC_VPCFGR) Decoder Mode Position */
#define CSI2DC_VPCFGR_DM_Msk                  (_U_(0x7) << CSI2DC_VPCFGR_DM_Pos)                   /**< (CSI2DC_VPCFGR) Decoder Mode Mask */
#define CSI2DC_VPCFGR_DM(value)               (CSI2DC_VPCFGR_DM_Msk & ((value) << CSI2DC_VPCFGR_DM_Pos))
#define   CSI2DC_VPCFGR_DM_DECODER8TO12_Val   _U_(0x0)                                             /**< (CSI2DC_VPCFGR) Use the 8-bit to 12-bit decoding operation  */
#define   CSI2DC_VPCFGR_DM_DECODER7TO12_Val   _U_(0x1)                                             /**< (CSI2DC_VPCFGR) Use the 7-bit to 12-bit decoding operation  */
#define   CSI2DC_VPCFGR_DM_DECODER6TO12_Val   _U_(0x2)                                             /**< (CSI2DC_VPCFGR) Use the 6-bit to 12-bit decoding operation  */
#define   CSI2DC_VPCFGR_DM_DECODER8TO10_Val   _U_(0x3)                                             /**< (CSI2DC_VPCFGR) Use the 8-bit to 10-bit decoding operation  */
#define   CSI2DC_VPCFGR_DM_DECODER7TO10_Val   _U_(0x4)                                             /**< (CSI2DC_VPCFGR) Use the 7-bit to 10-bit decoding operation  */
#define   CSI2DC_VPCFGR_DM_DECODER6TO10_Val   _U_(0x5)                                             /**< (CSI2DC_VPCFGR) Use the 6-bit to 10-bit decoding operation  */
#define CSI2DC_VPCFGR_DM_DECODER8TO12         (CSI2DC_VPCFGR_DM_DECODER8TO12_Val << CSI2DC_VPCFGR_DM_Pos) /**< (CSI2DC_VPCFGR) Use the 8-bit to 12-bit decoding operation Position  */
#define CSI2DC_VPCFGR_DM_DECODER7TO12         (CSI2DC_VPCFGR_DM_DECODER7TO12_Val << CSI2DC_VPCFGR_DM_Pos) /**< (CSI2DC_VPCFGR) Use the 7-bit to 12-bit decoding operation Position  */
#define CSI2DC_VPCFGR_DM_DECODER6TO12         (CSI2DC_VPCFGR_DM_DECODER6TO12_Val << CSI2DC_VPCFGR_DM_Pos) /**< (CSI2DC_VPCFGR) Use the 6-bit to 12-bit decoding operation Position  */
#define CSI2DC_VPCFGR_DM_DECODER8TO10         (CSI2DC_VPCFGR_DM_DECODER8TO10_Val << CSI2DC_VPCFGR_DM_Pos) /**< (CSI2DC_VPCFGR) Use the 8-bit to 10-bit decoding operation Position  */
#define CSI2DC_VPCFGR_DM_DECODER7TO10         (CSI2DC_VPCFGR_DM_DECODER7TO10_Val << CSI2DC_VPCFGR_DM_Pos) /**< (CSI2DC_VPCFGR) Use the 7-bit to 10-bit decoding operation Position  */
#define CSI2DC_VPCFGR_DM_DECODER6TO10         (CSI2DC_VPCFGR_DM_DECODER6TO10_Val << CSI2DC_VPCFGR_DM_Pos) /**< (CSI2DC_VPCFGR) Use the 6-bit to 10-bit decoding operation Position  */
#define CSI2DC_VPCFGR_DP2_Pos                 _U_(12)                                              /**< (CSI2DC_VPCFGR) Decoder Predictor 2 Selection Position */
#define CSI2DC_VPCFGR_DP2_Msk                 (_U_(0x1) << CSI2DC_VPCFGR_DP2_Pos)                  /**< (CSI2DC_VPCFGR) Decoder Predictor 2 Selection Mask */
#define CSI2DC_VPCFGR_DP2(value)              (CSI2DC_VPCFGR_DP2_Msk & ((value) << CSI2DC_VPCFGR_DP2_Pos))
#define   CSI2DC_VPCFGR_DP2_0_Val             _U_(0x0)                                             /**< (CSI2DC_VPCFGR) Predictor 1 is selected.  */
#define   CSI2DC_VPCFGR_DP2_1_Val             _U_(0x1)                                             /**< (CSI2DC_VPCFGR) Predictor 2 is selected.  */
#define CSI2DC_VPCFGR_DP2_0                   (CSI2DC_VPCFGR_DP2_0_Val << CSI2DC_VPCFGR_DP2_Pos)   /**< (CSI2DC_VPCFGR) Predictor 1 is selected. Position  */
#define CSI2DC_VPCFGR_DP2_1                   (CSI2DC_VPCFGR_DP2_1_Val << CSI2DC_VPCFGR_DP2_Pos)   /**< (CSI2DC_VPCFGR) Predictor 2 is selected. Position  */
#define CSI2DC_VPCFGR_RMS_Pos                 _U_(13)                                              /**< (CSI2DC_VPCFGR) Recommended Memory Storage Position */
#define CSI2DC_VPCFGR_RMS_Msk                 (_U_(0x1) << CSI2DC_VPCFGR_RMS_Pos)                  /**< (CSI2DC_VPCFGR) Recommended Memory Storage Mask */
#define CSI2DC_VPCFGR_RMS(value)              (CSI2DC_VPCFGR_RMS_Msk & ((value) << CSI2DC_VPCFGR_RMS_Pos))
#define   CSI2DC_VPCFGR_RMS_0_Val             _U_(0x0)                                             /**< (CSI2DC_VPCFGR) CSI2DC outputs 1 pixel per component per clock cycle, compliant with the ISC processing engine.  */
#define   CSI2DC_VPCFGR_RMS_1_Val             _U_(0x1)                                             /**< (CSI2DC_VPCFGR) CSI2DC generates a byte stream compliant with the CSI-2 specification memory format.  */
#define CSI2DC_VPCFGR_RMS_0                   (CSI2DC_VPCFGR_RMS_0_Val << CSI2DC_VPCFGR_RMS_Pos)   /**< (CSI2DC_VPCFGR) CSI2DC outputs 1 pixel per component per clock cycle, compliant with the ISC processing engine. Position  */
#define CSI2DC_VPCFGR_RMS_1                   (CSI2DC_VPCFGR_RMS_1_Val << CSI2DC_VPCFGR_RMS_Pos)   /**< (CSI2DC_VPCFGR) CSI2DC generates a byte stream compliant with the CSI-2 specification memory format. Position  */
#define CSI2DC_VPCFGR_PA_Pos                  _U_(14)                                              /**< (CSI2DC_VPCFGR) ISC Post Adjustment Position */
#define CSI2DC_VPCFGR_PA_Msk                  (_U_(0x1) << CSI2DC_VPCFGR_PA_Pos)                   /**< (CSI2DC_VPCFGR) ISC Post Adjustment Mask */
#define CSI2DC_VPCFGR_PA(value)               (CSI2DC_VPCFGR_PA_Msk & ((value) << CSI2DC_VPCFGR_PA_Pos))
#define   CSI2DC_VPCFGR_PA_0_Val              _U_(0x0)                                             /**< (CSI2DC_VPCFGR) Post adjustment is disabled. Video pipe output data are LSB aligned (left untouched).  */
#define   CSI2DC_VPCFGR_PA_1_Val              _U_(0x1)                                             /**< (CSI2DC_VPCFGR) Post adjustment is enabled. Video pipe output data are MSB aligned according to 12-bit ISC data bus.  */
#define CSI2DC_VPCFGR_PA_0                    (CSI2DC_VPCFGR_PA_0_Val << CSI2DC_VPCFGR_PA_Pos)     /**< (CSI2DC_VPCFGR) Post adjustment is disabled. Video pipe output data are LSB aligned (left untouched). Position  */
#define CSI2DC_VPCFGR_PA_1                    (CSI2DC_VPCFGR_PA_1_Val << CSI2DC_VPCFGR_PA_Pos)     /**< (CSI2DC_VPCFGR) Post adjustment is enabled. Video pipe output data are MSB aligned according to 12-bit ISC data bus. Position  */
#define CSI2DC_VPCFGR_RGB36MAP_Pos            _U_(15)                                              /**< (CSI2DC_VPCFGR) RGB Mapping Position */
#define CSI2DC_VPCFGR_RGB36MAP_Msk            (_U_(0x1) << CSI2DC_VPCFGR_RGB36MAP_Pos)             /**< (CSI2DC_VPCFGR) RGB Mapping Mask */
#define CSI2DC_VPCFGR_RGB36MAP(value)         (CSI2DC_VPCFGR_RGB36MAP_Msk & ((value) << CSI2DC_VPCFGR_RGB36MAP_Pos))
#define   CSI2DC_VPCFGR_RGB36MAP_0_Val        _U_(0x0)                                             /**< (CSI2DC_VPCFGR) RGB data is packed and written to the output bus.  */
#define   CSI2DC_VPCFGR_RGB36MAP_1_Val        _U_(0x1)                                             /**< (CSI2DC_VPCFGR) The RGB pixel is mapped onto the 36-bit bus, using pixel expansion and replication.  */
#define CSI2DC_VPCFGR_RGB36MAP_0              (CSI2DC_VPCFGR_RGB36MAP_0_Val << CSI2DC_VPCFGR_RGB36MAP_Pos) /**< (CSI2DC_VPCFGR) RGB data is packed and written to the output bus. Position  */
#define CSI2DC_VPCFGR_RGB36MAP_1              (CSI2DC_VPCFGR_RGB36MAP_1_Val << CSI2DC_VPCFGR_RGB36MAP_Pos) /**< (CSI2DC_VPCFGR) The RGB pixel is mapped onto the 36-bit bus, using pixel expansion and replication. Position  */
#define CSI2DC_VPCFGR_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_VPCFGR) Register Mask  */

#define CSI2DC_VPCFGR_DP_Pos                  _U_(12)                                              /**< (CSI2DC_VPCFGR Position) Decoder Predictor 2 Selection */
#define CSI2DC_VPCFGR_DP_Msk                  (_U_(0x1) << CSI2DC_VPCFGR_DP_Pos)                   /**< (CSI2DC_VPCFGR Mask) DP */
#define CSI2DC_VPCFGR_DP(value)               (CSI2DC_VPCFGR_DP_Msk & ((value) << CSI2DC_VPCFGR_DP_Pos)) 

/* -------- CSI2DC_VPCOLR : (CSI2DC Offset: 0x100) ( R/ 32) Video Pipe Column Register -------- */
#define CSI2DC_VPCOLR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_VPCOLR) Video Pipe Column Register  Reset Value */

#define CSI2DC_VPCOLR_COL_Pos                 _U_(0)                                               /**< (CSI2DC_VPCOLR) Column Number Position */
#define CSI2DC_VPCOLR_COL_Msk                 (_U_(0xFFFF) << CSI2DC_VPCOLR_COL_Pos)               /**< (CSI2DC_VPCOLR) Column Number Mask */
#define CSI2DC_VPCOLR_COL(value)              (CSI2DC_VPCOLR_COL_Msk & ((value) << CSI2DC_VPCOLR_COL_Pos))
#define CSI2DC_VPCOLR_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_VPCOLR) Register Mask  */


/* -------- CSI2DC_VPROWR : (CSI2DC Offset: 0x104) ( R/ 32) Video Pipe Row Register -------- */
#define CSI2DC_VPROWR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_VPROWR) Video Pipe Row Register  Reset Value */

#define CSI2DC_VPROWR_ROW_Pos                 _U_(0)                                               /**< (CSI2DC_VPROWR) Row Number Position */
#define CSI2DC_VPROWR_ROW_Msk                 (_U_(0xFFFF) << CSI2DC_VPROWR_ROW_Pos)               /**< (CSI2DC_VPROWR) Row Number Mask */
#define CSI2DC_VPROWR_ROW(value)              (CSI2DC_VPROWR_ROW_Msk & ((value) << CSI2DC_VPROWR_ROW_Pos))
#define CSI2DC_VPROWR_Msk                     _U_(0x0000FFFF)                                      /**< (CSI2DC_VPROWR) Register Mask  */


/* -------- CSI2DC_VPDTRR : (CSI2DC Offset: 0x108) (R/W 32) Video Pipe Data Type Remap Register -------- */
#define CSI2DC_VPDTRR_RESETVALUE              _U_(0x00)                                            /**<  (CSI2DC_VPDTRR) Video Pipe Data Type Remap Register  Reset Value */

#define CSI2DC_VPDTRR_ADT_Pos                 _U_(0)                                               /**< (CSI2DC_VPDTRR) Alternate Data Type Position */
#define CSI2DC_VPDTRR_ADT_Msk                 (_U_(0x3F) << CSI2DC_VPDTRR_ADT_Pos)                 /**< (CSI2DC_VPDTRR) Alternate Data Type Mask */
#define CSI2DC_VPDTRR_ADT(value)              (CSI2DC_VPDTRR_ADT_Msk & ((value) << CSI2DC_VPDTRR_ADT_Pos))
#define CSI2DC_VPDTRR_DTRE_Pos                _U_(6)                                               /**< (CSI2DC_VPDTRR) Data Type Remap Enable Position */
#define CSI2DC_VPDTRR_DTRE_Msk                (_U_(0x1) << CSI2DC_VPDTRR_DTRE_Pos)                 /**< (CSI2DC_VPDTRR) Data Type Remap Enable Mask */
#define CSI2DC_VPDTRR_DTRE(value)             (CSI2DC_VPDTRR_DTRE_Msk & ((value) << CSI2DC_VPDTRR_DTRE_Pos))
#define   CSI2DC_VPDTRR_DTRE_0_Val            _U_(0x0)                                             /**< (CSI2DC_VPDTRR) Data type remap is disabled.  */
#define   CSI2DC_VPDTRR_DTRE_1_Val            _U_(0x1)                                             /**< (CSI2DC_VPDTRR) Data type remap is enabled.  */
#define CSI2DC_VPDTRR_DTRE_0                  (CSI2DC_VPDTRR_DTRE_0_Val << CSI2DC_VPDTRR_DTRE_Pos) /**< (CSI2DC_VPDTRR) Data type remap is disabled. Position  */
#define CSI2DC_VPDTRR_DTRE_1                  (CSI2DC_VPDTRR_DTRE_1_Val << CSI2DC_VPDTRR_DTRE_Pos) /**< (CSI2DC_VPDTRR) Data type remap is enabled. Position  */
#define CSI2DC_VPDTRR_Msk                     _U_(0x0000007F)                                      /**< (CSI2DC_VPDTRR) Register Mask  */


/** \brief CSI2DC register offsets definitions */
#define CSI2DC_IDSEW0R_REG_OFST        (0x00)              /**< (CSI2DC_IDSEW0R) IDS Entry Word 0 Register  Offset */
#define CSI2DC_IDSEW1R_REG_OFST        (0x04)              /**< (CSI2DC_IDSEW1R) IDS Entry Word 1 Register  Offset */
#define CSI2DC_GCFGR_REG_OFST          (0x00)              /**< (CSI2DC_GCFGR) Global Configuration Register Offset */
#define CSI2DC_GCTLR_REG_OFST          (0x04)              /**< (CSI2DC_GCTLR) Global Control Register Offset */
#define CSI2DC_GSR_REG_OFST            (0x08)              /**< (CSI2DC_GSR) Global Status Register Offset */
#define CSI2DC_GIER_REG_OFST           (0x0C)              /**< (CSI2DC_GIER) Global Interrupt Enable Register Offset */
#define CSI2DC_GIDR_REG_OFST           (0x10)              /**< (CSI2DC_GIDR) Global Interrupt Disable Register Offset */
#define CSI2DC_GIMR_REG_OFST           (0x14)              /**< (CSI2DC_GIMR) Global Interrupt Mask Register Offset */
#define CSI2DC_GISR_REG_OFST           (0x18)              /**< (CSI2DC_GISR) Global Interrupt Status Register Offset */
#define CSI2DC_SSPIER_REG_OFST         (0x1C)              /**< (CSI2DC_SSPIER) SSP Interrupt Enable Register Offset */
#define CSI2DC_SSPIDR_REG_OFST         (0x20)              /**< (CSI2DC_SSPIDR) SSP Interrupt Disable Register Offset */
#define CSI2DC_SSPIMR_REG_OFST         (0x24)              /**< (CSI2DC_SSPIMR) SSP Interrupt Mask Register Offset */
#define CSI2DC_SSPISR_REG_OFST         (0x28)              /**< (CSI2DC_SSPISR) SSP Interrupt Status Register Offset */
#define CSI2DC_FNVC0R_REG_OFST         (0x2C)              /**< (CSI2DC_FNVC0R) Frame Number VC0 Register Offset */
#define CSI2DC_FNVC1R_REG_OFST         (0x30)              /**< (CSI2DC_FNVC1R) Frame Number VC0 Register Offset */
#define CSI2DC_FNVC2R_REG_OFST         (0x34)              /**< (CSI2DC_FNVC2R) Frame Number VC0 Register Offset */
#define CSI2DC_FNVC3R_REG_OFST         (0x38)              /**< (CSI2DC_FNVC3R) Frame Number VC0 Register Offset */
#define CSI2DC_LNVC0R_REG_OFST         (0x3C)              /**< (CSI2DC_LNVC0R) Line Number VC0 Register Offset */
#define CSI2DC_LNVC1R_REG_OFST         (0x40)              /**< (CSI2DC_LNVC1R) Line Number VC0 Register Offset */
#define CSI2DC_LNVC2R_REG_OFST         (0x44)              /**< (CSI2DC_LNVC2R) Line Number VC0 Register Offset */
#define CSI2DC_LNVC3R_REG_OFST         (0x48)              /**< (CSI2DC_LNVC3R) Line Number VC0 Register Offset */
#define CSI2DC_GSPIER_REG_OFST         (0x5C)              /**< (CSI2DC_GSPIER) GSP Interrupt Enable Register Offset */
#define CSI2DC_GSPIDR_REG_OFST         (0x60)              /**< (CSI2DC_GSPIDR) GSP Interrupt Disable Register Offset */
#define CSI2DC_GSPIMR_REG_OFST         (0x64)              /**< (CSI2DC_GSPIMR) GSP Interrupt Mask Register Offset */
#define CSI2DC_GSPISR_REG_OFST         (0x68)              /**< (CSI2DC_GSPISR) GSP Interrupt Status Register Offset */
#define CSI2DC_GSPS0R_REG_OFST         (0x6C)              /**< (CSI2DC_GSPS0R) GSP Status 0 Register Offset */
#define CSI2DC_GSPS1R_REG_OFST         (0x70)              /**< (CSI2DC_GSPS1R) GSP Status 1 Register Offset */
#define CSI2DC_GSPS2R_REG_OFST         (0x74)              /**< (CSI2DC_GSPS2R) GSP Status 2 Register Offset */
#define CSI2DC_GSPS3R_REG_OFST         (0x78)              /**< (CSI2DC_GSPS3R) GSP Status 3 Register Offset */
#define CSI2DC_GLPIER_REG_OFST         (0x7C)              /**< (CSI2DC_GLPIER) GLP Interrupt Enable Register Offset */
#define CSI2DC_GLPIDR_REG_OFST         (0x80)              /**< (CSI2DC_GLPIDR) GLP Interrupt Disable Register Offset */
#define CSI2DC_GLPIMR_REG_OFST         (0x84)              /**< (CSI2DC_GLPIMR) GLP Interrupt Mask Register Offset */
#define CSI2DC_GLPISR_REG_OFST         (0x88)              /**< (CSI2DC_GLPISR) GLP Interrupt Status Register Offset */
#define CSI2DC_IDSCR_REG_OFST          (0x8C)              /**< (CSI2DC_IDSCR) IDS Control Register Offset */
#define CSI2DC_IDSIER_REG_OFST         (0x90)              /**< (CSI2DC_IDSIER) IDS Interrupt Enable Register Offset */
#define CSI2DC_IDSIDR_REG_OFST         (0x94)              /**< (CSI2DC_IDSIDR) IDS Interrupt Disable Register Offset */
#define CSI2DC_IDSIMR_REG_OFST         (0x98)              /**< (CSI2DC_IDSIMR) IDS Interrupt Mask Register Offset */
#define CSI2DC_IDSISR_REG_OFST         (0x9C)              /**< (CSI2DC_IDSISR) IDS Interrupt Status Register Offset */
#define CSI2DC_PUR_REG_OFST            (0xC0)              /**< (CSI2DC_PUR) Pipe Update Register Offset */
#define CSI2DC_PUSR_REG_OFST           (0xC4)              /**< (CSI2DC_PUSR) Pipe Update Status Register Offset */
#define CSI2DC_DPIER_REG_OFST          (0xC8)              /**< (CSI2DC_DPIER) Data Pipe Interrupt Enable Register Offset */
#define CSI2DC_DPIDR_REG_OFST          (0xCC)              /**< (CSI2DC_DPIDR) Data Pipe Interrupt Disable Register Offset */
#define CSI2DC_DPIMR_REG_OFST          (0xD0)              /**< (CSI2DC_DPIMR) Data Pipe Interrupt Mask Register Offset */
#define CSI2DC_DPISR_REG_OFST          (0xD4)              /**< (CSI2DC_DPISR) Data Pipe Interrupt Status Register Offset */
#define CSI2DC_DPICR_REG_OFST          (0xD8)              /**< (CSI2DC_DPICR) Data Pipe Interrupt Clear Register Offset */
#define CSI2DC_DPER_REG_OFST           (0xDC)              /**< (CSI2DC_DPER) Data Pipe Enable Register Offset */
#define CSI2DC_DPCFGR_REG_OFST         (0xE0)              /**< (CSI2DC_DPCFGR) Data Pipe Configuration Register Offset */
#define CSI2DC_DPDCR_REG_OFST          (0xE4)              /**< (CSI2DC_DPDCR) Data Pipe DMA Configuration Register Offset */
#define CSI2DC_VPIER_REG_OFST          (0xE8)              /**< (CSI2DC_VPIER) Video Pipe Interrupt Enable Register Offset */
#define CSI2DC_VPIDR_REG_OFST          (0xEC)              /**< (CSI2DC_VPIDR) Video Pipe Interrupt Disable Register Offset */
#define CSI2DC_VPIMR_REG_OFST          (0xF0)              /**< (CSI2DC_VPIMR) Video Pipe Interrupt Mask Register Offset */
#define CSI2DC_VPISR_REG_OFST          (0xF4)              /**< (CSI2DC_VPISR) Video Pipe Interrupt Status Register Offset */
#define CSI2DC_VPER_REG_OFST           (0xF8)              /**< (CSI2DC_VPER) Video Pipe Enable Register Offset */
#define CSI2DC_VPCFGR_REG_OFST         (0xFC)              /**< (CSI2DC_VPCFGR) Video Pipe Configuration Register Offset */
#define CSI2DC_VPCOLR_REG_OFST         (0x100)             /**< (CSI2DC_VPCOLR) Video Pipe Column Register Offset */
#define CSI2DC_VPROWR_REG_OFST         (0x104)             /**< (CSI2DC_VPROWR) Video Pipe Row Register Offset */
#define CSI2DC_VPDTRR_REG_OFST         (0x108)             /**< (CSI2DC_VPDTRR) Video Pipe Data Type Remap Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CSI2DC_IDSEW register API structure */
typedef struct
{
  __I   uint32_t                       CSI2DC_IDSEW0R;     /**< Offset: 0x00 (R/   32) IDS Entry Word 0 Register  */
  __I   uint32_t                       CSI2DC_IDSEW1R;     /**< Offset: 0x04 (R/   32) IDS Entry Word 1 Register  */
} csi2dc_idsew_registers_t;

#define CSI2DC_IDSEW_NUMBER _U_(4)

/** \brief CSI2DC register API structure */
typedef struct
{  /* CSI-2 Demultiplexer Controller */
  __IO  uint32_t                       CSI2DC_GCFGR;       /**< Offset: 0x00 (R/W  32) Global Configuration Register */
  __O   uint32_t                       CSI2DC_GCTLR;       /**< Offset: 0x04 ( /W  32) Global Control Register */
  __I   uint32_t                       CSI2DC_GSR;         /**< Offset: 0x08 (R/   32) Global Status Register */
  __O   uint32_t                       CSI2DC_GIER;        /**< Offset: 0x0C ( /W  32) Global Interrupt Enable Register */
  __O   uint32_t                       CSI2DC_GIDR;        /**< Offset: 0x10 ( /W  32) Global Interrupt Disable Register */
  __I   uint32_t                       CSI2DC_GIMR;        /**< Offset: 0x14 (R/   32) Global Interrupt Mask Register */
  __I   uint32_t                       CSI2DC_GISR;        /**< Offset: 0x18 (R/   32) Global Interrupt Status Register */
  __O   uint32_t                       CSI2DC_SSPIER;      /**< Offset: 0x1C ( /W  32) SSP Interrupt Enable Register */
  __O   uint32_t                       CSI2DC_SSPIDR;      /**< Offset: 0x20 ( /W  32) SSP Interrupt Disable Register */
  __I   uint32_t                       CSI2DC_SSPIMR;      /**< Offset: 0x24 (R/   32) SSP Interrupt Mask Register */
  __I   uint32_t                       CSI2DC_SSPISR;      /**< Offset: 0x28 (R/   32) SSP Interrupt Status Register */
  __I   uint32_t                       CSI2DC_FNVC0R;      /**< Offset: 0x2C (R/   32) Frame Number VC0 Register */
  __I   uint32_t                       CSI2DC_FNVC1R;      /**< Offset: 0x30 (R/   32) Frame Number VC0 Register */
  __I   uint32_t                       CSI2DC_FNVC2R;      /**< Offset: 0x34 (R/   32) Frame Number VC0 Register */
  __I   uint32_t                       CSI2DC_FNVC3R;      /**< Offset: 0x38 (R/   32) Frame Number VC0 Register */
  __I   uint32_t                       CSI2DC_LNVC0R;      /**< Offset: 0x3C (R/   32) Line Number VC0 Register */
  __I   uint32_t                       CSI2DC_LNVC1R;      /**< Offset: 0x40 (R/   32) Line Number VC0 Register */
  __I   uint32_t                       CSI2DC_LNVC2R;      /**< Offset: 0x44 (R/   32) Line Number VC0 Register */
  __I   uint32_t                       CSI2DC_LNVC3R;      /**< Offset: 0x48 (R/   32) Line Number VC0 Register */
  __I   uint8_t                        Reserved1[0x10];
  __O   uint32_t                       CSI2DC_GSPIER;      /**< Offset: 0x5C ( /W  32) GSP Interrupt Enable Register */
  __O   uint32_t                       CSI2DC_GSPIDR;      /**< Offset: 0x60 ( /W  32) GSP Interrupt Disable Register */
  __I   uint32_t                       CSI2DC_GSPIMR;      /**< Offset: 0x64 (R/   32) GSP Interrupt Mask Register */
  __I   uint32_t                       CSI2DC_GSPISR;      /**< Offset: 0x68 (R/   32) GSP Interrupt Status Register */
  __I   uint32_t                       CSI2DC_GSPS0R;      /**< Offset: 0x6C (R/   32) GSP Status 0 Register */
  __I   uint32_t                       CSI2DC_GSPS1R;      /**< Offset: 0x70 (R/   32) GSP Status 1 Register */
  __I   uint32_t                       CSI2DC_GSPS2R;      /**< Offset: 0x74 (R/   32) GSP Status 2 Register */
  __I   uint32_t                       CSI2DC_GSPS3R;      /**< Offset: 0x78 (R/   32) GSP Status 3 Register */
  __O   uint32_t                       CSI2DC_GLPIER;      /**< Offset: 0x7C ( /W  32) GLP Interrupt Enable Register */
  __O   uint32_t                       CSI2DC_GLPIDR;      /**< Offset: 0x80 ( /W  32) GLP Interrupt Disable Register */
  __I   uint32_t                       CSI2DC_GLPIMR;      /**< Offset: 0x84 (R/   32) GLP Interrupt Mask Register */
  __I   uint32_t                       CSI2DC_GLPISR;      /**< Offset: 0x88 (R/   32) GLP Interrupt Status Register */
  __O   uint32_t                       CSI2DC_IDSCR;       /**< Offset: 0x8C ( /W  32) IDS Control Register */
  __O   uint32_t                       CSI2DC_IDSIER;      /**< Offset: 0x90 ( /W  32) IDS Interrupt Enable Register */
  __O   uint32_t                       CSI2DC_IDSIDR;      /**< Offset: 0x94 ( /W  32) IDS Interrupt Disable Register */
  __I   uint32_t                       CSI2DC_IDSIMR;      /**< Offset: 0x98 (R/   32) IDS Interrupt Mask Register */
  __I   uint32_t                       CSI2DC_IDSISR;      /**< Offset: 0x9C (R/   32) IDS Interrupt Status Register */
        csi2dc_idsew_registers_t       CSI2DC_IDSEW[CSI2DC_IDSEW_NUMBER]; /**< Offset: 0xA0  */
  __O   uint32_t                       CSI2DC_PUR;         /**< Offset: 0xC0 ( /W  32) Pipe Update Register */
  __I   uint32_t                       CSI2DC_PUSR;        /**< Offset: 0xC4 (R/   32) Pipe Update Status Register */
  __O   uint32_t                       CSI2DC_DPIER;       /**< Offset: 0xC8 ( /W  32) Data Pipe Interrupt Enable Register */
  __O   uint32_t                       CSI2DC_DPIDR;       /**< Offset: 0xCC ( /W  32) Data Pipe Interrupt Disable Register */
  __I   uint32_t                       CSI2DC_DPIMR;       /**< Offset: 0xD0 (R/   32) Data Pipe Interrupt Mask Register */
  __I   uint32_t                       CSI2DC_DPISR;       /**< Offset: 0xD4 (R/   32) Data Pipe Interrupt Status Register */
  __O   uint32_t                       CSI2DC_DPICR;       /**< Offset: 0xD8 ( /W  32) Data Pipe Interrupt Clear Register */
  __IO  uint32_t                       CSI2DC_DPER;        /**< Offset: 0xDC (R/W  32) Data Pipe Enable Register */
  __IO  uint32_t                       CSI2DC_DPCFGR;      /**< Offset: 0xE0 (R/W  32) Data Pipe Configuration Register */
  __IO  uint32_t                       CSI2DC_DPDCR;       /**< Offset: 0xE4 (R/W  32) Data Pipe DMA Configuration Register */
  __O   uint32_t                       CSI2DC_VPIER;       /**< Offset: 0xE8 ( /W  32) Video Pipe Interrupt Enable Register */
  __O   uint32_t                       CSI2DC_VPIDR;       /**< Offset: 0xEC ( /W  32) Video Pipe Interrupt Disable Register */
  __I   uint32_t                       CSI2DC_VPIMR;       /**< Offset: 0xF0 (R/   32) Video Pipe Interrupt Mask Register */
  __I   uint32_t                       CSI2DC_VPISR;       /**< Offset: 0xF4 (R/   32) Video Pipe Interrupt Status Register */
  __IO  uint32_t                       CSI2DC_VPER;        /**< Offset: 0xF8 (R/W  32) Video Pipe Enable Register */
  __IO  uint32_t                       CSI2DC_VPCFGR;      /**< Offset: 0xFC (R/W  32) Video Pipe Configuration Register */
  __I   uint32_t                       CSI2DC_VPCOLR;      /**< Offset: 0x100 (R/   32) Video Pipe Column Register */
  __I   uint32_t                       CSI2DC_VPROWR;      /**< Offset: 0x104 (R/   32) Video Pipe Row Register */
  __IO  uint32_t                       CSI2DC_VPDTRR;      /**< Offset: 0x108 (R/W  32) Video Pipe Data Type Remap Register */
} csi2dc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_CSI2DC_COMPONENT_H_ */
