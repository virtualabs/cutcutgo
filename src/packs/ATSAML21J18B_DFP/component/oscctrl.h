/**
 * \brief Component description for OSCCTRL
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
#ifndef _SAML21_OSCCTRL_COMPONENT_H_
#define _SAML21_OSCCTRL_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR OSCCTRL                                      */
/* ************************************************************************** */

/* -------- OSCCTRL_INTENCLR : (OSCCTRL Offset: 0x00) (R/W 32) Interrupt Enable Clear -------- */
#define OSCCTRL_INTENCLR_RESETVALUE           _U_(0x00)                                            /**<  (OSCCTRL_INTENCLR) Interrupt Enable Clear  Reset Value */

#define OSCCTRL_INTENCLR_XOSCRDY_Pos          _U_(0)                                               /**< (OSCCTRL_INTENCLR) XOSC Ready Interrupt Enable Position */
#define OSCCTRL_INTENCLR_XOSCRDY_Msk          (_U_(0x1) << OSCCTRL_INTENCLR_XOSCRDY_Pos)           /**< (OSCCTRL_INTENCLR) XOSC Ready Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_XOSCRDY(value)       (OSCCTRL_INTENCLR_XOSCRDY_Msk & ((value) << OSCCTRL_INTENCLR_XOSCRDY_Pos))
#define OSCCTRL_INTENCLR_OSC16MRDY_Pos        _U_(4)                                               /**< (OSCCTRL_INTENCLR) OSC16M Ready Interrupt Enable Position */
#define OSCCTRL_INTENCLR_OSC16MRDY_Msk        (_U_(0x1) << OSCCTRL_INTENCLR_OSC16MRDY_Pos)         /**< (OSCCTRL_INTENCLR) OSC16M Ready Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_OSC16MRDY(value)     (OSCCTRL_INTENCLR_OSC16MRDY_Msk & ((value) << OSCCTRL_INTENCLR_OSC16MRDY_Pos))
#define OSCCTRL_INTENCLR_DFLLRDY_Pos          _U_(8)                                               /**< (OSCCTRL_INTENCLR) DFLL Ready Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLRDY_Msk          (_U_(0x1) << OSCCTRL_INTENCLR_DFLLRDY_Pos)           /**< (OSCCTRL_INTENCLR) DFLL Ready Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLRDY(value)       (OSCCTRL_INTENCLR_DFLLRDY_Msk & ((value) << OSCCTRL_INTENCLR_DFLLRDY_Pos))
#define OSCCTRL_INTENCLR_DFLLOOB_Pos          _U_(9)                                               /**< (OSCCTRL_INTENCLR) DFLL Out Of Bounds Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLOOB_Msk          (_U_(0x1) << OSCCTRL_INTENCLR_DFLLOOB_Pos)           /**< (OSCCTRL_INTENCLR) DFLL Out Of Bounds Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLOOB(value)       (OSCCTRL_INTENCLR_DFLLOOB_Msk & ((value) << OSCCTRL_INTENCLR_DFLLOOB_Pos))
#define OSCCTRL_INTENCLR_DFLLLCKF_Pos         _U_(10)                                              /**< (OSCCTRL_INTENCLR) DFLL Lock Fine Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLLCKF_Msk         (_U_(0x1) << OSCCTRL_INTENCLR_DFLLLCKF_Pos)          /**< (OSCCTRL_INTENCLR) DFLL Lock Fine Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLLCKF(value)      (OSCCTRL_INTENCLR_DFLLLCKF_Msk & ((value) << OSCCTRL_INTENCLR_DFLLLCKF_Pos))
#define OSCCTRL_INTENCLR_DFLLLCKC_Pos         _U_(11)                                              /**< (OSCCTRL_INTENCLR) DFLL Lock Coarse Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLLCKC_Msk         (_U_(0x1) << OSCCTRL_INTENCLR_DFLLLCKC_Pos)          /**< (OSCCTRL_INTENCLR) DFLL Lock Coarse Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLLCKC(value)      (OSCCTRL_INTENCLR_DFLLLCKC_Msk & ((value) << OSCCTRL_INTENCLR_DFLLLCKC_Pos))
#define OSCCTRL_INTENCLR_DFLLRCS_Pos          _U_(12)                                              /**< (OSCCTRL_INTENCLR) DFLL Reference Clock Stopped Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DFLLRCS_Msk          (_U_(0x1) << OSCCTRL_INTENCLR_DFLLRCS_Pos)           /**< (OSCCTRL_INTENCLR) DFLL Reference Clock Stopped Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DFLLRCS(value)       (OSCCTRL_INTENCLR_DFLLRCS_Msk & ((value) << OSCCTRL_INTENCLR_DFLLRCS_Pos))
#define OSCCTRL_INTENCLR_DPLLLCKR_Pos         _U_(16)                                              /**< (OSCCTRL_INTENCLR) DPLL Lock Rise Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DPLLLCKR_Msk         (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLCKR_Pos)          /**< (OSCCTRL_INTENCLR) DPLL Lock Rise Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DPLLLCKR(value)      (OSCCTRL_INTENCLR_DPLLLCKR_Msk & ((value) << OSCCTRL_INTENCLR_DPLLLCKR_Pos))
#define OSCCTRL_INTENCLR_DPLLLCKF_Pos         _U_(17)                                              /**< (OSCCTRL_INTENCLR) DPLL Lock Fall Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DPLLLCKF_Msk         (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLCKF_Pos)          /**< (OSCCTRL_INTENCLR) DPLL Lock Fall Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DPLLLCKF(value)      (OSCCTRL_INTENCLR_DPLLLCKF_Msk & ((value) << OSCCTRL_INTENCLR_DPLLLCKF_Pos))
#define OSCCTRL_INTENCLR_DPLLLTO_Pos          _U_(18)                                              /**< (OSCCTRL_INTENCLR) DPLL Time Out Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DPLLLTO_Msk          (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLTO_Pos)           /**< (OSCCTRL_INTENCLR) DPLL Time Out Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DPLLLTO(value)       (OSCCTRL_INTENCLR_DPLLLTO_Msk & ((value) << OSCCTRL_INTENCLR_DPLLLTO_Pos))
#define OSCCTRL_INTENCLR_DPLLLDRTO_Pos        _U_(19)                                              /**< (OSCCTRL_INTENCLR) DPLL Ratio Ready Interrupt Enable Position */
#define OSCCTRL_INTENCLR_DPLLLDRTO_Msk        (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLDRTO_Pos)         /**< (OSCCTRL_INTENCLR) DPLL Ratio Ready Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_DPLLLDRTO(value)     (OSCCTRL_INTENCLR_DPLLLDRTO_Msk & ((value) << OSCCTRL_INTENCLR_DPLLLDRTO_Pos))
#define OSCCTRL_INTENCLR_Msk                  _U_(0x000F1F11)                                      /**< (OSCCTRL_INTENCLR) Register Mask  */


/* -------- OSCCTRL_INTENSET : (OSCCTRL Offset: 0x04) (R/W 32) Interrupt Enable Set -------- */
#define OSCCTRL_INTENSET_RESETVALUE           _U_(0x00)                                            /**<  (OSCCTRL_INTENSET) Interrupt Enable Set  Reset Value */

