/*
 * Component description for GFX2D
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
#ifndef _SAM9X_GFX2D_COMPONENT_H_
#define _SAM9X_GFX2D_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GFX2D                                        */
/* ************************************************************************** */

/* -------- GFX2D_PA : (GFX2D Offset: 0x00) (R/W 32) Surface Physical Address Register -------- */
#define GFX2D_PA_PA_Pos                       _U_(0)                                               /**< (GFX2D_PA) Surface Physical Start Address Position */
#define GFX2D_PA_PA_Msk                       (_U_(0xFFFFFFFF) << GFX2D_PA_PA_Pos)                 /**< (GFX2D_PA) Surface Physical Start Address Mask */
#define GFX2D_PA_PA(value)                    (GFX2D_PA_PA_Msk & ((value) << GFX2D_PA_PA_Pos))    
#define GFX2D_PA_Msk                          _U_(0xFFFFFFFF)                                      /**< (GFX2D_PA) Register Mask  */


/* -------- GFX2D_PITCH : (GFX2D Offset: 0x04) (R/W 32) Surface Pitch Register -------- */
#define GFX2D_PITCH_PITCH_Pos                 _U_(0)                                               /**< (GFX2D_PITCH) Surface Pitch Position */
#define GFX2D_PITCH_PITCH_Msk                 (_U_(0xFFFF) << GFX2D_PITCH_PITCH_Pos)               /**< (GFX2D_PITCH) Surface Pitch Mask */
#define GFX2D_PITCH_PITCH(value)              (GFX2D_PITCH_PITCH_Msk & ((value) << GFX2D_PITCH_PITCH_Pos))
#define GFX2D_PITCH_Msk                       _U_(0x0000FFFF)                                      /**< (GFX2D_PITCH) Register Mask  */


