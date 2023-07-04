/*
 * Component description for AIC
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
#ifndef _SAMA5D2_AIC_COMPONENT_H_
#define _SAMA5D2_AIC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR AIC                                          */
/* ************************************************************************** */

/* -------- AIC_SSR : (AIC Offset: 0x00) (R/W 32) Source Select Register -------- */
#define AIC_SSR_INTSEL_Pos                    _U_(0)                                               /**< (AIC_SSR) Interrupt Line Selection Position */
#define AIC_SSR_INTSEL_Msk                    (_U_(0x7F) << AIC_SSR_INTSEL_Pos)                    /**< (AIC_SSR) Interrupt Line Selection Mask */
#define AIC_SSR_INTSEL(value)                 (AIC_SSR_INTSEL_Msk & ((value) << AIC_SSR_INTSEL_Pos))
#define AIC_SSR_Msk                           _U_(0x0000007F)                                      /**< (AIC_SSR) Register Mask  */


/* -------- AIC_SMR : (AIC Offset: 0x04) (R/W 32) Source Mode Register -------- */
#define AIC_SMR_PRIORITY_Pos                  _U_(0)                                               /**< (AIC_SMR) Priority Level Position */
#define AIC_SMR_PRIORITY_Msk                  (_U_(0x7) << AIC_SMR_PRIORITY_Pos)                   /**< (AIC_SMR) Priority Level Mask */
#define AIC_SMR_PRIORITY(value)               (AIC_SMR_PRIORITY_Msk & ((value) << AIC_SMR_PRIORITY_Pos))
#define   AIC_SMR_PRIORITY_MINIMUM_Val        _U_(0x0)                                             /**< (AIC_SMR) Minimum priority  */
#define   AIC_SMR_PRIORITY_VERY_LOW_Val       _U_(0x1)                                             /**< (AIC_SMR) Very low priority  */
#define   AIC_SMR_PRIORITY_LOW_Val            _U_(0x2)                                             /**< (AIC_SMR) Low priority  */
#define   AIC_SMR_PRIORITY_MEDIUM_LOW_Val     _U_(0x3)                                             /**< (AIC_SMR) Medium priority  */
#define   AIC_SMR_PRIORITY_MEDIUM_HIGH_Val    _U_(0x4)                                             /**< (AIC_SMR) Medium-high priority  */
#define   AIC_SMR_PRIORITY_HIGH_Val           _U_(0x5)                                             /**< (AIC_SMR) High priority  */
#define   AIC_SMR_PRIORITY_VERY_HIGH_Val      _U_(0x6)                                             /**< (AIC_SMR) Very high priority  */
#define   AIC_SMR_PRIORITY_MAXIMUM_Val        _U_(0x7)                                             /**< (AIC_SMR) Maximum priority  */
#define AIC_SMR_PRIORITY_MINIMUM              (AIC_SMR_PRIORITY_MINIMUM_Val << AIC_SMR_PRIORITY_Pos) /**< (AIC_SMR) Minimum priority Position  */
#define AIC_SMR_PRIORITY_VERY_LOW             (AIC_SMR_PRIORITY_VERY_LOW_Val << AIC_SMR_PRIORITY_Pos) /**< (AIC_SMR) Very low priority Position  */
#define AIC_SMR_PRIORITY_LOW                  (AIC_SMR_PRIORITY_LOW_Val << AIC_SMR_PRIORITY_Pos)   /**< (AIC_SMR) Low priority Position  */
#define AIC_SMR_PRIORITY_MEDIUM_LOW           (AIC_SMR_PRIORITY_MEDIUM_LOW_Val << AIC_SMR_PRIORITY_Pos) /**< (AIC_SMR) Medium priority Position  */
#define AIC_SMR_PRIORITY_MEDIUM_HIGH          (AIC_SMR_PRIORITY_MEDIUM_HIGH_Val << AIC_SMR_PRIORITY_Pos) /**< (AIC_SMR) Medium-high priority Position  */
#define AIC_SMR_PRIORITY_HIGH                 (AIC_SMR_PRIORITY_HIGH_Val << AIC_SMR_PRIORITY_Pos)  /**< (AIC_SMR) High priority Position  */
#define AIC_SMR_PRIORITY_VERY_HIGH            (AIC_SMR_PRIORITY_VERY_HIGH_Val << AIC_SMR_PRIORITY_Pos) /**< (AIC_SMR) Very high priority Position  */
#define AIC_SMR_PRIORITY_MAXIMUM              (AIC_SMR_PRIORITY_MAXIMUM_Val << AIC_SMR_PRIORITY_Pos) /**< (AIC_SMR) Maximum priority Position  */
#define AIC_SMR_SRCTYPE_Pos                   _U_(5)                                               /**< (AIC_SMR) Interrupt Source Type Position */
#define AIC_SMR_SRCTYPE_Msk                   (_U_(0x3) << AIC_SMR_SRCTYPE_Pos)                    /**< (AIC_SMR) Interrupt Source Type Mask */
#define AIC_SMR_SRCTYPE(value)                (AIC_SMR_SRCTYPE_Msk & ((value) << AIC_SMR_SRCTYPE_Pos))
#define   AIC_SMR_SRCTYPE_INT_LEVEL_SENSITIVE_Val _U_(0x0)                                             /**< (AIC_SMR) High-level sensitive for internal source. Low-level sensitive for external source  */
#define   AIC_SMR_SRCTYPE_EXT_NEGATIVE_EDGE_Val _U_(0x1)                                             /**< (AIC_SMR) Negative-edge triggered for external source  */
#define   AIC_SMR_SRCTYPE_EXT_HIGH_LEVEL_Val  _U_(0x2)                                             /**< (AIC_SMR) High-level sensitive for internal source. High-level sensitive for external source  */
#define   AIC_SMR_SRCTYPE_EXT_POSITIVE_EDGE_Val _U_(0x3)                                             /**< (AIC_SMR) Positive-edge triggered for external source  */
#define AIC_SMR_SRCTYPE_INT_LEVEL_SENSITIVE   (AIC_SMR_SRCTYPE_INT_LEVEL_SENSITIVE_Val << AIC_SMR_SRCTYPE_Pos) /**< (AIC_SMR) High-level sensitive for internal source. Low-level sensitive for external source Position  */
#define AIC_SMR_SRCTYPE_EXT_NEGATIVE_EDGE     (AIC_SMR_SRCTYPE_EXT_NEGATIVE_EDGE_Val << AIC_SMR_SRCTYPE_Pos) /**< (AIC_SMR) Negative-edge triggered for external source Position  */
#define AIC_SMR_SRCTYPE_EXT_HIGH_LEVEL        (AIC_SMR_SRCTYPE_EXT_HIGH_LEVEL_Val << AIC_SMR_SRCTYPE_Pos) /**< (AIC_SMR) High-level sensitive for internal source. High-level sensitive for external source Position  */
#define AIC_SMR_SRCTYPE_EXT_POSITIVE_EDGE     (AIC_SMR_SRCTYPE_EXT_POSITIVE_EDGE_Val << AIC_SMR_SRCTYPE_Pos) /**< (AIC_SMR) Positive-edge triggered for external source Position  */
#define AIC_SMR_Msk                           _U_(0x00000067)                                      /**< (AIC_SMR) Register Mask  */


/* -------- AIC_SVR : (AIC Offset: 0x08) (R/W 32) Source Vector Register -------- */
#define AIC_SVR_VECTOR_Pos                    _U_(0)                                               /**< (AIC_SVR) Source Vector Position */
#define AIC_SVR_VECTOR_Msk                    (_U_(0xFFFFFFFF) << AIC_SVR_VECTOR_Pos)              /**< (AIC_SVR) Source Vector Mask */
#define AIC_SVR_VECTOR(value)                 (AIC_SVR_VECTOR_Msk & ((value) << AIC_SVR_VECTOR_Pos))
#define AIC_SVR_Msk                           _U_(0xFFFFFFFF)                                      /**< (AIC_SVR) Register Mask  */