#define OSCCTRL_INTENSET_XOSCRDY_Pos          _U_(0)                                               /**< (OSCCTRL_INTENSET) XOSC Ready Interrupt Enable Position */
#define OSCCTRL_INTENSET_XOSCRDY_Msk          (_U_(0x1) << OSCCTRL_INTENSET_XOSCRDY_Pos)           /**< (OSCCTRL_INTENSET) XOSC Ready Interrupt Enable Mask */
#define OSCCTRL_INTENSET_XOSCRDY(value)       (OSCCTRL_INTENSET_XOSCRDY_Msk & ((value) << OSCCTRL_INTENSET_XOSCRDY_Pos))
#define OSCCTRL_INTENSET_OSC16MRDY_Pos        _U_(4)                                               /**< (OSCCTRL_INTENSET) OSC16M Ready Interrupt Enable Position */
#define OSCCTRL_INTENSET_OSC16MRDY_Msk        (_U_(0x1) << OSCCTRL_INTENSET_OSC16MRDY_Pos)         /**< (OSCCTRL_INTENSET) OSC16M Ready Interrupt Enable Mask */
#define OSCCTRL_INTENSET_OSC16MRDY(value)     (OSCCTRL_INTENSET_OSC16MRDY_Msk & ((value) << OSCCTRL_INTENSET_OSC16MRDY_Pos))
#define OSCCTRL_INTENSET_DFLLRDY_Pos          _U_(8)                                               /**< (OSCCTRL_INTENSET) DFLL Ready Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLRDY_Msk          (_U_(0x1) << OSCCTRL_INTENSET_DFLLRDY_Pos)           /**< (OSCCTRL_INTENSET) DFLL Ready Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLRDY(value)       (OSCCTRL_INTENSET_DFLLRDY_Msk & ((value) << OSCCTRL_INTENSET_DFLLRDY_Pos))
#define OSCCTRL_INTENSET_DFLLOOB_Pos          _U_(9)                                               /**< (OSCCTRL_INTENSET) DFLL Out Of Bounds Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLOOB_Msk          (_U_(0x1) << OSCCTRL_INTENSET_DFLLOOB_Pos)           /**< (OSCCTRL_INTENSET) DFLL Out Of Bounds Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLOOB(value)       (OSCCTRL_INTENSET_DFLLOOB_Msk & ((value) << OSCCTRL_INTENSET_DFLLOOB_Pos))
#define OSCCTRL_INTENSET_DFLLLCKF_Pos         _U_(10)                                              /**< (OSCCTRL_INTENSET) DFLL Lock Fine Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLLCKF_Msk         (_U_(0x1) << OSCCTRL_INTENSET_DFLLLCKF_Pos)          /**< (OSCCTRL_INTENSET) DFLL Lock Fine Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLLCKF(value)      (OSCCTRL_INTENSET_DFLLLCKF_Msk & ((value) << OSCCTRL_INTENSET_DFLLLCKF_Pos))
#define OSCCTRL_INTENSET_DFLLLCKC_Pos         _U_(11)                                              /**< (OSCCTRL_INTENSET) DFLL Lock Coarse Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLLCKC_Msk         (_U_(0x1) << OSCCTRL_INTENSET_DFLLLCKC_Pos)          /**< (OSCCTRL_INTENSET) DFLL Lock Coarse Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLLCKC(value)      (OSCCTRL_INTENSET_DFLLLCKC_Msk & ((value) << OSCCTRL_INTENSET_DFLLLCKC_Pos))
#define OSCCTRL_INTENSET_DFLLRCS_Pos          _U_(12)                                              /**< (OSCCTRL_INTENSET) DFLL Reference Clock Stopped Interrupt Enable Position */
#define OSCCTRL_INTENSET_DFLLRCS_Msk          (_U_(0x1) << OSCCTRL_INTENSET_DFLLRCS_Pos)           /**< (OSCCTRL_INTENSET) DFLL Reference Clock Stopped Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DFLLRCS(value)       (OSCCTRL_INTENSET_DFLLRCS_Msk & ((value) << OSCCTRL_INTENSET_DFLLRCS_Pos))
#define OSCCTRL_INTENSET_DPLLLCKR_Pos         _U_(16)                                              /**< (OSCCTRL_INTENSET) DPLL Lock Rise Interrupt Enable Position */
#define OSCCTRL_INTENSET_DPLLLCKR_Msk         (_U_(0x1) << OSCCTRL_INTENSET_DPLLLCKR_Pos)          /**< (OSCCTRL_INTENSET) DPLL Lock Rise Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DPLLLCKR(value)      (OSCCTRL_INTENSET_DPLLLCKR_Msk & ((value) << OSCCTRL_INTENSET_DPLLLCKR_Pos))
#define OSCCTRL_INTENSET_DPLLLCKF_Pos         _U_(17)                                              /**< (OSCCTRL_INTENSET) DPLL Lock Fall Interrupt Enable Position */
#define OSCCTRL_INTENSET_DPLLLCKF_Msk         (_U_(0x1) << OSCCTRL_INTENSET_DPLLLCKF_Pos)          /**< (OSCCTRL_INTENSET) DPLL Lock Fall Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DPLLLCKF(value)      (OSCCTRL_INTENSET_DPLLLCKF_Msk & ((value) << OSCCTRL_INTENSET_DPLLLCKF_Pos))
#define OSCCTRL_INTENSET_DPLLLTO_Pos          _U_(18)                                              /**< (OSCCTRL_INTENSET) DPLL Time Out Interrupt Enable Position */
#define OSCCTRL_INTENSET_DPLLLTO_Msk          (_U_(0x1) << OSCCTRL_INTENSET_DPLLLTO_Pos)           /**< (OSCCTRL_INTENSET) DPLL Time Out Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DPLLLTO(value)       (OSCCTRL_INTENSET_DPLLLTO_Msk & ((value) << OSCCTRL_INTENSET_DPLLLTO_Pos))
#define OSCCTRL_INTENSET_DPLLLDRTO_Pos        _U_(19)                                              /**< (OSCCTRL_INTENSET) DPLL Ratio Ready Interrupt Enable Position */
#define OSCCTRL_INTENSET_DPLLLDRTO_Msk        (_U_(0x1) << OSCCTRL_INTENSET_DPLLLDRTO_Pos)         /**< (OSCCTRL_INTENSET) DPLL Ratio Ready Interrupt Enable Mask */
#define OSCCTRL_INTENSET_DPLLLDRTO(value)     (OSCCTRL_INTENSET_DPLLLDRTO_Msk & ((value) << OSCCTRL_INTENSET_DPLLLDRTO_Pos))
#define OSCCTRL_INTENSET_Msk                  _U_(0x000F1F11)                                      /**< (OSCCTRL_INTENSET) Register Mask  */


/* -------- OSCCTRL_INTFLAG : (OSCCTRL Offset: 0x08) (R/W 32) Interrupt Flag Status and Clear -------- */
#define OSCCTRL_INTFLAG_RESETVALUE            _U_(0x00)                                            /**<  (OSCCTRL_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define OSCCTRL_INTFLAG_XOSCRDY_Pos           _U_(0)                                               /**< (OSCCTRL_INTFLAG) XOSC Ready Position */
#define OSCCTRL_INTFLAG_XOSCRDY_Msk           (_U_(0x1) << OSCCTRL_INTFLAG_XOSCRDY_Pos)            /**< (OSCCTRL_INTFLAG) XOSC Ready Mask */
#define OSCCTRL_INTFLAG_XOSCRDY(value)        (OSCCTRL_INTFLAG_XOSCRDY_Msk & ((value) << OSCCTRL_INTFLAG_XOSCRDY_Pos))
#define OSCCTRL_INTFLAG_OSC16MRDY_Pos         _U_(4)                                               /**< (OSCCTRL_INTFLAG) OSC16M Ready Position */
#define OSCCTRL_INTFLAG_OSC16MRDY_Msk         (_U_(0x1) << OSCCTRL_INTFLAG_OSC16MRDY_Pos)          /**< (OSCCTRL_INTFLAG) OSC16M Ready Mask */
#define OSCCTRL_INTFLAG_OSC16MRDY(value)      (OSCCTRL_INTFLAG_OSC16MRDY_Msk & ((value) << OSCCTRL_INTFLAG_OSC16MRDY_Pos))
#define OSCCTRL_INTFLAG_DFLLRDY_Pos           _U_(8)                                               /**< (OSCCTRL_INTFLAG) DFLL Ready Position */
#define OSCCTRL_INTFLAG_DFLLRDY_Msk           (_U_(0x1) << OSCCTRL_INTFLAG_DFLLRDY_Pos)            /**< (OSCCTRL_INTFLAG) DFLL Ready Mask */
#define OSCCTRL_INTFLAG_DFLLRDY(value)        (OSCCTRL_INTFLAG_DFLLRDY_Msk & ((value) << OSCCTRL_INTFLAG_DFLLRDY_Pos))
#define OSCCTRL_INTFLAG_DFLLOOB_Pos           _U_(9)                                               /**< (OSCCTRL_INTFLAG) DFLL Out Of Bounds Position */
#define OSCCTRL_INTFLAG_DFLLOOB_Msk           (_U_(0x1) << OSCCTRL_INTFLAG_DFLLOOB_Pos)            /**< (OSCCTRL_INTFLAG) DFLL Out Of Bounds Mask */
#define OSCCTRL_INTFLAG_DFLLOOB(value)        (OSCCTRL_INTFLAG_DFLLOOB_Msk & ((value) << OSCCTRL_INTFLAG_DFLLOOB_Pos))
#define OSCCTRL_INTFLAG_DFLLLCKF_Pos          _U_(10)                                              /**< (OSCCTRL_INTFLAG) DFLL Lock Fine Position */
#define OSCCTRL_INTFLAG_DFLLLCKF_Msk          (_U_(0x1) << OSCCTRL_INTFLAG_DFLLLCKF_Pos)           /**< (OSCCTRL_INTFLAG) DFLL Lock Fine Mask */
#define OSCCTRL_INTFLAG_DFLLLCKF(value)       (OSCCTRL_INTFLAG_DFLLLCKF_Msk & ((value) << OSCCTRL_INTFLAG_DFLLLCKF_Pos))
#define OSCCTRL_INTFLAG_DFLLLCKC_Pos          _U_(11)                                              /**< (OSCCTRL_INTFLAG) DFLL Lock Coarse Position */
#define OSCCTRL_INTFLAG_DFLLLCKC_Msk          (_U_(0x1) << OSCCTRL_INTFLAG_DFLLLCKC_Pos)           /**< (OSCCTRL_INTFLAG) DFLL Lock Coarse Mask */
#define OSCCTRL_INTFLAG_DFLLLCKC(value)       (OSCCTRL_INTFLAG_DFLLLCKC_Msk & ((value) << OSCCTRL_INTFLAG_DFLLLCKC_Pos))
#define OSCCTRL_INTFLAG_DFLLRCS_Pos           _U_(12)                                              /**< (OSCCTRL_INTFLAG) DFLL Reference Clock Stopped Position */
#define OSCCTRL_INTFLAG_DFLLRCS_Msk           (_U_(0x1) << OSCCTRL_INTFLAG_DFLLRCS_Pos)            /**< (OSCCTRL_INTFLAG) DFLL Reference Clock Stopped Mask */
#define OSCCTRL_INTFLAG_DFLLRCS(value)        (OSCCTRL_INTFLAG_DFLLRCS_Msk & ((value) << OSCCTRL_INTFLAG_DFLLRCS_Pos))
#define OSCCTRL_INTFLAG_DPLLLCKR_Pos          _U_(16)                                              /**< (OSCCTRL_INTFLAG) DPLL Lock Rise Position */
#define OSCCTRL_INTFLAG_DPLLLCKR_Msk          (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLCKR_Pos)           /**< (OSCCTRL_INTFLAG) DPLL Lock Rise Mask */
#define OSCCTRL_INTFLAG_DPLLLCKR(value)       (OSCCTRL_INTFLAG_DPLLLCKR_Msk & ((value) << OSCCTRL_INTFLAG_DPLLLCKR_Pos))
#define OSCCTRL_INTFLAG_DPLLLCKF_Pos          _U_(17)                                              /**< (OSCCTRL_INTFLAG) DPLL Lock Fall Position */
#define OSCCTRL_INTFLAG_DPLLLCKF_Msk          (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLCKF_Pos)           /**< (OSCCTRL_INTFLAG) DPLL Lock Fall Mask */
#define OSCCTRL_INTFLAG_DPLLLCKF(value)       (OSCCTRL_INTFLAG_DPLLLCKF_Msk & ((value) << OSCCTRL_INTFLAG_DPLLLCKF_Pos))
#define OSCCTRL_INTFLAG_DPLLLTO_Pos           _U_(18)                                              /**< (OSCCTRL_INTFLAG) DPLL Timeout Position */
#define OSCCTRL_INTFLAG_DPLLLTO_Msk           (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLTO_Pos)            /**< (OSCCTRL_INTFLAG) DPLL Timeout Mask */
#define OSCCTRL_INTFLAG_DPLLLTO(value)        (OSCCTRL_INTFLAG_DPLLLTO_Msk & ((value) << OSCCTRL_INTFLAG_DPLLLTO_Pos))
#define OSCCTRL_INTFLAG_DPLLLDRTO_Pos         _U_(19)                                              /**< (OSCCTRL_INTFLAG) DPLL Ratio Ready Position */
#define OSCCTRL_INTFLAG_DPLLLDRTO_Msk         (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLDRTO_Pos)          /**< (OSCCTRL_INTFLAG) DPLL Ratio Ready Mask */
#define OSCCTRL_INTFLAG_DPLLLDRTO(value)      (OSCCTRL_INTFLAG_DPLLLDRTO_Msk & ((value) << OSCCTRL_INTFLAG_DPLLLDRTO_Pos))
#define OSCCTRL_INTFLAG_Msk                   _U_(0x000F1F11)                                      /**< (OSCCTRL_INTFLAG) Register Mask  */


