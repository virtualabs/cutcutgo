/*
 * Component description for EMAC
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
#ifndef _SAM9X_EMAC_COMPONENT_H_
#define _SAM9X_EMAC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EMAC                                         */
/* ************************************************************************** */

/* -------- EMAC_SAxB : (EMAC Offset: 0x00) (R/W 32) Specific Address X Bottom Register -------- */
#define EMAC_SAxB_ADDR_Pos                    _U_(0)                                               /**< (EMAC_SAxB) Specific Address X Bottom Position */
#define EMAC_SAxB_ADDR_Msk                    (_U_(0xFFFFFFFF) << EMAC_SAxB_ADDR_Pos)              /**< (EMAC_SAxB) Specific Address X Bottom Mask */
#define EMAC_SAxB_ADDR(value)                 (EMAC_SAxB_ADDR_Msk & ((value) << EMAC_SAxB_ADDR_Pos))
#define EMAC_SAxB_Msk                         _U_(0xFFFFFFFF)                                      /**< (EMAC_SAxB) Register Mask  */


/* -------- EMAC_SAxT : (EMAC Offset: 0x04) (R/W 32) Specific Address X Top Register -------- */
#define EMAC_SAxT_ADDR_Pos                    _U_(0)                                               /**< (EMAC_SAxT) Specific Address X Top Position */
#define EMAC_SAxT_ADDR_Msk                    (_U_(0xFFFF) << EMAC_SAxT_ADDR_Pos)                  /**< (EMAC_SAxT) Specific Address X Top Mask */
#define EMAC_SAxT_ADDR(value)                 (EMAC_SAxT_ADDR_Msk & ((value) << EMAC_SAxT_ADDR_Pos))
#define EMAC_SAxT_Msk                         _U_(0x0000FFFF)                                      /**< (EMAC_SAxT) Register Mask  */


/* -------- EMAC_NCR : (EMAC Offset: 0x00) (R/W 32) Network Control Register -------- */
#define EMAC_NCR_LB_Pos                       _U_(0)                                               /**< (EMAC_NCR) LoopBack Position */
#define EMAC_NCR_LB_Msk                       (_U_(0x1) << EMAC_NCR_LB_Pos)                        /**< (EMAC_NCR) LoopBack Mask */
#define EMAC_NCR_LB(value)                    (EMAC_NCR_LB_Msk & ((value) << EMAC_NCR_LB_Pos))    
#define EMAC_NCR_LLB_Pos                      _U_(1)                                               /**< (EMAC_NCR) Loopback Local Position */
#define EMAC_NCR_LLB_Msk                      (_U_(0x1) << EMAC_NCR_LLB_Pos)                       /**< (EMAC_NCR) Loopback Local Mask */
#define EMAC_NCR_LLB(value)                   (EMAC_NCR_LLB_Msk & ((value) << EMAC_NCR_LLB_Pos))  
#define EMAC_NCR_RE_Pos                       _U_(2)                                               /**< (EMAC_NCR) Receive Enable Position */
#define EMAC_NCR_RE_Msk                       (_U_(0x1) << EMAC_NCR_RE_Pos)                        /**< (EMAC_NCR) Receive Enable Mask */
#define EMAC_NCR_RE(value)                    (EMAC_NCR_RE_Msk & ((value) << EMAC_NCR_RE_Pos))    
#define EMAC_NCR_TE_Pos                       _U_(3)                                               /**< (EMAC_NCR) Transmit Enable Position */
#define EMAC_NCR_TE_Msk                       (_U_(0x1) << EMAC_NCR_TE_Pos)                        /**< (EMAC_NCR) Transmit Enable Mask */
#define EMAC_NCR_TE(value)                    (EMAC_NCR_TE_Msk & ((value) << EMAC_NCR_TE_Pos))    
#define EMAC_NCR_MPE_Pos                      _U_(4)                                               /**< (EMAC_NCR) Management Port Enable Position */
#define EMAC_NCR_MPE_Msk                      (_U_(0x1) << EMAC_NCR_MPE_Pos)                       /**< (EMAC_NCR) Management Port Enable Mask */
#define EMAC_NCR_MPE(value)                   (EMAC_NCR_MPE_Msk & ((value) << EMAC_NCR_MPE_Pos))  
#define EMAC_NCR_CLRSTAT_Pos                  _U_(5)                                               /**< (EMAC_NCR) Clear Statistics Registers Position */
#define EMAC_NCR_CLRSTAT_Msk                  (_U_(0x1) << EMAC_NCR_CLRSTAT_Pos)                   /**< (EMAC_NCR) Clear Statistics Registers Mask */
#define EMAC_NCR_CLRSTAT(value)               (EMAC_NCR_CLRSTAT_Msk & ((value) << EMAC_NCR_CLRSTAT_Pos))
#define EMAC_NCR_INCSTAT_Pos                  _U_(6)                                               /**< (EMAC_NCR) Increment Statistics Registers Position */
#define EMAC_NCR_INCSTAT_Msk                  (_U_(0x1) << EMAC_NCR_INCSTAT_Pos)                   /**< (EMAC_NCR) Increment Statistics Registers Mask */
#define EMAC_NCR_INCSTAT(value)               (EMAC_NCR_INCSTAT_Msk & ((value) << EMAC_NCR_INCSTAT_Pos))
#define EMAC_NCR_WESTAT_Pos                   _U_(7)                                               /**< (EMAC_NCR) Write Enable for Statistics Registers Position */
#define EMAC_NCR_WESTAT_Msk                   (_U_(0x1) << EMAC_NCR_WESTAT_Pos)                    /**< (EMAC_NCR) Write Enable for Statistics Registers Mask */
#define EMAC_NCR_WESTAT(value)                (EMAC_NCR_WESTAT_Msk & ((value) << EMAC_NCR_WESTAT_Pos))
#define EMAC_NCR_BP_Pos                       _U_(8)                                               /**< (EMAC_NCR) Back Pressure Position */
#define EMAC_NCR_BP_Msk                       (_U_(0x1) << EMAC_NCR_BP_Pos)                        /**< (EMAC_NCR) Back Pressure Mask */
#define EMAC_NCR_BP(value)                    (EMAC_NCR_BP_Msk & ((value) << EMAC_NCR_BP_Pos))    
#define EMAC_NCR_TSTART_Pos                   _U_(9)                                               /**< (EMAC_NCR) Start Transmission Position */
#define EMAC_NCR_TSTART_Msk                   (_U_(0x1) << EMAC_NCR_TSTART_Pos)                    /**< (EMAC_NCR) Start Transmission Mask */
#define EMAC_NCR_TSTART(value)                (EMAC_NCR_TSTART_Msk & ((value) << EMAC_NCR_TSTART_Pos))
#define EMAC_NCR_THALT_Pos                    _U_(10)                                              /**< (EMAC_NCR) Transmit Halt Position */
#define EMAC_NCR_THALT_Msk                    (_U_(0x1) << EMAC_NCR_THALT_Pos)                     /**< (EMAC_NCR) Transmit Halt Mask */
#define EMAC_NCR_THALT(value)                 (EMAC_NCR_THALT_Msk & ((value) << EMAC_NCR_THALT_Pos))
#define EMAC_NCR_TPFR_Pos                     _U_(11)                                              /**< (EMAC_NCR) Transmit Pause Frame Position */
#define EMAC_NCR_TPFR_Msk                     (_U_(0x1) << EMAC_NCR_TPFR_Pos)                      /**< (EMAC_NCR) Transmit Pause Frame Mask */
#define EMAC_NCR_TPFR(value)                  (EMAC_NCR_TPFR_Msk & ((value) << EMAC_NCR_TPFR_Pos))
#define EMAC_NCR_TZQ_Pos                      _U_(12)                                              /**< (EMAC_NCR) Transmit Zero Quantum Pause Frame Position */
#define EMAC_NCR_TZQ_Msk                      (_U_(0x1) << EMAC_NCR_TZQ_Pos)                       /**< (EMAC_NCR) Transmit Zero Quantum Pause Frame Mask */
#define EMAC_NCR_TZQ(value)                   (EMAC_NCR_TZQ_Msk & ((value) << EMAC_NCR_TZQ_Pos))  
#define EMAC_NCR_Msk                          _U_(0x00001FFF)                                      /**< (EMAC_NCR) Register Mask  */


