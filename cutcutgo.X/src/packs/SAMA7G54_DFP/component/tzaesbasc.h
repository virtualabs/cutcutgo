/*
 * Component description for TZAESBASC
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
#ifndef _SAMA7G_TZAESBASC_COMPONENT_H_
#define _SAMA7G_TZAESBASC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TZAESBASC                                    */
/* ************************************************************************** */

/* -------- TZAESBASC_RBAR : (TZAESBASC Offset: 0x00) (R/W 32) Region Base Address  -------- */
#define TZAESBASC_RBAR_RESETVALUE             _U_(0x00)                                            /**<  (TZAESBASC_RBAR) Region Base Address   Reset Value */

#define TZAESBASC_RBAR_BASE_Pos               _U_(0)                                               /**< (TZAESBASC_RBAR) Region Base Address Position */
#define TZAESBASC_RBAR_BASE_Msk               (_U_(0xFFFFFFFF) << TZAESBASC_RBAR_BASE_Pos)         /**< (TZAESBASC_RBAR) Region Base Address Mask */
#define TZAESBASC_RBAR_BASE(value)            (TZAESBASC_RBAR_BASE_Msk & ((value) << TZAESBASC_RBAR_BASE_Pos))
#define TZAESBASC_RBAR_Msk                    _U_(0xFFFFFFFF)                                      /**< (TZAESBASC_RBAR) Register Mask  */


/* -------- TZAESBASC_RTAR : (TZAESBASC Offset: 0x04) (R/W 32) Region Top Address  -------- */
#define TZAESBASC_RTAR_RESETVALUE             _U_(0x00)                                            /**<  (TZAESBASC_RTAR) Region Top Address   Reset Value */

#define TZAESBASC_RTAR_TOP_Pos                _U_(0)                                               /**< (TZAESBASC_RTAR) Region Top Address Position */
#define TZAESBASC_RTAR_TOP_Msk                (_U_(0xFFFFFFFF) << TZAESBASC_RTAR_TOP_Pos)          /**< (TZAESBASC_RTAR) Region Top Address Mask */
#define TZAESBASC_RTAR_TOP(value)             (TZAESBASC_RTAR_TOP_Msk & ((value) << TZAESBASC_RTAR_TOP_Pos))
#define TZAESBASC_RTAR_Msk                    _U_(0xFFFFFFFF)                                      /**< (TZAESBASC_RTAR) Register Mask  */


/* -------- TZAESBASC_RSECR : (TZAESBASC Offset: 0x80) (R/W 32) Region Security -------- */
#define TZAESBASC_RSECR_RESETVALUE            _U_(0x00)                                            /**<  (TZAESBASC_RSECR) Region Security  Reset Value */

#define TZAESBASC_RSECR_SEC0_Pos              _U_(0)                                               /**< (TZAESBASC_RSECR) Region 0 Security Position */
#define TZAESBASC_RSECR_SEC0_Msk              (_U_(0x1) << TZAESBASC_RSECR_SEC0_Pos)               /**< (TZAESBASC_RSECR) Region 0 Security Mask */
#define TZAESBASC_RSECR_SEC0(value)           (TZAESBASC_RSECR_SEC0_Msk & ((value) << TZAESBASC_RSECR_SEC0_Pos))
#define   TZAESBASC_RSECR_SEC0_0_Val          _U_(0x0)                                             /**< (TZAESBASC_RSECR) Region x is secure.  */
#define   TZAESBASC_RSECR_SEC0_1_Val          _U_(0x1)                                             /**< (TZAESBASC_RSECR) Region x is non-secure.  */
#define TZAESBASC_RSECR_SEC0_0                (TZAESBASC_RSECR_SEC0_0_Val << TZAESBASC_RSECR_SEC0_Pos) /**< (TZAESBASC_RSECR) Region x is secure. Position  */
#define TZAESBASC_RSECR_SEC0_1                (TZAESBASC_RSECR_SEC0_1_Val << TZAESBASC_RSECR_SEC0_Pos) /**< (TZAESBASC_RSECR) Region x is non-secure. Position  */
#define TZAESBASC_RSECR_SEC1_Pos              _U_(1)                                               /**< (TZAESBASC_RSECR) Region 1 Security Position */
#define TZAESBASC_RSECR_SEC1_Msk              (_U_(0x1) << TZAESBASC_RSECR_SEC1_Pos)               /**< (TZAESBASC_RSECR) Region 1 Security Mask */
#define TZAESBASC_RSECR_SEC1(value)           (TZAESBASC_RSECR_SEC1_Msk & ((value) << TZAESBASC_RSECR_SEC1_Pos))
#define   TZAESBASC_RSECR_SEC1_0_Val          _U_(0x0)                                             /**< (TZAESBASC_RSECR) Region x is secure.  */
#define   TZAESBASC_RSECR_SEC1_1_Val          _U_(0x1)                                             /**< (TZAESBASC_RSECR) Region x is non-secure.  */
#define TZAESBASC_RSECR_SEC1_0                (TZAESBASC_RSECR_SEC1_0_Val << TZAESBASC_RSECR_SEC1_Pos) /**< (TZAESBASC_RSECR) Region x is secure. Position  */
#define TZAESBASC_RSECR_SEC1_1                (TZAESBASC_RSECR_SEC1_1_Val << TZAESBASC_RSECR_SEC1_Pos) /**< (TZAESBASC_RSECR) Region x is non-secure. Position  */
#define TZAESBASC_RSECR_SEC2_Pos              _U_(2)                                               /**< (TZAESBASC_RSECR) Region 2 Security Position */
#define TZAESBASC_RSECR_SEC2_Msk              (_U_(0x1) << TZAESBASC_RSECR_SEC2_Pos)               /**< (TZAESBASC_RSECR) Region 2 Security Mask */
#define TZAESBASC_RSECR_SEC2(value)           (TZAESBASC_RSECR_SEC2_Msk & ((value) << TZAESBASC_RSECR_SEC2_Pos))
#define   TZAESBASC_RSECR_SEC2_0_Val          _U_(0x0)                                             /**< (TZAESBASC_RSECR) Region x is secure.  */
#define   TZAESBASC_RSECR_SEC2_1_Val          _U_(0x1)                                             /**< (TZAESBASC_RSECR) Region x is non-secure.  */
#define TZAESBASC_RSECR_SEC2_0                (TZAESBASC_RSECR_SEC2_0_Val << TZAESBASC_RSECR_SEC2_Pos) /**< (TZAESBASC_RSECR) Region x is secure. Position  */
#define TZAESBASC_RSECR_SEC2_1                (TZAESBASC_RSECR_SEC2_1_Val << TZAESBASC_RSECR_SEC2_Pos) /**< (TZAESBASC_RSECR) Region x is non-secure. Position  */
#define TZAESBASC_RSECR_SEC3_Pos              _U_(3)                                               /**< (TZAESBASC_RSECR) Region 3 Security Position */
#define TZAESBASC_RSECR_SEC3_Msk              (_U_(0x1) << TZAESBASC_RSECR_SEC3_Pos)               /**< (TZAESBASC_RSECR) Region 3 Security Mask */
#define TZAESBASC_RSECR_SEC3(value)           (TZAESBASC_RSECR_SEC3_Msk & ((value) << TZAESBASC_RSECR_SEC3_Pos))
#define   TZAESBASC_RSECR_SEC3_0_Val          _U_(0x0)                                             /**< (TZAESBASC_RSECR) Region x is secure.  */
#define   TZAESBASC_RSECR_SEC3_1_Val          _U_(0x1)                                             /**< (TZAESBASC_RSECR) Region x is non-secure.  */
#define TZAESBASC_RSECR_SEC3_0                (TZAESBASC_RSECR_SEC3_0_Val << TZAESBASC_RSECR_SEC3_Pos) /**< (TZAESBASC_RSECR) Region x is secure. Position  */
#define TZAESBASC_RSECR_SEC3_1                (TZAESBASC_RSECR_SEC3_1_Val << TZAESBASC_RSECR_SEC3_Pos) /**< (TZAESBASC_RSECR) Region x is non-secure. Position  */
#define TZAESBASC_RSECR_SEC4_Pos              _U_(4)                                               /**< (TZAESBASC_RSECR) Region 4 Security Position */
#define TZAESBASC_RSECR_SEC4_Msk              (_U_(0x1) << TZAESBASC_RSECR_SEC4_Pos)               /**< (TZAESBASC_RSECR) Region 4 Security Mask */
#define TZAESBASC_RSECR_SEC4(value)           (TZAESBASC_RSECR_SEC4_Msk & ((value) << TZAESBASC_RSECR_SEC4_Pos))
#define   TZAESBASC_RSECR_SEC4_0_Val          _U_(0x0)                                             /**< (TZAESBASC_RSECR) Region x is secure.  */
#define   TZAESBASC_RSECR_SEC4_1_Val          _U_(0x1)                                             /**< (TZAESBASC_RSECR) Region x is non-secure.  */
#define TZAESBASC_RSECR_SEC4_0                (TZAESBASC_RSECR_SEC4_0_Val << TZAESBASC_RSECR_SEC4_Pos) /**< (TZAESBASC_RSECR) Region x is secure. Position  */
#define TZAESBASC_RSECR_SEC4_1                (TZAESBASC_RSECR_SEC4_1_Val << TZAESBASC_RSECR_SEC4_Pos) /**< (TZAESBASC_RSECR) Region x is non-secure. Position  */
#define TZAESBASC_RSECR_SEC5_Pos              _U_(5)                                               /**< (TZAESBASC_RSECR) Region 5 Security Position */
#define TZAESBASC_RSECR_SEC5_Msk              (_U_(0x1) << TZAESBASC_RSECR_SEC5_Pos)               /**< (TZAESBASC_RSECR) Region 5 Security Mask */
#define TZAESBASC_RSECR_SEC5(value)           (TZAESBASC_RSECR_SEC5_Msk & ((value) << TZAESBASC_RSECR_SEC5_Pos))
#define   TZAESBASC_RSECR_SEC5_0_Val          _U_(0x0)                                             /**< (TZAESBASC_RSECR) Region x is secure.  */
#define   TZAESBASC_RSECR_SEC5_1_Val          _U_(0x1)                                             /**< (TZAESBASC_RSECR) Region x is non-secure.  */
#define TZAESBASC_RSECR_SEC5_0                (TZAESBASC_RSECR_SEC5_0_Val << TZAESBASC_RSECR_SEC5_Pos) /**< (TZAESBASC_RSECR) Region x is secure. Position  */
#define TZAESBASC_RSECR_SEC5_1                (TZAESBASC_RSECR_SEC5_1_Val << TZAESBASC_RSECR_SEC5_Pos) /**< (TZAESBASC_RSECR) Region x is non-secure. Position  */
#define TZAESBASC_RSECR_SEC6_Pos              _U_(6)                                               /**< (TZAESBASC_RSECR) Region 6 Security Position */
#define TZAESBASC_RSECR_SEC6_Msk              (_U_(0x1) << TZAESBASC_RSECR_SEC6_Pos)               /**< (TZAESBASC_RSECR) Region 6 Security Mask */
#define TZAESBASC_RSECR_SEC6(value)           (TZAESBASC_RSECR_SEC6_Msk & ((value) << TZAESBASC_RSECR_SEC6_Pos))
#define   TZAESBASC_RSECR_SEC6_0_Val          _U_(0x0)                                             /**< (TZAESBASC_RSECR) Region x is secure.  */
#define   TZAESBASC_RSECR_SEC6_1_Val          _U_(0x1)                                             /**< (TZAESBASC_RSECR) Region x is non-secure.  */
#define TZAESBASC_RSECR_SEC6_0                (TZAESBASC_RSECR_SEC6_0_Val << TZAESBASC_RSECR_SEC6_Pos) /**< (TZAESBASC_RSECR) Region x is secure. Position  */
#define TZAESBASC_RSECR_SEC6_1                (TZAESBASC_RSECR_SEC6_1_Val << TZAESBASC_RSECR_SEC6_Pos) /**< (TZAESBASC_RSECR) Region x is non-secure. Position  */
#define TZAESBASC_RSECR_SEC7_Pos              _U_(7)                                               /**< (TZAESBASC_RSECR) Region 7 Security Position */
#define TZAESBASC_RSECR_SEC7_Msk              (_U_(0x1) << TZAESBASC_RSECR_SEC7_Pos)               /**< (TZAESBASC_RSECR) Region 7 Security Mask */
#define TZAESBASC_RSECR_SEC7(value)           (TZAESBASC_RSECR_SEC7_Msk & ((value) << TZAESBASC_RSECR_SEC7_Pos))
#define   TZAESBASC_RSECR_SEC7_0_Val          _U_(0x0)                                             /**< (TZAESBASC_RSECR) Region x is secure.  */
#define   TZAESBASC_RSECR_SEC7_1_Val          _U_(0x1)                                             /**< (TZAESBASC_RSECR) Region x is non-secure.  */
#define TZAESBASC_RSECR_SEC7_0                (TZAESBASC_RSECR_SEC7_0_Val << TZAESBASC_RSECR_SEC7_Pos) /**< (TZAESBASC_RSECR) Region x is secure. Position  */
#define TZAESBASC_RSECR_SEC7_1                (TZAESBASC_RSECR_SEC7_1_Val << TZAESBASC_RSECR_SEC7_Pos) /**< (TZAESBASC_RSECR) Region x is non-secure. Position  */
#define TZAESBASC_RSECR_Msk                   _U_(0x000000FF)                                      /**< (TZAESBASC_RSECR) Register Mask  */