/* -------- AIC_IVR : (AIC Offset: 0x10) ( R/ 32) Interrupt Vector Register -------- */
#define AIC_IVR_IRQV_Pos                      _U_(0)                                               /**< (AIC_IVR) Interrupt Vector Register Position */
#define AIC_IVR_IRQV_Msk                      (_U_(0xFFFFFFFF) << AIC_IVR_IRQV_Pos)                /**< (AIC_IVR) Interrupt Vector Register Mask */
#define AIC_IVR_IRQV(value)                   (AIC_IVR_IRQV_Msk & ((value) << AIC_IVR_IRQV_Pos))  
#define AIC_IVR_Msk                           _U_(0xFFFFFFFF)                                      /**< (AIC_IVR) Register Mask  */


/* -------- AIC_FVR : (AIC Offset: 0x14) ( R/ 32) FIQ Vector Register -------- */
#define AIC_FVR_FIQV_Pos                      _U_(0)                                               /**< (AIC_FVR) FIQ Vector Register Position */
#define AIC_FVR_FIQV_Msk                      (_U_(0xFFFFFFFF) << AIC_FVR_FIQV_Pos)                /**< (AIC_FVR) FIQ Vector Register Mask */
#define AIC_FVR_FIQV(value)                   (AIC_FVR_FIQV_Msk & ((value) << AIC_FVR_FIQV_Pos))  
#define AIC_FVR_Msk                           _U_(0xFFFFFFFF)                                      /**< (AIC_FVR) Register Mask  */


/* -------- AIC_ISR : (AIC Offset: 0x18) ( R/ 32) Interrupt Status Register -------- */
#define AIC_ISR_IRQID_Pos                     _U_(0)                                               /**< (AIC_ISR) Current Interrupt Identifier Position */
#define AIC_ISR_IRQID_Msk                     (_U_(0x7F) << AIC_ISR_IRQID_Pos)                     /**< (AIC_ISR) Current Interrupt Identifier Mask */
#define AIC_ISR_IRQID(value)                  (AIC_ISR_IRQID_Msk & ((value) << AIC_ISR_IRQID_Pos))
#define AIC_ISR_Msk                           _U_(0x0000007F)                                      /**< (AIC_ISR) Register Mask  */


/* -------- AIC_IPR0 : (AIC Offset: 0x20) ( R/ 32) Interrupt Pending Register 0 -------- */
#define AIC_IPR0_FIQ_Pos                      _U_(0)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_FIQ_Msk                      (_U_(0x1) << AIC_IPR0_FIQ_Pos)                       /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_FIQ(value)                   (AIC_IPR0_FIQ_Msk & ((value) << AIC_IPR0_FIQ_Pos))  
#define AIC_IPR0_PID1_Pos                     _U_(1)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID1_Msk                     (_U_(0x1) << AIC_IPR0_PID1_Pos)                      /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID1(value)                  (AIC_IPR0_PID1_Msk & ((value) << AIC_IPR0_PID1_Pos))
#define AIC_IPR0_PID2_Pos                     _U_(2)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID2_Msk                     (_U_(0x1) << AIC_IPR0_PID2_Pos)                      /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID2(value)                  (AIC_IPR0_PID2_Msk & ((value) << AIC_IPR0_PID2_Pos))
#define AIC_IPR0_PID3_Pos                     _U_(3)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID3_Msk                     (_U_(0x1) << AIC_IPR0_PID3_Pos)                      /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID3(value)                  (AIC_IPR0_PID3_Msk & ((value) << AIC_IPR0_PID3_Pos))
#define AIC_IPR0_PID4_Pos                     _U_(4)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID4_Msk                     (_U_(0x1) << AIC_IPR0_PID4_Pos)                      /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID4(value)                  (AIC_IPR0_PID4_Msk & ((value) << AIC_IPR0_PID4_Pos))
#define AIC_IPR0_PID5_Pos                     _U_(5)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID5_Msk                     (_U_(0x1) << AIC_IPR0_PID5_Pos)                      /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID5(value)                  (AIC_IPR0_PID5_Msk & ((value) << AIC_IPR0_PID5_Pos))
#define AIC_IPR0_PID6_Pos                     _U_(6)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID6_Msk                     (_U_(0x1) << AIC_IPR0_PID6_Pos)                      /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID6(value)                  (AIC_IPR0_PID6_Msk & ((value) << AIC_IPR0_PID6_Pos))
#define AIC_IPR0_PID7_Pos                     _U_(7)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID7_Msk                     (_U_(0x1) << AIC_IPR0_PID7_Pos)                      /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID7(value)                  (AIC_IPR0_PID7_Msk & ((value) << AIC_IPR0_PID7_Pos))
#define AIC_IPR0_PID8_Pos                     _U_(8)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID8_Msk                     (_U_(0x1) << AIC_IPR0_PID8_Pos)                      /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID8(value)                  (AIC_IPR0_PID8_Msk & ((value) << AIC_IPR0_PID8_Pos))
#define AIC_IPR0_PID9_Pos                     _U_(9)                                               /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID9_Msk                     (_U_(0x1) << AIC_IPR0_PID9_Pos)                      /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID9(value)                  (AIC_IPR0_PID9_Msk & ((value) << AIC_IPR0_PID9_Pos))
#define AIC_IPR0_PID10_Pos                    _U_(10)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID10_Msk                    (_U_(0x1) << AIC_IPR0_PID10_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID10(value)                 (AIC_IPR0_PID10_Msk & ((value) << AIC_IPR0_PID10_Pos))
#define AIC_IPR0_PID11_Pos                    _U_(11)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID11_Msk                    (_U_(0x1) << AIC_IPR0_PID11_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID11(value)                 (AIC_IPR0_PID11_Msk & ((value) << AIC_IPR0_PID11_Pos))
#define AIC_IPR0_PID12_Pos                    _U_(12)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID12_Msk                    (_U_(0x1) << AIC_IPR0_PID12_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID12(value)                 (AIC_IPR0_PID12_Msk & ((value) << AIC_IPR0_PID12_Pos))
#define AIC_IPR0_PID13_Pos                    _U_(13)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID13_Msk                    (_U_(0x1) << AIC_IPR0_PID13_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID13(value)                 (AIC_IPR0_PID13_Msk & ((value) << AIC_IPR0_PID13_Pos))
#define AIC_IPR0_PID14_Pos                    _U_(14)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID14_Msk                    (_U_(0x1) << AIC_IPR0_PID14_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID14(value)                 (AIC_IPR0_PID14_Msk & ((value) << AIC_IPR0_PID14_Pos))
#define AIC_IPR0_PID15_Pos                    _U_(15)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID15_Msk                    (_U_(0x1) << AIC_IPR0_PID15_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID15(value)                 (AIC_IPR0_PID15_Msk & ((value) << AIC_IPR0_PID15_Pos))
#define AIC_IPR0_PID16_Pos                    _U_(16)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID16_Msk                    (_U_(0x1) << AIC_IPR0_PID16_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID16(value)                 (AIC_IPR0_PID16_Msk & ((value) << AIC_IPR0_PID16_Pos))
#define AIC_IPR0_PID17_Pos                    _U_(17)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID17_Msk                    (_U_(0x1) << AIC_IPR0_PID17_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID17(value)                 (AIC_IPR0_PID17_Msk & ((value) << AIC_IPR0_PID17_Pos))
#define AIC_IPR0_PID18_Pos                    _U_(18)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID18_Msk                    (_U_(0x1) << AIC_IPR0_PID18_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID18(value)                 (AIC_IPR0_PID18_Msk & ((value) << AIC_IPR0_PID18_Pos))
#define AIC_IPR0_PID19_Pos                    _U_(19)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID19_Msk                    (_U_(0x1) << AIC_IPR0_PID19_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID19(value)                 (AIC_IPR0_PID19_Msk & ((value) << AIC_IPR0_PID19_Pos))
#define AIC_IPR0_PID20_Pos                    _U_(20)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID20_Msk                    (_U_(0x1) << AIC_IPR0_PID20_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID20(value)                 (AIC_IPR0_PID20_Msk & ((value) << AIC_IPR0_PID20_Pos))
#define AIC_IPR0_PID21_Pos                    _U_(21)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID21_Msk                    (_U_(0x1) << AIC_IPR0_PID21_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID21(value)                 (AIC_IPR0_PID21_Msk & ((value) << AIC_IPR0_PID21_Pos))
#define AIC_IPR0_PID22_Pos                    _U_(22)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID22_Msk                    (_U_(0x1) << AIC_IPR0_PID22_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID22(value)                 (AIC_IPR0_PID22_Msk & ((value) << AIC_IPR0_PID22_Pos))
#define AIC_IPR0_PID23_Pos                    _U_(23)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID23_Msk                    (_U_(0x1) << AIC_IPR0_PID23_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID23(value)                 (AIC_IPR0_PID23_Msk & ((value) << AIC_IPR0_PID23_Pos))
#define AIC_IPR0_PID24_Pos                    _U_(24)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID24_Msk                    (_U_(0x1) << AIC_IPR0_PID24_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID24(value)                 (AIC_IPR0_PID24_Msk & ((value) << AIC_IPR0_PID24_Pos))
#define AIC_IPR0_PID25_Pos                    _U_(25)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID25_Msk                    (_U_(0x1) << AIC_IPR0_PID25_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID25(value)                 (AIC_IPR0_PID25_Msk & ((value) << AIC_IPR0_PID25_Pos))
#define AIC_IPR0_PID26_Pos                    _U_(26)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID26_Msk                    (_U_(0x1) << AIC_IPR0_PID26_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID26(value)                 (AIC_IPR0_PID26_Msk & ((value) << AIC_IPR0_PID26_Pos))
#define AIC_IPR0_PID27_Pos                    _U_(27)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID27_Msk                    (_U_(0x1) << AIC_IPR0_PID27_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID27(value)                 (AIC_IPR0_PID27_Msk & ((value) << AIC_IPR0_PID27_Pos))
#define AIC_IPR0_PID28_Pos                    _U_(28)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID28_Msk                    (_U_(0x1) << AIC_IPR0_PID28_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID28(value)                 (AIC_IPR0_PID28_Msk & ((value) << AIC_IPR0_PID28_Pos))
#define AIC_IPR0_PID29_Pos                    _U_(29)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID29_Msk                    (_U_(0x1) << AIC_IPR0_PID29_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID29(value)                 (AIC_IPR0_PID29_Msk & ((value) << AIC_IPR0_PID29_Pos))
#define AIC_IPR0_PID30_Pos                    _U_(30)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID30_Msk                    (_U_(0x1) << AIC_IPR0_PID30_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID30(value)                 (AIC_IPR0_PID30_Msk & ((value) << AIC_IPR0_PID30_Pos))
#define AIC_IPR0_PID31_Pos                    _U_(31)                                              /**< (AIC_IPR0) Interrupt Pending Position */
#define AIC_IPR0_PID31_Msk                    (_U_(0x1) << AIC_IPR0_PID31_Pos)                     /**< (AIC_IPR0) Interrupt Pending Mask */
#define AIC_IPR0_PID31(value)                 (AIC_IPR0_PID31_Msk & ((value) << AIC_IPR0_PID31_Pos))
#define AIC_IPR0_Msk                          _U_(0xFFFFFFFF)                                      /**< (AIC_IPR0) Register Mask  */