/* -------- GFX2D_CFG : (GFX2D Offset: 0x08) (R/W 32) Surface Configuration Register -------- */
#define GFX2D_CFG_PF_Pos                      _U_(0)                                               /**< (GFX2D_CFG) Pixel Format Position */
#define GFX2D_CFG_PF_Msk                      (_U_(0xF) << GFX2D_CFG_PF_Pos)                       /**< (GFX2D_CFG) Pixel Format Mask */
#define GFX2D_CFG_PF(value)                   (GFX2D_CFG_PF_Msk & ((value) << GFX2D_CFG_PF_Pos))  
#define   GFX2D_CFG_PF_A4IDX4_Val             _U_(0x0)                                             /**< (GFX2D_CFG) 4-bit indexed color, with 4-bit alpha value  */
#define   GFX2D_CFG_PF_A8_Val                 _U_(0x1)                                             /**< (GFX2D_CFG) 8 bits per pixel alpha, with user-defined constant color  */
#define   GFX2D_CFG_PF_IDX8_Val               _U_(0x2)                                             /**< (GFX2D_CFG) 8 bits indexed color, uses the Color Look-Up Table to expand to true color  */
#define   GFX2D_CFG_PF_A8IDX8_Val             _U_(0x3)                                             /**< (GFX2D_CFG) 8-bit indexed color, with 8-bit alpha value  */
#define   GFX2D_CFG_PF_RGB12_Val              _U_(0x4)                                             /**< (GFX2D_CFG) 12 bits per pixel, 4 bits per color channel  */
#define   GFX2D_CFG_PF_ARGB16_Val             _U_(0x5)                                             /**< (GFX2D_CFG) 16 bits per pixel with 4-bit width alpha value, and 4 bits per color channel  */
#define   GFX2D_CFG_PF_RGB15_Val              _U_(0x6)                                             /**< (GFX2D_CFG) 15 bits per pixel, 5 bits per color channel  */
#define   GFX2D_CFG_PF_TRGB16_Val             _U_(0x7)                                             /**< (GFX2D_CFG) 16 bits per pixel, 5 bits for the red and blue channels and 6 bits for the green channel  */
#define   GFX2D_CFG_PF_RGBT16_Val             _U_(0x8)                                             /**< (GFX2D_CFG) 16 bits per pixel, with 1 bit for transparency and 5 bits for color channels  */
#define   GFX2D_CFG_PF_RGB16_Val              _U_(0x9)                                             /**< (GFX2D_CFG) 16 bits per pixel, 5 bits for the red and blue channels and 6 bits for the green channel  */
#define   GFX2D_CFG_PF_RGB24_Val              _U_(0xA)                                             /**< (GFX2D_CFG) 24 bits per pixel, 8 bits for alpha and color channels  */
#define   GFX2D_CFG_PF_ARGB32_Val             _U_(0xB)                                             /**< (GFX2D_CFG) 32 bits per pixel, 8 bits for alpha and color channels  */
#define   GFX2D_CFG_PF_RGBA32_Val             _U_(0xC)                                             /**< (GFX2D_CFG) 32 bits per pixel, 8 bits for alpha and color channels  */
#define GFX2D_CFG_PF_A4IDX4                   (GFX2D_CFG_PF_A4IDX4_Val << GFX2D_CFG_PF_Pos)        /**< (GFX2D_CFG) 4-bit indexed color, with 4-bit alpha value Position  */
#define GFX2D_CFG_PF_A8                       (GFX2D_CFG_PF_A8_Val << GFX2D_CFG_PF_Pos)            /**< (GFX2D_CFG) 8 bits per pixel alpha, with user-defined constant color Position  */
#define GFX2D_CFG_PF_IDX8                     (GFX2D_CFG_PF_IDX8_Val << GFX2D_CFG_PF_Pos)          /**< (GFX2D_CFG) 8 bits indexed color, uses the Color Look-Up Table to expand to true color Position  */
#define GFX2D_CFG_PF_A8IDX8                   (GFX2D_CFG_PF_A8IDX8_Val << GFX2D_CFG_PF_Pos)        /**< (GFX2D_CFG) 8-bit indexed color, with 8-bit alpha value Position  */
#define GFX2D_CFG_PF_RGB12                    (GFX2D_CFG_PF_RGB12_Val << GFX2D_CFG_PF_Pos)         /**< (GFX2D_CFG) 12 bits per pixel, 4 bits per color channel Position  */
#define GFX2D_CFG_PF_ARGB16                   (GFX2D_CFG_PF_ARGB16_Val << GFX2D_CFG_PF_Pos)        /**< (GFX2D_CFG) 16 bits per pixel with 4-bit width alpha value, and 4 bits per color channel Position  */
#define GFX2D_CFG_PF_RGB15                    (GFX2D_CFG_PF_RGB15_Val << GFX2D_CFG_PF_Pos)         /**< (GFX2D_CFG) 15 bits per pixel, 5 bits per color channel Position  */
#define GFX2D_CFG_PF_TRGB16                   (GFX2D_CFG_PF_TRGB16_Val << GFX2D_CFG_PF_Pos)        /**< (GFX2D_CFG) 16 bits per pixel, 5 bits for the red and blue channels and 6 bits for the green channel Position  */
#define GFX2D_CFG_PF_RGBT16                   (GFX2D_CFG_PF_RGBT16_Val << GFX2D_CFG_PF_Pos)        /**< (GFX2D_CFG) 16 bits per pixel, with 1 bit for transparency and 5 bits for color channels Position  */
#define GFX2D_CFG_PF_RGB16                    (GFX2D_CFG_PF_RGB16_Val << GFX2D_CFG_PF_Pos)         /**< (GFX2D_CFG) 16 bits per pixel, 5 bits for the red and blue channels and 6 bits for the green channel Position  */
#define GFX2D_CFG_PF_RGB24                    (GFX2D_CFG_PF_RGB24_Val << GFX2D_CFG_PF_Pos)         /**< (GFX2D_CFG) 24 bits per pixel, 8 bits for alpha and color channels Position  */
#define GFX2D_CFG_PF_ARGB32                   (GFX2D_CFG_PF_ARGB32_Val << GFX2D_CFG_PF_Pos)        /**< (GFX2D_CFG) 32 bits per pixel, 8 bits for alpha and color channels Position  */
#define GFX2D_CFG_PF_RGBA32                   (GFX2D_CFG_PF_RGBA32_Val << GFX2D_CFG_PF_Pos)        /**< (GFX2D_CFG) 32 bits per pixel, 8 bits for alpha and color channels Position  */
#define GFX2D_CFG_IDXCX_Pos                   _U_(4)                                               /**< (GFX2D_CFG) Color Look-Up Table Selection Position */
#define GFX2D_CFG_IDXCX_Msk                   (_U_(0x1) << GFX2D_CFG_IDXCX_Pos)                    /**< (GFX2D_CFG) Color Look-Up Table Selection Mask */
#define GFX2D_CFG_IDXCX(value)                (GFX2D_CFG_IDXCX_Msk & ((value) << GFX2D_CFG_IDXCX_Pos))
#define GFX2D_CFG_Msk                         _U_(0x0000001F)                                      /**< (GFX2D_CFG) Register Mask  */