/* -------- OSCCTRL_STATUS : (OSCCTRL Offset: 0x0C) ( R/ 32) Power and Clocks Status -------- */
#define OSCCTRL_STATUS_RESETVALUE             _U_(0x00)                                            /**<  (OSCCTRL_STATUS) Power and Clocks Status  Reset Value */

#define OSCCTRL_STATUS_XOSCRDY_Pos            _U_(0)                                               /**< (OSCCTRL_STATUS) XOSC Ready Position */
#define OSCCTRL_STATUS_XOSCRDY_Msk            (_U_(0x1) << OSCCTRL_STATUS_XOSCRDY_Pos)             /**< (OSCCTRL_STATUS) XOSC Ready Mask */
#define OSCCTRL_STATUS_XOSCRDY(value)         (OSCCTRL_STATUS_XOSCRDY_Msk & ((value) << OSCCTRL_STATUS_XOSCRDY_Pos))
#define OSCCTRL_STATUS_OSC16MRDY_Pos          _U_(4)                                               /**< (OSCCTRL_STATUS) OSC16M Ready Position */
#define OSCCTRL_STATUS_OSC16MRDY_Msk          (_U_(0x1) << OSCCTRL_STATUS_OSC16MRDY_Pos)           /**< (OSCCTRL_STATUS) OSC16M Ready Mask */
#define OSCCTRL_STATUS_OSC16MRDY(value)       (OSCCTRL_STATUS_OSC16MRDY_Msk & ((value) << OSCCTRL_STATUS_OSC16MRDY_Pos))
#define OSCCTRL_STATUS_DFLLRDY_Pos            _U_(8)                                               /**< (OSCCTRL_STATUS) DFLL Ready Position */
#define OSCCTRL_STATUS_DFLLRDY_Msk            (_U_(0x1) << OSCCTRL_STATUS_DFLLRDY_Pos)             /**< (OSCCTRL_STATUS) DFLL Ready Mask */
#define OSCCTRL_STATUS_DFLLRDY(value)         (OSCCTRL_STATUS_DFLLRDY_Msk & ((value) << OSCCTRL_STATUS_DFLLRDY_Pos))
#define OSCCTRL_STATUS_DFLLOOB_Pos            _U_(9)                                               /**< (OSCCTRL_STATUS) DFLL Out Of Bounds Position */
#define OSCCTRL_STATUS_DFLLOOB_Msk            (_U_(0x1) << OSCCTRL_STATUS_DFLLOOB_Pos)             /**< (OSCCTRL_STATUS) DFLL Out Of Bounds Mask */
#define OSCCTRL_STATUS_DFLLOOB(value)         (OSCCTRL_STATUS_DFLLOOB_Msk & ((value) << OSCCTRL_STATUS_DFLLOOB_Pos))
#define OSCCTRL_STATUS_DFLLLCKF_Pos           _U_(10)                                              /**< (OSCCTRL_STATUS) DFLL Lock Fine Position */
#define OSCCTRL_STATUS_DFLLLCKF_Msk           (_U_(0x1) << OSCCTRL_STATUS_DFLLLCKF_Pos)            /**< (OSCCTRL_STATUS) DFLL Lock Fine Mask */
#define OSCCTRL_STATUS_DFLLLCKF(value)        (OSCCTRL_STATUS_DFLLLCKF_Msk & ((value) << OSCCTRL_STATUS_DFLLLCKF_Pos))
#define OSCCTRL_STATUS_DFLLLCKC_Pos           _U_(11)                                              /**< (OSCCTRL_STATUS) DFLL Lock Coarse Position */
#define OSCCTRL_STATUS_DFLLLCKC_Msk           (_U_(0x1) << OSCCTRL_STATUS_DFLLLCKC_Pos)            /**< (OSCCTRL_STATUS) DFLL Lock Coarse Mask */
#define OSCCTRL_STATUS_DFLLLCKC(value)        (OSCCTRL_STATUS_DFLLLCKC_Msk & ((value) << OSCCTRL_STATUS_DFLLLCKC_Pos))
#define OSCCTRL_STATUS_DFLLRCS_Pos            _U_(12)                                              /**< (OSCCTRL_STATUS) DFLL Reference Clock Stopped Position */
#define OSCCTRL_STATUS_DFLLRCS_Msk            (_U_(0x1) << OSCCTRL_STATUS_DFLLRCS_Pos)             /**< (OSCCTRL_STATUS) DFLL Reference Clock Stopped Mask */
#define OSCCTRL_STATUS_DFLLRCS(value)         (OSCCTRL_STATUS_DFLLRCS_Msk & ((value) << OSCCTRL_STATUS_DFLLRCS_Pos))
#define OSCCTRL_STATUS_DPLLLCKR_Pos           _U_(16)                                              /**< (OSCCTRL_STATUS) DPLL Lock Rise Position */
#define OSCCTRL_STATUS_DPLLLCKR_Msk           (_U_(0x1) << OSCCTRL_STATUS_DPLLLCKR_Pos)            /**< (OSCCTRL_STATUS) DPLL Lock Rise Mask */
#define OSCCTRL_STATUS_DPLLLCKR(value)        (OSCCTRL_STATUS_DPLLLCKR_Msk & ((value) << OSCCTRL_STATUS_DPLLLCKR_Pos))
#define OSCCTRL_STATUS_DPLLLCKF_Pos           _U_(17)                                              /**< (OSCCTRL_STATUS) DPLL Lock Fall Position */
#define OSCCTRL_STATUS_DPLLLCKF_Msk           (_U_(0x1) << OSCCTRL_STATUS_DPLLLCKF_Pos)            /**< (OSCCTRL_STATUS) DPLL Lock Fall Mask */
#define OSCCTRL_STATUS_DPLLLCKF(value)        (OSCCTRL_STATUS_DPLLLCKF_Msk & ((value) << OSCCTRL_STATUS_DPLLLCKF_Pos))
#define OSCCTRL_STATUS_DPLLTO_Pos             _U_(18)                                              /**< (OSCCTRL_STATUS) DPLL Timeout Position */
#define OSCCTRL_STATUS_DPLLTO_Msk             (_U_(0x1) << OSCCTRL_STATUS_DPLLTO_Pos)              /**< (OSCCTRL_STATUS) DPLL Timeout Mask */
#define OSCCTRL_STATUS_DPLLTO(value)          (OSCCTRL_STATUS_DPLLTO_Msk & ((value) << OSCCTRL_STATUS_DPLLTO_Pos))
#define OSCCTRL_STATUS_DPLLLDRTO_Pos          _U_(19)                                              /**< (OSCCTRL_STATUS) DPLL Ratio Ready Position */
#define OSCCTRL_STATUS_DPLLLDRTO_Msk          (_U_(0x1) << OSCCTRL_STATUS_DPLLLDRTO_Pos)           /**< (OSCCTRL_STATUS) DPLL Ratio Ready Mask */
#define OSCCTRL_STATUS_DPLLLDRTO(value)       (OSCCTRL_STATUS_DPLLLDRTO_Msk & ((value) << OSCCTRL_STATUS_DPLLLDRTO_Pos))
#define OSCCTRL_STATUS_Msk                    _U_(0x000F1F11)                                      /**< (OSCCTRL_STATUS) Register Mask  */


/* -------- OSCCTRL_XOSCCTRL : (OSCCTRL Offset: 0x10) (R/W 16) External Multipurpose Crystal Oscillator (XOSC) Control -------- */
#define OSCCTRL_XOSCCTRL_RESETVALUE           _U_(0x80)                                            /**<  (OSCCTRL_XOSCCTRL) External Multipurpose Crystal Oscillator (XOSC) Control  Reset Value */