#define AIC_IPR0_PID_Pos                      _U_(1)                                               /**< (AIC_IPR0 Position) Interrupt Pending */
#define AIC_IPR0_PID_Msk                      (_U_(0x7FFFFFFF) << AIC_IPR0_PID_Pos)                /**< (AIC_IPR0 Mask) PID */
#define AIC_IPR0_PID(value)                   (AIC_IPR0_PID_Msk & ((value) << AIC_IPR0_PID_Pos))   

/* -------- AIC_IPR1 : (AIC Offset: 0x24) ( R/ 32) Interrupt Pending Register 1 -------- */
#define AIC_IPR1_PID32_Pos                    _U_(0)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID32_Msk                    (_U_(0x1) << AIC_IPR1_PID32_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID32(value)                 (AIC_IPR1_PID32_Msk & ((value) << AIC_IPR1_PID32_Pos))
#define AIC_IPR1_PID33_Pos                    _U_(1)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID33_Msk                    (_U_(0x1) << AIC_IPR1_PID33_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID33(value)                 (AIC_IPR1_PID33_Msk & ((value) << AIC_IPR1_PID33_Pos))
#define AIC_IPR1_PID34_Pos                    _U_(2)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID34_Msk                    (_U_(0x1) << AIC_IPR1_PID34_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID34(value)                 (AIC_IPR1_PID34_Msk & ((value) << AIC_IPR1_PID34_Pos))
#define AIC_IPR1_PID35_Pos                    _U_(3)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID35_Msk                    (_U_(0x1) << AIC_IPR1_PID35_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID35(value)                 (AIC_IPR1_PID35_Msk & ((value) << AIC_IPR1_PID35_Pos))
#define AIC_IPR1_PID36_Pos                    _U_(4)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID36_Msk                    (_U_(0x1) << AIC_IPR1_PID36_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID36(value)                 (AIC_IPR1_PID36_Msk & ((value) << AIC_IPR1_PID36_Pos))
#define AIC_IPR1_PID37_Pos                    _U_(5)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID37_Msk                    (_U_(0x1) << AIC_IPR1_PID37_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID37(value)                 (AIC_IPR1_PID37_Msk & ((value) << AIC_IPR1_PID37_Pos))
#define AIC_IPR1_PID38_Pos                    _U_(6)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID38_Msk                    (_U_(0x1) << AIC_IPR1_PID38_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID38(value)                 (AIC_IPR1_PID38_Msk & ((value) << AIC_IPR1_PID38_Pos))
#define AIC_IPR1_PID39_Pos                    _U_(7)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID39_Msk                    (_U_(0x1) << AIC_IPR1_PID39_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID39(value)                 (AIC_IPR1_PID39_Msk & ((value) << AIC_IPR1_PID39_Pos))
#define AIC_IPR1_PID40_Pos                    _U_(8)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID40_Msk                    (_U_(0x1) << AIC_IPR1_PID40_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID40(value)                 (AIC_IPR1_PID40_Msk & ((value) << AIC_IPR1_PID40_Pos))
#define AIC_IPR1_PID41_Pos                    _U_(9)                                               /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID41_Msk                    (_U_(0x1) << AIC_IPR1_PID41_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID41(value)                 (AIC_IPR1_PID41_Msk & ((value) << AIC_IPR1_PID41_Pos))
#define AIC_IPR1_PID42_Pos                    _U_(10)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID42_Msk                    (_U_(0x1) << AIC_IPR1_PID42_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID42(value)                 (AIC_IPR1_PID42_Msk & ((value) << AIC_IPR1_PID42_Pos))
#define AIC_IPR1_PID43_Pos                    _U_(11)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID43_Msk                    (_U_(0x1) << AIC_IPR1_PID43_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID43(value)                 (AIC_IPR1_PID43_Msk & ((value) << AIC_IPR1_PID43_Pos))
#define AIC_IPR1_PID44_Pos                    _U_(12)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID44_Msk                    (_U_(0x1) << AIC_IPR1_PID44_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID44(value)                 (AIC_IPR1_PID44_Msk & ((value) << AIC_IPR1_PID44_Pos))
#define AIC_IPR1_PID45_Pos                    _U_(13)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID45_Msk                    (_U_(0x1) << AIC_IPR1_PID45_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID45(value)                 (AIC_IPR1_PID45_Msk & ((value) << AIC_IPR1_PID45_Pos))
#define AIC_IPR1_PID46_Pos                    _U_(14)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID46_Msk                    (_U_(0x1) << AIC_IPR1_PID46_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID46(value)                 (AIC_IPR1_PID46_Msk & ((value) << AIC_IPR1_PID46_Pos))
#define AIC_IPR1_PID47_Pos                    _U_(15)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID47_Msk                    (_U_(0x1) << AIC_IPR1_PID47_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID47(value)                 (AIC_IPR1_PID47_Msk & ((value) << AIC_IPR1_PID47_Pos))
#define AIC_IPR1_PID48_Pos                    _U_(16)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID48_Msk                    (_U_(0x1) << AIC_IPR1_PID48_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID48(value)                 (AIC_IPR1_PID48_Msk & ((value) << AIC_IPR1_PID48_Pos))
#define AIC_IPR1_PID49_Pos                    _U_(17)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID49_Msk                    (_U_(0x1) << AIC_IPR1_PID49_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID49(value)                 (AIC_IPR1_PID49_Msk & ((value) << AIC_IPR1_PID49_Pos))
#define AIC_IPR1_PID50_Pos                    _U_(18)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID50_Msk                    (_U_(0x1) << AIC_IPR1_PID50_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID50(value)                 (AIC_IPR1_PID50_Msk & ((value) << AIC_IPR1_PID50_Pos))
#define AIC_IPR1_PID51_Pos                    _U_(19)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID51_Msk                    (_U_(0x1) << AIC_IPR1_PID51_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID51(value)                 (AIC_IPR1_PID51_Msk & ((value) << AIC_IPR1_PID51_Pos))
#define AIC_IPR1_PID52_Pos                    _U_(20)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID52_Msk                    (_U_(0x1) << AIC_IPR1_PID52_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID52(value)                 (AIC_IPR1_PID52_Msk & ((value) << AIC_IPR1_PID52_Pos))
#define AIC_IPR1_PID53_Pos                    _U_(21)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID53_Msk                    (_U_(0x1) << AIC_IPR1_PID53_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID53(value)                 (AIC_IPR1_PID53_Msk & ((value) << AIC_IPR1_PID53_Pos))
#define AIC_IPR1_PID54_Pos                    _U_(22)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID54_Msk                    (_U_(0x1) << AIC_IPR1_PID54_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID54(value)                 (AIC_IPR1_PID54_Msk & ((value) << AIC_IPR1_PID54_Pos))
#define AIC_IPR1_PID55_Pos                    _U_(23)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID55_Msk                    (_U_(0x1) << AIC_IPR1_PID55_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID55(value)                 (AIC_IPR1_PID55_Msk & ((value) << AIC_IPR1_PID55_Pos))
#define AIC_IPR1_PID56_Pos                    _U_(24)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID56_Msk                    (_U_(0x1) << AIC_IPR1_PID56_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID56(value)                 (AIC_IPR1_PID56_Msk & ((value) << AIC_IPR1_PID56_Pos))
#define AIC_IPR1_PID57_Pos                    _U_(25)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID57_Msk                    (_U_(0x1) << AIC_IPR1_PID57_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID57(value)                 (AIC_IPR1_PID57_Msk & ((value) << AIC_IPR1_PID57_Pos))
#define AIC_IPR1_PID58_Pos                    _U_(26)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID58_Msk                    (_U_(0x1) << AIC_IPR1_PID58_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID58(value)                 (AIC_IPR1_PID58_Msk & ((value) << AIC_IPR1_PID58_Pos))
#define AIC_IPR1_PID59_Pos                    _U_(27)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID59_Msk                    (_U_(0x1) << AIC_IPR1_PID59_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID59(value)                 (AIC_IPR1_PID59_Msk & ((value) << AIC_IPR1_PID59_Pos))
#define AIC_IPR1_PID60_Pos                    _U_(28)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID60_Msk                    (_U_(0x1) << AIC_IPR1_PID60_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID60(value)                 (AIC_IPR1_PID60_Msk & ((value) << AIC_IPR1_PID60_Pos))
#define AIC_IPR1_PID61_Pos                    _U_(29)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID61_Msk                    (_U_(0x1) << AIC_IPR1_PID61_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID61(value)                 (AIC_IPR1_PID61_Msk & ((value) << AIC_IPR1_PID61_Pos))
#define AIC_IPR1_PID62_Pos                    _U_(30)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID62_Msk                    (_U_(0x1) << AIC_IPR1_PID62_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID62(value)                 (AIC_IPR1_PID62_Msk & ((value) << AIC_IPR1_PID62_Pos))
#define AIC_IPR1_PID63_Pos                    _U_(31)                                              /**< (AIC_IPR1) Interrupt Pending Position */
#define AIC_IPR1_PID63_Msk                    (_U_(0x1) << AIC_IPR1_PID63_Pos)                     /**< (AIC_IPR1) Interrupt Pending Mask */
#define AIC_IPR1_PID63(value)                 (AIC_IPR1_PID63_Msk & ((value) << AIC_IPR1_PID63_Pos))
#define AIC_IPR1_Msk                          _U_(0xFFFFFFFF)                                      /**< (AIC_IPR1) Register Mask  */

