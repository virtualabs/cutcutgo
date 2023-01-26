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

/* file generated from device description version 2021-06-28T09:00:02Z */
#ifndef _SAMA5D2_PMC_COMPONENT_H_
#define _SAMA5D2_PMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PMC                                          */
/* ************************************************************************** */

/* -------- PMC_SCER : (PMC Offset: 0x00) ( /W 32) System Clock Enable Register -------- */
#define PMC_SCER_DDRCK_Pos                    _U_(2)                                               /**< (PMC_SCER) DDR Clock Enable Position */
#define PMC_SCER_DDRCK_Msk                    (_U_(0x1) << PMC_SCER_DDRCK_Pos)                     /**< (PMC_SCER) DDR Clock Enable Mask */
#define PMC_SCER_DDRCK(value)                 (PMC_SCER_DDRCK_Msk & ((value) << PMC_SCER_DDRCK_Pos))
#define PMC_SCER_LCDCK_Pos                    _U_(3)                                               /**< (PMC_SCER) MCK2x Clock Enable Position */
#define PMC_SCER_LCDCK_Msk                    (_U_(0x1) << PMC_SCER_LCDCK_Pos)                     /**< (PMC_SCER) MCK2x Clock Enable Mask */
#define PMC_SCER_LCDCK(value)                 (PMC_SCER_LCDCK_Msk & ((value) << PMC_SCER_LCDCK_Pos))
#define PMC_SCER_UHP_Pos                      _U_(6)                                               /**< (PMC_SCER) USB Host OHCI Clocks Enable Position */
#define PMC_SCER_UHP_Msk                      (_U_(0x1) << PMC_SCER_UHP_Pos)                       /**< (PMC_SCER) USB Host OHCI Clocks Enable Mask */
#define PMC_SCER_UHP(value)                   (PMC_SCER_UHP_Msk & ((value) << PMC_SCER_UHP_Pos))  
#define PMC_SCER_UDP_Pos                      _U_(7)                                               /**< (PMC_SCER) USB Device Clock Enable Position */
#define PMC_SCER_UDP_Msk                      (_U_(0x1) << PMC_SCER_UDP_Pos)                       /**< (PMC_SCER) USB Device Clock Enable Mask */
#define PMC_SCER_UDP(value)                   (PMC_SCER_UDP_Msk & ((value) << PMC_SCER_UDP_Pos))  
#define PMC_SCER_PCK0_Pos                     _U_(8)                                               /**< (PMC_SCER) Programmable Clock 0 Output Enable Position */
#define PMC_SCER_PCK0_Msk                     (_U_(0x1) << PMC_SCER_PCK0_Pos)                      /**< (PMC_SCER) Programmable Clock 0 Output Enable Mask */
#define PMC_SCER_PCK0(value)                  (PMC_SCER_PCK0_Msk & ((value) << PMC_SCER_PCK0_Pos))
#define PMC_SCER_PCK1_Pos                     _U_(9)                                               /**< (PMC_SCER) Programmable Clock 1 Output Enable Position */
#define PMC_SCER_PCK1_Msk                     (_U_(0x1) << PMC_SCER_PCK1_Pos)                      /**< (PMC_SCER) Programmable Clock 1 Output Enable Mask */
#define PMC_SCER_PCK1(value)                  (PMC_SCER_PCK1_Msk & ((value) << PMC_SCER_PCK1_Pos))
#define PMC_SCER_PCK2_Pos                     _U_(10)                                              /**< (PMC_SCER) Programmable Clock 2 Output Enable Position */
#define PMC_SCER_PCK2_Msk                     (_U_(0x1) << PMC_SCER_PCK2_Pos)                      /**< (PMC_SCER) Programmable Clock 2 Output Enable Mask */
#define PMC_SCER_PCK2(value)                  (PMC_SCER_PCK2_Msk & ((value) << PMC_SCER_PCK2_Pos))
#define PMC_SCER_ISCCK_Pos                    _U_(18)                                              /**< (PMC_SCER) ISC Clock Enable Position */
#define PMC_SCER_ISCCK_Msk                    (_U_(0x1) << PMC_SCER_ISCCK_Pos)                     /**< (PMC_SCER) ISC Clock Enable Mask */
#define PMC_SCER_ISCCK(value)                 (PMC_SCER_ISCCK_Msk & ((value) << PMC_SCER_ISCCK_Pos))
#define PMC_SCER_Msk                          _U_(0x000407CC)                                      /**< (PMC_SCER) Register Mask  */

#define PMC_SCER_PCK_Pos                      _U_(8)                                               /**< (PMC_SCER Position) Programmable Clock x Output Enable */
#define PMC_SCER_PCK_Msk                      (_U_(0x7) << PMC_SCER_PCK_Pos)                       /**< (PMC_SCER Mask) PCK */
#define PMC_SCER_PCK(value)                   (PMC_SCER_PCK_Msk & ((value) << PMC_SCER_PCK_Pos))   

/* -------- PMC_SCDR : (PMC Offset: 0x04) ( /W 32) System Clock Disable Register -------- */
#define PMC_SCDR_PCK_Pos                      _U_(0)                                               /**< (PMC_SCDR) Processor Clock Disable Position */
#define PMC_SCDR_PCK_Msk                      (_U_(0x1) << PMC_SCDR_PCK_Pos)                       /**< (PMC_SCDR) Processor Clock Disable Mask */
#define PMC_SCDR_PCK(value)                   (PMC_SCDR_PCK_Msk & ((value) << PMC_SCDR_PCK_Pos))  
#define PMC_SCDR_DDRCK_Pos                    _U_(2)                                               /**< (PMC_SCDR) DDR Clock Disable Position */
#define PMC_SCDR_DDRCK_Msk                    (_U_(0x1) << PMC_SCDR_DDRCK_Pos)                     /**< (PMC_SCDR) DDR Clock Disable Mask */
#define PMC_SCDR_DDRCK(value)                 (PMC_SCDR_DDRCK_Msk & ((value) << PMC_SCDR_DDRCK_Pos))
#define PMC_SCDR_LCDCK_Pos                    _U_(3)                                               /**< (PMC_SCDR) MCK2x Clock Disable Position */
#define PMC_SCDR_LCDCK_Msk                    (_U_(0x1) << PMC_SCDR_LCDCK_Pos)                     /**< (PMC_SCDR) MCK2x Clock Disable Mask */
#define PMC_SCDR_LCDCK(value)                 (PMC_SCDR_LCDCK_Msk & ((value) << PMC_SCDR_LCDCK_Pos))
#define PMC_SCDR_UHP_Pos                      _U_(6)                                               /**< (PMC_SCDR) USB Host OHCI Clock Disable Position */
#define PMC_SCDR_UHP_Msk                      (_U_(0x1) << PMC_SCDR_UHP_Pos)                       /**< (PMC_SCDR) USB Host OHCI Clock Disable Mask */
#define PMC_SCDR_UHP(value)                   (PMC_SCDR_UHP_Msk & ((value) << PMC_SCDR_UHP_Pos))  
#define PMC_SCDR_UDP_Pos                      _U_(7)                                               /**< (PMC_SCDR) USB Device Clock Enable Position */
#define PMC_SCDR_UDP_Msk                      (_U_(0x1) << PMC_SCDR_UDP_Pos)                       /**< (PMC_SCDR) USB Device Clock Enable Mask */
#define PMC_SCDR_UDP(value)                   (PMC_SCDR_UDP_Msk & ((value) << PMC_SCDR_UDP_Pos))  
#define PMC_SCDR_PCK0_Pos                     _U_(8)                                               /**< (PMC_SCDR) Programmable Clock 0 Output Disable Position */
#define PMC_SCDR_PCK0_Msk                     (_U_(0x1) << PMC_SCDR_PCK0_Pos)                      /**< (PMC_SCDR) Programmable Clock 0 Output Disable Mask */
#define PMC_SCDR_PCK0(value)                  (PMC_SCDR_PCK0_Msk & ((value) << PMC_SCDR_PCK0_Pos))
#define PMC_SCDR_PCK1_Pos                     _U_(9)                                               /**< (PMC_SCDR) Programmable Clock 1 Output Disable Position */
#define PMC_SCDR_PCK1_Msk                     (_U_(0x1) << PMC_SCDR_PCK1_Pos)                      /**< (PMC_SCDR) Programmable Clock 1 Output Disable Mask */
#define PMC_SCDR_PCK1(value)                  (PMC_SCDR_PCK1_Msk & ((value) << PMC_SCDR_PCK1_Pos))
#define PMC_SCDR_PCK2_Pos                     _U_(10)                                              /**< (PMC_SCDR) Programmable Clock 2 Output Disable Position */
#define PMC_SCDR_PCK2_Msk                     (_U_(0x1) << PMC_SCDR_PCK2_Pos)                      /**< (PMC_SCDR) Programmable Clock 2 Output Disable Mask */
#define PMC_SCDR_PCK2(value)                  (PMC_SCDR_PCK2_Msk & ((value) << PMC_SCDR_PCK2_Pos))
#define PMC_SCDR_ISCCK_Pos                    _U_(18)                                              /**< (PMC_SCDR) ISC Clock Disable Position */
#define PMC_SCDR_ISCCK_Msk                    (_U_(0x1) << PMC_SCDR_ISCCK_Pos)                     /**< (PMC_SCDR) ISC Clock Disable Mask */
#define PMC_SCDR_ISCCK(value)                 (PMC_SCDR_ISCCK_Msk & ((value) << PMC_SCDR_ISCCK_Pos))
#define PMC_SCDR_Msk                          _U_(0x000407CD)                                      /**< (PMC_SCDR) Register Mask  */


/* -------- PMC_SCSR : (PMC Offset: 0x08) ( R/ 32) System Clock Status Register -------- */
#define PMC_SCSR_PCK_Pos                      _U_(0)                                               /**< (PMC_SCSR) Processor Clock Status Position */
#define PMC_SCSR_PCK_Msk                      (_U_(0x1) << PMC_SCSR_PCK_Pos)                       /**< (PMC_SCSR) Processor Clock Status Mask */
#define PMC_SCSR_PCK(value)                   (PMC_SCSR_PCK_Msk & ((value) << PMC_SCSR_PCK_Pos))  
#define PMC_SCSR_DDRCK_Pos                    _U_(2)                                               /**< (PMC_SCSR) DDR Clock Status Position */
#define PMC_SCSR_DDRCK_Msk                    (_U_(0x1) << PMC_SCSR_DDRCK_Pos)                     /**< (PMC_SCSR) DDR Clock Status Mask */
#define PMC_SCSR_DDRCK(value)                 (PMC_SCSR_DDRCK_Msk & ((value) << PMC_SCSR_DDRCK_Pos))
#define PMC_SCSR_LCDCK_Pos                    _U_(3)                                               /**< (PMC_SCSR) MCK2x Clock Status Position */
#define PMC_SCSR_LCDCK_Msk                    (_U_(0x1) << PMC_SCSR_LCDCK_Pos)                     /**< (PMC_SCSR) MCK2x Clock Status Mask */
#define PMC_SCSR_LCDCK(value)                 (PMC_SCSR_LCDCK_Msk & ((value) << PMC_SCSR_LCDCK_Pos))
#define PMC_SCSR_UHP_Pos                      _U_(6)                                               /**< (PMC_SCSR) USB Host Port Clock Status Position */
#define PMC_SCSR_UHP_Msk                      (_U_(0x1) << PMC_SCSR_UHP_Pos)                       /**< (PMC_SCSR) USB Host Port Clock Status Mask */
#define PMC_SCSR_UHP(value)                   (PMC_SCSR_UHP_Msk & ((value) << PMC_SCSR_UHP_Pos))  
#define PMC_SCSR_UDP_Pos                      _U_(7)                                               /**< (PMC_SCSR) USB Device Port Clock Status Position */
#define PMC_SCSR_UDP_Msk                      (_U_(0x1) << PMC_SCSR_UDP_Pos)                       /**< (PMC_SCSR) USB Device Port Clock Status Mask */
#define PMC_SCSR_UDP(value)                   (PMC_SCSR_UDP_Msk & ((value) << PMC_SCSR_UDP_Pos))  
#define PMC_SCSR_PCK0_Pos                     _U_(8)                                               /**< (PMC_SCSR) Programmable Clock 0 Output Status Position */
#define PMC_SCSR_PCK0_Msk                     (_U_(0x1) << PMC_SCSR_PCK0_Pos)                      /**< (PMC_SCSR) Programmable Clock 0 Output Status Mask */
#define PMC_SCSR_PCK0(value)                  (PMC_SCSR_PCK0_Msk & ((value) << PMC_SCSR_PCK0_Pos))
#define PMC_SCSR_PCK1_Pos                     _U_(9)                                               /**< (PMC_SCSR) Programmable Clock 1 Output Status Position */
#define PMC_SCSR_PCK1_Msk                     (_U_(0x1) << PMC_SCSR_PCK1_Pos)                      /**< (PMC_SCSR) Programmable Clock 1 Output Status Mask */
#define PMC_SCSR_PCK1(value)                  (PMC_SCSR_PCK1_Msk & ((value) << PMC_SCSR_PCK1_Pos))
#define PMC_SCSR_PCK2_Pos                     _U_(10)                                              /**< (PMC_SCSR) Programmable Clock 2 Output Status Position */
#define PMC_SCSR_PCK2_Msk                     (_U_(0x1) << PMC_SCSR_PCK2_Pos)                      /**< (PMC_SCSR) Programmable Clock 2 Output Status Mask */
#define PMC_SCSR_PCK2(value)                  (PMC_SCSR_PCK2_Msk & ((value) << PMC_SCSR_PCK2_Pos))
#define PMC_SCSR_ISCCK_Pos                    _U_(18)                                              /**< (PMC_SCSR) ISC Clock Status Position */
#define PMC_SCSR_ISCCK_Msk                    (_U_(0x1) << PMC_SCSR_ISCCK_Pos)                     /**< (PMC_SCSR) ISC Clock Status Mask */
#define PMC_SCSR_ISCCK(value)                 (PMC_SCSR_ISCCK_Msk & ((value) << PMC_SCSR_ISCCK_Pos))
#define PMC_SCSR_Msk                          _U_(0x000407CD)                                      /**< (PMC_SCSR) Register Mask  */


/* -------- PMC_PCER0 : (PMC Offset: 0x10) ( /W 32) Peripheral Clock Enable Register 0 -------- */
#define PMC_PCER0_PID2_Pos                    _U_(2)                                               /**< (PMC_PCER0) Peripheral Clock 2 Enable Position */
#define PMC_PCER0_PID2_Msk                    (_U_(0x1) << PMC_PCER0_PID2_Pos)                     /**< (PMC_PCER0) Peripheral Clock 2 Enable Mask */
#define PMC_PCER0_PID2(value)                 (PMC_PCER0_PID2_Msk & ((value) << PMC_PCER0_PID2_Pos))
#define PMC_PCER0_PID3_Pos                    _U_(3)                                               /**< (PMC_PCER0) Peripheral Clock 3 Enable Position */
#define PMC_PCER0_PID3_Msk                    (_U_(0x1) << PMC_PCER0_PID3_Pos)                     /**< (PMC_PCER0) Peripheral Clock 3 Enable Mask */
#define PMC_PCER0_PID3(value)                 (PMC_PCER0_PID3_Msk & ((value) << PMC_PCER0_PID3_Pos))
#define PMC_PCER0_PID4_Pos                    _U_(4)                                               /**< (PMC_PCER0) Peripheral Clock 4 Enable Position */
#define PMC_PCER0_PID4_Msk                    (_U_(0x1) << PMC_PCER0_PID4_Pos)                     /**< (PMC_PCER0) Peripheral Clock 4 Enable Mask */
#define PMC_PCER0_PID4(value)                 (PMC_PCER0_PID4_Msk & ((value) << PMC_PCER0_PID4_Pos))
#define PMC_PCER0_PID5_Pos                    _U_(5)                                               /**< (PMC_PCER0) Peripheral Clock 5 Enable Position */
#define PMC_PCER0_PID5_Msk                    (_U_(0x1) << PMC_PCER0_PID5_Pos)                     /**< (PMC_PCER0) Peripheral Clock 5 Enable Mask */
#define PMC_PCER0_PID5(value)                 (PMC_PCER0_PID5_Msk & ((value) << PMC_PCER0_PID5_Pos))
#define PMC_PCER0_PID6_Pos                    _U_(6)                                               /**< (PMC_PCER0) Peripheral Clock 6 Enable Position */
#define PMC_PCER0_PID6_Msk                    (_U_(0x1) << PMC_PCER0_PID6_Pos)                     /**< (PMC_PCER0) Peripheral Clock 6 Enable Mask */
#define PMC_PCER0_PID6(value)                 (PMC_PCER0_PID6_Msk & ((value) << PMC_PCER0_PID6_Pos))
#define PMC_PCER0_PID7_Pos                    _U_(7)                                               /**< (PMC_PCER0) Peripheral Clock 7 Enable Position */
#define PMC_PCER0_PID7_Msk                    (_U_(0x1) << PMC_PCER0_PID7_Pos)                     /**< (PMC_PCER0) Peripheral Clock 7 Enable Mask */
#define PMC_PCER0_PID7(value)                 (PMC_PCER0_PID7_Msk & ((value) << PMC_PCER0_PID7_Pos))
#define PMC_PCER0_PID8_Pos                    _U_(8)                                               /**< (PMC_PCER0) Peripheral Clock 8 Enable Position */
#define PMC_PCER0_PID8_Msk                    (_U_(0x1) << PMC_PCER0_PID8_Pos)                     /**< (PMC_PCER0) Peripheral Clock 8 Enable Mask */
#define PMC_PCER0_PID8(value)                 (PMC_PCER0_PID8_Msk & ((value) << PMC_PCER0_PID8_Pos))
#define PMC_PCER0_PID9_Pos                    _U_(9)                                               /**< (PMC_PCER0) Peripheral Clock 9 Enable Position */
#define PMC_PCER0_PID9_Msk                    (_U_(0x1) << PMC_PCER0_PID9_Pos)                     /**< (PMC_PCER0) Peripheral Clock 9 Enable Mask */
#define PMC_PCER0_PID9(value)                 (PMC_PCER0_PID9_Msk & ((value) << PMC_PCER0_PID9_Pos))
#define PMC_PCER0_PID10_Pos                   _U_(10)                                              /**< (PMC_PCER0) Peripheral Clock 10 Enable Position */
#define PMC_PCER0_PID10_Msk                   (_U_(0x1) << PMC_PCER0_PID10_Pos)                    /**< (PMC_PCER0) Peripheral Clock 10 Enable Mask */
#define PMC_PCER0_PID10(value)                (PMC_PCER0_PID10_Msk & ((value) << PMC_PCER0_PID10_Pos))
#define PMC_PCER0_PID11_Pos                   _U_(11)                                              /**< (PMC_PCER0) Peripheral Clock 11 Enable Position */
#define PMC_PCER0_PID11_Msk                   (_U_(0x1) << PMC_PCER0_PID11_Pos)                    /**< (PMC_PCER0) Peripheral Clock 11 Enable Mask */
#define PMC_PCER0_PID11(value)                (PMC_PCER0_PID11_Msk & ((value) << PMC_PCER0_PID11_Pos))
#define PMC_PCER0_PID12_Pos                   _U_(12)                                              /**< (PMC_PCER0) Peripheral Clock 12 Enable Position */
#define PMC_PCER0_PID12_Msk                   (_U_(0x1) << PMC_PCER0_PID12_Pos)                    /**< (PMC_PCER0) Peripheral Clock 12 Enable Mask */
#define PMC_PCER0_PID12(value)                (PMC_PCER0_PID12_Msk & ((value) << PMC_PCER0_PID12_Pos))
#define PMC_PCER0_PID13_Pos                   _U_(13)                                              /**< (PMC_PCER0) Peripheral Clock 13 Enable Position */
#define PMC_PCER0_PID13_Msk                   (_U_(0x1) << PMC_PCER0_PID13_Pos)                    /**< (PMC_PCER0) Peripheral Clock 13 Enable Mask */
#define PMC_PCER0_PID13(value)                (PMC_PCER0_PID13_Msk & ((value) << PMC_PCER0_PID13_Pos))
#define PMC_PCER0_PID14_Pos                   _U_(14)                                              /**< (PMC_PCER0) Peripheral Clock 14 Enable Position */
#define PMC_PCER0_PID14_Msk                   (_U_(0x1) << PMC_PCER0_PID14_Pos)                    /**< (PMC_PCER0) Peripheral Clock 14 Enable Mask */
#define PMC_PCER0_PID14(value)                (PMC_PCER0_PID14_Msk & ((value) << PMC_PCER0_PID14_Pos))
#define PMC_PCER0_PID15_Pos                   _U_(15)                                              /**< (PMC_PCER0) Peripheral Clock 15 Enable Position */
#define PMC_PCER0_PID15_Msk                   (_U_(0x1) << PMC_PCER0_PID15_Pos)                    /**< (PMC_PCER0) Peripheral Clock 15 Enable Mask */
#define PMC_PCER0_PID15(value)                (PMC_PCER0_PID15_Msk & ((value) << PMC_PCER0_PID15_Pos))
#define PMC_PCER0_PID16_Pos                   _U_(16)                                              /**< (PMC_PCER0) Peripheral Clock 16 Enable Position */
#define PMC_PCER0_PID16_Msk                   (_U_(0x1) << PMC_PCER0_PID16_Pos)                    /**< (PMC_PCER0) Peripheral Clock 16 Enable Mask */
#define PMC_PCER0_PID16(value)                (PMC_PCER0_PID16_Msk & ((value) << PMC_PCER0_PID16_Pos))
#define PMC_PCER0_PID17_Pos                   _U_(17)                                              /**< (PMC_PCER0) Peripheral Clock 17 Enable Position */
#define PMC_PCER0_PID17_Msk                   (_U_(0x1) << PMC_PCER0_PID17_Pos)                    /**< (PMC_PCER0) Peripheral Clock 17 Enable Mask */
#define PMC_PCER0_PID17(value)                (PMC_PCER0_PID17_Msk & ((value) << PMC_PCER0_PID17_Pos))
#define PMC_PCER0_PID18_Pos                   _U_(18)                                              /**< (PMC_PCER0) Peripheral Clock 18 Enable Position */
#define PMC_PCER0_PID18_Msk                   (_U_(0x1) << PMC_PCER0_PID18_Pos)                    /**< (PMC_PCER0) Peripheral Clock 18 Enable Mask */
#define PMC_PCER0_PID18(value)                (PMC_PCER0_PID18_Msk & ((value) << PMC_PCER0_PID18_Pos))
#define PMC_PCER0_PID19_Pos                   _U_(19)                                              /**< (PMC_PCER0) Peripheral Clock 19 Enable Position */
#define PMC_PCER0_PID19_Msk                   (_U_(0x1) << PMC_PCER0_PID19_Pos)                    /**< (PMC_PCER0) Peripheral Clock 19 Enable Mask */
#define PMC_PCER0_PID19(value)                (PMC_PCER0_PID19_Msk & ((value) << PMC_PCER0_PID19_Pos))
#define PMC_PCER0_PID20_Pos                   _U_(20)                                              /**< (PMC_PCER0) Peripheral Clock 20 Enable Position */
#define PMC_PCER0_PID20_Msk                   (_U_(0x1) << PMC_PCER0_PID20_Pos)                    /**< (PMC_PCER0) Peripheral Clock 20 Enable Mask */
#define PMC_PCER0_PID20(value)                (PMC_PCER0_PID20_Msk & ((value) << PMC_PCER0_PID20_Pos))
#define PMC_PCER0_PID21_Pos                   _U_(21)                                              /**< (PMC_PCER0) Peripheral Clock 21 Enable Position */
#define PMC_PCER0_PID21_Msk                   (_U_(0x1) << PMC_PCER0_PID21_Pos)                    /**< (PMC_PCER0) Peripheral Clock 21 Enable Mask */
#define PMC_PCER0_PID21(value)                (PMC_PCER0_PID21_Msk & ((value) << PMC_PCER0_PID21_Pos))
#define PMC_PCER0_PID22_Pos                   _U_(22)                                              /**< (PMC_PCER0) Peripheral Clock 22 Enable Position */
#define PMC_PCER0_PID22_Msk                   (_U_(0x1) << PMC_PCER0_PID22_Pos)                    /**< (PMC_PCER0) Peripheral Clock 22 Enable Mask */
#define PMC_PCER0_PID22(value)                (PMC_PCER0_PID22_Msk & ((value) << PMC_PCER0_PID22_Pos))
#define PMC_PCER0_PID23_Pos                   _U_(23)                                              /**< (PMC_PCER0) Peripheral Clock 23 Enable Position */
#define PMC_PCER0_PID23_Msk                   (_U_(0x1) << PMC_PCER0_PID23_Pos)                    /**< (PMC_PCER0) Peripheral Clock 23 Enable Mask */
#define PMC_PCER0_PID23(value)                (PMC_PCER0_PID23_Msk & ((value) << PMC_PCER0_PID23_Pos))
#define PMC_PCER0_PID24_Pos                   _U_(24)                                              /**< (PMC_PCER0) Peripheral Clock 24 Enable Position */
#define PMC_PCER0_PID24_Msk                   (_U_(0x1) << PMC_PCER0_PID24_Pos)                    /**< (PMC_PCER0) Peripheral Clock 24 Enable Mask */
#define PMC_PCER0_PID24(value)                (PMC_PCER0_PID24_Msk & ((value) << PMC_PCER0_PID24_Pos))
#define PMC_PCER0_PID25_Pos                   _U_(25)                                              /**< (PMC_PCER0) Peripheral Clock 25 Enable Position */
#define PMC_PCER0_PID25_Msk                   (_U_(0x1) << PMC_PCER0_PID25_Pos)                    /**< (PMC_PCER0) Peripheral Clock 25 Enable Mask */
#define PMC_PCER0_PID25(value)                (PMC_PCER0_PID25_Msk & ((value) << PMC_PCER0_PID25_Pos))
#define PMC_PCER0_PID26_Pos                   _U_(26)                                              /**< (PMC_PCER0) Peripheral Clock 26 Enable Position */
#define PMC_PCER0_PID26_Msk                   (_U_(0x1) << PMC_PCER0_PID26_Pos)                    /**< (PMC_PCER0) Peripheral Clock 26 Enable Mask */
#define PMC_PCER0_PID26(value)                (PMC_PCER0_PID26_Msk & ((value) << PMC_PCER0_PID26_Pos))
#define PMC_PCER0_PID27_Pos                   _U_(27)                                              /**< (PMC_PCER0) Peripheral Clock 27 Enable Position */
#define PMC_PCER0_PID27_Msk                   (_U_(0x1) << PMC_PCER0_PID27_Pos)                    /**< (PMC_PCER0) Peripheral Clock 27 Enable Mask */
#define PMC_PCER0_PID27(value)                (PMC_PCER0_PID27_Msk & ((value) << PMC_PCER0_PID27_Pos))
#define PMC_PCER0_PID28_Pos                   _U_(28)                                              /**< (PMC_PCER0) Peripheral Clock 28 Enable Position */
#define PMC_PCER0_PID28_Msk                   (_U_(0x1) << PMC_PCER0_PID28_Pos)                    /**< (PMC_PCER0) Peripheral Clock 28 Enable Mask */
#define PMC_PCER0_PID28(value)                (PMC_PCER0_PID28_Msk & ((value) << PMC_PCER0_PID28_Pos))
#define PMC_PCER0_PID29_Pos                   _U_(29)                                              /**< (PMC_PCER0) Peripheral Clock 29 Enable Position */
#define PMC_PCER0_PID29_Msk                   (_U_(0x1) << PMC_PCER0_PID29_Pos)                    /**< (PMC_PCER0) Peripheral Clock 29 Enable Mask */
#define PMC_PCER0_PID29(value)                (PMC_PCER0_PID29_Msk & ((value) << PMC_PCER0_PID29_Pos))
#define PMC_PCER0_PID30_Pos                   _U_(30)                                              /**< (PMC_PCER0) Peripheral Clock 30 Enable Position */
#define PMC_PCER0_PID30_Msk                   (_U_(0x1) << PMC_PCER0_PID30_Pos)                    /**< (PMC_PCER0) Peripheral Clock 30 Enable Mask */
#define PMC_PCER0_PID30(value)                (PMC_PCER0_PID30_Msk & ((value) << PMC_PCER0_PID30_Pos))
#define PMC_PCER0_PID31_Pos                   _U_(31)                                              /**< (PMC_PCER0) Peripheral Clock 31 Enable Position */
#define PMC_PCER0_PID31_Msk                   (_U_(0x1) << PMC_PCER0_PID31_Pos)                    /**< (PMC_PCER0) Peripheral Clock 31 Enable Mask */
#define PMC_PCER0_PID31(value)                (PMC_PCER0_PID31_Msk & ((value) << PMC_PCER0_PID31_Pos))
#define PMC_PCER0_Msk                         _U_(0xFFFFFFFC)                                      /**< (PMC_PCER0) Register Mask  */

