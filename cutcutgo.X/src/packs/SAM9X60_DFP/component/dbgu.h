/*
 * Component description for DBGU
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
#ifndef _SAM9X_DBGU_COMPONENT_H_
#define _SAM9X_DBGU_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DBGU                                         */
/* ************************************************************************** */

/* -------- DBGU_CR : (DBGU Offset: 0x00) ( /W 32) Control Register -------- */
#define DBGU_CR_RSTRX_Pos                     _U_(2)                                               /**< (DBGU_CR) Reset Receiver Position */
#define DBGU_CR_RSTRX_Msk                     (_U_(0x1) << DBGU_CR_RSTRX_Pos)                      /**< (DBGU_CR) Reset Receiver Mask */
#define DBGU_CR_RSTRX(value)                  (DBGU_CR_RSTRX_Msk & ((value) << DBGU_CR_RSTRX_Pos))
#define DBGU_CR_RSTTX_Pos                     _U_(3)                                               /**< (DBGU_CR) Reset Transmitter Position */
#define DBGU_CR_RSTTX_Msk                     (_U_(0x1) << DBGU_CR_RSTTX_Pos)                      /**< (DBGU_CR) Reset Transmitter Mask */
#define DBGU_CR_RSTTX(value)                  (DBGU_CR_RSTTX_Msk & ((value) << DBGU_CR_RSTTX_Pos))
#define DBGU_CR_RXEN_Pos                      _U_(4)                                               /**< (DBGU_CR) Receiver Enable Position */
#define DBGU_CR_RXEN_Msk                      (_U_(0x1) << DBGU_CR_RXEN_Pos)                       /**< (DBGU_CR) Receiver Enable Mask */
#define DBGU_CR_RXEN(value)                   (DBGU_CR_RXEN_Msk & ((value) << DBGU_CR_RXEN_Pos))  
#define DBGU_CR_RXDIS_Pos                     _U_(5)                                               /**< (DBGU_CR) Receiver Disable Position */
#define DBGU_CR_RXDIS_Msk                     (_U_(0x1) << DBGU_CR_RXDIS_Pos)                      /**< (DBGU_CR) Receiver Disable Mask */
#define DBGU_CR_RXDIS(value)                  (DBGU_CR_RXDIS_Msk & ((value) << DBGU_CR_RXDIS_Pos))
#define DBGU_CR_TXEN_Pos                      _U_(6)                                               /**< (DBGU_CR) Transmitter Enable Position */
#define DBGU_CR_TXEN_Msk                      (_U_(0x1) << DBGU_CR_TXEN_Pos)                       /**< (DBGU_CR) Transmitter Enable Mask */
#define DBGU_CR_TXEN(value)                   (DBGU_CR_TXEN_Msk & ((value) << DBGU_CR_TXEN_Pos))  
#define DBGU_CR_TXDIS_Pos                     _U_(7)                                               /**< (DBGU_CR) Transmitter Disable Position */
#define DBGU_CR_TXDIS_Msk                     (_U_(0x1) << DBGU_CR_TXDIS_Pos)                      /**< (DBGU_CR) Transmitter Disable Mask */
#define DBGU_CR_TXDIS(value)                  (DBGU_CR_TXDIS_Msk & ((value) << DBGU_CR_TXDIS_Pos))
#define DBGU_CR_RSTSTA_Pos                    _U_(8)                                               /**< (DBGU_CR) Reset Status Position */
#define DBGU_CR_RSTSTA_Msk                    (_U_(0x1) << DBGU_CR_RSTSTA_Pos)                     /**< (DBGU_CR) Reset Status Mask */
#define DBGU_CR_RSTSTA(value)                 (DBGU_CR_RSTSTA_Msk & ((value) << DBGU_CR_RSTSTA_Pos))
#define DBGU_CR_RETTO_Pos                     _U_(10)                                              /**< (DBGU_CR) Rearm Timeout Position */
#define DBGU_CR_RETTO_Msk                     (_U_(0x1) << DBGU_CR_RETTO_Pos)                      /**< (DBGU_CR) Rearm Timeout Mask */
#define DBGU_CR_RETTO(value)                  (DBGU_CR_RETTO_Msk & ((value) << DBGU_CR_RETTO_Pos))
#define DBGU_CR_STTTO_Pos                     _U_(11)                                              /**< (DBGU_CR) Start Timeout Position */
#define DBGU_CR_STTTO_Msk                     (_U_(0x1) << DBGU_CR_STTTO_Pos)                      /**< (DBGU_CR) Start Timeout Mask */
#define DBGU_CR_STTTO(value)                  (DBGU_CR_STTTO_Msk & ((value) << DBGU_CR_STTTO_Pos))
#define DBGU_CR_Msk                           _U_(0x00000DFC)                                      /**< (DBGU_CR) Register Mask  */