#define TZAESBASC_RSECR_SEC_Pos               _U_(0)                                               /**< (TZAESBASC_RSECR Position) Region 7 Security */
#define TZAESBASC_RSECR_SEC_Msk               (_U_(0xFF) << TZAESBASC_RSECR_SEC_Pos)               /**< (TZAESBASC_RSECR Mask) SEC */
#define TZAESBASC_RSECR_SEC(value)            (TZAESBASC_RSECR_SEC_Msk & ((value) << TZAESBASC_RSECR_SEC_Pos)) 

/* -------- TZAESBASC_RER : (TZAESBASC Offset: 0x84) ( /W 32) Region Enable -------- */
#define TZAESBASC_RER_EN0_Pos                 _U_(0)                                               /**< (TZAESBASC_RER) Region 0 Enable Position */
#define TZAESBASC_RER_EN0_Msk                 (_U_(0x1) << TZAESBASC_RER_EN0_Pos)                  /**< (TZAESBASC_RER) Region 0 Enable Mask */
#define TZAESBASC_RER_EN0(value)              (TZAESBASC_RER_EN0_Msk & ((value) << TZAESBASC_RER_EN0_Pos))
#define   TZAESBASC_RER_EN0_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RER) No effect.  */
#define   TZAESBASC_RER_EN0_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RER) Enables the corresponding region.  */
#define TZAESBASC_RER_EN0_0                   (TZAESBASC_RER_EN0_0_Val << TZAESBASC_RER_EN0_Pos)   /**< (TZAESBASC_RER) No effect. Position  */
#define TZAESBASC_RER_EN0_1                   (TZAESBASC_RER_EN0_1_Val << TZAESBASC_RER_EN0_Pos)   /**< (TZAESBASC_RER) Enables the corresponding region. Position  */
#define TZAESBASC_RER_EN1_Pos                 _U_(1)                                               /**< (TZAESBASC_RER) Region 1 Enable Position */
#define TZAESBASC_RER_EN1_Msk                 (_U_(0x1) << TZAESBASC_RER_EN1_Pos)                  /**< (TZAESBASC_RER) Region 1 Enable Mask */
#define TZAESBASC_RER_EN1(value)              (TZAESBASC_RER_EN1_Msk & ((value) << TZAESBASC_RER_EN1_Pos))
#define   TZAESBASC_RER_EN1_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RER) No effect.  */
#define   TZAESBASC_RER_EN1_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RER) Enables the corresponding region.  */
#define TZAESBASC_RER_EN1_0                   (TZAESBASC_RER_EN1_0_Val << TZAESBASC_RER_EN1_Pos)   /**< (TZAESBASC_RER) No effect. Position  */
#define TZAESBASC_RER_EN1_1                   (TZAESBASC_RER_EN1_1_Val << TZAESBASC_RER_EN1_Pos)   /**< (TZAESBASC_RER) Enables the corresponding region. Position  */
#define TZAESBASC_RER_EN2_Pos                 _U_(2)                                               /**< (TZAESBASC_RER) Region 2 Enable Position */
#define TZAESBASC_RER_EN2_Msk                 (_U_(0x1) << TZAESBASC_RER_EN2_Pos)                  /**< (TZAESBASC_RER) Region 2 Enable Mask */
#define TZAESBASC_RER_EN2(value)              (TZAESBASC_RER_EN2_Msk & ((value) << TZAESBASC_RER_EN2_Pos))
#define   TZAESBASC_RER_EN2_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RER) No effect.  */
#define   TZAESBASC_RER_EN2_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RER) Enables the corresponding region.  */
#define TZAESBASC_RER_EN2_0                   (TZAESBASC_RER_EN2_0_Val << TZAESBASC_RER_EN2_Pos)   /**< (TZAESBASC_RER) No effect. Position  */
#define TZAESBASC_RER_EN2_1                   (TZAESBASC_RER_EN2_1_Val << TZAESBASC_RER_EN2_Pos)   /**< (TZAESBASC_RER) Enables the corresponding region. Position  */
#define TZAESBASC_RER_EN3_Pos                 _U_(3)                                               /**< (TZAESBASC_RER) Region 3 Enable Position */
#define TZAESBASC_RER_EN3_Msk                 (_U_(0x1) << TZAESBASC_RER_EN3_Pos)                  /**< (TZAESBASC_RER) Region 3 Enable Mask */
#define TZAESBASC_RER_EN3(value)              (TZAESBASC_RER_EN3_Msk & ((value) << TZAESBASC_RER_EN3_Pos))
#define   TZAESBASC_RER_EN3_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RER) No effect.  */
#define   TZAESBASC_RER_EN3_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RER) Enables the corresponding region.  */
#define TZAESBASC_RER_EN3_0                   (TZAESBASC_RER_EN3_0_Val << TZAESBASC_RER_EN3_Pos)   /**< (TZAESBASC_RER) No effect. Position  */
#define TZAESBASC_RER_EN3_1                   (TZAESBASC_RER_EN3_1_Val << TZAESBASC_RER_EN3_Pos)   /**< (TZAESBASC_RER) Enables the corresponding region. Position  */
#define TZAESBASC_RER_EN4_Pos                 _U_(4)                                               /**< (TZAESBASC_RER) Region 4 Enable Position */
#define TZAESBASC_RER_EN4_Msk                 (_U_(0x1) << TZAESBASC_RER_EN4_Pos)                  /**< (TZAESBASC_RER) Region 4 Enable Mask */
#define TZAESBASC_RER_EN4(value)              (TZAESBASC_RER_EN4_Msk & ((value) << TZAESBASC_RER_EN4_Pos))
#define   TZAESBASC_RER_EN4_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RER) No effect.  */
#define   TZAESBASC_RER_EN4_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RER) Enables the corresponding region.  */
#define TZAESBASC_RER_EN4_0                   (TZAESBASC_RER_EN4_0_Val << TZAESBASC_RER_EN4_Pos)   /**< (TZAESBASC_RER) No effect. Position  */
#define TZAESBASC_RER_EN4_1                   (TZAESBASC_RER_EN4_1_Val << TZAESBASC_RER_EN4_Pos)   /**< (TZAESBASC_RER) Enables the corresponding region. Position  */
#define TZAESBASC_RER_EN5_Pos                 _U_(5)                                               /**< (TZAESBASC_RER) Region 5 Enable Position */
#define TZAESBASC_RER_EN5_Msk                 (_U_(0x1) << TZAESBASC_RER_EN5_Pos)                  /**< (TZAESBASC_RER) Region 5 Enable Mask */
#define TZAESBASC_RER_EN5(value)              (TZAESBASC_RER_EN5_Msk & ((value) << TZAESBASC_RER_EN5_Pos))
#define   TZAESBASC_RER_EN5_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RER) No effect.  */
#define   TZAESBASC_RER_EN5_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RER) Enables the corresponding region.  */
#define TZAESBASC_RER_EN5_0                   (TZAESBASC_RER_EN5_0_Val << TZAESBASC_RER_EN5_Pos)   /**< (TZAESBASC_RER) No effect. Position  */
#define TZAESBASC_RER_EN5_1                   (TZAESBASC_RER_EN5_1_Val << TZAESBASC_RER_EN5_Pos)   /**< (TZAESBASC_RER) Enables the corresponding region. Position  */
#define TZAESBASC_RER_EN6_Pos                 _U_(6)                                               /**< (TZAESBASC_RER) Region 6 Enable Position */
#define TZAESBASC_RER_EN6_Msk                 (_U_(0x1) << TZAESBASC_RER_EN6_Pos)                  /**< (TZAESBASC_RER) Region 6 Enable Mask */
#define TZAESBASC_RER_EN6(value)              (TZAESBASC_RER_EN6_Msk & ((value) << TZAESBASC_RER_EN6_Pos))
#define   TZAESBASC_RER_EN6_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RER) No effect.  */
#define   TZAESBASC_RER_EN6_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RER) Enables the corresponding region.  */
#define TZAESBASC_RER_EN6_0                   (TZAESBASC_RER_EN6_0_Val << TZAESBASC_RER_EN6_Pos)   /**< (TZAESBASC_RER) No effect. Position  */
#define TZAESBASC_RER_EN6_1                   (TZAESBASC_RER_EN6_1_Val << TZAESBASC_RER_EN6_Pos)   /**< (TZAESBASC_RER) Enables the corresponding region. Position  */
#define TZAESBASC_RER_EN7_Pos                 _U_(7)                                               /**< (TZAESBASC_RER) Region 7 Enable Position */
#define TZAESBASC_RER_EN7_Msk                 (_U_(0x1) << TZAESBASC_RER_EN7_Pos)                  /**< (TZAESBASC_RER) Region 7 Enable Mask */
#define TZAESBASC_RER_EN7(value)              (TZAESBASC_RER_EN7_Msk & ((value) << TZAESBASC_RER_EN7_Pos))
#define   TZAESBASC_RER_EN7_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RER) No effect.  */
#define   TZAESBASC_RER_EN7_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RER) Enables the corresponding region.  */
#define TZAESBASC_RER_EN7_0                   (TZAESBASC_RER_EN7_0_Val << TZAESBASC_RER_EN7_Pos)   /**< (TZAESBASC_RER) No effect. Position  */
#define TZAESBASC_RER_EN7_1                   (TZAESBASC_RER_EN7_1_Val << TZAESBASC_RER_EN7_Pos)   /**< (TZAESBASC_RER) Enables the corresponding region. Position  */
#define TZAESBASC_RER_Msk                     _U_(0x000000FF)                                      /**< (TZAESBASC_RER) Register Mask  */

