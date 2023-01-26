/*
 * Component description for EIC
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
#ifndef _SAMA7G_EIC_COMPONENT_H_
#define _SAMA7G_EIC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EIC                                          */
/* ************************************************************************** */

/* -------- EIC_GFCS : (EIC Offset: 0x00) ( R/ 32) Glitch Filter Configuration Status Register -------- */
#define EIC_GFCS_RESETVALUE                   _U_(0x00)                                            /**<  (EIC_GFCS) Glitch Filter Configuration Status Register  Reset Value */

#define EIC_GFCS_RDY0_Pos                     _U_(0)                                               /**< (EIC_GFCS) Filter 0 Configuration Ready Position */
#define EIC_GFCS_RDY0_Msk                     (_U_(0x1) << EIC_GFCS_RDY0_Pos)                      /**< (EIC_GFCS) Filter 0 Configuration Ready Mask */
#define EIC_GFCS_RDY0(value)                  (EIC_GFCS_RDY0_Msk & ((value) << EIC_GFCS_RDY0_Pos))
#define   EIC_GFCS_RDY0_0_Val                 _U_(0x0)                                             /**< (EIC_GFCS) The interrupt line x glitch filter is not yet ready for use due to a previous write to IP_Acronym_SCFGxR, or the glitch filter is not implemented for this interrupt line. The glitch filter must not be reprogrammed in EIC_SCFGxR.  */
#define   EIC_GFCS_RDY0_1_Val                 _U_(0x1)                                             /**< (EIC_GFCS) The interrupt line x glitch filter configuration is done and the glitch filter is active. The glitch filter can be programmed in EIC_SCFGxR.  */
#define EIC_GFCS_RDY0_0                       (EIC_GFCS_RDY0_0_Val << EIC_GFCS_RDY0_Pos)           /**< (EIC_GFCS) The interrupt line x glitch filter is not yet ready for use due to a previous write to IP_Acronym_SCFGxR, or the glitch filter is not implemented for this interrupt line. The glitch filter must not be reprogrammed in EIC_SCFGxR. Position  */
#define EIC_GFCS_RDY0_1                       (EIC_GFCS_RDY0_1_Val << EIC_GFCS_RDY0_Pos)           /**< (EIC_GFCS) The interrupt line x glitch filter configuration is done and the glitch filter is active. The glitch filter can be programmed in EIC_SCFGxR. Position  */
#define EIC_GFCS_RDY1_Pos                     _U_(1)                                               /**< (EIC_GFCS) Filter 1 Configuration Ready Position */
#define EIC_GFCS_RDY1_Msk                     (_U_(0x1) << EIC_GFCS_RDY1_Pos)                      /**< (EIC_GFCS) Filter 1 Configuration Ready Mask */
#define EIC_GFCS_RDY1(value)                  (EIC_GFCS_RDY1_Msk & ((value) << EIC_GFCS_RDY1_Pos))
#define   EIC_GFCS_RDY1_0_Val                 _U_(0x0)                                             /**< (EIC_GFCS) The interrupt line x glitch filter is not yet ready for use due to a previous write to IP_Acronym_SCFGxR, or the glitch filter is not implemented for this interrupt line. The glitch filter must not be reprogrammed in EIC_SCFGxR.  */
#define   EIC_GFCS_RDY1_1_Val                 _U_(0x1)                                             /**< (EIC_GFCS) The interrupt line x glitch filter configuration is done and the glitch filter is active. The glitch filter can be programmed in EIC_SCFGxR.  */
#define EIC_GFCS_RDY1_0                       (EIC_GFCS_RDY1_0_Val << EIC_GFCS_RDY1_Pos)           /**< (EIC_GFCS) The interrupt line x glitch filter is not yet ready for use due to a previous write to IP_Acronym_SCFGxR, or the glitch filter is not implemented for this interrupt line. The glitch filter must not be reprogrammed in EIC_SCFGxR. Position  */
#define EIC_GFCS_RDY1_1                       (EIC_GFCS_RDY1_1_Val << EIC_GFCS_RDY1_Pos)           /**< (EIC_GFCS) The interrupt line x glitch filter configuration is done and the glitch filter is active. The glitch filter can be programmed in EIC_SCFGxR. Position  */
#define EIC_GFCS_Msk                          _U_(0x00000003)                                      /**< (EIC_GFCS) Register Mask  */