/* -------- GFX2D_PC : (GFX2D Offset: 0x00) (R/W 32) Performance Configuration 0 Register -------- */
#define GFX2D_PC_SEL_Pos                      _U_(0)                                               /**< (GFX2D_PC) Performance Metrics Selection Position */
#define GFX2D_PC_SEL_Msk                      (_U_(0x3) << GFX2D_PC_SEL_Pos)                       /**< (GFX2D_PC) Performance Metrics Selection Mask */
#define GFX2D_PC_SEL(value)                   (GFX2D_PC_SEL_Msk & ((value) << GFX2D_PC_SEL_Pos))  
#define   GFX2D_PC_SEL_DISABLED_Val           _U_(0x0)                                             /**< (GFX2D_PC) The performance counter is disabled and reset.  */
#define   GFX2D_PC_SEL_READ_Val               _U_(0x1)                                             /**< (GFX2D_PC) The performance counter is incremented when a Read access is performed.  */
#define   GFX2D_PC_SEL_WRITE_Val              _U_(0x2)                                             /**< (GFX2D_PC) The performance counter is incremented when a Write access is performed.  */
#define   GFX2D_PC_SEL_CYCLE_Val              _U_(0x3)                                             /**< (GFX2D_PC) Number of clock cycles  */
#define GFX2D_PC_SEL_DISABLED                 (GFX2D_PC_SEL_DISABLED_Val << GFX2D_PC_SEL_Pos)      /**< (GFX2D_PC) The performance counter is disabled and reset. Position  */
#define GFX2D_PC_SEL_READ                     (GFX2D_PC_SEL_READ_Val << GFX2D_PC_SEL_Pos)          /**< (GFX2D_PC) The performance counter is incremented when a Read access is performed. Position  */
#define GFX2D_PC_SEL_WRITE                    (GFX2D_PC_SEL_WRITE_Val << GFX2D_PC_SEL_Pos)         /**< (GFX2D_PC) The performance counter is incremented when a Write access is performed. Position  */
#define GFX2D_PC_SEL_CYCLE                    (GFX2D_PC_SEL_CYCLE_Val << GFX2D_PC_SEL_Pos)         /**< (GFX2D_PC) Number of clock cycles Position  */
#define GFX2D_PC_FILT_Pos                     _U_(4)                                               /**< (GFX2D_PC) Filter Configuration Position */
#define GFX2D_PC_FILT_Msk                     (_U_(0x7) << GFX2D_PC_FILT_Pos)                      /**< (GFX2D_PC) Filter Configuration Mask */
#define GFX2D_PC_FILT(value)                  (GFX2D_PC_FILT_Msk & ((value) << GFX2D_PC_FILT_Pos))
#define   GFX2D_PC_FILT_DISABLED_Val          _U_(0x0)                                             /**< (GFX2D_PC) The filter is disabled.  */
#define   GFX2D_PC_FILT_QOS0_Val              _U_(0x1)                                             /**< (GFX2D_PC) Events are valid when input QoS is equal to 0.  */
#define   GFX2D_PC_FILT_QOS1_Val              _U_(0x2)                                             /**< (GFX2D_PC) Events are valid when input QoS is equal to 1.  */
#define   GFX2D_PC_FILT_QOS2_Val              _U_(0x3)                                             /**< (GFX2D_PC) Events are valid when input QoS is equal to 2.  */
#define   GFX2D_PC_FILT_QOS3_Val              _U_(0x4)                                             /**< (GFX2D_PC) Events are valid when input QoS is equal to 3.  */
#define GFX2D_PC_FILT_DISABLED                (GFX2D_PC_FILT_DISABLED_Val << GFX2D_PC_FILT_Pos)    /**< (GFX2D_PC) The filter is disabled. Position  */
#define GFX2D_PC_FILT_QOS0                    (GFX2D_PC_FILT_QOS0_Val << GFX2D_PC_FILT_Pos)        /**< (GFX2D_PC) Events are valid when input QoS is equal to 0. Position  */
#define GFX2D_PC_FILT_QOS1                    (GFX2D_PC_FILT_QOS1_Val << GFX2D_PC_FILT_Pos)        /**< (GFX2D_PC) Events are valid when input QoS is equal to 1. Position  */
#define GFX2D_PC_FILT_QOS2                    (GFX2D_PC_FILT_QOS2_Val << GFX2D_PC_FILT_Pos)        /**< (GFX2D_PC) Events are valid when input QoS is equal to 2. Position  */
#define GFX2D_PC_FILT_QOS3                    (GFX2D_PC_FILT_QOS3_Val << GFX2D_PC_FILT_Pos)        /**< (GFX2D_PC) Events are valid when input QoS is equal to 3. Position  */
#define GFX2D_PC_Msk                          _U_(0x00000073)                                      /**< (GFX2D_PC) Register Mask  */


/* -------- GFX2D_MC : (GFX2D Offset: 0x04) ( R/ 32) Metrics Counter 0 Register -------- */
#define GFX2D_MC_COUNTER_Pos                  _U_(0)                                               /**< (GFX2D_MC) Metrics Counter Position */
#define GFX2D_MC_COUNTER_Msk                  (_U_(0xFFFFFFFF) << GFX2D_MC_COUNTER_Pos)            /**< (GFX2D_MC) Metrics Counter Mask */
#define GFX2D_MC_COUNTER(value)               (GFX2D_MC_COUNTER_Msk & ((value) << GFX2D_MC_COUNTER_Pos))
#define GFX2D_MC_Msk                          _U_(0xFFFFFFFF)                                      /**< (GFX2D_MC) Register Mask  */


