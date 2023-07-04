/*
 * Component description for TRAM
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
#ifndef _PIC32CMLE00_TRAM_COMPONENT_H_
#define _PIC32CMLE00_TRAM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TRAM                                         */
/* ************************************************************************** */

/* -------- TRAM_CTRLA : (TRAM Offset: 0x00) (R/W 8) Control -------- */
#define TRAM_CTRLA_RESETVALUE                 _UINT8_(0x00)                                        /*  (TRAM_CTRLA) Control  Reset Value */

#define TRAM_CTRLA_SWRST_Pos                  _UINT8_(0)                                           /* (TRAM_CTRLA) Software Reset Position */
#define TRAM_CTRLA_SWRST_Msk                  (_UINT8_(0x1) << TRAM_CTRLA_SWRST_Pos)               /* (TRAM_CTRLA) Software Reset Mask */
#define TRAM_CTRLA_SWRST(value)               (TRAM_CTRLA_SWRST_Msk & (_UINT8_(value) << TRAM_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the TRAM_CTRLA register */
#define TRAM_CTRLA_ENABLE_Pos                 _UINT8_(1)                                           /* (TRAM_CTRLA) Enable Position */
#define TRAM_CTRLA_ENABLE_Msk                 (_UINT8_(0x1) << TRAM_CTRLA_ENABLE_Pos)              /* (TRAM_CTRLA) Enable Mask */
#define TRAM_CTRLA_ENABLE(value)              (TRAM_CTRLA_ENABLE_Msk & (_UINT8_(value) << TRAM_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the TRAM_CTRLA register */
#define TRAM_CTRLA_TAMPERS_Pos                _UINT8_(4)                                           /* (TRAM_CTRLA) Tamper Erase Position */
#define TRAM_CTRLA_TAMPERS_Msk                (_UINT8_(0x1) << TRAM_CTRLA_TAMPERS_Pos)             /* (TRAM_CTRLA) Tamper Erase Mask */
#define TRAM_CTRLA_TAMPERS(value)             (TRAM_CTRLA_TAMPERS_Msk & (_UINT8_(value) << TRAM_CTRLA_TAMPERS_Pos)) /* Assigment of value for TAMPERS in the TRAM_CTRLA register */
#define TRAM_CTRLA_DRP_Pos                    _UINT8_(6)                                           /* (TRAM_CTRLA) Data Remanence Prevention Position */
#define TRAM_CTRLA_DRP_Msk                    (_UINT8_(0x1) << TRAM_CTRLA_DRP_Pos)                 /* (TRAM_CTRLA) Data Remanence Prevention Mask */
#define TRAM_CTRLA_DRP(value)                 (TRAM_CTRLA_DRP_Msk & (_UINT8_(value) << TRAM_CTRLA_DRP_Pos)) /* Assigment of value for DRP in the TRAM_CTRLA register */
#define TRAM_CTRLA_SILACC_Pos                 _UINT8_(7)                                           /* (TRAM_CTRLA) Silent Access Position */
#define TRAM_CTRLA_SILACC_Msk                 (_UINT8_(0x1) << TRAM_CTRLA_SILACC_Pos)              /* (TRAM_CTRLA) Silent Access Mask */
#define TRAM_CTRLA_SILACC(value)              (TRAM_CTRLA_SILACC_Msk & (_UINT8_(value) << TRAM_CTRLA_SILACC_Pos)) /* Assigment of value for SILACC in the TRAM_CTRLA register */
#define TRAM_CTRLA_Msk                        _UINT8_(0xD3)                                        /* (TRAM_CTRLA) Register Mask  */


/* -------- TRAM_INTENCLR : (TRAM Offset: 0x04) (R/W 8) Interrupt Enable Clear -------- */
#define TRAM_INTENCLR_RESETVALUE              _UINT8_(0x00)                                        /*  (TRAM_INTENCLR) Interrupt Enable Clear  Reset Value */

#define TRAM_INTENCLR_ERR_Pos                 _UINT8_(0)                                           /* (TRAM_INTENCLR) TrustRAM Readout Error Interrupt Enable Position */
#define TRAM_INTENCLR_ERR_Msk                 (_UINT8_(0x1) << TRAM_INTENCLR_ERR_Pos)              /* (TRAM_INTENCLR) TrustRAM Readout Error Interrupt Enable Mask */
#define TRAM_INTENCLR_ERR(value)              (TRAM_INTENCLR_ERR_Msk & (_UINT8_(value) << TRAM_INTENCLR_ERR_Pos)) /* Assigment of value for ERR in the TRAM_INTENCLR register */
#define TRAM_INTENCLR_DRP_Pos                 _UINT8_(1)                                           /* (TRAM_INTENCLR) Data Remanence Prevention Ended Interrupt Enable Position */
#define TRAM_INTENCLR_DRP_Msk                 (_UINT8_(0x1) << TRAM_INTENCLR_DRP_Pos)              /* (TRAM_INTENCLR) Data Remanence Prevention Ended Interrupt Enable Mask */
#define TRAM_INTENCLR_DRP(value)              (TRAM_INTENCLR_DRP_Msk & (_UINT8_(value) << TRAM_INTENCLR_DRP_Pos)) /* Assigment of value for DRP in the TRAM_INTENCLR register */
#define TRAM_INTENCLR_Msk                     _UINT8_(0x03)                                        /* (TRAM_INTENCLR) Register Mask  */


