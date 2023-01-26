/**
 * \brief Component description for OPAMP
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

/* file generated from device description version 2020-11-19T08:59:42Z */
#ifndef _SAML21_OPAMP_COMPONENT_H_
#define _SAML21_OPAMP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR OPAMP                                        */
/* ************************************************************************** */

/* -------- OPAMP_CTRLA : (OPAMP Offset: 0x00) (R/W 8) Control A -------- */
#define OPAMP_CTRLA_RESETVALUE                _U_(0x00)                                            /**<  (OPAMP_CTRLA) Control A  Reset Value */

#define OPAMP_CTRLA_SWRST_Pos                 _U_(0)                                               /**< (OPAMP_CTRLA) Software Reset Position */
#define OPAMP_CTRLA_SWRST_Msk                 (_U_(0x1) << OPAMP_CTRLA_SWRST_Pos)                  /**< (OPAMP_CTRLA) Software Reset Mask */
#define OPAMP_CTRLA_SWRST(value)              (OPAMP_CTRLA_SWRST_Msk & ((value) << OPAMP_CTRLA_SWRST_Pos))
#define OPAMP_CTRLA_ENABLE_Pos                _U_(1)                                               /**< (OPAMP_CTRLA) Enable Position */
#define OPAMP_CTRLA_ENABLE_Msk                (_U_(0x1) << OPAMP_CTRLA_ENABLE_Pos)                 /**< (OPAMP_CTRLA) Enable Mask */
#define OPAMP_CTRLA_ENABLE(value)             (OPAMP_CTRLA_ENABLE_Msk & ((value) << OPAMP_CTRLA_ENABLE_Pos))
#define OPAMP_CTRLA_LPMUX_Pos                 _U_(7)                                               /**< (OPAMP_CTRLA) Low-Power Mux Position */
#define OPAMP_CTRLA_LPMUX_Msk                 (_U_(0x1) << OPAMP_CTRLA_LPMUX_Pos)                  /**< (OPAMP_CTRLA) Low-Power Mux Mask */
#define OPAMP_CTRLA_LPMUX(value)              (OPAMP_CTRLA_LPMUX_Msk & ((value) << OPAMP_CTRLA_LPMUX_Pos))
#define OPAMP_CTRLA_Msk                       _U_(0x83)                                            /**< (OPAMP_CTRLA) Register Mask  */


/* -------- OPAMP_STATUS : (OPAMP Offset: 0x02) ( R/ 8) Status -------- */
#define OPAMP_STATUS_RESETVALUE               _U_(0x00)                                            /**<  (OPAMP_STATUS) Status  Reset Value */

#define OPAMP_STATUS_READY0_Pos               _U_(0)                                               /**< (OPAMP_STATUS) OPAMP 0 Ready Position */
#define OPAMP_STATUS_READY0_Msk               (_U_(0x1) << OPAMP_STATUS_READY0_Pos)                /**< (OPAMP_STATUS) OPAMP 0 Ready Mask */
#define OPAMP_STATUS_READY0(value)            (OPAMP_STATUS_READY0_Msk & ((value) << OPAMP_STATUS_READY0_Pos))
#define OPAMP_STATUS_READY1_Pos               _U_(1)                                               /**< (OPAMP_STATUS) OPAMP 1 Ready Position */
#define OPAMP_STATUS_READY1_Msk               (_U_(0x1) << OPAMP_STATUS_READY1_Pos)                /**< (OPAMP_STATUS) OPAMP 1 Ready Mask */
#define OPAMP_STATUS_READY1(value)            (OPAMP_STATUS_READY1_Msk & ((value) << OPAMP_STATUS_READY1_Pos))
#define OPAMP_STATUS_READY2_Pos               _U_(2)                                               /**< (OPAMP_STATUS) OPAMP 2 Ready Position */
#define OPAMP_STATUS_READY2_Msk               (_U_(0x1) << OPAMP_STATUS_READY2_Pos)                /**< (OPAMP_STATUS) OPAMP 2 Ready Mask */
#define OPAMP_STATUS_READY2(value)            (OPAMP_STATUS_READY2_Msk & ((value) << OPAMP_STATUS_READY2_Pos))
#define OPAMP_STATUS_Msk                      _U_(0x07)                                            /**< (OPAMP_STATUS) Register Mask  */

#define OPAMP_STATUS_READY_Pos                _U_(0)                                               /**< (OPAMP_STATUS Position) OPAMP 2 Ready */
#define OPAMP_STATUS_READY_Msk                (_U_(0x7) << OPAMP_STATUS_READY_Pos)                 /**< (OPAMP_STATUS Mask) READY */
#define OPAMP_STATUS_READY(value)             (OPAMP_STATUS_READY_Msk & ((value) << OPAMP_STATUS_READY_Pos)) 

/* -------- OPAMP_OPAMPCTRL0 : (OPAMP Offset: 0x04) (R/W 32) OPAMP0 Control -------- */
#define OPAMP_OPAMPCTRL0_RESETVALUE           _U_(0x00)                                            /**<  (OPAMP_OPAMPCTRL0) OPAMP0 Control  Reset Value */

