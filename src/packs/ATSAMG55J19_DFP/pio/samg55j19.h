/*
 * Peripheral I/O description for SAMG55J19
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
#ifndef _SAMG55J19_GPIO_H_
#define _SAMG55J19_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA0                     (  0  )  /**< Pin Number for PA0 */
#define PIN_PA1                     (  1  )  /**< Pin Number for PA1 */
#define PIN_PA2                     (  2  )  /**< Pin Number for PA2 */
#define PIN_PA3                     (  3  )  /**< Pin Number for PA3 */
#define PIN_PA4                     (  4  )  /**< Pin Number for PA4 */
#define PIN_PA5                     (  5  )  /**< Pin Number for PA5 */
#define PIN_PA6                     (  6  )  /**< Pin Number for PA6 */
#define PIN_PA7                     (  7  )  /**< Pin Number for PA7 */
#define PIN_PA8                     (  8  )  /**< Pin Number for PA8 */
#define PIN_PA9                     (  9  )  /**< Pin Number for PA9 */
#define PIN_PA10                    ( 10  )  /**< Pin Number for PA10 */
#define PIN_PA11                    ( 11  )  /**< Pin Number for PA11 */
#define PIN_PA12                    ( 12  )  /**< Pin Number for PA12 */
#define PIN_PA13                    ( 13  )  /**< Pin Number for PA13 */
#define PIN_PA14                    ( 14  )  /**< Pin Number for PA14 */
#define PIN_PA15                    ( 15  )  /**< Pin Number for PA15 */
#define PIN_PA16                    ( 16  )  /**< Pin Number for PA16 */
#define PIN_PA17                    ( 17  )  /**< Pin Number for PA17 */
#define PIN_PA18                    ( 18  )  /**< Pin Number for PA18 */
#define PIN_PA19                    ( 19  )  /**< Pin Number for PA19 */
#define PIN_PA20                    ( 20  )  /**< Pin Number for PA20 */
#define PIN_PA21                    ( 21  )  /**< Pin Number for PA21 */
#define PIN_PA22                    ( 22  )  /**< Pin Number for PA22 */
#define PIN_PA23                    ( 23  )  /**< Pin Number for PA23 */
#define PIN_PA24                    ( 24  )  /**< Pin Number for PA24 */
#define PIN_PA25                    ( 25  )  /**< Pin Number for PA25 */
#define PIN_PA26                    ( 26  )  /**< Pin Number for PA26 */
#define PIN_PA27                    ( 27  )  /**< Pin Number for PA27 */
#define PIN_PA28                    ( 28  )  /**< Pin Number for PA28 */
#define PIN_PA29                    ( 29  )  /**< Pin Number for PA29 */
#define PIN_PA30                    ( 30  )  /**< Pin Number for PA30 */
#define PIN_PA31                    ( 31  )  /**< Pin Number for PA31 */
#define PIN_PB0                     ( 32  )  /**< Pin Number for PB0 */
#define PIN_PB1                     ( 33  )  /**< Pin Number for PB1 */
#define PIN_PB2                     ( 34  )  /**< Pin Number for PB2 */
#define PIN_PB3                     ( 35  )  /**< Pin Number for PB3 */
#define PIN_PB4                     ( 36  )  /**< Pin Number for PB4 */
#define PIN_PB5                     ( 37  )  /**< Pin Number for PB5 */
#define PIN_PB6                     ( 38  )  /**< Pin Number for PB6 */
#define PIN_PB7                     ( 39  )  /**< Pin Number for PB7 */
#define PIN_PB8                     ( 40  )  /**< Pin Number for PB8 */
#define PIN_PB9                     ( 41  )  /**< Pin Number for PB9 */
#define PIN_PB10                    ( 42  )  /**< Pin Number for PB10 */
#define PIN_PB11                    ( 43  )  /**< Pin Number for PB11 */
#define PIN_PB12                    ( 44  )  /**< Pin Number for PB12 */
#define PIN_PB13                    ( 45  )  /**< Pin Number for PB13 */
#define PIN_PB14                    ( 46  )  /**< Pin Number for PB14 */
#define PIN_PB15                    ( 47  )  /**< Pin Number for PB15 */

/* ========== Peripheral I/O masks ========== */
#define PIO_PA0                     (_U_(1) << 0)   /**< PIO mask for PA0 */
#define PIO_PA1                     (_U_(1) << 1)   /**< PIO mask for PA1 */
#define PIO_PA2                     (_U_(1) << 2)   /**< PIO mask for PA2 */
#define PIO_PA3                     (_U_(1) << 3)   /**< PIO mask for PA3 */
#define PIO_PA4                     (_U_(1) << 4)   /**< PIO mask for PA4 */
#define PIO_PA5                     (_U_(1) << 5)   /**< PIO mask for PA5 */
#define PIO_PA6                     (_U_(1) << 6)   /**< PIO mask for PA6 */
#define PIO_PA7                     (_U_(1) << 7)   /**< PIO mask for PA7 */
#define PIO_PA8                     (_U_(1) << 8)   /**< PIO mask for PA8 */
#define PIO_PA9                     (_U_(1) << 9)   /**< PIO mask for PA9 */
#define PIO_PA10                    (_U_(1) << 10)  /**< PIO mask for PA10 */
#define PIO_PA11                    (_U_(1) << 11)  /**< PIO mask for PA11 */
#define PIO_PA12                    (_U_(1) << 12)  /**< PIO mask for PA12 */
#define PIO_PA13                    (_U_(1) << 13)  /**< PIO mask for PA13 */
#define PIO_PA14                    (_U_(1) << 14)  /**< PIO mask for PA14 */
#define PIO_PA15                    (_U_(1) << 15)  /**< PIO mask for PA15 */
#define PIO_PA16                    (_U_(1) << 16)  /**< PIO mask for PA16 */
#define PIO_PA17                    (_U_(1) << 17)  /**< PIO mask for PA17 */
#define PIO_PA18                    (_U_(1) << 18)  /**< PIO mask for PA18 */
#define PIO_PA19                    (_U_(1) << 19)  /**< PIO mask for PA19 */
#define PIO_PA20                    (_U_(1) << 20)  /**< PIO mask for PA20 */
#define PIO_PA21                    (_U_(1) << 21)  /**< PIO mask for PA21 */
#define PIO_PA22                    (_U_(1) << 22)  /**< PIO mask for PA22 */
#define PIO_PA23                    (_U_(1) << 23)  /**< PIO mask for PA23 */
#define PIO_PA24                    (_U_(1) << 24)  /**< PIO mask for PA24 */
#define PIO_PA25                    (_U_(1) << 25)  /**< PIO mask for PA25 */
#define PIO_PA26                    (_U_(1) << 26)  /**< PIO mask for PA26 */
#define PIO_PA27                    (_U_(1) << 27)  /**< PIO mask for PA27 */
#define PIO_PA28                    (_U_(1) << 28)  /**< PIO mask for PA28 */
#define PIO_PA29                    (_U_(1) << 29)  /**< PIO mask for PA29 */
#define PIO_PA30                    (_U_(1) << 30)  /**< PIO mask for PA30 */
#define PIO_PA31                    (_U_(1) << 31)  /**< PIO mask for PA31 */
#define PIO_PB0                     (_U_(1) << 0)   /**< PIO mask for PB0 */
#define PIO_PB1                     (_U_(1) << 1)   /**< PIO mask for PB1 */
#define PIO_PB2                     (_U_(1) << 2)   /**< PIO mask for PB2 */
#define PIO_PB3                     (_U_(1) << 3)   /**< PIO mask for PB3 */
#define PIO_PB4                     (_U_(1) << 4)   /**< PIO mask for PB4 */
#define PIO_PB5                     (_U_(1) << 5)   /**< PIO mask for PB5 */
#define PIO_PB6                     (_U_(1) << 6)   /**< PIO mask for PB6 */
#define PIO_PB7                     (_U_(1) << 7)   /**< PIO mask for PB7 */
#define PIO_PB8                     (_U_(1) << 8)   /**< PIO mask for PB8 */
#define PIO_PB9                     (_U_(1) << 9)   /**< PIO mask for PB9 */
#define PIO_PB10                    (_U_(1) << 10)  /**< PIO mask for PB10 */
#define PIO_PB11                    (_U_(1) << 11)  /**< PIO mask for PB11 */
#define PIO_PB12                    (_U_(1) << 12)  /**< PIO mask for PB12 */
#define PIO_PB13                    (_U_(1) << 13)  /**< PIO mask for PB13 */
#define PIO_PB14                    (_U_(1) << 14)  /**< PIO mask for PB14 */
#define PIO_PB15                    (_U_(1) << 15)  /**< PIO mask for PB15 */

