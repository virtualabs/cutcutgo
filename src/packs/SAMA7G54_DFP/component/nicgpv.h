/*
 * Component description for NICGPV
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
#ifndef _SAMA7G_NICGPV_COMPONENT_H_
#define _SAMA7G_NICGPV_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR NICGPV                                       */
/* ************************************************************************** */

/* -------- NICGPV_AMIB_FN_MOD_BM_ISS : (NICGPV Offset: 0x08) (R/W 32) AMIB Bus Matrix Issuing Functionality Modification Register  -------- */
#define NICGPV_AMIB_FN_MOD_BM_ISS_RESETVALUE  _U_(0x00)                                            /**<  (NICGPV_AMIB_FN_MOD_BM_ISS) AMIB Bus Matrix Issuing Functionality Modification Register   Reset Value */

#define NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_Pos _U_(0)                                               /**< (NICGPV_AMIB_FN_MOD_BM_ISS) Read Issuing Override Position */
#define NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_Msk (_U_(0x1) << NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_Pos) /**< (NICGPV_AMIB_FN_MOD_BM_ISS) Read Issuing Override Mask */
#define NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE(value) (NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_Msk & ((value) << NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_Pos))
#define   NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_0_Val _U_(0x0)                                             /**< (NICGPV_AMIB_FN_MOD_BM_ISS) No effect  */
#define   NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_1_Val _U_(0x1)                                             /**< (NICGPV_AMIB_FN_MOD_BM_ISS) Read issuing capability is limited to one outstanding transaction.  */
#define NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_0 (NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_0_Val << NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_Pos) /**< (NICGPV_AMIB_FN_MOD_BM_ISS) No effect Position  */
#define NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_1 (NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_1_Val << NICGPV_AMIB_FN_MOD_BM_ISS_READ_ISS_OVERRIDE_Pos) /**< (NICGPV_AMIB_FN_MOD_BM_ISS) Read issuing capability is limited to one outstanding transaction. Position  */
#define NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_Pos _U_(1)                                               /**< (NICGPV_AMIB_FN_MOD_BM_ISS) Write Issuing Override Position */
#define NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_Msk (_U_(0x1) << NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_Pos) /**< (NICGPV_AMIB_FN_MOD_BM_ISS) Write Issuing Override Mask */
#define NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE(value) (NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_Msk & ((value) << NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_Pos))
#define   NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_0_Val _U_(0x0)                                             /**< (NICGPV_AMIB_FN_MOD_BM_ISS) No effect  */
#define   NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_1_Val _U_(0x1)                                             /**< (NICGPV_AMIB_FN_MOD_BM_ISS) Write issuing capability is limited to one outstanding transaction.  */
#define NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_0 (NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_0_Val << NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_Pos) /**< (NICGPV_AMIB_FN_MOD_BM_ISS) No effect Position  */
#define NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_1 (NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_1_Val << NICGPV_AMIB_FN_MOD_BM_ISS_WRITE_ISS_OVERRIDE_Pos) /**< (NICGPV_AMIB_FN_MOD_BM_ISS) Write issuing capability is limited to one outstanding transaction. Position  */
#define NICGPV_AMIB_FN_MOD_BM_ISS_Msk         _U_(0x00000003)                                      /**< (NICGPV_AMIB_FN_MOD_BM_ISS) Register Mask  */


/* -------- NICGPV_ASIB_READ_QOS : (NICGPV Offset: 0x100) (R/W 32) ASIB Read Channel QoS Register  -------- */
#define NICGPV_ASIB_READ_QOS_RESETVALUE       _U_(0x00)                                            /**<  (NICGPV_ASIB_READ_QOS) ASIB Read Channel QoS Register   Reset Value */

#define NICGPV_ASIB_READ_QOS_RD_QOS_Pos       _U_(0)                                               /**< (NICGPV_ASIB_READ_QOS) Read QoS Position */
#define NICGPV_ASIB_READ_QOS_RD_QOS_Msk       (_U_(0xF) << NICGPV_ASIB_READ_QOS_RD_QOS_Pos)        /**< (NICGPV_ASIB_READ_QOS) Read QoS Mask */
#define NICGPV_ASIB_READ_QOS_RD_QOS(value)    (NICGPV_ASIB_READ_QOS_RD_QOS_Msk & ((value) << NICGPV_ASIB_READ_QOS_RD_QOS_Pos))
#define NICGPV_ASIB_READ_QOS_Msk              _U_(0x0000000F)                                      /**< (NICGPV_ASIB_READ_QOS) Register Mask  */


/* -------- NICGPV_ASIB_WRITE_QOS : (NICGPV Offset: 0x104) (R/W 32) ASIB Write Channel QoS Register  -------- */
#define NICGPV_ASIB_WRITE_QOS_RESETVALUE      _U_(0x00)                                            /**<  (NICGPV_ASIB_WRITE_QOS) ASIB Write Channel QoS Register   Reset Value */

#define NICGPV_ASIB_WRITE_QOS_WR_QOS_Pos      _U_(0)                                               /**< (NICGPV_ASIB_WRITE_QOS) Write QoS Position */
#define NICGPV_ASIB_WRITE_QOS_WR_QOS_Msk      (_U_(0xF) << NICGPV_ASIB_WRITE_QOS_WR_QOS_Pos)       /**< (NICGPV_ASIB_WRITE_QOS) Write QoS Mask */
#define NICGPV_ASIB_WRITE_QOS_WR_QOS(value)   (NICGPV_ASIB_WRITE_QOS_WR_QOS_Msk & ((value) << NICGPV_ASIB_WRITE_QOS_WR_QOS_Pos))
#define NICGPV_ASIB_WRITE_QOS_Msk             _U_(0x0000000F)                                      /**< (NICGPV_ASIB_WRITE_QOS) Register Mask  */


/* -------- NICGPV_ASIB_QOS_CNTL : (NICGPV Offset: 0x10C) (R/W 32) ASIB QoS Control Register  -------- */
#define NICGPV_ASIB_QOS_CNTL_RESETVALUE       _U_(0x00)                                            /**<  (NICGPV_ASIB_QOS_CNTL) ASIB QoS Control Register   Reset Value */