#define OPAMP_OPAMPCTRL0_ENABLE_Pos           _U_(1)                                               /**< (OPAMP_OPAMPCTRL0) Operational Amplifier Enable Position */
#define OPAMP_OPAMPCTRL0_ENABLE_Msk           (_U_(0x1) << OPAMP_OPAMPCTRL0_ENABLE_Pos)            /**< (OPAMP_OPAMPCTRL0) Operational Amplifier Enable Mask */
#define OPAMP_OPAMPCTRL0_ENABLE(value)        (OPAMP_OPAMPCTRL0_ENABLE_Msk & ((value) << OPAMP_OPAMPCTRL0_ENABLE_Pos))
#define OPAMP_OPAMPCTRL0_ANAOUT_Pos           _U_(2)                                               /**< (OPAMP_OPAMPCTRL0) Analog Output Position */
#define OPAMP_OPAMPCTRL0_ANAOUT_Msk           (_U_(0x1) << OPAMP_OPAMPCTRL0_ANAOUT_Pos)            /**< (OPAMP_OPAMPCTRL0) Analog Output Mask */
#define OPAMP_OPAMPCTRL0_ANAOUT(value)        (OPAMP_OPAMPCTRL0_ANAOUT_Msk & ((value) << OPAMP_OPAMPCTRL0_ANAOUT_Pos))
#define OPAMP_OPAMPCTRL0_BIAS_Pos             _U_(3)                                               /**< (OPAMP_OPAMPCTRL0) Bias Selection Position */
#define OPAMP_OPAMPCTRL0_BIAS_Msk             (_U_(0x3) << OPAMP_OPAMPCTRL0_BIAS_Pos)              /**< (OPAMP_OPAMPCTRL0) Bias Selection Mask */
#define OPAMP_OPAMPCTRL0_BIAS(value)          (OPAMP_OPAMPCTRL0_BIAS_Msk & ((value) << OPAMP_OPAMPCTRL0_BIAS_Pos))
#define   OPAMP_OPAMPCTRL0_BIAS_MODE0_Val     _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL0) Minimum current consumption, but the slowest mode  */
#define   OPAMP_OPAMPCTRL0_BIAS_MODE1_Val     _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL0) Low current consumption, slow speed  */
#define   OPAMP_OPAMPCTRL0_BIAS_MODE2_Val     _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL0) High current consumption, fast speed  */
#define   OPAMP_OPAMPCTRL0_BIAS_MODE3_Val     _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL0) Maximum current consumption but the fastest mode  */
#define OPAMP_OPAMPCTRL0_BIAS_MODE0           (OPAMP_OPAMPCTRL0_BIAS_MODE0_Val << OPAMP_OPAMPCTRL0_BIAS_Pos) /**< (OPAMP_OPAMPCTRL0) Minimum current consumption, but the slowest mode Position  */
#define OPAMP_OPAMPCTRL0_BIAS_MODE1           (OPAMP_OPAMPCTRL0_BIAS_MODE1_Val << OPAMP_OPAMPCTRL0_BIAS_Pos) /**< (OPAMP_OPAMPCTRL0) Low current consumption, slow speed Position  */
#define OPAMP_OPAMPCTRL0_BIAS_MODE2           (OPAMP_OPAMPCTRL0_BIAS_MODE2_Val << OPAMP_OPAMPCTRL0_BIAS_Pos) /**< (OPAMP_OPAMPCTRL0) High current consumption, fast speed Position  */
#define OPAMP_OPAMPCTRL0_BIAS_MODE3           (OPAMP_OPAMPCTRL0_BIAS_MODE3_Val << OPAMP_OPAMPCTRL0_BIAS_Pos) /**< (OPAMP_OPAMPCTRL0) Maximum current consumption but the fastest mode Position  */
#define OPAMP_OPAMPCTRL0_RUNSTDBY_Pos         _U_(6)                                               /**< (OPAMP_OPAMPCTRL0) Run in Standby Position */
#define OPAMP_OPAMPCTRL0_RUNSTDBY_Msk         (_U_(0x1) << OPAMP_OPAMPCTRL0_RUNSTDBY_Pos)          /**< (OPAMP_OPAMPCTRL0) Run in Standby Mask */
#define OPAMP_OPAMPCTRL0_RUNSTDBY(value)      (OPAMP_OPAMPCTRL0_RUNSTDBY_Msk & ((value) << OPAMP_OPAMPCTRL0_RUNSTDBY_Pos))
#define OPAMP_OPAMPCTRL0_ONDEMAND_Pos         _U_(7)                                               /**< (OPAMP_OPAMPCTRL0) On Demand Control Position */
#define OPAMP_OPAMPCTRL0_ONDEMAND_Msk         (_U_(0x1) << OPAMP_OPAMPCTRL0_ONDEMAND_Pos)          /**< (OPAMP_OPAMPCTRL0) On Demand Control Mask */
#define OPAMP_OPAMPCTRL0_ONDEMAND(value)      (OPAMP_OPAMPCTRL0_ONDEMAND_Msk & ((value) << OPAMP_OPAMPCTRL0_ONDEMAND_Pos))
#define OPAMP_OPAMPCTRL0_RES2OUT_Pos          _U_(8)                                               /**< (OPAMP_OPAMPCTRL0) Resistor ladder To Output Position */
#define OPAMP_OPAMPCTRL0_RES2OUT_Msk          (_U_(0x1) << OPAMP_OPAMPCTRL0_RES2OUT_Pos)           /**< (OPAMP_OPAMPCTRL0) Resistor ladder To Output Mask */
#define OPAMP_OPAMPCTRL0_RES2OUT(value)       (OPAMP_OPAMPCTRL0_RES2OUT_Msk & ((value) << OPAMP_OPAMPCTRL0_RES2OUT_Pos))
#define OPAMP_OPAMPCTRL0_RES2VCC_Pos          _U_(9)                                               /**< (OPAMP_OPAMPCTRL0) Resistor ladder To VCC Position */
#define OPAMP_OPAMPCTRL0_RES2VCC_Msk          (_U_(0x1) << OPAMP_OPAMPCTRL0_RES2VCC_Pos)           /**< (OPAMP_OPAMPCTRL0) Resistor ladder To VCC Mask */
#define OPAMP_OPAMPCTRL0_RES2VCC(value)       (OPAMP_OPAMPCTRL0_RES2VCC_Msk & ((value) << OPAMP_OPAMPCTRL0_RES2VCC_Pos))
#define OPAMP_OPAMPCTRL0_RES1EN_Pos           _U_(10)                                              /**< (OPAMP_OPAMPCTRL0) Resistor 1 Enable Position */
#define OPAMP_OPAMPCTRL0_RES1EN_Msk           (_U_(0x1) << OPAMP_OPAMPCTRL0_RES1EN_Pos)            /**< (OPAMP_OPAMPCTRL0) Resistor 1 Enable Mask */
#define OPAMP_OPAMPCTRL0_RES1EN(value)        (OPAMP_OPAMPCTRL0_RES1EN_Msk & ((value) << OPAMP_OPAMPCTRL0_RES1EN_Pos))
#define OPAMP_OPAMPCTRL0_RES1MUX_Pos          _U_(11)                                              /**< (OPAMP_OPAMPCTRL0) Resistor 1 Mux Position */
#define OPAMP_OPAMPCTRL0_RES1MUX_Msk          (_U_(0x3) << OPAMP_OPAMPCTRL0_RES1MUX_Pos)           /**< (OPAMP_OPAMPCTRL0) Resistor 1 Mux Mask */
#define OPAMP_OPAMPCTRL0_RES1MUX(value)       (OPAMP_OPAMPCTRL0_RES1MUX_Msk & ((value) << OPAMP_OPAMPCTRL0_RES1MUX_Pos))
#define   OPAMP_OPAMPCTRL0_RES1MUX_OAxPOS_Val _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL0) Positive inout of OPAMPx  */
#define   OPAMP_OPAMPCTRL0_RES1MUX_OAxNEG_Val _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL0) Negative input of OPAMPx  */
#define   OPAMP_OPAMPCTRL0_RES1MUX_DAC_Val    _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL0) DAC output  */
#define   OPAMP_OPAMPCTRL0_RES1MUX_GND_Val    _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL0) Ground  */
#define OPAMP_OPAMPCTRL0_RES1MUX_OAxPOS       (OPAMP_OPAMPCTRL0_RES1MUX_OAxPOS_Val << OPAMP_OPAMPCTRL0_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL0) Positive inout of OPAMPx Position  */
#define OPAMP_OPAMPCTRL0_RES1MUX_OAxNEG       (OPAMP_OPAMPCTRL0_RES1MUX_OAxNEG_Val << OPAMP_OPAMPCTRL0_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL0) Negative input of OPAMPx Position  */
#define OPAMP_OPAMPCTRL0_RES1MUX_DAC          (OPAMP_OPAMPCTRL0_RES1MUX_DAC_Val << OPAMP_OPAMPCTRL0_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL0) DAC output Position  */
#define OPAMP_OPAMPCTRL0_RES1MUX_GND          (OPAMP_OPAMPCTRL0_RES1MUX_GND_Val << OPAMP_OPAMPCTRL0_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL0) Ground Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_Pos           _U_(13)                                              /**< (OPAMP_OPAMPCTRL0) Potentiometer Selection Position */
#define OPAMP_OPAMPCTRL0_POTMUX_Msk           (_U_(0x7) << OPAMP_OPAMPCTRL0_POTMUX_Pos)            /**< (OPAMP_OPAMPCTRL0) Potentiometer Selection Mask */
#define OPAMP_OPAMPCTRL0_POTMUX(value)        (OPAMP_OPAMPCTRL0_POTMUX_Msk & ((value) << OPAMP_OPAMPCTRL0_POTMUX_Pos))
#define   OPAMP_OPAMPCTRL0_POTMUX_14R_2R_Val  _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL0) R1 = 14R, R2 = 2R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_12R_4R_Val  _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL0) R1 = 12R, R2 = 4R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_8R_8R_Val   _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL0) R1 = 8R, R2 = 8R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_6R_10R_Val  _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL0) R1 = 6R, R2 = 10R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_4R_12R_Val  _U_(0x4)                                             /**< (OPAMP_OPAMPCTRL0) R1 = 4R, R2 = 12R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_3R_13R_Val  _U_(0x5)                                             /**< (OPAMP_OPAMPCTRL0) R1 = 3R, R2 = 13R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_2R_14R_Val  _U_(0x6)                                             /**< (OPAMP_OPAMPCTRL0) R1 = 2R, R2 = 14R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_R_15R_Val   _U_(0x7)                                             /**< (OPAMP_OPAMPCTRL0) R1 = 1R, R2 = 15R  */
#define OPAMP_OPAMPCTRL0_POTMUX_14R_2R        (OPAMP_OPAMPCTRL0_POTMUX_14R_2R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL0) R1 = 14R, R2 = 2R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_12R_4R        (OPAMP_OPAMPCTRL0_POTMUX_12R_4R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL0) R1 = 12R, R2 = 4R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_8R_8R         (OPAMP_OPAMPCTRL0_POTMUX_8R_8R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL0) R1 = 8R, R2 = 8R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_6R_10R        (OPAMP_OPAMPCTRL0_POTMUX_6R_10R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL0) R1 = 6R, R2 = 10R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_4R_12R        (OPAMP_OPAMPCTRL0_POTMUX_4R_12R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL0) R1 = 4R, R2 = 12R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_3R_13R        (OPAMP_OPAMPCTRL0_POTMUX_3R_13R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL0) R1 = 3R, R2 = 13R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_2R_14R        (OPAMP_OPAMPCTRL0_POTMUX_2R_14R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL0) R1 = 2R, R2 = 14R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_R_15R         (OPAMP_OPAMPCTRL0_POTMUX_R_15R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL0) R1 = 1R, R2 = 15R Position  */
#define OPAMP_OPAMPCTRL0_MUXPOS_Pos           _U_(16)                                              /**< (OPAMP_OPAMPCTRL0) Positive Input Mux Selection Position */
#define OPAMP_OPAMPCTRL0_MUXPOS_Msk           (_U_(0x7) << OPAMP_OPAMPCTRL0_MUXPOS_Pos)            /**< (OPAMP_OPAMPCTRL0) Positive Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL0_MUXPOS(value)        (OPAMP_OPAMPCTRL0_MUXPOS_Msk & ((value) << OPAMP_OPAMPCTRL0_MUXPOS_Pos))
#define   OPAMP_OPAMPCTRL0_MUXPOS_OA0POS_Val  _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL0) Positive I/O pin  */
#define   OPAMP_OPAMPCTRL0_MUXPOS_OA0TAP_Val  _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL0) Resistor ladder 0 taps  */
#define   OPAMP_OPAMPCTRL0_MUXPOS_DAC_Val     _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL0) DAC output  */
#define   OPAMP_OPAMPCTRL0_MUXPOS_GND_Val     _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL0) Ground  */
#define OPAMP_OPAMPCTRL0_MUXPOS_OA0POS        (OPAMP_OPAMPCTRL0_MUXPOS_OA0POS_Val << OPAMP_OPAMPCTRL0_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL0) Positive I/O pin Position  */
#define OPAMP_OPAMPCTRL0_MUXPOS_OA0TAP        (OPAMP_OPAMPCTRL0_MUXPOS_OA0TAP_Val << OPAMP_OPAMPCTRL0_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL0) Resistor ladder 0 taps Position  */
#define OPAMP_OPAMPCTRL0_MUXPOS_DAC           (OPAMP_OPAMPCTRL0_MUXPOS_DAC_Val << OPAMP_OPAMPCTRL0_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL0) DAC output Position  */
#define OPAMP_OPAMPCTRL0_MUXPOS_GND           (OPAMP_OPAMPCTRL0_MUXPOS_GND_Val << OPAMP_OPAMPCTRL0_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL0) Ground Position  */
#define OPAMP_OPAMPCTRL0_MUXNEG_Pos           _U_(20)                                              /**< (OPAMP_OPAMPCTRL0) Negative Input Mux Selection Position */
#define OPAMP_OPAMPCTRL0_MUXNEG_Msk           (_U_(0x7) << OPAMP_OPAMPCTRL0_MUXNEG_Pos)            /**< (OPAMP_OPAMPCTRL0) Negative Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL0_MUXNEG(value)        (OPAMP_OPAMPCTRL0_MUXNEG_Msk & ((value) << OPAMP_OPAMPCTRL0_MUXNEG_Pos))
#define   OPAMP_OPAMPCTRL0_MUXNEG_OA0NEG_Val  _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL0) Negative I/O pin  */
#define   OPAMP_OPAMPCTRL0_MUXNEG_OA0TAP_Val  _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL0) Resistor ladder 0 taps  */
#define   OPAMP_OPAMPCTRL0_MUXNEG_OA0OUT_Val  _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL0) OPAMP0 output  */
#define   OPAMP_OPAMPCTRL0_MUXNEG_DAC_Val     _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL0) DAC output  */
#define OPAMP_OPAMPCTRL0_MUXNEG_OA0NEG        (OPAMP_OPAMPCTRL0_MUXNEG_OA0NEG_Val << OPAMP_OPAMPCTRL0_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL0) Negative I/O pin Position  */
#define OPAMP_OPAMPCTRL0_MUXNEG_OA0TAP        (OPAMP_OPAMPCTRL0_MUXNEG_OA0TAP_Val << OPAMP_OPAMPCTRL0_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL0) Resistor ladder 0 taps Position  */
#define OPAMP_OPAMPCTRL0_MUXNEG_OA0OUT        (OPAMP_OPAMPCTRL0_MUXNEG_OA0OUT_Val << OPAMP_OPAMPCTRL0_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL0) OPAMP0 output Position  */
#define OPAMP_OPAMPCTRL0_MUXNEG_DAC           (OPAMP_OPAMPCTRL0_MUXNEG_DAC_Val << OPAMP_OPAMPCTRL0_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL0) DAC output Position  */
#define OPAMP_OPAMPCTRL0_Msk                  _U_(0x0077FFDE)                                      /**< (OPAMP_OPAMPCTRL0) Register Mask  */