#define OSCCTRL_XOSCCTRL_ENABLE_Pos           _U_(1)                                               /**< (OSCCTRL_XOSCCTRL) Oscillator Enable Position */
#define OSCCTRL_XOSCCTRL_ENABLE_Msk           (_U_(0x1) << OSCCTRL_XOSCCTRL_ENABLE_Pos)            /**< (OSCCTRL_XOSCCTRL) Oscillator Enable Mask */
#define OSCCTRL_XOSCCTRL_ENABLE(value)        (OSCCTRL_XOSCCTRL_ENABLE_Msk & ((value) << OSCCTRL_XOSCCTRL_ENABLE_Pos))
#define OSCCTRL_XOSCCTRL_XTALEN_Pos           _U_(2)                                               /**< (OSCCTRL_XOSCCTRL) Crystal Oscillator Enable Position */
#define OSCCTRL_XOSCCTRL_XTALEN_Msk           (_U_(0x1) << OSCCTRL_XOSCCTRL_XTALEN_Pos)            /**< (OSCCTRL_XOSCCTRL) Crystal Oscillator Enable Mask */
#define OSCCTRL_XOSCCTRL_XTALEN(value)        (OSCCTRL_XOSCCTRL_XTALEN_Msk & ((value) << OSCCTRL_XOSCCTRL_XTALEN_Pos))
#define OSCCTRL_XOSCCTRL_RUNSTDBY_Pos         _U_(6)                                               /**< (OSCCTRL_XOSCCTRL) Run in Standby Position */
#define OSCCTRL_XOSCCTRL_RUNSTDBY_Msk         (_U_(0x1) << OSCCTRL_XOSCCTRL_RUNSTDBY_Pos)          /**< (OSCCTRL_XOSCCTRL) Run in Standby Mask */
#define OSCCTRL_XOSCCTRL_RUNSTDBY(value)      (OSCCTRL_XOSCCTRL_RUNSTDBY_Msk & ((value) << OSCCTRL_XOSCCTRL_RUNSTDBY_Pos))
#define OSCCTRL_XOSCCTRL_ONDEMAND_Pos         _U_(7)                                               /**< (OSCCTRL_XOSCCTRL) On Demand Control Position */
#define OSCCTRL_XOSCCTRL_ONDEMAND_Msk         (_U_(0x1) << OSCCTRL_XOSCCTRL_ONDEMAND_Pos)          /**< (OSCCTRL_XOSCCTRL) On Demand Control Mask */
#define OSCCTRL_XOSCCTRL_ONDEMAND(value)      (OSCCTRL_XOSCCTRL_ONDEMAND_Msk & ((value) << OSCCTRL_XOSCCTRL_ONDEMAND_Pos))
#define OSCCTRL_XOSCCTRL_GAIN_Pos             _U_(8)                                               /**< (OSCCTRL_XOSCCTRL) Oscillator Gain Position */
#define OSCCTRL_XOSCCTRL_GAIN_Msk             (_U_(0x7) << OSCCTRL_XOSCCTRL_GAIN_Pos)              /**< (OSCCTRL_XOSCCTRL) Oscillator Gain Mask */
#define OSCCTRL_XOSCCTRL_GAIN(value)          (OSCCTRL_XOSCCTRL_GAIN_Msk & ((value) << OSCCTRL_XOSCCTRL_GAIN_Pos))
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN2_Val     _U_(0x0)                                             /**< (OSCCTRL_XOSCCTRL) 2 MHz  */
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN4_Val     _U_(0x1)                                             /**< (OSCCTRL_XOSCCTRL) 4 MHz  */
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN8_Val     _U_(0x2)                                             /**< (OSCCTRL_XOSCCTRL) 8 MHz  */
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN16_Val    _U_(0x3)                                             /**< (OSCCTRL_XOSCCTRL) 16 MHz  */
#define   OSCCTRL_XOSCCTRL_GAIN_GAIN30_Val    _U_(0x4)                                             /**< (OSCCTRL_XOSCCTRL) 30 MHz  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN2           (OSCCTRL_XOSCCTRL_GAIN_GAIN2_Val << OSCCTRL_XOSCCTRL_GAIN_Pos) /**< (OSCCTRL_XOSCCTRL) 2 MHz Position  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN4           (OSCCTRL_XOSCCTRL_GAIN_GAIN4_Val << OSCCTRL_XOSCCTRL_GAIN_Pos) /**< (OSCCTRL_XOSCCTRL) 4 MHz Position  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN8           (OSCCTRL_XOSCCTRL_GAIN_GAIN8_Val << OSCCTRL_XOSCCTRL_GAIN_Pos) /**< (OSCCTRL_XOSCCTRL) 8 MHz Position  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN16          (OSCCTRL_XOSCCTRL_GAIN_GAIN16_Val << OSCCTRL_XOSCCTRL_GAIN_Pos) /**< (OSCCTRL_XOSCCTRL) 16 MHz Position  */
#define OSCCTRL_XOSCCTRL_GAIN_GAIN30          (OSCCTRL_XOSCCTRL_GAIN_GAIN30_Val << OSCCTRL_XOSCCTRL_GAIN_Pos) /**< (OSCCTRL_XOSCCTRL) 30 MHz Position  */
#define OSCCTRL_XOSCCTRL_AMPGC_Pos            _U_(11)                                              /**< (OSCCTRL_XOSCCTRL) Automatic Amplitude Gain Control Position */
#define OSCCTRL_XOSCCTRL_AMPGC_Msk            (_U_(0x1) << OSCCTRL_XOSCCTRL_AMPGC_Pos)             /**< (OSCCTRL_XOSCCTRL) Automatic Amplitude Gain Control Mask */
#define OSCCTRL_XOSCCTRL_AMPGC(value)         (OSCCTRL_XOSCCTRL_AMPGC_Msk & ((value) << OSCCTRL_XOSCCTRL_AMPGC_Pos))
#define OSCCTRL_XOSCCTRL_STARTUP_Pos          _U_(12)                                              /**< (OSCCTRL_XOSCCTRL) Start-Up Time Position */
#define OSCCTRL_XOSCCTRL_STARTUP_Msk          (_U_(0xF) << OSCCTRL_XOSCCTRL_STARTUP_Pos)           /**< (OSCCTRL_XOSCCTRL) Start-Up Time Mask */
#define OSCCTRL_XOSCCTRL_STARTUP(value)       (OSCCTRL_XOSCCTRL_STARTUP_Msk & ((value) << OSCCTRL_XOSCCTRL_STARTUP_Pos))
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE1_Val _U_(0x0)                                             /**< (OSCCTRL_XOSCCTRL) 31 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE2_Val _U_(0x1)                                             /**< (OSCCTRL_XOSCCTRL) 61 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE4_Val _U_(0x2)                                             /**< (OSCCTRL_XOSCCTRL) 122 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE8_Val _U_(0x3)                                             /**< (OSCCTRL_XOSCCTRL) 244 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE16_Val _U_(0x4)                                             /**< (OSCCTRL_XOSCCTRL) 488 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE32_Val _U_(0x5)                                             /**< (OSCCTRL_XOSCCTRL) 977 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE64_Val _U_(0x6)                                             /**< (OSCCTRL_XOSCCTRL) 1953 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE128_Val _U_(0x7)                                             /**< (OSCCTRL_XOSCCTRL) 3906 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE256_Val _U_(0x8)                                             /**< (OSCCTRL_XOSCCTRL) 7813 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE512_Val _U_(0x9)                                             /**< (OSCCTRL_XOSCCTRL) 15625 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE1024_Val _U_(0xA)                                             /**< (OSCCTRL_XOSCCTRL) 31250 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE2048_Val _U_(0xB)                                             /**< (OSCCTRL_XOSCCTRL) 62500 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE4096_Val _U_(0xC)                                             /**< (OSCCTRL_XOSCCTRL) 125000 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE8192_Val _U_(0xD)                                             /**< (OSCCTRL_XOSCCTRL) 250000 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE16384_Val _U_(0xE)                                             /**< (OSCCTRL_XOSCCTRL) 500000 us  */
#define   OSCCTRL_XOSCCTRL_STARTUP_CYCLE32768_Val _U_(0xF)                                             /**< (OSCCTRL_XOSCCTRL) 1000000 us  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE1       (OSCCTRL_XOSCCTRL_STARTUP_CYCLE1_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 31 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE2       (OSCCTRL_XOSCCTRL_STARTUP_CYCLE2_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 61 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE4       (OSCCTRL_XOSCCTRL_STARTUP_CYCLE4_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 122 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE8       (OSCCTRL_XOSCCTRL_STARTUP_CYCLE8_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 244 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE16      (OSCCTRL_XOSCCTRL_STARTUP_CYCLE16_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 488 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE32      (OSCCTRL_XOSCCTRL_STARTUP_CYCLE32_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 977 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE64      (OSCCTRL_XOSCCTRL_STARTUP_CYCLE64_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 1953 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE128     (OSCCTRL_XOSCCTRL_STARTUP_CYCLE128_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 3906 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE256     (OSCCTRL_XOSCCTRL_STARTUP_CYCLE256_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 7813 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE512     (OSCCTRL_XOSCCTRL_STARTUP_CYCLE512_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 15625 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE1024    (OSCCTRL_XOSCCTRL_STARTUP_CYCLE1024_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 31250 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE2048    (OSCCTRL_XOSCCTRL_STARTUP_CYCLE2048_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 62500 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE4096    (OSCCTRL_XOSCCTRL_STARTUP_CYCLE4096_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 125000 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE8192    (OSCCTRL_XOSCCTRL_STARTUP_CYCLE8192_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 250000 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE16384   (OSCCTRL_XOSCCTRL_STARTUP_CYCLE16384_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 500000 us Position  */
#define OSCCTRL_XOSCCTRL_STARTUP_CYCLE32768   (OSCCTRL_XOSCCTRL_STARTUP_CYCLE32768_Val << OSCCTRL_XOSCCTRL_STARTUP_Pos) /**< (OSCCTRL_XOSCCTRL) 1000000 us Position  */
#define OSCCTRL_XOSCCTRL_Msk                  _U_(0xFFC6)                                          /**< (OSCCTRL_XOSCCTRL) Register Mask  */


/* -------- OSCCTRL_OSC16MCTRL : (OSCCTRL Offset: 0x14) (R/W 8) 16MHz Internal Oscillator (OSC16M) Control -------- */
#define OSCCTRL_OSC16MCTRL_RESETVALUE         _U_(0x82)                                            /**<  (OSCCTRL_OSC16MCTRL) 16MHz Internal Oscillator (OSC16M) Control  Reset Value */

