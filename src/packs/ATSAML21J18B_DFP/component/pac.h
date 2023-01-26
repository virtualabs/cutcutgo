/**
 * \brief Component description for PAC
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
#ifndef _SAML21_PAC_COMPONENT_H_
#define _SAML21_PAC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PAC                                          */
/* ************************************************************************** */

/* -------- PAC_WRCTRL : (PAC Offset: 0x00) (R/W 32) Write control -------- */
#define PAC_WRCTRL_RESETVALUE                 _U_(0x00)                                            /**<  (PAC_WRCTRL) Write control  Reset Value */

#define PAC_WRCTRL_PERID_Pos                  _U_(0)                                               /**< (PAC_WRCTRL) Peripheral identifier Position */
#define PAC_WRCTRL_PERID_Msk                  (_U_(0xFFFF) << PAC_WRCTRL_PERID_Pos)                /**< (PAC_WRCTRL) Peripheral identifier Mask */
#define PAC_WRCTRL_PERID(value)               (PAC_WRCTRL_PERID_Msk & ((value) << PAC_WRCTRL_PERID_Pos))
#define PAC_WRCTRL_KEY_Pos                    _U_(16)                                              /**< (PAC_WRCTRL) Peripheral access control key Position */
#define PAC_WRCTRL_KEY_Msk                    (_U_(0xFF) << PAC_WRCTRL_KEY_Pos)                    /**< (PAC_WRCTRL) Peripheral access control key Mask */
#define PAC_WRCTRL_KEY(value)                 (PAC_WRCTRL_KEY_Msk & ((value) << PAC_WRCTRL_KEY_Pos))
#define   PAC_WRCTRL_KEY_OFF_Val              _U_(0x0)                                             /**< (PAC_WRCTRL) No action  */
#define   PAC_WRCTRL_KEY_CLR_Val              _U_(0x1)                                             /**< (PAC_WRCTRL) Clear protection  */
#define   PAC_WRCTRL_KEY_SET_Val              _U_(0x2)                                             /**< (PAC_WRCTRL) Set protection  */
#define   PAC_WRCTRL_KEY_SETLCK_Val           _U_(0x3)                                             /**< (PAC_WRCTRL) Set and lock protection  */
#define PAC_WRCTRL_KEY_OFF                    (PAC_WRCTRL_KEY_OFF_Val << PAC_WRCTRL_KEY_Pos)       /**< (PAC_WRCTRL) No action Position  */
#define PAC_WRCTRL_KEY_CLR                    (PAC_WRCTRL_KEY_CLR_Val << PAC_WRCTRL_KEY_Pos)       /**< (PAC_WRCTRL) Clear protection Position  */
#define PAC_WRCTRL_KEY_SET                    (PAC_WRCTRL_KEY_SET_Val << PAC_WRCTRL_KEY_Pos)       /**< (PAC_WRCTRL) Set protection Position  */
#define PAC_WRCTRL_KEY_SETLCK                 (PAC_WRCTRL_KEY_SETLCK_Val << PAC_WRCTRL_KEY_Pos)    /**< (PAC_WRCTRL) Set and lock protection Position  */
#define PAC_WRCTRL_Msk                        _U_(0x00FFFFFF)                                      /**< (PAC_WRCTRL) Register Mask  */


/* -------- PAC_EVCTRL : (PAC Offset: 0x04) (R/W 8) Event control -------- */
#define PAC_EVCTRL_RESETVALUE                 _U_(0x00)                                            /**<  (PAC_EVCTRL) Event control  Reset Value */

#define PAC_EVCTRL_ERREO_Pos                  _U_(0)                                               /**< (PAC_EVCTRL) Peripheral acess error event output Position */
#define PAC_EVCTRL_ERREO_Msk                  (_U_(0x1) << PAC_EVCTRL_ERREO_Pos)                   /**< (PAC_EVCTRL) Peripheral acess error event output Mask */
#define PAC_EVCTRL_ERREO(value)               (PAC_EVCTRL_ERREO_Msk & ((value) << PAC_EVCTRL_ERREO_Pos))
#define PAC_EVCTRL_Msk                        _U_(0x01)                                            /**< (PAC_EVCTRL) Register Mask  */


/* -------- PAC_INTENCLR : (PAC Offset: 0x08) (R/W 8) Interrupt enable clear -------- */
#define PAC_INTENCLR_RESETVALUE               _U_(0x00)                                            /**<  (PAC_INTENCLR) Interrupt enable clear  Reset Value */

#define PAC_INTENCLR_ERR_Pos                  _U_(0)                                               /**< (PAC_INTENCLR) Peripheral access error interrupt disable Position */
#define PAC_INTENCLR_ERR_Msk                  (_U_(0x1) << PAC_INTENCLR_ERR_Pos)                   /**< (PAC_INTENCLR) Peripheral access error interrupt disable Mask */
#define PAC_INTENCLR_ERR(value)               (PAC_INTENCLR_ERR_Msk & ((value) << PAC_INTENCLR_ERR_Pos))
#define PAC_INTENCLR_Msk                      _U_(0x01)                                            /**< (PAC_INTENCLR) Register Mask  */


/* -------- PAC_INTENSET : (PAC Offset: 0x09) (R/W 8) Interrupt enable set -------- */
#define PAC_INTENSET_RESETVALUE               _U_(0x00)                                            /**<  (PAC_INTENSET) Interrupt enable set  Reset Value */

#define PAC_INTENSET_ERR_Pos                  _U_(0)                                               /**< (PAC_INTENSET) Peripheral access error interrupt enable Position */
#define PAC_INTENSET_ERR_Msk                  (_U_(0x1) << PAC_INTENSET_ERR_Pos)                   /**< (PAC_INTENSET) Peripheral access error interrupt enable Mask */
#define PAC_INTENSET_ERR(value)               (PAC_INTENSET_ERR_Msk & ((value) << PAC_INTENSET_ERR_Pos))
#define PAC_INTENSET_Msk                      _U_(0x01)                                            /**< (PAC_INTENSET) Register Mask  */


/* -------- PAC_INTFLAGAHB : (PAC Offset: 0x10) (R/W 32) Bridge interrupt flag status -------- */
#define PAC_INTFLAGAHB_RESETVALUE             _U_(0x00)                                            /**<  (PAC_INTFLAGAHB) Bridge interrupt flag status  Reset Value */