#define AIC_IPR1_PID_Pos                      _U_(0)                                               /**< (AIC_IPR1 Position) Interrupt Pending */
#define AIC_IPR1_PID_Msk                      (_U_(0xFFFFFFFF) << AIC_IPR1_PID_Pos)                /**< (AIC_IPR1 Mask) PID */
#define AIC_IPR1_PID(value)                   (AIC_IPR1_PID_Msk & ((value) << AIC_IPR1_PID_Pos))   

/* -------- AIC_IPR2 : (AIC Offset: 0x28) ( R/ 32) Interrupt Pending Register 2 -------- */
#define AIC_IPR2_PID64_Pos                    _U_(0)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID64_Msk                    (_U_(0x1) << AIC_IPR2_PID64_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID64(value)                 (AIC_IPR2_PID64_Msk & ((value) << AIC_IPR2_PID64_Pos))
#define AIC_IPR2_PID65_Pos                    _U_(1)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID65_Msk                    (_U_(0x1) << AIC_IPR2_PID65_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID65(value)                 (AIC_IPR2_PID65_Msk & ((value) << AIC_IPR2_PID65_Pos))
#define AIC_IPR2_PID66_Pos                    _U_(2)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID66_Msk                    (_U_(0x1) << AIC_IPR2_PID66_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID66(value)                 (AIC_IPR2_PID66_Msk & ((value) << AIC_IPR2_PID66_Pos))
#define AIC_IPR2_PID67_Pos                    _U_(3)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID67_Msk                    (_U_(0x1) << AIC_IPR2_PID67_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID67(value)                 (AIC_IPR2_PID67_Msk & ((value) << AIC_IPR2_PID67_Pos))
#define AIC_IPR2_PID68_Pos                    _U_(4)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID68_Msk                    (_U_(0x1) << AIC_IPR2_PID68_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID68(value)                 (AIC_IPR2_PID68_Msk & ((value) << AIC_IPR2_PID68_Pos))
#define AIC_IPR2_PID69_Pos                    _U_(5)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID69_Msk                    (_U_(0x1) << AIC_IPR2_PID69_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID69(value)                 (AIC_IPR2_PID69_Msk & ((value) << AIC_IPR2_PID69_Pos))
#define AIC_IPR2_PID70_Pos                    _U_(6)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID70_Msk                    (_U_(0x1) << AIC_IPR2_PID70_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID70(value)                 (AIC_IPR2_PID70_Msk & ((value) << AIC_IPR2_PID70_Pos))
#define AIC_IPR2_PID71_Pos                    _U_(7)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID71_Msk                    (_U_(0x1) << AIC_IPR2_PID71_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID71(value)                 (AIC_IPR2_PID71_Msk & ((value) << AIC_IPR2_PID71_Pos))
#define AIC_IPR2_PID72_Pos                    _U_(8)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID72_Msk                    (_U_(0x1) << AIC_IPR2_PID72_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID72(value)                 (AIC_IPR2_PID72_Msk & ((value) << AIC_IPR2_PID72_Pos))
#define AIC_IPR2_PID73_Pos                    _U_(9)                                               /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID73_Msk                    (_U_(0x1) << AIC_IPR2_PID73_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID73(value)                 (AIC_IPR2_PID73_Msk & ((value) << AIC_IPR2_PID73_Pos))
#define AIC_IPR2_SYS_Pos                      _U_(10)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_SYS_Msk                      (_U_(0x1) << AIC_IPR2_SYS_Pos)                       /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_SYS(value)                   (AIC_IPR2_SYS_Msk & ((value) << AIC_IPR2_SYS_Pos))  
#define AIC_IPR2_PID75_Pos                    _U_(11)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID75_Msk                    (_U_(0x1) << AIC_IPR2_PID75_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID75(value)                 (AIC_IPR2_PID75_Msk & ((value) << AIC_IPR2_PID75_Pos))
#define AIC_IPR2_PID76_Pos                    _U_(12)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID76_Msk                    (_U_(0x1) << AIC_IPR2_PID76_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID76(value)                 (AIC_IPR2_PID76_Msk & ((value) << AIC_IPR2_PID76_Pos))
#define AIC_IPR2_PID77_Pos                    _U_(13)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID77_Msk                    (_U_(0x1) << AIC_IPR2_PID77_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID77(value)                 (AIC_IPR2_PID77_Msk & ((value) << AIC_IPR2_PID77_Pos))
#define AIC_IPR2_PID78_Pos                    _U_(14)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID78_Msk                    (_U_(0x1) << AIC_IPR2_PID78_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID78(value)                 (AIC_IPR2_PID78_Msk & ((value) << AIC_IPR2_PID78_Pos))
#define AIC_IPR2_PID79_Pos                    _U_(15)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID79_Msk                    (_U_(0x1) << AIC_IPR2_PID79_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID79(value)                 (AIC_IPR2_PID79_Msk & ((value) << AIC_IPR2_PID79_Pos))
#define AIC_IPR2_PID80_Pos                    _U_(16)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID80_Msk                    (_U_(0x1) << AIC_IPR2_PID80_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID80(value)                 (AIC_IPR2_PID80_Msk & ((value) << AIC_IPR2_PID80_Pos))
#define AIC_IPR2_PID81_Pos                    _U_(17)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID81_Msk                    (_U_(0x1) << AIC_IPR2_PID81_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID81(value)                 (AIC_IPR2_PID81_Msk & ((value) << AIC_IPR2_PID81_Pos))
#define AIC_IPR2_PID82_Pos                    _U_(18)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID82_Msk                    (_U_(0x1) << AIC_IPR2_PID82_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID82(value)                 (AIC_IPR2_PID82_Msk & ((value) << AIC_IPR2_PID82_Pos))
#define AIC_IPR2_PID83_Pos                    _U_(19)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID83_Msk                    (_U_(0x1) << AIC_IPR2_PID83_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID83(value)                 (AIC_IPR2_PID83_Msk & ((value) << AIC_IPR2_PID83_Pos))
#define AIC_IPR2_PID84_Pos                    _U_(20)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID84_Msk                    (_U_(0x1) << AIC_IPR2_PID84_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID84(value)                 (AIC_IPR2_PID84_Msk & ((value) << AIC_IPR2_PID84_Pos))
#define AIC_IPR2_PID85_Pos                    _U_(21)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID85_Msk                    (_U_(0x1) << AIC_IPR2_PID85_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID85(value)                 (AIC_IPR2_PID85_Msk & ((value) << AIC_IPR2_PID85_Pos))
#define AIC_IPR2_PID86_Pos                    _U_(22)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID86_Msk                    (_U_(0x1) << AIC_IPR2_PID86_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID86(value)                 (AIC_IPR2_PID86_Msk & ((value) << AIC_IPR2_PID86_Pos))
#define AIC_IPR2_PID87_Pos                    _U_(23)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID87_Msk                    (_U_(0x1) << AIC_IPR2_PID87_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID87(value)                 (AIC_IPR2_PID87_Msk & ((value) << AIC_IPR2_PID87_Pos))
#define AIC_IPR2_PID88_Pos                    _U_(24)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID88_Msk                    (_U_(0x1) << AIC_IPR2_PID88_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID88(value)                 (AIC_IPR2_PID88_Msk & ((value) << AIC_IPR2_PID88_Pos))
#define AIC_IPR2_PID89_Pos                    _U_(25)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID89_Msk                    (_U_(0x1) << AIC_IPR2_PID89_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID89(value)                 (AIC_IPR2_PID89_Msk & ((value) << AIC_IPR2_PID89_Pos))
#define AIC_IPR2_PID90_Pos                    _U_(26)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID90_Msk                    (_U_(0x1) << AIC_IPR2_PID90_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID90(value)                 (AIC_IPR2_PID90_Msk & ((value) << AIC_IPR2_PID90_Pos))
#define AIC_IPR2_PID91_Pos                    _U_(27)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID91_Msk                    (_U_(0x1) << AIC_IPR2_PID91_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID91(value)                 (AIC_IPR2_PID91_Msk & ((value) << AIC_IPR2_PID91_Pos))
#define AIC_IPR2_PID92_Pos                    _U_(28)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID92_Msk                    (_U_(0x1) << AIC_IPR2_PID92_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID92(value)                 (AIC_IPR2_PID92_Msk & ((value) << AIC_IPR2_PID92_Pos))
#define AIC_IPR2_PID93_Pos                    _U_(29)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID93_Msk                    (_U_(0x1) << AIC_IPR2_PID93_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID93(value)                 (AIC_IPR2_PID93_Msk & ((value) << AIC_IPR2_PID93_Pos))
#define AIC_IPR2_PID94_Pos                    _U_(30)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID94_Msk                    (_U_(0x1) << AIC_IPR2_PID94_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID94(value)                 (AIC_IPR2_PID94_Msk & ((value) << AIC_IPR2_PID94_Pos))
#define AIC_IPR2_PID95_Pos                    _U_(31)                                              /**< (AIC_IPR2) Interrupt Pending Position */
#define AIC_IPR2_PID95_Msk                    (_U_(0x1) << AIC_IPR2_PID95_Pos)                     /**< (AIC_IPR2) Interrupt Pending Mask */
#define AIC_IPR2_PID95(value)                 (AIC_IPR2_PID95_Msk & ((value) << AIC_IPR2_PID95_Pos))
#define AIC_IPR2_Msk                          _U_(0xFFFFFFFF)                                      /**< (AIC_IPR2) Register Mask  */


