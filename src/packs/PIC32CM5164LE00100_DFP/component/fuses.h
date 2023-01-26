/*
 * Component description for FUSES
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
#ifndef _PIC32CMLE00_FUSES_COMPONENT_H_
#define _PIC32CMLE00_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_SW_CALIB_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) SW_CALIB Page Word 0 -------- */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Pos _UINT32_(0)                                          /* (FUSES_SW_CALIB_WORD_0) ADC Bias Reference Buffer Scaling Position */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Msk (_UINT32_(0x7) << FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Pos) /* (FUSES_SW_CALIB_WORD_0) ADC Bias Reference Buffer Scaling Mask */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF(value) (FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Pos)) /* Assigment of value for ADC_BIASREFBUF in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Pos _UINT32_(3)                                          /* (FUSES_SW_CALIB_WORD_0) ADC Comparator Scaling Position */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Msk (_UINT32_(0x7) << FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Pos) /* (FUSES_SW_CALIB_WORD_0) ADC Comparator Scaling Mask */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP(value) (FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Pos)) /* Assigment of value for ADC_BIASCOMP in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Pos _UINT32_(6)                                          /* (FUSES_SW_CALIB_WORD_0) DFLLULP DIV at PL0 Position */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Msk (_UINT32_(0x7) << FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Pos) /* (FUSES_SW_CALIB_WORD_0) DFLLULP DIV at PL0 Mask */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0(value) (FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Pos)) /* Assigment of value for DFLLULP_DIV_PL0 in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Pos _UINT32_(9)                                          /* (FUSES_SW_CALIB_WORD_0) DFLLULP DIV at PL2 Position */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Msk (_UINT32_(0x7) << FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Pos) /* (FUSES_SW_CALIB_WORD_0) DFLLULP DIV at PL2 Mask */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2(value) (FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Pos)) /* Assigment of value for DFLLULP_DIV_PL2 in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_USB_TRANSN_Pos  _UINT32_(12)                                         /* (FUSES_SW_CALIB_WORD_0) USB pad Transn calibration Position */
#define FUSES_SW_CALIB_WORD_0_USB_TRANSN_Msk  (_UINT32_(0x1F) << FUSES_SW_CALIB_WORD_0_USB_TRANSN_Pos) /* (FUSES_SW_CALIB_WORD_0) USB pad Transn calibration Mask */
#define FUSES_SW_CALIB_WORD_0_USB_TRANSN(value) (FUSES_SW_CALIB_WORD_0_USB_TRANSN_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_USB_TRANSN_Pos)) /* Assigment of value for USB_TRANSN in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_USB_TRANSP_Pos  _UINT32_(17)                                         /* (FUSES_SW_CALIB_WORD_0) USB pad Transp calibration Position */
#define FUSES_SW_CALIB_WORD_0_USB_TRANSP_Msk  (_UINT32_(0x1F) << FUSES_SW_CALIB_WORD_0_USB_TRANSP_Pos) /* (FUSES_SW_CALIB_WORD_0) USB pad Transp calibration Mask */
#define FUSES_SW_CALIB_WORD_0_USB_TRANSP(value) (FUSES_SW_CALIB_WORD_0_USB_TRANSP_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_USB_TRANSP_Pos)) /* Assigment of value for USB_TRANSP in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_USB_TRIM_Pos    _UINT32_(22)                                         /* (FUSES_SW_CALIB_WORD_0) USB pad Trim calibration Position */
#define FUSES_SW_CALIB_WORD_0_USB_TRIM_Msk    (_UINT32_(0x7) << FUSES_SW_CALIB_WORD_0_USB_TRIM_Pos) /* (FUSES_SW_CALIB_WORD_0) USB pad Trim calibration Mask */
#define FUSES_SW_CALIB_WORD_0_USB_TRIM(value) (FUSES_SW_CALIB_WORD_0_USB_TRIM_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_USB_TRIM_Pos)) /* Assigment of value for USB_TRIM in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_DFLL48M_COARSE_CAL_Pos _UINT32_(25)                                         /* (FUSES_SW_CALIB_WORD_0) DFLL48M Coarse Calibration Position */
#define FUSES_SW_CALIB_WORD_0_DFLL48M_COARSE_CAL_Msk (_UINT32_(0x3F) << FUSES_SW_CALIB_WORD_0_DFLL48M_COARSE_CAL_Pos) /* (FUSES_SW_CALIB_WORD_0) DFLL48M Coarse Calibration Mask */
#define FUSES_SW_CALIB_WORD_0_DFLL48M_COARSE_CAL(value) (FUSES_SW_CALIB_WORD_0_DFLL48M_COARSE_CAL_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_DFLL48M_COARSE_CAL_Pos)) /* Assigment of value for DFLL48M_COARSE_CAL in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_Msk             _UINT32_(0x7FFFFFFF)                                 /* (FUSES_SW_CALIB_WORD_0) Register Mask  */


