/*
 * Component description for SFR
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
#ifndef _SAMA7G_SFR_COMPONENT_H_
#define _SAMA7G_SFR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFR                                          */
/* ************************************************************************** */

/* -------- SFR_OHCIICR : (SFR Offset: 0x00) (R/W 32) OHCI Interrupt Configuration Register -------- */
#define SFR_OHCIICR_RESETVALUE                _U_(0x00)                                            /**<  (SFR_OHCIICR) OHCI Interrupt Configuration Register  Reset Value */

#define SFR_OHCIICR_ARIE_Pos                  _U_(0)                                               /**< (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Position */
#define SFR_OHCIICR_ARIE_Msk                  (_U_(0x1) << SFR_OHCIICR_ARIE_Pos)                   /**< (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Mask */
#define SFR_OHCIICR_ARIE(value)               (SFR_OHCIICR_ARIE_Msk & ((value) << SFR_OHCIICR_ARIE_Pos))
#define   SFR_OHCIICR_ARIE_0_Val              _U_(0x0)                                             /**< (SFR_OHCIICR) Interrupt is disabled.  */
#define   SFR_OHCIICR_ARIE_1_Val              _U_(0x1)                                             /**< (SFR_OHCIICR) Interrupt is enabled.  */
#define SFR_OHCIICR_ARIE_0                    (SFR_OHCIICR_ARIE_0_Val << SFR_OHCIICR_ARIE_Pos)     /**< (SFR_OHCIICR) Interrupt is disabled. Position  */
#define SFR_OHCIICR_ARIE_1                    (SFR_OHCIICR_ARIE_1_Val << SFR_OHCIICR_ARIE_Pos)     /**< (SFR_OHCIICR) Interrupt is enabled. Position  */
#define SFR_OHCIICR_APPSTART_Pos              _U_(1)                                               /**< (SFR_OHCIICR) Reserved Position */
#define SFR_OHCIICR_APPSTART_Msk              (_U_(0x1) << SFR_OHCIICR_APPSTART_Pos)               /**< (SFR_OHCIICR) Reserved Mask */
#define SFR_OHCIICR_APPSTART(value)           (SFR_OHCIICR_APPSTART_Msk & ((value) << SFR_OHCIICR_APPSTART_Pos))
#define SFR_OHCIICR_SUSPEND0_Pos              _U_(8)                                               /**< (SFR_OHCIICR) USB PORT 0 Position */
#define SFR_OHCIICR_SUSPEND0_Msk              (_U_(0x1) << SFR_OHCIICR_SUSPEND0_Pos)               /**< (SFR_OHCIICR) USB PORT 0 Mask */
#define SFR_OHCIICR_SUSPEND0(value)           (SFR_OHCIICR_SUSPEND0_Msk & ((value) << SFR_OHCIICR_SUSPEND0_Pos))
#define   SFR_OHCIICR_SUSPEND0_0_Val          _U_(0x0)                                             /**< (SFR_OHCIICR) Suspends controlled by EHCI-OCHI.  */
#define   SFR_OHCIICR_SUSPEND0_1_Val          _U_(0x1)                                             /**< (SFR_OHCIICR) Forces the suspend for PORTx.  */
#define SFR_OHCIICR_SUSPEND0_0                (SFR_OHCIICR_SUSPEND0_0_Val << SFR_OHCIICR_SUSPEND0_Pos) /**< (SFR_OHCIICR) Suspends controlled by EHCI-OCHI. Position  */
#define SFR_OHCIICR_SUSPEND0_1                (SFR_OHCIICR_SUSPEND0_1_Val << SFR_OHCIICR_SUSPEND0_Pos) /**< (SFR_OHCIICR) Forces the suspend for PORTx. Position  */
#define SFR_OHCIICR_SUSPEND1_Pos              _U_(9)                                               /**< (SFR_OHCIICR) USB PORT 1 Position */
#define SFR_OHCIICR_SUSPEND1_Msk              (_U_(0x1) << SFR_OHCIICR_SUSPEND1_Pos)               /**< (SFR_OHCIICR) USB PORT 1 Mask */
#define SFR_OHCIICR_SUSPEND1(value)           (SFR_OHCIICR_SUSPEND1_Msk & ((value) << SFR_OHCIICR_SUSPEND1_Pos))
#define   SFR_OHCIICR_SUSPEND1_0_Val          _U_(0x0)                                             /**< (SFR_OHCIICR) Suspends controlled by EHCI-OCHI.  */
#define   SFR_OHCIICR_SUSPEND1_1_Val          _U_(0x1)                                             /**< (SFR_OHCIICR) Forces the suspend for PORTx.  */
#define SFR_OHCIICR_SUSPEND1_0                (SFR_OHCIICR_SUSPEND1_0_Val << SFR_OHCIICR_SUSPEND1_Pos) /**< (SFR_OHCIICR) Suspends controlled by EHCI-OCHI. Position  */
#define SFR_OHCIICR_SUSPEND1_1                (SFR_OHCIICR_SUSPEND1_1_Val << SFR_OHCIICR_SUSPEND1_Pos) /**< (SFR_OHCIICR) Forces the suspend for PORTx. Position  */
#define SFR_OHCIICR_SUSPEND2_Pos              _U_(10)                                              /**< (SFR_OHCIICR) USB PORT 2 Position */
#define SFR_OHCIICR_SUSPEND2_Msk              (_U_(0x1) << SFR_OHCIICR_SUSPEND2_Pos)               /**< (SFR_OHCIICR) USB PORT 2 Mask */
#define SFR_OHCIICR_SUSPEND2(value)           (SFR_OHCIICR_SUSPEND2_Msk & ((value) << SFR_OHCIICR_SUSPEND2_Pos))
#define   SFR_OHCIICR_SUSPEND2_0_Val          _U_(0x0)                                             /**< (SFR_OHCIICR) Suspends controlled by EHCI-OCHI.  */
#define   SFR_OHCIICR_SUSPEND2_1_Val          _U_(0x1)                                             /**< (SFR_OHCIICR) Forces the suspend for PORTx.  */
#define SFR_OHCIICR_SUSPEND2_0                (SFR_OHCIICR_SUSPEND2_0_Val << SFR_OHCIICR_SUSPEND2_Pos) /**< (SFR_OHCIICR) Suspends controlled by EHCI-OCHI. Position  */
#define SFR_OHCIICR_SUSPEND2_1                (SFR_OHCIICR_SUSPEND2_1_Val << SFR_OHCIICR_SUSPEND2_Pos) /**< (SFR_OHCIICR) Forces the suspend for PORTx. Position  */
#define SFR_OHCIICR_Msk                       _U_(0x00000703)                                      /**< (SFR_OHCIICR) Register Mask  */

