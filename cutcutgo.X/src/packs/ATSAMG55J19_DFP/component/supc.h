/*
 * Component description for SUPC
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

/* file generated from device description version 2021-07-26T14:35:51Z */
#ifndef _SAMG55_SUPC_COMPONENT_H_
#define _SAMG55_SUPC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SUPC                                         */
/* ************************************************************************** */

/* -------- SUPC_CR : (SUPC Offset: 0x00) ( /W 32) Supply Controller Control Register -------- */
#define SUPC_CR_VROFF_Pos                     _U_(2)                                               /**< (SUPC_CR) Voltage Regulator Off Position */
#define SUPC_CR_VROFF_Msk                     (_U_(0x1) << SUPC_CR_VROFF_Pos)                      /**< (SUPC_CR) Voltage Regulator Off Mask */
#define SUPC_CR_VROFF(value)                  (SUPC_CR_VROFF_Msk & ((value) << SUPC_CR_VROFF_Pos))
#define   SUPC_CR_VROFF_NO_EFFECT_Val         _U_(0x0)                                             /**< (SUPC_CR) No effect.  */
#define   SUPC_CR_VROFF_STOP_VREG_Val         _U_(0x1)                                             /**< (SUPC_CR) If KEY is correct, asserts the system reset signal and stops the voltage regulator.  */
#define SUPC_CR_VROFF_NO_EFFECT               (SUPC_CR_VROFF_NO_EFFECT_Val << SUPC_CR_VROFF_Pos)   /**< (SUPC_CR) No effect. Position  */
#define SUPC_CR_VROFF_STOP_VREG               (SUPC_CR_VROFF_STOP_VREG_Val << SUPC_CR_VROFF_Pos)   /**< (SUPC_CR) If KEY is correct, asserts the system reset signal and stops the voltage regulator. Position  */
#define SUPC_CR_XTALSEL_Pos                   _U_(3)                                               /**< (SUPC_CR) Crystal Oscillator Select Position */
#define SUPC_CR_XTALSEL_Msk                   (_U_(0x1) << SUPC_CR_XTALSEL_Pos)                    /**< (SUPC_CR) Crystal Oscillator Select Mask */
#define SUPC_CR_XTALSEL(value)                (SUPC_CR_XTALSEL_Msk & ((value) << SUPC_CR_XTALSEL_Pos))
#define   SUPC_CR_XTALSEL_NO_EFFECT_Val       _U_(0x0)                                             /**< (SUPC_CR) No effect.  */
#define   SUPC_CR_XTALSEL_CRYSTAL_SEL_Val     _U_(0x1)                                             /**< (SUPC_CR) If KEY is correct, switches the slow clock on the crystal oscillator output.  */
#define SUPC_CR_XTALSEL_NO_EFFECT             (SUPC_CR_XTALSEL_NO_EFFECT_Val << SUPC_CR_XTALSEL_Pos) /**< (SUPC_CR) No effect. Position  */
#define SUPC_CR_XTALSEL_CRYSTAL_SEL           (SUPC_CR_XTALSEL_CRYSTAL_SEL_Val << SUPC_CR_XTALSEL_Pos) /**< (SUPC_CR) If KEY is correct, switches the slow clock on the crystal oscillator output. Position  */
#define SUPC_CR_KEY_Pos                       _U_(24)                                              /**< (SUPC_CR) Password Position */
#define SUPC_CR_KEY_Msk                       (_U_(0xFF) << SUPC_CR_KEY_Pos)                       /**< (SUPC_CR) Password Mask */
#define SUPC_CR_KEY(value)                    (SUPC_CR_KEY_Msk & ((value) << SUPC_CR_KEY_Pos))    
#define   SUPC_CR_KEY_PASSWD_Val              _U_(0xA5)                                            /**< (SUPC_CR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define SUPC_CR_KEY_PASSWD                    (SUPC_CR_KEY_PASSWD_Val << SUPC_CR_KEY_Pos)          /**< (SUPC_CR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define SUPC_CR_Msk                           _U_(0xFF00000C)                                      /**< (SUPC_CR) Register Mask  */


/* -------- SUPC_SMMR : (SUPC Offset: 0x04) (R/W 32) Supply Controller Supply Monitor Mode Register -------- */
#define SUPC_SMMR_SMTH_Pos                    _U_(0)                                               /**< (SUPC_SMMR) Supply Monitor Threshold Position */
#define SUPC_SMMR_SMTH_Msk                    (_U_(0xF) << SUPC_SMMR_SMTH_Pos)                     /**< (SUPC_SMMR) Supply Monitor Threshold Mask */
#define SUPC_SMMR_SMTH(value)                 (SUPC_SMMR_SMTH_Msk & ((value) << SUPC_SMMR_SMTH_Pos))
#define   SUPC_SMMR_SMTH_V1P6_Val             _U_(0x0)                                             /**< (SUPC_SMMR) 1.6 V  */
#define   SUPC_SMMR_SMTH_V1P72_Val            _U_(0x1)                                             /**< (SUPC_SMMR) 1.72 V  */
#define   SUPC_SMMR_SMTH_V1P84_Val            _U_(0x2)                                             /**< (SUPC_SMMR) 1.84 V  */
#define   SUPC_SMMR_SMTH_V1P96_Val            _U_(0x3)                                             /**< (SUPC_SMMR) 1.96 V  */
#define   SUPC_SMMR_SMTH_V2P08_Val            _U_(0x4)                                             /**< (SUPC_SMMR) 2.08 V  */
#define   SUPC_SMMR_SMTH_V2P2_Val             _U_(0x5)                                             /**< (SUPC_SMMR) 2.2 V  */
#define   SUPC_SMMR_SMTH_V2P32_Val            _U_(0x6)                                             /**< (SUPC_SMMR) 2.32 V  */
#define   SUPC_SMMR_SMTH_V2P44_Val            _U_(0x7)                                             /**< (SUPC_SMMR) 2.44 V  */
#define   SUPC_SMMR_SMTH_V2P56_Val            _U_(0x8)                                             /**< (SUPC_SMMR) 2.56 V  */
#define   SUPC_SMMR_SMTH_V2P68_Val            _U_(0x9)                                             /**< (SUPC_SMMR) 2.68 V  */
#define   SUPC_SMMR_SMTH_V2P8_Val             _U_(0xA)                                             /**< (SUPC_SMMR) 2.8 V  */
#define   SUPC_SMMR_SMTH_V2P92_Val            _U_(0xB)                                             /**< (SUPC_SMMR) 2.92 V  */
#define   SUPC_SMMR_SMTH_V3P04_Val            _U_(0xC)                                             /**< (SUPC_SMMR) 3.04 V  */
#define   SUPC_SMMR_SMTH_V3P16_Val            _U_(0xD)                                             /**< (SUPC_SMMR) 3.16 V  */
#define   SUPC_SMMR_SMTH_V3P28_Val            _U_(0xE)                                             /**< (SUPC_SMMR) 3.28 V  */
#define   SUPC_SMMR_SMTH_V3P4_Val             _U_(0xF)                                             /**< (SUPC_SMMR) 3.4 V  */
#define SUPC_SMMR_SMTH_V1P6                   (SUPC_SMMR_SMTH_V1P6_Val << SUPC_SMMR_SMTH_Pos)      /**< (SUPC_SMMR) 1.6 V Position  */
#define SUPC_SMMR_SMTH_V1P72                  (SUPC_SMMR_SMTH_V1P72_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 1.72 V Position  */
#define SUPC_SMMR_SMTH_V1P84                  (SUPC_SMMR_SMTH_V1P84_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 1.84 V Position  */
#define SUPC_SMMR_SMTH_V1P96                  (SUPC_SMMR_SMTH_V1P96_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 1.96 V Position  */
#define SUPC_SMMR_SMTH_V2P08                  (SUPC_SMMR_SMTH_V2P08_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 2.08 V Position  */
#define SUPC_SMMR_SMTH_V2P2                   (SUPC_SMMR_SMTH_V2P2_Val << SUPC_SMMR_SMTH_Pos)      /**< (SUPC_SMMR) 2.2 V Position  */
#define SUPC_SMMR_SMTH_V2P32                  (SUPC_SMMR_SMTH_V2P32_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 2.32 V Position  */
#define SUPC_SMMR_SMTH_V2P44                  (SUPC_SMMR_SMTH_V2P44_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 2.44 V Position  */
#define SUPC_SMMR_SMTH_V2P56                  (SUPC_SMMR_SMTH_V2P56_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 2.56 V Position  */
#define SUPC_SMMR_SMTH_V2P68                  (SUPC_SMMR_SMTH_V2P68_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 2.68 V Position  */
#define SUPC_SMMR_SMTH_V2P8                   (SUPC_SMMR_SMTH_V2P8_Val << SUPC_SMMR_SMTH_Pos)      /**< (SUPC_SMMR) 2.8 V Position  */
#define SUPC_SMMR_SMTH_V2P92                  (SUPC_SMMR_SMTH_V2P92_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 2.92 V Position  */
#define SUPC_SMMR_SMTH_V3P04                  (SUPC_SMMR_SMTH_V3P04_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 3.04 V Position  */
#define SUPC_SMMR_SMTH_V3P16                  (SUPC_SMMR_SMTH_V3P16_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 3.16 V Position  */
#define SUPC_SMMR_SMTH_V3P28                  (SUPC_SMMR_SMTH_V3P28_Val << SUPC_SMMR_SMTH_Pos)     /**< (SUPC_SMMR) 3.28 V Position  */
#define SUPC_SMMR_SMTH_V3P4                   (SUPC_SMMR_SMTH_V3P4_Val << SUPC_SMMR_SMTH_Pos)      /**< (SUPC_SMMR) 3.4 V Position  */
#define SUPC_SMMR_SMSMPL_Pos                  _U_(8)                                               /**< (SUPC_SMMR) Supply Monitor Sampling Period Position */
#define SUPC_SMMR_SMSMPL_Msk                  (_U_(0x7) << SUPC_SMMR_SMSMPL_Pos)                   /**< (SUPC_SMMR) Supply Monitor Sampling Period Mask */
#define SUPC_SMMR_SMSMPL(value)               (SUPC_SMMR_SMSMPL_Msk & ((value) << SUPC_SMMR_SMSMPL_Pos))
#define   SUPC_SMMR_SMSMPL_SMD_Val            _U_(0x0)                                             /**< (SUPC_SMMR) Supply Monitor disabled  */
#define   SUPC_SMMR_SMSMPL_CSM_Val            _U_(0x1)                                             /**< (SUPC_SMMR) Continuous Supply Monitor  */
#define   SUPC_SMMR_SMSMPL_32SLCK_Val         _U_(0x2)                                             /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 32 SLCK periods  */
#define   SUPC_SMMR_SMSMPL_256SLCK_Val        _U_(0x3)                                             /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 256 SLCK periods  */
#define   SUPC_SMMR_SMSMPL_2048SLCK_Val       _U_(0x4)                                             /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 2,048 SLCK periods  */
#define SUPC_SMMR_SMSMPL_SMD                  (SUPC_SMMR_SMSMPL_SMD_Val << SUPC_SMMR_SMSMPL_Pos)   /**< (SUPC_SMMR) Supply Monitor disabled Position  */
#define SUPC_SMMR_SMSMPL_CSM                  (SUPC_SMMR_SMSMPL_CSM_Val << SUPC_SMMR_SMSMPL_Pos)   /**< (SUPC_SMMR) Continuous Supply Monitor Position  */
#define SUPC_SMMR_SMSMPL_32SLCK               (SUPC_SMMR_SMSMPL_32SLCK_Val << SUPC_SMMR_SMSMPL_Pos) /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 32 SLCK periods Position  */
#define SUPC_SMMR_SMSMPL_256SLCK              (SUPC_SMMR_SMSMPL_256SLCK_Val << SUPC_SMMR_SMSMPL_Pos) /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 256 SLCK periods Position  */
#define SUPC_SMMR_SMSMPL_2048SLCK             (SUPC_SMMR_SMSMPL_2048SLCK_Val << SUPC_SMMR_SMSMPL_Pos) /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 2,048 SLCK periods Position  */
#define SUPC_SMMR_SMRSTEN_Pos                 _U_(12)                                              /**< (SUPC_SMMR) Supply Monitor Reset Enable Position */
#define SUPC_SMMR_SMRSTEN_Msk                 (_U_(0x1) << SUPC_SMMR_SMRSTEN_Pos)                  /**< (SUPC_SMMR) Supply Monitor Reset Enable Mask */
#define SUPC_SMMR_SMRSTEN(value)              (SUPC_SMMR_SMRSTEN_Msk & ((value) << SUPC_SMMR_SMRSTEN_Pos))
#define   SUPC_SMMR_SMRSTEN_NOT_ENABLE_Val    _U_(0x0)                                             /**< (SUPC_SMMR) The core reset signal vddcore_nreset is not affected when a supply monitor detection occurs.  */
#define   SUPC_SMMR_SMRSTEN_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_SMMR) The core reset signal vddcore_nreset is asserted when a supply monitor detection occurs.  */
#define SUPC_SMMR_SMRSTEN_NOT_ENABLE          (SUPC_SMMR_SMRSTEN_NOT_ENABLE_Val << SUPC_SMMR_SMRSTEN_Pos) /**< (SUPC_SMMR) The core reset signal vddcore_nreset is not affected when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_SMRSTEN_ENABLE              (SUPC_SMMR_SMRSTEN_ENABLE_Val << SUPC_SMMR_SMRSTEN_Pos) /**< (SUPC_SMMR) The core reset signal vddcore_nreset is asserted when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_SMIEN_Pos                   _U_(13)                                              /**< (SUPC_SMMR) Supply Monitor Interrupt Enable Position */
#define SUPC_SMMR_SMIEN_Msk                   (_U_(0x1) << SUPC_SMMR_SMIEN_Pos)                    /**< (SUPC_SMMR) Supply Monitor Interrupt Enable Mask */
#define SUPC_SMMR_SMIEN(value)                (SUPC_SMMR_SMIEN_Msk & ((value) << SUPC_SMMR_SMIEN_Pos))
#define   SUPC_SMMR_SMIEN_NOT_ENABLE_Val      _U_(0x0)                                             /**< (SUPC_SMMR) The SUPC interrupt signal is not affected when a supply monitor detection occurs.  */
#define   SUPC_SMMR_SMIEN_ENABLE_Val          _U_(0x1)                                             /**< (SUPC_SMMR) The SUPC interrupt signal is asserted when a supply monitor detection occurs.  */
#define SUPC_SMMR_SMIEN_NOT_ENABLE            (SUPC_SMMR_SMIEN_NOT_ENABLE_Val << SUPC_SMMR_SMIEN_Pos) /**< (SUPC_SMMR) The SUPC interrupt signal is not affected when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_SMIEN_ENABLE                (SUPC_SMMR_SMIEN_ENABLE_Val << SUPC_SMMR_SMIEN_Pos)  /**< (SUPC_SMMR) The SUPC interrupt signal is asserted when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_Msk                         _U_(0x0000370F)                                      /**< (SUPC_SMMR) Register Mask  */


