/*
 * Component description for UDP
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
#ifndef _SAMG55_UDP_COMPONENT_H_
#define _SAMG55_UDP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR UDP                                          */
/* ************************************************************************** */

/* -------- UDP_FRM_NUM : (UDP Offset: 0x00) ( R/ 32) Frame Number Register -------- */
#define UDP_FRM_NUM_FRM_NUM_Pos               _U_(0)                                               /**< (UDP_FRM_NUM) Frame Number as Defined in the Packet Field Formats Position */
#define UDP_FRM_NUM_FRM_NUM_Msk               (_U_(0x7FF) << UDP_FRM_NUM_FRM_NUM_Pos)              /**< (UDP_FRM_NUM) Frame Number as Defined in the Packet Field Formats Mask */
#define UDP_FRM_NUM_FRM_NUM(value)            (UDP_FRM_NUM_FRM_NUM_Msk & ((value) << UDP_FRM_NUM_FRM_NUM_Pos))
#define UDP_FRM_NUM_FRM_ERR_Pos               _U_(16)                                              /**< (UDP_FRM_NUM) Frame Error Position */
#define UDP_FRM_NUM_FRM_ERR_Msk               (_U_(0x1) << UDP_FRM_NUM_FRM_ERR_Pos)                /**< (UDP_FRM_NUM) Frame Error Mask */
#define UDP_FRM_NUM_FRM_ERR(value)            (UDP_FRM_NUM_FRM_ERR_Msk & ((value) << UDP_FRM_NUM_FRM_ERR_Pos))
#define UDP_FRM_NUM_FRM_OK_Pos                _U_(17)                                              /**< (UDP_FRM_NUM) Frame OK Position */
#define UDP_FRM_NUM_FRM_OK_Msk                (_U_(0x1) << UDP_FRM_NUM_FRM_OK_Pos)                 /**< (UDP_FRM_NUM) Frame OK Mask */
#define UDP_FRM_NUM_FRM_OK(value)             (UDP_FRM_NUM_FRM_OK_Msk & ((value) << UDP_FRM_NUM_FRM_OK_Pos))
#define UDP_FRM_NUM_Msk                       _U_(0x000307FF)                                      /**< (UDP_FRM_NUM) Register Mask  */


/* -------- UDP_GLB_STAT : (UDP Offset: 0x04) (R/W 32) Global State Register -------- */
#define UDP_GLB_STAT_FADDEN_Pos               _U_(0)                                               /**< (UDP_GLB_STAT) Function Address Enable Position */
#define UDP_GLB_STAT_FADDEN_Msk               (_U_(0x1) << UDP_GLB_STAT_FADDEN_Pos)                /**< (UDP_GLB_STAT) Function Address Enable Mask */
#define UDP_GLB_STAT_FADDEN(value)            (UDP_GLB_STAT_FADDEN_Msk & ((value) << UDP_GLB_STAT_FADDEN_Pos))
#define UDP_GLB_STAT_CONFG_Pos                _U_(1)                                               /**< (UDP_GLB_STAT) Configured Position */
#define UDP_GLB_STAT_CONFG_Msk                (_U_(0x1) << UDP_GLB_STAT_CONFG_Pos)                 /**< (UDP_GLB_STAT) Configured Mask */
#define UDP_GLB_STAT_CONFG(value)             (UDP_GLB_STAT_CONFG_Msk & ((value) << UDP_GLB_STAT_CONFG_Pos))
#define UDP_GLB_STAT_ESR_Pos                  _U_(2)                                               /**< (UDP_GLB_STAT) Enable Send Resume Position */
#define UDP_GLB_STAT_ESR_Msk                  (_U_(0x1) << UDP_GLB_STAT_ESR_Pos)                   /**< (UDP_GLB_STAT) Enable Send Resume Mask */
#define UDP_GLB_STAT_ESR(value)               (UDP_GLB_STAT_ESR_Msk & ((value) << UDP_GLB_STAT_ESR_Pos))
#define UDP_GLB_STAT_RSMINPR_Pos              _U_(3)                                               /**< (UDP_GLB_STAT)  Position */
#define UDP_GLB_STAT_RSMINPR_Msk              (_U_(0x1) << UDP_GLB_STAT_RSMINPR_Pos)               /**< (UDP_GLB_STAT)  Mask */
#define UDP_GLB_STAT_RSMINPR(value)           (UDP_GLB_STAT_RSMINPR_Msk & ((value) << UDP_GLB_STAT_RSMINPR_Pos))
#define UDP_GLB_STAT_RMWUPE_Pos               _U_(4)                                               /**< (UDP_GLB_STAT) Remote Wakeup Enable Position */
#define UDP_GLB_STAT_RMWUPE_Msk               (_U_(0x1) << UDP_GLB_STAT_RMWUPE_Pos)                /**< (UDP_GLB_STAT) Remote Wakeup Enable Mask */
#define UDP_GLB_STAT_RMWUPE(value)            (UDP_GLB_STAT_RMWUPE_Msk & ((value) << UDP_GLB_STAT_RMWUPE_Pos))
#define UDP_GLB_STAT_Msk                      _U_(0x0000001F)                                      /**< (UDP_GLB_STAT) Register Mask  */


/* -------- UDP_FADDR : (UDP Offset: 0x08) (R/W 32) Function Address Register -------- */
#define UDP_FADDR_FADD_Pos                    _U_(0)                                               /**< (UDP_FADDR) Function Address Value Position */
#define UDP_FADDR_FADD_Msk                    (_U_(0x7F) << UDP_FADDR_FADD_Pos)                    /**< (UDP_FADDR) Function Address Value Mask */
#define UDP_FADDR_FADD(value)                 (UDP_FADDR_FADD_Msk & ((value) << UDP_FADDR_FADD_Pos))
#define UDP_FADDR_FEN_Pos                     _U_(8)                                               /**< (UDP_FADDR) Function Enable Position */
#define UDP_FADDR_FEN_Msk                     (_U_(0x1) << UDP_FADDR_FEN_Pos)                      /**< (UDP_FADDR) Function Enable Mask */
#define UDP_FADDR_FEN(value)                  (UDP_FADDR_FEN_Msk & ((value) << UDP_FADDR_FEN_Pos))
#define UDP_FADDR_Msk                         _U_(0x0000017F)                                      /**< (UDP_FADDR) Register Mask  */