#define EIC_GFCS_RDY_Pos                      _U_(0)                                               /**< (EIC_GFCS Position) Filter x Configuration Ready */
#define EIC_GFCS_RDY_Msk                      (_U_(0x3) << EIC_GFCS_RDY_Pos)                       /**< (EIC_GFCS Mask) RDY */
#define EIC_GFCS_RDY(value)                   (EIC_GFCS_RDY_Msk & ((value) << EIC_GFCS_RDY_Pos))   

/* -------- EIC_SCFG0R : (EIC Offset: 0x04) (R/W 32) Source Configuration Register 0 -------- */
#define EIC_SCFG0R_GFSEL_Pos                  _U_(0)                                               /**< (EIC_SCFG0R) Glitch Filter Selector Position */
#define EIC_SCFG0R_GFSEL_Msk                  (_U_(0x3) << EIC_SCFG0R_GFSEL_Pos)                   /**< (EIC_SCFG0R) Glitch Filter Selector Mask */
#define EIC_SCFG0R_GFSEL(value)               (EIC_SCFG0R_GFSEL_Msk & ((value) << EIC_SCFG0R_GFSEL_Pos))
#define EIC_SCFG0R_GFEN_Pos                   _U_(4)                                               /**< (EIC_SCFG0R) Glitch Filter Enable Position */
#define EIC_SCFG0R_GFEN_Msk                   (_U_(0x1) << EIC_SCFG0R_GFEN_Pos)                    /**< (EIC_SCFG0R) Glitch Filter Enable Mask */
#define EIC_SCFG0R_GFEN(value)                (EIC_SCFG0R_GFEN_Msk & ((value) << EIC_SCFG0R_GFEN_Pos))
#define   EIC_SCFG0R_GFEN_0_Val               _U_(0x0)                                             /**< (EIC_SCFG0R) The glitch filter is disabled or not implemented for EIC source x. Any source x change is forwarded as is to the source detection logic.  */
#define   EIC_SCFG0R_GFEN_1_Val               _U_(0x1)                                             /**< (EIC_SCFG0R) The glitch filter is enabled for EIC source x. The EIC source x glitches are filtered according to Section 7.1 "Interrupt Line Characteristics".  */
#define EIC_SCFG0R_GFEN_0                     (EIC_SCFG0R_GFEN_0_Val << EIC_SCFG0R_GFEN_Pos)       /**< (EIC_SCFG0R) The glitch filter is disabled or not implemented for EIC source x. Any source x change is forwarded as is to the source detection logic. Position  */
#define EIC_SCFG0R_GFEN_1                     (EIC_SCFG0R_GFEN_1_Val << EIC_SCFG0R_GFEN_Pos)       /**< (EIC_SCFG0R) The glitch filter is enabled for EIC source x. The EIC source x glitches are filtered according to Section 7.1 "Interrupt Line Characteristics". Position  */
#define EIC_SCFG0R_POL_Pos                    _U_(8)                                               /**< (EIC_SCFG0R) Polarity Position */
#define EIC_SCFG0R_POL_Msk                    (_U_(0x1) << EIC_SCFG0R_POL_Pos)                     /**< (EIC_SCFG0R) Polarity Mask */
#define EIC_SCFG0R_POL(value)                 (EIC_SCFG0R_POL_Msk & ((value) << EIC_SCFG0R_POL_Pos))
#define   EIC_SCFG0R_POL_0_Val                _U_(0x0)                                             /**< (EIC_SCFG0R) The EIC source x is active low if LVL is set, or active on falling edge if LVL is cleared.  */
#define   EIC_SCFG0R_POL_1_Val                _U_(0x1)                                             /**< (EIC_SCFG0R) The EIC source x is active high if LVL is set, or active on rising edge if LVL is cleared.  */
#define EIC_SCFG0R_POL_0                      (EIC_SCFG0R_POL_0_Val << EIC_SCFG0R_POL_Pos)         /**< (EIC_SCFG0R) The EIC source x is active low if LVL is set, or active on falling edge if LVL is cleared. Position  */
#define EIC_SCFG0R_POL_1                      (EIC_SCFG0R_POL_1_Val << EIC_SCFG0R_POL_Pos)         /**< (EIC_SCFG0R) The EIC source x is active high if LVL is set, or active on rising edge if LVL is cleared. Position  */
#define EIC_SCFG0R_LVL_Pos                    _U_(9)                                               /**< (EIC_SCFG0R) Level Detection Position */
#define EIC_SCFG0R_LVL_Msk                    (_U_(0x1) << EIC_SCFG0R_LVL_Pos)                     /**< (EIC_SCFG0R) Level Detection Mask */
#define EIC_SCFG0R_LVL(value)                 (EIC_SCFG0R_LVL_Msk & ((value) << EIC_SCFG0R_LVL_Pos))
#define   EIC_SCFG0R_LVL_0_Val                _U_(0x0)                                             /**< (EIC_SCFG0R) The EIC source x interrupt status is set on a valid source edge.  */
#define   EIC_SCFG0R_LVL_1_Val                _U_(0x1)                                             /**< (EIC_SCFG0R) The EIC source x interrupt status is set on a valid source level.  */
#define EIC_SCFG0R_LVL_0                      (EIC_SCFG0R_LVL_0_Val << EIC_SCFG0R_LVL_Pos)         /**< (EIC_SCFG0R) The EIC source x interrupt status is set on a valid source edge. Position  */
#define EIC_SCFG0R_LVL_1                      (EIC_SCFG0R_LVL_1_Val << EIC_SCFG0R_LVL_Pos)         /**< (EIC_SCFG0R) The EIC source x interrupt status is set on a valid source level. Position  */
#define EIC_SCFG0R_EN_Pos                     _U_(16)                                              /**< (EIC_SCFG0R) Source Enable Position */
#define EIC_SCFG0R_EN_Msk                     (_U_(0x1) << EIC_SCFG0R_EN_Pos)                      /**< (EIC_SCFG0R) Source Enable Mask */
#define EIC_SCFG0R_EN(value)                  (EIC_SCFG0R_EN_Msk & ((value) << EIC_SCFG0R_EN_Pos))
#define   EIC_SCFG0R_EN_0_Val                 _U_(0x0)                                             /**< (EIC_SCFG0R) The EIC source x is disabled. Any source edge or level detection is discarded.  */
#define   EIC_SCFG0R_EN_1_Val                 _U_(0x1)                                             /**< (EIC_SCFG0R) The EIC source x is enabled.  */
#define EIC_SCFG0R_EN_0                       (EIC_SCFG0R_EN_0_Val << EIC_SCFG0R_EN_Pos)           /**< (EIC_SCFG0R) The EIC source x is disabled. Any source edge or level detection is discarded. Position  */
#define EIC_SCFG0R_EN_1                       (EIC_SCFG0R_EN_1_Val << EIC_SCFG0R_EN_Pos)           /**< (EIC_SCFG0R) The EIC source x is enabled. Position  */
#define EIC_SCFG0R_FRZ_Pos                    _U_(31)                                              /**< (EIC_SCFG0R) Interrupt Line Freeze Position */
#define EIC_SCFG0R_FRZ_Msk                    (_U_(0x1) << EIC_SCFG0R_FRZ_Pos)                     /**< (EIC_SCFG0R) Interrupt Line Freeze Mask */
#define EIC_SCFG0R_FRZ(value)                 (EIC_SCFG0R_FRZ_Msk & ((value) << EIC_SCFG0R_FRZ_Pos))
#define   EIC_SCFG0R_FRZ_0_Val                _U_(0x0)                                             /**< (EIC_SCFG0R) No effect.  */
#define   EIC_SCFG0R_FRZ_1_Val                _U_(0x1)                                             /**< (EIC_SCFG0R) EIC_SCFGxR is frozen until hardware reset.  */
#define EIC_SCFG0R_FRZ_0                      (EIC_SCFG0R_FRZ_0_Val << EIC_SCFG0R_FRZ_Pos)         /**< (EIC_SCFG0R) No effect. Position  */
#define EIC_SCFG0R_FRZ_1                      (EIC_SCFG0R_FRZ_1_Val << EIC_SCFG0R_FRZ_Pos)         /**< (EIC_SCFG0R) EIC_SCFGxR is frozen until hardware reset. Position  */
#define EIC_SCFG0R_Msk                        _U_(0x80010313)                                      /**< (EIC_SCFG0R) Register Mask  */


