/*
 * Component description for PMERRLOC
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
#ifndef _SAM9X_PMERRLOC_COMPONENT_H_
#define _SAM9X_PMERRLOC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PMERRLOC                                     */
/* ************************************************************************** */

/* -------- PMERRLOC_ELCFG : (PMERRLOC Offset: 0x00) (R/W 32) Configuration Register -------- */
#define PMERRLOC_ELCFG_SECTORSZ_Pos           _U_(0)                                               /**< (PMERRLOC_ELCFG) Sector Size Position */
#define PMERRLOC_ELCFG_SECTORSZ_Msk           (_U_(0x1) << PMERRLOC_ELCFG_SECTORSZ_Pos)            /**< (PMERRLOC_ELCFG) Sector Size Mask */
#define PMERRLOC_ELCFG_SECTORSZ(value)        (PMERRLOC_ELCFG_SECTORSZ_Msk & ((value) << PMERRLOC_ELCFG_SECTORSZ_Pos))
#define PMERRLOC_ELCFG_ERRNUM_Pos             _U_(16)                                              /**< (PMERRLOC_ELCFG) Number of Errors Position */
#define PMERRLOC_ELCFG_ERRNUM_Msk             (_U_(0x1F) << PMERRLOC_ELCFG_ERRNUM_Pos)             /**< (PMERRLOC_ELCFG) Number of Errors Mask */
#define PMERRLOC_ELCFG_ERRNUM(value)          (PMERRLOC_ELCFG_ERRNUM_Msk & ((value) << PMERRLOC_ELCFG_ERRNUM_Pos))
#define PMERRLOC_ELCFG_Msk                    _U_(0x001F0001)                                      /**< (PMERRLOC_ELCFG) Register Mask  */


/* -------- PMERRLOC_ELPRIM : (PMERRLOC Offset: 0x04) ( R/ 32) Primitive Register -------- */
#define PMERRLOC_ELPRIM_PRIMITIV_Pos          _U_(0)                                               /**< (PMERRLOC_ELPRIM) Primitive Polynomial Position */
#define PMERRLOC_ELPRIM_PRIMITIV_Msk          (_U_(0xFFFF) << PMERRLOC_ELPRIM_PRIMITIV_Pos)        /**< (PMERRLOC_ELPRIM) Primitive Polynomial Mask */
#define PMERRLOC_ELPRIM_PRIMITIV(value)       (PMERRLOC_ELPRIM_PRIMITIV_Msk & ((value) << PMERRLOC_ELPRIM_PRIMITIV_Pos))
#define PMERRLOC_ELPRIM_Msk                   _U_(0x0000FFFF)                                      /**< (PMERRLOC_ELPRIM) Register Mask  */


/* -------- PMERRLOC_ELEN : (PMERRLOC Offset: 0x08) (R/W 32) Enable Register -------- */
#define PMERRLOC_ELEN_ENINIT_Pos              _U_(0)                                               /**< (PMERRLOC_ELEN) Initial Number of Bits in the Codeword Position */
#define PMERRLOC_ELEN_ENINIT_Msk              (_U_(0x3FFF) << PMERRLOC_ELEN_ENINIT_Pos)            /**< (PMERRLOC_ELEN) Initial Number of Bits in the Codeword Mask */
#define PMERRLOC_ELEN_ENINIT(value)           (PMERRLOC_ELEN_ENINIT_Msk & ((value) << PMERRLOC_ELEN_ENINIT_Pos))
#define PMERRLOC_ELEN_Msk                     _U_(0x00003FFF)                                      /**< (PMERRLOC_ELEN) Register Mask  */


/* -------- PMERRLOC_ELDIS : (PMERRLOC Offset: 0x0C) (R/W 32) Disable Register -------- */
#define PMERRLOC_ELDIS_DIS_Pos                _U_(0)                                               /**< (PMERRLOC_ELDIS) Disable Error Location Engine Position */
#define PMERRLOC_ELDIS_DIS_Msk                (_U_(0x1) << PMERRLOC_ELDIS_DIS_Pos)                 /**< (PMERRLOC_ELDIS) Disable Error Location Engine Mask */
#define PMERRLOC_ELDIS_DIS(value)             (PMERRLOC_ELDIS_DIS_Msk & ((value) << PMERRLOC_ELDIS_DIS_Pos))
#define PMERRLOC_ELDIS_Msk                    _U_(0x00000001)                                      /**< (PMERRLOC_ELDIS) Register Mask  */


/* -------- PMERRLOC_ELSR : (PMERRLOC Offset: 0x10) (R/W 32) Status Register -------- */
#define PMERRLOC_ELSR_BUSY_Pos                _U_(0)                                               /**< (PMERRLOC_ELSR) Error Location Engine Busy Position */
#define PMERRLOC_ELSR_BUSY_Msk                (_U_(0x1) << PMERRLOC_ELSR_BUSY_Pos)                 /**< (PMERRLOC_ELSR) Error Location Engine Busy Mask */
#define PMERRLOC_ELSR_BUSY(value)             (PMERRLOC_ELSR_BUSY_Msk & ((value) << PMERRLOC_ELSR_BUSY_Pos))
#define PMERRLOC_ELSR_Msk                     _U_(0x00000001)                                      /**< (PMERRLOC_ELSR) Register Mask  */