/* -------- TRAM_INTENSET : (TRAM Offset: 0x05) (R/W 8) Interrupt Enable Set -------- */
#define TRAM_INTENSET_RESETVALUE              _UINT8_(0x00)                                        /*  (TRAM_INTENSET) Interrupt Enable Set  Reset Value */

#define TRAM_INTENSET_ERR_Pos                 _UINT8_(0)                                           /* (TRAM_INTENSET) TrustRAM Readout Error Interrupt Enable Position */
#define TRAM_INTENSET_ERR_Msk                 (_UINT8_(0x1) << TRAM_INTENSET_ERR_Pos)              /* (TRAM_INTENSET) TrustRAM Readout Error Interrupt Enable Mask */
#define TRAM_INTENSET_ERR(value)              (TRAM_INTENSET_ERR_Msk & (_UINT8_(value) << TRAM_INTENSET_ERR_Pos)) /* Assigment of value for ERR in the TRAM_INTENSET register */
#define TRAM_INTENSET_DRP_Pos                 _UINT8_(1)                                           /* (TRAM_INTENSET) Data Remanence Prevention Ended Interrupt Enable Position */
#define TRAM_INTENSET_DRP_Msk                 (_UINT8_(0x1) << TRAM_INTENSET_DRP_Pos)              /* (TRAM_INTENSET) Data Remanence Prevention Ended Interrupt Enable Mask */
#define TRAM_INTENSET_DRP(value)              (TRAM_INTENSET_DRP_Msk & (_UINT8_(value) << TRAM_INTENSET_DRP_Pos)) /* Assigment of value for DRP in the TRAM_INTENSET register */
#define TRAM_INTENSET_Msk                     _UINT8_(0x03)                                        /* (TRAM_INTENSET) Register Mask  */


/* -------- TRAM_INTFLAG : (TRAM Offset: 0x06) (R/W 8) Interrupt Flag Status and Clear -------- */
#define TRAM_INTFLAG_RESETVALUE               _UINT8_(0x00)                                        /*  (TRAM_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define TRAM_INTFLAG_ERR_Pos                  _UINT8_(0)                                           /* (TRAM_INTFLAG) TrustRAM Readout Error Position */
#define TRAM_INTFLAG_ERR_Msk                  (_UINT8_(0x1) << TRAM_INTFLAG_ERR_Pos)               /* (TRAM_INTFLAG) TrustRAM Readout Error Mask */
#define TRAM_INTFLAG_ERR(value)               (TRAM_INTFLAG_ERR_Msk & (_UINT8_(value) << TRAM_INTFLAG_ERR_Pos)) /* Assigment of value for ERR in the TRAM_INTFLAG register */
#define TRAM_INTFLAG_DRP_Pos                  _UINT8_(1)                                           /* (TRAM_INTFLAG) Data Remanence Prevention Ended Position */
#define TRAM_INTFLAG_DRP_Msk                  (_UINT8_(0x1) << TRAM_INTFLAG_DRP_Pos)               /* (TRAM_INTFLAG) Data Remanence Prevention Ended Mask */
#define TRAM_INTFLAG_DRP(value)               (TRAM_INTFLAG_DRP_Msk & (_UINT8_(value) << TRAM_INTFLAG_DRP_Pos)) /* Assigment of value for DRP in the TRAM_INTFLAG register */
#define TRAM_INTFLAG_Msk                      _UINT8_(0x03)                                        /* (TRAM_INTFLAG) Register Mask  */


/* -------- TRAM_STATUS : (TRAM Offset: 0x07) ( R/ 8) Status -------- */
#define TRAM_STATUS_RESETVALUE                _UINT8_(0x00)                                        /*  (TRAM_STATUS) Status  Reset Value */