#define SFR_OHCIICR_SUSPEND_Pos               _U_(8)                                               /**< (SFR_OHCIICR Position) USB PORT 2 */
#define SFR_OHCIICR_SUSPEND_Msk               (_U_(0x7) << SFR_OHCIICR_SUSPEND_Pos)                /**< (SFR_OHCIICR Mask) SUSPEND */
#define SFR_OHCIICR_SUSPEND(value)            (SFR_OHCIICR_SUSPEND_Msk & ((value) << SFR_OHCIICR_SUSPEND_Pos)) 

/* -------- SFR_OHCIISR : (SFR Offset: 0x04) ( R/ 32) OHCI Interrupt Status Register -------- */
#define SFR_OHCIISR_RESETVALUE                _U_(0x00)                                            /**<  (SFR_OHCIISR) OHCI Interrupt Status Register  Reset Value */

#define SFR_OHCIISR_RIS0_Pos                  _U_(0)                                               /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Position */
#define SFR_OHCIISR_RIS0_Msk                  (_U_(0x1) << SFR_OHCIISR_RIS0_Pos)                   /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Mask */
#define SFR_OHCIISR_RIS0(value)               (SFR_OHCIISR_RIS0_Msk & ((value) << SFR_OHCIISR_RIS0_Pos))
#define   SFR_OHCIISR_RIS0_0_Val              _U_(0x0)                                             /**< (SFR_OHCIISR) OHCI port resume not detected.  */
#define   SFR_OHCIISR_RIS0_1_Val              _U_(0x1)                                             /**< (SFR_OHCIISR) OHCI port resume detected.  */
#define SFR_OHCIISR_RIS0_0                    (SFR_OHCIISR_RIS0_0_Val << SFR_OHCIISR_RIS0_Pos)     /**< (SFR_OHCIISR) OHCI port resume not detected. Position  */
#define SFR_OHCIISR_RIS0_1                    (SFR_OHCIISR_RIS0_1_Val << SFR_OHCIISR_RIS0_Pos)     /**< (SFR_OHCIISR) OHCI port resume detected. Position  */
#define SFR_OHCIISR_RIS1_Pos                  _U_(1)                                               /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Position */
#define SFR_OHCIISR_RIS1_Msk                  (_U_(0x1) << SFR_OHCIISR_RIS1_Pos)                   /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Mask */
#define SFR_OHCIISR_RIS1(value)               (SFR_OHCIISR_RIS1_Msk & ((value) << SFR_OHCIISR_RIS1_Pos))
#define   SFR_OHCIISR_RIS1_0_Val              _U_(0x0)                                             /**< (SFR_OHCIISR) OHCI port resume not detected.  */
#define   SFR_OHCIISR_RIS1_1_Val              _U_(0x1)                                             /**< (SFR_OHCIISR) OHCI port resume detected.  */
#define SFR_OHCIISR_RIS1_0                    (SFR_OHCIISR_RIS1_0_Val << SFR_OHCIISR_RIS1_Pos)     /**< (SFR_OHCIISR) OHCI port resume not detected. Position  */
#define SFR_OHCIISR_RIS1_1                    (SFR_OHCIISR_RIS1_1_Val << SFR_OHCIISR_RIS1_Pos)     /**< (SFR_OHCIISR) OHCI port resume detected. Position  */
#define SFR_OHCIISR_RIS2_Pos                  _U_(2)                                               /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Position */
#define SFR_OHCIISR_RIS2_Msk                  (_U_(0x1) << SFR_OHCIISR_RIS2_Pos)                   /**< (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Mask */
#define SFR_OHCIISR_RIS2(value)               (SFR_OHCIISR_RIS2_Msk & ((value) << SFR_OHCIISR_RIS2_Pos))
#define   SFR_OHCIISR_RIS2_0_Val              _U_(0x0)                                             /**< (SFR_OHCIISR) OHCI port resume not detected.  */
#define   SFR_OHCIISR_RIS2_1_Val              _U_(0x1)                                             /**< (SFR_OHCIISR) OHCI port resume detected.  */
#define SFR_OHCIISR_RIS2_0                    (SFR_OHCIISR_RIS2_0_Val << SFR_OHCIISR_RIS2_Pos)     /**< (SFR_OHCIISR) OHCI port resume not detected. Position  */
#define SFR_OHCIISR_RIS2_1                    (SFR_OHCIISR_RIS2_1_Val << SFR_OHCIISR_RIS2_Pos)     /**< (SFR_OHCIISR) OHCI port resume detected. Position  */
#define SFR_OHCIISR_Msk                       _U_(0x00000007)                                      /**< (SFR_OHCIISR) Register Mask  */