#define PAC_INTFLAGAHB_FLASH_Pos              _U_(0)                                               /**< (PAC_INTFLAGAHB) FLASH Position */
#define PAC_INTFLAGAHB_FLASH_Msk              (_U_(0x1) << PAC_INTFLAGAHB_FLASH_Pos)               /**< (PAC_INTFLAGAHB) FLASH Mask */
#define PAC_INTFLAGAHB_FLASH(value)           (PAC_INTFLAGAHB_FLASH_Msk & ((value) << PAC_INTFLAGAHB_FLASH_Pos))
#define PAC_INTFLAGAHB_HSRAMCM0P_Pos          _U_(1)                                               /**< (PAC_INTFLAGAHB) HSRAMCM0P Position */
#define PAC_INTFLAGAHB_HSRAMCM0P_Msk          (_U_(0x1) << PAC_INTFLAGAHB_HSRAMCM0P_Pos)           /**< (PAC_INTFLAGAHB) HSRAMCM0P Mask */
#define PAC_INTFLAGAHB_HSRAMCM0P(value)       (PAC_INTFLAGAHB_HSRAMCM0P_Msk & ((value) << PAC_INTFLAGAHB_HSRAMCM0P_Pos))
#define PAC_INTFLAGAHB_HSRAMDSU_Pos           _U_(2)                                               /**< (PAC_INTFLAGAHB) HSRAMDSU Position */
#define PAC_INTFLAGAHB_HSRAMDSU_Msk           (_U_(0x1) << PAC_INTFLAGAHB_HSRAMDSU_Pos)            /**< (PAC_INTFLAGAHB) HSRAMDSU Mask */
#define PAC_INTFLAGAHB_HSRAMDSU(value)        (PAC_INTFLAGAHB_HSRAMDSU_Msk & ((value) << PAC_INTFLAGAHB_HSRAMDSU_Pos))
#define PAC_INTFLAGAHB_HPB1_Pos               _U_(3)                                               /**< (PAC_INTFLAGAHB) HPB1 Position */
#define PAC_INTFLAGAHB_HPB1_Msk               (_U_(0x1) << PAC_INTFLAGAHB_HPB1_Pos)                /**< (PAC_INTFLAGAHB) HPB1 Mask */
#define PAC_INTFLAGAHB_HPB1(value)            (PAC_INTFLAGAHB_HPB1_Msk & ((value) << PAC_INTFLAGAHB_HPB1_Pos))
#define PAC_INTFLAGAHB_H2LBRIDGES_Pos         _U_(4)                                               /**< (PAC_INTFLAGAHB) H2LBRIDGES Position */
#define PAC_INTFLAGAHB_H2LBRIDGES_Msk         (_U_(0x1) << PAC_INTFLAGAHB_H2LBRIDGES_Pos)          /**< (PAC_INTFLAGAHB) H2LBRIDGES Mask */
#define PAC_INTFLAGAHB_H2LBRIDGES(value)      (PAC_INTFLAGAHB_H2LBRIDGES_Msk & ((value) << PAC_INTFLAGAHB_H2LBRIDGES_Pos))
#define PAC_INTFLAGAHB_HPB0_Pos               _U_(16)                                              /**< (PAC_INTFLAGAHB) HPB0 Position */
#define PAC_INTFLAGAHB_HPB0_Msk               (_U_(0x1) << PAC_INTFLAGAHB_HPB0_Pos)                /**< (PAC_INTFLAGAHB) HPB0 Mask */
#define PAC_INTFLAGAHB_HPB0(value)            (PAC_INTFLAGAHB_HPB0_Msk & ((value) << PAC_INTFLAGAHB_HPB0_Pos))
#define PAC_INTFLAGAHB_HPB2_Pos               _U_(17)                                              /**< (PAC_INTFLAGAHB) HPB2 Position */
#define PAC_INTFLAGAHB_HPB2_Msk               (_U_(0x1) << PAC_INTFLAGAHB_HPB2_Pos)                /**< (PAC_INTFLAGAHB) HPB2 Mask */
#define PAC_INTFLAGAHB_HPB2(value)            (PAC_INTFLAGAHB_HPB2_Msk & ((value) << PAC_INTFLAGAHB_HPB2_Pos))
#define PAC_INTFLAGAHB_HPB3_Pos               _U_(18)                                              /**< (PAC_INTFLAGAHB) HPB3 Position */
#define PAC_INTFLAGAHB_HPB3_Msk               (_U_(0x1) << PAC_INTFLAGAHB_HPB3_Pos)                /**< (PAC_INTFLAGAHB) HPB3 Mask */
#define PAC_INTFLAGAHB_HPB3(value)            (PAC_INTFLAGAHB_HPB3_Msk & ((value) << PAC_INTFLAGAHB_HPB3_Pos))
#define PAC_INTFLAGAHB_HPB4_Pos               _U_(19)                                              /**< (PAC_INTFLAGAHB) HPB4 Position */
#define PAC_INTFLAGAHB_HPB4_Msk               (_U_(0x1) << PAC_INTFLAGAHB_HPB4_Pos)                /**< (PAC_INTFLAGAHB) HPB4 Mask */
#define PAC_INTFLAGAHB_HPB4(value)            (PAC_INTFLAGAHB_HPB4_Msk & ((value) << PAC_INTFLAGAHB_HPB4_Pos))
#define PAC_INTFLAGAHB_LPRAMHS_Pos            _U_(21)                                              /**< (PAC_INTFLAGAHB) LPRAMHS Position */
#define PAC_INTFLAGAHB_LPRAMHS_Msk            (_U_(0x1) << PAC_INTFLAGAHB_LPRAMHS_Pos)             /**< (PAC_INTFLAGAHB) LPRAMHS Mask */
#define PAC_INTFLAGAHB_LPRAMHS(value)         (PAC_INTFLAGAHB_LPRAMHS_Msk & ((value) << PAC_INTFLAGAHB_LPRAMHS_Pos))
#define PAC_INTFLAGAHB_LPRAMPICOP_Pos         _U_(22)                                              /**< (PAC_INTFLAGAHB) LPRAMPICOP Position */
#define PAC_INTFLAGAHB_LPRAMPICOP_Msk         (_U_(0x1) << PAC_INTFLAGAHB_LPRAMPICOP_Pos)          /**< (PAC_INTFLAGAHB) LPRAMPICOP Mask */
#define PAC_INTFLAGAHB_LPRAMPICOP(value)      (PAC_INTFLAGAHB_LPRAMPICOP_Msk & ((value) << PAC_INTFLAGAHB_LPRAMPICOP_Pos))
#define PAC_INTFLAGAHB_LPRAMDMAC_Pos          _U_(23)                                              /**< (PAC_INTFLAGAHB) LPRAMDMAC Position */
#define PAC_INTFLAGAHB_LPRAMDMAC_Msk          (_U_(0x1) << PAC_INTFLAGAHB_LPRAMDMAC_Pos)           /**< (PAC_INTFLAGAHB) LPRAMDMAC Mask */
#define PAC_INTFLAGAHB_LPRAMDMAC(value)       (PAC_INTFLAGAHB_LPRAMDMAC_Msk & ((value) << PAC_INTFLAGAHB_LPRAMDMAC_Pos))
#define PAC_INTFLAGAHB_L2HBRIDGES_Pos         _U_(24)                                              /**< (PAC_INTFLAGAHB) L2HBRIDGES Position */
#define PAC_INTFLAGAHB_L2HBRIDGES_Msk         (_U_(0x1) << PAC_INTFLAGAHB_L2HBRIDGES_Pos)          /**< (PAC_INTFLAGAHB) L2HBRIDGES Mask */
#define PAC_INTFLAGAHB_L2HBRIDGES(value)      (PAC_INTFLAGAHB_L2HBRIDGES_Msk & ((value) << PAC_INTFLAGAHB_L2HBRIDGES_Pos))
#define PAC_INTFLAGAHB_HSRAMLP_Pos            _U_(25)                                              /**< (PAC_INTFLAGAHB) HSRAMLP Position */
#define PAC_INTFLAGAHB_HSRAMLP_Msk            (_U_(0x1) << PAC_INTFLAGAHB_HSRAMLP_Pos)             /**< (PAC_INTFLAGAHB) HSRAMLP Mask */
#define PAC_INTFLAGAHB_HSRAMLP(value)         (PAC_INTFLAGAHB_HSRAMLP_Msk & ((value) << PAC_INTFLAGAHB_HSRAMLP_Pos))
#define PAC_INTFLAGAHB_Msk                    _U_(0x03EF001F)                                      /**< (PAC_INTFLAGAHB) Register Mask  */


/* -------- PAC_INTFLAGA : (PAC Offset: 0x14) (R/W 32) Peripheral interrupt flag status - Bridge A -------- */
#define PAC_INTFLAGA_RESETVALUE               _U_(0x00)                                            /**<  (PAC_INTFLAGA) Peripheral interrupt flag status - Bridge A  Reset Value */

