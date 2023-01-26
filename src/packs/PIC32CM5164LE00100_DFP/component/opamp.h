/*
 * Component description for OPAMP
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2022-03-31T12:21:24Z */
#ifndef _PIC32CMLE00_OPAMP_COMPONENT_H_
#define _PIC32CMLE00_OPAMP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR OPAMP                                        */
/* ************************************************************************** */

/* -------- OPAMP_CTRLA : (OPAMP Offset: 0x00) (R/W 8) Control A -------- */
#define OPAMP_CTRLA_RESETVALUE                _UINT8_(0x00)                                        /*  (OPAMP_CTRLA) Control A  Reset Value */

#define OPAMP_CTRLA_SWRST_Pos                 _UINT8_(0)                                           /* (OPAMP_CTRLA) Software Reset Position */
#define OPAMP_CTRLA_SWRST_Msk                 (_UINT8_(0x1) << OPAMP_CTRLA_SWRST_Pos)              /* (OPAMP_CTRLA) Software Reset Mask */
#define OPAMP_CTRLA_SWRST(value)              (OPAMP_CTRLA_SWRST_Msk & (_UINT8_(value) << OPAMP_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the OPAMP_CTRLA register */
#define OPAMP_CTRLA_ENABLE_Pos                _UINT8_(1)                                           /* (OPAMP_CTRLA) Enable Position */
#define OPAMP_CTRLA_ENABLE_Msk                (_UINT8_(0x1) << OPAMP_CTRLA_ENABLE_Pos)             /* (OPAMP_CTRLA) Enable Mask */
#define OPAMP_CTRLA_ENABLE(value)             (OPAMP_CTRLA_ENABLE_Msk & (_UINT8_(value) << OPAMP_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the OPAMP_CTRLA register */
#define OPAMP_CTRLA_LPMUX_Pos                 _UINT8_(7)                                           /* (OPAMP_CTRLA) Low-Power Mux Position */
#define OPAMP_CTRLA_LPMUX_Msk                 (_UINT8_(0x1) << OPAMP_CTRLA_LPMUX_Pos)              /* (OPAMP_CTRLA) Low-Power Mux Mask */
#define OPAMP_CTRLA_LPMUX(value)              (OPAMP_CTRLA_LPMUX_Msk & (_UINT8_(value) << OPAMP_CTRLA_LPMUX_Pos)) /* Assigment of value for LPMUX in the OPAMP_CTRLA register */
#define OPAMP_CTRLA_Msk                       _UINT8_(0x83)                                        /* (OPAMP_CTRLA) Register Mask  */


/* -------- OPAMP_STATUS : (OPAMP Offset: 0x02) ( R/ 8) Status -------- */
#define OPAMP_STATUS_RESETVALUE               _UINT8_(0x00)                                        /*  (OPAMP_STATUS) Status  Reset Value */

#define OPAMP_STATUS_READY0_Pos               _UINT8_(0)                                           /* (OPAMP_STATUS) OPAMP 0 Ready Position */
#define OPAMP_STATUS_READY0_Msk               (_UINT8_(0x1) << OPAMP_STATUS_READY0_Pos)            /* (OPAMP_STATUS) OPAMP 0 Ready Mask */
#define OPAMP_STATUS_READY0(value)            (OPAMP_STATUS_READY0_Msk & (_UINT8_(value) << OPAMP_STATUS_READY0_Pos)) /* Assigment of value for READY0 in the OPAMP_STATUS register */
#define OPAMP_STATUS_READY1_Pos               _UINT8_(1)                                           /* (OPAMP_STATUS) OPAMP 1 Ready Position */
#define OPAMP_STATUS_READY1_Msk               (_UINT8_(0x1) << OPAMP_STATUS_READY1_Pos)            /* (OPAMP_STATUS) OPAMP 1 Ready Mask */
#define OPAMP_STATUS_READY1(value)            (OPAMP_STATUS_READY1_Msk & (_UINT8_(value) << OPAMP_STATUS_READY1_Pos)) /* Assigment of value for READY1 in the OPAMP_STATUS register */
#define OPAMP_STATUS_READY2_Pos               _UINT8_(2)                                           /* (OPAMP_STATUS) OPAMP 2 Ready Position */
#define OPAMP_STATUS_READY2_Msk               (_UINT8_(0x1) << OPAMP_STATUS_READY2_Pos)            /* (OPAMP_STATUS) OPAMP 2 Ready Mask */
#define OPAMP_STATUS_READY2(value)            (OPAMP_STATUS_READY2_Msk & (_UINT8_(value) << OPAMP_STATUS_READY2_Pos)) /* Assigment of value for READY2 in the OPAMP_STATUS register */
#define OPAMP_STATUS_Msk                      _UINT8_(0x07)                                        /* (OPAMP_STATUS) Register Mask  */

#define OPAMP_STATUS_READY_Pos                _UINT8_(0)                                           /* (OPAMP_STATUS Position) OPAMP 2 Ready */
#define OPAMP_STATUS_READY_Msk                (_UINT8_(0x7) << OPAMP_STATUS_READY_Pos)             /* (OPAMP_STATUS Mask) READY */
#define OPAMP_STATUS_READY(value)             (OPAMP_STATUS_READY_Msk & (_UINT8_(value) << OPAMP_STATUS_READY_Pos)) 

/* -------- OPAMP_OPAMPCTRL0 : (OPAMP Offset: 0x04) (R/W 32) OPAMP0 Control -------- */
#define OPAMP_OPAMPCTRL0_RESETVALUE           _UINT32_(0x00)                                       /*  (OPAMP_OPAMPCTRL0) OPAMP0 Control  Reset Value */