#define TZAESBASC_RER_EN_Pos                  _U_(0)                                               /**< (TZAESBASC_RER Position) Region 7 Enable */
#define TZAESBASC_RER_EN_Msk                  (_U_(0xFF) << TZAESBASC_RER_EN_Pos)                  /**< (TZAESBASC_RER Mask) EN */
#define TZAESBASC_RER_EN(value)               (TZAESBASC_RER_EN_Msk & ((value) << TZAESBASC_RER_EN_Pos)) 

/* -------- TZAESBASC_RDR : (TZAESBASC Offset: 0x88) ( /W 32) Region Disable -------- */
#define TZAESBASC_RDR_DIS0_Pos                _U_(0)                                               /**< (TZAESBASC_RDR) Region 0 Disable Position */
#define TZAESBASC_RDR_DIS0_Msk                (_U_(0x1) << TZAESBASC_RDR_DIS0_Pos)                 /**< (TZAESBASC_RDR) Region 0 Disable Mask */
#define TZAESBASC_RDR_DIS0(value)             (TZAESBASC_RDR_DIS0_Msk & ((value) << TZAESBASC_RDR_DIS0_Pos))
#define   TZAESBASC_RDR_DIS0_0_Val            _U_(0x0)                                             /**< (TZAESBASC_RDR) No effect.  */
#define   TZAESBASC_RDR_DIS0_1_Val            _U_(0x1)                                             /**< (TZAESBASC_RDR) Disables the corresponding region.  */
#define TZAESBASC_RDR_DIS0_0                  (TZAESBASC_RDR_DIS0_0_Val << TZAESBASC_RDR_DIS0_Pos) /**< (TZAESBASC_RDR) No effect. Position  */
#define TZAESBASC_RDR_DIS0_1                  (TZAESBASC_RDR_DIS0_1_Val << TZAESBASC_RDR_DIS0_Pos) /**< (TZAESBASC_RDR) Disables the corresponding region. Position  */
#define TZAESBASC_RDR_DIS1_Pos                _U_(1)                                               /**< (TZAESBASC_RDR) Region 1 Disable Position */
#define TZAESBASC_RDR_DIS1_Msk                (_U_(0x1) << TZAESBASC_RDR_DIS1_Pos)                 /**< (TZAESBASC_RDR) Region 1 Disable Mask */
#define TZAESBASC_RDR_DIS1(value)             (TZAESBASC_RDR_DIS1_Msk & ((value) << TZAESBASC_RDR_DIS1_Pos))
#define   TZAESBASC_RDR_DIS1_0_Val            _U_(0x0)                                             /**< (TZAESBASC_RDR) No effect.  */
#define   TZAESBASC_RDR_DIS1_1_Val            _U_(0x1)                                             /**< (TZAESBASC_RDR) Disables the corresponding region.  */
#define TZAESBASC_RDR_DIS1_0                  (TZAESBASC_RDR_DIS1_0_Val << TZAESBASC_RDR_DIS1_Pos) /**< (TZAESBASC_RDR) No effect. Position  */
#define TZAESBASC_RDR_DIS1_1                  (TZAESBASC_RDR_DIS1_1_Val << TZAESBASC_RDR_DIS1_Pos) /**< (TZAESBASC_RDR) Disables the corresponding region. Position  */
#define TZAESBASC_RDR_DIS2_Pos                _U_(2)                                               /**< (TZAESBASC_RDR) Region 2 Disable Position */
#define TZAESBASC_RDR_DIS2_Msk                (_U_(0x1) << TZAESBASC_RDR_DIS2_Pos)                 /**< (TZAESBASC_RDR) Region 2 Disable Mask */
#define TZAESBASC_RDR_DIS2(value)             (TZAESBASC_RDR_DIS2_Msk & ((value) << TZAESBASC_RDR_DIS2_Pos))
#define   TZAESBASC_RDR_DIS2_0_Val            _U_(0x0)                                             /**< (TZAESBASC_RDR) No effect.  */
#define   TZAESBASC_RDR_DIS2_1_Val            _U_(0x1)                                             /**< (TZAESBASC_RDR) Disables the corresponding region.  */
#define TZAESBASC_RDR_DIS2_0                  (TZAESBASC_RDR_DIS2_0_Val << TZAESBASC_RDR_DIS2_Pos) /**< (TZAESBASC_RDR) No effect. Position  */
#define TZAESBASC_RDR_DIS2_1                  (TZAESBASC_RDR_DIS2_1_Val << TZAESBASC_RDR_DIS2_Pos) /**< (TZAESBASC_RDR) Disables the corresponding region. Position  */
#define TZAESBASC_RDR_DIS3_Pos                _U_(3)                                               /**< (TZAESBASC_RDR) Region 3 Disable Position */
#define TZAESBASC_RDR_DIS3_Msk                (_U_(0x1) << TZAESBASC_RDR_DIS3_Pos)                 /**< (TZAESBASC_RDR) Region 3 Disable Mask */
#define TZAESBASC_RDR_DIS3(value)             (TZAESBASC_RDR_DIS3_Msk & ((value) << TZAESBASC_RDR_DIS3_Pos))
#define   TZAESBASC_RDR_DIS3_0_Val            _U_(0x0)                                             /**< (TZAESBASC_RDR) No effect.  */
#define   TZAESBASC_RDR_DIS3_1_Val            _U_(0x1)                                             /**< (TZAESBASC_RDR) Disables the corresponding region.  */
#define TZAESBASC_RDR_DIS3_0                  (TZAESBASC_RDR_DIS3_0_Val << TZAESBASC_RDR_DIS3_Pos) /**< (TZAESBASC_RDR) No effect. Position  */
#define TZAESBASC_RDR_DIS3_1                  (TZAESBASC_RDR_DIS3_1_Val << TZAESBASC_RDR_DIS3_Pos) /**< (TZAESBASC_RDR) Disables the corresponding region. Position  */
#define TZAESBASC_RDR_DIS4_Pos                _U_(4)                                               /**< (TZAESBASC_RDR) Region 4 Disable Position */
#define TZAESBASC_RDR_DIS4_Msk                (_U_(0x1) << TZAESBASC_RDR_DIS4_Pos)                 /**< (TZAESBASC_RDR) Region 4 Disable Mask */
#define TZAESBASC_RDR_DIS4(value)             (TZAESBASC_RDR_DIS4_Msk & ((value) << TZAESBASC_RDR_DIS4_Pos))
#define   TZAESBASC_RDR_DIS4_0_Val            _U_(0x0)                                             /**< (TZAESBASC_RDR) No effect.  */
#define   TZAESBASC_RDR_DIS4_1_Val            _U_(0x1)                                             /**< (TZAESBASC_RDR) Disables the corresponding region.  */
#define TZAESBASC_RDR_DIS4_0                  (TZAESBASC_RDR_DIS4_0_Val << TZAESBASC_RDR_DIS4_Pos) /**< (TZAESBASC_RDR) No effect. Position  */
#define TZAESBASC_RDR_DIS4_1                  (TZAESBASC_RDR_DIS4_1_Val << TZAESBASC_RDR_DIS4_Pos) /**< (TZAESBASC_RDR) Disables the corresponding region. Position  */
#define TZAESBASC_RDR_DIS5_Pos                _U_(5)                                               /**< (TZAESBASC_RDR) Region 5 Disable Position */
#define TZAESBASC_RDR_DIS5_Msk                (_U_(0x1) << TZAESBASC_RDR_DIS5_Pos)                 /**< (TZAESBASC_RDR) Region 5 Disable Mask */
#define TZAESBASC_RDR_DIS5(value)             (TZAESBASC_RDR_DIS5_Msk & ((value) << TZAESBASC_RDR_DIS5_Pos))
#define   TZAESBASC_RDR_DIS5_0_Val            _U_(0x0)                                             /**< (TZAESBASC_RDR) No effect.  */
#define   TZAESBASC_RDR_DIS5_1_Val            _U_(0x1)                                             /**< (TZAESBASC_RDR) Disables the corresponding region.  */
#define TZAESBASC_RDR_DIS5_0                  (TZAESBASC_RDR_DIS5_0_Val << TZAESBASC_RDR_DIS5_Pos) /**< (TZAESBASC_RDR) No effect. Position  */
#define TZAESBASC_RDR_DIS5_1                  (TZAESBASC_RDR_DIS5_1_Val << TZAESBASC_RDR_DIS5_Pos) /**< (TZAESBASC_RDR) Disables the corresponding region. Position  */
#define TZAESBASC_RDR_DIS6_Pos                _U_(6)                                               /**< (TZAESBASC_RDR) Region 6 Disable Position */
#define TZAESBASC_RDR_DIS6_Msk                (_U_(0x1) << TZAESBASC_RDR_DIS6_Pos)                 /**< (TZAESBASC_RDR) Region 6 Disable Mask */
#define TZAESBASC_RDR_DIS6(value)             (TZAESBASC_RDR_DIS6_Msk & ((value) << TZAESBASC_RDR_DIS6_Pos))
#define   TZAESBASC_RDR_DIS6_0_Val            _U_(0x0)                                             /**< (TZAESBASC_RDR) No effect.  */
#define   TZAESBASC_RDR_DIS6_1_Val            _U_(0x1)                                             /**< (TZAESBASC_RDR) Disables the corresponding region.  */
#define TZAESBASC_RDR_DIS6_0                  (TZAESBASC_RDR_DIS6_0_Val << TZAESBASC_RDR_DIS6_Pos) /**< (TZAESBASC_RDR) No effect. Position  */
#define TZAESBASC_RDR_DIS6_1                  (TZAESBASC_RDR_DIS6_1_Val << TZAESBASC_RDR_DIS6_Pos) /**< (TZAESBASC_RDR) Disables the corresponding region. Position  */
#define TZAESBASC_RDR_DIS7_Pos                _U_(7)                                               /**< (TZAESBASC_RDR) Region 7 Disable Position */
#define TZAESBASC_RDR_DIS7_Msk                (_U_(0x1) << TZAESBASC_RDR_DIS7_Pos)                 /**< (TZAESBASC_RDR) Region 7 Disable Mask */
#define TZAESBASC_RDR_DIS7(value)             (TZAESBASC_RDR_DIS7_Msk & ((value) << TZAESBASC_RDR_DIS7_Pos))
#define   TZAESBASC_RDR_DIS7_0_Val            _U_(0x0)                                             /**< (TZAESBASC_RDR) No effect.  */
#define   TZAESBASC_RDR_DIS7_1_Val            _U_(0x1)                                             /**< (TZAESBASC_RDR) Disables the corresponding region.  */
#define TZAESBASC_RDR_DIS7_0                  (TZAESBASC_RDR_DIS7_0_Val << TZAESBASC_RDR_DIS7_Pos) /**< (TZAESBASC_RDR) No effect. Position  */
#define TZAESBASC_RDR_DIS7_1                  (TZAESBASC_RDR_DIS7_1_Val << TZAESBASC_RDR_DIS7_Pos) /**< (TZAESBASC_RDR) Disables the corresponding region. Position  */
#define TZAESBASC_RDR_Msk                     _U_(0x000000FF)                                      /**< (TZAESBASC_RDR) Register Mask  */