/* -------- SUPC_MR : (SUPC Offset: 0x08) (R/W 32) Supply Controller Mode Register -------- */
#define SUPC_MR_BODRSTEN_Pos                  _U_(12)                                              /**< (SUPC_MR) POR Core Reset Enable Position */
#define SUPC_MR_BODRSTEN_Msk                  (_U_(0x1) << SUPC_MR_BODRSTEN_Pos)                   /**< (SUPC_MR) POR Core Reset Enable Mask */
#define SUPC_MR_BODRSTEN(value)               (SUPC_MR_BODRSTEN_Msk & ((value) << SUPC_MR_BODRSTEN_Pos))
#define   SUPC_MR_BODRSTEN_NOT_ENABLE_Val     _U_(0x0)                                             /**< (SUPC_MR) The core reset signal vddcore_nreset is not affected when a brownout detection occurs.  */
#define   SUPC_MR_BODRSTEN_ENABLE_Val         _U_(0x1)                                             /**< (SUPC_MR) The core reset signal vddcore_nreset is asserted when a brownout detection occurs.  */
#define SUPC_MR_BODRSTEN_NOT_ENABLE           (SUPC_MR_BODRSTEN_NOT_ENABLE_Val << SUPC_MR_BODRSTEN_Pos) /**< (SUPC_MR) The core reset signal vddcore_nreset is not affected when a brownout detection occurs. Position  */
#define SUPC_MR_BODRSTEN_ENABLE               (SUPC_MR_BODRSTEN_ENABLE_Val << SUPC_MR_BODRSTEN_Pos) /**< (SUPC_MR) The core reset signal vddcore_nreset is asserted when a brownout detection occurs. Position  */
#define SUPC_MR_BODDIS_Pos                    _U_(13)                                              /**< (SUPC_MR) POR Core Disable Position */
#define SUPC_MR_BODDIS_Msk                    (_U_(0x1) << SUPC_MR_BODDIS_Pos)                     /**< (SUPC_MR) POR Core Disable Mask */
#define SUPC_MR_BODDIS(value)                 (SUPC_MR_BODDIS_Msk & ((value) << SUPC_MR_BODDIS_Pos))
#define   SUPC_MR_BODDIS_ENABLE_Val           _U_(0x0)                                             /**< (SUPC_MR) The core brownout detector is enabled.  */
#define   SUPC_MR_BODDIS_DISABLE_Val          _U_(0x1)                                             /**< (SUPC_MR) The core brownout detector is disabled.  */
#define SUPC_MR_BODDIS_ENABLE                 (SUPC_MR_BODDIS_ENABLE_Val << SUPC_MR_BODDIS_Pos)    /**< (SUPC_MR) The core brownout detector is enabled. Position  */
#define SUPC_MR_BODDIS_DISABLE                (SUPC_MR_BODDIS_DISABLE_Val << SUPC_MR_BODDIS_Pos)   /**< (SUPC_MR) The core brownout detector is disabled. Position  */
#define SUPC_MR_ONE_Pos                       _U_(14)                                              /**< (SUPC_MR) This bit must always be set to 1. Position */
#define SUPC_MR_ONE_Msk                       (_U_(0x1) << SUPC_MR_ONE_Pos)                        /**< (SUPC_MR) This bit must always be set to 1. Mask */
#define SUPC_MR_ONE(value)                    (SUPC_MR_ONE_Msk & ((value) << SUPC_MR_ONE_Pos))    
#define SUPC_MR_OSCBYPASS_Pos                 _U_(20)                                              /**< (SUPC_MR) Oscillator Bypass Position */
#define SUPC_MR_OSCBYPASS_Msk                 (_U_(0x1) << SUPC_MR_OSCBYPASS_Pos)                  /**< (SUPC_MR) Oscillator Bypass Mask */
#define SUPC_MR_OSCBYPASS(value)              (SUPC_MR_OSCBYPASS_Msk & ((value) << SUPC_MR_OSCBYPASS_Pos))
#define   SUPC_MR_OSCBYPASS_NO_EFFECT_Val     _U_(0x0)                                             /**< (SUPC_MR) No effect. Clock selection depends on XTALSEL value.  */
#define   SUPC_MR_OSCBYPASS_BYPASS_Val        _U_(0x1)                                             /**< (SUPC_MR) The 32 kHz crystal oscillator is bypassed if XTALSEL=1. OSCBYPASS must be set prior to write XTALSEL=1.  */
#define SUPC_MR_OSCBYPASS_NO_EFFECT           (SUPC_MR_OSCBYPASS_NO_EFFECT_Val << SUPC_MR_OSCBYPASS_Pos) /**< (SUPC_MR) No effect. Clock selection depends on XTALSEL value. Position  */
#define SUPC_MR_OSCBYPASS_BYPASS              (SUPC_MR_OSCBYPASS_BYPASS_Val << SUPC_MR_OSCBYPASS_Pos) /**< (SUPC_MR) The 32 kHz crystal oscillator is bypassed if XTALSEL=1. OSCBYPASS must be set prior to write XTALSEL=1. Position  */
#define SUPC_MR_CDPSWITCH_Pos                 _U_(21)                                              /**< (SUPC_MR) Cache Data SRAM Power Switch Position */
#define SUPC_MR_CDPSWITCH_Msk                 (_U_(0x1) << SUPC_MR_CDPSWITCH_Pos)                  /**< (SUPC_MR) Cache Data SRAM Power Switch Mask */
#define SUPC_MR_CDPSWITCH(value)              (SUPC_MR_CDPSWITCH_Msk & ((value) << SUPC_MR_CDPSWITCH_Pos))
#define   SUPC_MR_CDPSWITCH_OFF_Val           _U_(0x0)                                             /**< (SUPC_MR) The cache data SRAM is not powered.  */
#define   SUPC_MR_CDPSWITCH_ON_Val            _U_(0x1)                                             /**< (SUPC_MR) The cache data SRAM is powered.  */
#define SUPC_MR_CDPSWITCH_OFF                 (SUPC_MR_CDPSWITCH_OFF_Val << SUPC_MR_CDPSWITCH_Pos) /**< (SUPC_MR) The cache data SRAM is not powered. Position  */
#define SUPC_MR_CDPSWITCH_ON                  (SUPC_MR_CDPSWITCH_ON_Val << SUPC_MR_CDPSWITCH_Pos)  /**< (SUPC_MR) The cache data SRAM is powered. Position  */
#define SUPC_MR_CTPSWITCH_Pos                 _U_(22)                                              /**< (SUPC_MR) Cache Tag SRAM Power Switch Position */
#define SUPC_MR_CTPSWITCH_Msk                 (_U_(0x1) << SUPC_MR_CTPSWITCH_Pos)                  /**< (SUPC_MR) Cache Tag SRAM Power Switch Mask */
#define SUPC_MR_CTPSWITCH(value)              (SUPC_MR_CTPSWITCH_Msk & ((value) << SUPC_MR_CTPSWITCH_Pos))
#define   SUPC_MR_CTPSWITCH_OFF_Val           _U_(0x0)                                             /**< (SUPC_MR) The cache tag SRAM is not powered.  */
#define   SUPC_MR_CTPSWITCH_ON_Val            _U_(0x1)                                             /**< (SUPC_MR) The cache tag SRAM is powered.  */
#define SUPC_MR_CTPSWITCH_OFF                 (SUPC_MR_CTPSWITCH_OFF_Val << SUPC_MR_CTPSWITCH_Pos) /**< (SUPC_MR) The cache tag SRAM is not powered. Position  */
#define SUPC_MR_CTPSWITCH_ON                  (SUPC_MR_CTPSWITCH_ON_Val << SUPC_MR_CTPSWITCH_Pos)  /**< (SUPC_MR) The cache tag SRAM is powered. Position  */
#define SUPC_MR_ONEA_Pos                      _U_(23)                                              /**< (SUPC_MR) This bit must always be set to 1. Position */
#define SUPC_MR_ONEA_Msk                      (_U_(0x1) << SUPC_MR_ONEA_Pos)                       /**< (SUPC_MR) This bit must always be set to 1. Mask */
#define SUPC_MR_ONEA(value)                   (SUPC_MR_ONEA_Msk & ((value) << SUPC_MR_ONEA_Pos))  
#define SUPC_MR_KEY_Pos                       _U_(24)                                              /**< (SUPC_MR) Password Key Position */
#define SUPC_MR_KEY_Msk                       (_U_(0xFF) << SUPC_MR_KEY_Pos)                       /**< (SUPC_MR) Password Key Mask */
#define SUPC_MR_KEY(value)                    (SUPC_MR_KEY_Msk & ((value) << SUPC_MR_KEY_Pos))    
#define   SUPC_MR_KEY_PASSWD_Val              _U_(0xA5)                                            /**< (SUPC_MR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define SUPC_MR_KEY_PASSWD                    (SUPC_MR_KEY_PASSWD_Val << SUPC_MR_KEY_Pos)          /**< (SUPC_MR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define SUPC_MR_Msk                           _U_(0xFFF07000)                                      /**< (SUPC_MR) Register Mask  */