#define TRAM_STATUS_RAMINV_Pos                _UINT8_(0)                                           /* (TRAM_STATUS) RAM Inversion Bit Position */
#define TRAM_STATUS_RAMINV_Msk                (_UINT8_(0x1) << TRAM_STATUS_RAMINV_Pos)             /* (TRAM_STATUS) RAM Inversion Bit Mask */
#define TRAM_STATUS_RAMINV(value)             (TRAM_STATUS_RAMINV_Msk & (_UINT8_(value) << TRAM_STATUS_RAMINV_Pos)) /* Assigment of value for RAMINV in the TRAM_STATUS register */
#define TRAM_STATUS_DRP_Pos                   _UINT8_(1)                                           /* (TRAM_STATUS) Data Remanence Prevention Ongoing Position */
#define TRAM_STATUS_DRP_Msk                   (_UINT8_(0x1) << TRAM_STATUS_DRP_Pos)                /* (TRAM_STATUS) Data Remanence Prevention Ongoing Mask */
#define TRAM_STATUS_DRP(value)                (TRAM_STATUS_DRP_Msk & (_UINT8_(value) << TRAM_STATUS_DRP_Pos)) /* Assigment of value for DRP in the TRAM_STATUS register */
#define TRAM_STATUS_Msk                       _UINT8_(0x03)                                        /* (TRAM_STATUS) Register Mask  */


/* -------- TRAM_SYNCBUSY : (TRAM Offset: 0x08) ( R/ 32) Synchronization Busy Status -------- */
#define TRAM_SYNCBUSY_RESETVALUE              _UINT32_(0x00)                                       /*  (TRAM_SYNCBUSY) Synchronization Busy Status  Reset Value */

#define TRAM_SYNCBUSY_SWRST_Pos               _UINT32_(0)                                          /* (TRAM_SYNCBUSY) Software Reset Busy Position */
#define TRAM_SYNCBUSY_SWRST_Msk               (_UINT32_(0x1) << TRAM_SYNCBUSY_SWRST_Pos)           /* (TRAM_SYNCBUSY) Software Reset Busy Mask */
#define TRAM_SYNCBUSY_SWRST(value)            (TRAM_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << TRAM_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the TRAM_SYNCBUSY register */
#define TRAM_SYNCBUSY_ENABLE_Pos              _UINT32_(1)                                          /* (TRAM_SYNCBUSY) Enable Busy Position */
#define TRAM_SYNCBUSY_ENABLE_Msk              (_UINT32_(0x1) << TRAM_SYNCBUSY_ENABLE_Pos)          /* (TRAM_SYNCBUSY) Enable Busy Mask */
#define TRAM_SYNCBUSY_ENABLE(value)           (TRAM_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << TRAM_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the TRAM_SYNCBUSY register */
#define TRAM_SYNCBUSY_Msk                     _UINT32_(0x00000003)                                 /* (TRAM_SYNCBUSY) Register Mask  */


/* -------- TRAM_DSCC : (TRAM Offset: 0x0C) ( /W 32) Data Scramble Control -------- */
#define TRAM_DSCC_RESETVALUE                  _UINT32_(0x00)                                       /*  (TRAM_DSCC) Data Scramble Control  Reset Value */

#define TRAM_DSCC_DSCKEY_Pos                  _UINT32_(0)                                          /* (TRAM_DSCC) Data Scramble Key Position */
#define TRAM_DSCC_DSCKEY_Msk                  (_UINT32_(0x3FFFFFFF) << TRAM_DSCC_DSCKEY_Pos)       /* (TRAM_DSCC) Data Scramble Key Mask */
#define TRAM_DSCC_DSCKEY(value)               (TRAM_DSCC_DSCKEY_Msk & (_UINT32_(value) << TRAM_DSCC_DSCKEY_Pos)) /* Assigment of value for DSCKEY in the TRAM_DSCC register */
#define TRAM_DSCC_DSCEN_Pos                   _UINT32_(31)                                         /* (TRAM_DSCC) Data Scramble Enable Position */
#define TRAM_DSCC_DSCEN_Msk                   (_UINT32_(0x1) << TRAM_DSCC_DSCEN_Pos)               /* (TRAM_DSCC) Data Scramble Enable Mask */
#define TRAM_DSCC_DSCEN(value)                (TRAM_DSCC_DSCEN_Msk & (_UINT32_(value) << TRAM_DSCC_DSCEN_Pos)) /* Assigment of value for DSCEN in the TRAM_DSCC register */
#define TRAM_DSCC_Msk                         _UINT32_(0xBFFFFFFF)                                 /* (TRAM_DSCC) Register Mask  */


/* -------- TRAM_RAM : (TRAM Offset: 0x200) (R/W 32) TrustRAM -------- */
#define TRAM_RAM_RESETVALUE                   _UINT32_(0x00)                                       /*  (TRAM_RAM) TrustRAM  Reset Value */

#define TRAM_RAM_DATA_Pos                     _UINT32_(0)                                          /* (TRAM_RAM) Trust RAM Data Position */
#define TRAM_RAM_DATA_Msk                     (_UINT32_(0xFFFFFFFF) << TRAM_RAM_DATA_Pos)          /* (TRAM_RAM) Trust RAM Data Mask */
#define TRAM_RAM_DATA(value)                  (TRAM_RAM_DATA_Msk & (_UINT32_(value) << TRAM_RAM_DATA_Pos)) /* Assigment of value for DATA in the TRAM_RAM register */
#define TRAM_RAM_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (TRAM_RAM) Register Mask  */