/* -------- FUSES_BOCOR_WORD_1 : (FUSES Offset: 0x04) (R/W 32) BOCOR Page Word 1 -------- */
#define FUSES_BOCOR_WORD_1_RESETVALUE         _UINT32_(0xFFE80000)                                 /*  (FUSES_BOCOR_WORD_1) BOCOR Page Word 1  Reset Value */

#define FUSES_BOCOR_WORD_1_BOOTROM_BOOTPROT_Pos _UINT32_(8)                                          /* (FUSES_BOCOR_WORD_1) Boot Protection Position */
#define FUSES_BOCOR_WORD_1_BOOTROM_BOOTPROT_Msk (_UINT32_(0x7FF) << FUSES_BOCOR_WORD_1_BOOTROM_BOOTPROT_Pos) /* (FUSES_BOCOR_WORD_1) Boot Protection Mask */
#define FUSES_BOCOR_WORD_1_BOOTROM_BOOTPROT(value) (FUSES_BOCOR_WORD_1_BOOTROM_BOOTPROT_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_1_BOOTROM_BOOTPROT_Pos)) /* Assigment of value for BOOTROM_BOOTPROT in the FUSES_BOCOR_WORD_1 register */
#define FUSES_BOCOR_WORD_1_Msk                _UINT32_(0x0007FF00)                                 /* (FUSES_BOCOR_WORD_1) Register Mask  */


/* -------- FUSES_BOCOR_WORD_16 : (FUSES Offset: 0x40) (R/W 32) BOCOR Page Word 16 -------- */
#define FUSES_BOCOR_WORD_16_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_16) BOCOR Page Word 16  Reset Value */

#define FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_16) Crc Key bits 31:0 Position */
#define FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Pos) /* (FUSES_BOCOR_WORD_16) Crc Key bits 31:0 Mask */
#define FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0(value) (FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Pos)) /* Assigment of value for BOOTROM_CRCKEY_0 in the FUSES_BOCOR_WORD_16 register */
#define FUSES_BOCOR_WORD_16_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_16) Register Mask  */


/* -------- FUSES_BOCOR_WORD_17 : (FUSES Offset: 0x44) (R/W 32) BOCOR Page Word 17 -------- */
#define FUSES_BOCOR_WORD_17_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_17) BOCOR Page Word 17  Reset Value */

#define FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_17) Crc Key bits 63:32 Position */
#define FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Pos) /* (FUSES_BOCOR_WORD_17) Crc Key bits 63:32 Mask */
#define FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1(value) (FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Pos)) /* Assigment of value for BOOTROM_CRCKEY_1 in the FUSES_BOCOR_WORD_17 register */
#define FUSES_BOCOR_WORD_17_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_17) Register Mask  */


/* -------- FUSES_BOCOR_WORD_18 : (FUSES Offset: 0x48) (R/W 32) BOCOR Page Word 18 -------- */
#define FUSES_BOCOR_WORD_18_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_18) BOCOR Page Word 18  Reset Value */

#define FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_18) Crc Key bits 95:64 Position */
#define FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Pos) /* (FUSES_BOCOR_WORD_18) Crc Key bits 95:64 Mask */
#define FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2(value) (FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Pos)) /* Assigment of value for BOOTROM_CRCKEY_2 in the FUSES_BOCOR_WORD_18 register */
#define FUSES_BOCOR_WORD_18_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_18) Register Mask  */