#define OSCCTRL_OSC16MCTRL_ENABLE_Pos         _U_(1)                                               /**< (OSCCTRL_OSC16MCTRL) Oscillator Enable Position */
#define OSCCTRL_OSC16MCTRL_ENABLE_Msk         (_U_(0x1) << OSCCTRL_OSC16MCTRL_ENABLE_Pos)          /**< (OSCCTRL_OSC16MCTRL) Oscillator Enable Mask */
#define OSCCTRL_OSC16MCTRL_ENABLE(value)      (OSCCTRL_OSC16MCTRL_ENABLE_Msk & ((value) << OSCCTRL_OSC16MCTRL_ENABLE_Pos))
#define OSCCTRL_OSC16MCTRL_FSEL_Pos           _U_(2)                                               /**< (OSCCTRL_OSC16MCTRL) Oscillator Frequency Select Position */
#define OSCCTRL_OSC16MCTRL_FSEL_Msk           (_U_(0x3) << OSCCTRL_OSC16MCTRL_FSEL_Pos)            /**< (OSCCTRL_OSC16MCTRL) Oscillator Frequency Select Mask */
#define OSCCTRL_OSC16MCTRL_FSEL(value)        (OSCCTRL_OSC16MCTRL_FSEL_Msk & ((value) << OSCCTRL_OSC16MCTRL_FSEL_Pos))
#define   OSCCTRL_OSC16MCTRL_FSEL_4_Val       _U_(0x0)                                             /**< (OSCCTRL_OSC16MCTRL) 4MHz  */
#define   OSCCTRL_OSC16MCTRL_FSEL_8_Val       _U_(0x1)                                             /**< (OSCCTRL_OSC16MCTRL) 8MHz  */
#define   OSCCTRL_OSC16MCTRL_FSEL_12_Val      _U_(0x2)                                             /**< (OSCCTRL_OSC16MCTRL) 12MHz  */
#define   OSCCTRL_OSC16MCTRL_FSEL_16_Val      _U_(0x3)                                             /**< (OSCCTRL_OSC16MCTRL) 16MHz  */
#define OSCCTRL_OSC16MCTRL_FSEL_4             (OSCCTRL_OSC16MCTRL_FSEL_4_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos) /**< (OSCCTRL_OSC16MCTRL) 4MHz Position  */
#define OSCCTRL_OSC16MCTRL_FSEL_8             (OSCCTRL_OSC16MCTRL_FSEL_8_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos) /**< (OSCCTRL_OSC16MCTRL) 8MHz Position  */
#define OSCCTRL_OSC16MCTRL_FSEL_12            (OSCCTRL_OSC16MCTRL_FSEL_12_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos) /**< (OSCCTRL_OSC16MCTRL) 12MHz Position  */
#define OSCCTRL_OSC16MCTRL_FSEL_16            (OSCCTRL_OSC16MCTRL_FSEL_16_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos) /**< (OSCCTRL_OSC16MCTRL) 16MHz Position  */
#define OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos       _U_(6)                                               /**< (OSCCTRL_OSC16MCTRL) Run in Standby Position */
#define OSCCTRL_OSC16MCTRL_RUNSTDBY_Msk       (_U_(0x1) << OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos)        /**< (OSCCTRL_OSC16MCTRL) Run in Standby Mask */
#define OSCCTRL_OSC16MCTRL_RUNSTDBY(value)    (OSCCTRL_OSC16MCTRL_RUNSTDBY_Msk & ((value) << OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos))
#define OSCCTRL_OSC16MCTRL_ONDEMAND_Pos       _U_(7)                                               /**< (OSCCTRL_OSC16MCTRL) On Demand Control Position */
#define OSCCTRL_OSC16MCTRL_ONDEMAND_Msk       (_U_(0x1) << OSCCTRL_OSC16MCTRL_ONDEMAND_Pos)        /**< (OSCCTRL_OSC16MCTRL) On Demand Control Mask */
#define OSCCTRL_OSC16MCTRL_ONDEMAND(value)    (OSCCTRL_OSC16MCTRL_ONDEMAND_Msk & ((value) << OSCCTRL_OSC16MCTRL_ONDEMAND_Pos))
#define OSCCTRL_OSC16MCTRL_Msk                _U_(0xCE)                                            /**< (OSCCTRL_OSC16MCTRL) Register Mask  */


/* -------- OSCCTRL_DFLLCTRL : (OSCCTRL Offset: 0x18) (R/W 16) DFLL48M Control -------- */
#define OSCCTRL_DFLLCTRL_RESETVALUE           _U_(0x80)                                            /**<  (OSCCTRL_DFLLCTRL) DFLL48M Control  Reset Value */

#define OSCCTRL_DFLLCTRL_ENABLE_Pos           _U_(1)                                               /**< (OSCCTRL_DFLLCTRL) DFLL Enable Position */
#define OSCCTRL_DFLLCTRL_ENABLE_Msk           (_U_(0x1) << OSCCTRL_DFLLCTRL_ENABLE_Pos)            /**< (OSCCTRL_DFLLCTRL) DFLL Enable Mask */
#define OSCCTRL_DFLLCTRL_ENABLE(value)        (OSCCTRL_DFLLCTRL_ENABLE_Msk & ((value) << OSCCTRL_DFLLCTRL_ENABLE_Pos))
#define OSCCTRL_DFLLCTRL_MODE_Pos             _U_(2)                                               /**< (OSCCTRL_DFLLCTRL) Operating Mode Selection Position */
#define OSCCTRL_DFLLCTRL_MODE_Msk             (_U_(0x1) << OSCCTRL_DFLLCTRL_MODE_Pos)              /**< (OSCCTRL_DFLLCTRL) Operating Mode Selection Mask */
#define OSCCTRL_DFLLCTRL_MODE(value)          (OSCCTRL_DFLLCTRL_MODE_Msk & ((value) << OSCCTRL_DFLLCTRL_MODE_Pos))
#define OSCCTRL_DFLLCTRL_STABLE_Pos           _U_(3)                                               /**< (OSCCTRL_DFLLCTRL) Stable DFLL Frequency Position */
#define OSCCTRL_DFLLCTRL_STABLE_Msk           (_U_(0x1) << OSCCTRL_DFLLCTRL_STABLE_Pos)            /**< (OSCCTRL_DFLLCTRL) Stable DFLL Frequency Mask */
#define OSCCTRL_DFLLCTRL_STABLE(value)        (OSCCTRL_DFLLCTRL_STABLE_Msk & ((value) << OSCCTRL_DFLLCTRL_STABLE_Pos))
#define OSCCTRL_DFLLCTRL_LLAW_Pos             _U_(4)                                               /**< (OSCCTRL_DFLLCTRL) Lose Lock After Wake Position */
#define OSCCTRL_DFLLCTRL_LLAW_Msk             (_U_(0x1) << OSCCTRL_DFLLCTRL_LLAW_Pos)              /**< (OSCCTRL_DFLLCTRL) Lose Lock After Wake Mask */
#define OSCCTRL_DFLLCTRL_LLAW(value)          (OSCCTRL_DFLLCTRL_LLAW_Msk & ((value) << OSCCTRL_DFLLCTRL_LLAW_Pos))
#define OSCCTRL_DFLLCTRL_USBCRM_Pos           _U_(5)                                               /**< (OSCCTRL_DFLLCTRL) USB Clock Recovery Mode Position */
#define OSCCTRL_DFLLCTRL_USBCRM_Msk           (_U_(0x1) << OSCCTRL_DFLLCTRL_USBCRM_Pos)            /**< (OSCCTRL_DFLLCTRL) USB Clock Recovery Mode Mask */
#define OSCCTRL_DFLLCTRL_USBCRM(value)        (OSCCTRL_DFLLCTRL_USBCRM_Msk & ((value) << OSCCTRL_DFLLCTRL_USBCRM_Pos))
#define OSCCTRL_DFLLCTRL_RUNSTDBY_Pos         _U_(6)                                               /**< (OSCCTRL_DFLLCTRL) Run in Standby Position */
#define OSCCTRL_DFLLCTRL_RUNSTDBY_Msk         (_U_(0x1) << OSCCTRL_DFLLCTRL_RUNSTDBY_Pos)          /**< (OSCCTRL_DFLLCTRL) Run in Standby Mask */
#define OSCCTRL_DFLLCTRL_RUNSTDBY(value)      (OSCCTRL_DFLLCTRL_RUNSTDBY_Msk & ((value) << OSCCTRL_DFLLCTRL_RUNSTDBY_Pos))
#define OSCCTRL_DFLLCTRL_ONDEMAND_Pos         _U_(7)                                               /**< (OSCCTRL_DFLLCTRL) On Demand Control Position */
#define OSCCTRL_DFLLCTRL_ONDEMAND_Msk         (_U_(0x1) << OSCCTRL_DFLLCTRL_ONDEMAND_Pos)          /**< (OSCCTRL_DFLLCTRL) On Demand Control Mask */
#define OSCCTRL_DFLLCTRL_ONDEMAND(value)      (OSCCTRL_DFLLCTRL_ONDEMAND_Msk & ((value) << OSCCTRL_DFLLCTRL_ONDEMAND_Pos))
#define OSCCTRL_DFLLCTRL_CCDIS_Pos            _U_(8)                                               /**< (OSCCTRL_DFLLCTRL) Chill Cycle Disable Position */
#define OSCCTRL_DFLLCTRL_CCDIS_Msk            (_U_(0x1) << OSCCTRL_DFLLCTRL_CCDIS_Pos)             /**< (OSCCTRL_DFLLCTRL) Chill Cycle Disable Mask */
#define OSCCTRL_DFLLCTRL_CCDIS(value)         (OSCCTRL_DFLLCTRL_CCDIS_Msk & ((value) << OSCCTRL_DFLLCTRL_CCDIS_Pos))
#define OSCCTRL_DFLLCTRL_QLDIS_Pos            _U_(9)                                               /**< (OSCCTRL_DFLLCTRL) Quick Lock Disable Position */
#define OSCCTRL_DFLLCTRL_QLDIS_Msk            (_U_(0x1) << OSCCTRL_DFLLCTRL_QLDIS_Pos)             /**< (OSCCTRL_DFLLCTRL) Quick Lock Disable Mask */
#define OSCCTRL_DFLLCTRL_QLDIS(value)         (OSCCTRL_DFLLCTRL_QLDIS_Msk & ((value) << OSCCTRL_DFLLCTRL_QLDIS_Pos))
#define OSCCTRL_DFLLCTRL_BPLCKC_Pos           _U_(10)                                              /**< (OSCCTRL_DFLLCTRL) Bypass Coarse Lock Position */
#define OSCCTRL_DFLLCTRL_BPLCKC_Msk           (_U_(0x1) << OSCCTRL_DFLLCTRL_BPLCKC_Pos)            /**< (OSCCTRL_DFLLCTRL) Bypass Coarse Lock Mask */
#define OSCCTRL_DFLLCTRL_BPLCKC(value)        (OSCCTRL_DFLLCTRL_BPLCKC_Msk & ((value) << OSCCTRL_DFLLCTRL_BPLCKC_Pos))
#define OSCCTRL_DFLLCTRL_WAITLOCK_Pos         _U_(11)                                              /**< (OSCCTRL_DFLLCTRL) Wait Lock Position */
#define OSCCTRL_DFLLCTRL_WAITLOCK_Msk         (_U_(0x1) << OSCCTRL_DFLLCTRL_WAITLOCK_Pos)          /**< (OSCCTRL_DFLLCTRL) Wait Lock Mask */
#define OSCCTRL_DFLLCTRL_WAITLOCK(value)      (OSCCTRL_DFLLCTRL_WAITLOCK_Msk & ((value) << OSCCTRL_DFLLCTRL_WAITLOCK_Pos))
#define OSCCTRL_DFLLCTRL_Msk                  _U_(0x0FFE)                                          /**< (OSCCTRL_DFLLCTRL) Register Mask  */


/* -------- OSCCTRL_DFLLVAL : (OSCCTRL Offset: 0x1C) (R/W 32) DFLL48M Value -------- */
#define OSCCTRL_DFLLVAL_RESETVALUE            _U_(0x00)                                            /**<  (OSCCTRL_DFLLVAL) DFLL48M Value  Reset Value */