/* -------- EMAC_NCFGR : (EMAC Offset: 0x04) (R/W 32) Network Configuration Register -------- */
#define EMAC_NCFGR_SPD_Pos                    _U_(0)                                               /**< (EMAC_NCFGR) Speed Position */
#define EMAC_NCFGR_SPD_Msk                    (_U_(0x1) << EMAC_NCFGR_SPD_Pos)                     /**< (EMAC_NCFGR) Speed Mask */
#define EMAC_NCFGR_SPD(value)                 (EMAC_NCFGR_SPD_Msk & ((value) << EMAC_NCFGR_SPD_Pos))
#define EMAC_NCFGR_FD_Pos                     _U_(1)                                               /**< (EMAC_NCFGR) Full Duplex Position */
#define EMAC_NCFGR_FD_Msk                     (_U_(0x1) << EMAC_NCFGR_FD_Pos)                      /**< (EMAC_NCFGR) Full Duplex Mask */
#define EMAC_NCFGR_FD(value)                  (EMAC_NCFGR_FD_Msk & ((value) << EMAC_NCFGR_FD_Pos))
#define EMAC_NCFGR_JFRAME_Pos                 _U_(3)                                               /**< (EMAC_NCFGR) Jumbo Frames Position */
#define EMAC_NCFGR_JFRAME_Msk                 (_U_(0x1) << EMAC_NCFGR_JFRAME_Pos)                  /**< (EMAC_NCFGR) Jumbo Frames Mask */
#define EMAC_NCFGR_JFRAME(value)              (EMAC_NCFGR_JFRAME_Msk & ((value) << EMAC_NCFGR_JFRAME_Pos))
#define EMAC_NCFGR_CAF_Pos                    _U_(4)                                               /**< (EMAC_NCFGR) Copy All Frames Position */
#define EMAC_NCFGR_CAF_Msk                    (_U_(0x1) << EMAC_NCFGR_CAF_Pos)                     /**< (EMAC_NCFGR) Copy All Frames Mask */
#define EMAC_NCFGR_CAF(value)                 (EMAC_NCFGR_CAF_Msk & ((value) << EMAC_NCFGR_CAF_Pos))
#define EMAC_NCFGR_NBC_Pos                    _U_(5)                                               /**< (EMAC_NCFGR) No Broadcast Position */
#define EMAC_NCFGR_NBC_Msk                    (_U_(0x1) << EMAC_NCFGR_NBC_Pos)                     /**< (EMAC_NCFGR) No Broadcast Mask */
#define EMAC_NCFGR_NBC(value)                 (EMAC_NCFGR_NBC_Msk & ((value) << EMAC_NCFGR_NBC_Pos))
#define EMAC_NCFGR_MTI_Pos                    _U_(6)                                               /**< (EMAC_NCFGR) Multicast Hash Enable Position */
#define EMAC_NCFGR_MTI_Msk                    (_U_(0x1) << EMAC_NCFGR_MTI_Pos)                     /**< (EMAC_NCFGR) Multicast Hash Enable Mask */
#define EMAC_NCFGR_MTI(value)                 (EMAC_NCFGR_MTI_Msk & ((value) << EMAC_NCFGR_MTI_Pos))
#define EMAC_NCFGR_UNI_Pos                    _U_(7)                                               /**< (EMAC_NCFGR) Unicast Hash Enable Position */
#define EMAC_NCFGR_UNI_Msk                    (_U_(0x1) << EMAC_NCFGR_UNI_Pos)                     /**< (EMAC_NCFGR) Unicast Hash Enable Mask */
#define EMAC_NCFGR_UNI(value)                 (EMAC_NCFGR_UNI_Msk & ((value) << EMAC_NCFGR_UNI_Pos))
#define EMAC_NCFGR_BIG_Pos                    _U_(8)                                               /**< (EMAC_NCFGR) Receive 1536 Bytes Frames Position */
#define EMAC_NCFGR_BIG_Msk                    (_U_(0x1) << EMAC_NCFGR_BIG_Pos)                     /**< (EMAC_NCFGR) Receive 1536 Bytes Frames Mask */
#define EMAC_NCFGR_BIG(value)                 (EMAC_NCFGR_BIG_Msk & ((value) << EMAC_NCFGR_BIG_Pos))
#define EMAC_NCFGR_EAE_Pos                    _U_(9)                                               /**< (EMAC_NCFGR) External Address Match Enable Position */
#define EMAC_NCFGR_EAE_Msk                    (_U_(0x1) << EMAC_NCFGR_EAE_Pos)                     /**< (EMAC_NCFGR) External Address Match Enable Mask */
#define EMAC_NCFGR_EAE(value)                 (EMAC_NCFGR_EAE_Msk & ((value) << EMAC_NCFGR_EAE_Pos))
#define EMAC_NCFGR_CLK_Pos                    _U_(10)                                              /**< (EMAC_NCFGR) MDC Clock Divider Position */
#define EMAC_NCFGR_CLK_Msk                    (_U_(0x3) << EMAC_NCFGR_CLK_Pos)                     /**< (EMAC_NCFGR) MDC Clock Divider Mask */
#define EMAC_NCFGR_CLK(value)                 (EMAC_NCFGR_CLK_Msk & ((value) << EMAC_NCFGR_CLK_Pos))
#define   EMAC_NCFGR_CLK_MCK_8_Val            _U_(0x0)                                             /**< (EMAC_NCFGR) MCK divided by 8 (MCK up to 20 MHz)  */
#define   EMAC_NCFGR_CLK_MCK_16_Val           _U_(0x1)                                             /**< (EMAC_NCFGR) MCK divided by 16 (MCK up to 40 MHz)  */
#define   EMAC_NCFGR_CLK_MCK_32_Val           _U_(0x2)                                             /**< (EMAC_NCFGR) MCK divided by 32 (MCK up to 80 MHz)  */
#define   EMAC_NCFGR_CLK_MCK_64_Val           _U_(0x3)                                             /**< (EMAC_NCFGR) MCK divided by 64 (MCK up to 160 MHz)  */
#define EMAC_NCFGR_CLK_MCK_8                  (EMAC_NCFGR_CLK_MCK_8_Val << EMAC_NCFGR_CLK_Pos)     /**< (EMAC_NCFGR) MCK divided by 8 (MCK up to 20 MHz) Position  */
#define EMAC_NCFGR_CLK_MCK_16                 (EMAC_NCFGR_CLK_MCK_16_Val << EMAC_NCFGR_CLK_Pos)    /**< (EMAC_NCFGR) MCK divided by 16 (MCK up to 40 MHz) Position  */
#define EMAC_NCFGR_CLK_MCK_32                 (EMAC_NCFGR_CLK_MCK_32_Val << EMAC_NCFGR_CLK_Pos)    /**< (EMAC_NCFGR) MCK divided by 32 (MCK up to 80 MHz) Position  */
#define EMAC_NCFGR_CLK_MCK_64                 (EMAC_NCFGR_CLK_MCK_64_Val << EMAC_NCFGR_CLK_Pos)    /**< (EMAC_NCFGR) MCK divided by 64 (MCK up to 160 MHz) Position  */
#define EMAC_NCFGR_RTY_Pos                    _U_(12)                                              /**< (EMAC_NCFGR) Retry Test Position */
#define EMAC_NCFGR_RTY_Msk                    (_U_(0x1) << EMAC_NCFGR_RTY_Pos)                     /**< (EMAC_NCFGR) Retry Test Mask */
#define EMAC_NCFGR_RTY(value)                 (EMAC_NCFGR_RTY_Msk & ((value) << EMAC_NCFGR_RTY_Pos))
#define EMAC_NCFGR_PAE_Pos                    _U_(13)                                              /**< (EMAC_NCFGR) Pause Enable Position */
#define EMAC_NCFGR_PAE_Msk                    (_U_(0x1) << EMAC_NCFGR_PAE_Pos)                     /**< (EMAC_NCFGR) Pause Enable Mask */
#define EMAC_NCFGR_PAE(value)                 (EMAC_NCFGR_PAE_Msk & ((value) << EMAC_NCFGR_PAE_Pos))
#define EMAC_NCFGR_RBOF_Pos                   _U_(14)                                              /**< (EMAC_NCFGR) Receive Buffer Offset Position */
#define EMAC_NCFGR_RBOF_Msk                   (_U_(0x3) << EMAC_NCFGR_RBOF_Pos)                    /**< (EMAC_NCFGR) Receive Buffer Offset Mask */
#define EMAC_NCFGR_RBOF(value)                (EMAC_NCFGR_RBOF_Msk & ((value) << EMAC_NCFGR_RBOF_Pos))
#define   EMAC_NCFGR_RBOF_OFFSET_0_Val        _U_(0x0)                                             /**< (EMAC_NCFGR) No offset from start of receive buffer  */
#define   EMAC_NCFGR_RBOF_OFFSET_1_Val        _U_(0x1)                                             /**< (EMAC_NCFGR) One-byte offset from start of receive buffer  */
#define   EMAC_NCFGR_RBOF_OFFSET_2_Val        _U_(0x2)                                             /**< (EMAC_NCFGR) Two-byte offset from start of receive buffer  */
#define   EMAC_NCFGR_RBOF_OFFSET_3_Val        _U_(0x3)                                             /**< (EMAC_NCFGR) Three-byte offset from start of receive buffer  */
#define EMAC_NCFGR_RBOF_OFFSET_0              (EMAC_NCFGR_RBOF_OFFSET_0_Val << EMAC_NCFGR_RBOF_Pos) /**< (EMAC_NCFGR) No offset from start of receive buffer Position  */
#define EMAC_NCFGR_RBOF_OFFSET_1              (EMAC_NCFGR_RBOF_OFFSET_1_Val << EMAC_NCFGR_RBOF_Pos) /**< (EMAC_NCFGR) One-byte offset from start of receive buffer Position  */
#define EMAC_NCFGR_RBOF_OFFSET_2              (EMAC_NCFGR_RBOF_OFFSET_2_Val << EMAC_NCFGR_RBOF_Pos) /**< (EMAC_NCFGR) Two-byte offset from start of receive buffer Position  */
#define EMAC_NCFGR_RBOF_OFFSET_3              (EMAC_NCFGR_RBOF_OFFSET_3_Val << EMAC_NCFGR_RBOF_Pos) /**< (EMAC_NCFGR) Three-byte offset from start of receive buffer Position  */
#define EMAC_NCFGR_RLCE_Pos                   _U_(16)                                              /**< (EMAC_NCFGR) Receive Length Field Checking Enable Position */
#define EMAC_NCFGR_RLCE_Msk                   (_U_(0x1) << EMAC_NCFGR_RLCE_Pos)                    /**< (EMAC_NCFGR) Receive Length Field Checking Enable Mask */
#define EMAC_NCFGR_RLCE(value)                (EMAC_NCFGR_RLCE_Msk & ((value) << EMAC_NCFGR_RLCE_Pos))
#define EMAC_NCFGR_DRFCS_Pos                  _U_(17)                                              /**< (EMAC_NCFGR) Discard Receive FCS Position */
#define EMAC_NCFGR_DRFCS_Msk                  (_U_(0x1) << EMAC_NCFGR_DRFCS_Pos)                   /**< (EMAC_NCFGR) Discard Receive FCS Mask */
#define EMAC_NCFGR_DRFCS(value)               (EMAC_NCFGR_DRFCS_Msk & ((value) << EMAC_NCFGR_DRFCS_Pos))
#define EMAC_NCFGR_EFRHD_Pos                  _U_(18)                                              /**< (EMAC_NCFGR) Enable Frames Received in Half Duplex Position */
#define EMAC_NCFGR_EFRHD_Msk                  (_U_(0x1) << EMAC_NCFGR_EFRHD_Pos)                   /**< (EMAC_NCFGR) Enable Frames Received in Half Duplex Mask */
#define EMAC_NCFGR_EFRHD(value)               (EMAC_NCFGR_EFRHD_Msk & ((value) << EMAC_NCFGR_EFRHD_Pos))
#define EMAC_NCFGR_IRXFCS_Pos                 _U_(19)                                              /**< (EMAC_NCFGR) Ignore RX FCS Position */
#define EMAC_NCFGR_IRXFCS_Msk                 (_U_(0x1) << EMAC_NCFGR_IRXFCS_Pos)                  /**< (EMAC_NCFGR) Ignore RX FCS Mask */
#define EMAC_NCFGR_IRXFCS(value)              (EMAC_NCFGR_IRXFCS_Msk & ((value) << EMAC_NCFGR_IRXFCS_Pos))
#define EMAC_NCFGR_Msk                        _U_(0x000FFFFB)                                      /**< (EMAC_NCFGR) Register Mask  */


/* -------- EMAC_NSR : (EMAC Offset: 0x08) ( R/ 32) Network Status Register -------- */
#define EMAC_NSR_LINKR_Pos                    _U_(0)                                               /**< (EMAC_NSR) Link Pin Status Position */
#define EMAC_NSR_LINKR_Msk                    (_U_(0x1) << EMAC_NSR_LINKR_Pos)                     /**< (EMAC_NSR) Link Pin Status Mask */
#define EMAC_NSR_LINKR(value)                 (EMAC_NSR_LINKR_Msk & ((value) << EMAC_NSR_LINKR_Pos))
#define EMAC_NSR_MDIO_Pos                     _U_(1)                                               /**< (EMAC_NSR) MDIO Input Status Position */
#define EMAC_NSR_MDIO_Msk                     (_U_(0x1) << EMAC_NSR_MDIO_Pos)                      /**< (EMAC_NSR) MDIO Input Status Mask */
#define EMAC_NSR_MDIO(value)                  (EMAC_NSR_MDIO_Msk & ((value) << EMAC_NSR_MDIO_Pos))
#define EMAC_NSR_IDLE_Pos                     _U_(2)                                               /**< (EMAC_NSR) PHY Management Logic Status Position */
#define EMAC_NSR_IDLE_Msk                     (_U_(0x1) << EMAC_NSR_IDLE_Pos)                      /**< (EMAC_NSR) PHY Management Logic Status Mask */
#define EMAC_NSR_IDLE(value)                  (EMAC_NSR_IDLE_Msk & ((value) << EMAC_NSR_IDLE_Pos))
#define EMAC_NSR_Msk                          _U_(0x00000007)                                      /**< (EMAC_NSR) Register Mask  */