/* -------- GFX2D_GC : (GFX2D Offset: 0x00) (R/W 32) Global Configuration Register -------- */
#define GFX2D_GC_CGDISCORE_Pos                _U_(0)                                               /**< (GFX2D_GC) Clock Gating Disable Core Position */
#define GFX2D_GC_CGDISCORE_Msk                (_U_(0x1) << GFX2D_GC_CGDISCORE_Pos)                 /**< (GFX2D_GC) Clock Gating Disable Core Mask */
#define GFX2D_GC_CGDISCORE(value)             (GFX2D_GC_CGDISCORE_Msk & ((value) << GFX2D_GC_CGDISCORE_Pos))
#define GFX2D_GC_CGDISAXI_Pos                 _U_(1)                                               /**< (GFX2D_GC) Clock Gating Disable AXI Position */
#define GFX2D_GC_CGDISAXI_Msk                 (_U_(0x1) << GFX2D_GC_CGDISAXI_Pos)                  /**< (GFX2D_GC) Clock Gating Disable AXI Mask */
#define GFX2D_GC_CGDISAXI(value)              (GFX2D_GC_CGDISAXI_Msk & ((value) << GFX2D_GC_CGDISAXI_Pos))
#define GFX2D_GC_CGDISFIFO_Pos                _U_(2)                                               /**< (GFX2D_GC) Clock Gating Disable FIFO Position */
#define GFX2D_GC_CGDISFIFO_Msk                (_U_(0x1) << GFX2D_GC_CGDISFIFO_Pos)                 /**< (GFX2D_GC) Clock Gating Disable FIFO Mask */
#define GFX2D_GC_CGDISFIFO(value)             (GFX2D_GC_CGDISFIFO_Msk & ((value) << GFX2D_GC_CGDISFIFO_Pos))
#define GFX2D_GC_REGEN_Pos                    _U_(4)                                               /**< (GFX2D_GC) Outstanding Regulation Enable Position */
#define GFX2D_GC_REGEN_Msk                    (_U_(0x1) << GFX2D_GC_REGEN_Pos)                     /**< (GFX2D_GC) Outstanding Regulation Enable Mask */
#define GFX2D_GC_REGEN(value)                 (GFX2D_GC_REGEN_Msk & ((value) << GFX2D_GC_REGEN_Pos))
#define GFX2D_GC_MTY_Pos                      _U_(6)                                               /**< (GFX2D_GC) Memory Tile Access Position */
#define GFX2D_GC_MTY_Msk                      (_U_(0x1) << GFX2D_GC_MTY_Pos)                       /**< (GFX2D_GC) Memory Tile Access Mask */
#define GFX2D_GC_MTY(value)                   (GFX2D_GC_MTY_Msk & ((value) << GFX2D_GC_MTY_Pos))  
#define GFX2D_GC_REGQOS1_Pos                  _U_(8)                                               /**< (GFX2D_GC) Regulation for QoS Level 1 Position */
#define GFX2D_GC_REGQOS1_Msk                  (_U_(0xF) << GFX2D_GC_REGQOS1_Pos)                   /**< (GFX2D_GC) Regulation for QoS Level 1 Mask */
#define GFX2D_GC_REGQOS1(value)               (GFX2D_GC_REGQOS1_Msk & ((value) << GFX2D_GC_REGQOS1_Pos))
#define GFX2D_GC_REGQOS2_Pos                  _U_(12)                                              /**< (GFX2D_GC) Regulation for QoS Level 2 Position */
#define GFX2D_GC_REGQOS2_Msk                  (_U_(0xF) << GFX2D_GC_REGQOS2_Pos)                   /**< (GFX2D_GC) Regulation for QoS Level 2 Mask */
#define GFX2D_GC_REGQOS2(value)               (GFX2D_GC_REGQOS2_Msk & ((value) << GFX2D_GC_REGQOS2_Pos))
#define GFX2D_GC_REGQOS3_Pos                  _U_(16)                                              /**< (GFX2D_GC) Regulation for QoS Level 3 Position */
#define GFX2D_GC_REGQOS3_Msk                  (_U_(0xF) << GFX2D_GC_REGQOS3_Pos)                   /**< (GFX2D_GC) Regulation for QoS Level 3 Mask */
#define GFX2D_GC_REGQOS3(value)               (GFX2D_GC_REGQOS3_Msk & ((value) << GFX2D_GC_REGQOS3_Pos))
#define GFX2D_GC_Msk                          _U_(0x000FFF57)                                      /**< (GFX2D_GC) Register Mask  */


/* -------- GFX2D_GE : (GFX2D Offset: 0x04) ( /W 32) Global Enable Register -------- */
#define GFX2D_GE_ENABLE_Pos                   _U_(0)                                               /**< (GFX2D_GE) GFX2D Enable Position */
#define GFX2D_GE_ENABLE_Msk                   (_U_(0x1) << GFX2D_GE_ENABLE_Pos)                    /**< (GFX2D_GE) GFX2D Enable Mask */
#define GFX2D_GE_ENABLE(value)                (GFX2D_GE_ENABLE_Msk & ((value) << GFX2D_GE_ENABLE_Pos))
#define GFX2D_GE_Msk                          _U_(0x00000001)                                      /**< (GFX2D_GE) Register Mask  */


/* -------- GFX2D_GD : (GFX2D Offset: 0x08) ( /W 32) Global Disable Register -------- */
#define GFX2D_GD_DISABLE_Pos                  _U_(0)                                               /**< (GFX2D_GD) GFX2D Disable Bit Position */
#define GFX2D_GD_DISABLE_Msk                  (_U_(0x1) << GFX2D_GD_DISABLE_Pos)                   /**< (GFX2D_GD) GFX2D Disable Bit Mask */
#define GFX2D_GD_DISABLE(value)               (GFX2D_GD_DISABLE_Msk & ((value) << GFX2D_GD_DISABLE_Pos))
#define GFX2D_GD_WFERES_Pos                   _U_(8)                                               /**< (GFX2D_GD) WFE Software Resume bit Position */
#define GFX2D_GD_WFERES_Msk                   (_U_(0x1) << GFX2D_GD_WFERES_Pos)                    /**< (GFX2D_GD) WFE Software Resume bit Mask */
#define GFX2D_GD_WFERES(value)                (GFX2D_GD_WFERES_Msk & ((value) << GFX2D_GD_WFERES_Pos))
#define GFX2D_GD_Msk                          _U_(0x00000101)                                      /**< (GFX2D_GD) Register Mask  */