/* -------- SUPC_WUMR : (SUPC Offset: 0x0C) (R/W 32) Supply Controller Wake-up Mode Register -------- */
#define SUPC_WUMR_SMEN_Pos                    _U_(1)                                               /**< (SUPC_WUMR) Supply Monitor Wake-up Enable Position */
#define SUPC_WUMR_SMEN_Msk                    (_U_(0x1) << SUPC_WUMR_SMEN_Pos)                     /**< (SUPC_WUMR) Supply Monitor Wake-up Enable Mask */
#define SUPC_WUMR_SMEN(value)                 (SUPC_WUMR_SMEN_Msk & ((value) << SUPC_WUMR_SMEN_Pos))
#define   SUPC_WUMR_SMEN_NOT_ENABLE_Val       _U_(0x0)                                             /**< (SUPC_WUMR) The supply monitor detection has no wake-up effect.  */
#define   SUPC_WUMR_SMEN_ENABLE_Val           _U_(0x1)                                             /**< (SUPC_WUMR) The supply monitor detection forces the wake-up of the core power supply.  */
#define SUPC_WUMR_SMEN_NOT_ENABLE             (SUPC_WUMR_SMEN_NOT_ENABLE_Val << SUPC_WUMR_SMEN_Pos) /**< (SUPC_WUMR) The supply monitor detection has no wake-up effect. Position  */
#define SUPC_WUMR_SMEN_ENABLE                 (SUPC_WUMR_SMEN_ENABLE_Val << SUPC_WUMR_SMEN_Pos)    /**< (SUPC_WUMR) The supply monitor detection forces the wake-up of the core power supply. Position  */
#define SUPC_WUMR_RTTEN_Pos                   _U_(2)                                               /**< (SUPC_WUMR) Real-time Timer Wake-up Enable Position */
#define SUPC_WUMR_RTTEN_Msk                   (_U_(0x1) << SUPC_WUMR_RTTEN_Pos)                    /**< (SUPC_WUMR) Real-time Timer Wake-up Enable Mask */
#define SUPC_WUMR_RTTEN(value)                (SUPC_WUMR_RTTEN_Msk & ((value) << SUPC_WUMR_RTTEN_Pos))
#define   SUPC_WUMR_RTTEN_ENABLE_Val          _U_(0x1)                                             /**< (SUPC_WUMR) The RTT alarm signal forces the wake-up of the core power supply.  */
#define SUPC_WUMR_RTTEN_ENABLE                (SUPC_WUMR_RTTEN_ENABLE_Val << SUPC_WUMR_RTTEN_Pos)  /**< (SUPC_WUMR) The RTT alarm signal forces the wake-up of the core power supply. Position  */
#define SUPC_WUMR_RTCEN_Pos                   _U_(3)                                               /**< (SUPC_WUMR) Real-time Clock Wake-up Enable Position */
#define SUPC_WUMR_RTCEN_Msk                   (_U_(0x1) << SUPC_WUMR_RTCEN_Pos)                    /**< (SUPC_WUMR) Real-time Clock Wake-up Enable Mask */
#define SUPC_WUMR_RTCEN(value)                (SUPC_WUMR_RTCEN_Msk & ((value) << SUPC_WUMR_RTCEN_Pos))
#define   SUPC_WUMR_RTCEN_ENABLE_Val          _U_(0x1)                                             /**< (SUPC_WUMR) The RTC alarm signal forces the wake-up of the core power supply.  */
#define SUPC_WUMR_RTCEN_ENABLE                (SUPC_WUMR_RTCEN_ENABLE_Val << SUPC_WUMR_RTCEN_Pos)  /**< (SUPC_WUMR) The RTC alarm signal forces the wake-up of the core power supply. Position  */
#define SUPC_WUMR_LPDBCEN0_Pos                _U_(5)                                               /**< (SUPC_WUMR) Low-power Debouncer Enable WKUP0 Position */
#define SUPC_WUMR_LPDBCEN0_Msk                (_U_(0x1) << SUPC_WUMR_LPDBCEN0_Pos)                 /**< (SUPC_WUMR) Low-power Debouncer Enable WKUP0 Mask */
#define SUPC_WUMR_LPDBCEN0(value)             (SUPC_WUMR_LPDBCEN0_Msk & ((value) << SUPC_WUMR_LPDBCEN0_Pos))
#define   SUPC_WUMR_LPDBCEN0_NOT_ENABLE_Val   _U_(0x0)                                             /**< (SUPC_WUMR) The WKUP0 input pin is not connected to the low-power debouncer.  */
#define   SUPC_WUMR_LPDBCEN0_ENABLE_Val       _U_(0x1)                                             /**< (SUPC_WUMR) The WKUP0 input pin is connected to the low-power debouncer and forces a system wake-up.  */
#define SUPC_WUMR_LPDBCEN0_NOT_ENABLE         (SUPC_WUMR_LPDBCEN0_NOT_ENABLE_Val << SUPC_WUMR_LPDBCEN0_Pos) /**< (SUPC_WUMR) The WKUP0 input pin is not connected to the low-power debouncer. Position  */
#define SUPC_WUMR_LPDBCEN0_ENABLE             (SUPC_WUMR_LPDBCEN0_ENABLE_Val << SUPC_WUMR_LPDBCEN0_Pos) /**< (SUPC_WUMR) The WKUP0 input pin is connected to the low-power debouncer and forces a system wake-up. Position  */
#define SUPC_WUMR_LPDBCEN1_Pos                _U_(6)                                               /**< (SUPC_WUMR) Low-power Debouncer Enable WKUP1 Position */
#define SUPC_WUMR_LPDBCEN1_Msk                (_U_(0x1) << SUPC_WUMR_LPDBCEN1_Pos)                 /**< (SUPC_WUMR) Low-power Debouncer Enable WKUP1 Mask */
#define SUPC_WUMR_LPDBCEN1(value)             (SUPC_WUMR_LPDBCEN1_Msk & ((value) << SUPC_WUMR_LPDBCEN1_Pos))
#define   SUPC_WUMR_LPDBCEN1_NOT_ENABLE_Val   _U_(0x0)                                             /**< (SUPC_WUMR) The WKUP1 input pin is not connected to the low-power debouncer.  */
#define   SUPC_WUMR_LPDBCEN1_ENABLE_Val       _U_(0x1)                                             /**< (SUPC_WUMR) The WKUP1 input pin is connected to the low-power debouncer and forces a system wake-up.  */
#define SUPC_WUMR_LPDBCEN1_NOT_ENABLE         (SUPC_WUMR_LPDBCEN1_NOT_ENABLE_Val << SUPC_WUMR_LPDBCEN1_Pos) /**< (SUPC_WUMR) The WKUP1 input pin is not connected to the low-power debouncer. Position  */
#define SUPC_WUMR_LPDBCEN1_ENABLE             (SUPC_WUMR_LPDBCEN1_ENABLE_Val << SUPC_WUMR_LPDBCEN1_Pos) /**< (SUPC_WUMR) The WKUP1 input pin is connected to the low-power debouncer and forces a system wake-up. Position  */
#define SUPC_WUMR_LPDBCCLR_Pos                _U_(7)                                               /**< (SUPC_WUMR) Low-power Debouncer Clear Position */
#define SUPC_WUMR_LPDBCCLR_Msk                (_U_(0x1) << SUPC_WUMR_LPDBCCLR_Pos)                 /**< (SUPC_WUMR) Low-power Debouncer Clear Mask */
#define SUPC_WUMR_LPDBCCLR(value)             (SUPC_WUMR_LPDBCCLR_Msk & ((value) << SUPC_WUMR_LPDBCCLR_Pos))
#define   SUPC_WUMR_LPDBCCLR_NOT_ENABLE_Val   _U_(0x0)                                             /**< (SUPC_WUMR) A low-power debounce event does not create an immediate clear on the first half of GPBR registers.  */
#define   SUPC_WUMR_LPDBCCLR_ENABLE_Val       _U_(0x1)                                             /**< (SUPC_WUMR) A low-power debounce event on WKUP0 or WKUP1 generates an immediate clear on the first half of GPBR registers.  */
#define SUPC_WUMR_LPDBCCLR_NOT_ENABLE         (SUPC_WUMR_LPDBCCLR_NOT_ENABLE_Val << SUPC_WUMR_LPDBCCLR_Pos) /**< (SUPC_WUMR) A low-power debounce event does not create an immediate clear on the first half of GPBR registers. Position  */
#define SUPC_WUMR_LPDBCCLR_ENABLE             (SUPC_WUMR_LPDBCCLR_ENABLE_Val << SUPC_WUMR_LPDBCCLR_Pos) /**< (SUPC_WUMR) A low-power debounce event on WKUP0 or WKUP1 generates an immediate clear on the first half of GPBR registers. Position  */
#define SUPC_WUMR_WKUPDBC_Pos                 _U_(12)                                              /**< (SUPC_WUMR) Wake-up Inputs Debouncer Period Position */
#define SUPC_WUMR_WKUPDBC_Msk                 (_U_(0x7) << SUPC_WUMR_WKUPDBC_Pos)                  /**< (SUPC_WUMR) Wake-up Inputs Debouncer Period Mask */
#define SUPC_WUMR_WKUPDBC(value)              (SUPC_WUMR_WKUPDBC_Msk & ((value) << SUPC_WUMR_WKUPDBC_Pos))
#define   SUPC_WUMR_WKUPDBC_IMMEDIATE_Val     _U_(0x0)                                             /**< (SUPC_WUMR) Immediate, no debouncing, detected active at least on one Slow Clock edge.  */
#define   SUPC_WUMR_WKUPDBC_3_SCLK_Val        _U_(0x1)                                             /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 3 SLCK periods  */
#define   SUPC_WUMR_WKUPDBC_32_SCLK_Val       _U_(0x2)                                             /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 32 SLCK periods  */
#define   SUPC_WUMR_WKUPDBC_512_SCLK_Val      _U_(0x3)                                             /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 512 SLCK periods  */
#define   SUPC_WUMR_WKUPDBC_4096_SCLK_Val     _U_(0x4)                                             /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 4,096 SLCK periods  */
#define   SUPC_WUMR_WKUPDBC_32768_SCLK_Val    _U_(0x5)                                             /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 32,768 SLCK periods  */
#define SUPC_WUMR_WKUPDBC_IMMEDIATE           (SUPC_WUMR_WKUPDBC_IMMEDIATE_Val << SUPC_WUMR_WKUPDBC_Pos) /**< (SUPC_WUMR) Immediate, no debouncing, detected active at least on one Slow Clock edge. Position  */
#define SUPC_WUMR_WKUPDBC_3_SCLK              (SUPC_WUMR_WKUPDBC_3_SCLK_Val << SUPC_WUMR_WKUPDBC_Pos) /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 3 SLCK periods Position  */
#define SUPC_WUMR_WKUPDBC_32_SCLK             (SUPC_WUMR_WKUPDBC_32_SCLK_Val << SUPC_WUMR_WKUPDBC_Pos) /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 32 SLCK periods Position  */
#define SUPC_WUMR_WKUPDBC_512_SCLK            (SUPC_WUMR_WKUPDBC_512_SCLK_Val << SUPC_WUMR_WKUPDBC_Pos) /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 512 SLCK periods Position  */
#define SUPC_WUMR_WKUPDBC_4096_SCLK           (SUPC_WUMR_WKUPDBC_4096_SCLK_Val << SUPC_WUMR_WKUPDBC_Pos) /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 4,096 SLCK periods Position  */
#define SUPC_WUMR_WKUPDBC_32768_SCLK          (SUPC_WUMR_WKUPDBC_32768_SCLK_Val << SUPC_WUMR_WKUPDBC_Pos) /**< (SUPC_WUMR) WKUPx shall be in its active state for at least 32,768 SLCK periods Position  */
#define SUPC_WUMR_LPDBC_Pos                   _U_(16)                                              /**< (SUPC_WUMR) Low-power Debouncer Period Position */
#define SUPC_WUMR_LPDBC_Msk                   (_U_(0x7) << SUPC_WUMR_LPDBC_Pos)                    /**< (SUPC_WUMR) Low-power Debouncer Period Mask */
#define SUPC_WUMR_LPDBC(value)                (SUPC_WUMR_LPDBC_Msk & ((value) << SUPC_WUMR_LPDBC_Pos))
#define   SUPC_WUMR_LPDBC_DISABLE_Val         _U_(0x0)                                             /**< (SUPC_WUMR) Disable the low-power debouncers.  */
#define   SUPC_WUMR_LPDBC_2_RTCOUT0_Val       _U_(0x1)                                             /**< (SUPC_WUMR) WKUP0/1 in active state for at least 2 RTCOUTx periods  */
#define   SUPC_WUMR_LPDBC_3_RTCOUT0_Val       _U_(0x2)                                             /**< (SUPC_WUMR) WKUP0/1 in active state for at least 3 RTCOUTx periods  */
#define   SUPC_WUMR_LPDBC_4_RTCOUT0_Val       _U_(0x3)                                             /**< (SUPC_WUMR) WKUP0/1 in active state for at least 4 RTCOUTx periods  */
#define   SUPC_WUMR_LPDBC_5_RTCOUT0_Val       _U_(0x4)                                             /**< (SUPC_WUMR) WKUP0/1 in active state for at least 5 RTCOUTx periods  */
#define   SUPC_WUMR_LPDBC_6_RTCOUT0_Val       _U_(0x5)                                             /**< (SUPC_WUMR) WKUP0/1 in active state for at least 6 RTCOUTx periods  */
#define   SUPC_WUMR_LPDBC_7_RTCOUT0_Val       _U_(0x6)                                             /**< (SUPC_WUMR) WKUP0/1 in active state for at least 7 RTCOUTx periods  */
#define   SUPC_WUMR_LPDBC_8_RTCOUT0_Val       _U_(0x7)                                             /**< (SUPC_WUMR) WKUP0/1 in active state for at least 8 RTCOUTx periods  */
#define SUPC_WUMR_LPDBC_DISABLE               (SUPC_WUMR_LPDBC_DISABLE_Val << SUPC_WUMR_LPDBC_Pos) /**< (SUPC_WUMR) Disable the low-power debouncers. Position  */
#define SUPC_WUMR_LPDBC_2_RTCOUT0             (SUPC_WUMR_LPDBC_2_RTCOUT0_Val << SUPC_WUMR_LPDBC_Pos) /**< (SUPC_WUMR) WKUP0/1 in active state for at least 2 RTCOUTx periods Position  */
#define SUPC_WUMR_LPDBC_3_RTCOUT0             (SUPC_WUMR_LPDBC_3_RTCOUT0_Val << SUPC_WUMR_LPDBC_Pos) /**< (SUPC_WUMR) WKUP0/1 in active state for at least 3 RTCOUTx periods Position  */
#define SUPC_WUMR_LPDBC_4_RTCOUT0             (SUPC_WUMR_LPDBC_4_RTCOUT0_Val << SUPC_WUMR_LPDBC_Pos) /**< (SUPC_WUMR) WKUP0/1 in active state for at least 4 RTCOUTx periods Position  */
#define SUPC_WUMR_LPDBC_5_RTCOUT0             (SUPC_WUMR_LPDBC_5_RTCOUT0_Val << SUPC_WUMR_LPDBC_Pos) /**< (SUPC_WUMR) WKUP0/1 in active state for at least 5 RTCOUTx periods Position  */
#define SUPC_WUMR_LPDBC_6_RTCOUT0             (SUPC_WUMR_LPDBC_6_RTCOUT0_Val << SUPC_WUMR_LPDBC_Pos) /**< (SUPC_WUMR) WKUP0/1 in active state for at least 6 RTCOUTx periods Position  */
#define SUPC_WUMR_LPDBC_7_RTCOUT0             (SUPC_WUMR_LPDBC_7_RTCOUT0_Val << SUPC_WUMR_LPDBC_Pos) /**< (SUPC_WUMR) WKUP0/1 in active state for at least 7 RTCOUTx periods Position  */
#define SUPC_WUMR_LPDBC_8_RTCOUT0             (SUPC_WUMR_LPDBC_8_RTCOUT0_Val << SUPC_WUMR_LPDBC_Pos) /**< (SUPC_WUMR) WKUP0/1 in active state for at least 8 RTCOUTx periods Position  */
#define SUPC_WUMR_Msk                         _U_(0x000770EE)                                      /**< (SUPC_WUMR) Register Mask  */

#define SUPC_WUMR_LPDBCEN_Pos                 _U_(5)                                               /**< (SUPC_WUMR Position) Low-power Debouncer Enable WKUPx */
#define SUPC_WUMR_LPDBCEN_Msk                 (_U_(0x3) << SUPC_WUMR_LPDBCEN_Pos)                  /**< (SUPC_WUMR Mask) LPDBCEN */
#define SUPC_WUMR_LPDBCEN(value)              (SUPC_WUMR_LPDBCEN_Msk & ((value) << SUPC_WUMR_LPDBCEN_Pos)) 