/* -------- UDP_IER : (UDP Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define UDP_IER_EP0INT_Pos                    _U_(0)                                               /**< (UDP_IER) Enable Endpoint 0 Interrupt Position */
#define UDP_IER_EP0INT_Msk                    (_U_(0x1) << UDP_IER_EP0INT_Pos)                     /**< (UDP_IER) Enable Endpoint 0 Interrupt Mask */
#define UDP_IER_EP0INT(value)                 (UDP_IER_EP0INT_Msk & ((value) << UDP_IER_EP0INT_Pos))
#define UDP_IER_EP1INT_Pos                    _U_(1)                                               /**< (UDP_IER) Enable Endpoint 1 Interrupt Position */
#define UDP_IER_EP1INT_Msk                    (_U_(0x1) << UDP_IER_EP1INT_Pos)                     /**< (UDP_IER) Enable Endpoint 1 Interrupt Mask */
#define UDP_IER_EP1INT(value)                 (UDP_IER_EP1INT_Msk & ((value) << UDP_IER_EP1INT_Pos))
#define UDP_IER_EP2INT_Pos                    _U_(2)                                               /**< (UDP_IER) Enable Endpoint 2Interrupt Position */
#define UDP_IER_EP2INT_Msk                    (_U_(0x1) << UDP_IER_EP2INT_Pos)                     /**< (UDP_IER) Enable Endpoint 2Interrupt Mask */
#define UDP_IER_EP2INT(value)                 (UDP_IER_EP2INT_Msk & ((value) << UDP_IER_EP2INT_Pos))
#define UDP_IER_EP3INT_Pos                    _U_(3)                                               /**< (UDP_IER) Enable Endpoint 3 Interrupt Position */
#define UDP_IER_EP3INT_Msk                    (_U_(0x1) << UDP_IER_EP3INT_Pos)                     /**< (UDP_IER) Enable Endpoint 3 Interrupt Mask */
#define UDP_IER_EP3INT(value)                 (UDP_IER_EP3INT_Msk & ((value) << UDP_IER_EP3INT_Pos))
#define UDP_IER_EP4INT_Pos                    _U_(4)                                               /**< (UDP_IER) Enable Endpoint 4 Interrupt Position */
#define UDP_IER_EP4INT_Msk                    (_U_(0x1) << UDP_IER_EP4INT_Pos)                     /**< (UDP_IER) Enable Endpoint 4 Interrupt Mask */
#define UDP_IER_EP4INT(value)                 (UDP_IER_EP4INT_Msk & ((value) << UDP_IER_EP4INT_Pos))
#define UDP_IER_EP5INT_Pos                    _U_(5)                                               /**< (UDP_IER) Enable Endpoint 5 Interrupt Position */
#define UDP_IER_EP5INT_Msk                    (_U_(0x1) << UDP_IER_EP5INT_Pos)                     /**< (UDP_IER) Enable Endpoint 5 Interrupt Mask */
#define UDP_IER_EP5INT(value)                 (UDP_IER_EP5INT_Msk & ((value) << UDP_IER_EP5INT_Pos))
#define UDP_IER_RXSUSP_Pos                    _U_(8)                                               /**< (UDP_IER) Enable UDP Suspend Interrupt Position */
#define UDP_IER_RXSUSP_Msk                    (_U_(0x1) << UDP_IER_RXSUSP_Pos)                     /**< (UDP_IER) Enable UDP Suspend Interrupt Mask */
#define UDP_IER_RXSUSP(value)                 (UDP_IER_RXSUSP_Msk & ((value) << UDP_IER_RXSUSP_Pos))
#define UDP_IER_RXRSM_Pos                     _U_(9)                                               /**< (UDP_IER) Enable UDP Resume Interrupt Position */
#define UDP_IER_RXRSM_Msk                     (_U_(0x1) << UDP_IER_RXRSM_Pos)                      /**< (UDP_IER) Enable UDP Resume Interrupt Mask */
#define UDP_IER_RXRSM(value)                  (UDP_IER_RXRSM_Msk & ((value) << UDP_IER_RXRSM_Pos))
#define UDP_IER_EXTRSM_Pos                    _U_(10)                                              /**< (UDP_IER)  Position */
#define UDP_IER_EXTRSM_Msk                    (_U_(0x1) << UDP_IER_EXTRSM_Pos)                     /**< (UDP_IER)  Mask */
#define UDP_IER_EXTRSM(value)                 (UDP_IER_EXTRSM_Msk & ((value) << UDP_IER_EXTRSM_Pos))
#define UDP_IER_SOFINT_Pos                    _U_(11)                                              /**< (UDP_IER) Enable Start Of Frame Interrupt Position */
#define UDP_IER_SOFINT_Msk                    (_U_(0x1) << UDP_IER_SOFINT_Pos)                     /**< (UDP_IER) Enable Start Of Frame Interrupt Mask */
#define UDP_IER_SOFINT(value)                 (UDP_IER_SOFINT_Msk & ((value) << UDP_IER_SOFINT_Pos))
#define UDP_IER_WAKEUP_Pos                    _U_(13)                                              /**< (UDP_IER) Enable UDP Bus Wakeup Interrupt Position */
#define UDP_IER_WAKEUP_Msk                    (_U_(0x1) << UDP_IER_WAKEUP_Pos)                     /**< (UDP_IER) Enable UDP Bus Wakeup Interrupt Mask */
#define UDP_IER_WAKEUP(value)                 (UDP_IER_WAKEUP_Msk & ((value) << UDP_IER_WAKEUP_Pos))
#define UDP_IER_Msk                           _U_(0x00002F3F)                                      /**< (UDP_IER) Register Mask  */