/* -------- PMERRLOC_ELIER : (PMERRLOC Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#define PMERRLOC_ELIER_DONE_Pos               _U_(0)                                               /**< (PMERRLOC_ELIER) Computation Terminated Interrupt Enable Position */
#define PMERRLOC_ELIER_DONE_Msk               (_U_(0x1) << PMERRLOC_ELIER_DONE_Pos)                /**< (PMERRLOC_ELIER) Computation Terminated Interrupt Enable Mask */
#define PMERRLOC_ELIER_DONE(value)            (PMERRLOC_ELIER_DONE_Msk & ((value) << PMERRLOC_ELIER_DONE_Pos))
#define PMERRLOC_ELIER_Msk                    _U_(0x00000001)                                      /**< (PMERRLOC_ELIER) Register Mask  */


/* -------- PMERRLOC_ELIDR : (PMERRLOC Offset: 0x18) ( /W 32) Interrupt Disable Register -------- */
#define PMERRLOC_ELIDR_DONE_Pos               _U_(0)                                               /**< (PMERRLOC_ELIDR) Computation Terminated Interrupt Disable Position */
#define PMERRLOC_ELIDR_DONE_Msk               (_U_(0x1) << PMERRLOC_ELIDR_DONE_Pos)                /**< (PMERRLOC_ELIDR) Computation Terminated Interrupt Disable Mask */
#define PMERRLOC_ELIDR_DONE(value)            (PMERRLOC_ELIDR_DONE_Msk & ((value) << PMERRLOC_ELIDR_DONE_Pos))
#define PMERRLOC_ELIDR_Msk                    _U_(0x00000001)                                      /**< (PMERRLOC_ELIDR) Register Mask  */


/* -------- PMERRLOC_ELIMR : (PMERRLOC Offset: 0x1C) ( R/ 32) Interrupt Mask Register -------- */
#define PMERRLOC_ELIMR_DONE_Pos               _U_(0)                                               /**< (PMERRLOC_ELIMR) Computation Terminated Interrupt Mask Position */
#define PMERRLOC_ELIMR_DONE_Msk               (_U_(0x1) << PMERRLOC_ELIMR_DONE_Pos)                /**< (PMERRLOC_ELIMR) Computation Terminated Interrupt Mask Mask */
#define PMERRLOC_ELIMR_DONE(value)            (PMERRLOC_ELIMR_DONE_Msk & ((value) << PMERRLOC_ELIMR_DONE_Pos))
#define PMERRLOC_ELIMR_Msk                    _U_(0x00000001)                                      /**< (PMERRLOC_ELIMR) Register Mask  */


/* -------- PMERRLOC_ELISR : (PMERRLOC Offset: 0x20) ( R/ 32) Interrupt Status Register -------- */
#define PMERRLOC_ELISR_DONE_Pos               _U_(0)                                               /**< (PMERRLOC_ELISR) Computation Terminated Interrupt Status Position */
#define PMERRLOC_ELISR_DONE_Msk               (_U_(0x1) << PMERRLOC_ELISR_DONE_Pos)                /**< (PMERRLOC_ELISR) Computation Terminated Interrupt Status Mask */
#define PMERRLOC_ELISR_DONE(value)            (PMERRLOC_ELISR_DONE_Msk & ((value) << PMERRLOC_ELISR_DONE_Pos))
#define PMERRLOC_ELISR_ERR_CNT_Pos            _U_(8)                                               /**< (PMERRLOC_ELISR) Error Counter Value Position */
#define PMERRLOC_ELISR_ERR_CNT_Msk            (_U_(0x1F) << PMERRLOC_ELISR_ERR_CNT_Pos)            /**< (PMERRLOC_ELISR) Error Counter Value Mask */
#define PMERRLOC_ELISR_ERR_CNT(value)         (PMERRLOC_ELISR_ERR_CNT_Msk & ((value) << PMERRLOC_ELISR_ERR_CNT_Pos))
#define PMERRLOC_ELISR_Msk                    _U_(0x00001F01)                                      /**< (PMERRLOC_ELISR) Register Mask  */


/* -------- PMERRLOC_SIGMA0 : (PMERRLOC Offset: 0x28) ( R/ 32) SIGMA0 Register -------- */
#define PMERRLOC_SIGMA0_SIGMA0_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA0) Coefficient of Degree 0 in the SIGMA Polynomial Position */
#define PMERRLOC_SIGMA0_SIGMA0_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA0_SIGMA0_Pos)          /**< (PMERRLOC_SIGMA0) Coefficient of Degree 0 in the SIGMA Polynomial Mask */
#define PMERRLOC_SIGMA0_SIGMA0(value)         (PMERRLOC_SIGMA0_SIGMA0_Msk & ((value) << PMERRLOC_SIGMA0_SIGMA0_Pos))
#define PMERRLOC_SIGMA0_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA0) Register Mask  */