#define OPAMP_OPAMPCTRL0_ENABLE_Pos           _UINT32_(1)                                          /* (OPAMP_OPAMPCTRL0) Operational Amplifier Enable Position */
#define OPAMP_OPAMPCTRL0_ENABLE_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL0_ENABLE_Pos)       /* (OPAMP_OPAMPCTRL0) Operational Amplifier Enable Mask */
#define OPAMP_OPAMPCTRL0_ENABLE(value)        (OPAMP_OPAMPCTRL0_ENABLE_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_ENABLE_Pos)) /* Assigment of value for ENABLE in the OPAMP_OPAMPCTRL0 register */
#define OPAMP_OPAMPCTRL0_ANAOUT_Pos           _UINT32_(2)                                          /* (OPAMP_OPAMPCTRL0) Analog Output Position */
#define OPAMP_OPAMPCTRL0_ANAOUT_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL0_ANAOUT_Pos)       /* (OPAMP_OPAMPCTRL0) Analog Output Mask */
#define OPAMP_OPAMPCTRL0_ANAOUT(value)        (OPAMP_OPAMPCTRL0_ANAOUT_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_ANAOUT_Pos)) /* Assigment of value for ANAOUT in the OPAMP_OPAMPCTRL0 register */
#define OPAMP_OPAMPCTRL0_BIAS_Pos             _UINT32_(3)                                          /* (OPAMP_OPAMPCTRL0) Bias Selection Position */
#define OPAMP_OPAMPCTRL0_BIAS_Msk             (_UINT32_(0x3) << OPAMP_OPAMPCTRL0_BIAS_Pos)         /* (OPAMP_OPAMPCTRL0) Bias Selection Mask */
#define OPAMP_OPAMPCTRL0_BIAS(value)          (OPAMP_OPAMPCTRL0_BIAS_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_BIAS_Pos)) /* Assigment of value for BIAS in the OPAMP_OPAMPCTRL0 register */
#define   OPAMP_OPAMPCTRL0_BIAS_MODE0_Val     _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL0) Minimum current consumption, but the slowest mode  */
#define   OPAMP_OPAMPCTRL0_BIAS_MODE1_Val     _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL0) Low current consumption, slow speed  */
#define   OPAMP_OPAMPCTRL0_BIAS_MODE2_Val     _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL0) High current consumption, fast speed  */
#define   OPAMP_OPAMPCTRL0_BIAS_MODE3_Val     _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL0) Maximum current consumption, but the fastest mode  */
#define OPAMP_OPAMPCTRL0_BIAS_MODE0           (OPAMP_OPAMPCTRL0_BIAS_MODE0_Val << OPAMP_OPAMPCTRL0_BIAS_Pos) /* (OPAMP_OPAMPCTRL0) Minimum current consumption, but the slowest mode Position  */
#define OPAMP_OPAMPCTRL0_BIAS_MODE1           (OPAMP_OPAMPCTRL0_BIAS_MODE1_Val << OPAMP_OPAMPCTRL0_BIAS_Pos) /* (OPAMP_OPAMPCTRL0) Low current consumption, slow speed Position  */
#define OPAMP_OPAMPCTRL0_BIAS_MODE2           (OPAMP_OPAMPCTRL0_BIAS_MODE2_Val << OPAMP_OPAMPCTRL0_BIAS_Pos) /* (OPAMP_OPAMPCTRL0) High current consumption, fast speed Position  */
#define OPAMP_OPAMPCTRL0_BIAS_MODE3           (OPAMP_OPAMPCTRL0_BIAS_MODE3_Val << OPAMP_OPAMPCTRL0_BIAS_Pos) /* (OPAMP_OPAMPCTRL0) Maximum current consumption, but the fastest mode Position  */
#define OPAMP_OPAMPCTRL0_RES2VCC_Pos          _UINT32_(5)                                          /* (OPAMP_OPAMPCTRL0) Resistor ladder To VCC Position */
#define OPAMP_OPAMPCTRL0_RES2VCC_Msk          (_UINT32_(0x1) << OPAMP_OPAMPCTRL0_RES2VCC_Pos)      /* (OPAMP_OPAMPCTRL0) Resistor ladder To VCC Mask */
#define OPAMP_OPAMPCTRL0_RES2VCC(value)       (OPAMP_OPAMPCTRL0_RES2VCC_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_RES2VCC_Pos)) /* Assigment of value for RES2VCC in the OPAMP_OPAMPCTRL0 register */
#define OPAMP_OPAMPCTRL0_RUNSTDBY_Pos         _UINT32_(6)                                          /* (OPAMP_OPAMPCTRL0) Run in Standby Position */
#define OPAMP_OPAMPCTRL0_RUNSTDBY_Msk         (_UINT32_(0x1) << OPAMP_OPAMPCTRL0_RUNSTDBY_Pos)     /* (OPAMP_OPAMPCTRL0) Run in Standby Mask */
#define OPAMP_OPAMPCTRL0_RUNSTDBY(value)      (OPAMP_OPAMPCTRL0_RUNSTDBY_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the OPAMP_OPAMPCTRL0 register */
#define OPAMP_OPAMPCTRL0_ONDEMAND_Pos         _UINT32_(7)                                          /* (OPAMP_OPAMPCTRL0) On Demand Control Position */
#define OPAMP_OPAMPCTRL0_ONDEMAND_Msk         (_UINT32_(0x1) << OPAMP_OPAMPCTRL0_ONDEMAND_Pos)     /* (OPAMP_OPAMPCTRL0) On Demand Control Mask */
#define OPAMP_OPAMPCTRL0_ONDEMAND(value)      (OPAMP_OPAMPCTRL0_ONDEMAND_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_ONDEMAND_Pos)) /* Assigment of value for ONDEMAND in the OPAMP_OPAMPCTRL0 register */
#define OPAMP_OPAMPCTRL0_RES2OUT_Pos          _UINT32_(8)                                          /* (OPAMP_OPAMPCTRL0) Resistor ladder To Output Position */
#define OPAMP_OPAMPCTRL0_RES2OUT_Msk          (_UINT32_(0x1) << OPAMP_OPAMPCTRL0_RES2OUT_Pos)      /* (OPAMP_OPAMPCTRL0) Resistor ladder To Output Mask */
#define OPAMP_OPAMPCTRL0_RES2OUT(value)       (OPAMP_OPAMPCTRL0_RES2OUT_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_RES2OUT_Pos)) /* Assigment of value for RES2OUT in the OPAMP_OPAMPCTRL0 register */
#define OPAMP_OPAMPCTRL0_RES1EN_Pos           _UINT32_(9)                                          /* (OPAMP_OPAMPCTRL0) Resistor 1 Enable Position */
#define OPAMP_OPAMPCTRL0_RES1EN_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL0_RES1EN_Pos)       /* (OPAMP_OPAMPCTRL0) Resistor 1 Enable Mask */
#define OPAMP_OPAMPCTRL0_RES1EN(value)        (OPAMP_OPAMPCTRL0_RES1EN_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_RES1EN_Pos)) /* Assigment of value for RES1EN in the OPAMP_OPAMPCTRL0 register */
#define OPAMP_OPAMPCTRL0_RES1MUX_Pos          _UINT32_(10)                                         /* (OPAMP_OPAMPCTRL0) Resistor 1 Mux Position */
#define OPAMP_OPAMPCTRL0_RES1MUX_Msk          (_UINT32_(0x7) << OPAMP_OPAMPCTRL0_RES1MUX_Pos)      /* (OPAMP_OPAMPCTRL0) Resistor 1 Mux Mask */
#define OPAMP_OPAMPCTRL0_RES1MUX(value)       (OPAMP_OPAMPCTRL0_RES1MUX_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_RES1MUX_Pos)) /* Assigment of value for RES1MUX in the OPAMP_OPAMPCTRL0 register */
#define   OPAMP_OPAMPCTRL0_RES1MUX_OA0POS_Val _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL0) OPAMP0 Positive Input  */
#define   OPAMP_OPAMPCTRL0_RES1MUX_OA0NEG_Val _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL0) OPAMP0 Negative Input  */
#define   OPAMP_OPAMPCTRL0_RES1MUX_DAC_REFBUF_Val _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL0) DAC VOUT0 or OPAMP Reference Output Voltage (REFBUF)  */
#define   OPAMP_OPAMPCTRL0_RES1MUX_AVSS_Val   _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL0) Ground  */
#define   OPAMP_OPAMPCTRL0_RES1MUX_RG_CONN_Val _UINT32_(0x4)                                        /* (OPAMP_OPAMPCTRL0) RG_CONN  */
#define OPAMP_OPAMPCTRL0_RES1MUX_OA0POS       (OPAMP_OPAMPCTRL0_RES1MUX_OA0POS_Val << OPAMP_OPAMPCTRL0_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL0) OPAMP0 Positive Input Position  */
#define OPAMP_OPAMPCTRL0_RES1MUX_OA0NEG       (OPAMP_OPAMPCTRL0_RES1MUX_OA0NEG_Val << OPAMP_OPAMPCTRL0_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL0) OPAMP0 Negative Input Position  */
#define OPAMP_OPAMPCTRL0_RES1MUX_DAC_REFBUF   (OPAMP_OPAMPCTRL0_RES1MUX_DAC_REFBUF_Val << OPAMP_OPAMPCTRL0_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL0) DAC VOUT0 or OPAMP Reference Output Voltage (REFBUF) Position  */
#define OPAMP_OPAMPCTRL0_RES1MUX_AVSS         (OPAMP_OPAMPCTRL0_RES1MUX_AVSS_Val << OPAMP_OPAMPCTRL0_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL0) Ground Position  */
#define OPAMP_OPAMPCTRL0_RES1MUX_RG_CONN      (OPAMP_OPAMPCTRL0_RES1MUX_RG_CONN_Val << OPAMP_OPAMPCTRL0_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL0) RG_CONN Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_Pos           _UINT32_(13)                                         /* (OPAMP_OPAMPCTRL0) Potentiometer Selection Position */
#define OPAMP_OPAMPCTRL0_POTMUX_Msk           (_UINT32_(0x7) << OPAMP_OPAMPCTRL0_POTMUX_Pos)       /* (OPAMP_OPAMPCTRL0) Potentiometer Selection Mask */
#define OPAMP_OPAMPCTRL0_POTMUX(value)        (OPAMP_OPAMPCTRL0_POTMUX_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_POTMUX_Pos)) /* Assigment of value for POTMUX in the OPAMP_OPAMPCTRL0 register */
#define   OPAMP_OPAMPCTRL0_POTMUX_14R_2R_Val  _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL0) R1 = 14R, R2 = 2R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_12R_4R_Val  _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL0) R1 = 12R, R2 = 4R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_8R_8R_Val   _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL0) R1 = 8R, R2 = 8R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_6R_10R_Val  _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL0) R1 = 6R, R2 = 10R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_4R_12R_Val  _UINT32_(0x4)                                        /* (OPAMP_OPAMPCTRL0) R1 = 4R, R2 = 12R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_3R_13R_Val  _UINT32_(0x5)                                        /* (OPAMP_OPAMPCTRL0) R1 = 3R, R2 = 13R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_2R_14R_Val  _UINT32_(0x6)                                        /* (OPAMP_OPAMPCTRL0) R1 = 2R, R2 = 14R  */
#define   OPAMP_OPAMPCTRL0_POTMUX_R_15R_Val   _UINT32_(0x7)                                        /* (OPAMP_OPAMPCTRL0) R1 = 1R, R2 = 15R  */
#define OPAMP_OPAMPCTRL0_POTMUX_14R_2R        (OPAMP_OPAMPCTRL0_POTMUX_14R_2R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /* (OPAMP_OPAMPCTRL0) R1 = 14R, R2 = 2R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_12R_4R        (OPAMP_OPAMPCTRL0_POTMUX_12R_4R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /* (OPAMP_OPAMPCTRL0) R1 = 12R, R2 = 4R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_8R_8R         (OPAMP_OPAMPCTRL0_POTMUX_8R_8R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /* (OPAMP_OPAMPCTRL0) R1 = 8R, R2 = 8R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_6R_10R        (OPAMP_OPAMPCTRL0_POTMUX_6R_10R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /* (OPAMP_OPAMPCTRL0) R1 = 6R, R2 = 10R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_4R_12R        (OPAMP_OPAMPCTRL0_POTMUX_4R_12R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /* (OPAMP_OPAMPCTRL0) R1 = 4R, R2 = 12R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_3R_13R        (OPAMP_OPAMPCTRL0_POTMUX_3R_13R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /* (OPAMP_OPAMPCTRL0) R1 = 3R, R2 = 13R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_2R_14R        (OPAMP_OPAMPCTRL0_POTMUX_2R_14R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /* (OPAMP_OPAMPCTRL0) R1 = 2R, R2 = 14R Position  */
#define OPAMP_OPAMPCTRL0_POTMUX_R_15R         (OPAMP_OPAMPCTRL0_POTMUX_R_15R_Val << OPAMP_OPAMPCTRL0_POTMUX_Pos) /* (OPAMP_OPAMPCTRL0) R1 = 1R, R2 = 15R Position  */
#define OPAMP_OPAMPCTRL0_MUXPOS_Pos           _UINT32_(16)                                         /* (OPAMP_OPAMPCTRL0) Positive Input Mux Selection Position */
#define OPAMP_OPAMPCTRL0_MUXPOS_Msk           (_UINT32_(0xF) << OPAMP_OPAMPCTRL0_MUXPOS_Pos)       /* (OPAMP_OPAMPCTRL0) Positive Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL0_MUXPOS(value)        (OPAMP_OPAMPCTRL0_MUXPOS_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_MUXPOS_Pos)) /* Assigment of value for MUXPOS in the OPAMP_OPAMPCTRL0 register */
#define   OPAMP_OPAMPCTRL0_MUXPOS_OA0POS_Val  _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL0) OPAMP0 Positive Input  */
#define   OPAMP_OPAMPCTRL0_MUXPOS_OA0TAP_Val  _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL0) OPAMP0 Resistor ladder taps  */
#define   OPAMP_OPAMPCTRL0_MUXPOS_DAC_REFBUF_Val _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL0) REFERENCE or DAC VOUT0 Output  */
#define   OPAMP_OPAMPCTRL0_MUXPOS_AVSS_Val    _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL0) Ground  */
#define OPAMP_OPAMPCTRL0_MUXPOS_OA0POS        (OPAMP_OPAMPCTRL0_MUXPOS_OA0POS_Val << OPAMP_OPAMPCTRL0_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL0) OPAMP0 Positive Input Position  */
#define OPAMP_OPAMPCTRL0_MUXPOS_OA0TAP        (OPAMP_OPAMPCTRL0_MUXPOS_OA0TAP_Val << OPAMP_OPAMPCTRL0_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL0) OPAMP0 Resistor ladder taps Position  */
#define OPAMP_OPAMPCTRL0_MUXPOS_DAC_REFBUF    (OPAMP_OPAMPCTRL0_MUXPOS_DAC_REFBUF_Val << OPAMP_OPAMPCTRL0_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL0) REFERENCE or DAC VOUT0 Output Position  */
#define OPAMP_OPAMPCTRL0_MUXPOS_AVSS          (OPAMP_OPAMPCTRL0_MUXPOS_AVSS_Val << OPAMP_OPAMPCTRL0_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL0) Ground Position  */
#define OPAMP_OPAMPCTRL0_MUXNEG_Pos           _UINT32_(20)                                         /* (OPAMP_OPAMPCTRL0) Negative Input Mux Selection Position */
#define OPAMP_OPAMPCTRL0_MUXNEG_Msk           (_UINT32_(0xF) << OPAMP_OPAMPCTRL0_MUXNEG_Pos)       /* (OPAMP_OPAMPCTRL0) Negative Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL0_MUXNEG(value)        (OPAMP_OPAMPCTRL0_MUXNEG_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL0_MUXNEG_Pos)) /* Assigment of value for MUXNEG in the OPAMP_OPAMPCTRL0 register */
#define   OPAMP_OPAMPCTRL0_MUXNEG_OA0NEG_Val  _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL0) OPAMP0 Negative Input  */
#define   OPAMP_OPAMPCTRL0_MUXNEG_OA0TAP_Val  _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL0) OPAMP0 Resistor ladder taps  */
#define   OPAMP_OPAMPCTRL0_MUXNEG_DAC_REFBUF_Val _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL0) DAC VOUT0 or OPAMP Reference Output Voltage (REFBUF)  */
#define   OPAMP_OPAMPCTRL0_MUXNEG_OA0OUT_Val  _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL0) OPAMP0 Output  */
#define OPAMP_OPAMPCTRL0_MUXNEG_OA0NEG        (OPAMP_OPAMPCTRL0_MUXNEG_OA0NEG_Val << OPAMP_OPAMPCTRL0_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL0) OPAMP0 Negative Input Position  */
#define OPAMP_OPAMPCTRL0_MUXNEG_OA0TAP        (OPAMP_OPAMPCTRL0_MUXNEG_OA0TAP_Val << OPAMP_OPAMPCTRL0_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL0) OPAMP0 Resistor ladder taps Position  */
#define OPAMP_OPAMPCTRL0_MUXNEG_DAC_REFBUF    (OPAMP_OPAMPCTRL0_MUXNEG_DAC_REFBUF_Val << OPAMP_OPAMPCTRL0_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL0) DAC VOUT0 or OPAMP Reference Output Voltage (REFBUF) Position  */
#define OPAMP_OPAMPCTRL0_MUXNEG_OA0OUT        (OPAMP_OPAMPCTRL0_MUXNEG_OA0OUT_Val << OPAMP_OPAMPCTRL0_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL0) OPAMP0 Output Position  */
#define OPAMP_OPAMPCTRL0_Msk                  _UINT32_(0x00FFFFFE)                                 /* (OPAMP_OPAMPCTRL0) Register Mask  */