/* -------- UDP_IDR : (UDP Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define UDP_IDR_EP0INT_Pos                    _U_(0)                                               /**< (UDP_IDR) Disable Endpoint 0 Interrupt Position */
#define UDP_IDR_EP0INT_Msk                    (_U_(0x1) << UDP_IDR_EP0INT_Pos)                     /**< (UDP_IDR) Disable Endpoint 0 Interrupt Mask */
#define UDP_IDR_EP0INT(value)                 (UDP_IDR_EP0INT_Msk & ((value) << UDP_IDR_EP0INT_Pos))
#define UDP_IDR_EP1INT_Pos                    _U_(1)                                               /**< (UDP_IDR) Disable Endpoint 1 Interrupt Position */
#define UDP_IDR_EP1INT_Msk                    (_U_(0x1) << UDP_IDR_EP1INT_Pos)                     /**< (UDP_IDR) Disable Endpoint 1 Interrupt Mask */
#define UDP_IDR_EP1INT(value)                 (UDP_IDR_EP1INT_Msk & ((value) << UDP_IDR_EP1INT_Pos))
#define UDP_IDR_EP2INT_Pos                    _U_(2)                                               /**< (UDP_IDR) Disable Endpoint 2 Interrupt Position */
#define UDP_IDR_EP2INT_Msk                    (_U_(0x1) << UDP_IDR_EP2INT_Pos)                     /**< (UDP_IDR) Disable Endpoint 2 Interrupt Mask */
#define UDP_IDR_EP2INT(value)                 (UDP_IDR_EP2INT_Msk & ((value) << UDP_IDR_EP2INT_Pos))
#define UDP_IDR_EP3INT_Pos                    _U_(3)                                               /**< (UDP_IDR) Disable Endpoint 3 Interrupt Position */
#define UDP_IDR_EP3INT_Msk                    (_U_(0x1) << UDP_IDR_EP3INT_Pos)                     /**< (UDP_IDR) Disable Endpoint 3 Interrupt Mask */
#define UDP_IDR_EP3INT(value)                 (UDP_IDR_EP3INT_Msk & ((value) << UDP_IDR_EP3INT_Pos))
#define UDP_IDR_EP4INT_Pos                    _U_(4)                                               /**< (UDP_IDR) Disable Endpoint 4 Interrupt Position */
#define UDP_IDR_EP4INT_Msk                    (_U_(0x1) << UDP_IDR_EP4INT_Pos)                     /**< (UDP_IDR) Disable Endpoint 4 Interrupt Mask */
#define UDP_IDR_EP4INT(value)                 (UDP_IDR_EP4INT_Msk & ((value) << UDP_IDR_EP4INT_Pos))
#define UDP_IDR_EP5INT_Pos                    _U_(5)                                               /**< (UDP_IDR) Disable Endpoint 5 Interrupt Position */
#define UDP_IDR_EP5INT_Msk                    (_U_(0x1) << UDP_IDR_EP5INT_Pos)                     /**< (UDP_IDR) Disable Endpoint 5 Interrupt Mask */
#define UDP_IDR_EP5INT(value)                 (UDP_IDR_EP5INT_Msk & ((value) << UDP_IDR_EP5INT_Pos))
#define UDP_IDR_RXSUSP_Pos                    _U_(8)                                               /**< (UDP_IDR) Disable UDP Suspend Interrupt Position */
#define UDP_IDR_RXSUSP_Msk                    (_U_(0x1) << UDP_IDR_RXSUSP_Pos)                     /**< (UDP_IDR) Disable UDP Suspend Interrupt Mask */
#define UDP_IDR_RXSUSP(value)                 (UDP_IDR_RXSUSP_Msk & ((value) << UDP_IDR_RXSUSP_Pos))
#define UDP_IDR_RXRSM_Pos                     _U_(9)                                               /**< (UDP_IDR) Disable UDP Resume Interrupt Position */
#define UDP_IDR_RXRSM_Msk                     (_U_(0x1) << UDP_IDR_RXRSM_Pos)                      /**< (UDP_IDR) Disable UDP Resume Interrupt Mask */
#define UDP_IDR_RXRSM(value)                  (UDP_IDR_RXRSM_Msk & ((value) << UDP_IDR_RXRSM_Pos))
#define UDP_IDR_EXTRSM_Pos                    _U_(10)                                              /**< (UDP_IDR)  Position */
#define UDP_IDR_EXTRSM_Msk                    (_U_(0x1) << UDP_IDR_EXTRSM_Pos)                     /**< (UDP_IDR)  Mask */
#define UDP_IDR_EXTRSM(value)                 (UDP_IDR_EXTRSM_Msk & ((value) << UDP_IDR_EXTRSM_Pos))
#define UDP_IDR_SOFINT_Pos                    _U_(11)                                              /**< (UDP_IDR) Disable Start Of Frame Interrupt Position */
#define UDP_IDR_SOFINT_Msk                    (_U_(0x1) << UDP_IDR_SOFINT_Pos)                     /**< (UDP_IDR) Disable Start Of Frame Interrupt Mask */
#define UDP_IDR_SOFINT(value)                 (UDP_IDR_SOFINT_Msk & ((value) << UDP_IDR_SOFINT_Pos))
#define UDP_IDR_WAKEUP_Pos                    _U_(13)                                              /**< (UDP_IDR) Disable USB Bus Interrupt Position */
#define UDP_IDR_WAKEUP_Msk                    (_U_(0x1) << UDP_IDR_WAKEUP_Pos)                     /**< (UDP_IDR) Disable USB Bus Interrupt Mask */
#define UDP_IDR_WAKEUP(value)                 (UDP_IDR_WAKEUP_Msk & ((value) << UDP_IDR_WAKEUP_Pos))
#define UDP_IDR_Msk                           _U_(0x00002F3F)                                      /**< (UDP_IDR) Register Mask  */