#define OSCCTRL_DFLLVAL_FINE_Pos              _U_(0)                                               /**< (OSCCTRL_DFLLVAL) Fine Value Position */
#define OSCCTRL_DFLLVAL_FINE_Msk              (_U_(0x3FF) << OSCCTRL_DFLLVAL_FINE_Pos)             /**< (OSCCTRL_DFLLVAL) Fine Value Mask */
#define OSCCTRL_DFLLVAL_FINE(value)           (OSCCTRL_DFLLVAL_FINE_Msk & ((value) << OSCCTRL_DFLLVAL_FINE_Pos))
#define OSCCTRL_DFLLVAL_COARSE_Pos            _U_(10)                                              /**< (OSCCTRL_DFLLVAL) Coarse Value Position */
#define OSCCTRL_DFLLVAL_COARSE_Msk            (_U_(0x3F) << OSCCTRL_DFLLVAL_COARSE_Pos)            /**< (OSCCTRL_DFLLVAL) Coarse Value Mask */
#define OSCCTRL_DFLLVAL_COARSE(value)         (OSCCTRL_DFLLVAL_COARSE_Msk & ((value) << OSCCTRL_DFLLVAL_COARSE_Pos))
#define OSCCTRL_DFLLVAL_DIFF_Pos              _U_(16)                                              /**< (OSCCTRL_DFLLVAL) Multiplication Ratio Difference Position */
#define OSCCTRL_DFLLVAL_DIFF_Msk              (_U_(0xFFFF) << OSCCTRL_DFLLVAL_DIFF_Pos)            /**< (OSCCTRL_DFLLVAL) Multiplication Ratio Difference Mask */
#define OSCCTRL_DFLLVAL_DIFF(value)           (OSCCTRL_DFLLVAL_DIFF_Msk & ((value) << OSCCTRL_DFLLVAL_DIFF_Pos))
#define OSCCTRL_DFLLVAL_Msk                   _U_(0xFFFFFFFF)                                      /**< (OSCCTRL_DFLLVAL) Register Mask  */


/* -------- OSCCTRL_DFLLMUL : (OSCCTRL Offset: 0x20) (R/W 32) DFLL48M Multiplier -------- */
#define OSCCTRL_DFLLMUL_RESETVALUE            _U_(0x00)                                            /**<  (OSCCTRL_DFLLMUL) DFLL48M Multiplier  Reset Value */

#define OSCCTRL_DFLLMUL_MUL_Pos               _U_(0)                                               /**< (OSCCTRL_DFLLMUL) DFLL Multiply Factor Position */
#define OSCCTRL_DFLLMUL_MUL_Msk               (_U_(0xFFFF) << OSCCTRL_DFLLMUL_MUL_Pos)             /**< (OSCCTRL_DFLLMUL) DFLL Multiply Factor Mask */
#define OSCCTRL_DFLLMUL_MUL(value)            (OSCCTRL_DFLLMUL_MUL_Msk & ((value) << OSCCTRL_DFLLMUL_MUL_Pos))
#define OSCCTRL_DFLLMUL_FSTEP_Pos             _U_(16)                                              /**< (OSCCTRL_DFLLMUL) Fine Maximum Step Position */
#define OSCCTRL_DFLLMUL_FSTEP_Msk             (_U_(0x3FF) << OSCCTRL_DFLLMUL_FSTEP_Pos)            /**< (OSCCTRL_DFLLMUL) Fine Maximum Step Mask */
#define OSCCTRL_DFLLMUL_FSTEP(value)          (OSCCTRL_DFLLMUL_FSTEP_Msk & ((value) << OSCCTRL_DFLLMUL_FSTEP_Pos))
#define OSCCTRL_DFLLMUL_CSTEP_Pos             _U_(26)                                              /**< (OSCCTRL_DFLLMUL) Coarse Maximum Step Position */
#define OSCCTRL_DFLLMUL_CSTEP_Msk             (_U_(0x3F) << OSCCTRL_DFLLMUL_CSTEP_Pos)             /**< (OSCCTRL_DFLLMUL) Coarse Maximum Step Mask */
#define OSCCTRL_DFLLMUL_CSTEP(value)          (OSCCTRL_DFLLMUL_CSTEP_Msk & ((value) << OSCCTRL_DFLLMUL_CSTEP_Pos))
#define OSCCTRL_DFLLMUL_Msk                   _U_(0xFFFFFFFF)                                      /**< (OSCCTRL_DFLLMUL) Register Mask  */


/* -------- OSCCTRL_DFLLSYNC : (OSCCTRL Offset: 0x24) (R/W 8) DFLL48M Synchronization -------- */
#define OSCCTRL_DFLLSYNC_RESETVALUE           _U_(0x00)                                            /**<  (OSCCTRL_DFLLSYNC) DFLL48M Synchronization  Reset Value */

#define OSCCTRL_DFLLSYNC_READREQ_Pos          _U_(7)                                               /**< (OSCCTRL_DFLLSYNC) Read Request Position */
#define OSCCTRL_DFLLSYNC_READREQ_Msk          (_U_(0x1) << OSCCTRL_DFLLSYNC_READREQ_Pos)           /**< (OSCCTRL_DFLLSYNC) Read Request Mask */
#define OSCCTRL_DFLLSYNC_READREQ(value)       (OSCCTRL_DFLLSYNC_READREQ_Msk & ((value) << OSCCTRL_DFLLSYNC_READREQ_Pos))
#define OSCCTRL_DFLLSYNC_Msk                  _U_(0x80)                                            /**< (OSCCTRL_DFLLSYNC) Register Mask  */


/* -------- OSCCTRL_DPLLCTRLA : (OSCCTRL Offset: 0x28) (R/W 8) DPLL Control -------- */
#define OSCCTRL_DPLLCTRLA_RESETVALUE          _U_(0x80)                                            /**<  (OSCCTRL_DPLLCTRLA) DPLL Control  Reset Value */

#define OSCCTRL_DPLLCTRLA_ENABLE_Pos          _U_(1)                                               /**< (OSCCTRL_DPLLCTRLA) Enable Position */
#define OSCCTRL_DPLLCTRLA_ENABLE_Msk          (_U_(0x1) << OSCCTRL_DPLLCTRLA_ENABLE_Pos)           /**< (OSCCTRL_DPLLCTRLA) Enable Mask */
#define OSCCTRL_DPLLCTRLA_ENABLE(value)       (OSCCTRL_DPLLCTRLA_ENABLE_Msk & ((value) << OSCCTRL_DPLLCTRLA_ENABLE_Pos))
#define OSCCTRL_DPLLCTRLA_RUNSTDBY_Pos        _U_(6)                                               /**< (OSCCTRL_DPLLCTRLA) Run in Standby Position */
#define OSCCTRL_DPLLCTRLA_RUNSTDBY_Msk        (_U_(0x1) << OSCCTRL_DPLLCTRLA_RUNSTDBY_Pos)         /**< (OSCCTRL_DPLLCTRLA) Run in Standby Mask */
#define OSCCTRL_DPLLCTRLA_RUNSTDBY(value)     (OSCCTRL_DPLLCTRLA_RUNSTDBY_Msk & ((value) << OSCCTRL_DPLLCTRLA_RUNSTDBY_Pos))
#define OSCCTRL_DPLLCTRLA_ONDEMAND_Pos        _U_(7)                                               /**< (OSCCTRL_DPLLCTRLA) On Demand Position */
#define OSCCTRL_DPLLCTRLA_ONDEMAND_Msk        (_U_(0x1) << OSCCTRL_DPLLCTRLA_ONDEMAND_Pos)         /**< (OSCCTRL_DPLLCTRLA) On Demand Mask */
#define OSCCTRL_DPLLCTRLA_ONDEMAND(value)     (OSCCTRL_DPLLCTRLA_ONDEMAND_Msk & ((value) << OSCCTRL_DPLLCTRLA_ONDEMAND_Pos))
#define OSCCTRL_DPLLCTRLA_Msk                 _U_(0xC2)                                            /**< (OSCCTRL_DPLLCTRLA) Register Mask  */


/* -------- OSCCTRL_DPLLRATIO : (OSCCTRL Offset: 0x2C) (R/W 32) DPLL Ratio Control -------- */
#define OSCCTRL_DPLLRATIO_RESETVALUE          _U_(0x00)                                            /**<  (OSCCTRL_DPLLRATIO) DPLL Ratio Control  Reset Value */

#define OSCCTRL_DPLLRATIO_LDR_Pos             _U_(0)                                               /**< (OSCCTRL_DPLLRATIO) Loop Divider Ratio Position */
#define OSCCTRL_DPLLRATIO_LDR_Msk             (_U_(0xFFF) << OSCCTRL_DPLLRATIO_LDR_Pos)            /**< (OSCCTRL_DPLLRATIO) Loop Divider Ratio Mask */
#define OSCCTRL_DPLLRATIO_LDR(value)          (OSCCTRL_DPLLRATIO_LDR_Msk & ((value) << OSCCTRL_DPLLRATIO_LDR_Pos))
#define OSCCTRL_DPLLRATIO_LDRFRAC_Pos         _U_(16)                                              /**< (OSCCTRL_DPLLRATIO) Loop Divider Ratio Fractional Part Position */
#define OSCCTRL_DPLLRATIO_LDRFRAC_Msk         (_U_(0xF) << OSCCTRL_DPLLRATIO_LDRFRAC_Pos)          /**< (OSCCTRL_DPLLRATIO) Loop Divider Ratio Fractional Part Mask */
#define OSCCTRL_DPLLRATIO_LDRFRAC(value)      (OSCCTRL_DPLLRATIO_LDRFRAC_Msk & ((value) << OSCCTRL_DPLLRATIO_LDRFRAC_Pos))
#define OSCCTRL_DPLLRATIO_Msk                 _U_(0x000F0FFF)                                      /**< (OSCCTRL_DPLLRATIO) Register Mask  */


/* -------- OSCCTRL_DPLLCTRLB : (OSCCTRL Offset: 0x30) (R/W 32) Digital Core Configuration -------- */
#define OSCCTRL_DPLLCTRLB_RESETVALUE          _U_(0x00)                                            /**<  (OSCCTRL_DPLLCTRLB) Digital Core Configuration  Reset Value */

