/*
 * Component description for L2CC
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
#ifndef _SAMA5D2_L2CC_COMPONENT_H_
#define _SAMA5D2_L2CC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR L2CC                                         */
/* ************************************************************************** */

/* -------- L2CC_IDR : (L2CC Offset: 0x00) ( R/ 32) Cache ID Register -------- */
#define L2CC_IDR_ID_Pos                       _U_(0)                                               /**< (L2CC_IDR) Cache Controller ID Position */
#define L2CC_IDR_ID_Msk                       (_U_(0xFFFFFFFF) << L2CC_IDR_ID_Pos)                 /**< (L2CC_IDR) Cache Controller ID Mask */
#define L2CC_IDR_ID(value)                    (L2CC_IDR_ID_Msk & ((value) << L2CC_IDR_ID_Pos))    
#define L2CC_IDR_Msk                          _U_(0xFFFFFFFF)                                      /**< (L2CC_IDR) Register Mask  */


/* -------- L2CC_TYPR : (L2CC Offset: 0x04) ( R/ 32) Cache Type Register -------- */
#define L2CC_TYPR_IL2ASS_Pos                  _U_(6)                                               /**< (L2CC_TYPR) Instruction L2 Cache Associativity Position */
#define L2CC_TYPR_IL2ASS_Msk                  (_U_(0x1) << L2CC_TYPR_IL2ASS_Pos)                   /**< (L2CC_TYPR) Instruction L2 Cache Associativity Mask */
#define L2CC_TYPR_IL2ASS(value)               (L2CC_TYPR_IL2ASS_Msk & ((value) << L2CC_TYPR_IL2ASS_Pos))
#define L2CC_TYPR_IL2WSIZE_Pos                _U_(8)                                               /**< (L2CC_TYPR) Instruction L2 Cache Way Size Position */
#define L2CC_TYPR_IL2WSIZE_Msk                (_U_(0x7) << L2CC_TYPR_IL2WSIZE_Pos)                 /**< (L2CC_TYPR) Instruction L2 Cache Way Size Mask */
#define L2CC_TYPR_IL2WSIZE(value)             (L2CC_TYPR_IL2WSIZE_Msk & ((value) << L2CC_TYPR_IL2WSIZE_Pos))
#define L2CC_TYPR_DL2ASS_Pos                  _U_(18)                                              /**< (L2CC_TYPR) Data L2 Cache Associativity Position */
#define L2CC_TYPR_DL2ASS_Msk                  (_U_(0x1) << L2CC_TYPR_DL2ASS_Pos)                   /**< (L2CC_TYPR) Data L2 Cache Associativity Mask */
#define L2CC_TYPR_DL2ASS(value)               (L2CC_TYPR_DL2ASS_Msk & ((value) << L2CC_TYPR_DL2ASS_Pos))
#define L2CC_TYPR_DL2WSIZE_Pos                _U_(20)                                              /**< (L2CC_TYPR) Data L2 Cache Way Size Position */
#define L2CC_TYPR_DL2WSIZE_Msk                (_U_(0x7) << L2CC_TYPR_DL2WSIZE_Pos)                 /**< (L2CC_TYPR) Data L2 Cache Way Size Mask */
#define L2CC_TYPR_DL2WSIZE(value)             (L2CC_TYPR_DL2WSIZE_Msk & ((value) << L2CC_TYPR_DL2WSIZE_Pos))
#define L2CC_TYPR_Msk                         _U_(0x00740740)                                      /**< (L2CC_TYPR) Register Mask  */


/* -------- L2CC_CR : (L2CC Offset: 0x100) (R/W 32) Control Register -------- */
#define L2CC_CR_L2CEN_Pos                     _U_(0)                                               /**< (L2CC_CR) L2 Cache Enable Position */
#define L2CC_CR_L2CEN_Msk                     (_U_(0x1) << L2CC_CR_L2CEN_Pos)                      /**< (L2CC_CR) L2 Cache Enable Mask */
#define L2CC_CR_L2CEN(value)                  (L2CC_CR_L2CEN_Msk & ((value) << L2CC_CR_L2CEN_Pos))
#define L2CC_CR_Msk                           _U_(0x00000001)                                      /**< (L2CC_CR) Register Mask  */


/* -------- L2CC_ACR : (L2CC Offset: 0x104) (R/W 32) Auxiliary Control Register -------- */
#define L2CC_ACR_HPSO_Pos                     _U_(10)                                              /**< (L2CC_ACR) High Priority for SO and Dev Reads Enable Position */
#define L2CC_ACR_HPSO_Msk                     (_U_(0x1) << L2CC_ACR_HPSO_Pos)                      /**< (L2CC_ACR) High Priority for SO and Dev Reads Enable Mask */
#define L2CC_ACR_HPSO(value)                  (L2CC_ACR_HPSO_Msk & ((value) << L2CC_ACR_HPSO_Pos))
#define L2CC_ACR_SBDLE_Pos                    _U_(11)                                              /**< (L2CC_ACR) Store Buffer Device Limitation Enable Position */
#define L2CC_ACR_SBDLE_Msk                    (_U_(0x1) << L2CC_ACR_SBDLE_Pos)                     /**< (L2CC_ACR) Store Buffer Device Limitation Enable Mask */
#define L2CC_ACR_SBDLE(value)                 (L2CC_ACR_SBDLE_Msk & ((value) << L2CC_ACR_SBDLE_Pos))
#define L2CC_ACR_EXCC_Pos                     _U_(12)                                              /**< (L2CC_ACR) Exclusive Cache Configuration Position */
#define L2CC_ACR_EXCC_Msk                     (_U_(0x1) << L2CC_ACR_EXCC_Pos)                      /**< (L2CC_ACR) Exclusive Cache Configuration Mask */
#define L2CC_ACR_EXCC(value)                  (L2CC_ACR_EXCC_Msk & ((value) << L2CC_ACR_EXCC_Pos))
#define L2CC_ACR_SAIE_Pos                     _U_(13)                                              /**< (L2CC_ACR) Shared Attribute Invalidate Enable Position */
#define L2CC_ACR_SAIE_Msk                     (_U_(0x1) << L2CC_ACR_SAIE_Pos)                      /**< (L2CC_ACR) Shared Attribute Invalidate Enable Mask */
#define L2CC_ACR_SAIE(value)                  (L2CC_ACR_SAIE_Msk & ((value) << L2CC_ACR_SAIE_Pos))
#define L2CC_ACR_ASS_Pos                      _U_(16)                                              /**< (L2CC_ACR) Associativity Position */
#define L2CC_ACR_ASS_Msk                      (_U_(0x1) << L2CC_ACR_ASS_Pos)                       /**< (L2CC_ACR) Associativity Mask */
#define L2CC_ACR_ASS(value)                   (L2CC_ACR_ASS_Msk & ((value) << L2CC_ACR_ASS_Pos))  
#define L2CC_ACR_WAYSIZE_Pos                  _U_(17)                                              /**< (L2CC_ACR) Way Size Position */
#define L2CC_ACR_WAYSIZE_Msk                  (_U_(0x7) << L2CC_ACR_WAYSIZE_Pos)                   /**< (L2CC_ACR) Way Size Mask */
#define L2CC_ACR_WAYSIZE(value)               (L2CC_ACR_WAYSIZE_Msk & ((value) << L2CC_ACR_WAYSIZE_Pos))
#define   L2CC_ACR_WAYSIZE_16KB_WAY_Val       _U_(0x1)                                             /**< (L2CC_ACR) 16-Kbyte way set associative  */
#define L2CC_ACR_WAYSIZE_16KB_WAY             (L2CC_ACR_WAYSIZE_16KB_WAY_Val << L2CC_ACR_WAYSIZE_Pos) /**< (L2CC_ACR) 16-Kbyte way set associative Position  */
#define L2CC_ACR_EMBEN_Pos                    _U_(20)                                              /**< (L2CC_ACR) Event Monitor Bus Enable Position */
#define L2CC_ACR_EMBEN_Msk                    (_U_(0x1) << L2CC_ACR_EMBEN_Pos)                     /**< (L2CC_ACR) Event Monitor Bus Enable Mask */
#define L2CC_ACR_EMBEN(value)                 (L2CC_ACR_EMBEN_Msk & ((value) << L2CC_ACR_EMBEN_Pos))
#define L2CC_ACR_PEN_Pos                      _U_(21)                                              /**< (L2CC_ACR) Parity Enable Position */
#define L2CC_ACR_PEN_Msk                      (_U_(0x1) << L2CC_ACR_PEN_Pos)                       /**< (L2CC_ACR) Parity Enable Mask */
#define L2CC_ACR_PEN(value)                   (L2CC_ACR_PEN_Msk & ((value) << L2CC_ACR_PEN_Pos))  
#define L2CC_ACR_SAOEN_Pos                    _U_(22)                                              /**< (L2CC_ACR) Shared Attribute Override Enable Position */
#define L2CC_ACR_SAOEN_Msk                    (_U_(0x1) << L2CC_ACR_SAOEN_Pos)                     /**< (L2CC_ACR) Shared Attribute Override Enable Mask */
#define L2CC_ACR_SAOEN(value)                 (L2CC_ACR_SAOEN_Msk & ((value) << L2CC_ACR_SAOEN_Pos))
#define L2CC_ACR_FWA_Pos                      _U_(23)                                              /**< (L2CC_ACR) Force Write Allocate Position */
#define L2CC_ACR_FWA_Msk                      (_U_(0x3) << L2CC_ACR_FWA_Pos)                       /**< (L2CC_ACR) Force Write Allocate Mask */
#define L2CC_ACR_FWA(value)                   (L2CC_ACR_FWA_Msk & ((value) << L2CC_ACR_FWA_Pos))  
#define L2CC_ACR_CRPOL_Pos                    _U_(25)                                              /**< (L2CC_ACR) Cache Replacement Policy Position */
#define L2CC_ACR_CRPOL_Msk                    (_U_(0x1) << L2CC_ACR_CRPOL_Pos)                     /**< (L2CC_ACR) Cache Replacement Policy Mask */
#define L2CC_ACR_CRPOL(value)                 (L2CC_ACR_CRPOL_Msk & ((value) << L2CC_ACR_CRPOL_Pos))
#define L2CC_ACR_NSLEN_Pos                    _U_(26)                                              /**< (L2CC_ACR) Non-Secure Lockdown Enable Position */
#define L2CC_ACR_NSLEN_Msk                    (_U_(0x1) << L2CC_ACR_NSLEN_Pos)                     /**< (L2CC_ACR) Non-Secure Lockdown Enable Mask */
#define L2CC_ACR_NSLEN(value)                 (L2CC_ACR_NSLEN_Msk & ((value) << L2CC_ACR_NSLEN_Pos))
#define L2CC_ACR_NSIAC_Pos                    _U_(27)                                              /**< (L2CC_ACR) Non-Secure Interrupt Access Control Position */
#define L2CC_ACR_NSIAC_Msk                    (_U_(0x1) << L2CC_ACR_NSIAC_Pos)                     /**< (L2CC_ACR) Non-Secure Interrupt Access Control Mask */
#define L2CC_ACR_NSIAC(value)                 (L2CC_ACR_NSIAC_Msk & ((value) << L2CC_ACR_NSIAC_Pos))
#define L2CC_ACR_DPEN_Pos                     _U_(28)                                              /**< (L2CC_ACR) Data Prefetch Enable Position */
#define L2CC_ACR_DPEN_Msk                     (_U_(0x1) << L2CC_ACR_DPEN_Pos)                      /**< (L2CC_ACR) Data Prefetch Enable Mask */
#define L2CC_ACR_DPEN(value)                  (L2CC_ACR_DPEN_Msk & ((value) << L2CC_ACR_DPEN_Pos))
#define L2CC_ACR_IPEN_Pos                     _U_(29)                                              /**< (L2CC_ACR) Instruction Prefetch Enable Position */
#define L2CC_ACR_IPEN_Msk                     (_U_(0x1) << L2CC_ACR_IPEN_Pos)                      /**< (L2CC_ACR) Instruction Prefetch Enable Mask */
#define L2CC_ACR_IPEN(value)                  (L2CC_ACR_IPEN_Msk & ((value) << L2CC_ACR_IPEN_Pos))
#define L2CC_ACR_Msk                          _U_(0x3FFF3C00)                                      /**< (L2CC_ACR) Register Mask  */


