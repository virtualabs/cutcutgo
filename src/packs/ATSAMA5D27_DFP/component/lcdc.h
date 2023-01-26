/*
 * Component description for LCDC
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
#ifndef _SAMA5D2_LCDC_COMPONENT_H_
#define _SAMA5D2_LCDC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR LCDC                                         */
/* ************************************************************************** */

/* -------- LCDC_LCDCFG0 : (LCDC Offset: 0x00) (R/W 32) LCD Controller Configuration Register 0 -------- */
#define LCDC_LCDCFG0_CLKPOL_Pos               _U_(0)                                               /**< (LCDC_LCDCFG0) LCD Controller Clock Polarity Position */
#define LCDC_LCDCFG0_CLKPOL_Msk               (_U_(0x1) << LCDC_LCDCFG0_CLKPOL_Pos)                /**< (LCDC_LCDCFG0) LCD Controller Clock Polarity Mask */
#define LCDC_LCDCFG0_CLKPOL(value)            (LCDC_LCDCFG0_CLKPOL_Msk & ((value) << LCDC_LCDCFG0_CLKPOL_Pos))
#define LCDC_LCDCFG0_CLKSEL_Pos               _U_(2)                                               /**< (LCDC_LCDCFG0) LCD Controller Clock Source Selection Position */
#define LCDC_LCDCFG0_CLKSEL_Msk               (_U_(0x1) << LCDC_LCDCFG0_CLKSEL_Pos)                /**< (LCDC_LCDCFG0) LCD Controller Clock Source Selection Mask */
#define LCDC_LCDCFG0_CLKSEL(value)            (LCDC_LCDCFG0_CLKSEL_Msk & ((value) << LCDC_LCDCFG0_CLKSEL_Pos))
#define LCDC_LCDCFG0_CLKPWMSEL_Pos            _U_(3)                                               /**< (LCDC_LCDCFG0) LCD Controller PWM Clock Source Selection Position */
#define LCDC_LCDCFG0_CLKPWMSEL_Msk            (_U_(0x1) << LCDC_LCDCFG0_CLKPWMSEL_Pos)             /**< (LCDC_LCDCFG0) LCD Controller PWM Clock Source Selection Mask */
#define LCDC_LCDCFG0_CLKPWMSEL(value)         (LCDC_LCDCFG0_CLKPWMSEL_Msk & ((value) << LCDC_LCDCFG0_CLKPWMSEL_Pos))
#define LCDC_LCDCFG0_CGDISBASE_Pos            _U_(8)                                               /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Base Layer Position */
#define LCDC_LCDCFG0_CGDISBASE_Msk            (_U_(0x1) << LCDC_LCDCFG0_CGDISBASE_Pos)             /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Base Layer Mask */
#define LCDC_LCDCFG0_CGDISBASE(value)         (LCDC_LCDCFG0_CGDISBASE_Msk & ((value) << LCDC_LCDCFG0_CGDISBASE_Pos))
#define LCDC_LCDCFG0_CGDISOVR1_Pos            _U_(9)                                               /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Overlay 1 Layer Position */
#define LCDC_LCDCFG0_CGDISOVR1_Msk            (_U_(0x1) << LCDC_LCDCFG0_CGDISOVR1_Pos)             /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Overlay 1 Layer Mask */
#define LCDC_LCDCFG0_CGDISOVR1(value)         (LCDC_LCDCFG0_CGDISOVR1_Msk & ((value) << LCDC_LCDCFG0_CGDISOVR1_Pos))
#define LCDC_LCDCFG0_CGDISOVR2_Pos            _U_(10)                                              /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Overlay 2 Layer Position */
#define LCDC_LCDCFG0_CGDISOVR2_Msk            (_U_(0x1) << LCDC_LCDCFG0_CGDISOVR2_Pos)             /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Overlay 2 Layer Mask */
#define LCDC_LCDCFG0_CGDISOVR2(value)         (LCDC_LCDCFG0_CGDISOVR2_Msk & ((value) << LCDC_LCDCFG0_CGDISOVR2_Pos))
#define LCDC_LCDCFG0_CGDISHEO_Pos             _U_(11)                                              /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the High-End Overlay Position */
#define LCDC_LCDCFG0_CGDISHEO_Msk             (_U_(0x1) << LCDC_LCDCFG0_CGDISHEO_Pos)              /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the High-End Overlay Mask */
#define LCDC_LCDCFG0_CGDISHEO(value)          (LCDC_LCDCFG0_CGDISHEO_Msk & ((value) << LCDC_LCDCFG0_CGDISHEO_Pos))
#define LCDC_LCDCFG0_CGDISPP_Pos              _U_(13)                                              /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Post Processing Layer Position */
#define LCDC_LCDCFG0_CGDISPP_Msk              (_U_(0x1) << LCDC_LCDCFG0_CGDISPP_Pos)               /**< (LCDC_LCDCFG0) Clock Gating Disable Control for the Post Processing Layer Mask */
#define LCDC_LCDCFG0_CGDISPP(value)           (LCDC_LCDCFG0_CGDISPP_Msk & ((value) << LCDC_LCDCFG0_CGDISPP_Pos))
#define LCDC_LCDCFG0_CLKDIV_Pos               _U_(16)                                              /**< (LCDC_LCDCFG0) LCD Controller Clock Divider Position */
#define LCDC_LCDCFG0_CLKDIV_Msk               (_U_(0xFF) << LCDC_LCDCFG0_CLKDIV_Pos)               /**< (LCDC_LCDCFG0) LCD Controller Clock Divider Mask */
#define LCDC_LCDCFG0_CLKDIV(value)            (LCDC_LCDCFG0_CLKDIV_Msk & ((value) << LCDC_LCDCFG0_CLKDIV_Pos))
#define LCDC_LCDCFG0_Msk                      _U_(0x00FF2F0D)                                      /**< (LCDC_LCDCFG0) Register Mask  */

#define LCDC_LCDCFG0_CGDISOVR_Pos             _U_(9)                                               /**< (LCDC_LCDCFG0 Position) Clock Gating Disable Control for the Overlay x Layer */
#define LCDC_LCDCFG0_CGDISOVR_Msk             (_U_(0x3) << LCDC_LCDCFG0_CGDISOVR_Pos)              /**< (LCDC_LCDCFG0 Mask) CGDISOVR */
#define LCDC_LCDCFG0_CGDISOVR(value)          (LCDC_LCDCFG0_CGDISOVR_Msk & ((value) << LCDC_LCDCFG0_CGDISOVR_Pos)) 

/* -------- LCDC_LCDCFG1 : (LCDC Offset: 0x04) (R/W 32) LCD Controller Configuration Register 1 -------- */
#define LCDC_LCDCFG1_HSPW_Pos                 _U_(0)                                               /**< (LCDC_LCDCFG1) Horizontal Synchronization Pulse Width Position */
#define LCDC_LCDCFG1_HSPW_Msk                 (_U_(0x3FF) << LCDC_LCDCFG1_HSPW_Pos)                /**< (LCDC_LCDCFG1) Horizontal Synchronization Pulse Width Mask */
#define LCDC_LCDCFG1_HSPW(value)              (LCDC_LCDCFG1_HSPW_Msk & ((value) << LCDC_LCDCFG1_HSPW_Pos))
#define LCDC_LCDCFG1_VSPW_Pos                 _U_(16)                                              /**< (LCDC_LCDCFG1) Vertical Synchronization Pulse Width Position */
#define LCDC_LCDCFG1_VSPW_Msk                 (_U_(0x3FF) << LCDC_LCDCFG1_VSPW_Pos)                /**< (LCDC_LCDCFG1) Vertical Synchronization Pulse Width Mask */
#define LCDC_LCDCFG1_VSPW(value)              (LCDC_LCDCFG1_VSPW_Msk & ((value) << LCDC_LCDCFG1_VSPW_Pos))
#define LCDC_LCDCFG1_Msk                      _U_(0x03FF03FF)                                      /**< (LCDC_LCDCFG1) Register Mask  */


/* -------- LCDC_LCDCFG2 : (LCDC Offset: 0x08) (R/W 32) LCD Controller Configuration Register 2 -------- */
#define LCDC_LCDCFG2_VFPW_Pos                 _U_(0)                                               /**< (LCDC_LCDCFG2) Vertical Front Porch Width Position */
#define LCDC_LCDCFG2_VFPW_Msk                 (_U_(0x3FF) << LCDC_LCDCFG2_VFPW_Pos)                /**< (LCDC_LCDCFG2) Vertical Front Porch Width Mask */
#define LCDC_LCDCFG2_VFPW(value)              (LCDC_LCDCFG2_VFPW_Msk & ((value) << LCDC_LCDCFG2_VFPW_Pos))
#define LCDC_LCDCFG2_VBPW_Pos                 _U_(16)                                              /**< (LCDC_LCDCFG2) Vertical Back Porch Width Position */
#define LCDC_LCDCFG2_VBPW_Msk                 (_U_(0x3FF) << LCDC_LCDCFG2_VBPW_Pos)                /**< (LCDC_LCDCFG2) Vertical Back Porch Width Mask */
#define LCDC_LCDCFG2_VBPW(value)              (LCDC_LCDCFG2_VBPW_Msk & ((value) << LCDC_LCDCFG2_VBPW_Pos))
#define LCDC_LCDCFG2_Msk                      _U_(0x03FF03FF)                                      /**< (LCDC_LCDCFG2) Register Mask  */


/* -------- LCDC_LCDCFG3 : (LCDC Offset: 0x0C) (R/W 32) LCD Controller Configuration Register 3 -------- */
#define LCDC_LCDCFG3_HFPW_Pos                 _U_(0)                                               /**< (LCDC_LCDCFG3) Horizontal Front Porch Width Position */
#define LCDC_LCDCFG3_HFPW_Msk                 (_U_(0x3FF) << LCDC_LCDCFG3_HFPW_Pos)                /**< (LCDC_LCDCFG3) Horizontal Front Porch Width Mask */
#define LCDC_LCDCFG3_HFPW(value)              (LCDC_LCDCFG3_HFPW_Msk & ((value) << LCDC_LCDCFG3_HFPW_Pos))
#define LCDC_LCDCFG3_HBPW_Pos                 _U_(16)                                              /**< (LCDC_LCDCFG3) Horizontal Back Porch Width Position */
#define LCDC_LCDCFG3_HBPW_Msk                 (_U_(0x3FF) << LCDC_LCDCFG3_HBPW_Pos)                /**< (LCDC_LCDCFG3) Horizontal Back Porch Width Mask */
#define LCDC_LCDCFG3_HBPW(value)              (LCDC_LCDCFG3_HBPW_Msk & ((value) << LCDC_LCDCFG3_HBPW_Pos))
#define LCDC_LCDCFG3_Msk                      _U_(0x03FF03FF)                                      /**< (LCDC_LCDCFG3) Register Mask  */


/* -------- LCDC_LCDCFG4 : (LCDC Offset: 0x10) (R/W 32) LCD Controller Configuration Register 4 -------- */
#define LCDC_LCDCFG4_PPL_Pos                  _U_(0)                                               /**< (LCDC_LCDCFG4) Number of Pixels Per Line Position */
#define LCDC_LCDCFG4_PPL_Msk                  (_U_(0x7FF) << LCDC_LCDCFG4_PPL_Pos)                 /**< (LCDC_LCDCFG4) Number of Pixels Per Line Mask */
#define LCDC_LCDCFG4_PPL(value)               (LCDC_LCDCFG4_PPL_Msk & ((value) << LCDC_LCDCFG4_PPL_Pos))
#define LCDC_LCDCFG4_RPF_Pos                  _U_(16)                                              /**< (LCDC_LCDCFG4) Number of Active Row Per Frame Position */
#define LCDC_LCDCFG4_RPF_Msk                  (_U_(0x7FF) << LCDC_LCDCFG4_RPF_Pos)                 /**< (LCDC_LCDCFG4) Number of Active Row Per Frame Mask */
#define LCDC_LCDCFG4_RPF(value)               (LCDC_LCDCFG4_RPF_Msk & ((value) << LCDC_LCDCFG4_RPF_Pos))
#define LCDC_LCDCFG4_Msk                      _U_(0x07FF07FF)                                      /**< (LCDC_LCDCFG4) Register Mask  */


/* -------- LCDC_LCDCFG5 : (LCDC Offset: 0x14) (R/W 32) LCD Controller Configuration Register 5 -------- */
#define LCDC_LCDCFG5_HSPOL_Pos                _U_(0)                                               /**< (LCDC_LCDCFG5) Horizontal Synchronization Pulse Polarity Position */
#define LCDC_LCDCFG5_HSPOL_Msk                (_U_(0x1) << LCDC_LCDCFG5_HSPOL_Pos)                 /**< (LCDC_LCDCFG5) Horizontal Synchronization Pulse Polarity Mask */
#define LCDC_LCDCFG5_HSPOL(value)             (LCDC_LCDCFG5_HSPOL_Msk & ((value) << LCDC_LCDCFG5_HSPOL_Pos))
#define LCDC_LCDCFG5_VSPOL_Pos                _U_(1)                                               /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse Polarity Position */
#define LCDC_LCDCFG5_VSPOL_Msk                (_U_(0x1) << LCDC_LCDCFG5_VSPOL_Pos)                 /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse Polarity Mask */
#define LCDC_LCDCFG5_VSPOL(value)             (LCDC_LCDCFG5_VSPOL_Msk & ((value) << LCDC_LCDCFG5_VSPOL_Pos))
#define LCDC_LCDCFG5_VSPDLYS_Pos              _U_(2)                                               /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse Start Position */
#define LCDC_LCDCFG5_VSPDLYS_Msk              (_U_(0x1) << LCDC_LCDCFG5_VSPDLYS_Pos)               /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse Start Mask */
#define LCDC_LCDCFG5_VSPDLYS(value)           (LCDC_LCDCFG5_VSPDLYS_Msk & ((value) << LCDC_LCDCFG5_VSPDLYS_Pos))
#define LCDC_LCDCFG5_VSPDLYE_Pos              _U_(3)                                               /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse End Position */
#define LCDC_LCDCFG5_VSPDLYE_Msk              (_U_(0x1) << LCDC_LCDCFG5_VSPDLYE_Pos)               /**< (LCDC_LCDCFG5) Vertical Synchronization Pulse End Mask */
#define LCDC_LCDCFG5_VSPDLYE(value)           (LCDC_LCDCFG5_VSPDLYE_Msk & ((value) << LCDC_LCDCFG5_VSPDLYE_Pos))
#define LCDC_LCDCFG5_DISPPOL_Pos              _U_(4)                                               /**< (LCDC_LCDCFG5) Display Signal Polarity Position */
#define LCDC_LCDCFG5_DISPPOL_Msk              (_U_(0x1) << LCDC_LCDCFG5_DISPPOL_Pos)               /**< (LCDC_LCDCFG5) Display Signal Polarity Mask */
#define LCDC_LCDCFG5_DISPPOL(value)           (LCDC_LCDCFG5_DISPPOL_Msk & ((value) << LCDC_LCDCFG5_DISPPOL_Pos))
#define LCDC_LCDCFG5_DITHER_Pos               _U_(6)                                               /**< (LCDC_LCDCFG5) LCD Controller Dithering Position */
#define LCDC_LCDCFG5_DITHER_Msk               (_U_(0x1) << LCDC_LCDCFG5_DITHER_Pos)                /**< (LCDC_LCDCFG5) LCD Controller Dithering Mask */
#define LCDC_LCDCFG5_DITHER(value)            (LCDC_LCDCFG5_DITHER_Msk & ((value) << LCDC_LCDCFG5_DITHER_Pos))
#define LCDC_LCDCFG5_DISPDLY_Pos              _U_(7)                                               /**< (LCDC_LCDCFG5) LCD Controller Display Power Signal Synchronization Position */
#define LCDC_LCDCFG5_DISPDLY_Msk              (_U_(0x1) << LCDC_LCDCFG5_DISPDLY_Pos)               /**< (LCDC_LCDCFG5) LCD Controller Display Power Signal Synchronization Mask */
#define LCDC_LCDCFG5_DISPDLY(value)           (LCDC_LCDCFG5_DISPDLY_Msk & ((value) << LCDC_LCDCFG5_DISPDLY_Pos))
#define LCDC_LCDCFG5_MODE_Pos                 _U_(8)                                               /**< (LCDC_LCDCFG5) LCD Controller Output Mode Position */
#define LCDC_LCDCFG5_MODE_Msk                 (_U_(0x3) << LCDC_LCDCFG5_MODE_Pos)                  /**< (LCDC_LCDCFG5) LCD Controller Output Mode Mask */
#define LCDC_LCDCFG5_MODE(value)              (LCDC_LCDCFG5_MODE_Msk & ((value) << LCDC_LCDCFG5_MODE_Pos))
#define   LCDC_LCDCFG5_MODE_OUTPUT_12BPP_Val  _U_(0x0)                                             /**< (LCDC_LCDCFG5) LCD Output mode is set to 12 bits per pixel  */
#define   LCDC_LCDCFG5_MODE_OUTPUT_16BPP_Val  _U_(0x1)                                             /**< (LCDC_LCDCFG5) LCD Output mode is set to 16 bits per pixel  */
#define   LCDC_LCDCFG5_MODE_OUTPUT_18BPP_Val  _U_(0x2)                                             /**< (LCDC_LCDCFG5) LCD Output mode is set to 18 bits per pixel  */
#define   LCDC_LCDCFG5_MODE_OUTPUT_24BPP_Val  _U_(0x3)                                             /**< (LCDC_LCDCFG5) LCD Output mode is set to 24 bits per pixel  */
#define LCDC_LCDCFG5_MODE_OUTPUT_12BPP        (LCDC_LCDCFG5_MODE_OUTPUT_12BPP_Val << LCDC_LCDCFG5_MODE_Pos) /**< (LCDC_LCDCFG5) LCD Output mode is set to 12 bits per pixel Position  */
#define LCDC_LCDCFG5_MODE_OUTPUT_16BPP        (LCDC_LCDCFG5_MODE_OUTPUT_16BPP_Val << LCDC_LCDCFG5_MODE_Pos) /**< (LCDC_LCDCFG5) LCD Output mode is set to 16 bits per pixel Position  */
#define LCDC_LCDCFG5_MODE_OUTPUT_18BPP        (LCDC_LCDCFG5_MODE_OUTPUT_18BPP_Val << LCDC_LCDCFG5_MODE_Pos) /**< (LCDC_LCDCFG5) LCD Output mode is set to 18 bits per pixel Position  */
#define LCDC_LCDCFG5_MODE_OUTPUT_24BPP        (LCDC_LCDCFG5_MODE_OUTPUT_24BPP_Val << LCDC_LCDCFG5_MODE_Pos) /**< (LCDC_LCDCFG5) LCD Output mode is set to 24 bits per pixel Position  */
#define LCDC_LCDCFG5_PP_Pos                   _U_(10)                                              /**< (LCDC_LCDCFG5) Post Processing Enable Position */
#define LCDC_LCDCFG5_PP_Msk                   (_U_(0x1) << LCDC_LCDCFG5_PP_Pos)                    /**< (LCDC_LCDCFG5) Post Processing Enable Mask */
#define LCDC_LCDCFG5_PP(value)                (LCDC_LCDCFG5_PP_Msk & ((value) << LCDC_LCDCFG5_PP_Pos))
#define LCDC_LCDCFG5_VSPSU_Pos                _U_(12)                                              /**< (LCDC_LCDCFG5) LCD Controller Vertical synchronization Pulse Setup Configuration Position */
#define LCDC_LCDCFG5_VSPSU_Msk                (_U_(0x1) << LCDC_LCDCFG5_VSPSU_Pos)                 /**< (LCDC_LCDCFG5) LCD Controller Vertical synchronization Pulse Setup Configuration Mask */
#define LCDC_LCDCFG5_VSPSU(value)             (LCDC_LCDCFG5_VSPSU_Msk & ((value) << LCDC_LCDCFG5_VSPSU_Pos))
#define LCDC_LCDCFG5_VSPHO_Pos                _U_(13)                                              /**< (LCDC_LCDCFG5) LCD Controller Vertical synchronization Pulse Hold Configuration Position */
#define LCDC_LCDCFG5_VSPHO_Msk                (_U_(0x1) << LCDC_LCDCFG5_VSPHO_Pos)                 /**< (LCDC_LCDCFG5) LCD Controller Vertical synchronization Pulse Hold Configuration Mask */
#define LCDC_LCDCFG5_VSPHO(value)             (LCDC_LCDCFG5_VSPHO_Msk & ((value) << LCDC_LCDCFG5_VSPHO_Pos))
#define LCDC_LCDCFG5_GUARDTIME_Pos            _U_(16)                                              /**< (LCDC_LCDCFG5) LCD DISPLAY Guard Time Position */
#define LCDC_LCDCFG5_GUARDTIME_Msk            (_U_(0xFF) << LCDC_LCDCFG5_GUARDTIME_Pos)            /**< (LCDC_LCDCFG5) LCD DISPLAY Guard Time Mask */
#define LCDC_LCDCFG5_GUARDTIME(value)         (LCDC_LCDCFG5_GUARDTIME_Msk & ((value) << LCDC_LCDCFG5_GUARDTIME_Pos))
#define LCDC_LCDCFG5_Msk                      _U_(0x00FF37DF)                                      /**< (LCDC_LCDCFG5) Register Mask  */


/* -------- LCDC_LCDCFG6 : (LCDC Offset: 0x18) (R/W 32) LCD Controller Configuration Register 6 -------- */
#define LCDC_LCDCFG6_PWMPS_Pos                _U_(0)                                               /**< (LCDC_LCDCFG6) PWM Clock Prescaler Position */
#define LCDC_LCDCFG6_PWMPS_Msk                (_U_(0x7) << LCDC_LCDCFG6_PWMPS_Pos)                 /**< (LCDC_LCDCFG6) PWM Clock Prescaler Mask */
#define LCDC_LCDCFG6_PWMPS(value)             (LCDC_LCDCFG6_PWMPS_Msk & ((value) << LCDC_LCDCFG6_PWMPS_Pos))
#define   LCDC_LCDCFG6_PWMPS_DIV_1_Val        _U_(0x0)                                             /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK  */
#define   LCDC_LCDCFG6_PWMPS_DIV_2_Val        _U_(0x1)                                             /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/2  */
#define   LCDC_LCDCFG6_PWMPS_DIV_4_Val        _U_(0x2)                                             /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/4  */
#define   LCDC_LCDCFG6_PWMPS_DIV_8_Val        _U_(0x3)                                             /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/8  */
#define   LCDC_LCDCFG6_PWMPS_DIV_16_Val       _U_(0x4)                                             /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/16  */
#define   LCDC_LCDCFG6_PWMPS_DIV_32_Val       _U_(0x5)                                             /**< (LCDC_LCDCFG6) The counter advances at a of rate fCOUNTER = fPWM_SELECTED_CLOCK/32  */
#define   LCDC_LCDCFG6_PWMPS_DIV_64_Val       _U_(0x6)                                             /**< (LCDC_LCDCFG6) The counter advances at a of rate fCOUNTER = fPWM_SELECTED_CLOCK/64  */
#define LCDC_LCDCFG6_PWMPS_DIV_1              (LCDC_LCDCFG6_PWMPS_DIV_1_Val << LCDC_LCDCFG6_PWMPS_Pos) /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_2              (LCDC_LCDCFG6_PWMPS_DIV_2_Val << LCDC_LCDCFG6_PWMPS_Pos) /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/2 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_4              (LCDC_LCDCFG6_PWMPS_DIV_4_Val << LCDC_LCDCFG6_PWMPS_Pos) /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/4 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_8              (LCDC_LCDCFG6_PWMPS_DIV_8_Val << LCDC_LCDCFG6_PWMPS_Pos) /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/8 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_16             (LCDC_LCDCFG6_PWMPS_DIV_16_Val << LCDC_LCDCFG6_PWMPS_Pos) /**< (LCDC_LCDCFG6) The counter advances at a rate of fCOUNTER = fPWM_SELECTED_CLOCK/16 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_32             (LCDC_LCDCFG6_PWMPS_DIV_32_Val << LCDC_LCDCFG6_PWMPS_Pos) /**< (LCDC_LCDCFG6) The counter advances at a of rate fCOUNTER = fPWM_SELECTED_CLOCK/32 Position  */
#define LCDC_LCDCFG6_PWMPS_DIV_64             (LCDC_LCDCFG6_PWMPS_DIV_64_Val << LCDC_LCDCFG6_PWMPS_Pos) /**< (LCDC_LCDCFG6) The counter advances at a of rate fCOUNTER = fPWM_SELECTED_CLOCK/64 Position  */
#define LCDC_LCDCFG6_PWMPOL_Pos               _U_(4)                                               /**< (LCDC_LCDCFG6) LCD Controller PWM Signal Polarity Position */
#define LCDC_LCDCFG6_PWMPOL_Msk               (_U_(0x1) << LCDC_LCDCFG6_PWMPOL_Pos)                /**< (LCDC_LCDCFG6) LCD Controller PWM Signal Polarity Mask */
#define LCDC_LCDCFG6_PWMPOL(value)            (LCDC_LCDCFG6_PWMPOL_Msk & ((value) << LCDC_LCDCFG6_PWMPOL_Pos))
#define LCDC_LCDCFG6_PWMCVAL_Pos              _U_(8)                                               /**< (LCDC_LCDCFG6) LCD Controller PWM Compare Value Position */
#define LCDC_LCDCFG6_PWMCVAL_Msk              (_U_(0xFF) << LCDC_LCDCFG6_PWMCVAL_Pos)              /**< (LCDC_LCDCFG6) LCD Controller PWM Compare Value Mask */
#define LCDC_LCDCFG6_PWMCVAL(value)           (LCDC_LCDCFG6_PWMCVAL_Msk & ((value) << LCDC_LCDCFG6_PWMCVAL_Pos))
#define LCDC_LCDCFG6_Msk                      _U_(0x0000FF17)                                      /**< (LCDC_LCDCFG6) Register Mask  */


/* -------- LCDC_LCDEN : (LCDC Offset: 0x20) ( /W 32) LCD Controller Enable Register -------- */
#define LCDC_LCDEN_CLKEN_Pos                  _U_(0)                                               /**< (LCDC_LCDEN) LCD Controller Pixel Clock Enable Position */
#define LCDC_LCDEN_CLKEN_Msk                  (_U_(0x1) << LCDC_LCDEN_CLKEN_Pos)                   /**< (LCDC_LCDEN) LCD Controller Pixel Clock Enable Mask */
#define LCDC_LCDEN_CLKEN(value)               (LCDC_LCDEN_CLKEN_Msk & ((value) << LCDC_LCDEN_CLKEN_Pos))
#define LCDC_LCDEN_SYNCEN_Pos                 _U_(1)                                               /**< (LCDC_LCDEN) LCD Controller Horizontal and Vertical Synchronization Enable Position */
#define LCDC_LCDEN_SYNCEN_Msk                 (_U_(0x1) << LCDC_LCDEN_SYNCEN_Pos)                  /**< (LCDC_LCDEN) LCD Controller Horizontal and Vertical Synchronization Enable Mask */
#define LCDC_LCDEN_SYNCEN(value)              (LCDC_LCDEN_SYNCEN_Msk & ((value) << LCDC_LCDEN_SYNCEN_Pos))
#define LCDC_LCDEN_DISPEN_Pos                 _U_(2)                                               /**< (LCDC_LCDEN) LCD Controller DISP Signal Enable Position */
#define LCDC_LCDEN_DISPEN_Msk                 (_U_(0x1) << LCDC_LCDEN_DISPEN_Pos)                  /**< (LCDC_LCDEN) LCD Controller DISP Signal Enable Mask */
#define LCDC_LCDEN_DISPEN(value)              (LCDC_LCDEN_DISPEN_Msk & ((value) << LCDC_LCDEN_DISPEN_Pos))
#define LCDC_LCDEN_PWMEN_Pos                  _U_(3)                                               /**< (LCDC_LCDEN) LCD Controller Pulse Width Modulation Enable Position */
#define LCDC_LCDEN_PWMEN_Msk                  (_U_(0x1) << LCDC_LCDEN_PWMEN_Pos)                   /**< (LCDC_LCDEN) LCD Controller Pulse Width Modulation Enable Mask */
#define LCDC_LCDEN_PWMEN(value)               (LCDC_LCDEN_PWMEN_Msk & ((value) << LCDC_LCDEN_PWMEN_Pos))
#define LCDC_LCDEN_Msk                        _U_(0x0000000F)                                      /**< (LCDC_LCDEN) Register Mask  */


/* -------- LCDC_LCDDIS : (LCDC Offset: 0x24) ( /W 32) LCD Controller Disable Register -------- */
#define LCDC_LCDDIS_CLKDIS_Pos                _U_(0)                                               /**< (LCDC_LCDDIS) LCD Controller Pixel Clock Disable Position */
#define LCDC_LCDDIS_CLKDIS_Msk                (_U_(0x1) << LCDC_LCDDIS_CLKDIS_Pos)                 /**< (LCDC_LCDDIS) LCD Controller Pixel Clock Disable Mask */
#define LCDC_LCDDIS_CLKDIS(value)             (LCDC_LCDDIS_CLKDIS_Msk & ((value) << LCDC_LCDDIS_CLKDIS_Pos))
#define LCDC_LCDDIS_SYNCDIS_Pos               _U_(1)                                               /**< (LCDC_LCDDIS) LCD Controller Horizontal and Vertical Synchronization Disable Position */
#define LCDC_LCDDIS_SYNCDIS_Msk               (_U_(0x1) << LCDC_LCDDIS_SYNCDIS_Pos)                /**< (LCDC_LCDDIS) LCD Controller Horizontal and Vertical Synchronization Disable Mask */
#define LCDC_LCDDIS_SYNCDIS(value)            (LCDC_LCDDIS_SYNCDIS_Msk & ((value) << LCDC_LCDDIS_SYNCDIS_Pos))
#define LCDC_LCDDIS_DISPDIS_Pos               _U_(2)                                               /**< (LCDC_LCDDIS) LCD Controller DISP Signal Disable Position */
#define LCDC_LCDDIS_DISPDIS_Msk               (_U_(0x1) << LCDC_LCDDIS_DISPDIS_Pos)                /**< (LCDC_LCDDIS) LCD Controller DISP Signal Disable Mask */
#define LCDC_LCDDIS_DISPDIS(value)            (LCDC_LCDDIS_DISPDIS_Msk & ((value) << LCDC_LCDDIS_DISPDIS_Pos))
#define LCDC_LCDDIS_PWMDIS_Pos                _U_(3)                                               /**< (LCDC_LCDDIS) LCD Controller Pulse Width Modulation Disable Position */
#define LCDC_LCDDIS_PWMDIS_Msk                (_U_(0x1) << LCDC_LCDDIS_PWMDIS_Pos)                 /**< (LCDC_LCDDIS) LCD Controller Pulse Width Modulation Disable Mask */
#define LCDC_LCDDIS_PWMDIS(value)             (LCDC_LCDDIS_PWMDIS_Msk & ((value) << LCDC_LCDDIS_PWMDIS_Pos))
#define LCDC_LCDDIS_CLKRST_Pos                _U_(8)                                               /**< (LCDC_LCDDIS) LCD Controller Clock Reset Position */
#define LCDC_LCDDIS_CLKRST_Msk                (_U_(0x1) << LCDC_LCDDIS_CLKRST_Pos)                 /**< (LCDC_LCDDIS) LCD Controller Clock Reset Mask */
#define LCDC_LCDDIS_CLKRST(value)             (LCDC_LCDDIS_CLKRST_Msk & ((value) << LCDC_LCDDIS_CLKRST_Pos))
#define LCDC_LCDDIS_SYNCRST_Pos               _U_(9)                                               /**< (LCDC_LCDDIS) LCD Controller Horizontal and Vertical Synchronization Reset Position */
#define LCDC_LCDDIS_SYNCRST_Msk               (_U_(0x1) << LCDC_LCDDIS_SYNCRST_Pos)                /**< (LCDC_LCDDIS) LCD Controller Horizontal and Vertical Synchronization Reset Mask */
#define LCDC_LCDDIS_SYNCRST(value)            (LCDC_LCDDIS_SYNCRST_Msk & ((value) << LCDC_LCDDIS_SYNCRST_Pos))
#define LCDC_LCDDIS_DISPRST_Pos               _U_(10)                                              /**< (LCDC_LCDDIS) LCD Controller DISP Signal Reset Position */
#define LCDC_LCDDIS_DISPRST_Msk               (_U_(0x1) << LCDC_LCDDIS_DISPRST_Pos)                /**< (LCDC_LCDDIS) LCD Controller DISP Signal Reset Mask */
#define LCDC_LCDDIS_DISPRST(value)            (LCDC_LCDDIS_DISPRST_Msk & ((value) << LCDC_LCDDIS_DISPRST_Pos))
#define LCDC_LCDDIS_PWMRST_Pos                _U_(11)                                              /**< (LCDC_LCDDIS) LCD Controller PWM Reset Position */
#define LCDC_LCDDIS_PWMRST_Msk                (_U_(0x1) << LCDC_LCDDIS_PWMRST_Pos)                 /**< (LCDC_LCDDIS) LCD Controller PWM Reset Mask */
#define LCDC_LCDDIS_PWMRST(value)             (LCDC_LCDDIS_PWMRST_Msk & ((value) << LCDC_LCDDIS_PWMRST_Pos))
#define LCDC_LCDDIS_Msk                       _U_(0x00000F0F)                                      /**< (LCDC_LCDDIS) Register Mask  */


/* -------- LCDC_LCDSR : (LCDC Offset: 0x28) ( R/ 32) LCD Controller Status Register -------- */
#define LCDC_LCDSR_CLKSTS_Pos                 _U_(0)                                               /**< (LCDC_LCDSR) Clock Status Position */
#define LCDC_LCDSR_CLKSTS_Msk                 (_U_(0x1) << LCDC_LCDSR_CLKSTS_Pos)                  /**< (LCDC_LCDSR) Clock Status Mask */
#define LCDC_LCDSR_CLKSTS(value)              (LCDC_LCDSR_CLKSTS_Msk & ((value) << LCDC_LCDSR_CLKSTS_Pos))
#define LCDC_LCDSR_LCDSTS_Pos                 _U_(1)                                               /**< (LCDC_LCDSR) LCD Controller Synchronization status Position */
#define LCDC_LCDSR_LCDSTS_Msk                 (_U_(0x1) << LCDC_LCDSR_LCDSTS_Pos)                  /**< (LCDC_LCDSR) LCD Controller Synchronization status Mask */
#define LCDC_LCDSR_LCDSTS(value)              (LCDC_LCDSR_LCDSTS_Msk & ((value) << LCDC_LCDSR_LCDSTS_Pos))
#define LCDC_LCDSR_DISPSTS_Pos                _U_(2)                                               /**< (LCDC_LCDSR) LCD Controller DISP Signal Status Position */
#define LCDC_LCDSR_DISPSTS_Msk                (_U_(0x1) << LCDC_LCDSR_DISPSTS_Pos)                 /**< (LCDC_LCDSR) LCD Controller DISP Signal Status Mask */
#define LCDC_LCDSR_DISPSTS(value)             (LCDC_LCDSR_DISPSTS_Msk & ((value) << LCDC_LCDSR_DISPSTS_Pos))
#define LCDC_LCDSR_PWMSTS_Pos                 _U_(3)                                               /**< (LCDC_LCDSR) LCD Controller PWM Signal Status Position */
#define LCDC_LCDSR_PWMSTS_Msk                 (_U_(0x1) << LCDC_LCDSR_PWMSTS_Pos)                  /**< (LCDC_LCDSR) LCD Controller PWM Signal Status Mask */
#define LCDC_LCDSR_PWMSTS(value)              (LCDC_LCDSR_PWMSTS_Msk & ((value) << LCDC_LCDSR_PWMSTS_Pos))
#define LCDC_LCDSR_SIPSTS_Pos                 _U_(4)                                               /**< (LCDC_LCDSR) Synchronization In Progress Position */
#define LCDC_LCDSR_SIPSTS_Msk                 (_U_(0x1) << LCDC_LCDSR_SIPSTS_Pos)                  /**< (LCDC_LCDSR) Synchronization In Progress Mask */
#define LCDC_LCDSR_SIPSTS(value)              (LCDC_LCDSR_SIPSTS_Msk & ((value) << LCDC_LCDSR_SIPSTS_Pos))
#define LCDC_LCDSR_Msk                        _U_(0x0000001F)                                      /**< (LCDC_LCDSR) Register Mask  */


/* -------- LCDC_LCDIER : (LCDC Offset: 0x2C) ( /W 32) LCD Controller Interrupt Enable Register -------- */
#define LCDC_LCDIER_SOFIE_Pos                 _U_(0)                                               /**< (LCDC_LCDIER) Start of Frame Interrupt Enable Position */
#define LCDC_LCDIER_SOFIE_Msk                 (_U_(0x1) << LCDC_LCDIER_SOFIE_Pos)                  /**< (LCDC_LCDIER) Start of Frame Interrupt Enable Mask */
#define LCDC_LCDIER_SOFIE(value)              (LCDC_LCDIER_SOFIE_Msk & ((value) << LCDC_LCDIER_SOFIE_Pos))
#define LCDC_LCDIER_DISIE_Pos                 _U_(1)                                               /**< (LCDC_LCDIER) LCD Disable Interrupt Enable Position */
#define LCDC_LCDIER_DISIE_Msk                 (_U_(0x1) << LCDC_LCDIER_DISIE_Pos)                  /**< (LCDC_LCDIER) LCD Disable Interrupt Enable Mask */
#define LCDC_LCDIER_DISIE(value)              (LCDC_LCDIER_DISIE_Msk & ((value) << LCDC_LCDIER_DISIE_Pos))
#define LCDC_LCDIER_DISPIE_Pos                _U_(2)                                               /**< (LCDC_LCDIER) Powerup/Powerdown Sequence Terminated Interrupt Enable Position */
#define LCDC_LCDIER_DISPIE_Msk                (_U_(0x1) << LCDC_LCDIER_DISPIE_Pos)                 /**< (LCDC_LCDIER) Powerup/Powerdown Sequence Terminated Interrupt Enable Mask */
#define LCDC_LCDIER_DISPIE(value)             (LCDC_LCDIER_DISPIE_Msk & ((value) << LCDC_LCDIER_DISPIE_Pos))
#define LCDC_LCDIER_FIFOERRIE_Pos             _U_(4)                                               /**< (LCDC_LCDIER) Output FIFO Error Interrupt Enable Position */
#define LCDC_LCDIER_FIFOERRIE_Msk             (_U_(0x1) << LCDC_LCDIER_FIFOERRIE_Pos)              /**< (LCDC_LCDIER) Output FIFO Error Interrupt Enable Mask */
#define LCDC_LCDIER_FIFOERRIE(value)          (LCDC_LCDIER_FIFOERRIE_Msk & ((value) << LCDC_LCDIER_FIFOERRIE_Pos))
#define LCDC_LCDIER_BASEIE_Pos                _U_(8)                                               /**< (LCDC_LCDIER) Base Layer Interrupt Enable Position */
#define LCDC_LCDIER_BASEIE_Msk                (_U_(0x1) << LCDC_LCDIER_BASEIE_Pos)                 /**< (LCDC_LCDIER) Base Layer Interrupt Enable Mask */
#define LCDC_LCDIER_BASEIE(value)             (LCDC_LCDIER_BASEIE_Msk & ((value) << LCDC_LCDIER_BASEIE_Pos))
#define LCDC_LCDIER_OVR1IE_Pos                _U_(9)                                               /**< (LCDC_LCDIER) Overlay 1 Interrupt Enable Position */
#define LCDC_LCDIER_OVR1IE_Msk                (_U_(0x1) << LCDC_LCDIER_OVR1IE_Pos)                 /**< (LCDC_LCDIER) Overlay 1 Interrupt Enable Mask */
#define LCDC_LCDIER_OVR1IE(value)             (LCDC_LCDIER_OVR1IE_Msk & ((value) << LCDC_LCDIER_OVR1IE_Pos))
#define LCDC_LCDIER_OVR2IE_Pos                _U_(10)                                              /**< (LCDC_LCDIER) Overlay 2 Interrupt Enable Position */
#define LCDC_LCDIER_OVR2IE_Msk                (_U_(0x1) << LCDC_LCDIER_OVR2IE_Pos)                 /**< (LCDC_LCDIER) Overlay 2 Interrupt Enable Mask */
#define LCDC_LCDIER_OVR2IE(value)             (LCDC_LCDIER_OVR2IE_Msk & ((value) << LCDC_LCDIER_OVR2IE_Pos))
#define LCDC_LCDIER_HEOIE_Pos                 _U_(11)                                              /**< (LCDC_LCDIER) High-End Overlay Interrupt Enable Position */
#define LCDC_LCDIER_HEOIE_Msk                 (_U_(0x1) << LCDC_LCDIER_HEOIE_Pos)                  /**< (LCDC_LCDIER) High-End Overlay Interrupt Enable Mask */
#define LCDC_LCDIER_HEOIE(value)              (LCDC_LCDIER_HEOIE_Msk & ((value) << LCDC_LCDIER_HEOIE_Pos))
#define LCDC_LCDIER_PPIE_Pos                  _U_(13)                                              /**< (LCDC_LCDIER) Post Processing Interrupt Enable Position */
#define LCDC_LCDIER_PPIE_Msk                  (_U_(0x1) << LCDC_LCDIER_PPIE_Pos)                   /**< (LCDC_LCDIER) Post Processing Interrupt Enable Mask */
#define LCDC_LCDIER_PPIE(value)               (LCDC_LCDIER_PPIE_Msk & ((value) << LCDC_LCDIER_PPIE_Pos))
#define LCDC_LCDIER_Msk                       _U_(0x00002F17)                                      /**< (LCDC_LCDIER) Register Mask  */


/* -------- LCDC_LCDIDR : (LCDC Offset: 0x30) ( /W 32) LCD Controller Interrupt Disable Register -------- */
#define LCDC_LCDIDR_SOFID_Pos                 _U_(0)                                               /**< (LCDC_LCDIDR) Start of Frame Interrupt Disable Position */
#define LCDC_LCDIDR_SOFID_Msk                 (_U_(0x1) << LCDC_LCDIDR_SOFID_Pos)                  /**< (LCDC_LCDIDR) Start of Frame Interrupt Disable Mask */
#define LCDC_LCDIDR_SOFID(value)              (LCDC_LCDIDR_SOFID_Msk & ((value) << LCDC_LCDIDR_SOFID_Pos))
#define LCDC_LCDIDR_DISID_Pos                 _U_(1)                                               /**< (LCDC_LCDIDR) LCD Disable Interrupt Disable Position */
#define LCDC_LCDIDR_DISID_Msk                 (_U_(0x1) << LCDC_LCDIDR_DISID_Pos)                  /**< (LCDC_LCDIDR) LCD Disable Interrupt Disable Mask */
#define LCDC_LCDIDR_DISID(value)              (LCDC_LCDIDR_DISID_Msk & ((value) << LCDC_LCDIDR_DISID_Pos))
#define LCDC_LCDIDR_DISPID_Pos                _U_(2)                                               /**< (LCDC_LCDIDR) Powerup/Powerdown Sequence Terminated Interrupt Disable Position */
#define LCDC_LCDIDR_DISPID_Msk                (_U_(0x1) << LCDC_LCDIDR_DISPID_Pos)                 /**< (LCDC_LCDIDR) Powerup/Powerdown Sequence Terminated Interrupt Disable Mask */
#define LCDC_LCDIDR_DISPID(value)             (LCDC_LCDIDR_DISPID_Msk & ((value) << LCDC_LCDIDR_DISPID_Pos))
#define LCDC_LCDIDR_FIFOERRID_Pos             _U_(4)                                               /**< (LCDC_LCDIDR) Output FIFO Error Interrupt Disable Position */
#define LCDC_LCDIDR_FIFOERRID_Msk             (_U_(0x1) << LCDC_LCDIDR_FIFOERRID_Pos)              /**< (LCDC_LCDIDR) Output FIFO Error Interrupt Disable Mask */
#define LCDC_LCDIDR_FIFOERRID(value)          (LCDC_LCDIDR_FIFOERRID_Msk & ((value) << LCDC_LCDIDR_FIFOERRID_Pos))
#define LCDC_LCDIDR_BASEID_Pos                _U_(8)                                               /**< (LCDC_LCDIDR) Base Layer Interrupt Disable Position */
#define LCDC_LCDIDR_BASEID_Msk                (_U_(0x1) << LCDC_LCDIDR_BASEID_Pos)                 /**< (LCDC_LCDIDR) Base Layer Interrupt Disable Mask */
#define LCDC_LCDIDR_BASEID(value)             (LCDC_LCDIDR_BASEID_Msk & ((value) << LCDC_LCDIDR_BASEID_Pos))
#define LCDC_LCDIDR_OVR1ID_Pos                _U_(9)                                               /**< (LCDC_LCDIDR) Overlay 1 Interrupt Disable Position */
#define LCDC_LCDIDR_OVR1ID_Msk                (_U_(0x1) << LCDC_LCDIDR_OVR1ID_Pos)                 /**< (LCDC_LCDIDR) Overlay 1 Interrupt Disable Mask */
#define LCDC_LCDIDR_OVR1ID(value)             (LCDC_LCDIDR_OVR1ID_Msk & ((value) << LCDC_LCDIDR_OVR1ID_Pos))
#define LCDC_LCDIDR_OVR2ID_Pos                _U_(10)                                              /**< (LCDC_LCDIDR) Overlay 2 Interrupt Disable Position */
#define LCDC_LCDIDR_OVR2ID_Msk                (_U_(0x1) << LCDC_LCDIDR_OVR2ID_Pos)                 /**< (LCDC_LCDIDR) Overlay 2 Interrupt Disable Mask */
#define LCDC_LCDIDR_OVR2ID(value)             (LCDC_LCDIDR_OVR2ID_Msk & ((value) << LCDC_LCDIDR_OVR2ID_Pos))
#define LCDC_LCDIDR_HEOID_Pos                 _U_(11)                                              /**< (LCDC_LCDIDR) High-End Overlay Interrupt Disable Position */
#define LCDC_LCDIDR_HEOID_Msk                 (_U_(0x1) << LCDC_LCDIDR_HEOID_Pos)                  /**< (LCDC_LCDIDR) High-End Overlay Interrupt Disable Mask */
#define LCDC_LCDIDR_HEOID(value)              (LCDC_LCDIDR_HEOID_Msk & ((value) << LCDC_LCDIDR_HEOID_Pos))
#define LCDC_LCDIDR_PPID_Pos                  _U_(13)                                              /**< (LCDC_LCDIDR) Post Processing Interrupt Disable Position */
#define LCDC_LCDIDR_PPID_Msk                  (_U_(0x1) << LCDC_LCDIDR_PPID_Pos)                   /**< (LCDC_LCDIDR) Post Processing Interrupt Disable Mask */
#define LCDC_LCDIDR_PPID(value)               (LCDC_LCDIDR_PPID_Msk & ((value) << LCDC_LCDIDR_PPID_Pos))
#define LCDC_LCDIDR_Msk                       _U_(0x00002F17)                                      /**< (LCDC_LCDIDR) Register Mask  */


/* -------- LCDC_LCDIMR : (LCDC Offset: 0x34) ( R/ 32) LCD Controller Interrupt Mask Register -------- */
#define LCDC_LCDIMR_SOFIM_Pos                 _U_(0)                                               /**< (LCDC_LCDIMR) Start of Frame Interrupt Mask Position */
#define LCDC_LCDIMR_SOFIM_Msk                 (_U_(0x1) << LCDC_LCDIMR_SOFIM_Pos)                  /**< (LCDC_LCDIMR) Start of Frame Interrupt Mask Mask */
#define LCDC_LCDIMR_SOFIM(value)              (LCDC_LCDIMR_SOFIM_Msk & ((value) << LCDC_LCDIMR_SOFIM_Pos))
#define LCDC_LCDIMR_DISIM_Pos                 _U_(1)                                               /**< (LCDC_LCDIMR) LCD Disable Interrupt Mask Position */
#define LCDC_LCDIMR_DISIM_Msk                 (_U_(0x1) << LCDC_LCDIMR_DISIM_Pos)                  /**< (LCDC_LCDIMR) LCD Disable Interrupt Mask Mask */
#define LCDC_LCDIMR_DISIM(value)              (LCDC_LCDIMR_DISIM_Msk & ((value) << LCDC_LCDIMR_DISIM_Pos))
#define LCDC_LCDIMR_DISPIM_Pos                _U_(2)                                               /**< (LCDC_LCDIMR) Powerup/Powerdown Sequence Terminated Interrupt Mask Position */
#define LCDC_LCDIMR_DISPIM_Msk                (_U_(0x1) << LCDC_LCDIMR_DISPIM_Pos)                 /**< (LCDC_LCDIMR) Powerup/Powerdown Sequence Terminated Interrupt Mask Mask */
#define LCDC_LCDIMR_DISPIM(value)             (LCDC_LCDIMR_DISPIM_Msk & ((value) << LCDC_LCDIMR_DISPIM_Pos))
#define LCDC_LCDIMR_FIFOERRIM_Pos             _U_(4)                                               /**< (LCDC_LCDIMR) Output FIFO Error Interrupt Mask Position */
#define LCDC_LCDIMR_FIFOERRIM_Msk             (_U_(0x1) << LCDC_LCDIMR_FIFOERRIM_Pos)              /**< (LCDC_LCDIMR) Output FIFO Error Interrupt Mask Mask */
#define LCDC_LCDIMR_FIFOERRIM(value)          (LCDC_LCDIMR_FIFOERRIM_Msk & ((value) << LCDC_LCDIMR_FIFOERRIM_Pos))
#define LCDC_LCDIMR_BASEIM_Pos                _U_(8)                                               /**< (LCDC_LCDIMR) Base Layer Interrupt Mask Position */
#define LCDC_LCDIMR_BASEIM_Msk                (_U_(0x1) << LCDC_LCDIMR_BASEIM_Pos)                 /**< (LCDC_LCDIMR) Base Layer Interrupt Mask Mask */
#define LCDC_LCDIMR_BASEIM(value)             (LCDC_LCDIMR_BASEIM_Msk & ((value) << LCDC_LCDIMR_BASEIM_Pos))
#define LCDC_LCDIMR_OVR1IM_Pos                _U_(9)                                               /**< (LCDC_LCDIMR) Overlay 1 Interrupt Mask Position */
#define LCDC_LCDIMR_OVR1IM_Msk                (_U_(0x1) << LCDC_LCDIMR_OVR1IM_Pos)                 /**< (LCDC_LCDIMR) Overlay 1 Interrupt Mask Mask */
#define LCDC_LCDIMR_OVR1IM(value)             (LCDC_LCDIMR_OVR1IM_Msk & ((value) << LCDC_LCDIMR_OVR1IM_Pos))
#define LCDC_LCDIMR_OVR2IM_Pos                _U_(10)                                              /**< (LCDC_LCDIMR) Overlay 2 Interrupt Mask Position */
#define LCDC_LCDIMR_OVR2IM_Msk                (_U_(0x1) << LCDC_LCDIMR_OVR2IM_Pos)                 /**< (LCDC_LCDIMR) Overlay 2 Interrupt Mask Mask */
#define LCDC_LCDIMR_OVR2IM(value)             (LCDC_LCDIMR_OVR2IM_Msk & ((value) << LCDC_LCDIMR_OVR2IM_Pos))
#define LCDC_LCDIMR_HEOIM_Pos                 _U_(11)                                              /**< (LCDC_LCDIMR) High-End Overlay Interrupt Mask Position */
#define LCDC_LCDIMR_HEOIM_Msk                 (_U_(0x1) << LCDC_LCDIMR_HEOIM_Pos)                  /**< (LCDC_LCDIMR) High-End Overlay Interrupt Mask Mask */
#define LCDC_LCDIMR_HEOIM(value)              (LCDC_LCDIMR_HEOIM_Msk & ((value) << LCDC_LCDIMR_HEOIM_Pos))
#define LCDC_LCDIMR_PPIM_Pos                  _U_(13)                                              /**< (LCDC_LCDIMR) Post Processing Interrupt Mask Position */
#define LCDC_LCDIMR_PPIM_Msk                  (_U_(0x1) << LCDC_LCDIMR_PPIM_Pos)                   /**< (LCDC_LCDIMR) Post Processing Interrupt Mask Mask */
#define LCDC_LCDIMR_PPIM(value)               (LCDC_LCDIMR_PPIM_Msk & ((value) << LCDC_LCDIMR_PPIM_Pos))
#define LCDC_LCDIMR_Msk                       _U_(0x00002F17)                                      /**< (LCDC_LCDIMR) Register Mask  */


/* -------- LCDC_LCDISR : (LCDC Offset: 0x38) ( R/ 32) LCD Controller Interrupt Status Register -------- */
#define LCDC_LCDISR_SOF_Pos                   _U_(0)                                               /**< (LCDC_LCDISR) Start of Frame Interrupt Status Position */
#define LCDC_LCDISR_SOF_Msk                   (_U_(0x1) << LCDC_LCDISR_SOF_Pos)                    /**< (LCDC_LCDISR) Start of Frame Interrupt Status Mask */
#define LCDC_LCDISR_SOF(value)                (LCDC_LCDISR_SOF_Msk & ((value) << LCDC_LCDISR_SOF_Pos))
#define LCDC_LCDISR_DIS_Pos                   _U_(1)                                               /**< (LCDC_LCDISR) LCD Disable Interrupt Status Position */
#define LCDC_LCDISR_DIS_Msk                   (_U_(0x1) << LCDC_LCDISR_DIS_Pos)                    /**< (LCDC_LCDISR) LCD Disable Interrupt Status Mask */
#define LCDC_LCDISR_DIS(value)                (LCDC_LCDISR_DIS_Msk & ((value) << LCDC_LCDISR_DIS_Pos))
#define LCDC_LCDISR_DISP_Pos                  _U_(2)                                               /**< (LCDC_LCDISR) Powerup/Powerdown Sequence Terminated Interrupt Status Position */
#define LCDC_LCDISR_DISP_Msk                  (_U_(0x1) << LCDC_LCDISR_DISP_Pos)                   /**< (LCDC_LCDISR) Powerup/Powerdown Sequence Terminated Interrupt Status Mask */
#define LCDC_LCDISR_DISP(value)               (LCDC_LCDISR_DISP_Msk & ((value) << LCDC_LCDISR_DISP_Pos))
#define LCDC_LCDISR_FIFOERR_Pos               _U_(4)                                               /**< (LCDC_LCDISR) Output FIFO Error Position */
#define LCDC_LCDISR_FIFOERR_Msk               (_U_(0x1) << LCDC_LCDISR_FIFOERR_Pos)                /**< (LCDC_LCDISR) Output FIFO Error Mask */
#define LCDC_LCDISR_FIFOERR(value)            (LCDC_LCDISR_FIFOERR_Msk & ((value) << LCDC_LCDISR_FIFOERR_Pos))
#define LCDC_LCDISR_BASE_Pos                  _U_(8)                                               /**< (LCDC_LCDISR) Base Layer Raw Interrupt Status Position */
#define LCDC_LCDISR_BASE_Msk                  (_U_(0x1) << LCDC_LCDISR_BASE_Pos)                   /**< (LCDC_LCDISR) Base Layer Raw Interrupt Status Mask */
#define LCDC_LCDISR_BASE(value)               (LCDC_LCDISR_BASE_Msk & ((value) << LCDC_LCDISR_BASE_Pos))
#define LCDC_LCDISR_OVR1_Pos                  _U_(9)                                               /**< (LCDC_LCDISR) Overlay 1 Raw Interrupt Status Position */
#define LCDC_LCDISR_OVR1_Msk                  (_U_(0x1) << LCDC_LCDISR_OVR1_Pos)                   /**< (LCDC_LCDISR) Overlay 1 Raw Interrupt Status Mask */
#define LCDC_LCDISR_OVR1(value)               (LCDC_LCDISR_OVR1_Msk & ((value) << LCDC_LCDISR_OVR1_Pos))
#define LCDC_LCDISR_OVR2_Pos                  _U_(10)                                              /**< (LCDC_LCDISR) Overlay 2 Raw Interrupt Status Position */
#define LCDC_LCDISR_OVR2_Msk                  (_U_(0x1) << LCDC_LCDISR_OVR2_Pos)                   /**< (LCDC_LCDISR) Overlay 2 Raw Interrupt Status Mask */
#define LCDC_LCDISR_OVR2(value)               (LCDC_LCDISR_OVR2_Msk & ((value) << LCDC_LCDISR_OVR2_Pos))
#define LCDC_LCDISR_HEO_Pos                   _U_(11)                                              /**< (LCDC_LCDISR) High-End Overlay Raw Interrupt Status Position */
#define LCDC_LCDISR_HEO_Msk                   (_U_(0x1) << LCDC_LCDISR_HEO_Pos)                    /**< (LCDC_LCDISR) High-End Overlay Raw Interrupt Status Mask */
#define LCDC_LCDISR_HEO(value)                (LCDC_LCDISR_HEO_Msk & ((value) << LCDC_LCDISR_HEO_Pos))
#define LCDC_LCDISR_PP_Pos                    _U_(13)                                              /**< (LCDC_LCDISR) Post Processing Raw Interrupt Status Position */
#define LCDC_LCDISR_PP_Msk                    (_U_(0x1) << LCDC_LCDISR_PP_Pos)                     /**< (LCDC_LCDISR) Post Processing Raw Interrupt Status Mask */
#define LCDC_LCDISR_PP(value)                 (LCDC_LCDISR_PP_Msk & ((value) << LCDC_LCDISR_PP_Pos))
#define LCDC_LCDISR_Msk                       _U_(0x00002F17)                                      /**< (LCDC_LCDISR) Register Mask  */

#define LCDC_LCDISR_OVR_Pos                   _U_(9)                                               /**< (LCDC_LCDISR Position) Overlay x Raw Interrupt Status */
#define LCDC_LCDISR_OVR_Msk                   (_U_(0x3) << LCDC_LCDISR_OVR_Pos)                    /**< (LCDC_LCDISR Mask) OVR */
#define LCDC_LCDISR_OVR(value)                (LCDC_LCDISR_OVR_Msk & ((value) << LCDC_LCDISR_OVR_Pos)) 

/* -------- LCDC_ATTR : (LCDC Offset: 0x3C) ( /W 32) LCD Controller Attribute Register -------- */
#define LCDC_ATTR_BASE_Pos                    _U_(0)                                               /**< (LCDC_ATTR) Base Layer Update Attribute Position */
#define LCDC_ATTR_BASE_Msk                    (_U_(0x1) << LCDC_ATTR_BASE_Pos)                     /**< (LCDC_ATTR) Base Layer Update Attribute Mask */
#define LCDC_ATTR_BASE(value)                 (LCDC_ATTR_BASE_Msk & ((value) << LCDC_ATTR_BASE_Pos))
#define LCDC_ATTR_OVR1_Pos                    _U_(1)                                               /**< (LCDC_ATTR) Overlay 1 Update Attribute Position */
#define LCDC_ATTR_OVR1_Msk                    (_U_(0x1) << LCDC_ATTR_OVR1_Pos)                     /**< (LCDC_ATTR) Overlay 1 Update Attribute Mask */
#define LCDC_ATTR_OVR1(value)                 (LCDC_ATTR_OVR1_Msk & ((value) << LCDC_ATTR_OVR1_Pos))
#define LCDC_ATTR_OVR2_Pos                    _U_(2)                                               /**< (LCDC_ATTR) Overlay 2 Update Attribute Position */
#define LCDC_ATTR_OVR2_Msk                    (_U_(0x1) << LCDC_ATTR_OVR2_Pos)                     /**< (LCDC_ATTR) Overlay 2 Update Attribute Mask */
#define LCDC_ATTR_OVR2(value)                 (LCDC_ATTR_OVR2_Msk & ((value) << LCDC_ATTR_OVR2_Pos))
#define LCDC_ATTR_HEO_Pos                     _U_(3)                                               /**< (LCDC_ATTR) High-End Overlay Update Attribute Position */
#define LCDC_ATTR_HEO_Msk                     (_U_(0x1) << LCDC_ATTR_HEO_Pos)                      /**< (LCDC_ATTR) High-End Overlay Update Attribute Mask */
#define LCDC_ATTR_HEO(value)                  (LCDC_ATTR_HEO_Msk & ((value) << LCDC_ATTR_HEO_Pos))
#define LCDC_ATTR_PP_Pos                      _U_(5)                                               /**< (LCDC_ATTR) Post-Processing Update Attribute Position */
#define LCDC_ATTR_PP_Msk                      (_U_(0x1) << LCDC_ATTR_PP_Pos)                       /**< (LCDC_ATTR) Post-Processing Update Attribute Mask */
#define LCDC_ATTR_PP(value)                   (LCDC_ATTR_PP_Msk & ((value) << LCDC_ATTR_PP_Pos))  
#define LCDC_ATTR_BASEA2Q_Pos                 _U_(8)                                               /**< (LCDC_ATTR) Base Layer Update Add To Queue Position */
#define LCDC_ATTR_BASEA2Q_Msk                 (_U_(0x1) << LCDC_ATTR_BASEA2Q_Pos)                  /**< (LCDC_ATTR) Base Layer Update Add To Queue Mask */
#define LCDC_ATTR_BASEA2Q(value)              (LCDC_ATTR_BASEA2Q_Msk & ((value) << LCDC_ATTR_BASEA2Q_Pos))
#define LCDC_ATTR_OVR1A2Q_Pos                 _U_(9)                                               /**< (LCDC_ATTR) Overlay 1 Update Add To Queue Position */
#define LCDC_ATTR_OVR1A2Q_Msk                 (_U_(0x1) << LCDC_ATTR_OVR1A2Q_Pos)                  /**< (LCDC_ATTR) Overlay 1 Update Add To Queue Mask */
#define LCDC_ATTR_OVR1A2Q(value)              (LCDC_ATTR_OVR1A2Q_Msk & ((value) << LCDC_ATTR_OVR1A2Q_Pos))
#define LCDC_ATTR_OVR2A2Q_Pos                 _U_(10)                                              /**< (LCDC_ATTR) Overlay 2 Update Add to Queue Position */
#define LCDC_ATTR_OVR2A2Q_Msk                 (_U_(0x1) << LCDC_ATTR_OVR2A2Q_Pos)                  /**< (LCDC_ATTR) Overlay 2 Update Add to Queue Mask */
#define LCDC_ATTR_OVR2A2Q(value)              (LCDC_ATTR_OVR2A2Q_Msk & ((value) << LCDC_ATTR_OVR2A2Q_Pos))
#define LCDC_ATTR_HEOA2Q_Pos                  _U_(11)                                              /**< (LCDC_ATTR) High-End Overlay Update Add To Queue Position */
#define LCDC_ATTR_HEOA2Q_Msk                  (_U_(0x1) << LCDC_ATTR_HEOA2Q_Pos)                   /**< (LCDC_ATTR) High-End Overlay Update Add To Queue Mask */
#define LCDC_ATTR_HEOA2Q(value)               (LCDC_ATTR_HEOA2Q_Msk & ((value) << LCDC_ATTR_HEOA2Q_Pos))
#define LCDC_ATTR_PPA2Q_Pos                   _U_(13)                                              /**< (LCDC_ATTR) Post-Processing Update Add To Queue Position */
#define LCDC_ATTR_PPA2Q_Msk                   (_U_(0x1) << LCDC_ATTR_PPA2Q_Pos)                    /**< (LCDC_ATTR) Post-Processing Update Add To Queue Mask */
#define LCDC_ATTR_PPA2Q(value)                (LCDC_ATTR_PPA2Q_Msk & ((value) << LCDC_ATTR_PPA2Q_Pos))
#define LCDC_ATTR_Msk                         _U_(0x00002F2F)                                      /**< (LCDC_ATTR) Register Mask  */

#define LCDC_ATTR_OVR_Pos                     _U_(1)                                               /**< (LCDC_ATTR Position) Overlay x Update Attribute */
#define LCDC_ATTR_OVR_Msk                     (_U_(0x3) << LCDC_ATTR_OVR_Pos)                      /**< (LCDC_ATTR Mask) OVR */
#define LCDC_ATTR_OVR(value)                  (LCDC_ATTR_OVR_Msk & ((value) << LCDC_ATTR_OVR_Pos)) 

/* -------- LCDC_BASECHER : (LCDC Offset: 0x40) ( /W 32) Base Layer Channel Enable Register -------- */
#define LCDC_BASECHER_CHEN_Pos                _U_(0)                                               /**< (LCDC_BASECHER) Channel Enable Position */
#define LCDC_BASECHER_CHEN_Msk                (_U_(0x1) << LCDC_BASECHER_CHEN_Pos)                 /**< (LCDC_BASECHER) Channel Enable Mask */
#define LCDC_BASECHER_CHEN(value)             (LCDC_BASECHER_CHEN_Msk & ((value) << LCDC_BASECHER_CHEN_Pos))
#define LCDC_BASECHER_UPDATEEN_Pos            _U_(1)                                               /**< (LCDC_BASECHER) Update Overlay Attributes Enable Position */
#define LCDC_BASECHER_UPDATEEN_Msk            (_U_(0x1) << LCDC_BASECHER_UPDATEEN_Pos)             /**< (LCDC_BASECHER) Update Overlay Attributes Enable Mask */
#define LCDC_BASECHER_UPDATEEN(value)         (LCDC_BASECHER_UPDATEEN_Msk & ((value) << LCDC_BASECHER_UPDATEEN_Pos))
#define LCDC_BASECHER_A2QEN_Pos               _U_(2)                                               /**< (LCDC_BASECHER) Add To Queue Enable Position */
#define LCDC_BASECHER_A2QEN_Msk               (_U_(0x1) << LCDC_BASECHER_A2QEN_Pos)                /**< (LCDC_BASECHER) Add To Queue Enable Mask */
#define LCDC_BASECHER_A2QEN(value)            (LCDC_BASECHER_A2QEN_Msk & ((value) << LCDC_BASECHER_A2QEN_Pos))
#define LCDC_BASECHER_Msk                     _U_(0x00000007)                                      /**< (LCDC_BASECHER) Register Mask  */


/* -------- LCDC_BASECHDR : (LCDC Offset: 0x44) ( /W 32) Base Layer Channel Disable Register -------- */
#define LCDC_BASECHDR_CHDIS_Pos               _U_(0)                                               /**< (LCDC_BASECHDR) Channel Disable Position */
#define LCDC_BASECHDR_CHDIS_Msk               (_U_(0x1) << LCDC_BASECHDR_CHDIS_Pos)                /**< (LCDC_BASECHDR) Channel Disable Mask */
#define LCDC_BASECHDR_CHDIS(value)            (LCDC_BASECHDR_CHDIS_Msk & ((value) << LCDC_BASECHDR_CHDIS_Pos))
#define LCDC_BASECHDR_CHRST_Pos               _U_(8)                                               /**< (LCDC_BASECHDR) Channel Reset Position */
#define LCDC_BASECHDR_CHRST_Msk               (_U_(0x1) << LCDC_BASECHDR_CHRST_Pos)                /**< (LCDC_BASECHDR) Channel Reset Mask */
#define LCDC_BASECHDR_CHRST(value)            (LCDC_BASECHDR_CHRST_Msk & ((value) << LCDC_BASECHDR_CHRST_Pos))
#define LCDC_BASECHDR_Msk                     _U_(0x00000101)                                      /**< (LCDC_BASECHDR) Register Mask  */


/* -------- LCDC_BASECHSR : (LCDC Offset: 0x48) ( R/ 32) Base Layer Channel Status Register -------- */
#define LCDC_BASECHSR_CHSR_Pos                _U_(0)                                               /**< (LCDC_BASECHSR) Channel Status Position */
#define LCDC_BASECHSR_CHSR_Msk                (_U_(0x1) << LCDC_BASECHSR_CHSR_Pos)                 /**< (LCDC_BASECHSR) Channel Status Mask */
#define LCDC_BASECHSR_CHSR(value)             (LCDC_BASECHSR_CHSR_Msk & ((value) << LCDC_BASECHSR_CHSR_Pos))
#define LCDC_BASECHSR_UPDATESR_Pos            _U_(1)                                               /**< (LCDC_BASECHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_BASECHSR_UPDATESR_Msk            (_U_(0x1) << LCDC_BASECHSR_UPDATESR_Pos)             /**< (LCDC_BASECHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_BASECHSR_UPDATESR(value)         (LCDC_BASECHSR_UPDATESR_Msk & ((value) << LCDC_BASECHSR_UPDATESR_Pos))
#define LCDC_BASECHSR_A2QSR_Pos               _U_(2)                                               /**< (LCDC_BASECHSR) Add To Queue Status Position */
#define LCDC_BASECHSR_A2QSR_Msk               (_U_(0x1) << LCDC_BASECHSR_A2QSR_Pos)                /**< (LCDC_BASECHSR) Add To Queue Status Mask */
#define LCDC_BASECHSR_A2QSR(value)            (LCDC_BASECHSR_A2QSR_Msk & ((value) << LCDC_BASECHSR_A2QSR_Pos))
#define LCDC_BASECHSR_Msk                     _U_(0x00000007)                                      /**< (LCDC_BASECHSR) Register Mask  */


/* -------- LCDC_BASEIER : (LCDC Offset: 0x4C) ( /W 32) Base Layer Interrupt Enable Register -------- */
#define LCDC_BASEIER_DMA_Pos                  _U_(2)                                               /**< (LCDC_BASEIER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_BASEIER_DMA_Msk                  (_U_(0x1) << LCDC_BASEIER_DMA_Pos)                   /**< (LCDC_BASEIER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_BASEIER_DMA(value)               (LCDC_BASEIER_DMA_Msk & ((value) << LCDC_BASEIER_DMA_Pos))
#define LCDC_BASEIER_DSCR_Pos                 _U_(3)                                               /**< (LCDC_BASEIER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_BASEIER_DSCR_Msk                 (_U_(0x1) << LCDC_BASEIER_DSCR_Pos)                  /**< (LCDC_BASEIER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_BASEIER_DSCR(value)              (LCDC_BASEIER_DSCR_Msk & ((value) << LCDC_BASEIER_DSCR_Pos))
#define LCDC_BASEIER_ADD_Pos                  _U_(4)                                               /**< (LCDC_BASEIER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_BASEIER_ADD_Msk                  (_U_(0x1) << LCDC_BASEIER_ADD_Pos)                   /**< (LCDC_BASEIER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_BASEIER_ADD(value)               (LCDC_BASEIER_ADD_Msk & ((value) << LCDC_BASEIER_ADD_Pos))
#define LCDC_BASEIER_DONE_Pos                 _U_(5)                                               /**< (LCDC_BASEIER) End of List Interrupt Enable Position */
#define LCDC_BASEIER_DONE_Msk                 (_U_(0x1) << LCDC_BASEIER_DONE_Pos)                  /**< (LCDC_BASEIER) End of List Interrupt Enable Mask */
#define LCDC_BASEIER_DONE(value)              (LCDC_BASEIER_DONE_Msk & ((value) << LCDC_BASEIER_DONE_Pos))
#define LCDC_BASEIER_OVR_Pos                  _U_(6)                                               /**< (LCDC_BASEIER) Overflow Interrupt Enable Position */
#define LCDC_BASEIER_OVR_Msk                  (_U_(0x1) << LCDC_BASEIER_OVR_Pos)                   /**< (LCDC_BASEIER) Overflow Interrupt Enable Mask */
#define LCDC_BASEIER_OVR(value)               (LCDC_BASEIER_OVR_Msk & ((value) << LCDC_BASEIER_OVR_Pos))
#define LCDC_BASEIER_Msk                      _U_(0x0000007C)                                      /**< (LCDC_BASEIER) Register Mask  */


/* -------- LCDC_BASEIDR : (LCDC Offset: 0x50) ( /W 32) Base Layer Interrupt Disabled Register -------- */
#define LCDC_BASEIDR_DMA_Pos                  _U_(2)                                               /**< (LCDC_BASEIDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_BASEIDR_DMA_Msk                  (_U_(0x1) << LCDC_BASEIDR_DMA_Pos)                   /**< (LCDC_BASEIDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_BASEIDR_DMA(value)               (LCDC_BASEIDR_DMA_Msk & ((value) << LCDC_BASEIDR_DMA_Pos))
#define LCDC_BASEIDR_DSCR_Pos                 _U_(3)                                               /**< (LCDC_BASEIDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_BASEIDR_DSCR_Msk                 (_U_(0x1) << LCDC_BASEIDR_DSCR_Pos)                  /**< (LCDC_BASEIDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_BASEIDR_DSCR(value)              (LCDC_BASEIDR_DSCR_Msk & ((value) << LCDC_BASEIDR_DSCR_Pos))
#define LCDC_BASEIDR_ADD_Pos                  _U_(4)                                               /**< (LCDC_BASEIDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_BASEIDR_ADD_Msk                  (_U_(0x1) << LCDC_BASEIDR_ADD_Pos)                   /**< (LCDC_BASEIDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_BASEIDR_ADD(value)               (LCDC_BASEIDR_ADD_Msk & ((value) << LCDC_BASEIDR_ADD_Pos))
#define LCDC_BASEIDR_DONE_Pos                 _U_(5)                                               /**< (LCDC_BASEIDR) End of List Interrupt Disable Position */
#define LCDC_BASEIDR_DONE_Msk                 (_U_(0x1) << LCDC_BASEIDR_DONE_Pos)                  /**< (LCDC_BASEIDR) End of List Interrupt Disable Mask */
#define LCDC_BASEIDR_DONE(value)              (LCDC_BASEIDR_DONE_Msk & ((value) << LCDC_BASEIDR_DONE_Pos))
#define LCDC_BASEIDR_OVR_Pos                  _U_(6)                                               /**< (LCDC_BASEIDR) Overflow Interrupt Disable Position */
#define LCDC_BASEIDR_OVR_Msk                  (_U_(0x1) << LCDC_BASEIDR_OVR_Pos)                   /**< (LCDC_BASEIDR) Overflow Interrupt Disable Mask */
#define LCDC_BASEIDR_OVR(value)               (LCDC_BASEIDR_OVR_Msk & ((value) << LCDC_BASEIDR_OVR_Pos))
#define LCDC_BASEIDR_Msk                      _U_(0x0000007C)                                      /**< (LCDC_BASEIDR) Register Mask  */


/* -------- LCDC_BASEIMR : (LCDC Offset: 0x54) ( R/ 32) Base Layer Interrupt Mask Register -------- */
#define LCDC_BASEIMR_DMA_Pos                  _U_(2)                                               /**< (LCDC_BASEIMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_BASEIMR_DMA_Msk                  (_U_(0x1) << LCDC_BASEIMR_DMA_Pos)                   /**< (LCDC_BASEIMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_BASEIMR_DMA(value)               (LCDC_BASEIMR_DMA_Msk & ((value) << LCDC_BASEIMR_DMA_Pos))
#define LCDC_BASEIMR_DSCR_Pos                 _U_(3)                                               /**< (LCDC_BASEIMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_BASEIMR_DSCR_Msk                 (_U_(0x1) << LCDC_BASEIMR_DSCR_Pos)                  /**< (LCDC_BASEIMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_BASEIMR_DSCR(value)              (LCDC_BASEIMR_DSCR_Msk & ((value) << LCDC_BASEIMR_DSCR_Pos))
#define LCDC_BASEIMR_ADD_Pos                  _U_(4)                                               /**< (LCDC_BASEIMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_BASEIMR_ADD_Msk                  (_U_(0x1) << LCDC_BASEIMR_ADD_Pos)                   /**< (LCDC_BASEIMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_BASEIMR_ADD(value)               (LCDC_BASEIMR_ADD_Msk & ((value) << LCDC_BASEIMR_ADD_Pos))
#define LCDC_BASEIMR_DONE_Pos                 _U_(5)                                               /**< (LCDC_BASEIMR) End of List Interrupt Mask Position */
#define LCDC_BASEIMR_DONE_Msk                 (_U_(0x1) << LCDC_BASEIMR_DONE_Pos)                  /**< (LCDC_BASEIMR) End of List Interrupt Mask Mask */
#define LCDC_BASEIMR_DONE(value)              (LCDC_BASEIMR_DONE_Msk & ((value) << LCDC_BASEIMR_DONE_Pos))
#define LCDC_BASEIMR_OVR_Pos                  _U_(6)                                               /**< (LCDC_BASEIMR) Overflow Interrupt Mask Position */
#define LCDC_BASEIMR_OVR_Msk                  (_U_(0x1) << LCDC_BASEIMR_OVR_Pos)                   /**< (LCDC_BASEIMR) Overflow Interrupt Mask Mask */
#define LCDC_BASEIMR_OVR(value)               (LCDC_BASEIMR_OVR_Msk & ((value) << LCDC_BASEIMR_OVR_Pos))
#define LCDC_BASEIMR_Msk                      _U_(0x0000007C)                                      /**< (LCDC_BASEIMR) Register Mask  */


/* -------- LCDC_BASEISR : (LCDC Offset: 0x58) ( R/ 32) Base Layer Interrupt Status Register -------- */
#define LCDC_BASEISR_DMA_Pos                  _U_(2)                                               /**< (LCDC_BASEISR) End of DMA Transfer Position */
#define LCDC_BASEISR_DMA_Msk                  (_U_(0x1) << LCDC_BASEISR_DMA_Pos)                   /**< (LCDC_BASEISR) End of DMA Transfer Mask */
#define LCDC_BASEISR_DMA(value)               (LCDC_BASEISR_DMA_Msk & ((value) << LCDC_BASEISR_DMA_Pos))
#define LCDC_BASEISR_DSCR_Pos                 _U_(3)                                               /**< (LCDC_BASEISR) DMA Descriptor Loaded Position */
#define LCDC_BASEISR_DSCR_Msk                 (_U_(0x1) << LCDC_BASEISR_DSCR_Pos)                  /**< (LCDC_BASEISR) DMA Descriptor Loaded Mask */
#define LCDC_BASEISR_DSCR(value)              (LCDC_BASEISR_DSCR_Msk & ((value) << LCDC_BASEISR_DSCR_Pos))
#define LCDC_BASEISR_ADD_Pos                  _U_(4)                                               /**< (LCDC_BASEISR) Head Descriptor Loaded Position */
#define LCDC_BASEISR_ADD_Msk                  (_U_(0x1) << LCDC_BASEISR_ADD_Pos)                   /**< (LCDC_BASEISR) Head Descriptor Loaded Mask */
#define LCDC_BASEISR_ADD(value)               (LCDC_BASEISR_ADD_Msk & ((value) << LCDC_BASEISR_ADD_Pos))
#define LCDC_BASEISR_DONE_Pos                 _U_(5)                                               /**< (LCDC_BASEISR) End of List Detected Position */
#define LCDC_BASEISR_DONE_Msk                 (_U_(0x1) << LCDC_BASEISR_DONE_Pos)                  /**< (LCDC_BASEISR) End of List Detected Mask */
#define LCDC_BASEISR_DONE(value)              (LCDC_BASEISR_DONE_Msk & ((value) << LCDC_BASEISR_DONE_Pos))
#define LCDC_BASEISR_OVR_Pos                  _U_(6)                                               /**< (LCDC_BASEISR) Overflow Detected Position */
#define LCDC_BASEISR_OVR_Msk                  (_U_(0x1) << LCDC_BASEISR_OVR_Pos)                   /**< (LCDC_BASEISR) Overflow Detected Mask */
#define LCDC_BASEISR_OVR(value)               (LCDC_BASEISR_OVR_Msk & ((value) << LCDC_BASEISR_OVR_Pos))
#define LCDC_BASEISR_Msk                      _U_(0x0000007C)                                      /**< (LCDC_BASEISR) Register Mask  */


/* -------- LCDC_BASEHEAD : (LCDC Offset: 0x5C) (R/W 32) Base DMA Head Register -------- */
#define LCDC_BASEHEAD_HEAD_Pos                _U_(2)                                               /**< (LCDC_BASEHEAD) DMA Head Pointer Position */
#define LCDC_BASEHEAD_HEAD_Msk                (_U_(0x3FFFFFFF) << LCDC_BASEHEAD_HEAD_Pos)          /**< (LCDC_BASEHEAD) DMA Head Pointer Mask */
#define LCDC_BASEHEAD_HEAD(value)             (LCDC_BASEHEAD_HEAD_Msk & ((value) << LCDC_BASEHEAD_HEAD_Pos))
#define LCDC_BASEHEAD_Msk                     _U_(0xFFFFFFFC)                                      /**< (LCDC_BASEHEAD) Register Mask  */


/* -------- LCDC_BASEADDR : (LCDC Offset: 0x60) (R/W 32) Base DMA Address Register -------- */
#define LCDC_BASEADDR_ADDR_Pos                _U_(0)                                               /**< (LCDC_BASEADDR) DMA Transfer Start Address Position */
#define LCDC_BASEADDR_ADDR_Msk                (_U_(0xFFFFFFFF) << LCDC_BASEADDR_ADDR_Pos)          /**< (LCDC_BASEADDR) DMA Transfer Start Address Mask */
#define LCDC_BASEADDR_ADDR(value)             (LCDC_BASEADDR_ADDR_Msk & ((value) << LCDC_BASEADDR_ADDR_Pos))
#define LCDC_BASEADDR_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_BASEADDR) Register Mask  */


/* -------- LCDC_BASECTRL : (LCDC Offset: 0x64) (R/W 32) Base DMA Control Register -------- */
#define LCDC_BASECTRL_DFETCH_Pos              _U_(0)                                               /**< (LCDC_BASECTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_BASECTRL_DFETCH_Msk              (_U_(0x1) << LCDC_BASECTRL_DFETCH_Pos)               /**< (LCDC_BASECTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_BASECTRL_DFETCH(value)           (LCDC_BASECTRL_DFETCH_Msk & ((value) << LCDC_BASECTRL_DFETCH_Pos))
#define LCDC_BASECTRL_LFETCH_Pos              _U_(1)                                               /**< (LCDC_BASECTRL) Lookup Table Fetch Enable Position */
#define LCDC_BASECTRL_LFETCH_Msk              (_U_(0x1) << LCDC_BASECTRL_LFETCH_Pos)               /**< (LCDC_BASECTRL) Lookup Table Fetch Enable Mask */
#define LCDC_BASECTRL_LFETCH(value)           (LCDC_BASECTRL_LFETCH_Msk & ((value) << LCDC_BASECTRL_LFETCH_Pos))
#define LCDC_BASECTRL_DMAIEN_Pos              _U_(2)                                               /**< (LCDC_BASECTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_BASECTRL_DMAIEN_Msk              (_U_(0x1) << LCDC_BASECTRL_DMAIEN_Pos)               /**< (LCDC_BASECTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_BASECTRL_DMAIEN(value)           (LCDC_BASECTRL_DMAIEN_Msk & ((value) << LCDC_BASECTRL_DMAIEN_Pos))
#define LCDC_BASECTRL_DSCRIEN_Pos             _U_(3)                                               /**< (LCDC_BASECTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_BASECTRL_DSCRIEN_Msk             (_U_(0x1) << LCDC_BASECTRL_DSCRIEN_Pos)              /**< (LCDC_BASECTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_BASECTRL_DSCRIEN(value)          (LCDC_BASECTRL_DSCRIEN_Msk & ((value) << LCDC_BASECTRL_DSCRIEN_Pos))
#define LCDC_BASECTRL_ADDIEN_Pos              _U_(4)                                               /**< (LCDC_BASECTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_BASECTRL_ADDIEN_Msk              (_U_(0x1) << LCDC_BASECTRL_ADDIEN_Pos)               /**< (LCDC_BASECTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_BASECTRL_ADDIEN(value)           (LCDC_BASECTRL_ADDIEN_Msk & ((value) << LCDC_BASECTRL_ADDIEN_Pos))
#define LCDC_BASECTRL_DONEIEN_Pos             _U_(5)                                               /**< (LCDC_BASECTRL) End of List Interrupt Enable Position */
#define LCDC_BASECTRL_DONEIEN_Msk             (_U_(0x1) << LCDC_BASECTRL_DONEIEN_Pos)              /**< (LCDC_BASECTRL) End of List Interrupt Enable Mask */
#define LCDC_BASECTRL_DONEIEN(value)          (LCDC_BASECTRL_DONEIEN_Msk & ((value) << LCDC_BASECTRL_DONEIEN_Pos))
#define LCDC_BASECTRL_Msk                     _U_(0x0000003F)                                      /**< (LCDC_BASECTRL) Register Mask  */


/* -------- LCDC_BASENEXT : (LCDC Offset: 0x68) (R/W 32) Base DMA Next Register -------- */
#define LCDC_BASENEXT_NEXT_Pos                _U_(0)                                               /**< (LCDC_BASENEXT) DMA Descriptor Next Address Position */
#define LCDC_BASENEXT_NEXT_Msk                (_U_(0xFFFFFFFF) << LCDC_BASENEXT_NEXT_Pos)          /**< (LCDC_BASENEXT) DMA Descriptor Next Address Mask */
#define LCDC_BASENEXT_NEXT(value)             (LCDC_BASENEXT_NEXT_Msk & ((value) << LCDC_BASENEXT_NEXT_Pos))
#define LCDC_BASENEXT_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_BASENEXT) Register Mask  */


/* -------- LCDC_BASECFG0 : (LCDC Offset: 0x6C) (R/W 32) Base Layer Configuration Register 0 -------- */
#define LCDC_BASECFG0_SIF_Pos                 _U_(0)                                               /**< (LCDC_BASECFG0) Source Interface Position */
#define LCDC_BASECFG0_SIF_Msk                 (_U_(0x1) << LCDC_BASECFG0_SIF_Pos)                  /**< (LCDC_BASECFG0) Source Interface Mask */
#define LCDC_BASECFG0_SIF(value)              (LCDC_BASECFG0_SIF_Msk & ((value) << LCDC_BASECFG0_SIF_Pos))
#define LCDC_BASECFG0_BLEN_Pos                _U_(4)                                               /**< (LCDC_BASECFG0) AHB Burst Length Position */
#define LCDC_BASECFG0_BLEN_Msk                (_U_(0x3) << LCDC_BASECFG0_BLEN_Pos)                 /**< (LCDC_BASECFG0) AHB Burst Length Mask */
#define LCDC_BASECFG0_BLEN(value)             (LCDC_BASECFG0_BLEN_Msk & ((value) << LCDC_BASECFG0_BLEN_Pos))
#define   LCDC_BASECFG0_BLEN_AHB_SINGLE_Val   _U_(0x0)                                             /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_BASECFG0_BLEN_AHB_INCR4_Val    _U_(0x1)                                             /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_BASECFG0_BLEN_AHB_INCR8_Val    _U_(0x2)                                             /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_BASECFG0_BLEN_AHB_INCR16_Val   _U_(0x3)                                             /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_BASECFG0_BLEN_AHB_SINGLE         (LCDC_BASECFG0_BLEN_AHB_SINGLE_Val << LCDC_BASECFG0_BLEN_Pos) /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_BASECFG0_BLEN_AHB_INCR4          (LCDC_BASECFG0_BLEN_AHB_INCR4_Val << LCDC_BASECFG0_BLEN_Pos) /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_BASECFG0_BLEN_AHB_INCR8          (LCDC_BASECFG0_BLEN_AHB_INCR8_Val << LCDC_BASECFG0_BLEN_Pos) /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_BASECFG0_BLEN_AHB_INCR16         (LCDC_BASECFG0_BLEN_AHB_INCR16_Val << LCDC_BASECFG0_BLEN_Pos) /**< (LCDC_BASECFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_BASECFG0_DLBO_Pos                _U_(8)                                               /**< (LCDC_BASECFG0) Defined Length Burst Only For Channel Bus Transaction Position */
#define LCDC_BASECFG0_DLBO_Msk                (_U_(0x1) << LCDC_BASECFG0_DLBO_Pos)                 /**< (LCDC_BASECFG0) Defined Length Burst Only For Channel Bus Transaction Mask */
#define LCDC_BASECFG0_DLBO(value)             (LCDC_BASECFG0_DLBO_Msk & ((value) << LCDC_BASECFG0_DLBO_Pos))
#define LCDC_BASECFG0_Msk                     _U_(0x00000131)                                      /**< (LCDC_BASECFG0) Register Mask  */


/* -------- LCDC_BASECFG1 : (LCDC Offset: 0x70) (R/W 32) Base Layer Configuration Register 1 -------- */
#define LCDC_BASECFG1_CLUTEN_Pos              _U_(0)                                               /**< (LCDC_BASECFG1) Color Lookup Table Mode Enable Position */
#define LCDC_BASECFG1_CLUTEN_Msk              (_U_(0x1) << LCDC_BASECFG1_CLUTEN_Pos)               /**< (LCDC_BASECFG1) Color Lookup Table Mode Enable Mask */
#define LCDC_BASECFG1_CLUTEN(value)           (LCDC_BASECFG1_CLUTEN_Msk & ((value) << LCDC_BASECFG1_CLUTEN_Pos))
#define LCDC_BASECFG1_RGBMODE_Pos             _U_(4)                                               /**< (LCDC_BASECFG1) RGB Mode Input Selection Position */
#define LCDC_BASECFG1_RGBMODE_Msk             (_U_(0xF) << LCDC_BASECFG1_RGBMODE_Pos)              /**< (LCDC_BASECFG1) RGB Mode Input Selection Mask */
#define LCDC_BASECFG1_RGBMODE(value)          (LCDC_BASECFG1_RGBMODE_Msk & ((value) << LCDC_BASECFG1_RGBMODE_Pos))
#define   LCDC_BASECFG1_RGBMODE_12BPP_RGB_444_Val _U_(0x0)                                             /**< (LCDC_BASECFG1) 12 bpp RGB 444  */
#define   LCDC_BASECFG1_RGBMODE_16BPP_ARGB_4444_Val _U_(0x1)                                             /**< (LCDC_BASECFG1) 16 bpp ARGB 4444  */
#define   LCDC_BASECFG1_RGBMODE_16BPP_RGBA_4444_Val _U_(0x2)                                             /**< (LCDC_BASECFG1) 16 bpp RGBA 4444  */
#define   LCDC_BASECFG1_RGBMODE_16BPP_RGB_565_Val _U_(0x3)                                             /**< (LCDC_BASECFG1) 16 bpp RGB 565  */
#define   LCDC_BASECFG1_RGBMODE_16BPP_TRGB_1555_Val _U_(0x4)                                             /**< (LCDC_BASECFG1) 16 bpp TRGB 1555  */
#define   LCDC_BASECFG1_RGBMODE_18BPP_RGB_666_Val _U_(0x5)                                             /**< (LCDC_BASECFG1) 18 bpp RGB 666  */
#define   LCDC_BASECFG1_RGBMODE_18BPP_RGB_666PACKED_Val _U_(0x6)                                             /**< (LCDC_BASECFG1) 18 bpp RGB 666 PACKED  */
#define   LCDC_BASECFG1_RGBMODE_19BPP_TRGB_1666_Val _U_(0x7)                                             /**< (LCDC_BASECFG1) 19 bpp TRGB 1666  */
#define   LCDC_BASECFG1_RGBMODE_19BPP_TRGB_PACKED_Val _U_(0x8)                                             /**< (LCDC_BASECFG1) 19 bpp TRGB 1666 PACKED  */
#define   LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_Val _U_(0x9)                                             /**< (LCDC_BASECFG1) 24 bpp RGB 888  */
#define   LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_PACKED_Val _U_(0xA)                                             /**< (LCDC_BASECFG1) 24 bpp RGB 888 PACKED  */
#define   LCDC_BASECFG1_RGBMODE_25BPP_TRGB_1888_Val _U_(0xB)                                             /**< (LCDC_BASECFG1) 25 bpp TRGB 1888  */
#define   LCDC_BASECFG1_RGBMODE_32BPP_ARGB_8888_Val _U_(0xC)                                             /**< (LCDC_BASECFG1) 32 bpp ARGB 8888  */
#define   LCDC_BASECFG1_RGBMODE_32BPP_RGBA_8888_Val _U_(0xD)                                             /**< (LCDC_BASECFG1) 32 bpp RGBA 8888  */
#define LCDC_BASECFG1_RGBMODE_12BPP_RGB_444   (LCDC_BASECFG1_RGBMODE_12BPP_RGB_444_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 12 bpp RGB 444 Position  */
#define LCDC_BASECFG1_RGBMODE_16BPP_ARGB_4444 (LCDC_BASECFG1_RGBMODE_16BPP_ARGB_4444_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 16 bpp ARGB 4444 Position  */
#define LCDC_BASECFG1_RGBMODE_16BPP_RGBA_4444 (LCDC_BASECFG1_RGBMODE_16BPP_RGBA_4444_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 16 bpp RGBA 4444 Position  */
#define LCDC_BASECFG1_RGBMODE_16BPP_RGB_565   (LCDC_BASECFG1_RGBMODE_16BPP_RGB_565_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 16 bpp RGB 565 Position  */
#define LCDC_BASECFG1_RGBMODE_16BPP_TRGB_1555 (LCDC_BASECFG1_RGBMODE_16BPP_TRGB_1555_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 16 bpp TRGB 1555 Position  */
#define LCDC_BASECFG1_RGBMODE_18BPP_RGB_666   (LCDC_BASECFG1_RGBMODE_18BPP_RGB_666_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 18 bpp RGB 666 Position  */
#define LCDC_BASECFG1_RGBMODE_18BPP_RGB_666PACKED (LCDC_BASECFG1_RGBMODE_18BPP_RGB_666PACKED_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 18 bpp RGB 666 PACKED Position  */
#define LCDC_BASECFG1_RGBMODE_19BPP_TRGB_1666 (LCDC_BASECFG1_RGBMODE_19BPP_TRGB_1666_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 19 bpp TRGB 1666 Position  */
#define LCDC_BASECFG1_RGBMODE_19BPP_TRGB_PACKED (LCDC_BASECFG1_RGBMODE_19BPP_TRGB_PACKED_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 19 bpp TRGB 1666 PACKED Position  */
#define LCDC_BASECFG1_RGBMODE_24BPP_RGB_888   (LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 24 bpp RGB 888 Position  */
#define LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_PACKED (LCDC_BASECFG1_RGBMODE_24BPP_RGB_888_PACKED_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 24 bpp RGB 888 PACKED Position  */
#define LCDC_BASECFG1_RGBMODE_25BPP_TRGB_1888 (LCDC_BASECFG1_RGBMODE_25BPP_TRGB_1888_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 25 bpp TRGB 1888 Position  */
#define LCDC_BASECFG1_RGBMODE_32BPP_ARGB_8888 (LCDC_BASECFG1_RGBMODE_32BPP_ARGB_8888_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 32 bpp ARGB 8888 Position  */
#define LCDC_BASECFG1_RGBMODE_32BPP_RGBA_8888 (LCDC_BASECFG1_RGBMODE_32BPP_RGBA_8888_Val << LCDC_BASECFG1_RGBMODE_Pos) /**< (LCDC_BASECFG1) 32 bpp RGBA 8888 Position  */
#define LCDC_BASECFG1_CLUTMODE_Pos            _U_(8)                                               /**< (LCDC_BASECFG1) Color Lookup Table Mode Input Selection Position */
#define LCDC_BASECFG1_CLUTMODE_Msk            (_U_(0x3) << LCDC_BASECFG1_CLUTMODE_Pos)             /**< (LCDC_BASECFG1) Color Lookup Table Mode Input Selection Mask */
#define LCDC_BASECFG1_CLUTMODE(value)         (LCDC_BASECFG1_CLUTMODE_Msk & ((value) << LCDC_BASECFG1_CLUTMODE_Pos))
#define   LCDC_BASECFG1_CLUTMODE_CLUT_1BPP_Val _U_(0x0)                                             /**< (LCDC_BASECFG1) Color Lookup Table mode set to 1 bit per pixel  */
#define   LCDC_BASECFG1_CLUTMODE_CLUT_2BPP_Val _U_(0x1)                                             /**< (LCDC_BASECFG1) Color Lookup Table mode set to 2 bits per pixel  */
#define   LCDC_BASECFG1_CLUTMODE_CLUT_4BPP_Val _U_(0x2)                                             /**< (LCDC_BASECFG1) Color Lookup Table mode set to 4 bits per pixel  */
#define   LCDC_BASECFG1_CLUTMODE_CLUT_8BPP_Val _U_(0x3)                                             /**< (LCDC_BASECFG1) Color Lookup Table mode set to 8 bits per pixel  */
#define LCDC_BASECFG1_CLUTMODE_CLUT_1BPP      (LCDC_BASECFG1_CLUTMODE_CLUT_1BPP_Val << LCDC_BASECFG1_CLUTMODE_Pos) /**< (LCDC_BASECFG1) Color Lookup Table mode set to 1 bit per pixel Position  */
#define LCDC_BASECFG1_CLUTMODE_CLUT_2BPP      (LCDC_BASECFG1_CLUTMODE_CLUT_2BPP_Val << LCDC_BASECFG1_CLUTMODE_Pos) /**< (LCDC_BASECFG1) Color Lookup Table mode set to 2 bits per pixel Position  */
#define LCDC_BASECFG1_CLUTMODE_CLUT_4BPP      (LCDC_BASECFG1_CLUTMODE_CLUT_4BPP_Val << LCDC_BASECFG1_CLUTMODE_Pos) /**< (LCDC_BASECFG1) Color Lookup Table mode set to 4 bits per pixel Position  */
#define LCDC_BASECFG1_CLUTMODE_CLUT_8BPP      (LCDC_BASECFG1_CLUTMODE_CLUT_8BPP_Val << LCDC_BASECFG1_CLUTMODE_Pos) /**< (LCDC_BASECFG1) Color Lookup Table mode set to 8 bits per pixel Position  */
#define LCDC_BASECFG1_Msk                     _U_(0x000003F1)                                      /**< (LCDC_BASECFG1) Register Mask  */


/* -------- LCDC_BASECFG2 : (LCDC Offset: 0x74) (R/W 32) Base Layer Configuration Register 2 -------- */
#define LCDC_BASECFG2_XSTRIDE_Pos             _U_(0)                                               /**< (LCDC_BASECFG2) Horizontal Stride Position */
#define LCDC_BASECFG2_XSTRIDE_Msk             (_U_(0xFFFFFFFF) << LCDC_BASECFG2_XSTRIDE_Pos)       /**< (LCDC_BASECFG2) Horizontal Stride Mask */
#define LCDC_BASECFG2_XSTRIDE(value)          (LCDC_BASECFG2_XSTRIDE_Msk & ((value) << LCDC_BASECFG2_XSTRIDE_Pos))
#define LCDC_BASECFG2_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_BASECFG2) Register Mask  */


/* -------- LCDC_BASECFG3 : (LCDC Offset: 0x78) (R/W 32) Base Layer Configuration Register 3 -------- */
#define LCDC_BASECFG3_BDEF_Pos                _U_(0)                                               /**< (LCDC_BASECFG3) Blue Default Position */
#define LCDC_BASECFG3_BDEF_Msk                (_U_(0xFF) << LCDC_BASECFG3_BDEF_Pos)                /**< (LCDC_BASECFG3) Blue Default Mask */
#define LCDC_BASECFG3_BDEF(value)             (LCDC_BASECFG3_BDEF_Msk & ((value) << LCDC_BASECFG3_BDEF_Pos))
#define LCDC_BASECFG3_GDEF_Pos                _U_(8)                                               /**< (LCDC_BASECFG3) Green Default Position */
#define LCDC_BASECFG3_GDEF_Msk                (_U_(0xFF) << LCDC_BASECFG3_GDEF_Pos)                /**< (LCDC_BASECFG3) Green Default Mask */
#define LCDC_BASECFG3_GDEF(value)             (LCDC_BASECFG3_GDEF_Msk & ((value) << LCDC_BASECFG3_GDEF_Pos))
#define LCDC_BASECFG3_RDEF_Pos                _U_(16)                                              /**< (LCDC_BASECFG3) Red Default Position */
#define LCDC_BASECFG3_RDEF_Msk                (_U_(0xFF) << LCDC_BASECFG3_RDEF_Pos)                /**< (LCDC_BASECFG3) Red Default Mask */
#define LCDC_BASECFG3_RDEF(value)             (LCDC_BASECFG3_RDEF_Msk & ((value) << LCDC_BASECFG3_RDEF_Pos))
#define LCDC_BASECFG3_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_BASECFG3) Register Mask  */


/* -------- LCDC_BASECFG4 : (LCDC Offset: 0x7C) (R/W 32) Base Layer Configuration Register 4 -------- */
#define LCDC_BASECFG4_DMA_Pos                 _U_(8)                                               /**< (LCDC_BASECFG4) Use DMA Data Path Position */
#define LCDC_BASECFG4_DMA_Msk                 (_U_(0x1) << LCDC_BASECFG4_DMA_Pos)                  /**< (LCDC_BASECFG4) Use DMA Data Path Mask */
#define LCDC_BASECFG4_DMA(value)              (LCDC_BASECFG4_DMA_Msk & ((value) << LCDC_BASECFG4_DMA_Pos))
#define LCDC_BASECFG4_REP_Pos                 _U_(9)                                               /**< (LCDC_BASECFG4) Use Replication logic to expand RGB color to 24 bits Position */
#define LCDC_BASECFG4_REP_Msk                 (_U_(0x1) << LCDC_BASECFG4_REP_Pos)                  /**< (LCDC_BASECFG4) Use Replication logic to expand RGB color to 24 bits Mask */
#define LCDC_BASECFG4_REP(value)              (LCDC_BASECFG4_REP_Msk & ((value) << LCDC_BASECFG4_REP_Pos))
#define LCDC_BASECFG4_DISCEN_Pos              _U_(11)                                              /**< (LCDC_BASECFG4) Discard Area Enable Position */
#define LCDC_BASECFG4_DISCEN_Msk              (_U_(0x1) << LCDC_BASECFG4_DISCEN_Pos)               /**< (LCDC_BASECFG4) Discard Area Enable Mask */
#define LCDC_BASECFG4_DISCEN(value)           (LCDC_BASECFG4_DISCEN_Msk & ((value) << LCDC_BASECFG4_DISCEN_Pos))
#define LCDC_BASECFG4_Msk                     _U_(0x00000B00)                                      /**< (LCDC_BASECFG4) Register Mask  */


/* -------- LCDC_BASECFG5 : (LCDC Offset: 0x80) (R/W 32) Base Layer Configuration Register 5 -------- */
#define LCDC_BASECFG5_DISCXPOS_Pos            _U_(0)                                               /**< (LCDC_BASECFG5) Discard Area Horizontal Coordinate Position */
#define LCDC_BASECFG5_DISCXPOS_Msk            (_U_(0x7FF) << LCDC_BASECFG5_DISCXPOS_Pos)           /**< (LCDC_BASECFG5) Discard Area Horizontal Coordinate Mask */
#define LCDC_BASECFG5_DISCXPOS(value)         (LCDC_BASECFG5_DISCXPOS_Msk & ((value) << LCDC_BASECFG5_DISCXPOS_Pos))
#define LCDC_BASECFG5_DISCYPOS_Pos            _U_(16)                                              /**< (LCDC_BASECFG5) Discard Area Vertical Coordinate Position */
#define LCDC_BASECFG5_DISCYPOS_Msk            (_U_(0x7FF) << LCDC_BASECFG5_DISCYPOS_Pos)           /**< (LCDC_BASECFG5) Discard Area Vertical Coordinate Mask */
#define LCDC_BASECFG5_DISCYPOS(value)         (LCDC_BASECFG5_DISCYPOS_Msk & ((value) << LCDC_BASECFG5_DISCYPOS_Pos))
#define LCDC_BASECFG5_Msk                     _U_(0x07FF07FF)                                      /**< (LCDC_BASECFG5) Register Mask  */


/* -------- LCDC_BASECFG6 : (LCDC Offset: 0x84) (R/W 32) Base Layer Configuration Register 6 -------- */
#define LCDC_BASECFG6_DISCXSIZE_Pos           _U_(0)                                               /**< (LCDC_BASECFG6) Discard Area Horizontal Size Position */
#define LCDC_BASECFG6_DISCXSIZE_Msk           (_U_(0x7FF) << LCDC_BASECFG6_DISCXSIZE_Pos)          /**< (LCDC_BASECFG6) Discard Area Horizontal Size Mask */
#define LCDC_BASECFG6_DISCXSIZE(value)        (LCDC_BASECFG6_DISCXSIZE_Msk & ((value) << LCDC_BASECFG6_DISCXSIZE_Pos))
#define LCDC_BASECFG6_DISCYSIZE_Pos           _U_(16)                                              /**< (LCDC_BASECFG6) Discard Area Vertical Size Position */
#define LCDC_BASECFG6_DISCYSIZE_Msk           (_U_(0x7FF) << LCDC_BASECFG6_DISCYSIZE_Pos)          /**< (LCDC_BASECFG6) Discard Area Vertical Size Mask */
#define LCDC_BASECFG6_DISCYSIZE(value)        (LCDC_BASECFG6_DISCYSIZE_Msk & ((value) << LCDC_BASECFG6_DISCYSIZE_Pos))
#define LCDC_BASECFG6_Msk                     _U_(0x07FF07FF)                                      /**< (LCDC_BASECFG6) Register Mask  */


/* -------- LCDC_OVR1CHER : (LCDC Offset: 0x140) ( /W 32) Overlay 1 Channel Enable Register -------- */
#define LCDC_OVR1CHER_CHEN_Pos                _U_(0)                                               /**< (LCDC_OVR1CHER) Channel Enable Position */
#define LCDC_OVR1CHER_CHEN_Msk                (_U_(0x1) << LCDC_OVR1CHER_CHEN_Pos)                 /**< (LCDC_OVR1CHER) Channel Enable Mask */
#define LCDC_OVR1CHER_CHEN(value)             (LCDC_OVR1CHER_CHEN_Msk & ((value) << LCDC_OVR1CHER_CHEN_Pos))
#define LCDC_OVR1CHER_UPDATEEN_Pos            _U_(1)                                               /**< (LCDC_OVR1CHER) Update Overlay Attributes Enable Position */
#define LCDC_OVR1CHER_UPDATEEN_Msk            (_U_(0x1) << LCDC_OVR1CHER_UPDATEEN_Pos)             /**< (LCDC_OVR1CHER) Update Overlay Attributes Enable Mask */
#define LCDC_OVR1CHER_UPDATEEN(value)         (LCDC_OVR1CHER_UPDATEEN_Msk & ((value) << LCDC_OVR1CHER_UPDATEEN_Pos))
#define LCDC_OVR1CHER_A2QEN_Pos               _U_(2)                                               /**< (LCDC_OVR1CHER) Add To Queue Enable Position */
#define LCDC_OVR1CHER_A2QEN_Msk               (_U_(0x1) << LCDC_OVR1CHER_A2QEN_Pos)                /**< (LCDC_OVR1CHER) Add To Queue Enable Mask */
#define LCDC_OVR1CHER_A2QEN(value)            (LCDC_OVR1CHER_A2QEN_Msk & ((value) << LCDC_OVR1CHER_A2QEN_Pos))
#define LCDC_OVR1CHER_Msk                     _U_(0x00000007)                                      /**< (LCDC_OVR1CHER) Register Mask  */


/* -------- LCDC_OVR1CHDR : (LCDC Offset: 0x144) ( /W 32) Overlay 1 Channel Disable Register -------- */
#define LCDC_OVR1CHDR_CHDIS_Pos               _U_(0)                                               /**< (LCDC_OVR1CHDR) Channel Disable Position */
#define LCDC_OVR1CHDR_CHDIS_Msk               (_U_(0x1) << LCDC_OVR1CHDR_CHDIS_Pos)                /**< (LCDC_OVR1CHDR) Channel Disable Mask */
#define LCDC_OVR1CHDR_CHDIS(value)            (LCDC_OVR1CHDR_CHDIS_Msk & ((value) << LCDC_OVR1CHDR_CHDIS_Pos))
#define LCDC_OVR1CHDR_CHRST_Pos               _U_(8)                                               /**< (LCDC_OVR1CHDR) Channel Reset Position */
#define LCDC_OVR1CHDR_CHRST_Msk               (_U_(0x1) << LCDC_OVR1CHDR_CHRST_Pos)                /**< (LCDC_OVR1CHDR) Channel Reset Mask */
#define LCDC_OVR1CHDR_CHRST(value)            (LCDC_OVR1CHDR_CHRST_Msk & ((value) << LCDC_OVR1CHDR_CHRST_Pos))
#define LCDC_OVR1CHDR_Msk                     _U_(0x00000101)                                      /**< (LCDC_OVR1CHDR) Register Mask  */


/* -------- LCDC_OVR1CHSR : (LCDC Offset: 0x148) ( R/ 32) Overlay 1 Channel Status Register -------- */
#define LCDC_OVR1CHSR_CHSR_Pos                _U_(0)                                               /**< (LCDC_OVR1CHSR) Channel Status Position */
#define LCDC_OVR1CHSR_CHSR_Msk                (_U_(0x1) << LCDC_OVR1CHSR_CHSR_Pos)                 /**< (LCDC_OVR1CHSR) Channel Status Mask */
#define LCDC_OVR1CHSR_CHSR(value)             (LCDC_OVR1CHSR_CHSR_Msk & ((value) << LCDC_OVR1CHSR_CHSR_Pos))
#define LCDC_OVR1CHSR_UPDATESR_Pos            _U_(1)                                               /**< (LCDC_OVR1CHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_OVR1CHSR_UPDATESR_Msk            (_U_(0x1) << LCDC_OVR1CHSR_UPDATESR_Pos)             /**< (LCDC_OVR1CHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_OVR1CHSR_UPDATESR(value)         (LCDC_OVR1CHSR_UPDATESR_Msk & ((value) << LCDC_OVR1CHSR_UPDATESR_Pos))
#define LCDC_OVR1CHSR_A2QSR_Pos               _U_(2)                                               /**< (LCDC_OVR1CHSR) Add To Queue Status Position */
#define LCDC_OVR1CHSR_A2QSR_Msk               (_U_(0x1) << LCDC_OVR1CHSR_A2QSR_Pos)                /**< (LCDC_OVR1CHSR) Add To Queue Status Mask */
#define LCDC_OVR1CHSR_A2QSR(value)            (LCDC_OVR1CHSR_A2QSR_Msk & ((value) << LCDC_OVR1CHSR_A2QSR_Pos))
#define LCDC_OVR1CHSR_Msk                     _U_(0x00000007)                                      /**< (LCDC_OVR1CHSR) Register Mask  */


/* -------- LCDC_OVR1IER : (LCDC Offset: 0x14C) ( /W 32) Overlay 1 Interrupt Enable Register -------- */
#define LCDC_OVR1IER_DMA_Pos                  _U_(2)                                               /**< (LCDC_OVR1IER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_OVR1IER_DMA_Msk                  (_U_(0x1) << LCDC_OVR1IER_DMA_Pos)                   /**< (LCDC_OVR1IER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_OVR1IER_DMA(value)               (LCDC_OVR1IER_DMA_Msk & ((value) << LCDC_OVR1IER_DMA_Pos))
#define LCDC_OVR1IER_DSCR_Pos                 _U_(3)                                               /**< (LCDC_OVR1IER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR1IER_DSCR_Msk                 (_U_(0x1) << LCDC_OVR1IER_DSCR_Pos)                  /**< (LCDC_OVR1IER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR1IER_DSCR(value)              (LCDC_OVR1IER_DSCR_Msk & ((value) << LCDC_OVR1IER_DSCR_Pos))
#define LCDC_OVR1IER_ADD_Pos                  _U_(4)                                               /**< (LCDC_OVR1IER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR1IER_ADD_Msk                  (_U_(0x1) << LCDC_OVR1IER_ADD_Pos)                   /**< (LCDC_OVR1IER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR1IER_ADD(value)               (LCDC_OVR1IER_ADD_Msk & ((value) << LCDC_OVR1IER_ADD_Pos))
#define LCDC_OVR1IER_DONE_Pos                 _U_(5)                                               /**< (LCDC_OVR1IER) End of List Interrupt Enable Position */
#define LCDC_OVR1IER_DONE_Msk                 (_U_(0x1) << LCDC_OVR1IER_DONE_Pos)                  /**< (LCDC_OVR1IER) End of List Interrupt Enable Mask */
#define LCDC_OVR1IER_DONE(value)              (LCDC_OVR1IER_DONE_Msk & ((value) << LCDC_OVR1IER_DONE_Pos))
#define LCDC_OVR1IER_OVR_Pos                  _U_(6)                                               /**< (LCDC_OVR1IER) Overflow Interrupt Enable Position */
#define LCDC_OVR1IER_OVR_Msk                  (_U_(0x1) << LCDC_OVR1IER_OVR_Pos)                   /**< (LCDC_OVR1IER) Overflow Interrupt Enable Mask */
#define LCDC_OVR1IER_OVR(value)               (LCDC_OVR1IER_OVR_Msk & ((value) << LCDC_OVR1IER_OVR_Pos))
#define LCDC_OVR1IER_Msk                      _U_(0x0000007C)                                      /**< (LCDC_OVR1IER) Register Mask  */


/* -------- LCDC_OVR1IDR : (LCDC Offset: 0x150) ( /W 32) Overlay 1 Interrupt Disable Register -------- */
#define LCDC_OVR1IDR_DMA_Pos                  _U_(2)                                               /**< (LCDC_OVR1IDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_OVR1IDR_DMA_Msk                  (_U_(0x1) << LCDC_OVR1IDR_DMA_Pos)                   /**< (LCDC_OVR1IDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_OVR1IDR_DMA(value)               (LCDC_OVR1IDR_DMA_Msk & ((value) << LCDC_OVR1IDR_DMA_Pos))
#define LCDC_OVR1IDR_DSCR_Pos                 _U_(3)                                               /**< (LCDC_OVR1IDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_OVR1IDR_DSCR_Msk                 (_U_(0x1) << LCDC_OVR1IDR_DSCR_Pos)                  /**< (LCDC_OVR1IDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_OVR1IDR_DSCR(value)              (LCDC_OVR1IDR_DSCR_Msk & ((value) << LCDC_OVR1IDR_DSCR_Pos))
#define LCDC_OVR1IDR_ADD_Pos                  _U_(4)                                               /**< (LCDC_OVR1IDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_OVR1IDR_ADD_Msk                  (_U_(0x1) << LCDC_OVR1IDR_ADD_Pos)                   /**< (LCDC_OVR1IDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_OVR1IDR_ADD(value)               (LCDC_OVR1IDR_ADD_Msk & ((value) << LCDC_OVR1IDR_ADD_Pos))
#define LCDC_OVR1IDR_DONE_Pos                 _U_(5)                                               /**< (LCDC_OVR1IDR) End of List Interrupt Disable Position */
#define LCDC_OVR1IDR_DONE_Msk                 (_U_(0x1) << LCDC_OVR1IDR_DONE_Pos)                  /**< (LCDC_OVR1IDR) End of List Interrupt Disable Mask */
#define LCDC_OVR1IDR_DONE(value)              (LCDC_OVR1IDR_DONE_Msk & ((value) << LCDC_OVR1IDR_DONE_Pos))
#define LCDC_OVR1IDR_OVR_Pos                  _U_(6)                                               /**< (LCDC_OVR1IDR) Overflow Interrupt Disable Position */
#define LCDC_OVR1IDR_OVR_Msk                  (_U_(0x1) << LCDC_OVR1IDR_OVR_Pos)                   /**< (LCDC_OVR1IDR) Overflow Interrupt Disable Mask */
#define LCDC_OVR1IDR_OVR(value)               (LCDC_OVR1IDR_OVR_Msk & ((value) << LCDC_OVR1IDR_OVR_Pos))
#define LCDC_OVR1IDR_Msk                      _U_(0x0000007C)                                      /**< (LCDC_OVR1IDR) Register Mask  */


/* -------- LCDC_OVR1IMR : (LCDC Offset: 0x154) ( R/ 32) Overlay 1 Interrupt Mask Register -------- */
#define LCDC_OVR1IMR_DMA_Pos                  _U_(2)                                               /**< (LCDC_OVR1IMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_OVR1IMR_DMA_Msk                  (_U_(0x1) << LCDC_OVR1IMR_DMA_Pos)                   /**< (LCDC_OVR1IMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_OVR1IMR_DMA(value)               (LCDC_OVR1IMR_DMA_Msk & ((value) << LCDC_OVR1IMR_DMA_Pos))
#define LCDC_OVR1IMR_DSCR_Pos                 _U_(3)                                               /**< (LCDC_OVR1IMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_OVR1IMR_DSCR_Msk                 (_U_(0x1) << LCDC_OVR1IMR_DSCR_Pos)                  /**< (LCDC_OVR1IMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_OVR1IMR_DSCR(value)              (LCDC_OVR1IMR_DSCR_Msk & ((value) << LCDC_OVR1IMR_DSCR_Pos))
#define LCDC_OVR1IMR_ADD_Pos                  _U_(4)                                               /**< (LCDC_OVR1IMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_OVR1IMR_ADD_Msk                  (_U_(0x1) << LCDC_OVR1IMR_ADD_Pos)                   /**< (LCDC_OVR1IMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_OVR1IMR_ADD(value)               (LCDC_OVR1IMR_ADD_Msk & ((value) << LCDC_OVR1IMR_ADD_Pos))
#define LCDC_OVR1IMR_DONE_Pos                 _U_(5)                                               /**< (LCDC_OVR1IMR) End of List Interrupt Mask Position */
#define LCDC_OVR1IMR_DONE_Msk                 (_U_(0x1) << LCDC_OVR1IMR_DONE_Pos)                  /**< (LCDC_OVR1IMR) End of List Interrupt Mask Mask */
#define LCDC_OVR1IMR_DONE(value)              (LCDC_OVR1IMR_DONE_Msk & ((value) << LCDC_OVR1IMR_DONE_Pos))
#define LCDC_OVR1IMR_OVR_Pos                  _U_(6)                                               /**< (LCDC_OVR1IMR) Overflow Interrupt Mask Position */
#define LCDC_OVR1IMR_OVR_Msk                  (_U_(0x1) << LCDC_OVR1IMR_OVR_Pos)                   /**< (LCDC_OVR1IMR) Overflow Interrupt Mask Mask */
#define LCDC_OVR1IMR_OVR(value)               (LCDC_OVR1IMR_OVR_Msk & ((value) << LCDC_OVR1IMR_OVR_Pos))
#define LCDC_OVR1IMR_Msk                      _U_(0x0000007C)                                      /**< (LCDC_OVR1IMR) Register Mask  */


/* -------- LCDC_OVR1ISR : (LCDC Offset: 0x158) ( R/ 32) Overlay 1 Interrupt Status Register -------- */
#define LCDC_OVR1ISR_DMA_Pos                  _U_(2)                                               /**< (LCDC_OVR1ISR) End of DMA Transfer Position */
#define LCDC_OVR1ISR_DMA_Msk                  (_U_(0x1) << LCDC_OVR1ISR_DMA_Pos)                   /**< (LCDC_OVR1ISR) End of DMA Transfer Mask */
#define LCDC_OVR1ISR_DMA(value)               (LCDC_OVR1ISR_DMA_Msk & ((value) << LCDC_OVR1ISR_DMA_Pos))
#define LCDC_OVR1ISR_DSCR_Pos                 _U_(3)                                               /**< (LCDC_OVR1ISR) DMA Descriptor Loaded Position */
#define LCDC_OVR1ISR_DSCR_Msk                 (_U_(0x1) << LCDC_OVR1ISR_DSCR_Pos)                  /**< (LCDC_OVR1ISR) DMA Descriptor Loaded Mask */
#define LCDC_OVR1ISR_DSCR(value)              (LCDC_OVR1ISR_DSCR_Msk & ((value) << LCDC_OVR1ISR_DSCR_Pos))
#define LCDC_OVR1ISR_ADD_Pos                  _U_(4)                                               /**< (LCDC_OVR1ISR) Head Descriptor Loaded Position */
#define LCDC_OVR1ISR_ADD_Msk                  (_U_(0x1) << LCDC_OVR1ISR_ADD_Pos)                   /**< (LCDC_OVR1ISR) Head Descriptor Loaded Mask */
#define LCDC_OVR1ISR_ADD(value)               (LCDC_OVR1ISR_ADD_Msk & ((value) << LCDC_OVR1ISR_ADD_Pos))
#define LCDC_OVR1ISR_DONE_Pos                 _U_(5)                                               /**< (LCDC_OVR1ISR) End of List Detected Position */
#define LCDC_OVR1ISR_DONE_Msk                 (_U_(0x1) << LCDC_OVR1ISR_DONE_Pos)                  /**< (LCDC_OVR1ISR) End of List Detected Mask */
#define LCDC_OVR1ISR_DONE(value)              (LCDC_OVR1ISR_DONE_Msk & ((value) << LCDC_OVR1ISR_DONE_Pos))
#define LCDC_OVR1ISR_OVR_Pos                  _U_(6)                                               /**< (LCDC_OVR1ISR) Overflow Detected Position */
#define LCDC_OVR1ISR_OVR_Msk                  (_U_(0x1) << LCDC_OVR1ISR_OVR_Pos)                   /**< (LCDC_OVR1ISR) Overflow Detected Mask */
#define LCDC_OVR1ISR_OVR(value)               (LCDC_OVR1ISR_OVR_Msk & ((value) << LCDC_OVR1ISR_OVR_Pos))
#define LCDC_OVR1ISR_Msk                      _U_(0x0000007C)                                      /**< (LCDC_OVR1ISR) Register Mask  */


/* -------- LCDC_OVR1HEAD : (LCDC Offset: 0x15C) (R/W 32) Overlay 1 DMA Head Register -------- */
#define LCDC_OVR1HEAD_HEAD_Pos                _U_(2)                                               /**< (LCDC_OVR1HEAD) DMA Head Pointer Position */
#define LCDC_OVR1HEAD_HEAD_Msk                (_U_(0x3FFFFFFF) << LCDC_OVR1HEAD_HEAD_Pos)          /**< (LCDC_OVR1HEAD) DMA Head Pointer Mask */
#define LCDC_OVR1HEAD_HEAD(value)             (LCDC_OVR1HEAD_HEAD_Msk & ((value) << LCDC_OVR1HEAD_HEAD_Pos))
#define LCDC_OVR1HEAD_Msk                     _U_(0xFFFFFFFC)                                      /**< (LCDC_OVR1HEAD) Register Mask  */


/* -------- LCDC_OVR1ADDR : (LCDC Offset: 0x160) (R/W 32) Overlay 1 DMA Address Register -------- */
#define LCDC_OVR1ADDR_ADDR_Pos                _U_(0)                                               /**< (LCDC_OVR1ADDR) DMA Transfer Overlay 1 Address Position */
#define LCDC_OVR1ADDR_ADDR_Msk                (_U_(0xFFFFFFFF) << LCDC_OVR1ADDR_ADDR_Pos)          /**< (LCDC_OVR1ADDR) DMA Transfer Overlay 1 Address Mask */
#define LCDC_OVR1ADDR_ADDR(value)             (LCDC_OVR1ADDR_ADDR_Msk & ((value) << LCDC_OVR1ADDR_ADDR_Pos))
#define LCDC_OVR1ADDR_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR1ADDR) Register Mask  */


/* -------- LCDC_OVR1CTRL : (LCDC Offset: 0x164) (R/W 32) Overlay 1 DMA Control Register -------- */
#define LCDC_OVR1CTRL_DFETCH_Pos              _U_(0)                                               /**< (LCDC_OVR1CTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_OVR1CTRL_DFETCH_Msk              (_U_(0x1) << LCDC_OVR1CTRL_DFETCH_Pos)               /**< (LCDC_OVR1CTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_OVR1CTRL_DFETCH(value)           (LCDC_OVR1CTRL_DFETCH_Msk & ((value) << LCDC_OVR1CTRL_DFETCH_Pos))
#define LCDC_OVR1CTRL_LFETCH_Pos              _U_(1)                                               /**< (LCDC_OVR1CTRL) Lookup Table Fetch Enable Position */
#define LCDC_OVR1CTRL_LFETCH_Msk              (_U_(0x1) << LCDC_OVR1CTRL_LFETCH_Pos)               /**< (LCDC_OVR1CTRL) Lookup Table Fetch Enable Mask */
#define LCDC_OVR1CTRL_LFETCH(value)           (LCDC_OVR1CTRL_LFETCH_Msk & ((value) << LCDC_OVR1CTRL_LFETCH_Pos))
#define LCDC_OVR1CTRL_DMAIEN_Pos              _U_(2)                                               /**< (LCDC_OVR1CTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_OVR1CTRL_DMAIEN_Msk              (_U_(0x1) << LCDC_OVR1CTRL_DMAIEN_Pos)               /**< (LCDC_OVR1CTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_OVR1CTRL_DMAIEN(value)           (LCDC_OVR1CTRL_DMAIEN_Msk & ((value) << LCDC_OVR1CTRL_DMAIEN_Pos))
#define LCDC_OVR1CTRL_DSCRIEN_Pos             _U_(3)                                               /**< (LCDC_OVR1CTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR1CTRL_DSCRIEN_Msk             (_U_(0x1) << LCDC_OVR1CTRL_DSCRIEN_Pos)              /**< (LCDC_OVR1CTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR1CTRL_DSCRIEN(value)          (LCDC_OVR1CTRL_DSCRIEN_Msk & ((value) << LCDC_OVR1CTRL_DSCRIEN_Pos))
#define LCDC_OVR1CTRL_ADDIEN_Pos              _U_(4)                                               /**< (LCDC_OVR1CTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_OVR1CTRL_ADDIEN_Msk              (_U_(0x1) << LCDC_OVR1CTRL_ADDIEN_Pos)               /**< (LCDC_OVR1CTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_OVR1CTRL_ADDIEN(value)           (LCDC_OVR1CTRL_ADDIEN_Msk & ((value) << LCDC_OVR1CTRL_ADDIEN_Pos))
#define LCDC_OVR1CTRL_DONEIEN_Pos             _U_(5)                                               /**< (LCDC_OVR1CTRL) End of List Interrupt Enable Position */
#define LCDC_OVR1CTRL_DONEIEN_Msk             (_U_(0x1) << LCDC_OVR1CTRL_DONEIEN_Pos)              /**< (LCDC_OVR1CTRL) End of List Interrupt Enable Mask */
#define LCDC_OVR1CTRL_DONEIEN(value)          (LCDC_OVR1CTRL_DONEIEN_Msk & ((value) << LCDC_OVR1CTRL_DONEIEN_Pos))
#define LCDC_OVR1CTRL_Msk                     _U_(0x0000003F)                                      /**< (LCDC_OVR1CTRL) Register Mask  */


/* -------- LCDC_OVR1NEXT : (LCDC Offset: 0x168) (R/W 32) Overlay 1 DMA Next Register -------- */
#define LCDC_OVR1NEXT_NEXT_Pos                _U_(0)                                               /**< (LCDC_OVR1NEXT) DMA Descriptor Next Address Position */
#define LCDC_OVR1NEXT_NEXT_Msk                (_U_(0xFFFFFFFF) << LCDC_OVR1NEXT_NEXT_Pos)          /**< (LCDC_OVR1NEXT) DMA Descriptor Next Address Mask */
#define LCDC_OVR1NEXT_NEXT(value)             (LCDC_OVR1NEXT_NEXT_Msk & ((value) << LCDC_OVR1NEXT_NEXT_Pos))
#define LCDC_OVR1NEXT_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR1NEXT) Register Mask  */


/* -------- LCDC_OVR1CFG0 : (LCDC Offset: 0x16C) (R/W 32) Overlay 1 Configuration Register 0 -------- */
#define LCDC_OVR1CFG0_SIF_Pos                 _U_(0)                                               /**< (LCDC_OVR1CFG0) Source Interface Position */
#define LCDC_OVR1CFG0_SIF_Msk                 (_U_(0x1) << LCDC_OVR1CFG0_SIF_Pos)                  /**< (LCDC_OVR1CFG0) Source Interface Mask */
#define LCDC_OVR1CFG0_SIF(value)              (LCDC_OVR1CFG0_SIF_Msk & ((value) << LCDC_OVR1CFG0_SIF_Pos))
#define LCDC_OVR1CFG0_BLEN_Pos                _U_(4)                                               /**< (LCDC_OVR1CFG0) AHB Burst Length Position */
#define LCDC_OVR1CFG0_BLEN_Msk                (_U_(0x3) << LCDC_OVR1CFG0_BLEN_Pos)                 /**< (LCDC_OVR1CFG0) AHB Burst Length Mask */
#define LCDC_OVR1CFG0_BLEN(value)             (LCDC_OVR1CFG0_BLEN_Msk & ((value) << LCDC_OVR1CFG0_BLEN_Pos))
#define   LCDC_OVR1CFG0_BLEN_AHB_BLEN_SINGLE_Val _U_(0x0)                                             /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR4_Val _U_(0x1)                                             /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR8_Val _U_(0x2)                                             /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR16_Val _U_(0x3)                                             /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_OVR1CFG0_BLEN_AHB_BLEN_SINGLE    (LCDC_OVR1CFG0_BLEN_AHB_BLEN_SINGLE_Val << LCDC_OVR1CFG0_BLEN_Pos) /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR4     (LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR4_Val << LCDC_OVR1CFG0_BLEN_Pos) /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR8     (LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR8_Val << LCDC_OVR1CFG0_BLEN_Pos) /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR16    (LCDC_OVR1CFG0_BLEN_AHB_BLEN_INCR16_Val << LCDC_OVR1CFG0_BLEN_Pos) /**< (LCDC_OVR1CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR1CFG0_DLBO_Pos                _U_(8)                                               /**< (LCDC_OVR1CFG0) Defined Length Burst Only for Channel Bus Transaction Position */
#define LCDC_OVR1CFG0_DLBO_Msk                (_U_(0x1) << LCDC_OVR1CFG0_DLBO_Pos)                 /**< (LCDC_OVR1CFG0) Defined Length Burst Only for Channel Bus Transaction Mask */
#define LCDC_OVR1CFG0_DLBO(value)             (LCDC_OVR1CFG0_DLBO_Msk & ((value) << LCDC_OVR1CFG0_DLBO_Pos))
#define LCDC_OVR1CFG0_ROTDIS_Pos              _U_(12)                                              /**< (LCDC_OVR1CFG0) Hardware Rotation Optimization Disable Position */
#define LCDC_OVR1CFG0_ROTDIS_Msk              (_U_(0x1) << LCDC_OVR1CFG0_ROTDIS_Pos)               /**< (LCDC_OVR1CFG0) Hardware Rotation Optimization Disable Mask */
#define LCDC_OVR1CFG0_ROTDIS(value)           (LCDC_OVR1CFG0_ROTDIS_Msk & ((value) << LCDC_OVR1CFG0_ROTDIS_Pos))
#define LCDC_OVR1CFG0_LOCKDIS_Pos             _U_(13)                                              /**< (LCDC_OVR1CFG0) Hardware Rotation Lock Disable Position */
#define LCDC_OVR1CFG0_LOCKDIS_Msk             (_U_(0x1) << LCDC_OVR1CFG0_LOCKDIS_Pos)              /**< (LCDC_OVR1CFG0) Hardware Rotation Lock Disable Mask */
#define LCDC_OVR1CFG0_LOCKDIS(value)          (LCDC_OVR1CFG0_LOCKDIS_Msk & ((value) << LCDC_OVR1CFG0_LOCKDIS_Pos))
#define LCDC_OVR1CFG0_Msk                     _U_(0x00003131)                                      /**< (LCDC_OVR1CFG0) Register Mask  */


/* -------- LCDC_OVR1CFG1 : (LCDC Offset: 0x170) (R/W 32) Overlay 1 Configuration Register 1 -------- */
#define LCDC_OVR1CFG1_CLUTEN_Pos              _U_(0)                                               /**< (LCDC_OVR1CFG1) Color Lookup Table Mode Enable Position */
#define LCDC_OVR1CFG1_CLUTEN_Msk              (_U_(0x1) << LCDC_OVR1CFG1_CLUTEN_Pos)               /**< (LCDC_OVR1CFG1) Color Lookup Table Mode Enable Mask */
#define LCDC_OVR1CFG1_CLUTEN(value)           (LCDC_OVR1CFG1_CLUTEN_Msk & ((value) << LCDC_OVR1CFG1_CLUTEN_Pos))
#define LCDC_OVR1CFG1_RGBMODE_Pos             _U_(4)                                               /**< (LCDC_OVR1CFG1) RGB Mode Input Selection Position */
#define LCDC_OVR1CFG1_RGBMODE_Msk             (_U_(0xF) << LCDC_OVR1CFG1_RGBMODE_Pos)              /**< (LCDC_OVR1CFG1) RGB Mode Input Selection Mask */
#define LCDC_OVR1CFG1_RGBMODE(value)          (LCDC_OVR1CFG1_RGBMODE_Msk & ((value) << LCDC_OVR1CFG1_RGBMODE_Pos))
#define   LCDC_OVR1CFG1_RGBMODE_12BPP_RGB_444_Val _U_(0x0)                                             /**< (LCDC_OVR1CFG1) 12 bpp RGB 444  */
#define   LCDC_OVR1CFG1_RGBMODE_16BPP_ARGB_4444_Val _U_(0x1)                                             /**< (LCDC_OVR1CFG1) 16 bpp ARGB 4444  */
#define   LCDC_OVR1CFG1_RGBMODE_16BPP_RGBA_4444_Val _U_(0x2)                                             /**< (LCDC_OVR1CFG1) 16 bpp RGBA 4444  */
#define   LCDC_OVR1CFG1_RGBMODE_16BPP_RGB_565_Val _U_(0x3)                                             /**< (LCDC_OVR1CFG1) 16 bpp RGB 565  */
#define   LCDC_OVR1CFG1_RGBMODE_16BPP_TRGB_1555_Val _U_(0x4)                                             /**< (LCDC_OVR1CFG1) 16 bpp TRGB 1555  */
#define   LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666_Val _U_(0x5)                                             /**< (LCDC_OVR1CFG1) 18 bpp RGB 666  */
#define   LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666PACKED_Val _U_(0x6)                                             /**< (LCDC_OVR1CFG1) 18 bpp RGB 666 PACKED  */
#define   LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_1666_Val _U_(0x7)                                             /**< (LCDC_OVR1CFG1) 19 bpp TRGB 1666  */
#define   LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_PACKED_Val _U_(0x8)                                             /**< (LCDC_OVR1CFG1) 19 bpp TRGB 1666 PACKED  */
#define   LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_Val _U_(0x9)                                             /**< (LCDC_OVR1CFG1) 24 bpp RGB 888  */
#define   LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_PACKED_Val _U_(0xA)                                             /**< (LCDC_OVR1CFG1) 24 bpp RGB 888 PACKED  */
#define   LCDC_OVR1CFG1_RGBMODE_25BPP_TRGB_1888_Val _U_(0xB)                                             /**< (LCDC_OVR1CFG1) 25 bpp TRGB 1888  */
#define   LCDC_OVR1CFG1_RGBMODE_32BPP_ARGB_8888_Val _U_(0xC)                                             /**< (LCDC_OVR1CFG1) 32 bpp ARGB 8888  */
#define   LCDC_OVR1CFG1_RGBMODE_32BPP_RGBA_8888_Val _U_(0xD)                                             /**< (LCDC_OVR1CFG1) 32 bpp RGBA 8888  */
#define LCDC_OVR1CFG1_RGBMODE_12BPP_RGB_444   (LCDC_OVR1CFG1_RGBMODE_12BPP_RGB_444_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 12 bpp RGB 444 Position  */
#define LCDC_OVR1CFG1_RGBMODE_16BPP_ARGB_4444 (LCDC_OVR1CFG1_RGBMODE_16BPP_ARGB_4444_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 16 bpp ARGB 4444 Position  */
#define LCDC_OVR1CFG1_RGBMODE_16BPP_RGBA_4444 (LCDC_OVR1CFG1_RGBMODE_16BPP_RGBA_4444_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 16 bpp RGBA 4444 Position  */
#define LCDC_OVR1CFG1_RGBMODE_16BPP_RGB_565   (LCDC_OVR1CFG1_RGBMODE_16BPP_RGB_565_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 16 bpp RGB 565 Position  */
#define LCDC_OVR1CFG1_RGBMODE_16BPP_TRGB_1555 (LCDC_OVR1CFG1_RGBMODE_16BPP_TRGB_1555_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 16 bpp TRGB 1555 Position  */
#define LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666   (LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 18 bpp RGB 666 Position  */
#define LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666PACKED (LCDC_OVR1CFG1_RGBMODE_18BPP_RGB_666PACKED_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 18 bpp RGB 666 PACKED Position  */
#define LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_1666 (LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_1666_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 19 bpp TRGB 1666 Position  */
#define LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_PACKED (LCDC_OVR1CFG1_RGBMODE_19BPP_TRGB_PACKED_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 19 bpp TRGB 1666 PACKED Position  */
#define LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888   (LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 24 bpp RGB 888 Position  */
#define LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_PACKED (LCDC_OVR1CFG1_RGBMODE_24BPP_RGB_888_PACKED_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 24 bpp RGB 888 PACKED Position  */
#define LCDC_OVR1CFG1_RGBMODE_25BPP_TRGB_1888 (LCDC_OVR1CFG1_RGBMODE_25BPP_TRGB_1888_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 25 bpp TRGB 1888 Position  */
#define LCDC_OVR1CFG1_RGBMODE_32BPP_ARGB_8888 (LCDC_OVR1CFG1_RGBMODE_32BPP_ARGB_8888_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 32 bpp ARGB 8888 Position  */
#define LCDC_OVR1CFG1_RGBMODE_32BPP_RGBA_8888 (LCDC_OVR1CFG1_RGBMODE_32BPP_RGBA_8888_Val << LCDC_OVR1CFG1_RGBMODE_Pos) /**< (LCDC_OVR1CFG1) 32 bpp RGBA 8888 Position  */
#define LCDC_OVR1CFG1_CLUTMODE_Pos            _U_(8)                                               /**< (LCDC_OVR1CFG1) Color Lookup Table Mode Input Selection Position */
#define LCDC_OVR1CFG1_CLUTMODE_Msk            (_U_(0x3) << LCDC_OVR1CFG1_CLUTMODE_Pos)             /**< (LCDC_OVR1CFG1) Color Lookup Table Mode Input Selection Mask */
#define LCDC_OVR1CFG1_CLUTMODE(value)         (LCDC_OVR1CFG1_CLUTMODE_Msk & ((value) << LCDC_OVR1CFG1_CLUTMODE_Pos))
#define   LCDC_OVR1CFG1_CLUTMODE_CLUT_1BPP_Val _U_(0x0)                                             /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 1 bit per pixel  */
#define   LCDC_OVR1CFG1_CLUTMODE_CLUT_2BPP_Val _U_(0x1)                                             /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 2 bits per pixel  */
#define   LCDC_OVR1CFG1_CLUTMODE_CLUT_4BPP_Val _U_(0x2)                                             /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 4 bits per pixel  */
#define   LCDC_OVR1CFG1_CLUTMODE_CLUT_8BPP_Val _U_(0x3)                                             /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 8 bits per pixel  */
#define LCDC_OVR1CFG1_CLUTMODE_CLUT_1BPP      (LCDC_OVR1CFG1_CLUTMODE_CLUT_1BPP_Val << LCDC_OVR1CFG1_CLUTMODE_Pos) /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 1 bit per pixel Position  */
#define LCDC_OVR1CFG1_CLUTMODE_CLUT_2BPP      (LCDC_OVR1CFG1_CLUTMODE_CLUT_2BPP_Val << LCDC_OVR1CFG1_CLUTMODE_Pos) /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 2 bits per pixel Position  */
#define LCDC_OVR1CFG1_CLUTMODE_CLUT_4BPP      (LCDC_OVR1CFG1_CLUTMODE_CLUT_4BPP_Val << LCDC_OVR1CFG1_CLUTMODE_Pos) /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 4 bits per pixel Position  */
#define LCDC_OVR1CFG1_CLUTMODE_CLUT_8BPP      (LCDC_OVR1CFG1_CLUTMODE_CLUT_8BPP_Val << LCDC_OVR1CFG1_CLUTMODE_Pos) /**< (LCDC_OVR1CFG1) Color Lookup Table mode set to 8 bits per pixel Position  */
#define LCDC_OVR1CFG1_Msk                     _U_(0x000003F1)                                      /**< (LCDC_OVR1CFG1) Register Mask  */


/* -------- LCDC_OVR1CFG2 : (LCDC Offset: 0x174) (R/W 32) Overlay 1 Configuration Register 2 -------- */
#define LCDC_OVR1CFG2_XPOS_Pos                _U_(0)                                               /**< (LCDC_OVR1CFG2) Horizontal Window Position Position */
#define LCDC_OVR1CFG2_XPOS_Msk                (_U_(0x7FF) << LCDC_OVR1CFG2_XPOS_Pos)               /**< (LCDC_OVR1CFG2) Horizontal Window Position Mask */
#define LCDC_OVR1CFG2_XPOS(value)             (LCDC_OVR1CFG2_XPOS_Msk & ((value) << LCDC_OVR1CFG2_XPOS_Pos))
#define LCDC_OVR1CFG2_YPOS_Pos                _U_(16)                                              /**< (LCDC_OVR1CFG2) Vertical Window Position Position */
#define LCDC_OVR1CFG2_YPOS_Msk                (_U_(0x7FF) << LCDC_OVR1CFG2_YPOS_Pos)               /**< (LCDC_OVR1CFG2) Vertical Window Position Mask */
#define LCDC_OVR1CFG2_YPOS(value)             (LCDC_OVR1CFG2_YPOS_Msk & ((value) << LCDC_OVR1CFG2_YPOS_Pos))
#define LCDC_OVR1CFG2_Msk                     _U_(0x07FF07FF)                                      /**< (LCDC_OVR1CFG2) Register Mask  */


/* -------- LCDC_OVR1CFG3 : (LCDC Offset: 0x178) (R/W 32) Overlay 1 Configuration Register 3 -------- */
#define LCDC_OVR1CFG3_XSIZE_Pos               _U_(0)                                               /**< (LCDC_OVR1CFG3) Horizontal Window Size Position */
#define LCDC_OVR1CFG3_XSIZE_Msk               (_U_(0x7FF) << LCDC_OVR1CFG3_XSIZE_Pos)              /**< (LCDC_OVR1CFG3) Horizontal Window Size Mask */
#define LCDC_OVR1CFG3_XSIZE(value)            (LCDC_OVR1CFG3_XSIZE_Msk & ((value) << LCDC_OVR1CFG3_XSIZE_Pos))
#define LCDC_OVR1CFG3_YSIZE_Pos               _U_(16)                                              /**< (LCDC_OVR1CFG3) Vertical Window Size Position */
#define LCDC_OVR1CFG3_YSIZE_Msk               (_U_(0x7FF) << LCDC_OVR1CFG3_YSIZE_Pos)              /**< (LCDC_OVR1CFG3) Vertical Window Size Mask */
#define LCDC_OVR1CFG3_YSIZE(value)            (LCDC_OVR1CFG3_YSIZE_Msk & ((value) << LCDC_OVR1CFG3_YSIZE_Pos))
#define LCDC_OVR1CFG3_Msk                     _U_(0x07FF07FF)                                      /**< (LCDC_OVR1CFG3) Register Mask  */


/* -------- LCDC_OVR1CFG4 : (LCDC Offset: 0x17C) (R/W 32) Overlay 1 Configuration Register 4 -------- */
#define LCDC_OVR1CFG4_XSTRIDE_Pos             _U_(0)                                               /**< (LCDC_OVR1CFG4) Horizontal Stride Position */
#define LCDC_OVR1CFG4_XSTRIDE_Msk             (_U_(0xFFFFFFFF) << LCDC_OVR1CFG4_XSTRIDE_Pos)       /**< (LCDC_OVR1CFG4) Horizontal Stride Mask */
#define LCDC_OVR1CFG4_XSTRIDE(value)          (LCDC_OVR1CFG4_XSTRIDE_Msk & ((value) << LCDC_OVR1CFG4_XSTRIDE_Pos))
#define LCDC_OVR1CFG4_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR1CFG4) Register Mask  */


/* -------- LCDC_OVR1CFG5 : (LCDC Offset: 0x180) (R/W 32) Overlay 1 Configuration Register 5 -------- */
#define LCDC_OVR1CFG5_PSTRIDE_Pos             _U_(0)                                               /**< (LCDC_OVR1CFG5) Pixel Stride Position */
#define LCDC_OVR1CFG5_PSTRIDE_Msk             (_U_(0xFFFFFFFF) << LCDC_OVR1CFG5_PSTRIDE_Pos)       /**< (LCDC_OVR1CFG5) Pixel Stride Mask */
#define LCDC_OVR1CFG5_PSTRIDE(value)          (LCDC_OVR1CFG5_PSTRIDE_Msk & ((value) << LCDC_OVR1CFG5_PSTRIDE_Pos))
#define LCDC_OVR1CFG5_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR1CFG5) Register Mask  */


/* -------- LCDC_OVR1CFG6 : (LCDC Offset: 0x184) (R/W 32) Overlay 1 Configuration Register 6 -------- */
#define LCDC_OVR1CFG6_BDEF_Pos                _U_(0)                                               /**< (LCDC_OVR1CFG6) Blue Default Position */
#define LCDC_OVR1CFG6_BDEF_Msk                (_U_(0xFF) << LCDC_OVR1CFG6_BDEF_Pos)                /**< (LCDC_OVR1CFG6) Blue Default Mask */
#define LCDC_OVR1CFG6_BDEF(value)             (LCDC_OVR1CFG6_BDEF_Msk & ((value) << LCDC_OVR1CFG6_BDEF_Pos))
#define LCDC_OVR1CFG6_GDEF_Pos                _U_(8)                                               /**< (LCDC_OVR1CFG6) Green Default Position */
#define LCDC_OVR1CFG6_GDEF_Msk                (_U_(0xFF) << LCDC_OVR1CFG6_GDEF_Pos)                /**< (LCDC_OVR1CFG6) Green Default Mask */
#define LCDC_OVR1CFG6_GDEF(value)             (LCDC_OVR1CFG6_GDEF_Msk & ((value) << LCDC_OVR1CFG6_GDEF_Pos))
#define LCDC_OVR1CFG6_RDEF_Pos                _U_(16)                                              /**< (LCDC_OVR1CFG6) Red Default Position */
#define LCDC_OVR1CFG6_RDEF_Msk                (_U_(0xFF) << LCDC_OVR1CFG6_RDEF_Pos)                /**< (LCDC_OVR1CFG6) Red Default Mask */
#define LCDC_OVR1CFG6_RDEF(value)             (LCDC_OVR1CFG6_RDEF_Msk & ((value) << LCDC_OVR1CFG6_RDEF_Pos))
#define LCDC_OVR1CFG6_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_OVR1CFG6) Register Mask  */


/* -------- LCDC_OVR1CFG7 : (LCDC Offset: 0x188) (R/W 32) Overlay 1 Configuration Register 7 -------- */
#define LCDC_OVR1CFG7_BKEY_Pos                _U_(0)                                               /**< (LCDC_OVR1CFG7) Blue Color Component Chroma Key Position */
#define LCDC_OVR1CFG7_BKEY_Msk                (_U_(0xFF) << LCDC_OVR1CFG7_BKEY_Pos)                /**< (LCDC_OVR1CFG7) Blue Color Component Chroma Key Mask */
#define LCDC_OVR1CFG7_BKEY(value)             (LCDC_OVR1CFG7_BKEY_Msk & ((value) << LCDC_OVR1CFG7_BKEY_Pos))
#define LCDC_OVR1CFG7_GKEY_Pos                _U_(8)                                               /**< (LCDC_OVR1CFG7) Green Color Component Chroma Key Position */
#define LCDC_OVR1CFG7_GKEY_Msk                (_U_(0xFF) << LCDC_OVR1CFG7_GKEY_Pos)                /**< (LCDC_OVR1CFG7) Green Color Component Chroma Key Mask */
#define LCDC_OVR1CFG7_GKEY(value)             (LCDC_OVR1CFG7_GKEY_Msk & ((value) << LCDC_OVR1CFG7_GKEY_Pos))
#define LCDC_OVR1CFG7_RKEY_Pos                _U_(16)                                              /**< (LCDC_OVR1CFG7) Red Color Component Chroma Key Position */
#define LCDC_OVR1CFG7_RKEY_Msk                (_U_(0xFF) << LCDC_OVR1CFG7_RKEY_Pos)                /**< (LCDC_OVR1CFG7) Red Color Component Chroma Key Mask */
#define LCDC_OVR1CFG7_RKEY(value)             (LCDC_OVR1CFG7_RKEY_Msk & ((value) << LCDC_OVR1CFG7_RKEY_Pos))
#define LCDC_OVR1CFG7_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_OVR1CFG7) Register Mask  */


/* -------- LCDC_OVR1CFG8 : (LCDC Offset: 0x18C) (R/W 32) Overlay 1 Configuration Register 8 -------- */
#define LCDC_OVR1CFG8_BMASK_Pos               _U_(0)                                               /**< (LCDC_OVR1CFG8) Blue Color Component Chroma Key Mask Position */
#define LCDC_OVR1CFG8_BMASK_Msk               (_U_(0xFF) << LCDC_OVR1CFG8_BMASK_Pos)               /**< (LCDC_OVR1CFG8) Blue Color Component Chroma Key Mask Mask */
#define LCDC_OVR1CFG8_BMASK(value)            (LCDC_OVR1CFG8_BMASK_Msk & ((value) << LCDC_OVR1CFG8_BMASK_Pos))
#define LCDC_OVR1CFG8_GMASK_Pos               _U_(8)                                               /**< (LCDC_OVR1CFG8) Green Color Component Chroma Key Mask Position */
#define LCDC_OVR1CFG8_GMASK_Msk               (_U_(0xFF) << LCDC_OVR1CFG8_GMASK_Pos)               /**< (LCDC_OVR1CFG8) Green Color Component Chroma Key Mask Mask */
#define LCDC_OVR1CFG8_GMASK(value)            (LCDC_OVR1CFG8_GMASK_Msk & ((value) << LCDC_OVR1CFG8_GMASK_Pos))
#define LCDC_OVR1CFG8_RMASK_Pos               _U_(16)                                              /**< (LCDC_OVR1CFG8) Red Color Component Chroma Key Mask Position */
#define LCDC_OVR1CFG8_RMASK_Msk               (_U_(0xFF) << LCDC_OVR1CFG8_RMASK_Pos)               /**< (LCDC_OVR1CFG8) Red Color Component Chroma Key Mask Mask */
#define LCDC_OVR1CFG8_RMASK(value)            (LCDC_OVR1CFG8_RMASK_Msk & ((value) << LCDC_OVR1CFG8_RMASK_Pos))
#define LCDC_OVR1CFG8_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_OVR1CFG8) Register Mask  */


/* -------- LCDC_OVR1CFG9 : (LCDC Offset: 0x190) (R/W 32) Overlay 1 Configuration Register 9 -------- */
#define LCDC_OVR1CFG9_CRKEY_Pos               _U_(0)                                               /**< (LCDC_OVR1CFG9) Blender Chroma Key Enable Position */
#define LCDC_OVR1CFG9_CRKEY_Msk               (_U_(0x1) << LCDC_OVR1CFG9_CRKEY_Pos)                /**< (LCDC_OVR1CFG9) Blender Chroma Key Enable Mask */
#define LCDC_OVR1CFG9_CRKEY(value)            (LCDC_OVR1CFG9_CRKEY_Msk & ((value) << LCDC_OVR1CFG9_CRKEY_Pos))
#define LCDC_OVR1CFG9_INV_Pos                 _U_(1)                                               /**< (LCDC_OVR1CFG9) Blender Inverted Blender Output Enable Position */
#define LCDC_OVR1CFG9_INV_Msk                 (_U_(0x1) << LCDC_OVR1CFG9_INV_Pos)                  /**< (LCDC_OVR1CFG9) Blender Inverted Blender Output Enable Mask */
#define LCDC_OVR1CFG9_INV(value)              (LCDC_OVR1CFG9_INV_Msk & ((value) << LCDC_OVR1CFG9_INV_Pos))
#define LCDC_OVR1CFG9_ITER2BL_Pos             _U_(2)                                               /**< (LCDC_OVR1CFG9) Blender Iterated Color Enable Position */
#define LCDC_OVR1CFG9_ITER2BL_Msk             (_U_(0x1) << LCDC_OVR1CFG9_ITER2BL_Pos)              /**< (LCDC_OVR1CFG9) Blender Iterated Color Enable Mask */
#define LCDC_OVR1CFG9_ITER2BL(value)          (LCDC_OVR1CFG9_ITER2BL_Msk & ((value) << LCDC_OVR1CFG9_ITER2BL_Pos))
#define LCDC_OVR1CFG9_ITER_Pos                _U_(3)                                               /**< (LCDC_OVR1CFG9) Blender Use Iterated Color Position */
#define LCDC_OVR1CFG9_ITER_Msk                (_U_(0x1) << LCDC_OVR1CFG9_ITER_Pos)                 /**< (LCDC_OVR1CFG9) Blender Use Iterated Color Mask */
#define LCDC_OVR1CFG9_ITER(value)             (LCDC_OVR1CFG9_ITER_Msk & ((value) << LCDC_OVR1CFG9_ITER_Pos))
#define LCDC_OVR1CFG9_REVALPHA_Pos            _U_(4)                                               /**< (LCDC_OVR1CFG9) Blender Reverse Alpha Position */
#define LCDC_OVR1CFG9_REVALPHA_Msk            (_U_(0x1) << LCDC_OVR1CFG9_REVALPHA_Pos)             /**< (LCDC_OVR1CFG9) Blender Reverse Alpha Mask */
#define LCDC_OVR1CFG9_REVALPHA(value)         (LCDC_OVR1CFG9_REVALPHA_Msk & ((value) << LCDC_OVR1CFG9_REVALPHA_Pos))
#define LCDC_OVR1CFG9_GAEN_Pos                _U_(5)                                               /**< (LCDC_OVR1CFG9) Blender Global Alpha Enable Position */
#define LCDC_OVR1CFG9_GAEN_Msk                (_U_(0x1) << LCDC_OVR1CFG9_GAEN_Pos)                 /**< (LCDC_OVR1CFG9) Blender Global Alpha Enable Mask */
#define LCDC_OVR1CFG9_GAEN(value)             (LCDC_OVR1CFG9_GAEN_Msk & ((value) << LCDC_OVR1CFG9_GAEN_Pos))
#define LCDC_OVR1CFG9_LAEN_Pos                _U_(6)                                               /**< (LCDC_OVR1CFG9) Blender Local Alpha Enable Position */
#define LCDC_OVR1CFG9_LAEN_Msk                (_U_(0x1) << LCDC_OVR1CFG9_LAEN_Pos)                 /**< (LCDC_OVR1CFG9) Blender Local Alpha Enable Mask */
#define LCDC_OVR1CFG9_LAEN(value)             (LCDC_OVR1CFG9_LAEN_Msk & ((value) << LCDC_OVR1CFG9_LAEN_Pos))
#define LCDC_OVR1CFG9_OVR_Pos                 _U_(7)                                               /**< (LCDC_OVR1CFG9) Blender Overlay Layer Enable Position */
#define LCDC_OVR1CFG9_OVR_Msk                 (_U_(0x1) << LCDC_OVR1CFG9_OVR_Pos)                  /**< (LCDC_OVR1CFG9) Blender Overlay Layer Enable Mask */
#define LCDC_OVR1CFG9_OVR(value)              (LCDC_OVR1CFG9_OVR_Msk & ((value) << LCDC_OVR1CFG9_OVR_Pos))
#define LCDC_OVR1CFG9_DMA_Pos                 _U_(8)                                               /**< (LCDC_OVR1CFG9) Blender DMA Layer Enable Position */
#define LCDC_OVR1CFG9_DMA_Msk                 (_U_(0x1) << LCDC_OVR1CFG9_DMA_Pos)                  /**< (LCDC_OVR1CFG9) Blender DMA Layer Enable Mask */
#define LCDC_OVR1CFG9_DMA(value)              (LCDC_OVR1CFG9_DMA_Msk & ((value) << LCDC_OVR1CFG9_DMA_Pos))
#define LCDC_OVR1CFG9_REP_Pos                 _U_(9)                                               /**< (LCDC_OVR1CFG9) Use Replication logic to expand RGB color to 24 bits Position */
#define LCDC_OVR1CFG9_REP_Msk                 (_U_(0x1) << LCDC_OVR1CFG9_REP_Pos)                  /**< (LCDC_OVR1CFG9) Use Replication logic to expand RGB color to 24 bits Mask */
#define LCDC_OVR1CFG9_REP(value)              (LCDC_OVR1CFG9_REP_Msk & ((value) << LCDC_OVR1CFG9_REP_Pos))
#define LCDC_OVR1CFG9_DSTKEY_Pos              _U_(10)                                              /**< (LCDC_OVR1CFG9) Destination Chroma Keying Position */
#define LCDC_OVR1CFG9_DSTKEY_Msk              (_U_(0x1) << LCDC_OVR1CFG9_DSTKEY_Pos)               /**< (LCDC_OVR1CFG9) Destination Chroma Keying Mask */
#define LCDC_OVR1CFG9_DSTKEY(value)           (LCDC_OVR1CFG9_DSTKEY_Msk & ((value) << LCDC_OVR1CFG9_DSTKEY_Pos))
#define LCDC_OVR1CFG9_GA_Pos                  _U_(16)                                              /**< (LCDC_OVR1CFG9) Blender Global Alpha Position */
#define LCDC_OVR1CFG9_GA_Msk                  (_U_(0xFF) << LCDC_OVR1CFG9_GA_Pos)                  /**< (LCDC_OVR1CFG9) Blender Global Alpha Mask */
#define LCDC_OVR1CFG9_GA(value)               (LCDC_OVR1CFG9_GA_Msk & ((value) << LCDC_OVR1CFG9_GA_Pos))
#define LCDC_OVR1CFG9_Msk                     _U_(0x00FF07FF)                                      /**< (LCDC_OVR1CFG9) Register Mask  */


/* -------- LCDC_OVR2CHER : (LCDC Offset: 0x240) ( /W 32) Overlay 2 Channel Enable Register -------- */
#define LCDC_OVR2CHER_CHEN_Pos                _U_(0)                                               /**< (LCDC_OVR2CHER) Channel Enable Position */
#define LCDC_OVR2CHER_CHEN_Msk                (_U_(0x1) << LCDC_OVR2CHER_CHEN_Pos)                 /**< (LCDC_OVR2CHER) Channel Enable Mask */
#define LCDC_OVR2CHER_CHEN(value)             (LCDC_OVR2CHER_CHEN_Msk & ((value) << LCDC_OVR2CHER_CHEN_Pos))
#define LCDC_OVR2CHER_UPDATEEN_Pos            _U_(1)                                               /**< (LCDC_OVR2CHER) Update Overlay Attributes Enable Position */
#define LCDC_OVR2CHER_UPDATEEN_Msk            (_U_(0x1) << LCDC_OVR2CHER_UPDATEEN_Pos)             /**< (LCDC_OVR2CHER) Update Overlay Attributes Enable Mask */
#define LCDC_OVR2CHER_UPDATEEN(value)         (LCDC_OVR2CHER_UPDATEEN_Msk & ((value) << LCDC_OVR2CHER_UPDATEEN_Pos))
#define LCDC_OVR2CHER_A2QEN_Pos               _U_(2)                                               /**< (LCDC_OVR2CHER) Add To Queue Enable Position */
#define LCDC_OVR2CHER_A2QEN_Msk               (_U_(0x1) << LCDC_OVR2CHER_A2QEN_Pos)                /**< (LCDC_OVR2CHER) Add To Queue Enable Mask */
#define LCDC_OVR2CHER_A2QEN(value)            (LCDC_OVR2CHER_A2QEN_Msk & ((value) << LCDC_OVR2CHER_A2QEN_Pos))
#define LCDC_OVR2CHER_Msk                     _U_(0x00000007)                                      /**< (LCDC_OVR2CHER) Register Mask  */


/* -------- LCDC_OVR2CHDR : (LCDC Offset: 0x244) ( /W 32) Overlay 2 Channel Disable Register -------- */
#define LCDC_OVR2CHDR_CHDIS_Pos               _U_(0)                                               /**< (LCDC_OVR2CHDR) Channel Disable Position */
#define LCDC_OVR2CHDR_CHDIS_Msk               (_U_(0x1) << LCDC_OVR2CHDR_CHDIS_Pos)                /**< (LCDC_OVR2CHDR) Channel Disable Mask */
#define LCDC_OVR2CHDR_CHDIS(value)            (LCDC_OVR2CHDR_CHDIS_Msk & ((value) << LCDC_OVR2CHDR_CHDIS_Pos))
#define LCDC_OVR2CHDR_CHRST_Pos               _U_(8)                                               /**< (LCDC_OVR2CHDR) Channel Reset Position */
#define LCDC_OVR2CHDR_CHRST_Msk               (_U_(0x1) << LCDC_OVR2CHDR_CHRST_Pos)                /**< (LCDC_OVR2CHDR) Channel Reset Mask */
#define LCDC_OVR2CHDR_CHRST(value)            (LCDC_OVR2CHDR_CHRST_Msk & ((value) << LCDC_OVR2CHDR_CHRST_Pos))
#define LCDC_OVR2CHDR_Msk                     _U_(0x00000101)                                      /**< (LCDC_OVR2CHDR) Register Mask  */


/* -------- LCDC_OVR2CHSR : (LCDC Offset: 0x248) ( R/ 32) Overlay 2 Channel Status Register -------- */
#define LCDC_OVR2CHSR_CHSR_Pos                _U_(0)                                               /**< (LCDC_OVR2CHSR) Channel Status Position */
#define LCDC_OVR2CHSR_CHSR_Msk                (_U_(0x1) << LCDC_OVR2CHSR_CHSR_Pos)                 /**< (LCDC_OVR2CHSR) Channel Status Mask */
#define LCDC_OVR2CHSR_CHSR(value)             (LCDC_OVR2CHSR_CHSR_Msk & ((value) << LCDC_OVR2CHSR_CHSR_Pos))
#define LCDC_OVR2CHSR_UPDATESR_Pos            _U_(1)                                               /**< (LCDC_OVR2CHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_OVR2CHSR_UPDATESR_Msk            (_U_(0x1) << LCDC_OVR2CHSR_UPDATESR_Pos)             /**< (LCDC_OVR2CHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_OVR2CHSR_UPDATESR(value)         (LCDC_OVR2CHSR_UPDATESR_Msk & ((value) << LCDC_OVR2CHSR_UPDATESR_Pos))
#define LCDC_OVR2CHSR_A2QSR_Pos               _U_(2)                                               /**< (LCDC_OVR2CHSR) Add To Queue Status Position */
#define LCDC_OVR2CHSR_A2QSR_Msk               (_U_(0x1) << LCDC_OVR2CHSR_A2QSR_Pos)                /**< (LCDC_OVR2CHSR) Add To Queue Status Mask */
#define LCDC_OVR2CHSR_A2QSR(value)            (LCDC_OVR2CHSR_A2QSR_Msk & ((value) << LCDC_OVR2CHSR_A2QSR_Pos))
#define LCDC_OVR2CHSR_Msk                     _U_(0x00000007)                                      /**< (LCDC_OVR2CHSR) Register Mask  */


/* -------- LCDC_OVR2IER : (LCDC Offset: 0x24C) ( /W 32) Overlay 2 Interrupt Enable Register -------- */
#define LCDC_OVR2IER_DMA_Pos                  _U_(2)                                               /**< (LCDC_OVR2IER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_OVR2IER_DMA_Msk                  (_U_(0x1) << LCDC_OVR2IER_DMA_Pos)                   /**< (LCDC_OVR2IER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_OVR2IER_DMA(value)               (LCDC_OVR2IER_DMA_Msk & ((value) << LCDC_OVR2IER_DMA_Pos))
#define LCDC_OVR2IER_DSCR_Pos                 _U_(3)                                               /**< (LCDC_OVR2IER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR2IER_DSCR_Msk                 (_U_(0x1) << LCDC_OVR2IER_DSCR_Pos)                  /**< (LCDC_OVR2IER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR2IER_DSCR(value)              (LCDC_OVR2IER_DSCR_Msk & ((value) << LCDC_OVR2IER_DSCR_Pos))
#define LCDC_OVR2IER_ADD_Pos                  _U_(4)                                               /**< (LCDC_OVR2IER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR2IER_ADD_Msk                  (_U_(0x1) << LCDC_OVR2IER_ADD_Pos)                   /**< (LCDC_OVR2IER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR2IER_ADD(value)               (LCDC_OVR2IER_ADD_Msk & ((value) << LCDC_OVR2IER_ADD_Pos))
#define LCDC_OVR2IER_DONE_Pos                 _U_(5)                                               /**< (LCDC_OVR2IER) End of List Interrupt Enable Position */
#define LCDC_OVR2IER_DONE_Msk                 (_U_(0x1) << LCDC_OVR2IER_DONE_Pos)                  /**< (LCDC_OVR2IER) End of List Interrupt Enable Mask */
#define LCDC_OVR2IER_DONE(value)              (LCDC_OVR2IER_DONE_Msk & ((value) << LCDC_OVR2IER_DONE_Pos))
#define LCDC_OVR2IER_OVR_Pos                  _U_(6)                                               /**< (LCDC_OVR2IER) Overflow Interrupt Enable Position */
#define LCDC_OVR2IER_OVR_Msk                  (_U_(0x1) << LCDC_OVR2IER_OVR_Pos)                   /**< (LCDC_OVR2IER) Overflow Interrupt Enable Mask */
#define LCDC_OVR2IER_OVR(value)               (LCDC_OVR2IER_OVR_Msk & ((value) << LCDC_OVR2IER_OVR_Pos))
#define LCDC_OVR2IER_Msk                      _U_(0x0000007C)                                      /**< (LCDC_OVR2IER) Register Mask  */


/* -------- LCDC_OVR2IDR : (LCDC Offset: 0x250) ( /W 32) Overlay 2 Interrupt Disable Register -------- */
#define LCDC_OVR2IDR_DMA_Pos                  _U_(2)                                               /**< (LCDC_OVR2IDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_OVR2IDR_DMA_Msk                  (_U_(0x1) << LCDC_OVR2IDR_DMA_Pos)                   /**< (LCDC_OVR2IDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_OVR2IDR_DMA(value)               (LCDC_OVR2IDR_DMA_Msk & ((value) << LCDC_OVR2IDR_DMA_Pos))
#define LCDC_OVR2IDR_DSCR_Pos                 _U_(3)                                               /**< (LCDC_OVR2IDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_OVR2IDR_DSCR_Msk                 (_U_(0x1) << LCDC_OVR2IDR_DSCR_Pos)                  /**< (LCDC_OVR2IDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_OVR2IDR_DSCR(value)              (LCDC_OVR2IDR_DSCR_Msk & ((value) << LCDC_OVR2IDR_DSCR_Pos))
#define LCDC_OVR2IDR_ADD_Pos                  _U_(4)                                               /**< (LCDC_OVR2IDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_OVR2IDR_ADD_Msk                  (_U_(0x1) << LCDC_OVR2IDR_ADD_Pos)                   /**< (LCDC_OVR2IDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_OVR2IDR_ADD(value)               (LCDC_OVR2IDR_ADD_Msk & ((value) << LCDC_OVR2IDR_ADD_Pos))
#define LCDC_OVR2IDR_DONE_Pos                 _U_(5)                                               /**< (LCDC_OVR2IDR) End of List Interrupt Disable Position */
#define LCDC_OVR2IDR_DONE_Msk                 (_U_(0x1) << LCDC_OVR2IDR_DONE_Pos)                  /**< (LCDC_OVR2IDR) End of List Interrupt Disable Mask */
#define LCDC_OVR2IDR_DONE(value)              (LCDC_OVR2IDR_DONE_Msk & ((value) << LCDC_OVR2IDR_DONE_Pos))
#define LCDC_OVR2IDR_OVR_Pos                  _U_(6)                                               /**< (LCDC_OVR2IDR) Overflow Interrupt Disable Position */
#define LCDC_OVR2IDR_OVR_Msk                  (_U_(0x1) << LCDC_OVR2IDR_OVR_Pos)                   /**< (LCDC_OVR2IDR) Overflow Interrupt Disable Mask */
#define LCDC_OVR2IDR_OVR(value)               (LCDC_OVR2IDR_OVR_Msk & ((value) << LCDC_OVR2IDR_OVR_Pos))
#define LCDC_OVR2IDR_Msk                      _U_(0x0000007C)                                      /**< (LCDC_OVR2IDR) Register Mask  */


/* -------- LCDC_OVR2IMR : (LCDC Offset: 0x254) ( R/ 32) Overlay 2 Interrupt Mask Register -------- */
#define LCDC_OVR2IMR_DMA_Pos                  _U_(2)                                               /**< (LCDC_OVR2IMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_OVR2IMR_DMA_Msk                  (_U_(0x1) << LCDC_OVR2IMR_DMA_Pos)                   /**< (LCDC_OVR2IMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_OVR2IMR_DMA(value)               (LCDC_OVR2IMR_DMA_Msk & ((value) << LCDC_OVR2IMR_DMA_Pos))
#define LCDC_OVR2IMR_DSCR_Pos                 _U_(3)                                               /**< (LCDC_OVR2IMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_OVR2IMR_DSCR_Msk                 (_U_(0x1) << LCDC_OVR2IMR_DSCR_Pos)                  /**< (LCDC_OVR2IMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_OVR2IMR_DSCR(value)              (LCDC_OVR2IMR_DSCR_Msk & ((value) << LCDC_OVR2IMR_DSCR_Pos))
#define LCDC_OVR2IMR_ADD_Pos                  _U_(4)                                               /**< (LCDC_OVR2IMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_OVR2IMR_ADD_Msk                  (_U_(0x1) << LCDC_OVR2IMR_ADD_Pos)                   /**< (LCDC_OVR2IMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_OVR2IMR_ADD(value)               (LCDC_OVR2IMR_ADD_Msk & ((value) << LCDC_OVR2IMR_ADD_Pos))
#define LCDC_OVR2IMR_DONE_Pos                 _U_(5)                                               /**< (LCDC_OVR2IMR) End of List Interrupt Mask Position */
#define LCDC_OVR2IMR_DONE_Msk                 (_U_(0x1) << LCDC_OVR2IMR_DONE_Pos)                  /**< (LCDC_OVR2IMR) End of List Interrupt Mask Mask */
#define LCDC_OVR2IMR_DONE(value)              (LCDC_OVR2IMR_DONE_Msk & ((value) << LCDC_OVR2IMR_DONE_Pos))
#define LCDC_OVR2IMR_OVR_Pos                  _U_(6)                                               /**< (LCDC_OVR2IMR) Overflow Interrupt Mask Position */
#define LCDC_OVR2IMR_OVR_Msk                  (_U_(0x1) << LCDC_OVR2IMR_OVR_Pos)                   /**< (LCDC_OVR2IMR) Overflow Interrupt Mask Mask */
#define LCDC_OVR2IMR_OVR(value)               (LCDC_OVR2IMR_OVR_Msk & ((value) << LCDC_OVR2IMR_OVR_Pos))
#define LCDC_OVR2IMR_Msk                      _U_(0x0000007C)                                      /**< (LCDC_OVR2IMR) Register Mask  */


/* -------- LCDC_OVR2ISR : (LCDC Offset: 0x258) ( R/ 32) Overlay 2 Interrupt Status Register -------- */
#define LCDC_OVR2ISR_DMA_Pos                  _U_(2)                                               /**< (LCDC_OVR2ISR) End of DMA Transfer Position */
#define LCDC_OVR2ISR_DMA_Msk                  (_U_(0x1) << LCDC_OVR2ISR_DMA_Pos)                   /**< (LCDC_OVR2ISR) End of DMA Transfer Mask */
#define LCDC_OVR2ISR_DMA(value)               (LCDC_OVR2ISR_DMA_Msk & ((value) << LCDC_OVR2ISR_DMA_Pos))
#define LCDC_OVR2ISR_DSCR_Pos                 _U_(3)                                               /**< (LCDC_OVR2ISR) DMA Descriptor Loaded Position */
#define LCDC_OVR2ISR_DSCR_Msk                 (_U_(0x1) << LCDC_OVR2ISR_DSCR_Pos)                  /**< (LCDC_OVR2ISR) DMA Descriptor Loaded Mask */
#define LCDC_OVR2ISR_DSCR(value)              (LCDC_OVR2ISR_DSCR_Msk & ((value) << LCDC_OVR2ISR_DSCR_Pos))
#define LCDC_OVR2ISR_ADD_Pos                  _U_(4)                                               /**< (LCDC_OVR2ISR) Head Descriptor Loaded Position */
#define LCDC_OVR2ISR_ADD_Msk                  (_U_(0x1) << LCDC_OVR2ISR_ADD_Pos)                   /**< (LCDC_OVR2ISR) Head Descriptor Loaded Mask */
#define LCDC_OVR2ISR_ADD(value)               (LCDC_OVR2ISR_ADD_Msk & ((value) << LCDC_OVR2ISR_ADD_Pos))
#define LCDC_OVR2ISR_DONE_Pos                 _U_(5)                                               /**< (LCDC_OVR2ISR) End of List Detected Position */
#define LCDC_OVR2ISR_DONE_Msk                 (_U_(0x1) << LCDC_OVR2ISR_DONE_Pos)                  /**< (LCDC_OVR2ISR) End of List Detected Mask */
#define LCDC_OVR2ISR_DONE(value)              (LCDC_OVR2ISR_DONE_Msk & ((value) << LCDC_OVR2ISR_DONE_Pos))
#define LCDC_OVR2ISR_OVR_Pos                  _U_(6)                                               /**< (LCDC_OVR2ISR) Overflow Detected Position */
#define LCDC_OVR2ISR_OVR_Msk                  (_U_(0x1) << LCDC_OVR2ISR_OVR_Pos)                   /**< (LCDC_OVR2ISR) Overflow Detected Mask */
#define LCDC_OVR2ISR_OVR(value)               (LCDC_OVR2ISR_OVR_Msk & ((value) << LCDC_OVR2ISR_OVR_Pos))
#define LCDC_OVR2ISR_Msk                      _U_(0x0000007C)                                      /**< (LCDC_OVR2ISR) Register Mask  */


/* -------- LCDC_OVR2HEAD : (LCDC Offset: 0x25C) (R/W 32) Overlay 2 DMA Head Register -------- */
#define LCDC_OVR2HEAD_HEAD_Pos                _U_(2)                                               /**< (LCDC_OVR2HEAD) DMA Head Pointer Position */
#define LCDC_OVR2HEAD_HEAD_Msk                (_U_(0x3FFFFFFF) << LCDC_OVR2HEAD_HEAD_Pos)          /**< (LCDC_OVR2HEAD) DMA Head Pointer Mask */
#define LCDC_OVR2HEAD_HEAD(value)             (LCDC_OVR2HEAD_HEAD_Msk & ((value) << LCDC_OVR2HEAD_HEAD_Pos))
#define LCDC_OVR2HEAD_Msk                     _U_(0xFFFFFFFC)                                      /**< (LCDC_OVR2HEAD) Register Mask  */


/* -------- LCDC_OVR2ADDR : (LCDC Offset: 0x260) (R/W 32) Overlay 2 DMA Address Register -------- */
#define LCDC_OVR2ADDR_ADDR_Pos                _U_(0)                                               /**< (LCDC_OVR2ADDR) DMA Transfer Overlay 2 Address Position */
#define LCDC_OVR2ADDR_ADDR_Msk                (_U_(0xFFFFFFFF) << LCDC_OVR2ADDR_ADDR_Pos)          /**< (LCDC_OVR2ADDR) DMA Transfer Overlay 2 Address Mask */
#define LCDC_OVR2ADDR_ADDR(value)             (LCDC_OVR2ADDR_ADDR_Msk & ((value) << LCDC_OVR2ADDR_ADDR_Pos))
#define LCDC_OVR2ADDR_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR2ADDR) Register Mask  */


/* -------- LCDC_OVR2CTRL : (LCDC Offset: 0x264) (R/W 32) Overlay 2 DMA Control Register -------- */
#define LCDC_OVR2CTRL_DFETCH_Pos              _U_(0)                                               /**< (LCDC_OVR2CTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_OVR2CTRL_DFETCH_Msk              (_U_(0x1) << LCDC_OVR2CTRL_DFETCH_Pos)               /**< (LCDC_OVR2CTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_OVR2CTRL_DFETCH(value)           (LCDC_OVR2CTRL_DFETCH_Msk & ((value) << LCDC_OVR2CTRL_DFETCH_Pos))
#define LCDC_OVR2CTRL_LFETCH_Pos              _U_(1)                                               /**< (LCDC_OVR2CTRL) Lookup Table Fetch Enable Position */
#define LCDC_OVR2CTRL_LFETCH_Msk              (_U_(0x1) << LCDC_OVR2CTRL_LFETCH_Pos)               /**< (LCDC_OVR2CTRL) Lookup Table Fetch Enable Mask */
#define LCDC_OVR2CTRL_LFETCH(value)           (LCDC_OVR2CTRL_LFETCH_Msk & ((value) << LCDC_OVR2CTRL_LFETCH_Pos))
#define LCDC_OVR2CTRL_DMAIEN_Pos              _U_(2)                                               /**< (LCDC_OVR2CTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_OVR2CTRL_DMAIEN_Msk              (_U_(0x1) << LCDC_OVR2CTRL_DMAIEN_Pos)               /**< (LCDC_OVR2CTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_OVR2CTRL_DMAIEN(value)           (LCDC_OVR2CTRL_DMAIEN_Msk & ((value) << LCDC_OVR2CTRL_DMAIEN_Pos))
#define LCDC_OVR2CTRL_DSCRIEN_Pos             _U_(3)                                               /**< (LCDC_OVR2CTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_OVR2CTRL_DSCRIEN_Msk             (_U_(0x1) << LCDC_OVR2CTRL_DSCRIEN_Pos)              /**< (LCDC_OVR2CTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_OVR2CTRL_DSCRIEN(value)          (LCDC_OVR2CTRL_DSCRIEN_Msk & ((value) << LCDC_OVR2CTRL_DSCRIEN_Pos))
#define LCDC_OVR2CTRL_ADDIEN_Pos              _U_(4)                                               /**< (LCDC_OVR2CTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_OVR2CTRL_ADDIEN_Msk              (_U_(0x1) << LCDC_OVR2CTRL_ADDIEN_Pos)               /**< (LCDC_OVR2CTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_OVR2CTRL_ADDIEN(value)           (LCDC_OVR2CTRL_ADDIEN_Msk & ((value) << LCDC_OVR2CTRL_ADDIEN_Pos))
#define LCDC_OVR2CTRL_DONEIEN_Pos             _U_(5)                                               /**< (LCDC_OVR2CTRL) End of List Interrupt Enable Position */
#define LCDC_OVR2CTRL_DONEIEN_Msk             (_U_(0x1) << LCDC_OVR2CTRL_DONEIEN_Pos)              /**< (LCDC_OVR2CTRL) End of List Interrupt Enable Mask */
#define LCDC_OVR2CTRL_DONEIEN(value)          (LCDC_OVR2CTRL_DONEIEN_Msk & ((value) << LCDC_OVR2CTRL_DONEIEN_Pos))
#define LCDC_OVR2CTRL_Msk                     _U_(0x0000003F)                                      /**< (LCDC_OVR2CTRL) Register Mask  */


/* -------- LCDC_OVR2NEXT : (LCDC Offset: 0x268) (R/W 32) Overlay 2 DMA Next Register -------- */
#define LCDC_OVR2NEXT_NEXT_Pos                _U_(0)                                               /**< (LCDC_OVR2NEXT) DMA Descriptor Next Address Position */
#define LCDC_OVR2NEXT_NEXT_Msk                (_U_(0xFFFFFFFF) << LCDC_OVR2NEXT_NEXT_Pos)          /**< (LCDC_OVR2NEXT) DMA Descriptor Next Address Mask */
#define LCDC_OVR2NEXT_NEXT(value)             (LCDC_OVR2NEXT_NEXT_Msk & ((value) << LCDC_OVR2NEXT_NEXT_Pos))
#define LCDC_OVR2NEXT_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR2NEXT) Register Mask  */


/* -------- LCDC_OVR2CFG0 : (LCDC Offset: 0x26C) (R/W 32) Overlay 2 Configuration Register 0 -------- */
#define LCDC_OVR2CFG0_BLEN_Pos                _U_(4)                                               /**< (LCDC_OVR2CFG0) AHB Burst Length Position */
#define LCDC_OVR2CFG0_BLEN_Msk                (_U_(0x3) << LCDC_OVR2CFG0_BLEN_Pos)                 /**< (LCDC_OVR2CFG0) AHB Burst Length Mask */
#define LCDC_OVR2CFG0_BLEN(value)             (LCDC_OVR2CFG0_BLEN_Msk & ((value) << LCDC_OVR2CFG0_BLEN_Pos))
#define   LCDC_OVR2CFG0_BLEN_AHB_SINGLE_Val   _U_(0x0)                                             /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR2CFG0_BLEN_AHB_INCR4_Val    _U_(0x1)                                             /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR2CFG0_BLEN_AHB_INCR8_Val    _U_(0x2)                                             /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_OVR2CFG0_BLEN_AHB_INCR16_Val   _U_(0x3)                                             /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_OVR2CFG0_BLEN_AHB_SINGLE         (LCDC_OVR2CFG0_BLEN_AHB_SINGLE_Val << LCDC_OVR2CFG0_BLEN_Pos) /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR2CFG0_BLEN_AHB_INCR4          (LCDC_OVR2CFG0_BLEN_AHB_INCR4_Val << LCDC_OVR2CFG0_BLEN_Pos) /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR2CFG0_BLEN_AHB_INCR8          (LCDC_OVR2CFG0_BLEN_AHB_INCR8_Val << LCDC_OVR2CFG0_BLEN_Pos) /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR2CFG0_BLEN_AHB_INCR16         (LCDC_OVR2CFG0_BLEN_AHB_INCR16_Val << LCDC_OVR2CFG0_BLEN_Pos) /**< (LCDC_OVR2CFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_OVR2CFG0_DLBO_Pos                _U_(8)                                               /**< (LCDC_OVR2CFG0) Defined Length Burst Only For Channel Bus Transaction Position */
#define LCDC_OVR2CFG0_DLBO_Msk                (_U_(0x1) << LCDC_OVR2CFG0_DLBO_Pos)                 /**< (LCDC_OVR2CFG0) Defined Length Burst Only For Channel Bus Transaction Mask */
#define LCDC_OVR2CFG0_DLBO(value)             (LCDC_OVR2CFG0_DLBO_Msk & ((value) << LCDC_OVR2CFG0_DLBO_Pos))
#define LCDC_OVR2CFG0_ROTDIS_Pos              _U_(12)                                              /**< (LCDC_OVR2CFG0) Hardware Rotation Optimization Disable Position */
#define LCDC_OVR2CFG0_ROTDIS_Msk              (_U_(0x1) << LCDC_OVR2CFG0_ROTDIS_Pos)               /**< (LCDC_OVR2CFG0) Hardware Rotation Optimization Disable Mask */
#define LCDC_OVR2CFG0_ROTDIS(value)           (LCDC_OVR2CFG0_ROTDIS_Msk & ((value) << LCDC_OVR2CFG0_ROTDIS_Pos))
#define LCDC_OVR2CFG0_LOCKDIS_Pos             _U_(13)                                              /**< (LCDC_OVR2CFG0) Hardware Rotation Lock Disable Position */
#define LCDC_OVR2CFG0_LOCKDIS_Msk             (_U_(0x1) << LCDC_OVR2CFG0_LOCKDIS_Pos)              /**< (LCDC_OVR2CFG0) Hardware Rotation Lock Disable Mask */
#define LCDC_OVR2CFG0_LOCKDIS(value)          (LCDC_OVR2CFG0_LOCKDIS_Msk & ((value) << LCDC_OVR2CFG0_LOCKDIS_Pos))
#define LCDC_OVR2CFG0_Msk                     _U_(0x00003130)                                      /**< (LCDC_OVR2CFG0) Register Mask  */


/* -------- LCDC_OVR2CFG1 : (LCDC Offset: 0x270) (R/W 32) Overlay 2 Configuration Register 1 -------- */
#define LCDC_OVR2CFG1_CLUTEN_Pos              _U_(0)                                               /**< (LCDC_OVR2CFG1) Color Lookup Table Mode Enable Position */
#define LCDC_OVR2CFG1_CLUTEN_Msk              (_U_(0x1) << LCDC_OVR2CFG1_CLUTEN_Pos)               /**< (LCDC_OVR2CFG1) Color Lookup Table Mode Enable Mask */
#define LCDC_OVR2CFG1_CLUTEN(value)           (LCDC_OVR2CFG1_CLUTEN_Msk & ((value) << LCDC_OVR2CFG1_CLUTEN_Pos))
#define LCDC_OVR2CFG1_RGBMODE_Pos             _U_(4)                                               /**< (LCDC_OVR2CFG1) RGB Mode Input Selection Position */
#define LCDC_OVR2CFG1_RGBMODE_Msk             (_U_(0xF) << LCDC_OVR2CFG1_RGBMODE_Pos)              /**< (LCDC_OVR2CFG1) RGB Mode Input Selection Mask */
#define LCDC_OVR2CFG1_RGBMODE(value)          (LCDC_OVR2CFG1_RGBMODE_Msk & ((value) << LCDC_OVR2CFG1_RGBMODE_Pos))
#define   LCDC_OVR2CFG1_RGBMODE_12BPP_RGB_444_Val _U_(0x0)                                             /**< (LCDC_OVR2CFG1) 12 bpp RGB 444  */
#define   LCDC_OVR2CFG1_RGBMODE_16BPP_ARGB_4444_Val _U_(0x1)                                             /**< (LCDC_OVR2CFG1) 16 bpp ARGB 4444  */
#define   LCDC_OVR2CFG1_RGBMODE_16BPP_RGBA_4444_Val _U_(0x2)                                             /**< (LCDC_OVR2CFG1) 16 bpp RGBA 4444  */
#define   LCDC_OVR2CFG1_RGBMODE_16BPP_RGB_565_Val _U_(0x3)                                             /**< (LCDC_OVR2CFG1) 16 bpp RGB 565  */
#define   LCDC_OVR2CFG1_RGBMODE_16BPP_TRGB_1555_Val _U_(0x4)                                             /**< (LCDC_OVR2CFG1) 16 bpp TRGB 1555  */
#define   LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666_Val _U_(0x5)                                             /**< (LCDC_OVR2CFG1) 18 bpp RGB 666  */
#define   LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666PACKED_Val _U_(0x6)                                             /**< (LCDC_OVR2CFG1) 18 bpp RGB 666 PACKED  */
#define   LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_1666_Val _U_(0x7)                                             /**< (LCDC_OVR2CFG1) 19 bpp TRGB 1666  */
#define   LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_PACKED_Val _U_(0x8)                                             /**< (LCDC_OVR2CFG1) 19 bpp TRGB 1666 PACKED  */
#define   LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_Val _U_(0x9)                                             /**< (LCDC_OVR2CFG1) 24 bpp RGB 888  */
#define   LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_PACKED_Val _U_(0xA)                                             /**< (LCDC_OVR2CFG1) 24 bpp RGB 888 PACKED  */
#define   LCDC_OVR2CFG1_RGBMODE_25BPP_TRGB_1888_Val _U_(0xB)                                             /**< (LCDC_OVR2CFG1) 25 bpp TRGB 1888  */
#define   LCDC_OVR2CFG1_RGBMODE_32BPP_ARGB_8888_Val _U_(0xC)                                             /**< (LCDC_OVR2CFG1) 32 bpp ARGB 8888  */
#define   LCDC_OVR2CFG1_RGBMODE_32BPP_RGBA_8888_Val _U_(0xD)                                             /**< (LCDC_OVR2CFG1) 32 bpp RGBA 8888  */
#define LCDC_OVR2CFG1_RGBMODE_12BPP_RGB_444   (LCDC_OVR2CFG1_RGBMODE_12BPP_RGB_444_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 12 bpp RGB 444 Position  */
#define LCDC_OVR2CFG1_RGBMODE_16BPP_ARGB_4444 (LCDC_OVR2CFG1_RGBMODE_16BPP_ARGB_4444_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 16 bpp ARGB 4444 Position  */
#define LCDC_OVR2CFG1_RGBMODE_16BPP_RGBA_4444 (LCDC_OVR2CFG1_RGBMODE_16BPP_RGBA_4444_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 16 bpp RGBA 4444 Position  */
#define LCDC_OVR2CFG1_RGBMODE_16BPP_RGB_565   (LCDC_OVR2CFG1_RGBMODE_16BPP_RGB_565_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 16 bpp RGB 565 Position  */
#define LCDC_OVR2CFG1_RGBMODE_16BPP_TRGB_1555 (LCDC_OVR2CFG1_RGBMODE_16BPP_TRGB_1555_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 16 bpp TRGB 1555 Position  */
#define LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666   (LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 18 bpp RGB 666 Position  */
#define LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666PACKED (LCDC_OVR2CFG1_RGBMODE_18BPP_RGB_666PACKED_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 18 bpp RGB 666 PACKED Position  */
#define LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_1666 (LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_1666_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 19 bpp TRGB 1666 Position  */
#define LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_PACKED (LCDC_OVR2CFG1_RGBMODE_19BPP_TRGB_PACKED_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 19 bpp TRGB 1666 PACKED Position  */
#define LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888   (LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 24 bpp RGB 888 Position  */
#define LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_PACKED (LCDC_OVR2CFG1_RGBMODE_24BPP_RGB_888_PACKED_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 24 bpp RGB 888 PACKED Position  */
#define LCDC_OVR2CFG1_RGBMODE_25BPP_TRGB_1888 (LCDC_OVR2CFG1_RGBMODE_25BPP_TRGB_1888_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 25 bpp TRGB 1888 Position  */
#define LCDC_OVR2CFG1_RGBMODE_32BPP_ARGB_8888 (LCDC_OVR2CFG1_RGBMODE_32BPP_ARGB_8888_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 32 bpp ARGB 8888 Position  */
#define LCDC_OVR2CFG1_RGBMODE_32BPP_RGBA_8888 (LCDC_OVR2CFG1_RGBMODE_32BPP_RGBA_8888_Val << LCDC_OVR2CFG1_RGBMODE_Pos) /**< (LCDC_OVR2CFG1) 32 bpp RGBA 8888 Position  */
#define LCDC_OVR2CFG1_CLUTMODE_Pos            _U_(8)                                               /**< (LCDC_OVR2CFG1) Color Lookup Table Mode Input Selection Position */
#define LCDC_OVR2CFG1_CLUTMODE_Msk            (_U_(0x3) << LCDC_OVR2CFG1_CLUTMODE_Pos)             /**< (LCDC_OVR2CFG1) Color Lookup Table Mode Input Selection Mask */
#define LCDC_OVR2CFG1_CLUTMODE(value)         (LCDC_OVR2CFG1_CLUTMODE_Msk & ((value) << LCDC_OVR2CFG1_CLUTMODE_Pos))
#define   LCDC_OVR2CFG1_CLUTMODE_CLUT_1BPP_Val _U_(0x0)                                             /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 1 bit per pixel  */
#define   LCDC_OVR2CFG1_CLUTMODE_CLUT_2BPP_Val _U_(0x1)                                             /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 2 bits per pixel  */
#define   LCDC_OVR2CFG1_CLUTMODE_CLUT_4BPP_Val _U_(0x2)                                             /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 4 bits per pixel  */
#define   LCDC_OVR2CFG1_CLUTMODE_CLUT_8BPP_Val _U_(0x3)                                             /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 8 bits per pixel  */
#define LCDC_OVR2CFG1_CLUTMODE_CLUT_1BPP      (LCDC_OVR2CFG1_CLUTMODE_CLUT_1BPP_Val << LCDC_OVR2CFG1_CLUTMODE_Pos) /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 1 bit per pixel Position  */
#define LCDC_OVR2CFG1_CLUTMODE_CLUT_2BPP      (LCDC_OVR2CFG1_CLUTMODE_CLUT_2BPP_Val << LCDC_OVR2CFG1_CLUTMODE_Pos) /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 2 bits per pixel Position  */
#define LCDC_OVR2CFG1_CLUTMODE_CLUT_4BPP      (LCDC_OVR2CFG1_CLUTMODE_CLUT_4BPP_Val << LCDC_OVR2CFG1_CLUTMODE_Pos) /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 4 bits per pixel Position  */
#define LCDC_OVR2CFG1_CLUTMODE_CLUT_8BPP      (LCDC_OVR2CFG1_CLUTMODE_CLUT_8BPP_Val << LCDC_OVR2CFG1_CLUTMODE_Pos) /**< (LCDC_OVR2CFG1) Color Lookup Table mode set to 8 bits per pixel Position  */
#define LCDC_OVR2CFG1_Msk                     _U_(0x000003F1)                                      /**< (LCDC_OVR2CFG1) Register Mask  */


/* -------- LCDC_OVR2CFG2 : (LCDC Offset: 0x274) (R/W 32) Overlay 2 Configuration Register 2 -------- */
#define LCDC_OVR2CFG2_XPOS_Pos                _U_(0)                                               /**< (LCDC_OVR2CFG2) Horizontal Window Position Position */
#define LCDC_OVR2CFG2_XPOS_Msk                (_U_(0x7FF) << LCDC_OVR2CFG2_XPOS_Pos)               /**< (LCDC_OVR2CFG2) Horizontal Window Position Mask */
#define LCDC_OVR2CFG2_XPOS(value)             (LCDC_OVR2CFG2_XPOS_Msk & ((value) << LCDC_OVR2CFG2_XPOS_Pos))
#define LCDC_OVR2CFG2_YPOS_Pos                _U_(16)                                              /**< (LCDC_OVR2CFG2) Vertical Window Position Position */
#define LCDC_OVR2CFG2_YPOS_Msk                (_U_(0x7FF) << LCDC_OVR2CFG2_YPOS_Pos)               /**< (LCDC_OVR2CFG2) Vertical Window Position Mask */
#define LCDC_OVR2CFG2_YPOS(value)             (LCDC_OVR2CFG2_YPOS_Msk & ((value) << LCDC_OVR2CFG2_YPOS_Pos))
#define LCDC_OVR2CFG2_Msk                     _U_(0x07FF07FF)                                      /**< (LCDC_OVR2CFG2) Register Mask  */


/* -------- LCDC_OVR2CFG3 : (LCDC Offset: 0x278) (R/W 32) Overlay 2 Configuration Register 3 -------- */
#define LCDC_OVR2CFG3_XSIZE_Pos               _U_(0)                                               /**< (LCDC_OVR2CFG3) Horizontal Window Size Position */
#define LCDC_OVR2CFG3_XSIZE_Msk               (_U_(0x7FF) << LCDC_OVR2CFG3_XSIZE_Pos)              /**< (LCDC_OVR2CFG3) Horizontal Window Size Mask */
#define LCDC_OVR2CFG3_XSIZE(value)            (LCDC_OVR2CFG3_XSIZE_Msk & ((value) << LCDC_OVR2CFG3_XSIZE_Pos))
#define LCDC_OVR2CFG3_YSIZE_Pos               _U_(16)                                              /**< (LCDC_OVR2CFG3) Vertical Window Size Position */
#define LCDC_OVR2CFG3_YSIZE_Msk               (_U_(0x7FF) << LCDC_OVR2CFG3_YSIZE_Pos)              /**< (LCDC_OVR2CFG3) Vertical Window Size Mask */
#define LCDC_OVR2CFG3_YSIZE(value)            (LCDC_OVR2CFG3_YSIZE_Msk & ((value) << LCDC_OVR2CFG3_YSIZE_Pos))
#define LCDC_OVR2CFG3_Msk                     _U_(0x07FF07FF)                                      /**< (LCDC_OVR2CFG3) Register Mask  */


/* -------- LCDC_OVR2CFG4 : (LCDC Offset: 0x27C) (R/W 32) Overlay 2 Configuration Register 4 -------- */
#define LCDC_OVR2CFG4_XSTRIDE_Pos             _U_(0)                                               /**< (LCDC_OVR2CFG4) Horizontal Stride Position */
#define LCDC_OVR2CFG4_XSTRIDE_Msk             (_U_(0xFFFFFFFF) << LCDC_OVR2CFG4_XSTRIDE_Pos)       /**< (LCDC_OVR2CFG4) Horizontal Stride Mask */
#define LCDC_OVR2CFG4_XSTRIDE(value)          (LCDC_OVR2CFG4_XSTRIDE_Msk & ((value) << LCDC_OVR2CFG4_XSTRIDE_Pos))
#define LCDC_OVR2CFG4_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR2CFG4) Register Mask  */


/* -------- LCDC_OVR2CFG5 : (LCDC Offset: 0x280) (R/W 32) Overlay 2 Configuration Register 5 -------- */
#define LCDC_OVR2CFG5_PSTRIDE_Pos             _U_(0)                                               /**< (LCDC_OVR2CFG5) Pixel Stride Position */
#define LCDC_OVR2CFG5_PSTRIDE_Msk             (_U_(0xFFFFFFFF) << LCDC_OVR2CFG5_PSTRIDE_Pos)       /**< (LCDC_OVR2CFG5) Pixel Stride Mask */
#define LCDC_OVR2CFG5_PSTRIDE(value)          (LCDC_OVR2CFG5_PSTRIDE_Msk & ((value) << LCDC_OVR2CFG5_PSTRIDE_Pos))
#define LCDC_OVR2CFG5_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR2CFG5) Register Mask  */


/* -------- LCDC_OVR2CFG6 : (LCDC Offset: 0x284) (R/W 32) Overlay 2 Configuration Register 6 -------- */
#define LCDC_OVR2CFG6_BDEF_Pos                _U_(0)                                               /**< (LCDC_OVR2CFG6) Blue Default Position */
#define LCDC_OVR2CFG6_BDEF_Msk                (_U_(0xFF) << LCDC_OVR2CFG6_BDEF_Pos)                /**< (LCDC_OVR2CFG6) Blue Default Mask */
#define LCDC_OVR2CFG6_BDEF(value)             (LCDC_OVR2CFG6_BDEF_Msk & ((value) << LCDC_OVR2CFG6_BDEF_Pos))
#define LCDC_OVR2CFG6_GDEF_Pos                _U_(8)                                               /**< (LCDC_OVR2CFG6) Green Default Position */
#define LCDC_OVR2CFG6_GDEF_Msk                (_U_(0xFF) << LCDC_OVR2CFG6_GDEF_Pos)                /**< (LCDC_OVR2CFG6) Green Default Mask */
#define LCDC_OVR2CFG6_GDEF(value)             (LCDC_OVR2CFG6_GDEF_Msk & ((value) << LCDC_OVR2CFG6_GDEF_Pos))
#define LCDC_OVR2CFG6_RDEF_Pos                _U_(16)                                              /**< (LCDC_OVR2CFG6) Red Default Position */
#define LCDC_OVR2CFG6_RDEF_Msk                (_U_(0xFF) << LCDC_OVR2CFG6_RDEF_Pos)                /**< (LCDC_OVR2CFG6) Red Default Mask */
#define LCDC_OVR2CFG6_RDEF(value)             (LCDC_OVR2CFG6_RDEF_Msk & ((value) << LCDC_OVR2CFG6_RDEF_Pos))
#define LCDC_OVR2CFG6_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_OVR2CFG6) Register Mask  */


/* -------- LCDC_OVR2CFG7 : (LCDC Offset: 0x288) (R/W 32) Overlay 2 Configuration Register 7 -------- */
#define LCDC_OVR2CFG7_BKEY_Pos                _U_(0)                                               /**< (LCDC_OVR2CFG7) Blue Color Component Chroma Key Position */
#define LCDC_OVR2CFG7_BKEY_Msk                (_U_(0xFF) << LCDC_OVR2CFG7_BKEY_Pos)                /**< (LCDC_OVR2CFG7) Blue Color Component Chroma Key Mask */
#define LCDC_OVR2CFG7_BKEY(value)             (LCDC_OVR2CFG7_BKEY_Msk & ((value) << LCDC_OVR2CFG7_BKEY_Pos))
#define LCDC_OVR2CFG7_GKEY_Pos                _U_(8)                                               /**< (LCDC_OVR2CFG7) Green Color Component Chroma Key Position */
#define LCDC_OVR2CFG7_GKEY_Msk                (_U_(0xFF) << LCDC_OVR2CFG7_GKEY_Pos)                /**< (LCDC_OVR2CFG7) Green Color Component Chroma Key Mask */
#define LCDC_OVR2CFG7_GKEY(value)             (LCDC_OVR2CFG7_GKEY_Msk & ((value) << LCDC_OVR2CFG7_GKEY_Pos))
#define LCDC_OVR2CFG7_RKEY_Pos                _U_(16)                                              /**< (LCDC_OVR2CFG7) Red Color Component Chroma Key Position */
#define LCDC_OVR2CFG7_RKEY_Msk                (_U_(0xFF) << LCDC_OVR2CFG7_RKEY_Pos)                /**< (LCDC_OVR2CFG7) Red Color Component Chroma Key Mask */
#define LCDC_OVR2CFG7_RKEY(value)             (LCDC_OVR2CFG7_RKEY_Msk & ((value) << LCDC_OVR2CFG7_RKEY_Pos))
#define LCDC_OVR2CFG7_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_OVR2CFG7) Register Mask  */


/* -------- LCDC_OVR2CFG8 : (LCDC Offset: 0x28C) (R/W 32) Overlay 2 Configuration Register 8 -------- */
#define LCDC_OVR2CFG8_BMASK_Pos               _U_(0)                                               /**< (LCDC_OVR2CFG8) Blue Color Component Chroma Key Mask Position */
#define LCDC_OVR2CFG8_BMASK_Msk               (_U_(0xFF) << LCDC_OVR2CFG8_BMASK_Pos)               /**< (LCDC_OVR2CFG8) Blue Color Component Chroma Key Mask Mask */
#define LCDC_OVR2CFG8_BMASK(value)            (LCDC_OVR2CFG8_BMASK_Msk & ((value) << LCDC_OVR2CFG8_BMASK_Pos))
#define LCDC_OVR2CFG8_GMASK_Pos               _U_(8)                                               /**< (LCDC_OVR2CFG8) Green Color Component Chroma Key Mask Position */
#define LCDC_OVR2CFG8_GMASK_Msk               (_U_(0xFF) << LCDC_OVR2CFG8_GMASK_Pos)               /**< (LCDC_OVR2CFG8) Green Color Component Chroma Key Mask Mask */
#define LCDC_OVR2CFG8_GMASK(value)            (LCDC_OVR2CFG8_GMASK_Msk & ((value) << LCDC_OVR2CFG8_GMASK_Pos))
#define LCDC_OVR2CFG8_RMASK_Pos               _U_(16)                                              /**< (LCDC_OVR2CFG8) Red Color Component Chroma Key Mask Position */
#define LCDC_OVR2CFG8_RMASK_Msk               (_U_(0xFF) << LCDC_OVR2CFG8_RMASK_Pos)               /**< (LCDC_OVR2CFG8) Red Color Component Chroma Key Mask Mask */
#define LCDC_OVR2CFG8_RMASK(value)            (LCDC_OVR2CFG8_RMASK_Msk & ((value) << LCDC_OVR2CFG8_RMASK_Pos))
#define LCDC_OVR2CFG8_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_OVR2CFG8) Register Mask  */


/* -------- LCDC_OVR2CFG9 : (LCDC Offset: 0x290) (R/W 32) Overlay 2 Configuration Register 9 -------- */
#define LCDC_OVR2CFG9_CRKEY_Pos               _U_(0)                                               /**< (LCDC_OVR2CFG9) Blender Chroma Key Enable Position */
#define LCDC_OVR2CFG9_CRKEY_Msk               (_U_(0x1) << LCDC_OVR2CFG9_CRKEY_Pos)                /**< (LCDC_OVR2CFG9) Blender Chroma Key Enable Mask */
#define LCDC_OVR2CFG9_CRKEY(value)            (LCDC_OVR2CFG9_CRKEY_Msk & ((value) << LCDC_OVR2CFG9_CRKEY_Pos))
#define LCDC_OVR2CFG9_INV_Pos                 _U_(1)                                               /**< (LCDC_OVR2CFG9) Blender Inverted Blender Output Enable Position */
#define LCDC_OVR2CFG9_INV_Msk                 (_U_(0x1) << LCDC_OVR2CFG9_INV_Pos)                  /**< (LCDC_OVR2CFG9) Blender Inverted Blender Output Enable Mask */
#define LCDC_OVR2CFG9_INV(value)              (LCDC_OVR2CFG9_INV_Msk & ((value) << LCDC_OVR2CFG9_INV_Pos))
#define LCDC_OVR2CFG9_ITER2BL_Pos             _U_(2)                                               /**< (LCDC_OVR2CFG9) Blender Iterated Color Enable Position */
#define LCDC_OVR2CFG9_ITER2BL_Msk             (_U_(0x1) << LCDC_OVR2CFG9_ITER2BL_Pos)              /**< (LCDC_OVR2CFG9) Blender Iterated Color Enable Mask */
#define LCDC_OVR2CFG9_ITER2BL(value)          (LCDC_OVR2CFG9_ITER2BL_Msk & ((value) << LCDC_OVR2CFG9_ITER2BL_Pos))
#define LCDC_OVR2CFG9_ITER_Pos                _U_(3)                                               /**< (LCDC_OVR2CFG9) Blender Use Iterated Color Position */
#define LCDC_OVR2CFG9_ITER_Msk                (_U_(0x1) << LCDC_OVR2CFG9_ITER_Pos)                 /**< (LCDC_OVR2CFG9) Blender Use Iterated Color Mask */
#define LCDC_OVR2CFG9_ITER(value)             (LCDC_OVR2CFG9_ITER_Msk & ((value) << LCDC_OVR2CFG9_ITER_Pos))
#define LCDC_OVR2CFG9_REVALPHA_Pos            _U_(4)                                               /**< (LCDC_OVR2CFG9) Blender Reverse Alpha Position */
#define LCDC_OVR2CFG9_REVALPHA_Msk            (_U_(0x1) << LCDC_OVR2CFG9_REVALPHA_Pos)             /**< (LCDC_OVR2CFG9) Blender Reverse Alpha Mask */
#define LCDC_OVR2CFG9_REVALPHA(value)         (LCDC_OVR2CFG9_REVALPHA_Msk & ((value) << LCDC_OVR2CFG9_REVALPHA_Pos))
#define LCDC_OVR2CFG9_GAEN_Pos                _U_(5)                                               /**< (LCDC_OVR2CFG9) Blender Global Alpha Enable Position */
#define LCDC_OVR2CFG9_GAEN_Msk                (_U_(0x1) << LCDC_OVR2CFG9_GAEN_Pos)                 /**< (LCDC_OVR2CFG9) Blender Global Alpha Enable Mask */
#define LCDC_OVR2CFG9_GAEN(value)             (LCDC_OVR2CFG9_GAEN_Msk & ((value) << LCDC_OVR2CFG9_GAEN_Pos))
#define LCDC_OVR2CFG9_LAEN_Pos                _U_(6)                                               /**< (LCDC_OVR2CFG9) Blender Local Alpha Enable Position */
#define LCDC_OVR2CFG9_LAEN_Msk                (_U_(0x1) << LCDC_OVR2CFG9_LAEN_Pos)                 /**< (LCDC_OVR2CFG9) Blender Local Alpha Enable Mask */
#define LCDC_OVR2CFG9_LAEN(value)             (LCDC_OVR2CFG9_LAEN_Msk & ((value) << LCDC_OVR2CFG9_LAEN_Pos))
#define LCDC_OVR2CFG9_OVR_Pos                 _U_(7)                                               /**< (LCDC_OVR2CFG9) Blender Overlay Layer Enable Position */
#define LCDC_OVR2CFG9_OVR_Msk                 (_U_(0x1) << LCDC_OVR2CFG9_OVR_Pos)                  /**< (LCDC_OVR2CFG9) Blender Overlay Layer Enable Mask */
#define LCDC_OVR2CFG9_OVR(value)              (LCDC_OVR2CFG9_OVR_Msk & ((value) << LCDC_OVR2CFG9_OVR_Pos))
#define LCDC_OVR2CFG9_DMA_Pos                 _U_(8)                                               /**< (LCDC_OVR2CFG9) Blender DMA Layer Enable Position */
#define LCDC_OVR2CFG9_DMA_Msk                 (_U_(0x1) << LCDC_OVR2CFG9_DMA_Pos)                  /**< (LCDC_OVR2CFG9) Blender DMA Layer Enable Mask */
#define LCDC_OVR2CFG9_DMA(value)              (LCDC_OVR2CFG9_DMA_Msk & ((value) << LCDC_OVR2CFG9_DMA_Pos))
#define LCDC_OVR2CFG9_REP_Pos                 _U_(9)                                               /**< (LCDC_OVR2CFG9) Use Replication logic to expand RGB color to 24 bits Position */
#define LCDC_OVR2CFG9_REP_Msk                 (_U_(0x1) << LCDC_OVR2CFG9_REP_Pos)                  /**< (LCDC_OVR2CFG9) Use Replication logic to expand RGB color to 24 bits Mask */
#define LCDC_OVR2CFG9_REP(value)              (LCDC_OVR2CFG9_REP_Msk & ((value) << LCDC_OVR2CFG9_REP_Pos))
#define LCDC_OVR2CFG9_DSTKEY_Pos              _U_(10)                                              /**< (LCDC_OVR2CFG9) Destination Chroma Keying Position */
#define LCDC_OVR2CFG9_DSTKEY_Msk              (_U_(0x1) << LCDC_OVR2CFG9_DSTKEY_Pos)               /**< (LCDC_OVR2CFG9) Destination Chroma Keying Mask */
#define LCDC_OVR2CFG9_DSTKEY(value)           (LCDC_OVR2CFG9_DSTKEY_Msk & ((value) << LCDC_OVR2CFG9_DSTKEY_Pos))
#define LCDC_OVR2CFG9_GA_Pos                  _U_(16)                                              /**< (LCDC_OVR2CFG9) Blender Global Alpha Position */
#define LCDC_OVR2CFG9_GA_Msk                  (_U_(0xFF) << LCDC_OVR2CFG9_GA_Pos)                  /**< (LCDC_OVR2CFG9) Blender Global Alpha Mask */
#define LCDC_OVR2CFG9_GA(value)               (LCDC_OVR2CFG9_GA_Msk & ((value) << LCDC_OVR2CFG9_GA_Pos))
#define LCDC_OVR2CFG9_Msk                     _U_(0x00FF07FF)                                      /**< (LCDC_OVR2CFG9) Register Mask  */


/* -------- LCDC_HEOCHER : (LCDC Offset: 0x340) ( /W 32) High-End Overlay Channel Enable Register -------- */
#define LCDC_HEOCHER_CHEN_Pos                 _U_(0)                                               /**< (LCDC_HEOCHER) Channel Enable Position */
#define LCDC_HEOCHER_CHEN_Msk                 (_U_(0x1) << LCDC_HEOCHER_CHEN_Pos)                  /**< (LCDC_HEOCHER) Channel Enable Mask */
#define LCDC_HEOCHER_CHEN(value)              (LCDC_HEOCHER_CHEN_Msk & ((value) << LCDC_HEOCHER_CHEN_Pos))
#define LCDC_HEOCHER_UPDATEEN_Pos             _U_(1)                                               /**< (LCDC_HEOCHER) Update Overlay Attributes Enable Position */
#define LCDC_HEOCHER_UPDATEEN_Msk             (_U_(0x1) << LCDC_HEOCHER_UPDATEEN_Pos)              /**< (LCDC_HEOCHER) Update Overlay Attributes Enable Mask */
#define LCDC_HEOCHER_UPDATEEN(value)          (LCDC_HEOCHER_UPDATEEN_Msk & ((value) << LCDC_HEOCHER_UPDATEEN_Pos))
#define LCDC_HEOCHER_A2QEN_Pos                _U_(2)                                               /**< (LCDC_HEOCHER) Add To Queue Enable Position */
#define LCDC_HEOCHER_A2QEN_Msk                (_U_(0x1) << LCDC_HEOCHER_A2QEN_Pos)                 /**< (LCDC_HEOCHER) Add To Queue Enable Mask */
#define LCDC_HEOCHER_A2QEN(value)             (LCDC_HEOCHER_A2QEN_Msk & ((value) << LCDC_HEOCHER_A2QEN_Pos))
#define LCDC_HEOCHER_Msk                      _U_(0x00000007)                                      /**< (LCDC_HEOCHER) Register Mask  */


/* -------- LCDC_HEOCHDR : (LCDC Offset: 0x344) ( /W 32) High-End Overlay Channel Disable Register -------- */
#define LCDC_HEOCHDR_CHDIS_Pos                _U_(0)                                               /**< (LCDC_HEOCHDR) Channel Disable Position */
#define LCDC_HEOCHDR_CHDIS_Msk                (_U_(0x1) << LCDC_HEOCHDR_CHDIS_Pos)                 /**< (LCDC_HEOCHDR) Channel Disable Mask */
#define LCDC_HEOCHDR_CHDIS(value)             (LCDC_HEOCHDR_CHDIS_Msk & ((value) << LCDC_HEOCHDR_CHDIS_Pos))
#define LCDC_HEOCHDR_CHRST_Pos                _U_(8)                                               /**< (LCDC_HEOCHDR) Channel Reset Position */
#define LCDC_HEOCHDR_CHRST_Msk                (_U_(0x1) << LCDC_HEOCHDR_CHRST_Pos)                 /**< (LCDC_HEOCHDR) Channel Reset Mask */
#define LCDC_HEOCHDR_CHRST(value)             (LCDC_HEOCHDR_CHRST_Msk & ((value) << LCDC_HEOCHDR_CHRST_Pos))
#define LCDC_HEOCHDR_Msk                      _U_(0x00000101)                                      /**< (LCDC_HEOCHDR) Register Mask  */


/* -------- LCDC_HEOCHSR : (LCDC Offset: 0x348) ( R/ 32) High-End Overlay Channel Status Register -------- */
#define LCDC_HEOCHSR_CHSR_Pos                 _U_(0)                                               /**< (LCDC_HEOCHSR) Channel Status Position */
#define LCDC_HEOCHSR_CHSR_Msk                 (_U_(0x1) << LCDC_HEOCHSR_CHSR_Pos)                  /**< (LCDC_HEOCHSR) Channel Status Mask */
#define LCDC_HEOCHSR_CHSR(value)              (LCDC_HEOCHSR_CHSR_Msk & ((value) << LCDC_HEOCHSR_CHSR_Pos))
#define LCDC_HEOCHSR_UPDATESR_Pos             _U_(1)                                               /**< (LCDC_HEOCHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_HEOCHSR_UPDATESR_Msk             (_U_(0x1) << LCDC_HEOCHSR_UPDATESR_Pos)              /**< (LCDC_HEOCHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_HEOCHSR_UPDATESR(value)          (LCDC_HEOCHSR_UPDATESR_Msk & ((value) << LCDC_HEOCHSR_UPDATESR_Pos))
#define LCDC_HEOCHSR_A2QSR_Pos                _U_(2)                                               /**< (LCDC_HEOCHSR) Add To Queue Status Position */
#define LCDC_HEOCHSR_A2QSR_Msk                (_U_(0x1) << LCDC_HEOCHSR_A2QSR_Pos)                 /**< (LCDC_HEOCHSR) Add To Queue Status Mask */
#define LCDC_HEOCHSR_A2QSR(value)             (LCDC_HEOCHSR_A2QSR_Msk & ((value) << LCDC_HEOCHSR_A2QSR_Pos))
#define LCDC_HEOCHSR_Msk                      _U_(0x00000007)                                      /**< (LCDC_HEOCHSR) Register Mask  */


/* -------- LCDC_HEOIER : (LCDC Offset: 0x34C) ( /W 32) High-End Overlay Interrupt Enable Register -------- */
#define LCDC_HEOIER_DMA_Pos                   _U_(2)                                               /**< (LCDC_HEOIER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_HEOIER_DMA_Msk                   (_U_(0x1) << LCDC_HEOIER_DMA_Pos)                    /**< (LCDC_HEOIER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_HEOIER_DMA(value)                (LCDC_HEOIER_DMA_Msk & ((value) << LCDC_HEOIER_DMA_Pos))
#define LCDC_HEOIER_DSCR_Pos                  _U_(3)                                               /**< (LCDC_HEOIER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOIER_DSCR_Msk                  (_U_(0x1) << LCDC_HEOIER_DSCR_Pos)                   /**< (LCDC_HEOIER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOIER_DSCR(value)               (LCDC_HEOIER_DSCR_Msk & ((value) << LCDC_HEOIER_DSCR_Pos))
#define LCDC_HEOIER_ADD_Pos                   _U_(4)                                               /**< (LCDC_HEOIER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOIER_ADD_Msk                   (_U_(0x1) << LCDC_HEOIER_ADD_Pos)                    /**< (LCDC_HEOIER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOIER_ADD(value)                (LCDC_HEOIER_ADD_Msk & ((value) << LCDC_HEOIER_ADD_Pos))
#define LCDC_HEOIER_DONE_Pos                  _U_(5)                                               /**< (LCDC_HEOIER) End of List Interrupt Enable Position */
#define LCDC_HEOIER_DONE_Msk                  (_U_(0x1) << LCDC_HEOIER_DONE_Pos)                   /**< (LCDC_HEOIER) End of List Interrupt Enable Mask */
#define LCDC_HEOIER_DONE(value)               (LCDC_HEOIER_DONE_Msk & ((value) << LCDC_HEOIER_DONE_Pos))
#define LCDC_HEOIER_OVR_Pos                   _U_(6)                                               /**< (LCDC_HEOIER) Overflow Interrupt Enable Position */
#define LCDC_HEOIER_OVR_Msk                   (_U_(0x1) << LCDC_HEOIER_OVR_Pos)                    /**< (LCDC_HEOIER) Overflow Interrupt Enable Mask */
#define LCDC_HEOIER_OVR(value)                (LCDC_HEOIER_OVR_Msk & ((value) << LCDC_HEOIER_OVR_Pos))
#define LCDC_HEOIER_UDMA_Pos                  _U_(10)                                              /**< (LCDC_HEOIER) End of DMA Transfer for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UDMA_Msk                  (_U_(0x1) << LCDC_HEOIER_UDMA_Pos)                   /**< (LCDC_HEOIER) End of DMA Transfer for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UDMA(value)               (LCDC_HEOIER_UDMA_Msk & ((value) << LCDC_HEOIER_UDMA_Pos))
#define LCDC_HEOIER_UDSCR_Pos                 _U_(11)                                              /**< (LCDC_HEOIER) Descriptor Loaded for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UDSCR_Msk                 (_U_(0x1) << LCDC_HEOIER_UDSCR_Pos)                  /**< (LCDC_HEOIER) Descriptor Loaded for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UDSCR(value)              (LCDC_HEOIER_UDSCR_Msk & ((value) << LCDC_HEOIER_UDSCR_Pos))
#define LCDC_HEOIER_UADD_Pos                  _U_(12)                                              /**< (LCDC_HEOIER) Head Descriptor Loaded for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UADD_Msk                  (_U_(0x1) << LCDC_HEOIER_UADD_Pos)                   /**< (LCDC_HEOIER) Head Descriptor Loaded for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UADD(value)               (LCDC_HEOIER_UADD_Msk & ((value) << LCDC_HEOIER_UADD_Pos))
#define LCDC_HEOIER_UDONE_Pos                 _U_(13)                                              /**< (LCDC_HEOIER) End of List for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UDONE_Msk                 (_U_(0x1) << LCDC_HEOIER_UDONE_Pos)                  /**< (LCDC_HEOIER) End of List for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UDONE(value)              (LCDC_HEOIER_UDONE_Msk & ((value) << LCDC_HEOIER_UDONE_Pos))
#define LCDC_HEOIER_UOVR_Pos                  _U_(14)                                              /**< (LCDC_HEOIER) Overflow for U or UV Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_UOVR_Msk                  (_U_(0x1) << LCDC_HEOIER_UOVR_Pos)                   /**< (LCDC_HEOIER) Overflow for U or UV Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_UOVR(value)               (LCDC_HEOIER_UOVR_Msk & ((value) << LCDC_HEOIER_UOVR_Pos))
#define LCDC_HEOIER_VDMA_Pos                  _U_(18)                                              /**< (LCDC_HEOIER) End of DMA for V Chrominance Transfer Interrupt Enable Position */
#define LCDC_HEOIER_VDMA_Msk                  (_U_(0x1) << LCDC_HEOIER_VDMA_Pos)                   /**< (LCDC_HEOIER) End of DMA for V Chrominance Transfer Interrupt Enable Mask */
#define LCDC_HEOIER_VDMA(value)               (LCDC_HEOIER_VDMA_Msk & ((value) << LCDC_HEOIER_VDMA_Pos))
#define LCDC_HEOIER_VDSCR_Pos                 _U_(19)                                              /**< (LCDC_HEOIER) Descriptor Loaded for V Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_VDSCR_Msk                 (_U_(0x1) << LCDC_HEOIER_VDSCR_Pos)                  /**< (LCDC_HEOIER) Descriptor Loaded for V Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_VDSCR(value)              (LCDC_HEOIER_VDSCR_Msk & ((value) << LCDC_HEOIER_VDSCR_Pos))
#define LCDC_HEOIER_VADD_Pos                  _U_(20)                                              /**< (LCDC_HEOIER) Head Descriptor Loaded for V Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_VADD_Msk                  (_U_(0x1) << LCDC_HEOIER_VADD_Pos)                   /**< (LCDC_HEOIER) Head Descriptor Loaded for V Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_VADD(value)               (LCDC_HEOIER_VADD_Msk & ((value) << LCDC_HEOIER_VADD_Pos))
#define LCDC_HEOIER_VDONE_Pos                 _U_(21)                                              /**< (LCDC_HEOIER) End of List for V Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_VDONE_Msk                 (_U_(0x1) << LCDC_HEOIER_VDONE_Pos)                  /**< (LCDC_HEOIER) End of List for V Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_VDONE(value)              (LCDC_HEOIER_VDONE_Msk & ((value) << LCDC_HEOIER_VDONE_Pos))
#define LCDC_HEOIER_VOVR_Pos                  _U_(22)                                              /**< (LCDC_HEOIER) Overflow for V Chrominance Interrupt Enable Position */
#define LCDC_HEOIER_VOVR_Msk                  (_U_(0x1) << LCDC_HEOIER_VOVR_Pos)                   /**< (LCDC_HEOIER) Overflow for V Chrominance Interrupt Enable Mask */
#define LCDC_HEOIER_VOVR(value)               (LCDC_HEOIER_VOVR_Msk & ((value) << LCDC_HEOIER_VOVR_Pos))
#define LCDC_HEOIER_Msk                       _U_(0x007C7C7C)                                      /**< (LCDC_HEOIER) Register Mask  */


/* -------- LCDC_HEOIDR : (LCDC Offset: 0x350) ( /W 32) High-End Overlay Interrupt Disable Register -------- */
#define LCDC_HEOIDR_DMA_Pos                   _U_(2)                                               /**< (LCDC_HEOIDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_HEOIDR_DMA_Msk                   (_U_(0x1) << LCDC_HEOIDR_DMA_Pos)                    /**< (LCDC_HEOIDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_HEOIDR_DMA(value)                (LCDC_HEOIDR_DMA_Msk & ((value) << LCDC_HEOIDR_DMA_Pos))
#define LCDC_HEOIDR_DSCR_Pos                  _U_(3)                                               /**< (LCDC_HEOIDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_HEOIDR_DSCR_Msk                  (_U_(0x1) << LCDC_HEOIDR_DSCR_Pos)                   /**< (LCDC_HEOIDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_HEOIDR_DSCR(value)               (LCDC_HEOIDR_DSCR_Msk & ((value) << LCDC_HEOIDR_DSCR_Pos))
#define LCDC_HEOIDR_ADD_Pos                   _U_(4)                                               /**< (LCDC_HEOIDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_HEOIDR_ADD_Msk                   (_U_(0x1) << LCDC_HEOIDR_ADD_Pos)                    /**< (LCDC_HEOIDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_HEOIDR_ADD(value)                (LCDC_HEOIDR_ADD_Msk & ((value) << LCDC_HEOIDR_ADD_Pos))
#define LCDC_HEOIDR_DONE_Pos                  _U_(5)                                               /**< (LCDC_HEOIDR) End of List Interrupt Disable Position */
#define LCDC_HEOIDR_DONE_Msk                  (_U_(0x1) << LCDC_HEOIDR_DONE_Pos)                   /**< (LCDC_HEOIDR) End of List Interrupt Disable Mask */
#define LCDC_HEOIDR_DONE(value)               (LCDC_HEOIDR_DONE_Msk & ((value) << LCDC_HEOIDR_DONE_Pos))
#define LCDC_HEOIDR_OVR_Pos                   _U_(6)                                               /**< (LCDC_HEOIDR) Overflow Interrupt Disable Position */
#define LCDC_HEOIDR_OVR_Msk                   (_U_(0x1) << LCDC_HEOIDR_OVR_Pos)                    /**< (LCDC_HEOIDR) Overflow Interrupt Disable Mask */
#define LCDC_HEOIDR_OVR(value)                (LCDC_HEOIDR_OVR_Msk & ((value) << LCDC_HEOIDR_OVR_Pos))
#define LCDC_HEOIDR_UDMA_Pos                  _U_(10)                                              /**< (LCDC_HEOIDR) End of DMA Transfer for U or UV Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_UDMA_Msk                  (_U_(0x1) << LCDC_HEOIDR_UDMA_Pos)                   /**< (LCDC_HEOIDR) End of DMA Transfer for U or UV Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_UDMA(value)               (LCDC_HEOIDR_UDMA_Msk & ((value) << LCDC_HEOIDR_UDMA_Pos))
#define LCDC_HEOIDR_UDSCR_Pos                 _U_(11)                                              /**< (LCDC_HEOIDR) Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_UDSCR_Msk                 (_U_(0x1) << LCDC_HEOIDR_UDSCR_Pos)                  /**< (LCDC_HEOIDR) Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_UDSCR(value)              (LCDC_HEOIDR_UDSCR_Msk & ((value) << LCDC_HEOIDR_UDSCR_Pos))
#define LCDC_HEOIDR_UADD_Pos                  _U_(12)                                              /**< (LCDC_HEOIDR) Head Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_UADD_Msk                  (_U_(0x1) << LCDC_HEOIDR_UADD_Pos)                   /**< (LCDC_HEOIDR) Head Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_UADD(value)               (LCDC_HEOIDR_UADD_Msk & ((value) << LCDC_HEOIDR_UADD_Pos))
#define LCDC_HEOIDR_UDONE_Pos                 _U_(13)                                              /**< (LCDC_HEOIDR) End of List Interrupt for U or UV Chrominance Component Disable Position */
#define LCDC_HEOIDR_UDONE_Msk                 (_U_(0x1) << LCDC_HEOIDR_UDONE_Pos)                  /**< (LCDC_HEOIDR) End of List Interrupt for U or UV Chrominance Component Disable Mask */
#define LCDC_HEOIDR_UDONE(value)              (LCDC_HEOIDR_UDONE_Msk & ((value) << LCDC_HEOIDR_UDONE_Pos))
#define LCDC_HEOIDR_UOVR_Pos                  _U_(14)                                              /**< (LCDC_HEOIDR) Overflow Interrupt for U or UV Chrominance Component Disable Position */
#define LCDC_HEOIDR_UOVR_Msk                  (_U_(0x1) << LCDC_HEOIDR_UOVR_Pos)                   /**< (LCDC_HEOIDR) Overflow Interrupt for U or UV Chrominance Component Disable Mask */
#define LCDC_HEOIDR_UOVR(value)               (LCDC_HEOIDR_UOVR_Msk & ((value) << LCDC_HEOIDR_UOVR_Pos))
#define LCDC_HEOIDR_VDMA_Pos                  _U_(18)                                              /**< (LCDC_HEOIDR) End of DMA Transfer for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VDMA_Msk                  (_U_(0x1) << LCDC_HEOIDR_VDMA_Pos)                   /**< (LCDC_HEOIDR) End of DMA Transfer for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VDMA(value)               (LCDC_HEOIDR_VDMA_Msk & ((value) << LCDC_HEOIDR_VDMA_Pos))
#define LCDC_HEOIDR_VDSCR_Pos                 _U_(19)                                              /**< (LCDC_HEOIDR) Descriptor Loaded for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VDSCR_Msk                 (_U_(0x1) << LCDC_HEOIDR_VDSCR_Pos)                  /**< (LCDC_HEOIDR) Descriptor Loaded for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VDSCR(value)              (LCDC_HEOIDR_VDSCR_Msk & ((value) << LCDC_HEOIDR_VDSCR_Pos))
#define LCDC_HEOIDR_VADD_Pos                  _U_(20)                                              /**< (LCDC_HEOIDR) Head Descriptor Loaded for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VADD_Msk                  (_U_(0x1) << LCDC_HEOIDR_VADD_Pos)                   /**< (LCDC_HEOIDR) Head Descriptor Loaded for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VADD(value)               (LCDC_HEOIDR_VADD_Msk & ((value) << LCDC_HEOIDR_VADD_Pos))
#define LCDC_HEOIDR_VDONE_Pos                 _U_(21)                                              /**< (LCDC_HEOIDR) End of List for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VDONE_Msk                 (_U_(0x1) << LCDC_HEOIDR_VDONE_Pos)                  /**< (LCDC_HEOIDR) End of List for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VDONE(value)              (LCDC_HEOIDR_VDONE_Msk & ((value) << LCDC_HEOIDR_VDONE_Pos))
#define LCDC_HEOIDR_VOVR_Pos                  _U_(22)                                              /**< (LCDC_HEOIDR) Overflow for V Chrominance Component Interrupt Disable Position */
#define LCDC_HEOIDR_VOVR_Msk                  (_U_(0x1) << LCDC_HEOIDR_VOVR_Pos)                   /**< (LCDC_HEOIDR) Overflow for V Chrominance Component Interrupt Disable Mask */
#define LCDC_HEOIDR_VOVR(value)               (LCDC_HEOIDR_VOVR_Msk & ((value) << LCDC_HEOIDR_VOVR_Pos))
#define LCDC_HEOIDR_Msk                       _U_(0x007C7C7C)                                      /**< (LCDC_HEOIDR) Register Mask  */


/* -------- LCDC_HEOIMR : (LCDC Offset: 0x354) ( R/ 32) High-End Overlay Interrupt Mask Register -------- */
#define LCDC_HEOIMR_DMA_Pos                   _U_(2)                                               /**< (LCDC_HEOIMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_HEOIMR_DMA_Msk                   (_U_(0x1) << LCDC_HEOIMR_DMA_Pos)                    /**< (LCDC_HEOIMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_HEOIMR_DMA(value)                (LCDC_HEOIMR_DMA_Msk & ((value) << LCDC_HEOIMR_DMA_Pos))
#define LCDC_HEOIMR_DSCR_Pos                  _U_(3)                                               /**< (LCDC_HEOIMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_HEOIMR_DSCR_Msk                  (_U_(0x1) << LCDC_HEOIMR_DSCR_Pos)                   /**< (LCDC_HEOIMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_HEOIMR_DSCR(value)               (LCDC_HEOIMR_DSCR_Msk & ((value) << LCDC_HEOIMR_DSCR_Pos))
#define LCDC_HEOIMR_ADD_Pos                   _U_(4)                                               /**< (LCDC_HEOIMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_HEOIMR_ADD_Msk                   (_U_(0x1) << LCDC_HEOIMR_ADD_Pos)                    /**< (LCDC_HEOIMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_HEOIMR_ADD(value)                (LCDC_HEOIMR_ADD_Msk & ((value) << LCDC_HEOIMR_ADD_Pos))
#define LCDC_HEOIMR_DONE_Pos                  _U_(5)                                               /**< (LCDC_HEOIMR) End of List Interrupt Mask Position */
#define LCDC_HEOIMR_DONE_Msk                  (_U_(0x1) << LCDC_HEOIMR_DONE_Pos)                   /**< (LCDC_HEOIMR) End of List Interrupt Mask Mask */
#define LCDC_HEOIMR_DONE(value)               (LCDC_HEOIMR_DONE_Msk & ((value) << LCDC_HEOIMR_DONE_Pos))
#define LCDC_HEOIMR_OVR_Pos                   _U_(6)                                               /**< (LCDC_HEOIMR) Overflow Interrupt Mask Position */
#define LCDC_HEOIMR_OVR_Msk                   (_U_(0x1) << LCDC_HEOIMR_OVR_Pos)                    /**< (LCDC_HEOIMR) Overflow Interrupt Mask Mask */
#define LCDC_HEOIMR_OVR(value)                (LCDC_HEOIMR_OVR_Msk & ((value) << LCDC_HEOIMR_OVR_Pos))
#define LCDC_HEOIMR_UDMA_Pos                  _U_(10)                                              /**< (LCDC_HEOIMR) End of DMA Transfer for U or UV Chrominance Component Interrupt Mask Position */
#define LCDC_HEOIMR_UDMA_Msk                  (_U_(0x1) << LCDC_HEOIMR_UDMA_Pos)                   /**< (LCDC_HEOIMR) End of DMA Transfer for U or UV Chrominance Component Interrupt Mask Mask */
#define LCDC_HEOIMR_UDMA(value)               (LCDC_HEOIMR_UDMA_Msk & ((value) << LCDC_HEOIMR_UDMA_Pos))
#define LCDC_HEOIMR_UDSCR_Pos                 _U_(11)                                              /**< (LCDC_HEOIMR) Descriptor Loaded for U or UV Chrominance Component Interrupt Mask Position */
#define LCDC_HEOIMR_UDSCR_Msk                 (_U_(0x1) << LCDC_HEOIMR_UDSCR_Pos)                  /**< (LCDC_HEOIMR) Descriptor Loaded for U or UV Chrominance Component Interrupt Mask Mask */
#define LCDC_HEOIMR_UDSCR(value)              (LCDC_HEOIMR_UDSCR_Msk & ((value) << LCDC_HEOIMR_UDSCR_Pos))
#define LCDC_HEOIMR_UADD_Pos                  _U_(12)                                              /**< (LCDC_HEOIMR) Head Descriptor Loaded for U or UV Chrominance Component Mask Position */
#define LCDC_HEOIMR_UADD_Msk                  (_U_(0x1) << LCDC_HEOIMR_UADD_Pos)                   /**< (LCDC_HEOIMR) Head Descriptor Loaded for U or UV Chrominance Component Mask Mask */
#define LCDC_HEOIMR_UADD(value)               (LCDC_HEOIMR_UADD_Msk & ((value) << LCDC_HEOIMR_UADD_Pos))
#define LCDC_HEOIMR_UDONE_Pos                 _U_(13)                                              /**< (LCDC_HEOIMR) End of List for U or UV Chrominance Component Mask Position */
#define LCDC_HEOIMR_UDONE_Msk                 (_U_(0x1) << LCDC_HEOIMR_UDONE_Pos)                  /**< (LCDC_HEOIMR) End of List for U or UV Chrominance Component Mask Mask */
#define LCDC_HEOIMR_UDONE(value)              (LCDC_HEOIMR_UDONE_Msk & ((value) << LCDC_HEOIMR_UDONE_Pos))
#define LCDC_HEOIMR_UOVR_Pos                  _U_(14)                                              /**< (LCDC_HEOIMR) Overflow for U Chrominance Interrupt Mask Position */
#define LCDC_HEOIMR_UOVR_Msk                  (_U_(0x1) << LCDC_HEOIMR_UOVR_Pos)                   /**< (LCDC_HEOIMR) Overflow for U Chrominance Interrupt Mask Mask */
#define LCDC_HEOIMR_UOVR(value)               (LCDC_HEOIMR_UOVR_Msk & ((value) << LCDC_HEOIMR_UOVR_Pos))
#define LCDC_HEOIMR_VDMA_Pos                  _U_(18)                                              /**< (LCDC_HEOIMR) End of DMA Transfer for V Chrominance Component Interrupt Mask Position */
#define LCDC_HEOIMR_VDMA_Msk                  (_U_(0x1) << LCDC_HEOIMR_VDMA_Pos)                   /**< (LCDC_HEOIMR) End of DMA Transfer for V Chrominance Component Interrupt Mask Mask */
#define LCDC_HEOIMR_VDMA(value)               (LCDC_HEOIMR_VDMA_Msk & ((value) << LCDC_HEOIMR_VDMA_Pos))
#define LCDC_HEOIMR_VDSCR_Pos                 _U_(19)                                              /**< (LCDC_HEOIMR) Descriptor Loaded for V Chrominance Component Interrupt Mask Position */
#define LCDC_HEOIMR_VDSCR_Msk                 (_U_(0x1) << LCDC_HEOIMR_VDSCR_Pos)                  /**< (LCDC_HEOIMR) Descriptor Loaded for V Chrominance Component Interrupt Mask Mask */
#define LCDC_HEOIMR_VDSCR(value)              (LCDC_HEOIMR_VDSCR_Msk & ((value) << LCDC_HEOIMR_VDSCR_Pos))
#define LCDC_HEOIMR_VADD_Pos                  _U_(20)                                              /**< (LCDC_HEOIMR) Head Descriptor Loaded for V Chrominance Component Mask Position */
#define LCDC_HEOIMR_VADD_Msk                  (_U_(0x1) << LCDC_HEOIMR_VADD_Pos)                   /**< (LCDC_HEOIMR) Head Descriptor Loaded for V Chrominance Component Mask Mask */
#define LCDC_HEOIMR_VADD(value)               (LCDC_HEOIMR_VADD_Msk & ((value) << LCDC_HEOIMR_VADD_Pos))
#define LCDC_HEOIMR_VDONE_Pos                 _U_(21)                                              /**< (LCDC_HEOIMR) End of List for V Chrominance Component Mask Position */
#define LCDC_HEOIMR_VDONE_Msk                 (_U_(0x1) << LCDC_HEOIMR_VDONE_Pos)                  /**< (LCDC_HEOIMR) End of List for V Chrominance Component Mask Mask */
#define LCDC_HEOIMR_VDONE(value)              (LCDC_HEOIMR_VDONE_Msk & ((value) << LCDC_HEOIMR_VDONE_Pos))
#define LCDC_HEOIMR_VOVR_Pos                  _U_(22)                                              /**< (LCDC_HEOIMR) Overflow for V Chrominance Interrupt Mask Position */
#define LCDC_HEOIMR_VOVR_Msk                  (_U_(0x1) << LCDC_HEOIMR_VOVR_Pos)                   /**< (LCDC_HEOIMR) Overflow for V Chrominance Interrupt Mask Mask */
#define LCDC_HEOIMR_VOVR(value)               (LCDC_HEOIMR_VOVR_Msk & ((value) << LCDC_HEOIMR_VOVR_Pos))
#define LCDC_HEOIMR_Msk                       _U_(0x007C7C7C)                                      /**< (LCDC_HEOIMR) Register Mask  */


/* -------- LCDC_HEOISR : (LCDC Offset: 0x358) ( R/ 32) High-End Overlay Interrupt Status Register -------- */
#define LCDC_HEOISR_DMA_Pos                   _U_(2)                                               /**< (LCDC_HEOISR) End of DMA Transfer Position */
#define LCDC_HEOISR_DMA_Msk                   (_U_(0x1) << LCDC_HEOISR_DMA_Pos)                    /**< (LCDC_HEOISR) End of DMA Transfer Mask */
#define LCDC_HEOISR_DMA(value)                (LCDC_HEOISR_DMA_Msk & ((value) << LCDC_HEOISR_DMA_Pos))
#define LCDC_HEOISR_DSCR_Pos                  _U_(3)                                               /**< (LCDC_HEOISR) DMA Descriptor Loaded Position */
#define LCDC_HEOISR_DSCR_Msk                  (_U_(0x1) << LCDC_HEOISR_DSCR_Pos)                   /**< (LCDC_HEOISR) DMA Descriptor Loaded Mask */
#define LCDC_HEOISR_DSCR(value)               (LCDC_HEOISR_DSCR_Msk & ((value) << LCDC_HEOISR_DSCR_Pos))
#define LCDC_HEOISR_ADD_Pos                   _U_(4)                                               /**< (LCDC_HEOISR) Head Descriptor Loaded Position */
#define LCDC_HEOISR_ADD_Msk                   (_U_(0x1) << LCDC_HEOISR_ADD_Pos)                    /**< (LCDC_HEOISR) Head Descriptor Loaded Mask */
#define LCDC_HEOISR_ADD(value)                (LCDC_HEOISR_ADD_Msk & ((value) << LCDC_HEOISR_ADD_Pos))
#define LCDC_HEOISR_DONE_Pos                  _U_(5)                                               /**< (LCDC_HEOISR) End of List Detected Position */
#define LCDC_HEOISR_DONE_Msk                  (_U_(0x1) << LCDC_HEOISR_DONE_Pos)                   /**< (LCDC_HEOISR) End of List Detected Mask */
#define LCDC_HEOISR_DONE(value)               (LCDC_HEOISR_DONE_Msk & ((value) << LCDC_HEOISR_DONE_Pos))
#define LCDC_HEOISR_OVR_Pos                   _U_(6)                                               /**< (LCDC_HEOISR) Overflow Detected Position */
#define LCDC_HEOISR_OVR_Msk                   (_U_(0x1) << LCDC_HEOISR_OVR_Pos)                    /**< (LCDC_HEOISR) Overflow Detected Mask */
#define LCDC_HEOISR_OVR(value)                (LCDC_HEOISR_OVR_Msk & ((value) << LCDC_HEOISR_OVR_Pos))
#define LCDC_HEOISR_UDMA_Pos                  _U_(10)                                              /**< (LCDC_HEOISR) End of DMA Transfer for U Component Position */
#define LCDC_HEOISR_UDMA_Msk                  (_U_(0x1) << LCDC_HEOISR_UDMA_Pos)                   /**< (LCDC_HEOISR) End of DMA Transfer for U Component Mask */
#define LCDC_HEOISR_UDMA(value)               (LCDC_HEOISR_UDMA_Msk & ((value) << LCDC_HEOISR_UDMA_Pos))
#define LCDC_HEOISR_UDSCR_Pos                 _U_(11)                                              /**< (LCDC_HEOISR) DMA Descriptor Loaded for U Component Position */
#define LCDC_HEOISR_UDSCR_Msk                 (_U_(0x1) << LCDC_HEOISR_UDSCR_Pos)                  /**< (LCDC_HEOISR) DMA Descriptor Loaded for U Component Mask */
#define LCDC_HEOISR_UDSCR(value)              (LCDC_HEOISR_UDSCR_Msk & ((value) << LCDC_HEOISR_UDSCR_Pos))
#define LCDC_HEOISR_UADD_Pos                  _U_(12)                                              /**< (LCDC_HEOISR) Head Descriptor Loaded for U Component Position */
#define LCDC_HEOISR_UADD_Msk                  (_U_(0x1) << LCDC_HEOISR_UADD_Pos)                   /**< (LCDC_HEOISR) Head Descriptor Loaded for U Component Mask */
#define LCDC_HEOISR_UADD(value)               (LCDC_HEOISR_UADD_Msk & ((value) << LCDC_HEOISR_UADD_Pos))
#define LCDC_HEOISR_UDONE_Pos                 _U_(13)                                              /**< (LCDC_HEOISR) End of List Detected for U Component Position */
#define LCDC_HEOISR_UDONE_Msk                 (_U_(0x1) << LCDC_HEOISR_UDONE_Pos)                  /**< (LCDC_HEOISR) End of List Detected for U Component Mask */
#define LCDC_HEOISR_UDONE(value)              (LCDC_HEOISR_UDONE_Msk & ((value) << LCDC_HEOISR_UDONE_Pos))
#define LCDC_HEOISR_UOVR_Pos                  _U_(14)                                              /**< (LCDC_HEOISR) Overflow Detected for U Component Position */
#define LCDC_HEOISR_UOVR_Msk                  (_U_(0x1) << LCDC_HEOISR_UOVR_Pos)                   /**< (LCDC_HEOISR) Overflow Detected for U Component Mask */
#define LCDC_HEOISR_UOVR(value)               (LCDC_HEOISR_UOVR_Msk & ((value) << LCDC_HEOISR_UOVR_Pos))
#define LCDC_HEOISR_VDMA_Pos                  _U_(18)                                              /**< (LCDC_HEOISR) End of DMA Transfer for V Component Position */
#define LCDC_HEOISR_VDMA_Msk                  (_U_(0x1) << LCDC_HEOISR_VDMA_Pos)                   /**< (LCDC_HEOISR) End of DMA Transfer for V Component Mask */
#define LCDC_HEOISR_VDMA(value)               (LCDC_HEOISR_VDMA_Msk & ((value) << LCDC_HEOISR_VDMA_Pos))
#define LCDC_HEOISR_VDSCR_Pos                 _U_(19)                                              /**< (LCDC_HEOISR) DMA Descriptor Loaded for V Component Position */
#define LCDC_HEOISR_VDSCR_Msk                 (_U_(0x1) << LCDC_HEOISR_VDSCR_Pos)                  /**< (LCDC_HEOISR) DMA Descriptor Loaded for V Component Mask */
#define LCDC_HEOISR_VDSCR(value)              (LCDC_HEOISR_VDSCR_Msk & ((value) << LCDC_HEOISR_VDSCR_Pos))
#define LCDC_HEOISR_VADD_Pos                  _U_(20)                                              /**< (LCDC_HEOISR) Head Descriptor Loaded for V Component Position */
#define LCDC_HEOISR_VADD_Msk                  (_U_(0x1) << LCDC_HEOISR_VADD_Pos)                   /**< (LCDC_HEOISR) Head Descriptor Loaded for V Component Mask */
#define LCDC_HEOISR_VADD(value)               (LCDC_HEOISR_VADD_Msk & ((value) << LCDC_HEOISR_VADD_Pos))
#define LCDC_HEOISR_VDONE_Pos                 _U_(21)                                              /**< (LCDC_HEOISR) End of List Detected for V Component Position */
#define LCDC_HEOISR_VDONE_Msk                 (_U_(0x1) << LCDC_HEOISR_VDONE_Pos)                  /**< (LCDC_HEOISR) End of List Detected for V Component Mask */
#define LCDC_HEOISR_VDONE(value)              (LCDC_HEOISR_VDONE_Msk & ((value) << LCDC_HEOISR_VDONE_Pos))
#define LCDC_HEOISR_VOVR_Pos                  _U_(22)                                              /**< (LCDC_HEOISR) Overflow Detected for V Component Position */
#define LCDC_HEOISR_VOVR_Msk                  (_U_(0x1) << LCDC_HEOISR_VOVR_Pos)                   /**< (LCDC_HEOISR) Overflow Detected for V Component Mask */
#define LCDC_HEOISR_VOVR(value)               (LCDC_HEOISR_VOVR_Msk & ((value) << LCDC_HEOISR_VOVR_Pos))
#define LCDC_HEOISR_Msk                       _U_(0x007C7C7C)                                      /**< (LCDC_HEOISR) Register Mask  */


/* -------- LCDC_HEOHEAD : (LCDC Offset: 0x35C) (R/W 32) High-End Overlay DMA Head Register -------- */
#define LCDC_HEOHEAD_HEAD_Pos                 _U_(2)                                               /**< (LCDC_HEOHEAD) DMA Head Pointer Position */
#define LCDC_HEOHEAD_HEAD_Msk                 (_U_(0x3FFFFFFF) << LCDC_HEOHEAD_HEAD_Pos)           /**< (LCDC_HEOHEAD) DMA Head Pointer Mask */
#define LCDC_HEOHEAD_HEAD(value)              (LCDC_HEOHEAD_HEAD_Msk & ((value) << LCDC_HEOHEAD_HEAD_Pos))
#define LCDC_HEOHEAD_Msk                      _U_(0xFFFFFFFC)                                      /**< (LCDC_HEOHEAD) Register Mask  */


/* -------- LCDC_HEOADDR : (LCDC Offset: 0x360) (R/W 32) High-End Overlay DMA Address Register -------- */
#define LCDC_HEOADDR_ADDR_Pos                 _U_(0)                                               /**< (LCDC_HEOADDR) DMA Transfer Start Address Position */
#define LCDC_HEOADDR_ADDR_Msk                 (_U_(0xFFFFFFFF) << LCDC_HEOADDR_ADDR_Pos)           /**< (LCDC_HEOADDR) DMA Transfer Start Address Mask */
#define LCDC_HEOADDR_ADDR(value)              (LCDC_HEOADDR_ADDR_Msk & ((value) << LCDC_HEOADDR_ADDR_Pos))
#define LCDC_HEOADDR_Msk                      _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOADDR) Register Mask  */


/* -------- LCDC_HEOCTRL : (LCDC Offset: 0x364) (R/W 32) High-End Overlay DMA Control Register -------- */
#define LCDC_HEOCTRL_DFETCH_Pos               _U_(0)                                               /**< (LCDC_HEOCTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_HEOCTRL_DFETCH_Msk               (_U_(0x1) << LCDC_HEOCTRL_DFETCH_Pos)                /**< (LCDC_HEOCTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_HEOCTRL_DFETCH(value)            (LCDC_HEOCTRL_DFETCH_Msk & ((value) << LCDC_HEOCTRL_DFETCH_Pos))
#define LCDC_HEOCTRL_LFETCH_Pos               _U_(1)                                               /**< (LCDC_HEOCTRL) Lookup Table Fetch Enable Position */
#define LCDC_HEOCTRL_LFETCH_Msk               (_U_(0x1) << LCDC_HEOCTRL_LFETCH_Pos)                /**< (LCDC_HEOCTRL) Lookup Table Fetch Enable Mask */
#define LCDC_HEOCTRL_LFETCH(value)            (LCDC_HEOCTRL_LFETCH_Msk & ((value) << LCDC_HEOCTRL_LFETCH_Pos))
#define LCDC_HEOCTRL_DMAIEN_Pos               _U_(2)                                               /**< (LCDC_HEOCTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_HEOCTRL_DMAIEN_Msk               (_U_(0x1) << LCDC_HEOCTRL_DMAIEN_Pos)                /**< (LCDC_HEOCTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_HEOCTRL_DMAIEN(value)            (LCDC_HEOCTRL_DMAIEN_Msk & ((value) << LCDC_HEOCTRL_DMAIEN_Pos))
#define LCDC_HEOCTRL_DSCRIEN_Pos              _U_(3)                                               /**< (LCDC_HEOCTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOCTRL_DSCRIEN_Msk              (_U_(0x1) << LCDC_HEOCTRL_DSCRIEN_Pos)               /**< (LCDC_HEOCTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOCTRL_DSCRIEN(value)           (LCDC_HEOCTRL_DSCRIEN_Msk & ((value) << LCDC_HEOCTRL_DSCRIEN_Pos))
#define LCDC_HEOCTRL_ADDIEN_Pos               _U_(4)                                               /**< (LCDC_HEOCTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_HEOCTRL_ADDIEN_Msk               (_U_(0x1) << LCDC_HEOCTRL_ADDIEN_Pos)                /**< (LCDC_HEOCTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_HEOCTRL_ADDIEN(value)            (LCDC_HEOCTRL_ADDIEN_Msk & ((value) << LCDC_HEOCTRL_ADDIEN_Pos))
#define LCDC_HEOCTRL_DONEIEN_Pos              _U_(5)                                               /**< (LCDC_HEOCTRL) End of List Interrupt Enable Position */
#define LCDC_HEOCTRL_DONEIEN_Msk              (_U_(0x1) << LCDC_HEOCTRL_DONEIEN_Pos)               /**< (LCDC_HEOCTRL) End of List Interrupt Enable Mask */
#define LCDC_HEOCTRL_DONEIEN(value)           (LCDC_HEOCTRL_DONEIEN_Msk & ((value) << LCDC_HEOCTRL_DONEIEN_Pos))
#define LCDC_HEOCTRL_Msk                      _U_(0x0000003F)                                      /**< (LCDC_HEOCTRL) Register Mask  */


/* -------- LCDC_HEONEXT : (LCDC Offset: 0x368) (R/W 32) High-End Overlay DMA Next Register -------- */
#define LCDC_HEONEXT_NEXT_Pos                 _U_(0)                                               /**< (LCDC_HEONEXT) DMA Descriptor Next Address Position */
#define LCDC_HEONEXT_NEXT_Msk                 (_U_(0xFFFFFFFF) << LCDC_HEONEXT_NEXT_Pos)           /**< (LCDC_HEONEXT) DMA Descriptor Next Address Mask */
#define LCDC_HEONEXT_NEXT(value)              (LCDC_HEONEXT_NEXT_Msk & ((value) << LCDC_HEONEXT_NEXT_Pos))
#define LCDC_HEONEXT_Msk                      _U_(0xFFFFFFFF)                                      /**< (LCDC_HEONEXT) Register Mask  */


/* -------- LCDC_HEOUHEAD : (LCDC Offset: 0x36C) (R/W 32) High-End Overlay U-UV DMA Head Register -------- */
#define LCDC_HEOUHEAD_UHEAD_Pos               _U_(0)                                               /**< (LCDC_HEOUHEAD) DMA Head Pointer Position */
#define LCDC_HEOUHEAD_UHEAD_Msk               (_U_(0xFFFFFFFF) << LCDC_HEOUHEAD_UHEAD_Pos)         /**< (LCDC_HEOUHEAD) DMA Head Pointer Mask */
#define LCDC_HEOUHEAD_UHEAD(value)            (LCDC_HEOUHEAD_UHEAD_Msk & ((value) << LCDC_HEOUHEAD_UHEAD_Pos))
#define LCDC_HEOUHEAD_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOUHEAD) Register Mask  */


/* -------- LCDC_HEOUADDR : (LCDC Offset: 0x370) (R/W 32) High-End Overlay U-UV DMA Address Register -------- */
#define LCDC_HEOUADDR_UADDR_Pos               _U_(0)                                               /**< (LCDC_HEOUADDR) DMA Transfer Start Address for U or UV Chrominance Position */
#define LCDC_HEOUADDR_UADDR_Msk               (_U_(0xFFFFFFFF) << LCDC_HEOUADDR_UADDR_Pos)         /**< (LCDC_HEOUADDR) DMA Transfer Start Address for U or UV Chrominance Mask */
#define LCDC_HEOUADDR_UADDR(value)            (LCDC_HEOUADDR_UADDR_Msk & ((value) << LCDC_HEOUADDR_UADDR_Pos))
#define LCDC_HEOUADDR_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOUADDR) Register Mask  */


/* -------- LCDC_HEOUCTRL : (LCDC Offset: 0x374) (R/W 32) High-End Overlay U-UV DMA Control Register -------- */
#define LCDC_HEOUCTRL_UDFETCH_Pos             _U_(0)                                               /**< (LCDC_HEOUCTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_HEOUCTRL_UDFETCH_Msk             (_U_(0x1) << LCDC_HEOUCTRL_UDFETCH_Pos)              /**< (LCDC_HEOUCTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_HEOUCTRL_UDFETCH(value)          (LCDC_HEOUCTRL_UDFETCH_Msk & ((value) << LCDC_HEOUCTRL_UDFETCH_Pos))
#define LCDC_HEOUCTRL_UDMAIEN_Pos             _U_(2)                                               /**< (LCDC_HEOUCTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_HEOUCTRL_UDMAIEN_Msk             (_U_(0x1) << LCDC_HEOUCTRL_UDMAIEN_Pos)              /**< (LCDC_HEOUCTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_HEOUCTRL_UDMAIEN(value)          (LCDC_HEOUCTRL_UDMAIEN_Msk & ((value) << LCDC_HEOUCTRL_UDMAIEN_Pos))
#define LCDC_HEOUCTRL_UDSCRIEN_Pos            _U_(3)                                               /**< (LCDC_HEOUCTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOUCTRL_UDSCRIEN_Msk            (_U_(0x1) << LCDC_HEOUCTRL_UDSCRIEN_Pos)             /**< (LCDC_HEOUCTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOUCTRL_UDSCRIEN(value)         (LCDC_HEOUCTRL_UDSCRIEN_Msk & ((value) << LCDC_HEOUCTRL_UDSCRIEN_Pos))
#define LCDC_HEOUCTRL_UADDIEN_Pos             _U_(4)                                               /**< (LCDC_HEOUCTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_HEOUCTRL_UADDIEN_Msk             (_U_(0x1) << LCDC_HEOUCTRL_UADDIEN_Pos)              /**< (LCDC_HEOUCTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_HEOUCTRL_UADDIEN(value)          (LCDC_HEOUCTRL_UADDIEN_Msk & ((value) << LCDC_HEOUCTRL_UADDIEN_Pos))
#define LCDC_HEOUCTRL_UDONEIEN_Pos            _U_(5)                                               /**< (LCDC_HEOUCTRL) End of List Interrupt Enable Position */
#define LCDC_HEOUCTRL_UDONEIEN_Msk            (_U_(0x1) << LCDC_HEOUCTRL_UDONEIEN_Pos)             /**< (LCDC_HEOUCTRL) End of List Interrupt Enable Mask */
#define LCDC_HEOUCTRL_UDONEIEN(value)         (LCDC_HEOUCTRL_UDONEIEN_Msk & ((value) << LCDC_HEOUCTRL_UDONEIEN_Pos))
#define LCDC_HEOUCTRL_Msk                     _U_(0x0000003D)                                      /**< (LCDC_HEOUCTRL) Register Mask  */


/* -------- LCDC_HEOUNEXT : (LCDC Offset: 0x378) (R/W 32) High-End Overlay U-UV DMA Next Register -------- */
#define LCDC_HEOUNEXT_UNEXT_Pos               _U_(0)                                               /**< (LCDC_HEOUNEXT) DMA Descriptor Next Address Position */
#define LCDC_HEOUNEXT_UNEXT_Msk               (_U_(0xFFFFFFFF) << LCDC_HEOUNEXT_UNEXT_Pos)         /**< (LCDC_HEOUNEXT) DMA Descriptor Next Address Mask */
#define LCDC_HEOUNEXT_UNEXT(value)            (LCDC_HEOUNEXT_UNEXT_Msk & ((value) << LCDC_HEOUNEXT_UNEXT_Pos))
#define LCDC_HEOUNEXT_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOUNEXT) Register Mask  */


/* -------- LCDC_HEOVHEAD : (LCDC Offset: 0x37C) (R/W 32) High-End Overlay V DMA Head Register -------- */
#define LCDC_HEOVHEAD_VHEAD_Pos               _U_(0)                                               /**< (LCDC_HEOVHEAD) DMA Head Pointer Position */
#define LCDC_HEOVHEAD_VHEAD_Msk               (_U_(0xFFFFFFFF) << LCDC_HEOVHEAD_VHEAD_Pos)         /**< (LCDC_HEOVHEAD) DMA Head Pointer Mask */
#define LCDC_HEOVHEAD_VHEAD(value)            (LCDC_HEOVHEAD_VHEAD_Msk & ((value) << LCDC_HEOVHEAD_VHEAD_Pos))
#define LCDC_HEOVHEAD_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOVHEAD) Register Mask  */


/* -------- LCDC_HEOVADDR : (LCDC Offset: 0x380) (R/W 32) High-End Overlay V DMA Address Register -------- */
#define LCDC_HEOVADDR_VADDR_Pos               _U_(0)                                               /**< (LCDC_HEOVADDR) DMA Transfer Start Address for V Chrominance Position */
#define LCDC_HEOVADDR_VADDR_Msk               (_U_(0xFFFFFFFF) << LCDC_HEOVADDR_VADDR_Pos)         /**< (LCDC_HEOVADDR) DMA Transfer Start Address for V Chrominance Mask */
#define LCDC_HEOVADDR_VADDR(value)            (LCDC_HEOVADDR_VADDR_Msk & ((value) << LCDC_HEOVADDR_VADDR_Pos))
#define LCDC_HEOVADDR_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOVADDR) Register Mask  */


/* -------- LCDC_HEOVCTRL : (LCDC Offset: 0x384) (R/W 32) High-End Overlay V DMA Control Register -------- */
#define LCDC_HEOVCTRL_VDFETCH_Pos             _U_(0)                                               /**< (LCDC_HEOVCTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_HEOVCTRL_VDFETCH_Msk             (_U_(0x1) << LCDC_HEOVCTRL_VDFETCH_Pos)              /**< (LCDC_HEOVCTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_HEOVCTRL_VDFETCH(value)          (LCDC_HEOVCTRL_VDFETCH_Msk & ((value) << LCDC_HEOVCTRL_VDFETCH_Pos))
#define LCDC_HEOVCTRL_VDMAIEN_Pos             _U_(2)                                               /**< (LCDC_HEOVCTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_HEOVCTRL_VDMAIEN_Msk             (_U_(0x1) << LCDC_HEOVCTRL_VDMAIEN_Pos)              /**< (LCDC_HEOVCTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_HEOVCTRL_VDMAIEN(value)          (LCDC_HEOVCTRL_VDMAIEN_Msk & ((value) << LCDC_HEOVCTRL_VDMAIEN_Pos))
#define LCDC_HEOVCTRL_VDSCRIEN_Pos            _U_(3)                                               /**< (LCDC_HEOVCTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_HEOVCTRL_VDSCRIEN_Msk            (_U_(0x1) << LCDC_HEOVCTRL_VDSCRIEN_Pos)             /**< (LCDC_HEOVCTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_HEOVCTRL_VDSCRIEN(value)         (LCDC_HEOVCTRL_VDSCRIEN_Msk & ((value) << LCDC_HEOVCTRL_VDSCRIEN_Pos))
#define LCDC_HEOVCTRL_VADDIEN_Pos             _U_(4)                                               /**< (LCDC_HEOVCTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_HEOVCTRL_VADDIEN_Msk             (_U_(0x1) << LCDC_HEOVCTRL_VADDIEN_Pos)              /**< (LCDC_HEOVCTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_HEOVCTRL_VADDIEN(value)          (LCDC_HEOVCTRL_VADDIEN_Msk & ((value) << LCDC_HEOVCTRL_VADDIEN_Pos))
#define LCDC_HEOVCTRL_VDONEIEN_Pos            _U_(5)                                               /**< (LCDC_HEOVCTRL) End of List Interrupt Enable Position */
#define LCDC_HEOVCTRL_VDONEIEN_Msk            (_U_(0x1) << LCDC_HEOVCTRL_VDONEIEN_Pos)             /**< (LCDC_HEOVCTRL) End of List Interrupt Enable Mask */
#define LCDC_HEOVCTRL_VDONEIEN(value)         (LCDC_HEOVCTRL_VDONEIEN_Msk & ((value) << LCDC_HEOVCTRL_VDONEIEN_Pos))
#define LCDC_HEOVCTRL_Msk                     _U_(0x0000003D)                                      /**< (LCDC_HEOVCTRL) Register Mask  */


/* -------- LCDC_HEOVNEXT : (LCDC Offset: 0x388) (R/W 32) High-End Overlay V DMA Next Register -------- */
#define LCDC_HEOVNEXT_VNEXT_Pos               _U_(0)                                               /**< (LCDC_HEOVNEXT) DMA Descriptor Next Address Position */
#define LCDC_HEOVNEXT_VNEXT_Msk               (_U_(0xFFFFFFFF) << LCDC_HEOVNEXT_VNEXT_Pos)         /**< (LCDC_HEOVNEXT) DMA Descriptor Next Address Mask */
#define LCDC_HEOVNEXT_VNEXT(value)            (LCDC_HEOVNEXT_VNEXT_Msk & ((value) << LCDC_HEOVNEXT_VNEXT_Pos))
#define LCDC_HEOVNEXT_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOVNEXT) Register Mask  */


/* -------- LCDC_HEOCFG0 : (LCDC Offset: 0x38C) (R/W 32) High-End Overlay Configuration Register 0 -------- */
#define LCDC_HEOCFG0_SIF_Pos                  _U_(0)                                               /**< (LCDC_HEOCFG0) Source Interface Position */
#define LCDC_HEOCFG0_SIF_Msk                  (_U_(0x1) << LCDC_HEOCFG0_SIF_Pos)                   /**< (LCDC_HEOCFG0) Source Interface Mask */
#define LCDC_HEOCFG0_SIF(value)               (LCDC_HEOCFG0_SIF_Msk & ((value) << LCDC_HEOCFG0_SIF_Pos))
#define LCDC_HEOCFG0_BLEN_Pos                 _U_(4)                                               /**< (LCDC_HEOCFG0) AHB Burst Length Position */
#define LCDC_HEOCFG0_BLEN_Msk                 (_U_(0x3) << LCDC_HEOCFG0_BLEN_Pos)                  /**< (LCDC_HEOCFG0) AHB Burst Length Mask */
#define LCDC_HEOCFG0_BLEN(value)              (LCDC_HEOCFG0_BLEN_Msk & ((value) << LCDC_HEOCFG0_BLEN_Pos))
#define   LCDC_HEOCFG0_BLEN_AHB_BLEN_SINGLE_Val _U_(0x0)                                             /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR4_Val _U_(0x1)                                             /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR8_Val _U_(0x2)                                             /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR16_Val _U_(0x3)                                             /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_HEOCFG0_BLEN_AHB_BLEN_SINGLE     (LCDC_HEOCFG0_BLEN_AHB_BLEN_SINGLE_Val << LCDC_HEOCFG0_BLEN_Pos) /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR4      (LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR4_Val << LCDC_HEOCFG0_BLEN_Pos) /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR8      (LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR8_Val << LCDC_HEOCFG0_BLEN_Pos) /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR16     (LCDC_HEOCFG0_BLEN_AHB_BLEN_INCR16_Val << LCDC_HEOCFG0_BLEN_Pos) /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLENUV_Pos               _U_(6)                                               /**< (LCDC_HEOCFG0) AHB Burst Length for U-V Channel Position */
#define LCDC_HEOCFG0_BLENUV_Msk               (_U_(0x3) << LCDC_HEOCFG0_BLENUV_Pos)                /**< (LCDC_HEOCFG0) AHB Burst Length for U-V Channel Mask */
#define LCDC_HEOCFG0_BLENUV(value)            (LCDC_HEOCFG0_BLENUV_Msk & ((value) << LCDC_HEOCFG0_BLENUV_Pos))
#define   LCDC_HEOCFG0_BLENUV_AHB_SINGLE_Val  _U_(0x0)                                             /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLENUV_AHB_INCR4_Val   _U_(0x1)                                             /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLENUV_AHB_INCR8_Val   _U_(0x2)                                             /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define   LCDC_HEOCFG0_BLENUV_AHB_INCR16_Val  _U_(0x3)                                             /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats.  */
#define LCDC_HEOCFG0_BLENUV_AHB_SINGLE        (LCDC_HEOCFG0_BLENUV_AHB_SINGLE_Val << LCDC_HEOCFG0_BLENUV_Pos) /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLENUV_AHB_INCR4         (LCDC_HEOCFG0_BLENUV_AHB_INCR4_Val << LCDC_HEOCFG0_BLENUV_Pos) /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 4 data. An AHB INCR4 Burst is used. SINGLE, INCR and INCR4 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLENUV_AHB_INCR8         (LCDC_HEOCFG0_BLENUV_AHB_INCR8_Val << LCDC_HEOCFG0_BLENUV_Pos) /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is used. SINGLE, INCR, INCR4 and INCR8 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_BLENUV_AHB_INCR16        (LCDC_HEOCFG0_BLENUV_AHB_INCR16_Val << LCDC_HEOCFG0_BLENUV_Pos) /**< (LCDC_HEOCFG0) AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 16 data. An AHB INCR16 Burst is used. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are used. INCR is used for a burst of 2 and 3 beats. Position  */
#define LCDC_HEOCFG0_DLBO_Pos                 _U_(8)                                               /**< (LCDC_HEOCFG0) Defined Length Burst Only For Channel Bus Transaction Position */
#define LCDC_HEOCFG0_DLBO_Msk                 (_U_(0x1) << LCDC_HEOCFG0_DLBO_Pos)                  /**< (LCDC_HEOCFG0) Defined Length Burst Only For Channel Bus Transaction Mask */
#define LCDC_HEOCFG0_DLBO(value)              (LCDC_HEOCFG0_DLBO_Msk & ((value) << LCDC_HEOCFG0_DLBO_Pos))
#define LCDC_HEOCFG0_ROTDIS_Pos               _U_(12)                                              /**< (LCDC_HEOCFG0) Hardware Rotation Optimization Disable Position */
#define LCDC_HEOCFG0_ROTDIS_Msk               (_U_(0x1) << LCDC_HEOCFG0_ROTDIS_Pos)                /**< (LCDC_HEOCFG0) Hardware Rotation Optimization Disable Mask */
#define LCDC_HEOCFG0_ROTDIS(value)            (LCDC_HEOCFG0_ROTDIS_Msk & ((value) << LCDC_HEOCFG0_ROTDIS_Pos))
#define LCDC_HEOCFG0_LOCKDIS_Pos              _U_(13)                                              /**< (LCDC_HEOCFG0) Hardware Rotation Lock Disable Position */
#define LCDC_HEOCFG0_LOCKDIS_Msk              (_U_(0x1) << LCDC_HEOCFG0_LOCKDIS_Pos)               /**< (LCDC_HEOCFG0) Hardware Rotation Lock Disable Mask */
#define LCDC_HEOCFG0_LOCKDIS(value)           (LCDC_HEOCFG0_LOCKDIS_Msk & ((value) << LCDC_HEOCFG0_LOCKDIS_Pos))
#define LCDC_HEOCFG0_Msk                      _U_(0x000031F1)                                      /**< (LCDC_HEOCFG0) Register Mask  */


/* -------- LCDC_HEOCFG1 : (LCDC Offset: 0x390) (R/W 32) High-End Overlay Configuration Register 1 -------- */
#define LCDC_HEOCFG1_CLUTEN_Pos               _U_(0)                                               /**< (LCDC_HEOCFG1) Color Lookup Table Mode Enable Position */
#define LCDC_HEOCFG1_CLUTEN_Msk               (_U_(0x1) << LCDC_HEOCFG1_CLUTEN_Pos)                /**< (LCDC_HEOCFG1) Color Lookup Table Mode Enable Mask */
#define LCDC_HEOCFG1_CLUTEN(value)            (LCDC_HEOCFG1_CLUTEN_Msk & ((value) << LCDC_HEOCFG1_CLUTEN_Pos))
#define LCDC_HEOCFG1_YUVEN_Pos                _U_(1)                                               /**< (LCDC_HEOCFG1) YUV Color Space Enable Position */
#define LCDC_HEOCFG1_YUVEN_Msk                (_U_(0x1) << LCDC_HEOCFG1_YUVEN_Pos)                 /**< (LCDC_HEOCFG1) YUV Color Space Enable Mask */
#define LCDC_HEOCFG1_YUVEN(value)             (LCDC_HEOCFG1_YUVEN_Msk & ((value) << LCDC_HEOCFG1_YUVEN_Pos))
#define LCDC_HEOCFG1_RGBMODE_Pos              _U_(4)                                               /**< (LCDC_HEOCFG1) RGB Mode Input Selection Position */
#define LCDC_HEOCFG1_RGBMODE_Msk              (_U_(0xF) << LCDC_HEOCFG1_RGBMODE_Pos)               /**< (LCDC_HEOCFG1) RGB Mode Input Selection Mask */
#define LCDC_HEOCFG1_RGBMODE(value)           (LCDC_HEOCFG1_RGBMODE_Msk & ((value) << LCDC_HEOCFG1_RGBMODE_Pos))
#define   LCDC_HEOCFG1_RGBMODE_12BPP_RGB_444_Val _U_(0x0)                                             /**< (LCDC_HEOCFG1) 12 bpp RGB 444  */
#define   LCDC_HEOCFG1_RGBMODE_16BPP_ARGB_4444_Val _U_(0x1)                                             /**< (LCDC_HEOCFG1) 16 bpp ARGB 4444  */
#define   LCDC_HEOCFG1_RGBMODE_16BPP_RGBA_4444_Val _U_(0x2)                                             /**< (LCDC_HEOCFG1) 16 bpp RGBA 4444  */
#define   LCDC_HEOCFG1_RGBMODE_16BPP_RGB_565_Val _U_(0x3)                                             /**< (LCDC_HEOCFG1) 16 bpp RGB 565  */
#define   LCDC_HEOCFG1_RGBMODE_16BPP_TRGB_1555_Val _U_(0x4)                                             /**< (LCDC_HEOCFG1) 16 bpp TRGB 1555  */
#define   LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666_Val _U_(0x5)                                             /**< (LCDC_HEOCFG1) 18 bpp RGB 666  */
#define   LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666PACKED_Val _U_(0x6)                                             /**< (LCDC_HEOCFG1) 18 bpp RGB 666 PACKED  */
#define   LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_1666_Val _U_(0x7)                                             /**< (LCDC_HEOCFG1) 19 bpp TRGB 1666  */
#define   LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_PACKED_Val _U_(0x8)                                             /**< (LCDC_HEOCFG1) 19 bpp TRGB 1666 PACKED  */
#define   LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_Val _U_(0x9)                                             /**< (LCDC_HEOCFG1) 24 bpp RGB 888  */
#define   LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_PACKED_Val _U_(0xA)                                             /**< (LCDC_HEOCFG1) 24 bpp RGB 888 PACKED  */
#define   LCDC_HEOCFG1_RGBMODE_25BPP_TRGB_1888_Val _U_(0xB)                                             /**< (LCDC_HEOCFG1) 25 bpp TRGB 1888  */
#define   LCDC_HEOCFG1_RGBMODE_32BPP_ARGB_8888_Val _U_(0xC)                                             /**< (LCDC_HEOCFG1) 32 bpp ARGB 8888  */
#define   LCDC_HEOCFG1_RGBMODE_32BPP_RGBA_8888_Val _U_(0xD)                                             /**< (LCDC_HEOCFG1) 32 bpp RGBA 8888  */
#define LCDC_HEOCFG1_RGBMODE_12BPP_RGB_444    (LCDC_HEOCFG1_RGBMODE_12BPP_RGB_444_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 12 bpp RGB 444 Position  */
#define LCDC_HEOCFG1_RGBMODE_16BPP_ARGB_4444  (LCDC_HEOCFG1_RGBMODE_16BPP_ARGB_4444_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 16 bpp ARGB 4444 Position  */
#define LCDC_HEOCFG1_RGBMODE_16BPP_RGBA_4444  (LCDC_HEOCFG1_RGBMODE_16BPP_RGBA_4444_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 16 bpp RGBA 4444 Position  */
#define LCDC_HEOCFG1_RGBMODE_16BPP_RGB_565    (LCDC_HEOCFG1_RGBMODE_16BPP_RGB_565_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 16 bpp RGB 565 Position  */
#define LCDC_HEOCFG1_RGBMODE_16BPP_TRGB_1555  (LCDC_HEOCFG1_RGBMODE_16BPP_TRGB_1555_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 16 bpp TRGB 1555 Position  */
#define LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666    (LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 18 bpp RGB 666 Position  */
#define LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666PACKED (LCDC_HEOCFG1_RGBMODE_18BPP_RGB_666PACKED_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 18 bpp RGB 666 PACKED Position  */
#define LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_1666  (LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_1666_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 19 bpp TRGB 1666 Position  */
#define LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_PACKED (LCDC_HEOCFG1_RGBMODE_19BPP_TRGB_PACKED_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 19 bpp TRGB 1666 PACKED Position  */
#define LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888    (LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 24 bpp RGB 888 Position  */
#define LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_PACKED (LCDC_HEOCFG1_RGBMODE_24BPP_RGB_888_PACKED_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 24 bpp RGB 888 PACKED Position  */
#define LCDC_HEOCFG1_RGBMODE_25BPP_TRGB_1888  (LCDC_HEOCFG1_RGBMODE_25BPP_TRGB_1888_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 25 bpp TRGB 1888 Position  */
#define LCDC_HEOCFG1_RGBMODE_32BPP_ARGB_8888  (LCDC_HEOCFG1_RGBMODE_32BPP_ARGB_8888_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 32 bpp ARGB 8888 Position  */
#define LCDC_HEOCFG1_RGBMODE_32BPP_RGBA_8888  (LCDC_HEOCFG1_RGBMODE_32BPP_RGBA_8888_Val << LCDC_HEOCFG1_RGBMODE_Pos) /**< (LCDC_HEOCFG1) 32 bpp RGBA 8888 Position  */
#define LCDC_HEOCFG1_CLUTMODE_Pos             _U_(8)                                               /**< (LCDC_HEOCFG1) Color Lookup Table Mode Input Selection Position */
#define LCDC_HEOCFG1_CLUTMODE_Msk             (_U_(0x3) << LCDC_HEOCFG1_CLUTMODE_Pos)              /**< (LCDC_HEOCFG1) Color Lookup Table Mode Input Selection Mask */
#define LCDC_HEOCFG1_CLUTMODE(value)          (LCDC_HEOCFG1_CLUTMODE_Msk & ((value) << LCDC_HEOCFG1_CLUTMODE_Pos))
#define   LCDC_HEOCFG1_CLUTMODE_CLUT_1BPP_Val _U_(0x0)                                             /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 1 bit per pixel  */
#define   LCDC_HEOCFG1_CLUTMODE_CLUT_2BPP_Val _U_(0x1)                                             /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 2 bits per pixel  */
#define   LCDC_HEOCFG1_CLUTMODE_CLUT_4BPP_Val _U_(0x2)                                             /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 4 bits per pixel  */
#define   LCDC_HEOCFG1_CLUTMODE_CLUT_8BPP_Val _U_(0x3)                                             /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 8 bits per pixel  */
#define LCDC_HEOCFG1_CLUTMODE_CLUT_1BPP       (LCDC_HEOCFG1_CLUTMODE_CLUT_1BPP_Val << LCDC_HEOCFG1_CLUTMODE_Pos) /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 1 bit per pixel Position  */
#define LCDC_HEOCFG1_CLUTMODE_CLUT_2BPP       (LCDC_HEOCFG1_CLUTMODE_CLUT_2BPP_Val << LCDC_HEOCFG1_CLUTMODE_Pos) /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 2 bits per pixel Position  */
#define LCDC_HEOCFG1_CLUTMODE_CLUT_4BPP       (LCDC_HEOCFG1_CLUTMODE_CLUT_4BPP_Val << LCDC_HEOCFG1_CLUTMODE_Pos) /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 4 bits per pixel Position  */
#define LCDC_HEOCFG1_CLUTMODE_CLUT_8BPP       (LCDC_HEOCFG1_CLUTMODE_CLUT_8BPP_Val << LCDC_HEOCFG1_CLUTMODE_Pos) /**< (LCDC_HEOCFG1) Color Lookup Table mode set to 8 bits per pixel Position  */
#define LCDC_HEOCFG1_YUVMODE_Pos              _U_(12)                                              /**< (LCDC_HEOCFG1) YUV Mode Input Selection Position */
#define LCDC_HEOCFG1_YUVMODE_Msk              (_U_(0xF) << LCDC_HEOCFG1_YUVMODE_Pos)               /**< (LCDC_HEOCFG1) YUV Mode Input Selection Mask */
#define LCDC_HEOCFG1_YUVMODE(value)           (LCDC_HEOCFG1_YUVMODE_Msk & ((value) << LCDC_HEOCFG1_YUVMODE_Pos))
#define LCDC_HEOCFG1_YUV422ROT_Pos            _U_(16)                                              /**< (LCDC_HEOCFG1) YUV 4:2:2 Rotation Position */
#define LCDC_HEOCFG1_YUV422ROT_Msk            (_U_(0x1) << LCDC_HEOCFG1_YUV422ROT_Pos)             /**< (LCDC_HEOCFG1) YUV 4:2:2 Rotation Mask */
#define LCDC_HEOCFG1_YUV422ROT(value)         (LCDC_HEOCFG1_YUV422ROT_Msk & ((value) << LCDC_HEOCFG1_YUV422ROT_Pos))
#define LCDC_HEOCFG1_YUV422SWP_Pos            _U_(17)                                              /**< (LCDC_HEOCFG1) YUV 4:2:2 Swap Position */
#define LCDC_HEOCFG1_YUV422SWP_Msk            (_U_(0x1) << LCDC_HEOCFG1_YUV422SWP_Pos)             /**< (LCDC_HEOCFG1) YUV 4:2:2 Swap Mask */
#define LCDC_HEOCFG1_YUV422SWP(value)         (LCDC_HEOCFG1_YUV422SWP_Msk & ((value) << LCDC_HEOCFG1_YUV422SWP_Pos))
#define LCDC_HEOCFG1_DSCALEOPT_Pos            _U_(20)                                              /**< (LCDC_HEOCFG1) Down Scaling Bandwidth Optimization Position */
#define LCDC_HEOCFG1_DSCALEOPT_Msk            (_U_(0x1) << LCDC_HEOCFG1_DSCALEOPT_Pos)             /**< (LCDC_HEOCFG1) Down Scaling Bandwidth Optimization Mask */
#define LCDC_HEOCFG1_DSCALEOPT(value)         (LCDC_HEOCFG1_DSCALEOPT_Msk & ((value) << LCDC_HEOCFG1_DSCALEOPT_Pos))
#define LCDC_HEOCFG1_Msk                      _U_(0x0013F3F3)                                      /**< (LCDC_HEOCFG1) Register Mask  */


/* -------- LCDC_HEOCFG2 : (LCDC Offset: 0x394) (R/W 32) High-End Overlay Configuration Register 2 -------- */
#define LCDC_HEOCFG2_XPOS_Pos                 _U_(0)                                               /**< (LCDC_HEOCFG2) Horizontal Window Position Position */
#define LCDC_HEOCFG2_XPOS_Msk                 (_U_(0x7FF) << LCDC_HEOCFG2_XPOS_Pos)                /**< (LCDC_HEOCFG2) Horizontal Window Position Mask */
#define LCDC_HEOCFG2_XPOS(value)              (LCDC_HEOCFG2_XPOS_Msk & ((value) << LCDC_HEOCFG2_XPOS_Pos))
#define LCDC_HEOCFG2_YPOS_Pos                 _U_(16)                                              /**< (LCDC_HEOCFG2) Vertical Window Position Position */
#define LCDC_HEOCFG2_YPOS_Msk                 (_U_(0x7FF) << LCDC_HEOCFG2_YPOS_Pos)                /**< (LCDC_HEOCFG2) Vertical Window Position Mask */
#define LCDC_HEOCFG2_YPOS(value)              (LCDC_HEOCFG2_YPOS_Msk & ((value) << LCDC_HEOCFG2_YPOS_Pos))
#define LCDC_HEOCFG2_Msk                      _U_(0x07FF07FF)                                      /**< (LCDC_HEOCFG2) Register Mask  */


/* -------- LCDC_HEOCFG3 : (LCDC Offset: 0x398) (R/W 32) High-End Overlay Configuration Register 3 -------- */
#define LCDC_HEOCFG3_XSIZE_Pos                _U_(0)                                               /**< (LCDC_HEOCFG3) Horizontal Window Size Position */
#define LCDC_HEOCFG3_XSIZE_Msk                (_U_(0x7FF) << LCDC_HEOCFG3_XSIZE_Pos)               /**< (LCDC_HEOCFG3) Horizontal Window Size Mask */
#define LCDC_HEOCFG3_XSIZE(value)             (LCDC_HEOCFG3_XSIZE_Msk & ((value) << LCDC_HEOCFG3_XSIZE_Pos))
#define LCDC_HEOCFG3_YSIZE_Pos                _U_(16)                                              /**< (LCDC_HEOCFG3) Vertical Window Size Position */
#define LCDC_HEOCFG3_YSIZE_Msk                (_U_(0x7FF) << LCDC_HEOCFG3_YSIZE_Pos)               /**< (LCDC_HEOCFG3) Vertical Window Size Mask */
#define LCDC_HEOCFG3_YSIZE(value)             (LCDC_HEOCFG3_YSIZE_Msk & ((value) << LCDC_HEOCFG3_YSIZE_Pos))
#define LCDC_HEOCFG3_Msk                      _U_(0x07FF07FF)                                      /**< (LCDC_HEOCFG3) Register Mask  */


/* -------- LCDC_HEOCFG4 : (LCDC Offset: 0x39C) (R/W 32) High-End Overlay Configuration Register 4 -------- */
#define LCDC_HEOCFG4_XMEMSIZE_Pos             _U_(0)                                               /**< (LCDC_HEOCFG4) Horizontal image Size in Memory Position */
#define LCDC_HEOCFG4_XMEMSIZE_Msk             (_U_(0x7FF) << LCDC_HEOCFG4_XMEMSIZE_Pos)            /**< (LCDC_HEOCFG4) Horizontal image Size in Memory Mask */
#define LCDC_HEOCFG4_XMEMSIZE(value)          (LCDC_HEOCFG4_XMEMSIZE_Msk & ((value) << LCDC_HEOCFG4_XMEMSIZE_Pos))
#define LCDC_HEOCFG4_YMEMSIZE_Pos             _U_(16)                                              /**< (LCDC_HEOCFG4) Vertical image Size in Memory Position */
#define LCDC_HEOCFG4_YMEMSIZE_Msk             (_U_(0x7FF) << LCDC_HEOCFG4_YMEMSIZE_Pos)            /**< (LCDC_HEOCFG4) Vertical image Size in Memory Mask */
#define LCDC_HEOCFG4_YMEMSIZE(value)          (LCDC_HEOCFG4_YMEMSIZE_Msk & ((value) << LCDC_HEOCFG4_YMEMSIZE_Pos))
#define LCDC_HEOCFG4_Msk                      _U_(0x07FF07FF)                                      /**< (LCDC_HEOCFG4) Register Mask  */


/* -------- LCDC_HEOCFG5 : (LCDC Offset: 0x3A0) (R/W 32) High-End Overlay Configuration Register 5 -------- */
#define LCDC_HEOCFG5_XSTRIDE_Pos              _U_(0)                                               /**< (LCDC_HEOCFG5) Horizontal Stride Position */
#define LCDC_HEOCFG5_XSTRIDE_Msk              (_U_(0xFFFFFFFF) << LCDC_HEOCFG5_XSTRIDE_Pos)        /**< (LCDC_HEOCFG5) Horizontal Stride Mask */
#define LCDC_HEOCFG5_XSTRIDE(value)           (LCDC_HEOCFG5_XSTRIDE_Msk & ((value) << LCDC_HEOCFG5_XSTRIDE_Pos))
#define LCDC_HEOCFG5_Msk                      _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG5) Register Mask  */


/* -------- LCDC_HEOCFG6 : (LCDC Offset: 0x3A4) (R/W 32) High-End Overlay Configuration Register 6 -------- */
#define LCDC_HEOCFG6_PSTRIDE_Pos              _U_(0)                                               /**< (LCDC_HEOCFG6) Pixel Stride Position */
#define LCDC_HEOCFG6_PSTRIDE_Msk              (_U_(0xFFFFFFFF) << LCDC_HEOCFG6_PSTRIDE_Pos)        /**< (LCDC_HEOCFG6) Pixel Stride Mask */
#define LCDC_HEOCFG6_PSTRIDE(value)           (LCDC_HEOCFG6_PSTRIDE_Msk & ((value) << LCDC_HEOCFG6_PSTRIDE_Pos))
#define LCDC_HEOCFG6_Msk                      _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG6) Register Mask  */


/* -------- LCDC_HEOCFG7 : (LCDC Offset: 0x3A8) (R/W 32) High-End Overlay Configuration Register 7 -------- */
#define LCDC_HEOCFG7_UVXSTRIDE_Pos            _U_(0)                                               /**< (LCDC_HEOCFG7) UV Horizontal Stride Position */
#define LCDC_HEOCFG7_UVXSTRIDE_Msk            (_U_(0xFFFFFFFF) << LCDC_HEOCFG7_UVXSTRIDE_Pos)      /**< (LCDC_HEOCFG7) UV Horizontal Stride Mask */
#define LCDC_HEOCFG7_UVXSTRIDE(value)         (LCDC_HEOCFG7_UVXSTRIDE_Msk & ((value) << LCDC_HEOCFG7_UVXSTRIDE_Pos))
#define LCDC_HEOCFG7_Msk                      _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG7) Register Mask  */


/* -------- LCDC_HEOCFG8 : (LCDC Offset: 0x3AC) (R/W 32) High-End Overlay Configuration Register 8 -------- */
#define LCDC_HEOCFG8_UVPSTRIDE_Pos            _U_(0)                                               /**< (LCDC_HEOCFG8) UV Pixel Stride Position */
#define LCDC_HEOCFG8_UVPSTRIDE_Msk            (_U_(0xFFFFFFFF) << LCDC_HEOCFG8_UVPSTRIDE_Pos)      /**< (LCDC_HEOCFG8) UV Pixel Stride Mask */
#define LCDC_HEOCFG8_UVPSTRIDE(value)         (LCDC_HEOCFG8_UVPSTRIDE_Msk & ((value) << LCDC_HEOCFG8_UVPSTRIDE_Pos))
#define LCDC_HEOCFG8_Msk                      _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG8) Register Mask  */


/* -------- LCDC_HEOCFG9 : (LCDC Offset: 0x3B0) (R/W 32) High-End Overlay Configuration Register 9 -------- */
#define LCDC_HEOCFG9_BDEF_Pos                 _U_(0)                                               /**< (LCDC_HEOCFG9) Blue Default Position */
#define LCDC_HEOCFG9_BDEF_Msk                 (_U_(0xFF) << LCDC_HEOCFG9_BDEF_Pos)                 /**< (LCDC_HEOCFG9) Blue Default Mask */
#define LCDC_HEOCFG9_BDEF(value)              (LCDC_HEOCFG9_BDEF_Msk & ((value) << LCDC_HEOCFG9_BDEF_Pos))
#define LCDC_HEOCFG9_GDEF_Pos                 _U_(8)                                               /**< (LCDC_HEOCFG9) Green Default Position */
#define LCDC_HEOCFG9_GDEF_Msk                 (_U_(0xFF) << LCDC_HEOCFG9_GDEF_Pos)                 /**< (LCDC_HEOCFG9) Green Default Mask */
#define LCDC_HEOCFG9_GDEF(value)              (LCDC_HEOCFG9_GDEF_Msk & ((value) << LCDC_HEOCFG9_GDEF_Pos))
#define LCDC_HEOCFG9_RDEF_Pos                 _U_(16)                                              /**< (LCDC_HEOCFG9) Red Default Position */
#define LCDC_HEOCFG9_RDEF_Msk                 (_U_(0xFF) << LCDC_HEOCFG9_RDEF_Pos)                 /**< (LCDC_HEOCFG9) Red Default Mask */
#define LCDC_HEOCFG9_RDEF(value)              (LCDC_HEOCFG9_RDEF_Msk & ((value) << LCDC_HEOCFG9_RDEF_Pos))
#define LCDC_HEOCFG9_Msk                      _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG9) Register Mask  */


/* -------- LCDC_HEOCFG10 : (LCDC Offset: 0x3B4) (R/W 32) High-End Overlay Configuration Register 10 -------- */
#define LCDC_HEOCFG10_BKEY_Pos                _U_(0)                                               /**< (LCDC_HEOCFG10) Blue Color Component Chroma Key Position */
#define LCDC_HEOCFG10_BKEY_Msk                (_U_(0xFF) << LCDC_HEOCFG10_BKEY_Pos)                /**< (LCDC_HEOCFG10) Blue Color Component Chroma Key Mask */
#define LCDC_HEOCFG10_BKEY(value)             (LCDC_HEOCFG10_BKEY_Msk & ((value) << LCDC_HEOCFG10_BKEY_Pos))
#define LCDC_HEOCFG10_GKEY_Pos                _U_(8)                                               /**< (LCDC_HEOCFG10) Green Color Component Chroma Key Position */
#define LCDC_HEOCFG10_GKEY_Msk                (_U_(0xFF) << LCDC_HEOCFG10_GKEY_Pos)                /**< (LCDC_HEOCFG10) Green Color Component Chroma Key Mask */
#define LCDC_HEOCFG10_GKEY(value)             (LCDC_HEOCFG10_GKEY_Msk & ((value) << LCDC_HEOCFG10_GKEY_Pos))
#define LCDC_HEOCFG10_RKEY_Pos                _U_(16)                                              /**< (LCDC_HEOCFG10) Red Color Component Chroma Key Position */
#define LCDC_HEOCFG10_RKEY_Msk                (_U_(0xFF) << LCDC_HEOCFG10_RKEY_Pos)                /**< (LCDC_HEOCFG10) Red Color Component Chroma Key Mask */
#define LCDC_HEOCFG10_RKEY(value)             (LCDC_HEOCFG10_RKEY_Msk & ((value) << LCDC_HEOCFG10_RKEY_Pos))
#define LCDC_HEOCFG10_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG10) Register Mask  */


/* -------- LCDC_HEOCFG11 : (LCDC Offset: 0x3B8) (R/W 32) High-End Overlay Configuration Register 11 -------- */
#define LCDC_HEOCFG11_BMASK_Pos               _U_(0)                                               /**< (LCDC_HEOCFG11) Blue Color Component Chroma Key Mask Position */
#define LCDC_HEOCFG11_BMASK_Msk               (_U_(0xFF) << LCDC_HEOCFG11_BMASK_Pos)               /**< (LCDC_HEOCFG11) Blue Color Component Chroma Key Mask Mask */
#define LCDC_HEOCFG11_BMASK(value)            (LCDC_HEOCFG11_BMASK_Msk & ((value) << LCDC_HEOCFG11_BMASK_Pos))
#define LCDC_HEOCFG11_GMASK_Pos               _U_(8)                                               /**< (LCDC_HEOCFG11) Green Color Component Chroma Key Mask Position */
#define LCDC_HEOCFG11_GMASK_Msk               (_U_(0xFF) << LCDC_HEOCFG11_GMASK_Pos)               /**< (LCDC_HEOCFG11) Green Color Component Chroma Key Mask Mask */
#define LCDC_HEOCFG11_GMASK(value)            (LCDC_HEOCFG11_GMASK_Msk & ((value) << LCDC_HEOCFG11_GMASK_Pos))
#define LCDC_HEOCFG11_RMASK_Pos               _U_(16)                                              /**< (LCDC_HEOCFG11) Red Color Component Chroma Key Mask Position */
#define LCDC_HEOCFG11_RMASK_Msk               (_U_(0xFF) << LCDC_HEOCFG11_RMASK_Pos)               /**< (LCDC_HEOCFG11) Red Color Component Chroma Key Mask Mask */
#define LCDC_HEOCFG11_RMASK(value)            (LCDC_HEOCFG11_RMASK_Msk & ((value) << LCDC_HEOCFG11_RMASK_Pos))
#define LCDC_HEOCFG11_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG11) Register Mask  */


/* -------- LCDC_HEOCFG12 : (LCDC Offset: 0x3BC) (R/W 32) High-End Overlay Configuration Register 12 -------- */
#define LCDC_HEOCFG12_CRKEY_Pos               _U_(0)                                               /**< (LCDC_HEOCFG12) Blender Chroma Key Enable Position */
#define LCDC_HEOCFG12_CRKEY_Msk               (_U_(0x1) << LCDC_HEOCFG12_CRKEY_Pos)                /**< (LCDC_HEOCFG12) Blender Chroma Key Enable Mask */
#define LCDC_HEOCFG12_CRKEY(value)            (LCDC_HEOCFG12_CRKEY_Msk & ((value) << LCDC_HEOCFG12_CRKEY_Pos))
#define LCDC_HEOCFG12_INV_Pos                 _U_(1)                                               /**< (LCDC_HEOCFG12) Blender Inverted Blender Output Enable Position */
#define LCDC_HEOCFG12_INV_Msk                 (_U_(0x1) << LCDC_HEOCFG12_INV_Pos)                  /**< (LCDC_HEOCFG12) Blender Inverted Blender Output Enable Mask */
#define LCDC_HEOCFG12_INV(value)              (LCDC_HEOCFG12_INV_Msk & ((value) << LCDC_HEOCFG12_INV_Pos))
#define LCDC_HEOCFG12_ITER2BL_Pos             _U_(2)                                               /**< (LCDC_HEOCFG12) Blender Iterated Color Enable Position */
#define LCDC_HEOCFG12_ITER2BL_Msk             (_U_(0x1) << LCDC_HEOCFG12_ITER2BL_Pos)              /**< (LCDC_HEOCFG12) Blender Iterated Color Enable Mask */
#define LCDC_HEOCFG12_ITER2BL(value)          (LCDC_HEOCFG12_ITER2BL_Msk & ((value) << LCDC_HEOCFG12_ITER2BL_Pos))
#define LCDC_HEOCFG12_ITER_Pos                _U_(3)                                               /**< (LCDC_HEOCFG12) Blender Use Iterated Color Position */
#define LCDC_HEOCFG12_ITER_Msk                (_U_(0x1) << LCDC_HEOCFG12_ITER_Pos)                 /**< (LCDC_HEOCFG12) Blender Use Iterated Color Mask */
#define LCDC_HEOCFG12_ITER(value)             (LCDC_HEOCFG12_ITER_Msk & ((value) << LCDC_HEOCFG12_ITER_Pos))
#define LCDC_HEOCFG12_REVALPHA_Pos            _U_(4)                                               /**< (LCDC_HEOCFG12) Blender Reverse Alpha Position */
#define LCDC_HEOCFG12_REVALPHA_Msk            (_U_(0x1) << LCDC_HEOCFG12_REVALPHA_Pos)             /**< (LCDC_HEOCFG12) Blender Reverse Alpha Mask */
#define LCDC_HEOCFG12_REVALPHA(value)         (LCDC_HEOCFG12_REVALPHA_Msk & ((value) << LCDC_HEOCFG12_REVALPHA_Pos))
#define LCDC_HEOCFG12_GAEN_Pos                _U_(5)                                               /**< (LCDC_HEOCFG12) Blender Global Alpha Enable Position */
#define LCDC_HEOCFG12_GAEN_Msk                (_U_(0x1) << LCDC_HEOCFG12_GAEN_Pos)                 /**< (LCDC_HEOCFG12) Blender Global Alpha Enable Mask */
#define LCDC_HEOCFG12_GAEN(value)             (LCDC_HEOCFG12_GAEN_Msk & ((value) << LCDC_HEOCFG12_GAEN_Pos))
#define LCDC_HEOCFG12_LAEN_Pos                _U_(6)                                               /**< (LCDC_HEOCFG12) Blender Local Alpha Enable Position */
#define LCDC_HEOCFG12_LAEN_Msk                (_U_(0x1) << LCDC_HEOCFG12_LAEN_Pos)                 /**< (LCDC_HEOCFG12) Blender Local Alpha Enable Mask */
#define LCDC_HEOCFG12_LAEN(value)             (LCDC_HEOCFG12_LAEN_Msk & ((value) << LCDC_HEOCFG12_LAEN_Pos))
#define LCDC_HEOCFG12_OVR_Pos                 _U_(7)                                               /**< (LCDC_HEOCFG12) Blender Overlay Layer Enable Position */
#define LCDC_HEOCFG12_OVR_Msk                 (_U_(0x1) << LCDC_HEOCFG12_OVR_Pos)                  /**< (LCDC_HEOCFG12) Blender Overlay Layer Enable Mask */
#define LCDC_HEOCFG12_OVR(value)              (LCDC_HEOCFG12_OVR_Msk & ((value) << LCDC_HEOCFG12_OVR_Pos))
#define LCDC_HEOCFG12_DMA_Pos                 _U_(8)                                               /**< (LCDC_HEOCFG12) Blender DMA Layer Enable Position */
#define LCDC_HEOCFG12_DMA_Msk                 (_U_(0x1) << LCDC_HEOCFG12_DMA_Pos)                  /**< (LCDC_HEOCFG12) Blender DMA Layer Enable Mask */
#define LCDC_HEOCFG12_DMA(value)              (LCDC_HEOCFG12_DMA_Msk & ((value) << LCDC_HEOCFG12_DMA_Pos))
#define LCDC_HEOCFG12_REP_Pos                 _U_(9)                                               /**< (LCDC_HEOCFG12) Use Replication logic to expand RGB color to 24 bits Position */
#define LCDC_HEOCFG12_REP_Msk                 (_U_(0x1) << LCDC_HEOCFG12_REP_Pos)                  /**< (LCDC_HEOCFG12) Use Replication logic to expand RGB color to 24 bits Mask */
#define LCDC_HEOCFG12_REP(value)              (LCDC_HEOCFG12_REP_Msk & ((value) << LCDC_HEOCFG12_REP_Pos))
#define LCDC_HEOCFG12_DSTKEY_Pos              _U_(10)                                              /**< (LCDC_HEOCFG12) Destination Chroma Keying Position */
#define LCDC_HEOCFG12_DSTKEY_Msk              (_U_(0x1) << LCDC_HEOCFG12_DSTKEY_Pos)               /**< (LCDC_HEOCFG12) Destination Chroma Keying Mask */
#define LCDC_HEOCFG12_DSTKEY(value)           (LCDC_HEOCFG12_DSTKEY_Msk & ((value) << LCDC_HEOCFG12_DSTKEY_Pos))
#define LCDC_HEOCFG12_VIDPRI_Pos              _U_(12)                                              /**< (LCDC_HEOCFG12) Video Priority Position */
#define LCDC_HEOCFG12_VIDPRI_Msk              (_U_(0x1) << LCDC_HEOCFG12_VIDPRI_Pos)               /**< (LCDC_HEOCFG12) Video Priority Mask */
#define LCDC_HEOCFG12_VIDPRI(value)           (LCDC_HEOCFG12_VIDPRI_Msk & ((value) << LCDC_HEOCFG12_VIDPRI_Pos))
#define LCDC_HEOCFG12_GA_Pos                  _U_(16)                                              /**< (LCDC_HEOCFG12) Blender Global Alpha Position */
#define LCDC_HEOCFG12_GA_Msk                  (_U_(0xFF) << LCDC_HEOCFG12_GA_Pos)                  /**< (LCDC_HEOCFG12) Blender Global Alpha Mask */
#define LCDC_HEOCFG12_GA(value)               (LCDC_HEOCFG12_GA_Msk & ((value) << LCDC_HEOCFG12_GA_Pos))
#define LCDC_HEOCFG12_Msk                     _U_(0x00FF17FF)                                      /**< (LCDC_HEOCFG12) Register Mask  */


/* -------- LCDC_HEOCFG13 : (LCDC Offset: 0x3C0) (R/W 32) High-End Overlay Configuration Register 13 -------- */
#define LCDC_HEOCFG13_XFACTOR_Pos             _U_(0)                                               /**< (LCDC_HEOCFG13) Horizontal Scaling Factor Position */
#define LCDC_HEOCFG13_XFACTOR_Msk             (_U_(0x3FFF) << LCDC_HEOCFG13_XFACTOR_Pos)           /**< (LCDC_HEOCFG13) Horizontal Scaling Factor Mask */
#define LCDC_HEOCFG13_XFACTOR(value)          (LCDC_HEOCFG13_XFACTOR_Msk & ((value) << LCDC_HEOCFG13_XFACTOR_Pos))
#define LCDC_HEOCFG13_YFACTOR_Pos             _U_(16)                                              /**< (LCDC_HEOCFG13) Vertical Scaling Factor Position */
#define LCDC_HEOCFG13_YFACTOR_Msk             (_U_(0x3FFF) << LCDC_HEOCFG13_YFACTOR_Pos)           /**< (LCDC_HEOCFG13) Vertical Scaling Factor Mask */
#define LCDC_HEOCFG13_YFACTOR(value)          (LCDC_HEOCFG13_YFACTOR_Msk & ((value) << LCDC_HEOCFG13_YFACTOR_Pos))
#define LCDC_HEOCFG13_SCALEN_Pos              _U_(31)                                              /**< (LCDC_HEOCFG13) Hardware Scaler Enable Position */
#define LCDC_HEOCFG13_SCALEN_Msk              (_U_(0x1) << LCDC_HEOCFG13_SCALEN_Pos)               /**< (LCDC_HEOCFG13) Hardware Scaler Enable Mask */
#define LCDC_HEOCFG13_SCALEN(value)           (LCDC_HEOCFG13_SCALEN_Msk & ((value) << LCDC_HEOCFG13_SCALEN_Pos))
#define LCDC_HEOCFG13_Msk                     _U_(0xBFFF3FFF)                                      /**< (LCDC_HEOCFG13) Register Mask  */


/* -------- LCDC_HEOCFG14 : (LCDC Offset: 0x3C4) (R/W 32) High-End Overlay Configuration Register 14 -------- */
#define LCDC_HEOCFG14_CSCRY_Pos               _U_(0)                                               /**< (LCDC_HEOCFG14) Color Space Conversion Y coefficient for Red Component 1:2:7 format Position */
#define LCDC_HEOCFG14_CSCRY_Msk               (_U_(0x3FF) << LCDC_HEOCFG14_CSCRY_Pos)              /**< (LCDC_HEOCFG14) Color Space Conversion Y coefficient for Red Component 1:2:7 format Mask */
#define LCDC_HEOCFG14_CSCRY(value)            (LCDC_HEOCFG14_CSCRY_Msk & ((value) << LCDC_HEOCFG14_CSCRY_Pos))
#define LCDC_HEOCFG14_CSCRU_Pos               _U_(10)                                              /**< (LCDC_HEOCFG14) Color Space Conversion U coefficient for Red Component 1:2:7 format Position */
#define LCDC_HEOCFG14_CSCRU_Msk               (_U_(0x3FF) << LCDC_HEOCFG14_CSCRU_Pos)              /**< (LCDC_HEOCFG14) Color Space Conversion U coefficient for Red Component 1:2:7 format Mask */
#define LCDC_HEOCFG14_CSCRU(value)            (LCDC_HEOCFG14_CSCRU_Msk & ((value) << LCDC_HEOCFG14_CSCRU_Pos))
#define LCDC_HEOCFG14_CSCRV_Pos               _U_(20)                                              /**< (LCDC_HEOCFG14) Color Space Conversion V coefficient for Red Component 1:2:7 format Position */
#define LCDC_HEOCFG14_CSCRV_Msk               (_U_(0x3FF) << LCDC_HEOCFG14_CSCRV_Pos)              /**< (LCDC_HEOCFG14) Color Space Conversion V coefficient for Red Component 1:2:7 format Mask */
#define LCDC_HEOCFG14_CSCRV(value)            (LCDC_HEOCFG14_CSCRV_Msk & ((value) << LCDC_HEOCFG14_CSCRV_Pos))
#define LCDC_HEOCFG14_CSCYOFF_Pos             _U_(30)                                              /**< (LCDC_HEOCFG14) Color Space Conversion Offset Position */
#define LCDC_HEOCFG14_CSCYOFF_Msk             (_U_(0x1) << LCDC_HEOCFG14_CSCYOFF_Pos)              /**< (LCDC_HEOCFG14) Color Space Conversion Offset Mask */
#define LCDC_HEOCFG14_CSCYOFF(value)          (LCDC_HEOCFG14_CSCYOFF_Msk & ((value) << LCDC_HEOCFG14_CSCYOFF_Pos))
#define LCDC_HEOCFG14_Msk                     _U_(0x7FFFFFFF)                                      /**< (LCDC_HEOCFG14) Register Mask  */


/* -------- LCDC_HEOCFG15 : (LCDC Offset: 0x3C8) (R/W 32) High-End Overlay Configuration Register 15 -------- */
#define LCDC_HEOCFG15_CSCGY_Pos               _U_(0)                                               /**< (LCDC_HEOCFG15) Color Space Conversion Y coefficient for Green Component 1:2:7 format Position */
#define LCDC_HEOCFG15_CSCGY_Msk               (_U_(0x3FF) << LCDC_HEOCFG15_CSCGY_Pos)              /**< (LCDC_HEOCFG15) Color Space Conversion Y coefficient for Green Component 1:2:7 format Mask */
#define LCDC_HEOCFG15_CSCGY(value)            (LCDC_HEOCFG15_CSCGY_Msk & ((value) << LCDC_HEOCFG15_CSCGY_Pos))
#define LCDC_HEOCFG15_CSCGU_Pos               _U_(10)                                              /**< (LCDC_HEOCFG15) Color Space Conversion U coefficient for Green Component 1:2:7 format Position */
#define LCDC_HEOCFG15_CSCGU_Msk               (_U_(0x3FF) << LCDC_HEOCFG15_CSCGU_Pos)              /**< (LCDC_HEOCFG15) Color Space Conversion U coefficient for Green Component 1:2:7 format Mask */
#define LCDC_HEOCFG15_CSCGU(value)            (LCDC_HEOCFG15_CSCGU_Msk & ((value) << LCDC_HEOCFG15_CSCGU_Pos))
#define LCDC_HEOCFG15_CSCGV_Pos               _U_(20)                                              /**< (LCDC_HEOCFG15) Color Space Conversion V coefficient for Green Component 1:2:7 format Position */
#define LCDC_HEOCFG15_CSCGV_Msk               (_U_(0x3FF) << LCDC_HEOCFG15_CSCGV_Pos)              /**< (LCDC_HEOCFG15) Color Space Conversion V coefficient for Green Component 1:2:7 format Mask */
#define LCDC_HEOCFG15_CSCGV(value)            (LCDC_HEOCFG15_CSCGV_Msk & ((value) << LCDC_HEOCFG15_CSCGV_Pos))
#define LCDC_HEOCFG15_CSCUOFF_Pos             _U_(30)                                              /**< (LCDC_HEOCFG15) Color Space Conversion Offset Position */
#define LCDC_HEOCFG15_CSCUOFF_Msk             (_U_(0x1) << LCDC_HEOCFG15_CSCUOFF_Pos)              /**< (LCDC_HEOCFG15) Color Space Conversion Offset Mask */
#define LCDC_HEOCFG15_CSCUOFF(value)          (LCDC_HEOCFG15_CSCUOFF_Msk & ((value) << LCDC_HEOCFG15_CSCUOFF_Pos))
#define LCDC_HEOCFG15_Msk                     _U_(0x7FFFFFFF)                                      /**< (LCDC_HEOCFG15) Register Mask  */


/* -------- LCDC_HEOCFG16 : (LCDC Offset: 0x3CC) (R/W 32) High-End Overlay Configuration Register 16 -------- */
#define LCDC_HEOCFG16_CSCBY_Pos               _U_(0)                                               /**< (LCDC_HEOCFG16) Color Space Conversion Y coefficient for Blue Component 1:2:7 format Position */
#define LCDC_HEOCFG16_CSCBY_Msk               (_U_(0x3FF) << LCDC_HEOCFG16_CSCBY_Pos)              /**< (LCDC_HEOCFG16) Color Space Conversion Y coefficient for Blue Component 1:2:7 format Mask */
#define LCDC_HEOCFG16_CSCBY(value)            (LCDC_HEOCFG16_CSCBY_Msk & ((value) << LCDC_HEOCFG16_CSCBY_Pos))
#define LCDC_HEOCFG16_CSCBU_Pos               _U_(10)                                              /**< (LCDC_HEOCFG16) Color Space Conversion U coefficient for Blue Component 1:2:7 format Position */
#define LCDC_HEOCFG16_CSCBU_Msk               (_U_(0x3FF) << LCDC_HEOCFG16_CSCBU_Pos)              /**< (LCDC_HEOCFG16) Color Space Conversion U coefficient for Blue Component 1:2:7 format Mask */
#define LCDC_HEOCFG16_CSCBU(value)            (LCDC_HEOCFG16_CSCBU_Msk & ((value) << LCDC_HEOCFG16_CSCBU_Pos))
#define LCDC_HEOCFG16_CSCBV_Pos               _U_(20)                                              /**< (LCDC_HEOCFG16) Color Space Conversion V coefficient for Blue Component 1:2:7 format Position */
#define LCDC_HEOCFG16_CSCBV_Msk               (_U_(0x3FF) << LCDC_HEOCFG16_CSCBV_Pos)              /**< (LCDC_HEOCFG16) Color Space Conversion V coefficient for Blue Component 1:2:7 format Mask */
#define LCDC_HEOCFG16_CSCBV(value)            (LCDC_HEOCFG16_CSCBV_Msk & ((value) << LCDC_HEOCFG16_CSCBV_Pos))
#define LCDC_HEOCFG16_CSCVOFF_Pos             _U_(30)                                              /**< (LCDC_HEOCFG16) Color Space Conversion Offset Position */
#define LCDC_HEOCFG16_CSCVOFF_Msk             (_U_(0x1) << LCDC_HEOCFG16_CSCVOFF_Pos)              /**< (LCDC_HEOCFG16) Color Space Conversion Offset Mask */
#define LCDC_HEOCFG16_CSCVOFF(value)          (LCDC_HEOCFG16_CSCVOFF_Msk & ((value) << LCDC_HEOCFG16_CSCVOFF_Pos))
#define LCDC_HEOCFG16_Msk                     _U_(0x7FFFFFFF)                                      /**< (LCDC_HEOCFG16) Register Mask  */


/* -------- LCDC_HEOCFG17 : (LCDC Offset: 0x3D0) (R/W 32) High-End Overlay Configuration Register 17 -------- */
#define LCDC_HEOCFG17_XPHI0COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 0 Position */
#define LCDC_HEOCFG17_XPHI0COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG17_XPHI0COEFF0_Pos)         /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 0 Mask */
#define LCDC_HEOCFG17_XPHI0COEFF0(value)      (LCDC_HEOCFG17_XPHI0COEFF0_Msk & ((value) << LCDC_HEOCFG17_XPHI0COEFF0_Pos))
#define LCDC_HEOCFG17_XPHI0COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 1 Position */
#define LCDC_HEOCFG17_XPHI0COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG17_XPHI0COEFF1_Pos)         /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 1 Mask */
#define LCDC_HEOCFG17_XPHI0COEFF1(value)      (LCDC_HEOCFG17_XPHI0COEFF1_Msk & ((value) << LCDC_HEOCFG17_XPHI0COEFF1_Pos))
#define LCDC_HEOCFG17_XPHI0COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 2 Position */
#define LCDC_HEOCFG17_XPHI0COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG17_XPHI0COEFF2_Pos)         /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 2 Mask */
#define LCDC_HEOCFG17_XPHI0COEFF2(value)      (LCDC_HEOCFG17_XPHI0COEFF2_Msk & ((value) << LCDC_HEOCFG17_XPHI0COEFF2_Pos))
#define LCDC_HEOCFG17_XPHI0COEFF3_Pos         _U_(24)                                              /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 3 Position */
#define LCDC_HEOCFG17_XPHI0COEFF3_Msk         (_U_(0xFF) << LCDC_HEOCFG17_XPHI0COEFF3_Pos)         /**< (LCDC_HEOCFG17) Horizontal Coefficient for phase 0 tap 3 Mask */
#define LCDC_HEOCFG17_XPHI0COEFF3(value)      (LCDC_HEOCFG17_XPHI0COEFF3_Msk & ((value) << LCDC_HEOCFG17_XPHI0COEFF3_Pos))
#define LCDC_HEOCFG17_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG17) Register Mask  */


/* -------- LCDC_HEOCFG18 : (LCDC Offset: 0x3D4) (R/W 32) High-End Overlay Configuration Register 18 -------- */
#define LCDC_HEOCFG18_XPHI0COEFF4_Pos         _U_(0)                                               /**< (LCDC_HEOCFG18) Horizontal Coefficient for phase 0 tap 4 Position */
#define LCDC_HEOCFG18_XPHI0COEFF4_Msk         (_U_(0xFF) << LCDC_HEOCFG18_XPHI0COEFF4_Pos)         /**< (LCDC_HEOCFG18) Horizontal Coefficient for phase 0 tap 4 Mask */
#define LCDC_HEOCFG18_XPHI0COEFF4(value)      (LCDC_HEOCFG18_XPHI0COEFF4_Msk & ((value) << LCDC_HEOCFG18_XPHI0COEFF4_Pos))
#define LCDC_HEOCFG18_Msk                     _U_(0x000000FF)                                      /**< (LCDC_HEOCFG18) Register Mask  */


/* -------- LCDC_HEOCFG19 : (LCDC Offset: 0x3D8) (R/W 32) High-End Overlay Configuration Register 19 -------- */
#define LCDC_HEOCFG19_XPHI1COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 0 Position */
#define LCDC_HEOCFG19_XPHI1COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG19_XPHI1COEFF0_Pos)         /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 0 Mask */
#define LCDC_HEOCFG19_XPHI1COEFF0(value)      (LCDC_HEOCFG19_XPHI1COEFF0_Msk & ((value) << LCDC_HEOCFG19_XPHI1COEFF0_Pos))
#define LCDC_HEOCFG19_XPHI1COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 1 Position */
#define LCDC_HEOCFG19_XPHI1COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG19_XPHI1COEFF1_Pos)         /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 1 Mask */
#define LCDC_HEOCFG19_XPHI1COEFF1(value)      (LCDC_HEOCFG19_XPHI1COEFF1_Msk & ((value) << LCDC_HEOCFG19_XPHI1COEFF1_Pos))
#define LCDC_HEOCFG19_XPHI1COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 2 Position */
#define LCDC_HEOCFG19_XPHI1COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG19_XPHI1COEFF2_Pos)         /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 2 Mask */
#define LCDC_HEOCFG19_XPHI1COEFF2(value)      (LCDC_HEOCFG19_XPHI1COEFF2_Msk & ((value) << LCDC_HEOCFG19_XPHI1COEFF2_Pos))
#define LCDC_HEOCFG19_XPHI1COEFF3_Pos         _U_(24)                                              /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 3 Position */
#define LCDC_HEOCFG19_XPHI1COEFF3_Msk         (_U_(0xFF) << LCDC_HEOCFG19_XPHI1COEFF3_Pos)         /**< (LCDC_HEOCFG19) Horizontal Coefficient for phase 1 tap 3 Mask */
#define LCDC_HEOCFG19_XPHI1COEFF3(value)      (LCDC_HEOCFG19_XPHI1COEFF3_Msk & ((value) << LCDC_HEOCFG19_XPHI1COEFF3_Pos))
#define LCDC_HEOCFG19_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG19) Register Mask  */


/* -------- LCDC_HEOCFG20 : (LCDC Offset: 0x3DC) (R/W 32) High-End Overlay Configuration Register 20 -------- */
#define LCDC_HEOCFG20_XPHI1COEFF4_Pos         _U_(0)                                               /**< (LCDC_HEOCFG20) Horizontal Coefficient for phase 1 tap 4 Position */
#define LCDC_HEOCFG20_XPHI1COEFF4_Msk         (_U_(0xFF) << LCDC_HEOCFG20_XPHI1COEFF4_Pos)         /**< (LCDC_HEOCFG20) Horizontal Coefficient for phase 1 tap 4 Mask */
#define LCDC_HEOCFG20_XPHI1COEFF4(value)      (LCDC_HEOCFG20_XPHI1COEFF4_Msk & ((value) << LCDC_HEOCFG20_XPHI1COEFF4_Pos))
#define LCDC_HEOCFG20_Msk                     _U_(0x000000FF)                                      /**< (LCDC_HEOCFG20) Register Mask  */


/* -------- LCDC_HEOCFG21 : (LCDC Offset: 0x3E0) (R/W 32) High-End Overlay Configuration Register 21 -------- */
#define LCDC_HEOCFG21_XPHI2COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 0 Position */
#define LCDC_HEOCFG21_XPHI2COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG21_XPHI2COEFF0_Pos)         /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 0 Mask */
#define LCDC_HEOCFG21_XPHI2COEFF0(value)      (LCDC_HEOCFG21_XPHI2COEFF0_Msk & ((value) << LCDC_HEOCFG21_XPHI2COEFF0_Pos))
#define LCDC_HEOCFG21_XPHI2COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 1 Position */
#define LCDC_HEOCFG21_XPHI2COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG21_XPHI2COEFF1_Pos)         /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 1 Mask */
#define LCDC_HEOCFG21_XPHI2COEFF1(value)      (LCDC_HEOCFG21_XPHI2COEFF1_Msk & ((value) << LCDC_HEOCFG21_XPHI2COEFF1_Pos))
#define LCDC_HEOCFG21_XPHI2COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 2 Position */
#define LCDC_HEOCFG21_XPHI2COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG21_XPHI2COEFF2_Pos)         /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 2 Mask */
#define LCDC_HEOCFG21_XPHI2COEFF2(value)      (LCDC_HEOCFG21_XPHI2COEFF2_Msk & ((value) << LCDC_HEOCFG21_XPHI2COEFF2_Pos))
#define LCDC_HEOCFG21_XPHI2COEFF3_Pos         _U_(24)                                              /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 3 Position */
#define LCDC_HEOCFG21_XPHI2COEFF3_Msk         (_U_(0xFF) << LCDC_HEOCFG21_XPHI2COEFF3_Pos)         /**< (LCDC_HEOCFG21) Horizontal Coefficient for phase 2 tap 3 Mask */
#define LCDC_HEOCFG21_XPHI2COEFF3(value)      (LCDC_HEOCFG21_XPHI2COEFF3_Msk & ((value) << LCDC_HEOCFG21_XPHI2COEFF3_Pos))
#define LCDC_HEOCFG21_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG21) Register Mask  */


/* -------- LCDC_HEOCFG22 : (LCDC Offset: 0x3E4) (R/W 32) High-End Overlay Configuration Register 22 -------- */
#define LCDC_HEOCFG22_XPHI2COEFF4_Pos         _U_(0)                                               /**< (LCDC_HEOCFG22) Horizontal Coefficient for phase 2 tap 4 Position */
#define LCDC_HEOCFG22_XPHI2COEFF4_Msk         (_U_(0xFF) << LCDC_HEOCFG22_XPHI2COEFF4_Pos)         /**< (LCDC_HEOCFG22) Horizontal Coefficient for phase 2 tap 4 Mask */
#define LCDC_HEOCFG22_XPHI2COEFF4(value)      (LCDC_HEOCFG22_XPHI2COEFF4_Msk & ((value) << LCDC_HEOCFG22_XPHI2COEFF4_Pos))
#define LCDC_HEOCFG22_Msk                     _U_(0x000000FF)                                      /**< (LCDC_HEOCFG22) Register Mask  */


/* -------- LCDC_HEOCFG23 : (LCDC Offset: 0x3E8) (R/W 32) High-End Overlay Configuration Register 23 -------- */
#define LCDC_HEOCFG23_XPHI3COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 0 Position */
#define LCDC_HEOCFG23_XPHI3COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG23_XPHI3COEFF0_Pos)         /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 0 Mask */
#define LCDC_HEOCFG23_XPHI3COEFF0(value)      (LCDC_HEOCFG23_XPHI3COEFF0_Msk & ((value) << LCDC_HEOCFG23_XPHI3COEFF0_Pos))
#define LCDC_HEOCFG23_XPHI3COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 1 Position */
#define LCDC_HEOCFG23_XPHI3COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG23_XPHI3COEFF1_Pos)         /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 1 Mask */
#define LCDC_HEOCFG23_XPHI3COEFF1(value)      (LCDC_HEOCFG23_XPHI3COEFF1_Msk & ((value) << LCDC_HEOCFG23_XPHI3COEFF1_Pos))
#define LCDC_HEOCFG23_XPHI3COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 2 Position */
#define LCDC_HEOCFG23_XPHI3COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG23_XPHI3COEFF2_Pos)         /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 2 Mask */
#define LCDC_HEOCFG23_XPHI3COEFF2(value)      (LCDC_HEOCFG23_XPHI3COEFF2_Msk & ((value) << LCDC_HEOCFG23_XPHI3COEFF2_Pos))
#define LCDC_HEOCFG23_XPHI3COEFF3_Pos         _U_(24)                                              /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 3 Position */
#define LCDC_HEOCFG23_XPHI3COEFF3_Msk         (_U_(0xFF) << LCDC_HEOCFG23_XPHI3COEFF3_Pos)         /**< (LCDC_HEOCFG23) Horizontal Coefficient for phase 3 tap 3 Mask */
#define LCDC_HEOCFG23_XPHI3COEFF3(value)      (LCDC_HEOCFG23_XPHI3COEFF3_Msk & ((value) << LCDC_HEOCFG23_XPHI3COEFF3_Pos))
#define LCDC_HEOCFG23_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG23) Register Mask  */


/* -------- LCDC_HEOCFG24 : (LCDC Offset: 0x3EC) (R/W 32) High-End Overlay Configuration Register 24 -------- */
#define LCDC_HEOCFG24_XPHI3COEFF4_Pos         _U_(0)                                               /**< (LCDC_HEOCFG24) Horizontal Coefficient for phase 3 tap 4 Position */
#define LCDC_HEOCFG24_XPHI3COEFF4_Msk         (_U_(0xFF) << LCDC_HEOCFG24_XPHI3COEFF4_Pos)         /**< (LCDC_HEOCFG24) Horizontal Coefficient for phase 3 tap 4 Mask */
#define LCDC_HEOCFG24_XPHI3COEFF4(value)      (LCDC_HEOCFG24_XPHI3COEFF4_Msk & ((value) << LCDC_HEOCFG24_XPHI3COEFF4_Pos))
#define LCDC_HEOCFG24_Msk                     _U_(0x000000FF)                                      /**< (LCDC_HEOCFG24) Register Mask  */


/* -------- LCDC_HEOCFG25 : (LCDC Offset: 0x3F0) (R/W 32) High-End Overlay Configuration Register 25 -------- */
#define LCDC_HEOCFG25_XPHI4COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 0 Position */
#define LCDC_HEOCFG25_XPHI4COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG25_XPHI4COEFF0_Pos)         /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 0 Mask */
#define LCDC_HEOCFG25_XPHI4COEFF0(value)      (LCDC_HEOCFG25_XPHI4COEFF0_Msk & ((value) << LCDC_HEOCFG25_XPHI4COEFF0_Pos))
#define LCDC_HEOCFG25_XPHI4COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 1 Position */
#define LCDC_HEOCFG25_XPHI4COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG25_XPHI4COEFF1_Pos)         /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 1 Mask */
#define LCDC_HEOCFG25_XPHI4COEFF1(value)      (LCDC_HEOCFG25_XPHI4COEFF1_Msk & ((value) << LCDC_HEOCFG25_XPHI4COEFF1_Pos))
#define LCDC_HEOCFG25_XPHI4COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 2 Position */
#define LCDC_HEOCFG25_XPHI4COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG25_XPHI4COEFF2_Pos)         /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 2 Mask */
#define LCDC_HEOCFG25_XPHI4COEFF2(value)      (LCDC_HEOCFG25_XPHI4COEFF2_Msk & ((value) << LCDC_HEOCFG25_XPHI4COEFF2_Pos))
#define LCDC_HEOCFG25_XPHI4COEFF3_Pos         _U_(24)                                              /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 3 Position */
#define LCDC_HEOCFG25_XPHI4COEFF3_Msk         (_U_(0xFF) << LCDC_HEOCFG25_XPHI4COEFF3_Pos)         /**< (LCDC_HEOCFG25) Horizontal Coefficient for phase 4 tap 3 Mask */
#define LCDC_HEOCFG25_XPHI4COEFF3(value)      (LCDC_HEOCFG25_XPHI4COEFF3_Msk & ((value) << LCDC_HEOCFG25_XPHI4COEFF3_Pos))
#define LCDC_HEOCFG25_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG25) Register Mask  */


/* -------- LCDC_HEOCFG26 : (LCDC Offset: 0x3F4) (R/W 32) High-End Overlay Configuration Register 26 -------- */
#define LCDC_HEOCFG26_XPHI4COEFF4_Pos         _U_(0)                                               /**< (LCDC_HEOCFG26) Horizontal Coefficient for phase 4 tap 4 Position */
#define LCDC_HEOCFG26_XPHI4COEFF4_Msk         (_U_(0xFF) << LCDC_HEOCFG26_XPHI4COEFF4_Pos)         /**< (LCDC_HEOCFG26) Horizontal Coefficient for phase 4 tap 4 Mask */
#define LCDC_HEOCFG26_XPHI4COEFF4(value)      (LCDC_HEOCFG26_XPHI4COEFF4_Msk & ((value) << LCDC_HEOCFG26_XPHI4COEFF4_Pos))
#define LCDC_HEOCFG26_Msk                     _U_(0x000000FF)                                      /**< (LCDC_HEOCFG26) Register Mask  */


/* -------- LCDC_HEOCFG27 : (LCDC Offset: 0x3F8) (R/W 32) High-End Overlay Configuration Register 27 -------- */
#define LCDC_HEOCFG27_XPHI5COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 0 Position */
#define LCDC_HEOCFG27_XPHI5COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG27_XPHI5COEFF0_Pos)         /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 0 Mask */
#define LCDC_HEOCFG27_XPHI5COEFF0(value)      (LCDC_HEOCFG27_XPHI5COEFF0_Msk & ((value) << LCDC_HEOCFG27_XPHI5COEFF0_Pos))
#define LCDC_HEOCFG27_XPHI5COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 1 Position */
#define LCDC_HEOCFG27_XPHI5COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG27_XPHI5COEFF1_Pos)         /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 1 Mask */
#define LCDC_HEOCFG27_XPHI5COEFF1(value)      (LCDC_HEOCFG27_XPHI5COEFF1_Msk & ((value) << LCDC_HEOCFG27_XPHI5COEFF1_Pos))
#define LCDC_HEOCFG27_XPHI5COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 2 Position */
#define LCDC_HEOCFG27_XPHI5COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG27_XPHI5COEFF2_Pos)         /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 2 Mask */
#define LCDC_HEOCFG27_XPHI5COEFF2(value)      (LCDC_HEOCFG27_XPHI5COEFF2_Msk & ((value) << LCDC_HEOCFG27_XPHI5COEFF2_Pos))
#define LCDC_HEOCFG27_XPHI5COEFF3_Pos         _U_(24)                                              /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 3 Position */
#define LCDC_HEOCFG27_XPHI5COEFF3_Msk         (_U_(0xFF) << LCDC_HEOCFG27_XPHI5COEFF3_Pos)         /**< (LCDC_HEOCFG27) Horizontal Coefficient for phase 5 tap 3 Mask */
#define LCDC_HEOCFG27_XPHI5COEFF3(value)      (LCDC_HEOCFG27_XPHI5COEFF3_Msk & ((value) << LCDC_HEOCFG27_XPHI5COEFF3_Pos))
#define LCDC_HEOCFG27_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG27) Register Mask  */


/* -------- LCDC_HEOCFG28 : (LCDC Offset: 0x3FC) (R/W 32) High-End Overlay Configuration Register 28 -------- */
#define LCDC_HEOCFG28_XPHI5COEFF4_Pos         _U_(0)                                               /**< (LCDC_HEOCFG28) Horizontal Coefficient for phase 5 tap 4 Position */
#define LCDC_HEOCFG28_XPHI5COEFF4_Msk         (_U_(0xFF) << LCDC_HEOCFG28_XPHI5COEFF4_Pos)         /**< (LCDC_HEOCFG28) Horizontal Coefficient for phase 5 tap 4 Mask */
#define LCDC_HEOCFG28_XPHI5COEFF4(value)      (LCDC_HEOCFG28_XPHI5COEFF4_Msk & ((value) << LCDC_HEOCFG28_XPHI5COEFF4_Pos))
#define LCDC_HEOCFG28_Msk                     _U_(0x000000FF)                                      /**< (LCDC_HEOCFG28) Register Mask  */


/* -------- LCDC_HEOCFG29 : (LCDC Offset: 0x400) (R/W 32) High-End Overlay Configuration Register 29 -------- */
#define LCDC_HEOCFG29_XPHI6COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 0 Position */
#define LCDC_HEOCFG29_XPHI6COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG29_XPHI6COEFF0_Pos)         /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 0 Mask */
#define LCDC_HEOCFG29_XPHI6COEFF0(value)      (LCDC_HEOCFG29_XPHI6COEFF0_Msk & ((value) << LCDC_HEOCFG29_XPHI6COEFF0_Pos))
#define LCDC_HEOCFG29_XPHI6COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 1 Position */
#define LCDC_HEOCFG29_XPHI6COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG29_XPHI6COEFF1_Pos)         /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 1 Mask */
#define LCDC_HEOCFG29_XPHI6COEFF1(value)      (LCDC_HEOCFG29_XPHI6COEFF1_Msk & ((value) << LCDC_HEOCFG29_XPHI6COEFF1_Pos))
#define LCDC_HEOCFG29_XPHI6COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 2 Position */
#define LCDC_HEOCFG29_XPHI6COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG29_XPHI6COEFF2_Pos)         /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 2 Mask */
#define LCDC_HEOCFG29_XPHI6COEFF2(value)      (LCDC_HEOCFG29_XPHI6COEFF2_Msk & ((value) << LCDC_HEOCFG29_XPHI6COEFF2_Pos))
#define LCDC_HEOCFG29_XPHI6COEFF3_Pos         _U_(24)                                              /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 3 Position */
#define LCDC_HEOCFG29_XPHI6COEFF3_Msk         (_U_(0xFF) << LCDC_HEOCFG29_XPHI6COEFF3_Pos)         /**< (LCDC_HEOCFG29) Horizontal Coefficient for phase 6 tap 3 Mask */
#define LCDC_HEOCFG29_XPHI6COEFF3(value)      (LCDC_HEOCFG29_XPHI6COEFF3_Msk & ((value) << LCDC_HEOCFG29_XPHI6COEFF3_Pos))
#define LCDC_HEOCFG29_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG29) Register Mask  */


/* -------- LCDC_HEOCFG30 : (LCDC Offset: 0x404) (R/W 32) High-End Overlay Configuration Register 30 -------- */
#define LCDC_HEOCFG30_XPHI6COEFF4_Pos         _U_(0)                                               /**< (LCDC_HEOCFG30) Horizontal Coefficient for phase 6 tap 4 Position */
#define LCDC_HEOCFG30_XPHI6COEFF4_Msk         (_U_(0xFF) << LCDC_HEOCFG30_XPHI6COEFF4_Pos)         /**< (LCDC_HEOCFG30) Horizontal Coefficient for phase 6 tap 4 Mask */
#define LCDC_HEOCFG30_XPHI6COEFF4(value)      (LCDC_HEOCFG30_XPHI6COEFF4_Msk & ((value) << LCDC_HEOCFG30_XPHI6COEFF4_Pos))
#define LCDC_HEOCFG30_Msk                     _U_(0x000000FF)                                      /**< (LCDC_HEOCFG30) Register Mask  */


/* -------- LCDC_HEOCFG31 : (LCDC Offset: 0x408) (R/W 32) High-End Overlay Configuration Register 31 -------- */
#define LCDC_HEOCFG31_XPHI7COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 0 Position */
#define LCDC_HEOCFG31_XPHI7COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG31_XPHI7COEFF0_Pos)         /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 0 Mask */
#define LCDC_HEOCFG31_XPHI7COEFF0(value)      (LCDC_HEOCFG31_XPHI7COEFF0_Msk & ((value) << LCDC_HEOCFG31_XPHI7COEFF0_Pos))
#define LCDC_HEOCFG31_XPHI7COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 1 Position */
#define LCDC_HEOCFG31_XPHI7COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG31_XPHI7COEFF1_Pos)         /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 1 Mask */
#define LCDC_HEOCFG31_XPHI7COEFF1(value)      (LCDC_HEOCFG31_XPHI7COEFF1_Msk & ((value) << LCDC_HEOCFG31_XPHI7COEFF1_Pos))
#define LCDC_HEOCFG31_XPHI7COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 2 Position */
#define LCDC_HEOCFG31_XPHI7COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG31_XPHI7COEFF2_Pos)         /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 2 Mask */
#define LCDC_HEOCFG31_XPHI7COEFF2(value)      (LCDC_HEOCFG31_XPHI7COEFF2_Msk & ((value) << LCDC_HEOCFG31_XPHI7COEFF2_Pos))
#define LCDC_HEOCFG31_XPHI7COEFF3_Pos         _U_(24)                                              /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 3 Position */
#define LCDC_HEOCFG31_XPHI7COEFF3_Msk         (_U_(0xFF) << LCDC_HEOCFG31_XPHI7COEFF3_Pos)         /**< (LCDC_HEOCFG31) Horizontal Coefficient for phase 7 tap 3 Mask */
#define LCDC_HEOCFG31_XPHI7COEFF3(value)      (LCDC_HEOCFG31_XPHI7COEFF3_Msk & ((value) << LCDC_HEOCFG31_XPHI7COEFF3_Pos))
#define LCDC_HEOCFG31_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCFG31) Register Mask  */


/* -------- LCDC_HEOCFG32 : (LCDC Offset: 0x40C) (R/W 32) High-End Overlay Configuration Register 32 -------- */
#define LCDC_HEOCFG32_XPHI7COEFF4_Pos         _U_(0)                                               /**< (LCDC_HEOCFG32) Horizontal Coefficient for phase 7 tap 4 Position */
#define LCDC_HEOCFG32_XPHI7COEFF4_Msk         (_U_(0xFF) << LCDC_HEOCFG32_XPHI7COEFF4_Pos)         /**< (LCDC_HEOCFG32) Horizontal Coefficient for phase 7 tap 4 Mask */
#define LCDC_HEOCFG32_XPHI7COEFF4(value)      (LCDC_HEOCFG32_XPHI7COEFF4_Msk & ((value) << LCDC_HEOCFG32_XPHI7COEFF4_Pos))
#define LCDC_HEOCFG32_Msk                     _U_(0x000000FF)                                      /**< (LCDC_HEOCFG32) Register Mask  */


/* -------- LCDC_HEOCFG33 : (LCDC Offset: 0x410) (R/W 32) High-End Overlay Configuration Register 33 -------- */
#define LCDC_HEOCFG33_YPHI0COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 0 Position */
#define LCDC_HEOCFG33_YPHI0COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG33_YPHI0COEFF0_Pos)         /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 0 Mask */
#define LCDC_HEOCFG33_YPHI0COEFF0(value)      (LCDC_HEOCFG33_YPHI0COEFF0_Msk & ((value) << LCDC_HEOCFG33_YPHI0COEFF0_Pos))
#define LCDC_HEOCFG33_YPHI0COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 1 Position */
#define LCDC_HEOCFG33_YPHI0COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG33_YPHI0COEFF1_Pos)         /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 1 Mask */
#define LCDC_HEOCFG33_YPHI0COEFF1(value)      (LCDC_HEOCFG33_YPHI0COEFF1_Msk & ((value) << LCDC_HEOCFG33_YPHI0COEFF1_Pos))
#define LCDC_HEOCFG33_YPHI0COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 2 Position */
#define LCDC_HEOCFG33_YPHI0COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG33_YPHI0COEFF2_Pos)         /**< (LCDC_HEOCFG33) Vertical Coefficient for phase 0 tap 2 Mask */
#define LCDC_HEOCFG33_YPHI0COEFF2(value)      (LCDC_HEOCFG33_YPHI0COEFF2_Msk & ((value) << LCDC_HEOCFG33_YPHI0COEFF2_Pos))
#define LCDC_HEOCFG33_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG33) Register Mask  */


/* -------- LCDC_HEOCFG34 : (LCDC Offset: 0x414) (R/W 32) High-End Overlay Configuration Register 34 -------- */
#define LCDC_HEOCFG34_YPHI1COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 0 Position */
#define LCDC_HEOCFG34_YPHI1COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG34_YPHI1COEFF0_Pos)         /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 0 Mask */
#define LCDC_HEOCFG34_YPHI1COEFF0(value)      (LCDC_HEOCFG34_YPHI1COEFF0_Msk & ((value) << LCDC_HEOCFG34_YPHI1COEFF0_Pos))
#define LCDC_HEOCFG34_YPHI1COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 1 Position */
#define LCDC_HEOCFG34_YPHI1COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG34_YPHI1COEFF1_Pos)         /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 1 Mask */
#define LCDC_HEOCFG34_YPHI1COEFF1(value)      (LCDC_HEOCFG34_YPHI1COEFF1_Msk & ((value) << LCDC_HEOCFG34_YPHI1COEFF1_Pos))
#define LCDC_HEOCFG34_YPHI1COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 2 Position */
#define LCDC_HEOCFG34_YPHI1COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG34_YPHI1COEFF2_Pos)         /**< (LCDC_HEOCFG34) Vertical Coefficient for phase 1 tap 2 Mask */
#define LCDC_HEOCFG34_YPHI1COEFF2(value)      (LCDC_HEOCFG34_YPHI1COEFF2_Msk & ((value) << LCDC_HEOCFG34_YPHI1COEFF2_Pos))
#define LCDC_HEOCFG34_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG34) Register Mask  */


/* -------- LCDC_HEOCFG35 : (LCDC Offset: 0x418) (R/W 32) High-End Overlay Configuration Register 35 -------- */
#define LCDC_HEOCFG35_YPHI2COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 0 Position */
#define LCDC_HEOCFG35_YPHI2COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG35_YPHI2COEFF0_Pos)         /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 0 Mask */
#define LCDC_HEOCFG35_YPHI2COEFF0(value)      (LCDC_HEOCFG35_YPHI2COEFF0_Msk & ((value) << LCDC_HEOCFG35_YPHI2COEFF0_Pos))
#define LCDC_HEOCFG35_YPHI2COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 1 Position */
#define LCDC_HEOCFG35_YPHI2COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG35_YPHI2COEFF1_Pos)         /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 1 Mask */
#define LCDC_HEOCFG35_YPHI2COEFF1(value)      (LCDC_HEOCFG35_YPHI2COEFF1_Msk & ((value) << LCDC_HEOCFG35_YPHI2COEFF1_Pos))
#define LCDC_HEOCFG35_YPHI2COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 2 Position */
#define LCDC_HEOCFG35_YPHI2COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG35_YPHI2COEFF2_Pos)         /**< (LCDC_HEOCFG35) Vertical Coefficient for phase 2 tap 2 Mask */
#define LCDC_HEOCFG35_YPHI2COEFF2(value)      (LCDC_HEOCFG35_YPHI2COEFF2_Msk & ((value) << LCDC_HEOCFG35_YPHI2COEFF2_Pos))
#define LCDC_HEOCFG35_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG35) Register Mask  */


/* -------- LCDC_HEOCFG36 : (LCDC Offset: 0x41C) (R/W 32) High-End Overlay Configuration Register 36 -------- */
#define LCDC_HEOCFG36_YPHI3COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 0 Position */
#define LCDC_HEOCFG36_YPHI3COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG36_YPHI3COEFF0_Pos)         /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 0 Mask */
#define LCDC_HEOCFG36_YPHI3COEFF0(value)      (LCDC_HEOCFG36_YPHI3COEFF0_Msk & ((value) << LCDC_HEOCFG36_YPHI3COEFF0_Pos))
#define LCDC_HEOCFG36_YPHI3COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 1 Position */
#define LCDC_HEOCFG36_YPHI3COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG36_YPHI3COEFF1_Pos)         /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 1 Mask */
#define LCDC_HEOCFG36_YPHI3COEFF1(value)      (LCDC_HEOCFG36_YPHI3COEFF1_Msk & ((value) << LCDC_HEOCFG36_YPHI3COEFF1_Pos))
#define LCDC_HEOCFG36_YPHI3COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 2 Position */
#define LCDC_HEOCFG36_YPHI3COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG36_YPHI3COEFF2_Pos)         /**< (LCDC_HEOCFG36) Vertical Coefficient for phase 3 tap 2 Mask */
#define LCDC_HEOCFG36_YPHI3COEFF2(value)      (LCDC_HEOCFG36_YPHI3COEFF2_Msk & ((value) << LCDC_HEOCFG36_YPHI3COEFF2_Pos))
#define LCDC_HEOCFG36_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG36) Register Mask  */


/* -------- LCDC_HEOCFG37 : (LCDC Offset: 0x420) (R/W 32) High-End Overlay Configuration Register 37 -------- */
#define LCDC_HEOCFG37_YPHI4COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 0 Position */
#define LCDC_HEOCFG37_YPHI4COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG37_YPHI4COEFF0_Pos)         /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 0 Mask */
#define LCDC_HEOCFG37_YPHI4COEFF0(value)      (LCDC_HEOCFG37_YPHI4COEFF0_Msk & ((value) << LCDC_HEOCFG37_YPHI4COEFF0_Pos))
#define LCDC_HEOCFG37_YPHI4COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 1 Position */
#define LCDC_HEOCFG37_YPHI4COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG37_YPHI4COEFF1_Pos)         /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 1 Mask */
#define LCDC_HEOCFG37_YPHI4COEFF1(value)      (LCDC_HEOCFG37_YPHI4COEFF1_Msk & ((value) << LCDC_HEOCFG37_YPHI4COEFF1_Pos))
#define LCDC_HEOCFG37_YPHI4COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 2 Position */
#define LCDC_HEOCFG37_YPHI4COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG37_YPHI4COEFF2_Pos)         /**< (LCDC_HEOCFG37) Vertical Coefficient for phase 4 tap 2 Mask */
#define LCDC_HEOCFG37_YPHI4COEFF2(value)      (LCDC_HEOCFG37_YPHI4COEFF2_Msk & ((value) << LCDC_HEOCFG37_YPHI4COEFF2_Pos))
#define LCDC_HEOCFG37_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG37) Register Mask  */


/* -------- LCDC_HEOCFG38 : (LCDC Offset: 0x424) (R/W 32) High-End Overlay Configuration Register 38 -------- */
#define LCDC_HEOCFG38_YPHI5COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 0 Position */
#define LCDC_HEOCFG38_YPHI5COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG38_YPHI5COEFF0_Pos)         /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 0 Mask */
#define LCDC_HEOCFG38_YPHI5COEFF0(value)      (LCDC_HEOCFG38_YPHI5COEFF0_Msk & ((value) << LCDC_HEOCFG38_YPHI5COEFF0_Pos))
#define LCDC_HEOCFG38_YPHI5COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 1 Position */
#define LCDC_HEOCFG38_YPHI5COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG38_YPHI5COEFF1_Pos)         /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 1 Mask */
#define LCDC_HEOCFG38_YPHI5COEFF1(value)      (LCDC_HEOCFG38_YPHI5COEFF1_Msk & ((value) << LCDC_HEOCFG38_YPHI5COEFF1_Pos))
#define LCDC_HEOCFG38_YPHI5COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 2 Position */
#define LCDC_HEOCFG38_YPHI5COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG38_YPHI5COEFF2_Pos)         /**< (LCDC_HEOCFG38) Vertical Coefficient for phase 5 tap 2 Mask */
#define LCDC_HEOCFG38_YPHI5COEFF2(value)      (LCDC_HEOCFG38_YPHI5COEFF2_Msk & ((value) << LCDC_HEOCFG38_YPHI5COEFF2_Pos))
#define LCDC_HEOCFG38_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG38) Register Mask  */


/* -------- LCDC_HEOCFG39 : (LCDC Offset: 0x428) (R/W 32) High-End Overlay Configuration Register 39 -------- */
#define LCDC_HEOCFG39_YPHI6COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 0 Position */
#define LCDC_HEOCFG39_YPHI6COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG39_YPHI6COEFF0_Pos)         /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 0 Mask */
#define LCDC_HEOCFG39_YPHI6COEFF0(value)      (LCDC_HEOCFG39_YPHI6COEFF0_Msk & ((value) << LCDC_HEOCFG39_YPHI6COEFF0_Pos))
#define LCDC_HEOCFG39_YPHI6COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 1 Position */
#define LCDC_HEOCFG39_YPHI6COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG39_YPHI6COEFF1_Pos)         /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 1 Mask */
#define LCDC_HEOCFG39_YPHI6COEFF1(value)      (LCDC_HEOCFG39_YPHI6COEFF1_Msk & ((value) << LCDC_HEOCFG39_YPHI6COEFF1_Pos))
#define LCDC_HEOCFG39_YPHI6COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 2 Position */
#define LCDC_HEOCFG39_YPHI6COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG39_YPHI6COEFF2_Pos)         /**< (LCDC_HEOCFG39) Vertical Coefficient for phase 6 tap 2 Mask */
#define LCDC_HEOCFG39_YPHI6COEFF2(value)      (LCDC_HEOCFG39_YPHI6COEFF2_Msk & ((value) << LCDC_HEOCFG39_YPHI6COEFF2_Pos))
#define LCDC_HEOCFG39_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG39) Register Mask  */


/* -------- LCDC_HEOCFG40 : (LCDC Offset: 0x42C) (R/W 32) High-End Overlay Configuration Register 40 -------- */
#define LCDC_HEOCFG40_YPHI7COEFF0_Pos         _U_(0)                                               /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 0 Position */
#define LCDC_HEOCFG40_YPHI7COEFF0_Msk         (_U_(0xFF) << LCDC_HEOCFG40_YPHI7COEFF0_Pos)         /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 0 Mask */
#define LCDC_HEOCFG40_YPHI7COEFF0(value)      (LCDC_HEOCFG40_YPHI7COEFF0_Msk & ((value) << LCDC_HEOCFG40_YPHI7COEFF0_Pos))
#define LCDC_HEOCFG40_YPHI7COEFF1_Pos         _U_(8)                                               /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 1 Position */
#define LCDC_HEOCFG40_YPHI7COEFF1_Msk         (_U_(0xFF) << LCDC_HEOCFG40_YPHI7COEFF1_Pos)         /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 1 Mask */
#define LCDC_HEOCFG40_YPHI7COEFF1(value)      (LCDC_HEOCFG40_YPHI7COEFF1_Msk & ((value) << LCDC_HEOCFG40_YPHI7COEFF1_Pos))
#define LCDC_HEOCFG40_YPHI7COEFF2_Pos         _U_(16)                                              /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 2 Position */
#define LCDC_HEOCFG40_YPHI7COEFF2_Msk         (_U_(0xFF) << LCDC_HEOCFG40_YPHI7COEFF2_Pos)         /**< (LCDC_HEOCFG40) Vertical Coefficient for phase 7 tap 2 Mask */
#define LCDC_HEOCFG40_YPHI7COEFF2(value)      (LCDC_HEOCFG40_YPHI7COEFF2_Msk & ((value) << LCDC_HEOCFG40_YPHI7COEFF2_Pos))
#define LCDC_HEOCFG40_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_HEOCFG40) Register Mask  */


/* -------- LCDC_HEOCFG41 : (LCDC Offset: 0x430) (R/W 32) High-End Overlay Configuration Register 41 -------- */
#define LCDC_HEOCFG41_XPHIDEF_Pos             _U_(0)                                               /**< (LCDC_HEOCFG41) Horizontal Filter Phase Offset Position */
#define LCDC_HEOCFG41_XPHIDEF_Msk             (_U_(0x7) << LCDC_HEOCFG41_XPHIDEF_Pos)              /**< (LCDC_HEOCFG41) Horizontal Filter Phase Offset Mask */
#define LCDC_HEOCFG41_XPHIDEF(value)          (LCDC_HEOCFG41_XPHIDEF_Msk & ((value) << LCDC_HEOCFG41_XPHIDEF_Pos))
#define LCDC_HEOCFG41_YPHIDEF_Pos             _U_(16)                                              /**< (LCDC_HEOCFG41) Vertical Filter Phase Offset Position */
#define LCDC_HEOCFG41_YPHIDEF_Msk             (_U_(0x7) << LCDC_HEOCFG41_YPHIDEF_Pos)              /**< (LCDC_HEOCFG41) Vertical Filter Phase Offset Mask */
#define LCDC_HEOCFG41_YPHIDEF(value)          (LCDC_HEOCFG41_YPHIDEF_Msk & ((value) << LCDC_HEOCFG41_YPHIDEF_Pos))
#define LCDC_HEOCFG41_Msk                     _U_(0x00070007)                                      /**< (LCDC_HEOCFG41) Register Mask  */


/* -------- LCDC_PPCHER : (LCDC Offset: 0x540) ( /W 32) Post Processing Channel Enable Register -------- */
#define LCDC_PPCHER_CHEN_Pos                  _U_(0)                                               /**< (LCDC_PPCHER) Channel Enable Position */
#define LCDC_PPCHER_CHEN_Msk                  (_U_(0x1) << LCDC_PPCHER_CHEN_Pos)                   /**< (LCDC_PPCHER) Channel Enable Mask */
#define LCDC_PPCHER_CHEN(value)               (LCDC_PPCHER_CHEN_Msk & ((value) << LCDC_PPCHER_CHEN_Pos))
#define LCDC_PPCHER_UPDATEEN_Pos              _U_(1)                                               /**< (LCDC_PPCHER) Update Overlay Attributes Enable Position */
#define LCDC_PPCHER_UPDATEEN_Msk              (_U_(0x1) << LCDC_PPCHER_UPDATEEN_Pos)               /**< (LCDC_PPCHER) Update Overlay Attributes Enable Mask */
#define LCDC_PPCHER_UPDATEEN(value)           (LCDC_PPCHER_UPDATEEN_Msk & ((value) << LCDC_PPCHER_UPDATEEN_Pos))
#define LCDC_PPCHER_A2QEN_Pos                 _U_(2)                                               /**< (LCDC_PPCHER) Add To Queue Enable Position */
#define LCDC_PPCHER_A2QEN_Msk                 (_U_(0x1) << LCDC_PPCHER_A2QEN_Pos)                  /**< (LCDC_PPCHER) Add To Queue Enable Mask */
#define LCDC_PPCHER_A2QEN(value)              (LCDC_PPCHER_A2QEN_Msk & ((value) << LCDC_PPCHER_A2QEN_Pos))
#define LCDC_PPCHER_Msk                       _U_(0x00000007)                                      /**< (LCDC_PPCHER) Register Mask  */


/* -------- LCDC_PPCHDR : (LCDC Offset: 0x544) ( /W 32) Post Processing Channel Disable Register -------- */
#define LCDC_PPCHDR_CHDIS_Pos                 _U_(0)                                               /**< (LCDC_PPCHDR) Channel Disable Position */
#define LCDC_PPCHDR_CHDIS_Msk                 (_U_(0x1) << LCDC_PPCHDR_CHDIS_Pos)                  /**< (LCDC_PPCHDR) Channel Disable Mask */
#define LCDC_PPCHDR_CHDIS(value)              (LCDC_PPCHDR_CHDIS_Msk & ((value) << LCDC_PPCHDR_CHDIS_Pos))
#define LCDC_PPCHDR_CHRST_Pos                 _U_(8)                                               /**< (LCDC_PPCHDR) Channel Reset Position */
#define LCDC_PPCHDR_CHRST_Msk                 (_U_(0x1) << LCDC_PPCHDR_CHRST_Pos)                  /**< (LCDC_PPCHDR) Channel Reset Mask */
#define LCDC_PPCHDR_CHRST(value)              (LCDC_PPCHDR_CHRST_Msk & ((value) << LCDC_PPCHDR_CHRST_Pos))
#define LCDC_PPCHDR_Msk                       _U_(0x00000101)                                      /**< (LCDC_PPCHDR) Register Mask  */


/* -------- LCDC_PPCHSR : (LCDC Offset: 0x548) ( R/ 32) Post Processing Channel Status Register -------- */
#define LCDC_PPCHSR_CHSR_Pos                  _U_(0)                                               /**< (LCDC_PPCHSR) Channel Status Position */
#define LCDC_PPCHSR_CHSR_Msk                  (_U_(0x1) << LCDC_PPCHSR_CHSR_Pos)                   /**< (LCDC_PPCHSR) Channel Status Mask */
#define LCDC_PPCHSR_CHSR(value)               (LCDC_PPCHSR_CHSR_Msk & ((value) << LCDC_PPCHSR_CHSR_Pos))
#define LCDC_PPCHSR_UPDATESR_Pos              _U_(1)                                               /**< (LCDC_PPCHSR) Update Overlay Attributes In Progress Status Position */
#define LCDC_PPCHSR_UPDATESR_Msk              (_U_(0x1) << LCDC_PPCHSR_UPDATESR_Pos)               /**< (LCDC_PPCHSR) Update Overlay Attributes In Progress Status Mask */
#define LCDC_PPCHSR_UPDATESR(value)           (LCDC_PPCHSR_UPDATESR_Msk & ((value) << LCDC_PPCHSR_UPDATESR_Pos))
#define LCDC_PPCHSR_A2QSR_Pos                 _U_(2)                                               /**< (LCDC_PPCHSR) Add To Queue Status Position */
#define LCDC_PPCHSR_A2QSR_Msk                 (_U_(0x1) << LCDC_PPCHSR_A2QSR_Pos)                  /**< (LCDC_PPCHSR) Add To Queue Status Mask */
#define LCDC_PPCHSR_A2QSR(value)              (LCDC_PPCHSR_A2QSR_Msk & ((value) << LCDC_PPCHSR_A2QSR_Pos))
#define LCDC_PPCHSR_Msk                       _U_(0x00000007)                                      /**< (LCDC_PPCHSR) Register Mask  */


/* -------- LCDC_PPIER : (LCDC Offset: 0x54C) ( /W 32) Post Processing Interrupt Enable Register -------- */
#define LCDC_PPIER_DMA_Pos                    _U_(2)                                               /**< (LCDC_PPIER) End of DMA Transfer Interrupt Enable Position */
#define LCDC_PPIER_DMA_Msk                    (_U_(0x1) << LCDC_PPIER_DMA_Pos)                     /**< (LCDC_PPIER) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_PPIER_DMA(value)                 (LCDC_PPIER_DMA_Msk & ((value) << LCDC_PPIER_DMA_Pos))
#define LCDC_PPIER_DSCR_Pos                   _U_(3)                                               /**< (LCDC_PPIER) Descriptor Loaded Interrupt Enable Position */
#define LCDC_PPIER_DSCR_Msk                   (_U_(0x1) << LCDC_PPIER_DSCR_Pos)                    /**< (LCDC_PPIER) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_PPIER_DSCR(value)                (LCDC_PPIER_DSCR_Msk & ((value) << LCDC_PPIER_DSCR_Pos))
#define LCDC_PPIER_ADD_Pos                    _U_(4)                                               /**< (LCDC_PPIER) Head Descriptor Loaded Interrupt Enable Position */
#define LCDC_PPIER_ADD_Msk                    (_U_(0x1) << LCDC_PPIER_ADD_Pos)                     /**< (LCDC_PPIER) Head Descriptor Loaded Interrupt Enable Mask */
#define LCDC_PPIER_ADD(value)                 (LCDC_PPIER_ADD_Msk & ((value) << LCDC_PPIER_ADD_Pos))
#define LCDC_PPIER_DONE_Pos                   _U_(5)                                               /**< (LCDC_PPIER) End of List Interrupt Enable Position */
#define LCDC_PPIER_DONE_Msk                   (_U_(0x1) << LCDC_PPIER_DONE_Pos)                    /**< (LCDC_PPIER) End of List Interrupt Enable Mask */
#define LCDC_PPIER_DONE(value)                (LCDC_PPIER_DONE_Msk & ((value) << LCDC_PPIER_DONE_Pos))
#define LCDC_PPIER_Msk                        _U_(0x0000003C)                                      /**< (LCDC_PPIER) Register Mask  */


/* -------- LCDC_PPIDR : (LCDC Offset: 0x550) ( /W 32) Post Processing Interrupt Disable Register -------- */
#define LCDC_PPIDR_DMA_Pos                    _U_(2)                                               /**< (LCDC_PPIDR) End of DMA Transfer Interrupt Disable Position */
#define LCDC_PPIDR_DMA_Msk                    (_U_(0x1) << LCDC_PPIDR_DMA_Pos)                     /**< (LCDC_PPIDR) End of DMA Transfer Interrupt Disable Mask */
#define LCDC_PPIDR_DMA(value)                 (LCDC_PPIDR_DMA_Msk & ((value) << LCDC_PPIDR_DMA_Pos))
#define LCDC_PPIDR_DSCR_Pos                   _U_(3)                                               /**< (LCDC_PPIDR) Descriptor Loaded Interrupt Disable Position */
#define LCDC_PPIDR_DSCR_Msk                   (_U_(0x1) << LCDC_PPIDR_DSCR_Pos)                    /**< (LCDC_PPIDR) Descriptor Loaded Interrupt Disable Mask */
#define LCDC_PPIDR_DSCR(value)                (LCDC_PPIDR_DSCR_Msk & ((value) << LCDC_PPIDR_DSCR_Pos))
#define LCDC_PPIDR_ADD_Pos                    _U_(4)                                               /**< (LCDC_PPIDR) Head Descriptor Loaded Interrupt Disable Position */
#define LCDC_PPIDR_ADD_Msk                    (_U_(0x1) << LCDC_PPIDR_ADD_Pos)                     /**< (LCDC_PPIDR) Head Descriptor Loaded Interrupt Disable Mask */
#define LCDC_PPIDR_ADD(value)                 (LCDC_PPIDR_ADD_Msk & ((value) << LCDC_PPIDR_ADD_Pos))
#define LCDC_PPIDR_DONE_Pos                   _U_(5)                                               /**< (LCDC_PPIDR) End of List Interrupt Disable Position */
#define LCDC_PPIDR_DONE_Msk                   (_U_(0x1) << LCDC_PPIDR_DONE_Pos)                    /**< (LCDC_PPIDR) End of List Interrupt Disable Mask */
#define LCDC_PPIDR_DONE(value)                (LCDC_PPIDR_DONE_Msk & ((value) << LCDC_PPIDR_DONE_Pos))
#define LCDC_PPIDR_Msk                        _U_(0x0000003C)                                      /**< (LCDC_PPIDR) Register Mask  */


/* -------- LCDC_PPIMR : (LCDC Offset: 0x554) ( R/ 32) Post Processing Interrupt Mask Register -------- */
#define LCDC_PPIMR_DMA_Pos                    _U_(2)                                               /**< (LCDC_PPIMR) End of DMA Transfer Interrupt Mask Position */
#define LCDC_PPIMR_DMA_Msk                    (_U_(0x1) << LCDC_PPIMR_DMA_Pos)                     /**< (LCDC_PPIMR) End of DMA Transfer Interrupt Mask Mask */
#define LCDC_PPIMR_DMA(value)                 (LCDC_PPIMR_DMA_Msk & ((value) << LCDC_PPIMR_DMA_Pos))
#define LCDC_PPIMR_DSCR_Pos                   _U_(3)                                               /**< (LCDC_PPIMR) Descriptor Loaded Interrupt Mask Position */
#define LCDC_PPIMR_DSCR_Msk                   (_U_(0x1) << LCDC_PPIMR_DSCR_Pos)                    /**< (LCDC_PPIMR) Descriptor Loaded Interrupt Mask Mask */
#define LCDC_PPIMR_DSCR(value)                (LCDC_PPIMR_DSCR_Msk & ((value) << LCDC_PPIMR_DSCR_Pos))
#define LCDC_PPIMR_ADD_Pos                    _U_(4)                                               /**< (LCDC_PPIMR) Head Descriptor Loaded Interrupt Mask Position */
#define LCDC_PPIMR_ADD_Msk                    (_U_(0x1) << LCDC_PPIMR_ADD_Pos)                     /**< (LCDC_PPIMR) Head Descriptor Loaded Interrupt Mask Mask */
#define LCDC_PPIMR_ADD(value)                 (LCDC_PPIMR_ADD_Msk & ((value) << LCDC_PPIMR_ADD_Pos))
#define LCDC_PPIMR_DONE_Pos                   _U_(5)                                               /**< (LCDC_PPIMR) End of List Interrupt Mask Position */
#define LCDC_PPIMR_DONE_Msk                   (_U_(0x1) << LCDC_PPIMR_DONE_Pos)                    /**< (LCDC_PPIMR) End of List Interrupt Mask Mask */
#define LCDC_PPIMR_DONE(value)                (LCDC_PPIMR_DONE_Msk & ((value) << LCDC_PPIMR_DONE_Pos))
#define LCDC_PPIMR_Msk                        _U_(0x0000003C)                                      /**< (LCDC_PPIMR) Register Mask  */


/* -------- LCDC_PPISR : (LCDC Offset: 0x558) ( R/ 32) Post Processing Interrupt Status Register -------- */
#define LCDC_PPISR_DMA_Pos                    _U_(2)                                               /**< (LCDC_PPISR) End of DMA Transfer Position */
#define LCDC_PPISR_DMA_Msk                    (_U_(0x1) << LCDC_PPISR_DMA_Pos)                     /**< (LCDC_PPISR) End of DMA Transfer Mask */
#define LCDC_PPISR_DMA(value)                 (LCDC_PPISR_DMA_Msk & ((value) << LCDC_PPISR_DMA_Pos))
#define LCDC_PPISR_DSCR_Pos                   _U_(3)                                               /**< (LCDC_PPISR) DMA Descriptor Loaded Position */
#define LCDC_PPISR_DSCR_Msk                   (_U_(0x1) << LCDC_PPISR_DSCR_Pos)                    /**< (LCDC_PPISR) DMA Descriptor Loaded Mask */
#define LCDC_PPISR_DSCR(value)                (LCDC_PPISR_DSCR_Msk & ((value) << LCDC_PPISR_DSCR_Pos))
#define LCDC_PPISR_ADD_Pos                    _U_(4)                                               /**< (LCDC_PPISR) Head Descriptor Loaded Position */
#define LCDC_PPISR_ADD_Msk                    (_U_(0x1) << LCDC_PPISR_ADD_Pos)                     /**< (LCDC_PPISR) Head Descriptor Loaded Mask */
#define LCDC_PPISR_ADD(value)                 (LCDC_PPISR_ADD_Msk & ((value) << LCDC_PPISR_ADD_Pos))
#define LCDC_PPISR_DONE_Pos                   _U_(5)                                               /**< (LCDC_PPISR) End of List Detected Position */
#define LCDC_PPISR_DONE_Msk                   (_U_(0x1) << LCDC_PPISR_DONE_Pos)                    /**< (LCDC_PPISR) End of List Detected Mask */
#define LCDC_PPISR_DONE(value)                (LCDC_PPISR_DONE_Msk & ((value) << LCDC_PPISR_DONE_Pos))
#define LCDC_PPISR_Msk                        _U_(0x0000003C)                                      /**< (LCDC_PPISR) Register Mask  */


/* -------- LCDC_PPHEAD : (LCDC Offset: 0x55C) (R/W 32) Post Processing Head Register -------- */
#define LCDC_PPHEAD_HEAD_Pos                  _U_(2)                                               /**< (LCDC_PPHEAD) DMA Head Pointer Position */
#define LCDC_PPHEAD_HEAD_Msk                  (_U_(0x3FFFFFFF) << LCDC_PPHEAD_HEAD_Pos)            /**< (LCDC_PPHEAD) DMA Head Pointer Mask */
#define LCDC_PPHEAD_HEAD(value)               (LCDC_PPHEAD_HEAD_Msk & ((value) << LCDC_PPHEAD_HEAD_Pos))
#define LCDC_PPHEAD_Msk                       _U_(0xFFFFFFFC)                                      /**< (LCDC_PPHEAD) Register Mask  */


/* -------- LCDC_PPADDR : (LCDC Offset: 0x560) (R/W 32) Post Processing Address Register -------- */
#define LCDC_PPADDR_ADDR_Pos                  _U_(0)                                               /**< (LCDC_PPADDR) DMA Transfer Start Address Position */
#define LCDC_PPADDR_ADDR_Msk                  (_U_(0xFFFFFFFF) << LCDC_PPADDR_ADDR_Pos)            /**< (LCDC_PPADDR) DMA Transfer Start Address Mask */
#define LCDC_PPADDR_ADDR(value)               (LCDC_PPADDR_ADDR_Msk & ((value) << LCDC_PPADDR_ADDR_Pos))
#define LCDC_PPADDR_Msk                       _U_(0xFFFFFFFF)                                      /**< (LCDC_PPADDR) Register Mask  */


/* -------- LCDC_PPCTRL : (LCDC Offset: 0x564) (R/W 32) Post Processing Control Register -------- */
#define LCDC_PPCTRL_DFETCH_Pos                _U_(0)                                               /**< (LCDC_PPCTRL) Transfer Descriptor Fetch Enable Position */
#define LCDC_PPCTRL_DFETCH_Msk                (_U_(0x1) << LCDC_PPCTRL_DFETCH_Pos)                 /**< (LCDC_PPCTRL) Transfer Descriptor Fetch Enable Mask */
#define LCDC_PPCTRL_DFETCH(value)             (LCDC_PPCTRL_DFETCH_Msk & ((value) << LCDC_PPCTRL_DFETCH_Pos))
#define LCDC_PPCTRL_DMAIEN_Pos                _U_(2)                                               /**< (LCDC_PPCTRL) End of DMA Transfer Interrupt Enable Position */
#define LCDC_PPCTRL_DMAIEN_Msk                (_U_(0x1) << LCDC_PPCTRL_DMAIEN_Pos)                 /**< (LCDC_PPCTRL) End of DMA Transfer Interrupt Enable Mask */
#define LCDC_PPCTRL_DMAIEN(value)             (LCDC_PPCTRL_DMAIEN_Msk & ((value) << LCDC_PPCTRL_DMAIEN_Pos))
#define LCDC_PPCTRL_DSCRIEN_Pos               _U_(3)                                               /**< (LCDC_PPCTRL) Descriptor Loaded Interrupt Enable Position */
#define LCDC_PPCTRL_DSCRIEN_Msk               (_U_(0x1) << LCDC_PPCTRL_DSCRIEN_Pos)                /**< (LCDC_PPCTRL) Descriptor Loaded Interrupt Enable Mask */
#define LCDC_PPCTRL_DSCRIEN(value)            (LCDC_PPCTRL_DSCRIEN_Msk & ((value) << LCDC_PPCTRL_DSCRIEN_Pos))
#define LCDC_PPCTRL_ADDIEN_Pos                _U_(4)                                               /**< (LCDC_PPCTRL) Add Head Descriptor to Queue Interrupt Enable Position */
#define LCDC_PPCTRL_ADDIEN_Msk                (_U_(0x1) << LCDC_PPCTRL_ADDIEN_Pos)                 /**< (LCDC_PPCTRL) Add Head Descriptor to Queue Interrupt Enable Mask */
#define LCDC_PPCTRL_ADDIEN(value)             (LCDC_PPCTRL_ADDIEN_Msk & ((value) << LCDC_PPCTRL_ADDIEN_Pos))
#define LCDC_PPCTRL_DONEIEN_Pos               _U_(5)                                               /**< (LCDC_PPCTRL) End of List Interrupt Enable Position */
#define LCDC_PPCTRL_DONEIEN_Msk               (_U_(0x1) << LCDC_PPCTRL_DONEIEN_Pos)                /**< (LCDC_PPCTRL) End of List Interrupt Enable Mask */
#define LCDC_PPCTRL_DONEIEN(value)            (LCDC_PPCTRL_DONEIEN_Msk & ((value) << LCDC_PPCTRL_DONEIEN_Pos))
#define LCDC_PPCTRL_Msk                       _U_(0x0000003D)                                      /**< (LCDC_PPCTRL) Register Mask  */


/* -------- LCDC_PPNEXT : (LCDC Offset: 0x568) (R/W 32) Post Processing Next Register -------- */
#define LCDC_PPNEXT_NEXT_Pos                  _U_(0)                                               /**< (LCDC_PPNEXT) DMA Descriptor Next Address Position */
#define LCDC_PPNEXT_NEXT_Msk                  (_U_(0xFFFFFFFF) << LCDC_PPNEXT_NEXT_Pos)            /**< (LCDC_PPNEXT) DMA Descriptor Next Address Mask */
#define LCDC_PPNEXT_NEXT(value)               (LCDC_PPNEXT_NEXT_Msk & ((value) << LCDC_PPNEXT_NEXT_Pos))
#define LCDC_PPNEXT_Msk                       _U_(0xFFFFFFFF)                                      /**< (LCDC_PPNEXT) Register Mask  */


/* -------- LCDC_PPCFG0 : (LCDC Offset: 0x56C) (R/W 32) Post Processing Configuration Register 0 -------- */
#define LCDC_PPCFG0_SIF_Pos                   _U_(0)                                               /**< (LCDC_PPCFG0) Source Interface Position */
#define LCDC_PPCFG0_SIF_Msk                   (_U_(0x1) << LCDC_PPCFG0_SIF_Pos)                    /**< (LCDC_PPCFG0) Source Interface Mask */
#define LCDC_PPCFG0_SIF(value)                (LCDC_PPCFG0_SIF_Msk & ((value) << LCDC_PPCFG0_SIF_Pos))
#define LCDC_PPCFG0_BLEN_Pos                  _U_(4)                                               /**< (LCDC_PPCFG0) AHB Burst Length Position */
#define LCDC_PPCFG0_BLEN_Msk                  (_U_(0x3) << LCDC_PPCFG0_BLEN_Pos)                   /**< (LCDC_PPCFG0) AHB Burst Length Mask */
#define LCDC_PPCFG0_BLEN(value)               (LCDC_PPCFG0_BLEN_Msk & ((value) << LCDC_PPCFG0_BLEN_Pos))
#define LCDC_PPCFG0_DLBO_Pos                  _U_(8)                                               /**< (LCDC_PPCFG0) Defined Length Burst Only For Channel Bus Transaction Position */
#define LCDC_PPCFG0_DLBO_Msk                  (_U_(0x1) << LCDC_PPCFG0_DLBO_Pos)                   /**< (LCDC_PPCFG0) Defined Length Burst Only For Channel Bus Transaction Mask */
#define LCDC_PPCFG0_DLBO(value)               (LCDC_PPCFG0_DLBO_Msk & ((value) << LCDC_PPCFG0_DLBO_Pos))
#define LCDC_PPCFG0_Msk                       _U_(0x00000131)                                      /**< (LCDC_PPCFG0) Register Mask  */


/* -------- LCDC_PPCFG1 : (LCDC Offset: 0x570) (R/W 32) Post Processing Configuration Register 1 -------- */
#define LCDC_PPCFG1_PPMODE_Pos                _U_(0)                                               /**< (LCDC_PPCFG1) Post Processing Output Format Selection Position */
#define LCDC_PPCFG1_PPMODE_Msk                (_U_(0x7) << LCDC_PPCFG1_PPMODE_Pos)                 /**< (LCDC_PPCFG1) Post Processing Output Format Selection Mask */
#define LCDC_PPCFG1_PPMODE(value)             (LCDC_PPCFG1_PPMODE_Msk & ((value) << LCDC_PPCFG1_PPMODE_Pos))
#define   LCDC_PPCFG1_PPMODE_PPMODE_RGB_16BPP_Val _U_(0x0)                                             /**< (LCDC_PPCFG1) RGB 16 bpp  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_PACKED_Val _U_(0x1)                                             /**< (LCDC_PPCFG1) RGB 24 bpp PACKED  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_UNPACKED_Val _U_(0x2)                                             /**< (LCDC_PPCFG1) RGB 24 bpp UNPACKED  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE0_Val _U_(0x3)                                             /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 0)  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE1_Val _U_(0x4)                                             /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 1)  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE2_Val _U_(0x5)                                             /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 2)  */
#define   LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE3_Val _U_(0x6)                                             /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 3)  */
#define LCDC_PPCFG1_PPMODE_PPMODE_RGB_16BPP   (LCDC_PPCFG1_PPMODE_PPMODE_RGB_16BPP_Val << LCDC_PPCFG1_PPMODE_Pos) /**< (LCDC_PPCFG1) RGB 16 bpp Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_PACKED (LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_PACKED_Val << LCDC_PPCFG1_PPMODE_Pos) /**< (LCDC_PPCFG1) RGB 24 bpp PACKED Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_UNPACKED (LCDC_PPCFG1_PPMODE_PPMODE_RGB_24BPP_UNPACKED_Val << LCDC_PPCFG1_PPMODE_Pos) /**< (LCDC_PPCFG1) RGB 24 bpp UNPACKED Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE0 (LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE0_Val << LCDC_PPCFG1_PPMODE_Pos) /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 0) Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE1 (LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE1_Val << LCDC_PPCFG1_PPMODE_Pos) /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 1) Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE2 (LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE2_Val << LCDC_PPCFG1_PPMODE_Pos) /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 2) Position  */
#define LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE3 (LCDC_PPCFG1_PPMODE_PPMODE_YCBCR_422_MODE3_Val << LCDC_PPCFG1_PPMODE_Pos) /**< (LCDC_PPCFG1) YCbCr 422 16 bpp (Mode 3) Position  */
#define LCDC_PPCFG1_ITUBT601_Pos              _U_(4)                                               /**< (LCDC_PPCFG1) Color Space Conversion Luminance Position */
#define LCDC_PPCFG1_ITUBT601_Msk              (_U_(0x1) << LCDC_PPCFG1_ITUBT601_Pos)               /**< (LCDC_PPCFG1) Color Space Conversion Luminance Mask */
#define LCDC_PPCFG1_ITUBT601(value)           (LCDC_PPCFG1_ITUBT601_Msk & ((value) << LCDC_PPCFG1_ITUBT601_Pos))
#define LCDC_PPCFG1_Msk                       _U_(0x00000017)                                      /**< (LCDC_PPCFG1) Register Mask  */

#define LCDC_PPCFG1_ITUBT_Pos                 _U_(4)                                               /**< (LCDC_PPCFG1 Position) Color Space Conversion Luminance */
#define LCDC_PPCFG1_ITUBT_Msk                 (_U_(0x1) << LCDC_PPCFG1_ITUBT_Pos)                  /**< (LCDC_PPCFG1 Mask) ITUBT */
#define LCDC_PPCFG1_ITUBT(value)              (LCDC_PPCFG1_ITUBT_Msk & ((value) << LCDC_PPCFG1_ITUBT_Pos)) 

/* -------- LCDC_PPCFG2 : (LCDC Offset: 0x574) (R/W 32) Post Processing Configuration Register 2 -------- */
#define LCDC_PPCFG2_XSTRIDE_Pos               _U_(0)                                               /**< (LCDC_PPCFG2) Horizontal Stride Position */
#define LCDC_PPCFG2_XSTRIDE_Msk               (_U_(0xFFFFFFFF) << LCDC_PPCFG2_XSTRIDE_Pos)         /**< (LCDC_PPCFG2) Horizontal Stride Mask */
#define LCDC_PPCFG2_XSTRIDE(value)            (LCDC_PPCFG2_XSTRIDE_Msk & ((value) << LCDC_PPCFG2_XSTRIDE_Pos))
#define LCDC_PPCFG2_Msk                       _U_(0xFFFFFFFF)                                      /**< (LCDC_PPCFG2) Register Mask  */


/* -------- LCDC_PPCFG3 : (LCDC Offset: 0x578) (R/W 32) Post Processing Configuration Register 3 -------- */
#define LCDC_PPCFG3_CSCYR_Pos                 _U_(0)                                               /**< (LCDC_PPCFG3) Color Space Conversion R coefficient for Luminance component, signed format, step set to 1/1024 Position */
#define LCDC_PPCFG3_CSCYR_Msk                 (_U_(0x3FF) << LCDC_PPCFG3_CSCYR_Pos)                /**< (LCDC_PPCFG3) Color Space Conversion R coefficient for Luminance component, signed format, step set to 1/1024 Mask */
#define LCDC_PPCFG3_CSCYR(value)              (LCDC_PPCFG3_CSCYR_Msk & ((value) << LCDC_PPCFG3_CSCYR_Pos))
#define LCDC_PPCFG3_CSCYG_Pos                 _U_(10)                                              /**< (LCDC_PPCFG3) Color Space Conversion G coefficient for Luminance component, signed format, step set to 1/512 Position */
#define LCDC_PPCFG3_CSCYG_Msk                 (_U_(0x3FF) << LCDC_PPCFG3_CSCYG_Pos)                /**< (LCDC_PPCFG3) Color Space Conversion G coefficient for Luminance component, signed format, step set to 1/512 Mask */
#define LCDC_PPCFG3_CSCYG(value)              (LCDC_PPCFG3_CSCYG_Msk & ((value) << LCDC_PPCFG3_CSCYG_Pos))
#define LCDC_PPCFG3_CSCYB_Pos                 _U_(20)                                              /**< (LCDC_PPCFG3) Color Space Conversion B coefficient for Luminance component, signed format, step set to 1/1024 Position */
#define LCDC_PPCFG3_CSCYB_Msk                 (_U_(0x3FF) << LCDC_PPCFG3_CSCYB_Pos)                /**< (LCDC_PPCFG3) Color Space Conversion B coefficient for Luminance component, signed format, step set to 1/1024 Mask */
#define LCDC_PPCFG3_CSCYB(value)              (LCDC_PPCFG3_CSCYB_Msk & ((value) << LCDC_PPCFG3_CSCYB_Pos))
#define LCDC_PPCFG3_CSCYOFF_Pos               _U_(30)                                              /**< (LCDC_PPCFG3) Color Space Conversion Luminance Offset Position */
#define LCDC_PPCFG3_CSCYOFF_Msk               (_U_(0x1) << LCDC_PPCFG3_CSCYOFF_Pos)                /**< (LCDC_PPCFG3) Color Space Conversion Luminance Offset Mask */
#define LCDC_PPCFG3_CSCYOFF(value)            (LCDC_PPCFG3_CSCYOFF_Msk & ((value) << LCDC_PPCFG3_CSCYOFF_Pos))
#define LCDC_PPCFG3_Msk                       _U_(0x7FFFFFFF)                                      /**< (LCDC_PPCFG3) Register Mask  */


/* -------- LCDC_PPCFG4 : (LCDC Offset: 0x57C) (R/W 32) Post Processing Configuration Register 4 -------- */
#define LCDC_PPCFG4_CSCUR_Pos                 _U_(0)                                               /**< (LCDC_PPCFG4) Color Space Conversion R coefficient for Chrominance B component, signed format. (step 1/1024) Position */
#define LCDC_PPCFG4_CSCUR_Msk                 (_U_(0x3FF) << LCDC_PPCFG4_CSCUR_Pos)                /**< (LCDC_PPCFG4) Color Space Conversion R coefficient for Chrominance B component, signed format. (step 1/1024) Mask */
#define LCDC_PPCFG4_CSCUR(value)              (LCDC_PPCFG4_CSCUR_Msk & ((value) << LCDC_PPCFG4_CSCUR_Pos))
#define LCDC_PPCFG4_CSCUG_Pos                 _U_(10)                                              /**< (LCDC_PPCFG4) Color Space Conversion G coefficient for Chrominance B component, signed format. (step 1/512) Position */
#define LCDC_PPCFG4_CSCUG_Msk                 (_U_(0x3FF) << LCDC_PPCFG4_CSCUG_Pos)                /**< (LCDC_PPCFG4) Color Space Conversion G coefficient for Chrominance B component, signed format. (step 1/512) Mask */
#define LCDC_PPCFG4_CSCUG(value)              (LCDC_PPCFG4_CSCUG_Msk & ((value) << LCDC_PPCFG4_CSCUG_Pos))
#define LCDC_PPCFG4_CSCUB_Pos                 _U_(20)                                              /**< (LCDC_PPCFG4) Color Space Conversion B coefficient for Chrominance B component, signed format. (step 1/512) Position */
#define LCDC_PPCFG4_CSCUB_Msk                 (_U_(0x3FF) << LCDC_PPCFG4_CSCUB_Pos)                /**< (LCDC_PPCFG4) Color Space Conversion B coefficient for Chrominance B component, signed format. (step 1/512) Mask */
#define LCDC_PPCFG4_CSCUB(value)              (LCDC_PPCFG4_CSCUB_Msk & ((value) << LCDC_PPCFG4_CSCUB_Pos))
#define LCDC_PPCFG4_CSCUOFF_Pos               _U_(30)                                              /**< (LCDC_PPCFG4) Color Space Conversion Chrominance B Offset Position */
#define LCDC_PPCFG4_CSCUOFF_Msk               (_U_(0x1) << LCDC_PPCFG4_CSCUOFF_Pos)                /**< (LCDC_PPCFG4) Color Space Conversion Chrominance B Offset Mask */
#define LCDC_PPCFG4_CSCUOFF(value)            (LCDC_PPCFG4_CSCUOFF_Msk & ((value) << LCDC_PPCFG4_CSCUOFF_Pos))
#define LCDC_PPCFG4_Msk                       _U_(0x7FFFFFFF)                                      /**< (LCDC_PPCFG4) Register Mask  */


/* -------- LCDC_PPCFG5 : (LCDC Offset: 0x580) (R/W 32) Post Processing Configuration Register 5 -------- */
#define LCDC_PPCFG5_CSCVR_Pos                 _U_(0)                                               /**< (LCDC_PPCFG5) Color Space Conversion R coefficient for Chrominance R component, signed format. (step 1/1024) Position */
#define LCDC_PPCFG5_CSCVR_Msk                 (_U_(0x3FF) << LCDC_PPCFG5_CSCVR_Pos)                /**< (LCDC_PPCFG5) Color Space Conversion R coefficient for Chrominance R component, signed format. (step 1/1024) Mask */
#define LCDC_PPCFG5_CSCVR(value)              (LCDC_PPCFG5_CSCVR_Msk & ((value) << LCDC_PPCFG5_CSCVR_Pos))
#define LCDC_PPCFG5_CSCVG_Pos                 _U_(10)                                              /**< (LCDC_PPCFG5) Color Space Conversion G coefficient for Chrominance R component, signed format. (step 1/512) Position */
#define LCDC_PPCFG5_CSCVG_Msk                 (_U_(0x3FF) << LCDC_PPCFG5_CSCVG_Pos)                /**< (LCDC_PPCFG5) Color Space Conversion G coefficient for Chrominance R component, signed format. (step 1/512) Mask */
#define LCDC_PPCFG5_CSCVG(value)              (LCDC_PPCFG5_CSCVG_Msk & ((value) << LCDC_PPCFG5_CSCVG_Pos))
#define LCDC_PPCFG5_CSCVB_Pos                 _U_(20)                                              /**< (LCDC_PPCFG5) Color Space Conversion B coefficient for Chrominance R component, signed format. (step 1/1024) Position */
#define LCDC_PPCFG5_CSCVB_Msk                 (_U_(0x3FF) << LCDC_PPCFG5_CSCVB_Pos)                /**< (LCDC_PPCFG5) Color Space Conversion B coefficient for Chrominance R component, signed format. (step 1/1024) Mask */
#define LCDC_PPCFG5_CSCVB(value)              (LCDC_PPCFG5_CSCVB_Msk & ((value) << LCDC_PPCFG5_CSCVB_Pos))
#define LCDC_PPCFG5_CSCVOFF_Pos               _U_(30)                                              /**< (LCDC_PPCFG5) Color Space Conversion Chrominance R Offset Position */
#define LCDC_PPCFG5_CSCVOFF_Msk               (_U_(0x1) << LCDC_PPCFG5_CSCVOFF_Pos)                /**< (LCDC_PPCFG5) Color Space Conversion Chrominance R Offset Mask */
#define LCDC_PPCFG5_CSCVOFF(value)            (LCDC_PPCFG5_CSCVOFF_Msk & ((value) << LCDC_PPCFG5_CSCVOFF_Pos))
#define LCDC_PPCFG5_Msk                       _U_(0x7FFFFFFF)                                      /**< (LCDC_PPCFG5) Register Mask  */


/* -------- LCDC_BASECLUT : (LCDC Offset: 0x600) (R/W 32) Base CLUT Register -------- */
#define LCDC_BASECLUT_BCLUT_Pos               _U_(0)                                               /**< (LCDC_BASECLUT) Blue Color Entry Position */
#define LCDC_BASECLUT_BCLUT_Msk               (_U_(0xFF) << LCDC_BASECLUT_BCLUT_Pos)               /**< (LCDC_BASECLUT) Blue Color Entry Mask */
#define LCDC_BASECLUT_BCLUT(value)            (LCDC_BASECLUT_BCLUT_Msk & ((value) << LCDC_BASECLUT_BCLUT_Pos))
#define LCDC_BASECLUT_GCLUT_Pos               _U_(8)                                               /**< (LCDC_BASECLUT) Green Color Entry Position */
#define LCDC_BASECLUT_GCLUT_Msk               (_U_(0xFF) << LCDC_BASECLUT_GCLUT_Pos)               /**< (LCDC_BASECLUT) Green Color Entry Mask */
#define LCDC_BASECLUT_GCLUT(value)            (LCDC_BASECLUT_GCLUT_Msk & ((value) << LCDC_BASECLUT_GCLUT_Pos))
#define LCDC_BASECLUT_RCLUT_Pos               _U_(16)                                              /**< (LCDC_BASECLUT) Red Color Entry Position */
#define LCDC_BASECLUT_RCLUT_Msk               (_U_(0xFF) << LCDC_BASECLUT_RCLUT_Pos)               /**< (LCDC_BASECLUT) Red Color Entry Mask */
#define LCDC_BASECLUT_RCLUT(value)            (LCDC_BASECLUT_RCLUT_Msk & ((value) << LCDC_BASECLUT_RCLUT_Pos))
#define LCDC_BASECLUT_Msk                     _U_(0x00FFFFFF)                                      /**< (LCDC_BASECLUT) Register Mask  */


/* -------- LCDC_OVR1CLUT : (LCDC Offset: 0xA00) (R/W 32) Overlay 1 CLUT Register -------- */
#define LCDC_OVR1CLUT_BCLUT_Pos               _U_(0)                                               /**< (LCDC_OVR1CLUT) Blue Color Entry Position */
#define LCDC_OVR1CLUT_BCLUT_Msk               (_U_(0xFF) << LCDC_OVR1CLUT_BCLUT_Pos)               /**< (LCDC_OVR1CLUT) Blue Color Entry Mask */
#define LCDC_OVR1CLUT_BCLUT(value)            (LCDC_OVR1CLUT_BCLUT_Msk & ((value) << LCDC_OVR1CLUT_BCLUT_Pos))
#define LCDC_OVR1CLUT_GCLUT_Pos               _U_(8)                                               /**< (LCDC_OVR1CLUT) Green Color Entry Position */
#define LCDC_OVR1CLUT_GCLUT_Msk               (_U_(0xFF) << LCDC_OVR1CLUT_GCLUT_Pos)               /**< (LCDC_OVR1CLUT) Green Color Entry Mask */
#define LCDC_OVR1CLUT_GCLUT(value)            (LCDC_OVR1CLUT_GCLUT_Msk & ((value) << LCDC_OVR1CLUT_GCLUT_Pos))
#define LCDC_OVR1CLUT_RCLUT_Pos               _U_(16)                                              /**< (LCDC_OVR1CLUT) Red Color Entry Position */
#define LCDC_OVR1CLUT_RCLUT_Msk               (_U_(0xFF) << LCDC_OVR1CLUT_RCLUT_Pos)               /**< (LCDC_OVR1CLUT) Red Color Entry Mask */
#define LCDC_OVR1CLUT_RCLUT(value)            (LCDC_OVR1CLUT_RCLUT_Msk & ((value) << LCDC_OVR1CLUT_RCLUT_Pos))
#define LCDC_OVR1CLUT_ACLUT_Pos               _U_(24)                                              /**< (LCDC_OVR1CLUT) Alpha Color Entry Position */
#define LCDC_OVR1CLUT_ACLUT_Msk               (_U_(0xFF) << LCDC_OVR1CLUT_ACLUT_Pos)               /**< (LCDC_OVR1CLUT) Alpha Color Entry Mask */
#define LCDC_OVR1CLUT_ACLUT(value)            (LCDC_OVR1CLUT_ACLUT_Msk & ((value) << LCDC_OVR1CLUT_ACLUT_Pos))
#define LCDC_OVR1CLUT_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR1CLUT) Register Mask  */


/* -------- LCDC_OVR2CLUT : (LCDC Offset: 0xE00) (R/W 32) Overlay 2 CLUT Register -------- */
#define LCDC_OVR2CLUT_BCLUT_Pos               _U_(0)                                               /**< (LCDC_OVR2CLUT) Blue Color Entry Position */
#define LCDC_OVR2CLUT_BCLUT_Msk               (_U_(0xFF) << LCDC_OVR2CLUT_BCLUT_Pos)               /**< (LCDC_OVR2CLUT) Blue Color Entry Mask */
#define LCDC_OVR2CLUT_BCLUT(value)            (LCDC_OVR2CLUT_BCLUT_Msk & ((value) << LCDC_OVR2CLUT_BCLUT_Pos))
#define LCDC_OVR2CLUT_GCLUT_Pos               _U_(8)                                               /**< (LCDC_OVR2CLUT) Green Color Entry Position */
#define LCDC_OVR2CLUT_GCLUT_Msk               (_U_(0xFF) << LCDC_OVR2CLUT_GCLUT_Pos)               /**< (LCDC_OVR2CLUT) Green Color Entry Mask */
#define LCDC_OVR2CLUT_GCLUT(value)            (LCDC_OVR2CLUT_GCLUT_Msk & ((value) << LCDC_OVR2CLUT_GCLUT_Pos))
#define LCDC_OVR2CLUT_RCLUT_Pos               _U_(16)                                              /**< (LCDC_OVR2CLUT) Red Color Entry Position */
#define LCDC_OVR2CLUT_RCLUT_Msk               (_U_(0xFF) << LCDC_OVR2CLUT_RCLUT_Pos)               /**< (LCDC_OVR2CLUT) Red Color Entry Mask */
#define LCDC_OVR2CLUT_RCLUT(value)            (LCDC_OVR2CLUT_RCLUT_Msk & ((value) << LCDC_OVR2CLUT_RCLUT_Pos))
#define LCDC_OVR2CLUT_ACLUT_Pos               _U_(24)                                              /**< (LCDC_OVR2CLUT) Alpha Color Entry Position */
#define LCDC_OVR2CLUT_ACLUT_Msk               (_U_(0xFF) << LCDC_OVR2CLUT_ACLUT_Pos)               /**< (LCDC_OVR2CLUT) Alpha Color Entry Mask */
#define LCDC_OVR2CLUT_ACLUT(value)            (LCDC_OVR2CLUT_ACLUT_Msk & ((value) << LCDC_OVR2CLUT_ACLUT_Pos))
#define LCDC_OVR2CLUT_Msk                     _U_(0xFFFFFFFF)                                      /**< (LCDC_OVR2CLUT) Register Mask  */


/* -------- LCDC_HEOCLUT : (LCDC Offset: 0x1200) (R/W 32) High-End Overlay CLUT Register -------- */
#define LCDC_HEOCLUT_BCLUT_Pos                _U_(0)                                               /**< (LCDC_HEOCLUT) Blue Color Entry Position */
#define LCDC_HEOCLUT_BCLUT_Msk                (_U_(0xFF) << LCDC_HEOCLUT_BCLUT_Pos)                /**< (LCDC_HEOCLUT) Blue Color Entry Mask */
#define LCDC_HEOCLUT_BCLUT(value)             (LCDC_HEOCLUT_BCLUT_Msk & ((value) << LCDC_HEOCLUT_BCLUT_Pos))
#define LCDC_HEOCLUT_GCLUT_Pos                _U_(8)                                               /**< (LCDC_HEOCLUT) Green Color Entry Position */
#define LCDC_HEOCLUT_GCLUT_Msk                (_U_(0xFF) << LCDC_HEOCLUT_GCLUT_Pos)                /**< (LCDC_HEOCLUT) Green Color Entry Mask */
#define LCDC_HEOCLUT_GCLUT(value)             (LCDC_HEOCLUT_GCLUT_Msk & ((value) << LCDC_HEOCLUT_GCLUT_Pos))
#define LCDC_HEOCLUT_RCLUT_Pos                _U_(16)                                              /**< (LCDC_HEOCLUT) Red Color Entry Position */
#define LCDC_HEOCLUT_RCLUT_Msk                (_U_(0xFF) << LCDC_HEOCLUT_RCLUT_Pos)                /**< (LCDC_HEOCLUT) Red Color Entry Mask */
#define LCDC_HEOCLUT_RCLUT(value)             (LCDC_HEOCLUT_RCLUT_Msk & ((value) << LCDC_HEOCLUT_RCLUT_Pos))
#define LCDC_HEOCLUT_ACLUT_Pos                _U_(24)                                              /**< (LCDC_HEOCLUT) Alpha Color Entry Position */
#define LCDC_HEOCLUT_ACLUT_Msk                (_U_(0xFF) << LCDC_HEOCLUT_ACLUT_Pos)                /**< (LCDC_HEOCLUT) Alpha Color Entry Mask */
#define LCDC_HEOCLUT_ACLUT(value)             (LCDC_HEOCLUT_ACLUT_Msk & ((value) << LCDC_HEOCLUT_ACLUT_Pos))
#define LCDC_HEOCLUT_Msk                      _U_(0xFFFFFFFF)                                      /**< (LCDC_HEOCLUT) Register Mask  */


/** \brief LCDC register offsets definitions */
#define LCDC_LCDCFG0_REG_OFST          (0x00)              /**< (LCDC_LCDCFG0) LCD Controller Configuration Register 0 Offset */
#define LCDC_LCDCFG1_REG_OFST          (0x04)              /**< (LCDC_LCDCFG1) LCD Controller Configuration Register 1 Offset */
#define LCDC_LCDCFG2_REG_OFST          (0x08)              /**< (LCDC_LCDCFG2) LCD Controller Configuration Register 2 Offset */
#define LCDC_LCDCFG3_REG_OFST          (0x0C)              /**< (LCDC_LCDCFG3) LCD Controller Configuration Register 3 Offset */
#define LCDC_LCDCFG4_REG_OFST          (0x10)              /**< (LCDC_LCDCFG4) LCD Controller Configuration Register 4 Offset */
#define LCDC_LCDCFG5_REG_OFST          (0x14)              /**< (LCDC_LCDCFG5) LCD Controller Configuration Register 5 Offset */
#define LCDC_LCDCFG6_REG_OFST          (0x18)              /**< (LCDC_LCDCFG6) LCD Controller Configuration Register 6 Offset */
#define LCDC_LCDEN_REG_OFST            (0x20)              /**< (LCDC_LCDEN) LCD Controller Enable Register Offset */
#define LCDC_LCDDIS_REG_OFST           (0x24)              /**< (LCDC_LCDDIS) LCD Controller Disable Register Offset */
#define LCDC_LCDSR_REG_OFST            (0x28)              /**< (LCDC_LCDSR) LCD Controller Status Register Offset */
#define LCDC_LCDIER_REG_OFST           (0x2C)              /**< (LCDC_LCDIER) LCD Controller Interrupt Enable Register Offset */
#define LCDC_LCDIDR_REG_OFST           (0x30)              /**< (LCDC_LCDIDR) LCD Controller Interrupt Disable Register Offset */
#define LCDC_LCDIMR_REG_OFST           (0x34)              /**< (LCDC_LCDIMR) LCD Controller Interrupt Mask Register Offset */
#define LCDC_LCDISR_REG_OFST           (0x38)              /**< (LCDC_LCDISR) LCD Controller Interrupt Status Register Offset */
#define LCDC_ATTR_REG_OFST             (0x3C)              /**< (LCDC_ATTR) LCD Controller Attribute Register Offset */
#define LCDC_BASECHER_REG_OFST         (0x40)              /**< (LCDC_BASECHER) Base Layer Channel Enable Register Offset */
#define LCDC_BASECHDR_REG_OFST         (0x44)              /**< (LCDC_BASECHDR) Base Layer Channel Disable Register Offset */
#define LCDC_BASECHSR_REG_OFST         (0x48)              /**< (LCDC_BASECHSR) Base Layer Channel Status Register Offset */
#define LCDC_BASEIER_REG_OFST          (0x4C)              /**< (LCDC_BASEIER) Base Layer Interrupt Enable Register Offset */
#define LCDC_BASEIDR_REG_OFST          (0x50)              /**< (LCDC_BASEIDR) Base Layer Interrupt Disabled Register Offset */
#define LCDC_BASEIMR_REG_OFST          (0x54)              /**< (LCDC_BASEIMR) Base Layer Interrupt Mask Register Offset */
#define LCDC_BASEISR_REG_OFST          (0x58)              /**< (LCDC_BASEISR) Base Layer Interrupt Status Register Offset */
#define LCDC_BASEHEAD_REG_OFST         (0x5C)              /**< (LCDC_BASEHEAD) Base DMA Head Register Offset */
#define LCDC_BASEADDR_REG_OFST         (0x60)              /**< (LCDC_BASEADDR) Base DMA Address Register Offset */
#define LCDC_BASECTRL_REG_OFST         (0x64)              /**< (LCDC_BASECTRL) Base DMA Control Register Offset */
#define LCDC_BASENEXT_REG_OFST         (0x68)              /**< (LCDC_BASENEXT) Base DMA Next Register Offset */
#define LCDC_BASECFG0_REG_OFST         (0x6C)              /**< (LCDC_BASECFG0) Base Layer Configuration Register 0 Offset */
#define LCDC_BASECFG1_REG_OFST         (0x70)              /**< (LCDC_BASECFG1) Base Layer Configuration Register 1 Offset */
#define LCDC_BASECFG2_REG_OFST         (0x74)              /**< (LCDC_BASECFG2) Base Layer Configuration Register 2 Offset */
#define LCDC_BASECFG3_REG_OFST         (0x78)              /**< (LCDC_BASECFG3) Base Layer Configuration Register 3 Offset */
#define LCDC_BASECFG4_REG_OFST         (0x7C)              /**< (LCDC_BASECFG4) Base Layer Configuration Register 4 Offset */
#define LCDC_BASECFG5_REG_OFST         (0x80)              /**< (LCDC_BASECFG5) Base Layer Configuration Register 5 Offset */
#define LCDC_BASECFG6_REG_OFST         (0x84)              /**< (LCDC_BASECFG6) Base Layer Configuration Register 6 Offset */
#define LCDC_OVR1CHER_REG_OFST         (0x140)             /**< (LCDC_OVR1CHER) Overlay 1 Channel Enable Register Offset */
#define LCDC_OVR1CHDR_REG_OFST         (0x144)             /**< (LCDC_OVR1CHDR) Overlay 1 Channel Disable Register Offset */
#define LCDC_OVR1CHSR_REG_OFST         (0x148)             /**< (LCDC_OVR1CHSR) Overlay 1 Channel Status Register Offset */
#define LCDC_OVR1IER_REG_OFST          (0x14C)             /**< (LCDC_OVR1IER) Overlay 1 Interrupt Enable Register Offset */
#define LCDC_OVR1IDR_REG_OFST          (0x150)             /**< (LCDC_OVR1IDR) Overlay 1 Interrupt Disable Register Offset */
#define LCDC_OVR1IMR_REG_OFST          (0x154)             /**< (LCDC_OVR1IMR) Overlay 1 Interrupt Mask Register Offset */
#define LCDC_OVR1ISR_REG_OFST          (0x158)             /**< (LCDC_OVR1ISR) Overlay 1 Interrupt Status Register Offset */
#define LCDC_OVR1HEAD_REG_OFST         (0x15C)             /**< (LCDC_OVR1HEAD) Overlay 1 DMA Head Register Offset */
#define LCDC_OVR1ADDR_REG_OFST         (0x160)             /**< (LCDC_OVR1ADDR) Overlay 1 DMA Address Register Offset */
#define LCDC_OVR1CTRL_REG_OFST         (0x164)             /**< (LCDC_OVR1CTRL) Overlay 1 DMA Control Register Offset */
#define LCDC_OVR1NEXT_REG_OFST         (0x168)             /**< (LCDC_OVR1NEXT) Overlay 1 DMA Next Register Offset */
#define LCDC_OVR1CFG0_REG_OFST         (0x16C)             /**< (LCDC_OVR1CFG0) Overlay 1 Configuration Register 0 Offset */
#define LCDC_OVR1CFG1_REG_OFST         (0x170)             /**< (LCDC_OVR1CFG1) Overlay 1 Configuration Register 1 Offset */
#define LCDC_OVR1CFG2_REG_OFST         (0x174)             /**< (LCDC_OVR1CFG2) Overlay 1 Configuration Register 2 Offset */
#define LCDC_OVR1CFG3_REG_OFST         (0x178)             /**< (LCDC_OVR1CFG3) Overlay 1 Configuration Register 3 Offset */
#define LCDC_OVR1CFG4_REG_OFST         (0x17C)             /**< (LCDC_OVR1CFG4) Overlay 1 Configuration Register 4 Offset */
#define LCDC_OVR1CFG5_REG_OFST         (0x180)             /**< (LCDC_OVR1CFG5) Overlay 1 Configuration Register 5 Offset */
#define LCDC_OVR1CFG6_REG_OFST         (0x184)             /**< (LCDC_OVR1CFG6) Overlay 1 Configuration Register 6 Offset */
#define LCDC_OVR1CFG7_REG_OFST         (0x188)             /**< (LCDC_OVR1CFG7) Overlay 1 Configuration Register 7 Offset */
#define LCDC_OVR1CFG8_REG_OFST         (0x18C)             /**< (LCDC_OVR1CFG8) Overlay 1 Configuration Register 8 Offset */
#define LCDC_OVR1CFG9_REG_OFST         (0x190)             /**< (LCDC_OVR1CFG9) Overlay 1 Configuration Register 9 Offset */
#define LCDC_OVR2CHER_REG_OFST         (0x240)             /**< (LCDC_OVR2CHER) Overlay 2 Channel Enable Register Offset */
#define LCDC_OVR2CHDR_REG_OFST         (0x244)             /**< (LCDC_OVR2CHDR) Overlay 2 Channel Disable Register Offset */
#define LCDC_OVR2CHSR_REG_OFST         (0x248)             /**< (LCDC_OVR2CHSR) Overlay 2 Channel Status Register Offset */
#define LCDC_OVR2IER_REG_OFST          (0x24C)             /**< (LCDC_OVR2IER) Overlay 2 Interrupt Enable Register Offset */
#define LCDC_OVR2IDR_REG_OFST          (0x250)             /**< (LCDC_OVR2IDR) Overlay 2 Interrupt Disable Register Offset */
#define LCDC_OVR2IMR_REG_OFST          (0x254)             /**< (LCDC_OVR2IMR) Overlay 2 Interrupt Mask Register Offset */
#define LCDC_OVR2ISR_REG_OFST          (0x258)             /**< (LCDC_OVR2ISR) Overlay 2 Interrupt Status Register Offset */
#define LCDC_OVR2HEAD_REG_OFST         (0x25C)             /**< (LCDC_OVR2HEAD) Overlay 2 DMA Head Register Offset */
#define LCDC_OVR2ADDR_REG_OFST         (0x260)             /**< (LCDC_OVR2ADDR) Overlay 2 DMA Address Register Offset */
#define LCDC_OVR2CTRL_REG_OFST         (0x264)             /**< (LCDC_OVR2CTRL) Overlay 2 DMA Control Register Offset */
#define LCDC_OVR2NEXT_REG_OFST         (0x268)             /**< (LCDC_OVR2NEXT) Overlay 2 DMA Next Register Offset */
#define LCDC_OVR2CFG0_REG_OFST         (0x26C)             /**< (LCDC_OVR2CFG0) Overlay 2 Configuration Register 0 Offset */
#define LCDC_OVR2CFG1_REG_OFST         (0x270)             /**< (LCDC_OVR2CFG1) Overlay 2 Configuration Register 1 Offset */
#define LCDC_OVR2CFG2_REG_OFST         (0x274)             /**< (LCDC_OVR2CFG2) Overlay 2 Configuration Register 2 Offset */
#define LCDC_OVR2CFG3_REG_OFST         (0x278)             /**< (LCDC_OVR2CFG3) Overlay 2 Configuration Register 3 Offset */
#define LCDC_OVR2CFG4_REG_OFST         (0x27C)             /**< (LCDC_OVR2CFG4) Overlay 2 Configuration Register 4 Offset */
#define LCDC_OVR2CFG5_REG_OFST         (0x280)             /**< (LCDC_OVR2CFG5) Overlay 2 Configuration Register 5 Offset */
#define LCDC_OVR2CFG6_REG_OFST         (0x284)             /**< (LCDC_OVR2CFG6) Overlay 2 Configuration Register 6 Offset */
#define LCDC_OVR2CFG7_REG_OFST         (0x288)             /**< (LCDC_OVR2CFG7) Overlay 2 Configuration Register 7 Offset */
#define LCDC_OVR2CFG8_REG_OFST         (0x28C)             /**< (LCDC_OVR2CFG8) Overlay 2 Configuration Register 8 Offset */
#define LCDC_OVR2CFG9_REG_OFST         (0x290)             /**< (LCDC_OVR2CFG9) Overlay 2 Configuration Register 9 Offset */
#define LCDC_HEOCHER_REG_OFST          (0x340)             /**< (LCDC_HEOCHER) High-End Overlay Channel Enable Register Offset */
#define LCDC_HEOCHDR_REG_OFST          (0x344)             /**< (LCDC_HEOCHDR) High-End Overlay Channel Disable Register Offset */
#define LCDC_HEOCHSR_REG_OFST          (0x348)             /**< (LCDC_HEOCHSR) High-End Overlay Channel Status Register Offset */
#define LCDC_HEOIER_REG_OFST           (0x34C)             /**< (LCDC_HEOIER) High-End Overlay Interrupt Enable Register Offset */
#define LCDC_HEOIDR_REG_OFST           (0x350)             /**< (LCDC_HEOIDR) High-End Overlay Interrupt Disable Register Offset */
#define LCDC_HEOIMR_REG_OFST           (0x354)             /**< (LCDC_HEOIMR) High-End Overlay Interrupt Mask Register Offset */
#define LCDC_HEOISR_REG_OFST           (0x358)             /**< (LCDC_HEOISR) High-End Overlay Interrupt Status Register Offset */
#define LCDC_HEOHEAD_REG_OFST          (0x35C)             /**< (LCDC_HEOHEAD) High-End Overlay DMA Head Register Offset */
#define LCDC_HEOADDR_REG_OFST          (0x360)             /**< (LCDC_HEOADDR) High-End Overlay DMA Address Register Offset */
#define LCDC_HEOCTRL_REG_OFST          (0x364)             /**< (LCDC_HEOCTRL) High-End Overlay DMA Control Register Offset */
#define LCDC_HEONEXT_REG_OFST          (0x368)             /**< (LCDC_HEONEXT) High-End Overlay DMA Next Register Offset */
#define LCDC_HEOUHEAD_REG_OFST         (0x36C)             /**< (LCDC_HEOUHEAD) High-End Overlay U-UV DMA Head Register Offset */
#define LCDC_HEOUADDR_REG_OFST         (0x370)             /**< (LCDC_HEOUADDR) High-End Overlay U-UV DMA Address Register Offset */
#define LCDC_HEOUCTRL_REG_OFST         (0x374)             /**< (LCDC_HEOUCTRL) High-End Overlay U-UV DMA Control Register Offset */
#define LCDC_HEOUNEXT_REG_OFST         (0x378)             /**< (LCDC_HEOUNEXT) High-End Overlay U-UV DMA Next Register Offset */
#define LCDC_HEOVHEAD_REG_OFST         (0x37C)             /**< (LCDC_HEOVHEAD) High-End Overlay V DMA Head Register Offset */
#define LCDC_HEOVADDR_REG_OFST         (0x380)             /**< (LCDC_HEOVADDR) High-End Overlay V DMA Address Register Offset */
#define LCDC_HEOVCTRL_REG_OFST         (0x384)             /**< (LCDC_HEOVCTRL) High-End Overlay V DMA Control Register Offset */
#define LCDC_HEOVNEXT_REG_OFST         (0x388)             /**< (LCDC_HEOVNEXT) High-End Overlay V DMA Next Register Offset */
#define LCDC_HEOCFG0_REG_OFST          (0x38C)             /**< (LCDC_HEOCFG0) High-End Overlay Configuration Register 0 Offset */
#define LCDC_HEOCFG1_REG_OFST          (0x390)             /**< (LCDC_HEOCFG1) High-End Overlay Configuration Register 1 Offset */
#define LCDC_HEOCFG2_REG_OFST          (0x394)             /**< (LCDC_HEOCFG2) High-End Overlay Configuration Register 2 Offset */
#define LCDC_HEOCFG3_REG_OFST          (0x398)             /**< (LCDC_HEOCFG3) High-End Overlay Configuration Register 3 Offset */
#define LCDC_HEOCFG4_REG_OFST          (0x39C)             /**< (LCDC_HEOCFG4) High-End Overlay Configuration Register 4 Offset */
#define LCDC_HEOCFG5_REG_OFST          (0x3A0)             /**< (LCDC_HEOCFG5) High-End Overlay Configuration Register 5 Offset */
#define LCDC_HEOCFG6_REG_OFST          (0x3A4)             /**< (LCDC_HEOCFG6) High-End Overlay Configuration Register 6 Offset */
#define LCDC_HEOCFG7_REG_OFST          (0x3A8)             /**< (LCDC_HEOCFG7) High-End Overlay Configuration Register 7 Offset */
#define LCDC_HEOCFG8_REG_OFST          (0x3AC)             /**< (LCDC_HEOCFG8) High-End Overlay Configuration Register 8 Offset */
#define LCDC_HEOCFG9_REG_OFST          (0x3B0)             /**< (LCDC_HEOCFG9) High-End Overlay Configuration Register 9 Offset */
#define LCDC_HEOCFG10_REG_OFST         (0x3B4)             /**< (LCDC_HEOCFG10) High-End Overlay Configuration Register 10 Offset */
#define LCDC_HEOCFG11_REG_OFST         (0x3B8)             /**< (LCDC_HEOCFG11) High-End Overlay Configuration Register 11 Offset */
#define LCDC_HEOCFG12_REG_OFST         (0x3BC)             /**< (LCDC_HEOCFG12) High-End Overlay Configuration Register 12 Offset */
#define LCDC_HEOCFG13_REG_OFST         (0x3C0)             /**< (LCDC_HEOCFG13) High-End Overlay Configuration Register 13 Offset */
#define LCDC_HEOCFG14_REG_OFST         (0x3C4)             /**< (LCDC_HEOCFG14) High-End Overlay Configuration Register 14 Offset */
#define LCDC_HEOCFG15_REG_OFST         (0x3C8)             /**< (LCDC_HEOCFG15) High-End Overlay Configuration Register 15 Offset */
#define LCDC_HEOCFG16_REG_OFST         (0x3CC)             /**< (LCDC_HEOCFG16) High-End Overlay Configuration Register 16 Offset */
#define LCDC_HEOCFG17_REG_OFST         (0x3D0)             /**< (LCDC_HEOCFG17) High-End Overlay Configuration Register 17 Offset */
#define LCDC_HEOCFG18_REG_OFST         (0x3D4)             /**< (LCDC_HEOCFG18) High-End Overlay Configuration Register 18 Offset */
#define LCDC_HEOCFG19_REG_OFST         (0x3D8)             /**< (LCDC_HEOCFG19) High-End Overlay Configuration Register 19 Offset */
#define LCDC_HEOCFG20_REG_OFST         (0x3DC)             /**< (LCDC_HEOCFG20) High-End Overlay Configuration Register 20 Offset */
#define LCDC_HEOCFG21_REG_OFST         (0x3E0)             /**< (LCDC_HEOCFG21) High-End Overlay Configuration Register 21 Offset */
#define LCDC_HEOCFG22_REG_OFST         (0x3E4)             /**< (LCDC_HEOCFG22) High-End Overlay Configuration Register 22 Offset */
#define LCDC_HEOCFG23_REG_OFST         (0x3E8)             /**< (LCDC_HEOCFG23) High-End Overlay Configuration Register 23 Offset */
#define LCDC_HEOCFG24_REG_OFST         (0x3EC)             /**< (LCDC_HEOCFG24) High-End Overlay Configuration Register 24 Offset */
#define LCDC_HEOCFG25_REG_OFST         (0x3F0)             /**< (LCDC_HEOCFG25) High-End Overlay Configuration Register 25 Offset */
#define LCDC_HEOCFG26_REG_OFST         (0x3F4)             /**< (LCDC_HEOCFG26) High-End Overlay Configuration Register 26 Offset */
#define LCDC_HEOCFG27_REG_OFST         (0x3F8)             /**< (LCDC_HEOCFG27) High-End Overlay Configuration Register 27 Offset */
#define LCDC_HEOCFG28_REG_OFST         (0x3FC)             /**< (LCDC_HEOCFG28) High-End Overlay Configuration Register 28 Offset */
#define LCDC_HEOCFG29_REG_OFST         (0x400)             /**< (LCDC_HEOCFG29) High-End Overlay Configuration Register 29 Offset */
#define LCDC_HEOCFG30_REG_OFST         (0x404)             /**< (LCDC_HEOCFG30) High-End Overlay Configuration Register 30 Offset */
#define LCDC_HEOCFG31_REG_OFST         (0x408)             /**< (LCDC_HEOCFG31) High-End Overlay Configuration Register 31 Offset */
#define LCDC_HEOCFG32_REG_OFST         (0x40C)             /**< (LCDC_HEOCFG32) High-End Overlay Configuration Register 32 Offset */
#define LCDC_HEOCFG33_REG_OFST         (0x410)             /**< (LCDC_HEOCFG33) High-End Overlay Configuration Register 33 Offset */
#define LCDC_HEOCFG34_REG_OFST         (0x414)             /**< (LCDC_HEOCFG34) High-End Overlay Configuration Register 34 Offset */
#define LCDC_HEOCFG35_REG_OFST         (0x418)             /**< (LCDC_HEOCFG35) High-End Overlay Configuration Register 35 Offset */
#define LCDC_HEOCFG36_REG_OFST         (0x41C)             /**< (LCDC_HEOCFG36) High-End Overlay Configuration Register 36 Offset */
#define LCDC_HEOCFG37_REG_OFST         (0x420)             /**< (LCDC_HEOCFG37) High-End Overlay Configuration Register 37 Offset */
#define LCDC_HEOCFG38_REG_OFST         (0x424)             /**< (LCDC_HEOCFG38) High-End Overlay Configuration Register 38 Offset */
#define LCDC_HEOCFG39_REG_OFST         (0x428)             /**< (LCDC_HEOCFG39) High-End Overlay Configuration Register 39 Offset */
#define LCDC_HEOCFG40_REG_OFST         (0x42C)             /**< (LCDC_HEOCFG40) High-End Overlay Configuration Register 40 Offset */
#define LCDC_HEOCFG41_REG_OFST         (0x430)             /**< (LCDC_HEOCFG41) High-End Overlay Configuration Register 41 Offset */
#define LCDC_PPCHER_REG_OFST           (0x540)             /**< (LCDC_PPCHER) Post Processing Channel Enable Register Offset */
#define LCDC_PPCHDR_REG_OFST           (0x544)             /**< (LCDC_PPCHDR) Post Processing Channel Disable Register Offset */
#define LCDC_PPCHSR_REG_OFST           (0x548)             /**< (LCDC_PPCHSR) Post Processing Channel Status Register Offset */
#define LCDC_PPIER_REG_OFST            (0x54C)             /**< (LCDC_PPIER) Post Processing Interrupt Enable Register Offset */
#define LCDC_PPIDR_REG_OFST            (0x550)             /**< (LCDC_PPIDR) Post Processing Interrupt Disable Register Offset */
#define LCDC_PPIMR_REG_OFST            (0x554)             /**< (LCDC_PPIMR) Post Processing Interrupt Mask Register Offset */
#define LCDC_PPISR_REG_OFST            (0x558)             /**< (LCDC_PPISR) Post Processing Interrupt Status Register Offset */
#define LCDC_PPHEAD_REG_OFST           (0x55C)             /**< (LCDC_PPHEAD) Post Processing Head Register Offset */
#define LCDC_PPADDR_REG_OFST           (0x560)             /**< (LCDC_PPADDR) Post Processing Address Register Offset */
#define LCDC_PPCTRL_REG_OFST           (0x564)             /**< (LCDC_PPCTRL) Post Processing Control Register Offset */
#define LCDC_PPNEXT_REG_OFST           (0x568)             /**< (LCDC_PPNEXT) Post Processing Next Register Offset */
#define LCDC_PPCFG0_REG_OFST           (0x56C)             /**< (LCDC_PPCFG0) Post Processing Configuration Register 0 Offset */
#define LCDC_PPCFG1_REG_OFST           (0x570)             /**< (LCDC_PPCFG1) Post Processing Configuration Register 1 Offset */
#define LCDC_PPCFG2_REG_OFST           (0x574)             /**< (LCDC_PPCFG2) Post Processing Configuration Register 2 Offset */
#define LCDC_PPCFG3_REG_OFST           (0x578)             /**< (LCDC_PPCFG3) Post Processing Configuration Register 3 Offset */
#define LCDC_PPCFG4_REG_OFST           (0x57C)             /**< (LCDC_PPCFG4) Post Processing Configuration Register 4 Offset */
#define LCDC_PPCFG5_REG_OFST           (0x580)             /**< (LCDC_PPCFG5) Post Processing Configuration Register 5 Offset */
#define LCDC_BASECLUT_REG_OFST         (0x600)             /**< (LCDC_BASECLUT) Base CLUT Register Offset */
#define LCDC_BASECLUT0_REG_OFST        (0x600)             /**< (LCDC_BASECLUT0) Base CLUT Register Offset */
#define LCDC_BASECLUT1_REG_OFST        (0x604)             /**< (LCDC_BASECLUT1) Base CLUT Register Offset */
#define LCDC_BASECLUT2_REG_OFST        (0x608)             /**< (LCDC_BASECLUT2) Base CLUT Register Offset */
#define LCDC_BASECLUT3_REG_OFST        (0x60C)             /**< (LCDC_BASECLUT3) Base CLUT Register Offset */
#define LCDC_BASECLUT4_REG_OFST        (0x610)             /**< (LCDC_BASECLUT4) Base CLUT Register Offset */
#define LCDC_BASECLUT5_REG_OFST        (0x614)             /**< (LCDC_BASECLUT5) Base CLUT Register Offset */
#define LCDC_BASECLUT6_REG_OFST        (0x618)             /**< (LCDC_BASECLUT6) Base CLUT Register Offset */
#define LCDC_BASECLUT7_REG_OFST        (0x61C)             /**< (LCDC_BASECLUT7) Base CLUT Register Offset */
#define LCDC_BASECLUT8_REG_OFST        (0x620)             /**< (LCDC_BASECLUT8) Base CLUT Register Offset */
#define LCDC_BASECLUT9_REG_OFST        (0x624)             /**< (LCDC_BASECLUT9) Base CLUT Register Offset */
#define LCDC_BASECLUT10_REG_OFST       (0x628)             /**< (LCDC_BASECLUT10) Base CLUT Register Offset */
#define LCDC_BASECLUT11_REG_OFST       (0x62C)             /**< (LCDC_BASECLUT11) Base CLUT Register Offset */
#define LCDC_BASECLUT12_REG_OFST       (0x630)             /**< (LCDC_BASECLUT12) Base CLUT Register Offset */
#define LCDC_BASECLUT13_REG_OFST       (0x634)             /**< (LCDC_BASECLUT13) Base CLUT Register Offset */
#define LCDC_BASECLUT14_REG_OFST       (0x638)             /**< (LCDC_BASECLUT14) Base CLUT Register Offset */
#define LCDC_BASECLUT15_REG_OFST       (0x63C)             /**< (LCDC_BASECLUT15) Base CLUT Register Offset */
#define LCDC_BASECLUT16_REG_OFST       (0x640)             /**< (LCDC_BASECLUT16) Base CLUT Register Offset */
#define LCDC_BASECLUT17_REG_OFST       (0x644)             /**< (LCDC_BASECLUT17) Base CLUT Register Offset */
#define LCDC_BASECLUT18_REG_OFST       (0x648)             /**< (LCDC_BASECLUT18) Base CLUT Register Offset */
#define LCDC_BASECLUT19_REG_OFST       (0x64C)             /**< (LCDC_BASECLUT19) Base CLUT Register Offset */
#define LCDC_BASECLUT20_REG_OFST       (0x650)             /**< (LCDC_BASECLUT20) Base CLUT Register Offset */
#define LCDC_BASECLUT21_REG_OFST       (0x654)             /**< (LCDC_BASECLUT21) Base CLUT Register Offset */
#define LCDC_BASECLUT22_REG_OFST       (0x658)             /**< (LCDC_BASECLUT22) Base CLUT Register Offset */
#define LCDC_BASECLUT23_REG_OFST       (0x65C)             /**< (LCDC_BASECLUT23) Base CLUT Register Offset */
#define LCDC_BASECLUT24_REG_OFST       (0x660)             /**< (LCDC_BASECLUT24) Base CLUT Register Offset */
#define LCDC_BASECLUT25_REG_OFST       (0x664)             /**< (LCDC_BASECLUT25) Base CLUT Register Offset */
#define LCDC_BASECLUT26_REG_OFST       (0x668)             /**< (LCDC_BASECLUT26) Base CLUT Register Offset */
#define LCDC_BASECLUT27_REG_OFST       (0x66C)             /**< (LCDC_BASECLUT27) Base CLUT Register Offset */
#define LCDC_BASECLUT28_REG_OFST       (0x670)             /**< (LCDC_BASECLUT28) Base CLUT Register Offset */
#define LCDC_BASECLUT29_REG_OFST       (0x674)             /**< (LCDC_BASECLUT29) Base CLUT Register Offset */
#define LCDC_BASECLUT30_REG_OFST       (0x678)             /**< (LCDC_BASECLUT30) Base CLUT Register Offset */
#define LCDC_BASECLUT31_REG_OFST       (0x67C)             /**< (LCDC_BASECLUT31) Base CLUT Register Offset */
#define LCDC_BASECLUT32_REG_OFST       (0x680)             /**< (LCDC_BASECLUT32) Base CLUT Register Offset */
#define LCDC_BASECLUT33_REG_OFST       (0x684)             /**< (LCDC_BASECLUT33) Base CLUT Register Offset */
#define LCDC_BASECLUT34_REG_OFST       (0x688)             /**< (LCDC_BASECLUT34) Base CLUT Register Offset */
#define LCDC_BASECLUT35_REG_OFST       (0x68C)             /**< (LCDC_BASECLUT35) Base CLUT Register Offset */
#define LCDC_BASECLUT36_REG_OFST       (0x690)             /**< (LCDC_BASECLUT36) Base CLUT Register Offset */
#define LCDC_BASECLUT37_REG_OFST       (0x694)             /**< (LCDC_BASECLUT37) Base CLUT Register Offset */
#define LCDC_BASECLUT38_REG_OFST       (0x698)             /**< (LCDC_BASECLUT38) Base CLUT Register Offset */
#define LCDC_BASECLUT39_REG_OFST       (0x69C)             /**< (LCDC_BASECLUT39) Base CLUT Register Offset */
#define LCDC_BASECLUT40_REG_OFST       (0x6A0)             /**< (LCDC_BASECLUT40) Base CLUT Register Offset */
#define LCDC_BASECLUT41_REG_OFST       (0x6A4)             /**< (LCDC_BASECLUT41) Base CLUT Register Offset */
#define LCDC_BASECLUT42_REG_OFST       (0x6A8)             /**< (LCDC_BASECLUT42) Base CLUT Register Offset */
#define LCDC_BASECLUT43_REG_OFST       (0x6AC)             /**< (LCDC_BASECLUT43) Base CLUT Register Offset */
#define LCDC_BASECLUT44_REG_OFST       (0x6B0)             /**< (LCDC_BASECLUT44) Base CLUT Register Offset */
#define LCDC_BASECLUT45_REG_OFST       (0x6B4)             /**< (LCDC_BASECLUT45) Base CLUT Register Offset */
#define LCDC_BASECLUT46_REG_OFST       (0x6B8)             /**< (LCDC_BASECLUT46) Base CLUT Register Offset */
#define LCDC_BASECLUT47_REG_OFST       (0x6BC)             /**< (LCDC_BASECLUT47) Base CLUT Register Offset */
#define LCDC_BASECLUT48_REG_OFST       (0x6C0)             /**< (LCDC_BASECLUT48) Base CLUT Register Offset */
#define LCDC_BASECLUT49_REG_OFST       (0x6C4)             /**< (LCDC_BASECLUT49) Base CLUT Register Offset */
#define LCDC_BASECLUT50_REG_OFST       (0x6C8)             /**< (LCDC_BASECLUT50) Base CLUT Register Offset */
#define LCDC_BASECLUT51_REG_OFST       (0x6CC)             /**< (LCDC_BASECLUT51) Base CLUT Register Offset */
#define LCDC_BASECLUT52_REG_OFST       (0x6D0)             /**< (LCDC_BASECLUT52) Base CLUT Register Offset */
#define LCDC_BASECLUT53_REG_OFST       (0x6D4)             /**< (LCDC_BASECLUT53) Base CLUT Register Offset */
#define LCDC_BASECLUT54_REG_OFST       (0x6D8)             /**< (LCDC_BASECLUT54) Base CLUT Register Offset */
#define LCDC_BASECLUT55_REG_OFST       (0x6DC)             /**< (LCDC_BASECLUT55) Base CLUT Register Offset */
#define LCDC_BASECLUT56_REG_OFST       (0x6E0)             /**< (LCDC_BASECLUT56) Base CLUT Register Offset */
#define LCDC_BASECLUT57_REG_OFST       (0x6E4)             /**< (LCDC_BASECLUT57) Base CLUT Register Offset */
#define LCDC_BASECLUT58_REG_OFST       (0x6E8)             /**< (LCDC_BASECLUT58) Base CLUT Register Offset */
#define LCDC_BASECLUT59_REG_OFST       (0x6EC)             /**< (LCDC_BASECLUT59) Base CLUT Register Offset */
#define LCDC_BASECLUT60_REG_OFST       (0x6F0)             /**< (LCDC_BASECLUT60) Base CLUT Register Offset */
#define LCDC_BASECLUT61_REG_OFST       (0x6F4)             /**< (LCDC_BASECLUT61) Base CLUT Register Offset */
#define LCDC_BASECLUT62_REG_OFST       (0x6F8)             /**< (LCDC_BASECLUT62) Base CLUT Register Offset */
#define LCDC_BASECLUT63_REG_OFST       (0x6FC)             /**< (LCDC_BASECLUT63) Base CLUT Register Offset */
#define LCDC_BASECLUT64_REG_OFST       (0x700)             /**< (LCDC_BASECLUT64) Base CLUT Register Offset */
#define LCDC_BASECLUT65_REG_OFST       (0x704)             /**< (LCDC_BASECLUT65) Base CLUT Register Offset */
#define LCDC_BASECLUT66_REG_OFST       (0x708)             /**< (LCDC_BASECLUT66) Base CLUT Register Offset */
#define LCDC_BASECLUT67_REG_OFST       (0x70C)             /**< (LCDC_BASECLUT67) Base CLUT Register Offset */
#define LCDC_BASECLUT68_REG_OFST       (0x710)             /**< (LCDC_BASECLUT68) Base CLUT Register Offset */
#define LCDC_BASECLUT69_REG_OFST       (0x714)             /**< (LCDC_BASECLUT69) Base CLUT Register Offset */
#define LCDC_BASECLUT70_REG_OFST       (0x718)             /**< (LCDC_BASECLUT70) Base CLUT Register Offset */
#define LCDC_BASECLUT71_REG_OFST       (0x71C)             /**< (LCDC_BASECLUT71) Base CLUT Register Offset */
#define LCDC_BASECLUT72_REG_OFST       (0x720)             /**< (LCDC_BASECLUT72) Base CLUT Register Offset */
#define LCDC_BASECLUT73_REG_OFST       (0x724)             /**< (LCDC_BASECLUT73) Base CLUT Register Offset */
#define LCDC_BASECLUT74_REG_OFST       (0x728)             /**< (LCDC_BASECLUT74) Base CLUT Register Offset */
#define LCDC_BASECLUT75_REG_OFST       (0x72C)             /**< (LCDC_BASECLUT75) Base CLUT Register Offset */
#define LCDC_BASECLUT76_REG_OFST       (0x730)             /**< (LCDC_BASECLUT76) Base CLUT Register Offset */
#define LCDC_BASECLUT77_REG_OFST       (0x734)             /**< (LCDC_BASECLUT77) Base CLUT Register Offset */
#define LCDC_BASECLUT78_REG_OFST       (0x738)             /**< (LCDC_BASECLUT78) Base CLUT Register Offset */
#define LCDC_BASECLUT79_REG_OFST       (0x73C)             /**< (LCDC_BASECLUT79) Base CLUT Register Offset */
#define LCDC_BASECLUT80_REG_OFST       (0x740)             /**< (LCDC_BASECLUT80) Base CLUT Register Offset */
#define LCDC_BASECLUT81_REG_OFST       (0x744)             /**< (LCDC_BASECLUT81) Base CLUT Register Offset */
#define LCDC_BASECLUT82_REG_OFST       (0x748)             /**< (LCDC_BASECLUT82) Base CLUT Register Offset */
#define LCDC_BASECLUT83_REG_OFST       (0x74C)             /**< (LCDC_BASECLUT83) Base CLUT Register Offset */
#define LCDC_BASECLUT84_REG_OFST       (0x750)             /**< (LCDC_BASECLUT84) Base CLUT Register Offset */
#define LCDC_BASECLUT85_REG_OFST       (0x754)             /**< (LCDC_BASECLUT85) Base CLUT Register Offset */
#define LCDC_BASECLUT86_REG_OFST       (0x758)             /**< (LCDC_BASECLUT86) Base CLUT Register Offset */
#define LCDC_BASECLUT87_REG_OFST       (0x75C)             /**< (LCDC_BASECLUT87) Base CLUT Register Offset */
#define LCDC_BASECLUT88_REG_OFST       (0x760)             /**< (LCDC_BASECLUT88) Base CLUT Register Offset */
#define LCDC_BASECLUT89_REG_OFST       (0x764)             /**< (LCDC_BASECLUT89) Base CLUT Register Offset */
#define LCDC_BASECLUT90_REG_OFST       (0x768)             /**< (LCDC_BASECLUT90) Base CLUT Register Offset */
#define LCDC_BASECLUT91_REG_OFST       (0x76C)             /**< (LCDC_BASECLUT91) Base CLUT Register Offset */
#define LCDC_BASECLUT92_REG_OFST       (0x770)             /**< (LCDC_BASECLUT92) Base CLUT Register Offset */
#define LCDC_BASECLUT93_REG_OFST       (0x774)             /**< (LCDC_BASECLUT93) Base CLUT Register Offset */
#define LCDC_BASECLUT94_REG_OFST       (0x778)             /**< (LCDC_BASECLUT94) Base CLUT Register Offset */
#define LCDC_BASECLUT95_REG_OFST       (0x77C)             /**< (LCDC_BASECLUT95) Base CLUT Register Offset */
#define LCDC_BASECLUT96_REG_OFST       (0x780)             /**< (LCDC_BASECLUT96) Base CLUT Register Offset */
#define LCDC_BASECLUT97_REG_OFST       (0x784)             /**< (LCDC_BASECLUT97) Base CLUT Register Offset */
#define LCDC_BASECLUT98_REG_OFST       (0x788)             /**< (LCDC_BASECLUT98) Base CLUT Register Offset */
#define LCDC_BASECLUT99_REG_OFST       (0x78C)             /**< (LCDC_BASECLUT99) Base CLUT Register Offset */
#define LCDC_BASECLUT100_REG_OFST      (0x790)             /**< (LCDC_BASECLUT100) Base CLUT Register Offset */
#define LCDC_BASECLUT101_REG_OFST      (0x794)             /**< (LCDC_BASECLUT101) Base CLUT Register Offset */
#define LCDC_BASECLUT102_REG_OFST      (0x798)             /**< (LCDC_BASECLUT102) Base CLUT Register Offset */
#define LCDC_BASECLUT103_REG_OFST      (0x79C)             /**< (LCDC_BASECLUT103) Base CLUT Register Offset */
#define LCDC_BASECLUT104_REG_OFST      (0x7A0)             /**< (LCDC_BASECLUT104) Base CLUT Register Offset */
#define LCDC_BASECLUT105_REG_OFST      (0x7A4)             /**< (LCDC_BASECLUT105) Base CLUT Register Offset */
#define LCDC_BASECLUT106_REG_OFST      (0x7A8)             /**< (LCDC_BASECLUT106) Base CLUT Register Offset */
#define LCDC_BASECLUT107_REG_OFST      (0x7AC)             /**< (LCDC_BASECLUT107) Base CLUT Register Offset */
#define LCDC_BASECLUT108_REG_OFST      (0x7B0)             /**< (LCDC_BASECLUT108) Base CLUT Register Offset */
#define LCDC_BASECLUT109_REG_OFST      (0x7B4)             /**< (LCDC_BASECLUT109) Base CLUT Register Offset */
#define LCDC_BASECLUT110_REG_OFST      (0x7B8)             /**< (LCDC_BASECLUT110) Base CLUT Register Offset */
#define LCDC_BASECLUT111_REG_OFST      (0x7BC)             /**< (LCDC_BASECLUT111) Base CLUT Register Offset */
#define LCDC_BASECLUT112_REG_OFST      (0x7C0)             /**< (LCDC_BASECLUT112) Base CLUT Register Offset */
#define LCDC_BASECLUT113_REG_OFST      (0x7C4)             /**< (LCDC_BASECLUT113) Base CLUT Register Offset */
#define LCDC_BASECLUT114_REG_OFST      (0x7C8)             /**< (LCDC_BASECLUT114) Base CLUT Register Offset */
#define LCDC_BASECLUT115_REG_OFST      (0x7CC)             /**< (LCDC_BASECLUT115) Base CLUT Register Offset */
#define LCDC_BASECLUT116_REG_OFST      (0x7D0)             /**< (LCDC_BASECLUT116) Base CLUT Register Offset */
#define LCDC_BASECLUT117_REG_OFST      (0x7D4)             /**< (LCDC_BASECLUT117) Base CLUT Register Offset */
#define LCDC_BASECLUT118_REG_OFST      (0x7D8)             /**< (LCDC_BASECLUT118) Base CLUT Register Offset */
#define LCDC_BASECLUT119_REG_OFST      (0x7DC)             /**< (LCDC_BASECLUT119) Base CLUT Register Offset */
#define LCDC_BASECLUT120_REG_OFST      (0x7E0)             /**< (LCDC_BASECLUT120) Base CLUT Register Offset */
#define LCDC_BASECLUT121_REG_OFST      (0x7E4)             /**< (LCDC_BASECLUT121) Base CLUT Register Offset */
#define LCDC_BASECLUT122_REG_OFST      (0x7E8)             /**< (LCDC_BASECLUT122) Base CLUT Register Offset */
#define LCDC_BASECLUT123_REG_OFST      (0x7EC)             /**< (LCDC_BASECLUT123) Base CLUT Register Offset */
#define LCDC_BASECLUT124_REG_OFST      (0x7F0)             /**< (LCDC_BASECLUT124) Base CLUT Register Offset */
#define LCDC_BASECLUT125_REG_OFST      (0x7F4)             /**< (LCDC_BASECLUT125) Base CLUT Register Offset */
#define LCDC_BASECLUT126_REG_OFST      (0x7F8)             /**< (LCDC_BASECLUT126) Base CLUT Register Offset */
#define LCDC_BASECLUT127_REG_OFST      (0x7FC)             /**< (LCDC_BASECLUT127) Base CLUT Register Offset */
#define LCDC_BASECLUT128_REG_OFST      (0x800)             /**< (LCDC_BASECLUT128) Base CLUT Register Offset */
#define LCDC_BASECLUT129_REG_OFST      (0x804)             /**< (LCDC_BASECLUT129) Base CLUT Register Offset */
#define LCDC_BASECLUT130_REG_OFST      (0x808)             /**< (LCDC_BASECLUT130) Base CLUT Register Offset */
#define LCDC_BASECLUT131_REG_OFST      (0x80C)             /**< (LCDC_BASECLUT131) Base CLUT Register Offset */
#define LCDC_BASECLUT132_REG_OFST      (0x810)             /**< (LCDC_BASECLUT132) Base CLUT Register Offset */
#define LCDC_BASECLUT133_REG_OFST      (0x814)             /**< (LCDC_BASECLUT133) Base CLUT Register Offset */
#define LCDC_BASECLUT134_REG_OFST      (0x818)             /**< (LCDC_BASECLUT134) Base CLUT Register Offset */
#define LCDC_BASECLUT135_REG_OFST      (0x81C)             /**< (LCDC_BASECLUT135) Base CLUT Register Offset */
#define LCDC_BASECLUT136_REG_OFST      (0x820)             /**< (LCDC_BASECLUT136) Base CLUT Register Offset */
#define LCDC_BASECLUT137_REG_OFST      (0x824)             /**< (LCDC_BASECLUT137) Base CLUT Register Offset */
#define LCDC_BASECLUT138_REG_OFST      (0x828)             /**< (LCDC_BASECLUT138) Base CLUT Register Offset */
#define LCDC_BASECLUT139_REG_OFST      (0x82C)             /**< (LCDC_BASECLUT139) Base CLUT Register Offset */
#define LCDC_BASECLUT140_REG_OFST      (0x830)             /**< (LCDC_BASECLUT140) Base CLUT Register Offset */
#define LCDC_BASECLUT141_REG_OFST      (0x834)             /**< (LCDC_BASECLUT141) Base CLUT Register Offset */
#define LCDC_BASECLUT142_REG_OFST      (0x838)             /**< (LCDC_BASECLUT142) Base CLUT Register Offset */
#define LCDC_BASECLUT143_REG_OFST      (0x83C)             /**< (LCDC_BASECLUT143) Base CLUT Register Offset */
#define LCDC_BASECLUT144_REG_OFST      (0x840)             /**< (LCDC_BASECLUT144) Base CLUT Register Offset */
#define LCDC_BASECLUT145_REG_OFST      (0x844)             /**< (LCDC_BASECLUT145) Base CLUT Register Offset */
#define LCDC_BASECLUT146_REG_OFST      (0x848)             /**< (LCDC_BASECLUT146) Base CLUT Register Offset */
#define LCDC_BASECLUT147_REG_OFST      (0x84C)             /**< (LCDC_BASECLUT147) Base CLUT Register Offset */
#define LCDC_BASECLUT148_REG_OFST      (0x850)             /**< (LCDC_BASECLUT148) Base CLUT Register Offset */
#define LCDC_BASECLUT149_REG_OFST      (0x854)             /**< (LCDC_BASECLUT149) Base CLUT Register Offset */
#define LCDC_BASECLUT150_REG_OFST      (0x858)             /**< (LCDC_BASECLUT150) Base CLUT Register Offset */
#define LCDC_BASECLUT151_REG_OFST      (0x85C)             /**< (LCDC_BASECLUT151) Base CLUT Register Offset */
#define LCDC_BASECLUT152_REG_OFST      (0x860)             /**< (LCDC_BASECLUT152) Base CLUT Register Offset */
#define LCDC_BASECLUT153_REG_OFST      (0x864)             /**< (LCDC_BASECLUT153) Base CLUT Register Offset */
#define LCDC_BASECLUT154_REG_OFST      (0x868)             /**< (LCDC_BASECLUT154) Base CLUT Register Offset */
#define LCDC_BASECLUT155_REG_OFST      (0x86C)             /**< (LCDC_BASECLUT155) Base CLUT Register Offset */
#define LCDC_BASECLUT156_REG_OFST      (0x870)             /**< (LCDC_BASECLUT156) Base CLUT Register Offset */
#define LCDC_BASECLUT157_REG_OFST      (0x874)             /**< (LCDC_BASECLUT157) Base CLUT Register Offset */
#define LCDC_BASECLUT158_REG_OFST      (0x878)             /**< (LCDC_BASECLUT158) Base CLUT Register Offset */
#define LCDC_BASECLUT159_REG_OFST      (0x87C)             /**< (LCDC_BASECLUT159) Base CLUT Register Offset */
#define LCDC_BASECLUT160_REG_OFST      (0x880)             /**< (LCDC_BASECLUT160) Base CLUT Register Offset */
#define LCDC_BASECLUT161_REG_OFST      (0x884)             /**< (LCDC_BASECLUT161) Base CLUT Register Offset */
#define LCDC_BASECLUT162_REG_OFST      (0x888)             /**< (LCDC_BASECLUT162) Base CLUT Register Offset */
#define LCDC_BASECLUT163_REG_OFST      (0x88C)             /**< (LCDC_BASECLUT163) Base CLUT Register Offset */
#define LCDC_BASECLUT164_REG_OFST      (0x890)             /**< (LCDC_BASECLUT164) Base CLUT Register Offset */
#define LCDC_BASECLUT165_REG_OFST      (0x894)             /**< (LCDC_BASECLUT165) Base CLUT Register Offset */
#define LCDC_BASECLUT166_REG_OFST      (0x898)             /**< (LCDC_BASECLUT166) Base CLUT Register Offset */
#define LCDC_BASECLUT167_REG_OFST      (0x89C)             /**< (LCDC_BASECLUT167) Base CLUT Register Offset */
#define LCDC_BASECLUT168_REG_OFST      (0x8A0)             /**< (LCDC_BASECLUT168) Base CLUT Register Offset */
#define LCDC_BASECLUT169_REG_OFST      (0x8A4)             /**< (LCDC_BASECLUT169) Base CLUT Register Offset */
#define LCDC_BASECLUT170_REG_OFST      (0x8A8)             /**< (LCDC_BASECLUT170) Base CLUT Register Offset */
#define LCDC_BASECLUT171_REG_OFST      (0x8AC)             /**< (LCDC_BASECLUT171) Base CLUT Register Offset */
#define LCDC_BASECLUT172_REG_OFST      (0x8B0)             /**< (LCDC_BASECLUT172) Base CLUT Register Offset */
#define LCDC_BASECLUT173_REG_OFST      (0x8B4)             /**< (LCDC_BASECLUT173) Base CLUT Register Offset */
#define LCDC_BASECLUT174_REG_OFST      (0x8B8)             /**< (LCDC_BASECLUT174) Base CLUT Register Offset */
#define LCDC_BASECLUT175_REG_OFST      (0x8BC)             /**< (LCDC_BASECLUT175) Base CLUT Register Offset */
#define LCDC_BASECLUT176_REG_OFST      (0x8C0)             /**< (LCDC_BASECLUT176) Base CLUT Register Offset */
#define LCDC_BASECLUT177_REG_OFST      (0x8C4)             /**< (LCDC_BASECLUT177) Base CLUT Register Offset */
#define LCDC_BASECLUT178_REG_OFST      (0x8C8)             /**< (LCDC_BASECLUT178) Base CLUT Register Offset */
#define LCDC_BASECLUT179_REG_OFST      (0x8CC)             /**< (LCDC_BASECLUT179) Base CLUT Register Offset */
#define LCDC_BASECLUT180_REG_OFST      (0x8D0)             /**< (LCDC_BASECLUT180) Base CLUT Register Offset */
#define LCDC_BASECLUT181_REG_OFST      (0x8D4)             /**< (LCDC_BASECLUT181) Base CLUT Register Offset */
#define LCDC_BASECLUT182_REG_OFST      (0x8D8)             /**< (LCDC_BASECLUT182) Base CLUT Register Offset */
#define LCDC_BASECLUT183_REG_OFST      (0x8DC)             /**< (LCDC_BASECLUT183) Base CLUT Register Offset */
#define LCDC_BASECLUT184_REG_OFST      (0x8E0)             /**< (LCDC_BASECLUT184) Base CLUT Register Offset */
#define LCDC_BASECLUT185_REG_OFST      (0x8E4)             /**< (LCDC_BASECLUT185) Base CLUT Register Offset */
#define LCDC_BASECLUT186_REG_OFST      (0x8E8)             /**< (LCDC_BASECLUT186) Base CLUT Register Offset */
#define LCDC_BASECLUT187_REG_OFST      (0x8EC)             /**< (LCDC_BASECLUT187) Base CLUT Register Offset */
#define LCDC_BASECLUT188_REG_OFST      (0x8F0)             /**< (LCDC_BASECLUT188) Base CLUT Register Offset */
#define LCDC_BASECLUT189_REG_OFST      (0x8F4)             /**< (LCDC_BASECLUT189) Base CLUT Register Offset */
#define LCDC_BASECLUT190_REG_OFST      (0x8F8)             /**< (LCDC_BASECLUT190) Base CLUT Register Offset */
#define LCDC_BASECLUT191_REG_OFST      (0x8FC)             /**< (LCDC_BASECLUT191) Base CLUT Register Offset */
#define LCDC_BASECLUT192_REG_OFST      (0x900)             /**< (LCDC_BASECLUT192) Base CLUT Register Offset */
#define LCDC_BASECLUT193_REG_OFST      (0x904)             /**< (LCDC_BASECLUT193) Base CLUT Register Offset */
#define LCDC_BASECLUT194_REG_OFST      (0x908)             /**< (LCDC_BASECLUT194) Base CLUT Register Offset */
#define LCDC_BASECLUT195_REG_OFST      (0x90C)             /**< (LCDC_BASECLUT195) Base CLUT Register Offset */
#define LCDC_BASECLUT196_REG_OFST      (0x910)             /**< (LCDC_BASECLUT196) Base CLUT Register Offset */
#define LCDC_BASECLUT197_REG_OFST      (0x914)             /**< (LCDC_BASECLUT197) Base CLUT Register Offset */
#define LCDC_BASECLUT198_REG_OFST      (0x918)             /**< (LCDC_BASECLUT198) Base CLUT Register Offset */
#define LCDC_BASECLUT199_REG_OFST      (0x91C)             /**< (LCDC_BASECLUT199) Base CLUT Register Offset */
#define LCDC_BASECLUT200_REG_OFST      (0x920)             /**< (LCDC_BASECLUT200) Base CLUT Register Offset */
#define LCDC_BASECLUT201_REG_OFST      (0x924)             /**< (LCDC_BASECLUT201) Base CLUT Register Offset */
#define LCDC_BASECLUT202_REG_OFST      (0x928)             /**< (LCDC_BASECLUT202) Base CLUT Register Offset */
#define LCDC_BASECLUT203_REG_OFST      (0x92C)             /**< (LCDC_BASECLUT203) Base CLUT Register Offset */
#define LCDC_BASECLUT204_REG_OFST      (0x930)             /**< (LCDC_BASECLUT204) Base CLUT Register Offset */
#define LCDC_BASECLUT205_REG_OFST      (0x934)             /**< (LCDC_BASECLUT205) Base CLUT Register Offset */
#define LCDC_BASECLUT206_REG_OFST      (0x938)             /**< (LCDC_BASECLUT206) Base CLUT Register Offset */
#define LCDC_BASECLUT207_REG_OFST      (0x93C)             /**< (LCDC_BASECLUT207) Base CLUT Register Offset */
#define LCDC_BASECLUT208_REG_OFST      (0x940)             /**< (LCDC_BASECLUT208) Base CLUT Register Offset */
#define LCDC_BASECLUT209_REG_OFST      (0x944)             /**< (LCDC_BASECLUT209) Base CLUT Register Offset */
#define LCDC_BASECLUT210_REG_OFST      (0x948)             /**< (LCDC_BASECLUT210) Base CLUT Register Offset */
#define LCDC_BASECLUT211_REG_OFST      (0x94C)             /**< (LCDC_BASECLUT211) Base CLUT Register Offset */
#define LCDC_BASECLUT212_REG_OFST      (0x950)             /**< (LCDC_BASECLUT212) Base CLUT Register Offset */
#define LCDC_BASECLUT213_REG_OFST      (0x954)             /**< (LCDC_BASECLUT213) Base CLUT Register Offset */
#define LCDC_BASECLUT214_REG_OFST      (0x958)             /**< (LCDC_BASECLUT214) Base CLUT Register Offset */
#define LCDC_BASECLUT215_REG_OFST      (0x95C)             /**< (LCDC_BASECLUT215) Base CLUT Register Offset */
#define LCDC_BASECLUT216_REG_OFST      (0x960)             /**< (LCDC_BASECLUT216) Base CLUT Register Offset */
#define LCDC_BASECLUT217_REG_OFST      (0x964)             /**< (LCDC_BASECLUT217) Base CLUT Register Offset */
#define LCDC_BASECLUT218_REG_OFST      (0x968)             /**< (LCDC_BASECLUT218) Base CLUT Register Offset */
#define LCDC_BASECLUT219_REG_OFST      (0x96C)             /**< (LCDC_BASECLUT219) Base CLUT Register Offset */
#define LCDC_BASECLUT220_REG_OFST      (0x970)             /**< (LCDC_BASECLUT220) Base CLUT Register Offset */
#define LCDC_BASECLUT221_REG_OFST      (0x974)             /**< (LCDC_BASECLUT221) Base CLUT Register Offset */
#define LCDC_BASECLUT222_REG_OFST      (0x978)             /**< (LCDC_BASECLUT222) Base CLUT Register Offset */
#define LCDC_BASECLUT223_REG_OFST      (0x97C)             /**< (LCDC_BASECLUT223) Base CLUT Register Offset */
#define LCDC_BASECLUT224_REG_OFST      (0x980)             /**< (LCDC_BASECLUT224) Base CLUT Register Offset */
#define LCDC_BASECLUT225_REG_OFST      (0x984)             /**< (LCDC_BASECLUT225) Base CLUT Register Offset */
#define LCDC_BASECLUT226_REG_OFST      (0x988)             /**< (LCDC_BASECLUT226) Base CLUT Register Offset */
#define LCDC_BASECLUT227_REG_OFST      (0x98C)             /**< (LCDC_BASECLUT227) Base CLUT Register Offset */
#define LCDC_BASECLUT228_REG_OFST      (0x990)             /**< (LCDC_BASECLUT228) Base CLUT Register Offset */
#define LCDC_BASECLUT229_REG_OFST      (0x994)             /**< (LCDC_BASECLUT229) Base CLUT Register Offset */
#define LCDC_BASECLUT230_REG_OFST      (0x998)             /**< (LCDC_BASECLUT230) Base CLUT Register Offset */
#define LCDC_BASECLUT231_REG_OFST      (0x99C)             /**< (LCDC_BASECLUT231) Base CLUT Register Offset */
#define LCDC_BASECLUT232_REG_OFST      (0x9A0)             /**< (LCDC_BASECLUT232) Base CLUT Register Offset */
#define LCDC_BASECLUT233_REG_OFST      (0x9A4)             /**< (LCDC_BASECLUT233) Base CLUT Register Offset */
#define LCDC_BASECLUT234_REG_OFST      (0x9A8)             /**< (LCDC_BASECLUT234) Base CLUT Register Offset */
#define LCDC_BASECLUT235_REG_OFST      (0x9AC)             /**< (LCDC_BASECLUT235) Base CLUT Register Offset */
#define LCDC_BASECLUT236_REG_OFST      (0x9B0)             /**< (LCDC_BASECLUT236) Base CLUT Register Offset */
#define LCDC_BASECLUT237_REG_OFST      (0x9B4)             /**< (LCDC_BASECLUT237) Base CLUT Register Offset */
#define LCDC_BASECLUT238_REG_OFST      (0x9B8)             /**< (LCDC_BASECLUT238) Base CLUT Register Offset */
#define LCDC_BASECLUT239_REG_OFST      (0x9BC)             /**< (LCDC_BASECLUT239) Base CLUT Register Offset */
#define LCDC_BASECLUT240_REG_OFST      (0x9C0)             /**< (LCDC_BASECLUT240) Base CLUT Register Offset */
#define LCDC_BASECLUT241_REG_OFST      (0x9C4)             /**< (LCDC_BASECLUT241) Base CLUT Register Offset */
#define LCDC_BASECLUT242_REG_OFST      (0x9C8)             /**< (LCDC_BASECLUT242) Base CLUT Register Offset */
#define LCDC_BASECLUT243_REG_OFST      (0x9CC)             /**< (LCDC_BASECLUT243) Base CLUT Register Offset */
#define LCDC_BASECLUT244_REG_OFST      (0x9D0)             /**< (LCDC_BASECLUT244) Base CLUT Register Offset */
#define LCDC_BASECLUT245_REG_OFST      (0x9D4)             /**< (LCDC_BASECLUT245) Base CLUT Register Offset */
#define LCDC_BASECLUT246_REG_OFST      (0x9D8)             /**< (LCDC_BASECLUT246) Base CLUT Register Offset */
#define LCDC_BASECLUT247_REG_OFST      (0x9DC)             /**< (LCDC_BASECLUT247) Base CLUT Register Offset */
#define LCDC_BASECLUT248_REG_OFST      (0x9E0)             /**< (LCDC_BASECLUT248) Base CLUT Register Offset */
#define LCDC_BASECLUT249_REG_OFST      (0x9E4)             /**< (LCDC_BASECLUT249) Base CLUT Register Offset */
#define LCDC_BASECLUT250_REG_OFST      (0x9E8)             /**< (LCDC_BASECLUT250) Base CLUT Register Offset */
#define LCDC_BASECLUT251_REG_OFST      (0x9EC)             /**< (LCDC_BASECLUT251) Base CLUT Register Offset */
#define LCDC_BASECLUT252_REG_OFST      (0x9F0)             /**< (LCDC_BASECLUT252) Base CLUT Register Offset */
#define LCDC_BASECLUT253_REG_OFST      (0x9F4)             /**< (LCDC_BASECLUT253) Base CLUT Register Offset */
#define LCDC_BASECLUT254_REG_OFST      (0x9F8)             /**< (LCDC_BASECLUT254) Base CLUT Register Offset */
#define LCDC_BASECLUT255_REG_OFST      (0x9FC)             /**< (LCDC_BASECLUT255) Base CLUT Register Offset */
#define LCDC_OVR1CLUT_REG_OFST         (0xA00)             /**< (LCDC_OVR1CLUT) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT0_REG_OFST        (0xA00)             /**< (LCDC_OVR1CLUT0) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT1_REG_OFST        (0xA04)             /**< (LCDC_OVR1CLUT1) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT2_REG_OFST        (0xA08)             /**< (LCDC_OVR1CLUT2) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT3_REG_OFST        (0xA0C)             /**< (LCDC_OVR1CLUT3) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT4_REG_OFST        (0xA10)             /**< (LCDC_OVR1CLUT4) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT5_REG_OFST        (0xA14)             /**< (LCDC_OVR1CLUT5) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT6_REG_OFST        (0xA18)             /**< (LCDC_OVR1CLUT6) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT7_REG_OFST        (0xA1C)             /**< (LCDC_OVR1CLUT7) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT8_REG_OFST        (0xA20)             /**< (LCDC_OVR1CLUT8) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT9_REG_OFST        (0xA24)             /**< (LCDC_OVR1CLUT9) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT10_REG_OFST       (0xA28)             /**< (LCDC_OVR1CLUT10) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT11_REG_OFST       (0xA2C)             /**< (LCDC_OVR1CLUT11) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT12_REG_OFST       (0xA30)             /**< (LCDC_OVR1CLUT12) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT13_REG_OFST       (0xA34)             /**< (LCDC_OVR1CLUT13) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT14_REG_OFST       (0xA38)             /**< (LCDC_OVR1CLUT14) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT15_REG_OFST       (0xA3C)             /**< (LCDC_OVR1CLUT15) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT16_REG_OFST       (0xA40)             /**< (LCDC_OVR1CLUT16) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT17_REG_OFST       (0xA44)             /**< (LCDC_OVR1CLUT17) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT18_REG_OFST       (0xA48)             /**< (LCDC_OVR1CLUT18) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT19_REG_OFST       (0xA4C)             /**< (LCDC_OVR1CLUT19) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT20_REG_OFST       (0xA50)             /**< (LCDC_OVR1CLUT20) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT21_REG_OFST       (0xA54)             /**< (LCDC_OVR1CLUT21) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT22_REG_OFST       (0xA58)             /**< (LCDC_OVR1CLUT22) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT23_REG_OFST       (0xA5C)             /**< (LCDC_OVR1CLUT23) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT24_REG_OFST       (0xA60)             /**< (LCDC_OVR1CLUT24) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT25_REG_OFST       (0xA64)             /**< (LCDC_OVR1CLUT25) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT26_REG_OFST       (0xA68)             /**< (LCDC_OVR1CLUT26) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT27_REG_OFST       (0xA6C)             /**< (LCDC_OVR1CLUT27) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT28_REG_OFST       (0xA70)             /**< (LCDC_OVR1CLUT28) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT29_REG_OFST       (0xA74)             /**< (LCDC_OVR1CLUT29) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT30_REG_OFST       (0xA78)             /**< (LCDC_OVR1CLUT30) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT31_REG_OFST       (0xA7C)             /**< (LCDC_OVR1CLUT31) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT32_REG_OFST       (0xA80)             /**< (LCDC_OVR1CLUT32) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT33_REG_OFST       (0xA84)             /**< (LCDC_OVR1CLUT33) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT34_REG_OFST       (0xA88)             /**< (LCDC_OVR1CLUT34) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT35_REG_OFST       (0xA8C)             /**< (LCDC_OVR1CLUT35) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT36_REG_OFST       (0xA90)             /**< (LCDC_OVR1CLUT36) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT37_REG_OFST       (0xA94)             /**< (LCDC_OVR1CLUT37) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT38_REG_OFST       (0xA98)             /**< (LCDC_OVR1CLUT38) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT39_REG_OFST       (0xA9C)             /**< (LCDC_OVR1CLUT39) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT40_REG_OFST       (0xAA0)             /**< (LCDC_OVR1CLUT40) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT41_REG_OFST       (0xAA4)             /**< (LCDC_OVR1CLUT41) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT42_REG_OFST       (0xAA8)             /**< (LCDC_OVR1CLUT42) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT43_REG_OFST       (0xAAC)             /**< (LCDC_OVR1CLUT43) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT44_REG_OFST       (0xAB0)             /**< (LCDC_OVR1CLUT44) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT45_REG_OFST       (0xAB4)             /**< (LCDC_OVR1CLUT45) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT46_REG_OFST       (0xAB8)             /**< (LCDC_OVR1CLUT46) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT47_REG_OFST       (0xABC)             /**< (LCDC_OVR1CLUT47) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT48_REG_OFST       (0xAC0)             /**< (LCDC_OVR1CLUT48) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT49_REG_OFST       (0xAC4)             /**< (LCDC_OVR1CLUT49) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT50_REG_OFST       (0xAC8)             /**< (LCDC_OVR1CLUT50) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT51_REG_OFST       (0xACC)             /**< (LCDC_OVR1CLUT51) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT52_REG_OFST       (0xAD0)             /**< (LCDC_OVR1CLUT52) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT53_REG_OFST       (0xAD4)             /**< (LCDC_OVR1CLUT53) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT54_REG_OFST       (0xAD8)             /**< (LCDC_OVR1CLUT54) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT55_REG_OFST       (0xADC)             /**< (LCDC_OVR1CLUT55) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT56_REG_OFST       (0xAE0)             /**< (LCDC_OVR1CLUT56) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT57_REG_OFST       (0xAE4)             /**< (LCDC_OVR1CLUT57) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT58_REG_OFST       (0xAE8)             /**< (LCDC_OVR1CLUT58) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT59_REG_OFST       (0xAEC)             /**< (LCDC_OVR1CLUT59) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT60_REG_OFST       (0xAF0)             /**< (LCDC_OVR1CLUT60) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT61_REG_OFST       (0xAF4)             /**< (LCDC_OVR1CLUT61) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT62_REG_OFST       (0xAF8)             /**< (LCDC_OVR1CLUT62) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT63_REG_OFST       (0xAFC)             /**< (LCDC_OVR1CLUT63) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT64_REG_OFST       (0xB00)             /**< (LCDC_OVR1CLUT64) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT65_REG_OFST       (0xB04)             /**< (LCDC_OVR1CLUT65) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT66_REG_OFST       (0xB08)             /**< (LCDC_OVR1CLUT66) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT67_REG_OFST       (0xB0C)             /**< (LCDC_OVR1CLUT67) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT68_REG_OFST       (0xB10)             /**< (LCDC_OVR1CLUT68) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT69_REG_OFST       (0xB14)             /**< (LCDC_OVR1CLUT69) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT70_REG_OFST       (0xB18)             /**< (LCDC_OVR1CLUT70) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT71_REG_OFST       (0xB1C)             /**< (LCDC_OVR1CLUT71) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT72_REG_OFST       (0xB20)             /**< (LCDC_OVR1CLUT72) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT73_REG_OFST       (0xB24)             /**< (LCDC_OVR1CLUT73) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT74_REG_OFST       (0xB28)             /**< (LCDC_OVR1CLUT74) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT75_REG_OFST       (0xB2C)             /**< (LCDC_OVR1CLUT75) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT76_REG_OFST       (0xB30)             /**< (LCDC_OVR1CLUT76) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT77_REG_OFST       (0xB34)             /**< (LCDC_OVR1CLUT77) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT78_REG_OFST       (0xB38)             /**< (LCDC_OVR1CLUT78) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT79_REG_OFST       (0xB3C)             /**< (LCDC_OVR1CLUT79) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT80_REG_OFST       (0xB40)             /**< (LCDC_OVR1CLUT80) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT81_REG_OFST       (0xB44)             /**< (LCDC_OVR1CLUT81) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT82_REG_OFST       (0xB48)             /**< (LCDC_OVR1CLUT82) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT83_REG_OFST       (0xB4C)             /**< (LCDC_OVR1CLUT83) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT84_REG_OFST       (0xB50)             /**< (LCDC_OVR1CLUT84) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT85_REG_OFST       (0xB54)             /**< (LCDC_OVR1CLUT85) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT86_REG_OFST       (0xB58)             /**< (LCDC_OVR1CLUT86) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT87_REG_OFST       (0xB5C)             /**< (LCDC_OVR1CLUT87) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT88_REG_OFST       (0xB60)             /**< (LCDC_OVR1CLUT88) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT89_REG_OFST       (0xB64)             /**< (LCDC_OVR1CLUT89) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT90_REG_OFST       (0xB68)             /**< (LCDC_OVR1CLUT90) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT91_REG_OFST       (0xB6C)             /**< (LCDC_OVR1CLUT91) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT92_REG_OFST       (0xB70)             /**< (LCDC_OVR1CLUT92) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT93_REG_OFST       (0xB74)             /**< (LCDC_OVR1CLUT93) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT94_REG_OFST       (0xB78)             /**< (LCDC_OVR1CLUT94) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT95_REG_OFST       (0xB7C)             /**< (LCDC_OVR1CLUT95) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT96_REG_OFST       (0xB80)             /**< (LCDC_OVR1CLUT96) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT97_REG_OFST       (0xB84)             /**< (LCDC_OVR1CLUT97) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT98_REG_OFST       (0xB88)             /**< (LCDC_OVR1CLUT98) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT99_REG_OFST       (0xB8C)             /**< (LCDC_OVR1CLUT99) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT100_REG_OFST      (0xB90)             /**< (LCDC_OVR1CLUT100) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT101_REG_OFST      (0xB94)             /**< (LCDC_OVR1CLUT101) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT102_REG_OFST      (0xB98)             /**< (LCDC_OVR1CLUT102) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT103_REG_OFST      (0xB9C)             /**< (LCDC_OVR1CLUT103) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT104_REG_OFST      (0xBA0)             /**< (LCDC_OVR1CLUT104) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT105_REG_OFST      (0xBA4)             /**< (LCDC_OVR1CLUT105) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT106_REG_OFST      (0xBA8)             /**< (LCDC_OVR1CLUT106) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT107_REG_OFST      (0xBAC)             /**< (LCDC_OVR1CLUT107) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT108_REG_OFST      (0xBB0)             /**< (LCDC_OVR1CLUT108) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT109_REG_OFST      (0xBB4)             /**< (LCDC_OVR1CLUT109) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT110_REG_OFST      (0xBB8)             /**< (LCDC_OVR1CLUT110) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT111_REG_OFST      (0xBBC)             /**< (LCDC_OVR1CLUT111) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT112_REG_OFST      (0xBC0)             /**< (LCDC_OVR1CLUT112) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT113_REG_OFST      (0xBC4)             /**< (LCDC_OVR1CLUT113) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT114_REG_OFST      (0xBC8)             /**< (LCDC_OVR1CLUT114) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT115_REG_OFST      (0xBCC)             /**< (LCDC_OVR1CLUT115) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT116_REG_OFST      (0xBD0)             /**< (LCDC_OVR1CLUT116) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT117_REG_OFST      (0xBD4)             /**< (LCDC_OVR1CLUT117) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT118_REG_OFST      (0xBD8)             /**< (LCDC_OVR1CLUT118) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT119_REG_OFST      (0xBDC)             /**< (LCDC_OVR1CLUT119) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT120_REG_OFST      (0xBE0)             /**< (LCDC_OVR1CLUT120) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT121_REG_OFST      (0xBE4)             /**< (LCDC_OVR1CLUT121) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT122_REG_OFST      (0xBE8)             /**< (LCDC_OVR1CLUT122) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT123_REG_OFST      (0xBEC)             /**< (LCDC_OVR1CLUT123) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT124_REG_OFST      (0xBF0)             /**< (LCDC_OVR1CLUT124) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT125_REG_OFST      (0xBF4)             /**< (LCDC_OVR1CLUT125) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT126_REG_OFST      (0xBF8)             /**< (LCDC_OVR1CLUT126) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT127_REG_OFST      (0xBFC)             /**< (LCDC_OVR1CLUT127) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT128_REG_OFST      (0xC00)             /**< (LCDC_OVR1CLUT128) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT129_REG_OFST      (0xC04)             /**< (LCDC_OVR1CLUT129) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT130_REG_OFST      (0xC08)             /**< (LCDC_OVR1CLUT130) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT131_REG_OFST      (0xC0C)             /**< (LCDC_OVR1CLUT131) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT132_REG_OFST      (0xC10)             /**< (LCDC_OVR1CLUT132) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT133_REG_OFST      (0xC14)             /**< (LCDC_OVR1CLUT133) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT134_REG_OFST      (0xC18)             /**< (LCDC_OVR1CLUT134) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT135_REG_OFST      (0xC1C)             /**< (LCDC_OVR1CLUT135) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT136_REG_OFST      (0xC20)             /**< (LCDC_OVR1CLUT136) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT137_REG_OFST      (0xC24)             /**< (LCDC_OVR1CLUT137) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT138_REG_OFST      (0xC28)             /**< (LCDC_OVR1CLUT138) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT139_REG_OFST      (0xC2C)             /**< (LCDC_OVR1CLUT139) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT140_REG_OFST      (0xC30)             /**< (LCDC_OVR1CLUT140) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT141_REG_OFST      (0xC34)             /**< (LCDC_OVR1CLUT141) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT142_REG_OFST      (0xC38)             /**< (LCDC_OVR1CLUT142) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT143_REG_OFST      (0xC3C)             /**< (LCDC_OVR1CLUT143) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT144_REG_OFST      (0xC40)             /**< (LCDC_OVR1CLUT144) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT145_REG_OFST      (0xC44)             /**< (LCDC_OVR1CLUT145) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT146_REG_OFST      (0xC48)             /**< (LCDC_OVR1CLUT146) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT147_REG_OFST      (0xC4C)             /**< (LCDC_OVR1CLUT147) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT148_REG_OFST      (0xC50)             /**< (LCDC_OVR1CLUT148) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT149_REG_OFST      (0xC54)             /**< (LCDC_OVR1CLUT149) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT150_REG_OFST      (0xC58)             /**< (LCDC_OVR1CLUT150) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT151_REG_OFST      (0xC5C)             /**< (LCDC_OVR1CLUT151) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT152_REG_OFST      (0xC60)             /**< (LCDC_OVR1CLUT152) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT153_REG_OFST      (0xC64)             /**< (LCDC_OVR1CLUT153) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT154_REG_OFST      (0xC68)             /**< (LCDC_OVR1CLUT154) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT155_REG_OFST      (0xC6C)             /**< (LCDC_OVR1CLUT155) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT156_REG_OFST      (0xC70)             /**< (LCDC_OVR1CLUT156) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT157_REG_OFST      (0xC74)             /**< (LCDC_OVR1CLUT157) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT158_REG_OFST      (0xC78)             /**< (LCDC_OVR1CLUT158) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT159_REG_OFST      (0xC7C)             /**< (LCDC_OVR1CLUT159) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT160_REG_OFST      (0xC80)             /**< (LCDC_OVR1CLUT160) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT161_REG_OFST      (0xC84)             /**< (LCDC_OVR1CLUT161) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT162_REG_OFST      (0xC88)             /**< (LCDC_OVR1CLUT162) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT163_REG_OFST      (0xC8C)             /**< (LCDC_OVR1CLUT163) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT164_REG_OFST      (0xC90)             /**< (LCDC_OVR1CLUT164) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT165_REG_OFST      (0xC94)             /**< (LCDC_OVR1CLUT165) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT166_REG_OFST      (0xC98)             /**< (LCDC_OVR1CLUT166) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT167_REG_OFST      (0xC9C)             /**< (LCDC_OVR1CLUT167) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT168_REG_OFST      (0xCA0)             /**< (LCDC_OVR1CLUT168) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT169_REG_OFST      (0xCA4)             /**< (LCDC_OVR1CLUT169) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT170_REG_OFST      (0xCA8)             /**< (LCDC_OVR1CLUT170) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT171_REG_OFST      (0xCAC)             /**< (LCDC_OVR1CLUT171) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT172_REG_OFST      (0xCB0)             /**< (LCDC_OVR1CLUT172) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT173_REG_OFST      (0xCB4)             /**< (LCDC_OVR1CLUT173) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT174_REG_OFST      (0xCB8)             /**< (LCDC_OVR1CLUT174) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT175_REG_OFST      (0xCBC)             /**< (LCDC_OVR1CLUT175) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT176_REG_OFST      (0xCC0)             /**< (LCDC_OVR1CLUT176) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT177_REG_OFST      (0xCC4)             /**< (LCDC_OVR1CLUT177) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT178_REG_OFST      (0xCC8)             /**< (LCDC_OVR1CLUT178) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT179_REG_OFST      (0xCCC)             /**< (LCDC_OVR1CLUT179) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT180_REG_OFST      (0xCD0)             /**< (LCDC_OVR1CLUT180) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT181_REG_OFST      (0xCD4)             /**< (LCDC_OVR1CLUT181) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT182_REG_OFST      (0xCD8)             /**< (LCDC_OVR1CLUT182) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT183_REG_OFST      (0xCDC)             /**< (LCDC_OVR1CLUT183) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT184_REG_OFST      (0xCE0)             /**< (LCDC_OVR1CLUT184) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT185_REG_OFST      (0xCE4)             /**< (LCDC_OVR1CLUT185) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT186_REG_OFST      (0xCE8)             /**< (LCDC_OVR1CLUT186) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT187_REG_OFST      (0xCEC)             /**< (LCDC_OVR1CLUT187) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT188_REG_OFST      (0xCF0)             /**< (LCDC_OVR1CLUT188) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT189_REG_OFST      (0xCF4)             /**< (LCDC_OVR1CLUT189) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT190_REG_OFST      (0xCF8)             /**< (LCDC_OVR1CLUT190) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT191_REG_OFST      (0xCFC)             /**< (LCDC_OVR1CLUT191) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT192_REG_OFST      (0xD00)             /**< (LCDC_OVR1CLUT192) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT193_REG_OFST      (0xD04)             /**< (LCDC_OVR1CLUT193) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT194_REG_OFST      (0xD08)             /**< (LCDC_OVR1CLUT194) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT195_REG_OFST      (0xD0C)             /**< (LCDC_OVR1CLUT195) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT196_REG_OFST      (0xD10)             /**< (LCDC_OVR1CLUT196) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT197_REG_OFST      (0xD14)             /**< (LCDC_OVR1CLUT197) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT198_REG_OFST      (0xD18)             /**< (LCDC_OVR1CLUT198) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT199_REG_OFST      (0xD1C)             /**< (LCDC_OVR1CLUT199) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT200_REG_OFST      (0xD20)             /**< (LCDC_OVR1CLUT200) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT201_REG_OFST      (0xD24)             /**< (LCDC_OVR1CLUT201) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT202_REG_OFST      (0xD28)             /**< (LCDC_OVR1CLUT202) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT203_REG_OFST      (0xD2C)             /**< (LCDC_OVR1CLUT203) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT204_REG_OFST      (0xD30)             /**< (LCDC_OVR1CLUT204) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT205_REG_OFST      (0xD34)             /**< (LCDC_OVR1CLUT205) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT206_REG_OFST      (0xD38)             /**< (LCDC_OVR1CLUT206) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT207_REG_OFST      (0xD3C)             /**< (LCDC_OVR1CLUT207) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT208_REG_OFST      (0xD40)             /**< (LCDC_OVR1CLUT208) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT209_REG_OFST      (0xD44)             /**< (LCDC_OVR1CLUT209) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT210_REG_OFST      (0xD48)             /**< (LCDC_OVR1CLUT210) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT211_REG_OFST      (0xD4C)             /**< (LCDC_OVR1CLUT211) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT212_REG_OFST      (0xD50)             /**< (LCDC_OVR1CLUT212) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT213_REG_OFST      (0xD54)             /**< (LCDC_OVR1CLUT213) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT214_REG_OFST      (0xD58)             /**< (LCDC_OVR1CLUT214) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT215_REG_OFST      (0xD5C)             /**< (LCDC_OVR1CLUT215) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT216_REG_OFST      (0xD60)             /**< (LCDC_OVR1CLUT216) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT217_REG_OFST      (0xD64)             /**< (LCDC_OVR1CLUT217) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT218_REG_OFST      (0xD68)             /**< (LCDC_OVR1CLUT218) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT219_REG_OFST      (0xD6C)             /**< (LCDC_OVR1CLUT219) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT220_REG_OFST      (0xD70)             /**< (LCDC_OVR1CLUT220) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT221_REG_OFST      (0xD74)             /**< (LCDC_OVR1CLUT221) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT222_REG_OFST      (0xD78)             /**< (LCDC_OVR1CLUT222) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT223_REG_OFST      (0xD7C)             /**< (LCDC_OVR1CLUT223) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT224_REG_OFST      (0xD80)             /**< (LCDC_OVR1CLUT224) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT225_REG_OFST      (0xD84)             /**< (LCDC_OVR1CLUT225) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT226_REG_OFST      (0xD88)             /**< (LCDC_OVR1CLUT226) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT227_REG_OFST      (0xD8C)             /**< (LCDC_OVR1CLUT227) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT228_REG_OFST      (0xD90)             /**< (LCDC_OVR1CLUT228) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT229_REG_OFST      (0xD94)             /**< (LCDC_OVR1CLUT229) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT230_REG_OFST      (0xD98)             /**< (LCDC_OVR1CLUT230) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT231_REG_OFST      (0xD9C)             /**< (LCDC_OVR1CLUT231) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT232_REG_OFST      (0xDA0)             /**< (LCDC_OVR1CLUT232) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT233_REG_OFST      (0xDA4)             /**< (LCDC_OVR1CLUT233) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT234_REG_OFST      (0xDA8)             /**< (LCDC_OVR1CLUT234) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT235_REG_OFST      (0xDAC)             /**< (LCDC_OVR1CLUT235) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT236_REG_OFST      (0xDB0)             /**< (LCDC_OVR1CLUT236) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT237_REG_OFST      (0xDB4)             /**< (LCDC_OVR1CLUT237) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT238_REG_OFST      (0xDB8)             /**< (LCDC_OVR1CLUT238) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT239_REG_OFST      (0xDBC)             /**< (LCDC_OVR1CLUT239) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT240_REG_OFST      (0xDC0)             /**< (LCDC_OVR1CLUT240) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT241_REG_OFST      (0xDC4)             /**< (LCDC_OVR1CLUT241) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT242_REG_OFST      (0xDC8)             /**< (LCDC_OVR1CLUT242) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT243_REG_OFST      (0xDCC)             /**< (LCDC_OVR1CLUT243) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT244_REG_OFST      (0xDD0)             /**< (LCDC_OVR1CLUT244) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT245_REG_OFST      (0xDD4)             /**< (LCDC_OVR1CLUT245) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT246_REG_OFST      (0xDD8)             /**< (LCDC_OVR1CLUT246) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT247_REG_OFST      (0xDDC)             /**< (LCDC_OVR1CLUT247) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT248_REG_OFST      (0xDE0)             /**< (LCDC_OVR1CLUT248) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT249_REG_OFST      (0xDE4)             /**< (LCDC_OVR1CLUT249) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT250_REG_OFST      (0xDE8)             /**< (LCDC_OVR1CLUT250) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT251_REG_OFST      (0xDEC)             /**< (LCDC_OVR1CLUT251) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT252_REG_OFST      (0xDF0)             /**< (LCDC_OVR1CLUT252) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT253_REG_OFST      (0xDF4)             /**< (LCDC_OVR1CLUT253) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT254_REG_OFST      (0xDF8)             /**< (LCDC_OVR1CLUT254) Overlay 1 CLUT Register Offset */
#define LCDC_OVR1CLUT255_REG_OFST      (0xDFC)             /**< (LCDC_OVR1CLUT255) Overlay 1 CLUT Register Offset */
#define LCDC_OVR2CLUT_REG_OFST         (0xE00)             /**< (LCDC_OVR2CLUT) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT0_REG_OFST        (0xE00)             /**< (LCDC_OVR2CLUT0) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT1_REG_OFST        (0xE04)             /**< (LCDC_OVR2CLUT1) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT2_REG_OFST        (0xE08)             /**< (LCDC_OVR2CLUT2) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT3_REG_OFST        (0xE0C)             /**< (LCDC_OVR2CLUT3) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT4_REG_OFST        (0xE10)             /**< (LCDC_OVR2CLUT4) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT5_REG_OFST        (0xE14)             /**< (LCDC_OVR2CLUT5) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT6_REG_OFST        (0xE18)             /**< (LCDC_OVR2CLUT6) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT7_REG_OFST        (0xE1C)             /**< (LCDC_OVR2CLUT7) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT8_REG_OFST        (0xE20)             /**< (LCDC_OVR2CLUT8) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT9_REG_OFST        (0xE24)             /**< (LCDC_OVR2CLUT9) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT10_REG_OFST       (0xE28)             /**< (LCDC_OVR2CLUT10) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT11_REG_OFST       (0xE2C)             /**< (LCDC_OVR2CLUT11) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT12_REG_OFST       (0xE30)             /**< (LCDC_OVR2CLUT12) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT13_REG_OFST       (0xE34)             /**< (LCDC_OVR2CLUT13) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT14_REG_OFST       (0xE38)             /**< (LCDC_OVR2CLUT14) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT15_REG_OFST       (0xE3C)             /**< (LCDC_OVR2CLUT15) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT16_REG_OFST       (0xE40)             /**< (LCDC_OVR2CLUT16) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT17_REG_OFST       (0xE44)             /**< (LCDC_OVR2CLUT17) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT18_REG_OFST       (0xE48)             /**< (LCDC_OVR2CLUT18) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT19_REG_OFST       (0xE4C)             /**< (LCDC_OVR2CLUT19) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT20_REG_OFST       (0xE50)             /**< (LCDC_OVR2CLUT20) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT21_REG_OFST       (0xE54)             /**< (LCDC_OVR2CLUT21) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT22_REG_OFST       (0xE58)             /**< (LCDC_OVR2CLUT22) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT23_REG_OFST       (0xE5C)             /**< (LCDC_OVR2CLUT23) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT24_REG_OFST       (0xE60)             /**< (LCDC_OVR2CLUT24) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT25_REG_OFST       (0xE64)             /**< (LCDC_OVR2CLUT25) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT26_REG_OFST       (0xE68)             /**< (LCDC_OVR2CLUT26) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT27_REG_OFST       (0xE6C)             /**< (LCDC_OVR2CLUT27) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT28_REG_OFST       (0xE70)             /**< (LCDC_OVR2CLUT28) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT29_REG_OFST       (0xE74)             /**< (LCDC_OVR2CLUT29) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT30_REG_OFST       (0xE78)             /**< (LCDC_OVR2CLUT30) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT31_REG_OFST       (0xE7C)             /**< (LCDC_OVR2CLUT31) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT32_REG_OFST       (0xE80)             /**< (LCDC_OVR2CLUT32) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT33_REG_OFST       (0xE84)             /**< (LCDC_OVR2CLUT33) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT34_REG_OFST       (0xE88)             /**< (LCDC_OVR2CLUT34) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT35_REG_OFST       (0xE8C)             /**< (LCDC_OVR2CLUT35) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT36_REG_OFST       (0xE90)             /**< (LCDC_OVR2CLUT36) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT37_REG_OFST       (0xE94)             /**< (LCDC_OVR2CLUT37) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT38_REG_OFST       (0xE98)             /**< (LCDC_OVR2CLUT38) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT39_REG_OFST       (0xE9C)             /**< (LCDC_OVR2CLUT39) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT40_REG_OFST       (0xEA0)             /**< (LCDC_OVR2CLUT40) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT41_REG_OFST       (0xEA4)             /**< (LCDC_OVR2CLUT41) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT42_REG_OFST       (0xEA8)             /**< (LCDC_OVR2CLUT42) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT43_REG_OFST       (0xEAC)             /**< (LCDC_OVR2CLUT43) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT44_REG_OFST       (0xEB0)             /**< (LCDC_OVR2CLUT44) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT45_REG_OFST       (0xEB4)             /**< (LCDC_OVR2CLUT45) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT46_REG_OFST       (0xEB8)             /**< (LCDC_OVR2CLUT46) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT47_REG_OFST       (0xEBC)             /**< (LCDC_OVR2CLUT47) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT48_REG_OFST       (0xEC0)             /**< (LCDC_OVR2CLUT48) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT49_REG_OFST       (0xEC4)             /**< (LCDC_OVR2CLUT49) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT50_REG_OFST       (0xEC8)             /**< (LCDC_OVR2CLUT50) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT51_REG_OFST       (0xECC)             /**< (LCDC_OVR2CLUT51) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT52_REG_OFST       (0xED0)             /**< (LCDC_OVR2CLUT52) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT53_REG_OFST       (0xED4)             /**< (LCDC_OVR2CLUT53) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT54_REG_OFST       (0xED8)             /**< (LCDC_OVR2CLUT54) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT55_REG_OFST       (0xEDC)             /**< (LCDC_OVR2CLUT55) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT56_REG_OFST       (0xEE0)             /**< (LCDC_OVR2CLUT56) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT57_REG_OFST       (0xEE4)             /**< (LCDC_OVR2CLUT57) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT58_REG_OFST       (0xEE8)             /**< (LCDC_OVR2CLUT58) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT59_REG_OFST       (0xEEC)             /**< (LCDC_OVR2CLUT59) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT60_REG_OFST       (0xEF0)             /**< (LCDC_OVR2CLUT60) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT61_REG_OFST       (0xEF4)             /**< (LCDC_OVR2CLUT61) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT62_REG_OFST       (0xEF8)             /**< (LCDC_OVR2CLUT62) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT63_REG_OFST       (0xEFC)             /**< (LCDC_OVR2CLUT63) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT64_REG_OFST       (0xF00)             /**< (LCDC_OVR2CLUT64) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT65_REG_OFST       (0xF04)             /**< (LCDC_OVR2CLUT65) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT66_REG_OFST       (0xF08)             /**< (LCDC_OVR2CLUT66) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT67_REG_OFST       (0xF0C)             /**< (LCDC_OVR2CLUT67) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT68_REG_OFST       (0xF10)             /**< (LCDC_OVR2CLUT68) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT69_REG_OFST       (0xF14)             /**< (LCDC_OVR2CLUT69) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT70_REG_OFST       (0xF18)             /**< (LCDC_OVR2CLUT70) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT71_REG_OFST       (0xF1C)             /**< (LCDC_OVR2CLUT71) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT72_REG_OFST       (0xF20)             /**< (LCDC_OVR2CLUT72) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT73_REG_OFST       (0xF24)             /**< (LCDC_OVR2CLUT73) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT74_REG_OFST       (0xF28)             /**< (LCDC_OVR2CLUT74) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT75_REG_OFST       (0xF2C)             /**< (LCDC_OVR2CLUT75) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT76_REG_OFST       (0xF30)             /**< (LCDC_OVR2CLUT76) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT77_REG_OFST       (0xF34)             /**< (LCDC_OVR2CLUT77) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT78_REG_OFST       (0xF38)             /**< (LCDC_OVR2CLUT78) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT79_REG_OFST       (0xF3C)             /**< (LCDC_OVR2CLUT79) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT80_REG_OFST       (0xF40)             /**< (LCDC_OVR2CLUT80) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT81_REG_OFST       (0xF44)             /**< (LCDC_OVR2CLUT81) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT82_REG_OFST       (0xF48)             /**< (LCDC_OVR2CLUT82) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT83_REG_OFST       (0xF4C)             /**< (LCDC_OVR2CLUT83) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT84_REG_OFST       (0xF50)             /**< (LCDC_OVR2CLUT84) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT85_REG_OFST       (0xF54)             /**< (LCDC_OVR2CLUT85) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT86_REG_OFST       (0xF58)             /**< (LCDC_OVR2CLUT86) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT87_REG_OFST       (0xF5C)             /**< (LCDC_OVR2CLUT87) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT88_REG_OFST       (0xF60)             /**< (LCDC_OVR2CLUT88) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT89_REG_OFST       (0xF64)             /**< (LCDC_OVR2CLUT89) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT90_REG_OFST       (0xF68)             /**< (LCDC_OVR2CLUT90) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT91_REG_OFST       (0xF6C)             /**< (LCDC_OVR2CLUT91) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT92_REG_OFST       (0xF70)             /**< (LCDC_OVR2CLUT92) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT93_REG_OFST       (0xF74)             /**< (LCDC_OVR2CLUT93) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT94_REG_OFST       (0xF78)             /**< (LCDC_OVR2CLUT94) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT95_REG_OFST       (0xF7C)             /**< (LCDC_OVR2CLUT95) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT96_REG_OFST       (0xF80)             /**< (LCDC_OVR2CLUT96) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT97_REG_OFST       (0xF84)             /**< (LCDC_OVR2CLUT97) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT98_REG_OFST       (0xF88)             /**< (LCDC_OVR2CLUT98) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT99_REG_OFST       (0xF8C)             /**< (LCDC_OVR2CLUT99) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT100_REG_OFST      (0xF90)             /**< (LCDC_OVR2CLUT100) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT101_REG_OFST      (0xF94)             /**< (LCDC_OVR2CLUT101) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT102_REG_OFST      (0xF98)             /**< (LCDC_OVR2CLUT102) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT103_REG_OFST      (0xF9C)             /**< (LCDC_OVR2CLUT103) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT104_REG_OFST      (0xFA0)             /**< (LCDC_OVR2CLUT104) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT105_REG_OFST      (0xFA4)             /**< (LCDC_OVR2CLUT105) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT106_REG_OFST      (0xFA8)             /**< (LCDC_OVR2CLUT106) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT107_REG_OFST      (0xFAC)             /**< (LCDC_OVR2CLUT107) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT108_REG_OFST      (0xFB0)             /**< (LCDC_OVR2CLUT108) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT109_REG_OFST      (0xFB4)             /**< (LCDC_OVR2CLUT109) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT110_REG_OFST      (0xFB8)             /**< (LCDC_OVR2CLUT110) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT111_REG_OFST      (0xFBC)             /**< (LCDC_OVR2CLUT111) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT112_REG_OFST      (0xFC0)             /**< (LCDC_OVR2CLUT112) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT113_REG_OFST      (0xFC4)             /**< (LCDC_OVR2CLUT113) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT114_REG_OFST      (0xFC8)             /**< (LCDC_OVR2CLUT114) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT115_REG_OFST      (0xFCC)             /**< (LCDC_OVR2CLUT115) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT116_REG_OFST      (0xFD0)             /**< (LCDC_OVR2CLUT116) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT117_REG_OFST      (0xFD4)             /**< (LCDC_OVR2CLUT117) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT118_REG_OFST      (0xFD8)             /**< (LCDC_OVR2CLUT118) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT119_REG_OFST      (0xFDC)             /**< (LCDC_OVR2CLUT119) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT120_REG_OFST      (0xFE0)             /**< (LCDC_OVR2CLUT120) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT121_REG_OFST      (0xFE4)             /**< (LCDC_OVR2CLUT121) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT122_REG_OFST      (0xFE8)             /**< (LCDC_OVR2CLUT122) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT123_REG_OFST      (0xFEC)             /**< (LCDC_OVR2CLUT123) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT124_REG_OFST      (0xFF0)             /**< (LCDC_OVR2CLUT124) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT125_REG_OFST      (0xFF4)             /**< (LCDC_OVR2CLUT125) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT126_REG_OFST      (0xFF8)             /**< (LCDC_OVR2CLUT126) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT127_REG_OFST      (0xFFC)             /**< (LCDC_OVR2CLUT127) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT128_REG_OFST      (0x1000)            /**< (LCDC_OVR2CLUT128) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT129_REG_OFST      (0x1004)            /**< (LCDC_OVR2CLUT129) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT130_REG_OFST      (0x1008)            /**< (LCDC_OVR2CLUT130) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT131_REG_OFST      (0x100C)            /**< (LCDC_OVR2CLUT131) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT132_REG_OFST      (0x1010)            /**< (LCDC_OVR2CLUT132) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT133_REG_OFST      (0x1014)            /**< (LCDC_OVR2CLUT133) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT134_REG_OFST      (0x1018)            /**< (LCDC_OVR2CLUT134) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT135_REG_OFST      (0x101C)            /**< (LCDC_OVR2CLUT135) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT136_REG_OFST      (0x1020)            /**< (LCDC_OVR2CLUT136) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT137_REG_OFST      (0x1024)            /**< (LCDC_OVR2CLUT137) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT138_REG_OFST      (0x1028)            /**< (LCDC_OVR2CLUT138) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT139_REG_OFST      (0x102C)            /**< (LCDC_OVR2CLUT139) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT140_REG_OFST      (0x1030)            /**< (LCDC_OVR2CLUT140) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT141_REG_OFST      (0x1034)            /**< (LCDC_OVR2CLUT141) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT142_REG_OFST      (0x1038)            /**< (LCDC_OVR2CLUT142) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT143_REG_OFST      (0x103C)            /**< (LCDC_OVR2CLUT143) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT144_REG_OFST      (0x1040)            /**< (LCDC_OVR2CLUT144) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT145_REG_OFST      (0x1044)            /**< (LCDC_OVR2CLUT145) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT146_REG_OFST      (0x1048)            /**< (LCDC_OVR2CLUT146) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT147_REG_OFST      (0x104C)            /**< (LCDC_OVR2CLUT147) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT148_REG_OFST      (0x1050)            /**< (LCDC_OVR2CLUT148) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT149_REG_OFST      (0x1054)            /**< (LCDC_OVR2CLUT149) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT150_REG_OFST      (0x1058)            /**< (LCDC_OVR2CLUT150) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT151_REG_OFST      (0x105C)            /**< (LCDC_OVR2CLUT151) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT152_REG_OFST      (0x1060)            /**< (LCDC_OVR2CLUT152) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT153_REG_OFST      (0x1064)            /**< (LCDC_OVR2CLUT153) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT154_REG_OFST      (0x1068)            /**< (LCDC_OVR2CLUT154) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT155_REG_OFST      (0x106C)            /**< (LCDC_OVR2CLUT155) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT156_REG_OFST      (0x1070)            /**< (LCDC_OVR2CLUT156) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT157_REG_OFST      (0x1074)            /**< (LCDC_OVR2CLUT157) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT158_REG_OFST      (0x1078)            /**< (LCDC_OVR2CLUT158) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT159_REG_OFST      (0x107C)            /**< (LCDC_OVR2CLUT159) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT160_REG_OFST      (0x1080)            /**< (LCDC_OVR2CLUT160) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT161_REG_OFST      (0x1084)            /**< (LCDC_OVR2CLUT161) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT162_REG_OFST      (0x1088)            /**< (LCDC_OVR2CLUT162) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT163_REG_OFST      (0x108C)            /**< (LCDC_OVR2CLUT163) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT164_REG_OFST      (0x1090)            /**< (LCDC_OVR2CLUT164) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT165_REG_OFST      (0x1094)            /**< (LCDC_OVR2CLUT165) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT166_REG_OFST      (0x1098)            /**< (LCDC_OVR2CLUT166) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT167_REG_OFST      (0x109C)            /**< (LCDC_OVR2CLUT167) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT168_REG_OFST      (0x10A0)            /**< (LCDC_OVR2CLUT168) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT169_REG_OFST      (0x10A4)            /**< (LCDC_OVR2CLUT169) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT170_REG_OFST      (0x10A8)            /**< (LCDC_OVR2CLUT170) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT171_REG_OFST      (0x10AC)            /**< (LCDC_OVR2CLUT171) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT172_REG_OFST      (0x10B0)            /**< (LCDC_OVR2CLUT172) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT173_REG_OFST      (0x10B4)            /**< (LCDC_OVR2CLUT173) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT174_REG_OFST      (0x10B8)            /**< (LCDC_OVR2CLUT174) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT175_REG_OFST      (0x10BC)            /**< (LCDC_OVR2CLUT175) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT176_REG_OFST      (0x10C0)            /**< (LCDC_OVR2CLUT176) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT177_REG_OFST      (0x10C4)            /**< (LCDC_OVR2CLUT177) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT178_REG_OFST      (0x10C8)            /**< (LCDC_OVR2CLUT178) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT179_REG_OFST      (0x10CC)            /**< (LCDC_OVR2CLUT179) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT180_REG_OFST      (0x10D0)            /**< (LCDC_OVR2CLUT180) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT181_REG_OFST      (0x10D4)            /**< (LCDC_OVR2CLUT181) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT182_REG_OFST      (0x10D8)            /**< (LCDC_OVR2CLUT182) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT183_REG_OFST      (0x10DC)            /**< (LCDC_OVR2CLUT183) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT184_REG_OFST      (0x10E0)            /**< (LCDC_OVR2CLUT184) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT185_REG_OFST      (0x10E4)            /**< (LCDC_OVR2CLUT185) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT186_REG_OFST      (0x10E8)            /**< (LCDC_OVR2CLUT186) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT187_REG_OFST      (0x10EC)            /**< (LCDC_OVR2CLUT187) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT188_REG_OFST      (0x10F0)            /**< (LCDC_OVR2CLUT188) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT189_REG_OFST      (0x10F4)            /**< (LCDC_OVR2CLUT189) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT190_REG_OFST      (0x10F8)            /**< (LCDC_OVR2CLUT190) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT191_REG_OFST      (0x10FC)            /**< (LCDC_OVR2CLUT191) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT192_REG_OFST      (0x1100)            /**< (LCDC_OVR2CLUT192) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT193_REG_OFST      (0x1104)            /**< (LCDC_OVR2CLUT193) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT194_REG_OFST      (0x1108)            /**< (LCDC_OVR2CLUT194) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT195_REG_OFST      (0x110C)            /**< (LCDC_OVR2CLUT195) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT196_REG_OFST      (0x1110)            /**< (LCDC_OVR2CLUT196) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT197_REG_OFST      (0x1114)            /**< (LCDC_OVR2CLUT197) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT198_REG_OFST      (0x1118)            /**< (LCDC_OVR2CLUT198) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT199_REG_OFST      (0x111C)            /**< (LCDC_OVR2CLUT199) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT200_REG_OFST      (0x1120)            /**< (LCDC_OVR2CLUT200) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT201_REG_OFST      (0x1124)            /**< (LCDC_OVR2CLUT201) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT202_REG_OFST      (0x1128)            /**< (LCDC_OVR2CLUT202) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT203_REG_OFST      (0x112C)            /**< (LCDC_OVR2CLUT203) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT204_REG_OFST      (0x1130)            /**< (LCDC_OVR2CLUT204) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT205_REG_OFST      (0x1134)            /**< (LCDC_OVR2CLUT205) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT206_REG_OFST      (0x1138)            /**< (LCDC_OVR2CLUT206) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT207_REG_OFST      (0x113C)            /**< (LCDC_OVR2CLUT207) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT208_REG_OFST      (0x1140)            /**< (LCDC_OVR2CLUT208) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT209_REG_OFST      (0x1144)            /**< (LCDC_OVR2CLUT209) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT210_REG_OFST      (0x1148)            /**< (LCDC_OVR2CLUT210) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT211_REG_OFST      (0x114C)            /**< (LCDC_OVR2CLUT211) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT212_REG_OFST      (0x1150)            /**< (LCDC_OVR2CLUT212) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT213_REG_OFST      (0x1154)            /**< (LCDC_OVR2CLUT213) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT214_REG_OFST      (0x1158)            /**< (LCDC_OVR2CLUT214) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT215_REG_OFST      (0x115C)            /**< (LCDC_OVR2CLUT215) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT216_REG_OFST      (0x1160)            /**< (LCDC_OVR2CLUT216) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT217_REG_OFST      (0x1164)            /**< (LCDC_OVR2CLUT217) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT218_REG_OFST      (0x1168)            /**< (LCDC_OVR2CLUT218) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT219_REG_OFST      (0x116C)            /**< (LCDC_OVR2CLUT219) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT220_REG_OFST      (0x1170)            /**< (LCDC_OVR2CLUT220) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT221_REG_OFST      (0x1174)            /**< (LCDC_OVR2CLUT221) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT222_REG_OFST      (0x1178)            /**< (LCDC_OVR2CLUT222) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT223_REG_OFST      (0x117C)            /**< (LCDC_OVR2CLUT223) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT224_REG_OFST      (0x1180)            /**< (LCDC_OVR2CLUT224) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT225_REG_OFST      (0x1184)            /**< (LCDC_OVR2CLUT225) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT226_REG_OFST      (0x1188)            /**< (LCDC_OVR2CLUT226) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT227_REG_OFST      (0x118C)            /**< (LCDC_OVR2CLUT227) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT228_REG_OFST      (0x1190)            /**< (LCDC_OVR2CLUT228) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT229_REG_OFST      (0x1194)            /**< (LCDC_OVR2CLUT229) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT230_REG_OFST      (0x1198)            /**< (LCDC_OVR2CLUT230) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT231_REG_OFST      (0x119C)            /**< (LCDC_OVR2CLUT231) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT232_REG_OFST      (0x11A0)            /**< (LCDC_OVR2CLUT232) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT233_REG_OFST      (0x11A4)            /**< (LCDC_OVR2CLUT233) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT234_REG_OFST      (0x11A8)            /**< (LCDC_OVR2CLUT234) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT235_REG_OFST      (0x11AC)            /**< (LCDC_OVR2CLUT235) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT236_REG_OFST      (0x11B0)            /**< (LCDC_OVR2CLUT236) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT237_REG_OFST      (0x11B4)            /**< (LCDC_OVR2CLUT237) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT238_REG_OFST      (0x11B8)            /**< (LCDC_OVR2CLUT238) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT239_REG_OFST      (0x11BC)            /**< (LCDC_OVR2CLUT239) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT240_REG_OFST      (0x11C0)            /**< (LCDC_OVR2CLUT240) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT241_REG_OFST      (0x11C4)            /**< (LCDC_OVR2CLUT241) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT242_REG_OFST      (0x11C8)            /**< (LCDC_OVR2CLUT242) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT243_REG_OFST      (0x11CC)            /**< (LCDC_OVR2CLUT243) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT244_REG_OFST      (0x11D0)            /**< (LCDC_OVR2CLUT244) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT245_REG_OFST      (0x11D4)            /**< (LCDC_OVR2CLUT245) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT246_REG_OFST      (0x11D8)            /**< (LCDC_OVR2CLUT246) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT247_REG_OFST      (0x11DC)            /**< (LCDC_OVR2CLUT247) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT248_REG_OFST      (0x11E0)            /**< (LCDC_OVR2CLUT248) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT249_REG_OFST      (0x11E4)            /**< (LCDC_OVR2CLUT249) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT250_REG_OFST      (0x11E8)            /**< (LCDC_OVR2CLUT250) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT251_REG_OFST      (0x11EC)            /**< (LCDC_OVR2CLUT251) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT252_REG_OFST      (0x11F0)            /**< (LCDC_OVR2CLUT252) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT253_REG_OFST      (0x11F4)            /**< (LCDC_OVR2CLUT253) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT254_REG_OFST      (0x11F8)            /**< (LCDC_OVR2CLUT254) Overlay 2 CLUT Register Offset */
#define LCDC_OVR2CLUT255_REG_OFST      (0x11FC)            /**< (LCDC_OVR2CLUT255) Overlay 2 CLUT Register Offset */
#define LCDC_HEOCLUT_REG_OFST          (0x1200)            /**< (LCDC_HEOCLUT) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT0_REG_OFST         (0x1200)            /**< (LCDC_HEOCLUT0) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT1_REG_OFST         (0x1204)            /**< (LCDC_HEOCLUT1) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT2_REG_OFST         (0x1208)            /**< (LCDC_HEOCLUT2) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT3_REG_OFST         (0x120C)            /**< (LCDC_HEOCLUT3) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT4_REG_OFST         (0x1210)            /**< (LCDC_HEOCLUT4) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT5_REG_OFST         (0x1214)            /**< (LCDC_HEOCLUT5) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT6_REG_OFST         (0x1218)            /**< (LCDC_HEOCLUT6) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT7_REG_OFST         (0x121C)            /**< (LCDC_HEOCLUT7) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT8_REG_OFST         (0x1220)            /**< (LCDC_HEOCLUT8) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT9_REG_OFST         (0x1224)            /**< (LCDC_HEOCLUT9) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT10_REG_OFST        (0x1228)            /**< (LCDC_HEOCLUT10) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT11_REG_OFST        (0x122C)            /**< (LCDC_HEOCLUT11) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT12_REG_OFST        (0x1230)            /**< (LCDC_HEOCLUT12) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT13_REG_OFST        (0x1234)            /**< (LCDC_HEOCLUT13) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT14_REG_OFST        (0x1238)            /**< (LCDC_HEOCLUT14) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT15_REG_OFST        (0x123C)            /**< (LCDC_HEOCLUT15) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT16_REG_OFST        (0x1240)            /**< (LCDC_HEOCLUT16) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT17_REG_OFST        (0x1244)            /**< (LCDC_HEOCLUT17) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT18_REG_OFST        (0x1248)            /**< (LCDC_HEOCLUT18) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT19_REG_OFST        (0x124C)            /**< (LCDC_HEOCLUT19) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT20_REG_OFST        (0x1250)            /**< (LCDC_HEOCLUT20) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT21_REG_OFST        (0x1254)            /**< (LCDC_HEOCLUT21) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT22_REG_OFST        (0x1258)            /**< (LCDC_HEOCLUT22) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT23_REG_OFST        (0x125C)            /**< (LCDC_HEOCLUT23) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT24_REG_OFST        (0x1260)            /**< (LCDC_HEOCLUT24) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT25_REG_OFST        (0x1264)            /**< (LCDC_HEOCLUT25) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT26_REG_OFST        (0x1268)            /**< (LCDC_HEOCLUT26) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT27_REG_OFST        (0x126C)            /**< (LCDC_HEOCLUT27) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT28_REG_OFST        (0x1270)            /**< (LCDC_HEOCLUT28) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT29_REG_OFST        (0x1274)            /**< (LCDC_HEOCLUT29) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT30_REG_OFST        (0x1278)            /**< (LCDC_HEOCLUT30) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT31_REG_OFST        (0x127C)            /**< (LCDC_HEOCLUT31) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT32_REG_OFST        (0x1280)            /**< (LCDC_HEOCLUT32) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT33_REG_OFST        (0x1284)            /**< (LCDC_HEOCLUT33) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT34_REG_OFST        (0x1288)            /**< (LCDC_HEOCLUT34) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT35_REG_OFST        (0x128C)            /**< (LCDC_HEOCLUT35) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT36_REG_OFST        (0x1290)            /**< (LCDC_HEOCLUT36) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT37_REG_OFST        (0x1294)            /**< (LCDC_HEOCLUT37) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT38_REG_OFST        (0x1298)            /**< (LCDC_HEOCLUT38) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT39_REG_OFST        (0x129C)            /**< (LCDC_HEOCLUT39) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT40_REG_OFST        (0x12A0)            /**< (LCDC_HEOCLUT40) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT41_REG_OFST        (0x12A4)            /**< (LCDC_HEOCLUT41) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT42_REG_OFST        (0x12A8)            /**< (LCDC_HEOCLUT42) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT43_REG_OFST        (0x12AC)            /**< (LCDC_HEOCLUT43) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT44_REG_OFST        (0x12B0)            /**< (LCDC_HEOCLUT44) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT45_REG_OFST        (0x12B4)            /**< (LCDC_HEOCLUT45) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT46_REG_OFST        (0x12B8)            /**< (LCDC_HEOCLUT46) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT47_REG_OFST        (0x12BC)            /**< (LCDC_HEOCLUT47) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT48_REG_OFST        (0x12C0)            /**< (LCDC_HEOCLUT48) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT49_REG_OFST        (0x12C4)            /**< (LCDC_HEOCLUT49) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT50_REG_OFST        (0x12C8)            /**< (LCDC_HEOCLUT50) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT51_REG_OFST        (0x12CC)            /**< (LCDC_HEOCLUT51) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT52_REG_OFST        (0x12D0)            /**< (LCDC_HEOCLUT52) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT53_REG_OFST        (0x12D4)            /**< (LCDC_HEOCLUT53) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT54_REG_OFST        (0x12D8)            /**< (LCDC_HEOCLUT54) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT55_REG_OFST        (0x12DC)            /**< (LCDC_HEOCLUT55) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT56_REG_OFST        (0x12E0)            /**< (LCDC_HEOCLUT56) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT57_REG_OFST        (0x12E4)            /**< (LCDC_HEOCLUT57) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT58_REG_OFST        (0x12E8)            /**< (LCDC_HEOCLUT58) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT59_REG_OFST        (0x12EC)            /**< (LCDC_HEOCLUT59) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT60_REG_OFST        (0x12F0)            /**< (LCDC_HEOCLUT60) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT61_REG_OFST        (0x12F4)            /**< (LCDC_HEOCLUT61) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT62_REG_OFST        (0x12F8)            /**< (LCDC_HEOCLUT62) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT63_REG_OFST        (0x12FC)            /**< (LCDC_HEOCLUT63) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT64_REG_OFST        (0x1300)            /**< (LCDC_HEOCLUT64) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT65_REG_OFST        (0x1304)            /**< (LCDC_HEOCLUT65) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT66_REG_OFST        (0x1308)            /**< (LCDC_HEOCLUT66) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT67_REG_OFST        (0x130C)            /**< (LCDC_HEOCLUT67) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT68_REG_OFST        (0x1310)            /**< (LCDC_HEOCLUT68) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT69_REG_OFST        (0x1314)            /**< (LCDC_HEOCLUT69) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT70_REG_OFST        (0x1318)            /**< (LCDC_HEOCLUT70) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT71_REG_OFST        (0x131C)            /**< (LCDC_HEOCLUT71) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT72_REG_OFST        (0x1320)            /**< (LCDC_HEOCLUT72) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT73_REG_OFST        (0x1324)            /**< (LCDC_HEOCLUT73) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT74_REG_OFST        (0x1328)            /**< (LCDC_HEOCLUT74) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT75_REG_OFST        (0x132C)            /**< (LCDC_HEOCLUT75) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT76_REG_OFST        (0x1330)            /**< (LCDC_HEOCLUT76) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT77_REG_OFST        (0x1334)            /**< (LCDC_HEOCLUT77) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT78_REG_OFST        (0x1338)            /**< (LCDC_HEOCLUT78) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT79_REG_OFST        (0x133C)            /**< (LCDC_HEOCLUT79) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT80_REG_OFST        (0x1340)            /**< (LCDC_HEOCLUT80) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT81_REG_OFST        (0x1344)            /**< (LCDC_HEOCLUT81) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT82_REG_OFST        (0x1348)            /**< (LCDC_HEOCLUT82) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT83_REG_OFST        (0x134C)            /**< (LCDC_HEOCLUT83) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT84_REG_OFST        (0x1350)            /**< (LCDC_HEOCLUT84) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT85_REG_OFST        (0x1354)            /**< (LCDC_HEOCLUT85) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT86_REG_OFST        (0x1358)            /**< (LCDC_HEOCLUT86) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT87_REG_OFST        (0x135C)            /**< (LCDC_HEOCLUT87) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT88_REG_OFST        (0x1360)            /**< (LCDC_HEOCLUT88) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT89_REG_OFST        (0x1364)            /**< (LCDC_HEOCLUT89) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT90_REG_OFST        (0x1368)            /**< (LCDC_HEOCLUT90) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT91_REG_OFST        (0x136C)            /**< (LCDC_HEOCLUT91) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT92_REG_OFST        (0x1370)            /**< (LCDC_HEOCLUT92) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT93_REG_OFST        (0x1374)            /**< (LCDC_HEOCLUT93) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT94_REG_OFST        (0x1378)            /**< (LCDC_HEOCLUT94) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT95_REG_OFST        (0x137C)            /**< (LCDC_HEOCLUT95) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT96_REG_OFST        (0x1380)            /**< (LCDC_HEOCLUT96) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT97_REG_OFST        (0x1384)            /**< (LCDC_HEOCLUT97) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT98_REG_OFST        (0x1388)            /**< (LCDC_HEOCLUT98) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT99_REG_OFST        (0x138C)            /**< (LCDC_HEOCLUT99) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT100_REG_OFST       (0x1390)            /**< (LCDC_HEOCLUT100) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT101_REG_OFST       (0x1394)            /**< (LCDC_HEOCLUT101) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT102_REG_OFST       (0x1398)            /**< (LCDC_HEOCLUT102) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT103_REG_OFST       (0x139C)            /**< (LCDC_HEOCLUT103) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT104_REG_OFST       (0x13A0)            /**< (LCDC_HEOCLUT104) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT105_REG_OFST       (0x13A4)            /**< (LCDC_HEOCLUT105) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT106_REG_OFST       (0x13A8)            /**< (LCDC_HEOCLUT106) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT107_REG_OFST       (0x13AC)            /**< (LCDC_HEOCLUT107) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT108_REG_OFST       (0x13B0)            /**< (LCDC_HEOCLUT108) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT109_REG_OFST       (0x13B4)            /**< (LCDC_HEOCLUT109) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT110_REG_OFST       (0x13B8)            /**< (LCDC_HEOCLUT110) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT111_REG_OFST       (0x13BC)            /**< (LCDC_HEOCLUT111) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT112_REG_OFST       (0x13C0)            /**< (LCDC_HEOCLUT112) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT113_REG_OFST       (0x13C4)            /**< (LCDC_HEOCLUT113) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT114_REG_OFST       (0x13C8)            /**< (LCDC_HEOCLUT114) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT115_REG_OFST       (0x13CC)            /**< (LCDC_HEOCLUT115) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT116_REG_OFST       (0x13D0)            /**< (LCDC_HEOCLUT116) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT117_REG_OFST       (0x13D4)            /**< (LCDC_HEOCLUT117) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT118_REG_OFST       (0x13D8)            /**< (LCDC_HEOCLUT118) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT119_REG_OFST       (0x13DC)            /**< (LCDC_HEOCLUT119) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT120_REG_OFST       (0x13E0)            /**< (LCDC_HEOCLUT120) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT121_REG_OFST       (0x13E4)            /**< (LCDC_HEOCLUT121) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT122_REG_OFST       (0x13E8)            /**< (LCDC_HEOCLUT122) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT123_REG_OFST       (0x13EC)            /**< (LCDC_HEOCLUT123) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT124_REG_OFST       (0x13F0)            /**< (LCDC_HEOCLUT124) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT125_REG_OFST       (0x13F4)            /**< (LCDC_HEOCLUT125) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT126_REG_OFST       (0x13F8)            /**< (LCDC_HEOCLUT126) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT127_REG_OFST       (0x13FC)            /**< (LCDC_HEOCLUT127) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT128_REG_OFST       (0x1400)            /**< (LCDC_HEOCLUT128) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT129_REG_OFST       (0x1404)            /**< (LCDC_HEOCLUT129) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT130_REG_OFST       (0x1408)            /**< (LCDC_HEOCLUT130) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT131_REG_OFST       (0x140C)            /**< (LCDC_HEOCLUT131) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT132_REG_OFST       (0x1410)            /**< (LCDC_HEOCLUT132) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT133_REG_OFST       (0x1414)            /**< (LCDC_HEOCLUT133) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT134_REG_OFST       (0x1418)            /**< (LCDC_HEOCLUT134) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT135_REG_OFST       (0x141C)            /**< (LCDC_HEOCLUT135) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT136_REG_OFST       (0x1420)            /**< (LCDC_HEOCLUT136) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT137_REG_OFST       (0x1424)            /**< (LCDC_HEOCLUT137) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT138_REG_OFST       (0x1428)            /**< (LCDC_HEOCLUT138) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT139_REG_OFST       (0x142C)            /**< (LCDC_HEOCLUT139) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT140_REG_OFST       (0x1430)            /**< (LCDC_HEOCLUT140) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT141_REG_OFST       (0x1434)            /**< (LCDC_HEOCLUT141) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT142_REG_OFST       (0x1438)            /**< (LCDC_HEOCLUT142) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT143_REG_OFST       (0x143C)            /**< (LCDC_HEOCLUT143) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT144_REG_OFST       (0x1440)            /**< (LCDC_HEOCLUT144) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT145_REG_OFST       (0x1444)            /**< (LCDC_HEOCLUT145) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT146_REG_OFST       (0x1448)            /**< (LCDC_HEOCLUT146) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT147_REG_OFST       (0x144C)            /**< (LCDC_HEOCLUT147) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT148_REG_OFST       (0x1450)            /**< (LCDC_HEOCLUT148) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT149_REG_OFST       (0x1454)            /**< (LCDC_HEOCLUT149) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT150_REG_OFST       (0x1458)            /**< (LCDC_HEOCLUT150) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT151_REG_OFST       (0x145C)            /**< (LCDC_HEOCLUT151) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT152_REG_OFST       (0x1460)            /**< (LCDC_HEOCLUT152) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT153_REG_OFST       (0x1464)            /**< (LCDC_HEOCLUT153) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT154_REG_OFST       (0x1468)            /**< (LCDC_HEOCLUT154) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT155_REG_OFST       (0x146C)            /**< (LCDC_HEOCLUT155) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT156_REG_OFST       (0x1470)            /**< (LCDC_HEOCLUT156) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT157_REG_OFST       (0x1474)            /**< (LCDC_HEOCLUT157) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT158_REG_OFST       (0x1478)            /**< (LCDC_HEOCLUT158) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT159_REG_OFST       (0x147C)            /**< (LCDC_HEOCLUT159) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT160_REG_OFST       (0x1480)            /**< (LCDC_HEOCLUT160) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT161_REG_OFST       (0x1484)            /**< (LCDC_HEOCLUT161) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT162_REG_OFST       (0x1488)            /**< (LCDC_HEOCLUT162) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT163_REG_OFST       (0x148C)            /**< (LCDC_HEOCLUT163) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT164_REG_OFST       (0x1490)            /**< (LCDC_HEOCLUT164) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT165_REG_OFST       (0x1494)            /**< (LCDC_HEOCLUT165) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT166_REG_OFST       (0x1498)            /**< (LCDC_HEOCLUT166) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT167_REG_OFST       (0x149C)            /**< (LCDC_HEOCLUT167) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT168_REG_OFST       (0x14A0)            /**< (LCDC_HEOCLUT168) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT169_REG_OFST       (0x14A4)            /**< (LCDC_HEOCLUT169) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT170_REG_OFST       (0x14A8)            /**< (LCDC_HEOCLUT170) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT171_REG_OFST       (0x14AC)            /**< (LCDC_HEOCLUT171) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT172_REG_OFST       (0x14B0)            /**< (LCDC_HEOCLUT172) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT173_REG_OFST       (0x14B4)            /**< (LCDC_HEOCLUT173) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT174_REG_OFST       (0x14B8)            /**< (LCDC_HEOCLUT174) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT175_REG_OFST       (0x14BC)            /**< (LCDC_HEOCLUT175) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT176_REG_OFST       (0x14C0)            /**< (LCDC_HEOCLUT176) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT177_REG_OFST       (0x14C4)            /**< (LCDC_HEOCLUT177) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT178_REG_OFST       (0x14C8)            /**< (LCDC_HEOCLUT178) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT179_REG_OFST       (0x14CC)            /**< (LCDC_HEOCLUT179) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT180_REG_OFST       (0x14D0)            /**< (LCDC_HEOCLUT180) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT181_REG_OFST       (0x14D4)            /**< (LCDC_HEOCLUT181) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT182_REG_OFST       (0x14D8)            /**< (LCDC_HEOCLUT182) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT183_REG_OFST       (0x14DC)            /**< (LCDC_HEOCLUT183) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT184_REG_OFST       (0x14E0)            /**< (LCDC_HEOCLUT184) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT185_REG_OFST       (0x14E4)            /**< (LCDC_HEOCLUT185) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT186_REG_OFST       (0x14E8)            /**< (LCDC_HEOCLUT186) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT187_REG_OFST       (0x14EC)            /**< (LCDC_HEOCLUT187) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT188_REG_OFST       (0x14F0)            /**< (LCDC_HEOCLUT188) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT189_REG_OFST       (0x14F4)            /**< (LCDC_HEOCLUT189) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT190_REG_OFST       (0x14F8)            /**< (LCDC_HEOCLUT190) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT191_REG_OFST       (0x14FC)            /**< (LCDC_HEOCLUT191) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT192_REG_OFST       (0x1500)            /**< (LCDC_HEOCLUT192) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT193_REG_OFST       (0x1504)            /**< (LCDC_HEOCLUT193) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT194_REG_OFST       (0x1508)            /**< (LCDC_HEOCLUT194) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT195_REG_OFST       (0x150C)            /**< (LCDC_HEOCLUT195) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT196_REG_OFST       (0x1510)            /**< (LCDC_HEOCLUT196) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT197_REG_OFST       (0x1514)            /**< (LCDC_HEOCLUT197) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT198_REG_OFST       (0x1518)            /**< (LCDC_HEOCLUT198) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT199_REG_OFST       (0x151C)            /**< (LCDC_HEOCLUT199) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT200_REG_OFST       (0x1520)            /**< (LCDC_HEOCLUT200) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT201_REG_OFST       (0x1524)            /**< (LCDC_HEOCLUT201) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT202_REG_OFST       (0x1528)            /**< (LCDC_HEOCLUT202) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT203_REG_OFST       (0x152C)            /**< (LCDC_HEOCLUT203) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT204_REG_OFST       (0x1530)            /**< (LCDC_HEOCLUT204) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT205_REG_OFST       (0x1534)            /**< (LCDC_HEOCLUT205) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT206_REG_OFST       (0x1538)            /**< (LCDC_HEOCLUT206) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT207_REG_OFST       (0x153C)            /**< (LCDC_HEOCLUT207) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT208_REG_OFST       (0x1540)            /**< (LCDC_HEOCLUT208) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT209_REG_OFST       (0x1544)            /**< (LCDC_HEOCLUT209) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT210_REG_OFST       (0x1548)            /**< (LCDC_HEOCLUT210) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT211_REG_OFST       (0x154C)            /**< (LCDC_HEOCLUT211) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT212_REG_OFST       (0x1550)            /**< (LCDC_HEOCLUT212) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT213_REG_OFST       (0x1554)            /**< (LCDC_HEOCLUT213) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT214_REG_OFST       (0x1558)            /**< (LCDC_HEOCLUT214) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT215_REG_OFST       (0x155C)            /**< (LCDC_HEOCLUT215) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT216_REG_OFST       (0x1560)            /**< (LCDC_HEOCLUT216) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT217_REG_OFST       (0x1564)            /**< (LCDC_HEOCLUT217) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT218_REG_OFST       (0x1568)            /**< (LCDC_HEOCLUT218) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT219_REG_OFST       (0x156C)            /**< (LCDC_HEOCLUT219) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT220_REG_OFST       (0x1570)            /**< (LCDC_HEOCLUT220) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT221_REG_OFST       (0x1574)            /**< (LCDC_HEOCLUT221) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT222_REG_OFST       (0x1578)            /**< (LCDC_HEOCLUT222) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT223_REG_OFST       (0x157C)            /**< (LCDC_HEOCLUT223) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT224_REG_OFST       (0x1580)            /**< (LCDC_HEOCLUT224) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT225_REG_OFST       (0x1584)            /**< (LCDC_HEOCLUT225) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT226_REG_OFST       (0x1588)            /**< (LCDC_HEOCLUT226) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT227_REG_OFST       (0x158C)            /**< (LCDC_HEOCLUT227) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT228_REG_OFST       (0x1590)            /**< (LCDC_HEOCLUT228) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT229_REG_OFST       (0x1594)            /**< (LCDC_HEOCLUT229) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT230_REG_OFST       (0x1598)            /**< (LCDC_HEOCLUT230) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT231_REG_OFST       (0x159C)            /**< (LCDC_HEOCLUT231) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT232_REG_OFST       (0x15A0)            /**< (LCDC_HEOCLUT232) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT233_REG_OFST       (0x15A4)            /**< (LCDC_HEOCLUT233) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT234_REG_OFST       (0x15A8)            /**< (LCDC_HEOCLUT234) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT235_REG_OFST       (0x15AC)            /**< (LCDC_HEOCLUT235) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT236_REG_OFST       (0x15B0)            /**< (LCDC_HEOCLUT236) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT237_REG_OFST       (0x15B4)            /**< (LCDC_HEOCLUT237) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT238_REG_OFST       (0x15B8)            /**< (LCDC_HEOCLUT238) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT239_REG_OFST       (0x15BC)            /**< (LCDC_HEOCLUT239) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT240_REG_OFST       (0x15C0)            /**< (LCDC_HEOCLUT240) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT241_REG_OFST       (0x15C4)            /**< (LCDC_HEOCLUT241) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT242_REG_OFST       (0x15C8)            /**< (LCDC_HEOCLUT242) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT243_REG_OFST       (0x15CC)            /**< (LCDC_HEOCLUT243) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT244_REG_OFST       (0x15D0)            /**< (LCDC_HEOCLUT244) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT245_REG_OFST       (0x15D4)            /**< (LCDC_HEOCLUT245) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT246_REG_OFST       (0x15D8)            /**< (LCDC_HEOCLUT246) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT247_REG_OFST       (0x15DC)            /**< (LCDC_HEOCLUT247) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT248_REG_OFST       (0x15E0)            /**< (LCDC_HEOCLUT248) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT249_REG_OFST       (0x15E4)            /**< (LCDC_HEOCLUT249) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT250_REG_OFST       (0x15E8)            /**< (LCDC_HEOCLUT250) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT251_REG_OFST       (0x15EC)            /**< (LCDC_HEOCLUT251) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT252_REG_OFST       (0x15F0)            /**< (LCDC_HEOCLUT252) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT253_REG_OFST       (0x15F4)            /**< (LCDC_HEOCLUT253) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT254_REG_OFST       (0x15F8)            /**< (LCDC_HEOCLUT254) High-End Overlay CLUT Register Offset */
#define LCDC_HEOCLUT255_REG_OFST       (0x15FC)            /**< (LCDC_HEOCLUT255) High-End Overlay CLUT Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief LCDC register API structure */
typedef struct
{
  __IO  uint32_t                       LCDC_LCDCFG0;       /**< Offset: 0x00 (R/W  32) LCD Controller Configuration Register 0 */
  __IO  uint32_t                       LCDC_LCDCFG1;       /**< Offset: 0x04 (R/W  32) LCD Controller Configuration Register 1 */
  __IO  uint32_t                       LCDC_LCDCFG2;       /**< Offset: 0x08 (R/W  32) LCD Controller Configuration Register 2 */
  __IO  uint32_t                       LCDC_LCDCFG3;       /**< Offset: 0x0C (R/W  32) LCD Controller Configuration Register 3 */
  __IO  uint32_t                       LCDC_LCDCFG4;       /**< Offset: 0x10 (R/W  32) LCD Controller Configuration Register 4 */
  __IO  uint32_t                       LCDC_LCDCFG5;       /**< Offset: 0x14 (R/W  32) LCD Controller Configuration Register 5 */
  __IO  uint32_t                       LCDC_LCDCFG6;       /**< Offset: 0x18 (R/W  32) LCD Controller Configuration Register 6 */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       LCDC_LCDEN;         /**< Offset: 0x20 ( /W  32) LCD Controller Enable Register */
  __O   uint32_t                       LCDC_LCDDIS;        /**< Offset: 0x24 ( /W  32) LCD Controller Disable Register */
  __I   uint32_t                       LCDC_LCDSR;         /**< Offset: 0x28 (R/   32) LCD Controller Status Register */
  __O   uint32_t                       LCDC_LCDIER;        /**< Offset: 0x2C ( /W  32) LCD Controller Interrupt Enable Register */
  __O   uint32_t                       LCDC_LCDIDR;        /**< Offset: 0x30 ( /W  32) LCD Controller Interrupt Disable Register */
  __I   uint32_t                       LCDC_LCDIMR;        /**< Offset: 0x34 (R/   32) LCD Controller Interrupt Mask Register */
  __I   uint32_t                       LCDC_LCDISR;        /**< Offset: 0x38 (R/   32) LCD Controller Interrupt Status Register */
  __O   uint32_t                       LCDC_ATTR;          /**< Offset: 0x3C ( /W  32) LCD Controller Attribute Register */
  __O   uint32_t                       LCDC_BASECHER;      /**< Offset: 0x40 ( /W  32) Base Layer Channel Enable Register */
  __O   uint32_t                       LCDC_BASECHDR;      /**< Offset: 0x44 ( /W  32) Base Layer Channel Disable Register */
  __I   uint32_t                       LCDC_BASECHSR;      /**< Offset: 0x48 (R/   32) Base Layer Channel Status Register */
  __O   uint32_t                       LCDC_BASEIER;       /**< Offset: 0x4C ( /W  32) Base Layer Interrupt Enable Register */
  __O   uint32_t                       LCDC_BASEIDR;       /**< Offset: 0x50 ( /W  32) Base Layer Interrupt Disabled Register */
  __I   uint32_t                       LCDC_BASEIMR;       /**< Offset: 0x54 (R/   32) Base Layer Interrupt Mask Register */
  __I   uint32_t                       LCDC_BASEISR;       /**< Offset: 0x58 (R/   32) Base Layer Interrupt Status Register */
  __IO  uint32_t                       LCDC_BASEHEAD;      /**< Offset: 0x5C (R/W  32) Base DMA Head Register */
  __IO  uint32_t                       LCDC_BASEADDR;      /**< Offset: 0x60 (R/W  32) Base DMA Address Register */
  __IO  uint32_t                       LCDC_BASECTRL;      /**< Offset: 0x64 (R/W  32) Base DMA Control Register */
  __IO  uint32_t                       LCDC_BASENEXT;      /**< Offset: 0x68 (R/W  32) Base DMA Next Register */
  __IO  uint32_t                       LCDC_BASECFG0;      /**< Offset: 0x6C (R/W  32) Base Layer Configuration Register 0 */
  __IO  uint32_t                       LCDC_BASECFG1;      /**< Offset: 0x70 (R/W  32) Base Layer Configuration Register 1 */
  __IO  uint32_t                       LCDC_BASECFG2;      /**< Offset: 0x74 (R/W  32) Base Layer Configuration Register 2 */
  __IO  uint32_t                       LCDC_BASECFG3;      /**< Offset: 0x78 (R/W  32) Base Layer Configuration Register 3 */
  __IO  uint32_t                       LCDC_BASECFG4;      /**< Offset: 0x7C (R/W  32) Base Layer Configuration Register 4 */
  __IO  uint32_t                       LCDC_BASECFG5;      /**< Offset: 0x80 (R/W  32) Base Layer Configuration Register 5 */
  __IO  uint32_t                       LCDC_BASECFG6;      /**< Offset: 0x84 (R/W  32) Base Layer Configuration Register 6 */
  __I   uint8_t                        Reserved2[0xB8];
  __O   uint32_t                       LCDC_OVR1CHER;      /**< Offset: 0x140 ( /W  32) Overlay 1 Channel Enable Register */
  __O   uint32_t                       LCDC_OVR1CHDR;      /**< Offset: 0x144 ( /W  32) Overlay 1 Channel Disable Register */
  __I   uint32_t                       LCDC_OVR1CHSR;      /**< Offset: 0x148 (R/   32) Overlay 1 Channel Status Register */
  __O   uint32_t                       LCDC_OVR1IER;       /**< Offset: 0x14C ( /W  32) Overlay 1 Interrupt Enable Register */
  __O   uint32_t                       LCDC_OVR1IDR;       /**< Offset: 0x150 ( /W  32) Overlay 1 Interrupt Disable Register */
  __I   uint32_t                       LCDC_OVR1IMR;       /**< Offset: 0x154 (R/   32) Overlay 1 Interrupt Mask Register */
  __I   uint32_t                       LCDC_OVR1ISR;       /**< Offset: 0x158 (R/   32) Overlay 1 Interrupt Status Register */
  __IO  uint32_t                       LCDC_OVR1HEAD;      /**< Offset: 0x15C (R/W  32) Overlay 1 DMA Head Register */
  __IO  uint32_t                       LCDC_OVR1ADDR;      /**< Offset: 0x160 (R/W  32) Overlay 1 DMA Address Register */
  __IO  uint32_t                       LCDC_OVR1CTRL;      /**< Offset: 0x164 (R/W  32) Overlay 1 DMA Control Register */
  __IO  uint32_t                       LCDC_OVR1NEXT;      /**< Offset: 0x168 (R/W  32) Overlay 1 DMA Next Register */
  __IO  uint32_t                       LCDC_OVR1CFG0;      /**< Offset: 0x16C (R/W  32) Overlay 1 Configuration Register 0 */
  __IO  uint32_t                       LCDC_OVR1CFG1;      /**< Offset: 0x170 (R/W  32) Overlay 1 Configuration Register 1 */
  __IO  uint32_t                       LCDC_OVR1CFG2;      /**< Offset: 0x174 (R/W  32) Overlay 1 Configuration Register 2 */
  __IO  uint32_t                       LCDC_OVR1CFG3;      /**< Offset: 0x178 (R/W  32) Overlay 1 Configuration Register 3 */
  __IO  uint32_t                       LCDC_OVR1CFG4;      /**< Offset: 0x17C (R/W  32) Overlay 1 Configuration Register 4 */
  __IO  uint32_t                       LCDC_OVR1CFG5;      /**< Offset: 0x180 (R/W  32) Overlay 1 Configuration Register 5 */
  __IO  uint32_t                       LCDC_OVR1CFG6;      /**< Offset: 0x184 (R/W  32) Overlay 1 Configuration Register 6 */
  __IO  uint32_t                       LCDC_OVR1CFG7;      /**< Offset: 0x188 (R/W  32) Overlay 1 Configuration Register 7 */
  __IO  uint32_t                       LCDC_OVR1CFG8;      /**< Offset: 0x18C (R/W  32) Overlay 1 Configuration Register 8 */
  __IO  uint32_t                       LCDC_OVR1CFG9;      /**< Offset: 0x190 (R/W  32) Overlay 1 Configuration Register 9 */
  __I   uint8_t                        Reserved3[0xAC];
  __O   uint32_t                       LCDC_OVR2CHER;      /**< Offset: 0x240 ( /W  32) Overlay 2 Channel Enable Register */
  __O   uint32_t                       LCDC_OVR2CHDR;      /**< Offset: 0x244 ( /W  32) Overlay 2 Channel Disable Register */
  __I   uint32_t                       LCDC_OVR2CHSR;      /**< Offset: 0x248 (R/   32) Overlay 2 Channel Status Register */
  __O   uint32_t                       LCDC_OVR2IER;       /**< Offset: 0x24C ( /W  32) Overlay 2 Interrupt Enable Register */
  __O   uint32_t                       LCDC_OVR2IDR;       /**< Offset: 0x250 ( /W  32) Overlay 2 Interrupt Disable Register */
  __I   uint32_t                       LCDC_OVR2IMR;       /**< Offset: 0x254 (R/   32) Overlay 2 Interrupt Mask Register */
  __I   uint32_t                       LCDC_OVR2ISR;       /**< Offset: 0x258 (R/   32) Overlay 2 Interrupt Status Register */
  __IO  uint32_t                       LCDC_OVR2HEAD;      /**< Offset: 0x25C (R/W  32) Overlay 2 DMA Head Register */
  __IO  uint32_t                       LCDC_OVR2ADDR;      /**< Offset: 0x260 (R/W  32) Overlay 2 DMA Address Register */
  __IO  uint32_t                       LCDC_OVR2CTRL;      /**< Offset: 0x264 (R/W  32) Overlay 2 DMA Control Register */
  __IO  uint32_t                       LCDC_OVR2NEXT;      /**< Offset: 0x268 (R/W  32) Overlay 2 DMA Next Register */
  __IO  uint32_t                       LCDC_OVR2CFG0;      /**< Offset: 0x26C (R/W  32) Overlay 2 Configuration Register 0 */
  __IO  uint32_t                       LCDC_OVR2CFG1;      /**< Offset: 0x270 (R/W  32) Overlay 2 Configuration Register 1 */
  __IO  uint32_t                       LCDC_OVR2CFG2;      /**< Offset: 0x274 (R/W  32) Overlay 2 Configuration Register 2 */
  __IO  uint32_t                       LCDC_OVR2CFG3;      /**< Offset: 0x278 (R/W  32) Overlay 2 Configuration Register 3 */
  __IO  uint32_t                       LCDC_OVR2CFG4;      /**< Offset: 0x27C (R/W  32) Overlay 2 Configuration Register 4 */
  __IO  uint32_t                       LCDC_OVR2CFG5;      /**< Offset: 0x280 (R/W  32) Overlay 2 Configuration Register 5 */
  __IO  uint32_t                       LCDC_OVR2CFG6;      /**< Offset: 0x284 (R/W  32) Overlay 2 Configuration Register 6 */
  __IO  uint32_t                       LCDC_OVR2CFG7;      /**< Offset: 0x288 (R/W  32) Overlay 2 Configuration Register 7 */
  __IO  uint32_t                       LCDC_OVR2CFG8;      /**< Offset: 0x28C (R/W  32) Overlay 2 Configuration Register 8 */
  __IO  uint32_t                       LCDC_OVR2CFG9;      /**< Offset: 0x290 (R/W  32) Overlay 2 Configuration Register 9 */
  __I   uint8_t                        Reserved4[0xAC];
  __O   uint32_t                       LCDC_HEOCHER;       /**< Offset: 0x340 ( /W  32) High-End Overlay Channel Enable Register */
  __O   uint32_t                       LCDC_HEOCHDR;       /**< Offset: 0x344 ( /W  32) High-End Overlay Channel Disable Register */
  __I   uint32_t                       LCDC_HEOCHSR;       /**< Offset: 0x348 (R/   32) High-End Overlay Channel Status Register */
  __O   uint32_t                       LCDC_HEOIER;        /**< Offset: 0x34C ( /W  32) High-End Overlay Interrupt Enable Register */
  __O   uint32_t                       LCDC_HEOIDR;        /**< Offset: 0x350 ( /W  32) High-End Overlay Interrupt Disable Register */
  __I   uint32_t                       LCDC_HEOIMR;        /**< Offset: 0x354 (R/   32) High-End Overlay Interrupt Mask Register */
  __I   uint32_t                       LCDC_HEOISR;        /**< Offset: 0x358 (R/   32) High-End Overlay Interrupt Status Register */
  __IO  uint32_t                       LCDC_HEOHEAD;       /**< Offset: 0x35C (R/W  32) High-End Overlay DMA Head Register */
  __IO  uint32_t                       LCDC_HEOADDR;       /**< Offset: 0x360 (R/W  32) High-End Overlay DMA Address Register */
  __IO  uint32_t                       LCDC_HEOCTRL;       /**< Offset: 0x364 (R/W  32) High-End Overlay DMA Control Register */
  __IO  uint32_t                       LCDC_HEONEXT;       /**< Offset: 0x368 (R/W  32) High-End Overlay DMA Next Register */
  __IO  uint32_t                       LCDC_HEOUHEAD;      /**< Offset: 0x36C (R/W  32) High-End Overlay U-UV DMA Head Register */
  __IO  uint32_t                       LCDC_HEOUADDR;      /**< Offset: 0x370 (R/W  32) High-End Overlay U-UV DMA Address Register */
  __IO  uint32_t                       LCDC_HEOUCTRL;      /**< Offset: 0x374 (R/W  32) High-End Overlay U-UV DMA Control Register */
  __IO  uint32_t                       LCDC_HEOUNEXT;      /**< Offset: 0x378 (R/W  32) High-End Overlay U-UV DMA Next Register */
  __IO  uint32_t                       LCDC_HEOVHEAD;      /**< Offset: 0x37C (R/W  32) High-End Overlay V DMA Head Register */
  __IO  uint32_t                       LCDC_HEOVADDR;      /**< Offset: 0x380 (R/W  32) High-End Overlay V DMA Address Register */
  __IO  uint32_t                       LCDC_HEOVCTRL;      /**< Offset: 0x384 (R/W  32) High-End Overlay V DMA Control Register */
  __IO  uint32_t                       LCDC_HEOVNEXT;      /**< Offset: 0x388 (R/W  32) High-End Overlay V DMA Next Register */
  __IO  uint32_t                       LCDC_HEOCFG0;       /**< Offset: 0x38C (R/W  32) High-End Overlay Configuration Register 0 */
  __IO  uint32_t                       LCDC_HEOCFG1;       /**< Offset: 0x390 (R/W  32) High-End Overlay Configuration Register 1 */
  __IO  uint32_t                       LCDC_HEOCFG2;       /**< Offset: 0x394 (R/W  32) High-End Overlay Configuration Register 2 */
  __IO  uint32_t                       LCDC_HEOCFG3;       /**< Offset: 0x398 (R/W  32) High-End Overlay Configuration Register 3 */
  __IO  uint32_t                       LCDC_HEOCFG4;       /**< Offset: 0x39C (R/W  32) High-End Overlay Configuration Register 4 */
  __IO  uint32_t                       LCDC_HEOCFG5;       /**< Offset: 0x3A0 (R/W  32) High-End Overlay Configuration Register 5 */
  __IO  uint32_t                       LCDC_HEOCFG6;       /**< Offset: 0x3A4 (R/W  32) High-End Overlay Configuration Register 6 */
  __IO  uint32_t                       LCDC_HEOCFG7;       /**< Offset: 0x3A8 (R/W  32) High-End Overlay Configuration Register 7 */
  __IO  uint32_t                       LCDC_HEOCFG8;       /**< Offset: 0x3AC (R/W  32) High-End Overlay Configuration Register 8 */
  __IO  uint32_t                       LCDC_HEOCFG9;       /**< Offset: 0x3B0 (R/W  32) High-End Overlay Configuration Register 9 */
  __IO  uint32_t                       LCDC_HEOCFG10;      /**< Offset: 0x3B4 (R/W  32) High-End Overlay Configuration Register 10 */
  __IO  uint32_t                       LCDC_HEOCFG11;      /**< Offset: 0x3B8 (R/W  32) High-End Overlay Configuration Register 11 */
  __IO  uint32_t                       LCDC_HEOCFG12;      /**< Offset: 0x3BC (R/W  32) High-End Overlay Configuration Register 12 */
  __IO  uint32_t                       LCDC_HEOCFG13;      /**< Offset: 0x3C0 (R/W  32) High-End Overlay Configuration Register 13 */
  __IO  uint32_t                       LCDC_HEOCFG14;      /**< Offset: 0x3C4 (R/W  32) High-End Overlay Configuration Register 14 */
  __IO  uint32_t                       LCDC_HEOCFG15;      /**< Offset: 0x3C8 (R/W  32) High-End Overlay Configuration Register 15 */
  __IO  uint32_t                       LCDC_HEOCFG16;      /**< Offset: 0x3CC (R/W  32) High-End Overlay Configuration Register 16 */
  __IO  uint32_t                       LCDC_HEOCFG17;      /**< Offset: 0x3D0 (R/W  32) High-End Overlay Configuration Register 17 */
  __IO  uint32_t                       LCDC_HEOCFG18;      /**< Offset: 0x3D4 (R/W  32) High-End Overlay Configuration Register 18 */
  __IO  uint32_t                       LCDC_HEOCFG19;      /**< Offset: 0x3D8 (R/W  32) High-End Overlay Configuration Register 19 */
  __IO  uint32_t                       LCDC_HEOCFG20;      /**< Offset: 0x3DC (R/W  32) High-End Overlay Configuration Register 20 */
  __IO  uint32_t                       LCDC_HEOCFG21;      /**< Offset: 0x3E0 (R/W  32) High-End Overlay Configuration Register 21 */
  __IO  uint32_t                       LCDC_HEOCFG22;      /**< Offset: 0x3E4 (R/W  32) High-End Overlay Configuration Register 22 */
  __IO  uint32_t                       LCDC_HEOCFG23;      /**< Offset: 0x3E8 (R/W  32) High-End Overlay Configuration Register 23 */
  __IO  uint32_t                       LCDC_HEOCFG24;      /**< Offset: 0x3EC (R/W  32) High-End Overlay Configuration Register 24 */
  __IO  uint32_t                       LCDC_HEOCFG25;      /**< Offset: 0x3F0 (R/W  32) High-End Overlay Configuration Register 25 */
  __IO  uint32_t                       LCDC_HEOCFG26;      /**< Offset: 0x3F4 (R/W  32) High-End Overlay Configuration Register 26 */
  __IO  uint32_t                       LCDC_HEOCFG27;      /**< Offset: 0x3F8 (R/W  32) High-End Overlay Configuration Register 27 */
  __IO  uint32_t                       LCDC_HEOCFG28;      /**< Offset: 0x3FC (R/W  32) High-End Overlay Configuration Register 28 */
  __IO  uint32_t                       LCDC_HEOCFG29;      /**< Offset: 0x400 (R/W  32) High-End Overlay Configuration Register 29 */
  __IO  uint32_t                       LCDC_HEOCFG30;      /**< Offset: 0x404 (R/W  32) High-End Overlay Configuration Register 30 */
  __IO  uint32_t                       LCDC_HEOCFG31;      /**< Offset: 0x408 (R/W  32) High-End Overlay Configuration Register 31 */
  __IO  uint32_t                       LCDC_HEOCFG32;      /**< Offset: 0x40C (R/W  32) High-End Overlay Configuration Register 32 */
  __IO  uint32_t                       LCDC_HEOCFG33;      /**< Offset: 0x410 (R/W  32) High-End Overlay Configuration Register 33 */
  __IO  uint32_t                       LCDC_HEOCFG34;      /**< Offset: 0x414 (R/W  32) High-End Overlay Configuration Register 34 */
  __IO  uint32_t                       LCDC_HEOCFG35;      /**< Offset: 0x418 (R/W  32) High-End Overlay Configuration Register 35 */
  __IO  uint32_t                       LCDC_HEOCFG36;      /**< Offset: 0x41C (R/W  32) High-End Overlay Configuration Register 36 */
  __IO  uint32_t                       LCDC_HEOCFG37;      /**< Offset: 0x420 (R/W  32) High-End Overlay Configuration Register 37 */
  __IO  uint32_t                       LCDC_HEOCFG38;      /**< Offset: 0x424 (R/W  32) High-End Overlay Configuration Register 38 */
  __IO  uint32_t                       LCDC_HEOCFG39;      /**< Offset: 0x428 (R/W  32) High-End Overlay Configuration Register 39 */
  __IO  uint32_t                       LCDC_HEOCFG40;      /**< Offset: 0x42C (R/W  32) High-End Overlay Configuration Register 40 */
  __IO  uint32_t                       LCDC_HEOCFG41;      /**< Offset: 0x430 (R/W  32) High-End Overlay Configuration Register 41 */
  __I   uint8_t                        Reserved5[0x10C];
  __O   uint32_t                       LCDC_PPCHER;        /**< Offset: 0x540 ( /W  32) Post Processing Channel Enable Register */
  __O   uint32_t                       LCDC_PPCHDR;        /**< Offset: 0x544 ( /W  32) Post Processing Channel Disable Register */
  __I   uint32_t                       LCDC_PPCHSR;        /**< Offset: 0x548 (R/   32) Post Processing Channel Status Register */
  __O   uint32_t                       LCDC_PPIER;         /**< Offset: 0x54C ( /W  32) Post Processing Interrupt Enable Register */
  __O   uint32_t                       LCDC_PPIDR;         /**< Offset: 0x550 ( /W  32) Post Processing Interrupt Disable Register */
  __I   uint32_t                       LCDC_PPIMR;         /**< Offset: 0x554 (R/   32) Post Processing Interrupt Mask Register */
  __I   uint32_t                       LCDC_PPISR;         /**< Offset: 0x558 (R/   32) Post Processing Interrupt Status Register */
  __IO  uint32_t                       LCDC_PPHEAD;        /**< Offset: 0x55C (R/W  32) Post Processing Head Register */
  __IO  uint32_t                       LCDC_PPADDR;        /**< Offset: 0x560 (R/W  32) Post Processing Address Register */
  __IO  uint32_t                       LCDC_PPCTRL;        /**< Offset: 0x564 (R/W  32) Post Processing Control Register */
  __IO  uint32_t                       LCDC_PPNEXT;        /**< Offset: 0x568 (R/W  32) Post Processing Next Register */
  __IO  uint32_t                       LCDC_PPCFG0;        /**< Offset: 0x56C (R/W  32) Post Processing Configuration Register 0 */
  __IO  uint32_t                       LCDC_PPCFG1;        /**< Offset: 0x570 (R/W  32) Post Processing Configuration Register 1 */
  __IO  uint32_t                       LCDC_PPCFG2;        /**< Offset: 0x574 (R/W  32) Post Processing Configuration Register 2 */
  __IO  uint32_t                       LCDC_PPCFG3;        /**< Offset: 0x578 (R/W  32) Post Processing Configuration Register 3 */
  __IO  uint32_t                       LCDC_PPCFG4;        /**< Offset: 0x57C (R/W  32) Post Processing Configuration Register 4 */
  __IO  uint32_t                       LCDC_PPCFG5;        /**< Offset: 0x580 (R/W  32) Post Processing Configuration Register 5 */
  __I   uint8_t                        Reserved6[0x7C];
  __IO  uint32_t                       LCDC_BASECLUT[256]; /**< Offset: 0x600 (R/W  32) Base CLUT Register */
  __IO  uint32_t                       LCDC_OVR1CLUT[256]; /**< Offset: 0xA00 (R/W  32) Overlay 1 CLUT Register */
  __IO  uint32_t                       LCDC_OVR2CLUT[256]; /**< Offset: 0xE00 (R/W  32) Overlay 2 CLUT Register */
  __IO  uint32_t                       LCDC_HEOCLUT[256];  /**< Offset: 0x1200 (R/W  32) High-End Overlay CLUT Register */
} lcdc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_LCDC_COMPONENT_H_ */
