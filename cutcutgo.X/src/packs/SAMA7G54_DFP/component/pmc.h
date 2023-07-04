/*
 * Component description for PMC
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
#ifndef _SAMA7G_PMC_COMPONENT_H_
#define _SAMA7G_PMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PMC                                          */
/* ************************************************************************** */

/* -------- PMC_SCER : (PMC Offset: 0x00) ( /W 32) System Clock Enable Register -------- */
#define PMC_SCER_PCK0_Pos                     _U_(8)                                               /**< (PMC_SCER) Programmable Clock 0 Output Enable Position */
#define PMC_SCER_PCK0_Msk                     (_U_(0x1) << PMC_SCER_PCK0_Pos)                      /**< (PMC_SCER) Programmable Clock 0 Output Enable Mask */
#define PMC_SCER_PCK0(value)                  (PMC_SCER_PCK0_Msk & ((value) << PMC_SCER_PCK0_Pos))
#define   PMC_SCER_PCK0_0_Val                 _U_(0x0)                                             /**< (PMC_SCER) No effect.  */
#define   PMC_SCER_PCK0_1_Val                 _U_(0x1)                                             /**< (PMC_SCER) Enables the corresponding Programmable Clock output.  */
#define PMC_SCER_PCK0_0                       (PMC_SCER_PCK0_0_Val << PMC_SCER_PCK0_Pos)           /**< (PMC_SCER) No effect. Position  */
#define PMC_SCER_PCK0_1                       (PMC_SCER_PCK0_1_Val << PMC_SCER_PCK0_Pos)           /**< (PMC_SCER) Enables the corresponding Programmable Clock output. Position  */
#define PMC_SCER_PCK1_Pos                     _U_(9)                                               /**< (PMC_SCER) Programmable Clock 1 Output Enable Position */
#define PMC_SCER_PCK1_Msk                     (_U_(0x1) << PMC_SCER_PCK1_Pos)                      /**< (PMC_SCER) Programmable Clock 1 Output Enable Mask */
#define PMC_SCER_PCK1(value)                  (PMC_SCER_PCK1_Msk & ((value) << PMC_SCER_PCK1_Pos))
#define   PMC_SCER_PCK1_0_Val                 _U_(0x0)                                             /**< (PMC_SCER) No effect.  */
#define   PMC_SCER_PCK1_1_Val                 _U_(0x1)                                             /**< (PMC_SCER) Enables the corresponding Programmable Clock output.  */
#define PMC_SCER_PCK1_0                       (PMC_SCER_PCK1_0_Val << PMC_SCER_PCK1_Pos)           /**< (PMC_SCER) No effect. Position  */
#define PMC_SCER_PCK1_1                       (PMC_SCER_PCK1_1_Val << PMC_SCER_PCK1_Pos)           /**< (PMC_SCER) Enables the corresponding Programmable Clock output. Position  */
#define PMC_SCER_PCK2_Pos                     _U_(10)                                              /**< (PMC_SCER) Programmable Clock 2 Output Enable Position */
#define PMC_SCER_PCK2_Msk                     (_U_(0x1) << PMC_SCER_PCK2_Pos)                      /**< (PMC_SCER) Programmable Clock 2 Output Enable Mask */
#define PMC_SCER_PCK2(value)                  (PMC_SCER_PCK2_Msk & ((value) << PMC_SCER_PCK2_Pos))
#define   PMC_SCER_PCK2_0_Val                 _U_(0x0)                                             /**< (PMC_SCER) No effect.  */
#define   PMC_SCER_PCK2_1_Val                 _U_(0x1)                                             /**< (PMC_SCER) Enables the corresponding Programmable Clock output.  */
#define PMC_SCER_PCK2_0                       (PMC_SCER_PCK2_0_Val << PMC_SCER_PCK2_Pos)           /**< (PMC_SCER) No effect. Position  */
#define PMC_SCER_PCK2_1                       (PMC_SCER_PCK2_1_Val << PMC_SCER_PCK2_Pos)           /**< (PMC_SCER) Enables the corresponding Programmable Clock output. Position  */
#define PMC_SCER_PCK3_Pos                     _U_(11)                                              /**< (PMC_SCER) Programmable Clock 3 Output Enable Position */
#define PMC_SCER_PCK3_Msk                     (_U_(0x1) << PMC_SCER_PCK3_Pos)                      /**< (PMC_SCER) Programmable Clock 3 Output Enable Mask */
#define PMC_SCER_PCK3(value)                  (PMC_SCER_PCK3_Msk & ((value) << PMC_SCER_PCK3_Pos))
#define   PMC_SCER_PCK3_0_Val                 _U_(0x0)                                             /**< (PMC_SCER) No effect.  */
#define   PMC_SCER_PCK3_1_Val                 _U_(0x1)                                             /**< (PMC_SCER) Enables the corresponding Programmable Clock output.  */
#define PMC_SCER_PCK3_0                       (PMC_SCER_PCK3_0_Val << PMC_SCER_PCK3_Pos)           /**< (PMC_SCER) No effect. Position  */
#define PMC_SCER_PCK3_1                       (PMC_SCER_PCK3_1_Val << PMC_SCER_PCK3_Pos)           /**< (PMC_SCER) Enables the corresponding Programmable Clock output. Position  */
#define PMC_SCER_PCK4_Pos                     _U_(12)                                              /**< (PMC_SCER) Programmable Clock 4 Output Enable Position */
#define PMC_SCER_PCK4_Msk                     (_U_(0x1) << PMC_SCER_PCK4_Pos)                      /**< (PMC_SCER) Programmable Clock 4 Output Enable Mask */
#define PMC_SCER_PCK4(value)                  (PMC_SCER_PCK4_Msk & ((value) << PMC_SCER_PCK4_Pos))
#define   PMC_SCER_PCK4_0_Val                 _U_(0x0)                                             /**< (PMC_SCER) No effect.  */
#define   PMC_SCER_PCK4_1_Val                 _U_(0x1)                                             /**< (PMC_SCER) Enables the corresponding Programmable Clock output.  */
#define PMC_SCER_PCK4_0                       (PMC_SCER_PCK4_0_Val << PMC_SCER_PCK4_Pos)           /**< (PMC_SCER) No effect. Position  */
#define PMC_SCER_PCK4_1                       (PMC_SCER_PCK4_1_Val << PMC_SCER_PCK4_Pos)           /**< (PMC_SCER) Enables the corresponding Programmable Clock output. Position  */
#define PMC_SCER_PCK5_Pos                     _U_(13)                                              /**< (PMC_SCER) Programmable Clock 5 Output Enable Position */
#define PMC_SCER_PCK5_Msk                     (_U_(0x1) << PMC_SCER_PCK5_Pos)                      /**< (PMC_SCER) Programmable Clock 5 Output Enable Mask */
#define PMC_SCER_PCK5(value)                  (PMC_SCER_PCK5_Msk & ((value) << PMC_SCER_PCK5_Pos))
#define   PMC_SCER_PCK5_0_Val                 _U_(0x0)                                             /**< (PMC_SCER) No effect.  */
#define   PMC_SCER_PCK5_1_Val                 _U_(0x1)                                             /**< (PMC_SCER) Enables the corresponding Programmable Clock output.  */
#define PMC_SCER_PCK5_0                       (PMC_SCER_PCK5_0_Val << PMC_SCER_PCK5_Pos)           /**< (PMC_SCER) No effect. Position  */
#define PMC_SCER_PCK5_1                       (PMC_SCER_PCK5_1_Val << PMC_SCER_PCK5_Pos)           /**< (PMC_SCER) Enables the corresponding Programmable Clock output. Position  */
#define PMC_SCER_PCK6_Pos                     _U_(14)                                              /**< (PMC_SCER) Programmable Clock 6 Output Enable Position */
#define PMC_SCER_PCK6_Msk                     (_U_(0x1) << PMC_SCER_PCK6_Pos)                      /**< (PMC_SCER) Programmable Clock 6 Output Enable Mask */
#define PMC_SCER_PCK6(value)                  (PMC_SCER_PCK6_Msk & ((value) << PMC_SCER_PCK6_Pos))
#define   PMC_SCER_PCK6_0_Val                 _U_(0x0)                                             /**< (PMC_SCER) No effect.  */
#define   PMC_SCER_PCK6_1_Val                 _U_(0x1)                                             /**< (PMC_SCER) Enables the corresponding Programmable Clock output.  */
#define PMC_SCER_PCK6_0                       (PMC_SCER_PCK6_0_Val << PMC_SCER_PCK6_Pos)           /**< (PMC_SCER) No effect. Position  */
#define PMC_SCER_PCK6_1                       (PMC_SCER_PCK6_1_Val << PMC_SCER_PCK6_Pos)           /**< (PMC_SCER) Enables the corresponding Programmable Clock output. Position  */
#define PMC_SCER_PCK7_Pos                     _U_(15)                                              /**< (PMC_SCER) Programmable Clock 7 Output Enable Position */
#define PMC_SCER_PCK7_Msk                     (_U_(0x1) << PMC_SCER_PCK7_Pos)                      /**< (PMC_SCER) Programmable Clock 7 Output Enable Mask */
#define PMC_SCER_PCK7(value)                  (PMC_SCER_PCK7_Msk & ((value) << PMC_SCER_PCK7_Pos))
#define   PMC_SCER_PCK7_0_Val                 _U_(0x0)                                             /**< (PMC_SCER) No effect.  */
#define   PMC_SCER_PCK7_1_Val                 _U_(0x1)                                             /**< (PMC_SCER) Enables the corresponding Programmable Clock output.  */
#define PMC_SCER_PCK7_0                       (PMC_SCER_PCK7_0_Val << PMC_SCER_PCK7_Pos)           /**< (PMC_SCER) No effect. Position  */
#define PMC_SCER_PCK7_1                       (PMC_SCER_PCK7_1_Val << PMC_SCER_PCK7_Pos)           /**< (PMC_SCER) Enables the corresponding Programmable Clock output. Position  */
#define PMC_SCER_Msk                          _U_(0x0000FF00)                                      /**< (PMC_SCER) Register Mask  */

#define PMC_SCER_PCK_Pos                      _U_(8)                                               /**< (PMC_SCER Position) Programmable Clock 7 Output Enable */
#define PMC_SCER_PCK_Msk                      (_U_(0xFF) << PMC_SCER_PCK_Pos)                      /**< (PMC_SCER Mask) PCK */
#define PMC_SCER_PCK(value)                   (PMC_SCER_PCK_Msk & ((value) << PMC_SCER_PCK_Pos))   

/* -------- PMC_SCDR : (PMC Offset: 0x04) ( /W 32) System Clock Disable Register -------- */
#define PMC_SCDR_PCK0_Pos                     _U_(8)                                               /**< (PMC_SCDR) Programmable Clock 0 Output Disable Position */
#define PMC_SCDR_PCK0_Msk                     (_U_(0x1) << PMC_SCDR_PCK0_Pos)                      /**< (PMC_SCDR) Programmable Clock 0 Output Disable Mask */
#define PMC_SCDR_PCK0(value)                  (PMC_SCDR_PCK0_Msk & ((value) << PMC_SCDR_PCK0_Pos))
#define   PMC_SCDR_PCK0_0_Val                 _U_(0x0)                                             /**< (PMC_SCDR) No effect.  */
#define   PMC_SCDR_PCK0_1_Val                 _U_(0x1)                                             /**< (PMC_SCDR) Disables the corresponding Programmable Clock output.  */
#define PMC_SCDR_PCK0_0                       (PMC_SCDR_PCK0_0_Val << PMC_SCDR_PCK0_Pos)           /**< (PMC_SCDR) No effect. Position  */
#define PMC_SCDR_PCK0_1                       (PMC_SCDR_PCK0_1_Val << PMC_SCDR_PCK0_Pos)           /**< (PMC_SCDR) Disables the corresponding Programmable Clock output. Position  */
#define PMC_SCDR_PCK1_Pos                     _U_(9)                                               /**< (PMC_SCDR) Programmable Clock 1 Output Disable Position */
#define PMC_SCDR_PCK1_Msk                     (_U_(0x1) << PMC_SCDR_PCK1_Pos)                      /**< (PMC_SCDR) Programmable Clock 1 Output Disable Mask */
#define PMC_SCDR_PCK1(value)                  (PMC_SCDR_PCK1_Msk & ((value) << PMC_SCDR_PCK1_Pos))
#define   PMC_SCDR_PCK1_0_Val                 _U_(0x0)                                             /**< (PMC_SCDR) No effect.  */
#define   PMC_SCDR_PCK1_1_Val                 _U_(0x1)                                             /**< (PMC_SCDR) Disables the corresponding Programmable Clock output.  */
#define PMC_SCDR_PCK1_0                       (PMC_SCDR_PCK1_0_Val << PMC_SCDR_PCK1_Pos)           /**< (PMC_SCDR) No effect. Position  */
#define PMC_SCDR_PCK1_1                       (PMC_SCDR_PCK1_1_Val << PMC_SCDR_PCK1_Pos)           /**< (PMC_SCDR) Disables the corresponding Programmable Clock output. Position  */
#define PMC_SCDR_PCK2_Pos                     _U_(10)                                              /**< (PMC_SCDR) Programmable Clock 2 Output Disable Position */
#define PMC_SCDR_PCK2_Msk                     (_U_(0x1) << PMC_SCDR_PCK2_Pos)                      /**< (PMC_SCDR) Programmable Clock 2 Output Disable Mask */
#define PMC_SCDR_PCK2(value)                  (PMC_SCDR_PCK2_Msk & ((value) << PMC_SCDR_PCK2_Pos))
#define   PMC_SCDR_PCK2_0_Val                 _U_(0x0)                                             /**< (PMC_SCDR) No effect.  */
#define   PMC_SCDR_PCK2_1_Val                 _U_(0x1)                                             /**< (PMC_SCDR) Disables the corresponding Programmable Clock output.  */
#define PMC_SCDR_PCK2_0                       (PMC_SCDR_PCK2_0_Val << PMC_SCDR_PCK2_Pos)           /**< (PMC_SCDR) No effect. Position  */
#define PMC_SCDR_PCK2_1                       (PMC_SCDR_PCK2_1_Val << PMC_SCDR_PCK2_Pos)           /**< (PMC_SCDR) Disables the corresponding Programmable Clock output. Position  */
#define PMC_SCDR_PCK3_Pos                     _U_(11)                                              /**< (PMC_SCDR) Programmable Clock 3 Output Disable Position */
#define PMC_SCDR_PCK3_Msk                     (_U_(0x1) << PMC_SCDR_PCK3_Pos)                      /**< (PMC_SCDR) Programmable Clock 3 Output Disable Mask */
#define PMC_SCDR_PCK3(value)                  (PMC_SCDR_PCK3_Msk & ((value) << PMC_SCDR_PCK3_Pos))
#define   PMC_SCDR_PCK3_0_Val                 _U_(0x0)                                             /**< (PMC_SCDR) No effect.  */
#define   PMC_SCDR_PCK3_1_Val                 _U_(0x1)                                             /**< (PMC_SCDR) Disables the corresponding Programmable Clock output.  */
#define PMC_SCDR_PCK3_0                       (PMC_SCDR_PCK3_0_Val << PMC_SCDR_PCK3_Pos)           /**< (PMC_SCDR) No effect. Position  */
#define PMC_SCDR_PCK3_1                       (PMC_SCDR_PCK3_1_Val << PMC_SCDR_PCK3_Pos)           /**< (PMC_SCDR) Disables the corresponding Programmable Clock output. Position  */
#define PMC_SCDR_PCK4_Pos                     _U_(12)                                              /**< (PMC_SCDR) Programmable Clock 4 Output Disable Position */
#define PMC_SCDR_PCK4_Msk                     (_U_(0x1) << PMC_SCDR_PCK4_Pos)                      /**< (PMC_SCDR) Programmable Clock 4 Output Disable Mask */
#define PMC_SCDR_PCK4(value)                  (PMC_SCDR_PCK4_Msk & ((value) << PMC_SCDR_PCK4_Pos))
#define   PMC_SCDR_PCK4_0_Val                 _U_(0x0)                                             /**< (PMC_SCDR) No effect.  */
#define   PMC_SCDR_PCK4_1_Val                 _U_(0x1)                                             /**< (PMC_SCDR) Disables the corresponding Programmable Clock output.  */
#define PMC_SCDR_PCK4_0                       (PMC_SCDR_PCK4_0_Val << PMC_SCDR_PCK4_Pos)           /**< (PMC_SCDR) No effect. Position  */
#define PMC_SCDR_PCK4_1                       (PMC_SCDR_PCK4_1_Val << PMC_SCDR_PCK4_Pos)           /**< (PMC_SCDR) Disables the corresponding Programmable Clock output. Position  */
#define PMC_SCDR_PCK5_Pos                     _U_(13)                                              /**< (PMC_SCDR) Programmable Clock 5 Output Disable Position */
#define PMC_SCDR_PCK5_Msk                     (_U_(0x1) << PMC_SCDR_PCK5_Pos)                      /**< (PMC_SCDR) Programmable Clock 5 Output Disable Mask */
#define PMC_SCDR_PCK5(value)                  (PMC_SCDR_PCK5_Msk & ((value) << PMC_SCDR_PCK5_Pos))
#define   PMC_SCDR_PCK5_0_Val                 _U_(0x0)                                             /**< (PMC_SCDR) No effect.  */
#define   PMC_SCDR_PCK5_1_Val                 _U_(0x1)                                             /**< (PMC_SCDR) Disables the corresponding Programmable Clock output.  */
#define PMC_SCDR_PCK5_0                       (PMC_SCDR_PCK5_0_Val << PMC_SCDR_PCK5_Pos)           /**< (PMC_SCDR) No effect. Position  */
#define PMC_SCDR_PCK5_1                       (PMC_SCDR_PCK5_1_Val << PMC_SCDR_PCK5_Pos)           /**< (PMC_SCDR) Disables the corresponding Programmable Clock output. Position  */
#define PMC_SCDR_PCK6_Pos                     _U_(14)                                              /**< (PMC_SCDR) Programmable Clock 6 Output Disable Position */
#define PMC_SCDR_PCK6_Msk                     (_U_(0x1) << PMC_SCDR_PCK6_Pos)                      /**< (PMC_SCDR) Programmable Clock 6 Output Disable Mask */
#define PMC_SCDR_PCK6(value)                  (PMC_SCDR_PCK6_Msk & ((value) << PMC_SCDR_PCK6_Pos))
#define   PMC_SCDR_PCK6_0_Val                 _U_(0x0)                                             /**< (PMC_SCDR) No effect.  */
#define   PMC_SCDR_PCK6_1_Val                 _U_(0x1)                                             /**< (PMC_SCDR) Disables the corresponding Programmable Clock output.  */
#define PMC_SCDR_PCK6_0                       (PMC_SCDR_PCK6_0_Val << PMC_SCDR_PCK6_Pos)           /**< (PMC_SCDR) No effect. Position  */
#define PMC_SCDR_PCK6_1                       (PMC_SCDR_PCK6_1_Val << PMC_SCDR_PCK6_Pos)           /**< (PMC_SCDR) Disables the corresponding Programmable Clock output. Position  */
#define PMC_SCDR_PCK7_Pos                     _U_(15)                                              /**< (PMC_SCDR) Programmable Clock 7 Output Disable Position */
#define PMC_SCDR_PCK7_Msk                     (_U_(0x1) << PMC_SCDR_PCK7_Pos)                      /**< (PMC_SCDR) Programmable Clock 7 Output Disable Mask */
#define PMC_SCDR_PCK7(value)                  (PMC_SCDR_PCK7_Msk & ((value) << PMC_SCDR_PCK7_Pos))
#define   PMC_SCDR_PCK7_0_Val                 _U_(0x0)                                             /**< (PMC_SCDR) No effect.  */
#define   PMC_SCDR_PCK7_1_Val                 _U_(0x1)                                             /**< (PMC_SCDR) Disables the corresponding Programmable Clock output.  */
#define PMC_SCDR_PCK7_0                       (PMC_SCDR_PCK7_0_Val << PMC_SCDR_PCK7_Pos)           /**< (PMC_SCDR) No effect. Position  */
#define PMC_SCDR_PCK7_1                       (PMC_SCDR_PCK7_1_Val << PMC_SCDR_PCK7_Pos)           /**< (PMC_SCDR) Disables the corresponding Programmable Clock output. Position  */
#define PMC_SCDR_Msk                          _U_(0x0000FF00)                                      /**< (PMC_SCDR) Register Mask  */

#define PMC_SCDR_PCK_Pos                      _U_(8)                                               /**< (PMC_SCDR Position) Programmable Clock 7 Output Disable */
#define PMC_SCDR_PCK_Msk                      (_U_(0xFF) << PMC_SCDR_PCK_Pos)                      /**< (PMC_SCDR Mask) PCK */
#define PMC_SCDR_PCK(value)                   (PMC_SCDR_PCK_Msk & ((value) << PMC_SCDR_PCK_Pos))   

/* -------- PMC_SCSR : (PMC Offset: 0x08) ( R/ 32) System Clock Status Register -------- */
#define PMC_SCSR_RESETVALUE                   _U_(0x01)                                            /**<  (PMC_SCSR) System Clock Status Register  Reset Value */

#define PMC_SCSR_PCK0_Pos                     _U_(8)                                               /**< (PMC_SCSR) Programmable Clock 0 Output Status Position */
#define PMC_SCSR_PCK0_Msk                     (_U_(0x1) << PMC_SCSR_PCK0_Pos)                      /**< (PMC_SCSR) Programmable Clock 0 Output Status Mask */
#define PMC_SCSR_PCK0(value)                  (PMC_SCSR_PCK0_Msk & ((value) << PMC_SCSR_PCK0_Pos))
#define   PMC_SCSR_PCK0_0_Val                 _U_(0x0)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled.  */
#define   PMC_SCSR_PCK0_1_Val                 _U_(0x1)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled.  */
#define PMC_SCSR_PCK0_0                       (PMC_SCSR_PCK0_0_Val << PMC_SCSR_PCK0_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled. Position  */
#define PMC_SCSR_PCK0_1                       (PMC_SCSR_PCK0_1_Val << PMC_SCSR_PCK0_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled. Position  */
#define PMC_SCSR_PCK1_Pos                     _U_(9)                                               /**< (PMC_SCSR) Programmable Clock 1 Output Status Position */
#define PMC_SCSR_PCK1_Msk                     (_U_(0x1) << PMC_SCSR_PCK1_Pos)                      /**< (PMC_SCSR) Programmable Clock 1 Output Status Mask */
#define PMC_SCSR_PCK1(value)                  (PMC_SCSR_PCK1_Msk & ((value) << PMC_SCSR_PCK1_Pos))
#define   PMC_SCSR_PCK1_0_Val                 _U_(0x0)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled.  */
#define   PMC_SCSR_PCK1_1_Val                 _U_(0x1)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled.  */
#define PMC_SCSR_PCK1_0                       (PMC_SCSR_PCK1_0_Val << PMC_SCSR_PCK1_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled. Position  */
#define PMC_SCSR_PCK1_1                       (PMC_SCSR_PCK1_1_Val << PMC_SCSR_PCK1_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled. Position  */
#define PMC_SCSR_PCK2_Pos                     _U_(10)                                              /**< (PMC_SCSR) Programmable Clock 2 Output Status Position */
#define PMC_SCSR_PCK2_Msk                     (_U_(0x1) << PMC_SCSR_PCK2_Pos)                      /**< (PMC_SCSR) Programmable Clock 2 Output Status Mask */
#define PMC_SCSR_PCK2(value)                  (PMC_SCSR_PCK2_Msk & ((value) << PMC_SCSR_PCK2_Pos))
#define   PMC_SCSR_PCK2_0_Val                 _U_(0x0)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled.  */
#define   PMC_SCSR_PCK2_1_Val                 _U_(0x1)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled.  */
#define PMC_SCSR_PCK2_0                       (PMC_SCSR_PCK2_0_Val << PMC_SCSR_PCK2_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled. Position  */
#define PMC_SCSR_PCK2_1                       (PMC_SCSR_PCK2_1_Val << PMC_SCSR_PCK2_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled. Position  */
#define PMC_SCSR_PCK3_Pos                     _U_(11)                                              /**< (PMC_SCSR) Programmable Clock 3 Output Status Position */
#define PMC_SCSR_PCK3_Msk                     (_U_(0x1) << PMC_SCSR_PCK3_Pos)                      /**< (PMC_SCSR) Programmable Clock 3 Output Status Mask */
#define PMC_SCSR_PCK3(value)                  (PMC_SCSR_PCK3_Msk & ((value) << PMC_SCSR_PCK3_Pos))
#define   PMC_SCSR_PCK3_0_Val                 _U_(0x0)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled.  */
#define   PMC_SCSR_PCK3_1_Val                 _U_(0x1)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled.  */
#define PMC_SCSR_PCK3_0                       (PMC_SCSR_PCK3_0_Val << PMC_SCSR_PCK3_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled. Position  */
#define PMC_SCSR_PCK3_1                       (PMC_SCSR_PCK3_1_Val << PMC_SCSR_PCK3_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled. Position  */
#define PMC_SCSR_PCK4_Pos                     _U_(12)                                              /**< (PMC_SCSR) Programmable Clock 4 Output Status Position */
#define PMC_SCSR_PCK4_Msk                     (_U_(0x1) << PMC_SCSR_PCK4_Pos)                      /**< (PMC_SCSR) Programmable Clock 4 Output Status Mask */
#define PMC_SCSR_PCK4(value)                  (PMC_SCSR_PCK4_Msk & ((value) << PMC_SCSR_PCK4_Pos))
#define   PMC_SCSR_PCK4_0_Val                 _U_(0x0)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled.  */
#define   PMC_SCSR_PCK4_1_Val                 _U_(0x1)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled.  */
#define PMC_SCSR_PCK4_0                       (PMC_SCSR_PCK4_0_Val << PMC_SCSR_PCK4_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled. Position  */
#define PMC_SCSR_PCK4_1                       (PMC_SCSR_PCK4_1_Val << PMC_SCSR_PCK4_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled. Position  */
#define PMC_SCSR_PCK5_Pos                     _U_(13)                                              /**< (PMC_SCSR) Programmable Clock 5 Output Status Position */
#define PMC_SCSR_PCK5_Msk                     (_U_(0x1) << PMC_SCSR_PCK5_Pos)                      /**< (PMC_SCSR) Programmable Clock 5 Output Status Mask */
#define PMC_SCSR_PCK5(value)                  (PMC_SCSR_PCK5_Msk & ((value) << PMC_SCSR_PCK5_Pos))
#define   PMC_SCSR_PCK5_0_Val                 _U_(0x0)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled.  */
#define   PMC_SCSR_PCK5_1_Val                 _U_(0x1)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled.  */
#define PMC_SCSR_PCK5_0                       (PMC_SCSR_PCK5_0_Val << PMC_SCSR_PCK5_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled. Position  */
#define PMC_SCSR_PCK5_1                       (PMC_SCSR_PCK5_1_Val << PMC_SCSR_PCK5_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled. Position  */
#define PMC_SCSR_PCK6_Pos                     _U_(14)                                              /**< (PMC_SCSR) Programmable Clock 6 Output Status Position */
#define PMC_SCSR_PCK6_Msk                     (_U_(0x1) << PMC_SCSR_PCK6_Pos)                      /**< (PMC_SCSR) Programmable Clock 6 Output Status Mask */
#define PMC_SCSR_PCK6(value)                  (PMC_SCSR_PCK6_Msk & ((value) << PMC_SCSR_PCK6_Pos))
#define   PMC_SCSR_PCK6_0_Val                 _U_(0x0)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled.  */
#define   PMC_SCSR_PCK6_1_Val                 _U_(0x1)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled.  */
#define PMC_SCSR_PCK6_0                       (PMC_SCSR_PCK6_0_Val << PMC_SCSR_PCK6_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled. Position  */
#define PMC_SCSR_PCK6_1                       (PMC_SCSR_PCK6_1_Val << PMC_SCSR_PCK6_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled. Position  */
#define PMC_SCSR_PCK7_Pos                     _U_(15)                                              /**< (PMC_SCSR) Programmable Clock 7 Output Status Position */
#define PMC_SCSR_PCK7_Msk                     (_U_(0x1) << PMC_SCSR_PCK7_Pos)                      /**< (PMC_SCSR) Programmable Clock 7 Output Status Mask */
#define PMC_SCSR_PCK7(value)                  (PMC_SCSR_PCK7_Msk & ((value) << PMC_SCSR_PCK7_Pos))
#define   PMC_SCSR_PCK7_0_Val                 _U_(0x0)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled.  */
#define   PMC_SCSR_PCK7_1_Val                 _U_(0x1)                                             /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled.  */
#define PMC_SCSR_PCK7_0                       (PMC_SCSR_PCK7_0_Val << PMC_SCSR_PCK7_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is disabled. Position  */
#define PMC_SCSR_PCK7_1                       (PMC_SCSR_PCK7_1_Val << PMC_SCSR_PCK7_Pos)           /**< (PMC_SCSR) The corresponding Programmable Clock output is enabled. Position  */
#define PMC_SCSR_Msk                          _U_(0x0000FF00)                                      /**< (PMC_SCSR) Register Mask  */

#define PMC_SCSR_PCK_Pos                      _U_(8)                                               /**< (PMC_SCSR Position) Programmable Clock 7 Output Status */
#define PMC_SCSR_PCK_Msk                      (_U_(0xFF) << PMC_SCSR_PCK_Pos)                      /**< (PMC_SCSR Mask) PCK */
#define PMC_SCSR_PCK(value)                   (PMC_SCSR_PCK_Msk & ((value) << PMC_SCSR_PCK_Pos))   

/* -------- PMC_PLL_CTRL0 : (PMC Offset: 0x0C) (R/W 32) PLL Control Register 0 -------- */
#define PMC_PLL_CTRL0_RESETVALUE              _U_(0x00)                                            /**<  (PMC_PLL_CTRL0) PLL Control Register 0  Reset Value */

#define PMC_PLL_CTRL0_DIVPMC_Pos              _U_(0)                                               /**< (PMC_PLL_CTRL0) Divider for PMC Position */
#define PMC_PLL_CTRL0_DIVPMC_Msk              (_U_(0xFF) << PMC_PLL_CTRL0_DIVPMC_Pos)              /**< (PMC_PLL_CTRL0) Divider for PMC Mask */
#define PMC_PLL_CTRL0_DIVPMC(value)           (PMC_PLL_CTRL0_DIVPMC_Msk & ((value) << PMC_PLL_CTRL0_DIVPMC_Pos))
#define PMC_PLL_CTRL0_DIVIO_Pos               _U_(12)                                              /**< (PMC_PLL_CTRL0) Divider for PAD Position */
#define PMC_PLL_CTRL0_DIVIO_Msk               (_U_(0xFF) << PMC_PLL_CTRL0_DIVIO_Pos)               /**< (PMC_PLL_CTRL0) Divider for PAD Mask */
#define PMC_PLL_CTRL0_DIVIO(value)            (PMC_PLL_CTRL0_DIVIO_Msk & ((value) << PMC_PLL_CTRL0_DIVIO_Pos))
#define PMC_PLL_CTRL0_ENPLL_Pos               _U_(28)                                              /**< (PMC_PLL_CTRL0) Enable PLL Position */
#define PMC_PLL_CTRL0_ENPLL_Msk               (_U_(0x1) << PMC_PLL_CTRL0_ENPLL_Pos)                /**< (PMC_PLL_CTRL0) Enable PLL Mask */
#define PMC_PLL_CTRL0_ENPLL(value)            (PMC_PLL_CTRL0_ENPLL_Msk & ((value) << PMC_PLL_CTRL0_ENPLL_Pos))
#define   PMC_PLL_CTRL0_ENPLL_0_Val           _U_(0x0)                                             /**< (PMC_PLL_CTRL0) The PLL is off.  */
#define   PMC_PLL_CTRL0_ENPLL_1_Val           _U_(0x1)                                             /**< (PMC_PLL_CTRL0) The PLL is on.  */
#define PMC_PLL_CTRL0_ENPLL_0                 (PMC_PLL_CTRL0_ENPLL_0_Val << PMC_PLL_CTRL0_ENPLL_Pos) /**< (PMC_PLL_CTRL0) The PLL is off. Position  */
#define PMC_PLL_CTRL0_ENPLL_1                 (PMC_PLL_CTRL0_ENPLL_1_Val << PMC_PLL_CTRL0_ENPLL_Pos) /**< (PMC_PLL_CTRL0) The PLL is on. Position  */
#define PMC_PLL_CTRL0_ENPLLCK_Pos             _U_(29)                                              /**< (PMC_PLL_CTRL0) Enable PLL Clock for PMC Position */
#define PMC_PLL_CTRL0_ENPLLCK_Msk             (_U_(0x1) << PMC_PLL_CTRL0_ENPLLCK_Pos)              /**< (PMC_PLL_CTRL0) Enable PLL Clock for PMC Mask */
#define PMC_PLL_CTRL0_ENPLLCK(value)          (PMC_PLL_CTRL0_ENPLLCK_Msk & ((value) << PMC_PLL_CTRL0_ENPLLCK_Pos))
#define   PMC_PLL_CTRL0_ENPLLCK_0_Val         _U_(0x0)                                             /**< (PMC_PLL_CTRL0) The clock generated by the PLL is not send to the IP_Acronym.  */
#define   PMC_PLL_CTRL0_ENPLLCK_1_Val         _U_(0x1)                                             /**< (PMC_PLL_CTRL0) The clock generated by the PLL is sent to the IP_Acronym.  */
#define PMC_PLL_CTRL0_ENPLLCK_0               (PMC_PLL_CTRL0_ENPLLCK_0_Val << PMC_PLL_CTRL0_ENPLLCK_Pos) /**< (PMC_PLL_CTRL0) The clock generated by the PLL is not send to the IP_Acronym. Position  */
#define PMC_PLL_CTRL0_ENPLLCK_1               (PMC_PLL_CTRL0_ENPLLCK_1_Val << PMC_PLL_CTRL0_ENPLLCK_Pos) /**< (PMC_PLL_CTRL0) The clock generated by the PLL is sent to the IP_Acronym. Position  */
#define PMC_PLL_CTRL0_ENIOPLLCK_Pos           _U_(30)                                              /**< (PMC_PLL_CTRL0) Enable PLL Clock for IO Position */
#define PMC_PLL_CTRL0_ENIOPLLCK_Msk           (_U_(0x1) << PMC_PLL_CTRL0_ENIOPLLCK_Pos)            /**< (PMC_PLL_CTRL0) Enable PLL Clock for IO Mask */
#define PMC_PLL_CTRL0_ENIOPLLCK(value)        (PMC_PLL_CTRL0_ENIOPLLCK_Msk & ((value) << PMC_PLL_CTRL0_ENIOPLLCK_Pos))
#define   PMC_PLL_CTRL0_ENIOPLLCK_0_Val       _U_(0x0)                                             /**< (PMC_PLL_CTRL0) The clock generated by the PLL is not send to the IO.  */
#define   PMC_PLL_CTRL0_ENIOPLLCK_1_Val       _U_(0x1)                                             /**< (PMC_PLL_CTRL0) The clock generated by the PLL is sent to the IO.  */
#define PMC_PLL_CTRL0_ENIOPLLCK_0             (PMC_PLL_CTRL0_ENIOPLLCK_0_Val << PMC_PLL_CTRL0_ENIOPLLCK_Pos) /**< (PMC_PLL_CTRL0) The clock generated by the PLL is not send to the IO. Position  */
#define PMC_PLL_CTRL0_ENIOPLLCK_1             (PMC_PLL_CTRL0_ENIOPLLCK_1_Val << PMC_PLL_CTRL0_ENIOPLLCK_Pos) /**< (PMC_PLL_CTRL0) The clock generated by the PLL is sent to the IO. Position  */
#define PMC_PLL_CTRL0_ENLOCK_Pos              _U_(31)                                              /**< (PMC_PLL_CTRL0) Enable PLL Lock Position */
#define PMC_PLL_CTRL0_ENLOCK_Msk              (_U_(0x1) << PMC_PLL_CTRL0_ENLOCK_Pos)               /**< (PMC_PLL_CTRL0) Enable PLL Lock Mask */
#define PMC_PLL_CTRL0_ENLOCK(value)           (PMC_PLL_CTRL0_ENLOCK_Msk & ((value) << PMC_PLL_CTRL0_ENLOCK_Pos))
#define   PMC_PLL_CTRL0_ENLOCK_0_Val          _U_(0x0)                                             /**< (PMC_PLL_CTRL0) The lock signal sent by the PLL is ignored. The PLL is considered as locked once the start-up time defined by PMC_PLL_UPDT.STUPTIM has elapsed.  */
#define   PMC_PLL_CTRL0_ENLOCK_1_Val          _U_(0x1)                                             /**< (PMC_PLL_CTRL0) The PLL is considered as locked once the start-up time defined by PMC_PLL_UPDT.STUPTIM has elapsed and the lock signal sent by the PLL has risen.  */
#define PMC_PLL_CTRL0_ENLOCK_0                (PMC_PLL_CTRL0_ENLOCK_0_Val << PMC_PLL_CTRL0_ENLOCK_Pos) /**< (PMC_PLL_CTRL0) The lock signal sent by the PLL is ignored. The PLL is considered as locked once the start-up time defined by PMC_PLL_UPDT.STUPTIM has elapsed. Position  */
#define PMC_PLL_CTRL0_ENLOCK_1                (PMC_PLL_CTRL0_ENLOCK_1_Val << PMC_PLL_CTRL0_ENLOCK_Pos) /**< (PMC_PLL_CTRL0) The PLL is considered as locked once the start-up time defined by PMC_PLL_UPDT.STUPTIM has elapsed and the lock signal sent by the PLL has risen. Position  */
#define PMC_PLL_CTRL0_Msk                     _U_(0xF00FF0FF)                                      /**< (PMC_PLL_CTRL0) Register Mask  */


/* -------- PMC_PLL_CTRL1 : (PMC Offset: 0x10) (R/W 32) PLL Control Register 1 -------- */
#define PMC_PLL_CTRL1_RESETVALUE              _U_(0x00)                                            /**<  (PMC_PLL_CTRL1) PLL Control Register 1  Reset Value */

#define PMC_PLL_CTRL1_FRACR_Pos               _U_(0)                                               /**< (PMC_PLL_CTRL1) Fractional Loop Divider Setting Position */
#define PMC_PLL_CTRL1_FRACR_Msk               (_U_(0x3FFFFF) << PMC_PLL_CTRL1_FRACR_Pos)           /**< (PMC_PLL_CTRL1) Fractional Loop Divider Setting Mask */
#define PMC_PLL_CTRL1_FRACR(value)            (PMC_PLL_CTRL1_FRACR_Msk & ((value) << PMC_PLL_CTRL1_FRACR_Pos))
#define PMC_PLL_CTRL1_MUL_Pos                 _U_(24)                                              /**< (PMC_PLL_CTRL1) Multiplier Factor Value Position */
#define PMC_PLL_CTRL1_MUL_Msk                 (_U_(0xFF) << PMC_PLL_CTRL1_MUL_Pos)                 /**< (PMC_PLL_CTRL1) Multiplier Factor Value Mask */
#define PMC_PLL_CTRL1_MUL(value)              (PMC_PLL_CTRL1_MUL_Msk & ((value) << PMC_PLL_CTRL1_MUL_Pos))
#define PMC_PLL_CTRL1_Msk                     _U_(0xFF3FFFFF)                                      /**< (PMC_PLL_CTRL1) Register Mask  */


/* -------- PMC_PLL_SSR : (PMC Offset: 0x14) (R/W 32) PLL Spread Spectrum Register -------- */
#define PMC_PLL_SSR_RESETVALUE                _U_(0x00)                                            /**<  (PMC_PLL_SSR) PLL Spread Spectrum Register  Reset Value */

#define PMC_PLL_SSR_STEP_Pos                  _U_(0)                                               /**< (PMC_PLL_SSR) Spread Spectrum Step Size Position */
#define PMC_PLL_SSR_STEP_Msk                  (_U_(0xFFFF) << PMC_PLL_SSR_STEP_Pos)                /**< (PMC_PLL_SSR) Spread Spectrum Step Size Mask */
#define PMC_PLL_SSR_STEP(value)               (PMC_PLL_SSR_STEP_Msk & ((value) << PMC_PLL_SSR_STEP_Pos))
#define PMC_PLL_SSR_NSTEP_Pos                 _U_(16)                                              /**< (PMC_PLL_SSR) Spread Spectrum Number of Steps Position */
#define PMC_PLL_SSR_NSTEP_Msk                 (_U_(0xFF) << PMC_PLL_SSR_NSTEP_Pos)                 /**< (PMC_PLL_SSR) Spread Spectrum Number of Steps Mask */
#define PMC_PLL_SSR_NSTEP(value)              (PMC_PLL_SSR_NSTEP_Msk & ((value) << PMC_PLL_SSR_NSTEP_Pos))
#define PMC_PLL_SSR_ENSPREAD_Pos              _U_(28)                                              /**< (PMC_PLL_SSR) Spread Spectrum Enable Position */
#define PMC_PLL_SSR_ENSPREAD_Msk              (_U_(0x1) << PMC_PLL_SSR_ENSPREAD_Pos)               /**< (PMC_PLL_SSR) Spread Spectrum Enable Mask */
#define PMC_PLL_SSR_ENSPREAD(value)           (PMC_PLL_SSR_ENSPREAD_Msk & ((value) << PMC_PLL_SSR_ENSPREAD_Pos))
#define   PMC_PLL_SSR_ENSPREAD_0_Val          _U_(0x0)                                             /**< (PMC_PLL_SSR) The spread spectrum is not applied to the PLL.  */
#define   PMC_PLL_SSR_ENSPREAD_1_Val          _U_(0x1)                                             /**< (PMC_PLL_SSR) The spread spectrum is applied to the PLL.  */
#define PMC_PLL_SSR_ENSPREAD_0                (PMC_PLL_SSR_ENSPREAD_0_Val << PMC_PLL_SSR_ENSPREAD_Pos) /**< (PMC_PLL_SSR) The spread spectrum is not applied to the PLL. Position  */
#define PMC_PLL_SSR_ENSPREAD_1                (PMC_PLL_SSR_ENSPREAD_1_Val << PMC_PLL_SSR_ENSPREAD_Pos) /**< (PMC_PLL_SSR) The spread spectrum is applied to the PLL. Position  */
#define PMC_PLL_SSR_Msk                       _U_(0x10FFFFFF)                                      /**< (PMC_PLL_SSR) Register Mask  */


/* -------- PMC_PLL_ACR : (PMC Offset: 0x18) (R/W 32) PLL Analog Control Register -------- */
#define PMC_PLL_ACR_RESETVALUE                _U_(0x30)                                            /**<  (PMC_PLL_ACR) PLL Analog Control Register  Reset Value */

#define PMC_PLL_ACR_CONTROL_Pos               _U_(0)                                               /**< (PMC_PLL_ACR) PLL CONTROL Value Selection Position */
#define PMC_PLL_ACR_CONTROL_Msk               (_U_(0xFFF) << PMC_PLL_ACR_CONTROL_Pos)              /**< (PMC_PLL_ACR) PLL CONTROL Value Selection Mask */
#define PMC_PLL_ACR_CONTROL(value)            (PMC_PLL_ACR_CONTROL_Msk & ((value) << PMC_PLL_ACR_CONTROL_Pos))
#define PMC_PLL_ACR_LOCK_THR_Pos              _U_(16)                                              /**< (PMC_PLL_ACR) PLL Lock Threshold Value Selection Position */
#define PMC_PLL_ACR_LOCK_THR_Msk              (_U_(0x7) << PMC_PLL_ACR_LOCK_THR_Pos)               /**< (PMC_PLL_ACR) PLL Lock Threshold Value Selection Mask */
#define PMC_PLL_ACR_LOCK_THR(value)           (PMC_PLL_ACR_LOCK_THR_Msk & ((value) << PMC_PLL_ACR_LOCK_THR_Pos))
#define PMC_PLL_ACR_LOOP_FILTER_Pos           _U_(24)                                              /**< (PMC_PLL_ACR) LOOP Filter Selection Position */
#define PMC_PLL_ACR_LOOP_FILTER_Msk           (_U_(0x3F) << PMC_PLL_ACR_LOOP_FILTER_Pos)           /**< (PMC_PLL_ACR) LOOP Filter Selection Mask */
#define PMC_PLL_ACR_LOOP_FILTER(value)        (PMC_PLL_ACR_LOOP_FILTER_Msk & ((value) << PMC_PLL_ACR_LOOP_FILTER_Pos))
#define PMC_PLL_ACR_Msk                       _U_(0x3F070FFF)                                      /**< (PMC_PLL_ACR) Register Mask  */


/* -------- PMC_PLL_UPDT : (PMC Offset: 0x1C) (R/W 32) PLL Update Register -------- */
#define PMC_PLL_UPDT_RESETVALUE               _U_(0x30000)                                         /**<  (PMC_PLL_UPDT) PLL Update Register  Reset Value */

#define PMC_PLL_UPDT_ID_Pos                   _U_(0)                                               /**< (PMC_PLL_UPDT) PLL ID Position */
#define PMC_PLL_UPDT_ID_Msk                   (_U_(0xF) << PMC_PLL_UPDT_ID_Pos)                    /**< (PMC_PLL_UPDT) PLL ID Mask */
#define PMC_PLL_UPDT_ID(value)                (PMC_PLL_UPDT_ID_Msk & ((value) << PMC_PLL_UPDT_ID_Pos))
#define PMC_PLL_UPDT_UPDATE_Pos               _U_(8)                                               /**< (PMC_PLL_UPDT) PLL Setting Update (write-only) Position */
#define PMC_PLL_UPDT_UPDATE_Msk               (_U_(0x1) << PMC_PLL_UPDT_UPDATE_Pos)                /**< (PMC_PLL_UPDT) PLL Setting Update (write-only) Mask */
#define PMC_PLL_UPDT_UPDATE(value)            (PMC_PLL_UPDT_UPDATE_Msk & ((value) << PMC_PLL_UPDT_UPDATE_Pos))
#define   PMC_PLL_UPDT_UPDATE_0_Val           _U_(0x0)                                             /**< (PMC_PLL_UPDT) No effect.  */
#define   PMC_PLL_UPDT_UPDATE_1_Val           _U_(0x1)                                             /**< (PMC_PLL_UPDT) The PLL configuration written in PMC_PLL_CTRL0 and PMC_PLL_CTRL1 are applied to the PLL defined by the last ID written in the PMC_PLL_CTRL0 register.  */
#define PMC_PLL_UPDT_UPDATE_0                 (PMC_PLL_UPDT_UPDATE_0_Val << PMC_PLL_UPDT_UPDATE_Pos) /**< (PMC_PLL_UPDT) No effect. Position  */
#define PMC_PLL_UPDT_UPDATE_1                 (PMC_PLL_UPDT_UPDATE_1_Val << PMC_PLL_UPDT_UPDATE_Pos) /**< (PMC_PLL_UPDT) The PLL configuration written in PMC_PLL_CTRL0 and PMC_PLL_CTRL1 are applied to the PLL defined by the last ID written in the PMC_PLL_CTRL0 register. Position  */
#define PMC_PLL_UPDT_STUPTIM_Pos              _U_(16)                                              /**< (PMC_PLL_UPDT) Start-up Time Position */
#define PMC_PLL_UPDT_STUPTIM_Msk              (_U_(0x3F) << PMC_PLL_UPDT_STUPTIM_Pos)              /**< (PMC_PLL_UPDT) Start-up Time Mask */
#define PMC_PLL_UPDT_STUPTIM(value)           (PMC_PLL_UPDT_STUPTIM_Msk & ((value) << PMC_PLL_UPDT_STUPTIM_Pos))
#define   PMC_PLL_UPDT_STUPTIM_0_Val          _U_(0x0)                                             /**< (PMC_PLL_UPDT) Only the lock of the PLL is considered to know the lock status of the PLL. If the lock of the PLL is not enabled, the lock never rises.  */
#define PMC_PLL_UPDT_STUPTIM_0                (PMC_PLL_UPDT_STUPTIM_0_Val << PMC_PLL_UPDT_STUPTIM_Pos) /**< (PMC_PLL_UPDT) Only the lock of the PLL is considered to know the lock status of the PLL. If the lock of the PLL is not enabled, the lock never rises. Position  */
#define PMC_PLL_UPDT_Msk                      _U_(0x003F010F)                                      /**< (PMC_PLL_UPDT) Register Mask  */


/* -------- CKGR_MOR : (PMC Offset: 0x20) (R/W 32) Main Oscillator Register -------- */
#define CKGR_MOR_RESETVALUE                   _U_(0x08)                                            /**<  (CKGR_MOR) Main Oscillator Register  Reset Value */

#define CKGR_MOR_MOSCXTEN_Pos                 _U_(0)                                               /**< (CKGR_MOR) Main Crystal Oscillator Enable Position */
#define CKGR_MOR_MOSCXTEN_Msk                 (_U_(0x1) << CKGR_MOR_MOSCXTEN_Pos)                  /**< (CKGR_MOR) Main Crystal Oscillator Enable Mask */
#define CKGR_MOR_MOSCXTEN(value)              (CKGR_MOR_MOSCXTEN_Msk & ((value) << CKGR_MOR_MOSCXTEN_Pos))
#define   CKGR_MOR_MOSCXTEN_0_Val             _U_(0x0)                                             /**< (CKGR_MOR) The main crystal oscillator is disabled.  */
#define   CKGR_MOR_MOSCXTEN_1_Val             _U_(0x1)                                             /**< (CKGR_MOR) The main crystal oscillator is enabled or in bypass.  */
#define CKGR_MOR_MOSCXTEN_0                   (CKGR_MOR_MOSCXTEN_0_Val << CKGR_MOR_MOSCXTEN_Pos)   /**< (CKGR_MOR) The main crystal oscillator is disabled. Position  */
#define CKGR_MOR_MOSCXTEN_1                   (CKGR_MOR_MOSCXTEN_1_Val << CKGR_MOR_MOSCXTEN_Pos)   /**< (CKGR_MOR) The main crystal oscillator is enabled or in bypass. Position  */
#define CKGR_MOR_ULP1_Pos                     _U_(2)                                               /**< (CKGR_MOR) ULP Mode 1 Command (write-only) Position */
#define CKGR_MOR_ULP1_Msk                     (_U_(0x1) << CKGR_MOR_ULP1_Pos)                      /**< (CKGR_MOR) ULP Mode 1 Command (write-only) Mask */
#define CKGR_MOR_ULP1(value)                  (CKGR_MOR_ULP1_Msk & ((value) << CKGR_MOR_ULP1_Pos))
#define   CKGR_MOR_ULP1_0_Val                 _U_(0x0)                                             /**< (CKGR_MOR) No effect.  */
#define   CKGR_MOR_ULP1_1_Val                 _U_(0x1)                                             /**< (CKGR_MOR) Puts the device in ULP mode 1.  */
#define CKGR_MOR_ULP1_0                       (CKGR_MOR_ULP1_0_Val << CKGR_MOR_ULP1_Pos)           /**< (CKGR_MOR) No effect. Position  */
#define CKGR_MOR_ULP1_1                       (CKGR_MOR_ULP1_1_Val << CKGR_MOR_ULP1_Pos)           /**< (CKGR_MOR) Puts the device in ULP mode 1. Position  */
#define CKGR_MOR_MOSCRCEN_Pos                 _U_(3)                                               /**< (CKGR_MOR) Main RC Oscillator Enable Position */
#define CKGR_MOR_MOSCRCEN_Msk                 (_U_(0x1) << CKGR_MOR_MOSCRCEN_Pos)                  /**< (CKGR_MOR) Main RC Oscillator Enable Mask */
#define CKGR_MOR_MOSCRCEN(value)              (CKGR_MOR_MOSCRCEN_Msk & ((value) << CKGR_MOR_MOSCRCEN_Pos))
#define   CKGR_MOR_MOSCRCEN_0_Val             _U_(0x0)                                             /**< (CKGR_MOR) The main RC oscillator is disabled.  */
#define   CKGR_MOR_MOSCRCEN_1_Val             _U_(0x1)                                             /**< (CKGR_MOR) The main RC oscillator is enabled.  */
#define CKGR_MOR_MOSCRCEN_0                   (CKGR_MOR_MOSCRCEN_0_Val << CKGR_MOR_MOSCRCEN_Pos)   /**< (CKGR_MOR) The main RC oscillator is disabled. Position  */
#define CKGR_MOR_MOSCRCEN_1                   (CKGR_MOR_MOSCRCEN_1_Val << CKGR_MOR_MOSCRCEN_Pos)   /**< (CKGR_MOR) The main RC oscillator is enabled. Position  */
#define CKGR_MOR_ULP2_Pos                     _U_(7)                                               /**< (CKGR_MOR) ULP Mode 2 Command (write-only) Position */
#define CKGR_MOR_ULP2_Msk                     (_U_(0x1) << CKGR_MOR_ULP2_Pos)                      /**< (CKGR_MOR) ULP Mode 2 Command (write-only) Mask */
#define CKGR_MOR_ULP2(value)                  (CKGR_MOR_ULP2_Msk & ((value) << CKGR_MOR_ULP2_Pos))
#define   CKGR_MOR_ULP2_0_Val                 _U_(0x0)                                             /**< (CKGR_MOR) No effect.  */
#define   CKGR_MOR_ULP2_1_Val                 _U_(0x1)                                             /**< (CKGR_MOR) Enables the device to enter ULP mode 2. ULP mode 2 is entered when the processor WFE instruction is executed.  */
#define CKGR_MOR_ULP2_0                       (CKGR_MOR_ULP2_0_Val << CKGR_MOR_ULP2_Pos)           /**< (CKGR_MOR) No effect. Position  */
#define CKGR_MOR_ULP2_1                       (CKGR_MOR_ULP2_1_Val << CKGR_MOR_ULP2_Pos)           /**< (CKGR_MOR) Enables the device to enter ULP mode 2. ULP mode 2 is entered when the processor WFE instruction is executed. Position  */
#define CKGR_MOR_MOSCXTST_Pos                 _U_(8)                                               /**< (CKGR_MOR) Main Crystal Oscillator Start-up Time Position */
#define CKGR_MOR_MOSCXTST_Msk                 (_U_(0xFF) << CKGR_MOR_MOSCXTST_Pos)                 /**< (CKGR_MOR) Main Crystal Oscillator Start-up Time Mask */
#define CKGR_MOR_MOSCXTST(value)              (CKGR_MOR_MOSCXTST_Msk & ((value) << CKGR_MOR_MOSCXTST_Pos))
#define CKGR_MOR_KEY_Pos                      _U_(16)                                              /**< (CKGR_MOR) Write Access Password Position */
#define CKGR_MOR_KEY_Msk                      (_U_(0xFF) << CKGR_MOR_KEY_Pos)                      /**< (CKGR_MOR) Write Access Password Mask */
#define CKGR_MOR_KEY(value)                   (CKGR_MOR_KEY_Msk & ((value) << CKGR_MOR_KEY_Pos))  
#define   CKGR_MOR_KEY_PASSWD_Val             _U_(0x37)                                            /**< (CKGR_MOR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define CKGR_MOR_KEY_PASSWD                   (CKGR_MOR_KEY_PASSWD_Val << CKGR_MOR_KEY_Pos)        /**< (CKGR_MOR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define CKGR_MOR_MOSCSEL_Pos                  _U_(24)                                              /**< (CKGR_MOR) Main Clock Oscillator Selection Position */
#define CKGR_MOR_MOSCSEL_Msk                  (_U_(0x1) << CKGR_MOR_MOSCSEL_Pos)                   /**< (CKGR_MOR) Main Clock Oscillator Selection Mask */
#define CKGR_MOR_MOSCSEL(value)               (CKGR_MOR_MOSCSEL_Msk & ((value) << CKGR_MOR_MOSCSEL_Pos))
#define   CKGR_MOR_MOSCSEL_RC_Val             _U_(0x0)                                             /**< (CKGR_MOR) The main RC oscillator is selected.  */
#define   CKGR_MOR_MOSCSEL_XT_Val             _U_(0x1)                                             /**< (CKGR_MOR) The main crystal oscillator is selected.  */
#define CKGR_MOR_MOSCSEL_RC                   (CKGR_MOR_MOSCSEL_RC_Val << CKGR_MOR_MOSCSEL_Pos)    /**< (CKGR_MOR) The main RC oscillator is selected. Position  */
#define CKGR_MOR_MOSCSEL_XT                   (CKGR_MOR_MOSCSEL_XT_Val << CKGR_MOR_MOSCSEL_Pos)    /**< (CKGR_MOR) The main crystal oscillator is selected. Position  */
#define CKGR_MOR_CFDEN_Pos                    _U_(25)                                              /**< (CKGR_MOR) Clock Failure Detector Enable Position */
#define CKGR_MOR_CFDEN_Msk                    (_U_(0x1) << CKGR_MOR_CFDEN_Pos)                     /**< (CKGR_MOR) Clock Failure Detector Enable Mask */
#define CKGR_MOR_CFDEN(value)                 (CKGR_MOR_CFDEN_Msk & ((value) << CKGR_MOR_CFDEN_Pos))
#define   CKGR_MOR_CFDEN_0_Val                _U_(0x0)                                             /**< (CKGR_MOR) The clock failure detector is disabled.  */
#define   CKGR_MOR_CFDEN_1_Val                _U_(0x1)                                             /**< (CKGR_MOR) The clock failure detector is enabled.  */
#define CKGR_MOR_CFDEN_0                      (CKGR_MOR_CFDEN_0_Val << CKGR_MOR_CFDEN_Pos)         /**< (CKGR_MOR) The clock failure detector is disabled. Position  */
#define CKGR_MOR_CFDEN_1                      (CKGR_MOR_CFDEN_1_Val << CKGR_MOR_CFDEN_Pos)         /**< (CKGR_MOR) The clock failure detector is enabled. Position  */
#define CKGR_MOR_XT32KFME_Pos                 _U_(26)                                              /**< (CKGR_MOR) 32.768 kHz Crystal Oscillator Frequency Monitoring Enable Position */
#define CKGR_MOR_XT32KFME_Msk                 (_U_(0x1) << CKGR_MOR_XT32KFME_Pos)                  /**< (CKGR_MOR) 32.768 kHz Crystal Oscillator Frequency Monitoring Enable Mask */
#define CKGR_MOR_XT32KFME(value)              (CKGR_MOR_XT32KFME_Msk & ((value) << CKGR_MOR_XT32KFME_Pos))
#define   CKGR_MOR_XT32KFME_0_Val             _U_(0x0)                                             /**< (CKGR_MOR) The 32.768 kHz crystal oscillator frequency monitoring is disabled.  */
#define   CKGR_MOR_XT32KFME_1_Val             _U_(0x1)                                             /**< (CKGR_MOR) The 32.768 kHz crystal oscillator frequency monitoring is enabled.  */
#define CKGR_MOR_XT32KFME_0                   (CKGR_MOR_XT32KFME_0_Val << CKGR_MOR_XT32KFME_Pos)   /**< (CKGR_MOR) The 32.768 kHz crystal oscillator frequency monitoring is disabled. Position  */
#define CKGR_MOR_XT32KFME_1                   (CKGR_MOR_XT32KFME_1_Val << CKGR_MOR_XT32KFME_Pos)   /**< (CKGR_MOR) The 32.768 kHz crystal oscillator frequency monitoring is enabled. Position  */
#define CKGR_MOR_BMCKRST_Pos                  _U_(27)                                              /**< (CKGR_MOR) Bad MCK0 Clock Reset Enable Position */
#define CKGR_MOR_BMCKRST_Msk                  (_U_(0x1) << CKGR_MOR_BMCKRST_Pos)                   /**< (CKGR_MOR) Bad MCK0 Clock Reset Enable Mask */
#define CKGR_MOR_BMCKRST(value)               (CKGR_MOR_BMCKRST_Msk & ((value) << CKGR_MOR_BMCKRST_Pos))
#define   CKGR_MOR_BMCKRST_0_Val              _U_(0x0)                                             /**< (CKGR_MOR) An MCK0 clock failure detection cannot reset the system.  */
#define   CKGR_MOR_BMCKRST_1_Val              _U_(0x1)                                             /**< (CKGR_MOR) An MCK0 clock failure detection can reset the system if the reset controller is configured accordingly.  */
#define CKGR_MOR_BMCKRST_0                    (CKGR_MOR_BMCKRST_0_Val << CKGR_MOR_BMCKRST_Pos)     /**< (CKGR_MOR) An MCK0 clock failure detection cannot reset the system. Position  */
#define CKGR_MOR_BMCKRST_1                    (CKGR_MOR_BMCKRST_1_Val << CKGR_MOR_BMCKRST_Pos)     /**< (CKGR_MOR) An MCK0 clock failure detection can reset the system if the reset controller is configured accordingly. Position  */
#define CKGR_MOR_BMCKIC_Pos                   _U_(28)                                              /**< (CKGR_MOR) Bad MCK0 Clock Interrupt Position */
#define CKGR_MOR_BMCKIC_Msk                   (_U_(0x1) << CKGR_MOR_BMCKIC_Pos)                    /**< (CKGR_MOR) Bad MCK0 Clock Interrupt Mask */
#define CKGR_MOR_BMCKIC(value)                (CKGR_MOR_BMCKIC_Msk & ((value) << CKGR_MOR_BMCKIC_Pos))
#define   CKGR_MOR_BMCKIC_0_Val               _U_(0x0)                                             /**< (CKGR_MOR) An MCK0 clock failure has no effect on the Interrupt Controller.  */
#define   CKGR_MOR_BMCKIC_1_Val               _U_(0x1)                                             /**< (CKGR_MOR) An MCK0 clock failure detection sends an interrupt signal to the Interrupt Controller.  */
#define CKGR_MOR_BMCKIC_0                     (CKGR_MOR_BMCKIC_0_Val << CKGR_MOR_BMCKIC_Pos)       /**< (CKGR_MOR) An MCK0 clock failure has no effect on the Interrupt Controller. Position  */
#define CKGR_MOR_BMCKIC_1                     (CKGR_MOR_BMCKIC_1_Val << CKGR_MOR_BMCKIC_Pos)       /**< (CKGR_MOR) An MCK0 clock failure detection sends an interrupt signal to the Interrupt Controller. Position  */
#define CKGR_MOR_AUTOMAINSW_Pos               _U_(29)                                              /**< (CKGR_MOR) Automatic Main Clock Source Switching Position */
#define CKGR_MOR_AUTOMAINSW_Msk               (_U_(0x1) << CKGR_MOR_AUTOMAINSW_Pos)                /**< (CKGR_MOR) Automatic Main Clock Source Switching Mask */
#define CKGR_MOR_AUTOMAINSW(value)            (CKGR_MOR_AUTOMAINSW_Msk & ((value) << CKGR_MOR_AUTOMAINSW_Pos))
#define   CKGR_MOR_AUTOMAINSW_0_Val           _U_(0x0)                                             /**< (CKGR_MOR) A main crystal oscillator failure detection has no effect on the main clock source selection.  */
#define   CKGR_MOR_AUTOMAINSW_1_Val           _U_(0x1)                                             /**< (CKGR_MOR) If a main crystal oscillator failure is detected, the main clock source selection automatically switches to the main RC.  */
#define CKGR_MOR_AUTOMAINSW_0                 (CKGR_MOR_AUTOMAINSW_0_Val << CKGR_MOR_AUTOMAINSW_Pos) /**< (CKGR_MOR) A main crystal oscillator failure detection has no effect on the main clock source selection. Position  */
#define CKGR_MOR_AUTOMAINSW_1                 (CKGR_MOR_AUTOMAINSW_1_Val << CKGR_MOR_AUTOMAINSW_Pos) /**< (CKGR_MOR) If a main crystal oscillator failure is detected, the main clock source selection automatically switches to the main RC. Position  */
#define CKGR_MOR_AUTOCPUSW_Pos                _U_(30)                                              /**< (CKGR_MOR) Automatic Processor Clock Source Switching Position */
#define CKGR_MOR_AUTOCPUSW_Msk                (_U_(0x1) << CKGR_MOR_AUTOCPUSW_Pos)                 /**< (CKGR_MOR) Automatic Processor Clock Source Switching Mask */
#define CKGR_MOR_AUTOCPUSW(value)             (CKGR_MOR_AUTOCPUSW_Msk & ((value) << CKGR_MOR_AUTOCPUSW_Pos))
#define   CKGR_MOR_AUTOCPUSW_0_Val            _U_(0x0)                                             /**< (CKGR_MOR) A main crystal oscillator failure detection has no effect on the processor clock source selection.  */
#define   CKGR_MOR_AUTOCPUSW_1_Val            _U_(0x1)                                             /**< (CKGR_MOR) If a main crystal oscillator failure is detected, the processor clock source selection automatically switches to the main clock.  */
#define CKGR_MOR_AUTOCPUSW_0                  (CKGR_MOR_AUTOCPUSW_0_Val << CKGR_MOR_AUTOCPUSW_Pos) /**< (CKGR_MOR) A main crystal oscillator failure detection has no effect on the processor clock source selection. Position  */
#define CKGR_MOR_AUTOCPUSW_1                  (CKGR_MOR_AUTOCPUSW_1_Val << CKGR_MOR_AUTOCPUSW_Pos) /**< (CKGR_MOR) If a main crystal oscillator failure is detected, the processor clock source selection automatically switches to the main clock. Position  */
#define CKGR_MOR_Msk                          _U_(0x7FFFFF8D)                                      /**< (CKGR_MOR) Register Mask  */


/* -------- CKGR_MCFR : (PMC Offset: 0x24) (R/W 32) Main Clock Frequency Register -------- */
#define CKGR_MCFR_RESETVALUE                  _U_(0x00)                                            /**<  (CKGR_MCFR) Main Clock Frequency Register  Reset Value */

#define CKGR_MCFR_MAINF_Pos                   _U_(0)                                               /**< (CKGR_MCFR) Main Clock Frequency Position */
#define CKGR_MCFR_MAINF_Msk                   (_U_(0xFFFF) << CKGR_MCFR_MAINF_Pos)                 /**< (CKGR_MCFR) Main Clock Frequency Mask */
#define CKGR_MCFR_MAINF(value)                (CKGR_MCFR_MAINF_Msk & ((value) << CKGR_MCFR_MAINF_Pos))
#define CKGR_MCFR_MAINFRDY_Pos                _U_(16)                                              /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Position */
#define CKGR_MCFR_MAINFRDY_Msk                (_U_(0x1) << CKGR_MCFR_MAINFRDY_Pos)                 /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Mask */
#define CKGR_MCFR_MAINFRDY(value)             (CKGR_MCFR_MAINFRDY_Msk & ((value) << CKGR_MCFR_MAINFRDY_Pos))
#define   CKGR_MCFR_MAINFRDY_0_Val            _U_(0x0)                                             /**< (CKGR_MCFR) MAINF value is not valid or the measured oscillator is disabled or a measure has just been started by means of RCMEAS.  */
#define   CKGR_MCFR_MAINFRDY_1_Val            _U_(0x1)                                             /**< (CKGR_MCFR) The measured oscillator has been enabled previously and MAINF value is available.  */
#define CKGR_MCFR_MAINFRDY_0                  (CKGR_MCFR_MAINFRDY_0_Val << CKGR_MCFR_MAINFRDY_Pos) /**< (CKGR_MCFR) MAINF value is not valid or the measured oscillator is disabled or a measure has just been started by means of RCMEAS. Position  */
#define CKGR_MCFR_MAINFRDY_1                  (CKGR_MCFR_MAINFRDY_1_Val << CKGR_MCFR_MAINFRDY_Pos) /**< (CKGR_MCFR) The measured oscillator has been enabled previously and MAINF value is available. Position  */
#define CKGR_MCFR_RCMEAS_Pos                  _U_(20)                                              /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Position */
#define CKGR_MCFR_RCMEAS_Msk                  (_U_(0x1) << CKGR_MCFR_RCMEAS_Pos)                   /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Mask */
#define CKGR_MCFR_RCMEAS(value)               (CKGR_MCFR_RCMEAS_Msk & ((value) << CKGR_MCFR_RCMEAS_Pos))
#define   CKGR_MCFR_RCMEAS_0_Val              _U_(0x0)                                             /**< (CKGR_MCFR) No effect.  */
#define   CKGR_MCFR_RCMEAS_1_Val              _U_(0x1)                                             /**< (CKGR_MCFR) Restarts measuring of the frequency of MAINCK. MAINF carries the new frequency as soon as a low-to-high transition occurs on the MAINFRDY flag.  */
#define CKGR_MCFR_RCMEAS_0                    (CKGR_MCFR_RCMEAS_0_Val << CKGR_MCFR_RCMEAS_Pos)     /**< (CKGR_MCFR) No effect. Position  */
#define CKGR_MCFR_RCMEAS_1                    (CKGR_MCFR_RCMEAS_1_Val << CKGR_MCFR_RCMEAS_Pos)     /**< (CKGR_MCFR) Restarts measuring of the frequency of MAINCK. MAINF carries the new frequency as soon as a low-to-high transition occurs on the MAINFRDY flag. Position  */
#define CKGR_MCFR_CCSS_Pos                    _U_(24)                                              /**< (CKGR_MCFR) Counter Clock Source Selection Position */
#define CKGR_MCFR_CCSS_Msk                    (_U_(0x1) << CKGR_MCFR_CCSS_Pos)                     /**< (CKGR_MCFR) Counter Clock Source Selection Mask */
#define CKGR_MCFR_CCSS(value)                 (CKGR_MCFR_CCSS_Msk & ((value) << CKGR_MCFR_CCSS_Pos))
#define   CKGR_MCFR_CCSS_0_Val                _U_(0x0)                                             /**< (CKGR_MCFR) The measured clock of the MAINF counter is the main RC oscillator.  */
#define   CKGR_MCFR_CCSS_1_Val                _U_(0x1)                                             /**< (CKGR_MCFR) The measured clock of the MAINF counter is the main crystal oscillator.  */
#define CKGR_MCFR_CCSS_0                      (CKGR_MCFR_CCSS_0_Val << CKGR_MCFR_CCSS_Pos)         /**< (CKGR_MCFR) The measured clock of the MAINF counter is the main RC oscillator. Position  */
#define CKGR_MCFR_CCSS_1                      (CKGR_MCFR_CCSS_1_Val << CKGR_MCFR_CCSS_Pos)         /**< (CKGR_MCFR) The measured clock of the MAINF counter is the main crystal oscillator. Position  */
#define CKGR_MCFR_Msk                         _U_(0x0111FFFF)                                      /**< (CKGR_MCFR) Register Mask  */


/* -------- PMC_CPU_CKR : (PMC Offset: 0x28) (R/W 32) CPU Clock Register -------- */
#define PMC_CPU_CKR_RESETVALUE                _U_(0x01)                                            /**<  (PMC_CPU_CKR) CPU Clock Register  Reset Value */

#define PMC_CPU_CKR_CSS_Pos                   _U_(0)                                               /**< (PMC_CPU_CKR) MCK0 Source Selection Position */
#define PMC_CPU_CKR_CSS_Msk                   (_U_(0x3) << PMC_CPU_CKR_CSS_Pos)                    /**< (PMC_CPU_CKR) MCK0 Source Selection Mask */
#define PMC_CPU_CKR_CSS(value)                (PMC_CPU_CKR_CSS_Msk & ((value) << PMC_CPU_CKR_CSS_Pos))
#define   PMC_CPU_CKR_CSS_SLOW_CLK_Val        _U_(0x0)                                             /**< (PMC_CPU_CKR) MD_SLCK is selected  */
#define   PMC_CPU_CKR_CSS_MAIN_CLK_Val        _U_(0x1)                                             /**< (PMC_CPU_CKR) MAINCK is selected  */
#define   PMC_CPU_CKR_CSS_CPUPLLCK_Val        _U_(0x2)                                             /**< (PMC_CPU_CKR) CPUPLLCK is selected  */
#define   PMC_CPU_CKR_CSS_SYSPLLCK_Val        _U_(0x3)                                             /**< (PMC_CPU_CKR) SYSPLLCK is selected  */
#define PMC_CPU_CKR_CSS_SLOW_CLK              (PMC_CPU_CKR_CSS_SLOW_CLK_Val << PMC_CPU_CKR_CSS_Pos) /**< (PMC_CPU_CKR) MD_SLCK is selected Position  */
#define PMC_CPU_CKR_CSS_MAIN_CLK              (PMC_CPU_CKR_CSS_MAIN_CLK_Val << PMC_CPU_CKR_CSS_Pos) /**< (PMC_CPU_CKR) MAINCK is selected Position  */
#define PMC_CPU_CKR_CSS_CPUPLLCK              (PMC_CPU_CKR_CSS_CPUPLLCK_Val << PMC_CPU_CKR_CSS_Pos) /**< (PMC_CPU_CKR) CPUPLLCK is selected Position  */
#define PMC_CPU_CKR_CSS_SYSPLLCK              (PMC_CPU_CKR_CSS_SYSPLLCK_Val << PMC_CPU_CKR_CSS_Pos) /**< (PMC_CPU_CKR) SYSPLLCK is selected Position  */
#define PMC_CPU_CKR_PRES_Pos                  _U_(4)                                               /**< (PMC_CPU_CKR) Processor Clock Prescaler Position */
#define PMC_CPU_CKR_PRES_Msk                  (_U_(0x7) << PMC_CPU_CKR_PRES_Pos)                   /**< (PMC_CPU_CKR) Processor Clock Prescaler Mask */
#define PMC_CPU_CKR_PRES(value)               (PMC_CPU_CKR_PRES_Msk & ((value) << PMC_CPU_CKR_PRES_Pos))
#define   PMC_CPU_CKR_PRES_CLK_1_Val          _U_(0x0)                                             /**< (PMC_CPU_CKR) Selected clock  */
#define   PMC_CPU_CKR_PRES_CLK_2_Val          _U_(0x1)                                             /**< (PMC_CPU_CKR) Selected clock divided by 2  */
#define   PMC_CPU_CKR_PRES_CLK_4_Val          _U_(0x2)                                             /**< (PMC_CPU_CKR) Selected clock divided by 4  */
#define   PMC_CPU_CKR_PRES_CLK_8_Val          _U_(0x3)                                             /**< (PMC_CPU_CKR) Selected clock divided by 8  */
#define   PMC_CPU_CKR_PRES_CLK_16_Val         _U_(0x4)                                             /**< (PMC_CPU_CKR) Selected clock divided by 16  */
#define   PMC_CPU_CKR_PRES_CLK_32_Val         _U_(0x5)                                             /**< (PMC_CPU_CKR) Selected clock divided by 32  */
#define   PMC_CPU_CKR_PRES_CLK_64_Val         _U_(0x6)                                             /**< (PMC_CPU_CKR) Selected clock divided by 64  */
#define   PMC_CPU_CKR_PRES_CLK_3_Val          _U_(0x7)                                             /**< (PMC_CPU_CKR) Selected clock divided by 3  */
#define PMC_CPU_CKR_PRES_CLK_1                (PMC_CPU_CKR_PRES_CLK_1_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock Position  */
#define PMC_CPU_CKR_PRES_CLK_2                (PMC_CPU_CKR_PRES_CLK_2_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 2 Position  */
#define PMC_CPU_CKR_PRES_CLK_4                (PMC_CPU_CKR_PRES_CLK_4_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 4 Position  */
#define PMC_CPU_CKR_PRES_CLK_8                (PMC_CPU_CKR_PRES_CLK_8_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 8 Position  */
#define PMC_CPU_CKR_PRES_CLK_16               (PMC_CPU_CKR_PRES_CLK_16_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 16 Position  */
#define PMC_CPU_CKR_PRES_CLK_32               (PMC_CPU_CKR_PRES_CLK_32_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 32 Position  */
#define PMC_CPU_CKR_PRES_CLK_64               (PMC_CPU_CKR_PRES_CLK_64_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 64 Position  */
#define PMC_CPU_CKR_PRES_CLK_3                (PMC_CPU_CKR_PRES_CLK_3_Val << PMC_CPU_CKR_PRES_Pos) /**< (PMC_CPU_CKR) Selected clock divided by 3 Position  */
#define PMC_CPU_CKR_MDIV_Pos                  _U_(8)                                               /**< (PMC_CPU_CKR) MCK0 Division Position */
#define PMC_CPU_CKR_MDIV_Msk                  (_U_(0x7) << PMC_CPU_CKR_MDIV_Pos)                   /**< (PMC_CPU_CKR) MCK0 Division Mask */
#define PMC_CPU_CKR_MDIV(value)               (PMC_CPU_CKR_MDIV_Msk & ((value) << PMC_CPU_CKR_MDIV_Pos))
#define   PMC_CPU_CKR_MDIV_EQ_PCK_Val         _U_(0x0)                                             /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 1.  */
#define   PMC_CPU_CKR_MDIV_PCK_DIV2_Val       _U_(0x1)                                             /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 2.  */
#define   PMC_CPU_CKR_MDIV_PCK_DIV4_Val       _U_(0x2)                                             /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 4.  */
#define   PMC_CPU_CKR_MDIV_PCK_DIV3_Val       _U_(0x3)                                             /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 3.  */
#define   PMC_CPU_CKR_MDIV_PCK_DIV5_Val       _U_(0x4)                                             /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 5.  */
#define PMC_CPU_CKR_MDIV_EQ_PCK               (PMC_CPU_CKR_MDIV_EQ_PCK_Val << PMC_CPU_CKR_MDIV_Pos) /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 1. Position  */
#define PMC_CPU_CKR_MDIV_PCK_DIV2             (PMC_CPU_CKR_MDIV_PCK_DIV2_Val << PMC_CPU_CKR_MDIV_Pos) /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 2. Position  */
#define PMC_CPU_CKR_MDIV_PCK_DIV4             (PMC_CPU_CKR_MDIV_PCK_DIV4_Val << PMC_CPU_CKR_MDIV_Pos) /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 4. Position  */
#define PMC_CPU_CKR_MDIV_PCK_DIV3             (PMC_CPU_CKR_MDIV_PCK_DIV3_Val << PMC_CPU_CKR_MDIV_Pos) /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 3. Position  */
#define PMC_CPU_CKR_MDIV_PCK_DIV5             (PMC_CPU_CKR_MDIV_PCK_DIV5_Val << PMC_CPU_CKR_MDIV_Pos) /**< (PMC_CPU_CKR) MCK0 is FCLK divided by 5. Position  */
#define PMC_CPU_CKR_Msk                       _U_(0x00000773)                                      /**< (PMC_CPU_CKR) Register Mask  */


/* -------- PMC_CPU_RATIO : (PMC Offset: 0x2C) (R/W 32) CPU Clock Ratio Register -------- */
#define PMC_CPU_RATIO_RESETVALUE              _U_(0x0F)                                            /**<  (PMC_CPU_RATIO) CPU Clock Ratio Register  Reset Value */

#define PMC_CPU_RATIO_RATIO_Pos               _U_(0)                                               /**< (PMC_CPU_RATIO) CPU Clock Ratio Position */
#define PMC_CPU_RATIO_RATIO_Msk               (_U_(0xF) << PMC_CPU_RATIO_RATIO_Pos)                /**< (PMC_CPU_RATIO) CPU Clock Ratio Mask */
#define PMC_CPU_RATIO_RATIO(value)            (PMC_CPU_RATIO_RATIO_Msk & ((value) << PMC_CPU_RATIO_RATIO_Pos))
#define PMC_CPU_RATIO_Msk                     _U_(0x0000000F)                                      /**< (PMC_CPU_RATIO) Register Mask  */


/* -------- PMC_MCR : (PMC Offset: 0x30) (R/W 32) Master Clock Register -------- */
#define PMC_MCR_RESETVALUE                    _U_(0x00)                                            /**<  (PMC_MCR) Master Clock Register  Reset Value */

#define PMC_MCR_ID_Pos                        _U_(0)                                               /**< (PMC_MCR) Master Clock Index Position */
#define PMC_MCR_ID_Msk                        (_U_(0xF) << PMC_MCR_ID_Pos)                         /**< (PMC_MCR) Master Clock Index Mask */
#define PMC_MCR_ID(value)                     (PMC_MCR_ID_Msk & ((value) << PMC_MCR_ID_Pos))      
#define PMC_MCR_CMD_Pos                       _U_(7)                                               /**< (PMC_MCR) Command Position */
#define PMC_MCR_CMD_Msk                       (_U_(0x1) << PMC_MCR_CMD_Pos)                        /**< (PMC_MCR) Command Mask */
#define PMC_MCR_CMD(value)                    (PMC_MCR_CMD_Msk & ((value) << PMC_MCR_CMD_Pos))    
#define   PMC_MCR_CMD_0_Val                   _U_(0x0)                                             /**< (PMC_MCR) Read mode.  */
#define   PMC_MCR_CMD_1_Val                   _U_(0x1)                                             /**< (PMC_MCR) Write mode.  */
#define PMC_MCR_CMD_0                         (PMC_MCR_CMD_0_Val << PMC_MCR_CMD_Pos)               /**< (PMC_MCR) Read mode. Position  */
#define PMC_MCR_CMD_1                         (PMC_MCR_CMD_1_Val << PMC_MCR_CMD_Pos)               /**< (PMC_MCR) Write mode. Position  */
#define PMC_MCR_DIV_Pos                       _U_(8)                                               /**< (PMC_MCR) Divisor Value Position */
#define PMC_MCR_DIV_Msk                       (_U_(0x7) << PMC_MCR_DIV_Pos)                        /**< (PMC_MCR) Divisor Value Mask */
#define PMC_MCR_DIV(value)                    (PMC_MCR_DIV_Msk & ((value) << PMC_MCR_DIV_Pos))    
#define   PMC_MCR_DIV_MASTER_DIV1_Val         _U_(0x0)                                             /**< (PMC_MCR) Selected clock divided by 1  */
#define   PMC_MCR_DIV_MASTER_DIV2_Val         _U_(0x1)                                             /**< (PMC_MCR) Selected clock divided by 2  */
#define   PMC_MCR_DIV_MASTER_DIV4_Val         _U_(0x2)                                             /**< (PMC_MCR) Selected clock divided by 4  */
#define   PMC_MCR_DIV_MASTER_DIV8_Val         _U_(0x3)                                             /**< (PMC_MCR) Selected clock divided by 8  */
#define   PMC_MCR_DIV_MASTER_DIV16_Val        _U_(0x4)                                             /**< (PMC_MCR) Selected clock divided by 16  */
#define   PMC_MCR_DIV_MASTER_DIV32_Val        _U_(0x5)                                             /**< (PMC_MCR) Selected clock divided by 32  */
#define   PMC_MCR_DIV_MASTER_DIV64_Val        _U_(0x6)                                             /**< (PMC_MCR) Selected clock divided by 64  */
#define   PMC_MCR_DIV_MASTER_DIV3_Val         _U_(0x7)                                             /**< (PMC_MCR) Selected clock divided by 3  */
#define PMC_MCR_DIV_MASTER_DIV1               (PMC_MCR_DIV_MASTER_DIV1_Val << PMC_MCR_DIV_Pos)     /**< (PMC_MCR) Selected clock divided by 1 Position  */
#define PMC_MCR_DIV_MASTER_DIV2               (PMC_MCR_DIV_MASTER_DIV2_Val << PMC_MCR_DIV_Pos)     /**< (PMC_MCR) Selected clock divided by 2 Position  */
#define PMC_MCR_DIV_MASTER_DIV4               (PMC_MCR_DIV_MASTER_DIV4_Val << PMC_MCR_DIV_Pos)     /**< (PMC_MCR) Selected clock divided by 4 Position  */
#define PMC_MCR_DIV_MASTER_DIV8               (PMC_MCR_DIV_MASTER_DIV8_Val << PMC_MCR_DIV_Pos)     /**< (PMC_MCR) Selected clock divided by 8 Position  */
#define PMC_MCR_DIV_MASTER_DIV16              (PMC_MCR_DIV_MASTER_DIV16_Val << PMC_MCR_DIV_Pos)    /**< (PMC_MCR) Selected clock divided by 16 Position  */
#define PMC_MCR_DIV_MASTER_DIV32              (PMC_MCR_DIV_MASTER_DIV32_Val << PMC_MCR_DIV_Pos)    /**< (PMC_MCR) Selected clock divided by 32 Position  */
#define PMC_MCR_DIV_MASTER_DIV64              (PMC_MCR_DIV_MASTER_DIV64_Val << PMC_MCR_DIV_Pos)    /**< (PMC_MCR) Selected clock divided by 64 Position  */
#define PMC_MCR_DIV_MASTER_DIV3               (PMC_MCR_DIV_MASTER_DIV3_Val << PMC_MCR_DIV_Pos)     /**< (PMC_MCR) Selected clock divided by 3 Position  */
#define PMC_MCR_CSS_Pos                       _U_(16)                                              /**< (PMC_MCR) Clock Source Selection Position */
#define PMC_MCR_CSS_Msk                       (_U_(0x1F) << PMC_MCR_CSS_Pos)                       /**< (PMC_MCR) Clock Source Selection Mask */
#define PMC_MCR_CSS(value)                    (PMC_MCR_CSS_Msk & ((value) << PMC_MCR_CSS_Pos))    
#define   PMC_MCR_CSS_MD_SLOW_CLK_Val         _U_(0x0)                                             /**< (PMC_MCR) MD_SLCK is selected  */
#define   PMC_MCR_CSS_TD_SLOW_CLOCK_Val       _U_(0x1)                                             /**< (PMC_MCR) TD_SLCK is selected  */
#define   PMC_MCR_CSS_MAINCK_Val              _U_(0x2)                                             /**< (PMC_MCR) MAINCK is selected  */
#define   PMC_MCR_CSS_MCK0_Val                _U_(0x3)                                             /**< (PMC_MCR) MCK0 is selected  */
#define   PMC_MCR_CSS_SYSPLL_Val              _U_(0x5)                                             /**< (PMC_MCR) SYSPLL is selected  */
#define   PMC_MCR_CSS_DDRPLL_Val              _U_(0x6)                                             /**< (PMC_MCR) DDRPLL is selected  */
#define   PMC_MCR_CSS_IMGPLL_Val              _U_(0x7)                                             /**< (PMC_MCR) IMGPLL is selected  */
#define   PMC_MCR_CSS_BAUDPLL_Val             _U_(0x8)                                             /**< (PMC_MCR) BAUDPLL is selected  */
#define   PMC_MCR_CSS_AUDIOPLL_Val            _U_(0x9)                                             /**< (PMC_MCR) AUDIOPLL is selected  */
#define   PMC_MCR_CSS_ETHPLL_Val              _U_(0xA)                                             /**< (PMC_MCR) ETHPLL is selected  */
#define PMC_MCR_CSS_MD_SLOW_CLK               (PMC_MCR_CSS_MD_SLOW_CLK_Val << PMC_MCR_CSS_Pos)     /**< (PMC_MCR) MD_SLCK is selected Position  */
#define PMC_MCR_CSS_TD_SLOW_CLOCK             (PMC_MCR_CSS_TD_SLOW_CLOCK_Val << PMC_MCR_CSS_Pos)   /**< (PMC_MCR) TD_SLCK is selected Position  */
#define PMC_MCR_CSS_MAINCK                    (PMC_MCR_CSS_MAINCK_Val << PMC_MCR_CSS_Pos)          /**< (PMC_MCR) MAINCK is selected Position  */
#define PMC_MCR_CSS_MCK0                      (PMC_MCR_CSS_MCK0_Val << PMC_MCR_CSS_Pos)            /**< (PMC_MCR) MCK0 is selected Position  */
#define PMC_MCR_CSS_SYSPLL                    (PMC_MCR_CSS_SYSPLL_Val << PMC_MCR_CSS_Pos)          /**< (PMC_MCR) SYSPLL is selected Position  */
#define PMC_MCR_CSS_DDRPLL                    (PMC_MCR_CSS_DDRPLL_Val << PMC_MCR_CSS_Pos)          /**< (PMC_MCR) DDRPLL is selected Position  */
#define PMC_MCR_CSS_IMGPLL                    (PMC_MCR_CSS_IMGPLL_Val << PMC_MCR_CSS_Pos)          /**< (PMC_MCR) IMGPLL is selected Position  */
#define PMC_MCR_CSS_BAUDPLL                   (PMC_MCR_CSS_BAUDPLL_Val << PMC_MCR_CSS_Pos)         /**< (PMC_MCR) BAUDPLL is selected Position  */
#define PMC_MCR_CSS_AUDIOPLL                  (PMC_MCR_CSS_AUDIOPLL_Val << PMC_MCR_CSS_Pos)        /**< (PMC_MCR) AUDIOPLL is selected Position  */
#define PMC_MCR_CSS_ETHPLL                    (PMC_MCR_CSS_ETHPLL_Val << PMC_MCR_CSS_Pos)          /**< (PMC_MCR) ETHPLL is selected Position  */
#define PMC_MCR_EN_Pos                        _U_(28)                                              /**< (PMC_MCR) Master Clock Enable Position */
#define PMC_MCR_EN_Msk                        (_U_(0x1) << PMC_MCR_EN_Pos)                         /**< (PMC_MCR) Master Clock Enable Mask */
#define PMC_MCR_EN(value)                     (PMC_MCR_EN_Msk & ((value) << PMC_MCR_EN_Pos))      
#define   PMC_MCR_EN_0_Val                    _U_(0x0)                                             /**< (PMC_MCR) The corresponding MCKx is disabled.  */
#define   PMC_MCR_EN_1_Val                    _U_(0x1)                                             /**< (PMC_MCR) The corresponding MCKx is enabled.  */
#define PMC_MCR_EN_0                          (PMC_MCR_EN_0_Val << PMC_MCR_EN_Pos)                 /**< (PMC_MCR) The corresponding MCKx is disabled. Position  */
#define PMC_MCR_EN_1                          (PMC_MCR_EN_1_Val << PMC_MCR_EN_Pos)                 /**< (PMC_MCR) The corresponding MCKx is enabled. Position  */
#define PMC_MCR_Msk                           _U_(0x101F078F)                                      /**< (PMC_MCR) Register Mask  */


/* -------- PMC_XTALF : (PMC Offset: 0x34) (R/W 32) Main XTAL Frequency Register -------- */
#define PMC_XTALF_RESETVALUE                  _U_(0x07)                                            /**<  (PMC_XTALF) Main XTAL Frequency Register  Reset Value */

#define PMC_XTALF_XTALF_Pos                   _U_(0)                                               /**< (PMC_XTALF) Crystal Frequency Position */
#define PMC_XTALF_XTALF_Msk                   (_U_(0x7) << PMC_XTALF_XTALF_Pos)                    /**< (PMC_XTALF) Crystal Frequency Mask */
#define PMC_XTALF_XTALF(value)                (PMC_XTALF_XTALF_Msk & ((value) << PMC_XTALF_XTALF_Pos))
#define   PMC_XTALF_XTALF_F16M_Val            _U_(0x0)                                             /**< (PMC_XTALF) The main crystal frequency is 16 MHz.  */
#define   PMC_XTALF_XTALF_F20M_Val            _U_(0x2)                                             /**< (PMC_XTALF) The main crystal frequency is 20 MHz.  */
#define   PMC_XTALF_XTALF_F24M_Val            _U_(0x3)                                             /**< (PMC_XTALF) The main crystal frequency is 24 MHz.  */
#define   PMC_XTALF_XTALF_F32M_Val            _U_(0x5)                                             /**< (PMC_XTALF) The main crystal frequency is 32 MHz.  */
#define PMC_XTALF_XTALF_F16M                  (PMC_XTALF_XTALF_F16M_Val << PMC_XTALF_XTALF_Pos)    /**< (PMC_XTALF) The main crystal frequency is 16 MHz. Position  */
#define PMC_XTALF_XTALF_F20M                  (PMC_XTALF_XTALF_F20M_Val << PMC_XTALF_XTALF_Pos)    /**< (PMC_XTALF) The main crystal frequency is 20 MHz. Position  */
#define PMC_XTALF_XTALF_F24M                  (PMC_XTALF_XTALF_F24M_Val << PMC_XTALF_XTALF_Pos)    /**< (PMC_XTALF) The main crystal frequency is 24 MHz. Position  */
#define PMC_XTALF_XTALF_F32M                  (PMC_XTALF_XTALF_F32M_Val << PMC_XTALF_XTALF_Pos)    /**< (PMC_XTALF) The main crystal frequency is 32 MHz. Position  */
#define PMC_XTALF_Msk                         _U_(0x00000007)                                      /**< (PMC_XTALF) Register Mask  */


/* -------- PMC_PCK : (PMC Offset: 0x40) (R/W 32) Programmable Clock Register x -------- */
#define PMC_PCK_RESETVALUE                    _U_(0x00)                                            /**<  (PMC_PCK) Programmable Clock Register x  Reset Value */

#define PMC_PCK_CSS_Pos                       _U_(0)                                               /**< (PMC_PCK) Programmable Clock Source Selection Position */
#define PMC_PCK_CSS_Msk                       (_U_(0x1F) << PMC_PCK_CSS_Pos)                       /**< (PMC_PCK) Programmable Clock Source Selection Mask */
#define PMC_PCK_CSS(value)                    (PMC_PCK_CSS_Msk & ((value) << PMC_PCK_CSS_Pos))    
#define   PMC_PCK_CSS_MD_SLOW_CLK_Val         _U_(0x0)                                             /**< (PMC_PCK) MD_SLCK is selected  */
#define   PMC_PCK_CSS_TD_SLOW_CLOCK_Val       _U_(0x1)                                             /**< (PMC_PCK) TD_SLCK is selected  */
#define   PMC_PCK_CSS_MAINCK_Val              _U_(0x2)                                             /**< (PMC_PCK) MAINCK is selected  */
#define   PMC_PCK_CSS_MCK0_Val                _U_(0x3)                                             /**< (PMC_PCK) MCK0 is selected  */
#define   PMC_PCK_CSS_SYSPLL_Val              _U_(0x5)                                             /**< (PMC_PCK) SYSPLL is selected.  */
#define   PMC_PCK_CSS_DDRPLL_Val              _U_(0x6)                                             /**< (PMC_PCK) DDRPLL is selected.  */
#define   PMC_PCK_CSS_IMGPLL_Val              _U_(0x7)                                             /**< (PMC_PCK) IMGPLL is selected.  */
#define   PMC_PCK_CSS_BAUDPLL_Val             _U_(0x8)                                             /**< (PMC_PCK) BAUDPLL is selected.  */
#define   PMC_PCK_CSS_AUDIOPLL_Val            _U_(0x9)                                             /**< (PMC_PCK) AUDIOPLL is selected.  */
#define   PMC_PCK_CSS_ETHPLL_Val              _U_(0xA)                                             /**< (PMC_PCK) ETHPLL is selected.  */
#define PMC_PCK_CSS_MD_SLOW_CLK               (PMC_PCK_CSS_MD_SLOW_CLK_Val << PMC_PCK_CSS_Pos)     /**< (PMC_PCK) MD_SLCK is selected Position  */
#define PMC_PCK_CSS_TD_SLOW_CLOCK             (PMC_PCK_CSS_TD_SLOW_CLOCK_Val << PMC_PCK_CSS_Pos)   /**< (PMC_PCK) TD_SLCK is selected Position  */
#define PMC_PCK_CSS_MAINCK                    (PMC_PCK_CSS_MAINCK_Val << PMC_PCK_CSS_Pos)          /**< (PMC_PCK) MAINCK is selected Position  */
#define PMC_PCK_CSS_MCK0                      (PMC_PCK_CSS_MCK0_Val << PMC_PCK_CSS_Pos)            /**< (PMC_PCK) MCK0 is selected Position  */
#define PMC_PCK_CSS_SYSPLL                    (PMC_PCK_CSS_SYSPLL_Val << PMC_PCK_CSS_Pos)          /**< (PMC_PCK) SYSPLL is selected. Position  */
#define PMC_PCK_CSS_DDRPLL                    (PMC_PCK_CSS_DDRPLL_Val << PMC_PCK_CSS_Pos)          /**< (PMC_PCK) DDRPLL is selected. Position  */
#define PMC_PCK_CSS_IMGPLL                    (PMC_PCK_CSS_IMGPLL_Val << PMC_PCK_CSS_Pos)          /**< (PMC_PCK) IMGPLL is selected. Position  */
#define PMC_PCK_CSS_BAUDPLL                   (PMC_PCK_CSS_BAUDPLL_Val << PMC_PCK_CSS_Pos)         /**< (PMC_PCK) BAUDPLL is selected. Position  */
#define PMC_PCK_CSS_AUDIOPLL                  (PMC_PCK_CSS_AUDIOPLL_Val << PMC_PCK_CSS_Pos)        /**< (PMC_PCK) AUDIOPLL is selected. Position  */
#define PMC_PCK_CSS_ETHPLL                    (PMC_PCK_CSS_ETHPLL_Val << PMC_PCK_CSS_Pos)          /**< (PMC_PCK) ETHPLL is selected. Position  */
#define PMC_PCK_PRES_Pos                      _U_(8)                                               /**< (PMC_PCK) Programmable Clock Prescaler Position */
#define PMC_PCK_PRES_Msk                      (_U_(0xFF) << PMC_PCK_PRES_Pos)                      /**< (PMC_PCK) Programmable Clock Prescaler Mask */
#define PMC_PCK_PRES(value)                   (PMC_PCK_PRES_Msk & ((value) << PMC_PCK_PRES_Pos))  
#define PMC_PCK_Msk                           _U_(0x0000FF1F)                                      /**< (PMC_PCK) Register Mask  */


/* -------- PMC_IER : (PMC Offset: 0x60) ( /W 32) Interrupt Enable Register -------- */
#define PMC_IER_MOSCXTS_Pos                   _U_(0)                                               /**< (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCXTS_Msk                   (_U_(0x1) << PMC_IER_MOSCXTS_Pos)                    /**< (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCXTS(value)                (PMC_IER_MOSCXTS_Msk & ((value) << PMC_IER_MOSCXTS_Pos))
#define PMC_IER_MCKRDY_Pos                    _U_(3)                                               /**< (PMC_IER) Master Clock 0 Ready Interrupt Enable Position */
#define PMC_IER_MCKRDY_Msk                    (_U_(0x1) << PMC_IER_MCKRDY_Pos)                     /**< (PMC_IER) Master Clock 0 Ready Interrupt Enable Mask */
#define PMC_IER_MCKRDY(value)                 (PMC_IER_MCKRDY_Msk & ((value) << PMC_IER_MCKRDY_Pos))
#define PMC_IER_PCKRDY0_Pos                   _U_(8)                                               /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Position */
#define PMC_IER_PCKRDY0_Msk                   (_U_(0x1) << PMC_IER_PCKRDY0_Pos)                    /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Mask */
#define PMC_IER_PCKRDY0(value)                (PMC_IER_PCKRDY0_Msk & ((value) << PMC_IER_PCKRDY0_Pos))
#define PMC_IER_PCKRDY1_Pos                   _U_(9)                                               /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Position */
#define PMC_IER_PCKRDY1_Msk                   (_U_(0x1) << PMC_IER_PCKRDY1_Pos)                    /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Mask */
#define PMC_IER_PCKRDY1(value)                (PMC_IER_PCKRDY1_Msk & ((value) << PMC_IER_PCKRDY1_Pos))
#define PMC_IER_PCKRDY2_Pos                   _U_(10)                                              /**< (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Position */
#define PMC_IER_PCKRDY2_Msk                   (_U_(0x1) << PMC_IER_PCKRDY2_Pos)                    /**< (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Mask */
#define PMC_IER_PCKRDY2(value)                (PMC_IER_PCKRDY2_Msk & ((value) << PMC_IER_PCKRDY2_Pos))
#define PMC_IER_PCKRDY3_Pos                   _U_(11)                                              /**< (PMC_IER) Programmable Clock Ready 3 Interrupt Enable Position */
#define PMC_IER_PCKRDY3_Msk                   (_U_(0x1) << PMC_IER_PCKRDY3_Pos)                    /**< (PMC_IER) Programmable Clock Ready 3 Interrupt Enable Mask */
#define PMC_IER_PCKRDY3(value)                (PMC_IER_PCKRDY3_Msk & ((value) << PMC_IER_PCKRDY3_Pos))
#define PMC_IER_PCKRDY4_Pos                   _U_(12)                                              /**< (PMC_IER) Programmable Clock Ready 4 Interrupt Enable Position */
#define PMC_IER_PCKRDY4_Msk                   (_U_(0x1) << PMC_IER_PCKRDY4_Pos)                    /**< (PMC_IER) Programmable Clock Ready 4 Interrupt Enable Mask */
#define PMC_IER_PCKRDY4(value)                (PMC_IER_PCKRDY4_Msk & ((value) << PMC_IER_PCKRDY4_Pos))
#define PMC_IER_PCKRDY5_Pos                   _U_(13)                                              /**< (PMC_IER) Programmable Clock Ready 5 Interrupt Enable Position */
#define PMC_IER_PCKRDY5_Msk                   (_U_(0x1) << PMC_IER_PCKRDY5_Pos)                    /**< (PMC_IER) Programmable Clock Ready 5 Interrupt Enable Mask */
#define PMC_IER_PCKRDY5(value)                (PMC_IER_PCKRDY5_Msk & ((value) << PMC_IER_PCKRDY5_Pos))
#define PMC_IER_PCKRDY6_Pos                   _U_(14)                                              /**< (PMC_IER) Programmable Clock Ready 6 Interrupt Enable Position */
#define PMC_IER_PCKRDY6_Msk                   (_U_(0x1) << PMC_IER_PCKRDY6_Pos)                    /**< (PMC_IER) Programmable Clock Ready 6 Interrupt Enable Mask */
#define PMC_IER_PCKRDY6(value)                (PMC_IER_PCKRDY6_Msk & ((value) << PMC_IER_PCKRDY6_Pos))
#define PMC_IER_PCKRDY7_Pos                   _U_(15)                                              /**< (PMC_IER) Programmable Clock Ready 7 Interrupt Enable Position */
#define PMC_IER_PCKRDY7_Msk                   (_U_(0x1) << PMC_IER_PCKRDY7_Pos)                    /**< (PMC_IER) Programmable Clock Ready 7 Interrupt Enable Mask */
#define PMC_IER_PCKRDY7(value)                (PMC_IER_PCKRDY7_Msk & ((value) << PMC_IER_PCKRDY7_Pos))
#define PMC_IER_MOSCSELS_Pos                  _U_(16)                                              /**< (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Position */
#define PMC_IER_MOSCSELS_Msk                  (_U_(0x1) << PMC_IER_MOSCSELS_Pos)                   /**< (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Mask */
#define PMC_IER_MOSCSELS(value)               (PMC_IER_MOSCSELS_Msk & ((value) << PMC_IER_MOSCSELS_Pos))
#define PMC_IER_MOSCRCS_Pos                   _U_(17)                                              /**< (PMC_IER) Main RC Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCRCS_Msk                   (_U_(0x1) << PMC_IER_MOSCRCS_Pos)                    /**< (PMC_IER) Main RC Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCRCS(value)                (PMC_IER_MOSCRCS_Msk & ((value) << PMC_IER_MOSCRCS_Pos))
#define PMC_IER_CFDEV_Pos                     _U_(18)                                              /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Position */
#define PMC_IER_CFDEV_Msk                     (_U_(0x1) << PMC_IER_CFDEV_Pos)                      /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Mask */
#define PMC_IER_CFDEV(value)                  (PMC_IER_CFDEV_Msk & ((value) << PMC_IER_CFDEV_Pos))
#define PMC_IER_XT32KERR_Pos                  _U_(21)                                              /**< (PMC_IER) 32.768 kHz Crystal Oscillator Error Interrupt Enable Position */
#define PMC_IER_XT32KERR_Msk                  (_U_(0x1) << PMC_IER_XT32KERR_Pos)                   /**< (PMC_IER) 32.768 kHz Crystal Oscillator Error Interrupt Enable Mask */
#define PMC_IER_XT32KERR(value)               (PMC_IER_XT32KERR_Msk & ((value) << PMC_IER_XT32KERR_Pos))
#define PMC_IER_MCKMON_Pos                    _U_(23)                                              /**< (PMC_IER) Master Clock 0 Clock Monitor Interrupt Enable Position */
#define PMC_IER_MCKMON_Msk                    (_U_(0x1) << PMC_IER_MCKMON_Pos)                     /**< (PMC_IER) Master Clock 0 Clock Monitor Interrupt Enable Mask */
#define PMC_IER_MCKMON(value)                 (PMC_IER_MCKMON_Msk & ((value) << PMC_IER_MCKMON_Pos))
#define PMC_IER_PLL_INT_Pos                   _U_(25)                                              /**< (PMC_IER) PLL Interrupt Enable Position */
#define PMC_IER_PLL_INT_Msk                   (_U_(0x1) << PMC_IER_PLL_INT_Pos)                    /**< (PMC_IER) PLL Interrupt Enable Mask */
#define PMC_IER_PLL_INT(value)                (PMC_IER_PLL_INT_Msk & ((value) << PMC_IER_PLL_INT_Pos))
#define PMC_IER_MCKXRDY_Pos                   _U_(26)                                              /**< (PMC_IER) Master Clock x [x=1..4] Ready Interrupt Enable Position */
#define PMC_IER_MCKXRDY_Msk                   (_U_(0x1) << PMC_IER_MCKXRDY_Pos)                    /**< (PMC_IER) Master Clock x [x=1..4] Ready Interrupt Enable Mask */
#define PMC_IER_MCKXRDY(value)                (PMC_IER_MCKXRDY_Msk & ((value) << PMC_IER_MCKXRDY_Pos))
#define PMC_IER_Msk                           _U_(0x06A7FF09)                                      /**< (PMC_IER) Register Mask  */

#define PMC_IER_PCKRDY_Pos                    _U_(8)                                               /**< (PMC_IER Position) Programmable Clock Ready x Interrupt Enable */
#define PMC_IER_PCKRDY_Msk                    (_U_(0xFF) << PMC_IER_PCKRDY_Pos)                    /**< (PMC_IER Mask) PCKRDY */
#define PMC_IER_PCKRDY(value)                 (PMC_IER_PCKRDY_Msk & ((value) << PMC_IER_PCKRDY_Pos)) 

/* -------- PMC_IDR : (PMC Offset: 0x64) ( /W 32) Interrupt Disable Register -------- */
#define PMC_IDR_MOSCXTS_Pos                   _U_(0)                                               /**< (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCXTS_Msk                   (_U_(0x1) << PMC_IDR_MOSCXTS_Pos)                    /**< (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCXTS(value)                (PMC_IDR_MOSCXTS_Msk & ((value) << PMC_IDR_MOSCXTS_Pos))
#define PMC_IDR_MCKRDY_Pos                    _U_(3)                                               /**< (PMC_IDR) Master Clock 0 Ready Interrupt Disable Position */
#define PMC_IDR_MCKRDY_Msk                    (_U_(0x1) << PMC_IDR_MCKRDY_Pos)                     /**< (PMC_IDR) Master Clock 0 Ready Interrupt Disable Mask */
#define PMC_IDR_MCKRDY(value)                 (PMC_IDR_MCKRDY_Msk & ((value) << PMC_IDR_MCKRDY_Pos))
#define PMC_IDR_PCKRDY0_Pos                   _U_(8)                                               /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Position */
#define PMC_IDR_PCKRDY0_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY0_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY0(value)                (PMC_IDR_PCKRDY0_Msk & ((value) << PMC_IDR_PCKRDY0_Pos))
#define PMC_IDR_PCKRDY1_Pos                   _U_(9)                                               /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Position */
#define PMC_IDR_PCKRDY1_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY1_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY1(value)                (PMC_IDR_PCKRDY1_Msk & ((value) << PMC_IDR_PCKRDY1_Pos))
#define PMC_IDR_PCKRDY2_Pos                   _U_(10)                                              /**< (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Position */
#define PMC_IDR_PCKRDY2_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY2_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY2(value)                (PMC_IDR_PCKRDY2_Msk & ((value) << PMC_IDR_PCKRDY2_Pos))
#define PMC_IDR_PCKRDY3_Pos                   _U_(11)                                              /**< (PMC_IDR) Programmable Clock Ready 3 Interrupt Disable Position */
#define PMC_IDR_PCKRDY3_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY3_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 3 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY3(value)                (PMC_IDR_PCKRDY3_Msk & ((value) << PMC_IDR_PCKRDY3_Pos))
#define PMC_IDR_PCKRDY4_Pos                   _U_(12)                                              /**< (PMC_IDR) Programmable Clock Ready 4 Interrupt Disable Position */
#define PMC_IDR_PCKRDY4_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY4_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 4 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY4(value)                (PMC_IDR_PCKRDY4_Msk & ((value) << PMC_IDR_PCKRDY4_Pos))
#define PMC_IDR_PCKRDY5_Pos                   _U_(13)                                              /**< (PMC_IDR) Programmable Clock Ready 5 Interrupt Disable Position */
#define PMC_IDR_PCKRDY5_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY5_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 5 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY5(value)                (PMC_IDR_PCKRDY5_Msk & ((value) << PMC_IDR_PCKRDY5_Pos))
#define PMC_IDR_PCKRDY6_Pos                   _U_(14)                                              /**< (PMC_IDR) Programmable Clock Ready 6 Interrupt Disable Position */
#define PMC_IDR_PCKRDY6_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY6_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 6 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY6(value)                (PMC_IDR_PCKRDY6_Msk & ((value) << PMC_IDR_PCKRDY6_Pos))
#define PMC_IDR_PCKRDY7_Pos                   _U_(15)                                              /**< (PMC_IDR) Programmable Clock Ready 7 Interrupt Disable Position */
#define PMC_IDR_PCKRDY7_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY7_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 7 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY7(value)                (PMC_IDR_PCKRDY7_Msk & ((value) << PMC_IDR_PCKRDY7_Pos))
#define PMC_IDR_MOSCSELS_Pos                  _U_(16)                                              /**< (PMC_IDR) Main Clock Source Oscillator Selection Status Interrupt Disable Position */
#define PMC_IDR_MOSCSELS_Msk                  (_U_(0x1) << PMC_IDR_MOSCSELS_Pos)                   /**< (PMC_IDR) Main Clock Source Oscillator Selection Status Interrupt Disable Mask */
#define PMC_IDR_MOSCSELS(value)               (PMC_IDR_MOSCSELS_Msk & ((value) << PMC_IDR_MOSCSELS_Pos))
#define PMC_IDR_MOSCRCS_Pos                   _U_(17)                                              /**< (PMC_IDR) Main RC Status Interrupt Disable Position */
#define PMC_IDR_MOSCRCS_Msk                   (_U_(0x1) << PMC_IDR_MOSCRCS_Pos)                    /**< (PMC_IDR) Main RC Status Interrupt Disable Mask */
#define PMC_IDR_MOSCRCS(value)                (PMC_IDR_MOSCRCS_Msk & ((value) << PMC_IDR_MOSCRCS_Pos))
#define PMC_IDR_CFDEV_Pos                     _U_(18)                                              /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Position */
#define PMC_IDR_CFDEV_Msk                     (_U_(0x1) << PMC_IDR_CFDEV_Pos)                      /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Mask */
#define PMC_IDR_CFDEV(value)                  (PMC_IDR_CFDEV_Msk & ((value) << PMC_IDR_CFDEV_Pos))
#define PMC_IDR_XT32KERR_Pos                  _U_(21)                                              /**< (PMC_IDR) 32.768 kHz Crystal Oscillator Error Interrupt Disable Position */
#define PMC_IDR_XT32KERR_Msk                  (_U_(0x1) << PMC_IDR_XT32KERR_Pos)                   /**< (PMC_IDR) 32.768 kHz Crystal Oscillator Error Interrupt Disable Mask */
#define PMC_IDR_XT32KERR(value)               (PMC_IDR_XT32KERR_Msk & ((value) << PMC_IDR_XT32KERR_Pos))
#define PMC_IDR_MCKMON_Pos                    _U_(23)                                              /**< (PMC_IDR) Master Clock 0 Clock Monitor Interrupt Disable Position */
#define PMC_IDR_MCKMON_Msk                    (_U_(0x1) << PMC_IDR_MCKMON_Pos)                     /**< (PMC_IDR) Master Clock 0 Clock Monitor Interrupt Disable Mask */
#define PMC_IDR_MCKMON(value)                 (PMC_IDR_MCKMON_Msk & ((value) << PMC_IDR_MCKMON_Pos))
#define PMC_IDR_PLL_INT_Pos                   _U_(25)                                              /**< (PMC_IDR) PLL Interrupt Disable Position */
#define PMC_IDR_PLL_INT_Msk                   (_U_(0x1) << PMC_IDR_PLL_INT_Pos)                    /**< (PMC_IDR) PLL Interrupt Disable Mask */
#define PMC_IDR_PLL_INT(value)                (PMC_IDR_PLL_INT_Msk & ((value) << PMC_IDR_PLL_INT_Pos))
#define PMC_IDR_MCKXRDY_Pos                   _U_(26)                                              /**< (PMC_IDR) Master Clock x [x=1..4] Ready Interrupt Enable Position */
#define PMC_IDR_MCKXRDY_Msk                   (_U_(0x1) << PMC_IDR_MCKXRDY_Pos)                    /**< (PMC_IDR) Master Clock x [x=1..4] Ready Interrupt Enable Mask */
#define PMC_IDR_MCKXRDY(value)                (PMC_IDR_MCKXRDY_Msk & ((value) << PMC_IDR_MCKXRDY_Pos))
#define PMC_IDR_Msk                           _U_(0x06A7FF09)                                      /**< (PMC_IDR) Register Mask  */

#define PMC_IDR_PCKRDY_Pos                    _U_(8)                                               /**< (PMC_IDR Position) Programmable Clock Ready x Interrupt Disable */
#define PMC_IDR_PCKRDY_Msk                    (_U_(0xFF) << PMC_IDR_PCKRDY_Pos)                    /**< (PMC_IDR Mask) PCKRDY */
#define PMC_IDR_PCKRDY(value)                 (PMC_IDR_PCKRDY_Msk & ((value) << PMC_IDR_PCKRDY_Pos)) 

/* -------- PMC_SR : (PMC Offset: 0x68) ( R/ 32) Status Register -------- */
#define PMC_SR_RESETVALUE                     _U_(0x30008)                                         /**<  (PMC_SR) Status Register  Reset Value */

#define PMC_SR_MOSCXTS_Pos                    _U_(0)                                               /**< (PMC_SR) Main Crystal Oscillator Status Position */
#define PMC_SR_MOSCXTS_Msk                    (_U_(0x1) << PMC_SR_MOSCXTS_Pos)                     /**< (PMC_SR) Main Crystal Oscillator Status Mask */
#define PMC_SR_MOSCXTS(value)                 (PMC_SR_MOSCXTS_Msk & ((value) << PMC_SR_MOSCXTS_Pos))
#define   PMC_SR_MOSCXTS_0_Val                _U_(0x0)                                             /**< (PMC_SR) Main crystal oscillator is not stabilized.  */
#define   PMC_SR_MOSCXTS_1_Val                _U_(0x1)                                             /**< (PMC_SR) Main crystal oscillator is stabilized.  */
#define PMC_SR_MOSCXTS_0                      (PMC_SR_MOSCXTS_0_Val << PMC_SR_MOSCXTS_Pos)         /**< (PMC_SR) Main crystal oscillator is not stabilized. Position  */
#define PMC_SR_MOSCXTS_1                      (PMC_SR_MOSCXTS_1_Val << PMC_SR_MOSCXTS_Pos)         /**< (PMC_SR) Main crystal oscillator is stabilized. Position  */
#define PMC_SR_MCKRDY_Pos                     _U_(3)                                               /**< (PMC_SR) Master Clock 0 Status Position */
#define PMC_SR_MCKRDY_Msk                     (_U_(0x1) << PMC_SR_MCKRDY_Pos)                      /**< (PMC_SR) Master Clock 0 Status Mask */
#define PMC_SR_MCKRDY(value)                  (PMC_SR_MCKRDY_Msk & ((value) << PMC_SR_MCKRDY_Pos))
#define   PMC_SR_MCKRDY_0_Val                 _U_(0x0)                                             /**< (PMC_SR) Master Clock 0 is not ready.  */
#define   PMC_SR_MCKRDY_1_Val                 _U_(0x1)                                             /**< (PMC_SR) Master Clock 0 is ready.  */
#define PMC_SR_MCKRDY_0                       (PMC_SR_MCKRDY_0_Val << PMC_SR_MCKRDY_Pos)           /**< (PMC_SR) Master Clock 0 is not ready. Position  */
#define PMC_SR_MCKRDY_1                       (PMC_SR_MCKRDY_1_Val << PMC_SR_MCKRDY_Pos)           /**< (PMC_SR) Master Clock 0 is ready. Position  */
#define PMC_SR_OSCSELS_Pos                    _U_(7)                                               /**< (PMC_SR) Timing Domain Slow Clock Oscillator Selection Position */
#define PMC_SR_OSCSELS_Msk                    (_U_(0x1) << PMC_SR_OSCSELS_Pos)                     /**< (PMC_SR) Timing Domain Slow Clock Oscillator Selection Mask */
#define PMC_SR_OSCSELS(value)                 (PMC_SR_OSCSELS_Msk & ((value) << PMC_SR_OSCSELS_Pos))
#define   PMC_SR_OSCSELS_0_Val                _U_(0x0)                                             /**< (PMC_SR) Embedded slow RC oscillator is selected.  */
#define   PMC_SR_OSCSELS_1_Val                _U_(0x1)                                             /**< (PMC_SR) 32.768 kHz crystal oscillator is selected.  */
#define PMC_SR_OSCSELS_0                      (PMC_SR_OSCSELS_0_Val << PMC_SR_OSCSELS_Pos)         /**< (PMC_SR) Embedded slow RC oscillator is selected. Position  */
#define PMC_SR_OSCSELS_1                      (PMC_SR_OSCSELS_1_Val << PMC_SR_OSCSELS_Pos)         /**< (PMC_SR) 32.768 kHz crystal oscillator is selected. Position  */
#define PMC_SR_PCKRDY0_Pos                    _U_(8)                                               /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY0_Msk                    (_U_(0x1) << PMC_SR_PCKRDY0_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY0(value)                 (PMC_SR_PCKRDY0_Msk & ((value) << PMC_SR_PCKRDY0_Pos))
#define   PMC_SR_PCKRDY0_0_Val                _U_(0x0)                                             /**< (PMC_SR) Programmable Clock x is not ready.  */
#define   PMC_SR_PCKRDY0_1_Val                _U_(0x1)                                             /**< (PMC_SR) Programmable Clock x is ready.  */
#define PMC_SR_PCKRDY0_0                      (PMC_SR_PCKRDY0_0_Val << PMC_SR_PCKRDY0_Pos)         /**< (PMC_SR) Programmable Clock x is not ready. Position  */
#define PMC_SR_PCKRDY0_1                      (PMC_SR_PCKRDY0_1_Val << PMC_SR_PCKRDY0_Pos)         /**< (PMC_SR) Programmable Clock x is ready. Position  */
#define PMC_SR_PCKRDY1_Pos                    _U_(9)                                               /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY1_Msk                    (_U_(0x1) << PMC_SR_PCKRDY1_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY1(value)                 (PMC_SR_PCKRDY1_Msk & ((value) << PMC_SR_PCKRDY1_Pos))
#define   PMC_SR_PCKRDY1_0_Val                _U_(0x0)                                             /**< (PMC_SR) Programmable Clock x is not ready.  */
#define   PMC_SR_PCKRDY1_1_Val                _U_(0x1)                                             /**< (PMC_SR) Programmable Clock x is ready.  */
#define PMC_SR_PCKRDY1_0                      (PMC_SR_PCKRDY1_0_Val << PMC_SR_PCKRDY1_Pos)         /**< (PMC_SR) Programmable Clock x is not ready. Position  */
#define PMC_SR_PCKRDY1_1                      (PMC_SR_PCKRDY1_1_Val << PMC_SR_PCKRDY1_Pos)         /**< (PMC_SR) Programmable Clock x is ready. Position  */
#define PMC_SR_PCKRDY2_Pos                    _U_(10)                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY2_Msk                    (_U_(0x1) << PMC_SR_PCKRDY2_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY2(value)                 (PMC_SR_PCKRDY2_Msk & ((value) << PMC_SR_PCKRDY2_Pos))
#define   PMC_SR_PCKRDY2_0_Val                _U_(0x0)                                             /**< (PMC_SR) Programmable Clock x is not ready.  */
#define   PMC_SR_PCKRDY2_1_Val                _U_(0x1)                                             /**< (PMC_SR) Programmable Clock x is ready.  */
#define PMC_SR_PCKRDY2_0                      (PMC_SR_PCKRDY2_0_Val << PMC_SR_PCKRDY2_Pos)         /**< (PMC_SR) Programmable Clock x is not ready. Position  */
#define PMC_SR_PCKRDY2_1                      (PMC_SR_PCKRDY2_1_Val << PMC_SR_PCKRDY2_Pos)         /**< (PMC_SR) Programmable Clock x is ready. Position  */
#define PMC_SR_PCKRDY3_Pos                    _U_(11)                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY3_Msk                    (_U_(0x1) << PMC_SR_PCKRDY3_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY3(value)                 (PMC_SR_PCKRDY3_Msk & ((value) << PMC_SR_PCKRDY3_Pos))
#define   PMC_SR_PCKRDY3_0_Val                _U_(0x0)                                             /**< (PMC_SR) Programmable Clock x is not ready.  */
#define   PMC_SR_PCKRDY3_1_Val                _U_(0x1)                                             /**< (PMC_SR) Programmable Clock x is ready.  */
#define PMC_SR_PCKRDY3_0                      (PMC_SR_PCKRDY3_0_Val << PMC_SR_PCKRDY3_Pos)         /**< (PMC_SR) Programmable Clock x is not ready. Position  */
#define PMC_SR_PCKRDY3_1                      (PMC_SR_PCKRDY3_1_Val << PMC_SR_PCKRDY3_Pos)         /**< (PMC_SR) Programmable Clock x is ready. Position  */
#define PMC_SR_PCKRDY4_Pos                    _U_(12)                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY4_Msk                    (_U_(0x1) << PMC_SR_PCKRDY4_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY4(value)                 (PMC_SR_PCKRDY4_Msk & ((value) << PMC_SR_PCKRDY4_Pos))
#define   PMC_SR_PCKRDY4_0_Val                _U_(0x0)                                             /**< (PMC_SR) Programmable Clock x is not ready.  */
#define   PMC_SR_PCKRDY4_1_Val                _U_(0x1)                                             /**< (PMC_SR) Programmable Clock x is ready.  */
#define PMC_SR_PCKRDY4_0                      (PMC_SR_PCKRDY4_0_Val << PMC_SR_PCKRDY4_Pos)         /**< (PMC_SR) Programmable Clock x is not ready. Position  */
#define PMC_SR_PCKRDY4_1                      (PMC_SR_PCKRDY4_1_Val << PMC_SR_PCKRDY4_Pos)         /**< (PMC_SR) Programmable Clock x is ready. Position  */
#define PMC_SR_PCKRDY5_Pos                    _U_(13)                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY5_Msk                    (_U_(0x1) << PMC_SR_PCKRDY5_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY5(value)                 (PMC_SR_PCKRDY5_Msk & ((value) << PMC_SR_PCKRDY5_Pos))
#define   PMC_SR_PCKRDY5_0_Val                _U_(0x0)                                             /**< (PMC_SR) Programmable Clock x is not ready.  */
#define   PMC_SR_PCKRDY5_1_Val                _U_(0x1)                                             /**< (PMC_SR) Programmable Clock x is ready.  */
#define PMC_SR_PCKRDY5_0                      (PMC_SR_PCKRDY5_0_Val << PMC_SR_PCKRDY5_Pos)         /**< (PMC_SR) Programmable Clock x is not ready. Position  */
#define PMC_SR_PCKRDY5_1                      (PMC_SR_PCKRDY5_1_Val << PMC_SR_PCKRDY5_Pos)         /**< (PMC_SR) Programmable Clock x is ready. Position  */
#define PMC_SR_PCKRDY6_Pos                    _U_(14)                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY6_Msk                    (_U_(0x1) << PMC_SR_PCKRDY6_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY6(value)                 (PMC_SR_PCKRDY6_Msk & ((value) << PMC_SR_PCKRDY6_Pos))
#define   PMC_SR_PCKRDY6_0_Val                _U_(0x0)                                             /**< (PMC_SR) Programmable Clock x is not ready.  */
#define   PMC_SR_PCKRDY6_1_Val                _U_(0x1)                                             /**< (PMC_SR) Programmable Clock x is ready.  */
#define PMC_SR_PCKRDY6_0                      (PMC_SR_PCKRDY6_0_Val << PMC_SR_PCKRDY6_Pos)         /**< (PMC_SR) Programmable Clock x is not ready. Position  */
#define PMC_SR_PCKRDY6_1                      (PMC_SR_PCKRDY6_1_Val << PMC_SR_PCKRDY6_Pos)         /**< (PMC_SR) Programmable Clock x is ready. Position  */
#define PMC_SR_PCKRDY7_Pos                    _U_(15)                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY7_Msk                    (_U_(0x1) << PMC_SR_PCKRDY7_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY7(value)                 (PMC_SR_PCKRDY7_Msk & ((value) << PMC_SR_PCKRDY7_Pos))
#define   PMC_SR_PCKRDY7_0_Val                _U_(0x0)                                             /**< (PMC_SR) Programmable Clock x is not ready.  */
#define   PMC_SR_PCKRDY7_1_Val                _U_(0x1)                                             /**< (PMC_SR) Programmable Clock x is ready.  */
#define PMC_SR_PCKRDY7_0                      (PMC_SR_PCKRDY7_0_Val << PMC_SR_PCKRDY7_Pos)         /**< (PMC_SR) Programmable Clock x is not ready. Position  */
#define PMC_SR_PCKRDY7_1                      (PMC_SR_PCKRDY7_1_Val << PMC_SR_PCKRDY7_Pos)         /**< (PMC_SR) Programmable Clock x is ready. Position  */
#define PMC_SR_MOSCSELS_Pos                   _U_(16)                                              /**< (PMC_SR) Main Clock Source Oscillator Selection Status Position */
#define PMC_SR_MOSCSELS_Msk                   (_U_(0x1) << PMC_SR_MOSCSELS_Pos)                    /**< (PMC_SR) Main Clock Source Oscillator Selection Status Mask */
#define PMC_SR_MOSCSELS(value)                (PMC_SR_MOSCSELS_Msk & ((value) << PMC_SR_MOSCSELS_Pos))
#define   PMC_SR_MOSCSELS_0_Val               _U_(0x0)                                             /**< (PMC_SR) Selection is in progress.  */
#define   PMC_SR_MOSCSELS_1_Val               _U_(0x1)                                             /**< (PMC_SR) Selection is done.  */
#define PMC_SR_MOSCSELS_0                     (PMC_SR_MOSCSELS_0_Val << PMC_SR_MOSCSELS_Pos)       /**< (PMC_SR) Selection is in progress. Position  */
#define PMC_SR_MOSCSELS_1                     (PMC_SR_MOSCSELS_1_Val << PMC_SR_MOSCSELS_Pos)       /**< (PMC_SR) Selection is done. Position  */
#define PMC_SR_MOSCRCS_Pos                    _U_(17)                                              /**< (PMC_SR) Main RC Oscillator Status Position */
#define PMC_SR_MOSCRCS_Msk                    (_U_(0x1) << PMC_SR_MOSCRCS_Pos)                     /**< (PMC_SR) Main RC Oscillator Status Mask */
#define PMC_SR_MOSCRCS(value)                 (PMC_SR_MOSCRCS_Msk & ((value) << PMC_SR_MOSCRCS_Pos))
#define   PMC_SR_MOSCRCS_0_Val                _U_(0x0)                                             /**< (PMC_SR) Main RC oscillator is not stabilized.  */
#define   PMC_SR_MOSCRCS_1_Val                _U_(0x1)                                             /**< (PMC_SR) Main RC oscillator is stabilized.  */
#define PMC_SR_MOSCRCS_0                      (PMC_SR_MOSCRCS_0_Val << PMC_SR_MOSCRCS_Pos)         /**< (PMC_SR) Main RC oscillator is not stabilized. Position  */
#define PMC_SR_MOSCRCS_1                      (PMC_SR_MOSCRCS_1_Val << PMC_SR_MOSCRCS_Pos)         /**< (PMC_SR) Main RC oscillator is stabilized. Position  */
#define PMC_SR_CFDEV_Pos                      _U_(18)                                              /**< (PMC_SR) Clock Failure Detector Event Position */
#define PMC_SR_CFDEV_Msk                      (_U_(0x1) << PMC_SR_CFDEV_Pos)                       /**< (PMC_SR) Clock Failure Detector Event Mask */
#define PMC_SR_CFDEV(value)                   (PMC_SR_CFDEV_Msk & ((value) << PMC_SR_CFDEV_Pos))  
#define   PMC_SR_CFDEV_0_Val                  _U_(0x0)                                             /**< (PMC_SR) No clock failure detection of the main crystal oscillator clock has occurred since the last read of PMC_SR.  */
#define   PMC_SR_CFDEV_1_Val                  _U_(0x1)                                             /**< (PMC_SR) At least one clock failure detection of the main crystal oscillator clock has occurred since the last read of PMC_SR.  */
#define PMC_SR_CFDEV_0                        (PMC_SR_CFDEV_0_Val << PMC_SR_CFDEV_Pos)             /**< (PMC_SR) No clock failure detection of the main crystal oscillator clock has occurred since the last read of PMC_SR. Position  */
#define PMC_SR_CFDEV_1                        (PMC_SR_CFDEV_1_Val << PMC_SR_CFDEV_Pos)             /**< (PMC_SR) At least one clock failure detection of the main crystal oscillator clock has occurred since the last read of PMC_SR. Position  */
#define PMC_SR_CFDS_Pos                       _U_(19)                                              /**< (PMC_SR) Clock Failure Detector Status Position */
#define PMC_SR_CFDS_Msk                       (_U_(0x1) << PMC_SR_CFDS_Pos)                        /**< (PMC_SR) Clock Failure Detector Status Mask */
#define PMC_SR_CFDS(value)                    (PMC_SR_CFDS_Msk & ((value) << PMC_SR_CFDS_Pos))    
#define   PMC_SR_CFDS_0_Val                   _U_(0x0)                                             /**< (PMC_SR) A clock failure of the main crystal oscillator clock is not detected.  */
#define   PMC_SR_CFDS_1_Val                   _U_(0x1)                                             /**< (PMC_SR) A clock failure of the main crystal oscillator clock is detected.  */
#define PMC_SR_CFDS_0                         (PMC_SR_CFDS_0_Val << PMC_SR_CFDS_Pos)               /**< (PMC_SR) A clock failure of the main crystal oscillator clock is not detected. Position  */
#define PMC_SR_CFDS_1                         (PMC_SR_CFDS_1_Val << PMC_SR_CFDS_Pos)               /**< (PMC_SR) A clock failure of the main crystal oscillator clock is detected. Position  */
#define PMC_SR_FOS_Pos                        _U_(20)                                              /**< (PMC_SR) Clock Failure Detector Fault Output Status Position */
#define PMC_SR_FOS_Msk                        (_U_(0x1) << PMC_SR_FOS_Pos)                         /**< (PMC_SR) Clock Failure Detector Fault Output Status Mask */
#define PMC_SR_FOS(value)                     (PMC_SR_FOS_Msk & ((value) << PMC_SR_FOS_Pos))      
#define   PMC_SR_FOS_0_Val                    _U_(0x0)                                             /**< (PMC_SR) The fault output of the clock failure detector is inactive.  */
#define   PMC_SR_FOS_1_Val                    _U_(0x1)                                             /**< (PMC_SR) The fault output of the clock failure detector is active. This status is cleared by writing a '1' to FOCLR in PMC_FOCR.  */
#define PMC_SR_FOS_0                          (PMC_SR_FOS_0_Val << PMC_SR_FOS_Pos)                 /**< (PMC_SR) The fault output of the clock failure detector is inactive. Position  */
#define PMC_SR_FOS_1                          (PMC_SR_FOS_1_Val << PMC_SR_FOS_Pos)                 /**< (PMC_SR) The fault output of the clock failure detector is active. This status is cleared by writing a '1' to FOCLR in PMC_FOCR. Position  */
#define PMC_SR_XT32KERR_Pos                   _U_(21)                                              /**< (PMC_SR) Slow Crystal Oscillator Error Position */
#define PMC_SR_XT32KERR_Msk                   (_U_(0x1) << PMC_SR_XT32KERR_Pos)                    /**< (PMC_SR) Slow Crystal Oscillator Error Mask */
#define PMC_SR_XT32KERR(value)                (PMC_SR_XT32KERR_Msk & ((value) << PMC_SR_XT32KERR_Pos))
#define   PMC_SR_XT32KERR_0_Val               _U_(0x0)                                             /**< (PMC_SR) The frequency of the 32.768 kHz crystal oscillator is correct (32.768 kHz \xb1 1%) or the monitoring is disabled.  */
#define   PMC_SR_XT32KERR_1_Val               _U_(0x1)                                             /**< (PMC_SR) The frequency of the 32.768 kHz crystal oscillator is incorrect or has been incorrect for an elapsed period of time since the monitoring has been enabled.  */
#define PMC_SR_XT32KERR_0                     (PMC_SR_XT32KERR_0_Val << PMC_SR_XT32KERR_Pos)       /**< (PMC_SR) The frequency of the 32.768 kHz crystal oscillator is correct (32.768 kHz \xb1 1%) or the monitoring is disabled. Position  */
#define PMC_SR_XT32KERR_1                     (PMC_SR_XT32KERR_1_Val << PMC_SR_XT32KERR_Pos)       /**< (PMC_SR) The frequency of the 32.768 kHz crystal oscillator is incorrect or has been incorrect for an elapsed period of time since the monitoring has been enabled. Position  */
#define PMC_SR_MCKMON_Pos                     _U_(23)                                              /**< (PMC_SR) Master Clock 0 Clock Monitor Error Position */
#define PMC_SR_MCKMON_Msk                     (_U_(0x1) << PMC_SR_MCKMON_Pos)                      /**< (PMC_SR) Master Clock 0 Clock Monitor Error Mask */
#define PMC_SR_MCKMON(value)                  (PMC_SR_MCKMON_Msk & ((value) << PMC_SR_MCKMON_Pos))
#define   PMC_SR_MCKMON_0_Val                 _U_(0x0)                                             /**< (PMC_SR) The Master Clock 0 is correct or the CPU clock monitor is disabled.  */
#define   PMC_SR_MCKMON_1_Val                 _U_(0x1)                                             /**< (PMC_SR) The Master Clock 0 is incorrect or has been incorrect for an elapsed period of time since the monitoring has been enabled.  */
#define PMC_SR_MCKMON_0                       (PMC_SR_MCKMON_0_Val << PMC_SR_MCKMON_Pos)           /**< (PMC_SR) The Master Clock 0 is correct or the CPU clock monitor is disabled. Position  */
#define PMC_SR_MCKMON_1                       (PMC_SR_MCKMON_1_Val << PMC_SR_MCKMON_Pos)           /**< (PMC_SR) The Master Clock 0 is incorrect or has been incorrect for an elapsed period of time since the monitoring has been enabled. Position  */
#define PMC_SR_GCLKRDY_Pos                    _U_(24)                                              /**< (PMC_SR) GCLK Ready Position */
#define PMC_SR_GCLKRDY_Msk                    (_U_(0x1) << PMC_SR_GCLKRDY_Pos)                     /**< (PMC_SR) GCLK Ready Mask */
#define PMC_SR_GCLKRDY(value)                 (PMC_SR_GCLKRDY_Msk & ((value) << PMC_SR_GCLKRDY_Pos))
#define   PMC_SR_GCLKRDY_0_Val                _U_(0x0)                                             /**< (PMC_SR) A GCLK is not ready to use (clock switching in progress).  */
#define   PMC_SR_GCLKRDY_1_Val                _U_(0x1)                                             /**< (PMC_SR) All GCLKs are switched to their selected source clock and ready to use.  */
#define PMC_SR_GCLKRDY_0                      (PMC_SR_GCLKRDY_0_Val << PMC_SR_GCLKRDY_Pos)         /**< (PMC_SR) A GCLK is not ready to use (clock switching in progress). Position  */
#define PMC_SR_GCLKRDY_1                      (PMC_SR_GCLKRDY_1_Val << PMC_SR_GCLKRDY_Pos)         /**< (PMC_SR) All GCLKs are switched to their selected source clock and ready to use. Position  */
#define PMC_SR_PLL_INT_Pos                    _U_(25)                                              /**< (PMC_SR) PLL Interrupt Status Position */
#define PMC_SR_PLL_INT_Msk                    (_U_(0x1) << PMC_SR_PLL_INT_Pos)                     /**< (PMC_SR) PLL Interrupt Status Mask */
#define PMC_SR_PLL_INT(value)                 (PMC_SR_PLL_INT_Msk & ((value) << PMC_SR_PLL_INT_Pos))
#define   PMC_SR_PLL_INT_0_Val                _U_(0x0)                                             /**< (PMC_SR) No PLL interrupt has occurred.  */
#define   PMC_SR_PLL_INT_1_Val                _U_(0x1)                                             /**< (PMC_SR) A PLL interrupt has occurred. PLL interrupt is defined by the configuration of the PMC_IMR register.  */
#define PMC_SR_PLL_INT_0                      (PMC_SR_PLL_INT_0_Val << PMC_SR_PLL_INT_Pos)         /**< (PMC_SR) No PLL interrupt has occurred. Position  */
#define PMC_SR_PLL_INT_1                      (PMC_SR_PLL_INT_1_Val << PMC_SR_PLL_INT_Pos)         /**< (PMC_SR) A PLL interrupt has occurred. PLL interrupt is defined by the configuration of the PMC_IMR register. Position  */
#define PMC_SR_MCKXRDY_Pos                    _U_(26)                                              /**< (PMC_SR) Master Clock x [x=1..4] Ready Status Position */
#define PMC_SR_MCKXRDY_Msk                    (_U_(0x1) << PMC_SR_MCKXRDY_Pos)                     /**< (PMC_SR) Master Clock x [x=1..4] Ready Status Mask */
#define PMC_SR_MCKXRDY(value)                 (PMC_SR_MCKXRDY_Msk & ((value) << PMC_SR_MCKXRDY_Pos))
#define   PMC_SR_MCKXRDY_0_Val                _U_(0x0)                                             /**< (PMC_SR) At least one Master Clock is not established.  */
#define   PMC_SR_MCKXRDY_1_Val                _U_(0x1)                                             /**< (PMC_SR) AlL Master Clocks are established.  */
#define PMC_SR_MCKXRDY_0                      (PMC_SR_MCKXRDY_0_Val << PMC_SR_MCKXRDY_Pos)         /**< (PMC_SR) At least one Master Clock is not established. Position  */
#define PMC_SR_MCKXRDY_1                      (PMC_SR_MCKXRDY_1_Val << PMC_SR_MCKXRDY_Pos)         /**< (PMC_SR) AlL Master Clocks are established. Position  */
#define PMC_SR_Msk                            _U_(0x07BFFF89)                                      /**< (PMC_SR) Register Mask  */

#define PMC_SR_PCKRDY_Pos                     _U_(8)                                               /**< (PMC_SR Position) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY_Msk                     (_U_(0xFF) << PMC_SR_PCKRDY_Pos)                     /**< (PMC_SR Mask) PCKRDY */
#define PMC_SR_PCKRDY(value)                  (PMC_SR_PCKRDY_Msk & ((value) << PMC_SR_PCKRDY_Pos)) 

/* -------- PMC_IMR : (PMC Offset: 0x6C) ( R/ 32) Interrupt Mask Register -------- */
#define PMC_IMR_RESETVALUE                    _U_(0x00)                                            /**<  (PMC_IMR) Interrupt Mask Register  Reset Value */

#define PMC_IMR_MOSCXTS_Pos                   _U_(0)                                               /**< (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCXTS_Msk                   (_U_(0x1) << PMC_IMR_MOSCXTS_Pos)                    /**< (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCXTS(value)                (PMC_IMR_MOSCXTS_Msk & ((value) << PMC_IMR_MOSCXTS_Pos))
#define PMC_IMR_MCKRDY_Pos                    _U_(3)                                               /**< (PMC_IMR) Master Clock 0 Ready Interrupt Mask Position */
#define PMC_IMR_MCKRDY_Msk                    (_U_(0x1) << PMC_IMR_MCKRDY_Pos)                     /**< (PMC_IMR) Master Clock 0 Ready Interrupt Mask Mask */
#define PMC_IMR_MCKRDY(value)                 (PMC_IMR_MCKRDY_Msk & ((value) << PMC_IMR_MCKRDY_Pos))
#define PMC_IMR_PCKRDY0_Pos                   _U_(8)                                               /**< (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Position */
#define PMC_IMR_PCKRDY0_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY0_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY0(value)                (PMC_IMR_PCKRDY0_Msk & ((value) << PMC_IMR_PCKRDY0_Pos))
#define PMC_IMR_PCKRDY1_Pos                   _U_(9)                                               /**< (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Position */
#define PMC_IMR_PCKRDY1_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY1_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY1(value)                (PMC_IMR_PCKRDY1_Msk & ((value) << PMC_IMR_PCKRDY1_Pos))
#define PMC_IMR_PCKRDY2_Pos                   _U_(10)                                              /**< (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Position */
#define PMC_IMR_PCKRDY2_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY2_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY2(value)                (PMC_IMR_PCKRDY2_Msk & ((value) << PMC_IMR_PCKRDY2_Pos))
#define PMC_IMR_PCKRDY3_Pos                   _U_(11)                                              /**< (PMC_IMR) Programmable Clock Ready 3 Interrupt Mask Position */
#define PMC_IMR_PCKRDY3_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY3_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 3 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY3(value)                (PMC_IMR_PCKRDY3_Msk & ((value) << PMC_IMR_PCKRDY3_Pos))
#define PMC_IMR_PCKRDY4_Pos                   _U_(12)                                              /**< (PMC_IMR) Programmable Clock Ready 4 Interrupt Mask Position */
#define PMC_IMR_PCKRDY4_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY4_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 4 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY4(value)                (PMC_IMR_PCKRDY4_Msk & ((value) << PMC_IMR_PCKRDY4_Pos))
#define PMC_IMR_PCKRDY5_Pos                   _U_(13)                                              /**< (PMC_IMR) Programmable Clock Ready 5 Interrupt Mask Position */
#define PMC_IMR_PCKRDY5_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY5_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 5 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY5(value)                (PMC_IMR_PCKRDY5_Msk & ((value) << PMC_IMR_PCKRDY5_Pos))
#define PMC_IMR_PCKRDY6_Pos                   _U_(14)                                              /**< (PMC_IMR) Programmable Clock Ready 6 Interrupt Mask Position */
#define PMC_IMR_PCKRDY6_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY6_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 6 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY6(value)                (PMC_IMR_PCKRDY6_Msk & ((value) << PMC_IMR_PCKRDY6_Pos))
#define PMC_IMR_PCKRDY7_Pos                   _U_(15)                                              /**< (PMC_IMR) Programmable Clock Ready 7 Interrupt Mask Position */
#define PMC_IMR_PCKRDY7_Msk                   (_U_(0x1) << PMC_IMR_PCKRDY7_Pos)                    /**< (PMC_IMR) Programmable Clock Ready 7 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY7(value)                (PMC_IMR_PCKRDY7_Msk & ((value) << PMC_IMR_PCKRDY7_Pos))
#define PMC_IMR_MOSCSELS_Pos                  _U_(16)                                              /**< (PMC_IMR) Main Clock Source Oscillator Selection Status Interrupt Mask Position */
#define PMC_IMR_MOSCSELS_Msk                  (_U_(0x1) << PMC_IMR_MOSCSELS_Pos)                   /**< (PMC_IMR) Main Clock Source Oscillator Selection Status Interrupt Mask Mask */
#define PMC_IMR_MOSCSELS(value)               (PMC_IMR_MOSCSELS_Msk & ((value) << PMC_IMR_MOSCSELS_Pos))
#define PMC_IMR_MOSCRCS_Pos                   _U_(17)                                              /**< (PMC_IMR) Main RC Status Interrupt Mask Position */
#define PMC_IMR_MOSCRCS_Msk                   (_U_(0x1) << PMC_IMR_MOSCRCS_Pos)                    /**< (PMC_IMR) Main RC Status Interrupt Mask Mask */
#define PMC_IMR_MOSCRCS(value)                (PMC_IMR_MOSCRCS_Msk & ((value) << PMC_IMR_MOSCRCS_Pos))
#define PMC_IMR_CFDEV_Pos                     _U_(18)                                              /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Position */
#define PMC_IMR_CFDEV_Msk                     (_U_(0x1) << PMC_IMR_CFDEV_Pos)                      /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Mask */
#define PMC_IMR_CFDEV(value)                  (PMC_IMR_CFDEV_Msk & ((value) << PMC_IMR_CFDEV_Pos))
#define PMC_IMR_XT32KERR_Pos                  _U_(21)                                              /**< (PMC_IMR) 32.768 kHz Crystal Oscillator Error Interrupt Mask Position */
#define PMC_IMR_XT32KERR_Msk                  (_U_(0x1) << PMC_IMR_XT32KERR_Pos)                   /**< (PMC_IMR) 32.768 kHz Crystal Oscillator Error Interrupt Mask Mask */
#define PMC_IMR_XT32KERR(value)               (PMC_IMR_XT32KERR_Msk & ((value) << PMC_IMR_XT32KERR_Pos))
#define PMC_IMR_MCKMON_Pos                    _U_(23)                                              /**< (PMC_IMR) Master Clock 0 Monitor Error Interrupt Mask Position */
#define PMC_IMR_MCKMON_Msk                    (_U_(0x1) << PMC_IMR_MCKMON_Pos)                     /**< (PMC_IMR) Master Clock 0 Monitor Error Interrupt Mask Mask */
#define PMC_IMR_MCKMON(value)                 (PMC_IMR_MCKMON_Msk & ((value) << PMC_IMR_MCKMON_Pos))
#define PMC_IMR_PLL_INT_Pos                   _U_(25)                                              /**< (PMC_IMR) PLL Interrupt Mask Position */
#define PMC_IMR_PLL_INT_Msk                   (_U_(0x1) << PMC_IMR_PLL_INT_Pos)                    /**< (PMC_IMR) PLL Interrupt Mask Mask */
#define PMC_IMR_PLL_INT(value)                (PMC_IMR_PLL_INT_Msk & ((value) << PMC_IMR_PLL_INT_Pos))
#define PMC_IMR_MCKXRDY_Pos                   _U_(26)                                              /**< (PMC_IMR) Master Clock x [x=1..4] Ready Interrupt Mask Position */
#define PMC_IMR_MCKXRDY_Msk                   (_U_(0x1) << PMC_IMR_MCKXRDY_Pos)                    /**< (PMC_IMR) Master Clock x [x=1..4] Ready Interrupt Mask Mask */
#define PMC_IMR_MCKXRDY(value)                (PMC_IMR_MCKXRDY_Msk & ((value) << PMC_IMR_MCKXRDY_Pos))
#define PMC_IMR_Msk                           _U_(0x06A7FF09)                                      /**< (PMC_IMR) Register Mask  */

#define PMC_IMR_PCKRDY_Pos                    _U_(8)                                               /**< (PMC_IMR Position) Programmable Clock Ready x Interrupt Mask */
#define PMC_IMR_PCKRDY_Msk                    (_U_(0xFF) << PMC_IMR_PCKRDY_Pos)                    /**< (PMC_IMR Mask) PCKRDY */
#define PMC_IMR_PCKRDY(value)                 (PMC_IMR_PCKRDY_Msk & ((value) << PMC_IMR_PCKRDY_Pos)) 

/* -------- PMC_FSMR : (PMC Offset: 0x70) (R/W 32) Fast Startup Mode Register -------- */
#define PMC_FSMR_RESETVALUE                   _U_(0x00)                                            /**<  (PMC_FSMR) Fast Startup Mode Register  Reset Value */

#define PMC_FSMR_RTTAL_Pos                    _U_(16)                                              /**< (PMC_FSMR) RTT Alarm Enable Position */
#define PMC_FSMR_RTTAL_Msk                    (_U_(0x1) << PMC_FSMR_RTTAL_Pos)                     /**< (PMC_FSMR) RTT Alarm Enable Mask */
#define PMC_FSMR_RTTAL(value)                 (PMC_FSMR_RTTAL_Msk & ((value) << PMC_FSMR_RTTAL_Pos))
#define   PMC_FSMR_RTTAL_0_Val                _U_(0x0)                                             /**< (PMC_FSMR) The RTT alarm has no effect on the IP_Acronym.  */
#define   PMC_FSMR_RTTAL_1_Val                _U_(0x1)                                             /**< (PMC_FSMR) The RTT alarm enables a fast restart signal to the IP_Acronym.  */
#define PMC_FSMR_RTTAL_0                      (PMC_FSMR_RTTAL_0_Val << PMC_FSMR_RTTAL_Pos)         /**< (PMC_FSMR) The RTT alarm has no effect on the IP_Acronym. Position  */
#define PMC_FSMR_RTTAL_1                      (PMC_FSMR_RTTAL_1_Val << PMC_FSMR_RTTAL_Pos)         /**< (PMC_FSMR) The RTT alarm enables a fast restart signal to the IP_Acronym. Position  */
#define PMC_FSMR_RTCAL_Pos                    _U_(17)                                              /**< (PMC_FSMR) RTC Alarm Enable Position */
#define PMC_FSMR_RTCAL_Msk                    (_U_(0x1) << PMC_FSMR_RTCAL_Pos)                     /**< (PMC_FSMR) RTC Alarm Enable Mask */
#define PMC_FSMR_RTCAL(value)                 (PMC_FSMR_RTCAL_Msk & ((value) << PMC_FSMR_RTCAL_Pos))
#define   PMC_FSMR_RTCAL_0_Val                _U_(0x0)                                             /**< (PMC_FSMR) The RTC alarm has no effect on the IP_Acronym.  */
#define   PMC_FSMR_RTCAL_1_Val                _U_(0x1)                                             /**< (PMC_FSMR) The RTC alarm enables a fast restart signal to the IP_Acronym.  */
#define PMC_FSMR_RTCAL_0                      (PMC_FSMR_RTCAL_0_Val << PMC_FSMR_RTCAL_Pos)         /**< (PMC_FSMR) The RTC alarm has no effect on the IP_Acronym. Position  */
#define PMC_FSMR_RTCAL_1                      (PMC_FSMR_RTCAL_1_Val << PMC_FSMR_RTCAL_Pos)         /**< (PMC_FSMR) The RTC alarm enables a fast restart signal to the IP_Acronym. Position  */
#define PMC_FSMR_USBAL_Pos                    _U_(18)                                              /**< (PMC_FSMR) USB Alarm Enable Position */
#define PMC_FSMR_USBAL_Msk                    (_U_(0x1) << PMC_FSMR_USBAL_Pos)                     /**< (PMC_FSMR) USB Alarm Enable Mask */
#define PMC_FSMR_USBAL(value)                 (PMC_FSMR_USBAL_Msk & ((value) << PMC_FSMR_USBAL_Pos))
#define   PMC_FSMR_USBAL_0_Val                _U_(0x0)                                             /**< (PMC_FSMR) The USB alarm has no effect on the IP_Acronym.  */
#define   PMC_FSMR_USBAL_1_Val                _U_(0x1)                                             /**< (PMC_FSMR) The USB alarm enables a fast restart signal to the IP_Acronym.  */
#define PMC_FSMR_USBAL_0                      (PMC_FSMR_USBAL_0_Val << PMC_FSMR_USBAL_Pos)         /**< (PMC_FSMR) The USB alarm has no effect on the IP_Acronym. Position  */
#define PMC_FSMR_USBAL_1                      (PMC_FSMR_USBAL_1_Val << PMC_FSMR_USBAL_Pos)         /**< (PMC_FSMR) The USB alarm enables a fast restart signal to the IP_Acronym. Position  */
#define PMC_FSMR_HSDHC_Pos                    _U_(19)                                              /**< (PMC_FSMR) HSDHC Alarm Position */
#define PMC_FSMR_HSDHC_Msk                    (_U_(0x1) << PMC_FSMR_HSDHC_Pos)                     /**< (PMC_FSMR) HSDHC Alarm Mask */
#define PMC_FSMR_HSDHC(value)                 (PMC_FSMR_HSDHC_Msk & ((value) << PMC_FSMR_HSDHC_Pos))
#define   PMC_FSMR_HSDHC_0_Val                _U_(0x0)                                             /**< (PMC_FSMR) The HSDHC alarm has no effect on the PMC.  */
#define   PMC_FSMR_HSDHC_1_Val                _U_(0x1)                                             /**< (PMC_FSMR) The HSDHC alarm enables a fast restart signal to the PMC.  */
#define PMC_FSMR_HSDHC_0                      (PMC_FSMR_HSDHC_0_Val << PMC_FSMR_HSDHC_Pos)         /**< (PMC_FSMR) The HSDHC alarm has no effect on the PMC. Position  */
#define PMC_FSMR_HSDHC_1                      (PMC_FSMR_HSDHC_1_Val << PMC_FSMR_HSDHC_Pos)         /**< (PMC_FSMR) The HSDHC alarm enables a fast restart signal to the PMC. Position  */
#define PMC_FSMR_Msk                          _U_(0x000F0000)                                      /**< (PMC_FSMR) Register Mask  */


/* -------- PMC_WCR : (PMC Offset: 0x74) (R/W 32) Wakeup Control Register -------- */
#define PMC_WCR_RESETVALUE                    _U_(0x00)                                            /**<  (PMC_WCR) Wakeup Control Register  Reset Value */

#define PMC_WCR_WKPIONB_Pos                   _U_(0)                                               /**< (PMC_WCR) Wakeup Input Number Position */
#define PMC_WCR_WKPIONB_Msk                   (_U_(0xFF) << PMC_WCR_WKPIONB_Pos)                   /**< (PMC_WCR) Wakeup Input Number Mask */
#define PMC_WCR_WKPIONB(value)                (PMC_WCR_WKPIONB_Msk & ((value) << PMC_WCR_WKPIONB_Pos))
#define PMC_WCR_EN_Pos                        _U_(16)                                              /**< (PMC_WCR) Wakeup Input Enable Position */
#define PMC_WCR_EN_Msk                        (_U_(0x1) << PMC_WCR_EN_Pos)                         /**< (PMC_WCR) Wakeup Input Enable Mask */
#define PMC_WCR_EN(value)                     (PMC_WCR_EN_Msk & ((value) << PMC_WCR_EN_Pos))      
#define   PMC_WCR_EN_0_Val                    _U_(0x0)                                             /**< (PMC_WCR) The selected wakeup input has no effect on the IP_Acronym.  */
#define   PMC_WCR_EN_1_Val                    _U_(0x1)                                             /**< (PMC_WCR) The selected wakeup input enables a fast restart signal to the IP_Acronym.  */
#define PMC_WCR_EN_0                          (PMC_WCR_EN_0_Val << PMC_WCR_EN_Pos)                 /**< (PMC_WCR) The selected wakeup input has no effect on the IP_Acronym. Position  */
#define PMC_WCR_EN_1                          (PMC_WCR_EN_1_Val << PMC_WCR_EN_Pos)                 /**< (PMC_WCR) The selected wakeup input enables a fast restart signal to the IP_Acronym. Position  */
#define PMC_WCR_WIP_Pos                       _U_(17)                                              /**< (PMC_WCR) Wakeup Input Polarity Position */
#define PMC_WCR_WIP_Msk                       (_U_(0x1) << PMC_WCR_WIP_Pos)                        /**< (PMC_WCR) Wakeup Input Polarity Mask */
#define PMC_WCR_WIP(value)                    (PMC_WCR_WIP_Msk & ((value) << PMC_WCR_WIP_Pos))    
#define PMC_WCR_CMD_Pos                       _U_(24)                                              /**< (PMC_WCR) Command Position */
#define PMC_WCR_CMD_Msk                       (_U_(0x1) << PMC_WCR_CMD_Pos)                        /**< (PMC_WCR) Command Mask */
#define PMC_WCR_CMD(value)                    (PMC_WCR_CMD_Msk & ((value) << PMC_WCR_CMD_Pos))    
#define   PMC_WCR_CMD_0_Val                   _U_(0x0)                                             /**< (PMC_WCR) Read mode.  */
#define   PMC_WCR_CMD_1_Val                   _U_(0x1)                                             /**< (PMC_WCR) Write mode.  */
#define PMC_WCR_CMD_0                         (PMC_WCR_CMD_0_Val << PMC_WCR_CMD_Pos)               /**< (PMC_WCR) Read mode. Position  */
#define PMC_WCR_CMD_1                         (PMC_WCR_CMD_1_Val << PMC_WCR_CMD_Pos)               /**< (PMC_WCR) Write mode. Position  */
#define PMC_WCR_Msk                           _U_(0x010300FF)                                      /**< (PMC_WCR) Register Mask  */


/* -------- PMC_FOCR : (PMC Offset: 0x78) ( /W 32) Fault Output Clear Register -------- */
#define PMC_FOCR_FOCLR_Pos                    _U_(0)                                               /**< (PMC_FOCR) Fault Output Clear Position */
#define PMC_FOCR_FOCLR_Msk                    (_U_(0x1) << PMC_FOCR_FOCLR_Pos)                     /**< (PMC_FOCR) Fault Output Clear Mask */
#define PMC_FOCR_FOCLR(value)                 (PMC_FOCR_FOCLR_Msk & ((value) << PMC_FOCR_FOCLR_Pos))
#define PMC_FOCR_Msk                          _U_(0x00000001)                                      /**< (PMC_FOCR) Register Mask  */


/* -------- PMC_WPMR : (PMC Offset: 0x80) (R/W 32) Write Protection Mode Register -------- */
#define PMC_WPMR_RESETVALUE                   _U_(0x00)                                            /**<  (PMC_WPMR) Write Protection Mode Register  Reset Value */

#define PMC_WPMR_WPEN_Pos                     _U_(0)                                               /**< (PMC_WPMR) Write Protection Enable Position */
#define PMC_WPMR_WPEN_Msk                     (_U_(0x1) << PMC_WPMR_WPEN_Pos)                      /**< (PMC_WPMR) Write Protection Enable Mask */
#define PMC_WPMR_WPEN(value)                  (PMC_WPMR_WPEN_Msk & ((value) << PMC_WPMR_WPEN_Pos))
#define   PMC_WPMR_WPEN_0_Val                 _U_(0x0)                                             /**< (PMC_WPMR) Disables the write protection if WPKEY corresponds to 0x504D43 ("PMC" in ASCII).  */
#define   PMC_WPMR_WPEN_1_Val                 _U_(0x1)                                             /**< (PMC_WPMR) Enables the write protection if WPKEY corresponds to 0x504D43 ("PMC" in ASCII).  */
#define PMC_WPMR_WPEN_0                       (PMC_WPMR_WPEN_0_Val << PMC_WPMR_WPEN_Pos)           /**< (PMC_WPMR) Disables the write protection if WPKEY corresponds to 0x504D43 ("PMC" in ASCII). Position  */
#define PMC_WPMR_WPEN_1                       (PMC_WPMR_WPEN_1_Val << PMC_WPMR_WPEN_Pos)           /**< (PMC_WPMR) Enables the write protection if WPKEY corresponds to 0x504D43 ("PMC" in ASCII). Position  */
#define PMC_WPMR_WPITEN_Pos                   _U_(1)                                               /**< (PMC_WPMR) Write Protection Interrupt Enable Position */
#define PMC_WPMR_WPITEN_Msk                   (_U_(0x1) << PMC_WPMR_WPITEN_Pos)                    /**< (PMC_WPMR) Write Protection Interrupt Enable Mask */
#define PMC_WPMR_WPITEN(value)                (PMC_WPMR_WPITEN_Msk & ((value) << PMC_WPMR_WPITEN_Pos))
#define   PMC_WPMR_WPITEN_0_Val               _U_(0x0)                                             /**< (PMC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x504D43 ("PMC" in ASCII).  */
#define   PMC_WPMR_WPITEN_1_Val               _U_(0x1)                                             /**< (PMC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x504D43 ("PMC" in ASCII).  */
#define PMC_WPMR_WPITEN_0                     (PMC_WPMR_WPITEN_0_Val << PMC_WPMR_WPITEN_Pos)       /**< (PMC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x504D43 ("PMC" in ASCII). Position  */
#define PMC_WPMR_WPITEN_1                     (PMC_WPMR_WPITEN_1_Val << PMC_WPMR_WPITEN_Pos)       /**< (PMC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x504D43 ("PMC" in ASCII). Position  */
#define PMC_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (PMC_WPMR) Write Protection Key Position */
#define PMC_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << PMC_WPMR_WPKEY_Pos)                /**< (PMC_WPMR) Write Protection Key Mask */
#define PMC_WPMR_WPKEY(value)                 (PMC_WPMR_WPKEY_Msk & ((value) << PMC_WPMR_WPKEY_Pos))
#define   PMC_WPMR_WPKEY_PASSWD_Val           _U_(0x504D43)                                        /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define PMC_WPMR_WPKEY_PASSWD                 (PMC_WPMR_WPKEY_PASSWD_Val << PMC_WPMR_WPKEY_Pos)    /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define PMC_WPMR_Msk                          _U_(0xFFFFFF03)                                      /**< (PMC_WPMR) Register Mask  */


/* -------- PMC_WPSR : (PMC Offset: 0x84) ( R/ 32) Write Protection Status Register -------- */
#define PMC_WPSR_RESETVALUE                   _U_(0x00)                                            /**<  (PMC_WPSR) Write Protection Status Register  Reset Value */

#define PMC_WPSR_WPVS_Pos                     _U_(0)                                               /**< (PMC_WPSR) Write Protection Violation Status Position */
#define PMC_WPSR_WPVS_Msk                     (_U_(0x1) << PMC_WPSR_WPVS_Pos)                      /**< (PMC_WPSR) Write Protection Violation Status Mask */
#define PMC_WPSR_WPVS(value)                  (PMC_WPSR_WPVS_Msk & ((value) << PMC_WPSR_WPVS_Pos))
#define   PMC_WPSR_WPVS_0_Val                 _U_(0x0)                                             /**< (PMC_WPSR) No write protection violation has occurred since the last read of the PMC_WPSR.  */
#define   PMC_WPSR_WPVS_1_Val                 _U_(0x1)                                             /**< (PMC_WPSR) A write protection violation has occurred since the last read of the PMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define PMC_WPSR_WPVS_0                       (PMC_WPSR_WPVS_0_Val << PMC_WPSR_WPVS_Pos)           /**< (PMC_WPSR) No write protection violation has occurred since the last read of the PMC_WPSR. Position  */
#define PMC_WPSR_WPVS_1                       (PMC_WPSR_WPVS_1_Val << PMC_WPSR_WPVS_Pos)           /**< (PMC_WPSR) A write protection violation has occurred since the last read of the PMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position  */
#define PMC_WPSR_WPVSRC_Pos                   _U_(8)                                               /**< (PMC_WPSR) Write Protection Violation Source Position */
#define PMC_WPSR_WPVSRC_Msk                   (_U_(0xFFFF) << PMC_WPSR_WPVSRC_Pos)                 /**< (PMC_WPSR) Write Protection Violation Source Mask */
#define PMC_WPSR_WPVSRC(value)                (PMC_WPSR_WPVSRC_Msk & ((value) << PMC_WPSR_WPVSRC_Pos))
#define PMC_WPSR_Msk                          _U_(0x00FFFF01)                                      /**< (PMC_WPSR) Register Mask  */


/* -------- PMC_PCR : (PMC Offset: 0x88) (R/W 32) Peripheral Control Register -------- */
#define PMC_PCR_RESETVALUE                    _U_(0x00)                                            /**<  (PMC_PCR) Peripheral Control Register  Reset Value */

#define PMC_PCR_PID_Pos                       _U_(0)                                               /**< (PMC_PCR) Peripheral ID Position */
#define PMC_PCR_PID_Msk                       (_U_(0x7F) << PMC_PCR_PID_Pos)                       /**< (PMC_PCR) Peripheral ID Mask */
#define PMC_PCR_PID(value)                    (PMC_PCR_PID_Msk & ((value) << PMC_PCR_PID_Pos))    
#define PMC_PCR_GCLKCSS_Pos                   _U_(8)                                               /**< (PMC_PCR) Generic Clock Source Selection Position */
#define PMC_PCR_GCLKCSS_Msk                   (_U_(0x1F) << PMC_PCR_GCLKCSS_Pos)                   /**< (PMC_PCR) Generic Clock Source Selection Mask */
#define PMC_PCR_GCLKCSS(value)                (PMC_PCR_GCLKCSS_Msk & ((value) << PMC_PCR_GCLKCSS_Pos))
#define   PMC_PCR_GCLKCSS_MD_SLOW_CLK_Val     _U_(0x0)                                             /**< (PMC_PCR) MD_SLCK is selected  */
#define   PMC_PCR_GCLKCSS_TD_SLOW_CLOCK_Val   _U_(0x1)                                             /**< (PMC_PCR) TD_SLCK is selected  */
#define   PMC_PCR_GCLKCSS_MAINCK_Val          _U_(0x2)                                             /**< (PMC_PCR) MAINCK is selected  */
#define   PMC_PCR_GCLKCSS_MCK0_Val            _U_(0x3)                                             /**< (PMC_PCR) MCK0 is selected  */
#define   PMC_PCR_GCLKCSS_SYSPLL_Val          _U_(0x5)                                             /**< (PMC_PCR) SYSPLL is selected.  */
#define   PMC_PCR_GCLKCSS_DDRPLL_Val          _U_(0x6)                                             /**< (PMC_PCR) DDRPLL is selected.  */
#define   PMC_PCR_GCLKCSS_IMGPLL_Val          _U_(0x7)                                             /**< (PMC_PCR) IMGPLL is selected.  */
#define   PMC_PCR_GCLKCSS_BAUDPLL_Val         _U_(0x8)                                             /**< (PMC_PCR) BAUDPLL is selected.  */
#define   PMC_PCR_GCLKCSS_AUDIOPLL_Val        _U_(0x9)                                             /**< (PMC_PCR) AUDIOPLL is selected.  */
#define   PMC_PCR_GCLKCSS_ETHPLL_Val          _U_(0xA)                                             /**< (PMC_PCR) ETHPLL is selected.  */
#define PMC_PCR_GCLKCSS_MD_SLOW_CLK           (PMC_PCR_GCLKCSS_MD_SLOW_CLK_Val << PMC_PCR_GCLKCSS_Pos) /**< (PMC_PCR) MD_SLCK is selected Position  */
#define PMC_PCR_GCLKCSS_TD_SLOW_CLOCK         (PMC_PCR_GCLKCSS_TD_SLOW_CLOCK_Val << PMC_PCR_GCLKCSS_Pos) /**< (PMC_PCR) TD_SLCK is selected Position  */
#define PMC_PCR_GCLKCSS_MAINCK                (PMC_PCR_GCLKCSS_MAINCK_Val << PMC_PCR_GCLKCSS_Pos)  /**< (PMC_PCR) MAINCK is selected Position  */
#define PMC_PCR_GCLKCSS_MCK0                  (PMC_PCR_GCLKCSS_MCK0_Val << PMC_PCR_GCLKCSS_Pos)    /**< (PMC_PCR) MCK0 is selected Position  */
#define PMC_PCR_GCLKCSS_SYSPLL                (PMC_PCR_GCLKCSS_SYSPLL_Val << PMC_PCR_GCLKCSS_Pos)  /**< (PMC_PCR) SYSPLL is selected. Position  */
#define PMC_PCR_GCLKCSS_DDRPLL                (PMC_PCR_GCLKCSS_DDRPLL_Val << PMC_PCR_GCLKCSS_Pos)  /**< (PMC_PCR) DDRPLL is selected. Position  */
#define PMC_PCR_GCLKCSS_IMGPLL                (PMC_PCR_GCLKCSS_IMGPLL_Val << PMC_PCR_GCLKCSS_Pos)  /**< (PMC_PCR) IMGPLL is selected. Position  */
#define PMC_PCR_GCLKCSS_BAUDPLL               (PMC_PCR_GCLKCSS_BAUDPLL_Val << PMC_PCR_GCLKCSS_Pos) /**< (PMC_PCR) BAUDPLL is selected. Position  */
#define PMC_PCR_GCLKCSS_AUDIOPLL              (PMC_PCR_GCLKCSS_AUDIOPLL_Val << PMC_PCR_GCLKCSS_Pos) /**< (PMC_PCR) AUDIOPLL is selected. Position  */
#define PMC_PCR_GCLKCSS_ETHPLL                (PMC_PCR_GCLKCSS_ETHPLL_Val << PMC_PCR_GCLKCSS_Pos)  /**< (PMC_PCR) ETHPLL is selected. Position  */
#define PMC_PCR_MCKID_Pos                     _U_(16)                                              /**< (PMC_PCR) Master Clock Index (Read-only) Position */
#define PMC_PCR_MCKID_Msk                     (_U_(0xF) << PMC_PCR_MCKID_Pos)                      /**< (PMC_PCR) Master Clock Index (Read-only) Mask */
#define PMC_PCR_MCKID(value)                  (PMC_PCR_MCKID_Msk & ((value) << PMC_PCR_MCKID_Pos))
#define PMC_PCR_GCLKDIV_Pos                   _U_(20)                                              /**< (PMC_PCR) Generic Clock Division Ratio Position */
#define PMC_PCR_GCLKDIV_Msk                   (_U_(0xFF) << PMC_PCR_GCLKDIV_Pos)                   /**< (PMC_PCR) Generic Clock Division Ratio Mask */
#define PMC_PCR_GCLKDIV(value)                (PMC_PCR_GCLKDIV_Msk & ((value) << PMC_PCR_GCLKDIV_Pos))
#define PMC_PCR_EN_Pos                        _U_(28)                                              /**< (PMC_PCR) Enable Position */
#define PMC_PCR_EN_Msk                        (_U_(0x1) << PMC_PCR_EN_Pos)                         /**< (PMC_PCR) Enable Mask */
#define PMC_PCR_EN(value)                     (PMC_PCR_EN_Msk & ((value) << PMC_PCR_EN_Pos))      
#define   PMC_PCR_EN_0_Val                    _U_(0x0)                                             /**< (PMC_PCR) Selected Peripheral clock is disabled.  */
#define   PMC_PCR_EN_1_Val                    _U_(0x1)                                             /**< (PMC_PCR) Selected Peripheral clock is enabled.  */
#define PMC_PCR_EN_0                          (PMC_PCR_EN_0_Val << PMC_PCR_EN_Pos)                 /**< (PMC_PCR) Selected Peripheral clock is disabled. Position  */
#define PMC_PCR_EN_1                          (PMC_PCR_EN_1_Val << PMC_PCR_EN_Pos)                 /**< (PMC_PCR) Selected Peripheral clock is enabled. Position  */
#define PMC_PCR_GCLKEN_Pos                    _U_(29)                                              /**< (PMC_PCR) Generic Clock Enable Position */
#define PMC_PCR_GCLKEN_Msk                    (_U_(0x1) << PMC_PCR_GCLKEN_Pos)                     /**< (PMC_PCR) Generic Clock Enable Mask */
#define PMC_PCR_GCLKEN(value)                 (PMC_PCR_GCLKEN_Msk & ((value) << PMC_PCR_GCLKEN_Pos))
#define   PMC_PCR_GCLKEN_0_Val                _U_(0x0)                                             /**< (PMC_PCR) The selected generic clock is disabled.  */
#define   PMC_PCR_GCLKEN_1_Val                _U_(0x1)                                             /**< (PMC_PCR) The selected generic clock is enabled.  */
#define PMC_PCR_GCLKEN_0                      (PMC_PCR_GCLKEN_0_Val << PMC_PCR_GCLKEN_Pos)         /**< (PMC_PCR) The selected generic clock is disabled. Position  */
#define PMC_PCR_GCLKEN_1                      (PMC_PCR_GCLKEN_1_Val << PMC_PCR_GCLKEN_Pos)         /**< (PMC_PCR) The selected generic clock is enabled. Position  */
#define PMC_PCR_CMD_Pos                       _U_(31)                                              /**< (PMC_PCR) Command Position */
#define PMC_PCR_CMD_Msk                       (_U_(0x1) << PMC_PCR_CMD_Pos)                        /**< (PMC_PCR) Command Mask */
#define PMC_PCR_CMD(value)                    (PMC_PCR_CMD_Msk & ((value) << PMC_PCR_CMD_Pos))    
#define   PMC_PCR_CMD_0_Val                   _U_(0x0)                                             /**< (PMC_PCR) Read mode.  */
#define   PMC_PCR_CMD_1_Val                   _U_(0x1)                                             /**< (PMC_PCR) Write mode.  */
#define PMC_PCR_CMD_0                         (PMC_PCR_CMD_0_Val << PMC_PCR_CMD_Pos)               /**< (PMC_PCR) Read mode. Position  */
#define PMC_PCR_CMD_1                         (PMC_PCR_CMD_1_Val << PMC_PCR_CMD_Pos)               /**< (PMC_PCR) Write mode. Position  */
#define PMC_PCR_Msk                           _U_(0xBFFF1F7F)                                      /**< (PMC_PCR) Register Mask  */


/* -------- PMC_SLPWK_AIPR : (PMC Offset: 0x90) ( R/ 32) SleepWalking Activity In Progress Register -------- */
#define PMC_SLPWK_AIPR_AIP_Pos                _U_(0)                                               /**< (PMC_SLPWK_AIPR) Activity In Progress Position */
#define PMC_SLPWK_AIPR_AIP_Msk                (_U_(0x1) << PMC_SLPWK_AIPR_AIP_Pos)                 /**< (PMC_SLPWK_AIPR) Activity In Progress Mask */
#define PMC_SLPWK_AIPR_AIP(value)             (PMC_SLPWK_AIPR_AIP_Msk & ((value) << PMC_SLPWK_AIPR_AIP_Pos))
#define   PMC_SLPWK_AIPR_AIP_0_Val            _U_(0x0)                                             /**< (PMC_SLPWK_AIPR) There is no activity on peripherals. The asynchronous partial wakeup (SleepWalking) function can be activated on one or more peripherals. The device can enter ULP mode 1 or 2.  */
#define   PMC_SLPWK_AIPR_AIP_1_Val            _U_(0x1)                                             /**< (PMC_SLPWK_AIPR) One or more peripherals are currently active. The device must not enter ULP mode 1 or 2 if the asynchronous partial wakeup is enabled for one of the following PIDs: FLEXCOMx, and ADCC.  */
#define PMC_SLPWK_AIPR_AIP_0                  (PMC_SLPWK_AIPR_AIP_0_Val << PMC_SLPWK_AIPR_AIP_Pos) /**< (PMC_SLPWK_AIPR) There is no activity on peripherals. The asynchronous partial wakeup (SleepWalking) function can be activated on one or more peripherals. The device can enter ULP mode 1 or 2. Position  */
#define PMC_SLPWK_AIPR_AIP_1                  (PMC_SLPWK_AIPR_AIP_1_Val << PMC_SLPWK_AIPR_AIP_Pos) /**< (PMC_SLPWK_AIPR) One or more peripherals are currently active. The device must not enter ULP mode 1 or 2 if the asynchronous partial wakeup is enabled for one of the following PIDs: FLEXCOMx, and ADCC. Position  */
#define PMC_SLPWK_AIPR_Msk                    _U_(0x00000001)                                      /**< (PMC_SLPWK_AIPR) Register Mask  */


/* -------- PMC_SLPWKCR : (PMC Offset: 0x94) (R/W 32) SleepWalking Control Register -------- */
#define PMC_SLPWKCR_RESETVALUE                _U_(0x00)                                            /**<  (PMC_SLPWKCR) SleepWalking Control Register  Reset Value */

#define PMC_SLPWKCR_PID_Pos                   _U_(0)                                               /**< (PMC_SLPWKCR) Peripheral ID Position */
#define PMC_SLPWKCR_PID_Msk                   (_U_(0x7F) << PMC_SLPWKCR_PID_Pos)                   /**< (PMC_SLPWKCR) Peripheral ID Mask */
#define PMC_SLPWKCR_PID(value)                (PMC_SLPWKCR_PID_Msk & ((value) << PMC_SLPWKCR_PID_Pos))
#define PMC_SLPWKCR_CMD_Pos                   _U_(12)                                              /**< (PMC_SLPWKCR) Command Position */
#define PMC_SLPWKCR_CMD_Msk                   (_U_(0x1) << PMC_SLPWKCR_CMD_Pos)                    /**< (PMC_SLPWKCR) Command Mask */
#define PMC_SLPWKCR_CMD(value)                (PMC_SLPWKCR_CMD_Msk & ((value) << PMC_SLPWKCR_CMD_Pos))
#define   PMC_SLPWKCR_CMD_0_Val               _U_(0x0)                                             /**< (PMC_SLPWKCR) Read mode.  */
#define   PMC_SLPWKCR_CMD_1_Val               _U_(0x1)                                             /**< (PMC_SLPWKCR) Write mode.  */
#define PMC_SLPWKCR_CMD_0                     (PMC_SLPWKCR_CMD_0_Val << PMC_SLPWKCR_CMD_Pos)       /**< (PMC_SLPWKCR) Read mode. Position  */
#define PMC_SLPWKCR_CMD_1                     (PMC_SLPWKCR_CMD_1_Val << PMC_SLPWKCR_CMD_Pos)       /**< (PMC_SLPWKCR) Write mode. Position  */
#define PMC_SLPWKCR_ASR_Pos                   _U_(16)                                              /**< (PMC_SLPWKCR) Activity Status Register Position */
#define PMC_SLPWKCR_ASR_Msk                   (_U_(0x1) << PMC_SLPWKCR_ASR_Pos)                    /**< (PMC_SLPWKCR) Activity Status Register Mask */
#define PMC_SLPWKCR_ASR(value)                (PMC_SLPWKCR_ASR_Msk & ((value) << PMC_SLPWKCR_ASR_Pos))
#define   PMC_SLPWKCR_ASR_0_Val               _U_(0x0)                                             /**< (PMC_SLPWKCR) The peripheral x is not currently active; the asynchronous partial wakeup (SleepWalking) function can be activated.  */
#define   PMC_SLPWKCR_ASR_1_Val               _U_(0x1)                                             /**< (PMC_SLPWKCR) The peripheral x is currently active; the asynchronous partial wakeup (SleepWalking) function must not be activated.  */
#define PMC_SLPWKCR_ASR_0                     (PMC_SLPWKCR_ASR_0_Val << PMC_SLPWKCR_ASR_Pos)       /**< (PMC_SLPWKCR) The peripheral x is not currently active; the asynchronous partial wakeup (SleepWalking) function can be activated. Position  */
#define PMC_SLPWKCR_ASR_1                     (PMC_SLPWKCR_ASR_1_Val << PMC_SLPWKCR_ASR_Pos)       /**< (PMC_SLPWKCR) The peripheral x is currently active; the asynchronous partial wakeup (SleepWalking) function must not be activated. Position  */
#define PMC_SLPWKCR_SLPWKSR_Pos               _U_(28)                                              /**< (PMC_SLPWKCR) SleepWalking Sleep Register Position */
#define PMC_SLPWKCR_SLPWKSR_Msk               (_U_(0x1) << PMC_SLPWKCR_SLPWKSR_Pos)                /**< (PMC_SLPWKCR) SleepWalking Sleep Register Mask */
#define PMC_SLPWKCR_SLPWKSR(value)            (PMC_SLPWKCR_SLPWKSR_Msk & ((value) << PMC_SLPWKCR_SLPWKSR_Pos))
#define   PMC_SLPWKCR_SLPWKSR_0_Val           _U_(0x0)                                             /**< (PMC_SLPWKCR) The asynchronous partial wakeup (SleepWalking) function of the peripheral is disabled.  */
#define   PMC_SLPWKCR_SLPWKSR_1_Val           _U_(0x1)                                             /**< (PMC_SLPWKCR) The asynchronous partial wakeup (SleepWalking) function of the peripheral is enabled.  */
#define PMC_SLPWKCR_SLPWKSR_0                 (PMC_SLPWKCR_SLPWKSR_0_Val << PMC_SLPWKCR_SLPWKSR_Pos) /**< (PMC_SLPWKCR) The asynchronous partial wakeup (SleepWalking) function of the peripheral is disabled. Position  */
#define PMC_SLPWKCR_SLPWKSR_1                 (PMC_SLPWKCR_SLPWKSR_1_Val << PMC_SLPWKCR_SLPWKSR_Pos) /**< (PMC_SLPWKCR) The asynchronous partial wakeup (SleepWalking) function of the peripheral is enabled. Position  */
#define PMC_SLPWKCR_Msk                       _U_(0x1001107F)                                      /**< (PMC_SLPWKCR) Register Mask  */


/* -------- PMC_MCKLIM : (PMC Offset: 0x9C) (R/W 32) MCK0 Monitor Limits Register -------- */
#define PMC_MCKLIM_RESETVALUE                 _U_(0x00)                                            /**<  (PMC_MCKLIM) MCK0 Monitor Limits Register  Reset Value */

#define PMC_MCKLIM_MCK_LOW_IT_Pos             _U_(0)                                               /**< (PMC_MCKLIM) MCK0 Monitoring Low IT Limit Position */
#define PMC_MCKLIM_MCK_LOW_IT_Msk             (_U_(0xFF) << PMC_MCKLIM_MCK_LOW_IT_Pos)             /**< (PMC_MCKLIM) MCK0 Monitoring Low IT Limit Mask */
#define PMC_MCKLIM_MCK_LOW_IT(value)          (PMC_MCKLIM_MCK_LOW_IT_Msk & ((value) << PMC_MCKLIM_MCK_LOW_IT_Pos))
#define PMC_MCKLIM_MCK_HIGH_IT_Pos            _U_(8)                                               /**< (PMC_MCKLIM) MCK0 Monitoring High IT Limit Position */
#define PMC_MCKLIM_MCK_HIGH_IT_Msk            (_U_(0xFF) << PMC_MCKLIM_MCK_HIGH_IT_Pos)            /**< (PMC_MCKLIM) MCK0 Monitoring High IT Limit Mask */
#define PMC_MCKLIM_MCK_HIGH_IT(value)         (PMC_MCKLIM_MCK_HIGH_IT_Msk & ((value) << PMC_MCKLIM_MCK_HIGH_IT_Pos))
#define PMC_MCKLIM_MCK_LOW_RES_Pos            _U_(16)                                              /**< (PMC_MCKLIM) MCK0 Monitoring Low RESET Limit Position */
#define PMC_MCKLIM_MCK_LOW_RES_Msk            (_U_(0xFF) << PMC_MCKLIM_MCK_LOW_RES_Pos)            /**< (PMC_MCKLIM) MCK0 Monitoring Low RESET Limit Mask */
#define PMC_MCKLIM_MCK_LOW_RES(value)         (PMC_MCKLIM_MCK_LOW_RES_Msk & ((value) << PMC_MCKLIM_MCK_LOW_RES_Pos))
#define PMC_MCKLIM_MCK_HIGH_RES_Pos           _U_(24)                                              /**< (PMC_MCKLIM) MCK0 Monitoring High Reset Limit Position */
#define PMC_MCKLIM_MCK_HIGH_RES_Msk           (_U_(0xFF) << PMC_MCKLIM_MCK_HIGH_RES_Pos)           /**< (PMC_MCKLIM) MCK0 Monitoring High Reset Limit Mask */
#define PMC_MCKLIM_MCK_HIGH_RES(value)        (PMC_MCKLIM_MCK_HIGH_RES_Msk & ((value) << PMC_MCKLIM_MCK_HIGH_RES_Pos))
#define PMC_MCKLIM_Msk                        _U_(0xFFFFFFFF)                                      /**< (PMC_MCKLIM) Register Mask  */


/* -------- PMC_CSR0 : (PMC Offset: 0xA0) ( R/ 32) Peripheral Clock Status Register 0 -------- */
#define PMC_CSR0_RESETVALUE                   _U_(0x00)                                            /**<  (PMC_CSR0) Peripheral Clock Status Register 0  Reset Value */

#define PMC_CSR0_PID11_Pos                    _U_(11)                                              /**< (PMC_CSR0) Peripheral Clock 11 Status Position */
#define PMC_CSR0_PID11_Msk                    (_U_(0x1) << PMC_CSR0_PID11_Pos)                     /**< (PMC_CSR0) Peripheral Clock 11 Status Mask */
#define PMC_CSR0_PID11(value)                 (PMC_CSR0_PID11_Msk & ((value) << PMC_CSR0_PID11_Pos))
#define   PMC_CSR0_PID11_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID11_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID11_0                      (PMC_CSR0_PID11_0_Val << PMC_CSR0_PID11_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID11_1                      (PMC_CSR0_PID11_1_Val << PMC_CSR0_PID11_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_PID19_Pos                    _U_(19)                                              /**< (PMC_CSR0) Peripheral Clock 19 Status Position */
#define PMC_CSR0_PID19_Msk                    (_U_(0x1) << PMC_CSR0_PID19_Pos)                     /**< (PMC_CSR0) Peripheral Clock 19 Status Mask */
#define PMC_CSR0_PID19(value)                 (PMC_CSR0_PID19_Msk & ((value) << PMC_CSR0_PID19_Pos))
#define   PMC_CSR0_PID19_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID19_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID19_0                      (PMC_CSR0_PID19_0_Val << PMC_CSR0_PID19_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID19_1                      (PMC_CSR0_PID19_1_Val << PMC_CSR0_PID19_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_PID21_Pos                    _U_(21)                                              /**< (PMC_CSR0) Peripheral Clock 21 Status Position */
#define PMC_CSR0_PID21_Msk                    (_U_(0x1) << PMC_CSR0_PID21_Pos)                     /**< (PMC_CSR0) Peripheral Clock 21 Status Mask */
#define PMC_CSR0_PID21(value)                 (PMC_CSR0_PID21_Msk & ((value) << PMC_CSR0_PID21_Pos))
#define   PMC_CSR0_PID21_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID21_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID21_0                      (PMC_CSR0_PID21_0_Val << PMC_CSR0_PID21_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID21_1                      (PMC_CSR0_PID21_1_Val << PMC_CSR0_PID21_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_PID22_Pos                    _U_(22)                                              /**< (PMC_CSR0) Peripheral Clock 22 Status Position */
#define PMC_CSR0_PID22_Msk                    (_U_(0x1) << PMC_CSR0_PID22_Pos)                     /**< (PMC_CSR0) Peripheral Clock 22 Status Mask */
#define PMC_CSR0_PID22(value)                 (PMC_CSR0_PID22_Msk & ((value) << PMC_CSR0_PID22_Pos))
#define   PMC_CSR0_PID22_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID22_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID22_0                      (PMC_CSR0_PID22_0_Val << PMC_CSR0_PID22_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID22_1                      (PMC_CSR0_PID22_1_Val << PMC_CSR0_PID22_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_PID23_Pos                    _U_(23)                                              /**< (PMC_CSR0) Peripheral Clock 23 Status Position */
#define PMC_CSR0_PID23_Msk                    (_U_(0x1) << PMC_CSR0_PID23_Pos)                     /**< (PMC_CSR0) Peripheral Clock 23 Status Mask */
#define PMC_CSR0_PID23(value)                 (PMC_CSR0_PID23_Msk & ((value) << PMC_CSR0_PID23_Pos))
#define   PMC_CSR0_PID23_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID23_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID23_0                      (PMC_CSR0_PID23_0_Val << PMC_CSR0_PID23_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID23_1                      (PMC_CSR0_PID23_1_Val << PMC_CSR0_PID23_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_PID24_Pos                    _U_(24)                                              /**< (PMC_CSR0) Peripheral Clock 24 Status Position */
#define PMC_CSR0_PID24_Msk                    (_U_(0x1) << PMC_CSR0_PID24_Pos)                     /**< (PMC_CSR0) Peripheral Clock 24 Status Mask */
#define PMC_CSR0_PID24(value)                 (PMC_CSR0_PID24_Msk & ((value) << PMC_CSR0_PID24_Pos))
#define   PMC_CSR0_PID24_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID24_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID24_0                      (PMC_CSR0_PID24_0_Val << PMC_CSR0_PID24_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID24_1                      (PMC_CSR0_PID24_1_Val << PMC_CSR0_PID24_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_PID25_Pos                    _U_(25)                                              /**< (PMC_CSR0) Peripheral Clock 25 Status Position */
#define PMC_CSR0_PID25_Msk                    (_U_(0x1) << PMC_CSR0_PID25_Pos)                     /**< (PMC_CSR0) Peripheral Clock 25 Status Mask */
#define PMC_CSR0_PID25(value)                 (PMC_CSR0_PID25_Msk & ((value) << PMC_CSR0_PID25_Pos))
#define   PMC_CSR0_PID25_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID25_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID25_0                      (PMC_CSR0_PID25_0_Val << PMC_CSR0_PID25_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID25_1                      (PMC_CSR0_PID25_1_Val << PMC_CSR0_PID25_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_PID27_Pos                    _U_(27)                                              /**< (PMC_CSR0) Peripheral Clock 27 Status Position */
#define PMC_CSR0_PID27_Msk                    (_U_(0x1) << PMC_CSR0_PID27_Pos)                     /**< (PMC_CSR0) Peripheral Clock 27 Status Mask */
#define PMC_CSR0_PID27(value)                 (PMC_CSR0_PID27_Msk & ((value) << PMC_CSR0_PID27_Pos))
#define   PMC_CSR0_PID27_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID27_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID27_0                      (PMC_CSR0_PID27_0_Val << PMC_CSR0_PID27_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID27_1                      (PMC_CSR0_PID27_1_Val << PMC_CSR0_PID27_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_PID28_Pos                    _U_(28)                                              /**< (PMC_CSR0) Peripheral Clock 28 Status Position */
#define PMC_CSR0_PID28_Msk                    (_U_(0x1) << PMC_CSR0_PID28_Pos)                     /**< (PMC_CSR0) Peripheral Clock 28 Status Mask */
#define PMC_CSR0_PID28(value)                 (PMC_CSR0_PID28_Msk & ((value) << PMC_CSR0_PID28_Pos))
#define   PMC_CSR0_PID28_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID28_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID28_0                      (PMC_CSR0_PID28_0_Val << PMC_CSR0_PID28_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID28_1                      (PMC_CSR0_PID28_1_Val << PMC_CSR0_PID28_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_PID30_Pos                    _U_(30)                                              /**< (PMC_CSR0) Peripheral Clock 30 Status Position */
#define PMC_CSR0_PID30_Msk                    (_U_(0x1) << PMC_CSR0_PID30_Pos)                     /**< (PMC_CSR0) Peripheral Clock 30 Status Mask */
#define PMC_CSR0_PID30(value)                 (PMC_CSR0_PID30_Msk & ((value) << PMC_CSR0_PID30_Pos))
#define   PMC_CSR0_PID30_0_Val                _U_(0x0)                                             /**< (PMC_CSR0) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR0_PID30_1_Val                _U_(0x1)                                             /**< (PMC_CSR0) The corresponding peripheral clock is enabled.  */
#define PMC_CSR0_PID30_0                      (PMC_CSR0_PID30_0_Val << PMC_CSR0_PID30_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR0_PID30_1                      (PMC_CSR0_PID30_1_Val << PMC_CSR0_PID30_Pos)         /**< (PMC_CSR0) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR0_Msk                          _U_(0x5BE80800)                                      /**< (PMC_CSR0) Register Mask  */

#define PMC_CSR0_PID_Pos                      _U_(11)                                              /**< (PMC_CSR0 Position) Peripheral Clock 3x Status */
#define PMC_CSR0_PID_Msk                      (_U_(0x3FF) << PMC_CSR0_PID_Pos)                     /**< (PMC_CSR0 Mask) PID */
#define PMC_CSR0_PID(value)                   (PMC_CSR0_PID_Msk & ((value) << PMC_CSR0_PID_Pos))   

/* -------- PMC_CSR1 : (PMC Offset: 0xA4) ( R/ 32) Peripheral Clock Status Register 1 -------- */
#define PMC_CSR1_RESETVALUE                   _U_(0x00)                                            /**<  (PMC_CSR1) Peripheral Clock Status Register 1  Reset Value */

#define PMC_CSR1_PID32_Pos                    _U_(0)                                               /**< (PMC_CSR1) Peripheral Clock 32 Status Position */
#define PMC_CSR1_PID32_Msk                    (_U_(0x1) << PMC_CSR1_PID32_Pos)                     /**< (PMC_CSR1) Peripheral Clock 32 Status Mask */
#define PMC_CSR1_PID32(value)                 (PMC_CSR1_PID32_Msk & ((value) << PMC_CSR1_PID32_Pos))
#define   PMC_CSR1_PID32_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID32_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID32_0                      (PMC_CSR1_PID32_0_Val << PMC_CSR1_PID32_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID32_1                      (PMC_CSR1_PID32_1_Val << PMC_CSR1_PID32_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID33_Pos                    _U_(1)                                               /**< (PMC_CSR1) Peripheral Clock 33 Status Position */
#define PMC_CSR1_PID33_Msk                    (_U_(0x1) << PMC_CSR1_PID33_Pos)                     /**< (PMC_CSR1) Peripheral Clock 33 Status Mask */
#define PMC_CSR1_PID33(value)                 (PMC_CSR1_PID33_Msk & ((value) << PMC_CSR1_PID33_Pos))
#define   PMC_CSR1_PID33_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID33_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID33_0                      (PMC_CSR1_PID33_0_Val << PMC_CSR1_PID33_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID33_1                      (PMC_CSR1_PID33_1_Val << PMC_CSR1_PID33_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID34_Pos                    _U_(2)                                               /**< (PMC_CSR1) Peripheral Clock 34 Status Position */
#define PMC_CSR1_PID34_Msk                    (_U_(0x1) << PMC_CSR1_PID34_Pos)                     /**< (PMC_CSR1) Peripheral Clock 34 Status Mask */
#define PMC_CSR1_PID34(value)                 (PMC_CSR1_PID34_Msk & ((value) << PMC_CSR1_PID34_Pos))
#define   PMC_CSR1_PID34_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID34_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID34_0                      (PMC_CSR1_PID34_0_Val << PMC_CSR1_PID34_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID34_1                      (PMC_CSR1_PID34_1_Val << PMC_CSR1_PID34_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID37_Pos                    _U_(5)                                               /**< (PMC_CSR1) Peripheral Clock 37 Status Position */
#define PMC_CSR1_PID37_Msk                    (_U_(0x1) << PMC_CSR1_PID37_Pos)                     /**< (PMC_CSR1) Peripheral Clock 37 Status Mask */
#define PMC_CSR1_PID37(value)                 (PMC_CSR1_PID37_Msk & ((value) << PMC_CSR1_PID37_Pos))
#define   PMC_CSR1_PID37_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID37_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID37_0                      (PMC_CSR1_PID37_0_Val << PMC_CSR1_PID37_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID37_1                      (PMC_CSR1_PID37_1_Val << PMC_CSR1_PID37_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID38_Pos                    _U_(6)                                               /**< (PMC_CSR1) Peripheral Clock 38 Status Position */
#define PMC_CSR1_PID38_Msk                    (_U_(0x1) << PMC_CSR1_PID38_Pos)                     /**< (PMC_CSR1) Peripheral Clock 38 Status Mask */
#define PMC_CSR1_PID38(value)                 (PMC_CSR1_PID38_Msk & ((value) << PMC_CSR1_PID38_Pos))
#define   PMC_CSR1_PID38_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID38_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID38_0                      (PMC_CSR1_PID38_0_Val << PMC_CSR1_PID38_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID38_1                      (PMC_CSR1_PID38_1_Val << PMC_CSR1_PID38_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID39_Pos                    _U_(7)                                               /**< (PMC_CSR1) Peripheral Clock 39 Status Position */
#define PMC_CSR1_PID39_Msk                    (_U_(0x1) << PMC_CSR1_PID39_Pos)                     /**< (PMC_CSR1) Peripheral Clock 39 Status Mask */
#define PMC_CSR1_PID39(value)                 (PMC_CSR1_PID39_Msk & ((value) << PMC_CSR1_PID39_Pos))
#define   PMC_CSR1_PID39_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID39_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID39_0                      (PMC_CSR1_PID39_0_Val << PMC_CSR1_PID39_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID39_1                      (PMC_CSR1_PID39_1_Val << PMC_CSR1_PID39_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID40_Pos                    _U_(8)                                               /**< (PMC_CSR1) Peripheral Clock 40 Status Position */
#define PMC_CSR1_PID40_Msk                    (_U_(0x1) << PMC_CSR1_PID40_Pos)                     /**< (PMC_CSR1) Peripheral Clock 40 Status Mask */
#define PMC_CSR1_PID40(value)                 (PMC_CSR1_PID40_Msk & ((value) << PMC_CSR1_PID40_Pos))
#define   PMC_CSR1_PID40_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID40_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID40_0                      (PMC_CSR1_PID40_0_Val << PMC_CSR1_PID40_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID40_1                      (PMC_CSR1_PID40_1_Val << PMC_CSR1_PID40_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID41_Pos                    _U_(9)                                               /**< (PMC_CSR1) Peripheral Clock 41 Status Position */
#define PMC_CSR1_PID41_Msk                    (_U_(0x1) << PMC_CSR1_PID41_Pos)                     /**< (PMC_CSR1) Peripheral Clock 41 Status Mask */
#define PMC_CSR1_PID41(value)                 (PMC_CSR1_PID41_Msk & ((value) << PMC_CSR1_PID41_Pos))
#define   PMC_CSR1_PID41_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID41_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID41_0                      (PMC_CSR1_PID41_0_Val << PMC_CSR1_PID41_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID41_1                      (PMC_CSR1_PID41_1_Val << PMC_CSR1_PID41_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID42_Pos                    _U_(10)                                              /**< (PMC_CSR1) Peripheral Clock 42 Status Position */
#define PMC_CSR1_PID42_Msk                    (_U_(0x1) << PMC_CSR1_PID42_Pos)                     /**< (PMC_CSR1) Peripheral Clock 42 Status Mask */
#define PMC_CSR1_PID42(value)                 (PMC_CSR1_PID42_Msk & ((value) << PMC_CSR1_PID42_Pos))
#define   PMC_CSR1_PID42_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID42_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID42_0                      (PMC_CSR1_PID42_0_Val << PMC_CSR1_PID42_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID42_1                      (PMC_CSR1_PID42_1_Val << PMC_CSR1_PID42_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID43_Pos                    _U_(11)                                              /**< (PMC_CSR1) Peripheral Clock 43 Status Position */
#define PMC_CSR1_PID43_Msk                    (_U_(0x1) << PMC_CSR1_PID43_Pos)                     /**< (PMC_CSR1) Peripheral Clock 43 Status Mask */
#define PMC_CSR1_PID43(value)                 (PMC_CSR1_PID43_Msk & ((value) << PMC_CSR1_PID43_Pos))
#define   PMC_CSR1_PID43_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID43_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID43_0                      (PMC_CSR1_PID43_0_Val << PMC_CSR1_PID43_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID43_1                      (PMC_CSR1_PID43_1_Val << PMC_CSR1_PID43_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID44_Pos                    _U_(12)                                              /**< (PMC_CSR1) Peripheral Clock 44 Status Position */
#define PMC_CSR1_PID44_Msk                    (_U_(0x1) << PMC_CSR1_PID44_Pos)                     /**< (PMC_CSR1) Peripheral Clock 44 Status Mask */
#define PMC_CSR1_PID44(value)                 (PMC_CSR1_PID44_Msk & ((value) << PMC_CSR1_PID44_Pos))
#define   PMC_CSR1_PID44_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID44_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID44_0                      (PMC_CSR1_PID44_0_Val << PMC_CSR1_PID44_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID44_1                      (PMC_CSR1_PID44_1_Val << PMC_CSR1_PID44_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID45_Pos                    _U_(13)                                              /**< (PMC_CSR1) Peripheral Clock 45 Status Position */
#define PMC_CSR1_PID45_Msk                    (_U_(0x1) << PMC_CSR1_PID45_Pos)                     /**< (PMC_CSR1) Peripheral Clock 45 Status Mask */
#define PMC_CSR1_PID45(value)                 (PMC_CSR1_PID45_Msk & ((value) << PMC_CSR1_PID45_Pos))
#define   PMC_CSR1_PID45_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID45_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID45_0                      (PMC_CSR1_PID45_0_Val << PMC_CSR1_PID45_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID45_1                      (PMC_CSR1_PID45_1_Val << PMC_CSR1_PID45_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID46_Pos                    _U_(14)                                              /**< (PMC_CSR1) Peripheral Clock 46 Status Position */
#define PMC_CSR1_PID46_Msk                    (_U_(0x1) << PMC_CSR1_PID46_Pos)                     /**< (PMC_CSR1) Peripheral Clock 46 Status Mask */
#define PMC_CSR1_PID46(value)                 (PMC_CSR1_PID46_Msk & ((value) << PMC_CSR1_PID46_Pos))
#define   PMC_CSR1_PID46_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID46_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID46_0                      (PMC_CSR1_PID46_0_Val << PMC_CSR1_PID46_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID46_1                      (PMC_CSR1_PID46_1_Val << PMC_CSR1_PID46_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID47_Pos                    _U_(15)                                              /**< (PMC_CSR1) Peripheral Clock 47 Status Position */
#define PMC_CSR1_PID47_Msk                    (_U_(0x1) << PMC_CSR1_PID47_Pos)                     /**< (PMC_CSR1) Peripheral Clock 47 Status Mask */
#define PMC_CSR1_PID47(value)                 (PMC_CSR1_PID47_Msk & ((value) << PMC_CSR1_PID47_Pos))
#define   PMC_CSR1_PID47_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID47_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID47_0                      (PMC_CSR1_PID47_0_Val << PMC_CSR1_PID47_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID47_1                      (PMC_CSR1_PID47_1_Val << PMC_CSR1_PID47_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID48_Pos                    _U_(16)                                              /**< (PMC_CSR1) Peripheral Clock 48 Status Position */
#define PMC_CSR1_PID48_Msk                    (_U_(0x1) << PMC_CSR1_PID48_Pos)                     /**< (PMC_CSR1) Peripheral Clock 48 Status Mask */
#define PMC_CSR1_PID48(value)                 (PMC_CSR1_PID48_Msk & ((value) << PMC_CSR1_PID48_Pos))
#define   PMC_CSR1_PID48_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID48_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID48_0                      (PMC_CSR1_PID48_0_Val << PMC_CSR1_PID48_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID48_1                      (PMC_CSR1_PID48_1_Val << PMC_CSR1_PID48_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID49_Pos                    _U_(17)                                              /**< (PMC_CSR1) Peripheral Clock 49 Status Position */
#define PMC_CSR1_PID49_Msk                    (_U_(0x1) << PMC_CSR1_PID49_Pos)                     /**< (PMC_CSR1) Peripheral Clock 49 Status Mask */
#define PMC_CSR1_PID49(value)                 (PMC_CSR1_PID49_Msk & ((value) << PMC_CSR1_PID49_Pos))
#define   PMC_CSR1_PID49_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID49_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID49_0                      (PMC_CSR1_PID49_0_Val << PMC_CSR1_PID49_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID49_1                      (PMC_CSR1_PID49_1_Val << PMC_CSR1_PID49_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID51_Pos                    _U_(19)                                              /**< (PMC_CSR1) Peripheral Clock 51 Status Position */
#define PMC_CSR1_PID51_Msk                    (_U_(0x1) << PMC_CSR1_PID51_Pos)                     /**< (PMC_CSR1) Peripheral Clock 51 Status Mask */
#define PMC_CSR1_PID51(value)                 (PMC_CSR1_PID51_Msk & ((value) << PMC_CSR1_PID51_Pos))
#define   PMC_CSR1_PID51_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID51_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID51_0                      (PMC_CSR1_PID51_0_Val << PMC_CSR1_PID51_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID51_1                      (PMC_CSR1_PID51_1_Val << PMC_CSR1_PID51_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID52_Pos                    _U_(20)                                              /**< (PMC_CSR1) Peripheral Clock 52 Status Position */
#define PMC_CSR1_PID52_Msk                    (_U_(0x1) << PMC_CSR1_PID52_Pos)                     /**< (PMC_CSR1) Peripheral Clock 52 Status Mask */
#define PMC_CSR1_PID52(value)                 (PMC_CSR1_PID52_Msk & ((value) << PMC_CSR1_PID52_Pos))
#define   PMC_CSR1_PID52_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID52_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID52_0                      (PMC_CSR1_PID52_0_Val << PMC_CSR1_PID52_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID52_1                      (PMC_CSR1_PID52_1_Val << PMC_CSR1_PID52_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID55_Pos                    _U_(23)                                              /**< (PMC_CSR1) Peripheral Clock 55 Status Position */
#define PMC_CSR1_PID55_Msk                    (_U_(0x1) << PMC_CSR1_PID55_Pos)                     /**< (PMC_CSR1) Peripheral Clock 55 Status Mask */
#define PMC_CSR1_PID55(value)                 (PMC_CSR1_PID55_Msk & ((value) << PMC_CSR1_PID55_Pos))
#define   PMC_CSR1_PID55_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID55_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID55_0                      (PMC_CSR1_PID55_0_Val << PMC_CSR1_PID55_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID55_1                      (PMC_CSR1_PID55_1_Val << PMC_CSR1_PID55_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID56_Pos                    _U_(24)                                              /**< (PMC_CSR1) Peripheral Clock 56 Status Position */
#define PMC_CSR1_PID56_Msk                    (_U_(0x1) << PMC_CSR1_PID56_Pos)                     /**< (PMC_CSR1) Peripheral Clock 56 Status Mask */
#define PMC_CSR1_PID56(value)                 (PMC_CSR1_PID56_Msk & ((value) << PMC_CSR1_PID56_Pos))
#define   PMC_CSR1_PID56_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID56_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID56_0                      (PMC_CSR1_PID56_0_Val << PMC_CSR1_PID56_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID56_1                      (PMC_CSR1_PID56_1_Val << PMC_CSR1_PID56_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID57_Pos                    _U_(25)                                              /**< (PMC_CSR1) Peripheral Clock 57 Status Position */
#define PMC_CSR1_PID57_Msk                    (_U_(0x1) << PMC_CSR1_PID57_Pos)                     /**< (PMC_CSR1) Peripheral Clock 57 Status Mask */
#define PMC_CSR1_PID57(value)                 (PMC_CSR1_PID57_Msk & ((value) << PMC_CSR1_PID57_Pos))
#define   PMC_CSR1_PID57_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID57_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID57_0                      (PMC_CSR1_PID57_0_Val << PMC_CSR1_PID57_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID57_1                      (PMC_CSR1_PID57_1_Val << PMC_CSR1_PID57_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID58_Pos                    _U_(26)                                              /**< (PMC_CSR1) Peripheral Clock 58 Status Position */
#define PMC_CSR1_PID58_Msk                    (_U_(0x1) << PMC_CSR1_PID58_Pos)                     /**< (PMC_CSR1) Peripheral Clock 58 Status Mask */
#define PMC_CSR1_PID58(value)                 (PMC_CSR1_PID58_Msk & ((value) << PMC_CSR1_PID58_Pos))
#define   PMC_CSR1_PID58_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID58_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID58_0                      (PMC_CSR1_PID58_0_Val << PMC_CSR1_PID58_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID58_1                      (PMC_CSR1_PID58_1_Val << PMC_CSR1_PID58_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID60_Pos                    _U_(28)                                              /**< (PMC_CSR1) Peripheral Clock 60 Status Position */
#define PMC_CSR1_PID60_Msk                    (_U_(0x1) << PMC_CSR1_PID60_Pos)                     /**< (PMC_CSR1) Peripheral Clock 60 Status Mask */
#define PMC_CSR1_PID60(value)                 (PMC_CSR1_PID60_Msk & ((value) << PMC_CSR1_PID60_Pos))
#define   PMC_CSR1_PID60_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID60_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID60_0                      (PMC_CSR1_PID60_0_Val << PMC_CSR1_PID60_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID60_1                      (PMC_CSR1_PID60_1_Val << PMC_CSR1_PID60_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID61_Pos                    _U_(29)                                              /**< (PMC_CSR1) Peripheral Clock 61 Status Position */
#define PMC_CSR1_PID61_Msk                    (_U_(0x1) << PMC_CSR1_PID61_Pos)                     /**< (PMC_CSR1) Peripheral Clock 61 Status Mask */
#define PMC_CSR1_PID61(value)                 (PMC_CSR1_PID61_Msk & ((value) << PMC_CSR1_PID61_Pos))
#define   PMC_CSR1_PID61_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID61_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID61_0                      (PMC_CSR1_PID61_0_Val << PMC_CSR1_PID61_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID61_1                      (PMC_CSR1_PID61_1_Val << PMC_CSR1_PID61_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID62_Pos                    _U_(30)                                              /**< (PMC_CSR1) Peripheral Clock 62 Status Position */
#define PMC_CSR1_PID62_Msk                    (_U_(0x1) << PMC_CSR1_PID62_Pos)                     /**< (PMC_CSR1) Peripheral Clock 62 Status Mask */
#define PMC_CSR1_PID62(value)                 (PMC_CSR1_PID62_Msk & ((value) << PMC_CSR1_PID62_Pos))
#define   PMC_CSR1_PID62_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID62_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID62_0                      (PMC_CSR1_PID62_0_Val << PMC_CSR1_PID62_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID62_1                      (PMC_CSR1_PID62_1_Val << PMC_CSR1_PID62_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_PID63_Pos                    _U_(31)                                              /**< (PMC_CSR1) Peripheral Clock 63 Status Position */
#define PMC_CSR1_PID63_Msk                    (_U_(0x1) << PMC_CSR1_PID63_Pos)                     /**< (PMC_CSR1) Peripheral Clock 63 Status Mask */
#define PMC_CSR1_PID63(value)                 (PMC_CSR1_PID63_Msk & ((value) << PMC_CSR1_PID63_Pos))
#define   PMC_CSR1_PID63_0_Val                _U_(0x0)                                             /**< (PMC_CSR1) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR1_PID63_1_Val                _U_(0x1)                                             /**< (PMC_CSR1) The corresponding peripheral clock is enabled.  */
#define PMC_CSR1_PID63_0                      (PMC_CSR1_PID63_0_Val << PMC_CSR1_PID63_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR1_PID63_1                      (PMC_CSR1_PID63_1_Val << PMC_CSR1_PID63_Pos)         /**< (PMC_CSR1) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR1_Msk                          _U_(0xF79BFFE7)                                      /**< (PMC_CSR1) Register Mask  */

#define PMC_CSR1_PID_Pos                      _U_(0)                                               /**< (PMC_CSR1 Position) Peripheral Clock 63 Status */
#define PMC_CSR1_PID_Msk                      (_U_(0x3FFFFFF) << PMC_CSR1_PID_Pos)                 /**< (PMC_CSR1 Mask) PID */
#define PMC_CSR1_PID(value)                   (PMC_CSR1_PID_Msk & ((value) << PMC_CSR1_PID_Pos))   

/* -------- PMC_CSR2 : (PMC Offset: 0xA8) ( R/ 32) Peripheral Clock Status Register 2 -------- */
#define PMC_CSR2_RESETVALUE                   _U_(0x00)                                            /**<  (PMC_CSR2) Peripheral Clock Status Register 2  Reset Value */

#define PMC_CSR2_PID64_Pos                    _U_(0)                                               /**< (PMC_CSR2) Peripheral Clock 64 Status Position */
#define PMC_CSR2_PID64_Msk                    (_U_(0x1) << PMC_CSR2_PID64_Pos)                     /**< (PMC_CSR2) Peripheral Clock 64 Status Mask */
#define PMC_CSR2_PID64(value)                 (PMC_CSR2_PID64_Msk & ((value) << PMC_CSR2_PID64_Pos))
#define   PMC_CSR2_PID64_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID64_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID64_0                      (PMC_CSR2_PID64_0_Val << PMC_CSR2_PID64_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID64_1                      (PMC_CSR2_PID64_1_Val << PMC_CSR2_PID64_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID65_Pos                    _U_(1)                                               /**< (PMC_CSR2) Peripheral Clock 65 Status Position */
#define PMC_CSR2_PID65_Msk                    (_U_(0x1) << PMC_CSR2_PID65_Pos)                     /**< (PMC_CSR2) Peripheral Clock 65 Status Mask */
#define PMC_CSR2_PID65(value)                 (PMC_CSR2_PID65_Msk & ((value) << PMC_CSR2_PID65_Pos))
#define   PMC_CSR2_PID65_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID65_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID65_0                      (PMC_CSR2_PID65_0_Val << PMC_CSR2_PID65_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID65_1                      (PMC_CSR2_PID65_1_Val << PMC_CSR2_PID65_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID66_Pos                    _U_(2)                                               /**< (PMC_CSR2) Peripheral Clock 66 Status Position */
#define PMC_CSR2_PID66_Msk                    (_U_(0x1) << PMC_CSR2_PID66_Pos)                     /**< (PMC_CSR2) Peripheral Clock 66 Status Mask */
#define PMC_CSR2_PID66(value)                 (PMC_CSR2_PID66_Msk & ((value) << PMC_CSR2_PID66_Pos))
#define   PMC_CSR2_PID66_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID66_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID66_0                      (PMC_CSR2_PID66_0_Val << PMC_CSR2_PID66_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID66_1                      (PMC_CSR2_PID66_1_Val << PMC_CSR2_PID66_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID68_Pos                    _U_(4)                                               /**< (PMC_CSR2) Peripheral Clock 68 Status Position */
#define PMC_CSR2_PID68_Msk                    (_U_(0x1) << PMC_CSR2_PID68_Pos)                     /**< (PMC_CSR2) Peripheral Clock 68 Status Mask */
#define PMC_CSR2_PID68(value)                 (PMC_CSR2_PID68_Msk & ((value) << PMC_CSR2_PID68_Pos))
#define   PMC_CSR2_PID68_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID68_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID68_0                      (PMC_CSR2_PID68_0_Val << PMC_CSR2_PID68_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID68_1                      (PMC_CSR2_PID68_1_Val << PMC_CSR2_PID68_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID69_Pos                    _U_(5)                                               /**< (PMC_CSR2) Peripheral Clock 69 Status Position */
#define PMC_CSR2_PID69_Msk                    (_U_(0x1) << PMC_CSR2_PID69_Pos)                     /**< (PMC_CSR2) Peripheral Clock 69 Status Mask */
#define PMC_CSR2_PID69(value)                 (PMC_CSR2_PID69_Msk & ((value) << PMC_CSR2_PID69_Pos))
#define   PMC_CSR2_PID69_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID69_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID69_0                      (PMC_CSR2_PID69_0_Val << PMC_CSR2_PID69_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID69_1                      (PMC_CSR2_PID69_1_Val << PMC_CSR2_PID69_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID70_Pos                    _U_(6)                                               /**< (PMC_CSR2) Peripheral Clock 70 Status Position */
#define PMC_CSR2_PID70_Msk                    (_U_(0x1) << PMC_CSR2_PID70_Pos)                     /**< (PMC_CSR2) Peripheral Clock 70 Status Mask */
#define PMC_CSR2_PID70(value)                 (PMC_CSR2_PID70_Msk & ((value) << PMC_CSR2_PID70_Pos))
#define   PMC_CSR2_PID70_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID70_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID70_0                      (PMC_CSR2_PID70_0_Val << PMC_CSR2_PID70_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID70_1                      (PMC_CSR2_PID70_1_Val << PMC_CSR2_PID70_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID71_Pos                    _U_(7)                                               /**< (PMC_CSR2) Peripheral Clock 71 Status Position */
#define PMC_CSR2_PID71_Msk                    (_U_(0x1) << PMC_CSR2_PID71_Pos)                     /**< (PMC_CSR2) Peripheral Clock 71 Status Mask */
#define PMC_CSR2_PID71(value)                 (PMC_CSR2_PID71_Msk & ((value) << PMC_CSR2_PID71_Pos))
#define   PMC_CSR2_PID71_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID71_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID71_0                      (PMC_CSR2_PID71_0_Val << PMC_CSR2_PID71_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID71_1                      (PMC_CSR2_PID71_1_Val << PMC_CSR2_PID71_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID72_Pos                    _U_(8)                                               /**< (PMC_CSR2) Peripheral Clock 72 Status Position */
#define PMC_CSR2_PID72_Msk                    (_U_(0x1) << PMC_CSR2_PID72_Pos)                     /**< (PMC_CSR2) Peripheral Clock 72 Status Mask */
#define PMC_CSR2_PID72(value)                 (PMC_CSR2_PID72_Msk & ((value) << PMC_CSR2_PID72_Pos))
#define   PMC_CSR2_PID72_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID72_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID72_0                      (PMC_CSR2_PID72_0_Val << PMC_CSR2_PID72_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID72_1                      (PMC_CSR2_PID72_1_Val << PMC_CSR2_PID72_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID73_Pos                    _U_(9)                                               /**< (PMC_CSR2) Peripheral Clock 73 Status Position */
#define PMC_CSR2_PID73_Msk                    (_U_(0x1) << PMC_CSR2_PID73_Pos)                     /**< (PMC_CSR2) Peripheral Clock 73 Status Mask */
#define PMC_CSR2_PID73(value)                 (PMC_CSR2_PID73_Msk & ((value) << PMC_CSR2_PID73_Pos))
#define   PMC_CSR2_PID73_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID73_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID73_0                      (PMC_CSR2_PID73_0_Val << PMC_CSR2_PID73_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID73_1                      (PMC_CSR2_PID73_1_Val << PMC_CSR2_PID73_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID74_Pos                    _U_(10)                                              /**< (PMC_CSR2) Peripheral Clock 74 Status Position */
#define PMC_CSR2_PID74_Msk                    (_U_(0x1) << PMC_CSR2_PID74_Pos)                     /**< (PMC_CSR2) Peripheral Clock 74 Status Mask */
#define PMC_CSR2_PID74(value)                 (PMC_CSR2_PID74_Msk & ((value) << PMC_CSR2_PID74_Pos))
#define   PMC_CSR2_PID74_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID74_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID74_0                      (PMC_CSR2_PID74_0_Val << PMC_CSR2_PID74_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID74_1                      (PMC_CSR2_PID74_1_Val << PMC_CSR2_PID74_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID75_Pos                    _U_(11)                                              /**< (PMC_CSR2) Peripheral Clock 75 Status Position */
#define PMC_CSR2_PID75_Msk                    (_U_(0x1) << PMC_CSR2_PID75_Pos)                     /**< (PMC_CSR2) Peripheral Clock 75 Status Mask */
#define PMC_CSR2_PID75(value)                 (PMC_CSR2_PID75_Msk & ((value) << PMC_CSR2_PID75_Pos))
#define   PMC_CSR2_PID75_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID75_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID75_0                      (PMC_CSR2_PID75_0_Val << PMC_CSR2_PID75_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID75_1                      (PMC_CSR2_PID75_1_Val << PMC_CSR2_PID75_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID77_Pos                    _U_(13)                                              /**< (PMC_CSR2) Peripheral Clock 77 Status Position */
#define PMC_CSR2_PID77_Msk                    (_U_(0x1) << PMC_CSR2_PID77_Pos)                     /**< (PMC_CSR2) Peripheral Clock 77 Status Mask */
#define PMC_CSR2_PID77(value)                 (PMC_CSR2_PID77_Msk & ((value) << PMC_CSR2_PID77_Pos))
#define   PMC_CSR2_PID77_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID77_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID77_0                      (PMC_CSR2_PID77_0_Val << PMC_CSR2_PID77_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID77_1                      (PMC_CSR2_PID77_1_Val << PMC_CSR2_PID77_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID78_Pos                    _U_(14)                                              /**< (PMC_CSR2) Peripheral Clock 78 Status Position */
#define PMC_CSR2_PID78_Msk                    (_U_(0x1) << PMC_CSR2_PID78_Pos)                     /**< (PMC_CSR2) Peripheral Clock 78 Status Mask */
#define PMC_CSR2_PID78(value)                 (PMC_CSR2_PID78_Msk & ((value) << PMC_CSR2_PID78_Pos))
#define   PMC_CSR2_PID78_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID78_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID78_0                      (PMC_CSR2_PID78_0_Val << PMC_CSR2_PID78_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID78_1                      (PMC_CSR2_PID78_1_Val << PMC_CSR2_PID78_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID79_Pos                    _U_(15)                                              /**< (PMC_CSR2) Peripheral Clock 79 Status Position */
#define PMC_CSR2_PID79_Msk                    (_U_(0x1) << PMC_CSR2_PID79_Pos)                     /**< (PMC_CSR2) Peripheral Clock 79 Status Mask */
#define PMC_CSR2_PID79(value)                 (PMC_CSR2_PID79_Msk & ((value) << PMC_CSR2_PID79_Pos))
#define   PMC_CSR2_PID79_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID79_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID79_0                      (PMC_CSR2_PID79_0_Val << PMC_CSR2_PID79_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID79_1                      (PMC_CSR2_PID79_1_Val << PMC_CSR2_PID79_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID80_Pos                    _U_(16)                                              /**< (PMC_CSR2) Peripheral Clock 80 Status Position */
#define PMC_CSR2_PID80_Msk                    (_U_(0x1) << PMC_CSR2_PID80_Pos)                     /**< (PMC_CSR2) Peripheral Clock 80 Status Mask */
#define PMC_CSR2_PID80(value)                 (PMC_CSR2_PID80_Msk & ((value) << PMC_CSR2_PID80_Pos))
#define   PMC_CSR2_PID80_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID80_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID80_0                      (PMC_CSR2_PID80_0_Val << PMC_CSR2_PID80_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID80_1                      (PMC_CSR2_PID80_1_Val << PMC_CSR2_PID80_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID81_Pos                    _U_(17)                                              /**< (PMC_CSR2) Peripheral Clock 81 Status Position */
#define PMC_CSR2_PID81_Msk                    (_U_(0x1) << PMC_CSR2_PID81_Pos)                     /**< (PMC_CSR2) Peripheral Clock 81 Status Mask */
#define PMC_CSR2_PID81(value)                 (PMC_CSR2_PID81_Msk & ((value) << PMC_CSR2_PID81_Pos))
#define   PMC_CSR2_PID81_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID81_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID81_0                      (PMC_CSR2_PID81_0_Val << PMC_CSR2_PID81_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID81_1                      (PMC_CSR2_PID81_1_Val << PMC_CSR2_PID81_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID82_Pos                    _U_(18)                                              /**< (PMC_CSR2) Peripheral Clock 82 Status Position */
#define PMC_CSR2_PID82_Msk                    (_U_(0x1) << PMC_CSR2_PID82_Pos)                     /**< (PMC_CSR2) Peripheral Clock 82 Status Mask */
#define PMC_CSR2_PID82(value)                 (PMC_CSR2_PID82_Msk & ((value) << PMC_CSR2_PID82_Pos))
#define   PMC_CSR2_PID82_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID82_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID82_0                      (PMC_CSR2_PID82_0_Val << PMC_CSR2_PID82_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID82_1                      (PMC_CSR2_PID82_1_Val << PMC_CSR2_PID82_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID83_Pos                    _U_(19)                                              /**< (PMC_CSR2) Peripheral Clock 83 Status Position */
#define PMC_CSR2_PID83_Msk                    (_U_(0x1) << PMC_CSR2_PID83_Pos)                     /**< (PMC_CSR2) Peripheral Clock 83 Status Mask */
#define PMC_CSR2_PID83(value)                 (PMC_CSR2_PID83_Msk & ((value) << PMC_CSR2_PID83_Pos))
#define   PMC_CSR2_PID83_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID83_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID83_0                      (PMC_CSR2_PID83_0_Val << PMC_CSR2_PID83_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID83_1                      (PMC_CSR2_PID83_1_Val << PMC_CSR2_PID83_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID84_Pos                    _U_(20)                                              /**< (PMC_CSR2) Peripheral Clock 84 Status Position */
#define PMC_CSR2_PID84_Msk                    (_U_(0x1) << PMC_CSR2_PID84_Pos)                     /**< (PMC_CSR2) Peripheral Clock 84 Status Mask */
#define PMC_CSR2_PID84(value)                 (PMC_CSR2_PID84_Msk & ((value) << PMC_CSR2_PID84_Pos))
#define   PMC_CSR2_PID84_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID84_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID84_0                      (PMC_CSR2_PID84_0_Val << PMC_CSR2_PID84_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID84_1                      (PMC_CSR2_PID84_1_Val << PMC_CSR2_PID84_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID85_Pos                    _U_(21)                                              /**< (PMC_CSR2) Peripheral Clock 85 Status Position */
#define PMC_CSR2_PID85_Msk                    (_U_(0x1) << PMC_CSR2_PID85_Pos)                     /**< (PMC_CSR2) Peripheral Clock 85 Status Mask */
#define PMC_CSR2_PID85(value)                 (PMC_CSR2_PID85_Msk & ((value) << PMC_CSR2_PID85_Pos))
#define   PMC_CSR2_PID85_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID85_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID85_0                      (PMC_CSR2_PID85_0_Val << PMC_CSR2_PID85_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID85_1                      (PMC_CSR2_PID85_1_Val << PMC_CSR2_PID85_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID86_Pos                    _U_(22)                                              /**< (PMC_CSR2) Peripheral Clock 86 Status Position */
#define PMC_CSR2_PID86_Msk                    (_U_(0x1) << PMC_CSR2_PID86_Pos)                     /**< (PMC_CSR2) Peripheral Clock 86 Status Mask */
#define PMC_CSR2_PID86(value)                 (PMC_CSR2_PID86_Msk & ((value) << PMC_CSR2_PID86_Pos))
#define   PMC_CSR2_PID86_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID86_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID86_0                      (PMC_CSR2_PID86_0_Val << PMC_CSR2_PID86_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID86_1                      (PMC_CSR2_PID86_1_Val << PMC_CSR2_PID86_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID87_Pos                    _U_(23)                                              /**< (PMC_CSR2) Peripheral Clock 87 Status Position */
#define PMC_CSR2_PID87_Msk                    (_U_(0x1) << PMC_CSR2_PID87_Pos)                     /**< (PMC_CSR2) Peripheral Clock 87 Status Mask */
#define PMC_CSR2_PID87(value)                 (PMC_CSR2_PID87_Msk & ((value) << PMC_CSR2_PID87_Pos))
#define   PMC_CSR2_PID87_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID87_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID87_0                      (PMC_CSR2_PID87_0_Val << PMC_CSR2_PID87_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID87_1                      (PMC_CSR2_PID87_1_Val << PMC_CSR2_PID87_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID88_Pos                    _U_(24)                                              /**< (PMC_CSR2) Peripheral Clock 88 Status Position */
#define PMC_CSR2_PID88_Msk                    (_U_(0x1) << PMC_CSR2_PID88_Pos)                     /**< (PMC_CSR2) Peripheral Clock 88 Status Mask */
#define PMC_CSR2_PID88(value)                 (PMC_CSR2_PID88_Msk & ((value) << PMC_CSR2_PID88_Pos))
#define   PMC_CSR2_PID88_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID88_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID88_0                      (PMC_CSR2_PID88_0_Val << PMC_CSR2_PID88_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID88_1                      (PMC_CSR2_PID88_1_Val << PMC_CSR2_PID88_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID89_Pos                    _U_(25)                                              /**< (PMC_CSR2) Peripheral Clock 89 Status Position */
#define PMC_CSR2_PID89_Msk                    (_U_(0x1) << PMC_CSR2_PID89_Pos)                     /**< (PMC_CSR2) Peripheral Clock 89 Status Mask */
#define PMC_CSR2_PID89(value)                 (PMC_CSR2_PID89_Msk & ((value) << PMC_CSR2_PID89_Pos))
#define   PMC_CSR2_PID89_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID89_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID89_0                      (PMC_CSR2_PID89_0_Val << PMC_CSR2_PID89_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID89_1                      (PMC_CSR2_PID89_1_Val << PMC_CSR2_PID89_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID90_Pos                    _U_(26)                                              /**< (PMC_CSR2) Peripheral Clock 90 Status Position */
#define PMC_CSR2_PID90_Msk                    (_U_(0x1) << PMC_CSR2_PID90_Pos)                     /**< (PMC_CSR2) Peripheral Clock 90 Status Mask */
#define PMC_CSR2_PID90(value)                 (PMC_CSR2_PID90_Msk & ((value) << PMC_CSR2_PID90_Pos))
#define   PMC_CSR2_PID90_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID90_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID90_0                      (PMC_CSR2_PID90_0_Val << PMC_CSR2_PID90_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID90_1                      (PMC_CSR2_PID90_1_Val << PMC_CSR2_PID90_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID91_Pos                    _U_(27)                                              /**< (PMC_CSR2) Peripheral Clock 91 Status Position */
#define PMC_CSR2_PID91_Msk                    (_U_(0x1) << PMC_CSR2_PID91_Pos)                     /**< (PMC_CSR2) Peripheral Clock 91 Status Mask */
#define PMC_CSR2_PID91(value)                 (PMC_CSR2_PID91_Msk & ((value) << PMC_CSR2_PID91_Pos))
#define   PMC_CSR2_PID91_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID91_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID91_0                      (PMC_CSR2_PID91_0_Val << PMC_CSR2_PID91_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID91_1                      (PMC_CSR2_PID91_1_Val << PMC_CSR2_PID91_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID92_Pos                    _U_(28)                                              /**< (PMC_CSR2) Peripheral Clock 92 Status Position */
#define PMC_CSR2_PID92_Msk                    (_U_(0x1) << PMC_CSR2_PID92_Pos)                     /**< (PMC_CSR2) Peripheral Clock 92 Status Mask */
#define PMC_CSR2_PID92(value)                 (PMC_CSR2_PID92_Msk & ((value) << PMC_CSR2_PID92_Pos))
#define   PMC_CSR2_PID92_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID92_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID92_0                      (PMC_CSR2_PID92_0_Val << PMC_CSR2_PID92_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID92_1                      (PMC_CSR2_PID92_1_Val << PMC_CSR2_PID92_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID93_Pos                    _U_(29)                                              /**< (PMC_CSR2) Peripheral Clock 93 Status Position */
#define PMC_CSR2_PID93_Msk                    (_U_(0x1) << PMC_CSR2_PID93_Pos)                     /**< (PMC_CSR2) Peripheral Clock 93 Status Mask */
#define PMC_CSR2_PID93(value)                 (PMC_CSR2_PID93_Msk & ((value) << PMC_CSR2_PID93_Pos))
#define   PMC_CSR2_PID93_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID93_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID93_0                      (PMC_CSR2_PID93_0_Val << PMC_CSR2_PID93_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID93_1                      (PMC_CSR2_PID93_1_Val << PMC_CSR2_PID93_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID94_Pos                    _U_(30)                                              /**< (PMC_CSR2) Peripheral Clock 94 Status Position */
#define PMC_CSR2_PID94_Msk                    (_U_(0x1) << PMC_CSR2_PID94_Pos)                     /**< (PMC_CSR2) Peripheral Clock 94 Status Mask */
#define PMC_CSR2_PID94(value)                 (PMC_CSR2_PID94_Msk & ((value) << PMC_CSR2_PID94_Pos))
#define   PMC_CSR2_PID94_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID94_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID94_0                      (PMC_CSR2_PID94_0_Val << PMC_CSR2_PID94_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID94_1                      (PMC_CSR2_PID94_1_Val << PMC_CSR2_PID94_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_PID95_Pos                    _U_(31)                                              /**< (PMC_CSR2) Peripheral Clock 95 Status Position */
#define PMC_CSR2_PID95_Msk                    (_U_(0x1) << PMC_CSR2_PID95_Pos)                     /**< (PMC_CSR2) Peripheral Clock 95 Status Mask */
#define PMC_CSR2_PID95(value)                 (PMC_CSR2_PID95_Msk & ((value) << PMC_CSR2_PID95_Pos))
#define   PMC_CSR2_PID95_0_Val                _U_(0x0)                                             /**< (PMC_CSR2) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR2_PID95_1_Val                _U_(0x1)                                             /**< (PMC_CSR2) The corresponding peripheral clock is enabled.  */
#define PMC_CSR2_PID95_0                      (PMC_CSR2_PID95_0_Val << PMC_CSR2_PID95_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR2_PID95_1                      (PMC_CSR2_PID95_1_Val << PMC_CSR2_PID95_Pos)         /**< (PMC_CSR2) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR2_Msk                          _U_(0xFFFFEFF7)                                      /**< (PMC_CSR2) Register Mask  */

#define PMC_CSR2_PID_Pos                      _U_(0)                                               /**< (PMC_CSR2 Position) Peripheral Clock 95 Status */
#define PMC_CSR2_PID_Msk                      (_U_(0x3FFFFFFF) << PMC_CSR2_PID_Pos)                /**< (PMC_CSR2 Mask) PID */
#define PMC_CSR2_PID(value)                   (PMC_CSR2_PID_Msk & ((value) << PMC_CSR2_PID_Pos))   

/* -------- PMC_CSR3 : (PMC Offset: 0xAC) ( R/ 32) Peripheral Clock Status Register 3 -------- */
#define PMC_CSR3_RESETVALUE                   _U_(0x00)                                            /**<  (PMC_CSR3) Peripheral Clock Status Register 3  Reset Value */

#define PMC_CSR3_PID96_Pos                    _U_(0)                                               /**< (PMC_CSR3) Peripheral Clock 96 Status Position */
#define PMC_CSR3_PID96_Msk                    (_U_(0x1) << PMC_CSR3_PID96_Pos)                     /**< (PMC_CSR3) Peripheral Clock 96 Status Mask */
#define PMC_CSR3_PID96(value)                 (PMC_CSR3_PID96_Msk & ((value) << PMC_CSR3_PID96_Pos))
#define   PMC_CSR3_PID96_0_Val                _U_(0x0)                                             /**< (PMC_CSR3) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR3_PID96_1_Val                _U_(0x1)                                             /**< (PMC_CSR3) The corresponding peripheral clock is enabled.  */
#define PMC_CSR3_PID96_0                      (PMC_CSR3_PID96_0_Val << PMC_CSR3_PID96_Pos)         /**< (PMC_CSR3) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR3_PID96_1                      (PMC_CSR3_PID96_1_Val << PMC_CSR3_PID96_Pos)         /**< (PMC_CSR3) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR3_PID97_Pos                    _U_(1)                                               /**< (PMC_CSR3) Peripheral Clock 97 Status Position */
#define PMC_CSR3_PID97_Msk                    (_U_(0x1) << PMC_CSR3_PID97_Pos)                     /**< (PMC_CSR3) Peripheral Clock 97 Status Mask */
#define PMC_CSR3_PID97(value)                 (PMC_CSR3_PID97_Msk & ((value) << PMC_CSR3_PID97_Pos))
#define   PMC_CSR3_PID97_0_Val                _U_(0x0)                                             /**< (PMC_CSR3) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR3_PID97_1_Val                _U_(0x1)                                             /**< (PMC_CSR3) The corresponding peripheral clock is enabled.  */
#define PMC_CSR3_PID97_0                      (PMC_CSR3_PID97_0_Val << PMC_CSR3_PID97_Pos)         /**< (PMC_CSR3) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR3_PID97_1                      (PMC_CSR3_PID97_1_Val << PMC_CSR3_PID97_Pos)         /**< (PMC_CSR3) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR3_PID98_Pos                    _U_(2)                                               /**< (PMC_CSR3) Peripheral Clock 98 Status Position */
#define PMC_CSR3_PID98_Msk                    (_U_(0x1) << PMC_CSR3_PID98_Pos)                     /**< (PMC_CSR3) Peripheral Clock 98 Status Mask */
#define PMC_CSR3_PID98(value)                 (PMC_CSR3_PID98_Msk & ((value) << PMC_CSR3_PID98_Pos))
#define   PMC_CSR3_PID98_0_Val                _U_(0x0)                                             /**< (PMC_CSR3) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR3_PID98_1_Val                _U_(0x1)                                             /**< (PMC_CSR3) The corresponding peripheral clock is enabled.  */
#define PMC_CSR3_PID98_0                      (PMC_CSR3_PID98_0_Val << PMC_CSR3_PID98_Pos)         /**< (PMC_CSR3) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR3_PID98_1                      (PMC_CSR3_PID98_1_Val << PMC_CSR3_PID98_Pos)         /**< (PMC_CSR3) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR3_PID104_Pos                   _U_(8)                                               /**< (PMC_CSR3) Peripheral Clock 104 Status Position */
#define PMC_CSR3_PID104_Msk                   (_U_(0x1) << PMC_CSR3_PID104_Pos)                    /**< (PMC_CSR3) Peripheral Clock 104 Status Mask */
#define PMC_CSR3_PID104(value)                (PMC_CSR3_PID104_Msk & ((value) << PMC_CSR3_PID104_Pos))
#define   PMC_CSR3_PID104_0_Val               _U_(0x0)                                             /**< (PMC_CSR3) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR3_PID104_1_Val               _U_(0x1)                                             /**< (PMC_CSR3) The corresponding peripheral clock is enabled.  */
#define PMC_CSR3_PID104_0                     (PMC_CSR3_PID104_0_Val << PMC_CSR3_PID104_Pos)       /**< (PMC_CSR3) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR3_PID104_1                     (PMC_CSR3_PID104_1_Val << PMC_CSR3_PID104_Pos)       /**< (PMC_CSR3) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR3_PID105_Pos                   _U_(9)                                               /**< (PMC_CSR3) Peripheral Clock 105 Status Position */
#define PMC_CSR3_PID105_Msk                   (_U_(0x1) << PMC_CSR3_PID105_Pos)                    /**< (PMC_CSR3) Peripheral Clock 105 Status Mask */
#define PMC_CSR3_PID105(value)                (PMC_CSR3_PID105_Msk & ((value) << PMC_CSR3_PID105_Pos))
#define   PMC_CSR3_PID105_0_Val               _U_(0x0)                                             /**< (PMC_CSR3) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR3_PID105_1_Val               _U_(0x1)                                             /**< (PMC_CSR3) The corresponding peripheral clock is enabled.  */
#define PMC_CSR3_PID105_0                     (PMC_CSR3_PID105_0_Val << PMC_CSR3_PID105_Pos)       /**< (PMC_CSR3) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR3_PID105_1                     (PMC_CSR3_PID105_1_Val << PMC_CSR3_PID105_Pos)       /**< (PMC_CSR3) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR3_PID106_Pos                   _U_(10)                                              /**< (PMC_CSR3) Peripheral Clock 106 Status Position */
#define PMC_CSR3_PID106_Msk                   (_U_(0x1) << PMC_CSR3_PID106_Pos)                    /**< (PMC_CSR3) Peripheral Clock 106 Status Mask */
#define PMC_CSR3_PID106(value)                (PMC_CSR3_PID106_Msk & ((value) << PMC_CSR3_PID106_Pos))
#define   PMC_CSR3_PID106_0_Val               _U_(0x0)                                             /**< (PMC_CSR3) The corresponding peripheral clock is disabled.  */
#define   PMC_CSR3_PID106_1_Val               _U_(0x1)                                             /**< (PMC_CSR3) The corresponding peripheral clock is enabled.  */
#define PMC_CSR3_PID106_0                     (PMC_CSR3_PID106_0_Val << PMC_CSR3_PID106_Pos)       /**< (PMC_CSR3) The corresponding peripheral clock is disabled. Position  */
#define PMC_CSR3_PID106_1                     (PMC_CSR3_PID106_1_Val << PMC_CSR3_PID106_Pos)       /**< (PMC_CSR3) The corresponding peripheral clock is enabled. Position  */
#define PMC_CSR3_Msk                          _U_(0x00000707)                                      /**< (PMC_CSR3) Register Mask  */

#define PMC_CSR3_PID_Pos                      _U_(0)                                               /**< (PMC_CSR3 Position) Peripheral Clock xx6 Status */
#define PMC_CSR3_PID_Msk                      (_U_(0x3F) << PMC_CSR3_PID_Pos)                      /**< (PMC_CSR3 Mask) PID */
#define PMC_CSR3_PID(value)                   (PMC_CSR3_PID_Msk & ((value) << PMC_CSR3_PID_Pos))   

/* -------- PMC_GCSR0 : (PMC Offset: 0xC0) ( R/ 32) Generic Clock Status Register 0 -------- */
#define PMC_GCSR0_RESETVALUE                  _U_(0x00)                                            /**<  (PMC_GCSR0) Generic Clock Status Register 0  Reset Value */

#define PMC_GCSR0_GPID26_Pos                  _U_(26)                                              /**< (PMC_GCSR0) Generic Clock 26 Status Position */
#define PMC_GCSR0_GPID26_Msk                  (_U_(0x1) << PMC_GCSR0_GPID26_Pos)                   /**< (PMC_GCSR0) Generic Clock 26 Status Mask */
#define PMC_GCSR0_GPID26(value)               (PMC_GCSR0_GPID26_Msk & ((value) << PMC_GCSR0_GPID26_Pos))
#define   PMC_GCSR0_GPID26_0_Val              _U_(0x0)                                             /**< (PMC_GCSR0) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR0_GPID26_1_Val              _U_(0x1)                                             /**< (PMC_GCSR0) The corresponding Generic clock is enabled.  */
#define PMC_GCSR0_GPID26_0                    (PMC_GCSR0_GPID26_0_Val << PMC_GCSR0_GPID26_Pos)     /**< (PMC_GCSR0) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR0_GPID26_1                    (PMC_GCSR0_GPID26_1_Val << PMC_GCSR0_GPID26_Pos)     /**< (PMC_GCSR0) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR0_GPID29_Pos                  _U_(29)                                              /**< (PMC_GCSR0) Generic Clock 29 Status Position */
#define PMC_GCSR0_GPID29_Msk                  (_U_(0x1) << PMC_GCSR0_GPID29_Pos)                   /**< (PMC_GCSR0) Generic Clock 29 Status Mask */
#define PMC_GCSR0_GPID29(value)               (PMC_GCSR0_GPID29_Msk & ((value) << PMC_GCSR0_GPID29_Pos))
#define   PMC_GCSR0_GPID29_0_Val              _U_(0x0)                                             /**< (PMC_GCSR0) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR0_GPID29_1_Val              _U_(0x1)                                             /**< (PMC_GCSR0) The corresponding Generic clock is enabled.  */
#define PMC_GCSR0_GPID29_0                    (PMC_GCSR0_GPID29_0_Val << PMC_GCSR0_GPID29_Pos)     /**< (PMC_GCSR0) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR0_GPID29_1                    (PMC_GCSR0_GPID29_1_Val << PMC_GCSR0_GPID29_Pos)     /**< (PMC_GCSR0) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR0_GPID30_Pos                  _U_(30)                                              /**< (PMC_GCSR0) Generic Clock 30 Status Position */
#define PMC_GCSR0_GPID30_Msk                  (_U_(0x1) << PMC_GCSR0_GPID30_Pos)                   /**< (PMC_GCSR0) Generic Clock 30 Status Mask */
#define PMC_GCSR0_GPID30(value)               (PMC_GCSR0_GPID30_Msk & ((value) << PMC_GCSR0_GPID30_Pos))
#define   PMC_GCSR0_GPID30_0_Val              _U_(0x0)                                             /**< (PMC_GCSR0) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR0_GPID30_1_Val              _U_(0x1)                                             /**< (PMC_GCSR0) The corresponding Generic clock is enabled.  */
#define PMC_GCSR0_GPID30_0                    (PMC_GCSR0_GPID30_0_Val << PMC_GCSR0_GPID30_Pos)     /**< (PMC_GCSR0) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR0_GPID30_1                    (PMC_GCSR0_GPID30_1_Val << PMC_GCSR0_GPID30_Pos)     /**< (PMC_GCSR0) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR0_Msk                         _U_(0x64000000)                                      /**< (PMC_GCSR0) Register Mask  */

#define PMC_GCSR0_GPID_Pos                    _U_(26)                                              /**< (PMC_GCSR0 Position) Generic Clock 3x Status */
#define PMC_GCSR0_GPID_Msk                    (_U_(0x7) << PMC_GCSR0_GPID_Pos)                     /**< (PMC_GCSR0 Mask) GPID */
#define PMC_GCSR0_GPID(value)                 (PMC_GCSR0_GPID_Msk & ((value) << PMC_GCSR0_GPID_Pos)) 

/* -------- PMC_GCSR1 : (PMC Offset: 0xC4) ( R/ 32) Generic Clock Status Register 1 -------- */
#define PMC_GCSR1_RESETVALUE                  _U_(0x00)                                            /**<  (PMC_GCSR1) Generic Clock Status Register 1  Reset Value */

#define PMC_GCSR1_GPID33_Pos                  _U_(1)                                               /**< (PMC_GCSR1) Generic Clock 33 Status Position */
#define PMC_GCSR1_GPID33_Msk                  (_U_(0x1) << PMC_GCSR1_GPID33_Pos)                   /**< (PMC_GCSR1) Generic Clock 33 Status Mask */
#define PMC_GCSR1_GPID33(value)               (PMC_GCSR1_GPID33_Msk & ((value) << PMC_GCSR1_GPID33_Pos))
#define   PMC_GCSR1_GPID33_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID33_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID33_0                    (PMC_GCSR1_GPID33_0_Val << PMC_GCSR1_GPID33_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID33_1                    (PMC_GCSR1_GPID33_1_Val << PMC_GCSR1_GPID33_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID38_Pos                  _U_(6)                                               /**< (PMC_GCSR1) Generic Clock 38 Status Position */
#define PMC_GCSR1_GPID38_Msk                  (_U_(0x1) << PMC_GCSR1_GPID38_Pos)                   /**< (PMC_GCSR1) Generic Clock 38 Status Mask */
#define PMC_GCSR1_GPID38(value)               (PMC_GCSR1_GPID38_Msk & ((value) << PMC_GCSR1_GPID38_Pos))
#define   PMC_GCSR1_GPID38_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID38_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID38_0                    (PMC_GCSR1_GPID38_0_Val << PMC_GCSR1_GPID38_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID38_1                    (PMC_GCSR1_GPID38_1_Val << PMC_GCSR1_GPID38_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID39_Pos                  _U_(7)                                               /**< (PMC_GCSR1) Generic Clock 39 Status Position */
#define PMC_GCSR1_GPID39_Msk                  (_U_(0x1) << PMC_GCSR1_GPID39_Pos)                   /**< (PMC_GCSR1) Generic Clock 39 Status Mask */
#define PMC_GCSR1_GPID39(value)               (PMC_GCSR1_GPID39_Msk & ((value) << PMC_GCSR1_GPID39_Pos))
#define   PMC_GCSR1_GPID39_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID39_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID39_0                    (PMC_GCSR1_GPID39_0_Val << PMC_GCSR1_GPID39_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID39_1                    (PMC_GCSR1_GPID39_1_Val << PMC_GCSR1_GPID39_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID40_Pos                  _U_(8)                                               /**< (PMC_GCSR1) Generic Clock 40 Status Position */
#define PMC_GCSR1_GPID40_Msk                  (_U_(0x1) << PMC_GCSR1_GPID40_Pos)                   /**< (PMC_GCSR1) Generic Clock 40 Status Mask */
#define PMC_GCSR1_GPID40(value)               (PMC_GCSR1_GPID40_Msk & ((value) << PMC_GCSR1_GPID40_Pos))
#define   PMC_GCSR1_GPID40_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID40_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID40_0                    (PMC_GCSR1_GPID40_0_Val << PMC_GCSR1_GPID40_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID40_1                    (PMC_GCSR1_GPID40_1_Val << PMC_GCSR1_GPID40_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID41_Pos                  _U_(9)                                               /**< (PMC_GCSR1) Generic Clock 41 Status Position */
#define PMC_GCSR1_GPID41_Msk                  (_U_(0x1) << PMC_GCSR1_GPID41_Pos)                   /**< (PMC_GCSR1) Generic Clock 41 Status Mask */
#define PMC_GCSR1_GPID41(value)               (PMC_GCSR1_GPID41_Msk & ((value) << PMC_GCSR1_GPID41_Pos))
#define   PMC_GCSR1_GPID41_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID41_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID41_0                    (PMC_GCSR1_GPID41_0_Val << PMC_GCSR1_GPID41_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID41_1                    (PMC_GCSR1_GPID41_1_Val << PMC_GCSR1_GPID41_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID42_Pos                  _U_(10)                                              /**< (PMC_GCSR1) Generic Clock 42 Status Position */
#define PMC_GCSR1_GPID42_Msk                  (_U_(0x1) << PMC_GCSR1_GPID42_Pos)                   /**< (PMC_GCSR1) Generic Clock 42 Status Mask */
#define PMC_GCSR1_GPID42(value)               (PMC_GCSR1_GPID42_Msk & ((value) << PMC_GCSR1_GPID42_Pos))
#define   PMC_GCSR1_GPID42_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID42_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID42_0                    (PMC_GCSR1_GPID42_0_Val << PMC_GCSR1_GPID42_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID42_1                    (PMC_GCSR1_GPID42_1_Val << PMC_GCSR1_GPID42_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID43_Pos                  _U_(11)                                              /**< (PMC_GCSR1) Generic Clock 43 Status Position */
#define PMC_GCSR1_GPID43_Msk                  (_U_(0x1) << PMC_GCSR1_GPID43_Pos)                   /**< (PMC_GCSR1) Generic Clock 43 Status Mask */
#define PMC_GCSR1_GPID43(value)               (PMC_GCSR1_GPID43_Msk & ((value) << PMC_GCSR1_GPID43_Pos))
#define   PMC_GCSR1_GPID43_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID43_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID43_0                    (PMC_GCSR1_GPID43_0_Val << PMC_GCSR1_GPID43_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID43_1                    (PMC_GCSR1_GPID43_1_Val << PMC_GCSR1_GPID43_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID44_Pos                  _U_(12)                                              /**< (PMC_GCSR1) Generic Clock 44 Status Position */
#define PMC_GCSR1_GPID44_Msk                  (_U_(0x1) << PMC_GCSR1_GPID44_Pos)                   /**< (PMC_GCSR1) Generic Clock 44 Status Mask */
#define PMC_GCSR1_GPID44(value)               (PMC_GCSR1_GPID44_Msk & ((value) << PMC_GCSR1_GPID44_Pos))
#define   PMC_GCSR1_GPID44_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID44_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID44_0                    (PMC_GCSR1_GPID44_0_Val << PMC_GCSR1_GPID44_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID44_1                    (PMC_GCSR1_GPID44_1_Val << PMC_GCSR1_GPID44_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID45_Pos                  _U_(13)                                              /**< (PMC_GCSR1) Generic Clock 45 Status Position */
#define PMC_GCSR1_GPID45_Msk                  (_U_(0x1) << PMC_GCSR1_GPID45_Pos)                   /**< (PMC_GCSR1) Generic Clock 45 Status Mask */
#define PMC_GCSR1_GPID45(value)               (PMC_GCSR1_GPID45_Msk & ((value) << PMC_GCSR1_GPID45_Pos))
#define   PMC_GCSR1_GPID45_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID45_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID45_0                    (PMC_GCSR1_GPID45_0_Val << PMC_GCSR1_GPID45_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID45_1                    (PMC_GCSR1_GPID45_1_Val << PMC_GCSR1_GPID45_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID46_Pos                  _U_(14)                                              /**< (PMC_GCSR1) Generic Clock 46 Status Position */
#define PMC_GCSR1_GPID46_Msk                  (_U_(0x1) << PMC_GCSR1_GPID46_Pos)                   /**< (PMC_GCSR1) Generic Clock 46 Status Mask */
#define PMC_GCSR1_GPID46(value)               (PMC_GCSR1_GPID46_Msk & ((value) << PMC_GCSR1_GPID46_Pos))
#define   PMC_GCSR1_GPID46_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID46_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID46_0                    (PMC_GCSR1_GPID46_0_Val << PMC_GCSR1_GPID46_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID46_1                    (PMC_GCSR1_GPID46_1_Val << PMC_GCSR1_GPID46_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID47_Pos                  _U_(15)                                              /**< (PMC_GCSR1) Generic Clock 47 Status Position */
#define PMC_GCSR1_GPID47_Msk                  (_U_(0x1) << PMC_GCSR1_GPID47_Pos)                   /**< (PMC_GCSR1) Generic Clock 47 Status Mask */
#define PMC_GCSR1_GPID47(value)               (PMC_GCSR1_GPID47_Msk & ((value) << PMC_GCSR1_GPID47_Pos))
#define   PMC_GCSR1_GPID47_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID47_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID47_0                    (PMC_GCSR1_GPID47_0_Val << PMC_GCSR1_GPID47_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID47_1                    (PMC_GCSR1_GPID47_1_Val << PMC_GCSR1_GPID47_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID48_Pos                  _U_(16)                                              /**< (PMC_GCSR1) Generic Clock 48 Status Position */
#define PMC_GCSR1_GPID48_Msk                  (_U_(0x1) << PMC_GCSR1_GPID48_Pos)                   /**< (PMC_GCSR1) Generic Clock 48 Status Mask */
#define PMC_GCSR1_GPID48(value)               (PMC_GCSR1_GPID48_Msk & ((value) << PMC_GCSR1_GPID48_Pos))
#define   PMC_GCSR1_GPID48_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID48_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID48_0                    (PMC_GCSR1_GPID48_0_Val << PMC_GCSR1_GPID48_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID48_1                    (PMC_GCSR1_GPID48_1_Val << PMC_GCSR1_GPID48_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID49_Pos                  _U_(17)                                              /**< (PMC_GCSR1) Generic Clock 49 Status Position */
#define PMC_GCSR1_GPID49_Msk                  (_U_(0x1) << PMC_GCSR1_GPID49_Pos)                   /**< (PMC_GCSR1) Generic Clock 49 Status Mask */
#define PMC_GCSR1_GPID49(value)               (PMC_GCSR1_GPID49_Msk & ((value) << PMC_GCSR1_GPID49_Pos))
#define   PMC_GCSR1_GPID49_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID49_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID49_0                    (PMC_GCSR1_GPID49_0_Val << PMC_GCSR1_GPID49_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID49_1                    (PMC_GCSR1_GPID49_1_Val << PMC_GCSR1_GPID49_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID51_Pos                  _U_(19)                                              /**< (PMC_GCSR1) Generic Clock 51 Status Position */
#define PMC_GCSR1_GPID51_Msk                  (_U_(0x1) << PMC_GCSR1_GPID51_Pos)                   /**< (PMC_GCSR1) Generic Clock 51 Status Mask */
#define PMC_GCSR1_GPID51(value)               (PMC_GCSR1_GPID51_Msk & ((value) << PMC_GCSR1_GPID51_Pos))
#define   PMC_GCSR1_GPID51_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID51_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID51_0                    (PMC_GCSR1_GPID51_0_Val << PMC_GCSR1_GPID51_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID51_1                    (PMC_GCSR1_GPID51_1_Val << PMC_GCSR1_GPID51_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID52_Pos                  _U_(20)                                              /**< (PMC_GCSR1) Generic Clock 52 Status Position */
#define PMC_GCSR1_GPID52_Msk                  (_U_(0x1) << PMC_GCSR1_GPID52_Pos)                   /**< (PMC_GCSR1) Generic Clock 52 Status Mask */
#define PMC_GCSR1_GPID52(value)               (PMC_GCSR1_GPID52_Msk & ((value) << PMC_GCSR1_GPID52_Pos))
#define   PMC_GCSR1_GPID52_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID52_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID52_0                    (PMC_GCSR1_GPID52_0_Val << PMC_GCSR1_GPID52_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID52_1                    (PMC_GCSR1_GPID52_1_Val << PMC_GCSR1_GPID52_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID53_Pos                  _U_(21)                                              /**< (PMC_GCSR1) Generic Clock 53 Status Position */
#define PMC_GCSR1_GPID53_Msk                  (_U_(0x1) << PMC_GCSR1_GPID53_Pos)                   /**< (PMC_GCSR1) Generic Clock 53 Status Mask */
#define PMC_GCSR1_GPID53(value)               (PMC_GCSR1_GPID53_Msk & ((value) << PMC_GCSR1_GPID53_Pos))
#define   PMC_GCSR1_GPID53_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID53_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID53_0                    (PMC_GCSR1_GPID53_0_Val << PMC_GCSR1_GPID53_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID53_1                    (PMC_GCSR1_GPID53_1_Val << PMC_GCSR1_GPID53_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID54_Pos                  _U_(22)                                              /**< (PMC_GCSR1) Generic Clock 54 Status Position */
#define PMC_GCSR1_GPID54_Msk                  (_U_(0x1) << PMC_GCSR1_GPID54_Pos)                   /**< (PMC_GCSR1) Generic Clock 54 Status Mask */
#define PMC_GCSR1_GPID54(value)               (PMC_GCSR1_GPID54_Msk & ((value) << PMC_GCSR1_GPID54_Pos))
#define   PMC_GCSR1_GPID54_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID54_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID54_0                    (PMC_GCSR1_GPID54_0_Val << PMC_GCSR1_GPID54_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID54_1                    (PMC_GCSR1_GPID54_1_Val << PMC_GCSR1_GPID54_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID57_Pos                  _U_(25)                                              /**< (PMC_GCSR1) Generic Clock 57 Status Position */
#define PMC_GCSR1_GPID57_Msk                  (_U_(0x1) << PMC_GCSR1_GPID57_Pos)                   /**< (PMC_GCSR1) Generic Clock 57 Status Mask */
#define PMC_GCSR1_GPID57(value)               (PMC_GCSR1_GPID57_Msk & ((value) << PMC_GCSR1_GPID57_Pos))
#define   PMC_GCSR1_GPID57_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID57_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID57_0                    (PMC_GCSR1_GPID57_0_Val << PMC_GCSR1_GPID57_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID57_1                    (PMC_GCSR1_GPID57_1_Val << PMC_GCSR1_GPID57_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID58_Pos                  _U_(26)                                              /**< (PMC_GCSR1) Generic Clock 58 Status Position */
#define PMC_GCSR1_GPID58_Msk                  (_U_(0x1) << PMC_GCSR1_GPID58_Pos)                   /**< (PMC_GCSR1) Generic Clock 58 Status Mask */
#define PMC_GCSR1_GPID58(value)               (PMC_GCSR1_GPID58_Msk & ((value) << PMC_GCSR1_GPID58_Pos))
#define   PMC_GCSR1_GPID58_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID58_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID58_0                    (PMC_GCSR1_GPID58_0_Val << PMC_GCSR1_GPID58_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID58_1                    (PMC_GCSR1_GPID58_1_Val << PMC_GCSR1_GPID58_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID61_Pos                  _U_(29)                                              /**< (PMC_GCSR1) Generic Clock 61 Status Position */
#define PMC_GCSR1_GPID61_Msk                  (_U_(0x1) << PMC_GCSR1_GPID61_Pos)                   /**< (PMC_GCSR1) Generic Clock 61 Status Mask */
#define PMC_GCSR1_GPID61(value)               (PMC_GCSR1_GPID61_Msk & ((value) << PMC_GCSR1_GPID61_Pos))
#define   PMC_GCSR1_GPID61_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID61_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID61_0                    (PMC_GCSR1_GPID61_0_Val << PMC_GCSR1_GPID61_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID61_1                    (PMC_GCSR1_GPID61_1_Val << PMC_GCSR1_GPID61_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID62_Pos                  _U_(30)                                              /**< (PMC_GCSR1) Generic Clock 62 Status Position */
#define PMC_GCSR1_GPID62_Msk                  (_U_(0x1) << PMC_GCSR1_GPID62_Pos)                   /**< (PMC_GCSR1) Generic Clock 62 Status Mask */
#define PMC_GCSR1_GPID62(value)               (PMC_GCSR1_GPID62_Msk & ((value) << PMC_GCSR1_GPID62_Pos))
#define   PMC_GCSR1_GPID62_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID62_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID62_0                    (PMC_GCSR1_GPID62_0_Val << PMC_GCSR1_GPID62_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID62_1                    (PMC_GCSR1_GPID62_1_Val << PMC_GCSR1_GPID62_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_GPID63_Pos                  _U_(31)                                              /**< (PMC_GCSR1) Generic Clock 63 Status Position */
#define PMC_GCSR1_GPID63_Msk                  (_U_(0x1) << PMC_GCSR1_GPID63_Pos)                   /**< (PMC_GCSR1) Generic Clock 63 Status Mask */
#define PMC_GCSR1_GPID63(value)               (PMC_GCSR1_GPID63_Msk & ((value) << PMC_GCSR1_GPID63_Pos))
#define   PMC_GCSR1_GPID63_0_Val              _U_(0x0)                                             /**< (PMC_GCSR1) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR1_GPID63_1_Val              _U_(0x1)                                             /**< (PMC_GCSR1) The corresponding Generic clock is enabled.  */
#define PMC_GCSR1_GPID63_0                    (PMC_GCSR1_GPID63_0_Val << PMC_GCSR1_GPID63_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR1_GPID63_1                    (PMC_GCSR1_GPID63_1_Val << PMC_GCSR1_GPID63_Pos)     /**< (PMC_GCSR1) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR1_Msk                         _U_(0xE67BFFC2)                                      /**< (PMC_GCSR1) Register Mask  */

#define PMC_GCSR1_GPID_Pos                    _U_(1)                                               /**< (PMC_GCSR1 Position) Generic Clock 63 Status */
#define PMC_GCSR1_GPID_Msk                    (_U_(0x3FFFFF) << PMC_GCSR1_GPID_Pos)                /**< (PMC_GCSR1 Mask) GPID */
#define PMC_GCSR1_GPID(value)                 (PMC_GCSR1_GPID_Msk & ((value) << PMC_GCSR1_GPID_Pos)) 

/* -------- PMC_GCSR2 : (PMC Offset: 0xC8) ( R/ 32) Generic Clock Status Register 2 -------- */
#define PMC_GCSR2_RESETVALUE                  _U_(0x00)                                            /**<  (PMC_GCSR2) Generic Clock Status Register 2  Reset Value */

#define PMC_GCSR2_GPID64_Pos                  _U_(0)                                               /**< (PMC_GCSR2) Generic Clock 64 Status Position */
#define PMC_GCSR2_GPID64_Msk                  (_U_(0x1) << PMC_GCSR2_GPID64_Pos)                   /**< (PMC_GCSR2) Generic Clock 64 Status Mask */
#define PMC_GCSR2_GPID64(value)               (PMC_GCSR2_GPID64_Msk & ((value) << PMC_GCSR2_GPID64_Pos))
#define   PMC_GCSR2_GPID64_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID64_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID64_0                    (PMC_GCSR2_GPID64_0_Val << PMC_GCSR2_GPID64_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID64_1                    (PMC_GCSR2_GPID64_1_Val << PMC_GCSR2_GPID64_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID65_Pos                  _U_(1)                                               /**< (PMC_GCSR2) Generic Clock 65 Status Position */
#define PMC_GCSR2_GPID65_Msk                  (_U_(0x1) << PMC_GCSR2_GPID65_Pos)                   /**< (PMC_GCSR2) Generic Clock 65 Status Mask */
#define PMC_GCSR2_GPID65(value)               (PMC_GCSR2_GPID65_Msk & ((value) << PMC_GCSR2_GPID65_Pos))
#define   PMC_GCSR2_GPID65_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID65_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID65_0                    (PMC_GCSR2_GPID65_0_Val << PMC_GCSR2_GPID65_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID65_1                    (PMC_GCSR2_GPID65_1_Val << PMC_GCSR2_GPID65_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID66_Pos                  _U_(2)                                               /**< (PMC_GCSR2) Generic Clock 66 Status Position */
#define PMC_GCSR2_GPID66_Msk                  (_U_(0x1) << PMC_GCSR2_GPID66_Pos)                   /**< (PMC_GCSR2) Generic Clock 66 Status Mask */
#define PMC_GCSR2_GPID66(value)               (PMC_GCSR2_GPID66_Msk & ((value) << PMC_GCSR2_GPID66_Pos))
#define   PMC_GCSR2_GPID66_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID66_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID66_0                    (PMC_GCSR2_GPID66_0_Val << PMC_GCSR2_GPID66_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID66_1                    (PMC_GCSR2_GPID66_1_Val << PMC_GCSR2_GPID66_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID68_Pos                  _U_(4)                                               /**< (PMC_GCSR2) Generic Clock 68 Status Position */
#define PMC_GCSR2_GPID68_Msk                  (_U_(0x1) << PMC_GCSR2_GPID68_Pos)                   /**< (PMC_GCSR2) Generic Clock 68 Status Mask */
#define PMC_GCSR2_GPID68(value)               (PMC_GCSR2_GPID68_Msk & ((value) << PMC_GCSR2_GPID68_Pos))
#define   PMC_GCSR2_GPID68_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID68_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID68_0                    (PMC_GCSR2_GPID68_0_Val << PMC_GCSR2_GPID68_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID68_1                    (PMC_GCSR2_GPID68_1_Val << PMC_GCSR2_GPID68_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID69_Pos                  _U_(5)                                               /**< (PMC_GCSR2) Generic Clock 69 Status Position */
#define PMC_GCSR2_GPID69_Msk                  (_U_(0x1) << PMC_GCSR2_GPID69_Pos)                   /**< (PMC_GCSR2) Generic Clock 69 Status Mask */
#define PMC_GCSR2_GPID69(value)               (PMC_GCSR2_GPID69_Msk & ((value) << PMC_GCSR2_GPID69_Pos))
#define   PMC_GCSR2_GPID69_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID69_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID69_0                    (PMC_GCSR2_GPID69_0_Val << PMC_GCSR2_GPID69_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID69_1                    (PMC_GCSR2_GPID69_1_Val << PMC_GCSR2_GPID69_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID70_Pos                  _U_(6)                                               /**< (PMC_GCSR2) Generic Clock 70 Status Position */
#define PMC_GCSR2_GPID70_Msk                  (_U_(0x1) << PMC_GCSR2_GPID70_Pos)                   /**< (PMC_GCSR2) Generic Clock 70 Status Mask */
#define PMC_GCSR2_GPID70(value)               (PMC_GCSR2_GPID70_Msk & ((value) << PMC_GCSR2_GPID70_Pos))
#define   PMC_GCSR2_GPID70_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID70_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID70_0                    (PMC_GCSR2_GPID70_0_Val << PMC_GCSR2_GPID70_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID70_1                    (PMC_GCSR2_GPID70_1_Val << PMC_GCSR2_GPID70_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID71_Pos                  _U_(7)                                               /**< (PMC_GCSR2) Generic Clock 71 Status Position */
#define PMC_GCSR2_GPID71_Msk                  (_U_(0x1) << PMC_GCSR2_GPID71_Pos)                   /**< (PMC_GCSR2) Generic Clock 71 Status Mask */
#define PMC_GCSR2_GPID71(value)               (PMC_GCSR2_GPID71_Msk & ((value) << PMC_GCSR2_GPID71_Pos))
#define   PMC_GCSR2_GPID71_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID71_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID71_0                    (PMC_GCSR2_GPID71_0_Val << PMC_GCSR2_GPID71_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID71_1                    (PMC_GCSR2_GPID71_1_Val << PMC_GCSR2_GPID71_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID72_Pos                  _U_(8)                                               /**< (PMC_GCSR2) Generic Clock 72 Status Position */
#define PMC_GCSR2_GPID72_Msk                  (_U_(0x1) << PMC_GCSR2_GPID72_Pos)                   /**< (PMC_GCSR2) Generic Clock 72 Status Mask */
#define PMC_GCSR2_GPID72(value)               (PMC_GCSR2_GPID72_Msk & ((value) << PMC_GCSR2_GPID72_Pos))
#define   PMC_GCSR2_GPID72_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID72_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID72_0                    (PMC_GCSR2_GPID72_0_Val << PMC_GCSR2_GPID72_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID72_1                    (PMC_GCSR2_GPID72_1_Val << PMC_GCSR2_GPID72_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID73_Pos                  _U_(9)                                               /**< (PMC_GCSR2) Generic Clock 73 Status Position */
#define PMC_GCSR2_GPID73_Msk                  (_U_(0x1) << PMC_GCSR2_GPID73_Pos)                   /**< (PMC_GCSR2) Generic Clock 73 Status Mask */
#define PMC_GCSR2_GPID73(value)               (PMC_GCSR2_GPID73_Msk & ((value) << PMC_GCSR2_GPID73_Pos))
#define   PMC_GCSR2_GPID73_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID73_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID73_0                    (PMC_GCSR2_GPID73_0_Val << PMC_GCSR2_GPID73_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID73_1                    (PMC_GCSR2_GPID73_1_Val << PMC_GCSR2_GPID73_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID74_Pos                  _U_(10)                                              /**< (PMC_GCSR2) Generic Clock 74 Status Position */
#define PMC_GCSR2_GPID74_Msk                  (_U_(0x1) << PMC_GCSR2_GPID74_Pos)                   /**< (PMC_GCSR2) Generic Clock 74 Status Mask */
#define PMC_GCSR2_GPID74(value)               (PMC_GCSR2_GPID74_Msk & ((value) << PMC_GCSR2_GPID74_Pos))
#define   PMC_GCSR2_GPID74_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID74_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID74_0                    (PMC_GCSR2_GPID74_0_Val << PMC_GCSR2_GPID74_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID74_1                    (PMC_GCSR2_GPID74_1_Val << PMC_GCSR2_GPID74_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID75_Pos                  _U_(11)                                              /**< (PMC_GCSR2) Generic Clock 75 Status Position */
#define PMC_GCSR2_GPID75_Msk                  (_U_(0x1) << PMC_GCSR2_GPID75_Pos)                   /**< (PMC_GCSR2) Generic Clock 75 Status Mask */
#define PMC_GCSR2_GPID75(value)               (PMC_GCSR2_GPID75_Msk & ((value) << PMC_GCSR2_GPID75_Pos))
#define   PMC_GCSR2_GPID75_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID75_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID75_0                    (PMC_GCSR2_GPID75_0_Val << PMC_GCSR2_GPID75_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID75_1                    (PMC_GCSR2_GPID75_1_Val << PMC_GCSR2_GPID75_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID78_Pos                  _U_(14)                                              /**< (PMC_GCSR2) Generic Clock 78 Status Position */
#define PMC_GCSR2_GPID78_Msk                  (_U_(0x1) << PMC_GCSR2_GPID78_Pos)                   /**< (PMC_GCSR2) Generic Clock 78 Status Mask */
#define PMC_GCSR2_GPID78(value)               (PMC_GCSR2_GPID78_Msk & ((value) << PMC_GCSR2_GPID78_Pos))
#define   PMC_GCSR2_GPID78_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID78_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID78_0                    (PMC_GCSR2_GPID78_0_Val << PMC_GCSR2_GPID78_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID78_1                    (PMC_GCSR2_GPID78_1_Val << PMC_GCSR2_GPID78_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID79_Pos                  _U_(15)                                              /**< (PMC_GCSR2) Generic Clock 79 Status Position */
#define PMC_GCSR2_GPID79_Msk                  (_U_(0x1) << PMC_GCSR2_GPID79_Pos)                   /**< (PMC_GCSR2) Generic Clock 79 Status Mask */
#define PMC_GCSR2_GPID79(value)               (PMC_GCSR2_GPID79_Msk & ((value) << PMC_GCSR2_GPID79_Pos))
#define   PMC_GCSR2_GPID79_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID79_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID79_0                    (PMC_GCSR2_GPID79_0_Val << PMC_GCSR2_GPID79_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID79_1                    (PMC_GCSR2_GPID79_1_Val << PMC_GCSR2_GPID79_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID80_Pos                  _U_(16)                                              /**< (PMC_GCSR2) Generic Clock 80 Status Position */
#define PMC_GCSR2_GPID80_Msk                  (_U_(0x1) << PMC_GCSR2_GPID80_Pos)                   /**< (PMC_GCSR2) Generic Clock 80 Status Mask */
#define PMC_GCSR2_GPID80(value)               (PMC_GCSR2_GPID80_Msk & ((value) << PMC_GCSR2_GPID80_Pos))
#define   PMC_GCSR2_GPID80_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID80_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID80_0                    (PMC_GCSR2_GPID80_0_Val << PMC_GCSR2_GPID80_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID80_1                    (PMC_GCSR2_GPID80_1_Val << PMC_GCSR2_GPID80_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID81_Pos                  _U_(17)                                              /**< (PMC_GCSR2) Generic Clock 81 Status Position */
#define PMC_GCSR2_GPID81_Msk                  (_U_(0x1) << PMC_GCSR2_GPID81_Pos)                   /**< (PMC_GCSR2) Generic Clock 81 Status Mask */
#define PMC_GCSR2_GPID81(value)               (PMC_GCSR2_GPID81_Msk & ((value) << PMC_GCSR2_GPID81_Pos))
#define   PMC_GCSR2_GPID81_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID81_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID81_0                    (PMC_GCSR2_GPID81_0_Val << PMC_GCSR2_GPID81_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID81_1                    (PMC_GCSR2_GPID81_1_Val << PMC_GCSR2_GPID81_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID82_Pos                  _U_(18)                                              /**< (PMC_GCSR2) Generic Clock 82 Status Position */
#define PMC_GCSR2_GPID82_Msk                  (_U_(0x1) << PMC_GCSR2_GPID82_Pos)                   /**< (PMC_GCSR2) Generic Clock 82 Status Mask */
#define PMC_GCSR2_GPID82(value)               (PMC_GCSR2_GPID82_Msk & ((value) << PMC_GCSR2_GPID82_Pos))
#define   PMC_GCSR2_GPID82_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID82_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID82_0                    (PMC_GCSR2_GPID82_0_Val << PMC_GCSR2_GPID82_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID82_1                    (PMC_GCSR2_GPID82_1_Val << PMC_GCSR2_GPID82_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID84_Pos                  _U_(20)                                              /**< (PMC_GCSR2) Generic Clock 84 Status Position */
#define PMC_GCSR2_GPID84_Msk                  (_U_(0x1) << PMC_GCSR2_GPID84_Pos)                   /**< (PMC_GCSR2) Generic Clock 84 Status Mask */
#define PMC_GCSR2_GPID84(value)               (PMC_GCSR2_GPID84_Msk & ((value) << PMC_GCSR2_GPID84_Pos))
#define   PMC_GCSR2_GPID84_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID84_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID84_0                    (PMC_GCSR2_GPID84_0_Val << PMC_GCSR2_GPID84_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID84_1                    (PMC_GCSR2_GPID84_1_Val << PMC_GCSR2_GPID84_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID85_Pos                  _U_(21)                                              /**< (PMC_GCSR2) Generic Clock 85 Status Position */
#define PMC_GCSR2_GPID85_Msk                  (_U_(0x1) << PMC_GCSR2_GPID85_Pos)                   /**< (PMC_GCSR2) Generic Clock 85 Status Mask */
#define PMC_GCSR2_GPID85(value)               (PMC_GCSR2_GPID85_Msk & ((value) << PMC_GCSR2_GPID85_Pos))
#define   PMC_GCSR2_GPID85_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID85_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID85_0                    (PMC_GCSR2_GPID85_0_Val << PMC_GCSR2_GPID85_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID85_1                    (PMC_GCSR2_GPID85_1_Val << PMC_GCSR2_GPID85_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID88_Pos                  _U_(24)                                              /**< (PMC_GCSR2) Generic Clock 88 Status Position */
#define PMC_GCSR2_GPID88_Msk                  (_U_(0x1) << PMC_GCSR2_GPID88_Pos)                   /**< (PMC_GCSR2) Generic Clock 88 Status Mask */
#define PMC_GCSR2_GPID88(value)               (PMC_GCSR2_GPID88_Msk & ((value) << PMC_GCSR2_GPID88_Pos))
#define   PMC_GCSR2_GPID88_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID88_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID88_0                    (PMC_GCSR2_GPID88_0_Val << PMC_GCSR2_GPID88_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID88_1                    (PMC_GCSR2_GPID88_1_Val << PMC_GCSR2_GPID88_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_GPID91_Pos                  _U_(27)                                              /**< (PMC_GCSR2) Generic Clock 91 Status Position */
#define PMC_GCSR2_GPID91_Msk                  (_U_(0x1) << PMC_GCSR2_GPID91_Pos)                   /**< (PMC_GCSR2) Generic Clock 91 Status Mask */
#define PMC_GCSR2_GPID91(value)               (PMC_GCSR2_GPID91_Msk & ((value) << PMC_GCSR2_GPID91_Pos))
#define   PMC_GCSR2_GPID91_0_Val              _U_(0x0)                                             /**< (PMC_GCSR2) The corresponding Generic clock is disabled.  */
#define   PMC_GCSR2_GPID91_1_Val              _U_(0x1)                                             /**< (PMC_GCSR2) The corresponding Generic clock is enabled.  */
#define PMC_GCSR2_GPID91_0                    (PMC_GCSR2_GPID91_0_Val << PMC_GCSR2_GPID91_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is disabled. Position  */
#define PMC_GCSR2_GPID91_1                    (PMC_GCSR2_GPID91_1_Val << PMC_GCSR2_GPID91_Pos)     /**< (PMC_GCSR2) The corresponding Generic clock is enabled. Position  */
#define PMC_GCSR2_Msk                         _U_(0x0937CFF7)                                      /**< (PMC_GCSR2) Register Mask  */

#define PMC_GCSR2_GPID_Pos                    _U_(0)                                               /**< (PMC_GCSR2 Position) Generic Clock 9x Status */
#define PMC_GCSR2_GPID_Msk                    (_U_(0xFFFFF) << PMC_GCSR2_GPID_Pos)                 /**< (PMC_GCSR2 Mask) GPID */
#define PMC_GCSR2_GPID(value)                 (PMC_GCSR2_GPID_Msk & ((value) << PMC_GCSR2_GPID_Pos)) 

/* -------- PMC_GCSR3 : (PMC Offset: 0xCC) ( R/ 32) Generic Clock Status Register 3 -------- */
#define PMC_GCSR3_RESETVALUE                  _U_(0x00)                                            /**<  (PMC_GCSR3) Generic Clock Status Register 3  Reset Value */

#define PMC_GCSR3_Msk                         _U_(0x00000000)                                      /**< (PMC_GCSR3) Register Mask  */


/* -------- PMC_PLL_IER : (PMC Offset: 0xE0) ( /W 32) PLL Interrupt Enable Register -------- */
#define PMC_PLL_IER_LOCK0_Pos                 _U_(0)                                               /**< (PMC_PLL_IER) PLL of Index 0 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK0_Msk                 (_U_(0x1) << PMC_PLL_IER_LOCK0_Pos)                  /**< (PMC_PLL_IER) PLL of Index 0 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK0(value)              (PMC_PLL_IER_LOCK0_Msk & ((value) << PMC_PLL_IER_LOCK0_Pos))
#define PMC_PLL_IER_LOCK1_Pos                 _U_(1)                                               /**< (PMC_PLL_IER) PLL of Index 1 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK1_Msk                 (_U_(0x1) << PMC_PLL_IER_LOCK1_Pos)                  /**< (PMC_PLL_IER) PLL of Index 1 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK1(value)              (PMC_PLL_IER_LOCK1_Msk & ((value) << PMC_PLL_IER_LOCK1_Pos))
#define PMC_PLL_IER_LOCK2_Pos                 _U_(2)                                               /**< (PMC_PLL_IER) PLL of Index 2 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK2_Msk                 (_U_(0x1) << PMC_PLL_IER_LOCK2_Pos)                  /**< (PMC_PLL_IER) PLL of Index 2 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK2(value)              (PMC_PLL_IER_LOCK2_Msk & ((value) << PMC_PLL_IER_LOCK2_Pos))
#define PMC_PLL_IER_LOCK3_Pos                 _U_(3)                                               /**< (PMC_PLL_IER) PLL of Index 3 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK3_Msk                 (_U_(0x1) << PMC_PLL_IER_LOCK3_Pos)                  /**< (PMC_PLL_IER) PLL of Index 3 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK3(value)              (PMC_PLL_IER_LOCK3_Msk & ((value) << PMC_PLL_IER_LOCK3_Pos))
#define PMC_PLL_IER_LOCK4_Pos                 _U_(4)                                               /**< (PMC_PLL_IER) PLL of Index 4 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK4_Msk                 (_U_(0x1) << PMC_PLL_IER_LOCK4_Pos)                  /**< (PMC_PLL_IER) PLL of Index 4 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK4(value)              (PMC_PLL_IER_LOCK4_Msk & ((value) << PMC_PLL_IER_LOCK4_Pos))
#define PMC_PLL_IER_LOCK5_Pos                 _U_(5)                                               /**< (PMC_PLL_IER) PLL of Index 5 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK5_Msk                 (_U_(0x1) << PMC_PLL_IER_LOCK5_Pos)                  /**< (PMC_PLL_IER) PLL of Index 5 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK5(value)              (PMC_PLL_IER_LOCK5_Msk & ((value) << PMC_PLL_IER_LOCK5_Pos))
#define PMC_PLL_IER_LOCK6_Pos                 _U_(6)                                               /**< (PMC_PLL_IER) PLL of Index 6 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK6_Msk                 (_U_(0x1) << PMC_PLL_IER_LOCK6_Pos)                  /**< (PMC_PLL_IER) PLL of Index 6 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK6(value)              (PMC_PLL_IER_LOCK6_Msk & ((value) << PMC_PLL_IER_LOCK6_Pos))
#define PMC_PLL_IER_UNLOCK0_Pos               _U_(16)                                              /**< (PMC_PLL_IER) PLL of Index 0 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK0_Msk               (_U_(0x1) << PMC_PLL_IER_UNLOCK0_Pos)                /**< (PMC_PLL_IER) PLL of Index 0 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK0(value)            (PMC_PLL_IER_UNLOCK0_Msk & ((value) << PMC_PLL_IER_UNLOCK0_Pos))
#define PMC_PLL_IER_UNLOCK1_Pos               _U_(17)                                              /**< (PMC_PLL_IER) PLL of Index 1 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK1_Msk               (_U_(0x1) << PMC_PLL_IER_UNLOCK1_Pos)                /**< (PMC_PLL_IER) PLL of Index 1 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK1(value)            (PMC_PLL_IER_UNLOCK1_Msk & ((value) << PMC_PLL_IER_UNLOCK1_Pos))
#define PMC_PLL_IER_UNLOCK2_Pos               _U_(18)                                              /**< (PMC_PLL_IER) PLL of Index 2 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK2_Msk               (_U_(0x1) << PMC_PLL_IER_UNLOCK2_Pos)                /**< (PMC_PLL_IER) PLL of Index 2 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK2(value)            (PMC_PLL_IER_UNLOCK2_Msk & ((value) << PMC_PLL_IER_UNLOCK2_Pos))
#define PMC_PLL_IER_UNLOCK3_Pos               _U_(19)                                              /**< (PMC_PLL_IER) PLL of Index 3 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK3_Msk               (_U_(0x1) << PMC_PLL_IER_UNLOCK3_Pos)                /**< (PMC_PLL_IER) PLL of Index 3 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK3(value)            (PMC_PLL_IER_UNLOCK3_Msk & ((value) << PMC_PLL_IER_UNLOCK3_Pos))
#define PMC_PLL_IER_UNLOCK4_Pos               _U_(20)                                              /**< (PMC_PLL_IER) PLL of Index 4 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK4_Msk               (_U_(0x1) << PMC_PLL_IER_UNLOCK4_Pos)                /**< (PMC_PLL_IER) PLL of Index 4 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK4(value)            (PMC_PLL_IER_UNLOCK4_Msk & ((value) << PMC_PLL_IER_UNLOCK4_Pos))
#define PMC_PLL_IER_UNLOCK5_Pos               _U_(21)                                              /**< (PMC_PLL_IER) PLL of Index 5 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK5_Msk               (_U_(0x1) << PMC_PLL_IER_UNLOCK5_Pos)                /**< (PMC_PLL_IER) PLL of Index 5 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK5(value)            (PMC_PLL_IER_UNLOCK5_Msk & ((value) << PMC_PLL_IER_UNLOCK5_Pos))
#define PMC_PLL_IER_UNLOCK6_Pos               _U_(22)                                              /**< (PMC_PLL_IER) PLL of Index 6 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK6_Msk               (_U_(0x1) << PMC_PLL_IER_UNLOCK6_Pos)                /**< (PMC_PLL_IER) PLL of Index 6 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK6(value)            (PMC_PLL_IER_UNLOCK6_Msk & ((value) << PMC_PLL_IER_UNLOCK6_Pos))
#define PMC_PLL_IER_Msk                       _U_(0x007F007F)                                      /**< (PMC_PLL_IER) Register Mask  */

#define PMC_PLL_IER_LOCK_Pos                  _U_(0)                                               /**< (PMC_PLL_IER Position) PLL of Index x Lock Interrupt Enable */
#define PMC_PLL_IER_LOCK_Msk                  (_U_(0x7F) << PMC_PLL_IER_LOCK_Pos)                  /**< (PMC_PLL_IER Mask) LOCK */
#define PMC_PLL_IER_LOCK(value)               (PMC_PLL_IER_LOCK_Msk & ((value) << PMC_PLL_IER_LOCK_Pos)) 
#define PMC_PLL_IER_UNLOCK_Pos                _U_(16)                                              /**< (PMC_PLL_IER Position) PLL of Index 6 Unlock Interrupt Enable */
#define PMC_PLL_IER_UNLOCK_Msk                (_U_(0x7F) << PMC_PLL_IER_UNLOCK_Pos)                /**< (PMC_PLL_IER Mask) UNLOCK */
#define PMC_PLL_IER_UNLOCK(value)             (PMC_PLL_IER_UNLOCK_Msk & ((value) << PMC_PLL_IER_UNLOCK_Pos)) 

/* -------- PMC_PLL_IDR : (PMC Offset: 0xE4) ( /W 32) PLL Interrupt Disable Register -------- */
#define PMC_PLL_IDR_LOCK0_Pos                 _U_(0)                                               /**< (PMC_PLL_IDR) PLL of Index 0 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK0_Msk                 (_U_(0x1) << PMC_PLL_IDR_LOCK0_Pos)                  /**< (PMC_PLL_IDR) PLL of Index 0 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK0(value)              (PMC_PLL_IDR_LOCK0_Msk & ((value) << PMC_PLL_IDR_LOCK0_Pos))
#define PMC_PLL_IDR_LOCK1_Pos                 _U_(1)                                               /**< (PMC_PLL_IDR) PLL of Index 1 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK1_Msk                 (_U_(0x1) << PMC_PLL_IDR_LOCK1_Pos)                  /**< (PMC_PLL_IDR) PLL of Index 1 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK1(value)              (PMC_PLL_IDR_LOCK1_Msk & ((value) << PMC_PLL_IDR_LOCK1_Pos))
#define PMC_PLL_IDR_LOCK2_Pos                 _U_(2)                                               /**< (PMC_PLL_IDR) PLL of Index 2 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK2_Msk                 (_U_(0x1) << PMC_PLL_IDR_LOCK2_Pos)                  /**< (PMC_PLL_IDR) PLL of Index 2 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK2(value)              (PMC_PLL_IDR_LOCK2_Msk & ((value) << PMC_PLL_IDR_LOCK2_Pos))
#define PMC_PLL_IDR_LOCK3_Pos                 _U_(3)                                               /**< (PMC_PLL_IDR) PLL of Index 3 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK3_Msk                 (_U_(0x1) << PMC_PLL_IDR_LOCK3_Pos)                  /**< (PMC_PLL_IDR) PLL of Index 3 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK3(value)              (PMC_PLL_IDR_LOCK3_Msk & ((value) << PMC_PLL_IDR_LOCK3_Pos))
#define PMC_PLL_IDR_LOCK4_Pos                 _U_(4)                                               /**< (PMC_PLL_IDR) PLL of Index 4 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK4_Msk                 (_U_(0x1) << PMC_PLL_IDR_LOCK4_Pos)                  /**< (PMC_PLL_IDR) PLL of Index 4 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK4(value)              (PMC_PLL_IDR_LOCK4_Msk & ((value) << PMC_PLL_IDR_LOCK4_Pos))
#define PMC_PLL_IDR_LOCK5_Pos                 _U_(5)                                               /**< (PMC_PLL_IDR) PLL of Index 5 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK5_Msk                 (_U_(0x1) << PMC_PLL_IDR_LOCK5_Pos)                  /**< (PMC_PLL_IDR) PLL of Index 5 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK5(value)              (PMC_PLL_IDR_LOCK5_Msk & ((value) << PMC_PLL_IDR_LOCK5_Pos))
#define PMC_PLL_IDR_LOCK6_Pos                 _U_(6)                                               /**< (PMC_PLL_IDR) PLL of Index 6 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK6_Msk                 (_U_(0x1) << PMC_PLL_IDR_LOCK6_Pos)                  /**< (PMC_PLL_IDR) PLL of Index 6 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK6(value)              (PMC_PLL_IDR_LOCK6_Msk & ((value) << PMC_PLL_IDR_LOCK6_Pos))
#define PMC_PLL_IDR_UNLOCK0_Pos               _U_(16)                                              /**< (PMC_PLL_IDR) PLL of Index 0 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK0_Msk               (_U_(0x1) << PMC_PLL_IDR_UNLOCK0_Pos)                /**< (PMC_PLL_IDR) PLL of Index 0 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK0(value)            (PMC_PLL_IDR_UNLOCK0_Msk & ((value) << PMC_PLL_IDR_UNLOCK0_Pos))
#define PMC_PLL_IDR_UNLOCK1_Pos               _U_(17)                                              /**< (PMC_PLL_IDR) PLL of Index 1 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK1_Msk               (_U_(0x1) << PMC_PLL_IDR_UNLOCK1_Pos)                /**< (PMC_PLL_IDR) PLL of Index 1 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK1(value)            (PMC_PLL_IDR_UNLOCK1_Msk & ((value) << PMC_PLL_IDR_UNLOCK1_Pos))
#define PMC_PLL_IDR_UNLOCK2_Pos               _U_(18)                                              /**< (PMC_PLL_IDR) PLL of Index 2 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK2_Msk               (_U_(0x1) << PMC_PLL_IDR_UNLOCK2_Pos)                /**< (PMC_PLL_IDR) PLL of Index 2 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK2(value)            (PMC_PLL_IDR_UNLOCK2_Msk & ((value) << PMC_PLL_IDR_UNLOCK2_Pos))
#define PMC_PLL_IDR_UNLOCK3_Pos               _U_(19)                                              /**< (PMC_PLL_IDR) PLL of Index 3 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK3_Msk               (_U_(0x1) << PMC_PLL_IDR_UNLOCK3_Pos)                /**< (PMC_PLL_IDR) PLL of Index 3 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK3(value)            (PMC_PLL_IDR_UNLOCK3_Msk & ((value) << PMC_PLL_IDR_UNLOCK3_Pos))
#define PMC_PLL_IDR_UNLOCK4_Pos               _U_(20)                                              /**< (PMC_PLL_IDR) PLL of Index 4 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK4_Msk               (_U_(0x1) << PMC_PLL_IDR_UNLOCK4_Pos)                /**< (PMC_PLL_IDR) PLL of Index 4 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK4(value)            (PMC_PLL_IDR_UNLOCK4_Msk & ((value) << PMC_PLL_IDR_UNLOCK4_Pos))
#define PMC_PLL_IDR_UNLOCK5_Pos               _U_(21)                                              /**< (PMC_PLL_IDR) PLL of Index 5 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK5_Msk               (_U_(0x1) << PMC_PLL_IDR_UNLOCK5_Pos)                /**< (PMC_PLL_IDR) PLL of Index 5 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK5(value)            (PMC_PLL_IDR_UNLOCK5_Msk & ((value) << PMC_PLL_IDR_UNLOCK5_Pos))
#define PMC_PLL_IDR_UNLOCK6_Pos               _U_(22)                                              /**< (PMC_PLL_IDR) PLL of Index 6 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK6_Msk               (_U_(0x1) << PMC_PLL_IDR_UNLOCK6_Pos)                /**< (PMC_PLL_IDR) PLL of Index 6 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK6(value)            (PMC_PLL_IDR_UNLOCK6_Msk & ((value) << PMC_PLL_IDR_UNLOCK6_Pos))
#define PMC_PLL_IDR_Msk                       _U_(0x007F007F)                                      /**< (PMC_PLL_IDR) Register Mask  */

#define PMC_PLL_IDR_LOCK_Pos                  _U_(0)                                               /**< (PMC_PLL_IDR Position) PLL of Index x Lock Interrupt Disable */
#define PMC_PLL_IDR_LOCK_Msk                  (_U_(0x7F) << PMC_PLL_IDR_LOCK_Pos)                  /**< (PMC_PLL_IDR Mask) LOCK */
#define PMC_PLL_IDR_LOCK(value)               (PMC_PLL_IDR_LOCK_Msk & ((value) << PMC_PLL_IDR_LOCK_Pos)) 
#define PMC_PLL_IDR_UNLOCK_Pos                _U_(16)                                              /**< (PMC_PLL_IDR Position) PLL of Index 6 Unlock Interrupt Disable */
#define PMC_PLL_IDR_UNLOCK_Msk                (_U_(0x7F) << PMC_PLL_IDR_UNLOCK_Pos)                /**< (PMC_PLL_IDR Mask) UNLOCK */
#define PMC_PLL_IDR_UNLOCK(value)             (PMC_PLL_IDR_UNLOCK_Msk & ((value) << PMC_PLL_IDR_UNLOCK_Pos)) 

/* -------- PMC_PLL_IMR : (PMC Offset: 0xE8) ( R/ 32) PLL Interrupt Mask Register -------- */
#define PMC_PLL_IMR_RESETVALUE                _U_(0x00)                                            /**<  (PMC_PLL_IMR) PLL Interrupt Mask Register  Reset Value */

#define PMC_PLL_IMR_LOCK0_Pos                 _U_(0)                                               /**< (PMC_PLL_IMR) PLL of Index 0 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK0_Msk                 (_U_(0x1) << PMC_PLL_IMR_LOCK0_Pos)                  /**< (PMC_PLL_IMR) PLL of Index 0 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK0(value)              (PMC_PLL_IMR_LOCK0_Msk & ((value) << PMC_PLL_IMR_LOCK0_Pos))
#define PMC_PLL_IMR_LOCK1_Pos                 _U_(1)                                               /**< (PMC_PLL_IMR) PLL of Index 1 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK1_Msk                 (_U_(0x1) << PMC_PLL_IMR_LOCK1_Pos)                  /**< (PMC_PLL_IMR) PLL of Index 1 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK1(value)              (PMC_PLL_IMR_LOCK1_Msk & ((value) << PMC_PLL_IMR_LOCK1_Pos))
#define PMC_PLL_IMR_LOCK2_Pos                 _U_(2)                                               /**< (PMC_PLL_IMR) PLL of Index 2 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK2_Msk                 (_U_(0x1) << PMC_PLL_IMR_LOCK2_Pos)                  /**< (PMC_PLL_IMR) PLL of Index 2 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK2(value)              (PMC_PLL_IMR_LOCK2_Msk & ((value) << PMC_PLL_IMR_LOCK2_Pos))
#define PMC_PLL_IMR_LOCK3_Pos                 _U_(3)                                               /**< (PMC_PLL_IMR) PLL of Index 3 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK3_Msk                 (_U_(0x1) << PMC_PLL_IMR_LOCK3_Pos)                  /**< (PMC_PLL_IMR) PLL of Index 3 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK3(value)              (PMC_PLL_IMR_LOCK3_Msk & ((value) << PMC_PLL_IMR_LOCK3_Pos))
#define PMC_PLL_IMR_LOCK4_Pos                 _U_(4)                                               /**< (PMC_PLL_IMR) PLL of Index 4 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK4_Msk                 (_U_(0x1) << PMC_PLL_IMR_LOCK4_Pos)                  /**< (PMC_PLL_IMR) PLL of Index 4 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK4(value)              (PMC_PLL_IMR_LOCK4_Msk & ((value) << PMC_PLL_IMR_LOCK4_Pos))
#define PMC_PLL_IMR_LOCK5_Pos                 _U_(5)                                               /**< (PMC_PLL_IMR) PLL of Index 5 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK5_Msk                 (_U_(0x1) << PMC_PLL_IMR_LOCK5_Pos)                  /**< (PMC_PLL_IMR) PLL of Index 5 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK5(value)              (PMC_PLL_IMR_LOCK5_Msk & ((value) << PMC_PLL_IMR_LOCK5_Pos))
#define PMC_PLL_IMR_LOCK6_Pos                 _U_(6)                                               /**< (PMC_PLL_IMR) PLL of Index 6 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK6_Msk                 (_U_(0x1) << PMC_PLL_IMR_LOCK6_Pos)                  /**< (PMC_PLL_IMR) PLL of Index 6 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK6(value)              (PMC_PLL_IMR_LOCK6_Msk & ((value) << PMC_PLL_IMR_LOCK6_Pos))
#define PMC_PLL_IMR_UNLOCK0_Pos               _U_(16)                                              /**< (PMC_PLL_IMR) PLL of Index 0 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK0_Msk               (_U_(0x1) << PMC_PLL_IMR_UNLOCK0_Pos)                /**< (PMC_PLL_IMR) PLL of Index 0 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK0(value)            (PMC_PLL_IMR_UNLOCK0_Msk & ((value) << PMC_PLL_IMR_UNLOCK0_Pos))
#define PMC_PLL_IMR_UNLOCK1_Pos               _U_(17)                                              /**< (PMC_PLL_IMR) PLL of Index 1 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK1_Msk               (_U_(0x1) << PMC_PLL_IMR_UNLOCK1_Pos)                /**< (PMC_PLL_IMR) PLL of Index 1 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK1(value)            (PMC_PLL_IMR_UNLOCK1_Msk & ((value) << PMC_PLL_IMR_UNLOCK1_Pos))
#define PMC_PLL_IMR_UNLOCK2_Pos               _U_(18)                                              /**< (PMC_PLL_IMR) PLL of Index 2 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK2_Msk               (_U_(0x1) << PMC_PLL_IMR_UNLOCK2_Pos)                /**< (PMC_PLL_IMR) PLL of Index 2 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK2(value)            (PMC_PLL_IMR_UNLOCK2_Msk & ((value) << PMC_PLL_IMR_UNLOCK2_Pos))
#define PMC_PLL_IMR_UNLOCK3_Pos               _U_(19)                                              /**< (PMC_PLL_IMR) PLL of Index 3 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK3_Msk               (_U_(0x1) << PMC_PLL_IMR_UNLOCK3_Pos)                /**< (PMC_PLL_IMR) PLL of Index 3 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK3(value)            (PMC_PLL_IMR_UNLOCK3_Msk & ((value) << PMC_PLL_IMR_UNLOCK3_Pos))
#define PMC_PLL_IMR_UNLOCK4_Pos               _U_(20)                                              /**< (PMC_PLL_IMR) PLL of Index 4 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK4_Msk               (_U_(0x1) << PMC_PLL_IMR_UNLOCK4_Pos)                /**< (PMC_PLL_IMR) PLL of Index 4 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK4(value)            (PMC_PLL_IMR_UNLOCK4_Msk & ((value) << PMC_PLL_IMR_UNLOCK4_Pos))
#define PMC_PLL_IMR_UNLOCK5_Pos               _U_(21)                                              /**< (PMC_PLL_IMR) PLL of Index 5 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK5_Msk               (_U_(0x1) << PMC_PLL_IMR_UNLOCK5_Pos)                /**< (PMC_PLL_IMR) PLL of Index 5 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK5(value)            (PMC_PLL_IMR_UNLOCK5_Msk & ((value) << PMC_PLL_IMR_UNLOCK5_Pos))
#define PMC_PLL_IMR_UNLOCK6_Pos               _U_(22)                                              /**< (PMC_PLL_IMR) PLL of Index 6 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK6_Msk               (_U_(0x1) << PMC_PLL_IMR_UNLOCK6_Pos)                /**< (PMC_PLL_IMR) PLL of Index 6 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK6(value)            (PMC_PLL_IMR_UNLOCK6_Msk & ((value) << PMC_PLL_IMR_UNLOCK6_Pos))
#define PMC_PLL_IMR_Msk                       _U_(0x007F007F)                                      /**< (PMC_PLL_IMR) Register Mask  */

#define PMC_PLL_IMR_LOCK_Pos                  _U_(0)                                               /**< (PMC_PLL_IMR Position) PLL of Index x Lock Interrupt Mask */
#define PMC_PLL_IMR_LOCK_Msk                  (_U_(0x7F) << PMC_PLL_IMR_LOCK_Pos)                  /**< (PMC_PLL_IMR Mask) LOCK */
#define PMC_PLL_IMR_LOCK(value)               (PMC_PLL_IMR_LOCK_Msk & ((value) << PMC_PLL_IMR_LOCK_Pos)) 
#define PMC_PLL_IMR_UNLOCK_Pos                _U_(16)                                              /**< (PMC_PLL_IMR Position) PLL of Index 6 Unlock Interrupt Mask */
#define PMC_PLL_IMR_UNLOCK_Msk                (_U_(0x7F) << PMC_PLL_IMR_UNLOCK_Pos)                /**< (PMC_PLL_IMR Mask) UNLOCK */
#define PMC_PLL_IMR_UNLOCK(value)             (PMC_PLL_IMR_UNLOCK_Msk & ((value) << PMC_PLL_IMR_UNLOCK_Pos)) 

/* -------- PMC_PLL_ISR0 : (PMC Offset: 0xEC) ( R/ 32) PLL Interrupt Status Register 0 -------- */
#define PMC_PLL_ISR0_RESETVALUE               _U_(0x00)                                            /**<  (PMC_PLL_ISR0) PLL Interrupt Status Register 0  Reset Value */

#define PMC_PLL_ISR0_LOCK0_Pos                _U_(0)                                               /**< (PMC_PLL_ISR0) PLL of Index 0 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK0_Msk                (_U_(0x1) << PMC_PLL_ISR0_LOCK0_Pos)                 /**< (PMC_PLL_ISR0) PLL of Index 0 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK0(value)             (PMC_PLL_ISR0_LOCK0_Msk & ((value) << PMC_PLL_ISR0_LOCK0_Pos))
#define   PMC_PLL_ISR0_LOCK0_0_Val            _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLLx is not locked.  */
#define   PMC_PLL_ISR0_LOCK0_1_Val            _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is locked.  */
#define PMC_PLL_ISR0_LOCK0_0                  (PMC_PLL_ISR0_LOCK0_0_Val << PMC_PLL_ISR0_LOCK0_Pos) /**< (PMC_PLL_ISR0) PLLx is not locked. Position  */
#define PMC_PLL_ISR0_LOCK0_1                  (PMC_PLL_ISR0_LOCK0_1_Val << PMC_PLL_ISR0_LOCK0_Pos) /**< (PMC_PLL_ISR0) PLLx is locked. Position  */
#define PMC_PLL_ISR0_LOCK1_Pos                _U_(1)                                               /**< (PMC_PLL_ISR0) PLL of Index 1 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK1_Msk                (_U_(0x1) << PMC_PLL_ISR0_LOCK1_Pos)                 /**< (PMC_PLL_ISR0) PLL of Index 1 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK1(value)             (PMC_PLL_ISR0_LOCK1_Msk & ((value) << PMC_PLL_ISR0_LOCK1_Pos))
#define   PMC_PLL_ISR0_LOCK1_0_Val            _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLLx is not locked.  */
#define   PMC_PLL_ISR0_LOCK1_1_Val            _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is locked.  */
#define PMC_PLL_ISR0_LOCK1_0                  (PMC_PLL_ISR0_LOCK1_0_Val << PMC_PLL_ISR0_LOCK1_Pos) /**< (PMC_PLL_ISR0) PLLx is not locked. Position  */
#define PMC_PLL_ISR0_LOCK1_1                  (PMC_PLL_ISR0_LOCK1_1_Val << PMC_PLL_ISR0_LOCK1_Pos) /**< (PMC_PLL_ISR0) PLLx is locked. Position  */
#define PMC_PLL_ISR0_LOCK2_Pos                _U_(2)                                               /**< (PMC_PLL_ISR0) PLL of Index 2 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK2_Msk                (_U_(0x1) << PMC_PLL_ISR0_LOCK2_Pos)                 /**< (PMC_PLL_ISR0) PLL of Index 2 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK2(value)             (PMC_PLL_ISR0_LOCK2_Msk & ((value) << PMC_PLL_ISR0_LOCK2_Pos))
#define   PMC_PLL_ISR0_LOCK2_0_Val            _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLLx is not locked.  */
#define   PMC_PLL_ISR0_LOCK2_1_Val            _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is locked.  */
#define PMC_PLL_ISR0_LOCK2_0                  (PMC_PLL_ISR0_LOCK2_0_Val << PMC_PLL_ISR0_LOCK2_Pos) /**< (PMC_PLL_ISR0) PLLx is not locked. Position  */
#define PMC_PLL_ISR0_LOCK2_1                  (PMC_PLL_ISR0_LOCK2_1_Val << PMC_PLL_ISR0_LOCK2_Pos) /**< (PMC_PLL_ISR0) PLLx is locked. Position  */
#define PMC_PLL_ISR0_LOCK3_Pos                _U_(3)                                               /**< (PMC_PLL_ISR0) PLL of Index 3 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK3_Msk                (_U_(0x1) << PMC_PLL_ISR0_LOCK3_Pos)                 /**< (PMC_PLL_ISR0) PLL of Index 3 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK3(value)             (PMC_PLL_ISR0_LOCK3_Msk & ((value) << PMC_PLL_ISR0_LOCK3_Pos))
#define   PMC_PLL_ISR0_LOCK3_0_Val            _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLLx is not locked.  */
#define   PMC_PLL_ISR0_LOCK3_1_Val            _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is locked.  */
#define PMC_PLL_ISR0_LOCK3_0                  (PMC_PLL_ISR0_LOCK3_0_Val << PMC_PLL_ISR0_LOCK3_Pos) /**< (PMC_PLL_ISR0) PLLx is not locked. Position  */
#define PMC_PLL_ISR0_LOCK3_1                  (PMC_PLL_ISR0_LOCK3_1_Val << PMC_PLL_ISR0_LOCK3_Pos) /**< (PMC_PLL_ISR0) PLLx is locked. Position  */
#define PMC_PLL_ISR0_LOCK4_Pos                _U_(4)                                               /**< (PMC_PLL_ISR0) PLL of Index 4 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK4_Msk                (_U_(0x1) << PMC_PLL_ISR0_LOCK4_Pos)                 /**< (PMC_PLL_ISR0) PLL of Index 4 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK4(value)             (PMC_PLL_ISR0_LOCK4_Msk & ((value) << PMC_PLL_ISR0_LOCK4_Pos))
#define   PMC_PLL_ISR0_LOCK4_0_Val            _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLLx is not locked.  */
#define   PMC_PLL_ISR0_LOCK4_1_Val            _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is locked.  */
#define PMC_PLL_ISR0_LOCK4_0                  (PMC_PLL_ISR0_LOCK4_0_Val << PMC_PLL_ISR0_LOCK4_Pos) /**< (PMC_PLL_ISR0) PLLx is not locked. Position  */
#define PMC_PLL_ISR0_LOCK4_1                  (PMC_PLL_ISR0_LOCK4_1_Val << PMC_PLL_ISR0_LOCK4_Pos) /**< (PMC_PLL_ISR0) PLLx is locked. Position  */
#define PMC_PLL_ISR0_LOCK5_Pos                _U_(5)                                               /**< (PMC_PLL_ISR0) PLL of Index 5 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK5_Msk                (_U_(0x1) << PMC_PLL_ISR0_LOCK5_Pos)                 /**< (PMC_PLL_ISR0) PLL of Index 5 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK5(value)             (PMC_PLL_ISR0_LOCK5_Msk & ((value) << PMC_PLL_ISR0_LOCK5_Pos))
#define   PMC_PLL_ISR0_LOCK5_0_Val            _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLLx is not locked.  */
#define   PMC_PLL_ISR0_LOCK5_1_Val            _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is locked.  */
#define PMC_PLL_ISR0_LOCK5_0                  (PMC_PLL_ISR0_LOCK5_0_Val << PMC_PLL_ISR0_LOCK5_Pos) /**< (PMC_PLL_ISR0) PLLx is not locked. Position  */
#define PMC_PLL_ISR0_LOCK5_1                  (PMC_PLL_ISR0_LOCK5_1_Val << PMC_PLL_ISR0_LOCK5_Pos) /**< (PMC_PLL_ISR0) PLLx is locked. Position  */
#define PMC_PLL_ISR0_LOCK6_Pos                _U_(6)                                               /**< (PMC_PLL_ISR0) PLL of Index 6 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK6_Msk                (_U_(0x1) << PMC_PLL_ISR0_LOCK6_Pos)                 /**< (PMC_PLL_ISR0) PLL of Index 6 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK6(value)             (PMC_PLL_ISR0_LOCK6_Msk & ((value) << PMC_PLL_ISR0_LOCK6_Pos))
#define   PMC_PLL_ISR0_LOCK6_0_Val            _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLLx is not locked.  */
#define   PMC_PLL_ISR0_LOCK6_1_Val            _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is locked.  */
#define PMC_PLL_ISR0_LOCK6_0                  (PMC_PLL_ISR0_LOCK6_0_Val << PMC_PLL_ISR0_LOCK6_Pos) /**< (PMC_PLL_ISR0) PLLx is not locked. Position  */
#define PMC_PLL_ISR0_LOCK6_1                  (PMC_PLL_ISR0_LOCK6_1_Val << PMC_PLL_ISR0_LOCK6_Pos) /**< (PMC_PLL_ISR0) PLLx is locked. Position  */
#define PMC_PLL_ISR0_UNLOCK0_Pos              _U_(16)                                              /**< (PMC_PLL_ISR0) PLL of Index 0 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK0_Msk              (_U_(0x1) << PMC_PLL_ISR0_UNLOCK0_Pos)               /**< (PMC_PLL_ISR0) PLL of Index 0 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK0(value)           (PMC_PLL_ISR0_UNLOCK0_Msk & ((value) << PMC_PLL_ISR0_UNLOCK0_Pos))
#define   PMC_PLL_ISR0_UNLOCK0_0_Val          _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLL is not unlocked.  */
#define   PMC_PLL_ISR0_UNLOCK0_1_Val          _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read.  */
#define PMC_PLL_ISR0_UNLOCK0_0                (PMC_PLL_ISR0_UNLOCK0_0_Val << PMC_PLL_ISR0_UNLOCK0_Pos) /**< (PMC_PLL_ISR0) PLL is not unlocked. Position  */
#define PMC_PLL_ISR0_UNLOCK0_1                (PMC_PLL_ISR0_UNLOCK0_1_Val << PMC_PLL_ISR0_UNLOCK0_Pos) /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read. Position  */
#define PMC_PLL_ISR0_UNLOCK1_Pos              _U_(17)                                              /**< (PMC_PLL_ISR0) PLL of Index 1 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK1_Msk              (_U_(0x1) << PMC_PLL_ISR0_UNLOCK1_Pos)               /**< (PMC_PLL_ISR0) PLL of Index 1 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK1(value)           (PMC_PLL_ISR0_UNLOCK1_Msk & ((value) << PMC_PLL_ISR0_UNLOCK1_Pos))
#define   PMC_PLL_ISR0_UNLOCK1_0_Val          _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLL is not unlocked.  */
#define   PMC_PLL_ISR0_UNLOCK1_1_Val          _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read.  */
#define PMC_PLL_ISR0_UNLOCK1_0                (PMC_PLL_ISR0_UNLOCK1_0_Val << PMC_PLL_ISR0_UNLOCK1_Pos) /**< (PMC_PLL_ISR0) PLL is not unlocked. Position  */
#define PMC_PLL_ISR0_UNLOCK1_1                (PMC_PLL_ISR0_UNLOCK1_1_Val << PMC_PLL_ISR0_UNLOCK1_Pos) /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read. Position  */
#define PMC_PLL_ISR0_UNLOCK2_Pos              _U_(18)                                              /**< (PMC_PLL_ISR0) PLL of Index 2 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK2_Msk              (_U_(0x1) << PMC_PLL_ISR0_UNLOCK2_Pos)               /**< (PMC_PLL_ISR0) PLL of Index 2 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK2(value)           (PMC_PLL_ISR0_UNLOCK2_Msk & ((value) << PMC_PLL_ISR0_UNLOCK2_Pos))
#define   PMC_PLL_ISR0_UNLOCK2_0_Val          _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLL is not unlocked.  */
#define   PMC_PLL_ISR0_UNLOCK2_1_Val          _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read.  */
#define PMC_PLL_ISR0_UNLOCK2_0                (PMC_PLL_ISR0_UNLOCK2_0_Val << PMC_PLL_ISR0_UNLOCK2_Pos) /**< (PMC_PLL_ISR0) PLL is not unlocked. Position  */
#define PMC_PLL_ISR0_UNLOCK2_1                (PMC_PLL_ISR0_UNLOCK2_1_Val << PMC_PLL_ISR0_UNLOCK2_Pos) /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read. Position  */
#define PMC_PLL_ISR0_UNLOCK3_Pos              _U_(19)                                              /**< (PMC_PLL_ISR0) PLL of Index 3 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK3_Msk              (_U_(0x1) << PMC_PLL_ISR0_UNLOCK3_Pos)               /**< (PMC_PLL_ISR0) PLL of Index 3 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK3(value)           (PMC_PLL_ISR0_UNLOCK3_Msk & ((value) << PMC_PLL_ISR0_UNLOCK3_Pos))
#define   PMC_PLL_ISR0_UNLOCK3_0_Val          _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLL is not unlocked.  */
#define   PMC_PLL_ISR0_UNLOCK3_1_Val          _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read.  */
#define PMC_PLL_ISR0_UNLOCK3_0                (PMC_PLL_ISR0_UNLOCK3_0_Val << PMC_PLL_ISR0_UNLOCK3_Pos) /**< (PMC_PLL_ISR0) PLL is not unlocked. Position  */
#define PMC_PLL_ISR0_UNLOCK3_1                (PMC_PLL_ISR0_UNLOCK3_1_Val << PMC_PLL_ISR0_UNLOCK3_Pos) /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read. Position  */
#define PMC_PLL_ISR0_UNLOCK4_Pos              _U_(20)                                              /**< (PMC_PLL_ISR0) PLL of Index 4 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK4_Msk              (_U_(0x1) << PMC_PLL_ISR0_UNLOCK4_Pos)               /**< (PMC_PLL_ISR0) PLL of Index 4 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK4(value)           (PMC_PLL_ISR0_UNLOCK4_Msk & ((value) << PMC_PLL_ISR0_UNLOCK4_Pos))
#define   PMC_PLL_ISR0_UNLOCK4_0_Val          _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLL is not unlocked.  */
#define   PMC_PLL_ISR0_UNLOCK4_1_Val          _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read.  */
#define PMC_PLL_ISR0_UNLOCK4_0                (PMC_PLL_ISR0_UNLOCK4_0_Val << PMC_PLL_ISR0_UNLOCK4_Pos) /**< (PMC_PLL_ISR0) PLL is not unlocked. Position  */
#define PMC_PLL_ISR0_UNLOCK4_1                (PMC_PLL_ISR0_UNLOCK4_1_Val << PMC_PLL_ISR0_UNLOCK4_Pos) /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read. Position  */
#define PMC_PLL_ISR0_UNLOCK5_Pos              _U_(21)                                              /**< (PMC_PLL_ISR0) PLL of Index 5 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK5_Msk              (_U_(0x1) << PMC_PLL_ISR0_UNLOCK5_Pos)               /**< (PMC_PLL_ISR0) PLL of Index 5 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK5(value)           (PMC_PLL_ISR0_UNLOCK5_Msk & ((value) << PMC_PLL_ISR0_UNLOCK5_Pos))
#define   PMC_PLL_ISR0_UNLOCK5_0_Val          _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLL is not unlocked.  */
#define   PMC_PLL_ISR0_UNLOCK5_1_Val          _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read.  */
#define PMC_PLL_ISR0_UNLOCK5_0                (PMC_PLL_ISR0_UNLOCK5_0_Val << PMC_PLL_ISR0_UNLOCK5_Pos) /**< (PMC_PLL_ISR0) PLL is not unlocked. Position  */
#define PMC_PLL_ISR0_UNLOCK5_1                (PMC_PLL_ISR0_UNLOCK5_1_Val << PMC_PLL_ISR0_UNLOCK5_Pos) /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read. Position  */
#define PMC_PLL_ISR0_UNLOCK6_Pos              _U_(22)                                              /**< (PMC_PLL_ISR0) PLL of Index 6 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK6_Msk              (_U_(0x1) << PMC_PLL_ISR0_UNLOCK6_Pos)               /**< (PMC_PLL_ISR0) PLL of Index 6 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK6(value)           (PMC_PLL_ISR0_UNLOCK6_Msk & ((value) << PMC_PLL_ISR0_UNLOCK6_Pos))
#define   PMC_PLL_ISR0_UNLOCK6_0_Val          _U_(0x0)                                             /**< (PMC_PLL_ISR0) PLL is not unlocked.  */
#define   PMC_PLL_ISR0_UNLOCK6_1_Val          _U_(0x1)                                             /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read.  */
#define PMC_PLL_ISR0_UNLOCK6_0                (PMC_PLL_ISR0_UNLOCK6_0_Val << PMC_PLL_ISR0_UNLOCK6_Pos) /**< (PMC_PLL_ISR0) PLL is not unlocked. Position  */
#define PMC_PLL_ISR0_UNLOCK6_1                (PMC_PLL_ISR0_UNLOCK6_1_Val << PMC_PLL_ISR0_UNLOCK6_Pos) /**< (PMC_PLL_ISR0) PLLx is unlocked. To know the unlock type, the PMC_PISR1 register can be read. Position  */
#define PMC_PLL_ISR0_Msk                      _U_(0x007F007F)                                      /**< (PMC_PLL_ISR0) Register Mask  */

#define PMC_PLL_ISR0_LOCK_Pos                 _U_(0)                                               /**< (PMC_PLL_ISR0 Position) PLL of Index x Lock Interrupt Status */
#define PMC_PLL_ISR0_LOCK_Msk                 (_U_(0x7F) << PMC_PLL_ISR0_LOCK_Pos)                 /**< (PMC_PLL_ISR0 Mask) LOCK */
#define PMC_PLL_ISR0_LOCK(value)              (PMC_PLL_ISR0_LOCK_Msk & ((value) << PMC_PLL_ISR0_LOCK_Pos)) 
#define PMC_PLL_ISR0_UNLOCK_Pos               _U_(16)                                              /**< (PMC_PLL_ISR0 Position) PLL of Index 6 Unlock Interrupt Status */
#define PMC_PLL_ISR0_UNLOCK_Msk               (_U_(0x7F) << PMC_PLL_ISR0_UNLOCK_Pos)               /**< (PMC_PLL_ISR0 Mask) UNLOCK */
#define PMC_PLL_ISR0_UNLOCK(value)            (PMC_PLL_ISR0_UNLOCK_Msk & ((value) << PMC_PLL_ISR0_UNLOCK_Pos)) 

/* -------- PMC_PLL_ISR1 : (PMC Offset: 0xF0) ( R/ 32) PLL Interrupt Status Register 1 -------- */
#define PMC_PLL_ISR1_RESETVALUE               _U_(0x00)                                            /**<  (PMC_PLL_ISR1) PLL Interrupt Status Register 1  Reset Value */

#define PMC_PLL_ISR1_UDR0_Pos                 _U_(0)                                               /**< (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR0_Msk                 (_U_(0x1) << PMC_PLL_ISR1_UDR0_Pos)                  /**< (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR0(value)              (PMC_PLL_ISR1_UDR0_Msk & ((value) << PMC_PLL_ISR1_UDR0_Pos))
#define   PMC_PLL_ISR1_UDR0_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in underflow state.  */
#define   PMC_PLL_ISR1_UDR0_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an underflow.  */
#define PMC_PLL_ISR1_UDR0_0                   (PMC_PLL_ISR1_UDR0_0_Val << PMC_PLL_ISR1_UDR0_Pos)   /**< (PMC_PLL_ISR1) PLL is not in underflow state. Position  */
#define PMC_PLL_ISR1_UDR0_1                   (PMC_PLL_ISR1_UDR0_1_Val << PMC_PLL_ISR1_UDR0_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an underflow. Position  */
#define PMC_PLL_ISR1_UDR1_Pos                 _U_(1)                                               /**< (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR1_Msk                 (_U_(0x1) << PMC_PLL_ISR1_UDR1_Pos)                  /**< (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR1(value)              (PMC_PLL_ISR1_UDR1_Msk & ((value) << PMC_PLL_ISR1_UDR1_Pos))
#define   PMC_PLL_ISR1_UDR1_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in underflow state.  */
#define   PMC_PLL_ISR1_UDR1_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an underflow.  */
#define PMC_PLL_ISR1_UDR1_0                   (PMC_PLL_ISR1_UDR1_0_Val << PMC_PLL_ISR1_UDR1_Pos)   /**< (PMC_PLL_ISR1) PLL is not in underflow state. Position  */
#define PMC_PLL_ISR1_UDR1_1                   (PMC_PLL_ISR1_UDR1_1_Val << PMC_PLL_ISR1_UDR1_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an underflow. Position  */
#define PMC_PLL_ISR1_UDR2_Pos                 _U_(2)                                               /**< (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR2_Msk                 (_U_(0x1) << PMC_PLL_ISR1_UDR2_Pos)                  /**< (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR2(value)              (PMC_PLL_ISR1_UDR2_Msk & ((value) << PMC_PLL_ISR1_UDR2_Pos))
#define   PMC_PLL_ISR1_UDR2_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in underflow state.  */
#define   PMC_PLL_ISR1_UDR2_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an underflow.  */
#define PMC_PLL_ISR1_UDR2_0                   (PMC_PLL_ISR1_UDR2_0_Val << PMC_PLL_ISR1_UDR2_Pos)   /**< (PMC_PLL_ISR1) PLL is not in underflow state. Position  */
#define PMC_PLL_ISR1_UDR2_1                   (PMC_PLL_ISR1_UDR2_1_Val << PMC_PLL_ISR1_UDR2_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an underflow. Position  */
#define PMC_PLL_ISR1_UDR3_Pos                 _U_(3)                                               /**< (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR3_Msk                 (_U_(0x1) << PMC_PLL_ISR1_UDR3_Pos)                  /**< (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR3(value)              (PMC_PLL_ISR1_UDR3_Msk & ((value) << PMC_PLL_ISR1_UDR3_Pos))
#define   PMC_PLL_ISR1_UDR3_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in underflow state.  */
#define   PMC_PLL_ISR1_UDR3_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an underflow.  */
#define PMC_PLL_ISR1_UDR3_0                   (PMC_PLL_ISR1_UDR3_0_Val << PMC_PLL_ISR1_UDR3_Pos)   /**< (PMC_PLL_ISR1) PLL is not in underflow state. Position  */
#define PMC_PLL_ISR1_UDR3_1                   (PMC_PLL_ISR1_UDR3_1_Val << PMC_PLL_ISR1_UDR3_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an underflow. Position  */
#define PMC_PLL_ISR1_UDR4_Pos                 _U_(4)                                               /**< (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR4_Msk                 (_U_(0x1) << PMC_PLL_ISR1_UDR4_Pos)                  /**< (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR4(value)              (PMC_PLL_ISR1_UDR4_Msk & ((value) << PMC_PLL_ISR1_UDR4_Pos))
#define   PMC_PLL_ISR1_UDR4_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in underflow state.  */
#define   PMC_PLL_ISR1_UDR4_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an underflow.  */
#define PMC_PLL_ISR1_UDR4_0                   (PMC_PLL_ISR1_UDR4_0_Val << PMC_PLL_ISR1_UDR4_Pos)   /**< (PMC_PLL_ISR1) PLL is not in underflow state. Position  */
#define PMC_PLL_ISR1_UDR4_1                   (PMC_PLL_ISR1_UDR4_1_Val << PMC_PLL_ISR1_UDR4_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an underflow. Position  */
#define PMC_PLL_ISR1_UDR5_Pos                 _U_(5)                                               /**< (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR5_Msk                 (_U_(0x1) << PMC_PLL_ISR1_UDR5_Pos)                  /**< (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR5(value)              (PMC_PLL_ISR1_UDR5_Msk & ((value) << PMC_PLL_ISR1_UDR5_Pos))
#define   PMC_PLL_ISR1_UDR5_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in underflow state.  */
#define   PMC_PLL_ISR1_UDR5_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an underflow.  */
#define PMC_PLL_ISR1_UDR5_0                   (PMC_PLL_ISR1_UDR5_0_Val << PMC_PLL_ISR1_UDR5_Pos)   /**< (PMC_PLL_ISR1) PLL is not in underflow state. Position  */
#define PMC_PLL_ISR1_UDR5_1                   (PMC_PLL_ISR1_UDR5_1_Val << PMC_PLL_ISR1_UDR5_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an underflow. Position  */
#define PMC_PLL_ISR1_UDR6_Pos                 _U_(6)                                               /**< (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR6_Msk                 (_U_(0x1) << PMC_PLL_ISR1_UDR6_Pos)                  /**< (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR6(value)              (PMC_PLL_ISR1_UDR6_Msk & ((value) << PMC_PLL_ISR1_UDR6_Pos))
#define   PMC_PLL_ISR1_UDR6_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in underflow state.  */
#define   PMC_PLL_ISR1_UDR6_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an underflow.  */
#define PMC_PLL_ISR1_UDR6_0                   (PMC_PLL_ISR1_UDR6_0_Val << PMC_PLL_ISR1_UDR6_Pos)   /**< (PMC_PLL_ISR1) PLL is not in underflow state. Position  */
#define PMC_PLL_ISR1_UDR6_1                   (PMC_PLL_ISR1_UDR6_1_Val << PMC_PLL_ISR1_UDR6_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an underflow. Position  */
#define PMC_PLL_ISR1_OVR0_Pos                 _U_(16)                                              /**< (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR0_Msk                 (_U_(0x1) << PMC_PLL_ISR1_OVR0_Pos)                  /**< (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR0(value)              (PMC_PLL_ISR1_OVR0_Msk & ((value) << PMC_PLL_ISR1_OVR0_Pos))
#define   PMC_PLL_ISR1_OVR0_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in overflow state.  */
#define   PMC_PLL_ISR1_OVR0_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an overflow.  */
#define PMC_PLL_ISR1_OVR0_0                   (PMC_PLL_ISR1_OVR0_0_Val << PMC_PLL_ISR1_OVR0_Pos)   /**< (PMC_PLL_ISR1) PLL is not in overflow state. Position  */
#define PMC_PLL_ISR1_OVR0_1                   (PMC_PLL_ISR1_OVR0_1_Val << PMC_PLL_ISR1_OVR0_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an overflow. Position  */
#define PMC_PLL_ISR1_OVR1_Pos                 _U_(17)                                              /**< (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR1_Msk                 (_U_(0x1) << PMC_PLL_ISR1_OVR1_Pos)                  /**< (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR1(value)              (PMC_PLL_ISR1_OVR1_Msk & ((value) << PMC_PLL_ISR1_OVR1_Pos))
#define   PMC_PLL_ISR1_OVR1_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in overflow state.  */
#define   PMC_PLL_ISR1_OVR1_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an overflow.  */
#define PMC_PLL_ISR1_OVR1_0                   (PMC_PLL_ISR1_OVR1_0_Val << PMC_PLL_ISR1_OVR1_Pos)   /**< (PMC_PLL_ISR1) PLL is not in overflow state. Position  */
#define PMC_PLL_ISR1_OVR1_1                   (PMC_PLL_ISR1_OVR1_1_Val << PMC_PLL_ISR1_OVR1_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an overflow. Position  */
#define PMC_PLL_ISR1_OVR2_Pos                 _U_(18)                                              /**< (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR2_Msk                 (_U_(0x1) << PMC_PLL_ISR1_OVR2_Pos)                  /**< (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR2(value)              (PMC_PLL_ISR1_OVR2_Msk & ((value) << PMC_PLL_ISR1_OVR2_Pos))
#define   PMC_PLL_ISR1_OVR2_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in overflow state.  */
#define   PMC_PLL_ISR1_OVR2_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an overflow.  */
#define PMC_PLL_ISR1_OVR2_0                   (PMC_PLL_ISR1_OVR2_0_Val << PMC_PLL_ISR1_OVR2_Pos)   /**< (PMC_PLL_ISR1) PLL is not in overflow state. Position  */
#define PMC_PLL_ISR1_OVR2_1                   (PMC_PLL_ISR1_OVR2_1_Val << PMC_PLL_ISR1_OVR2_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an overflow. Position  */
#define PMC_PLL_ISR1_OVR3_Pos                 _U_(19)                                              /**< (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR3_Msk                 (_U_(0x1) << PMC_PLL_ISR1_OVR3_Pos)                  /**< (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR3(value)              (PMC_PLL_ISR1_OVR3_Msk & ((value) << PMC_PLL_ISR1_OVR3_Pos))
#define   PMC_PLL_ISR1_OVR3_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in overflow state.  */
#define   PMC_PLL_ISR1_OVR3_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an overflow.  */
#define PMC_PLL_ISR1_OVR3_0                   (PMC_PLL_ISR1_OVR3_0_Val << PMC_PLL_ISR1_OVR3_Pos)   /**< (PMC_PLL_ISR1) PLL is not in overflow state. Position  */
#define PMC_PLL_ISR1_OVR3_1                   (PMC_PLL_ISR1_OVR3_1_Val << PMC_PLL_ISR1_OVR3_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an overflow. Position  */
#define PMC_PLL_ISR1_OVR4_Pos                 _U_(20)                                              /**< (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR4_Msk                 (_U_(0x1) << PMC_PLL_ISR1_OVR4_Pos)                  /**< (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR4(value)              (PMC_PLL_ISR1_OVR4_Msk & ((value) << PMC_PLL_ISR1_OVR4_Pos))
#define   PMC_PLL_ISR1_OVR4_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in overflow state.  */
#define   PMC_PLL_ISR1_OVR4_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an overflow.  */
#define PMC_PLL_ISR1_OVR4_0                   (PMC_PLL_ISR1_OVR4_0_Val << PMC_PLL_ISR1_OVR4_Pos)   /**< (PMC_PLL_ISR1) PLL is not in overflow state. Position  */
#define PMC_PLL_ISR1_OVR4_1                   (PMC_PLL_ISR1_OVR4_1_Val << PMC_PLL_ISR1_OVR4_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an overflow. Position  */
#define PMC_PLL_ISR1_OVR5_Pos                 _U_(21)                                              /**< (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR5_Msk                 (_U_(0x1) << PMC_PLL_ISR1_OVR5_Pos)                  /**< (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR5(value)              (PMC_PLL_ISR1_OVR5_Msk & ((value) << PMC_PLL_ISR1_OVR5_Pos))
#define   PMC_PLL_ISR1_OVR5_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in overflow state.  */
#define   PMC_PLL_ISR1_OVR5_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an overflow.  */
#define PMC_PLL_ISR1_OVR5_0                   (PMC_PLL_ISR1_OVR5_0_Val << PMC_PLL_ISR1_OVR5_Pos)   /**< (PMC_PLL_ISR1) PLL is not in overflow state. Position  */
#define PMC_PLL_ISR1_OVR5_1                   (PMC_PLL_ISR1_OVR5_1_Val << PMC_PLL_ISR1_OVR5_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an overflow. Position  */
#define PMC_PLL_ISR1_OVR6_Pos                 _U_(22)                                              /**< (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR6_Msk                 (_U_(0x1) << PMC_PLL_ISR1_OVR6_Pos)                  /**< (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR6(value)              (PMC_PLL_ISR1_OVR6_Msk & ((value) << PMC_PLL_ISR1_OVR6_Pos))
#define   PMC_PLL_ISR1_OVR6_0_Val             _U_(0x0)                                             /**< (PMC_PLL_ISR1) PLL is not in overflow state.  */
#define   PMC_PLL_ISR1_OVR6_1_Val             _U_(0x1)                                             /**< (PMC_PLL_ISR1) PLL encountered an overflow.  */
#define PMC_PLL_ISR1_OVR6_0                   (PMC_PLL_ISR1_OVR6_0_Val << PMC_PLL_ISR1_OVR6_Pos)   /**< (PMC_PLL_ISR1) PLL is not in overflow state. Position  */
#define PMC_PLL_ISR1_OVR6_1                   (PMC_PLL_ISR1_OVR6_1_Val << PMC_PLL_ISR1_OVR6_Pos)   /**< (PMC_PLL_ISR1) PLL encountered an overflow. Position  */
#define PMC_PLL_ISR1_Msk                      _U_(0x007F007F)                                      /**< (PMC_PLL_ISR1) Register Mask  */

#define PMC_PLL_ISR1_UDR_Pos                  _U_(0)                                               /**< (PMC_PLL_ISR1 Position) PLLx Underflow */
#define PMC_PLL_ISR1_UDR_Msk                  (_U_(0x7F) << PMC_PLL_ISR1_UDR_Pos)                  /**< (PMC_PLL_ISR1 Mask) UDR */
#define PMC_PLL_ISR1_UDR(value)               (PMC_PLL_ISR1_UDR_Msk & ((value) << PMC_PLL_ISR1_UDR_Pos)) 
#define PMC_PLL_ISR1_OVR_Pos                  _U_(16)                                              /**< (PMC_PLL_ISR1 Position) PLLx Overflow */
#define PMC_PLL_ISR1_OVR_Msk                  (_U_(0x7F) << PMC_PLL_ISR1_OVR_Pos)                  /**< (PMC_PLL_ISR1 Mask) OVR */
#define PMC_PLL_ISR1_OVR(value)               (PMC_PLL_ISR1_OVR_Msk & ((value) << PMC_PLL_ISR1_OVR_Pos)) 

/** \brief PMC register offsets definitions */
#define PMC_SCER_REG_OFST              (0x00)              /**< (PMC_SCER) System Clock Enable Register Offset */
#define PMC_SCDR_REG_OFST              (0x04)              /**< (PMC_SCDR) System Clock Disable Register Offset */
#define PMC_SCSR_REG_OFST              (0x08)              /**< (PMC_SCSR) System Clock Status Register Offset */
#define PMC_PLL_CTRL0_REG_OFST         (0x0C)              /**< (PMC_PLL_CTRL0) PLL Control Register 0 Offset */
#define PMC_PLL_CTRL1_REG_OFST         (0x10)              /**< (PMC_PLL_CTRL1) PLL Control Register 1 Offset */
#define PMC_PLL_SSR_REG_OFST           (0x14)              /**< (PMC_PLL_SSR) PLL Spread Spectrum Register Offset */
#define PMC_PLL_ACR_REG_OFST           (0x18)              /**< (PMC_PLL_ACR) PLL Analog Control Register Offset */
#define PMC_PLL_UPDT_REG_OFST          (0x1C)              /**< (PMC_PLL_UPDT) PLL Update Register Offset */
#define CKGR_MOR_REG_OFST              (0x20)              /**< (CKGR_MOR) Main Oscillator Register Offset */
#define CKGR_MCFR_REG_OFST             (0x24)              /**< (CKGR_MCFR) Main Clock Frequency Register Offset */
#define PMC_CPU_CKR_REG_OFST           (0x28)              /**< (PMC_CPU_CKR) CPU Clock Register Offset */
#define PMC_CPU_RATIO_REG_OFST         (0x2C)              /**< (PMC_CPU_RATIO) CPU Clock Ratio Register Offset */
#define PMC_MCR_REG_OFST               (0x30)              /**< (PMC_MCR) Master Clock Register Offset */
#define PMC_XTALF_REG_OFST             (0x34)              /**< (PMC_XTALF) Main XTAL Frequency Register Offset */
#define PMC_PCK_REG_OFST               (0x40)              /**< (PMC_PCK) Programmable Clock Register x Offset */
#define PMC_PCK0_REG_OFST              (0x40)              /**< (PMC_PCK0) Programmable Clock Register x Offset */
#define PMC_PCK1_REG_OFST              (0x44)              /**< (PMC_PCK1) Programmable Clock Register x Offset */
#define PMC_PCK2_REG_OFST              (0x48)              /**< (PMC_PCK2) Programmable Clock Register x Offset */
#define PMC_PCK3_REG_OFST              (0x4C)              /**< (PMC_PCK3) Programmable Clock Register x Offset */
#define PMC_PCK4_REG_OFST              (0x50)              /**< (PMC_PCK4) Programmable Clock Register x Offset */
#define PMC_PCK5_REG_OFST              (0x54)              /**< (PMC_PCK5) Programmable Clock Register x Offset */
#define PMC_PCK6_REG_OFST              (0x58)              /**< (PMC_PCK6) Programmable Clock Register x Offset */
#define PMC_PCK7_REG_OFST              (0x5C)              /**< (PMC_PCK7) Programmable Clock Register x Offset */
#define PMC_IER_REG_OFST               (0x60)              /**< (PMC_IER) Interrupt Enable Register Offset */
#define PMC_IDR_REG_OFST               (0x64)              /**< (PMC_IDR) Interrupt Disable Register Offset */
#define PMC_SR_REG_OFST                (0x68)              /**< (PMC_SR) Status Register Offset */
#define PMC_IMR_REG_OFST               (0x6C)              /**< (PMC_IMR) Interrupt Mask Register Offset */
#define PMC_FSMR_REG_OFST              (0x70)              /**< (PMC_FSMR) Fast Startup Mode Register Offset */
#define PMC_WCR_REG_OFST               (0x74)              /**< (PMC_WCR) Wakeup Control Register Offset */
#define PMC_FOCR_REG_OFST              (0x78)              /**< (PMC_FOCR) Fault Output Clear Register Offset */
#define PMC_WPMR_REG_OFST              (0x80)              /**< (PMC_WPMR) Write Protection Mode Register Offset */
#define PMC_WPSR_REG_OFST              (0x84)              /**< (PMC_WPSR) Write Protection Status Register Offset */
#define PMC_PCR_REG_OFST               (0x88)              /**< (PMC_PCR) Peripheral Control Register Offset */
#define PMC_SLPWK_AIPR_REG_OFST        (0x90)              /**< (PMC_SLPWK_AIPR) SleepWalking Activity In Progress Register Offset */
#define PMC_SLPWKCR_REG_OFST           (0x94)              /**< (PMC_SLPWKCR) SleepWalking Control Register Offset */
#define PMC_MCKLIM_REG_OFST            (0x9C)              /**< (PMC_MCKLIM) MCK0 Monitor Limits Register Offset */
#define PMC_CSR0_REG_OFST              (0xA0)              /**< (PMC_CSR0) Peripheral Clock Status Register 0 Offset */
#define PMC_CSR1_REG_OFST              (0xA4)              /**< (PMC_CSR1) Peripheral Clock Status Register 1 Offset */
#define PMC_CSR2_REG_OFST              (0xA8)              /**< (PMC_CSR2) Peripheral Clock Status Register 2 Offset */
#define PMC_CSR3_REG_OFST              (0xAC)              /**< (PMC_CSR3) Peripheral Clock Status Register 3 Offset */
#define PMC_GCSR0_REG_OFST             (0xC0)              /**< (PMC_GCSR0) Generic Clock Status Register 0 Offset */
#define PMC_GCSR1_REG_OFST             (0xC4)              /**< (PMC_GCSR1) Generic Clock Status Register 1 Offset */
#define PMC_GCSR2_REG_OFST             (0xC8)              /**< (PMC_GCSR2) Generic Clock Status Register 2 Offset */
#define PMC_GCSR3_REG_OFST             (0xCC)              /**< (PMC_GCSR3) Generic Clock Status Register 3 Offset */
#define PMC_PLL_IER_REG_OFST           (0xE0)              /**< (PMC_PLL_IER) PLL Interrupt Enable Register Offset */
#define PMC_PLL_IDR_REG_OFST           (0xE4)              /**< (PMC_PLL_IDR) PLL Interrupt Disable Register Offset */
#define PMC_PLL_IMR_REG_OFST           (0xE8)              /**< (PMC_PLL_IMR) PLL Interrupt Mask Register Offset */
#define PMC_PLL_ISR0_REG_OFST          (0xEC)              /**< (PMC_PLL_ISR0) PLL Interrupt Status Register 0 Offset */
#define PMC_PLL_ISR1_REG_OFST          (0xF0)              /**< (PMC_PLL_ISR1) PLL Interrupt Status Register 1 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PMC register API structure */
typedef struct
{  /* Power Management Controller */
  __O   uint32_t                       PMC_SCER;           /**< Offset: 0x00 ( /W  32) System Clock Enable Register */
  __O   uint32_t                       PMC_SCDR;           /**< Offset: 0x04 ( /W  32) System Clock Disable Register */
  __I   uint32_t                       PMC_SCSR;           /**< Offset: 0x08 (R/   32) System Clock Status Register */
  __IO  uint32_t                       PMC_PLL_CTRL0;      /**< Offset: 0x0C (R/W  32) PLL Control Register 0 */
  __IO  uint32_t                       PMC_PLL_CTRL1;      /**< Offset: 0x10 (R/W  32) PLL Control Register 1 */
  __IO  uint32_t                       PMC_PLL_SSR;        /**< Offset: 0x14 (R/W  32) PLL Spread Spectrum Register */
  __IO  uint32_t                       PMC_PLL_ACR;        /**< Offset: 0x18 (R/W  32) PLL Analog Control Register */
  __IO  uint32_t                       PMC_PLL_UPDT;       /**< Offset: 0x1C (R/W  32) PLL Update Register */
  __IO  uint32_t                       CKGR_MOR;           /**< Offset: 0x20 (R/W  32) Main Oscillator Register */
  __IO  uint32_t                       CKGR_MCFR;          /**< Offset: 0x24 (R/W  32) Main Clock Frequency Register */
  __IO  uint32_t                       PMC_CPU_CKR;        /**< Offset: 0x28 (R/W  32) CPU Clock Register */
  __IO  uint32_t                       PMC_CPU_RATIO;      /**< Offset: 0x2C (R/W  32) CPU Clock Ratio Register */
  __IO  uint32_t                       PMC_MCR;            /**< Offset: 0x30 (R/W  32) Master Clock Register */
  __IO  uint32_t                       PMC_XTALF;          /**< Offset: 0x34 (R/W  32) Main XTAL Frequency Register */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       PMC_PCK[8];         /**< Offset: 0x40 (R/W  32) Programmable Clock Register x */
  __O   uint32_t                       PMC_IER;            /**< Offset: 0x60 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PMC_IDR;            /**< Offset: 0x64 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PMC_SR;             /**< Offset: 0x68 (R/   32) Status Register */
  __I   uint32_t                       PMC_IMR;            /**< Offset: 0x6C (R/   32) Interrupt Mask Register */
  __IO  uint32_t                       PMC_FSMR;           /**< Offset: 0x70 (R/W  32) Fast Startup Mode Register */
  __IO  uint32_t                       PMC_WCR;            /**< Offset: 0x74 (R/W  32) Wakeup Control Register */
  __O   uint32_t                       PMC_FOCR;           /**< Offset: 0x78 ( /W  32) Fault Output Clear Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       PMC_WPMR;           /**< Offset: 0x80 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PMC_WPSR;           /**< Offset: 0x84 (R/   32) Write Protection Status Register */
  __IO  uint32_t                       PMC_PCR;            /**< Offset: 0x88 (R/W  32) Peripheral Control Register */
  __I   uint8_t                        Reserved3[0x04];
  __I   uint32_t                       PMC_SLPWK_AIPR;     /**< Offset: 0x90 (R/   32) SleepWalking Activity In Progress Register */
  __IO  uint32_t                       PMC_SLPWKCR;        /**< Offset: 0x94 (R/W  32) SleepWalking Control Register */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       PMC_MCKLIM;         /**< Offset: 0x9C (R/W  32) MCK0 Monitor Limits Register */
  __I   uint32_t                       PMC_CSR0;           /**< Offset: 0xA0 (R/   32) Peripheral Clock Status Register 0 */
  __I   uint32_t                       PMC_CSR1;           /**< Offset: 0xA4 (R/   32) Peripheral Clock Status Register 1 */
  __I   uint32_t                       PMC_CSR2;           /**< Offset: 0xA8 (R/   32) Peripheral Clock Status Register 2 */
  __I   uint32_t                       PMC_CSR3;           /**< Offset: 0xAC (R/   32) Peripheral Clock Status Register 3 */
  __I   uint8_t                        Reserved5[0x10];
  __I   uint32_t                       PMC_GCSR0;          /**< Offset: 0xC0 (R/   32) Generic Clock Status Register 0 */
  __I   uint32_t                       PMC_GCSR1;          /**< Offset: 0xC4 (R/   32) Generic Clock Status Register 1 */
  __I   uint32_t                       PMC_GCSR2;          /**< Offset: 0xC8 (R/   32) Generic Clock Status Register 2 */
  __I   uint32_t                       PMC_GCSR3;          /**< Offset: 0xCC (R/   32) Generic Clock Status Register 3 */
  __I   uint8_t                        Reserved6[0x10];
  __O   uint32_t                       PMC_PLL_IER;        /**< Offset: 0xE0 ( /W  32) PLL Interrupt Enable Register */
  __O   uint32_t                       PMC_PLL_IDR;        /**< Offset: 0xE4 ( /W  32) PLL Interrupt Disable Register */
  __I   uint32_t                       PMC_PLL_IMR;        /**< Offset: 0xE8 (R/   32) PLL Interrupt Mask Register */
  __I   uint32_t                       PMC_PLL_ISR0;       /**< Offset: 0xEC (R/   32) PLL Interrupt Status Register 0 */
  __I   uint32_t                       PMC_PLL_ISR1;       /**< Offset: 0xF0 (R/   32) PLL Interrupt Status Register 1 */
} pmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_PMC_COMPONENT_H_ */