/* -------- L2CC_TRCR : (L2CC Offset: 0x108) (R/W 32) Tag RAM Control Register -------- */
#define L2CC_TRCR_TSETLAT_Pos                 _U_(0)                                               /**< (L2CC_TRCR) Setup Latency Position */
#define L2CC_TRCR_TSETLAT_Msk                 (_U_(0x7) << L2CC_TRCR_TSETLAT_Pos)                  /**< (L2CC_TRCR) Setup Latency Mask */
#define L2CC_TRCR_TSETLAT(value)              (L2CC_TRCR_TSETLAT_Msk & ((value) << L2CC_TRCR_TSETLAT_Pos))
#define L2CC_TRCR_TRDLAT_Pos                  _U_(4)                                               /**< (L2CC_TRCR) Read Access Latency Position */
#define L2CC_TRCR_TRDLAT_Msk                  (_U_(0x7) << L2CC_TRCR_TRDLAT_Pos)                   /**< (L2CC_TRCR) Read Access Latency Mask */
#define L2CC_TRCR_TRDLAT(value)               (L2CC_TRCR_TRDLAT_Msk & ((value) << L2CC_TRCR_TRDLAT_Pos))
#define L2CC_TRCR_TWRLAT_Pos                  _U_(8)                                               /**< (L2CC_TRCR) Write Access Latency Position */
#define L2CC_TRCR_TWRLAT_Msk                  (_U_(0x7) << L2CC_TRCR_TWRLAT_Pos)                   /**< (L2CC_TRCR) Write Access Latency Mask */
#define L2CC_TRCR_TWRLAT(value)               (L2CC_TRCR_TWRLAT_Msk & ((value) << L2CC_TRCR_TWRLAT_Pos))
#define L2CC_TRCR_Msk                         _U_(0x00000777)                                      /**< (L2CC_TRCR) Register Mask  */


/* -------- L2CC_DRCR : (L2CC Offset: 0x10C) (R/W 32) Data RAM Control Register -------- */
#define L2CC_DRCR_DSETLAT_Pos                 _U_(0)                                               /**< (L2CC_DRCR) Setup Latency Position */
#define L2CC_DRCR_DSETLAT_Msk                 (_U_(0x7) << L2CC_DRCR_DSETLAT_Pos)                  /**< (L2CC_DRCR) Setup Latency Mask */
#define L2CC_DRCR_DSETLAT(value)              (L2CC_DRCR_DSETLAT_Msk & ((value) << L2CC_DRCR_DSETLAT_Pos))
#define L2CC_DRCR_DRDLAT_Pos                  _U_(4)                                               /**< (L2CC_DRCR) Read Access Latency Position */
#define L2CC_DRCR_DRDLAT_Msk                  (_U_(0x7) << L2CC_DRCR_DRDLAT_Pos)                   /**< (L2CC_DRCR) Read Access Latency Mask */
#define L2CC_DRCR_DRDLAT(value)               (L2CC_DRCR_DRDLAT_Msk & ((value) << L2CC_DRCR_DRDLAT_Pos))
#define L2CC_DRCR_DWRLAT_Pos                  _U_(8)                                               /**< (L2CC_DRCR) Write Access Latency Position */
#define L2CC_DRCR_DWRLAT_Msk                  (_U_(0x7) << L2CC_DRCR_DWRLAT_Pos)                   /**< (L2CC_DRCR) Write Access Latency Mask */
#define L2CC_DRCR_DWRLAT(value)               (L2CC_DRCR_DWRLAT_Msk & ((value) << L2CC_DRCR_DWRLAT_Pos))
#define L2CC_DRCR_Msk                         _U_(0x00000777)                                      /**< (L2CC_DRCR) Register Mask  */


/* -------- L2CC_ECR : (L2CC Offset: 0x200) (R/W 32) Event Counter Control Register -------- */
#define L2CC_ECR_EVCEN_Pos                    _U_(0)                                               /**< (L2CC_ECR) Event Counter Enable Position */
#define L2CC_ECR_EVCEN_Msk                    (_U_(0x1) << L2CC_ECR_EVCEN_Pos)                     /**< (L2CC_ECR) Event Counter Enable Mask */
#define L2CC_ECR_EVCEN(value)                 (L2CC_ECR_EVCEN_Msk & ((value) << L2CC_ECR_EVCEN_Pos))
#define L2CC_ECR_EVC0RST_Pos                  _U_(1)                                               /**< (L2CC_ECR) Event Counter 0 Reset Position */
#define L2CC_ECR_EVC0RST_Msk                  (_U_(0x1) << L2CC_ECR_EVC0RST_Pos)                   /**< (L2CC_ECR) Event Counter 0 Reset Mask */
#define L2CC_ECR_EVC0RST(value)               (L2CC_ECR_EVC0RST_Msk & ((value) << L2CC_ECR_EVC0RST_Pos))
#define L2CC_ECR_EVC1RST_Pos                  _U_(2)                                               /**< (L2CC_ECR) Event Counter 1 Reset Position */
#define L2CC_ECR_EVC1RST_Msk                  (_U_(0x1) << L2CC_ECR_EVC1RST_Pos)                   /**< (L2CC_ECR) Event Counter 1 Reset Mask */
#define L2CC_ECR_EVC1RST(value)               (L2CC_ECR_EVC1RST_Msk & ((value) << L2CC_ECR_EVC1RST_Pos))
#define L2CC_ECR_Msk                          _U_(0x00000007)                                      /**< (L2CC_ECR) Register Mask  */


/* -------- L2CC_ECFGR1 : (L2CC Offset: 0x204) (R/W 32) Event Counter 1 Configuration Register -------- */
#define L2CC_ECFGR1_EIGEN_Pos                 _U_(0)                                               /**< (L2CC_ECFGR1) Event Counter Interrupt Generation Position */
#define L2CC_ECFGR1_EIGEN_Msk                 (_U_(0x3) << L2CC_ECFGR1_EIGEN_Pos)                  /**< (L2CC_ECFGR1) Event Counter Interrupt Generation Mask */
#define L2CC_ECFGR1_EIGEN(value)              (L2CC_ECFGR1_EIGEN_Msk & ((value) << L2CC_ECFGR1_EIGEN_Pos))
#define   L2CC_ECFGR1_EIGEN_INT_DIS_Val       _U_(0x0)                                             /**< (L2CC_ECFGR1) Disables (default)  */
#define   L2CC_ECFGR1_EIGEN_INT_EN_INCR_Val   _U_(0x1)                                             /**< (L2CC_ECFGR1) Enables with Increment condition  */
#define   L2CC_ECFGR1_EIGEN_INT_EN_OVER_Val   _U_(0x2)                                             /**< (L2CC_ECFGR1) Enables with Overflow condition  */
#define   L2CC_ECFGR1_EIGEN_INT_GEN_DIS_Val   _U_(0x3)                                             /**< (L2CC_ECFGR1) Disables Interrupt generation  */
#define L2CC_ECFGR1_EIGEN_INT_DIS             (L2CC_ECFGR1_EIGEN_INT_DIS_Val << L2CC_ECFGR1_EIGEN_Pos) /**< (L2CC_ECFGR1) Disables (default) Position  */
#define L2CC_ECFGR1_EIGEN_INT_EN_INCR         (L2CC_ECFGR1_EIGEN_INT_EN_INCR_Val << L2CC_ECFGR1_EIGEN_Pos) /**< (L2CC_ECFGR1) Enables with Increment condition Position  */
#define L2CC_ECFGR1_EIGEN_INT_EN_OVER         (L2CC_ECFGR1_EIGEN_INT_EN_OVER_Val << L2CC_ECFGR1_EIGEN_Pos) /**< (L2CC_ECFGR1) Enables with Overflow condition Position  */
#define L2CC_ECFGR1_EIGEN_INT_GEN_DIS         (L2CC_ECFGR1_EIGEN_INT_GEN_DIS_Val << L2CC_ECFGR1_EIGEN_Pos) /**< (L2CC_ECFGR1) Disables Interrupt generation Position  */
#define L2CC_ECFGR1_ESRC_Pos                  _U_(2)                                               /**< (L2CC_ECFGR1) Event Counter Source Position */
#define L2CC_ECFGR1_ESRC_Msk                  (_U_(0xF) << L2CC_ECFGR1_ESRC_Pos)                   /**< (L2CC_ECFGR1) Event Counter Source Mask */
#define L2CC_ECFGR1_ESRC(value)               (L2CC_ECFGR1_ESRC_Msk & ((value) << L2CC_ECFGR1_ESRC_Pos))
#define   L2CC_ECFGR1_ESRC_CNT_DIS_Val        _U_(0x0)                                             /**< (L2CC_ECFGR1) Counter Disabled  */
#define   L2CC_ECFGR1_ESRC_SRC_CO_Val         _U_(0x1)                                             /**< (L2CC_ECFGR1) Source is CO  */
#define   L2CC_ECFGR1_ESRC_SRC_DRHIT_Val      _U_(0x2)                                             /**< (L2CC_ECFGR1) Source is DRHIT  */
#define   L2CC_ECFGR1_ESRC_SRC_DRREQ_Val      _U_(0x3)                                             /**< (L2CC_ECFGR1) Source is DRREQ  */
#define   L2CC_ECFGR1_ESRC_SRC_DWHIT_Val      _U_(0x4)                                             /**< (L2CC_ECFGR1) Source is DWHIT  */
#define   L2CC_ECFGR1_ESRC_SRC_DWREQ_Val      _U_(0x5)                                             /**< (L2CC_ECFGR1) Source is DWREQ  */
#define   L2CC_ECFGR1_ESRC_SRC_DWTREQ_Val     _U_(0x6)                                             /**< (L2CC_ECFGR1) Source is DWTREQ  */
#define   L2CC_ECFGR1_ESRC_SRC_IRHIT_Val      _U_(0x7)                                             /**< (L2CC_ECFGR1) Source is IRHIT  */
#define   L2CC_ECFGR1_ESRC_SRC_IRREQ_Val      _U_(0x8)                                             /**< (L2CC_ECFGR1) Source is IRREQ  */
#define   L2CC_ECFGR1_ESRC_SRC_WA_Val         _U_(0x9)                                             /**< (L2CC_ECFGR1) Source is WA  */
#define   L2CC_ECFGR1_ESRC_SRC_IPFALLOC_Val   _U_(0xA)                                             /**< (L2CC_ECFGR1) Source is IPFALLOC  */
#define   L2CC_ECFGR1_ESRC_SRC_EPFHIT_Val     _U_(0xB)                                             /**< (L2CC_ECFGR1) Source is EPFHIT  */
#define   L2CC_ECFGR1_ESRC_SRC_EPFALLOC_Val   _U_(0xC)                                             /**< (L2CC_ECFGR1) Source is EPFALLOC  */
#define   L2CC_ECFGR1_ESRC_SRC_SRRCVD_Val     _U_(0xD)                                             /**< (L2CC_ECFGR1) Source is SRRCVD  */
#define   L2CC_ECFGR1_ESRC_SRC_SRCONF_Val     _U_(0xE)                                             /**< (L2CC_ECFGR1) Source is SRCONF  */
#define   L2CC_ECFGR1_ESRC_SRC_EPFRCVD_Val    _U_(0xF)                                             /**< (L2CC_ECFGR1) Source is EPFRCVD  */
#define L2CC_ECFGR1_ESRC_CNT_DIS              (L2CC_ECFGR1_ESRC_CNT_DIS_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Counter Disabled Position  */
#define L2CC_ECFGR1_ESRC_SRC_CO               (L2CC_ECFGR1_ESRC_SRC_CO_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is CO Position  */
#define L2CC_ECFGR1_ESRC_SRC_DRHIT            (L2CC_ECFGR1_ESRC_SRC_DRHIT_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is DRHIT Position  */
#define L2CC_ECFGR1_ESRC_SRC_DRREQ            (L2CC_ECFGR1_ESRC_SRC_DRREQ_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is DRREQ Position  */
#define L2CC_ECFGR1_ESRC_SRC_DWHIT            (L2CC_ECFGR1_ESRC_SRC_DWHIT_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is DWHIT Position  */
#define L2CC_ECFGR1_ESRC_SRC_DWREQ            (L2CC_ECFGR1_ESRC_SRC_DWREQ_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is DWREQ Position  */
#define L2CC_ECFGR1_ESRC_SRC_DWTREQ           (L2CC_ECFGR1_ESRC_SRC_DWTREQ_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is DWTREQ Position  */
#define L2CC_ECFGR1_ESRC_SRC_IRHIT            (L2CC_ECFGR1_ESRC_SRC_IRHIT_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is IRHIT Position  */
#define L2CC_ECFGR1_ESRC_SRC_IRREQ            (L2CC_ECFGR1_ESRC_SRC_IRREQ_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is IRREQ Position  */
#define L2CC_ECFGR1_ESRC_SRC_WA               (L2CC_ECFGR1_ESRC_SRC_WA_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is WA Position  */
#define L2CC_ECFGR1_ESRC_SRC_IPFALLOC         (L2CC_ECFGR1_ESRC_SRC_IPFALLOC_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is IPFALLOC Position  */
#define L2CC_ECFGR1_ESRC_SRC_EPFHIT           (L2CC_ECFGR1_ESRC_SRC_EPFHIT_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is EPFHIT Position  */
#define L2CC_ECFGR1_ESRC_SRC_EPFALLOC         (L2CC_ECFGR1_ESRC_SRC_EPFALLOC_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is EPFALLOC Position  */
#define L2CC_ECFGR1_ESRC_SRC_SRRCVD           (L2CC_ECFGR1_ESRC_SRC_SRRCVD_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is SRRCVD Position  */
#define L2CC_ECFGR1_ESRC_SRC_SRCONF           (L2CC_ECFGR1_ESRC_SRC_SRCONF_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is SRCONF Position  */
#define L2CC_ECFGR1_ESRC_SRC_EPFRCVD          (L2CC_ECFGR1_ESRC_SRC_EPFRCVD_Val << L2CC_ECFGR1_ESRC_Pos) /**< (L2CC_ECFGR1) Source is EPFRCVD Position  */
#define L2CC_ECFGR1_Msk                       _U_(0x0000003F)                                      /**< (L2CC_ECFGR1) Register Mask  */