#define NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_Pos   _U_(0)                                               /**< (NICGPV_ASIB_QOS_CNTL) AW Rate Enable Position */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_Msk   (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_Pos)    /**< (NICGPV_ASIB_QOS_CNTL) AW Rate Enable Mask */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_RATE(value) (NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_Pos))
#define   NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_DISABLED_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Disable AW rate regulation.  */
#define   NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_ENABLED_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Enable AW rate regulation.  */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_DISABLED (NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_DISABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Disable AW rate regulation. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_ENABLED (NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_ENABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AW_RATE_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Enable AW rate regulation. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_Pos   _U_(1)                                               /**< (NICGPV_ASIB_QOS_CNTL) AR Rate Enable Position */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_Msk   (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_Pos)    /**< (NICGPV_ASIB_QOS_CNTL) AR Rate Enable Mask */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_RATE(value) (NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_Pos))
#define   NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_DISABLED_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Disable AR rate regulation.  */
#define   NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_ENABLED_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Enable AR rate regulation.  */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_DISABLED (NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_DISABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Disable AR rate regulation. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_ENABLED (NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_ENABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AR_RATE_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Enable AR rate regulation. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_Pos _U_(2)                                               /**< (NICGPV_ASIB_QOS_CNTL) AW and AR Rates Enable Position */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_Msk (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_Pos)  /**< (NICGPV_ASIB_QOS_CNTL) AW and AR Rates Enable Mask */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE(value) (NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_Pos))
#define   NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_DISABLED_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Disable combined AW and AR rate regulation.  */
#define   NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_ENABLED_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Enable combined AW and AR rate regulation.  */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_DISABLED (NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_DISABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Disable combined AW and AR rate regulation. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_ENABLED (NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_ENABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AWAR_RATE_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Enable combined AW and AR rate regulation. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_FC_Pos     _U_(3)                                               /**< (NICGPV_ASIB_QOS_CNTL) AW Feedback Control Enable Position */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_FC_Msk     (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_EN_AW_FC_Pos)      /**< (NICGPV_ASIB_QOS_CNTL) AW Feedback Control Enable Mask */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_FC(value)  (NICGPV_ASIB_QOS_CNTL_EN_AW_FC_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_EN_AW_FC_Pos))
#define   NICGPV_ASIB_QOS_CNTL_EN_AW_FC_DISABLED_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Disable regulation of AW transaction or address latency.  */
#define   NICGPV_ASIB_QOS_CNTL_EN_AW_FC_ENABLED_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Enable regulation of AW transaction or address latency using feedback control, depending on the MODE_AW_FC setting.  */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_FC_DISABLED (NICGPV_ASIB_QOS_CNTL_EN_AW_FC_DISABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AW_FC_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Disable regulation of AW transaction or address latency. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_FC_ENABLED (NICGPV_ASIB_QOS_CNTL_EN_AW_FC_ENABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AW_FC_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Enable regulation of AW transaction or address latency using feedback control, depending on the MODE_AW_FC setting. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_FC_Pos     _U_(4)                                               /**< (NICGPV_ASIB_QOS_CNTL) AR Feedback Control Enable Position */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_FC_Msk     (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_EN_AR_FC_Pos)      /**< (NICGPV_ASIB_QOS_CNTL) AR Feedback Control Enable Mask */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_FC(value)  (NICGPV_ASIB_QOS_CNTL_EN_AR_FC_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_EN_AR_FC_Pos))
#define   NICGPV_ASIB_QOS_CNTL_EN_AR_FC_DISABLED_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Disable regulation of AR transaction or address latency.  */
#define   NICGPV_ASIB_QOS_CNTL_EN_AR_FC_ENABLED_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Enable regulation of AR transaction or address latency using feedback control, depending on the MODE_AR_FC setting.  */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_FC_DISABLED (NICGPV_ASIB_QOS_CNTL_EN_AR_FC_DISABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AR_FC_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Disable regulation of AR transaction or address latency. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_FC_ENABLED (NICGPV_ASIB_QOS_CNTL_EN_AR_FC_ENABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AR_FC_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Enable regulation of AR transaction or address latency using feedback control, depending on the MODE_AR_FC setting. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_OT_Pos     _U_(5)                                               /**< (NICGPV_ASIB_QOS_CNTL) AW Outstanding Transactions Enable Position */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_OT_Msk     (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_EN_AW_OT_Pos)      /**< (NICGPV_ASIB_QOS_CNTL) AW Outstanding Transactions Enable Mask */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_OT(value)  (NICGPV_ASIB_QOS_CNTL_EN_AW_OT_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_EN_AW_OT_Pos))
#define   NICGPV_ASIB_QOS_CNTL_EN_AW_OT_DISABLED_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Disable regulation of outstanding write transactions.  */
#define   NICGPV_ASIB_QOS_CNTL_EN_AW_OT_ENABLED_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Enable regulation of outstanding write transactions.  */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_OT_DISABLED (NICGPV_ASIB_QOS_CNTL_EN_AW_OT_DISABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AW_OT_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Disable regulation of outstanding write transactions. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AW_OT_ENABLED (NICGPV_ASIB_QOS_CNTL_EN_AW_OT_ENABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AW_OT_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Enable regulation of outstanding write transactions. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_OT_Pos     _U_(6)                                               /**< (NICGPV_ASIB_QOS_CNTL) AR Outstanding Transactions Enable Position */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_OT_Msk     (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_EN_AR_OT_Pos)      /**< (NICGPV_ASIB_QOS_CNTL) AR Outstanding Transactions Enable Mask */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_OT(value)  (NICGPV_ASIB_QOS_CNTL_EN_AR_OT_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_EN_AR_OT_Pos))
#define   NICGPV_ASIB_QOS_CNTL_EN_AR_OT_DISABLED_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Disable regulation of outstanding read transactions.  */
#define   NICGPV_ASIB_QOS_CNTL_EN_AR_OT_ENABLED_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Enable regulation of outstanding read transactions.  */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_OT_DISABLED (NICGPV_ASIB_QOS_CNTL_EN_AR_OT_DISABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AR_OT_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Disable regulation of outstanding read transactions. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AR_OT_ENABLED (NICGPV_ASIB_QOS_CNTL_EN_AR_OT_ENABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AR_OT_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Enable regulation of outstanding read transactions. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_Pos   _U_(7)                                               /**< (NICGPV_ASIB_QOS_CNTL) AWAR Outstanding Transactions Enable Position */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_Msk   (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_Pos)    /**< (NICGPV_ASIB_QOS_CNTL) AWAR Outstanding Transactions Enable Mask */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT(value) (NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_Pos))
#define   NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_DISABLED_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Disable combined regulation of outstanding transactions.  */
#define   NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_ENABLED_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Enable combined regulation of outstanding transactions.  */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_DISABLED (NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_DISABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Disable combined regulation of outstanding transactions. Position  */
#define NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_ENABLED (NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_ENABLED_Val << NICGPV_ASIB_QOS_CNTL_EN_AWAR_OT_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Enable combined regulation of outstanding transactions. Position  */
#define NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_Pos   _U_(16)                                              /**< (NICGPV_ASIB_QOS_CNTL) AW Feedback Control Mode Position */
#define NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_Msk   (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_Pos)    /**< (NICGPV_ASIB_QOS_CNTL) AW Feedback Control Mode Mask */
#define NICGPV_ASIB_QOS_CNTL_MODE_AW_FC(value) (NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_Pos))
#define   NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_TRANS_LAT_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Transaction latency  */
#define   NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_ADDR_LAT_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Address latency  */
#define NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_TRANS_LAT (NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_TRANS_LAT_Val << NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Transaction latency Position  */
#define NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_ADDR_LAT (NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_ADDR_LAT_Val << NICGPV_ASIB_QOS_CNTL_MODE_AW_FC_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Address latency Position  */
#define NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_Pos   _U_(20)                                              /**< (NICGPV_ASIB_QOS_CNTL) AR Feedback Control Mode Position */
#define NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_Msk   (_U_(0x1) << NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_Pos)    /**< (NICGPV_ASIB_QOS_CNTL) AR Feedback Control Mode Mask */
#define NICGPV_ASIB_QOS_CNTL_MODE_AR_FC(value) (NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_Msk & ((value) << NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_Pos))
#define   NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_TRANS_LAT_Val _U_(0x0)                                             /**< (NICGPV_ASIB_QOS_CNTL) Transaction latency  */
#define   NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_ADDR_LAT_Val _U_(0x1)                                             /**< (NICGPV_ASIB_QOS_CNTL) Address latency  */
#define NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_TRANS_LAT (NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_TRANS_LAT_Val << NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Transaction latency Position  */
#define NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_ADDR_LAT (NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_ADDR_LAT_Val << NICGPV_ASIB_QOS_CNTL_MODE_AR_FC_Pos) /**< (NICGPV_ASIB_QOS_CNTL) Address latency Position  */
#define NICGPV_ASIB_QOS_CNTL_Msk              _U_(0x001100FF)                                      /**< (NICGPV_ASIB_QOS_CNTL) Register Mask  */