/* -------- DBGU_MR : (DBGU Offset: 0x04) (R/W 32) Mode Register -------- */
#define DBGU_MR_FILTER_Pos                    _U_(4)                                               /**< (DBGU_MR) Receiver Digital Filter Position */
#define DBGU_MR_FILTER_Msk                    (_U_(0x1) << DBGU_MR_FILTER_Pos)                     /**< (DBGU_MR) Receiver Digital Filter Mask */
#define DBGU_MR_FILTER(value)                 (DBGU_MR_FILTER_Msk & ((value) << DBGU_MR_FILTER_Pos))
#define   DBGU_MR_FILTER_DISABLED_Val         _U_(0x0)                                             /**< (DBGU_MR) DBGU does not filter the receive line.  */
#define   DBGU_MR_FILTER_ENABLED_Val          _U_(0x1)                                             /**< (DBGU_MR) DBGU filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority).  */
#define DBGU_MR_FILTER_DISABLED               (DBGU_MR_FILTER_DISABLED_Val << DBGU_MR_FILTER_Pos)  /**< (DBGU_MR) DBGU does not filter the receive line. Position  */
#define DBGU_MR_FILTER_ENABLED                (DBGU_MR_FILTER_ENABLED_Val << DBGU_MR_FILTER_Pos)   /**< (DBGU_MR) DBGU filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority). Position  */
#define DBGU_MR_PAR_Pos                       _U_(9)                                               /**< (DBGU_MR) Parity Type Position */
#define DBGU_MR_PAR_Msk                       (_U_(0x7) << DBGU_MR_PAR_Pos)                        /**< (DBGU_MR) Parity Type Mask */
#define DBGU_MR_PAR(value)                    (DBGU_MR_PAR_Msk & ((value) << DBGU_MR_PAR_Pos))    
#define   DBGU_MR_PAR_EVEN_Val                _U_(0x0)                                             /**< (DBGU_MR) Even Parity  */
#define   DBGU_MR_PAR_ODD_Val                 _U_(0x1)                                             /**< (DBGU_MR) Odd Parity  */
#define   DBGU_MR_PAR_SPACE_Val               _U_(0x2)                                             /**< (DBGU_MR) Space: parity forced to 0  */
#define   DBGU_MR_PAR_MARK_Val                _U_(0x3)                                             /**< (DBGU_MR) Mark: parity forced to 1  */
#define   DBGU_MR_PAR_NO_Val                  _U_(0x4)                                             /**< (DBGU_MR) No parity  */
#define DBGU_MR_PAR_EVEN                      (DBGU_MR_PAR_EVEN_Val << DBGU_MR_PAR_Pos)            /**< (DBGU_MR) Even Parity Position  */
#define DBGU_MR_PAR_ODD                       (DBGU_MR_PAR_ODD_Val << DBGU_MR_PAR_Pos)             /**< (DBGU_MR) Odd Parity Position  */
#define DBGU_MR_PAR_SPACE                     (DBGU_MR_PAR_SPACE_Val << DBGU_MR_PAR_Pos)           /**< (DBGU_MR) Space: parity forced to 0 Position  */
#define DBGU_MR_PAR_MARK                      (DBGU_MR_PAR_MARK_Val << DBGU_MR_PAR_Pos)            /**< (DBGU_MR) Mark: parity forced to 1 Position  */
#define DBGU_MR_PAR_NO                        (DBGU_MR_PAR_NO_Val << DBGU_MR_PAR_Pos)              /**< (DBGU_MR) No parity Position  */
#define DBGU_MR_BRSRCCK_Pos                   _U_(12)                                              /**< (DBGU_MR) Baud Rate Source Clock Position */
#define DBGU_MR_BRSRCCK_Msk                   (_U_(0x1) << DBGU_MR_BRSRCCK_Pos)                    /**< (DBGU_MR) Baud Rate Source Clock Mask */
#define DBGU_MR_BRSRCCK(value)                (DBGU_MR_BRSRCCK_Msk & ((value) << DBGU_MR_BRSRCCK_Pos))
#define   DBGU_MR_BRSRCCK_PERIPH_CLK_Val      _U_(0x0)                                             /**< (DBGU_MR) The baud rate is driven by the peripheral clock  */
#define   DBGU_MR_BRSRCCK_GCLK_Val            _U_(0x1)                                             /**< (DBGU_MR) The baud rate is driven by a PMC-programmable clock GCLK (see section Power Management Controller (PMC)).  */
#define DBGU_MR_BRSRCCK_PERIPH_CLK            (DBGU_MR_BRSRCCK_PERIPH_CLK_Val << DBGU_MR_BRSRCCK_Pos) /**< (DBGU_MR) The baud rate is driven by the peripheral clock Position  */
#define DBGU_MR_BRSRCCK_GCLK                  (DBGU_MR_BRSRCCK_GCLK_Val << DBGU_MR_BRSRCCK_Pos)    /**< (DBGU_MR) The baud rate is driven by a PMC-programmable clock GCLK (see section Power Management Controller (PMC)). Position  */
#define DBGU_MR_CHMODE_Pos                    _U_(14)                                              /**< (DBGU_MR) Channel Mode Position */
#define DBGU_MR_CHMODE_Msk                    (_U_(0x3) << DBGU_MR_CHMODE_Pos)                     /**< (DBGU_MR) Channel Mode Mask */
#define DBGU_MR_CHMODE(value)                 (DBGU_MR_CHMODE_Msk & ((value) << DBGU_MR_CHMODE_Pos))
#define   DBGU_MR_CHMODE_NORMAL_Val           _U_(0x0)                                             /**< (DBGU_MR) Normal mode  */
#define   DBGU_MR_CHMODE_AUTOMATIC_Val        _U_(0x1)                                             /**< (DBGU_MR) Automatic echo  */
#define   DBGU_MR_CHMODE_LOCAL_LOOPBACK_Val   _U_(0x2)                                             /**< (DBGU_MR) Local loopback  */
#define   DBGU_MR_CHMODE_REMOTE_LOOPBACK_Val  _U_(0x3)                                             /**< (DBGU_MR) Remote loopback  */
#define DBGU_MR_CHMODE_NORMAL                 (DBGU_MR_CHMODE_NORMAL_Val << DBGU_MR_CHMODE_Pos)    /**< (DBGU_MR) Normal mode Position  */
#define DBGU_MR_CHMODE_AUTOMATIC              (DBGU_MR_CHMODE_AUTOMATIC_Val << DBGU_MR_CHMODE_Pos) /**< (DBGU_MR) Automatic echo Position  */
#define DBGU_MR_CHMODE_LOCAL_LOOPBACK         (DBGU_MR_CHMODE_LOCAL_LOOPBACK_Val << DBGU_MR_CHMODE_Pos) /**< (DBGU_MR) Local loopback Position  */
#define DBGU_MR_CHMODE_REMOTE_LOOPBACK        (DBGU_MR_CHMODE_REMOTE_LOOPBACK_Val << DBGU_MR_CHMODE_Pos) /**< (DBGU_MR) Remote loopback Position  */
#define DBGU_MR_Msk                           _U_(0x0000DE10)                                      /**< (DBGU_MR) Register Mask  */