#define PAC_INTFLAGA_PM_Pos                   _U_(0)                                               /**< (PAC_INTFLAGA) PM Position */
#define PAC_INTFLAGA_PM_Msk                   (_U_(0x1) << PAC_INTFLAGA_PM_Pos)                    /**< (PAC_INTFLAGA) PM Mask */
#define PAC_INTFLAGA_PM(value)                (PAC_INTFLAGA_PM_Msk & ((value) << PAC_INTFLAGA_PM_Pos))
#define PAC_INTFLAGA_MCLK_Pos                 _U_(1)                                               /**< (PAC_INTFLAGA) MCLK Position */
#define PAC_INTFLAGA_MCLK_Msk                 (_U_(0x1) << PAC_INTFLAGA_MCLK_Pos)                  /**< (PAC_INTFLAGA) MCLK Mask */
#define PAC_INTFLAGA_MCLK(value)              (PAC_INTFLAGA_MCLK_Msk & ((value) << PAC_INTFLAGA_MCLK_Pos))
#define PAC_INTFLAGA_RSTC_Pos                 _U_(2)                                               /**< (PAC_INTFLAGA) RSTC Position */
#define PAC_INTFLAGA_RSTC_Msk                 (_U_(0x1) << PAC_INTFLAGA_RSTC_Pos)                  /**< (PAC_INTFLAGA) RSTC Mask */
#define PAC_INTFLAGA_RSTC(value)              (PAC_INTFLAGA_RSTC_Msk & ((value) << PAC_INTFLAGA_RSTC_Pos))
#define PAC_INTFLAGA_OSCCTRL_Pos              _U_(3)                                               /**< (PAC_INTFLAGA) OSCCTRL Position */
#define PAC_INTFLAGA_OSCCTRL_Msk              (_U_(0x1) << PAC_INTFLAGA_OSCCTRL_Pos)               /**< (PAC_INTFLAGA) OSCCTRL Mask */
#define PAC_INTFLAGA_OSCCTRL(value)           (PAC_INTFLAGA_OSCCTRL_Msk & ((value) << PAC_INTFLAGA_OSCCTRL_Pos))
#define PAC_INTFLAGA_OSC32KCTRL_Pos           _U_(4)                                               /**< (PAC_INTFLAGA) OSC32KCTRL Position */
#define PAC_INTFLAGA_OSC32KCTRL_Msk           (_U_(0x1) << PAC_INTFLAGA_OSC32KCTRL_Pos)            /**< (PAC_INTFLAGA) OSC32KCTRL Mask */
#define PAC_INTFLAGA_OSC32KCTRL(value)        (PAC_INTFLAGA_OSC32KCTRL_Msk & ((value) << PAC_INTFLAGA_OSC32KCTRL_Pos))
#define PAC_INTFLAGA_SUPC_Pos                 _U_(5)                                               /**< (PAC_INTFLAGA) SUPC Position */
#define PAC_INTFLAGA_SUPC_Msk                 (_U_(0x1) << PAC_INTFLAGA_SUPC_Pos)                  /**< (PAC_INTFLAGA) SUPC Mask */
#define PAC_INTFLAGA_SUPC(value)              (PAC_INTFLAGA_SUPC_Msk & ((value) << PAC_INTFLAGA_SUPC_Pos))
#define PAC_INTFLAGA_GCLK_Pos                 _U_(6)                                               /**< (PAC_INTFLAGA) GCLK Position */
#define PAC_INTFLAGA_GCLK_Msk                 (_U_(0x1) << PAC_INTFLAGA_GCLK_Pos)                  /**< (PAC_INTFLAGA) GCLK Mask */
#define PAC_INTFLAGA_GCLK(value)              (PAC_INTFLAGA_GCLK_Msk & ((value) << PAC_INTFLAGA_GCLK_Pos))
#define PAC_INTFLAGA_WDT_Pos                  _U_(7)                                               /**< (PAC_INTFLAGA) WDT Position */
#define PAC_INTFLAGA_WDT_Msk                  (_U_(0x1) << PAC_INTFLAGA_WDT_Pos)                   /**< (PAC_INTFLAGA) WDT Mask */
#define PAC_INTFLAGA_WDT(value)               (PAC_INTFLAGA_WDT_Msk & ((value) << PAC_INTFLAGA_WDT_Pos))
#define PAC_INTFLAGA_RTC_Pos                  _U_(8)                                               /**< (PAC_INTFLAGA) RTC Position */
#define PAC_INTFLAGA_RTC_Msk                  (_U_(0x1) << PAC_INTFLAGA_RTC_Pos)                   /**< (PAC_INTFLAGA) RTC Mask */
#define PAC_INTFLAGA_RTC(value)               (PAC_INTFLAGA_RTC_Msk & ((value) << PAC_INTFLAGA_RTC_Pos))
#define PAC_INTFLAGA_EIC_Pos                  _U_(9)                                               /**< (PAC_INTFLAGA) EIC Position */
#define PAC_INTFLAGA_EIC_Msk                  (_U_(0x1) << PAC_INTFLAGA_EIC_Pos)                   /**< (PAC_INTFLAGA) EIC Mask */
#define PAC_INTFLAGA_EIC(value)               (PAC_INTFLAGA_EIC_Msk & ((value) << PAC_INTFLAGA_EIC_Pos))
#define PAC_INTFLAGA_PORT_Pos                 _U_(10)                                              /**< (PAC_INTFLAGA) PORT Position */
#define PAC_INTFLAGA_PORT_Msk                 (_U_(0x1) << PAC_INTFLAGA_PORT_Pos)                  /**< (PAC_INTFLAGA) PORT Mask */
#define PAC_INTFLAGA_PORT(value)              (PAC_INTFLAGA_PORT_Msk & ((value) << PAC_INTFLAGA_PORT_Pos))
#define PAC_INTFLAGA_Msk                      _U_(0x000007FF)                                      /**< (PAC_INTFLAGA) Register Mask  */


/* -------- PAC_INTFLAGB : (PAC Offset: 0x18) (R/W 32) Peripheral interrupt flag status - Bridge B -------- */
#define PAC_INTFLAGB_RESETVALUE               _U_(0x00)                                            /**<  (PAC_INTFLAGB) Peripheral interrupt flag status - Bridge B  Reset Value */

#define PAC_INTFLAGB_USB_Pos                  _U_(0)                                               /**< (PAC_INTFLAGB) USB Position */
#define PAC_INTFLAGB_USB_Msk                  (_U_(0x1) << PAC_INTFLAGB_USB_Pos)                   /**< (PAC_INTFLAGB) USB Mask */
#define PAC_INTFLAGB_USB(value)               (PAC_INTFLAGB_USB_Msk & ((value) << PAC_INTFLAGB_USB_Pos))
#define PAC_INTFLAGB_DSU_Pos                  _U_(1)                                               /**< (PAC_INTFLAGB) DSU Position */
#define PAC_INTFLAGB_DSU_Msk                  (_U_(0x1) << PAC_INTFLAGB_DSU_Pos)                   /**< (PAC_INTFLAGB) DSU Mask */
#define PAC_INTFLAGB_DSU(value)               (PAC_INTFLAGB_DSU_Msk & ((value) << PAC_INTFLAGB_DSU_Pos))
#define PAC_INTFLAGB_NVMCTRL_Pos              _U_(2)                                               /**< (PAC_INTFLAGB) NVMCTRL Position */
#define PAC_INTFLAGB_NVMCTRL_Msk              (_U_(0x1) << PAC_INTFLAGB_NVMCTRL_Pos)               /**< (PAC_INTFLAGB) NVMCTRL Mask */
#define PAC_INTFLAGB_NVMCTRL(value)           (PAC_INTFLAGB_NVMCTRL_Msk & ((value) << PAC_INTFLAGB_NVMCTRL_Pos))
#define PAC_INTFLAGB_MTB_Pos                  _U_(3)                                               /**< (PAC_INTFLAGB) MTB Position */
#define PAC_INTFLAGB_MTB_Msk                  (_U_(0x1) << PAC_INTFLAGB_MTB_Pos)                   /**< (PAC_INTFLAGB) MTB Mask */
#define PAC_INTFLAGB_MTB(value)               (PAC_INTFLAGB_MTB_Msk & ((value) << PAC_INTFLAGB_MTB_Pos))
#define PAC_INTFLAGB_Msk                      _U_(0x0000000F)                                      /**< (PAC_INTFLAGB) Register Mask  */


/* -------- PAC_INTFLAGC : (PAC Offset: 0x1C) (R/W 32) Peripheral interrupt flag status - Bridge C -------- */
#define PAC_INTFLAGC_RESETVALUE               _U_(0x00)                                            /**<  (PAC_INTFLAGC) Peripheral interrupt flag status - Bridge C  Reset Value */