/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PA17X1_ADC_AD0                         _L_(17)      /**< ADC signal: ADC_AD0 on PA17 mux X1 */
#define PIO_PA17X1_ADC_AD0                         (_U_(1) << 17) /**< ADC signal: ADC_AD0 */
#define PIN_PA18X1_ADC_AD1                         _L_(18)      /**< ADC signal: ADC_AD1 on PA18 mux X1 */
#define PIO_PA18X1_ADC_AD1                         (_U_(1) << 18) /**< ADC signal: ADC_AD1 */
#define PIN_PA19X1_ADC_AD2                         _L_(19)      /**< ADC signal: ADC_AD2 on PA19 mux X1 */
#define PIO_PA19X1_ADC_AD2                         (_U_(1) << 19) /**< ADC signal: ADC_AD2 */
#define PIN_PA20X1_ADC_AD3                         _L_(20)      /**< ADC signal: ADC_AD3 on PA20 mux X1 */
#define PIO_PA20X1_ADC_AD3                         (_U_(1) << 20) /**< ADC signal: ADC_AD3 */
#define PIN_PB0X1_ADC_AD4                          _L_(32)      /**< ADC signal: ADC_AD4 on PB0 mux X1 */
#define PIO_PB0X1_ADC_AD4                          (_U_(1) << 0) /**< ADC signal: ADC_AD4 */
#define PIN_PB1X1_ADC_AD5                          _L_(33)      /**< ADC signal: ADC_AD5 on PB1 mux X1 */
#define PIO_PB1X1_ADC_AD5                          (_U_(1) << 1) /**< ADC signal: ADC_AD5 */
#define PIN_PB2X1_ADC_AD6                          _L_(34)      /**< ADC signal: ADC_AD6 on PB2 mux X1 */
#define PIO_PB2X1_ADC_AD6                          (_U_(1) << 2) /**< ADC signal: ADC_AD6 */
#define PIN_PB3X1_ADC_AD7                          _L_(35)      /**< ADC signal: ADC_AD7 on PB3 mux X1 */
#define PIO_PB3X1_ADC_AD7                          (_U_(1) << 3) /**< ADC signal: ADC_AD7 */
#define PIN_PA8B_ADC_ADTRG                         _L_(8)       /**< ADC signal: ADC_ADTRG on PA8 mux B */
#define MUX_PA8B_ADC_ADTRG                         _L_(1)       /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PA8B_ADC_ADTRG                         (_U_(1) << 8) /**< ADC signal: ADC_ADTRG */
#define PIN_PB2X1_ADC_WKUP12                       _L_(34)      /**< ADC signal: ADC_WKUP12 on PB2 mux X1 */
#define PIO_PB2X1_ADC_WKUP12                       (_U_(1) << 2) /**< ADC signal: ADC_WKUP12 */
#define PIN_PB3X1_ADC_WKUP13                       _L_(35)      /**< ADC signal: ADC_WKUP13 on PB3 mux X1 */
#define PIO_PB3X1_ADC_WKUP13                       (_U_(1) << 3) /**< ADC signal: ADC_WKUP13 */
/* ========== PIO definition for EFC peripheral ========== */
#define PIN_PB12X1_EFC_ERASE                       _L_(44)      /**< EFC signal: EFC_ERASE on PB12 mux X1 */
#define PIO_PB12X1_EFC_ERASE                       (_U_(1) << 12) /**< EFC signal: EFC_ERASE */
/* ========== PIO definition for ICE peripheral ========== */
#define PIN_PB7X1_ICE_SWDCLK                       _L_(39)      /**< ICE signal: ICE_SWDCLK on PB7 mux X1 */
#define PIO_PB7X1_ICE_SWDCLK                       (_U_(1) << 7) /**< ICE signal: ICE_SWDCLK */
#define PIN_PB6X1_ICE_SWDIO                        _L_(38)      /**< ICE signal: ICE_SWDIO on PB6 mux X1 */
#define PIO_PB6X1_ICE_SWDIO                        (_U_(1) << 6) /**< ICE signal: ICE_SWDIO */
#define PIN_PB7X1_ICE_TCK                          _L_(39)      /**< ICE signal: ICE_TCK on PB7 mux X1 */
#define PIO_PB7X1_ICE_TCK                          (_U_(1) << 7) /**< ICE signal: ICE_TCK */
#define PIN_PB4X1_ICE_TDI                          _L_(36)      /**< ICE signal: ICE_TDI on PB4 mux X1 */
#define PIO_PB4X1_ICE_TDI                          (_U_(1) << 4) /**< ICE signal: ICE_TDI */
#define PIN_PB5X1_ICE_TDO                          _L_(37)      /**< ICE signal: ICE_TDO on PB5 mux X1 */
#define PIO_PB5X1_ICE_TDO                          (_U_(1) << 5) /**< ICE signal: ICE_TDO */
#define PIN_PB6X1_ICE_TMS                          _L_(38)      /**< ICE signal: ICE_TMS on PB6 mux X1 */
#define PIO_PB6X1_ICE_TMS                          (_U_(1) << 6) /**< ICE signal: ICE_TMS */
#define PIN_PB5X1_ICE_TRACESWO                     _L_(37)      /**< ICE signal: ICE_TRACESWO on PB5 mux X1 */
#define PIO_PB5X1_ICE_TRACESWO                     (_U_(1) << 5) /**< ICE signal: ICE_TRACESWO */
/* ========== PIO definition for I2SC0 peripheral ========== */
#define PIN_PA0A_I2SC0_I2SCK0                      _L_(0)       /**< I2SC0 signal: I2SC0_I2SCK0 on PA0 mux A */
#define MUX_PA0A_I2SC0_I2SCK0                      _L_(0)       /**< I2SC0 signal line function value: I2SC0_I2SCK0 */
#define PIO_PA0A_I2SC0_I2SCK0                      (_U_(1) << 0) /**< I2SC0 signal: I2SC0_I2SCK0 */
#define PIN_PA2B_I2SC0_I2SDI0                      _L_(2)       /**< I2SC0 signal: I2SC0_I2SDI0 on PA2 mux B */
#define MUX_PA2B_I2SC0_I2SDI0                      _L_(1)       /**< I2SC0 signal line function value: I2SC0_I2SDI0 */
#define PIO_PA2B_I2SC0_I2SDI0                      (_U_(1) << 2) /**< I2SC0 signal: I2SC0_I2SDI0 */
#define PIN_PA3B_I2SC0_I2SDO0                      _L_(3)       /**< I2SC0 signal: I2SC0_I2SDO0 on PA3 mux B */
#define MUX_PA3B_I2SC0_I2SDO0                      _L_(1)       /**< I2SC0 signal line function value: I2SC0_I2SDO0 */
#define PIO_PA3B_I2SC0_I2SDO0                      (_U_(1) << 3) /**< I2SC0 signal: I2SC0_I2SDO0 */
#define PIN_PA17A_I2SC0_I2SDO0                     _L_(17)      /**< I2SC0 signal: I2SC0_I2SDO0 on PA17 mux A */
#define MUX_PA17A_I2SC0_I2SDO0                     _L_(0)       /**< I2SC0 signal line function value: I2SC0_I2SDO0 */
#define PIO_PA17A_I2SC0_I2SDO0                     (_U_(1) << 17) /**< I2SC0 signal: I2SC0_I2SDO0 */
#define PIN_PA4B_I2SC0_I2SMCK0                     _L_(4)       /**< I2SC0 signal: I2SC0_I2SMCK0 on PA4 mux B */
#define MUX_PA4B_I2SC0_I2SMCK0                     _L_(1)       /**< I2SC0 signal line function value: I2SC0_I2SMCK0 */
#define PIO_PA4B_I2SC0_I2SMCK0                     (_U_(1) << 4) /**< I2SC0 signal: I2SC0_I2SMCK0 */
#define PIN_PA18A_I2SC0_I2SMCK0                    _L_(18)      /**< I2SC0 signal: I2SC0_I2SMCK0 on PA18 mux A */
#define MUX_PA18A_I2SC0_I2SMCK0                    _L_(0)       /**< I2SC0 signal line function value: I2SC0_I2SMCK0 */
#define PIO_PA18A_I2SC0_I2SMCK0                    (_U_(1) << 18) /**< I2SC0 signal: I2SC0_I2SMCK0 */
#define PIN_PA1A_I2SC0_I2SWS0                      _L_(1)       /**< I2SC0 signal: I2SC0_I2SWS0 on PA1 mux A */
#define MUX_PA1A_I2SC0_I2SWS0                      _L_(0)       /**< I2SC0 signal line function value: I2SC0_I2SWS0 */
#define PIO_PA1A_I2SC0_I2SWS0                      (_U_(1) << 1) /**< I2SC0 signal: I2SC0_I2SWS0 */
/* ========== PIO definition for I2SC1 peripheral ========== */
#define PIN_PA19B_I2SC1_I2SCK1                     _L_(19)      /**< I2SC1 signal: I2SC1_I2SCK1 on PA19 mux B */
#define MUX_PA19B_I2SC1_I2SCK1                     _L_(1)       /**< I2SC1 signal line function value: I2SC1_I2SCK1 */
#define PIO_PA19B_I2SC1_I2SCK1                     (_U_(1) << 19) /**< I2SC1 signal: I2SC1_I2SCK1 */
#define PIN_PA22B_I2SC1_I2SDI1                     _L_(22)      /**< I2SC1 signal: I2SC1_I2SDI1 on PA22 mux B */
#define MUX_PA22B_I2SC1_I2SDI1                     _L_(1)       /**< I2SC1 signal line function value: I2SC1_I2SDI1 */
#define PIO_PA22B_I2SC1_I2SDI1                     (_U_(1) << 22) /**< I2SC1 signal: I2SC1_I2SDI1 */
#define PIN_PA23A_I2SC1_I2SDO1                     _L_(23)      /**< I2SC1 signal: I2SC1_I2SDO1 on PA23 mux A */
#define MUX_PA23A_I2SC1_I2SDO1                     _L_(0)       /**< I2SC1 signal line function value: I2SC1_I2SDO1 */
#define PIO_PA23A_I2SC1_I2SDO1                     (_U_(1) << 23) /**< I2SC1 signal: I2SC1_I2SDO1 */
#define PIN_PA25B_I2SC1_I2SDO1                     _L_(25)      /**< I2SC1 signal: I2SC1_I2SDO1 on PA25 mux B */
#define MUX_PA25B_I2SC1_I2SDO1                     _L_(1)       /**< I2SC1 signal line function value: I2SC1_I2SDO1 */
#define PIO_PA25B_I2SC1_I2SDO1                     (_U_(1) << 25) /**< I2SC1 signal: I2SC1_I2SDO1 */
#define PIN_PA24A_I2SC1_I2SMCK1                    _L_(24)      /**< I2SC1 signal: I2SC1_I2SMCK1 on PA24 mux A */
#define MUX_PA24A_I2SC1_I2SMCK1                    _L_(0)       /**< I2SC1 signal line function value: I2SC1_I2SMCK1 */
#define PIO_PA24A_I2SC1_I2SMCK1                    (_U_(1) << 24) /**< I2SC1 signal: I2SC1_I2SMCK1 */
#define PIN_PA26B_I2SC1_I2SMCK1                    _L_(26)      /**< I2SC1 signal: I2SC1_I2SMCK1 on PA26 mux B */
#define MUX_PA26B_I2SC1_I2SMCK1                    _L_(1)       /**< I2SC1 signal line function value: I2SC1_I2SMCK1 */
#define PIO_PA26B_I2SC1_I2SMCK1                    (_U_(1) << 26) /**< I2SC1 signal: I2SC1_I2SMCK1 */
#define PIN_PA20B_I2SC1_I2SWS1                     _L_(20)      /**< I2SC1 signal: I2SC1_I2SWS1 on PA20 mux B */
#define MUX_PA20B_I2SC1_I2SWS1                     _L_(1)       /**< I2SC1 signal line function value: I2SC1_I2SWS1 */
#define PIO_PA20B_I2SC1_I2SWS1                     (_U_(1) << 20) /**< I2SC1 signal: I2SC1_I2SWS1 */
/* ========== PIO definition for PDMIC0 peripheral ========== */
#define PIN_PA10B_PDMIC0_CLK                       _L_(10)      /**< PDMIC0 signal: PDMIC0_CLK on PA10 mux B */
#define MUX_PA10B_PDMIC0_CLK                       _L_(1)       /**< PDMIC0 signal line function value: PDMIC0_CLK */
#define PIO_PA10B_PDMIC0_CLK                       (_U_(1) << 10) /**< PDMIC0 signal: PDMIC0_CLK */
#define PIN_PA9B_PDMIC0_DAT                        _L_(9)       /**< PDMIC0 signal: PDMIC0_DAT on PA9 mux B */
#define MUX_PA9B_PDMIC0_DAT                        _L_(1)       /**< PDMIC0 signal line function value: PDMIC0_DAT */
#define PIO_PA9B_PDMIC0_DAT                        (_U_(1) << 9) /**< PDMIC0 signal: PDMIC0_DAT */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PA6B_PMC_PCK0                          _L_(6)       /**< PMC signal: PMC_PCK0 on PA6 mux B */
#define MUX_PA6B_PMC_PCK0                          _L_(1)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PA6B_PMC_PCK0                          (_U_(1) << 6) /**< PMC signal: PMC_PCK0 */
#define PIN_PA17B_PMC_PCK1                         _L_(17)      /**< PMC signal: PMC_PCK1 on PA17 mux B */
#define MUX_PA17B_PMC_PCK1                         _L_(1)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA17B_PMC_PCK1                         (_U_(1) << 17) /**< PMC signal: PMC_PCK1 */
#define PIN_PA21B_PMC_PCK1                         _L_(21)      /**< PMC signal: PMC_PCK1 on PA21 mux B */
#define MUX_PA21B_PMC_PCK1                         _L_(1)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA21B_PMC_PCK1                         (_U_(1) << 21) /**< PMC signal: PMC_PCK1 */
#define PIN_PA30A_PMC_PCK1                         _L_(30)      /**< PMC signal: PMC_PCK1 on PA30 mux A */
#define MUX_PA30A_PMC_PCK1                         _L_(0)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA30A_PMC_PCK1                         (_U_(1) << 30) /**< PMC signal: PMC_PCK1 */
#define PIN_PA18B_PMC_PCK2                         _L_(18)      /**< PMC signal: PMC_PCK2 on PA18 mux B */
#define MUX_PA18B_PMC_PCK2                         _L_(1)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PA18B_PMC_PCK2                         (_U_(1) << 18) /**< PMC signal: PMC_PCK2 */
#define PIN_PA31A_PMC_PCK2                         _L_(31)      /**< PMC signal: PMC_PCK2 on PA31 mux A */
#define MUX_PA31A_PMC_PCK2                         _L_(0)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PA31A_PMC_PCK2                         (_U_(1) << 31) /**< PMC signal: PMC_PCK2 */
#define PIN_PB3B_PMC_PCK2                          _L_(35)      /**< PMC signal: PMC_PCK2 on PB3 mux B */
#define MUX_PB3B_PMC_PCK2                          _L_(1)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PB3B_PMC_PCK2                          (_U_(1) << 3) /**< PMC signal: PMC_PCK2 */
/* ========== PIO definition for SPI0 peripheral ========== */
#define PIN_PA9A_SPI0_MISO                         _L_(9)       /**< SPI0 signal: SPI0_MISO on PA9 mux A */
#define MUX_PA9A_SPI0_MISO                         _L_(0)       /**< SPI0 signal line function value: SPI0_MISO */
#define PIO_PA9A_SPI0_MISO                         (_U_(1) << 9) /**< SPI0 signal: SPI0_MISO */
#define PIN_PA10A_SPI0_MOSI                        _L_(10)      /**< SPI0 signal: SPI0_MOSI on PA10 mux A */
#define MUX_PA10A_SPI0_MOSI                        _L_(0)       /**< SPI0 signal line function value: SPI0_MOSI */
#define PIO_PA10A_SPI0_MOSI                        (_U_(1) << 10) /**< SPI0 signal: SPI0_MOSI */
#define PIN_PA25A_SPI0_NPCS0                       _L_(25)      /**< SPI0 signal: SPI0_NPCS0 on PA25 mux A */
#define MUX_PA25A_SPI0_NPCS0                       _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS0 */
#define PIO_PA25A_SPI0_NPCS0                       (_U_(1) << 25) /**< SPI0 signal: SPI0_NPCS0 */
#define PIN_PA26A_SPI0_NPCS1                       _L_(26)      /**< SPI0 signal: SPI0_NPCS1 on PA26 mux A */
#define MUX_PA26A_SPI0_NPCS1                       _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS1 */
#define PIO_PA26A_SPI0_NPCS1                       (_U_(1) << 26) /**< SPI0 signal: SPI0_NPCS1 */
#define PIN_PB0A_SPI0_SPCK                         _L_(32)      /**< SPI0 signal: SPI0_SPCK on PB0 mux A */
#define MUX_PB0A_SPI0_SPCK                         _L_(0)       /**< SPI0 signal line function value: SPI0_SPCK */
#define PIO_PB0A_SPI0_SPCK                         (_U_(1) << 0) /**< SPI0 signal: SPI0_SPCK */
/* ========== PIO definition for SPI1 peripheral ========== */
#define PIN_PB2A_SPI1_MISO                         _L_(34)      /**< SPI1 signal: SPI1_MISO on PB2 mux A */
#define MUX_PB2A_SPI1_MISO                         _L_(0)       /**< SPI1 signal line function value: SPI1_MISO */
#define PIO_PB2A_SPI1_MISO                         (_U_(1) << 2) /**< SPI1 signal: SPI1_MISO */
#define PIN_PB3A_SPI1_MOSI                         _L_(35)      /**< SPI1 signal: SPI1_MOSI on PB3 mux A */
#define MUX_PB3A_SPI1_MOSI                         _L_(0)       /**< SPI1 signal line function value: SPI1_MOSI */
#define PIO_PB3A_SPI1_MOSI                         (_U_(1) << 3) /**< SPI1 signal: SPI1_MOSI */
#define PIN_PA28A_SPI1_NPCS0                       _L_(28)      /**< SPI1 signal: SPI1_NPCS0 on PA28 mux A */
#define MUX_PA28A_SPI1_NPCS0                       _L_(0)       /**< SPI1 signal line function value: SPI1_NPCS0 */
#define PIO_PA28A_SPI1_NPCS0                       (_U_(1) << 28) /**< SPI1 signal: SPI1_NPCS0 */
#define PIN_PA29A_SPI1_NPCS1                       _L_(29)      /**< SPI1 signal: SPI1_NPCS1 on PA29 mux A */
#define MUX_PA29A_SPI1_NPCS1                       _L_(0)       /**< SPI1 signal line function value: SPI1_NPCS1 */
#define PIO_PA29A_SPI1_NPCS1                       (_U_(1) << 29) /**< SPI1 signal: SPI1_NPCS1 */
#define PIN_PA27A_SPI1_SPCK                        _L_(27)      /**< SPI1 signal: SPI1_SPCK on PA27 mux A */
#define MUX_PA27A_SPI1_SPCK                        _L_(0)       /**< SPI1 signal line function value: SPI1_SPCK */
#define PIO_PA27A_SPI1_SPCK                        (_U_(1) << 27) /**< SPI1 signal: SPI1_SPCK */
/* ========== PIO definition for SPI2 peripheral ========== */
#define PIN_PA5A_SPI2_MISO                         _L_(5)       /**< SPI2 signal: SPI2_MISO on PA5 mux A */
#define MUX_PA5A_SPI2_MISO                         _L_(0)       /**< SPI2 signal line function value: SPI2_MISO */
#define PIO_PA5A_SPI2_MISO                         (_U_(1) << 5) /**< SPI2 signal: SPI2_MISO */
#define PIN_PA6A_SPI2_MOSI                         _L_(6)       /**< SPI2 signal: SPI2_MOSI on PA6 mux A */
#define MUX_PA6A_SPI2_MOSI                         _L_(0)       /**< SPI2 signal line function value: SPI2_MOSI */
#define PIO_PA6A_SPI2_MOSI                         (_U_(1) << 6) /**< SPI2 signal: SPI2_MOSI */
#define PIN_PA16A_SPI2_NPCS0                       _L_(16)      /**< SPI2 signal: SPI2_NPCS0 on PA16 mux A */
#define MUX_PA16A_SPI2_NPCS0                       _L_(0)       /**< SPI2 signal line function value: SPI2_NPCS0 */
#define PIO_PA16A_SPI2_NPCS0                       (_U_(1) << 16) /**< SPI2 signal: SPI2_NPCS0 */
#define PIN_PA15A_SPI2_NPCS1                       _L_(15)      /**< SPI2 signal: SPI2_NPCS1 on PA15 mux A */
#define MUX_PA15A_SPI2_NPCS1                       _L_(0)       /**< SPI2 signal line function value: SPI2_NPCS1 */
#define PIO_PA15A_SPI2_NPCS1                       (_U_(1) << 15) /**< SPI2 signal: SPI2_NPCS1 */
#define PIN_PA15B_SPI2_SPCK                        _L_(15)      /**< SPI2 signal: SPI2_SPCK on PA15 mux B */
#define MUX_PA15B_SPI2_SPCK                        _L_(1)       /**< SPI2 signal line function value: SPI2_SPCK */
#define PIO_PA15B_SPI2_SPCK                        (_U_(1) << 15) /**< SPI2 signal: SPI2_SPCK */
#define PIN_PA24B_SPI2_SPCK                        _L_(24)      /**< SPI2 signal: SPI2_SPCK on PA24 mux B */
#define MUX_PA24B_SPI2_SPCK                        _L_(1)       /**< SPI2 signal line function value: SPI2_SPCK */
#define PIO_PA24B_SPI2_SPCK                        (_U_(1) << 24) /**< SPI2 signal: SPI2_SPCK */
/* ========== PIO definition for SPI3 peripheral ========== */
#define PIN_PA4A_SPI3_MISO                         _L_(4)       /**< SPI3 signal: SPI3_MISO on PA4 mux A */
#define MUX_PA4A_SPI3_MISO                         _L_(0)       /**< SPI3 signal line function value: SPI3_MISO */
#define PIO_PA4A_SPI3_MISO                         (_U_(1) << 4) /**< SPI3 signal: SPI3_MISO */
#define PIN_PA3A_SPI3_MOSI                         _L_(3)       /**< SPI3 signal: SPI3_MOSI on PA3 mux A */
#define MUX_PA3A_SPI3_MOSI                         _L_(0)       /**< SPI3 signal line function value: SPI3_MOSI */
#define PIO_PA3A_SPI3_MOSI                         (_U_(1) << 3) /**< SPI3 signal: SPI3_MOSI */
#define PIN_PB14A_SPI3_NPCS0                       _L_(46)      /**< SPI3 signal: SPI3_NPCS0 on PB14 mux A */
#define MUX_PB14A_SPI3_NPCS0                       _L_(0)       /**< SPI3 signal line function value: SPI3_NPCS0 */
#define PIO_PB14A_SPI3_NPCS0                       (_U_(1) << 14) /**< SPI3 signal: SPI3_NPCS0 */
#define PIN_PB15A_SPI3_NPCS1                       _L_(47)      /**< SPI3 signal: SPI3_NPCS1 on PB15 mux A */
#define MUX_PB15A_SPI3_NPCS1                       _L_(0)       /**< SPI3 signal line function value: SPI3_NPCS1 */
#define PIO_PB15A_SPI3_NPCS1                       (_U_(1) << 15) /**< SPI3 signal: SPI3_NPCS1 */
#define PIN_PB13A_SPI3_SPCK                        _L_(45)      /**< SPI3 signal: SPI3_SPCK on PB13 mux A */
#define MUX_PB13A_SPI3_SPCK                        _L_(0)       /**< SPI3 signal line function value: SPI3_SPCK */
#define PIO_PB13A_SPI3_SPCK                        (_U_(1) << 13) /**< SPI3 signal: SPI3_SPCK */
/* ========== PIO definition for SPI4 peripheral ========== */
#define PIN_PB9A_SPI4_MISO                         _L_(41)      /**< SPI4 signal: SPI4_MISO on PB9 mux A */
#define MUX_PB9A_SPI4_MISO                         _L_(0)       /**< SPI4 signal line function value: SPI4_MISO */
#define PIO_PB9A_SPI4_MISO                         (_U_(1) << 9) /**< SPI4 signal: SPI4_MISO */
#define PIN_PB11A_SPI4_MISO                        _L_(43)      /**< SPI4 signal: SPI4_MISO on PB11 mux A */
#define MUX_PB11A_SPI4_MISO                        _L_(0)       /**< SPI4 signal line function value: SPI4_MISO */
#define PIO_PB11A_SPI4_MISO                        (_U_(1) << 11) /**< SPI4 signal: SPI4_MISO */
#define PIN_PB8A_SPI4_MOSI                         _L_(40)      /**< SPI4 signal: SPI4_MOSI on PB8 mux A */
#define MUX_PB8A_SPI4_MOSI                         _L_(0)       /**< SPI4 signal line function value: SPI4_MOSI */
#define PIO_PB8A_SPI4_MOSI                         (_U_(1) << 8) /**< SPI4 signal: SPI4_MOSI */
#define PIN_PB10A_SPI4_MOSI                        _L_(42)      /**< SPI4 signal: SPI4_MOSI on PB10 mux A */
#define MUX_PB10A_SPI4_MOSI                        _L_(0)       /**< SPI4 signal line function value: SPI4_MOSI */
#define PIO_PB10A_SPI4_MOSI                        (_U_(1) << 10) /**< SPI4 signal: SPI4_MOSI */
#define PIN_PB8B_SPI4_NPCS0                        _L_(40)      /**< SPI4 signal: SPI4_NPCS0 on PB8 mux B */
#define MUX_PB8B_SPI4_NPCS0                        _L_(1)       /**< SPI4 signal line function value: SPI4_NPCS0 */
#define PIO_PB8B_SPI4_NPCS0                        (_U_(1) << 8) /**< SPI4 signal: SPI4_NPCS0 */
#define PIN_PB9B_SPI4_NPCS1                        _L_(41)      /**< SPI4 signal: SPI4_NPCS1 on PB9 mux B */
#define MUX_PB9B_SPI4_NPCS1                        _L_(1)       /**< SPI4 signal line function value: SPI4_NPCS1 */
#define PIO_PB9B_SPI4_NPCS1                        (_U_(1) << 9) /**< SPI4 signal: SPI4_NPCS1 */
#define PIN_PB1A_SPI4_SPCK                         _L_(33)      /**< SPI4 signal: SPI4_SPCK on PB1 mux A */
#define MUX_PB1A_SPI4_SPCK                         _L_(0)       /**< SPI4 signal line function value: SPI4_SPCK */
#define PIO_PB1A_SPI4_SPCK                         (_U_(1) << 1) /**< SPI4 signal: SPI4_SPCK */
/* ========== PIO definition for SPI5 peripheral ========== */
#define PIN_PA12A_SPI5_MISO                        _L_(12)      /**< SPI5 signal: SPI5_MISO on PA12 mux A */
#define MUX_PA12A_SPI5_MISO                        _L_(0)       /**< SPI5 signal line function value: SPI5_MISO */
#define PIO_PA12A_SPI5_MISO                        (_U_(1) << 12) /**< SPI5 signal: SPI5_MISO */
#define PIN_PA13A_SPI5_MOSI                        _L_(13)      /**< SPI5 signal: SPI5_MOSI on PA13 mux A */
#define MUX_PA13A_SPI5_MOSI                        _L_(0)       /**< SPI5 signal line function value: SPI5_MOSI */
#define PIO_PA13A_SPI5_MOSI                        (_U_(1) << 13) /**< SPI5 signal: SPI5_MOSI */
#define PIN_PA11A_SPI5_NPCS0                       _L_(11)      /**< SPI5 signal: SPI5_NPCS0 on PA11 mux A */
#define MUX_PA11A_SPI5_NPCS0                       _L_(0)       /**< SPI5 signal line function value: SPI5_NPCS0 */
#define PIO_PA11A_SPI5_NPCS0                       (_U_(1) << 11) /**< SPI5 signal: SPI5_NPCS0 */
#define PIN_PA5B_SPI5_NPCS1                        _L_(5)       /**< SPI5 signal: SPI5_NPCS1 on PA5 mux B */
#define MUX_PA5B_SPI5_NPCS1                        _L_(1)       /**< SPI5 signal line function value: SPI5_NPCS1 */
#define PIO_PA5B_SPI5_NPCS1                        (_U_(1) << 5) /**< SPI5 signal: SPI5_NPCS1 */
#define PIN_PB2B_SPI5_NPCS1                        _L_(34)      /**< SPI5 signal: SPI5_NPCS1 on PB2 mux B */
#define MUX_PB2B_SPI5_NPCS1                        _L_(1)       /**< SPI5 signal line function value: SPI5_NPCS1 */
#define PIO_PB2B_SPI5_NPCS1                        (_U_(1) << 2) /**< SPI5 signal: SPI5_NPCS1 */
#define PIN_PA14A_SPI5_SPCK                        _L_(14)      /**< SPI5 signal: SPI5_SPCK on PA14 mux A */
#define MUX_PA14A_SPI5_SPCK                        _L_(0)       /**< SPI5 signal line function value: SPI5_SPCK */
#define PIO_PA14A_SPI5_SPCK                        (_U_(1) << 14) /**< SPI5 signal: SPI5_SPCK */
/* ========== PIO definition for SPI6 peripheral ========== */
#define PIN_PB1B_SPI6_MISO                         _L_(33)      /**< SPI6 signal: SPI6_MISO on PB1 mux B */
#define MUX_PB1B_SPI6_MISO                         _L_(1)       /**< SPI6 signal line function value: SPI6_MISO */
#define PIO_PB1B_SPI6_MISO                         (_U_(1) << 1) /**< SPI6 signal: SPI6_MISO */
#define PIN_PB11B_SPI6_MISO                        _L_(43)      /**< SPI6 signal: SPI6_MISO on PB11 mux B */
#define MUX_PB11B_SPI6_MISO                        _L_(1)       /**< SPI6 signal line function value: SPI6_MISO */
#define PIO_PB11B_SPI6_MISO                        (_U_(1) << 11) /**< SPI6 signal: SPI6_MISO */
#define PIN_PB0B_SPI6_MOSI                         _L_(32)      /**< SPI6 signal: SPI6_MOSI on PB0 mux B */
#define MUX_PB0B_SPI6_MOSI                         _L_(1)       /**< SPI6 signal line function value: SPI6_MOSI */
#define PIO_PB0B_SPI6_MOSI                         (_U_(1) << 0) /**< SPI6 signal: SPI6_MOSI */
#define PIN_PB10B_SPI6_MOSI                        _L_(42)      /**< SPI6 signal: SPI6_MOSI on PB10 mux B */
#define MUX_PB10B_SPI6_MOSI                        _L_(1)       /**< SPI6 signal line function value: SPI6_MOSI */
#define PIO_PB10B_SPI6_MOSI                        (_U_(1) << 10) /**< SPI6 signal: SPI6_MOSI */
#define PIN_PB14B_SPI6_NPCS0                       _L_(46)      /**< SPI6 signal: SPI6_NPCS0 on PB14 mux B */
#define MUX_PB14B_SPI6_NPCS0                       _L_(1)       /**< SPI6 signal line function value: SPI6_NPCS0 */
#define PIO_PB14B_SPI6_NPCS0                       (_U_(1) << 14) /**< SPI6 signal: SPI6_NPCS0 */
#define PIN_PB15B_SPI6_NPCS1                       _L_(47)      /**< SPI6 signal: SPI6_NPCS1 on PB15 mux B */
#define MUX_PB15B_SPI6_NPCS1                       _L_(1)       /**< SPI6 signal line function value: SPI6_NPCS1 */
#define PIO_PB15B_SPI6_NPCS1                       (_U_(1) << 15) /**< SPI6 signal: SPI6_NPCS1 */
#define PIN_PB13B_SPI6_SPCK                        _L_(45)      /**< SPI6 signal: SPI6_SPCK on PB13 mux B */
#define MUX_PB13B_SPI6_SPCK                        _L_(1)       /**< SPI6 signal line function value: SPI6_SPCK */
#define PIO_PB13B_SPI6_SPCK                        (_U_(1) << 13) /**< SPI6 signal: SPI6_SPCK */
/* ========== PIO definition for SPI7 peripheral ========== */
#define PIN_PA27B_SPI7_MISO                        _L_(27)      /**< SPI7 signal: SPI7_MISO on PA27 mux B */
#define MUX_PA27B_SPI7_MISO                        _L_(1)       /**< SPI7 signal line function value: SPI7_MISO */
#define PIO_PA27B_SPI7_MISO                        (_U_(1) << 27) /**< SPI7 signal: SPI7_MISO */
#define PIN_PA28B_SPI7_MOSI                        _L_(28)      /**< SPI7 signal: SPI7_MOSI on PA28 mux B */
#define MUX_PA28B_SPI7_MOSI                        _L_(1)       /**< SPI7 signal line function value: SPI7_MOSI */
#define PIO_PA28B_SPI7_MOSI                        (_U_(1) << 28) /**< SPI7 signal: SPI7_MOSI */
#define PIN_PA30B_SPI7_NPCS0                       _L_(30)      /**< SPI7 signal: SPI7_NPCS0 on PA30 mux B */
#define MUX_PA30B_SPI7_NPCS0                       _L_(1)       /**< SPI7 signal line function value: SPI7_NPCS0 */
#define PIO_PA30B_SPI7_NPCS0                       (_U_(1) << 30) /**< SPI7 signal: SPI7_NPCS0 */
#define PIN_PA31B_SPI7_NPCS1                       _L_(31)      /**< SPI7 signal: SPI7_NPCS1 on PA31 mux B */
#define MUX_PA31B_SPI7_NPCS1                       _L_(1)       /**< SPI7 signal line function value: SPI7_NPCS1 */
#define PIO_PA31B_SPI7_NPCS1                       (_U_(1) << 31) /**< SPI7 signal: SPI7_NPCS1 */
#define PIN_PA29B_SPI7_SPCK                        _L_(29)      /**< SPI7 signal: SPI7_SPCK on PA29 mux B */
#define MUX_PA29B_SPI7_SPCK                        _L_(1)       /**< SPI7 signal line function value: SPI7_SPCK */
#define PIO_PA29B_SPI7_SPCK                        (_U_(1) << 29) /**< SPI7 signal: SPI7_SPCK */
/* ========== PIO definition for SUPC peripheral ========== */
#define PIN_PA0X1_SUPC_WKUP0                       _L_(0)       /**< SUPC signal: SUPC_WKUP0 on PA0 mux X1 */
#define PIO_PA0X1_SUPC_WKUP0                       (_U_(1) << 0) /**< SUPC signal: SUPC_WKUP0 */
#define PIN_PA1X1_SUPC_WKUP1                       _L_(1)       /**< SUPC signal: SUPC_WKUP1 on PA1 mux X1 */
#define PIO_PA1X1_SUPC_WKUP1                       (_U_(1) << 1) /**< SUPC signal: SUPC_WKUP1 */
#define PIN_PA2X1_SUPC_WKUP2                       _L_(2)       /**< SUPC signal: SUPC_WKUP2 on PA2 mux X1 */
#define PIO_PA2X1_SUPC_WKUP2                       (_U_(1) << 2) /**< SUPC signal: SUPC_WKUP2 */
#define PIN_PA23X1_SUPC_WKUP3                      _L_(23)      /**< SUPC signal: SUPC_WKUP3 on PA23 mux X1 */
#define PIO_PA23X1_SUPC_WKUP3                      (_U_(1) << 23) /**< SUPC signal: SUPC_WKUP3 */
#define PIN_PA5X1_SUPC_WKUP4                       _L_(5)       /**< SUPC signal: SUPC_WKUP4 on PA5 mux X1 */
#define PIO_PA5X1_SUPC_WKUP4                       (_U_(1) << 5) /**< SUPC signal: SUPC_WKUP4 */
#define PIN_PA8X1_SUPC_WKUP5                       _L_(8)       /**< SUPC signal: SUPC_WKUP5 on PA8 mux X1 */
#define PIO_PA8X1_SUPC_WKUP5                       (_U_(1) << 8) /**< SUPC signal: SUPC_WKUP5 */
#define PIN_PA9X1_SUPC_WKUP6                       _L_(9)       /**< SUPC signal: SUPC_WKUP6 on PA9 mux X1 */
#define PIO_PA9X1_SUPC_WKUP6                       (_U_(1) << 9) /**< SUPC signal: SUPC_WKUP6 */
#define PIN_PA16X1_SUPC_WKUP7                      _L_(16)      /**< SUPC signal: SUPC_WKUP7 on PA16 mux X1 */
#define PIO_PA16X1_SUPC_WKUP7                      (_U_(1) << 16) /**< SUPC signal: SUPC_WKUP7 */
#define PIN_PA14X1_SUPC_WKUP8                      _L_(14)      /**< SUPC signal: SUPC_WKUP8 on PA14 mux X1 */
#define PIO_PA14X1_SUPC_WKUP8                      (_U_(1) << 14) /**< SUPC signal: SUPC_WKUP8 */
#define PIN_PA3X1_SUPC_WKUP9                       _L_(3)       /**< SUPC signal: SUPC_WKUP9 on PA3 mux X1 */
#define PIO_PA3X1_SUPC_WKUP9                       (_U_(1) << 3) /**< SUPC signal: SUPC_WKUP9 */
#define PIN_PA4X1_SUPC_WKUP10                      _L_(4)       /**< SUPC signal: SUPC_WKUP10 on PA4 mux X1 */
#define PIO_PA4X1_SUPC_WKUP10                      (_U_(1) << 4) /**< SUPC signal: SUPC_WKUP10 */
#define PIN_PA24X1_SUPC_WKUP11                     _L_(24)      /**< SUPC signal: SUPC_WKUP11 on PA24 mux X1 */
#define PIO_PA24X1_SUPC_WKUP11                     (_U_(1) << 24) /**< SUPC signal: SUPC_WKUP11 */
#define PIN_PB2X1_SUPC_WKUP12                      _L_(34)      /**< SUPC signal: SUPC_WKUP12 on PB2 mux X1 */
#define PIO_PB2X1_SUPC_WKUP12                      (_U_(1) << 2) /**< SUPC signal: SUPC_WKUP12 */
#define PIN_PB3X1_SUPC_WKUP13                      _L_(35)      /**< SUPC signal: SUPC_WKUP13 on PB3 mux X1 */
#define PIO_PB3X1_SUPC_WKUP13                      (_U_(1) << 3) /**< SUPC signal: SUPC_WKUP13 */
#define PIN_PB8X1_SUPC_WKUP14                      _L_(40)      /**< SUPC signal: SUPC_WKUP14 on PB8 mux X1 */
#define PIO_PB8X1_SUPC_WKUP14                      (_U_(1) << 8) /**< SUPC signal: SUPC_WKUP14 */
#define PIN_PB9X1_SUPC_WKUP15                      _L_(41)      /**< SUPC signal: SUPC_WKUP15 on PB9 mux X1 */
#define PIO_PB9X1_SUPC_WKUP15                      (_U_(1) << 9) /**< SUPC signal: SUPC_WKUP15 */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PA2A_TC0_TCLK0                         _L_(2)       /**< TC0 signal: TC0_TCLK0 on PA2 mux A */
#define MUX_PA2A_TC0_TCLK0                         _L_(0)       /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PA2A_TC0_TCLK0                         (_U_(1) << 2) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PA19A_TC0_TCLK1                        _L_(19)      /**< TC0 signal: TC0_TCLK1 on PA19 mux A */
#define MUX_PA19A_TC0_TCLK1                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PA19A_TC0_TCLK1                        (_U_(1) << 19) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PA20A_TC0_TCLK2                        _L_(20)      /**< TC0 signal: TC0_TCLK2 on PA20 mux A */
#define MUX_PA20A_TC0_TCLK2                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PA20A_TC0_TCLK2                        (_U_(1) << 20) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PA0B_TC0_TIOA0                         _L_(0)       /**< TC0 signal: TC0_TIOA0 on PA0 mux B */
#define MUX_PA0B_TC0_TIOA0                         _L_(1)       /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA0B_TC0_TIOA0                         (_U_(1) << 0) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PA23B_TC0_TIOA1                        _L_(23)      /**< TC0 signal: TC0_TIOA1 on PA23 mux B */
#define MUX_PA23B_TC0_TIOA1                        _L_(1)       /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PA23B_TC0_TIOA1                        (_U_(1) << 23) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PA21A_TC0_TIOA2                        _L_(21)      /**< TC0 signal: TC0_TIOA2 on PA21 mux A */
#define MUX_PA21A_TC0_TIOA2                        _L_(0)       /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PA21A_TC0_TIOA2                        (_U_(1) << 21) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PA1B_TC0_TIOB0                         _L_(1)       /**< TC0 signal: TC0_TIOB0 on PA1 mux B */
#define MUX_PA1B_TC0_TIOB0                         _L_(1)       /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA1B_TC0_TIOB0                         (_U_(1) << 1) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PA16B_TC0_TIOB1                        _L_(16)      /**< TC0 signal: TC0_TIOB1 on PA16 mux B */
#define MUX_PA16B_TC0_TIOB1                        _L_(1)       /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PA16B_TC0_TIOB1                        (_U_(1) << 16) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PA22A_TC0_TIOB2                        _L_(22)      /**< TC0 signal: TC0_TIOB2 on PA22 mux A */
#define MUX_PA22A_TC0_TIOB2                        _L_(0)       /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PA22A_TC0_TIOB2                        (_U_(1) << 22) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TWI0 peripheral ========== */
#define PIN_PA9A_TWI0_TWCK                         _L_(9)       /**< TWI0 signal: TWI0_TWCK on PA9 mux A */
#define MUX_PA9A_TWI0_TWCK                         _L_(0)       /**< TWI0 signal line function value: TWI0_TWCK */
#define PIO_PA9A_TWI0_TWCK                         (_U_(1) << 9) /**< TWI0 signal: TWI0_TWCK */
#define PIN_PA10A_TWI0_TWD                         _L_(10)      /**< TWI0 signal: TWI0_TWD on PA10 mux A */
#define MUX_PA10A_TWI0_TWD                         _L_(0)       /**< TWI0 signal line function value: TWI0_TWD */
#define PIO_PA10A_TWI0_TWD                         (_U_(1) << 10) /**< TWI0 signal: TWI0_TWD */
/* ========== PIO definition for TWI1 peripheral ========== */
#define PIN_PB2A_TWI1_TWCK                         _L_(34)      /**< TWI1 signal: TWI1_TWCK on PB2 mux A */
#define MUX_PB2A_TWI1_TWCK                         _L_(0)       /**< TWI1 signal line function value: TWI1_TWCK */
#define PIO_PB2A_TWI1_TWCK                         (_U_(1) << 2) /**< TWI1 signal: TWI1_TWCK */
#define PIN_PB3A_TWI1_TWD                          _L_(35)      /**< TWI1 signal: TWI1_TWD on PB3 mux A */
#define MUX_PB3A_TWI1_TWD                          _L_(0)       /**< TWI1 signal line function value: TWI1_TWD */
#define PIO_PB3A_TWI1_TWD                          (_U_(1) << 3) /**< TWI1 signal: TWI1_TWD */
/* ========== PIO definition for TWI2 peripheral ========== */
#define PIN_PA5A_TWI2_TWCK                         _L_(5)       /**< TWI2 signal: TWI2_TWCK on PA5 mux A */
#define MUX_PA5A_TWI2_TWCK                         _L_(0)       /**< TWI2 signal line function value: TWI2_TWCK */
#define PIO_PA5A_TWI2_TWCK                         (_U_(1) << 5) /**< TWI2 signal: TWI2_TWCK */
#define PIN_PA6A_TWI2_TWD                          _L_(6)       /**< TWI2 signal: TWI2_TWD on PA6 mux A */
#define MUX_PA6A_TWI2_TWD                          _L_(0)       /**< TWI2 signal line function value: TWI2_TWD */
#define PIO_PA6A_TWI2_TWD                          (_U_(1) << 6) /**< TWI2 signal: TWI2_TWD */
/* ========== PIO definition for TWI3 peripheral ========== */
#define PIN_PA4A_TWI3_TWCK                         _L_(4)       /**< TWI3 signal: TWI3_TWCK on PA4 mux A */
#define MUX_PA4A_TWI3_TWCK                         _L_(0)       /**< TWI3 signal line function value: TWI3_TWCK */
#define PIO_PA4A_TWI3_TWCK                         (_U_(1) << 4) /**< TWI3 signal: TWI3_TWCK */
#define PIN_PA3A_TWI3_TWD                          _L_(3)       /**< TWI3 signal: TWI3_TWD on PA3 mux A */
#define MUX_PA3A_TWI3_TWD                          _L_(0)       /**< TWI3 signal line function value: TWI3_TWD */
#define PIO_PA3A_TWI3_TWD                          (_U_(1) << 3) /**< TWI3 signal: TWI3_TWD */
/* ========== PIO definition for TWI4 peripheral ========== */
#define PIN_PB9A_TWI4_TWCK                         _L_(41)      /**< TWI4 signal: TWI4_TWCK on PB9 mux A */
#define MUX_PB9A_TWI4_TWCK                         _L_(0)       /**< TWI4 signal line function value: TWI4_TWCK */
#define PIO_PB9A_TWI4_TWCK                         (_U_(1) << 9) /**< TWI4 signal: TWI4_TWCK */
#define PIN_PB11A_TWI4_TWCK                        _L_(43)      /**< TWI4 signal: TWI4_TWCK on PB11 mux A */
#define MUX_PB11A_TWI4_TWCK                        _L_(0)       /**< TWI4 signal line function value: TWI4_TWCK */
#define PIO_PB11A_TWI4_TWCK                        (_U_(1) << 11) /**< TWI4 signal: TWI4_TWCK */
#define PIN_PB8A_TWI4_TWD                          _L_(40)      /**< TWI4 signal: TWI4_TWD on PB8 mux A */
#define MUX_PB8A_TWI4_TWD                          _L_(0)       /**< TWI4 signal line function value: TWI4_TWD */
#define PIO_PB8A_TWI4_TWD                          (_U_(1) << 8) /**< TWI4 signal: TWI4_TWD */
#define PIN_PB10A_TWI4_TWD                         _L_(42)      /**< TWI4 signal: TWI4_TWD on PB10 mux A */
#define MUX_PB10A_TWI4_TWD                         _L_(0)       /**< TWI4 signal line function value: TWI4_TWD */
#define PIO_PB10A_TWI4_TWD                         (_U_(1) << 10) /**< TWI4 signal: TWI4_TWD */
/* ========== PIO definition for TWI5 peripheral ========== */
#define PIN_PA12A_TWI5_TWCK                        _L_(12)      /**< TWI5 signal: TWI5_TWCK on PA12 mux A */
#define MUX_PA12A_TWI5_TWCK                        _L_(0)       /**< TWI5 signal line function value: TWI5_TWCK */
#define PIO_PA12A_TWI5_TWCK                        (_U_(1) << 12) /**< TWI5 signal: TWI5_TWCK */
#define PIN_PA13A_TWI5_TWD                         _L_(13)      /**< TWI5 signal: TWI5_TWD on PA13 mux A */
#define MUX_PA13A_TWI5_TWD                         _L_(0)       /**< TWI5 signal line function value: TWI5_TWD */
#define PIO_PA13A_TWI5_TWD                         (_U_(1) << 13) /**< TWI5 signal: TWI5_TWD */
/* ========== PIO definition for TWI6 peripheral ========== */
#define PIN_PB1B_TWI6_TWCK                         _L_(33)      /**< TWI6 signal: TWI6_TWCK on PB1 mux B */
#define MUX_PB1B_TWI6_TWCK                         _L_(1)       /**< TWI6 signal line function value: TWI6_TWCK */
#define PIO_PB1B_TWI6_TWCK                         (_U_(1) << 1) /**< TWI6 signal: TWI6_TWCK */
#define PIN_PB11B_TWI6_TWCK                        _L_(43)      /**< TWI6 signal: TWI6_TWCK on PB11 mux B */
#define MUX_PB11B_TWI6_TWCK                        _L_(1)       /**< TWI6 signal line function value: TWI6_TWCK */
#define PIO_PB11B_TWI6_TWCK                        (_U_(1) << 11) /**< TWI6 signal: TWI6_TWCK */
#define PIN_PB0B_TWI6_TWD                          _L_(32)      /**< TWI6 signal: TWI6_TWD on PB0 mux B */
#define MUX_PB0B_TWI6_TWD                          _L_(1)       /**< TWI6 signal line function value: TWI6_TWD */
#define PIO_PB0B_TWI6_TWD                          (_U_(1) << 0) /**< TWI6 signal: TWI6_TWD */
#define PIN_PB10B_TWI6_TWD                         _L_(42)      /**< TWI6 signal: TWI6_TWD on PB10 mux B */
#define MUX_PB10B_TWI6_TWD                         _L_(1)       /**< TWI6 signal line function value: TWI6_TWD */
#define PIO_PB10B_TWI6_TWD                         (_U_(1) << 10) /**< TWI6 signal: TWI6_TWD */
/* ========== PIO definition for TWI7 peripheral ========== */
#define PIN_PA27B_TWI7_TWCK                        _L_(27)      /**< TWI7 signal: TWI7_TWCK on PA27 mux B */
#define MUX_PA27B_TWI7_TWCK                        _L_(1)       /**< TWI7 signal line function value: TWI7_TWCK */
#define PIO_PA27B_TWI7_TWCK                        (_U_(1) << 27) /**< TWI7 signal: TWI7_TWCK */
#define PIN_PA28B_TWI7_TWD                         _L_(28)      /**< TWI7 signal: TWI7_TWD on PA28 mux B */
#define MUX_PA28B_TWI7_TWD                         _L_(1)       /**< TWI7 signal line function value: TWI7_TWD */
#define PIO_PA28B_TWI7_TWD                         (_U_(1) << 28) /**< TWI7 signal: TWI7_TWD */
/* ========== PIO definition for UHP peripheral ========== */
#define PIN_PA21X1_UHP_DM                          _L_(21)      /**< UHP signal: UHP_DM on PA21 mux X1 */
#define PIO_PA21X1_UHP_DM                          (_U_(1) << 21) /**< UHP signal: UHP_DM */
#define PIN_PA22X1_UHP_DP                          _L_(22)      /**< UHP signal: UHP_DP on PA22 mux X1 */
#define PIO_PA22X1_UHP_DP                          (_U_(1) << 22) /**< UHP signal: UHP_DP */
/* ========== PIO definition for USART0 peripheral ========== */
#define PIN_PA25A_USART0_CTS                       _L_(25)      /**< USART0 signal: USART0_CTS on PA25 mux A */
#define MUX_PA25A_USART0_CTS                       _L_(0)       /**< USART0 signal line function value: USART0_CTS */
#define PIO_PA25A_USART0_CTS                       (_U_(1) << 25) /**< USART0 signal: USART0_CTS */
#define PIN_PA26A_USART0_RTS                       _L_(26)      /**< USART0 signal: USART0_RTS on PA26 mux A */
#define MUX_PA26A_USART0_RTS                       _L_(0)       /**< USART0 signal line function value: USART0_RTS */
#define PIO_PA26A_USART0_RTS                       (_U_(1) << 26) /**< USART0 signal: USART0_RTS */
#define PIN_PA9A_USART0_RXD                        _L_(9)       /**< USART0 signal: USART0_RXD on PA9 mux A */
#define MUX_PA9A_USART0_RXD                        _L_(0)       /**< USART0 signal line function value: USART0_RXD */
#define PIO_PA9A_USART0_RXD                        (_U_(1) << 9) /**< USART0 signal: USART0_RXD */
#define PIN_PB0A_USART0_SCK                        _L_(32)      /**< USART0 signal: USART0_SCK on PB0 mux A */
#define MUX_PB0A_USART0_SCK                        _L_(0)       /**< USART0 signal line function value: USART0_SCK */
#define PIO_PB0A_USART0_SCK                        (_U_(1) << 0) /**< USART0 signal: USART0_SCK */
#define PIN_PA10A_USART0_TXD                       _L_(10)      /**< USART0 signal: USART0_TXD on PA10 mux A */
#define MUX_PA10A_USART0_TXD                       _L_(0)       /**< USART0 signal line function value: USART0_TXD */
#define PIO_PA10A_USART0_TXD                       (_U_(1) << 10) /**< USART0 signal: USART0_TXD */
/* ========== PIO definition for USART1 peripheral ========== */
#define PIN_PA28A_USART1_CTS                       _L_(28)      /**< USART1 signal: USART1_CTS on PA28 mux A */
#define MUX_PA28A_USART1_CTS                       _L_(0)       /**< USART1 signal line function value: USART1_CTS */
#define PIO_PA28A_USART1_CTS                       (_U_(1) << 28) /**< USART1 signal: USART1_CTS */
#define PIN_PA29A_USART1_RTS                       _L_(29)      /**< USART1 signal: USART1_RTS on PA29 mux A */
#define MUX_PA29A_USART1_RTS                       _L_(0)       /**< USART1 signal line function value: USART1_RTS */
#define PIO_PA29A_USART1_RTS                       (_U_(1) << 29) /**< USART1 signal: USART1_RTS */
#define PIN_PB2A_USART1_RXD                        _L_(34)      /**< USART1 signal: USART1_RXD on PB2 mux A */
#define MUX_PB2A_USART1_RXD                        _L_(0)       /**< USART1 signal line function value: USART1_RXD */
#define PIO_PB2A_USART1_RXD                        (_U_(1) << 2) /**< USART1 signal: USART1_RXD */
#define PIN_PA27A_USART1_SCK                       _L_(27)      /**< USART1 signal: USART1_SCK on PA27 mux A */
#define MUX_PA27A_USART1_SCK                       _L_(0)       /**< USART1 signal line function value: USART1_SCK */
#define PIO_PA27A_USART1_SCK                       (_U_(1) << 27) /**< USART1 signal: USART1_SCK */
#define PIN_PB3A_USART1_TXD                        _L_(35)      /**< USART1 signal: USART1_TXD on PB3 mux A */
#define MUX_PB3A_USART1_TXD                        _L_(0)       /**< USART1 signal line function value: USART1_TXD */
#define PIO_PB3A_USART1_TXD                        (_U_(1) << 3) /**< USART1 signal: USART1_TXD */
/* ========== PIO definition for USART2 peripheral ========== */
#define PIN_PA16A_USART2_CTS                       _L_(16)      /**< USART2 signal: USART2_CTS on PA16 mux A */
#define MUX_PA16A_USART2_CTS                       _L_(0)       /**< USART2 signal line function value: USART2_CTS */
#define PIO_PA16A_USART2_CTS                       (_U_(1) << 16) /**< USART2 signal: USART2_CTS */
#define PIN_PA15A_USART2_RTS                       _L_(15)      /**< USART2 signal: USART2_RTS on PA15 mux A */
#define MUX_PA15A_USART2_RTS                       _L_(0)       /**< USART2 signal line function value: USART2_RTS */
#define PIO_PA15A_USART2_RTS                       (_U_(1) << 15) /**< USART2 signal: USART2_RTS */
#define PIN_PA5A_USART2_RXD                        _L_(5)       /**< USART2 signal: USART2_RXD on PA5 mux A */
#define MUX_PA5A_USART2_RXD                        _L_(0)       /**< USART2 signal line function value: USART2_RXD */
#define PIO_PA5A_USART2_RXD                        (_U_(1) << 5) /**< USART2 signal: USART2_RXD */
#define PIN_PA15B_USART2_SCK                       _L_(15)      /**< USART2 signal: USART2_SCK on PA15 mux B */
#define MUX_PA15B_USART2_SCK                       _L_(1)       /**< USART2 signal line function value: USART2_SCK */
#define PIO_PA15B_USART2_SCK                       (_U_(1) << 15) /**< USART2 signal: USART2_SCK */
#define PIN_PA24B_USART2_SCK                       _L_(24)      /**< USART2 signal: USART2_SCK on PA24 mux B */
#define MUX_PA24B_USART2_SCK                       _L_(1)       /**< USART2 signal line function value: USART2_SCK */
#define PIO_PA24B_USART2_SCK                       (_U_(1) << 24) /**< USART2 signal: USART2_SCK */
#define PIN_PA6A_USART2_TXD                        _L_(6)       /**< USART2 signal: USART2_TXD on PA6 mux A */
#define MUX_PA6A_USART2_TXD                        _L_(0)       /**< USART2 signal line function value: USART2_TXD */
#define PIO_PA6A_USART2_TXD                        (_U_(1) << 6) /**< USART2 signal: USART2_TXD */
/* ========== PIO definition for USART3 peripheral ========== */
#define PIN_PB14A_USART3_CTS                       _L_(46)      /**< USART3 signal: USART3_CTS on PB14 mux A */
#define MUX_PB14A_USART3_CTS                       _L_(0)       /**< USART3 signal line function value: USART3_CTS */
#define PIO_PB14A_USART3_CTS                       (_U_(1) << 14) /**< USART3 signal: USART3_CTS */
#define PIN_PB15A_USART3_RTS                       _L_(47)      /**< USART3 signal: USART3_RTS on PB15 mux A */
#define MUX_PB15A_USART3_RTS                       _L_(0)       /**< USART3 signal line function value: USART3_RTS */
#define PIO_PB15A_USART3_RTS                       (_U_(1) << 15) /**< USART3 signal: USART3_RTS */
#define PIN_PA4A_USART3_RXD                        _L_(4)       /**< USART3 signal: USART3_RXD on PA4 mux A */
#define MUX_PA4A_USART3_RXD                        _L_(0)       /**< USART3 signal line function value: USART3_RXD */
#define PIO_PA4A_USART3_RXD                        (_U_(1) << 4) /**< USART3 signal: USART3_RXD */
#define PIN_PB13A_USART3_SCK                       _L_(45)      /**< USART3 signal: USART3_SCK on PB13 mux A */
#define MUX_PB13A_USART3_SCK                       _L_(0)       /**< USART3 signal line function value: USART3_SCK */
#define PIO_PB13A_USART3_SCK                       (_U_(1) << 13) /**< USART3 signal: USART3_SCK */
#define PIN_PA3A_USART3_TXD                        _L_(3)       /**< USART3 signal: USART3_TXD on PA3 mux A */
#define MUX_PA3A_USART3_TXD                        _L_(0)       /**< USART3 signal line function value: USART3_TXD */
#define PIO_PA3A_USART3_TXD                        (_U_(1) << 3) /**< USART3 signal: USART3_TXD */
/* ========== PIO definition for USART4 peripheral ========== */
#define PIN_PB8B_USART4_CTS                        _L_(40)      /**< USART4 signal: USART4_CTS on PB8 mux B */
#define MUX_PB8B_USART4_CTS                        _L_(1)       /**< USART4 signal line function value: USART4_CTS */
#define PIO_PB8B_USART4_CTS                        (_U_(1) << 8) /**< USART4 signal: USART4_CTS */
#define PIN_PB9B_USART4_RTS                        _L_(41)      /**< USART4 signal: USART4_RTS on PB9 mux B */
#define MUX_PB9B_USART4_RTS                        _L_(1)       /**< USART4 signal line function value: USART4_RTS */
#define PIO_PB9B_USART4_RTS                        (_U_(1) << 9) /**< USART4 signal: USART4_RTS */
#define PIN_PB9A_USART4_RXD                        _L_(41)      /**< USART4 signal: USART4_RXD on PB9 mux A */
#define MUX_PB9A_USART4_RXD                        _L_(0)       /**< USART4 signal line function value: USART4_RXD */
#define PIO_PB9A_USART4_RXD                        (_U_(1) << 9) /**< USART4 signal: USART4_RXD */
#define PIN_PB11A_USART4_RXD                       _L_(43)      /**< USART4 signal: USART4_RXD on PB11 mux A */
#define MUX_PB11A_USART4_RXD                       _L_(0)       /**< USART4 signal line function value: USART4_RXD */
#define PIO_PB11A_USART4_RXD                       (_U_(1) << 11) /**< USART4 signal: USART4_RXD */
#define PIN_PB1A_USART4_SCK                        _L_(33)      /**< USART4 signal: USART4_SCK on PB1 mux A */
#define MUX_PB1A_USART4_SCK                        _L_(0)       /**< USART4 signal line function value: USART4_SCK */
#define PIO_PB1A_USART4_SCK                        (_U_(1) << 1) /**< USART4 signal: USART4_SCK */
#define PIN_PB8A_USART4_TXD                        _L_(40)      /**< USART4 signal: USART4_TXD on PB8 mux A */
#define MUX_PB8A_USART4_TXD                        _L_(0)       /**< USART4 signal line function value: USART4_TXD */
#define PIO_PB8A_USART4_TXD                        (_U_(1) << 8) /**< USART4 signal: USART4_TXD */
#define PIN_PB10A_USART4_TXD                       _L_(42)      /**< USART4 signal: USART4_TXD on PB10 mux A */
#define MUX_PB10A_USART4_TXD                       _L_(0)       /**< USART4 signal line function value: USART4_TXD */
#define PIO_PB10A_USART4_TXD                       (_U_(1) << 10) /**< USART4 signal: USART4_TXD */
/* ========== PIO definition for USART5 peripheral ========== */
#define PIN_PA11A_USART5_CTS                       _L_(11)      /**< USART5 signal: USART5_CTS on PA11 mux A */
#define MUX_PA11A_USART5_CTS                       _L_(0)       /**< USART5 signal line function value: USART5_CTS */
#define PIO_PA11A_USART5_CTS                       (_U_(1) << 11) /**< USART5 signal: USART5_CTS */
#define PIN_PA5B_USART5_RTS                        _L_(5)       /**< USART5 signal: USART5_RTS on PA5 mux B */
#define MUX_PA5B_USART5_RTS                        _L_(1)       /**< USART5 signal line function value: USART5_RTS */
#define PIO_PA5B_USART5_RTS                        (_U_(1) << 5) /**< USART5 signal: USART5_RTS */
#define PIN_PB2B_USART5_RTS                        _L_(34)      /**< USART5 signal: USART5_RTS on PB2 mux B */
#define MUX_PB2B_USART5_RTS                        _L_(1)       /**< USART5 signal line function value: USART5_RTS */
#define PIO_PB2B_USART5_RTS                        (_U_(1) << 2) /**< USART5 signal: USART5_RTS */
#define PIN_PA12A_USART5_RXD                       _L_(12)      /**< USART5 signal: USART5_RXD on PA12 mux A */
#define MUX_PA12A_USART5_RXD                       _L_(0)       /**< USART5 signal line function value: USART5_RXD */
#define PIO_PA12A_USART5_RXD                       (_U_(1) << 12) /**< USART5 signal: USART5_RXD */
#define PIN_PA14A_USART5_SCK                       _L_(14)      /**< USART5 signal: USART5_SCK on PA14 mux A */
#define MUX_PA14A_USART5_SCK                       _L_(0)       /**< USART5 signal line function value: USART5_SCK */
#define PIO_PA14A_USART5_SCK                       (_U_(1) << 14) /**< USART5 signal: USART5_SCK */
#define PIN_PA13A_USART5_TXD                       _L_(13)      /**< USART5 signal: USART5_TXD on PA13 mux A */
#define MUX_PA13A_USART5_TXD                       _L_(0)       /**< USART5 signal line function value: USART5_TXD */
#define PIO_PA13A_USART5_TXD                       (_U_(1) << 13) /**< USART5 signal: USART5_TXD */
/* ========== PIO definition for USART6 peripheral ========== */
#define PIN_PB14B_USART6_CTS                       _L_(46)      /**< USART6 signal: USART6_CTS on PB14 mux B */
#define MUX_PB14B_USART6_CTS                       _L_(1)       /**< USART6 signal line function value: USART6_CTS */
#define PIO_PB14B_USART6_CTS                       (_U_(1) << 14) /**< USART6 signal: USART6_CTS */
#define PIN_PB15B_USART6_RTS                       _L_(47)      /**< USART6 signal: USART6_RTS on PB15 mux B */
#define MUX_PB15B_USART6_RTS                       _L_(1)       /**< USART6 signal line function value: USART6_RTS */
#define PIO_PB15B_USART6_RTS                       (_U_(1) << 15) /**< USART6 signal: USART6_RTS */
#define PIN_PB1B_USART6_RXD                        _L_(33)      /**< USART6 signal: USART6_RXD on PB1 mux B */
#define MUX_PB1B_USART6_RXD                        _L_(1)       /**< USART6 signal line function value: USART6_RXD */
#define PIO_PB1B_USART6_RXD                        (_U_(1) << 1) /**< USART6 signal: USART6_RXD */
#define PIN_PB11B_USART6_RXD                       _L_(43)      /**< USART6 signal: USART6_RXD on PB11 mux B */
#define MUX_PB11B_USART6_RXD                       _L_(1)       /**< USART6 signal line function value: USART6_RXD */
#define PIO_PB11B_USART6_RXD                       (_U_(1) << 11) /**< USART6 signal: USART6_RXD */
#define PIN_PB13B_USART6_SCK                       _L_(45)      /**< USART6 signal: USART6_SCK on PB13 mux B */
#define MUX_PB13B_USART6_SCK                       _L_(1)       /**< USART6 signal line function value: USART6_SCK */
#define PIO_PB13B_USART6_SCK                       (_U_(1) << 13) /**< USART6 signal: USART6_SCK */
#define PIN_PB0B_USART6_TXD                        _L_(32)      /**< USART6 signal: USART6_TXD on PB0 mux B */
#define MUX_PB0B_USART6_TXD                        _L_(1)       /**< USART6 signal line function value: USART6_TXD */
#define PIO_PB0B_USART6_TXD                        (_U_(1) << 0) /**< USART6 signal: USART6_TXD */
#define PIN_PB10B_USART6_TXD                       _L_(42)      /**< USART6 signal: USART6_TXD on PB10 mux B */
#define MUX_PB10B_USART6_TXD                       _L_(1)       /**< USART6 signal line function value: USART6_TXD */
#define PIO_PB10B_USART6_TXD                       (_U_(1) << 10) /**< USART6 signal: USART6_TXD */
/* ========== PIO definition for USART7 peripheral ========== */
#define PIN_PA30B_USART7_CTS                       _L_(30)      /**< USART7 signal: USART7_CTS on PA30 mux B */
#define MUX_PA30B_USART7_CTS                       _L_(1)       /**< USART7 signal line function value: USART7_CTS */
#define PIO_PA30B_USART7_CTS                       (_U_(1) << 30) /**< USART7 signal: USART7_CTS */
#define PIN_PA31B_USART7_RTS                       _L_(31)      /**< USART7 signal: USART7_RTS on PA31 mux B */
#define MUX_PA31B_USART7_RTS                       _L_(1)       /**< USART7 signal line function value: USART7_RTS */
#define PIO_PA31B_USART7_RTS                       (_U_(1) << 31) /**< USART7 signal: USART7_RTS */
#define PIN_PA27B_USART7_RXD                       _L_(27)      /**< USART7 signal: USART7_RXD on PA27 mux B */
#define MUX_PA27B_USART7_RXD                       _L_(1)       /**< USART7 signal line function value: USART7_RXD */
#define PIO_PA27B_USART7_RXD                       (_U_(1) << 27) /**< USART7 signal: USART7_RXD */
#define PIN_PA29B_USART7_SCK                       _L_(29)      /**< USART7 signal: USART7_SCK on PA29 mux B */
#define MUX_PA29B_USART7_SCK                       _L_(1)       /**< USART7 signal line function value: USART7_SCK */
#define PIO_PA29B_USART7_SCK                       (_U_(1) << 29) /**< USART7 signal: USART7_SCK */
#define PIN_PA28B_USART7_TXD                       _L_(28)      /**< USART7 signal: USART7_TXD on PA28 mux B */
#define MUX_PA28B_USART7_TXD                       _L_(1)       /**< USART7 signal line function value: USART7_TXD */
#define PIO_PA28B_USART7_TXD                       (_U_(1) << 28) /**< USART7 signal: USART7_TXD */

#endif /* _SAMG55J19_GPIO_H_ */

