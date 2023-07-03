/*
 * Component description for EVSYS
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
#ifndef _PIC32CMLE00_EVSYS_COMPONENT_H_
#define _PIC32CMLE00_EVSYS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EVSYS                                        */
/* ************************************************************************** */

/* -------- EVSYS_CHANNEL : (EVSYS Offset: 0x00) (R/W 32) Channel n Control -------- */
#define EVSYS_CHANNEL_RESETVALUE              _UINT32_(0x8000)                                     /*  (EVSYS_CHANNEL) Channel n Control  Reset Value */

#define EVSYS_CHANNEL_EVGEN_Pos               _UINT32_(0)                                          /* (EVSYS_CHANNEL) Event Generator Selection Position */
#define EVSYS_CHANNEL_EVGEN_Msk               (_UINT32_(0x7F) << EVSYS_CHANNEL_EVGEN_Pos)          /* (EVSYS_CHANNEL) Event Generator Selection Mask */
#define EVSYS_CHANNEL_EVGEN(value)            (EVSYS_CHANNEL_EVGEN_Msk & (_UINT32_(value) << EVSYS_CHANNEL_EVGEN_Pos)) /* Assigment of value for EVGEN in the EVSYS_CHANNEL register */
#define EVSYS_CHANNEL_PATH_Pos                _UINT32_(8)                                          /* (EVSYS_CHANNEL) Path Selection Position */
#define EVSYS_CHANNEL_PATH_Msk                (_UINT32_(0x3) << EVSYS_CHANNEL_PATH_Pos)            /* (EVSYS_CHANNEL) Path Selection Mask */
#define EVSYS_CHANNEL_PATH(value)             (EVSYS_CHANNEL_PATH_Msk & (_UINT32_(value) << EVSYS_CHANNEL_PATH_Pos)) /* Assigment of value for PATH in the EVSYS_CHANNEL register */
#define   EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val  _UINT32_(0x0)                                        /* (EVSYS_CHANNEL) Synchronous path  */
#define   EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val _UINT32_(0x1)                                        /* (EVSYS_CHANNEL) Resynchronized path  */
#define   EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val _UINT32_(0x2)                                        /* (EVSYS_CHANNEL) Asynchronous path  */
#define EVSYS_CHANNEL_PATH_SYNCHRONOUS        (EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos) /* (EVSYS_CHANNEL) Synchronous path Position  */
#define EVSYS_CHANNEL_PATH_RESYNCHRONIZED     (EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val << EVSYS_CHANNEL_PATH_Pos) /* (EVSYS_CHANNEL) Resynchronized path Position  */
#define EVSYS_CHANNEL_PATH_ASYNCHRONOUS       (EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos) /* (EVSYS_CHANNEL) Asynchronous path Position  */
#define EVSYS_CHANNEL_EDGSEL_Pos              _UINT32_(10)                                         /* (EVSYS_CHANNEL) Edge Detection Selection Position */
#define EVSYS_CHANNEL_EDGSEL_Msk              (_UINT32_(0x3) << EVSYS_CHANNEL_EDGSEL_Pos)          /* (EVSYS_CHANNEL) Edge Detection Selection Mask */
#define EVSYS_CHANNEL_EDGSEL(value)           (EVSYS_CHANNEL_EDGSEL_Msk & (_UINT32_(value) << EVSYS_CHANNEL_EDGSEL_Pos)) /* Assigment of value for EDGSEL in the EVSYS_CHANNEL register */
#define   EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val _UINT32_(0x0)                                        /* (EVSYS_CHANNEL) No event output when using the resynchronized or synchronous path  */
#define   EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val _UINT32_(0x1)                                        /* (EVSYS_CHANNEL) Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path  */
#define   EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val _UINT32_(0x2)                                        /* (EVSYS_CHANNEL) Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path  */
#define   EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val _UINT32_(0x3)                                        /* (EVSYS_CHANNEL) Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path  */
#define EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT    (EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val << EVSYS_CHANNEL_EDGSEL_Pos) /* (EVSYS_CHANNEL) No event output when using the resynchronized or synchronous path Position  */
#define EVSYS_CHANNEL_EDGSEL_RISING_EDGE      (EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos) /* (EVSYS_CHANNEL) Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path Position  */
#define EVSYS_CHANNEL_EDGSEL_FALLING_EDGE     (EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos) /* (EVSYS_CHANNEL) Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path Position  */
#define EVSYS_CHANNEL_EDGSEL_BOTH_EDGES       (EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val << EVSYS_CHANNEL_EDGSEL_Pos) /* (EVSYS_CHANNEL) Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path Position  */
#define EVSYS_CHANNEL_RUNSTDBY_Pos            _UINT32_(14)                                         /* (EVSYS_CHANNEL) Run in standby Position */
#define EVSYS_CHANNEL_RUNSTDBY_Msk            (_UINT32_(0x1) << EVSYS_CHANNEL_RUNSTDBY_Pos)        /* (EVSYS_CHANNEL) Run in standby Mask */
#define EVSYS_CHANNEL_RUNSTDBY(value)         (EVSYS_CHANNEL_RUNSTDBY_Msk & (_UINT32_(value) << EVSYS_CHANNEL_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the EVSYS_CHANNEL register */
#define EVSYS_CHANNEL_ONDEMAND_Pos            _UINT32_(15)                                         /* (EVSYS_CHANNEL) Generic Clock On Demand Position */
#define EVSYS_CHANNEL_ONDEMAND_Msk            (_UINT32_(0x1) << EVSYS_CHANNEL_ONDEMAND_Pos)        /* (EVSYS_CHANNEL) Generic Clock On Demand Mask */
#define EVSYS_CHANNEL_ONDEMAND(value)         (EVSYS_CHANNEL_ONDEMAND_Msk & (_UINT32_(value) << EVSYS_CHANNEL_ONDEMAND_Pos)) /* Assigment of value for ONDEMAND in the EVSYS_CHANNEL register */
#define EVSYS_CHANNEL_Msk                     _UINT32_(0x0000CF7F)                                 /* (EVSYS_CHANNEL) Register Mask  */


/* -------- EVSYS_CHINTENCLR : (EVSYS Offset: 0x04) (R/W 8) Channel n Interrupt Enable Clear -------- */
#define EVSYS_CHINTENCLR_RESETVALUE           _UINT8_(0x00)                                        /*  (EVSYS_CHINTENCLR) Channel n Interrupt Enable Clear  Reset Value */