/* -------- EMAC_TSR : (EMAC Offset: 0x14) (R/W 32) Transmit Status Register -------- */
#define EMAC_TSR_UBR_Pos                      _U_(0)                                               /**< (EMAC_TSR) Used Bit Read (cleared by writing a one to this bit) Position */
#define EMAC_TSR_UBR_Msk                      (_U_(0x1) << EMAC_TSR_UBR_Pos)                       /**< (EMAC_TSR) Used Bit Read (cleared by writing a one to this bit) Mask */
#define EMAC_TSR_UBR(value)                   (EMAC_TSR_UBR_Msk & ((value) << EMAC_TSR_UBR_Pos))  
#define EMAC_TSR_COL_Pos                      _U_(1)                                               /**< (EMAC_TSR) Collision Occurred (cleared by writing a one to this bit) Position */
#define EMAC_TSR_COL_Msk                      (_U_(0x1) << EMAC_TSR_COL_Pos)                       /**< (EMAC_TSR) Collision Occurred (cleared by writing a one to this bit) Mask */
#define EMAC_TSR_COL(value)                   (EMAC_TSR_COL_Msk & ((value) << EMAC_TSR_COL_Pos))  
#define EMAC_TSR_RLES_Pos                     _U_(2)                                               /**< (EMAC_TSR) Retry Limit Exceeded (cleared by writing a one to this bit) Position */
#define EMAC_TSR_RLES_Msk                     (_U_(0x1) << EMAC_TSR_RLES_Pos)                      /**< (EMAC_TSR) Retry Limit Exceeded (cleared by writing a one to this bit) Mask */
#define EMAC_TSR_RLES(value)                  (EMAC_TSR_RLES_Msk & ((value) << EMAC_TSR_RLES_Pos))
#define EMAC_TSR_TGO_Pos                      _U_(3)                                               /**< (EMAC_TSR) Transmit Go Position */
#define EMAC_TSR_TGO_Msk                      (_U_(0x1) << EMAC_TSR_TGO_Pos)                       /**< (EMAC_TSR) Transmit Go Mask */
#define EMAC_TSR_TGO(value)                   (EMAC_TSR_TGO_Msk & ((value) << EMAC_TSR_TGO_Pos))  
#define EMAC_TSR_BEX_Pos                      _U_(4)                                               /**< (EMAC_TSR) Buffers Exhausted Mid-frame (cleared by writing a one to this bit) Position */
#define EMAC_TSR_BEX_Msk                      (_U_(0x1) << EMAC_TSR_BEX_Pos)                       /**< (EMAC_TSR) Buffers Exhausted Mid-frame (cleared by writing a one to this bit) Mask */
#define EMAC_TSR_BEX(value)                   (EMAC_TSR_BEX_Msk & ((value) << EMAC_TSR_BEX_Pos))  
#define EMAC_TSR_COMP_Pos                     _U_(5)                                               /**< (EMAC_TSR) Transmit Complete (cleared by writing a one to this bit) Position */
#define EMAC_TSR_COMP_Msk                     (_U_(0x1) << EMAC_TSR_COMP_Pos)                      /**< (EMAC_TSR) Transmit Complete (cleared by writing a one to this bit) Mask */
#define EMAC_TSR_COMP(value)                  (EMAC_TSR_COMP_Msk & ((value) << EMAC_TSR_COMP_Pos))
#define EMAC_TSR_UND_Pos                      _U_(6)                                               /**< (EMAC_TSR) Transmit Underrun (cleared by writing a one to this bit) Position */
#define EMAC_TSR_UND_Msk                      (_U_(0x1) << EMAC_TSR_UND_Pos)                       /**< (EMAC_TSR) Transmit Underrun (cleared by writing a one to this bit) Mask */
#define EMAC_TSR_UND(value)                   (EMAC_TSR_UND_Msk & ((value) << EMAC_TSR_UND_Pos))  
#define EMAC_TSR_Msk                          _U_(0x0000007F)                                      /**< (EMAC_TSR) Register Mask  */


/* -------- EMAC_RBQP : (EMAC Offset: 0x18) (R/W 32) Receive Buffer Queue Pointer Register -------- */
#define EMAC_RBQP_ADDR_Pos                    _U_(2)                                               /**< (EMAC_RBQP) Receive Buffer Queue Pointer Address Position */
#define EMAC_RBQP_ADDR_Msk                    (_U_(0x3FFFFFFF) << EMAC_RBQP_ADDR_Pos)              /**< (EMAC_RBQP) Receive Buffer Queue Pointer Address Mask */
#define EMAC_RBQP_ADDR(value)                 (EMAC_RBQP_ADDR_Msk & ((value) << EMAC_RBQP_ADDR_Pos))
#define EMAC_RBQP_Msk                         _U_(0xFFFFFFFC)                                      /**< (EMAC_RBQP) Register Mask  */


/* -------- EMAC_TBQP : (EMAC Offset: 0x1C) (R/W 32) Transmit Buffer Queue Pointer Register -------- */
#define EMAC_TBQP_ADDR_Pos                    _U_(2)                                               /**< (EMAC_TBQP) Transmit Buffer Queue Pointer Address Position */
#define EMAC_TBQP_ADDR_Msk                    (_U_(0x3FFFFFFF) << EMAC_TBQP_ADDR_Pos)              /**< (EMAC_TBQP) Transmit Buffer Queue Pointer Address Mask */
#define EMAC_TBQP_ADDR(value)                 (EMAC_TBQP_ADDR_Msk & ((value) << EMAC_TBQP_ADDR_Pos))
#define EMAC_TBQP_Msk                         _U_(0xFFFFFFFC)                                      /**< (EMAC_TBQP) Register Mask  */


/* -------- EMAC_RSR : (EMAC Offset: 0x20) (R/W 32) Receive Status Register -------- */
#define EMAC_RSR_BNA_Pos                      _U_(0)                                               /**< (EMAC_RSR) Buffer Not Available (cleared by writing a one to this bit) Position */
#define EMAC_RSR_BNA_Msk                      (_U_(0x1) << EMAC_RSR_BNA_Pos)                       /**< (EMAC_RSR) Buffer Not Available (cleared by writing a one to this bit) Mask */
#define EMAC_RSR_BNA(value)                   (EMAC_RSR_BNA_Msk & ((value) << EMAC_RSR_BNA_Pos))  
#define EMAC_RSR_REC_Pos                      _U_(1)                                               /**< (EMAC_RSR) Frame Received (cleared by writing a one to this bit) Position */
#define EMAC_RSR_REC_Msk                      (_U_(0x1) << EMAC_RSR_REC_Pos)                       /**< (EMAC_RSR) Frame Received (cleared by writing a one to this bit) Mask */
#define EMAC_RSR_REC(value)                   (EMAC_RSR_REC_Msk & ((value) << EMAC_RSR_REC_Pos))  
#define EMAC_RSR_OVR_Pos                      _U_(2)                                               /**< (EMAC_RSR) Receive Overrun (cleared by writing a one to this bit) Position */
#define EMAC_RSR_OVR_Msk                      (_U_(0x1) << EMAC_RSR_OVR_Pos)                       /**< (EMAC_RSR) Receive Overrun (cleared by writing a one to this bit) Mask */
#define EMAC_RSR_OVR(value)                   (EMAC_RSR_OVR_Msk & ((value) << EMAC_RSR_OVR_Pos))  
#define EMAC_RSR_Msk                          _U_(0x00000007)                                      /**< (EMAC_RSR) Register Mask  */


/* -------- EMAC_ISR : (EMAC Offset: 0x24) (R/W 32) Interrupt Status Register -------- */
#define EMAC_ISR_MFD_Pos                      _U_(0)                                               /**< (EMAC_ISR) Management Frame Done (cleared on read) Position */
#define EMAC_ISR_MFD_Msk                      (_U_(0x1) << EMAC_ISR_MFD_Pos)                       /**< (EMAC_ISR) Management Frame Done (cleared on read) Mask */
#define EMAC_ISR_MFD(value)                   (EMAC_ISR_MFD_Msk & ((value) << EMAC_ISR_MFD_Pos))  
#define EMAC_ISR_RCOMP_Pos                    _U_(1)                                               /**< (EMAC_ISR) Receive Complete (cleared on read) Position */
#define EMAC_ISR_RCOMP_Msk                    (_U_(0x1) << EMAC_ISR_RCOMP_Pos)                     /**< (EMAC_ISR) Receive Complete (cleared on read) Mask */
#define EMAC_ISR_RCOMP(value)                 (EMAC_ISR_RCOMP_Msk & ((value) << EMAC_ISR_RCOMP_Pos))
#define EMAC_ISR_RXUBR_Pos                    _U_(2)                                               /**< (EMAC_ISR) Receive Used Bit Read (cleared on read) Position */
#define EMAC_ISR_RXUBR_Msk                    (_U_(0x1) << EMAC_ISR_RXUBR_Pos)                     /**< (EMAC_ISR) Receive Used Bit Read (cleared on read) Mask */
#define EMAC_ISR_RXUBR(value)                 (EMAC_ISR_RXUBR_Msk & ((value) << EMAC_ISR_RXUBR_Pos))
#define EMAC_ISR_TXUBR_Pos                    _U_(3)                                               /**< (EMAC_ISR) Transmit Used Bit Read (cleared on read) Position */
#define EMAC_ISR_TXUBR_Msk                    (_U_(0x1) << EMAC_ISR_TXUBR_Pos)                     /**< (EMAC_ISR) Transmit Used Bit Read (cleared on read) Mask */
#define EMAC_ISR_TXUBR(value)                 (EMAC_ISR_TXUBR_Msk & ((value) << EMAC_ISR_TXUBR_Pos))
#define EMAC_ISR_TUND_Pos                     _U_(4)                                               /**< (EMAC_ISR) Ethernet Transmit Buffer Underrun (cleared on read) Position */
#define EMAC_ISR_TUND_Msk                     (_U_(0x1) << EMAC_ISR_TUND_Pos)                      /**< (EMAC_ISR) Ethernet Transmit Buffer Underrun (cleared on read) Mask */
#define EMAC_ISR_TUND(value)                  (EMAC_ISR_TUND_Msk & ((value) << EMAC_ISR_TUND_Pos))
#define EMAC_ISR_RLEX_Pos                     _U_(5)                                               /**< (EMAC_ISR) Retry Limit Exceeded (cleared on read) Position */
#define EMAC_ISR_RLEX_Msk                     (_U_(0x1) << EMAC_ISR_RLEX_Pos)                      /**< (EMAC_ISR) Retry Limit Exceeded (cleared on read) Mask */
#define EMAC_ISR_RLEX(value)                  (EMAC_ISR_RLEX_Msk & ((value) << EMAC_ISR_RLEX_Pos))
#define EMAC_ISR_TXERR_Pos                    _U_(6)                                               /**< (EMAC_ISR) Transmit Error (cleared on read) Position */
#define EMAC_ISR_TXERR_Msk                    (_U_(0x1) << EMAC_ISR_TXERR_Pos)                     /**< (EMAC_ISR) Transmit Error (cleared on read) Mask */
#define EMAC_ISR_TXERR(value)                 (EMAC_ISR_TXERR_Msk & ((value) << EMAC_ISR_TXERR_Pos))
#define EMAC_ISR_TCOMP_Pos                    _U_(7)                                               /**< (EMAC_ISR) Transmit Complete (cleared on read) Position */
#define EMAC_ISR_TCOMP_Msk                    (_U_(0x1) << EMAC_ISR_TCOMP_Pos)                     /**< (EMAC_ISR) Transmit Complete (cleared on read) Mask */
#define EMAC_ISR_TCOMP(value)                 (EMAC_ISR_TCOMP_Msk & ((value) << EMAC_ISR_TCOMP_Pos))
#define EMAC_ISR_LINK_Pos                     _U_(9)                                               /**< (EMAC_ISR) Link Change (cleared on read) Position */
#define EMAC_ISR_LINK_Msk                     (_U_(0x1) << EMAC_ISR_LINK_Pos)                      /**< (EMAC_ISR) Link Change (cleared on read) Mask */
#define EMAC_ISR_LINK(value)                  (EMAC_ISR_LINK_Msk & ((value) << EMAC_ISR_LINK_Pos))
#define EMAC_ISR_ROVR_Pos                     _U_(10)                                              /**< (EMAC_ISR) Receive Overrun (cleared on read) Position */
#define EMAC_ISR_ROVR_Msk                     (_U_(0x1) << EMAC_ISR_ROVR_Pos)                      /**< (EMAC_ISR) Receive Overrun (cleared on read) Mask */
#define EMAC_ISR_ROVR(value)                  (EMAC_ISR_ROVR_Msk & ((value) << EMAC_ISR_ROVR_Pos))
#define EMAC_ISR_HRESP_Pos                    _U_(11)                                              /**< (EMAC_ISR) Hresp Not OK (cleared on read) Position */
#define EMAC_ISR_HRESP_Msk                    (_U_(0x1) << EMAC_ISR_HRESP_Pos)                     /**< (EMAC_ISR) Hresp Not OK (cleared on read) Mask */
#define EMAC_ISR_HRESP(value)                 (EMAC_ISR_HRESP_Msk & ((value) << EMAC_ISR_HRESP_Pos))
#define EMAC_ISR_PFRE_Pos                     _U_(12)                                              /**< (EMAC_ISR) Pause Frame Received (cleared on read) Position */
#define EMAC_ISR_PFRE_Msk                     (_U_(0x1) << EMAC_ISR_PFRE_Pos)                      /**< (EMAC_ISR) Pause Frame Received (cleared on read) Mask */
#define EMAC_ISR_PFRE(value)                  (EMAC_ISR_PFRE_Msk & ((value) << EMAC_ISR_PFRE_Pos))
#define EMAC_ISR_PTZ_Pos                      _U_(13)                                              /**< (EMAC_ISR) Pause Time Zero (cleared on read) Position */
#define EMAC_ISR_PTZ_Msk                      (_U_(0x1) << EMAC_ISR_PTZ_Pos)                       /**< (EMAC_ISR) Pause Time Zero (cleared on read) Mask */
#define EMAC_ISR_PTZ(value)                   (EMAC_ISR_PTZ_Msk & ((value) << EMAC_ISR_PTZ_Pos))  
#define EMAC_ISR_WOL_Pos                      _U_(14)                                              /**< (EMAC_ISR) Wake-On-LAN (cleared on read) Position */
#define EMAC_ISR_WOL_Msk                      (_U_(0x1) << EMAC_ISR_WOL_Pos)                       /**< (EMAC_ISR) Wake-On-LAN (cleared on read) Mask */
#define EMAC_ISR_WOL(value)                   (EMAC_ISR_WOL_Msk & ((value) << EMAC_ISR_WOL_Pos))  
#define EMAC_ISR_Msk                          _U_(0x00007EFF)                                      /**< (EMAC_ISR) Register Mask  */