#define TZAESBASC_RDR_DIS_Pos                 _U_(0)                                               /**< (TZAESBASC_RDR Position) Region 7 Disable */
#define TZAESBASC_RDR_DIS_Msk                 (_U_(0xFF) << TZAESBASC_RDR_DIS_Pos)                 /**< (TZAESBASC_RDR Mask) DIS */
#define TZAESBASC_RDR_DIS(value)              (TZAESBASC_RDR_DIS_Msk & ((value) << TZAESBASC_RDR_DIS_Pos)) 

/* -------- TZAESBASC_RSR : (TZAESBASC Offset: 0x8C) ( R/ 32) Region Status -------- */
#define TZAESBASC_RSR_RESETVALUE              _U_(0x00)                                            /**<  (TZAESBASC_RSR) Region Status  Reset Value */

#define TZAESBASC_RSR_ES0_Pos                 _U_(0)                                               /**< (TZAESBASC_RSR) Region 0 Enable Status Position */
#define TZAESBASC_RSR_ES0_Msk                 (_U_(0x1) << TZAESBASC_RSR_ES0_Pos)                  /**< (TZAESBASC_RSR) Region 0 Enable Status Mask */
#define TZAESBASC_RSR_ES0(value)              (TZAESBASC_RSR_ES0_Msk & ((value) << TZAESBASC_RSR_ES0_Pos))
#define   TZAESBASC_RSR_ES0_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RSR) The corresponding region is disabled.  */
#define   TZAESBASC_RSR_ES0_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RSR) The corresponding region is enabled.  */
#define TZAESBASC_RSR_ES0_0                   (TZAESBASC_RSR_ES0_0_Val << TZAESBASC_RSR_ES0_Pos)   /**< (TZAESBASC_RSR) The corresponding region is disabled. Position  */
#define TZAESBASC_RSR_ES0_1                   (TZAESBASC_RSR_ES0_1_Val << TZAESBASC_RSR_ES0_Pos)   /**< (TZAESBASC_RSR) The corresponding region is enabled. Position  */
#define TZAESBASC_RSR_ES1_Pos                 _U_(1)                                               /**< (TZAESBASC_RSR) Region 1 Enable Status Position */
#define TZAESBASC_RSR_ES1_Msk                 (_U_(0x1) << TZAESBASC_RSR_ES1_Pos)                  /**< (TZAESBASC_RSR) Region 1 Enable Status Mask */
#define TZAESBASC_RSR_ES1(value)              (TZAESBASC_RSR_ES1_Msk & ((value) << TZAESBASC_RSR_ES1_Pos))
#define   TZAESBASC_RSR_ES1_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RSR) The corresponding region is disabled.  */
#define   TZAESBASC_RSR_ES1_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RSR) The corresponding region is enabled.  */
#define TZAESBASC_RSR_ES1_0                   (TZAESBASC_RSR_ES1_0_Val << TZAESBASC_RSR_ES1_Pos)   /**< (TZAESBASC_RSR) The corresponding region is disabled. Position  */
#define TZAESBASC_RSR_ES1_1                   (TZAESBASC_RSR_ES1_1_Val << TZAESBASC_RSR_ES1_Pos)   /**< (TZAESBASC_RSR) The corresponding region is enabled. Position  */
#define TZAESBASC_RSR_ES2_Pos                 _U_(2)                                               /**< (TZAESBASC_RSR) Region 2 Enable Status Position */
#define TZAESBASC_RSR_ES2_Msk                 (_U_(0x1) << TZAESBASC_RSR_ES2_Pos)                  /**< (TZAESBASC_RSR) Region 2 Enable Status Mask */
#define TZAESBASC_RSR_ES2(value)              (TZAESBASC_RSR_ES2_Msk & ((value) << TZAESBASC_RSR_ES2_Pos))
#define   TZAESBASC_RSR_ES2_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RSR) The corresponding region is disabled.  */
#define   TZAESBASC_RSR_ES2_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RSR) The corresponding region is enabled.  */
#define TZAESBASC_RSR_ES2_0                   (TZAESBASC_RSR_ES2_0_Val << TZAESBASC_RSR_ES2_Pos)   /**< (TZAESBASC_RSR) The corresponding region is disabled. Position  */
#define TZAESBASC_RSR_ES2_1                   (TZAESBASC_RSR_ES2_1_Val << TZAESBASC_RSR_ES2_Pos)   /**< (TZAESBASC_RSR) The corresponding region is enabled. Position  */
#define TZAESBASC_RSR_ES3_Pos                 _U_(3)                                               /**< (TZAESBASC_RSR) Region 3 Enable Status Position */
#define TZAESBASC_RSR_ES3_Msk                 (_U_(0x1) << TZAESBASC_RSR_ES3_Pos)                  /**< (TZAESBASC_RSR) Region 3 Enable Status Mask */
#define TZAESBASC_RSR_ES3(value)              (TZAESBASC_RSR_ES3_Msk & ((value) << TZAESBASC_RSR_ES3_Pos))
#define   TZAESBASC_RSR_ES3_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RSR) The corresponding region is disabled.  */
#define   TZAESBASC_RSR_ES3_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RSR) The corresponding region is enabled.  */
#define TZAESBASC_RSR_ES3_0                   (TZAESBASC_RSR_ES3_0_Val << TZAESBASC_RSR_ES3_Pos)   /**< (TZAESBASC_RSR) The corresponding region is disabled. Position  */
#define TZAESBASC_RSR_ES3_1                   (TZAESBASC_RSR_ES3_1_Val << TZAESBASC_RSR_ES3_Pos)   /**< (TZAESBASC_RSR) The corresponding region is enabled. Position  */
#define TZAESBASC_RSR_ES4_Pos                 _U_(4)                                               /**< (TZAESBASC_RSR) Region 4 Enable Status Position */
#define TZAESBASC_RSR_ES4_Msk                 (_U_(0x1) << TZAESBASC_RSR_ES4_Pos)                  /**< (TZAESBASC_RSR) Region 4 Enable Status Mask */
#define TZAESBASC_RSR_ES4(value)              (TZAESBASC_RSR_ES4_Msk & ((value) << TZAESBASC_RSR_ES4_Pos))
#define   TZAESBASC_RSR_ES4_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RSR) The corresponding region is disabled.  */
#define   TZAESBASC_RSR_ES4_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RSR) The corresponding region is enabled.  */
#define TZAESBASC_RSR_ES4_0                   (TZAESBASC_RSR_ES4_0_Val << TZAESBASC_RSR_ES4_Pos)   /**< (TZAESBASC_RSR) The corresponding region is disabled. Position  */
#define TZAESBASC_RSR_ES4_1                   (TZAESBASC_RSR_ES4_1_Val << TZAESBASC_RSR_ES4_Pos)   /**< (TZAESBASC_RSR) The corresponding region is enabled. Position  */
#define TZAESBASC_RSR_ES5_Pos                 _U_(5)                                               /**< (TZAESBASC_RSR) Region 5 Enable Status Position */
#define TZAESBASC_RSR_ES5_Msk                 (_U_(0x1) << TZAESBASC_RSR_ES5_Pos)                  /**< (TZAESBASC_RSR) Region 5 Enable Status Mask */
#define TZAESBASC_RSR_ES5(value)              (TZAESBASC_RSR_ES5_Msk & ((value) << TZAESBASC_RSR_ES5_Pos))
#define   TZAESBASC_RSR_ES5_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RSR) The corresponding region is disabled.  */
#define   TZAESBASC_RSR_ES5_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RSR) The corresponding region is enabled.  */
#define TZAESBASC_RSR_ES5_0                   (TZAESBASC_RSR_ES5_0_Val << TZAESBASC_RSR_ES5_Pos)   /**< (TZAESBASC_RSR) The corresponding region is disabled. Position  */
#define TZAESBASC_RSR_ES5_1                   (TZAESBASC_RSR_ES5_1_Val << TZAESBASC_RSR_ES5_Pos)   /**< (TZAESBASC_RSR) The corresponding region is enabled. Position  */
#define TZAESBASC_RSR_ES6_Pos                 _U_(6)                                               /**< (TZAESBASC_RSR) Region 6 Enable Status Position */
#define TZAESBASC_RSR_ES6_Msk                 (_U_(0x1) << TZAESBASC_RSR_ES6_Pos)                  /**< (TZAESBASC_RSR) Region 6 Enable Status Mask */
#define TZAESBASC_RSR_ES6(value)              (TZAESBASC_RSR_ES6_Msk & ((value) << TZAESBASC_RSR_ES6_Pos))
#define   TZAESBASC_RSR_ES6_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RSR) The corresponding region is disabled.  */
#define   TZAESBASC_RSR_ES6_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RSR) The corresponding region is enabled.  */
#define TZAESBASC_RSR_ES6_0                   (TZAESBASC_RSR_ES6_0_Val << TZAESBASC_RSR_ES6_Pos)   /**< (TZAESBASC_RSR) The corresponding region is disabled. Position  */
#define TZAESBASC_RSR_ES6_1                   (TZAESBASC_RSR_ES6_1_Val << TZAESBASC_RSR_ES6_Pos)   /**< (TZAESBASC_RSR) The corresponding region is enabled. Position  */
#define TZAESBASC_RSR_ES7_Pos                 _U_(7)                                               /**< (TZAESBASC_RSR) Region 7 Enable Status Position */
#define TZAESBASC_RSR_ES7_Msk                 (_U_(0x1) << TZAESBASC_RSR_ES7_Pos)                  /**< (TZAESBASC_RSR) Region 7 Enable Status Mask */
#define TZAESBASC_RSR_ES7(value)              (TZAESBASC_RSR_ES7_Msk & ((value) << TZAESBASC_RSR_ES7_Pos))
#define   TZAESBASC_RSR_ES7_0_Val             _U_(0x0)                                             /**< (TZAESBASC_RSR) The corresponding region is disabled.  */
#define   TZAESBASC_RSR_ES7_1_Val             _U_(0x1)                                             /**< (TZAESBASC_RSR) The corresponding region is enabled.  */
#define TZAESBASC_RSR_ES7_0                   (TZAESBASC_RSR_ES7_0_Val << TZAESBASC_RSR_ES7_Pos)   /**< (TZAESBASC_RSR) The corresponding region is disabled. Position  */
#define TZAESBASC_RSR_ES7_1                   (TZAESBASC_RSR_ES7_1_Val << TZAESBASC_RSR_ES7_Pos)   /**< (TZAESBASC_RSR) The corresponding region is enabled. Position  */
#define TZAESBASC_RSR_Msk                     _U_(0x000000FF)                                      /**< (TZAESBASC_RSR) Register Mask  */