#define EVSYS_CHINTENCLR_OVR_Pos              _UINT8_(0)                                           /* (EVSYS_CHINTENCLR) Channel Overrun Interrupt Disable Position */
#define EVSYS_CHINTENCLR_OVR_Msk              (_UINT8_(0x1) << EVSYS_CHINTENCLR_OVR_Pos)           /* (EVSYS_CHINTENCLR) Channel Overrun Interrupt Disable Mask */
#define EVSYS_CHINTENCLR_OVR(value)           (EVSYS_CHINTENCLR_OVR_Msk & (_UINT8_(value) << EVSYS_CHINTENCLR_OVR_Pos)) /* Assigment of value for OVR in the EVSYS_CHINTENCLR register */
#define EVSYS_CHINTENCLR_EVD_Pos              _UINT8_(1)                                           /* (EVSYS_CHINTENCLR) Channel Event Detected Interrupt Disable Position */
#define EVSYS_CHINTENCLR_EVD_Msk              (_UINT8_(0x1) << EVSYS_CHINTENCLR_EVD_Pos)           /* (EVSYS_CHINTENCLR) Channel Event Detected Interrupt Disable Mask */
#define EVSYS_CHINTENCLR_EVD(value)           (EVSYS_CHINTENCLR_EVD_Msk & (_UINT8_(value) << EVSYS_CHINTENCLR_EVD_Pos)) /* Assigment of value for EVD in the EVSYS_CHINTENCLR register */
#define EVSYS_CHINTENCLR_Msk                  _UINT8_(0x03)                                        /* (EVSYS_CHINTENCLR) Register Mask  */


/* -------- EVSYS_CHINTENSET : (EVSYS Offset: 0x05) (R/W 8) Channel n Interrupt Enable Set -------- */
#define EVSYS_CHINTENSET_RESETVALUE           _UINT8_(0x00)                                        /*  (EVSYS_CHINTENSET) Channel n Interrupt Enable Set  Reset Value */

#define EVSYS_CHINTENSET_OVR_Pos              _UINT8_(0)                                           /* (EVSYS_CHINTENSET) Channel Overrun Interrupt Enable Position */
#define EVSYS_CHINTENSET_OVR_Msk              (_UINT8_(0x1) << EVSYS_CHINTENSET_OVR_Pos)           /* (EVSYS_CHINTENSET) Channel Overrun Interrupt Enable Mask */
#define EVSYS_CHINTENSET_OVR(value)           (EVSYS_CHINTENSET_OVR_Msk & (_UINT8_(value) << EVSYS_CHINTENSET_OVR_Pos)) /* Assigment of value for OVR in the EVSYS_CHINTENSET register */
#define EVSYS_CHINTENSET_EVD_Pos              _UINT8_(1)                                           /* (EVSYS_CHINTENSET) Channel Event Detected Interrupt Enable Position */
#define EVSYS_CHINTENSET_EVD_Msk              (_UINT8_(0x1) << EVSYS_CHINTENSET_EVD_Pos)           /* (EVSYS_CHINTENSET) Channel Event Detected Interrupt Enable Mask */
#define EVSYS_CHINTENSET_EVD(value)           (EVSYS_CHINTENSET_EVD_Msk & (_UINT8_(value) << EVSYS_CHINTENSET_EVD_Pos)) /* Assigment of value for EVD in the EVSYS_CHINTENSET register */
#define EVSYS_CHINTENSET_Msk                  _UINT8_(0x03)                                        /* (EVSYS_CHINTENSET) Register Mask  */


/* -------- EVSYS_CHINTFLAG : (EVSYS Offset: 0x06) (R/W 8) Channel n Interrupt Flag Status and Clear -------- */
#define EVSYS_CHINTFLAG_RESETVALUE            _UINT8_(0x00)                                        /*  (EVSYS_CHINTFLAG) Channel n Interrupt Flag Status and Clear  Reset Value */

#define EVSYS_CHINTFLAG_OVR_Pos               _UINT8_(0)                                           /* (EVSYS_CHINTFLAG) Channel Overrun Position */
#define EVSYS_CHINTFLAG_OVR_Msk               (_UINT8_(0x1) << EVSYS_CHINTFLAG_OVR_Pos)            /* (EVSYS_CHINTFLAG) Channel Overrun Mask */
#define EVSYS_CHINTFLAG_OVR(value)            (EVSYS_CHINTFLAG_OVR_Msk & (_UINT8_(value) << EVSYS_CHINTFLAG_OVR_Pos)) /* Assigment of value for OVR in the EVSYS_CHINTFLAG register */
#define EVSYS_CHINTFLAG_EVD_Pos               _UINT8_(1)                                           /* (EVSYS_CHINTFLAG) Channel Event Detected Position */
#define EVSYS_CHINTFLAG_EVD_Msk               (_UINT8_(0x1) << EVSYS_CHINTFLAG_EVD_Pos)            /* (EVSYS_CHINTFLAG) Channel Event Detected Mask */
#define EVSYS_CHINTFLAG_EVD(value)            (EVSYS_CHINTFLAG_EVD_Msk & (_UINT8_(value) << EVSYS_CHINTFLAG_EVD_Pos)) /* Assigment of value for EVD in the EVSYS_CHINTFLAG register */
#define EVSYS_CHINTFLAG_Msk                   _UINT8_(0x03)                                        /* (EVSYS_CHINTFLAG) Register Mask  */


/* -------- EVSYS_CHSTATUS : (EVSYS Offset: 0x07) ( R/ 8) Channel n Status -------- */
#define EVSYS_CHSTATUS_RESETVALUE             _UINT8_(0x01)                                        /*  (EVSYS_CHSTATUS) Channel n Status  Reset Value */

#define EVSYS_CHSTATUS_RDYUSR_Pos             _UINT8_(0)                                           /* (EVSYS_CHSTATUS) Ready User Position */
#define EVSYS_CHSTATUS_RDYUSR_Msk             (_UINT8_(0x1) << EVSYS_CHSTATUS_RDYUSR_Pos)          /* (EVSYS_CHSTATUS) Ready User Mask */
#define EVSYS_CHSTATUS_RDYUSR(value)          (EVSYS_CHSTATUS_RDYUSR_Msk & (_UINT8_(value) << EVSYS_CHSTATUS_RDYUSR_Pos)) /* Assigment of value for RDYUSR in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_BUSYCH_Pos             _UINT8_(1)                                           /* (EVSYS_CHSTATUS) Busy Channel Position */
#define EVSYS_CHSTATUS_BUSYCH_Msk             (_UINT8_(0x1) << EVSYS_CHSTATUS_BUSYCH_Pos)          /* (EVSYS_CHSTATUS) Busy Channel Mask */
#define EVSYS_CHSTATUS_BUSYCH(value)          (EVSYS_CHSTATUS_BUSYCH_Msk & (_UINT8_(value) << EVSYS_CHSTATUS_BUSYCH_Pos)) /* Assigment of value for BUSYCH in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_Msk                    _UINT8_(0x03)                                        /* (EVSYS_CHSTATUS) Register Mask  */


/* -------- EVSYS_CTRLA : (EVSYS Offset: 0x00) ( /W 8) Control -------- */
#define EVSYS_CTRLA_RESETVALUE                _UINT8_(0x00)                                        /*  (EVSYS_CTRLA) Control  Reset Value */

#define EVSYS_CTRLA_SWRST_Pos                 _UINT8_(0)                                           /* (EVSYS_CTRLA) Software Reset Position */
#define EVSYS_CTRLA_SWRST_Msk                 (_UINT8_(0x1) << EVSYS_CTRLA_SWRST_Pos)              /* (EVSYS_CTRLA) Software Reset Mask */
#define EVSYS_CTRLA_SWRST(value)              (EVSYS_CTRLA_SWRST_Msk & (_UINT8_(value) << EVSYS_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the EVSYS_CTRLA register */
#define EVSYS_CTRLA_Msk                       _UINT8_(0x01)                                        /* (EVSYS_CTRLA) Register Mask  */