/* -------- AIC_IPR3 : (AIC Offset: 0x2C) ( R/ 32) Interrupt Pending Register 3 -------- */
#define AIC_IPR3_PID96_Pos                    _U_(0)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID96_Msk                    (_U_(0x1) << AIC_IPR3_PID96_Pos)                     /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID96(value)                 (AIC_IPR3_PID96_Msk & ((value) << AIC_IPR3_PID96_Pos))
#define AIC_IPR3_PID97_Pos                    _U_(1)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID97_Msk                    (_U_(0x1) << AIC_IPR3_PID97_Pos)                     /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID97(value)                 (AIC_IPR3_PID97_Msk & ((value) << AIC_IPR3_PID97_Pos))
#define AIC_IPR3_PID98_Pos                    _U_(2)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID98_Msk                    (_U_(0x1) << AIC_IPR3_PID98_Pos)                     /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID98(value)                 (AIC_IPR3_PID98_Msk & ((value) << AIC_IPR3_PID98_Pos))
#define AIC_IPR3_PID99_Pos                    _U_(3)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID99_Msk                    (_U_(0x1) << AIC_IPR3_PID99_Pos)                     /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID99(value)                 (AIC_IPR3_PID99_Msk & ((value) << AIC_IPR3_PID99_Pos))
#define AIC_IPR3_PID100_Pos                   _U_(4)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID100_Msk                   (_U_(0x1) << AIC_IPR3_PID100_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID100(value)                (AIC_IPR3_PID100_Msk & ((value) << AIC_IPR3_PID100_Pos))
#define AIC_IPR3_PID101_Pos                   _U_(5)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID101_Msk                   (_U_(0x1) << AIC_IPR3_PID101_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID101(value)                (AIC_IPR3_PID101_Msk & ((value) << AIC_IPR3_PID101_Pos))
#define AIC_IPR3_PID102_Pos                   _U_(6)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID102_Msk                   (_U_(0x1) << AIC_IPR3_PID102_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID102(value)                (AIC_IPR3_PID102_Msk & ((value) << AIC_IPR3_PID102_Pos))
#define AIC_IPR3_PID103_Pos                   _U_(7)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID103_Msk                   (_U_(0x1) << AIC_IPR3_PID103_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID103(value)                (AIC_IPR3_PID103_Msk & ((value) << AIC_IPR3_PID103_Pos))
#define AIC_IPR3_PID104_Pos                   _U_(8)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID104_Msk                   (_U_(0x1) << AIC_IPR3_PID104_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID104(value)                (AIC_IPR3_PID104_Msk & ((value) << AIC_IPR3_PID104_Pos))
#define AIC_IPR3_PID105_Pos                   _U_(9)                                               /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID105_Msk                   (_U_(0x1) << AIC_IPR3_PID105_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID105(value)                (AIC_IPR3_PID105_Msk & ((value) << AIC_IPR3_PID105_Pos))
#define AIC_IPR3_PID106_Pos                   _U_(10)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID106_Msk                   (_U_(0x1) << AIC_IPR3_PID106_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID106(value)                (AIC_IPR3_PID106_Msk & ((value) << AIC_IPR3_PID106_Pos))
#define AIC_IPR3_PID107_Pos                   _U_(11)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID107_Msk                   (_U_(0x1) << AIC_IPR3_PID107_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID107(value)                (AIC_IPR3_PID107_Msk & ((value) << AIC_IPR3_PID107_Pos))
#define AIC_IPR3_PID108_Pos                   _U_(12)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID108_Msk                   (_U_(0x1) << AIC_IPR3_PID108_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID108(value)                (AIC_IPR3_PID108_Msk & ((value) << AIC_IPR3_PID108_Pos))
#define AIC_IPR3_PID109_Pos                   _U_(13)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID109_Msk                   (_U_(0x1) << AIC_IPR3_PID109_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID109(value)                (AIC_IPR3_PID109_Msk & ((value) << AIC_IPR3_PID109_Pos))
#define AIC_IPR3_PID110_Pos                   _U_(14)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID110_Msk                   (_U_(0x1) << AIC_IPR3_PID110_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID110(value)                (AIC_IPR3_PID110_Msk & ((value) << AIC_IPR3_PID110_Pos))
#define AIC_IPR3_PID111_Pos                   _U_(15)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID111_Msk                   (_U_(0x1) << AIC_IPR3_PID111_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID111(value)                (AIC_IPR3_PID111_Msk & ((value) << AIC_IPR3_PID111_Pos))
#define AIC_IPR3_PID112_Pos                   _U_(16)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID112_Msk                   (_U_(0x1) << AIC_IPR3_PID112_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID112(value)                (AIC_IPR3_PID112_Msk & ((value) << AIC_IPR3_PID112_Pos))
#define AIC_IPR3_PID113_Pos                   _U_(17)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID113_Msk                   (_U_(0x1) << AIC_IPR3_PID113_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID113(value)                (AIC_IPR3_PID113_Msk & ((value) << AIC_IPR3_PID113_Pos))
#define AIC_IPR3_PID114_Pos                   _U_(18)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID114_Msk                   (_U_(0x1) << AIC_IPR3_PID114_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID114(value)                (AIC_IPR3_PID114_Msk & ((value) << AIC_IPR3_PID114_Pos))
#define AIC_IPR3_PID115_Pos                   _U_(19)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID115_Msk                   (_U_(0x1) << AIC_IPR3_PID115_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID115(value)                (AIC_IPR3_PID115_Msk & ((value) << AIC_IPR3_PID115_Pos))
#define AIC_IPR3_PID116_Pos                   _U_(20)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID116_Msk                   (_U_(0x1) << AIC_IPR3_PID116_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID116(value)                (AIC_IPR3_PID116_Msk & ((value) << AIC_IPR3_PID116_Pos))
#define AIC_IPR3_PID117_Pos                   _U_(21)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID117_Msk                   (_U_(0x1) << AIC_IPR3_PID117_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID117(value)                (AIC_IPR3_PID117_Msk & ((value) << AIC_IPR3_PID117_Pos))
#define AIC_IPR3_PID118_Pos                   _U_(22)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID118_Msk                   (_U_(0x1) << AIC_IPR3_PID118_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID118(value)                (AIC_IPR3_PID118_Msk & ((value) << AIC_IPR3_PID118_Pos))
#define AIC_IPR3_PID119_Pos                   _U_(23)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID119_Msk                   (_U_(0x1) << AIC_IPR3_PID119_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID119(value)                (AIC_IPR3_PID119_Msk & ((value) << AIC_IPR3_PID119_Pos))
#define AIC_IPR3_PID120_Pos                   _U_(24)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID120_Msk                   (_U_(0x1) << AIC_IPR3_PID120_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID120(value)                (AIC_IPR3_PID120_Msk & ((value) << AIC_IPR3_PID120_Pos))
#define AIC_IPR3_PID121_Pos                   _U_(25)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID121_Msk                   (_U_(0x1) << AIC_IPR3_PID121_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID121(value)                (AIC_IPR3_PID121_Msk & ((value) << AIC_IPR3_PID121_Pos))
#define AIC_IPR3_PID122_Pos                   _U_(26)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID122_Msk                   (_U_(0x1) << AIC_IPR3_PID122_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID122(value)                (AIC_IPR3_PID122_Msk & ((value) << AIC_IPR3_PID122_Pos))
#define AIC_IPR3_PID123_Pos                   _U_(27)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID123_Msk                   (_U_(0x1) << AIC_IPR3_PID123_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID123(value)                (AIC_IPR3_PID123_Msk & ((value) << AIC_IPR3_PID123_Pos))
#define AIC_IPR3_PID124_Pos                   _U_(28)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID124_Msk                   (_U_(0x1) << AIC_IPR3_PID124_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID124(value)                (AIC_IPR3_PID124_Msk & ((value) << AIC_IPR3_PID124_Pos))
#define AIC_IPR3_PID125_Pos                   _U_(29)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID125_Msk                   (_U_(0x1) << AIC_IPR3_PID125_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID125(value)                (AIC_IPR3_PID125_Msk & ((value) << AIC_IPR3_PID125_Pos))
#define AIC_IPR3_PID126_Pos                   _U_(30)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID126_Msk                   (_U_(0x1) << AIC_IPR3_PID126_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID126(value)                (AIC_IPR3_PID126_Msk & ((value) << AIC_IPR3_PID126_Pos))
#define AIC_IPR3_PID127_Pos                   _U_(31)                                              /**< (AIC_IPR3) Interrupt Pending Position */
#define AIC_IPR3_PID127_Msk                   (_U_(0x1) << AIC_IPR3_PID127_Pos)                    /**< (AIC_IPR3) Interrupt Pending Mask */
#define AIC_IPR3_PID127(value)                (AIC_IPR3_PID127_Msk & ((value) << AIC_IPR3_PID127_Pos))
#define AIC_IPR3_Msk                          _U_(0xFFFFFFFF)                                      /**< (AIC_IPR3) Register Mask  */