/* -------- OPAMP_OPAMPCTRL1 : (OPAMP Offset: 0x08) (R/W 32) OPAMP1 Control -------- */
#define OPAMP_OPAMPCTRL1_RESETVALUE           _U_(0x00)                                            /**<  (OPAMP_OPAMPCTRL1) OPAMP1 Control  Reset Value */

#define OPAMP_OPAMPCTRL1_ENABLE_Pos           _U_(1)                                               /**< (OPAMP_OPAMPCTRL1) Operational Amplifier Enable Position */
#define OPAMP_OPAMPCTRL1_ENABLE_Msk           (_U_(0x1) << OPAMP_OPAMPCTRL1_ENABLE_Pos)            /**< (OPAMP_OPAMPCTRL1) Operational Amplifier Enable Mask */
#define OPAMP_OPAMPCTRL1_ENABLE(value)        (OPAMP_OPAMPCTRL1_ENABLE_Msk & ((value) << OPAMP_OPAMPCTRL1_ENABLE_Pos))
#define OPAMP_OPAMPCTRL1_ANAOUT_Pos           _U_(2)                                               /**< (OPAMP_OPAMPCTRL1) Analog Output Position */
#define OPAMP_OPAMPCTRL1_ANAOUT_Msk           (_U_(0x1) << OPAMP_OPAMPCTRL1_ANAOUT_Pos)            /**< (OPAMP_OPAMPCTRL1) Analog Output Mask */
#define OPAMP_OPAMPCTRL1_ANAOUT(value)        (OPAMP_OPAMPCTRL1_ANAOUT_Msk & ((value) << OPAMP_OPAMPCTRL1_ANAOUT_Pos))
#define OPAMP_OPAMPCTRL1_BIAS_Pos             _U_(3)                                               /**< (OPAMP_OPAMPCTRL1) Bias Selection Position */
#define OPAMP_OPAMPCTRL1_BIAS_Msk             (_U_(0x3) << OPAMP_OPAMPCTRL1_BIAS_Pos)              /**< (OPAMP_OPAMPCTRL1) Bias Selection Mask */
#define OPAMP_OPAMPCTRL1_BIAS(value)          (OPAMP_OPAMPCTRL1_BIAS_Msk & ((value) << OPAMP_OPAMPCTRL1_BIAS_Pos))
#define   OPAMP_OPAMPCTRL1_BIAS_MODE0_Val     _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL1) Minimum current consumption, but the slowest mode  */
#define   OPAMP_OPAMPCTRL1_BIAS_MODE1_Val     _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL1) Low current consumption, slow speed  */
#define   OPAMP_OPAMPCTRL1_BIAS_MODE2_Val     _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL1) High current consumption, fast speed  */
#define   OPAMP_OPAMPCTRL1_BIAS_MODE3_Val     _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL1) Maximum current consumption but the fastest mode  */
#define OPAMP_OPAMPCTRL1_BIAS_MODE0           (OPAMP_OPAMPCTRL1_BIAS_MODE0_Val << OPAMP_OPAMPCTRL1_BIAS_Pos) /**< (OPAMP_OPAMPCTRL1) Minimum current consumption, but the slowest mode Position  */
#define OPAMP_OPAMPCTRL1_BIAS_MODE1           (OPAMP_OPAMPCTRL1_BIAS_MODE1_Val << OPAMP_OPAMPCTRL1_BIAS_Pos) /**< (OPAMP_OPAMPCTRL1) Low current consumption, slow speed Position  */
#define OPAMP_OPAMPCTRL1_BIAS_MODE2           (OPAMP_OPAMPCTRL1_BIAS_MODE2_Val << OPAMP_OPAMPCTRL1_BIAS_Pos) /**< (OPAMP_OPAMPCTRL1) High current consumption, fast speed Position  */
#define OPAMP_OPAMPCTRL1_BIAS_MODE3           (OPAMP_OPAMPCTRL1_BIAS_MODE3_Val << OPAMP_OPAMPCTRL1_BIAS_Pos) /**< (OPAMP_OPAMPCTRL1) Maximum current consumption but the fastest mode Position  */
#define OPAMP_OPAMPCTRL1_RUNSTDBY_Pos         _U_(6)                                               /**< (OPAMP_OPAMPCTRL1) Run in Standby Position */
#define OPAMP_OPAMPCTRL1_RUNSTDBY_Msk         (_U_(0x1) << OPAMP_OPAMPCTRL1_RUNSTDBY_Pos)          /**< (OPAMP_OPAMPCTRL1) Run in Standby Mask */
#define OPAMP_OPAMPCTRL1_RUNSTDBY(value)      (OPAMP_OPAMPCTRL1_RUNSTDBY_Msk & ((value) << OPAMP_OPAMPCTRL1_RUNSTDBY_Pos))
#define OPAMP_OPAMPCTRL1_ONDEMAND_Pos         _U_(7)                                               /**< (OPAMP_OPAMPCTRL1) On Demand Control Position */
#define OPAMP_OPAMPCTRL1_ONDEMAND_Msk         (_U_(0x1) << OPAMP_OPAMPCTRL1_ONDEMAND_Pos)          /**< (OPAMP_OPAMPCTRL1) On Demand Control Mask */
#define OPAMP_OPAMPCTRL1_ONDEMAND(value)      (OPAMP_OPAMPCTRL1_ONDEMAND_Msk & ((value) << OPAMP_OPAMPCTRL1_ONDEMAND_Pos))
#define OPAMP_OPAMPCTRL1_RES2OUT_Pos          _U_(8)                                               /**< (OPAMP_OPAMPCTRL1) Resistor ladder To Output Position */
#define OPAMP_OPAMPCTRL1_RES2OUT_Msk          (_U_(0x1) << OPAMP_OPAMPCTRL1_RES2OUT_Pos)           /**< (OPAMP_OPAMPCTRL1) Resistor ladder To Output Mask */
#define OPAMP_OPAMPCTRL1_RES2OUT(value)       (OPAMP_OPAMPCTRL1_RES2OUT_Msk & ((value) << OPAMP_OPAMPCTRL1_RES2OUT_Pos))
#define OPAMP_OPAMPCTRL1_RES2VCC_Pos          _U_(9)                                               /**< (OPAMP_OPAMPCTRL1) Resistor ladder To VCC Position */
#define OPAMP_OPAMPCTRL1_RES2VCC_Msk          (_U_(0x1) << OPAMP_OPAMPCTRL1_RES2VCC_Pos)           /**< (OPAMP_OPAMPCTRL1) Resistor ladder To VCC Mask */
#define OPAMP_OPAMPCTRL1_RES2VCC(value)       (OPAMP_OPAMPCTRL1_RES2VCC_Msk & ((value) << OPAMP_OPAMPCTRL1_RES2VCC_Pos))
#define OPAMP_OPAMPCTRL1_RES1EN_Pos           _U_(10)                                              /**< (OPAMP_OPAMPCTRL1) Resistor 1 Enable Position */
#define OPAMP_OPAMPCTRL1_RES1EN_Msk           (_U_(0x1) << OPAMP_OPAMPCTRL1_RES1EN_Pos)            /**< (OPAMP_OPAMPCTRL1) Resistor 1 Enable Mask */
#define OPAMP_OPAMPCTRL1_RES1EN(value)        (OPAMP_OPAMPCTRL1_RES1EN_Msk & ((value) << OPAMP_OPAMPCTRL1_RES1EN_Pos))
#define OPAMP_OPAMPCTRL1_RES1MUX_Pos          _U_(11)                                              /**< (OPAMP_OPAMPCTRL1) Resistor 1 Mux Position */
#define OPAMP_OPAMPCTRL1_RES1MUX_Msk          (_U_(0x3) << OPAMP_OPAMPCTRL1_RES1MUX_Pos)           /**< (OPAMP_OPAMPCTRL1) Resistor 1 Mux Mask */
#define OPAMP_OPAMPCTRL1_RES1MUX(value)       (OPAMP_OPAMPCTRL1_RES1MUX_Msk & ((value) << OPAMP_OPAMPCTRL1_RES1MUX_Pos))
#define   OPAMP_OPAMPCTRL1_RES1MUX_OAxPOS_Val _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL1) Positive inout of OPAMPx  */
#define   OPAMP_OPAMPCTRL1_RES1MUX_OAxNEG_Val _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL1) Negative input of OPAMPx  */
#define   OPAMP_OPAMPCTRL1_RES1MUX_OA0OUT_Val _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL1) OPAMP0 output  */
#define   OPAMP_OPAMPCTRL1_RES1MUX_GND_Val    _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL1) Ground  */
#define OPAMP_OPAMPCTRL1_RES1MUX_OAxPOS       (OPAMP_OPAMPCTRL1_RES1MUX_OAxPOS_Val << OPAMP_OPAMPCTRL1_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL1) Positive inout of OPAMPx Position  */
#define OPAMP_OPAMPCTRL1_RES1MUX_OAxNEG       (OPAMP_OPAMPCTRL1_RES1MUX_OAxNEG_Val << OPAMP_OPAMPCTRL1_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL1) Negative input of OPAMPx Position  */
#define OPAMP_OPAMPCTRL1_RES1MUX_OA0OUT       (OPAMP_OPAMPCTRL1_RES1MUX_OA0OUT_Val << OPAMP_OPAMPCTRL1_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL1) OPAMP0 output Position  */
#define OPAMP_OPAMPCTRL1_RES1MUX_GND          (OPAMP_OPAMPCTRL1_RES1MUX_GND_Val << OPAMP_OPAMPCTRL1_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL1) Ground Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_Pos           _U_(13)                                              /**< (OPAMP_OPAMPCTRL1) Potentiometer Selection Position */
#define OPAMP_OPAMPCTRL1_POTMUX_Msk           (_U_(0x7) << OPAMP_OPAMPCTRL1_POTMUX_Pos)            /**< (OPAMP_OPAMPCTRL1) Potentiometer Selection Mask */
#define OPAMP_OPAMPCTRL1_POTMUX(value)        (OPAMP_OPAMPCTRL1_POTMUX_Msk & ((value) << OPAMP_OPAMPCTRL1_POTMUX_Pos))
#define   OPAMP_OPAMPCTRL1_POTMUX_14R_2R_Val  _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL1) R1 = 14R, R2 = 2R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_12R_4R_Val  _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL1) R1 = 12R, R2 = 4R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_8R_8R_Val   _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL1) R1 = 8R, R2 = 8R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_6R_10R_Val  _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL1) R1 = 6R, R2 = 10R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_4R_12R_Val  _U_(0x4)                                             /**< (OPAMP_OPAMPCTRL1) R1 = 4R, R2 = 12R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_3R_13R_Val  _U_(0x5)                                             /**< (OPAMP_OPAMPCTRL1) R1 = 3R, R2 = 13R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_2R_14R_Val  _U_(0x6)                                             /**< (OPAMP_OPAMPCTRL1) R1 = 2R, R2 = 14R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_R_15R_Val   _U_(0x7)                                             /**< (OPAMP_OPAMPCTRL1) R1 = 1R, R2 = 15R  */
#define OPAMP_OPAMPCTRL1_POTMUX_14R_2R        (OPAMP_OPAMPCTRL1_POTMUX_14R_2R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL1) R1 = 14R, R2 = 2R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_12R_4R        (OPAMP_OPAMPCTRL1_POTMUX_12R_4R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL1) R1 = 12R, R2 = 4R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_8R_8R         (OPAMP_OPAMPCTRL1_POTMUX_8R_8R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL1) R1 = 8R, R2 = 8R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_6R_10R        (OPAMP_OPAMPCTRL1_POTMUX_6R_10R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL1) R1 = 6R, R2 = 10R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_4R_12R        (OPAMP_OPAMPCTRL1_POTMUX_4R_12R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL1) R1 = 4R, R2 = 12R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_3R_13R        (OPAMP_OPAMPCTRL1_POTMUX_3R_13R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL1) R1 = 3R, R2 = 13R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_2R_14R        (OPAMP_OPAMPCTRL1_POTMUX_2R_14R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL1) R1 = 2R, R2 = 14R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_R_15R         (OPAMP_OPAMPCTRL1_POTMUX_R_15R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL1) R1 = 1R, R2 = 15R Position  */
#define OPAMP_OPAMPCTRL1_MUXPOS_Pos           _U_(16)                                              /**< (OPAMP_OPAMPCTRL1) Positive Input Mux Selection Position */
#define OPAMP_OPAMPCTRL1_MUXPOS_Msk           (_U_(0x7) << OPAMP_OPAMPCTRL1_MUXPOS_Pos)            /**< (OPAMP_OPAMPCTRL1) Positive Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL1_MUXPOS(value)        (OPAMP_OPAMPCTRL1_MUXPOS_Msk & ((value) << OPAMP_OPAMPCTRL1_MUXPOS_Pos))
#define   OPAMP_OPAMPCTRL1_MUXPOS_OA1POS_Val  _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL1) Positive I/O pin  */
#define   OPAMP_OPAMPCTRL1_MUXPOS_OA1TAP_Val  _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL1) Resistor ladder 1 taps  */
#define   OPAMP_OPAMPCTRL1_MUXPOS_OA0OUT_Val  _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL1) OPAMP0 output  */
#define   OPAMP_OPAMPCTRL1_MUXPOS_GND_Val     _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL1) Ground  */
#define OPAMP_OPAMPCTRL1_MUXPOS_OA1POS        (OPAMP_OPAMPCTRL1_MUXPOS_OA1POS_Val << OPAMP_OPAMPCTRL1_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL1) Positive I/O pin Position  */
#define OPAMP_OPAMPCTRL1_MUXPOS_OA1TAP        (OPAMP_OPAMPCTRL1_MUXPOS_OA1TAP_Val << OPAMP_OPAMPCTRL1_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL1) Resistor ladder 1 taps Position  */
#define OPAMP_OPAMPCTRL1_MUXPOS_OA0OUT        (OPAMP_OPAMPCTRL1_MUXPOS_OA0OUT_Val << OPAMP_OPAMPCTRL1_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL1) OPAMP0 output Position  */
#define OPAMP_OPAMPCTRL1_MUXPOS_GND           (OPAMP_OPAMPCTRL1_MUXPOS_GND_Val << OPAMP_OPAMPCTRL1_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL1) Ground Position  */
#define OPAMP_OPAMPCTRL1_MUXNEG_Pos           _U_(20)                                              /**< (OPAMP_OPAMPCTRL1) Negative Input Mux Selection Position */
#define OPAMP_OPAMPCTRL1_MUXNEG_Msk           (_U_(0x7) << OPAMP_OPAMPCTRL1_MUXNEG_Pos)            /**< (OPAMP_OPAMPCTRL1) Negative Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL1_MUXNEG(value)        (OPAMP_OPAMPCTRL1_MUXNEG_Msk & ((value) << OPAMP_OPAMPCTRL1_MUXNEG_Pos))
#define   OPAMP_OPAMPCTRL1_MUXNEG_OA1NEG_Val  _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL1) Negative I/O pin  */
#define   OPAMP_OPAMPCTRL1_MUXNEG_OA1TAP_Val  _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL1) Resistor ladder 1 taps  */
#define   OPAMP_OPAMPCTRL1_MUXNEG_OA1OUT_Val  _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL1) OPAMP1 output  */
#define   OPAMP_OPAMPCTRL1_MUXNEG_DAC_Val     _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL1) DAC output  */
#define OPAMP_OPAMPCTRL1_MUXNEG_OA1NEG        (OPAMP_OPAMPCTRL1_MUXNEG_OA1NEG_Val << OPAMP_OPAMPCTRL1_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL1) Negative I/O pin Position  */
#define OPAMP_OPAMPCTRL1_MUXNEG_OA1TAP        (OPAMP_OPAMPCTRL1_MUXNEG_OA1TAP_Val << OPAMP_OPAMPCTRL1_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL1) Resistor ladder 1 taps Position  */
#define OPAMP_OPAMPCTRL1_MUXNEG_OA1OUT        (OPAMP_OPAMPCTRL1_MUXNEG_OA1OUT_Val << OPAMP_OPAMPCTRL1_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL1) OPAMP1 output Position  */
#define OPAMP_OPAMPCTRL1_MUXNEG_DAC           (OPAMP_OPAMPCTRL1_MUXNEG_DAC_Val << OPAMP_OPAMPCTRL1_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL1) DAC output Position  */
#define OPAMP_OPAMPCTRL1_Msk                  _U_(0x0077FFDE)                                      /**< (OPAMP_OPAMPCTRL1) Register Mask  */