/* -------- EVSYS_SWEVT : (EVSYS Offset: 0x04) ( /W 32) Software Event -------- */
#define EVSYS_SWEVT_RESETVALUE                _UINT32_(0x00)                                       /*  (EVSYS_SWEVT) Software Event  Reset Value */

#define EVSYS_SWEVT_CHANNEL0_Pos              _UINT32_(0)                                          /* (EVSYS_SWEVT) Channel 0 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL0_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL0_Pos)          /* (EVSYS_SWEVT) Channel 0 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL0(value)           (EVSYS_SWEVT_CHANNEL0_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL0_Pos)) /* Assigment of value for CHANNEL0 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL1_Pos              _UINT32_(1)                                          /* (EVSYS_SWEVT) Channel 1 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL1_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL1_Pos)          /* (EVSYS_SWEVT) Channel 1 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL1(value)           (EVSYS_SWEVT_CHANNEL1_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL1_Pos)) /* Assigment of value for CHANNEL1 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL2_Pos              _UINT32_(2)                                          /* (EVSYS_SWEVT) Channel 2 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL2_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL2_Pos)          /* (EVSYS_SWEVT) Channel 2 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL2(value)           (EVSYS_SWEVT_CHANNEL2_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL2_Pos)) /* Assigment of value for CHANNEL2 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL3_Pos              _UINT32_(3)                                          /* (EVSYS_SWEVT) Channel 3 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL3_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL3_Pos)          /* (EVSYS_SWEVT) Channel 3 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL3(value)           (EVSYS_SWEVT_CHANNEL3_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL3_Pos)) /* Assigment of value for CHANNEL3 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL4_Pos              _UINT32_(4)                                          /* (EVSYS_SWEVT) Channel 4 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL4_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL4_Pos)          /* (EVSYS_SWEVT) Channel 4 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL4(value)           (EVSYS_SWEVT_CHANNEL4_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL4_Pos)) /* Assigment of value for CHANNEL4 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL5_Pos              _UINT32_(5)                                          /* (EVSYS_SWEVT) Channel 5 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL5_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL5_Pos)          /* (EVSYS_SWEVT) Channel 5 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL5(value)           (EVSYS_SWEVT_CHANNEL5_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL5_Pos)) /* Assigment of value for CHANNEL5 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL6_Pos              _UINT32_(6)                                          /* (EVSYS_SWEVT) Channel 6 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL6_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL6_Pos)          /* (EVSYS_SWEVT) Channel 6 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL6(value)           (EVSYS_SWEVT_CHANNEL6_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL6_Pos)) /* Assigment of value for CHANNEL6 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL7_Pos              _UINT32_(7)                                          /* (EVSYS_SWEVT) Channel 7 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL7_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL7_Pos)          /* (EVSYS_SWEVT) Channel 7 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL7(value)           (EVSYS_SWEVT_CHANNEL7_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL7_Pos)) /* Assigment of value for CHANNEL7 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL8_Pos              _UINT32_(8)                                          /* (EVSYS_SWEVT) Channel 8 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL8_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL8_Pos)          /* (EVSYS_SWEVT) Channel 8 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL8(value)           (EVSYS_SWEVT_CHANNEL8_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL8_Pos)) /* Assigment of value for CHANNEL8 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL9_Pos              _UINT32_(9)                                          /* (EVSYS_SWEVT) Channel 9 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL9_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL9_Pos)          /* (EVSYS_SWEVT) Channel 9 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL9(value)           (EVSYS_SWEVT_CHANNEL9_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL9_Pos)) /* Assigment of value for CHANNEL9 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL10_Pos             _UINT32_(10)                                         /* (EVSYS_SWEVT) Channel 10 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL10_Msk             (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL10_Pos)         /* (EVSYS_SWEVT) Channel 10 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL10(value)          (EVSYS_SWEVT_CHANNEL10_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL10_Pos)) /* Assigment of value for CHANNEL10 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL11_Pos             _UINT32_(11)                                         /* (EVSYS_SWEVT) Channel 11 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL11_Msk             (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL11_Pos)         /* (EVSYS_SWEVT) Channel 11 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL11(value)          (EVSYS_SWEVT_CHANNEL11_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL11_Pos)) /* Assigment of value for CHANNEL11 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_Msk                       _UINT32_(0x00000FFF)                                 /* (EVSYS_SWEVT) Register Mask  */

#define EVSYS_SWEVT_CHANNEL_Pos               _UINT32_(0)                                          /* (EVSYS_SWEVT Position) Channel xx Software Selection */
#define EVSYS_SWEVT_CHANNEL_Msk               (_UINT32_(0xFFF) << EVSYS_SWEVT_CHANNEL_Pos)         /* (EVSYS_SWEVT Mask) CHANNEL */
#define EVSYS_SWEVT_CHANNEL(value)            (EVSYS_SWEVT_CHANNEL_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL_Pos)) 

/* -------- EVSYS_PRICTRL : (EVSYS Offset: 0x08) (R/W 8) Priority Control -------- */
#define EVSYS_PRICTRL_RESETVALUE              _UINT8_(0x00)                                        /*  (EVSYS_PRICTRL) Priority Control  Reset Value */

#define EVSYS_PRICTRL_PRI_Pos                 _UINT8_(0)                                           /* (EVSYS_PRICTRL) Channel Priority Number Position */
#define EVSYS_PRICTRL_PRI_Msk                 (_UINT8_(0x7) << EVSYS_PRICTRL_PRI_Pos)              /* (EVSYS_PRICTRL) Channel Priority Number Mask */
#define EVSYS_PRICTRL_PRI(value)              (EVSYS_PRICTRL_PRI_Msk & (_UINT8_(value) << EVSYS_PRICTRL_PRI_Pos)) /* Assigment of value for PRI in the EVSYS_PRICTRL register */
#define EVSYS_PRICTRL_RREN_Pos                _UINT8_(7)                                           /* (EVSYS_PRICTRL) Round-Robin Scheduling Enable Position */
#define EVSYS_PRICTRL_RREN_Msk                (_UINT8_(0x1) << EVSYS_PRICTRL_RREN_Pos)             /* (EVSYS_PRICTRL) Round-Robin Scheduling Enable Mask */
#define EVSYS_PRICTRL_RREN(value)             (EVSYS_PRICTRL_RREN_Msk & (_UINT8_(value) << EVSYS_PRICTRL_RREN_Pos)) /* Assigment of value for RREN in the EVSYS_PRICTRL register */
#define EVSYS_PRICTRL_Msk                     _UINT8_(0x87)                                        /* (EVSYS_PRICTRL) Register Mask  */


/* -------- EVSYS_INTPEND : (EVSYS Offset: 0x10) (R/W 16) Channel Pending Interrupt -------- */
#define EVSYS_INTPEND_RESETVALUE              _UINT16_(0x4000)                                     /*  (EVSYS_INTPEND) Channel Pending Interrupt  Reset Value */