/* -------- PMERRLOC_SIGMA1 : (PMERRLOC Offset: 0x2C) (R/W 32) SIGMA1 Register -------- */
#define PMERRLOC_SIGMA1_SIGMA1_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA1) Coefficient of Degree 1 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA1_SIGMA1_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA1_SIGMA1_Pos)          /**< (PMERRLOC_SIGMA1) Coefficient of Degree 1 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA1_SIGMA1(value)         (PMERRLOC_SIGMA1_SIGMA1_Msk & ((value) << PMERRLOC_SIGMA1_SIGMA1_Pos))
#define PMERRLOC_SIGMA1_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA1) Register Mask  */


/* -------- PMERRLOC_SIGMA2 : (PMERRLOC Offset: 0x30) (R/W 32) SIGMA2 Register -------- */
#define PMERRLOC_SIGMA2_SIGMA2_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA2) Coefficient of Degree 2 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA2_SIGMA2_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA2_SIGMA2_Pos)          /**< (PMERRLOC_SIGMA2) Coefficient of Degree 2 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA2_SIGMA2(value)         (PMERRLOC_SIGMA2_SIGMA2_Msk & ((value) << PMERRLOC_SIGMA2_SIGMA2_Pos))
#define PMERRLOC_SIGMA2_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA2) Register Mask  */


/* -------- PMERRLOC_SIGMA3 : (PMERRLOC Offset: 0x34) (R/W 32) SIGMA3 Register -------- */
#define PMERRLOC_SIGMA3_SIGMA3_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA3) Coefficient of Degree 3 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA3_SIGMA3_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA3_SIGMA3_Pos)          /**< (PMERRLOC_SIGMA3) Coefficient of Degree 3 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA3_SIGMA3(value)         (PMERRLOC_SIGMA3_SIGMA3_Msk & ((value) << PMERRLOC_SIGMA3_SIGMA3_Pos))
#define PMERRLOC_SIGMA3_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA3) Register Mask  */


/* -------- PMERRLOC_SIGMA4 : (PMERRLOC Offset: 0x38) (R/W 32) SIGMA4 Register -------- */
#define PMERRLOC_SIGMA4_SIGMA4_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA4) Coefficient of Degree 4 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA4_SIGMA4_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA4_SIGMA4_Pos)          /**< (PMERRLOC_SIGMA4) Coefficient of Degree 4 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA4_SIGMA4(value)         (PMERRLOC_SIGMA4_SIGMA4_Msk & ((value) << PMERRLOC_SIGMA4_SIGMA4_Pos))
#define PMERRLOC_SIGMA4_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA4) Register Mask  */


/* -------- PMERRLOC_SIGMA5 : (PMERRLOC Offset: 0x3C) (R/W 32) SIGMA5 Register -------- */
#define PMERRLOC_SIGMA5_SIGMA5_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA5) Coefficient of Degree 5 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA5_SIGMA5_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA5_SIGMA5_Pos)          /**< (PMERRLOC_SIGMA5) Coefficient of Degree 5 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA5_SIGMA5(value)         (PMERRLOC_SIGMA5_SIGMA5_Msk & ((value) << PMERRLOC_SIGMA5_SIGMA5_Pos))
#define PMERRLOC_SIGMA5_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA5) Register Mask  */


/* -------- PMERRLOC_SIGMA6 : (PMERRLOC Offset: 0x40) (R/W 32) SIGMA6 Register -------- */
#define PMERRLOC_SIGMA6_SIGMA6_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA6) Coefficient of Degree 6 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA6_SIGMA6_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA6_SIGMA6_Pos)          /**< (PMERRLOC_SIGMA6) Coefficient of Degree 6 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA6_SIGMA6(value)         (PMERRLOC_SIGMA6_SIGMA6_Msk & ((value) << PMERRLOC_SIGMA6_SIGMA6_Pos))
#define PMERRLOC_SIGMA6_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA6) Register Mask  */


/* -------- PMERRLOC_SIGMA7 : (PMERRLOC Offset: 0x44) (R/W 32) SIGMA7 Register -------- */
#define PMERRLOC_SIGMA7_SIGMA7_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA7) Coefficient of Degree 7 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA7_SIGMA7_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA7_SIGMA7_Pos)          /**< (PMERRLOC_SIGMA7) Coefficient of Degree 7 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA7_SIGMA7(value)         (PMERRLOC_SIGMA7_SIGMA7_Msk & ((value) << PMERRLOC_SIGMA7_SIGMA7_Pos))
#define PMERRLOC_SIGMA7_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA7) Register Mask  */