/* -------- EMAC_IER : (EMAC Offset: 0x28) ( /W 32) Interrupt Enable Register -------- */
#define EMAC_IER_MFD_Pos                      _U_(0)                                               /**< (EMAC_IER) Management Frame Done Position */
#define EMAC_IER_MFD_Msk                      (_U_(0x1) << EMAC_IER_MFD_Pos)                       /**< (EMAC_IER) Management Frame Done Mask */
#define EMAC_IER_MFD(value)                   (EMAC_IER_MFD_Msk & ((value) << EMAC_IER_MFD_Pos))  
#define EMAC_IER_RCOMP_Pos                    _U_(1)                                               /**< (EMAC_IER) Receive Complete Position */
#define EMAC_IER_RCOMP_Msk                    (_U_(0x1) << EMAC_IER_RCOMP_Pos)                     /**< (EMAC_IER) Receive Complete Mask */
#define EMAC_IER_RCOMP(value)                 (EMAC_IER_RCOMP_Msk & ((value) << EMAC_IER_RCOMP_Pos))
#define EMAC_IER_RXUBR_Pos                    _U_(2)                                               /**< (EMAC_IER) Receive Used Bit Read Position */
#define EMAC_IER_RXUBR_Msk                    (_U_(0x1) << EMAC_IER_RXUBR_Pos)                     /**< (EMAC_IER) Receive Used Bit Read Mask */
#define EMAC_IER_RXUBR(value)                 (EMAC_IER_RXUBR_Msk & ((value) << EMAC_IER_RXUBR_Pos))
#define EMAC_IER_TXUBR_Pos                    _U_(3)                                               /**< (EMAC_IER) Transmit Used Bit Read Position */
#define EMAC_IER_TXUBR_Msk                    (_U_(0x1) << EMAC_IER_TXUBR_Pos)                     /**< (EMAC_IER) Transmit Used Bit Read Mask */
#define EMAC_IER_TXUBR(value)                 (EMAC_IER_TXUBR_Msk & ((value) << EMAC_IER_TXUBR_Pos))
#define EMAC_IER_TUND_Pos                     _U_(4)                                               /**< (EMAC_IER) Ethernet Transmit Buffer Underrun Position */
#define EMAC_IER_TUND_Msk                     (_U_(0x1) << EMAC_IER_TUND_Pos)                      /**< (EMAC_IER) Ethernet Transmit Buffer Underrun Mask */
#define EMAC_IER_TUND(value)                  (EMAC_IER_TUND_Msk & ((value) << EMAC_IER_TUND_Pos))
#define EMAC_IER_RLE_Pos                      _U_(5)                                               /**< (EMAC_IER) Retry Limit Exceeded Position */
#define EMAC_IER_RLE_Msk                      (_U_(0x1) << EMAC_IER_RLE_Pos)                       /**< (EMAC_IER) Retry Limit Exceeded Mask */
#define EMAC_IER_RLE(value)                   (EMAC_IER_RLE_Msk & ((value) << EMAC_IER_RLE_Pos))  
#define EMAC_IER_TXERR_Pos                    _U_(6)                                               /**< (EMAC_IER) Transmit Error Position */
#define EMAC_IER_TXERR_Msk                    (_U_(0x1) << EMAC_IER_TXERR_Pos)                     /**< (EMAC_IER) Transmit Error Mask */
#define EMAC_IER_TXERR(value)                 (EMAC_IER_TXERR_Msk & ((value) << EMAC_IER_TXERR_Pos))
#define EMAC_IER_TCOMP_Pos                    _U_(7)                                               /**< (EMAC_IER) Transmit Complete Position */
#define EMAC_IER_TCOMP_Msk                    (_U_(0x1) << EMAC_IER_TCOMP_Pos)                     /**< (EMAC_IER) Transmit Complete Mask */
#define EMAC_IER_TCOMP(value)                 (EMAC_IER_TCOMP_Msk & ((value) << EMAC_IER_TCOMP_Pos))
#define EMAC_IER_LINK_Pos                     _U_(9)                                               /**< (EMAC_IER) Link Change Position */
#define EMAC_IER_LINK_Msk                     (_U_(0x1) << EMAC_IER_LINK_Pos)                      /**< (EMAC_IER) Link Change Mask */
#define EMAC_IER_LINK(value)                  (EMAC_IER_LINK_Msk & ((value) << EMAC_IER_LINK_Pos))
#define EMAC_IER_ROVR_Pos                     _U_(10)                                              /**< (EMAC_IER) Receive Overrun Position */
#define EMAC_IER_ROVR_Msk                     (_U_(0x1) << EMAC_IER_ROVR_Pos)                      /**< (EMAC_IER) Receive Overrun Mask */
#define EMAC_IER_ROVR(value)                  (EMAC_IER_ROVR_Msk & ((value) << EMAC_IER_ROVR_Pos))
#define EMAC_IER_HRESP_Pos                    _U_(11)                                              /**< (EMAC_IER) Hresp Not OK Position */
#define EMAC_IER_HRESP_Msk                    (_U_(0x1) << EMAC_IER_HRESP_Pos)                     /**< (EMAC_IER) Hresp Not OK Mask */
#define EMAC_IER_HRESP(value)                 (EMAC_IER_HRESP_Msk & ((value) << EMAC_IER_HRESP_Pos))
#define EMAC_IER_PFR_Pos                      _U_(12)                                              /**< (EMAC_IER) Pause Frame Received Position */
#define EMAC_IER_PFR_Msk                      (_U_(0x1) << EMAC_IER_PFR_Pos)                       /**< (EMAC_IER) Pause Frame Received Mask */
#define EMAC_IER_PFR(value)                   (EMAC_IER_PFR_Msk & ((value) << EMAC_IER_PFR_Pos))  
#define EMAC_IER_PTZ_Pos                      _U_(13)                                              /**< (EMAC_IER) Pause Time Zero Position */
#define EMAC_IER_PTZ_Msk                      (_U_(0x1) << EMAC_IER_PTZ_Pos)                       /**< (EMAC_IER) Pause Time Zero Mask */
#define EMAC_IER_PTZ(value)                   (EMAC_IER_PTZ_Msk & ((value) << EMAC_IER_PTZ_Pos))  
#define EMAC_IER_WOL_Pos                      _U_(14)                                              /**< (EMAC_IER) Wake-On-LAN Position */
#define EMAC_IER_WOL_Msk                      (_U_(0x1) << EMAC_IER_WOL_Pos)                       /**< (EMAC_IER) Wake-On-LAN Mask */
#define EMAC_IER_WOL(value)                   (EMAC_IER_WOL_Msk & ((value) << EMAC_IER_WOL_Pos))  
#define EMAC_IER_Msk                          _U_(0x00007EFF)                                      /**< (EMAC_IER) Register Mask  */


/* -------- EMAC_IDR : (EMAC Offset: 0x2C) ( /W 32) Interrupt Disable Register -------- */
#define EMAC_IDR_MFD_Pos                      _U_(0)                                               /**< (EMAC_IDR) Management Frame Done Position */
#define EMAC_IDR_MFD_Msk                      (_U_(0x1) << EMAC_IDR_MFD_Pos)                       /**< (EMAC_IDR) Management Frame Done Mask */
#define EMAC_IDR_MFD(value)                   (EMAC_IDR_MFD_Msk & ((value) << EMAC_IDR_MFD_Pos))  
#define EMAC_IDR_RCOMP_Pos                    _U_(1)                                               /**< (EMAC_IDR) Receive Complete Position */
#define EMAC_IDR_RCOMP_Msk                    (_U_(0x1) << EMAC_IDR_RCOMP_Pos)                     /**< (EMAC_IDR) Receive Complete Mask */
#define EMAC_IDR_RCOMP(value)                 (EMAC_IDR_RCOMP_Msk & ((value) << EMAC_IDR_RCOMP_Pos))
#define EMAC_IDR_RXUBR_Pos                    _U_(2)                                               /**< (EMAC_IDR) Receive Used Bit Read Position */
#define EMAC_IDR_RXUBR_Msk                    (_U_(0x1) << EMAC_IDR_RXUBR_Pos)                     /**< (EMAC_IDR) Receive Used Bit Read Mask */
#define EMAC_IDR_RXUBR(value)                 (EMAC_IDR_RXUBR_Msk & ((value) << EMAC_IDR_RXUBR_Pos))
#define EMAC_IDR_TXUBR_Pos                    _U_(3)                                               /**< (EMAC_IDR) Transmit Used Bit Read Position */
#define EMAC_IDR_TXUBR_Msk                    (_U_(0x1) << EMAC_IDR_TXUBR_Pos)                     /**< (EMAC_IDR) Transmit Used Bit Read Mask */
#define EMAC_IDR_TXUBR(value)                 (EMAC_IDR_TXUBR_Msk & ((value) << EMAC_IDR_TXUBR_Pos))
#define EMAC_IDR_TUND_Pos                     _U_(4)                                               /**< (EMAC_IDR) Ethernet Transmit Buffer Underrun Position */
#define EMAC_IDR_TUND_Msk                     (_U_(0x1) << EMAC_IDR_TUND_Pos)                      /**< (EMAC_IDR) Ethernet Transmit Buffer Underrun Mask */
#define EMAC_IDR_TUND(value)                  (EMAC_IDR_TUND_Msk & ((value) << EMAC_IDR_TUND_Pos))
#define EMAC_IDR_RLE_Pos                      _U_(5)                                               /**< (EMAC_IDR) Retry Limit Exceeded Position */
#define EMAC_IDR_RLE_Msk                      (_U_(0x1) << EMAC_IDR_RLE_Pos)                       /**< (EMAC_IDR) Retry Limit Exceeded Mask */
#define EMAC_IDR_RLE(value)                   (EMAC_IDR_RLE_Msk & ((value) << EMAC_IDR_RLE_Pos))  
#define EMAC_IDR_TXERR_Pos                    _U_(6)                                               /**< (EMAC_IDR) Transmit Error Position */
#define EMAC_IDR_TXERR_Msk                    (_U_(0x1) << EMAC_IDR_TXERR_Pos)                     /**< (EMAC_IDR) Transmit Error Mask */
#define EMAC_IDR_TXERR(value)                 (EMAC_IDR_TXERR_Msk & ((value) << EMAC_IDR_TXERR_Pos))
#define EMAC_IDR_TCOMP_Pos                    _U_(7)                                               /**< (EMAC_IDR) Transmit Complete Position */
#define EMAC_IDR_TCOMP_Msk                    (_U_(0x1) << EMAC_IDR_TCOMP_Pos)                     /**< (EMAC_IDR) Transmit Complete Mask */
#define EMAC_IDR_TCOMP(value)                 (EMAC_IDR_TCOMP_Msk & ((value) << EMAC_IDR_TCOMP_Pos))
#define EMAC_IDR_LINK_Pos                     _U_(9)                                               /**< (EMAC_IDR) Link Change Position */
#define EMAC_IDR_LINK_Msk                     (_U_(0x1) << EMAC_IDR_LINK_Pos)                      /**< (EMAC_IDR) Link Change Mask */
#define EMAC_IDR_LINK(value)                  (EMAC_IDR_LINK_Msk & ((value) << EMAC_IDR_LINK_Pos))
#define EMAC_IDR_ROVR_Pos                     _U_(10)                                              /**< (EMAC_IDR) Receive Overrun Position */
#define EMAC_IDR_ROVR_Msk                     (_U_(0x1) << EMAC_IDR_ROVR_Pos)                      /**< (EMAC_IDR) Receive Overrun Mask */
#define EMAC_IDR_ROVR(value)                  (EMAC_IDR_ROVR_Msk & ((value) << EMAC_IDR_ROVR_Pos))
#define EMAC_IDR_HRESP_Pos                    _U_(11)                                              /**< (EMAC_IDR) Hresp Not OK Position */
#define EMAC_IDR_HRESP_Msk                    (_U_(0x1) << EMAC_IDR_HRESP_Pos)                     /**< (EMAC_IDR) Hresp Not OK Mask */
#define EMAC_IDR_HRESP(value)                 (EMAC_IDR_HRESP_Msk & ((value) << EMAC_IDR_HRESP_Pos))
#define EMAC_IDR_PFR_Pos                      _U_(12)                                              /**< (EMAC_IDR) Pause Frame Received Position */
#define EMAC_IDR_PFR_Msk                      (_U_(0x1) << EMAC_IDR_PFR_Pos)                       /**< (EMAC_IDR) Pause Frame Received Mask */
#define EMAC_IDR_PFR(value)                   (EMAC_IDR_PFR_Msk & ((value) << EMAC_IDR_PFR_Pos))  
#define EMAC_IDR_PTZ_Pos                      _U_(13)                                              /**< (EMAC_IDR) Pause Time Zero Position */
#define EMAC_IDR_PTZ_Msk                      (_U_(0x1) << EMAC_IDR_PTZ_Pos)                       /**< (EMAC_IDR) Pause Time Zero Mask */
#define EMAC_IDR_PTZ(value)                   (EMAC_IDR_PTZ_Msk & ((value) << EMAC_IDR_PTZ_Pos))  
#define EMAC_IDR_WOL_Pos                      _U_(14)                                              /**< (EMAC_IDR) Wake-On-LAN Position */
#define EMAC_IDR_WOL_Msk                      (_U_(0x1) << EMAC_IDR_WOL_Pos)                       /**< (EMAC_IDR) Wake-On-LAN Mask */
#define EMAC_IDR_WOL(value)                   (EMAC_IDR_WOL_Msk & ((value) << EMAC_IDR_WOL_Pos))  
#define EMAC_IDR_Msk                          _U_(0x00007EFF)                                      /**< (EMAC_IDR) Register Mask  */