#define PMC_PCER0_PID_Pos                     _U_(2)                                               /**< (PMC_PCER0 Position) Peripheral Clock 3x Enable */
#define PMC_PCER0_PID_Msk                     (_U_(0x3FFFFFFF) << PMC_PCER0_PID_Pos)               /**< (PMC_PCER0 Mask) PID */
#define PMC_PCER0_PID(value)                  (PMC_PCER0_PID_Msk & ((value) << PMC_PCER0_PID_Pos)) 

/* -------- PMC_PCDR0 : (PMC Offset: 0x14) ( /W 32) Peripheral Clock Disable Register 0 -------- */
#define PMC_PCDR0_PID2_Pos                    _U_(2)                                               /**< (PMC_PCDR0) Peripheral Clock 2 Disable Position */
#define PMC_PCDR0_PID2_Msk                    (_U_(0x1) << PMC_PCDR0_PID2_Pos)                     /**< (PMC_PCDR0) Peripheral Clock 2 Disable Mask */
#define PMC_PCDR0_PID2(value)                 (PMC_PCDR0_PID2_Msk & ((value) << PMC_PCDR0_PID2_Pos))
#define PMC_PCDR0_PID3_Pos                    _U_(3)                                               /**< (PMC_PCDR0) Peripheral Clock 3 Disable Position */
#define PMC_PCDR0_PID3_Msk                    (_U_(0x1) << PMC_PCDR0_PID3_Pos)                     /**< (PMC_PCDR0) Peripheral Clock 3 Disable Mask */
#define PMC_PCDR0_PID3(value)                 (PMC_PCDR0_PID3_Msk & ((value) << PMC_PCDR0_PID3_Pos))
#define PMC_PCDR0_PID4_Pos                    _U_(4)                                               /**< (PMC_PCDR0) Peripheral Clock 4 Disable Position */
#define PMC_PCDR0_PID4_Msk                    (_U_(0x1) << PMC_PCDR0_PID4_Pos)                     /**< (PMC_PCDR0) Peripheral Clock 4 Disable Mask */
#define PMC_PCDR0_PID4(value)                 (PMC_PCDR0_PID4_Msk & ((value) << PMC_PCDR0_PID4_Pos))
#define PMC_PCDR0_PID5_Pos                    _U_(5)                                               /**< (PMC_PCDR0) Peripheral Clock 5 Disable Position */
#define PMC_PCDR0_PID5_Msk                    (_U_(0x1) << PMC_PCDR0_PID5_Pos)                     /**< (PMC_PCDR0) Peripheral Clock 5 Disable Mask */
#define PMC_PCDR0_PID5(value)                 (PMC_PCDR0_PID5_Msk & ((value) << PMC_PCDR0_PID5_Pos))
#define PMC_PCDR0_PID6_Pos                    _U_(6)                                               /**< (PMC_PCDR0) Peripheral Clock 6 Disable Position */
#define PMC_PCDR0_PID6_Msk                    (_U_(0x1) << PMC_PCDR0_PID6_Pos)                     /**< (PMC_PCDR0) Peripheral Clock 6 Disable Mask */
#define PMC_PCDR0_PID6(value)                 (PMC_PCDR0_PID6_Msk & ((value) << PMC_PCDR0_PID6_Pos))
#define PMC_PCDR0_PID7_Pos                    _U_(7)                                               /**< (PMC_PCDR0) Peripheral Clock 7 Disable Position */
#define PMC_PCDR0_PID7_Msk                    (_U_(0x1) << PMC_PCDR0_PID7_Pos)                     /**< (PMC_PCDR0) Peripheral Clock 7 Disable Mask */
#define PMC_PCDR0_PID7(value)                 (PMC_PCDR0_PID7_Msk & ((value) << PMC_PCDR0_PID7_Pos))
#define PMC_PCDR0_PID8_Pos                    _U_(8)                                               /**< (PMC_PCDR0) Peripheral Clock 8 Disable Position */
#define PMC_PCDR0_PID8_Msk                    (_U_(0x1) << PMC_PCDR0_PID8_Pos)                     /**< (PMC_PCDR0) Peripheral Clock 8 Disable Mask */
#define PMC_PCDR0_PID8(value)                 (PMC_PCDR0_PID8_Msk & ((value) << PMC_PCDR0_PID8_Pos))
#define PMC_PCDR0_PID9_Pos                    _U_(9)                                               /**< (PMC_PCDR0) Peripheral Clock 9 Disable Position */
#define PMC_PCDR0_PID9_Msk                    (_U_(0x1) << PMC_PCDR0_PID9_Pos)                     /**< (PMC_PCDR0) Peripheral Clock 9 Disable Mask */
#define PMC_PCDR0_PID9(value)                 (PMC_PCDR0_PID9_Msk & ((value) << PMC_PCDR0_PID9_Pos))
#define PMC_PCDR0_PID10_Pos                   _U_(10)                                              /**< (PMC_PCDR0) Peripheral Clock 10 Disable Position */
#define PMC_PCDR0_PID10_Msk                   (_U_(0x1) << PMC_PCDR0_PID10_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 10 Disable Mask */
#define PMC_PCDR0_PID10(value)                (PMC_PCDR0_PID10_Msk & ((value) << PMC_PCDR0_PID10_Pos))
#define PMC_PCDR0_PID11_Pos                   _U_(11)                                              /**< (PMC_PCDR0) Peripheral Clock 11 Disable Position */
#define PMC_PCDR0_PID11_Msk                   (_U_(0x1) << PMC_PCDR0_PID11_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 11 Disable Mask */
#define PMC_PCDR0_PID11(value)                (PMC_PCDR0_PID11_Msk & ((value) << PMC_PCDR0_PID11_Pos))
#define PMC_PCDR0_PID12_Pos                   _U_(12)                                              /**< (PMC_PCDR0) Peripheral Clock 12 Disable Position */
#define PMC_PCDR0_PID12_Msk                   (_U_(0x1) << PMC_PCDR0_PID12_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 12 Disable Mask */
#define PMC_PCDR0_PID12(value)                (PMC_PCDR0_PID12_Msk & ((value) << PMC_PCDR0_PID12_Pos))
#define PMC_PCDR0_PID13_Pos                   _U_(13)                                              /**< (PMC_PCDR0) Peripheral Clock 13 Disable Position */
#define PMC_PCDR0_PID13_Msk                   (_U_(0x1) << PMC_PCDR0_PID13_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 13 Disable Mask */
#define PMC_PCDR0_PID13(value)                (PMC_PCDR0_PID13_Msk & ((value) << PMC_PCDR0_PID13_Pos))
#define PMC_PCDR0_PID14_Pos                   _U_(14)                                              /**< (PMC_PCDR0) Peripheral Clock 14 Disable Position */
#define PMC_PCDR0_PID14_Msk                   (_U_(0x1) << PMC_PCDR0_PID14_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 14 Disable Mask */
#define PMC_PCDR0_PID14(value)                (PMC_PCDR0_PID14_Msk & ((value) << PMC_PCDR0_PID14_Pos))
#define PMC_PCDR0_PID15_Pos                   _U_(15)                                              /**< (PMC_PCDR0) Peripheral Clock 15 Disable Position */
#define PMC_PCDR0_PID15_Msk                   (_U_(0x1) << PMC_PCDR0_PID15_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 15 Disable Mask */
#define PMC_PCDR0_PID15(value)                (PMC_PCDR0_PID15_Msk & ((value) << PMC_PCDR0_PID15_Pos))
#define PMC_PCDR0_PID16_Pos                   _U_(16)                                              /**< (PMC_PCDR0) Peripheral Clock 16 Disable Position */
#define PMC_PCDR0_PID16_Msk                   (_U_(0x1) << PMC_PCDR0_PID16_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 16 Disable Mask */
#define PMC_PCDR0_PID16(value)                (PMC_PCDR0_PID16_Msk & ((value) << PMC_PCDR0_PID16_Pos))
#define PMC_PCDR0_PID17_Pos                   _U_(17)                                              /**< (PMC_PCDR0) Peripheral Clock 17 Disable Position */
#define PMC_PCDR0_PID17_Msk                   (_U_(0x1) << PMC_PCDR0_PID17_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 17 Disable Mask */
#define PMC_PCDR0_PID17(value)                (PMC_PCDR0_PID17_Msk & ((value) << PMC_PCDR0_PID17_Pos))
#define PMC_PCDR0_PID18_Pos                   _U_(18)                                              /**< (PMC_PCDR0) Peripheral Clock 18 Disable Position */
#define PMC_PCDR0_PID18_Msk                   (_U_(0x1) << PMC_PCDR0_PID18_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 18 Disable Mask */
#define PMC_PCDR0_PID18(value)                (PMC_PCDR0_PID18_Msk & ((value) << PMC_PCDR0_PID18_Pos))
#define PMC_PCDR0_PID19_Pos                   _U_(19)                                              /**< (PMC_PCDR0) Peripheral Clock 19 Disable Position */
#define PMC_PCDR0_PID19_Msk                   (_U_(0x1) << PMC_PCDR0_PID19_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 19 Disable Mask */
#define PMC_PCDR0_PID19(value)                (PMC_PCDR0_PID19_Msk & ((value) << PMC_PCDR0_PID19_Pos))
#define PMC_PCDR0_PID20_Pos                   _U_(20)                                              /**< (PMC_PCDR0) Peripheral Clock 20 Disable Position */
#define PMC_PCDR0_PID20_Msk                   (_U_(0x1) << PMC_PCDR0_PID20_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 20 Disable Mask */
#define PMC_PCDR0_PID20(value)                (PMC_PCDR0_PID20_Msk & ((value) << PMC_PCDR0_PID20_Pos))
#define PMC_PCDR0_PID21_Pos                   _U_(21)                                              /**< (PMC_PCDR0) Peripheral Clock 21 Disable Position */
#define PMC_PCDR0_PID21_Msk                   (_U_(0x1) << PMC_PCDR0_PID21_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 21 Disable Mask */
#define PMC_PCDR0_PID21(value)                (PMC_PCDR0_PID21_Msk & ((value) << PMC_PCDR0_PID21_Pos))
#define PMC_PCDR0_PID22_Pos                   _U_(22)                                              /**< (PMC_PCDR0) Peripheral Clock 22 Disable Position */
#define PMC_PCDR0_PID22_Msk                   (_U_(0x1) << PMC_PCDR0_PID22_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 22 Disable Mask */
#define PMC_PCDR0_PID22(value)                (PMC_PCDR0_PID22_Msk & ((value) << PMC_PCDR0_PID22_Pos))
#define PMC_PCDR0_PID23_Pos                   _U_(23)                                              /**< (PMC_PCDR0) Peripheral Clock 23 Disable Position */
#define PMC_PCDR0_PID23_Msk                   (_U_(0x1) << PMC_PCDR0_PID23_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 23 Disable Mask */
#define PMC_PCDR0_PID23(value)                (PMC_PCDR0_PID23_Msk & ((value) << PMC_PCDR0_PID23_Pos))
#define PMC_PCDR0_PID24_Pos                   _U_(24)                                              /**< (PMC_PCDR0) Peripheral Clock 24 Disable Position */
#define PMC_PCDR0_PID24_Msk                   (_U_(0x1) << PMC_PCDR0_PID24_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 24 Disable Mask */
#define PMC_PCDR0_PID24(value)                (PMC_PCDR0_PID24_Msk & ((value) << PMC_PCDR0_PID24_Pos))
#define PMC_PCDR0_PID25_Pos                   _U_(25)                                              /**< (PMC_PCDR0) Peripheral Clock 25 Disable Position */
#define PMC_PCDR0_PID25_Msk                   (_U_(0x1) << PMC_PCDR0_PID25_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 25 Disable Mask */
#define PMC_PCDR0_PID25(value)                (PMC_PCDR0_PID25_Msk & ((value) << PMC_PCDR0_PID25_Pos))
#define PMC_PCDR0_PID26_Pos                   _U_(26)                                              /**< (PMC_PCDR0) Peripheral Clock 26 Disable Position */
#define PMC_PCDR0_PID26_Msk                   (_U_(0x1) << PMC_PCDR0_PID26_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 26 Disable Mask */
#define PMC_PCDR0_PID26(value)                (PMC_PCDR0_PID26_Msk & ((value) << PMC_PCDR0_PID26_Pos))
#define PMC_PCDR0_PID27_Pos                   _U_(27)                                              /**< (PMC_PCDR0) Peripheral Clock 27 Disable Position */
#define PMC_PCDR0_PID27_Msk                   (_U_(0x1) << PMC_PCDR0_PID27_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 27 Disable Mask */
#define PMC_PCDR0_PID27(value)                (PMC_PCDR0_PID27_Msk & ((value) << PMC_PCDR0_PID27_Pos))
#define PMC_PCDR0_PID28_Pos                   _U_(28)                                              /**< (PMC_PCDR0) Peripheral Clock 28 Disable Position */
#define PMC_PCDR0_PID28_Msk                   (_U_(0x1) << PMC_PCDR0_PID28_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 28 Disable Mask */
#define PMC_PCDR0_PID28(value)                (PMC_PCDR0_PID28_Msk & ((value) << PMC_PCDR0_PID28_Pos))
#define PMC_PCDR0_PID29_Pos                   _U_(29)                                              /**< (PMC_PCDR0) Peripheral Clock 29 Disable Position */
#define PMC_PCDR0_PID29_Msk                   (_U_(0x1) << PMC_PCDR0_PID29_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 29 Disable Mask */
#define PMC_PCDR0_PID29(value)                (PMC_PCDR0_PID29_Msk & ((value) << PMC_PCDR0_PID29_Pos))
#define PMC_PCDR0_PID30_Pos                   _U_(30)                                              /**< (PMC_PCDR0) Peripheral Clock 30 Disable Position */
#define PMC_PCDR0_PID30_Msk                   (_U_(0x1) << PMC_PCDR0_PID30_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 30 Disable Mask */
#define PMC_PCDR0_PID30(value)                (PMC_PCDR0_PID30_Msk & ((value) << PMC_PCDR0_PID30_Pos))
#define PMC_PCDR0_PID31_Pos                   _U_(31)                                              /**< (PMC_PCDR0) Peripheral Clock 31 Disable Position */
#define PMC_PCDR0_PID31_Msk                   (_U_(0x1) << PMC_PCDR0_PID31_Pos)                    /**< (PMC_PCDR0) Peripheral Clock 31 Disable Mask */
#define PMC_PCDR0_PID31(value)                (PMC_PCDR0_PID31_Msk & ((value) << PMC_PCDR0_PID31_Pos))
#define PMC_PCDR0_Msk                         _U_(0xFFFFFFFC)                                      /**< (PMC_PCDR0) Register Mask  */

#define PMC_PCDR0_PID_Pos                     _U_(2)                                               /**< (PMC_PCDR0 Position) Peripheral Clock 3x Disable */
#define PMC_PCDR0_PID_Msk                     (_U_(0x3FFFFFFF) << PMC_PCDR0_PID_Pos)               /**< (PMC_PCDR0 Mask) PID */
#define PMC_PCDR0_PID(value)                  (PMC_PCDR0_PID_Msk & ((value) << PMC_PCDR0_PID_Pos)) 

/* -------- PMC_PCSR0 : (PMC Offset: 0x18) ( R/ 32) Peripheral Clock Status Register 0 -------- */
#define PMC_PCSR0_PID2_Pos                    _U_(2)                                               /**< (PMC_PCSR0) Peripheral Clock 2 Status Position */
#define PMC_PCSR0_PID2_Msk                    (_U_(0x1) << PMC_PCSR0_PID2_Pos)                     /**< (PMC_PCSR0) Peripheral Clock 2 Status Mask */
#define PMC_PCSR0_PID2(value)                 (PMC_PCSR0_PID2_Msk & ((value) << PMC_PCSR0_PID2_Pos))
#define PMC_PCSR0_PID3_Pos                    _U_(3)                                               /**< (PMC_PCSR0) Peripheral Clock 3 Status Position */
#define PMC_PCSR0_PID3_Msk                    (_U_(0x1) << PMC_PCSR0_PID3_Pos)                     /**< (PMC_PCSR0) Peripheral Clock 3 Status Mask */
#define PMC_PCSR0_PID3(value)                 (PMC_PCSR0_PID3_Msk & ((value) << PMC_PCSR0_PID3_Pos))
#define PMC_PCSR0_PID4_Pos                    _U_(4)                                               /**< (PMC_PCSR0) Peripheral Clock 4 Status Position */
#define PMC_PCSR0_PID4_Msk                    (_U_(0x1) << PMC_PCSR0_PID4_Pos)                     /**< (PMC_PCSR0) Peripheral Clock 4 Status Mask */
#define PMC_PCSR0_PID4(value)                 (PMC_PCSR0_PID4_Msk & ((value) << PMC_PCSR0_PID4_Pos))
#define PMC_PCSR0_PID5_Pos                    _U_(5)                                               /**< (PMC_PCSR0) Peripheral Clock 5 Status Position */
#define PMC_PCSR0_PID5_Msk                    (_U_(0x1) << PMC_PCSR0_PID5_Pos)                     /**< (PMC_PCSR0) Peripheral Clock 5 Status Mask */
#define PMC_PCSR0_PID5(value)                 (PMC_PCSR0_PID5_Msk & ((value) << PMC_PCSR0_PID5_Pos))
#define PMC_PCSR0_PID6_Pos                    _U_(6)                                               /**< (PMC_PCSR0) Peripheral Clock 6 Status Position */
#define PMC_PCSR0_PID6_Msk                    (_U_(0x1) << PMC_PCSR0_PID6_Pos)                     /**< (PMC_PCSR0) Peripheral Clock 6 Status Mask */
#define PMC_PCSR0_PID6(value)                 (PMC_PCSR0_PID6_Msk & ((value) << PMC_PCSR0_PID6_Pos))
#define PMC_PCSR0_PID7_Pos                    _U_(7)                                               /**< (PMC_PCSR0) Peripheral Clock 7 Status Position */
#define PMC_PCSR0_PID7_Msk                    (_U_(0x1) << PMC_PCSR0_PID7_Pos)                     /**< (PMC_PCSR0) Peripheral Clock 7 Status Mask */
#define PMC_PCSR0_PID7(value)                 (PMC_PCSR0_PID7_Msk & ((value) << PMC_PCSR0_PID7_Pos))
#define PMC_PCSR0_PID8_Pos                    _U_(8)                                               /**< (PMC_PCSR0) Peripheral Clock 8 Status Position */
#define PMC_PCSR0_PID8_Msk                    (_U_(0x1) << PMC_PCSR0_PID8_Pos)                     /**< (PMC_PCSR0) Peripheral Clock 8 Status Mask */
#define PMC_PCSR0_PID8(value)                 (PMC_PCSR0_PID8_Msk & ((value) << PMC_PCSR0_PID8_Pos))
#define PMC_PCSR0_PID9_Pos                    _U_(9)                                               /**< (PMC_PCSR0) Peripheral Clock 9 Status Position */
#define PMC_PCSR0_PID9_Msk                    (_U_(0x1) << PMC_PCSR0_PID9_Pos)                     /**< (PMC_PCSR0) Peripheral Clock 9 Status Mask */
#define PMC_PCSR0_PID9(value)                 (PMC_PCSR0_PID9_Msk & ((value) << PMC_PCSR0_PID9_Pos))
#define PMC_PCSR0_PID10_Pos                   _U_(10)                                              /**< (PMC_PCSR0) Peripheral Clock 10 Status Position */
#define PMC_PCSR0_PID10_Msk                   (_U_(0x1) << PMC_PCSR0_PID10_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 10 Status Mask */
#define PMC_PCSR0_PID10(value)                (PMC_PCSR0_PID10_Msk & ((value) << PMC_PCSR0_PID10_Pos))
#define PMC_PCSR0_PID11_Pos                   _U_(11)                                              /**< (PMC_PCSR0) Peripheral Clock 11 Status Position */
#define PMC_PCSR0_PID11_Msk                   (_U_(0x1) << PMC_PCSR0_PID11_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 11 Status Mask */
#define PMC_PCSR0_PID11(value)                (PMC_PCSR0_PID11_Msk & ((value) << PMC_PCSR0_PID11_Pos))
#define PMC_PCSR0_PID12_Pos                   _U_(12)                                              /**< (PMC_PCSR0) Peripheral Clock 12 Status Position */
#define PMC_PCSR0_PID12_Msk                   (_U_(0x1) << PMC_PCSR0_PID12_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 12 Status Mask */
#define PMC_PCSR0_PID12(value)                (PMC_PCSR0_PID12_Msk & ((value) << PMC_PCSR0_PID12_Pos))
#define PMC_PCSR0_PID13_Pos                   _U_(13)                                              /**< (PMC_PCSR0) Peripheral Clock 13 Status Position */
#define PMC_PCSR0_PID13_Msk                   (_U_(0x1) << PMC_PCSR0_PID13_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 13 Status Mask */
#define PMC_PCSR0_PID13(value)                (PMC_PCSR0_PID13_Msk & ((value) << PMC_PCSR0_PID13_Pos))
#define PMC_PCSR0_PID14_Pos                   _U_(14)                                              /**< (PMC_PCSR0) Peripheral Clock 14 Status Position */
#define PMC_PCSR0_PID14_Msk                   (_U_(0x1) << PMC_PCSR0_PID14_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 14 Status Mask */
#define PMC_PCSR0_PID14(value)                (PMC_PCSR0_PID14_Msk & ((value) << PMC_PCSR0_PID14_Pos))
#define PMC_PCSR0_PID15_Pos                   _U_(15)                                              /**< (PMC_PCSR0) Peripheral Clock 15 Status Position */
#define PMC_PCSR0_PID15_Msk                   (_U_(0x1) << PMC_PCSR0_PID15_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 15 Status Mask */
#define PMC_PCSR0_PID15(value)                (PMC_PCSR0_PID15_Msk & ((value) << PMC_PCSR0_PID15_Pos))
#define PMC_PCSR0_PID16_Pos                   _U_(16)                                              /**< (PMC_PCSR0) Peripheral Clock 16 Status Position */
#define PMC_PCSR0_PID16_Msk                   (_U_(0x1) << PMC_PCSR0_PID16_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 16 Status Mask */
#define PMC_PCSR0_PID16(value)                (PMC_PCSR0_PID16_Msk & ((value) << PMC_PCSR0_PID16_Pos))
#define PMC_PCSR0_PID17_Pos                   _U_(17)                                              /**< (PMC_PCSR0) Peripheral Clock 17 Status Position */
#define PMC_PCSR0_PID17_Msk                   (_U_(0x1) << PMC_PCSR0_PID17_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 17 Status Mask */
#define PMC_PCSR0_PID17(value)                (PMC_PCSR0_PID17_Msk & ((value) << PMC_PCSR0_PID17_Pos))
#define PMC_PCSR0_PID18_Pos                   _U_(18)                                              /**< (PMC_PCSR0) Peripheral Clock 18 Status Position */
#define PMC_PCSR0_PID18_Msk                   (_U_(0x1) << PMC_PCSR0_PID18_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 18 Status Mask */
#define PMC_PCSR0_PID18(value)                (PMC_PCSR0_PID18_Msk & ((value) << PMC_PCSR0_PID18_Pos))
#define PMC_PCSR0_PID19_Pos                   _U_(19)                                              /**< (PMC_PCSR0) Peripheral Clock 19 Status Position */
#define PMC_PCSR0_PID19_Msk                   (_U_(0x1) << PMC_PCSR0_PID19_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 19 Status Mask */
#define PMC_PCSR0_PID19(value)                (PMC_PCSR0_PID19_Msk & ((value) << PMC_PCSR0_PID19_Pos))
#define PMC_PCSR0_PID20_Pos                   _U_(20)                                              /**< (PMC_PCSR0) Peripheral Clock 20 Status Position */
#define PMC_PCSR0_PID20_Msk                   (_U_(0x1) << PMC_PCSR0_PID20_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 20 Status Mask */
#define PMC_PCSR0_PID20(value)                (PMC_PCSR0_PID20_Msk & ((value) << PMC_PCSR0_PID20_Pos))
#define PMC_PCSR0_PID21_Pos                   _U_(21)                                              /**< (PMC_PCSR0) Peripheral Clock 21 Status Position */
#define PMC_PCSR0_PID21_Msk                   (_U_(0x1) << PMC_PCSR0_PID21_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 21 Status Mask */
#define PMC_PCSR0_PID21(value)                (PMC_PCSR0_PID21_Msk & ((value) << PMC_PCSR0_PID21_Pos))
#define PMC_PCSR0_PID22_Pos                   _U_(22)                                              /**< (PMC_PCSR0) Peripheral Clock 22 Status Position */
#define PMC_PCSR0_PID22_Msk                   (_U_(0x1) << PMC_PCSR0_PID22_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 22 Status Mask */
#define PMC_PCSR0_PID22(value)                (PMC_PCSR0_PID22_Msk & ((value) << PMC_PCSR0_PID22_Pos))
#define PMC_PCSR0_PID23_Pos                   _U_(23)                                              /**< (PMC_PCSR0) Peripheral Clock 23 Status Position */
#define PMC_PCSR0_PID23_Msk                   (_U_(0x1) << PMC_PCSR0_PID23_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 23 Status Mask */
#define PMC_PCSR0_PID23(value)                (PMC_PCSR0_PID23_Msk & ((value) << PMC_PCSR0_PID23_Pos))
#define PMC_PCSR0_PID24_Pos                   _U_(24)                                              /**< (PMC_PCSR0) Peripheral Clock 24 Status Position */
#define PMC_PCSR0_PID24_Msk                   (_U_(0x1) << PMC_PCSR0_PID24_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 24 Status Mask */
#define PMC_PCSR0_PID24(value)                (PMC_PCSR0_PID24_Msk & ((value) << PMC_PCSR0_PID24_Pos))
#define PMC_PCSR0_PID25_Pos                   _U_(25)                                              /**< (PMC_PCSR0) Peripheral Clock 25 Status Position */
#define PMC_PCSR0_PID25_Msk                   (_U_(0x1) << PMC_PCSR0_PID25_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 25 Status Mask */
#define PMC_PCSR0_PID25(value)                (PMC_PCSR0_PID25_Msk & ((value) << PMC_PCSR0_PID25_Pos))
#define PMC_PCSR0_PID26_Pos                   _U_(26)                                              /**< (PMC_PCSR0) Peripheral Clock 26 Status Position */
#define PMC_PCSR0_PID26_Msk                   (_U_(0x1) << PMC_PCSR0_PID26_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 26 Status Mask */
#define PMC_PCSR0_PID26(value)                (PMC_PCSR0_PID26_Msk & ((value) << PMC_PCSR0_PID26_Pos))
#define PMC_PCSR0_PID27_Pos                   _U_(27)                                              /**< (PMC_PCSR0) Peripheral Clock 27 Status Position */
#define PMC_PCSR0_PID27_Msk                   (_U_(0x1) << PMC_PCSR0_PID27_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 27 Status Mask */
#define PMC_PCSR0_PID27(value)                (PMC_PCSR0_PID27_Msk & ((value) << PMC_PCSR0_PID27_Pos))
#define PMC_PCSR0_PID28_Pos                   _U_(28)                                              /**< (PMC_PCSR0) Peripheral Clock 28 Status Position */
#define PMC_PCSR0_PID28_Msk                   (_U_(0x1) << PMC_PCSR0_PID28_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 28 Status Mask */
#define PMC_PCSR0_PID28(value)                (PMC_PCSR0_PID28_Msk & ((value) << PMC_PCSR0_PID28_Pos))
#define PMC_PCSR0_PID29_Pos                   _U_(29)                                              /**< (PMC_PCSR0) Peripheral Clock 29 Status Position */
#define PMC_PCSR0_PID29_Msk                   (_U_(0x1) << PMC_PCSR0_PID29_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 29 Status Mask */
#define PMC_PCSR0_PID29(value)                (PMC_PCSR0_PID29_Msk & ((value) << PMC_PCSR0_PID29_Pos))
#define PMC_PCSR0_PID30_Pos                   _U_(30)                                              /**< (PMC_PCSR0) Peripheral Clock 30 Status Position */
#define PMC_PCSR0_PID30_Msk                   (_U_(0x1) << PMC_PCSR0_PID30_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 30 Status Mask */
#define PMC_PCSR0_PID30(value)                (PMC_PCSR0_PID30_Msk & ((value) << PMC_PCSR0_PID30_Pos))
#define PMC_PCSR0_PID31_Pos                   _U_(31)                                              /**< (PMC_PCSR0) Peripheral Clock 31 Status Position */
#define PMC_PCSR0_PID31_Msk                   (_U_(0x1) << PMC_PCSR0_PID31_Pos)                    /**< (PMC_PCSR0) Peripheral Clock 31 Status Mask */
#define PMC_PCSR0_PID31(value)                (PMC_PCSR0_PID31_Msk & ((value) << PMC_PCSR0_PID31_Pos))
#define PMC_PCSR0_Msk                         _U_(0xFFFFFFFC)                                      /**< (PMC_PCSR0) Register Mask  */