/* -------- FUSES_BOCOR_WORD_19 : (FUSES Offset: 0x4C) (R/W 32) BOCOR Page Word 19 -------- */
#define FUSES_BOCOR_WORD_19_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_19) BOCOR Page Word 19  Reset Value */

#define FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_19) Crc Key bits 127:96 Position */
#define FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Pos) /* (FUSES_BOCOR_WORD_19) Crc Key bits 127:96 Mask */
#define FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3(value) (FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Pos)) /* Assigment of value for BOOTROM_CRCKEY_3 in the FUSES_BOCOR_WORD_19 register */
#define FUSES_BOCOR_WORD_19_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_19) Register Mask  */


/* -------- FUSES_OTP1_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) OTP1 Page Word 0 -------- */
#define FUSES_OTP1_WORD_0_BOOTROM_SECEN_Pos   _UINT32_(10)                                         /* (FUSES_OTP1_WORD_0) Security Enable Fuse Position */
#define FUSES_OTP1_WORD_0_BOOTROM_SECEN_Msk   (_UINT32_(0x1) << FUSES_OTP1_WORD_0_BOOTROM_SECEN_Pos) /* (FUSES_OTP1_WORD_0) Security Enable Fuse Mask */
#define FUSES_OTP1_WORD_0_BOOTROM_SECEN(value) (FUSES_OTP1_WORD_0_BOOTROM_SECEN_Msk & (_UINT32_(value) << FUSES_OTP1_WORD_0_BOOTROM_SECEN_Pos)) /* Assigment of value for BOOTROM_SECEN in the FUSES_OTP1_WORD_0 register */
#define FUSES_OTP1_WORD_0_Msk                 _UINT32_(0x00000400)                                 /* (FUSES_OTP1_WORD_0) Register Mask  */


/* -------- FUSES_OTP1_WORD_1 : (FUSES Offset: 0x04) ( R/ 32) OTP1 Page Word 1 -------- */
#define FUSES_OTP1_WORD_1_BOOTROM_NVMCRC_Pos  _UINT32_(0)                                          /* (FUSES_OTP1_WORD_1) CRC for NVM DWORD Position */
#define FUSES_OTP1_WORD_1_BOOTROM_NVMCRC_Msk  (_UINT32_(0xFFFFFFFF) << FUSES_OTP1_WORD_1_BOOTROM_NVMCRC_Pos) /* (FUSES_OTP1_WORD_1) CRC for NVM DWORD Mask */
#define FUSES_OTP1_WORD_1_BOOTROM_NVMCRC(value) (FUSES_OTP1_WORD_1_BOOTROM_NVMCRC_Msk & (_UINT32_(value) << FUSES_OTP1_WORD_1_BOOTROM_NVMCRC_Pos)) /* Assigment of value for BOOTROM_NVMCRC in the FUSES_OTP1_WORD_1 register */
#define FUSES_OTP1_WORD_1_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (FUSES_OTP1_WORD_1) Register Mask  */


/* -------- FUSES_OTP2_WORD_1 : (FUSES Offset: 0x04) ( R/ 32) OTP2 Page Word 1 -------- */
#define FUSES_OTP2_WORD_1_PM_NVM3VSWDIS_Pos   _UINT32_(15)                                         /* (FUSES_OTP2_WORD_1) 3V NVM switch disable Position */
#define FUSES_OTP2_WORD_1_PM_NVM3VSWDIS_Msk   (_UINT32_(0x1) << FUSES_OTP2_WORD_1_PM_NVM3VSWDIS_Pos) /* (FUSES_OTP2_WORD_1) 3V NVM switch disable Mask */
#define FUSES_OTP2_WORD_1_PM_NVM3VSWDIS(value) (FUSES_OTP2_WORD_1_PM_NVM3VSWDIS_Msk & (_UINT32_(value) << FUSES_OTP2_WORD_1_PM_NVM3VSWDIS_Pos)) /* Assigment of value for PM_NVM3VSWDIS in the FUSES_OTP2_WORD_1 register */
#define FUSES_OTP2_WORD_1_Msk                 _UINT32_(0x00008000)                                 /* (FUSES_OTP2_WORD_1) Register Mask  */