/* -------- GFX2D_GS : (GFX2D Offset: 0x0C) ( R/ 32) Global Status Register -------- */
#define GFX2D_GS_STATUS_Pos                   _U_(0)                                               /**< (GFX2D_GS) GFX2D Status Bit Position */
#define GFX2D_GS_STATUS_Msk                   (_U_(0x1) << GFX2D_GS_STATUS_Pos)                    /**< (GFX2D_GS) GFX2D Status Bit Mask */
#define GFX2D_GS_STATUS(value)                (GFX2D_GS_STATUS_Msk & ((value) << GFX2D_GS_STATUS_Pos))
#define GFX2D_GS_BUSY_Pos                     _U_(4)                                               /**< (GFX2D_GS) GFX2D Busy Bit Position */
#define GFX2D_GS_BUSY_Msk                     (_U_(0x1) << GFX2D_GS_BUSY_Pos)                      /**< (GFX2D_GS) GFX2D Busy Bit Mask */
#define GFX2D_GS_BUSY(value)                  (GFX2D_GS_BUSY_Msk & ((value) << GFX2D_GS_BUSY_Pos))
#define GFX2D_GS_WFEIP_Pos                    _U_(8)                                               /**< (GFX2D_GS) Wait For Event Status bit Position */
#define GFX2D_GS_WFEIP_Msk                    (_U_(0x1) << GFX2D_GS_WFEIP_Pos)                     /**< (GFX2D_GS) Wait For Event Status bit Mask */
#define GFX2D_GS_WFEIP(value)                 (GFX2D_GS_WFEIP_Msk & ((value) << GFX2D_GS_WFEIP_Pos))
#define GFX2D_GS_Msk                          _U_(0x00000111)                                      /**< (GFX2D_GS) Register Mask  */


/* -------- GFX2D_IE : (GFX2D Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define GFX2D_IE_RBEMPTY_Pos                  _U_(0)                                               /**< (GFX2D_IE) Ring Buffer Empty Interrupt Enable Bit Position */
#define GFX2D_IE_RBEMPTY_Msk                  (_U_(0x1) << GFX2D_IE_RBEMPTY_Pos)                   /**< (GFX2D_IE) Ring Buffer Empty Interrupt Enable Bit Mask */
#define GFX2D_IE_RBEMPTY(value)               (GFX2D_IE_RBEMPTY_Msk & ((value) << GFX2D_IE_RBEMPTY_Pos))
#define GFX2D_IE_EXEND_Pos                    _U_(1)                                               /**< (GFX2D_IE) End of Execution Interrupt Enable Bit Position */
#define GFX2D_IE_EXEND_Msk                    (_U_(0x1) << GFX2D_IE_EXEND_Pos)                     /**< (GFX2D_IE) End of Execution Interrupt Enable Bit Mask */
#define GFX2D_IE_EXEND(value)                 (GFX2D_IE_EXEND_Msk & ((value) << GFX2D_IE_EXEND_Pos))
#define GFX2D_IE_RERR_Pos                     _U_(2)                                               /**< (GFX2D_IE) Read Data Bus Error Interrupt Enable Bit Position */
#define GFX2D_IE_RERR_Msk                     (_U_(0x1) << GFX2D_IE_RERR_Pos)                      /**< (GFX2D_IE) Read Data Bus Error Interrupt Enable Bit Mask */
#define GFX2D_IE_RERR(value)                  (GFX2D_IE_RERR_Msk & ((value) << GFX2D_IE_RERR_Pos))
#define GFX2D_IE_BERR_Pos                     _U_(3)                                               /**< (GFX2D_IE) Write Data Bus Error Interrupt Enable Bit Position */
#define GFX2D_IE_BERR_Msk                     (_U_(0x1) << GFX2D_IE_BERR_Pos)                      /**< (GFX2D_IE) Write Data Bus Error Interrupt Enable Bit Mask */
#define GFX2D_IE_BERR(value)                  (GFX2D_IE_BERR_Msk & ((value) << GFX2D_IE_BERR_Pos))
#define GFX2D_IE_IERR_Pos                     _U_(4)                                               /**< (GFX2D_IE) Illegal Instruction Interrupt Enable Bit Position */
#define GFX2D_IE_IERR_Msk                     (_U_(0x1) << GFX2D_IE_IERR_Pos)                      /**< (GFX2D_IE) Illegal Instruction Interrupt Enable Bit Mask */
#define GFX2D_IE_IERR(value)                  (GFX2D_IE_IERR_Msk & ((value) << GFX2D_IE_IERR_Pos))
#define GFX2D_IE_Msk                          _U_(0x0000001F)                                      /**< (GFX2D_IE) Register Mask  */


