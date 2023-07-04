/*
 * Component description for TZC
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
#ifndef _SAMA7G_TZC_COMPONENT_H_
#define _SAMA7G_TZC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TZC                                          */
/* ************************************************************************** */

/* -------- TZC_FAIL_ADDRESS_LOW_ : (TZC Offset: 0x00) ( R/ 32) Fail Address Low Register -------- */
#define TZC_FAIL_ADDRESS_LOW__RESETVALUE      _U_(0x00)                                            /**<  (TZC_FAIL_ADDRESS_LOW_) Fail Address Low Register  Reset Value */

#define TZC_FAIL_ADDRESS_LOW__ADDR_STATUS_LOW_Pos _U_(0)                                               /**< (TZC_FAIL_ADDRESS_LOW_) Failure access's low address Position */
#define TZC_FAIL_ADDRESS_LOW__ADDR_STATUS_LOW_Msk (_U_(0xFFFFFFFF) << TZC_FAIL_ADDRESS_LOW__ADDR_STATUS_LOW_Pos) /**< (TZC_FAIL_ADDRESS_LOW_) Failure access's low address Mask */
#define TZC_FAIL_ADDRESS_LOW__ADDR_STATUS_LOW(value) (TZC_FAIL_ADDRESS_LOW__ADDR_STATUS_LOW_Msk & ((value) << TZC_FAIL_ADDRESS_LOW__ADDR_STATUS_LOW_Pos))
#define TZC_FAIL_ADDRESS_LOW__Msk             _U_(0xFFFFFFFF)                                      /**< (TZC_FAIL_ADDRESS_LOW_) Register Mask  */


/* -------- TZC_FAIL_ADDRESS_HIGH_ : (TZC Offset: 0x04) ( R/ 32) Fail Address High Register -------- */
#define TZC_FAIL_ADDRESS_HIGH__RESETVALUE     _U_(0x00)                                            /**<  (TZC_FAIL_ADDRESS_HIGH_) Fail Address High Register  Reset Value */

#define TZC_FAIL_ADDRESS_HIGH__Msk            _U_(0x00000000)                                      /**< (TZC_FAIL_ADDRESS_HIGH_) Register Mask  */


/* -------- TZC_FAIL_CONTROL_ : (TZC Offset: 0x08) ( R/ 32) Fail Control Register -------- */
#define TZC_FAIL_CONTROL__RESETVALUE          _U_(0x00)                                            /**<  (TZC_FAIL_CONTROL_) Fail Control Register  Reset Value */

#define TZC_FAIL_CONTROL__PRIVILEGED_Pos      _U_(20)                                              /**< (TZC_FAIL_CONTROL_) Failure access's privileged value Position */
#define TZC_FAIL_CONTROL__PRIVILEGED_Msk      (_U_(0x1) << TZC_FAIL_CONTROL__PRIVILEGED_Pos)       /**< (TZC_FAIL_CONTROL_) Failure access's privileged value Mask */
#define TZC_FAIL_CONTROL__PRIVILEGED(value)   (TZC_FAIL_CONTROL__PRIVILEGED_Msk & ((value) << TZC_FAIL_CONTROL__PRIVILEGED_Pos))
#define TZC_FAIL_CONTROL__NONSECURE_Pos       _U_(21)                                              /**< (TZC_FAIL_CONTROL_) Failure access's security value Position */
#define TZC_FAIL_CONTROL__NONSECURE_Msk       (_U_(0x1) << TZC_FAIL_CONTROL__NONSECURE_Pos)        /**< (TZC_FAIL_CONTROL_) Failure access's security value Mask */
#define TZC_FAIL_CONTROL__NONSECURE(value)    (TZC_FAIL_CONTROL__NONSECURE_Msk & ((value) << TZC_FAIL_CONTROL__NONSECURE_Pos))
#define TZC_FAIL_CONTROL__DIRECTION_Pos       _U_(24)                                              /**< (TZC_FAIL_CONTROL_) Failure access's direction Position */
#define TZC_FAIL_CONTROL__DIRECTION_Msk       (_U_(0x1) << TZC_FAIL_CONTROL__DIRECTION_Pos)        /**< (TZC_FAIL_CONTROL_) Failure access's direction Mask */
#define TZC_FAIL_CONTROL__DIRECTION(value)    (TZC_FAIL_CONTROL__DIRECTION_Msk & ((value) << TZC_FAIL_CONTROL__DIRECTION_Pos))
#define TZC_FAIL_CONTROL__Msk                 _U_(0x01300000)                                      /**< (TZC_FAIL_CONTROL_) Register Mask  */


/* -------- TZC_FAIL_ID_ : (TZC Offset: 0x0C) ( R/ 32) Fail ID Register -------- */
#define TZC_FAIL_ID__RESETVALUE               _U_(0x00)                                            /**<  (TZC_FAIL_ID_) Fail ID Register  Reset Value */

#define TZC_FAIL_ID__ID_Pos                   _U_(0)                                               /**< (TZC_FAIL_ID_) Failure access's ID Position */
#define TZC_FAIL_ID__ID_Msk                   (_U_(0x1FF) << TZC_FAIL_ID__ID_Pos)                  /**< (TZC_FAIL_ID_) Failure access's ID Mask */
#define TZC_FAIL_ID__ID(value)                (TZC_FAIL_ID__ID_Msk & ((value) << TZC_FAIL_ID__ID_Pos))
#define TZC_FAIL_ID__VNET_Pos                 _U_(24)                                              /**< (TZC_FAIL_ID_) Failure access's virtual network Position */
#define TZC_FAIL_ID__VNET_Msk                 (_U_(0xF) << TZC_FAIL_ID__VNET_Pos)                  /**< (TZC_FAIL_ID_) Failure access's virtual network Mask */
#define TZC_FAIL_ID__VNET(value)              (TZC_FAIL_ID__VNET_Msk & ((value) << TZC_FAIL_ID__VNET_Pos))
#define TZC_FAIL_ID__Msk                      _U_(0x0F0001FF)                                      /**< (TZC_FAIL_ID_) Register Mask  */


/* -------- TZC_BUILD_CONFIG : (TZC Offset: 0x00) ( R/ 32) Build Configuration Register -------- */
#define TZC_BUILD_CONFIG_RESETVALUE           _U_(0x3001F08)                                       /**<  (TZC_BUILD_CONFIG) Build Configuration Register  Reset Value */

#define TZC_BUILD_CONFIG_NO_OF_REGIONS_Pos    _U_(0)                                               /**< (TZC_BUILD_CONFIG) Number of regions minus one Position */
#define TZC_BUILD_CONFIG_NO_OF_REGIONS_Msk    (_U_(0x1F) << TZC_BUILD_CONFIG_NO_OF_REGIONS_Pos)    /**< (TZC_BUILD_CONFIG) Number of regions minus one Mask */
#define TZC_BUILD_CONFIG_NO_OF_REGIONS(value) (TZC_BUILD_CONFIG_NO_OF_REGIONS_Msk & ((value) << TZC_BUILD_CONFIG_NO_OF_REGIONS_Pos))
#define TZC_BUILD_CONFIG_ADDRESS_WIDTH_Pos    _U_(8)                                               /**< (TZC_BUILD_CONFIG) Address width  minus one Position */
#define TZC_BUILD_CONFIG_ADDRESS_WIDTH_Msk    (_U_(0x3F) << TZC_BUILD_CONFIG_ADDRESS_WIDTH_Pos)    /**< (TZC_BUILD_CONFIG) Address width  minus one Mask */
#define TZC_BUILD_CONFIG_ADDRESS_WIDTH(value) (TZC_BUILD_CONFIG_ADDRESS_WIDTH_Msk & ((value) << TZC_BUILD_CONFIG_ADDRESS_WIDTH_Pos))
#define TZC_BUILD_CONFIG_NO_OF_FILTERS_Pos    _U_(24)                                              /**< (TZC_BUILD_CONFIG) Number of filters -minus one Position */
#define TZC_BUILD_CONFIG_NO_OF_FILTERS_Msk    (_U_(0x3) << TZC_BUILD_CONFIG_NO_OF_FILTERS_Pos)     /**< (TZC_BUILD_CONFIG) Number of filters -minus one Mask */
#define TZC_BUILD_CONFIG_NO_OF_FILTERS(value) (TZC_BUILD_CONFIG_NO_OF_FILTERS_Msk & ((value) << TZC_BUILD_CONFIG_NO_OF_FILTERS_Pos))
#define TZC_BUILD_CONFIG_Msk                  _U_(0x03003F1F)                                      /**< (TZC_BUILD_CONFIG) Register Mask  */


/* -------- TZC_ACTION : (TZC Offset: 0x04) (R/W 32) Action Register -------- */
#define TZC_ACTION_RESETVALUE                 _U_(0x00)                                            /**<  (TZC_ACTION) Action Register  Reset Value */

#define TZC_ACTION_REACTION_VALUE_Pos         _U_(0)                                               /**< (TZC_ACTION) Failure Reaction Position */
#define TZC_ACTION_REACTION_VALUE_Msk         (_U_(0x3) << TZC_ACTION_REACTION_VALUE_Pos)          /**< (TZC_ACTION) Failure Reaction Mask */
#define TZC_ACTION_REACTION_VALUE(value)      (TZC_ACTION_REACTION_VALUE_Msk & ((value) << TZC_ACTION_REACTION_VALUE_Pos))
#define TZC_ACTION_Msk                        _U_(0x00000003)                                      /**< (TZC_ACTION) Register Mask  */


/* -------- TZC_GATE_KEEPER : (TZC Offset: 0x08) (R/W 32) Gate Keeper Register -------- */
#define TZC_GATE_KEEPER_RESETVALUE            _U_(0x00)                                            /**<  (TZC_GATE_KEEPER) Gate Keeper Register  Reset Value */

#define TZC_GATE_KEEPER_OPEN_REQUEST_Pos      _U_(0)                                               /**< (TZC_GATE_KEEPER) Gate keeper open request Position */
#define TZC_GATE_KEEPER_OPEN_REQUEST_Msk      (_U_(0xF) << TZC_GATE_KEEPER_OPEN_REQUEST_Pos)       /**< (TZC_GATE_KEEPER) Gate keeper open request Mask */
#define TZC_GATE_KEEPER_OPEN_REQUEST(value)   (TZC_GATE_KEEPER_OPEN_REQUEST_Msk & ((value) << TZC_GATE_KEEPER_OPEN_REQUEST_Pos))
#define TZC_GATE_KEEPER_OPEN_STATUS_Pos       _U_(16)                                              /**< (TZC_GATE_KEEPER) Gate keeper open status Position */
#define TZC_GATE_KEEPER_OPEN_STATUS_Msk       (_U_(0xF) << TZC_GATE_KEEPER_OPEN_STATUS_Pos)        /**< (TZC_GATE_KEEPER) Gate keeper open status Mask */
#define TZC_GATE_KEEPER_OPEN_STATUS(value)    (TZC_GATE_KEEPER_OPEN_STATUS_Msk & ((value) << TZC_GATE_KEEPER_OPEN_STATUS_Pos))
#define TZC_GATE_KEEPER_Msk                   _U_(0x000F000F)                                      /**< (TZC_GATE_KEEPER) Register Mask  */


/* -------- TZC_SPECULATION_CTRL : (TZC Offset: 0x0C) (R/W 32) Speculation Control Register -------- */
#define TZC_SPECULATION_CTRL_RESETVALUE       _U_(0x00)                                            /**<  (TZC_SPECULATION_CTRL) Speculation Control Register  Reset Value */

#define TZC_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos _U_(0)                                               /**< (TZC_SPECULATION_CTRL) Read speculation disable control Position */
#define TZC_SPECULATION_CTRL_READ_SPEC_DISABLE_Msk (_U_(0x1) << TZC_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos) /**< (TZC_SPECULATION_CTRL) Read speculation disable control Mask */
#define TZC_SPECULATION_CTRL_READ_SPEC_DISABLE(value) (TZC_SPECULATION_CTRL_READ_SPEC_DISABLE_Msk & ((value) << TZC_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos))
#define TZC_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos _U_(1)                                               /**< (TZC_SPECULATION_CTRL) Write speculation disable control Position */
#define TZC_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Msk (_U_(0x1) << TZC_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos) /**< (TZC_SPECULATION_CTRL) Write speculation disable control Mask */
#define TZC_SPECULATION_CTRL_WRITE_SPEC_DISABLE(value) (TZC_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Msk & ((value) << TZC_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos))
#define TZC_SPECULATION_CTRL_Msk              _U_(0x00000003)                                      /**< (TZC_SPECULATION_CTRL) Register Mask  */


/* -------- TZC_INT_STATUS : (TZC Offset: 0x10) ( R/ 32) Interrupt Status Register -------- */
#define TZC_INT_STATUS_RESETVALUE             _U_(0x00)                                            /**<  (TZC_INT_STATUS) Interrupt Status Register  Reset Value */

#define TZC_INT_STATUS_STATUS_Pos             _U_(0)                                               /**< (TZC_INT_STATUS) Interrupt status Position */
#define TZC_INT_STATUS_STATUS_Msk             (_U_(0xF) << TZC_INT_STATUS_STATUS_Pos)              /**< (TZC_INT_STATUS) Interrupt status Mask */
#define TZC_INT_STATUS_STATUS(value)          (TZC_INT_STATUS_STATUS_Msk & ((value) << TZC_INT_STATUS_STATUS_Pos))
#define TZC_INT_STATUS_OVERRUN_Pos            _U_(8)                                               /**< (TZC_INT_STATUS) Interrupt status - overrun Position */
#define TZC_INT_STATUS_OVERRUN_Msk            (_U_(0xF) << TZC_INT_STATUS_OVERRUN_Pos)             /**< (TZC_INT_STATUS) Interrupt status - overrun Mask */
#define TZC_INT_STATUS_OVERRUN(value)         (TZC_INT_STATUS_OVERRUN_Msk & ((value) << TZC_INT_STATUS_OVERRUN_Pos))
#define TZC_INT_STATUS_OVERLAP_Pos            _U_(16)                                              /**< (TZC_INT_STATUS) Interrupt status - overlap Position */
#define TZC_INT_STATUS_OVERLAP_Msk            (_U_(0xF) << TZC_INT_STATUS_OVERLAP_Pos)             /**< (TZC_INT_STATUS) Interrupt status - overlap Mask */
#define TZC_INT_STATUS_OVERLAP(value)         (TZC_INT_STATUS_OVERLAP_Msk & ((value) << TZC_INT_STATUS_OVERLAP_Pos))
#define TZC_INT_STATUS_Msk                    _U_(0x000F0F0F)                                      /**< (TZC_INT_STATUS) Register Mask  */


/* -------- TZC_INT_CLEAR : (TZC Offset: 0x14) ( /W 32) Interrupt Clear Register -------- */
#define TZC_INT_CLEAR_RESETVALUE              _U_(0x00)                                            /**<  (TZC_INT_CLEAR) Interrupt Clear Register  Reset Value */

#define TZC_INT_CLEAR_CLEAR_Pos               _U_(0)                                               /**< (TZC_INT_CLEAR) Interrupt clear Position */
#define TZC_INT_CLEAR_CLEAR_Msk               (_U_(0xF) << TZC_INT_CLEAR_CLEAR_Pos)                /**< (TZC_INT_CLEAR) Interrupt clear Mask */
#define TZC_INT_CLEAR_CLEAR(value)            (TZC_INT_CLEAR_CLEAR_Msk & ((value) << TZC_INT_CLEAR_CLEAR_Pos))
#define TZC_INT_CLEAR_Msk                     _U_(0x0000000F)                                      /**< (TZC_INT_CLEAR) Register Mask  */


/* -------- TZC_REGION_BASE_LOW_0 : (TZC Offset: 0x100) ( R/ 32) Region 0 Base Address Low Register -------- */
#define TZC_REGION_BASE_LOW_0_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_BASE_LOW_0) Region 0 Base Address Low Register  Reset Value */

#define TZC_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Pos _U_(12)                                              /**< (TZC_REGION_BASE_LOW_0) Region base address lower 32bits. Position */
#define TZC_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Msk (_U_(0xFFFFF) << TZC_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Pos) /**< (TZC_REGION_BASE_LOW_0) Region base address lower 32bits. Mask */
#define TZC_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0(value) (TZC_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Msk & ((value) << TZC_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Pos))
#define TZC_REGION_BASE_LOW_0_Msk             _U_(0xFFFFF000)                                      /**< (TZC_REGION_BASE_LOW_0) Register Mask  */


/* -------- TZC_REGION_BASE_HIGH_0 : (TZC Offset: 0x104) ( R/ 32) Region 0 Base Address High Register -------- */
#define TZC_REGION_BASE_HIGH_0_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_BASE_HIGH_0) Region 0 Base Address High Register  Reset Value */

#define TZC_REGION_BASE_HIGH_0_Msk            _U_(0x00000000)                                      /**< (TZC_REGION_BASE_HIGH_0) Register Mask  */


/* -------- TZC_REGION_TOP_LOW_0 : (TZC Offset: 0x108) ( R/ 32) Region 0 Top Address Low Register -------- */
#define TZC_REGION_TOP_LOW_0_RESETVALUE       _U_(0xFFFFFFFF)                                      /**<  (TZC_REGION_TOP_LOW_0) Region 0 Top Address Low Register  Reset Value */

#define TZC_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Pos _U_(12)                                              /**< (TZC_REGION_TOP_LOW_0) Region top address lower 32bits. Position */
#define TZC_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Msk (_U_(0xFFFFF) << TZC_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Pos) /**< (TZC_REGION_TOP_LOW_0) Region top address lower 32bits. Mask */
#define TZC_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0(value) (TZC_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Msk & ((value) << TZC_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Pos))
#define TZC_REGION_TOP_LOW_0_Msk              _U_(0xFFFFF000)                                      /**< (TZC_REGION_TOP_LOW_0) Register Mask  */


/* -------- TZC_REGION_TOP_HIGH_0 : (TZC Offset: 0x10C) ( R/ 32) Region 0 Top Address High Register -------- */
#define TZC_REGION_TOP_HIGH_0_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_TOP_HIGH_0) Region 0 Top Address High Register  Reset Value */

#define TZC_REGION_TOP_HIGH_0_Msk             _U_(0x00000000)                                      /**< (TZC_REGION_TOP_HIGH_0) Register Mask  */


/* -------- TZC_REGION_ATTRIBUTES_0 : (TZC Offset: 0x110) (R/W 32) Region 0 Attribute Register -------- */
#define TZC_REGION_ATTRIBUTES_0_RESETVALUE    _U_(0x0F)                                            /**<  (TZC_REGION_ATTRIBUTES_0) Region 0 Attribute Register  Reset Value */

#define TZC_REGION_ATTRIBUTES_0_FILTER_EN_Pos _U_(0)                                               /**< (TZC_REGION_ATTRIBUTES_0) Region filter enables Position */
#define TZC_REGION_ATTRIBUTES_0_FILTER_EN_Msk (_U_(0xF) << TZC_REGION_ATTRIBUTES_0_FILTER_EN_Pos)  /**< (TZC_REGION_ATTRIBUTES_0) Region filter enables Mask */
#define TZC_REGION_ATTRIBUTES_0_FILTER_EN(value) (TZC_REGION_ATTRIBUTES_0_FILTER_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_0_FILTER_EN_Pos))
#define TZC_REGION_ATTRIBUTES_0_S_RD_EN_Pos   _U_(30)                                              /**< (TZC_REGION_ATTRIBUTES_0) Region secure read enable Position */
#define TZC_REGION_ATTRIBUTES_0_S_RD_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_0_S_RD_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_0) Region secure read enable Mask */
#define TZC_REGION_ATTRIBUTES_0_S_RD_EN(value) (TZC_REGION_ATTRIBUTES_0_S_RD_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_0_S_RD_EN_Pos))
#define TZC_REGION_ATTRIBUTES_0_S_WR_EN_Pos   _U_(31)                                              /**< (TZC_REGION_ATTRIBUTES_0) Region secure write enable Position */
#define TZC_REGION_ATTRIBUTES_0_S_WR_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_0_S_WR_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_0) Region secure write enable Mask */
#define TZC_REGION_ATTRIBUTES_0_S_WR_EN(value) (TZC_REGION_ATTRIBUTES_0_S_WR_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_0_S_WR_EN_Pos))
#define TZC_REGION_ATTRIBUTES_0_Msk           _U_(0xC000000F)                                      /**< (TZC_REGION_ATTRIBUTES_0) Register Mask  */


/* -------- TZC_REGION_ID_ACCESS_0 : (TZC Offset: 0x114) (R/W 32) Region 0 ID Access Register -------- */
#define TZC_REGION_ID_ACCESS_0_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_ID_ACCESS_0) Region 0 ID Access Register  Reset Value */

#define TZC_REGION_ID_ACCESS_0_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_REGION_ID_ACCESS_0) Region non-secure access ID read enable Position */
#define TZC_REGION_ID_ACCESS_0_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_0_NSAID_RD_EN_Pos) /**< (TZC_REGION_ID_ACCESS_0) Region non-secure access ID read enable Mask */
#define TZC_REGION_ID_ACCESS_0_NSAID_RD_EN(value) (TZC_REGION_ID_ACCESS_0_NSAID_RD_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_0_NSAID_RD_EN_Pos))
#define TZC_REGION_ID_ACCESS_0_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_REGION_ID_ACCESS_0) Region non-secure access ID write enable Position */
#define TZC_REGION_ID_ACCESS_0_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_0_NSAID_WR_EN_Pos) /**< (TZC_REGION_ID_ACCESS_0) Region non-secure access ID write enable Mask */
#define TZC_REGION_ID_ACCESS_0_NSAID_WR_EN(value) (TZC_REGION_ID_ACCESS_0_NSAID_WR_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_0_NSAID_WR_EN_Pos))
#define TZC_REGION_ID_ACCESS_0_Msk            _U_(0xFFFFFFFF)                                      /**< (TZC_REGION_ID_ACCESS_0) Register Mask  */


/* -------- TZC_REGION_BASE_LOW_1 : (TZC Offset: 0x120) (R/W 32) Region 1 Base Address Low Register -------- */
#define TZC_REGION_BASE_LOW_1_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_BASE_LOW_1) Region 1 Base Address Low Register  Reset Value */

#define TZC_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Pos _U_(12)                                              /**< (TZC_REGION_BASE_LOW_1) Region base address lower 32bits. Position */
#define TZC_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Msk (_U_(0xFFFFF) << TZC_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Pos) /**< (TZC_REGION_BASE_LOW_1) Region base address lower 32bits. Mask */
#define TZC_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1(value) (TZC_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Msk & ((value) << TZC_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Pos))
#define TZC_REGION_BASE_LOW_1_Msk             _U_(0xFFFFF000)                                      /**< (TZC_REGION_BASE_LOW_1) Register Mask  */


/* -------- TZC_REGION_BASE_HIGH_1 : (TZC Offset: 0x124) (R/W 32) Region 1 Base Address High Register -------- */
#define TZC_REGION_BASE_HIGH_1_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_BASE_HIGH_1) Region 1 Base Address High Register  Reset Value */

#define TZC_REGION_BASE_HIGH_1_Msk            _U_(0x00000000)                                      /**< (TZC_REGION_BASE_HIGH_1) Register Mask  */


/* -------- TZC_REGION_TOP_LOW_1 : (TZC Offset: 0x128) (R/W 32) Region 1 Top Address Low Register -------- */
#define TZC_REGION_TOP_LOW_1_RESETVALUE       _U_(0xFFF)                                           /**<  (TZC_REGION_TOP_LOW_1) Region 1 Top Address Low Register  Reset Value */

#define TZC_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Pos _U_(12)                                              /**< (TZC_REGION_TOP_LOW_1) Region top address lower 32bits. Position */
#define TZC_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Msk (_U_(0xFFFFF) << TZC_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Pos) /**< (TZC_REGION_TOP_LOW_1) Region top address lower 32bits. Mask */
#define TZC_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1(value) (TZC_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Msk & ((value) << TZC_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Pos))
#define TZC_REGION_TOP_LOW_1_Msk              _U_(0xFFFFF000)                                      /**< (TZC_REGION_TOP_LOW_1) Register Mask  */


/* -------- TZC_REGION_TOP_HIGH_1 : (TZC Offset: 0x12C) (R/W 32) Region 1 Top Address High Register -------- */
#define TZC_REGION_TOP_HIGH_1_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_TOP_HIGH_1) Region 1 Top Address High Register  Reset Value */

#define TZC_REGION_TOP_HIGH_1_Msk             _U_(0x00000000)                                      /**< (TZC_REGION_TOP_HIGH_1) Register Mask  */


/* -------- TZC_REGION_ATTRIBUTES_1 : (TZC Offset: 0x130) (R/W 32) Region 1 Attribute Register -------- */
#define TZC_REGION_ATTRIBUTES_1_RESETVALUE    _U_(0x00)                                            /**<  (TZC_REGION_ATTRIBUTES_1) Region 1 Attribute Register  Reset Value */