/* -------- FUSES_USER_WORD_0 : (FUSES Offset: 0x00) (R/W 32) USER Page Word 0 -------- */
#define FUSES_USER_WORD_0_RESETVALUE          _UINT32_(0xB08F4377)                                 /*  (FUSES_USER_WORD_0) USER Page Word 0  Reset Value */

#define FUSES_USER_WORD_0_NVMCTRL_SULCK_Pos   _UINT32_(0)                                          /* (FUSES_USER_WORD_0) NVM Secure Region Locks Position */
#define FUSES_USER_WORD_0_NVMCTRL_SULCK_Msk   (_UINT32_(0x7) << FUSES_USER_WORD_0_NVMCTRL_SULCK_Pos) /* (FUSES_USER_WORD_0) NVM Secure Region Locks Mask */
#define FUSES_USER_WORD_0_NVMCTRL_SULCK(value) (FUSES_USER_WORD_0_NVMCTRL_SULCK_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_NVMCTRL_SULCK_Pos)) /* Assigment of value for NVMCTRL_SULCK in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_NVMCTRL_NSULCK_Pos  _UINT32_(3)                                          /* (FUSES_USER_WORD_0) NVM Non-Secure Region Locks Position */
#define FUSES_USER_WORD_0_NVMCTRL_NSULCK_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_0_NVMCTRL_NSULCK_Pos) /* (FUSES_USER_WORD_0) NVM Non-Secure Region Locks Mask */
#define FUSES_USER_WORD_0_NVMCTRL_NSULCK(value) (FUSES_USER_WORD_0_NVMCTRL_NSULCK_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_NVMCTRL_NSULCK_Pos)) /* Assigment of value for NVMCTRL_NSULCK in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_BOD33USERLEVEL_Pos  _UINT32_(7)                                          /* (FUSES_USER_WORD_0) BOD33 User Level Position */
#define FUSES_USER_WORD_0_BOD33USERLEVEL_Msk  (_UINT32_(0x3F) << FUSES_USER_WORD_0_BOD33USERLEVEL_Pos) /* (FUSES_USER_WORD_0) BOD33 User Level Mask */
#define FUSES_USER_WORD_0_BOD33USERLEVEL(value) (FUSES_USER_WORD_0_BOD33USERLEVEL_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_BOD33USERLEVEL_Pos)) /* Assigment of value for BOD33USERLEVEL in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_BOD33_DIS_Pos       _UINT32_(13)                                         /* (FUSES_USER_WORD_0) BOD33 Disable Position */
#define FUSES_USER_WORD_0_BOD33_DIS_Msk       (_UINT32_(0x1) << FUSES_USER_WORD_0_BOD33_DIS_Pos)   /* (FUSES_USER_WORD_0) BOD33 Disable Mask */
#define FUSES_USER_WORD_0_BOD33_DIS(value)    (FUSES_USER_WORD_0_BOD33_DIS_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_BOD33_DIS_Pos)) /* Assigment of value for BOD33_DIS in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_BOD33_ACTION_Pos    _UINT32_(14)                                         /* (FUSES_USER_WORD_0) BOD33 Action Position */
#define FUSES_USER_WORD_0_BOD33_ACTION_Msk    (_UINT32_(0x3) << FUSES_USER_WORD_0_BOD33_ACTION_Pos) /* (FUSES_USER_WORD_0) BOD33 Action Mask */
#define FUSES_USER_WORD_0_BOD33_ACTION(value) (FUSES_USER_WORD_0_BOD33_ACTION_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_BOD33_ACTION_Pos)) /* Assigment of value for BOD33_ACTION in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_WDT_RUNSTDBY_Pos    _UINT32_(25)                                         /* (FUSES_USER_WORD_0) WDT Run During Standby Position */
#define FUSES_USER_WORD_0_WDT_RUNSTDBY_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_0_WDT_RUNSTDBY_Pos) /* (FUSES_USER_WORD_0) WDT Run During Standby Mask */
#define FUSES_USER_WORD_0_WDT_RUNSTDBY(value) (FUSES_USER_WORD_0_WDT_RUNSTDBY_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_WDT_RUNSTDBY_Pos)) /* Assigment of value for WDT_RUNSTDBY in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_WDT_ENABLE_Pos      _UINT32_(26)                                         /* (FUSES_USER_WORD_0) WDT Enable Position */
#define FUSES_USER_WORD_0_WDT_ENABLE_Msk      (_UINT32_(0x1) << FUSES_USER_WORD_0_WDT_ENABLE_Pos)  /* (FUSES_USER_WORD_0) WDT Enable Mask */
#define FUSES_USER_WORD_0_WDT_ENABLE(value)   (FUSES_USER_WORD_0_WDT_ENABLE_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_WDT_ENABLE_Pos)) /* Assigment of value for WDT_ENABLE in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_WDT_ALWAYSON_Pos    _UINT32_(27)                                         /* (FUSES_USER_WORD_0) WDT Always On Position */
#define FUSES_USER_WORD_0_WDT_ALWAYSON_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_0_WDT_ALWAYSON_Pos) /* (FUSES_USER_WORD_0) WDT Always On Mask */
#define FUSES_USER_WORD_0_WDT_ALWAYSON(value) (FUSES_USER_WORD_0_WDT_ALWAYSON_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_WDT_ALWAYSON_Pos)) /* Assigment of value for WDT_ALWAYSON in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_WDT_PER_Pos         _UINT32_(28)                                         /* (FUSES_USER_WORD_0) WDT Period Position */
#define FUSES_USER_WORD_0_WDT_PER_Msk         (_UINT32_(0xF) << FUSES_USER_WORD_0_WDT_PER_Pos)     /* (FUSES_USER_WORD_0) WDT Period Mask */
#define FUSES_USER_WORD_0_WDT_PER(value)      (FUSES_USER_WORD_0_WDT_PER_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_WDT_PER_Pos)) /* Assigment of value for WDT_PER in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_Msk                 _UINT32_(0xFE00FFBF)                                 /* (FUSES_USER_WORD_0) Register Mask  */