#define AIC_IPR3_PID_Pos                      _U_(0)                                               /**< (AIC_IPR3 Position) Interrupt Pending */
#define AIC_IPR3_PID_Msk                      (_U_(0xFFFFFFFF) << AIC_IPR3_PID_Pos)                /**< (AIC_IPR3 Mask) PID */
#define AIC_IPR3_PID(value)                   (AIC_IPR3_PID_Msk & ((value) << AIC_IPR3_PID_Pos))   

/* -------- AIC_IMR : (AIC Offset: 0x30) ( R/ 32) Interrupt Mask Register -------- */
#define AIC_IMR_INTM_Pos                      _U_(0)                                               /**< (AIC_IMR) Interrupt Mask Position */
#define AIC_IMR_INTM_Msk                      (_U_(0x1) << AIC_IMR_INTM_Pos)                       /**< (AIC_IMR) Interrupt Mask Mask */
#define AIC_IMR_INTM(value)                   (AIC_IMR_INTM_Msk & ((value) << AIC_IMR_INTM_Pos))  
#define AIC_IMR_Msk                           _U_(0x00000001)                                      /**< (AIC_IMR) Register Mask  */


/* -------- AIC_CISR : (AIC Offset: 0x34) ( R/ 32) Core Interrupt Status Register -------- */
#define AIC_CISR_NFIQ_Pos                     _U_(0)                                               /**< (AIC_CISR) NFIQ Status Position */
#define AIC_CISR_NFIQ_Msk                     (_U_(0x1) << AIC_CISR_NFIQ_Pos)                      /**< (AIC_CISR) NFIQ Status Mask */
#define AIC_CISR_NFIQ(value)                  (AIC_CISR_NFIQ_Msk & ((value) << AIC_CISR_NFIQ_Pos))
#define AIC_CISR_NIRQ_Pos                     _U_(1)                                               /**< (AIC_CISR) NIRQ Status Position */
#define AIC_CISR_NIRQ_Msk                     (_U_(0x1) << AIC_CISR_NIRQ_Pos)                      /**< (AIC_CISR) NIRQ Status Mask */
#define AIC_CISR_NIRQ(value)                  (AIC_CISR_NIRQ_Msk & ((value) << AIC_CISR_NIRQ_Pos))
#define AIC_CISR_Msk                          _U_(0x00000003)                                      /**< (AIC_CISR) Register Mask  */