/* -------- EIC_SCFG1R : (EIC Offset: 0x08) (R/W 32) Source Configuration Register 1 -------- */
#define EIC_SCFG1R_GFSEL_Pos                  _U_(0)                                               /**< (EIC_SCFG1R) Glitch Filter Selector Position */
#define EIC_SCFG1R_GFSEL_Msk                  (_U_(0x3) << EIC_SCFG1R_GFSEL_Pos)                   /**< (EIC_SCFG1R) Glitch Filter Selector Mask */
#define EIC_SCFG1R_GFSEL(value)               (EIC_SCFG1R_GFSEL_Msk & ((value) << EIC_SCFG1R_GFSEL_Pos))
#define EIC_SCFG1R_GFEN_Pos                   _U_(4)                                               /**< (EIC_SCFG1R) Glitch Filter Enable Position */
#define EIC_SCFG1R_GFEN_Msk                   (_U_(0x1) << EIC_SCFG1R_GFEN_Pos)                    /**< (EIC_SCFG1R) Glitch Filter Enable Mask */
#define EIC_SCFG1R_GFEN(value)                (EIC_SCFG1R_GFEN_Msk & ((value) << EIC_SCFG1R_GFEN_Pos))
#define   EIC_SCFG1R_GFEN_0_Val               _U_(0x0)                                             /**< (EIC_SCFG1R) The glitch filter is disabled or not implemented for EIC source x. Any source x change is forwarded as is to the source detection logic.  */
#define   EIC_SCFG1R_GFEN_1_Val               _U_(0x1)                                             /**< (EIC_SCFG1R) The glitch filter is enabled for EIC source x. The EIC source x glitches are filtered according to Section 7.1 "Interrupt Line Characteristics".  */
#define EIC_SCFG1R_GFEN_0                     (EIC_SCFG1R_GFEN_0_Val << EIC_SCFG1R_GFEN_Pos)       /**< (EIC_SCFG1R) The glitch filter is disabled or not implemented for EIC source x. Any source x change is forwarded as is to the source detection logic. Position  */
#define EIC_SCFG1R_GFEN_1                     (EIC_SCFG1R_GFEN_1_Val << EIC_SCFG1R_GFEN_Pos)       /**< (EIC_SCFG1R) The glitch filter is enabled for EIC source x. The EIC source x glitches are filtered according to Section 7.1 "Interrupt Line Characteristics". Position  */
#define EIC_SCFG1R_POL_Pos                    _U_(8)                                               /**< (EIC_SCFG1R) Polarity Position */
#define EIC_SCFG1R_POL_Msk                    (_U_(0x1) << EIC_SCFG1R_POL_Pos)                     /**< (EIC_SCFG1R) Polarity Mask */
#define EIC_SCFG1R_POL(value)                 (EIC_SCFG1R_POL_Msk & ((value) << EIC_SCFG1R_POL_Pos))
#define   EIC_SCFG1R_POL_0_Val                _U_(0x0)                                             /**< (EIC_SCFG1R) The EIC source x is active low if LVL is set, or active on falling edge if LVL is cleared.  */
#define   EIC_SCFG1R_POL_1_Val                _U_(0x1)                                             /**< (EIC_SCFG1R) The EIC source x is active high if LVL is set, or active on rising edge if LVL is cleared.  */
#define EIC_SCFG1R_POL_0                      (EIC_SCFG1R_POL_0_Val << EIC_SCFG1R_POL_Pos)         /**< (EIC_SCFG1R) The EIC source x is active low if LVL is set, or active on falling edge if LVL is cleared. Position  */
#define EIC_SCFG1R_POL_1                      (EIC_SCFG1R_POL_1_Val << EIC_SCFG1R_POL_Pos)         /**< (EIC_SCFG1R) The EIC source x is active high if LVL is set, or active on rising edge if LVL is cleared. Position  */
#define EIC_SCFG1R_LVL_Pos                    _U_(9)                                               /**< (EIC_SCFG1R) Level Detection Position */
#define EIC_SCFG1R_LVL_Msk                    (_U_(0x1) << EIC_SCFG1R_LVL_Pos)                     /**< (EIC_SCFG1R) Level Detection Mask */
#define EIC_SCFG1R_LVL(value)                 (EIC_SCFG1R_LVL_Msk & ((value) << EIC_SCFG1R_LVL_Pos))
#define   EIC_SCFG1R_LVL_0_Val                _U_(0x0)                                             /**< (EIC_SCFG1R) The EIC source x interrupt status is set on a valid source edge.  */
#define   EIC_SCFG1R_LVL_1_Val                _U_(0x1)                                             /**< (EIC_SCFG1R) The EIC source x interrupt status is set on a valid source level.  */
#define EIC_SCFG1R_LVL_0                      (EIC_SCFG1R_LVL_0_Val << EIC_SCFG1R_LVL_Pos)         /**< (EIC_SCFG1R) The EIC source x interrupt status is set on a valid source edge. Position  */
#define EIC_SCFG1R_LVL_1                      (EIC_SCFG1R_LVL_1_Val << EIC_SCFG1R_LVL_Pos)         /**< (EIC_SCFG1R) The EIC source x interrupt status is set on a valid source level. Position  */
#define EIC_SCFG1R_EN_Pos                     _U_(16)                                              /**< (EIC_SCFG1R) Source Enable Position */
#define EIC_SCFG1R_EN_Msk                     (_U_(0x1) << EIC_SCFG1R_EN_Pos)                      /**< (EIC_SCFG1R) Source Enable Mask */
#define EIC_SCFG1R_EN(value)                  (EIC_SCFG1R_EN_Msk & ((value) << EIC_SCFG1R_EN_Pos))
#define   EIC_SCFG1R_EN_0_Val                 _U_(0x0)                                             /**< (EIC_SCFG1R) The EIC source x is disabled. Any source edge or level detection is discarded.  */
#define   EIC_SCFG1R_EN_1_Val                 _U_(0x1)                                             /**< (EIC_SCFG1R) The EIC source x is enabled.  */
#define EIC_SCFG1R_EN_0                       (EIC_SCFG1R_EN_0_Val << EIC_SCFG1R_EN_Pos)           /**< (EIC_SCFG1R) The EIC source x is disabled. Any source edge or level detection is discarded. Position  */
#define EIC_SCFG1R_EN_1                       (EIC_SCFG1R_EN_1_Val << EIC_SCFG1R_EN_Pos)           /**< (EIC_SCFG1R) The EIC source x is enabled. Position  */
#define EIC_SCFG1R_FRZ_Pos                    _U_(31)                                              /**< (EIC_SCFG1R) Interrupt Line Freeze Position */
#define EIC_SCFG1R_FRZ_Msk                    (_U_(0x1) << EIC_SCFG1R_FRZ_Pos)                     /**< (EIC_SCFG1R) Interrupt Line Freeze Mask */
#define EIC_SCFG1R_FRZ(value)                 (EIC_SCFG1R_FRZ_Msk & ((value) << EIC_SCFG1R_FRZ_Pos))
#define   EIC_SCFG1R_FRZ_0_Val                _U_(0x0)                                             /**< (EIC_SCFG1R) No effect.  */
#define   EIC_SCFG1R_FRZ_1_Val                _U_(0x1)                                             /**< (EIC_SCFG1R) EIC_SCFGxR is frozen until hardware reset.  */
#define EIC_SCFG1R_FRZ_0                      (EIC_SCFG1R_FRZ_0_Val << EIC_SCFG1R_FRZ_Pos)         /**< (EIC_SCFG1R) No effect. Position  */
#define EIC_SCFG1R_FRZ_1                      (EIC_SCFG1R_FRZ_1_Val << EIC_SCFG1R_FRZ_Pos)         /**< (EIC_SCFG1R) EIC_SCFGxR is frozen until hardware reset. Position  */
#define EIC_SCFG1R_Msk                        _U_(0x80010313)                                      /**< (EIC_SCFG1R) Register Mask  */