/* -------- L2CC_ECFGR0 : (L2CC Offset: 0x208) (R/W 32) Event Counter 0 Configuration Register -------- */
#define L2CC_ECFGR0_EIGEN_Pos                 _U_(0)                                               /**< (L2CC_ECFGR0) Event Counter Interrupt Generation Position */
#define L2CC_ECFGR0_EIGEN_Msk                 (_U_(0x3) << L2CC_ECFGR0_EIGEN_Pos)                  /**< (L2CC_ECFGR0) Event Counter Interrupt Generation Mask */
#define L2CC_ECFGR0_EIGEN(value)              (L2CC_ECFGR0_EIGEN_Msk & ((value) << L2CC_ECFGR0_EIGEN_Pos))
#define   L2CC_ECFGR0_EIGEN_INT_DIS_Val       _U_(0x0)                                             /**< (L2CC_ECFGR0) Disables (default)  */
#define   L2CC_ECFGR0_EIGEN_INT_EN_INCR_Val   _U_(0x1)                                             /**< (L2CC_ECFGR0) Enables with Increment condition  */
#define   L2CC_ECFGR0_EIGEN_INT_EN_OVER_Val   _U_(0x2)                                             /**< (L2CC_ECFGR0) Enables with Overflow condition  */
#define   L2CC_ECFGR0_EIGEN_INT_GEN_DIS_Val   _U_(0x3)                                             /**< (L2CC_ECFGR0) Disables Interrupt generation  */
#define L2CC_ECFGR0_EIGEN_INT_DIS             (L2CC_ECFGR0_EIGEN_INT_DIS_Val << L2CC_ECFGR0_EIGEN_Pos) /**< (L2CC_ECFGR0) Disables (default) Position  */
#define L2CC_ECFGR0_EIGEN_INT_EN_INCR         (L2CC_ECFGR0_EIGEN_INT_EN_INCR_Val << L2CC_ECFGR0_EIGEN_Pos) /**< (L2CC_ECFGR0) Enables with Increment condition Position  */
#define L2CC_ECFGR0_EIGEN_INT_EN_OVER         (L2CC_ECFGR0_EIGEN_INT_EN_OVER_Val << L2CC_ECFGR0_EIGEN_Pos) /**< (L2CC_ECFGR0) Enables with Overflow condition Position  */
#define L2CC_ECFGR0_EIGEN_INT_GEN_DIS         (L2CC_ECFGR0_EIGEN_INT_GEN_DIS_Val << L2CC_ECFGR0_EIGEN_Pos) /**< (L2CC_ECFGR0) Disables Interrupt generation Position  */
#define L2CC_ECFGR0_ESRC_Pos                  _U_(2)                                               /**< (L2CC_ECFGR0) Event Counter Source Position */
#define L2CC_ECFGR0_ESRC_Msk                  (_U_(0xF) << L2CC_ECFGR0_ESRC_Pos)                   /**< (L2CC_ECFGR0) Event Counter Source Mask */
#define L2CC_ECFGR0_ESRC(value)               (L2CC_ECFGR0_ESRC_Msk & ((value) << L2CC_ECFGR0_ESRC_Pos))
#define   L2CC_ECFGR0_ESRC_CNT_DIS_Val        _U_(0x0)                                             /**< (L2CC_ECFGR0) Counter Disabled  */
#define   L2CC_ECFGR0_ESRC_SRC_CO_Val         _U_(0x1)                                             /**< (L2CC_ECFGR0) Source is CO  */
#define   L2CC_ECFGR0_ESRC_SRC_DRHIT_Val      _U_(0x2)                                             /**< (L2CC_ECFGR0) Source is DRHIT  */
#define   L2CC_ECFGR0_ESRC_SRC_DRREQ_Val      _U_(0x3)                                             /**< (L2CC_ECFGR0) Source is DRREQ  */
#define   L2CC_ECFGR0_ESRC_SRC_DWHIT_Val      _U_(0x4)                                             /**< (L2CC_ECFGR0) Source is DWHIT  */
#define   L2CC_ECFGR0_ESRC_SRC_DWREQ_Val      _U_(0x5)                                             /**< (L2CC_ECFGR0) Source is DWREQ  */
#define   L2CC_ECFGR0_ESRC_SRC_DWTREQ_Val     _U_(0x6)                                             /**< (L2CC_ECFGR0) Source is DWTREQ  */
#define   L2CC_ECFGR0_ESRC_SRC_IRHIT_Val      _U_(0x7)                                             /**< (L2CC_ECFGR0) Source is IRHIT  */
#define   L2CC_ECFGR0_ESRC_SRC_IRREQ_Val      _U_(0x8)                                             /**< (L2CC_ECFGR0) Source is IRREQ  */
#define   L2CC_ECFGR0_ESRC_SRC_WA_Val         _U_(0x9)                                             /**< (L2CC_ECFGR0) Source is WA  */
#define   L2CC_ECFGR0_ESRC_SRC_IPFALLOC_Val   _U_(0xA)                                             /**< (L2CC_ECFGR0) Source is IPFALLOC  */
#define   L2CC_ECFGR0_ESRC_SRC_EPFHIT_Val     _U_(0xB)                                             /**< (L2CC_ECFGR0) Source is EPFHIT  */
#define   L2CC_ECFGR0_ESRC_SRC_EPFALLOC_Val   _U_(0xC)                                             /**< (L2CC_ECFGR0) Source is EPFALLOC  */
#define   L2CC_ECFGR0_ESRC_SRC_SRRCVD_Val     _U_(0xD)                                             /**< (L2CC_ECFGR0) Source is SRRCVD  */
#define   L2CC_ECFGR0_ESRC_SRC_SRCONF_Val     _U_(0xE)                                             /**< (L2CC_ECFGR0) Source is SRCONF  */
#define   L2CC_ECFGR0_ESRC_SRC_EPFRCVD_Val    _U_(0xF)                                             /**< (L2CC_ECFGR0) Source is EPFRCVD  */
#define L2CC_ECFGR0_ESRC_CNT_DIS              (L2CC_ECFGR0_ESRC_CNT_DIS_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Counter Disabled Position  */
#define L2CC_ECFGR0_ESRC_SRC_CO               (L2CC_ECFGR0_ESRC_SRC_CO_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is CO Position  */
#define L2CC_ECFGR0_ESRC_SRC_DRHIT            (L2CC_ECFGR0_ESRC_SRC_DRHIT_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is DRHIT Position  */
#define L2CC_ECFGR0_ESRC_SRC_DRREQ            (L2CC_ECFGR0_ESRC_SRC_DRREQ_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is DRREQ Position  */
#define L2CC_ECFGR0_ESRC_SRC_DWHIT            (L2CC_ECFGR0_ESRC_SRC_DWHIT_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is DWHIT Position  */
#define L2CC_ECFGR0_ESRC_SRC_DWREQ            (L2CC_ECFGR0_ESRC_SRC_DWREQ_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is DWREQ Position  */
#define L2CC_ECFGR0_ESRC_SRC_DWTREQ           (L2CC_ECFGR0_ESRC_SRC_DWTREQ_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is DWTREQ Position  */
#define L2CC_ECFGR0_ESRC_SRC_IRHIT            (L2CC_ECFGR0_ESRC_SRC_IRHIT_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is IRHIT Position  */
#define L2CC_ECFGR0_ESRC_SRC_IRREQ            (L2CC_ECFGR0_ESRC_SRC_IRREQ_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is IRREQ Position  */
#define L2CC_ECFGR0_ESRC_SRC_WA               (L2CC_ECFGR0_ESRC_SRC_WA_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is WA Position  */
#define L2CC_ECFGR0_ESRC_SRC_IPFALLOC         (L2CC_ECFGR0_ESRC_SRC_IPFALLOC_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is IPFALLOC Position  */
#define L2CC_ECFGR0_ESRC_SRC_EPFHIT           (L2CC_ECFGR0_ESRC_SRC_EPFHIT_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is EPFHIT Position  */
#define L2CC_ECFGR0_ESRC_SRC_EPFALLOC         (L2CC_ECFGR0_ESRC_SRC_EPFALLOC_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is EPFALLOC Position  */
#define L2CC_ECFGR0_ESRC_SRC_SRRCVD           (L2CC_ECFGR0_ESRC_SRC_SRRCVD_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is SRRCVD Position  */
#define L2CC_ECFGR0_ESRC_SRC_SRCONF           (L2CC_ECFGR0_ESRC_SRC_SRCONF_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is SRCONF Position  */
#define L2CC_ECFGR0_ESRC_SRC_EPFRCVD          (L2CC_ECFGR0_ESRC_SRC_EPFRCVD_Val << L2CC_ECFGR0_ESRC_Pos) /**< (L2CC_ECFGR0) Source is EPFRCVD Position  */
#define L2CC_ECFGR0_Msk                       _U_(0x0000003F)                                      /**< (L2CC_ECFGR0) Register Mask  */


/* -------- L2CC_EVR1 : (L2CC Offset: 0x20C) (R/W 32) Event Counter 1 Value Register -------- */
#define L2CC_EVR1_VALUE_Pos                   _U_(0)                                               /**< (L2CC_EVR1) Event Counter Value Position */
#define L2CC_EVR1_VALUE_Msk                   (_U_(0xFFFFFFFF) << L2CC_EVR1_VALUE_Pos)             /**< (L2CC_EVR1) Event Counter Value Mask */
#define L2CC_EVR1_VALUE(value)                (L2CC_EVR1_VALUE_Msk & ((value) << L2CC_EVR1_VALUE_Pos))
#define L2CC_EVR1_Msk                         _U_(0xFFFFFFFF)                                      /**< (L2CC_EVR1) Register Mask  */


/* -------- L2CC_EVR0 : (L2CC Offset: 0x210) (R/W 32) Event Counter 0 Value Register -------- */
#define L2CC_EVR0_VALUE_Pos                   _U_(0)                                               /**< (L2CC_EVR0) Event Counter Value Position */
#define L2CC_EVR0_VALUE_Msk                   (_U_(0xFFFFFFFF) << L2CC_EVR0_VALUE_Pos)             /**< (L2CC_EVR0) Event Counter Value Mask */
#define L2CC_EVR0_VALUE(value)                (L2CC_EVR0_VALUE_Msk & ((value) << L2CC_EVR0_VALUE_Pos))
#define L2CC_EVR0_Msk                         _U_(0xFFFFFFFF)                                      /**< (L2CC_EVR0) Register Mask  */


/* -------- L2CC_IMR : (L2CC Offset: 0x214) (R/W 32) Interrupt Mask Register -------- */
#define L2CC_IMR_ECNTR_Pos                    _U_(0)                                               /**< (L2CC_IMR) Event Counter 1/0 Overflow Increment Position */
#define L2CC_IMR_ECNTR_Msk                    (_U_(0x1) << L2CC_IMR_ECNTR_Pos)                     /**< (L2CC_IMR) Event Counter 1/0 Overflow Increment Mask */
#define L2CC_IMR_ECNTR(value)                 (L2CC_IMR_ECNTR_Msk & ((value) << L2CC_IMR_ECNTR_Pos))
#define L2CC_IMR_PARRT_Pos                    _U_(1)                                               /**< (L2CC_IMR) Parity Error on L2 Tag RAM, Read Position */
#define L2CC_IMR_PARRT_Msk                    (_U_(0x1) << L2CC_IMR_PARRT_Pos)                     /**< (L2CC_IMR) Parity Error on L2 Tag RAM, Read Mask */
#define L2CC_IMR_PARRT(value)                 (L2CC_IMR_PARRT_Msk & ((value) << L2CC_IMR_PARRT_Pos))
#define L2CC_IMR_PARRD_Pos                    _U_(2)                                               /**< (L2CC_IMR) Parity Error on L2 Data RAM, Read Position */
#define L2CC_IMR_PARRD_Msk                    (_U_(0x1) << L2CC_IMR_PARRD_Pos)                     /**< (L2CC_IMR) Parity Error on L2 Data RAM, Read Mask */
#define L2CC_IMR_PARRD(value)                 (L2CC_IMR_PARRD_Msk & ((value) << L2CC_IMR_PARRD_Pos))
#define L2CC_IMR_ERRWT_Pos                    _U_(3)                                               /**< (L2CC_IMR) Error on L2 Tag RAM, Write Position */
#define L2CC_IMR_ERRWT_Msk                    (_U_(0x1) << L2CC_IMR_ERRWT_Pos)                     /**< (L2CC_IMR) Error on L2 Tag RAM, Write Mask */
#define L2CC_IMR_ERRWT(value)                 (L2CC_IMR_ERRWT_Msk & ((value) << L2CC_IMR_ERRWT_Pos))
#define L2CC_IMR_ERRWD_Pos                    _U_(4)                                               /**< (L2CC_IMR) Error on L2 Data RAM, Write Position */
#define L2CC_IMR_ERRWD_Msk                    (_U_(0x1) << L2CC_IMR_ERRWD_Pos)                     /**< (L2CC_IMR) Error on L2 Data RAM, Write Mask */
#define L2CC_IMR_ERRWD(value)                 (L2CC_IMR_ERRWD_Msk & ((value) << L2CC_IMR_ERRWD_Pos))
#define L2CC_IMR_ERRRT_Pos                    _U_(5)                                               /**< (L2CC_IMR) Error on L2 Tag RAM, Read Position */
#define L2CC_IMR_ERRRT_Msk                    (_U_(0x1) << L2CC_IMR_ERRRT_Pos)                     /**< (L2CC_IMR) Error on L2 Tag RAM, Read Mask */
#define L2CC_IMR_ERRRT(value)                 (L2CC_IMR_ERRRT_Msk & ((value) << L2CC_IMR_ERRRT_Pos))
#define L2CC_IMR_ERRRD_Pos                    _U_(6)                                               /**< (L2CC_IMR) Error on L2 Data RAM, Read Position */
#define L2CC_IMR_ERRRD_Msk                    (_U_(0x1) << L2CC_IMR_ERRRD_Pos)                     /**< (L2CC_IMR) Error on L2 Data RAM, Read Mask */
#define L2CC_IMR_ERRRD(value)                 (L2CC_IMR_ERRRD_Msk & ((value) << L2CC_IMR_ERRRD_Pos))
#define L2CC_IMR_SLVERR_Pos                   _U_(7)                                               /**< (L2CC_IMR) SLVERR from L3 Memory Position */
#define L2CC_IMR_SLVERR_Msk                   (_U_(0x1) << L2CC_IMR_SLVERR_Pos)                    /**< (L2CC_IMR) SLVERR from L3 Memory Mask */
#define L2CC_IMR_SLVERR(value)                (L2CC_IMR_SLVERR_Msk & ((value) << L2CC_IMR_SLVERR_Pos))
#define L2CC_IMR_DECERR_Pos                   _U_(8)                                               /**< (L2CC_IMR) DECERR from L3 Memory Position */
#define L2CC_IMR_DECERR_Msk                   (_U_(0x1) << L2CC_IMR_DECERR_Pos)                    /**< (L2CC_IMR) DECERR from L3 Memory Mask */
#define L2CC_IMR_DECERR(value)                (L2CC_IMR_DECERR_Msk & ((value) << L2CC_IMR_DECERR_Pos))
#define L2CC_IMR_Msk                          _U_(0x000001FF)                                      /**< (L2CC_IMR) Register Mask  */