/* -------- NICGPV_ASIB_MAX_OT : (NICGPV Offset: 0x110) (R/W 32) ASIB Maximum Number of Outstanding Transactions Register  -------- */
#define NICGPV_ASIB_MAX_OT_RESETVALUE         _U_(0x00)                                            /**<  (NICGPV_ASIB_MAX_OT) ASIB Maximum Number of Outstanding Transactions Register   Reset Value */

#define NICGPV_ASIB_MAX_OT_AW_MAX_OTF_Pos     _U_(0)                                               /**< (NICGPV_ASIB_MAX_OT) AW Maximum Outstanding Transaction Fraction Position */
#define NICGPV_ASIB_MAX_OT_AW_MAX_OTF_Msk     (_U_(0xFF) << NICGPV_ASIB_MAX_OT_AW_MAX_OTF_Pos)     /**< (NICGPV_ASIB_MAX_OT) AW Maximum Outstanding Transaction Fraction Mask */
#define NICGPV_ASIB_MAX_OT_AW_MAX_OTF(value)  (NICGPV_ASIB_MAX_OT_AW_MAX_OTF_Msk & ((value) << NICGPV_ASIB_MAX_OT_AW_MAX_OTF_Pos))
#define NICGPV_ASIB_MAX_OT_AW_MAX_OTI_Pos     _U_(8)                                               /**< (NICGPV_ASIB_MAX_OT) AW Maximum Outstanding Transaction Integer Position */
#define NICGPV_ASIB_MAX_OT_AW_MAX_OTI_Msk     (_U_(0x3F) << NICGPV_ASIB_MAX_OT_AW_MAX_OTI_Pos)     /**< (NICGPV_ASIB_MAX_OT) AW Maximum Outstanding Transaction Integer Mask */
#define NICGPV_ASIB_MAX_OT_AW_MAX_OTI(value)  (NICGPV_ASIB_MAX_OT_AW_MAX_OTI_Msk & ((value) << NICGPV_ASIB_MAX_OT_AW_MAX_OTI_Pos))
#define NICGPV_ASIB_MAX_OT_AR_MAX_OTF_Pos     _U_(16)                                              /**< (NICGPV_ASIB_MAX_OT) AR Maximum Outstanding Transaction Fraction Position */
#define NICGPV_ASIB_MAX_OT_AR_MAX_OTF_Msk     (_U_(0xFF) << NICGPV_ASIB_MAX_OT_AR_MAX_OTF_Pos)     /**< (NICGPV_ASIB_MAX_OT) AR Maximum Outstanding Transaction Fraction Mask */
#define NICGPV_ASIB_MAX_OT_AR_MAX_OTF(value)  (NICGPV_ASIB_MAX_OT_AR_MAX_OTF_Msk & ((value) << NICGPV_ASIB_MAX_OT_AR_MAX_OTF_Pos))
#define NICGPV_ASIB_MAX_OT_AR_MAX_OTI_Pos     _U_(24)                                              /**< (NICGPV_ASIB_MAX_OT) AR Maximum Outstanding Transaction Integer Position */
#define NICGPV_ASIB_MAX_OT_AR_MAX_OTI_Msk     (_U_(0x3F) << NICGPV_ASIB_MAX_OT_AR_MAX_OTI_Pos)     /**< (NICGPV_ASIB_MAX_OT) AR Maximum Outstanding Transaction Integer Mask */
#define NICGPV_ASIB_MAX_OT_AR_MAX_OTI(value)  (NICGPV_ASIB_MAX_OT_AR_MAX_OTI_Msk & ((value) << NICGPV_ASIB_MAX_OT_AR_MAX_OTI_Pos))
#define NICGPV_ASIB_MAX_OT_Msk                _U_(0x3FFF3FFF)                                      /**< (NICGPV_ASIB_MAX_OT) Register Mask  */


/* -------- NICGPV_ASIB_MAX_COMB_OT : (NICGPV Offset: 0x114) (R/W 32) ASIB Maximum Combined Outstanding Transactions Register  -------- */
#define NICGPV_ASIB_MAX_COMB_OT_RESETVALUE    _U_(0x00)                                            /**<  (NICGPV_ASIB_MAX_COMB_OT) ASIB Maximum Combined Outstanding Transactions Register   Reset Value */

#define NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTF_Pos _U_(0)                                               /**< (NICGPV_ASIB_MAX_COMB_OT) AW and AR Combined Maximum Outstanding Transactions Fraction Position */
#define NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTF_Msk (_U_(0xFF) << NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTF_Pos) /**< (NICGPV_ASIB_MAX_COMB_OT) AW and AR Combined Maximum Outstanding Transactions Fraction Mask */
#define NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTF(value) (NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTF_Msk & ((value) << NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTF_Pos))
#define NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTI_Pos _U_(8)                                               /**< (NICGPV_ASIB_MAX_COMB_OT) AW and AR Combined Maximum Outstanding Transactions Integer Position */
#define NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTI_Msk (_U_(0x7F) << NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTI_Pos) /**< (NICGPV_ASIB_MAX_COMB_OT) AW and AR Combined Maximum Outstanding Transactions Integer Mask */
#define NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTI(value) (NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTI_Msk & ((value) << NICGPV_ASIB_MAX_COMB_OT_AWAR_MAX_OTI_Pos))
#define NICGPV_ASIB_MAX_COMB_OT_Msk           _U_(0x00007FFF)                                      /**< (NICGPV_ASIB_MAX_COMB_OT) Register Mask  */


/* -------- NICGPV_ASIB_AW_P : (NICGPV Offset: 0x118) (R/W 32) ASIB Write Address Channel Peak Rate Register  -------- */
#define NICGPV_ASIB_AW_P_RESETVALUE           _U_(0x00)                                            /**<  (NICGPV_ASIB_AW_P) ASIB Write Address Channel Peak Rate Register   Reset Value */

#define NICGPV_ASIB_AW_P_AW_P_Pos             _U_(24)                                              /**< (NICGPV_ASIB_AW_P) AW Channel Peak Rate Position */
#define NICGPV_ASIB_AW_P_AW_P_Msk             (_U_(0xFF) << NICGPV_ASIB_AW_P_AW_P_Pos)             /**< (NICGPV_ASIB_AW_P) AW Channel Peak Rate Mask */
#define NICGPV_ASIB_AW_P_AW_P(value)          (NICGPV_ASIB_AW_P_AW_P_Msk & ((value) << NICGPV_ASIB_AW_P_AW_P_Pos))
#define NICGPV_ASIB_AW_P_Msk                  _U_(0xFF000000)                                      /**< (NICGPV_ASIB_AW_P) Register Mask  */


/* -------- NICGPV_ASIB_AW_B : (NICGPV Offset: 0x11C) (R/W 32) ASIB Write Address Channel Burstiness Allowance Register  -------- */
#define NICGPV_ASIB_AW_B_RESETVALUE           _U_(0x00)                                            /**<  (NICGPV_ASIB_AW_B) ASIB Write Address Channel Burstiness Allowance Register   Reset Value */

#define NICGPV_ASIB_AW_B_AW_B_Pos             _U_(0)                                               /**< (NICGPV_ASIB_AW_B) AW Channel Burstiness Position */
#define NICGPV_ASIB_AW_B_AW_B_Msk             (_U_(0xFFFF) << NICGPV_ASIB_AW_B_AW_B_Pos)           /**< (NICGPV_ASIB_AW_B) AW Channel Burstiness Mask */
#define NICGPV_ASIB_AW_B_AW_B(value)          (NICGPV_ASIB_AW_B_AW_B_Msk & ((value) << NICGPV_ASIB_AW_B_AW_B_Pos))
#define NICGPV_ASIB_AW_B_Msk                  _U_(0x0000FFFF)                                      /**< (NICGPV_ASIB_AW_B) Register Mask  */