#define EVSYS_INTPEND_ID_Pos                  _UINT16_(0)                                          /* (EVSYS_INTPEND) Channel ID Position */
#define EVSYS_INTPEND_ID_Msk                  (_UINT16_(0x7) << EVSYS_INTPEND_ID_Pos)              /* (EVSYS_INTPEND) Channel ID Mask */
#define EVSYS_INTPEND_ID(value)               (EVSYS_INTPEND_ID_Msk & (_UINT16_(value) << EVSYS_INTPEND_ID_Pos)) /* Assigment of value for ID in the EVSYS_INTPEND register */
#define EVSYS_INTPEND_OVR_Pos                 _UINT16_(8)                                          /* (EVSYS_INTPEND) Channel Overrun Position */
#define EVSYS_INTPEND_OVR_Msk                 (_UINT16_(0x1) << EVSYS_INTPEND_OVR_Pos)             /* (EVSYS_INTPEND) Channel Overrun Mask */
#define EVSYS_INTPEND_OVR(value)              (EVSYS_INTPEND_OVR_Msk & (_UINT16_(value) << EVSYS_INTPEND_OVR_Pos)) /* Assigment of value for OVR in the EVSYS_INTPEND register */
#define EVSYS_INTPEND_EVD_Pos                 _UINT16_(9)                                          /* (EVSYS_INTPEND) Channel Event Detected Position */
#define EVSYS_INTPEND_EVD_Msk                 (_UINT16_(0x1) << EVSYS_INTPEND_EVD_Pos)             /* (EVSYS_INTPEND) Channel Event Detected Mask */
#define EVSYS_INTPEND_EVD(value)              (EVSYS_INTPEND_EVD_Msk & (_UINT16_(value) << EVSYS_INTPEND_EVD_Pos)) /* Assigment of value for EVD in the EVSYS_INTPEND register */
#define EVSYS_INTPEND_READY_Pos               _UINT16_(14)                                         /* (EVSYS_INTPEND) Ready Position */
#define EVSYS_INTPEND_READY_Msk               (_UINT16_(0x1) << EVSYS_INTPEND_READY_Pos)           /* (EVSYS_INTPEND) Ready Mask */
#define EVSYS_INTPEND_READY(value)            (EVSYS_INTPEND_READY_Msk & (_UINT16_(value) << EVSYS_INTPEND_READY_Pos)) /* Assigment of value for READY in the EVSYS_INTPEND register */
#define EVSYS_INTPEND_BUSY_Pos                _UINT16_(15)                                         /* (EVSYS_INTPEND) Busy Position */
#define EVSYS_INTPEND_BUSY_Msk                (_UINT16_(0x1) << EVSYS_INTPEND_BUSY_Pos)            /* (EVSYS_INTPEND) Busy Mask */
#define EVSYS_INTPEND_BUSY(value)             (EVSYS_INTPEND_BUSY_Msk & (_UINT16_(value) << EVSYS_INTPEND_BUSY_Pos)) /* Assigment of value for BUSY in the EVSYS_INTPEND register */
#define EVSYS_INTPEND_Msk                     _UINT16_(0xC307)                                     /* (EVSYS_INTPEND) Register Mask  */


/* -------- EVSYS_INTSTATUS : (EVSYS Offset: 0x14) ( R/ 32) Interrupt Status -------- */
#define EVSYS_INTSTATUS_RESETVALUE            _UINT32_(0x00)                                       /*  (EVSYS_INTSTATUS) Interrupt Status  Reset Value */

#define EVSYS_INTSTATUS_CHINT0_Pos            _UINT32_(0)                                          /* (EVSYS_INTSTATUS) Channel 0 Pending Interrupt Position */
#define EVSYS_INTSTATUS_CHINT0_Msk            (_UINT32_(0x1) << EVSYS_INTSTATUS_CHINT0_Pos)        /* (EVSYS_INTSTATUS) Channel 0 Pending Interrupt Mask */
#define EVSYS_INTSTATUS_CHINT0(value)         (EVSYS_INTSTATUS_CHINT0_Msk & (_UINT32_(value) << EVSYS_INTSTATUS_CHINT0_Pos)) /* Assigment of value for CHINT0 in the EVSYS_INTSTATUS register */
#define EVSYS_INTSTATUS_CHINT1_Pos            _UINT32_(1)                                          /* (EVSYS_INTSTATUS) Channel 1 Pending Interrupt Position */
#define EVSYS_INTSTATUS_CHINT1_Msk            (_UINT32_(0x1) << EVSYS_INTSTATUS_CHINT1_Pos)        /* (EVSYS_INTSTATUS) Channel 1 Pending Interrupt Mask */
#define EVSYS_INTSTATUS_CHINT1(value)         (EVSYS_INTSTATUS_CHINT1_Msk & (_UINT32_(value) << EVSYS_INTSTATUS_CHINT1_Pos)) /* Assigment of value for CHINT1 in the EVSYS_INTSTATUS register */
#define EVSYS_INTSTATUS_CHINT2_Pos            _UINT32_(2)                                          /* (EVSYS_INTSTATUS) Channel 2 Pending Interrupt Position */
#define EVSYS_INTSTATUS_CHINT2_Msk            (_UINT32_(0x1) << EVSYS_INTSTATUS_CHINT2_Pos)        /* (EVSYS_INTSTATUS) Channel 2 Pending Interrupt Mask */
#define EVSYS_INTSTATUS_CHINT2(value)         (EVSYS_INTSTATUS_CHINT2_Msk & (_UINT32_(value) << EVSYS_INTSTATUS_CHINT2_Pos)) /* Assigment of value for CHINT2 in the EVSYS_INTSTATUS register */
#define EVSYS_INTSTATUS_CHINT3_Pos            _UINT32_(3)                                          /* (EVSYS_INTSTATUS) Channel 3 Pending Interrupt Position */
#define EVSYS_INTSTATUS_CHINT3_Msk            (_UINT32_(0x1) << EVSYS_INTSTATUS_CHINT3_Pos)        /* (EVSYS_INTSTATUS) Channel 3 Pending Interrupt Mask */
#define EVSYS_INTSTATUS_CHINT3(value)         (EVSYS_INTSTATUS_CHINT3_Msk & (_UINT32_(value) << EVSYS_INTSTATUS_CHINT3_Pos)) /* Assigment of value for CHINT3 in the EVSYS_INTSTATUS register */
#define EVSYS_INTSTATUS_CHINT4_Pos            _UINT32_(4)                                          /* (EVSYS_INTSTATUS) Channel 4 Pending Interrupt Position */
#define EVSYS_INTSTATUS_CHINT4_Msk            (_UINT32_(0x1) << EVSYS_INTSTATUS_CHINT4_Pos)        /* (EVSYS_INTSTATUS) Channel 4 Pending Interrupt Mask */
#define EVSYS_INTSTATUS_CHINT4(value)         (EVSYS_INTSTATUS_CHINT4_Msk & (_UINT32_(value) << EVSYS_INTSTATUS_CHINT4_Pos)) /* Assigment of value for CHINT4 in the EVSYS_INTSTATUS register */
#define EVSYS_INTSTATUS_CHINT5_Pos            _UINT32_(5)                                          /* (EVSYS_INTSTATUS) Channel 5 Pending Interrupt Position */
#define EVSYS_INTSTATUS_CHINT5_Msk            (_UINT32_(0x1) << EVSYS_INTSTATUS_CHINT5_Pos)        /* (EVSYS_INTSTATUS) Channel 5 Pending Interrupt Mask */
#define EVSYS_INTSTATUS_CHINT5(value)         (EVSYS_INTSTATUS_CHINT5_Msk & (_UINT32_(value) << EVSYS_INTSTATUS_CHINT5_Pos)) /* Assigment of value for CHINT5 in the EVSYS_INTSTATUS register */
#define EVSYS_INTSTATUS_CHINT6_Pos            _UINT32_(6)                                          /* (EVSYS_INTSTATUS) Channel 6 Pending Interrupt Position */
#define EVSYS_INTSTATUS_CHINT6_Msk            (_UINT32_(0x1) << EVSYS_INTSTATUS_CHINT6_Pos)        /* (EVSYS_INTSTATUS) Channel 6 Pending Interrupt Mask */
#define EVSYS_INTSTATUS_CHINT6(value)         (EVSYS_INTSTATUS_CHINT6_Msk & (_UINT32_(value) << EVSYS_INTSTATUS_CHINT6_Pos)) /* Assigment of value for CHINT6 in the EVSYS_INTSTATUS register */
#define EVSYS_INTSTATUS_CHINT7_Pos            _UINT32_(7)                                          /* (EVSYS_INTSTATUS) Channel 7 Pending Interrupt Position */
#define EVSYS_INTSTATUS_CHINT7_Msk            (_UINT32_(0x1) << EVSYS_INTSTATUS_CHINT7_Pos)        /* (EVSYS_INTSTATUS) Channel 7 Pending Interrupt Mask */
#define EVSYS_INTSTATUS_CHINT7(value)         (EVSYS_INTSTATUS_CHINT7_Msk & (_UINT32_(value) << EVSYS_INTSTATUS_CHINT7_Pos)) /* Assigment of value for CHINT7 in the EVSYS_INTSTATUS register */
#define EVSYS_INTSTATUS_Msk                   _UINT32_(0x000000FF)                                 /* (EVSYS_INTSTATUS) Register Mask  */