/* -------- FUSES_USER_WORD_1 : (FUSES Offset: 0x04) (R/W 32) USER Page Word 1 -------- */
#define FUSES_USER_WORD_1_RESETVALUE          _UINT32_(0xFFFFF0BB)                                 /*  (FUSES_USER_WORD_1) USER Page Word 1  Reset Value */

#define FUSES_USER_WORD_1_WDT_WINDOW_Pos      _UINT32_(0)                                          /* (FUSES_USER_WORD_1) WDT Window Position */
#define FUSES_USER_WORD_1_WDT_WINDOW_Msk      (_UINT32_(0xF) << FUSES_USER_WORD_1_WDT_WINDOW_Pos)  /* (FUSES_USER_WORD_1) WDT Window Mask */
#define FUSES_USER_WORD_1_WDT_WINDOW(value)   (FUSES_USER_WORD_1_WDT_WINDOW_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_WDT_WINDOW_Pos)) /* Assigment of value for WDT_WINDOW in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_Pos    _UINT32_(4)                                          /* (FUSES_USER_WORD_1) WDT Early Warning Offset Position */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_Msk    (_UINT32_(0xF) << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) WDT Early Warning Offset Mask */
#define FUSES_USER_WORD_1_WDT_EWOFFSET(value) (FUSES_USER_WORD_1_WDT_EWOFFSET_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos)) /* Assigment of value for WDT_EWOFFSET in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_WDT_WEN_Pos         _UINT32_(8)                                          /* (FUSES_USER_WORD_1) WDT Window Mode Enable Position */
#define FUSES_USER_WORD_1_WDT_WEN_Msk         (_UINT32_(0x1) << FUSES_USER_WORD_1_WDT_WEN_Pos)     /* (FUSES_USER_WORD_1) WDT Window Mode Enable Mask */
#define FUSES_USER_WORD_1_WDT_WEN(value)      (FUSES_USER_WORD_1_WDT_WEN_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_WDT_WEN_Pos)) /* Assigment of value for WDT_WEN in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_BOD33_HYST_Pos      _UINT32_(9)                                          /* (FUSES_USER_WORD_1) BOD33 Hysteresis Position */
#define FUSES_USER_WORD_1_BOD33_HYST_Msk      (_UINT32_(0x1) << FUSES_USER_WORD_1_BOD33_HYST_Pos)  /* (FUSES_USER_WORD_1) BOD33 Hysteresis Mask */
#define FUSES_USER_WORD_1_BOD33_HYST(value)   (FUSES_USER_WORD_1_BOD33_HYST_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_BOD33_HYST_Pos)) /* Assigment of value for BOD33_HYST in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_Msk                 _UINT32_(0x000003FF)                                 /* (FUSES_USER_WORD_1) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_SW_CALIB_WORD_0_REG_OFST _UINT32_(0x00)      /* (FUSES_SW_CALIB_WORD_0) SW_CALIB Page Word 0 Offset */
#define FUSES_BOCOR_WORD_1_REG_OFST    _UINT32_(0x04)      /* (FUSES_BOCOR_WORD_1) BOCOR Page Word 1 Offset */
#define FUSES_BOCOR_WORD_16_REG_OFST   _UINT32_(0x40)      /* (FUSES_BOCOR_WORD_16) BOCOR Page Word 16 Offset */
#define FUSES_BOCOR_WORD_17_REG_OFST   _UINT32_(0x44)      /* (FUSES_BOCOR_WORD_17) BOCOR Page Word 17 Offset */
#define FUSES_BOCOR_WORD_18_REG_OFST   _UINT32_(0x48)      /* (FUSES_BOCOR_WORD_18) BOCOR Page Word 18 Offset */
#define FUSES_BOCOR_WORD_19_REG_OFST   _UINT32_(0x4C)      /* (FUSES_BOCOR_WORD_19) BOCOR Page Word 19 Offset */
#define FUSES_OTP1_WORD_0_REG_OFST     _UINT32_(0x00)      /* (FUSES_OTP1_WORD_0) OTP1 Page Word 0 Offset */
#define FUSES_OTP1_WORD_1_REG_OFST     _UINT32_(0x04)      /* (FUSES_OTP1_WORD_1) OTP1 Page Word 1 Offset */
#define FUSES_OTP2_WORD_1_REG_OFST     _UINT32_(0x04)      /* (FUSES_OTP2_WORD_1) OTP2 Page Word 1 Offset */
#define FUSES_USER_WORD_0_REG_OFST     _UINT32_(0x00)      /* (FUSES_USER_WORD_0) USER Page Word 0 Offset */
#define FUSES_USER_WORD_1_REG_OFST     _UINT32_(0x04)      /* (FUSES_USER_WORD_1) USER Page Word 1 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SW_CALIB_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_SW_CALIB_WORD_0; /**< Offset: 0x00 (R/   32) SW_CALIB Page Word 0 */
} fuses_sw_calib_fuses_registers_t;