/* -------- GFX2D_ID : (GFX2D Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define GFX2D_ID_RBEMPTY_Pos                  _U_(0)                                               /**< (GFX2D_ID) Ring Buffer Empty Interrupt Disable Bit Position */
#define GFX2D_ID_RBEMPTY_Msk                  (_U_(0x1) << GFX2D_ID_RBEMPTY_Pos)                   /**< (GFX2D_ID) Ring Buffer Empty Interrupt Disable Bit Mask */
#define GFX2D_ID_RBEMPTY(value)               (GFX2D_ID_RBEMPTY_Msk & ((value) << GFX2D_ID_RBEMPTY_Pos))
#define GFX2D_ID_EXEND_Pos                    _U_(1)                                               /**< (GFX2D_ID) End of Execution Interrupt Disable Bit Position */
#define GFX2D_ID_EXEND_Msk                    (_U_(0x1) << GFX2D_ID_EXEND_Pos)                     /**< (GFX2D_ID) End of Execution Interrupt Disable Bit Mask */
#define GFX2D_ID_EXEND(value)                 (GFX2D_ID_EXEND_Msk & ((value) << GFX2D_ID_EXEND_Pos))
#define GFX2D_ID_RERR_Pos                     _U_(2)                                               /**< (GFX2D_ID) Read Access Error Interrupt Disable Bit Position */
#define GFX2D_ID_RERR_Msk                     (_U_(0x1) << GFX2D_ID_RERR_Pos)                      /**< (GFX2D_ID) Read Access Error Interrupt Disable Bit Mask */
#define GFX2D_ID_RERR(value)                  (GFX2D_ID_RERR_Msk & ((value) << GFX2D_ID_RERR_Pos))
#define GFX2D_ID_BERR_Pos                     _U_(3)                                               /**< (GFX2D_ID) Write Access Error Interrupt Disable bit Position */
#define GFX2D_ID_BERR_Msk                     (_U_(0x1) << GFX2D_ID_BERR_Pos)                      /**< (GFX2D_ID) Write Access Error Interrupt Disable bit Mask */
#define GFX2D_ID_BERR(value)                  (GFX2D_ID_BERR_Msk & ((value) << GFX2D_ID_BERR_Pos))
#define GFX2D_ID_IERR_Pos                     _U_(4)                                               /**< (GFX2D_ID) Illegal Instruction Interrupt Disable bit Position */
#define GFX2D_ID_IERR_Msk                     (_U_(0x1) << GFX2D_ID_IERR_Pos)                      /**< (GFX2D_ID) Illegal Instruction Interrupt Disable bit Mask */
#define GFX2D_ID_IERR(value)                  (GFX2D_ID_IERR_Msk & ((value) << GFX2D_ID_IERR_Pos))
#define GFX2D_ID_Msk                          _U_(0x0000001F)                                      /**< (GFX2D_ID) Register Mask  */


/* -------- GFX2D_IM : (GFX2D Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define GFX2D_IM_RBEMPTY_Pos                  _U_(0)                                               /**< (GFX2D_IM) Ring Buffer Empty Interrupt Mask Bit Position */
#define GFX2D_IM_RBEMPTY_Msk                  (_U_(0x1) << GFX2D_IM_RBEMPTY_Pos)                   /**< (GFX2D_IM) Ring Buffer Empty Interrupt Mask Bit Mask */
#define GFX2D_IM_RBEMPTY(value)               (GFX2D_IM_RBEMPTY_Msk & ((value) << GFX2D_IM_RBEMPTY_Pos))
#define GFX2D_IM_EXEND_Pos                    _U_(1)                                               /**< (GFX2D_IM) Execution Ended Empty Interrupt Mask Bit Position */
#define GFX2D_IM_EXEND_Msk                    (_U_(0x1) << GFX2D_IM_EXEND_Pos)                     /**< (GFX2D_IM) Execution Ended Empty Interrupt Mask Bit Mask */
#define GFX2D_IM_EXEND(value)                 (GFX2D_IM_EXEND_Msk & ((value) << GFX2D_IM_EXEND_Pos))
#define GFX2D_IM_RERR_Pos                     _U_(2)                                               /**< (GFX2D_IM) Read Error Interrupt Mask Bit Position */
#define GFX2D_IM_RERR_Msk                     (_U_(0x1) << GFX2D_IM_RERR_Pos)                      /**< (GFX2D_IM) Read Error Interrupt Mask Bit Mask */
#define GFX2D_IM_RERR(value)                  (GFX2D_IM_RERR_Msk & ((value) << GFX2D_IM_RERR_Pos))
#define GFX2D_IM_BERR_Pos                     _U_(3)                                               /**< (GFX2D_IM) Write Error Interrupt Mask Bit Position */
#define GFX2D_IM_BERR_Msk                     (_U_(0x1) << GFX2D_IM_BERR_Pos)                      /**< (GFX2D_IM) Write Error Interrupt Mask Bit Mask */
#define GFX2D_IM_BERR(value)                  (GFX2D_IM_BERR_Msk & ((value) << GFX2D_IM_BERR_Pos))
#define GFX2D_IM_IERR_Pos                     _U_(4)                                               /**< (GFX2D_IM) Illegal Instruction Interrupt Mask Bit Position */
#define GFX2D_IM_IERR_Msk                     (_U_(0x1) << GFX2D_IM_IERR_Pos)                      /**< (GFX2D_IM) Illegal Instruction Interrupt Mask Bit Mask */
#define GFX2D_IM_IERR(value)                  (GFX2D_IM_IERR_Msk & ((value) << GFX2D_IM_IERR_Pos))
#define GFX2D_IM_Msk                          _U_(0x0000001F)                                      /**< (GFX2D_IM) Register Mask  */