#define OSCCTRL_DPLLCTRLB_FILTER_Pos          _U_(0)                                               /**< (OSCCTRL_DPLLCTRLB) Proportional Integral Filter Selection Position */
#define OSCCTRL_DPLLCTRLB_FILTER_Msk          (_U_(0x3) << OSCCTRL_DPLLCTRLB_FILTER_Pos)           /**< (OSCCTRL_DPLLCTRLB) Proportional Integral Filter Selection Mask */
#define OSCCTRL_DPLLCTRLB_FILTER(value)       (OSCCTRL_DPLLCTRLB_FILTER_Msk & ((value) << OSCCTRL_DPLLCTRLB_FILTER_Pos))
#define   OSCCTRL_DPLLCTRLB_FILTER_DEFAULT_Val _U_(0x0)                                             /**< (OSCCTRL_DPLLCTRLB) Default filter mode  */
#define   OSCCTRL_DPLLCTRLB_FILTER_LBFILT_Val _U_(0x1)                                             /**< (OSCCTRL_DPLLCTRLB) Low bandwidth filter  */
#define   OSCCTRL_DPLLCTRLB_FILTER_HBFILT_Val _U_(0x2)                                             /**< (OSCCTRL_DPLLCTRLB) High bandwidth filter  */
#define   OSCCTRL_DPLLCTRLB_FILTER_HDFILT_Val _U_(0x3)                                             /**< (OSCCTRL_DPLLCTRLB) High damping filter  */
#define OSCCTRL_DPLLCTRLB_FILTER_DEFAULT      (OSCCTRL_DPLLCTRLB_FILTER_DEFAULT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos) /**< (OSCCTRL_DPLLCTRLB) Default filter mode Position  */
#define OSCCTRL_DPLLCTRLB_FILTER_LBFILT       (OSCCTRL_DPLLCTRLB_FILTER_LBFILT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos) /**< (OSCCTRL_DPLLCTRLB) Low bandwidth filter Position  */
#define OSCCTRL_DPLLCTRLB_FILTER_HBFILT       (OSCCTRL_DPLLCTRLB_FILTER_HBFILT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos) /**< (OSCCTRL_DPLLCTRLB) High bandwidth filter Position  */
#define OSCCTRL_DPLLCTRLB_FILTER_HDFILT       (OSCCTRL_DPLLCTRLB_FILTER_HDFILT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos) /**< (OSCCTRL_DPLLCTRLB) High damping filter Position  */
#define OSCCTRL_DPLLCTRLB_LPEN_Pos            _U_(2)                                               /**< (OSCCTRL_DPLLCTRLB) Low-Power Enable Position */
#define OSCCTRL_DPLLCTRLB_LPEN_Msk            (_U_(0x1) << OSCCTRL_DPLLCTRLB_LPEN_Pos)             /**< (OSCCTRL_DPLLCTRLB) Low-Power Enable Mask */
#define OSCCTRL_DPLLCTRLB_LPEN(value)         (OSCCTRL_DPLLCTRLB_LPEN_Msk & ((value) << OSCCTRL_DPLLCTRLB_LPEN_Pos))
#define OSCCTRL_DPLLCTRLB_WUF_Pos             _U_(3)                                               /**< (OSCCTRL_DPLLCTRLB) Wake Up Fast Position */
#define OSCCTRL_DPLLCTRLB_WUF_Msk             (_U_(0x1) << OSCCTRL_DPLLCTRLB_WUF_Pos)              /**< (OSCCTRL_DPLLCTRLB) Wake Up Fast Mask */
#define OSCCTRL_DPLLCTRLB_WUF(value)          (OSCCTRL_DPLLCTRLB_WUF_Msk & ((value) << OSCCTRL_DPLLCTRLB_WUF_Pos))
#define OSCCTRL_DPLLCTRLB_REFCLK_Pos          _U_(4)                                               /**< (OSCCTRL_DPLLCTRLB) Reference Clock Selection Position */
#define OSCCTRL_DPLLCTRLB_REFCLK_Msk          (_U_(0x3) << OSCCTRL_DPLLCTRLB_REFCLK_Pos)           /**< (OSCCTRL_DPLLCTRLB) Reference Clock Selection Mask */
#define OSCCTRL_DPLLCTRLB_REFCLK(value)       (OSCCTRL_DPLLCTRLB_REFCLK_Msk & ((value) << OSCCTRL_DPLLCTRLB_REFCLK_Pos))
#define   OSCCTRL_DPLLCTRLB_REFCLK_XOSC32K_Val _U_(0x0)                                             /**< (OSCCTRL_DPLLCTRLB) XOSC32K clock reference  */
#define   OSCCTRL_DPLLCTRLB_REFCLK_XOSC_Val   _U_(0x1)                                             /**< (OSCCTRL_DPLLCTRLB) XOSC clock reference  */
#define   OSCCTRL_DPLLCTRLB_REFCLK_GCLK_Val   _U_(0x2)                                             /**< (OSCCTRL_DPLLCTRLB) GCLK clock reference  */
#define OSCCTRL_DPLLCTRLB_REFCLK_XOSC32K      (OSCCTRL_DPLLCTRLB_REFCLK_XOSC32K_Val << OSCCTRL_DPLLCTRLB_REFCLK_Pos) /**< (OSCCTRL_DPLLCTRLB) XOSC32K clock reference Position  */
#define OSCCTRL_DPLLCTRLB_REFCLK_XOSC         (OSCCTRL_DPLLCTRLB_REFCLK_XOSC_Val << OSCCTRL_DPLLCTRLB_REFCLK_Pos) /**< (OSCCTRL_DPLLCTRLB) XOSC clock reference Position  */
#define OSCCTRL_DPLLCTRLB_REFCLK_GCLK         (OSCCTRL_DPLLCTRLB_REFCLK_GCLK_Val << OSCCTRL_DPLLCTRLB_REFCLK_Pos) /**< (OSCCTRL_DPLLCTRLB) GCLK clock reference Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_Pos           _U_(8)                                               /**< (OSCCTRL_DPLLCTRLB) Lock Time Position */
#define OSCCTRL_DPLLCTRLB_LTIME_Msk           (_U_(0x7) << OSCCTRL_DPLLCTRLB_LTIME_Pos)            /**< (OSCCTRL_DPLLCTRLB) Lock Time Mask */
#define OSCCTRL_DPLLCTRLB_LTIME(value)        (OSCCTRL_DPLLCTRLB_LTIME_Msk & ((value) << OSCCTRL_DPLLCTRLB_LTIME_Pos))
#define   OSCCTRL_DPLLCTRLB_LTIME_DEFAULT_Val _U_(0x0)                                             /**< (OSCCTRL_DPLLCTRLB) No time-out. Automatic lock.  */
#define   OSCCTRL_DPLLCTRLB_LTIME_8MS_Val     _U_(0x4)                                             /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 8ms  */
#define   OSCCTRL_DPLLCTRLB_LTIME_9MS_Val     _U_(0x5)                                             /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 9ms  */
#define   OSCCTRL_DPLLCTRLB_LTIME_10MS_Val    _U_(0x6)                                             /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 10ms  */
#define   OSCCTRL_DPLLCTRLB_LTIME_11MS_Val    _U_(0x7)                                             /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 11ms  */
#define OSCCTRL_DPLLCTRLB_LTIME_DEFAULT       (OSCCTRL_DPLLCTRLB_LTIME_DEFAULT_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos) /**< (OSCCTRL_DPLLCTRLB) No time-out. Automatic lock. Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_8MS           (OSCCTRL_DPLLCTRLB_LTIME_8MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos) /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 8ms Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_9MS           (OSCCTRL_DPLLCTRLB_LTIME_9MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos) /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 9ms Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_10MS          (OSCCTRL_DPLLCTRLB_LTIME_10MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos) /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 10ms Position  */
#define OSCCTRL_DPLLCTRLB_LTIME_11MS          (OSCCTRL_DPLLCTRLB_LTIME_11MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos) /**< (OSCCTRL_DPLLCTRLB) Time-out if no lock within 11ms Position  */
#define OSCCTRL_DPLLCTRLB_LBYPASS_Pos         _U_(12)                                              /**< (OSCCTRL_DPLLCTRLB) Lock Bypass Position */
#define OSCCTRL_DPLLCTRLB_LBYPASS_Msk         (_U_(0x1) << OSCCTRL_DPLLCTRLB_LBYPASS_Pos)          /**< (OSCCTRL_DPLLCTRLB) Lock Bypass Mask */
#define OSCCTRL_DPLLCTRLB_LBYPASS(value)      (OSCCTRL_DPLLCTRLB_LBYPASS_Msk & ((value) << OSCCTRL_DPLLCTRLB_LBYPASS_Pos))
#define OSCCTRL_DPLLCTRLB_DIV_Pos             _U_(16)                                              /**< (OSCCTRL_DPLLCTRLB) Clock Divider Position */
#define OSCCTRL_DPLLCTRLB_DIV_Msk             (_U_(0x7FF) << OSCCTRL_DPLLCTRLB_DIV_Pos)            /**< (OSCCTRL_DPLLCTRLB) Clock Divider Mask */
#define OSCCTRL_DPLLCTRLB_DIV(value)          (OSCCTRL_DPLLCTRLB_DIV_Msk & ((value) << OSCCTRL_DPLLCTRLB_DIV_Pos))
#define OSCCTRL_DPLLCTRLB_Msk                 _U_(0x07FF173F)                                      /**< (OSCCTRL_DPLLCTRLB) Register Mask  */


/* -------- OSCCTRL_DPLLPRESC : (OSCCTRL Offset: 0x34) (R/W 8) DPLL Prescaler -------- */
#define OSCCTRL_DPLLPRESC_RESETVALUE          _U_(0x00)                                            /**<  (OSCCTRL_DPLLPRESC) DPLL Prescaler  Reset Value */