#define TZAESBASC_RSR_ES_Pos                  _U_(0)                                               /**< (TZAESBASC_RSR Position) Region 7 Enable Status */
#define TZAESBASC_RSR_ES_Msk                  (_U_(0xFF) << TZAESBASC_RSR_ES_Pos)                  /**< (TZAESBASC_RSR Mask) ES */
#define TZAESBASC_RSR_ES(value)               (TZAESBASC_RSR_ES_Msk & ((value) << TZAESBASC_RSR_ES_Pos)) 

/* -------- TZAESBASC_RESR : (TZAESBASC Offset: 0x90) ( R/ 32) Region Error Status -------- */
#define TZAESBASC_RESR_RESETVALUE             _U_(0x00)                                            /**<  (TZAESBASC_RESR) Region Error Status  Reset Value */

#define TZAESBASC_RESR_AER0_Pos               _U_(0)                                               /**< (TZAESBASC_RESR) Region 0 Address Error Position */
#define TZAESBASC_RESR_AER0_Msk               (_U_(0x1) << TZAESBASC_RESR_AER0_Pos)                /**< (TZAESBASC_RESR) Region 0 Address Error Mask */
#define TZAESBASC_RESR_AER0(value)            (TZAESBASC_RESR_AER0_Msk & ((value) << TZAESBASC_RESR_AER0_Pos))
#define   TZAESBASC_RESR_AER0_0_Val           _U_(0x0)                                             /**< (TZAESBASC_RESR) No region x address error has occurred.  */
#define   TZAESBASC_RESR_AER0_1_Val           _U_(0x1)                                             /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register.  */
#define TZAESBASC_RESR_AER0_0                 (TZAESBASC_RESR_AER0_0_Val << TZAESBASC_RESR_AER0_Pos) /**< (TZAESBASC_RESR) No region x address error has occurred. Position  */
#define TZAESBASC_RESR_AER0_1                 (TZAESBASC_RESR_AER0_1_Val << TZAESBASC_RESR_AER0_Pos) /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register. Position  */
#define TZAESBASC_RESR_AER1_Pos               _U_(1)                                               /**< (TZAESBASC_RESR) Region 1 Address Error Position */
#define TZAESBASC_RESR_AER1_Msk               (_U_(0x1) << TZAESBASC_RESR_AER1_Pos)                /**< (TZAESBASC_RESR) Region 1 Address Error Mask */
#define TZAESBASC_RESR_AER1(value)            (TZAESBASC_RESR_AER1_Msk & ((value) << TZAESBASC_RESR_AER1_Pos))
#define   TZAESBASC_RESR_AER1_0_Val           _U_(0x0)                                             /**< (TZAESBASC_RESR) No region x address error has occurred.  */
#define   TZAESBASC_RESR_AER1_1_Val           _U_(0x1)                                             /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register.  */
#define TZAESBASC_RESR_AER1_0                 (TZAESBASC_RESR_AER1_0_Val << TZAESBASC_RESR_AER1_Pos) /**< (TZAESBASC_RESR) No region x address error has occurred. Position  */
#define TZAESBASC_RESR_AER1_1                 (TZAESBASC_RESR_AER1_1_Val << TZAESBASC_RESR_AER1_Pos) /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register. Position  */
#define TZAESBASC_RESR_AER2_Pos               _U_(2)                                               /**< (TZAESBASC_RESR) Region 2 Address Error Position */
#define TZAESBASC_RESR_AER2_Msk               (_U_(0x1) << TZAESBASC_RESR_AER2_Pos)                /**< (TZAESBASC_RESR) Region 2 Address Error Mask */
#define TZAESBASC_RESR_AER2(value)            (TZAESBASC_RESR_AER2_Msk & ((value) << TZAESBASC_RESR_AER2_Pos))
#define   TZAESBASC_RESR_AER2_0_Val           _U_(0x0)                                             /**< (TZAESBASC_RESR) No region x address error has occurred.  */
#define   TZAESBASC_RESR_AER2_1_Val           _U_(0x1)                                             /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register.  */
#define TZAESBASC_RESR_AER2_0                 (TZAESBASC_RESR_AER2_0_Val << TZAESBASC_RESR_AER2_Pos) /**< (TZAESBASC_RESR) No region x address error has occurred. Position  */
#define TZAESBASC_RESR_AER2_1                 (TZAESBASC_RESR_AER2_1_Val << TZAESBASC_RESR_AER2_Pos) /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register. Position  */
#define TZAESBASC_RESR_AER3_Pos               _U_(3)                                               /**< (TZAESBASC_RESR) Region 3 Address Error Position */
#define TZAESBASC_RESR_AER3_Msk               (_U_(0x1) << TZAESBASC_RESR_AER3_Pos)                /**< (TZAESBASC_RESR) Region 3 Address Error Mask */
#define TZAESBASC_RESR_AER3(value)            (TZAESBASC_RESR_AER3_Msk & ((value) << TZAESBASC_RESR_AER3_Pos))
#define   TZAESBASC_RESR_AER3_0_Val           _U_(0x0)                                             /**< (TZAESBASC_RESR) No region x address error has occurred.  */
#define   TZAESBASC_RESR_AER3_1_Val           _U_(0x1)                                             /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register.  */
#define TZAESBASC_RESR_AER3_0                 (TZAESBASC_RESR_AER3_0_Val << TZAESBASC_RESR_AER3_Pos) /**< (TZAESBASC_RESR) No region x address error has occurred. Position  */
#define TZAESBASC_RESR_AER3_1                 (TZAESBASC_RESR_AER3_1_Val << TZAESBASC_RESR_AER3_Pos) /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register. Position  */
#define TZAESBASC_RESR_AER4_Pos               _U_(4)                                               /**< (TZAESBASC_RESR) Region 4 Address Error Position */
#define TZAESBASC_RESR_AER4_Msk               (_U_(0x1) << TZAESBASC_RESR_AER4_Pos)                /**< (TZAESBASC_RESR) Region 4 Address Error Mask */
#define TZAESBASC_RESR_AER4(value)            (TZAESBASC_RESR_AER4_Msk & ((value) << TZAESBASC_RESR_AER4_Pos))
#define   TZAESBASC_RESR_AER4_0_Val           _U_(0x0)                                             /**< (TZAESBASC_RESR) No region x address error has occurred.  */
#define   TZAESBASC_RESR_AER4_1_Val           _U_(0x1)                                             /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register.  */
#define TZAESBASC_RESR_AER4_0                 (TZAESBASC_RESR_AER4_0_Val << TZAESBASC_RESR_AER4_Pos) /**< (TZAESBASC_RESR) No region x address error has occurred. Position  */
#define TZAESBASC_RESR_AER4_1                 (TZAESBASC_RESR_AER4_1_Val << TZAESBASC_RESR_AER4_Pos) /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register. Position  */
#define TZAESBASC_RESR_AER5_Pos               _U_(5)                                               /**< (TZAESBASC_RESR) Region 5 Address Error Position */
#define TZAESBASC_RESR_AER5_Msk               (_U_(0x1) << TZAESBASC_RESR_AER5_Pos)                /**< (TZAESBASC_RESR) Region 5 Address Error Mask */
#define TZAESBASC_RESR_AER5(value)            (TZAESBASC_RESR_AER5_Msk & ((value) << TZAESBASC_RESR_AER5_Pos))
#define   TZAESBASC_RESR_AER5_0_Val           _U_(0x0)                                             /**< (TZAESBASC_RESR) No region x address error has occurred.  */
#define   TZAESBASC_RESR_AER5_1_Val           _U_(0x1)                                             /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register.  */
#define TZAESBASC_RESR_AER5_0                 (TZAESBASC_RESR_AER5_0_Val << TZAESBASC_RESR_AER5_Pos) /**< (TZAESBASC_RESR) No region x address error has occurred. Position  */
#define TZAESBASC_RESR_AER5_1                 (TZAESBASC_RESR_AER5_1_Val << TZAESBASC_RESR_AER5_Pos) /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register. Position  */
#define TZAESBASC_RESR_AER6_Pos               _U_(6)                                               /**< (TZAESBASC_RESR) Region 6 Address Error Position */
#define TZAESBASC_RESR_AER6_Msk               (_U_(0x1) << TZAESBASC_RESR_AER6_Pos)                /**< (TZAESBASC_RESR) Region 6 Address Error Mask */
#define TZAESBASC_RESR_AER6(value)            (TZAESBASC_RESR_AER6_Msk & ((value) << TZAESBASC_RESR_AER6_Pos))
#define   TZAESBASC_RESR_AER6_0_Val           _U_(0x0)                                             /**< (TZAESBASC_RESR) No region x address error has occurred.  */
#define   TZAESBASC_RESR_AER6_1_Val           _U_(0x1)                                             /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register.  */
#define TZAESBASC_RESR_AER6_0                 (TZAESBASC_RESR_AER6_0_Val << TZAESBASC_RESR_AER6_Pos) /**< (TZAESBASC_RESR) No region x address error has occurred. Position  */
#define TZAESBASC_RESR_AER6_1                 (TZAESBASC_RESR_AER6_1_Val << TZAESBASC_RESR_AER6_Pos) /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register. Position  */
#define TZAESBASC_RESR_AER7_Pos               _U_(7)                                               /**< (TZAESBASC_RESR) Region 7 Address Error Position */
#define TZAESBASC_RESR_AER7_Msk               (_U_(0x1) << TZAESBASC_RESR_AER7_Pos)                /**< (TZAESBASC_RESR) Region 7 Address Error Mask */
#define TZAESBASC_RESR_AER7(value)            (TZAESBASC_RESR_AER7_Msk & ((value) << TZAESBASC_RESR_AER7_Pos))
#define   TZAESBASC_RESR_AER7_0_Val           _U_(0x0)                                             /**< (TZAESBASC_RESR) No region x address error has occurred.  */
#define   TZAESBASC_RESR_AER7_1_Val           _U_(0x1)                                             /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register.  */
#define TZAESBASC_RESR_AER7_0                 (TZAESBASC_RESR_AER7_0_Val << TZAESBASC_RESR_AER7_Pos) /**< (TZAESBASC_RESR) No region x address error has occurred. Position  */
#define TZAESBASC_RESR_AER7_1                 (TZAESBASC_RESR_AER7_1_Val << TZAESBASC_RESR_AER7_Pos) /**< (TZAESBASC_RESR) A region x address error has occurred since the last read of the Region Error Status register. Position  */
#define TZAESBASC_RESR_Msk                    _U_(0x000000FF)                                      /**< (TZAESBASC_RESR) Register Mask  */