/* -------- EIC_WPMR : (EIC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define EIC_WPMR_RESETVALUE                   _U_(0x00)                                            /**<  (EIC_WPMR) Write Protection Mode Register  Reset Value */

#define EIC_WPMR_WPCFEN_Pos                   _U_(0)                                               /**< (EIC_WPMR) Write Protection Configuration Enable Position */
#define EIC_WPMR_WPCFEN_Msk                   (_U_(0x1) << EIC_WPMR_WPCFEN_Pos)                    /**< (EIC_WPMR) Write Protection Configuration Enable Mask */
#define EIC_WPMR_WPCFEN(value)                (EIC_WPMR_WPCFEN_Msk & ((value) << EIC_WPMR_WPCFEN_Pos))
#define   EIC_WPMR_WPCFEN_0_Val               _U_(0x0)                                             /**< (EIC_WPMR) Disables the write protection of the configuration registers if WPKEY corresponds to 0x454943 ("EIC" in ASCII).  */
#define   EIC_WPMR_WPCFEN_1_Val               _U_(0x1)                                             /**< (EIC_WPMR) Enables the write protection of the configuration registers if WPKEY corresponds to 0x454943 ("EIC" in ASCII).  */
#define EIC_WPMR_WPCFEN_0                     (EIC_WPMR_WPCFEN_0_Val << EIC_WPMR_WPCFEN_Pos)       /**< (EIC_WPMR) Disables the write protection of the configuration registers if WPKEY corresponds to 0x454943 ("EIC" in ASCII). Position  */
#define EIC_WPMR_WPCFEN_1                     (EIC_WPMR_WPCFEN_1_Val << EIC_WPMR_WPCFEN_Pos)       /**< (EIC_WPMR) Enables the write protection of the configuration registers if WPKEY corresponds to 0x454943 ("EIC" in ASCII). Position  */
#define EIC_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (EIC_WPMR) Write Protection Key Position */
#define EIC_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << EIC_WPMR_WPKEY_Pos)                /**< (EIC_WPMR) Write Protection Key Mask */
#define EIC_WPMR_WPKEY(value)                 (EIC_WPMR_WPKEY_Msk & ((value) << EIC_WPMR_WPKEY_Pos))
#define   EIC_WPMR_WPKEY_PASSWD_Val           _U_(0x454943)                                        /**< (EIC_WPMR) Writing any other value in this field aborts the write operation of the WPCFEN and WPITEN bit. Always reads as 0.  */
#define EIC_WPMR_WPKEY_PASSWD                 (EIC_WPMR_WPKEY_PASSWD_Val << EIC_WPMR_WPKEY_Pos)    /**< (EIC_WPMR) Writing any other value in this field aborts the write operation of the WPCFEN and WPITEN bit. Always reads as 0. Position  */
#define EIC_WPMR_Msk                          _U_(0xFFFFFF01)                                      /**< (EIC_WPMR) Register Mask  */


