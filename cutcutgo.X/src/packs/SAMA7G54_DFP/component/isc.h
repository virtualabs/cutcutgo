/*
 * Component description for ISC
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
#ifndef _SAMA7G_ISC_COMPONENT_H_
#define _SAMA7G_ISC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ISC                                          */
/* ************************************************************************** */

/* -------- ISC_HXS_TAP10PHI : (ISC Offset: 0x00) (R/W 32) HXS TAP10 Phase Register  -------- */
#define ISC_HXS_TAP10PHI_RESETVALUE           _U_(0x00)                                            /**<  (ISC_HXS_TAP10PHI) HXS TAP10 Phase Register   Reset Value */

#define ISC_HXS_TAP10PHI_TAP0_Pos             _U_(0)                                               /**< (ISC_HXS_TAP10PHI) Vertical Filter Tap 0 Coefficient Position */
#define ISC_HXS_TAP10PHI_TAP0_Msk             (_U_(0x1FFF) << ISC_HXS_TAP10PHI_TAP0_Pos)           /**< (ISC_HXS_TAP10PHI) Vertical Filter Tap 0 Coefficient Mask */
#define ISC_HXS_TAP10PHI_TAP0(value)          (ISC_HXS_TAP10PHI_TAP0_Msk & ((value) << ISC_HXS_TAP10PHI_TAP0_Pos))
#define ISC_HXS_TAP10PHI_TAP1_Pos             _U_(16)                                              /**< (ISC_HXS_TAP10PHI) Vertical Filter Tap 1 Coefficient Position */
#define ISC_HXS_TAP10PHI_TAP1_Msk             (_U_(0x1FFF) << ISC_HXS_TAP10PHI_TAP1_Pos)           /**< (ISC_HXS_TAP10PHI) Vertical Filter Tap 1 Coefficient Mask */
#define ISC_HXS_TAP10PHI_TAP1(value)          (ISC_HXS_TAP10PHI_TAP1_Msk & ((value) << ISC_HXS_TAP10PHI_TAP1_Pos))
#define ISC_HXS_TAP10PHI_Msk                  _U_(0x1FFF1FFF)                                      /**< (ISC_HXS_TAP10PHI) Register Mask  */


/* -------- ISC_HXS_TAP32PHI : (ISC Offset: 0x04) (R/W 32) HXS TAP32 Phase Register  -------- */
#define ISC_HXS_TAP32PHI_RESETVALUE           _U_(0x00)                                            /**<  (ISC_HXS_TAP32PHI) HXS TAP32 Phase Register   Reset Value */

#define ISC_HXS_TAP32PHI_TAP2_Pos             _U_(0)                                               /**< (ISC_HXS_TAP32PHI) Vertical Filter Tap 2 Coefficient Position */
#define ISC_HXS_TAP32PHI_TAP2_Msk             (_U_(0x1FFF) << ISC_HXS_TAP32PHI_TAP2_Pos)           /**< (ISC_HXS_TAP32PHI) Vertical Filter Tap 2 Coefficient Mask */
#define ISC_HXS_TAP32PHI_TAP2(value)          (ISC_HXS_TAP32PHI_TAP2_Msk & ((value) << ISC_HXS_TAP32PHI_TAP2_Pos))
#define ISC_HXS_TAP32PHI_TAP3_Pos             _U_(16)                                              /**< (ISC_HXS_TAP32PHI) Vertical Filter Tap 3 Coefficient Position */
#define ISC_HXS_TAP32PHI_TAP3_Msk             (_U_(0x1FFF) << ISC_HXS_TAP32PHI_TAP3_Pos)           /**< (ISC_HXS_TAP32PHI) Vertical Filter Tap 3 Coefficient Mask */
#define ISC_HXS_TAP32PHI_TAP3(value)          (ISC_HXS_TAP32PHI_TAP3_Msk & ((value) << ISC_HXS_TAP32PHI_TAP3_Pos))
#define ISC_HXS_TAP32PHI_Msk                  _U_(0x1FFF1FFF)                                      /**< (ISC_HXS_TAP32PHI) Register Mask  */


/* -------- ISC_VXS_TAP10PHI : (ISC Offset: 0x00) (R/W 32) VXS TAP10 Phase Register  -------- */
#define ISC_VXS_TAP10PHI_RESETVALUE           _U_(0x00)                                            /**<  (ISC_VXS_TAP10PHI) VXS TAP10 Phase Register   Reset Value */

#define ISC_VXS_TAP10PHI_TAP0_Pos             _U_(0)                                               /**< (ISC_VXS_TAP10PHI) Vertical Filter Tap 0 Coefficient Position */
#define ISC_VXS_TAP10PHI_TAP0_Msk             (_U_(0x1FFF) << ISC_VXS_TAP10PHI_TAP0_Pos)           /**< (ISC_VXS_TAP10PHI) Vertical Filter Tap 0 Coefficient Mask */
#define ISC_VXS_TAP10PHI_TAP0(value)          (ISC_VXS_TAP10PHI_TAP0_Msk & ((value) << ISC_VXS_TAP10PHI_TAP0_Pos))
#define ISC_VXS_TAP10PHI_TAP1_Pos             _U_(16)                                              /**< (ISC_VXS_TAP10PHI) Vertical Filter Tap 1 Coefficient Position */
#define ISC_VXS_TAP10PHI_TAP1_Msk             (_U_(0x1FFF) << ISC_VXS_TAP10PHI_TAP1_Pos)           /**< (ISC_VXS_TAP10PHI) Vertical Filter Tap 1 Coefficient Mask */
#define ISC_VXS_TAP10PHI_TAP1(value)          (ISC_VXS_TAP10PHI_TAP1_Msk & ((value) << ISC_VXS_TAP10PHI_TAP1_Pos))
#define ISC_VXS_TAP10PHI_Msk                  _U_(0x1FFF1FFF)                                      /**< (ISC_VXS_TAP10PHI) Register Mask  */


/* -------- ISC_VXS_TAP32PHI : (ISC Offset: 0x04) (R/W 32) VXS TAP32 Phase Register  -------- */
#define ISC_VXS_TAP32PHI_RESETVALUE           _U_(0x00)                                            /**<  (ISC_VXS_TAP32PHI) VXS TAP32 Phase Register   Reset Value */

#define ISC_VXS_TAP32PHI_TAP2_Pos             _U_(0)                                               /**< (ISC_VXS_TAP32PHI) Vertical Filter Tap 2 Coefficient Position */
#define ISC_VXS_TAP32PHI_TAP2_Msk             (_U_(0x1FFF) << ISC_VXS_TAP32PHI_TAP2_Pos)           /**< (ISC_VXS_TAP32PHI) Vertical Filter Tap 2 Coefficient Mask */
#define ISC_VXS_TAP32PHI_TAP2(value)          (ISC_VXS_TAP32PHI_TAP2_Msk & ((value) << ISC_VXS_TAP32PHI_TAP2_Pos))
#define ISC_VXS_TAP32PHI_TAP3_Pos             _U_(16)                                              /**< (ISC_VXS_TAP32PHI) Vertical Filter Tap 3 Coefficient Position */
#define ISC_VXS_TAP32PHI_TAP3_Msk             (_U_(0x1FFF) << ISC_VXS_TAP32PHI_TAP3_Pos)           /**< (ISC_VXS_TAP32PHI) Vertical Filter Tap 3 Coefficient Mask */
#define ISC_VXS_TAP32PHI_TAP3(value)          (ISC_VXS_TAP32PHI_TAP3_Msk & ((value) << ISC_VXS_TAP32PHI_TAP3_Pos))
#define ISC_VXS_TAP32PHI_Msk                  _U_(0x1FFF1FFF)                                      /**< (ISC_VXS_TAP32PHI) Register Mask  */


/* -------- ISC_CTRLEN : (ISC Offset: 0x00) ( /W 32) Control Enable Register -------- */
#define ISC_CTRLEN_CAPTURE_Pos                _U_(0)                                               /**< (ISC_CTRLEN) Single Shot or Multiple Frame Capture Input Stream Command Position */
#define ISC_CTRLEN_CAPTURE_Msk                (_U_(0x1) << ISC_CTRLEN_CAPTURE_Pos)                 /**< (ISC_CTRLEN) Single Shot or Multiple Frame Capture Input Stream Command Mask */
#define ISC_CTRLEN_CAPTURE(value)             (ISC_CTRLEN_CAPTURE_Msk & ((value) << ISC_CTRLEN_CAPTURE_Pos))
#define ISC_CTRLEN_UPPRO_Pos                  _U_(1)                                               /**< (ISC_CTRLEN) Update Color Profile Position */
#define ISC_CTRLEN_UPPRO_Msk                  (_U_(0x1) << ISC_CTRLEN_UPPRO_Pos)                   /**< (ISC_CTRLEN) Update Color Profile Mask */
#define ISC_CTRLEN_UPPRO(value)               (ISC_CTRLEN_UPPRO_Msk & ((value) << ISC_CTRLEN_UPPRO_Pos))
#define ISC_CTRLEN_HISREQ_Pos                 _U_(2)                                               /**< (ISC_CTRLEN) Histogram Update Request Position */
#define ISC_CTRLEN_HISREQ_Msk                 (_U_(0x1) << ISC_CTRLEN_HISREQ_Pos)                  /**< (ISC_CTRLEN) Histogram Update Request Mask */
#define ISC_CTRLEN_HISREQ(value)              (ISC_CTRLEN_HISREQ_Msk & ((value) << ISC_CTRLEN_HISREQ_Pos))
#define ISC_CTRLEN_HISCLR_Pos                 _U_(3)                                               /**< (ISC_CTRLEN) Histogram Table Clear Position */
#define ISC_CTRLEN_HISCLR_Msk                 (_U_(0x1) << ISC_CTRLEN_HISCLR_Pos)                  /**< (ISC_CTRLEN) Histogram Table Clear Mask */
#define ISC_CTRLEN_HISCLR(value)              (ISC_CTRLEN_HISCLR_Msk & ((value) << ISC_CTRLEN_HISCLR_Pos))
#define ISC_CTRLEN_FUPPRO_Pos                 _U_(9)                                               /**< (ISC_CTRLEN) Force Update Color Profile Position */
#define ISC_CTRLEN_FUPPRO_Msk                 (_U_(0x1) << ISC_CTRLEN_FUPPRO_Pos)                  /**< (ISC_CTRLEN) Force Update Color Profile Mask */
#define ISC_CTRLEN_FUPPRO(value)              (ISC_CTRLEN_FUPPRO_Msk & ((value) << ISC_CTRLEN_FUPPRO_Pos))
#define ISC_CTRLEN_Msk                        _U_(0x0000020F)                                      /**< (ISC_CTRLEN) Register Mask  */


/* -------- ISC_CTRLDIS : (ISC Offset: 0x04) ( /W 32) Control Disable Register -------- */
#define ISC_CTRLDIS_DISABLE_Pos               _U_(0)                                               /**< (ISC_CTRLDIS) End Capture At Next Vertical Synchronization Detection Position */
#define ISC_CTRLDIS_DISABLE_Msk               (_U_(0x1) << ISC_CTRLDIS_DISABLE_Pos)                /**< (ISC_CTRLDIS) End Capture At Next Vertical Synchronization Detection Mask */
#define ISC_CTRLDIS_DISABLE(value)            (ISC_CTRLDIS_DISABLE_Msk & ((value) << ISC_CTRLDIS_DISABLE_Pos))
#define ISC_CTRLDIS_SWRST_Pos                 _U_(8)                                               /**< (ISC_CTRLDIS) Software Reset Position */
#define ISC_CTRLDIS_SWRST_Msk                 (_U_(0x1) << ISC_CTRLDIS_SWRST_Pos)                  /**< (ISC_CTRLDIS) Software Reset Mask */
#define ISC_CTRLDIS_SWRST(value)              (ISC_CTRLDIS_SWRST_Msk & ((value) << ISC_CTRLDIS_SWRST_Pos))
#define ISC_CTRLDIS_Msk                       _U_(0x00000101)                                      /**< (ISC_CTRLDIS) Register Mask  */


/* -------- ISC_CTRLSR : (ISC Offset: 0x08) ( R/ 32) Control Status Register -------- */
#define ISC_CTRLSR_RESETVALUE                 _U_(0x00)                                            /**<  (ISC_CTRLSR) Control Status Register  Reset Value */

#define ISC_CTRLSR_CAPTURE_Pos                _U_(0)                                               /**< (ISC_CTRLSR) Capture Pending Position */
#define ISC_CTRLSR_CAPTURE_Msk                (_U_(0x1) << ISC_CTRLSR_CAPTURE_Pos)                 /**< (ISC_CTRLSR) Capture Pending Mask */
#define ISC_CTRLSR_CAPTURE(value)             (ISC_CTRLSR_CAPTURE_Msk & ((value) << ISC_CTRLSR_CAPTURE_Pos))
#define   ISC_CTRLSR_CAPTURE_0_Val            _U_(0x0)                                             /**< (ISC_CTRLSR) Capture mode is disabled.  */
#define   ISC_CTRLSR_CAPTURE_1_Val            _U_(0x1)                                             /**< (ISC_CTRLSR) Capture is pending.  */
#define ISC_CTRLSR_CAPTURE_0                  (ISC_CTRLSR_CAPTURE_0_Val << ISC_CTRLSR_CAPTURE_Pos) /**< (ISC_CTRLSR) Capture mode is disabled. Position  */
#define ISC_CTRLSR_CAPTURE_1                  (ISC_CTRLSR_CAPTURE_1_Val << ISC_CTRLSR_CAPTURE_Pos) /**< (ISC_CTRLSR) Capture is pending. Position  */
#define ISC_CTRLSR_UPPRO_Pos                  _U_(1)                                               /**< (ISC_CTRLSR) Profile Update Pending Position */
#define ISC_CTRLSR_UPPRO_Msk                  (_U_(0x1) << ISC_CTRLSR_UPPRO_Pos)                   /**< (ISC_CTRLSR) Profile Update Pending Mask */
#define ISC_CTRLSR_UPPRO(value)               (ISC_CTRLSR_UPPRO_Msk & ((value) << ISC_CTRLSR_UPPRO_Pos))
#define   ISC_CTRLSR_UPPRO_0_Val              _U_(0x0)                                             /**< (ISC_CTRLSR) There is no profile update pending request.  */
#define   ISC_CTRLSR_UPPRO_1_Val              _U_(0x1)                                             /**< (ISC_CTRLSR) Indicates that the profile update request is still pending.  */
#define ISC_CTRLSR_UPPRO_0                    (ISC_CTRLSR_UPPRO_0_Val << ISC_CTRLSR_UPPRO_Pos)     /**< (ISC_CTRLSR) There is no profile update pending request. Position  */
#define ISC_CTRLSR_UPPRO_1                    (ISC_CTRLSR_UPPRO_1_Val << ISC_CTRLSR_UPPRO_Pos)     /**< (ISC_CTRLSR) Indicates that the profile update request is still pending. Position  */
#define ISC_CTRLSR_HISREQ_Pos                 _U_(2)                                               /**< (ISC_CTRLSR) Histogram Request Pending Position */
#define ISC_CTRLSR_HISREQ_Msk                 (_U_(0x1) << ISC_CTRLSR_HISREQ_Pos)                  /**< (ISC_CTRLSR) Histogram Request Pending Mask */
#define ISC_CTRLSR_HISREQ(value)              (ISC_CTRLSR_HISREQ_Msk & ((value) << ISC_CTRLSR_HISREQ_Pos))
#define   ISC_CTRLSR_HISREQ_0_Val             _U_(0x0)                                             /**< (ISC_CTRLSR) There is no histogram pending request.  */
#define   ISC_CTRLSR_HISREQ_1_Val             _U_(0x1)                                             /**< (ISC_CTRLSR) Indicates that the histogram request is still pending.  */
#define ISC_CTRLSR_HISREQ_0                   (ISC_CTRLSR_HISREQ_0_Val << ISC_CTRLSR_HISREQ_Pos)   /**< (ISC_CTRLSR) There is no histogram pending request. Position  */
#define ISC_CTRLSR_HISREQ_1                   (ISC_CTRLSR_HISREQ_1_Val << ISC_CTRLSR_HISREQ_Pos)   /**< (ISC_CTRLSR) Indicates that the histogram request is still pending. Position  */
#define ISC_CTRLSR_FIELD_Pos                  _U_(4)                                               /**< (ISC_CTRLSR) Field Status (only relevant when the video stream is interlaced) Position */
#define ISC_CTRLSR_FIELD_Msk                  (_U_(0x1) << ISC_CTRLSR_FIELD_Pos)                   /**< (ISC_CTRLSR) Field Status (only relevant when the video stream is interlaced) Mask */
#define ISC_CTRLSR_FIELD(value)               (ISC_CTRLSR_FIELD_Msk & ((value) << ISC_CTRLSR_FIELD_Pos))
#define   ISC_CTRLSR_FIELD_0_Val              _U_(0x0)                                             /**< (ISC_CTRLSR) The current field/segment is a top field  */
#define   ISC_CTRLSR_FIELD_1_Val              _U_(0x1)                                             /**< (ISC_CTRLSR) The current field/segment is a bottom field.  */
#define ISC_CTRLSR_FIELD_0                    (ISC_CTRLSR_FIELD_0_Val << ISC_CTRLSR_FIELD_Pos)     /**< (ISC_CTRLSR) The current field/segment is a top field Position  */
#define ISC_CTRLSR_FIELD_1                    (ISC_CTRLSR_FIELD_1_Val << ISC_CTRLSR_FIELD_Pos)     /**< (ISC_CTRLSR) The current field/segment is a bottom field. Position  */
#define ISC_CTRLSR_SIP_Pos                    _U_(31)                                              /**< (ISC_CTRLSR) Synchronization In Progress Position */
#define ISC_CTRLSR_SIP_Msk                    (_U_(0x1) << ISC_CTRLSR_SIP_Pos)                     /**< (ISC_CTRLSR) Synchronization In Progress Mask */
#define ISC_CTRLSR_SIP(value)                 (ISC_CTRLSR_SIP_Msk & ((value) << ISC_CTRLSR_SIP_Pos))
#define   ISC_CTRLSR_SIP_0_Val                _U_(0x0)                                             /**< (ISC_CTRLSR) The double domain synchronization is terminated.  */
#define   ISC_CTRLSR_SIP_1_Val                _U_(0x1)                                             /**< (ISC_CTRLSR) The double domain synchronization is in progress.  */
#define ISC_CTRLSR_SIP_0                      (ISC_CTRLSR_SIP_0_Val << ISC_CTRLSR_SIP_Pos)         /**< (ISC_CTRLSR) The double domain synchronization is terminated. Position  */
#define ISC_CTRLSR_SIP_1                      (ISC_CTRLSR_SIP_1_Val << ISC_CTRLSR_SIP_Pos)         /**< (ISC_CTRLSR) The double domain synchronization is in progress. Position  */
#define ISC_CTRLSR_Msk                        _U_(0x80000017)                                      /**< (ISC_CTRLSR) Register Mask  */


/* -------- ISC_PFE_CFG0 : (ISC Offset: 0x0C) (R/W 32) Parallel Front End Configuration 0 Register -------- */
#define ISC_PFE_CFG0_RESETVALUE               _U_(0x00)                                            /**<  (ISC_PFE_CFG0) Parallel Front End Configuration 0 Register  Reset Value */

#define ISC_PFE_CFG0_HPOL_Pos                 _U_(0)                                               /**< (ISC_PFE_CFG0) Horizontal Synchronization Polarity Position */
#define ISC_PFE_CFG0_HPOL_Msk                 (_U_(0x1) << ISC_PFE_CFG0_HPOL_Pos)                  /**< (ISC_PFE_CFG0) Horizontal Synchronization Polarity Mask */
#define ISC_PFE_CFG0_HPOL(value)              (ISC_PFE_CFG0_HPOL_Msk & ((value) << ISC_PFE_CFG0_HPOL_Pos))
#define   ISC_PFE_CFG0_HPOL_0_Val             _U_(0x0)                                             /**< (ISC_PFE_CFG0) HSYNC signal is active high, i.e. valid pixels are sampled when HSYNC is asserted.  */
#define   ISC_PFE_CFG0_HPOL_1_Val             _U_(0x1)                                             /**< (ISC_PFE_CFG0) HSYNC signal is active low, i.e. valid pixels are sampled when HSYNC is deasserted.  */
#define ISC_PFE_CFG0_HPOL_0                   (ISC_PFE_CFG0_HPOL_0_Val << ISC_PFE_CFG0_HPOL_Pos)   /**< (ISC_PFE_CFG0) HSYNC signal is active high, i.e. valid pixels are sampled when HSYNC is asserted. Position  */
#define ISC_PFE_CFG0_HPOL_1                   (ISC_PFE_CFG0_HPOL_1_Val << ISC_PFE_CFG0_HPOL_Pos)   /**< (ISC_PFE_CFG0) HSYNC signal is active low, i.e. valid pixels are sampled when HSYNC is deasserted. Position  */
#define ISC_PFE_CFG0_VPOL_Pos                 _U_(1)                                               /**< (ISC_PFE_CFG0) Vertical Synchronization Polarity Position */
#define ISC_PFE_CFG0_VPOL_Msk                 (_U_(0x1) << ISC_PFE_CFG0_VPOL_Pos)                  /**< (ISC_PFE_CFG0) Vertical Synchronization Polarity Mask */
#define ISC_PFE_CFG0_VPOL(value)              (ISC_PFE_CFG0_VPOL_Msk & ((value) << ISC_PFE_CFG0_VPOL_Pos))
#define   ISC_PFE_CFG0_VPOL_0_Val             _U_(0x0)                                             /**< (ISC_PFE_CFG0) VSYNC signal is active high, i.e. valid pixels are sampled when VSYNC is asserted.  */
#define   ISC_PFE_CFG0_VPOL_1_Val             _U_(0x1)                                             /**< (ISC_PFE_CFG0) VSYNC signal is active low, i.e. valid pixels are sampled when VSYNC is deasserted.  */
#define ISC_PFE_CFG0_VPOL_0                   (ISC_PFE_CFG0_VPOL_0_Val << ISC_PFE_CFG0_VPOL_Pos)   /**< (ISC_PFE_CFG0) VSYNC signal is active high, i.e. valid pixels are sampled when VSYNC is asserted. Position  */
#define ISC_PFE_CFG0_VPOL_1                   (ISC_PFE_CFG0_VPOL_1_Val << ISC_PFE_CFG0_VPOL_Pos)   /**< (ISC_PFE_CFG0) VSYNC signal is active low, i.e. valid pixels are sampled when VSYNC is deasserted. Position  */
#define ISC_PFE_CFG0_PPOL_Pos                 _U_(2)                                               /**< (ISC_PFE_CFG0) Pixel Clock Polarity Position */
#define ISC_PFE_CFG0_PPOL_Msk                 (_U_(0x1) << ISC_PFE_CFG0_PPOL_Pos)                  /**< (ISC_PFE_CFG0) Pixel Clock Polarity Mask */
#define ISC_PFE_CFG0_PPOL(value)              (ISC_PFE_CFG0_PPOL_Msk & ((value) << ISC_PFE_CFG0_PPOL_Pos))
#define   ISC_PFE_CFG0_PPOL_0_Val             _U_(0x0)                                             /**< (ISC_PFE_CFG0) The pixel stream is sampled on the rising edge of the pixel clock.  */
#define   ISC_PFE_CFG0_PPOL_1_Val             _U_(0x1)                                             /**< (ISC_PFE_CFG0) The pixel stream is sampled on the falling edge of the pixel clock.  */
#define ISC_PFE_CFG0_PPOL_0                   (ISC_PFE_CFG0_PPOL_0_Val << ISC_PFE_CFG0_PPOL_Pos)   /**< (ISC_PFE_CFG0) The pixel stream is sampled on the rising edge of the pixel clock. Position  */
#define ISC_PFE_CFG0_PPOL_1                   (ISC_PFE_CFG0_PPOL_1_Val << ISC_PFE_CFG0_PPOL_Pos)   /**< (ISC_PFE_CFG0) The pixel stream is sampled on the falling edge of the pixel clock. Position  */
#define ISC_PFE_CFG0_FPOL_Pos                 _U_(3)                                               /**< (ISC_PFE_CFG0) Field Polarity Position */
#define ISC_PFE_CFG0_FPOL_Msk                 (_U_(0x1) << ISC_PFE_CFG0_FPOL_Pos)                  /**< (ISC_PFE_CFG0) Field Polarity Mask */
#define ISC_PFE_CFG0_FPOL(value)              (ISC_PFE_CFG0_FPOL_Msk & ((value) << ISC_PFE_CFG0_FPOL_Pos))
#define   ISC_PFE_CFG0_FPOL_0_Val             _U_(0x0)                                             /**< (ISC_PFE_CFG0) Top field is sampled when F value is 0; Bottom field is sampled when F value is 1.  */
#define   ISC_PFE_CFG0_FPOL_1_Val             _U_(0x1)                                             /**< (ISC_PFE_CFG0) Top field is sampled when F value is 1; Bottom field is sampled when F value is 0.  */
#define ISC_PFE_CFG0_FPOL_0                   (ISC_PFE_CFG0_FPOL_0_Val << ISC_PFE_CFG0_FPOL_Pos)   /**< (ISC_PFE_CFG0) Top field is sampled when F value is 0; Bottom field is sampled when F value is 1. Position  */
#define ISC_PFE_CFG0_FPOL_1                   (ISC_PFE_CFG0_FPOL_1_Val << ISC_PFE_CFG0_FPOL_Pos)   /**< (ISC_PFE_CFG0) Top field is sampled when F value is 1; Bottom field is sampled when F value is 0. Position  */
#define ISC_PFE_CFG0_MODE_Pos                 _U_(4)                                               /**< (ISC_PFE_CFG0) Parallel Front End Mode Position */
#define ISC_PFE_CFG0_MODE_Msk                 (_U_(0x7) << ISC_PFE_CFG0_MODE_Pos)                  /**< (ISC_PFE_CFG0) Parallel Front End Mode Mask */
#define ISC_PFE_CFG0_MODE(value)              (ISC_PFE_CFG0_MODE_Msk & ((value) << ISC_PFE_CFG0_MODE_Pos))
#define   ISC_PFE_CFG0_MODE_PROGRESSIVE_Val   _U_(0x0)                                             /**< (ISC_PFE_CFG0) Video source is progressive.  */
#define   ISC_PFE_CFG0_MODE_DF_TOP_Val        _U_(0x1)                                             /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured starting with top field.  */
#define   ISC_PFE_CFG0_MODE_DF_BOTTOM_Val     _U_(0x2)                                             /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured starting with bottom field.  */
#define   ISC_PFE_CFG0_MODE_DF_IMMEDIATE_Val  _U_(0x3)                                             /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured immediately.  */
#define   ISC_PFE_CFG0_MODE_SF_TOP_Val        _U_(0x4)                                             /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting with the top field.  */
#define   ISC_PFE_CFG0_MODE_SF_BOTTOM_Val     _U_(0x5)                                             /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting with the bottom field.  */
#define   ISC_PFE_CFG0_MODE_SF_IMMEDIATE_Val  _U_(0x6)                                             /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting immediately.  */
#define ISC_PFE_CFG0_MODE_PROGRESSIVE         (ISC_PFE_CFG0_MODE_PROGRESSIVE_Val << ISC_PFE_CFG0_MODE_Pos) /**< (ISC_PFE_CFG0) Video source is progressive. Position  */
#define ISC_PFE_CFG0_MODE_DF_TOP              (ISC_PFE_CFG0_MODE_DF_TOP_Val << ISC_PFE_CFG0_MODE_Pos) /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured starting with top field. Position  */
#define ISC_PFE_CFG0_MODE_DF_BOTTOM           (ISC_PFE_CFG0_MODE_DF_BOTTOM_Val << ISC_PFE_CFG0_MODE_Pos) /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured starting with bottom field. Position  */
#define ISC_PFE_CFG0_MODE_DF_IMMEDIATE        (ISC_PFE_CFG0_MODE_DF_IMMEDIATE_Val << ISC_PFE_CFG0_MODE_Pos) /**< (ISC_PFE_CFG0) Video source is interlaced, two fields are captured immediately. Position  */
#define ISC_PFE_CFG0_MODE_SF_TOP              (ISC_PFE_CFG0_MODE_SF_TOP_Val << ISC_PFE_CFG0_MODE_Pos) /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting with the top field. Position  */
#define ISC_PFE_CFG0_MODE_SF_BOTTOM           (ISC_PFE_CFG0_MODE_SF_BOTTOM_Val << ISC_PFE_CFG0_MODE_Pos) /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting with the bottom field. Position  */
#define ISC_PFE_CFG0_MODE_SF_IMMEDIATE        (ISC_PFE_CFG0_MODE_SF_IMMEDIATE_Val << ISC_PFE_CFG0_MODE_Pos) /**< (ISC_PFE_CFG0) Video source is interlaced, one field is captured starting immediately. Position  */
#define ISC_PFE_CFG0_CONT_Pos                 _U_(7)                                               /**< (ISC_PFE_CFG0) Continuous Acquisition Position */
#define ISC_PFE_CFG0_CONT_Msk                 (_U_(0x1) << ISC_PFE_CFG0_CONT_Pos)                  /**< (ISC_PFE_CFG0) Continuous Acquisition Mask */
#define ISC_PFE_CFG0_CONT(value)              (ISC_PFE_CFG0_CONT_Msk & ((value) << ISC_PFE_CFG0_CONT_Pos))
#define   ISC_PFE_CFG0_CONT_0_Val             _U_(0x0)                                             /**< (ISC_PFE_CFG0) Single Shot mode.  */
#define   ISC_PFE_CFG0_CONT_1_Val             _U_(0x1)                                             /**< (ISC_PFE_CFG0) Video mode.  */
#define ISC_PFE_CFG0_CONT_0                   (ISC_PFE_CFG0_CONT_0_Val << ISC_PFE_CFG0_CONT_Pos)   /**< (ISC_PFE_CFG0) Single Shot mode. Position  */
#define ISC_PFE_CFG0_CONT_1                   (ISC_PFE_CFG0_CONT_1_Val << ISC_PFE_CFG0_CONT_Pos)   /**< (ISC_PFE_CFG0) Video mode. Position  */
#define ISC_PFE_CFG0_GATED_Pos                _U_(8)                                               /**< (ISC_PFE_CFG0) Gated input clock Position */
#define ISC_PFE_CFG0_GATED_Msk                (_U_(0x1) << ISC_PFE_CFG0_GATED_Pos)                 /**< (ISC_PFE_CFG0) Gated input clock Mask */
#define ISC_PFE_CFG0_GATED(value)             (ISC_PFE_CFG0_GATED_Msk & ((value) << ISC_PFE_CFG0_GATED_Pos))
#define   ISC_PFE_CFG0_GATED_0_Val            _U_(0x0)                                             /**< (ISC_PFE_CFG0) The external pixel clock is free running.  */
#define   ISC_PFE_CFG0_GATED_1_Val            _U_(0x1)                                             /**< (ISC_PFE_CFG0) The external pixel clock is gated.  */
#define ISC_PFE_CFG0_GATED_0                  (ISC_PFE_CFG0_GATED_0_Val << ISC_PFE_CFG0_GATED_Pos) /**< (ISC_PFE_CFG0) The external pixel clock is free running. Position  */
#define ISC_PFE_CFG0_GATED_1                  (ISC_PFE_CFG0_GATED_1_Val << ISC_PFE_CFG0_GATED_Pos) /**< (ISC_PFE_CFG0) The external pixel clock is gated. Position  */
#define ISC_PFE_CFG0_CCIR656_Pos              _U_(9)                                               /**< (ISC_PFE_CFG0) CCIR656 input mode Position */
#define ISC_PFE_CFG0_CCIR656_Msk              (_U_(0x1) << ISC_PFE_CFG0_CCIR656_Pos)               /**< (ISC_PFE_CFG0) CCIR656 input mode Mask */
#define ISC_PFE_CFG0_CCIR656(value)           (ISC_PFE_CFG0_CCIR656_Msk & ((value) << ISC_PFE_CFG0_CCIR656_Pos))
#define   ISC_PFE_CFG0_CCIR656_0_Val          _U_(0x0)                                             /**< (ISC_PFE_CFG0) HSYNC and VSYNC signals are used to synchronize the input stream.  */
#define   ISC_PFE_CFG0_CCIR656_1_Val          _U_(0x1)                                             /**< (ISC_PFE_CFG0) Embedded synchronization is used.  */
#define ISC_PFE_CFG0_CCIR656_0                (ISC_PFE_CFG0_CCIR656_0_Val << ISC_PFE_CFG0_CCIR656_Pos) /**< (ISC_PFE_CFG0) HSYNC and VSYNC signals are used to synchronize the input stream. Position  */
#define ISC_PFE_CFG0_CCIR656_1                (ISC_PFE_CFG0_CCIR656_1_Val << ISC_PFE_CFG0_CCIR656_Pos) /**< (ISC_PFE_CFG0) Embedded synchronization is used. Position  */
#define ISC_PFE_CFG0_CCIR_CRC_Pos             _U_(10)                                              /**< (ISC_PFE_CFG0) CCIR656 CRC Decoder Position */
#define ISC_PFE_CFG0_CCIR_CRC_Msk             (_U_(0x1) << ISC_PFE_CFG0_CCIR_CRC_Pos)              /**< (ISC_PFE_CFG0) CCIR656 CRC Decoder Mask */
#define ISC_PFE_CFG0_CCIR_CRC(value)          (ISC_PFE_CFG0_CCIR_CRC_Msk & ((value) << ISC_PFE_CFG0_CCIR_CRC_Pos))
#define   ISC_PFE_CFG0_CCIR_CRC_0_Val         _U_(0x0)                                             /**< (ISC_PFE_CFG0) Embedded CRC is discarded.  */
#define   ISC_PFE_CFG0_CCIR_CRC_1_Val         _U_(0x1)                                             /**< (ISC_PFE_CFG0) Embedded CRC is decoded.  */
#define ISC_PFE_CFG0_CCIR_CRC_0               (ISC_PFE_CFG0_CCIR_CRC_0_Val << ISC_PFE_CFG0_CCIR_CRC_Pos) /**< (ISC_PFE_CFG0) Embedded CRC is discarded. Position  */
#define ISC_PFE_CFG0_CCIR_CRC_1               (ISC_PFE_CFG0_CCIR_CRC_1_Val << ISC_PFE_CFG0_CCIR_CRC_Pos) /**< (ISC_PFE_CFG0) Embedded CRC is decoded. Position  */
#define ISC_PFE_CFG0_CCIR10_8N_Pos            _U_(11)                                              /**< (ISC_PFE_CFG0) CCIR 10 bits or 8 bits Position */
#define ISC_PFE_CFG0_CCIR10_8N_Msk            (_U_(0x1) << ISC_PFE_CFG0_CCIR10_8N_Pos)             /**< (ISC_PFE_CFG0) CCIR 10 bits or 8 bits Mask */
#define ISC_PFE_CFG0_CCIR10_8N(value)         (ISC_PFE_CFG0_CCIR10_8N_Msk & ((value) << ISC_PFE_CFG0_CCIR10_8N_Pos))
#define   ISC_PFE_CFG0_CCIR10_8N_0_Val        _U_(0x0)                                             /**< (ISC_PFE_CFG0) 8-bit mode.  */
#define   ISC_PFE_CFG0_CCIR10_8N_1_Val        _U_(0x1)                                             /**< (ISC_PFE_CFG0) 10-bit mode.  */
#define ISC_PFE_CFG0_CCIR10_8N_0              (ISC_PFE_CFG0_CCIR10_8N_0_Val << ISC_PFE_CFG0_CCIR10_8N_Pos) /**< (ISC_PFE_CFG0) 8-bit mode. Position  */
#define ISC_PFE_CFG0_CCIR10_8N_1              (ISC_PFE_CFG0_CCIR10_8N_1_Val << ISC_PFE_CFG0_CCIR10_8N_Pos) /**< (ISC_PFE_CFG0) 10-bit mode. Position  */
#define ISC_PFE_CFG0_COLEN_Pos                _U_(12)                                              /**< (ISC_PFE_CFG0) Column Cropping Enable Position */
#define ISC_PFE_CFG0_COLEN_Msk                (_U_(0x1) << ISC_PFE_CFG0_COLEN_Pos)                 /**< (ISC_PFE_CFG0) Column Cropping Enable Mask */
#define ISC_PFE_CFG0_COLEN(value)             (ISC_PFE_CFG0_COLEN_Msk & ((value) << ISC_PFE_CFG0_COLEN_Pos))
#define   ISC_PFE_CFG0_COLEN_0_Val            _U_(0x0)                                             /**< (ISC_PFE_CFG0) Column Cropping is disabled.  */
#define   ISC_PFE_CFG0_COLEN_1_Val            _U_(0x1)                                             /**< (ISC_PFE_CFG0) Column Cropping is enabled.  */
#define ISC_PFE_CFG0_COLEN_0                  (ISC_PFE_CFG0_COLEN_0_Val << ISC_PFE_CFG0_COLEN_Pos) /**< (ISC_PFE_CFG0) Column Cropping is disabled. Position  */
#define ISC_PFE_CFG0_COLEN_1                  (ISC_PFE_CFG0_COLEN_1_Val << ISC_PFE_CFG0_COLEN_Pos) /**< (ISC_PFE_CFG0) Column Cropping is enabled. Position  */
#define ISC_PFE_CFG0_ROWEN_Pos                _U_(13)                                              /**< (ISC_PFE_CFG0) Row Cropping Enable Position */
#define ISC_PFE_CFG0_ROWEN_Msk                (_U_(0x1) << ISC_PFE_CFG0_ROWEN_Pos)                 /**< (ISC_PFE_CFG0) Row Cropping Enable Mask */
#define ISC_PFE_CFG0_ROWEN(value)             (ISC_PFE_CFG0_ROWEN_Msk & ((value) << ISC_PFE_CFG0_ROWEN_Pos))
#define   ISC_PFE_CFG0_ROWEN_0_Val            _U_(0x0)                                             /**< (ISC_PFE_CFG0) Row Cropping is disabled.  */
#define   ISC_PFE_CFG0_ROWEN_1_Val            _U_(0x1)                                             /**< (ISC_PFE_CFG0) Row Cropping is enabled.  */
#define ISC_PFE_CFG0_ROWEN_0                  (ISC_PFE_CFG0_ROWEN_0_Val << ISC_PFE_CFG0_ROWEN_Pos) /**< (ISC_PFE_CFG0) Row Cropping is disabled. Position  */
#define ISC_PFE_CFG0_ROWEN_1                  (ISC_PFE_CFG0_ROWEN_1_Val << ISC_PFE_CFG0_ROWEN_Pos) /**< (ISC_PFE_CFG0) Row Cropping is enabled. Position  */
#define ISC_PFE_CFG0_MIPI_Pos                 _U_(14)                                              /**< (ISC_PFE_CFG0) MIPI Interface Connection Position */
#define ISC_PFE_CFG0_MIPI_Msk                 (_U_(0x1) << ISC_PFE_CFG0_MIPI_Pos)                  /**< (ISC_PFE_CFG0) MIPI Interface Connection Mask */
#define ISC_PFE_CFG0_MIPI(value)              (ISC_PFE_CFG0_MIPI_Msk & ((value) << ISC_PFE_CFG0_MIPI_Pos))
#define   ISC_PFE_CFG0_MIPI_0_Val             _U_(0x0)                                             /**< (ISC_PFE_CFG0) Input Data are coming from the physical Parallel interface.  */
#define   ISC_PFE_CFG0_MIPI_1_Val             _U_(0x1)                                             /**< (ISC_PFE_CFG0) Input Data are coming from the physical MIPI interface.  */
#define ISC_PFE_CFG0_MIPI_0                   (ISC_PFE_CFG0_MIPI_0_Val << ISC_PFE_CFG0_MIPI_Pos)   /**< (ISC_PFE_CFG0) Input Data are coming from the physical Parallel interface. Position  */
#define ISC_PFE_CFG0_MIPI_1                   (ISC_PFE_CFG0_MIPI_1_Val << ISC_PFE_CFG0_MIPI_Pos)   /**< (ISC_PFE_CFG0) Input Data are coming from the physical MIPI interface. Position  */
#define ISC_PFE_CFG0_SKIPCNT_Pos              _U_(16)                                              /**< (ISC_PFE_CFG0) Frame Skipping Counter Position */
#define ISC_PFE_CFG0_SKIPCNT_Msk              (_U_(0xFF) << ISC_PFE_CFG0_SKIPCNT_Pos)              /**< (ISC_PFE_CFG0) Frame Skipping Counter Mask */
#define ISC_PFE_CFG0_SKIPCNT(value)           (ISC_PFE_CFG0_SKIPCNT_Msk & ((value) << ISC_PFE_CFG0_SKIPCNT_Pos))
#define ISC_PFE_CFG0_CCIR_REP_Pos             _U_(27)                                              /**< (ISC_PFE_CFG0) CCIR Replication Position */
#define ISC_PFE_CFG0_CCIR_REP_Msk             (_U_(0x1) << ISC_PFE_CFG0_CCIR_REP_Pos)              /**< (ISC_PFE_CFG0) CCIR Replication Mask */
#define ISC_PFE_CFG0_CCIR_REP(value)          (ISC_PFE_CFG0_CCIR_REP_Msk & ((value) << ISC_PFE_CFG0_CCIR_REP_Pos))
#define   ISC_PFE_CFG0_CCIR_REP_0_Val         _U_(0x0)                                             /**< (ISC_PFE_CFG0) Unused bits are stuck at 0.  */
#define   ISC_PFE_CFG0_CCIR_REP_1_Val         _U_(0x1)                                             /**< (ISC_PFE_CFG0) Unused bits are copied from MSB.  */
#define ISC_PFE_CFG0_CCIR_REP_0               (ISC_PFE_CFG0_CCIR_REP_0_Val << ISC_PFE_CFG0_CCIR_REP_Pos) /**< (ISC_PFE_CFG0) Unused bits are stuck at 0. Position  */
#define ISC_PFE_CFG0_CCIR_REP_1               (ISC_PFE_CFG0_CCIR_REP_1_Val << ISC_PFE_CFG0_CCIR_REP_Pos) /**< (ISC_PFE_CFG0) Unused bits are copied from MSB. Position  */
#define ISC_PFE_CFG0_BPS_Pos                  _U_(28)                                              /**< (ISC_PFE_CFG0) Bits Per Sample Position */
#define ISC_PFE_CFG0_BPS_Msk                  (_U_(0x7) << ISC_PFE_CFG0_BPS_Pos)                   /**< (ISC_PFE_CFG0) Bits Per Sample Mask */
#define ISC_PFE_CFG0_BPS(value)               (ISC_PFE_CFG0_BPS_Msk & ((value) << ISC_PFE_CFG0_BPS_Pos))
#define   ISC_PFE_CFG0_BPS_TWELVE_Val         _U_(0x0)                                             /**< (ISC_PFE_CFG0) 12-bit input  */
#define   ISC_PFE_CFG0_BPS_ELEVEN_Val         _U_(0x1)                                             /**< (ISC_PFE_CFG0) 11-bit input  */
#define   ISC_PFE_CFG0_BPS_TEN_Val            _U_(0x2)                                             /**< (ISC_PFE_CFG0) 10-bit input  */
#define   ISC_PFE_CFG0_BPS_NINE_Val           _U_(0x3)                                             /**< (ISC_PFE_CFG0) 9-bit input  */
#define   ISC_PFE_CFG0_BPS_EIGHT_Val          _U_(0x4)                                             /**< (ISC_PFE_CFG0) 8-bit input  */
#define   ISC_PFE_CFG0_BPS_FORTY_Val          _U_(0x5)                                             /**< (ISC_PFE_CFG0) 40-bit input (used for MIPI formats up to forty bits per pixel)  */
#define ISC_PFE_CFG0_BPS_TWELVE               (ISC_PFE_CFG0_BPS_TWELVE_Val << ISC_PFE_CFG0_BPS_Pos) /**< (ISC_PFE_CFG0) 12-bit input Position  */
#define ISC_PFE_CFG0_BPS_ELEVEN               (ISC_PFE_CFG0_BPS_ELEVEN_Val << ISC_PFE_CFG0_BPS_Pos) /**< (ISC_PFE_CFG0) 11-bit input Position  */
#define ISC_PFE_CFG0_BPS_TEN                  (ISC_PFE_CFG0_BPS_TEN_Val << ISC_PFE_CFG0_BPS_Pos)   /**< (ISC_PFE_CFG0) 10-bit input Position  */
#define ISC_PFE_CFG0_BPS_NINE                 (ISC_PFE_CFG0_BPS_NINE_Val << ISC_PFE_CFG0_BPS_Pos)  /**< (ISC_PFE_CFG0) 9-bit input Position  */
#define ISC_PFE_CFG0_BPS_EIGHT                (ISC_PFE_CFG0_BPS_EIGHT_Val << ISC_PFE_CFG0_BPS_Pos) /**< (ISC_PFE_CFG0) 8-bit input Position  */
#define ISC_PFE_CFG0_BPS_FORTY                (ISC_PFE_CFG0_BPS_FORTY_Val << ISC_PFE_CFG0_BPS_Pos) /**< (ISC_PFE_CFG0) 40-bit input (used for MIPI formats up to forty bits per pixel) Position  */
#define ISC_PFE_CFG0_REP_Pos                  _U_(31)                                              /**< (ISC_PFE_CFG0) Up Multiply with Replication Position */
#define ISC_PFE_CFG0_REP_Msk                  (_U_(0x1) << ISC_PFE_CFG0_REP_Pos)                   /**< (ISC_PFE_CFG0) Up Multiply with Replication Mask */
#define ISC_PFE_CFG0_REP(value)               (ISC_PFE_CFG0_REP_Msk & ((value) << ISC_PFE_CFG0_REP_Pos))
#define   ISC_PFE_CFG0_REP_0_Val              _U_(0x0)                                             /**< (ISC_PFE_CFG0) Unused bits are stuck at 0.  */
#define   ISC_PFE_CFG0_REP_1_Val              _U_(0x1)                                             /**< (ISC_PFE_CFG0) Unused bits are copied from MSB.  */
#define ISC_PFE_CFG0_REP_0                    (ISC_PFE_CFG0_REP_0_Val << ISC_PFE_CFG0_REP_Pos)     /**< (ISC_PFE_CFG0) Unused bits are stuck at 0. Position  */
#define ISC_PFE_CFG0_REP_1                    (ISC_PFE_CFG0_REP_1_Val << ISC_PFE_CFG0_REP_Pos)     /**< (ISC_PFE_CFG0) Unused bits are copied from MSB. Position  */
#define ISC_PFE_CFG0_Msk                      _U_(0xF8FF7FFF)                                      /**< (ISC_PFE_CFG0) Register Mask  */

#define ISC_PFE_CFG0_CCIR_Pos                 _U_(9)                                               /**< (ISC_PFE_CFG0 Position) CCIR656 input mode */
#define ISC_PFE_CFG0_CCIR_Msk                 (_U_(0x1) << ISC_PFE_CFG0_CCIR_Pos)                  /**< (ISC_PFE_CFG0 Mask) CCIR */
#define ISC_PFE_CFG0_CCIR(value)              (ISC_PFE_CFG0_CCIR_Msk & ((value) << ISC_PFE_CFG0_CCIR_Pos)) 

/* -------- ISC_PFE_CFG1 : (ISC Offset: 0x10) (R/W 32) Parallel Front End Configuration 1 Register -------- */
#define ISC_PFE_CFG1_RESETVALUE               _U_(0x00)                                            /**<  (ISC_PFE_CFG1) Parallel Front End Configuration 1 Register  Reset Value */

#define ISC_PFE_CFG1_COLMIN_Pos               _U_(0)                                               /**< (ISC_PFE_CFG1) Column Minimum Limit Position */
#define ISC_PFE_CFG1_COLMIN_Msk               (_U_(0xFFFF) << ISC_PFE_CFG1_COLMIN_Pos)             /**< (ISC_PFE_CFG1) Column Minimum Limit Mask */
#define ISC_PFE_CFG1_COLMIN(value)            (ISC_PFE_CFG1_COLMIN_Msk & ((value) << ISC_PFE_CFG1_COLMIN_Pos))
#define ISC_PFE_CFG1_COLMAX_Pos               _U_(16)                                              /**< (ISC_PFE_CFG1) Column Maximum Limit Position */
#define ISC_PFE_CFG1_COLMAX_Msk               (_U_(0xFFFF) << ISC_PFE_CFG1_COLMAX_Pos)             /**< (ISC_PFE_CFG1) Column Maximum Limit Mask */
#define ISC_PFE_CFG1_COLMAX(value)            (ISC_PFE_CFG1_COLMAX_Msk & ((value) << ISC_PFE_CFG1_COLMAX_Pos))
#define ISC_PFE_CFG1_Msk                      _U_(0xFFFFFFFF)                                      /**< (ISC_PFE_CFG1) Register Mask  */


/* -------- ISC_PFE_CFG2 : (ISC Offset: 0x14) (R/W 32) Parallel Front End Configuration 2 Register -------- */
#define ISC_PFE_CFG2_RESETVALUE               _U_(0x00)                                            /**<  (ISC_PFE_CFG2) Parallel Front End Configuration 2 Register  Reset Value */

#define ISC_PFE_CFG2_ROWMIN_Pos               _U_(0)                                               /**< (ISC_PFE_CFG2) Row Minimum Limit Position */
#define ISC_PFE_CFG2_ROWMIN_Msk               (_U_(0xFFFF) << ISC_PFE_CFG2_ROWMIN_Pos)             /**< (ISC_PFE_CFG2) Row Minimum Limit Mask */
#define ISC_PFE_CFG2_ROWMIN(value)            (ISC_PFE_CFG2_ROWMIN_Msk & ((value) << ISC_PFE_CFG2_ROWMIN_Pos))
#define ISC_PFE_CFG2_ROWMAX_Pos               _U_(16)                                              /**< (ISC_PFE_CFG2) Row Maximum Limit Position */
#define ISC_PFE_CFG2_ROWMAX_Msk               (_U_(0xFFFF) << ISC_PFE_CFG2_ROWMAX_Pos)             /**< (ISC_PFE_CFG2) Row Maximum Limit Mask */
#define ISC_PFE_CFG2_ROWMAX(value)            (ISC_PFE_CFG2_ROWMAX_Msk & ((value) << ISC_PFE_CFG2_ROWMAX_Pos))
#define ISC_PFE_CFG2_Msk                      _U_(0xFFFFFFFF)                                      /**< (ISC_PFE_CFG2) Register Mask  */


/* -------- ISC_CLKEN : (ISC Offset: 0x18) ( /W 32) Clock Enable Register -------- */
#define ISC_CLKEN_ICEN_Pos                    _U_(0)                                               /**< (ISC_CLKEN) ISP Clock Enable Position */
#define ISC_CLKEN_ICEN_Msk                    (_U_(0x1) << ISC_CLKEN_ICEN_Pos)                     /**< (ISC_CLKEN) ISP Clock Enable Mask */
#define ISC_CLKEN_ICEN(value)                 (ISC_CLKEN_ICEN_Msk & ((value) << ISC_CLKEN_ICEN_Pos))
#define   ISC_CLKEN_ICEN_0_Val                _U_(0x0)                                             /**< (ISC_CLKEN) No effect.  */
#define   ISC_CLKEN_ICEN_1_Val                _U_(0x1)                                             /**< (ISC_CLKEN) Enables the ISP clock.  */
#define ISC_CLKEN_ICEN_0                      (ISC_CLKEN_ICEN_0_Val << ISC_CLKEN_ICEN_Pos)         /**< (ISC_CLKEN) No effect. Position  */
#define ISC_CLKEN_ICEN_1                      (ISC_CLKEN_ICEN_1_Val << ISC_CLKEN_ICEN_Pos)         /**< (ISC_CLKEN) Enables the ISP clock. Position  */
#define ISC_CLKEN_MCEN_Pos                    _U_(1)                                               /**< (ISC_CLKEN) Master Clock Enable Position */
#define ISC_CLKEN_MCEN_Msk                    (_U_(0x1) << ISC_CLKEN_MCEN_Pos)                     /**< (ISC_CLKEN) Master Clock Enable Mask */
#define ISC_CLKEN_MCEN(value)                 (ISC_CLKEN_MCEN_Msk & ((value) << ISC_CLKEN_MCEN_Pos))
#define   ISC_CLKEN_MCEN_0_Val                _U_(0x0)                                             /**< (ISC_CLKEN) No effect.  */
#define   ISC_CLKEN_MCEN_1_Val                _U_(0x1)                                             /**< (ISC_CLKEN) Enables the master clock.  */
#define ISC_CLKEN_MCEN_0                      (ISC_CLKEN_MCEN_0_Val << ISC_CLKEN_MCEN_Pos)         /**< (ISC_CLKEN) No effect. Position  */
#define ISC_CLKEN_MCEN_1                      (ISC_CLKEN_MCEN_1_Val << ISC_CLKEN_MCEN_Pos)         /**< (ISC_CLKEN) Enables the master clock. Position  */
#define ISC_CLKEN_Msk                         _U_(0x00000003)                                      /**< (ISC_CLKEN) Register Mask  */


/* -------- ISC_CLKDIS : (ISC Offset: 0x1C) ( /W 32) Clock Disable Register -------- */
#define ISC_CLKDIS_ICDIS_Pos                  _U_(0)                                               /**< (ISC_CLKDIS) ISP Clock Disable Position */
#define ISC_CLKDIS_ICDIS_Msk                  (_U_(0x1) << ISC_CLKDIS_ICDIS_Pos)                   /**< (ISC_CLKDIS) ISP Clock Disable Mask */
#define ISC_CLKDIS_ICDIS(value)               (ISC_CLKDIS_ICDIS_Msk & ((value) << ISC_CLKDIS_ICDIS_Pos))
#define ISC_CLKDIS_MCDIS_Pos                  _U_(1)                                               /**< (ISC_CLKDIS) Master Clock Disable Position */
#define ISC_CLKDIS_MCDIS_Msk                  (_U_(0x1) << ISC_CLKDIS_MCDIS_Pos)                   /**< (ISC_CLKDIS) Master Clock Disable Mask */
#define ISC_CLKDIS_MCDIS(value)               (ISC_CLKDIS_MCDIS_Msk & ((value) << ISC_CLKDIS_MCDIS_Pos))
#define ISC_CLKDIS_ICSWRST_Pos                _U_(8)                                               /**< (ISC_CLKDIS) ISP Clock Software Reset Position */
#define ISC_CLKDIS_ICSWRST_Msk                (_U_(0x1) << ISC_CLKDIS_ICSWRST_Pos)                 /**< (ISC_CLKDIS) ISP Clock Software Reset Mask */
#define ISC_CLKDIS_ICSWRST(value)             (ISC_CLKDIS_ICSWRST_Msk & ((value) << ISC_CLKDIS_ICSWRST_Pos))
#define ISC_CLKDIS_MCSWRST_Pos                _U_(9)                                               /**< (ISC_CLKDIS) Master Clock Software Reset Position */
#define ISC_CLKDIS_MCSWRST_Msk                (_U_(0x1) << ISC_CLKDIS_MCSWRST_Pos)                 /**< (ISC_CLKDIS) Master Clock Software Reset Mask */
#define ISC_CLKDIS_MCSWRST(value)             (ISC_CLKDIS_MCSWRST_Msk & ((value) << ISC_CLKDIS_MCSWRST_Pos))
#define ISC_CLKDIS_Msk                        _U_(0x00000303)                                      /**< (ISC_CLKDIS) Register Mask  */


/* -------- ISC_CLKSR : (ISC Offset: 0x20) ( R/ 32) Clock Status Register -------- */
#define ISC_CLKSR_RESETVALUE                  _U_(0x00)                                            /**<  (ISC_CLKSR) Clock Status Register  Reset Value */

#define ISC_CLKSR_ICSR_Pos                    _U_(0)                                               /**< (ISC_CLKSR) ISP Clock Status Register Position */
#define ISC_CLKSR_ICSR_Msk                    (_U_(0x1) << ISC_CLKSR_ICSR_Pos)                     /**< (ISC_CLKSR) ISP Clock Status Register Mask */
#define ISC_CLKSR_ICSR(value)                 (ISC_CLKSR_ICSR_Msk & ((value) << ISC_CLKSR_ICSR_Pos))
#define   ISC_CLKSR_ICSR_0_Val                _U_(0x0)                                             /**< (ISC_CLKSR) The ISP clock is disabled.  */
#define   ISC_CLKSR_ICSR_1_Val                _U_(0x1)                                             /**< (ISC_CLKSR) The ISP clock is enabled.  */
#define ISC_CLKSR_ICSR_0                      (ISC_CLKSR_ICSR_0_Val << ISC_CLKSR_ICSR_Pos)         /**< (ISC_CLKSR) The ISP clock is disabled. Position  */
#define ISC_CLKSR_ICSR_1                      (ISC_CLKSR_ICSR_1_Val << ISC_CLKSR_ICSR_Pos)         /**< (ISC_CLKSR) The ISP clock is enabled. Position  */
#define ISC_CLKSR_MCSR_Pos                    _U_(1)                                               /**< (ISC_CLKSR) Master Clock Status Register Position */
#define ISC_CLKSR_MCSR_Msk                    (_U_(0x1) << ISC_CLKSR_MCSR_Pos)                     /**< (ISC_CLKSR) Master Clock Status Register Mask */
#define ISC_CLKSR_MCSR(value)                 (ISC_CLKSR_MCSR_Msk & ((value) << ISC_CLKSR_MCSR_Pos))
#define   ISC_CLKSR_MCSR_0_Val                _U_(0x0)                                             /**< (ISC_CLKSR) The master clock is disabled.  */
#define   ISC_CLKSR_MCSR_1_Val                _U_(0x1)                                             /**< (ISC_CLKSR) The master clock is enabled.  */
#define ISC_CLKSR_MCSR_0                      (ISC_CLKSR_MCSR_0_Val << ISC_CLKSR_MCSR_Pos)         /**< (ISC_CLKSR) The master clock is disabled. Position  */
#define ISC_CLKSR_MCSR_1                      (ISC_CLKSR_MCSR_1_Val << ISC_CLKSR_MCSR_Pos)         /**< (ISC_CLKSR) The master clock is enabled. Position  */
#define ISC_CLKSR_SIP_Pos                     _U_(31)                                              /**< (ISC_CLKSR) Synchronization In Progress Position */
#define ISC_CLKSR_SIP_Msk                     (_U_(0x1) << ISC_CLKSR_SIP_Pos)                      /**< (ISC_CLKSR) Synchronization In Progress Mask */
#define ISC_CLKSR_SIP(value)                  (ISC_CLKSR_SIP_Msk & ((value) << ISC_CLKSR_SIP_Pos))
#define   ISC_CLKSR_SIP_0_Val                 _U_(0x0)                                             /**< (ISC_CLKSR) The double domain synchronization operation is over.  */
#define   ISC_CLKSR_SIP_1_Val                 _U_(0x1)                                             /**< (ISC_CLKSR) The double domain synchronization operation is in progress.  */
#define ISC_CLKSR_SIP_0                       (ISC_CLKSR_SIP_0_Val << ISC_CLKSR_SIP_Pos)           /**< (ISC_CLKSR) The double domain synchronization operation is over. Position  */
#define ISC_CLKSR_SIP_1                       (ISC_CLKSR_SIP_1_Val << ISC_CLKSR_SIP_Pos)           /**< (ISC_CLKSR) The double domain synchronization operation is in progress. Position  */
#define ISC_CLKSR_Msk                         _U_(0x80000003)                                      /**< (ISC_CLKSR) Register Mask  */


/* -------- ISC_CLKCFG : (ISC Offset: 0x24) (R/W 32) Clock Configuration Register -------- */
#define ISC_CLKCFG_RESETVALUE                 _U_(0x00)                                            /**<  (ISC_CLKCFG) Clock Configuration Register  Reset Value */

#define ISC_CLKCFG_MCDIV_Pos                  _U_(16)                                              /**< (ISC_CLKCFG) Master Clock Divider Position */
#define ISC_CLKCFG_MCDIV_Msk                  (_U_(0xFF) << ISC_CLKCFG_MCDIV_Pos)                  /**< (ISC_CLKCFG) Master Clock Divider Mask */
#define ISC_CLKCFG_MCDIV(value)               (ISC_CLKCFG_MCDIV_Msk & ((value) << ISC_CLKCFG_MCDIV_Pos))
#define ISC_CLKCFG_Msk                        _U_(0x00FF0000)                                      /**< (ISC_CLKCFG) Register Mask  */


/* -------- ISC_INTEN : (ISC Offset: 0x28) ( /W 32) Interrupt Enable Register -------- */
#define ISC_INTEN_VD_Pos                      _U_(0)                                               /**< (ISC_INTEN) Vertical Synchronization Detection Interrupt Enable Position */
#define ISC_INTEN_VD_Msk                      (_U_(0x1) << ISC_INTEN_VD_Pos)                       /**< (ISC_INTEN) Vertical Synchronization Detection Interrupt Enable Mask */
#define ISC_INTEN_VD(value)                   (ISC_INTEN_VD_Msk & ((value) << ISC_INTEN_VD_Pos))  
#define ISC_INTEN_HD_Pos                      _U_(1)                                               /**< (ISC_INTEN) Horizontal Synchronization Detection Interrupt Enable Position */
#define ISC_INTEN_HD_Msk                      (_U_(0x1) << ISC_INTEN_HD_Pos)                       /**< (ISC_INTEN) Horizontal Synchronization Detection Interrupt Enable Mask */
#define ISC_INTEN_HD(value)                   (ISC_INTEN_HD_Msk & ((value) << ISC_INTEN_HD_Pos))  
#define ISC_INTEN_SWRST_Pos                   _U_(4)                                               /**< (ISC_INTEN) Software Reset Completed Interrupt Enable Position */
#define ISC_INTEN_SWRST_Msk                   (_U_(0x1) << ISC_INTEN_SWRST_Pos)                    /**< (ISC_INTEN) Software Reset Completed Interrupt Enable Mask */
#define ISC_INTEN_SWRST(value)                (ISC_INTEN_SWRST_Msk & ((value) << ISC_INTEN_SWRST_Pos))
#define ISC_INTEN_DIS_Pos                     _U_(5)                                               /**< (ISC_INTEN) Disable Completed Interrupt Enable Position */
#define ISC_INTEN_DIS_Msk                     (_U_(0x1) << ISC_INTEN_DIS_Pos)                      /**< (ISC_INTEN) Disable Completed Interrupt Enable Mask */
#define ISC_INTEN_DIS(value)                  (ISC_INTEN_DIS_Msk & ((value) << ISC_INTEN_DIS_Pos))
#define ISC_INTEN_DDONE_Pos                   _U_(8)                                               /**< (ISC_INTEN) DMA Done Interrupt Enable Position */
#define ISC_INTEN_DDONE_Msk                   (_U_(0x1) << ISC_INTEN_DDONE_Pos)                    /**< (ISC_INTEN) DMA Done Interrupt Enable Mask */
#define ISC_INTEN_DDONE(value)                (ISC_INTEN_DDONE_Msk & ((value) << ISC_INTEN_DDONE_Pos))
#define ISC_INTEN_LDONE_Pos                   _U_(9)                                               /**< (ISC_INTEN) DMA List Done Interrupt Enable Position */
#define ISC_INTEN_LDONE_Msk                   (_U_(0x1) << ISC_INTEN_LDONE_Pos)                    /**< (ISC_INTEN) DMA List Done Interrupt Enable Mask */
#define ISC_INTEN_LDONE(value)                (ISC_INTEN_LDONE_Msk & ((value) << ISC_INTEN_LDONE_Pos))
#define ISC_INTEN_HISDONE_Pos                 _U_(12)                                              /**< (ISC_INTEN) Histogram Completed Interrupt Enable Position */
#define ISC_INTEN_HISDONE_Msk                 (_U_(0x1) << ISC_INTEN_HISDONE_Pos)                  /**< (ISC_INTEN) Histogram Completed Interrupt Enable Mask */
#define ISC_INTEN_HISDONE(value)              (ISC_INTEN_HISDONE_Msk & ((value) << ISC_INTEN_HISDONE_Pos))
#define ISC_INTEN_HISCLR_Pos                  _U_(13)                                              /**< (ISC_INTEN) Histogram Clear Interrupt Enable Position */
#define ISC_INTEN_HISCLR_Msk                  (_U_(0x1) << ISC_INTEN_HISCLR_Pos)                   /**< (ISC_INTEN) Histogram Clear Interrupt Enable Mask */
#define ISC_INTEN_HISCLR(value)               (ISC_INTEN_HISCLR_Msk & ((value) << ISC_INTEN_HISCLR_Pos))
#define ISC_INTEN_WERR_Pos                    _U_(16)                                              /**< (ISC_INTEN) Write Channel Error Interrupt Enable Position */
#define ISC_INTEN_WERR_Msk                    (_U_(0x1) << ISC_INTEN_WERR_Pos)                     /**< (ISC_INTEN) Write Channel Error Interrupt Enable Mask */
#define ISC_INTEN_WERR(value)                 (ISC_INTEN_WERR_Msk & ((value) << ISC_INTEN_WERR_Pos))
#define ISC_INTEN_RERR_Pos                    _U_(20)                                              /**< (ISC_INTEN) Read Channel Error Interrupt Enable Position */
#define ISC_INTEN_RERR_Msk                    (_U_(0x1) << ISC_INTEN_RERR_Pos)                     /**< (ISC_INTEN) Read Channel Error Interrupt Enable Mask */
#define ISC_INTEN_RERR(value)                 (ISC_INTEN_RERR_Msk & ((value) << ISC_INTEN_RERR_Pos))
#define ISC_INTEN_VFPOV_Pos                   _U_(24)                                              /**< (ISC_INTEN) Vertical Front Porch Overflow Interrupt Enable Position */
#define ISC_INTEN_VFPOV_Msk                   (_U_(0x1) << ISC_INTEN_VFPOV_Pos)                    /**< (ISC_INTEN) Vertical Front Porch Overflow Interrupt Enable Mask */
#define ISC_INTEN_VFPOV(value)                (ISC_INTEN_VFPOV_Msk & ((value) << ISC_INTEN_VFPOV_Pos))
#define ISC_INTEN_DAOV_Pos                    _U_(25)                                              /**< (ISC_INTEN) Data Overflow Interrupt Enable Position */
#define ISC_INTEN_DAOV_Msk                    (_U_(0x1) << ISC_INTEN_DAOV_Pos)                     /**< (ISC_INTEN) Data Overflow Interrupt Enable Mask */
#define ISC_INTEN_DAOV(value)                 (ISC_INTEN_DAOV_Msk & ((value) << ISC_INTEN_DAOV_Pos))
#define ISC_INTEN_VDTO_Pos                    _U_(26)                                              /**< (ISC_INTEN) Vertical Synchronization Timeout Interrupt Enable Position */
#define ISC_INTEN_VDTO_Msk                    (_U_(0x1) << ISC_INTEN_VDTO_Pos)                     /**< (ISC_INTEN) Vertical Synchronization Timeout Interrupt Enable Mask */
#define ISC_INTEN_VDTO(value)                 (ISC_INTEN_VDTO_Msk & ((value) << ISC_INTEN_VDTO_Pos))
#define ISC_INTEN_HDTO_Pos                    _U_(27)                                              /**< (ISC_INTEN) Horizontal Synchronization Timeout Interrupt Enable Position */
#define ISC_INTEN_HDTO_Msk                    (_U_(0x1) << ISC_INTEN_HDTO_Pos)                     /**< (ISC_INTEN) Horizontal Synchronization Timeout Interrupt Enable Mask */
#define ISC_INTEN_HDTO(value)                 (ISC_INTEN_HDTO_Msk & ((value) << ISC_INTEN_HDTO_Pos))
#define ISC_INTEN_CCIRERR_Pos                 _U_(28)                                              /**< (ISC_INTEN) CCIR Decoder Error Interrupt Enable Position */
#define ISC_INTEN_CCIRERR_Msk                 (_U_(0x1) << ISC_INTEN_CCIRERR_Pos)                  /**< (ISC_INTEN) CCIR Decoder Error Interrupt Enable Mask */
#define ISC_INTEN_CCIRERR(value)              (ISC_INTEN_CCIRERR_Msk & ((value) << ISC_INTEN_CCIRERR_Pos))
#define ISC_INTEN_GFOV_Pos                    _U_(29)                                              /**< (ISC_INTEN) Input FIFO Overflow Interrupt Enable Position */
#define ISC_INTEN_GFOV_Msk                    (_U_(0x1) << ISC_INTEN_GFOV_Pos)                     /**< (ISC_INTEN) Input FIFO Overflow Interrupt Enable Mask */
#define ISC_INTEN_GFOV(value)                 (ISC_INTEN_GFOV_Msk & ((value) << ISC_INTEN_GFOV_Pos))
#define ISC_INTEN_Msk                         _U_(0x3F113333)                                      /**< (ISC_INTEN) Register Mask  */


/* -------- ISC_INTDIS : (ISC Offset: 0x2C) ( /W 32) Interrupt Disable Register -------- */
#define ISC_INTDIS_VD_Pos                     _U_(0)                                               /**< (ISC_INTDIS) Vertical Synchronization Detection Interrupt Disable Position */
#define ISC_INTDIS_VD_Msk                     (_U_(0x1) << ISC_INTDIS_VD_Pos)                      /**< (ISC_INTDIS) Vertical Synchronization Detection Interrupt Disable Mask */
#define ISC_INTDIS_VD(value)                  (ISC_INTDIS_VD_Msk & ((value) << ISC_INTDIS_VD_Pos))
#define ISC_INTDIS_HD_Pos                     _U_(1)                                               /**< (ISC_INTDIS) Horizontal Synchronization Detection Interrupt Disable Position */
#define ISC_INTDIS_HD_Msk                     (_U_(0x1) << ISC_INTDIS_HD_Pos)                      /**< (ISC_INTDIS) Horizontal Synchronization Detection Interrupt Disable Mask */
#define ISC_INTDIS_HD(value)                  (ISC_INTDIS_HD_Msk & ((value) << ISC_INTDIS_HD_Pos))
#define ISC_INTDIS_SWRST_Pos                  _U_(4)                                               /**< (ISC_INTDIS) Software Reset Completed Interrupt Disable Position */
#define ISC_INTDIS_SWRST_Msk                  (_U_(0x1) << ISC_INTDIS_SWRST_Pos)                   /**< (ISC_INTDIS) Software Reset Completed Interrupt Disable Mask */
#define ISC_INTDIS_SWRST(value)               (ISC_INTDIS_SWRST_Msk & ((value) << ISC_INTDIS_SWRST_Pos))
#define ISC_INTDIS_DIS_Pos                    _U_(5)                                               /**< (ISC_INTDIS) Disable Completed Interrupt Disable Position */
#define ISC_INTDIS_DIS_Msk                    (_U_(0x1) << ISC_INTDIS_DIS_Pos)                     /**< (ISC_INTDIS) Disable Completed Interrupt Disable Mask */
#define ISC_INTDIS_DIS(value)                 (ISC_INTDIS_DIS_Msk & ((value) << ISC_INTDIS_DIS_Pos))
#define ISC_INTDIS_DDONE_Pos                  _U_(8)                                               /**< (ISC_INTDIS) DMA Done Interrupt Disable Position */
#define ISC_INTDIS_DDONE_Msk                  (_U_(0x1) << ISC_INTDIS_DDONE_Pos)                   /**< (ISC_INTDIS) DMA Done Interrupt Disable Mask */
#define ISC_INTDIS_DDONE(value)               (ISC_INTDIS_DDONE_Msk & ((value) << ISC_INTDIS_DDONE_Pos))
#define ISC_INTDIS_LDONE_Pos                  _U_(9)                                               /**< (ISC_INTDIS) DMA List Done Interrupt Disable Position */
#define ISC_INTDIS_LDONE_Msk                  (_U_(0x1) << ISC_INTDIS_LDONE_Pos)                   /**< (ISC_INTDIS) DMA List Done Interrupt Disable Mask */
#define ISC_INTDIS_LDONE(value)               (ISC_INTDIS_LDONE_Msk & ((value) << ISC_INTDIS_LDONE_Pos))
#define ISC_INTDIS_HISDONE_Pos                _U_(12)                                              /**< (ISC_INTDIS) Histogram Completed Interrupt Disable Position */
#define ISC_INTDIS_HISDONE_Msk                (_U_(0x1) << ISC_INTDIS_HISDONE_Pos)                 /**< (ISC_INTDIS) Histogram Completed Interrupt Disable Mask */
#define ISC_INTDIS_HISDONE(value)             (ISC_INTDIS_HISDONE_Msk & ((value) << ISC_INTDIS_HISDONE_Pos))
#define ISC_INTDIS_HISCLR_Pos                 _U_(13)                                              /**< (ISC_INTDIS) Histogram Clear Interrupt Disable Position */
#define ISC_INTDIS_HISCLR_Msk                 (_U_(0x1) << ISC_INTDIS_HISCLR_Pos)                  /**< (ISC_INTDIS) Histogram Clear Interrupt Disable Mask */
#define ISC_INTDIS_HISCLR(value)              (ISC_INTDIS_HISCLR_Msk & ((value) << ISC_INTDIS_HISCLR_Pos))
#define ISC_INTDIS_WERR_Pos                   _U_(16)                                              /**< (ISC_INTDIS) Write Channel Error Interrupt Disable Position */
#define ISC_INTDIS_WERR_Msk                   (_U_(0x1) << ISC_INTDIS_WERR_Pos)                    /**< (ISC_INTDIS) Write Channel Error Interrupt Disable Mask */
#define ISC_INTDIS_WERR(value)                (ISC_INTDIS_WERR_Msk & ((value) << ISC_INTDIS_WERR_Pos))
#define ISC_INTDIS_RERR_Pos                   _U_(20)                                              /**< (ISC_INTDIS) Read Channel Error Interrupt Disable Position */
#define ISC_INTDIS_RERR_Msk                   (_U_(0x1) << ISC_INTDIS_RERR_Pos)                    /**< (ISC_INTDIS) Read Channel Error Interrupt Disable Mask */
#define ISC_INTDIS_RERR(value)                (ISC_INTDIS_RERR_Msk & ((value) << ISC_INTDIS_RERR_Pos))
#define ISC_INTDIS_VFPOV_Pos                  _U_(24)                                              /**< (ISC_INTDIS) Vertical Front Porch Overflow Interrupt Disable Position */
#define ISC_INTDIS_VFPOV_Msk                  (_U_(0x1) << ISC_INTDIS_VFPOV_Pos)                   /**< (ISC_INTDIS) Vertical Front Porch Overflow Interrupt Disable Mask */
#define ISC_INTDIS_VFPOV(value)               (ISC_INTDIS_VFPOV_Msk & ((value) << ISC_INTDIS_VFPOV_Pos))
#define ISC_INTDIS_DAOV_Pos                   _U_(25)                                              /**< (ISC_INTDIS) Data Overflow Interrupt Disable Position */
#define ISC_INTDIS_DAOV_Msk                   (_U_(0x1) << ISC_INTDIS_DAOV_Pos)                    /**< (ISC_INTDIS) Data Overflow Interrupt Disable Mask */
#define ISC_INTDIS_DAOV(value)                (ISC_INTDIS_DAOV_Msk & ((value) << ISC_INTDIS_DAOV_Pos))
#define ISC_INTDIS_VDTO_Pos                   _U_(26)                                              /**< (ISC_INTDIS) Vertical Synchronization Timeout Interrupt Disable Position */
#define ISC_INTDIS_VDTO_Msk                   (_U_(0x1) << ISC_INTDIS_VDTO_Pos)                    /**< (ISC_INTDIS) Vertical Synchronization Timeout Interrupt Disable Mask */
#define ISC_INTDIS_VDTO(value)                (ISC_INTDIS_VDTO_Msk & ((value) << ISC_INTDIS_VDTO_Pos))
#define ISC_INTDIS_HDTO_Pos                   _U_(27)                                              /**< (ISC_INTDIS) Horizontal Synchronization Timeout Interrupt Disable Position */
#define ISC_INTDIS_HDTO_Msk                   (_U_(0x1) << ISC_INTDIS_HDTO_Pos)                    /**< (ISC_INTDIS) Horizontal Synchronization Timeout Interrupt Disable Mask */
#define ISC_INTDIS_HDTO(value)                (ISC_INTDIS_HDTO_Msk & ((value) << ISC_INTDIS_HDTO_Pos))
#define ISC_INTDIS_CCIRERR_Pos                _U_(28)                                              /**< (ISC_INTDIS) CCIR Decoder Error Interrupt Disable Position */
#define ISC_INTDIS_CCIRERR_Msk                (_U_(0x1) << ISC_INTDIS_CCIRERR_Pos)                 /**< (ISC_INTDIS) CCIR Decoder Error Interrupt Disable Mask */
#define ISC_INTDIS_CCIRERR(value)             (ISC_INTDIS_CCIRERR_Msk & ((value) << ISC_INTDIS_CCIRERR_Pos))
#define ISC_INTDIS_GFOV_Pos                   _U_(29)                                              /**< (ISC_INTDIS) FIFO Overflow Interrupt Disable Position */
#define ISC_INTDIS_GFOV_Msk                   (_U_(0x1) << ISC_INTDIS_GFOV_Pos)                    /**< (ISC_INTDIS) FIFO Overflow Interrupt Disable Mask */
#define ISC_INTDIS_GFOV(value)                (ISC_INTDIS_GFOV_Msk & ((value) << ISC_INTDIS_GFOV_Pos))
#define ISC_INTDIS_Msk                        _U_(0x3F113333)                                      /**< (ISC_INTDIS) Register Mask  */


/* -------- ISC_INTMASK : (ISC Offset: 0x30) ( R/ 32) Interrupt Mask Register -------- */
#define ISC_INTMASK_RESETVALUE                _U_(0x00)                                            /**<  (ISC_INTMASK) Interrupt Mask Register  Reset Value */

#define ISC_INTMASK_VD_Pos                    _U_(0)                                               /**< (ISC_INTMASK) Vertical Synchronization Detection Interrupt Mask Position */
#define ISC_INTMASK_VD_Msk                    (_U_(0x1) << ISC_INTMASK_VD_Pos)                     /**< (ISC_INTMASK) Vertical Synchronization Detection Interrupt Mask Mask */
#define ISC_INTMASK_VD(value)                 (ISC_INTMASK_VD_Msk & ((value) << ISC_INTMASK_VD_Pos))
#define ISC_INTMASK_HD_Pos                    _U_(1)                                               /**< (ISC_INTMASK) Horizontal Synchronization Detection Interrupt Mask Position */
#define ISC_INTMASK_HD_Msk                    (_U_(0x1) << ISC_INTMASK_HD_Pos)                     /**< (ISC_INTMASK) Horizontal Synchronization Detection Interrupt Mask Mask */
#define ISC_INTMASK_HD(value)                 (ISC_INTMASK_HD_Msk & ((value) << ISC_INTMASK_HD_Pos))
#define ISC_INTMASK_SWRST_Pos                 _U_(4)                                               /**< (ISC_INTMASK) Software Reset Completed Interrupt Mask Position */
#define ISC_INTMASK_SWRST_Msk                 (_U_(0x1) << ISC_INTMASK_SWRST_Pos)                  /**< (ISC_INTMASK) Software Reset Completed Interrupt Mask Mask */
#define ISC_INTMASK_SWRST(value)              (ISC_INTMASK_SWRST_Msk & ((value) << ISC_INTMASK_SWRST_Pos))
#define ISC_INTMASK_DIS_Pos                   _U_(5)                                               /**< (ISC_INTMASK) Disable Completed Interrupt Mask Position */
#define ISC_INTMASK_DIS_Msk                   (_U_(0x1) << ISC_INTMASK_DIS_Pos)                    /**< (ISC_INTMASK) Disable Completed Interrupt Mask Mask */
#define ISC_INTMASK_DIS(value)                (ISC_INTMASK_DIS_Msk & ((value) << ISC_INTMASK_DIS_Pos))
#define ISC_INTMASK_DDONE_Pos                 _U_(8)                                               /**< (ISC_INTMASK) DMA Done Interrupt Mask Position */
#define ISC_INTMASK_DDONE_Msk                 (_U_(0x1) << ISC_INTMASK_DDONE_Pos)                  /**< (ISC_INTMASK) DMA Done Interrupt Mask Mask */
#define ISC_INTMASK_DDONE(value)              (ISC_INTMASK_DDONE_Msk & ((value) << ISC_INTMASK_DDONE_Pos))
#define ISC_INTMASK_LDONE_Pos                 _U_(9)                                               /**< (ISC_INTMASK) DMA List Done Interrupt Mask Position */
#define ISC_INTMASK_LDONE_Msk                 (_U_(0x1) << ISC_INTMASK_LDONE_Pos)                  /**< (ISC_INTMASK) DMA List Done Interrupt Mask Mask */
#define ISC_INTMASK_LDONE(value)              (ISC_INTMASK_LDONE_Msk & ((value) << ISC_INTMASK_LDONE_Pos))
#define ISC_INTMASK_HISDONE_Pos               _U_(12)                                              /**< (ISC_INTMASK) Histogram Completed Interrupt Mask Position */
#define ISC_INTMASK_HISDONE_Msk               (_U_(0x1) << ISC_INTMASK_HISDONE_Pos)                /**< (ISC_INTMASK) Histogram Completed Interrupt Mask Mask */
#define ISC_INTMASK_HISDONE(value)            (ISC_INTMASK_HISDONE_Msk & ((value) << ISC_INTMASK_HISDONE_Pos))
#define ISC_INTMASK_HISCLR_Pos                _U_(13)                                              /**< (ISC_INTMASK) Histogram Clear Interrupt Mask Position */
#define ISC_INTMASK_HISCLR_Msk                (_U_(0x1) << ISC_INTMASK_HISCLR_Pos)                 /**< (ISC_INTMASK) Histogram Clear Interrupt Mask Mask */
#define ISC_INTMASK_HISCLR(value)             (ISC_INTMASK_HISCLR_Msk & ((value) << ISC_INTMASK_HISCLR_Pos))
#define ISC_INTMASK_WERR_Pos                  _U_(16)                                              /**< (ISC_INTMASK) Write Channel Error Interrupt Mask Position */
#define ISC_INTMASK_WERR_Msk                  (_U_(0x1) << ISC_INTMASK_WERR_Pos)                   /**< (ISC_INTMASK) Write Channel Error Interrupt Mask Mask */
#define ISC_INTMASK_WERR(value)               (ISC_INTMASK_WERR_Msk & ((value) << ISC_INTMASK_WERR_Pos))
#define ISC_INTMASK_RERR_Pos                  _U_(20)                                              /**< (ISC_INTMASK) Read Channel Error Interrupt Mask Position */
#define ISC_INTMASK_RERR_Msk                  (_U_(0x1) << ISC_INTMASK_RERR_Pos)                   /**< (ISC_INTMASK) Read Channel Error Interrupt Mask Mask */
#define ISC_INTMASK_RERR(value)               (ISC_INTMASK_RERR_Msk & ((value) << ISC_INTMASK_RERR_Pos))
#define ISC_INTMASK_VFPOV_Pos                 _U_(24)                                              /**< (ISC_INTMASK) Vertical Front Porch Overflow Interrupt Mask Position */
#define ISC_INTMASK_VFPOV_Msk                 (_U_(0x1) << ISC_INTMASK_VFPOV_Pos)                  /**< (ISC_INTMASK) Vertical Front Porch Overflow Interrupt Mask Mask */
#define ISC_INTMASK_VFPOV(value)              (ISC_INTMASK_VFPOV_Msk & ((value) << ISC_INTMASK_VFPOV_Pos))
#define ISC_INTMASK_DAOV_Pos                  _U_(25)                                              /**< (ISC_INTMASK) Data Overflow Interrupt Mask Position */
#define ISC_INTMASK_DAOV_Msk                  (_U_(0x1) << ISC_INTMASK_DAOV_Pos)                   /**< (ISC_INTMASK) Data Overflow Interrupt Mask Mask */
#define ISC_INTMASK_DAOV(value)               (ISC_INTMASK_DAOV_Msk & ((value) << ISC_INTMASK_DAOV_Pos))
#define ISC_INTMASK_VDTO_Pos                  _U_(26)                                              /**< (ISC_INTMASK) Vertical Synchronization Timeout Interrupt Mask Position */
#define ISC_INTMASK_VDTO_Msk                  (_U_(0x1) << ISC_INTMASK_VDTO_Pos)                   /**< (ISC_INTMASK) Vertical Synchronization Timeout Interrupt Mask Mask */
#define ISC_INTMASK_VDTO(value)               (ISC_INTMASK_VDTO_Msk & ((value) << ISC_INTMASK_VDTO_Pos))
#define ISC_INTMASK_HDTO_Pos                  _U_(27)                                              /**< (ISC_INTMASK) Horizontal Synchronization Timeout Interrupt Mask Position */
#define ISC_INTMASK_HDTO_Msk                  (_U_(0x1) << ISC_INTMASK_HDTO_Pos)                   /**< (ISC_INTMASK) Horizontal Synchronization Timeout Interrupt Mask Mask */
#define ISC_INTMASK_HDTO(value)               (ISC_INTMASK_HDTO_Msk & ((value) << ISC_INTMASK_HDTO_Pos))
#define ISC_INTMASK_CCIRERR_Pos               _U_(28)                                              /**< (ISC_INTMASK) CCIR Decoder Error Interrupt Mask Position */
#define ISC_INTMASK_CCIRERR_Msk               (_U_(0x1) << ISC_INTMASK_CCIRERR_Pos)                /**< (ISC_INTMASK) CCIR Decoder Error Interrupt Mask Mask */
#define ISC_INTMASK_CCIRERR(value)            (ISC_INTMASK_CCIRERR_Msk & ((value) << ISC_INTMASK_CCIRERR_Pos))
#define ISC_INTMASK_GFOV_Pos                  _U_(29)                                              /**< (ISC_INTMASK) FIFO Overflow Interrupt Mask Position */
#define ISC_INTMASK_GFOV_Msk                  (_U_(0x1) << ISC_INTMASK_GFOV_Pos)                   /**< (ISC_INTMASK) FIFO Overflow Interrupt Mask Mask */
#define ISC_INTMASK_GFOV(value)               (ISC_INTMASK_GFOV_Msk & ((value) << ISC_INTMASK_GFOV_Pos))
#define ISC_INTMASK_Msk                       _U_(0x3F113333)                                      /**< (ISC_INTMASK) Register Mask  */


/* -------- ISC_INTSR : (ISC Offset: 0x34) ( R/ 32) Interrupt Status Register -------- */
#define ISC_INTSR_RESETVALUE                  _U_(0x00)                                            /**<  (ISC_INTSR) Interrupt Status Register  Reset Value */

#define ISC_INTSR_VD_Pos                      _U_(0)                                               /**< (ISC_INTSR) Vertical Synchronization Detected Interrupt (cleared on read) Position */
#define ISC_INTSR_VD_Msk                      (_U_(0x1) << ISC_INTSR_VD_Pos)                       /**< (ISC_INTSR) Vertical Synchronization Detected Interrupt (cleared on read) Mask */
#define ISC_INTSR_VD(value)                   (ISC_INTSR_VD_Msk & ((value) << ISC_INTSR_VD_Pos))  
#define   ISC_INTSR_VD_0_Val                  _U_(0x0)                                             /**< (ISC_INTSR) No vertical synchronization detection since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_VD_1_Val                  _U_(0x1)                                             /**< (ISC_INTSR) A vertical synchronization has been detected.  */
#define ISC_INTSR_VD_0                        (ISC_INTSR_VD_0_Val << ISC_INTSR_VD_Pos)             /**< (ISC_INTSR) No vertical synchronization detection since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_VD_1                        (ISC_INTSR_VD_1_Val << ISC_INTSR_VD_Pos)             /**< (ISC_INTSR) A vertical synchronization has been detected. Position  */
#define ISC_INTSR_HD_Pos                      _U_(1)                                               /**< (ISC_INTSR) Horizontal Synchronization Detected Interrupt (cleared on read) Position */
#define ISC_INTSR_HD_Msk                      (_U_(0x1) << ISC_INTSR_HD_Pos)                       /**< (ISC_INTSR) Horizontal Synchronization Detected Interrupt (cleared on read) Mask */
#define ISC_INTSR_HD(value)                   (ISC_INTSR_HD_Msk & ((value) << ISC_INTSR_HD_Pos))  
#define   ISC_INTSR_HD_0_Val                  _U_(0x0)                                             /**< (ISC_INTSR) No horizontal synchronization detection since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_HD_1_Val                  _U_(0x1)                                             /**< (ISC_INTSR) A horizontal synchronization has been detected.  */
#define ISC_INTSR_HD_0                        (ISC_INTSR_HD_0_Val << ISC_INTSR_HD_Pos)             /**< (ISC_INTSR) No horizontal synchronization detection since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_HD_1                        (ISC_INTSR_HD_1_Val << ISC_INTSR_HD_Pos)             /**< (ISC_INTSR) A horizontal synchronization has been detected. Position  */
#define ISC_INTSR_SWRST_Pos                   _U_(4)                                               /**< (ISC_INTSR) Software Reset Completed Interrupt (cleared on read) Position */
#define ISC_INTSR_SWRST_Msk                   (_U_(0x1) << ISC_INTSR_SWRST_Pos)                    /**< (ISC_INTSR) Software Reset Completed Interrupt (cleared on read) Mask */
#define ISC_INTSR_SWRST(value)                (ISC_INTSR_SWRST_Msk & ((value) << ISC_INTSR_SWRST_Pos))
#define   ISC_INTSR_SWRST_0_Val               _U_(0x0)                                             /**< (ISC_INTSR) No software reset completion since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_SWRST_1_Val               _U_(0x1)                                             /**< (ISC_INTSR) The software reset has completed.  */
#define ISC_INTSR_SWRST_0                     (ISC_INTSR_SWRST_0_Val << ISC_INTSR_SWRST_Pos)       /**< (ISC_INTSR) No software reset completion since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_SWRST_1                     (ISC_INTSR_SWRST_1_Val << ISC_INTSR_SWRST_Pos)       /**< (ISC_INTSR) The software reset has completed. Position  */
#define ISC_INTSR_DIS_Pos                     _U_(5)                                               /**< (ISC_INTSR) Disable Completed Interrupt (cleared on read) Position */
#define ISC_INTSR_DIS_Msk                     (_U_(0x1) << ISC_INTSR_DIS_Pos)                      /**< (ISC_INTSR) Disable Completed Interrupt (cleared on read) Mask */
#define ISC_INTSR_DIS(value)                  (ISC_INTSR_DIS_Msk & ((value) << ISC_INTSR_DIS_Pos))
#define   ISC_INTSR_DIS_0_Val                 _U_(0x0)                                             /**< (ISC_INTSR) The disable has not occurred since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_DIS_1_Val                 _U_(0x1)                                             /**< (ISC_INTSR) The disable has completed.  */
#define ISC_INTSR_DIS_0                       (ISC_INTSR_DIS_0_Val << ISC_INTSR_DIS_Pos)           /**< (ISC_INTSR) The disable has not occurred since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_DIS_1                       (ISC_INTSR_DIS_1_Val << ISC_INTSR_DIS_Pos)           /**< (ISC_INTSR) The disable has completed. Position  */
#define ISC_INTSR_DDONE_Pos                   _U_(8)                                               /**< (ISC_INTSR) DMA Done Interrupt (cleared on read) Position */
#define ISC_INTSR_DDONE_Msk                   (_U_(0x1) << ISC_INTSR_DDONE_Pos)                    /**< (ISC_INTSR) DMA Done Interrupt (cleared on read) Mask */
#define ISC_INTSR_DDONE(value)                (ISC_INTSR_DDONE_Msk & ((value) << ISC_INTSR_DDONE_Pos))
#define   ISC_INTSR_DDONE_0_Val               _U_(0x0)                                             /**< (ISC_INTSR) No DMA Transfer Done interrupt has occurred since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_DDONE_1_Val               _U_(0x1)                                             /**< (ISC_INTSR) The DMA Transfer Done interrupt has occurred.  */
#define ISC_INTSR_DDONE_0                     (ISC_INTSR_DDONE_0_Val << ISC_INTSR_DDONE_Pos)       /**< (ISC_INTSR) No DMA Transfer Done interrupt has occurred since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_DDONE_1                     (ISC_INTSR_DDONE_1_Val << ISC_INTSR_DDONE_Pos)       /**< (ISC_INTSR) The DMA Transfer Done interrupt has occurred. Position  */
#define ISC_INTSR_LDONE_Pos                   _U_(9)                                               /**< (ISC_INTSR) DMA List Done Interrupt (cleared on read) Position */
#define ISC_INTSR_LDONE_Msk                   (_U_(0x1) << ISC_INTSR_LDONE_Pos)                    /**< (ISC_INTSR) DMA List Done Interrupt (cleared on read) Mask */
#define ISC_INTSR_LDONE(value)                (ISC_INTSR_LDONE_Msk & ((value) << ISC_INTSR_LDONE_Pos))
#define   ISC_INTSR_LDONE_0_Val               _U_(0x0)                                             /**< (ISC_INTSR) No DMA List Done interrupt has occurred since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_LDONE_1_Val               _U_(0x1)                                             /**< (ISC_INTSR) The DMA List Done interrupt has occurred.  */
#define ISC_INTSR_LDONE_0                     (ISC_INTSR_LDONE_0_Val << ISC_INTSR_LDONE_Pos)       /**< (ISC_INTSR) No DMA List Done interrupt has occurred since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_LDONE_1                     (ISC_INTSR_LDONE_1_Val << ISC_INTSR_LDONE_Pos)       /**< (ISC_INTSR) The DMA List Done interrupt has occurred. Position  */
#define ISC_INTSR_HISDONE_Pos                 _U_(12)                                              /**< (ISC_INTSR) Histogram Completed Interrupt (cleared on read) Position */
#define ISC_INTSR_HISDONE_Msk                 (_U_(0x1) << ISC_INTSR_HISDONE_Pos)                  /**< (ISC_INTSR) Histogram Completed Interrupt (cleared on read) Mask */
#define ISC_INTSR_HISDONE(value)              (ISC_INTSR_HISDONE_Msk & ((value) << ISC_INTSR_HISDONE_Pos))
#define   ISC_INTSR_HISDONE_0_Val             _U_(0x0)                                             /**< (ISC_INTSR) No Histogram Completed interrupt has been raised since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_HISDONE_1_Val             _U_(0x1)                                             /**< (ISC_INTSR) The Histogram Completed interrupt has occurred.  */
#define ISC_INTSR_HISDONE_0                   (ISC_INTSR_HISDONE_0_Val << ISC_INTSR_HISDONE_Pos)   /**< (ISC_INTSR) No Histogram Completed interrupt has been raised since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_HISDONE_1                   (ISC_INTSR_HISDONE_1_Val << ISC_INTSR_HISDONE_Pos)   /**< (ISC_INTSR) The Histogram Completed interrupt has occurred. Position  */
#define ISC_INTSR_HISCLR_Pos                  _U_(13)                                              /**< (ISC_INTSR) Histogram Clear Interrupt (cleared on read) Position */
#define ISC_INTSR_HISCLR_Msk                  (_U_(0x1) << ISC_INTSR_HISCLR_Pos)                   /**< (ISC_INTSR) Histogram Clear Interrupt (cleared on read) Mask */
#define ISC_INTSR_HISCLR(value)               (ISC_INTSR_HISCLR_Msk & ((value) << ISC_INTSR_HISCLR_Pos))
#define   ISC_INTSR_HISCLR_0_Val              _U_(0x0)                                             /**< (ISC_INTSR) No Histogram Clear interrupt has been raised since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_HISCLR_1_Val              _U_(0x1)                                             /**< (ISC_INTSR) The Histogram Clear interrupt has occurred.  */
#define ISC_INTSR_HISCLR_0                    (ISC_INTSR_HISCLR_0_Val << ISC_INTSR_HISCLR_Pos)     /**< (ISC_INTSR) No Histogram Clear interrupt has been raised since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_HISCLR_1                    (ISC_INTSR_HISCLR_1_Val << ISC_INTSR_HISCLR_Pos)     /**< (ISC_INTSR) The Histogram Clear interrupt has occurred. Position  */
#define ISC_INTSR_WERR_Pos                    _U_(16)                                              /**< (ISC_INTSR) Write Channel Error Interrupt (cleared on read) Position */
#define ISC_INTSR_WERR_Msk                    (_U_(0x1) << ISC_INTSR_WERR_Pos)                     /**< (ISC_INTSR) Write Channel Error Interrupt (cleared on read) Mask */
#define ISC_INTSR_WERR(value)                 (ISC_INTSR_WERR_Msk & ((value) << ISC_INTSR_WERR_Pos))
#define   ISC_INTSR_WERR_0_Val                _U_(0x0)                                             /**< (ISC_INTSR) No write channel error since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_WERR_1_Val                _U_(0x1)                                             /**< (ISC_INTSR) A write channel error occurred.  */
#define ISC_INTSR_WERR_0                      (ISC_INTSR_WERR_0_Val << ISC_INTSR_WERR_Pos)         /**< (ISC_INTSR) No write channel error since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_WERR_1                      (ISC_INTSR_WERR_1_Val << ISC_INTSR_WERR_Pos)         /**< (ISC_INTSR) A write channel error occurred. Position  */
#define ISC_INTSR_WERRID_Pos                  _U_(17)                                              /**< (ISC_INTSR) Write Channel Error Identifier Position */
#define ISC_INTSR_WERRID_Msk                  (_U_(0x3) << ISC_INTSR_WERRID_Pos)                   /**< (ISC_INTSR) Write Channel Error Identifier Mask */
#define ISC_INTSR_WERRID(value)               (ISC_INTSR_WERRID_Msk & ((value) << ISC_INTSR_WERRID_Pos))
#define   ISC_INTSR_WERRID_CH0_Val            _U_(0x0)                                             /**< (ISC_INTSR) An error occurred for Channel 0 (RAW/RGB/Y)  */
#define   ISC_INTSR_WERRID_CH1_Val            _U_(0x1)                                             /**< (ISC_INTSR) An error occurred for Channel 1 (CbCr/Cb)  */
#define   ISC_INTSR_WERRID_CH2_Val            _U_(0x2)                                             /**< (ISC_INTSR) An error occurred for Channel 2 (Cr)  */
#define   ISC_INTSR_WERRID_WB_Val             _U_(0x3)                                             /**< (ISC_INTSR) Write back channel error  */
#define ISC_INTSR_WERRID_CH0                  (ISC_INTSR_WERRID_CH0_Val << ISC_INTSR_WERRID_Pos)   /**< (ISC_INTSR) An error occurred for Channel 0 (RAW/RGB/Y) Position  */
#define ISC_INTSR_WERRID_CH1                  (ISC_INTSR_WERRID_CH1_Val << ISC_INTSR_WERRID_Pos)   /**< (ISC_INTSR) An error occurred for Channel 1 (CbCr/Cb) Position  */
#define ISC_INTSR_WERRID_CH2                  (ISC_INTSR_WERRID_CH2_Val << ISC_INTSR_WERRID_Pos)   /**< (ISC_INTSR) An error occurred for Channel 2 (Cr) Position  */
#define ISC_INTSR_WERRID_WB                   (ISC_INTSR_WERRID_WB_Val << ISC_INTSR_WERRID_Pos)    /**< (ISC_INTSR) Write back channel error Position  */
#define ISC_INTSR_RERR_Pos                    _U_(20)                                              /**< (ISC_INTSR) Read Channel Error Interrupt (cleared on read) Position */
#define ISC_INTSR_RERR_Msk                    (_U_(0x1) << ISC_INTSR_RERR_Pos)                     /**< (ISC_INTSR) Read Channel Error Interrupt (cleared on read) Mask */
#define ISC_INTSR_RERR(value)                 (ISC_INTSR_RERR_Msk & ((value) << ISC_INTSR_RERR_Pos))
#define   ISC_INTSR_RERR_0_Val                _U_(0x0)                                             /**< (ISC_INTSR) No read channel error since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_RERR_1_Val                _U_(0x1)                                             /**< (ISC_INTSR) A read channel error occurred when the ISC read the descriptor.  */
#define ISC_INTSR_RERR_0                      (ISC_INTSR_RERR_0_Val << ISC_INTSR_RERR_Pos)         /**< (ISC_INTSR) No read channel error since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_RERR_1                      (ISC_INTSR_RERR_1_Val << ISC_INTSR_RERR_Pos)         /**< (ISC_INTSR) A read channel error occurred when the ISC read the descriptor. Position  */
#define ISC_INTSR_VFPOV_Pos                   _U_(24)                                              /**< (ISC_INTSR) Vertical Front Porch Overflow Interrupt (cleared on read) Position */
#define ISC_INTSR_VFPOV_Msk                   (_U_(0x1) << ISC_INTSR_VFPOV_Pos)                    /**< (ISC_INTSR) Vertical Front Porch Overflow Interrupt (cleared on read) Mask */
#define ISC_INTSR_VFPOV(value)                (ISC_INTSR_VFPOV_Msk & ((value) << ISC_INTSR_VFPOV_Pos))
#define   ISC_INTSR_VFPOV_0_Val               _U_(0x0)                                             /**< (ISC_INTSR) No vertical front porch error occurred since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_VFPOV_1_Val               _U_(0x1)                                             /**< (ISC_INTSR) The vertical synchronization has been detected but the DMA channel is still busy.  */
#define ISC_INTSR_VFPOV_0                     (ISC_INTSR_VFPOV_0_Val << ISC_INTSR_VFPOV_Pos)       /**< (ISC_INTSR) No vertical front porch error occurred since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_VFPOV_1                     (ISC_INTSR_VFPOV_1_Val << ISC_INTSR_VFPOV_Pos)       /**< (ISC_INTSR) The vertical synchronization has been detected but the DMA channel is still busy. Position  */
#define ISC_INTSR_DAOV_Pos                    _U_(25)                                              /**< (ISC_INTSR) Data Overflow Interrupt (cleared on read) Position */
#define ISC_INTSR_DAOV_Msk                    (_U_(0x1) << ISC_INTSR_DAOV_Pos)                     /**< (ISC_INTSR) Data Overflow Interrupt (cleared on read) Mask */
#define ISC_INTSR_DAOV(value)                 (ISC_INTSR_DAOV_Msk & ((value) << ISC_INTSR_DAOV_Pos))
#define   ISC_INTSR_DAOV_0_Val                _U_(0x0)                                             /**< (ISC_INTSR) No data overflow error occurred since the last reset of the Interrupt Status register.  */
#define   ISC_INTSR_DAOV_1_Val                _U_(0x1)                                             /**< (ISC_INTSR) A data overflow occurred.  */
#define ISC_INTSR_DAOV_0                      (ISC_INTSR_DAOV_0_Val << ISC_INTSR_DAOV_Pos)         /**< (ISC_INTSR) No data overflow error occurred since the last reset of the Interrupt Status register. Position  */
#define ISC_INTSR_DAOV_1                      (ISC_INTSR_DAOV_1_Val << ISC_INTSR_DAOV_Pos)         /**< (ISC_INTSR) A data overflow occurred. Position  */
#define ISC_INTSR_VDTO_Pos                    _U_(26)                                              /**< (ISC_INTSR) Vertical Synchronization Timeout Interrupt (cleared on read) Position */
#define ISC_INTSR_VDTO_Msk                    (_U_(0x1) << ISC_INTSR_VDTO_Pos)                     /**< (ISC_INTSR) Vertical Synchronization Timeout Interrupt (cleared on read) Mask */
#define ISC_INTSR_VDTO(value)                 (ISC_INTSR_VDTO_Msk & ((value) << ISC_INTSR_VDTO_Pos))
#define   ISC_INTSR_VDTO_0_Val                _U_(0x0)                                             /**< (ISC_INTSR) A vertical synchronization is detected since the last reset of the Interrupt Status register.  */
#define   ISC_INTSR_VDTO_1_Val                _U_(0x1)                                             /**< (ISC_INTSR) No vertical synchronization is detected.  */
#define ISC_INTSR_VDTO_0                      (ISC_INTSR_VDTO_0_Val << ISC_INTSR_VDTO_Pos)         /**< (ISC_INTSR) A vertical synchronization is detected since the last reset of the Interrupt Status register. Position  */
#define ISC_INTSR_VDTO_1                      (ISC_INTSR_VDTO_1_Val << ISC_INTSR_VDTO_Pos)         /**< (ISC_INTSR) No vertical synchronization is detected. Position  */
#define ISC_INTSR_HDTO_Pos                    _U_(27)                                              /**< (ISC_INTSR) Horizontal Synchronization Timeout Interrupt (cleared on read) Position */
#define ISC_INTSR_HDTO_Msk                    (_U_(0x1) << ISC_INTSR_HDTO_Pos)                     /**< (ISC_INTSR) Horizontal Synchronization Timeout Interrupt (cleared on read) Mask */
#define ISC_INTSR_HDTO(value)                 (ISC_INTSR_HDTO_Msk & ((value) << ISC_INTSR_HDTO_Pos))
#define   ISC_INTSR_HDTO_0_Val                _U_(0x0)                                             /**< (ISC_INTSR) Horizontal synchronization is detected since the last reset of the Interrupt Status register.  */
#define   ISC_INTSR_HDTO_1_Val                _U_(0x1)                                             /**< (ISC_INTSR) No horizontal synchronization is detected.  */
#define ISC_INTSR_HDTO_0                      (ISC_INTSR_HDTO_0_Val << ISC_INTSR_HDTO_Pos)         /**< (ISC_INTSR) Horizontal synchronization is detected since the last reset of the Interrupt Status register. Position  */
#define ISC_INTSR_HDTO_1                      (ISC_INTSR_HDTO_1_Val << ISC_INTSR_HDTO_Pos)         /**< (ISC_INTSR) No horizontal synchronization is detected. Position  */
#define ISC_INTSR_CCIRERR_Pos                 _U_(28)                                              /**< (ISC_INTSR) CCIR Decoder Error Interrupt (cleared on read) Position */
#define ISC_INTSR_CCIRERR_Msk                 (_U_(0x1) << ISC_INTSR_CCIRERR_Pos)                  /**< (ISC_INTSR) CCIR Decoder Error Interrupt (cleared on read) Mask */
#define ISC_INTSR_CCIRERR(value)              (ISC_INTSR_CCIRERR_Msk & ((value) << ISC_INTSR_CCIRERR_Pos))
#define   ISC_INTSR_CCIRERR_0_Val             _U_(0x0)                                             /**< (ISC_INTSR) No CCIR CRC error detected since the last read of the Interrupt Status register  */
#define   ISC_INTSR_CCIRERR_1_Val             _U_(0x1)                                             /**< (ISC_INTSR) A CCIR CRC error has been detected.  */
#define ISC_INTSR_CCIRERR_0                   (ISC_INTSR_CCIRERR_0_Val << ISC_INTSR_CCIRERR_Pos)   /**< (ISC_INTSR) No CCIR CRC error detected since the last read of the Interrupt Status register Position  */
#define ISC_INTSR_CCIRERR_1                   (ISC_INTSR_CCIRERR_1_Val << ISC_INTSR_CCIRERR_Pos)   /**< (ISC_INTSR) A CCIR CRC error has been detected. Position  */
#define ISC_INTSR_GFOV_Pos                    _U_(29)                                              /**< (ISC_INTSR) FIFO Overflow Interrupt (relevant if MIPI interface is not selected) (cleared on read) Position */
#define ISC_INTSR_GFOV_Msk                    (_U_(0x1) << ISC_INTSR_GFOV_Pos)                     /**< (ISC_INTSR) FIFO Overflow Interrupt (relevant if MIPI interface is not selected) (cleared on read) Mask */
#define ISC_INTSR_GFOV(value)                 (ISC_INTSR_GFOV_Msk & ((value) << ISC_INTSR_GFOV_Pos))
#define   ISC_INTSR_GFOV_0_Val                _U_(0x0)                                             /**< (ISC_INTSR) No FIFO overflow detected since the last read of the Interrupt Status register.  */
#define   ISC_INTSR_GFOV_1_Val                _U_(0x1)                                             /**< (ISC_INTSR) A FIFO overflow has been detected.  */
#define ISC_INTSR_GFOV_0                      (ISC_INTSR_GFOV_0_Val << ISC_INTSR_GFOV_Pos)         /**< (ISC_INTSR) No FIFO overflow detected since the last read of the Interrupt Status register. Position  */
#define ISC_INTSR_GFOV_1                      (ISC_INTSR_GFOV_1_Val << ISC_INTSR_GFOV_Pos)         /**< (ISC_INTSR) A FIFO overflow has been detected. Position  */
#define ISC_INTSR_Msk                         _U_(0x3F173333)                                      /**< (ISC_INTSR) Register Mask  */


/* -------- ISC_DPC_CTRL : (ISC Offset: 0x40) (R/W 32) Defective Pixel Correction Control Register -------- */
#define ISC_DPC_CTRL_RESETVALUE               _U_(0x00)                                            /**<  (ISC_DPC_CTRL) Defective Pixel Correction Control Register  Reset Value */

#define ISC_DPC_CTRL_DPCEN_Pos                _U_(0)                                               /**< (ISC_DPC_CTRL) Defective Pixel Correction Enable Position */
#define ISC_DPC_CTRL_DPCEN_Msk                (_U_(0x1) << ISC_DPC_CTRL_DPCEN_Pos)                 /**< (ISC_DPC_CTRL) Defective Pixel Correction Enable Mask */
#define ISC_DPC_CTRL_DPCEN(value)             (ISC_DPC_CTRL_DPCEN_Msk & ((value) << ISC_DPC_CTRL_DPCEN_Pos))
#define   ISC_DPC_CTRL_DPCEN_0_Val            _U_(0x0)                                             /**< (ISC_DPC_CTRL) Defective pixel correction is disabled.  */
#define   ISC_DPC_CTRL_DPCEN_1_Val            _U_(0x1)                                             /**< (ISC_DPC_CTRL) Defective pixel correction is enabled.  */
#define ISC_DPC_CTRL_DPCEN_0                  (ISC_DPC_CTRL_DPCEN_0_Val << ISC_DPC_CTRL_DPCEN_Pos) /**< (ISC_DPC_CTRL) Defective pixel correction is disabled. Position  */
#define ISC_DPC_CTRL_DPCEN_1                  (ISC_DPC_CTRL_DPCEN_1_Val << ISC_DPC_CTRL_DPCEN_Pos) /**< (ISC_DPC_CTRL) Defective pixel correction is enabled. Position  */
#define ISC_DPC_CTRL_GDCEN_Pos                _U_(1)                                               /**< (ISC_DPC_CTRL) Green Disparity Correction Enable Position */
#define ISC_DPC_CTRL_GDCEN_Msk                (_U_(0x1) << ISC_DPC_CTRL_GDCEN_Pos)                 /**< (ISC_DPC_CTRL) Green Disparity Correction Enable Mask */
#define ISC_DPC_CTRL_GDCEN(value)             (ISC_DPC_CTRL_GDCEN_Msk & ((value) << ISC_DPC_CTRL_GDCEN_Pos))
#define   ISC_DPC_CTRL_GDCEN_0_Val            _U_(0x0)                                             /**< (ISC_DPC_CTRL) Green disparity correction is disabled.  */
#define   ISC_DPC_CTRL_GDCEN_1_Val            _U_(0x1)                                             /**< (ISC_DPC_CTRL) Green disparity correction is enabled.  */
#define ISC_DPC_CTRL_GDCEN_0                  (ISC_DPC_CTRL_GDCEN_0_Val << ISC_DPC_CTRL_GDCEN_Pos) /**< (ISC_DPC_CTRL) Green disparity correction is disabled. Position  */
#define ISC_DPC_CTRL_GDCEN_1                  (ISC_DPC_CTRL_GDCEN_1_Val << ISC_DPC_CTRL_GDCEN_Pos) /**< (ISC_DPC_CTRL) Green disparity correction is enabled. Position  */
#define ISC_DPC_CTRL_BLCEN_Pos                _U_(2)                                               /**< (ISC_DPC_CTRL) Black Level Correction Enable Position */
#define ISC_DPC_CTRL_BLCEN_Msk                (_U_(0x1) << ISC_DPC_CTRL_BLCEN_Pos)                 /**< (ISC_DPC_CTRL) Black Level Correction Enable Mask */
#define ISC_DPC_CTRL_BLCEN(value)             (ISC_DPC_CTRL_BLCEN_Msk & ((value) << ISC_DPC_CTRL_BLCEN_Pos))
#define   ISC_DPC_CTRL_BLCEN_0_Val            _U_(0x0)                                             /**< (ISC_DPC_CTRL) Black level correction is disabled.  */
#define   ISC_DPC_CTRL_BLCEN_1_Val            _U_(0x1)                                             /**< (ISC_DPC_CTRL) Black level correction is enabled.  */
#define ISC_DPC_CTRL_BLCEN_0                  (ISC_DPC_CTRL_BLCEN_0_Val << ISC_DPC_CTRL_BLCEN_Pos) /**< (ISC_DPC_CTRL) Black level correction is disabled. Position  */
#define ISC_DPC_CTRL_BLCEN_1                  (ISC_DPC_CTRL_BLCEN_1_Val << ISC_DPC_CTRL_BLCEN_Pos) /**< (ISC_DPC_CTRL) Black level correction is enabled. Position  */
#define ISC_DPC_CTRL_Msk                      _U_(0x00000007)                                      /**< (ISC_DPC_CTRL) Register Mask  */


/* -------- ISC_DPC_CFG : (ISC Offset: 0x44) (R/W 32) Defective Pixel Correction Configuration Register -------- */
#define ISC_DPC_CFG_RESETVALUE                _U_(0x00)                                            /**<  (ISC_DPC_CFG) Defective Pixel Correction Configuration Register  Reset Value */

#define ISC_DPC_CFG_BAYCFG_Pos                _U_(0)                                               /**< (ISC_DPC_CFG) Color Filter Array Pattern Position */
#define ISC_DPC_CFG_BAYCFG_Msk                (_U_(0x3) << ISC_DPC_CFG_BAYCFG_Pos)                 /**< (ISC_DPC_CFG) Color Filter Array Pattern Mask */
#define ISC_DPC_CFG_BAYCFG(value)             (ISC_DPC_CFG_BAYCFG_Msk & ((value) << ISC_DPC_CFG_BAYCFG_Pos))
#define   ISC_DPC_CFG_BAYCFG_GRGR_Val         _U_(0x0)                                             /**< (ISC_DPC_CFG) Starting row configuration is G R G R (red row)  */
#define   ISC_DPC_CFG_BAYCFG_RGRG_Val         _U_(0x1)                                             /**< (ISC_DPC_CFG) Starting row configuration is R G R G (red row)  */
#define   ISC_DPC_CFG_BAYCFG_GBGB_Val         _U_(0x2)                                             /**< (ISC_DPC_CFG) Starting row configuration is G B G B (blue row)  */
#define   ISC_DPC_CFG_BAYCFG_BGBG_Val         _U_(0x3)                                             /**< (ISC_DPC_CFG) Starting row configuration is B G B G (blue row)  */
#define ISC_DPC_CFG_BAYCFG_GRGR               (ISC_DPC_CFG_BAYCFG_GRGR_Val << ISC_DPC_CFG_BAYCFG_Pos) /**< (ISC_DPC_CFG) Starting row configuration is G R G R (red row) Position  */
#define ISC_DPC_CFG_BAYCFG_RGRG               (ISC_DPC_CFG_BAYCFG_RGRG_Val << ISC_DPC_CFG_BAYCFG_Pos) /**< (ISC_DPC_CFG) Starting row configuration is R G R G (red row) Position  */
#define ISC_DPC_CFG_BAYCFG_GBGB               (ISC_DPC_CFG_BAYCFG_GBGB_Val << ISC_DPC_CFG_BAYCFG_Pos) /**< (ISC_DPC_CFG) Starting row configuration is G B G B (blue row) Position  */
#define ISC_DPC_CFG_BAYCFG_BGBG               (ISC_DPC_CFG_BAYCFG_BGBG_Val << ISC_DPC_CFG_BAYCFG_Pos) /**< (ISC_DPC_CFG) Starting row configuration is B G B G (blue row) Position  */
#define ISC_DPC_CFG_EITPOL_Pos                _U_(4)                                               /**< (ISC_DPC_CFG) Edge Interpolation Position */
#define ISC_DPC_CFG_EITPOL_Msk                (_U_(0x1) << ISC_DPC_CFG_EITPOL_Pos)                 /**< (ISC_DPC_CFG) Edge Interpolation Mask */
#define ISC_DPC_CFG_EITPOL(value)             (ISC_DPC_CFG_EITPOL_Msk & ((value) << ISC_DPC_CFG_EITPOL_Pos))
#define   ISC_DPC_CFG_EITPOL_0_Val            _U_(0x0)                                             /**< (ISC_DPC_CFG) No edge interpolation is performed.  */
#define   ISC_DPC_CFG_EITPOL_1_Val            _U_(0x1)                                             /**< (ISC_DPC_CFG) Edge interpolation is performed.  */
#define ISC_DPC_CFG_EITPOL_0                  (ISC_DPC_CFG_EITPOL_0_Val << ISC_DPC_CFG_EITPOL_Pos) /**< (ISC_DPC_CFG) No edge interpolation is performed. Position  */
#define ISC_DPC_CFG_EITPOL_1                  (ISC_DPC_CFG_EITPOL_1_Val << ISC_DPC_CFG_EITPOL_Pos) /**< (ISC_DPC_CFG) Edge interpolation is performed. Position  */
#define ISC_DPC_CFG_TM_ENABLE_Pos             _U_(12)                                              /**< (ISC_DPC_CFG) Median Threshold Enable Position */
#define ISC_DPC_CFG_TM_ENABLE_Msk             (_U_(0x1) << ISC_DPC_CFG_TM_ENABLE_Pos)              /**< (ISC_DPC_CFG) Median Threshold Enable Mask */
#define ISC_DPC_CFG_TM_ENABLE(value)          (ISC_DPC_CFG_TM_ENABLE_Msk & ((value) << ISC_DPC_CFG_TM_ENABLE_Pos))
#define   ISC_DPC_CFG_TM_ENABLE_0_Val         _U_(0x0)                                             /**< (ISC_DPC_CFG) Median detector is disabled.  */
#define   ISC_DPC_CFG_TM_ENABLE_1_Val         _U_(0x1)                                             /**< (ISC_DPC_CFG) Median detector is enabled.  */
#define ISC_DPC_CFG_TM_ENABLE_0               (ISC_DPC_CFG_TM_ENABLE_0_Val << ISC_DPC_CFG_TM_ENABLE_Pos) /**< (ISC_DPC_CFG) Median detector is disabled. Position  */
#define ISC_DPC_CFG_TM_ENABLE_1               (ISC_DPC_CFG_TM_ENABLE_1_Val << ISC_DPC_CFG_TM_ENABLE_Pos) /**< (ISC_DPC_CFG) Median detector is enabled. Position  */
#define ISC_DPC_CFG_TC_ENABLE_Pos             _U_(13)                                              /**< (ISC_DPC_CFG) Closest Pixels Threshold Enable Position */
#define ISC_DPC_CFG_TC_ENABLE_Msk             (_U_(0x1) << ISC_DPC_CFG_TC_ENABLE_Pos)              /**< (ISC_DPC_CFG) Closest Pixels Threshold Enable Mask */
#define ISC_DPC_CFG_TC_ENABLE(value)          (ISC_DPC_CFG_TC_ENABLE_Msk & ((value) << ISC_DPC_CFG_TC_ENABLE_Pos))
#define   ISC_DPC_CFG_TC_ENABLE_0_Val         _U_(0x0)                                             /**< (ISC_DPC_CFG) Closest Pixels detector is disabled.  */
#define   ISC_DPC_CFG_TC_ENABLE_1_Val         _U_(0x1)                                             /**< (ISC_DPC_CFG) Closest Pixels detector is enabled.  */
#define ISC_DPC_CFG_TC_ENABLE_0               (ISC_DPC_CFG_TC_ENABLE_0_Val << ISC_DPC_CFG_TC_ENABLE_Pos) /**< (ISC_DPC_CFG) Closest Pixels detector is disabled. Position  */
#define ISC_DPC_CFG_TC_ENABLE_1               (ISC_DPC_CFG_TC_ENABLE_1_Val << ISC_DPC_CFG_TC_ENABLE_Pos) /**< (ISC_DPC_CFG) Closest Pixels detector is enabled. Position  */
#define ISC_DPC_CFG_TA_ENABLE_Pos             _U_(14)                                              /**< (ISC_DPC_CFG) Average Threshold Enable Position */
#define ISC_DPC_CFG_TA_ENABLE_Msk             (_U_(0x1) << ISC_DPC_CFG_TA_ENABLE_Pos)              /**< (ISC_DPC_CFG) Average Threshold Enable Mask */
#define ISC_DPC_CFG_TA_ENABLE(value)          (ISC_DPC_CFG_TA_ENABLE_Msk & ((value) << ISC_DPC_CFG_TA_ENABLE_Pos))
#define   ISC_DPC_CFG_TA_ENABLE_0_Val         _U_(0x0)                                             /**< (ISC_DPC_CFG) Average detector is disabled.  */
#define   ISC_DPC_CFG_TA_ENABLE_1_Val         _U_(0x1)                                             /**< (ISC_DPC_CFG) Average detector is enabled.  */
#define ISC_DPC_CFG_TA_ENABLE_0               (ISC_DPC_CFG_TA_ENABLE_0_Val << ISC_DPC_CFG_TA_ENABLE_Pos) /**< (ISC_DPC_CFG) Average detector is disabled. Position  */
#define ISC_DPC_CFG_TA_ENABLE_1               (ISC_DPC_CFG_TA_ENABLE_1_Val << ISC_DPC_CFG_TA_ENABLE_Pos) /**< (ISC_DPC_CFG) Average detector is enabled. Position  */
#define ISC_DPC_CFG_ND_MODE_Pos               _U_(16)                                              /**< (ISC_DPC_CFG) Noise Detection Mode Position */
#define ISC_DPC_CFG_ND_MODE_Msk               (_U_(0x1) << ISC_DPC_CFG_ND_MODE_Pos)                /**< (ISC_DPC_CFG) Noise Detection Mode Mask */
#define ISC_DPC_CFG_ND_MODE(value)            (ISC_DPC_CFG_ND_MODE_Msk & ((value) << ISC_DPC_CFG_ND_MODE_Pos))
#define   ISC_DPC_CFG_ND_MODE_0_Val           _U_(0x0)                                             /**< (ISC_DPC_CFG) At least one detector flag is necessary to trigger the correction.  */
#define   ISC_DPC_CFG_ND_MODE_1_Val           _U_(0x1)                                             /**< (ISC_DPC_CFG) All detector flags are required to trigger the correction.  */
#define ISC_DPC_CFG_ND_MODE_0                 (ISC_DPC_CFG_ND_MODE_0_Val << ISC_DPC_CFG_ND_MODE_Pos) /**< (ISC_DPC_CFG) At least one detector flag is necessary to trigger the correction. Position  */
#define ISC_DPC_CFG_ND_MODE_1                 (ISC_DPC_CFG_ND_MODE_1_Val << ISC_DPC_CFG_ND_MODE_Pos) /**< (ISC_DPC_CFG) All detector flags are required to trigger the correction. Position  */
#define ISC_DPC_CFG_RE_MODE_Pos               _U_(17)                                              /**< (ISC_DPC_CFG) Replacement Algorithm Position */
#define ISC_DPC_CFG_RE_MODE_Msk               (_U_(0x1) << ISC_DPC_CFG_RE_MODE_Pos)                /**< (ISC_DPC_CFG) Replacement Algorithm Mask */
#define ISC_DPC_CFG_RE_MODE(value)            (ISC_DPC_CFG_RE_MODE_Msk & ((value) << ISC_DPC_CFG_RE_MODE_Pos))
#define   ISC_DPC_CFG_RE_MODE_0_Val           _U_(0x0)                                             /**< (ISC_DPC_CFG) Median pixel is used.  */
#define   ISC_DPC_CFG_RE_MODE_1_Val           _U_(0x1)                                             /**< (ISC_DPC_CFG) Average pixel is used.  */
#define ISC_DPC_CFG_RE_MODE_0                 (ISC_DPC_CFG_RE_MODE_0_Val << ISC_DPC_CFG_RE_MODE_Pos) /**< (ISC_DPC_CFG) Median pixel is used. Position  */
#define ISC_DPC_CFG_RE_MODE_1                 (ISC_DPC_CFG_RE_MODE_1_Val << ISC_DPC_CFG_RE_MODE_Pos) /**< (ISC_DPC_CFG) Average pixel is used. Position  */
#define ISC_DPC_CFG_GDCCLP_Pos                _U_(20)                                              /**< (ISC_DPC_CFG) Green Disparity Clipping Value Position */
#define ISC_DPC_CFG_GDCCLP_Msk                (_U_(0x7) << ISC_DPC_CFG_GDCCLP_Pos)                 /**< (ISC_DPC_CFG) Green Disparity Clipping Value Mask */
#define ISC_DPC_CFG_GDCCLP(value)             (ISC_DPC_CFG_GDCCLP_Msk & ((value) << ISC_DPC_CFG_GDCCLP_Pos))
#define ISC_DPC_CFG_BLOFST_Pos                _U_(23)                                              /**< (ISC_DPC_CFG) Black Level Offset Value Position */
#define ISC_DPC_CFG_BLOFST_Msk                (_U_(0x1FF) << ISC_DPC_CFG_BLOFST_Pos)               /**< (ISC_DPC_CFG) Black Level Offset Value Mask */
#define ISC_DPC_CFG_BLOFST(value)             (ISC_DPC_CFG_BLOFST_Msk & ((value) << ISC_DPC_CFG_BLOFST_Pos))
#define ISC_DPC_CFG_Msk                       _U_(0xFFF37013)                                      /**< (ISC_DPC_CFG) Register Mask  */


/* -------- ISC_DPC_THRESHM : (ISC Offset: 0x48) (R/W 32) Defective Pixel Correction Threshold M Register -------- */
#define ISC_DPC_THRESHM_RESETVALUE            _U_(0x00)                                            /**<  (ISC_DPC_THRESHM) Defective Pixel Correction Threshold M Register  Reset Value */

#define ISC_DPC_THRESHM_THRESHM_Pos           _U_(0)                                               /**< (ISC_DPC_THRESHM) Median Threshold Position */
#define ISC_DPC_THRESHM_THRESHM_Msk           (_U_(0xFFF) << ISC_DPC_THRESHM_THRESHM_Pos)          /**< (ISC_DPC_THRESHM) Median Threshold Mask */
#define ISC_DPC_THRESHM_THRESHM(value)        (ISC_DPC_THRESHM_THRESHM_Msk & ((value) << ISC_DPC_THRESHM_THRESHM_Pos))
#define ISC_DPC_THRESHM_Msk                   _U_(0x00000FFF)                                      /**< (ISC_DPC_THRESHM) Register Mask  */


/* -------- ISC_DPC_THRESHC : (ISC Offset: 0x4C) (R/W 32) Defective Pixel Correction Threshold C Register -------- */
#define ISC_DPC_THRESHC_RESETVALUE            _U_(0x00)                                            /**<  (ISC_DPC_THRESHC) Defective Pixel Correction Threshold C Register  Reset Value */

#define ISC_DPC_THRESHC_THRESHC_Pos           _U_(0)                                               /**< (ISC_DPC_THRESHC) Closest Pixel Threshold Position */
#define ISC_DPC_THRESHC_THRESHC_Msk           (_U_(0xFFF) << ISC_DPC_THRESHC_THRESHC_Pos)          /**< (ISC_DPC_THRESHC) Closest Pixel Threshold Mask */
#define ISC_DPC_THRESHC_THRESHC(value)        (ISC_DPC_THRESHC_THRESHC_Msk & ((value) << ISC_DPC_THRESHC_THRESHC_Pos))
#define ISC_DPC_THRESHC_Msk                   _U_(0x00000FFF)                                      /**< (ISC_DPC_THRESHC) Register Mask  */


/* -------- ISC_DPC_THRESHA : (ISC Offset: 0x50) (R/W 32) Defective Pixel Correction Threshold A Register -------- */
#define ISC_DPC_THRESHA_RESETVALUE            _U_(0x00)                                            /**<  (ISC_DPC_THRESHA) Defective Pixel Correction Threshold A Register  Reset Value */

#define ISC_DPC_THRESHA_THRESHA_Pos           _U_(0)                                               /**< (ISC_DPC_THRESHA) Average Threshold Position */
#define ISC_DPC_THRESHA_THRESHA_Msk           (_U_(0xFFF) << ISC_DPC_THRESHA_THRESHA_Pos)          /**< (ISC_DPC_THRESHA) Average Threshold Mask */
#define ISC_DPC_THRESHA_THRESHA(value)        (ISC_DPC_THRESHA_THRESHA_Msk & ((value) << ISC_DPC_THRESHA_THRESHA_Pos))
#define ISC_DPC_THRESHA_Msk                   _U_(0x00000FFF)                                      /**< (ISC_DPC_THRESHA) Register Mask  */


/* -------- ISC_DPC_SR : (ISC Offset: 0x54) ( R/ 32) Defective Pixel Correction Status Register -------- */
#define ISC_DPC_SR_RESETVALUE                 _U_(0x00)                                            /**<  (ISC_DPC_SR) Defective Pixel Correction Status Register  Reset Value */

#define ISC_DPC_SR_COUNTER_Pos                _U_(0)                                               /**< (ISC_DPC_SR) Defective Pixel Counter (cleared on read) Position */
#define ISC_DPC_SR_COUNTER_Msk                (_U_(0xFFFFFF) << ISC_DPC_SR_COUNTER_Pos)            /**< (ISC_DPC_SR) Defective Pixel Counter (cleared on read) Mask */
#define ISC_DPC_SR_COUNTER(value)             (ISC_DPC_SR_COUNTER_Msk & ((value) << ISC_DPC_SR_COUNTER_Pos))
#define ISC_DPC_SR_Msk                        _U_(0x00FFFFFF)                                      /**< (ISC_DPC_SR) Register Mask  */


/* -------- ISC_WB_CTRL : (ISC Offset: 0x58) (R/W 32) White Balance Control Register -------- */
#define ISC_WB_CTRL_RESETVALUE                _U_(0x00)                                            /**<  (ISC_WB_CTRL) White Balance Control Register  Reset Value */

#define ISC_WB_CTRL_ENABLE_Pos                _U_(0)                                               /**< (ISC_WB_CTRL) White Balance Enable Position */
#define ISC_WB_CTRL_ENABLE_Msk                (_U_(0x1) << ISC_WB_CTRL_ENABLE_Pos)                 /**< (ISC_WB_CTRL) White Balance Enable Mask */
#define ISC_WB_CTRL_ENABLE(value)             (ISC_WB_CTRL_ENABLE_Msk & ((value) << ISC_WB_CTRL_ENABLE_Pos))
#define   ISC_WB_CTRL_ENABLE_0_Val            _U_(0x0)                                             /**< (ISC_WB_CTRL) The white balance is disabled.  */
#define   ISC_WB_CTRL_ENABLE_1_Val            _U_(0x1)                                             /**< (ISC_WB_CTRL) The white balance is enabled.  */
#define ISC_WB_CTRL_ENABLE_0                  (ISC_WB_CTRL_ENABLE_0_Val << ISC_WB_CTRL_ENABLE_Pos) /**< (ISC_WB_CTRL) The white balance is disabled. Position  */
#define ISC_WB_CTRL_ENABLE_1                  (ISC_WB_CTRL_ENABLE_1_Val << ISC_WB_CTRL_ENABLE_Pos) /**< (ISC_WB_CTRL) The white balance is enabled. Position  */
#define ISC_WB_CTRL_Msk                       _U_(0x00000001)                                      /**< (ISC_WB_CTRL) Register Mask  */


/* -------- ISC_WB_CFG : (ISC Offset: 0x5C) (R/W 32) White Balance Configuration Register -------- */
#define ISC_WB_CFG_RESETVALUE                 _U_(0x00)                                            /**<  (ISC_WB_CFG) White Balance Configuration Register  Reset Value */

#define ISC_WB_CFG_BAYCFG_Pos                 _U_(0)                                               /**< (ISC_WB_CFG) White Balance Bayer Configuration (Pixel Color Pattern) Position */
#define ISC_WB_CFG_BAYCFG_Msk                 (_U_(0x3) << ISC_WB_CFG_BAYCFG_Pos)                  /**< (ISC_WB_CFG) White Balance Bayer Configuration (Pixel Color Pattern) Mask */
#define ISC_WB_CFG_BAYCFG(value)              (ISC_WB_CFG_BAYCFG_Msk & ((value) << ISC_WB_CFG_BAYCFG_Pos))
#define   ISC_WB_CFG_BAYCFG_GRGR_Val          _U_(0x0)                                             /**< (ISC_WB_CFG) Starting Row configuration is G R G R (Red Row)  */
#define   ISC_WB_CFG_BAYCFG_RGRG_Val          _U_(0x1)                                             /**< (ISC_WB_CFG) Starting Row configuration is R G R G (Red Row)  */
#define   ISC_WB_CFG_BAYCFG_GBGB_Val          _U_(0x2)                                             /**< (ISC_WB_CFG) Starting Row configuration is G B G B (Blue Row)  */
#define   ISC_WB_CFG_BAYCFG_BGBG_Val          _U_(0x3)                                             /**< (ISC_WB_CFG) Starting Row configuration is B G B G (Blue Row)  */
#define ISC_WB_CFG_BAYCFG_GRGR                (ISC_WB_CFG_BAYCFG_GRGR_Val << ISC_WB_CFG_BAYCFG_Pos) /**< (ISC_WB_CFG) Starting Row configuration is G R G R (Red Row) Position  */
#define ISC_WB_CFG_BAYCFG_RGRG                (ISC_WB_CFG_BAYCFG_RGRG_Val << ISC_WB_CFG_BAYCFG_Pos) /**< (ISC_WB_CFG) Starting Row configuration is R G R G (Red Row) Position  */
#define ISC_WB_CFG_BAYCFG_GBGB                (ISC_WB_CFG_BAYCFG_GBGB_Val << ISC_WB_CFG_BAYCFG_Pos) /**< (ISC_WB_CFG) Starting Row configuration is G B G B (Blue Row) Position  */
#define ISC_WB_CFG_BAYCFG_BGBG                (ISC_WB_CFG_BAYCFG_BGBG_Val << ISC_WB_CFG_BAYCFG_Pos) /**< (ISC_WB_CFG) Starting Row configuration is B G B G (Blue Row) Position  */
#define ISC_WB_CFG_Msk                        _U_(0x00000003)                                      /**< (ISC_WB_CFG) Register Mask  */


/* -------- ISC_WB_O_RGR : (ISC Offset: 0x60) (R/W 32) White Balance Offset for R, GR Register -------- */
#define ISC_WB_O_RGR_RESETVALUE               _U_(0x00)                                            /**<  (ISC_WB_O_RGR) White Balance Offset for R, GR Register  Reset Value */

#define ISC_WB_O_RGR_ROFST_Pos                _U_(0)                                               /**< (ISC_WB_O_RGR) Offset Red Component (signed 13 bits 1:12:0) Position */
#define ISC_WB_O_RGR_ROFST_Msk                (_U_(0x1FFF) << ISC_WB_O_RGR_ROFST_Pos)              /**< (ISC_WB_O_RGR) Offset Red Component (signed 13 bits 1:12:0) Mask */
#define ISC_WB_O_RGR_ROFST(value)             (ISC_WB_O_RGR_ROFST_Msk & ((value) << ISC_WB_O_RGR_ROFST_Pos))
#define ISC_WB_O_RGR_GROFST_Pos               _U_(16)                                              /**< (ISC_WB_O_RGR) Offset Green Component for Red Row (signed 13 bits 1:12:0) Position */
#define ISC_WB_O_RGR_GROFST_Msk               (_U_(0x1FFF) << ISC_WB_O_RGR_GROFST_Pos)             /**< (ISC_WB_O_RGR) Offset Green Component for Red Row (signed 13 bits 1:12:0) Mask */
#define ISC_WB_O_RGR_GROFST(value)            (ISC_WB_O_RGR_GROFST_Msk & ((value) << ISC_WB_O_RGR_GROFST_Pos))
#define ISC_WB_O_RGR_Msk                      _U_(0x1FFF1FFF)                                      /**< (ISC_WB_O_RGR) Register Mask  */


/* -------- ISC_WB_O_BGB : (ISC Offset: 0x64) (R/W 32) White Balance Offset for B, GB Register -------- */
#define ISC_WB_O_BGB_RESETVALUE               _U_(0x00)                                            /**<  (ISC_WB_O_BGB) White Balance Offset for B, GB Register  Reset Value */

#define ISC_WB_O_BGB_BOFST_Pos                _U_(0)                                               /**< (ISC_WB_O_BGB) Offset Blue Component (signed 13 bits, 1:12:0) Position */
#define ISC_WB_O_BGB_BOFST_Msk                (_U_(0x1FFF) << ISC_WB_O_BGB_BOFST_Pos)              /**< (ISC_WB_O_BGB) Offset Blue Component (signed 13 bits, 1:12:0) Mask */
#define ISC_WB_O_BGB_BOFST(value)             (ISC_WB_O_BGB_BOFST_Msk & ((value) << ISC_WB_O_BGB_BOFST_Pos))
#define ISC_WB_O_BGB_GBOFST_Pos               _U_(16)                                              /**< (ISC_WB_O_BGB) Offset Green Component for Blue Row (signed 13 bits, 1:12:0) Position */
#define ISC_WB_O_BGB_GBOFST_Msk               (_U_(0x1FFF) << ISC_WB_O_BGB_GBOFST_Pos)             /**< (ISC_WB_O_BGB) Offset Green Component for Blue Row (signed 13 bits, 1:12:0) Mask */
#define ISC_WB_O_BGB_GBOFST(value)            (ISC_WB_O_BGB_GBOFST_Msk & ((value) << ISC_WB_O_BGB_GBOFST_Pos))
#define ISC_WB_O_BGB_Msk                      _U_(0x1FFF1FFF)                                      /**< (ISC_WB_O_BGB) Register Mask  */


/* -------- ISC_WB_G_RGR : (ISC Offset: 0x68) (R/W 32) White Balance Gain for R, GR Register -------- */
#define ISC_WB_G_RGR_RESETVALUE               _U_(0x00)                                            /**<  (ISC_WB_G_RGR) White Balance Gain for R, GR Register  Reset Value */

#define ISC_WB_G_RGR_RGAIN_Pos                _U_(0)                                               /**< (ISC_WB_G_RGR) Red Component Gain (unsigned 13 bits, 0:4:9) Position */
#define ISC_WB_G_RGR_RGAIN_Msk                (_U_(0x1FFF) << ISC_WB_G_RGR_RGAIN_Pos)              /**< (ISC_WB_G_RGR) Red Component Gain (unsigned 13 bits, 0:4:9) Mask */
#define ISC_WB_G_RGR_RGAIN(value)             (ISC_WB_G_RGR_RGAIN_Msk & ((value) << ISC_WB_G_RGR_RGAIN_Pos))
#define ISC_WB_G_RGR_GRGAIN_Pos               _U_(16)                                              /**< (ISC_WB_G_RGR) Green Component (Red row) Gain (unsigned 13 bits, 0:4:9) Position */
#define ISC_WB_G_RGR_GRGAIN_Msk               (_U_(0x1FFF) << ISC_WB_G_RGR_GRGAIN_Pos)             /**< (ISC_WB_G_RGR) Green Component (Red row) Gain (unsigned 13 bits, 0:4:9) Mask */
#define ISC_WB_G_RGR_GRGAIN(value)            (ISC_WB_G_RGR_GRGAIN_Msk & ((value) << ISC_WB_G_RGR_GRGAIN_Pos))
#define ISC_WB_G_RGR_Msk                      _U_(0x1FFF1FFF)                                      /**< (ISC_WB_G_RGR) Register Mask  */


/* -------- ISC_WB_G_BGB : (ISC Offset: 0x6C) (R/W 32) White Balance Gain for B, GB Register -------- */
#define ISC_WB_G_BGB_RESETVALUE               _U_(0x00)                                            /**<  (ISC_WB_G_BGB) White Balance Gain for B, GB Register  Reset Value */

#define ISC_WB_G_BGB_BGAIN_Pos                _U_(0)                                               /**< (ISC_WB_G_BGB) Blue Component Gain (unsigned 13 bits, 0:4:9) Position */
#define ISC_WB_G_BGB_BGAIN_Msk                (_U_(0x1FFF) << ISC_WB_G_BGB_BGAIN_Pos)              /**< (ISC_WB_G_BGB) Blue Component Gain (unsigned 13 bits, 0:4:9) Mask */
#define ISC_WB_G_BGB_BGAIN(value)             (ISC_WB_G_BGB_BGAIN_Msk & ((value) << ISC_WB_G_BGB_BGAIN_Pos))
#define ISC_WB_G_BGB_GBGAIN_Pos               _U_(16)                                              /**< (ISC_WB_G_BGB) Green Component (Blue Row) Gain (unsigned 13 bits, 0:4:9) Position */
#define ISC_WB_G_BGB_GBGAIN_Msk               (_U_(0x1FFF) << ISC_WB_G_BGB_GBGAIN_Pos)             /**< (ISC_WB_G_BGB) Green Component (Blue Row) Gain (unsigned 13 bits, 0:4:9) Mask */
#define ISC_WB_G_BGB_GBGAIN(value)            (ISC_WB_G_BGB_GBGAIN_Msk & ((value) << ISC_WB_G_BGB_GBGAIN_Pos))
#define ISC_WB_G_BGB_Msk                      _U_(0x1FFF1FFF)                                      /**< (ISC_WB_G_BGB) Register Mask  */


/* -------- ISC_CFA_CTRL : (ISC Offset: 0x70) (R/W 32) Color Filter Array Control Register -------- */
#define ISC_CFA_CTRL_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CFA_CTRL) Color Filter Array Control Register  Reset Value */

#define ISC_CFA_CTRL_ENABLE_Pos               _U_(0)                                               /**< (ISC_CFA_CTRL) Color Filter Array Interpolation Enable Position */
#define ISC_CFA_CTRL_ENABLE_Msk               (_U_(0x1) << ISC_CFA_CTRL_ENABLE_Pos)                /**< (ISC_CFA_CTRL) Color Filter Array Interpolation Enable Mask */
#define ISC_CFA_CTRL_ENABLE(value)            (ISC_CFA_CTRL_ENABLE_Msk & ((value) << ISC_CFA_CTRL_ENABLE_Pos))
#define   ISC_CFA_CTRL_ENABLE_0_Val           _U_(0x0)                                             /**< (ISC_CFA_CTRL) Color Filter Array Interpolation is disabled.  */
#define   ISC_CFA_CTRL_ENABLE_1_Val           _U_(0x1)                                             /**< (ISC_CFA_CTRL) Color Filter Array Interpolation is enabled.  */
#define ISC_CFA_CTRL_ENABLE_0                 (ISC_CFA_CTRL_ENABLE_0_Val << ISC_CFA_CTRL_ENABLE_Pos) /**< (ISC_CFA_CTRL) Color Filter Array Interpolation is disabled. Position  */
#define ISC_CFA_CTRL_ENABLE_1                 (ISC_CFA_CTRL_ENABLE_1_Val << ISC_CFA_CTRL_ENABLE_Pos) /**< (ISC_CFA_CTRL) Color Filter Array Interpolation is enabled. Position  */
#define ISC_CFA_CTRL_Msk                      _U_(0x00000001)                                      /**< (ISC_CFA_CTRL) Register Mask  */


/* -------- ISC_CFA_CFG : (ISC Offset: 0x74) (R/W 32) Color Filter Array Configuration Register -------- */
#define ISC_CFA_CFG_RESETVALUE                _U_(0x00)                                            /**<  (ISC_CFA_CFG) Color Filter Array Configuration Register  Reset Value */

#define ISC_CFA_CFG_BAYCFG_Pos                _U_(0)                                               /**< (ISC_CFA_CFG) Bayer Color Filter Array Pattern Position */
#define ISC_CFA_CFG_BAYCFG_Msk                (_U_(0x3) << ISC_CFA_CFG_BAYCFG_Pos)                 /**< (ISC_CFA_CFG) Bayer Color Filter Array Pattern Mask */
#define ISC_CFA_CFG_BAYCFG(value)             (ISC_CFA_CFG_BAYCFG_Msk & ((value) << ISC_CFA_CFG_BAYCFG_Pos))
#define   ISC_CFA_CFG_BAYCFG_GRGR_Val         _U_(0x0)                                             /**< (ISC_CFA_CFG) Starting row configuration is G R G R (red row)  */
#define   ISC_CFA_CFG_BAYCFG_RGRG_Val         _U_(0x1)                                             /**< (ISC_CFA_CFG) Starting row configuration is R G R G (red row  */
#define   ISC_CFA_CFG_BAYCFG_GBGB_Val         _U_(0x2)                                             /**< (ISC_CFA_CFG) Starting row configuration is G B G B (blue row)  */
#define   ISC_CFA_CFG_BAYCFG_BGBG_Val         _U_(0x3)                                             /**< (ISC_CFA_CFG) Starting row configuration is B G B G (blue row)  */
#define ISC_CFA_CFG_BAYCFG_GRGR               (ISC_CFA_CFG_BAYCFG_GRGR_Val << ISC_CFA_CFG_BAYCFG_Pos) /**< (ISC_CFA_CFG) Starting row configuration is G R G R (red row) Position  */
#define ISC_CFA_CFG_BAYCFG_RGRG               (ISC_CFA_CFG_BAYCFG_RGRG_Val << ISC_CFA_CFG_BAYCFG_Pos) /**< (ISC_CFA_CFG) Starting row configuration is R G R G (red row Position  */
#define ISC_CFA_CFG_BAYCFG_GBGB               (ISC_CFA_CFG_BAYCFG_GBGB_Val << ISC_CFA_CFG_BAYCFG_Pos) /**< (ISC_CFA_CFG) Starting row configuration is G B G B (blue row) Position  */
#define ISC_CFA_CFG_BAYCFG_BGBG               (ISC_CFA_CFG_BAYCFG_BGBG_Val << ISC_CFA_CFG_BAYCFG_Pos) /**< (ISC_CFA_CFG) Starting row configuration is B G B G (blue row) Position  */
#define ISC_CFA_CFG_EITPOL_Pos                _U_(4)                                               /**< (ISC_CFA_CFG) Edge Interpolation Position */
#define ISC_CFA_CFG_EITPOL_Msk                (_U_(0x1) << ISC_CFA_CFG_EITPOL_Pos)                 /**< (ISC_CFA_CFG) Edge Interpolation Mask */
#define ISC_CFA_CFG_EITPOL(value)             (ISC_CFA_CFG_EITPOL_Msk & ((value) << ISC_CFA_CFG_EITPOL_Pos))
#define   ISC_CFA_CFG_EITPOL_0_Val            _U_(0x0)                                             /**< (ISC_CFA_CFG) Edges are not interpolated.  */
#define   ISC_CFA_CFG_EITPOL_1_Val            _U_(0x1)                                             /**< (ISC_CFA_CFG) Edge interpolation is performed.  */
#define ISC_CFA_CFG_EITPOL_0                  (ISC_CFA_CFG_EITPOL_0_Val << ISC_CFA_CFG_EITPOL_Pos) /**< (ISC_CFA_CFG) Edges are not interpolated. Position  */
#define ISC_CFA_CFG_EITPOL_1                  (ISC_CFA_CFG_EITPOL_1_Val << ISC_CFA_CFG_EITPOL_Pos) /**< (ISC_CFA_CFG) Edge interpolation is performed. Position  */
#define ISC_CFA_CFG_EAL_Pos                   _U_(10)                                              /**< (ISC_CFA_CFG) Green Channel Edge Adaptive Level Position */
#define ISC_CFA_CFG_EAL_Msk                   (_U_(0x3) << ISC_CFA_CFG_EAL_Pos)                    /**< (ISC_CFA_CFG) Green Channel Edge Adaptive Level Mask */
#define ISC_CFA_CFG_EAL(value)                (ISC_CFA_CFG_EAL_Msk & ((value) << ISC_CFA_CFG_EAL_Pos))
#define   ISC_CFA_CFG_EAL_GLINEAR_Val         _U_(0x0)                                             /**< (ISC_CFA_CFG) Green plane is linearly interpolated.  */
#define   ISC_CFA_CFG_EAL_GMEAN_Val           _U_(0x1)                                             /**< (ISC_CFA_CFG) Green plane is the mean value between the linearly interpolated plane and adaptive method plane.  */
#define   ISC_CFA_CFG_EAL_GADAPTIVE_Val       _U_(0x2)                                             /**< (ISC_CFA_CFG) Green plane is interpolated with edge adaptive method.  */
#define ISC_CFA_CFG_EAL_GLINEAR               (ISC_CFA_CFG_EAL_GLINEAR_Val << ISC_CFA_CFG_EAL_Pos) /**< (ISC_CFA_CFG) Green plane is linearly interpolated. Position  */
#define ISC_CFA_CFG_EAL_GMEAN                 (ISC_CFA_CFG_EAL_GMEAN_Val << ISC_CFA_CFG_EAL_Pos)   /**< (ISC_CFA_CFG) Green plane is the mean value between the linearly interpolated plane and adaptive method plane. Position  */
#define ISC_CFA_CFG_EAL_GADAPTIVE             (ISC_CFA_CFG_EAL_GADAPTIVE_Val << ISC_CFA_CFG_EAL_Pos) /**< (ISC_CFA_CFG) Green plane is interpolated with edge adaptive method. Position  */
#define ISC_CFA_CFG_Msk                       _U_(0x00000C13)                                      /**< (ISC_CFA_CFG) Register Mask  */


/* -------- ISC_CC_CTRL : (ISC Offset: 0x78) (R/W 32) Color Correction Control Register -------- */
#define ISC_CC_CTRL_RESETVALUE                _U_(0x00)                                            /**<  (ISC_CC_CTRL) Color Correction Control Register  Reset Value */

#define ISC_CC_CTRL_ENABLE_Pos                _U_(0)                                               /**< (ISC_CC_CTRL) Color Correction Enable Position */
#define ISC_CC_CTRL_ENABLE_Msk                (_U_(0x1) << ISC_CC_CTRL_ENABLE_Pos)                 /**< (ISC_CC_CTRL) Color Correction Enable Mask */
#define ISC_CC_CTRL_ENABLE(value)             (ISC_CC_CTRL_ENABLE_Msk & ((value) << ISC_CC_CTRL_ENABLE_Pos))
#define   ISC_CC_CTRL_ENABLE_0_Val            _U_(0x0)                                             /**< (ISC_CC_CTRL) Color correction is disabled.  */
#define   ISC_CC_CTRL_ENABLE_1_Val            _U_(0x1)                                             /**< (ISC_CC_CTRL) Color correction is enabled.  */
#define ISC_CC_CTRL_ENABLE_0                  (ISC_CC_CTRL_ENABLE_0_Val << ISC_CC_CTRL_ENABLE_Pos) /**< (ISC_CC_CTRL) Color correction is disabled. Position  */
#define ISC_CC_CTRL_ENABLE_1                  (ISC_CC_CTRL_ENABLE_1_Val << ISC_CC_CTRL_ENABLE_Pos) /**< (ISC_CC_CTRL) Color correction is enabled. Position  */
#define ISC_CC_CTRL_Msk                       _U_(0x00000001)                                      /**< (ISC_CC_CTRL) Register Mask  */


/* -------- ISC_CC_RR_RG : (ISC Offset: 0x7C) (R/W 32) Color Correction RR RG Register -------- */
#define ISC_CC_RR_RG_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CC_RR_RG) Color Correction RR RG Register  Reset Value */

#define ISC_CC_RR_RG_RRGAIN_Pos               _U_(0)                                               /**< (ISC_CC_RR_RG) Red Gain for Red Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_RR_RG_RRGAIN_Msk               (_U_(0xFFF) << ISC_CC_RR_RG_RRGAIN_Pos)              /**< (ISC_CC_RR_RG) Red Gain for Red Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_RR_RG_RRGAIN(value)            (ISC_CC_RR_RG_RRGAIN_Msk & ((value) << ISC_CC_RR_RG_RRGAIN_Pos))
#define ISC_CC_RR_RG_RGGAIN_Pos               _U_(16)                                              /**< (ISC_CC_RR_RG) Green Gain for Red Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_RR_RG_RGGAIN_Msk               (_U_(0xFFF) << ISC_CC_RR_RG_RGGAIN_Pos)              /**< (ISC_CC_RR_RG) Green Gain for Red Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_RR_RG_RGGAIN(value)            (ISC_CC_RR_RG_RGGAIN_Msk & ((value) << ISC_CC_RR_RG_RGGAIN_Pos))
#define ISC_CC_RR_RG_Msk                      _U_(0x0FFF0FFF)                                      /**< (ISC_CC_RR_RG) Register Mask  */


/* -------- ISC_CC_RB_OR : (ISC Offset: 0x80) (R/W 32) Color Correction RB OR Register -------- */
#define ISC_CC_RB_OR_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CC_RB_OR) Color Correction RB OR Register  Reset Value */

#define ISC_CC_RB_OR_RBGAIN_Pos               _U_(0)                                               /**< (ISC_CC_RB_OR) Blue Gain for Red Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_RB_OR_RBGAIN_Msk               (_U_(0xFFF) << ISC_CC_RB_OR_RBGAIN_Pos)              /**< (ISC_CC_RB_OR) Blue Gain for Red Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_RB_OR_RBGAIN(value)            (ISC_CC_RB_OR_RBGAIN_Msk & ((value) << ISC_CC_RB_OR_RBGAIN_Pos))
#define ISC_CC_RB_OR_ROFST_Pos                _U_(16)                                              /**< (ISC_CC_RB_OR) Red Component Offset (signed 13 bits, 1:12:0) Position */
#define ISC_CC_RB_OR_ROFST_Msk                (_U_(0x1FFF) << ISC_CC_RB_OR_ROFST_Pos)              /**< (ISC_CC_RB_OR) Red Component Offset (signed 13 bits, 1:12:0) Mask */
#define ISC_CC_RB_OR_ROFST(value)             (ISC_CC_RB_OR_ROFST_Msk & ((value) << ISC_CC_RB_OR_ROFST_Pos))
#define ISC_CC_RB_OR_Msk                      _U_(0x1FFF0FFF)                                      /**< (ISC_CC_RB_OR) Register Mask  */


/* -------- ISC_CC_GR_GG : (ISC Offset: 0x84) (R/W 32) Color Correction GR GG Register -------- */
#define ISC_CC_GR_GG_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CC_GR_GG) Color Correction GR GG Register  Reset Value */

#define ISC_CC_GR_GG_GRGAIN_Pos               _U_(0)                                               /**< (ISC_CC_GR_GG) Red Gain for Green Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_GR_GG_GRGAIN_Msk               (_U_(0xFFF) << ISC_CC_GR_GG_GRGAIN_Pos)              /**< (ISC_CC_GR_GG) Red Gain for Green Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_GR_GG_GRGAIN(value)            (ISC_CC_GR_GG_GRGAIN_Msk & ((value) << ISC_CC_GR_GG_GRGAIN_Pos))
#define ISC_CC_GR_GG_GGGAIN_Pos               _U_(16)                                              /**< (ISC_CC_GR_GG) Green Gain for Green Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_GR_GG_GGGAIN_Msk               (_U_(0xFFF) << ISC_CC_GR_GG_GGGAIN_Pos)              /**< (ISC_CC_GR_GG) Green Gain for Green Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_GR_GG_GGGAIN(value)            (ISC_CC_GR_GG_GGGAIN_Msk & ((value) << ISC_CC_GR_GG_GGGAIN_Pos))
#define ISC_CC_GR_GG_Msk                      _U_(0x0FFF0FFF)                                      /**< (ISC_CC_GR_GG) Register Mask  */


/* -------- ISC_CC_GB_OG : (ISC Offset: 0x88) (R/W 32) Color Correction GB OG Register -------- */
#define ISC_CC_GB_OG_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CC_GB_OG) Color Correction GB OG Register  Reset Value */

#define ISC_CC_GB_OG_GBGAIN_Pos               _U_(0)                                               /**< (ISC_CC_GB_OG) Blue Gain for Green Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_GB_OG_GBGAIN_Msk               (_U_(0xFFF) << ISC_CC_GB_OG_GBGAIN_Pos)              /**< (ISC_CC_GB_OG) Blue Gain for Green Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_GB_OG_GBGAIN(value)            (ISC_CC_GB_OG_GBGAIN_Msk & ((value) << ISC_CC_GB_OG_GBGAIN_Pos))
#define ISC_CC_GB_OG_ROFST_Pos                _U_(16)                                              /**< (ISC_CC_GB_OG) Green Component Offset (signed 13 bits, 1:12:0) Position */
#define ISC_CC_GB_OG_ROFST_Msk                (_U_(0x1FFF) << ISC_CC_GB_OG_ROFST_Pos)              /**< (ISC_CC_GB_OG) Green Component Offset (signed 13 bits, 1:12:0) Mask */
#define ISC_CC_GB_OG_ROFST(value)             (ISC_CC_GB_OG_ROFST_Msk & ((value) << ISC_CC_GB_OG_ROFST_Pos))
#define ISC_CC_GB_OG_Msk                      _U_(0x1FFF0FFF)                                      /**< (ISC_CC_GB_OG) Register Mask  */


/* -------- ISC_CC_BR_BG : (ISC Offset: 0x8C) (R/W 32) Color Correction BR BG Register -------- */
#define ISC_CC_BR_BG_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CC_BR_BG) Color Correction BR BG Register  Reset Value */

#define ISC_CC_BR_BG_BRGAIN_Pos               _U_(0)                                               /**< (ISC_CC_BR_BG) Red Gain for Blue Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_BR_BG_BRGAIN_Msk               (_U_(0xFFF) << ISC_CC_BR_BG_BRGAIN_Pos)              /**< (ISC_CC_BR_BG) Red Gain for Blue Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_BR_BG_BRGAIN(value)            (ISC_CC_BR_BG_BRGAIN_Msk & ((value) << ISC_CC_BR_BG_BRGAIN_Pos))
#define ISC_CC_BR_BG_BGGAIN_Pos               _U_(16)                                              /**< (ISC_CC_BR_BG) Green Gain for Blue Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_BR_BG_BGGAIN_Msk               (_U_(0xFFF) << ISC_CC_BR_BG_BGGAIN_Pos)              /**< (ISC_CC_BR_BG) Green Gain for Blue Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_BR_BG_BGGAIN(value)            (ISC_CC_BR_BG_BGGAIN_Msk & ((value) << ISC_CC_BR_BG_BGGAIN_Pos))
#define ISC_CC_BR_BG_Msk                      _U_(0x0FFF0FFF)                                      /**< (ISC_CC_BR_BG) Register Mask  */


/* -------- ISC_CC_BB_OB : (ISC Offset: 0x90) (R/W 32) Color Correction BB OB Register -------- */
#define ISC_CC_BB_OB_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CC_BB_OB) Color Correction BB OB Register  Reset Value */

#define ISC_CC_BB_OB_BBGAIN_Pos               _U_(0)                                               /**< (ISC_CC_BB_OB) Blue Gain for Blue Component (signed 12 bits, 1:3:8) Position */
#define ISC_CC_BB_OB_BBGAIN_Msk               (_U_(0xFFF) << ISC_CC_BB_OB_BBGAIN_Pos)              /**< (ISC_CC_BB_OB) Blue Gain for Blue Component (signed 12 bits, 1:3:8) Mask */
#define ISC_CC_BB_OB_BBGAIN(value)            (ISC_CC_BB_OB_BBGAIN_Msk & ((value) << ISC_CC_BB_OB_BBGAIN_Pos))
#define ISC_CC_BB_OB_BOFST_Pos                _U_(16)                                              /**< (ISC_CC_BB_OB) Blue Component Offset (signed 13 bits, 1:12:0) Position */
#define ISC_CC_BB_OB_BOFST_Msk                (_U_(0x1FFF) << ISC_CC_BB_OB_BOFST_Pos)              /**< (ISC_CC_BB_OB) Blue Component Offset (signed 13 bits, 1:12:0) Mask */
#define ISC_CC_BB_OB_BOFST(value)             (ISC_CC_BB_OB_BOFST_Msk & ((value) << ISC_CC_BB_OB_BOFST_Pos))
#define ISC_CC_BB_OB_Msk                      _U_(0x1FFF0FFF)                                      /**< (ISC_CC_BB_OB) Register Mask  */


/* -------- ISC_GAM_CTRL : (ISC Offset: 0x94) (R/W 32) Gamma Correction Control Register -------- */
#define ISC_GAM_CTRL_RESETVALUE               _U_(0x00)                                            /**<  (ISC_GAM_CTRL) Gamma Correction Control Register  Reset Value */

#define ISC_GAM_CTRL_ENABLE_Pos               _U_(0)                                               /**< (ISC_GAM_CTRL) Gamma Correction Enable Position */
#define ISC_GAM_CTRL_ENABLE_Msk               (_U_(0x1) << ISC_GAM_CTRL_ENABLE_Pos)                /**< (ISC_GAM_CTRL) Gamma Correction Enable Mask */
#define ISC_GAM_CTRL_ENABLE(value)            (ISC_GAM_CTRL_ENABLE_Msk & ((value) << ISC_GAM_CTRL_ENABLE_Pos))
#define   ISC_GAM_CTRL_ENABLE_0_Val           _U_(0x0)                                             /**< (ISC_GAM_CTRL) Gamma correction is disabled.  */
#define   ISC_GAM_CTRL_ENABLE_1_Val           _U_(0x1)                                             /**< (ISC_GAM_CTRL) Gamma correction is enabled.  */
#define ISC_GAM_CTRL_ENABLE_0                 (ISC_GAM_CTRL_ENABLE_0_Val << ISC_GAM_CTRL_ENABLE_Pos) /**< (ISC_GAM_CTRL) Gamma correction is disabled. Position  */
#define ISC_GAM_CTRL_ENABLE_1                 (ISC_GAM_CTRL_ENABLE_1_Val << ISC_GAM_CTRL_ENABLE_Pos) /**< (ISC_GAM_CTRL) Gamma correction is enabled. Position  */
#define ISC_GAM_CTRL_BENABLE_Pos              _U_(1)                                               /**< (ISC_GAM_CTRL) Gamma Correction Enable for B Channel Position */
#define ISC_GAM_CTRL_BENABLE_Msk              (_U_(0x1) << ISC_GAM_CTRL_BENABLE_Pos)               /**< (ISC_GAM_CTRL) Gamma Correction Enable for B Channel Mask */
#define ISC_GAM_CTRL_BENABLE(value)           (ISC_GAM_CTRL_BENABLE_Msk & ((value) << ISC_GAM_CTRL_BENABLE_Pos))
#define   ISC_GAM_CTRL_BENABLE_0_Val          _U_(0x0)                                             /**< (ISC_GAM_CTRL) 12-bit to 10-bit compression is performed skipping two bits.  */
#define   ISC_GAM_CTRL_BENABLE_1_Val          _U_(0x1)                                             /**< (ISC_GAM_CTRL) Piecewise interpolation is used to perform 112-bit to 10-bit compression for the blue channel.  */
#define ISC_GAM_CTRL_BENABLE_0                (ISC_GAM_CTRL_BENABLE_0_Val << ISC_GAM_CTRL_BENABLE_Pos) /**< (ISC_GAM_CTRL) 12-bit to 10-bit compression is performed skipping two bits. Position  */
#define ISC_GAM_CTRL_BENABLE_1                (ISC_GAM_CTRL_BENABLE_1_Val << ISC_GAM_CTRL_BENABLE_Pos) /**< (ISC_GAM_CTRL) Piecewise interpolation is used to perform 112-bit to 10-bit compression for the blue channel. Position  */
#define ISC_GAM_CTRL_GENABLE_Pos              _U_(2)                                               /**< (ISC_GAM_CTRL) Gamma Correction Enable for G Channel Position */
#define ISC_GAM_CTRL_GENABLE_Msk              (_U_(0x1) << ISC_GAM_CTRL_GENABLE_Pos)               /**< (ISC_GAM_CTRL) Gamma Correction Enable for G Channel Mask */
#define ISC_GAM_CTRL_GENABLE(value)           (ISC_GAM_CTRL_GENABLE_Msk & ((value) << ISC_GAM_CTRL_GENABLE_Pos))
#define   ISC_GAM_CTRL_GENABLE_0_Val          _U_(0x0)                                             /**< (ISC_GAM_CTRL) 12-bit to 10-bit compression is performed skipping two bits.  */
#define   ISC_GAM_CTRL_GENABLE_1_Val          _U_(0x1)                                             /**< (ISC_GAM_CTRL) Piecewise interpolation is used to perform 12-bit to 10-bit compression for the green channel.  */
#define ISC_GAM_CTRL_GENABLE_0                (ISC_GAM_CTRL_GENABLE_0_Val << ISC_GAM_CTRL_GENABLE_Pos) /**< (ISC_GAM_CTRL) 12-bit to 10-bit compression is performed skipping two bits. Position  */
#define ISC_GAM_CTRL_GENABLE_1                (ISC_GAM_CTRL_GENABLE_1_Val << ISC_GAM_CTRL_GENABLE_Pos) /**< (ISC_GAM_CTRL) Piecewise interpolation is used to perform 12-bit to 10-bit compression for the green channel. Position  */
#define ISC_GAM_CTRL_RENABLE_Pos              _U_(3)                                               /**< (ISC_GAM_CTRL) Gamma Correction Enable for R Channel Position */
#define ISC_GAM_CTRL_RENABLE_Msk              (_U_(0x1) << ISC_GAM_CTRL_RENABLE_Pos)               /**< (ISC_GAM_CTRL) Gamma Correction Enable for R Channel Mask */
#define ISC_GAM_CTRL_RENABLE(value)           (ISC_GAM_CTRL_RENABLE_Msk & ((value) << ISC_GAM_CTRL_RENABLE_Pos))
#define   ISC_GAM_CTRL_RENABLE_0_Val          _U_(0x0)                                             /**< (ISC_GAM_CTRL) 12-bit to 10-bit compression is performed skipping two bits.  */
#define   ISC_GAM_CTRL_RENABLE_1_Val          _U_(0x1)                                             /**< (ISC_GAM_CTRL) Piecewise interpolation is used to perform 12-bit to 10-bit compression for the red channel.  */
#define ISC_GAM_CTRL_RENABLE_0                (ISC_GAM_CTRL_RENABLE_0_Val << ISC_GAM_CTRL_RENABLE_Pos) /**< (ISC_GAM_CTRL) 12-bit to 10-bit compression is performed skipping two bits. Position  */
#define ISC_GAM_CTRL_RENABLE_1                (ISC_GAM_CTRL_RENABLE_1_Val << ISC_GAM_CTRL_RENABLE_Pos) /**< (ISC_GAM_CTRL) Piecewise interpolation is used to perform 12-bit to 10-bit compression for the red channel. Position  */
#define ISC_GAM_CTRL_BIPART_Pos               _U_(4)                                               /**< (ISC_GAM_CTRL) Bipartite Table Configuration Position */
#define ISC_GAM_CTRL_BIPART_Msk               (_U_(0x1) << ISC_GAM_CTRL_BIPART_Pos)                /**< (ISC_GAM_CTRL) Bipartite Table Configuration Mask */
#define ISC_GAM_CTRL_BIPART(value)            (ISC_GAM_CTRL_BIPART_Msk & ((value) << ISC_GAM_CTRL_BIPART_Pos))
#define   ISC_GAM_CTRL_BIPART_0_Val           _U_(0x0)                                             /**< (ISC_GAM_CTRL) Bipartite table is disabled. There are 64 points of interpolation from 0 to 4095.  */
#define   ISC_GAM_CTRL_BIPART_1_Val           _U_(0x1)                                             /**< (ISC_GAM_CTRL) Bipartite table is enabled. There are 32 points of interpolation (spacing is 8) from 0 to 255, then there are 30 points of interpolation from 256 to 4095.  */
#define ISC_GAM_CTRL_BIPART_0                 (ISC_GAM_CTRL_BIPART_0_Val << ISC_GAM_CTRL_BIPART_Pos) /**< (ISC_GAM_CTRL) Bipartite table is disabled. There are 64 points of interpolation from 0 to 4095. Position  */
#define ISC_GAM_CTRL_BIPART_1                 (ISC_GAM_CTRL_BIPART_1_Val << ISC_GAM_CTRL_BIPART_Pos) /**< (ISC_GAM_CTRL) Bipartite table is enabled. There are 32 points of interpolation (spacing is 8) from 0 to 255, then there are 30 points of interpolation from 256 to 4095. Position  */
#define ISC_GAM_CTRL_Msk                      _U_(0x0000001F)                                      /**< (ISC_GAM_CTRL) Register Mask  */


/* -------- ISC_GAM_BENTRY : (ISC Offset: 0x98) (R/W 32) Gamma Correction Blue Entry x -------- */
#define ISC_GAM_BENTRY_RESETVALUE             _U_(0x00)                                            /**<  (ISC_GAM_BENTRY) Gamma Correction Blue Entry x  Reset Value */

#define ISC_GAM_BENTRY_BSLOPE_Pos             _U_(0)                                               /**< (ISC_GAM_BENTRY) Blue Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Position */
#define ISC_GAM_BENTRY_BSLOPE_Msk             (_U_(0x3FF) << ISC_GAM_BENTRY_BSLOPE_Pos)            /**< (ISC_GAM_BENTRY) Blue Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Mask */
#define ISC_GAM_BENTRY_BSLOPE(value)          (ISC_GAM_BENTRY_BSLOPE_Msk & ((value) << ISC_GAM_BENTRY_BSLOPE_Pos))
#define ISC_GAM_BENTRY_BCONSTANT_Pos          _U_(16)                                              /**< (ISC_GAM_BENTRY) Blue Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Position */
#define ISC_GAM_BENTRY_BCONSTANT_Msk          (_U_(0x3FF) << ISC_GAM_BENTRY_BCONSTANT_Pos)         /**< (ISC_GAM_BENTRY) Blue Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Mask */
#define ISC_GAM_BENTRY_BCONSTANT(value)       (ISC_GAM_BENTRY_BCONSTANT_Msk & ((value) << ISC_GAM_BENTRY_BCONSTANT_Pos))
#define ISC_GAM_BENTRY_Msk                    _U_(0x03FF03FF)                                      /**< (ISC_GAM_BENTRY) Register Mask  */


/* -------- ISC_GAM_GENTRY : (ISC Offset: 0x198) (R/W 32) Gamma Correction Green Entry x -------- */
#define ISC_GAM_GENTRY_RESETVALUE             _U_(0x00)                                            /**<  (ISC_GAM_GENTRY) Gamma Correction Green Entry x  Reset Value */

#define ISC_GAM_GENTRY_GSLOPE_Pos             _U_(0)                                               /**< (ISC_GAM_GENTRY) Green Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Position */
#define ISC_GAM_GENTRY_GSLOPE_Msk             (_U_(0x3FF) << ISC_GAM_GENTRY_GSLOPE_Pos)            /**< (ISC_GAM_GENTRY) Green Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Mask */
#define ISC_GAM_GENTRY_GSLOPE(value)          (ISC_GAM_GENTRY_GSLOPE_Msk & ((value) << ISC_GAM_GENTRY_GSLOPE_Pos))
#define ISC_GAM_GENTRY_GCONSTANT_Pos          _U_(16)                                              /**< (ISC_GAM_GENTRY) Green Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Position */
#define ISC_GAM_GENTRY_GCONSTANT_Msk          (_U_(0x3FF) << ISC_GAM_GENTRY_GCONSTANT_Pos)         /**< (ISC_GAM_GENTRY) Green Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Mask */
#define ISC_GAM_GENTRY_GCONSTANT(value)       (ISC_GAM_GENTRY_GCONSTANT_Msk & ((value) << ISC_GAM_GENTRY_GCONSTANT_Pos))
#define ISC_GAM_GENTRY_Msk                    _U_(0x03FF03FF)                                      /**< (ISC_GAM_GENTRY) Register Mask  */


/* -------- ISC_GAM_RENTRY : (ISC Offset: 0x298) (R/W 32) Gamma Correction Red Entry x -------- */
#define ISC_GAM_RENTRY_RESETVALUE             _U_(0x00)                                            /**<  (ISC_GAM_RENTRY) Gamma Correction Red Entry x  Reset Value */

#define ISC_GAM_RENTRY_RSLOPE_Pos             _U_(0)                                               /**< (ISC_GAM_RENTRY) Red Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Position */
#define ISC_GAM_RENTRY_RSLOPE_Msk             (_U_(0x3FF) << ISC_GAM_RENTRY_RSLOPE_Pos)            /**< (ISC_GAM_RENTRY) Red Color Slope for Piecewise Interpolation (signed 10 bits 1:3:6) Mask */
#define ISC_GAM_RENTRY_RSLOPE(value)          (ISC_GAM_RENTRY_RSLOPE_Msk & ((value) << ISC_GAM_RENTRY_RSLOPE_Pos))
#define ISC_GAM_RENTRY_RCONSTANT_Pos          _U_(16)                                              /**< (ISC_GAM_RENTRY) Red Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Position */
#define ISC_GAM_RENTRY_RCONSTANT_Msk          (_U_(0x3FF) << ISC_GAM_RENTRY_RCONSTANT_Pos)         /**< (ISC_GAM_RENTRY) Red Color Constant for Piecewise Interpolation (unsigned 10 bits 0:10:0) Mask */
#define ISC_GAM_RENTRY_RCONSTANT(value)       (ISC_GAM_RENTRY_RCONSTANT_Msk & ((value) << ISC_GAM_RENTRY_RCONSTANT_Pos))
#define ISC_GAM_RENTRY_Msk                    _U_(0x03FF03FF)                                      /**< (ISC_GAM_RENTRY) Register Mask  */


/* -------- ISC_VHXS_CTRL : (ISC Offset: 0x398) (R/W 32) VHXS Control Register -------- */
#define ISC_VHXS_CTRL_RESETVALUE              _U_(0x00)                                            /**<  (ISC_VHXS_CTRL) VHXS Control Register  Reset Value */

#define ISC_VHXS_CTRL_VXSEN_Pos               _U_(0)                                               /**< (ISC_VHXS_CTRL) Vertical Scaler Enable Position */
#define ISC_VHXS_CTRL_VXSEN_Msk               (_U_(0x1) << ISC_VHXS_CTRL_VXSEN_Pos)                /**< (ISC_VHXS_CTRL) Vertical Scaler Enable Mask */
#define ISC_VHXS_CTRL_VXSEN(value)            (ISC_VHXS_CTRL_VXSEN_Msk & ((value) << ISC_VHXS_CTRL_VXSEN_Pos))
#define   ISC_VHXS_CTRL_VXSEN_0_Val           _U_(0x0)                                             /**< (ISC_VHXS_CTRL) Vertical scaler is disabled.  */
#define   ISC_VHXS_CTRL_VXSEN_1_Val           _U_(0x1)                                             /**< (ISC_VHXS_CTRL) Vertical scaler is enabled.  */
#define ISC_VHXS_CTRL_VXSEN_0                 (ISC_VHXS_CTRL_VXSEN_0_Val << ISC_VHXS_CTRL_VXSEN_Pos) /**< (ISC_VHXS_CTRL) Vertical scaler is disabled. Position  */
#define ISC_VHXS_CTRL_VXSEN_1                 (ISC_VHXS_CTRL_VXSEN_1_Val << ISC_VHXS_CTRL_VXSEN_Pos) /**< (ISC_VHXS_CTRL) Vertical scaler is enabled. Position  */
#define ISC_VHXS_CTRL_HXSEN_Pos               _U_(1)                                               /**< (ISC_VHXS_CTRL) Horizontal Scaler Enable Position */
#define ISC_VHXS_CTRL_HXSEN_Msk               (_U_(0x1) << ISC_VHXS_CTRL_HXSEN_Pos)                /**< (ISC_VHXS_CTRL) Horizontal Scaler Enable Mask */
#define ISC_VHXS_CTRL_HXSEN(value)            (ISC_VHXS_CTRL_HXSEN_Msk & ((value) << ISC_VHXS_CTRL_HXSEN_Pos))
#define   ISC_VHXS_CTRL_HXSEN_0_Val           _U_(0x0)                                             /**< (ISC_VHXS_CTRL) Horizontal scaler is disabled.  */
#define   ISC_VHXS_CTRL_HXSEN_1_Val           _U_(0x1)                                             /**< (ISC_VHXS_CTRL) Horizontal scaler is enabled.  */
#define ISC_VHXS_CTRL_HXSEN_0                 (ISC_VHXS_CTRL_HXSEN_0_Val << ISC_VHXS_CTRL_HXSEN_Pos) /**< (ISC_VHXS_CTRL) Horizontal scaler is disabled. Position  */
#define ISC_VHXS_CTRL_HXSEN_1                 (ISC_VHXS_CTRL_HXSEN_1_Val << ISC_VHXS_CTRL_HXSEN_Pos) /**< (ISC_VHXS_CTRL) Horizontal scaler is enabled. Position  */
#define ISC_VHXS_CTRL_Msk                     _U_(0x00000003)                                      /**< (ISC_VHXS_CTRL) Register Mask  */


/* -------- ISC_VHXS_SS : (ISC Offset: 0x39C) (R/W 32) VHXS Source Size Register -------- */
#define ISC_VHXS_SS_RESETVALUE                _U_(0x00)                                            /**<  (ISC_VHXS_SS) VHXS Source Size Register  Reset Value */

#define ISC_VHXS_SS_XS_Pos                    _U_(0)                                               /**< (ISC_VHXS_SS) Source Image Horizontal Size Position */
#define ISC_VHXS_SS_XS_Msk                    (_U_(0xFFF) << ISC_VHXS_SS_XS_Pos)                   /**< (ISC_VHXS_SS) Source Image Horizontal Size Mask */
#define ISC_VHXS_SS_XS(value)                 (ISC_VHXS_SS_XS_Msk & ((value) << ISC_VHXS_SS_XS_Pos))
#define ISC_VHXS_SS_YS_Pos                    _U_(16)                                              /**< (ISC_VHXS_SS) Source Image Vertical Size Position */
#define ISC_VHXS_SS_YS_Msk                    (_U_(0xFFF) << ISC_VHXS_SS_YS_Pos)                   /**< (ISC_VHXS_SS) Source Image Vertical Size Mask */
#define ISC_VHXS_SS_YS(value)                 (ISC_VHXS_SS_YS_Msk & ((value) << ISC_VHXS_SS_YS_Pos))
#define ISC_VHXS_SS_Msk                       _U_(0x0FFF0FFF)                                      /**< (ISC_VHXS_SS) Register Mask  */


/* -------- ISC_VHXS_DS : (ISC Offset: 0x3A0) (R/W 32) VHXS Destination Size Register -------- */
#define ISC_VHXS_DS_RESETVALUE                _U_(0x00)                                            /**<  (ISC_VHXS_DS) VHXS Destination Size Register  Reset Value */

#define ISC_VHXS_DS_XD_Pos                    _U_(0)                                               /**< (ISC_VHXS_DS) Destination Image Horizontal Size Position */
#define ISC_VHXS_DS_XD_Msk                    (_U_(0xFFF) << ISC_VHXS_DS_XD_Pos)                   /**< (ISC_VHXS_DS) Destination Image Horizontal Size Mask */
#define ISC_VHXS_DS_XD(value)                 (ISC_VHXS_DS_XD_Msk & ((value) << ISC_VHXS_DS_XD_Pos))
#define ISC_VHXS_DS_YD_Pos                    _U_(16)                                              /**< (ISC_VHXS_DS) Destination Image Horizontal Size Position */
#define ISC_VHXS_DS_YD_Msk                    (_U_(0xFFF) << ISC_VHXS_DS_YD_Pos)                   /**< (ISC_VHXS_DS) Destination Image Horizontal Size Mask */
#define ISC_VHXS_DS_YD(value)                 (ISC_VHXS_DS_YD_Msk & ((value) << ISC_VHXS_DS_YD_Pos))
#define ISC_VHXS_DS_Msk                       _U_(0x0FFF0FFF)                                      /**< (ISC_VHXS_DS) Register Mask  */


/* -------- ISC_VXS_FACT : (ISC Offset: 0x3A4) (R/W 32) VXS Scaling Factor Register -------- */
#define ISC_VXS_FACT_RESETVALUE               _U_(0x00)                                            /**<  (ISC_VXS_FACT) VXS Scaling Factor Register  Reset Value */

#define ISC_VXS_FACT_VFACT_Pos                _U_(0)                                               /**< (ISC_VXS_FACT) Vertical Scaling Factor Position */
#define ISC_VXS_FACT_VFACT_Msk                (_U_(0xFFFFFF) << ISC_VXS_FACT_VFACT_Pos)            /**< (ISC_VXS_FACT) Vertical Scaling Factor Mask */
#define ISC_VXS_FACT_VFACT(value)             (ISC_VXS_FACT_VFACT_Msk & ((value) << ISC_VXS_FACT_VFACT_Pos))
#define ISC_VXS_FACT_Msk                      _U_(0x00FFFFFF)                                      /**< (ISC_VXS_FACT) Register Mask  */


/* -------- ISC_HXS_FACT : (ISC Offset: 0x3A8) (R/W 32) HXS Scaling Factor Register -------- */
#define ISC_HXS_FACT_RESETVALUE               _U_(0x00)                                            /**<  (ISC_HXS_FACT) HXS Scaling Factor Register  Reset Value */

#define ISC_HXS_FACT_HFACT_Pos                _U_(0)                                               /**< (ISC_HXS_FACT) Horizontal Scaling Factor Position */
#define ISC_HXS_FACT_HFACT_Msk                (_U_(0xFFFFFF) << ISC_HXS_FACT_HFACT_Pos)            /**< (ISC_HXS_FACT) Horizontal Scaling Factor Mask */
#define ISC_HXS_FACT_HFACT(value)             (ISC_HXS_FACT_HFACT_Msk & ((value) << ISC_HXS_FACT_HFACT_Pos))
#define ISC_HXS_FACT_Msk                      _U_(0x00FFFFFF)                                      /**< (ISC_HXS_FACT) Register Mask  */


/* -------- ISC_VXS_CFG : (ISC Offset: 0x3AC) (R/W 32) VXS Configuration Register -------- */
#define ISC_VXS_CFG_RESETVALUE                _U_(0x00)                                            /**<  (ISC_VXS_CFG) VXS Configuration Register  Reset Value */

#define ISC_VXS_CFG_FILTCFG_Pos               _U_(0)                                               /**< (ISC_VXS_CFG) Vertical Filter Initial Configuration Position */
#define ISC_VXS_CFG_FILTCFG_Msk               (_U_(0x3) << ISC_VXS_CFG_FILTCFG_Pos)                /**< (ISC_VXS_CFG) Vertical Filter Initial Configuration Mask */
#define ISC_VXS_CFG_FILTCFG(value)            (ISC_VXS_CFG_FILTCFG_Msk & ((value) << ISC_VXS_CFG_FILTCFG_Pos))
#define ISC_VXS_CFG_TAP2_Pos                  _U_(4)                                               /**< (ISC_VXS_CFG) Bilinear Interpolation Position */
#define ISC_VXS_CFG_TAP2_Msk                  (_U_(0x1) << ISC_VXS_CFG_TAP2_Pos)                   /**< (ISC_VXS_CFG) Bilinear Interpolation Mask */
#define ISC_VXS_CFG_TAP2(value)               (ISC_VXS_CFG_TAP2_Msk & ((value) << ISC_VXS_CFG_TAP2_Pos))
#define   ISC_VXS_CFG_TAP2_0_Val              _U_(0x0)                                             /**< (ISC_VXS_CFG) Bicubic interpolation is used.  */
#define   ISC_VXS_CFG_TAP2_1_Val              _U_(0x1)                                             /**< (ISC_VXS_CFG) Bilinear interpolation is used.  */
#define ISC_VXS_CFG_TAP2_0                    (ISC_VXS_CFG_TAP2_0_Val << ISC_VXS_CFG_TAP2_Pos)     /**< (ISC_VXS_CFG) Bicubic interpolation is used. Position  */
#define ISC_VXS_CFG_TAP2_1                    (ISC_VXS_CFG_TAP2_1_Val << ISC_VXS_CFG_TAP2_Pos)     /**< (ISC_VXS_CFG) Bilinear interpolation is used. Position  */
#define ISC_VXS_CFG_OFFSET_Pos                _U_(8)                                               /**< (ISC_VXS_CFG) Resampling Default Phase Position */
#define ISC_VXS_CFG_OFFSET_Msk                (_U_(0xF) << ISC_VXS_CFG_OFFSET_Pos)                 /**< (ISC_VXS_CFG) Resampling Default Phase Mask */
#define ISC_VXS_CFG_OFFSET(value)             (ISC_VXS_CFG_OFFSET_Msk & ((value) << ISC_VXS_CFG_OFFSET_Pos))
#define ISC_VXS_CFG_FLMIN_Pos                 _U_(24)                                              /**< (ISC_VXS_CFG) flush latency min Position */
#define ISC_VXS_CFG_FLMIN_Msk                 (_U_(0xF) << ISC_VXS_CFG_FLMIN_Pos)                  /**< (ISC_VXS_CFG) flush latency min Mask */
#define ISC_VXS_CFG_FLMIN(value)              (ISC_VXS_CFG_FLMIN_Msk & ((value) << ISC_VXS_CFG_FLMIN_Pos))
#define ISC_VXS_CFG_FLMAX_Pos                 _U_(28)                                              /**< (ISC_VXS_CFG) flush latency max Position */
#define ISC_VXS_CFG_FLMAX_Msk                 (_U_(0xF) << ISC_VXS_CFG_FLMAX_Pos)                  /**< (ISC_VXS_CFG) flush latency max Mask */
#define ISC_VXS_CFG_FLMAX(value)              (ISC_VXS_CFG_FLMAX_Msk & ((value) << ISC_VXS_CFG_FLMAX_Pos))
#define ISC_VXS_CFG_Msk                       _U_(0xFF000F13)                                      /**< (ISC_VXS_CFG) Register Mask  */

#define ISC_VXS_CFG_TAP_Pos                   _U_(4)                                               /**< (ISC_VXS_CFG Position) Bilinear Interpolation */
#define ISC_VXS_CFG_TAP_Msk                   (_U_(0x1) << ISC_VXS_CFG_TAP_Pos)                    /**< (ISC_VXS_CFG Mask) TAP */
#define ISC_VXS_CFG_TAP(value)                (ISC_VXS_CFG_TAP_Msk & ((value) << ISC_VXS_CFG_TAP_Pos)) 

/* -------- ISC_HXS_CFG : (ISC Offset: 0x3B0) (R/W 32) HXS Configuration Register -------- */
#define ISC_HXS_CFG_RESETVALUE                _U_(0x00)                                            /**<  (ISC_HXS_CFG) HXS Configuration Register  Reset Value */

#define ISC_HXS_CFG_FILTCFG_Pos               _U_(0)                                               /**< (ISC_HXS_CFG) Horizontal Filter Initial Configuration Position */
#define ISC_HXS_CFG_FILTCFG_Msk               (_U_(0x3) << ISC_HXS_CFG_FILTCFG_Pos)                /**< (ISC_HXS_CFG) Horizontal Filter Initial Configuration Mask */
#define ISC_HXS_CFG_FILTCFG(value)            (ISC_HXS_CFG_FILTCFG_Msk & ((value) << ISC_HXS_CFG_FILTCFG_Pos))
#define ISC_HXS_CFG_TAP2_Pos                  _U_(4)                                               /**< (ISC_HXS_CFG) Bilinear Interpolation Position */
#define ISC_HXS_CFG_TAP2_Msk                  (_U_(0x1) << ISC_HXS_CFG_TAP2_Pos)                   /**< (ISC_HXS_CFG) Bilinear Interpolation Mask */
#define ISC_HXS_CFG_TAP2(value)               (ISC_HXS_CFG_TAP2_Msk & ((value) << ISC_HXS_CFG_TAP2_Pos))
#define   ISC_HXS_CFG_TAP2_0_Val              _U_(0x0)                                             /**< (ISC_HXS_CFG) Bicubic interpolation is used.  */
#define   ISC_HXS_CFG_TAP2_1_Val              _U_(0x1)                                             /**< (ISC_HXS_CFG) Bilinear interpolation is used.  */
#define ISC_HXS_CFG_TAP2_0                    (ISC_HXS_CFG_TAP2_0_Val << ISC_HXS_CFG_TAP2_Pos)     /**< (ISC_HXS_CFG) Bicubic interpolation is used. Position  */
#define ISC_HXS_CFG_TAP2_1                    (ISC_HXS_CFG_TAP2_1_Val << ISC_HXS_CFG_TAP2_Pos)     /**< (ISC_HXS_CFG) Bilinear interpolation is used. Position  */
#define ISC_HXS_CFG_OFFSET_Pos                _U_(8)                                               /**< (ISC_HXS_CFG) Resampling Default Phase Position */
#define ISC_HXS_CFG_OFFSET_Msk                (_U_(0xF) << ISC_HXS_CFG_OFFSET_Pos)                 /**< (ISC_HXS_CFG) Resampling Default Phase Mask */
#define ISC_HXS_CFG_OFFSET(value)             (ISC_HXS_CFG_OFFSET_Msk & ((value) << ISC_HXS_CFG_OFFSET_Pos))
#define ISC_HXS_CFG_FL_Pos                    _U_(24)                                              /**< (ISC_HXS_CFG) Flush Latency Position */
#define ISC_HXS_CFG_FL_Msk                    (_U_(0xF) << ISC_HXS_CFG_FL_Pos)                     /**< (ISC_HXS_CFG) Flush Latency Mask */
#define ISC_HXS_CFG_FL(value)                 (ISC_HXS_CFG_FL_Msk & ((value) << ISC_HXS_CFG_FL_Pos))
#define ISC_HXS_CFG_Msk                       _U_(0x0F000F13)                                      /**< (ISC_HXS_CFG) Register Mask  */

#define ISC_HXS_CFG_TAP_Pos                   _U_(4)                                               /**< (ISC_HXS_CFG Position) Bilinear Interpolation */
#define ISC_HXS_CFG_TAP_Msk                   (_U_(0x1) << ISC_HXS_CFG_TAP_Pos)                    /**< (ISC_HXS_CFG Mask) TAP */
#define ISC_HXS_CFG_TAP(value)                (ISC_HXS_CFG_TAP_Msk & ((value) << ISC_HXS_CFG_TAP_Pos)) 

/* -------- ISC_CSC_CTRL : (ISC Offset: 0x4B4) (R/W 32) Color Space Conversion Control Register -------- */
#define ISC_CSC_CTRL_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CSC_CTRL) Color Space Conversion Control Register  Reset Value */

#define ISC_CSC_CTRL_ENABLE_Pos               _U_(0)                                               /**< (ISC_CSC_CTRL) RGB to YCbCr Color Space Conversion Enable Position */
#define ISC_CSC_CTRL_ENABLE_Msk               (_U_(0x1) << ISC_CSC_CTRL_ENABLE_Pos)                /**< (ISC_CSC_CTRL) RGB to YCbCr Color Space Conversion Enable Mask */
#define ISC_CSC_CTRL_ENABLE(value)            (ISC_CSC_CTRL_ENABLE_Msk & ((value) << ISC_CSC_CTRL_ENABLE_Pos))
#define   ISC_CSC_CTRL_ENABLE_0_Val           _U_(0x0)                                             /**< (ISC_CSC_CTRL) Color space conversion is disabled.  */
#define   ISC_CSC_CTRL_ENABLE_1_Val           _U_(0x1)                                             /**< (ISC_CSC_CTRL) Color space conversion is enabled.  */
#define ISC_CSC_CTRL_ENABLE_0                 (ISC_CSC_CTRL_ENABLE_0_Val << ISC_CSC_CTRL_ENABLE_Pos) /**< (ISC_CSC_CTRL) Color space conversion is disabled. Position  */
#define ISC_CSC_CTRL_ENABLE_1                 (ISC_CSC_CTRL_ENABLE_1_Val << ISC_CSC_CTRL_ENABLE_Pos) /**< (ISC_CSC_CTRL) Color space conversion is enabled. Position  */
#define ISC_CSC_CTRL_Msk                      _U_(0x00000001)                                      /**< (ISC_CSC_CTRL) Register Mask  */


/* -------- ISC_CSC_YR_YG : (ISC Offset: 0x4B8) (R/W 32) Color Space Conversion YR, YG Register -------- */
#define ISC_CSC_YR_YG_RESETVALUE              _U_(0x00)                                            /**<  (ISC_CSC_YR_YG) Color Space Conversion YR, YG Register  Reset Value */

#define ISC_CSC_YR_YG_YRGAIN_Pos              _U_(0)                                               /**< (ISC_CSC_YR_YG) Reg Gain for Luminance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_YR_YG_YRGAIN_Msk              (_U_(0xFFF) << ISC_CSC_YR_YG_YRGAIN_Pos)             /**< (ISC_CSC_YR_YG) Reg Gain for Luminance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_YR_YG_YRGAIN(value)           (ISC_CSC_YR_YG_YRGAIN_Msk & ((value) << ISC_CSC_YR_YG_YRGAIN_Pos))
#define ISC_CSC_YR_YG_YGGAIN_Pos              _U_(16)                                              /**< (ISC_CSC_YR_YG) Green Gain for Luminance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_YR_YG_YGGAIN_Msk              (_U_(0xFFF) << ISC_CSC_YR_YG_YGGAIN_Pos)             /**< (ISC_CSC_YR_YG) Green Gain for Luminance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_YR_YG_YGGAIN(value)           (ISC_CSC_YR_YG_YGGAIN_Msk & ((value) << ISC_CSC_YR_YG_YGGAIN_Pos))
#define ISC_CSC_YR_YG_Msk                     _U_(0x0FFF0FFF)                                      /**< (ISC_CSC_YR_YG) Register Mask  */


/* -------- ISC_CSC_YB_OY : (ISC Offset: 0x4BC) (R/W 32) Color Space Conversion YB, OY Register -------- */
#define ISC_CSC_YB_OY_RESETVALUE              _U_(0x00)                                            /**<  (ISC_CSC_YB_OY) Color Space Conversion YB, OY Register  Reset Value */

#define ISC_CSC_YB_OY_YBGAIN_Pos              _U_(0)                                               /**< (ISC_CSC_YB_OY) Blue Gain for Luminance Component (12 bits signed 1:3:8) Position */
#define ISC_CSC_YB_OY_YBGAIN_Msk              (_U_(0xFFF) << ISC_CSC_YB_OY_YBGAIN_Pos)             /**< (ISC_CSC_YB_OY) Blue Gain for Luminance Component (12 bits signed 1:3:8) Mask */
#define ISC_CSC_YB_OY_YBGAIN(value)           (ISC_CSC_YB_OY_YBGAIN_Msk & ((value) << ISC_CSC_YB_OY_YBGAIN_Pos))
#define ISC_CSC_YB_OY_YOFST_Pos               _U_(16)                                              /**< (ISC_CSC_YB_OY) Luminance Offset (11 bits signed 1:10:0) Position */
#define ISC_CSC_YB_OY_YOFST_Msk               (_U_(0x7FF) << ISC_CSC_YB_OY_YOFST_Pos)              /**< (ISC_CSC_YB_OY) Luminance Offset (11 bits signed 1:10:0) Mask */
#define ISC_CSC_YB_OY_YOFST(value)            (ISC_CSC_YB_OY_YOFST_Msk & ((value) << ISC_CSC_YB_OY_YOFST_Pos))
#define ISC_CSC_YB_OY_Msk                     _U_(0x07FF0FFF)                                      /**< (ISC_CSC_YB_OY) Register Mask  */


/* -------- ISC_CSC_CBR_CBG : (ISC Offset: 0x4C0) (R/W 32) Color Space Conversion CBR CBG Register -------- */
#define ISC_CSC_CBR_CBG_RESETVALUE            _U_(0x00)                                            /**<  (ISC_CSC_CBR_CBG) Color Space Conversion CBR CBG Register  Reset Value */

#define ISC_CSC_CBR_CBG_CBRGAIN_Pos           _U_(0)                                               /**< (ISC_CSC_CBR_CBG) Red Gain for Blue Chrominance (signed 12 bits, 1:3:8) Position */
#define ISC_CSC_CBR_CBG_CBRGAIN_Msk           (_U_(0xFFF) << ISC_CSC_CBR_CBG_CBRGAIN_Pos)          /**< (ISC_CSC_CBR_CBG) Red Gain for Blue Chrominance (signed 12 bits, 1:3:8) Mask */
#define ISC_CSC_CBR_CBG_CBRGAIN(value)        (ISC_CSC_CBR_CBG_CBRGAIN_Msk & ((value) << ISC_CSC_CBR_CBG_CBRGAIN_Pos))
#define ISC_CSC_CBR_CBG_CBGGAIN_Pos           _U_(16)                                              /**< (ISC_CSC_CBR_CBG) Green Gain for Blue Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CBR_CBG_CBGGAIN_Msk           (_U_(0xFFF) << ISC_CSC_CBR_CBG_CBGGAIN_Pos)          /**< (ISC_CSC_CBR_CBG) Green Gain for Blue Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CBR_CBG_CBGGAIN(value)        (ISC_CSC_CBR_CBG_CBGGAIN_Msk & ((value) << ISC_CSC_CBR_CBG_CBGGAIN_Pos))
#define ISC_CSC_CBR_CBG_Msk                   _U_(0x0FFF0FFF)                                      /**< (ISC_CSC_CBR_CBG) Register Mask  */


/* -------- ISC_CSC_CBB_OCB : (ISC Offset: 0x4C4) (R/W 32) Color Space Conversion CBB OCB Register -------- */
#define ISC_CSC_CBB_OCB_RESETVALUE            _U_(0x00)                                            /**<  (ISC_CSC_CBB_OCB) Color Space Conversion CBB OCB Register  Reset Value */

#define ISC_CSC_CBB_OCB_CBBGAIN_Pos           _U_(0)                                               /**< (ISC_CSC_CBB_OCB) Blue Gain for Blue Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CBB_OCB_CBBGAIN_Msk           (_U_(0xFFF) << ISC_CSC_CBB_OCB_CBBGAIN_Pos)          /**< (ISC_CSC_CBB_OCB) Blue Gain for Blue Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CBB_OCB_CBBGAIN(value)        (ISC_CSC_CBB_OCB_CBBGAIN_Msk & ((value) << ISC_CSC_CBB_OCB_CBBGAIN_Pos))
#define ISC_CSC_CBB_OCB_CBOFST_Pos            _U_(16)                                              /**< (ISC_CSC_CBB_OCB) Blue Chrominance Offset (signed 11 bits 1:10:0) Position */
#define ISC_CSC_CBB_OCB_CBOFST_Msk            (_U_(0x7FF) << ISC_CSC_CBB_OCB_CBOFST_Pos)           /**< (ISC_CSC_CBB_OCB) Blue Chrominance Offset (signed 11 bits 1:10:0) Mask */
#define ISC_CSC_CBB_OCB_CBOFST(value)         (ISC_CSC_CBB_OCB_CBOFST_Msk & ((value) << ISC_CSC_CBB_OCB_CBOFST_Pos))
#define ISC_CSC_CBB_OCB_Msk                   _U_(0x07FF0FFF)                                      /**< (ISC_CSC_CBB_OCB) Register Mask  */


/* -------- ISC_CSC_CRR_CRG : (ISC Offset: 0x4C8) (R/W 32) Color Space Conversion CRR CRG Register -------- */
#define ISC_CSC_CRR_CRG_RESETVALUE            _U_(0x00)                                            /**<  (ISC_CSC_CRR_CRG) Color Space Conversion CRR CRG Register  Reset Value */

#define ISC_CSC_CRR_CRG_CRRGAIN_Pos           _U_(0)                                               /**< (ISC_CSC_CRR_CRG) Red Gain for Red Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CRR_CRG_CRRGAIN_Msk           (_U_(0xFFF) << ISC_CSC_CRR_CRG_CRRGAIN_Pos)          /**< (ISC_CSC_CRR_CRG) Red Gain for Red Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CRR_CRG_CRRGAIN(value)        (ISC_CSC_CRR_CRG_CRRGAIN_Msk & ((value) << ISC_CSC_CRR_CRG_CRRGAIN_Pos))
#define ISC_CSC_CRR_CRG_CRGGAIN_Pos           _U_(16)                                              /**< (ISC_CSC_CRR_CRG) Green Gain for Red Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CRR_CRG_CRGGAIN_Msk           (_U_(0xFFF) << ISC_CSC_CRR_CRG_CRGGAIN_Pos)          /**< (ISC_CSC_CRR_CRG) Green Gain for Red Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CRR_CRG_CRGGAIN(value)        (ISC_CSC_CRR_CRG_CRGGAIN_Msk & ((value) << ISC_CSC_CRR_CRG_CRGGAIN_Pos))
#define ISC_CSC_CRR_CRG_Msk                   _U_(0x0FFF0FFF)                                      /**< (ISC_CSC_CRR_CRG) Register Mask  */


/* -------- ISC_CSC_CRB_OCR : (ISC Offset: 0x4CC) (R/W 32) Color Space Conversion CRB OCR Register -------- */
#define ISC_CSC_CRB_OCR_RESETVALUE            _U_(0x00)                                            /**<  (ISC_CSC_CRB_OCR) Color Space Conversion CRB OCR Register  Reset Value */

#define ISC_CSC_CRB_OCR_CRBGAIN_Pos           _U_(0)                                               /**< (ISC_CSC_CRB_OCR) Blue Gain for Red Chrominance (signed 12 bits 1:3:8) Position */
#define ISC_CSC_CRB_OCR_CRBGAIN_Msk           (_U_(0xFFF) << ISC_CSC_CRB_OCR_CRBGAIN_Pos)          /**< (ISC_CSC_CRB_OCR) Blue Gain for Red Chrominance (signed 12 bits 1:3:8) Mask */
#define ISC_CSC_CRB_OCR_CRBGAIN(value)        (ISC_CSC_CRB_OCR_CRBGAIN_Msk & ((value) << ISC_CSC_CRB_OCR_CRBGAIN_Pos))
#define ISC_CSC_CRB_OCR_CROFST_Pos            _U_(16)                                              /**< (ISC_CSC_CRB_OCR) Red Chrominance Offset (signed 11 bits 1:10:0) Position */
#define ISC_CSC_CRB_OCR_CROFST_Msk            (_U_(0x7FF) << ISC_CSC_CRB_OCR_CROFST_Pos)           /**< (ISC_CSC_CRB_OCR) Red Chrominance Offset (signed 11 bits 1:10:0) Mask */
#define ISC_CSC_CRB_OCR_CROFST(value)         (ISC_CSC_CRB_OCR_CROFST_Msk & ((value) << ISC_CSC_CRB_OCR_CROFST_Pos))
#define ISC_CSC_CRB_OCR_Msk                   _U_(0x07FF0FFF)                                      /**< (ISC_CSC_CRB_OCR) Register Mask  */


/* -------- ISC_CBHS_CTRL : (ISC Offset: 0x4D0) (R/W 32) CBHS Control Register -------- */
#define ISC_CBHS_CTRL_RESETVALUE              _U_(0x00)                                            /**<  (ISC_CBHS_CTRL) CBHS Control Register  Reset Value */

#define ISC_CBHS_CTRL_ENABLE_Pos              _U_(0)                                               /**< (ISC_CBHS_CTRL) Contrast, Brightness, Hue and Saturation Control Enable Position */
#define ISC_CBHS_CTRL_ENABLE_Msk              (_U_(0x1) << ISC_CBHS_CTRL_ENABLE_Pos)               /**< (ISC_CBHS_CTRL) Contrast, Brightness, Hue and Saturation Control Enable Mask */
#define ISC_CBHS_CTRL_ENABLE(value)           (ISC_CBHS_CTRL_ENABLE_Msk & ((value) << ISC_CBHS_CTRL_ENABLE_Pos))
#define   ISC_CBHS_CTRL_ENABLE_0_Val          _U_(0x0)                                             /**< (ISC_CBHS_CTRL) CBHS control is disabled.  */
#define   ISC_CBHS_CTRL_ENABLE_1_Val          _U_(0x1)                                             /**< (ISC_CBHS_CTRL) CBHS control is enabled.  */
#define ISC_CBHS_CTRL_ENABLE_0                (ISC_CBHS_CTRL_ENABLE_0_Val << ISC_CBHS_CTRL_ENABLE_Pos) /**< (ISC_CBHS_CTRL) CBHS control is disabled. Position  */
#define ISC_CBHS_CTRL_ENABLE_1                (ISC_CBHS_CTRL_ENABLE_1_Val << ISC_CBHS_CTRL_ENABLE_Pos) /**< (ISC_CBHS_CTRL) CBHS control is enabled. Position  */
#define ISC_CBHS_CTRL_Msk                     _U_(0x00000001)                                      /**< (ISC_CBHS_CTRL) Register Mask  */


/* -------- ISC_CBHS_CFG : (ISC Offset: 0x4D4) (R/W 32) CBHS Configuration Register -------- */
#define ISC_CBHS_CFG_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CBHS_CFG) CBHS Configuration Register  Reset Value */

#define ISC_CBHS_CFG_CCIR_Pos                 _U_(0)                                               /**< (ISC_CBHS_CFG) CCIR656 Stream Enable Position */
#define ISC_CBHS_CFG_CCIR_Msk                 (_U_(0x1) << ISC_CBHS_CFG_CCIR_Pos)                  /**< (ISC_CBHS_CFG) CCIR656 Stream Enable Mask */
#define ISC_CBHS_CFG_CCIR(value)              (ISC_CBHS_CFG_CCIR_Msk & ((value) << ISC_CBHS_CFG_CCIR_Pos))
#define   ISC_CBHS_CFG_CCIR_0_Val             _U_(0x0)                                             /**< (ISC_CBHS_CFG) Raw mode.  */
#define   ISC_CBHS_CFG_CCIR_1_Val             _U_(0x1)                                             /**< (ISC_CBHS_CFG) CCIR656 stream.  */
#define ISC_CBHS_CFG_CCIR_0                   (ISC_CBHS_CFG_CCIR_0_Val << ISC_CBHS_CFG_CCIR_Pos)   /**< (ISC_CBHS_CFG) Raw mode. Position  */
#define ISC_CBHS_CFG_CCIR_1                   (ISC_CBHS_CFG_CCIR_1_Val << ISC_CBHS_CFG_CCIR_Pos)   /**< (ISC_CBHS_CFG) CCIR656 stream. Position  */
#define ISC_CBHS_CFG_CCIRMODE_Pos             _U_(1)                                               /**< (ISC_CBHS_CFG) CCIR656 Byte Ordering Position */
#define ISC_CBHS_CFG_CCIRMODE_Msk             (_U_(0x3) << ISC_CBHS_CFG_CCIRMODE_Pos)              /**< (ISC_CBHS_CFG) CCIR656 Byte Ordering Mask */
#define ISC_CBHS_CFG_CCIRMODE(value)          (ISC_CBHS_CFG_CCIRMODE_Msk & ((value) << ISC_CBHS_CFG_CCIRMODE_Pos))
#define   ISC_CBHS_CFG_CCIRMODE_CBY_Val       _U_(0x0)                                             /**< (ISC_CBHS_CFG) Byte ordering Cb0, Y0, Cr0, Y1  */
#define   ISC_CBHS_CFG_CCIRMODE_CRY_Val       _U_(0x1)                                             /**< (ISC_CBHS_CFG) Byte ordering Cr0, Y0, Cb0, Y1  */
#define   ISC_CBHS_CFG_CCIRMODE_YCB_Val       _U_(0x2)                                             /**< (ISC_CBHS_CFG) Byte ordering Y0, Cb0, Y1, Cr0  */
#define   ISC_CBHS_CFG_CCIRMODE_YCR_Val       _U_(0x3)                                             /**< (ISC_CBHS_CFG) Byte ordering Y0, Cr0, Y1, Cb0  */
#define ISC_CBHS_CFG_CCIRMODE_CBY             (ISC_CBHS_CFG_CCIRMODE_CBY_Val << ISC_CBHS_CFG_CCIRMODE_Pos) /**< (ISC_CBHS_CFG) Byte ordering Cb0, Y0, Cr0, Y1 Position  */
#define ISC_CBHS_CFG_CCIRMODE_CRY             (ISC_CBHS_CFG_CCIRMODE_CRY_Val << ISC_CBHS_CFG_CCIRMODE_Pos) /**< (ISC_CBHS_CFG) Byte ordering Cr0, Y0, Cb0, Y1 Position  */
#define ISC_CBHS_CFG_CCIRMODE_YCB             (ISC_CBHS_CFG_CCIRMODE_YCB_Val << ISC_CBHS_CFG_CCIRMODE_Pos) /**< (ISC_CBHS_CFG) Byte ordering Y0, Cb0, Y1, Cr0 Position  */
#define ISC_CBHS_CFG_CCIRMODE_YCR             (ISC_CBHS_CFG_CCIRMODE_YCR_Val << ISC_CBHS_CFG_CCIRMODE_Pos) /**< (ISC_CBHS_CFG) Byte ordering Y0, Cr0, Y1, Cb0 Position  */
#define ISC_CBHS_CFG_Msk                      _U_(0x00000007)                                      /**< (ISC_CBHS_CFG) Register Mask  */


/* -------- ISC_CBHS_BRIGHT : (ISC Offset: 0x4D8) (R/W 32) CBHS Brightness Register -------- */
#define ISC_CBHS_BRIGHT_RESETVALUE            _U_(0x00)                                            /**<  (ISC_CBHS_BRIGHT) CBHS Brightness Register  Reset Value */

#define ISC_CBHS_BRIGHT_BRIGHT_Pos            _U_(0)                                               /**< (ISC_CBHS_BRIGHT) Image Brightness Control (signed 11 bits 1:10:0) Position */
#define ISC_CBHS_BRIGHT_BRIGHT_Msk            (_U_(0x7FF) << ISC_CBHS_BRIGHT_BRIGHT_Pos)           /**< (ISC_CBHS_BRIGHT) Image Brightness Control (signed 11 bits 1:10:0) Mask */
#define ISC_CBHS_BRIGHT_BRIGHT(value)         (ISC_CBHS_BRIGHT_BRIGHT_Msk & ((value) << ISC_CBHS_BRIGHT_BRIGHT_Pos))
#define ISC_CBHS_BRIGHT_Msk                   _U_(0x000007FF)                                      /**< (ISC_CBHS_BRIGHT) Register Mask  */


/* -------- ISC_CBHS_CONT : (ISC Offset: 0x4DC) (R/W 32) CBHS Contrast Register -------- */
#define ISC_CBHS_CONT_RESETVALUE              _U_(0x00)                                            /**<  (ISC_CBHS_CONT) CBHS Contrast Register  Reset Value */

#define ISC_CBHS_CONT_CONTRAST_Pos            _U_(0)                                               /**< (ISC_CBHS_CONT) Image Contrast (unsigned 12 bits 0:4:8) Position */
#define ISC_CBHS_CONT_CONTRAST_Msk            (_U_(0xFFF) << ISC_CBHS_CONT_CONTRAST_Pos)           /**< (ISC_CBHS_CONT) Image Contrast (unsigned 12 bits 0:4:8) Mask */
#define ISC_CBHS_CONT_CONTRAST(value)         (ISC_CBHS_CONT_CONTRAST_Msk & ((value) << ISC_CBHS_CONT_CONTRAST_Pos))
#define ISC_CBHS_CONT_Msk                     _U_(0x00000FFF)                                      /**< (ISC_CBHS_CONT) Register Mask  */


/* -------- ISC_CBHS_HUE : (ISC Offset: 0x4E0) (R/W 32) CBHS Hue Register -------- */
#define ISC_CBHS_HUE_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CBHS_HUE) CBHS Hue Register  Reset Value */

#define ISC_CBHS_HUE_HUE_Pos                  _U_(0)                                               /**< (ISC_CBHS_HUE) Image Hue value (unsigned 9 bits 0:9:0) Position */
#define ISC_CBHS_HUE_HUE_Msk                  (_U_(0x1FF) << ISC_CBHS_HUE_HUE_Pos)                 /**< (ISC_CBHS_HUE) Image Hue value (unsigned 9 bits 0:9:0) Mask */
#define ISC_CBHS_HUE_HUE(value)               (ISC_CBHS_HUE_HUE_Msk & ((value) << ISC_CBHS_HUE_HUE_Pos))
#define ISC_CBHS_HUE_Msk                      _U_(0x000001FF)                                      /**< (ISC_CBHS_HUE) Register Mask  */


/* -------- ISC_CBHS_SAT : (ISC Offset: 0x4E4) (R/W 32) CBHS Saturation Register -------- */
#define ISC_CBHS_SAT_RESETVALUE               _U_(0x00)                                            /**<  (ISC_CBHS_SAT) CBHS Saturation Register  Reset Value */

#define ISC_CBHS_SAT_SATURATION_Pos           _U_(0)                                               /**< (ISC_CBHS_SAT) Image Saturation Value (unsigned 12 bits 0:8:4) Position */
#define ISC_CBHS_SAT_SATURATION_Msk           (_U_(0xFFF) << ISC_CBHS_SAT_SATURATION_Pos)          /**< (ISC_CBHS_SAT) Image Saturation Value (unsigned 12 bits 0:8:4) Mask */
#define ISC_CBHS_SAT_SATURATION(value)        (ISC_CBHS_SAT_SATURATION_Msk & ((value) << ISC_CBHS_SAT_SATURATION_Pos))
#define ISC_CBHS_SAT_Msk                      _U_(0x00000FFF)                                      /**< (ISC_CBHS_SAT) Register Mask  */


/* -------- ISC_SUB422_CTRL : (ISC Offset: 0x4E8) (R/W 32) Subsampling 4:4:4 to 4:2:2 Control Register -------- */
#define ISC_SUB422_CTRL_RESETVALUE            _U_(0x00)                                            /**<  (ISC_SUB422_CTRL) Subsampling 4:4:4 to 4:2:2 Control Register  Reset Value */

#define ISC_SUB422_CTRL_ENABLE_Pos            _U_(0)                                               /**< (ISC_SUB422_CTRL) 4:4:4 to 4:2:2 Chrominance Horizontal Subsampling Filter Enable Position */
#define ISC_SUB422_CTRL_ENABLE_Msk            (_U_(0x1) << ISC_SUB422_CTRL_ENABLE_Pos)             /**< (ISC_SUB422_CTRL) 4:4:4 to 4:2:2 Chrominance Horizontal Subsampling Filter Enable Mask */
#define ISC_SUB422_CTRL_ENABLE(value)         (ISC_SUB422_CTRL_ENABLE_Msk & ((value) << ISC_SUB422_CTRL_ENABLE_Pos))
#define   ISC_SUB422_CTRL_ENABLE_0_Val        _U_(0x0)                                             /**< (ISC_SUB422_CTRL) Subsampler is disabled.  */
#define   ISC_SUB422_CTRL_ENABLE_1_Val        _U_(0x1)                                             /**< (ISC_SUB422_CTRL) Subsampler is enabled.  */
#define ISC_SUB422_CTRL_ENABLE_0              (ISC_SUB422_CTRL_ENABLE_0_Val << ISC_SUB422_CTRL_ENABLE_Pos) /**< (ISC_SUB422_CTRL) Subsampler is disabled. Position  */
#define ISC_SUB422_CTRL_ENABLE_1              (ISC_SUB422_CTRL_ENABLE_1_Val << ISC_SUB422_CTRL_ENABLE_Pos) /**< (ISC_SUB422_CTRL) Subsampler is enabled. Position  */
#define ISC_SUB422_CTRL_Msk                   _U_(0x00000001)                                      /**< (ISC_SUB422_CTRL) Register Mask  */


/* -------- ISC_SUB422_CFG : (ISC Offset: 0x4EC) (R/W 32) Subsampling 4:4:4 to 4:2:2 Configuration Register -------- */
#define ISC_SUB422_CFG_RESETVALUE             _U_(0x00)                                            /**<  (ISC_SUB422_CFG) Subsampling 4:4:4 to 4:2:2 Configuration Register  Reset Value */

#define ISC_SUB422_CFG_CCIR_Pos               _U_(0)                                               /**< (ISC_SUB422_CFG) CCIR656 Input Stream Position */
#define ISC_SUB422_CFG_CCIR_Msk               (_U_(0x1) << ISC_SUB422_CFG_CCIR_Pos)                /**< (ISC_SUB422_CFG) CCIR656 Input Stream Mask */
#define ISC_SUB422_CFG_CCIR(value)            (ISC_SUB422_CFG_CCIR_Msk & ((value) << ISC_SUB422_CFG_CCIR_Pos))
#define   ISC_SUB422_CFG_CCIR_0_Val           _U_(0x0)                                             /**< (ISC_SUB422_CFG) Raw mode.  */
#define   ISC_SUB422_CFG_CCIR_1_Val           _U_(0x1)                                             /**< (ISC_SUB422_CFG) CCIR mode.  */
#define ISC_SUB422_CFG_CCIR_0                 (ISC_SUB422_CFG_CCIR_0_Val << ISC_SUB422_CFG_CCIR_Pos) /**< (ISC_SUB422_CFG) Raw mode. Position  */
#define ISC_SUB422_CFG_CCIR_1                 (ISC_SUB422_CFG_CCIR_1_Val << ISC_SUB422_CFG_CCIR_Pos) /**< (ISC_SUB422_CFG) CCIR mode. Position  */
#define ISC_SUB422_CFG_CCIRMODE_Pos           _U_(1)                                               /**< (ISC_SUB422_CFG) CCIR656 Byte Ordering Position */
#define ISC_SUB422_CFG_CCIRMODE_Msk           (_U_(0x3) << ISC_SUB422_CFG_CCIRMODE_Pos)            /**< (ISC_SUB422_CFG) CCIR656 Byte Ordering Mask */
#define ISC_SUB422_CFG_CCIRMODE(value)        (ISC_SUB422_CFG_CCIRMODE_Msk & ((value) << ISC_SUB422_CFG_CCIRMODE_Pos))
#define   ISC_SUB422_CFG_CCIRMODE_CBY_Val     _U_(0x0)                                             /**< (ISC_SUB422_CFG) Byte ordering Cb0, Y0, Cr0, Y1  */
#define   ISC_SUB422_CFG_CCIRMODE_CRY_Val     _U_(0x1)                                             /**< (ISC_SUB422_CFG) Byte ordering Cr0, Y0, Cb0, Y1  */
#define   ISC_SUB422_CFG_CCIRMODE_YCB_Val     _U_(0x2)                                             /**< (ISC_SUB422_CFG) Byte ordering Y0, Cb0, Y1, Cr0  */
#define   ISC_SUB422_CFG_CCIRMODE_YCR_Val     _U_(0x3)                                             /**< (ISC_SUB422_CFG) Byte ordering Y0, Cr0, Y1, Cb0  */
#define ISC_SUB422_CFG_CCIRMODE_CBY           (ISC_SUB422_CFG_CCIRMODE_CBY_Val << ISC_SUB422_CFG_CCIRMODE_Pos) /**< (ISC_SUB422_CFG) Byte ordering Cb0, Y0, Cr0, Y1 Position  */
#define ISC_SUB422_CFG_CCIRMODE_CRY           (ISC_SUB422_CFG_CCIRMODE_CRY_Val << ISC_SUB422_CFG_CCIRMODE_Pos) /**< (ISC_SUB422_CFG) Byte ordering Cr0, Y0, Cb0, Y1 Position  */
#define ISC_SUB422_CFG_CCIRMODE_YCB           (ISC_SUB422_CFG_CCIRMODE_YCB_Val << ISC_SUB422_CFG_CCIRMODE_Pos) /**< (ISC_SUB422_CFG) Byte ordering Y0, Cb0, Y1, Cr0 Position  */
#define ISC_SUB422_CFG_CCIRMODE_YCR           (ISC_SUB422_CFG_CCIRMODE_YCR_Val << ISC_SUB422_CFG_CCIRMODE_Pos) /**< (ISC_SUB422_CFG) Byte ordering Y0, Cr0, Y1, Cb0 Position  */
#define ISC_SUB422_CFG_FILTER_Pos             _U_(4)                                               /**< (ISC_SUB422_CFG) Low Pass Filter Selection Position */
#define ISC_SUB422_CFG_FILTER_Msk             (_U_(0x3) << ISC_SUB422_CFG_FILTER_Pos)              /**< (ISC_SUB422_CFG) Low Pass Filter Selection Mask */
#define ISC_SUB422_CFG_FILTER(value)          (ISC_SUB422_CFG_FILTER_Msk & ((value) << ISC_SUB422_CFG_FILTER_Pos))
#define   ISC_SUB422_CFG_FILTER_FILT0CO_Val   _U_(0x0)                                             /**< (ISC_SUB422_CFG) Cosited, {1}  */
#define   ISC_SUB422_CFG_FILTER_FILT1CE_Val   _U_(0x1)                                             /**< (ISC_SUB422_CFG) Centered {1, 1}  */
#define   ISC_SUB422_CFG_FILTER_FILT2CO_Val   _U_(0x2)                                             /**< (ISC_SUB422_CFG) Cosited {1,2,1}  */
#define   ISC_SUB422_CFG_FILTER_FILT3CE_Val   _U_(0x3)                                             /**< (ISC_SUB422_CFG) Centered {1, 3, 3, 1}  */
#define ISC_SUB422_CFG_FILTER_FILT0CO         (ISC_SUB422_CFG_FILTER_FILT0CO_Val << ISC_SUB422_CFG_FILTER_Pos) /**< (ISC_SUB422_CFG) Cosited, {1} Position  */
#define ISC_SUB422_CFG_FILTER_FILT1CE         (ISC_SUB422_CFG_FILTER_FILT1CE_Val << ISC_SUB422_CFG_FILTER_Pos) /**< (ISC_SUB422_CFG) Centered {1, 1} Position  */
#define ISC_SUB422_CFG_FILTER_FILT2CO         (ISC_SUB422_CFG_FILTER_FILT2CO_Val << ISC_SUB422_CFG_FILTER_Pos) /**< (ISC_SUB422_CFG) Cosited {1,2,1} Position  */
#define ISC_SUB422_CFG_FILTER_FILT3CE         (ISC_SUB422_CFG_FILTER_FILT3CE_Val << ISC_SUB422_CFG_FILTER_Pos) /**< (ISC_SUB422_CFG) Centered {1, 3, 3, 1} Position  */
#define ISC_SUB422_CFG_Msk                    _U_(0x00000037)                                      /**< (ISC_SUB422_CFG) Register Mask  */


/* -------- ISC_SUB420_CTRL : (ISC Offset: 0x4F0) (R/W 32) Subsampling 4:2:2 to 4:2:0 Control Register -------- */
#define ISC_SUB420_CTRL_RESETVALUE            _U_(0x00)                                            /**<  (ISC_SUB420_CTRL) Subsampling 4:2:2 to 4:2:0 Control Register  Reset Value */

#define ISC_SUB420_CTRL_ENABLE_Pos            _U_(0)                                               /**< (ISC_SUB420_CTRL) 4:2:2 to 4:2:0 Vertical Subsampling Filter Enable (Center Aligned) Position */
#define ISC_SUB420_CTRL_ENABLE_Msk            (_U_(0x1) << ISC_SUB420_CTRL_ENABLE_Pos)             /**< (ISC_SUB420_CTRL) 4:2:2 to 4:2:0 Vertical Subsampling Filter Enable (Center Aligned) Mask */
#define ISC_SUB420_CTRL_ENABLE(value)         (ISC_SUB420_CTRL_ENABLE_Msk & ((value) << ISC_SUB420_CTRL_ENABLE_Pos))
#define   ISC_SUB420_CTRL_ENABLE_0_Val        _U_(0x0)                                             /**< (ISC_SUB420_CTRL) Subsampler disabled.  */
#define   ISC_SUB420_CTRL_ENABLE_1_Val        _U_(0x1)                                             /**< (ISC_SUB420_CTRL) Subsampler enabled.  */
#define ISC_SUB420_CTRL_ENABLE_0              (ISC_SUB420_CTRL_ENABLE_0_Val << ISC_SUB420_CTRL_ENABLE_Pos) /**< (ISC_SUB420_CTRL) Subsampler disabled. Position  */
#define ISC_SUB420_CTRL_ENABLE_1              (ISC_SUB420_CTRL_ENABLE_1_Val << ISC_SUB420_CTRL_ENABLE_Pos) /**< (ISC_SUB420_CTRL) Subsampler enabled. Position  */
#define ISC_SUB420_CTRL_FILTER_Pos            _U_(4)                                               /**< (ISC_SUB420_CTRL) Interlaced or Progressive Chrominance Filter Position */
#define ISC_SUB420_CTRL_FILTER_Msk            (_U_(0x1) << ISC_SUB420_CTRL_FILTER_Pos)             /**< (ISC_SUB420_CTRL) Interlaced or Progressive Chrominance Filter Mask */
#define ISC_SUB420_CTRL_FILTER(value)         (ISC_SUB420_CTRL_FILTER_Msk & ((value) << ISC_SUB420_CTRL_FILTER_Pos))
#define   ISC_SUB420_CTRL_FILTER_0_Val        _U_(0x0)                                             /**< (ISC_SUB420_CTRL) Progressive filter {0.5, 0.5}.  */
#define   ISC_SUB420_CTRL_FILTER_1_Val        _U_(0x1)                                             /**< (ISC_SUB420_CTRL) Field-dependent filter, top field filter is {0.75, 0.25}, bottom field filter is {0.25, 0.75}.  */
#define ISC_SUB420_CTRL_FILTER_0              (ISC_SUB420_CTRL_FILTER_0_Val << ISC_SUB420_CTRL_FILTER_Pos) /**< (ISC_SUB420_CTRL) Progressive filter {0.5, 0.5}. Position  */
#define ISC_SUB420_CTRL_FILTER_1              (ISC_SUB420_CTRL_FILTER_1_Val << ISC_SUB420_CTRL_FILTER_Pos) /**< (ISC_SUB420_CTRL) Field-dependent filter, top field filter is {0.75, 0.25}, bottom field filter is {0.25, 0.75}. Position  */
#define ISC_SUB420_CTRL_MIPI420_Pos           _U_(5)                                               /**< (ISC_SUB420_CTRL) MIPI YUV 420 8-bpp or 10-bpp Even Odd Splitter Position */
#define ISC_SUB420_CTRL_MIPI420_Msk           (_U_(0x1) << ISC_SUB420_CTRL_MIPI420_Pos)            /**< (ISC_SUB420_CTRL) MIPI YUV 420 8-bpp or 10-bpp Even Odd Splitter Mask */
#define ISC_SUB420_CTRL_MIPI420(value)        (ISC_SUB420_CTRL_MIPI420_Msk & ((value) << ISC_SUB420_CTRL_MIPI420_Pos))
#define   ISC_SUB420_CTRL_MIPI420_0_Val       _U_(0x0)                                             /**< (ISC_SUB420_CTRL) Normal mode.  */
#define   ISC_SUB420_CTRL_MIPI420_1_Val       _U_(0x1)                                             /**< (ISC_SUB420_CTRL) When the MIPI interface is selected and the source format is YUV 420 RMS (recommended memory storage), the sub420 submodule routes data lanes depending on the parity of the line received (odd or even).  */
#define ISC_SUB420_CTRL_MIPI420_0             (ISC_SUB420_CTRL_MIPI420_0_Val << ISC_SUB420_CTRL_MIPI420_Pos) /**< (ISC_SUB420_CTRL) Normal mode. Position  */
#define ISC_SUB420_CTRL_MIPI420_1             (ISC_SUB420_CTRL_MIPI420_1_Val << ISC_SUB420_CTRL_MIPI420_Pos) /**< (ISC_SUB420_CTRL) When the MIPI interface is selected and the source format is YUV 420 RMS (recommended memory storage), the sub420 submodule routes data lanes depending on the parity of the line received (odd or even). Position  */
#define ISC_SUB420_CTRL_Msk                   _U_(0x00000031)                                      /**< (ISC_SUB420_CTRL) Register Mask  */

#define ISC_SUB420_CTRL_MIPI_Pos              _U_(5)                                               /**< (ISC_SUB420_CTRL Position) MIPI YUV 42x 8-bpp or xx-bpp Even Odd Splitter */
#define ISC_SUB420_CTRL_MIPI_Msk              (_U_(0x1) << ISC_SUB420_CTRL_MIPI_Pos)               /**< (ISC_SUB420_CTRL Mask) MIPI */
#define ISC_SUB420_CTRL_MIPI(value)           (ISC_SUB420_CTRL_MIPI_Msk & ((value) << ISC_SUB420_CTRL_MIPI_Pos)) 

/* -------- ISC_RLP_CFG : (ISC Offset: 0x4F4) (R/W 32) Rounding, Limiting and Packing Configuration Register -------- */
#define ISC_RLP_CFG_RESETVALUE                _U_(0x00)                                            /**<  (ISC_RLP_CFG) Rounding, Limiting and Packing Configuration Register  Reset Value */

#define ISC_RLP_CFG_MODE_Pos                  _U_(0)                                               /**< (ISC_RLP_CFG) Rounding, Limiting and Packing Mode Position */
#define ISC_RLP_CFG_MODE_Msk                  (_U_(0xF) << ISC_RLP_CFG_MODE_Pos)                   /**< (ISC_RLP_CFG) Rounding, Limiting and Packing Mode Mask */
#define ISC_RLP_CFG_MODE(value)               (ISC_RLP_CFG_MODE_Msk & ((value) << ISC_RLP_CFG_MODE_Pos))
#define   ISC_RLP_CFG_MODE_DAT8_Val           _U_(0x0)                                             /**< (ISC_RLP_CFG) 8-bit data  */
#define   ISC_RLP_CFG_MODE_DAT9_Val           _U_(0x1)                                             /**< (ISC_RLP_CFG) 9-bit data  */
#define   ISC_RLP_CFG_MODE_DAT10_Val          _U_(0x2)                                             /**< (ISC_RLP_CFG) 10-bit data  */
#define   ISC_RLP_CFG_MODE_DAT11_Val          _U_(0x3)                                             /**< (ISC_RLP_CFG) 11-bit data  */
#define   ISC_RLP_CFG_MODE_DAT12_Val          _U_(0x4)                                             /**< (ISC_RLP_CFG) 12-bit data  */
#define   ISC_RLP_CFG_MODE_DATY8_Val          _U_(0x5)                                             /**< (ISC_RLP_CFG) 8-bit luminance only  */
#define   ISC_RLP_CFG_MODE_DATY10_Val         _U_(0x6)                                             /**< (ISC_RLP_CFG) 10-bit luminance only  */
#define   ISC_RLP_CFG_MODE_ARGB444_Val        _U_(0x7)                                             /**< (ISC_RLP_CFG) 12-bit RGB+4-bit Alpha (MSB)  */
#define   ISC_RLP_CFG_MODE_ARGB555_Val        _U_(0x8)                                             /**< (ISC_RLP_CFG) 15-bit RGB+1-bit Alpha (MSB)  */
#define   ISC_RLP_CFG_MODE_RGB565_Val         _U_(0x9)                                             /**< (ISC_RLP_CFG) 16-bit RGB  */
#define   ISC_RLP_CFG_MODE_ARGB32_Val         _U_(0xA)                                             /**< (ISC_RLP_CFG) 24-bits RGB mode+8-bit Alpha  */
#define   ISC_RLP_CFG_MODE_YYCC_Val           _U_(0xB)                                             /**< (ISC_RLP_CFG) YCbCr mode (full range, [0-255])  */
#define   ISC_RLP_CFG_MODE_YYCC_LIMITED_Val   _U_(0xC)                                             /**< (ISC_RLP_CFG) YCbCr mode (limited range)  */
#define   ISC_RLP_CFG_MODE_YCYC_Val           _U_(0xD)                                             /**< (ISC_RLP_CFG) Y(n+1)CbY(n)Cr 422 interleaved full range per component 8-bit [0-255]  */
#define   ISC_RLP_CFG_MODE_YCYC_LIMITED_Val   _U_(0xE)                                             /**< (ISC_RLP_CFG) Y(n+1)CbY(n)Cr 422 interleaved limited range per component 8-bit  */
#define   ISC_RLP_CFG_MODE_BYPASS_Val         _U_(0xF)                                             /**< (ISC_RLP_CFG) 32-bit input is sampled and written to the rlp output port. Select this mode for MIPI RMS mode.  */
#define ISC_RLP_CFG_MODE_DAT8                 (ISC_RLP_CFG_MODE_DAT8_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 8-bit data Position  */
#define ISC_RLP_CFG_MODE_DAT9                 (ISC_RLP_CFG_MODE_DAT9_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) 9-bit data Position  */
#define ISC_RLP_CFG_MODE_DAT10                (ISC_RLP_CFG_MODE_DAT10_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 10-bit data Position  */
#define ISC_RLP_CFG_MODE_DAT11                (ISC_RLP_CFG_MODE_DAT11_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 11-bit data Position  */
#define ISC_RLP_CFG_MODE_DAT12                (ISC_RLP_CFG_MODE_DAT12_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 12-bit data Position  */
#define ISC_RLP_CFG_MODE_DATY8                (ISC_RLP_CFG_MODE_DATY8_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 8-bit luminance only Position  */
#define ISC_RLP_CFG_MODE_DATY10               (ISC_RLP_CFG_MODE_DATY10_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 10-bit luminance only Position  */
#define ISC_RLP_CFG_MODE_ARGB444              (ISC_RLP_CFG_MODE_ARGB444_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 12-bit RGB+4-bit Alpha (MSB) Position  */
#define ISC_RLP_CFG_MODE_ARGB555              (ISC_RLP_CFG_MODE_ARGB555_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 15-bit RGB+1-bit Alpha (MSB) Position  */
#define ISC_RLP_CFG_MODE_RGB565               (ISC_RLP_CFG_MODE_RGB565_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 16-bit RGB Position  */
#define ISC_RLP_CFG_MODE_ARGB32               (ISC_RLP_CFG_MODE_ARGB32_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 24-bits RGB mode+8-bit Alpha Position  */
#define ISC_RLP_CFG_MODE_YYCC                 (ISC_RLP_CFG_MODE_YYCC_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) YCbCr mode (full range, [0-255]) Position  */
#define ISC_RLP_CFG_MODE_YYCC_LIMITED         (ISC_RLP_CFG_MODE_YYCC_LIMITED_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) YCbCr mode (limited range) Position  */
#define ISC_RLP_CFG_MODE_YCYC                 (ISC_RLP_CFG_MODE_YCYC_Val << ISC_RLP_CFG_MODE_Pos)  /**< (ISC_RLP_CFG) Y(n+1)CbY(n)Cr 422 interleaved full range per component 8-bit [0-255] Position  */
#define ISC_RLP_CFG_MODE_YCYC_LIMITED         (ISC_RLP_CFG_MODE_YCYC_LIMITED_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) Y(n+1)CbY(n)Cr 422 interleaved limited range per component 8-bit Position  */
#define ISC_RLP_CFG_MODE_BYPASS               (ISC_RLP_CFG_MODE_BYPASS_Val << ISC_RLP_CFG_MODE_Pos) /**< (ISC_RLP_CFG) 32-bit input is sampled and written to the rlp output port. Select this mode for MIPI RMS mode. Position  */
#define ISC_RLP_CFG_REP_Pos                   _U_(4)                                               /**< (ISC_RLP_CFG) Pixel Expansion with Replication Logic Position */
#define ISC_RLP_CFG_REP_Msk                   (_U_(0x1) << ISC_RLP_CFG_REP_Pos)                    /**< (ISC_RLP_CFG) Pixel Expansion with Replication Logic Mask */
#define ISC_RLP_CFG_REP(value)                (ISC_RLP_CFG_REP_Msk & ((value) << ISC_RLP_CFG_REP_Pos))
#define   ISC_RLP_CFG_REP_0_Val               _U_(0x0)                                             /**< (ISC_RLP_CFG) Replication is disabled.  */
#define   ISC_RLP_CFG_REP_1_Val               _U_(0x1)                                             /**< (ISC_RLP_CFG) Replication is enabled.  */
#define ISC_RLP_CFG_REP_0                     (ISC_RLP_CFG_REP_0_Val << ISC_RLP_CFG_REP_Pos)       /**< (ISC_RLP_CFG) Replication is disabled. Position  */
#define ISC_RLP_CFG_REP_1                     (ISC_RLP_CFG_REP_1_Val << ISC_RLP_CFG_REP_Pos)       /**< (ISC_RLP_CFG) Replication is enabled. Position  */
#define ISC_RLP_CFG_LSH_Pos                   _U_(5)                                               /**< (ISC_RLP_CFG) Logical Left Shift for Pixel to 16-bit Container Mapping Position */
#define ISC_RLP_CFG_LSH_Msk                   (_U_(0x1) << ISC_RLP_CFG_LSH_Pos)                    /**< (ISC_RLP_CFG) Logical Left Shift for Pixel to 16-bit Container Mapping Mask */
#define ISC_RLP_CFG_LSH(value)                (ISC_RLP_CFG_LSH_Msk & ((value) << ISC_RLP_CFG_LSH_Pos))
#define   ISC_RLP_CFG_LSH_0_Val               _U_(0x0)                                             /**< (ISC_RLP_CFG) Logical left shift is disabled.  */
#define   ISC_RLP_CFG_LSH_1_Val               _U_(0x1)                                             /**< (ISC_RLP_CFG) Pixel value is left-justified in a 16-bit container.  */
#define ISC_RLP_CFG_LSH_0                     (ISC_RLP_CFG_LSH_0_Val << ISC_RLP_CFG_LSH_Pos)       /**< (ISC_RLP_CFG) Logical left shift is disabled. Position  */
#define ISC_RLP_CFG_LSH_1                     (ISC_RLP_CFG_LSH_1_Val << ISC_RLP_CFG_LSH_Pos)       /**< (ISC_RLP_CFG) Pixel value is left-justified in a 16-bit container. Position  */
#define ISC_RLP_CFG_YMODE_Pos                 _U_(6)                                               /**< (ISC_RLP_CFG) YCbCr  Memory Mapping Configuration Mode Position */
#define ISC_RLP_CFG_YMODE_Msk                 (_U_(0x3) << ISC_RLP_CFG_YMODE_Pos)                  /**< (ISC_RLP_CFG) YCbCr  Memory Mapping Configuration Mode Mask */
#define ISC_RLP_CFG_YMODE(value)              (ISC_RLP_CFG_YMODE_Msk & ((value) << ISC_RLP_CFG_YMODE_Pos))
#define   ISC_RLP_CFG_YMODE_RLP_YCBYCR_Val    _U_(0x0)                                             /**< (ISC_RLP_CFG) Byte 0 is Cr, Byte 1 is Y(n), Byte 2 is Cb, Byte 3 is Y(n+1)  */
#define   ISC_RLP_CFG_YMODE_RLP_YCRYCB_Val    _U_(0x1)                                             /**< (ISC_RLP_CFG) Byte 0 is Cb, Byte 1 is Y(n), Byte 2 is Cb, Byte 3 is Y(n+1)  */
#define   ISC_RLP_CFG_YMODE_RLP_CBYCRY_Val    _U_(0x2)                                             /**< (ISC_RLP_CFG) Byte 0 is Y(n), Byte 1 is Cr, Byte 2 is Y(n+1), Byte 3 is Cb  */
#define   ISC_RLP_CFG_YMODE_RLP_CRYCBY_Val    _U_(0x3)                                             /**< (ISC_RLP_CFG) Byte 0 is Y (n), Byte 1 is Cb, Byte 2 is Y(n+1), Byte 3 is Cr  */
#define ISC_RLP_CFG_YMODE_RLP_YCBYCR          (ISC_RLP_CFG_YMODE_RLP_YCBYCR_Val << ISC_RLP_CFG_YMODE_Pos) /**< (ISC_RLP_CFG) Byte 0 is Cr, Byte 1 is Y(n), Byte 2 is Cb, Byte 3 is Y(n+1) Position  */
#define ISC_RLP_CFG_YMODE_RLP_YCRYCB          (ISC_RLP_CFG_YMODE_RLP_YCRYCB_Val << ISC_RLP_CFG_YMODE_Pos) /**< (ISC_RLP_CFG) Byte 0 is Cb, Byte 1 is Y(n), Byte 2 is Cb, Byte 3 is Y(n+1) Position  */
#define ISC_RLP_CFG_YMODE_RLP_CBYCRY          (ISC_RLP_CFG_YMODE_RLP_CBYCRY_Val << ISC_RLP_CFG_YMODE_Pos) /**< (ISC_RLP_CFG) Byte 0 is Y(n), Byte 1 is Cr, Byte 2 is Y(n+1), Byte 3 is Cb Position  */
#define ISC_RLP_CFG_YMODE_RLP_CRYCBY          (ISC_RLP_CFG_YMODE_RLP_CRYCBY_Val << ISC_RLP_CFG_YMODE_Pos) /**< (ISC_RLP_CFG) Byte 0 is Y (n), Byte 1 is Cb, Byte 2 is Y(n+1), Byte 3 is Cr Position  */
#define ISC_RLP_CFG_ALPHA_Pos                 _U_(8)                                               /**< (ISC_RLP_CFG) Alpha Value for Alpha-enabled RGB Mode Position */
#define ISC_RLP_CFG_ALPHA_Msk                 (_U_(0xFF) << ISC_RLP_CFG_ALPHA_Pos)                 /**< (ISC_RLP_CFG) Alpha Value for Alpha-enabled RGB Mode Mask */
#define ISC_RLP_CFG_ALPHA(value)              (ISC_RLP_CFG_ALPHA_Msk & ((value) << ISC_RLP_CFG_ALPHA_Pos))
#define ISC_RLP_CFG_Msk                       _U_(0x0000FFFF)                                      /**< (ISC_RLP_CFG) Register Mask  */


/* -------- ISC_HIS_CTRL : (ISC Offset: 0x4F8) (R/W 32) Histogram Control Register -------- */
#define ISC_HIS_CTRL_RESETVALUE               _U_(0x00)                                            /**<  (ISC_HIS_CTRL) Histogram Control Register  Reset Value */

#define ISC_HIS_CTRL_ENABLE_Pos               _U_(0)                                               /**< (ISC_HIS_CTRL) Histogram Sub Module Enable Position */
#define ISC_HIS_CTRL_ENABLE_Msk               (_U_(0x1) << ISC_HIS_CTRL_ENABLE_Pos)                /**< (ISC_HIS_CTRL) Histogram Sub Module Enable Mask */
#define ISC_HIS_CTRL_ENABLE(value)            (ISC_HIS_CTRL_ENABLE_Msk & ((value) << ISC_HIS_CTRL_ENABLE_Pos))
#define   ISC_HIS_CTRL_ENABLE_0_Val           _U_(0x0)                                             /**< (ISC_HIS_CTRL) Histogram disabled.  */
#define   ISC_HIS_CTRL_ENABLE_1_Val           _U_(0x1)                                             /**< (ISC_HIS_CTRL) Histogram enabled.  */
#define ISC_HIS_CTRL_ENABLE_0                 (ISC_HIS_CTRL_ENABLE_0_Val << ISC_HIS_CTRL_ENABLE_Pos) /**< (ISC_HIS_CTRL) Histogram disabled. Position  */
#define ISC_HIS_CTRL_ENABLE_1                 (ISC_HIS_CTRL_ENABLE_1_Val << ISC_HIS_CTRL_ENABLE_Pos) /**< (ISC_HIS_CTRL) Histogram enabled. Position  */
#define ISC_HIS_CTRL_Msk                      _U_(0x00000001)                                      /**< (ISC_HIS_CTRL) Register Mask  */


/* -------- ISC_HIS_CFG : (ISC Offset: 0x4FC) (R/W 32) Histogram Configuration Register -------- */
#define ISC_HIS_CFG_RESETVALUE                _U_(0x00)                                            /**<  (ISC_HIS_CFG) Histogram Configuration Register  Reset Value */

#define ISC_HIS_CFG_MODE_Pos                  _U_(0)                                               /**< (ISC_HIS_CFG) Histogram Operating Mode Position */
#define ISC_HIS_CFG_MODE_Msk                  (_U_(0x7) << ISC_HIS_CFG_MODE_Pos)                   /**< (ISC_HIS_CFG) Histogram Operating Mode Mask */
#define ISC_HIS_CFG_MODE(value)               (ISC_HIS_CFG_MODE_Msk & ((value) << ISC_HIS_CFG_MODE_Pos))
#define   ISC_HIS_CFG_MODE_GR_Val             _U_(0x0)                                             /**< (ISC_HIS_CFG) Gr sampling  */
#define   ISC_HIS_CFG_MODE_R_Val              _U_(0x1)                                             /**< (ISC_HIS_CFG) R sampling  */
#define   ISC_HIS_CFG_MODE_GB_Val             _U_(0x2)                                             /**< (ISC_HIS_CFG) Gb sampling  */
#define   ISC_HIS_CFG_MODE_B_Val              _U_(0x3)                                             /**< (ISC_HIS_CFG) B sampling  */
#define   ISC_HIS_CFG_MODE_Y_Val              _U_(0x4)                                             /**< (ISC_HIS_CFG) Luminance-only mode  */
#define   ISC_HIS_CFG_MODE_RAW_Val            _U_(0x5)                                             /**< (ISC_HIS_CFG) Raw sampling  */
#define   ISC_HIS_CFG_MODE_YCCIR656_Val       _U_(0x6)                                             /**< (ISC_HIS_CFG) Luminance only with CCIR656 10-bit or 8-bit mode  */
#define ISC_HIS_CFG_MODE_GR                   (ISC_HIS_CFG_MODE_GR_Val << ISC_HIS_CFG_MODE_Pos)    /**< (ISC_HIS_CFG) Gr sampling Position  */
#define ISC_HIS_CFG_MODE_R                    (ISC_HIS_CFG_MODE_R_Val << ISC_HIS_CFG_MODE_Pos)     /**< (ISC_HIS_CFG) R sampling Position  */
#define ISC_HIS_CFG_MODE_GB                   (ISC_HIS_CFG_MODE_GB_Val << ISC_HIS_CFG_MODE_Pos)    /**< (ISC_HIS_CFG) Gb sampling Position  */
#define ISC_HIS_CFG_MODE_B                    (ISC_HIS_CFG_MODE_B_Val << ISC_HIS_CFG_MODE_Pos)     /**< (ISC_HIS_CFG) B sampling Position  */
#define ISC_HIS_CFG_MODE_Y                    (ISC_HIS_CFG_MODE_Y_Val << ISC_HIS_CFG_MODE_Pos)     /**< (ISC_HIS_CFG) Luminance-only mode Position  */
#define ISC_HIS_CFG_MODE_RAW                  (ISC_HIS_CFG_MODE_RAW_Val << ISC_HIS_CFG_MODE_Pos)   /**< (ISC_HIS_CFG) Raw sampling Position  */
#define ISC_HIS_CFG_MODE_YCCIR656             (ISC_HIS_CFG_MODE_YCCIR656_Val << ISC_HIS_CFG_MODE_Pos) /**< (ISC_HIS_CFG) Luminance only with CCIR656 10-bit or 8-bit mode Position  */
#define ISC_HIS_CFG_BAYSEL_Pos                _U_(4)                                               /**< (ISC_HIS_CFG) Bayer Color Component Selection Position */
#define ISC_HIS_CFG_BAYSEL_Msk                (_U_(0x3) << ISC_HIS_CFG_BAYSEL_Pos)                 /**< (ISC_HIS_CFG) Bayer Color Component Selection Mask */
#define ISC_HIS_CFG_BAYSEL(value)             (ISC_HIS_CFG_BAYSEL_Msk & ((value) << ISC_HIS_CFG_BAYSEL_Pos))
#define   ISC_HIS_CFG_BAYSEL_GRGR_Val         _U_(0x0)                                             /**< (ISC_HIS_CFG) Starting row configuration is G R G R (red row)  */
#define   ISC_HIS_CFG_BAYSEL_RGRG_Val         _U_(0x1)                                             /**< (ISC_HIS_CFG) Starting row configuration is R G R G (red row)  */
#define   ISC_HIS_CFG_BAYSEL_GBGB_Val         _U_(0x2)                                             /**< (ISC_HIS_CFG) Starting row configuration is G B G B (blue row  */
#define   ISC_HIS_CFG_BAYSEL_BGBG_Val         _U_(0x3)                                             /**< (ISC_HIS_CFG) Starting row configuration is B G B G (blue row)  */
#define ISC_HIS_CFG_BAYSEL_GRGR               (ISC_HIS_CFG_BAYSEL_GRGR_Val << ISC_HIS_CFG_BAYSEL_Pos) /**< (ISC_HIS_CFG) Starting row configuration is G R G R (red row) Position  */
#define ISC_HIS_CFG_BAYSEL_RGRG               (ISC_HIS_CFG_BAYSEL_RGRG_Val << ISC_HIS_CFG_BAYSEL_Pos) /**< (ISC_HIS_CFG) Starting row configuration is R G R G (red row) Position  */
#define ISC_HIS_CFG_BAYSEL_GBGB               (ISC_HIS_CFG_BAYSEL_GBGB_Val << ISC_HIS_CFG_BAYSEL_Pos) /**< (ISC_HIS_CFG) Starting row configuration is G B G B (blue row Position  */
#define ISC_HIS_CFG_BAYSEL_BGBG               (ISC_HIS_CFG_BAYSEL_BGBG_Val << ISC_HIS_CFG_BAYSEL_Pos) /**< (ISC_HIS_CFG) Starting row configuration is B G B G (blue row) Position  */
#define ISC_HIS_CFG_RAR_Pos                   _U_(8)                                               /**< (ISC_HIS_CFG) Histogram Reset After Read Position */
#define ISC_HIS_CFG_RAR_Msk                   (_U_(0x1) << ISC_HIS_CFG_RAR_Pos)                    /**< (ISC_HIS_CFG) Histogram Reset After Read Mask */
#define ISC_HIS_CFG_RAR(value)                (ISC_HIS_CFG_RAR_Msk & ((value) << ISC_HIS_CFG_RAR_Pos))
#define   ISC_HIS_CFG_RAR_0_Val               _U_(0x0)                                             /**< (ISC_HIS_CFG) Reset after read mode is disabled.  */
#define   ISC_HIS_CFG_RAR_1_Val               _U_(0x1)                                             /**< (ISC_HIS_CFG) Reset after read mode is enabled.  */
#define ISC_HIS_CFG_RAR_0                     (ISC_HIS_CFG_RAR_0_Val << ISC_HIS_CFG_RAR_Pos)       /**< (ISC_HIS_CFG) Reset after read mode is disabled. Position  */
#define ISC_HIS_CFG_RAR_1                     (ISC_HIS_CFG_RAR_1_Val << ISC_HIS_CFG_RAR_Pos)       /**< (ISC_HIS_CFG) Reset after read mode is enabled. Position  */
#define ISC_HIS_CFG_Msk                       _U_(0x00000137)                                      /**< (ISC_HIS_CFG) Register Mask  */


/* -------- ISC_DCFG : (ISC Offset: 0x51C) (R/W 32) DMA Configuration Register -------- */
#define ISC_DCFG_RESETVALUE                   _U_(0x00)                                            /**<  (ISC_DCFG) DMA Configuration Register  Reset Value */

#define ISC_DCFG_IMODE_Pos                    _U_(0)                                               /**< (ISC_DCFG) DMA Input Mode Selection Position */
#define ISC_DCFG_IMODE_Msk                    (_U_(0x7) << ISC_DCFG_IMODE_Pos)                     /**< (ISC_DCFG) DMA Input Mode Selection Mask */
#define ISC_DCFG_IMODE(value)                 (ISC_DCFG_IMODE_Msk & ((value) << ISC_DCFG_IMODE_Pos))
#define   ISC_DCFG_IMODE_PACKED8_Val          _U_(0x0)                                             /**< (ISC_DCFG) 8 bits, single channel packed  */
#define   ISC_DCFG_IMODE_PACKED16_Val         _U_(0x1)                                             /**< (ISC_DCFG) 16 bits, single channel packed  */
#define   ISC_DCFG_IMODE_PACKED32_Val         _U_(0x2)                                             /**< (ISC_DCFG) 32 bits, single channel packed  */
#define   ISC_DCFG_IMODE_YC422SP_Val          _U_(0x3)                                             /**< (ISC_DCFG) 32 bits, dual channel  */
#define   ISC_DCFG_IMODE_YC422P_Val           _U_(0x4)                                             /**< (ISC_DCFG) 32 bits, triple channel  */
#define   ISC_DCFG_IMODE_YC420SP_Val          _U_(0x5)                                             /**< (ISC_DCFG) 32 bits, dual channel  */
#define   ISC_DCFG_IMODE_YC420P_Val           _U_(0x6)                                             /**< (ISC_DCFG) 32 bits, triple channel  */
#define ISC_DCFG_IMODE_PACKED8                (ISC_DCFG_IMODE_PACKED8_Val << ISC_DCFG_IMODE_Pos)   /**< (ISC_DCFG) 8 bits, single channel packed Position  */
#define ISC_DCFG_IMODE_PACKED16               (ISC_DCFG_IMODE_PACKED16_Val << ISC_DCFG_IMODE_Pos)  /**< (ISC_DCFG) 16 bits, single channel packed Position  */
#define ISC_DCFG_IMODE_PACKED32               (ISC_DCFG_IMODE_PACKED32_Val << ISC_DCFG_IMODE_Pos)  /**< (ISC_DCFG) 32 bits, single channel packed Position  */
#define ISC_DCFG_IMODE_YC422SP                (ISC_DCFG_IMODE_YC422SP_Val << ISC_DCFG_IMODE_Pos)   /**< (ISC_DCFG) 32 bits, dual channel Position  */
#define ISC_DCFG_IMODE_YC422P                 (ISC_DCFG_IMODE_YC422P_Val << ISC_DCFG_IMODE_Pos)    /**< (ISC_DCFG) 32 bits, triple channel Position  */
#define ISC_DCFG_IMODE_YC420SP                (ISC_DCFG_IMODE_YC420SP_Val << ISC_DCFG_IMODE_Pos)   /**< (ISC_DCFG) 32 bits, dual channel Position  */
#define ISC_DCFG_IMODE_YC420P                 (ISC_DCFG_IMODE_YC420P_Val << ISC_DCFG_IMODE_Pos)    /**< (ISC_DCFG) 32 bits, triple channel Position  */
#define ISC_DCFG_YMBSIZE_Pos                  _U_(4)                                               /**< (ISC_DCFG) DMA Memory Burst Size Y channel Position */
#define ISC_DCFG_YMBSIZE_Msk                  (_U_(0x7) << ISC_DCFG_YMBSIZE_Pos)                   /**< (ISC_DCFG) DMA Memory Burst Size Y channel Mask */
#define ISC_DCFG_YMBSIZE(value)               (ISC_DCFG_YMBSIZE_Msk & ((value) << ISC_DCFG_YMBSIZE_Pos))
#define   ISC_DCFG_YMBSIZE_SINGLE_Val         _U_(0x0)                                             /**< (ISC_DCFG) DMA single access  */
#define   ISC_DCFG_YMBSIZE_BEATS4_Val         _U_(0x1)                                             /**< (ISC_DCFG) 4-beat burst access  */
#define   ISC_DCFG_YMBSIZE_BEATS8_Val         _U_(0x2)                                             /**< (ISC_DCFG) 8-beat burst access  */
#define   ISC_DCFG_YMBSIZE_BEATS16_Val        _U_(0x3)                                             /**< (ISC_DCFG) 16-beat burst access  */
#define   ISC_DCFG_YMBSIZE_BEATS32_Val        _U_(0x4)                                             /**< (ISC_DCFG) 32-beat burst access  */
#define ISC_DCFG_YMBSIZE_SINGLE               (ISC_DCFG_YMBSIZE_SINGLE_Val << ISC_DCFG_YMBSIZE_Pos) /**< (ISC_DCFG) DMA single access Position  */
#define ISC_DCFG_YMBSIZE_BEATS4               (ISC_DCFG_YMBSIZE_BEATS4_Val << ISC_DCFG_YMBSIZE_Pos) /**< (ISC_DCFG) 4-beat burst access Position  */
#define ISC_DCFG_YMBSIZE_BEATS8               (ISC_DCFG_YMBSIZE_BEATS8_Val << ISC_DCFG_YMBSIZE_Pos) /**< (ISC_DCFG) 8-beat burst access Position  */
#define ISC_DCFG_YMBSIZE_BEATS16              (ISC_DCFG_YMBSIZE_BEATS16_Val << ISC_DCFG_YMBSIZE_Pos) /**< (ISC_DCFG) 16-beat burst access Position  */
#define ISC_DCFG_YMBSIZE_BEATS32              (ISC_DCFG_YMBSIZE_BEATS32_Val << ISC_DCFG_YMBSIZE_Pos) /**< (ISC_DCFG) 32-beat burst access Position  */
#define ISC_DCFG_CMBSIZE_Pos                  _U_(8)                                               /**< (ISC_DCFG) DMA Memory Burst Size C channel Position */
#define ISC_DCFG_CMBSIZE_Msk                  (_U_(0x7) << ISC_DCFG_CMBSIZE_Pos)                   /**< (ISC_DCFG) DMA Memory Burst Size C channel Mask */
#define ISC_DCFG_CMBSIZE(value)               (ISC_DCFG_CMBSIZE_Msk & ((value) << ISC_DCFG_CMBSIZE_Pos))
#define   ISC_DCFG_CMBSIZE_SINGLE_Val         _U_(0x0)                                             /**< (ISC_DCFG) DMA single access  */
#define   ISC_DCFG_CMBSIZE_BEATS4_Val         _U_(0x1)                                             /**< (ISC_DCFG) 4-beat burst access  */
#define   ISC_DCFG_CMBSIZE_BEATS8_Val         _U_(0x2)                                             /**< (ISC_DCFG) 8-beat burst access  */
#define   ISC_DCFG_CMBSIZE_BEATS16_Val        _U_(0x3)                                             /**< (ISC_DCFG) 16-beat burst access  */
#define   ISC_DCFG_CMBSIZE_BEATS32_Val        _U_(0x4)                                             /**< (ISC_DCFG) 32-beat burst access  */
#define ISC_DCFG_CMBSIZE_SINGLE               (ISC_DCFG_CMBSIZE_SINGLE_Val << ISC_DCFG_CMBSIZE_Pos) /**< (ISC_DCFG) DMA single access Position  */
#define ISC_DCFG_CMBSIZE_BEATS4               (ISC_DCFG_CMBSIZE_BEATS4_Val << ISC_DCFG_CMBSIZE_Pos) /**< (ISC_DCFG) 4-beat burst access Position  */
#define ISC_DCFG_CMBSIZE_BEATS8               (ISC_DCFG_CMBSIZE_BEATS8_Val << ISC_DCFG_CMBSIZE_Pos) /**< (ISC_DCFG) 8-beat burst access Position  */
#define ISC_DCFG_CMBSIZE_BEATS16              (ISC_DCFG_CMBSIZE_BEATS16_Val << ISC_DCFG_CMBSIZE_Pos) /**< (ISC_DCFG) 16-beat burst access Position  */
#define ISC_DCFG_CMBSIZE_BEATS32              (ISC_DCFG_CMBSIZE_BEATS32_Val << ISC_DCFG_CMBSIZE_Pos) /**< (ISC_DCFG) 32-beat burst access Position  */
#define ISC_DCFG_ARQOS_Pos                    _U_(16)                                              /**< (ISC_DCFG) Read QoS Value Position */
#define ISC_DCFG_ARQOS_Msk                    (_U_(0xF) << ISC_DCFG_ARQOS_Pos)                     /**< (ISC_DCFG) Read QoS Value Mask */
#define ISC_DCFG_ARQOS(value)                 (ISC_DCFG_ARQOS_Msk & ((value) << ISC_DCFG_ARQOS_Pos))
#define ISC_DCFG_AWQOS_Pos                    _U_(20)                                              /**< (ISC_DCFG) Write QoS Value Position */
#define ISC_DCFG_AWQOS_Msk                    (_U_(0xF) << ISC_DCFG_AWQOS_Pos)                     /**< (ISC_DCFG) Write QoS Value Mask */
#define ISC_DCFG_AWQOS(value)                 (ISC_DCFG_AWQOS_Msk & ((value) << ISC_DCFG_AWQOS_Pos))
#define ISC_DCFG_Msk                          _U_(0x00FF0777)                                      /**< (ISC_DCFG) Register Mask  */


/* -------- ISC_DCTRL : (ISC Offset: 0x520) (R/W 32) DMA Control Register -------- */
#define ISC_DCTRL_RESETVALUE                  _U_(0x00)                                            /**<  (ISC_DCTRL) DMA Control Register  Reset Value */

#define ISC_DCTRL_DE_Pos                      _U_(0)                                               /**< (ISC_DCTRL) Descriptor Enable Position */
#define ISC_DCTRL_DE_Msk                      (_U_(0x1) << ISC_DCTRL_DE_Pos)                       /**< (ISC_DCTRL) Descriptor Enable Mask */
#define ISC_DCTRL_DE(value)                   (ISC_DCTRL_DE_Msk & ((value) << ISC_DCTRL_DE_Pos))  
#define   ISC_DCTRL_DE_0_Val                  _U_(0x0)                                             /**< (ISC_DCTRL) Descriptor disabled.  */
#define   ISC_DCTRL_DE_1_Val                  _U_(0x1)                                             /**< (ISC_DCTRL) Descriptor enabled.  */
#define ISC_DCTRL_DE_0                        (ISC_DCTRL_DE_0_Val << ISC_DCTRL_DE_Pos)             /**< (ISC_DCTRL) Descriptor disabled. Position  */
#define ISC_DCTRL_DE_1                        (ISC_DCTRL_DE_1_Val << ISC_DCTRL_DE_Pos)             /**< (ISC_DCTRL) Descriptor enabled. Position  */
#define ISC_DCTRL_DVIEW_Pos                   _U_(1)                                               /**< (ISC_DCTRL) Descriptor View Position */
#define ISC_DCTRL_DVIEW_Msk                   (_U_(0x3) << ISC_DCTRL_DVIEW_Pos)                    /**< (ISC_DCTRL) Descriptor View Mask */
#define ISC_DCTRL_DVIEW(value)                (ISC_DCTRL_DVIEW_Msk & ((value) << ISC_DCTRL_DVIEW_Pos))
#define   ISC_DCTRL_DVIEW_PACKED_Val          _U_(0x0)                                             /**< (ISC_DCTRL) Address {0} Stride {0} are updated  */
#define   ISC_DCTRL_DVIEW_SEMIPLANAR_Val      _U_(0x1)                                             /**< (ISC_DCTRL) Address {0,1} Stride {0,1} are updated  */
#define   ISC_DCTRL_DVIEW_PLANAR_Val          _U_(0x2)                                             /**< (ISC_DCTRL) Address {0,1,2} Stride {0,1,2} are updated  */
#define ISC_DCTRL_DVIEW_PACKED                (ISC_DCTRL_DVIEW_PACKED_Val << ISC_DCTRL_DVIEW_Pos)  /**< (ISC_DCTRL) Address {0} Stride {0} are updated Position  */
#define ISC_DCTRL_DVIEW_SEMIPLANAR            (ISC_DCTRL_DVIEW_SEMIPLANAR_Val << ISC_DCTRL_DVIEW_Pos) /**< (ISC_DCTRL) Address {0,1} Stride {0,1} are updated Position  */
#define ISC_DCTRL_DVIEW_PLANAR                (ISC_DCTRL_DVIEW_PLANAR_Val << ISC_DCTRL_DVIEW_Pos)  /**< (ISC_DCTRL) Address {0,1,2} Stride {0,1,2} are updated Position  */
#define ISC_DCTRL_IE_Pos                      _U_(4)                                               /**< (ISC_DCTRL) Interrupt Enable Position */
#define ISC_DCTRL_IE_Msk                      (_U_(0x1) << ISC_DCTRL_IE_Pos)                       /**< (ISC_DCTRL) Interrupt Enable Mask */
#define ISC_DCTRL_IE(value)                   (ISC_DCTRL_IE_Msk & ((value) << ISC_DCTRL_IE_Pos))  
#define   ISC_DCTRL_IE_0_Val                  _U_(0x0)                                             /**< (ISC_DCTRL) DMA Done interrupt is generated.  */
#define   ISC_DCTRL_IE_1_Val                  _U_(0x1)                                             /**< (ISC_DCTRL) DMA Done interrupt is not set.  */
#define ISC_DCTRL_IE_0                        (ISC_DCTRL_IE_0_Val << ISC_DCTRL_IE_Pos)             /**< (ISC_DCTRL) DMA Done interrupt is generated. Position  */
#define ISC_DCTRL_IE_1                        (ISC_DCTRL_IE_1_Val << ISC_DCTRL_IE_Pos)             /**< (ISC_DCTRL) DMA Done interrupt is not set. Position  */
#define ISC_DCTRL_WB_Pos                      _U_(5)                                               /**< (ISC_DCTRL) Write Back Operation Enable Position */
#define ISC_DCTRL_WB_Msk                      (_U_(0x1) << ISC_DCTRL_WB_Pos)                       /**< (ISC_DCTRL) Write Back Operation Enable Mask */
#define ISC_DCTRL_WB(value)                   (ISC_DCTRL_WB_Msk & ((value) << ISC_DCTRL_WB_Pos))  
#define   ISC_DCTRL_WB_0_Val                  _U_(0x0)                                             /**< (ISC_DCTRL) Write Back operation is skipped.  */
#define   ISC_DCTRL_WB_1_Val                  _U_(0x1)                                             /**< (ISC_DCTRL) Write Back operation is performed.  */
#define ISC_DCTRL_WB_0                        (ISC_DCTRL_WB_0_Val << ISC_DCTRL_WB_Pos)             /**< (ISC_DCTRL) Write Back operation is skipped. Position  */
#define ISC_DCTRL_WB_1                        (ISC_DCTRL_WB_1_Val << ISC_DCTRL_WB_Pos)             /**< (ISC_DCTRL) Write Back operation is performed. Position  */
#define ISC_DCTRL_FIELD_Pos                   _U_(6)                                               /**< (ISC_DCTRL) Value of Captured Frame Field Signal Position */
#define ISC_DCTRL_FIELD_Msk                   (_U_(0x1) << ISC_DCTRL_FIELD_Pos)                    /**< (ISC_DCTRL) Value of Captured Frame Field Signal Mask */
#define ISC_DCTRL_FIELD(value)                (ISC_DCTRL_FIELD_Msk & ((value) << ISC_DCTRL_FIELD_Pos))
#define   ISC_DCTRL_FIELD_0_Val               _U_(0x0)                                             /**< (ISC_DCTRL) Field value is 0.  */
#define   ISC_DCTRL_FIELD_1_Val               _U_(0x1)                                             /**< (ISC_DCTRL) Field value is 1.  */
#define ISC_DCTRL_FIELD_0                     (ISC_DCTRL_FIELD_0_Val << ISC_DCTRL_FIELD_Pos)       /**< (ISC_DCTRL) Field value is 0. Position  */
#define ISC_DCTRL_FIELD_1                     (ISC_DCTRL_FIELD_1_Val << ISC_DCTRL_FIELD_Pos)       /**< (ISC_DCTRL) Field value is 1. Position  */
#define ISC_DCTRL_DONE_Pos                    _U_(7)                                               /**< (ISC_DCTRL) Descriptor Processing Status Position */
#define ISC_DCTRL_DONE_Msk                    (_U_(0x1) << ISC_DCTRL_DONE_Pos)                     /**< (ISC_DCTRL) Descriptor Processing Status Mask */
#define ISC_DCTRL_DONE(value)                 (ISC_DCTRL_DONE_Msk & ((value) << ISC_DCTRL_DONE_Pos))
#define   ISC_DCTRL_DONE_0_Val                _U_(0x0)                                             /**< (ISC_DCTRL) Descriptor not processed yet.  */
#define   ISC_DCTRL_DONE_1_Val                _U_(0x1)                                             /**< (ISC_DCTRL) Descriptor processed.  */
#define ISC_DCTRL_DONE_0                      (ISC_DCTRL_DONE_0_Val << ISC_DCTRL_DONE_Pos)         /**< (ISC_DCTRL) Descriptor not processed yet. Position  */
#define ISC_DCTRL_DONE_1                      (ISC_DCTRL_DONE_1_Val << ISC_DCTRL_DONE_Pos)         /**< (ISC_DCTRL) Descriptor processed. Position  */
#define ISC_DCTRL_Msk                         _U_(0x000000F7)                                      /**< (ISC_DCTRL) Register Mask  */


/* -------- ISC_DNDA : (ISC Offset: 0x524) (R/W 32) DMA Descriptor Address Register -------- */
#define ISC_DNDA_RESETVALUE                   _U_(0x00)                                            /**<  (ISC_DNDA) DMA Descriptor Address Register  Reset Value */

#define ISC_DNDA_NDA_Pos                      _U_(2)                                               /**< (ISC_DNDA) Next Descriptor Address Register Position */
#define ISC_DNDA_NDA_Msk                      (_U_(0x3FFFFFFF) << ISC_DNDA_NDA_Pos)                /**< (ISC_DNDA) Next Descriptor Address Register Mask */
#define ISC_DNDA_NDA(value)                   (ISC_DNDA_NDA_Msk & ((value) << ISC_DNDA_NDA_Pos))  
#define ISC_DNDA_Msk                          _U_(0xFFFFFFFC)                                      /**< (ISC_DNDA) Register Mask  */


/* -------- ISC_DAD0 : (ISC Offset: 0x528) (R/W 32) DMA Address 0 Register -------- */
#define ISC_DAD0_RESETVALUE                   _U_(0x00)                                            /**<  (ISC_DAD0) DMA Address 0 Register  Reset Value */

#define ISC_DAD0_AD0_Pos                      _U_(0)                                               /**< (ISC_DAD0) Channel 0 Address Position */
#define ISC_DAD0_AD0_Msk                      (_U_(0xFFFFFFFF) << ISC_DAD0_AD0_Pos)                /**< (ISC_DAD0) Channel 0 Address Mask */
#define ISC_DAD0_AD0(value)                   (ISC_DAD0_AD0_Msk & ((value) << ISC_DAD0_AD0_Pos))  
#define ISC_DAD0_Msk                          _U_(0xFFFFFFFF)                                      /**< (ISC_DAD0) Register Mask  */


/* -------- ISC_DST0 : (ISC Offset: 0x52C) (R/W 32) DMA Stride 0 Register -------- */
#define ISC_DST0_RESETVALUE                   _U_(0x00)                                            /**<  (ISC_DST0) DMA Stride 0 Register  Reset Value */

#define ISC_DST0_ST0_Pos                      _U_(0)                                               /**< (ISC_DST0) Channel 0 Stride Position */
#define ISC_DST0_ST0_Msk                      (_U_(0xFFFFFFFF) << ISC_DST0_ST0_Pos)                /**< (ISC_DST0) Channel 0 Stride Mask */
#define ISC_DST0_ST0(value)                   (ISC_DST0_ST0_Msk & ((value) << ISC_DST0_ST0_Pos))  
#define ISC_DST0_Msk                          _U_(0xFFFFFFFF)                                      /**< (ISC_DST0) Register Mask  */


/* -------- ISC_DAD1 : (ISC Offset: 0x530) (R/W 32) DMA Address 1 Register -------- */
#define ISC_DAD1_RESETVALUE                   _U_(0x00)                                            /**<  (ISC_DAD1) DMA Address 1 Register  Reset Value */

#define ISC_DAD1_AD1_Pos                      _U_(0)                                               /**< (ISC_DAD1) Channel 1 Address Position */
#define ISC_DAD1_AD1_Msk                      (_U_(0xFFFFFFFF) << ISC_DAD1_AD1_Pos)                /**< (ISC_DAD1) Channel 1 Address Mask */
#define ISC_DAD1_AD1(value)                   (ISC_DAD1_AD1_Msk & ((value) << ISC_DAD1_AD1_Pos))  
#define ISC_DAD1_Msk                          _U_(0xFFFFFFFF)                                      /**< (ISC_DAD1) Register Mask  */


/* -------- ISC_DST1 : (ISC Offset: 0x534) (R/W 32) DMA Stride 1 Register -------- */
#define ISC_DST1_RESETVALUE                   _U_(0x00)                                            /**<  (ISC_DST1) DMA Stride 1 Register  Reset Value */

#define ISC_DST1_ST1_Pos                      _U_(0)                                               /**< (ISC_DST1) Channel 1 Stride Position */
#define ISC_DST1_ST1_Msk                      (_U_(0xFFFFFFFF) << ISC_DST1_ST1_Pos)                /**< (ISC_DST1) Channel 1 Stride Mask */
#define ISC_DST1_ST1(value)                   (ISC_DST1_ST1_Msk & ((value) << ISC_DST1_ST1_Pos))  
#define ISC_DST1_Msk                          _U_(0xFFFFFFFF)                                      /**< (ISC_DST1) Register Mask  */


/* -------- ISC_DAD2 : (ISC Offset: 0x538) (R/W 32) DMA Address 2 Register -------- */
#define ISC_DAD2_RESETVALUE                   _U_(0x00)                                            /**<  (ISC_DAD2) DMA Address 2 Register  Reset Value */

#define ISC_DAD2_AD2_Pos                      _U_(0)                                               /**< (ISC_DAD2) Channel 2 Address Position */
#define ISC_DAD2_AD2_Msk                      (_U_(0xFFFFFFFF) << ISC_DAD2_AD2_Pos)                /**< (ISC_DAD2) Channel 2 Address Mask */
#define ISC_DAD2_AD2(value)                   (ISC_DAD2_AD2_Msk & ((value) << ISC_DAD2_AD2_Pos))  
#define ISC_DAD2_Msk                          _U_(0xFFFFFFFF)                                      /**< (ISC_DAD2) Register Mask  */


/* -------- ISC_DST2 : (ISC Offset: 0x53C) (R/W 32) DMA Stride 2 Register -------- */
#define ISC_DST2_RESETVALUE                   _U_(0x00)                                            /**<  (ISC_DST2) DMA Stride 2 Register  Reset Value */

#define ISC_DST2_ST2_Pos                      _U_(0)                                               /**< (ISC_DST2) Channel 2 Stride Position */
#define ISC_DST2_ST2_Msk                      (_U_(0xFFFFFFFF) << ISC_DST2_ST2_Pos)                /**< (ISC_DST2) Channel 2 Stride Mask */
#define ISC_DST2_ST2(value)                   (ISC_DST2_ST2_Msk & ((value) << ISC_DST2_ST2_Pos))  
#define ISC_DST2_Msk                          _U_(0xFFFFFFFF)                                      /**< (ISC_DST2) Register Mask  */


/* -------- ISC_HIS_ENTRY : (ISC Offset: 0x55C) ( R/ 32) Histogram Entry x -------- */
#define ISC_HIS_ENTRY_RESETVALUE              _U_(0x00)                                            /**<  (ISC_HIS_ENTRY) Histogram Entry x  Reset Value */

#define ISC_HIS_ENTRY_COUNT_Pos               _U_(0)                                               /**< (ISC_HIS_ENTRY) Entry Counter Position */
#define ISC_HIS_ENTRY_COUNT_Msk               (_U_(0xFFFFF) << ISC_HIS_ENTRY_COUNT_Pos)            /**< (ISC_HIS_ENTRY) Entry Counter Mask */
#define ISC_HIS_ENTRY_COUNT(value)            (ISC_HIS_ENTRY_COUNT_Msk & ((value) << ISC_HIS_ENTRY_COUNT_Pos))
#define ISC_HIS_ENTRY_Msk                     _U_(0x000FFFFF)                                      /**< (ISC_HIS_ENTRY) Register Mask  */


/** \brief ISC register offsets definitions */
#define ISC_HXS_TAP10PHI_REG_OFST      (0x00)              /**< (ISC_HXS_TAP10PHI) HXS TAP10 Phase Register  Offset */
#define ISC_HXS_TAP32PHI_REG_OFST      (0x04)              /**< (ISC_HXS_TAP32PHI) HXS TAP32 Phase Register  Offset */
#define ISC_VXS_TAP10PHI_REG_OFST      (0x00)              /**< (ISC_VXS_TAP10PHI) VXS TAP10 Phase Register  Offset */
#define ISC_VXS_TAP32PHI_REG_OFST      (0x04)              /**< (ISC_VXS_TAP32PHI) VXS TAP32 Phase Register  Offset */
#define ISC_CTRLEN_REG_OFST            (0x00)              /**< (ISC_CTRLEN) Control Enable Register Offset */
#define ISC_CTRLDIS_REG_OFST           (0x04)              /**< (ISC_CTRLDIS) Control Disable Register Offset */
#define ISC_CTRLSR_REG_OFST            (0x08)              /**< (ISC_CTRLSR) Control Status Register Offset */
#define ISC_PFE_CFG0_REG_OFST          (0x0C)              /**< (ISC_PFE_CFG0) Parallel Front End Configuration 0 Register Offset */
#define ISC_PFE_CFG1_REG_OFST          (0x10)              /**< (ISC_PFE_CFG1) Parallel Front End Configuration 1 Register Offset */
#define ISC_PFE_CFG2_REG_OFST          (0x14)              /**< (ISC_PFE_CFG2) Parallel Front End Configuration 2 Register Offset */
#define ISC_CLKEN_REG_OFST             (0x18)              /**< (ISC_CLKEN) Clock Enable Register Offset */
#define ISC_CLKDIS_REG_OFST            (0x1C)              /**< (ISC_CLKDIS) Clock Disable Register Offset */
#define ISC_CLKSR_REG_OFST             (0x20)              /**< (ISC_CLKSR) Clock Status Register Offset */
#define ISC_CLKCFG_REG_OFST            (0x24)              /**< (ISC_CLKCFG) Clock Configuration Register Offset */
#define ISC_INTEN_REG_OFST             (0x28)              /**< (ISC_INTEN) Interrupt Enable Register Offset */
#define ISC_INTDIS_REG_OFST            (0x2C)              /**< (ISC_INTDIS) Interrupt Disable Register Offset */
#define ISC_INTMASK_REG_OFST           (0x30)              /**< (ISC_INTMASK) Interrupt Mask Register Offset */
#define ISC_INTSR_REG_OFST             (0x34)              /**< (ISC_INTSR) Interrupt Status Register Offset */
#define ISC_DPC_CTRL_REG_OFST          (0x40)              /**< (ISC_DPC_CTRL) Defective Pixel Correction Control Register Offset */
#define ISC_DPC_CFG_REG_OFST           (0x44)              /**< (ISC_DPC_CFG) Defective Pixel Correction Configuration Register Offset */
#define ISC_DPC_THRESHM_REG_OFST       (0x48)              /**< (ISC_DPC_THRESHM) Defective Pixel Correction Threshold M Register Offset */
#define ISC_DPC_THRESHC_REG_OFST       (0x4C)              /**< (ISC_DPC_THRESHC) Defective Pixel Correction Threshold C Register Offset */
#define ISC_DPC_THRESHA_REG_OFST       (0x50)              /**< (ISC_DPC_THRESHA) Defective Pixel Correction Threshold A Register Offset */
#define ISC_DPC_SR_REG_OFST            (0x54)              /**< (ISC_DPC_SR) Defective Pixel Correction Status Register Offset */
#define ISC_WB_CTRL_REG_OFST           (0x58)              /**< (ISC_WB_CTRL) White Balance Control Register Offset */
#define ISC_WB_CFG_REG_OFST            (0x5C)              /**< (ISC_WB_CFG) White Balance Configuration Register Offset */
#define ISC_WB_O_RGR_REG_OFST          (0x60)              /**< (ISC_WB_O_RGR) White Balance Offset for R, GR Register Offset */
#define ISC_WB_O_BGB_REG_OFST          (0x64)              /**< (ISC_WB_O_BGB) White Balance Offset for B, GB Register Offset */
#define ISC_WB_G_RGR_REG_OFST          (0x68)              /**< (ISC_WB_G_RGR) White Balance Gain for R, GR Register Offset */
#define ISC_WB_G_BGB_REG_OFST          (0x6C)              /**< (ISC_WB_G_BGB) White Balance Gain for B, GB Register Offset */
#define ISC_CFA_CTRL_REG_OFST          (0x70)              /**< (ISC_CFA_CTRL) Color Filter Array Control Register Offset */
#define ISC_CFA_CFG_REG_OFST           (0x74)              /**< (ISC_CFA_CFG) Color Filter Array Configuration Register Offset */
#define ISC_CC_CTRL_REG_OFST           (0x78)              /**< (ISC_CC_CTRL) Color Correction Control Register Offset */
#define ISC_CC_RR_RG_REG_OFST          (0x7C)              /**< (ISC_CC_RR_RG) Color Correction RR RG Register Offset */
#define ISC_CC_RB_OR_REG_OFST          (0x80)              /**< (ISC_CC_RB_OR) Color Correction RB OR Register Offset */
#define ISC_CC_GR_GG_REG_OFST          (0x84)              /**< (ISC_CC_GR_GG) Color Correction GR GG Register Offset */
#define ISC_CC_GB_OG_REG_OFST          (0x88)              /**< (ISC_CC_GB_OG) Color Correction GB OG Register Offset */
#define ISC_CC_BR_BG_REG_OFST          (0x8C)              /**< (ISC_CC_BR_BG) Color Correction BR BG Register Offset */
#define ISC_CC_BB_OB_REG_OFST          (0x90)              /**< (ISC_CC_BB_OB) Color Correction BB OB Register Offset */
#define ISC_GAM_CTRL_REG_OFST          (0x94)              /**< (ISC_GAM_CTRL) Gamma Correction Control Register Offset */
#define ISC_GAM_BENTRY_REG_OFST        (0x98)              /**< (ISC_GAM_BENTRY) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY0_REG_OFST       (0x98)              /**< (ISC_GAM_BENTRY0) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY1_REG_OFST       (0x9C)              /**< (ISC_GAM_BENTRY1) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY2_REG_OFST       (0xA0)              /**< (ISC_GAM_BENTRY2) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY3_REG_OFST       (0xA4)              /**< (ISC_GAM_BENTRY3) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY4_REG_OFST       (0xA8)              /**< (ISC_GAM_BENTRY4) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY5_REG_OFST       (0xAC)              /**< (ISC_GAM_BENTRY5) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY6_REG_OFST       (0xB0)              /**< (ISC_GAM_BENTRY6) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY7_REG_OFST       (0xB4)              /**< (ISC_GAM_BENTRY7) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY8_REG_OFST       (0xB8)              /**< (ISC_GAM_BENTRY8) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY9_REG_OFST       (0xBC)              /**< (ISC_GAM_BENTRY9) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY10_REG_OFST      (0xC0)              /**< (ISC_GAM_BENTRY10) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY11_REG_OFST      (0xC4)              /**< (ISC_GAM_BENTRY11) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY12_REG_OFST      (0xC8)              /**< (ISC_GAM_BENTRY12) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY13_REG_OFST      (0xCC)              /**< (ISC_GAM_BENTRY13) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY14_REG_OFST      (0xD0)              /**< (ISC_GAM_BENTRY14) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY15_REG_OFST      (0xD4)              /**< (ISC_GAM_BENTRY15) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY16_REG_OFST      (0xD8)              /**< (ISC_GAM_BENTRY16) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY17_REG_OFST      (0xDC)              /**< (ISC_GAM_BENTRY17) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY18_REG_OFST      (0xE0)              /**< (ISC_GAM_BENTRY18) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY19_REG_OFST      (0xE4)              /**< (ISC_GAM_BENTRY19) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY20_REG_OFST      (0xE8)              /**< (ISC_GAM_BENTRY20) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY21_REG_OFST      (0xEC)              /**< (ISC_GAM_BENTRY21) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY22_REG_OFST      (0xF0)              /**< (ISC_GAM_BENTRY22) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY23_REG_OFST      (0xF4)              /**< (ISC_GAM_BENTRY23) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY24_REG_OFST      (0xF8)              /**< (ISC_GAM_BENTRY24) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY25_REG_OFST      (0xFC)              /**< (ISC_GAM_BENTRY25) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY26_REG_OFST      (0x100)             /**< (ISC_GAM_BENTRY26) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY27_REG_OFST      (0x104)             /**< (ISC_GAM_BENTRY27) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY28_REG_OFST      (0x108)             /**< (ISC_GAM_BENTRY28) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY29_REG_OFST      (0x10C)             /**< (ISC_GAM_BENTRY29) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY30_REG_OFST      (0x110)             /**< (ISC_GAM_BENTRY30) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY31_REG_OFST      (0x114)             /**< (ISC_GAM_BENTRY31) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY32_REG_OFST      (0x118)             /**< (ISC_GAM_BENTRY32) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY33_REG_OFST      (0x11C)             /**< (ISC_GAM_BENTRY33) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY34_REG_OFST      (0x120)             /**< (ISC_GAM_BENTRY34) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY35_REG_OFST      (0x124)             /**< (ISC_GAM_BENTRY35) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY36_REG_OFST      (0x128)             /**< (ISC_GAM_BENTRY36) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY37_REG_OFST      (0x12C)             /**< (ISC_GAM_BENTRY37) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY38_REG_OFST      (0x130)             /**< (ISC_GAM_BENTRY38) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY39_REG_OFST      (0x134)             /**< (ISC_GAM_BENTRY39) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY40_REG_OFST      (0x138)             /**< (ISC_GAM_BENTRY40) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY41_REG_OFST      (0x13C)             /**< (ISC_GAM_BENTRY41) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY42_REG_OFST      (0x140)             /**< (ISC_GAM_BENTRY42) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY43_REG_OFST      (0x144)             /**< (ISC_GAM_BENTRY43) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY44_REG_OFST      (0x148)             /**< (ISC_GAM_BENTRY44) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY45_REG_OFST      (0x14C)             /**< (ISC_GAM_BENTRY45) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY46_REG_OFST      (0x150)             /**< (ISC_GAM_BENTRY46) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY47_REG_OFST      (0x154)             /**< (ISC_GAM_BENTRY47) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY48_REG_OFST      (0x158)             /**< (ISC_GAM_BENTRY48) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY49_REG_OFST      (0x15C)             /**< (ISC_GAM_BENTRY49) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY50_REG_OFST      (0x160)             /**< (ISC_GAM_BENTRY50) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY51_REG_OFST      (0x164)             /**< (ISC_GAM_BENTRY51) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY52_REG_OFST      (0x168)             /**< (ISC_GAM_BENTRY52) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY53_REG_OFST      (0x16C)             /**< (ISC_GAM_BENTRY53) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY54_REG_OFST      (0x170)             /**< (ISC_GAM_BENTRY54) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY55_REG_OFST      (0x174)             /**< (ISC_GAM_BENTRY55) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY56_REG_OFST      (0x178)             /**< (ISC_GAM_BENTRY56) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY57_REG_OFST      (0x17C)             /**< (ISC_GAM_BENTRY57) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY58_REG_OFST      (0x180)             /**< (ISC_GAM_BENTRY58) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY59_REG_OFST      (0x184)             /**< (ISC_GAM_BENTRY59) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY60_REG_OFST      (0x188)             /**< (ISC_GAM_BENTRY60) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY61_REG_OFST      (0x18C)             /**< (ISC_GAM_BENTRY61) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY62_REG_OFST      (0x190)             /**< (ISC_GAM_BENTRY62) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_BENTRY63_REG_OFST      (0x194)             /**< (ISC_GAM_BENTRY63) Gamma Correction Blue Entry x Offset */
#define ISC_GAM_GENTRY_REG_OFST        (0x198)             /**< (ISC_GAM_GENTRY) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY0_REG_OFST       (0x198)             /**< (ISC_GAM_GENTRY0) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY1_REG_OFST       (0x19C)             /**< (ISC_GAM_GENTRY1) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY2_REG_OFST       (0x1A0)             /**< (ISC_GAM_GENTRY2) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY3_REG_OFST       (0x1A4)             /**< (ISC_GAM_GENTRY3) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY4_REG_OFST       (0x1A8)             /**< (ISC_GAM_GENTRY4) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY5_REG_OFST       (0x1AC)             /**< (ISC_GAM_GENTRY5) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY6_REG_OFST       (0x1B0)             /**< (ISC_GAM_GENTRY6) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY7_REG_OFST       (0x1B4)             /**< (ISC_GAM_GENTRY7) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY8_REG_OFST       (0x1B8)             /**< (ISC_GAM_GENTRY8) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY9_REG_OFST       (0x1BC)             /**< (ISC_GAM_GENTRY9) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY10_REG_OFST      (0x1C0)             /**< (ISC_GAM_GENTRY10) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY11_REG_OFST      (0x1C4)             /**< (ISC_GAM_GENTRY11) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY12_REG_OFST      (0x1C8)             /**< (ISC_GAM_GENTRY12) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY13_REG_OFST      (0x1CC)             /**< (ISC_GAM_GENTRY13) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY14_REG_OFST      (0x1D0)             /**< (ISC_GAM_GENTRY14) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY15_REG_OFST      (0x1D4)             /**< (ISC_GAM_GENTRY15) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY16_REG_OFST      (0x1D8)             /**< (ISC_GAM_GENTRY16) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY17_REG_OFST      (0x1DC)             /**< (ISC_GAM_GENTRY17) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY18_REG_OFST      (0x1E0)             /**< (ISC_GAM_GENTRY18) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY19_REG_OFST      (0x1E4)             /**< (ISC_GAM_GENTRY19) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY20_REG_OFST      (0x1E8)             /**< (ISC_GAM_GENTRY20) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY21_REG_OFST      (0x1EC)             /**< (ISC_GAM_GENTRY21) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY22_REG_OFST      (0x1F0)             /**< (ISC_GAM_GENTRY22) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY23_REG_OFST      (0x1F4)             /**< (ISC_GAM_GENTRY23) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY24_REG_OFST      (0x1F8)             /**< (ISC_GAM_GENTRY24) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY25_REG_OFST      (0x1FC)             /**< (ISC_GAM_GENTRY25) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY26_REG_OFST      (0x200)             /**< (ISC_GAM_GENTRY26) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY27_REG_OFST      (0x204)             /**< (ISC_GAM_GENTRY27) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY28_REG_OFST      (0x208)             /**< (ISC_GAM_GENTRY28) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY29_REG_OFST      (0x20C)             /**< (ISC_GAM_GENTRY29) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY30_REG_OFST      (0x210)             /**< (ISC_GAM_GENTRY30) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY31_REG_OFST      (0x214)             /**< (ISC_GAM_GENTRY31) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY32_REG_OFST      (0x218)             /**< (ISC_GAM_GENTRY32) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY33_REG_OFST      (0x21C)             /**< (ISC_GAM_GENTRY33) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY34_REG_OFST      (0x220)             /**< (ISC_GAM_GENTRY34) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY35_REG_OFST      (0x224)             /**< (ISC_GAM_GENTRY35) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY36_REG_OFST      (0x228)             /**< (ISC_GAM_GENTRY36) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY37_REG_OFST      (0x22C)             /**< (ISC_GAM_GENTRY37) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY38_REG_OFST      (0x230)             /**< (ISC_GAM_GENTRY38) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY39_REG_OFST      (0x234)             /**< (ISC_GAM_GENTRY39) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY40_REG_OFST      (0x238)             /**< (ISC_GAM_GENTRY40) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY41_REG_OFST      (0x23C)             /**< (ISC_GAM_GENTRY41) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY42_REG_OFST      (0x240)             /**< (ISC_GAM_GENTRY42) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY43_REG_OFST      (0x244)             /**< (ISC_GAM_GENTRY43) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY44_REG_OFST      (0x248)             /**< (ISC_GAM_GENTRY44) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY45_REG_OFST      (0x24C)             /**< (ISC_GAM_GENTRY45) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY46_REG_OFST      (0x250)             /**< (ISC_GAM_GENTRY46) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY47_REG_OFST      (0x254)             /**< (ISC_GAM_GENTRY47) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY48_REG_OFST      (0x258)             /**< (ISC_GAM_GENTRY48) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY49_REG_OFST      (0x25C)             /**< (ISC_GAM_GENTRY49) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY50_REG_OFST      (0x260)             /**< (ISC_GAM_GENTRY50) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY51_REG_OFST      (0x264)             /**< (ISC_GAM_GENTRY51) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY52_REG_OFST      (0x268)             /**< (ISC_GAM_GENTRY52) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY53_REG_OFST      (0x26C)             /**< (ISC_GAM_GENTRY53) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY54_REG_OFST      (0x270)             /**< (ISC_GAM_GENTRY54) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY55_REG_OFST      (0x274)             /**< (ISC_GAM_GENTRY55) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY56_REG_OFST      (0x278)             /**< (ISC_GAM_GENTRY56) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY57_REG_OFST      (0x27C)             /**< (ISC_GAM_GENTRY57) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY58_REG_OFST      (0x280)             /**< (ISC_GAM_GENTRY58) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY59_REG_OFST      (0x284)             /**< (ISC_GAM_GENTRY59) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY60_REG_OFST      (0x288)             /**< (ISC_GAM_GENTRY60) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY61_REG_OFST      (0x28C)             /**< (ISC_GAM_GENTRY61) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY62_REG_OFST      (0x290)             /**< (ISC_GAM_GENTRY62) Gamma Correction Green Entry x Offset */
#define ISC_GAM_GENTRY63_REG_OFST      (0x294)             /**< (ISC_GAM_GENTRY63) Gamma Correction Green Entry x Offset */
#define ISC_GAM_RENTRY_REG_OFST        (0x298)             /**< (ISC_GAM_RENTRY) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY0_REG_OFST       (0x298)             /**< (ISC_GAM_RENTRY0) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY1_REG_OFST       (0x29C)             /**< (ISC_GAM_RENTRY1) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY2_REG_OFST       (0x2A0)             /**< (ISC_GAM_RENTRY2) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY3_REG_OFST       (0x2A4)             /**< (ISC_GAM_RENTRY3) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY4_REG_OFST       (0x2A8)             /**< (ISC_GAM_RENTRY4) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY5_REG_OFST       (0x2AC)             /**< (ISC_GAM_RENTRY5) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY6_REG_OFST       (0x2B0)             /**< (ISC_GAM_RENTRY6) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY7_REG_OFST       (0x2B4)             /**< (ISC_GAM_RENTRY7) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY8_REG_OFST       (0x2B8)             /**< (ISC_GAM_RENTRY8) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY9_REG_OFST       (0x2BC)             /**< (ISC_GAM_RENTRY9) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY10_REG_OFST      (0x2C0)             /**< (ISC_GAM_RENTRY10) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY11_REG_OFST      (0x2C4)             /**< (ISC_GAM_RENTRY11) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY12_REG_OFST      (0x2C8)             /**< (ISC_GAM_RENTRY12) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY13_REG_OFST      (0x2CC)             /**< (ISC_GAM_RENTRY13) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY14_REG_OFST      (0x2D0)             /**< (ISC_GAM_RENTRY14) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY15_REG_OFST      (0x2D4)             /**< (ISC_GAM_RENTRY15) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY16_REG_OFST      (0x2D8)             /**< (ISC_GAM_RENTRY16) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY17_REG_OFST      (0x2DC)             /**< (ISC_GAM_RENTRY17) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY18_REG_OFST      (0x2E0)             /**< (ISC_GAM_RENTRY18) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY19_REG_OFST      (0x2E4)             /**< (ISC_GAM_RENTRY19) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY20_REG_OFST      (0x2E8)             /**< (ISC_GAM_RENTRY20) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY21_REG_OFST      (0x2EC)             /**< (ISC_GAM_RENTRY21) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY22_REG_OFST      (0x2F0)             /**< (ISC_GAM_RENTRY22) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY23_REG_OFST      (0x2F4)             /**< (ISC_GAM_RENTRY23) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY24_REG_OFST      (0x2F8)             /**< (ISC_GAM_RENTRY24) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY25_REG_OFST      (0x2FC)             /**< (ISC_GAM_RENTRY25) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY26_REG_OFST      (0x300)             /**< (ISC_GAM_RENTRY26) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY27_REG_OFST      (0x304)             /**< (ISC_GAM_RENTRY27) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY28_REG_OFST      (0x308)             /**< (ISC_GAM_RENTRY28) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY29_REG_OFST      (0x30C)             /**< (ISC_GAM_RENTRY29) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY30_REG_OFST      (0x310)             /**< (ISC_GAM_RENTRY30) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY31_REG_OFST      (0x314)             /**< (ISC_GAM_RENTRY31) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY32_REG_OFST      (0x318)             /**< (ISC_GAM_RENTRY32) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY33_REG_OFST      (0x31C)             /**< (ISC_GAM_RENTRY33) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY34_REG_OFST      (0x320)             /**< (ISC_GAM_RENTRY34) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY35_REG_OFST      (0x324)             /**< (ISC_GAM_RENTRY35) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY36_REG_OFST      (0x328)             /**< (ISC_GAM_RENTRY36) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY37_REG_OFST      (0x32C)             /**< (ISC_GAM_RENTRY37) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY38_REG_OFST      (0x330)             /**< (ISC_GAM_RENTRY38) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY39_REG_OFST      (0x334)             /**< (ISC_GAM_RENTRY39) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY40_REG_OFST      (0x338)             /**< (ISC_GAM_RENTRY40) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY41_REG_OFST      (0x33C)             /**< (ISC_GAM_RENTRY41) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY42_REG_OFST      (0x340)             /**< (ISC_GAM_RENTRY42) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY43_REG_OFST      (0x344)             /**< (ISC_GAM_RENTRY43) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY44_REG_OFST      (0x348)             /**< (ISC_GAM_RENTRY44) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY45_REG_OFST      (0x34C)             /**< (ISC_GAM_RENTRY45) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY46_REG_OFST      (0x350)             /**< (ISC_GAM_RENTRY46) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY47_REG_OFST      (0x354)             /**< (ISC_GAM_RENTRY47) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY48_REG_OFST      (0x358)             /**< (ISC_GAM_RENTRY48) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY49_REG_OFST      (0x35C)             /**< (ISC_GAM_RENTRY49) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY50_REG_OFST      (0x360)             /**< (ISC_GAM_RENTRY50) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY51_REG_OFST      (0x364)             /**< (ISC_GAM_RENTRY51) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY52_REG_OFST      (0x368)             /**< (ISC_GAM_RENTRY52) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY53_REG_OFST      (0x36C)             /**< (ISC_GAM_RENTRY53) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY54_REG_OFST      (0x370)             /**< (ISC_GAM_RENTRY54) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY55_REG_OFST      (0x374)             /**< (ISC_GAM_RENTRY55) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY56_REG_OFST      (0x378)             /**< (ISC_GAM_RENTRY56) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY57_REG_OFST      (0x37C)             /**< (ISC_GAM_RENTRY57) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY58_REG_OFST      (0x380)             /**< (ISC_GAM_RENTRY58) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY59_REG_OFST      (0x384)             /**< (ISC_GAM_RENTRY59) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY60_REG_OFST      (0x388)             /**< (ISC_GAM_RENTRY60) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY61_REG_OFST      (0x38C)             /**< (ISC_GAM_RENTRY61) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY62_REG_OFST      (0x390)             /**< (ISC_GAM_RENTRY62) Gamma Correction Red Entry x Offset */
#define ISC_GAM_RENTRY63_REG_OFST      (0x394)             /**< (ISC_GAM_RENTRY63) Gamma Correction Red Entry x Offset */
#define ISC_VHXS_CTRL_REG_OFST         (0x398)             /**< (ISC_VHXS_CTRL) VHXS Control Register Offset */
#define ISC_VHXS_SS_REG_OFST           (0x39C)             /**< (ISC_VHXS_SS) VHXS Source Size Register Offset */
#define ISC_VHXS_DS_REG_OFST           (0x3A0)             /**< (ISC_VHXS_DS) VHXS Destination Size Register Offset */
#define ISC_VXS_FACT_REG_OFST          (0x3A4)             /**< (ISC_VXS_FACT) VXS Scaling Factor Register Offset */
#define ISC_HXS_FACT_REG_OFST          (0x3A8)             /**< (ISC_HXS_FACT) HXS Scaling Factor Register Offset */
#define ISC_VXS_CFG_REG_OFST           (0x3AC)             /**< (ISC_VXS_CFG) VXS Configuration Register Offset */
#define ISC_HXS_CFG_REG_OFST           (0x3B0)             /**< (ISC_HXS_CFG) HXS Configuration Register Offset */
#define ISC_CSC_CTRL_REG_OFST          (0x4B4)             /**< (ISC_CSC_CTRL) Color Space Conversion Control Register Offset */
#define ISC_CSC_YR_YG_REG_OFST         (0x4B8)             /**< (ISC_CSC_YR_YG) Color Space Conversion YR, YG Register Offset */
#define ISC_CSC_YB_OY_REG_OFST         (0x4BC)             /**< (ISC_CSC_YB_OY) Color Space Conversion YB, OY Register Offset */
#define ISC_CSC_CBR_CBG_REG_OFST       (0x4C0)             /**< (ISC_CSC_CBR_CBG) Color Space Conversion CBR CBG Register Offset */
#define ISC_CSC_CBB_OCB_REG_OFST       (0x4C4)             /**< (ISC_CSC_CBB_OCB) Color Space Conversion CBB OCB Register Offset */
#define ISC_CSC_CRR_CRG_REG_OFST       (0x4C8)             /**< (ISC_CSC_CRR_CRG) Color Space Conversion CRR CRG Register Offset */
#define ISC_CSC_CRB_OCR_REG_OFST       (0x4CC)             /**< (ISC_CSC_CRB_OCR) Color Space Conversion CRB OCR Register Offset */
#define ISC_CBHS_CTRL_REG_OFST         (0x4D0)             /**< (ISC_CBHS_CTRL) CBHS Control Register Offset */
#define ISC_CBHS_CFG_REG_OFST          (0x4D4)             /**< (ISC_CBHS_CFG) CBHS Configuration Register Offset */
#define ISC_CBHS_BRIGHT_REG_OFST       (0x4D8)             /**< (ISC_CBHS_BRIGHT) CBHS Brightness Register Offset */
#define ISC_CBHS_CONT_REG_OFST         (0x4DC)             /**< (ISC_CBHS_CONT) CBHS Contrast Register Offset */
#define ISC_CBHS_HUE_REG_OFST          (0x4E0)             /**< (ISC_CBHS_HUE) CBHS Hue Register Offset */
#define ISC_CBHS_SAT_REG_OFST          (0x4E4)             /**< (ISC_CBHS_SAT) CBHS Saturation Register Offset */
#define ISC_SUB422_CTRL_REG_OFST       (0x4E8)             /**< (ISC_SUB422_CTRL) Subsampling 4:4:4 to 4:2:2 Control Register Offset */
#define ISC_SUB422_CFG_REG_OFST        (0x4EC)             /**< (ISC_SUB422_CFG) Subsampling 4:4:4 to 4:2:2 Configuration Register Offset */
#define ISC_SUB420_CTRL_REG_OFST       (0x4F0)             /**< (ISC_SUB420_CTRL) Subsampling 4:2:2 to 4:2:0 Control Register Offset */
#define ISC_RLP_CFG_REG_OFST           (0x4F4)             /**< (ISC_RLP_CFG) Rounding, Limiting and Packing Configuration Register Offset */
#define ISC_HIS_CTRL_REG_OFST          (0x4F8)             /**< (ISC_HIS_CTRL) Histogram Control Register Offset */
#define ISC_HIS_CFG_REG_OFST           (0x4FC)             /**< (ISC_HIS_CFG) Histogram Configuration Register Offset */
#define ISC_DCFG_REG_OFST              (0x51C)             /**< (ISC_DCFG) DMA Configuration Register Offset */
#define ISC_DCTRL_REG_OFST             (0x520)             /**< (ISC_DCTRL) DMA Control Register Offset */
#define ISC_DNDA_REG_OFST              (0x524)             /**< (ISC_DNDA) DMA Descriptor Address Register Offset */
#define ISC_DAD0_REG_OFST              (0x528)             /**< (ISC_DAD0) DMA Address 0 Register Offset */
#define ISC_DST0_REG_OFST              (0x52C)             /**< (ISC_DST0) DMA Stride 0 Register Offset */
#define ISC_DAD1_REG_OFST              (0x530)             /**< (ISC_DAD1) DMA Address 1 Register Offset */
#define ISC_DST1_REG_OFST              (0x534)             /**< (ISC_DST1) DMA Stride 1 Register Offset */
#define ISC_DAD2_REG_OFST              (0x538)             /**< (ISC_DAD2) DMA Address 2 Register Offset */
#define ISC_DST2_REG_OFST              (0x53C)             /**< (ISC_DST2) DMA Stride 2 Register Offset */
#define ISC_HIS_ENTRY_REG_OFST         (0x55C)             /**< (ISC_HIS_ENTRY) Histogram Entry x Offset */
#define ISC_HIS_ENTRY0_REG_OFST        (0x55C)             /**< (ISC_HIS_ENTRY0) Histogram Entry x Offset */
#define ISC_HIS_ENTRY1_REG_OFST        (0x560)             /**< (ISC_HIS_ENTRY1) Histogram Entry x Offset */
#define ISC_HIS_ENTRY2_REG_OFST        (0x564)             /**< (ISC_HIS_ENTRY2) Histogram Entry x Offset */
#define ISC_HIS_ENTRY3_REG_OFST        (0x568)             /**< (ISC_HIS_ENTRY3) Histogram Entry x Offset */
#define ISC_HIS_ENTRY4_REG_OFST        (0x56C)             /**< (ISC_HIS_ENTRY4) Histogram Entry x Offset */
#define ISC_HIS_ENTRY5_REG_OFST        (0x570)             /**< (ISC_HIS_ENTRY5) Histogram Entry x Offset */
#define ISC_HIS_ENTRY6_REG_OFST        (0x574)             /**< (ISC_HIS_ENTRY6) Histogram Entry x Offset */
#define ISC_HIS_ENTRY7_REG_OFST        (0x578)             /**< (ISC_HIS_ENTRY7) Histogram Entry x Offset */
#define ISC_HIS_ENTRY8_REG_OFST        (0x57C)             /**< (ISC_HIS_ENTRY8) Histogram Entry x Offset */
#define ISC_HIS_ENTRY9_REG_OFST        (0x580)             /**< (ISC_HIS_ENTRY9) Histogram Entry x Offset */
#define ISC_HIS_ENTRY10_REG_OFST       (0x584)             /**< (ISC_HIS_ENTRY10) Histogram Entry x Offset */
#define ISC_HIS_ENTRY11_REG_OFST       (0x588)             /**< (ISC_HIS_ENTRY11) Histogram Entry x Offset */
#define ISC_HIS_ENTRY12_REG_OFST       (0x58C)             /**< (ISC_HIS_ENTRY12) Histogram Entry x Offset */
#define ISC_HIS_ENTRY13_REG_OFST       (0x590)             /**< (ISC_HIS_ENTRY13) Histogram Entry x Offset */
#define ISC_HIS_ENTRY14_REG_OFST       (0x594)             /**< (ISC_HIS_ENTRY14) Histogram Entry x Offset */
#define ISC_HIS_ENTRY15_REG_OFST       (0x598)             /**< (ISC_HIS_ENTRY15) Histogram Entry x Offset */
#define ISC_HIS_ENTRY16_REG_OFST       (0x59C)             /**< (ISC_HIS_ENTRY16) Histogram Entry x Offset */
#define ISC_HIS_ENTRY17_REG_OFST       (0x5A0)             /**< (ISC_HIS_ENTRY17) Histogram Entry x Offset */
#define ISC_HIS_ENTRY18_REG_OFST       (0x5A4)             /**< (ISC_HIS_ENTRY18) Histogram Entry x Offset */
#define ISC_HIS_ENTRY19_REG_OFST       (0x5A8)             /**< (ISC_HIS_ENTRY19) Histogram Entry x Offset */
#define ISC_HIS_ENTRY20_REG_OFST       (0x5AC)             /**< (ISC_HIS_ENTRY20) Histogram Entry x Offset */
#define ISC_HIS_ENTRY21_REG_OFST       (0x5B0)             /**< (ISC_HIS_ENTRY21) Histogram Entry x Offset */
#define ISC_HIS_ENTRY22_REG_OFST       (0x5B4)             /**< (ISC_HIS_ENTRY22) Histogram Entry x Offset */
#define ISC_HIS_ENTRY23_REG_OFST       (0x5B8)             /**< (ISC_HIS_ENTRY23) Histogram Entry x Offset */
#define ISC_HIS_ENTRY24_REG_OFST       (0x5BC)             /**< (ISC_HIS_ENTRY24) Histogram Entry x Offset */
#define ISC_HIS_ENTRY25_REG_OFST       (0x5C0)             /**< (ISC_HIS_ENTRY25) Histogram Entry x Offset */
#define ISC_HIS_ENTRY26_REG_OFST       (0x5C4)             /**< (ISC_HIS_ENTRY26) Histogram Entry x Offset */
#define ISC_HIS_ENTRY27_REG_OFST       (0x5C8)             /**< (ISC_HIS_ENTRY27) Histogram Entry x Offset */
#define ISC_HIS_ENTRY28_REG_OFST       (0x5CC)             /**< (ISC_HIS_ENTRY28) Histogram Entry x Offset */
#define ISC_HIS_ENTRY29_REG_OFST       (0x5D0)             /**< (ISC_HIS_ENTRY29) Histogram Entry x Offset */
#define ISC_HIS_ENTRY30_REG_OFST       (0x5D4)             /**< (ISC_HIS_ENTRY30) Histogram Entry x Offset */
#define ISC_HIS_ENTRY31_REG_OFST       (0x5D8)             /**< (ISC_HIS_ENTRY31) Histogram Entry x Offset */
#define ISC_HIS_ENTRY32_REG_OFST       (0x5DC)             /**< (ISC_HIS_ENTRY32) Histogram Entry x Offset */
#define ISC_HIS_ENTRY33_REG_OFST       (0x5E0)             /**< (ISC_HIS_ENTRY33) Histogram Entry x Offset */
#define ISC_HIS_ENTRY34_REG_OFST       (0x5E4)             /**< (ISC_HIS_ENTRY34) Histogram Entry x Offset */
#define ISC_HIS_ENTRY35_REG_OFST       (0x5E8)             /**< (ISC_HIS_ENTRY35) Histogram Entry x Offset */
#define ISC_HIS_ENTRY36_REG_OFST       (0x5EC)             /**< (ISC_HIS_ENTRY36) Histogram Entry x Offset */
#define ISC_HIS_ENTRY37_REG_OFST       (0x5F0)             /**< (ISC_HIS_ENTRY37) Histogram Entry x Offset */
#define ISC_HIS_ENTRY38_REG_OFST       (0x5F4)             /**< (ISC_HIS_ENTRY38) Histogram Entry x Offset */
#define ISC_HIS_ENTRY39_REG_OFST       (0x5F8)             /**< (ISC_HIS_ENTRY39) Histogram Entry x Offset */
#define ISC_HIS_ENTRY40_REG_OFST       (0x5FC)             /**< (ISC_HIS_ENTRY40) Histogram Entry x Offset */
#define ISC_HIS_ENTRY41_REG_OFST       (0x600)             /**< (ISC_HIS_ENTRY41) Histogram Entry x Offset */
#define ISC_HIS_ENTRY42_REG_OFST       (0x604)             /**< (ISC_HIS_ENTRY42) Histogram Entry x Offset */
#define ISC_HIS_ENTRY43_REG_OFST       (0x608)             /**< (ISC_HIS_ENTRY43) Histogram Entry x Offset */
#define ISC_HIS_ENTRY44_REG_OFST       (0x60C)             /**< (ISC_HIS_ENTRY44) Histogram Entry x Offset */
#define ISC_HIS_ENTRY45_REG_OFST       (0x610)             /**< (ISC_HIS_ENTRY45) Histogram Entry x Offset */
#define ISC_HIS_ENTRY46_REG_OFST       (0x614)             /**< (ISC_HIS_ENTRY46) Histogram Entry x Offset */
#define ISC_HIS_ENTRY47_REG_OFST       (0x618)             /**< (ISC_HIS_ENTRY47) Histogram Entry x Offset */
#define ISC_HIS_ENTRY48_REG_OFST       (0x61C)             /**< (ISC_HIS_ENTRY48) Histogram Entry x Offset */
#define ISC_HIS_ENTRY49_REG_OFST       (0x620)             /**< (ISC_HIS_ENTRY49) Histogram Entry x Offset */
#define ISC_HIS_ENTRY50_REG_OFST       (0x624)             /**< (ISC_HIS_ENTRY50) Histogram Entry x Offset */
#define ISC_HIS_ENTRY51_REG_OFST       (0x628)             /**< (ISC_HIS_ENTRY51) Histogram Entry x Offset */
#define ISC_HIS_ENTRY52_REG_OFST       (0x62C)             /**< (ISC_HIS_ENTRY52) Histogram Entry x Offset */
#define ISC_HIS_ENTRY53_REG_OFST       (0x630)             /**< (ISC_HIS_ENTRY53) Histogram Entry x Offset */
#define ISC_HIS_ENTRY54_REG_OFST       (0x634)             /**< (ISC_HIS_ENTRY54) Histogram Entry x Offset */
#define ISC_HIS_ENTRY55_REG_OFST       (0x638)             /**< (ISC_HIS_ENTRY55) Histogram Entry x Offset */
#define ISC_HIS_ENTRY56_REG_OFST       (0x63C)             /**< (ISC_HIS_ENTRY56) Histogram Entry x Offset */
#define ISC_HIS_ENTRY57_REG_OFST       (0x640)             /**< (ISC_HIS_ENTRY57) Histogram Entry x Offset */
#define ISC_HIS_ENTRY58_REG_OFST       (0x644)             /**< (ISC_HIS_ENTRY58) Histogram Entry x Offset */
#define ISC_HIS_ENTRY59_REG_OFST       (0x648)             /**< (ISC_HIS_ENTRY59) Histogram Entry x Offset */
#define ISC_HIS_ENTRY60_REG_OFST       (0x64C)             /**< (ISC_HIS_ENTRY60) Histogram Entry x Offset */
#define ISC_HIS_ENTRY61_REG_OFST       (0x650)             /**< (ISC_HIS_ENTRY61) Histogram Entry x Offset */
#define ISC_HIS_ENTRY62_REG_OFST       (0x654)             /**< (ISC_HIS_ENTRY62) Histogram Entry x Offset */
#define ISC_HIS_ENTRY63_REG_OFST       (0x658)             /**< (ISC_HIS_ENTRY63) Histogram Entry x Offset */
#define ISC_HIS_ENTRY64_REG_OFST       (0x65C)             /**< (ISC_HIS_ENTRY64) Histogram Entry x Offset */
#define ISC_HIS_ENTRY65_REG_OFST       (0x660)             /**< (ISC_HIS_ENTRY65) Histogram Entry x Offset */
#define ISC_HIS_ENTRY66_REG_OFST       (0x664)             /**< (ISC_HIS_ENTRY66) Histogram Entry x Offset */
#define ISC_HIS_ENTRY67_REG_OFST       (0x668)             /**< (ISC_HIS_ENTRY67) Histogram Entry x Offset */
#define ISC_HIS_ENTRY68_REG_OFST       (0x66C)             /**< (ISC_HIS_ENTRY68) Histogram Entry x Offset */
#define ISC_HIS_ENTRY69_REG_OFST       (0x670)             /**< (ISC_HIS_ENTRY69) Histogram Entry x Offset */
#define ISC_HIS_ENTRY70_REG_OFST       (0x674)             /**< (ISC_HIS_ENTRY70) Histogram Entry x Offset */
#define ISC_HIS_ENTRY71_REG_OFST       (0x678)             /**< (ISC_HIS_ENTRY71) Histogram Entry x Offset */
#define ISC_HIS_ENTRY72_REG_OFST       (0x67C)             /**< (ISC_HIS_ENTRY72) Histogram Entry x Offset */
#define ISC_HIS_ENTRY73_REG_OFST       (0x680)             /**< (ISC_HIS_ENTRY73) Histogram Entry x Offset */
#define ISC_HIS_ENTRY74_REG_OFST       (0x684)             /**< (ISC_HIS_ENTRY74) Histogram Entry x Offset */
#define ISC_HIS_ENTRY75_REG_OFST       (0x688)             /**< (ISC_HIS_ENTRY75) Histogram Entry x Offset */
#define ISC_HIS_ENTRY76_REG_OFST       (0x68C)             /**< (ISC_HIS_ENTRY76) Histogram Entry x Offset */
#define ISC_HIS_ENTRY77_REG_OFST       (0x690)             /**< (ISC_HIS_ENTRY77) Histogram Entry x Offset */
#define ISC_HIS_ENTRY78_REG_OFST       (0x694)             /**< (ISC_HIS_ENTRY78) Histogram Entry x Offset */
#define ISC_HIS_ENTRY79_REG_OFST       (0x698)             /**< (ISC_HIS_ENTRY79) Histogram Entry x Offset */
#define ISC_HIS_ENTRY80_REG_OFST       (0x69C)             /**< (ISC_HIS_ENTRY80) Histogram Entry x Offset */
#define ISC_HIS_ENTRY81_REG_OFST       (0x6A0)             /**< (ISC_HIS_ENTRY81) Histogram Entry x Offset */
#define ISC_HIS_ENTRY82_REG_OFST       (0x6A4)             /**< (ISC_HIS_ENTRY82) Histogram Entry x Offset */
#define ISC_HIS_ENTRY83_REG_OFST       (0x6A8)             /**< (ISC_HIS_ENTRY83) Histogram Entry x Offset */
#define ISC_HIS_ENTRY84_REG_OFST       (0x6AC)             /**< (ISC_HIS_ENTRY84) Histogram Entry x Offset */
#define ISC_HIS_ENTRY85_REG_OFST       (0x6B0)             /**< (ISC_HIS_ENTRY85) Histogram Entry x Offset */
#define ISC_HIS_ENTRY86_REG_OFST       (0x6B4)             /**< (ISC_HIS_ENTRY86) Histogram Entry x Offset */
#define ISC_HIS_ENTRY87_REG_OFST       (0x6B8)             /**< (ISC_HIS_ENTRY87) Histogram Entry x Offset */
#define ISC_HIS_ENTRY88_REG_OFST       (0x6BC)             /**< (ISC_HIS_ENTRY88) Histogram Entry x Offset */
#define ISC_HIS_ENTRY89_REG_OFST       (0x6C0)             /**< (ISC_HIS_ENTRY89) Histogram Entry x Offset */
#define ISC_HIS_ENTRY90_REG_OFST       (0x6C4)             /**< (ISC_HIS_ENTRY90) Histogram Entry x Offset */
#define ISC_HIS_ENTRY91_REG_OFST       (0x6C8)             /**< (ISC_HIS_ENTRY91) Histogram Entry x Offset */
#define ISC_HIS_ENTRY92_REG_OFST       (0x6CC)             /**< (ISC_HIS_ENTRY92) Histogram Entry x Offset */
#define ISC_HIS_ENTRY93_REG_OFST       (0x6D0)             /**< (ISC_HIS_ENTRY93) Histogram Entry x Offset */
#define ISC_HIS_ENTRY94_REG_OFST       (0x6D4)             /**< (ISC_HIS_ENTRY94) Histogram Entry x Offset */
#define ISC_HIS_ENTRY95_REG_OFST       (0x6D8)             /**< (ISC_HIS_ENTRY95) Histogram Entry x Offset */
#define ISC_HIS_ENTRY96_REG_OFST       (0x6DC)             /**< (ISC_HIS_ENTRY96) Histogram Entry x Offset */
#define ISC_HIS_ENTRY97_REG_OFST       (0x6E0)             /**< (ISC_HIS_ENTRY97) Histogram Entry x Offset */
#define ISC_HIS_ENTRY98_REG_OFST       (0x6E4)             /**< (ISC_HIS_ENTRY98) Histogram Entry x Offset */
#define ISC_HIS_ENTRY99_REG_OFST       (0x6E8)             /**< (ISC_HIS_ENTRY99) Histogram Entry x Offset */
#define ISC_HIS_ENTRY100_REG_OFST      (0x6EC)             /**< (ISC_HIS_ENTRY100) Histogram Entry x Offset */
#define ISC_HIS_ENTRY101_REG_OFST      (0x6F0)             /**< (ISC_HIS_ENTRY101) Histogram Entry x Offset */
#define ISC_HIS_ENTRY102_REG_OFST      (0x6F4)             /**< (ISC_HIS_ENTRY102) Histogram Entry x Offset */
#define ISC_HIS_ENTRY103_REG_OFST      (0x6F8)             /**< (ISC_HIS_ENTRY103) Histogram Entry x Offset */
#define ISC_HIS_ENTRY104_REG_OFST      (0x6FC)             /**< (ISC_HIS_ENTRY104) Histogram Entry x Offset */
#define ISC_HIS_ENTRY105_REG_OFST      (0x700)             /**< (ISC_HIS_ENTRY105) Histogram Entry x Offset */
#define ISC_HIS_ENTRY106_REG_OFST      (0x704)             /**< (ISC_HIS_ENTRY106) Histogram Entry x Offset */
#define ISC_HIS_ENTRY107_REG_OFST      (0x708)             /**< (ISC_HIS_ENTRY107) Histogram Entry x Offset */
#define ISC_HIS_ENTRY108_REG_OFST      (0x70C)             /**< (ISC_HIS_ENTRY108) Histogram Entry x Offset */
#define ISC_HIS_ENTRY109_REG_OFST      (0x710)             /**< (ISC_HIS_ENTRY109) Histogram Entry x Offset */
#define ISC_HIS_ENTRY110_REG_OFST      (0x714)             /**< (ISC_HIS_ENTRY110) Histogram Entry x Offset */
#define ISC_HIS_ENTRY111_REG_OFST      (0x718)             /**< (ISC_HIS_ENTRY111) Histogram Entry x Offset */
#define ISC_HIS_ENTRY112_REG_OFST      (0x71C)             /**< (ISC_HIS_ENTRY112) Histogram Entry x Offset */
#define ISC_HIS_ENTRY113_REG_OFST      (0x720)             /**< (ISC_HIS_ENTRY113) Histogram Entry x Offset */
#define ISC_HIS_ENTRY114_REG_OFST      (0x724)             /**< (ISC_HIS_ENTRY114) Histogram Entry x Offset */
#define ISC_HIS_ENTRY115_REG_OFST      (0x728)             /**< (ISC_HIS_ENTRY115) Histogram Entry x Offset */
#define ISC_HIS_ENTRY116_REG_OFST      (0x72C)             /**< (ISC_HIS_ENTRY116) Histogram Entry x Offset */
#define ISC_HIS_ENTRY117_REG_OFST      (0x730)             /**< (ISC_HIS_ENTRY117) Histogram Entry x Offset */
#define ISC_HIS_ENTRY118_REG_OFST      (0x734)             /**< (ISC_HIS_ENTRY118) Histogram Entry x Offset */
#define ISC_HIS_ENTRY119_REG_OFST      (0x738)             /**< (ISC_HIS_ENTRY119) Histogram Entry x Offset */
#define ISC_HIS_ENTRY120_REG_OFST      (0x73C)             /**< (ISC_HIS_ENTRY120) Histogram Entry x Offset */
#define ISC_HIS_ENTRY121_REG_OFST      (0x740)             /**< (ISC_HIS_ENTRY121) Histogram Entry x Offset */
#define ISC_HIS_ENTRY122_REG_OFST      (0x744)             /**< (ISC_HIS_ENTRY122) Histogram Entry x Offset */
#define ISC_HIS_ENTRY123_REG_OFST      (0x748)             /**< (ISC_HIS_ENTRY123) Histogram Entry x Offset */
#define ISC_HIS_ENTRY124_REG_OFST      (0x74C)             /**< (ISC_HIS_ENTRY124) Histogram Entry x Offset */
#define ISC_HIS_ENTRY125_REG_OFST      (0x750)             /**< (ISC_HIS_ENTRY125) Histogram Entry x Offset */
#define ISC_HIS_ENTRY126_REG_OFST      (0x754)             /**< (ISC_HIS_ENTRY126) Histogram Entry x Offset */
#define ISC_HIS_ENTRY127_REG_OFST      (0x758)             /**< (ISC_HIS_ENTRY127) Histogram Entry x Offset */
#define ISC_HIS_ENTRY128_REG_OFST      (0x75C)             /**< (ISC_HIS_ENTRY128) Histogram Entry x Offset */
#define ISC_HIS_ENTRY129_REG_OFST      (0x760)             /**< (ISC_HIS_ENTRY129) Histogram Entry x Offset */
#define ISC_HIS_ENTRY130_REG_OFST      (0x764)             /**< (ISC_HIS_ENTRY130) Histogram Entry x Offset */
#define ISC_HIS_ENTRY131_REG_OFST      (0x768)             /**< (ISC_HIS_ENTRY131) Histogram Entry x Offset */
#define ISC_HIS_ENTRY132_REG_OFST      (0x76C)             /**< (ISC_HIS_ENTRY132) Histogram Entry x Offset */
#define ISC_HIS_ENTRY133_REG_OFST      (0x770)             /**< (ISC_HIS_ENTRY133) Histogram Entry x Offset */
#define ISC_HIS_ENTRY134_REG_OFST      (0x774)             /**< (ISC_HIS_ENTRY134) Histogram Entry x Offset */
#define ISC_HIS_ENTRY135_REG_OFST      (0x778)             /**< (ISC_HIS_ENTRY135) Histogram Entry x Offset */
#define ISC_HIS_ENTRY136_REG_OFST      (0x77C)             /**< (ISC_HIS_ENTRY136) Histogram Entry x Offset */
#define ISC_HIS_ENTRY137_REG_OFST      (0x780)             /**< (ISC_HIS_ENTRY137) Histogram Entry x Offset */
#define ISC_HIS_ENTRY138_REG_OFST      (0x784)             /**< (ISC_HIS_ENTRY138) Histogram Entry x Offset */
#define ISC_HIS_ENTRY139_REG_OFST      (0x788)             /**< (ISC_HIS_ENTRY139) Histogram Entry x Offset */
#define ISC_HIS_ENTRY140_REG_OFST      (0x78C)             /**< (ISC_HIS_ENTRY140) Histogram Entry x Offset */
#define ISC_HIS_ENTRY141_REG_OFST      (0x790)             /**< (ISC_HIS_ENTRY141) Histogram Entry x Offset */
#define ISC_HIS_ENTRY142_REG_OFST      (0x794)             /**< (ISC_HIS_ENTRY142) Histogram Entry x Offset */
#define ISC_HIS_ENTRY143_REG_OFST      (0x798)             /**< (ISC_HIS_ENTRY143) Histogram Entry x Offset */
#define ISC_HIS_ENTRY144_REG_OFST      (0x79C)             /**< (ISC_HIS_ENTRY144) Histogram Entry x Offset */
#define ISC_HIS_ENTRY145_REG_OFST      (0x7A0)             /**< (ISC_HIS_ENTRY145) Histogram Entry x Offset */
#define ISC_HIS_ENTRY146_REG_OFST      (0x7A4)             /**< (ISC_HIS_ENTRY146) Histogram Entry x Offset */
#define ISC_HIS_ENTRY147_REG_OFST      (0x7A8)             /**< (ISC_HIS_ENTRY147) Histogram Entry x Offset */
#define ISC_HIS_ENTRY148_REG_OFST      (0x7AC)             /**< (ISC_HIS_ENTRY148) Histogram Entry x Offset */
#define ISC_HIS_ENTRY149_REG_OFST      (0x7B0)             /**< (ISC_HIS_ENTRY149) Histogram Entry x Offset */
#define ISC_HIS_ENTRY150_REG_OFST      (0x7B4)             /**< (ISC_HIS_ENTRY150) Histogram Entry x Offset */
#define ISC_HIS_ENTRY151_REG_OFST      (0x7B8)             /**< (ISC_HIS_ENTRY151) Histogram Entry x Offset */
#define ISC_HIS_ENTRY152_REG_OFST      (0x7BC)             /**< (ISC_HIS_ENTRY152) Histogram Entry x Offset */
#define ISC_HIS_ENTRY153_REG_OFST      (0x7C0)             /**< (ISC_HIS_ENTRY153) Histogram Entry x Offset */
#define ISC_HIS_ENTRY154_REG_OFST      (0x7C4)             /**< (ISC_HIS_ENTRY154) Histogram Entry x Offset */
#define ISC_HIS_ENTRY155_REG_OFST      (0x7C8)             /**< (ISC_HIS_ENTRY155) Histogram Entry x Offset */
#define ISC_HIS_ENTRY156_REG_OFST      (0x7CC)             /**< (ISC_HIS_ENTRY156) Histogram Entry x Offset */
#define ISC_HIS_ENTRY157_REG_OFST      (0x7D0)             /**< (ISC_HIS_ENTRY157) Histogram Entry x Offset */
#define ISC_HIS_ENTRY158_REG_OFST      (0x7D4)             /**< (ISC_HIS_ENTRY158) Histogram Entry x Offset */
#define ISC_HIS_ENTRY159_REG_OFST      (0x7D8)             /**< (ISC_HIS_ENTRY159) Histogram Entry x Offset */
#define ISC_HIS_ENTRY160_REG_OFST      (0x7DC)             /**< (ISC_HIS_ENTRY160) Histogram Entry x Offset */
#define ISC_HIS_ENTRY161_REG_OFST      (0x7E0)             /**< (ISC_HIS_ENTRY161) Histogram Entry x Offset */
#define ISC_HIS_ENTRY162_REG_OFST      (0x7E4)             /**< (ISC_HIS_ENTRY162) Histogram Entry x Offset */
#define ISC_HIS_ENTRY163_REG_OFST      (0x7E8)             /**< (ISC_HIS_ENTRY163) Histogram Entry x Offset */
#define ISC_HIS_ENTRY164_REG_OFST      (0x7EC)             /**< (ISC_HIS_ENTRY164) Histogram Entry x Offset */
#define ISC_HIS_ENTRY165_REG_OFST      (0x7F0)             /**< (ISC_HIS_ENTRY165) Histogram Entry x Offset */
#define ISC_HIS_ENTRY166_REG_OFST      (0x7F4)             /**< (ISC_HIS_ENTRY166) Histogram Entry x Offset */
#define ISC_HIS_ENTRY167_REG_OFST      (0x7F8)             /**< (ISC_HIS_ENTRY167) Histogram Entry x Offset */
#define ISC_HIS_ENTRY168_REG_OFST      (0x7FC)             /**< (ISC_HIS_ENTRY168) Histogram Entry x Offset */
#define ISC_HIS_ENTRY169_REG_OFST      (0x800)             /**< (ISC_HIS_ENTRY169) Histogram Entry x Offset */
#define ISC_HIS_ENTRY170_REG_OFST      (0x804)             /**< (ISC_HIS_ENTRY170) Histogram Entry x Offset */
#define ISC_HIS_ENTRY171_REG_OFST      (0x808)             /**< (ISC_HIS_ENTRY171) Histogram Entry x Offset */
#define ISC_HIS_ENTRY172_REG_OFST      (0x80C)             /**< (ISC_HIS_ENTRY172) Histogram Entry x Offset */
#define ISC_HIS_ENTRY173_REG_OFST      (0x810)             /**< (ISC_HIS_ENTRY173) Histogram Entry x Offset */
#define ISC_HIS_ENTRY174_REG_OFST      (0x814)             /**< (ISC_HIS_ENTRY174) Histogram Entry x Offset */
#define ISC_HIS_ENTRY175_REG_OFST      (0x818)             /**< (ISC_HIS_ENTRY175) Histogram Entry x Offset */
#define ISC_HIS_ENTRY176_REG_OFST      (0x81C)             /**< (ISC_HIS_ENTRY176) Histogram Entry x Offset */
#define ISC_HIS_ENTRY177_REG_OFST      (0x820)             /**< (ISC_HIS_ENTRY177) Histogram Entry x Offset */
#define ISC_HIS_ENTRY178_REG_OFST      (0x824)             /**< (ISC_HIS_ENTRY178) Histogram Entry x Offset */
#define ISC_HIS_ENTRY179_REG_OFST      (0x828)             /**< (ISC_HIS_ENTRY179) Histogram Entry x Offset */
#define ISC_HIS_ENTRY180_REG_OFST      (0x82C)             /**< (ISC_HIS_ENTRY180) Histogram Entry x Offset */
#define ISC_HIS_ENTRY181_REG_OFST      (0x830)             /**< (ISC_HIS_ENTRY181) Histogram Entry x Offset */
#define ISC_HIS_ENTRY182_REG_OFST      (0x834)             /**< (ISC_HIS_ENTRY182) Histogram Entry x Offset */
#define ISC_HIS_ENTRY183_REG_OFST      (0x838)             /**< (ISC_HIS_ENTRY183) Histogram Entry x Offset */
#define ISC_HIS_ENTRY184_REG_OFST      (0x83C)             /**< (ISC_HIS_ENTRY184) Histogram Entry x Offset */
#define ISC_HIS_ENTRY185_REG_OFST      (0x840)             /**< (ISC_HIS_ENTRY185) Histogram Entry x Offset */
#define ISC_HIS_ENTRY186_REG_OFST      (0x844)             /**< (ISC_HIS_ENTRY186) Histogram Entry x Offset */
#define ISC_HIS_ENTRY187_REG_OFST      (0x848)             /**< (ISC_HIS_ENTRY187) Histogram Entry x Offset */
#define ISC_HIS_ENTRY188_REG_OFST      (0x84C)             /**< (ISC_HIS_ENTRY188) Histogram Entry x Offset */
#define ISC_HIS_ENTRY189_REG_OFST      (0x850)             /**< (ISC_HIS_ENTRY189) Histogram Entry x Offset */
#define ISC_HIS_ENTRY190_REG_OFST      (0x854)             /**< (ISC_HIS_ENTRY190) Histogram Entry x Offset */
#define ISC_HIS_ENTRY191_REG_OFST      (0x858)             /**< (ISC_HIS_ENTRY191) Histogram Entry x Offset */
#define ISC_HIS_ENTRY192_REG_OFST      (0x85C)             /**< (ISC_HIS_ENTRY192) Histogram Entry x Offset */
#define ISC_HIS_ENTRY193_REG_OFST      (0x860)             /**< (ISC_HIS_ENTRY193) Histogram Entry x Offset */
#define ISC_HIS_ENTRY194_REG_OFST      (0x864)             /**< (ISC_HIS_ENTRY194) Histogram Entry x Offset */
#define ISC_HIS_ENTRY195_REG_OFST      (0x868)             /**< (ISC_HIS_ENTRY195) Histogram Entry x Offset */
#define ISC_HIS_ENTRY196_REG_OFST      (0x86C)             /**< (ISC_HIS_ENTRY196) Histogram Entry x Offset */
#define ISC_HIS_ENTRY197_REG_OFST      (0x870)             /**< (ISC_HIS_ENTRY197) Histogram Entry x Offset */
#define ISC_HIS_ENTRY198_REG_OFST      (0x874)             /**< (ISC_HIS_ENTRY198) Histogram Entry x Offset */
#define ISC_HIS_ENTRY199_REG_OFST      (0x878)             /**< (ISC_HIS_ENTRY199) Histogram Entry x Offset */
#define ISC_HIS_ENTRY200_REG_OFST      (0x87C)             /**< (ISC_HIS_ENTRY200) Histogram Entry x Offset */
#define ISC_HIS_ENTRY201_REG_OFST      (0x880)             /**< (ISC_HIS_ENTRY201) Histogram Entry x Offset */
#define ISC_HIS_ENTRY202_REG_OFST      (0x884)             /**< (ISC_HIS_ENTRY202) Histogram Entry x Offset */
#define ISC_HIS_ENTRY203_REG_OFST      (0x888)             /**< (ISC_HIS_ENTRY203) Histogram Entry x Offset */
#define ISC_HIS_ENTRY204_REG_OFST      (0x88C)             /**< (ISC_HIS_ENTRY204) Histogram Entry x Offset */
#define ISC_HIS_ENTRY205_REG_OFST      (0x890)             /**< (ISC_HIS_ENTRY205) Histogram Entry x Offset */
#define ISC_HIS_ENTRY206_REG_OFST      (0x894)             /**< (ISC_HIS_ENTRY206) Histogram Entry x Offset */
#define ISC_HIS_ENTRY207_REG_OFST      (0x898)             /**< (ISC_HIS_ENTRY207) Histogram Entry x Offset */
#define ISC_HIS_ENTRY208_REG_OFST      (0x89C)             /**< (ISC_HIS_ENTRY208) Histogram Entry x Offset */
#define ISC_HIS_ENTRY209_REG_OFST      (0x8A0)             /**< (ISC_HIS_ENTRY209) Histogram Entry x Offset */
#define ISC_HIS_ENTRY210_REG_OFST      (0x8A4)             /**< (ISC_HIS_ENTRY210) Histogram Entry x Offset */
#define ISC_HIS_ENTRY211_REG_OFST      (0x8A8)             /**< (ISC_HIS_ENTRY211) Histogram Entry x Offset */
#define ISC_HIS_ENTRY212_REG_OFST      (0x8AC)             /**< (ISC_HIS_ENTRY212) Histogram Entry x Offset */
#define ISC_HIS_ENTRY213_REG_OFST      (0x8B0)             /**< (ISC_HIS_ENTRY213) Histogram Entry x Offset */
#define ISC_HIS_ENTRY214_REG_OFST      (0x8B4)             /**< (ISC_HIS_ENTRY214) Histogram Entry x Offset */
#define ISC_HIS_ENTRY215_REG_OFST      (0x8B8)             /**< (ISC_HIS_ENTRY215) Histogram Entry x Offset */
#define ISC_HIS_ENTRY216_REG_OFST      (0x8BC)             /**< (ISC_HIS_ENTRY216) Histogram Entry x Offset */
#define ISC_HIS_ENTRY217_REG_OFST      (0x8C0)             /**< (ISC_HIS_ENTRY217) Histogram Entry x Offset */
#define ISC_HIS_ENTRY218_REG_OFST      (0x8C4)             /**< (ISC_HIS_ENTRY218) Histogram Entry x Offset */
#define ISC_HIS_ENTRY219_REG_OFST      (0x8C8)             /**< (ISC_HIS_ENTRY219) Histogram Entry x Offset */
#define ISC_HIS_ENTRY220_REG_OFST      (0x8CC)             /**< (ISC_HIS_ENTRY220) Histogram Entry x Offset */
#define ISC_HIS_ENTRY221_REG_OFST      (0x8D0)             /**< (ISC_HIS_ENTRY221) Histogram Entry x Offset */
#define ISC_HIS_ENTRY222_REG_OFST      (0x8D4)             /**< (ISC_HIS_ENTRY222) Histogram Entry x Offset */
#define ISC_HIS_ENTRY223_REG_OFST      (0x8D8)             /**< (ISC_HIS_ENTRY223) Histogram Entry x Offset */
#define ISC_HIS_ENTRY224_REG_OFST      (0x8DC)             /**< (ISC_HIS_ENTRY224) Histogram Entry x Offset */
#define ISC_HIS_ENTRY225_REG_OFST      (0x8E0)             /**< (ISC_HIS_ENTRY225) Histogram Entry x Offset */
#define ISC_HIS_ENTRY226_REG_OFST      (0x8E4)             /**< (ISC_HIS_ENTRY226) Histogram Entry x Offset */
#define ISC_HIS_ENTRY227_REG_OFST      (0x8E8)             /**< (ISC_HIS_ENTRY227) Histogram Entry x Offset */
#define ISC_HIS_ENTRY228_REG_OFST      (0x8EC)             /**< (ISC_HIS_ENTRY228) Histogram Entry x Offset */
#define ISC_HIS_ENTRY229_REG_OFST      (0x8F0)             /**< (ISC_HIS_ENTRY229) Histogram Entry x Offset */
#define ISC_HIS_ENTRY230_REG_OFST      (0x8F4)             /**< (ISC_HIS_ENTRY230) Histogram Entry x Offset */
#define ISC_HIS_ENTRY231_REG_OFST      (0x8F8)             /**< (ISC_HIS_ENTRY231) Histogram Entry x Offset */
#define ISC_HIS_ENTRY232_REG_OFST      (0x8FC)             /**< (ISC_HIS_ENTRY232) Histogram Entry x Offset */
#define ISC_HIS_ENTRY233_REG_OFST      (0x900)             /**< (ISC_HIS_ENTRY233) Histogram Entry x Offset */
#define ISC_HIS_ENTRY234_REG_OFST      (0x904)             /**< (ISC_HIS_ENTRY234) Histogram Entry x Offset */
#define ISC_HIS_ENTRY235_REG_OFST      (0x908)             /**< (ISC_HIS_ENTRY235) Histogram Entry x Offset */
#define ISC_HIS_ENTRY236_REG_OFST      (0x90C)             /**< (ISC_HIS_ENTRY236) Histogram Entry x Offset */
#define ISC_HIS_ENTRY237_REG_OFST      (0x910)             /**< (ISC_HIS_ENTRY237) Histogram Entry x Offset */
#define ISC_HIS_ENTRY238_REG_OFST      (0x914)             /**< (ISC_HIS_ENTRY238) Histogram Entry x Offset */
#define ISC_HIS_ENTRY239_REG_OFST      (0x918)             /**< (ISC_HIS_ENTRY239) Histogram Entry x Offset */
#define ISC_HIS_ENTRY240_REG_OFST      (0x91C)             /**< (ISC_HIS_ENTRY240) Histogram Entry x Offset */
#define ISC_HIS_ENTRY241_REG_OFST      (0x920)             /**< (ISC_HIS_ENTRY241) Histogram Entry x Offset */
#define ISC_HIS_ENTRY242_REG_OFST      (0x924)             /**< (ISC_HIS_ENTRY242) Histogram Entry x Offset */
#define ISC_HIS_ENTRY243_REG_OFST      (0x928)             /**< (ISC_HIS_ENTRY243) Histogram Entry x Offset */
#define ISC_HIS_ENTRY244_REG_OFST      (0x92C)             /**< (ISC_HIS_ENTRY244) Histogram Entry x Offset */
#define ISC_HIS_ENTRY245_REG_OFST      (0x930)             /**< (ISC_HIS_ENTRY245) Histogram Entry x Offset */
#define ISC_HIS_ENTRY246_REG_OFST      (0x934)             /**< (ISC_HIS_ENTRY246) Histogram Entry x Offset */
#define ISC_HIS_ENTRY247_REG_OFST      (0x938)             /**< (ISC_HIS_ENTRY247) Histogram Entry x Offset */
#define ISC_HIS_ENTRY248_REG_OFST      (0x93C)             /**< (ISC_HIS_ENTRY248) Histogram Entry x Offset */
#define ISC_HIS_ENTRY249_REG_OFST      (0x940)             /**< (ISC_HIS_ENTRY249) Histogram Entry x Offset */
#define ISC_HIS_ENTRY250_REG_OFST      (0x944)             /**< (ISC_HIS_ENTRY250) Histogram Entry x Offset */
#define ISC_HIS_ENTRY251_REG_OFST      (0x948)             /**< (ISC_HIS_ENTRY251) Histogram Entry x Offset */
#define ISC_HIS_ENTRY252_REG_OFST      (0x94C)             /**< (ISC_HIS_ENTRY252) Histogram Entry x Offset */
#define ISC_HIS_ENTRY253_REG_OFST      (0x950)             /**< (ISC_HIS_ENTRY253) Histogram Entry x Offset */
#define ISC_HIS_ENTRY254_REG_OFST      (0x954)             /**< (ISC_HIS_ENTRY254) Histogram Entry x Offset */
#define ISC_HIS_ENTRY255_REG_OFST      (0x958)             /**< (ISC_HIS_ENTRY255) Histogram Entry x Offset */
#define ISC_HIS_ENTRY256_REG_OFST      (0x95C)             /**< (ISC_HIS_ENTRY256) Histogram Entry x Offset */
#define ISC_HIS_ENTRY257_REG_OFST      (0x960)             /**< (ISC_HIS_ENTRY257) Histogram Entry x Offset */
#define ISC_HIS_ENTRY258_REG_OFST      (0x964)             /**< (ISC_HIS_ENTRY258) Histogram Entry x Offset */
#define ISC_HIS_ENTRY259_REG_OFST      (0x968)             /**< (ISC_HIS_ENTRY259) Histogram Entry x Offset */
#define ISC_HIS_ENTRY260_REG_OFST      (0x96C)             /**< (ISC_HIS_ENTRY260) Histogram Entry x Offset */
#define ISC_HIS_ENTRY261_REG_OFST      (0x970)             /**< (ISC_HIS_ENTRY261) Histogram Entry x Offset */
#define ISC_HIS_ENTRY262_REG_OFST      (0x974)             /**< (ISC_HIS_ENTRY262) Histogram Entry x Offset */
#define ISC_HIS_ENTRY263_REG_OFST      (0x978)             /**< (ISC_HIS_ENTRY263) Histogram Entry x Offset */
#define ISC_HIS_ENTRY264_REG_OFST      (0x97C)             /**< (ISC_HIS_ENTRY264) Histogram Entry x Offset */
#define ISC_HIS_ENTRY265_REG_OFST      (0x980)             /**< (ISC_HIS_ENTRY265) Histogram Entry x Offset */
#define ISC_HIS_ENTRY266_REG_OFST      (0x984)             /**< (ISC_HIS_ENTRY266) Histogram Entry x Offset */
#define ISC_HIS_ENTRY267_REG_OFST      (0x988)             /**< (ISC_HIS_ENTRY267) Histogram Entry x Offset */
#define ISC_HIS_ENTRY268_REG_OFST      (0x98C)             /**< (ISC_HIS_ENTRY268) Histogram Entry x Offset */
#define ISC_HIS_ENTRY269_REG_OFST      (0x990)             /**< (ISC_HIS_ENTRY269) Histogram Entry x Offset */
#define ISC_HIS_ENTRY270_REG_OFST      (0x994)             /**< (ISC_HIS_ENTRY270) Histogram Entry x Offset */
#define ISC_HIS_ENTRY271_REG_OFST      (0x998)             /**< (ISC_HIS_ENTRY271) Histogram Entry x Offset */
#define ISC_HIS_ENTRY272_REG_OFST      (0x99C)             /**< (ISC_HIS_ENTRY272) Histogram Entry x Offset */
#define ISC_HIS_ENTRY273_REG_OFST      (0x9A0)             /**< (ISC_HIS_ENTRY273) Histogram Entry x Offset */
#define ISC_HIS_ENTRY274_REG_OFST      (0x9A4)             /**< (ISC_HIS_ENTRY274) Histogram Entry x Offset */
#define ISC_HIS_ENTRY275_REG_OFST      (0x9A8)             /**< (ISC_HIS_ENTRY275) Histogram Entry x Offset */
#define ISC_HIS_ENTRY276_REG_OFST      (0x9AC)             /**< (ISC_HIS_ENTRY276) Histogram Entry x Offset */
#define ISC_HIS_ENTRY277_REG_OFST      (0x9B0)             /**< (ISC_HIS_ENTRY277) Histogram Entry x Offset */
#define ISC_HIS_ENTRY278_REG_OFST      (0x9B4)             /**< (ISC_HIS_ENTRY278) Histogram Entry x Offset */
#define ISC_HIS_ENTRY279_REG_OFST      (0x9B8)             /**< (ISC_HIS_ENTRY279) Histogram Entry x Offset */
#define ISC_HIS_ENTRY280_REG_OFST      (0x9BC)             /**< (ISC_HIS_ENTRY280) Histogram Entry x Offset */
#define ISC_HIS_ENTRY281_REG_OFST      (0x9C0)             /**< (ISC_HIS_ENTRY281) Histogram Entry x Offset */
#define ISC_HIS_ENTRY282_REG_OFST      (0x9C4)             /**< (ISC_HIS_ENTRY282) Histogram Entry x Offset */
#define ISC_HIS_ENTRY283_REG_OFST      (0x9C8)             /**< (ISC_HIS_ENTRY283) Histogram Entry x Offset */
#define ISC_HIS_ENTRY284_REG_OFST      (0x9CC)             /**< (ISC_HIS_ENTRY284) Histogram Entry x Offset */
#define ISC_HIS_ENTRY285_REG_OFST      (0x9D0)             /**< (ISC_HIS_ENTRY285) Histogram Entry x Offset */
#define ISC_HIS_ENTRY286_REG_OFST      (0x9D4)             /**< (ISC_HIS_ENTRY286) Histogram Entry x Offset */
#define ISC_HIS_ENTRY287_REG_OFST      (0x9D8)             /**< (ISC_HIS_ENTRY287) Histogram Entry x Offset */
#define ISC_HIS_ENTRY288_REG_OFST      (0x9DC)             /**< (ISC_HIS_ENTRY288) Histogram Entry x Offset */
#define ISC_HIS_ENTRY289_REG_OFST      (0x9E0)             /**< (ISC_HIS_ENTRY289) Histogram Entry x Offset */
#define ISC_HIS_ENTRY290_REG_OFST      (0x9E4)             /**< (ISC_HIS_ENTRY290) Histogram Entry x Offset */
#define ISC_HIS_ENTRY291_REG_OFST      (0x9E8)             /**< (ISC_HIS_ENTRY291) Histogram Entry x Offset */
#define ISC_HIS_ENTRY292_REG_OFST      (0x9EC)             /**< (ISC_HIS_ENTRY292) Histogram Entry x Offset */
#define ISC_HIS_ENTRY293_REG_OFST      (0x9F0)             /**< (ISC_HIS_ENTRY293) Histogram Entry x Offset */
#define ISC_HIS_ENTRY294_REG_OFST      (0x9F4)             /**< (ISC_HIS_ENTRY294) Histogram Entry x Offset */
#define ISC_HIS_ENTRY295_REG_OFST      (0x9F8)             /**< (ISC_HIS_ENTRY295) Histogram Entry x Offset */
#define ISC_HIS_ENTRY296_REG_OFST      (0x9FC)             /**< (ISC_HIS_ENTRY296) Histogram Entry x Offset */
#define ISC_HIS_ENTRY297_REG_OFST      (0xA00)             /**< (ISC_HIS_ENTRY297) Histogram Entry x Offset */
#define ISC_HIS_ENTRY298_REG_OFST      (0xA04)             /**< (ISC_HIS_ENTRY298) Histogram Entry x Offset */
#define ISC_HIS_ENTRY299_REG_OFST      (0xA08)             /**< (ISC_HIS_ENTRY299) Histogram Entry x Offset */
#define ISC_HIS_ENTRY300_REG_OFST      (0xA0C)             /**< (ISC_HIS_ENTRY300) Histogram Entry x Offset */
#define ISC_HIS_ENTRY301_REG_OFST      (0xA10)             /**< (ISC_HIS_ENTRY301) Histogram Entry x Offset */
#define ISC_HIS_ENTRY302_REG_OFST      (0xA14)             /**< (ISC_HIS_ENTRY302) Histogram Entry x Offset */
#define ISC_HIS_ENTRY303_REG_OFST      (0xA18)             /**< (ISC_HIS_ENTRY303) Histogram Entry x Offset */
#define ISC_HIS_ENTRY304_REG_OFST      (0xA1C)             /**< (ISC_HIS_ENTRY304) Histogram Entry x Offset */
#define ISC_HIS_ENTRY305_REG_OFST      (0xA20)             /**< (ISC_HIS_ENTRY305) Histogram Entry x Offset */
#define ISC_HIS_ENTRY306_REG_OFST      (0xA24)             /**< (ISC_HIS_ENTRY306) Histogram Entry x Offset */
#define ISC_HIS_ENTRY307_REG_OFST      (0xA28)             /**< (ISC_HIS_ENTRY307) Histogram Entry x Offset */
#define ISC_HIS_ENTRY308_REG_OFST      (0xA2C)             /**< (ISC_HIS_ENTRY308) Histogram Entry x Offset */
#define ISC_HIS_ENTRY309_REG_OFST      (0xA30)             /**< (ISC_HIS_ENTRY309) Histogram Entry x Offset */
#define ISC_HIS_ENTRY310_REG_OFST      (0xA34)             /**< (ISC_HIS_ENTRY310) Histogram Entry x Offset */
#define ISC_HIS_ENTRY311_REG_OFST      (0xA38)             /**< (ISC_HIS_ENTRY311) Histogram Entry x Offset */
#define ISC_HIS_ENTRY312_REG_OFST      (0xA3C)             /**< (ISC_HIS_ENTRY312) Histogram Entry x Offset */
#define ISC_HIS_ENTRY313_REG_OFST      (0xA40)             /**< (ISC_HIS_ENTRY313) Histogram Entry x Offset */
#define ISC_HIS_ENTRY314_REG_OFST      (0xA44)             /**< (ISC_HIS_ENTRY314) Histogram Entry x Offset */
#define ISC_HIS_ENTRY315_REG_OFST      (0xA48)             /**< (ISC_HIS_ENTRY315) Histogram Entry x Offset */
#define ISC_HIS_ENTRY316_REG_OFST      (0xA4C)             /**< (ISC_HIS_ENTRY316) Histogram Entry x Offset */
#define ISC_HIS_ENTRY317_REG_OFST      (0xA50)             /**< (ISC_HIS_ENTRY317) Histogram Entry x Offset */
#define ISC_HIS_ENTRY318_REG_OFST      (0xA54)             /**< (ISC_HIS_ENTRY318) Histogram Entry x Offset */
#define ISC_HIS_ENTRY319_REG_OFST      (0xA58)             /**< (ISC_HIS_ENTRY319) Histogram Entry x Offset */
#define ISC_HIS_ENTRY320_REG_OFST      (0xA5C)             /**< (ISC_HIS_ENTRY320) Histogram Entry x Offset */
#define ISC_HIS_ENTRY321_REG_OFST      (0xA60)             /**< (ISC_HIS_ENTRY321) Histogram Entry x Offset */
#define ISC_HIS_ENTRY322_REG_OFST      (0xA64)             /**< (ISC_HIS_ENTRY322) Histogram Entry x Offset */
#define ISC_HIS_ENTRY323_REG_OFST      (0xA68)             /**< (ISC_HIS_ENTRY323) Histogram Entry x Offset */
#define ISC_HIS_ENTRY324_REG_OFST      (0xA6C)             /**< (ISC_HIS_ENTRY324) Histogram Entry x Offset */
#define ISC_HIS_ENTRY325_REG_OFST      (0xA70)             /**< (ISC_HIS_ENTRY325) Histogram Entry x Offset */
#define ISC_HIS_ENTRY326_REG_OFST      (0xA74)             /**< (ISC_HIS_ENTRY326) Histogram Entry x Offset */
#define ISC_HIS_ENTRY327_REG_OFST      (0xA78)             /**< (ISC_HIS_ENTRY327) Histogram Entry x Offset */
#define ISC_HIS_ENTRY328_REG_OFST      (0xA7C)             /**< (ISC_HIS_ENTRY328) Histogram Entry x Offset */
#define ISC_HIS_ENTRY329_REG_OFST      (0xA80)             /**< (ISC_HIS_ENTRY329) Histogram Entry x Offset */
#define ISC_HIS_ENTRY330_REG_OFST      (0xA84)             /**< (ISC_HIS_ENTRY330) Histogram Entry x Offset */
#define ISC_HIS_ENTRY331_REG_OFST      (0xA88)             /**< (ISC_HIS_ENTRY331) Histogram Entry x Offset */
#define ISC_HIS_ENTRY332_REG_OFST      (0xA8C)             /**< (ISC_HIS_ENTRY332) Histogram Entry x Offset */
#define ISC_HIS_ENTRY333_REG_OFST      (0xA90)             /**< (ISC_HIS_ENTRY333) Histogram Entry x Offset */
#define ISC_HIS_ENTRY334_REG_OFST      (0xA94)             /**< (ISC_HIS_ENTRY334) Histogram Entry x Offset */
#define ISC_HIS_ENTRY335_REG_OFST      (0xA98)             /**< (ISC_HIS_ENTRY335) Histogram Entry x Offset */
#define ISC_HIS_ENTRY336_REG_OFST      (0xA9C)             /**< (ISC_HIS_ENTRY336) Histogram Entry x Offset */
#define ISC_HIS_ENTRY337_REG_OFST      (0xAA0)             /**< (ISC_HIS_ENTRY337) Histogram Entry x Offset */
#define ISC_HIS_ENTRY338_REG_OFST      (0xAA4)             /**< (ISC_HIS_ENTRY338) Histogram Entry x Offset */
#define ISC_HIS_ENTRY339_REG_OFST      (0xAA8)             /**< (ISC_HIS_ENTRY339) Histogram Entry x Offset */
#define ISC_HIS_ENTRY340_REG_OFST      (0xAAC)             /**< (ISC_HIS_ENTRY340) Histogram Entry x Offset */
#define ISC_HIS_ENTRY341_REG_OFST      (0xAB0)             /**< (ISC_HIS_ENTRY341) Histogram Entry x Offset */
#define ISC_HIS_ENTRY342_REG_OFST      (0xAB4)             /**< (ISC_HIS_ENTRY342) Histogram Entry x Offset */
#define ISC_HIS_ENTRY343_REG_OFST      (0xAB8)             /**< (ISC_HIS_ENTRY343) Histogram Entry x Offset */
#define ISC_HIS_ENTRY344_REG_OFST      (0xABC)             /**< (ISC_HIS_ENTRY344) Histogram Entry x Offset */
#define ISC_HIS_ENTRY345_REG_OFST      (0xAC0)             /**< (ISC_HIS_ENTRY345) Histogram Entry x Offset */
#define ISC_HIS_ENTRY346_REG_OFST      (0xAC4)             /**< (ISC_HIS_ENTRY346) Histogram Entry x Offset */
#define ISC_HIS_ENTRY347_REG_OFST      (0xAC8)             /**< (ISC_HIS_ENTRY347) Histogram Entry x Offset */
#define ISC_HIS_ENTRY348_REG_OFST      (0xACC)             /**< (ISC_HIS_ENTRY348) Histogram Entry x Offset */
#define ISC_HIS_ENTRY349_REG_OFST      (0xAD0)             /**< (ISC_HIS_ENTRY349) Histogram Entry x Offset */
#define ISC_HIS_ENTRY350_REG_OFST      (0xAD4)             /**< (ISC_HIS_ENTRY350) Histogram Entry x Offset */
#define ISC_HIS_ENTRY351_REG_OFST      (0xAD8)             /**< (ISC_HIS_ENTRY351) Histogram Entry x Offset */
#define ISC_HIS_ENTRY352_REG_OFST      (0xADC)             /**< (ISC_HIS_ENTRY352) Histogram Entry x Offset */
#define ISC_HIS_ENTRY353_REG_OFST      (0xAE0)             /**< (ISC_HIS_ENTRY353) Histogram Entry x Offset */
#define ISC_HIS_ENTRY354_REG_OFST      (0xAE4)             /**< (ISC_HIS_ENTRY354) Histogram Entry x Offset */
#define ISC_HIS_ENTRY355_REG_OFST      (0xAE8)             /**< (ISC_HIS_ENTRY355) Histogram Entry x Offset */
#define ISC_HIS_ENTRY356_REG_OFST      (0xAEC)             /**< (ISC_HIS_ENTRY356) Histogram Entry x Offset */
#define ISC_HIS_ENTRY357_REG_OFST      (0xAF0)             /**< (ISC_HIS_ENTRY357) Histogram Entry x Offset */
#define ISC_HIS_ENTRY358_REG_OFST      (0xAF4)             /**< (ISC_HIS_ENTRY358) Histogram Entry x Offset */
#define ISC_HIS_ENTRY359_REG_OFST      (0xAF8)             /**< (ISC_HIS_ENTRY359) Histogram Entry x Offset */
#define ISC_HIS_ENTRY360_REG_OFST      (0xAFC)             /**< (ISC_HIS_ENTRY360) Histogram Entry x Offset */
#define ISC_HIS_ENTRY361_REG_OFST      (0xB00)             /**< (ISC_HIS_ENTRY361) Histogram Entry x Offset */
#define ISC_HIS_ENTRY362_REG_OFST      (0xB04)             /**< (ISC_HIS_ENTRY362) Histogram Entry x Offset */
#define ISC_HIS_ENTRY363_REG_OFST      (0xB08)             /**< (ISC_HIS_ENTRY363) Histogram Entry x Offset */
#define ISC_HIS_ENTRY364_REG_OFST      (0xB0C)             /**< (ISC_HIS_ENTRY364) Histogram Entry x Offset */
#define ISC_HIS_ENTRY365_REG_OFST      (0xB10)             /**< (ISC_HIS_ENTRY365) Histogram Entry x Offset */
#define ISC_HIS_ENTRY366_REG_OFST      (0xB14)             /**< (ISC_HIS_ENTRY366) Histogram Entry x Offset */
#define ISC_HIS_ENTRY367_REG_OFST      (0xB18)             /**< (ISC_HIS_ENTRY367) Histogram Entry x Offset */
#define ISC_HIS_ENTRY368_REG_OFST      (0xB1C)             /**< (ISC_HIS_ENTRY368) Histogram Entry x Offset */
#define ISC_HIS_ENTRY369_REG_OFST      (0xB20)             /**< (ISC_HIS_ENTRY369) Histogram Entry x Offset */
#define ISC_HIS_ENTRY370_REG_OFST      (0xB24)             /**< (ISC_HIS_ENTRY370) Histogram Entry x Offset */
#define ISC_HIS_ENTRY371_REG_OFST      (0xB28)             /**< (ISC_HIS_ENTRY371) Histogram Entry x Offset */
#define ISC_HIS_ENTRY372_REG_OFST      (0xB2C)             /**< (ISC_HIS_ENTRY372) Histogram Entry x Offset */
#define ISC_HIS_ENTRY373_REG_OFST      (0xB30)             /**< (ISC_HIS_ENTRY373) Histogram Entry x Offset */
#define ISC_HIS_ENTRY374_REG_OFST      (0xB34)             /**< (ISC_HIS_ENTRY374) Histogram Entry x Offset */
#define ISC_HIS_ENTRY375_REG_OFST      (0xB38)             /**< (ISC_HIS_ENTRY375) Histogram Entry x Offset */
#define ISC_HIS_ENTRY376_REG_OFST      (0xB3C)             /**< (ISC_HIS_ENTRY376) Histogram Entry x Offset */
#define ISC_HIS_ENTRY377_REG_OFST      (0xB40)             /**< (ISC_HIS_ENTRY377) Histogram Entry x Offset */
#define ISC_HIS_ENTRY378_REG_OFST      (0xB44)             /**< (ISC_HIS_ENTRY378) Histogram Entry x Offset */
#define ISC_HIS_ENTRY379_REG_OFST      (0xB48)             /**< (ISC_HIS_ENTRY379) Histogram Entry x Offset */
#define ISC_HIS_ENTRY380_REG_OFST      (0xB4C)             /**< (ISC_HIS_ENTRY380) Histogram Entry x Offset */
#define ISC_HIS_ENTRY381_REG_OFST      (0xB50)             /**< (ISC_HIS_ENTRY381) Histogram Entry x Offset */
#define ISC_HIS_ENTRY382_REG_OFST      (0xB54)             /**< (ISC_HIS_ENTRY382) Histogram Entry x Offset */
#define ISC_HIS_ENTRY383_REG_OFST      (0xB58)             /**< (ISC_HIS_ENTRY383) Histogram Entry x Offset */
#define ISC_HIS_ENTRY384_REG_OFST      (0xB5C)             /**< (ISC_HIS_ENTRY384) Histogram Entry x Offset */
#define ISC_HIS_ENTRY385_REG_OFST      (0xB60)             /**< (ISC_HIS_ENTRY385) Histogram Entry x Offset */
#define ISC_HIS_ENTRY386_REG_OFST      (0xB64)             /**< (ISC_HIS_ENTRY386) Histogram Entry x Offset */
#define ISC_HIS_ENTRY387_REG_OFST      (0xB68)             /**< (ISC_HIS_ENTRY387) Histogram Entry x Offset */
#define ISC_HIS_ENTRY388_REG_OFST      (0xB6C)             /**< (ISC_HIS_ENTRY388) Histogram Entry x Offset */
#define ISC_HIS_ENTRY389_REG_OFST      (0xB70)             /**< (ISC_HIS_ENTRY389) Histogram Entry x Offset */
#define ISC_HIS_ENTRY390_REG_OFST      (0xB74)             /**< (ISC_HIS_ENTRY390) Histogram Entry x Offset */
#define ISC_HIS_ENTRY391_REG_OFST      (0xB78)             /**< (ISC_HIS_ENTRY391) Histogram Entry x Offset */
#define ISC_HIS_ENTRY392_REG_OFST      (0xB7C)             /**< (ISC_HIS_ENTRY392) Histogram Entry x Offset */
#define ISC_HIS_ENTRY393_REG_OFST      (0xB80)             /**< (ISC_HIS_ENTRY393) Histogram Entry x Offset */
#define ISC_HIS_ENTRY394_REG_OFST      (0xB84)             /**< (ISC_HIS_ENTRY394) Histogram Entry x Offset */
#define ISC_HIS_ENTRY395_REG_OFST      (0xB88)             /**< (ISC_HIS_ENTRY395) Histogram Entry x Offset */
#define ISC_HIS_ENTRY396_REG_OFST      (0xB8C)             /**< (ISC_HIS_ENTRY396) Histogram Entry x Offset */
#define ISC_HIS_ENTRY397_REG_OFST      (0xB90)             /**< (ISC_HIS_ENTRY397) Histogram Entry x Offset */
#define ISC_HIS_ENTRY398_REG_OFST      (0xB94)             /**< (ISC_HIS_ENTRY398) Histogram Entry x Offset */
#define ISC_HIS_ENTRY399_REG_OFST      (0xB98)             /**< (ISC_HIS_ENTRY399) Histogram Entry x Offset */
#define ISC_HIS_ENTRY400_REG_OFST      (0xB9C)             /**< (ISC_HIS_ENTRY400) Histogram Entry x Offset */
#define ISC_HIS_ENTRY401_REG_OFST      (0xBA0)             /**< (ISC_HIS_ENTRY401) Histogram Entry x Offset */
#define ISC_HIS_ENTRY402_REG_OFST      (0xBA4)             /**< (ISC_HIS_ENTRY402) Histogram Entry x Offset */
#define ISC_HIS_ENTRY403_REG_OFST      (0xBA8)             /**< (ISC_HIS_ENTRY403) Histogram Entry x Offset */
#define ISC_HIS_ENTRY404_REG_OFST      (0xBAC)             /**< (ISC_HIS_ENTRY404) Histogram Entry x Offset */
#define ISC_HIS_ENTRY405_REG_OFST      (0xBB0)             /**< (ISC_HIS_ENTRY405) Histogram Entry x Offset */
#define ISC_HIS_ENTRY406_REG_OFST      (0xBB4)             /**< (ISC_HIS_ENTRY406) Histogram Entry x Offset */
#define ISC_HIS_ENTRY407_REG_OFST      (0xBB8)             /**< (ISC_HIS_ENTRY407) Histogram Entry x Offset */
#define ISC_HIS_ENTRY408_REG_OFST      (0xBBC)             /**< (ISC_HIS_ENTRY408) Histogram Entry x Offset */
#define ISC_HIS_ENTRY409_REG_OFST      (0xBC0)             /**< (ISC_HIS_ENTRY409) Histogram Entry x Offset */
#define ISC_HIS_ENTRY410_REG_OFST      (0xBC4)             /**< (ISC_HIS_ENTRY410) Histogram Entry x Offset */
#define ISC_HIS_ENTRY411_REG_OFST      (0xBC8)             /**< (ISC_HIS_ENTRY411) Histogram Entry x Offset */
#define ISC_HIS_ENTRY412_REG_OFST      (0xBCC)             /**< (ISC_HIS_ENTRY412) Histogram Entry x Offset */
#define ISC_HIS_ENTRY413_REG_OFST      (0xBD0)             /**< (ISC_HIS_ENTRY413) Histogram Entry x Offset */
#define ISC_HIS_ENTRY414_REG_OFST      (0xBD4)             /**< (ISC_HIS_ENTRY414) Histogram Entry x Offset */
#define ISC_HIS_ENTRY415_REG_OFST      (0xBD8)             /**< (ISC_HIS_ENTRY415) Histogram Entry x Offset */
#define ISC_HIS_ENTRY416_REG_OFST      (0xBDC)             /**< (ISC_HIS_ENTRY416) Histogram Entry x Offset */
#define ISC_HIS_ENTRY417_REG_OFST      (0xBE0)             /**< (ISC_HIS_ENTRY417) Histogram Entry x Offset */
#define ISC_HIS_ENTRY418_REG_OFST      (0xBE4)             /**< (ISC_HIS_ENTRY418) Histogram Entry x Offset */
#define ISC_HIS_ENTRY419_REG_OFST      (0xBE8)             /**< (ISC_HIS_ENTRY419) Histogram Entry x Offset */
#define ISC_HIS_ENTRY420_REG_OFST      (0xBEC)             /**< (ISC_HIS_ENTRY420) Histogram Entry x Offset */
#define ISC_HIS_ENTRY421_REG_OFST      (0xBF0)             /**< (ISC_HIS_ENTRY421) Histogram Entry x Offset */
#define ISC_HIS_ENTRY422_REG_OFST      (0xBF4)             /**< (ISC_HIS_ENTRY422) Histogram Entry x Offset */
#define ISC_HIS_ENTRY423_REG_OFST      (0xBF8)             /**< (ISC_HIS_ENTRY423) Histogram Entry x Offset */
#define ISC_HIS_ENTRY424_REG_OFST      (0xBFC)             /**< (ISC_HIS_ENTRY424) Histogram Entry x Offset */
#define ISC_HIS_ENTRY425_REG_OFST      (0xC00)             /**< (ISC_HIS_ENTRY425) Histogram Entry x Offset */
#define ISC_HIS_ENTRY426_REG_OFST      (0xC04)             /**< (ISC_HIS_ENTRY426) Histogram Entry x Offset */
#define ISC_HIS_ENTRY427_REG_OFST      (0xC08)             /**< (ISC_HIS_ENTRY427) Histogram Entry x Offset */
#define ISC_HIS_ENTRY428_REG_OFST      (0xC0C)             /**< (ISC_HIS_ENTRY428) Histogram Entry x Offset */
#define ISC_HIS_ENTRY429_REG_OFST      (0xC10)             /**< (ISC_HIS_ENTRY429) Histogram Entry x Offset */
#define ISC_HIS_ENTRY430_REG_OFST      (0xC14)             /**< (ISC_HIS_ENTRY430) Histogram Entry x Offset */
#define ISC_HIS_ENTRY431_REG_OFST      (0xC18)             /**< (ISC_HIS_ENTRY431) Histogram Entry x Offset */
#define ISC_HIS_ENTRY432_REG_OFST      (0xC1C)             /**< (ISC_HIS_ENTRY432) Histogram Entry x Offset */
#define ISC_HIS_ENTRY433_REG_OFST      (0xC20)             /**< (ISC_HIS_ENTRY433) Histogram Entry x Offset */
#define ISC_HIS_ENTRY434_REG_OFST      (0xC24)             /**< (ISC_HIS_ENTRY434) Histogram Entry x Offset */
#define ISC_HIS_ENTRY435_REG_OFST      (0xC28)             /**< (ISC_HIS_ENTRY435) Histogram Entry x Offset */
#define ISC_HIS_ENTRY436_REG_OFST      (0xC2C)             /**< (ISC_HIS_ENTRY436) Histogram Entry x Offset */
#define ISC_HIS_ENTRY437_REG_OFST      (0xC30)             /**< (ISC_HIS_ENTRY437) Histogram Entry x Offset */
#define ISC_HIS_ENTRY438_REG_OFST      (0xC34)             /**< (ISC_HIS_ENTRY438) Histogram Entry x Offset */
#define ISC_HIS_ENTRY439_REG_OFST      (0xC38)             /**< (ISC_HIS_ENTRY439) Histogram Entry x Offset */
#define ISC_HIS_ENTRY440_REG_OFST      (0xC3C)             /**< (ISC_HIS_ENTRY440) Histogram Entry x Offset */
#define ISC_HIS_ENTRY441_REG_OFST      (0xC40)             /**< (ISC_HIS_ENTRY441) Histogram Entry x Offset */
#define ISC_HIS_ENTRY442_REG_OFST      (0xC44)             /**< (ISC_HIS_ENTRY442) Histogram Entry x Offset */
#define ISC_HIS_ENTRY443_REG_OFST      (0xC48)             /**< (ISC_HIS_ENTRY443) Histogram Entry x Offset */
#define ISC_HIS_ENTRY444_REG_OFST      (0xC4C)             /**< (ISC_HIS_ENTRY444) Histogram Entry x Offset */
#define ISC_HIS_ENTRY445_REG_OFST      (0xC50)             /**< (ISC_HIS_ENTRY445) Histogram Entry x Offset */
#define ISC_HIS_ENTRY446_REG_OFST      (0xC54)             /**< (ISC_HIS_ENTRY446) Histogram Entry x Offset */
#define ISC_HIS_ENTRY447_REG_OFST      (0xC58)             /**< (ISC_HIS_ENTRY447) Histogram Entry x Offset */
#define ISC_HIS_ENTRY448_REG_OFST      (0xC5C)             /**< (ISC_HIS_ENTRY448) Histogram Entry x Offset */
#define ISC_HIS_ENTRY449_REG_OFST      (0xC60)             /**< (ISC_HIS_ENTRY449) Histogram Entry x Offset */
#define ISC_HIS_ENTRY450_REG_OFST      (0xC64)             /**< (ISC_HIS_ENTRY450) Histogram Entry x Offset */
#define ISC_HIS_ENTRY451_REG_OFST      (0xC68)             /**< (ISC_HIS_ENTRY451) Histogram Entry x Offset */
#define ISC_HIS_ENTRY452_REG_OFST      (0xC6C)             /**< (ISC_HIS_ENTRY452) Histogram Entry x Offset */
#define ISC_HIS_ENTRY453_REG_OFST      (0xC70)             /**< (ISC_HIS_ENTRY453) Histogram Entry x Offset */
#define ISC_HIS_ENTRY454_REG_OFST      (0xC74)             /**< (ISC_HIS_ENTRY454) Histogram Entry x Offset */
#define ISC_HIS_ENTRY455_REG_OFST      (0xC78)             /**< (ISC_HIS_ENTRY455) Histogram Entry x Offset */
#define ISC_HIS_ENTRY456_REG_OFST      (0xC7C)             /**< (ISC_HIS_ENTRY456) Histogram Entry x Offset */
#define ISC_HIS_ENTRY457_REG_OFST      (0xC80)             /**< (ISC_HIS_ENTRY457) Histogram Entry x Offset */
#define ISC_HIS_ENTRY458_REG_OFST      (0xC84)             /**< (ISC_HIS_ENTRY458) Histogram Entry x Offset */
#define ISC_HIS_ENTRY459_REG_OFST      (0xC88)             /**< (ISC_HIS_ENTRY459) Histogram Entry x Offset */
#define ISC_HIS_ENTRY460_REG_OFST      (0xC8C)             /**< (ISC_HIS_ENTRY460) Histogram Entry x Offset */
#define ISC_HIS_ENTRY461_REG_OFST      (0xC90)             /**< (ISC_HIS_ENTRY461) Histogram Entry x Offset */
#define ISC_HIS_ENTRY462_REG_OFST      (0xC94)             /**< (ISC_HIS_ENTRY462) Histogram Entry x Offset */
#define ISC_HIS_ENTRY463_REG_OFST      (0xC98)             /**< (ISC_HIS_ENTRY463) Histogram Entry x Offset */
#define ISC_HIS_ENTRY464_REG_OFST      (0xC9C)             /**< (ISC_HIS_ENTRY464) Histogram Entry x Offset */
#define ISC_HIS_ENTRY465_REG_OFST      (0xCA0)             /**< (ISC_HIS_ENTRY465) Histogram Entry x Offset */
#define ISC_HIS_ENTRY466_REG_OFST      (0xCA4)             /**< (ISC_HIS_ENTRY466) Histogram Entry x Offset */
#define ISC_HIS_ENTRY467_REG_OFST      (0xCA8)             /**< (ISC_HIS_ENTRY467) Histogram Entry x Offset */
#define ISC_HIS_ENTRY468_REG_OFST      (0xCAC)             /**< (ISC_HIS_ENTRY468) Histogram Entry x Offset */
#define ISC_HIS_ENTRY469_REG_OFST      (0xCB0)             /**< (ISC_HIS_ENTRY469) Histogram Entry x Offset */
#define ISC_HIS_ENTRY470_REG_OFST      (0xCB4)             /**< (ISC_HIS_ENTRY470) Histogram Entry x Offset */
#define ISC_HIS_ENTRY471_REG_OFST      (0xCB8)             /**< (ISC_HIS_ENTRY471) Histogram Entry x Offset */
#define ISC_HIS_ENTRY472_REG_OFST      (0xCBC)             /**< (ISC_HIS_ENTRY472) Histogram Entry x Offset */
#define ISC_HIS_ENTRY473_REG_OFST      (0xCC0)             /**< (ISC_HIS_ENTRY473) Histogram Entry x Offset */
#define ISC_HIS_ENTRY474_REG_OFST      (0xCC4)             /**< (ISC_HIS_ENTRY474) Histogram Entry x Offset */
#define ISC_HIS_ENTRY475_REG_OFST      (0xCC8)             /**< (ISC_HIS_ENTRY475) Histogram Entry x Offset */
#define ISC_HIS_ENTRY476_REG_OFST      (0xCCC)             /**< (ISC_HIS_ENTRY476) Histogram Entry x Offset */
#define ISC_HIS_ENTRY477_REG_OFST      (0xCD0)             /**< (ISC_HIS_ENTRY477) Histogram Entry x Offset */
#define ISC_HIS_ENTRY478_REG_OFST      (0xCD4)             /**< (ISC_HIS_ENTRY478) Histogram Entry x Offset */
#define ISC_HIS_ENTRY479_REG_OFST      (0xCD8)             /**< (ISC_HIS_ENTRY479) Histogram Entry x Offset */
#define ISC_HIS_ENTRY480_REG_OFST      (0xCDC)             /**< (ISC_HIS_ENTRY480) Histogram Entry x Offset */
#define ISC_HIS_ENTRY481_REG_OFST      (0xCE0)             /**< (ISC_HIS_ENTRY481) Histogram Entry x Offset */
#define ISC_HIS_ENTRY482_REG_OFST      (0xCE4)             /**< (ISC_HIS_ENTRY482) Histogram Entry x Offset */
#define ISC_HIS_ENTRY483_REG_OFST      (0xCE8)             /**< (ISC_HIS_ENTRY483) Histogram Entry x Offset */
#define ISC_HIS_ENTRY484_REG_OFST      (0xCEC)             /**< (ISC_HIS_ENTRY484) Histogram Entry x Offset */
#define ISC_HIS_ENTRY485_REG_OFST      (0xCF0)             /**< (ISC_HIS_ENTRY485) Histogram Entry x Offset */
#define ISC_HIS_ENTRY486_REG_OFST      (0xCF4)             /**< (ISC_HIS_ENTRY486) Histogram Entry x Offset */
#define ISC_HIS_ENTRY487_REG_OFST      (0xCF8)             /**< (ISC_HIS_ENTRY487) Histogram Entry x Offset */
#define ISC_HIS_ENTRY488_REG_OFST      (0xCFC)             /**< (ISC_HIS_ENTRY488) Histogram Entry x Offset */
#define ISC_HIS_ENTRY489_REG_OFST      (0xD00)             /**< (ISC_HIS_ENTRY489) Histogram Entry x Offset */
#define ISC_HIS_ENTRY490_REG_OFST      (0xD04)             /**< (ISC_HIS_ENTRY490) Histogram Entry x Offset */
#define ISC_HIS_ENTRY491_REG_OFST      (0xD08)             /**< (ISC_HIS_ENTRY491) Histogram Entry x Offset */
#define ISC_HIS_ENTRY492_REG_OFST      (0xD0C)             /**< (ISC_HIS_ENTRY492) Histogram Entry x Offset */
#define ISC_HIS_ENTRY493_REG_OFST      (0xD10)             /**< (ISC_HIS_ENTRY493) Histogram Entry x Offset */
#define ISC_HIS_ENTRY494_REG_OFST      (0xD14)             /**< (ISC_HIS_ENTRY494) Histogram Entry x Offset */
#define ISC_HIS_ENTRY495_REG_OFST      (0xD18)             /**< (ISC_HIS_ENTRY495) Histogram Entry x Offset */
#define ISC_HIS_ENTRY496_REG_OFST      (0xD1C)             /**< (ISC_HIS_ENTRY496) Histogram Entry x Offset */
#define ISC_HIS_ENTRY497_REG_OFST      (0xD20)             /**< (ISC_HIS_ENTRY497) Histogram Entry x Offset */
#define ISC_HIS_ENTRY498_REG_OFST      (0xD24)             /**< (ISC_HIS_ENTRY498) Histogram Entry x Offset */
#define ISC_HIS_ENTRY499_REG_OFST      (0xD28)             /**< (ISC_HIS_ENTRY499) Histogram Entry x Offset */
#define ISC_HIS_ENTRY500_REG_OFST      (0xD2C)             /**< (ISC_HIS_ENTRY500) Histogram Entry x Offset */
#define ISC_HIS_ENTRY501_REG_OFST      (0xD30)             /**< (ISC_HIS_ENTRY501) Histogram Entry x Offset */
#define ISC_HIS_ENTRY502_REG_OFST      (0xD34)             /**< (ISC_HIS_ENTRY502) Histogram Entry x Offset */
#define ISC_HIS_ENTRY503_REG_OFST      (0xD38)             /**< (ISC_HIS_ENTRY503) Histogram Entry x Offset */
#define ISC_HIS_ENTRY504_REG_OFST      (0xD3C)             /**< (ISC_HIS_ENTRY504) Histogram Entry x Offset */
#define ISC_HIS_ENTRY505_REG_OFST      (0xD40)             /**< (ISC_HIS_ENTRY505) Histogram Entry x Offset */
#define ISC_HIS_ENTRY506_REG_OFST      (0xD44)             /**< (ISC_HIS_ENTRY506) Histogram Entry x Offset */
#define ISC_HIS_ENTRY507_REG_OFST      (0xD48)             /**< (ISC_HIS_ENTRY507) Histogram Entry x Offset */
#define ISC_HIS_ENTRY508_REG_OFST      (0xD4C)             /**< (ISC_HIS_ENTRY508) Histogram Entry x Offset */
#define ISC_HIS_ENTRY509_REG_OFST      (0xD50)             /**< (ISC_HIS_ENTRY509) Histogram Entry x Offset */
#define ISC_HIS_ENTRY510_REG_OFST      (0xD54)             /**< (ISC_HIS_ENTRY510) Histogram Entry x Offset */
#define ISC_HIS_ENTRY511_REG_OFST      (0xD58)             /**< (ISC_HIS_ENTRY511) Histogram Entry x Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ISC_HXS_TAP register API structure */
typedef struct
{
  __IO  uint32_t                       ISC_HXS_TAP10PHI;   /**< Offset: 0x00 (R/W  32) HXS TAP10 Phase Register  */
  __IO  uint32_t                       ISC_HXS_TAP32PHI;   /**< Offset: 0x04 (R/W  32) HXS TAP32 Phase Register  */
} isc_hxs_tap_registers_t;

/** \brief ISC_VXS_TAP register API structure */
typedef struct
{
  __IO  uint32_t                       ISC_VXS_TAP10PHI;   /**< Offset: 0x00 (R/W  32) VXS TAP10 Phase Register  */
  __IO  uint32_t                       ISC_VXS_TAP32PHI;   /**< Offset: 0x04 (R/W  32) VXS TAP32 Phase Register  */
} isc_vxs_tap_registers_t;

#define ISC_VXS_TAP_NUMBER _U_(16)

#define ISC_HXS_TAP_NUMBER _U_(16)

/** \brief ISC register API structure */
typedef struct
{  /* Image Sensor Controller */
  __O   uint32_t                       ISC_CTRLEN;         /**< Offset: 0x00 ( /W  32) Control Enable Register */
  __O   uint32_t                       ISC_CTRLDIS;        /**< Offset: 0x04 ( /W  32) Control Disable Register */
  __I   uint32_t                       ISC_CTRLSR;         /**< Offset: 0x08 (R/   32) Control Status Register */
  __IO  uint32_t                       ISC_PFE_CFG0;       /**< Offset: 0x0C (R/W  32) Parallel Front End Configuration 0 Register */
  __IO  uint32_t                       ISC_PFE_CFG1;       /**< Offset: 0x10 (R/W  32) Parallel Front End Configuration 1 Register */
  __IO  uint32_t                       ISC_PFE_CFG2;       /**< Offset: 0x14 (R/W  32) Parallel Front End Configuration 2 Register */
  __O   uint32_t                       ISC_CLKEN;          /**< Offset: 0x18 ( /W  32) Clock Enable Register */
  __O   uint32_t                       ISC_CLKDIS;         /**< Offset: 0x1C ( /W  32) Clock Disable Register */
  __I   uint32_t                       ISC_CLKSR;          /**< Offset: 0x20 (R/   32) Clock Status Register */
  __IO  uint32_t                       ISC_CLKCFG;         /**< Offset: 0x24 (R/W  32) Clock Configuration Register */
  __O   uint32_t                       ISC_INTEN;          /**< Offset: 0x28 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       ISC_INTDIS;         /**< Offset: 0x2C ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       ISC_INTMASK;        /**< Offset: 0x30 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       ISC_INTSR;          /**< Offset: 0x34 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       ISC_DPC_CTRL;       /**< Offset: 0x40 (R/W  32) Defective Pixel Correction Control Register */
  __IO  uint32_t                       ISC_DPC_CFG;        /**< Offset: 0x44 (R/W  32) Defective Pixel Correction Configuration Register */
  __IO  uint32_t                       ISC_DPC_THRESHM;    /**< Offset: 0x48 (R/W  32) Defective Pixel Correction Threshold M Register */
  __IO  uint32_t                       ISC_DPC_THRESHC;    /**< Offset: 0x4C (R/W  32) Defective Pixel Correction Threshold C Register */
  __IO  uint32_t                       ISC_DPC_THRESHA;    /**< Offset: 0x50 (R/W  32) Defective Pixel Correction Threshold A Register */
  __I   uint32_t                       ISC_DPC_SR;         /**< Offset: 0x54 (R/   32) Defective Pixel Correction Status Register */
  __IO  uint32_t                       ISC_WB_CTRL;        /**< Offset: 0x58 (R/W  32) White Balance Control Register */
  __IO  uint32_t                       ISC_WB_CFG;         /**< Offset: 0x5C (R/W  32) White Balance Configuration Register */
  __IO  uint32_t                       ISC_WB_O_RGR;       /**< Offset: 0x60 (R/W  32) White Balance Offset for R, GR Register */
  __IO  uint32_t                       ISC_WB_O_BGB;       /**< Offset: 0x64 (R/W  32) White Balance Offset for B, GB Register */
  __IO  uint32_t                       ISC_WB_G_RGR;       /**< Offset: 0x68 (R/W  32) White Balance Gain for R, GR Register */
  __IO  uint32_t                       ISC_WB_G_BGB;       /**< Offset: 0x6C (R/W  32) White Balance Gain for B, GB Register */
  __IO  uint32_t                       ISC_CFA_CTRL;       /**< Offset: 0x70 (R/W  32) Color Filter Array Control Register */
  __IO  uint32_t                       ISC_CFA_CFG;        /**< Offset: 0x74 (R/W  32) Color Filter Array Configuration Register */
  __IO  uint32_t                       ISC_CC_CTRL;        /**< Offset: 0x78 (R/W  32) Color Correction Control Register */
  __IO  uint32_t                       ISC_CC_RR_RG;       /**< Offset: 0x7C (R/W  32) Color Correction RR RG Register */
  __IO  uint32_t                       ISC_CC_RB_OR;       /**< Offset: 0x80 (R/W  32) Color Correction RB OR Register */
  __IO  uint32_t                       ISC_CC_GR_GG;       /**< Offset: 0x84 (R/W  32) Color Correction GR GG Register */
  __IO  uint32_t                       ISC_CC_GB_OG;       /**< Offset: 0x88 (R/W  32) Color Correction GB OG Register */
  __IO  uint32_t                       ISC_CC_BR_BG;       /**< Offset: 0x8C (R/W  32) Color Correction BR BG Register */
  __IO  uint32_t                       ISC_CC_BB_OB;       /**< Offset: 0x90 (R/W  32) Color Correction BB OB Register */
  __IO  uint32_t                       ISC_GAM_CTRL;       /**< Offset: 0x94 (R/W  32) Gamma Correction Control Register */
  __IO  uint32_t                       ISC_GAM_BENTRY[64]; /**< Offset: 0x98 (R/W  32) Gamma Correction Blue Entry x */
  __IO  uint32_t                       ISC_GAM_GENTRY[64]; /**< Offset: 0x198 (R/W  32) Gamma Correction Green Entry x */
  __IO  uint32_t                       ISC_GAM_RENTRY[64]; /**< Offset: 0x298 (R/W  32) Gamma Correction Red Entry x */
  __IO  uint32_t                       ISC_VHXS_CTRL;      /**< Offset: 0x398 (R/W  32) VHXS Control Register */
  __IO  uint32_t                       ISC_VHXS_SS;        /**< Offset: 0x39C (R/W  32) VHXS Source Size Register */
  __IO  uint32_t                       ISC_VHXS_DS;        /**< Offset: 0x3A0 (R/W  32) VHXS Destination Size Register */
  __IO  uint32_t                       ISC_VXS_FACT;       /**< Offset: 0x3A4 (R/W  32) VXS Scaling Factor Register */
  __IO  uint32_t                       ISC_HXS_FACT;       /**< Offset: 0x3A8 (R/W  32) HXS Scaling Factor Register */
  __IO  uint32_t                       ISC_VXS_CFG;        /**< Offset: 0x3AC (R/W  32) VXS Configuration Register */
  __IO  uint32_t                       ISC_HXS_CFG;        /**< Offset: 0x3B0 (R/W  32) HXS Configuration Register */
        isc_vxs_tap_registers_t        ISC_VXS_TAP[ISC_VXS_TAP_NUMBER]; /**< Offset: 0x3B4  */
        isc_hxs_tap_registers_t        ISC_HXS_TAP[ISC_HXS_TAP_NUMBER]; /**< Offset: 0x434  */
  __IO  uint32_t                       ISC_CSC_CTRL;       /**< Offset: 0x4B4 (R/W  32) Color Space Conversion Control Register */
  __IO  uint32_t                       ISC_CSC_YR_YG;      /**< Offset: 0x4B8 (R/W  32) Color Space Conversion YR, YG Register */
  __IO  uint32_t                       ISC_CSC_YB_OY;      /**< Offset: 0x4BC (R/W  32) Color Space Conversion YB, OY Register */
  __IO  uint32_t                       ISC_CSC_CBR_CBG;    /**< Offset: 0x4C0 (R/W  32) Color Space Conversion CBR CBG Register */
  __IO  uint32_t                       ISC_CSC_CBB_OCB;    /**< Offset: 0x4C4 (R/W  32) Color Space Conversion CBB OCB Register */
  __IO  uint32_t                       ISC_CSC_CRR_CRG;    /**< Offset: 0x4C8 (R/W  32) Color Space Conversion CRR CRG Register */
  __IO  uint32_t                       ISC_CSC_CRB_OCR;    /**< Offset: 0x4CC (R/W  32) Color Space Conversion CRB OCR Register */
  __IO  uint32_t                       ISC_CBHS_CTRL;      /**< Offset: 0x4D0 (R/W  32) CBHS Control Register */
  __IO  uint32_t                       ISC_CBHS_CFG;       /**< Offset: 0x4D4 (R/W  32) CBHS Configuration Register */
  __IO  uint32_t                       ISC_CBHS_BRIGHT;    /**< Offset: 0x4D8 (R/W  32) CBHS Brightness Register */
  __IO  uint32_t                       ISC_CBHS_CONT;      /**< Offset: 0x4DC (R/W  32) CBHS Contrast Register */
  __IO  uint32_t                       ISC_CBHS_HUE;       /**< Offset: 0x4E0 (R/W  32) CBHS Hue Register */
  __IO  uint32_t                       ISC_CBHS_SAT;       /**< Offset: 0x4E4 (R/W  32) CBHS Saturation Register */
  __IO  uint32_t                       ISC_SUB422_CTRL;    /**< Offset: 0x4E8 (R/W  32) Subsampling 4:4:4 to 4:2:2 Control Register */
  __IO  uint32_t                       ISC_SUB422_CFG;     /**< Offset: 0x4EC (R/W  32) Subsampling 4:4:4 to 4:2:2 Configuration Register */
  __IO  uint32_t                       ISC_SUB420_CTRL;    /**< Offset: 0x4F0 (R/W  32) Subsampling 4:2:2 to 4:2:0 Control Register */
  __IO  uint32_t                       ISC_RLP_CFG;        /**< Offset: 0x4F4 (R/W  32) Rounding, Limiting and Packing Configuration Register */
  __IO  uint32_t                       ISC_HIS_CTRL;       /**< Offset: 0x4F8 (R/W  32) Histogram Control Register */
  __IO  uint32_t                       ISC_HIS_CFG;        /**< Offset: 0x4FC (R/W  32) Histogram Configuration Register */
  __I   uint8_t                        Reserved2[0x1C];
  __IO  uint32_t                       ISC_DCFG;           /**< Offset: 0x51C (R/W  32) DMA Configuration Register */
  __IO  uint32_t                       ISC_DCTRL;          /**< Offset: 0x520 (R/W  32) DMA Control Register */
  __IO  uint32_t                       ISC_DNDA;           /**< Offset: 0x524 (R/W  32) DMA Descriptor Address Register */
  __IO  uint32_t                       ISC_DAD0;           /**< Offset: 0x528 (R/W  32) DMA Address 0 Register */
  __IO  uint32_t                       ISC_DST0;           /**< Offset: 0x52C (R/W  32) DMA Stride 0 Register */
  __IO  uint32_t                       ISC_DAD1;           /**< Offset: 0x530 (R/W  32) DMA Address 1 Register */
  __IO  uint32_t                       ISC_DST1;           /**< Offset: 0x534 (R/W  32) DMA Stride 1 Register */
  __IO  uint32_t                       ISC_DAD2;           /**< Offset: 0x538 (R/W  32) DMA Address 2 Register */
  __IO  uint32_t                       ISC_DST2;           /**< Offset: 0x53C (R/W  32) DMA Stride 2 Register */
  __I   uint8_t                        Reserved3[0x1C];
  __I   uint32_t                       ISC_HIS_ENTRY[512]; /**< Offset: 0x55C (R/   32) Histogram Entry x */
} isc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_ISC_COMPONENT_H_ */