#define PMC_PCSR0_PID_Pos                     _U_(2)                                               /**< (PMC_PCSR0 Position) Peripheral Clock 3x Status */
#define PMC_PCSR0_PID_Msk                     (_U_(0x3FFFFFFF) << PMC_PCSR0_PID_Pos)               /**< (PMC_PCSR0 Mask) PID */
#define PMC_PCSR0_PID(value)                  (PMC_PCSR0_PID_Msk & ((value) << PMC_PCSR0_PID_Pos)) 

/* -------- CKGR_UCKR : (PMC Offset: 0x1C) (R/W 32) UTMI Clock Register -------- */
#define CKGR_UCKR_UPLLEN_Pos                  _U_(16)                                              /**< (CKGR_UCKR) UTMI PLL Enable Position */
#define CKGR_UCKR_UPLLEN_Msk                  (_U_(0x1) << CKGR_UCKR_UPLLEN_Pos)                   /**< (CKGR_UCKR) UTMI PLL Enable Mask */
#define CKGR_UCKR_UPLLEN(value)               (CKGR_UCKR_UPLLEN_Msk & ((value) << CKGR_UCKR_UPLLEN_Pos))
#define CKGR_UCKR_UPLLCOUNT_Pos               _U_(20)                                              /**< (CKGR_UCKR) UTMI PLL Startup Time Position */
#define CKGR_UCKR_UPLLCOUNT_Msk               (_U_(0xF) << CKGR_UCKR_UPLLCOUNT_Pos)                /**< (CKGR_UCKR) UTMI PLL Startup Time Mask */
#define CKGR_UCKR_UPLLCOUNT(value)            (CKGR_UCKR_UPLLCOUNT_Msk & ((value) << CKGR_UCKR_UPLLCOUNT_Pos))
#define CKGR_UCKR_BIASEN_Pos                  _U_(24)                                              /**< (CKGR_UCKR) UTMI BIAS Enable Position */
#define CKGR_UCKR_BIASEN_Msk                  (_U_(0x1) << CKGR_UCKR_BIASEN_Pos)                   /**< (CKGR_UCKR) UTMI BIAS Enable Mask */
#define CKGR_UCKR_BIASEN(value)               (CKGR_UCKR_BIASEN_Msk & ((value) << CKGR_UCKR_BIASEN_Pos))
#define CKGR_UCKR_BIASCOUNT_Pos               _U_(28)                                              /**< (CKGR_UCKR) UTMI BIAS Startup Time Position */
#define CKGR_UCKR_BIASCOUNT_Msk               (_U_(0xF) << CKGR_UCKR_BIASCOUNT_Pos)                /**< (CKGR_UCKR) UTMI BIAS Startup Time Mask */
#define CKGR_UCKR_BIASCOUNT(value)            (CKGR_UCKR_BIASCOUNT_Msk & ((value) << CKGR_UCKR_BIASCOUNT_Pos))
#define CKGR_UCKR_Msk                         _U_(0xF1F10000)                                      /**< (CKGR_UCKR) Register Mask  */


/* -------- CKGR_MOR : (PMC Offset: 0x20) (R/W 32) Main Oscillator Register -------- */
#define CKGR_MOR_MOSCXTEN_Pos                 _U_(0)                                               /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Enable Position */
#define CKGR_MOR_MOSCXTEN_Msk                 (_U_(0x1) << CKGR_MOR_MOSCXTEN_Pos)                  /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Enable Mask */
#define CKGR_MOR_MOSCXTEN(value)              (CKGR_MOR_MOSCXTEN_Msk & ((value) << CKGR_MOR_MOSCXTEN_Pos))
#define CKGR_MOR_MOSCXTBY_Pos                 _U_(1)                                               /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Bypass Position */
#define CKGR_MOR_MOSCXTBY_Msk                 (_U_(0x1) << CKGR_MOR_MOSCXTBY_Pos)                  /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Bypass Mask */
#define CKGR_MOR_MOSCXTBY(value)              (CKGR_MOR_MOSCXTBY_Msk & ((value) << CKGR_MOR_MOSCXTBY_Pos))
#define CKGR_MOR_WAITMODE_Pos                 _U_(2)                                               /**< (CKGR_MOR) Wait Mode Command (Write-only) Position */
#define CKGR_MOR_WAITMODE_Msk                 (_U_(0x1) << CKGR_MOR_WAITMODE_Pos)                  /**< (CKGR_MOR) Wait Mode Command (Write-only) Mask */
#define CKGR_MOR_WAITMODE(value)              (CKGR_MOR_WAITMODE_Msk & ((value) << CKGR_MOR_WAITMODE_Pos))
#define CKGR_MOR_MOSCRCEN_Pos                 _U_(3)                                               /**< (CKGR_MOR) 12 MHz RC Oscillator Enable Position */
#define CKGR_MOR_MOSCRCEN_Msk                 (_U_(0x1) << CKGR_MOR_MOSCRCEN_Pos)                  /**< (CKGR_MOR) 12 MHz RC Oscillator Enable Mask */
#define CKGR_MOR_MOSCRCEN(value)              (CKGR_MOR_MOSCRCEN_Msk & ((value) << CKGR_MOR_MOSCRCEN_Pos))
#define CKGR_MOR_ONE_Pos                      _U_(5)                                               /**< (CKGR_MOR) Must Be Set to 1 Position */
#define CKGR_MOR_ONE_Msk                      (_U_(0x1) << CKGR_MOR_ONE_Pos)                       /**< (CKGR_MOR) Must Be Set to 1 Mask */
#define CKGR_MOR_ONE(value)                   (CKGR_MOR_ONE_Msk & ((value) << CKGR_MOR_ONE_Pos))  
#define CKGR_MOR_MOSCXTST_Pos                 _U_(8)                                               /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Startup Time Position */
#define CKGR_MOR_MOSCXTST_Msk                 (_U_(0xFF) << CKGR_MOR_MOSCXTST_Pos)                 /**< (CKGR_MOR) 8 to 24 MHz Crystal Oscillator Startup Time Mask */
#define CKGR_MOR_MOSCXTST(value)              (CKGR_MOR_MOSCXTST_Msk & ((value) << CKGR_MOR_MOSCXTST_Pos))
#define CKGR_MOR_KEY_Pos                      _U_(16)                                              /**< (CKGR_MOR) Password Position */
#define CKGR_MOR_KEY_Msk                      (_U_(0xFF) << CKGR_MOR_KEY_Pos)                      /**< (CKGR_MOR) Password Mask */
#define CKGR_MOR_KEY(value)                   (CKGR_MOR_KEY_Msk & ((value) << CKGR_MOR_KEY_Pos))  
#define   CKGR_MOR_KEY_PASSWD_Val             _U_(0x37)                                            /**< (CKGR_MOR) Writing any other value in this field aborts the write operation.  */
#define CKGR_MOR_KEY_PASSWD                   (CKGR_MOR_KEY_PASSWD_Val << CKGR_MOR_KEY_Pos)        /**< (CKGR_MOR) Writing any other value in this field aborts the write operation. Position  */
#define CKGR_MOR_MOSCSEL_Pos                  _U_(24)                                              /**< (CKGR_MOR) Main Clock Oscillator Selection Position */
#define CKGR_MOR_MOSCSEL_Msk                  (_U_(0x1) << CKGR_MOR_MOSCSEL_Pos)                   /**< (CKGR_MOR) Main Clock Oscillator Selection Mask */
#define CKGR_MOR_MOSCSEL(value)               (CKGR_MOR_MOSCSEL_Msk & ((value) << CKGR_MOR_MOSCSEL_Pos))
#define CKGR_MOR_CFDEN_Pos                    _U_(25)                                              /**< (CKGR_MOR) Clock Failure Detector Enable Position */
#define CKGR_MOR_CFDEN_Msk                    (_U_(0x1) << CKGR_MOR_CFDEN_Pos)                     /**< (CKGR_MOR) Clock Failure Detector Enable Mask */
#define CKGR_MOR_CFDEN(value)                 (CKGR_MOR_CFDEN_Msk & ((value) << CKGR_MOR_CFDEN_Pos))
#define CKGR_MOR_Msk                          _U_(0x03FFFF2F)                                      /**< (CKGR_MOR) Register Mask  */


/* -------- CKGR_MCFR : (PMC Offset: 0x24) (R/W 32) Main Clock Frequency Register -------- */
#define CKGR_MCFR_MAINF_Pos                   _U_(0)                                               /**< (CKGR_MCFR) Main Clock Frequency Position */
#define CKGR_MCFR_MAINF_Msk                   (_U_(0xFFFF) << CKGR_MCFR_MAINF_Pos)                 /**< (CKGR_MCFR) Main Clock Frequency Mask */
#define CKGR_MCFR_MAINF(value)                (CKGR_MCFR_MAINF_Msk & ((value) << CKGR_MCFR_MAINF_Pos))
#define CKGR_MCFR_MAINFRDY_Pos                _U_(16)                                              /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Position */
#define CKGR_MCFR_MAINFRDY_Msk                (_U_(0x1) << CKGR_MCFR_MAINFRDY_Pos)                 /**< (CKGR_MCFR) Main Clock Frequency Measure Ready Mask */
#define CKGR_MCFR_MAINFRDY(value)             (CKGR_MCFR_MAINFRDY_Msk & ((value) << CKGR_MCFR_MAINFRDY_Pos))
#define CKGR_MCFR_RCMEAS_Pos                  _U_(20)                                              /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Position */
#define CKGR_MCFR_RCMEAS_Msk                  (_U_(0x1) << CKGR_MCFR_RCMEAS_Pos)                   /**< (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Mask */
#define CKGR_MCFR_RCMEAS(value)               (CKGR_MCFR_RCMEAS_Msk & ((value) << CKGR_MCFR_RCMEAS_Pos))
#define CKGR_MCFR_CCSS_Pos                    _U_(24)                                              /**< (CKGR_MCFR) Counter Clock Source Selection Position */
#define CKGR_MCFR_CCSS_Msk                    (_U_(0x1) << CKGR_MCFR_CCSS_Pos)                     /**< (CKGR_MCFR) Counter Clock Source Selection Mask */
#define CKGR_MCFR_CCSS(value)                 (CKGR_MCFR_CCSS_Msk & ((value) << CKGR_MCFR_CCSS_Pos))
#define CKGR_MCFR_Msk                         _U_(0x0111FFFF)                                      /**< (CKGR_MCFR) Register Mask  */


/* -------- CKGR_PLLAR : (PMC Offset: 0x28) (R/W 32) PLLA Register -------- */
#define CKGR_PLLAR_DIVA_Pos                   _U_(0)                                               /**< (CKGR_PLLAR) Divider A Position */
#define CKGR_PLLAR_DIVA_Msk                   (_U_(0x1) << CKGR_PLLAR_DIVA_Pos)                    /**< (CKGR_PLLAR) Divider A Mask */
#define CKGR_PLLAR_DIVA(value)                (CKGR_PLLAR_DIVA_Msk & ((value) << CKGR_PLLAR_DIVA_Pos))
#define CKGR_PLLAR_PLLACOUNT_Pos              _U_(8)                                               /**< (CKGR_PLLAR) PLLA Counter Position */
#define CKGR_PLLAR_PLLACOUNT_Msk              (_U_(0x3F) << CKGR_PLLAR_PLLACOUNT_Pos)              /**< (CKGR_PLLAR) PLLA Counter Mask */
#define CKGR_PLLAR_PLLACOUNT(value)           (CKGR_PLLAR_PLLACOUNT_Msk & ((value) << CKGR_PLLAR_PLLACOUNT_Pos))
#define CKGR_PLLAR_OUTA_Pos                   _U_(14)                                              /**< (CKGR_PLLAR) PLLA Clock Frequency Range Position */
#define CKGR_PLLAR_OUTA_Msk                   (_U_(0xF) << CKGR_PLLAR_OUTA_Pos)                    /**< (CKGR_PLLAR) PLLA Clock Frequency Range Mask */
#define CKGR_PLLAR_OUTA(value)                (CKGR_PLLAR_OUTA_Msk & ((value) << CKGR_PLLAR_OUTA_Pos))
#define CKGR_PLLAR_MULA_Pos                   _U_(18)                                              /**< (CKGR_PLLAR) PLLA Multiplier Position */
#define CKGR_PLLAR_MULA_Msk                   (_U_(0x7F) << CKGR_PLLAR_MULA_Pos)                   /**< (CKGR_PLLAR) PLLA Multiplier Mask */
#define CKGR_PLLAR_MULA(value)                (CKGR_PLLAR_MULA_Msk & ((value) << CKGR_PLLAR_MULA_Pos))
#define CKGR_PLLAR_ONE_Pos                    _U_(29)                                              /**< (CKGR_PLLAR) Must Be Set to 1 Position */
#define CKGR_PLLAR_ONE_Msk                    (_U_(0x1) << CKGR_PLLAR_ONE_Pos)                     /**< (CKGR_PLLAR) Must Be Set to 1 Mask */
#define CKGR_PLLAR_ONE(value)                 (CKGR_PLLAR_ONE_Msk & ((value) << CKGR_PLLAR_ONE_Pos))
#define CKGR_PLLAR_Msk                        _U_(0x21FFFF01)                                      /**< (CKGR_PLLAR) Register Mask  */


/* -------- PMC_MCKR : (PMC Offset: 0x30) (R/W 32) Master Clock Register -------- */
#define PMC_MCKR_CSS_Pos                      _U_(0)                                               /**< (PMC_MCKR) Master/Processor Clock Source Selection Position */
#define PMC_MCKR_CSS_Msk                      (_U_(0x3) << PMC_MCKR_CSS_Pos)                       /**< (PMC_MCKR) Master/Processor Clock Source Selection Mask */
#define PMC_MCKR_CSS(value)                   (PMC_MCKR_CSS_Msk & ((value) << PMC_MCKR_CSS_Pos))  
#define   PMC_MCKR_CSS_SLOW_CLK_Val           _U_(0x0)                                             /**< (PMC_MCKR) Slow clock is selected  */
#define   PMC_MCKR_CSS_MAIN_CLK_Val           _U_(0x1)                                             /**< (PMC_MCKR) Main clock is selected  */
#define   PMC_MCKR_CSS_PLLA_CLK_Val           _U_(0x2)                                             /**< (PMC_MCKR) PLLACK is selected  */
#define   PMC_MCKR_CSS_UPLL_CLK_Val           _U_(0x3)                                             /**< (PMC_MCKR) UPLL Clock is selected  */
#define PMC_MCKR_CSS_SLOW_CLK                 (PMC_MCKR_CSS_SLOW_CLK_Val << PMC_MCKR_CSS_Pos)      /**< (PMC_MCKR) Slow clock is selected Position  */
#define PMC_MCKR_CSS_MAIN_CLK                 (PMC_MCKR_CSS_MAIN_CLK_Val << PMC_MCKR_CSS_Pos)      /**< (PMC_MCKR) Main clock is selected Position  */
#define PMC_MCKR_CSS_PLLA_CLK                 (PMC_MCKR_CSS_PLLA_CLK_Val << PMC_MCKR_CSS_Pos)      /**< (PMC_MCKR) PLLACK is selected Position  */
#define PMC_MCKR_CSS_UPLL_CLK                 (PMC_MCKR_CSS_UPLL_CLK_Val << PMC_MCKR_CSS_Pos)      /**< (PMC_MCKR) UPLL Clock is selected Position  */
#define PMC_MCKR_PRES_Pos                     _U_(4)                                               /**< (PMC_MCKR) Master/Processor Clock Prescaler Position */
#define PMC_MCKR_PRES_Msk                     (_U_(0x7) << PMC_MCKR_PRES_Pos)                      /**< (PMC_MCKR) Master/Processor Clock Prescaler Mask */
#define PMC_MCKR_PRES(value)                  (PMC_MCKR_PRES_Msk & ((value) << PMC_MCKR_PRES_Pos))
#define   PMC_MCKR_PRES_CLOCK_Val             _U_(0x0)                                             /**< (PMC_MCKR) Selected clock  */
#define   PMC_MCKR_PRES_CLOCK_DIV2_Val        _U_(0x1)                                             /**< (PMC_MCKR) Selected clock divided by 2  */
#define   PMC_MCKR_PRES_CLOCK_DIV4_Val        _U_(0x2)                                             /**< (PMC_MCKR) Selected clock divided by 4  */
#define   PMC_MCKR_PRES_CLOCK_DIV8_Val        _U_(0x3)                                             /**< (PMC_MCKR) Selected clock divided by 8  */
#define   PMC_MCKR_PRES_CLOCK_DIV16_Val       _U_(0x4)                                             /**< (PMC_MCKR) Selected clock divided by 16  */
#define   PMC_MCKR_PRES_CLOCK_DIV32_Val       _U_(0x5)                                             /**< (PMC_MCKR) Selected clock divided by 32  */
#define   PMC_MCKR_PRES_CLOCK_DIV64_Val       _U_(0x6)                                             /**< (PMC_MCKR) Selected clock divided by 64  */
#define PMC_MCKR_PRES_CLOCK                   (PMC_MCKR_PRES_CLOCK_Val << PMC_MCKR_PRES_Pos)       /**< (PMC_MCKR) Selected clock Position  */
#define PMC_MCKR_PRES_CLOCK_DIV2              (PMC_MCKR_PRES_CLOCK_DIV2_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 2 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV4              (PMC_MCKR_PRES_CLOCK_DIV4_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 4 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV8              (PMC_MCKR_PRES_CLOCK_DIV8_Val << PMC_MCKR_PRES_Pos)  /**< (PMC_MCKR) Selected clock divided by 8 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV16             (PMC_MCKR_PRES_CLOCK_DIV16_Val << PMC_MCKR_PRES_Pos) /**< (PMC_MCKR) Selected clock divided by 16 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV32             (PMC_MCKR_PRES_CLOCK_DIV32_Val << PMC_MCKR_PRES_Pos) /**< (PMC_MCKR) Selected clock divided by 32 Position  */
#define PMC_MCKR_PRES_CLOCK_DIV64             (PMC_MCKR_PRES_CLOCK_DIV64_Val << PMC_MCKR_PRES_Pos) /**< (PMC_MCKR) Selected clock divided by 64 Position  */
#define PMC_MCKR_MDIV_Pos                     _U_(8)                                               /**< (PMC_MCKR) Master Clock Division Position */
#define PMC_MCKR_MDIV_Msk                     (_U_(0x3) << PMC_MCKR_MDIV_Pos)                      /**< (PMC_MCKR) Master Clock Division Mask */
#define PMC_MCKR_MDIV(value)                  (PMC_MCKR_MDIV_Msk & ((value) << PMC_MCKR_MDIV_Pos))
#define   PMC_MCKR_MDIV_EQ_PCK_Val            _U_(0x0)                                             /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 1.Warning: DDRCK is not available.  */
#define   PMC_MCKR_MDIV_PCK_DIV2_Val          _U_(0x1)                                             /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 2. DDRCK is equal to MCK.  */
#define   PMC_MCKR_MDIV_PCK_DIV4_Val          _U_(0x2)                                             /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 4. DDRCK is equal to MCK.  */
#define   PMC_MCKR_MDIV_PCK_DIV3_Val          _U_(0x3)                                             /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 3. DDRCK is equal to MCK.  */
#define PMC_MCKR_MDIV_EQ_PCK                  (PMC_MCKR_MDIV_EQ_PCK_Val << PMC_MCKR_MDIV_Pos)      /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 1.Warning: DDRCK is not available. Position  */
#define PMC_MCKR_MDIV_PCK_DIV2                (PMC_MCKR_MDIV_PCK_DIV2_Val << PMC_MCKR_MDIV_Pos)    /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 2. DDRCK is equal to MCK. Position  */
#define PMC_MCKR_MDIV_PCK_DIV4                (PMC_MCKR_MDIV_PCK_DIV4_Val << PMC_MCKR_MDIV_Pos)    /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 4. DDRCK is equal to MCK. Position  */
#define PMC_MCKR_MDIV_PCK_DIV3                (PMC_MCKR_MDIV_PCK_DIV3_Val << PMC_MCKR_MDIV_Pos)    /**< (PMC_MCKR) Master Clock is Prescaler Output Clock divided by 3. DDRCK is equal to MCK. Position  */
#define PMC_MCKR_PLLADIV2_Pos                 _U_(12)                                              /**< (PMC_MCKR) PLLA Divisor by 2 Position */
#define PMC_MCKR_PLLADIV2_Msk                 (_U_(0x1) << PMC_MCKR_PLLADIV2_Pos)                  /**< (PMC_MCKR) PLLA Divisor by 2 Mask */
#define PMC_MCKR_PLLADIV2(value)              (PMC_MCKR_PLLADIV2_Msk & ((value) << PMC_MCKR_PLLADIV2_Pos))
#define PMC_MCKR_H32MXDIV_Pos                 _U_(24)                                              /**< (PMC_MCKR) AHB 32-bit Matrix Divisor Position */
#define PMC_MCKR_H32MXDIV_Msk                 (_U_(0x1) << PMC_MCKR_H32MXDIV_Pos)                  /**< (PMC_MCKR) AHB 32-bit Matrix Divisor Mask */
#define PMC_MCKR_H32MXDIV(value)              (PMC_MCKR_H32MXDIV_Msk & ((value) << PMC_MCKR_H32MXDIV_Pos))
#define   PMC_MCKR_H32MXDIV_H32MXDIV1_Val     _U_(0x0)                                             /**< (PMC_MCKR) The AHB 32-bit Matrix frequency is equal to the AHB 64-bit Matrix frequency. It is possible only if the AHB 64-bit Matrix frequency does not exceed 83 MHz.  */
#define   PMC_MCKR_H32MXDIV_H32MXDIV2_Val     _U_(0x1)                                             /**< (PMC_MCKR) The AHB 32-bit Matrix frequency is equal to the AHB 64-bit Matrix frequency divided by 2.  */
#define PMC_MCKR_H32MXDIV_H32MXDIV1           (PMC_MCKR_H32MXDIV_H32MXDIV1_Val << PMC_MCKR_H32MXDIV_Pos) /**< (PMC_MCKR) The AHB 32-bit Matrix frequency is equal to the AHB 64-bit Matrix frequency. It is possible only if the AHB 64-bit Matrix frequency does not exceed 83 MHz. Position  */
#define PMC_MCKR_H32MXDIV_H32MXDIV2           (PMC_MCKR_H32MXDIV_H32MXDIV2_Val << PMC_MCKR_H32MXDIV_Pos) /**< (PMC_MCKR) The AHB 32-bit Matrix frequency is equal to the AHB 64-bit Matrix frequency divided by 2. Position  */
#define PMC_MCKR_Msk                          _U_(0x01001373)                                      /**< (PMC_MCKR) Register Mask  */

#define PMC_MCKR_PLLADIV_Pos                  _U_(12)                                              /**< (PMC_MCKR Position) PLLA Divisor by 2 */
#define PMC_MCKR_PLLADIV_Msk                  (_U_(0x1) << PMC_MCKR_PLLADIV_Pos)                   /**< (PMC_MCKR Mask) PLLADIV */
#define PMC_MCKR_PLLADIV(value)               (PMC_MCKR_PLLADIV_Msk & ((value) << PMC_MCKR_PLLADIV_Pos)) 

/* -------- PMC_USB : (PMC Offset: 0x38) (R/W 32) USB Clock Register -------- */
#define PMC_USB_USBS_Pos                      _U_(0)                                               /**< (PMC_USB) USB OHCI Input Clock Selection Position */
#define PMC_USB_USBS_Msk                      (_U_(0x1) << PMC_USB_USBS_Pos)                       /**< (PMC_USB) USB OHCI Input Clock Selection Mask */
#define PMC_USB_USBS(value)                   (PMC_USB_USBS_Msk & ((value) << PMC_USB_USBS_Pos))  
#define PMC_USB_USBDIV_Pos                    _U_(8)                                               /**< (PMC_USB) Divider for USB OHCI Clock Position */
#define PMC_USB_USBDIV_Msk                    (_U_(0xF) << PMC_USB_USBDIV_Pos)                     /**< (PMC_USB) Divider for USB OHCI Clock Mask */
#define PMC_USB_USBDIV(value)                 (PMC_USB_USBDIV_Msk & ((value) << PMC_USB_USBDIV_Pos))
#define PMC_USB_Msk                           _U_(0x00000F01)                                      /**< (PMC_USB) Register Mask  */


/* -------- PMC_PCK : (PMC Offset: 0x40) (R/W 32) Programmable Clock 0 Register -------- */
#define PMC_PCK_CSS_Pos                       _U_(0)                                               /**< (PMC_PCK) Master Clock Source Selection Position */
#define PMC_PCK_CSS_Msk                       (_U_(0x7) << PMC_PCK_CSS_Pos)                        /**< (PMC_PCK) Master Clock Source Selection Mask */
#define PMC_PCK_CSS(value)                    (PMC_PCK_CSS_Msk & ((value) << PMC_PCK_CSS_Pos))    
#define   PMC_PCK_CSS_SLOW_CLK_Val            _U_(0x0)                                             /**< (PMC_PCK) Slow clock is selected  */
#define   PMC_PCK_CSS_MAIN_CLK_Val            _U_(0x1)                                             /**< (PMC_PCK) Main clock is selected  */
#define   PMC_PCK_CSS_PLLA_CLK_Val            _U_(0x2)                                             /**< (PMC_PCK) PLLACK is selected  */
#define   PMC_PCK_CSS_UPLL_CLK_Val            _U_(0x3)                                             /**< (PMC_PCK) UPLL Clock is selected  */
#define   PMC_PCK_CSS_MCK_CLK_Val             _U_(0x4)                                             /**< (PMC_PCK) Master Clock is selected  */
#define   PMC_PCK_CSS_AUDIO_CLK_Val           _U_(0x5)                                             /**< (PMC_PCK) Audio PLL clock is selected  */
#define PMC_PCK_CSS_SLOW_CLK                  (PMC_PCK_CSS_SLOW_CLK_Val << PMC_PCK_CSS_Pos)        /**< (PMC_PCK) Slow clock is selected Position  */
#define PMC_PCK_CSS_MAIN_CLK                  (PMC_PCK_CSS_MAIN_CLK_Val << PMC_PCK_CSS_Pos)        /**< (PMC_PCK) Main clock is selected Position  */
#define PMC_PCK_CSS_PLLA_CLK                  (PMC_PCK_CSS_PLLA_CLK_Val << PMC_PCK_CSS_Pos)        /**< (PMC_PCK) PLLACK is selected Position  */
#define PMC_PCK_CSS_UPLL_CLK                  (PMC_PCK_CSS_UPLL_CLK_Val << PMC_PCK_CSS_Pos)        /**< (PMC_PCK) UPLL Clock is selected Position  */
#define PMC_PCK_CSS_MCK_CLK                   (PMC_PCK_CSS_MCK_CLK_Val << PMC_PCK_CSS_Pos)         /**< (PMC_PCK) Master Clock is selected Position  */
#define PMC_PCK_CSS_AUDIO_CLK                 (PMC_PCK_CSS_AUDIO_CLK_Val << PMC_PCK_CSS_Pos)       /**< (PMC_PCK) Audio PLL clock is selected Position  */
#define PMC_PCK_PRES_Pos                      _U_(4)                                               /**< (PMC_PCK) Programmable Clock Prescaler Position */
#define PMC_PCK_PRES_Msk                      (_U_(0xFF) << PMC_PCK_PRES_Pos)                      /**< (PMC_PCK) Programmable Clock Prescaler Mask */
#define PMC_PCK_PRES(value)                   (PMC_PCK_PRES_Msk & ((value) << PMC_PCK_PRES_Pos))  
#define PMC_PCK_Msk                           _U_(0x00000FF7)                                      /**< (PMC_PCK) Register Mask  */