/* -------- NICGPV_ASIB_AW_R : (NICGPV Offset: 0x120) (R/W 32) ASIB Write Address Channel Average Rate Register  -------- */
#define NICGPV_ASIB_AW_R_RESETVALUE           _U_(0x00)                                            /**<  (NICGPV_ASIB_AW_R) ASIB Write Address Channel Average Rate Register   Reset Value */

#define NICGPV_ASIB_AW_R_AW_R_Pos             _U_(20)                                              /**< (NICGPV_ASIB_AW_R) AW Channel Average Rate Position */
#define NICGPV_ASIB_AW_R_AW_R_Msk             (_U_(0xFFF) << NICGPV_ASIB_AW_R_AW_R_Pos)            /**< (NICGPV_ASIB_AW_R) AW Channel Average Rate Mask */
#define NICGPV_ASIB_AW_R_AW_R(value)          (NICGPV_ASIB_AW_R_AW_R_Msk & ((value) << NICGPV_ASIB_AW_R_AW_R_Pos))
#define NICGPV_ASIB_AW_R_Msk                  _U_(0xFFF00000)                                      /**< (NICGPV_ASIB_AW_R) Register Mask  */


/* -------- NICGPV_ASIB_AR_P : (NICGPV Offset: 0x124) (R/W 32) ASIB Read Address Channel Peak Rate Register  -------- */
#define NICGPV_ASIB_AR_P_RESETVALUE           _U_(0x00)                                            /**<  (NICGPV_ASIB_AR_P) ASIB Read Address Channel Peak Rate Register   Reset Value */

#define NICGPV_ASIB_AR_P_AR_P_Pos             _U_(24)                                              /**< (NICGPV_ASIB_AR_P) AR Channel Peak Rate Position */
#define NICGPV_ASIB_AR_P_AR_P_Msk             (_U_(0xFF) << NICGPV_ASIB_AR_P_AR_P_Pos)             /**< (NICGPV_ASIB_AR_P) AR Channel Peak Rate Mask */
#define NICGPV_ASIB_AR_P_AR_P(value)          (NICGPV_ASIB_AR_P_AR_P_Msk & ((value) << NICGPV_ASIB_AR_P_AR_P_Pos))
#define NICGPV_ASIB_AR_P_Msk                  _U_(0xFF000000)                                      /**< (NICGPV_ASIB_AR_P) Register Mask  */


/* -------- NICGPV_ASIB_AR_B : (NICGPV Offset: 0x128) (R/W 32) ASIB Read Address Channel Burstiness Allowance Register  -------- */
#define NICGPV_ASIB_AR_B_RESETVALUE           _U_(0x00)                                            /**<  (NICGPV_ASIB_AR_B) ASIB Read Address Channel Burstiness Allowance Register   Reset Value */

#define NICGPV_ASIB_AR_B_AR_B_Pos             _U_(0)                                               /**< (NICGPV_ASIB_AR_B) AR Channel Burstiness Position */
#define NICGPV_ASIB_AR_B_AR_B_Msk             (_U_(0xFFFF) << NICGPV_ASIB_AR_B_AR_B_Pos)           /**< (NICGPV_ASIB_AR_B) AR Channel Burstiness Mask */
#define NICGPV_ASIB_AR_B_AR_B(value)          (NICGPV_ASIB_AR_B_AR_B_Msk & ((value) << NICGPV_ASIB_AR_B_AR_B_Pos))
#define NICGPV_ASIB_AR_B_Msk                  _U_(0x0000FFFF)                                      /**< (NICGPV_ASIB_AR_B) Register Mask  */


/* -------- NICGPV_ASIB_AR_R : (NICGPV Offset: 0x12C) (R/W 32) ASIB Read Address Channel Average Rate Register  -------- */
#define NICGPV_ASIB_AR_R_RESETVALUE           _U_(0x00)                                            /**<  (NICGPV_ASIB_AR_R) ASIB Read Address Channel Average Rate Register   Reset Value */

#define NICGPV_ASIB_AR_R_AR_R_Pos             _U_(20)                                              /**< (NICGPV_ASIB_AR_R) AR Channel Average Rate Position */
#define NICGPV_ASIB_AR_R_AR_R_Msk             (_U_(0xFFF) << NICGPV_ASIB_AR_R_AR_R_Pos)            /**< (NICGPV_ASIB_AR_R) AR Channel Average Rate Mask */
#define NICGPV_ASIB_AR_R_AR_R(value)          (NICGPV_ASIB_AR_R_AR_R_Msk & ((value) << NICGPV_ASIB_AR_R_AR_R_Pos))
#define NICGPV_ASIB_AR_R_Msk                  _U_(0xFFF00000)                                      /**< (NICGPV_ASIB_AR_R) Register Mask  */


/* -------- NICGPV_ASIB_TARGET_FC : (NICGPV Offset: 0x130) (R/W 32) ASIB Feedback Controlled Target Register  -------- */
#define NICGPV_ASIB_TARGET_FC_RESETVALUE      _U_(0x00)                                            /**<  (NICGPV_ASIB_TARGET_FC) ASIB Feedback Controlled Target Register   Reset Value */

#define NICGPV_ASIB_TARGET_FC_AW_TGT_LATENCY_Pos _U_(0)                                               /**< (NICGPV_ASIB_TARGET_FC) AW Channel Target Latency Position */
#define NICGPV_ASIB_TARGET_FC_AW_TGT_LATENCY_Msk (_U_(0xFFF) << NICGPV_ASIB_TARGET_FC_AW_TGT_LATENCY_Pos) /**< (NICGPV_ASIB_TARGET_FC) AW Channel Target Latency Mask */
#define NICGPV_ASIB_TARGET_FC_AW_TGT_LATENCY(value) (NICGPV_ASIB_TARGET_FC_AW_TGT_LATENCY_Msk & ((value) << NICGPV_ASIB_TARGET_FC_AW_TGT_LATENCY_Pos))
#define NICGPV_ASIB_TARGET_FC_AR_TGT_LATENCY_Pos _U_(16)                                              /**< (NICGPV_ASIB_TARGET_FC) AR Channel Target Latency Position */
#define NICGPV_ASIB_TARGET_FC_AR_TGT_LATENCY_Msk (_U_(0xFFF) << NICGPV_ASIB_TARGET_FC_AR_TGT_LATENCY_Pos) /**< (NICGPV_ASIB_TARGET_FC) AR Channel Target Latency Mask */
#define NICGPV_ASIB_TARGET_FC_AR_TGT_LATENCY(value) (NICGPV_ASIB_TARGET_FC_AR_TGT_LATENCY_Msk & ((value) << NICGPV_ASIB_TARGET_FC_AR_TGT_LATENCY_Pos))
#define NICGPV_ASIB_TARGET_FC_Msk             _U_(0x0FFF0FFF)                                      /**< (NICGPV_ASIB_TARGET_FC) Register Mask  */


/* -------- NICGPV_ASIB_KI_FC : (NICGPV Offset: 0x134) (R/W 32) ASIB Feedback Controlled Scale Register  -------- */
#define NICGPV_ASIB_KI_FC_RESETVALUE          _U_(0x00)                                            /**<  (NICGPV_ASIB_KI_FC) ASIB Feedback Controlled Scale Register   Reset Value */