/* -------- GFX2D_IS : (GFX2D Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define GFX2D_IS_RBEMPTY_Pos                  _U_(0)                                               /**< (GFX2D_IS) Ring Buffer Empty Interrupt Status Bit Position */
#define GFX2D_IS_RBEMPTY_Msk                  (_U_(0x1) << GFX2D_IS_RBEMPTY_Pos)                   /**< (GFX2D_IS) Ring Buffer Empty Interrupt Status Bit Mask */
#define GFX2D_IS_RBEMPTY(value)               (GFX2D_IS_RBEMPTY_Msk & ((value) << GFX2D_IS_RBEMPTY_Pos))
#define GFX2D_IS_EXEND_Pos                    _U_(1)                                               /**< (GFX2D_IS) End of Execution Status Bit Position */
#define GFX2D_IS_EXEND_Msk                    (_U_(0x1) << GFX2D_IS_EXEND_Pos)                     /**< (GFX2D_IS) End of Execution Status Bit Mask */
#define GFX2D_IS_EXEND(value)                 (GFX2D_IS_EXEND_Msk & ((value) << GFX2D_IS_EXEND_Pos))
#define GFX2D_IS_RERR_Pos                     _U_(2)                                               /**< (GFX2D_IS) Read Error Interrupt Status Bit Position */
#define GFX2D_IS_RERR_Msk                     (_U_(0x1) << GFX2D_IS_RERR_Pos)                      /**< (GFX2D_IS) Read Error Interrupt Status Bit Mask */
#define GFX2D_IS_RERR(value)                  (GFX2D_IS_RERR_Msk & ((value) << GFX2D_IS_RERR_Pos))
#define GFX2D_IS_BERR_Pos                     _U_(3)                                               /**< (GFX2D_IS) Write Error Interrupt Status Bit Position */
#define GFX2D_IS_BERR_Msk                     (_U_(0x1) << GFX2D_IS_BERR_Pos)                      /**< (GFX2D_IS) Write Error Interrupt Status Bit Mask */
#define GFX2D_IS_BERR(value)                  (GFX2D_IS_BERR_Msk & ((value) << GFX2D_IS_BERR_Pos))
#define GFX2D_IS_IERR_Pos                     _U_(4)                                               /**< (GFX2D_IS) Illegal Instruction Interrupt Status Bit Position */
#define GFX2D_IS_IERR_Msk                     (_U_(0x1) << GFX2D_IS_IERR_Pos)                      /**< (GFX2D_IS) Illegal Instruction Interrupt Status Bit Mask */
#define GFX2D_IS_IERR(value)                  (GFX2D_IS_IERR_Msk & ((value) << GFX2D_IS_IERR_Pos))
#define GFX2D_IS_Msk                          _U_(0x0000001F)                                      /**< (GFX2D_IS) Register Mask  */


/* -------- GFX2D_BASE : (GFX2D Offset: 0x30) (R/W 32) Ring Buffer Base Register -------- */
#define GFX2D_BASE_BASE_Pos                   _U_(8)                                               /**< (GFX2D_BASE) Ring Buffer Base Register Position */
#define GFX2D_BASE_BASE_Msk                   (_U_(0xFFFFFF) << GFX2D_BASE_BASE_Pos)               /**< (GFX2D_BASE) Ring Buffer Base Register Mask */
#define GFX2D_BASE_BASE(value)                (GFX2D_BASE_BASE_Msk & ((value) << GFX2D_BASE_BASE_Pos))
#define GFX2D_BASE_Msk                        _U_(0xFFFFFF00)                                      /**< (GFX2D_BASE) Register Mask  */


/* -------- GFX2D_LEN : (GFX2D Offset: 0x34) (R/W 32) Ring Buffer Length Register -------- */
#define GFX2D_LEN_LEN_Pos                     _U_(0)                                               /**< (GFX2D_LEN) Ring Buffer Length Multiplier Position */
#define GFX2D_LEN_LEN_Msk                     (_U_(0xF) << GFX2D_LEN_LEN_Pos)                      /**< (GFX2D_LEN) Ring Buffer Length Multiplier Mask */
#define GFX2D_LEN_LEN(value)                  (GFX2D_LEN_LEN_Msk & ((value) << GFX2D_LEN_LEN_Pos))
#define GFX2D_LEN_Msk                         _U_(0x0000000F)                                      /**< (GFX2D_LEN) Register Mask  */


/* -------- GFX2D_HEAD : (GFX2D Offset: 0x38) (R/W 32) Ring Buffer Head Register -------- */
#define GFX2D_HEAD_HEAD_Pos                   _U_(0)                                               /**< (GFX2D_HEAD) Ring Buffer Head Pointer Position */
#define GFX2D_HEAD_HEAD_Msk                   (_U_(0x3FF) << GFX2D_HEAD_HEAD_Pos)                  /**< (GFX2D_HEAD) Ring Buffer Head Pointer Mask */
#define GFX2D_HEAD_HEAD(value)                (GFX2D_HEAD_HEAD_Msk & ((value) << GFX2D_HEAD_HEAD_Pos))
#define GFX2D_HEAD_Msk                        _U_(0x000003FF)                                      /**< (GFX2D_HEAD) Register Mask  */


/* -------- GFX2D_TAIL : (GFX2D Offset: 0x3C) (R/W 32) Ring Buffer Tail Register -------- */
#define GFX2D_TAIL_TAIL_Pos                   _U_(0)                                               /**< (GFX2D_TAIL) Ring Buffer Tail Pointer Position */
#define GFX2D_TAIL_TAIL_Msk                   (_U_(0x3FF) << GFX2D_TAIL_TAIL_Pos)                  /**< (GFX2D_TAIL) Ring Buffer Tail Pointer Mask */
#define GFX2D_TAIL_TAIL(value)                (GFX2D_TAIL_TAIL_Msk & ((value) << GFX2D_TAIL_TAIL_Pos))
#define GFX2D_TAIL_Msk                        _U_(0x000003FF)                                      /**< (GFX2D_TAIL) Register Mask  */