/* -------- SUPC_WUIR : (SUPC Offset: 0x10) (R/W 32) Supply Controller Wake-up Inputs Register -------- */
#define SUPC_WUIR_WKUPEN0_Pos                 _U_(0)                                               /**< (SUPC_WUIR) Wake-up Input Enable 0 Position */
#define SUPC_WUIR_WKUPEN0_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN0_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 0 Mask */
#define SUPC_WUIR_WKUPEN0(value)              (SUPC_WUIR_WKUPEN0_Msk & ((value) << SUPC_WUIR_WKUPEN0_Pos))
#define   SUPC_WUIR_WKUPEN0_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN0_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN0_DISABLE             (SUPC_WUIR_WKUPEN0_DISABLE_Val << SUPC_WUIR_WKUPEN0_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN0_ENABLE              (SUPC_WUIR_WKUPEN0_ENABLE_Val << SUPC_WUIR_WKUPEN0_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN1_Pos                 _U_(1)                                               /**< (SUPC_WUIR) Wake-up Input Enable 1 Position */
#define SUPC_WUIR_WKUPEN1_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN1_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 1 Mask */
#define SUPC_WUIR_WKUPEN1(value)              (SUPC_WUIR_WKUPEN1_Msk & ((value) << SUPC_WUIR_WKUPEN1_Pos))
#define   SUPC_WUIR_WKUPEN1_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN1_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN1_DISABLE             (SUPC_WUIR_WKUPEN1_DISABLE_Val << SUPC_WUIR_WKUPEN1_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN1_ENABLE              (SUPC_WUIR_WKUPEN1_ENABLE_Val << SUPC_WUIR_WKUPEN1_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN2_Pos                 _U_(2)                                               /**< (SUPC_WUIR) Wake-up Input Enable 2 Position */
#define SUPC_WUIR_WKUPEN2_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN2_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 2 Mask */
#define SUPC_WUIR_WKUPEN2(value)              (SUPC_WUIR_WKUPEN2_Msk & ((value) << SUPC_WUIR_WKUPEN2_Pos))
#define   SUPC_WUIR_WKUPEN2_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN2_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN2_DISABLE             (SUPC_WUIR_WKUPEN2_DISABLE_Val << SUPC_WUIR_WKUPEN2_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN2_ENABLE              (SUPC_WUIR_WKUPEN2_ENABLE_Val << SUPC_WUIR_WKUPEN2_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN3_Pos                 _U_(3)                                               /**< (SUPC_WUIR) Wake-up Input Enable 3 Position */
#define SUPC_WUIR_WKUPEN3_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN3_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 3 Mask */
#define SUPC_WUIR_WKUPEN3(value)              (SUPC_WUIR_WKUPEN3_Msk & ((value) << SUPC_WUIR_WKUPEN3_Pos))
#define   SUPC_WUIR_WKUPEN3_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN3_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN3_DISABLE             (SUPC_WUIR_WKUPEN3_DISABLE_Val << SUPC_WUIR_WKUPEN3_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN3_ENABLE              (SUPC_WUIR_WKUPEN3_ENABLE_Val << SUPC_WUIR_WKUPEN3_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN4_Pos                 _U_(4)                                               /**< (SUPC_WUIR) Wake-up Input Enable 4 Position */
#define SUPC_WUIR_WKUPEN4_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN4_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 4 Mask */
#define SUPC_WUIR_WKUPEN4(value)              (SUPC_WUIR_WKUPEN4_Msk & ((value) << SUPC_WUIR_WKUPEN4_Pos))
#define   SUPC_WUIR_WKUPEN4_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN4_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN4_DISABLE             (SUPC_WUIR_WKUPEN4_DISABLE_Val << SUPC_WUIR_WKUPEN4_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN4_ENABLE              (SUPC_WUIR_WKUPEN4_ENABLE_Val << SUPC_WUIR_WKUPEN4_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN5_Pos                 _U_(5)                                               /**< (SUPC_WUIR) Wake-up Input Enable 5 Position */
#define SUPC_WUIR_WKUPEN5_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN5_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 5 Mask */
#define SUPC_WUIR_WKUPEN5(value)              (SUPC_WUIR_WKUPEN5_Msk & ((value) << SUPC_WUIR_WKUPEN5_Pos))
#define   SUPC_WUIR_WKUPEN5_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN5_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN5_DISABLE             (SUPC_WUIR_WKUPEN5_DISABLE_Val << SUPC_WUIR_WKUPEN5_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN5_ENABLE              (SUPC_WUIR_WKUPEN5_ENABLE_Val << SUPC_WUIR_WKUPEN5_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN6_Pos                 _U_(6)                                               /**< (SUPC_WUIR) Wake-up Input Enable 6 Position */
#define SUPC_WUIR_WKUPEN6_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN6_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 6 Mask */
#define SUPC_WUIR_WKUPEN6(value)              (SUPC_WUIR_WKUPEN6_Msk & ((value) << SUPC_WUIR_WKUPEN6_Pos))
#define   SUPC_WUIR_WKUPEN6_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN6_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN6_DISABLE             (SUPC_WUIR_WKUPEN6_DISABLE_Val << SUPC_WUIR_WKUPEN6_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN6_ENABLE              (SUPC_WUIR_WKUPEN6_ENABLE_Val << SUPC_WUIR_WKUPEN6_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN7_Pos                 _U_(7)                                               /**< (SUPC_WUIR) Wake-up Input Enable 7 Position */
#define SUPC_WUIR_WKUPEN7_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN7_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 7 Mask */
#define SUPC_WUIR_WKUPEN7(value)              (SUPC_WUIR_WKUPEN7_Msk & ((value) << SUPC_WUIR_WKUPEN7_Pos))
#define   SUPC_WUIR_WKUPEN7_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN7_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN7_DISABLE             (SUPC_WUIR_WKUPEN7_DISABLE_Val << SUPC_WUIR_WKUPEN7_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN7_ENABLE              (SUPC_WUIR_WKUPEN7_ENABLE_Val << SUPC_WUIR_WKUPEN7_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN8_Pos                 _U_(8)                                               /**< (SUPC_WUIR) Wake-up Input Enable 8 Position */
#define SUPC_WUIR_WKUPEN8_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN8_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 8 Mask */
#define SUPC_WUIR_WKUPEN8(value)              (SUPC_WUIR_WKUPEN8_Msk & ((value) << SUPC_WUIR_WKUPEN8_Pos))
#define   SUPC_WUIR_WKUPEN8_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN8_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN8_DISABLE             (SUPC_WUIR_WKUPEN8_DISABLE_Val << SUPC_WUIR_WKUPEN8_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN8_ENABLE              (SUPC_WUIR_WKUPEN8_ENABLE_Val << SUPC_WUIR_WKUPEN8_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN9_Pos                 _U_(9)                                               /**< (SUPC_WUIR) Wake-up Input Enable 9 Position */
#define SUPC_WUIR_WKUPEN9_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPEN9_Pos)                  /**< (SUPC_WUIR) Wake-up Input Enable 9 Mask */
#define SUPC_WUIR_WKUPEN9(value)              (SUPC_WUIR_WKUPEN9_Msk & ((value) << SUPC_WUIR_WKUPEN9_Pos))
#define   SUPC_WUIR_WKUPEN9_DISABLE_Val       _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN9_ENABLE_Val        _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN9_DISABLE             (SUPC_WUIR_WKUPEN9_DISABLE_Val << SUPC_WUIR_WKUPEN9_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN9_ENABLE              (SUPC_WUIR_WKUPEN9_ENABLE_Val << SUPC_WUIR_WKUPEN9_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN10_Pos                _U_(10)                                              /**< (SUPC_WUIR) Wake-up Input Enable 10 Position */
#define SUPC_WUIR_WKUPEN10_Msk                (_U_(0x1) << SUPC_WUIR_WKUPEN10_Pos)                 /**< (SUPC_WUIR) Wake-up Input Enable 10 Mask */
#define SUPC_WUIR_WKUPEN10(value)             (SUPC_WUIR_WKUPEN10_Msk & ((value) << SUPC_WUIR_WKUPEN10_Pos))
#define   SUPC_WUIR_WKUPEN10_DISABLE_Val      _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN10_ENABLE_Val       _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN10_DISABLE            (SUPC_WUIR_WKUPEN10_DISABLE_Val << SUPC_WUIR_WKUPEN10_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN10_ENABLE             (SUPC_WUIR_WKUPEN10_ENABLE_Val << SUPC_WUIR_WKUPEN10_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN11_Pos                _U_(11)                                              /**< (SUPC_WUIR) Wake-up Input Enable 11 Position */
#define SUPC_WUIR_WKUPEN11_Msk                (_U_(0x1) << SUPC_WUIR_WKUPEN11_Pos)                 /**< (SUPC_WUIR) Wake-up Input Enable 11 Mask */
#define SUPC_WUIR_WKUPEN11(value)             (SUPC_WUIR_WKUPEN11_Msk & ((value) << SUPC_WUIR_WKUPEN11_Pos))
#define   SUPC_WUIR_WKUPEN11_DISABLE_Val      _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN11_ENABLE_Val       _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN11_DISABLE            (SUPC_WUIR_WKUPEN11_DISABLE_Val << SUPC_WUIR_WKUPEN11_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN11_ENABLE             (SUPC_WUIR_WKUPEN11_ENABLE_Val << SUPC_WUIR_WKUPEN11_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN12_Pos                _U_(12)                                              /**< (SUPC_WUIR) Wake-up Input Enable 12 Position */
#define SUPC_WUIR_WKUPEN12_Msk                (_U_(0x1) << SUPC_WUIR_WKUPEN12_Pos)                 /**< (SUPC_WUIR) Wake-up Input Enable 12 Mask */
#define SUPC_WUIR_WKUPEN12(value)             (SUPC_WUIR_WKUPEN12_Msk & ((value) << SUPC_WUIR_WKUPEN12_Pos))
#define   SUPC_WUIR_WKUPEN12_DISABLE_Val      _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN12_ENABLE_Val       _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN12_DISABLE            (SUPC_WUIR_WKUPEN12_DISABLE_Val << SUPC_WUIR_WKUPEN12_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN12_ENABLE             (SUPC_WUIR_WKUPEN12_ENABLE_Val << SUPC_WUIR_WKUPEN12_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN13_Pos                _U_(13)                                              /**< (SUPC_WUIR) Wake-up Input Enable 13 Position */
#define SUPC_WUIR_WKUPEN13_Msk                (_U_(0x1) << SUPC_WUIR_WKUPEN13_Pos)                 /**< (SUPC_WUIR) Wake-up Input Enable 13 Mask */
#define SUPC_WUIR_WKUPEN13(value)             (SUPC_WUIR_WKUPEN13_Msk & ((value) << SUPC_WUIR_WKUPEN13_Pos))
#define   SUPC_WUIR_WKUPEN13_DISABLE_Val      _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN13_ENABLE_Val       _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN13_DISABLE            (SUPC_WUIR_WKUPEN13_DISABLE_Val << SUPC_WUIR_WKUPEN13_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN13_ENABLE             (SUPC_WUIR_WKUPEN13_ENABLE_Val << SUPC_WUIR_WKUPEN13_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN14_Pos                _U_(14)                                              /**< (SUPC_WUIR) Wake-up Input Enable 14 Position */
#define SUPC_WUIR_WKUPEN14_Msk                (_U_(0x1) << SUPC_WUIR_WKUPEN14_Pos)                 /**< (SUPC_WUIR) Wake-up Input Enable 14 Mask */
#define SUPC_WUIR_WKUPEN14(value)             (SUPC_WUIR_WKUPEN14_Msk & ((value) << SUPC_WUIR_WKUPEN14_Pos))
#define   SUPC_WUIR_WKUPEN14_DISABLE_Val      _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN14_ENABLE_Val       _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN14_DISABLE            (SUPC_WUIR_WKUPEN14_DISABLE_Val << SUPC_WUIR_WKUPEN14_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN14_ENABLE             (SUPC_WUIR_WKUPEN14_ENABLE_Val << SUPC_WUIR_WKUPEN14_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPEN15_Pos                _U_(15)                                              /**< (SUPC_WUIR) Wake-up Input Enable 15 Position */
#define SUPC_WUIR_WKUPEN15_Msk                (_U_(0x1) << SUPC_WUIR_WKUPEN15_Pos)                 /**< (SUPC_WUIR) Wake-up Input Enable 15 Mask */
#define SUPC_WUIR_WKUPEN15(value)             (SUPC_WUIR_WKUPEN15_Msk & ((value) << SUPC_WUIR_WKUPEN15_Pos))
#define   SUPC_WUIR_WKUPEN15_DISABLE_Val      _U_(0x0)                                             /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SUPC_WUIR_WKUPEN15_ENABLE_Val       _U_(0x1)                                             /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPEN15_DISABLE            (SUPC_WUIR_WKUPEN15_DISABLE_Val << SUPC_WUIR_WKUPEN15_Pos) /**< (SUPC_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SUPC_WUIR_WKUPEN15_ENABLE             (SUPC_WUIR_WKUPEN15_ENABLE_Val << SUPC_WUIR_WKUPEN15_Pos) /**< (SUPC_WUIR) The corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT0_Pos                  _U_(16)                                              /**< (SUPC_WUIR) Wake-up Input Type 0 Position */
#define SUPC_WUIR_WKUPT0_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT0_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 0 Mask */
#define SUPC_WUIR_WKUPT0(value)               (SUPC_WUIR_WKUPT0_Msk & ((value) << SUPC_WUIR_WKUPT0_Pos))
#define   SUPC_WUIR_WKUPT0_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT0_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT0_LOW                  (SUPC_WUIR_WKUPT0_LOW_Val << SUPC_WUIR_WKUPT0_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT0_HIGH                 (SUPC_WUIR_WKUPT0_HIGH_Val << SUPC_WUIR_WKUPT0_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT1_Pos                  _U_(17)                                              /**< (SUPC_WUIR) Wake-up Input Type 1 Position */
#define SUPC_WUIR_WKUPT1_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT1_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 1 Mask */
#define SUPC_WUIR_WKUPT1(value)               (SUPC_WUIR_WKUPT1_Msk & ((value) << SUPC_WUIR_WKUPT1_Pos))
#define   SUPC_WUIR_WKUPT1_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT1_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT1_LOW                  (SUPC_WUIR_WKUPT1_LOW_Val << SUPC_WUIR_WKUPT1_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT1_HIGH                 (SUPC_WUIR_WKUPT1_HIGH_Val << SUPC_WUIR_WKUPT1_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT2_Pos                  _U_(18)                                              /**< (SUPC_WUIR) Wake-up Input Type 2 Position */
#define SUPC_WUIR_WKUPT2_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT2_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 2 Mask */
#define SUPC_WUIR_WKUPT2(value)               (SUPC_WUIR_WKUPT2_Msk & ((value) << SUPC_WUIR_WKUPT2_Pos))
#define   SUPC_WUIR_WKUPT2_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT2_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT2_LOW                  (SUPC_WUIR_WKUPT2_LOW_Val << SUPC_WUIR_WKUPT2_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT2_HIGH                 (SUPC_WUIR_WKUPT2_HIGH_Val << SUPC_WUIR_WKUPT2_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT3_Pos                  _U_(19)                                              /**< (SUPC_WUIR) Wake-up Input Type 3 Position */
#define SUPC_WUIR_WKUPT3_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT3_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 3 Mask */
#define SUPC_WUIR_WKUPT3(value)               (SUPC_WUIR_WKUPT3_Msk & ((value) << SUPC_WUIR_WKUPT3_Pos))
#define   SUPC_WUIR_WKUPT3_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT3_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT3_LOW                  (SUPC_WUIR_WKUPT3_LOW_Val << SUPC_WUIR_WKUPT3_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT3_HIGH                 (SUPC_WUIR_WKUPT3_HIGH_Val << SUPC_WUIR_WKUPT3_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT4_Pos                  _U_(20)                                              /**< (SUPC_WUIR) Wake-up Input Type 4 Position */
#define SUPC_WUIR_WKUPT4_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT4_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 4 Mask */
#define SUPC_WUIR_WKUPT4(value)               (SUPC_WUIR_WKUPT4_Msk & ((value) << SUPC_WUIR_WKUPT4_Pos))
#define   SUPC_WUIR_WKUPT4_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT4_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT4_LOW                  (SUPC_WUIR_WKUPT4_LOW_Val << SUPC_WUIR_WKUPT4_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT4_HIGH                 (SUPC_WUIR_WKUPT4_HIGH_Val << SUPC_WUIR_WKUPT4_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT5_Pos                  _U_(21)                                              /**< (SUPC_WUIR) Wake-up Input Type 5 Position */
#define SUPC_WUIR_WKUPT5_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT5_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 5 Mask */
#define SUPC_WUIR_WKUPT5(value)               (SUPC_WUIR_WKUPT5_Msk & ((value) << SUPC_WUIR_WKUPT5_Pos))
#define   SUPC_WUIR_WKUPT5_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT5_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT5_LOW                  (SUPC_WUIR_WKUPT5_LOW_Val << SUPC_WUIR_WKUPT5_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT5_HIGH                 (SUPC_WUIR_WKUPT5_HIGH_Val << SUPC_WUIR_WKUPT5_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT6_Pos                  _U_(22)                                              /**< (SUPC_WUIR) Wake-up Input Type 6 Position */
#define SUPC_WUIR_WKUPT6_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT6_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 6 Mask */
#define SUPC_WUIR_WKUPT6(value)               (SUPC_WUIR_WKUPT6_Msk & ((value) << SUPC_WUIR_WKUPT6_Pos))
#define   SUPC_WUIR_WKUPT6_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT6_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT6_LOW                  (SUPC_WUIR_WKUPT6_LOW_Val << SUPC_WUIR_WKUPT6_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT6_HIGH                 (SUPC_WUIR_WKUPT6_HIGH_Val << SUPC_WUIR_WKUPT6_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT7_Pos                  _U_(23)                                              /**< (SUPC_WUIR) Wake-up Input Type 7 Position */
#define SUPC_WUIR_WKUPT7_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT7_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 7 Mask */
#define SUPC_WUIR_WKUPT7(value)               (SUPC_WUIR_WKUPT7_Msk & ((value) << SUPC_WUIR_WKUPT7_Pos))
#define   SUPC_WUIR_WKUPT7_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT7_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT7_LOW                  (SUPC_WUIR_WKUPT7_LOW_Val << SUPC_WUIR_WKUPT7_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT7_HIGH                 (SUPC_WUIR_WKUPT7_HIGH_Val << SUPC_WUIR_WKUPT7_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT8_Pos                  _U_(24)                                              /**< (SUPC_WUIR) Wake-up Input Type 8 Position */
#define SUPC_WUIR_WKUPT8_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT8_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 8 Mask */
#define SUPC_WUIR_WKUPT8(value)               (SUPC_WUIR_WKUPT8_Msk & ((value) << SUPC_WUIR_WKUPT8_Pos))
#define   SUPC_WUIR_WKUPT8_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT8_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT8_LOW                  (SUPC_WUIR_WKUPT8_LOW_Val << SUPC_WUIR_WKUPT8_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT8_HIGH                 (SUPC_WUIR_WKUPT8_HIGH_Val << SUPC_WUIR_WKUPT8_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT9_Pos                  _U_(25)                                              /**< (SUPC_WUIR) Wake-up Input Type 9 Position */
#define SUPC_WUIR_WKUPT9_Msk                  (_U_(0x1) << SUPC_WUIR_WKUPT9_Pos)                   /**< (SUPC_WUIR) Wake-up Input Type 9 Mask */
#define SUPC_WUIR_WKUPT9(value)               (SUPC_WUIR_WKUPT9_Msk & ((value) << SUPC_WUIR_WKUPT9_Pos))
#define   SUPC_WUIR_WKUPT9_LOW_Val            _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT9_HIGH_Val           _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT9_LOW                  (SUPC_WUIR_WKUPT9_LOW_Val << SUPC_WUIR_WKUPT9_Pos)   /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT9_HIGH                 (SUPC_WUIR_WKUPT9_HIGH_Val << SUPC_WUIR_WKUPT9_Pos)  /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT10_Pos                 _U_(26)                                              /**< (SUPC_WUIR) Wake-up Input Type 10 Position */
#define SUPC_WUIR_WKUPT10_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPT10_Pos)                  /**< (SUPC_WUIR) Wake-up Input Type 10 Mask */
#define SUPC_WUIR_WKUPT10(value)              (SUPC_WUIR_WKUPT10_Msk & ((value) << SUPC_WUIR_WKUPT10_Pos))
#define   SUPC_WUIR_WKUPT10_LOW_Val           _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT10_HIGH_Val          _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT10_LOW                 (SUPC_WUIR_WKUPT10_LOW_Val << SUPC_WUIR_WKUPT10_Pos) /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT10_HIGH                (SUPC_WUIR_WKUPT10_HIGH_Val << SUPC_WUIR_WKUPT10_Pos) /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT11_Pos                 _U_(27)                                              /**< (SUPC_WUIR) Wake-up Input Type 11 Position */
#define SUPC_WUIR_WKUPT11_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPT11_Pos)                  /**< (SUPC_WUIR) Wake-up Input Type 11 Mask */
#define SUPC_WUIR_WKUPT11(value)              (SUPC_WUIR_WKUPT11_Msk & ((value) << SUPC_WUIR_WKUPT11_Pos))
#define   SUPC_WUIR_WKUPT11_LOW_Val           _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT11_HIGH_Val          _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT11_LOW                 (SUPC_WUIR_WKUPT11_LOW_Val << SUPC_WUIR_WKUPT11_Pos) /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT11_HIGH                (SUPC_WUIR_WKUPT11_HIGH_Val << SUPC_WUIR_WKUPT11_Pos) /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT12_Pos                 _U_(28)                                              /**< (SUPC_WUIR) Wake-up Input Type 12 Position */
#define SUPC_WUIR_WKUPT12_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPT12_Pos)                  /**< (SUPC_WUIR) Wake-up Input Type 12 Mask */
#define SUPC_WUIR_WKUPT12(value)              (SUPC_WUIR_WKUPT12_Msk & ((value) << SUPC_WUIR_WKUPT12_Pos))
#define   SUPC_WUIR_WKUPT12_LOW_Val           _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT12_HIGH_Val          _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT12_LOW                 (SUPC_WUIR_WKUPT12_LOW_Val << SUPC_WUIR_WKUPT12_Pos) /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT12_HIGH                (SUPC_WUIR_WKUPT12_HIGH_Val << SUPC_WUIR_WKUPT12_Pos) /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT13_Pos                 _U_(29)                                              /**< (SUPC_WUIR) Wake-up Input Type 13 Position */
#define SUPC_WUIR_WKUPT13_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPT13_Pos)                  /**< (SUPC_WUIR) Wake-up Input Type 13 Mask */
#define SUPC_WUIR_WKUPT13(value)              (SUPC_WUIR_WKUPT13_Msk & ((value) << SUPC_WUIR_WKUPT13_Pos))
#define   SUPC_WUIR_WKUPT13_LOW_Val           _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT13_HIGH_Val          _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT13_LOW                 (SUPC_WUIR_WKUPT13_LOW_Val << SUPC_WUIR_WKUPT13_Pos) /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT13_HIGH                (SUPC_WUIR_WKUPT13_HIGH_Val << SUPC_WUIR_WKUPT13_Pos) /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT14_Pos                 _U_(30)                                              /**< (SUPC_WUIR) Wake-up Input Type 14 Position */
#define SUPC_WUIR_WKUPT14_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPT14_Pos)                  /**< (SUPC_WUIR) Wake-up Input Type 14 Mask */
#define SUPC_WUIR_WKUPT14(value)              (SUPC_WUIR_WKUPT14_Msk & ((value) << SUPC_WUIR_WKUPT14_Pos))
#define   SUPC_WUIR_WKUPT14_LOW_Val           _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT14_HIGH_Val          _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT14_LOW                 (SUPC_WUIR_WKUPT14_LOW_Val << SUPC_WUIR_WKUPT14_Pos) /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT14_HIGH                (SUPC_WUIR_WKUPT14_HIGH_Val << SUPC_WUIR_WKUPT14_Pos) /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT15_Pos                 _U_(31)                                              /**< (SUPC_WUIR) Wake-up Input Type 15 Position */
#define SUPC_WUIR_WKUPT15_Msk                 (_U_(0x1) << SUPC_WUIR_WKUPT15_Pos)                  /**< (SUPC_WUIR) Wake-up Input Type 15 Mask */
#define SUPC_WUIR_WKUPT15(value)              (SUPC_WUIR_WKUPT15_Msk & ((value) << SUPC_WUIR_WKUPT15_Pos))
#define   SUPC_WUIR_WKUPT15_LOW_Val           _U_(0x0)                                             /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT15_HIGH_Val          _U_(0x1)                                             /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT15_LOW                 (SUPC_WUIR_WKUPT15_LOW_Val << SUPC_WUIR_WKUPT15_Pos) /**< (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT15_HIGH                (SUPC_WUIR_WKUPT15_HIGH_Val << SUPC_WUIR_WKUPT15_Pos) /**< (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_Msk                         _U_(0xFFFFFFFF)                                      /**< (SUPC_WUIR) Register Mask  */