/* -------- OPAMP_OPAMPCTRL1 : (OPAMP Offset: 0x08) (R/W 32) OPAMP1 Control -------- */
#define OPAMP_OPAMPCTRL1_RESETVALUE           _UINT32_(0x00)                                       /*  (OPAMP_OPAMPCTRL1) OPAMP1 Control  Reset Value */

#define OPAMP_OPAMPCTRL1_ENABLE_Pos           _UINT32_(1)                                          /* (OPAMP_OPAMPCTRL1) Operational Amplifier Enable Position */
#define OPAMP_OPAMPCTRL1_ENABLE_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL1_ENABLE_Pos)       /* (OPAMP_OPAMPCTRL1) Operational Amplifier Enable Mask */
#define OPAMP_OPAMPCTRL1_ENABLE(value)        (OPAMP_OPAMPCTRL1_ENABLE_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_ENABLE_Pos)) /* Assigment of value for ENABLE in the OPAMP_OPAMPCTRL1 register */
#define OPAMP_OPAMPCTRL1_ANAOUT_Pos           _UINT32_(2)                                          /* (OPAMP_OPAMPCTRL1) Analog Output Position */
#define OPAMP_OPAMPCTRL1_ANAOUT_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL1_ANAOUT_Pos)       /* (OPAMP_OPAMPCTRL1) Analog Output Mask */
#define OPAMP_OPAMPCTRL1_ANAOUT(value)        (OPAMP_OPAMPCTRL1_ANAOUT_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_ANAOUT_Pos)) /* Assigment of value for ANAOUT in the OPAMP_OPAMPCTRL1 register */
#define OPAMP_OPAMPCTRL1_BIAS_Pos             _UINT32_(3)                                          /* (OPAMP_OPAMPCTRL1) Bias Selection Position */
#define OPAMP_OPAMPCTRL1_BIAS_Msk             (_UINT32_(0x3) << OPAMP_OPAMPCTRL1_BIAS_Pos)         /* (OPAMP_OPAMPCTRL1) Bias Selection Mask */
#define OPAMP_OPAMPCTRL1_BIAS(value)          (OPAMP_OPAMPCTRL1_BIAS_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_BIAS_Pos)) /* Assigment of value for BIAS in the OPAMP_OPAMPCTRL1 register */
#define   OPAMP_OPAMPCTRL1_BIAS_MODE0_Val     _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL1) Minimum current consumption, but the slowest mode  */
#define   OPAMP_OPAMPCTRL1_BIAS_MODE1_Val     _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL1) Low current consumption, slow speed  */
#define   OPAMP_OPAMPCTRL1_BIAS_MODE2_Val     _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL1) High current consumption, fast speed  */
#define   OPAMP_OPAMPCTRL1_BIAS_MODE3_Val     _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL1) Maximum current consumption, but the fastest mode  */
#define OPAMP_OPAMPCTRL1_BIAS_MODE0           (OPAMP_OPAMPCTRL1_BIAS_MODE0_Val << OPAMP_OPAMPCTRL1_BIAS_Pos) /* (OPAMP_OPAMPCTRL1) Minimum current consumption, but the slowest mode Position  */
#define OPAMP_OPAMPCTRL1_BIAS_MODE1           (OPAMP_OPAMPCTRL1_BIAS_MODE1_Val << OPAMP_OPAMPCTRL1_BIAS_Pos) /* (OPAMP_OPAMPCTRL1) Low current consumption, slow speed Position  */
#define OPAMP_OPAMPCTRL1_BIAS_MODE2           (OPAMP_OPAMPCTRL1_BIAS_MODE2_Val << OPAMP_OPAMPCTRL1_BIAS_Pos) /* (OPAMP_OPAMPCTRL1) High current consumption, fast speed Position  */
#define OPAMP_OPAMPCTRL1_BIAS_MODE3           (OPAMP_OPAMPCTRL1_BIAS_MODE3_Val << OPAMP_OPAMPCTRL1_BIAS_Pos) /* (OPAMP_OPAMPCTRL1) Maximum current consumption, but the fastest mode Position  */
#define OPAMP_OPAMPCTRL1_RES2VCC_Pos          _UINT32_(5)                                          /* (OPAMP_OPAMPCTRL1) Resistor ladder To VCC Position */
#define OPAMP_OPAMPCTRL1_RES2VCC_Msk          (_UINT32_(0x1) << OPAMP_OPAMPCTRL1_RES2VCC_Pos)      /* (OPAMP_OPAMPCTRL1) Resistor ladder To VCC Mask */
#define OPAMP_OPAMPCTRL1_RES2VCC(value)       (OPAMP_OPAMPCTRL1_RES2VCC_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_RES2VCC_Pos)) /* Assigment of value for RES2VCC in the OPAMP_OPAMPCTRL1 register */
#define OPAMP_OPAMPCTRL1_RUNSTDBY_Pos         _UINT32_(6)                                          /* (OPAMP_OPAMPCTRL1) Run in Standby Position */
#define OPAMP_OPAMPCTRL1_RUNSTDBY_Msk         (_UINT32_(0x1) << OPAMP_OPAMPCTRL1_RUNSTDBY_Pos)     /* (OPAMP_OPAMPCTRL1) Run in Standby Mask */
#define OPAMP_OPAMPCTRL1_RUNSTDBY(value)      (OPAMP_OPAMPCTRL1_RUNSTDBY_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the OPAMP_OPAMPCTRL1 register */
#define OPAMP_OPAMPCTRL1_ONDEMAND_Pos         _UINT32_(7)                                          /* (OPAMP_OPAMPCTRL1) On Demand Control Position */
#define OPAMP_OPAMPCTRL1_ONDEMAND_Msk         (_UINT32_(0x1) << OPAMP_OPAMPCTRL1_ONDEMAND_Pos)     /* (OPAMP_OPAMPCTRL1) On Demand Control Mask */
#define OPAMP_OPAMPCTRL1_ONDEMAND(value)      (OPAMP_OPAMPCTRL1_ONDEMAND_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_ONDEMAND_Pos)) /* Assigment of value for ONDEMAND in the OPAMP_OPAMPCTRL1 register */
#define OPAMP_OPAMPCTRL1_RES2OUT_Pos          _UINT32_(8)                                          /* (OPAMP_OPAMPCTRL1) Resistor ladder To Output Position */
#define OPAMP_OPAMPCTRL1_RES2OUT_Msk          (_UINT32_(0x1) << OPAMP_OPAMPCTRL1_RES2OUT_Pos)      /* (OPAMP_OPAMPCTRL1) Resistor ladder To Output Mask */
#define OPAMP_OPAMPCTRL1_RES2OUT(value)       (OPAMP_OPAMPCTRL1_RES2OUT_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_RES2OUT_Pos)) /* Assigment of value for RES2OUT in the OPAMP_OPAMPCTRL1 register */
#define OPAMP_OPAMPCTRL1_RES1EN_Pos           _UINT32_(9)                                          /* (OPAMP_OPAMPCTRL1) Resistor 1 Enable Position */
#define OPAMP_OPAMPCTRL1_RES1EN_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL1_RES1EN_Pos)       /* (OPAMP_OPAMPCTRL1) Resistor 1 Enable Mask */
#define OPAMP_OPAMPCTRL1_RES1EN(value)        (OPAMP_OPAMPCTRL1_RES1EN_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_RES1EN_Pos)) /* Assigment of value for RES1EN in the OPAMP_OPAMPCTRL1 register */
#define OPAMP_OPAMPCTRL1_RES1MUX_Pos          _UINT32_(10)                                         /* (OPAMP_OPAMPCTRL1) Resistor 1 Mux Position */
#define OPAMP_OPAMPCTRL1_RES1MUX_Msk          (_UINT32_(0x7) << OPAMP_OPAMPCTRL1_RES1MUX_Pos)      /* (OPAMP_OPAMPCTRL1) Resistor 1 Mux Mask */
#define OPAMP_OPAMPCTRL1_RES1MUX(value)       (OPAMP_OPAMPCTRL1_RES1MUX_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_RES1MUX_Pos)) /* Assigment of value for RES1MUX in the OPAMP_OPAMPCTRL1 register */
#define   OPAMP_OPAMPCTRL1_RES1MUX_OA1POS_Val _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL1) OPAMP1 Positive Input  */
#define   OPAMP_OPAMPCTRL1_RES1MUX_OA1NEG_Val _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL1) OPAMP1 Negative Input  */
#define   OPAMP_OPAMPCTRL1_RES1MUX_OA0OUT_Val _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL1) OPAMP0 Output  */
#define   OPAMP_OPAMPCTRL1_RES1MUX_AVSS_Val   _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL1) Ground  */
#define   OPAMP_OPAMPCTRL1_RES1MUX_RG_CONN_Val _UINT32_(0x4)                                        /* (OPAMP_OPAMPCTRL1) RG_CONN  */
#define OPAMP_OPAMPCTRL1_RES1MUX_OA1POS       (OPAMP_OPAMPCTRL1_RES1MUX_OA1POS_Val << OPAMP_OPAMPCTRL1_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL1) OPAMP1 Positive Input Position  */
#define OPAMP_OPAMPCTRL1_RES1MUX_OA1NEG       (OPAMP_OPAMPCTRL1_RES1MUX_OA1NEG_Val << OPAMP_OPAMPCTRL1_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL1) OPAMP1 Negative Input Position  */
#define OPAMP_OPAMPCTRL1_RES1MUX_OA0OUT       (OPAMP_OPAMPCTRL1_RES1MUX_OA0OUT_Val << OPAMP_OPAMPCTRL1_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL1) OPAMP0 Output Position  */
#define OPAMP_OPAMPCTRL1_RES1MUX_AVSS         (OPAMP_OPAMPCTRL1_RES1MUX_AVSS_Val << OPAMP_OPAMPCTRL1_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL1) Ground Position  */
#define OPAMP_OPAMPCTRL1_RES1MUX_RG_CONN      (OPAMP_OPAMPCTRL1_RES1MUX_RG_CONN_Val << OPAMP_OPAMPCTRL1_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL1) RG_CONN Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_Pos           _UINT32_(13)                                         /* (OPAMP_OPAMPCTRL1) Potentiometer Selection Position */
#define OPAMP_OPAMPCTRL1_POTMUX_Msk           (_UINT32_(0x7) << OPAMP_OPAMPCTRL1_POTMUX_Pos)       /* (OPAMP_OPAMPCTRL1) Potentiometer Selection Mask */
#define OPAMP_OPAMPCTRL1_POTMUX(value)        (OPAMP_OPAMPCTRL1_POTMUX_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_POTMUX_Pos)) /* Assigment of value for POTMUX in the OPAMP_OPAMPCTRL1 register */
#define   OPAMP_OPAMPCTRL1_POTMUX_14R_2R_Val  _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL1) R1 = 14R, R2 = 2R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_12R_4R_Val  _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL1) R1 = 12R, R2 = 4R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_8R_8R_Val   _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL1) R1 = 8R, R2 = 8R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_6R_10R_Val  _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL1) R1 = 6R, R2 = 10R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_4R_12R_Val  _UINT32_(0x4)                                        /* (OPAMP_OPAMPCTRL1) R1 = 4R, R2 = 12R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_3R_13R_Val  _UINT32_(0x5)                                        /* (OPAMP_OPAMPCTRL1) R1 = 3R, R2 = 13R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_2R_14R_Val  _UINT32_(0x6)                                        /* (OPAMP_OPAMPCTRL1) R1 = 2R, R2 = 14R  */
#define   OPAMP_OPAMPCTRL1_POTMUX_R_15R_Val   _UINT32_(0x7)                                        /* (OPAMP_OPAMPCTRL1) R1 = 1R, R2 = 15R  */
#define OPAMP_OPAMPCTRL1_POTMUX_14R_2R        (OPAMP_OPAMPCTRL1_POTMUX_14R_2R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /* (OPAMP_OPAMPCTRL1) R1 = 14R, R2 = 2R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_12R_4R        (OPAMP_OPAMPCTRL1_POTMUX_12R_4R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /* (OPAMP_OPAMPCTRL1) R1 = 12R, R2 = 4R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_8R_8R         (OPAMP_OPAMPCTRL1_POTMUX_8R_8R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /* (OPAMP_OPAMPCTRL1) R1 = 8R, R2 = 8R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_6R_10R        (OPAMP_OPAMPCTRL1_POTMUX_6R_10R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /* (OPAMP_OPAMPCTRL1) R1 = 6R, R2 = 10R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_4R_12R        (OPAMP_OPAMPCTRL1_POTMUX_4R_12R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /* (OPAMP_OPAMPCTRL1) R1 = 4R, R2 = 12R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_3R_13R        (OPAMP_OPAMPCTRL1_POTMUX_3R_13R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /* (OPAMP_OPAMPCTRL1) R1 = 3R, R2 = 13R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_2R_14R        (OPAMP_OPAMPCTRL1_POTMUX_2R_14R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /* (OPAMP_OPAMPCTRL1) R1 = 2R, R2 = 14R Position  */
#define OPAMP_OPAMPCTRL1_POTMUX_R_15R         (OPAMP_OPAMPCTRL1_POTMUX_R_15R_Val << OPAMP_OPAMPCTRL1_POTMUX_Pos) /* (OPAMP_OPAMPCTRL1) R1 = 1R, R2 = 15R Position  */
#define OPAMP_OPAMPCTRL1_MUXPOS_Pos           _UINT32_(16)                                         /* (OPAMP_OPAMPCTRL1) Positive Input Mux Selection Position */
#define OPAMP_OPAMPCTRL1_MUXPOS_Msk           (_UINT32_(0xF) << OPAMP_OPAMPCTRL1_MUXPOS_Pos)       /* (OPAMP_OPAMPCTRL1) Positive Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL1_MUXPOS(value)        (OPAMP_OPAMPCTRL1_MUXPOS_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_MUXPOS_Pos)) /* Assigment of value for MUXPOS in the OPAMP_OPAMPCTRL1 register */
#define   OPAMP_OPAMPCTRL1_MUXPOS_OA1POS_Val  _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL1) OPAMP1 Positive Input  */
#define   OPAMP_OPAMPCTRL1_MUXPOS_OA1TAP_Val  _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL1) OPAMP1 Resistor ladder taps  */
#define   OPAMP_OPAMPCTRL1_MUXPOS_DAC_REFBUF_Val _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL1) REFERENCE or DAC VOUT0 Output  */
#define   OPAMP_OPAMPCTRL1_MUXPOS_AVSS_Val    _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL1) Ground  */
#define   OPAMP_OPAMPCTRL1_MUXPOS_OA0OUT_Val  _UINT32_(0x4)                                        /* (OPAMP_OPAMPCTRL1) OPAMP0 output  */
#define OPAMP_OPAMPCTRL1_MUXPOS_OA1POS        (OPAMP_OPAMPCTRL1_MUXPOS_OA1POS_Val << OPAMP_OPAMPCTRL1_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL1) OPAMP1 Positive Input Position  */
#define OPAMP_OPAMPCTRL1_MUXPOS_OA1TAP        (OPAMP_OPAMPCTRL1_MUXPOS_OA1TAP_Val << OPAMP_OPAMPCTRL1_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL1) OPAMP1 Resistor ladder taps Position  */
#define OPAMP_OPAMPCTRL1_MUXPOS_DAC_REFBUF    (OPAMP_OPAMPCTRL1_MUXPOS_DAC_REFBUF_Val << OPAMP_OPAMPCTRL1_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL1) REFERENCE or DAC VOUT0 Output Position  */
#define OPAMP_OPAMPCTRL1_MUXPOS_AVSS          (OPAMP_OPAMPCTRL1_MUXPOS_AVSS_Val << OPAMP_OPAMPCTRL1_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL1) Ground Position  */
#define OPAMP_OPAMPCTRL1_MUXPOS_OA0OUT        (OPAMP_OPAMPCTRL1_MUXPOS_OA0OUT_Val << OPAMP_OPAMPCTRL1_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL1) OPAMP0 output Position  */
#define OPAMP_OPAMPCTRL1_MUXNEG_Pos           _UINT32_(20)                                         /* (OPAMP_OPAMPCTRL1) Negative Input Mux Selection Position */
#define OPAMP_OPAMPCTRL1_MUXNEG_Msk           (_UINT32_(0xF) << OPAMP_OPAMPCTRL1_MUXNEG_Pos)       /* (OPAMP_OPAMPCTRL1) Negative Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL1_MUXNEG(value)        (OPAMP_OPAMPCTRL1_MUXNEG_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL1_MUXNEG_Pos)) /* Assigment of value for MUXNEG in the OPAMP_OPAMPCTRL1 register */
#define   OPAMP_OPAMPCTRL1_MUXNEG_OA0NEG_Val  _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL1) OPAMP0 Negative Input  */
#define   OPAMP_OPAMPCTRL1_MUXNEG_OA0TAP_Val  _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL1) OPAMP0 Resistor ladder taps  */
#define   OPAMP_OPAMPCTRL1_MUXNEG_DAC_REFBUF_Val _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL1) DAC VOUT0 or OPAMP Reference Output Voltage (REFBUF)  */
#define   OPAMP_OPAMPCTRL1_MUXNEG_OA0OUT_Val  _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL1) OPAMP0 Output  */
#define OPAMP_OPAMPCTRL1_MUXNEG_OA0NEG        (OPAMP_OPAMPCTRL1_MUXNEG_OA0NEG_Val << OPAMP_OPAMPCTRL1_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL1) OPAMP0 Negative Input Position  */
#define OPAMP_OPAMPCTRL1_MUXNEG_OA0TAP        (OPAMP_OPAMPCTRL1_MUXNEG_OA0TAP_Val << OPAMP_OPAMPCTRL1_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL1) OPAMP0 Resistor ladder taps Position  */
#define OPAMP_OPAMPCTRL1_MUXNEG_DAC_REFBUF    (OPAMP_OPAMPCTRL1_MUXNEG_DAC_REFBUF_Val << OPAMP_OPAMPCTRL1_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL1) DAC VOUT0 or OPAMP Reference Output Voltage (REFBUF) Position  */
#define OPAMP_OPAMPCTRL1_MUXNEG_OA0OUT        (OPAMP_OPAMPCTRL1_MUXNEG_OA0OUT_Val << OPAMP_OPAMPCTRL1_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL1) OPAMP0 Output Position  */
#define OPAMP_OPAMPCTRL1_Msk                  _UINT32_(0x00FFFFFE)                                 /* (OPAMP_OPAMPCTRL1) Register Mask  */