/* -------- L2CC_MISR : (L2CC Offset: 0x218) ( R/ 32) Masked Interrupt Status Register -------- */
#define L2CC_MISR_ECNTR_Pos                   _U_(0)                                               /**< (L2CC_MISR) Event Counter 1/0 Overflow Increment Position */
#define L2CC_MISR_ECNTR_Msk                   (_U_(0x1) << L2CC_MISR_ECNTR_Pos)                    /**< (L2CC_MISR) Event Counter 1/0 Overflow Increment Mask */
#define L2CC_MISR_ECNTR(value)                (L2CC_MISR_ECNTR_Msk & ((value) << L2CC_MISR_ECNTR_Pos))
#define L2CC_MISR_PARRT_Pos                   _U_(1)                                               /**< (L2CC_MISR) Parity Error on L2 Tag RAM, Read Position */
#define L2CC_MISR_PARRT_Msk                   (_U_(0x1) << L2CC_MISR_PARRT_Pos)                    /**< (L2CC_MISR) Parity Error on L2 Tag RAM, Read Mask */
#define L2CC_MISR_PARRT(value)                (L2CC_MISR_PARRT_Msk & ((value) << L2CC_MISR_PARRT_Pos))
#define L2CC_MISR_PARRD_Pos                   _U_(2)                                               /**< (L2CC_MISR) Parity Error on L2 Data RAM, Read Position */
#define L2CC_MISR_PARRD_Msk                   (_U_(0x1) << L2CC_MISR_PARRD_Pos)                    /**< (L2CC_MISR) Parity Error on L2 Data RAM, Read Mask */
#define L2CC_MISR_PARRD(value)                (L2CC_MISR_PARRD_Msk & ((value) << L2CC_MISR_PARRD_Pos))
#define L2CC_MISR_ERRWT_Pos                   _U_(3)                                               /**< (L2CC_MISR) Error on L2 Tag RAM, Write Position */
#define L2CC_MISR_ERRWT_Msk                   (_U_(0x1) << L2CC_MISR_ERRWT_Pos)                    /**< (L2CC_MISR) Error on L2 Tag RAM, Write Mask */
#define L2CC_MISR_ERRWT(value)                (L2CC_MISR_ERRWT_Msk & ((value) << L2CC_MISR_ERRWT_Pos))
#define L2CC_MISR_ERRWD_Pos                   _U_(4)                                               /**< (L2CC_MISR) Error on L2 Data RAM, Write Position */
#define L2CC_MISR_ERRWD_Msk                   (_U_(0x1) << L2CC_MISR_ERRWD_Pos)                    /**< (L2CC_MISR) Error on L2 Data RAM, Write Mask */
#define L2CC_MISR_ERRWD(value)                (L2CC_MISR_ERRWD_Msk & ((value) << L2CC_MISR_ERRWD_Pos))
#define L2CC_MISR_ERRRT_Pos                   _U_(5)                                               /**< (L2CC_MISR) Error on L2 Tag RAM, Read Position */
#define L2CC_MISR_ERRRT_Msk                   (_U_(0x1) << L2CC_MISR_ERRRT_Pos)                    /**< (L2CC_MISR) Error on L2 Tag RAM, Read Mask */
#define L2CC_MISR_ERRRT(value)                (L2CC_MISR_ERRRT_Msk & ((value) << L2CC_MISR_ERRRT_Pos))
#define L2CC_MISR_ERRRD_Pos                   _U_(6)                                               /**< (L2CC_MISR) Error on L2 Data RAM, Read Position */
#define L2CC_MISR_ERRRD_Msk                   (_U_(0x1) << L2CC_MISR_ERRRD_Pos)                    /**< (L2CC_MISR) Error on L2 Data RAM, Read Mask */
#define L2CC_MISR_ERRRD(value)                (L2CC_MISR_ERRRD_Msk & ((value) << L2CC_MISR_ERRRD_Pos))
#define L2CC_MISR_SLVERR_Pos                  _U_(7)                                               /**< (L2CC_MISR) SLVERR from L3 memory Position */
#define L2CC_MISR_SLVERR_Msk                  (_U_(0x1) << L2CC_MISR_SLVERR_Pos)                   /**< (L2CC_MISR) SLVERR from L3 memory Mask */
#define L2CC_MISR_SLVERR(value)               (L2CC_MISR_SLVERR_Msk & ((value) << L2CC_MISR_SLVERR_Pos))
#define L2CC_MISR_DECERR_Pos                  _U_(8)                                               /**< (L2CC_MISR) DECERR from L3 memory Position */
#define L2CC_MISR_DECERR_Msk                  (_U_(0x1) << L2CC_MISR_DECERR_Pos)                   /**< (L2CC_MISR) DECERR from L3 memory Mask */
#define L2CC_MISR_DECERR(value)               (L2CC_MISR_DECERR_Msk & ((value) << L2CC_MISR_DECERR_Pos))
#define L2CC_MISR_Msk                         _U_(0x000001FF)                                      /**< (L2CC_MISR) Register Mask  */


/* -------- L2CC_RISR : (L2CC Offset: 0x21C) ( R/ 32) Raw Interrupt Status Register -------- */
#define L2CC_RISR_ECNTR_Pos                   _U_(0)                                               /**< (L2CC_RISR) Event Counter 1/0 Overflow Increment Position */
#define L2CC_RISR_ECNTR_Msk                   (_U_(0x1) << L2CC_RISR_ECNTR_Pos)                    /**< (L2CC_RISR) Event Counter 1/0 Overflow Increment Mask */
#define L2CC_RISR_ECNTR(value)                (L2CC_RISR_ECNTR_Msk & ((value) << L2CC_RISR_ECNTR_Pos))
#define L2CC_RISR_PARRT_Pos                   _U_(1)                                               /**< (L2CC_RISR) Parity Error on L2 Tag RAM, Read Position */
#define L2CC_RISR_PARRT_Msk                   (_U_(0x1) << L2CC_RISR_PARRT_Pos)                    /**< (L2CC_RISR) Parity Error on L2 Tag RAM, Read Mask */
#define L2CC_RISR_PARRT(value)                (L2CC_RISR_PARRT_Msk & ((value) << L2CC_RISR_PARRT_Pos))
#define L2CC_RISR_PARRD_Pos                   _U_(2)                                               /**< (L2CC_RISR) Parity Error on L2 Data RAM, Read Position */
#define L2CC_RISR_PARRD_Msk                   (_U_(0x1) << L2CC_RISR_PARRD_Pos)                    /**< (L2CC_RISR) Parity Error on L2 Data RAM, Read Mask */
#define L2CC_RISR_PARRD(value)                (L2CC_RISR_PARRD_Msk & ((value) << L2CC_RISR_PARRD_Pos))
#define L2CC_RISR_ERRWT_Pos                   _U_(3)                                               /**< (L2CC_RISR) Error on L2 Tag RAM, Write Position */
#define L2CC_RISR_ERRWT_Msk                   (_U_(0x1) << L2CC_RISR_ERRWT_Pos)                    /**< (L2CC_RISR) Error on L2 Tag RAM, Write Mask */
#define L2CC_RISR_ERRWT(value)                (L2CC_RISR_ERRWT_Msk & ((value) << L2CC_RISR_ERRWT_Pos))
#define L2CC_RISR_ERRWD_Pos                   _U_(4)                                               /**< (L2CC_RISR) Error on L2 Data RAM, Write Position */
#define L2CC_RISR_ERRWD_Msk                   (_U_(0x1) << L2CC_RISR_ERRWD_Pos)                    /**< (L2CC_RISR) Error on L2 Data RAM, Write Mask */
#define L2CC_RISR_ERRWD(value)                (L2CC_RISR_ERRWD_Msk & ((value) << L2CC_RISR_ERRWD_Pos))
#define L2CC_RISR_ERRRT_Pos                   _U_(5)                                               /**< (L2CC_RISR) Error on L2 Tag RAM, Read Position */
#define L2CC_RISR_ERRRT_Msk                   (_U_(0x1) << L2CC_RISR_ERRRT_Pos)                    /**< (L2CC_RISR) Error on L2 Tag RAM, Read Mask */
#define L2CC_RISR_ERRRT(value)                (L2CC_RISR_ERRRT_Msk & ((value) << L2CC_RISR_ERRRT_Pos))
#define L2CC_RISR_ERRRD_Pos                   _U_(6)                                               /**< (L2CC_RISR) Error on L2 Data RAM, Read Position */
#define L2CC_RISR_ERRRD_Msk                   (_U_(0x1) << L2CC_RISR_ERRRD_Pos)                    /**< (L2CC_RISR) Error on L2 Data RAM, Read Mask */
#define L2CC_RISR_ERRRD(value)                (L2CC_RISR_ERRRD_Msk & ((value) << L2CC_RISR_ERRRD_Pos))
#define L2CC_RISR_SLVERR_Pos                  _U_(7)                                               /**< (L2CC_RISR) SLVERR from L3 memory Position */
#define L2CC_RISR_SLVERR_Msk                  (_U_(0x1) << L2CC_RISR_SLVERR_Pos)                   /**< (L2CC_RISR) SLVERR from L3 memory Mask */
#define L2CC_RISR_SLVERR(value)               (L2CC_RISR_SLVERR_Msk & ((value) << L2CC_RISR_SLVERR_Pos))
#define L2CC_RISR_DECERR_Pos                  _U_(8)                                               /**< (L2CC_RISR) DECERR from L3 memory Position */
#define L2CC_RISR_DECERR_Msk                  (_U_(0x1) << L2CC_RISR_DECERR_Pos)                   /**< (L2CC_RISR) DECERR from L3 memory Mask */
#define L2CC_RISR_DECERR(value)               (L2CC_RISR_DECERR_Msk & ((value) << L2CC_RISR_DECERR_Pos))
#define L2CC_RISR_Msk                         _U_(0x000001FF)                                      /**< (L2CC_RISR) Register Mask  */