/* -------- DBGU_IER : (DBGU Offset: 0x08) ( /W 32) Interrupt Enable Register -------- */
#define DBGU_IER_RXRDY_Pos                    _U_(0)                                               /**< (DBGU_IER) Enable RXRDY Interrupt Position */
#define DBGU_IER_RXRDY_Msk                    (_U_(0x1) << DBGU_IER_RXRDY_Pos)                     /**< (DBGU_IER) Enable RXRDY Interrupt Mask */
#define DBGU_IER_RXRDY(value)                 (DBGU_IER_RXRDY_Msk & ((value) << DBGU_IER_RXRDY_Pos))
#define DBGU_IER_TXRDY_Pos                    _U_(1)                                               /**< (DBGU_IER) Enable TXRDY Interrupt Position */
#define DBGU_IER_TXRDY_Msk                    (_U_(0x1) << DBGU_IER_TXRDY_Pos)                     /**< (DBGU_IER) Enable TXRDY Interrupt Mask */
#define DBGU_IER_TXRDY(value)                 (DBGU_IER_TXRDY_Msk & ((value) << DBGU_IER_TXRDY_Pos))
#define DBGU_IER_OVRE_Pos                     _U_(5)                                               /**< (DBGU_IER) Enable Overrun Error Interrupt Position */
#define DBGU_IER_OVRE_Msk                     (_U_(0x1) << DBGU_IER_OVRE_Pos)                      /**< (DBGU_IER) Enable Overrun Error Interrupt Mask */
#define DBGU_IER_OVRE(value)                  (DBGU_IER_OVRE_Msk & ((value) << DBGU_IER_OVRE_Pos))
#define DBGU_IER_FRAME_Pos                    _U_(6)                                               /**< (DBGU_IER) Enable Framing Error Interrupt Position */
#define DBGU_IER_FRAME_Msk                    (_U_(0x1) << DBGU_IER_FRAME_Pos)                     /**< (DBGU_IER) Enable Framing Error Interrupt Mask */
#define DBGU_IER_FRAME(value)                 (DBGU_IER_FRAME_Msk & ((value) << DBGU_IER_FRAME_Pos))
#define DBGU_IER_PARE_Pos                     _U_(7)                                               /**< (DBGU_IER) Enable Parity Error Interrupt Position */
#define DBGU_IER_PARE_Msk                     (_U_(0x1) << DBGU_IER_PARE_Pos)                      /**< (DBGU_IER) Enable Parity Error Interrupt Mask */
#define DBGU_IER_PARE(value)                  (DBGU_IER_PARE_Msk & ((value) << DBGU_IER_PARE_Pos))
#define DBGU_IER_TIMEOUT_Pos                  _U_(8)                                               /**< (DBGU_IER) Enable Timeout Interrupt Position */
#define DBGU_IER_TIMEOUT_Msk                  (_U_(0x1) << DBGU_IER_TIMEOUT_Pos)                   /**< (DBGU_IER) Enable Timeout Interrupt Mask */
#define DBGU_IER_TIMEOUT(value)               (DBGU_IER_TIMEOUT_Msk & ((value) << DBGU_IER_TIMEOUT_Pos))
#define DBGU_IER_TXEMPTY_Pos                  _U_(9)                                               /**< (DBGU_IER) Enable TXEMPTY Interrupt Position */
#define DBGU_IER_TXEMPTY_Msk                  (_U_(0x1) << DBGU_IER_TXEMPTY_Pos)                   /**< (DBGU_IER) Enable TXEMPTY Interrupt Mask */
#define DBGU_IER_TXEMPTY(value)               (DBGU_IER_TXEMPTY_Msk & ((value) << DBGU_IER_TXEMPTY_Pos))
#define DBGU_IER_COMMTX_Pos                   _U_(30)                                              /**< (DBGU_IER) Enable COMMTX (from ARM) Interrupt Position */
#define DBGU_IER_COMMTX_Msk                   (_U_(0x1) << DBGU_IER_COMMTX_Pos)                    /**< (DBGU_IER) Enable COMMTX (from ARM) Interrupt Mask */
#define DBGU_IER_COMMTX(value)                (DBGU_IER_COMMTX_Msk & ((value) << DBGU_IER_COMMTX_Pos))
#define DBGU_IER_COMMRX_Pos                   _U_(31)                                              /**< (DBGU_IER) Enable COMMRX (from ARM) Interrupt Position */
#define DBGU_IER_COMMRX_Msk                   (_U_(0x1) << DBGU_IER_COMMRX_Pos)                    /**< (DBGU_IER) Enable COMMRX (from ARM) Interrupt Mask */
#define DBGU_IER_COMMRX(value)                (DBGU_IER_COMMRX_Msk & ((value) << DBGU_IER_COMMRX_Pos))
#define DBGU_IER_Msk                          _U_(0xC00003E3)                                      /**< (DBGU_IER) Register Mask  */