/* -------- OPAMP_OPAMPCTRL2 : (OPAMP Offset: 0x0C) (R/W 32) OPAMP2 Control -------- */
#define OPAMP_OPAMPCTRL2_RESETVALUE           _UINT32_(0x00)                                       /*  (OPAMP_OPAMPCTRL2) OPAMP2 Control  Reset Value */

#define OPAMP_OPAMPCTRL2_ENABLE_Pos           _UINT32_(1)                                          /* (OPAMP_OPAMPCTRL2) Operational Amplifier Enable Position */
#define OPAMP_OPAMPCTRL2_ENABLE_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL2_ENABLE_Pos)       /* (OPAMP_OPAMPCTRL2) Operational Amplifier Enable Mask */
#define OPAMP_OPAMPCTRL2_ENABLE(value)        (OPAMP_OPAMPCTRL2_ENABLE_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_ENABLE_Pos)) /* Assigment of value for ENABLE in the OPAMP_OPAMPCTRL2 register */
#define OPAMP_OPAMPCTRL2_ANAOUT_Pos           _UINT32_(2)                                          /* (OPAMP_OPAMPCTRL2) Analog Output Position */
#define OPAMP_OPAMPCTRL2_ANAOUT_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL2_ANAOUT_Pos)       /* (OPAMP_OPAMPCTRL2) Analog Output Mask */
#define OPAMP_OPAMPCTRL2_ANAOUT(value)        (OPAMP_OPAMPCTRL2_ANAOUT_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_ANAOUT_Pos)) /* Assigment of value for ANAOUT in the OPAMP_OPAMPCTRL2 register */
#define OPAMP_OPAMPCTRL2_BIAS_Pos             _UINT32_(3)                                          /* (OPAMP_OPAMPCTRL2) Bias Selection Position */
#define OPAMP_OPAMPCTRL2_BIAS_Msk             (_UINT32_(0x3) << OPAMP_OPAMPCTRL2_BIAS_Pos)         /* (OPAMP_OPAMPCTRL2) Bias Selection Mask */
#define OPAMP_OPAMPCTRL2_BIAS(value)          (OPAMP_OPAMPCTRL2_BIAS_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_BIAS_Pos)) /* Assigment of value for BIAS in the OPAMP_OPAMPCTRL2 register */
#define   OPAMP_OPAMPCTRL2_BIAS_MODE0_Val     _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL2) Minimum current consumption, but the slowest mode  */
#define   OPAMP_OPAMPCTRL2_BIAS_MODE1_Val     _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL2) Low current consumption, slow speed  */
#define   OPAMP_OPAMPCTRL2_BIAS_MODE2_Val     _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL2) High current consumption, fast speed  */
#define   OPAMP_OPAMPCTRL2_BIAS_MODE3_Val     _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL2) Maximum current consumption, but the fastest mode  */
#define OPAMP_OPAMPCTRL2_BIAS_MODE0           (OPAMP_OPAMPCTRL2_BIAS_MODE0_Val << OPAMP_OPAMPCTRL2_BIAS_Pos) /* (OPAMP_OPAMPCTRL2) Minimum current consumption, but the slowest mode Position  */
#define OPAMP_OPAMPCTRL2_BIAS_MODE1           (OPAMP_OPAMPCTRL2_BIAS_MODE1_Val << OPAMP_OPAMPCTRL2_BIAS_Pos) /* (OPAMP_OPAMPCTRL2) Low current consumption, slow speed Position  */
#define OPAMP_OPAMPCTRL2_BIAS_MODE2           (OPAMP_OPAMPCTRL2_BIAS_MODE2_Val << OPAMP_OPAMPCTRL2_BIAS_Pos) /* (OPAMP_OPAMPCTRL2) High current consumption, fast speed Position  */
#define OPAMP_OPAMPCTRL2_BIAS_MODE3           (OPAMP_OPAMPCTRL2_BIAS_MODE3_Val << OPAMP_OPAMPCTRL2_BIAS_Pos) /* (OPAMP_OPAMPCTRL2) Maximum current consumption, but the fastest mode Position  */
#define OPAMP_OPAMPCTRL2_RES2VCC_Pos          _UINT32_(5)                                          /* (OPAMP_OPAMPCTRL2) Resistor ladder To VCC Position */
#define OPAMP_OPAMPCTRL2_RES2VCC_Msk          (_UINT32_(0x1) << OPAMP_OPAMPCTRL2_RES2VCC_Pos)      /* (OPAMP_OPAMPCTRL2) Resistor ladder To VCC Mask */
#define OPAMP_OPAMPCTRL2_RES2VCC(value)       (OPAMP_OPAMPCTRL2_RES2VCC_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_RES2VCC_Pos)) /* Assigment of value for RES2VCC in the OPAMP_OPAMPCTRL2 register */
#define OPAMP_OPAMPCTRL2_RUNSTDBY_Pos         _UINT32_(6)                                          /* (OPAMP_OPAMPCTRL2) Run in Standby Position */
#define OPAMP_OPAMPCTRL2_RUNSTDBY_Msk         (_UINT32_(0x1) << OPAMP_OPAMPCTRL2_RUNSTDBY_Pos)     /* (OPAMP_OPAMPCTRL2) Run in Standby Mask */
#define OPAMP_OPAMPCTRL2_RUNSTDBY(value)      (OPAMP_OPAMPCTRL2_RUNSTDBY_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the OPAMP_OPAMPCTRL2 register */
#define OPAMP_OPAMPCTRL2_ONDEMAND_Pos         _UINT32_(7)                                          /* (OPAMP_OPAMPCTRL2) On Demand Control Position */
#define OPAMP_OPAMPCTRL2_ONDEMAND_Msk         (_UINT32_(0x1) << OPAMP_OPAMPCTRL2_ONDEMAND_Pos)     /* (OPAMP_OPAMPCTRL2) On Demand Control Mask */
#define OPAMP_OPAMPCTRL2_ONDEMAND(value)      (OPAMP_OPAMPCTRL2_ONDEMAND_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_ONDEMAND_Pos)) /* Assigment of value for ONDEMAND in the OPAMP_OPAMPCTRL2 register */
#define OPAMP_OPAMPCTRL2_RES2OUT_Pos          _UINT32_(8)                                          /* (OPAMP_OPAMPCTRL2) Resistor ladder To Output Position */
#define OPAMP_OPAMPCTRL2_RES2OUT_Msk          (_UINT32_(0x1) << OPAMP_OPAMPCTRL2_RES2OUT_Pos)      /* (OPAMP_OPAMPCTRL2) Resistor ladder To Output Mask */
#define OPAMP_OPAMPCTRL2_RES2OUT(value)       (OPAMP_OPAMPCTRL2_RES2OUT_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_RES2OUT_Pos)) /* Assigment of value for RES2OUT in the OPAMP_OPAMPCTRL2 register */
#define OPAMP_OPAMPCTRL2_RES1EN_Pos           _UINT32_(9)                                          /* (OPAMP_OPAMPCTRL2) Resistor 1 Enable Position */
#define OPAMP_OPAMPCTRL2_RES1EN_Msk           (_UINT32_(0x1) << OPAMP_OPAMPCTRL2_RES1EN_Pos)       /* (OPAMP_OPAMPCTRL2) Resistor 1 Enable Mask */
#define OPAMP_OPAMPCTRL2_RES1EN(value)        (OPAMP_OPAMPCTRL2_RES1EN_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_RES1EN_Pos)) /* Assigment of value for RES1EN in the OPAMP_OPAMPCTRL2 register */
#define OPAMP_OPAMPCTRL2_RES1MUX_Pos          _UINT32_(10)                                         /* (OPAMP_OPAMPCTRL2) Resistor 1 Mux Position */
#define OPAMP_OPAMPCTRL2_RES1MUX_Msk          (_UINT32_(0x7) << OPAMP_OPAMPCTRL2_RES1MUX_Pos)      /* (OPAMP_OPAMPCTRL2) Resistor 1 Mux Mask */
#define OPAMP_OPAMPCTRL2_RES1MUX(value)       (OPAMP_OPAMPCTRL2_RES1MUX_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_RES1MUX_Pos)) /* Assigment of value for RES1MUX in the OPAMP_OPAMPCTRL2 register */
#define   OPAMP_OPAMPCTRL2_RES1MUX_OA2POS_Val _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL2) OPAMP2 Positive Input  */
#define   OPAMP_OPAMPCTRL2_RES1MUX_OA2NEG_Val _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL2) OPAMP2 Negative Input  */
#define   OPAMP_OPAMPCTRL2_RES1MUX_OA1OUT_Val _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL2) OPAMP1 Output  */
#define   OPAMP_OPAMPCTRL2_RES1MUX_AVSS_Val   _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL2) Ground  */
#define OPAMP_OPAMPCTRL2_RES1MUX_OA2POS       (OPAMP_OPAMPCTRL2_RES1MUX_OA2POS_Val << OPAMP_OPAMPCTRL2_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP2 Positive Input Position  */
#define OPAMP_OPAMPCTRL2_RES1MUX_OA2NEG       (OPAMP_OPAMPCTRL2_RES1MUX_OA2NEG_Val << OPAMP_OPAMPCTRL2_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP2 Negative Input Position  */
#define OPAMP_OPAMPCTRL2_RES1MUX_OA1OUT       (OPAMP_OPAMPCTRL2_RES1MUX_OA1OUT_Val << OPAMP_OPAMPCTRL2_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP1 Output Position  */
#define OPAMP_OPAMPCTRL2_RES1MUX_AVSS         (OPAMP_OPAMPCTRL2_RES1MUX_AVSS_Val << OPAMP_OPAMPCTRL2_RES1MUX_Pos) /* (OPAMP_OPAMPCTRL2) Ground Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_Pos           _UINT32_(13)                                         /* (OPAMP_OPAMPCTRL2) Potentiometer Selection Position */
#define OPAMP_OPAMPCTRL2_POTMUX_Msk           (_UINT32_(0x7) << OPAMP_OPAMPCTRL2_POTMUX_Pos)       /* (OPAMP_OPAMPCTRL2) Potentiometer Selection Mask */
#define OPAMP_OPAMPCTRL2_POTMUX(value)        (OPAMP_OPAMPCTRL2_POTMUX_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_POTMUX_Pos)) /* Assigment of value for POTMUX in the OPAMP_OPAMPCTRL2 register */
#define   OPAMP_OPAMPCTRL2_POTMUX_14R_2R_Val  _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL2) R1 = 14R, R2 = 2R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_12R_4R_Val  _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL2) R1 = 12R, R2 = 4R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_8R_8R_Val   _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL2) R1 = 8R, R2 = 8R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_6R_10R_Val  _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL2) R1 = 6R, R2 = 10R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_4R_12R_Val  _UINT32_(0x4)                                        /* (OPAMP_OPAMPCTRL2) R1 = 4R, R2 = 12R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_3R_13R_Val  _UINT32_(0x5)                                        /* (OPAMP_OPAMPCTRL2) R1 = 3R, R2 = 13R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_2R_14R_Val  _UINT32_(0x6)                                        /* (OPAMP_OPAMPCTRL2) R1 = 2R, R2 = 14R  */
#define   OPAMP_OPAMPCTRL2_POTMUX_R_15R_Val   _UINT32_(0x7)                                        /* (OPAMP_OPAMPCTRL2) R1 = 1R, R2 = 15R  */
#define OPAMP_OPAMPCTRL2_POTMUX_14R_2R        (OPAMP_OPAMPCTRL2_POTMUX_14R_2R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /* (OPAMP_OPAMPCTRL2) R1 = 14R, R2 = 2R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_12R_4R        (OPAMP_OPAMPCTRL2_POTMUX_12R_4R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /* (OPAMP_OPAMPCTRL2) R1 = 12R, R2 = 4R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_8R_8R         (OPAMP_OPAMPCTRL2_POTMUX_8R_8R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /* (OPAMP_OPAMPCTRL2) R1 = 8R, R2 = 8R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_6R_10R        (OPAMP_OPAMPCTRL2_POTMUX_6R_10R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /* (OPAMP_OPAMPCTRL2) R1 = 6R, R2 = 10R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_4R_12R        (OPAMP_OPAMPCTRL2_POTMUX_4R_12R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /* (OPAMP_OPAMPCTRL2) R1 = 4R, R2 = 12R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_3R_13R        (OPAMP_OPAMPCTRL2_POTMUX_3R_13R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /* (OPAMP_OPAMPCTRL2) R1 = 3R, R2 = 13R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_2R_14R        (OPAMP_OPAMPCTRL2_POTMUX_2R_14R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /* (OPAMP_OPAMPCTRL2) R1 = 2R, R2 = 14R Position  */
#define OPAMP_OPAMPCTRL2_POTMUX_R_15R         (OPAMP_OPAMPCTRL2_POTMUX_R_15R_Val << OPAMP_OPAMPCTRL2_POTMUX_Pos) /* (OPAMP_OPAMPCTRL2) R1 = 1R, R2 = 15R Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_Pos           _UINT32_(16)                                         /* (OPAMP_OPAMPCTRL2) Positive Input Mux Selection Position */
#define OPAMP_OPAMPCTRL2_MUXPOS_Msk           (_UINT32_(0xF) << OPAMP_OPAMPCTRL2_MUXPOS_Pos)       /* (OPAMP_OPAMPCTRL2) Positive Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL2_MUXPOS(value)        (OPAMP_OPAMPCTRL2_MUXPOS_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_MUXPOS_Pos)) /* Assigment of value for MUXPOS in the OPAMP_OPAMPCTRL2 register */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA2POS_Val  _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL2) OPAMP2 Positive Input  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA2TAP_Val  _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL2) OPAMP2 Resistor ladder taps  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_DAC_REFBUF_Val _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL2) REFERENCE or DAC VOUT0 Output  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_AVSS_Val    _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL2) Ground  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA1OUT_Val  _UINT32_(0x4)                                        /* (OPAMP_OPAMPCTRL2) OPAMP1 Output  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA0POS_Val  _UINT32_(0x5)                                        /* (OPAMP_OPAMPCTRL2) OPAMP0 Positive Input  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA1POS_Val  _UINT32_(0x6)                                        /* (OPAMP_OPAMPCTRL2) OPAMP1 Positive Input  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_OA0TAP_Val  _UINT32_(0x7)                                        /* (OPAMP_OPAMPCTRL2) OPAMP0 Resistor Ladder Taps  */
#define   OPAMP_OPAMPCTRL2_MUXPOS_RES3TAP_Val _UINT32_(0x8)                                        /* (OPAMP_OPAMPCTRL2) RES3TAP Potentiometer  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA2POS        (OPAMP_OPAMPCTRL2_MUXPOS_OA2POS_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP2 Positive Input Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA2TAP        (OPAMP_OPAMPCTRL2_MUXPOS_OA2TAP_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP2 Resistor ladder taps Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_DAC_REFBUF    (OPAMP_OPAMPCTRL2_MUXPOS_DAC_REFBUF_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL2) REFERENCE or DAC VOUT0 Output Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_AVSS          (OPAMP_OPAMPCTRL2_MUXPOS_AVSS_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL2) Ground Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA1OUT        (OPAMP_OPAMPCTRL2_MUXPOS_OA1OUT_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP1 Output Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA0POS        (OPAMP_OPAMPCTRL2_MUXPOS_OA0POS_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP0 Positive Input Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA1POS        (OPAMP_OPAMPCTRL2_MUXPOS_OA1POS_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP1 Positive Input Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_OA0TAP        (OPAMP_OPAMPCTRL2_MUXPOS_OA0TAP_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP0 Resistor Ladder Taps Position  */
#define OPAMP_OPAMPCTRL2_MUXPOS_RES3TAP       (OPAMP_OPAMPCTRL2_MUXPOS_RES3TAP_Val << OPAMP_OPAMPCTRL2_MUXPOS_Pos) /* (OPAMP_OPAMPCTRL2) RES3TAP Potentiometer Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_Pos           _UINT32_(20)                                         /* (OPAMP_OPAMPCTRL2) Negative Input Mux Selection Position */
#define OPAMP_OPAMPCTRL2_MUXNEG_Msk           (_UINT32_(0xF) << OPAMP_OPAMPCTRL2_MUXNEG_Pos)       /* (OPAMP_OPAMPCTRL2) Negative Input Mux Selection Mask */
#define OPAMP_OPAMPCTRL2_MUXNEG(value)        (OPAMP_OPAMPCTRL2_MUXNEG_Msk & (_UINT32_(value) << OPAMP_OPAMPCTRL2_MUXNEG_Pos)) /* Assigment of value for MUXNEG in the OPAMP_OPAMPCTRL2 register */
#define   OPAMP_OPAMPCTRL2_MUXNEG_OA0NEG_Val  _UINT32_(0x0)                                        /* (OPAMP_OPAMPCTRL2) OPAMP0 Negative Input  */
#define   OPAMP_OPAMPCTRL2_MUXNEG_OA0TAP_Val  _UINT32_(0x1)                                        /* (OPAMP_OPAMPCTRL2) OPAMP0 Resistor ladder taps  */
#define   OPAMP_OPAMPCTRL2_MUXNEG_DAC_REFBUF_Val _UINT32_(0x2)                                        /* (OPAMP_OPAMPCTRL2) DAC VOUT0 or OPAMP Reference Output Voltage (REFBUF)  */
#define   OPAMP_OPAMPCTRL2_MUXNEG_OA0OUT_Val  _UINT32_(0x3)                                        /* (OPAMP_OPAMPCTRL2) OPAMP0 Output  */
#define OPAMP_OPAMPCTRL2_MUXNEG_OA0NEG        (OPAMP_OPAMPCTRL2_MUXNEG_OA0NEG_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP0 Negative Input Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_OA0TAP        (OPAMP_OPAMPCTRL2_MUXNEG_OA0TAP_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP0 Resistor ladder taps Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_DAC_REFBUF    (OPAMP_OPAMPCTRL2_MUXNEG_DAC_REFBUF_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL2) DAC VOUT0 or OPAMP Reference Output Voltage (REFBUF) Position  */
#define OPAMP_OPAMPCTRL2_MUXNEG_OA0OUT        (OPAMP_OPAMPCTRL2_MUXNEG_OA0OUT_Val << OPAMP_OPAMPCTRL2_MUXNEG_Pos) /* (OPAMP_OPAMPCTRL2) OPAMP0 Output Position  */
#define OPAMP_OPAMPCTRL2_Msk                  _UINT32_(0x00FFFFFE)                                 /* (OPAMP_OPAMPCTRL2) Register Mask  */