/* -------- UDP_IMR : (UDP Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define UDP_IMR_EP0INT_Pos                    _U_(0)                                               /**< (UDP_IMR) Mask Endpoint 0 Interrupt Position */
#define UDP_IMR_EP0INT_Msk                    (_U_(0x1) << UDP_IMR_EP0INT_Pos)                     /**< (UDP_IMR) Mask Endpoint 0 Interrupt Mask */
#define UDP_IMR_EP0INT(value)                 (UDP_IMR_EP0INT_Msk & ((value) << UDP_IMR_EP0INT_Pos))
#define UDP_IMR_EP1INT_Pos                    _U_(1)                                               /**< (UDP_IMR) Mask Endpoint 1 Interrupt Position */
#define UDP_IMR_EP1INT_Msk                    (_U_(0x1) << UDP_IMR_EP1INT_Pos)                     /**< (UDP_IMR) Mask Endpoint 1 Interrupt Mask */
#define UDP_IMR_EP1INT(value)                 (UDP_IMR_EP1INT_Msk & ((value) << UDP_IMR_EP1INT_Pos))
#define UDP_IMR_EP2INT_Pos                    _U_(2)                                               /**< (UDP_IMR) Mask Endpoint 2 Interrupt Position */
#define UDP_IMR_EP2INT_Msk                    (_U_(0x1) << UDP_IMR_EP2INT_Pos)                     /**< (UDP_IMR) Mask Endpoint 2 Interrupt Mask */
#define UDP_IMR_EP2INT(value)                 (UDP_IMR_EP2INT_Msk & ((value) << UDP_IMR_EP2INT_Pos))
#define UDP_IMR_EP3INT_Pos                    _U_(3)                                               /**< (UDP_IMR) Mask Endpoint 3 Interrupt Position */
#define UDP_IMR_EP3INT_Msk                    (_U_(0x1) << UDP_IMR_EP3INT_Pos)                     /**< (UDP_IMR) Mask Endpoint 3 Interrupt Mask */
#define UDP_IMR_EP3INT(value)                 (UDP_IMR_EP3INT_Msk & ((value) << UDP_IMR_EP3INT_Pos))
#define UDP_IMR_EP4INT_Pos                    _U_(4)                                               /**< (UDP_IMR) Mask Endpoint 4 Interrupt Position */
#define UDP_IMR_EP4INT_Msk                    (_U_(0x1) << UDP_IMR_EP4INT_Pos)                     /**< (UDP_IMR) Mask Endpoint 4 Interrupt Mask */
#define UDP_IMR_EP4INT(value)                 (UDP_IMR_EP4INT_Msk & ((value) << UDP_IMR_EP4INT_Pos))
#define UDP_IMR_EP5INT_Pos                    _U_(5)                                               /**< (UDP_IMR) Mask Endpoint 5 Interrupt Position */
#define UDP_IMR_EP5INT_Msk                    (_U_(0x1) << UDP_IMR_EP5INT_Pos)                     /**< (UDP_IMR) Mask Endpoint 5 Interrupt Mask */
#define UDP_IMR_EP5INT(value)                 (UDP_IMR_EP5INT_Msk & ((value) << UDP_IMR_EP5INT_Pos))
#define UDP_IMR_RXSUSP_Pos                    _U_(8)                                               /**< (UDP_IMR) Mask UDP Suspend Interrupt Position */
#define UDP_IMR_RXSUSP_Msk                    (_U_(0x1) << UDP_IMR_RXSUSP_Pos)                     /**< (UDP_IMR) Mask UDP Suspend Interrupt Mask */
#define UDP_IMR_RXSUSP(value)                 (UDP_IMR_RXSUSP_Msk & ((value) << UDP_IMR_RXSUSP_Pos))
#define UDP_IMR_RXRSM_Pos                     _U_(9)                                               /**< (UDP_IMR) Mask UDP Resume Interrupt. Position */
#define UDP_IMR_RXRSM_Msk                     (_U_(0x1) << UDP_IMR_RXRSM_Pos)                      /**< (UDP_IMR) Mask UDP Resume Interrupt. Mask */
#define UDP_IMR_RXRSM(value)                  (UDP_IMR_RXRSM_Msk & ((value) << UDP_IMR_RXRSM_Pos))
#define UDP_IMR_EXTRSM_Pos                    _U_(10)                                              /**< (UDP_IMR)  Position */
#define UDP_IMR_EXTRSM_Msk                    (_U_(0x1) << UDP_IMR_EXTRSM_Pos)                     /**< (UDP_IMR)  Mask */
#define UDP_IMR_EXTRSM(value)                 (UDP_IMR_EXTRSM_Msk & ((value) << UDP_IMR_EXTRSM_Pos))
#define UDP_IMR_SOFINT_Pos                    _U_(11)                                              /**< (UDP_IMR) Mask Start Of Frame Interrupt Position */
#define UDP_IMR_SOFINT_Msk                    (_U_(0x1) << UDP_IMR_SOFINT_Pos)                     /**< (UDP_IMR) Mask Start Of Frame Interrupt Mask */
#define UDP_IMR_SOFINT(value)                 (UDP_IMR_SOFINT_Msk & ((value) << UDP_IMR_SOFINT_Pos))
#define UDP_IMR_BIT12_Pos                     _U_(12)                                              /**< (UDP_IMR) UDP_IMR Bit 12 Position */
#define UDP_IMR_BIT12_Msk                     (_U_(0x1) << UDP_IMR_BIT12_Pos)                      /**< (UDP_IMR) UDP_IMR Bit 12 Mask */
#define UDP_IMR_BIT12(value)                  (UDP_IMR_BIT12_Msk & ((value) << UDP_IMR_BIT12_Pos))
#define UDP_IMR_WAKEUP_Pos                    _U_(13)                                              /**< (UDP_IMR) USB Bus Wakeup Interrupt Position */
#define UDP_IMR_WAKEUP_Msk                    (_U_(0x1) << UDP_IMR_WAKEUP_Pos)                     /**< (UDP_IMR) USB Bus Wakeup Interrupt Mask */
#define UDP_IMR_WAKEUP(value)                 (UDP_IMR_WAKEUP_Msk & ((value) << UDP_IMR_WAKEUP_Pos))
#define UDP_IMR_Msk                           _U_(0x00003F3F)                                      /**< (UDP_IMR) Register Mask  */

#define UDP_IMR_BIT_Pos                       _U_(12)                                              /**< (UDP_IMR Position) UDP_IMR Bit x2 */
#define UDP_IMR_BIT_Msk                       (_U_(0x1) << UDP_IMR_BIT_Pos)                        /**< (UDP_IMR Mask) BIT */
#define UDP_IMR_BIT(value)                    (UDP_IMR_BIT_Msk & ((value) << UDP_IMR_BIT_Pos))     