#define PAC_INTFLAGC_SERCOM0_Pos              _U_(0)                                               /**< (PAC_INTFLAGC) SERCOM0 Position */
#define PAC_INTFLAGC_SERCOM0_Msk              (_U_(0x1) << PAC_INTFLAGC_SERCOM0_Pos)               /**< (PAC_INTFLAGC) SERCOM0 Mask */
#define PAC_INTFLAGC_SERCOM0(value)           (PAC_INTFLAGC_SERCOM0_Msk & ((value) << PAC_INTFLAGC_SERCOM0_Pos))
#define PAC_INTFLAGC_SERCOM1_Pos              _U_(1)                                               /**< (PAC_INTFLAGC) SERCOM1 Position */
#define PAC_INTFLAGC_SERCOM1_Msk              (_U_(0x1) << PAC_INTFLAGC_SERCOM1_Pos)               /**< (PAC_INTFLAGC) SERCOM1 Mask */
#define PAC_INTFLAGC_SERCOM1(value)           (PAC_INTFLAGC_SERCOM1_Msk & ((value) << PAC_INTFLAGC_SERCOM1_Pos))
#define PAC_INTFLAGC_SERCOM2_Pos              _U_(2)                                               /**< (PAC_INTFLAGC) SERCOM2 Position */
#define PAC_INTFLAGC_SERCOM2_Msk              (_U_(0x1) << PAC_INTFLAGC_SERCOM2_Pos)               /**< (PAC_INTFLAGC) SERCOM2 Mask */
#define PAC_INTFLAGC_SERCOM2(value)           (PAC_INTFLAGC_SERCOM2_Msk & ((value) << PAC_INTFLAGC_SERCOM2_Pos))
#define PAC_INTFLAGC_SERCOM3_Pos              _U_(3)                                               /**< (PAC_INTFLAGC) SERCOM3 Position */
#define PAC_INTFLAGC_SERCOM3_Msk              (_U_(0x1) << PAC_INTFLAGC_SERCOM3_Pos)               /**< (PAC_INTFLAGC) SERCOM3 Mask */
#define PAC_INTFLAGC_SERCOM3(value)           (PAC_INTFLAGC_SERCOM3_Msk & ((value) << PAC_INTFLAGC_SERCOM3_Pos))
#define PAC_INTFLAGC_SERCOM4_Pos              _U_(4)                                               /**< (PAC_INTFLAGC) SERCOM4 Position */
#define PAC_INTFLAGC_SERCOM4_Msk              (_U_(0x1) << PAC_INTFLAGC_SERCOM4_Pos)               /**< (PAC_INTFLAGC) SERCOM4 Mask */
#define PAC_INTFLAGC_SERCOM4(value)           (PAC_INTFLAGC_SERCOM4_Msk & ((value) << PAC_INTFLAGC_SERCOM4_Pos))
#define PAC_INTFLAGC_TCC0_Pos                 _U_(5)                                               /**< (PAC_INTFLAGC) TCC0 Position */
#define PAC_INTFLAGC_TCC0_Msk                 (_U_(0x1) << PAC_INTFLAGC_TCC0_Pos)                  /**< (PAC_INTFLAGC) TCC0 Mask */
#define PAC_INTFLAGC_TCC0(value)              (PAC_INTFLAGC_TCC0_Msk & ((value) << PAC_INTFLAGC_TCC0_Pos))
#define PAC_INTFLAGC_TCC1_Pos                 _U_(6)                                               /**< (PAC_INTFLAGC) TCC1 Position */
#define PAC_INTFLAGC_TCC1_Msk                 (_U_(0x1) << PAC_INTFLAGC_TCC1_Pos)                  /**< (PAC_INTFLAGC) TCC1 Mask */
#define PAC_INTFLAGC_TCC1(value)              (PAC_INTFLAGC_TCC1_Msk & ((value) << PAC_INTFLAGC_TCC1_Pos))
#define PAC_INTFLAGC_TCC2_Pos                 _U_(7)                                               /**< (PAC_INTFLAGC) TCC2 Position */
#define PAC_INTFLAGC_TCC2_Msk                 (_U_(0x1) << PAC_INTFLAGC_TCC2_Pos)                  /**< (PAC_INTFLAGC) TCC2 Mask */
#define PAC_INTFLAGC_TCC2(value)              (PAC_INTFLAGC_TCC2_Msk & ((value) << PAC_INTFLAGC_TCC2_Pos))
#define PAC_INTFLAGC_TC0_Pos                  _U_(8)                                               /**< (PAC_INTFLAGC) TC0 Position */
#define PAC_INTFLAGC_TC0_Msk                  (_U_(0x1) << PAC_INTFLAGC_TC0_Pos)                   /**< (PAC_INTFLAGC) TC0 Mask */
#define PAC_INTFLAGC_TC0(value)               (PAC_INTFLAGC_TC0_Msk & ((value) << PAC_INTFLAGC_TC0_Pos))
#define PAC_INTFLAGC_TC1_Pos                  _U_(9)                                               /**< (PAC_INTFLAGC) TC1 Position */
#define PAC_INTFLAGC_TC1_Msk                  (_U_(0x1) << PAC_INTFLAGC_TC1_Pos)                   /**< (PAC_INTFLAGC) TC1 Mask */
#define PAC_INTFLAGC_TC1(value)               (PAC_INTFLAGC_TC1_Msk & ((value) << PAC_INTFLAGC_TC1_Pos))
#define PAC_INTFLAGC_TC2_Pos                  _U_(10)                                              /**< (PAC_INTFLAGC) TC2 Position */
#define PAC_INTFLAGC_TC2_Msk                  (_U_(0x1) << PAC_INTFLAGC_TC2_Pos)                   /**< (PAC_INTFLAGC) TC2 Mask */
#define PAC_INTFLAGC_TC2(value)               (PAC_INTFLAGC_TC2_Msk & ((value) << PAC_INTFLAGC_TC2_Pos))
#define PAC_INTFLAGC_TC3_Pos                  _U_(11)                                              /**< (PAC_INTFLAGC) TC3 Position */
#define PAC_INTFLAGC_TC3_Msk                  (_U_(0x1) << PAC_INTFLAGC_TC3_Pos)                   /**< (PAC_INTFLAGC) TC3 Mask */
#define PAC_INTFLAGC_TC3(value)               (PAC_INTFLAGC_TC3_Msk & ((value) << PAC_INTFLAGC_TC3_Pos))
#define PAC_INTFLAGC_DAC_Pos                  _U_(12)                                              /**< (PAC_INTFLAGC) DAC Position */
#define PAC_INTFLAGC_DAC_Msk                  (_U_(0x1) << PAC_INTFLAGC_DAC_Pos)                   /**< (PAC_INTFLAGC) DAC Mask */
#define PAC_INTFLAGC_DAC(value)               (PAC_INTFLAGC_DAC_Msk & ((value) << PAC_INTFLAGC_DAC_Pos))
#define PAC_INTFLAGC_AES_Pos                  _U_(13)                                              /**< (PAC_INTFLAGC) AES Position */
#define PAC_INTFLAGC_AES_Msk                  (_U_(0x1) << PAC_INTFLAGC_AES_Pos)                   /**< (PAC_INTFLAGC) AES Mask */
#define PAC_INTFLAGC_AES(value)               (PAC_INTFLAGC_AES_Msk & ((value) << PAC_INTFLAGC_AES_Pos))
#define PAC_INTFLAGC_TRNG_Pos                 _U_(14)                                              /**< (PAC_INTFLAGC) TRNG Position */
#define PAC_INTFLAGC_TRNG_Msk                 (_U_(0x1) << PAC_INTFLAGC_TRNG_Pos)                  /**< (PAC_INTFLAGC) TRNG Mask */
#define PAC_INTFLAGC_TRNG(value)              (PAC_INTFLAGC_TRNG_Msk & ((value) << PAC_INTFLAGC_TRNG_Pos))
#define PAC_INTFLAGC_Msk                      _U_(0x00007FFF)                                      /**< (PAC_INTFLAGC) Register Mask  */

#define PAC_INTFLAGC_SERCOM_Pos               _U_(0)                                               /**< (PAC_INTFLAGC Position) SERCOMx */
#define PAC_INTFLAGC_SERCOM_Msk               (_U_(0x1F) << PAC_INTFLAGC_SERCOM_Pos)               /**< (PAC_INTFLAGC Mask) SERCOM */
#define PAC_INTFLAGC_SERCOM(value)            (PAC_INTFLAGC_SERCOM_Msk & ((value) << PAC_INTFLAGC_SERCOM_Pos)) 
#define PAC_INTFLAGC_TCC_Pos                  _U_(5)                                               /**< (PAC_INTFLAGC Position) TCCx */
#define PAC_INTFLAGC_TCC_Msk                  (_U_(0x7) << PAC_INTFLAGC_TCC_Pos)                   /**< (PAC_INTFLAGC Mask) TCC */
#define PAC_INTFLAGC_TCC(value)               (PAC_INTFLAGC_TCC_Msk & ((value) << PAC_INTFLAGC_TCC_Pos)) 
#define PAC_INTFLAGC_TC_Pos                   _U_(8)                                               /**< (PAC_INTFLAGC Position) TCx */
#define PAC_INTFLAGC_TC_Msk                   (_U_(0xF) << PAC_INTFLAGC_TC_Pos)                    /**< (PAC_INTFLAGC Mask) TC */
#define PAC_INTFLAGC_TC(value)                (PAC_INTFLAGC_TC_Msk & ((value) << PAC_INTFLAGC_TC_Pos)) 

/* -------- PAC_INTFLAGD : (PAC Offset: 0x20) (R/W 32) Peripheral interrupt flag status - Bridge D -------- */
#define PAC_INTFLAGD_RESETVALUE               _U_(0x00)                                            /**<  (PAC_INTFLAGD) Peripheral interrupt flag status - Bridge D  Reset Value */