#define NICGPV_ASIB_KI_FC_AW_KI_Pos           _U_(0)                                               /**< (NICGPV_ASIB_KI_FC) AR QOS Scale Factor Position */
#define NICGPV_ASIB_KI_FC_AW_KI_Msk           (_U_(0x7) << NICGPV_ASIB_KI_FC_AW_KI_Pos)            /**< (NICGPV_ASIB_KI_FC) AR QOS Scale Factor Mask */
#define NICGPV_ASIB_KI_FC_AW_KI(value)        (NICGPV_ASIB_KI_FC_AW_KI_Msk & ((value) << NICGPV_ASIB_KI_FC_AW_KI_Pos))
#define   NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M3_Val _U_(0x0)                                             /**< (NICGPV_ASIB_KI_FC) 2-3  */
#define   NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M4_Val _U_(0x1)                                             /**< (NICGPV_ASIB_KI_FC) 2-4  */
#define   NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M5_Val _U_(0x2)                                             /**< (NICGPV_ASIB_KI_FC) 2-5  */
#define   NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M6_Val _U_(0x3)                                             /**< (NICGPV_ASIB_KI_FC) 2-6  */
#define   NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M7_Val _U_(0x4)                                             /**< (NICGPV_ASIB_KI_FC) 2-7  */
#define   NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M8_Val _U_(0x5)                                             /**< (NICGPV_ASIB_KI_FC) 2-8  */
#define   NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M9_Val _U_(0x6)                                             /**< (NICGPV_ASIB_KI_FC) 2-9  */
#define   NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M10_Val _U_(0x7)                                             /**< (NICGPV_ASIB_KI_FC) 2-10  */
#define NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M3    (NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M3_Val << NICGPV_ASIB_KI_FC_AW_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-3 Position  */
#define NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M4    (NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M4_Val << NICGPV_ASIB_KI_FC_AW_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-4 Position  */
#define NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M5    (NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M5_Val << NICGPV_ASIB_KI_FC_AW_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-5 Position  */
#define NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M6    (NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M6_Val << NICGPV_ASIB_KI_FC_AW_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-6 Position  */
#define NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M7    (NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M7_Val << NICGPV_ASIB_KI_FC_AW_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-7 Position  */
#define NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M8    (NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M8_Val << NICGPV_ASIB_KI_FC_AW_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-8 Position  */
#define NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M9    (NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M9_Val << NICGPV_ASIB_KI_FC_AW_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-9 Position  */
#define NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M10   (NICGPV_ASIB_KI_FC_AW_KI_TWO_POW_M10_Val << NICGPV_ASIB_KI_FC_AW_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-10 Position  */
#define NICGPV_ASIB_KI_FC_AR_KI_Pos           _U_(8)                                               /**< (NICGPV_ASIB_KI_FC) AW QOS Scale Factor Position */
#define NICGPV_ASIB_KI_FC_AR_KI_Msk           (_U_(0x7) << NICGPV_ASIB_KI_FC_AR_KI_Pos)            /**< (NICGPV_ASIB_KI_FC) AW QOS Scale Factor Mask */
#define NICGPV_ASIB_KI_FC_AR_KI(value)        (NICGPV_ASIB_KI_FC_AR_KI_Msk & ((value) << NICGPV_ASIB_KI_FC_AR_KI_Pos))
#define   NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M3_Val _U_(0x0)                                             /**< (NICGPV_ASIB_KI_FC) 2-3  */
#define   NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M4_Val _U_(0x1)                                             /**< (NICGPV_ASIB_KI_FC) 2-4  */
#define   NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M5_Val _U_(0x2)                                             /**< (NICGPV_ASIB_KI_FC) 2-5  */
#define   NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M6_Val _U_(0x3)                                             /**< (NICGPV_ASIB_KI_FC) 2-6  */
#define   NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M7_Val _U_(0x4)                                             /**< (NICGPV_ASIB_KI_FC) 2-7  */
#define   NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M8_Val _U_(0x5)                                             /**< (NICGPV_ASIB_KI_FC) 2-8  */
#define   NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M9_Val _U_(0x6)                                             /**< (NICGPV_ASIB_KI_FC) 2-9  */
#define   NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M10_Val _U_(0x7)                                             /**< (NICGPV_ASIB_KI_FC) 2-10  */
#define NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M3    (NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M3_Val << NICGPV_ASIB_KI_FC_AR_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-3 Position  */
#define NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M4    (NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M4_Val << NICGPV_ASIB_KI_FC_AR_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-4 Position  */
#define NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M5    (NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M5_Val << NICGPV_ASIB_KI_FC_AR_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-5 Position  */
#define NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M6    (NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M6_Val << NICGPV_ASIB_KI_FC_AR_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-6 Position  */
#define NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M7    (NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M7_Val << NICGPV_ASIB_KI_FC_AR_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-7 Position  */
#define NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M8    (NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M8_Val << NICGPV_ASIB_KI_FC_AR_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-8 Position  */
#define NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M9    (NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M9_Val << NICGPV_ASIB_KI_FC_AR_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-9 Position  */
#define NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M10   (NICGPV_ASIB_KI_FC_AR_KI_TWO_POW_M10_Val << NICGPV_ASIB_KI_FC_AR_KI_Pos) /**< (NICGPV_ASIB_KI_FC) 2-10 Position  */
#define NICGPV_ASIB_KI_FC_Msk                 _U_(0x00000707)                                      /**< (NICGPV_ASIB_KI_FC) Register Mask  */


/* -------- NICGPV_ASIB_QOS_RANGE : (NICGPV Offset: 0x138) (R/W 32) ASIB QoS Range Register  -------- */
#define NICGPV_ASIB_QOS_RANGE_RESETVALUE      _U_(0x00)                                            /**<  (NICGPV_ASIB_QOS_RANGE) ASIB QoS Range Register   Reset Value */

#define NICGPV_ASIB_QOS_RANGE_AW_MIN_QOS_Pos  _U_(0)                                               /**< (NICGPV_ASIB_QOS_RANGE) AW Minimum QOS Position */
#define NICGPV_ASIB_QOS_RANGE_AW_MIN_QOS_Msk  (_U_(0xF) << NICGPV_ASIB_QOS_RANGE_AW_MIN_QOS_Pos)   /**< (NICGPV_ASIB_QOS_RANGE) AW Minimum QOS Mask */
#define NICGPV_ASIB_QOS_RANGE_AW_MIN_QOS(value) (NICGPV_ASIB_QOS_RANGE_AW_MIN_QOS_Msk & ((value) << NICGPV_ASIB_QOS_RANGE_AW_MIN_QOS_Pos))
#define NICGPV_ASIB_QOS_RANGE_AW_MAX_QOS_Pos  _U_(8)                                               /**< (NICGPV_ASIB_QOS_RANGE) AW Maximum QOS Position */
#define NICGPV_ASIB_QOS_RANGE_AW_MAX_QOS_Msk  (_U_(0xF) << NICGPV_ASIB_QOS_RANGE_AW_MAX_QOS_Pos)   /**< (NICGPV_ASIB_QOS_RANGE) AW Maximum QOS Mask */
#define NICGPV_ASIB_QOS_RANGE_AW_MAX_QOS(value) (NICGPV_ASIB_QOS_RANGE_AW_MAX_QOS_Msk & ((value) << NICGPV_ASIB_QOS_RANGE_AW_MAX_QOS_Pos))
#define NICGPV_ASIB_QOS_RANGE_AR_MIN_QOS_Pos  _U_(16)                                              /**< (NICGPV_ASIB_QOS_RANGE) AR Minimum QOS Position */
#define NICGPV_ASIB_QOS_RANGE_AR_MIN_QOS_Msk  (_U_(0xF) << NICGPV_ASIB_QOS_RANGE_AR_MIN_QOS_Pos)   /**< (NICGPV_ASIB_QOS_RANGE) AR Minimum QOS Mask */
#define NICGPV_ASIB_QOS_RANGE_AR_MIN_QOS(value) (NICGPV_ASIB_QOS_RANGE_AR_MIN_QOS_Msk & ((value) << NICGPV_ASIB_QOS_RANGE_AR_MIN_QOS_Pos))
#define NICGPV_ASIB_QOS_RANGE_AR_MAX_QOS_Pos  _U_(24)                                              /**< (NICGPV_ASIB_QOS_RANGE) AR Maximum QOS Position */
#define NICGPV_ASIB_QOS_RANGE_AR_MAX_QOS_Msk  (_U_(0xF) << NICGPV_ASIB_QOS_RANGE_AR_MAX_QOS_Pos)   /**< (NICGPV_ASIB_QOS_RANGE) AR Maximum QOS Mask */
#define NICGPV_ASIB_QOS_RANGE_AR_MAX_QOS(value) (NICGPV_ASIB_QOS_RANGE_AR_MAX_QOS_Msk & ((value) << NICGPV_ASIB_QOS_RANGE_AR_MAX_QOS_Pos))
#define NICGPV_ASIB_QOS_RANGE_Msk             _U_(0x0F0F0F0F)                                      /**< (NICGPV_ASIB_QOS_RANGE) Register Mask  */