#define TZC_REGION_ATTRIBUTES_1_FILTER_EN_Pos _U_(0)                                               /**< (TZC_REGION_ATTRIBUTES_1) Region filter enables Position */
#define TZC_REGION_ATTRIBUTES_1_FILTER_EN_Msk (_U_(0xF) << TZC_REGION_ATTRIBUTES_1_FILTER_EN_Pos)  /**< (TZC_REGION_ATTRIBUTES_1) Region filter enables Mask */
#define TZC_REGION_ATTRIBUTES_1_FILTER_EN(value) (TZC_REGION_ATTRIBUTES_1_FILTER_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_1_FILTER_EN_Pos))
#define TZC_REGION_ATTRIBUTES_1_S_RD_EN_Pos   _U_(30)                                              /**< (TZC_REGION_ATTRIBUTES_1) Region secure read enable Position */
#define TZC_REGION_ATTRIBUTES_1_S_RD_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_1_S_RD_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_1) Region secure read enable Mask */
#define TZC_REGION_ATTRIBUTES_1_S_RD_EN(value) (TZC_REGION_ATTRIBUTES_1_S_RD_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_1_S_RD_EN_Pos))
#define TZC_REGION_ATTRIBUTES_1_S_WR_EN_Pos   _U_(31)                                              /**< (TZC_REGION_ATTRIBUTES_1) Region secure write enable Position */
#define TZC_REGION_ATTRIBUTES_1_S_WR_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_1_S_WR_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_1) Region secure write enable Mask */
#define TZC_REGION_ATTRIBUTES_1_S_WR_EN(value) (TZC_REGION_ATTRIBUTES_1_S_WR_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_1_S_WR_EN_Pos))
#define TZC_REGION_ATTRIBUTES_1_Msk           _U_(0xC000000F)                                      /**< (TZC_REGION_ATTRIBUTES_1) Register Mask  */


/* -------- TZC_REGION_ID_ACCESS_1 : (TZC Offset: 0x134) (R/W 32) Region 1 ID Access Register -------- */
#define TZC_REGION_ID_ACCESS_1_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_ID_ACCESS_1) Region 1 ID Access Register  Reset Value */

#define TZC_REGION_ID_ACCESS_1_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_REGION_ID_ACCESS_1) Region non-secure access ID read enable Position */
#define TZC_REGION_ID_ACCESS_1_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_1_NSAID_RD_EN_Pos) /**< (TZC_REGION_ID_ACCESS_1) Region non-secure access ID read enable Mask */
#define TZC_REGION_ID_ACCESS_1_NSAID_RD_EN(value) (TZC_REGION_ID_ACCESS_1_NSAID_RD_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_1_NSAID_RD_EN_Pos))
#define TZC_REGION_ID_ACCESS_1_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_REGION_ID_ACCESS_1) Region non-secure access ID write enable Position */
#define TZC_REGION_ID_ACCESS_1_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_1_NSAID_WR_EN_Pos) /**< (TZC_REGION_ID_ACCESS_1) Region non-secure access ID write enable Mask */
#define TZC_REGION_ID_ACCESS_1_NSAID_WR_EN(value) (TZC_REGION_ID_ACCESS_1_NSAID_WR_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_1_NSAID_WR_EN_Pos))
#define TZC_REGION_ID_ACCESS_1_Msk            _U_(0xFFFFFFFF)                                      /**< (TZC_REGION_ID_ACCESS_1) Register Mask  */


/* -------- TZC_REGION_BASE_LOW_2 : (TZC Offset: 0x140) (R/W 32) Region 2 Base Address Low Register -------- */
#define TZC_REGION_BASE_LOW_2_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_BASE_LOW_2) Region 2 Base Address Low Register  Reset Value */

#define TZC_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Pos _U_(12)                                              /**< (TZC_REGION_BASE_LOW_2) Region base address lower 32bits. Position */
#define TZC_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Msk (_U_(0xFFFFF) << TZC_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Pos) /**< (TZC_REGION_BASE_LOW_2) Region base address lower 32bits. Mask */
#define TZC_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2(value) (TZC_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Msk & ((value) << TZC_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Pos))
#define TZC_REGION_BASE_LOW_2_Msk             _U_(0xFFFFF000)                                      /**< (TZC_REGION_BASE_LOW_2) Register Mask  */


/* -------- TZC_REGION_BASE_HIGH_2 : (TZC Offset: 0x144) (R/W 32) Region 2 Base Address High Register -------- */
#define TZC_REGION_BASE_HIGH_2_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_BASE_HIGH_2) Region 2 Base Address High Register  Reset Value */

#define TZC_REGION_BASE_HIGH_2_Msk            _U_(0x00000000)                                      /**< (TZC_REGION_BASE_HIGH_2) Register Mask  */


/* -------- TZC_REGION_TOP_LOW_2 : (TZC Offset: 0x148) (R/W 32) Region 2 Top Address Low Register -------- */
#define TZC_REGION_TOP_LOW_2_RESETVALUE       _U_(0xFFF)                                           /**<  (TZC_REGION_TOP_LOW_2) Region 2 Top Address Low Register  Reset Value */

#define TZC_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Pos _U_(12)                                              /**< (TZC_REGION_TOP_LOW_2) Region top address lower 32bits. Position */
#define TZC_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Msk (_U_(0xFFFFF) << TZC_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Pos) /**< (TZC_REGION_TOP_LOW_2) Region top address lower 32bits. Mask */
#define TZC_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2(value) (TZC_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Msk & ((value) << TZC_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Pos))
#define TZC_REGION_TOP_LOW_2_Msk              _U_(0xFFFFF000)                                      /**< (TZC_REGION_TOP_LOW_2) Register Mask  */


/* -------- TZC_REGION_TOP_HIGH_2 : (TZC Offset: 0x14C) (R/W 32) Region 2 Top Address High Register -------- */
#define TZC_REGION_TOP_HIGH_2_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_TOP_HIGH_2) Region 2 Top Address High Register  Reset Value */

#define TZC_REGION_TOP_HIGH_2_Msk             _U_(0x00000000)                                      /**< (TZC_REGION_TOP_HIGH_2) Register Mask  */


/* -------- TZC_REGION_ATTRIBUTES_2 : (TZC Offset: 0x150) (R/W 32) Region 2 Attribute Register -------- */
#define TZC_REGION_ATTRIBUTES_2_RESETVALUE    _U_(0x00)                                            /**<  (TZC_REGION_ATTRIBUTES_2) Region 2 Attribute Register  Reset Value */

#define TZC_REGION_ATTRIBUTES_2_FILTER_EN_Pos _U_(0)                                               /**< (TZC_REGION_ATTRIBUTES_2) Region filter enables Position */
#define TZC_REGION_ATTRIBUTES_2_FILTER_EN_Msk (_U_(0xF) << TZC_REGION_ATTRIBUTES_2_FILTER_EN_Pos)  /**< (TZC_REGION_ATTRIBUTES_2) Region filter enables Mask */
#define TZC_REGION_ATTRIBUTES_2_FILTER_EN(value) (TZC_REGION_ATTRIBUTES_2_FILTER_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_2_FILTER_EN_Pos))
#define TZC_REGION_ATTRIBUTES_2_S_RD_EN_Pos   _U_(30)                                              /**< (TZC_REGION_ATTRIBUTES_2) Region secure read enable Position */
#define TZC_REGION_ATTRIBUTES_2_S_RD_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_2_S_RD_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_2) Region secure read enable Mask */
#define TZC_REGION_ATTRIBUTES_2_S_RD_EN(value) (TZC_REGION_ATTRIBUTES_2_S_RD_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_2_S_RD_EN_Pos))
#define TZC_REGION_ATTRIBUTES_2_S_WR_EN_Pos   _U_(31)                                              /**< (TZC_REGION_ATTRIBUTES_2) Region secure write enable Position */
#define TZC_REGION_ATTRIBUTES_2_S_WR_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_2_S_WR_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_2) Region secure write enable Mask */
#define TZC_REGION_ATTRIBUTES_2_S_WR_EN(value) (TZC_REGION_ATTRIBUTES_2_S_WR_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_2_S_WR_EN_Pos))
#define TZC_REGION_ATTRIBUTES_2_Msk           _U_(0xC000000F)                                      /**< (TZC_REGION_ATTRIBUTES_2) Register Mask  */


/* -------- TZC_REGION_ID_ACCESS_2 : (TZC Offset: 0x154) (R/W 32) Region 2 ID Access Register -------- */
#define TZC_REGION_ID_ACCESS_2_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_ID_ACCESS_2) Region 2 ID Access Register  Reset Value */

#define TZC_REGION_ID_ACCESS_2_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_REGION_ID_ACCESS_2) Region non-secure access ID read enable Position */
#define TZC_REGION_ID_ACCESS_2_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_2_NSAID_RD_EN_Pos) /**< (TZC_REGION_ID_ACCESS_2) Region non-secure access ID read enable Mask */
#define TZC_REGION_ID_ACCESS_2_NSAID_RD_EN(value) (TZC_REGION_ID_ACCESS_2_NSAID_RD_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_2_NSAID_RD_EN_Pos))
#define TZC_REGION_ID_ACCESS_2_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_REGION_ID_ACCESS_2) Region non-secure access ID write enable Position */
#define TZC_REGION_ID_ACCESS_2_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_2_NSAID_WR_EN_Pos) /**< (TZC_REGION_ID_ACCESS_2) Region non-secure access ID write enable Mask */
#define TZC_REGION_ID_ACCESS_2_NSAID_WR_EN(value) (TZC_REGION_ID_ACCESS_2_NSAID_WR_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_2_NSAID_WR_EN_Pos))
#define TZC_REGION_ID_ACCESS_2_Msk            _U_(0xFFFFFFFF)                                      /**< (TZC_REGION_ID_ACCESS_2) Register Mask  */


/* -------- TZC_REGION_BASE_LOW_3 : (TZC Offset: 0x160) (R/W 32) Region 3 Base Address Low Register -------- */
#define TZC_REGION_BASE_LOW_3_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_BASE_LOW_3) Region 3 Base Address Low Register  Reset Value */

#define TZC_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Pos _U_(12)                                              /**< (TZC_REGION_BASE_LOW_3) Region base address lower 32bits. Position */
#define TZC_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Msk (_U_(0xFFFFF) << TZC_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Pos) /**< (TZC_REGION_BASE_LOW_3) Region base address lower 32bits. Mask */
#define TZC_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3(value) (TZC_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Msk & ((value) << TZC_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Pos))
#define TZC_REGION_BASE_LOW_3_Msk             _U_(0xFFFFF000)                                      /**< (TZC_REGION_BASE_LOW_3) Register Mask  */


/* -------- TZC_REGION_BASE_HIGH_3 : (TZC Offset: 0x164) (R/W 32) Region 3 Base Address High Register -------- */
#define TZC_REGION_BASE_HIGH_3_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_BASE_HIGH_3) Region 3 Base Address High Register  Reset Value */

#define TZC_REGION_BASE_HIGH_3_Msk            _U_(0x00000000)                                      /**< (TZC_REGION_BASE_HIGH_3) Register Mask  */


/* -------- TZC_REGION_TOP_LOW_3 : (TZC Offset: 0x168) (R/W 32) Region 3 Top Address Low Register -------- */
#define TZC_REGION_TOP_LOW_3_RESETVALUE       _U_(0xFFF)                                           /**<  (TZC_REGION_TOP_LOW_3) Region 3 Top Address Low Register  Reset Value */

#define TZC_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Pos _U_(12)                                              /**< (TZC_REGION_TOP_LOW_3) Region top address lower 32bits. Position */
#define TZC_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Msk (_U_(0xFFFFF) << TZC_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Pos) /**< (TZC_REGION_TOP_LOW_3) Region top address lower 32bits. Mask */
#define TZC_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3(value) (TZC_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Msk & ((value) << TZC_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Pos))
#define TZC_REGION_TOP_LOW_3_Msk              _U_(0xFFFFF000)                                      /**< (TZC_REGION_TOP_LOW_3) Register Mask  */


/* -------- TZC_REGION_TOP_HIGH_3 : (TZC Offset: 0x16C) (R/W 32) Region 3 Top Address High Register -------- */
#define TZC_REGION_TOP_HIGH_3_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_TOP_HIGH_3) Region 3 Top Address High Register  Reset Value */

#define TZC_REGION_TOP_HIGH_3_Msk             _U_(0x00000000)                                      /**< (TZC_REGION_TOP_HIGH_3) Register Mask  */


/* -------- TZC_REGION_ATTRIBUTES_3 : (TZC Offset: 0x170) (R/W 32) Region 3 Attribute Register -------- */
#define TZC_REGION_ATTRIBUTES_3_RESETVALUE    _U_(0x00)                                            /**<  (TZC_REGION_ATTRIBUTES_3) Region 3 Attribute Register  Reset Value */

#define TZC_REGION_ATTRIBUTES_3_FILTER_EN_Pos _U_(0)                                               /**< (TZC_REGION_ATTRIBUTES_3) Region filter enables Position */
#define TZC_REGION_ATTRIBUTES_3_FILTER_EN_Msk (_U_(0xF) << TZC_REGION_ATTRIBUTES_3_FILTER_EN_Pos)  /**< (TZC_REGION_ATTRIBUTES_3) Region filter enables Mask */
#define TZC_REGION_ATTRIBUTES_3_FILTER_EN(value) (TZC_REGION_ATTRIBUTES_3_FILTER_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_3_FILTER_EN_Pos))
#define TZC_REGION_ATTRIBUTES_3_S_RD_EN_Pos   _U_(30)                                              /**< (TZC_REGION_ATTRIBUTES_3) Region secure read enable Position */
#define TZC_REGION_ATTRIBUTES_3_S_RD_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_3_S_RD_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_3) Region secure read enable Mask */
#define TZC_REGION_ATTRIBUTES_3_S_RD_EN(value) (TZC_REGION_ATTRIBUTES_3_S_RD_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_3_S_RD_EN_Pos))
#define TZC_REGION_ATTRIBUTES_3_S_WR_EN_Pos   _U_(31)                                              /**< (TZC_REGION_ATTRIBUTES_3) Region secure write enable Position */
#define TZC_REGION_ATTRIBUTES_3_S_WR_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_3_S_WR_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_3) Region secure write enable Mask */
#define TZC_REGION_ATTRIBUTES_3_S_WR_EN(value) (TZC_REGION_ATTRIBUTES_3_S_WR_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_3_S_WR_EN_Pos))
#define TZC_REGION_ATTRIBUTES_3_Msk           _U_(0xC000000F)                                      /**< (TZC_REGION_ATTRIBUTES_3) Register Mask  */


/* -------- TZC_REGION_ID_ACCESS_3 : (TZC Offset: 0x174) (R/W 32) Region 3 ID Access Register -------- */
#define TZC_REGION_ID_ACCESS_3_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_ID_ACCESS_3) Region 3 ID Access Register  Reset Value */

#define TZC_REGION_ID_ACCESS_3_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_REGION_ID_ACCESS_3) Region non-secure access ID read enable Position */
#define TZC_REGION_ID_ACCESS_3_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_3_NSAID_RD_EN_Pos) /**< (TZC_REGION_ID_ACCESS_3) Region non-secure access ID read enable Mask */
#define TZC_REGION_ID_ACCESS_3_NSAID_RD_EN(value) (TZC_REGION_ID_ACCESS_3_NSAID_RD_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_3_NSAID_RD_EN_Pos))
#define TZC_REGION_ID_ACCESS_3_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_REGION_ID_ACCESS_3) Region non-secure access ID write enable Position */
#define TZC_REGION_ID_ACCESS_3_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_3_NSAID_WR_EN_Pos) /**< (TZC_REGION_ID_ACCESS_3) Region non-secure access ID write enable Mask */
#define TZC_REGION_ID_ACCESS_3_NSAID_WR_EN(value) (TZC_REGION_ID_ACCESS_3_NSAID_WR_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_3_NSAID_WR_EN_Pos))
#define TZC_REGION_ID_ACCESS_3_Msk            _U_(0xFFFFFFFF)                                      /**< (TZC_REGION_ID_ACCESS_3) Register Mask  */


/* -------- TZC_REGION_BASE_LOW_4 : (TZC Offset: 0x180) (R/W 32) Region 4 Base Address Low Register -------- */
#define TZC_REGION_BASE_LOW_4_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_BASE_LOW_4) Region 4 Base Address Low Register  Reset Value */

#define TZC_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Pos _U_(12)                                              /**< (TZC_REGION_BASE_LOW_4) Region base address lower 32bits. Position */
#define TZC_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Msk (_U_(0xFFFFF) << TZC_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Pos) /**< (TZC_REGION_BASE_LOW_4) Region base address lower 32bits. Mask */
#define TZC_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4(value) (TZC_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Msk & ((value) << TZC_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Pos))
#define TZC_REGION_BASE_LOW_4_Msk             _U_(0xFFFFF000)                                      /**< (TZC_REGION_BASE_LOW_4) Register Mask  */


/* -------- TZC_REGION_BASE_HIGH_4 : (TZC Offset: 0x184) (R/W 32) Region 4 Base Address High Register -------- */
#define TZC_REGION_BASE_HIGH_4_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_BASE_HIGH_4) Region 4 Base Address High Register  Reset Value */

#define TZC_REGION_BASE_HIGH_4_Msk            _U_(0x00000000)                                      /**< (TZC_REGION_BASE_HIGH_4) Register Mask  */


/* -------- TZC_REGION_TOP_LOW_4 : (TZC Offset: 0x188) (R/W 32) Region 4 Top Address Low Register -------- */
#define TZC_REGION_TOP_LOW_4_RESETVALUE       _U_(0xFFF)                                           /**<  (TZC_REGION_TOP_LOW_4) Region 4 Top Address Low Register  Reset Value */

#define TZC_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Pos _U_(12)                                              /**< (TZC_REGION_TOP_LOW_4) Region top address lower 32bits. Position */
#define TZC_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Msk (_U_(0xFFFFF) << TZC_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Pos) /**< (TZC_REGION_TOP_LOW_4) Region top address lower 32bits. Mask */
#define TZC_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4(value) (TZC_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Msk & ((value) << TZC_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Pos))
#define TZC_REGION_TOP_LOW_4_Msk              _U_(0xFFFFF000)                                      /**< (TZC_REGION_TOP_LOW_4) Register Mask  */


/* -------- TZC_REGION_TOP_HIGH_4 : (TZC Offset: 0x18C) (R/W 32) Region 4 Top Address High Register -------- */
#define TZC_REGION_TOP_HIGH_4_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_TOP_HIGH_4) Region 4 Top Address High Register  Reset Value */

#define TZC_REGION_TOP_HIGH_4_Msk             _U_(0x00000000)                                      /**< (TZC_REGION_TOP_HIGH_4) Register Mask  */


/* -------- TZC_REGION_ATTRIBUTES_4 : (TZC Offset: 0x190) (R/W 32) Region 4 Attribute Register -------- */
#define TZC_REGION_ATTRIBUTES_4_RESETVALUE    _U_(0x00)                                            /**<  (TZC_REGION_ATTRIBUTES_4) Region 4 Attribute Register  Reset Value */

#define TZC_REGION_ATTRIBUTES_4_FILTER_EN_Pos _U_(0)                                               /**< (TZC_REGION_ATTRIBUTES_4) Region filter enables Position */
#define TZC_REGION_ATTRIBUTES_4_FILTER_EN_Msk (_U_(0xF) << TZC_REGION_ATTRIBUTES_4_FILTER_EN_Pos)  /**< (TZC_REGION_ATTRIBUTES_4) Region filter enables Mask */
#define TZC_REGION_ATTRIBUTES_4_FILTER_EN(value) (TZC_REGION_ATTRIBUTES_4_FILTER_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_4_FILTER_EN_Pos))
#define TZC_REGION_ATTRIBUTES_4_S_RD_EN_Pos   _U_(30)                                              /**< (TZC_REGION_ATTRIBUTES_4) Region secure read enable Position */
#define TZC_REGION_ATTRIBUTES_4_S_RD_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_4_S_RD_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_4) Region secure read enable Mask */
#define TZC_REGION_ATTRIBUTES_4_S_RD_EN(value) (TZC_REGION_ATTRIBUTES_4_S_RD_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_4_S_RD_EN_Pos))
#define TZC_REGION_ATTRIBUTES_4_S_WR_EN_Pos   _U_(31)                                              /**< (TZC_REGION_ATTRIBUTES_4) Region secure write enable Position */
#define TZC_REGION_ATTRIBUTES_4_S_WR_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_4_S_WR_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_4) Region secure write enable Mask */
#define TZC_REGION_ATTRIBUTES_4_S_WR_EN(value) (TZC_REGION_ATTRIBUTES_4_S_WR_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_4_S_WR_EN_Pos))
#define TZC_REGION_ATTRIBUTES_4_Msk           _U_(0xC000000F)                                      /**< (TZC_REGION_ATTRIBUTES_4) Register Mask  */


/* -------- TZC_REGION_ID_ACCESS_4 : (TZC Offset: 0x194) (R/W 32) Region 4 ID Access Register -------- */
#define TZC_REGION_ID_ACCESS_4_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_ID_ACCESS_4) Region 4 ID Access Register  Reset Value */

#define TZC_REGION_ID_ACCESS_4_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_REGION_ID_ACCESS_4) Region non-secure access ID read enable Position */
#define TZC_REGION_ID_ACCESS_4_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_4_NSAID_RD_EN_Pos) /**< (TZC_REGION_ID_ACCESS_4) Region non-secure access ID read enable Mask */
#define TZC_REGION_ID_ACCESS_4_NSAID_RD_EN(value) (TZC_REGION_ID_ACCESS_4_NSAID_RD_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_4_NSAID_RD_EN_Pos))
#define TZC_REGION_ID_ACCESS_4_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_REGION_ID_ACCESS_4) Region non-secure access ID write enable Position */
#define TZC_REGION_ID_ACCESS_4_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_4_NSAID_WR_EN_Pos) /**< (TZC_REGION_ID_ACCESS_4) Region non-secure access ID write enable Mask */
#define TZC_REGION_ID_ACCESS_4_NSAID_WR_EN(value) (TZC_REGION_ID_ACCESS_4_NSAID_WR_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_4_NSAID_WR_EN_Pos))
#define TZC_REGION_ID_ACCESS_4_Msk            _U_(0xFFFFFFFF)                                      /**< (TZC_REGION_ID_ACCESS_4) Register Mask  */


/* -------- TZC_REGION_BASE_LOW_5 : (TZC Offset: 0x1A0) (R/W 32) Region 5 Base Address Low Register -------- */
#define TZC_REGION_BASE_LOW_5_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_BASE_LOW_5) Region 5 Base Address Low Register  Reset Value */

#define TZC_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Pos _U_(12)                                              /**< (TZC_REGION_BASE_LOW_5) Region base address lower 32bits. Position */
#define TZC_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Msk (_U_(0xFFFFF) << TZC_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Pos) /**< (TZC_REGION_BASE_LOW_5) Region base address lower 32bits. Mask */
#define TZC_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5(value) (TZC_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Msk & ((value) << TZC_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Pos))
#define TZC_REGION_BASE_LOW_5_Msk             _U_(0xFFFFF000)                                      /**< (TZC_REGION_BASE_LOW_5) Register Mask  */


/* -------- TZC_REGION_BASE_HIGH_5 : (TZC Offset: 0x1A4) (R/W 32) Region 5 Base Address High Register -------- */
#define TZC_REGION_BASE_HIGH_5_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_BASE_HIGH_5) Region 5 Base Address High Register  Reset Value */

#define TZC_REGION_BASE_HIGH_5_Msk            _U_(0x00000000)                                      /**< (TZC_REGION_BASE_HIGH_5) Register Mask  */


/* -------- TZC_REGION_TOP_LOW_5 : (TZC Offset: 0x1A8) (R/W 32) Region 5 Top Address Low Register -------- */
#define TZC_REGION_TOP_LOW_5_RESETVALUE       _U_(0xFFF)                                           /**<  (TZC_REGION_TOP_LOW_5) Region 5 Top Address Low Register  Reset Value */

#define TZC_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Pos _U_(12)                                              /**< (TZC_REGION_TOP_LOW_5) Region top address lower 32bits. Position */
#define TZC_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Msk (_U_(0xFFFFF) << TZC_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Pos) /**< (TZC_REGION_TOP_LOW_5) Region top address lower 32bits. Mask */
#define TZC_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5(value) (TZC_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Msk & ((value) << TZC_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Pos))
#define TZC_REGION_TOP_LOW_5_Msk              _U_(0xFFFFF000)                                      /**< (TZC_REGION_TOP_LOW_5) Register Mask  */


/* -------- TZC_REGION_TOP_HIGH_5 : (TZC Offset: 0x1AC) (R/W 32) Region 5 Top Address High Register -------- */
#define TZC_REGION_TOP_HIGH_5_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_TOP_HIGH_5) Region 5 Top Address High Register  Reset Value */

#define TZC_REGION_TOP_HIGH_5_Msk             _U_(0x00000000)                                      /**< (TZC_REGION_TOP_HIGH_5) Register Mask  */


/* -------- TZC_REGION_ATTRIBUTES_5 : (TZC Offset: 0x1B0) (R/W 32) Region 5 Attribute Register -------- */
#define TZC_REGION_ATTRIBUTES_5_RESETVALUE    _U_(0x00)                                            /**<  (TZC_REGION_ATTRIBUTES_5) Region 5 Attribute Register  Reset Value */