#define TZAESBASC_RESR_AER_Pos                _U_(0)                                               /**< (TZAESBASC_RESR Position) Region 7 Address Error */
#define TZAESBASC_RESR_AER_Msk                (_U_(0xFF) << TZAESBASC_RESR_AER_Pos)                /**< (TZAESBASC_RESR Mask) AER */
#define TZAESBASC_RESR_AER(value)             (TZAESBASC_RESR_AER_Msk & ((value) << TZAESBASC_RESR_AER_Pos)) 

/* -------- TZAESBASC_RSSR : (TZAESBASC Offset: 0x94) ( R/ 32) Region Synchronization Status -------- */
#define TZAESBASC_RSSR_RESETVALUE             _U_(0x00)                                            /**<  (TZAESBASC_RSSR) Region Synchronization Status  Reset Value */

#define TZAESBASC_RSSR_SYNC_Pos               _U_(0)                                               /**< (TZAESBASC_RSSR) Region Synchronization Status Position */
#define TZAESBASC_RSSR_SYNC_Msk               (_U_(0x1) << TZAESBASC_RSSR_SYNC_Pos)                /**< (TZAESBASC_RSSR) Region Synchronization Status Mask */
#define TZAESBASC_RSSR_SYNC(value)            (TZAESBASC_RSSR_SYNC_Msk & ((value) << TZAESBASC_RSSR_SYNC_Pos))
#define   TZAESBASC_RSSR_SYNC_0_Val           _U_(0x0)                                             /**< (TZAESBASC_RSSR) Synchronization of the region configuration is done.  */
#define   TZAESBASC_RSSR_SYNC_1_Val           _U_(0x1)                                             /**< (TZAESBASC_RSSR) A region configuration is in progress.  */
#define TZAESBASC_RSSR_SYNC_0                 (TZAESBASC_RSSR_SYNC_0_Val << TZAESBASC_RSSR_SYNC_Pos) /**< (TZAESBASC_RSSR) Synchronization of the region configuration is done. Position  */
#define TZAESBASC_RSSR_SYNC_1                 (TZAESBASC_RSSR_SYNC_1_Val << TZAESBASC_RSSR_SYNC_Pos) /**< (TZAESBASC_RSSR) A region configuration is in progress. Position  */
#define TZAESBASC_RSSR_Msk                    _U_(0x00000001)                                      /**< (TZAESBASC_RSSR) Register Mask  */