/* -------- NICGPV_IB_FN_MOD_BM_ISS : (NICGPV Offset: 0x08) (R/W 32) IB Bus Matrix Issuing Functionality Modification Register  -------- */
#define NICGPV_IB_FN_MOD_BM_ISS_RESETVALUE    _U_(0x00)                                            /**<  (NICGPV_IB_FN_MOD_BM_ISS) IB Bus Matrix Issuing Functionality Modification Register   Reset Value */

#define NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_Pos   _U_(0)                                               /**< (NICGPV_IB_FN_MOD_BM_ISS) Issuing Functionality Position */
#define NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_Msk   (_U_(0x3) << NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_Pos)    /**< (NICGPV_IB_FN_MOD_BM_ISS) Issuing Functionality Mask */
#define NICGPV_IB_FN_MOD_BM_ISS_FN_MODE(value) (NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_Msk & ((value) << NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_Pos))
#define   NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_READ_ISS_OVERRIDE_Val _U_(0x0)                                             /**< (NICGPV_IB_FN_MOD_BM_ISS) Read issuing  */
#define   NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_WRITE_ISS_OVERRIDE_Val _U_(0x1)                                             /**< (NICGPV_IB_FN_MOD_BM_ISS) Write issuing  */
#define NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_READ_ISS_OVERRIDE (NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_READ_ISS_OVERRIDE_Val << NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_Pos) /**< (NICGPV_IB_FN_MOD_BM_ISS) Read issuing Position  */
#define NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_WRITE_ISS_OVERRIDE (NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_WRITE_ISS_OVERRIDE_Val << NICGPV_IB_FN_MOD_BM_ISS_FN_MODE_Pos) /**< (NICGPV_IB_FN_MOD_BM_ISS) Write issuing Position  */
#define NICGPV_IB_FN_MOD_BM_ISS_Msk           _U_(0x00000003)                                      /**< (NICGPV_IB_FN_MOD_BM_ISS) Register Mask  */


/* -------- NICGPV_IB_SYNC_MODE : (NICGPV Offset: 0x20) (R/W 32) IB Clock Boundary Synchronization Scheme Register  -------- */
#define NICGPV_IB_SYNC_MODE_RESETVALUE        _U_(0x04)                                            /**<  (NICGPV_IB_SYNC_MODE) IB Clock Boundary Synchronization Scheme Register   Reset Value */

#define NICGPV_IB_SYNC_MODE_SYNC_MODE_Pos     _U_(0)                                               /**< (NICGPV_IB_SYNC_MODE) Read Issuing Position */
#define NICGPV_IB_SYNC_MODE_SYNC_MODE_Msk     (_U_(0x7) << NICGPV_IB_SYNC_MODE_SYNC_MODE_Pos)      /**< (NICGPV_IB_SYNC_MODE) Read Issuing Mask */
#define NICGPV_IB_SYNC_MODE_SYNC_MODE(value)  (NICGPV_IB_SYNC_MODE_SYNC_MODE_Msk & ((value) << NICGPV_IB_SYNC_MODE_SYNC_MODE_Pos))
#define   NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_1_TO_1_Val _U_(0x0)                                             /**< (NICGPV_IB_SYNC_MODE) Sync 1:1  */
#define   NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_M_TO_1_Val _U_(0x1)                                             /**< (NICGPV_IB_SYNC_MODE) Sync m:1  */
#define   NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_1_TO_N_Val _U_(0x2)                                             /**< (NICGPV_IB_SYNC_MODE) Sync 1:n  */
#define   NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_M_TO_N_Val _U_(0x3)                                             /**< (NICGPV_IB_SYNC_MODE) Sync m:n  */
#define   NICGPV_IB_SYNC_MODE_SYNC_MODE_ASYNC_Val _U_(0x4)                                             /**< (NICGPV_IB_SYNC_MODE) Async.  */
#define NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_1_TO_1 (NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_1_TO_1_Val << NICGPV_IB_SYNC_MODE_SYNC_MODE_Pos) /**< (NICGPV_IB_SYNC_MODE) Sync 1:1 Position  */
#define NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_M_TO_1 (NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_M_TO_1_Val << NICGPV_IB_SYNC_MODE_SYNC_MODE_Pos) /**< (NICGPV_IB_SYNC_MODE) Sync m:1 Position  */
#define NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_1_TO_N (NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_1_TO_N_Val << NICGPV_IB_SYNC_MODE_SYNC_MODE_Pos) /**< (NICGPV_IB_SYNC_MODE) Sync 1:n Position  */
#define NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_M_TO_N (NICGPV_IB_SYNC_MODE_SYNC_MODE_SYNC_M_TO_N_Val << NICGPV_IB_SYNC_MODE_SYNC_MODE_Pos) /**< (NICGPV_IB_SYNC_MODE) Sync m:n Position  */
#define NICGPV_IB_SYNC_MODE_SYNC_MODE_ASYNC   (NICGPV_IB_SYNC_MODE_SYNC_MODE_ASYNC_Val << NICGPV_IB_SYNC_MODE_SYNC_MODE_Pos) /**< (NICGPV_IB_SYNC_MODE) Async. Position  */
#define NICGPV_IB_SYNC_MODE_Msk               _U_(0x00000007)                                      /**< (NICGPV_IB_SYNC_MODE) Register Mask  */


/* -------- NICGPV_IB_FN_MOD2_BP_MRG : (NICGPV Offset: 0x24) (R/W 32) IB Bypass Merge register  -------- */
#define NICGPV_IB_FN_MOD2_BP_MRG_RESETVALUE   _U_(0x00)                                            /**<  (NICGPV_IB_FN_MOD2_BP_MRG) IB Bypass Merge register   Reset Value */

#define NICGPV_IB_FN_MOD2_BP_MRG_BP_MRG_Pos   _U_(0)                                               /**< (NICGPV_IB_FN_MOD2_BP_MRG) Bypass Merge Position */
#define NICGPV_IB_FN_MOD2_BP_MRG_BP_MRG_Msk   (_U_(0x1) << NICGPV_IB_FN_MOD2_BP_MRG_BP_MRG_Pos)    /**< (NICGPV_IB_FN_MOD2_BP_MRG) Bypass Merge Mask */
#define NICGPV_IB_FN_MOD2_BP_MRG_BP_MRG(value) (NICGPV_IB_FN_MOD2_BP_MRG_BP_MRG_Msk & ((value) << NICGPV_IB_FN_MOD2_BP_MRG_BP_MRG_Pos))
#define NICGPV_IB_FN_MOD2_BP_MRG_Msk          _U_(0x00000001)                                      /**< (NICGPV_IB_FN_MOD2_BP_MRG) Register Mask  */