#define SUPC_WUIR_WKUPEN_Pos                  _U_(0)                                               /**< (SUPC_WUIR Position) Wake-up Input Enable x */
#define SUPC_WUIR_WKUPEN_Msk                  (_U_(0xFFFF) << SUPC_WUIR_WKUPEN_Pos)                /**< (SUPC_WUIR Mask) WKUPEN */
#define SUPC_WUIR_WKUPEN(value)               (SUPC_WUIR_WKUPEN_Msk & ((value) << SUPC_WUIR_WKUPEN_Pos)) 
#define SUPC_WUIR_WKUPT_Pos                   _U_(16)                                              /**< (SUPC_WUIR Position) Wake-up Input Type x5 */
#define SUPC_WUIR_WKUPT_Msk                   (_U_(0xFFFF) << SUPC_WUIR_WKUPT_Pos)                 /**< (SUPC_WUIR Mask) WKUPT */
#define SUPC_WUIR_WKUPT(value)                (SUPC_WUIR_WKUPT_Msk & ((value) << SUPC_WUIR_WKUPT_Pos)) 

/* -------- SUPC_SR : (SUPC Offset: 0x14) ( R/ 32) Supply Controller Status Register -------- */
#define SUPC_SR_WKUPS_Pos                     _U_(1)                                               /**< (SUPC_SR) WKUP Wake-up Status (cleared on read) Position */
#define SUPC_SR_WKUPS_Msk                     (_U_(0x1) << SUPC_SR_WKUPS_Pos)                      /**< (SUPC_SR) WKUP Wake-up Status (cleared on read) Mask */
#define SUPC_SR_WKUPS(value)                  (SUPC_SR_WKUPS_Msk & ((value) << SUPC_SR_WKUPS_Pos))
#define   SUPC_SR_WKUPS_NO_Val                _U_(0x0)                                             /**< (SUPC_SR) No wake-up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR.  */
#define   SUPC_SR_WKUPS_PRESENT_Val           _U_(0x1)                                             /**< (SUPC_SR) At least one wake-up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPS_NO                      (SUPC_SR_WKUPS_NO_Val << SUPC_SR_WKUPS_Pos)          /**< (SUPC_SR) No wake-up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPS_PRESENT                 (SUPC_SR_WKUPS_PRESENT_Val << SUPC_SR_WKUPS_Pos)     /**< (SUPC_SR) At least one wake-up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR. Position  */
#define SUPC_SR_BODRSTS_Pos                   _U_(3)                                               /**< (SUPC_SR) Brownout Detector Reset Status (cleared on read) Position */
#define SUPC_SR_BODRSTS_Msk                   (_U_(0x1) << SUPC_SR_BODRSTS_Pos)                    /**< (SUPC_SR) Brownout Detector Reset Status (cleared on read) Mask */
#define SUPC_SR_BODRSTS(value)                (SUPC_SR_BODRSTS_Msk & ((value) << SUPC_SR_BODRSTS_Pos))
#define   SUPC_SR_BODRSTS_NO_Val              _U_(0x0)                                             /**< (SUPC_SR) No core brownout rising edge event has been detected since the last read of SUPC_SR.  */
#define   SUPC_SR_BODRSTS_PRESENT_Val         _U_(0x1)                                             /**< (SUPC_SR) At least one brownout output rising edge event has been detected since the last read of SUPC_SR.  */
#define SUPC_SR_BODRSTS_NO                    (SUPC_SR_BODRSTS_NO_Val << SUPC_SR_BODRSTS_Pos)      /**< (SUPC_SR) No core brownout rising edge event has been detected since the last read of SUPC_SR. Position  */
#define SUPC_SR_BODRSTS_PRESENT               (SUPC_SR_BODRSTS_PRESENT_Val << SUPC_SR_BODRSTS_Pos) /**< (SUPC_SR) At least one brownout output rising edge event has been detected since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMRSTS_Pos                    _U_(4)                                               /**< (SUPC_SR) Supply Monitor Reset Status (cleared on read) Position */
#define SUPC_SR_SMRSTS_Msk                    (_U_(0x1) << SUPC_SR_SMRSTS_Pos)                     /**< (SUPC_SR) Supply Monitor Reset Status (cleared on read) Mask */
#define SUPC_SR_SMRSTS(value)                 (SUPC_SR_SMRSTS_Msk & ((value) << SUPC_SR_SMRSTS_Pos))
#define   SUPC_SR_SMRSTS_NO_Val               _U_(0x0)                                             /**< (SUPC_SR) No supply monitor detection has generated a core reset since the last read of SUPC_SR.  */
#define   SUPC_SR_SMRSTS_PRESENT_Val          _U_(0x1)                                             /**< (SUPC_SR) At least one supply monitor detection has generated a core reset since the last read of SUPC_SR.  */
#define SUPC_SR_SMRSTS_NO                     (SUPC_SR_SMRSTS_NO_Val << SUPC_SR_SMRSTS_Pos)        /**< (SUPC_SR) No supply monitor detection has generated a core reset since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMRSTS_PRESENT                (SUPC_SR_SMRSTS_PRESENT_Val << SUPC_SR_SMRSTS_Pos)   /**< (SUPC_SR) At least one supply monitor detection has generated a core reset since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMS_Pos                       _U_(5)                                               /**< (SUPC_SR) Supply Monitor Status (cleared on read) Position */
#define SUPC_SR_SMS_Msk                       (_U_(0x1) << SUPC_SR_SMS_Pos)                        /**< (SUPC_SR) Supply Monitor Status (cleared on read) Mask */
#define SUPC_SR_SMS(value)                    (SUPC_SR_SMS_Msk & ((value) << SUPC_SR_SMS_Pos))    
#define   SUPC_SR_SMS_NO_Val                  _U_(0x0)                                             /**< (SUPC_SR) No supply monitor detection since the last read of SUPC_SR.  */
#define   SUPC_SR_SMS_PRESENT_Val             _U_(0x1)                                             /**< (SUPC_SR) At least one supply monitor detection since the last read of SUPC_SR.  */
#define SUPC_SR_SMS_NO                        (SUPC_SR_SMS_NO_Val << SUPC_SR_SMS_Pos)              /**< (SUPC_SR) No supply monitor detection since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMS_PRESENT                   (SUPC_SR_SMS_PRESENT_Val << SUPC_SR_SMS_Pos)         /**< (SUPC_SR) At least one supply monitor detection since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMOS_Pos                      _U_(6)                                               /**< (SUPC_SR) Supply Monitor Output Status Position */
#define SUPC_SR_SMOS_Msk                      (_U_(0x1) << SUPC_SR_SMOS_Pos)                       /**< (SUPC_SR) Supply Monitor Output Status Mask */
#define SUPC_SR_SMOS(value)                   (SUPC_SR_SMOS_Msk & ((value) << SUPC_SR_SMOS_Pos))  
#define   SUPC_SR_SMOS_HIGH_Val               _U_(0x0)                                             /**< (SUPC_SR) The supply monitor detected VDDIO higher than its threshold at its last measurement.  */
#define   SUPC_SR_SMOS_LOW_Val                _U_(0x1)                                             /**< (SUPC_SR) The supply monitor detected VDDIO lower than its threshold at its last measurement.  */
#define SUPC_SR_SMOS_HIGH                     (SUPC_SR_SMOS_HIGH_Val << SUPC_SR_SMOS_Pos)          /**< (SUPC_SR) The supply monitor detected VDDIO higher than its threshold at its last measurement. Position  */
#define SUPC_SR_SMOS_LOW                      (SUPC_SR_SMOS_LOW_Val << SUPC_SR_SMOS_Pos)           /**< (SUPC_SR) The supply monitor detected VDDIO lower than its threshold at its last measurement. Position  */
#define SUPC_SR_OSCSEL_Pos                    _U_(7)                                               /**< (SUPC_SR) 32-kHz Oscillator Selection Status Position */
#define SUPC_SR_OSCSEL_Msk                    (_U_(0x1) << SUPC_SR_OSCSEL_Pos)                     /**< (SUPC_SR) 32-kHz Oscillator Selection Status Mask */
#define SUPC_SR_OSCSEL(value)                 (SUPC_SR_OSCSEL_Msk & ((value) << SUPC_SR_OSCSEL_Pos))
#define   SUPC_SR_OSCSEL_RC_Val               _U_(0x0)                                             /**< (SUPC_SR) The slow clock SLCK is generated by the embedded 32 kHz RC oscillator.  */
#define   SUPC_SR_OSCSEL_CRYST_Val            _U_(0x1)                                             /**< (SUPC_SR) The slow clock SLCK is generated by the 32 kHz crystal oscillator.  */
#define SUPC_SR_OSCSEL_RC                     (SUPC_SR_OSCSEL_RC_Val << SUPC_SR_OSCSEL_Pos)        /**< (SUPC_SR) The slow clock SLCK is generated by the embedded 32 kHz RC oscillator. Position  */
#define SUPC_SR_OSCSEL_CRYST                  (SUPC_SR_OSCSEL_CRYST_Val << SUPC_SR_OSCSEL_Pos)     /**< (SUPC_SR) The slow clock SLCK is generated by the 32 kHz crystal oscillator. Position  */
#define SUPC_SR_LPDBCS0_Pos                   _U_(13)                                              /**< (SUPC_SR) Low-power Debouncer Wake-up Status on WKUP0 (cleared on read) Position */
#define SUPC_SR_LPDBCS0_Msk                   (_U_(0x1) << SUPC_SR_LPDBCS0_Pos)                    /**< (SUPC_SR) Low-power Debouncer Wake-up Status on WKUP0 (cleared on read) Mask */
#define SUPC_SR_LPDBCS0(value)                (SUPC_SR_LPDBCS0_Msk & ((value) << SUPC_SR_LPDBCS0_Pos))
#define   SUPC_SR_LPDBCS0_NO_Val              _U_(0x0)                                             /**< (SUPC_SR) No wake-up due to the assertion of the WKUP0 pin has occurred since the last read of SUPC_SR.  */
#define   SUPC_SR_LPDBCS0_PRESENT_Val         _U_(0x1)                                             /**< (SUPC_SR) At least one wake-up due to the assertion of the WKUP0 pin has occurred since the last read of SUPC_SR.  */
#define SUPC_SR_LPDBCS0_NO                    (SUPC_SR_LPDBCS0_NO_Val << SUPC_SR_LPDBCS0_Pos)      /**< (SUPC_SR) No wake-up due to the assertion of the WKUP0 pin has occurred since the last read of SUPC_SR. Position  */
#define SUPC_SR_LPDBCS0_PRESENT               (SUPC_SR_LPDBCS0_PRESENT_Val << SUPC_SR_LPDBCS0_Pos) /**< (SUPC_SR) At least one wake-up due to the assertion of the WKUP0 pin has occurred since the last read of SUPC_SR. Position  */
#define SUPC_SR_LPDBCS1_Pos                   _U_(14)                                              /**< (SUPC_SR) Low-power Debouncer Wake-up Status on WKUP1 (cleared on read) Position */
#define SUPC_SR_LPDBCS1_Msk                   (_U_(0x1) << SUPC_SR_LPDBCS1_Pos)                    /**< (SUPC_SR) Low-power Debouncer Wake-up Status on WKUP1 (cleared on read) Mask */
#define SUPC_SR_LPDBCS1(value)                (SUPC_SR_LPDBCS1_Msk & ((value) << SUPC_SR_LPDBCS1_Pos))
#define   SUPC_SR_LPDBCS1_NO_Val              _U_(0x0)                                             /**< (SUPC_SR) No wake-up due to the assertion of the WKUP1 pin has occurred since the last read of SUPC_SR.  */
#define   SUPC_SR_LPDBCS1_PRESENT_Val         _U_(0x1)                                             /**< (SUPC_SR) At least one wake-up due to the assertion of the WKUP1 pin has occurred since the last read of SUPC_SR.  */
#define SUPC_SR_LPDBCS1_NO                    (SUPC_SR_LPDBCS1_NO_Val << SUPC_SR_LPDBCS1_Pos)      /**< (SUPC_SR) No wake-up due to the assertion of the WKUP1 pin has occurred since the last read of SUPC_SR. Position  */
#define SUPC_SR_LPDBCS1_PRESENT               (SUPC_SR_LPDBCS1_PRESENT_Val << SUPC_SR_LPDBCS1_Pos) /**< (SUPC_SR) At least one wake-up due to the assertion of the WKUP1 pin has occurred since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS0_Pos                   _U_(16)                                              /**< (SUPC_SR) WKUP Input Status 0 (cleared on read) Position */
#define SUPC_SR_WKUPIS0_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS0_Pos)                    /**< (SUPC_SR) WKUP Input Status 0 (cleared on read) Mask */
#define SUPC_SR_WKUPIS0(value)                (SUPC_SR_WKUPIS0_Msk & ((value) << SUPC_SR_WKUPIS0_Pos))
#define   SUPC_SR_WKUPIS0_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS0_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS0_DISABLED              (SUPC_SR_WKUPIS0_DISABLED_Val << SUPC_SR_WKUPIS0_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS0_ENABLED               (SUPC_SR_WKUPIS0_ENABLED_Val << SUPC_SR_WKUPIS0_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS1_Pos                   _U_(17)                                              /**< (SUPC_SR) WKUP Input Status 1 (cleared on read) Position */
#define SUPC_SR_WKUPIS1_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS1_Pos)                    /**< (SUPC_SR) WKUP Input Status 1 (cleared on read) Mask */
#define SUPC_SR_WKUPIS1(value)                (SUPC_SR_WKUPIS1_Msk & ((value) << SUPC_SR_WKUPIS1_Pos))
#define   SUPC_SR_WKUPIS1_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS1_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS1_DISABLED              (SUPC_SR_WKUPIS1_DISABLED_Val << SUPC_SR_WKUPIS1_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS1_ENABLED               (SUPC_SR_WKUPIS1_ENABLED_Val << SUPC_SR_WKUPIS1_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS2_Pos                   _U_(18)                                              /**< (SUPC_SR) WKUP Input Status 2 (cleared on read) Position */
#define SUPC_SR_WKUPIS2_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS2_Pos)                    /**< (SUPC_SR) WKUP Input Status 2 (cleared on read) Mask */
#define SUPC_SR_WKUPIS2(value)                (SUPC_SR_WKUPIS2_Msk & ((value) << SUPC_SR_WKUPIS2_Pos))
#define   SUPC_SR_WKUPIS2_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS2_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS2_DISABLED              (SUPC_SR_WKUPIS2_DISABLED_Val << SUPC_SR_WKUPIS2_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS2_ENABLED               (SUPC_SR_WKUPIS2_ENABLED_Val << SUPC_SR_WKUPIS2_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS3_Pos                   _U_(19)                                              /**< (SUPC_SR) WKUP Input Status 3 (cleared on read) Position */
#define SUPC_SR_WKUPIS3_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS3_Pos)                    /**< (SUPC_SR) WKUP Input Status 3 (cleared on read) Mask */
#define SUPC_SR_WKUPIS3(value)                (SUPC_SR_WKUPIS3_Msk & ((value) << SUPC_SR_WKUPIS3_Pos))
#define   SUPC_SR_WKUPIS3_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS3_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS3_DISABLED              (SUPC_SR_WKUPIS3_DISABLED_Val << SUPC_SR_WKUPIS3_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS3_ENABLED               (SUPC_SR_WKUPIS3_ENABLED_Val << SUPC_SR_WKUPIS3_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS4_Pos                   _U_(20)                                              /**< (SUPC_SR) WKUP Input Status 4 (cleared on read) Position */
#define SUPC_SR_WKUPIS4_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS4_Pos)                    /**< (SUPC_SR) WKUP Input Status 4 (cleared on read) Mask */
#define SUPC_SR_WKUPIS4(value)                (SUPC_SR_WKUPIS4_Msk & ((value) << SUPC_SR_WKUPIS4_Pos))
#define   SUPC_SR_WKUPIS4_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS4_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS4_DISABLED              (SUPC_SR_WKUPIS4_DISABLED_Val << SUPC_SR_WKUPIS4_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS4_ENABLED               (SUPC_SR_WKUPIS4_ENABLED_Val << SUPC_SR_WKUPIS4_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS5_Pos                   _U_(21)                                              /**< (SUPC_SR) WKUP Input Status 5 (cleared on read) Position */
#define SUPC_SR_WKUPIS5_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS5_Pos)                    /**< (SUPC_SR) WKUP Input Status 5 (cleared on read) Mask */
#define SUPC_SR_WKUPIS5(value)                (SUPC_SR_WKUPIS5_Msk & ((value) << SUPC_SR_WKUPIS5_Pos))
#define   SUPC_SR_WKUPIS5_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS5_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS5_DISABLED              (SUPC_SR_WKUPIS5_DISABLED_Val << SUPC_SR_WKUPIS5_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS5_ENABLED               (SUPC_SR_WKUPIS5_ENABLED_Val << SUPC_SR_WKUPIS5_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS6_Pos                   _U_(22)                                              /**< (SUPC_SR) WKUP Input Status 6 (cleared on read) Position */
#define SUPC_SR_WKUPIS6_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS6_Pos)                    /**< (SUPC_SR) WKUP Input Status 6 (cleared on read) Mask */
#define SUPC_SR_WKUPIS6(value)                (SUPC_SR_WKUPIS6_Msk & ((value) << SUPC_SR_WKUPIS6_Pos))
#define   SUPC_SR_WKUPIS6_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS6_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS6_DISABLED              (SUPC_SR_WKUPIS6_DISABLED_Val << SUPC_SR_WKUPIS6_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS6_ENABLED               (SUPC_SR_WKUPIS6_ENABLED_Val << SUPC_SR_WKUPIS6_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS7_Pos                   _U_(23)                                              /**< (SUPC_SR) WKUP Input Status 7 (cleared on read) Position */
#define SUPC_SR_WKUPIS7_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS7_Pos)                    /**< (SUPC_SR) WKUP Input Status 7 (cleared on read) Mask */
#define SUPC_SR_WKUPIS7(value)                (SUPC_SR_WKUPIS7_Msk & ((value) << SUPC_SR_WKUPIS7_Pos))
#define   SUPC_SR_WKUPIS7_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS7_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS7_DISABLED              (SUPC_SR_WKUPIS7_DISABLED_Val << SUPC_SR_WKUPIS7_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS7_ENABLED               (SUPC_SR_WKUPIS7_ENABLED_Val << SUPC_SR_WKUPIS7_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS8_Pos                   _U_(24)                                              /**< (SUPC_SR) WKUP Input Status 8 (cleared on read) Position */
#define SUPC_SR_WKUPIS8_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS8_Pos)                    /**< (SUPC_SR) WKUP Input Status 8 (cleared on read) Mask */
#define SUPC_SR_WKUPIS8(value)                (SUPC_SR_WKUPIS8_Msk & ((value) << SUPC_SR_WKUPIS8_Pos))
#define   SUPC_SR_WKUPIS8_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS8_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS8_DISABLED              (SUPC_SR_WKUPIS8_DISABLED_Val << SUPC_SR_WKUPIS8_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS8_ENABLED               (SUPC_SR_WKUPIS8_ENABLED_Val << SUPC_SR_WKUPIS8_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS9_Pos                   _U_(25)                                              /**< (SUPC_SR) WKUP Input Status 9 (cleared on read) Position */
#define SUPC_SR_WKUPIS9_Msk                   (_U_(0x1) << SUPC_SR_WKUPIS9_Pos)                    /**< (SUPC_SR) WKUP Input Status 9 (cleared on read) Mask */
#define SUPC_SR_WKUPIS9(value)                (SUPC_SR_WKUPIS9_Msk & ((value) << SUPC_SR_WKUPIS9_Pos))
#define   SUPC_SR_WKUPIS9_DISABLED_Val        _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS9_ENABLED_Val         _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS9_DISABLED              (SUPC_SR_WKUPIS9_DISABLED_Val << SUPC_SR_WKUPIS9_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS9_ENABLED               (SUPC_SR_WKUPIS9_ENABLED_Val << SUPC_SR_WKUPIS9_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS10_Pos                  _U_(26)                                              /**< (SUPC_SR) WKUP Input Status 10 (cleared on read) Position */
#define SUPC_SR_WKUPIS10_Msk                  (_U_(0x1) << SUPC_SR_WKUPIS10_Pos)                   /**< (SUPC_SR) WKUP Input Status 10 (cleared on read) Mask */
#define SUPC_SR_WKUPIS10(value)               (SUPC_SR_WKUPIS10_Msk & ((value) << SUPC_SR_WKUPIS10_Pos))
#define   SUPC_SR_WKUPIS10_DISABLED_Val       _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS10_ENABLED_Val        _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS10_DISABLED             (SUPC_SR_WKUPIS10_DISABLED_Val << SUPC_SR_WKUPIS10_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS10_ENABLED              (SUPC_SR_WKUPIS10_ENABLED_Val << SUPC_SR_WKUPIS10_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS11_Pos                  _U_(27)                                              /**< (SUPC_SR) WKUP Input Status 11 (cleared on read) Position */
#define SUPC_SR_WKUPIS11_Msk                  (_U_(0x1) << SUPC_SR_WKUPIS11_Pos)                   /**< (SUPC_SR) WKUP Input Status 11 (cleared on read) Mask */
#define SUPC_SR_WKUPIS11(value)               (SUPC_SR_WKUPIS11_Msk & ((value) << SUPC_SR_WKUPIS11_Pos))
#define   SUPC_SR_WKUPIS11_DISABLED_Val       _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS11_ENABLED_Val        _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS11_DISABLED             (SUPC_SR_WKUPIS11_DISABLED_Val << SUPC_SR_WKUPIS11_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS11_ENABLED              (SUPC_SR_WKUPIS11_ENABLED_Val << SUPC_SR_WKUPIS11_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS12_Pos                  _U_(28)                                              /**< (SUPC_SR) WKUP Input Status 12 (cleared on read) Position */
#define SUPC_SR_WKUPIS12_Msk                  (_U_(0x1) << SUPC_SR_WKUPIS12_Pos)                   /**< (SUPC_SR) WKUP Input Status 12 (cleared on read) Mask */
#define SUPC_SR_WKUPIS12(value)               (SUPC_SR_WKUPIS12_Msk & ((value) << SUPC_SR_WKUPIS12_Pos))
#define   SUPC_SR_WKUPIS12_DISABLED_Val       _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS12_ENABLED_Val        _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS12_DISABLED             (SUPC_SR_WKUPIS12_DISABLED_Val << SUPC_SR_WKUPIS12_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS12_ENABLED              (SUPC_SR_WKUPIS12_ENABLED_Val << SUPC_SR_WKUPIS12_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS13_Pos                  _U_(29)                                              /**< (SUPC_SR) WKUP Input Status 13 (cleared on read) Position */
#define SUPC_SR_WKUPIS13_Msk                  (_U_(0x1) << SUPC_SR_WKUPIS13_Pos)                   /**< (SUPC_SR) WKUP Input Status 13 (cleared on read) Mask */
#define SUPC_SR_WKUPIS13(value)               (SUPC_SR_WKUPIS13_Msk & ((value) << SUPC_SR_WKUPIS13_Pos))
#define   SUPC_SR_WKUPIS13_DISABLED_Val       _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS13_ENABLED_Val        _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS13_DISABLED             (SUPC_SR_WKUPIS13_DISABLED_Val << SUPC_SR_WKUPIS13_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS13_ENABLED              (SUPC_SR_WKUPIS13_ENABLED_Val << SUPC_SR_WKUPIS13_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS14_Pos                  _U_(30)                                              /**< (SUPC_SR) WKUP Input Status 14 (cleared on read) Position */
#define SUPC_SR_WKUPIS14_Msk                  (_U_(0x1) << SUPC_SR_WKUPIS14_Pos)                   /**< (SUPC_SR) WKUP Input Status 14 (cleared on read) Mask */
#define SUPC_SR_WKUPIS14(value)               (SUPC_SR_WKUPIS14_Msk & ((value) << SUPC_SR_WKUPIS14_Pos))
#define   SUPC_SR_WKUPIS14_DISABLED_Val       _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS14_ENABLED_Val        _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS14_DISABLED             (SUPC_SR_WKUPIS14_DISABLED_Val << SUPC_SR_WKUPIS14_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS14_ENABLED              (SUPC_SR_WKUPIS14_ENABLED_Val << SUPC_SR_WKUPIS14_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_WKUPIS15_Pos                  _U_(31)                                              /**< (SUPC_SR) WKUP Input Status 15 (cleared on read) Position */
#define SUPC_SR_WKUPIS15_Msk                  (_U_(0x1) << SUPC_SR_WKUPIS15_Pos)                   /**< (SUPC_SR) WKUP Input Status 15 (cleared on read) Mask */
#define SUPC_SR_WKUPIS15(value)               (SUPC_SR_WKUPIS15_Msk & ((value) << SUPC_SR_WKUPIS15_Pos))
#define   SUPC_SR_WKUPIS15_DISABLED_Val       _U_(0x0)                                             /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SUPC_SR_WKUPIS15_ENABLED_Val        _U_(0x1)                                             /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR.  */
#define SUPC_SR_WKUPIS15_DISABLED             (SUPC_SR_WKUPIS15_DISABLED_Val << SUPC_SR_WKUPIS15_Pos) /**< (SUPC_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SUPC_SR_WKUPIS15_ENABLED              (SUPC_SR_WKUPIS15_ENABLED_Val << SUPC_SR_WKUPIS15_Pos) /**< (SUPC_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event since the last read of SUPC_SR. Position  */
#define SUPC_SR_Msk                           _U_(0xFFFF60FA)                                      /**< (SUPC_SR) Register Mask  */