/* -------- PMERRLOC_SIGMA8 : (PMERRLOC Offset: 0x48) (R/W 32) SIGMA8 Register -------- */
#define PMERRLOC_SIGMA8_SIGMA8_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA8) Coefficient of Degree 8 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA8_SIGMA8_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA8_SIGMA8_Pos)          /**< (PMERRLOC_SIGMA8) Coefficient of Degree 8 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA8_SIGMA8(value)         (PMERRLOC_SIGMA8_SIGMA8_Msk & ((value) << PMERRLOC_SIGMA8_SIGMA8_Pos))
#define PMERRLOC_SIGMA8_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA8) Register Mask  */


/* -------- PMERRLOC_SIGMA9 : (PMERRLOC Offset: 0x4C) (R/W 32) SIGMA9 Register -------- */
#define PMERRLOC_SIGMA9_SIGMA9_Pos            _U_(0)                                               /**< (PMERRLOC_SIGMA9) Coefficient of Degree 9 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA9_SIGMA9_Msk            (_U_(0x3FFF) << PMERRLOC_SIGMA9_SIGMA9_Pos)          /**< (PMERRLOC_SIGMA9) Coefficient of Degree 9 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA9_SIGMA9(value)         (PMERRLOC_SIGMA9_SIGMA9_Msk & ((value) << PMERRLOC_SIGMA9_SIGMA9_Pos))
#define PMERRLOC_SIGMA9_Msk                   _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA9) Register Mask  */


/* -------- PMERRLOC_SIGMA10 : (PMERRLOC Offset: 0x50) (R/W 32) SIGMA10 Register -------- */
#define PMERRLOC_SIGMA10_SIGMA10_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA10) Coefficient of Degree 10 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA10_SIGMA10_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA10_SIGMA10_Pos)        /**< (PMERRLOC_SIGMA10) Coefficient of Degree 10 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA10_SIGMA10(value)       (PMERRLOC_SIGMA10_SIGMA10_Msk & ((value) << PMERRLOC_SIGMA10_SIGMA10_Pos))
#define PMERRLOC_SIGMA10_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA10) Register Mask  */


/* -------- PMERRLOC_SIGMA11 : (PMERRLOC Offset: 0x54) (R/W 32) SIGMA11 Register -------- */
#define PMERRLOC_SIGMA11_SIGMA11_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA11) Coefficient of Degree 11 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA11_SIGMA11_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA11_SIGMA11_Pos)        /**< (PMERRLOC_SIGMA11) Coefficient of Degree 11 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA11_SIGMA11(value)       (PMERRLOC_SIGMA11_SIGMA11_Msk & ((value) << PMERRLOC_SIGMA11_SIGMA11_Pos))
#define PMERRLOC_SIGMA11_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA11) Register Mask  */


/* -------- PMERRLOC_SIGMA12 : (PMERRLOC Offset: 0x58) (R/W 32) SIGMA12 Register -------- */
#define PMERRLOC_SIGMA12_SIGMA12_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA12) Coefficient of Degree 12 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA12_SIGMA12_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA12_SIGMA12_Pos)        /**< (PMERRLOC_SIGMA12) Coefficient of Degree 12 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA12_SIGMA12(value)       (PMERRLOC_SIGMA12_SIGMA12_Msk & ((value) << PMERRLOC_SIGMA12_SIGMA12_Pos))
#define PMERRLOC_SIGMA12_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA12) Register Mask  */


/* -------- PMERRLOC_SIGMA13 : (PMERRLOC Offset: 0x5C) (R/W 32) SIGMA13 Register -------- */
#define PMERRLOC_SIGMA13_SIGMA13_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA13) Coefficient of Degree 13 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA13_SIGMA13_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA13_SIGMA13_Pos)        /**< (PMERRLOC_SIGMA13) Coefficient of Degree 13 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA13_SIGMA13(value)       (PMERRLOC_SIGMA13_SIGMA13_Msk & ((value) << PMERRLOC_SIGMA13_SIGMA13_Pos))
#define PMERRLOC_SIGMA13_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA13) Register Mask  */


/* -------- PMERRLOC_SIGMA14 : (PMERRLOC Offset: 0x60) (R/W 32) SIGMA14 Register -------- */
#define PMERRLOC_SIGMA14_SIGMA14_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA14) Coefficient of Degree 14 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA14_SIGMA14_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA14_SIGMA14_Pos)        /**< (PMERRLOC_SIGMA14) Coefficient of Degree 14 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA14_SIGMA14(value)       (PMERRLOC_SIGMA14_SIGMA14_Msk & ((value) << PMERRLOC_SIGMA14_SIGMA14_Pos))
#define PMERRLOC_SIGMA14_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA14) Register Mask  */