#define SFR_OHCIISR_RIS_Pos                   _U_(0)                                               /**< (SFR_OHCIISR Position) OHCI Resume Interrupt Status Port 2 */
#define SFR_OHCIISR_RIS_Msk                   (_U_(0x7) << SFR_OHCIISR_RIS_Pos)                    /**< (SFR_OHCIISR Mask) RIS */
#define SFR_OHCIISR_RIS(value)                (SFR_OHCIISR_RIS_Msk & ((value) << SFR_OHCIISR_RIS_Pos)) 

/* -------- SFR_WPMR : (SFR Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SFR_WPMR_RESETVALUE                   _U_(0x00)                                            /**<  (SFR_WPMR) Write Protection Mode Register  Reset Value */

#define SFR_WPMR_WPEN_Pos                     _U_(0)                                               /**< (SFR_WPMR) Write Protection Enable Position */
#define SFR_WPMR_WPEN_Msk                     (_U_(0x1) << SFR_WPMR_WPEN_Pos)                      /**< (SFR_WPMR) Write Protection Enable Mask */
#define SFR_WPMR_WPEN(value)                  (SFR_WPMR_WPEN_Msk & ((value) << SFR_WPMR_WPEN_Pos))
#define   SFR_WPMR_WPEN_0_Val                 _U_(0x0)                                             /**< (SFR_WPMR) Disables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII).  */
#define   SFR_WPMR_WPEN_1_Val                 _U_(0x1)                                             /**< (SFR_WPMR) Enables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII).  */
#define SFR_WPMR_WPEN_0                       (SFR_WPMR_WPEN_0_Val << SFR_WPMR_WPEN_Pos)           /**< (SFR_WPMR) Disables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII). Position  */
#define SFR_WPMR_WPEN_1                       (SFR_WPMR_WPEN_1_Val << SFR_WPMR_WPEN_Pos)           /**< (SFR_WPMR) Enables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII). Position  */
#define SFR_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (SFR_WPMR) Write Protection Key Position */
#define SFR_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << SFR_WPMR_WPKEY_Pos)                /**< (SFR_WPMR) Write Protection Key Mask */
#define SFR_WPMR_WPKEY(value)                 (SFR_WPMR_WPKEY_Msk & ((value) << SFR_WPMR_WPKEY_Pos))
#define   SFR_WPMR_WPKEY_PASSWD_Val           _U_(0x534652)                                        /**< (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define SFR_WPMR_WPKEY_PASSWD                 (SFR_WPMR_WPKEY_PASSWD_Val << SFR_WPMR_WPKEY_Pos)    /**< (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define SFR_WPMR_Msk                          _U_(0xFFFFFF01)                                      /**< (SFR_WPMR) Register Mask  */