/** \brief GFX2D register offsets definitions */
#define GFX2D_PA_REG_OFST              (0x00)              /**< (GFX2D_PA) Surface Physical Address Register Offset */
#define GFX2D_PITCH_REG_OFST           (0x04)              /**< (GFX2D_PITCH) Surface Pitch Register Offset */
#define GFX2D_CFG_REG_OFST             (0x08)              /**< (GFX2D_CFG) Surface Configuration Register Offset */
#define GFX2D_PC_REG_OFST              (0x00)              /**< (GFX2D_PC) Performance Configuration 0 Register Offset */
#define GFX2D_MC_REG_OFST              (0x04)              /**< (GFX2D_MC) Metrics Counter 0 Register Offset */
#define GFX2D_GC_REG_OFST              (0x00)              /**< (GFX2D_GC) Global Configuration Register Offset */
#define GFX2D_GE_REG_OFST              (0x04)              /**< (GFX2D_GE) Global Enable Register Offset */
#define GFX2D_GD_REG_OFST              (0x08)              /**< (GFX2D_GD) Global Disable Register Offset */
#define GFX2D_GS_REG_OFST              (0x0C)              /**< (GFX2D_GS) Global Status Register Offset */
#define GFX2D_IE_REG_OFST              (0x10)              /**< (GFX2D_IE) Interrupt Enable Register Offset */
#define GFX2D_ID_REG_OFST              (0x14)              /**< (GFX2D_ID) Interrupt Disable Register Offset */
#define GFX2D_IM_REG_OFST              (0x18)              /**< (GFX2D_IM) Interrupt Mask Register Offset */
#define GFX2D_IS_REG_OFST              (0x1C)              /**< (GFX2D_IS) Interrupt Status Register Offset */
#define GFX2D_BASE_REG_OFST            (0x30)              /**< (GFX2D_BASE) Ring Buffer Base Register Offset */
#define GFX2D_LEN_REG_OFST             (0x34)              /**< (GFX2D_LEN) Ring Buffer Length Register Offset */
#define GFX2D_HEAD_REG_OFST            (0x38)              /**< (GFX2D_HEAD) Ring Buffer Head Register Offset */
#define GFX2D_TAIL_REG_OFST            (0x3C)              /**< (GFX2D_TAIL) Ring Buffer Tail Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GFX2D_CHID register API structure */
typedef struct
{
  __IO  uint32_t                       GFX2D_PA;           /**< Offset: 0x00 (R/W  32) Surface Physical Address Register */
  __IO  uint32_t                       GFX2D_PITCH;        /**< Offset: 0x04 (R/W  32) Surface Pitch Register */
  __IO  uint32_t                       GFX2D_CFG;          /**< Offset: 0x08 (R/W  32) Surface Configuration Register */
  __I   uint8_t                        Reserved1[0x04];
} gfx2d_chid_registers_t;

/** \brief GFX2D_SUB0 register API structure */
typedef struct
{
  __IO  uint32_t                       GFX2D_PC;           /**< Offset: 0x00 (R/W  32) Performance Configuration 0 Register */
  __I   uint32_t                       GFX2D_MC;           /**< Offset: 0x04 (R/   32) Metrics Counter 0 Register */
} gfx2d_sub0_registers_t;

#define GFX2D_SUB0_NUMBER _U_(2)

#define GFX2D_CHID_NUMBER _U_(4)

/** \brief GFX2D register API structure */
typedef struct
{
  __IO  uint32_t                       GFX2D_GC;           /**< Offset: 0x00 (R/W  32) Global Configuration Register */
  __O   uint32_t                       GFX2D_GE;           /**< Offset: 0x04 ( /W  32) Global Enable Register */
  __O   uint32_t                       GFX2D_GD;           /**< Offset: 0x08 ( /W  32) Global Disable Register */
  __I   uint32_t                       GFX2D_GS;           /**< Offset: 0x0C (R/   32) Global Status Register */
  __O   uint32_t                       GFX2D_IE;           /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       GFX2D_ID;           /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       GFX2D_IM;           /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       GFX2D_IS;           /**< Offset: 0x1C (R/   32) Interrupt Status Register */
        gfx2d_sub0_registers_t         GFX2D_SUB0[GFX2D_SUB0_NUMBER]; /**< Offset: 0x20  */
  __IO  uint32_t                       GFX2D_BASE;         /**< Offset: 0x30 (R/W  32) Ring Buffer Base Register */
  __IO  uint32_t                       GFX2D_LEN;          /**< Offset: 0x34 (R/W  32) Ring Buffer Length Register */
  __IO  uint32_t                       GFX2D_HEAD;         /**< Offset: 0x38 (R/W  32) Ring Buffer Head Register */
  __IO  uint32_t                       GFX2D_TAIL;         /**< Offset: 0x3C (R/W  32) Ring Buffer Tail Register */
        gfx2d_chid_registers_t         GFX2D_CHID[GFX2D_CHID_NUMBER]; /**< Offset: 0x40  */
} gfx2d_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_GFX2D_COMPONENT_H_ */