/* -------- OPAMP_OPAMPCTRL2 : (OPAMP Offset: 0x0C) (R/W 32) OPAMP2 Control -------- */
#define OPAMP_OPAMPCTRL2_RESETVALUE           _U_(0x00)                                            /**<  (OPAMP_OPAMPCTRL2) OPAMP2 Control  Reset Value */

#define OPAMP_OPAMPCTRL2_ENABLE_Pos           _U_(1)                                               /**< (OPAMP_OPAMPCTRL2) Operational Amplifier Enable Position */
#define OPAMP_OPAMPCTRL2_ENABLE_Msk           (_U_(0x1) << OPAMP_OPAMPCTRL2_ENABLE_Pos)            /**< (OPAMP_OPAMPCTRL2) Operational Amplifier Enable Mask */
#define OPAMP_OPAMPCTRL2_ENABLE(value)        (OPAMP_OPAMPCTRL2_ENABLE_Msk & ((value) << OPAMP_OPAMPCTRL2_ENABLE_Pos))
#define OPAMP_OPAMPCTRL2_ANAOUT_Pos           _U_(2)                                               /**< (OPAMP_OPAMPCTRL2) Analog Output Position */
#define OPAMP_OPAMPCTRL2_ANAOUT_Msk           (_U_(0x1) << OPAMP_OPAMPCTRL2_ANAOUT_Pos)            /**< (OPAMP_OPAMPCTRL2) Analog Output Mask */
#define OPAMP_OPAMPCTRL2_ANAOUT(value)        (OPAMP_OPAMPCTRL2_ANAOUT_Msk & ((value) << OPAMP_OPAMPCTRL2_ANAOUT_Pos))
#define OPAMP_OPAMPCTRL2_BIAS_Pos             _U_(3)                                               /**< (OPAMP_OPAMPCTRL2) Bias Selection Position */
#define OPAMP_OPAMPCTRL2_BIAS_Msk             (_U_(0x3) << OPAMP_OPAMPCTRL2_BIAS_Pos)              /**< (OPAMP_OPAMPCTRL2) Bias Selection Mask */
#define OPAMP_OPAMPCTRL2_BIAS(value)          (OPAMP_OPAMPCTRL2_BIAS_Msk & ((value) << OPAMP_OPAMPCTRL2_BIAS_Pos))
#define   OPAMP_OPAMPCTRL2_BIAS_MODE0_Val     _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL2) Minimum current consumption, but the slowest mode  */
#define   OPAMP_OPAMPCTRL2_BIAS_MODE1_Val     _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL2) Low current consumption, slow speed  */
#define   OPAMP_OPAMPCTRL2_BIAS_MODE2_Val     _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL2) High current consumption, fast speed  */
#define   OPAMP_OPAMPCTRL2_BIAS_MODE3_Val     _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL2) Maximum current consumption but the fastest mode  */
#define OPAMP_OPAMPCTRL2_BIAS_MODE0           (OPAMP_OPAMPCTRL2_BIAS_MODE0_Val << OPAMP_OPAMPCTRL2_BIAS_Pos) /**< (OPAMP_OPAMPCTRL2) Minimum current consumption, but the slowest mode Position  */
#define OPAMP_OPAMPCTRL2_BIAS_MODE1           (OPAMP_OPAMPCTRL2_BIAS_MODE1_Val << OPAMP_OPAMPCTRL2_BIAS_Pos) /**< (OPAMP_OPAMPCTRL2) Low current consumption, slow speed Position  */
#define OPAMP_OPAMPCTRL2_BIAS_MODE2           (OPAMP_OPAMPCTRL2_BIAS_MODE2_Val << OPAMP_OPAMPCTRL2_BIAS_Pos) /**< (OPAMP_OPAMPCTRL2) High current consumption, fast speed Position  */
#define OPAMP_OPAMPCTRL2_BIAS_MODE3           (OPAMP_OPAMPCTRL2_BIAS_MODE3_Val << OPAMP_OPAMPCTRL2_BIAS_Pos) /**< (OPAMP_OPAMPCTRL2) Maximum current consumption but the fastest mode Position  */
#define OPAMP_OPAMPCTRL2_RUNSTDBY_Pos         _U_(6)                                               /**< (OPAMP_OPAMPCTRL2) Run in Standby Position */
#define OPAMP_OPAMPCTRL2_RUNSTDBY_Msk         (_U_(0x1) << OPAMP_OPAMPCTRL2_RUNSTDBY_Pos)          /**< (OPAMP_OPAMPCTRL2) Run in Standby Mask */
#define OPAMP_OPAMPCTRL2_RUNSTDBY(value)      (OPAMP_OPAMPCTRL2_RUNSTDBY_Msk & ((value) << OPAMP_OPAMPCTRL2_RUNSTDBY_Pos))
#define OPAMP_OPAMPCTRL2_ONDEMAND_Pos         _U_(7)                                               /**< (OPAMP_OPAMPCTRL2) On Demand Control Position */
#define OPAMP_OPAMPCTRL2_ONDEMAND_Msk         (_U_(0x1) << OPAMP_OPAMPCTRL2_ONDEMAND_Pos)          /**< (OPAMP_OPAMPCTRL2) On Demand Control Mask */
#define OPAMP_OPAMPCTRL2_ONDEMAND(value)      (OPAMP_OPAMPCTRL2_ONDEMAND_Msk & ((value) << OPAMP_OPAMPCTRL2_ONDEMAND_Pos))
#define OPAMP_OPAMPCTRL2_RES2OUT_Pos          _U_(8)                                               /**< (OPAMP_OPAMPCTRL2) Resistor ladder To Output Position */
#define OPAMP_OPAMPCTRL2_RES2OUT_Msk          (_U_(0x1) << OPAMP_OPAMPCTRL2_RES2OUT_Pos)           /**< (OPAMP_OPAMPCTRL2) Resistor ladder To Output Mask */
#define OPAMP_OPAMPCTRL2_RES2OUT(value)       (OPAMP_OPAMPCTRL2_RES2OUT_Msk & ((value) << OPAMP_OPAMPCTRL2_RES2OUT_Pos))
#define OPAMP_OPAMPCTRL2_RES2VCC_Pos          _U_(9)                                               /**< (OPAMP_OPAMPCTRL2) Resistor ladder To VCC Position */
#define OPAMP_OPAMPCTRL2_RES2VCC_Msk          (_U_(0x1) << OPAMP_OPAMPCTRL2_RES2VCC_Pos)           /**< (OPAMP_OPAMPCTRL2) Resistor ladder To VCC Mask */
#define OPAMP_OPAMPCTRL2_RES2VCC(value)       (OPAMP_OPAMPCTRL2_RES2VCC_Msk & ((value) << OPAMP_OPAMPCTRL2_RES2VCC_Pos))
#define OPAMP_OPAMPCTRL2_RES1EN_Pos           _U_(10)                                              /**< (OPAMP_OPAMPCTRL2) Resistor 1 Enable Position */
#define OPAMP_OPAMPCTRL2_RES1EN_Msk           (_U_(0x1) << OPAMP_OPAMPCTRL2_RES1EN_Pos)            /**< (OPAMP_OPAMPCTRL2) Resistor 1 Enable Mask */
#define OPAMP_OPAMPCTRL2_RES1EN(value)        (OPAMP_OPAMPCTRL2_RES1EN_Msk & ((value) << OPAMP_OPAMPCTRL2_RES1EN_Pos))
#define OPAMP_OPAMPCTRL2_RES1MUX_Pos          _U_(11)                                              /**< (OPAMP_OPAMPCTRL2) Resistor 1 Mux Position */
#define OPAMP_OPAMPCTRL2_RES1MUX_Msk          (_U_(0x3) << OPAMP_OPAMPCTRL2_RES1MUX_Pos)           /**< (OPAMP_OPAMPCTRL2) Resistor 1 Mux Mask */
#define OPAMP_OPAMPCTRL2_RES1MUX(value)       (OPAMP_OPAMPCTRL2_RES1MUX_Msk & ((value) << OPAMP_OPAMPCTRL2_RES1MUX_Pos))
#define   OPAMP_OPAMPCTRL2_RES1MUX_OAxPOS_Val _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL2) Positive inout of OPAMPx  */
#define   OPAMP_OPAMPCTRL2_RES1MUX_OAxNEG_Val _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL2) Negative input of OPAMPx  */
#define   OPAMP_OPAMPCTRL2_RES1MUX_OA1OUT_Val _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL2) OPAMP1 output  */
#define   OPAMP_OPAMPCTRL2_RES1MUX_GND_Val    _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL2) Ground  */
#define OPAMP_OPAMPCTRL2_RES1MUX_OAxPOS       (OPAMP_OPAMPCTRL2_RES1MUX_OAxPOS_Val << OPAMP_OPAMPCTRL2_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL2) Positive inout of OPAMPx Position  */
#define OPAMP_OPAMPCTRL2_RES1MUX_OAxNEG       (OPAMP_OPAMPCTRL2_RES1MUX_OAxNEG_Val << OPAMP_OPAMPCTRL2_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL2) Negative input of OPAMPx Position  */
#define OPAMP_OPAMPCTRL2_RES1MUX_OA1OUT       (OPAMP_OPAMPCTRL2_RES1MUX_OA1OUT_Val << OPAMP_OPAMPCTRL2_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL2) OPAMP1 output Position  */
#define OPAMP_OPAMPCTRL2_RES1MUX_GND          (OPAMP_OPAMPCTRL2_RES1MUX_GND_Val << OPAMP_OPAMPCTRL2_RES1MUX_Pos) /**< (OPAMP_OPAMPCTRL2) Ground Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_Pos           _U_(13)                                              /**< (OPAMP_OPAMPCTRL2) Potentiometer Selection Position */
#define OPAMP_OPAMPCTRL2_POTMUX_Msk           (_U_(0x7) << OPAMP_OPAMPCTRL2_POTMUX_Pos)            /**< (OPAMP_OPAMPCTRL2) Potentiometer Selection Mask */
#define OPAMP_OPAMPCTRL2_POTMUX(value)        (OPAMP_OPAMPCTRL2_POTMUX_Msk & ((value) << OPAMP_OPAMPCTRL2_POTMUX_Pos))
#define   OPAMP_OPAMPCTRL2_POTMUX_14R_2R_Val  _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL2) R1 = 14R, R2 = 2R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_12R_4R_Val  _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL2) R1 = 12R, R2 = 4R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_8R_8R_Val   _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL2) R1 = 8R, R2 = 8R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_6R_10R_Val  _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL2) R1 = 6R, R2 = 10R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_4R_12R_Val  _U_(0x4)                                             /**< (OPAMP_OPAMPCTRL2) R1 = 4R, R2 = 12R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_3R_13R_Val  _U_(0x5)                                             /**< (OPAMP_OPAMPCTRL2) R1 = 3R, R2 = 13R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_2R_14R_Val  _U_(0x6)                                             /**< (OPAMP_OPAMPCTRL2) R1 = 2R, R2 = 14R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_R_15R_Val   _U_(0x7)                                             /**< (OPAMP_OPAMPCTRL2) R1 = 1R, R2 = 15R  */
#define OPAMP_OPAMPCTRL2_POTMUX_14R_2R        (OPAMP_OPAMPCTRL2_POTMUX_14R_2R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL2) R1 = 14R, R2 = 2R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_12R_4R        (OPAMP_OPAMPCTRL2_POTMUX_12R_4R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL2) R1 = 12R, R2 = 4R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_8R_8R         (OPAMP_OPAMPCTRL2_POTMUX_8R_8R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL2) R1 = 8R, R2 = 8R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_6R_10R        (OPAMP_OPAMPCTRL2_POTMUX_6R_10R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL2) R1 = 6R, R2 = 10R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_4R_12R        (OPAMP_OPAMPCTRL2_POTMUX_4R_12R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL2) R1 = 4R, R2 = 12R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_3R_13R        (OPAMP_OPAMPCTRL2_POTMUX_3R_13R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL2) R1 = 3R, R2 = 13R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_2R_14R        (OPAMP_OPAMPCTRL2_POTMUX_2R_14R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL2) R1 = 2R, R2 = 14R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_R_15R         (OPAMP_OPAMPCTRL2_POTMUX_R_15R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /**< (OPAMP_OPAMPCTRL2) R1 = 1R, R2 = 15R Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_Pos           _U_(16)                                              /**< (OPAMP_OPAMPCTRL2) Positive Input Mux Selection Position */
#define OPAMP_OPAMPCTRL2_MUXPOS_Msk           (_U_(0x7) << OPAMP_OPAMPCTRL2_MUXPOS_Pos)            /**< (OPAMP_OPAMPCTRL2) Positive Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL2_MUXPOS(value)        (OPAMP_OPAMPCTRL2_MUXPOS_Msk & ((value) << OPAMP_OPAMPCTRL2_MUXPOS_Pos))
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA2POS_Val  _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL2) Positive I/O pin  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA2TAP_Val  _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL2) Resistor ladder 2 taps  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA1OUT_Val  _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL2) OPAMP1 output  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_GND_Val     _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL2) Ground  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA0POS_Val  _U_(0x4)                                             /**< (OPAMP_OPAMPCTRL2) Positive I/O pin OPA0  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA1POS_Val  _U_(0x5)                                             /**< (OPAMP_OPAMPCTRL2) Positive I/O pin OPA1  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA0TAP_Val  _U_(0x6)                                             /**< (OPAMP_OPAMPCTRL2) Resistor ladder 0 taps  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA2POS        (OPAMP_OPAMPCTRL2_MUXPOS_OA2POS_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL2) Positive I/O pin Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA2TAP        (OPAMP_OPAMPCTRL2_MUXPOS_OA2TAP_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL2) Resistor ladder 2 taps Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA1OUT        (OPAMP_OPAMPCTRL2_MUXPOS_OA1OUT_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL2) OPAMP1 output Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_GND           (OPAMP_OPAMPCTRL2_MUXPOS_GND_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL2) Ground Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA0POS        (OPAMP_OPAMPCTRL2_MUXPOS_OA0POS_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL2) Positive I/O pin OPA0 Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA1POS        (OPAMP_OPAMPCTRL2_MUXPOS_OA1POS_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL2) Positive I/O pin OPA1 Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA0TAP        (OPAMP_OPAMPCTRL2_MUXPOS_OA0TAP_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /**< (OPAMP_OPAMPCTRL2) Resistor ladder 0 taps Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_Pos           _U_(20)                                              /**< (OPAMP_OPAMPCTRL2) Negative Input Mux Selection Position */
#define OPAMP_OPAMPCTRL2_MUXNEG_Msk           (_U_(0x7) << OPAMP_OPAMPCTRL2_MUXNEG_Pos)            /**< (OPAMP_OPAMPCTRL2) Negative Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL2_MUXNEG(value)        (OPAMP_OPAMPCTRL2_MUXNEG_Msk & ((value) << OPAMP_OPAMPCTRL2_MUXNEG_Pos))
#define   OPAMP_OPAMPCTRL2_MUXNEG_OA2NEG_Val  _U_(0x0)                                             /**< (OPAMP_OPAMPCTRL2) Negative I/O pin  */
#define   OPAMP_OPAMPCTRL2_MUXNEG_OA2TAP_Val  _U_(0x1)                                             /**< (OPAMP_OPAMPCTRL2) Resistor ladder 2 taps  */
#define   OPAMP_OPAMPCTRL2_MUXNEG_OA2OUT_Val  _U_(0x2)                                             /**< (OPAMP_OPAMPCTRL2) OPAMP2 output  */
#define   OPAMP_OPAMPCTRL2_MUXNEG_OA0NEG_Val  _U_(0x3)                                             /**< (OPAMP_OPAMPCTRL2) Negative I/O pin OPA0  */
#define   OPAMP_OPAMPCTRL2_MUXNEG_OA1NEG_Val  _U_(0x4)                                             /**< (OPAMP_OPAMPCTRL2) Negative I/O pin OPA1  */
#define   OPAMP_OPAMPCTRL2_MUXNEG_DAC_Val     _U_(0x5)                                             /**< (OPAMP_OPAMPCTRL2) DAC output  */
#define OPAMP_OPAMPCTRL2_MUXNEG_OA2NEG        (OPAMP_OPAMPCTRL2_MUXNEG_OA2NEG_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL2) Negative I/O pin Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_OA2TAP        (OPAMP_OPAMPCTRL2_MUXNEG_OA2TAP_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL2) Resistor ladder 2 taps Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_OA2OUT        (OPAMP_OPAMPCTRL2_MUXNEG_OA2OUT_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL2) OPAMP2 output Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_OA0NEG        (OPAMP_OPAMPCTRL2_MUXNEG_OA0NEG_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL2) Negative I/O pin OPA0 Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_OA1NEG        (OPAMP_OPAMPCTRL2_MUXNEG_OA1NEG_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL2) Negative I/O pin OPA1 Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_DAC           (OPAMP_OPAMPCTRL2_MUXNEG_DAC_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /**< (OPAMP_OPAMPCTRL2) DAC output Position  */
#define OPAMP_OPAMPCTRL2_Msk                  _U_(0x0077FFDE)                                      /**< (OPAMP_OPAMPCTRL2) Register Mask  */