/** \brief BOCOR_FUSES register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       FUSES_BOCOR_WORD_1; /**< Offset: 0x04 (R/W  32) BOCOR Page Word 1 */
  __I   uint8_t                        Reserved2[0x38];
  __IO  uint32_t                       FUSES_BOCOR_WORD_16; /**< Offset: 0x40 (R/W  32) BOCOR Page Word 16 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_17; /**< Offset: 0x44 (R/W  32) BOCOR Page Word 17 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_18; /**< Offset: 0x48 (R/W  32) BOCOR Page Word 18 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_19; /**< Offset: 0x4C (R/W  32) BOCOR Page Word 19 */
} fuses_bocor_fuses_registers_t;

/** \brief OTP1_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_OTP1_WORD_0;  /**< Offset: 0x00 (R/   32) OTP1 Page Word 0 */
  __I   uint32_t                       FUSES_OTP1_WORD_1;  /**< Offset: 0x04 (R/   32) OTP1 Page Word 1 */
} fuses_otp1_fuses_registers_t;

/** \brief OTP2_FUSES register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x04];
  __I   uint32_t                       FUSES_OTP2_WORD_1;  /**< Offset: 0x04 (R/   32) OTP2 Page Word 1 */
} fuses_otp2_fuses_registers_t;

/** \brief USER_FUSES register API structure */
typedef struct
{
  __IO  uint32_t                       FUSES_USER_WORD_0;  /**< Offset: 0x00 (R/W  32) USER Page Word 0 */
  __IO  uint32_t                       FUSES_USER_WORD_1;  /**< Offset: 0x04 (R/W  32) USER Page Word 1 */
} fuses_user_fuses_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMLE00_FUSES_COMPONENT_H_ */