/* -------- UDP_ISR : (UDP Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define UDP_ISR_EP0INT_Pos                    _U_(0)                                               /**< (UDP_ISR) Endpoint 0 Interrupt Status Position */
#define UDP_ISR_EP0INT_Msk                    (_U_(0x1) << UDP_ISR_EP0INT_Pos)                     /**< (UDP_ISR) Endpoint 0 Interrupt Status Mask */
#define UDP_ISR_EP0INT(value)                 (UDP_ISR_EP0INT_Msk & ((value) << UDP_ISR_EP0INT_Pos))
#define UDP_ISR_EP1INT_Pos                    _U_(1)                                               /**< (UDP_ISR) Endpoint 1 Interrupt Status Position */
#define UDP_ISR_EP1INT_Msk                    (_U_(0x1) << UDP_ISR_EP1INT_Pos)                     /**< (UDP_ISR) Endpoint 1 Interrupt Status Mask */
#define UDP_ISR_EP1INT(value)                 (UDP_ISR_EP1INT_Msk & ((value) << UDP_ISR_EP1INT_Pos))
#define UDP_ISR_EP2INT_Pos                    _U_(2)                                               /**< (UDP_ISR) Endpoint 2 Interrupt Status Position */
#define UDP_ISR_EP2INT_Msk                    (_U_(0x1) << UDP_ISR_EP2INT_Pos)                     /**< (UDP_ISR) Endpoint 2 Interrupt Status Mask */
#define UDP_ISR_EP2INT(value)                 (UDP_ISR_EP2INT_Msk & ((value) << UDP_ISR_EP2INT_Pos))
#define UDP_ISR_EP3INT_Pos                    _U_(3)                                               /**< (UDP_ISR) Endpoint 3 Interrupt Status Position */
#define UDP_ISR_EP3INT_Msk                    (_U_(0x1) << UDP_ISR_EP3INT_Pos)                     /**< (UDP_ISR) Endpoint 3 Interrupt Status Mask */
#define UDP_ISR_EP3INT(value)                 (UDP_ISR_EP3INT_Msk & ((value) << UDP_ISR_EP3INT_Pos))
#define UDP_ISR_EP4INT_Pos                    _U_(4)                                               /**< (UDP_ISR) Endpoint 4 Interrupt Status Position */
#define UDP_ISR_EP4INT_Msk                    (_U_(0x1) << UDP_ISR_EP4INT_Pos)                     /**< (UDP_ISR) Endpoint 4 Interrupt Status Mask */
#define UDP_ISR_EP4INT(value)                 (UDP_ISR_EP4INT_Msk & ((value) << UDP_ISR_EP4INT_Pos))
#define UDP_ISR_EP5INT_Pos                    _U_(5)                                               /**< (UDP_ISR) Endpoint 5 Interrupt Status Position */
#define UDP_ISR_EP5INT_Msk                    (_U_(0x1) << UDP_ISR_EP5INT_Pos)                     /**< (UDP_ISR) Endpoint 5 Interrupt Status Mask */
#define UDP_ISR_EP5INT(value)                 (UDP_ISR_EP5INT_Msk & ((value) << UDP_ISR_EP5INT_Pos))
#define UDP_ISR_RXSUSP_Pos                    _U_(8)                                               /**< (UDP_ISR) UDP Suspend Interrupt Status Position */
#define UDP_ISR_RXSUSP_Msk                    (_U_(0x1) << UDP_ISR_RXSUSP_Pos)                     /**< (UDP_ISR) UDP Suspend Interrupt Status Mask */
#define UDP_ISR_RXSUSP(value)                 (UDP_ISR_RXSUSP_Msk & ((value) << UDP_ISR_RXSUSP_Pos))
#define UDP_ISR_RXRSM_Pos                     _U_(9)                                               /**< (UDP_ISR) UDP Resume Interrupt Status Position */
#define UDP_ISR_RXRSM_Msk                     (_U_(0x1) << UDP_ISR_RXRSM_Pos)                      /**< (UDP_ISR) UDP Resume Interrupt Status Mask */
#define UDP_ISR_RXRSM(value)                  (UDP_ISR_RXRSM_Msk & ((value) << UDP_ISR_RXRSM_Pos))
#define UDP_ISR_EXTRSM_Pos                    _U_(10)                                              /**< (UDP_ISR)  Position */
#define UDP_ISR_EXTRSM_Msk                    (_U_(0x1) << UDP_ISR_EXTRSM_Pos)                     /**< (UDP_ISR)  Mask */
#define UDP_ISR_EXTRSM(value)                 (UDP_ISR_EXTRSM_Msk & ((value) << UDP_ISR_EXTRSM_Pos))
#define UDP_ISR_SOFINT_Pos                    _U_(11)                                              /**< (UDP_ISR) Start of Frame Interrupt Status Position */
#define UDP_ISR_SOFINT_Msk                    (_U_(0x1) << UDP_ISR_SOFINT_Pos)                     /**< (UDP_ISR) Start of Frame Interrupt Status Mask */
#define UDP_ISR_SOFINT(value)                 (UDP_ISR_SOFINT_Msk & ((value) << UDP_ISR_SOFINT_Pos))
#define UDP_ISR_ENDBUSRES_Pos                 _U_(12)                                              /**< (UDP_ISR) End of BUS Reset Interrupt Status Position */
#define UDP_ISR_ENDBUSRES_Msk                 (_U_(0x1) << UDP_ISR_ENDBUSRES_Pos)                  /**< (UDP_ISR) End of BUS Reset Interrupt Status Mask */
#define UDP_ISR_ENDBUSRES(value)              (UDP_ISR_ENDBUSRES_Msk & ((value) << UDP_ISR_ENDBUSRES_Pos))
#define UDP_ISR_WAKEUP_Pos                    _U_(13)                                              /**< (UDP_ISR) UDP Resume Interrupt Status Position */
#define UDP_ISR_WAKEUP_Msk                    (_U_(0x1) << UDP_ISR_WAKEUP_Pos)                     /**< (UDP_ISR) UDP Resume Interrupt Status Mask */
#define UDP_ISR_WAKEUP(value)                 (UDP_ISR_WAKEUP_Msk & ((value) << UDP_ISR_WAKEUP_Pos))
#define UDP_ISR_Msk                           _U_(0x00003F3F)                                      /**< (UDP_ISR) Register Mask  */


/* -------- UDP_ICR : (UDP Offset: 0x20) ( /W 32) Interrupt Clear Register -------- */
#define UDP_ICR_RXSUSP_Pos                    _U_(8)                                               /**< (UDP_ICR) Clear UDP Suspend Interrupt Position */
#define UDP_ICR_RXSUSP_Msk                    (_U_(0x1) << UDP_ICR_RXSUSP_Pos)                     /**< (UDP_ICR) Clear UDP Suspend Interrupt Mask */
#define UDP_ICR_RXSUSP(value)                 (UDP_ICR_RXSUSP_Msk & ((value) << UDP_ICR_RXSUSP_Pos))
#define UDP_ICR_RXRSM_Pos                     _U_(9)                                               /**< (UDP_ICR) Clear UDP Resume Interrupt Position */
#define UDP_ICR_RXRSM_Msk                     (_U_(0x1) << UDP_ICR_RXRSM_Pos)                      /**< (UDP_ICR) Clear UDP Resume Interrupt Mask */
#define UDP_ICR_RXRSM(value)                  (UDP_ICR_RXRSM_Msk & ((value) << UDP_ICR_RXRSM_Pos))
#define UDP_ICR_EXTRSM_Pos                    _U_(10)                                              /**< (UDP_ICR)  Position */
#define UDP_ICR_EXTRSM_Msk                    (_U_(0x1) << UDP_ICR_EXTRSM_Pos)                     /**< (UDP_ICR)  Mask */
#define UDP_ICR_EXTRSM(value)                 (UDP_ICR_EXTRSM_Msk & ((value) << UDP_ICR_EXTRSM_Pos))
#define UDP_ICR_SOFINT_Pos                    _U_(11)                                              /**< (UDP_ICR) Clear Start Of Frame Interrupt Position */
#define UDP_ICR_SOFINT_Msk                    (_U_(0x1) << UDP_ICR_SOFINT_Pos)                     /**< (UDP_ICR) Clear Start Of Frame Interrupt Mask */
#define UDP_ICR_SOFINT(value)                 (UDP_ICR_SOFINT_Msk & ((value) << UDP_ICR_SOFINT_Pos))
#define UDP_ICR_ENDBUSRES_Pos                 _U_(12)                                              /**< (UDP_ICR) Clear End of Bus Reset Interrupt Position */
#define UDP_ICR_ENDBUSRES_Msk                 (_U_(0x1) << UDP_ICR_ENDBUSRES_Pos)                  /**< (UDP_ICR) Clear End of Bus Reset Interrupt Mask */
#define UDP_ICR_ENDBUSRES(value)              (UDP_ICR_ENDBUSRES_Msk & ((value) << UDP_ICR_ENDBUSRES_Pos))
#define UDP_ICR_WAKEUP_Pos                    _U_(13)                                              /**< (UDP_ICR) Clear Wakeup Interrupt Position */
#define UDP_ICR_WAKEUP_Msk                    (_U_(0x1) << UDP_ICR_WAKEUP_Pos)                     /**< (UDP_ICR) Clear Wakeup Interrupt Mask */
#define UDP_ICR_WAKEUP(value)                 (UDP_ICR_WAKEUP_Msk & ((value) << UDP_ICR_WAKEUP_Pos))
#define UDP_ICR_Msk                           _U_(0x00003F00)                                      /**< (UDP_ICR) Register Mask  */