#define EVSYS_INTSTATUS_CHINT_Pos             _UINT32_(0)                                          /* (EVSYS_INTSTATUS Position) Channel 7 Pending Interrupt */
#define EVSYS_INTSTATUS_CHINT_Msk             (_UINT32_(0xFF) << EVSYS_INTSTATUS_CHINT_Pos)        /* (EVSYS_INTSTATUS Mask) CHINT */
#define EVSYS_INTSTATUS_CHINT(value)          (EVSYS_INTSTATUS_CHINT_Msk & (_UINT32_(value) << EVSYS_INTSTATUS_CHINT_Pos)) 

/* -------- EVSYS_BUSYCH : (EVSYS Offset: 0x18) ( R/ 32) Busy Channels -------- */
#define EVSYS_BUSYCH_RESETVALUE               _UINT32_(0x00)                                       /*  (EVSYS_BUSYCH) Busy Channels  Reset Value */

#define EVSYS_BUSYCH_BUSYCH0_Pos              _UINT32_(0)                                          /* (EVSYS_BUSYCH) Busy Channel 0 Position */
#define EVSYS_BUSYCH_BUSYCH0_Msk              (_UINT32_(0x1) << EVSYS_BUSYCH_BUSYCH0_Pos)          /* (EVSYS_BUSYCH) Busy Channel 0 Mask */
#define EVSYS_BUSYCH_BUSYCH0(value)           (EVSYS_BUSYCH_BUSYCH0_Msk & (_UINT32_(value) << EVSYS_BUSYCH_BUSYCH0_Pos)) /* Assigment of value for BUSYCH0 in the EVSYS_BUSYCH register */
#define EVSYS_BUSYCH_BUSYCH1_Pos              _UINT32_(1)                                          /* (EVSYS_BUSYCH) Busy Channel 1 Position */
#define EVSYS_BUSYCH_BUSYCH1_Msk              (_UINT32_(0x1) << EVSYS_BUSYCH_BUSYCH1_Pos)          /* (EVSYS_BUSYCH) Busy Channel 1 Mask */
#define EVSYS_BUSYCH_BUSYCH1(value)           (EVSYS_BUSYCH_BUSYCH1_Msk & (_UINT32_(value) << EVSYS_BUSYCH_BUSYCH1_Pos)) /* Assigment of value for BUSYCH1 in the EVSYS_BUSYCH register */
#define EVSYS_BUSYCH_BUSYCH2_Pos              _UINT32_(2)                                          /* (EVSYS_BUSYCH) Busy Channel 2 Position */
#define EVSYS_BUSYCH_BUSYCH2_Msk              (_UINT32_(0x1) << EVSYS_BUSYCH_BUSYCH2_Pos)          /* (EVSYS_BUSYCH) Busy Channel 2 Mask */
#define EVSYS_BUSYCH_BUSYCH2(value)           (EVSYS_BUSYCH_BUSYCH2_Msk & (_UINT32_(value) << EVSYS_BUSYCH_BUSYCH2_Pos)) /* Assigment of value for BUSYCH2 in the EVSYS_BUSYCH register */
#define EVSYS_BUSYCH_BUSYCH3_Pos              _UINT32_(3)                                          /* (EVSYS_BUSYCH) Busy Channel 3 Position */
#define EVSYS_BUSYCH_BUSYCH3_Msk              (_UINT32_(0x1) << EVSYS_BUSYCH_BUSYCH3_Pos)          /* (EVSYS_BUSYCH) Busy Channel 3 Mask */
#define EVSYS_BUSYCH_BUSYCH3(value)           (EVSYS_BUSYCH_BUSYCH3_Msk & (_UINT32_(value) << EVSYS_BUSYCH_BUSYCH3_Pos)) /* Assigment of value for BUSYCH3 in the EVSYS_BUSYCH register */
#define EVSYS_BUSYCH_BUSYCH4_Pos              _UINT32_(4)                                          /* (EVSYS_BUSYCH) Busy Channel 4 Position */
#define EVSYS_BUSYCH_BUSYCH4_Msk              (_UINT32_(0x1) << EVSYS_BUSYCH_BUSYCH4_Pos)          /* (EVSYS_BUSYCH) Busy Channel 4 Mask */
#define EVSYS_BUSYCH_BUSYCH4(value)           (EVSYS_BUSYCH_BUSYCH4_Msk & (_UINT32_(value) << EVSYS_BUSYCH_BUSYCH4_Pos)) /* Assigment of value for BUSYCH4 in the EVSYS_BUSYCH register */
#define EVSYS_BUSYCH_BUSYCH5_Pos              _UINT32_(5)                                          /* (EVSYS_BUSYCH) Busy Channel 5 Position */
#define EVSYS_BUSYCH_BUSYCH5_Msk              (_UINT32_(0x1) << EVSYS_BUSYCH_BUSYCH5_Pos)          /* (EVSYS_BUSYCH) Busy Channel 5 Mask */
#define EVSYS_BUSYCH_BUSYCH5(value)           (EVSYS_BUSYCH_BUSYCH5_Msk & (_UINT32_(value) << EVSYS_BUSYCH_BUSYCH5_Pos)) /* Assigment of value for BUSYCH5 in the EVSYS_BUSYCH register */
#define EVSYS_BUSYCH_BUSYCH6_Pos              _UINT32_(6)                                          /* (EVSYS_BUSYCH) Busy Channel 6 Position */
#define EVSYS_BUSYCH_BUSYCH6_Msk              (_UINT32_(0x1) << EVSYS_BUSYCH_BUSYCH6_Pos)          /* (EVSYS_BUSYCH) Busy Channel 6 Mask */
#define EVSYS_BUSYCH_BUSYCH6(value)           (EVSYS_BUSYCH_BUSYCH6_Msk & (_UINT32_(value) << EVSYS_BUSYCH_BUSYCH6_Pos)) /* Assigment of value for BUSYCH6 in the EVSYS_BUSYCH register */
#define EVSYS_BUSYCH_BUSYCH7_Pos              _UINT32_(7)                                          /* (EVSYS_BUSYCH) Busy Channel 7 Position */
#define EVSYS_BUSYCH_BUSYCH7_Msk              (_UINT32_(0x1) << EVSYS_BUSYCH_BUSYCH7_Pos)          /* (EVSYS_BUSYCH) Busy Channel 7 Mask */
#define EVSYS_BUSYCH_BUSYCH7(value)           (EVSYS_BUSYCH_BUSYCH7_Msk & (_UINT32_(value) << EVSYS_BUSYCH_BUSYCH7_Pos)) /* Assigment of value for BUSYCH7 in the EVSYS_BUSYCH register */
#define EVSYS_BUSYCH_Msk                      _UINT32_(0x000000FF)                                 /* (EVSYS_BUSYCH) Register Mask  */