/* -------- PMERRLOC_SIGMA15 : (PMERRLOC Offset: 0x64) (R/W 32) SIGMA15 Register -------- */
#define PMERRLOC_SIGMA15_SIGMA15_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA15) Coefficient of Degree 15 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA15_SIGMA15_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA15_SIGMA15_Pos)        /**< (PMERRLOC_SIGMA15) Coefficient of Degree 15 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA15_SIGMA15(value)       (PMERRLOC_SIGMA15_SIGMA15_Msk & ((value) << PMERRLOC_SIGMA15_SIGMA15_Pos))
#define PMERRLOC_SIGMA15_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA15) Register Mask  */


/* -------- PMERRLOC_SIGMA16 : (PMERRLOC Offset: 0x68) (R/W 32) SIGMA16 Register -------- */
#define PMERRLOC_SIGMA16_SIGMA16_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA16) Coefficient of Degree 16 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA16_SIGMA16_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA16_SIGMA16_Pos)        /**< (PMERRLOC_SIGMA16) Coefficient of Degree 16 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA16_SIGMA16(value)       (PMERRLOC_SIGMA16_SIGMA16_Msk & ((value) << PMERRLOC_SIGMA16_SIGMA16_Pos))
#define PMERRLOC_SIGMA16_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA16) Register Mask  */


/* -------- PMERRLOC_SIGMA17 : (PMERRLOC Offset: 0x6C) (R/W 32) SIGMA17 Register -------- */
#define PMERRLOC_SIGMA17_SIGMA17_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA17) Coefficient of Degree 17 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA17_SIGMA17_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA17_SIGMA17_Pos)        /**< (PMERRLOC_SIGMA17) Coefficient of Degree 17 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA17_SIGMA17(value)       (PMERRLOC_SIGMA17_SIGMA17_Msk & ((value) << PMERRLOC_SIGMA17_SIGMA17_Pos))
#define PMERRLOC_SIGMA17_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA17) Register Mask  */


/* -------- PMERRLOC_SIGMA18 : (PMERRLOC Offset: 0x70) (R/W 32) SIGMA18 Register -------- */
#define PMERRLOC_SIGMA18_SIGMA18_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA18) Coefficient of Degree 18 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA18_SIGMA18_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA18_SIGMA18_Pos)        /**< (PMERRLOC_SIGMA18) Coefficient of Degree 18 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA18_SIGMA18(value)       (PMERRLOC_SIGMA18_SIGMA18_Msk & ((value) << PMERRLOC_SIGMA18_SIGMA18_Pos))
#define PMERRLOC_SIGMA18_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA18) Register Mask  */


/* -------- PMERRLOC_SIGMA19 : (PMERRLOC Offset: 0x74) (R/W 32) SIGMA19 Register -------- */
#define PMERRLOC_SIGMA19_SIGMA19_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA19) Coefficient of Degree 19 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA19_SIGMA19_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA19_SIGMA19_Pos)        /**< (PMERRLOC_SIGMA19) Coefficient of Degree 19 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA19_SIGMA19(value)       (PMERRLOC_SIGMA19_SIGMA19_Msk & ((value) << PMERRLOC_SIGMA19_SIGMA19_Pos))
#define PMERRLOC_SIGMA19_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA19) Register Mask  */


/* -------- PMERRLOC_SIGMA20 : (PMERRLOC Offset: 0x78) (R/W 32) SIGMA20 Register -------- */
#define PMERRLOC_SIGMA20_SIGMA20_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA20) Coefficient of Degree 20 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA20_SIGMA20_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA20_SIGMA20_Pos)        /**< (PMERRLOC_SIGMA20) Coefficient of Degree 20 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA20_SIGMA20(value)       (PMERRLOC_SIGMA20_SIGMA20_Msk & ((value) << PMERRLOC_SIGMA20_SIGMA20_Pos))
#define PMERRLOC_SIGMA20_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA20) Register Mask  */


/* -------- PMERRLOC_SIGMA21 : (PMERRLOC Offset: 0x7C) (R/W 32) SIGMA21 Register -------- */
#define PMERRLOC_SIGMA21_SIGMA21_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA21) Coefficient of Degree 21 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA21_SIGMA21_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA21_SIGMA21_Pos)        /**< (PMERRLOC_SIGMA21) Coefficient of Degree 21 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA21_SIGMA21(value)       (PMERRLOC_SIGMA21_SIGMA21_Msk & ((value) << PMERRLOC_SIGMA21_SIGMA21_Pos))
#define PMERRLOC_SIGMA21_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA21) Register Mask  */


/* -------- PMERRLOC_SIGMA22 : (PMERRLOC Offset: 0x80) (R/W 32) SIGMA22 Register -------- */
#define PMERRLOC_SIGMA22_SIGMA22_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA22) Coefficient of Degree 22 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA22_SIGMA22_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA22_SIGMA22_Pos)        /**< (PMERRLOC_SIGMA22) Coefficient of Degree 22 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA22_SIGMA22(value)       (PMERRLOC_SIGMA22_SIGMA22_Msk & ((value) << PMERRLOC_SIGMA22_SIGMA22_Pos))
#define PMERRLOC_SIGMA22_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA22) Register Mask  */