/* -------- EMAC_IMR : (EMAC Offset: 0x30) ( R/ 32) Interrupt Mask Register -------- */
#define EMAC_IMR_MFD_Pos                      _U_(0)                                               /**< (EMAC_IMR) Management Frame Done Position */
#define EMAC_IMR_MFD_Msk                      (_U_(0x1) << EMAC_IMR_MFD_Pos)                       /**< (EMAC_IMR) Management Frame Done Mask */
#define EMAC_IMR_MFD(value)                   (EMAC_IMR_MFD_Msk & ((value) << EMAC_IMR_MFD_Pos))  
#define EMAC_IMR_RCOMP_Pos                    _U_(1)                                               /**< (EMAC_IMR) Receive Complete Position */
#define EMAC_IMR_RCOMP_Msk                    (_U_(0x1) << EMAC_IMR_RCOMP_Pos)                     /**< (EMAC_IMR) Receive Complete Mask */
#define EMAC_IMR_RCOMP(value)                 (EMAC_IMR_RCOMP_Msk & ((value) << EMAC_IMR_RCOMP_Pos))
#define EMAC_IMR_RXUBR_Pos                    _U_(2)                                               /**< (EMAC_IMR) Receive Used Bit Read Position */
#define EMAC_IMR_RXUBR_Msk                    (_U_(0x1) << EMAC_IMR_RXUBR_Pos)                     /**< (EMAC_IMR) Receive Used Bit Read Mask */
#define EMAC_IMR_RXUBR(value)                 (EMAC_IMR_RXUBR_Msk & ((value) << EMAC_IMR_RXUBR_Pos))
#define EMAC_IMR_TXUBR_Pos                    _U_(3)                                               /**< (EMAC_IMR) Transmit Used Bit Read Position */
#define EMAC_IMR_TXUBR_Msk                    (_U_(0x1) << EMAC_IMR_TXUBR_Pos)                     /**< (EMAC_IMR) Transmit Used Bit Read Mask */
#define EMAC_IMR_TXUBR(value)                 (EMAC_IMR_TXUBR_Msk & ((value) << EMAC_IMR_TXUBR_Pos))
#define EMAC_IMR_TUND_Pos                     _U_(4)                                               /**< (EMAC_IMR) Ethernet Transmit Buffer Underrun Position */
#define EMAC_IMR_TUND_Msk                     (_U_(0x1) << EMAC_IMR_TUND_Pos)                      /**< (EMAC_IMR) Ethernet Transmit Buffer Underrun Mask */
#define EMAC_IMR_TUND(value)                  (EMAC_IMR_TUND_Msk & ((value) << EMAC_IMR_TUND_Pos))
#define EMAC_IMR_RLE_Pos                      _U_(5)                                               /**< (EMAC_IMR) Retry Limit Exceeded Position */
#define EMAC_IMR_RLE_Msk                      (_U_(0x1) << EMAC_IMR_RLE_Pos)                       /**< (EMAC_IMR) Retry Limit Exceeded Mask */
#define EMAC_IMR_RLE(value)                   (EMAC_IMR_RLE_Msk & ((value) << EMAC_IMR_RLE_Pos))  
#define EMAC_IMR_TXERR_Pos                    _U_(6)                                               /**< (EMAC_IMR) Transmit Error Position */
#define EMAC_IMR_TXERR_Msk                    (_U_(0x1) << EMAC_IMR_TXERR_Pos)                     /**< (EMAC_IMR) Transmit Error Mask */
#define EMAC_IMR_TXERR(value)                 (EMAC_IMR_TXERR_Msk & ((value) << EMAC_IMR_TXERR_Pos))
#define EMAC_IMR_TCOMP_Pos                    _U_(7)                                               /**< (EMAC_IMR) Transmit Complete Position */
#define EMAC_IMR_TCOMP_Msk                    (_U_(0x1) << EMAC_IMR_TCOMP_Pos)                     /**< (EMAC_IMR) Transmit Complete Mask */
#define EMAC_IMR_TCOMP(value)                 (EMAC_IMR_TCOMP_Msk & ((value) << EMAC_IMR_TCOMP_Pos))
#define EMAC_IMR_LINK_Pos                     _U_(9)                                               /**< (EMAC_IMR) Link Change Position */
#define EMAC_IMR_LINK_Msk                     (_U_(0x1) << EMAC_IMR_LINK_Pos)                      /**< (EMAC_IMR) Link Change Mask */
#define EMAC_IMR_LINK(value)                  (EMAC_IMR_LINK_Msk & ((value) << EMAC_IMR_LINK_Pos))
#define EMAC_IMR_ROVR_Pos                     _U_(10)                                              /**< (EMAC_IMR) Receive Overrun Position */
#define EMAC_IMR_ROVR_Msk                     (_U_(0x1) << EMAC_IMR_ROVR_Pos)                      /**< (EMAC_IMR) Receive Overrun Mask */
#define EMAC_IMR_ROVR(value)                  (EMAC_IMR_ROVR_Msk & ((value) << EMAC_IMR_ROVR_Pos))
#define EMAC_IMR_HRESP_Pos                    _U_(11)                                              /**< (EMAC_IMR) Hresp Not OK Position */
#define EMAC_IMR_HRESP_Msk                    (_U_(0x1) << EMAC_IMR_HRESP_Pos)                     /**< (EMAC_IMR) Hresp Not OK Mask */
#define EMAC_IMR_HRESP(value)                 (EMAC_IMR_HRESP_Msk & ((value) << EMAC_IMR_HRESP_Pos))
#define EMAC_IMR_PFR_Pos                      _U_(12)                                              /**< (EMAC_IMR) Pause Frame Received Position */
#define EMAC_IMR_PFR_Msk                      (_U_(0x1) << EMAC_IMR_PFR_Pos)                       /**< (EMAC_IMR) Pause Frame Received Mask */
#define EMAC_IMR_PFR(value)                   (EMAC_IMR_PFR_Msk & ((value) << EMAC_IMR_PFR_Pos))  
#define EMAC_IMR_PTZ_Pos                      _U_(13)                                              /**< (EMAC_IMR) Pause Time Zero Position */
#define EMAC_IMR_PTZ_Msk                      (_U_(0x1) << EMAC_IMR_PTZ_Pos)                       /**< (EMAC_IMR) Pause Time Zero Mask */
#define EMAC_IMR_PTZ(value)                   (EMAC_IMR_PTZ_Msk & ((value) << EMAC_IMR_PTZ_Pos))  
#define EMAC_IMR_WOL_Pos                      _U_(14)                                              /**< (EMAC_IMR) Wake-On-LAN Position */
#define EMAC_IMR_WOL_Msk                      (_U_(0x1) << EMAC_IMR_WOL_Pos)                       /**< (EMAC_IMR) Wake-On-LAN Mask */
#define EMAC_IMR_WOL(value)                   (EMAC_IMR_WOL_Msk & ((value) << EMAC_IMR_WOL_Pos))  
#define EMAC_IMR_Msk                          _U_(0x00007EFF)                                      /**< (EMAC_IMR) Register Mask  */


/* -------- EMAC_MAN : (EMAC Offset: 0x34) (R/W 32) PHY Maintenance Register -------- */
#define EMAC_MAN_DATA_Pos                     _U_(0)                                               /**< (EMAC_MAN) PHY Transmit or Receive Data Position */
#define EMAC_MAN_DATA_Msk                     (_U_(0xFFFF) << EMAC_MAN_DATA_Pos)                   /**< (EMAC_MAN) PHY Transmit or Receive Data Mask */
#define EMAC_MAN_DATA(value)                  (EMAC_MAN_DATA_Msk & ((value) << EMAC_MAN_DATA_Pos))
#define EMAC_MAN_CODE_Pos                     _U_(16)                                              /**< (EMAC_MAN) Must Be Two Position */
#define EMAC_MAN_CODE_Msk                     (_U_(0x3) << EMAC_MAN_CODE_Pos)                      /**< (EMAC_MAN) Must Be Two Mask */
#define EMAC_MAN_CODE(value)                  (EMAC_MAN_CODE_Msk & ((value) << EMAC_MAN_CODE_Pos))
#define EMAC_MAN_REGA_Pos                     _U_(18)                                              /**< (EMAC_MAN) PHY Register Address Position */
#define EMAC_MAN_REGA_Msk                     (_U_(0x1F) << EMAC_MAN_REGA_Pos)                     /**< (EMAC_MAN) PHY Register Address Mask */
#define EMAC_MAN_REGA(value)                  (EMAC_MAN_REGA_Msk & ((value) << EMAC_MAN_REGA_Pos))
#define EMAC_MAN_PHYA_Pos                     _U_(23)                                              /**< (EMAC_MAN) PHY Address Position */
#define EMAC_MAN_PHYA_Msk                     (_U_(0x1F) << EMAC_MAN_PHYA_Pos)                     /**< (EMAC_MAN) PHY Address Mask */
#define EMAC_MAN_PHYA(value)                  (EMAC_MAN_PHYA_Msk & ((value) << EMAC_MAN_PHYA_Pos))
#define EMAC_MAN_RW_Pos                       _U_(28)                                              /**< (EMAC_MAN) PHY Read/Write Command Position */
#define EMAC_MAN_RW_Msk                       (_U_(0x3) << EMAC_MAN_RW_Pos)                        /**< (EMAC_MAN) PHY Read/Write Command Mask */
#define EMAC_MAN_RW(value)                    (EMAC_MAN_RW_Msk & ((value) << EMAC_MAN_RW_Pos))    
#define EMAC_MAN_SOF_Pos                      _U_(30)                                              /**< (EMAC_MAN) Start of Frame Position */
#define EMAC_MAN_SOF_Msk                      (_U_(0x3) << EMAC_MAN_SOF_Pos)                       /**< (EMAC_MAN) Start of Frame Mask */
#define EMAC_MAN_SOF(value)                   (EMAC_MAN_SOF_Msk & ((value) << EMAC_MAN_SOF_Pos))  
#define EMAC_MAN_Msk                          _U_(0xFFFFFFFF)                                      /**< (EMAC_MAN) Register Mask  */