#define EVSYS_BUSYCH_BUSYCH_Pos               _UINT32_(0)                                          /* (EVSYS_BUSYCH Position) Busy Channel 7 */
#define EVSYS_BUSYCH_BUSYCH_Msk               (_UINT32_(0xFF) << EVSYS_BUSYCH_BUSYCH_Pos)          /* (EVSYS_BUSYCH Mask) BUSYCH */
#define EVSYS_BUSYCH_BUSYCH(value)            (EVSYS_BUSYCH_BUSYCH_Msk & (_UINT32_(value) << EVSYS_BUSYCH_BUSYCH_Pos)) 

/* -------- EVSYS_READYUSR : (EVSYS Offset: 0x1C) ( R/ 32) Ready Users -------- */
#define EVSYS_READYUSR_RESETVALUE             _UINT32_(0xFFFFFFFF)                                 /*  (EVSYS_READYUSR) Ready Users  Reset Value */

#define EVSYS_READYUSR_READYUSR0_Pos          _UINT32_(0)                                          /* (EVSYS_READYUSR) Ready User for Channel 0 Position */
#define EVSYS_READYUSR_READYUSR0_Msk          (_UINT32_(0x1) << EVSYS_READYUSR_READYUSR0_Pos)      /* (EVSYS_READYUSR) Ready User for Channel 0 Mask */
#define EVSYS_READYUSR_READYUSR0(value)       (EVSYS_READYUSR_READYUSR0_Msk & (_UINT32_(value) << EVSYS_READYUSR_READYUSR0_Pos)) /* Assigment of value for READYUSR0 in the EVSYS_READYUSR register */
#define EVSYS_READYUSR_READYUSR1_Pos          _UINT32_(1)                                          /* (EVSYS_READYUSR) Ready User for Channel 1 Position */
#define EVSYS_READYUSR_READYUSR1_Msk          (_UINT32_(0x1) << EVSYS_READYUSR_READYUSR1_Pos)      /* (EVSYS_READYUSR) Ready User for Channel 1 Mask */
#define EVSYS_READYUSR_READYUSR1(value)       (EVSYS_READYUSR_READYUSR1_Msk & (_UINT32_(value) << EVSYS_READYUSR_READYUSR1_Pos)) /* Assigment of value for READYUSR1 in the EVSYS_READYUSR register */
#define EVSYS_READYUSR_READYUSR2_Pos          _UINT32_(2)                                          /* (EVSYS_READYUSR) Ready User for Channel 2 Position */
#define EVSYS_READYUSR_READYUSR2_Msk          (_UINT32_(0x1) << EVSYS_READYUSR_READYUSR2_Pos)      /* (EVSYS_READYUSR) Ready User for Channel 2 Mask */
#define EVSYS_READYUSR_READYUSR2(value)       (EVSYS_READYUSR_READYUSR2_Msk & (_UINT32_(value) << EVSYS_READYUSR_READYUSR2_Pos)) /* Assigment of value for READYUSR2 in the EVSYS_READYUSR register */
#define EVSYS_READYUSR_READYUSR3_Pos          _UINT32_(3)                                          /* (EVSYS_READYUSR) Ready User for Channel 3 Position */
#define EVSYS_READYUSR_READYUSR3_Msk          (_UINT32_(0x1) << EVSYS_READYUSR_READYUSR3_Pos)      /* (EVSYS_READYUSR) Ready User for Channel 3 Mask */
#define EVSYS_READYUSR_READYUSR3(value)       (EVSYS_READYUSR_READYUSR3_Msk & (_UINT32_(value) << EVSYS_READYUSR_READYUSR3_Pos)) /* Assigment of value for READYUSR3 in the EVSYS_READYUSR register */
#define EVSYS_READYUSR_READYUSR4_Pos          _UINT32_(4)                                          /* (EVSYS_READYUSR) Ready User for Channel 4 Position */
#define EVSYS_READYUSR_READYUSR4_Msk          (_UINT32_(0x1) << EVSYS_READYUSR_READYUSR4_Pos)      /* (EVSYS_READYUSR) Ready User for Channel 4 Mask */
#define EVSYS_READYUSR_READYUSR4(value)       (EVSYS_READYUSR_READYUSR4_Msk & (_UINT32_(value) << EVSYS_READYUSR_READYUSR4_Pos)) /* Assigment of value for READYUSR4 in the EVSYS_READYUSR register */
#define EVSYS_READYUSR_READYUSR5_Pos          _UINT32_(5)                                          /* (EVSYS_READYUSR) Ready User for Channel 5 Position */
#define EVSYS_READYUSR_READYUSR5_Msk          (_UINT32_(0x1) << EVSYS_READYUSR_READYUSR5_Pos)      /* (EVSYS_READYUSR) Ready User for Channel 5 Mask */
#define EVSYS_READYUSR_READYUSR5(value)       (EVSYS_READYUSR_READYUSR5_Msk & (_UINT32_(value) << EVSYS_READYUSR_READYUSR5_Pos)) /* Assigment of value for READYUSR5 in the EVSYS_READYUSR register */
#define EVSYS_READYUSR_READYUSR6_Pos          _UINT32_(6)                                          /* (EVSYS_READYUSR) Ready User for Channel 6 Position */
#define EVSYS_READYUSR_READYUSR6_Msk          (_UINT32_(0x1) << EVSYS_READYUSR_READYUSR6_Pos)      /* (EVSYS_READYUSR) Ready User for Channel 6 Mask */
#define EVSYS_READYUSR_READYUSR6(value)       (EVSYS_READYUSR_READYUSR6_Msk & (_UINT32_(value) << EVSYS_READYUSR_READYUSR6_Pos)) /* Assigment of value for READYUSR6 in the EVSYS_READYUSR register */
#define EVSYS_READYUSR_READYUSR7_Pos          _UINT32_(7)                                          /* (EVSYS_READYUSR) Ready User for Channel 7 Position */
#define EVSYS_READYUSR_READYUSR7_Msk          (_UINT32_(0x1) << EVSYS_READYUSR_READYUSR7_Pos)      /* (EVSYS_READYUSR) Ready User for Channel 7 Mask */
#define EVSYS_READYUSR_READYUSR7(value)       (EVSYS_READYUSR_READYUSR7_Msk & (_UINT32_(value) << EVSYS_READYUSR_READYUSR7_Pos)) /* Assigment of value for READYUSR7 in the EVSYS_READYUSR register */
#define EVSYS_READYUSR_Msk                    _UINT32_(0x000000FF)                                 /* (EVSYS_READYUSR) Register Mask  */