/* -------- EIC_WPSR : (EIC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define EIC_WPSR_RESETVALUE                   _U_(0x00)                                            /**<  (EIC_WPSR) Write Protection Status Register  Reset Value */

#define EIC_WPSR_WPVS_Pos                     _U_(0)                                               /**< (EIC_WPSR) Write Protection Register Violation Status Position */
#define EIC_WPSR_WPVS_Msk                     (_U_(0x1) << EIC_WPSR_WPVS_Pos)                      /**< (EIC_WPSR) Write Protection Register Violation Status Mask */
#define EIC_WPSR_WPVS(value)                  (EIC_WPSR_WPVS_Msk & ((value) << EIC_WPSR_WPVS_Pos))
#define   EIC_WPSR_WPVS_0_Val                 _U_(0x0)                                             /**< (EIC_WPSR) No write protection violation has occurred since the last read of the EIC_WPSR.  */
#define   EIC_WPSR_WPVS_1_Val                 _U_(0x1)                                             /**< (EIC_WPSR) A write protection violation has occurred since the last read of the EIC_WPSR. The associated violation is reported into field WVSRC.  */
#define EIC_WPSR_WPVS_0                       (EIC_WPSR_WPVS_0_Val << EIC_WPSR_WPVS_Pos)           /**< (EIC_WPSR) No write protection violation has occurred since the last read of the EIC_WPSR. Position  */
#define EIC_WPSR_WPVS_1                       (EIC_WPSR_WPVS_1_Val << EIC_WPSR_WPVS_Pos)           /**< (EIC_WPSR) A write protection violation has occurred since the last read of the EIC_WPSR. The associated violation is reported into field WVSRC. Position  */
#define EIC_WPSR_FZWVS_Pos                    _U_(1)                                               /**< (EIC_WPSR) Frozen Register Write Violation Status Position */
#define EIC_WPSR_FZWVS_Msk                    (_U_(0x1) << EIC_WPSR_FZWVS_Pos)                     /**< (EIC_WPSR) Frozen Register Write Violation Status Mask */
#define EIC_WPSR_FZWVS(value)                 (EIC_WPSR_FZWVS_Msk & ((value) << EIC_WPSR_FZWVS_Pos))
#define   EIC_WPSR_FZWVS_0_Val                _U_(0x0)                                             /**< (EIC_WPSR) No write access violation of a frozen register has occurred since the last read of the EIC_WPSR.  */
#define   EIC_WPSR_FZWVS_1_Val                _U_(0x1)                                             /**< (EIC_WPSR) A write access violation of a frozen register has occurred since the last read of the EIC_WPSR. The associated violation is reported into field WVSRC.  */
#define EIC_WPSR_FZWVS_0                      (EIC_WPSR_FZWVS_0_Val << EIC_WPSR_FZWVS_Pos)         /**< (EIC_WPSR) No write access violation of a frozen register has occurred since the last read of the EIC_WPSR. Position  */
#define EIC_WPSR_FZWVS_1                      (EIC_WPSR_FZWVS_1_Val << EIC_WPSR_FZWVS_Pos)         /**< (EIC_WPSR) A write access violation of a frozen register has occurred since the last read of the EIC_WPSR. The associated violation is reported into field WVSRC. Position  */
#define EIC_WPSR_BSWVS_Pos                    _U_(2)                                               /**< (EIC_WPSR) Busy Register Write Violation Status Position */
#define EIC_WPSR_BSWVS_Msk                    (_U_(0x1) << EIC_WPSR_BSWVS_Pos)                     /**< (EIC_WPSR) Busy Register Write Violation Status Mask */
#define EIC_WPSR_BSWVS(value)                 (EIC_WPSR_BSWVS_Msk & ((value) << EIC_WPSR_BSWVS_Pos))
#define   EIC_WPSR_BSWVS_0_Val                _U_(0x0)                                             /**< (EIC_WPSR) No write access violation of a busy register has occurred since the last read of the EIC_WPSR.  */
#define   EIC_WPSR_BSWVS_1_Val                _U_(0x1)                                             /**< (EIC_WPSR) A write access violation of a busy register has occurred since the last read of the EIC_WPSR. The associated violation is reported into field WVSRC.  */
#define EIC_WPSR_BSWVS_0                      (EIC_WPSR_BSWVS_0_Val << EIC_WPSR_BSWVS_Pos)         /**< (EIC_WPSR) No write access violation of a busy register has occurred since the last read of the EIC_WPSR. Position  */
#define EIC_WPSR_BSWVS_1                      (EIC_WPSR_BSWVS_1_Val << EIC_WPSR_BSWVS_Pos)         /**< (EIC_WPSR) A write access violation of a busy register has occurred since the last read of the EIC_WPSR. The associated violation is reported into field WVSRC. Position  */
#define EIC_WPSR_WVSRC_Pos                    _U_(8)                                               /**< (EIC_WPSR) Write Violation Source Position */
#define EIC_WPSR_WVSRC_Msk                    (_U_(0xFF) << EIC_WPSR_WVSRC_Pos)                    /**< (EIC_WPSR) Write Violation Source Mask */
#define EIC_WPSR_WVSRC(value)                 (EIC_WPSR_WVSRC_Msk & ((value) << EIC_WPSR_WVSRC_Pos))
#define EIC_WPSR_Msk                          _U_(0x0000FF07)                                      /**< (EIC_WPSR) Register Mask  */