/* -------- UDP_RST_EP : (UDP Offset: 0x28) (R/W 32) Reset Endpoint Register -------- */
#define UDP_RST_EP_EP0_Pos                    _U_(0)                                               /**< (UDP_RST_EP) Reset Endpoint 0 Position */
#define UDP_RST_EP_EP0_Msk                    (_U_(0x1) << UDP_RST_EP_EP0_Pos)                     /**< (UDP_RST_EP) Reset Endpoint 0 Mask */
#define UDP_RST_EP_EP0(value)                 (UDP_RST_EP_EP0_Msk & ((value) << UDP_RST_EP_EP0_Pos))
#define UDP_RST_EP_EP1_Pos                    _U_(1)                                               /**< (UDP_RST_EP) Reset Endpoint 1 Position */
#define UDP_RST_EP_EP1_Msk                    (_U_(0x1) << UDP_RST_EP_EP1_Pos)                     /**< (UDP_RST_EP) Reset Endpoint 1 Mask */
#define UDP_RST_EP_EP1(value)                 (UDP_RST_EP_EP1_Msk & ((value) << UDP_RST_EP_EP1_Pos))
#define UDP_RST_EP_EP2_Pos                    _U_(2)                                               /**< (UDP_RST_EP) Reset Endpoint 2 Position */
#define UDP_RST_EP_EP2_Msk                    (_U_(0x1) << UDP_RST_EP_EP2_Pos)                     /**< (UDP_RST_EP) Reset Endpoint 2 Mask */
#define UDP_RST_EP_EP2(value)                 (UDP_RST_EP_EP2_Msk & ((value) << UDP_RST_EP_EP2_Pos))
#define UDP_RST_EP_EP3_Pos                    _U_(3)                                               /**< (UDP_RST_EP) Reset Endpoint 3 Position */
#define UDP_RST_EP_EP3_Msk                    (_U_(0x1) << UDP_RST_EP_EP3_Pos)                     /**< (UDP_RST_EP) Reset Endpoint 3 Mask */
#define UDP_RST_EP_EP3(value)                 (UDP_RST_EP_EP3_Msk & ((value) << UDP_RST_EP_EP3_Pos))
#define UDP_RST_EP_EP4_Pos                    _U_(4)                                               /**< (UDP_RST_EP) Reset Endpoint 4 Position */
#define UDP_RST_EP_EP4_Msk                    (_U_(0x1) << UDP_RST_EP_EP4_Pos)                     /**< (UDP_RST_EP) Reset Endpoint 4 Mask */
#define UDP_RST_EP_EP4(value)                 (UDP_RST_EP_EP4_Msk & ((value) << UDP_RST_EP_EP4_Pos))
#define UDP_RST_EP_EP5_Pos                    _U_(5)                                               /**< (UDP_RST_EP) Reset Endpoint 5 Position */
#define UDP_RST_EP_EP5_Msk                    (_U_(0x1) << UDP_RST_EP_EP5_Pos)                     /**< (UDP_RST_EP) Reset Endpoint 5 Mask */
#define UDP_RST_EP_EP5(value)                 (UDP_RST_EP_EP5_Msk & ((value) << UDP_RST_EP_EP5_Pos))
#define UDP_RST_EP_Msk                        _U_(0x0000003F)                                      /**< (UDP_RST_EP) Register Mask  */

#define UDP_RST_EP_EP_Pos                     _U_(0)                                               /**< (UDP_RST_EP Position) Reset Endpoint 5 */
#define UDP_RST_EP_EP_Msk                     (_U_(0x3F) << UDP_RST_EP_EP_Pos)                     /**< (UDP_RST_EP Mask) EP */
#define UDP_RST_EP_EP(value)                  (UDP_RST_EP_EP_Msk & ((value) << UDP_RST_EP_EP_Pos)) 