/* BYTE mode */
#define TRAM_RAM_BYTE_BYTE0_Pos               _UINT32_(0)                                          /* (TRAM_RAM) Trust RAM Data Position */
#define TRAM_RAM_BYTE_BYTE0_Msk               (_UINT32_(0xFF) << TRAM_RAM_BYTE_BYTE0_Pos)          /* (TRAM_RAM) Trust RAM Data Mask */
#define TRAM_RAM_BYTE_BYTE0(value)            (TRAM_RAM_BYTE_BYTE0_Msk & (_UINT32_(value) << TRAM_RAM_BYTE_BYTE0_Pos))
#define TRAM_RAM_BYTE_BYTE1_Pos               _UINT32_(8)                                          /* (TRAM_RAM) Trust RAM Data Position */
#define TRAM_RAM_BYTE_BYTE1_Msk               (_UINT32_(0xFF) << TRAM_RAM_BYTE_BYTE1_Pos)          /* (TRAM_RAM) Trust RAM Data Mask */
#define TRAM_RAM_BYTE_BYTE1(value)            (TRAM_RAM_BYTE_BYTE1_Msk & (_UINT32_(value) << TRAM_RAM_BYTE_BYTE1_Pos))
#define TRAM_RAM_BYTE_BYTE2_Pos               _UINT32_(16)                                         /* (TRAM_RAM) Trust RAM Data Position */
#define TRAM_RAM_BYTE_BYTE2_Msk               (_UINT32_(0xFF) << TRAM_RAM_BYTE_BYTE2_Pos)          /* (TRAM_RAM) Trust RAM Data Mask */
#define TRAM_RAM_BYTE_BYTE2(value)            (TRAM_RAM_BYTE_BYTE2_Msk & (_UINT32_(value) << TRAM_RAM_BYTE_BYTE2_Pos))
#define TRAM_RAM_BYTE_BYTE3_Pos               _UINT32_(24)                                         /* (TRAM_RAM) Trust RAM Data Position */
#define TRAM_RAM_BYTE_BYTE3_Msk               (_UINT32_(0xFF) << TRAM_RAM_BYTE_BYTE3_Pos)          /* (TRAM_RAM) Trust RAM Data Mask */
#define TRAM_RAM_BYTE_BYTE3(value)            (TRAM_RAM_BYTE_BYTE3_Msk & (_UINT32_(value) << TRAM_RAM_BYTE_BYTE3_Pos))
#define TRAM_RAM_BYTE_Msk                     _UINT32_(0xFFFFFFFF)                                  /* (TRAM_RAM_BYTE) Register Mask  */

/* HALFWORD mode */
#define TRAM_RAM_HALFWORD_HWORD0_Pos          _UINT32_(0)                                          /* (TRAM_RAM) Trust RAM Halfword Data Position */
#define TRAM_RAM_HALFWORD_HWORD0_Msk          (_UINT32_(0xFFFF) << TRAM_RAM_HALFWORD_HWORD0_Pos)   /* (TRAM_RAM) Trust RAM Halfword Data Mask */
#define TRAM_RAM_HALFWORD_HWORD0(value)       (TRAM_RAM_HALFWORD_HWORD0_Msk & (_UINT32_(value) << TRAM_RAM_HALFWORD_HWORD0_Pos))
#define TRAM_RAM_HALFWORD_HWORD1_Pos          _UINT32_(16)                                         /* (TRAM_RAM) Trust RAM Halfword Data Position */
#define TRAM_RAM_HALFWORD_HWORD1_Msk          (_UINT32_(0xFFFF) << TRAM_RAM_HALFWORD_HWORD1_Pos)   /* (TRAM_RAM) Trust RAM Halfword Data Mask */
#define TRAM_RAM_HALFWORD_HWORD1(value)       (TRAM_RAM_HALFWORD_HWORD1_Msk & (_UINT32_(value) << TRAM_RAM_HALFWORD_HWORD1_Pos))
#define TRAM_RAM_HALFWORD_Msk                 _UINT32_(0xFFFFFFFF)                                  /* (TRAM_RAM_HALFWORD) Register Mask  */