/* -------- L2CC_ICR : (L2CC Offset: 0x220) (R/W 32) Interrupt Clear Register -------- */
#define L2CC_ICR_ECNTR_Pos                    _U_(0)                                               /**< (L2CC_ICR) Event Counter 1/0 Overflow Increment Position */
#define L2CC_ICR_ECNTR_Msk                    (_U_(0x1) << L2CC_ICR_ECNTR_Pos)                     /**< (L2CC_ICR) Event Counter 1/0 Overflow Increment Mask */
#define L2CC_ICR_ECNTR(value)                 (L2CC_ICR_ECNTR_Msk & ((value) << L2CC_ICR_ECNTR_Pos))
#define L2CC_ICR_PARRT_Pos                    _U_(1)                                               /**< (L2CC_ICR) Parity Error on L2 Tag RAM, Read Position */
#define L2CC_ICR_PARRT_Msk                    (_U_(0x1) << L2CC_ICR_PARRT_Pos)                     /**< (L2CC_ICR) Parity Error on L2 Tag RAM, Read Mask */
#define L2CC_ICR_PARRT(value)                 (L2CC_ICR_PARRT_Msk & ((value) << L2CC_ICR_PARRT_Pos))
#define L2CC_ICR_PARRD_Pos                    _U_(2)                                               /**< (L2CC_ICR) Parity Error on L2 Data RAM, Read Position */
#define L2CC_ICR_PARRD_Msk                    (_U_(0x1) << L2CC_ICR_PARRD_Pos)                     /**< (L2CC_ICR) Parity Error on L2 Data RAM, Read Mask */
#define L2CC_ICR_PARRD(value)                 (L2CC_ICR_PARRD_Msk & ((value) << L2CC_ICR_PARRD_Pos))
#define L2CC_ICR_ERRWT_Pos                    _U_(3)                                               /**< (L2CC_ICR) Error on L2 Tag RAM, Write Position */
#define L2CC_ICR_ERRWT_Msk                    (_U_(0x1) << L2CC_ICR_ERRWT_Pos)                     /**< (L2CC_ICR) Error on L2 Tag RAM, Write Mask */
#define L2CC_ICR_ERRWT(value)                 (L2CC_ICR_ERRWT_Msk & ((value) << L2CC_ICR_ERRWT_Pos))
#define L2CC_ICR_ERRWD_Pos                    _U_(4)                                               /**< (L2CC_ICR) Error on L2 Data RAM, Write Position */
#define L2CC_ICR_ERRWD_Msk                    (_U_(0x1) << L2CC_ICR_ERRWD_Pos)                     /**< (L2CC_ICR) Error on L2 Data RAM, Write Mask */
#define L2CC_ICR_ERRWD(value)                 (L2CC_ICR_ERRWD_Msk & ((value) << L2CC_ICR_ERRWD_Pos))
#define L2CC_ICR_ERRRT_Pos                    _U_(5)                                               /**< (L2CC_ICR) Error on L2 Tag RAM, Read Position */
#define L2CC_ICR_ERRRT_Msk                    (_U_(0x1) << L2CC_ICR_ERRRT_Pos)                     /**< (L2CC_ICR) Error on L2 Tag RAM, Read Mask */
#define L2CC_ICR_ERRRT(value)                 (L2CC_ICR_ERRRT_Msk & ((value) << L2CC_ICR_ERRRT_Pos))
#define L2CC_ICR_ERRRD_Pos                    _U_(6)                                               /**< (L2CC_ICR) Error on L2 Data RAM, Read Position */
#define L2CC_ICR_ERRRD_Msk                    (_U_(0x1) << L2CC_ICR_ERRRD_Pos)                     /**< (L2CC_ICR) Error on L2 Data RAM, Read Mask */
#define L2CC_ICR_ERRRD(value)                 (L2CC_ICR_ERRRD_Msk & ((value) << L2CC_ICR_ERRRD_Pos))
#define L2CC_ICR_SLVERR_Pos                   _U_(7)                                               /**< (L2CC_ICR) SLVERR from L3 memory Position */
#define L2CC_ICR_SLVERR_Msk                   (_U_(0x1) << L2CC_ICR_SLVERR_Pos)                    /**< (L2CC_ICR) SLVERR from L3 memory Mask */
#define L2CC_ICR_SLVERR(value)                (L2CC_ICR_SLVERR_Msk & ((value) << L2CC_ICR_SLVERR_Pos))
#define L2CC_ICR_DECERR_Pos                   _U_(8)                                               /**< (L2CC_ICR) DECERR from L3 memory Position */
#define L2CC_ICR_DECERR_Msk                   (_U_(0x1) << L2CC_ICR_DECERR_Pos)                    /**< (L2CC_ICR) DECERR from L3 memory Mask */
#define L2CC_ICR_DECERR(value)                (L2CC_ICR_DECERR_Msk & ((value) << L2CC_ICR_DECERR_Pos))
#define L2CC_ICR_Msk                          _U_(0x000001FF)                                      /**< (L2CC_ICR) Register Mask  */


/* -------- L2CC_CSR : (L2CC Offset: 0x730) (R/W 32) Cache Synchronization Register -------- */
#define L2CC_CSR_C_Pos                        _U_(0)                                               /**< (L2CC_CSR) Cache Synchronization Status Position */
#define L2CC_CSR_C_Msk                        (_U_(0x1) << L2CC_CSR_C_Pos)                         /**< (L2CC_CSR) Cache Synchronization Status Mask */
#define L2CC_CSR_C(value)                     (L2CC_CSR_C_Msk & ((value) << L2CC_CSR_C_Pos))      
#define L2CC_CSR_Msk                          _U_(0x00000001)                                      /**< (L2CC_CSR) Register Mask  */


/* -------- L2CC_IPALR : (L2CC Offset: 0x770) (R/W 32) Invalidate Physical Address Line Register -------- */
#define L2CC_IPALR_C_Pos                      _U_(0)                                               /**< (L2CC_IPALR) Cache Synchronization Status Position */
#define L2CC_IPALR_C_Msk                      (_U_(0x1) << L2CC_IPALR_C_Pos)                       /**< (L2CC_IPALR) Cache Synchronization Status Mask */
#define L2CC_IPALR_C(value)                   (L2CC_IPALR_C_Msk & ((value) << L2CC_IPALR_C_Pos))  
#define L2CC_IPALR_IDX_Pos                    _U_(5)                                               /**< (L2CC_IPALR) Index Number Position */
#define L2CC_IPALR_IDX_Msk                    (_U_(0x1FF) << L2CC_IPALR_IDX_Pos)                   /**< (L2CC_IPALR) Index Number Mask */
#define L2CC_IPALR_IDX(value)                 (L2CC_IPALR_IDX_Msk & ((value) << L2CC_IPALR_IDX_Pos))
#define L2CC_IPALR_TAG_Pos                    _U_(14)                                              /**< (L2CC_IPALR) Tag Number Position */
#define L2CC_IPALR_TAG_Msk                    (_U_(0x3FFFF) << L2CC_IPALR_TAG_Pos)                 /**< (L2CC_IPALR) Tag Number Mask */
#define L2CC_IPALR_TAG(value)                 (L2CC_IPALR_TAG_Msk & ((value) << L2CC_IPALR_TAG_Pos))
#define L2CC_IPALR_Msk                        _U_(0xFFFFFFE1)                                      /**< (L2CC_IPALR) Register Mask  */


/* -------- L2CC_IWR : (L2CC Offset: 0x77C) (R/W 32) Invalidate Way Register -------- */
#define L2CC_IWR_WAY0_Pos                     _U_(0)                                               /**< (L2CC_IWR) Invalidate Way Number 0 Position */
#define L2CC_IWR_WAY0_Msk                     (_U_(0x1) << L2CC_IWR_WAY0_Pos)                      /**< (L2CC_IWR) Invalidate Way Number 0 Mask */
#define L2CC_IWR_WAY0(value)                  (L2CC_IWR_WAY0_Msk & ((value) << L2CC_IWR_WAY0_Pos))
#define L2CC_IWR_WAY1_Pos                     _U_(1)                                               /**< (L2CC_IWR) Invalidate Way Number 1 Position */
#define L2CC_IWR_WAY1_Msk                     (_U_(0x1) << L2CC_IWR_WAY1_Pos)                      /**< (L2CC_IWR) Invalidate Way Number 1 Mask */
#define L2CC_IWR_WAY1(value)                  (L2CC_IWR_WAY1_Msk & ((value) << L2CC_IWR_WAY1_Pos))
#define L2CC_IWR_WAY2_Pos                     _U_(2)                                               /**< (L2CC_IWR) Invalidate Way Number 2 Position */
#define L2CC_IWR_WAY2_Msk                     (_U_(0x1) << L2CC_IWR_WAY2_Pos)                      /**< (L2CC_IWR) Invalidate Way Number 2 Mask */
#define L2CC_IWR_WAY2(value)                  (L2CC_IWR_WAY2_Msk & ((value) << L2CC_IWR_WAY2_Pos))
#define L2CC_IWR_WAY3_Pos                     _U_(3)                                               /**< (L2CC_IWR) Invalidate Way Number 3 Position */
#define L2CC_IWR_WAY3_Msk                     (_U_(0x1) << L2CC_IWR_WAY3_Pos)                      /**< (L2CC_IWR) Invalidate Way Number 3 Mask */
#define L2CC_IWR_WAY3(value)                  (L2CC_IWR_WAY3_Msk & ((value) << L2CC_IWR_WAY3_Pos))
#define L2CC_IWR_WAY4_Pos                     _U_(4)                                               /**< (L2CC_IWR) Invalidate Way Number 4 Position */
#define L2CC_IWR_WAY4_Msk                     (_U_(0x1) << L2CC_IWR_WAY4_Pos)                      /**< (L2CC_IWR) Invalidate Way Number 4 Mask */
#define L2CC_IWR_WAY4(value)                  (L2CC_IWR_WAY4_Msk & ((value) << L2CC_IWR_WAY4_Pos))
#define L2CC_IWR_WAY5_Pos                     _U_(5)                                               /**< (L2CC_IWR) Invalidate Way Number 5 Position */
#define L2CC_IWR_WAY5_Msk                     (_U_(0x1) << L2CC_IWR_WAY5_Pos)                      /**< (L2CC_IWR) Invalidate Way Number 5 Mask */
#define L2CC_IWR_WAY5(value)                  (L2CC_IWR_WAY5_Msk & ((value) << L2CC_IWR_WAY5_Pos))
#define L2CC_IWR_WAY6_Pos                     _U_(6)                                               /**< (L2CC_IWR) Invalidate Way Number 6 Position */
#define L2CC_IWR_WAY6_Msk                     (_U_(0x1) << L2CC_IWR_WAY6_Pos)                      /**< (L2CC_IWR) Invalidate Way Number 6 Mask */
#define L2CC_IWR_WAY6(value)                  (L2CC_IWR_WAY6_Msk & ((value) << L2CC_IWR_WAY6_Pos))
#define L2CC_IWR_WAY7_Pos                     _U_(7)                                               /**< (L2CC_IWR) Invalidate Way Number 7 Position */
#define L2CC_IWR_WAY7_Msk                     (_U_(0x1) << L2CC_IWR_WAY7_Pos)                      /**< (L2CC_IWR) Invalidate Way Number 7 Mask */
#define L2CC_IWR_WAY7(value)                  (L2CC_IWR_WAY7_Msk & ((value) << L2CC_IWR_WAY7_Pos))
#define L2CC_IWR_Msk                          _U_(0x000000FF)                                      /**< (L2CC_IWR) Register Mask  */

#define L2CC_IWR_WAY_Pos                      _U_(0)                                               /**< (L2CC_IWR Position) Invalidate Way Number 7 */
#define L2CC_IWR_WAY_Msk                      (_U_(0xFF) << L2CC_IWR_WAY_Pos)                      /**< (L2CC_IWR Mask) WAY */
#define L2CC_IWR_WAY(value)                   (L2CC_IWR_WAY_Msk & ((value) << L2CC_IWR_WAY_Pos))   

/* -------- L2CC_CPALR : (L2CC Offset: 0x7B0) (R/W 32) Clean Physical Address Line Register -------- */
#define L2CC_CPALR_C_Pos                      _U_(0)                                               /**< (L2CC_CPALR) Cache Synchronization Status Position */
#define L2CC_CPALR_C_Msk                      (_U_(0x1) << L2CC_CPALR_C_Pos)                       /**< (L2CC_CPALR) Cache Synchronization Status Mask */
#define L2CC_CPALR_C(value)                   (L2CC_CPALR_C_Msk & ((value) << L2CC_CPALR_C_Pos))  
#define L2CC_CPALR_IDX_Pos                    _U_(5)                                               /**< (L2CC_CPALR) Index number Position */
#define L2CC_CPALR_IDX_Msk                    (_U_(0x1FF) << L2CC_CPALR_IDX_Pos)                   /**< (L2CC_CPALR) Index number Mask */
#define L2CC_CPALR_IDX(value)                 (L2CC_CPALR_IDX_Msk & ((value) << L2CC_CPALR_IDX_Pos))
#define L2CC_CPALR_TAG_Pos                    _U_(14)                                              /**< (L2CC_CPALR) Tag number Position */
#define L2CC_CPALR_TAG_Msk                    (_U_(0x3FFFF) << L2CC_CPALR_TAG_Pos)                 /**< (L2CC_CPALR) Tag number Mask */
#define L2CC_CPALR_TAG(value)                 (L2CC_CPALR_TAG_Msk & ((value) << L2CC_CPALR_TAG_Pos))
#define L2CC_CPALR_Msk                        _U_(0xFFFFFFE1)                                      /**< (L2CC_CPALR) Register Mask  */