#define OSCCTRL_DPLLPRESC_PRESC_Pos           _U_(0)                                               /**< (OSCCTRL_DPLLPRESC) Output Clock Prescaler Position */
#define OSCCTRL_DPLLPRESC_PRESC_Msk           (_U_(0x3) << OSCCTRL_DPLLPRESC_PRESC_Pos)            /**< (OSCCTRL_DPLLPRESC) Output Clock Prescaler Mask */
#define OSCCTRL_DPLLPRESC_PRESC(value)        (OSCCTRL_DPLLPRESC_PRESC_Msk & ((value) << OSCCTRL_DPLLPRESC_PRESC_Pos))
#define   OSCCTRL_DPLLPRESC_PRESC_DIV1_Val    _U_(0x0)                                             /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 1  */
#define   OSCCTRL_DPLLPRESC_PRESC_DIV2_Val    _U_(0x1)                                             /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 2  */
#define   OSCCTRL_DPLLPRESC_PRESC_DIV4_Val    _U_(0x2)                                             /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 4  */
#define OSCCTRL_DPLLPRESC_PRESC_DIV1          (OSCCTRL_DPLLPRESC_PRESC_DIV1_Val << OSCCTRL_DPLLPRESC_PRESC_Pos) /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 1 Position  */
#define OSCCTRL_DPLLPRESC_PRESC_DIV2          (OSCCTRL_DPLLPRESC_PRESC_DIV2_Val << OSCCTRL_DPLLPRESC_PRESC_Pos) /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 2 Position  */
#define OSCCTRL_DPLLPRESC_PRESC_DIV4          (OSCCTRL_DPLLPRESC_PRESC_DIV4_Val << OSCCTRL_DPLLPRESC_PRESC_Pos) /**< (OSCCTRL_DPLLPRESC) DPLL output is divided by 4 Position  */
#define OSCCTRL_DPLLPRESC_Msk                 _U_(0x03)                                            /**< (OSCCTRL_DPLLPRESC) Register Mask  */


/* -------- OSCCTRL_DPLLSYNCBUSY : (OSCCTRL Offset: 0x38) ( R/ 8) DPLL Synchronization Busy -------- */
#define OSCCTRL_DPLLSYNCBUSY_RESETVALUE       _U_(0x00)                                            /**<  (OSCCTRL_DPLLSYNCBUSY) DPLL Synchronization Busy  Reset Value */

#define OSCCTRL_DPLLSYNCBUSY_ENABLE_Pos       _U_(1)                                               /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Enable Synchronization Status Position */
#define OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk       (_U_(0x1) << OSCCTRL_DPLLSYNCBUSY_ENABLE_Pos)        /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Enable Synchronization Status Mask */
#define OSCCTRL_DPLLSYNCBUSY_ENABLE(value)    (OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk & ((value) << OSCCTRL_DPLLSYNCBUSY_ENABLE_Pos))
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Pos    _U_(2)                                               /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Ratio Synchronization Status Position */
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Msk    (_U_(0x1) << OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Pos)     /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Ratio Synchronization Status Mask */
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO(value) (OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Msk & ((value) << OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Pos))
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Pos    _U_(3)                                               /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Prescaler Synchronization Status Position */
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Msk    (_U_(0x1) << OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Pos)     /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Prescaler Synchronization Status Mask */
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC(value) (OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Msk & ((value) << OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Pos))
#define OSCCTRL_DPLLSYNCBUSY_Msk              _U_(0x0E)                                            /**< (OSCCTRL_DPLLSYNCBUSY) Register Mask  */


/* -------- OSCCTRL_DPLLSTATUS : (OSCCTRL Offset: 0x3C) ( R/ 8) DPLL Status -------- */
#define OSCCTRL_DPLLSTATUS_RESETVALUE         _U_(0x00)                                            /**<  (OSCCTRL_DPLLSTATUS) DPLL Status  Reset Value */

#define OSCCTRL_DPLLSTATUS_LOCK_Pos           _U_(0)                                               /**< (OSCCTRL_DPLLSTATUS) DPLL Lock Status Position */
#define OSCCTRL_DPLLSTATUS_LOCK_Msk           (_U_(0x1) << OSCCTRL_DPLLSTATUS_LOCK_Pos)            /**< (OSCCTRL_DPLLSTATUS) DPLL Lock Status Mask */
#define OSCCTRL_DPLLSTATUS_LOCK(value)        (OSCCTRL_DPLLSTATUS_LOCK_Msk & ((value) << OSCCTRL_DPLLSTATUS_LOCK_Pos))
#define OSCCTRL_DPLLSTATUS_CLKRDY_Pos         _U_(1)                                               /**< (OSCCTRL_DPLLSTATUS) DPLL Clock Ready Position */
#define OSCCTRL_DPLLSTATUS_CLKRDY_Msk         (_U_(0x1) << OSCCTRL_DPLLSTATUS_CLKRDY_Pos)          /**< (OSCCTRL_DPLLSTATUS) DPLL Clock Ready Mask */
#define OSCCTRL_DPLLSTATUS_CLKRDY(value)      (OSCCTRL_DPLLSTATUS_CLKRDY_Msk & ((value) << OSCCTRL_DPLLSTATUS_CLKRDY_Pos))
#define OSCCTRL_DPLLSTATUS_Msk                _U_(0x03)                                            /**< (OSCCTRL_DPLLSTATUS) Register Mask  */


/** \brief OSCCTRL register offsets definitions */
#define OSCCTRL_INTENCLR_REG_OFST      (0x00)              /**< (OSCCTRL_INTENCLR) Interrupt Enable Clear Offset */
#define OSCCTRL_INTENSET_REG_OFST      (0x04)              /**< (OSCCTRL_INTENSET) Interrupt Enable Set Offset */
#define OSCCTRL_INTFLAG_REG_OFST       (0x08)              /**< (OSCCTRL_INTFLAG) Interrupt Flag Status and Clear Offset */
#define OSCCTRL_STATUS_REG_OFST        (0x0C)              /**< (OSCCTRL_STATUS) Power and Clocks Status Offset */
#define OSCCTRL_XOSCCTRL_REG_OFST      (0x10)              /**< (OSCCTRL_XOSCCTRL) External Multipurpose Crystal Oscillator (XOSC) Control Offset */
#define OSCCTRL_OSC16MCTRL_REG_OFST    (0x14)              /**< (OSCCTRL_OSC16MCTRL) 16MHz Internal Oscillator (OSC16M) Control Offset */
#define OSCCTRL_DFLLCTRL_REG_OFST      (0x18)              /**< (OSCCTRL_DFLLCTRL) DFLL48M Control Offset */
#define OSCCTRL_DFLLVAL_REG_OFST       (0x1C)              /**< (OSCCTRL_DFLLVAL) DFLL48M Value Offset */
#define OSCCTRL_DFLLMUL_REG_OFST       (0x20)              /**< (OSCCTRL_DFLLMUL) DFLL48M Multiplier Offset */
#define OSCCTRL_DFLLSYNC_REG_OFST      (0x24)              /**< (OSCCTRL_DFLLSYNC) DFLL48M Synchronization Offset */
#define OSCCTRL_DPLLCTRLA_REG_OFST     (0x28)              /**< (OSCCTRL_DPLLCTRLA) DPLL Control Offset */
#define OSCCTRL_DPLLRATIO_REG_OFST     (0x2C)              /**< (OSCCTRL_DPLLRATIO) DPLL Ratio Control Offset */
#define OSCCTRL_DPLLCTRLB_REG_OFST     (0x30)              /**< (OSCCTRL_DPLLCTRLB) Digital Core Configuration Offset */
#define OSCCTRL_DPLLPRESC_REG_OFST     (0x34)              /**< (OSCCTRL_DPLLPRESC) DPLL Prescaler Offset */
#define OSCCTRL_DPLLSYNCBUSY_REG_OFST  (0x38)              /**< (OSCCTRL_DPLLSYNCBUSY) DPLL Synchronization Busy Offset */
#define OSCCTRL_DPLLSTATUS_REG_OFST    (0x3C)              /**< (OSCCTRL_DPLLSTATUS) DPLL Status Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief OSCCTRL register API structure */
typedef struct
{  /* Oscillators Control */
  __IO  uint32_t                       OSCCTRL_INTENCLR;   /**< Offset: 0x00 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       OSCCTRL_INTENSET;   /**< Offset: 0x04 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       OSCCTRL_INTFLAG;    /**< Offset: 0x08 (R/W  32) Interrupt Flag Status and Clear */
  __I   uint32_t                       OSCCTRL_STATUS;     /**< Offset: 0x0C (R/   32) Power and Clocks Status */
  __IO  uint16_t                       OSCCTRL_XOSCCTRL;   /**< Offset: 0x10 (R/W  16) External Multipurpose Crystal Oscillator (XOSC) Control */
  __I   uint8_t                        Reserved1[0x02];
  __IO  uint8_t                        OSCCTRL_OSC16MCTRL; /**< Offset: 0x14 (R/W  8) 16MHz Internal Oscillator (OSC16M) Control */
  __I   uint8_t                        Reserved2[0x03];
  __IO  uint16_t                       OSCCTRL_DFLLCTRL;   /**< Offset: 0x18 (R/W  16) DFLL48M Control */
  __I   uint8_t                        Reserved3[0x02];
  __IO  uint32_t                       OSCCTRL_DFLLVAL;    /**< Offset: 0x1C (R/W  32) DFLL48M Value */
  __IO  uint32_t                       OSCCTRL_DFLLMUL;    /**< Offset: 0x20 (R/W  32) DFLL48M Multiplier */
  __IO  uint8_t                        OSCCTRL_DFLLSYNC;   /**< Offset: 0x24 (R/W  8) DFLL48M Synchronization */
  __I   uint8_t                        Reserved4[0x03];
  __IO  uint8_t                        OSCCTRL_DPLLCTRLA;  /**< Offset: 0x28 (R/W  8) DPLL Control */
  __I   uint8_t                        Reserved5[0x03];
  __IO  uint32_t                       OSCCTRL_DPLLRATIO;  /**< Offset: 0x2C (R/W  32) DPLL Ratio Control */
  __IO  uint32_t                       OSCCTRL_DPLLCTRLB;  /**< Offset: 0x30 (R/W  32) Digital Core Configuration */
  __IO  uint8_t                        OSCCTRL_DPLLPRESC;  /**< Offset: 0x34 (R/W  8) DPLL Prescaler */
  __I   uint8_t                        Reserved6[0x03];
  __I   uint8_t                        OSCCTRL_DPLLSYNCBUSY; /**< Offset: 0x38 (R/   8) DPLL Synchronization Busy */
  __I   uint8_t                        Reserved7[0x03];
  __I   uint8_t                        OSCCTRL_DPLLSTATUS; /**< Offset: 0x3C (R/   8) DPLL Status */
} oscctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAML21_OSCCTRL_COMPONENT_H_ */