/* -------- PMC_IER : (PMC Offset: 0x60) ( /W 32) Interrupt Enable Register -------- */
#define PMC_IER_MOSCXTS_Pos                   _U_(0)                                               /**< (PMC_IER) 8 to 24 MHz Crystal Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCXTS_Msk                   (_U_(0x1) << PMC_IER_MOSCXTS_Pos)                    /**< (PMC_IER) 8 to 24 MHz Crystal Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCXTS(value)                (PMC_IER_MOSCXTS_Msk & ((value) << PMC_IER_MOSCXTS_Pos))
#define PMC_IER_LOCKA_Pos                     _U_(1)                                               /**< (PMC_IER) PLLA Lock Interrupt Enable Position */
#define PMC_IER_LOCKA_Msk                     (_U_(0x1) << PMC_IER_LOCKA_Pos)                      /**< (PMC_IER) PLLA Lock Interrupt Enable Mask */
#define PMC_IER_LOCKA(value)                  (PMC_IER_LOCKA_Msk & ((value) << PMC_IER_LOCKA_Pos))
#define PMC_IER_MCKRDY_Pos                    _U_(3)                                               /**< (PMC_IER) Master Clock Ready Interrupt Enable Position */
#define PMC_IER_MCKRDY_Msk                    (_U_(0x1) << PMC_IER_MCKRDY_Pos)                     /**< (PMC_IER) Master Clock Ready Interrupt Enable Mask */
#define PMC_IER_MCKRDY(value)                 (PMC_IER_MCKRDY_Msk & ((value) << PMC_IER_MCKRDY_Pos))
#define PMC_IER_LOCKU_Pos                     _U_(6)                                               /**< (PMC_IER) UTMI PLL Lock Interrupt Enable Position */
#define PMC_IER_LOCKU_Msk                     (_U_(0x1) << PMC_IER_LOCKU_Pos)                      /**< (PMC_IER) UTMI PLL Lock Interrupt Enable Mask */
#define PMC_IER_LOCKU(value)                  (PMC_IER_LOCKU_Msk & ((value) << PMC_IER_LOCKU_Pos))
#define PMC_IER_PCKRDY0_Pos                   _U_(8)                                               /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Position */
#define PMC_IER_PCKRDY0_Msk                   (_U_(0x1) << PMC_IER_PCKRDY0_Pos)                    /**< (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Mask */
#define PMC_IER_PCKRDY0(value)                (PMC_IER_PCKRDY0_Msk & ((value) << PMC_IER_PCKRDY0_Pos))
#define PMC_IER_PCKRDY1_Pos                   _U_(9)                                               /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Position */
#define PMC_IER_PCKRDY1_Msk                   (_U_(0x1) << PMC_IER_PCKRDY1_Pos)                    /**< (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Mask */
#define PMC_IER_PCKRDY1(value)                (PMC_IER_PCKRDY1_Msk & ((value) << PMC_IER_PCKRDY1_Pos))
#define PMC_IER_PCKRDY2_Pos                   _U_(10)                                              /**< (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Position */
#define PMC_IER_PCKRDY2_Msk                   (_U_(0x1) << PMC_IER_PCKRDY2_Pos)                    /**< (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Mask */
#define PMC_IER_PCKRDY2(value)                (PMC_IER_PCKRDY2_Msk & ((value) << PMC_IER_PCKRDY2_Pos))
#define PMC_IER_MOSCSELS_Pos                  _U_(16)                                              /**< (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Position */
#define PMC_IER_MOSCSELS_Msk                  (_U_(0x1) << PMC_IER_MOSCSELS_Pos)                   /**< (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Mask */
#define PMC_IER_MOSCSELS(value)               (PMC_IER_MOSCSELS_Msk & ((value) << PMC_IER_MOSCSELS_Pos))
#define PMC_IER_MOSCRCS_Pos                   _U_(17)                                              /**< (PMC_IER) 12 MHz RC Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCRCS_Msk                   (_U_(0x1) << PMC_IER_MOSCRCS_Pos)                    /**< (PMC_IER) 12 MHz RC Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCRCS(value)                (PMC_IER_MOSCRCS_Msk & ((value) << PMC_IER_MOSCRCS_Pos))
#define PMC_IER_CFDEV_Pos                     _U_(18)                                              /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Position */
#define PMC_IER_CFDEV_Msk                     (_U_(0x1) << PMC_IER_CFDEV_Pos)                      /**< (PMC_IER) Clock Failure Detector Event Interrupt Enable Mask */
#define PMC_IER_CFDEV(value)                  (PMC_IER_CFDEV_Msk & ((value) << PMC_IER_CFDEV_Pos))
#define PMC_IER_Msk                           _U_(0x0007074B)                                      /**< (PMC_IER) Register Mask  */

#define PMC_IER_PCKRDY_Pos                    _U_(8)                                               /**< (PMC_IER Position) Programmable Clock Ready x Interrupt Enable */
#define PMC_IER_PCKRDY_Msk                    (_U_(0x7) << PMC_IER_PCKRDY_Pos)                     /**< (PMC_IER Mask) PCKRDY */
#define PMC_IER_PCKRDY(value)                 (PMC_IER_PCKRDY_Msk & ((value) << PMC_IER_PCKRDY_Pos)) 

/* -------- PMC_IDR : (PMC Offset: 0x64) ( /W 32) Interrupt Disable Register -------- */
#define PMC_IDR_MOSCXTS_Pos                   _U_(0)                                               /**< (PMC_IDR) 8 to 24 MHz Crystal Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCXTS_Msk                   (_U_(0x1) << PMC_IDR_MOSCXTS_Pos)                    /**< (PMC_IDR) 8 to 24 MHz Crystal Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCXTS(value)                (PMC_IDR_MOSCXTS_Msk & ((value) << PMC_IDR_MOSCXTS_Pos))
#define PMC_IDR_LOCKA_Pos                     _U_(1)                                               /**< (PMC_IDR) PLLA Lock Interrupt Disable Position */
#define PMC_IDR_LOCKA_Msk                     (_U_(0x1) << PMC_IDR_LOCKA_Pos)                      /**< (PMC_IDR) PLLA Lock Interrupt Disable Mask */
#define PMC_IDR_LOCKA(value)                  (PMC_IDR_LOCKA_Msk & ((value) << PMC_IDR_LOCKA_Pos))
#define PMC_IDR_MCKRDY_Pos                    _U_(3)                                               /**< (PMC_IDR) Master Clock Ready Interrupt Disable Position */
#define PMC_IDR_MCKRDY_Msk                    (_U_(0x1) << PMC_IDR_MCKRDY_Pos)                     /**< (PMC_IDR) Master Clock Ready Interrupt Disable Mask */
#define PMC_IDR_MCKRDY(value)                 (PMC_IDR_MCKRDY_Msk & ((value) << PMC_IDR_MCKRDY_Pos))
#define PMC_IDR_LOCKU_Pos                     _U_(6)                                               /**< (PMC_IDR) UTMI PLL Lock Interrupt Enable Position */
#define PMC_IDR_LOCKU_Msk                     (_U_(0x1) << PMC_IDR_LOCKU_Pos)                      /**< (PMC_IDR) UTMI PLL Lock Interrupt Enable Mask */
#define PMC_IDR_LOCKU(value)                  (PMC_IDR_LOCKU_Msk & ((value) << PMC_IDR_LOCKU_Pos))
#define PMC_IDR_PCKRDY0_Pos                   _U_(8)                                               /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Position */
#define PMC_IDR_PCKRDY0_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY0_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY0(value)                (PMC_IDR_PCKRDY0_Msk & ((value) << PMC_IDR_PCKRDY0_Pos))
#define PMC_IDR_PCKRDY1_Pos                   _U_(9)                                               /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Position */
#define PMC_IDR_PCKRDY1_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY1_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY1(value)                (PMC_IDR_PCKRDY1_Msk & ((value) << PMC_IDR_PCKRDY1_Pos))
#define PMC_IDR_PCKRDY2_Pos                   _U_(10)                                              /**< (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Position */
#define PMC_IDR_PCKRDY2_Msk                   (_U_(0x1) << PMC_IDR_PCKRDY2_Pos)                    /**< (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY2(value)                (PMC_IDR_PCKRDY2_Msk & ((value) << PMC_IDR_PCKRDY2_Pos))
#define PMC_IDR_MOSCSELS_Pos                  _U_(16)                                              /**< (PMC_IDR) Main Oscillator Clock Source Selection Status Interrupt Disable Position */
#define PMC_IDR_MOSCSELS_Msk                  (_U_(0x1) << PMC_IDR_MOSCSELS_Pos)                   /**< (PMC_IDR) Main Oscillator Clock Source Selection Status Interrupt Disable Mask */
#define PMC_IDR_MOSCSELS(value)               (PMC_IDR_MOSCSELS_Msk & ((value) << PMC_IDR_MOSCSELS_Pos))
#define PMC_IDR_MOSCRCS_Pos                   _U_(17)                                              /**< (PMC_IDR) 12 MHz RC Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCRCS_Msk                   (_U_(0x1) << PMC_IDR_MOSCRCS_Pos)                    /**< (PMC_IDR) 12 MHz RC Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCRCS(value)                (PMC_IDR_MOSCRCS_Msk & ((value) << PMC_IDR_MOSCRCS_Pos))
#define PMC_IDR_CFDEV_Pos                     _U_(18)                                              /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Position */
#define PMC_IDR_CFDEV_Msk                     (_U_(0x1) << PMC_IDR_CFDEV_Pos)                      /**< (PMC_IDR) Clock Failure Detector Event Interrupt Disable Mask */
#define PMC_IDR_CFDEV(value)                  (PMC_IDR_CFDEV_Msk & ((value) << PMC_IDR_CFDEV_Pos))
#define PMC_IDR_Msk                           _U_(0x0007074B)                                      /**< (PMC_IDR) Register Mask  */

#define PMC_IDR_PCKRDY_Pos                    _U_(8)                                               /**< (PMC_IDR Position) Programmable Clock Ready x Interrupt Disable */
#define PMC_IDR_PCKRDY_Msk                    (_U_(0x7) << PMC_IDR_PCKRDY_Pos)                     /**< (PMC_IDR Mask) PCKRDY */
#define PMC_IDR_PCKRDY(value)                 (PMC_IDR_PCKRDY_Msk & ((value) << PMC_IDR_PCKRDY_Pos)) 

/* -------- PMC_SR : (PMC Offset: 0x68) ( R/ 32) Status Register -------- */
#define PMC_SR_MOSCXTS_Pos                    _U_(0)                                               /**< (PMC_SR) 8 to 24 MHz Crystal Oscillator Status Position */
#define PMC_SR_MOSCXTS_Msk                    (_U_(0x1) << PMC_SR_MOSCXTS_Pos)                     /**< (PMC_SR) 8 to 24 MHz Crystal Oscillator Status Mask */
#define PMC_SR_MOSCXTS(value)                 (PMC_SR_MOSCXTS_Msk & ((value) << PMC_SR_MOSCXTS_Pos))
#define PMC_SR_LOCKA_Pos                      _U_(1)                                               /**< (PMC_SR) PLLA Lock Status Position */
#define PMC_SR_LOCKA_Msk                      (_U_(0x1) << PMC_SR_LOCKA_Pos)                       /**< (PMC_SR) PLLA Lock Status Mask */
#define PMC_SR_LOCKA(value)                   (PMC_SR_LOCKA_Msk & ((value) << PMC_SR_LOCKA_Pos))  
#define PMC_SR_MCKRDY_Pos                     _U_(3)                                               /**< (PMC_SR) Master Clock Status Position */
#define PMC_SR_MCKRDY_Msk                     (_U_(0x1) << PMC_SR_MCKRDY_Pos)                      /**< (PMC_SR) Master Clock Status Mask */
#define PMC_SR_MCKRDY(value)                  (PMC_SR_MCKRDY_Msk & ((value) << PMC_SR_MCKRDY_Pos))
#define PMC_SR_LOCKU_Pos                      _U_(6)                                               /**< (PMC_SR) UPLL Clock Status Position */
#define PMC_SR_LOCKU_Msk                      (_U_(0x1) << PMC_SR_LOCKU_Pos)                       /**< (PMC_SR) UPLL Clock Status Mask */
#define PMC_SR_LOCKU(value)                   (PMC_SR_LOCKU_Msk & ((value) << PMC_SR_LOCKU_Pos))  
#define PMC_SR_OSCSELS_Pos                    _U_(7)                                               /**< (PMC_SR) Slow Clock Oscillator Selection Position */
#define PMC_SR_OSCSELS_Msk                    (_U_(0x1) << PMC_SR_OSCSELS_Pos)                     /**< (PMC_SR) Slow Clock Oscillator Selection Mask */
#define PMC_SR_OSCSELS(value)                 (PMC_SR_OSCSELS_Msk & ((value) << PMC_SR_OSCSELS_Pos))
#define PMC_SR_PCKRDY0_Pos                    _U_(8)                                               /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY0_Msk                    (_U_(0x1) << PMC_SR_PCKRDY0_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY0(value)                 (PMC_SR_PCKRDY0_Msk & ((value) << PMC_SR_PCKRDY0_Pos))
#define PMC_SR_PCKRDY1_Pos                    _U_(9)                                               /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY1_Msk                    (_U_(0x1) << PMC_SR_PCKRDY1_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY1(value)                 (PMC_SR_PCKRDY1_Msk & ((value) << PMC_SR_PCKRDY1_Pos))
#define PMC_SR_PCKRDY2_Pos                    _U_(10)                                              /**< (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY2_Msk                    (_U_(0x1) << PMC_SR_PCKRDY2_Pos)                     /**< (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY2(value)                 (PMC_SR_PCKRDY2_Msk & ((value) << PMC_SR_PCKRDY2_Pos))
#define PMC_SR_MOSCSELS_Pos                   _U_(16)                                              /**< (PMC_SR) Main Oscillator Selection Status Position */
#define PMC_SR_MOSCSELS_Msk                   (_U_(0x1) << PMC_SR_MOSCSELS_Pos)                    /**< (PMC_SR) Main Oscillator Selection Status Mask */
#define PMC_SR_MOSCSELS(value)                (PMC_SR_MOSCSELS_Msk & ((value) << PMC_SR_MOSCSELS_Pos))
#define PMC_SR_MOSCRCS_Pos                    _U_(17)                                              /**< (PMC_SR) 12 MHz RC Oscillator Status Position */
#define PMC_SR_MOSCRCS_Msk                    (_U_(0x1) << PMC_SR_MOSCRCS_Pos)                     /**< (PMC_SR) 12 MHz RC Oscillator Status Mask */
#define PMC_SR_MOSCRCS(value)                 (PMC_SR_MOSCRCS_Msk & ((value) << PMC_SR_MOSCRCS_Pos))
#define PMC_SR_CFDEV_Pos                      _U_(18)                                              /**< (PMC_SR) Clock Failure Detector Event Position */
#define PMC_SR_CFDEV_Msk                      (_U_(0x1) << PMC_SR_CFDEV_Pos)                       /**< (PMC_SR) Clock Failure Detector Event Mask */
#define PMC_SR_CFDEV(value)                   (PMC_SR_CFDEV_Msk & ((value) << PMC_SR_CFDEV_Pos))  
#define PMC_SR_CFDS_Pos                       _U_(19)                                              /**< (PMC_SR) Clock Failure Detector Status Position */
#define PMC_SR_CFDS_Msk                       (_U_(0x1) << PMC_SR_CFDS_Pos)                        /**< (PMC_SR) Clock Failure Detector Status Mask */
#define PMC_SR_CFDS(value)                    (PMC_SR_CFDS_Msk & ((value) << PMC_SR_CFDS_Pos))    
#define PMC_SR_FOS_Pos                        _U_(20)                                              /**< (PMC_SR) Clock Failure Detector Fault Output Status Position */
#define PMC_SR_FOS_Msk                        (_U_(0x1) << PMC_SR_FOS_Pos)                         /**< (PMC_SR) Clock Failure Detector Fault Output Status Mask */
#define PMC_SR_FOS(value)                     (PMC_SR_FOS_Msk & ((value) << PMC_SR_FOS_Pos))      
#define PMC_SR_APLLCKRDY_Pos                  _U_(22)                                              /**< (PMC_SR) Audio PLL Lock Status Position */
#define PMC_SR_APLLCKRDY_Msk                  (_U_(0x1) << PMC_SR_APLLCKRDY_Pos)                   /**< (PMC_SR) Audio PLL Lock Status Mask */
#define PMC_SR_APLLCKRDY(value)               (PMC_SR_APLLCKRDY_Msk & ((value) << PMC_SR_APLLCKRDY_Pos))
#define PMC_SR_GCKRDY_Pos                     _U_(24)                                              /**< (PMC_SR) Generic Clock Status Position */
#define PMC_SR_GCKRDY_Msk                     (_U_(0x1) << PMC_SR_GCKRDY_Pos)                      /**< (PMC_SR) Generic Clock Status Mask */
#define PMC_SR_GCKRDY(value)                  (PMC_SR_GCKRDY_Msk & ((value) << PMC_SR_GCKRDY_Pos))
#define PMC_SR_Msk                            _U_(0x015F07CB)                                      /**< (PMC_SR) Register Mask  */

#define PMC_SR_PCKRDY_Pos                     _U_(8)                                               /**< (PMC_SR Position) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY_Msk                     (_U_(0x7) << PMC_SR_PCKRDY_Pos)                      /**< (PMC_SR Mask) PCKRDY */
#define PMC_SR_PCKRDY(value)                  (PMC_SR_PCKRDY_Msk & ((value) << PMC_SR_PCKRDY_Pos)) 

/* -------- PMC_IMR : (PMC Offset: 0x6C) ( R/ 32) Interrupt Mask Register -------- */
#define PMC_IMR_MOSCXTS_Pos                   _U_(0)                                               /**< (PMC_IMR) 8 to 24 MHz Crystal Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCXTS_Msk                   (_U_(0x1) << PMC_IMR_MOSCXTS_Pos)                    /**< (PMC_IMR) 8 to 24 MHz Crystal Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCXTS(value)                (PMC_IMR_MOSCXTS_Msk & ((value) << PMC_IMR_MOSCXTS_Pos))
#define PMC_IMR_LOCKA_Pos                     _U_(1)                                               /**< (PMC_IMR) PLLA Lock Interrupt Mask Position */
#define PMC_IMR_LOCKA_Msk                     (_U_(0x1) << PMC_IMR_LOCKA_Pos)                      /**< (PMC_IMR) PLLA Lock Interrupt Mask Mask */
#define PMC_IMR_LOCKA(value)                  (PMC_IMR_LOCKA_Msk & ((value) << PMC_IMR_LOCKA_Pos))
#define PMC_IMR_MCKRDY_Pos                    _U_(3)                                               /**< (PMC_IMR) Master Clock Ready Interrupt Mask Position */
#define PMC_IMR_MCKRDY_Msk                    (_U_(0x1) << PMC_IMR_MCKRDY_Pos)                     /**< (PMC_IMR) Master Clock Ready Interrupt Mask Mask */
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
#define PMC_IMR_MOSCSELS_Pos                  _U_(16)                                              /**< (PMC_IMR) Main Oscillator Clock Source Selection Status Interrupt Mask Position */
#define PMC_IMR_MOSCSELS_Msk                  (_U_(0x1) << PMC_IMR_MOSCSELS_Pos)                   /**< (PMC_IMR) Main Oscillator Clock Source Selection Status Interrupt Mask Mask */
#define PMC_IMR_MOSCSELS(value)               (PMC_IMR_MOSCSELS_Msk & ((value) << PMC_IMR_MOSCSELS_Pos))
#define PMC_IMR_MOSCRCS_Pos                   _U_(17)                                              /**< (PMC_IMR) 12 MHz RC Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCRCS_Msk                   (_U_(0x1) << PMC_IMR_MOSCRCS_Pos)                    /**< (PMC_IMR) 12 MHz RC Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCRCS(value)                (PMC_IMR_MOSCRCS_Msk & ((value) << PMC_IMR_MOSCRCS_Pos))
#define PMC_IMR_CFDEV_Pos                     _U_(18)                                              /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Position */
#define PMC_IMR_CFDEV_Msk                     (_U_(0x1) << PMC_IMR_CFDEV_Pos)                      /**< (PMC_IMR) Clock Failure Detector Event Interrupt Mask Mask */
#define PMC_IMR_CFDEV(value)                  (PMC_IMR_CFDEV_Msk & ((value) << PMC_IMR_CFDEV_Pos))
#define PMC_IMR_Msk                           _U_(0x0007070B)                                      /**< (PMC_IMR) Register Mask  */

#define PMC_IMR_PCKRDY_Pos                    _U_(8)                                               /**< (PMC_IMR Position) Programmable Clock Ready x Interrupt Mask */
#define PMC_IMR_PCKRDY_Msk                    (_U_(0x7) << PMC_IMR_PCKRDY_Pos)                     /**< (PMC_IMR Mask) PCKRDY */
#define PMC_IMR_PCKRDY(value)                 (PMC_IMR_PCKRDY_Msk & ((value) << PMC_IMR_PCKRDY_Pos)) 

/* -------- PMC_FSMR : (PMC Offset: 0x70) (R/W 32) Fast Startup Mode Register -------- */
#define PMC_FSMR_FSTT0_Pos                    _U_(0)                                               /**< (PMC_FSMR) Fast Startup from WKUP Pin Enable Position */
#define PMC_FSMR_FSTT0_Msk                    (_U_(0x1) << PMC_FSMR_FSTT0_Pos)                     /**< (PMC_FSMR) Fast Startup from WKUP Pin Enable Mask */
#define PMC_FSMR_FSTT0(value)                 (PMC_FSMR_FSTT0_Msk & ((value) << PMC_FSMR_FSTT0_Pos))
#define PMC_FSMR_FSTT1_Pos                    _U_(1)                                               /**< (PMC_FSMR) Fast Startup from Security Module Enable Position */
#define PMC_FSMR_FSTT1_Msk                    (_U_(0x1) << PMC_FSMR_FSTT1_Pos)                     /**< (PMC_FSMR) Fast Startup from Security Module Enable Mask */
#define PMC_FSMR_FSTT1(value)                 (PMC_FSMR_FSTT1_Msk & ((value) << PMC_FSMR_FSTT1_Pos))
#define PMC_FSMR_FSTT2_Pos                    _U_(2)                                               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT2_Msk                    (_U_(0x1) << PMC_FSMR_FSTT2_Pos)                     /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT2(value)                 (PMC_FSMR_FSTT2_Msk & ((value) << PMC_FSMR_FSTT2_Pos))
#define PMC_FSMR_FSTT3_Pos                    _U_(3)                                               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT3_Msk                    (_U_(0x1) << PMC_FSMR_FSTT3_Pos)                     /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT3(value)                 (PMC_FSMR_FSTT3_Msk & ((value) << PMC_FSMR_FSTT3_Pos))
#define PMC_FSMR_FSTT4_Pos                    _U_(4)                                               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT4_Msk                    (_U_(0x1) << PMC_FSMR_FSTT4_Pos)                     /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT4(value)                 (PMC_FSMR_FSTT4_Msk & ((value) << PMC_FSMR_FSTT4_Pos))
#define PMC_FSMR_FSTT5_Pos                    _U_(5)                                               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT5_Msk                    (_U_(0x1) << PMC_FSMR_FSTT5_Pos)                     /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT5(value)                 (PMC_FSMR_FSTT5_Msk & ((value) << PMC_FSMR_FSTT5_Pos))
#define PMC_FSMR_FSTT6_Pos                    _U_(6)                                               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT6_Msk                    (_U_(0x1) << PMC_FSMR_FSTT6_Pos)                     /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT6(value)                 (PMC_FSMR_FSTT6_Msk & ((value) << PMC_FSMR_FSTT6_Pos))
#define PMC_FSMR_FSTT7_Pos                    _U_(7)                                               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT7_Msk                    (_U_(0x1) << PMC_FSMR_FSTT7_Pos)                     /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT7(value)                 (PMC_FSMR_FSTT7_Msk & ((value) << PMC_FSMR_FSTT7_Pos))
#define PMC_FSMR_FSTT8_Pos                    _U_(8)                                               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT8_Msk                    (_U_(0x1) << PMC_FSMR_FSTT8_Pos)                     /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT8(value)                 (PMC_FSMR_FSTT8_Msk & ((value) << PMC_FSMR_FSTT8_Pos))
#define PMC_FSMR_FSTT9_Pos                    _U_(9)                                               /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT9_Msk                    (_U_(0x1) << PMC_FSMR_FSTT9_Pos)                     /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT9(value)                 (PMC_FSMR_FSTT9_Msk & ((value) << PMC_FSMR_FSTT9_Pos))
#define PMC_FSMR_FSTT10_Pos                   _U_(10)                                              /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Position */
#define PMC_FSMR_FSTT10_Msk                   (_U_(0x1) << PMC_FSMR_FSTT10_Pos)                    /**< (PMC_FSMR) Fast Startup from PIOBU0-7 Input Enable Mask */
#define PMC_FSMR_FSTT10(value)                (PMC_FSMR_FSTT10_Msk & ((value) << PMC_FSMR_FSTT10_Pos))
#define PMC_FSMR_RTCAL_Pos                    _U_(17)                                              /**< (PMC_FSMR) Fast Startup from RTC Alarm Enable Position */
#define PMC_FSMR_RTCAL_Msk                    (_U_(0x1) << PMC_FSMR_RTCAL_Pos)                     /**< (PMC_FSMR) Fast Startup from RTC Alarm Enable Mask */
#define PMC_FSMR_RTCAL(value)                 (PMC_FSMR_RTCAL_Msk & ((value) << PMC_FSMR_RTCAL_Pos))
#define PMC_FSMR_USBAL_Pos                    _U_(18)                                              /**< (PMC_FSMR) Fast Startup from USB Resume Enable Position */
#define PMC_FSMR_USBAL_Msk                    (_U_(0x1) << PMC_FSMR_USBAL_Pos)                     /**< (PMC_FSMR) Fast Startup from USB Resume Enable Mask */
#define PMC_FSMR_USBAL(value)                 (PMC_FSMR_USBAL_Msk & ((value) << PMC_FSMR_USBAL_Pos))
#define PMC_FSMR_SDMMC_CD_Pos                 _U_(19)                                              /**< (PMC_FSMR) Fast Startup from SDMMC Card Detect Enable Position */
#define PMC_FSMR_SDMMC_CD_Msk                 (_U_(0x1) << PMC_FSMR_SDMMC_CD_Pos)                  /**< (PMC_FSMR) Fast Startup from SDMMC Card Detect Enable Mask */
#define PMC_FSMR_SDMMC_CD(value)              (PMC_FSMR_SDMMC_CD_Msk & ((value) << PMC_FSMR_SDMMC_CD_Pos))
#define PMC_FSMR_LPM_Pos                      _U_(20)                                              /**< (PMC_FSMR) Low-power Mode Position */
#define PMC_FSMR_LPM_Msk                      (_U_(0x1) << PMC_FSMR_LPM_Pos)                       /**< (PMC_FSMR) Low-power Mode Mask */
#define PMC_FSMR_LPM(value)                   (PMC_FSMR_LPM_Msk & ((value) << PMC_FSMR_LPM_Pos))  
#define PMC_FSMR_RXLP_MCE_Pos                 _U_(24)                                              /**< (PMC_FSMR) Fast Startup from Backup UART Receive Match Condition Enable Position */
#define PMC_FSMR_RXLP_MCE_Msk                 (_U_(0x1) << PMC_FSMR_RXLP_MCE_Pos)                  /**< (PMC_FSMR) Fast Startup from Backup UART Receive Match Condition Enable Mask */
#define PMC_FSMR_RXLP_MCE(value)              (PMC_FSMR_RXLP_MCE_Msk & ((value) << PMC_FSMR_RXLP_MCE_Pos))
#define PMC_FSMR_ACC_CE_Pos                   _U_(25)                                              /**< (PMC_FSMR) Fast Startup from Analog Comparator Controller Comparison Enable Position */
#define PMC_FSMR_ACC_CE_Msk                   (_U_(0x1) << PMC_FSMR_ACC_CE_Pos)                    /**< (PMC_FSMR) Fast Startup from Analog Comparator Controller Comparison Enable Mask */
#define PMC_FSMR_ACC_CE(value)                (PMC_FSMR_ACC_CE_Msk & ((value) << PMC_FSMR_ACC_CE_Pos))
#define PMC_FSMR_Msk                          _U_(0x031E07FF)                                      /**< (PMC_FSMR) Register Mask  */

#define PMC_FSMR_FSTT_Pos                     _U_(0)                                               /**< (PMC_FSMR Position) Fast Startup from WKUP Pin Enable */
#define PMC_FSMR_FSTT_Msk                     (_U_(0x7FF) << PMC_FSMR_FSTT_Pos)                    /**< (PMC_FSMR Mask) FSTT */
#define PMC_FSMR_FSTT(value)                  (PMC_FSMR_FSTT_Msk & ((value) << PMC_FSMR_FSTT_Pos)) 