/* -------- DBGU_IDR : (DBGU Offset: 0x0C) ( /W 32) Interrupt Disable Register -------- */
#define DBGU_IDR_RXRDY_Pos                    _U_(0)                                               /**< (DBGU_IDR) Disable RXRDY Interrupt Position */
#define DBGU_IDR_RXRDY_Msk                    (_U_(0x1) << DBGU_IDR_RXRDY_Pos)                     /**< (DBGU_IDR) Disable RXRDY Interrupt Mask */
#define DBGU_IDR_RXRDY(value)                 (DBGU_IDR_RXRDY_Msk & ((value) << DBGU_IDR_RXRDY_Pos))
#define DBGU_IDR_TXRDY_Pos                    _U_(1)                                               /**< (DBGU_IDR) Disable TXRDY Interrupt Position */
#define DBGU_IDR_TXRDY_Msk                    (_U_(0x1) << DBGU_IDR_TXRDY_Pos)                     /**< (DBGU_IDR) Disable TXRDY Interrupt Mask */
#define DBGU_IDR_TXRDY(value)                 (DBGU_IDR_TXRDY_Msk & ((value) << DBGU_IDR_TXRDY_Pos))
#define DBGU_IDR_OVRE_Pos                     _U_(5)                                               /**< (DBGU_IDR) Disable Overrun Error Interrupt Position */
#define DBGU_IDR_OVRE_Msk                     (_U_(0x1) << DBGU_IDR_OVRE_Pos)                      /**< (DBGU_IDR) Disable Overrun Error Interrupt Mask */
#define DBGU_IDR_OVRE(value)                  (DBGU_IDR_OVRE_Msk & ((value) << DBGU_IDR_OVRE_Pos))
#define DBGU_IDR_FRAME_Pos                    _U_(6)                                               /**< (DBGU_IDR) Disable Framing Error Interrupt Position */
#define DBGU_IDR_FRAME_Msk                    (_U_(0x1) << DBGU_IDR_FRAME_Pos)                     /**< (DBGU_IDR) Disable Framing Error Interrupt Mask */
#define DBGU_IDR_FRAME(value)                 (DBGU_IDR_FRAME_Msk & ((value) << DBGU_IDR_FRAME_Pos))
#define DBGU_IDR_PARE_Pos                     _U_(7)                                               /**< (DBGU_IDR) Disable Parity Error Interrupt Position */
#define DBGU_IDR_PARE_Msk                     (_U_(0x1) << DBGU_IDR_PARE_Pos)                      /**< (DBGU_IDR) Disable Parity Error Interrupt Mask */
#define DBGU_IDR_PARE(value)                  (DBGU_IDR_PARE_Msk & ((value) << DBGU_IDR_PARE_Pos))
#define DBGU_IDR_TIMEOUT_Pos                  _U_(8)                                               /**< (DBGU_IDR) Disable Timeout Interrupt Position */
#define DBGU_IDR_TIMEOUT_Msk                  (_U_(0x1) << DBGU_IDR_TIMEOUT_Pos)                   /**< (DBGU_IDR) Disable Timeout Interrupt Mask */
#define DBGU_IDR_TIMEOUT(value)               (DBGU_IDR_TIMEOUT_Msk & ((value) << DBGU_IDR_TIMEOUT_Pos))
#define DBGU_IDR_TXEMPTY_Pos                  _U_(9)                                               /**< (DBGU_IDR) Disable TXEMPTY Interrupt Position */
#define DBGU_IDR_TXEMPTY_Msk                  (_U_(0x1) << DBGU_IDR_TXEMPTY_Pos)                   /**< (DBGU_IDR) Disable TXEMPTY Interrupt Mask */
#define DBGU_IDR_TXEMPTY(value)               (DBGU_IDR_TXEMPTY_Msk & ((value) << DBGU_IDR_TXEMPTY_Pos))
#define DBGU_IDR_COMMTX_Pos                   _U_(30)                                              /**< (DBGU_IDR) Disable COMMTX (from ARM) Interrupt Position */
#define DBGU_IDR_COMMTX_Msk                   (_U_(0x1) << DBGU_IDR_COMMTX_Pos)                    /**< (DBGU_IDR) Disable COMMTX (from ARM) Interrupt Mask */
#define DBGU_IDR_COMMTX(value)                (DBGU_IDR_COMMTX_Msk & ((value) << DBGU_IDR_COMMTX_Pos))
#define DBGU_IDR_COMMRX_Pos                   _U_(31)                                              /**< (DBGU_IDR) Disable COMMRX (from ARM) Interrupt Position */
#define DBGU_IDR_COMMRX_Msk                   (_U_(0x1) << DBGU_IDR_COMMRX_Pos)                    /**< (DBGU_IDR) Disable COMMRX (from ARM) Interrupt Mask */
#define DBGU_IDR_COMMRX(value)                (DBGU_IDR_COMMRX_Msk & ((value) << DBGU_IDR_COMMRX_Pos))
#define DBGU_IDR_Msk                          _U_(0xC00003E3)                                      /**< (DBGU_IDR) Register Mask  */