/* -------- SFR_WPSR : (SFR Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define SFR_WPSR_RESETVALUE                   _U_(0x00)                                            /**<  (SFR_WPSR) Write Protection Status Register  Reset Value */

#define SFR_WPSR_WPVS_Pos                     _U_(0)                                               /**< (SFR_WPSR) Write Protection Violation Status Position */
#define SFR_WPSR_WPVS_Msk                     (_U_(0x1) << SFR_WPSR_WPVS_Pos)                      /**< (SFR_WPSR) Write Protection Violation Status Mask */
#define SFR_WPSR_WPVS(value)                  (SFR_WPSR_WPVS_Msk & ((value) << SFR_WPSR_WPVS_Pos))
#define   SFR_WPSR_WPVS_0_Val                 _U_(0x0)                                             /**< (SFR_WPSR) No write protection violation has occurred since the last read of SFR_WPSR.  */
#define   SFR_WPSR_WPVS_1_Val                 _U_(0x1)                                             /**< (SFR_WPSR) A write protection violation has occurred since the last read of SFR_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC.  */
#define SFR_WPSR_WPVS_0                       (SFR_WPSR_WPVS_0_Val << SFR_WPSR_WPVS_Pos)           /**< (SFR_WPSR) No write protection violation has occurred since the last read of SFR_WPSR. Position  */
#define SFR_WPSR_WPVS_1                       (SFR_WPSR_WPVS_1_Val << SFR_WPSR_WPVS_Pos)           /**< (SFR_WPSR) A write protection violation has occurred since the last read of SFR_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC. Position  */
#define SFR_WPSR_WPSRC_Pos                    _U_(8)                                               /**< (SFR_WPSR) Write Protection Source Position */
#define SFR_WPSR_WPSRC_Msk                    (_U_(0xFFFF) << SFR_WPSR_WPSRC_Pos)                  /**< (SFR_WPSR) Write Protection Source Mask */
#define SFR_WPSR_WPSRC(value)                 (SFR_WPSR_WPSRC_Msk & ((value) << SFR_WPSR_WPSRC_Pos))
#define SFR_WPSR_Msk                          _U_(0x00FFFF01)                                      /**< (SFR_WPSR) Register Mask  */