/* -------- PMC_FSPR : (PMC Offset: 0x74) (R/W 32) Fast Startup Polarity Register -------- */
#define PMC_FSPR_FSTP0_Pos                    _U_(0)                                               /**< (PMC_FSPR) WKUP Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP0_Msk                    (_U_(0x1) << PMC_FSPR_FSTP0_Pos)                     /**< (PMC_FSPR) WKUP Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP0(value)                 (PMC_FSPR_FSTP0_Msk & ((value) << PMC_FSPR_FSTP0_Pos))
#define PMC_FSPR_FSTP1_Pos                    _U_(1)                                               /**< (PMC_FSPR) Security Module Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP1_Msk                    (_U_(0x1) << PMC_FSPR_FSTP1_Pos)                     /**< (PMC_FSPR) Security Module Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP1(value)                 (PMC_FSPR_FSTP1_Msk & ((value) << PMC_FSPR_FSTP1_Pos))
#define PMC_FSPR_FSTP2_Pos                    _U_(2)                                               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP2_Msk                    (_U_(0x1) << PMC_FSPR_FSTP2_Pos)                     /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP2(value)                 (PMC_FSPR_FSTP2_Msk & ((value) << PMC_FSPR_FSTP2_Pos))
#define PMC_FSPR_FSTP3_Pos                    _U_(3)                                               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP3_Msk                    (_U_(0x1) << PMC_FSPR_FSTP3_Pos)                     /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP3(value)                 (PMC_FSPR_FSTP3_Msk & ((value) << PMC_FSPR_FSTP3_Pos))
#define PMC_FSPR_FSTP4_Pos                    _U_(4)                                               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP4_Msk                    (_U_(0x1) << PMC_FSPR_FSTP4_Pos)                     /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP4(value)                 (PMC_FSPR_FSTP4_Msk & ((value) << PMC_FSPR_FSTP4_Pos))
#define PMC_FSPR_FSTP5_Pos                    _U_(5)                                               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP5_Msk                    (_U_(0x1) << PMC_FSPR_FSTP5_Pos)                     /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP5(value)                 (PMC_FSPR_FSTP5_Msk & ((value) << PMC_FSPR_FSTP5_Pos))
#define PMC_FSPR_FSTP6_Pos                    _U_(6)                                               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP6_Msk                    (_U_(0x1) << PMC_FSPR_FSTP6_Pos)                     /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP6(value)                 (PMC_FSPR_FSTP6_Msk & ((value) << PMC_FSPR_FSTP6_Pos))
#define PMC_FSPR_FSTP7_Pos                    _U_(7)                                               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP7_Msk                    (_U_(0x1) << PMC_FSPR_FSTP7_Pos)                     /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP7(value)                 (PMC_FSPR_FSTP7_Msk & ((value) << PMC_FSPR_FSTP7_Pos))
#define PMC_FSPR_FSTP8_Pos                    _U_(8)                                               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP8_Msk                    (_U_(0x1) << PMC_FSPR_FSTP8_Pos)                     /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP8(value)                 (PMC_FSPR_FSTP8_Msk & ((value) << PMC_FSPR_FSTP8_Pos))
#define PMC_FSPR_FSTP9_Pos                    _U_(9)                                               /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP9_Msk                    (_U_(0x1) << PMC_FSPR_FSTP9_Pos)                     /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP9(value)                 (PMC_FSPR_FSTP9_Msk & ((value) << PMC_FSPR_FSTP9_Pos))
#define PMC_FSPR_FSTP10_Pos                   _U_(10)                                              /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Position */
#define PMC_FSPR_FSTP10_Msk                   (_U_(0x1) << PMC_FSPR_FSTP10_Pos)                    /**< (PMC_FSPR) PIOBU0-7 Pin Polarity for Fast Startup Mask */
#define PMC_FSPR_FSTP10(value)                (PMC_FSPR_FSTP10_Msk & ((value) << PMC_FSPR_FSTP10_Pos))
#define PMC_FSPR_Msk                          _U_(0x000007FF)                                      /**< (PMC_FSPR) Register Mask  */

#define PMC_FSPR_FSTP_Pos                     _U_(0)                                               /**< (PMC_FSPR Position) PIOBUx-7 Pin Polarity for Fast Startup */
#define PMC_FSPR_FSTP_Msk                     (_U_(0x7FF) << PMC_FSPR_FSTP_Pos)                    /**< (PMC_FSPR Mask) FSTP */
#define PMC_FSPR_FSTP(value)                  (PMC_FSPR_FSTP_Msk & ((value) << PMC_FSPR_FSTP_Pos)) 

/* -------- PMC_FOCR : (PMC Offset: 0x78) ( /W 32) Fault Output Clear Register -------- */
#define PMC_FOCR_FOCLR_Pos                    _U_(0)                                               /**< (PMC_FOCR) Fault Output Clear Position */
#define PMC_FOCR_FOCLR_Msk                    (_U_(0x1) << PMC_FOCR_FOCLR_Pos)                     /**< (PMC_FOCR) Fault Output Clear Mask */
#define PMC_FOCR_FOCLR(value)                 (PMC_FOCR_FOCLR_Msk & ((value) << PMC_FOCR_FOCLR_Pos))
#define PMC_FOCR_Msk                          _U_(0x00000001)                                      /**< (PMC_FOCR) Register Mask  */


/* -------- PMC_PLLICPR : (PMC Offset: 0x80) (R/W 32) PLL Charge Pump Current Register -------- */
#define PMC_PLLICPR_ICP_PLLA_Pos              _U_(0)                                               /**< (PMC_PLLICPR) Charge Pump Current Position */
#define PMC_PLLICPR_ICP_PLLA_Msk              (_U_(0x3) << PMC_PLLICPR_ICP_PLLA_Pos)               /**< (PMC_PLLICPR) Charge Pump Current Mask */
#define PMC_PLLICPR_ICP_PLLA(value)           (PMC_PLLICPR_ICP_PLLA_Msk & ((value) << PMC_PLLICPR_ICP_PLLA_Pos))
#define PMC_PLLICPR_ICP_PLLU_Pos              _U_(16)                                              /**< (PMC_PLLICPR) Charge Pump Current PLL UTMI Position */
#define PMC_PLLICPR_ICP_PLLU_Msk              (_U_(0x3) << PMC_PLLICPR_ICP_PLLU_Pos)               /**< (PMC_PLLICPR) Charge Pump Current PLL UTMI Mask */
#define PMC_PLLICPR_ICP_PLLU(value)           (PMC_PLLICPR_ICP_PLLU_Msk & ((value) << PMC_PLLICPR_ICP_PLLU_Pos))
#define PMC_PLLICPR_IVCO_PLLU_Pos             _U_(24)                                              /**< (PMC_PLLICPR) Voltage Control Output Current PLL UTMI Position */
#define PMC_PLLICPR_IVCO_PLLU_Msk             (_U_(0x3) << PMC_PLLICPR_IVCO_PLLU_Pos)              /**< (PMC_PLLICPR) Voltage Control Output Current PLL UTMI Mask */
#define PMC_PLLICPR_IVCO_PLLU(value)          (PMC_PLLICPR_IVCO_PLLU_Msk & ((value) << PMC_PLLICPR_IVCO_PLLU_Pos))
#define PMC_PLLICPR_Msk                       _U_(0x03030003)                                      /**< (PMC_PLLICPR) Register Mask  */


/* -------- PMC_WPMR : (PMC Offset: 0xE4) (R/W 32) Write ProtectIon Mode Register -------- */
#define PMC_WPMR_WPEN_Pos                     _U_(0)                                               /**< (PMC_WPMR) Write Protection Enable Position */
#define PMC_WPMR_WPEN_Msk                     (_U_(0x1) << PMC_WPMR_WPEN_Pos)                      /**< (PMC_WPMR) Write Protection Enable Mask */
#define PMC_WPMR_WPEN(value)                  (PMC_WPMR_WPEN_Msk & ((value) << PMC_WPMR_WPEN_Pos))
#define PMC_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (PMC_WPMR) Write Protection Key Position */
#define PMC_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << PMC_WPMR_WPKEY_Pos)                /**< (PMC_WPMR) Write Protection Key Mask */
#define PMC_WPMR_WPKEY(value)                 (PMC_WPMR_WPKEY_Msk & ((value) << PMC_WPMR_WPKEY_Pos))
#define   PMC_WPMR_WPKEY_PASSWD_Val           _U_(0x504D43)                                        /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define PMC_WPMR_WPKEY_PASSWD                 (PMC_WPMR_WPKEY_PASSWD_Val << PMC_WPMR_WPKEY_Pos)    /**< (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define PMC_WPMR_Msk                          _U_(0xFFFFFF01)                                      /**< (PMC_WPMR) Register Mask  */


/* -------- PMC_WPSR : (PMC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define PMC_WPSR_WPVS_Pos                     _U_(0)                                               /**< (PMC_WPSR) Write Protection Violation Status Position */
#define PMC_WPSR_WPVS_Msk                     (_U_(0x1) << PMC_WPSR_WPVS_Pos)                      /**< (PMC_WPSR) Write Protection Violation Status Mask */
#define PMC_WPSR_WPVS(value)                  (PMC_WPSR_WPVS_Msk & ((value) << PMC_WPSR_WPVS_Pos))
#define PMC_WPSR_WPVSRC_Pos                   _U_(8)                                               /**< (PMC_WPSR) Write Protection Violation Source Position */
#define PMC_WPSR_WPVSRC_Msk                   (_U_(0xFFFF) << PMC_WPSR_WPVSRC_Pos)                 /**< (PMC_WPSR) Write Protection Violation Source Mask */
#define PMC_WPSR_WPVSRC(value)                (PMC_WPSR_WPVSRC_Msk & ((value) << PMC_WPSR_WPVSRC_Pos))
#define PMC_WPSR_Msk                          _U_(0x00FFFF01)                                      /**< (PMC_WPSR) Register Mask  */


/* -------- PMC_PCER1 : (PMC Offset: 0x100) ( /W 32) Peripheral Clock Enable Register 1 -------- */
#define PMC_PCER1_PID32_Pos                   _U_(0)                                               /**< (PMC_PCER1) Peripheral Clock 32 Enable Position */
#define PMC_PCER1_PID32_Msk                   (_U_(0x1) << PMC_PCER1_PID32_Pos)                    /**< (PMC_PCER1) Peripheral Clock 32 Enable Mask */
#define PMC_PCER1_PID32(value)                (PMC_PCER1_PID32_Msk & ((value) << PMC_PCER1_PID32_Pos))
#define PMC_PCER1_PID33_Pos                   _U_(1)                                               /**< (PMC_PCER1) Peripheral Clock 33 Enable Position */
#define PMC_PCER1_PID33_Msk                   (_U_(0x1) << PMC_PCER1_PID33_Pos)                    /**< (PMC_PCER1) Peripheral Clock 33 Enable Mask */
#define PMC_PCER1_PID33(value)                (PMC_PCER1_PID33_Msk & ((value) << PMC_PCER1_PID33_Pos))
#define PMC_PCER1_PID34_Pos                   _U_(2)                                               /**< (PMC_PCER1) Peripheral Clock 34 Enable Position */
#define PMC_PCER1_PID34_Msk                   (_U_(0x1) << PMC_PCER1_PID34_Pos)                    /**< (PMC_PCER1) Peripheral Clock 34 Enable Mask */
#define PMC_PCER1_PID34(value)                (PMC_PCER1_PID34_Msk & ((value) << PMC_PCER1_PID34_Pos))
#define PMC_PCER1_PID35_Pos                   _U_(3)                                               /**< (PMC_PCER1) Peripheral Clock 35 Enable Position */
#define PMC_PCER1_PID35_Msk                   (_U_(0x1) << PMC_PCER1_PID35_Pos)                    /**< (PMC_PCER1) Peripheral Clock 35 Enable Mask */
#define PMC_PCER1_PID35(value)                (PMC_PCER1_PID35_Msk & ((value) << PMC_PCER1_PID35_Pos))
#define PMC_PCER1_PID36_Pos                   _U_(4)                                               /**< (PMC_PCER1) Peripheral Clock 36 Enable Position */
#define PMC_PCER1_PID36_Msk                   (_U_(0x1) << PMC_PCER1_PID36_Pos)                    /**< (PMC_PCER1) Peripheral Clock 36 Enable Mask */
#define PMC_PCER1_PID36(value)                (PMC_PCER1_PID36_Msk & ((value) << PMC_PCER1_PID36_Pos))
#define PMC_PCER1_PID37_Pos                   _U_(5)                                               /**< (PMC_PCER1) Peripheral Clock 37 Enable Position */
#define PMC_PCER1_PID37_Msk                   (_U_(0x1) << PMC_PCER1_PID37_Pos)                    /**< (PMC_PCER1) Peripheral Clock 37 Enable Mask */
#define PMC_PCER1_PID37(value)                (PMC_PCER1_PID37_Msk & ((value) << PMC_PCER1_PID37_Pos))
#define PMC_PCER1_PID38_Pos                   _U_(6)                                               /**< (PMC_PCER1) Peripheral Clock 38 Enable Position */
#define PMC_PCER1_PID38_Msk                   (_U_(0x1) << PMC_PCER1_PID38_Pos)                    /**< (PMC_PCER1) Peripheral Clock 38 Enable Mask */
#define PMC_PCER1_PID38(value)                (PMC_PCER1_PID38_Msk & ((value) << PMC_PCER1_PID38_Pos))
#define PMC_PCER1_PID39_Pos                   _U_(7)                                               /**< (PMC_PCER1) Peripheral Clock 39 Enable Position */
#define PMC_PCER1_PID39_Msk                   (_U_(0x1) << PMC_PCER1_PID39_Pos)                    /**< (PMC_PCER1) Peripheral Clock 39 Enable Mask */
#define PMC_PCER1_PID39(value)                (PMC_PCER1_PID39_Msk & ((value) << PMC_PCER1_PID39_Pos))
#define PMC_PCER1_PID40_Pos                   _U_(8)                                               /**< (PMC_PCER1) Peripheral Clock 40 Enable Position */
#define PMC_PCER1_PID40_Msk                   (_U_(0x1) << PMC_PCER1_PID40_Pos)                    /**< (PMC_PCER1) Peripheral Clock 40 Enable Mask */
#define PMC_PCER1_PID40(value)                (PMC_PCER1_PID40_Msk & ((value) << PMC_PCER1_PID40_Pos))
#define PMC_PCER1_PID41_Pos                   _U_(9)                                               /**< (PMC_PCER1) Peripheral Clock 41 Enable Position */
#define PMC_PCER1_PID41_Msk                   (_U_(0x1) << PMC_PCER1_PID41_Pos)                    /**< (PMC_PCER1) Peripheral Clock 41 Enable Mask */
#define PMC_PCER1_PID41(value)                (PMC_PCER1_PID41_Msk & ((value) << PMC_PCER1_PID41_Pos))
#define PMC_PCER1_PID42_Pos                   _U_(10)                                              /**< (PMC_PCER1) Peripheral Clock 42 Enable Position */
#define PMC_PCER1_PID42_Msk                   (_U_(0x1) << PMC_PCER1_PID42_Pos)                    /**< (PMC_PCER1) Peripheral Clock 42 Enable Mask */
#define PMC_PCER1_PID42(value)                (PMC_PCER1_PID42_Msk & ((value) << PMC_PCER1_PID42_Pos))
#define PMC_PCER1_PID43_Pos                   _U_(11)                                              /**< (PMC_PCER1) Peripheral Clock 43 Enable Position */
#define PMC_PCER1_PID43_Msk                   (_U_(0x1) << PMC_PCER1_PID43_Pos)                    /**< (PMC_PCER1) Peripheral Clock 43 Enable Mask */
#define PMC_PCER1_PID43(value)                (PMC_PCER1_PID43_Msk & ((value) << PMC_PCER1_PID43_Pos))
#define PMC_PCER1_PID44_Pos                   _U_(12)                                              /**< (PMC_PCER1) Peripheral Clock 44 Enable Position */
#define PMC_PCER1_PID44_Msk                   (_U_(0x1) << PMC_PCER1_PID44_Pos)                    /**< (PMC_PCER1) Peripheral Clock 44 Enable Mask */
#define PMC_PCER1_PID44(value)                (PMC_PCER1_PID44_Msk & ((value) << PMC_PCER1_PID44_Pos))
#define PMC_PCER1_PID45_Pos                   _U_(13)                                              /**< (PMC_PCER1) Peripheral Clock 45 Enable Position */
#define PMC_PCER1_PID45_Msk                   (_U_(0x1) << PMC_PCER1_PID45_Pos)                    /**< (PMC_PCER1) Peripheral Clock 45 Enable Mask */
#define PMC_PCER1_PID45(value)                (PMC_PCER1_PID45_Msk & ((value) << PMC_PCER1_PID45_Pos))
#define PMC_PCER1_PID46_Pos                   _U_(14)                                              /**< (PMC_PCER1) Peripheral Clock 46 Enable Position */
#define PMC_PCER1_PID46_Msk                   (_U_(0x1) << PMC_PCER1_PID46_Pos)                    /**< (PMC_PCER1) Peripheral Clock 46 Enable Mask */
#define PMC_PCER1_PID46(value)                (PMC_PCER1_PID46_Msk & ((value) << PMC_PCER1_PID46_Pos))
#define PMC_PCER1_PID47_Pos                   _U_(15)                                              /**< (PMC_PCER1) Peripheral Clock 47 Enable Position */
#define PMC_PCER1_PID47_Msk                   (_U_(0x1) << PMC_PCER1_PID47_Pos)                    /**< (PMC_PCER1) Peripheral Clock 47 Enable Mask */
#define PMC_PCER1_PID47(value)                (PMC_PCER1_PID47_Msk & ((value) << PMC_PCER1_PID47_Pos))
#define PMC_PCER1_PID48_Pos                   _U_(16)                                              /**< (PMC_PCER1) Peripheral Clock 48 Enable Position */
#define PMC_PCER1_PID48_Msk                   (_U_(0x1) << PMC_PCER1_PID48_Pos)                    /**< (PMC_PCER1) Peripheral Clock 48 Enable Mask */
#define PMC_PCER1_PID48(value)                (PMC_PCER1_PID48_Msk & ((value) << PMC_PCER1_PID48_Pos))
#define PMC_PCER1_PID49_Pos                   _U_(17)                                              /**< (PMC_PCER1) Peripheral Clock 49 Enable Position */
#define PMC_PCER1_PID49_Msk                   (_U_(0x1) << PMC_PCER1_PID49_Pos)                    /**< (PMC_PCER1) Peripheral Clock 49 Enable Mask */
#define PMC_PCER1_PID49(value)                (PMC_PCER1_PID49_Msk & ((value) << PMC_PCER1_PID49_Pos))
#define PMC_PCER1_PID50_Pos                   _U_(18)                                              /**< (PMC_PCER1) Peripheral Clock 50 Enable Position */
#define PMC_PCER1_PID50_Msk                   (_U_(0x1) << PMC_PCER1_PID50_Pos)                    /**< (PMC_PCER1) Peripheral Clock 50 Enable Mask */
#define PMC_PCER1_PID50(value)                (PMC_PCER1_PID50_Msk & ((value) << PMC_PCER1_PID50_Pos))
#define PMC_PCER1_PID51_Pos                   _U_(19)                                              /**< (PMC_PCER1) Peripheral Clock 51 Enable Position */
#define PMC_PCER1_PID51_Msk                   (_U_(0x1) << PMC_PCER1_PID51_Pos)                    /**< (PMC_PCER1) Peripheral Clock 51 Enable Mask */
#define PMC_PCER1_PID51(value)                (PMC_PCER1_PID51_Msk & ((value) << PMC_PCER1_PID51_Pos))
#define PMC_PCER1_PID52_Pos                   _U_(20)                                              /**< (PMC_PCER1) Peripheral Clock 52 Enable Position */
#define PMC_PCER1_PID52_Msk                   (_U_(0x1) << PMC_PCER1_PID52_Pos)                    /**< (PMC_PCER1) Peripheral Clock 52 Enable Mask */
#define PMC_PCER1_PID52(value)                (PMC_PCER1_PID52_Msk & ((value) << PMC_PCER1_PID52_Pos))
#define PMC_PCER1_PID53_Pos                   _U_(21)                                              /**< (PMC_PCER1) Peripheral Clock 53 Enable Position */
#define PMC_PCER1_PID53_Msk                   (_U_(0x1) << PMC_PCER1_PID53_Pos)                    /**< (PMC_PCER1) Peripheral Clock 53 Enable Mask */
#define PMC_PCER1_PID53(value)                (PMC_PCER1_PID53_Msk & ((value) << PMC_PCER1_PID53_Pos))
#define PMC_PCER1_PID54_Pos                   _U_(22)                                              /**< (PMC_PCER1) Peripheral Clock 54 Enable Position */
#define PMC_PCER1_PID54_Msk                   (_U_(0x1) << PMC_PCER1_PID54_Pos)                    /**< (PMC_PCER1) Peripheral Clock 54 Enable Mask */
#define PMC_PCER1_PID54(value)                (PMC_PCER1_PID54_Msk & ((value) << PMC_PCER1_PID54_Pos))
#define PMC_PCER1_PID55_Pos                   _U_(23)                                              /**< (PMC_PCER1) Peripheral Clock 55 Enable Position */
#define PMC_PCER1_PID55_Msk                   (_U_(0x1) << PMC_PCER1_PID55_Pos)                    /**< (PMC_PCER1) Peripheral Clock 55 Enable Mask */
#define PMC_PCER1_PID55(value)                (PMC_PCER1_PID55_Msk & ((value) << PMC_PCER1_PID55_Pos))
#define PMC_PCER1_PID56_Pos                   _U_(24)                                              /**< (PMC_PCER1) Peripheral Clock 56 Enable Position */
#define PMC_PCER1_PID56_Msk                   (_U_(0x1) << PMC_PCER1_PID56_Pos)                    /**< (PMC_PCER1) Peripheral Clock 56 Enable Mask */
#define PMC_PCER1_PID56(value)                (PMC_PCER1_PID56_Msk & ((value) << PMC_PCER1_PID56_Pos))
#define PMC_PCER1_PID57_Pos                   _U_(25)                                              /**< (PMC_PCER1) Peripheral Clock 57 Enable Position */
#define PMC_PCER1_PID57_Msk                   (_U_(0x1) << PMC_PCER1_PID57_Pos)                    /**< (PMC_PCER1) Peripheral Clock 57 Enable Mask */
#define PMC_PCER1_PID57(value)                (PMC_PCER1_PID57_Msk & ((value) << PMC_PCER1_PID57_Pos))
#define PMC_PCER1_PID58_Pos                   _U_(26)                                              /**< (PMC_PCER1) Peripheral Clock 58 Enable Position */
#define PMC_PCER1_PID58_Msk                   (_U_(0x1) << PMC_PCER1_PID58_Pos)                    /**< (PMC_PCER1) Peripheral Clock 58 Enable Mask */
#define PMC_PCER1_PID58(value)                (PMC_PCER1_PID58_Msk & ((value) << PMC_PCER1_PID58_Pos))
#define PMC_PCER1_PID59_Pos                   _U_(27)                                              /**< (PMC_PCER1) Peripheral Clock 59 Enable Position */
#define PMC_PCER1_PID59_Msk                   (_U_(0x1) << PMC_PCER1_PID59_Pos)                    /**< (PMC_PCER1) Peripheral Clock 59 Enable Mask */
#define PMC_PCER1_PID59(value)                (PMC_PCER1_PID59_Msk & ((value) << PMC_PCER1_PID59_Pos))
#define PMC_PCER1_PID60_Pos                   _U_(28)                                              /**< (PMC_PCER1) Peripheral Clock 60 Enable Position */
#define PMC_PCER1_PID60_Msk                   (_U_(0x1) << PMC_PCER1_PID60_Pos)                    /**< (PMC_PCER1) Peripheral Clock 60 Enable Mask */
#define PMC_PCER1_PID60(value)                (PMC_PCER1_PID60_Msk & ((value) << PMC_PCER1_PID60_Pos))
#define PMC_PCER1_PID61_Pos                   _U_(29)                                              /**< (PMC_PCER1) Peripheral Clock 61 Enable Position */
#define PMC_PCER1_PID61_Msk                   (_U_(0x1) << PMC_PCER1_PID61_Pos)                    /**< (PMC_PCER1) Peripheral Clock 61 Enable Mask */
#define PMC_PCER1_PID61(value)                (PMC_PCER1_PID61_Msk & ((value) << PMC_PCER1_PID61_Pos))
#define PMC_PCER1_PID62_Pos                   _U_(30)                                              /**< (PMC_PCER1) Peripheral Clock 62 Enable Position */
#define PMC_PCER1_PID62_Msk                   (_U_(0x1) << PMC_PCER1_PID62_Pos)                    /**< (PMC_PCER1) Peripheral Clock 62 Enable Mask */
#define PMC_PCER1_PID62(value)                (PMC_PCER1_PID62_Msk & ((value) << PMC_PCER1_PID62_Pos))
#define PMC_PCER1_PID63_Pos                   _U_(31)                                              /**< (PMC_PCER1) Peripheral Clock 63 Enable Position */
#define PMC_PCER1_PID63_Msk                   (_U_(0x1) << PMC_PCER1_PID63_Pos)                    /**< (PMC_PCER1) Peripheral Clock 63 Enable Mask */
#define PMC_PCER1_PID63(value)                (PMC_PCER1_PID63_Msk & ((value) << PMC_PCER1_PID63_Pos))
#define PMC_PCER1_Msk                         _U_(0xFFFFFFFF)                                      /**< (PMC_PCER1) Register Mask  */

#define PMC_PCER1_PID_Pos                     _U_(0)                                               /**< (PMC_PCER1 Position) Peripheral Clock 63 Enable */
#define PMC_PCER1_PID_Msk                     (_U_(0xFFFFFFFF) << PMC_PCER1_PID_Pos)               /**< (PMC_PCER1 Mask) PID */
#define PMC_PCER1_PID(value)                  (PMC_PCER1_PID_Msk & ((value) << PMC_PCER1_PID_Pos)) 