/* -------- AIC_EOICR : (AIC Offset: 0x38) ( /W 32) End of Interrupt Command Register -------- */
#define AIC_EOICR_ENDIT_Pos                   _U_(0)                                               /**< (AIC_EOICR) Interrupt Processing Complete Command Position */
#define AIC_EOICR_ENDIT_Msk                   (_U_(0x1) << AIC_EOICR_ENDIT_Pos)                    /**< (AIC_EOICR) Interrupt Processing Complete Command Mask */
#define AIC_EOICR_ENDIT(value)                (AIC_EOICR_ENDIT_Msk & ((value) << AIC_EOICR_ENDIT_Pos))
#define AIC_EOICR_Msk                         _U_(0x00000001)                                      /**< (AIC_EOICR) Register Mask  */


/* -------- AIC_SPU : (AIC Offset: 0x3C) (R/W 32) Spurious Interrupt Vector Register -------- */
#define AIC_SPU_SIVR_Pos                      _U_(0)                                               /**< (AIC_SPU) Spurious Interrupt Vector Register Position */
#define AIC_SPU_SIVR_Msk                      (_U_(0xFFFFFFFF) << AIC_SPU_SIVR_Pos)                /**< (AIC_SPU) Spurious Interrupt Vector Register Mask */
#define AIC_SPU_SIVR(value)                   (AIC_SPU_SIVR_Msk & ((value) << AIC_SPU_SIVR_Pos))  
#define AIC_SPU_Msk                           _U_(0xFFFFFFFF)                                      /**< (AIC_SPU) Register Mask  */


/* -------- AIC_IECR : (AIC Offset: 0x40) ( /W 32) Interrupt Enable Command Register -------- */
#define AIC_IECR_INTEN_Pos                    _U_(0)                                               /**< (AIC_IECR) Interrupt Enable Position */
#define AIC_IECR_INTEN_Msk                    (_U_(0x1) << AIC_IECR_INTEN_Pos)                     /**< (AIC_IECR) Interrupt Enable Mask */
#define AIC_IECR_INTEN(value)                 (AIC_IECR_INTEN_Msk & ((value) << AIC_IECR_INTEN_Pos))
#define AIC_IECR_Msk                          _U_(0x00000001)                                      /**< (AIC_IECR) Register Mask  */


/* -------- AIC_IDCR : (AIC Offset: 0x44) ( /W 32) Interrupt Disable Command Register -------- */
#define AIC_IDCR_INTD_Pos                     _U_(0)                                               /**< (AIC_IDCR) Interrupt Disable Position */
#define AIC_IDCR_INTD_Msk                     (_U_(0x1) << AIC_IDCR_INTD_Pos)                      /**< (AIC_IDCR) Interrupt Disable Mask */
#define AIC_IDCR_INTD(value)                  (AIC_IDCR_INTD_Msk & ((value) << AIC_IDCR_INTD_Pos))
#define AIC_IDCR_Msk                          _U_(0x00000001)                                      /**< (AIC_IDCR) Register Mask  */


/* -------- AIC_ICCR : (AIC Offset: 0x48) ( /W 32) Interrupt Clear Command Register -------- */
#define AIC_ICCR_INTCLR_Pos                   _U_(0)                                               /**< (AIC_ICCR) Interrupt Clear Position */
#define AIC_ICCR_INTCLR_Msk                   (_U_(0x1) << AIC_ICCR_INTCLR_Pos)                    /**< (AIC_ICCR) Interrupt Clear Mask */
#define AIC_ICCR_INTCLR(value)                (AIC_ICCR_INTCLR_Msk & ((value) << AIC_ICCR_INTCLR_Pos))
#define AIC_ICCR_Msk                          _U_(0x00000001)                                      /**< (AIC_ICCR) Register Mask  */


/* -------- AIC_ISCR : (AIC Offset: 0x4C) ( /W 32) Interrupt Set Command Register -------- */
#define AIC_ISCR_INTSET_Pos                   _U_(0)                                               /**< (AIC_ISCR) Interrupt Set Position */
#define AIC_ISCR_INTSET_Msk                   (_U_(0x1) << AIC_ISCR_INTSET_Pos)                    /**< (AIC_ISCR) Interrupt Set Mask */
#define AIC_ISCR_INTSET(value)                (AIC_ISCR_INTSET_Msk & ((value) << AIC_ISCR_INTSET_Pos))
#define AIC_ISCR_Msk                          _U_(0x00000001)                                      /**< (AIC_ISCR) Register Mask  */


/* -------- AIC_DCR : (AIC Offset: 0x6C) (R/W 32) Debug Control Register -------- */
#define AIC_DCR_PROT_Pos                      _U_(0)                                               /**< (AIC_DCR) Protection Mode Position */
#define AIC_DCR_PROT_Msk                      (_U_(0x1) << AIC_DCR_PROT_Pos)                       /**< (AIC_DCR) Protection Mode Mask */
#define AIC_DCR_PROT(value)                   (AIC_DCR_PROT_Msk & ((value) << AIC_DCR_PROT_Pos))  
#define AIC_DCR_GMSK_Pos                      _U_(1)                                               /**< (AIC_DCR) General Interrupt Mask Position */
#define AIC_DCR_GMSK_Msk                      (_U_(0x1) << AIC_DCR_GMSK_Pos)                       /**< (AIC_DCR) General Interrupt Mask Mask */
#define AIC_DCR_GMSK(value)                   (AIC_DCR_GMSK_Msk & ((value) << AIC_DCR_GMSK_Pos))  
#define AIC_DCR_Msk                           _U_(0x00000003)                                      /**< (AIC_DCR) Register Mask  */