/* -------- OPAMP_RESCTRL : (OPAMP Offset: 0x10) (R/W 8) Resister Control -------- */
#define OPAMP_RESCTRL_RESETVALUE              _UINT8_(0x00)                                        /*  (OPAMP_RESCTRL) Resister Control  Reset Value */

#define OPAMP_RESCTRL_RES2OUT_Pos             _UINT8_(0)                                           /* (OPAMP_RESCTRL) Resistor ladder To Output Position */
#define OPAMP_RESCTRL_RES2OUT_Msk             (_UINT8_(0x1) << OPAMP_RESCTRL_RES2OUT_Pos)          /* (OPAMP_RESCTRL) Resistor ladder To Output Mask */
#define OPAMP_RESCTRL_RES2OUT(value)          (OPAMP_RESCTRL_RES2OUT_Msk & (_UINT8_(value) << OPAMP_RESCTRL_RES2OUT_Pos)) /* Assigment of value for RES2OUT in the OPAMP_RESCTRL register */
#define OPAMP_RESCTRL_RES1EN_Pos              _UINT8_(1)                                           /* (OPAMP_RESCTRL) Resistor 1 Enable Position */
#define OPAMP_RESCTRL_RES1EN_Msk              (_UINT8_(0x1) << OPAMP_RESCTRL_RES1EN_Pos)           /* (OPAMP_RESCTRL) Resistor 1 Enable Mask */
#define OPAMP_RESCTRL_RES1EN(value)           (OPAMP_RESCTRL_RES1EN_Msk & (_UINT8_(value) << OPAMP_RESCTRL_RES1EN_Pos)) /* Assigment of value for RES1EN in the OPAMP_RESCTRL register */
#define OPAMP_RESCTRL_RES1MUX_Pos             _UINT8_(2)                                           /* (OPAMP_RESCTRL) Resistor 1 Mux Position */
#define OPAMP_RESCTRL_RES1MUX_Msk             (_UINT8_(0x1) << OPAMP_RESCTRL_RES1MUX_Pos)          /* (OPAMP_RESCTRL) Resistor 1 Mux Mask */
#define OPAMP_RESCTRL_RES1MUX(value)          (OPAMP_RESCTRL_RES1MUX_Msk & (_UINT8_(value) << OPAMP_RESCTRL_RES1MUX_Pos)) /* Assigment of value for RES1MUX in the OPAMP_RESCTRL register */
#define   OPAMP_RESCTRL_RES1MUX_DAC_Val       _UINT8_(0x0)                                         /* (OPAMP_RESCTRL) DAC VOUT0 Output  */
#define   OPAMP_RESCTRL_RES1MUX_REFBUF_Val    _UINT8_(0x1)                                         /* (OPAMP_RESCTRL) OPAMP Reference Buffer Output  */
#define OPAMP_RESCTRL_RES1MUX_DAC             (OPAMP_RESCTRL_RES1MUX_DAC_Val << OPAMP_RESCTRL_RES1MUX_Pos) /* (OPAMP_RESCTRL) DAC VOUT0 Output Position  */
#define OPAMP_RESCTRL_RES1MUX_REFBUF          (OPAMP_RESCTRL_RES1MUX_REFBUF_Val << OPAMP_RESCTRL_RES1MUX_Pos) /* (OPAMP_RESCTRL) OPAMP Reference Buffer Output Position  */
#define OPAMP_RESCTRL_POTMUX_Pos              _UINT8_(3)                                           /* (OPAMP_RESCTRL) Potentiometer Selection Position */
#define OPAMP_RESCTRL_POTMUX_Msk              (_UINT8_(0x7) << OPAMP_RESCTRL_POTMUX_Pos)           /* (OPAMP_RESCTRL) Potentiometer Selection Mask */
#define OPAMP_RESCTRL_POTMUX(value)           (OPAMP_RESCTRL_POTMUX_Msk & (_UINT8_(value) << OPAMP_RESCTRL_POTMUX_Pos)) /* Assigment of value for POTMUX in the OPAMP_RESCTRL register */
#define   OPAMP_RESCTRL_POTMUX_14R_2R_Val     _UINT8_(0x0)                                         /* (OPAMP_RESCTRL) Gain = 0.14  */
#define   OPAMP_RESCTRL_POTMUX_12R_4R_Val     _UINT8_(0x1)                                         /* (OPAMP_RESCTRL) Gain = 0.33  */
#define   OPAMP_RESCTRL_POTMUX_8R_8R_Val      _UINT8_(0x2)                                         /* (OPAMP_RESCTRL) Gain = 1  */
#define   OPAMP_RESCTRL_POTMUX_6R_10R_Val     _UINT8_(0x3)                                         /* (OPAMP_RESCTRL) Gain = 1.67  */
#define   OPAMP_RESCTRL_POTMUX_4R_12R_Val     _UINT8_(0x4)                                         /* (OPAMP_RESCTRL) Gain = 3  */
#define   OPAMP_RESCTRL_POTMUX_3R_13R_Val     _UINT8_(0x5)                                         /* (OPAMP_RESCTRL) Gain = 4.33  */
#define   OPAMP_RESCTRL_POTMUX_2R_14R_Val     _UINT8_(0x6)                                         /* (OPAMP_RESCTRL) Gain = 7  */
#define   OPAMP_RESCTRL_POTMUX_R_15R_Val      _UINT8_(0x7)                                         /* (OPAMP_RESCTRL) Gain = 15  */
#define OPAMP_RESCTRL_POTMUX_14R_2R           (OPAMP_RESCTRL_POTMUX_14R_2R_Val << OPAMP_RESCTRL_POTMUX_Pos) /* (OPAMP_RESCTRL) Gain = 0.14 Position  */
#define OPAMP_RESCTRL_POTMUX_12R_4R           (OPAMP_RESCTRL_POTMUX_12R_4R_Val << OPAMP_RESCTRL_POTMUX_Pos) /* (OPAMP_RESCTRL) Gain = 0.33 Position  */
#define OPAMP_RESCTRL_POTMUX_8R_8R            (OPAMP_RESCTRL_POTMUX_8R_8R_Val << OPAMP_RESCTRL_POTMUX_Pos) /* (OPAMP_RESCTRL) Gain = 1 Position  */
#define OPAMP_RESCTRL_POTMUX_6R_10R           (OPAMP_RESCTRL_POTMUX_6R_10R_Val << OPAMP_RESCTRL_POTMUX_Pos) /* (OPAMP_RESCTRL) Gain = 1.67 Position  */
#define OPAMP_RESCTRL_POTMUX_4R_12R           (OPAMP_RESCTRL_POTMUX_4R_12R_Val << OPAMP_RESCTRL_POTMUX_Pos) /* (OPAMP_RESCTRL) Gain = 3 Position  */
#define OPAMP_RESCTRL_POTMUX_3R_13R           (OPAMP_RESCTRL_POTMUX_3R_13R_Val << OPAMP_RESCTRL_POTMUX_Pos) /* (OPAMP_RESCTRL) Gain = 4.33 Position  */
#define OPAMP_RESCTRL_POTMUX_2R_14R           (OPAMP_RESCTRL_POTMUX_2R_14R_Val << OPAMP_RESCTRL_POTMUX_Pos) /* (OPAMP_RESCTRL) Gain = 7 Position  */
#define OPAMP_RESCTRL_POTMUX_R_15R            (OPAMP_RESCTRL_POTMUX_R_15R_Val << OPAMP_RESCTRL_POTMUX_Pos) /* (OPAMP_RESCTRL) Gain = 15 Position  */
#define OPAMP_RESCTRL_REFBUFLEVEL_Pos         _UINT8_(6)                                           /* (OPAMP_RESCTRL) Reference output voltage level select Position */
#define OPAMP_RESCTRL_REFBUFLEVEL_Msk         (_UINT8_(0x3) << OPAMP_RESCTRL_REFBUFLEVEL_Pos)      /* (OPAMP_RESCTRL) Reference output voltage level select Mask */
#define OPAMP_RESCTRL_REFBUFLEVEL(value)      (OPAMP_RESCTRL_REFBUFLEVEL_Msk & (_UINT8_(value) << OPAMP_RESCTRL_REFBUFLEVEL_Pos)) /* Assigment of value for REFBUFLEVEL in the OPAMP_RESCTRL register */
#define   OPAMP_RESCTRL_REFBUFLEVEL_1_1V_Val  _UINT8_(0x0)                                         /* (OPAMP_RESCTRL) 1.1V  */
#define   OPAMP_RESCTRL_REFBUFLEVEL_1_25V_Val _UINT8_(0x1)                                         /* (OPAMP_RESCTRL) 1.25V  */
#define   OPAMP_RESCTRL_REFBUFLEVEL_1_6V_Val  _UINT8_(0x2)                                         /* (OPAMP_RESCTRL) 1.6V  */
#define OPAMP_RESCTRL_REFBUFLEVEL_1_1V        (OPAMP_RESCTRL_REFBUFLEVEL_1_1V_Val << OPAMP_RESCTRL_REFBUFLEVEL_Pos) /* (OPAMP_RESCTRL) 1.1V Position  */
#define OPAMP_RESCTRL_REFBUFLEVEL_1_25V       (OPAMP_RESCTRL_REFBUFLEVEL_1_25V_Val << OPAMP_RESCTRL_REFBUFLEVEL_Pos) /* (OPAMP_RESCTRL) 1.25V Position  */
#define OPAMP_RESCTRL_REFBUFLEVEL_1_6V        (OPAMP_RESCTRL_REFBUFLEVEL_1_6V_Val << OPAMP_RESCTRL_REFBUFLEVEL_Pos) /* (OPAMP_RESCTRL) 1.6V Position  */
#define OPAMP_RESCTRL_Msk                     _UINT8_(0xFF)                                        /* (OPAMP_RESCTRL) Register Mask  */


/** \brief OPAMP register offsets definitions */
#define OPAMP_CTRLA_REG_OFST           _UINT32_(0x00)      /* (OPAMP_CTRLA) Control A Offset */
#define OPAMP_STATUS_REG_OFST          _UINT32_(0x02)      /* (OPAMP_STATUS) Status Offset */
#define OPAMP_OPAMPCTRL0_REG_OFST      _UINT32_(0x04)      /* (OPAMP_OPAMPCTRL0) OPAMP0 Control Offset */
#define OPAMP_OPAMPCTRL1_REG_OFST      _UINT32_(0x08)      /* (OPAMP_OPAMPCTRL1) OPAMP1 Control Offset */
#define OPAMP_OPAMPCTRL2_REG_OFST      _UINT32_(0x0C)      /* (OPAMP_OPAMPCTRL2) OPAMP2 Control Offset */
#define OPAMP_RESCTRL_REG_OFST         _UINT32_(0x10)      /* (OPAMP_RESCTRL) Resister Control Offset */

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
  __IO  uint8_t                        OPAMP_RESCTRL;      /**< Offset: 0x10 (R/W  8) Resister Control */
} opamp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMLE00_OPAMP_COMPONENT_H_ */