/* -------- UDP_CSR : (UDP Offset: 0x30) (R/W 32) Endpoint Control and Status Register 0 -------- */
#define UDP_CSR_TXCOMP_Pos                    _U_(0)                                               /**< (UDP_CSR) Generates an IN Packet with Data Previously Written in the DPR Position */
#define UDP_CSR_TXCOMP_Msk                    (_U_(0x1) << UDP_CSR_TXCOMP_Pos)                     /**< (UDP_CSR) Generates an IN Packet with Data Previously Written in the DPR Mask */
#define UDP_CSR_TXCOMP(value)                 (UDP_CSR_TXCOMP_Msk & ((value) << UDP_CSR_TXCOMP_Pos))
#define UDP_CSR_RX_DATA_BK0_Pos               _U_(1)                                               /**< (UDP_CSR) Receive Data Bank 0 Position */
#define UDP_CSR_RX_DATA_BK0_Msk               (_U_(0x1) << UDP_CSR_RX_DATA_BK0_Pos)                /**< (UDP_CSR) Receive Data Bank 0 Mask */
#define UDP_CSR_RX_DATA_BK0(value)            (UDP_CSR_RX_DATA_BK0_Msk & ((value) << UDP_CSR_RX_DATA_BK0_Pos))
#define UDP_CSR_RXSETUP_Pos                   _U_(2)                                               /**< (UDP_CSR) Received Setup Position */
#define UDP_CSR_RXSETUP_Msk                   (_U_(0x1) << UDP_CSR_RXSETUP_Pos)                    /**< (UDP_CSR) Received Setup Mask */
#define UDP_CSR_RXSETUP(value)                (UDP_CSR_RXSETUP_Msk & ((value) << UDP_CSR_RXSETUP_Pos))
#define UDP_CSR_STALLSENT_Pos                 _U_(3)                                               /**< (UDP_CSR) Stall Sent Position */
#define UDP_CSR_STALLSENT_Msk                 (_U_(0x1) << UDP_CSR_STALLSENT_Pos)                  /**< (UDP_CSR) Stall Sent Mask */
#define UDP_CSR_STALLSENT(value)              (UDP_CSR_STALLSENT_Msk & ((value) << UDP_CSR_STALLSENT_Pos))
#define UDP_CSR_TXPKTRDY_Pos                  _U_(4)                                               /**< (UDP_CSR) Transmit Packet Ready Position */
#define UDP_CSR_TXPKTRDY_Msk                  (_U_(0x1) << UDP_CSR_TXPKTRDY_Pos)                   /**< (UDP_CSR) Transmit Packet Ready Mask */
#define UDP_CSR_TXPKTRDY(value)               (UDP_CSR_TXPKTRDY_Msk & ((value) << UDP_CSR_TXPKTRDY_Pos))
#define UDP_CSR_FORCESTALL_Pos                _U_(5)                                               /**< (UDP_CSR) Force Stall (used by Control, Bulk and Isochronous Endpoints) Position */
#define UDP_CSR_FORCESTALL_Msk                (_U_(0x1) << UDP_CSR_FORCESTALL_Pos)                 /**< (UDP_CSR) Force Stall (used by Control, Bulk and Isochronous Endpoints) Mask */
#define UDP_CSR_FORCESTALL(value)             (UDP_CSR_FORCESTALL_Msk & ((value) << UDP_CSR_FORCESTALL_Pos))
#define UDP_CSR_RX_DATA_BK1_Pos               _U_(6)                                               /**< (UDP_CSR) Receive Data Bank 1 (only used by endpoints with ping-pong attributes) Position */
#define UDP_CSR_RX_DATA_BK1_Msk               (_U_(0x1) << UDP_CSR_RX_DATA_BK1_Pos)                /**< (UDP_CSR) Receive Data Bank 1 (only used by endpoints with ping-pong attributes) Mask */
#define UDP_CSR_RX_DATA_BK1(value)            (UDP_CSR_RX_DATA_BK1_Msk & ((value) << UDP_CSR_RX_DATA_BK1_Pos))
#define UDP_CSR_DIR_Pos                       _U_(7)                                               /**< (UDP_CSR) Transfer Direction (only available for control endpoints) (Read/Write) Position */
#define UDP_CSR_DIR_Msk                       (_U_(0x1) << UDP_CSR_DIR_Pos)                        /**< (UDP_CSR) Transfer Direction (only available for control endpoints) (Read/Write) Mask */
#define UDP_CSR_DIR(value)                    (UDP_CSR_DIR_Msk & ((value) << UDP_CSR_DIR_Pos))    
#define UDP_CSR_EPTYPE_Pos                    _U_(8)                                               /**< (UDP_CSR) Endpoint Type (Read/Write) Position */
#define UDP_CSR_EPTYPE_Msk                    (_U_(0x7) << UDP_CSR_EPTYPE_Pos)                     /**< (UDP_CSR) Endpoint Type (Read/Write) Mask */
#define UDP_CSR_EPTYPE(value)                 (UDP_CSR_EPTYPE_Msk & ((value) << UDP_CSR_EPTYPE_Pos))
#define   UDP_CSR_EPTYPE_CTRL_Val             _U_(0x0)                                             /**< (UDP_CSR) Control  */
#define   UDP_CSR_EPTYPE_ISO_OUT_Val          _U_(0x1)                                             /**< (UDP_CSR) Isochronous OUT  */
#define   UDP_CSR_EPTYPE_BULK_OUT_Val         _U_(0x2)                                             /**< (UDP_CSR) Bulk OUT  */
#define   UDP_CSR_EPTYPE_INT_OUT_Val          _U_(0x3)                                             /**< (UDP_CSR) Interrupt OUT  */
#define   UDP_CSR_EPTYPE_ISO_IN_Val           _U_(0x5)                                             /**< (UDP_CSR) Isochronous IN  */
#define   UDP_CSR_EPTYPE_BULK_IN_Val          _U_(0x6)                                             /**< (UDP_CSR) Bulk IN  */
#define   UDP_CSR_EPTYPE_INT_IN_Val           _U_(0x7)                                             /**< (UDP_CSR) Interrupt IN  */
#define UDP_CSR_EPTYPE_CTRL                   (UDP_CSR_EPTYPE_CTRL_Val << UDP_CSR_EPTYPE_Pos)      /**< (UDP_CSR) Control Position  */
#define UDP_CSR_EPTYPE_ISO_OUT                (UDP_CSR_EPTYPE_ISO_OUT_Val << UDP_CSR_EPTYPE_Pos)   /**< (UDP_CSR) Isochronous OUT Position  */
#define UDP_CSR_EPTYPE_BULK_OUT               (UDP_CSR_EPTYPE_BULK_OUT_Val << UDP_CSR_EPTYPE_Pos)  /**< (UDP_CSR) Bulk OUT Position  */
#define UDP_CSR_EPTYPE_INT_OUT                (UDP_CSR_EPTYPE_INT_OUT_Val << UDP_CSR_EPTYPE_Pos)   /**< (UDP_CSR) Interrupt OUT Position  */
#define UDP_CSR_EPTYPE_ISO_IN                 (UDP_CSR_EPTYPE_ISO_IN_Val << UDP_CSR_EPTYPE_Pos)    /**< (UDP_CSR) Isochronous IN Position  */
#define UDP_CSR_EPTYPE_BULK_IN                (UDP_CSR_EPTYPE_BULK_IN_Val << UDP_CSR_EPTYPE_Pos)   /**< (UDP_CSR) Bulk IN Position  */
#define UDP_CSR_EPTYPE_INT_IN                 (UDP_CSR_EPTYPE_INT_IN_Val << UDP_CSR_EPTYPE_Pos)    /**< (UDP_CSR) Interrupt IN Position  */
#define UDP_CSR_DTGLE_Pos                     _U_(11)                                              /**< (UDP_CSR) Data Toggle (Read-only) Position */
#define UDP_CSR_DTGLE_Msk                     (_U_(0x1) << UDP_CSR_DTGLE_Pos)                      /**< (UDP_CSR) Data Toggle (Read-only) Mask */
#define UDP_CSR_DTGLE(value)                  (UDP_CSR_DTGLE_Msk & ((value) << UDP_CSR_DTGLE_Pos))
#define UDP_CSR_EPEDS_Pos                     _U_(15)                                              /**< (UDP_CSR) Endpoint Enable Disable Position */
#define UDP_CSR_EPEDS_Msk                     (_U_(0x1) << UDP_CSR_EPEDS_Pos)                      /**< (UDP_CSR) Endpoint Enable Disable Mask */
#define UDP_CSR_EPEDS(value)                  (UDP_CSR_EPEDS_Msk & ((value) << UDP_CSR_EPEDS_Pos))
#define UDP_CSR_RXBYTECNT_Pos                 _U_(16)                                              /**< (UDP_CSR) Number of Bytes Available in the FIFO (Read-only) Position */
#define UDP_CSR_RXBYTECNT_Msk                 (_U_(0x7FF) << UDP_CSR_RXBYTECNT_Pos)                /**< (UDP_CSR) Number of Bytes Available in the FIFO (Read-only) Mask */
#define UDP_CSR_RXBYTECNT(value)              (UDP_CSR_RXBYTECNT_Msk & ((value) << UDP_CSR_RXBYTECNT_Pos))
#define UDP_CSR_Msk                           _U_(0x07FF8FFF)                                      /**< (UDP_CSR) Register Mask  */