#define TZC_REGION_ATTRIBUTES_5_FILTER_EN_Pos _U_(0)                                               /**< (TZC_REGION_ATTRIBUTES_5) Region filter enables Position */
#define TZC_REGION_ATTRIBUTES_5_FILTER_EN_Msk (_U_(0xF) << TZC_REGION_ATTRIBUTES_5_FILTER_EN_Pos)  /**< (TZC_REGION_ATTRIBUTES_5) Region filter enables Mask */
#define TZC_REGION_ATTRIBUTES_5_FILTER_EN(value) (TZC_REGION_ATTRIBUTES_5_FILTER_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_5_FILTER_EN_Pos))
#define TZC_REGION_ATTRIBUTES_5_S_RD_EN_Pos   _U_(30)                                              /**< (TZC_REGION_ATTRIBUTES_5) Region secure read enable Position */
#define TZC_REGION_ATTRIBUTES_5_S_RD_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_5_S_RD_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_5) Region secure read enable Mask */
#define TZC_REGION_ATTRIBUTES_5_S_RD_EN(value) (TZC_REGION_ATTRIBUTES_5_S_RD_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_5_S_RD_EN_Pos))
#define TZC_REGION_ATTRIBUTES_5_S_WR_EN_Pos   _U_(31)                                              /**< (TZC_REGION_ATTRIBUTES_5) Region secure write enable Position */
#define TZC_REGION_ATTRIBUTES_5_S_WR_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_5_S_WR_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_5) Region secure write enable Mask */
#define TZC_REGION_ATTRIBUTES_5_S_WR_EN(value) (TZC_REGION_ATTRIBUTES_5_S_WR_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_5_S_WR_EN_Pos))
#define TZC_REGION_ATTRIBUTES_5_Msk           _U_(0xC000000F)                                      /**< (TZC_REGION_ATTRIBUTES_5) Register Mask  */


/* -------- TZC_REGION_ID_ACCESS_5 : (TZC Offset: 0x1B4) (R/W 32) Region 5 ID Access Register -------- */
#define TZC_REGION_ID_ACCESS_5_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_ID_ACCESS_5) Region 5 ID Access Register  Reset Value */

#define TZC_REGION_ID_ACCESS_5_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_REGION_ID_ACCESS_5) Region non-secure access ID read enable Position */
#define TZC_REGION_ID_ACCESS_5_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_5_NSAID_RD_EN_Pos) /**< (TZC_REGION_ID_ACCESS_5) Region non-secure access ID read enable Mask */
#define TZC_REGION_ID_ACCESS_5_NSAID_RD_EN(value) (TZC_REGION_ID_ACCESS_5_NSAID_RD_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_5_NSAID_RD_EN_Pos))
#define TZC_REGION_ID_ACCESS_5_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_REGION_ID_ACCESS_5) Region non-secure access ID write enable Position */
#define TZC_REGION_ID_ACCESS_5_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_5_NSAID_WR_EN_Pos) /**< (TZC_REGION_ID_ACCESS_5) Region non-secure access ID write enable Mask */
#define TZC_REGION_ID_ACCESS_5_NSAID_WR_EN(value) (TZC_REGION_ID_ACCESS_5_NSAID_WR_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_5_NSAID_WR_EN_Pos))
#define TZC_REGION_ID_ACCESS_5_Msk            _U_(0xFFFFFFFF)                                      /**< (TZC_REGION_ID_ACCESS_5) Register Mask  */


/* -------- TZC_REGION_BASE_LOW_6 : (TZC Offset: 0x1C0) (R/W 32) Region 6 Base Address Low Register -------- */
#define TZC_REGION_BASE_LOW_6_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_BASE_LOW_6) Region 6 Base Address Low Register  Reset Value */

#define TZC_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Pos _U_(12)                                              /**< (TZC_REGION_BASE_LOW_6) Region base address lower 32bits. Position */
#define TZC_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Msk (_U_(0xFFFFF) << TZC_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Pos) /**< (TZC_REGION_BASE_LOW_6) Region base address lower 32bits. Mask */
#define TZC_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6(value) (TZC_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Msk & ((value) << TZC_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Pos))
#define TZC_REGION_BASE_LOW_6_Msk             _U_(0xFFFFF000)                                      /**< (TZC_REGION_BASE_LOW_6) Register Mask  */


/* -------- TZC_REGION_BASE_HIGH_6 : (TZC Offset: 0x1C4) (R/W 32) Region 6 Base Address High Register -------- */
#define TZC_REGION_BASE_HIGH_6_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_BASE_HIGH_6) Region 6 Base Address High Register  Reset Value */

#define TZC_REGION_BASE_HIGH_6_Msk            _U_(0x00000000)                                      /**< (TZC_REGION_BASE_HIGH_6) Register Mask  */


/* -------- TZC_REGION_TOP_LOW_6 : (TZC Offset: 0x1C8) (R/W 32) Region 6 Top Address Low Register -------- */
#define TZC_REGION_TOP_LOW_6_RESETVALUE       _U_(0xFFF)                                           /**<  (TZC_REGION_TOP_LOW_6) Region 6 Top Address Low Register  Reset Value */

#define TZC_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Pos _U_(12)                                              /**< (TZC_REGION_TOP_LOW_6) Region top address lower 32bits. Position */
#define TZC_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Msk (_U_(0xFFFFF) << TZC_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Pos) /**< (TZC_REGION_TOP_LOW_6) Region top address lower 32bits. Mask */
#define TZC_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6(value) (TZC_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Msk & ((value) << TZC_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Pos))
#define TZC_REGION_TOP_LOW_6_Msk              _U_(0xFFFFF000)                                      /**< (TZC_REGION_TOP_LOW_6) Register Mask  */


/* -------- TZC_REGION_TOP_HIGH_6 : (TZC Offset: 0x1CC) (R/W 32) Region 6 Top Address High Register -------- */
#define TZC_REGION_TOP_HIGH_6_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_TOP_HIGH_6) Region 6 Top Address High Register  Reset Value */

#define TZC_REGION_TOP_HIGH_6_Msk             _U_(0x00000000)                                      /**< (TZC_REGION_TOP_HIGH_6) Register Mask  */


/* -------- TZC_REGION_ATTRIBUTES_6 : (TZC Offset: 0x1D0) (R/W 32) Region 6 Attribute Register -------- */
#define TZC_REGION_ATTRIBUTES_6_RESETVALUE    _U_(0x00)                                            /**<  (TZC_REGION_ATTRIBUTES_6) Region 6 Attribute Register  Reset Value */

#define TZC_REGION_ATTRIBUTES_6_FILTER_EN_Pos _U_(0)                                               /**< (TZC_REGION_ATTRIBUTES_6) Region filter enables Position */
#define TZC_REGION_ATTRIBUTES_6_FILTER_EN_Msk (_U_(0xF) << TZC_REGION_ATTRIBUTES_6_FILTER_EN_Pos)  /**< (TZC_REGION_ATTRIBUTES_6) Region filter enables Mask */
#define TZC_REGION_ATTRIBUTES_6_FILTER_EN(value) (TZC_REGION_ATTRIBUTES_6_FILTER_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_6_FILTER_EN_Pos))
#define TZC_REGION_ATTRIBUTES_6_S_RD_EN_Pos   _U_(30)                                              /**< (TZC_REGION_ATTRIBUTES_6) Region secure read enable Position */
#define TZC_REGION_ATTRIBUTES_6_S_RD_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_6_S_RD_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_6) Region secure read enable Mask */
#define TZC_REGION_ATTRIBUTES_6_S_RD_EN(value) (TZC_REGION_ATTRIBUTES_6_S_RD_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_6_S_RD_EN_Pos))
#define TZC_REGION_ATTRIBUTES_6_S_WR_EN_Pos   _U_(31)                                              /**< (TZC_REGION_ATTRIBUTES_6) Region secure write enable Position */
#define TZC_REGION_ATTRIBUTES_6_S_WR_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_6_S_WR_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_6) Region secure write enable Mask */
#define TZC_REGION_ATTRIBUTES_6_S_WR_EN(value) (TZC_REGION_ATTRIBUTES_6_S_WR_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_6_S_WR_EN_Pos))
#define TZC_REGION_ATTRIBUTES_6_Msk           _U_(0xC000000F)                                      /**< (TZC_REGION_ATTRIBUTES_6) Register Mask  */


/* -------- TZC_REGION_ID_ACCESS_6 : (TZC Offset: 0x1D4) (R/W 32) Region 6 ID Access Register -------- */
#define TZC_REGION_ID_ACCESS_6_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_ID_ACCESS_6) Region 6 ID Access Register  Reset Value */

#define TZC_REGION_ID_ACCESS_6_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_REGION_ID_ACCESS_6) Region non-secure access ID read enable Position */
#define TZC_REGION_ID_ACCESS_6_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_6_NSAID_RD_EN_Pos) /**< (TZC_REGION_ID_ACCESS_6) Region non-secure access ID read enable Mask */
#define TZC_REGION_ID_ACCESS_6_NSAID_RD_EN(value) (TZC_REGION_ID_ACCESS_6_NSAID_RD_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_6_NSAID_RD_EN_Pos))
#define TZC_REGION_ID_ACCESS_6_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_REGION_ID_ACCESS_6) Region non-secure access ID write enable Position */
#define TZC_REGION_ID_ACCESS_6_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_6_NSAID_WR_EN_Pos) /**< (TZC_REGION_ID_ACCESS_6) Region non-secure access ID write enable Mask */
#define TZC_REGION_ID_ACCESS_6_NSAID_WR_EN(value) (TZC_REGION_ID_ACCESS_6_NSAID_WR_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_6_NSAID_WR_EN_Pos))
#define TZC_REGION_ID_ACCESS_6_Msk            _U_(0xFFFFFFFF)                                      /**< (TZC_REGION_ID_ACCESS_6) Register Mask  */


/* -------- TZC_REGION_BASE_LOW_7 : (TZC Offset: 0x1E0) (R/W 32) Region 7 Base Address Low Register -------- */
#define TZC_REGION_BASE_LOW_7_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_BASE_LOW_7) Region 7 Base Address Low Register  Reset Value */

#define TZC_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Pos _U_(12)                                              /**< (TZC_REGION_BASE_LOW_7) Region base address lower 32bits. Position */
#define TZC_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Msk (_U_(0xFFFFF) << TZC_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Pos) /**< (TZC_REGION_BASE_LOW_7) Region base address lower 32bits. Mask */
#define TZC_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7(value) (TZC_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Msk & ((value) << TZC_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Pos))
#define TZC_REGION_BASE_LOW_7_Msk             _U_(0xFFFFF000)                                      /**< (TZC_REGION_BASE_LOW_7) Register Mask  */


/* -------- TZC_REGION_BASE_HIGH_7 : (TZC Offset: 0x1E4) (R/W 32) Region 7 Base Address High Register -------- */
#define TZC_REGION_BASE_HIGH_7_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_BASE_HIGH_7) Region 7 Base Address High Register  Reset Value */

#define TZC_REGION_BASE_HIGH_7_Msk            _U_(0x00000000)                                      /**< (TZC_REGION_BASE_HIGH_7) Register Mask  */


/* -------- TZC_REGION_TOP_LOW_7 : (TZC Offset: 0x1E8) (R/W 32) Region 7 Top Address Low Register -------- */
#define TZC_REGION_TOP_LOW_7_RESETVALUE       _U_(0xFFF)                                           /**<  (TZC_REGION_TOP_LOW_7) Region 7 Top Address Low Register  Reset Value */

#define TZC_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Pos _U_(12)                                              /**< (TZC_REGION_TOP_LOW_7) Region top address lower 32bits. Position */
#define TZC_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Msk (_U_(0xFFFFF) << TZC_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Pos) /**< (TZC_REGION_TOP_LOW_7) Region top address lower 32bits. Mask */
#define TZC_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7(value) (TZC_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Msk & ((value) << TZC_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Pos))
#define TZC_REGION_TOP_LOW_7_Msk              _U_(0xFFFFF000)                                      /**< (TZC_REGION_TOP_LOW_7) Register Mask  */


/* -------- TZC_REGION_TOP_HIGH_7 : (TZC Offset: 0x1EC) (R/W 32) Region 7 Top Address High Register -------- */
#define TZC_REGION_TOP_HIGH_7_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_TOP_HIGH_7) Region 7 Top Address High Register  Reset Value */

#define TZC_REGION_TOP_HIGH_7_Msk             _U_(0x00000000)                                      /**< (TZC_REGION_TOP_HIGH_7) Register Mask  */


/* -------- TZC_REGION_ATTRIBUTES_7 : (TZC Offset: 0x1F0) (R/W 32) Region 7 Attribute Register -------- */
#define TZC_REGION_ATTRIBUTES_7_RESETVALUE    _U_(0x00)                                            /**<  (TZC_REGION_ATTRIBUTES_7) Region 7 Attribute Register  Reset Value */

#define TZC_REGION_ATTRIBUTES_7_FILTER_EN_Pos _U_(0)                                               /**< (TZC_REGION_ATTRIBUTES_7) Region filter enables Position */
#define TZC_REGION_ATTRIBUTES_7_FILTER_EN_Msk (_U_(0xF) << TZC_REGION_ATTRIBUTES_7_FILTER_EN_Pos)  /**< (TZC_REGION_ATTRIBUTES_7) Region filter enables Mask */
#define TZC_REGION_ATTRIBUTES_7_FILTER_EN(value) (TZC_REGION_ATTRIBUTES_7_FILTER_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_7_FILTER_EN_Pos))
#define TZC_REGION_ATTRIBUTES_7_S_RD_EN_Pos   _U_(30)                                              /**< (TZC_REGION_ATTRIBUTES_7) Region secure read enable Position */
#define TZC_REGION_ATTRIBUTES_7_S_RD_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_7_S_RD_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_7) Region secure read enable Mask */
#define TZC_REGION_ATTRIBUTES_7_S_RD_EN(value) (TZC_REGION_ATTRIBUTES_7_S_RD_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_7_S_RD_EN_Pos))
#define TZC_REGION_ATTRIBUTES_7_S_WR_EN_Pos   _U_(31)                                              /**< (TZC_REGION_ATTRIBUTES_7) Region secure write enable Position */
#define TZC_REGION_ATTRIBUTES_7_S_WR_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_7_S_WR_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_7) Region secure write enable Mask */
#define TZC_REGION_ATTRIBUTES_7_S_WR_EN(value) (TZC_REGION_ATTRIBUTES_7_S_WR_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_7_S_WR_EN_Pos))
#define TZC_REGION_ATTRIBUTES_7_Msk           _U_(0xC000000F)                                      /**< (TZC_REGION_ATTRIBUTES_7) Register Mask  */


/* -------- TZC_REGION_ID_ACCESS_7 : (TZC Offset: 0x1F4) (R/W 32) Region 7 ID Access Register -------- */
#define TZC_REGION_ID_ACCESS_7_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_ID_ACCESS_7) Region 7 ID Access Register  Reset Value */

#define TZC_REGION_ID_ACCESS_7_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_REGION_ID_ACCESS_7) Region non-secure access ID read enable Position */
#define TZC_REGION_ID_ACCESS_7_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_7_NSAID_RD_EN_Pos) /**< (TZC_REGION_ID_ACCESS_7) Region non-secure access ID read enable Mask */
#define TZC_REGION_ID_ACCESS_7_NSAID_RD_EN(value) (TZC_REGION_ID_ACCESS_7_NSAID_RD_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_7_NSAID_RD_EN_Pos))
#define TZC_REGION_ID_ACCESS_7_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_REGION_ID_ACCESS_7) Region non-secure access ID write enable Position */
#define TZC_REGION_ID_ACCESS_7_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_7_NSAID_WR_EN_Pos) /**< (TZC_REGION_ID_ACCESS_7) Region non-secure access ID write enable Mask */
#define TZC_REGION_ID_ACCESS_7_NSAID_WR_EN(value) (TZC_REGION_ID_ACCESS_7_NSAID_WR_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_7_NSAID_WR_EN_Pos))
#define TZC_REGION_ID_ACCESS_7_Msk            _U_(0xFFFFFFFF)                                      /**< (TZC_REGION_ID_ACCESS_7) Register Mask  */


/* -------- TZC_REGION_BASE_LOW_8 : (TZC Offset: 0x200) (R/W 32) Region 8 Base Address Low Register -------- */
#define TZC_REGION_BASE_LOW_8_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_BASE_LOW_8) Region 8 Base Address Low Register  Reset Value */

#define TZC_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Pos _U_(12)                                              /**< (TZC_REGION_BASE_LOW_8) Region base address lower 32bits. Position */
#define TZC_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Msk (_U_(0xFFFFF) << TZC_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Pos) /**< (TZC_REGION_BASE_LOW_8) Region base address lower 32bits. Mask */
#define TZC_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8(value) (TZC_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Msk & ((value) << TZC_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Pos))
#define TZC_REGION_BASE_LOW_8_Msk             _U_(0xFFFFF000)                                      /**< (TZC_REGION_BASE_LOW_8) Register Mask  */


/* -------- TZC_REGION_BASE_HIGH_8 : (TZC Offset: 0x204) (R/W 32) Region 8 Base Address High Register -------- */
#define TZC_REGION_BASE_HIGH_8_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_BASE_HIGH_8) Region 8 Base Address High Register  Reset Value */

#define TZC_REGION_BASE_HIGH_8_Msk            _U_(0x00000000)                                      /**< (TZC_REGION_BASE_HIGH_8) Register Mask  */


/* -------- TZC_REGION_TOP_LOW_8 : (TZC Offset: 0x208) (R/W 32) Region 8 Top Address Low Register -------- */
#define TZC_REGION_TOP_LOW_8_RESETVALUE       _U_(0xFFF)                                           /**<  (TZC_REGION_TOP_LOW_8) Region 8 Top Address Low Register  Reset Value */

#define TZC_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Pos _U_(12)                                              /**< (TZC_REGION_TOP_LOW_8) Region top address lower 32bits. Position */
#define TZC_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Msk (_U_(0xFFFFF) << TZC_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Pos) /**< (TZC_REGION_TOP_LOW_8) Region top address lower 32bits. Mask */
#define TZC_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8(value) (TZC_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Msk & ((value) << TZC_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Pos))
#define TZC_REGION_TOP_LOW_8_Msk              _U_(0xFFFFF000)                                      /**< (TZC_REGION_TOP_LOW_8) Register Mask  */


/* -------- TZC_REGION_TOP_HIGH_8 : (TZC Offset: 0x20C) (R/W 32) Region 8 Top Address High Register -------- */
#define TZC_REGION_TOP_HIGH_8_RESETVALUE      _U_(0x00)                                            /**<  (TZC_REGION_TOP_HIGH_8) Region 8 Top Address High Register  Reset Value */

#define TZC_REGION_TOP_HIGH_8_Msk             _U_(0x00000000)                                      /**< (TZC_REGION_TOP_HIGH_8) Register Mask  */


/* -------- TZC_REGION_ATTRIBUTES_8 : (TZC Offset: 0x210) (R/W 32) Region 8 Attribute Register -------- */
#define TZC_REGION_ATTRIBUTES_8_RESETVALUE    _U_(0x00)                                            /**<  (TZC_REGION_ATTRIBUTES_8) Region 8 Attribute Register  Reset Value */

#define TZC_REGION_ATTRIBUTES_8_FILTER_EN_Pos _U_(0)                                               /**< (TZC_REGION_ATTRIBUTES_8) Region filter enables Position */
#define TZC_REGION_ATTRIBUTES_8_FILTER_EN_Msk (_U_(0xF) << TZC_REGION_ATTRIBUTES_8_FILTER_EN_Pos)  /**< (TZC_REGION_ATTRIBUTES_8) Region filter enables Mask */
#define TZC_REGION_ATTRIBUTES_8_FILTER_EN(value) (TZC_REGION_ATTRIBUTES_8_FILTER_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_8_FILTER_EN_Pos))
#define TZC_REGION_ATTRIBUTES_8_S_RD_EN_Pos   _U_(30)                                              /**< (TZC_REGION_ATTRIBUTES_8) Region secure read enable Position */
#define TZC_REGION_ATTRIBUTES_8_S_RD_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_8_S_RD_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_8) Region secure read enable Mask */
#define TZC_REGION_ATTRIBUTES_8_S_RD_EN(value) (TZC_REGION_ATTRIBUTES_8_S_RD_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_8_S_RD_EN_Pos))
#define TZC_REGION_ATTRIBUTES_8_S_WR_EN_Pos   _U_(31)                                              /**< (TZC_REGION_ATTRIBUTES_8) Region secure write enable Position */
#define TZC_REGION_ATTRIBUTES_8_S_WR_EN_Msk   (_U_(0x1) << TZC_REGION_ATTRIBUTES_8_S_WR_EN_Pos)    /**< (TZC_REGION_ATTRIBUTES_8) Region secure write enable Mask */
#define TZC_REGION_ATTRIBUTES_8_S_WR_EN(value) (TZC_REGION_ATTRIBUTES_8_S_WR_EN_Msk & ((value) << TZC_REGION_ATTRIBUTES_8_S_WR_EN_Pos))
#define TZC_REGION_ATTRIBUTES_8_Msk           _U_(0xC000000F)                                      /**< (TZC_REGION_ATTRIBUTES_8) Register Mask  */


/* -------- TZC_REGION_ID_ACCESS_8 : (TZC Offset: 0x214) (R/W 32) Region 8 ID Access Register -------- */
#define TZC_REGION_ID_ACCESS_8_RESETVALUE     _U_(0x00)                                            /**<  (TZC_REGION_ID_ACCESS_8) Region 8 ID Access Register  Reset Value */

#define TZC_REGION_ID_ACCESS_8_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_REGION_ID_ACCESS_8) Region non-secure access ID read enable Position */
#define TZC_REGION_ID_ACCESS_8_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_8_NSAID_RD_EN_Pos) /**< (TZC_REGION_ID_ACCESS_8) Region non-secure access ID read enable Mask */
#define TZC_REGION_ID_ACCESS_8_NSAID_RD_EN(value) (TZC_REGION_ID_ACCESS_8_NSAID_RD_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_8_NSAID_RD_EN_Pos))
#define TZC_REGION_ID_ACCESS_8_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_REGION_ID_ACCESS_8) Region non-secure access ID write enable Position */
#define TZC_REGION_ID_ACCESS_8_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_REGION_ID_ACCESS_8_NSAID_WR_EN_Pos) /**< (TZC_REGION_ID_ACCESS_8) Region non-secure access ID write enable Mask */
#define TZC_REGION_ID_ACCESS_8_NSAID_WR_EN(value) (TZC_REGION_ID_ACCESS_8_NSAID_WR_EN_Msk & ((value) << TZC_REGION_ID_ACCESS_8_NSAID_WR_EN_Pos))
#define TZC_REGION_ID_ACCESS_8_Msk            _U_(0xFFFFFFFF)                                      /**< (TZC_REGION_ID_ACCESS_8) Register Mask  */


/* -------- TZC_PID4 : (TZC Offset: 0xFD0) ( R/ 32) Peripheral Identification 4 Register -------- */
#define TZC_PID4_RESETVALUE                   _U_(0x04)                                            /**<  (TZC_PID4) Peripheral Identification 4 Register  Reset Value */

#define TZC_PID4_JEP106_C_CODE_Pos            _U_(0)                                               /**< (TZC_PID4) JEP106 continuation code Position */
#define TZC_PID4_JEP106_C_CODE_Msk            (_U_(0xF) << TZC_PID4_JEP106_C_CODE_Pos)             /**< (TZC_PID4) JEP106 continuation code Mask */
#define TZC_PID4_JEP106_C_CODE(value)         (TZC_PID4_JEP106_C_CODE_Msk & ((value) << TZC_PID4_JEP106_C_CODE_Pos))
#define TZC_PID4_COUNT_4KB_Pos                _U_(4)                                               /**< (TZC_PID4) Number of 4Kbyte address blocks Position */
#define TZC_PID4_COUNT_4KB_Msk                (_U_(0xF) << TZC_PID4_COUNT_4KB_Pos)                 /**< (TZC_PID4) Number of 4Kbyte address blocks Mask */
#define TZC_PID4_COUNT_4KB(value)             (TZC_PID4_COUNT_4KB_Msk & ((value) << TZC_PID4_COUNT_4KB_Pos))
#define TZC_PID4_Msk                          _U_(0x000000FF)                                      /**< (TZC_PID4) Register Mask  */


/* -------- TZC_PID5 : (TZC Offset: 0xFD4) ( R/ 32) Peripheral Identification 5 Register -------- */
#define TZC_PID5_RESETVALUE                   _U_(0x00)                                            /**<  (TZC_PID5) Peripheral Identification 5 Register  Reset Value */

#define TZC_PID5_Msk                          _U_(0x00000000)                                      /**< (TZC_PID5) Register Mask  */


/* -------- TZC_PID6 : (TZC Offset: 0xFD8) ( R/ 32) Peripheral Identification 6 Register -------- */
#define TZC_PID6_RESETVALUE                   _U_(0x00)                                            /**<  (TZC_PID6) Peripheral Identification 6 Register  Reset Value */

#define TZC_PID6_Msk                          _U_(0x00000000)                                      /**< (TZC_PID6) Register Mask  */


/* -------- TZC_PID7 : (TZC Offset: 0xFDC) ( R/ 32) Peripheral Identification 7 Register -------- */
#define TZC_PID7_RESETVALUE                   _U_(0x00)                                            /**<  (TZC_PID7) Peripheral Identification 7 Register  Reset Value */