/* -------- DBGU_IMR : (DBGU Offset: 0x10) ( R/ 32) Interrupt Mask Register -------- */
#define DBGU_IMR_RXRDY_Pos                    _U_(0)                                               /**< (DBGU_IMR) Mask RXRDY Interrupt Position */
#define DBGU_IMR_RXRDY_Msk                    (_U_(0x1) << DBGU_IMR_RXRDY_Pos)                     /**< (DBGU_IMR) Mask RXRDY Interrupt Mask */
#define DBGU_IMR_RXRDY(value)                 (DBGU_IMR_RXRDY_Msk & ((value) << DBGU_IMR_RXRDY_Pos))
#define DBGU_IMR_TXRDY_Pos                    _U_(1)                                               /**< (DBGU_IMR) Disable TXRDY Interrupt Position */
#define DBGU_IMR_TXRDY_Msk                    (_U_(0x1) << DBGU_IMR_TXRDY_Pos)                     /**< (DBGU_IMR) Disable TXRDY Interrupt Mask */
#define DBGU_IMR_TXRDY(value)                 (DBGU_IMR_TXRDY_Msk & ((value) << DBGU_IMR_TXRDY_Pos))
#define DBGU_IMR_OVRE_Pos                     _U_(5)                                               /**< (DBGU_IMR) Mask Overrun Error Interrupt Position */
#define DBGU_IMR_OVRE_Msk                     (_U_(0x1) << DBGU_IMR_OVRE_Pos)                      /**< (DBGU_IMR) Mask Overrun Error Interrupt Mask */
#define DBGU_IMR_OVRE(value)                  (DBGU_IMR_OVRE_Msk & ((value) << DBGU_IMR_OVRE_Pos))
#define DBGU_IMR_FRAME_Pos                    _U_(6)                                               /**< (DBGU_IMR) Mask Framing Error Interrupt Position */
#define DBGU_IMR_FRAME_Msk                    (_U_(0x1) << DBGU_IMR_FRAME_Pos)                     /**< (DBGU_IMR) Mask Framing Error Interrupt Mask */
#define DBGU_IMR_FRAME(value)                 (DBGU_IMR_FRAME_Msk & ((value) << DBGU_IMR_FRAME_Pos))
#define DBGU_IMR_PARE_Pos                     _U_(7)                                               /**< (DBGU_IMR) Mask Parity Error Interrupt Position */
#define DBGU_IMR_PARE_Msk                     (_U_(0x1) << DBGU_IMR_PARE_Pos)                      /**< (DBGU_IMR) Mask Parity Error Interrupt Mask */
#define DBGU_IMR_PARE(value)                  (DBGU_IMR_PARE_Msk & ((value) << DBGU_IMR_PARE_Pos))
#define DBGU_IMR_TIMEOUT_Pos                  _U_(8)                                               /**< (DBGU_IMR) Mask Timeout Interrupt Position */
#define DBGU_IMR_TIMEOUT_Msk                  (_U_(0x1) << DBGU_IMR_TIMEOUT_Pos)                   /**< (DBGU_IMR) Mask Timeout Interrupt Mask */
#define DBGU_IMR_TIMEOUT(value)               (DBGU_IMR_TIMEOUT_Msk & ((value) << DBGU_IMR_TIMEOUT_Pos))
#define DBGU_IMR_TXEMPTY_Pos                  _U_(9)                                               /**< (DBGU_IMR) Mask TXEMPTY Interrupt Position */
#define DBGU_IMR_TXEMPTY_Msk                  (_U_(0x1) << DBGU_IMR_TXEMPTY_Pos)                   /**< (DBGU_IMR) Mask TXEMPTY Interrupt Mask */
#define DBGU_IMR_TXEMPTY(value)               (DBGU_IMR_TXEMPTY_Msk & ((value) << DBGU_IMR_TXEMPTY_Pos))
#define DBGU_IMR_COMMTX_Pos                   _U_(30)                                              /**< (DBGU_IMR) Mask COMMTX (from ARM) Interrupt Position */
#define DBGU_IMR_COMMTX_Msk                   (_U_(0x1) << DBGU_IMR_COMMTX_Pos)                    /**< (DBGU_IMR) Mask COMMTX (from ARM) Interrupt Mask */
#define DBGU_IMR_COMMTX(value)                (DBGU_IMR_COMMTX_Msk & ((value) << DBGU_IMR_COMMTX_Pos))
#define DBGU_IMR_COMMRX_Pos                   _U_(31)                                              /**< (DBGU_IMR) Mask COMMRX (from ARM) Interrupt Position */
#define DBGU_IMR_COMMRX_Msk                   (_U_(0x1) << DBGU_IMR_COMMRX_Pos)                    /**< (DBGU_IMR) Mask COMMRX (from ARM) Interrupt Mask */
#define DBGU_IMR_COMMRX(value)                (DBGU_IMR_COMMRX_Msk & ((value) << DBGU_IMR_COMMRX_Pos))
#define DBGU_IMR_Msk                          _U_(0xC00003E3)                                      /**< (DBGU_IMR) Register Mask  */