#define SUPC_SR_LPDBCS_Pos                    _U_(13)                                              /**< (SUPC_SR Position) Low-power Debouncer Wake-up Status on WKUPx (cleared on read) */
#define SUPC_SR_LPDBCS_Msk                    (_U_(0x3) << SUPC_SR_LPDBCS_Pos)                     /**< (SUPC_SR Mask) LPDBCS */
#define SUPC_SR_LPDBCS(value)                 (SUPC_SR_LPDBCS_Msk & ((value) << SUPC_SR_LPDBCS_Pos)) 
#define SUPC_SR_WKUPIS_Pos                    _U_(16)                                              /**< (SUPC_SR Position) WKUP Input Status x5 (cleared on read) */
#define SUPC_SR_WKUPIS_Msk                    (_U_(0xFFFF) << SUPC_SR_WKUPIS_Pos)                  /**< (SUPC_SR Mask) WKUPIS */
#define SUPC_SR_WKUPIS(value)                 (SUPC_SR_WKUPIS_Msk & ((value) << SUPC_SR_WKUPIS_Pos)) 

/* -------- SUPC_PWMR : (SUPC Offset: 0x1C) (R/W 32) Supply Controller Power Mode Register -------- */
#define SUPC_PWMR_LPOWERS_Pos                 _U_(0)                                               /**< (SUPC_PWMR) Low Power Value Selection Position */
#define SUPC_PWMR_LPOWERS_Msk                 (_U_(0x1) << SUPC_PWMR_LPOWERS_Pos)                  /**< (SUPC_PWMR) Low Power Value Selection Mask */
#define SUPC_PWMR_LPOWERS(value)              (SUPC_PWMR_LPOWERS_Msk & ((value) << SUPC_PWMR_LPOWERS_Pos))
#define   SUPC_PWMR_LPOWERS_FACTORY_Val       _U_(0x0)                                             /**< (SUPC_PWMR) The trimming value applied to the regulator when the device is in Wait mode. This value is factory-defined.  */
#define   SUPC_PWMR_LPOWERS_USER_Val          _U_(0x1)                                             /**< (SUPC_PWMR) The trimming value applied to the regulator is defined by the value programmed in the LPOWERx bits.  */
#define SUPC_PWMR_LPOWERS_FACTORY             (SUPC_PWMR_LPOWERS_FACTORY_Val << SUPC_PWMR_LPOWERS_Pos) /**< (SUPC_PWMR) The trimming value applied to the regulator when the device is in Wait mode. This value is factory-defined. Position  */
#define SUPC_PWMR_LPOWERS_USER                (SUPC_PWMR_LPOWERS_USER_Val << SUPC_PWMR_LPOWERS_Pos) /**< (SUPC_PWMR) The trimming value applied to the regulator is defined by the value programmed in the LPOWERx bits. Position  */
#define SUPC_PWMR_LPOWER0_Pos                 _U_(1)                                               /**< (SUPC_PWMR) Low Power Value Position */
#define SUPC_PWMR_LPOWER0_Msk                 (_U_(0x1) << SUPC_PWMR_LPOWER0_Pos)                  /**< (SUPC_PWMR) Low Power Value Mask */
#define SUPC_PWMR_LPOWER0(value)              (SUPC_PWMR_LPOWER0_Msk & ((value) << SUPC_PWMR_LPOWER0_Pos))
#define SUPC_PWMR_LPOWER1_Pos                 _U_(2)                                               /**< (SUPC_PWMR) Low Power Value Position */
#define SUPC_PWMR_LPOWER1_Msk                 (_U_(0x1) << SUPC_PWMR_LPOWER1_Pos)                  /**< (SUPC_PWMR) Low Power Value Mask */
#define SUPC_PWMR_LPOWER1(value)              (SUPC_PWMR_LPOWER1_Msk & ((value) << SUPC_PWMR_LPOWER1_Pos))
#define SUPC_PWMR_LPOWER2_Pos                 _U_(3)                                               /**< (SUPC_PWMR) Low Power Value Position */
#define SUPC_PWMR_LPOWER2_Msk                 (_U_(0x1) << SUPC_PWMR_LPOWER2_Pos)                  /**< (SUPC_PWMR) Low Power Value Mask */
#define SUPC_PWMR_LPOWER2(value)              (SUPC_PWMR_LPOWER2_Msk & ((value) << SUPC_PWMR_LPOWER2_Pos))
#define SUPC_PWMR_LPOWER3_Pos                 _U_(4)                                               /**< (SUPC_PWMR) Low Power Value Position */
#define SUPC_PWMR_LPOWER3_Msk                 (_U_(0x1) << SUPC_PWMR_LPOWER3_Pos)                  /**< (SUPC_PWMR) Low Power Value Mask */
#define SUPC_PWMR_LPOWER3(value)              (SUPC_PWMR_LPOWER3_Msk & ((value) << SUPC_PWMR_LPOWER3_Pos))
#define SUPC_PWMR_STUPTIME_Pos                _U_(7)                                               /**< (SUPC_PWMR) Start-up Time when Resuming from Wait Mode Position */
#define SUPC_PWMR_STUPTIME_Msk                (_U_(0x1) << SUPC_PWMR_STUPTIME_Pos)                 /**< (SUPC_PWMR) Start-up Time when Resuming from Wait Mode Mask */
#define SUPC_PWMR_STUPTIME(value)             (SUPC_PWMR_STUPTIME_Msk & ((value) << SUPC_PWMR_STUPTIME_Pos))
#define   SUPC_PWMR_STUPTIME_FAST_Val         _U_(0x0)                                             /**< (SUPC_PWMR) Fast start-up.  */
#define   SUPC_PWMR_STUPTIME_SLOW_Val         _U_(0x1)                                             /**< (SUPC_PWMR) Slow start-up.  */
#define SUPC_PWMR_STUPTIME_FAST               (SUPC_PWMR_STUPTIME_FAST_Val << SUPC_PWMR_STUPTIME_Pos) /**< (SUPC_PWMR) Fast start-up. Position  */
#define SUPC_PWMR_STUPTIME_SLOW               (SUPC_PWMR_STUPTIME_SLOW_Val << SUPC_PWMR_STUPTIME_Pos) /**< (SUPC_PWMR) Slow start-up. Position  */
#define SUPC_PWMR_ECPWRS_Pos                  _U_(8)                                               /**< (SUPC_PWMR) Enhanced Custom Power Value Selection Position */
#define SUPC_PWMR_ECPWRS_Msk                  (_U_(0x1) << SUPC_PWMR_ECPWRS_Pos)                   /**< (SUPC_PWMR) Enhanced Custom Power Value Selection Mask */
#define SUPC_PWMR_ECPWRS(value)               (SUPC_PWMR_ECPWRS_Msk & ((value) << SUPC_PWMR_ECPWRS_Pos))
#define   SUPC_PWMR_ECPWRS_FACTORY_Val        _U_(0x0)                                             /**< (SUPC_PWMR) The trimming value applied to the regulator when the device is in Active mode. This value is factory-defined.  */
#define   SUPC_PWMR_ECPWRS_USER_Val           _U_(0x1)                                             /**< (SUPC_PWMR) The trimming value applied to the regulator is defined by the value programmed in ECPWRx bits.  */
#define SUPC_PWMR_ECPWRS_FACTORY              (SUPC_PWMR_ECPWRS_FACTORY_Val << SUPC_PWMR_ECPWRS_Pos) /**< (SUPC_PWMR) The trimming value applied to the regulator when the device is in Active mode. This value is factory-defined. Position  */
#define SUPC_PWMR_ECPWRS_USER                 (SUPC_PWMR_ECPWRS_USER_Val << SUPC_PWMR_ECPWRS_Pos)  /**< (SUPC_PWMR) The trimming value applied to the regulator is defined by the value programmed in ECPWRx bits. Position  */
#define SUPC_PWMR_ECPWR0_Pos                  _U_(9)                                               /**< (SUPC_PWMR) Enhanced Custom Power Value Position */
#define SUPC_PWMR_ECPWR0_Msk                  (_U_(0x1) << SUPC_PWMR_ECPWR0_Pos)                   /**< (SUPC_PWMR) Enhanced Custom Power Value Mask */
#define SUPC_PWMR_ECPWR0(value)               (SUPC_PWMR_ECPWR0_Msk & ((value) << SUPC_PWMR_ECPWR0_Pos))
#define SUPC_PWMR_ECPWR1_Pos                  _U_(10)                                              /**< (SUPC_PWMR) Enhanced Custom Power Value Position */
#define SUPC_PWMR_ECPWR1_Msk                  (_U_(0x1) << SUPC_PWMR_ECPWR1_Pos)                   /**< (SUPC_PWMR) Enhanced Custom Power Value Mask */
#define SUPC_PWMR_ECPWR1(value)               (SUPC_PWMR_ECPWR1_Msk & ((value) << SUPC_PWMR_ECPWR1_Pos))
#define SUPC_PWMR_ECPWR2_Pos                  _U_(11)                                              /**< (SUPC_PWMR) Enhanced Custom Power Value Position */
#define SUPC_PWMR_ECPWR2_Msk                  (_U_(0x1) << SUPC_PWMR_ECPWR2_Pos)                   /**< (SUPC_PWMR) Enhanced Custom Power Value Mask */
#define SUPC_PWMR_ECPWR2(value)               (SUPC_PWMR_ECPWR2_Msk & ((value) << SUPC_PWMR_ECPWR2_Pos))
#define SUPC_PWMR_ECPWR3_Pos                  _U_(12)                                              /**< (SUPC_PWMR) Enhanced Custom Power Value Position */
#define SUPC_PWMR_ECPWR3_Msk                  (_U_(0x1) << SUPC_PWMR_ECPWR3_Pos)                   /**< (SUPC_PWMR) Enhanced Custom Power Value Mask */
#define SUPC_PWMR_ECPWR3(value)               (SUPC_PWMR_ECPWR3_Msk & ((value) << SUPC_PWMR_ECPWR3_Pos))
#define SUPC_PWMR_SRAM0ON_Pos                 _U_(16)                                              /**< (SUPC_PWMR) SRAM Power Control Position */
#define SUPC_PWMR_SRAM0ON_Msk                 (_U_(0x1) << SUPC_PWMR_SRAM0ON_Pos)                  /**< (SUPC_PWMR) SRAM Power Control Mask */
#define SUPC_PWMR_SRAM0ON(value)              (SUPC_PWMR_SRAM0ON_Msk & ((value) << SUPC_PWMR_SRAM0ON_Pos))
#define   SUPC_PWMR_SRAM0ON_OFF_Val           _U_(0x0)                                             /**< (SUPC_PWMR) SRAMx is not powered.  */
#define   SUPC_PWMR_SRAM0ON_ON_Val            _U_(0x1)                                             /**< (SUPC_PWMR) SRAMx is powered.  */
#define SUPC_PWMR_SRAM0ON_OFF                 (SUPC_PWMR_SRAM0ON_OFF_Val << SUPC_PWMR_SRAM0ON_Pos) /**< (SUPC_PWMR) SRAMx is not powered. Position  */
#define SUPC_PWMR_SRAM0ON_ON                  (SUPC_PWMR_SRAM0ON_ON_Val << SUPC_PWMR_SRAM0ON_Pos)  /**< (SUPC_PWMR) SRAMx is powered. Position  */
#define SUPC_PWMR_SRAM1ON_Pos                 _U_(17)                                              /**< (SUPC_PWMR) SRAM Power Control Position */
#define SUPC_PWMR_SRAM1ON_Msk                 (_U_(0x1) << SUPC_PWMR_SRAM1ON_Pos)                  /**< (SUPC_PWMR) SRAM Power Control Mask */
#define SUPC_PWMR_SRAM1ON(value)              (SUPC_PWMR_SRAM1ON_Msk & ((value) << SUPC_PWMR_SRAM1ON_Pos))
#define   SUPC_PWMR_SRAM1ON_OFF_Val           _U_(0x0)                                             /**< (SUPC_PWMR) SRAMx is not powered.  */
#define   SUPC_PWMR_SRAM1ON_ON_Val            _U_(0x1)                                             /**< (SUPC_PWMR) SRAMx is powered.  */
#define SUPC_PWMR_SRAM1ON_OFF                 (SUPC_PWMR_SRAM1ON_OFF_Val << SUPC_PWMR_SRAM1ON_Pos) /**< (SUPC_PWMR) SRAMx is not powered. Position  */
#define SUPC_PWMR_SRAM1ON_ON                  (SUPC_PWMR_SRAM1ON_ON_Val << SUPC_PWMR_SRAM1ON_Pos)  /**< (SUPC_PWMR) SRAMx is powered. Position  */
#define SUPC_PWMR_SRAM2ON_Pos                 _U_(18)                                              /**< (SUPC_PWMR) SRAM Power Control Position */
#define SUPC_PWMR_SRAM2ON_Msk                 (_U_(0x1) << SUPC_PWMR_SRAM2ON_Pos)                  /**< (SUPC_PWMR) SRAM Power Control Mask */
#define SUPC_PWMR_SRAM2ON(value)              (SUPC_PWMR_SRAM2ON_Msk & ((value) << SUPC_PWMR_SRAM2ON_Pos))
#define   SUPC_PWMR_SRAM2ON_OFF_Val           _U_(0x0)                                             /**< (SUPC_PWMR) SRAMx is not powered.  */
#define   SUPC_PWMR_SRAM2ON_ON_Val            _U_(0x1)                                             /**< (SUPC_PWMR) SRAMx is powered.  */
#define SUPC_PWMR_SRAM2ON_OFF                 (SUPC_PWMR_SRAM2ON_OFF_Val << SUPC_PWMR_SRAM2ON_Pos) /**< (SUPC_PWMR) SRAMx is not powered. Position  */
#define SUPC_PWMR_SRAM2ON_ON                  (SUPC_PWMR_SRAM2ON_ON_Val << SUPC_PWMR_SRAM2ON_Pos)  /**< (SUPC_PWMR) SRAMx is powered. Position  */
#define SUPC_PWMR_SRAM3ON_Pos                 _U_(19)                                              /**< (SUPC_PWMR) SRAM Power Control Position */
#define SUPC_PWMR_SRAM3ON_Msk                 (_U_(0x1) << SUPC_PWMR_SRAM3ON_Pos)                  /**< (SUPC_PWMR) SRAM Power Control Mask */
#define SUPC_PWMR_SRAM3ON(value)              (SUPC_PWMR_SRAM3ON_Msk & ((value) << SUPC_PWMR_SRAM3ON_Pos))
#define   SUPC_PWMR_SRAM3ON_OFF_Val           _U_(0x0)                                             /**< (SUPC_PWMR) SRAMx is not powered.  */
#define   SUPC_PWMR_SRAM3ON_ON_Val            _U_(0x1)                                             /**< (SUPC_PWMR) SRAMx is powered.  */
#define SUPC_PWMR_SRAM3ON_OFF                 (SUPC_PWMR_SRAM3ON_OFF_Val << SUPC_PWMR_SRAM3ON_Pos) /**< (SUPC_PWMR) SRAMx is not powered. Position  */
#define SUPC_PWMR_SRAM3ON_ON                  (SUPC_PWMR_SRAM3ON_ON_Val << SUPC_PWMR_SRAM3ON_Pos)  /**< (SUPC_PWMR) SRAMx is powered. Position  */
#define SUPC_PWMR_SRAM4ON_Pos                 _U_(20)                                              /**< (SUPC_PWMR) SRAM Power Control Position */
#define SUPC_PWMR_SRAM4ON_Msk                 (_U_(0x1) << SUPC_PWMR_SRAM4ON_Pos)                  /**< (SUPC_PWMR) SRAM Power Control Mask */
#define SUPC_PWMR_SRAM4ON(value)              (SUPC_PWMR_SRAM4ON_Msk & ((value) << SUPC_PWMR_SRAM4ON_Pos))
#define   SUPC_PWMR_SRAM4ON_OFF_Val           _U_(0x0)                                             /**< (SUPC_PWMR) SRAMx is not powered.  */
#define   SUPC_PWMR_SRAM4ON_ON_Val            _U_(0x1)                                             /**< (SUPC_PWMR) SRAMx is powered.  */
#define SUPC_PWMR_SRAM4ON_OFF                 (SUPC_PWMR_SRAM4ON_OFF_Val << SUPC_PWMR_SRAM4ON_Pos) /**< (SUPC_PWMR) SRAMx is not powered. Position  */
#define SUPC_PWMR_SRAM4ON_ON                  (SUPC_PWMR_SRAM4ON_ON_Val << SUPC_PWMR_SRAM4ON_Pos)  /**< (SUPC_PWMR) SRAMx is powered. Position  */
#define SUPC_PWMR_SRAM5ON_Pos                 _U_(21)                                              /**< (SUPC_PWMR) SRAM Power Control Position */
#define SUPC_PWMR_SRAM5ON_Msk                 (_U_(0x1) << SUPC_PWMR_SRAM5ON_Pos)                  /**< (SUPC_PWMR) SRAM Power Control Mask */
#define SUPC_PWMR_SRAM5ON(value)              (SUPC_PWMR_SRAM5ON_Msk & ((value) << SUPC_PWMR_SRAM5ON_Pos))
#define   SUPC_PWMR_SRAM5ON_OFF_Val           _U_(0x0)                                             /**< (SUPC_PWMR) SRAMx is not powered.  */
#define   SUPC_PWMR_SRAM5ON_ON_Val            _U_(0x1)                                             /**< (SUPC_PWMR) SRAMx is powered.  */
#define SUPC_PWMR_SRAM5ON_OFF                 (SUPC_PWMR_SRAM5ON_OFF_Val << SUPC_PWMR_SRAM5ON_Pos) /**< (SUPC_PWMR) SRAMx is not powered. Position  */
#define SUPC_PWMR_SRAM5ON_ON                  (SUPC_PWMR_SRAM5ON_ON_Val << SUPC_PWMR_SRAM5ON_Pos)  /**< (SUPC_PWMR) SRAMx is powered. Position  */
#define SUPC_PWMR_SRAM6ON_Pos                 _U_(22)                                              /**< (SUPC_PWMR) SRAM Power Control Position */
#define SUPC_PWMR_SRAM6ON_Msk                 (_U_(0x1) << SUPC_PWMR_SRAM6ON_Pos)                  /**< (SUPC_PWMR) SRAM Power Control Mask */
#define SUPC_PWMR_SRAM6ON(value)              (SUPC_PWMR_SRAM6ON_Msk & ((value) << SUPC_PWMR_SRAM6ON_Pos))
#define   SUPC_PWMR_SRAM6ON_OFF_Val           _U_(0x0)                                             /**< (SUPC_PWMR) SRAMx is not powered.  */
#define   SUPC_PWMR_SRAM6ON_ON_Val            _U_(0x1)                                             /**< (SUPC_PWMR) SRAMx is powered.  */
#define SUPC_PWMR_SRAM6ON_OFF                 (SUPC_PWMR_SRAM6ON_OFF_Val << SUPC_PWMR_SRAM6ON_Pos) /**< (SUPC_PWMR) SRAMx is not powered. Position  */
#define SUPC_PWMR_SRAM6ON_ON                  (SUPC_PWMR_SRAM6ON_ON_Val << SUPC_PWMR_SRAM6ON_Pos)  /**< (SUPC_PWMR) SRAMx is powered. Position  */
#define SUPC_PWMR_DPRAMON_Pos                 _U_(23)                                              /**< (SUPC_PWMR) Dual-port RAM Power Control Position */
#define SUPC_PWMR_DPRAMON_Msk                 (_U_(0x1) << SUPC_PWMR_DPRAMON_Pos)                  /**< (SUPC_PWMR) Dual-port RAM Power Control Mask */
#define SUPC_PWMR_DPRAMON(value)              (SUPC_PWMR_DPRAMON_Msk & ((value) << SUPC_PWMR_DPRAMON_Pos))
#define   SUPC_PWMR_DPRAMON_OFF_Val           _U_(0x0)                                             /**< (SUPC_PWMR) USB dual-port RAM is not powered.  */
#define   SUPC_PWMR_DPRAMON_ON_Val            _U_(0x1)                                             /**< (SUPC_PWMR) USB dual-port RAM is powered.  */
#define SUPC_PWMR_DPRAMON_OFF                 (SUPC_PWMR_DPRAMON_OFF_Val << SUPC_PWMR_DPRAMON_Pos) /**< (SUPC_PWMR) USB dual-port RAM is not powered. Position  */
#define SUPC_PWMR_DPRAMON_ON                  (SUPC_PWMR_DPRAMON_ON_Val << SUPC_PWMR_DPRAMON_Pos)  /**< (SUPC_PWMR) USB dual-port RAM is powered. Position  */
#define SUPC_PWMR_KEY_Pos                     _U_(24)                                              /**< (SUPC_PWMR) Password Key Position */
#define SUPC_PWMR_KEY_Msk                     (_U_(0xFF) << SUPC_PWMR_KEY_Pos)                     /**< (SUPC_PWMR) Password Key Mask */
#define SUPC_PWMR_KEY(value)                  (SUPC_PWMR_KEY_Msk & ((value) << SUPC_PWMR_KEY_Pos))
#define   SUPC_PWMR_KEY_PASSWD_Val            _U_(0x5A)                                            /**< (SUPC_PWMR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define SUPC_PWMR_KEY_PASSWD                  (SUPC_PWMR_KEY_PASSWD_Val << SUPC_PWMR_KEY_Pos)      /**< (SUPC_PWMR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define SUPC_PWMR_Msk                         _U_(0xFFFF1F9F)                                      /**< (SUPC_PWMR) Register Mask  */