/* -------- EMAC_PTR : (EMAC Offset: 0x38) (R/W 32) Pause Time Register -------- */
#define EMAC_PTR_PTIME_Pos                    _U_(0)                                               /**< (EMAC_PTR) Pause Time Position */
#define EMAC_PTR_PTIME_Msk                    (_U_(0xFFFF) << EMAC_PTR_PTIME_Pos)                  /**< (EMAC_PTR) Pause Time Mask */
#define EMAC_PTR_PTIME(value)                 (EMAC_PTR_PTIME_Msk & ((value) << EMAC_PTR_PTIME_Pos))
#define EMAC_PTR_Msk                          _U_(0x0000FFFF)                                      /**< (EMAC_PTR) Register Mask  */


/* -------- EMAC_PFR : (EMAC Offset: 0x3C) (R/W 32) Pause Frames Received Register -------- */
#define EMAC_PFR_FROK_Pos                     _U_(0)                                               /**< (EMAC_PFR) Pause Frames Received OK Position */
#define EMAC_PFR_FROK_Msk                     (_U_(0xFFFF) << EMAC_PFR_FROK_Pos)                   /**< (EMAC_PFR) Pause Frames Received OK Mask */
#define EMAC_PFR_FROK(value)                  (EMAC_PFR_FROK_Msk & ((value) << EMAC_PFR_FROK_Pos))
#define EMAC_PFR_Msk                          _U_(0x0000FFFF)                                      /**< (EMAC_PFR) Register Mask  */


/* -------- EMAC_FTO : (EMAC Offset: 0x40) (R/W 32) Frames Transmitted OK Register -------- */
#define EMAC_FTO_FTOK_Pos                     _U_(0)                                               /**< (EMAC_FTO) Frames Transmitted OK Position */
#define EMAC_FTO_FTOK_Msk                     (_U_(0xFFFFFF) << EMAC_FTO_FTOK_Pos)                 /**< (EMAC_FTO) Frames Transmitted OK Mask */
#define EMAC_FTO_FTOK(value)                  (EMAC_FTO_FTOK_Msk & ((value) << EMAC_FTO_FTOK_Pos))
#define EMAC_FTO_Msk                          _U_(0x00FFFFFF)                                      /**< (EMAC_FTO) Register Mask  */


/* -------- EMAC_SCF : (EMAC Offset: 0x44) (R/W 32) Single Collision Frames Register -------- */
#define EMAC_SCF_SCF_Pos                      _U_(0)                                               /**< (EMAC_SCF) Single Collision Frames Position */
#define EMAC_SCF_SCF_Msk                      (_U_(0xFFFF) << EMAC_SCF_SCF_Pos)                    /**< (EMAC_SCF) Single Collision Frames Mask */
#define EMAC_SCF_SCF(value)                   (EMAC_SCF_SCF_Msk & ((value) << EMAC_SCF_SCF_Pos))  
#define EMAC_SCF_Msk                          _U_(0x0000FFFF)                                      /**< (EMAC_SCF) Register Mask  */


/* -------- EMAC_MCF : (EMAC Offset: 0x48) (R/W 32) Multiple Collision Frames Register -------- */
#define EMAC_MCF_MCF_Pos                      _U_(0)                                               /**< (EMAC_MCF) Multicollision Frames Position */
#define EMAC_MCF_MCF_Msk                      (_U_(0xFFFF) << EMAC_MCF_MCF_Pos)                    /**< (EMAC_MCF) Multicollision Frames Mask */
#define EMAC_MCF_MCF(value)                   (EMAC_MCF_MCF_Msk & ((value) << EMAC_MCF_MCF_Pos))  
#define EMAC_MCF_Msk                          _U_(0x0000FFFF)                                      /**< (EMAC_MCF) Register Mask  */


/* -------- EMAC_FRO : (EMAC Offset: 0x4C) (R/W 32) Frames Received OK Register -------- */
#define EMAC_FRO_FROK_Pos                     _U_(0)                                               /**< (EMAC_FRO) Frames Received OK Position */
#define EMAC_FRO_FROK_Msk                     (_U_(0xFFFFFF) << EMAC_FRO_FROK_Pos)                 /**< (EMAC_FRO) Frames Received OK Mask */
#define EMAC_FRO_FROK(value)                  (EMAC_FRO_FROK_Msk & ((value) << EMAC_FRO_FROK_Pos))
#define EMAC_FRO_Msk                          _U_(0x00FFFFFF)                                      /**< (EMAC_FRO) Register Mask  */


/* -------- EMAC_FCSE : (EMAC Offset: 0x50) (R/W 32) Frame Check Sequence Errors Register -------- */
#define EMAC_FCSE_FCSE_Pos                    _U_(0)                                               /**< (EMAC_FCSE) Frame Check Sequence Errors Position */
#define EMAC_FCSE_FCSE_Msk                    (_U_(0xFF) << EMAC_FCSE_FCSE_Pos)                    /**< (EMAC_FCSE) Frame Check Sequence Errors Mask */
#define EMAC_FCSE_FCSE(value)                 (EMAC_FCSE_FCSE_Msk & ((value) << EMAC_FCSE_FCSE_Pos))
#define EMAC_FCSE_Msk                         _U_(0x000000FF)                                      /**< (EMAC_FCSE) Register Mask  */


/* -------- EMAC_ALE : (EMAC Offset: 0x54) (R/W 32) Alignment Errors Register -------- */
#define EMAC_ALE_ALE_Pos                      _U_(0)                                               /**< (EMAC_ALE) Alignment Errors Position */
#define EMAC_ALE_ALE_Msk                      (_U_(0xFF) << EMAC_ALE_ALE_Pos)                      /**< (EMAC_ALE) Alignment Errors Mask */
#define EMAC_ALE_ALE(value)                   (EMAC_ALE_ALE_Msk & ((value) << EMAC_ALE_ALE_Pos))  
#define EMAC_ALE_Msk                          _U_(0x000000FF)                                      /**< (EMAC_ALE) Register Mask  */


/* -------- EMAC_DTF : (EMAC Offset: 0x58) (R/W 32) Deferred Transmission Frames Register -------- */
#define EMAC_DTF_DTF_Pos                      _U_(0)                                               /**< (EMAC_DTF) Deferred Transmission Frames Position */
#define EMAC_DTF_DTF_Msk                      (_U_(0xFFFF) << EMAC_DTF_DTF_Pos)                    /**< (EMAC_DTF) Deferred Transmission Frames Mask */
#define EMAC_DTF_DTF(value)                   (EMAC_DTF_DTF_Msk & ((value) << EMAC_DTF_DTF_Pos))  
#define EMAC_DTF_Msk                          _U_(0x0000FFFF)                                      /**< (EMAC_DTF) Register Mask  */


/* -------- EMAC_LCOL : (EMAC Offset: 0x5C) (R/W 32) Late Collisions Register -------- */
#define EMAC_LCOL_LCOL_Pos                    _U_(0)                                               /**< (EMAC_LCOL) Late Collisions Position */
#define EMAC_LCOL_LCOL_Msk                    (_U_(0xFF) << EMAC_LCOL_LCOL_Pos)                    /**< (EMAC_LCOL) Late Collisions Mask */
#define EMAC_LCOL_LCOL(value)                 (EMAC_LCOL_LCOL_Msk & ((value) << EMAC_LCOL_LCOL_Pos))
#define EMAC_LCOL_Msk                         _U_(0x000000FF)                                      /**< (EMAC_LCOL) Register Mask  */


/* -------- EMAC_ECOL : (EMAC Offset: 0x60) (R/W 32) Excessive Collisions Register -------- */
#define EMAC_ECOL_EXCOL_Pos                   _U_(0)                                               /**< (EMAC_ECOL) Excessive Collisions Position */
#define EMAC_ECOL_EXCOL_Msk                   (_U_(0xFF) << EMAC_ECOL_EXCOL_Pos)                   /**< (EMAC_ECOL) Excessive Collisions Mask */
#define EMAC_ECOL_EXCOL(value)                (EMAC_ECOL_EXCOL_Msk & ((value) << EMAC_ECOL_EXCOL_Pos))
#define EMAC_ECOL_Msk                         _U_(0x000000FF)                                      /**< (EMAC_ECOL) Register Mask  */


/* -------- EMAC_TUND : (EMAC Offset: 0x64) (R/W 32) Transmit Underrun Errors Register -------- */
#define EMAC_TUND_TUND_Pos                    _U_(0)                                               /**< (EMAC_TUND) Transmit Underruns Position */
#define EMAC_TUND_TUND_Msk                    (_U_(0xFF) << EMAC_TUND_TUND_Pos)                    /**< (EMAC_TUND) Transmit Underruns Mask */
#define EMAC_TUND_TUND(value)                 (EMAC_TUND_TUND_Msk & ((value) << EMAC_TUND_TUND_Pos))
#define EMAC_TUND_Msk                         _U_(0x000000FF)                                      /**< (EMAC_TUND) Register Mask  */


/* -------- EMAC_CSE : (EMAC Offset: 0x68) (R/W 32) Carrier Sense Errors Register -------- */
#define EMAC_CSE_CSE_Pos                      _U_(0)                                               /**< (EMAC_CSE) Carrier Sense Errors Position */
#define EMAC_CSE_CSE_Msk                      (_U_(0xFF) << EMAC_CSE_CSE_Pos)                      /**< (EMAC_CSE) Carrier Sense Errors Mask */
#define EMAC_CSE_CSE(value)                   (EMAC_CSE_CSE_Msk & ((value) << EMAC_CSE_CSE_Pos))  
#define EMAC_CSE_Msk                          _U_(0x000000FF)                                      /**< (EMAC_CSE) Register Mask  */


/* -------- EMAC_RRE : (EMAC Offset: 0x6C) (R/W 32) Receive Resource Errors Register -------- */
#define EMAC_RRE_RRE_Pos                      _U_(0)                                               /**< (EMAC_RRE) Receive Resource Errors Position */
#define EMAC_RRE_RRE_Msk                      (_U_(0xFFFF) << EMAC_RRE_RRE_Pos)                    /**< (EMAC_RRE) Receive Resource Errors Mask */
#define EMAC_RRE_RRE(value)                   (EMAC_RRE_RRE_Msk & ((value) << EMAC_RRE_RRE_Pos))  
#define EMAC_RRE_Msk                          _U_(0x0000FFFF)                                      /**< (EMAC_RRE) Register Mask  */


/* -------- EMAC_ROV : (EMAC Offset: 0x70) (R/W 32) Receive Overrun Errors Register -------- */
#define EMAC_ROV_ROVR_Pos                     _U_(0)                                               /**< (EMAC_ROV) Receive Overrun Position */
#define EMAC_ROV_ROVR_Msk                     (_U_(0xFF) << EMAC_ROV_ROVR_Pos)                     /**< (EMAC_ROV) Receive Overrun Mask */
#define EMAC_ROV_ROVR(value)                  (EMAC_ROV_ROVR_Msk & ((value) << EMAC_ROV_ROVR_Pos))
#define EMAC_ROV_Msk                          _U_(0x000000FF)                                      /**< (EMAC_ROV) Register Mask  */