#define TZC_PID7_Msk                          _U_(0x00000000)                                      /**< (TZC_PID7) Register Mask  */


/* -------- TZC_PID0 : (TZC Offset: 0xFE0) ( R/ 32) Peripheral Identification 0 Register -------- */
#define TZC_PID0_RESETVALUE                   _U_(0x60)                                            /**<  (TZC_PID0) Peripheral Identification 0 Register  Reset Value */

#define TZC_PID0_PART_NUMBER_0_Pos            _U_(0)                                               /**< (TZC_PID0) Part number lower 8 bits Position */
#define TZC_PID0_PART_NUMBER_0_Msk            (_U_(0xFF) << TZC_PID0_PART_NUMBER_0_Pos)            /**< (TZC_PID0) Part number lower 8 bits Mask */
#define TZC_PID0_PART_NUMBER_0(value)         (TZC_PID0_PART_NUMBER_0_Msk & ((value) << TZC_PID0_PART_NUMBER_0_Pos))
#define TZC_PID0_Msk                          _U_(0x000000FF)                                      /**< (TZC_PID0) Register Mask  */


/* -------- TZC_PID1 : (TZC Offset: 0xFE4) ( R/ 32) Peripheral Identification 1 Register -------- */
#define TZC_PID1_RESETVALUE                   _U_(0xB4)                                            /**<  (TZC_PID1) Peripheral Identification 1 Register  Reset Value */

#define TZC_PID1_PART_NUMBER_0_Pos            _U_(0)                                               /**< (TZC_PID1) Part number top 4 bits Position */
#define TZC_PID1_PART_NUMBER_0_Msk            (_U_(0xF) << TZC_PID1_PART_NUMBER_0_Pos)             /**< (TZC_PID1) Part number top 4 bits Mask */
#define TZC_PID1_PART_NUMBER_0(value)         (TZC_PID1_PART_NUMBER_0_Msk & ((value) << TZC_PID1_PART_NUMBER_0_Pos))
#define TZC_PID1_JEP106_ID_3_0_Pos            _U_(4)                                               /**< (TZC_PID1) JEP106 ARM's identification code bits 3 down to 0 Position */
#define TZC_PID1_JEP106_ID_3_0_Msk            (_U_(0xF) << TZC_PID1_JEP106_ID_3_0_Pos)             /**< (TZC_PID1) JEP106 ARM's identification code bits 3 down to 0 Mask */
#define TZC_PID1_JEP106_ID_3_0(value)         (TZC_PID1_JEP106_ID_3_0_Msk & ((value) << TZC_PID1_JEP106_ID_3_0_Pos))
#define TZC_PID1_Msk                          _U_(0x000000FF)                                      /**< (TZC_PID1) Register Mask  */


/* -------- TZC_PID2 : (TZC Offset: 0xFE8) ( R/ 32) Peripheral Identification 2 Register -------- */
#define TZC_PID2_RESETVALUE                   _U_(0x2B)                                            /**<  (TZC_PID2) Peripheral Identification 2 Register  Reset Value */

#define TZC_PID2_JEP106_ID_6_4_Pos            _U_(0)                                               /**< (TZC_PID2) JEP106 ARM's identification code bits 6 down to 4 Position */
#define TZC_PID2_JEP106_ID_6_4_Msk            (_U_(0x7) << TZC_PID2_JEP106_ID_6_4_Pos)             /**< (TZC_PID2) JEP106 ARM's identification code bits 6 down to 4 Mask */
#define TZC_PID2_JEP106_ID_6_4(value)         (TZC_PID2_JEP106_ID_6_4_Msk & ((value) << TZC_PID2_JEP106_ID_6_4_Pos))
#define TZC_PID2_JEDEC_USED_Pos               _U_(3)                                               /**< (TZC_PID2) Indicates the use of JEP106 manufacturer's identity code Position */
#define TZC_PID2_JEDEC_USED_Msk               (_U_(0x1) << TZC_PID2_JEDEC_USED_Pos)                /**< (TZC_PID2) Indicates the use of JEP106 manufacturer's identity code Mask */
#define TZC_PID2_JEDEC_USED(value)            (TZC_PID2_JEDEC_USED_Msk & ((value) << TZC_PID2_JEDEC_USED_Pos))
#define TZC_PID2_REVISION_Pos                 _U_(4)                                               /**< (TZC_PID2) Revision Position */
#define TZC_PID2_REVISION_Msk                 (_U_(0xF) << TZC_PID2_REVISION_Pos)                  /**< (TZC_PID2) Revision Mask */
#define TZC_PID2_REVISION(value)              (TZC_PID2_REVISION_Msk & ((value) << TZC_PID2_REVISION_Pos))
#define TZC_PID2_Msk                          _U_(0x000000FF)                                      /**< (TZC_PID2) Register Mask  */


/* -------- TZC_PID3 : (TZC Offset: 0xFEC) ( R/ 32) Peripheral Identification 3 Register -------- */
#define TZC_PID3_RESETVALUE                   _U_(0x00)                                            /**<  (TZC_PID3) Peripheral Identification 3 Register  Reset Value */

#define TZC_PID3_MOD_NUMBER_Pos               _U_(0)                                               /**< (TZC_PID3) Modification Number Position */
#define TZC_PID3_MOD_NUMBER_Msk               (_U_(0xF) << TZC_PID3_MOD_NUMBER_Pos)                /**< (TZC_PID3) Modification Number Mask */
#define TZC_PID3_MOD_NUMBER(value)            (TZC_PID3_MOD_NUMBER_Msk & ((value) << TZC_PID3_MOD_NUMBER_Pos))
#define TZC_PID3_REVAND_Pos                   _U_(4)                                               /**< (TZC_PID3) User Modifiable Revision Number Position */
#define TZC_PID3_REVAND_Msk                   (_U_(0xF) << TZC_PID3_REVAND_Pos)                    /**< (TZC_PID3) User Modifiable Revision Number Mask */
#define TZC_PID3_REVAND(value)                (TZC_PID3_REVAND_Msk & ((value) << TZC_PID3_REVAND_Pos))
#define TZC_PID3_Msk                          _U_(0x000000FF)                                      /**< (TZC_PID3) Register Mask  */


/* -------- TZC_CID0 : (TZC Offset: 0xFF0) ( R/ 32) Component Identification 0 -------- */
#define TZC_CID0_RESETVALUE                   _U_(0x0D)                                            /**<  (TZC_CID0) Component Identification 0  Reset Value */

#define TZC_CID0_COMP_ID_0_Pos                _U_(0)                                               /**< (TZC_CID0) Conponent identity 0 Position */
#define TZC_CID0_COMP_ID_0_Msk                (_U_(0xFF) << TZC_CID0_COMP_ID_0_Pos)                /**< (TZC_CID0) Conponent identity 0 Mask */
#define TZC_CID0_COMP_ID_0(value)             (TZC_CID0_COMP_ID_0_Msk & ((value) << TZC_CID0_COMP_ID_0_Pos))
#define TZC_CID0_Msk                          _U_(0x000000FF)                                      /**< (TZC_CID0) Register Mask  */


/* -------- TZC_CID1 : (TZC Offset: 0xFF4) ( R/ 32) Component Identification 1 -------- */
#define TZC_CID1_RESETVALUE                   _U_(0xF0)                                            /**<  (TZC_CID1) Component Identification 1  Reset Value */

#define TZC_CID1_COMP_ID_1_Pos                _U_(0)                                               /**< (TZC_CID1) Conponent identity 1 Position */
#define TZC_CID1_COMP_ID_1_Msk                (_U_(0xFF) << TZC_CID1_COMP_ID_1_Pos)                /**< (TZC_CID1) Conponent identity 1 Mask */
#define TZC_CID1_COMP_ID_1(value)             (TZC_CID1_COMP_ID_1_Msk & ((value) << TZC_CID1_COMP_ID_1_Pos))
#define TZC_CID1_Msk                          _U_(0x000000FF)                                      /**< (TZC_CID1) Register Mask  */


/* -------- TZC_CID2 : (TZC Offset: 0xFF8) ( R/ 32) Component Identification 2 -------- */
#define TZC_CID2_RESETVALUE                   _U_(0x05)                                            /**<  (TZC_CID2) Component Identification 2  Reset Value */

#define TZC_CID2_COMP_ID_2_Pos                _U_(0)                                               /**< (TZC_CID2) Conponent identity 2 Position */
#define TZC_CID2_COMP_ID_2_Msk                (_U_(0xFF) << TZC_CID2_COMP_ID_2_Pos)                /**< (TZC_CID2) Conponent identity 2 Mask */
#define TZC_CID2_COMP_ID_2(value)             (TZC_CID2_COMP_ID_2_Msk & ((value) << TZC_CID2_COMP_ID_2_Pos))
#define TZC_CID2_Msk                          _U_(0x000000FF)                                      /**< (TZC_CID2) Register Mask  */


/* -------- TZC_CID3 : (TZC Offset: 0xFFC) ( R/ 32) Component Identification 3 -------- */
#define TZC_CID3_RESETVALUE                   _U_(0xB1)                                            /**<  (TZC_CID3) Component Identification 3  Reset Value */

#define TZC_CID3_COMP_ID_3_Pos                _U_(0)                                               /**< (TZC_CID3) Conponent identity 3 Position */
#define TZC_CID3_COMP_ID_3_Msk                (_U_(0xFF) << TZC_CID3_COMP_ID_3_Pos)                /**< (TZC_CID3) Conponent identity 3 Mask */
#define TZC_CID3_COMP_ID_3(value)             (TZC_CID3_COMP_ID_3_Msk & ((value) << TZC_CID3_COMP_ID_3_Pos))
#define TZC_CID3_Msk                          _U_(0x000000FF)                                      /**< (TZC_CID3) Register Mask  */


/* -------- TZC_CPU_BUILD_CONFIG : (TZC Offset: 0x1000) ( R/ 32) Build Configuration Register [CPU] -------- */
#define TZC_CPU_BUILD_CONFIG_RESETVALUE       _U_(0x1F08)                                          /**<  (TZC_CPU_BUILD_CONFIG) Build Configuration Register [CPU]  Reset Value */

#define TZC_CPU_BUILD_CONFIG_NO_OF_REGIONS_Pos _U_(0)                                               /**< (TZC_CPU_BUILD_CONFIG) Number of regions minus one Position */
#define TZC_CPU_BUILD_CONFIG_NO_OF_REGIONS_Msk (_U_(0x1F) << TZC_CPU_BUILD_CONFIG_NO_OF_REGIONS_Pos) /**< (TZC_CPU_BUILD_CONFIG) Number of regions minus one Mask */
#define TZC_CPU_BUILD_CONFIG_NO_OF_REGIONS(value) (TZC_CPU_BUILD_CONFIG_NO_OF_REGIONS_Msk & ((value) << TZC_CPU_BUILD_CONFIG_NO_OF_REGIONS_Pos))
#define TZC_CPU_BUILD_CONFIG_ADDRESS_WIDTH_Pos _U_(8)                                               /**< (TZC_CPU_BUILD_CONFIG) Address width  minus one Position */
#define TZC_CPU_BUILD_CONFIG_ADDRESS_WIDTH_Msk (_U_(0x3F) << TZC_CPU_BUILD_CONFIG_ADDRESS_WIDTH_Pos) /**< (TZC_CPU_BUILD_CONFIG) Address width  minus one Mask */
#define TZC_CPU_BUILD_CONFIG_ADDRESS_WIDTH(value) (TZC_CPU_BUILD_CONFIG_ADDRESS_WIDTH_Msk & ((value) << TZC_CPU_BUILD_CONFIG_ADDRESS_WIDTH_Pos))
#define TZC_CPU_BUILD_CONFIG_NO_OF_FILTERS_Pos _U_(24)                                              /**< (TZC_CPU_BUILD_CONFIG) Number of filters -minus one Position */
#define TZC_CPU_BUILD_CONFIG_NO_OF_FILTERS_Msk (_U_(0x3) << TZC_CPU_BUILD_CONFIG_NO_OF_FILTERS_Pos) /**< (TZC_CPU_BUILD_CONFIG) Number of filters -minus one Mask */
#define TZC_CPU_BUILD_CONFIG_NO_OF_FILTERS(value) (TZC_CPU_BUILD_CONFIG_NO_OF_FILTERS_Msk & ((value) << TZC_CPU_BUILD_CONFIG_NO_OF_FILTERS_Pos))
#define TZC_CPU_BUILD_CONFIG_Msk              _U_(0x03003F1F)                                      /**< (TZC_CPU_BUILD_CONFIG) Register Mask  */


/* -------- TZC_CPU_ACTION : (TZC Offset: 0x1004) (R/W 32) Action Register [CPU] -------- */
#define TZC_CPU_ACTION_RESETVALUE             _U_(0x00)                                            /**<  (TZC_CPU_ACTION) Action Register [CPU]  Reset Value */

#define TZC_CPU_ACTION_REACTION_VALUE_Pos     _U_(0)                                               /**< (TZC_CPU_ACTION) Failure Reaction Position */
#define TZC_CPU_ACTION_REACTION_VALUE_Msk     (_U_(0x3) << TZC_CPU_ACTION_REACTION_VALUE_Pos)      /**< (TZC_CPU_ACTION) Failure Reaction Mask */
#define TZC_CPU_ACTION_REACTION_VALUE(value)  (TZC_CPU_ACTION_REACTION_VALUE_Msk & ((value) << TZC_CPU_ACTION_REACTION_VALUE_Pos))
#define TZC_CPU_ACTION_Msk                    _U_(0x00000003)                                      /**< (TZC_CPU_ACTION) Register Mask  */


/* -------- TZC_CPU_GATE_KEEPER : (TZC Offset: 0x1008) (R/W 32) Gate Keeper Register [CPU] -------- */
#define TZC_CPU_GATE_KEEPER_RESETVALUE        _U_(0x00)                                            /**<  (TZC_CPU_GATE_KEEPER) Gate Keeper Register [CPU]  Reset Value */

#define TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Pos  _U_(0)                                               /**< (TZC_CPU_GATE_KEEPER) Gate keeper open request Position */
#define TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Msk  (_U_(0x1) << TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Pos)   /**< (TZC_CPU_GATE_KEEPER) Gate keeper open request Mask */
#define TZC_CPU_GATE_KEEPER_OPEN_REQUEST(value) (TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Msk & ((value) << TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Pos))
#define TZC_CPU_GATE_KEEPER_OPEN_STATUS_Pos   _U_(16)                                              /**< (TZC_CPU_GATE_KEEPER) Gate keeper open status Position */
#define TZC_CPU_GATE_KEEPER_OPEN_STATUS_Msk   (_U_(0x1) << TZC_CPU_GATE_KEEPER_OPEN_STATUS_Pos)    /**< (TZC_CPU_GATE_KEEPER) Gate keeper open status Mask */
#define TZC_CPU_GATE_KEEPER_OPEN_STATUS(value) (TZC_CPU_GATE_KEEPER_OPEN_STATUS_Msk & ((value) << TZC_CPU_GATE_KEEPER_OPEN_STATUS_Pos))
#define TZC_CPU_GATE_KEEPER_Msk               _U_(0x00010001)                                      /**< (TZC_CPU_GATE_KEEPER) Register Mask  */


/* -------- TZC_CPU_SPECULATION_CTRL : (TZC Offset: 0x100C) (R/W 32) Speculation Control Register [CPU] -------- */
#define TZC_CPU_SPECULATION_CTRL_RESETVALUE   _U_(0x00)                                            /**<  (TZC_CPU_SPECULATION_CTRL) Speculation Control Register [CPU]  Reset Value */

#define TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos _U_(0)                                               /**< (TZC_CPU_SPECULATION_CTRL) Read speculation disable control Position */
#define TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Msk (_U_(0x1) << TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos) /**< (TZC_CPU_SPECULATION_CTRL) Read speculation disable control Mask */
#define TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE(value) (TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Msk & ((value) << TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos))
#define TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos _U_(1)                                               /**< (TZC_CPU_SPECULATION_CTRL) Write speculation disable control Position */
#define TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Msk (_U_(0x1) << TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos) /**< (TZC_CPU_SPECULATION_CTRL) Write speculation disable control Mask */
#define TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE(value) (TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Msk & ((value) << TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos))
#define TZC_CPU_SPECULATION_CTRL_Msk          _U_(0x00000003)                                      /**< (TZC_CPU_SPECULATION_CTRL) Register Mask  */


/* -------- TZC_CPU_INT_STATUS : (TZC Offset: 0x1010) ( R/ 32) Interrupt Status Register [CPU] -------- */
#define TZC_CPU_INT_STATUS_RESETVALUE         _U_(0x00)                                            /**<  (TZC_CPU_INT_STATUS) Interrupt Status Register [CPU]  Reset Value */

#define TZC_CPU_INT_STATUS_STATUS_Pos         _U_(0)                                               /**< (TZC_CPU_INT_STATUS) Interrupt status Position */
#define TZC_CPU_INT_STATUS_STATUS_Msk         (_U_(0x1) << TZC_CPU_INT_STATUS_STATUS_Pos)          /**< (TZC_CPU_INT_STATUS) Interrupt status Mask */
#define TZC_CPU_INT_STATUS_STATUS(value)      (TZC_CPU_INT_STATUS_STATUS_Msk & ((value) << TZC_CPU_INT_STATUS_STATUS_Pos))
#define TZC_CPU_INT_STATUS_OVERRUN_Pos        _U_(8)                                               /**< (TZC_CPU_INT_STATUS) Interrupt status - overrun Position */
#define TZC_CPU_INT_STATUS_OVERRUN_Msk        (_U_(0x1) << TZC_CPU_INT_STATUS_OVERRUN_Pos)         /**< (TZC_CPU_INT_STATUS) Interrupt status - overrun Mask */
#define TZC_CPU_INT_STATUS_OVERRUN(value)     (TZC_CPU_INT_STATUS_OVERRUN_Msk & ((value) << TZC_CPU_INT_STATUS_OVERRUN_Pos))
#define TZC_CPU_INT_STATUS_OVERLAP_Pos        _U_(16)                                              /**< (TZC_CPU_INT_STATUS) Interrupt status - overlap Position */
#define TZC_CPU_INT_STATUS_OVERLAP_Msk        (_U_(0x1) << TZC_CPU_INT_STATUS_OVERLAP_Pos)         /**< (TZC_CPU_INT_STATUS) Interrupt status - overlap Mask */
#define TZC_CPU_INT_STATUS_OVERLAP(value)     (TZC_CPU_INT_STATUS_OVERLAP_Msk & ((value) << TZC_CPU_INT_STATUS_OVERLAP_Pos))
#define TZC_CPU_INT_STATUS_Msk                _U_(0x00010101)                                      /**< (TZC_CPU_INT_STATUS) Register Mask  */


/* -------- TZC_CPU_INT_CLEAR : (TZC Offset: 0x1014) ( /W 32) Interrupt Clear Register [CPU] -------- */
#define TZC_CPU_INT_CLEAR_RESETVALUE          _U_(0x00)                                            /**<  (TZC_CPU_INT_CLEAR) Interrupt Clear Register [CPU]  Reset Value */

#define TZC_CPU_INT_CLEAR_CLEAR_Pos           _U_(0)                                               /**< (TZC_CPU_INT_CLEAR) Interrupt clear Position */
#define TZC_CPU_INT_CLEAR_CLEAR_Msk           (_U_(0x1) << TZC_CPU_INT_CLEAR_CLEAR_Pos)            /**< (TZC_CPU_INT_CLEAR) Interrupt clear Mask */
#define TZC_CPU_INT_CLEAR_CLEAR(value)        (TZC_CPU_INT_CLEAR_CLEAR_Msk & ((value) << TZC_CPU_INT_CLEAR_CLEAR_Pos))
#define TZC_CPU_INT_CLEAR_Msk                 _U_(0x00000001)                                      /**< (TZC_CPU_INT_CLEAR) Register Mask  */


/* -------- TZC_CPU_FAIL_ADDRESS_LOW_0 : (TZC Offset: 0x1020) ( R/ 32) Fail Address Low Register [CPU] -------- */
#define TZC_CPU_FAIL_ADDRESS_LOW_0_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_FAIL_ADDRESS_LOW_0) Fail Address Low Register [CPU]  Reset Value */

#define TZC_CPU_FAIL_ADDRESS_LOW_0_ADDR_STATUS_LOW_Pos _U_(0)                                               /**< (TZC_CPU_FAIL_ADDRESS_LOW_0) Failure access's low address Position */
#define TZC_CPU_FAIL_ADDRESS_LOW_0_ADDR_STATUS_LOW_Msk (_U_(0xFFFFFFFF) << TZC_CPU_FAIL_ADDRESS_LOW_0_ADDR_STATUS_LOW_Pos) /**< (TZC_CPU_FAIL_ADDRESS_LOW_0) Failure access's low address Mask */
#define TZC_CPU_FAIL_ADDRESS_LOW_0_ADDR_STATUS_LOW(value) (TZC_CPU_FAIL_ADDRESS_LOW_0_ADDR_STATUS_LOW_Msk & ((value) << TZC_CPU_FAIL_ADDRESS_LOW_0_ADDR_STATUS_LOW_Pos))
#define TZC_CPU_FAIL_ADDRESS_LOW_0_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_FAIL_ADDRESS_LOW_0) Register Mask  */


/* -------- TZC_CPU_FAIL_ADDRESS_HIGH_0 : (TZC Offset: 0x1024) ( R/ 32) Fail Address High Register [CPU] -------- */
#define TZC_CPU_FAIL_ADDRESS_HIGH_0_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_FAIL_ADDRESS_HIGH_0) Fail Address High Register [CPU]  Reset Value */

#define TZC_CPU_FAIL_ADDRESS_HIGH_0_Msk       _U_(0x00000000)                                      /**< (TZC_CPU_FAIL_ADDRESS_HIGH_0) Register Mask  */


/* -------- TZC_CPU_FAIL_CONTROL_0 : (TZC Offset: 0x1028) ( R/ 32) Fail Control Register [CPU] -------- */
#define TZC_CPU_FAIL_CONTROL_0_RESETVALUE     _U_(0x00)                                            /**<  (TZC_CPU_FAIL_CONTROL_0) Fail Control Register [CPU]  Reset Value */

#define TZC_CPU_FAIL_CONTROL_0_PRIVILEGED_Pos _U_(20)                                              /**< (TZC_CPU_FAIL_CONTROL_0) Failure access's privileged value Position */
#define TZC_CPU_FAIL_CONTROL_0_PRIVILEGED_Msk (_U_(0x1) << TZC_CPU_FAIL_CONTROL_0_PRIVILEGED_Pos)  /**< (TZC_CPU_FAIL_CONTROL_0) Failure access's privileged value Mask */
#define TZC_CPU_FAIL_CONTROL_0_PRIVILEGED(value) (TZC_CPU_FAIL_CONTROL_0_PRIVILEGED_Msk & ((value) << TZC_CPU_FAIL_CONTROL_0_PRIVILEGED_Pos))
#define TZC_CPU_FAIL_CONTROL_0_NONSECURE_Pos  _U_(21)                                              /**< (TZC_CPU_FAIL_CONTROL_0) Failure access's security value Position */
#define TZC_CPU_FAIL_CONTROL_0_NONSECURE_Msk  (_U_(0x1) << TZC_CPU_FAIL_CONTROL_0_NONSECURE_Pos)   /**< (TZC_CPU_FAIL_CONTROL_0) Failure access's security value Mask */
#define TZC_CPU_FAIL_CONTROL_0_NONSECURE(value) (TZC_CPU_FAIL_CONTROL_0_NONSECURE_Msk & ((value) << TZC_CPU_FAIL_CONTROL_0_NONSECURE_Pos))
#define TZC_CPU_FAIL_CONTROL_0_DIRECTION_Pos  _U_(24)                                              /**< (TZC_CPU_FAIL_CONTROL_0) Failure access's direction Position */
#define TZC_CPU_FAIL_CONTROL_0_DIRECTION_Msk  (_U_(0x1) << TZC_CPU_FAIL_CONTROL_0_DIRECTION_Pos)   /**< (TZC_CPU_FAIL_CONTROL_0) Failure access's direction Mask */
#define TZC_CPU_FAIL_CONTROL_0_DIRECTION(value) (TZC_CPU_FAIL_CONTROL_0_DIRECTION_Msk & ((value) << TZC_CPU_FAIL_CONTROL_0_DIRECTION_Pos))
#define TZC_CPU_FAIL_CONTROL_0_Msk            _U_(0x01300000)                                      /**< (TZC_CPU_FAIL_CONTROL_0) Register Mask  */


/* -------- TZC_CPU_FAIL_ID_0 : (TZC Offset: 0x102C) ( R/ 32) Fail ID Register [CPU] -------- */
#define TZC_CPU_FAIL_ID_0_RESETVALUE          _U_(0x00)                                            /**<  (TZC_CPU_FAIL_ID_0) Fail ID Register [CPU]  Reset Value */