/* -------- L2CC_CIR : (L2CC Offset: 0x7B8) (R/W 32) Clean Index Register -------- */
#define L2CC_CIR_C_Pos                        _U_(0)                                               /**< (L2CC_CIR) Cache Synchronization Status Position */
#define L2CC_CIR_C_Msk                        (_U_(0x1) << L2CC_CIR_C_Pos)                         /**< (L2CC_CIR) Cache Synchronization Status Mask */
#define L2CC_CIR_C(value)                     (L2CC_CIR_C_Msk & ((value) << L2CC_CIR_C_Pos))      
#define L2CC_CIR_IDX_Pos                      _U_(5)                                               /**< (L2CC_CIR) Index number Position */
#define L2CC_CIR_IDX_Msk                      (_U_(0x1FF) << L2CC_CIR_IDX_Pos)                     /**< (L2CC_CIR) Index number Mask */
#define L2CC_CIR_IDX(value)                   (L2CC_CIR_IDX_Msk & ((value) << L2CC_CIR_IDX_Pos))  
#define L2CC_CIR_WAY_Pos                      _U_(28)                                              /**< (L2CC_CIR) Way number Position */
#define L2CC_CIR_WAY_Msk                      (_U_(0x7) << L2CC_CIR_WAY_Pos)                       /**< (L2CC_CIR) Way number Mask */
#define L2CC_CIR_WAY(value)                   (L2CC_CIR_WAY_Msk & ((value) << L2CC_CIR_WAY_Pos))  
#define L2CC_CIR_Msk                          _U_(0x70003FE1)                                      /**< (L2CC_CIR) Register Mask  */


/* -------- L2CC_CWR : (L2CC Offset: 0x7BC) (R/W 32) Clean Way Register -------- */
#define L2CC_CWR_WAY0_Pos                     _U_(0)                                               /**< (L2CC_CWR) Clean Way Number 0 Position */
#define L2CC_CWR_WAY0_Msk                     (_U_(0x1) << L2CC_CWR_WAY0_Pos)                      /**< (L2CC_CWR) Clean Way Number 0 Mask */
#define L2CC_CWR_WAY0(value)                  (L2CC_CWR_WAY0_Msk & ((value) << L2CC_CWR_WAY0_Pos))
#define L2CC_CWR_WAY1_Pos                     _U_(1)                                               /**< (L2CC_CWR) Clean Way Number 1 Position */
#define L2CC_CWR_WAY1_Msk                     (_U_(0x1) << L2CC_CWR_WAY1_Pos)                      /**< (L2CC_CWR) Clean Way Number 1 Mask */
#define L2CC_CWR_WAY1(value)                  (L2CC_CWR_WAY1_Msk & ((value) << L2CC_CWR_WAY1_Pos))
#define L2CC_CWR_WAY2_Pos                     _U_(2)                                               /**< (L2CC_CWR) Clean Way Number 2 Position */
#define L2CC_CWR_WAY2_Msk                     (_U_(0x1) << L2CC_CWR_WAY2_Pos)                      /**< (L2CC_CWR) Clean Way Number 2 Mask */
#define L2CC_CWR_WAY2(value)                  (L2CC_CWR_WAY2_Msk & ((value) << L2CC_CWR_WAY2_Pos))
#define L2CC_CWR_WAY3_Pos                     _U_(3)                                               /**< (L2CC_CWR) Clean Way Number 3 Position */
#define L2CC_CWR_WAY3_Msk                     (_U_(0x1) << L2CC_CWR_WAY3_Pos)                      /**< (L2CC_CWR) Clean Way Number 3 Mask */
#define L2CC_CWR_WAY3(value)                  (L2CC_CWR_WAY3_Msk & ((value) << L2CC_CWR_WAY3_Pos))
#define L2CC_CWR_WAY4_Pos                     _U_(4)                                               /**< (L2CC_CWR) Clean Way Number 4 Position */
#define L2CC_CWR_WAY4_Msk                     (_U_(0x1) << L2CC_CWR_WAY4_Pos)                      /**< (L2CC_CWR) Clean Way Number 4 Mask */
#define L2CC_CWR_WAY4(value)                  (L2CC_CWR_WAY4_Msk & ((value) << L2CC_CWR_WAY4_Pos))
#define L2CC_CWR_WAY5_Pos                     _U_(5)                                               /**< (L2CC_CWR) Clean Way Number 5 Position */
#define L2CC_CWR_WAY5_Msk                     (_U_(0x1) << L2CC_CWR_WAY5_Pos)                      /**< (L2CC_CWR) Clean Way Number 5 Mask */
#define L2CC_CWR_WAY5(value)                  (L2CC_CWR_WAY5_Msk & ((value) << L2CC_CWR_WAY5_Pos))
#define L2CC_CWR_WAY6_Pos                     _U_(6)                                               /**< (L2CC_CWR) Clean Way Number 6 Position */
#define L2CC_CWR_WAY6_Msk                     (_U_(0x1) << L2CC_CWR_WAY6_Pos)                      /**< (L2CC_CWR) Clean Way Number 6 Mask */
#define L2CC_CWR_WAY6(value)                  (L2CC_CWR_WAY6_Msk & ((value) << L2CC_CWR_WAY6_Pos))
#define L2CC_CWR_WAY7_Pos                     _U_(7)                                               /**< (L2CC_CWR) Clean Way Number 7 Position */
#define L2CC_CWR_WAY7_Msk                     (_U_(0x1) << L2CC_CWR_WAY7_Pos)                      /**< (L2CC_CWR) Clean Way Number 7 Mask */
#define L2CC_CWR_WAY7(value)                  (L2CC_CWR_WAY7_Msk & ((value) << L2CC_CWR_WAY7_Pos))
#define L2CC_CWR_Msk                          _U_(0x000000FF)                                      /**< (L2CC_CWR) Register Mask  */

#define L2CC_CWR_WAY_Pos                      _U_(0)                                               /**< (L2CC_CWR Position) Clean Way Number 7 */
#define L2CC_CWR_WAY_Msk                      (_U_(0xFF) << L2CC_CWR_WAY_Pos)                      /**< (L2CC_CWR Mask) WAY */
#define L2CC_CWR_WAY(value)                   (L2CC_CWR_WAY_Msk & ((value) << L2CC_CWR_WAY_Pos))   

/* -------- L2CC_CIPALR : (L2CC Offset: 0x7F0) (R/W 32) Clean Invalidate Physical Address Line Register -------- */
#define L2CC_CIPALR_C_Pos                     _U_(0)                                               /**< (L2CC_CIPALR) Cache Synchronization Status Position */
#define L2CC_CIPALR_C_Msk                     (_U_(0x1) << L2CC_CIPALR_C_Pos)                      /**< (L2CC_CIPALR) Cache Synchronization Status Mask */
#define L2CC_CIPALR_C(value)                  (L2CC_CIPALR_C_Msk & ((value) << L2CC_CIPALR_C_Pos))
#define L2CC_CIPALR_IDX_Pos                   _U_(5)                                               /**< (L2CC_CIPALR) Index Number Position */
#define L2CC_CIPALR_IDX_Msk                   (_U_(0x1FF) << L2CC_CIPALR_IDX_Pos)                  /**< (L2CC_CIPALR) Index Number Mask */
#define L2CC_CIPALR_IDX(value)                (L2CC_CIPALR_IDX_Msk & ((value) << L2CC_CIPALR_IDX_Pos))
#define L2CC_CIPALR_TAG_Pos                   _U_(14)                                              /**< (L2CC_CIPALR) Tag Number Position */
#define L2CC_CIPALR_TAG_Msk                   (_U_(0x3FFFF) << L2CC_CIPALR_TAG_Pos)                /**< (L2CC_CIPALR) Tag Number Mask */
#define L2CC_CIPALR_TAG(value)                (L2CC_CIPALR_TAG_Msk & ((value) << L2CC_CIPALR_TAG_Pos))
#define L2CC_CIPALR_Msk                       _U_(0xFFFFFFE1)                                      /**< (L2CC_CIPALR) Register Mask  */


/* -------- L2CC_CIIR : (L2CC Offset: 0x7F8) (R/W 32) Clean Invalidate Index Register -------- */
#define L2CC_CIIR_C_Pos                       _U_(0)                                               /**< (L2CC_CIIR) Cache Synchronization Status Position */
#define L2CC_CIIR_C_Msk                       (_U_(0x1) << L2CC_CIIR_C_Pos)                        /**< (L2CC_CIIR) Cache Synchronization Status Mask */
#define L2CC_CIIR_C(value)                    (L2CC_CIIR_C_Msk & ((value) << L2CC_CIIR_C_Pos))    
#define L2CC_CIIR_IDX_Pos                     _U_(5)                                               /**< (L2CC_CIIR) Index Number Position */
#define L2CC_CIIR_IDX_Msk                     (_U_(0x1FF) << L2CC_CIIR_IDX_Pos)                    /**< (L2CC_CIIR) Index Number Mask */
#define L2CC_CIIR_IDX(value)                  (L2CC_CIIR_IDX_Msk & ((value) << L2CC_CIIR_IDX_Pos))
#define L2CC_CIIR_WAY_Pos                     _U_(28)                                              /**< (L2CC_CIIR) Way Number Position */
#define L2CC_CIIR_WAY_Msk                     (_U_(0x7) << L2CC_CIIR_WAY_Pos)                      /**< (L2CC_CIIR) Way Number Mask */
#define L2CC_CIIR_WAY(value)                  (L2CC_CIIR_WAY_Msk & ((value) << L2CC_CIIR_WAY_Pos))
#define L2CC_CIIR_Msk                         _U_(0x70003FE1)                                      /**< (L2CC_CIIR) Register Mask  */


/* -------- L2CC_CIWR : (L2CC Offset: 0x7FC) (R/W 32) Clean Invalidate Way Register -------- */
#define L2CC_CIWR_WAY0_Pos                    _U_(0)                                               /**< (L2CC_CIWR) Clean Invalidate Way Number 0 Position */
#define L2CC_CIWR_WAY0_Msk                    (_U_(0x1) << L2CC_CIWR_WAY0_Pos)                     /**< (L2CC_CIWR) Clean Invalidate Way Number 0 Mask */
#define L2CC_CIWR_WAY0(value)                 (L2CC_CIWR_WAY0_Msk & ((value) << L2CC_CIWR_WAY0_Pos))
#define L2CC_CIWR_WAY1_Pos                    _U_(1)                                               /**< (L2CC_CIWR) Clean Invalidate Way Number 1 Position */
#define L2CC_CIWR_WAY1_Msk                    (_U_(0x1) << L2CC_CIWR_WAY1_Pos)                     /**< (L2CC_CIWR) Clean Invalidate Way Number 1 Mask */
#define L2CC_CIWR_WAY1(value)                 (L2CC_CIWR_WAY1_Msk & ((value) << L2CC_CIWR_WAY1_Pos))
#define L2CC_CIWR_WAY2_Pos                    _U_(2)                                               /**< (L2CC_CIWR) Clean Invalidate Way Number 2 Position */
#define L2CC_CIWR_WAY2_Msk                    (_U_(0x1) << L2CC_CIWR_WAY2_Pos)                     /**< (L2CC_CIWR) Clean Invalidate Way Number 2 Mask */
#define L2CC_CIWR_WAY2(value)                 (L2CC_CIWR_WAY2_Msk & ((value) << L2CC_CIWR_WAY2_Pos))
#define L2CC_CIWR_WAY3_Pos                    _U_(3)                                               /**< (L2CC_CIWR) Clean Invalidate Way Number 3 Position */
#define L2CC_CIWR_WAY3_Msk                    (_U_(0x1) << L2CC_CIWR_WAY3_Pos)                     /**< (L2CC_CIWR) Clean Invalidate Way Number 3 Mask */
#define L2CC_CIWR_WAY3(value)                 (L2CC_CIWR_WAY3_Msk & ((value) << L2CC_CIWR_WAY3_Pos))
#define L2CC_CIWR_WAY4_Pos                    _U_(4)                                               /**< (L2CC_CIWR) Clean Invalidate Way Number 4 Position */
#define L2CC_CIWR_WAY4_Msk                    (_U_(0x1) << L2CC_CIWR_WAY4_Pos)                     /**< (L2CC_CIWR) Clean Invalidate Way Number 4 Mask */
#define L2CC_CIWR_WAY4(value)                 (L2CC_CIWR_WAY4_Msk & ((value) << L2CC_CIWR_WAY4_Pos))
#define L2CC_CIWR_WAY5_Pos                    _U_(5)                                               /**< (L2CC_CIWR) Clean Invalidate Way Number 5 Position */
#define L2CC_CIWR_WAY5_Msk                    (_U_(0x1) << L2CC_CIWR_WAY5_Pos)                     /**< (L2CC_CIWR) Clean Invalidate Way Number 5 Mask */
#define L2CC_CIWR_WAY5(value)                 (L2CC_CIWR_WAY5_Msk & ((value) << L2CC_CIWR_WAY5_Pos))
#define L2CC_CIWR_WAY6_Pos                    _U_(6)                                               /**< (L2CC_CIWR) Clean Invalidate Way Number 6 Position */
#define L2CC_CIWR_WAY6_Msk                    (_U_(0x1) << L2CC_CIWR_WAY6_Pos)                     /**< (L2CC_CIWR) Clean Invalidate Way Number 6 Mask */
#define L2CC_CIWR_WAY6(value)                 (L2CC_CIWR_WAY6_Msk & ((value) << L2CC_CIWR_WAY6_Pos))
#define L2CC_CIWR_WAY7_Pos                    _U_(7)                                               /**< (L2CC_CIWR) Clean Invalidate Way Number 7 Position */
#define L2CC_CIWR_WAY7_Msk                    (_U_(0x1) << L2CC_CIWR_WAY7_Pos)                     /**< (L2CC_CIWR) Clean Invalidate Way Number 7 Mask */
#define L2CC_CIWR_WAY7(value)                 (L2CC_CIWR_WAY7_Msk & ((value) << L2CC_CIWR_WAY7_Pos))
#define L2CC_CIWR_Msk                         _U_(0x000000FF)                                      /**< (L2CC_CIWR) Register Mask  */