/* -------- PMERRLOC_SIGMA23 : (PMERRLOC Offset: 0x84) (R/W 32) SIGMA23 Register -------- */
#define PMERRLOC_SIGMA23_SIGMA23_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA23) Coefficient of Degree 23 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA23_SIGMA23_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA23_SIGMA23_Pos)        /**< (PMERRLOC_SIGMA23) Coefficient of Degree 23 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA23_SIGMA23(value)       (PMERRLOC_SIGMA23_SIGMA23_Msk & ((value) << PMERRLOC_SIGMA23_SIGMA23_Pos))
#define PMERRLOC_SIGMA23_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA23) Register Mask  */


/* -------- PMERRLOC_SIGMA24 : (PMERRLOC Offset: 0x88) (R/W 32) SIGMA24 Register -------- */
#define PMERRLOC_SIGMA24_SIGMA24_Pos          _U_(0)                                               /**< (PMERRLOC_SIGMA24) Coefficient of Degree 24 in the SIGMA Polynomial. Position */
#define PMERRLOC_SIGMA24_SIGMA24_Msk          (_U_(0x3FFF) << PMERRLOC_SIGMA24_SIGMA24_Pos)        /**< (PMERRLOC_SIGMA24) Coefficient of Degree 24 in the SIGMA Polynomial. Mask */
#define PMERRLOC_SIGMA24_SIGMA24(value)       (PMERRLOC_SIGMA24_SIGMA24_Msk & ((value) << PMERRLOC_SIGMA24_SIGMA24_Pos))
#define PMERRLOC_SIGMA24_Msk                  _U_(0x00003FFF)                                      /**< (PMERRLOC_SIGMA24) Register Mask  */


/* -------- PMERRLOC_EL : (PMERRLOC Offset: 0x8C) ( R/ 32) Error Location 0 Register -------- */
#define PMERRLOC_EL_ERRLOCN_Pos               _U_(0)                                               /**< (PMERRLOC_EL) Error Position within the Set {sector area, spare area}. Position */
#define PMERRLOC_EL_ERRLOCN_Msk               (_U_(0x3FFF) << PMERRLOC_EL_ERRLOCN_Pos)             /**< (PMERRLOC_EL) Error Position within the Set {sector area, spare area}. Mask */
#define PMERRLOC_EL_ERRLOCN(value)            (PMERRLOC_EL_ERRLOCN_Msk & ((value) << PMERRLOC_EL_ERRLOCN_Pos))
#define PMERRLOC_EL_Msk                       _U_(0x00003FFF)                                      /**< (PMERRLOC_EL) Register Mask  */