/* -------- PMC_PCDR1 : (PMC Offset: 0x104) ( /W 32) Peripheral Clock Disable Register 1 -------- */
#define PMC_PCDR1_PID32_Pos                   _U_(0)                                               /**< (PMC_PCDR1) Peripheral Clock 32 Disable Position */
#define PMC_PCDR1_PID32_Msk                   (_U_(0x1) << PMC_PCDR1_PID32_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 32 Disable Mask */
#define PMC_PCDR1_PID32(value)                (PMC_PCDR1_PID32_Msk & ((value) << PMC_PCDR1_PID32_Pos))
#define PMC_PCDR1_PID33_Pos                   _U_(1)                                               /**< (PMC_PCDR1) Peripheral Clock 33 Disable Position */
#define PMC_PCDR1_PID33_Msk                   (_U_(0x1) << PMC_PCDR1_PID33_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 33 Disable Mask */
#define PMC_PCDR1_PID33(value)                (PMC_PCDR1_PID33_Msk & ((value) << PMC_PCDR1_PID33_Pos))
#define PMC_PCDR1_PID34_Pos                   _U_(2)                                               /**< (PMC_PCDR1) Peripheral Clock 34 Disable Position */
#define PMC_PCDR1_PID34_Msk                   (_U_(0x1) << PMC_PCDR1_PID34_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 34 Disable Mask */
#define PMC_PCDR1_PID34(value)                (PMC_PCDR1_PID34_Msk & ((value) << PMC_PCDR1_PID34_Pos))
#define PMC_PCDR1_PID35_Pos                   _U_(3)                                               /**< (PMC_PCDR1) Peripheral Clock 35 Disable Position */
#define PMC_PCDR1_PID35_Msk                   (_U_(0x1) << PMC_PCDR1_PID35_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 35 Disable Mask */
#define PMC_PCDR1_PID35(value)                (PMC_PCDR1_PID35_Msk & ((value) << PMC_PCDR1_PID35_Pos))
#define PMC_PCDR1_PID36_Pos                   _U_(4)                                               /**< (PMC_PCDR1) Peripheral Clock 36 Disable Position */
#define PMC_PCDR1_PID36_Msk                   (_U_(0x1) << PMC_PCDR1_PID36_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 36 Disable Mask */
#define PMC_PCDR1_PID36(value)                (PMC_PCDR1_PID36_Msk & ((value) << PMC_PCDR1_PID36_Pos))
#define PMC_PCDR1_PID37_Pos                   _U_(5)                                               /**< (PMC_PCDR1) Peripheral Clock 37 Disable Position */
#define PMC_PCDR1_PID37_Msk                   (_U_(0x1) << PMC_PCDR1_PID37_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 37 Disable Mask */
#define PMC_PCDR1_PID37(value)                (PMC_PCDR1_PID37_Msk & ((value) << PMC_PCDR1_PID37_Pos))
#define PMC_PCDR1_PID38_Pos                   _U_(6)                                               /**< (PMC_PCDR1) Peripheral Clock 38 Disable Position */
#define PMC_PCDR1_PID38_Msk                   (_U_(0x1) << PMC_PCDR1_PID38_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 38 Disable Mask */
#define PMC_PCDR1_PID38(value)                (PMC_PCDR1_PID38_Msk & ((value) << PMC_PCDR1_PID38_Pos))
#define PMC_PCDR1_PID39_Pos                   _U_(7)                                               /**< (PMC_PCDR1) Peripheral Clock 39 Disable Position */
#define PMC_PCDR1_PID39_Msk                   (_U_(0x1) << PMC_PCDR1_PID39_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 39 Disable Mask */
#define PMC_PCDR1_PID39(value)                (PMC_PCDR1_PID39_Msk & ((value) << PMC_PCDR1_PID39_Pos))
#define PMC_PCDR1_PID40_Pos                   _U_(8)                                               /**< (PMC_PCDR1) Peripheral Clock 40 Disable Position */
#define PMC_PCDR1_PID40_Msk                   (_U_(0x1) << PMC_PCDR1_PID40_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 40 Disable Mask */
#define PMC_PCDR1_PID40(value)                (PMC_PCDR1_PID40_Msk & ((value) << PMC_PCDR1_PID40_Pos))
#define PMC_PCDR1_PID41_Pos                   _U_(9)                                               /**< (PMC_PCDR1) Peripheral Clock 41 Disable Position */
#define PMC_PCDR1_PID41_Msk                   (_U_(0x1) << PMC_PCDR1_PID41_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 41 Disable Mask */
#define PMC_PCDR1_PID41(value)                (PMC_PCDR1_PID41_Msk & ((value) << PMC_PCDR1_PID41_Pos))
#define PMC_PCDR1_PID42_Pos                   _U_(10)                                              /**< (PMC_PCDR1) Peripheral Clock 42 Disable Position */
#define PMC_PCDR1_PID42_Msk                   (_U_(0x1) << PMC_PCDR1_PID42_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 42 Disable Mask */
#define PMC_PCDR1_PID42(value)                (PMC_PCDR1_PID42_Msk & ((value) << PMC_PCDR1_PID42_Pos))
#define PMC_PCDR1_PID43_Pos                   _U_(11)                                              /**< (PMC_PCDR1) Peripheral Clock 43 Disable Position */
#define PMC_PCDR1_PID43_Msk                   (_U_(0x1) << PMC_PCDR1_PID43_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 43 Disable Mask */
#define PMC_PCDR1_PID43(value)                (PMC_PCDR1_PID43_Msk & ((value) << PMC_PCDR1_PID43_Pos))
#define PMC_PCDR1_PID44_Pos                   _U_(12)                                              /**< (PMC_PCDR1) Peripheral Clock 44 Disable Position */
#define PMC_PCDR1_PID44_Msk                   (_U_(0x1) << PMC_PCDR1_PID44_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 44 Disable Mask */
#define PMC_PCDR1_PID44(value)                (PMC_PCDR1_PID44_Msk & ((value) << PMC_PCDR1_PID44_Pos))
#define PMC_PCDR1_PID45_Pos                   _U_(13)                                              /**< (PMC_PCDR1) Peripheral Clock 45 Disable Position */
#define PMC_PCDR1_PID45_Msk                   (_U_(0x1) << PMC_PCDR1_PID45_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 45 Disable Mask */
#define PMC_PCDR1_PID45(value)                (PMC_PCDR1_PID45_Msk & ((value) << PMC_PCDR1_PID45_Pos))
#define PMC_PCDR1_PID46_Pos                   _U_(14)                                              /**< (PMC_PCDR1) Peripheral Clock 46 Disable Position */
#define PMC_PCDR1_PID46_Msk                   (_U_(0x1) << PMC_PCDR1_PID46_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 46 Disable Mask */
#define PMC_PCDR1_PID46(value)                (PMC_PCDR1_PID46_Msk & ((value) << PMC_PCDR1_PID46_Pos))
#define PMC_PCDR1_PID47_Pos                   _U_(15)                                              /**< (PMC_PCDR1) Peripheral Clock 47 Disable Position */
#define PMC_PCDR1_PID47_Msk                   (_U_(0x1) << PMC_PCDR1_PID47_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 47 Disable Mask */
#define PMC_PCDR1_PID47(value)                (PMC_PCDR1_PID47_Msk & ((value) << PMC_PCDR1_PID47_Pos))
#define PMC_PCDR1_PID48_Pos                   _U_(16)                                              /**< (PMC_PCDR1) Peripheral Clock 48 Disable Position */
#define PMC_PCDR1_PID48_Msk                   (_U_(0x1) << PMC_PCDR1_PID48_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 48 Disable Mask */
#define PMC_PCDR1_PID48(value)                (PMC_PCDR1_PID48_Msk & ((value) << PMC_PCDR1_PID48_Pos))
#define PMC_PCDR1_PID49_Pos                   _U_(17)                                              /**< (PMC_PCDR1) Peripheral Clock 49 Disable Position */
#define PMC_PCDR1_PID49_Msk                   (_U_(0x1) << PMC_PCDR1_PID49_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 49 Disable Mask */
#define PMC_PCDR1_PID49(value)                (PMC_PCDR1_PID49_Msk & ((value) << PMC_PCDR1_PID49_Pos))
#define PMC_PCDR1_PID50_Pos                   _U_(18)                                              /**< (PMC_PCDR1) Peripheral Clock 50 Disable Position */
#define PMC_PCDR1_PID50_Msk                   (_U_(0x1) << PMC_PCDR1_PID50_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 50 Disable Mask */
#define PMC_PCDR1_PID50(value)                (PMC_PCDR1_PID50_Msk & ((value) << PMC_PCDR1_PID50_Pos))
#define PMC_PCDR1_PID51_Pos                   _U_(19)                                              /**< (PMC_PCDR1) Peripheral Clock 51 Disable Position */
#define PMC_PCDR1_PID51_Msk                   (_U_(0x1) << PMC_PCDR1_PID51_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 51 Disable Mask */
#define PMC_PCDR1_PID51(value)                (PMC_PCDR1_PID51_Msk & ((value) << PMC_PCDR1_PID51_Pos))
#define PMC_PCDR1_PID52_Pos                   _U_(20)                                              /**< (PMC_PCDR1) Peripheral Clock 52 Disable Position */
#define PMC_PCDR1_PID52_Msk                   (_U_(0x1) << PMC_PCDR1_PID52_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 52 Disable Mask */
#define PMC_PCDR1_PID52(value)                (PMC_PCDR1_PID52_Msk & ((value) << PMC_PCDR1_PID52_Pos))
#define PMC_PCDR1_PID53_Pos                   _U_(21)                                              /**< (PMC_PCDR1) Peripheral Clock 53 Disable Position */
#define PMC_PCDR1_PID53_Msk                   (_U_(0x1) << PMC_PCDR1_PID53_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 53 Disable Mask */
#define PMC_PCDR1_PID53(value)                (PMC_PCDR1_PID53_Msk & ((value) << PMC_PCDR1_PID53_Pos))
#define PMC_PCDR1_PID54_Pos                   _U_(22)                                              /**< (PMC_PCDR1) Peripheral Clock 54 Disable Position */
#define PMC_PCDR1_PID54_Msk                   (_U_(0x1) << PMC_PCDR1_PID54_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 54 Disable Mask */
#define PMC_PCDR1_PID54(value)                (PMC_PCDR1_PID54_Msk & ((value) << PMC_PCDR1_PID54_Pos))
#define PMC_PCDR1_PID55_Pos                   _U_(23)                                              /**< (PMC_PCDR1) Peripheral Clock 55 Disable Position */
#define PMC_PCDR1_PID55_Msk                   (_U_(0x1) << PMC_PCDR1_PID55_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 55 Disable Mask */
#define PMC_PCDR1_PID55(value)                (PMC_PCDR1_PID55_Msk & ((value) << PMC_PCDR1_PID55_Pos))
#define PMC_PCDR1_PID56_Pos                   _U_(24)                                              /**< (PMC_PCDR1) Peripheral Clock 56 Disable Position */
#define PMC_PCDR1_PID56_Msk                   (_U_(0x1) << PMC_PCDR1_PID56_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 56 Disable Mask */
#define PMC_PCDR1_PID56(value)                (PMC_PCDR1_PID56_Msk & ((value) << PMC_PCDR1_PID56_Pos))
#define PMC_PCDR1_PID57_Pos                   _U_(25)                                              /**< (PMC_PCDR1) Peripheral Clock 57 Disable Position */
#define PMC_PCDR1_PID57_Msk                   (_U_(0x1) << PMC_PCDR1_PID57_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 57 Disable Mask */
#define PMC_PCDR1_PID57(value)                (PMC_PCDR1_PID57_Msk & ((value) << PMC_PCDR1_PID57_Pos))
#define PMC_PCDR1_PID58_Pos                   _U_(26)                                              /**< (PMC_PCDR1) Peripheral Clock 58 Disable Position */
#define PMC_PCDR1_PID58_Msk                   (_U_(0x1) << PMC_PCDR1_PID58_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 58 Disable Mask */
#define PMC_PCDR1_PID58(value)                (PMC_PCDR1_PID58_Msk & ((value) << PMC_PCDR1_PID58_Pos))
#define PMC_PCDR1_PID59_Pos                   _U_(27)                                              /**< (PMC_PCDR1) Peripheral Clock 59 Disable Position */
#define PMC_PCDR1_PID59_Msk                   (_U_(0x1) << PMC_PCDR1_PID59_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 59 Disable Mask */
#define PMC_PCDR1_PID59(value)                (PMC_PCDR1_PID59_Msk & ((value) << PMC_PCDR1_PID59_Pos))
#define PMC_PCDR1_PID60_Pos                   _U_(28)                                              /**< (PMC_PCDR1) Peripheral Clock 60 Disable Position */
#define PMC_PCDR1_PID60_Msk                   (_U_(0x1) << PMC_PCDR1_PID60_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 60 Disable Mask */
#define PMC_PCDR1_PID60(value)                (PMC_PCDR1_PID60_Msk & ((value) << PMC_PCDR1_PID60_Pos))
#define PMC_PCDR1_PID61_Pos                   _U_(29)                                              /**< (PMC_PCDR1) Peripheral Clock 61 Disable Position */
#define PMC_PCDR1_PID61_Msk                   (_U_(0x1) << PMC_PCDR1_PID61_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 61 Disable Mask */
#define PMC_PCDR1_PID61(value)                (PMC_PCDR1_PID61_Msk & ((value) << PMC_PCDR1_PID61_Pos))
#define PMC_PCDR1_PID62_Pos                   _U_(30)                                              /**< (PMC_PCDR1) Peripheral Clock 62 Disable Position */
#define PMC_PCDR1_PID62_Msk                   (_U_(0x1) << PMC_PCDR1_PID62_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 62 Disable Mask */
#define PMC_PCDR1_PID62(value)                (PMC_PCDR1_PID62_Msk & ((value) << PMC_PCDR1_PID62_Pos))
#define PMC_PCDR1_PID63_Pos                   _U_(31)                                              /**< (PMC_PCDR1) Peripheral Clock 63 Disable Position */
#define PMC_PCDR1_PID63_Msk                   (_U_(0x1) << PMC_PCDR1_PID63_Pos)                    /**< (PMC_PCDR1) Peripheral Clock 63 Disable Mask */
#define PMC_PCDR1_PID63(value)                (PMC_PCDR1_PID63_Msk & ((value) << PMC_PCDR1_PID63_Pos))
#define PMC_PCDR1_Msk                         _U_(0xFFFFFFFF)                                      /**< (PMC_PCDR1) Register Mask  */

#define PMC_PCDR1_PID_Pos                     _U_(0)                                               /**< (PMC_PCDR1 Position) Peripheral Clock 63 Disable */
#define PMC_PCDR1_PID_Msk                     (_U_(0xFFFFFFFF) << PMC_PCDR1_PID_Pos)               /**< (PMC_PCDR1 Mask) PID */
#define PMC_PCDR1_PID(value)                  (PMC_PCDR1_PID_Msk & ((value) << PMC_PCDR1_PID_Pos)) 

/* -------- PMC_PCSR1 : (PMC Offset: 0x108) ( R/ 32) Peripheral Clock Status Register 1 -------- */
#define PMC_PCSR1_PID32_Pos                   _U_(0)                                               /**< (PMC_PCSR1) Peripheral Clock 32 Status Position */
#define PMC_PCSR1_PID32_Msk                   (_U_(0x1) << PMC_PCSR1_PID32_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 32 Status Mask */
#define PMC_PCSR1_PID32(value)                (PMC_PCSR1_PID32_Msk & ((value) << PMC_PCSR1_PID32_Pos))
#define PMC_PCSR1_PID33_Pos                   _U_(1)                                               /**< (PMC_PCSR1) Peripheral Clock 33 Status Position */
#define PMC_PCSR1_PID33_Msk                   (_U_(0x1) << PMC_PCSR1_PID33_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 33 Status Mask */
#define PMC_PCSR1_PID33(value)                (PMC_PCSR1_PID33_Msk & ((value) << PMC_PCSR1_PID33_Pos))
#define PMC_PCSR1_PID34_Pos                   _U_(2)                                               /**< (PMC_PCSR1) Peripheral Clock 34 Status Position */
#define PMC_PCSR1_PID34_Msk                   (_U_(0x1) << PMC_PCSR1_PID34_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 34 Status Mask */
#define PMC_PCSR1_PID34(value)                (PMC_PCSR1_PID34_Msk & ((value) << PMC_PCSR1_PID34_Pos))
#define PMC_PCSR1_PID35_Pos                   _U_(3)                                               /**< (PMC_PCSR1) Peripheral Clock 35 Status Position */
#define PMC_PCSR1_PID35_Msk                   (_U_(0x1) << PMC_PCSR1_PID35_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 35 Status Mask */
#define PMC_PCSR1_PID35(value)                (PMC_PCSR1_PID35_Msk & ((value) << PMC_PCSR1_PID35_Pos))
#define PMC_PCSR1_PID36_Pos                   _U_(4)                                               /**< (PMC_PCSR1) Peripheral Clock 36 Status Position */
#define PMC_PCSR1_PID36_Msk                   (_U_(0x1) << PMC_PCSR1_PID36_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 36 Status Mask */
#define PMC_PCSR1_PID36(value)                (PMC_PCSR1_PID36_Msk & ((value) << PMC_PCSR1_PID36_Pos))
#define PMC_PCSR1_PID37_Pos                   _U_(5)                                               /**< (PMC_PCSR1) Peripheral Clock 37 Status Position */
#define PMC_PCSR1_PID37_Msk                   (_U_(0x1) << PMC_PCSR1_PID37_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 37 Status Mask */
#define PMC_PCSR1_PID37(value)                (PMC_PCSR1_PID37_Msk & ((value) << PMC_PCSR1_PID37_Pos))
#define PMC_PCSR1_PID38_Pos                   _U_(6)                                               /**< (PMC_PCSR1) Peripheral Clock 38 Status Position */
#define PMC_PCSR1_PID38_Msk                   (_U_(0x1) << PMC_PCSR1_PID38_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 38 Status Mask */
#define PMC_PCSR1_PID38(value)                (PMC_PCSR1_PID38_Msk & ((value) << PMC_PCSR1_PID38_Pos))
#define PMC_PCSR1_PID39_Pos                   _U_(7)                                               /**< (PMC_PCSR1) Peripheral Clock 39 Status Position */
#define PMC_PCSR1_PID39_Msk                   (_U_(0x1) << PMC_PCSR1_PID39_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 39 Status Mask */
#define PMC_PCSR1_PID39(value)                (PMC_PCSR1_PID39_Msk & ((value) << PMC_PCSR1_PID39_Pos))
#define PMC_PCSR1_PID40_Pos                   _U_(8)                                               /**< (PMC_PCSR1) Peripheral Clock 40 Status Position */
#define PMC_PCSR1_PID40_Msk                   (_U_(0x1) << PMC_PCSR1_PID40_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 40 Status Mask */
#define PMC_PCSR1_PID40(value)                (PMC_PCSR1_PID40_Msk & ((value) << PMC_PCSR1_PID40_Pos))
#define PMC_PCSR1_PID41_Pos                   _U_(9)                                               /**< (PMC_PCSR1) Peripheral Clock 41 Status Position */
#define PMC_PCSR1_PID41_Msk                   (_U_(0x1) << PMC_PCSR1_PID41_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 41 Status Mask */
#define PMC_PCSR1_PID41(value)                (PMC_PCSR1_PID41_Msk & ((value) << PMC_PCSR1_PID41_Pos))
#define PMC_PCSR1_PID42_Pos                   _U_(10)                                              /**< (PMC_PCSR1) Peripheral Clock 42 Status Position */
#define PMC_PCSR1_PID42_Msk                   (_U_(0x1) << PMC_PCSR1_PID42_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 42 Status Mask */
#define PMC_PCSR1_PID42(value)                (PMC_PCSR1_PID42_Msk & ((value) << PMC_PCSR1_PID42_Pos))
#define PMC_PCSR1_PID43_Pos                   _U_(11)                                              /**< (PMC_PCSR1) Peripheral Clock 43 Status Position */
#define PMC_PCSR1_PID43_Msk                   (_U_(0x1) << PMC_PCSR1_PID43_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 43 Status Mask */
#define PMC_PCSR1_PID43(value)                (PMC_PCSR1_PID43_Msk & ((value) << PMC_PCSR1_PID43_Pos))
#define PMC_PCSR1_PID44_Pos                   _U_(12)                                              /**< (PMC_PCSR1) Peripheral Clock 44 Status Position */
#define PMC_PCSR1_PID44_Msk                   (_U_(0x1) << PMC_PCSR1_PID44_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 44 Status Mask */
#define PMC_PCSR1_PID44(value)                (PMC_PCSR1_PID44_Msk & ((value) << PMC_PCSR1_PID44_Pos))
#define PMC_PCSR1_PID45_Pos                   _U_(13)                                              /**< (PMC_PCSR1) Peripheral Clock 45 Status Position */
#define PMC_PCSR1_PID45_Msk                   (_U_(0x1) << PMC_PCSR1_PID45_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 45 Status Mask */
#define PMC_PCSR1_PID45(value)                (PMC_PCSR1_PID45_Msk & ((value) << PMC_PCSR1_PID45_Pos))
#define PMC_PCSR1_PID46_Pos                   _U_(14)                                              /**< (PMC_PCSR1) Peripheral Clock 46 Status Position */
#define PMC_PCSR1_PID46_Msk                   (_U_(0x1) << PMC_PCSR1_PID46_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 46 Status Mask */
#define PMC_PCSR1_PID46(value)                (PMC_PCSR1_PID46_Msk & ((value) << PMC_PCSR1_PID46_Pos))
#define PMC_PCSR1_PID47_Pos                   _U_(15)                                              /**< (PMC_PCSR1) Peripheral Clock 47 Status Position */
#define PMC_PCSR1_PID47_Msk                   (_U_(0x1) << PMC_PCSR1_PID47_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 47 Status Mask */
#define PMC_PCSR1_PID47(value)                (PMC_PCSR1_PID47_Msk & ((value) << PMC_PCSR1_PID47_Pos))
#define PMC_PCSR1_PID48_Pos                   _U_(16)                                              /**< (PMC_PCSR1) Peripheral Clock 48 Status Position */
#define PMC_PCSR1_PID48_Msk                   (_U_(0x1) << PMC_PCSR1_PID48_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 48 Status Mask */
#define PMC_PCSR1_PID48(value)                (PMC_PCSR1_PID48_Msk & ((value) << PMC_PCSR1_PID48_Pos))
#define PMC_PCSR1_PID49_Pos                   _U_(17)                                              /**< (PMC_PCSR1) Peripheral Clock 49 Status Position */
#define PMC_PCSR1_PID49_Msk                   (_U_(0x1) << PMC_PCSR1_PID49_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 49 Status Mask */
#define PMC_PCSR1_PID49(value)                (PMC_PCSR1_PID49_Msk & ((value) << PMC_PCSR1_PID49_Pos))
#define PMC_PCSR1_PID50_Pos                   _U_(18)                                              /**< (PMC_PCSR1) Peripheral Clock 50 Status Position */
#define PMC_PCSR1_PID50_Msk                   (_U_(0x1) << PMC_PCSR1_PID50_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 50 Status Mask */
#define PMC_PCSR1_PID50(value)                (PMC_PCSR1_PID50_Msk & ((value) << PMC_PCSR1_PID50_Pos))
#define PMC_PCSR1_PID51_Pos                   _U_(19)                                              /**< (PMC_PCSR1) Peripheral Clock 51 Status Position */
#define PMC_PCSR1_PID51_Msk                   (_U_(0x1) << PMC_PCSR1_PID51_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 51 Status Mask */
#define PMC_PCSR1_PID51(value)                (PMC_PCSR1_PID51_Msk & ((value) << PMC_PCSR1_PID51_Pos))
#define PMC_PCSR1_PID52_Pos                   _U_(20)                                              /**< (PMC_PCSR1) Peripheral Clock 52 Status Position */
#define PMC_PCSR1_PID52_Msk                   (_U_(0x1) << PMC_PCSR1_PID52_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 52 Status Mask */
#define PMC_PCSR1_PID52(value)                (PMC_PCSR1_PID52_Msk & ((value) << PMC_PCSR1_PID52_Pos))
#define PMC_PCSR1_PID53_Pos                   _U_(21)                                              /**< (PMC_PCSR1) Peripheral Clock 53 Status Position */
#define PMC_PCSR1_PID53_Msk                   (_U_(0x1) << PMC_PCSR1_PID53_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 53 Status Mask */
#define PMC_PCSR1_PID53(value)                (PMC_PCSR1_PID53_Msk & ((value) << PMC_PCSR1_PID53_Pos))
#define PMC_PCSR1_PID54_Pos                   _U_(22)                                              /**< (PMC_PCSR1) Peripheral Clock 54 Status Position */
#define PMC_PCSR1_PID54_Msk                   (_U_(0x1) << PMC_PCSR1_PID54_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 54 Status Mask */
#define PMC_PCSR1_PID54(value)                (PMC_PCSR1_PID54_Msk & ((value) << PMC_PCSR1_PID54_Pos))
#define PMC_PCSR1_PID55_Pos                   _U_(23)                                              /**< (PMC_PCSR1) Peripheral Clock 55 Status Position */
#define PMC_PCSR1_PID55_Msk                   (_U_(0x1) << PMC_PCSR1_PID55_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 55 Status Mask */
#define PMC_PCSR1_PID55(value)                (PMC_PCSR1_PID55_Msk & ((value) << PMC_PCSR1_PID55_Pos))
#define PMC_PCSR1_PID56_Pos                   _U_(24)                                              /**< (PMC_PCSR1) Peripheral Clock 56 Status Position */
#define PMC_PCSR1_PID56_Msk                   (_U_(0x1) << PMC_PCSR1_PID56_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 56 Status Mask */
#define PMC_PCSR1_PID56(value)                (PMC_PCSR1_PID56_Msk & ((value) << PMC_PCSR1_PID56_Pos))
#define PMC_PCSR1_PID57_Pos                   _U_(25)                                              /**< (PMC_PCSR1) Peripheral Clock 57 Status Position */
#define PMC_PCSR1_PID57_Msk                   (_U_(0x1) << PMC_PCSR1_PID57_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 57 Status Mask */
#define PMC_PCSR1_PID57(value)                (PMC_PCSR1_PID57_Msk & ((value) << PMC_PCSR1_PID57_Pos))
#define PMC_PCSR1_PID58_Pos                   _U_(26)                                              /**< (PMC_PCSR1) Peripheral Clock 58 Status Position */
#define PMC_PCSR1_PID58_Msk                   (_U_(0x1) << PMC_PCSR1_PID58_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 58 Status Mask */
#define PMC_PCSR1_PID58(value)                (PMC_PCSR1_PID58_Msk & ((value) << PMC_PCSR1_PID58_Pos))
#define PMC_PCSR1_PID59_Pos                   _U_(27)                                              /**< (PMC_PCSR1) Peripheral Clock 59 Status Position */
#define PMC_PCSR1_PID59_Msk                   (_U_(0x1) << PMC_PCSR1_PID59_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 59 Status Mask */
#define PMC_PCSR1_PID59(value)                (PMC_PCSR1_PID59_Msk & ((value) << PMC_PCSR1_PID59_Pos))
#define PMC_PCSR1_PID60_Pos                   _U_(28)                                              /**< (PMC_PCSR1) Peripheral Clock 60 Status Position */
#define PMC_PCSR1_PID60_Msk                   (_U_(0x1) << PMC_PCSR1_PID60_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 60 Status Mask */
#define PMC_PCSR1_PID60(value)                (PMC_PCSR1_PID60_Msk & ((value) << PMC_PCSR1_PID60_Pos))
#define PMC_PCSR1_PID61_Pos                   _U_(29)                                              /**< (PMC_PCSR1) Peripheral Clock 61 Status Position */
#define PMC_PCSR1_PID61_Msk                   (_U_(0x1) << PMC_PCSR1_PID61_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 61 Status Mask */
#define PMC_PCSR1_PID61(value)                (PMC_PCSR1_PID61_Msk & ((value) << PMC_PCSR1_PID61_Pos))
#define PMC_PCSR1_PID62_Pos                   _U_(30)                                              /**< (PMC_PCSR1) Peripheral Clock 62 Status Position */
#define PMC_PCSR1_PID62_Msk                   (_U_(0x1) << PMC_PCSR1_PID62_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 62 Status Mask */
#define PMC_PCSR1_PID62(value)                (PMC_PCSR1_PID62_Msk & ((value) << PMC_PCSR1_PID62_Pos))
#define PMC_PCSR1_PID63_Pos                   _U_(31)                                              /**< (PMC_PCSR1) Peripheral Clock 63 Status Position */
#define PMC_PCSR1_PID63_Msk                   (_U_(0x1) << PMC_PCSR1_PID63_Pos)                    /**< (PMC_PCSR1) Peripheral Clock 63 Status Mask */
#define PMC_PCSR1_PID63(value)                (PMC_PCSR1_PID63_Msk & ((value) << PMC_PCSR1_PID63_Pos))
#define PMC_PCSR1_Msk                         _U_(0xFFFFFFFF)                                      /**< (PMC_PCSR1) Register Mask  */

#define PMC_PCSR1_PID_Pos                     _U_(0)                                               /**< (PMC_PCSR1 Position) Peripheral Clock 63 Status */
#define PMC_PCSR1_PID_Msk                     (_U_(0xFFFFFFFF) << PMC_PCSR1_PID_Pos)               /**< (PMC_PCSR1 Mask) PID */
#define PMC_PCSR1_PID(value)                  (PMC_PCSR1_PID_Msk & ((value) << PMC_PCSR1_PID_Pos)) 

/* -------- PMC_PCR : (PMC Offset: 0x10C) (R/W 32) Peripheral Control Register -------- */
#define PMC_PCR_PID_Pos                       _U_(0)                                               /**< (PMC_PCR) Peripheral ID Position */
#define PMC_PCR_PID_Msk                       (_U_(0x7F) << PMC_PCR_PID_Pos)                       /**< (PMC_PCR) Peripheral ID Mask */
#define PMC_PCR_PID(value)                    (PMC_PCR_PID_Msk & ((value) << PMC_PCR_PID_Pos))    
#define PMC_PCR_GCKCSS_Pos                    _U_(8)                                               /**< (PMC_PCR) Generic Clock Source Selection Position */
#define PMC_PCR_GCKCSS_Msk                    (_U_(0x7) << PMC_PCR_GCKCSS_Pos)                     /**< (PMC_PCR) Generic Clock Source Selection Mask */
#define PMC_PCR_GCKCSS(value)                 (PMC_PCR_GCKCSS_Msk & ((value) << PMC_PCR_GCKCSS_Pos))
#define   PMC_PCR_GCKCSS_SLOW_CLK_Val         _U_(0x0)                                             /**< (PMC_PCR) Slow clock is selected  */
#define   PMC_PCR_GCKCSS_MAIN_CLK_Val         _U_(0x1)                                             /**< (PMC_PCR) Main clock is selected  */
#define   PMC_PCR_GCKCSS_PLLA_CLK_Val         _U_(0x2)                                             /**< (PMC_PCR) PLLACK is selected  */
#define   PMC_PCR_GCKCSS_UPLL_CLK_Val         _U_(0x3)                                             /**< (PMC_PCR) UPLL Clock is selected  */
#define   PMC_PCR_GCKCSS_MCK_CLK_Val          _U_(0x4)                                             /**< (PMC_PCR) Master Clock is selected  */
#define   PMC_PCR_GCKCSS_AUDIO_CLK_Val        _U_(0x5)                                             /**< (PMC_PCR) Audio PLL clock is selected  */
#define PMC_PCR_GCKCSS_SLOW_CLK               (PMC_PCR_GCKCSS_SLOW_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) Slow clock is selected Position  */
#define PMC_PCR_GCKCSS_MAIN_CLK               (PMC_PCR_GCKCSS_MAIN_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) Main clock is selected Position  */
#define PMC_PCR_GCKCSS_PLLA_CLK               (PMC_PCR_GCKCSS_PLLA_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) PLLACK is selected Position  */
#define PMC_PCR_GCKCSS_UPLL_CLK               (PMC_PCR_GCKCSS_UPLL_CLK_Val << PMC_PCR_GCKCSS_Pos)  /**< (PMC_PCR) UPLL Clock is selected Position  */
#define PMC_PCR_GCKCSS_MCK_CLK                (PMC_PCR_GCKCSS_MCK_CLK_Val << PMC_PCR_GCKCSS_Pos)   /**< (PMC_PCR) Master Clock is selected Position  */
#define PMC_PCR_GCKCSS_AUDIO_CLK              (PMC_PCR_GCKCSS_AUDIO_CLK_Val << PMC_PCR_GCKCSS_Pos) /**< (PMC_PCR) Audio PLL clock is selected Position  */
#define PMC_PCR_CMD_Pos                       _U_(12)                                              /**< (PMC_PCR) Command Position */
#define PMC_PCR_CMD_Msk                       (_U_(0x1) << PMC_PCR_CMD_Pos)                        /**< (PMC_PCR) Command Mask */
#define PMC_PCR_CMD(value)                    (PMC_PCR_CMD_Msk & ((value) << PMC_PCR_CMD_Pos))    
#define PMC_PCR_GCKDIV_Pos                    _U_(20)                                              /**< (PMC_PCR) Generic Clock Division Ratio Position */
#define PMC_PCR_GCKDIV_Msk                    (_U_(0xFF) << PMC_PCR_GCKDIV_Pos)                    /**< (PMC_PCR) Generic Clock Division Ratio Mask */
#define PMC_PCR_GCKDIV(value)                 (PMC_PCR_GCKDIV_Msk & ((value) << PMC_PCR_GCKDIV_Pos))
#define PMC_PCR_EN_Pos                        _U_(28)                                              /**< (PMC_PCR) Enable Position */
#define PMC_PCR_EN_Msk                        (_U_(0x1) << PMC_PCR_EN_Pos)                         /**< (PMC_PCR) Enable Mask */
#define PMC_PCR_EN(value)                     (PMC_PCR_EN_Msk & ((value) << PMC_PCR_EN_Pos))      
#define PMC_PCR_GCKEN_Pos                     _U_(29)                                              /**< (PMC_PCR) Generic Clock Enable Position */
#define PMC_PCR_GCKEN_Msk                     (_U_(0x1) << PMC_PCR_GCKEN_Pos)                      /**< (PMC_PCR) Generic Clock Enable Mask */
#define PMC_PCR_GCKEN(value)                  (PMC_PCR_GCKEN_Msk & ((value) << PMC_PCR_GCKEN_Pos))
#define PMC_PCR_Msk                           _U_(0x3FF0177F)                                      /**< (PMC_PCR) Register Mask  */