#define SUPC_PWMR_LPOWER_Pos                  _U_(1)                                               /**< (SUPC_PWMR Position) Low Power Value */
#define SUPC_PWMR_LPOWER_Msk                  (_U_(0xF) << SUPC_PWMR_LPOWER_Pos)                   /**< (SUPC_PWMR Mask) LPOWER */
#define SUPC_PWMR_LPOWER(value)               (SUPC_PWMR_LPOWER_Msk & ((value) << SUPC_PWMR_LPOWER_Pos)) 
#define SUPC_PWMR_ECPWR_Pos                   _U_(9)                                               /**< (SUPC_PWMR Position) Enhanced Custom Power Value */
#define SUPC_PWMR_ECPWR_Msk                   (_U_(0xF) << SUPC_PWMR_ECPWR_Pos)                    /**< (SUPC_PWMR Mask) ECPWR */
#define SUPC_PWMR_ECPWR(value)                (SUPC_PWMR_ECPWR_Msk & ((value) << SUPC_PWMR_ECPWR_Pos)) 

/** \brief SUPC register offsets definitions */
#define SUPC_CR_REG_OFST               (0x00)              /**< (SUPC_CR) Supply Controller Control Register Offset */
#define SUPC_SMMR_REG_OFST             (0x04)              /**< (SUPC_SMMR) Supply Controller Supply Monitor Mode Register Offset */
#define SUPC_MR_REG_OFST               (0x08)              /**< (SUPC_MR) Supply Controller Mode Register Offset */
#define SUPC_WUMR_REG_OFST             (0x0C)              /**< (SUPC_WUMR) Supply Controller Wake-up Mode Register Offset */
#define SUPC_WUIR_REG_OFST             (0x10)              /**< (SUPC_WUIR) Supply Controller Wake-up Inputs Register Offset */
#define SUPC_SR_REG_OFST               (0x14)              /**< (SUPC_SR) Supply Controller Status Register Offset */
#define SUPC_PWMR_REG_OFST             (0x1C)              /**< (SUPC_PWMR) Supply Controller Power Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SUPC register API structure */
typedef struct
{
  __O   uint32_t                       SUPC_CR;            /**< Offset: 0x00 ( /W  32) Supply Controller Control Register */
  __IO  uint32_t                       SUPC_SMMR;          /**< Offset: 0x04 (R/W  32) Supply Controller Supply Monitor Mode Register */
  __IO  uint32_t                       SUPC_MR;            /**< Offset: 0x08 (R/W  32) Supply Controller Mode Register */
  __IO  uint32_t                       SUPC_WUMR;          /**< Offset: 0x0C (R/W  32) Supply Controller Wake-up Mode Register */
  __IO  uint32_t                       SUPC_WUIR;          /**< Offset: 0x10 (R/W  32) Supply Controller Wake-up Inputs Register */
  __I   uint32_t                       SUPC_SR;            /**< Offset: 0x14 (R/   32) Supply Controller Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       SUPC_PWMR;          /**< Offset: 0x1C (R/W  32) Supply Controller Power Mode Register */
} supc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_SUPC_COMPONENT_H_ */