/* -------- EMAC_RSE : (EMAC Offset: 0x74) (R/W 32) Receive Symbol Errors Register -------- */
#define EMAC_RSE_RSE_Pos                      _U_(0)                                               /**< (EMAC_RSE) Receive Symbol Errors Position */
#define EMAC_RSE_RSE_Msk                      (_U_(0xFF) << EMAC_RSE_RSE_Pos)                      /**< (EMAC_RSE) Receive Symbol Errors Mask */
#define EMAC_RSE_RSE(value)                   (EMAC_RSE_RSE_Msk & ((value) << EMAC_RSE_RSE_Pos))  
#define EMAC_RSE_Msk                          _U_(0x000000FF)                                      /**< (EMAC_RSE) Register Mask  */


/* -------- EMAC_ELE : (EMAC Offset: 0x78) (R/W 32) Excessive Length Errors Register -------- */
#define EMAC_ELE_EXL_Pos                      _U_(0)                                               /**< (EMAC_ELE) Excessive Length Errors Position */
#define EMAC_ELE_EXL_Msk                      (_U_(0xFF) << EMAC_ELE_EXL_Pos)                      /**< (EMAC_ELE) Excessive Length Errors Mask */
#define EMAC_ELE_EXL(value)                   (EMAC_ELE_EXL_Msk & ((value) << EMAC_ELE_EXL_Pos))  
#define EMAC_ELE_Msk                          _U_(0x000000FF)                                      /**< (EMAC_ELE) Register Mask  */


/* -------- EMAC_RJA : (EMAC Offset: 0x7C) (R/W 32) Receive Jabbers Register -------- */
#define EMAC_RJA_RJB_Pos                      _U_(0)                                               /**< (EMAC_RJA) Receive Jabbers Position */
#define EMAC_RJA_RJB_Msk                      (_U_(0xFF) << EMAC_RJA_RJB_Pos)                      /**< (EMAC_RJA) Receive Jabbers Mask */
#define EMAC_RJA_RJB(value)                   (EMAC_RJA_RJB_Msk & ((value) << EMAC_RJA_RJB_Pos))  
#define EMAC_RJA_Msk                          _U_(0x000000FF)                                      /**< (EMAC_RJA) Register Mask  */


/* -------- EMAC_USF : (EMAC Offset: 0x80) (R/W 32) Undersize Frames Register -------- */
#define EMAC_USF_USF_Pos                      _U_(0)                                               /**< (EMAC_USF) Undersize Frames Position */
#define EMAC_USF_USF_Msk                      (_U_(0xFF) << EMAC_USF_USF_Pos)                      /**< (EMAC_USF) Undersize Frames Mask */
#define EMAC_USF_USF(value)                   (EMAC_USF_USF_Msk & ((value) << EMAC_USF_USF_Pos))  
#define EMAC_USF_Msk                          _U_(0x000000FF)                                      /**< (EMAC_USF) Register Mask  */


/* -------- EMAC_STE : (EMAC Offset: 0x84) (R/W 32) SQE Test Errors Register -------- */
#define EMAC_STE_SQER_Pos                     _U_(0)                                               /**< (EMAC_STE) SQE Test Errors Position */
#define EMAC_STE_SQER_Msk                     (_U_(0xFF) << EMAC_STE_SQER_Pos)                     /**< (EMAC_STE) SQE Test Errors Mask */
#define EMAC_STE_SQER(value)                  (EMAC_STE_SQER_Msk & ((value) << EMAC_STE_SQER_Pos))
#define EMAC_STE_Msk                          _U_(0x000000FF)                                      /**< (EMAC_STE) Register Mask  */


/* -------- EMAC_RLE : (EMAC Offset: 0x88) (R/W 32) Received Length Field Mismatch Register -------- */
#define EMAC_RLE_RLFM_Pos                     _U_(0)                                               /**< (EMAC_RLE) Receive Length Field Mismatch Position */
#define EMAC_RLE_RLFM_Msk                     (_U_(0xFF) << EMAC_RLE_RLFM_Pos)                     /**< (EMAC_RLE) Receive Length Field Mismatch Mask */
#define EMAC_RLE_RLFM(value)                  (EMAC_RLE_RLFM_Msk & ((value) << EMAC_RLE_RLFM_Pos))
#define EMAC_RLE_Msk                          _U_(0x000000FF)                                      /**< (EMAC_RLE) Register Mask  */


/* -------- EMAC_TPF : (EMAC Offset: 0x8C) (R/W 32) Transmitted Pause Frames Register -------- */
#define EMAC_TPF_TPF_Pos                      _U_(0)                                               /**< (EMAC_TPF) Transmitted Pause Frames Position */
#define EMAC_TPF_TPF_Msk                      (_U_(0xFFFF) << EMAC_TPF_TPF_Pos)                    /**< (EMAC_TPF) Transmitted Pause Frames Mask */
#define EMAC_TPF_TPF(value)                   (EMAC_TPF_TPF_Msk & ((value) << EMAC_TPF_TPF_Pos))  
#define EMAC_TPF_Msk                          _U_(0x0000FFFF)                                      /**< (EMAC_TPF) Register Mask  */


/* -------- EMAC_HRB : (EMAC Offset: 0x90) (R/W 32) Hash Register Bottom [31:0] Register -------- */
#define EMAC_HRB_ADDR_Pos                     _U_(0)                                               /**< (EMAC_HRB) Hash Address Bottom Position */
#define EMAC_HRB_ADDR_Msk                     (_U_(0xFFFFFFFF) << EMAC_HRB_ADDR_Pos)               /**< (EMAC_HRB) Hash Address Bottom Mask */
#define EMAC_HRB_ADDR(value)                  (EMAC_HRB_ADDR_Msk & ((value) << EMAC_HRB_ADDR_Pos))
#define EMAC_HRB_Msk                          _U_(0xFFFFFFFF)                                      /**< (EMAC_HRB) Register Mask  */


/* -------- EMAC_HRT : (EMAC Offset: 0x94) (R/W 32) Hash Register Top [63:32] Register -------- */
#define EMAC_HRT_ADDR_Pos                     _U_(0)                                               /**< (EMAC_HRT) Hash Address Top Position */
#define EMAC_HRT_ADDR_Msk                     (_U_(0xFFFFFFFF) << EMAC_HRT_ADDR_Pos)               /**< (EMAC_HRT) Hash Address Top Mask */
#define EMAC_HRT_ADDR(value)                  (EMAC_HRT_ADDR_Msk & ((value) << EMAC_HRT_ADDR_Pos))
#define EMAC_HRT_Msk                          _U_(0xFFFFFFFF)                                      /**< (EMAC_HRT) Register Mask  */


/* -------- EMAC_TID : (EMAC Offset: 0xB8) (R/W 32) Type ID Checking Register -------- */
#define EMAC_TID_TID_Pos                      _U_(0)                                               /**< (EMAC_TID) Type ID Checking Position */
#define EMAC_TID_TID_Msk                      (_U_(0xFFFF) << EMAC_TID_TID_Pos)                    /**< (EMAC_TID) Type ID Checking Mask */
#define EMAC_TID_TID(value)                   (EMAC_TID_TID_Msk & ((value) << EMAC_TID_TID_Pos))  
#define EMAC_TID_Msk                          _U_(0x0000FFFF)                                      /**< (EMAC_TID) Register Mask  */


/* -------- EMAC_TPQ : (EMAC Offset: 0xBC) (R/W 32) Transmit Pause Quantum Register -------- */
#define EMAC_TPQ_TPQ_Pos                      _U_(0)                                               /**< (EMAC_TPQ) Transmit Pause Quantum Position */
#define EMAC_TPQ_TPQ_Msk                      (_U_(0xFFFF) << EMAC_TPQ_TPQ_Pos)                    /**< (EMAC_TPQ) Transmit Pause Quantum Mask */
#define EMAC_TPQ_TPQ(value)                   (EMAC_TPQ_TPQ_Msk & ((value) << EMAC_TPQ_TPQ_Pos))  
#define EMAC_TPQ_Msk                          _U_(0x0000FFFF)                                      /**< (EMAC_TPQ) Register Mask  */


/* -------- EMAC_USRIO : (EMAC Offset: 0xC0) (R/W 32) User Input/Output Register -------- */
#define EMAC_USRIO_RMII_Pos                   _U_(0)                                               /**< (EMAC_USRIO) Reduced MII Position */
#define EMAC_USRIO_RMII_Msk                   (_U_(0x1) << EMAC_USRIO_RMII_Pos)                    /**< (EMAC_USRIO) Reduced MII Mask */
#define EMAC_USRIO_RMII(value)                (EMAC_USRIO_RMII_Msk & ((value) << EMAC_USRIO_RMII_Pos))
#define EMAC_USRIO_CLKEN_Pos                  _U_(1)                                               /**< (EMAC_USRIO) Clock Enable Position */
#define EMAC_USRIO_CLKEN_Msk                  (_U_(0x1) << EMAC_USRIO_CLKEN_Pos)                   /**< (EMAC_USRIO) Clock Enable Mask */
#define EMAC_USRIO_CLKEN(value)               (EMAC_USRIO_CLKEN_Msk & ((value) << EMAC_USRIO_CLKEN_Pos))
#define EMAC_USRIO_Msk                        _U_(0x00000003)                                      /**< (EMAC_USRIO) Register Mask  */


/* -------- EMAC_WOL : (EMAC Offset: 0xC4) (R/W 32) Wake-on-LAN Register -------- */
#define EMAC_WOL_IP_Pos                       _U_(0)                                               /**< (EMAC_WOL) ARP Request IP Address Position */
#define EMAC_WOL_IP_Msk                       (_U_(0xFFFF) << EMAC_WOL_IP_Pos)                     /**< (EMAC_WOL) ARP Request IP Address Mask */
#define EMAC_WOL_IP(value)                    (EMAC_WOL_IP_Msk & ((value) << EMAC_WOL_IP_Pos))    
#define EMAC_WOL_MAG_Pos                      _U_(16)                                              /**< (EMAC_WOL) Magic Packet Event Enable Position */
#define EMAC_WOL_MAG_Msk                      (_U_(0x1) << EMAC_WOL_MAG_Pos)                       /**< (EMAC_WOL) Magic Packet Event Enable Mask */
#define EMAC_WOL_MAG(value)                   (EMAC_WOL_MAG_Msk & ((value) << EMAC_WOL_MAG_Pos))  
#define EMAC_WOL_ARP_Pos                      _U_(17)                                              /**< (EMAC_WOL) ARP Request Event Enable Position */
#define EMAC_WOL_ARP_Msk                      (_U_(0x1) << EMAC_WOL_ARP_Pos)                       /**< (EMAC_WOL) ARP Request Event Enable Mask */
#define EMAC_WOL_ARP(value)                   (EMAC_WOL_ARP_Msk & ((value) << EMAC_WOL_ARP_Pos))  
#define EMAC_WOL_SA1_Pos                      _U_(18)                                              /**< (EMAC_WOL) Specific Address Register 1 Event Enable Position */
#define EMAC_WOL_SA1_Msk                      (_U_(0x1) << EMAC_WOL_SA1_Pos)                       /**< (EMAC_WOL) Specific Address Register 1 Event Enable Mask */
#define EMAC_WOL_SA1(value)                   (EMAC_WOL_SA1_Msk & ((value) << EMAC_WOL_SA1_Pos))  
#define EMAC_WOL_MTI_Pos                      _U_(19)                                              /**< (EMAC_WOL) Multicast Hash Event Enable Position */
#define EMAC_WOL_MTI_Msk                      (_U_(0x1) << EMAC_WOL_MTI_Pos)                       /**< (EMAC_WOL) Multicast Hash Event Enable Mask */
#define EMAC_WOL_MTI(value)                   (EMAC_WOL_MTI_Msk & ((value) << EMAC_WOL_MTI_Pos))  
#define EMAC_WOL_Msk                          _U_(0x000FFFFF)                                      /**< (EMAC_WOL) Register Mask  */