#define TZC_CPU_FAIL_ID_0_ID_Pos              _U_(0)                                               /**< (TZC_CPU_FAIL_ID_0) Failure access's ID Position */
#define TZC_CPU_FAIL_ID_0_ID_Msk              (_U_(0x1FF) << TZC_CPU_FAIL_ID_0_ID_Pos)             /**< (TZC_CPU_FAIL_ID_0) Failure access's ID Mask */
#define TZC_CPU_FAIL_ID_0_ID(value)           (TZC_CPU_FAIL_ID_0_ID_Msk & ((value) << TZC_CPU_FAIL_ID_0_ID_Pos))
#define TZC_CPU_FAIL_ID_0_VNET_Pos            _U_(24)                                              /**< (TZC_CPU_FAIL_ID_0) Failure access's virtual network Position */
#define TZC_CPU_FAIL_ID_0_VNET_Msk            (_U_(0xF) << TZC_CPU_FAIL_ID_0_VNET_Pos)             /**< (TZC_CPU_FAIL_ID_0) Failure access's virtual network Mask */
#define TZC_CPU_FAIL_ID_0_VNET(value)         (TZC_CPU_FAIL_ID_0_VNET_Msk & ((value) << TZC_CPU_FAIL_ID_0_VNET_Pos))
#define TZC_CPU_FAIL_ID_0_Msk                 _U_(0x0F0001FF)                                      /**< (TZC_CPU_FAIL_ID_0) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_LOW_0 : (TZC Offset: 0x1100) ( R/ 32) Region 0 Base Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_LOW_0_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_LOW_0) Region 0 Base Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Pos _U_(12)                                              /**< (TZC_CPU_REGION_BASE_LOW_0) Region base address lower 32bits. Position */
#define TZC_CPU_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Pos) /**< (TZC_CPU_REGION_BASE_LOW_0) Region base address lower 32bits. Mask */
#define TZC_CPU_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0(value) (TZC_CPU_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Msk & ((value) << TZC_CPU_REGION_BASE_LOW_0_BASE_ADDRESS_LOW_0_Pos))
#define TZC_CPU_REGION_BASE_LOW_0_Msk         _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_BASE_LOW_0) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_HIGH_0 : (TZC Offset: 0x1104) ( R/ 32) Region 0 Base Address High Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_HIGH_0_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_HIGH_0) Region 0 Base Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_HIGH_0_Msk        _U_(0x00000000)                                      /**< (TZC_CPU_REGION_BASE_HIGH_0) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_LOW_0 : (TZC Offset: 0x1108) ( R/ 32) Region 0 Top Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_LOW_0_RESETVALUE   _U_(0xFFFFFFFF)                                      /**<  (TZC_CPU_REGION_TOP_LOW_0) Region 0 Top Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Pos _U_(12)                                              /**< (TZC_CPU_REGION_TOP_LOW_0) Region top address lower 32bits. Position */
#define TZC_CPU_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Pos) /**< (TZC_CPU_REGION_TOP_LOW_0) Region top address lower 32bits. Mask */
#define TZC_CPU_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0(value) (TZC_CPU_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Msk & ((value) << TZC_CPU_REGION_TOP_LOW_0_TOP_ADDRESS_LOW_0_Pos))
#define TZC_CPU_REGION_TOP_LOW_0_Msk          _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_TOP_LOW_0) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_HIGH_0 : (TZC Offset: 0x110C) ( R/ 32) Region 0 Top Address High Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_HIGH_0_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_TOP_HIGH_0) Region 0 Top Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_HIGH_0_Msk         _U_(0x00000000)                                      /**< (TZC_CPU_REGION_TOP_HIGH_0) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES_0 : (TZC Offset: 0x1110) (R/W 32) Region 0 Attribute Register  [CPU] -------- */
#define TZC_CPU_REGION_ATTRIBUTES_0_RESETVALUE _U_(0x01)                                            /**<  (TZC_CPU_REGION_ATTRIBUTES_0) Region 0 Attribute Register  [CPU]  Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_0_FILTER_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ATTRIBUTES_0) Region filter enables Position */
#define TZC_CPU_REGION_ATTRIBUTES_0_FILTER_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_0_FILTER_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_0) Region filter enables Mask */
#define TZC_CPU_REGION_ATTRIBUTES_0_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_0_FILTER_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_0_FILTER_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_0_S_RD_EN_Pos _U_(30)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_0) Region secure read enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_0_S_RD_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_0_S_RD_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_0) Region secure read enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_0_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_0_S_RD_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_0_S_RD_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_0_S_WR_EN_Pos _U_(31)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_0) Region secure write enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_0_S_WR_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_0_S_WR_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_0) Region secure write enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_0_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_0_S_WR_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_0_S_WR_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_0_Msk       _U_(0xC0000001)                                      /**< (TZC_CPU_REGION_ATTRIBUTES_0) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS_0 : (TZC Offset: 0x1114) (R/W 32) Region 0 ID Access Register  [CPU] -------- */
#define TZC_CPU_REGION_ID_ACCESS_0_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ID_ACCESS_0) Region 0 ID Access Register  [CPU]  Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_0_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ID_ACCESS_0) Region non-secure access ID read enable Position */
#define TZC_CPU_REGION_ID_ACCESS_0_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_0_NSAID_RD_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_0) Region non-secure access ID read enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_0_NSAID_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_0_NSAID_RD_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_0_NSAID_RD_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_0_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_CPU_REGION_ID_ACCESS_0) Region non-secure access ID write enable Position */
#define TZC_CPU_REGION_ID_ACCESS_0_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_0_NSAID_WR_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_0) Region non-secure access ID write enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_0_NSAID_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_0_NSAID_WR_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_0_NSAID_WR_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_0_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_REGION_ID_ACCESS_0) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_LOW_1 : (TZC Offset: 0x1120) (R/W 32) Region 1 Base Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_LOW_1_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_LOW_1) Region 1 Base Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Pos _U_(12)                                              /**< (TZC_CPU_REGION_BASE_LOW_1) Region base address lower 32bits. Position */
#define TZC_CPU_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Pos) /**< (TZC_CPU_REGION_BASE_LOW_1) Region base address lower 32bits. Mask */
#define TZC_CPU_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1(value) (TZC_CPU_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Msk & ((value) << TZC_CPU_REGION_BASE_LOW_1_BASE_ADDRESS_LOW_1_Pos))
#define TZC_CPU_REGION_BASE_LOW_1_Msk         _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_BASE_LOW_1) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_HIGH_1 : (TZC Offset: 0x1124) (R/W 32) Region 1 Base Address High Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_HIGH_1_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_HIGH_1) Region 1 Base Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_HIGH_1_Msk        _U_(0x00000000)                                      /**< (TZC_CPU_REGION_BASE_HIGH_1) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_LOW_1 : (TZC Offset: 0x1128) (R/W 32) Region 1 Top Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_LOW_1_RESETVALUE   _U_(0xFFF)                                           /**<  (TZC_CPU_REGION_TOP_LOW_1) Region 1 Top Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Pos _U_(12)                                              /**< (TZC_CPU_REGION_TOP_LOW_1) Region top address lower 32bits. Position */
#define TZC_CPU_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Pos) /**< (TZC_CPU_REGION_TOP_LOW_1) Region top address lower 32bits. Mask */
#define TZC_CPU_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1(value) (TZC_CPU_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Msk & ((value) << TZC_CPU_REGION_TOP_LOW_1_TOP_ADDRESS_LOW_1_Pos))
#define TZC_CPU_REGION_TOP_LOW_1_Msk          _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_TOP_LOW_1) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_HIGH_1 : (TZC Offset: 0x112C) (R/W 32) Region 1 Top Address High Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_HIGH_1_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_TOP_HIGH_1) Region 1 Top Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_HIGH_1_Msk         _U_(0x00000000)                                      /**< (TZC_CPU_REGION_TOP_HIGH_1) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES_1 : (TZC Offset: 0x1130) (R/W 32) Region 1 Attribute Register [CPU] -------- */
#define TZC_CPU_REGION_ATTRIBUTES_1_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ATTRIBUTES_1) Region 1 Attribute Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_1_FILTER_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ATTRIBUTES_1) Region filter enables Position */
#define TZC_CPU_REGION_ATTRIBUTES_1_FILTER_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_1_FILTER_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_1) Region filter enables Mask */
#define TZC_CPU_REGION_ATTRIBUTES_1_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_1_FILTER_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_1_FILTER_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_1_S_RD_EN_Pos _U_(30)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_1) Region secure read enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_1_S_RD_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_1_S_RD_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_1) Region secure read enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_1_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_1_S_RD_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_1_S_RD_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_1_S_WR_EN_Pos _U_(31)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_1) Region secure write enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_1_S_WR_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_1_S_WR_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_1) Region secure write enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_1_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_1_S_WR_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_1_S_WR_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_1_Msk       _U_(0xC0000001)                                      /**< (TZC_CPU_REGION_ATTRIBUTES_1) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS_1 : (TZC Offset: 0x1134) (R/W 32) Region 1 ID Access Register [CPU] -------- */
#define TZC_CPU_REGION_ID_ACCESS_1_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ID_ACCESS_1) Region 1 ID Access Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_1_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ID_ACCESS_1) Region non-secure access ID read enable Position */
#define TZC_CPU_REGION_ID_ACCESS_1_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_1_NSAID_RD_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_1) Region non-secure access ID read enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_1_NSAID_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_1_NSAID_RD_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_1_NSAID_RD_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_1_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_CPU_REGION_ID_ACCESS_1) Region non-secure access ID write enable Position */
#define TZC_CPU_REGION_ID_ACCESS_1_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_1_NSAID_WR_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_1) Region non-secure access ID write enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_1_NSAID_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_1_NSAID_WR_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_1_NSAID_WR_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_1_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_REGION_ID_ACCESS_1) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_LOW_2 : (TZC Offset: 0x1140) (R/W 32) Region 2 Base Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_LOW_2_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_LOW_2) Region 2 Base Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Pos _U_(12)                                              /**< (TZC_CPU_REGION_BASE_LOW_2) Region base address lower 32bits. Position */
#define TZC_CPU_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Pos) /**< (TZC_CPU_REGION_BASE_LOW_2) Region base address lower 32bits. Mask */
#define TZC_CPU_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2(value) (TZC_CPU_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Msk & ((value) << TZC_CPU_REGION_BASE_LOW_2_BASE_ADDRESS_LOW_2_Pos))
#define TZC_CPU_REGION_BASE_LOW_2_Msk         _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_BASE_LOW_2) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_HIGH_2 : (TZC Offset: 0x1144) (R/W 32) Region 2 Base Address High Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_HIGH_2_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_HIGH_2) Region 2 Base Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_HIGH_2_Msk        _U_(0x00000000)                                      /**< (TZC_CPU_REGION_BASE_HIGH_2) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_LOW_2 : (TZC Offset: 0x1148) (R/W 32) Region 2 Top Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_LOW_2_RESETVALUE   _U_(0xFFF)                                           /**<  (TZC_CPU_REGION_TOP_LOW_2) Region 2 Top Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Pos _U_(12)                                              /**< (TZC_CPU_REGION_TOP_LOW_2) Region top address lower 32bits. Position */
#define TZC_CPU_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Pos) /**< (TZC_CPU_REGION_TOP_LOW_2) Region top address lower 32bits. Mask */
#define TZC_CPU_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2(value) (TZC_CPU_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Msk & ((value) << TZC_CPU_REGION_TOP_LOW_2_TOP_ADDRESS_LOW_2_Pos))
#define TZC_CPU_REGION_TOP_LOW_2_Msk          _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_TOP_LOW_2) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_HIGH_2 : (TZC Offset: 0x114C) (R/W 32) Region 2 Top Address High Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_HIGH_2_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_TOP_HIGH_2) Region 2 Top Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_HIGH_2_Msk         _U_(0x00000000)                                      /**< (TZC_CPU_REGION_TOP_HIGH_2) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES_2 : (TZC Offset: 0x1150) (R/W 32) Region 2 Attribute Register [CPU] -------- */
#define TZC_CPU_REGION_ATTRIBUTES_2_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ATTRIBUTES_2) Region 2 Attribute Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_2_FILTER_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ATTRIBUTES_2) Region filter enables Position */
#define TZC_CPU_REGION_ATTRIBUTES_2_FILTER_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_2_FILTER_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_2) Region filter enables Mask */
#define TZC_CPU_REGION_ATTRIBUTES_2_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_2_FILTER_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_2_FILTER_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_2_S_RD_EN_Pos _U_(30)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_2) Region secure read enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_2_S_RD_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_2_S_RD_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_2) Region secure read enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_2_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_2_S_RD_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_2_S_RD_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_2_S_WR_EN_Pos _U_(31)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_2) Region secure write enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_2_S_WR_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_2_S_WR_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_2) Region secure write enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_2_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_2_S_WR_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_2_S_WR_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_2_Msk       _U_(0xC0000001)                                      /**< (TZC_CPU_REGION_ATTRIBUTES_2) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS_2 : (TZC Offset: 0x1154) (R/W 32) Region 2 ID Access Register [CPU] -------- */
#define TZC_CPU_REGION_ID_ACCESS_2_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ID_ACCESS_2) Region 2 ID Access Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_2_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ID_ACCESS_2) Region non-secure access ID read enable Position */
#define TZC_CPU_REGION_ID_ACCESS_2_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_2_NSAID_RD_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_2) Region non-secure access ID read enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_2_NSAID_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_2_NSAID_RD_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_2_NSAID_RD_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_2_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_CPU_REGION_ID_ACCESS_2) Region non-secure access ID write enable Position */
#define TZC_CPU_REGION_ID_ACCESS_2_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_2_NSAID_WR_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_2) Region non-secure access ID write enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_2_NSAID_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_2_NSAID_WR_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_2_NSAID_WR_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_2_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_REGION_ID_ACCESS_2) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_LOW_3 : (TZC Offset: 0x1160) (R/W 32) Region 3 Base Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_LOW_3_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_LOW_3) Region 3 Base Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Pos _U_(12)                                              /**< (TZC_CPU_REGION_BASE_LOW_3) Region base address lower 32bits. Position */
#define TZC_CPU_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Pos) /**< (TZC_CPU_REGION_BASE_LOW_3) Region base address lower 32bits. Mask */
#define TZC_CPU_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3(value) (TZC_CPU_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Msk & ((value) << TZC_CPU_REGION_BASE_LOW_3_BASE_ADDRESS_LOW_3_Pos))
#define TZC_CPU_REGION_BASE_LOW_3_Msk         _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_BASE_LOW_3) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_HIGH_3 : (TZC Offset: 0x1164) (R/W 32) Region 3 Base Address High Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_HIGH_3_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_HIGH_3) Region 3 Base Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_HIGH_3_Msk        _U_(0x00000000)                                      /**< (TZC_CPU_REGION_BASE_HIGH_3) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_LOW_3 : (TZC Offset: 0x1168) (R/W 32) Region 3 Top Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_LOW_3_RESETVALUE   _U_(0xFFF)                                           /**<  (TZC_CPU_REGION_TOP_LOW_3) Region 3 Top Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Pos _U_(12)                                              /**< (TZC_CPU_REGION_TOP_LOW_3) Region top address lower 32bits. Position */
#define TZC_CPU_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Pos) /**< (TZC_CPU_REGION_TOP_LOW_3) Region top address lower 32bits. Mask */
#define TZC_CPU_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3(value) (TZC_CPU_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Msk & ((value) << TZC_CPU_REGION_TOP_LOW_3_TOP_ADDRESS_LOW_3_Pos))
#define TZC_CPU_REGION_TOP_LOW_3_Msk          _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_TOP_LOW_3) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_HIGH_3 : (TZC Offset: 0x116C) (R/W 32) Region 3 Top Address High Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_HIGH_3_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_TOP_HIGH_3) Region 3 Top Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_HIGH_3_Msk         _U_(0x00000000)                                      /**< (TZC_CPU_REGION_TOP_HIGH_3) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES_3 : (TZC Offset: 0x1170) (R/W 32) Region 3 Attribute Register [CPU] -------- */
#define TZC_CPU_REGION_ATTRIBUTES_3_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ATTRIBUTES_3) Region 3 Attribute Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_3_FILTER_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ATTRIBUTES_3) Region filter enables Position */
#define TZC_CPU_REGION_ATTRIBUTES_3_FILTER_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_3_FILTER_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_3) Region filter enables Mask */
#define TZC_CPU_REGION_ATTRIBUTES_3_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_3_FILTER_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_3_FILTER_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_3_S_RD_EN_Pos _U_(30)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_3) Region secure read enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_3_S_RD_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_3_S_RD_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_3) Region secure read enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_3_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_3_S_RD_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_3_S_RD_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_3_S_WR_EN_Pos _U_(31)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_3) Region secure write enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_3_S_WR_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_3_S_WR_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_3) Region secure write enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_3_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_3_S_WR_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_3_S_WR_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_3_Msk       _U_(0xC0000001)                                      /**< (TZC_CPU_REGION_ATTRIBUTES_3) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS_3 : (TZC Offset: 0x1174) (R/W 32) Region 3 ID Access Register [CPU] -------- */
#define TZC_CPU_REGION_ID_ACCESS_3_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ID_ACCESS_3) Region 3 ID Access Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_3_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ID_ACCESS_3) Region non-secure access ID read enable Position */
#define TZC_CPU_REGION_ID_ACCESS_3_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_3_NSAID_RD_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_3) Region non-secure access ID read enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_3_NSAID_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_3_NSAID_RD_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_3_NSAID_RD_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_3_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_CPU_REGION_ID_ACCESS_3) Region non-secure access ID write enable Position */
#define TZC_CPU_REGION_ID_ACCESS_3_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_3_NSAID_WR_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_3) Region non-secure access ID write enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_3_NSAID_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_3_NSAID_WR_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_3_NSAID_WR_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_3_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_REGION_ID_ACCESS_3) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_LOW_4 : (TZC Offset: 0x1180) (R/W 32) Region 4 Base Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_LOW_4_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_LOW_4) Region 4 Base Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Pos _U_(12)                                              /**< (TZC_CPU_REGION_BASE_LOW_4) Region base address lower 32bits. Position */
#define TZC_CPU_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Pos) /**< (TZC_CPU_REGION_BASE_LOW_4) Region base address lower 32bits. Mask */
#define TZC_CPU_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4(value) (TZC_CPU_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Msk & ((value) << TZC_CPU_REGION_BASE_LOW_4_BASE_ADDRESS_LOW_4_Pos))
#define TZC_CPU_REGION_BASE_LOW_4_Msk         _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_BASE_LOW_4) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_HIGH_4 : (TZC Offset: 0x1184) (R/W 32) Region 4 Base Address High Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_HIGH_4_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_HIGH_4) Region 4 Base Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_HIGH_4_Msk        _U_(0x00000000)                                      /**< (TZC_CPU_REGION_BASE_HIGH_4) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_LOW_4 : (TZC Offset: 0x1188) (R/W 32) Region 4 Top Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_LOW_4_RESETVALUE   _U_(0xFFF)                                           /**<  (TZC_CPU_REGION_TOP_LOW_4) Region 4 Top Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Pos _U_(12)                                              /**< (TZC_CPU_REGION_TOP_LOW_4) Region top address lower 32bits. Position */
#define TZC_CPU_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Pos) /**< (TZC_CPU_REGION_TOP_LOW_4) Region top address lower 32bits. Mask */
#define TZC_CPU_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4(value) (TZC_CPU_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Msk & ((value) << TZC_CPU_REGION_TOP_LOW_4_TOP_ADDRESS_LOW_4_Pos))
#define TZC_CPU_REGION_TOP_LOW_4_Msk          _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_TOP_LOW_4) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_HIGH_4 : (TZC Offset: 0x118C) (R/W 32) Region 4 Top Address High Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_HIGH_4_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_TOP_HIGH_4) Region 4 Top Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_HIGH_4_Msk         _U_(0x00000000)                                      /**< (TZC_CPU_REGION_TOP_HIGH_4) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES_4 : (TZC Offset: 0x1190) (R/W 32) Region 4 Attribute Register [CPU] -------- */
#define TZC_CPU_REGION_ATTRIBUTES_4_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ATTRIBUTES_4) Region 4 Attribute Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_4_FILTER_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ATTRIBUTES_4) Region filter enables Position */
#define TZC_CPU_REGION_ATTRIBUTES_4_FILTER_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_4_FILTER_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_4) Region filter enables Mask */
#define TZC_CPU_REGION_ATTRIBUTES_4_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_4_FILTER_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_4_FILTER_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_4_S_RD_EN_Pos _U_(30)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_4) Region secure read enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_4_S_RD_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_4_S_RD_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_4) Region secure read enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_4_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_4_S_RD_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_4_S_RD_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_4_S_WR_EN_Pos _U_(31)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_4) Region secure write enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_4_S_WR_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_4_S_WR_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_4) Region secure write enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_4_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_4_S_WR_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_4_S_WR_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_4_Msk       _U_(0xC0000001)                                      /**< (TZC_CPU_REGION_ATTRIBUTES_4) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS_4 : (TZC Offset: 0x1194) (R/W 32) Region 4 ID Access Register [CPU] -------- */
#define TZC_CPU_REGION_ID_ACCESS_4_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ID_ACCESS_4) Region 4 ID Access Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_4_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ID_ACCESS_4) Region non-secure access ID read enable Position */
#define TZC_CPU_REGION_ID_ACCESS_4_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_4_NSAID_RD_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_4) Region non-secure access ID read enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_4_NSAID_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_4_NSAID_RD_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_4_NSAID_RD_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_4_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_CPU_REGION_ID_ACCESS_4) Region non-secure access ID write enable Position */
#define TZC_CPU_REGION_ID_ACCESS_4_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_4_NSAID_WR_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_4) Region non-secure access ID write enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_4_NSAID_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_4_NSAID_WR_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_4_NSAID_WR_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_4_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_REGION_ID_ACCESS_4) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_LOW_5 : (TZC Offset: 0x11A0) (R/W 32) Region 5 Base Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_LOW_5_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_LOW_5) Region 5 Base Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Pos _U_(12)                                              /**< (TZC_CPU_REGION_BASE_LOW_5) Region base address lower 32bits. Position */
#define TZC_CPU_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Pos) /**< (TZC_CPU_REGION_BASE_LOW_5) Region base address lower 32bits. Mask */
#define TZC_CPU_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5(value) (TZC_CPU_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Msk & ((value) << TZC_CPU_REGION_BASE_LOW_5_BASE_ADDRESS_LOW_5_Pos))
#define TZC_CPU_REGION_BASE_LOW_5_Msk         _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_BASE_LOW_5) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_HIGH_5 : (TZC Offset: 0x11A4) (R/W 32) Region 5 Base Address High Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_HIGH_5_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_HIGH_5) Region 5 Base Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_HIGH_5_Msk        _U_(0x00000000)                                      /**< (TZC_CPU_REGION_BASE_HIGH_5) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_LOW_5 : (TZC Offset: 0x11A8) (R/W 32) Region 5 Top Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_LOW_5_RESETVALUE   _U_(0xFFF)                                           /**<  (TZC_CPU_REGION_TOP_LOW_5) Region 5 Top Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Pos _U_(12)                                              /**< (TZC_CPU_REGION_TOP_LOW_5) Region top address lower 32bits. Position */
#define TZC_CPU_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Pos) /**< (TZC_CPU_REGION_TOP_LOW_5) Region top address lower 32bits. Mask */
#define TZC_CPU_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5(value) (TZC_CPU_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Msk & ((value) << TZC_CPU_REGION_TOP_LOW_5_TOP_ADDRESS_LOW_5_Pos))
#define TZC_CPU_REGION_TOP_LOW_5_Msk          _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_TOP_LOW_5) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_HIGH_5 : (TZC Offset: 0x11AC) (R/W 32) Region 5 Top Address High Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_HIGH_5_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_TOP_HIGH_5) Region 5 Top Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_HIGH_5_Msk         _U_(0x00000000)                                      /**< (TZC_CPU_REGION_TOP_HIGH_5) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES_5 : (TZC Offset: 0x11B0) (R/W 32) Region 5 Attribute Register [CPU] -------- */
#define TZC_CPU_REGION_ATTRIBUTES_5_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ATTRIBUTES_5) Region 5 Attribute Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_5_FILTER_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ATTRIBUTES_5) Region filter enables Position */
#define TZC_CPU_REGION_ATTRIBUTES_5_FILTER_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_5_FILTER_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_5) Region filter enables Mask */
#define TZC_CPU_REGION_ATTRIBUTES_5_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_5_FILTER_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_5_FILTER_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_5_S_RD_EN_Pos _U_(30)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_5) Region secure read enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_5_S_RD_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_5_S_RD_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_5) Region secure read enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_5_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_5_S_RD_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_5_S_RD_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_5_S_WR_EN_Pos _U_(31)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_5) Region secure write enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_5_S_WR_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_5_S_WR_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_5) Region secure write enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_5_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_5_S_WR_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_5_S_WR_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_5_Msk       _U_(0xC0000001)                                      /**< (TZC_CPU_REGION_ATTRIBUTES_5) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS_5 : (TZC Offset: 0x11B4) (R/W 32) Region 5 ID Access Register [CPU] -------- */
#define TZC_CPU_REGION_ID_ACCESS_5_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ID_ACCESS_5) Region 5 ID Access Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_5_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ID_ACCESS_5) Region non-secure access ID read enable Position */
#define TZC_CPU_REGION_ID_ACCESS_5_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_5_NSAID_RD_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_5) Region non-secure access ID read enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_5_NSAID_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_5_NSAID_RD_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_5_NSAID_RD_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_5_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_CPU_REGION_ID_ACCESS_5) Region non-secure access ID write enable Position */
#define TZC_CPU_REGION_ID_ACCESS_5_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_5_NSAID_WR_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_5) Region non-secure access ID write enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_5_NSAID_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_5_NSAID_WR_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_5_NSAID_WR_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_5_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_REGION_ID_ACCESS_5) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_LOW_6 : (TZC Offset: 0x11C0) (R/W 32) Region 6 Base Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_LOW_6_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_LOW_6) Region 6 Base Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Pos _U_(12)                                              /**< (TZC_CPU_REGION_BASE_LOW_6) Region base address lower 32bits. Position */
#define TZC_CPU_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Pos) /**< (TZC_CPU_REGION_BASE_LOW_6) Region base address lower 32bits. Mask */
#define TZC_CPU_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6(value) (TZC_CPU_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Msk & ((value) << TZC_CPU_REGION_BASE_LOW_6_BASE_ADDRESS_LOW_6_Pos))
#define TZC_CPU_REGION_BASE_LOW_6_Msk         _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_BASE_LOW_6) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_HIGH_6 : (TZC Offset: 0x11C4) (R/W 32) Region 6 Base Address High Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_HIGH_6_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_HIGH_6) Region 6 Base Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_HIGH_6_Msk        _U_(0x00000000)                                      /**< (TZC_CPU_REGION_BASE_HIGH_6) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_LOW_6 : (TZC Offset: 0x11C8) (R/W 32) Region 6 Top Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_LOW_6_RESETVALUE   _U_(0xFFF)                                           /**<  (TZC_CPU_REGION_TOP_LOW_6) Region 6 Top Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Pos _U_(12)                                              /**< (TZC_CPU_REGION_TOP_LOW_6) Region top address lower 32bits. Position */
#define TZC_CPU_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Pos) /**< (TZC_CPU_REGION_TOP_LOW_6) Region top address lower 32bits. Mask */
#define TZC_CPU_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6(value) (TZC_CPU_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Msk & ((value) << TZC_CPU_REGION_TOP_LOW_6_TOP_ADDRESS_LOW_6_Pos))
#define TZC_CPU_REGION_TOP_LOW_6_Msk          _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_TOP_LOW_6) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_HIGH_6 : (TZC Offset: 0x11CC) (R/W 32) Region 6 Top Address High Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_HIGH_6_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_TOP_HIGH_6) Region 6 Top Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_HIGH_6_Msk         _U_(0x00000000)                                      /**< (TZC_CPU_REGION_TOP_HIGH_6) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES_6 : (TZC Offset: 0x11D0) (R/W 32) Region 6 Attribute Register [CPU] -------- */
#define TZC_CPU_REGION_ATTRIBUTES_6_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ATTRIBUTES_6) Region 6 Attribute Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_6_FILTER_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ATTRIBUTES_6) Region filter enables Position */
#define TZC_CPU_REGION_ATTRIBUTES_6_FILTER_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_6_FILTER_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_6) Region filter enables Mask */
#define TZC_CPU_REGION_ATTRIBUTES_6_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_6_FILTER_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_6_FILTER_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_6_S_RD_EN_Pos _U_(30)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_6) Region secure read enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_6_S_RD_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_6_S_RD_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_6) Region secure read enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_6_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_6_S_RD_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_6_S_RD_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_6_S_WR_EN_Pos _U_(31)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_6) Region secure write enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_6_S_WR_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_6_S_WR_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_6) Region secure write enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_6_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_6_S_WR_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_6_S_WR_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_6_Msk       _U_(0xC0000001)                                      /**< (TZC_CPU_REGION_ATTRIBUTES_6) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS_6 : (TZC Offset: 0x11D4) (R/W 32) Region 6 ID Access Register [CPU] -------- */
#define TZC_CPU_REGION_ID_ACCESS_6_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ID_ACCESS_6) Region 6 ID Access Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_6_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ID_ACCESS_6) Region non-secure access ID read enable Position */
#define TZC_CPU_REGION_ID_ACCESS_6_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_6_NSAID_RD_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_6) Region non-secure access ID read enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_6_NSAID_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_6_NSAID_RD_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_6_NSAID_RD_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_6_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_CPU_REGION_ID_ACCESS_6) Region non-secure access ID write enable Position */
#define TZC_CPU_REGION_ID_ACCESS_6_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_6_NSAID_WR_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_6) Region non-secure access ID write enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_6_NSAID_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_6_NSAID_WR_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_6_NSAID_WR_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_6_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_REGION_ID_ACCESS_6) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_LOW_7 : (TZC Offset: 0x11E0) (R/W 32) Region 7 Base Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_LOW_7_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_LOW_7) Region 7 Base Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Pos _U_(12)                                              /**< (TZC_CPU_REGION_BASE_LOW_7) Region base address lower 32bits. Position */
#define TZC_CPU_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Pos) /**< (TZC_CPU_REGION_BASE_LOW_7) Region base address lower 32bits. Mask */
#define TZC_CPU_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7(value) (TZC_CPU_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Msk & ((value) << TZC_CPU_REGION_BASE_LOW_7_BASE_ADDRESS_LOW_7_Pos))
#define TZC_CPU_REGION_BASE_LOW_7_Msk         _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_BASE_LOW_7) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_HIGH_7 : (TZC Offset: 0x11E4) (R/W 32) Region 7 Base Address High Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_HIGH_7_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_HIGH_7) Region 7 Base Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_HIGH_7_Msk        _U_(0x00000000)                                      /**< (TZC_CPU_REGION_BASE_HIGH_7) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_LOW_7 : (TZC Offset: 0x11E8) (R/W 32) Region 7 Top Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_LOW_7_RESETVALUE   _U_(0xFFF)                                           /**<  (TZC_CPU_REGION_TOP_LOW_7) Region 7 Top Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Pos _U_(12)                                              /**< (TZC_CPU_REGION_TOP_LOW_7) Region top address lower 32bits. Position */
#define TZC_CPU_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Pos) /**< (TZC_CPU_REGION_TOP_LOW_7) Region top address lower 32bits. Mask */
#define TZC_CPU_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7(value) (TZC_CPU_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Msk & ((value) << TZC_CPU_REGION_TOP_LOW_7_TOP_ADDRESS_LOW_7_Pos))
#define TZC_CPU_REGION_TOP_LOW_7_Msk          _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_TOP_LOW_7) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_HIGH_7 : (TZC Offset: 0x11EC) (R/W 32) Region 7 Top Address High Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_HIGH_7_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_TOP_HIGH_7) Region 7 Top Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_HIGH_7_Msk         _U_(0x00000000)                                      /**< (TZC_CPU_REGION_TOP_HIGH_7) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES_7 : (TZC Offset: 0x11F0) (R/W 32) Region 7 Attribute Register [CPU] -------- */
#define TZC_CPU_REGION_ATTRIBUTES_7_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ATTRIBUTES_7) Region 7 Attribute Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_7_FILTER_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ATTRIBUTES_7) Region filter enables Position */
#define TZC_CPU_REGION_ATTRIBUTES_7_FILTER_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_7_FILTER_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_7) Region filter enables Mask */
#define TZC_CPU_REGION_ATTRIBUTES_7_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_7_FILTER_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_7_FILTER_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_7_S_RD_EN_Pos _U_(30)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_7) Region secure read enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_7_S_RD_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_7_S_RD_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_7) Region secure read enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_7_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_7_S_RD_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_7_S_RD_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_7_S_WR_EN_Pos _U_(31)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_7) Region secure write enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_7_S_WR_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_7_S_WR_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_7) Region secure write enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_7_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_7_S_WR_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_7_S_WR_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_7_Msk       _U_(0xC0000001)                                      /**< (TZC_CPU_REGION_ATTRIBUTES_7) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS_7 : (TZC Offset: 0x11F4) (R/W 32) Region 7 ID Access Register [CPU] -------- */
#define TZC_CPU_REGION_ID_ACCESS_7_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ID_ACCESS_7) Region 7 ID Access Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_7_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ID_ACCESS_7) Region non-secure access ID read enable Position */
#define TZC_CPU_REGION_ID_ACCESS_7_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_7_NSAID_RD_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_7) Region non-secure access ID read enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_7_NSAID_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_7_NSAID_RD_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_7_NSAID_RD_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_7_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_CPU_REGION_ID_ACCESS_7) Region non-secure access ID write enable Position */
#define TZC_CPU_REGION_ID_ACCESS_7_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_7_NSAID_WR_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_7) Region non-secure access ID write enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_7_NSAID_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_7_NSAID_WR_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_7_NSAID_WR_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_7_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_REGION_ID_ACCESS_7) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_LOW_8 : (TZC Offset: 0x1200) (R/W 32) Region 8 Base Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_LOW_8_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_LOW_8) Region 8 Base Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Pos _U_(12)                                              /**< (TZC_CPU_REGION_BASE_LOW_8) Region base address lower 32bits. Position */
#define TZC_CPU_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Pos) /**< (TZC_CPU_REGION_BASE_LOW_8) Region base address lower 32bits. Mask */
#define TZC_CPU_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8(value) (TZC_CPU_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Msk & ((value) << TZC_CPU_REGION_BASE_LOW_8_BASE_ADDRESS_LOW_8_Pos))
#define TZC_CPU_REGION_BASE_LOW_8_Msk         _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_BASE_LOW_8) Register Mask  */