/* -------- DBGU_SR : (DBGU Offset: 0x14) ( R/ 32) Status Register -------- */
#define DBGU_SR_RXRDY_Pos                     _U_(0)                                               /**< (DBGU_SR) Receiver Ready Position */
#define DBGU_SR_RXRDY_Msk                     (_U_(0x1) << DBGU_SR_RXRDY_Pos)                      /**< (DBGU_SR) Receiver Ready Mask */
#define DBGU_SR_RXRDY(value)                  (DBGU_SR_RXRDY_Msk & ((value) << DBGU_SR_RXRDY_Pos))
#define DBGU_SR_TXRDY_Pos                     _U_(1)                                               /**< (DBGU_SR) Transmitter Ready Position */
#define DBGU_SR_TXRDY_Msk                     (_U_(0x1) << DBGU_SR_TXRDY_Pos)                      /**< (DBGU_SR) Transmitter Ready Mask */
#define DBGU_SR_TXRDY(value)                  (DBGU_SR_TXRDY_Msk & ((value) << DBGU_SR_TXRDY_Pos))
#define DBGU_SR_OVRE_Pos                      _U_(5)                                               /**< (DBGU_SR) Overrun Error Position */
#define DBGU_SR_OVRE_Msk                      (_U_(0x1) << DBGU_SR_OVRE_Pos)                       /**< (DBGU_SR) Overrun Error Mask */
#define DBGU_SR_OVRE(value)                   (DBGU_SR_OVRE_Msk & ((value) << DBGU_SR_OVRE_Pos))  
#define DBGU_SR_FRAME_Pos                     _U_(6)                                               /**< (DBGU_SR) Framing Error Position */
#define DBGU_SR_FRAME_Msk                     (_U_(0x1) << DBGU_SR_FRAME_Pos)                      /**< (DBGU_SR) Framing Error Mask */
#define DBGU_SR_FRAME(value)                  (DBGU_SR_FRAME_Msk & ((value) << DBGU_SR_FRAME_Pos))
#define DBGU_SR_PARE_Pos                      _U_(7)                                               /**< (DBGU_SR) Parity Error Position */
#define DBGU_SR_PARE_Msk                      (_U_(0x1) << DBGU_SR_PARE_Pos)                       /**< (DBGU_SR) Parity Error Mask */
#define DBGU_SR_PARE(value)                   (DBGU_SR_PARE_Msk & ((value) << DBGU_SR_PARE_Pos))  
#define DBGU_SR_TIMEOUT_Pos                   _U_(8)                                               /**< (DBGU_SR) Receiver Timeout Position */
#define DBGU_SR_TIMEOUT_Msk                   (_U_(0x1) << DBGU_SR_TIMEOUT_Pos)                    /**< (DBGU_SR) Receiver Timeout Mask */
#define DBGU_SR_TIMEOUT(value)                (DBGU_SR_TIMEOUT_Msk & ((value) << DBGU_SR_TIMEOUT_Pos))
#define DBGU_SR_TXEMPTY_Pos                   _U_(9)                                               /**< (DBGU_SR) Transmitter Empty Position */
#define DBGU_SR_TXEMPTY_Msk                   (_U_(0x1) << DBGU_SR_TXEMPTY_Pos)                    /**< (DBGU_SR) Transmitter Empty Mask */
#define DBGU_SR_TXEMPTY(value)                (DBGU_SR_TXEMPTY_Msk & ((value) << DBGU_SR_TXEMPTY_Pos))
#define DBGU_SR_COMMTX_Pos                    _U_(30)                                              /**< (DBGU_SR) Debug Communication Channel Write Status Position */
#define DBGU_SR_COMMTX_Msk                    (_U_(0x1) << DBGU_SR_COMMTX_Pos)                     /**< (DBGU_SR) Debug Communication Channel Write Status Mask */
#define DBGU_SR_COMMTX(value)                 (DBGU_SR_COMMTX_Msk & ((value) << DBGU_SR_COMMTX_Pos))
#define DBGU_SR_COMMRX_Pos                    _U_(31)                                              /**< (DBGU_SR) Debug Communication Channel Read Status Position */
#define DBGU_SR_COMMRX_Msk                    (_U_(0x1) << DBGU_SR_COMMRX_Pos)                     /**< (DBGU_SR) Debug Communication Channel Read Status Mask */
#define DBGU_SR_COMMRX(value)                 (DBGU_SR_COMMRX_Msk & ((value) << DBGU_SR_COMMRX_Pos))
#define DBGU_SR_Msk                           _U_(0xC00003E3)                                      /**< (DBGU_SR) Register Mask  */