/* -------- AIC_WPMR : (AIC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define AIC_WPMR_WPEN_Pos                     _U_(0)                                               /**< (AIC_WPMR) Write Protection Enable Position */
#define AIC_WPMR_WPEN_Msk                     (_U_(0x1) << AIC_WPMR_WPEN_Pos)                      /**< (AIC_WPMR) Write Protection Enable Mask */
#define AIC_WPMR_WPEN(value)                  (AIC_WPMR_WPEN_Msk & ((value) << AIC_WPMR_WPEN_Pos))
#define AIC_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (AIC_WPMR) Write Protection Key Position */
#define AIC_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << AIC_WPMR_WPKEY_Pos)                /**< (AIC_WPMR) Write Protection Key Mask */
#define AIC_WPMR_WPKEY(value)                 (AIC_WPMR_WPKEY_Msk & ((value) << AIC_WPMR_WPKEY_Pos))
#define   AIC_WPMR_WPKEY_PASSWD_Val           _U_(0x414943)                                        /**< (AIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define AIC_WPMR_WPKEY_PASSWD                 (AIC_WPMR_WPKEY_PASSWD_Val << AIC_WPMR_WPKEY_Pos)    /**< (AIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define AIC_WPMR_Msk                          _U_(0xFFFFFF01)                                      /**< (AIC_WPMR) Register Mask  */


/* -------- AIC_WPSR : (AIC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define AIC_WPSR_WPVS_Pos                     _U_(0)                                               /**< (AIC_WPSR) Write Protection Violation Status Position */
#define AIC_WPSR_WPVS_Msk                     (_U_(0x1) << AIC_WPSR_WPVS_Pos)                      /**< (AIC_WPSR) Write Protection Violation Status Mask */
#define AIC_WPSR_WPVS(value)                  (AIC_WPSR_WPVS_Msk & ((value) << AIC_WPSR_WPVS_Pos))
#define AIC_WPSR_WPVSRC_Pos                   _U_(8)                                               /**< (AIC_WPSR) Write Protection Violation Source Position */
#define AIC_WPSR_WPVSRC_Msk                   (_U_(0xFFFF) << AIC_WPSR_WPVSRC_Pos)                 /**< (AIC_WPSR) Write Protection Violation Source Mask */
#define AIC_WPSR_WPVSRC(value)                (AIC_WPSR_WPVSRC_Msk & ((value) << AIC_WPSR_WPVSRC_Pos))
#define AIC_WPSR_Msk                          _U_(0x00FFFF01)                                      /**< (AIC_WPSR) Register Mask  */


/** \brief AIC register offsets definitions */
#define AIC_SSR_REG_OFST               (0x00)              /**< (AIC_SSR) Source Select Register Offset */
#define AIC_SMR_REG_OFST               (0x04)              /**< (AIC_SMR) Source Mode Register Offset */
#define AIC_SVR_REG_OFST               (0x08)              /**< (AIC_SVR) Source Vector Register Offset */
#define AIC_IVR_REG_OFST               (0x10)              /**< (AIC_IVR) Interrupt Vector Register Offset */
#define AIC_FVR_REG_OFST               (0x14)              /**< (AIC_FVR) FIQ Vector Register Offset */
#define AIC_ISR_REG_OFST               (0x18)              /**< (AIC_ISR) Interrupt Status Register Offset */
#define AIC_IPR0_REG_OFST              (0x20)              /**< (AIC_IPR0) Interrupt Pending Register 0 Offset */
#define AIC_IPR1_REG_OFST              (0x24)              /**< (AIC_IPR1) Interrupt Pending Register 1 Offset */
#define AIC_IPR2_REG_OFST              (0x28)              /**< (AIC_IPR2) Interrupt Pending Register 2 Offset */
#define AIC_IPR3_REG_OFST              (0x2C)              /**< (AIC_IPR3) Interrupt Pending Register 3 Offset */
#define AIC_IMR_REG_OFST               (0x30)              /**< (AIC_IMR) Interrupt Mask Register Offset */
#define AIC_CISR_REG_OFST              (0x34)              /**< (AIC_CISR) Core Interrupt Status Register Offset */
#define AIC_EOICR_REG_OFST             (0x38)              /**< (AIC_EOICR) End of Interrupt Command Register Offset */
#define AIC_SPU_REG_OFST               (0x3C)              /**< (AIC_SPU) Spurious Interrupt Vector Register Offset */
#define AIC_IECR_REG_OFST              (0x40)              /**< (AIC_IECR) Interrupt Enable Command Register Offset */
#define AIC_IDCR_REG_OFST              (0x44)              /**< (AIC_IDCR) Interrupt Disable Command Register Offset */
#define AIC_ICCR_REG_OFST              (0x48)              /**< (AIC_ICCR) Interrupt Clear Command Register Offset */
#define AIC_ISCR_REG_OFST              (0x4C)              /**< (AIC_ISCR) Interrupt Set Command Register Offset */
#define AIC_DCR_REG_OFST               (0x6C)              /**< (AIC_DCR) Debug Control Register Offset */
#define AIC_WPMR_REG_OFST              (0xE4)              /**< (AIC_WPMR) Write Protection Mode Register Offset */
#define AIC_WPSR_REG_OFST              (0xE8)              /**< (AIC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief AIC register API structure */
typedef struct
{
  __IO  uint32_t                       AIC_SSR;            /**< Offset: 0x00 (R/W  32) Source Select Register */
  __IO  uint32_t                       AIC_SMR;            /**< Offset: 0x04 (R/W  32) Source Mode Register */
  __IO  uint32_t                       AIC_SVR;            /**< Offset: 0x08 (R/W  32) Source Vector Register */
  __I   uint8_t                        Reserved1[0x04];
  __I   uint32_t                       AIC_IVR;            /**< Offset: 0x10 (R/   32) Interrupt Vector Register */
  __I   uint32_t                       AIC_FVR;            /**< Offset: 0x14 (R/   32) FIQ Vector Register */
  __I   uint32_t                       AIC_ISR;            /**< Offset: 0x18 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved2[0x04];
  __I   uint32_t                       AIC_IPR0;           /**< Offset: 0x20 (R/   32) Interrupt Pending Register 0 */
  __I   uint32_t                       AIC_IPR1;           /**< Offset: 0x24 (R/   32) Interrupt Pending Register 1 */
  __I   uint32_t                       AIC_IPR2;           /**< Offset: 0x28 (R/   32) Interrupt Pending Register 2 */
  __I   uint32_t                       AIC_IPR3;           /**< Offset: 0x2C (R/   32) Interrupt Pending Register 3 */
  __I   uint32_t                       AIC_IMR;            /**< Offset: 0x30 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       AIC_CISR;           /**< Offset: 0x34 (R/   32) Core Interrupt Status Register */
  __O   uint32_t                       AIC_EOICR;          /**< Offset: 0x38 ( /W  32) End of Interrupt Command Register */
  __IO  uint32_t                       AIC_SPU;            /**< Offset: 0x3C (R/W  32) Spurious Interrupt Vector Register */
  __O   uint32_t                       AIC_IECR;           /**< Offset: 0x40 ( /W  32) Interrupt Enable Command Register */
  __O   uint32_t                       AIC_IDCR;           /**< Offset: 0x44 ( /W  32) Interrupt Disable Command Register */
  __O   uint32_t                       AIC_ICCR;           /**< Offset: 0x48 ( /W  32) Interrupt Clear Command Register */
  __O   uint32_t                       AIC_ISCR;           /**< Offset: 0x4C ( /W  32) Interrupt Set Command Register */
  __I   uint8_t                        Reserved3[0x1C];
  __IO  uint32_t                       AIC_DCR;            /**< Offset: 0x6C (R/W  32) Debug Control Register */
  __I   uint8_t                        Reserved4[0x74];
  __IO  uint32_t                       AIC_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       AIC_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} aic_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_AIC_COMPONENT_H_ */