/** \brief OPAMP register offsets definitions */
#define OPAMP_CTRLA_REG_OFST           (0x00)              /**< (OPAMP_CTRLA) Control A Offset */
#define OPAMP_STATUS_REG_OFST          (0x02)              /**< (OPAMP_STATUS) Status Offset */
#define OPAMP_OPAMPCTRL0_REG_OFST      (0x04)              /**< (OPAMP_OPAMPCTRL0) OPAMP0 Control Offset */
#define OPAMP_OPAMPCTRL1_REG_OFST      (0x08)              /**< (OPAMP_OPAMPCTRL1) OPAMP1 Control Offset */
#define OPAMP_OPAMPCTRL2_REG_OFST      (0x0C)              /**< (OPAMP_OPAMPCTRL2) OPAMP2 Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief OPAMP register API structure */
typedef struct
{  /* Operational Amplifier */
  __IO  uint8_t                        OPAMP_CTRLA;        /**< Offset: 0x00 (R/W  8) Control A */
  __I   uint8_t                        Reserved1[0x01];
  __I   uint8_t                        OPAMP_STATUS;       /**< Offset: 0x02 (R/   8) Status */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint32_t                       OPAMP_OPAMPCTRL0;   /**< Offset: 0x04 (R/W  32) OPAMP0 Control */
  __IO  uint32_t                       OPAMP_OPAMPCTRL1;   /**< Offset: 0x08 (R/W  32) OPAMP1 Control */
  __IO  uint32_t                       OPAMP_OPAMPCTRL2;   /**< Offset: 0x0C (R/W  32) OPAMP2 Control */
} opamp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAML21_OPAMP_COMPONENT_H_ */