/* -------- DBGU_RHR : (DBGU Offset: 0x18) ( R/ 32) Receive Holding Register -------- */
#define DBGU_RHR_RXCHR_Pos                    _U_(0)                                               /**< (DBGU_RHR) Received Character Position */
#define DBGU_RHR_RXCHR_Msk                    (_U_(0xFF) << DBGU_RHR_RXCHR_Pos)                    /**< (DBGU_RHR) Received Character Mask */
#define DBGU_RHR_RXCHR(value)                 (DBGU_RHR_RXCHR_Msk & ((value) << DBGU_RHR_RXCHR_Pos))
#define DBGU_RHR_Msk                          _U_(0x000000FF)                                      /**< (DBGU_RHR) Register Mask  */


/* -------- DBGU_THR : (DBGU Offset: 0x1C) ( /W 32) Transmit Holding Register -------- */
#define DBGU_THR_TXCHR_Pos                    _U_(0)                                               /**< (DBGU_THR) Character to be Transmitted Position */
#define DBGU_THR_TXCHR_Msk                    (_U_(0xFF) << DBGU_THR_TXCHR_Pos)                    /**< (DBGU_THR) Character to be Transmitted Mask */
#define DBGU_THR_TXCHR(value)                 (DBGU_THR_TXCHR_Msk & ((value) << DBGU_THR_TXCHR_Pos))
#define DBGU_THR_Msk                          _U_(0x000000FF)                                      /**< (DBGU_THR) Register Mask  */


/* -------- DBGU_BRGR : (DBGU Offset: 0x20) (R/W 32) Baud Rate Generator Register -------- */
#define DBGU_BRGR_CD_Pos                      _U_(0)                                               /**< (DBGU_BRGR) Clock Divisor Position */
#define DBGU_BRGR_CD_Msk                      (_U_(0xFFFF) << DBGU_BRGR_CD_Pos)                    /**< (DBGU_BRGR) Clock Divisor Mask */
#define DBGU_BRGR_CD(value)                   (DBGU_BRGR_CD_Msk & ((value) << DBGU_BRGR_CD_Pos))  
#define DBGU_BRGR_Msk                         _U_(0x0000FFFF)                                      /**< (DBGU_BRGR) Register Mask  */


/* -------- DBGU_RTOR : (DBGU Offset: 0x28) (R/W 32) Receiver Timeout Register -------- */
#define DBGU_RTOR_TO_Pos                      _U_(0)                                               /**< (DBGU_RTOR) Timeout Value Position */
#define DBGU_RTOR_TO_Msk                      (_U_(0xFF) << DBGU_RTOR_TO_Pos)                      /**< (DBGU_RTOR) Timeout Value Mask */
#define DBGU_RTOR_TO(value)                   (DBGU_RTOR_TO_Msk & ((value) << DBGU_RTOR_TO_Pos))  
#define DBGU_RTOR_Msk                         _U_(0x000000FF)                                      /**< (DBGU_RTOR) Register Mask  */


/* -------- DBGU_CIDR : (DBGU Offset: 0x40) ( R/ 32) Chip ID Register -------- */
#define DBGU_CIDR_CHID_Pos                    _U_(0)                                               /**< (DBGU_CIDR) Chip ID Value Position */
#define DBGU_CIDR_CHID_Msk                    (_U_(0x7FFFFFFF) << DBGU_CIDR_CHID_Pos)              /**< (DBGU_CIDR) Chip ID Value Mask */
#define DBGU_CIDR_CHID(value)                 (DBGU_CIDR_CHID_Msk & ((value) << DBGU_CIDR_CHID_Pos))
#define DBGU_CIDR_EXT_Pos                     _U_(31)                                              /**< (DBGU_CIDR) Extension Flag Position */
#define DBGU_CIDR_EXT_Msk                     (_U_(0x1) << DBGU_CIDR_EXT_Pos)                      /**< (DBGU_CIDR) Extension Flag Mask */
#define DBGU_CIDR_EXT(value)                  (DBGU_CIDR_EXT_Msk & ((value) << DBGU_CIDR_EXT_Pos))
#define DBGU_CIDR_Msk                         _U_(0xFFFFFFFF)                                      /**< (DBGU_CIDR) Register Mask  */


/* -------- DBGU_EXID : (DBGU Offset: 0x44) ( R/ 32) Chip ID Extension Register -------- */
#define DBGU_EXID_EXID_Pos                    _U_(0)                                               /**< (DBGU_EXID) Chip ID Extension Position */
#define DBGU_EXID_EXID_Msk                    (_U_(0xFFFFFFFF) << DBGU_EXID_EXID_Pos)              /**< (DBGU_EXID) Chip ID Extension Mask */
#define DBGU_EXID_EXID(value)                 (DBGU_EXID_EXID_Msk & ((value) << DBGU_EXID_EXID_Pos))
#define DBGU_EXID_Msk                         _U_(0xFFFFFFFF)                                      /**< (DBGU_EXID) Register Mask  */