/* -------- TZAESBASC_WPMR : (TZAESBASC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define TZAESBASC_WPMR_RESETVALUE             _U_(0x00)                                            /**<  (TZAESBASC_WPMR) Write Protection Mode Register  Reset Value */

#define TZAESBASC_WPMR_WPEN_Pos               _U_(0)                                               /**< (TZAESBASC_WPMR) Write Protection Enable Position */
#define TZAESBASC_WPMR_WPEN_Msk               (_U_(0x1) << TZAESBASC_WPMR_WPEN_Pos)                /**< (TZAESBASC_WPMR) Write Protection Enable Mask */
#define TZAESBASC_WPMR_WPEN(value)            (TZAESBASC_WPMR_WPEN_Msk & ((value) << TZAESBASC_WPMR_WPEN_Pos))
#define   TZAESBASC_WPMR_WPEN_0_Val           _U_(0x0)                                             /**< (TZAESBASC_WPMR) Disables the write protection if WPKEY corresponds to 0x415343 ("ASC" in ASCII).  */
#define   TZAESBASC_WPMR_WPEN_1_Val           _U_(0x1)                                             /**< (TZAESBASC_WPMR) Enables the write protection. All accesses to configuration registers are canceled and generate an error in the TZAESBASC_WPSR register.  */
#define TZAESBASC_WPMR_WPEN_0                 (TZAESBASC_WPMR_WPEN_0_Val << TZAESBASC_WPMR_WPEN_Pos) /**< (TZAESBASC_WPMR) Disables the write protection if WPKEY corresponds to 0x415343 ("ASC" in ASCII). Position  */
#define TZAESBASC_WPMR_WPEN_1                 (TZAESBASC_WPMR_WPEN_1_Val << TZAESBASC_WPMR_WPEN_Pos) /**< (TZAESBASC_WPMR) Enables the write protection. All accesses to configuration registers are canceled and generate an error in the TZAESBASC_WPSR register. Position  */
#define TZAESBASC_WPMR_WPKEY_Pos              _U_(8)                                               /**< (TZAESBASC_WPMR) Write Protection Key Position */
#define TZAESBASC_WPMR_WPKEY_Msk              (_U_(0xFFFFFF) << TZAESBASC_WPMR_WPKEY_Pos)          /**< (TZAESBASC_WPMR) Write Protection Key Mask */
#define TZAESBASC_WPMR_WPKEY(value)           (TZAESBASC_WPMR_WPKEY_Msk & ((value) << TZAESBASC_WPMR_WPKEY_Pos))
#define   TZAESBASC_WPMR_WPKEY_PASSWD_Val     _U_(0x415343)                                        /**< (TZAESBASC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads at 0.  */
#define TZAESBASC_WPMR_WPKEY_PASSWD           (TZAESBASC_WPMR_WPKEY_PASSWD_Val << TZAESBASC_WPMR_WPKEY_Pos) /**< (TZAESBASC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads at 0. Position  */
#define TZAESBASC_WPMR_Msk                    _U_(0xFFFFFF01)                                      /**< (TZAESBASC_WPMR) Register Mask  */