/* -------- SFR_DEBUG : (SFR Offset: 0x200C) (R/W 32) Debug Register -------- */
#define SFR_DEBUG_RESETVALUE                  _U_(0x00)                                            /**<  (SFR_DEBUG) Debug Register  Reset Value */

#define SFR_DEBUG_PROT_Pos                    _U_(0)                                               /**< (SFR_DEBUG) Protection Debug Position */
#define SFR_DEBUG_PROT_Msk                    (_U_(0x1) << SFR_DEBUG_PROT_Pos)                     /**< (SFR_DEBUG) Protection Debug Mask */
#define SFR_DEBUG_PROT(value)                 (SFR_DEBUG_PROT_Msk & ((value) << SFR_DEBUG_PROT_Pos))
#define   SFR_DEBUG_PROT_0_Val                _U_(0x0)                                             /**< (SFR_DEBUG) Protection debug is disabled.  */
#define   SFR_DEBUG_PROT_1_Val                _U_(0x1)                                             /**< (SFR_DEBUG) Protection debug is enabled.  */
#define SFR_DEBUG_PROT_0                      (SFR_DEBUG_PROT_0_Val << SFR_DEBUG_PROT_Pos)         /**< (SFR_DEBUG) Protection debug is disabled. Position  */
#define SFR_DEBUG_PROT_1                      (SFR_DEBUG_PROT_1_Val << SFR_DEBUG_PROT_Pos)         /**< (SFR_DEBUG) Protection debug is enabled. Position  */
#define SFR_DEBUG_Msk                         _U_(0x00000001)                                      /**< (SFR_DEBUG) Register Mask  */


/* -------- SFR_HSS_AXIQOS : (SFR Offset: 0x2028) (R/W 32) HSS AXI QOS Register -------- */
#define SFR_HSS_AXIQOS_RESETVALUE             _U_(0x00)                                            /**<  (SFR_HSS_AXIQOS) HSS AXI QOS Register  Reset Value */

#define SFR_HSS_AXIQOS_READ_Pos               _U_(0)                                               /**< (SFR_HSS_AXIQOS) QOS value for read transfer from HSS to the DDR controller Position */
#define SFR_HSS_AXIQOS_READ_Msk               (_U_(0xF) << SFR_HSS_AXIQOS_READ_Pos)                /**< (SFR_HSS_AXIQOS) QOS value for read transfer from HSS to the DDR controller Mask */
#define SFR_HSS_AXIQOS_READ(value)            (SFR_HSS_AXIQOS_READ_Msk & ((value) << SFR_HSS_AXIQOS_READ_Pos))
#define SFR_HSS_AXIQOS_WRITE_Pos              _U_(8)                                               /**< (SFR_HSS_AXIQOS) QOS value for write transfer from HSS to the DDR controller Position */
#define SFR_HSS_AXIQOS_WRITE_Msk              (_U_(0xF) << SFR_HSS_AXIQOS_WRITE_Pos)               /**< (SFR_HSS_AXIQOS) QOS value for write transfer from HSS to the DDR controller Mask */
#define SFR_HSS_AXIQOS_WRITE(value)           (SFR_HSS_AXIQOS_WRITE_Msk & ((value) << SFR_HSS_AXIQOS_WRITE_Pos))
#define SFR_HSS_AXIQOS_Msk                    _U_(0x00000F0F)                                      /**< (SFR_HSS_AXIQOS) Register Mask  */


/* -------- SFR_UDDRC : (SFR Offset: 0x202C) (R/W 32) UDDRC Register -------- */
#define SFR_UDDRC_RESETVALUE                  _U_(0x00)                                            /**<  (SFR_UDDRC) UDDRC Register  Reset Value */