#define L2CC_CIWR_WAY_Pos                     _U_(0)                                               /**< (L2CC_CIWR Position) Clean Invalidate Way Number 7 */
#define L2CC_CIWR_WAY_Msk                     (_U_(0xFF) << L2CC_CIWR_WAY_Pos)                     /**< (L2CC_CIWR Mask) WAY */
#define L2CC_CIWR_WAY(value)                  (L2CC_CIWR_WAY_Msk & ((value) << L2CC_CIWR_WAY_Pos)) 

/* -------- L2CC_DLKR : (L2CC Offset: 0x900) (R/W 32) Data Lockdown Register -------- */
#define L2CC_DLKR_DLK0_Pos                    _U_(0)                                               /**< (L2CC_DLKR) Data Lockdown in Way Number 0 Position */
#define L2CC_DLKR_DLK0_Msk                    (_U_(0x1) << L2CC_DLKR_DLK0_Pos)                     /**< (L2CC_DLKR) Data Lockdown in Way Number 0 Mask */
#define L2CC_DLKR_DLK0(value)                 (L2CC_DLKR_DLK0_Msk & ((value) << L2CC_DLKR_DLK0_Pos))
#define L2CC_DLKR_DLK1_Pos                    _U_(1)                                               /**< (L2CC_DLKR) Data Lockdown in Way Number 1 Position */
#define L2CC_DLKR_DLK1_Msk                    (_U_(0x1) << L2CC_DLKR_DLK1_Pos)                     /**< (L2CC_DLKR) Data Lockdown in Way Number 1 Mask */
#define L2CC_DLKR_DLK1(value)                 (L2CC_DLKR_DLK1_Msk & ((value) << L2CC_DLKR_DLK1_Pos))
#define L2CC_DLKR_DLK2_Pos                    _U_(2)                                               /**< (L2CC_DLKR) Data Lockdown in Way Number 2 Position */
#define L2CC_DLKR_DLK2_Msk                    (_U_(0x1) << L2CC_DLKR_DLK2_Pos)                     /**< (L2CC_DLKR) Data Lockdown in Way Number 2 Mask */
#define L2CC_DLKR_DLK2(value)                 (L2CC_DLKR_DLK2_Msk & ((value) << L2CC_DLKR_DLK2_Pos))
#define L2CC_DLKR_DLK3_Pos                    _U_(3)                                               /**< (L2CC_DLKR) Data Lockdown in Way Number 3 Position */
#define L2CC_DLKR_DLK3_Msk                    (_U_(0x1) << L2CC_DLKR_DLK3_Pos)                     /**< (L2CC_DLKR) Data Lockdown in Way Number 3 Mask */
#define L2CC_DLKR_DLK3(value)                 (L2CC_DLKR_DLK3_Msk & ((value) << L2CC_DLKR_DLK3_Pos))
#define L2CC_DLKR_DLK4_Pos                    _U_(4)                                               /**< (L2CC_DLKR) Data Lockdown in Way Number 4 Position */
#define L2CC_DLKR_DLK4_Msk                    (_U_(0x1) << L2CC_DLKR_DLK4_Pos)                     /**< (L2CC_DLKR) Data Lockdown in Way Number 4 Mask */
#define L2CC_DLKR_DLK4(value)                 (L2CC_DLKR_DLK4_Msk & ((value) << L2CC_DLKR_DLK4_Pos))
#define L2CC_DLKR_DLK5_Pos                    _U_(5)                                               /**< (L2CC_DLKR) Data Lockdown in Way Number 5 Position */
#define L2CC_DLKR_DLK5_Msk                    (_U_(0x1) << L2CC_DLKR_DLK5_Pos)                     /**< (L2CC_DLKR) Data Lockdown in Way Number 5 Mask */
#define L2CC_DLKR_DLK5(value)                 (L2CC_DLKR_DLK5_Msk & ((value) << L2CC_DLKR_DLK5_Pos))
#define L2CC_DLKR_DLK6_Pos                    _U_(6)                                               /**< (L2CC_DLKR) Data Lockdown in Way Number 6 Position */
#define L2CC_DLKR_DLK6_Msk                    (_U_(0x1) << L2CC_DLKR_DLK6_Pos)                     /**< (L2CC_DLKR) Data Lockdown in Way Number 6 Mask */
#define L2CC_DLKR_DLK6(value)                 (L2CC_DLKR_DLK6_Msk & ((value) << L2CC_DLKR_DLK6_Pos))
#define L2CC_DLKR_DLK7_Pos                    _U_(7)                                               /**< (L2CC_DLKR) Data Lockdown in Way Number 7 Position */
#define L2CC_DLKR_DLK7_Msk                    (_U_(0x1) << L2CC_DLKR_DLK7_Pos)                     /**< (L2CC_DLKR) Data Lockdown in Way Number 7 Mask */
#define L2CC_DLKR_DLK7(value)                 (L2CC_DLKR_DLK7_Msk & ((value) << L2CC_DLKR_DLK7_Pos))
#define L2CC_DLKR_Msk                         _U_(0x000000FF)                                      /**< (L2CC_DLKR) Register Mask  */

#define L2CC_DLKR_DLK_Pos                     _U_(0)                                               /**< (L2CC_DLKR Position) Data Lockdown in Way Number 7 */
#define L2CC_DLKR_DLK_Msk                     (_U_(0xFF) << L2CC_DLKR_DLK_Pos)                     /**< (L2CC_DLKR Mask) DLK */
#define L2CC_DLKR_DLK(value)                  (L2CC_DLKR_DLK_Msk & ((value) << L2CC_DLKR_DLK_Pos)) 

/* -------- L2CC_ILKR : (L2CC Offset: 0x904) (R/W 32) Instruction Lockdown Register -------- */
#define L2CC_ILKR_ILK0_Pos                    _U_(0)                                               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 0 Position */
#define L2CC_ILKR_ILK0_Msk                    (_U_(0x1) << L2CC_ILKR_ILK0_Pos)                     /**< (L2CC_ILKR) Instruction Lockdown in Way Number 0 Mask */
#define L2CC_ILKR_ILK0(value)                 (L2CC_ILKR_ILK0_Msk & ((value) << L2CC_ILKR_ILK0_Pos))
#define L2CC_ILKR_ILK1_Pos                    _U_(1)                                               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 1 Position */
#define L2CC_ILKR_ILK1_Msk                    (_U_(0x1) << L2CC_ILKR_ILK1_Pos)                     /**< (L2CC_ILKR) Instruction Lockdown in Way Number 1 Mask */
#define L2CC_ILKR_ILK1(value)                 (L2CC_ILKR_ILK1_Msk & ((value) << L2CC_ILKR_ILK1_Pos))
#define L2CC_ILKR_ILK2_Pos                    _U_(2)                                               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 2 Position */
#define L2CC_ILKR_ILK2_Msk                    (_U_(0x1) << L2CC_ILKR_ILK2_Pos)                     /**< (L2CC_ILKR) Instruction Lockdown in Way Number 2 Mask */
#define L2CC_ILKR_ILK2(value)                 (L2CC_ILKR_ILK2_Msk & ((value) << L2CC_ILKR_ILK2_Pos))
#define L2CC_ILKR_ILK3_Pos                    _U_(3)                                               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 3 Position */
#define L2CC_ILKR_ILK3_Msk                    (_U_(0x1) << L2CC_ILKR_ILK3_Pos)                     /**< (L2CC_ILKR) Instruction Lockdown in Way Number 3 Mask */
#define L2CC_ILKR_ILK3(value)                 (L2CC_ILKR_ILK3_Msk & ((value) << L2CC_ILKR_ILK3_Pos))
#define L2CC_ILKR_ILK4_Pos                    _U_(4)                                               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 4 Position */
#define L2CC_ILKR_ILK4_Msk                    (_U_(0x1) << L2CC_ILKR_ILK4_Pos)                     /**< (L2CC_ILKR) Instruction Lockdown in Way Number 4 Mask */
#define L2CC_ILKR_ILK4(value)                 (L2CC_ILKR_ILK4_Msk & ((value) << L2CC_ILKR_ILK4_Pos))
#define L2CC_ILKR_ILK5_Pos                    _U_(5)                                               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 5 Position */
#define L2CC_ILKR_ILK5_Msk                    (_U_(0x1) << L2CC_ILKR_ILK5_Pos)                     /**< (L2CC_ILKR) Instruction Lockdown in Way Number 5 Mask */
#define L2CC_ILKR_ILK5(value)                 (L2CC_ILKR_ILK5_Msk & ((value) << L2CC_ILKR_ILK5_Pos))
#define L2CC_ILKR_ILK6_Pos                    _U_(6)                                               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 6 Position */
#define L2CC_ILKR_ILK6_Msk                    (_U_(0x1) << L2CC_ILKR_ILK6_Pos)                     /**< (L2CC_ILKR) Instruction Lockdown in Way Number 6 Mask */
#define L2CC_ILKR_ILK6(value)                 (L2CC_ILKR_ILK6_Msk & ((value) << L2CC_ILKR_ILK6_Pos))
#define L2CC_ILKR_ILK7_Pos                    _U_(7)                                               /**< (L2CC_ILKR) Instruction Lockdown in Way Number 7 Position */
#define L2CC_ILKR_ILK7_Msk                    (_U_(0x1) << L2CC_ILKR_ILK7_Pos)                     /**< (L2CC_ILKR) Instruction Lockdown in Way Number 7 Mask */
#define L2CC_ILKR_ILK7(value)                 (L2CC_ILKR_ILK7_Msk & ((value) << L2CC_ILKR_ILK7_Pos))
#define L2CC_ILKR_Msk                         _U_(0x000000FF)                                      /**< (L2CC_ILKR) Register Mask  */

#define L2CC_ILKR_ILK_Pos                     _U_(0)                                               /**< (L2CC_ILKR Position) Instruction Lockdown in Way Number 7 */
#define L2CC_ILKR_ILK_Msk                     (_U_(0xFF) << L2CC_ILKR_ILK_Pos)                     /**< (L2CC_ILKR Mask) ILK */
#define L2CC_ILKR_ILK(value)                  (L2CC_ILKR_ILK_Msk & ((value) << L2CC_ILKR_ILK_Pos)) 

/* -------- L2CC_DCR : (L2CC Offset: 0xF40) (R/W 32) Debug Control Register -------- */
#define L2CC_DCR_DCL_Pos                      _U_(0)                                               /**< (L2CC_DCR) Disable Cache Linefill Position */
#define L2CC_DCR_DCL_Msk                      (_U_(0x1) << L2CC_DCR_DCL_Pos)                       /**< (L2CC_DCR) Disable Cache Linefill Mask */
#define L2CC_DCR_DCL(value)                   (L2CC_DCR_DCL_Msk & ((value) << L2CC_DCR_DCL_Pos))  
#define L2CC_DCR_DWB_Pos                      _U_(1)                                               /**< (L2CC_DCR) Disable Write-back, Force Write-through Position */
#define L2CC_DCR_DWB_Msk                      (_U_(0x1) << L2CC_DCR_DWB_Pos)                       /**< (L2CC_DCR) Disable Write-back, Force Write-through Mask */
#define L2CC_DCR_DWB(value)                   (L2CC_DCR_DWB_Msk & ((value) << L2CC_DCR_DWB_Pos))  
#define L2CC_DCR_SPNIDEN_Pos                  _U_(2)                                               /**< (L2CC_DCR) SPNIDEN Value Position */
#define L2CC_DCR_SPNIDEN_Msk                  (_U_(0x1) << L2CC_DCR_SPNIDEN_Pos)                   /**< (L2CC_DCR) SPNIDEN Value Mask */
#define L2CC_DCR_SPNIDEN(value)               (L2CC_DCR_SPNIDEN_Msk & ((value) << L2CC_DCR_SPNIDEN_Pos))
#define L2CC_DCR_Msk                          _U_(0x00000007)                                      /**< (L2CC_DCR) Register Mask  */