/* -------- TZC_CPU_REGION_BASE_HIGH_8 : (TZC Offset: 0x1204) (R/W 32) Region 8 Base Address High Register [CPU] -------- */
#define TZC_CPU_REGION_BASE_HIGH_8_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_BASE_HIGH_8) Region 8 Base Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_BASE_HIGH_8_Msk        _U_(0x00000000)                                      /**< (TZC_CPU_REGION_BASE_HIGH_8) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_LOW_8 : (TZC Offset: 0x1208) (R/W 32) Region 8 Top Address Low Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_LOW_8_RESETVALUE   _U_(0xFFF)                                           /**<  (TZC_CPU_REGION_TOP_LOW_8) Region 8 Top Address Low Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Pos _U_(12)                                              /**< (TZC_CPU_REGION_TOP_LOW_8) Region top address lower 32bits. Position */
#define TZC_CPU_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Msk (_U_(0xFFFFF) << TZC_CPU_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Pos) /**< (TZC_CPU_REGION_TOP_LOW_8) Region top address lower 32bits. Mask */
#define TZC_CPU_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8(value) (TZC_CPU_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Msk & ((value) << TZC_CPU_REGION_TOP_LOW_8_TOP_ADDRESS_LOW_8_Pos))
#define TZC_CPU_REGION_TOP_LOW_8_Msk          _U_(0xFFFFF000)                                      /**< (TZC_CPU_REGION_TOP_LOW_8) Register Mask  */


/* -------- TZC_CPU_REGION_TOP_HIGH_8 : (TZC Offset: 0x120C) (R/W 32) Region 8 Top Address High Register [CPU] -------- */
#define TZC_CPU_REGION_TOP_HIGH_8_RESETVALUE  _U_(0x00)                                            /**<  (TZC_CPU_REGION_TOP_HIGH_8) Region 8 Top Address High Register [CPU]  Reset Value */

#define TZC_CPU_REGION_TOP_HIGH_8_Msk         _U_(0x00000000)                                      /**< (TZC_CPU_REGION_TOP_HIGH_8) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES_8 : (TZC Offset: 0x1210) (R/W 32) Region 8 Attribute Register [CPU] -------- */
#define TZC_CPU_REGION_ATTRIBUTES_8_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ATTRIBUTES_8) Region 8 Attribute Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_8_FILTER_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ATTRIBUTES_8) Region filter enables Position */
#define TZC_CPU_REGION_ATTRIBUTES_8_FILTER_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_8_FILTER_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_8) Region filter enables Mask */
#define TZC_CPU_REGION_ATTRIBUTES_8_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_8_FILTER_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_8_FILTER_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_8_S_RD_EN_Pos _U_(30)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_8) Region secure read enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_8_S_RD_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_8_S_RD_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_8) Region secure read enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_8_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_8_S_RD_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_8_S_RD_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_8_S_WR_EN_Pos _U_(31)                                              /**< (TZC_CPU_REGION_ATTRIBUTES_8) Region secure write enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_8_S_WR_EN_Msk (_U_(0x1) << TZC_CPU_REGION_ATTRIBUTES_8_S_WR_EN_Pos) /**< (TZC_CPU_REGION_ATTRIBUTES_8) Region secure write enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_8_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_8_S_WR_EN_Msk & ((value) << TZC_CPU_REGION_ATTRIBUTES_8_S_WR_EN_Pos))
#define TZC_CPU_REGION_ATTRIBUTES_8_Msk       _U_(0xC0000001)                                      /**< (TZC_CPU_REGION_ATTRIBUTES_8) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS_8 : (TZC Offset: 0x1214) (R/W 32) Region 8 ID Access Register [CPU] -------- */
#define TZC_CPU_REGION_ID_ACCESS_8_RESETVALUE _U_(0x00)                                            /**<  (TZC_CPU_REGION_ID_ACCESS_8) Region 8 ID Access Register [CPU]  Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_8_NSAID_RD_EN_Pos _U_(0)                                               /**< (TZC_CPU_REGION_ID_ACCESS_8) Region non-secure access ID read enable Position */
#define TZC_CPU_REGION_ID_ACCESS_8_NSAID_RD_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_8_NSAID_RD_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_8) Region non-secure access ID read enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_8_NSAID_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_8_NSAID_RD_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_8_NSAID_RD_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_8_NSAID_WR_EN_Pos _U_(16)                                              /**< (TZC_CPU_REGION_ID_ACCESS_8) Region non-secure access ID write enable Position */
#define TZC_CPU_REGION_ID_ACCESS_8_NSAID_WR_EN_Msk (_U_(0xFFFF) << TZC_CPU_REGION_ID_ACCESS_8_NSAID_WR_EN_Pos) /**< (TZC_CPU_REGION_ID_ACCESS_8) Region non-secure access ID write enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_8_NSAID_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_8_NSAID_WR_EN_Msk & ((value) << TZC_CPU_REGION_ID_ACCESS_8_NSAID_WR_EN_Pos))
#define TZC_CPU_REGION_ID_ACCESS_8_Msk        _U_(0xFFFFFFFF)                                      /**< (TZC_CPU_REGION_ID_ACCESS_8) Register Mask  */


/* -------- TZC_CPU_PID4 : (TZC Offset: 0x1FD0) ( R/ 32) Peripheral Identification 4 Register [CPU] -------- */
#define TZC_CPU_PID4_RESETVALUE               _U_(0x04)                                            /**<  (TZC_CPU_PID4) Peripheral Identification 4 Register [CPU]  Reset Value */

#define TZC_CPU_PID4_JEP106_C_CODE_Pos        _U_(0)                                               /**< (TZC_CPU_PID4) JEP106 continuation code Position */
#define TZC_CPU_PID4_JEP106_C_CODE_Msk        (_U_(0xF) << TZC_CPU_PID4_JEP106_C_CODE_Pos)         /**< (TZC_CPU_PID4) JEP106 continuation code Mask */
#define TZC_CPU_PID4_JEP106_C_CODE(value)     (TZC_CPU_PID4_JEP106_C_CODE_Msk & ((value) << TZC_CPU_PID4_JEP106_C_CODE_Pos))
#define TZC_CPU_PID4_COUNT_4KB_Pos            _U_(4)                                               /**< (TZC_CPU_PID4) Number of 4Kbyte address blocks Position */
#define TZC_CPU_PID4_COUNT_4KB_Msk            (_U_(0xF) << TZC_CPU_PID4_COUNT_4KB_Pos)             /**< (TZC_CPU_PID4) Number of 4Kbyte address blocks Mask */
#define TZC_CPU_PID4_COUNT_4KB(value)         (TZC_CPU_PID4_COUNT_4KB_Msk & ((value) << TZC_CPU_PID4_COUNT_4KB_Pos))
#define TZC_CPU_PID4_Msk                      _U_(0x000000FF)                                      /**< (TZC_CPU_PID4) Register Mask  */


/* -------- TZC_CPU_PID5 : (TZC Offset: 0x1FD4) ( R/ 32) Peripheral Identification 5 Register [CPU] -------- */
#define TZC_CPU_PID5_RESETVALUE               _U_(0x00)                                            /**<  (TZC_CPU_PID5) Peripheral Identification 5 Register [CPU]  Reset Value */

#define TZC_CPU_PID5_Msk                      _U_(0x00000000)                                      /**< (TZC_CPU_PID5) Register Mask  */


/* -------- TZC_CPU_PID6 : (TZC Offset: 0x1FD8) ( R/ 32) Peripheral Identification 6 Register [CPU] -------- */
#define TZC_CPU_PID6_RESETVALUE               _U_(0x00)                                            /**<  (TZC_CPU_PID6) Peripheral Identification 6 Register [CPU]  Reset Value */

#define TZC_CPU_PID6_Msk                      _U_(0x00000000)                                      /**< (TZC_CPU_PID6) Register Mask  */


/* -------- TZC_CPU_PID7 : (TZC Offset: 0x1FDC) ( R/ 32) Peripheral Identification 7 Register [CPU] -------- */
#define TZC_CPU_PID7_RESETVALUE               _U_(0x00)                                            /**<  (TZC_CPU_PID7) Peripheral Identification 7 Register [CPU]  Reset Value */

#define TZC_CPU_PID7_Msk                      _U_(0x00000000)                                      /**< (TZC_CPU_PID7) Register Mask  */


/* -------- TZC_CPU_PID0 : (TZC Offset: 0x1FE0) ( R/ 32) Peripheral Identification 0 Register [CPU] -------- */
#define TZC_CPU_PID0_RESETVALUE               _U_(0x60)                                            /**<  (TZC_CPU_PID0) Peripheral Identification 0 Register [CPU]  Reset Value */

#define TZC_CPU_PID0_PART_NUMBER_0_Pos        _U_(0)                                               /**< (TZC_CPU_PID0) Part number lower 8 bits Position */
#define TZC_CPU_PID0_PART_NUMBER_0_Msk        (_U_(0xFF) << TZC_CPU_PID0_PART_NUMBER_0_Pos)        /**< (TZC_CPU_PID0) Part number lower 8 bits Mask */
#define TZC_CPU_PID0_PART_NUMBER_0(value)     (TZC_CPU_PID0_PART_NUMBER_0_Msk & ((value) << TZC_CPU_PID0_PART_NUMBER_0_Pos))
#define TZC_CPU_PID0_Msk                      _U_(0x000000FF)                                      /**< (TZC_CPU_PID0) Register Mask  */


/* -------- TZC_CPU_PID1 : (TZC Offset: 0x1FE4) ( R/ 32) Peripheral Identification 1 Register [CPU] -------- */
#define TZC_CPU_PID1_RESETVALUE               _U_(0xB4)                                            /**<  (TZC_CPU_PID1) Peripheral Identification 1 Register [CPU]  Reset Value */

#define TZC_CPU_PID1_PART_NUMBER_0_Pos        _U_(0)                                               /**< (TZC_CPU_PID1) Part number top 4 bits Position */
#define TZC_CPU_PID1_PART_NUMBER_0_Msk        (_U_(0xF) << TZC_CPU_PID1_PART_NUMBER_0_Pos)         /**< (TZC_CPU_PID1) Part number top 4 bits Mask */
#define TZC_CPU_PID1_PART_NUMBER_0(value)     (TZC_CPU_PID1_PART_NUMBER_0_Msk & ((value) << TZC_CPU_PID1_PART_NUMBER_0_Pos))
#define TZC_CPU_PID1_JEP106_ID_3_0_Pos        _U_(4)                                               /**< (TZC_CPU_PID1) JEP106 ARM's identification code bits 3 down to 0 Position */
#define TZC_CPU_PID1_JEP106_ID_3_0_Msk        (_U_(0xF) << TZC_CPU_PID1_JEP106_ID_3_0_Pos)         /**< (TZC_CPU_PID1) JEP106 ARM's identification code bits 3 down to 0 Mask */
#define TZC_CPU_PID1_JEP106_ID_3_0(value)     (TZC_CPU_PID1_JEP106_ID_3_0_Msk & ((value) << TZC_CPU_PID1_JEP106_ID_3_0_Pos))
#define TZC_CPU_PID1_Msk                      _U_(0x000000FF)                                      /**< (TZC_CPU_PID1) Register Mask  */


/* -------- TZC_CPU_PID2 : (TZC Offset: 0x1FE8) ( R/ 32) Peripheral Identification 2 Register [CPU] -------- */
#define TZC_CPU_PID2_RESETVALUE               _U_(0x2B)                                            /**<  (TZC_CPU_PID2) Peripheral Identification 2 Register [CPU]  Reset Value */

#define TZC_CPU_PID2_JEP106_ID_6_4_Pos        _U_(0)                                               /**< (TZC_CPU_PID2) JEP106 ARM's identification code bits 6 down to 4 Position */
#define TZC_CPU_PID2_JEP106_ID_6_4_Msk        (_U_(0x7) << TZC_CPU_PID2_JEP106_ID_6_4_Pos)         /**< (TZC_CPU_PID2) JEP106 ARM's identification code bits 6 down to 4 Mask */
#define TZC_CPU_PID2_JEP106_ID_6_4(value)     (TZC_CPU_PID2_JEP106_ID_6_4_Msk & ((value) << TZC_CPU_PID2_JEP106_ID_6_4_Pos))
#define TZC_CPU_PID2_JEDEC_USED_Pos           _U_(3)                                               /**< (TZC_CPU_PID2) Indicates the use of JEP106 manufacturer's identity code Position */
#define TZC_CPU_PID2_JEDEC_USED_Msk           (_U_(0x1) << TZC_CPU_PID2_JEDEC_USED_Pos)            /**< (TZC_CPU_PID2) Indicates the use of JEP106 manufacturer's identity code Mask */
#define TZC_CPU_PID2_JEDEC_USED(value)        (TZC_CPU_PID2_JEDEC_USED_Msk & ((value) << TZC_CPU_PID2_JEDEC_USED_Pos))
#define TZC_CPU_PID2_REVISION_Pos             _U_(4)                                               /**< (TZC_CPU_PID2) Revision Position */
#define TZC_CPU_PID2_REVISION_Msk             (_U_(0xF) << TZC_CPU_PID2_REVISION_Pos)              /**< (TZC_CPU_PID2) Revision Mask */
#define TZC_CPU_PID2_REVISION(value)          (TZC_CPU_PID2_REVISION_Msk & ((value) << TZC_CPU_PID2_REVISION_Pos))
#define TZC_CPU_PID2_Msk                      _U_(0x000000FF)                                      /**< (TZC_CPU_PID2) Register Mask  */


/* -------- TZC_CPU_PID3 : (TZC Offset: 0x1FEC) ( R/ 32) Peripheral Identification 3 Register [CPU] -------- */
#define TZC_CPU_PID3_RESETVALUE               _U_(0x00)                                            /**<  (TZC_CPU_PID3) Peripheral Identification 3 Register [CPU]  Reset Value */

#define TZC_CPU_PID3_MOD_NUMBER_Pos           _U_(0)                                               /**< (TZC_CPU_PID3) Modification Number Position */
#define TZC_CPU_PID3_MOD_NUMBER_Msk           (_U_(0xF) << TZC_CPU_PID3_MOD_NUMBER_Pos)            /**< (TZC_CPU_PID3) Modification Number Mask */
#define TZC_CPU_PID3_MOD_NUMBER(value)        (TZC_CPU_PID3_MOD_NUMBER_Msk & ((value) << TZC_CPU_PID3_MOD_NUMBER_Pos))
#define TZC_CPU_PID3_REVAND_Pos               _U_(4)                                               /**< (TZC_CPU_PID3) User Modifiable Revision Number Position */
#define TZC_CPU_PID3_REVAND_Msk               (_U_(0xF) << TZC_CPU_PID3_REVAND_Pos)                /**< (TZC_CPU_PID3) User Modifiable Revision Number Mask */
#define TZC_CPU_PID3_REVAND(value)            (TZC_CPU_PID3_REVAND_Msk & ((value) << TZC_CPU_PID3_REVAND_Pos))
#define TZC_CPU_PID3_Msk                      _U_(0x000000FF)                                      /**< (TZC_CPU_PID3) Register Mask  */


/* -------- TZC_CPU_CID0 : (TZC Offset: 0x1FF0) ( R/ 32) Component Identification 0 [CPU] -------- */
#define TZC_CPU_CID0_RESETVALUE               _U_(0x0D)                                            /**<  (TZC_CPU_CID0) Component Identification 0 [CPU]  Reset Value */

#define TZC_CPU_CID0_COMP_ID_0_Pos            _U_(0)                                               /**< (TZC_CPU_CID0) Conponent identity 0 Position */
#define TZC_CPU_CID0_COMP_ID_0_Msk            (_U_(0xFF) << TZC_CPU_CID0_COMP_ID_0_Pos)            /**< (TZC_CPU_CID0) Conponent identity 0 Mask */
#define TZC_CPU_CID0_COMP_ID_0(value)         (TZC_CPU_CID0_COMP_ID_0_Msk & ((value) << TZC_CPU_CID0_COMP_ID_0_Pos))
#define TZC_CPU_CID0_Msk                      _U_(0x000000FF)                                      /**< (TZC_CPU_CID0) Register Mask  */


/* -------- TZC_CPU_CID1 : (TZC Offset: 0x1FF4) ( R/ 32) Component Identification 1 [CPU] -------- */
#define TZC_CPU_CID1_RESETVALUE               _U_(0xF0)                                            /**<  (TZC_CPU_CID1) Component Identification 1 [CPU]  Reset Value */