#define EVSYS_READYUSR_READYUSR_Pos           _UINT32_(0)                                          /* (EVSYS_READYUSR Position) Ready User for Channel 7 */
#define EVSYS_READYUSR_READYUSR_Msk           (_UINT32_(0xFF) << EVSYS_READYUSR_READYUSR_Pos)      /* (EVSYS_READYUSR Mask) READYUSR */
#define EVSYS_READYUSR_READYUSR(value)        (EVSYS_READYUSR_READYUSR_Msk & (_UINT32_(value) << EVSYS_READYUSR_READYUSR_Pos)) 

/* -------- EVSYS_USER : (EVSYS Offset: 0x120) (R/W 8) User Multiplexer n -------- */
#define EVSYS_USER_RESETVALUE                 _UINT8_(0x00)                                        /*  (EVSYS_USER) User Multiplexer n  Reset Value */

#define EVSYS_USER_CHANNEL_Pos                _UINT8_(0)                                           /* (EVSYS_USER) Channel Event Selection Position */
#define EVSYS_USER_CHANNEL_Msk                (_UINT8_(0xF) << EVSYS_USER_CHANNEL_Pos)             /* (EVSYS_USER) Channel Event Selection Mask */
#define EVSYS_USER_CHANNEL(value)             (EVSYS_USER_CHANNEL_Msk & (_UINT8_(value) << EVSYS_USER_CHANNEL_Pos)) /* Assigment of value for CHANNEL in the EVSYS_USER register */
#define EVSYS_USER_Msk                        _UINT8_(0x0F)                                        /* (EVSYS_USER) Register Mask  */