/* -------- DBGU_FNR : (DBGU Offset: 0x48) (R/W 32) Force NTRST Register -------- */
#define DBGU_FNR_FNTRST_Pos                   _U_(0)                                               /**< (DBGU_FNR) Force NTRST Position */
#define DBGU_FNR_FNTRST_Msk                   (_U_(0x1) << DBGU_FNR_FNTRST_Pos)                    /**< (DBGU_FNR) Force NTRST Mask */
#define DBGU_FNR_FNTRST(value)                (DBGU_FNR_FNTRST_Msk & ((value) << DBGU_FNR_FNTRST_Pos))
#define DBGU_FNR_Msk                          _U_(0x00000001)                                      /**< (DBGU_FNR) Register Mask  */


/* -------- DBGU_WPMR : (DBGU Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define DBGU_WPMR_WPEN_Pos                    _U_(0)                                               /**< (DBGU_WPMR) Write Protection Enable Position */
#define DBGU_WPMR_WPEN_Msk                    (_U_(0x1) << DBGU_WPMR_WPEN_Pos)                     /**< (DBGU_WPMR) Write Protection Enable Mask */
#define DBGU_WPMR_WPEN(value)                 (DBGU_WPMR_WPEN_Msk & ((value) << DBGU_WPMR_WPEN_Pos))
#define DBGU_WPMR_WPKEY_Pos                   _U_(8)                                               /**< (DBGU_WPMR) Write Protection Key Position */
#define DBGU_WPMR_WPKEY_Msk                   (_U_(0xFFFFFF) << DBGU_WPMR_WPKEY_Pos)               /**< (DBGU_WPMR) Write Protection Key Mask */
#define DBGU_WPMR_WPKEY(value)                (DBGU_WPMR_WPKEY_Msk & ((value) << DBGU_WPMR_WPKEY_Pos))
#define   DBGU_WPMR_WPKEY_PASSWD_Val          _U_(0x554152)                                        /**< (DBGU_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define DBGU_WPMR_WPKEY_PASSWD                (DBGU_WPMR_WPKEY_PASSWD_Val << DBGU_WPMR_WPKEY_Pos)  /**< (DBGU_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define DBGU_WPMR_Msk                         _U_(0xFFFFFF01)                                      /**< (DBGU_WPMR) Register Mask  */


/** \brief DBGU register offsets definitions */
#define DBGU_CR_REG_OFST               (0x00)              /**< (DBGU_CR) Control Register Offset */
#define DBGU_MR_REG_OFST               (0x04)              /**< (DBGU_MR) Mode Register Offset */
#define DBGU_IER_REG_OFST              (0x08)              /**< (DBGU_IER) Interrupt Enable Register Offset */
#define DBGU_IDR_REG_OFST              (0x0C)              /**< (DBGU_IDR) Interrupt Disable Register Offset */
#define DBGU_IMR_REG_OFST              (0x10)              /**< (DBGU_IMR) Interrupt Mask Register Offset */
#define DBGU_SR_REG_OFST               (0x14)              /**< (DBGU_SR) Status Register Offset */
#define DBGU_RHR_REG_OFST              (0x18)              /**< (DBGU_RHR) Receive Holding Register Offset */
#define DBGU_THR_REG_OFST              (0x1C)              /**< (DBGU_THR) Transmit Holding Register Offset */
#define DBGU_BRGR_REG_OFST             (0x20)              /**< (DBGU_BRGR) Baud Rate Generator Register Offset */
#define DBGU_RTOR_REG_OFST             (0x28)              /**< (DBGU_RTOR) Receiver Timeout Register Offset */
#define DBGU_CIDR_REG_OFST             (0x40)              /**< (DBGU_CIDR) Chip ID Register Offset */
#define DBGU_EXID_REG_OFST             (0x44)              /**< (DBGU_EXID) Chip ID Extension Register Offset */
#define DBGU_FNR_REG_OFST              (0x48)              /**< (DBGU_FNR) Force NTRST Register Offset */
#define DBGU_WPMR_REG_OFST             (0xE4)              /**< (DBGU_WPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DBGU register API structure */
typedef struct
{
  __O   uint32_t                       DBGU_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       DBGU_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __O   uint32_t                       DBGU_IER;           /**< Offset: 0x08 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       DBGU_IDR;           /**< Offset: 0x0C ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       DBGU_IMR;           /**< Offset: 0x10 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       DBGU_SR;            /**< Offset: 0x14 (R/   32) Status Register */
  __I   uint32_t                       DBGU_RHR;           /**< Offset: 0x18 (R/   32) Receive Holding Register */
  __O   uint32_t                       DBGU_THR;           /**< Offset: 0x1C ( /W  32) Transmit Holding Register */
  __IO  uint32_t                       DBGU_BRGR;          /**< Offset: 0x20 (R/W  32) Baud Rate Generator Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       DBGU_RTOR;          /**< Offset: 0x28 (R/W  32) Receiver Timeout Register */
  __I   uint8_t                        Reserved2[0x14];
  __I   uint32_t                       DBGU_CIDR;          /**< Offset: 0x40 (R/   32) Chip ID Register */
  __I   uint32_t                       DBGU_EXID;          /**< Offset: 0x44 (R/   32) Chip ID Extension Register */
  __IO  uint32_t                       DBGU_FNR;           /**< Offset: 0x48 (R/W  32) Force NTRST Register */
  __I   uint8_t                        Reserved3[0x98];
  __IO  uint32_t                       DBGU_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
} dbgu_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_DBGU_COMPONENT_H_ */