#define TZC_CPU_CID1_COMP_ID_1_Pos            _U_(0)                                               /**< (TZC_CPU_CID1) Conponent identity 1 Position */
#define TZC_CPU_CID1_COMP_ID_1_Msk            (_U_(0xFF) << TZC_CPU_CID1_COMP_ID_1_Pos)            /**< (TZC_CPU_CID1) Conponent identity 1 Mask */
#define TZC_CPU_CID1_COMP_ID_1(value)         (TZC_CPU_CID1_COMP_ID_1_Msk & ((value) << TZC_CPU_CID1_COMP_ID_1_Pos))
#define TZC_CPU_CID1_Msk                      _U_(0x000000FF)                                      /**< (TZC_CPU_CID1) Register Mask  */


/* -------- TZC_CPU_CID2 : (TZC Offset: 0x1FF8) ( R/ 32) Component Identification 2 [CPU] -------- */
#define TZC_CPU_CID2_RESETVALUE               _U_(0x05)                                            /**<  (TZC_CPU_CID2) Component Identification 2 [CPU]  Reset Value */

#define TZC_CPU_CID2_COMP_ID_2_Pos            _U_(0)                                               /**< (TZC_CPU_CID2) Conponent identity 2 Position */
#define TZC_CPU_CID2_COMP_ID_2_Msk            (_U_(0xFF) << TZC_CPU_CID2_COMP_ID_2_Pos)            /**< (TZC_CPU_CID2) Conponent identity 2 Mask */
#define TZC_CPU_CID2_COMP_ID_2(value)         (TZC_CPU_CID2_COMP_ID_2_Msk & ((value) << TZC_CPU_CID2_COMP_ID_2_Pos))
#define TZC_CPU_CID2_Msk                      _U_(0x000000FF)                                      /**< (TZC_CPU_CID2) Register Mask  */


/* -------- TZC_CPU_CID3 : (TZC Offset: 0x1FFC) ( R/ 32) Component Identification 3 [CPU] -------- */
#define TZC_CPU_CID3_RESETVALUE               _U_(0xB1)                                            /**<  (TZC_CPU_CID3) Component Identification 3 [CPU]  Reset Value */

#define TZC_CPU_CID3_COMP_ID_3_Pos            _U_(0)                                               /**< (TZC_CPU_CID3) Conponent identity 3 Position */
#define TZC_CPU_CID3_COMP_ID_3_Msk            (_U_(0xFF) << TZC_CPU_CID3_COMP_ID_3_Pos)            /**< (TZC_CPU_CID3) Conponent identity 3 Mask */
#define TZC_CPU_CID3_COMP_ID_3(value)         (TZC_CPU_CID3_COMP_ID_3_Msk & ((value) << TZC_CPU_CID3_COMP_ID_3_Pos))
#define TZC_CPU_CID3_Msk                      _U_(0x000000FF)                                      /**< (TZC_CPU_CID3) Register Mask  */


/** \brief TZC register offsets definitions */
#define TZC_FAIL_ADDRESS_LOW__REG_OFST (0x00)              /**< (TZC_FAIL_ADDRESS_LOW_) Fail Address Low Register Offset */
#define TZC_FAIL_ADDRESS_HIGH__REG_OFST (0x04)              /**< (TZC_FAIL_ADDRESS_HIGH_) Fail Address High Register Offset */
#define TZC_FAIL_CONTROL__REG_OFST     (0x08)              /**< (TZC_FAIL_CONTROL_) Fail Control Register Offset */
#define TZC_FAIL_ID__REG_OFST          (0x0C)              /**< (TZC_FAIL_ID_) Fail ID Register Offset */
#define TZC_BUILD_CONFIG_REG_OFST      (0x00)              /**< (TZC_BUILD_CONFIG) Build Configuration Register Offset */
#define TZC_ACTION_REG_OFST            (0x04)              /**< (TZC_ACTION) Action Register Offset */
#define TZC_GATE_KEEPER_REG_OFST       (0x08)              /**< (TZC_GATE_KEEPER) Gate Keeper Register Offset */
#define TZC_SPECULATION_CTRL_REG_OFST  (0x0C)              /**< (TZC_SPECULATION_CTRL) Speculation Control Register Offset */
#define TZC_INT_STATUS_REG_OFST        (0x10)              /**< (TZC_INT_STATUS) Interrupt Status Register Offset */
#define TZC_INT_CLEAR_REG_OFST         (0x14)              /**< (TZC_INT_CLEAR) Interrupt Clear Register Offset */
#define TZC_REGION_BASE_LOW_0_REG_OFST (0x100)             /**< (TZC_REGION_BASE_LOW_0) Region 0 Base Address Low Register Offset */
#define TZC_REGION_BASE_HIGH_0_REG_OFST (0x104)             /**< (TZC_REGION_BASE_HIGH_0) Region 0 Base Address High Register Offset */
#define TZC_REGION_TOP_LOW_0_REG_OFST  (0x108)             /**< (TZC_REGION_TOP_LOW_0) Region 0 Top Address Low Register Offset */
#define TZC_REGION_TOP_HIGH_0_REG_OFST (0x10C)             /**< (TZC_REGION_TOP_HIGH_0) Region 0 Top Address High Register Offset */
#define TZC_REGION_ATTRIBUTES_0_REG_OFST (0x110)             /**< (TZC_REGION_ATTRIBUTES_0) Region 0 Attribute Register Offset */
#define TZC_REGION_ID_ACCESS_0_REG_OFST (0x114)             /**< (TZC_REGION_ID_ACCESS_0) Region 0 ID Access Register Offset */
#define TZC_REGION_BASE_LOW_1_REG_OFST (0x120)             /**< (TZC_REGION_BASE_LOW_1) Region 1 Base Address Low Register Offset */
#define TZC_REGION_BASE_HIGH_1_REG_OFST (0x124)             /**< (TZC_REGION_BASE_HIGH_1) Region 1 Base Address High Register Offset */
#define TZC_REGION_TOP_LOW_1_REG_OFST  (0x128)             /**< (TZC_REGION_TOP_LOW_1) Region 1 Top Address Low Register Offset */
#define TZC_REGION_TOP_HIGH_1_REG_OFST (0x12C)             /**< (TZC_REGION_TOP_HIGH_1) Region 1 Top Address High Register Offset */
#define TZC_REGION_ATTRIBUTES_1_REG_OFST (0x130)             /**< (TZC_REGION_ATTRIBUTES_1) Region 1 Attribute Register Offset */
#define TZC_REGION_ID_ACCESS_1_REG_OFST (0x134)             /**< (TZC_REGION_ID_ACCESS_1) Region 1 ID Access Register Offset */
#define TZC_REGION_BASE_LOW_2_REG_OFST (0x140)             /**< (TZC_REGION_BASE_LOW_2) Region 2 Base Address Low Register Offset */
#define TZC_REGION_BASE_HIGH_2_REG_OFST (0x144)             /**< (TZC_REGION_BASE_HIGH_2) Region 2 Base Address High Register Offset */
#define TZC_REGION_TOP_LOW_2_REG_OFST  (0x148)             /**< (TZC_REGION_TOP_LOW_2) Region 2 Top Address Low Register Offset */
#define TZC_REGION_TOP_HIGH_2_REG_OFST (0x14C)             /**< (TZC_REGION_TOP_HIGH_2) Region 2 Top Address High Register Offset */
#define TZC_REGION_ATTRIBUTES_2_REG_OFST (0x150)             /**< (TZC_REGION_ATTRIBUTES_2) Region 2 Attribute Register Offset */
#define TZC_REGION_ID_ACCESS_2_REG_OFST (0x154)             /**< (TZC_REGION_ID_ACCESS_2) Region 2 ID Access Register Offset */
#define TZC_REGION_BASE_LOW_3_REG_OFST (0x160)             /**< (TZC_REGION_BASE_LOW_3) Region 3 Base Address Low Register Offset */
#define TZC_REGION_BASE_HIGH_3_REG_OFST (0x164)             /**< (TZC_REGION_BASE_HIGH_3) Region 3 Base Address High Register Offset */
#define TZC_REGION_TOP_LOW_3_REG_OFST  (0x168)             /**< (TZC_REGION_TOP_LOW_3) Region 3 Top Address Low Register Offset */
#define TZC_REGION_TOP_HIGH_3_REG_OFST (0x16C)             /**< (TZC_REGION_TOP_HIGH_3) Region 3 Top Address High Register Offset */
#define TZC_REGION_ATTRIBUTES_3_REG_OFST (0x170)             /**< (TZC_REGION_ATTRIBUTES_3) Region 3 Attribute Register Offset */
#define TZC_REGION_ID_ACCESS_3_REG_OFST (0x174)             /**< (TZC_REGION_ID_ACCESS_3) Region 3 ID Access Register Offset */
#define TZC_REGION_BASE_LOW_4_REG_OFST (0x180)             /**< (TZC_REGION_BASE_LOW_4) Region 4 Base Address Low Register Offset */
#define TZC_REGION_BASE_HIGH_4_REG_OFST (0x184)             /**< (TZC_REGION_BASE_HIGH_4) Region 4 Base Address High Register Offset */
#define TZC_REGION_TOP_LOW_4_REG_OFST  (0x188)             /**< (TZC_REGION_TOP_LOW_4) Region 4 Top Address Low Register Offset */
#define TZC_REGION_TOP_HIGH_4_REG_OFST (0x18C)             /**< (TZC_REGION_TOP_HIGH_4) Region 4 Top Address High Register Offset */
#define TZC_REGION_ATTRIBUTES_4_REG_OFST (0x190)             /**< (TZC_REGION_ATTRIBUTES_4) Region 4 Attribute Register Offset */
#define TZC_REGION_ID_ACCESS_4_REG_OFST (0x194)             /**< (TZC_REGION_ID_ACCESS_4) Region 4 ID Access Register Offset */
#define TZC_REGION_BASE_LOW_5_REG_OFST (0x1A0)             /**< (TZC_REGION_BASE_LOW_5) Region 5 Base Address Low Register Offset */
#define TZC_REGION_BASE_HIGH_5_REG_OFST (0x1A4)             /**< (TZC_REGION_BASE_HIGH_5) Region 5 Base Address High Register Offset */
#define TZC_REGION_TOP_LOW_5_REG_OFST  (0x1A8)             /**< (TZC_REGION_TOP_LOW_5) Region 5 Top Address Low Register Offset */
#define TZC_REGION_TOP_HIGH_5_REG_OFST (0x1AC)             /**< (TZC_REGION_TOP_HIGH_5) Region 5 Top Address High Register Offset */
#define TZC_REGION_ATTRIBUTES_5_REG_OFST (0x1B0)             /**< (TZC_REGION_ATTRIBUTES_5) Region 5 Attribute Register Offset */
#define TZC_REGION_ID_ACCESS_5_REG_OFST (0x1B4)             /**< (TZC_REGION_ID_ACCESS_5) Region 5 ID Access Register Offset */
#define TZC_REGION_BASE_LOW_6_REG_OFST (0x1C0)             /**< (TZC_REGION_BASE_LOW_6) Region 6 Base Address Low Register Offset */
#define TZC_REGION_BASE_HIGH_6_REG_OFST (0x1C4)             /**< (TZC_REGION_BASE_HIGH_6) Region 6 Base Address High Register Offset */
#define TZC_REGION_TOP_LOW_6_REG_OFST  (0x1C8)             /**< (TZC_REGION_TOP_LOW_6) Region 6 Top Address Low Register Offset */
#define TZC_REGION_TOP_HIGH_6_REG_OFST (0x1CC)             /**< (TZC_REGION_TOP_HIGH_6) Region 6 Top Address High Register Offset */
#define TZC_REGION_ATTRIBUTES_6_REG_OFST (0x1D0)             /**< (TZC_REGION_ATTRIBUTES_6) Region 6 Attribute Register Offset */
#define TZC_REGION_ID_ACCESS_6_REG_OFST (0x1D4)             /**< (TZC_REGION_ID_ACCESS_6) Region 6 ID Access Register Offset */
#define TZC_REGION_BASE_LOW_7_REG_OFST (0x1E0)             /**< (TZC_REGION_BASE_LOW_7) Region 7 Base Address Low Register Offset */
#define TZC_REGION_BASE_HIGH_7_REG_OFST (0x1E4)             /**< (TZC_REGION_BASE_HIGH_7) Region 7 Base Address High Register Offset */
#define TZC_REGION_TOP_LOW_7_REG_OFST  (0x1E8)             /**< (TZC_REGION_TOP_LOW_7) Region 7 Top Address Low Register Offset */
#define TZC_REGION_TOP_HIGH_7_REG_OFST (0x1EC)             /**< (TZC_REGION_TOP_HIGH_7) Region 7 Top Address High Register Offset */
#define TZC_REGION_ATTRIBUTES_7_REG_OFST (0x1F0)             /**< (TZC_REGION_ATTRIBUTES_7) Region 7 Attribute Register Offset */
#define TZC_REGION_ID_ACCESS_7_REG_OFST (0x1F4)             /**< (TZC_REGION_ID_ACCESS_7) Region 7 ID Access Register Offset */
#define TZC_REGION_BASE_LOW_8_REG_OFST (0x200)             /**< (TZC_REGION_BASE_LOW_8) Region 8 Base Address Low Register Offset */
#define TZC_REGION_BASE_HIGH_8_REG_OFST (0x204)             /**< (TZC_REGION_BASE_HIGH_8) Region 8 Base Address High Register Offset */
#define TZC_REGION_TOP_LOW_8_REG_OFST  (0x208)             /**< (TZC_REGION_TOP_LOW_8) Region 8 Top Address Low Register Offset */
#define TZC_REGION_TOP_HIGH_8_REG_OFST (0x20C)             /**< (TZC_REGION_TOP_HIGH_8) Region 8 Top Address High Register Offset */
#define TZC_REGION_ATTRIBUTES_8_REG_OFST (0x210)             /**< (TZC_REGION_ATTRIBUTES_8) Region 8 Attribute Register Offset */
#define TZC_REGION_ID_ACCESS_8_REG_OFST (0x214)             /**< (TZC_REGION_ID_ACCESS_8) Region 8 ID Access Register Offset */
#define TZC_PID4_REG_OFST              (0xFD0)             /**< (TZC_PID4) Peripheral Identification 4 Register Offset */
#define TZC_PID5_REG_OFST              (0xFD4)             /**< (TZC_PID5) Peripheral Identification 5 Register Offset */
#define TZC_PID6_REG_OFST              (0xFD8)             /**< (TZC_PID6) Peripheral Identification 6 Register Offset */
#define TZC_PID7_REG_OFST              (0xFDC)             /**< (TZC_PID7) Peripheral Identification 7 Register Offset */
#define TZC_PID0_REG_OFST              (0xFE0)             /**< (TZC_PID0) Peripheral Identification 0 Register Offset */
#define TZC_PID1_REG_OFST              (0xFE4)             /**< (TZC_PID1) Peripheral Identification 1 Register Offset */
#define TZC_PID2_REG_OFST              (0xFE8)             /**< (TZC_PID2) Peripheral Identification 2 Register Offset */
#define TZC_PID3_REG_OFST              (0xFEC)             /**< (TZC_PID3) Peripheral Identification 3 Register Offset */
#define TZC_CID0_REG_OFST              (0xFF0)             /**< (TZC_CID0) Component Identification 0 Offset */
#define TZC_CID1_REG_OFST              (0xFF4)             /**< (TZC_CID1) Component Identification 1 Offset */
#define TZC_CID2_REG_OFST              (0xFF8)             /**< (TZC_CID2) Component Identification 2 Offset */
#define TZC_CID3_REG_OFST              (0xFFC)             /**< (TZC_CID3) Component Identification 3 Offset */
#define TZC_CPU_BUILD_CONFIG_REG_OFST  (0x1000)            /**< (TZC_CPU_BUILD_CONFIG) Build Configuration Register [CPU] Offset */
#define TZC_CPU_ACTION_REG_OFST        (0x1004)            /**< (TZC_CPU_ACTION) Action Register [CPU] Offset */
#define TZC_CPU_GATE_KEEPER_REG_OFST   (0x1008)            /**< (TZC_CPU_GATE_KEEPER) Gate Keeper Register [CPU] Offset */
#define TZC_CPU_SPECULATION_CTRL_REG_OFST (0x100C)            /**< (TZC_CPU_SPECULATION_CTRL) Speculation Control Register [CPU] Offset */
#define TZC_CPU_INT_STATUS_REG_OFST    (0x1010)            /**< (TZC_CPU_INT_STATUS) Interrupt Status Register [CPU] Offset */
#define TZC_CPU_INT_CLEAR_REG_OFST     (0x1014)            /**< (TZC_CPU_INT_CLEAR) Interrupt Clear Register [CPU] Offset */
#define TZC_CPU_FAIL_ADDRESS_LOW_0_REG_OFST (0x1020)            /**< (TZC_CPU_FAIL_ADDRESS_LOW_0) Fail Address Low Register [CPU] Offset */
#define TZC_CPU_FAIL_ADDRESS_HIGH_0_REG_OFST (0x1024)            /**< (TZC_CPU_FAIL_ADDRESS_HIGH_0) Fail Address High Register [CPU] Offset */
#define TZC_CPU_FAIL_CONTROL_0_REG_OFST (0x1028)            /**< (TZC_CPU_FAIL_CONTROL_0) Fail Control Register [CPU] Offset */
#define TZC_CPU_FAIL_ID_0_REG_OFST     (0x102C)            /**< (TZC_CPU_FAIL_ID_0) Fail ID Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_LOW_0_REG_OFST (0x1100)            /**< (TZC_CPU_REGION_BASE_LOW_0) Region 0 Base Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_HIGH_0_REG_OFST (0x1104)            /**< (TZC_CPU_REGION_BASE_HIGH_0) Region 0 Base Address High Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_LOW_0_REG_OFST (0x1108)            /**< (TZC_CPU_REGION_TOP_LOW_0) Region 0 Top Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_HIGH_0_REG_OFST (0x110C)            /**< (TZC_CPU_REGION_TOP_HIGH_0) Region 0 Top Address High Register [CPU] Offset */
#define TZC_CPU_REGION_ATTRIBUTES_0_REG_OFST (0x1110)            /**< (TZC_CPU_REGION_ATTRIBUTES_0) Region 0 Attribute Register  [CPU] Offset */
#define TZC_CPU_REGION_ID_ACCESS_0_REG_OFST (0x1114)            /**< (TZC_CPU_REGION_ID_ACCESS_0) Region 0 ID Access Register  [CPU] Offset */
#define TZC_CPU_REGION_BASE_LOW_1_REG_OFST (0x1120)            /**< (TZC_CPU_REGION_BASE_LOW_1) Region 1 Base Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_HIGH_1_REG_OFST (0x1124)            /**< (TZC_CPU_REGION_BASE_HIGH_1) Region 1 Base Address High Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_LOW_1_REG_OFST (0x1128)            /**< (TZC_CPU_REGION_TOP_LOW_1) Region 1 Top Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_HIGH_1_REG_OFST (0x112C)            /**< (TZC_CPU_REGION_TOP_HIGH_1) Region 1 Top Address High Register [CPU] Offset */
#define TZC_CPU_REGION_ATTRIBUTES_1_REG_OFST (0x1130)            /**< (TZC_CPU_REGION_ATTRIBUTES_1) Region 1 Attribute Register [CPU] Offset */
#define TZC_CPU_REGION_ID_ACCESS_1_REG_OFST (0x1134)            /**< (TZC_CPU_REGION_ID_ACCESS_1) Region 1 ID Access Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_LOW_2_REG_OFST (0x1140)            /**< (TZC_CPU_REGION_BASE_LOW_2) Region 2 Base Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_HIGH_2_REG_OFST (0x1144)            /**< (TZC_CPU_REGION_BASE_HIGH_2) Region 2 Base Address High Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_LOW_2_REG_OFST (0x1148)            /**< (TZC_CPU_REGION_TOP_LOW_2) Region 2 Top Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_HIGH_2_REG_OFST (0x114C)            /**< (TZC_CPU_REGION_TOP_HIGH_2) Region 2 Top Address High Register [CPU] Offset */
#define TZC_CPU_REGION_ATTRIBUTES_2_REG_OFST (0x1150)            /**< (TZC_CPU_REGION_ATTRIBUTES_2) Region 2 Attribute Register [CPU] Offset */
#define TZC_CPU_REGION_ID_ACCESS_2_REG_OFST (0x1154)            /**< (TZC_CPU_REGION_ID_ACCESS_2) Region 2 ID Access Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_LOW_3_REG_OFST (0x1160)            /**< (TZC_CPU_REGION_BASE_LOW_3) Region 3 Base Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_HIGH_3_REG_OFST (0x1164)            /**< (TZC_CPU_REGION_BASE_HIGH_3) Region 3 Base Address High Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_LOW_3_REG_OFST (0x1168)            /**< (TZC_CPU_REGION_TOP_LOW_3) Region 3 Top Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_HIGH_3_REG_OFST (0x116C)            /**< (TZC_CPU_REGION_TOP_HIGH_3) Region 3 Top Address High Register [CPU] Offset */
#define TZC_CPU_REGION_ATTRIBUTES_3_REG_OFST (0x1170)            /**< (TZC_CPU_REGION_ATTRIBUTES_3) Region 3 Attribute Register [CPU] Offset */
#define TZC_CPU_REGION_ID_ACCESS_3_REG_OFST (0x1174)            /**< (TZC_CPU_REGION_ID_ACCESS_3) Region 3 ID Access Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_LOW_4_REG_OFST (0x1180)            /**< (TZC_CPU_REGION_BASE_LOW_4) Region 4 Base Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_HIGH_4_REG_OFST (0x1184)            /**< (TZC_CPU_REGION_BASE_HIGH_4) Region 4 Base Address High Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_LOW_4_REG_OFST (0x1188)            /**< (TZC_CPU_REGION_TOP_LOW_4) Region 4 Top Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_HIGH_4_REG_OFST (0x118C)            /**< (TZC_CPU_REGION_TOP_HIGH_4) Region 4 Top Address High Register [CPU] Offset */
#define TZC_CPU_REGION_ATTRIBUTES_4_REG_OFST (0x1190)            /**< (TZC_CPU_REGION_ATTRIBUTES_4) Region 4 Attribute Register [CPU] Offset */
#define TZC_CPU_REGION_ID_ACCESS_4_REG_OFST (0x1194)            /**< (TZC_CPU_REGION_ID_ACCESS_4) Region 4 ID Access Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_LOW_5_REG_OFST (0x11A0)            /**< (TZC_CPU_REGION_BASE_LOW_5) Region 5 Base Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_HIGH_5_REG_OFST (0x11A4)            /**< (TZC_CPU_REGION_BASE_HIGH_5) Region 5 Base Address High Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_LOW_5_REG_OFST (0x11A8)            /**< (TZC_CPU_REGION_TOP_LOW_5) Region 5 Top Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_HIGH_5_REG_OFST (0x11AC)            /**< (TZC_CPU_REGION_TOP_HIGH_5) Region 5 Top Address High Register [CPU] Offset */
#define TZC_CPU_REGION_ATTRIBUTES_5_REG_OFST (0x11B0)            /**< (TZC_CPU_REGION_ATTRIBUTES_5) Region 5 Attribute Register [CPU] Offset */
#define TZC_CPU_REGION_ID_ACCESS_5_REG_OFST (0x11B4)            /**< (TZC_CPU_REGION_ID_ACCESS_5) Region 5 ID Access Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_LOW_6_REG_OFST (0x11C0)            /**< (TZC_CPU_REGION_BASE_LOW_6) Region 6 Base Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_HIGH_6_REG_OFST (0x11C4)            /**< (TZC_CPU_REGION_BASE_HIGH_6) Region 6 Base Address High Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_LOW_6_REG_OFST (0x11C8)            /**< (TZC_CPU_REGION_TOP_LOW_6) Region 6 Top Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_HIGH_6_REG_OFST (0x11CC)            /**< (TZC_CPU_REGION_TOP_HIGH_6) Region 6 Top Address High Register [CPU] Offset */
#define TZC_CPU_REGION_ATTRIBUTES_6_REG_OFST (0x11D0)            /**< (TZC_CPU_REGION_ATTRIBUTES_6) Region 6 Attribute Register [CPU] Offset */
#define TZC_CPU_REGION_ID_ACCESS_6_REG_OFST (0x11D4)            /**< (TZC_CPU_REGION_ID_ACCESS_6) Region 6 ID Access Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_LOW_7_REG_OFST (0x11E0)            /**< (TZC_CPU_REGION_BASE_LOW_7) Region 7 Base Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_HIGH_7_REG_OFST (0x11E4)            /**< (TZC_CPU_REGION_BASE_HIGH_7) Region 7 Base Address High Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_LOW_7_REG_OFST (0x11E8)            /**< (TZC_CPU_REGION_TOP_LOW_7) Region 7 Top Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_HIGH_7_REG_OFST (0x11EC)            /**< (TZC_CPU_REGION_TOP_HIGH_7) Region 7 Top Address High Register [CPU] Offset */
#define TZC_CPU_REGION_ATTRIBUTES_7_REG_OFST (0x11F0)            /**< (TZC_CPU_REGION_ATTRIBUTES_7) Region 7 Attribute Register [CPU] Offset */
#define TZC_CPU_REGION_ID_ACCESS_7_REG_OFST (0x11F4)            /**< (TZC_CPU_REGION_ID_ACCESS_7) Region 7 ID Access Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_LOW_8_REG_OFST (0x1200)            /**< (TZC_CPU_REGION_BASE_LOW_8) Region 8 Base Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_BASE_HIGH_8_REG_OFST (0x1204)            /**< (TZC_CPU_REGION_BASE_HIGH_8) Region 8 Base Address High Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_LOW_8_REG_OFST (0x1208)            /**< (TZC_CPU_REGION_TOP_LOW_8) Region 8 Top Address Low Register [CPU] Offset */
#define TZC_CPU_REGION_TOP_HIGH_8_REG_OFST (0x120C)            /**< (TZC_CPU_REGION_TOP_HIGH_8) Region 8 Top Address High Register [CPU] Offset */
#define TZC_CPU_REGION_ATTRIBUTES_8_REG_OFST (0x1210)            /**< (TZC_CPU_REGION_ATTRIBUTES_8) Region 8 Attribute Register [CPU] Offset */
#define TZC_CPU_REGION_ID_ACCESS_8_REG_OFST (0x1214)            /**< (TZC_CPU_REGION_ID_ACCESS_8) Region 8 ID Access Register [CPU] Offset */
#define TZC_CPU_PID4_REG_OFST          (0x1FD0)            /**< (TZC_CPU_PID4) Peripheral Identification 4 Register [CPU] Offset */
#define TZC_CPU_PID5_REG_OFST          (0x1FD4)            /**< (TZC_CPU_PID5) Peripheral Identification 5 Register [CPU] Offset */
#define TZC_CPU_PID6_REG_OFST          (0x1FD8)            /**< (TZC_CPU_PID6) Peripheral Identification 6 Register [CPU] Offset */
#define TZC_CPU_PID7_REG_OFST          (0x1FDC)            /**< (TZC_CPU_PID7) Peripheral Identification 7 Register [CPU] Offset */
#define TZC_CPU_PID0_REG_OFST          (0x1FE0)            /**< (TZC_CPU_PID0) Peripheral Identification 0 Register [CPU] Offset */
#define TZC_CPU_PID1_REG_OFST          (0x1FE4)            /**< (TZC_CPU_PID1) Peripheral Identification 1 Register [CPU] Offset */
#define TZC_CPU_PID2_REG_OFST          (0x1FE8)            /**< (TZC_CPU_PID2) Peripheral Identification 2 Register [CPU] Offset */
#define TZC_CPU_PID3_REG_OFST          (0x1FEC)            /**< (TZC_CPU_PID3) Peripheral Identification 3 Register [CPU] Offset */
#define TZC_CPU_CID0_REG_OFST          (0x1FF0)            /**< (TZC_CPU_CID0) Component Identification 0 [CPU] Offset */
#define TZC_CPU_CID1_REG_OFST          (0x1FF4)            /**< (TZC_CPU_CID1) Component Identification 1 [CPU] Offset */
#define TZC_CPU_CID2_REG_OFST          (0x1FF8)            /**< (TZC_CPU_CID2) Component Identification 2 [CPU] Offset */
#define TZC_CPU_CID3_REG_OFST          (0x1FFC)            /**< (TZC_CPU_CID3) Component Identification 3 [CPU] Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief FAIL register API structure */
typedef struct
{
  __I   uint32_t                       TZC_FAIL_ADDRESS_LOW_; /**< Offset: 0x00 (R/   32) Fail Address Low Register */
  __I   uint32_t                       TZC_FAIL_ADDRESS_HIGH_; /**< Offset: 0x04 (R/   32) Fail Address High Register */
  __I   uint32_t                       TZC_FAIL_CONTROL_;  /**< Offset: 0x08 (R/   32) Fail Control Register */
  __I   uint32_t                       TZC_FAIL_ID_;       /**< Offset: 0x0C (R/   32) Fail ID Register */
} tzc_fail_registers_t;