#define PAC_INTFLAGD_EVSYS_Pos                _U_(0)                                               /**< (PAC_INTFLAGD) EVSYS Position */
#define PAC_INTFLAGD_EVSYS_Msk                (_U_(0x1) << PAC_INTFLAGD_EVSYS_Pos)                 /**< (PAC_INTFLAGD) EVSYS Mask */
#define PAC_INTFLAGD_EVSYS(value)             (PAC_INTFLAGD_EVSYS_Msk & ((value) << PAC_INTFLAGD_EVSYS_Pos))
#define PAC_INTFLAGD_SERCOM5_Pos              _U_(1)                                               /**< (PAC_INTFLAGD) SERCOM5 Position */
#define PAC_INTFLAGD_SERCOM5_Msk              (_U_(0x1) << PAC_INTFLAGD_SERCOM5_Pos)               /**< (PAC_INTFLAGD) SERCOM5 Mask */
#define PAC_INTFLAGD_SERCOM5(value)           (PAC_INTFLAGD_SERCOM5_Msk & ((value) << PAC_INTFLAGD_SERCOM5_Pos))
#define PAC_INTFLAGD_TC4_Pos                  _U_(2)                                               /**< (PAC_INTFLAGD) TC4 Position */
#define PAC_INTFLAGD_TC4_Msk                  (_U_(0x1) << PAC_INTFLAGD_TC4_Pos)                   /**< (PAC_INTFLAGD) TC4 Mask */
#define PAC_INTFLAGD_TC4(value)               (PAC_INTFLAGD_TC4_Msk & ((value) << PAC_INTFLAGD_TC4_Pos))
#define PAC_INTFLAGD_ADC_Pos                  _U_(3)                                               /**< (PAC_INTFLAGD) ADC Position */
#define PAC_INTFLAGD_ADC_Msk                  (_U_(0x1) << PAC_INTFLAGD_ADC_Pos)                   /**< (PAC_INTFLAGD) ADC Mask */
#define PAC_INTFLAGD_ADC(value)               (PAC_INTFLAGD_ADC_Msk & ((value) << PAC_INTFLAGD_ADC_Pos))
#define PAC_INTFLAGD_AC_Pos                   _U_(4)                                               /**< (PAC_INTFLAGD) AC Position */
#define PAC_INTFLAGD_AC_Msk                   (_U_(0x1) << PAC_INTFLAGD_AC_Pos)                    /**< (PAC_INTFLAGD) AC Mask */
#define PAC_INTFLAGD_AC(value)                (PAC_INTFLAGD_AC_Msk & ((value) << PAC_INTFLAGD_AC_Pos))
#define PAC_INTFLAGD_PTC_Pos                  _U_(5)                                               /**< (PAC_INTFLAGD) PTC Position */
#define PAC_INTFLAGD_PTC_Msk                  (_U_(0x1) << PAC_INTFLAGD_PTC_Pos)                   /**< (PAC_INTFLAGD) PTC Mask */
#define PAC_INTFLAGD_PTC(value)               (PAC_INTFLAGD_PTC_Msk & ((value) << PAC_INTFLAGD_PTC_Pos))
#define PAC_INTFLAGD_OPAMP_Pos                _U_(6)                                               /**< (PAC_INTFLAGD) OPAMP Position */
#define PAC_INTFLAGD_OPAMP_Msk                (_U_(0x1) << PAC_INTFLAGD_OPAMP_Pos)                 /**< (PAC_INTFLAGD) OPAMP Mask */
#define PAC_INTFLAGD_OPAMP(value)             (PAC_INTFLAGD_OPAMP_Msk & ((value) << PAC_INTFLAGD_OPAMP_Pos))
#define PAC_INTFLAGD_CCL_Pos                  _U_(7)                                               /**< (PAC_INTFLAGD) CCL Position */
#define PAC_INTFLAGD_CCL_Msk                  (_U_(0x1) << PAC_INTFLAGD_CCL_Pos)                   /**< (PAC_INTFLAGD) CCL Mask */
#define PAC_INTFLAGD_CCL(value)               (PAC_INTFLAGD_CCL_Msk & ((value) << PAC_INTFLAGD_CCL_Pos))
#define PAC_INTFLAGD_Msk                      _U_(0x000000FF)                                      /**< (PAC_INTFLAGD) Register Mask  */

#define PAC_INTFLAGD_SERCOM_Pos               _U_(1)                                               /**< (PAC_INTFLAGD Position) SERCOM5 */
#define PAC_INTFLAGD_SERCOM_Msk               (_U_(0x1) << PAC_INTFLAGD_SERCOM_Pos)                /**< (PAC_INTFLAGD Mask) SERCOM */
#define PAC_INTFLAGD_SERCOM(value)            (PAC_INTFLAGD_SERCOM_Msk & ((value) << PAC_INTFLAGD_SERCOM_Pos)) 
#define PAC_INTFLAGD_TC_Pos                   _U_(2)                                               /**< (PAC_INTFLAGD Position) TC4 */
#define PAC_INTFLAGD_TC_Msk                   (_U_(0x1) << PAC_INTFLAGD_TC_Pos)                    /**< (PAC_INTFLAGD Mask) TC */
#define PAC_INTFLAGD_TC(value)                (PAC_INTFLAGD_TC_Msk & ((value) << PAC_INTFLAGD_TC_Pos)) 

/* -------- PAC_INTFLAGE : (PAC Offset: 0x24) (R/W 32) Peripheral interrupt flag status - Bridge E -------- */
#define PAC_INTFLAGE_RESETVALUE               _U_(0x00)                                            /**<  (PAC_INTFLAGE) Peripheral interrupt flag status - Bridge E  Reset Value */

#define PAC_INTFLAGE_PAC_Pos                  _U_(0)                                               /**< (PAC_INTFLAGE) PAC Position */
#define PAC_INTFLAGE_PAC_Msk                  (_U_(0x1) << PAC_INTFLAGE_PAC_Pos)                   /**< (PAC_INTFLAGE) PAC Mask */
#define PAC_INTFLAGE_PAC(value)               (PAC_INTFLAGE_PAC_Msk & ((value) << PAC_INTFLAGE_PAC_Pos))
#define PAC_INTFLAGE_DMAC_Pos                 _U_(1)                                               /**< (PAC_INTFLAGE) DMAC Position */
#define PAC_INTFLAGE_DMAC_Msk                 (_U_(0x1) << PAC_INTFLAGE_DMAC_Pos)                  /**< (PAC_INTFLAGE) DMAC Mask */
#define PAC_INTFLAGE_DMAC(value)              (PAC_INTFLAGE_DMAC_Msk & ((value) << PAC_INTFLAGE_DMAC_Pos))
#define PAC_INTFLAGE_Msk                      _U_(0x00000003)                                      /**< (PAC_INTFLAGE) Register Mask  */


/* -------- PAC_STATUSA : (PAC Offset: 0x34) ( R/ 32) Peripheral write protection status - Bridge A -------- */
#define PAC_STATUSA_RESETVALUE                _U_(0x3000)                                          /**<  (PAC_STATUSA) Peripheral write protection status - Bridge A  Reset Value */