/** \brief PMERRLOC register offsets definitions */
#define PMERRLOC_ELCFG_REG_OFST        (0x00)              /**< (PMERRLOC_ELCFG) Configuration Register Offset */
#define PMERRLOC_ELPRIM_REG_OFST       (0x04)              /**< (PMERRLOC_ELPRIM) Primitive Register Offset */
#define PMERRLOC_ELEN_REG_OFST         (0x08)              /**< (PMERRLOC_ELEN) Enable Register Offset */
#define PMERRLOC_ELDIS_REG_OFST        (0x0C)              /**< (PMERRLOC_ELDIS) Disable Register Offset */
#define PMERRLOC_ELSR_REG_OFST         (0x10)              /**< (PMERRLOC_ELSR) Status Register Offset */
#define PMERRLOC_ELIER_REG_OFST        (0x14)              /**< (PMERRLOC_ELIER) Interrupt Enable Register Offset */
#define PMERRLOC_ELIDR_REG_OFST        (0x18)              /**< (PMERRLOC_ELIDR) Interrupt Disable Register Offset */
#define PMERRLOC_ELIMR_REG_OFST        (0x1C)              /**< (PMERRLOC_ELIMR) Interrupt Mask Register Offset */
#define PMERRLOC_ELISR_REG_OFST        (0x20)              /**< (PMERRLOC_ELISR) Interrupt Status Register Offset */
#define PMERRLOC_SIGMA0_REG_OFST       (0x28)              /**< (PMERRLOC_SIGMA0) SIGMA0 Register Offset */
#define PMERRLOC_SIGMA1_REG_OFST       (0x2C)              /**< (PMERRLOC_SIGMA1) SIGMA1 Register Offset */
#define PMERRLOC_SIGMA2_REG_OFST       (0x30)              /**< (PMERRLOC_SIGMA2) SIGMA2 Register Offset */
#define PMERRLOC_SIGMA3_REG_OFST       (0x34)              /**< (PMERRLOC_SIGMA3) SIGMA3 Register Offset */
#define PMERRLOC_SIGMA4_REG_OFST       (0x38)              /**< (PMERRLOC_SIGMA4) SIGMA4 Register Offset */
#define PMERRLOC_SIGMA5_REG_OFST       (0x3C)              /**< (PMERRLOC_SIGMA5) SIGMA5 Register Offset */
#define PMERRLOC_SIGMA6_REG_OFST       (0x40)              /**< (PMERRLOC_SIGMA6) SIGMA6 Register Offset */
#define PMERRLOC_SIGMA7_REG_OFST       (0x44)              /**< (PMERRLOC_SIGMA7) SIGMA7 Register Offset */
#define PMERRLOC_SIGMA8_REG_OFST       (0x48)              /**< (PMERRLOC_SIGMA8) SIGMA8 Register Offset */
#define PMERRLOC_SIGMA9_REG_OFST       (0x4C)              /**< (PMERRLOC_SIGMA9) SIGMA9 Register Offset */
#define PMERRLOC_SIGMA10_REG_OFST      (0x50)              /**< (PMERRLOC_SIGMA10) SIGMA10 Register Offset */
#define PMERRLOC_SIGMA11_REG_OFST      (0x54)              /**< (PMERRLOC_SIGMA11) SIGMA11 Register Offset */
#define PMERRLOC_SIGMA12_REG_OFST      (0x58)              /**< (PMERRLOC_SIGMA12) SIGMA12 Register Offset */
#define PMERRLOC_SIGMA13_REG_OFST      (0x5C)              /**< (PMERRLOC_SIGMA13) SIGMA13 Register Offset */
#define PMERRLOC_SIGMA14_REG_OFST      (0x60)              /**< (PMERRLOC_SIGMA14) SIGMA14 Register Offset */
#define PMERRLOC_SIGMA15_REG_OFST      (0x64)              /**< (PMERRLOC_SIGMA15) SIGMA15 Register Offset */
#define PMERRLOC_SIGMA16_REG_OFST      (0x68)              /**< (PMERRLOC_SIGMA16) SIGMA16 Register Offset */
#define PMERRLOC_SIGMA17_REG_OFST      (0x6C)              /**< (PMERRLOC_SIGMA17) SIGMA17 Register Offset */
#define PMERRLOC_SIGMA18_REG_OFST      (0x70)              /**< (PMERRLOC_SIGMA18) SIGMA18 Register Offset */
#define PMERRLOC_SIGMA19_REG_OFST      (0x74)              /**< (PMERRLOC_SIGMA19) SIGMA19 Register Offset */
#define PMERRLOC_SIGMA20_REG_OFST      (0x78)              /**< (PMERRLOC_SIGMA20) SIGMA20 Register Offset */
#define PMERRLOC_SIGMA21_REG_OFST      (0x7C)              /**< (PMERRLOC_SIGMA21) SIGMA21 Register Offset */
#define PMERRLOC_SIGMA22_REG_OFST      (0x80)              /**< (PMERRLOC_SIGMA22) SIGMA22 Register Offset */
#define PMERRLOC_SIGMA23_REG_OFST      (0x84)              /**< (PMERRLOC_SIGMA23) SIGMA23 Register Offset */
#define PMERRLOC_SIGMA24_REG_OFST      (0x88)              /**< (PMERRLOC_SIGMA24) SIGMA24 Register Offset */
#define PMERRLOC_EL_REG_OFST           (0x8C)              /**< (PMERRLOC_EL) Error Location 0 Register Offset */
#define PMERRLOC_EL0_REG_OFST          (0x8C)              /**< (PMERRLOC_EL0) Error Location 0 Register Offset */
#define PMERRLOC_EL1_REG_OFST          (0x90)              /**< (PMERRLOC_EL1) Error Location 0 Register Offset */
#define PMERRLOC_EL2_REG_OFST          (0x94)              /**< (PMERRLOC_EL2) Error Location 0 Register Offset */
#define PMERRLOC_EL3_REG_OFST          (0x98)              /**< (PMERRLOC_EL3) Error Location 0 Register Offset */
#define PMERRLOC_EL4_REG_OFST          (0x9C)              /**< (PMERRLOC_EL4) Error Location 0 Register Offset */
#define PMERRLOC_EL5_REG_OFST          (0xA0)              /**< (PMERRLOC_EL5) Error Location 0 Register Offset */
#define PMERRLOC_EL6_REG_OFST          (0xA4)              /**< (PMERRLOC_EL6) Error Location 0 Register Offset */
#define PMERRLOC_EL7_REG_OFST          (0xA8)              /**< (PMERRLOC_EL7) Error Location 0 Register Offset */
#define PMERRLOC_EL8_REG_OFST          (0xAC)              /**< (PMERRLOC_EL8) Error Location 0 Register Offset */
#define PMERRLOC_EL9_REG_OFST          (0xB0)              /**< (PMERRLOC_EL9) Error Location 0 Register Offset */
#define PMERRLOC_EL10_REG_OFST         (0xB4)              /**< (PMERRLOC_EL10) Error Location 0 Register Offset */
#define PMERRLOC_EL11_REG_OFST         (0xB8)              /**< (PMERRLOC_EL11) Error Location 0 Register Offset */
#define PMERRLOC_EL12_REG_OFST         (0xBC)              /**< (PMERRLOC_EL12) Error Location 0 Register Offset */
#define PMERRLOC_EL13_REG_OFST         (0xC0)              /**< (PMERRLOC_EL13) Error Location 0 Register Offset */
#define PMERRLOC_EL14_REG_OFST         (0xC4)              /**< (PMERRLOC_EL14) Error Location 0 Register Offset */
#define PMERRLOC_EL15_REG_OFST         (0xC8)              /**< (PMERRLOC_EL15) Error Location 0 Register Offset */
#define PMERRLOC_EL16_REG_OFST         (0xCC)              /**< (PMERRLOC_EL16) Error Location 0 Register Offset */
#define PMERRLOC_EL17_REG_OFST         (0xD0)              /**< (PMERRLOC_EL17) Error Location 0 Register Offset */
#define PMERRLOC_EL18_REG_OFST         (0xD4)              /**< (PMERRLOC_EL18) Error Location 0 Register Offset */
#define PMERRLOC_EL19_REG_OFST         (0xD8)              /**< (PMERRLOC_EL19) Error Location 0 Register Offset */
#define PMERRLOC_EL20_REG_OFST         (0xDC)              /**< (PMERRLOC_EL20) Error Location 0 Register Offset */
#define PMERRLOC_EL21_REG_OFST         (0xE0)              /**< (PMERRLOC_EL21) Error Location 0 Register Offset */
#define PMERRLOC_EL22_REG_OFST         (0xE4)              /**< (PMERRLOC_EL22) Error Location 0 Register Offset */
#define PMERRLOC_EL23_REG_OFST         (0xE8)              /**< (PMERRLOC_EL23) Error Location 0 Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PMERRLOC register API structure */
typedef struct
{
  __IO  uint32_t                       PMERRLOC_ELCFG;     /**< Offset: 0x00 (R/W  32) Configuration Register */
  __I   uint32_t                       PMERRLOC_ELPRIM;    /**< Offset: 0x04 (R/   32) Primitive Register */
  __IO  uint32_t                       PMERRLOC_ELEN;      /**< Offset: 0x08 (R/W  32) Enable Register */
  __IO  uint32_t                       PMERRLOC_ELDIS;     /**< Offset: 0x0C (R/W  32) Disable Register */
  __IO  uint32_t                       PMERRLOC_ELSR;      /**< Offset: 0x10 (R/W  32) Status Register */
  __O   uint32_t                       PMERRLOC_ELIER;     /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PMERRLOC_ELIDR;     /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PMERRLOC_ELIMR;     /**< Offset: 0x1C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       PMERRLOC_ELISR;     /**< Offset: 0x20 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __I   uint32_t                       PMERRLOC_SIGMA0;    /**< Offset: 0x28 (R/   32) SIGMA0 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA1;    /**< Offset: 0x2C (R/W  32) SIGMA1 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA2;    /**< Offset: 0x30 (R/W  32) SIGMA2 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA3;    /**< Offset: 0x34 (R/W  32) SIGMA3 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA4;    /**< Offset: 0x38 (R/W  32) SIGMA4 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA5;    /**< Offset: 0x3C (R/W  32) SIGMA5 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA6;    /**< Offset: 0x40 (R/W  32) SIGMA6 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA7;    /**< Offset: 0x44 (R/W  32) SIGMA7 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA8;    /**< Offset: 0x48 (R/W  32) SIGMA8 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA9;    /**< Offset: 0x4C (R/W  32) SIGMA9 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA10;   /**< Offset: 0x50 (R/W  32) SIGMA10 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA11;   /**< Offset: 0x54 (R/W  32) SIGMA11 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA12;   /**< Offset: 0x58 (R/W  32) SIGMA12 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA13;   /**< Offset: 0x5C (R/W  32) SIGMA13 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA14;   /**< Offset: 0x60 (R/W  32) SIGMA14 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA15;   /**< Offset: 0x64 (R/W  32) SIGMA15 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA16;   /**< Offset: 0x68 (R/W  32) SIGMA16 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA17;   /**< Offset: 0x6C (R/W  32) SIGMA17 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA18;   /**< Offset: 0x70 (R/W  32) SIGMA18 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA19;   /**< Offset: 0x74 (R/W  32) SIGMA19 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA20;   /**< Offset: 0x78 (R/W  32) SIGMA20 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA21;   /**< Offset: 0x7C (R/W  32) SIGMA21 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA22;   /**< Offset: 0x80 (R/W  32) SIGMA22 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA23;   /**< Offset: 0x84 (R/W  32) SIGMA23 Register */
  __IO  uint32_t                       PMERRLOC_SIGMA24;   /**< Offset: 0x88 (R/W  32) SIGMA24 Register */
  __I   uint32_t                       PMERRLOC_EL[24];    /**< Offset: 0x8C (R/   32) Error Location 0 Register */
} pmerrloc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_PMERRLOC_COMPONENT_H_ */
