/**
 * \brief Instance header file for ATSAME54P20A
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

/* file generated from device description version 2021-04-16T09:25:23Z */
#ifndef _SAME54_OSCCTRL_INSTANCE_
#define _SAME54_OSCCTRL_INSTANCE_


/* ========== Instance Parameter definitions for OSCCTRL peripheral ========== */
#define OSCCTRL_DFLLS_NUM                        _UL_(1)    /* Number of DFLLs */
#define OSCCTRL_DFLL_IMPLEMENTED                 _UL_(1)    /* DFLL implemented */
#define OSCCTRL_DFLL48M_BIASTESTPT_IMPLEMENTED   _UL_(0)    /* DFLL48M bias test mode implemented */
#define OSCCTRL_DFLL48M_CDACSTEPSIZE_SIZE        _UL_(2)    /* Size COARSE DAC STEP */
#define OSCCTRL_DFLL48M_COARSE_RESET_VALUE       _UL_(32)   /* DFLL48M Frequency Coarse Reset Value (Before Calibration) */
#define OSCCTRL_DFLL48M_COARSE_SIZE              _UL_(6)    /* Size COARSE CALIBRATION */
#define OSCCTRL_DFLL48M_ENABLE_RESET_VALUE       _UL_(1)    /* Run oscillator at reset */
#define OSCCTRL_DFLL48M_FDACSTEPSIZE_SIZE        _UL_(2)    /* Size FINE DAC STEP */
#define OSCCTRL_DFLL48M_FINE_RESET_VALUE         _UL_(128)  /* DFLL48M Frequency Fine Reset Value (Before Calibration) */
#define OSCCTRL_DFLL48M_FINE_SIZE                _UL_(8)    /* Size FINE CALIBRATION */
#define OSCCTRL_DFLL48M_ONDEMAND_RESET_VALUE     _UL_(1)    /* Run oscillator always or only when requested */
#define OSCCTRL_DFLL48M_RUNSTDBY_RESET_VALUE     _UL_(0)    /* Run oscillator even if standby mode */
#define OSCCTRL_DFLL48M_TCAL_SIZE                _UL_(4)    /* Size TEMP CALIBRATION */
#define OSCCTRL_DFLL48M_TCBIAS_SIZE              _UL_(2)    /* Size TC BIAS CALIBRATION */
#define OSCCTRL_DFLL48M_TESTPTSEL_SIZE           _UL_(3)    /* Size TEST POINT SELECTOR */
#define OSCCTRL_DFLL48M_WAITLOCK_ACTIVE          _UL_(1)    /* Enable Wait Lock Feature */
#define OSCCTRL_DPLLS_NUM                        _UL_(2)    /* Number of DPLLs */
#define OSCCTRL_DPLL0_IMPLEMENTED                _UL_(1)    /* DPLL0 implemented */
#define OSCCTRL_DPLL0_I12ND_I12NDFRAC_PAD_CONTROL _UL_(0)    /* NOT_IMPLEMENTED: The ND and NDFRAC pad tests are not used, use registers instead */
#define OSCCTRL_DPLL0_OCC_IMPLEMENTED            _UL_(1)    /* DPLL0 OCC Implemented */
#define OSCCTRL_DPLL1_IMPLEMENTED                _UL_(1)    /* DPLL1 implemented */
#define OSCCTRL_DPLL1_I12ND_I12NDFRAC_PAD_CONTROL _UL_(0)    /* NOT_IMPLEMENTED: The ND and NDFRAC pad tests are not used, use registers instead */
#define OSCCTRL_DPLL1_OCC_IMPLEMENTED            _UL_(0)    /* DPLL1 OCC Implemented */
#define OSCCTRL_GCLK_ID_DFLL48                   _UL_(0)    /* Index of Generic Clock for DFLL48 */
#define OSCCTRL_GCLK_ID_FDPLL0                   _UL_(1)    /* Index of Generic Clock for DPLL0 */
#define OSCCTRL_GCLK_ID_FDPLL1                   _UL_(2)    /* Index of Generic Clock for DPLL1 */
#define OSCCTRL_GCLK_ID_FDPLL032K                _UL_(3)    /* Index of Generic Clock for DPLL0 32K */
#define OSCCTRL_GCLK_ID_FDPLL132K                _UL_(3)    /* Index of Generic Clock for DPLL1 32K */
#define OSCCTRL_OSC16M_IMPLEMENTED               _UL_(0)    /* OSC16M implemented */
#define OSCCTRL_OSC48M_IMPLEMENTED               _UL_(0)    /* OSC48M implemented */
#define OSCCTRL_OSC48M_NUM                       _UL_(1)    
#define OSCCTRL_RCOSCS_NUM                       _UL_(1)    /* Number of RCOSCs (min 1) */
#define OSCCTRL_XOSCS_NUM                        _UL_(2)    /* Number of XOSCs */
#define OSCCTRL_XOSC0_CFD_CLK_SELECT_SIZE        _UL_(4)    /* Clock fail prescaler size */
#define OSCCTRL_XOSC0_CFD_IMPLEMENTED            _UL_(1)    /* Clock fail detected for xosc implemented */
#define OSCCTRL_XOSC0_IMPLEMENTED                _UL_(1)    /* XOSC0 implemented */
#define OSCCTRL_XOSC0_ONDEMAND_RESET_VALUE       _UL_(1)    /* Run oscillator always or only when requested */
#define OSCCTRL_XOSC0_RUNSTDBY_RESET_VALUE       _UL_(0)    /* Run oscillator even if standby mode */
#define OSCCTRL_XOSC1_CFD_CLK_SELECT_SIZE        _UL_(4)    /* Clock fail prescaler size */
#define OSCCTRL_XOSC1_CFD_IMPLEMENTED            _UL_(1)    /* Clock fail detected for xosc implemented */
#define OSCCTRL_XOSC1_IMPLEMENTED                _UL_(1)    /* XOSC1 implemented */
#define OSCCTRL_XOSC1_ONDEMAND_RESET_VALUE       _UL_(1)    /* Run oscillator always or only when requested */
#define OSCCTRL_XOSC1_RUNSTDBY_RESET_VALUE       _UL_(0)    /* Run oscillator even if standby mode */
#define OSCCTRL_DFLL48M_VERSION                  _UL_(0x100) 
#define OSCCTRL_FDPLL_VERSION                    _UL_(0x100) 
#define OSCCTRL_XOSC_VERSION                     _UL_(0x100) 
#define OSCCTRL_INSTANCE_ID                      _UL_(4)    /* Instance index for OSCCTRL */

#endif /* _SAME54_OSCCTRL_INSTANCE_ */