#define PAC_STATUSA_PM_Pos                    _U_(0)                                               /**< (PAC_STATUSA) PM APB Protect Enable Position */
#define PAC_STATUSA_PM_Msk                    (_U_(0x1) << PAC_STATUSA_PM_Pos)                     /**< (PAC_STATUSA) PM APB Protect Enable Mask */
#define PAC_STATUSA_PM(value)                 (PAC_STATUSA_PM_Msk & ((value) << PAC_STATUSA_PM_Pos))
#define PAC_STATUSA_MCLK_Pos                  _U_(1)                                               /**< (PAC_STATUSA) MCLK APB Protect Enable Position */
#define PAC_STATUSA_MCLK_Msk                  (_U_(0x1) << PAC_STATUSA_MCLK_Pos)                   /**< (PAC_STATUSA) MCLK APB Protect Enable Mask */
#define PAC_STATUSA_MCLK(value)               (PAC_STATUSA_MCLK_Msk & ((value) << PAC_STATUSA_MCLK_Pos))
#define PAC_STATUSA_RSTC_Pos                  _U_(2)                                               /**< (PAC_STATUSA) RSTC APB Protect Enable Position */
#define PAC_STATUSA_RSTC_Msk                  (_U_(0x1) << PAC_STATUSA_RSTC_Pos)                   /**< (PAC_STATUSA) RSTC APB Protect Enable Mask */
#define PAC_STATUSA_RSTC(value)               (PAC_STATUSA_RSTC_Msk & ((value) << PAC_STATUSA_RSTC_Pos))
#define PAC_STATUSA_OSCCTRL_Pos               _U_(3)                                               /**< (PAC_STATUSA) OSCCTRL APB Protect Enable Position */
#define PAC_STATUSA_OSCCTRL_Msk               (_U_(0x1) << PAC_STATUSA_OSCCTRL_Pos)                /**< (PAC_STATUSA) OSCCTRL APB Protect Enable Mask */
#define PAC_STATUSA_OSCCTRL(value)            (PAC_STATUSA_OSCCTRL_Msk & ((value) << PAC_STATUSA_OSCCTRL_Pos))
#define PAC_STATUSA_OSC32KCTRL_Pos            _U_(4)                                               /**< (PAC_STATUSA) OSC32KCTRL APB Protect Enable Position */
#define PAC_STATUSA_OSC32KCTRL_Msk            (_U_(0x1) << PAC_STATUSA_OSC32KCTRL_Pos)             /**< (PAC_STATUSA) OSC32KCTRL APB Protect Enable Mask */
#define PAC_STATUSA_OSC32KCTRL(value)         (PAC_STATUSA_OSC32KCTRL_Msk & ((value) << PAC_STATUSA_OSC32KCTRL_Pos))
#define PAC_STATUSA_SUPC_Pos                  _U_(5)                                               /**< (PAC_STATUSA) SUPC APB Protect Enable Position */
#define PAC_STATUSA_SUPC_Msk                  (_U_(0x1) << PAC_STATUSA_SUPC_Pos)                   /**< (PAC_STATUSA) SUPC APB Protect Enable Mask */
#define PAC_STATUSA_SUPC(value)               (PAC_STATUSA_SUPC_Msk & ((value) << PAC_STATUSA_SUPC_Pos))
#define PAC_STATUSA_GCLK_Pos                  _U_(6)                                               /**< (PAC_STATUSA) GCLK APB Protect Enable Position */
#define PAC_STATUSA_GCLK_Msk                  (_U_(0x1) << PAC_STATUSA_GCLK_Pos)                   /**< (PAC_STATUSA) GCLK APB Protect Enable Mask */
#define PAC_STATUSA_GCLK(value)               (PAC_STATUSA_GCLK_Msk & ((value) << PAC_STATUSA_GCLK_Pos))
#define PAC_STATUSA_WDT_Pos                   _U_(7)                                               /**< (PAC_STATUSA) WDT APB Protect Enable Position */
#define PAC_STATUSA_WDT_Msk                   (_U_(0x1) << PAC_STATUSA_WDT_Pos)                    /**< (PAC_STATUSA) WDT APB Protect Enable Mask */
#define PAC_STATUSA_WDT(value)                (PAC_STATUSA_WDT_Msk & ((value) << PAC_STATUSA_WDT_Pos))
#define PAC_STATUSA_RTC_Pos                   _U_(8)                                               /**< (PAC_STATUSA) RTC APB Protect Enable Position */
#define PAC_STATUSA_RTC_Msk                   (_U_(0x1) << PAC_STATUSA_RTC_Pos)                    /**< (PAC_STATUSA) RTC APB Protect Enable Mask */
#define PAC_STATUSA_RTC(value)                (PAC_STATUSA_RTC_Msk & ((value) << PAC_STATUSA_RTC_Pos))
#define PAC_STATUSA_EIC_Pos                   _U_(9)                                               /**< (PAC_STATUSA) EIC APB Protect Enable Position */
#define PAC_STATUSA_EIC_Msk                   (_U_(0x1) << PAC_STATUSA_EIC_Pos)                    /**< (PAC_STATUSA) EIC APB Protect Enable Mask */
#define PAC_STATUSA_EIC(value)                (PAC_STATUSA_EIC_Msk & ((value) << PAC_STATUSA_EIC_Pos))
#define PAC_STATUSA_PORT_Pos                  _U_(10)                                              /**< (PAC_STATUSA) PORT APB Protect Enable Position */
#define PAC_STATUSA_PORT_Msk                  (_U_(0x1) << PAC_STATUSA_PORT_Pos)                   /**< (PAC_STATUSA) PORT APB Protect Enable Mask */
#define PAC_STATUSA_PORT(value)               (PAC_STATUSA_PORT_Msk & ((value) << PAC_STATUSA_PORT_Pos))
#define PAC_STATUSA_Msk                       _U_(0x000007FF)                                      /**< (PAC_STATUSA) Register Mask  */


/* -------- PAC_STATUSB : (PAC Offset: 0x38) ( R/ 32) Peripheral write protection status - Bridge B -------- */
#define PAC_STATUSB_RESETVALUE                _U_(0x02)                                            /**<  (PAC_STATUSB) Peripheral write protection status - Bridge B  Reset Value */

#define PAC_STATUSB_USB_Pos                   _U_(0)                                               /**< (PAC_STATUSB) USB APB Protect Enable Position */
#define PAC_STATUSB_USB_Msk                   (_U_(0x1) << PAC_STATUSB_USB_Pos)                    /**< (PAC_STATUSB) USB APB Protect Enable Mask */
#define PAC_STATUSB_USB(value)                (PAC_STATUSB_USB_Msk & ((value) << PAC_STATUSB_USB_Pos))
#define PAC_STATUSB_DSU_Pos                   _U_(1)                                               /**< (PAC_STATUSB) DSU APB Protect Enable Position */
#define PAC_STATUSB_DSU_Msk                   (_U_(0x1) << PAC_STATUSB_DSU_Pos)                    /**< (PAC_STATUSB) DSU APB Protect Enable Mask */
#define PAC_STATUSB_DSU(value)                (PAC_STATUSB_DSU_Msk & ((value) << PAC_STATUSB_DSU_Pos))
#define PAC_STATUSB_NVMCTRL_Pos               _U_(2)                                               /**< (PAC_STATUSB) NVMCTRL APB Protect Enable Position */
#define PAC_STATUSB_NVMCTRL_Msk               (_U_(0x1) << PAC_STATUSB_NVMCTRL_Pos)                /**< (PAC_STATUSB) NVMCTRL APB Protect Enable Mask */
#define PAC_STATUSB_NVMCTRL(value)            (PAC_STATUSB_NVMCTRL_Msk & ((value) << PAC_STATUSB_NVMCTRL_Pos))
#define PAC_STATUSB_MTB_Pos                   _U_(3)                                               /**< (PAC_STATUSB) MTB APB Protect Enable Position */
#define PAC_STATUSB_MTB_Msk                   (_U_(0x1) << PAC_STATUSB_MTB_Pos)                    /**< (PAC_STATUSB) MTB APB Protect Enable Mask */
#define PAC_STATUSB_MTB(value)                (PAC_STATUSB_MTB_Msk & ((value) << PAC_STATUSB_MTB_Pos))
#define PAC_STATUSB_Msk                       _U_(0x0000000F)                                      /**< (PAC_STATUSB) Register Mask  */


/* -------- PAC_STATUSC : (PAC Offset: 0x3C) ( R/ 32) Peripheral write protection status - Bridge C -------- */
#define PAC_STATUSC_RESETVALUE                _U_(0x00)                                            /**<  (PAC_STATUSC) Peripheral write protection status - Bridge C  Reset Value */