#define SFR_UDDRC_DIS_DECERR_Pos              _U_(0)                                               /**< (SFR_UDDRC) Disable Decode Error Position */
#define SFR_UDDRC_DIS_DECERR_Msk              (_U_(0x1) << SFR_UDDRC_DIS_DECERR_Pos)               /**< (SFR_UDDRC) Disable Decode Error Mask */
#define SFR_UDDRC_DIS_DECERR(value)           (SFR_UDDRC_DIS_DECERR_Msk & ((value) << SFR_UDDRC_DIS_DECERR_Pos))
#define   SFR_UDDRC_DIS_DECERR_0_Val          _U_(0x0)                                             /**< (SFR_UDDRC) Enables decode error when reading a non-existing register in the DDR controller Configuration Address Space.  */
#define   SFR_UDDRC_DIS_DECERR_1_Val          _U_(0x1)                                             /**< (SFR_UDDRC) Disables decode error when reading a non-existing register in the DDR controller Configuration Address Space.  */
#define SFR_UDDRC_DIS_DECERR_0                (SFR_UDDRC_DIS_DECERR_0_Val << SFR_UDDRC_DIS_DECERR_Pos) /**< (SFR_UDDRC) Enables decode error when reading a non-existing register in the DDR controller Configuration Address Space. Position  */
#define SFR_UDDRC_DIS_DECERR_1                (SFR_UDDRC_DIS_DECERR_1_Val << SFR_UDDRC_DIS_DECERR_Pos) /**< (SFR_UDDRC) Disables decode error when reading a non-existing register in the DDR controller Configuration Address Space. Position  */
#define SFR_UDDRC_Msk                         _U_(0x00000001)                                      /**< (SFR_UDDRC) Register Mask  */


/* -------- SFR_CAN_SRAM_SEL : (SFR Offset: 0x2030) (R/W 32) SFR CAN SRAM Selection Register -------- */
#define SFR_CAN_SRAM_SEL_RESETVALUE           _U_(0x00)                                            /**<  (SFR_CAN_SRAM_SEL) SFR CAN SRAM Selection Register  Reset Value */

#define SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos       _U_(0)                                               /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0_Msk       (_U_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos)        /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN0_Msk & ((value) << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos))
#define   SFR_CAN_SRAM_SEL_UPPER_CAN0_0_Val   _U_(0x0)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN0_1_Val   _U_(0x1)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0_0         (SFR_CAN_SRAM_SEL_UPPER_CAN0_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0_1         (SFR_CAN_SRAM_SEL_UPPER_CAN0_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos       _U_(1)                                               /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_Msk       (_U_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos)        /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN1_Msk & ((value) << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos))
#define   SFR_CAN_SRAM_SEL_UPPER_CAN1_0_Val   _U_(0x0)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN1_1_Val   _U_(0x1)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_0         (SFR_CAN_SRAM_SEL_UPPER_CAN1_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_1         (SFR_CAN_SRAM_SEL_UPPER_CAN1_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos       _U_(2)                                               /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_Msk       (_U_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos)        /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN2_Msk & ((value) << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos))
#define   SFR_CAN_SRAM_SEL_UPPER_CAN2_0_Val   _U_(0x0)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN2_1_Val   _U_(0x1)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_0         (SFR_CAN_SRAM_SEL_UPPER_CAN2_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_1         (SFR_CAN_SRAM_SEL_UPPER_CAN2_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos       _U_(3)                                               /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_Msk       (_U_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos)        /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN3_Msk & ((value) << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos))
#define   SFR_CAN_SRAM_SEL_UPPER_CAN3_0_Val   _U_(0x0)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN3_1_Val   _U_(0x1)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_0         (SFR_CAN_SRAM_SEL_UPPER_CAN3_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_1         (SFR_CAN_SRAM_SEL_UPPER_CAN3_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos       _U_(4)                                               /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_Msk       (_U_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos)        /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN4_Msk & ((value) << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos))
#define   SFR_CAN_SRAM_SEL_UPPER_CAN4_0_Val   _U_(0x0)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN4_1_Val   _U_(0x1)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_0         (SFR_CAN_SRAM_SEL_UPPER_CAN4_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_1         (SFR_CAN_SRAM_SEL_UPPER_CAN4_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos       _U_(5)                                               /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5_Msk       (_U_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos)        /**< (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN5_Msk & ((value) << SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos))
#define   SFR_CAN_SRAM_SEL_UPPER_CAN5_0_Val   _U_(0x0)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN5_1_Val   _U_(0x1)                                             /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5_0         (SFR_CAN_SRAM_SEL_UPPER_CAN5_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5_1         (SFR_CAN_SRAM_SEL_UPPER_CAN5_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos) /**< (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position  */
#define SFR_CAN_SRAM_SEL_Msk                  _U_(0x0000003F)                                      /**< (SFR_CAN_SRAM_SEL) Register Mask  */