/* -------- L2CC_PCR : (L2CC Offset: 0xF60) (R/W 32) Prefetch Control Register -------- */
#define L2CC_PCR_OFFSET_Pos                   _U_(0)                                               /**< (L2CC_PCR) Prefetch Offset Position */
#define L2CC_PCR_OFFSET_Msk                   (_U_(0x1F) << L2CC_PCR_OFFSET_Pos)                   /**< (L2CC_PCR) Prefetch Offset Mask */
#define L2CC_PCR_OFFSET(value)                (L2CC_PCR_OFFSET_Msk & ((value) << L2CC_PCR_OFFSET_Pos))
#define L2CC_PCR_NSIDEN_Pos                   _U_(21)                                              /**< (L2CC_PCR) Not Same ID on Exclusive Sequence Enable Position */
#define L2CC_PCR_NSIDEN_Msk                   (_U_(0x1) << L2CC_PCR_NSIDEN_Pos)                    /**< (L2CC_PCR) Not Same ID on Exclusive Sequence Enable Mask */
#define L2CC_PCR_NSIDEN(value)                (L2CC_PCR_NSIDEN_Msk & ((value) << L2CC_PCR_NSIDEN_Pos))
#define L2CC_PCR_IDLEN_Pos                    _U_(23)                                              /**< (L2CC_PCR) INCR Double Linefill Enable Position */
#define L2CC_PCR_IDLEN_Msk                    (_U_(0x1) << L2CC_PCR_IDLEN_Pos)                     /**< (L2CC_PCR) INCR Double Linefill Enable Mask */
#define L2CC_PCR_IDLEN(value)                 (L2CC_PCR_IDLEN_Msk & ((value) << L2CC_PCR_IDLEN_Pos))
#define L2CC_PCR_PDEN_Pos                     _U_(24)                                              /**< (L2CC_PCR) Prefetch Drop Enable Position */
#define L2CC_PCR_PDEN_Msk                     (_U_(0x1) << L2CC_PCR_PDEN_Pos)                      /**< (L2CC_PCR) Prefetch Drop Enable Mask */
#define L2CC_PCR_PDEN(value)                  (L2CC_PCR_PDEN_Msk & ((value) << L2CC_PCR_PDEN_Pos))
#define L2CC_PCR_DLFWRDIS_Pos                 _U_(27)                                              /**< (L2CC_PCR) Double Linefill on WRAP Read Disable Position */
#define L2CC_PCR_DLFWRDIS_Msk                 (_U_(0x1) << L2CC_PCR_DLFWRDIS_Pos)                  /**< (L2CC_PCR) Double Linefill on WRAP Read Disable Mask */
#define L2CC_PCR_DLFWRDIS(value)              (L2CC_PCR_DLFWRDIS_Msk & ((value) << L2CC_PCR_DLFWRDIS_Pos))
#define L2CC_PCR_DATPEN_Pos                   _U_(28)                                              /**< (L2CC_PCR) Data Prefetch Enable Position */
#define L2CC_PCR_DATPEN_Msk                   (_U_(0x1) << L2CC_PCR_DATPEN_Pos)                    /**< (L2CC_PCR) Data Prefetch Enable Mask */
#define L2CC_PCR_DATPEN(value)                (L2CC_PCR_DATPEN_Msk & ((value) << L2CC_PCR_DATPEN_Pos))
#define L2CC_PCR_INSPEN_Pos                   _U_(29)                                              /**< (L2CC_PCR) Instruction Prefetch Enable Position */
#define L2CC_PCR_INSPEN_Msk                   (_U_(0x1) << L2CC_PCR_INSPEN_Pos)                    /**< (L2CC_PCR) Instruction Prefetch Enable Mask */
#define L2CC_PCR_INSPEN(value)                (L2CC_PCR_INSPEN_Msk & ((value) << L2CC_PCR_INSPEN_Pos))
#define L2CC_PCR_DLEN_Pos                     _U_(30)                                              /**< (L2CC_PCR) Double Linefill Enable Position */
#define L2CC_PCR_DLEN_Msk                     (_U_(0x1) << L2CC_PCR_DLEN_Pos)                      /**< (L2CC_PCR) Double Linefill Enable Mask */
#define L2CC_PCR_DLEN(value)                  (L2CC_PCR_DLEN_Msk & ((value) << L2CC_PCR_DLEN_Pos))
#define L2CC_PCR_Msk                          _U_(0x79A0001F)                                      /**< (L2CC_PCR) Register Mask  */


/* -------- L2CC_POWCR : (L2CC Offset: 0xF80) (R/W 32) Power Control Register -------- */
#define L2CC_POWCR_STBYEN_Pos                 _U_(0)                                               /**< (L2CC_POWCR) Standby Mode Enable Position */
#define L2CC_POWCR_STBYEN_Msk                 (_U_(0x1) << L2CC_POWCR_STBYEN_Pos)                  /**< (L2CC_POWCR) Standby Mode Enable Mask */
#define L2CC_POWCR_STBYEN(value)              (L2CC_POWCR_STBYEN_Msk & ((value) << L2CC_POWCR_STBYEN_Pos))
#define L2CC_POWCR_DCKGATEN_Pos               _U_(1)                                               /**< (L2CC_POWCR) Dynamic Clock Gating Enable Position */
#define L2CC_POWCR_DCKGATEN_Msk               (_U_(0x1) << L2CC_POWCR_DCKGATEN_Pos)                /**< (L2CC_POWCR) Dynamic Clock Gating Enable Mask */
#define L2CC_POWCR_DCKGATEN(value)            (L2CC_POWCR_DCKGATEN_Msk & ((value) << L2CC_POWCR_DCKGATEN_Pos))
#define L2CC_POWCR_Msk                        _U_(0x00000003)                                      /**< (L2CC_POWCR) Register Mask  */


/** \brief L2CC register offsets definitions */
#define L2CC_IDR_REG_OFST              (0x00)              /**< (L2CC_IDR) Cache ID Register Offset */
#define L2CC_TYPR_REG_OFST             (0x04)              /**< (L2CC_TYPR) Cache Type Register Offset */
#define L2CC_CR_REG_OFST               (0x100)             /**< (L2CC_CR) Control Register Offset */
#define L2CC_ACR_REG_OFST              (0x104)             /**< (L2CC_ACR) Auxiliary Control Register Offset */
#define L2CC_TRCR_REG_OFST             (0x108)             /**< (L2CC_TRCR) Tag RAM Control Register Offset */
#define L2CC_DRCR_REG_OFST             (0x10C)             /**< (L2CC_DRCR) Data RAM Control Register Offset */
#define L2CC_ECR_REG_OFST              (0x200)             /**< (L2CC_ECR) Event Counter Control Register Offset */
#define L2CC_ECFGR1_REG_OFST           (0x204)             /**< (L2CC_ECFGR1) Event Counter 1 Configuration Register Offset */
#define L2CC_ECFGR0_REG_OFST           (0x208)             /**< (L2CC_ECFGR0) Event Counter 0 Configuration Register Offset */
#define L2CC_EVR1_REG_OFST             (0x20C)             /**< (L2CC_EVR1) Event Counter 1 Value Register Offset */
#define L2CC_EVR0_REG_OFST             (0x210)             /**< (L2CC_EVR0) Event Counter 0 Value Register Offset */
#define L2CC_IMR_REG_OFST              (0x214)             /**< (L2CC_IMR) Interrupt Mask Register Offset */
#define L2CC_MISR_REG_OFST             (0x218)             /**< (L2CC_MISR) Masked Interrupt Status Register Offset */
#define L2CC_RISR_REG_OFST             (0x21C)             /**< (L2CC_RISR) Raw Interrupt Status Register Offset */
#define L2CC_ICR_REG_OFST              (0x220)             /**< (L2CC_ICR) Interrupt Clear Register Offset */
#define L2CC_CSR_REG_OFST              (0x730)             /**< (L2CC_CSR) Cache Synchronization Register Offset */
#define L2CC_IPALR_REG_OFST            (0x770)             /**< (L2CC_IPALR) Invalidate Physical Address Line Register Offset */
#define L2CC_IWR_REG_OFST              (0x77C)             /**< (L2CC_IWR) Invalidate Way Register Offset */
#define L2CC_CPALR_REG_OFST            (0x7B0)             /**< (L2CC_CPALR) Clean Physical Address Line Register Offset */
#define L2CC_CIR_REG_OFST              (0x7B8)             /**< (L2CC_CIR) Clean Index Register Offset */
#define L2CC_CWR_REG_OFST              (0x7BC)             /**< (L2CC_CWR) Clean Way Register Offset */
#define L2CC_CIPALR_REG_OFST           (0x7F0)             /**< (L2CC_CIPALR) Clean Invalidate Physical Address Line Register Offset */
#define L2CC_CIIR_REG_OFST             (0x7F8)             /**< (L2CC_CIIR) Clean Invalidate Index Register Offset */
#define L2CC_CIWR_REG_OFST             (0x7FC)             /**< (L2CC_CIWR) Clean Invalidate Way Register Offset */
#define L2CC_DLKR_REG_OFST             (0x900)             /**< (L2CC_DLKR) Data Lockdown Register Offset */
#define L2CC_ILKR_REG_OFST             (0x904)             /**< (L2CC_ILKR) Instruction Lockdown Register Offset */
#define L2CC_DCR_REG_OFST              (0xF40)             /**< (L2CC_DCR) Debug Control Register Offset */
#define L2CC_PCR_REG_OFST              (0xF60)             /**< (L2CC_PCR) Prefetch Control Register Offset */
#define L2CC_POWCR_REG_OFST            (0xF80)             /**< (L2CC_POWCR) Power Control Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief L2CC register API structure */
typedef struct
{
  __I   uint32_t                       L2CC_IDR;           /**< Offset: 0x00 (R/   32) Cache ID Register */
  __I   uint32_t                       L2CC_TYPR;          /**< Offset: 0x04 (R/   32) Cache Type Register */
  __I   uint8_t                        Reserved1[0xF8];
  __IO  uint32_t                       L2CC_CR;            /**< Offset: 0x100 (R/W  32) Control Register */
  __IO  uint32_t                       L2CC_ACR;           /**< Offset: 0x104 (R/W  32) Auxiliary Control Register */
  __IO  uint32_t                       L2CC_TRCR;          /**< Offset: 0x108 (R/W  32) Tag RAM Control Register */
  __IO  uint32_t                       L2CC_DRCR;          /**< Offset: 0x10C (R/W  32) Data RAM Control Register */
  __I   uint8_t                        Reserved2[0xF0];
  __IO  uint32_t                       L2CC_ECR;           /**< Offset: 0x200 (R/W  32) Event Counter Control Register */
  __IO  uint32_t                       L2CC_ECFGR1;        /**< Offset: 0x204 (R/W  32) Event Counter 1 Configuration Register */
  __IO  uint32_t                       L2CC_ECFGR0;        /**< Offset: 0x208 (R/W  32) Event Counter 0 Configuration Register */
  __IO  uint32_t                       L2CC_EVR1;          /**< Offset: 0x20C (R/W  32) Event Counter 1 Value Register */
  __IO  uint32_t                       L2CC_EVR0;          /**< Offset: 0x210 (R/W  32) Event Counter 0 Value Register */
  __IO  uint32_t                       L2CC_IMR;           /**< Offset: 0x214 (R/W  32) Interrupt Mask Register */
  __I   uint32_t                       L2CC_MISR;          /**< Offset: 0x218 (R/   32) Masked Interrupt Status Register */
  __I   uint32_t                       L2CC_RISR;          /**< Offset: 0x21C (R/   32) Raw Interrupt Status Register */
  __IO  uint32_t                       L2CC_ICR;           /**< Offset: 0x220 (R/W  32) Interrupt Clear Register */
  __I   uint8_t                        Reserved3[0x50C];
  __IO  uint32_t                       L2CC_CSR;           /**< Offset: 0x730 (R/W  32) Cache Synchronization Register */
  __I   uint8_t                        Reserved4[0x3C];
  __IO  uint32_t                       L2CC_IPALR;         /**< Offset: 0x770 (R/W  32) Invalidate Physical Address Line Register */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       L2CC_IWR;           /**< Offset: 0x77C (R/W  32) Invalidate Way Register */
  __I   uint8_t                        Reserved6[0x30];
  __IO  uint32_t                       L2CC_CPALR;         /**< Offset: 0x7B0 (R/W  32) Clean Physical Address Line Register */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       L2CC_CIR;           /**< Offset: 0x7B8 (R/W  32) Clean Index Register */
  __IO  uint32_t                       L2CC_CWR;           /**< Offset: 0x7BC (R/W  32) Clean Way Register */
  __I   uint8_t                        Reserved8[0x30];
  __IO  uint32_t                       L2CC_CIPALR;        /**< Offset: 0x7F0 (R/W  32) Clean Invalidate Physical Address Line Register */
  __I   uint8_t                        Reserved9[0x04];
  __IO  uint32_t                       L2CC_CIIR;          /**< Offset: 0x7F8 (R/W  32) Clean Invalidate Index Register */
  __IO  uint32_t                       L2CC_CIWR;          /**< Offset: 0x7FC (R/W  32) Clean Invalidate Way Register */
  __I   uint8_t                        Reserved10[0x100];
  __IO  uint32_t                       L2CC_DLKR;          /**< Offset: 0x900 (R/W  32) Data Lockdown Register */
  __IO  uint32_t                       L2CC_ILKR;          /**< Offset: 0x904 (R/W  32) Instruction Lockdown Register */
  __I   uint8_t                        Reserved11[0x638];
  __IO  uint32_t                       L2CC_DCR;           /**< Offset: 0xF40 (R/W  32) Debug Control Register */
  __I   uint8_t                        Reserved12[0x1C];
  __IO  uint32_t                       L2CC_PCR;           /**< Offset: 0xF60 (R/W  32) Prefetch Control Register */
  __I   uint8_t                        Reserved13[0x1C];
  __IO  uint32_t                       L2CC_POWCR;         /**< Offset: 0xF80 (R/W  32) Power Control Register */
} l2cc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_L2CC_COMPONENT_H_ */
