/*
 * Component description for SCKC
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
#ifndef _SAM9X_SCKC_COMPONENT_H_
#define _SAM9X_SCKC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SCKC                                         */
/* ************************************************************************** */

/* -------- SCKC_CR : (SCKC Offset: 0x00) (R/W 32) Slow Clock Controller Configuration Register -------- */
#define SCKC_CR_OSC32EN_Pos                   _U_(1)                                               /**< (SCKC_CR) 32.768 kHz Crystal Oscillator Position */
#define SCKC_CR_OSC32EN_Msk                   (_U_(0x1) << SCKC_CR_OSC32EN_Pos)                    /**< (SCKC_CR) 32.768 kHz Crystal Oscillator Mask */
#define SCKC_CR_OSC32EN(value)                (SCKC_CR_OSC32EN_Msk & ((value) << SCKC_CR_OSC32EN_Pos))
#define SCKC_CR_OSC32BYP_Pos                  _U_(2)                                               /**< (SCKC_CR) 32.768 kHz Crystal Oscillator Bypass Position */
#define SCKC_CR_OSC32BYP_Msk                  (_U_(0x1) << SCKC_CR_OSC32BYP_Pos)                   /**< (SCKC_CR) 32.768 kHz Crystal Oscillator Bypass Mask */
#define SCKC_CR_OSC32BYP(value)               (SCKC_CR_OSC32BYP_Msk & ((value) << SCKC_CR_OSC32BYP_Pos))
#define SCKC_CR_TD_OSCSEL_Pos                 _U_(24)                                              /**< (SCKC_CR) Timing Domain Slow Clock Selector Position */
#define SCKC_CR_TD_OSCSEL_Msk                 (_U_(0x1) << SCKC_CR_TD_OSCSEL_Pos)                  /**< (SCKC_CR) Timing Domain Slow Clock Selector Mask */
#define SCKC_CR_TD_OSCSEL(value)              (SCKC_CR_TD_OSCSEL_Msk & ((value) << SCKC_CR_TD_OSCSEL_Pos))
#define   SCKC_CR_TD_OSCSEL_RC_Val            _U_(0x0)                                             /**< (SCKC_CR) Slow clock of the timing domain is driven by the embedded 32 kHz (typical) RC oscillator.  */
#define   SCKC_CR_TD_OSCSEL_XTAL_Val          _U_(0x1)                                             /**< (SCKC_CR) Slow clock of the timing domain is driven by the 32.768 kHz crystal oscillator.  */
#define SCKC_CR_TD_OSCSEL_RC                  (SCKC_CR_TD_OSCSEL_RC_Val << SCKC_CR_TD_OSCSEL_Pos)  /**< (SCKC_CR) Slow clock of the timing domain is driven by the embedded 32 kHz (typical) RC oscillator. Position  */
#define SCKC_CR_TD_OSCSEL_XTAL                (SCKC_CR_TD_OSCSEL_XTAL_Val << SCKC_CR_TD_OSCSEL_Pos) /**< (SCKC_CR) Slow clock of the timing domain is driven by the 32.768 kHz crystal oscillator. Position  */
#define SCKC_CR_Msk                           _U_(0x01000006)                                      /**< (SCKC_CR) Register Mask  */


/** \brief SCKC register offsets definitions */
#define SCKC_CR_REG_OFST               (0x00)              /**< (SCKC_CR) Slow Clock Controller Configuration Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SCKC register API structure */
typedef struct
{
  __IO  uint32_t                       SCKC_CR;            /**< Offset: 0x00 (R/W  32) Slow Clock Controller Configuration Register */
} sckc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_SCKC_COMPONENT_H_ */