#define PAC_STATUSC_SERCOM0_Pos               _U_(0)                                               /**< (PAC_STATUSC) SERCOM0 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM0_Msk               (_U_(0x1) << PAC_STATUSC_SERCOM0_Pos)                /**< (PAC_STATUSC) SERCOM0 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM0(value)            (PAC_STATUSC_SERCOM0_Msk & ((value) << PAC_STATUSC_SERCOM0_Pos))
#define PAC_STATUSC_SERCOM1_Pos               _U_(1)                                               /**< (PAC_STATUSC) SERCOM1 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM1_Msk               (_U_(0x1) << PAC_STATUSC_SERCOM1_Pos)                /**< (PAC_STATUSC) SERCOM1 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM1(value)            (PAC_STATUSC_SERCOM1_Msk & ((value) << PAC_STATUSC_SERCOM1_Pos))
#define PAC_STATUSC_SERCOM2_Pos               _U_(2)                                               /**< (PAC_STATUSC) SERCOM2 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM2_Msk               (_U_(0x1) << PAC_STATUSC_SERCOM2_Pos)                /**< (PAC_STATUSC) SERCOM2 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM2(value)            (PAC_STATUSC_SERCOM2_Msk & ((value) << PAC_STATUSC_SERCOM2_Pos))
#define PAC_STATUSC_SERCOM3_Pos               _U_(3)                                               /**< (PAC_STATUSC) SERCOM3 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM3_Msk               (_U_(0x1) << PAC_STATUSC_SERCOM3_Pos)                /**< (PAC_STATUSC) SERCOM3 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM3(value)            (PAC_STATUSC_SERCOM3_Msk & ((value) << PAC_STATUSC_SERCOM3_Pos))
#define PAC_STATUSC_SERCOM4_Pos               _U_(4)                                               /**< (PAC_STATUSC) SERCOM4 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM4_Msk               (_U_(0x1) << PAC_STATUSC_SERCOM4_Pos)                /**< (PAC_STATUSC) SERCOM4 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM4(value)            (PAC_STATUSC_SERCOM4_Msk & ((value) << PAC_STATUSC_SERCOM4_Pos))
#define PAC_STATUSC_TCC0_Pos                  _U_(5)                                               /**< (PAC_STATUSC) TCC0 APB Protect Enable Position */
#define PAC_STATUSC_TCC0_Msk                  (_U_(0x1) << PAC_STATUSC_TCC0_Pos)                   /**< (PAC_STATUSC) TCC0 APB Protect Enable Mask */
#define PAC_STATUSC_TCC0(value)               (PAC_STATUSC_TCC0_Msk & ((value) << PAC_STATUSC_TCC0_Pos))
#define PAC_STATUSC_TCC1_Pos                  _U_(6)                                               /**< (PAC_STATUSC) TCC1 APB Protect Enable Position */
#define PAC_STATUSC_TCC1_Msk                  (_U_(0x1) << PAC_STATUSC_TCC1_Pos)                   /**< (PAC_STATUSC) TCC1 APB Protect Enable Mask */
#define PAC_STATUSC_TCC1(value)               (PAC_STATUSC_TCC1_Msk & ((value) << PAC_STATUSC_TCC1_Pos))
#define PAC_STATUSC_TCC2_Pos                  _U_(7)                                               /**< (PAC_STATUSC) TCC2 APB Protect Enable Position */
#define PAC_STATUSC_TCC2_Msk                  (_U_(0x1) << PAC_STATUSC_TCC2_Pos)                   /**< (PAC_STATUSC) TCC2 APB Protect Enable Mask */
#define PAC_STATUSC_TCC2(value)               (PAC_STATUSC_TCC2_Msk & ((value) << PAC_STATUSC_TCC2_Pos))
#define PAC_STATUSC_TC0_Pos                   _U_(8)                                               /**< (PAC_STATUSC) TC0 APB Protect Enable Position */
#define PAC_STATUSC_TC0_Msk                   (_U_(0x1) << PAC_STATUSC_TC0_Pos)                    /**< (PAC_STATUSC) TC0 APB Protect Enable Mask */
#define PAC_STATUSC_TC0(value)                (PAC_STATUSC_TC0_Msk & ((value) << PAC_STATUSC_TC0_Pos))
#define PAC_STATUSC_TC1_Pos                   _U_(9)                                               /**< (PAC_STATUSC) TC1 APB Protect Enable Position */
#define PAC_STATUSC_TC1_Msk                   (_U_(0x1) << PAC_STATUSC_TC1_Pos)                    /**< (PAC_STATUSC) TC1 APB Protect Enable Mask */
#define PAC_STATUSC_TC1(value)                (PAC_STATUSC_TC1_Msk & ((value) << PAC_STATUSC_TC1_Pos))
#define PAC_STATUSC_TC2_Pos                   _U_(10)                                              /**< (PAC_STATUSC) TC2 APB Protect Enable Position */
#define PAC_STATUSC_TC2_Msk                   (_U_(0x1) << PAC_STATUSC_TC2_Pos)                    /**< (PAC_STATUSC) TC2 APB Protect Enable Mask */
#define PAC_STATUSC_TC2(value)                (PAC_STATUSC_TC2_Msk & ((value) << PAC_STATUSC_TC2_Pos))
#define PAC_STATUSC_TC3_Pos                   _U_(11)                                              /**< (PAC_STATUSC) TC3 APB Protect Enable Position */
#define PAC_STATUSC_TC3_Msk                   (_U_(0x1) << PAC_STATUSC_TC3_Pos)                    /**< (PAC_STATUSC) TC3 APB Protect Enable Mask */
#define PAC_STATUSC_TC3(value)                (PAC_STATUSC_TC3_Msk & ((value) << PAC_STATUSC_TC3_Pos))
#define PAC_STATUSC_DAC_Pos                   _U_(12)                                              /**< (PAC_STATUSC) DAC APB Protect Enable Position */
#define PAC_STATUSC_DAC_Msk                   (_U_(0x1) << PAC_STATUSC_DAC_Pos)                    /**< (PAC_STATUSC) DAC APB Protect Enable Mask */
#define PAC_STATUSC_DAC(value)                (PAC_STATUSC_DAC_Msk & ((value) << PAC_STATUSC_DAC_Pos))
#define PAC_STATUSC_AES_Pos                   _U_(13)                                              /**< (PAC_STATUSC) AES APB Protect Enable Position */
#define PAC_STATUSC_AES_Msk                   (_U_(0x1) << PAC_STATUSC_AES_Pos)                    /**< (PAC_STATUSC) AES APB Protect Enable Mask */
#define PAC_STATUSC_AES(value)                (PAC_STATUSC_AES_Msk & ((value) << PAC_STATUSC_AES_Pos))
#define PAC_STATUSC_TRNG_Pos                  _U_(14)                                              /**< (PAC_STATUSC) TRNG APB Protect Enable Position */
#define PAC_STATUSC_TRNG_Msk                  (_U_(0x1) << PAC_STATUSC_TRNG_Pos)                   /**< (PAC_STATUSC) TRNG APB Protect Enable Mask */
#define PAC_STATUSC_TRNG(value)               (PAC_STATUSC_TRNG_Msk & ((value) << PAC_STATUSC_TRNG_Pos))
#define PAC_STATUSC_Msk                       _U_(0x00007FFF)                                      /**< (PAC_STATUSC) Register Mask  */

#define PAC_STATUSC_SERCOM_Pos                _U_(0)                                               /**< (PAC_STATUSC Position) SERCOMx APB Protect Enable */
#define PAC_STATUSC_SERCOM_Msk                (_U_(0x1F) << PAC_STATUSC_SERCOM_Pos)                /**< (PAC_STATUSC Mask) SERCOM */
#define PAC_STATUSC_SERCOM(value)             (PAC_STATUSC_SERCOM_Msk & ((value) << PAC_STATUSC_SERCOM_Pos)) 
#define PAC_STATUSC_TCC_Pos                   _U_(5)                                               /**< (PAC_STATUSC Position) TCCx APB Protect Enable */
#define PAC_STATUSC_TCC_Msk                   (_U_(0x7) << PAC_STATUSC_TCC_Pos)                    /**< (PAC_STATUSC Mask) TCC */
#define PAC_STATUSC_TCC(value)                (PAC_STATUSC_TCC_Msk & ((value) << PAC_STATUSC_TCC_Pos)) 
#define PAC_STATUSC_TC_Pos                    _U_(8)                                               /**< (PAC_STATUSC Position) TCx APB Protect Enable */
#define PAC_STATUSC_TC_Msk                    (_U_(0xF) << PAC_STATUSC_TC_Pos)                     /**< (PAC_STATUSC Mask) TC */
#define PAC_STATUSC_TC(value)                 (PAC_STATUSC_TC_Msk & ((value) << PAC_STATUSC_TC_Pos)) 

/* -------- PAC_STATUSD : (PAC Offset: 0x40) ( R/ 32) Peripheral write protection status - Bridge D -------- */
#define PAC_STATUSD_RESETVALUE                _U_(0x00)                                            /**<  (PAC_STATUSD) Peripheral write protection status - Bridge D  Reset Value */

#define PAC_STATUSD_EVSYS_Pos                 _U_(0)                                               /**< (PAC_STATUSD) EVSYS APB Protect Enable Position */
#define PAC_STATUSD_EVSYS_Msk                 (_U_(0x1) << PAC_STATUSD_EVSYS_Pos)                  /**< (PAC_STATUSD) EVSYS APB Protect Enable Mask */
#define PAC_STATUSD_EVSYS(value)              (PAC_STATUSD_EVSYS_Msk & ((value) << PAC_STATUSD_EVSYS_Pos))
#define PAC_STATUSD_SERCOM5_Pos               _U_(1)                                               /**< (PAC_STATUSD) SERCOM5 APB Protect Enable Position */
#define PAC_STATUSD_SERCOM5_Msk               (_U_(0x1) << PAC_STATUSD_SERCOM5_Pos)                /**< (PAC_STATUSD) SERCOM5 APB Protect Enable Mask */
#define PAC_STATUSD_SERCOM5(value)            (PAC_STATUSD_SERCOM5_Msk & ((value) << PAC_STATUSD_SERCOM5_Pos))
#define PAC_STATUSD_TC4_Pos                   _U_(2)                                               /**< (PAC_STATUSD) TC4 APB Protect Enable Position */
#define PAC_STATUSD_TC4_Msk                   (_U_(0x1) << PAC_STATUSD_TC4_Pos)                    /**< (PAC_STATUSD) TC4 APB Protect Enable Mask */
#define PAC_STATUSD_TC4(value)                (PAC_STATUSD_TC4_Msk & ((value) << PAC_STATUSD_TC4_Pos))
#define PAC_STATUSD_ADC_Pos                   _U_(3)                                               /**< (PAC_STATUSD) ADC APB Protect Enable Position */
#define PAC_STATUSD_ADC_Msk                   (_U_(0x1) << PAC_STATUSD_ADC_Pos)                    /**< (PAC_STATUSD) ADC APB Protect Enable Mask */
#define PAC_STATUSD_ADC(value)                (PAC_STATUSD_ADC_Msk & ((value) << PAC_STATUSD_ADC_Pos))
#define PAC_STATUSD_AC_Pos                    _U_(4)                                               /**< (PAC_STATUSD) AC APB Protect Enable Position */
#define PAC_STATUSD_AC_Msk                    (_U_(0x1) << PAC_STATUSD_AC_Pos)                     /**< (PAC_STATUSD) AC APB Protect Enable Mask */
#define PAC_STATUSD_AC(value)                 (PAC_STATUSD_AC_Msk & ((value) << PAC_STATUSD_AC_Pos))
#define PAC_STATUSD_PTC_Pos                   _U_(5)                                               /**< (PAC_STATUSD) PTC APB Protect Enable Position */
#define PAC_STATUSD_PTC_Msk                   (_U_(0x1) << PAC_STATUSD_PTC_Pos)                    /**< (PAC_STATUSD) PTC APB Protect Enable Mask */
#define PAC_STATUSD_PTC(value)                (PAC_STATUSD_PTC_Msk & ((value) << PAC_STATUSD_PTC_Pos))
#define PAC_STATUSD_OPAMP_Pos                 _U_(6)                                               /**< (PAC_STATUSD) OPAMP APB Protect Enable Position */
#define PAC_STATUSD_OPAMP_Msk                 (_U_(0x1) << PAC_STATUSD_OPAMP_Pos)                  /**< (PAC_STATUSD) OPAMP APB Protect Enable Mask */
#define PAC_STATUSD_OPAMP(value)              (PAC_STATUSD_OPAMP_Msk & ((value) << PAC_STATUSD_OPAMP_Pos))
#define PAC_STATUSD_CCL_Pos                   _U_(7)                                               /**< (PAC_STATUSD) CCL APB Protect Enable Position */
#define PAC_STATUSD_CCL_Msk                   (_U_(0x1) << PAC_STATUSD_CCL_Pos)                    /**< (PAC_STATUSD) CCL APB Protect Enable Mask */
#define PAC_STATUSD_CCL(value)                (PAC_STATUSD_CCL_Msk & ((value) << PAC_STATUSD_CCL_Pos))
#define PAC_STATUSD_Msk                       _U_(0x000000FF)                                      /**< (PAC_STATUSD) Register Mask  */