/** \brief EIC register offsets definitions */
#define EIC_GFCS_REG_OFST              (0x00)              /**< (EIC_GFCS) Glitch Filter Configuration Status Register Offset */
#define EIC_SCFG0R_REG_OFST            (0x04)              /**< (EIC_SCFG0R) Source Configuration Register 0 Offset */
#define EIC_SCFG1R_REG_OFST            (0x08)              /**< (EIC_SCFG1R) Source Configuration Register 1 Offset */
#define EIC_WPMR_REG_OFST              (0xE4)              /**< (EIC_WPMR) Write Protection Mode Register Offset */
#define EIC_WPSR_REG_OFST              (0xE8)              /**< (EIC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief EIC register API structure */
typedef struct
{  /* External Interrupt Controller */
  __I   uint32_t                       EIC_GFCS;           /**< Offset: 0x00 (R/   32) Glitch Filter Configuration Status Register */
  __IO  uint32_t                       EIC_SCFG0R;         /**< Offset: 0x04 (R/W  32) Source Configuration Register 0 */
  __IO  uint32_t                       EIC_SCFG1R;         /**< Offset: 0x08 (R/W  32) Source Configuration Register 1 */
  __I   uint8_t                        Reserved1[0xD8];
  __IO  uint32_t                       EIC_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       EIC_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} eic_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_EIC_COMPONENT_H_ */