/** \brief EVSYS register offsets definitions */
#define EVSYS_CHANNEL_REG_OFST         _UINT32_(0x00)      /* (EVSYS_CHANNEL) Channel n Control Offset */
#define EVSYS_CHINTENCLR_REG_OFST      _UINT32_(0x04)      /* (EVSYS_CHINTENCLR) Channel n Interrupt Enable Clear Offset */
#define EVSYS_CHINTENSET_REG_OFST      _UINT32_(0x05)      /* (EVSYS_CHINTENSET) Channel n Interrupt Enable Set Offset */
#define EVSYS_CHINTFLAG_REG_OFST       _UINT32_(0x06)      /* (EVSYS_CHINTFLAG) Channel n Interrupt Flag Status and Clear Offset */
#define EVSYS_CHSTATUS_REG_OFST        _UINT32_(0x07)      /* (EVSYS_CHSTATUS) Channel n Status Offset */
#define EVSYS_CTRLA_REG_OFST           _UINT32_(0x00)      /* (EVSYS_CTRLA) Control Offset */
#define EVSYS_SWEVT_REG_OFST           _UINT32_(0x04)      /* (EVSYS_SWEVT) Software Event Offset */
#define EVSYS_PRICTRL_REG_OFST         _UINT32_(0x08)      /* (EVSYS_PRICTRL) Priority Control Offset */
#define EVSYS_INTPEND_REG_OFST         _UINT32_(0x10)      /* (EVSYS_INTPEND) Channel Pending Interrupt Offset */
#define EVSYS_INTSTATUS_REG_OFST       _UINT32_(0x14)      /* (EVSYS_INTSTATUS) Interrupt Status Offset */
#define EVSYS_BUSYCH_REG_OFST          _UINT32_(0x18)      /* (EVSYS_BUSYCH) Busy Channels Offset */
#define EVSYS_READYUSR_REG_OFST        _UINT32_(0x1C)      /* (EVSYS_READYUSR) Ready Users Offset */
#define EVSYS_USER_REG_OFST            _UINT32_(0x120)     /* (EVSYS_USER) User Multiplexer n Offset */
#define EVSYS_USER0_REG_OFST           _UINT32_(0x120)     /* (EVSYS_USER0) User Multiplexer n Offset */
#define EVSYS_USER1_REG_OFST           _UINT32_(0x121)     /* (EVSYS_USER1) User Multiplexer n Offset */
#define EVSYS_USER2_REG_OFST           _UINT32_(0x122)     /* (EVSYS_USER2) User Multiplexer n Offset */
#define EVSYS_USER3_REG_OFST           _UINT32_(0x123)     /* (EVSYS_USER3) User Multiplexer n Offset */
#define EVSYS_USER4_REG_OFST           _UINT32_(0x124)     /* (EVSYS_USER4) User Multiplexer n Offset */
#define EVSYS_USER5_REG_OFST           _UINT32_(0x125)     /* (EVSYS_USER5) User Multiplexer n Offset */
#define EVSYS_USER6_REG_OFST           _UINT32_(0x126)     /* (EVSYS_USER6) User Multiplexer n Offset */
#define EVSYS_USER7_REG_OFST           _UINT32_(0x127)     /* (EVSYS_USER7) User Multiplexer n Offset */
#define EVSYS_USER8_REG_OFST           _UINT32_(0x128)     /* (EVSYS_USER8) User Multiplexer n Offset */
#define EVSYS_USER9_REG_OFST           _UINT32_(0x129)     /* (EVSYS_USER9) User Multiplexer n Offset */
#define EVSYS_USER10_REG_OFST          _UINT32_(0x12A)     /* (EVSYS_USER10) User Multiplexer n Offset */
#define EVSYS_USER11_REG_OFST          _UINT32_(0x12B)     /* (EVSYS_USER11) User Multiplexer n Offset */
#define EVSYS_USER12_REG_OFST          _UINT32_(0x12C)     /* (EVSYS_USER12) User Multiplexer n Offset */
#define EVSYS_USER13_REG_OFST          _UINT32_(0x12D)     /* (EVSYS_USER13) User Multiplexer n Offset */
#define EVSYS_USER14_REG_OFST          _UINT32_(0x12E)     /* (EVSYS_USER14) User Multiplexer n Offset */
#define EVSYS_USER15_REG_OFST          _UINT32_(0x12F)     /* (EVSYS_USER15) User Multiplexer n Offset */
#define EVSYS_USER16_REG_OFST          _UINT32_(0x130)     /* (EVSYS_USER16) User Multiplexer n Offset */
#define EVSYS_USER17_REG_OFST          _UINT32_(0x131)     /* (EVSYS_USER17) User Multiplexer n Offset */
#define EVSYS_USER18_REG_OFST          _UINT32_(0x132)     /* (EVSYS_USER18) User Multiplexer n Offset */
#define EVSYS_USER19_REG_OFST          _UINT32_(0x133)     /* (EVSYS_USER19) User Multiplexer n Offset */
#define EVSYS_USER20_REG_OFST          _UINT32_(0x134)     /* (EVSYS_USER20) User Multiplexer n Offset */
#define EVSYS_USER21_REG_OFST          _UINT32_(0x135)     /* (EVSYS_USER21) User Multiplexer n Offset */
#define EVSYS_USER22_REG_OFST          _UINT32_(0x136)     /* (EVSYS_USER22) User Multiplexer n Offset */
#define EVSYS_USER23_REG_OFST          _UINT32_(0x137)     /* (EVSYS_USER23) User Multiplexer n Offset */
#define EVSYS_USER24_REG_OFST          _UINT32_(0x138)     /* (EVSYS_USER24) User Multiplexer n Offset */
#define EVSYS_USER25_REG_OFST          _UINT32_(0x139)     /* (EVSYS_USER25) User Multiplexer n Offset */
#define EVSYS_USER26_REG_OFST          _UINT32_(0x13A)     /* (EVSYS_USER26) User Multiplexer n Offset */
#define EVSYS_USER27_REG_OFST          _UINT32_(0x13B)     /* (EVSYS_USER27) User Multiplexer n Offset */
#define EVSYS_USER28_REG_OFST          _UINT32_(0x13C)     /* (EVSYS_USER28) User Multiplexer n Offset */
#define EVSYS_USER29_REG_OFST          _UINT32_(0x13D)     /* (EVSYS_USER29) User Multiplexer n Offset */
#define EVSYS_USER30_REG_OFST          _UINT32_(0x13E)     /* (EVSYS_USER30) User Multiplexer n Offset */
#define EVSYS_USER31_REG_OFST          _UINT32_(0x13F)     /* (EVSYS_USER31) User Multiplexer n Offset */
#define EVSYS_USER32_REG_OFST          _UINT32_(0x140)     /* (EVSYS_USER32) User Multiplexer n Offset */
#define EVSYS_USER33_REG_OFST          _UINT32_(0x141)     /* (EVSYS_USER33) User Multiplexer n Offset */
#define EVSYS_USER34_REG_OFST          _UINT32_(0x142)     /* (EVSYS_USER34) User Multiplexer n Offset */
#define EVSYS_USER35_REG_OFST          _UINT32_(0x143)     /* (EVSYS_USER35) User Multiplexer n Offset */
#define EVSYS_USER36_REG_OFST          _UINT32_(0x144)     /* (EVSYS_USER36) User Multiplexer n Offset */
#define EVSYS_USER37_REG_OFST          _UINT32_(0x145)     /* (EVSYS_USER37) User Multiplexer n Offset */
#define EVSYS_USER38_REG_OFST          _UINT32_(0x146)     /* (EVSYS_USER38) User Multiplexer n Offset */
#define EVSYS_USER39_REG_OFST          _UINT32_(0x147)     /* (EVSYS_USER39) User Multiplexer n Offset */
#define EVSYS_USER40_REG_OFST          _UINT32_(0x148)     /* (EVSYS_USER40) User Multiplexer n Offset */
#define EVSYS_USER41_REG_OFST          _UINT32_(0x149)     /* (EVSYS_USER41) User Multiplexer n Offset */
#define EVSYS_USER42_REG_OFST          _UINT32_(0x14A)     /* (EVSYS_USER42) User Multiplexer n Offset */
#define EVSYS_USER43_REG_OFST          _UINT32_(0x14B)     /* (EVSYS_USER43) User Multiplexer n Offset */
#define EVSYS_USER44_REG_OFST          _UINT32_(0x14C)     /* (EVSYS_USER44) User Multiplexer n Offset */
#define EVSYS_USER45_REG_OFST          _UINT32_(0x14D)     /* (EVSYS_USER45) User Multiplexer n Offset */
#define EVSYS_USER46_REG_OFST          _UINT32_(0x14E)     /* (EVSYS_USER46) User Multiplexer n Offset */
#define EVSYS_USER47_REG_OFST          _UINT32_(0x14F)     /* (EVSYS_USER47) User Multiplexer n Offset */
#define EVSYS_USER48_REG_OFST          _UINT32_(0x150)     /* (EVSYS_USER48) User Multiplexer n Offset */
#define EVSYS_USER49_REG_OFST          _UINT32_(0x151)     /* (EVSYS_USER49) User Multiplexer n Offset */
#define EVSYS_USER50_REG_OFST          _UINT32_(0x152)     /* (EVSYS_USER50) User Multiplexer n Offset */
#define EVSYS_USER51_REG_OFST          _UINT32_(0x153)     /* (EVSYS_USER51) User Multiplexer n Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CHANNEL register API structure */
typedef struct
{
  __IO  uint32_t                       EVSYS_CHANNEL;      /**< Offset: 0x00 (R/W  32) Channel n Control */
  __IO  uint8_t                        EVSYS_CHINTENCLR;   /**< Offset: 0x04 (R/W  8) Channel n Interrupt Enable Clear */
  __IO  uint8_t                        EVSYS_CHINTENSET;   /**< Offset: 0x05 (R/W  8) Channel n Interrupt Enable Set */
  __IO  uint8_t                        EVSYS_CHINTFLAG;    /**< Offset: 0x06 (R/W  8) Channel n Interrupt Flag Status and Clear */
  __I   uint8_t                        EVSYS_CHSTATUS;     /**< Offset: 0x07 (R/   8) Channel n Status */
} evsys_channel_registers_t;

#define EVSYS_CHANNEL_NUMBER 12

/** \brief EVSYS register API structure */
typedef struct
{  /* Event System Interface */
  __O   uint8_t                        EVSYS_CTRLA;        /**< Offset: 0x00 ( /W  8) Control */
  __I   uint8_t                        Reserved1[0x03];
  __O   uint32_t                       EVSYS_SWEVT;        /**< Offset: 0x04 ( /W  32) Software Event */
  __IO  uint8_t                        EVSYS_PRICTRL;      /**< Offset: 0x08 (R/W  8) Priority Control */
  __I   uint8_t                        Reserved2[0x07];
  __IO  uint16_t                       EVSYS_INTPEND;      /**< Offset: 0x10 (R/W  16) Channel Pending Interrupt */
  __I   uint8_t                        Reserved3[0x02];
  __I   uint32_t                       EVSYS_INTSTATUS;    /**< Offset: 0x14 (R/   32) Interrupt Status */
  __I   uint32_t                       EVSYS_BUSYCH;       /**< Offset: 0x18 (R/   32) Busy Channels */
  __I   uint32_t                       EVSYS_READYUSR;     /**< Offset: 0x1C (R/   32) Ready Users */
        evsys_channel_registers_t      CHANNEL[EVSYS_CHANNEL_NUMBER]; /**< Offset: 0x20  */
  __I   uint8_t                        Reserved4[0xA0];
  __IO  uint8_t                        EVSYS_USER[52];     /**< Offset: 0x120 (R/W  8) User Multiplexer n */
} evsys_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMLE00_EVSYS_COMPONENT_H_ */