#define PAC_STATUSD_SERCOM_Pos                _U_(1)                                               /**< (PAC_STATUSD Position) SERCOM5 APB Protect Enable */
#define PAC_STATUSD_SERCOM_Msk                (_U_(0x1) << PAC_STATUSD_SERCOM_Pos)                 /**< (PAC_STATUSD Mask) SERCOM */
#define PAC_STATUSD_SERCOM(value)             (PAC_STATUSD_SERCOM_Msk & ((value) << PAC_STATUSD_SERCOM_Pos)) 
#define PAC_STATUSD_TC_Pos                    _U_(2)                                               /**< (PAC_STATUSD Position) TC4 APB Protect Enable */
#define PAC_STATUSD_TC_Msk                    (_U_(0x1) << PAC_STATUSD_TC_Pos)                     /**< (PAC_STATUSD Mask) TC */
#define PAC_STATUSD_TC(value)                 (PAC_STATUSD_TC_Msk & ((value) << PAC_STATUSD_TC_Pos)) 

/* -------- PAC_STATUSE : (PAC Offset: 0x44) ( R/ 32) Peripheral write protection status - Bridge E -------- */
#define PAC_STATUSE_RESETVALUE                _U_(0x00)                                            /**<  (PAC_STATUSE) Peripheral write protection status - Bridge E  Reset Value */

#define PAC_STATUSE_PAC_Pos                   _U_(0)                                               /**< (PAC_STATUSE) PAC APB Protect Enable Position */
#define PAC_STATUSE_PAC_Msk                   (_U_(0x1) << PAC_STATUSE_PAC_Pos)                    /**< (PAC_STATUSE) PAC APB Protect Enable Mask */
#define PAC_STATUSE_PAC(value)                (PAC_STATUSE_PAC_Msk & ((value) << PAC_STATUSE_PAC_Pos))
#define PAC_STATUSE_DMAC_Pos                  _U_(1)                                               /**< (PAC_STATUSE) DMAC APB Protect Enable Position */
#define PAC_STATUSE_DMAC_Msk                  (_U_(0x1) << PAC_STATUSE_DMAC_Pos)                   /**< (PAC_STATUSE) DMAC APB Protect Enable Mask */
#define PAC_STATUSE_DMAC(value)               (PAC_STATUSE_DMAC_Msk & ((value) << PAC_STATUSE_DMAC_Pos))
#define PAC_STATUSE_Msk                       _U_(0x00000003)                                      /**< (PAC_STATUSE) Register Mask  */


/** \brief PAC register offsets definitions */
#define PAC_WRCTRL_REG_OFST            (0x00)              /**< (PAC_WRCTRL) Write control Offset */
#define PAC_EVCTRL_REG_OFST            (0x04)              /**< (PAC_EVCTRL) Event control Offset */
#define PAC_INTENCLR_REG_OFST          (0x08)              /**< (PAC_INTENCLR) Interrupt enable clear Offset */
#define PAC_INTENSET_REG_OFST          (0x09)              /**< (PAC_INTENSET) Interrupt enable set Offset */
#define PAC_INTFLAGAHB_REG_OFST        (0x10)              /**< (PAC_INTFLAGAHB) Bridge interrupt flag status Offset */
#define PAC_INTFLAGA_REG_OFST          (0x14)              /**< (PAC_INTFLAGA) Peripheral interrupt flag status - Bridge A Offset */
#define PAC_INTFLAGB_REG_OFST          (0x18)              /**< (PAC_INTFLAGB) Peripheral interrupt flag status - Bridge B Offset */
#define PAC_INTFLAGC_REG_OFST          (0x1C)              /**< (PAC_INTFLAGC) Peripheral interrupt flag status - Bridge C Offset */
#define PAC_INTFLAGD_REG_OFST          (0x20)              /**< (PAC_INTFLAGD) Peripheral interrupt flag status - Bridge D Offset */
#define PAC_INTFLAGE_REG_OFST          (0x24)              /**< (PAC_INTFLAGE) Peripheral interrupt flag status - Bridge E Offset */
#define PAC_STATUSA_REG_OFST           (0x34)              /**< (PAC_STATUSA) Peripheral write protection status - Bridge A Offset */
#define PAC_STATUSB_REG_OFST           (0x38)              /**< (PAC_STATUSB) Peripheral write protection status - Bridge B Offset */
#define PAC_STATUSC_REG_OFST           (0x3C)              /**< (PAC_STATUSC) Peripheral write protection status - Bridge C Offset */
#define PAC_STATUSD_REG_OFST           (0x40)              /**< (PAC_STATUSD) Peripheral write protection status - Bridge D Offset */
#define PAC_STATUSE_REG_OFST           (0x44)              /**< (PAC_STATUSE) Peripheral write protection status - Bridge E Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PAC register API structure */
typedef struct
{  /* Peripheral Access Controller */
  __IO  uint32_t                       PAC_WRCTRL;         /**< Offset: 0x00 (R/W  32) Write control */
  __IO  uint8_t                        PAC_EVCTRL;         /**< Offset: 0x04 (R/W  8) Event control */
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint8_t                        PAC_INTENCLR;       /**< Offset: 0x08 (R/W  8) Interrupt enable clear */
  __IO  uint8_t                        PAC_INTENSET;       /**< Offset: 0x09 (R/W  8) Interrupt enable set */
  __I   uint8_t                        Reserved2[0x06];
  __IO  uint32_t                       PAC_INTFLAGAHB;     /**< Offset: 0x10 (R/W  32) Bridge interrupt flag status */
  __IO  uint32_t                       PAC_INTFLAGA;       /**< Offset: 0x14 (R/W  32) Peripheral interrupt flag status - Bridge A */
  __IO  uint32_t                       PAC_INTFLAGB;       /**< Offset: 0x18 (R/W  32) Peripheral interrupt flag status - Bridge B */
  __IO  uint32_t                       PAC_INTFLAGC;       /**< Offset: 0x1C (R/W  32) Peripheral interrupt flag status - Bridge C */
  __IO  uint32_t                       PAC_INTFLAGD;       /**< Offset: 0x20 (R/W  32) Peripheral interrupt flag status - Bridge D */
  __IO  uint32_t                       PAC_INTFLAGE;       /**< Offset: 0x24 (R/W  32) Peripheral interrupt flag status - Bridge E */
  __I   uint8_t                        Reserved3[0x0C];
  __I   uint32_t                       PAC_STATUSA;        /**< Offset: 0x34 (R/   32) Peripheral write protection status - Bridge A */
  __I   uint32_t                       PAC_STATUSB;        /**< Offset: 0x38 (R/   32) Peripheral write protection status - Bridge B */
  __I   uint32_t                       PAC_STATUSC;        /**< Offset: 0x3C (R/   32) Peripheral write protection status - Bridge C */
  __I   uint32_t                       PAC_STATUSD;        /**< Offset: 0x40 (R/   32) Peripheral write protection status - Bridge D */
  __I   uint32_t                       PAC_STATUSE;        /**< Offset: 0x44 (R/   32) Peripheral write protection status - Bridge E */
} pac_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAML21_PAC_COMPONENT_H_ */