#define SFR_CAN_SRAM_SEL_UPPER_CAN_Pos        _U_(0)                                               /**< (SFR_CAN_SRAM_SEL Position) CANx Upper 64K SRAM Selection */
#define SFR_CAN_SRAM_SEL_UPPER_CAN_Msk        (_U_(0x3F) << SFR_CAN_SRAM_SEL_UPPER_CAN_Pos)        /**< (SFR_CAN_SRAM_SEL Mask) UPPER_CAN */
#define SFR_CAN_SRAM_SEL_UPPER_CAN(value)     (SFR_CAN_SRAM_SEL_UPPER_CAN_Msk & ((value) << SFR_CAN_SRAM_SEL_UPPER_CAN_Pos)) 

/** \brief SFR register offsets definitions */
#define SFR_OHCIICR_REG_OFST           (0x00)              /**< (SFR_OHCIICR) OHCI Interrupt Configuration Register Offset */
#define SFR_OHCIISR_REG_OFST           (0x04)              /**< (SFR_OHCIISR) OHCI Interrupt Status Register Offset */
#define SFR_WPMR_REG_OFST              (0xE4)              /**< (SFR_WPMR) Write Protection Mode Register Offset */
#define SFR_WPSR_REG_OFST              (0xE8)              /**< (SFR_WPSR) Write Protection Status Register Offset */
#define SFR_DEBUG_REG_OFST             (0x200C)            /**< (SFR_DEBUG) Debug Register Offset */
#define SFR_HSS_AXIQOS_REG_OFST        (0x2028)            /**< (SFR_HSS_AXIQOS) HSS AXI QOS Register Offset */
#define SFR_UDDRC_REG_OFST             (0x202C)            /**< (SFR_UDDRC) UDDRC Register Offset */
#define SFR_CAN_SRAM_SEL_REG_OFST      (0x2030)            /**< (SFR_CAN_SRAM_SEL) SFR CAN SRAM Selection Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFR register API structure */
typedef struct
{  /* Special Function Register */
  __IO  uint32_t                       SFR_OHCIICR;        /**< Offset: 0x00 (R/W  32) OHCI Interrupt Configuration Register */
  __I   uint32_t                       SFR_OHCIISR;        /**< Offset: 0x04 (R/   32) OHCI Interrupt Status Register */
  __I   uint8_t                        Reserved1[0xDC];
  __IO  uint32_t                       SFR_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       SFR_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved2[0x1F20];
  __IO  uint32_t                       SFR_DEBUG;          /**< Offset: 0x200C (R/W  32) Debug Register */
  __I   uint8_t                        Reserved3[0x18];
  __IO  uint32_t                       SFR_HSS_AXIQOS;     /**< Offset: 0x2028 (R/W  32) HSS AXI QOS Register */
  __IO  uint32_t                       SFR_UDDRC;          /**< Offset: 0x202C (R/W  32) UDDRC Register */
  __IO  uint32_t                       SFR_CAN_SRAM_SEL;   /**< Offset: 0x2030 (R/W  32) SFR CAN SRAM Selection Register */
} sfr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_SFR_COMPONENT_H_ */