/** \brief TRAM register offsets definitions */
#define TRAM_CTRLA_REG_OFST            _UINT32_(0x00)      /* (TRAM_CTRLA) Control Offset */
#define TRAM_INTENCLR_REG_OFST         _UINT32_(0x04)      /* (TRAM_INTENCLR) Interrupt Enable Clear Offset */
#define TRAM_INTENSET_REG_OFST         _UINT32_(0x05)      /* (TRAM_INTENSET) Interrupt Enable Set Offset */
#define TRAM_INTFLAG_REG_OFST          _UINT32_(0x06)      /* (TRAM_INTFLAG) Interrupt Flag Status and Clear Offset */
#define TRAM_STATUS_REG_OFST           _UINT32_(0x07)      /* (TRAM_STATUS) Status Offset */
#define TRAM_SYNCBUSY_REG_OFST         _UINT32_(0x08)      /* (TRAM_SYNCBUSY) Synchronization Busy Status Offset */
#define TRAM_DSCC_REG_OFST             _UINT32_(0x0C)      /* (TRAM_DSCC) Data Scramble Control Offset */
#define TRAM_RAM_REG_OFST              _UINT32_(0x200)     /* (TRAM_RAM) TrustRAM Offset */
#define TRAM_RAM0_REG_OFST             _UINT32_(0x200)     /* (TRAM_RAM0) TrustRAM Offset */
#define TRAM_RAM1_REG_OFST             _UINT32_(0x204)     /* (TRAM_RAM1) TrustRAM Offset */
#define TRAM_RAM2_REG_OFST             _UINT32_(0x208)     /* (TRAM_RAM2) TrustRAM Offset */
#define TRAM_RAM3_REG_OFST             _UINT32_(0x20C)     /* (TRAM_RAM3) TrustRAM Offset */
#define TRAM_RAM4_REG_OFST             _UINT32_(0x210)     /* (TRAM_RAM4) TrustRAM Offset */
#define TRAM_RAM5_REG_OFST             _UINT32_(0x214)     /* (TRAM_RAM5) TrustRAM Offset */
#define TRAM_RAM6_REG_OFST             _UINT32_(0x218)     /* (TRAM_RAM6) TrustRAM Offset */
#define TRAM_RAM7_REG_OFST             _UINT32_(0x21C)     /* (TRAM_RAM7) TrustRAM Offset */
#define TRAM_RAM8_REG_OFST             _UINT32_(0x220)     /* (TRAM_RAM8) TrustRAM Offset */
#define TRAM_RAM9_REG_OFST             _UINT32_(0x224)     /* (TRAM_RAM9) TrustRAM Offset */
#define TRAM_RAM10_REG_OFST            _UINT32_(0x228)     /* (TRAM_RAM10) TrustRAM Offset */
#define TRAM_RAM11_REG_OFST            _UINT32_(0x22C)     /* (TRAM_RAM11) TrustRAM Offset */
#define TRAM_RAM12_REG_OFST            _UINT32_(0x230)     /* (TRAM_RAM12) TrustRAM Offset */
#define TRAM_RAM13_REG_OFST            _UINT32_(0x234)     /* (TRAM_RAM13) TrustRAM Offset */
#define TRAM_RAM14_REG_OFST            _UINT32_(0x238)     /* (TRAM_RAM14) TrustRAM Offset */
#define TRAM_RAM15_REG_OFST            _UINT32_(0x23C)     /* (TRAM_RAM15) TrustRAM Offset */
#define TRAM_RAM16_REG_OFST            _UINT32_(0x240)     /* (TRAM_RAM16) TrustRAM Offset */
#define TRAM_RAM17_REG_OFST            _UINT32_(0x244)     /* (TRAM_RAM17) TrustRAM Offset */
#define TRAM_RAM18_REG_OFST            _UINT32_(0x248)     /* (TRAM_RAM18) TrustRAM Offset */
#define TRAM_RAM19_REG_OFST            _UINT32_(0x24C)     /* (TRAM_RAM19) TrustRAM Offset */
#define TRAM_RAM20_REG_OFST            _UINT32_(0x250)     /* (TRAM_RAM20) TrustRAM Offset */
#define TRAM_RAM21_REG_OFST            _UINT32_(0x254)     /* (TRAM_RAM21) TrustRAM Offset */
#define TRAM_RAM22_REG_OFST            _UINT32_(0x258)     /* (TRAM_RAM22) TrustRAM Offset */
#define TRAM_RAM23_REG_OFST            _UINT32_(0x25C)     /* (TRAM_RAM23) TrustRAM Offset */
#define TRAM_RAM24_REG_OFST            _UINT32_(0x260)     /* (TRAM_RAM24) TrustRAM Offset */
#define TRAM_RAM25_REG_OFST            _UINT32_(0x264)     /* (TRAM_RAM25) TrustRAM Offset */
#define TRAM_RAM26_REG_OFST            _UINT32_(0x268)     /* (TRAM_RAM26) TrustRAM Offset */
#define TRAM_RAM27_REG_OFST            _UINT32_(0x26C)     /* (TRAM_RAM27) TrustRAM Offset */
#define TRAM_RAM28_REG_OFST            _UINT32_(0x270)     /* (TRAM_RAM28) TrustRAM Offset */
#define TRAM_RAM29_REG_OFST            _UINT32_(0x274)     /* (TRAM_RAM29) TrustRAM Offset */
#define TRAM_RAM30_REG_OFST            _UINT32_(0x278)     /* (TRAM_RAM30) TrustRAM Offset */
#define TRAM_RAM31_REG_OFST            _UINT32_(0x27C)     /* (TRAM_RAM31) TrustRAM Offset */
#define TRAM_RAM32_REG_OFST            _UINT32_(0x280)     /* (TRAM_RAM32) TrustRAM Offset */
#define TRAM_RAM33_REG_OFST            _UINT32_(0x284)     /* (TRAM_RAM33) TrustRAM Offset */
#define TRAM_RAM34_REG_OFST            _UINT32_(0x288)     /* (TRAM_RAM34) TrustRAM Offset */
#define TRAM_RAM35_REG_OFST            _UINT32_(0x28C)     /* (TRAM_RAM35) TrustRAM Offset */
#define TRAM_RAM36_REG_OFST            _UINT32_(0x290)     /* (TRAM_RAM36) TrustRAM Offset */
#define TRAM_RAM37_REG_OFST            _UINT32_(0x294)     /* (TRAM_RAM37) TrustRAM Offset */
#define TRAM_RAM38_REG_OFST            _UINT32_(0x298)     /* (TRAM_RAM38) TrustRAM Offset */
#define TRAM_RAM39_REG_OFST            _UINT32_(0x29C)     /* (TRAM_RAM39) TrustRAM Offset */
#define TRAM_RAM40_REG_OFST            _UINT32_(0x2A0)     /* (TRAM_RAM40) TrustRAM Offset */
#define TRAM_RAM41_REG_OFST            _UINT32_(0x2A4)     /* (TRAM_RAM41) TrustRAM Offset */
#define TRAM_RAM42_REG_OFST            _UINT32_(0x2A8)     /* (TRAM_RAM42) TrustRAM Offset */
#define TRAM_RAM43_REG_OFST            _UINT32_(0x2AC)     /* (TRAM_RAM43) TrustRAM Offset */
#define TRAM_RAM44_REG_OFST            _UINT32_(0x2B0)     /* (TRAM_RAM44) TrustRAM Offset */
#define TRAM_RAM45_REG_OFST            _UINT32_(0x2B4)     /* (TRAM_RAM45) TrustRAM Offset */
#define TRAM_RAM46_REG_OFST            _UINT32_(0x2B8)     /* (TRAM_RAM46) TrustRAM Offset */
#define TRAM_RAM47_REG_OFST            _UINT32_(0x2BC)     /* (TRAM_RAM47) TrustRAM Offset */
#define TRAM_RAM48_REG_OFST            _UINT32_(0x2C0)     /* (TRAM_RAM48) TrustRAM Offset */
#define TRAM_RAM49_REG_OFST            _UINT32_(0x2C4)     /* (TRAM_RAM49) TrustRAM Offset */
#define TRAM_RAM50_REG_OFST            _UINT32_(0x2C8)     /* (TRAM_RAM50) TrustRAM Offset */
#define TRAM_RAM51_REG_OFST            _UINT32_(0x2CC)     /* (TRAM_RAM51) TrustRAM Offset */
#define TRAM_RAM52_REG_OFST            _UINT32_(0x2D0)     /* (TRAM_RAM52) TrustRAM Offset */
#define TRAM_RAM53_REG_OFST            _UINT32_(0x2D4)     /* (TRAM_RAM53) TrustRAM Offset */
#define TRAM_RAM54_REG_OFST            _UINT32_(0x2D8)     /* (TRAM_RAM54) TrustRAM Offset */
#define TRAM_RAM55_REG_OFST            _UINT32_(0x2DC)     /* (TRAM_RAM55) TrustRAM Offset */
#define TRAM_RAM56_REG_OFST            _UINT32_(0x2E0)     /* (TRAM_RAM56) TrustRAM Offset */
#define TRAM_RAM57_REG_OFST            _UINT32_(0x2E4)     /* (TRAM_RAM57) TrustRAM Offset */
#define TRAM_RAM58_REG_OFST            _UINT32_(0x2E8)     /* (TRAM_RAM58) TrustRAM Offset */
#define TRAM_RAM59_REG_OFST            _UINT32_(0x2EC)     /* (TRAM_RAM59) TrustRAM Offset */
#define TRAM_RAM60_REG_OFST            _UINT32_(0x2F0)     /* (TRAM_RAM60) TrustRAM Offset */
#define TRAM_RAM61_REG_OFST            _UINT32_(0x2F4)     /* (TRAM_RAM61) TrustRAM Offset */
#define TRAM_RAM62_REG_OFST            _UINT32_(0x2F8)     /* (TRAM_RAM62) TrustRAM Offset */
#define TRAM_RAM63_REG_OFST            _UINT32_(0x2FC)     /* (TRAM_RAM63) TrustRAM Offset */
#define TRAM_RAM64_REG_OFST            _UINT32_(0x300)     /* (TRAM_RAM64) TrustRAM Offset */
#define TRAM_RAM65_REG_OFST            _UINT32_(0x304)     /* (TRAM_RAM65) TrustRAM Offset */
#define TRAM_RAM66_REG_OFST            _UINT32_(0x308)     /* (TRAM_RAM66) TrustRAM Offset */
#define TRAM_RAM67_REG_OFST            _UINT32_(0x30C)     /* (TRAM_RAM67) TrustRAM Offset */
#define TRAM_RAM68_REG_OFST            _UINT32_(0x310)     /* (TRAM_RAM68) TrustRAM Offset */
#define TRAM_RAM69_REG_OFST            _UINT32_(0x314)     /* (TRAM_RAM69) TrustRAM Offset */
#define TRAM_RAM70_REG_OFST            _UINT32_(0x318)     /* (TRAM_RAM70) TrustRAM Offset */
#define TRAM_RAM71_REG_OFST            _UINT32_(0x31C)     /* (TRAM_RAM71) TrustRAM Offset */
#define TRAM_RAM72_REG_OFST            _UINT32_(0x320)     /* (TRAM_RAM72) TrustRAM Offset */
#define TRAM_RAM73_REG_OFST            _UINT32_(0x324)     /* (TRAM_RAM73) TrustRAM Offset */
#define TRAM_RAM74_REG_OFST            _UINT32_(0x328)     /* (TRAM_RAM74) TrustRAM Offset */
#define TRAM_RAM75_REG_OFST            _UINT32_(0x32C)     /* (TRAM_RAM75) TrustRAM Offset */
#define TRAM_RAM76_REG_OFST            _UINT32_(0x330)     /* (TRAM_RAM76) TrustRAM Offset */
#define TRAM_RAM77_REG_OFST            _UINT32_(0x334)     /* (TRAM_RAM77) TrustRAM Offset */
#define TRAM_RAM78_REG_OFST            _UINT32_(0x338)     /* (TRAM_RAM78) TrustRAM Offset */
#define TRAM_RAM79_REG_OFST            _UINT32_(0x33C)     /* (TRAM_RAM79) TrustRAM Offset */
#define TRAM_RAM80_REG_OFST            _UINT32_(0x340)     /* (TRAM_RAM80) TrustRAM Offset */
#define TRAM_RAM81_REG_OFST            _UINT32_(0x344)     /* (TRAM_RAM81) TrustRAM Offset */
#define TRAM_RAM82_REG_OFST            _UINT32_(0x348)     /* (TRAM_RAM82) TrustRAM Offset */
#define TRAM_RAM83_REG_OFST            _UINT32_(0x34C)     /* (TRAM_RAM83) TrustRAM Offset */
#define TRAM_RAM84_REG_OFST            _UINT32_(0x350)     /* (TRAM_RAM84) TrustRAM Offset */
#define TRAM_RAM85_REG_OFST            _UINT32_(0x354)     /* (TRAM_RAM85) TrustRAM Offset */
#define TRAM_RAM86_REG_OFST            _UINT32_(0x358)     /* (TRAM_RAM86) TrustRAM Offset */
#define TRAM_RAM87_REG_OFST            _UINT32_(0x35C)     /* (TRAM_RAM87) TrustRAM Offset */
#define TRAM_RAM88_REG_OFST            _UINT32_(0x360)     /* (TRAM_RAM88) TrustRAM Offset */
#define TRAM_RAM89_REG_OFST            _UINT32_(0x364)     /* (TRAM_RAM89) TrustRAM Offset */
#define TRAM_RAM90_REG_OFST            _UINT32_(0x368)     /* (TRAM_RAM90) TrustRAM Offset */
#define TRAM_RAM91_REG_OFST            _UINT32_(0x36C)     /* (TRAM_RAM91) TrustRAM Offset */
#define TRAM_RAM92_REG_OFST            _UINT32_(0x370)     /* (TRAM_RAM92) TrustRAM Offset */
#define TRAM_RAM93_REG_OFST            _UINT32_(0x374)     /* (TRAM_RAM93) TrustRAM Offset */
#define TRAM_RAM94_REG_OFST            _UINT32_(0x378)     /* (TRAM_RAM94) TrustRAM Offset */
#define TRAM_RAM95_REG_OFST            _UINT32_(0x37C)     /* (TRAM_RAM95) TrustRAM Offset */
#define TRAM_RAM96_REG_OFST            _UINT32_(0x380)     /* (TRAM_RAM96) TrustRAM Offset */
#define TRAM_RAM97_REG_OFST            _UINT32_(0x384)     /* (TRAM_RAM97) TrustRAM Offset */
#define TRAM_RAM98_REG_OFST            _UINT32_(0x388)     /* (TRAM_RAM98) TrustRAM Offset */
#define TRAM_RAM99_REG_OFST            _UINT32_(0x38C)     /* (TRAM_RAM99) TrustRAM Offset */
#define TRAM_RAM100_REG_OFST           _UINT32_(0x390)     /* (TRAM_RAM100) TrustRAM Offset */
#define TRAM_RAM101_REG_OFST           _UINT32_(0x394)     /* (TRAM_RAM101) TrustRAM Offset */
#define TRAM_RAM102_REG_OFST           _UINT32_(0x398)     /* (TRAM_RAM102) TrustRAM Offset */
#define TRAM_RAM103_REG_OFST           _UINT32_(0x39C)     /* (TRAM_RAM103) TrustRAM Offset */
#define TRAM_RAM104_REG_OFST           _UINT32_(0x3A0)     /* (TRAM_RAM104) TrustRAM Offset */
#define TRAM_RAM105_REG_OFST           _UINT32_(0x3A4)     /* (TRAM_RAM105) TrustRAM Offset */
#define TRAM_RAM106_REG_OFST           _UINT32_(0x3A8)     /* (TRAM_RAM106) TrustRAM Offset */
#define TRAM_RAM107_REG_OFST           _UINT32_(0x3AC)     /* (TRAM_RAM107) TrustRAM Offset */
#define TRAM_RAM108_REG_OFST           _UINT32_(0x3B0)     /* (TRAM_RAM108) TrustRAM Offset */
#define TRAM_RAM109_REG_OFST           _UINT32_(0x3B4)     /* (TRAM_RAM109) TrustRAM Offset */
#define TRAM_RAM110_REG_OFST           _UINT32_(0x3B8)     /* (TRAM_RAM110) TrustRAM Offset */
#define TRAM_RAM111_REG_OFST           _UINT32_(0x3BC)     /* (TRAM_RAM111) TrustRAM Offset */
#define TRAM_RAM112_REG_OFST           _UINT32_(0x3C0)     /* (TRAM_RAM112) TrustRAM Offset */
#define TRAM_RAM113_REG_OFST           _UINT32_(0x3C4)     /* (TRAM_RAM113) TrustRAM Offset */
#define TRAM_RAM114_REG_OFST           _UINT32_(0x3C8)     /* (TRAM_RAM114) TrustRAM Offset */
#define TRAM_RAM115_REG_OFST           _UINT32_(0x3CC)     /* (TRAM_RAM115) TrustRAM Offset */
#define TRAM_RAM116_REG_OFST           _UINT32_(0x3D0)     /* (TRAM_RAM116) TrustRAM Offset */
#define TRAM_RAM117_REG_OFST           _UINT32_(0x3D4)     /* (TRAM_RAM117) TrustRAM Offset */
#define TRAM_RAM118_REG_OFST           _UINT32_(0x3D8)     /* (TRAM_RAM118) TrustRAM Offset */
#define TRAM_RAM119_REG_OFST           _UINT32_(0x3DC)     /* (TRAM_RAM119) TrustRAM Offset */
#define TRAM_RAM120_REG_OFST           _UINT32_(0x3E0)     /* (TRAM_RAM120) TrustRAM Offset */
#define TRAM_RAM121_REG_OFST           _UINT32_(0x3E4)     /* (TRAM_RAM121) TrustRAM Offset */
#define TRAM_RAM122_REG_OFST           _UINT32_(0x3E8)     /* (TRAM_RAM122) TrustRAM Offset */
#define TRAM_RAM123_REG_OFST           _UINT32_(0x3EC)     /* (TRAM_RAM123) TrustRAM Offset */
#define TRAM_RAM124_REG_OFST           _UINT32_(0x3F0)     /* (TRAM_RAM124) TrustRAM Offset */
#define TRAM_RAM125_REG_OFST           _UINT32_(0x3F4)     /* (TRAM_RAM125) TrustRAM Offset */
#define TRAM_RAM126_REG_OFST           _UINT32_(0x3F8)     /* (TRAM_RAM126) TrustRAM Offset */
#define TRAM_RAM127_REG_OFST           _UINT32_(0x3FC)     /* (TRAM_RAM127) TrustRAM Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TRAM register API structure */
typedef struct
{  /* TrustRAM */
  __IO  uint8_t                        TRAM_CTRLA;         /**< Offset: 0x00 (R/W  8) Control */
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint8_t                        TRAM_INTENCLR;      /**< Offset: 0x04 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        TRAM_INTENSET;      /**< Offset: 0x05 (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        TRAM_INTFLAG;       /**< Offset: 0x06 (R/W  8) Interrupt Flag Status and Clear */
  __I   uint8_t                        TRAM_STATUS;        /**< Offset: 0x07 (R/   8) Status */
  __I   uint32_t                       TRAM_SYNCBUSY;      /**< Offset: 0x08 (R/   32) Synchronization Busy Status */
  __O   uint32_t                       TRAM_DSCC;          /**< Offset: 0x0C ( /W  32) Data Scramble Control */
  __I   uint8_t                        Reserved2[0x1F0];
  __IO  uint32_t                       TRAM_RAM[128];      /**< Offset: 0x200 (R/W  32) TrustRAM */
} tram_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMLE00_TRAM_COMPONENT_H_ */