/* -------- PMC_OCR : (PMC Offset: 0x110) (R/W 32) Oscillator Calibration Register -------- */
#define PMC_OCR_CAL_Pos                       _U_(0)                                               /**< (PMC_OCR) 12 MHz RC Oscillator Calibration Bits Position */
#define PMC_OCR_CAL_Msk                       (_U_(0x7F) << PMC_OCR_CAL_Pos)                       /**< (PMC_OCR) 12 MHz RC Oscillator Calibration Bits Mask */
#define PMC_OCR_CAL(value)                    (PMC_OCR_CAL_Msk & ((value) << PMC_OCR_CAL_Pos))    
#define PMC_OCR_SEL_Pos                       _U_(7)                                               /**< (PMC_OCR) Selection of RC Oscillator Calibration Bits Position */
#define PMC_OCR_SEL_Msk                       (_U_(0x1) << PMC_OCR_SEL_Pos)                        /**< (PMC_OCR) Selection of RC Oscillator Calibration Bits Mask */
#define PMC_OCR_SEL(value)                    (PMC_OCR_SEL_Msk & ((value) << PMC_OCR_SEL_Pos))    
#define PMC_OCR_Msk                           _U_(0x000000FF)                                      /**< (PMC_OCR) Register Mask  */


/* -------- PMC_SLPWK_ER0 : (PMC Offset: 0x114) ( /W 32) SleepWalking Enable Register 0 -------- */
#define PMC_SLPWK_ER0_PID19_Pos               _U_(19)                                              /**< (PMC_SLPWK_ER0) Peripheral 19 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID19_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID19_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 19 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID19(value)            (PMC_SLPWK_ER0_PID19_Msk & ((value) << PMC_SLPWK_ER0_PID19_Pos))
#define PMC_SLPWK_ER0_PID20_Pos               _U_(20)                                              /**< (PMC_SLPWK_ER0) Peripheral 20 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID20_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID20_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 20 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID20(value)            (PMC_SLPWK_ER0_PID20_Msk & ((value) << PMC_SLPWK_ER0_PID20_Pos))
#define PMC_SLPWK_ER0_PID21_Pos               _U_(21)                                              /**< (PMC_SLPWK_ER0) Peripheral 21 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID21_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID21_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 21 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID21(value)            (PMC_SLPWK_ER0_PID21_Msk & ((value) << PMC_SLPWK_ER0_PID21_Pos))
#define PMC_SLPWK_ER0_PID22_Pos               _U_(22)                                              /**< (PMC_SLPWK_ER0) Peripheral 22 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID22_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID22_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 22 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID22(value)            (PMC_SLPWK_ER0_PID22_Msk & ((value) << PMC_SLPWK_ER0_PID22_Pos))
#define PMC_SLPWK_ER0_PID23_Pos               _U_(23)                                              /**< (PMC_SLPWK_ER0) Peripheral 23 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID23_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID23_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 23 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID23(value)            (PMC_SLPWK_ER0_PID23_Msk & ((value) << PMC_SLPWK_ER0_PID23_Pos))
#define PMC_SLPWK_ER0_PID24_Pos               _U_(24)                                              /**< (PMC_SLPWK_ER0) Peripheral 24 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID24_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID24_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 24 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID24(value)            (PMC_SLPWK_ER0_PID24_Msk & ((value) << PMC_SLPWK_ER0_PID24_Pos))
#define PMC_SLPWK_ER0_PID25_Pos               _U_(25)                                              /**< (PMC_SLPWK_ER0) Peripheral 25 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID25_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID25_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 25 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID25(value)            (PMC_SLPWK_ER0_PID25_Msk & ((value) << PMC_SLPWK_ER0_PID25_Pos))
#define PMC_SLPWK_ER0_PID26_Pos               _U_(26)                                              /**< (PMC_SLPWK_ER0) Peripheral 26 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID26_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID26_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 26 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID26(value)            (PMC_SLPWK_ER0_PID26_Msk & ((value) << PMC_SLPWK_ER0_PID26_Pos))
#define PMC_SLPWK_ER0_PID27_Pos               _U_(27)                                              /**< (PMC_SLPWK_ER0) Peripheral 27 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID27_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID27_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 27 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID27(value)            (PMC_SLPWK_ER0_PID27_Msk & ((value) << PMC_SLPWK_ER0_PID27_Pos))
#define PMC_SLPWK_ER0_PID28_Pos               _U_(28)                                              /**< (PMC_SLPWK_ER0) Peripheral 28 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID28_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID28_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 28 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID28(value)            (PMC_SLPWK_ER0_PID28_Msk & ((value) << PMC_SLPWK_ER0_PID28_Pos))
#define PMC_SLPWK_ER0_PID29_Pos               _U_(29)                                              /**< (PMC_SLPWK_ER0) Peripheral 29 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID29_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID29_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 29 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID29(value)            (PMC_SLPWK_ER0_PID29_Msk & ((value) << PMC_SLPWK_ER0_PID29_Pos))
#define PMC_SLPWK_ER0_PID30_Pos               _U_(30)                                              /**< (PMC_SLPWK_ER0) Peripheral 30 SleepWalking Enable Position */
#define PMC_SLPWK_ER0_PID30_Msk               (_U_(0x1) << PMC_SLPWK_ER0_PID30_Pos)                /**< (PMC_SLPWK_ER0) Peripheral 30 SleepWalking Enable Mask */
#define PMC_SLPWK_ER0_PID30(value)            (PMC_SLPWK_ER0_PID30_Msk & ((value) << PMC_SLPWK_ER0_PID30_Pos))
#define PMC_SLPWK_ER0_Msk                     _U_(0x7FF80000)                                      /**< (PMC_SLPWK_ER0) Register Mask  */

#define PMC_SLPWK_ER0_PID_Pos                 _U_(19)                                              /**< (PMC_SLPWK_ER0 Position) Peripheral 3x SleepWalking Enable */
#define PMC_SLPWK_ER0_PID_Msk                 (_U_(0xFFF) << PMC_SLPWK_ER0_PID_Pos)                /**< (PMC_SLPWK_ER0 Mask) PID */
#define PMC_SLPWK_ER0_PID(value)              (PMC_SLPWK_ER0_PID_Msk & ((value) << PMC_SLPWK_ER0_PID_Pos)) 

/* -------- PMC_SLPWK_DR0 : (PMC Offset: 0x118) ( /W 32) SleepWalking Disable Register 0 -------- */
#define PMC_SLPWK_DR0_PID19_Pos               _U_(19)                                              /**< (PMC_SLPWK_DR0) Peripheral 19 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID19_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID19_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 19 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID19(value)            (PMC_SLPWK_DR0_PID19_Msk & ((value) << PMC_SLPWK_DR0_PID19_Pos))
#define PMC_SLPWK_DR0_PID20_Pos               _U_(20)                                              /**< (PMC_SLPWK_DR0) Peripheral 20 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID20_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID20_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 20 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID20(value)            (PMC_SLPWK_DR0_PID20_Msk & ((value) << PMC_SLPWK_DR0_PID20_Pos))
#define PMC_SLPWK_DR0_PID21_Pos               _U_(21)                                              /**< (PMC_SLPWK_DR0) Peripheral 21 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID21_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID21_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 21 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID21(value)            (PMC_SLPWK_DR0_PID21_Msk & ((value) << PMC_SLPWK_DR0_PID21_Pos))
#define PMC_SLPWK_DR0_PID22_Pos               _U_(22)                                              /**< (PMC_SLPWK_DR0) Peripheral 22 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID22_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID22_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 22 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID22(value)            (PMC_SLPWK_DR0_PID22_Msk & ((value) << PMC_SLPWK_DR0_PID22_Pos))
#define PMC_SLPWK_DR0_PID23_Pos               _U_(23)                                              /**< (PMC_SLPWK_DR0) Peripheral 23 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID23_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID23_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 23 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID23(value)            (PMC_SLPWK_DR0_PID23_Msk & ((value) << PMC_SLPWK_DR0_PID23_Pos))
#define PMC_SLPWK_DR0_PID24_Pos               _U_(24)                                              /**< (PMC_SLPWK_DR0) Peripheral 24 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID24_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID24_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 24 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID24(value)            (PMC_SLPWK_DR0_PID24_Msk & ((value) << PMC_SLPWK_DR0_PID24_Pos))
#define PMC_SLPWK_DR0_PID25_Pos               _U_(25)                                              /**< (PMC_SLPWK_DR0) Peripheral 25 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID25_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID25_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 25 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID25(value)            (PMC_SLPWK_DR0_PID25_Msk & ((value) << PMC_SLPWK_DR0_PID25_Pos))
#define PMC_SLPWK_DR0_PID26_Pos               _U_(26)                                              /**< (PMC_SLPWK_DR0) Peripheral 26 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID26_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID26_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 26 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID26(value)            (PMC_SLPWK_DR0_PID26_Msk & ((value) << PMC_SLPWK_DR0_PID26_Pos))
#define PMC_SLPWK_DR0_PID27_Pos               _U_(27)                                              /**< (PMC_SLPWK_DR0) Peripheral 27 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID27_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID27_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 27 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID27(value)            (PMC_SLPWK_DR0_PID27_Msk & ((value) << PMC_SLPWK_DR0_PID27_Pos))
#define PMC_SLPWK_DR0_PID28_Pos               _U_(28)                                              /**< (PMC_SLPWK_DR0) Peripheral 28 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID28_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID28_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 28 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID28(value)            (PMC_SLPWK_DR0_PID28_Msk & ((value) << PMC_SLPWK_DR0_PID28_Pos))
#define PMC_SLPWK_DR0_PID29_Pos               _U_(29)                                              /**< (PMC_SLPWK_DR0) Peripheral 29 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID29_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID29_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 29 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID29(value)            (PMC_SLPWK_DR0_PID29_Msk & ((value) << PMC_SLPWK_DR0_PID29_Pos))
#define PMC_SLPWK_DR0_PID30_Pos               _U_(30)                                              /**< (PMC_SLPWK_DR0) Peripheral 30 SleepWalking Disable Position */
#define PMC_SLPWK_DR0_PID30_Msk               (_U_(0x1) << PMC_SLPWK_DR0_PID30_Pos)                /**< (PMC_SLPWK_DR0) Peripheral 30 SleepWalking Disable Mask */
#define PMC_SLPWK_DR0_PID30(value)            (PMC_SLPWK_DR0_PID30_Msk & ((value) << PMC_SLPWK_DR0_PID30_Pos))
#define PMC_SLPWK_DR0_Msk                     _U_(0x7FF80000)                                      /**< (PMC_SLPWK_DR0) Register Mask  */

#define PMC_SLPWK_DR0_PID_Pos                 _U_(19)                                              /**< (PMC_SLPWK_DR0 Position) Peripheral 3x SleepWalking Disable */
#define PMC_SLPWK_DR0_PID_Msk                 (_U_(0xFFF) << PMC_SLPWK_DR0_PID_Pos)                /**< (PMC_SLPWK_DR0 Mask) PID */
#define PMC_SLPWK_DR0_PID(value)              (PMC_SLPWK_DR0_PID_Msk & ((value) << PMC_SLPWK_DR0_PID_Pos)) 

/* -------- PMC_SLPWK_SR0 : (PMC Offset: 0x11C) ( R/ 32) SleepWalking Status Register 0 -------- */
#define PMC_SLPWK_SR0_PID19_Pos               _U_(19)                                              /**< (PMC_SLPWK_SR0) Peripheral 19 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID19_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID19_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 19 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID19(value)            (PMC_SLPWK_SR0_PID19_Msk & ((value) << PMC_SLPWK_SR0_PID19_Pos))
#define PMC_SLPWK_SR0_PID20_Pos               _U_(20)                                              /**< (PMC_SLPWK_SR0) Peripheral 20 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID20_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID20_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 20 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID20(value)            (PMC_SLPWK_SR0_PID20_Msk & ((value) << PMC_SLPWK_SR0_PID20_Pos))
#define PMC_SLPWK_SR0_PID21_Pos               _U_(21)                                              /**< (PMC_SLPWK_SR0) Peripheral 21 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID21_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID21_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 21 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID21(value)            (PMC_SLPWK_SR0_PID21_Msk & ((value) << PMC_SLPWK_SR0_PID21_Pos))
#define PMC_SLPWK_SR0_PID22_Pos               _U_(22)                                              /**< (PMC_SLPWK_SR0) Peripheral 22 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID22_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID22_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 22 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID22(value)            (PMC_SLPWK_SR0_PID22_Msk & ((value) << PMC_SLPWK_SR0_PID22_Pos))
#define PMC_SLPWK_SR0_PID23_Pos               _U_(23)                                              /**< (PMC_SLPWK_SR0) Peripheral 23 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID23_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID23_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 23 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID23(value)            (PMC_SLPWK_SR0_PID23_Msk & ((value) << PMC_SLPWK_SR0_PID23_Pos))
#define PMC_SLPWK_SR0_PID24_Pos               _U_(24)                                              /**< (PMC_SLPWK_SR0) Peripheral 24 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID24_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID24_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 24 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID24(value)            (PMC_SLPWK_SR0_PID24_Msk & ((value) << PMC_SLPWK_SR0_PID24_Pos))
#define PMC_SLPWK_SR0_PID25_Pos               _U_(25)                                              /**< (PMC_SLPWK_SR0) Peripheral 25 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID25_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID25_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 25 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID25(value)            (PMC_SLPWK_SR0_PID25_Msk & ((value) << PMC_SLPWK_SR0_PID25_Pos))
#define PMC_SLPWK_SR0_PID26_Pos               _U_(26)                                              /**< (PMC_SLPWK_SR0) Peripheral 26 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID26_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID26_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 26 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID26(value)            (PMC_SLPWK_SR0_PID26_Msk & ((value) << PMC_SLPWK_SR0_PID26_Pos))
#define PMC_SLPWK_SR0_PID27_Pos               _U_(27)                                              /**< (PMC_SLPWK_SR0) Peripheral 27 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID27_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID27_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 27 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID27(value)            (PMC_SLPWK_SR0_PID27_Msk & ((value) << PMC_SLPWK_SR0_PID27_Pos))
#define PMC_SLPWK_SR0_PID28_Pos               _U_(28)                                              /**< (PMC_SLPWK_SR0) Peripheral 28 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID28_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID28_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 28 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID28(value)            (PMC_SLPWK_SR0_PID28_Msk & ((value) << PMC_SLPWK_SR0_PID28_Pos))
#define PMC_SLPWK_SR0_PID29_Pos               _U_(29)                                              /**< (PMC_SLPWK_SR0) Peripheral 29 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID29_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID29_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 29 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID29(value)            (PMC_SLPWK_SR0_PID29_Msk & ((value) << PMC_SLPWK_SR0_PID29_Pos))
#define PMC_SLPWK_SR0_PID30_Pos               _U_(30)                                              /**< (PMC_SLPWK_SR0) Peripheral 30 SleepWalking Status Position */
#define PMC_SLPWK_SR0_PID30_Msk               (_U_(0x1) << PMC_SLPWK_SR0_PID30_Pos)                /**< (PMC_SLPWK_SR0) Peripheral 30 SleepWalking Status Mask */
#define PMC_SLPWK_SR0_PID30(value)            (PMC_SLPWK_SR0_PID30_Msk & ((value) << PMC_SLPWK_SR0_PID30_Pos))
#define PMC_SLPWK_SR0_Msk                     _U_(0x7FF80000)                                      /**< (PMC_SLPWK_SR0) Register Mask  */

#define PMC_SLPWK_SR0_PID_Pos                 _U_(19)                                              /**< (PMC_SLPWK_SR0 Position) Peripheral 3x SleepWalking Status */
#define PMC_SLPWK_SR0_PID_Msk                 (_U_(0xFFF) << PMC_SLPWK_SR0_PID_Pos)                /**< (PMC_SLPWK_SR0 Mask) PID */
#define PMC_SLPWK_SR0_PID(value)              (PMC_SLPWK_SR0_PID_Msk & ((value) << PMC_SLPWK_SR0_PID_Pos)) 

/* -------- PMC_SLPWK_ASR0 : (PMC Offset: 0x120) ( R/ 32) SleepWalking Activity Status Register 0 -------- */
#define PMC_SLPWK_ASR0_PID19_Pos              _U_(19)                                              /**< (PMC_SLPWK_ASR0) Peripheral 19 Activity Status Position */
#define PMC_SLPWK_ASR0_PID19_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID19_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 19 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID19(value)           (PMC_SLPWK_ASR0_PID19_Msk & ((value) << PMC_SLPWK_ASR0_PID19_Pos))
#define PMC_SLPWK_ASR0_PID20_Pos              _U_(20)                                              /**< (PMC_SLPWK_ASR0) Peripheral 20 Activity Status Position */
#define PMC_SLPWK_ASR0_PID20_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID20_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 20 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID20(value)           (PMC_SLPWK_ASR0_PID20_Msk & ((value) << PMC_SLPWK_ASR0_PID20_Pos))
#define PMC_SLPWK_ASR0_PID21_Pos              _U_(21)                                              /**< (PMC_SLPWK_ASR0) Peripheral 21 Activity Status Position */
#define PMC_SLPWK_ASR0_PID21_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID21_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 21 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID21(value)           (PMC_SLPWK_ASR0_PID21_Msk & ((value) << PMC_SLPWK_ASR0_PID21_Pos))
#define PMC_SLPWK_ASR0_PID22_Pos              _U_(22)                                              /**< (PMC_SLPWK_ASR0) Peripheral 22 Activity Status Position */
#define PMC_SLPWK_ASR0_PID22_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID22_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 22 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID22(value)           (PMC_SLPWK_ASR0_PID22_Msk & ((value) << PMC_SLPWK_ASR0_PID22_Pos))
#define PMC_SLPWK_ASR0_PID23_Pos              _U_(23)                                              /**< (PMC_SLPWK_ASR0) Peripheral 23 Activity Status Position */
#define PMC_SLPWK_ASR0_PID23_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID23_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 23 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID23(value)           (PMC_SLPWK_ASR0_PID23_Msk & ((value) << PMC_SLPWK_ASR0_PID23_Pos))
#define PMC_SLPWK_ASR0_PID24_Pos              _U_(24)                                              /**< (PMC_SLPWK_ASR0) Peripheral 24 Activity Status Position */
#define PMC_SLPWK_ASR0_PID24_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID24_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 24 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID24(value)           (PMC_SLPWK_ASR0_PID24_Msk & ((value) << PMC_SLPWK_ASR0_PID24_Pos))
#define PMC_SLPWK_ASR0_PID25_Pos              _U_(25)                                              /**< (PMC_SLPWK_ASR0) Peripheral 25 Activity Status Position */
#define PMC_SLPWK_ASR0_PID25_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID25_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 25 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID25(value)           (PMC_SLPWK_ASR0_PID25_Msk & ((value) << PMC_SLPWK_ASR0_PID25_Pos))
#define PMC_SLPWK_ASR0_PID26_Pos              _U_(26)                                              /**< (PMC_SLPWK_ASR0) Peripheral 26 Activity Status Position */
#define PMC_SLPWK_ASR0_PID26_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID26_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 26 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID26(value)           (PMC_SLPWK_ASR0_PID26_Msk & ((value) << PMC_SLPWK_ASR0_PID26_Pos))
#define PMC_SLPWK_ASR0_PID27_Pos              _U_(27)                                              /**< (PMC_SLPWK_ASR0) Peripheral 27 Activity Status Position */
#define PMC_SLPWK_ASR0_PID27_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID27_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 27 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID27(value)           (PMC_SLPWK_ASR0_PID27_Msk & ((value) << PMC_SLPWK_ASR0_PID27_Pos))
#define PMC_SLPWK_ASR0_PID28_Pos              _U_(28)                                              /**< (PMC_SLPWK_ASR0) Peripheral 28 Activity Status Position */
#define PMC_SLPWK_ASR0_PID28_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID28_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 28 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID28(value)           (PMC_SLPWK_ASR0_PID28_Msk & ((value) << PMC_SLPWK_ASR0_PID28_Pos))
#define PMC_SLPWK_ASR0_PID29_Pos              _U_(29)                                              /**< (PMC_SLPWK_ASR0) Peripheral 29 Activity Status Position */
#define PMC_SLPWK_ASR0_PID29_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID29_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 29 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID29(value)           (PMC_SLPWK_ASR0_PID29_Msk & ((value) << PMC_SLPWK_ASR0_PID29_Pos))
#define PMC_SLPWK_ASR0_PID30_Pos              _U_(30)                                              /**< (PMC_SLPWK_ASR0) Peripheral 30 Activity Status Position */
#define PMC_SLPWK_ASR0_PID30_Msk              (_U_(0x1) << PMC_SLPWK_ASR0_PID30_Pos)               /**< (PMC_SLPWK_ASR0) Peripheral 30 Activity Status Mask */
#define PMC_SLPWK_ASR0_PID30(value)           (PMC_SLPWK_ASR0_PID30_Msk & ((value) << PMC_SLPWK_ASR0_PID30_Pos))
#define PMC_SLPWK_ASR0_Msk                    _U_(0x7FF80000)                                      /**< (PMC_SLPWK_ASR0) Register Mask  */

#define PMC_SLPWK_ASR0_PID_Pos                _U_(19)                                              /**< (PMC_SLPWK_ASR0 Position) Peripheral 3x Activity Status */
#define PMC_SLPWK_ASR0_PID_Msk                (_U_(0xFFF) << PMC_SLPWK_ASR0_PID_Pos)               /**< (PMC_SLPWK_ASR0 Mask) PID */
#define PMC_SLPWK_ASR0_PID(value)             (PMC_SLPWK_ASR0_PID_Msk & ((value) << PMC_SLPWK_ASR0_PID_Pos)) 

/* -------- PMC_SLPWK_ER1 : (PMC Offset: 0x134) ( /W 32) SleepWalking Enable Register 1 -------- */
#define PMC_SLPWK_ER1_PID33_Pos               _U_(1)                                               /**< (PMC_SLPWK_ER1) Peripheral 33 SleepWalking Enable Position */
#define PMC_SLPWK_ER1_PID33_Msk               (_U_(0x1) << PMC_SLPWK_ER1_PID33_Pos)                /**< (PMC_SLPWK_ER1) Peripheral 33 SleepWalking Enable Mask */
#define PMC_SLPWK_ER1_PID33(value)            (PMC_SLPWK_ER1_PID33_Msk & ((value) << PMC_SLPWK_ER1_PID33_Pos))
#define PMC_SLPWK_ER1_PID34_Pos               _U_(2)                                               /**< (PMC_SLPWK_ER1) Peripheral 34 SleepWalking Enable Position */
#define PMC_SLPWK_ER1_PID34_Msk               (_U_(0x1) << PMC_SLPWK_ER1_PID34_Pos)                /**< (PMC_SLPWK_ER1) Peripheral 34 SleepWalking Enable Mask */
#define PMC_SLPWK_ER1_PID34(value)            (PMC_SLPWK_ER1_PID34_Msk & ((value) << PMC_SLPWK_ER1_PID34_Pos))
#define PMC_SLPWK_ER1_PID40_Pos               _U_(8)                                               /**< (PMC_SLPWK_ER1) Peripheral 40 SleepWalking Enable Position */
#define PMC_SLPWK_ER1_PID40_Msk               (_U_(0x1) << PMC_SLPWK_ER1_PID40_Pos)                /**< (PMC_SLPWK_ER1) Peripheral 40 SleepWalking Enable Mask */
#define PMC_SLPWK_ER1_PID40(value)            (PMC_SLPWK_ER1_PID40_Msk & ((value) << PMC_SLPWK_ER1_PID40_Pos))
#define PMC_SLPWK_ER1_Msk                     _U_(0x00000106)                                      /**< (PMC_SLPWK_ER1) Register Mask  */

#define PMC_SLPWK_ER1_PID_Pos                 _U_(1)                                               /**< (PMC_SLPWK_ER1 Position) Peripheral 4x SleepWalking Enable */
#define PMC_SLPWK_ER1_PID_Msk                 (_U_(0x7) << PMC_SLPWK_ER1_PID_Pos)                  /**< (PMC_SLPWK_ER1 Mask) PID */
#define PMC_SLPWK_ER1_PID(value)              (PMC_SLPWK_ER1_PID_Msk & ((value) << PMC_SLPWK_ER1_PID_Pos)) 

/* -------- PMC_SLPWK_DR1 : (PMC Offset: 0x138) ( /W 32) SleepWalking Disable Register 1 -------- */
#define PMC_SLPWK_DR1_PID33_Pos               _U_(1)                                               /**< (PMC_SLPWK_DR1) Peripheral 33 SleepWalking Disable Position */
#define PMC_SLPWK_DR1_PID33_Msk               (_U_(0x1) << PMC_SLPWK_DR1_PID33_Pos)                /**< (PMC_SLPWK_DR1) Peripheral 33 SleepWalking Disable Mask */
#define PMC_SLPWK_DR1_PID33(value)            (PMC_SLPWK_DR1_PID33_Msk & ((value) << PMC_SLPWK_DR1_PID33_Pos))
#define PMC_SLPWK_DR1_PID34_Pos               _U_(2)                                               /**< (PMC_SLPWK_DR1) Peripheral 34 SleepWalking Disable Position */
#define PMC_SLPWK_DR1_PID34_Msk               (_U_(0x1) << PMC_SLPWK_DR1_PID34_Pos)                /**< (PMC_SLPWK_DR1) Peripheral 34 SleepWalking Disable Mask */
#define PMC_SLPWK_DR1_PID34(value)            (PMC_SLPWK_DR1_PID34_Msk & ((value) << PMC_SLPWK_DR1_PID34_Pos))
#define PMC_SLPWK_DR1_PID40_Pos               _U_(8)                                               /**< (PMC_SLPWK_DR1) Peripheral 40 SleepWalking Disable Position */
#define PMC_SLPWK_DR1_PID40_Msk               (_U_(0x1) << PMC_SLPWK_DR1_PID40_Pos)                /**< (PMC_SLPWK_DR1) Peripheral 40 SleepWalking Disable Mask */
#define PMC_SLPWK_DR1_PID40(value)            (PMC_SLPWK_DR1_PID40_Msk & ((value) << PMC_SLPWK_DR1_PID40_Pos))
#define PMC_SLPWK_DR1_Msk                     _U_(0x00000106)                                      /**< (PMC_SLPWK_DR1) Register Mask  */