/* -------- UDP_FDR : (UDP Offset: 0x50) (R/W 32) Endpoint FIFO Data Register 0 -------- */
#define UDP_FDR_FIFO_DATA_Pos                 _U_(0)                                               /**< (UDP_FDR) FIFO Data Value Position */
#define UDP_FDR_FIFO_DATA_Msk                 (_U_(0xFF) << UDP_FDR_FIFO_DATA_Pos)                 /**< (UDP_FDR) FIFO Data Value Mask */
#define UDP_FDR_FIFO_DATA(value)              (UDP_FDR_FIFO_DATA_Msk & ((value) << UDP_FDR_FIFO_DATA_Pos))
#define UDP_FDR_Msk                           _U_(0x000000FF)                                      /**< (UDP_FDR) Register Mask  */


/* -------- UDP_TXVC : (UDP Offset: 0x74) (R/W 32) Transceiver Control Register -------- */
#define UDP_TXVC_TXVDIS_Pos                   _U_(8)                                               /**< (UDP_TXVC) Transceiver Disable Position */
#define UDP_TXVC_TXVDIS_Msk                   (_U_(0x1) << UDP_TXVC_TXVDIS_Pos)                    /**< (UDP_TXVC) Transceiver Disable Mask */
#define UDP_TXVC_TXVDIS(value)                (UDP_TXVC_TXVDIS_Msk & ((value) << UDP_TXVC_TXVDIS_Pos))
#define UDP_TXVC_PUON_Pos                     _U_(9)                                               /**< (UDP_TXVC) Pull-up On Position */
#define UDP_TXVC_PUON_Msk                     (_U_(0x1) << UDP_TXVC_PUON_Pos)                      /**< (UDP_TXVC) Pull-up On Mask */
#define UDP_TXVC_PUON(value)                  (UDP_TXVC_PUON_Msk & ((value) << UDP_TXVC_PUON_Pos))
#define UDP_TXVC_Msk                          _U_(0x00000300)                                      /**< (UDP_TXVC) Register Mask  */


/** \brief UDP register offsets definitions */
#define UDP_FRM_NUM_REG_OFST           (0x00)              /**< (UDP_FRM_NUM) Frame Number Register Offset */
#define UDP_GLB_STAT_REG_OFST          (0x04)              /**< (UDP_GLB_STAT) Global State Register Offset */
#define UDP_FADDR_REG_OFST             (0x08)              /**< (UDP_FADDR) Function Address Register Offset */
#define UDP_IER_REG_OFST               (0x10)              /**< (UDP_IER) Interrupt Enable Register Offset */
#define UDP_IDR_REG_OFST               (0x14)              /**< (UDP_IDR) Interrupt Disable Register Offset */
#define UDP_IMR_REG_OFST               (0x18)              /**< (UDP_IMR) Interrupt Mask Register Offset */
#define UDP_ISR_REG_OFST               (0x1C)              /**< (UDP_ISR) Interrupt Status Register Offset */
#define UDP_ICR_REG_OFST               (0x20)              /**< (UDP_ICR) Interrupt Clear Register Offset */
#define UDP_RST_EP_REG_OFST            (0x28)              /**< (UDP_RST_EP) Reset Endpoint Register Offset */
#define UDP_CSR_REG_OFST               (0x30)              /**< (UDP_CSR) Endpoint Control and Status Register 0 Offset */
#define UDP_CSR0_REG_OFST              (0x30)              /**< (UDP_CSR0) Endpoint Control and Status Register 0 Offset */
#define UDP_CSR1_REG_OFST              (0x34)              /**< (UDP_CSR1) Endpoint Control and Status Register 0 Offset */
#define UDP_CSR2_REG_OFST              (0x38)              /**< (UDP_CSR2) Endpoint Control and Status Register 0 Offset */
#define UDP_CSR3_REG_OFST              (0x3C)              /**< (UDP_CSR3) Endpoint Control and Status Register 0 Offset */
#define UDP_CSR4_REG_OFST              (0x40)              /**< (UDP_CSR4) Endpoint Control and Status Register 0 Offset */
#define UDP_CSR5_REG_OFST              (0x44)              /**< (UDP_CSR5) Endpoint Control and Status Register 0 Offset */
#define UDP_FDR_REG_OFST               (0x50)              /**< (UDP_FDR) Endpoint FIFO Data Register 0 Offset */
#define UDP_FDR0_REG_OFST              (0x50)              /**< (UDP_FDR0) Endpoint FIFO Data Register 0 Offset */
#define UDP_FDR1_REG_OFST              (0x54)              /**< (UDP_FDR1) Endpoint FIFO Data Register 0 Offset */
#define UDP_FDR2_REG_OFST              (0x58)              /**< (UDP_FDR2) Endpoint FIFO Data Register 0 Offset */
#define UDP_FDR3_REG_OFST              (0x5C)              /**< (UDP_FDR3) Endpoint FIFO Data Register 0 Offset */
#define UDP_FDR4_REG_OFST              (0x60)              /**< (UDP_FDR4) Endpoint FIFO Data Register 0 Offset */
#define UDP_FDR5_REG_OFST              (0x64)              /**< (UDP_FDR5) Endpoint FIFO Data Register 0 Offset */
#define UDP_TXVC_REG_OFST              (0x74)              /**< (UDP_TXVC) Transceiver Control Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UDP register API structure */
typedef struct
{
  __I   uint32_t                       UDP_FRM_NUM;        /**< Offset: 0x00 (R/   32) Frame Number Register */
  __IO  uint32_t                       UDP_GLB_STAT;       /**< Offset: 0x04 (R/W  32) Global State Register */
  __IO  uint32_t                       UDP_FADDR;          /**< Offset: 0x08 (R/W  32) Function Address Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       UDP_IER;            /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       UDP_IDR;            /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       UDP_IMR;            /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       UDP_ISR;            /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __O   uint32_t                       UDP_ICR;            /**< Offset: 0x20 ( /W  32) Interrupt Clear Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       UDP_RST_EP;         /**< Offset: 0x28 (R/W  32) Reset Endpoint Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       UDP_CSR[6];         /**< Offset: 0x30 (R/W  32) Endpoint Control and Status Register 0 */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       UDP_FDR[6];         /**< Offset: 0x50 (R/W  32) Endpoint FIFO Data Register 0 */
  __I   uint8_t                        Reserved5[0x0C];
  __IO  uint32_t                       UDP_TXVC;           /**< Offset: 0x74 (R/W  32) Transceiver Control Register */
} udp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_UDP_COMPONENT_H_ */