#define TZC_FAIL_NUMBER _U_(4)

/** \brief TZC register API structure */
typedef struct
{  /* TrustZone Address Space Controller */
  __I   uint32_t                       TZC_BUILD_CONFIG;   /**< Offset: 0x00 (R/   32) Build Configuration Register */
  __IO  uint32_t                       TZC_ACTION;         /**< Offset: 0x04 (R/W  32) Action Register */
  __IO  uint32_t                       TZC_GATE_KEEPER;    /**< Offset: 0x08 (R/W  32) Gate Keeper Register */
  __IO  uint32_t                       TZC_SPECULATION_CTRL; /**< Offset: 0x0C (R/W  32) Speculation Control Register */
  __I   uint32_t                       TZC_INT_STATUS;     /**< Offset: 0x10 (R/   32) Interrupt Status Register */
  __O   uint32_t                       TZC_INT_CLEAR;      /**< Offset: 0x14 ( /W  32) Interrupt Clear Register */
  __I   uint8_t                        Reserved1[0x08];
        tzc_fail_registers_t           TZC_FAIL[TZC_FAIL_NUMBER]; /**< Offset: 0x20  */
  __I   uint8_t                        Reserved2[0xA0];
  __I   uint32_t                       TZC_REGION_BASE_LOW_0; /**< Offset: 0x100 (R/   32) Region 0 Base Address Low Register */
  __I   uint32_t                       TZC_REGION_BASE_HIGH_0; /**< Offset: 0x104 (R/   32) Region 0 Base Address High Register */
  __I   uint32_t                       TZC_REGION_TOP_LOW_0; /**< Offset: 0x108 (R/   32) Region 0 Top Address Low Register */
  __I   uint32_t                       TZC_REGION_TOP_HIGH_0; /**< Offset: 0x10C (R/   32) Region 0 Top Address High Register */
  __IO  uint32_t                       TZC_REGION_ATTRIBUTES_0; /**< Offset: 0x110 (R/W  32) Region 0 Attribute Register */
  __IO  uint32_t                       TZC_REGION_ID_ACCESS_0; /**< Offset: 0x114 (R/W  32) Region 0 ID Access Register */
  __I   uint8_t                        Reserved3[0x08];
  __IO  uint32_t                       TZC_REGION_BASE_LOW_1; /**< Offset: 0x120 (R/W  32) Region 1 Base Address Low Register */
  __IO  uint32_t                       TZC_REGION_BASE_HIGH_1; /**< Offset: 0x124 (R/W  32) Region 1 Base Address High Register */
  __IO  uint32_t                       TZC_REGION_TOP_LOW_1; /**< Offset: 0x128 (R/W  32) Region 1 Top Address Low Register */
  __IO  uint32_t                       TZC_REGION_TOP_HIGH_1; /**< Offset: 0x12C (R/W  32) Region 1 Top Address High Register */
  __IO  uint32_t                       TZC_REGION_ATTRIBUTES_1; /**< Offset: 0x130 (R/W  32) Region 1 Attribute Register */
  __IO  uint32_t                       TZC_REGION_ID_ACCESS_1; /**< Offset: 0x134 (R/W  32) Region 1 ID Access Register */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       TZC_REGION_BASE_LOW_2; /**< Offset: 0x140 (R/W  32) Region 2 Base Address Low Register */
  __IO  uint32_t                       TZC_REGION_BASE_HIGH_2; /**< Offset: 0x144 (R/W  32) Region 2 Base Address High Register */
  __IO  uint32_t                       TZC_REGION_TOP_LOW_2; /**< Offset: 0x148 (R/W  32) Region 2 Top Address Low Register */
  __IO  uint32_t                       TZC_REGION_TOP_HIGH_2; /**< Offset: 0x14C (R/W  32) Region 2 Top Address High Register */
  __IO  uint32_t                       TZC_REGION_ATTRIBUTES_2; /**< Offset: 0x150 (R/W  32) Region 2 Attribute Register */
  __IO  uint32_t                       TZC_REGION_ID_ACCESS_2; /**< Offset: 0x154 (R/W  32) Region 2 ID Access Register */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       TZC_REGION_BASE_LOW_3; /**< Offset: 0x160 (R/W  32) Region 3 Base Address Low Register */
  __IO  uint32_t                       TZC_REGION_BASE_HIGH_3; /**< Offset: 0x164 (R/W  32) Region 3 Base Address High Register */
  __IO  uint32_t                       TZC_REGION_TOP_LOW_3; /**< Offset: 0x168 (R/W  32) Region 3 Top Address Low Register */
  __IO  uint32_t                       TZC_REGION_TOP_HIGH_3; /**< Offset: 0x16C (R/W  32) Region 3 Top Address High Register */
  __IO  uint32_t                       TZC_REGION_ATTRIBUTES_3; /**< Offset: 0x170 (R/W  32) Region 3 Attribute Register */
  __IO  uint32_t                       TZC_REGION_ID_ACCESS_3; /**< Offset: 0x174 (R/W  32) Region 3 ID Access Register */
  __I   uint8_t                        Reserved6[0x08];
  __IO  uint32_t                       TZC_REGION_BASE_LOW_4; /**< Offset: 0x180 (R/W  32) Region 4 Base Address Low Register */
  __IO  uint32_t                       TZC_REGION_BASE_HIGH_4; /**< Offset: 0x184 (R/W  32) Region 4 Base Address High Register */
  __IO  uint32_t                       TZC_REGION_TOP_LOW_4; /**< Offset: 0x188 (R/W  32) Region 4 Top Address Low Register */
  __IO  uint32_t                       TZC_REGION_TOP_HIGH_4; /**< Offset: 0x18C (R/W  32) Region 4 Top Address High Register */
  __IO  uint32_t                       TZC_REGION_ATTRIBUTES_4; /**< Offset: 0x190 (R/W  32) Region 4 Attribute Register */
  __IO  uint32_t                       TZC_REGION_ID_ACCESS_4; /**< Offset: 0x194 (R/W  32) Region 4 ID Access Register */
  __I   uint8_t                        Reserved7[0x08];
  __IO  uint32_t                       TZC_REGION_BASE_LOW_5; /**< Offset: 0x1A0 (R/W  32) Region 5 Base Address Low Register */
  __IO  uint32_t                       TZC_REGION_BASE_HIGH_5; /**< Offset: 0x1A4 (R/W  32) Region 5 Base Address High Register */
  __IO  uint32_t                       TZC_REGION_TOP_LOW_5; /**< Offset: 0x1A8 (R/W  32) Region 5 Top Address Low Register */
  __IO  uint32_t                       TZC_REGION_TOP_HIGH_5; /**< Offset: 0x1AC (R/W  32) Region 5 Top Address High Register */
  __IO  uint32_t                       TZC_REGION_ATTRIBUTES_5; /**< Offset: 0x1B0 (R/W  32) Region 5 Attribute Register */
  __IO  uint32_t                       TZC_REGION_ID_ACCESS_5; /**< Offset: 0x1B4 (R/W  32) Region 5 ID Access Register */
  __I   uint8_t                        Reserved8[0x08];
  __IO  uint32_t                       TZC_REGION_BASE_LOW_6; /**< Offset: 0x1C0 (R/W  32) Region 6 Base Address Low Register */
  __IO  uint32_t                       TZC_REGION_BASE_HIGH_6; /**< Offset: 0x1C4 (R/W  32) Region 6 Base Address High Register */
  __IO  uint32_t                       TZC_REGION_TOP_LOW_6; /**< Offset: 0x1C8 (R/W  32) Region 6 Top Address Low Register */
  __IO  uint32_t                       TZC_REGION_TOP_HIGH_6; /**< Offset: 0x1CC (R/W  32) Region 6 Top Address High Register */
  __IO  uint32_t                       TZC_REGION_ATTRIBUTES_6; /**< Offset: 0x1D0 (R/W  32) Region 6 Attribute Register */
  __IO  uint32_t                       TZC_REGION_ID_ACCESS_6; /**< Offset: 0x1D4 (R/W  32) Region 6 ID Access Register */
  __I   uint8_t                        Reserved9[0x08];
  __IO  uint32_t                       TZC_REGION_BASE_LOW_7; /**< Offset: 0x1E0 (R/W  32) Region 7 Base Address Low Register */
  __IO  uint32_t                       TZC_REGION_BASE_HIGH_7; /**< Offset: 0x1E4 (R/W  32) Region 7 Base Address High Register */
  __IO  uint32_t                       TZC_REGION_TOP_LOW_7; /**< Offset: 0x1E8 (R/W  32) Region 7 Top Address Low Register */
  __IO  uint32_t                       TZC_REGION_TOP_HIGH_7; /**< Offset: 0x1EC (R/W  32) Region 7 Top Address High Register */
  __IO  uint32_t                       TZC_REGION_ATTRIBUTES_7; /**< Offset: 0x1F0 (R/W  32) Region 7 Attribute Register */
  __IO  uint32_t                       TZC_REGION_ID_ACCESS_7; /**< Offset: 0x1F4 (R/W  32) Region 7 ID Access Register */
  __I   uint8_t                        Reserved10[0x08];
  __IO  uint32_t                       TZC_REGION_BASE_LOW_8; /**< Offset: 0x200 (R/W  32) Region 8 Base Address Low Register */
  __IO  uint32_t                       TZC_REGION_BASE_HIGH_8; /**< Offset: 0x204 (R/W  32) Region 8 Base Address High Register */
  __IO  uint32_t                       TZC_REGION_TOP_LOW_8; /**< Offset: 0x208 (R/W  32) Region 8 Top Address Low Register */
  __IO  uint32_t                       TZC_REGION_TOP_HIGH_8; /**< Offset: 0x20C (R/W  32) Region 8 Top Address High Register */
  __IO  uint32_t                       TZC_REGION_ATTRIBUTES_8; /**< Offset: 0x210 (R/W  32) Region 8 Attribute Register */
  __IO  uint32_t                       TZC_REGION_ID_ACCESS_8; /**< Offset: 0x214 (R/W  32) Region 8 ID Access Register */
  __I   uint8_t                        Reserved11[0xDB8];
  __I   uint32_t                       TZC_PID4;           /**< Offset: 0xFD0 (R/   32) Peripheral Identification 4 Register */
  __I   uint32_t                       TZC_PID5;           /**< Offset: 0xFD4 (R/   32) Peripheral Identification 5 Register */
  __I   uint32_t                       TZC_PID6;           /**< Offset: 0xFD8 (R/   32) Peripheral Identification 6 Register */
  __I   uint32_t                       TZC_PID7;           /**< Offset: 0xFDC (R/   32) Peripheral Identification 7 Register */
  __I   uint32_t                       TZC_PID0;           /**< Offset: 0xFE0 (R/   32) Peripheral Identification 0 Register */
  __I   uint32_t                       TZC_PID1;           /**< Offset: 0xFE4 (R/   32) Peripheral Identification 1 Register */
  __I   uint32_t                       TZC_PID2;           /**< Offset: 0xFE8 (R/   32) Peripheral Identification 2 Register */
  __I   uint32_t                       TZC_PID3;           /**< Offset: 0xFEC (R/   32) Peripheral Identification 3 Register */
  __I   uint32_t                       TZC_CID0;           /**< Offset: 0xFF0 (R/   32) Component Identification 0 */
  __I   uint32_t                       TZC_CID1;           /**< Offset: 0xFF4 (R/   32) Component Identification 1 */
  __I   uint32_t                       TZC_CID2;           /**< Offset: 0xFF8 (R/   32) Component Identification 2 */
  __I   uint32_t                       TZC_CID3;           /**< Offset: 0xFFC (R/   32) Component Identification 3 */
  __I   uint32_t                       TZC_CPU_BUILD_CONFIG; /**< Offset: 0x1000 (R/   32) Build Configuration Register [CPU] */
  __IO  uint32_t                       TZC_CPU_ACTION;     /**< Offset: 0x1004 (R/W  32) Action Register [CPU] */
  __IO  uint32_t                       TZC_CPU_GATE_KEEPER; /**< Offset: 0x1008 (R/W  32) Gate Keeper Register [CPU] */
  __IO  uint32_t                       TZC_CPU_SPECULATION_CTRL; /**< Offset: 0x100C (R/W  32) Speculation Control Register [CPU] */
  __I   uint32_t                       TZC_CPU_INT_STATUS; /**< Offset: 0x1010 (R/   32) Interrupt Status Register [CPU] */
  __O   uint32_t                       TZC_CPU_INT_CLEAR;  /**< Offset: 0x1014 ( /W  32) Interrupt Clear Register [CPU] */
  __I   uint8_t                        Reserved12[0x08];
  __I   uint32_t                       TZC_CPU_FAIL_ADDRESS_LOW_0; /**< Offset: 0x1020 (R/   32) Fail Address Low Register [CPU] */
  __I   uint32_t                       TZC_CPU_FAIL_ADDRESS_HIGH_0; /**< Offset: 0x1024 (R/   32) Fail Address High Register [CPU] */
  __I   uint32_t                       TZC_CPU_FAIL_CONTROL_0; /**< Offset: 0x1028 (R/   32) Fail Control Register [CPU] */
  __I   uint32_t                       TZC_CPU_FAIL_ID_0;  /**< Offset: 0x102C (R/   32) Fail ID Register [CPU] */
  __I   uint8_t                        Reserved13[0xD0];
  __I   uint32_t                       TZC_CPU_REGION_BASE_LOW_0; /**< Offset: 0x1100 (R/   32) Region 0 Base Address Low Register [CPU] */
  __I   uint32_t                       TZC_CPU_REGION_BASE_HIGH_0; /**< Offset: 0x1104 (R/   32) Region 0 Base Address High Register [CPU] */
  __I   uint32_t                       TZC_CPU_REGION_TOP_LOW_0; /**< Offset: 0x1108 (R/   32) Region 0 Top Address Low Register [CPU] */
  __I   uint32_t                       TZC_CPU_REGION_TOP_HIGH_0; /**< Offset: 0x110C (R/   32) Region 0 Top Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES_0; /**< Offset: 0x1110 (R/W  32) Region 0 Attribute Register  [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS_0; /**< Offset: 0x1114 (R/W  32) Region 0 ID Access Register  [CPU] */
  __I   uint8_t                        Reserved14[0x08];
  __IO  uint32_t                       TZC_CPU_REGION_BASE_LOW_1; /**< Offset: 0x1120 (R/W  32) Region 1 Base Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_BASE_HIGH_1; /**< Offset: 0x1124 (R/W  32) Region 1 Base Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_LOW_1; /**< Offset: 0x1128 (R/W  32) Region 1 Top Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_HIGH_1; /**< Offset: 0x112C (R/W  32) Region 1 Top Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES_1; /**< Offset: 0x1130 (R/W  32) Region 1 Attribute Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS_1; /**< Offset: 0x1134 (R/W  32) Region 1 ID Access Register [CPU] */
  __I   uint8_t                        Reserved15[0x08];
  __IO  uint32_t                       TZC_CPU_REGION_BASE_LOW_2; /**< Offset: 0x1140 (R/W  32) Region 2 Base Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_BASE_HIGH_2; /**< Offset: 0x1144 (R/W  32) Region 2 Base Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_LOW_2; /**< Offset: 0x1148 (R/W  32) Region 2 Top Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_HIGH_2; /**< Offset: 0x114C (R/W  32) Region 2 Top Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES_2; /**< Offset: 0x1150 (R/W  32) Region 2 Attribute Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS_2; /**< Offset: 0x1154 (R/W  32) Region 2 ID Access Register [CPU] */
  __I   uint8_t                        Reserved16[0x08];
  __IO  uint32_t                       TZC_CPU_REGION_BASE_LOW_3; /**< Offset: 0x1160 (R/W  32) Region 3 Base Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_BASE_HIGH_3; /**< Offset: 0x1164 (R/W  32) Region 3 Base Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_LOW_3; /**< Offset: 0x1168 (R/W  32) Region 3 Top Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_HIGH_3; /**< Offset: 0x116C (R/W  32) Region 3 Top Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES_3; /**< Offset: 0x1170 (R/W  32) Region 3 Attribute Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS_3; /**< Offset: 0x1174 (R/W  32) Region 3 ID Access Register [CPU] */
  __I   uint8_t                        Reserved17[0x08];
  __IO  uint32_t                       TZC_CPU_REGION_BASE_LOW_4; /**< Offset: 0x1180 (R/W  32) Region 4 Base Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_BASE_HIGH_4; /**< Offset: 0x1184 (R/W  32) Region 4 Base Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_LOW_4; /**< Offset: 0x1188 (R/W  32) Region 4 Top Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_HIGH_4; /**< Offset: 0x118C (R/W  32) Region 4 Top Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES_4; /**< Offset: 0x1190 (R/W  32) Region 4 Attribute Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS_4; /**< Offset: 0x1194 (R/W  32) Region 4 ID Access Register [CPU] */
  __I   uint8_t                        Reserved18[0x08];
  __IO  uint32_t                       TZC_CPU_REGION_BASE_LOW_5; /**< Offset: 0x11A0 (R/W  32) Region 5 Base Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_BASE_HIGH_5; /**< Offset: 0x11A4 (R/W  32) Region 5 Base Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_LOW_5; /**< Offset: 0x11A8 (R/W  32) Region 5 Top Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_HIGH_5; /**< Offset: 0x11AC (R/W  32) Region 5 Top Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES_5; /**< Offset: 0x11B0 (R/W  32) Region 5 Attribute Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS_5; /**< Offset: 0x11B4 (R/W  32) Region 5 ID Access Register [CPU] */
  __I   uint8_t                        Reserved19[0x08];
  __IO  uint32_t                       TZC_CPU_REGION_BASE_LOW_6; /**< Offset: 0x11C0 (R/W  32) Region 6 Base Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_BASE_HIGH_6; /**< Offset: 0x11C4 (R/W  32) Region 6 Base Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_LOW_6; /**< Offset: 0x11C8 (R/W  32) Region 6 Top Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_HIGH_6; /**< Offset: 0x11CC (R/W  32) Region 6 Top Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES_6; /**< Offset: 0x11D0 (R/W  32) Region 6 Attribute Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS_6; /**< Offset: 0x11D4 (R/W  32) Region 6 ID Access Register [CPU] */
  __I   uint8_t                        Reserved20[0x08];
  __IO  uint32_t                       TZC_CPU_REGION_BASE_LOW_7; /**< Offset: 0x11E0 (R/W  32) Region 7 Base Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_BASE_HIGH_7; /**< Offset: 0x11E4 (R/W  32) Region 7 Base Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_LOW_7; /**< Offset: 0x11E8 (R/W  32) Region 7 Top Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_HIGH_7; /**< Offset: 0x11EC (R/W  32) Region 7 Top Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES_7; /**< Offset: 0x11F0 (R/W  32) Region 7 Attribute Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS_7; /**< Offset: 0x11F4 (R/W  32) Region 7 ID Access Register [CPU] */
  __I   uint8_t                        Reserved21[0x08];
  __IO  uint32_t                       TZC_CPU_REGION_BASE_LOW_8; /**< Offset: 0x1200 (R/W  32) Region 8 Base Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_BASE_HIGH_8; /**< Offset: 0x1204 (R/W  32) Region 8 Base Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_LOW_8; /**< Offset: 0x1208 (R/W  32) Region 8 Top Address Low Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_TOP_HIGH_8; /**< Offset: 0x120C (R/W  32) Region 8 Top Address High Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES_8; /**< Offset: 0x1210 (R/W  32) Region 8 Attribute Register [CPU] */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS_8; /**< Offset: 0x1214 (R/W  32) Region 8 ID Access Register [CPU] */
  __I   uint8_t                        Reserved22[0xDB8];
  __I   uint32_t                       TZC_CPU_PID4;       /**< Offset: 0x1FD0 (R/   32) Peripheral Identification 4 Register [CPU] */
  __I   uint32_t                       TZC_CPU_PID5;       /**< Offset: 0x1FD4 (R/   32) Peripheral Identification 5 Register [CPU] */
  __I   uint32_t                       TZC_CPU_PID6;       /**< Offset: 0x1FD8 (R/   32) Peripheral Identification 6 Register [CPU] */
  __I   uint32_t                       TZC_CPU_PID7;       /**< Offset: 0x1FDC (R/   32) Peripheral Identification 7 Register [CPU] */
  __I   uint32_t                       TZC_CPU_PID0;       /**< Offset: 0x1FE0 (R/   32) Peripheral Identification 0 Register [CPU] */
  __I   uint32_t                       TZC_CPU_PID1;       /**< Offset: 0x1FE4 (R/   32) Peripheral Identification 1 Register [CPU] */
  __I   uint32_t                       TZC_CPU_PID2;       /**< Offset: 0x1FE8 (R/   32) Peripheral Identification 2 Register [CPU] */
  __I   uint32_t                       TZC_CPU_PID3;       /**< Offset: 0x1FEC (R/   32) Peripheral Identification 3 Register [CPU] */
  __I   uint32_t                       TZC_CPU_CID0;       /**< Offset: 0x1FF0 (R/   32) Component Identification 0 [CPU] */
  __I   uint32_t                       TZC_CPU_CID1;       /**< Offset: 0x1FF4 (R/   32) Component Identification 1 [CPU] */
  __I   uint32_t                       TZC_CPU_CID2;       /**< Offset: 0x1FF8 (R/   32) Component Identification 2 [CPU] */
  __I   uint32_t                       TZC_CPU_CID3;       /**< Offset: 0x1FFC (R/   32) Component Identification 3 [CPU] */
} tzc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_TZC_COMPONENT_H_ */