/* -------- NICGPV_IB_FN_MOD_LB : (NICGPV Offset: 0x2C) (R/W 32) IB Long Burst Functionality Modification Register  -------- */
#define NICGPV_IB_FN_MOD_LB_RESETVALUE        _U_(0x00)                                            /**<  (NICGPV_IB_FN_MOD_LB) IB Long Burst Functionality Modification Register   Reset Value */

#define NICGPV_IB_FN_MOD_LB_LB_MODE_Pos       _U_(0)                                               /**< (NICGPV_IB_FN_MOD_LB) Long Burst Mode Position */
#define NICGPV_IB_FN_MOD_LB_LB_MODE_Msk       (_U_(0x1) << NICGPV_IB_FN_MOD_LB_LB_MODE_Pos)        /**< (NICGPV_IB_FN_MOD_LB) Long Burst Mode Mask */
#define NICGPV_IB_FN_MOD_LB_LB_MODE(value)    (NICGPV_IB_FN_MOD_LB_LB_MODE_Msk & ((value) << NICGPV_IB_FN_MOD_LB_LB_MODE_Pos))
#define   NICGPV_IB_FN_MOD_LB_LB_MODE_DISABLED_Val _U_(0x0)                                             /**< (NICGPV_IB_FN_MOD_LB) Long bursts cannot be generated at the output of the interface bus.  */
#define   NICGPV_IB_FN_MOD_LB_LB_MODE_ENABLED_Val _U_(0x1)                                             /**< (NICGPV_IB_FN_MOD_LB) Long bursts can be generated at the output of the interface bus.  */
#define NICGPV_IB_FN_MOD_LB_LB_MODE_DISABLED  (NICGPV_IB_FN_MOD_LB_LB_MODE_DISABLED_Val << NICGPV_IB_FN_MOD_LB_LB_MODE_Pos) /**< (NICGPV_IB_FN_MOD_LB) Long bursts cannot be generated at the output of the interface bus. Position  */
#define NICGPV_IB_FN_MOD_LB_LB_MODE_ENABLED   (NICGPV_IB_FN_MOD_LB_LB_MODE_ENABLED_Val << NICGPV_IB_FN_MOD_LB_LB_MODE_Pos) /**< (NICGPV_IB_FN_MOD_LB) Long bursts can be generated at the output of the interface bus. Position  */
#define NICGPV_IB_FN_MOD_LB_Msk               _U_(0x00000001)                                      /**< (NICGPV_IB_FN_MOD_LB) Register Mask  */


/* -------- NICGPV_IB_WR_TIDEMARK : (NICGPV Offset: 0x40) (R/W 32) IB Tidemark Register  -------- */
#define NICGPV_IB_WR_TIDEMARK_WR_TIDEMARK_Pos _U_(0)                                               /**< (NICGPV_IB_WR_TIDEMARK) WR Tidemark Value Position */
#define NICGPV_IB_WR_TIDEMARK_WR_TIDEMARK_Msk (_U_(0xF) << NICGPV_IB_WR_TIDEMARK_WR_TIDEMARK_Pos)  /**< (NICGPV_IB_WR_TIDEMARK) WR Tidemark Value Mask */
#define NICGPV_IB_WR_TIDEMARK_WR_TIDEMARK(value) (NICGPV_IB_WR_TIDEMARK_WR_TIDEMARK_Msk & ((value) << NICGPV_IB_WR_TIDEMARK_WR_TIDEMARK_Pos))
#define NICGPV_IB_WR_TIDEMARK_Msk             _U_(0x0000000F)                                      /**< (NICGPV_IB_WR_TIDEMARK) Register Mask  */


/* -------- NICGPV_IB_FN_MOD : (NICGPV Offset: 0x108) (R/W 32) IB Issuing Functionality Modification Register  -------- */
#define NICGPV_IB_FN_MOD_RESETVALUE           _U_(0x00)                                            /**<  (NICGPV_IB_FN_MOD) IB Issuing Functionality Modification Register   Reset Value */

#define NICGPV_IB_FN_MOD_FN_MODE_Pos          _U_(0)                                               /**< (NICGPV_IB_FN_MOD) Issuing Functionality Mode Position */
#define NICGPV_IB_FN_MOD_FN_MODE_Msk          (_U_(0x3) << NICGPV_IB_FN_MOD_FN_MODE_Pos)           /**< (NICGPV_IB_FN_MOD) Issuing Functionality Mode Mask */
#define NICGPV_IB_FN_MOD_FN_MODE(value)       (NICGPV_IB_FN_MOD_FN_MODE_Msk & ((value) << NICGPV_IB_FN_MOD_FN_MODE_Pos))
#define   NICGPV_IB_FN_MOD_FN_MODE_READ_ISS_OVERRIDE_Val _U_(0x0)                                             /**< (NICGPV_IB_FN_MOD) Read issuing  */
#define   NICGPV_IB_FN_MOD_FN_MODE_WRITE_ISS_OVERRIDE_Val _U_(0x1)                                             /**< (NICGPV_IB_FN_MOD) Write issuing  */
#define NICGPV_IB_FN_MOD_FN_MODE_READ_ISS_OVERRIDE (NICGPV_IB_FN_MOD_FN_MODE_READ_ISS_OVERRIDE_Val << NICGPV_IB_FN_MOD_FN_MODE_Pos) /**< (NICGPV_IB_FN_MOD) Read issuing Position  */
#define NICGPV_IB_FN_MOD_FN_MODE_WRITE_ISS_OVERRIDE (NICGPV_IB_FN_MOD_FN_MODE_WRITE_ISS_OVERRIDE_Val << NICGPV_IB_FN_MOD_FN_MODE_Pos) /**< (NICGPV_IB_FN_MOD) Write issuing Position  */
#define NICGPV_IB_FN_MOD_Msk                  _U_(0x00000003)                                      /**< (NICGPV_IB_FN_MOD) Register Mask  */