#define EMAC_WOL_SA_Pos                       _U_(18)                                              /**< (EMAC_WOL Position) Specific Address Register x Event Enable */
#define EMAC_WOL_SA_Msk                       (_U_(0x1) << EMAC_WOL_SA_Pos)                        /**< (EMAC_WOL Mask) SA */
#define EMAC_WOL_SA(value)                    (EMAC_WOL_SA_Msk & ((value) << EMAC_WOL_SA_Pos))     

/** \brief EMAC register offsets definitions */
#define EMAC_SAxB_REG_OFST             (0x00)              /**< (EMAC_SAxB) Specific Address X Bottom Register Offset */
#define EMAC_SAxT_REG_OFST             (0x04)              /**< (EMAC_SAxT) Specific Address X Top Register Offset */
#define EMAC_NCR_REG_OFST              (0x00)              /**< (EMAC_NCR) Network Control Register Offset */
#define EMAC_NCFGR_REG_OFST            (0x04)              /**< (EMAC_NCFGR) Network Configuration Register Offset */
#define EMAC_NSR_REG_OFST              (0x08)              /**< (EMAC_NSR) Network Status Register Offset */
#define EMAC_TSR_REG_OFST              (0x14)              /**< (EMAC_TSR) Transmit Status Register Offset */
#define EMAC_RBQP_REG_OFST             (0x18)              /**< (EMAC_RBQP) Receive Buffer Queue Pointer Register Offset */
#define EMAC_TBQP_REG_OFST             (0x1C)              /**< (EMAC_TBQP) Transmit Buffer Queue Pointer Register Offset */
#define EMAC_RSR_REG_OFST              (0x20)              /**< (EMAC_RSR) Receive Status Register Offset */
#define EMAC_ISR_REG_OFST              (0x24)              /**< (EMAC_ISR) Interrupt Status Register Offset */
#define EMAC_IER_REG_OFST              (0x28)              /**< (EMAC_IER) Interrupt Enable Register Offset */
#define EMAC_IDR_REG_OFST              (0x2C)              /**< (EMAC_IDR) Interrupt Disable Register Offset */
#define EMAC_IMR_REG_OFST              (0x30)              /**< (EMAC_IMR) Interrupt Mask Register Offset */
#define EMAC_MAN_REG_OFST              (0x34)              /**< (EMAC_MAN) PHY Maintenance Register Offset */
#define EMAC_PTR_REG_OFST              (0x38)              /**< (EMAC_PTR) Pause Time Register Offset */
#define EMAC_PFR_REG_OFST              (0x3C)              /**< (EMAC_PFR) Pause Frames Received Register Offset */
#define EMAC_FTO_REG_OFST              (0x40)              /**< (EMAC_FTO) Frames Transmitted OK Register Offset */
#define EMAC_SCF_REG_OFST              (0x44)              /**< (EMAC_SCF) Single Collision Frames Register Offset */
#define EMAC_MCF_REG_OFST              (0x48)              /**< (EMAC_MCF) Multiple Collision Frames Register Offset */
#define EMAC_FRO_REG_OFST              (0x4C)              /**< (EMAC_FRO) Frames Received OK Register Offset */
#define EMAC_FCSE_REG_OFST             (0x50)              /**< (EMAC_FCSE) Frame Check Sequence Errors Register Offset */
#define EMAC_ALE_REG_OFST              (0x54)              /**< (EMAC_ALE) Alignment Errors Register Offset */
#define EMAC_DTF_REG_OFST              (0x58)              /**< (EMAC_DTF) Deferred Transmission Frames Register Offset */
#define EMAC_LCOL_REG_OFST             (0x5C)              /**< (EMAC_LCOL) Late Collisions Register Offset */
#define EMAC_ECOL_REG_OFST             (0x60)              /**< (EMAC_ECOL) Excessive Collisions Register Offset */
#define EMAC_TUND_REG_OFST             (0x64)              /**< (EMAC_TUND) Transmit Underrun Errors Register Offset */
#define EMAC_CSE_REG_OFST              (0x68)              /**< (EMAC_CSE) Carrier Sense Errors Register Offset */
#define EMAC_RRE_REG_OFST              (0x6C)              /**< (EMAC_RRE) Receive Resource Errors Register Offset */
#define EMAC_ROV_REG_OFST              (0x70)              /**< (EMAC_ROV) Receive Overrun Errors Register Offset */
#define EMAC_RSE_REG_OFST              (0x74)              /**< (EMAC_RSE) Receive Symbol Errors Register Offset */
#define EMAC_ELE_REG_OFST              (0x78)              /**< (EMAC_ELE) Excessive Length Errors Register Offset */
#define EMAC_RJA_REG_OFST              (0x7C)              /**< (EMAC_RJA) Receive Jabbers Register Offset */
#define EMAC_USF_REG_OFST              (0x80)              /**< (EMAC_USF) Undersize Frames Register Offset */
#define EMAC_STE_REG_OFST              (0x84)              /**< (EMAC_STE) SQE Test Errors Register Offset */
#define EMAC_RLE_REG_OFST              (0x88)              /**< (EMAC_RLE) Received Length Field Mismatch Register Offset */
#define EMAC_TPF_REG_OFST              (0x8C)              /**< (EMAC_TPF) Transmitted Pause Frames Register Offset */
#define EMAC_HRB_REG_OFST              (0x90)              /**< (EMAC_HRB) Hash Register Bottom [31:0] Register Offset */
#define EMAC_HRT_REG_OFST              (0x94)              /**< (EMAC_HRT) Hash Register Top [63:32] Register Offset */
#define EMAC_TID_REG_OFST              (0xB8)              /**< (EMAC_TID) Type ID Checking Register Offset */
#define EMAC_TPQ_REG_OFST              (0xBC)              /**< (EMAC_TPQ) Transmit Pause Quantum Register Offset */
#define EMAC_USRIO_REG_OFST            (0xC0)              /**< (EMAC_USRIO) User Input/Output Register Offset */
#define EMAC_WOL_REG_OFST              (0xC4)              /**< (EMAC_WOL) Wake-on-LAN Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief EMAC_SA register API structure */
typedef struct
{
  __IO  uint32_t                       EMAC_SAxB;          /**< Offset: 0x00 (R/W  32) Specific Address X Bottom Register */
  __IO  uint32_t                       EMAC_SAxT;          /**< Offset: 0x04 (R/W  32) Specific Address X Top Register */
} emac_sa_registers_t;

#define EMAC_SA_NUMBER _U_(4)

/** \brief EMAC register API structure */
typedef struct
{
  __IO  uint32_t                       EMAC_NCR;           /**< Offset: 0x00 (R/W  32) Network Control Register */
  __IO  uint32_t                       EMAC_NCFGR;         /**< Offset: 0x04 (R/W  32) Network Configuration Register */
  __I   uint32_t                       EMAC_NSR;           /**< Offset: 0x08 (R/   32) Network Status Register */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       EMAC_TSR;           /**< Offset: 0x14 (R/W  32) Transmit Status Register */
  __IO  uint32_t                       EMAC_RBQP;          /**< Offset: 0x18 (R/W  32) Receive Buffer Queue Pointer Register */
  __IO  uint32_t                       EMAC_TBQP;          /**< Offset: 0x1C (R/W  32) Transmit Buffer Queue Pointer Register */
  __IO  uint32_t                       EMAC_RSR;           /**< Offset: 0x20 (R/W  32) Receive Status Register */
  __IO  uint32_t                       EMAC_ISR;           /**< Offset: 0x24 (R/W  32) Interrupt Status Register */
  __O   uint32_t                       EMAC_IER;           /**< Offset: 0x28 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       EMAC_IDR;           /**< Offset: 0x2C ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       EMAC_IMR;           /**< Offset: 0x30 (R/   32) Interrupt Mask Register */
  __IO  uint32_t                       EMAC_MAN;           /**< Offset: 0x34 (R/W  32) PHY Maintenance Register */
  __IO  uint32_t                       EMAC_PTR;           /**< Offset: 0x38 (R/W  32) Pause Time Register */
  __IO  uint32_t                       EMAC_PFR;           /**< Offset: 0x3C (R/W  32) Pause Frames Received Register */
  __IO  uint32_t                       EMAC_FTO;           /**< Offset: 0x40 (R/W  32) Frames Transmitted OK Register */
  __IO  uint32_t                       EMAC_SCF;           /**< Offset: 0x44 (R/W  32) Single Collision Frames Register */
  __IO  uint32_t                       EMAC_MCF;           /**< Offset: 0x48 (R/W  32) Multiple Collision Frames Register */
  __IO  uint32_t                       EMAC_FRO;           /**< Offset: 0x4C (R/W  32) Frames Received OK Register */
  __IO  uint32_t                       EMAC_FCSE;          /**< Offset: 0x50 (R/W  32) Frame Check Sequence Errors Register */
  __IO  uint32_t                       EMAC_ALE;           /**< Offset: 0x54 (R/W  32) Alignment Errors Register */
  __IO  uint32_t                       EMAC_DTF;           /**< Offset: 0x58 (R/W  32) Deferred Transmission Frames Register */
  __IO  uint32_t                       EMAC_LCOL;          /**< Offset: 0x5C (R/W  32) Late Collisions Register */
  __IO  uint32_t                       EMAC_ECOL;          /**< Offset: 0x60 (R/W  32) Excessive Collisions Register */
  __IO  uint32_t                       EMAC_TUND;          /**< Offset: 0x64 (R/W  32) Transmit Underrun Errors Register */
  __IO  uint32_t                       EMAC_CSE;           /**< Offset: 0x68 (R/W  32) Carrier Sense Errors Register */
  __IO  uint32_t                       EMAC_RRE;           /**< Offset: 0x6C (R/W  32) Receive Resource Errors Register */
  __IO  uint32_t                       EMAC_ROV;           /**< Offset: 0x70 (R/W  32) Receive Overrun Errors Register */
  __IO  uint32_t                       EMAC_RSE;           /**< Offset: 0x74 (R/W  32) Receive Symbol Errors Register */
  __IO  uint32_t                       EMAC_ELE;           /**< Offset: 0x78 (R/W  32) Excessive Length Errors Register */
  __IO  uint32_t                       EMAC_RJA;           /**< Offset: 0x7C (R/W  32) Receive Jabbers Register */
  __IO  uint32_t                       EMAC_USF;           /**< Offset: 0x80 (R/W  32) Undersize Frames Register */
  __IO  uint32_t                       EMAC_STE;           /**< Offset: 0x84 (R/W  32) SQE Test Errors Register */
  __IO  uint32_t                       EMAC_RLE;           /**< Offset: 0x88 (R/W  32) Received Length Field Mismatch Register */
  __IO  uint32_t                       EMAC_TPF;           /**< Offset: 0x8C (R/W  32) Transmitted Pause Frames Register */
  __IO  uint32_t                       EMAC_HRB;           /**< Offset: 0x90 (R/W  32) Hash Register Bottom [31:0] Register */
  __IO  uint32_t                       EMAC_HRT;           /**< Offset: 0x94 (R/W  32) Hash Register Top [63:32] Register */
        emac_sa_registers_t            EMAC_SA[EMAC_SA_NUMBER]; /**< Offset: 0x98  */
  __IO  uint32_t                       EMAC_TID;           /**< Offset: 0xB8 (R/W  32) Type ID Checking Register */
  __IO  uint32_t                       EMAC_TPQ;           /**< Offset: 0xBC (R/W  32) Transmit Pause Quantum Register */
  __IO  uint32_t                       EMAC_USRIO;         /**< Offset: 0xC0 (R/W  32) User Input/Output Register */
  __IO  uint32_t                       EMAC_WOL;           /**< Offset: 0xC4 (R/W  32) Wake-on-LAN Register */
} emac_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_EMAC_COMPONENT_H_ */