/* -------- TZAESBASC_WPSR : (TZAESBASC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define TZAESBASC_WPSR_RESETVALUE             _U_(0x00)                                            /**<  (TZAESBASC_WPSR) Write Protection Status Register  Reset Value */

#define TZAESBASC_WPSR_WPVS_Pos               _U_(0)                                               /**< (TZAESBASC_WPSR) Write Protection Violation Status Position */
#define TZAESBASC_WPSR_WPVS_Msk               (_U_(0x1) << TZAESBASC_WPSR_WPVS_Pos)                /**< (TZAESBASC_WPSR) Write Protection Violation Status Mask */
#define TZAESBASC_WPSR_WPVS(value)            (TZAESBASC_WPSR_WPVS_Msk & ((value) << TZAESBASC_WPSR_WPVS_Pos))
#define   TZAESBASC_WPSR_WPVS_0_Val           _U_(0x0)                                             /**< (TZAESBASC_WPSR) No write protection violation has occurred since the last read of IP_Acronym_WPSR.  */
#define   TZAESBASC_WPSR_WPVS_1_Val           _U_(0x1)                                             /**< (TZAESBASC_WPSR) A write protection violation has occurred since the last read of IP_Acronym_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC.  */
#define TZAESBASC_WPSR_WPVS_0                 (TZAESBASC_WPSR_WPVS_0_Val << TZAESBASC_WPSR_WPVS_Pos) /**< (TZAESBASC_WPSR) No write protection violation has occurred since the last read of IP_Acronym_WPSR. Position  */
#define TZAESBASC_WPSR_WPVS_1                 (TZAESBASC_WPSR_WPVS_1_Val << TZAESBASC_WPSR_WPVS_Pos) /**< (TZAESBASC_WPSR) A write protection violation has occurred since the last read of IP_Acronym_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC. Position  */
#define TZAESBASC_WPSR_WPSRC_Pos              _U_(8)                                               /**< (TZAESBASC_WPSR) Write Protection Source Position */
#define TZAESBASC_WPSR_WPSRC_Msk              (_U_(0xFFFF) << TZAESBASC_WPSR_WPSRC_Pos)            /**< (TZAESBASC_WPSR) Write Protection Source Mask */
#define TZAESBASC_WPSR_WPSRC(value)           (TZAESBASC_WPSR_WPSRC_Msk & ((value) << TZAESBASC_WPSR_WPSRC_Pos))
#define TZAESBASC_WPSR_Msk                    _U_(0x00FFFF01)                                      /**< (TZAESBASC_WPSR) Register Mask  */


/* -------- TZAESBASC_VERSION : (TZAESBASC Offset: 0xFC) ( R/ 32) Version Register -------- */
#define TZAESBASC_VERSION_VERSION_Pos         _U_(0)                                               /**< (TZAESBASC_VERSION) Version of the Hardware Module Position */
#define TZAESBASC_VERSION_VERSION_Msk         (_U_(0xFFF) << TZAESBASC_VERSION_VERSION_Pos)        /**< (TZAESBASC_VERSION) Version of the Hardware Module Mask */
#define TZAESBASC_VERSION_VERSION(value)      (TZAESBASC_VERSION_VERSION_Msk & ((value) << TZAESBASC_VERSION_VERSION_Pos))
#define TZAESBASC_VERSION_MFN_Pos             _U_(16)                                              /**< (TZAESBASC_VERSION) Metal Fix Number Position */
#define TZAESBASC_VERSION_MFN_Msk             (_U_(0x7) << TZAESBASC_VERSION_MFN_Pos)              /**< (TZAESBASC_VERSION) Metal Fix Number Mask */
#define TZAESBASC_VERSION_MFN(value)          (TZAESBASC_VERSION_MFN_Msk & ((value) << TZAESBASC_VERSION_MFN_Pos))
#define TZAESBASC_VERSION_Msk                 _U_(0x00070FFF)                                      /**< (TZAESBASC_VERSION) Register Mask  */


/** \brief TZAESBASC register offsets definitions */
#define TZAESBASC_RBAR_REG_OFST        (0x00)              /**< (TZAESBASC_RBAR) Region Base Address  Offset */
#define TZAESBASC_RTAR_REG_OFST        (0x04)              /**< (TZAESBASC_RTAR) Region Top Address  Offset */
#define TZAESBASC_RSECR_REG_OFST       (0x80)              /**< (TZAESBASC_RSECR) Region Security Offset */
#define TZAESBASC_RER_REG_OFST         (0x84)              /**< (TZAESBASC_RER) Region Enable Offset */
#define TZAESBASC_RDR_REG_OFST         (0x88)              /**< (TZAESBASC_RDR) Region Disable Offset */
#define TZAESBASC_RSR_REG_OFST         (0x8C)              /**< (TZAESBASC_RSR) Region Status Offset */
#define TZAESBASC_RESR_REG_OFST        (0x90)              /**< (TZAESBASC_RESR) Region Error Status Offset */
#define TZAESBASC_RSSR_REG_OFST        (0x94)              /**< (TZAESBASC_RSSR) Region Synchronization Status Offset */
#define TZAESBASC_WPMR_REG_OFST        (0xE4)              /**< (TZAESBASC_WPMR) Write Protection Mode Register Offset */
#define TZAESBASC_WPSR_REG_OFST        (0xE8)              /**< (TZAESBASC_WPSR) Write Protection Status Register Offset */
#define TZAESBASC_VERSION_REG_OFST     (0xFC)              /**< (TZAESBASC_VERSION) Version Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TZAESBASC_RID register API structure */
typedef struct
{
  __IO  uint32_t                       TZAESBASC_RBAR;     /**< Offset: 0x00 (R/W  32) Region Base Address  */
  __IO  uint32_t                       TZAESBASC_RTAR;     /**< Offset: 0x04 (R/W  32) Region Top Address  */
} tzaesbasc_rid_registers_t;

#define TZAESBASC_RID_NUMBER _U_(8)

/** \brief TZAESBASC register API structure */
typedef struct
{  /* AES Bridge Address Space Controller */
        tzaesbasc_rid_registers_t      TZAESBASC_RID[TZAESBASC_RID_NUMBER]; /**< Offset: 0x00  */
  __I   uint8_t                        Reserved1[0x40];
  __IO  uint32_t                       TZAESBASC_RSECR;    /**< Offset: 0x80 (R/W  32) Region Security */
  __O   uint32_t                       TZAESBASC_RER;      /**< Offset: 0x84 ( /W  32) Region Enable */
  __O   uint32_t                       TZAESBASC_RDR;      /**< Offset: 0x88 ( /W  32) Region Disable */
  __I   uint32_t                       TZAESBASC_RSR;      /**< Offset: 0x8C (R/   32) Region Status */
  __I   uint32_t                       TZAESBASC_RESR;     /**< Offset: 0x90 (R/   32) Region Error Status */
  __I   uint32_t                       TZAESBASC_RSSR;     /**< Offset: 0x94 (R/   32) Region Synchronization Status */
  __I   uint8_t                        Reserved2[0x4C];
  __IO  uint32_t                       TZAESBASC_WPMR;     /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       TZAESBASC_WPSR;     /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved3[0x10];
  __I   uint32_t                       TZAESBASC_VERSION;  /**< Offset: 0xFC (R/   32) Version Register */
} tzaesbasc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_TZAESBASC_COMPONENT_H_ */