#define PMC_SLPWK_DR1_PID_Pos                 _U_(1)                                               /**< (PMC_SLPWK_DR1 Position) Peripheral 4x SleepWalking Disable */
#define PMC_SLPWK_DR1_PID_Msk                 (_U_(0x7) << PMC_SLPWK_DR1_PID_Pos)                  /**< (PMC_SLPWK_DR1 Mask) PID */
#define PMC_SLPWK_DR1_PID(value)              (PMC_SLPWK_DR1_PID_Msk & ((value) << PMC_SLPWK_DR1_PID_Pos)) 

/* -------- PMC_SLPWK_SR1 : (PMC Offset: 0x13C) ( R/ 32) SleepWalking Status Register 1 -------- */
#define PMC_SLPWK_SR1_PID33_Pos               _U_(1)                                               /**< (PMC_SLPWK_SR1) Peripheral 33 SleepWalking Status Position */
#define PMC_SLPWK_SR1_PID33_Msk               (_U_(0x1) << PMC_SLPWK_SR1_PID33_Pos)                /**< (PMC_SLPWK_SR1) Peripheral 33 SleepWalking Status Mask */
#define PMC_SLPWK_SR1_PID33(value)            (PMC_SLPWK_SR1_PID33_Msk & ((value) << PMC_SLPWK_SR1_PID33_Pos))
#define PMC_SLPWK_SR1_PID34_Pos               _U_(2)                                               /**< (PMC_SLPWK_SR1) Peripheral 34 SleepWalking Status Position */
#define PMC_SLPWK_SR1_PID34_Msk               (_U_(0x1) << PMC_SLPWK_SR1_PID34_Pos)                /**< (PMC_SLPWK_SR1) Peripheral 34 SleepWalking Status Mask */
#define PMC_SLPWK_SR1_PID34(value)            (PMC_SLPWK_SR1_PID34_Msk & ((value) << PMC_SLPWK_SR1_PID34_Pos))
#define PMC_SLPWK_SR1_PID40_Pos               _U_(8)                                               /**< (PMC_SLPWK_SR1) Peripheral 40 SleepWalking Status Position */
#define PMC_SLPWK_SR1_PID40_Msk               (_U_(0x1) << PMC_SLPWK_SR1_PID40_Pos)                /**< (PMC_SLPWK_SR1) Peripheral 40 SleepWalking Status Mask */
#define PMC_SLPWK_SR1_PID40(value)            (PMC_SLPWK_SR1_PID40_Msk & ((value) << PMC_SLPWK_SR1_PID40_Pos))
#define PMC_SLPWK_SR1_Msk                     _U_(0x00000106)                                      /**< (PMC_SLPWK_SR1) Register Mask  */

#define PMC_SLPWK_SR1_PID_Pos                 _U_(1)                                               /**< (PMC_SLPWK_SR1 Position) Peripheral 4x SleepWalking Status */
#define PMC_SLPWK_SR1_PID_Msk                 (_U_(0x7) << PMC_SLPWK_SR1_PID_Pos)                  /**< (PMC_SLPWK_SR1 Mask) PID */
#define PMC_SLPWK_SR1_PID(value)              (PMC_SLPWK_SR1_PID_Msk & ((value) << PMC_SLPWK_SR1_PID_Pos)) 

/* -------- PMC_SLPWK_ASR1 : (PMC Offset: 0x140) ( R/ 32) SleepWalking Activity Status Register 1 -------- */
#define PMC_SLPWK_ASR1_PID33_Pos              _U_(1)                                               /**< (PMC_SLPWK_ASR1) Peripheral 33 Activity Status Position */
#define PMC_SLPWK_ASR1_PID33_Msk              (_U_(0x1) << PMC_SLPWK_ASR1_PID33_Pos)               /**< (PMC_SLPWK_ASR1) Peripheral 33 Activity Status Mask */
#define PMC_SLPWK_ASR1_PID33(value)           (PMC_SLPWK_ASR1_PID33_Msk & ((value) << PMC_SLPWK_ASR1_PID33_Pos))
#define PMC_SLPWK_ASR1_PID34_Pos              _U_(2)                                               /**< (PMC_SLPWK_ASR1) Peripheral 34 Activity Status Position */
#define PMC_SLPWK_ASR1_PID34_Msk              (_U_(0x1) << PMC_SLPWK_ASR1_PID34_Pos)               /**< (PMC_SLPWK_ASR1) Peripheral 34 Activity Status Mask */
#define PMC_SLPWK_ASR1_PID34(value)           (PMC_SLPWK_ASR1_PID34_Msk & ((value) << PMC_SLPWK_ASR1_PID34_Pos))
#define PMC_SLPWK_ASR1_PID40_Pos              _U_(8)                                               /**< (PMC_SLPWK_ASR1) Peripheral 40 Activity Status Position */
#define PMC_SLPWK_ASR1_PID40_Msk              (_U_(0x1) << PMC_SLPWK_ASR1_PID40_Pos)               /**< (PMC_SLPWK_ASR1) Peripheral 40 Activity Status Mask */
#define PMC_SLPWK_ASR1_PID40(value)           (PMC_SLPWK_ASR1_PID40_Msk & ((value) << PMC_SLPWK_ASR1_PID40_Pos))
#define PMC_SLPWK_ASR1_Msk                    _U_(0x00000106)                                      /**< (PMC_SLPWK_ASR1) Register Mask  */

#define PMC_SLPWK_ASR1_PID_Pos                _U_(1)                                               /**< (PMC_SLPWK_ASR1 Position) Peripheral 4x Activity Status */
#define PMC_SLPWK_ASR1_PID_Msk                (_U_(0x7) << PMC_SLPWK_ASR1_PID_Pos)                 /**< (PMC_SLPWK_ASR1 Mask) PID */
#define PMC_SLPWK_ASR1_PID(value)             (PMC_SLPWK_ASR1_PID_Msk & ((value) << PMC_SLPWK_ASR1_PID_Pos)) 

/* -------- PMC_SLPWK_AIPR : (PMC Offset: 0x144) ( R/ 32) SleepWalking Activity In Progress Register -------- */
#define PMC_SLPWK_AIPR_AIP_Pos                _U_(0)                                               /**< (PMC_SLPWK_AIPR) Activity In Progress Position */
#define PMC_SLPWK_AIPR_AIP_Msk                (_U_(0x1) << PMC_SLPWK_AIPR_AIP_Pos)                 /**< (PMC_SLPWK_AIPR) Activity In Progress Mask */
#define PMC_SLPWK_AIPR_AIP(value)             (PMC_SLPWK_AIPR_AIP_Msk & ((value) << PMC_SLPWK_AIPR_AIP_Pos))
#define PMC_SLPWK_AIPR_Msk                    _U_(0x00000001)                                      /**< (PMC_SLPWK_AIPR) Register Mask  */


/* -------- PMC_SLPWKCR : (PMC Offset: 0x148) (R/W 32) SleepWalking Control Register -------- */
#define PMC_SLPWKCR_PID_Pos                   _U_(0)                                               /**< (PMC_SLPWKCR) Peripheral ID Position */
#define PMC_SLPWKCR_PID_Msk                   (_U_(0x7F) << PMC_SLPWKCR_PID_Pos)                   /**< (PMC_SLPWKCR) Peripheral ID Mask */
#define PMC_SLPWKCR_PID(value)                (PMC_SLPWKCR_PID_Msk & ((value) << PMC_SLPWKCR_PID_Pos))
#define PMC_SLPWKCR_CMD_Pos                   _U_(12)                                              /**< (PMC_SLPWKCR) Command Position */
#define PMC_SLPWKCR_CMD_Msk                   (_U_(0x1) << PMC_SLPWKCR_CMD_Pos)                    /**< (PMC_SLPWKCR) Command Mask */
#define PMC_SLPWKCR_CMD(value)                (PMC_SLPWKCR_CMD_Msk & ((value) << PMC_SLPWKCR_CMD_Pos))
#define PMC_SLPWKCR_ASR_Pos                   _U_(16)                                              /**< (PMC_SLPWKCR) Activity Status Register Position */
#define PMC_SLPWKCR_ASR_Msk                   (_U_(0x1) << PMC_SLPWKCR_ASR_Pos)                    /**< (PMC_SLPWKCR) Activity Status Register Mask */
#define PMC_SLPWKCR_ASR(value)                (PMC_SLPWKCR_ASR_Msk & ((value) << PMC_SLPWKCR_ASR_Pos))
#define PMC_SLPWKCR_SLPWKSR_Pos               _U_(28)                                              /**< (PMC_SLPWKCR) SleepWalking Status Register Position */
#define PMC_SLPWKCR_SLPWKSR_Msk               (_U_(0x1) << PMC_SLPWKCR_SLPWKSR_Pos)                /**< (PMC_SLPWKCR) SleepWalking Status Register Mask */
#define PMC_SLPWKCR_SLPWKSR(value)            (PMC_SLPWKCR_SLPWKSR_Msk & ((value) << PMC_SLPWKCR_SLPWKSR_Pos))
#define PMC_SLPWKCR_Msk                       _U_(0x1001107F)                                      /**< (PMC_SLPWKCR) Register Mask  */


/* -------- PMC_AUDIO_PLL0 : (PMC Offset: 0x14C) (R/W 32) Audio PLL Register 0 -------- */
#define PMC_AUDIO_PLL0_PLLEN_Pos              _U_(0)                                               /**< (PMC_AUDIO_PLL0) PLL Enable Position */
#define PMC_AUDIO_PLL0_PLLEN_Msk              (_U_(0x1) << PMC_AUDIO_PLL0_PLLEN_Pos)               /**< (PMC_AUDIO_PLL0) PLL Enable Mask */
#define PMC_AUDIO_PLL0_PLLEN(value)           (PMC_AUDIO_PLL0_PLLEN_Msk & ((value) << PMC_AUDIO_PLL0_PLLEN_Pos))
#define PMC_AUDIO_PLL0_PADEN_Pos              _U_(1)                                               /**< (PMC_AUDIO_PLL0) Pad Clock Enable Position */
#define PMC_AUDIO_PLL0_PADEN_Msk              (_U_(0x1) << PMC_AUDIO_PLL0_PADEN_Pos)               /**< (PMC_AUDIO_PLL0) Pad Clock Enable Mask */
#define PMC_AUDIO_PLL0_PADEN(value)           (PMC_AUDIO_PLL0_PADEN_Msk & ((value) << PMC_AUDIO_PLL0_PADEN_Pos))
#define PMC_AUDIO_PLL0_PMCEN_Pos              _U_(2)                                               /**< (PMC_AUDIO_PLL0) PMC Clock Enable Position */
#define PMC_AUDIO_PLL0_PMCEN_Msk              (_U_(0x1) << PMC_AUDIO_PLL0_PMCEN_Pos)               /**< (PMC_AUDIO_PLL0) PMC Clock Enable Mask */
#define PMC_AUDIO_PLL0_PMCEN(value)           (PMC_AUDIO_PLL0_PMCEN_Msk & ((value) << PMC_AUDIO_PLL0_PMCEN_Pos))
#define PMC_AUDIO_PLL0_RESETN_Pos             _U_(3)                                               /**< (PMC_AUDIO_PLL0) Audio PLL Reset Position */
#define PMC_AUDIO_PLL0_RESETN_Msk             (_U_(0x1) << PMC_AUDIO_PLL0_RESETN_Pos)              /**< (PMC_AUDIO_PLL0) Audio PLL Reset Mask */
#define PMC_AUDIO_PLL0_RESETN(value)          (PMC_AUDIO_PLL0_RESETN_Msk & ((value) << PMC_AUDIO_PLL0_RESETN_Pos))
#define PMC_AUDIO_PLL0_PLLFLT_Pos             _U_(4)                                               /**< (PMC_AUDIO_PLL0) PLL Loop Filter Selection Position */
#define PMC_AUDIO_PLL0_PLLFLT_Msk             (_U_(0xF) << PMC_AUDIO_PLL0_PLLFLT_Pos)              /**< (PMC_AUDIO_PLL0) PLL Loop Filter Selection Mask */
#define PMC_AUDIO_PLL0_PLLFLT(value)          (PMC_AUDIO_PLL0_PLLFLT_Msk & ((value) << PMC_AUDIO_PLL0_PLLFLT_Pos))
#define PMC_AUDIO_PLL0_ND_Pos                 _U_(8)                                               /**< (PMC_AUDIO_PLL0) Loop Divider Ratio Position */
#define PMC_AUDIO_PLL0_ND_Msk                 (_U_(0x7F) << PMC_AUDIO_PLL0_ND_Pos)                 /**< (PMC_AUDIO_PLL0) Loop Divider Ratio Mask */
#define PMC_AUDIO_PLL0_ND(value)              (PMC_AUDIO_PLL0_ND_Msk & ((value) << PMC_AUDIO_PLL0_ND_Pos))
#define PMC_AUDIO_PLL0_QDPMC_Pos              _U_(16)                                              /**< (PMC_AUDIO_PLL0) Output Divider Ratio for PMC Clock Position */
#define PMC_AUDIO_PLL0_QDPMC_Msk              (_U_(0x7F) << PMC_AUDIO_PLL0_QDPMC_Pos)              /**< (PMC_AUDIO_PLL0) Output Divider Ratio for PMC Clock Mask */
#define PMC_AUDIO_PLL0_QDPMC(value)           (PMC_AUDIO_PLL0_QDPMC_Msk & ((value) << PMC_AUDIO_PLL0_QDPMC_Pos))
#define PMC_AUDIO_PLL0_DCO_FILTER_Pos         _U_(24)                                              /**< (PMC_AUDIO_PLL0) Digitally Controlled Oscillator Filter Selection Position */
#define PMC_AUDIO_PLL0_DCO_FILTER_Msk         (_U_(0xF) << PMC_AUDIO_PLL0_DCO_FILTER_Pos)          /**< (PMC_AUDIO_PLL0) Digitally Controlled Oscillator Filter Selection Mask */
#define PMC_AUDIO_PLL0_DCO_FILTER(value)      (PMC_AUDIO_PLL0_DCO_FILTER_Msk & ((value) << PMC_AUDIO_PLL0_DCO_FILTER_Pos))
#define PMC_AUDIO_PLL0_DCO_GAIN_Pos           _U_(28)                                              /**< (PMC_AUDIO_PLL0) Digitally Controlled Oscillator Gain Selection Position */
#define PMC_AUDIO_PLL0_DCO_GAIN_Msk           (_U_(0x3) << PMC_AUDIO_PLL0_DCO_GAIN_Pos)            /**< (PMC_AUDIO_PLL0) Digitally Controlled Oscillator Gain Selection Mask */
#define PMC_AUDIO_PLL0_DCO_GAIN(value)        (PMC_AUDIO_PLL0_DCO_GAIN_Msk & ((value) << PMC_AUDIO_PLL0_DCO_GAIN_Pos))
#define PMC_AUDIO_PLL0_Msk                    _U_(0x3F7F7FFF)                                      /**< (PMC_AUDIO_PLL0) Register Mask  */


/* -------- PMC_AUDIO_PLL1 : (PMC Offset: 0x150) (R/W 32) Audio PLL Register 1 -------- */
#define PMC_AUDIO_PLL1_FRACR_Pos              _U_(0)                                               /**< (PMC_AUDIO_PLL1) Fractional Loop Divider Setting Position */
#define PMC_AUDIO_PLL1_FRACR_Msk              (_U_(0x3FFFFF) << PMC_AUDIO_PLL1_FRACR_Pos)          /**< (PMC_AUDIO_PLL1) Fractional Loop Divider Setting Mask */
#define PMC_AUDIO_PLL1_FRACR(value)           (PMC_AUDIO_PLL1_FRACR_Msk & ((value) << PMC_AUDIO_PLL1_FRACR_Pos))
#define PMC_AUDIO_PLL1_DIV_Pos                _U_(24)                                              /**< (PMC_AUDIO_PLL1) Divider Value Position */
#define PMC_AUDIO_PLL1_DIV_Msk                (_U_(0x3) << PMC_AUDIO_PLL1_DIV_Pos)                 /**< (PMC_AUDIO_PLL1) Divider Value Mask */
#define PMC_AUDIO_PLL1_DIV(value)             (PMC_AUDIO_PLL1_DIV_Msk & ((value) << PMC_AUDIO_PLL1_DIV_Pos))
#define   PMC_AUDIO_PLL1_DIV_DIV2_Val         _U_(0x2)                                             /**< (PMC_AUDIO_PLL1) Divide by 2  */
#define   PMC_AUDIO_PLL1_DIV_DIV3_Val         _U_(0x3)                                             /**< (PMC_AUDIO_PLL1) Divide by 3  */
#define PMC_AUDIO_PLL1_DIV_DIV2               (PMC_AUDIO_PLL1_DIV_DIV2_Val << PMC_AUDIO_PLL1_DIV_Pos) /**< (PMC_AUDIO_PLL1) Divide by 2 Position  */
#define PMC_AUDIO_PLL1_DIV_DIV3               (PMC_AUDIO_PLL1_DIV_DIV3_Val << PMC_AUDIO_PLL1_DIV_Pos) /**< (PMC_AUDIO_PLL1) Divide by 3 Position  */
#define PMC_AUDIO_PLL1_QDAUDIO_Pos            _U_(26)                                              /**< (PMC_AUDIO_PLL1) Output Divider Ratio for Pad Clock Position */
#define PMC_AUDIO_PLL1_QDAUDIO_Msk            (_U_(0x1F) << PMC_AUDIO_PLL1_QDAUDIO_Pos)            /**< (PMC_AUDIO_PLL1) Output Divider Ratio for Pad Clock Mask */
#define PMC_AUDIO_PLL1_QDAUDIO(value)         (PMC_AUDIO_PLL1_QDAUDIO_Msk & ((value) << PMC_AUDIO_PLL1_QDAUDIO_Pos))
#define PMC_AUDIO_PLL1_Msk                    _U_(0x7F3FFFFF)                                      /**< (PMC_AUDIO_PLL1) Register Mask  */


/** \brief PMC register offsets definitions */
#define PMC_SCER_REG_OFST              (0x00)              /**< (PMC_SCER) System Clock Enable Register Offset */
#define PMC_SCDR_REG_OFST              (0x04)              /**< (PMC_SCDR) System Clock Disable Register Offset */
#define PMC_SCSR_REG_OFST              (0x08)              /**< (PMC_SCSR) System Clock Status Register Offset */
#define PMC_PCER0_REG_OFST             (0x10)              /**< (PMC_PCER0) Peripheral Clock Enable Register 0 Offset */
#define PMC_PCDR0_REG_OFST             (0x14)              /**< (PMC_PCDR0) Peripheral Clock Disable Register 0 Offset */
#define PMC_PCSR0_REG_OFST             (0x18)              /**< (PMC_PCSR0) Peripheral Clock Status Register 0 Offset */
#define CKGR_UCKR_REG_OFST             (0x1C)              /**< (CKGR_UCKR) UTMI Clock Register Offset */
#define CKGR_MOR_REG_OFST              (0x20)              /**< (CKGR_MOR) Main Oscillator Register Offset */
#define CKGR_MCFR_REG_OFST             (0x24)              /**< (CKGR_MCFR) Main Clock Frequency Register Offset */
#define CKGR_PLLAR_REG_OFST            (0x28)              /**< (CKGR_PLLAR) PLLA Register Offset */
#define PMC_MCKR_REG_OFST              (0x30)              /**< (PMC_MCKR) Master Clock Register Offset */
#define PMC_USB_REG_OFST               (0x38)              /**< (PMC_USB) USB Clock Register Offset */
#define PMC_PCK_REG_OFST               (0x40)              /**< (PMC_PCK) Programmable Clock 0 Register Offset */
#define PMC_PCK0_REG_OFST              (0x40)              /**< (PMC_PCK0) Programmable Clock 0 Register Offset */
#define PMC_PCK1_REG_OFST              (0x44)              /**< (PMC_PCK1) Programmable Clock 0 Register Offset */
#define PMC_PCK2_REG_OFST              (0x48)              /**< (PMC_PCK2) Programmable Clock 0 Register Offset */
#define PMC_IER_REG_OFST               (0x60)              /**< (PMC_IER) Interrupt Enable Register Offset */
#define PMC_IDR_REG_OFST               (0x64)              /**< (PMC_IDR) Interrupt Disable Register Offset */
#define PMC_SR_REG_OFST                (0x68)              /**< (PMC_SR) Status Register Offset */
#define PMC_IMR_REG_OFST               (0x6C)              /**< (PMC_IMR) Interrupt Mask Register Offset */
#define PMC_FSMR_REG_OFST              (0x70)              /**< (PMC_FSMR) Fast Startup Mode Register Offset */
#define PMC_FSPR_REG_OFST              (0x74)              /**< (PMC_FSPR) Fast Startup Polarity Register Offset */
#define PMC_FOCR_REG_OFST              (0x78)              /**< (PMC_FOCR) Fault Output Clear Register Offset */
#define PMC_PLLICPR_REG_OFST           (0x80)              /**< (PMC_PLLICPR) PLL Charge Pump Current Register Offset */
#define PMC_WPMR_REG_OFST              (0xE4)              /**< (PMC_WPMR) Write ProtectIon Mode Register Offset */
#define PMC_WPSR_REG_OFST              (0xE8)              /**< (PMC_WPSR) Write Protection Status Register Offset */
#define PMC_PCER1_REG_OFST             (0x100)             /**< (PMC_PCER1) Peripheral Clock Enable Register 1 Offset */
#define PMC_PCDR1_REG_OFST             (0x104)             /**< (PMC_PCDR1) Peripheral Clock Disable Register 1 Offset */
#define PMC_PCSR1_REG_OFST             (0x108)             /**< (PMC_PCSR1) Peripheral Clock Status Register 1 Offset */
#define PMC_PCR_REG_OFST               (0x10C)             /**< (PMC_PCR) Peripheral Control Register Offset */
#define PMC_OCR_REG_OFST               (0x110)             /**< (PMC_OCR) Oscillator Calibration Register Offset */
#define PMC_SLPWK_ER0_REG_OFST         (0x114)             /**< (PMC_SLPWK_ER0) SleepWalking Enable Register 0 Offset */
#define PMC_SLPWK_DR0_REG_OFST         (0x118)             /**< (PMC_SLPWK_DR0) SleepWalking Disable Register 0 Offset */
#define PMC_SLPWK_SR0_REG_OFST         (0x11C)             /**< (PMC_SLPWK_SR0) SleepWalking Status Register 0 Offset */
#define PMC_SLPWK_ASR0_REG_OFST        (0x120)             /**< (PMC_SLPWK_ASR0) SleepWalking Activity Status Register 0 Offset */
#define PMC_SLPWK_ER1_REG_OFST         (0x134)             /**< (PMC_SLPWK_ER1) SleepWalking Enable Register 1 Offset */
#define PMC_SLPWK_DR1_REG_OFST         (0x138)             /**< (PMC_SLPWK_DR1) SleepWalking Disable Register 1 Offset */
#define PMC_SLPWK_SR1_REG_OFST         (0x13C)             /**< (PMC_SLPWK_SR1) SleepWalking Status Register 1 Offset */
#define PMC_SLPWK_ASR1_REG_OFST        (0x140)             /**< (PMC_SLPWK_ASR1) SleepWalking Activity Status Register 1 Offset */
#define PMC_SLPWK_AIPR_REG_OFST        (0x144)             /**< (PMC_SLPWK_AIPR) SleepWalking Activity In Progress Register Offset */
#define PMC_SLPWKCR_REG_OFST           (0x148)             /**< (PMC_SLPWKCR) SleepWalking Control Register Offset */
#define PMC_AUDIO_PLL0_REG_OFST        (0x14C)             /**< (PMC_AUDIO_PLL0) Audio PLL Register 0 Offset */
#define PMC_AUDIO_PLL1_REG_OFST        (0x150)             /**< (PMC_AUDIO_PLL1) Audio PLL Register 1 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PMC register API structure */
typedef struct
{
  __O   uint32_t                       PMC_SCER;           /**< Offset: 0x00 ( /W  32) System Clock Enable Register */
  __O   uint32_t                       PMC_SCDR;           /**< Offset: 0x04 ( /W  32) System Clock Disable Register */
  __I   uint32_t                       PMC_SCSR;           /**< Offset: 0x08 (R/   32) System Clock Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       PMC_PCER0;          /**< Offset: 0x10 ( /W  32) Peripheral Clock Enable Register 0 */
  __O   uint32_t                       PMC_PCDR0;          /**< Offset: 0x14 ( /W  32) Peripheral Clock Disable Register 0 */
  __I   uint32_t                       PMC_PCSR0;          /**< Offset: 0x18 (R/   32) Peripheral Clock Status Register 0 */
  __IO  uint32_t                       CKGR_UCKR;          /**< Offset: 0x1C (R/W  32) UTMI Clock Register */
  __IO  uint32_t                       CKGR_MOR;           /**< Offset: 0x20 (R/W  32) Main Oscillator Register */
  __IO  uint32_t                       CKGR_MCFR;          /**< Offset: 0x24 (R/W  32) Main Clock Frequency Register */
  __IO  uint32_t                       CKGR_PLLAR;         /**< Offset: 0x28 (R/W  32) PLLA Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       PMC_MCKR;           /**< Offset: 0x30 (R/W  32) Master Clock Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       PMC_USB;            /**< Offset: 0x38 (R/W  32) USB Clock Register */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       PMC_PCK[3];         /**< Offset: 0x40 (R/W  32) Programmable Clock 0 Register */
  __I   uint8_t                        Reserved5[0x14];
  __O   uint32_t                       PMC_IER;            /**< Offset: 0x60 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PMC_IDR;            /**< Offset: 0x64 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PMC_SR;             /**< Offset: 0x68 (R/   32) Status Register */
  __I   uint32_t                       PMC_IMR;            /**< Offset: 0x6C (R/   32) Interrupt Mask Register */
  __IO  uint32_t                       PMC_FSMR;           /**< Offset: 0x70 (R/W  32) Fast Startup Mode Register */
  __IO  uint32_t                       PMC_FSPR;           /**< Offset: 0x74 (R/W  32) Fast Startup Polarity Register */
  __O   uint32_t                       PMC_FOCR;           /**< Offset: 0x78 ( /W  32) Fault Output Clear Register */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       PMC_PLLICPR;        /**< Offset: 0x80 (R/W  32) PLL Charge Pump Current Register */
  __I   uint8_t                        Reserved7[0x60];
  __IO  uint32_t                       PMC_WPMR;           /**< Offset: 0xE4 (R/W  32) Write ProtectIon Mode Register */
  __I   uint32_t                       PMC_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved8[0x14];
  __O   uint32_t                       PMC_PCER1;          /**< Offset: 0x100 ( /W  32) Peripheral Clock Enable Register 1 */
  __O   uint32_t                       PMC_PCDR1;          /**< Offset: 0x104 ( /W  32) Peripheral Clock Disable Register 1 */
  __I   uint32_t                       PMC_PCSR1;          /**< Offset: 0x108 (R/   32) Peripheral Clock Status Register 1 */
  __IO  uint32_t                       PMC_PCR;            /**< Offset: 0x10C (R/W  32) Peripheral Control Register */
  __IO  uint32_t                       PMC_OCR;            /**< Offset: 0x110 (R/W  32) Oscillator Calibration Register */
  __O   uint32_t                       PMC_SLPWK_ER0;      /**< Offset: 0x114 ( /W  32) SleepWalking Enable Register 0 */
  __O   uint32_t                       PMC_SLPWK_DR0;      /**< Offset: 0x118 ( /W  32) SleepWalking Disable Register 0 */
  __I   uint32_t                       PMC_SLPWK_SR0;      /**< Offset: 0x11C (R/   32) SleepWalking Status Register 0 */
  __I   uint32_t                       PMC_SLPWK_ASR0;     /**< Offset: 0x120 (R/   32) SleepWalking Activity Status Register 0 */
  __I   uint8_t                        Reserved9[0x10];
  __O   uint32_t                       PMC_SLPWK_ER1;      /**< Offset: 0x134 ( /W  32) SleepWalking Enable Register 1 */
  __O   uint32_t                       PMC_SLPWK_DR1;      /**< Offset: 0x138 ( /W  32) SleepWalking Disable Register 1 */
  __I   uint32_t                       PMC_SLPWK_SR1;      /**< Offset: 0x13C (R/   32) SleepWalking Status Register 1 */
  __I   uint32_t                       PMC_SLPWK_ASR1;     /**< Offset: 0x140 (R/   32) SleepWalking Activity Status Register 1 */
  __I   uint32_t                       PMC_SLPWK_AIPR;     /**< Offset: 0x144 (R/   32) SleepWalking Activity In Progress Register */
  __IO  uint32_t                       PMC_SLPWKCR;        /**< Offset: 0x148 (R/W  32) SleepWalking Control Register */
  __IO  uint32_t                       PMC_AUDIO_PLL0;     /**< Offset: 0x14C (R/W  32) Audio PLL Register 0 */
  __IO  uint32_t                       PMC_AUDIO_PLL1;     /**< Offset: 0x150 (R/W  32) Audio PLL Register 1 */
} pmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_PMC_COMPONENT_H_ */