/** \brief NICGPV register offsets definitions */
#define NICGPV_AMIB_FN_MOD_BM_ISS_REG_OFST (0x08)              /**< (NICGPV_AMIB_FN_MOD_BM_ISS) AMIB Bus Matrix Issuing Functionality Modification Register  Offset */
#define NICGPV_ASIB_READ_QOS_REG_OFST  (0x100)             /**< (NICGPV_ASIB_READ_QOS) ASIB Read Channel QoS Register  Offset */
#define NICGPV_ASIB_WRITE_QOS_REG_OFST (0x104)             /**< (NICGPV_ASIB_WRITE_QOS) ASIB Write Channel QoS Register  Offset */
#define NICGPV_ASIB_QOS_CNTL_REG_OFST  (0x10C)             /**< (NICGPV_ASIB_QOS_CNTL) ASIB QoS Control Register  Offset */
#define NICGPV_ASIB_MAX_OT_REG_OFST    (0x110)             /**< (NICGPV_ASIB_MAX_OT) ASIB Maximum Number of Outstanding Transactions Register  Offset */
#define NICGPV_ASIB_MAX_COMB_OT_REG_OFST (0x114)             /**< (NICGPV_ASIB_MAX_COMB_OT) ASIB Maximum Combined Outstanding Transactions Register  Offset */
#define NICGPV_ASIB_AW_P_REG_OFST      (0x118)             /**< (NICGPV_ASIB_AW_P) ASIB Write Address Channel Peak Rate Register  Offset */
#define NICGPV_ASIB_AW_B_REG_OFST      (0x11C)             /**< (NICGPV_ASIB_AW_B) ASIB Write Address Channel Burstiness Allowance Register  Offset */
#define NICGPV_ASIB_AW_R_REG_OFST      (0x120)             /**< (NICGPV_ASIB_AW_R) ASIB Write Address Channel Average Rate Register  Offset */
#define NICGPV_ASIB_AR_P_REG_OFST      (0x124)             /**< (NICGPV_ASIB_AR_P) ASIB Read Address Channel Peak Rate Register  Offset */
#define NICGPV_ASIB_AR_B_REG_OFST      (0x128)             /**< (NICGPV_ASIB_AR_B) ASIB Read Address Channel Burstiness Allowance Register  Offset */
#define NICGPV_ASIB_AR_R_REG_OFST      (0x12C)             /**< (NICGPV_ASIB_AR_R) ASIB Read Address Channel Average Rate Register  Offset */
#define NICGPV_ASIB_TARGET_FC_REG_OFST (0x130)             /**< (NICGPV_ASIB_TARGET_FC) ASIB Feedback Controlled Target Register  Offset */
#define NICGPV_ASIB_KI_FC_REG_OFST     (0x134)             /**< (NICGPV_ASIB_KI_FC) ASIB Feedback Controlled Scale Register  Offset */
#define NICGPV_ASIB_QOS_RANGE_REG_OFST (0x138)             /**< (NICGPV_ASIB_QOS_RANGE) ASIB QoS Range Register  Offset */
#define NICGPV_IB_FN_MOD_BM_ISS_REG_OFST (0x08)              /**< (NICGPV_IB_FN_MOD_BM_ISS) IB Bus Matrix Issuing Functionality Modification Register  Offset */
#define NICGPV_IB_SYNC_MODE_REG_OFST   (0x20)              /**< (NICGPV_IB_SYNC_MODE) IB Clock Boundary Synchronization Scheme Register  Offset */
#define NICGPV_IB_FN_MOD2_BP_MRG_REG_OFST (0x24)              /**< (NICGPV_IB_FN_MOD2_BP_MRG) IB Bypass Merge register  Offset */
#define NICGPV_IB_FN_MOD_LB_REG_OFST   (0x2C)              /**< (NICGPV_IB_FN_MOD_LB) IB Long Burst Functionality Modification Register  Offset */
#define NICGPV_IB_WR_TIDEMARK_REG_OFST (0x40)              /**< (NICGPV_IB_WR_TIDEMARK) IB Tidemark Register  Offset */
#define NICGPV_IB_FN_MOD_REG_OFST      (0x108)             /**< (NICGPV_IB_FN_MOD) IB Issuing Functionality Modification Register  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief NICGPV_AMIB register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       NICGPV_AMIB_FN_MOD_BM_ISS; /**< Offset: 0x08 (R/W  32) AMIB Bus Matrix Issuing Functionality Modification Register  */
  __I   uint8_t                        Reserved2[0xFF4];
} nicgpv_amib_registers_t;

/** \brief NICGPV_ASIB register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x100];
  __IO  uint32_t                       NICGPV_ASIB_READ_QOS; /**< Offset: 0x100 (R/W  32) ASIB Read Channel QoS Register  */
  __IO  uint32_t                       NICGPV_ASIB_WRITE_QOS; /**< Offset: 0x104 (R/W  32) ASIB Write Channel QoS Register  */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       NICGPV_ASIB_QOS_CNTL; /**< Offset: 0x10C (R/W  32) ASIB QoS Control Register  */
  __IO  uint32_t                       NICGPV_ASIB_MAX_OT; /**< Offset: 0x110 (R/W  32) ASIB Maximum Number of Outstanding Transactions Register  */
  __IO  uint32_t                       NICGPV_ASIB_MAX_COMB_OT; /**< Offset: 0x114 (R/W  32) ASIB Maximum Combined Outstanding Transactions Register  */
  __IO  uint32_t                       NICGPV_ASIB_AW_P;   /**< Offset: 0x118 (R/W  32) ASIB Write Address Channel Peak Rate Register  */
  __IO  uint32_t                       NICGPV_ASIB_AW_B;   /**< Offset: 0x11C (R/W  32) ASIB Write Address Channel Burstiness Allowance Register  */
  __IO  uint32_t                       NICGPV_ASIB_AW_R;   /**< Offset: 0x120 (R/W  32) ASIB Write Address Channel Average Rate Register  */
  __IO  uint32_t                       NICGPV_ASIB_AR_P;   /**< Offset: 0x124 (R/W  32) ASIB Read Address Channel Peak Rate Register  */
  __IO  uint32_t                       NICGPV_ASIB_AR_B;   /**< Offset: 0x128 (R/W  32) ASIB Read Address Channel Burstiness Allowance Register  */
  __IO  uint32_t                       NICGPV_ASIB_AR_R;   /**< Offset: 0x12C (R/W  32) ASIB Read Address Channel Average Rate Register  */
  __IO  uint32_t                       NICGPV_ASIB_TARGET_FC; /**< Offset: 0x130 (R/W  32) ASIB Feedback Controlled Target Register  */
  __IO  uint32_t                       NICGPV_ASIB_KI_FC;  /**< Offset: 0x134 (R/W  32) ASIB Feedback Controlled Scale Register  */
  __IO  uint32_t                       NICGPV_ASIB_QOS_RANGE; /**< Offset: 0x138 (R/W  32) ASIB QoS Range Register  */
  __I   uint8_t                        Reserved3[0xEC4];
} nicgpv_asib_registers_t;

/** \brief NICGPV_IB register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       NICGPV_IB_FN_MOD_BM_ISS; /**< Offset: 0x08 (R/W  32) IB Bus Matrix Issuing Functionality Modification Register  */
  __I   uint8_t                        Reserved2[0x14];
  __IO  uint32_t                       NICGPV_IB_SYNC_MODE; /**< Offset: 0x20 (R/W  32) IB Clock Boundary Synchronization Scheme Register  */
  __IO  uint32_t                       NICGPV_IB_FN_MOD2_BP_MRG; /**< Offset: 0x24 (R/W  32) IB Bypass Merge register  */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       NICGPV_IB_FN_MOD_LB; /**< Offset: 0x2C (R/W  32) IB Long Burst Functionality Modification Register  */
  __I   uint8_t                        Reserved4[0x10];
  __IO  uint32_t                       NICGPV_IB_WR_TIDEMARK; /**< Offset: 0x40 (R/W  32) IB Tidemark Register  */
  __I   uint8_t                        Reserved5[0xC4];
  __IO  uint32_t                       NICGPV_IB_FN_MOD;   /**< Offset: 0x108 (R/W  32) IB Issuing Functionality Modification Register  */
  __I   uint8_t                        Reserved6[0xEF4];
} nicgpv_ib_registers_t;

#define NICGPV_AMIB_NUMBER _U_(15)

#define NICGPV_ASIB_NUMBER _U_(11)

#define NICGPV_IB_NUMBER _U_(2)

/** \brief NICGPV register API structure */
typedef struct
{  /* NIC-400 Global Programmers View */
  __I   uint8_t                        Reserved1[0x2000];
        nicgpv_amib_registers_t        NICGPV_AMIB[NICGPV_AMIB_NUMBER]; /**< Offset: 0x2000  */
  __I   uint8_t                        Reserved2[0x31000];
        nicgpv_asib_registers_t        NICGPV_ASIB[NICGPV_ASIB_NUMBER]; /**< Offset: 0x42000  */
  __I   uint8_t                        Reserved3[0x75000];
        nicgpv_ib_registers_t          NICGPV_IB[NICGPV_IB_NUMBER]; /**< Offset: 0xC2000  */
} nicgpv_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_NICGPV_COMPONENT_H_ */
