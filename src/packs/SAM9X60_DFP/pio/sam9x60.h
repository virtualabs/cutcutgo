/*
 * Peripheral I/O description for SAM9X60
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

/* file generated from device description version 2021-05-04T16:22:08Z */
#ifndef _SAM9X60_GPIO_H_
#define _SAM9X60_GPIO_H_

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
#define PIN_PB16                    ( 48  )  /**< Pin Number for PB16 */
#define PIN_PB17                    ( 49  )  /**< Pin Number for PB17 */
#define PIN_PB18                    ( 50  )  /**< Pin Number for PB18 */
#define PIN_PB19                    ( 51  )  /**< Pin Number for PB19 */
#define PIN_PB20                    ( 52  )  /**< Pin Number for PB20 */
#define PIN_PB21                    ( 53  )  /**< Pin Number for PB21 */
#define PIN_PB22                    ( 54  )  /**< Pin Number for PB22 */
#define PIN_PB23                    ( 55  )  /**< Pin Number for PB23 */
#define PIN_PB24                    ( 56  )  /**< Pin Number for PB24 */
#define PIN_PB25                    ( 57  )  /**< Pin Number for PB25 */
#define PIN_PC0                     ( 58  )  /**< Pin Number for PC0 */
#define PIN_PC1                     ( 59  )  /**< Pin Number for PC1 */
#define PIN_PC2                     ( 60  )  /**< Pin Number for PC2 */
#define PIN_PC3                     ( 61  )  /**< Pin Number for PC3 */
#define PIN_PC4                     ( 62  )  /**< Pin Number for PC4 */
#define PIN_PC5                     ( 63  )  /**< Pin Number for PC5 */
#define PIN_PC6                     ( 64  )  /**< Pin Number for PC6 */
#define PIN_PC7                     ( 65  )  /**< Pin Number for PC7 */
#define PIN_PC8                     ( 66  )  /**< Pin Number for PC8 */
#define PIN_PC9                     ( 67  )  /**< Pin Number for PC9 */
#define PIN_PC10                    ( 68  )  /**< Pin Number for PC10 */
#define PIN_PC11                    ( 69  )  /**< Pin Number for PC11 */
#define PIN_PC12                    ( 70  )  /**< Pin Number for PC12 */
#define PIN_PC13                    ( 71  )  /**< Pin Number for PC13 */
#define PIN_PC14                    ( 72  )  /**< Pin Number for PC14 */
#define PIN_PC15                    ( 73  )  /**< Pin Number for PC15 */
#define PIN_PC16                    ( 74  )  /**< Pin Number for PC16 */
#define PIN_PC17                    ( 75  )  /**< Pin Number for PC17 */
#define PIN_PC18                    ( 76  )  /**< Pin Number for PC18 */
#define PIN_PC19                    ( 77  )  /**< Pin Number for PC19 */
#define PIN_PC20                    ( 78  )  /**< Pin Number for PC20 */
#define PIN_PC21                    ( 79  )  /**< Pin Number for PC21 */
#define PIN_PC22                    ( 80  )  /**< Pin Number for PC22 */
#define PIN_PC23                    ( 81  )  /**< Pin Number for PC23 */
#define PIN_PC24                    ( 82  )  /**< Pin Number for PC24 */
#define PIN_PC25                    ( 83  )  /**< Pin Number for PC25 */
#define PIN_PC26                    ( 84  )  /**< Pin Number for PC26 */
#define PIN_PC27                    ( 85  )  /**< Pin Number for PC27 */
#define PIN_PC28                    ( 86  )  /**< Pin Number for PC28 */
#define PIN_PC29                    ( 87  )  /**< Pin Number for PC29 */
#define PIN_PC30                    ( 88  )  /**< Pin Number for PC30 */
#define PIN_PC31                    ( 89  )  /**< Pin Number for PC31 */
#define PIN_PD0                     ( 90  )  /**< Pin Number for PD0 */
#define PIN_PD1                     ( 91  )  /**< Pin Number for PD1 */
#define PIN_PD2                     ( 92  )  /**< Pin Number for PD2 */
#define PIN_PD3                     ( 93  )  /**< Pin Number for PD3 */
#define PIN_PD4                     ( 94  )  /**< Pin Number for PD4 */
#define PIN_PD5                     ( 95  )  /**< Pin Number for PD5 */
#define PIN_PD6                     ( 96  )  /**< Pin Number for PD6 */
#define PIN_PD7                     ( 97  )  /**< Pin Number for PD7 */
#define PIN_PD8                     ( 98  )  /**< Pin Number for PD8 */
#define PIN_PD9                     ( 99  )  /**< Pin Number for PD9 */
#define PIN_PD10                    (100  )  /**< Pin Number for PD10 */
#define PIN_PD11                    (101  )  /**< Pin Number for PD11 */
#define PIN_PD12                    (102  )  /**< Pin Number for PD12 */
#define PIN_PD13                    (103  )  /**< Pin Number for PD13 */
#define PIN_PD14                    (104  )  /**< Pin Number for PD14 */
#define PIN_PD15                    (105  )  /**< Pin Number for PD15 */
#define PIN_PD16                    (106  )  /**< Pin Number for PD16 */
#define PIN_PD17                    (107  )  /**< Pin Number for PD17 */
#define PIN_PD18                    (108  )  /**< Pin Number for PD18 */
#define PIN_PD19                    (109  )  /**< Pin Number for PD19 */
#define PIN_PD20                    (110  )  /**< Pin Number for PD20 */
#define PIN_PD21                    (111  )  /**< Pin Number for PD21 */

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
#define PIO_PB16                    (_U_(1) << 16)  /**< PIO mask for PB16 */
#define PIO_PB17                    (_U_(1) << 17)  /**< PIO mask for PB17 */
#define PIO_PB18                    (_U_(1) << 18)  /**< PIO mask for PB18 */
#define PIO_PB19                    (_U_(1) << 19)  /**< PIO mask for PB19 */
#define PIO_PB20                    (_U_(1) << 20)  /**< PIO mask for PB20 */
#define PIO_PB21                    (_U_(1) << 21)  /**< PIO mask for PB21 */
#define PIO_PB22                    (_U_(1) << 22)  /**< PIO mask for PB22 */
#define PIO_PB23                    (_U_(1) << 23)  /**< PIO mask for PB23 */
#define PIO_PB24                    (_U_(1) << 24)  /**< PIO mask for PB24 */
#define PIO_PB25                    (_U_(1) << 25)  /**< PIO mask for PB25 */
#define PIO_PC0                     (_U_(1) << 26)  /**< PIO mask for PC0 */
#define PIO_PC1                     (_U_(1) << 27)  /**< PIO mask for PC1 */
#define PIO_PC2                     (_U_(1) << 28)  /**< PIO mask for PC2 */
#define PIO_PC3                     (_U_(1) << 29)  /**< PIO mask for PC3 */
#define PIO_PC4                     (_U_(1) << 30)  /**< PIO mask for PC4 */
#define PIO_PC5                     (_U_(1) << 31)  /**< PIO mask for PC5 */
#define PIO_PC6                     (_U_(1) << 0)   /**< PIO mask for PC6 */
#define PIO_PC7                     (_U_(1) << 1)   /**< PIO mask for PC7 */
#define PIO_PC8                     (_U_(1) << 2)   /**< PIO mask for PC8 */
#define PIO_PC9                     (_U_(1) << 3)   /**< PIO mask for PC9 */
#define PIO_PC10                    (_U_(1) << 4)   /**< PIO mask for PC10 */
#define PIO_PC11                    (_U_(1) << 5)   /**< PIO mask for PC11 */
#define PIO_PC12                    (_U_(1) << 6)   /**< PIO mask for PC12 */
#define PIO_PC13                    (_U_(1) << 7)   /**< PIO mask for PC13 */
#define PIO_PC14                    (_U_(1) << 8)   /**< PIO mask for PC14 */
#define PIO_PC15                    (_U_(1) << 9)   /**< PIO mask for PC15 */
#define PIO_PC16                    (_U_(1) << 10)  /**< PIO mask for PC16 */
#define PIO_PC17                    (_U_(1) << 11)  /**< PIO mask for PC17 */
#define PIO_PC18                    (_U_(1) << 12)  /**< PIO mask for PC18 */
#define PIO_PC19                    (_U_(1) << 13)  /**< PIO mask for PC19 */
#define PIO_PC20                    (_U_(1) << 14)  /**< PIO mask for PC20 */
#define PIO_PC21                    (_U_(1) << 15)  /**< PIO mask for PC21 */
#define PIO_PC22                    (_U_(1) << 16)  /**< PIO mask for PC22 */
#define PIO_PC23                    (_U_(1) << 17)  /**< PIO mask for PC23 */
#define PIO_PC24                    (_U_(1) << 18)  /**< PIO mask for PC24 */
#define PIO_PC25                    (_U_(1) << 19)  /**< PIO mask for PC25 */
#define PIO_PC26                    (_U_(1) << 20)  /**< PIO mask for PC26 */
#define PIO_PC27                    (_U_(1) << 21)  /**< PIO mask for PC27 */
#define PIO_PC28                    (_U_(1) << 22)  /**< PIO mask for PC28 */
#define PIO_PC29                    (_U_(1) << 23)  /**< PIO mask for PC29 */
#define PIO_PC30                    (_U_(1) << 24)  /**< PIO mask for PC30 */
#define PIO_PC31                    (_U_(1) << 25)  /**< PIO mask for PC31 */
#define PIO_PD0                     (_U_(1) << 26)  /**< PIO mask for PD0 */
#define PIO_PD1                     (_U_(1) << 27)  /**< PIO mask for PD1 */
#define PIO_PD2                     (_U_(1) << 28)  /**< PIO mask for PD2 */
#define PIO_PD3                     (_U_(1) << 29)  /**< PIO mask for PD3 */
#define PIO_PD4                     (_U_(1) << 30)  /**< PIO mask for PD4 */
#define PIO_PD5                     (_U_(1) << 31)  /**< PIO mask for PD5 */
#define PIO_PD6                     (_U_(1) << 0)   /**< PIO mask for PD6 */
#define PIO_PD7                     (_U_(1) << 1)   /**< PIO mask for PD7 */
#define PIO_PD8                     (_U_(1) << 2)   /**< PIO mask for PD8 */
#define PIO_PD9                     (_U_(1) << 3)   /**< PIO mask for PD9 */
#define PIO_PD10                    (_U_(1) << 4)   /**< PIO mask for PD10 */
#define PIO_PD11                    (_U_(1) << 5)   /**< PIO mask for PD11 */
#define PIO_PD12                    (_U_(1) << 6)   /**< PIO mask for PD12 */
#define PIO_PD13                    (_U_(1) << 7)   /**< PIO mask for PD13 */
#define PIO_PD14                    (_U_(1) << 8)   /**< PIO mask for PD14 */
#define PIO_PD15                    (_U_(1) << 9)   /**< PIO mask for PD15 */
#define PIO_PD16                    (_U_(1) << 10)  /**< PIO mask for PD16 */
#define PIO_PD17                    (_U_(1) << 11)  /**< PIO mask for PD17 */
#define PIO_PD18                    (_U_(1) << 12)  /**< PIO mask for PD18 */
#define PIO_PD19                    (_U_(1) << 13)  /**< PIO mask for PD19 */
#define PIO_PD20                    (_U_(1) << 14)  /**< PIO mask for PD20 */
#define PIO_PD21                    (_U_(1) << 15)  /**< PIO mask for PD21 */

/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PB11X1_ADC_AD0                         _L_(43)      /**< ADC signal: ADC_AD0 on PB11 mux X1 */
#define PIO_PB11X1_ADC_AD0                         (_U_(1) << 11) /**< ADC signal: ADC_AD0 */
#define PIN_PB12X1_ADC_AD1                         _L_(44)      /**< ADC signal: ADC_AD1 on PB12 mux X1 */
#define PIO_PB12X1_ADC_AD1                         (_U_(1) << 12) /**< ADC signal: ADC_AD1 */
#define PIN_PB13X1_ADC_AD2                         _L_(45)      /**< ADC signal: ADC_AD2 on PB13 mux X1 */
#define PIO_PB13X1_ADC_AD2                         (_U_(1) << 13) /**< ADC signal: ADC_AD2 */
#define PIN_PB14X1_ADC_AD3                         _L_(46)      /**< ADC signal: ADC_AD3 on PB14 mux X1 */
#define PIO_PB14X1_ADC_AD3                         (_U_(1) << 14) /**< ADC signal: ADC_AD3 */
#define PIN_PB15X1_ADC_AD4                         _L_(47)      /**< ADC signal: ADC_AD4 on PB15 mux X1 */
#define PIO_PB15X1_ADC_AD4                         (_U_(1) << 15) /**< ADC signal: ADC_AD4 */
#define PIN_PB16X1_ADC_AD5                         _L_(48)      /**< ADC signal: ADC_AD5 on PB16 mux X1 */
#define PIO_PB16X1_ADC_AD5                         (_U_(1) << 16) /**< ADC signal: ADC_AD5 */
#define PIN_PB17X1_ADC_AD6                         _L_(49)      /**< ADC signal: ADC_AD6 on PB17 mux X1 */
#define PIO_PB17X1_ADC_AD6                         (_U_(1) << 17) /**< ADC signal: ADC_AD6 */
#define PIN_PB6X1_ADC_AD7                          _L_(38)      /**< ADC signal: ADC_AD7 on PB6 mux X1 */
#define PIO_PB6X1_ADC_AD7                          (_U_(1) << 6) /**< ADC signal: ADC_AD7 */
#define PIN_PB7X1_ADC_AD8                          _L_(39)      /**< ADC signal: ADC_AD8 on PB7 mux X1 */
#define PIO_PB7X1_ADC_AD8                          (_U_(1) << 7) /**< ADC signal: ADC_AD8 */
#define PIN_PB8X1_ADC_AD9                          _L_(40)      /**< ADC signal: ADC_AD9 on PB8 mux X1 */
#define PIO_PB8X1_ADC_AD9                          (_U_(1) << 8) /**< ADC signal: ADC_AD9 */
#define PIN_PB9X1_ADC_AD10                         _L_(41)      /**< ADC signal: ADC_AD10 on PB9 mux X1 */
#define PIO_PB9X1_ADC_AD10                         (_U_(1) << 9) /**< ADC signal: ADC_AD10 */
#define PIN_PB10X1_ADC_AD11                        _L_(42)      /**< ADC signal: ADC_AD11 on PB10 mux X1 */
#define PIO_PB10X1_ADC_AD11                        (_U_(1) << 10) /**< ADC signal: ADC_AD11 */
#define PIN_PB18B_ADC_ADTRG                        _L_(50)      /**< ADC signal: ADC_ADTRG on PB18 mux B */
#define MUX_PB18B_ADC_ADTRG                        _L_(1)       /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PB18B_ADC_ADTRG                        (_U_(1) << 18) /**< ADC signal: ADC_ADTRG */
/* ========== PIO definition for AIC peripheral ========== */
#define PIN_PC31A_AIC_FIQ                          _L_(89)      /**< AIC signal: AIC_FIQ on PC31 mux A */
#define MUX_PC31A_AIC_FIQ                          _L_(0)       /**< AIC signal line function value: AIC_FIQ */
#define PIO_PC31A_AIC_FIQ                          (_U_(1) << 25) /**< AIC signal: AIC_FIQ */
#define PIN_PB18A_AIC_IRQ                          _L_(50)      /**< AIC signal: AIC_IRQ on PB18 mux A */
#define MUX_PB18A_AIC_IRQ                          _L_(0)       /**< AIC signal line function value: AIC_IRQ */
#define PIO_PB18A_AIC_IRQ                          (_U_(1) << 18) /**< AIC signal: AIC_IRQ */
/* ========== PIO definition for CAN0 peripheral ========== */
#define PIN_PA9B_CAN0_CANRX0                       _L_(9)       /**< CAN0 signal: CAN0_CANRX0 on PA9 mux B */
#define MUX_PA9B_CAN0_CANRX0                       _L_(1)       /**< CAN0 signal line function value: CAN0_CANRX0 */
#define PIO_PA9B_CAN0_CANRX0                       (_U_(1) << 9) /**< CAN0 signal: CAN0_CANRX0 */
#define PIN_PA10B_CAN0_CANTX0                      _L_(10)      /**< CAN0 signal: CAN0_CANTX0 on PA10 mux B */
#define MUX_PA10B_CAN0_CANTX0                      _L_(1)       /**< CAN0 signal line function value: CAN0_CANTX0 */
#define PIO_PA10B_CAN0_CANTX0                      (_U_(1) << 10) /**< CAN0 signal: CAN0_CANTX0 */
/* ========== PIO definition for CAN1 peripheral ========== */
#define PIN_PA6B_CAN1_CANRX1                       _L_(6)       /**< CAN1 signal: CAN1_CANRX1 on PA6 mux B */
#define MUX_PA6B_CAN1_CANRX1                       _L_(1)       /**< CAN1 signal line function value: CAN1_CANRX1 */
#define PIO_PA6B_CAN1_CANRX1                       (_U_(1) << 6) /**< CAN1 signal: CAN1_CANRX1 */
#define PIN_PA5B_CAN1_CANTX1                       _L_(5)       /**< CAN1 signal: CAN1_CANTX1 on PA5 mux B */
#define MUX_PA5B_CAN1_CANTX1                       _L_(1)       /**< CAN1 signal line function value: CAN1_CANTX1 */
#define PIO_PA5B_CAN1_CANTX1                       (_U_(1) << 5) /**< CAN1 signal: CAN1_CANTX1 */
/* ========== PIO definition for CLASSD peripheral ========== */
#define PIN_PA24C_CLASSD_L0                        _L_(24)      /**< CLASSD signal: CLASSD_L0 on PA24 mux C */
#define MUX_PA24C_CLASSD_L0                        _L_(2)       /**< CLASSD signal line function value: CLASSD_L0 */
#define PIO_PA24C_CLASSD_L0                        (_U_(1) << 24) /**< CLASSD signal: CLASSD_L0 */
#define PIN_PA25C_CLASSD_L1                        _L_(25)      /**< CLASSD signal: CLASSD_L1 on PA25 mux C */
#define MUX_PA25C_CLASSD_L1                        _L_(2)       /**< CLASSD signal line function value: CLASSD_L1 */
#define PIO_PA25C_CLASSD_L1                        (_U_(1) << 25) /**< CLASSD signal: CLASSD_L1 */
#define PIN_PA26C_CLASSD_L2                        _L_(26)      /**< CLASSD signal: CLASSD_L2 on PA26 mux C */
#define MUX_PA26C_CLASSD_L2                        _L_(2)       /**< CLASSD signal line function value: CLASSD_L2 */
#define PIO_PA26C_CLASSD_L2                        (_U_(1) << 26) /**< CLASSD signal: CLASSD_L2 */
#define PIN_PA27C_CLASSD_L3                        _L_(27)      /**< CLASSD signal: CLASSD_L3 on PA27 mux C */
#define MUX_PA27C_CLASSD_L3                        _L_(2)       /**< CLASSD signal line function value: CLASSD_L3 */
#define PIO_PA27C_CLASSD_L3                        (_U_(1) << 27) /**< CLASSD signal: CLASSD_L3 */
/* ========== PIO definition for DBGU peripheral ========== */
#define PIN_PA9A_DBGU_DRXD                         _L_(9)       /**< DBGU signal: DBGU_DRXD on PA9 mux A */
#define MUX_PA9A_DBGU_DRXD                         _L_(0)       /**< DBGU signal line function value: DBGU_DRXD */
#define PIO_PA9A_DBGU_DRXD                         (_U_(1) << 9) /**< DBGU signal: DBGU_DRXD */
#define PIN_PA10A_DBGU_DTXD                        _L_(10)      /**< DBGU signal: DBGU_DTXD on PA10 mux A */
#define MUX_PA10A_DBGU_DTXD                        _L_(0)       /**< DBGU signal line function value: DBGU_DTXD */
#define PIO_PA10A_DBGU_DTXD                        (_U_(1) << 10) /**< DBGU signal: DBGU_DTXD */
/* ========== PIO definition for EMAC0 peripheral ========== */
#define PIN_PB17A_EMAC0_E0_COL                     _L_(49)      /**< EMAC0 signal: EMAC0_E0_COL on PB17 mux A */
#define MUX_PB17A_EMAC0_E0_COL                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_COL */
#define PIO_PB17A_EMAC0_E0_COL                     (_U_(1) << 17) /**< EMAC0 signal: EMAC0_E0_COL */
#define PIN_PB16A_EMAC0_E0_CRS                     _L_(48)      /**< EMAC0 signal: EMAC0_E0_CRS on PB16 mux A */
#define MUX_PB16A_EMAC0_E0_CRS                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_CRS */
#define PIO_PB16A_EMAC0_E0_CRS                     (_U_(1) << 16) /**< EMAC0 signal: EMAC0_E0_CRS */
#define PIN_PA30C_EMAC0_E0_MDC                     _L_(30)      /**< EMAC0 signal: EMAC0_E0_MDC on PA30 mux C */
#define MUX_PA30C_EMAC0_E0_MDC                     _L_(2)       /**< EMAC0 signal line function value: EMAC0_E0_MDC */
#define PIO_PA30C_EMAC0_E0_MDC                     (_U_(1) << 30) /**< EMAC0 signal: EMAC0_E0_MDC */
#define PIN_PB6A_EMAC0_E0_MDC                      _L_(38)      /**< EMAC0 signal: EMAC0_E0_MDC on PB6 mux A */
#define MUX_PB6A_EMAC0_E0_MDC                      _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_MDC */
#define PIO_PB6A_EMAC0_E0_MDC                      (_U_(1) << 6) /**< EMAC0 signal: EMAC0_E0_MDC */
#define PIN_PB5A_EMAC0_E0_MDIO                     _L_(37)      /**< EMAC0 signal: EMAC0_E0_MDIO on PB5 mux A */
#define MUX_PB5A_EMAC0_E0_MDIO                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_MDIO */
#define PIO_PB5A_EMAC0_E0_MDIO                     (_U_(1) << 5) /**< EMAC0 signal: EMAC0_E0_MDIO */
#define PIN_PB0A_EMAC0_E0_RX0                      _L_(32)      /**< EMAC0 signal: EMAC0_E0_RX0 on PB0 mux A */
#define MUX_PB0A_EMAC0_E0_RX0                      _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_RX0 */
#define PIO_PB0A_EMAC0_E0_RX0                      (_U_(1) << 0) /**< EMAC0 signal: EMAC0_E0_RX0 */
#define PIN_PB1A_EMAC0_E0_RX1                      _L_(33)      /**< EMAC0 signal: EMAC0_E0_RX1 on PB1 mux A */
#define MUX_PB1A_EMAC0_E0_RX1                      _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_RX1 */
#define PIO_PB1A_EMAC0_E0_RX1                      (_U_(1) << 1) /**< EMAC0 signal: EMAC0_E0_RX1 */
#define PIN_PB13A_EMAC0_E0_RX2                     _L_(45)      /**< EMAC0 signal: EMAC0_E0_RX2 on PB13 mux A */
#define MUX_PB13A_EMAC0_E0_RX2                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_RX2 */
#define PIO_PB13A_EMAC0_E0_RX2                     (_U_(1) << 13) /**< EMAC0 signal: EMAC0_E0_RX2 */
#define PIN_PB14A_EMAC0_E0_RX3                     _L_(46)      /**< EMAC0 signal: EMAC0_E0_RX3 on PB14 mux A */
#define MUX_PB14A_EMAC0_E0_RX3                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_RX3 */
#define PIO_PB14A_EMAC0_E0_RX3                     (_U_(1) << 14) /**< EMAC0 signal: EMAC0_E0_RX3 */
#define PIN_PB15A_EMAC0_E0_RXCK                    _L_(47)      /**< EMAC0 signal: EMAC0_E0_RXCK on PB15 mux A */
#define MUX_PB15A_EMAC0_E0_RXCK                    _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_RXCK */
#define PIO_PB15A_EMAC0_E0_RXCK                    (_U_(1) << 15) /**< EMAC0 signal: EMAC0_E0_RXCK */
#define PIN_PB3A_EMAC0_E0_RXDV                     _L_(35)      /**< EMAC0 signal: EMAC0_E0_RXDV on PB3 mux A */
#define MUX_PB3A_EMAC0_E0_RXDV                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_RXDV */
#define PIO_PB3A_EMAC0_E0_RXDV                     (_U_(1) << 3) /**< EMAC0 signal: EMAC0_E0_RXDV */
#define PIN_PB2A_EMAC0_E0_RXER                     _L_(34)      /**< EMAC0 signal: EMAC0_E0_RXER on PB2 mux A */
#define MUX_PB2A_EMAC0_E0_RXER                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_RXER */
#define PIO_PB2A_EMAC0_E0_RXER                     (_U_(1) << 2) /**< EMAC0 signal: EMAC0_E0_RXER */
#define PIN_PA2C_EMAC0_E0_TX0                      _L_(2)       /**< EMAC0 signal: EMAC0_E0_TX0 on PA2 mux C */
#define MUX_PA2C_EMAC0_E0_TX0                      _L_(2)       /**< EMAC0 signal line function value: EMAC0_E0_TX0 */
#define PIO_PA2C_EMAC0_E0_TX0                      (_U_(1) << 2) /**< EMAC0 signal: EMAC0_E0_TX0 */
#define PIN_PB9A_EMAC0_E0_TX0                      _L_(41)      /**< EMAC0 signal: EMAC0_E0_TX0 on PB9 mux A */
#define MUX_PB9A_EMAC0_E0_TX0                      _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_TX0 */
#define PIO_PB9A_EMAC0_E0_TX0                      (_U_(1) << 9) /**< EMAC0 signal: EMAC0_E0_TX0 */
#define PIN_PA3C_EMAC0_E0_TX1                      _L_(3)       /**< EMAC0 signal: EMAC0_E0_TX1 on PA3 mux C */
#define MUX_PA3C_EMAC0_E0_TX1                      _L_(2)       /**< EMAC0 signal line function value: EMAC0_E0_TX1 */
#define PIO_PA3C_EMAC0_E0_TX1                      (_U_(1) << 3) /**< EMAC0 signal: EMAC0_E0_TX1 */
#define PIN_PB10A_EMAC0_E0_TX1                     _L_(42)      /**< EMAC0 signal: EMAC0_E0_TX1 on PB10 mux A */
#define MUX_PB10A_EMAC0_E0_TX1                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_TX1 */
#define PIO_PB10A_EMAC0_E0_TX1                     (_U_(1) << 10) /**< EMAC0 signal: EMAC0_E0_TX1 */
#define PIN_PB11A_EMAC0_E0_TX2                     _L_(43)      /**< EMAC0 signal: EMAC0_E0_TX2 on PB11 mux A */
#define MUX_PB11A_EMAC0_E0_TX2                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_TX2 */
#define PIO_PB11A_EMAC0_E0_TX2                     (_U_(1) << 11) /**< EMAC0 signal: EMAC0_E0_TX2 */
#define PIN_PB12A_EMAC0_E0_TX3                     _L_(44)      /**< EMAC0 signal: EMAC0_E0_TX3 on PB12 mux A */
#define MUX_PB12A_EMAC0_E0_TX3                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_TX3 */
#define PIO_PB12A_EMAC0_E0_TX3                     (_U_(1) << 12) /**< EMAC0 signal: EMAC0_E0_TX3 */
#define PIN_PB4A_EMAC0_E0_TXCK                     _L_(36)      /**< EMAC0 signal: EMAC0_E0_TXCK on PB4 mux A */
#define MUX_PB4A_EMAC0_E0_TXCK                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_TXCK */
#define PIO_PB4A_EMAC0_E0_TXCK                     (_U_(1) << 4) /**< EMAC0 signal: EMAC0_E0_TXCK */
#define PIN_PA31C_EMAC0_E0_TXEN                    _L_(31)      /**< EMAC0 signal: EMAC0_E0_TXEN on PA31 mux C */
#define MUX_PA31C_EMAC0_E0_TXEN                    _L_(2)       /**< EMAC0 signal line function value: EMAC0_E0_TXEN */
#define PIO_PA31C_EMAC0_E0_TXEN                    (_U_(1) << 31) /**< EMAC0 signal: EMAC0_E0_TXEN */
#define PIN_PB7A_EMAC0_E0_TXEN                     _L_(39)      /**< EMAC0 signal: EMAC0_E0_TXEN on PB7 mux A */
#define MUX_PB7A_EMAC0_E0_TXEN                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_TXEN */
#define PIO_PB7A_EMAC0_E0_TXEN                     (_U_(1) << 7) /**< EMAC0 signal: EMAC0_E0_TXEN */
#define PIN_PA4C_EMAC0_E0_TXER                     _L_(4)       /**< EMAC0 signal: EMAC0_E0_TXER on PA4 mux C */
#define MUX_PA4C_EMAC0_E0_TXER                     _L_(2)       /**< EMAC0 signal line function value: EMAC0_E0_TXER */
#define PIO_PA4C_EMAC0_E0_TXER                     (_U_(1) << 4) /**< EMAC0 signal: EMAC0_E0_TXER */
#define PIN_PB8A_EMAC0_E0_TXER                     _L_(40)      /**< EMAC0 signal: EMAC0_E0_TXER on PB8 mux A */
#define MUX_PB8A_EMAC0_E0_TXER                     _L_(0)       /**< EMAC0 signal line function value: EMAC0_E0_TXER */
#define PIO_PB8A_EMAC0_E0_TXER                     (_U_(1) << 8) /**< EMAC0 signal: EMAC0_E0_TXER */
/* ========== PIO definition for EMAC1 peripheral ========== */
#define PIN_PC28B_EMAC1_E1_CRSDV                   _L_(86)      /**< EMAC1 signal: EMAC1_E1_CRSDV on PC28 mux B */
#define MUX_PC28B_EMAC1_E1_CRSDV                   _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_CRSDV */
#define PIO_PC28B_EMAC1_E1_CRSDV                   (_U_(1) << 22) /**< EMAC1 signal: EMAC1_E1_CRSDV */
#define PIN_PC30B_EMAC1_E1_MDC                     _L_(88)      /**< EMAC1 signal: EMAC1_E1_MDC on PC30 mux B */
#define MUX_PC30B_EMAC1_E1_MDC                     _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_MDC */
#define PIO_PC30B_EMAC1_E1_MDC                     (_U_(1) << 24) /**< EMAC1 signal: EMAC1_E1_MDC */
#define PIN_PC31B_EMAC1_E1_MDIO                    _L_(89)      /**< EMAC1 signal: EMAC1_E1_MDIO on PC31 mux B */
#define MUX_PC31B_EMAC1_E1_MDIO                    _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_MDIO */
#define PIO_PC31B_EMAC1_E1_MDIO                    (_U_(1) << 25) /**< EMAC1 signal: EMAC1_E1_MDIO */
#define PIN_PC20B_EMAC1_E1_RX0                     _L_(78)      /**< EMAC1 signal: EMAC1_E1_RX0 on PC20 mux B */
#define MUX_PC20B_EMAC1_E1_RX0                     _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_RX0 */
#define PIO_PC20B_EMAC1_E1_RX0                     (_U_(1) << 14) /**< EMAC1 signal: EMAC1_E1_RX0 */
#define PIN_PC21B_EMAC1_E1_RX1                     _L_(79)      /**< EMAC1 signal: EMAC1_E1_RX1 on PC21 mux B */
#define MUX_PC21B_EMAC1_E1_RX1                     _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_RX1 */
#define PIO_PC21B_EMAC1_E1_RX1                     (_U_(1) << 15) /**< EMAC1 signal: EMAC1_E1_RX1 */
#define PIN_PC16B_EMAC1_E1_RXER                    _L_(74)      /**< EMAC1 signal: EMAC1_E1_RXER on PC16 mux B */
#define MUX_PC16B_EMAC1_E1_RXER                    _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_RXER */
#define PIO_PC16B_EMAC1_E1_RXER                    (_U_(1) << 10) /**< EMAC1 signal: EMAC1_E1_RXER */
#define PIN_PC18B_EMAC1_E1_TX0                     _L_(76)      /**< EMAC1 signal: EMAC1_E1_TX0 on PC18 mux B */
#define MUX_PC18B_EMAC1_E1_TX0                     _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_TX0 */
#define PIO_PC18B_EMAC1_E1_TX0                     (_U_(1) << 12) /**< EMAC1 signal: EMAC1_E1_TX0 */
#define PIN_PC19B_EMAC1_E1_TX1                     _L_(77)      /**< EMAC1 signal: EMAC1_E1_TX1 on PC19 mux B */
#define MUX_PC19B_EMAC1_E1_TX1                     _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_TX1 */
#define PIO_PC19B_EMAC1_E1_TX1                     (_U_(1) << 13) /**< EMAC1 signal: EMAC1_E1_TX1 */
#define PIN_PC29B_EMAC1_E1_TXCK                    _L_(87)      /**< EMAC1 signal: EMAC1_E1_TXCK on PC29 mux B */
#define MUX_PC29B_EMAC1_E1_TXCK                    _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_TXCK */
#define PIO_PC29B_EMAC1_E1_TXCK                    (_U_(1) << 23) /**< EMAC1 signal: EMAC1_E1_TXCK */
#define PIN_PC27B_EMAC1_E1_TXEN                    _L_(85)      /**< EMAC1 signal: EMAC1_E1_TXEN on PC27 mux B */
#define MUX_PC27B_EMAC1_E1_TXEN                    _L_(1)       /**< EMAC1 signal line function value: EMAC1_E1_TXEN */
#define PIO_PC27B_EMAC1_E1_TXEN                    (_U_(1) << 21) /**< EMAC1 signal: EMAC1_E1_TXEN */
/* ========== PIO definition for EBI peripheral ========== */
#define PIN_PD15B_EBI_A20                          _L_(105)     /**< EBI signal: EBI_A20 on PD15 mux B */
#define MUX_PD15B_EBI_A20                          _L_(1)       /**< EBI signal line function value: EBI_A20 */
#define PIO_PD15B_EBI_A20                          (_U_(1) << 9) /**< EBI signal: EBI_A20 */
#define PIN_PD2A_EBI_A21                           _L_(92)      /**< EBI signal: EBI_A21 on PD2 mux A */
#define MUX_PD2A_EBI_A21                           _L_(0)       /**< EBI signal line function value: EBI_A21 */
#define PIO_PD2A_EBI_A21                           (_U_(1) << 28) /**< EBI signal: EBI_A21 */
#define PIN_PD3A_EBI_A22                           _L_(93)      /**< EBI signal: EBI_A22 on PD3 mux A */
#define MUX_PD3A_EBI_A22                           _L_(0)       /**< EBI signal line function value: EBI_A22 */
#define PIO_PD3A_EBI_A22                           (_U_(1) << 29) /**< EBI signal: EBI_A22 */
#define PIN_PD16B_EBI_A23                          _L_(106)     /**< EBI signal: EBI_A23 on PD16 mux B */
#define MUX_PD16B_EBI_A23                          _L_(1)       /**< EBI signal line function value: EBI_A23 */
#define PIO_PD16B_EBI_A23                          (_U_(1) << 10) /**< EBI signal: EBI_A23 */
#define PIN_PD17B_EBI_A24                          _L_(107)     /**< EBI signal: EBI_A24 on PD17 mux B */
#define MUX_PD17B_EBI_A24                          _L_(1)       /**< EBI signal line function value: EBI_A24 */
#define PIO_PD17B_EBI_A24                          (_U_(1) << 11) /**< EBI signal: EBI_A24 */
#define PIN_PD18B_EBI_A25                          _L_(108)     /**< EBI signal: EBI_A25 on PD18 mux B */
#define MUX_PD18B_EBI_A25                          _L_(1)       /**< EBI signal line function value: EBI_A25 */
#define PIO_PD18B_EBI_A25                          (_U_(1) << 12) /**< EBI signal: EBI_A25 */
#define PIN_PD6A_EBI_D16                           _L_(96)      /**< EBI signal: EBI_D16 on PD6 mux A */
#define MUX_PD6A_EBI_D16                           _L_(0)       /**< EBI signal line function value: EBI_D16 */
#define PIO_PD6A_EBI_D16                           (_U_(1) << 0) /**< EBI signal: EBI_D16 */
#define PIN_PD7A_EBI_D17                           _L_(97)      /**< EBI signal: EBI_D17 on PD7 mux A */
#define MUX_PD7A_EBI_D17                           _L_(0)       /**< EBI signal line function value: EBI_D17 */
#define PIO_PD7A_EBI_D17                           (_U_(1) << 1) /**< EBI signal: EBI_D17 */
#define PIN_PD8A_EBI_D18                           _L_(98)      /**< EBI signal: EBI_D18 on PD8 mux A */
#define MUX_PD8A_EBI_D18                           _L_(0)       /**< EBI signal line function value: EBI_D18 */
#define PIO_PD8A_EBI_D18                           (_U_(1) << 2) /**< EBI signal: EBI_D18 */
#define PIN_PD9A_EBI_D19                           _L_(99)      /**< EBI signal: EBI_D19 on PD9 mux A */
#define MUX_PD9A_EBI_D19                           _L_(0)       /**< EBI signal line function value: EBI_D19 */
#define PIO_PD9A_EBI_D19                           (_U_(1) << 3) /**< EBI signal: EBI_D19 */
#define PIN_PD10A_EBI_D20                          _L_(100)     /**< EBI signal: EBI_D20 on PD10 mux A */
#define MUX_PD10A_EBI_D20                          _L_(0)       /**< EBI signal line function value: EBI_D20 */
#define PIO_PD10A_EBI_D20                          (_U_(1) << 4) /**< EBI signal: EBI_D20 */
#define PIN_PD11A_EBI_D21                          _L_(101)     /**< EBI signal: EBI_D21 on PD11 mux A */
#define MUX_PD11A_EBI_D21                          _L_(0)       /**< EBI signal line function value: EBI_D21 */
#define PIO_PD11A_EBI_D21                          (_U_(1) << 5) /**< EBI signal: EBI_D21 */
#define PIN_PD12A_EBI_D22                          _L_(102)     /**< EBI signal: EBI_D22 on PD12 mux A */
#define MUX_PD12A_EBI_D22                          _L_(0)       /**< EBI signal line function value: EBI_D22 */
#define PIO_PD12A_EBI_D22                          (_U_(1) << 6) /**< EBI signal: EBI_D22 */
#define PIN_PD13A_EBI_D23                          _L_(103)     /**< EBI signal: EBI_D23 on PD13 mux A */
#define MUX_PD13A_EBI_D23                          _L_(0)       /**< EBI signal line function value: EBI_D23 */
#define PIO_PD13A_EBI_D23                          (_U_(1) << 7) /**< EBI signal: EBI_D23 */
#define PIN_PD14A_EBI_D24                          _L_(104)     /**< EBI signal: EBI_D24 on PD14 mux A */
#define MUX_PD14A_EBI_D24                          _L_(0)       /**< EBI signal line function value: EBI_D24 */
#define PIO_PD14A_EBI_D24                          (_U_(1) << 8) /**< EBI signal: EBI_D24 */
#define PIN_PD15A_EBI_D25                          _L_(105)     /**< EBI signal: EBI_D25 on PD15 mux A */
#define MUX_PD15A_EBI_D25                          _L_(0)       /**< EBI signal line function value: EBI_D25 */
#define PIO_PD15A_EBI_D25                          (_U_(1) << 9) /**< EBI signal: EBI_D25 */
#define PIN_PD16A_EBI_D26                          _L_(106)     /**< EBI signal: EBI_D26 on PD16 mux A */
#define MUX_PD16A_EBI_D26                          _L_(0)       /**< EBI signal line function value: EBI_D26 */
#define PIO_PD16A_EBI_D26                          (_U_(1) << 10) /**< EBI signal: EBI_D26 */
#define PIN_PD17A_EBI_D27                          _L_(107)     /**< EBI signal: EBI_D27 on PD17 mux A */
#define MUX_PD17A_EBI_D27                          _L_(0)       /**< EBI signal line function value: EBI_D27 */
#define PIO_PD17A_EBI_D27                          (_U_(1) << 11) /**< EBI signal: EBI_D27 */
#define PIN_PD18A_EBI_D28                          _L_(108)     /**< EBI signal: EBI_D28 on PD18 mux A */
#define MUX_PD18A_EBI_D28                          _L_(0)       /**< EBI signal line function value: EBI_D28 */
#define PIO_PD18A_EBI_D28                          (_U_(1) << 12) /**< EBI signal: EBI_D28 */
#define PIN_PD19A_EBI_D29                          _L_(109)     /**< EBI signal: EBI_D29 on PD19 mux A */
#define MUX_PD19A_EBI_D29                          _L_(0)       /**< EBI signal line function value: EBI_D29 */
#define PIO_PD19A_EBI_D29                          (_U_(1) << 13) /**< EBI signal: EBI_D29 */
#define PIN_PD20A_EBI_D30                          _L_(110)     /**< EBI signal: EBI_D30 on PD20 mux A */
#define MUX_PD20A_EBI_D30                          _L_(0)       /**< EBI signal line function value: EBI_D30 */
#define PIO_PD20A_EBI_D30                          (_U_(1) << 14) /**< EBI signal: EBI_D30 */
#define PIN_PD21A_EBI_D31                          _L_(111)     /**< EBI signal: EBI_D31 on PD21 mux A */
#define MUX_PD21A_EBI_D31                          _L_(0)       /**< EBI signal line function value: EBI_D31 */
#define PIO_PD21A_EBI_D31                          (_U_(1) << 15) /**< EBI signal: EBI_D31 */
#define PIN_PD2A_EBI_NANDALE                       _L_(92)      /**< EBI signal: EBI_NANDALE on PD2 mux A */
#define MUX_PD2A_EBI_NANDALE                       _L_(0)       /**< EBI signal line function value: EBI_NANDALE */
#define PIO_PD2A_EBI_NANDALE                       (_U_(1) << 28) /**< EBI signal: EBI_NANDALE */
#define PIN_PD3A_EBI_NANDCLE                       _L_(93)      /**< EBI signal: EBI_NANDCLE on PD3 mux A */
#define MUX_PD3A_EBI_NANDCLE                       _L_(0)       /**< EBI signal line function value: EBI_NANDCLE */
#define PIO_PD3A_EBI_NANDCLE                       (_U_(1) << 29) /**< EBI signal: EBI_NANDCLE */
#define PIN_PD4A_EBI_NANDCS                        _L_(94)      /**< EBI signal: EBI_NANDCS on PD4 mux A */
#define MUX_PD4A_EBI_NANDCS                        _L_(0)       /**< EBI signal line function value: EBI_NANDCS */
#define PIO_PD4A_EBI_NANDCS                        (_U_(1) << 30) /**< EBI signal: EBI_NANDCS */
#define PIN_PD0A_EBI_NANDOE                        _L_(90)      /**< EBI signal: EBI_NANDOE on PD0 mux A */
#define MUX_PD0A_EBI_NANDOE                        _L_(0)       /**< EBI signal line function value: EBI_NANDOE */
#define PIO_PD0A_EBI_NANDOE                        (_U_(1) << 26) /**< EBI signal: EBI_NANDOE */
#define PIN_PD1A_EBI_NANDWE                        _L_(91)      /**< EBI signal: EBI_NANDWE on PD1 mux A */
#define MUX_PD1A_EBI_NANDWE                        _L_(0)       /**< EBI signal line function value: EBI_NANDWE */
#define PIO_PD1A_EBI_NANDWE                        (_U_(1) << 27) /**< EBI signal: EBI_NANDWE */
#define PIN_PD19B_EBI_NCS2                         _L_(109)     /**< EBI signal: EBI_NCS2 on PD19 mux B */
#define MUX_PD19B_EBI_NCS2                         _L_(1)       /**< EBI signal line function value: EBI_NCS2 */
#define PIO_PD19B_EBI_NCS2                         (_U_(1) << 13) /**< EBI signal: EBI_NCS2 */
#define PIN_PD4A_EBI_NCS3                          _L_(94)      /**< EBI signal: EBI_NCS3 on PD4 mux A */
#define MUX_PD4A_EBI_NCS3                          _L_(0)       /**< EBI signal line function value: EBI_NCS3 */
#define PIO_PD4A_EBI_NCS3                          (_U_(1) << 30) /**< EBI signal: EBI_NCS3 */
#define PIN_PD20B_EBI_NCS4                         _L_(110)     /**< EBI signal: EBI_NCS4 on PD20 mux B */
#define MUX_PD20B_EBI_NCS4                         _L_(1)       /**< EBI signal line function value: EBI_NCS4 */
#define PIO_PD20B_EBI_NCS4                         (_U_(1) << 14) /**< EBI signal: EBI_NCS4 */
#define PIN_PD21B_EBI_NCS5                         _L_(111)     /**< EBI signal: EBI_NCS5 on PD21 mux B */
#define MUX_PD21B_EBI_NCS5                         _L_(1)       /**< EBI signal line function value: EBI_NCS5 */
#define PIO_PD21B_EBI_NCS5                         (_U_(1) << 15) /**< EBI signal: EBI_NCS5 */
#define PIN_PD5A_EBI_NWAIT                         _L_(95)      /**< EBI signal: EBI_NWAIT on PD5 mux A */
#define MUX_PD5A_EBI_NWAIT                         _L_(0)       /**< EBI signal line function value: EBI_NWAIT */
#define PIO_PD5A_EBI_NWAIT                         (_U_(1) << 31) /**< EBI signal: EBI_NWAIT */
/* ========== PIO definition for FLEXCOM0 peripheral ========== */
#define PIN_PA0A_FLEXCOM0_IO0                      _L_(0)       /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PA0 mux A */
#define MUX_PA0A_FLEXCOM0_IO0                      _L_(0)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PA0A_FLEXCOM0_IO0                      (_U_(1) << 0) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PA1A_FLEXCOM0_IO1                      _L_(1)       /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PA1 mux A */
#define MUX_PA1A_FLEXCOM0_IO1                      _L_(0)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PA1A_FLEXCOM0_IO1                      (_U_(1) << 1) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PA4A_FLEXCOM0_IO2                      _L_(4)       /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PA4 mux A */
#define MUX_PA4A_FLEXCOM0_IO2                      _L_(0)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PA4A_FLEXCOM0_IO2                      (_U_(1) << 4) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PA3A_FLEXCOM0_IO3                      _L_(3)       /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PA3 mux A */
#define MUX_PA3A_FLEXCOM0_IO3                      _L_(0)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PA3A_FLEXCOM0_IO3                      (_U_(1) << 3) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PA2A_FLEXCOM0_IO4                      _L_(2)       /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PA2 mux A */
#define MUX_PA2A_FLEXCOM0_IO4                      _L_(0)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PA2A_FLEXCOM0_IO4                      (_U_(1) << 2) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
#define PIN_PB6B_FLEXCOM0_IO7                      _L_(38)      /**< FLEXCOM0 signal: FLEXCOM0_IO7 on PB6 mux B */
#define MUX_PB6B_FLEXCOM0_IO7                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO7 */
#define PIO_PB6B_FLEXCOM0_IO7                      (_U_(1) << 6) /**< FLEXCOM0 signal: FLEXCOM0_IO7 */
/* ========== PIO definition for FLEXCOM1 peripheral ========== */
#define PIN_PA5A_FLEXCOM1_IO0                      _L_(5)       /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PA5 mux A */
#define MUX_PA5A_FLEXCOM1_IO0                      _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PA5A_FLEXCOM1_IO0                      (_U_(1) << 5) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PA6A_FLEXCOM1_IO1                      _L_(6)       /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PA6 mux A */
#define MUX_PA6A_FLEXCOM1_IO1                      _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PA6A_FLEXCOM1_IO1                      (_U_(1) << 6) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PC29C_FLEXCOM1_IO2                     _L_(87)      /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PC29 mux C */
#define MUX_PC29C_FLEXCOM1_IO2                     _L_(2)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PC29C_FLEXCOM1_IO2                     (_U_(1) << 23) /**< FLEXCOM1 signal: FLEXCOM1_IO2 */
#define PIN_PC28C_FLEXCOM1_IO3                     _L_(86)      /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PC28 mux C */
#define MUX_PC28C_FLEXCOM1_IO3                     _L_(2)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PC28C_FLEXCOM1_IO3                     (_U_(1) << 22) /**< FLEXCOM1 signal: FLEXCOM1_IO3 */
#define PIN_PC27C_FLEXCOM1_IO4                     _L_(85)      /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PC27 mux C */
#define MUX_PC27C_FLEXCOM1_IO4                     _L_(2)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PC27C_FLEXCOM1_IO4                     (_U_(1) << 21) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
#define PIN_PC17B_FLEXCOM1_IO7                     _L_(75)      /**< FLEXCOM1 signal: FLEXCOM1_IO7 on PC17 mux B */
#define MUX_PC17B_FLEXCOM1_IO7                     _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO7 */
#define PIO_PC17B_FLEXCOM1_IO7                     (_U_(1) << 11) /**< FLEXCOM1 signal: FLEXCOM1_IO7 */
/* ========== PIO definition for FLEXCOM2 peripheral ========== */
#define PIN_PA7A_FLEXCOM2_IO0                      _L_(7)       /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PA7 mux A */
#define MUX_PA7A_FLEXCOM2_IO0                      _L_(0)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PA7A_FLEXCOM2_IO0                      (_U_(1) << 7) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PA8A_FLEXCOM2_IO1                      _L_(8)       /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PA8 mux A */
#define MUX_PA8A_FLEXCOM2_IO1                      _L_(0)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PA8A_FLEXCOM2_IO1                      (_U_(1) << 8) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PB2B_FLEXCOM2_IO2                      _L_(34)      /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PB2 mux B */
#define MUX_PB2B_FLEXCOM2_IO2                      _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PB2B_FLEXCOM2_IO2                      (_U_(1) << 2) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PB1B_FLEXCOM2_IO3                      _L_(33)      /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PB1 mux B */
#define MUX_PB1B_FLEXCOM2_IO3                      _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PB1B_FLEXCOM2_IO3                      (_U_(1) << 1) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PB0B_FLEXCOM2_IO4                      _L_(32)      /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PB0 mux B */
#define MUX_PB0B_FLEXCOM2_IO4                      _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PB0B_FLEXCOM2_IO4                      (_U_(1) << 0) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
#define PIN_PA29C_FLEXCOM2_IO7                     _L_(29)      /**< FLEXCOM2 signal: FLEXCOM2_IO7 on PA29 mux C */
#define MUX_PA29C_FLEXCOM2_IO7                     _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO7 */
#define PIO_PA29C_FLEXCOM2_IO7                     (_U_(1) << 29) /**< FLEXCOM2 signal: FLEXCOM2_IO7 */
/* ========== PIO definition for FLEXCOM3 peripheral ========== */
#define PIN_PC22B_FLEXCOM3_IO0                     _L_(80)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PC22 mux B */
#define MUX_PC22B_FLEXCOM3_IO0                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PC22B_FLEXCOM3_IO0                     (_U_(1) << 16) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PC23B_FLEXCOM3_IO1                     _L_(81)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PC23 mux B */
#define MUX_PC23B_FLEXCOM3_IO1                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PC23B_FLEXCOM3_IO1                     (_U_(1) << 17) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PC26B_FLEXCOM3_IO2                     _L_(84)      /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PC26 mux B */
#define MUX_PC26B_FLEXCOM3_IO2                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PC26B_FLEXCOM3_IO2                     (_U_(1) << 20) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PC25B_FLEXCOM3_IO3                     _L_(83)      /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PC25 mux B */
#define MUX_PC25B_FLEXCOM3_IO3                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PC25B_FLEXCOM3_IO3                     (_U_(1) << 19) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PC24B_FLEXCOM3_IO4                     _L_(82)      /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PC24 mux B */
#define MUX_PC24B_FLEXCOM3_IO4                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PC24B_FLEXCOM3_IO4                     (_U_(1) << 18) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PC30C_FLEXCOM3_IO7                     _L_(88)      /**< FLEXCOM3 signal: FLEXCOM3_IO7 on PC30 mux C */
#define MUX_PC30C_FLEXCOM3_IO7                     _L_(2)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO7 */
#define PIO_PC30C_FLEXCOM3_IO7                     (_U_(1) << 24) /**< FLEXCOM3 signal: FLEXCOM3_IO7 */
/* ========== PIO definition for FLEXCOM4 peripheral ========== */
#define PIN_PA12A_FLEXCOM4_IO0                     _L_(12)      /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PA12 mux A */
#define MUX_PA12A_FLEXCOM4_IO0                     _L_(0)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PA12A_FLEXCOM4_IO0                     (_U_(1) << 12) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PA11A_FLEXCOM4_IO1                     _L_(11)      /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PA11 mux A */
#define MUX_PA11A_FLEXCOM4_IO1                     _L_(0)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PA11A_FLEXCOM4_IO1                     (_U_(1) << 11) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PA13A_FLEXCOM4_IO2                     _L_(13)      /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PA13 mux A */
#define MUX_PA13A_FLEXCOM4_IO2                     _L_(0)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PA13A_FLEXCOM4_IO2                     (_U_(1) << 13) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PA14A_FLEXCOM4_IO3                     _L_(14)      /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PA14 mux A */
#define MUX_PA14A_FLEXCOM4_IO3                     _L_(0)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PA14A_FLEXCOM4_IO3                     (_U_(1) << 14) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PA0C_FLEXCOM4_IO4                      _L_(0)       /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PA0 mux C */
#define MUX_PA0C_FLEXCOM4_IO4                      _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PA0C_FLEXCOM4_IO4                      (_U_(1) << 0) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
#define PIN_PA7B_FLEXCOM4_IO4                      _L_(7)       /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PA7 mux B */
#define MUX_PA7B_FLEXCOM4_IO4                      _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PA7B_FLEXCOM4_IO4                      (_U_(1) << 7) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
#define PIN_PA1B_FLEXCOM4_IO5                      _L_(1)       /**< FLEXCOM4 signal: FLEXCOM4_IO5 on PA1 mux B */
#define MUX_PA1B_FLEXCOM4_IO5                      _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO5 */
#define PIO_PA1B_FLEXCOM4_IO5                      (_U_(1) << 1) /**< FLEXCOM4 signal: FLEXCOM4_IO5 */
#define PIN_PA8C_FLEXCOM4_IO5                      _L_(8)       /**< FLEXCOM4 signal: FLEXCOM4_IO5 on PA8 mux C */
#define MUX_PA8C_FLEXCOM4_IO5                      _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO5 */
#define PIO_PA8C_FLEXCOM4_IO5                      (_U_(1) << 8) /**< FLEXCOM4 signal: FLEXCOM4_IO5 */
#define PIN_PB3B_FLEXCOM4_IO6                      _L_(35)      /**< FLEXCOM4 signal: FLEXCOM4_IO6 on PB3 mux B */
#define MUX_PB3B_FLEXCOM4_IO6                      _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO6 */
#define PIO_PB3B_FLEXCOM4_IO6                      (_U_(1) << 3) /**< FLEXCOM4 signal: FLEXCOM4_IO6 */
/* ========== PIO definition for FLEXCOM5 peripheral ========== */
#define PIN_PA22B_FLEXCOM5_IO0                     _L_(22)      /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PA22 mux B */
#define MUX_PA22B_FLEXCOM5_IO0                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PA22B_FLEXCOM5_IO0                     (_U_(1) << 22) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PA21B_FLEXCOM5_IO1                     _L_(21)      /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PA21 mux B */
#define MUX_PA21B_FLEXCOM5_IO1                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PA21B_FLEXCOM5_IO1                     (_U_(1) << 21) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PA23B_FLEXCOM5_IO2                     _L_(23)      /**< FLEXCOM5 signal: FLEXCOM5_IO2 on PA23 mux B */
#define MUX_PA23B_FLEXCOM5_IO2                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO2 */
#define PIO_PA23B_FLEXCOM5_IO2                     (_U_(1) << 23) /**< FLEXCOM5 signal: FLEXCOM5_IO2 */
#define PIN_PA8B_FLEXCOM5_IO3                      _L_(8)       /**< FLEXCOM5 signal: FLEXCOM5_IO3 on PA8 mux B */
#define MUX_PA8B_FLEXCOM5_IO3                      _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO3 */
#define PIO_PA8B_FLEXCOM5_IO3                      (_U_(1) << 8) /**< FLEXCOM5 signal: FLEXCOM5_IO3 */
#define PIN_PA0B_FLEXCOM5_IO4                      _L_(0)       /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PA0 mux B */
#define MUX_PA0B_FLEXCOM5_IO4                      _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PA0B_FLEXCOM5_IO4                      (_U_(1) << 0) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
#define PIN_PA7C_FLEXCOM5_IO4                      _L_(7)       /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PA7 mux C */
#define MUX_PA7C_FLEXCOM5_IO4                      _L_(2)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PA7C_FLEXCOM5_IO4                      (_U_(1) << 7) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
#define PIN_PA31B_FLEXCOM5_IO5                     _L_(31)      /**< FLEXCOM5 signal: FLEXCOM5_IO5 on PA31 mux B */
#define MUX_PA31B_FLEXCOM5_IO5                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO5 */
#define PIO_PA31B_FLEXCOM5_IO5                     (_U_(1) << 31) /**< FLEXCOM5 signal: FLEXCOM5_IO5 */
#define PIN_PA30B_FLEXCOM5_IO6                     _L_(30)      /**< FLEXCOM5 signal: FLEXCOM5_IO6 on PA30 mux B */
#define MUX_PA30B_FLEXCOM5_IO6                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO6 */
#define PIO_PA30B_FLEXCOM5_IO6                     (_U_(1) << 30) /**< FLEXCOM5 signal: FLEXCOM5_IO6 */
/* ========== PIO definition for FLEXCOM6 peripheral ========== */
#define PIN_PA30A_FLEXCOM6_IO0                     _L_(30)      /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PA30 mux A */
#define MUX_PA30A_FLEXCOM6_IO0                     _L_(0)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PA30A_FLEXCOM6_IO0                     (_U_(1) << 30) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PA31A_FLEXCOM6_IO1                     _L_(31)      /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PA31 mux A */
#define MUX_PA31A_FLEXCOM6_IO1                     _L_(0)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PA31A_FLEXCOM6_IO1                     (_U_(1) << 31) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
/* ========== PIO definition for FLEXCOM7 peripheral ========== */
#define PIN_PC0C_FLEXCOM7_IO0                      _L_(58)      /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PC0 mux C */
#define MUX_PC0C_FLEXCOM7_IO0                      _L_(2)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PC0C_FLEXCOM7_IO0                      (_U_(1) << 26) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PC1C_FLEXCOM7_IO1                      _L_(59)      /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PC1 mux C */
#define MUX_PC1C_FLEXCOM7_IO1                      _L_(2)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PC1C_FLEXCOM7_IO1                      (_U_(1) << 27) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
/* ========== PIO definition for FLEXCOM8 peripheral ========== */
#define PIN_PB4B_FLEXCOM8_IO0                      _L_(36)      /**< FLEXCOM8 signal: FLEXCOM8_IO0 on PB4 mux B */
#define MUX_PB4B_FLEXCOM8_IO0                      _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO0 */
#define PIO_PB4B_FLEXCOM8_IO0                      (_U_(1) << 4) /**< FLEXCOM8 signal: FLEXCOM8_IO0 */
#define PIN_PB5B_FLEXCOM8_IO1                      _L_(37)      /**< FLEXCOM8 signal: FLEXCOM8_IO1 on PB5 mux B */
#define MUX_PB5B_FLEXCOM8_IO1                      _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO1 */
#define PIO_PB5B_FLEXCOM8_IO1                      (_U_(1) << 5) /**< FLEXCOM8 signal: FLEXCOM8_IO1 */
/* ========== PIO definition for FLEXCOM9 peripheral ========== */
#define PIN_PC8C_FLEXCOM9_IO0                      _L_(66)      /**< FLEXCOM9 signal: FLEXCOM9_IO0 on PC8 mux C */
#define MUX_PC8C_FLEXCOM9_IO0                      _L_(2)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO0 */
#define PIO_PC8C_FLEXCOM9_IO0                      (_U_(1) << 2) /**< FLEXCOM9 signal: FLEXCOM9_IO0 */
#define PIN_PC9C_FLEXCOM9_IO1                      _L_(67)      /**< FLEXCOM9 signal: FLEXCOM9_IO1 on PC9 mux C */
#define MUX_PC9C_FLEXCOM9_IO1                      _L_(2)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO1 */
#define PIO_PC9C_FLEXCOM9_IO1                      (_U_(1) << 3) /**< FLEXCOM9 signal: FLEXCOM9_IO1 */
/* ========== PIO definition for FLEXCOM10 peripheral ========== */
#define PIN_PC16C_FLEXCOM10_IO0                    _L_(74)      /**< FLEXCOM10 signal: FLEXCOM10_IO0 on PC16 mux C */
#define MUX_PC16C_FLEXCOM10_IO0                    _L_(2)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO0 */
#define PIO_PC16C_FLEXCOM10_IO0                    (_U_(1) << 10) /**< FLEXCOM10 signal: FLEXCOM10_IO0 */
#define PIN_PC17C_FLEXCOM10_IO1                    _L_(75)      /**< FLEXCOM10 signal: FLEXCOM10_IO1 on PC17 mux C */
#define MUX_PC17C_FLEXCOM10_IO1                    _L_(2)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO1 */
#define PIO_PC17C_FLEXCOM10_IO1                    (_U_(1) << 11) /**< FLEXCOM10 signal: FLEXCOM10_IO1 */
/* ========== PIO definition for FLEXCOM11 peripheral ========== */
#define PIN_PB19C_FLEXCOM11_IO0                    _L_(51)      /**< FLEXCOM11 signal: FLEXCOM11_IO0 on PB19 mux C */
#define MUX_PB19C_FLEXCOM11_IO0                    _L_(2)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO0 */
#define PIO_PB19C_FLEXCOM11_IO0                    (_U_(1) << 19) /**< FLEXCOM11 signal: FLEXCOM11_IO0 */
#define PIN_PB20C_FLEXCOM11_IO1                    _L_(52)      /**< FLEXCOM11 signal: FLEXCOM11_IO1 on PB20 mux C */
#define MUX_PB20C_FLEXCOM11_IO1                    _L_(2)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO1 */
#define PIO_PB20C_FLEXCOM11_IO1                    (_U_(1) << 20) /**< FLEXCOM11 signal: FLEXCOM11_IO1 */
/* ========== PIO definition for FLEXCOM12 peripheral ========== */
#define PIN_PB21C_FLEXCOM12_IO0                    _L_(53)      /**< FLEXCOM12 signal: FLEXCOM12_IO0 on PB21 mux C */
#define MUX_PB21C_FLEXCOM12_IO0                    _L_(2)       /**< FLEXCOM12 signal line function value: FLEXCOM12_IO0 */
#define PIO_PB21C_FLEXCOM12_IO0                    (_U_(1) << 21) /**< FLEXCOM12 signal: FLEXCOM12_IO0 */
#define PIN_PB22C_FLEXCOM12_IO1                    _L_(54)      /**< FLEXCOM12 signal: FLEXCOM12_IO1 on PB22 mux C */
#define MUX_PB22C_FLEXCOM12_IO1                    _L_(2)       /**< FLEXCOM12 signal line function value: FLEXCOM12_IO1 */
#define PIO_PB22C_FLEXCOM12_IO1                    (_U_(1) << 22) /**< FLEXCOM12 signal: FLEXCOM12_IO1 */
/* ========== PIO definition for I2SMCC peripheral ========== */
#define PIN_PB19B_I2SMCC_CK                        _L_(51)      /**< I2SMCC signal: I2SMCC_CK on PB19 mux B */
#define MUX_PB19B_I2SMCC_CK                        _L_(1)       /**< I2SMCC signal line function value: I2SMCC_CK */
#define PIO_PB19B_I2SMCC_CK                        (_U_(1) << 19) /**< I2SMCC signal: I2SMCC_CK */
#define PIN_PB21B_I2SMCC_DIN0                      _L_(53)      /**< I2SMCC signal: I2SMCC_DIN0 on PB21 mux B */
#define MUX_PB21B_I2SMCC_DIN0                      _L_(1)       /**< I2SMCC signal line function value: I2SMCC_DIN0 */
#define PIO_PB21B_I2SMCC_DIN0                      (_U_(1) << 21) /**< I2SMCC signal: I2SMCC_DIN0 */
#define PIN_PB22B_I2SMCC_DOUT0                     _L_(54)      /**< I2SMCC signal: I2SMCC_DOUT0 on PB22 mux B */
#define MUX_PB22B_I2SMCC_DOUT0                     _L_(1)       /**< I2SMCC signal line function value: I2SMCC_DOUT0 */
#define PIO_PB22B_I2SMCC_DOUT0                     (_U_(1) << 22) /**< I2SMCC signal: I2SMCC_DOUT0 */
#define PIN_PB23B_I2SMCC_MCK                       _L_(55)      /**< I2SMCC signal: I2SMCC_MCK on PB23 mux B */
#define MUX_PB23B_I2SMCC_MCK                       _L_(1)       /**< I2SMCC signal line function value: I2SMCC_MCK */
#define PIO_PB23B_I2SMCC_MCK                       (_U_(1) << 23) /**< I2SMCC signal: I2SMCC_MCK */
#define PIN_PB20B_I2SMCC_WS                        _L_(52)      /**< I2SMCC signal: I2SMCC_WS on PB20 mux B */
#define MUX_PB20B_I2SMCC_WS                        _L_(1)       /**< I2SMCC signal line function value: I2SMCC_WS */
#define PIO_PB20B_I2SMCC_WS                        (_U_(1) << 20) /**< I2SMCC signal: I2SMCC_WS */
/* ========== PIO definition for ICE peripheral ========== */
#define PIN_PB25B_ICE_NTRST                        _L_(57)      /**< ICE signal: ICE_NTRST on PB25 mux B */
#define MUX_PB25B_ICE_NTRST                        _L_(1)       /**< ICE signal line function value: ICE_NTRST */
#define PIO_PB25B_ICE_NTRST                        (_U_(1) << 25) /**< ICE signal: ICE_NTRST */
/* ========== PIO definition for ISI peripheral ========== */
#define PIN_PC0B_ISI_D0                            _L_(58)      /**< ISI signal: ISI_D0 on PC0 mux B */
#define MUX_PC0B_ISI_D0                            _L_(1)       /**< ISI signal line function value: ISI_D0 */
#define PIO_PC0B_ISI_D0                            (_U_(1) << 26) /**< ISI signal: ISI_D0 */
#define PIN_PC1B_ISI_D1                            _L_(59)      /**< ISI signal: ISI_D1 on PC1 mux B */
#define MUX_PC1B_ISI_D1                            _L_(1)       /**< ISI signal line function value: ISI_D1 */
#define PIO_PC1B_ISI_D1                            (_U_(1) << 27) /**< ISI signal: ISI_D1 */
#define PIN_PC2B_ISI_D2                            _L_(60)      /**< ISI signal: ISI_D2 on PC2 mux B */
#define MUX_PC2B_ISI_D2                            _L_(1)       /**< ISI signal line function value: ISI_D2 */
#define PIO_PC2B_ISI_D2                            (_U_(1) << 28) /**< ISI signal: ISI_D2 */
#define PIN_PC3B_ISI_D3                            _L_(61)      /**< ISI signal: ISI_D3 on PC3 mux B */
#define MUX_PC3B_ISI_D3                            _L_(1)       /**< ISI signal line function value: ISI_D3 */
#define PIO_PC3B_ISI_D3                            (_U_(1) << 29) /**< ISI signal: ISI_D3 */
#define PIN_PC4B_ISI_D4                            _L_(62)      /**< ISI signal: ISI_D4 on PC4 mux B */
#define MUX_PC4B_ISI_D4                            _L_(1)       /**< ISI signal line function value: ISI_D4 */
#define PIO_PC4B_ISI_D4                            (_U_(1) << 30) /**< ISI signal: ISI_D4 */
#define PIN_PC5B_ISI_D5                            _L_(63)      /**< ISI signal: ISI_D5 on PC5 mux B */
#define MUX_PC5B_ISI_D5                            _L_(1)       /**< ISI signal line function value: ISI_D5 */
#define PIO_PC5B_ISI_D5                            (_U_(1) << 31) /**< ISI signal: ISI_D5 */
#define PIN_PC6B_ISI_D6                            _L_(64)      /**< ISI signal: ISI_D6 on PC6 mux B */
#define MUX_PC6B_ISI_D6                            _L_(1)       /**< ISI signal line function value: ISI_D6 */
#define PIO_PC6B_ISI_D6                            (_U_(1) << 0) /**< ISI signal: ISI_D6 */
#define PIN_PC7B_ISI_D7                            _L_(65)      /**< ISI signal: ISI_D7 on PC7 mux B */
#define MUX_PC7B_ISI_D7                            _L_(1)       /**< ISI signal line function value: ISI_D7 */
#define PIO_PC7B_ISI_D7                            (_U_(1) << 1) /**< ISI signal: ISI_D7 */
#define PIN_PC8B_ISI_D8                            _L_(66)      /**< ISI signal: ISI_D8 on PC8 mux B */
#define MUX_PC8B_ISI_D8                            _L_(1)       /**< ISI signal line function value: ISI_D8 */
#define PIO_PC8B_ISI_D8                            (_U_(1) << 2) /**< ISI signal: ISI_D8 */
#define PIN_PC9B_ISI_D9                            _L_(67)      /**< ISI signal: ISI_D9 on PC9 mux B */
#define MUX_PC9B_ISI_D9                            _L_(1)       /**< ISI signal line function value: ISI_D9 */
#define PIO_PC9B_ISI_D9                            (_U_(1) << 3) /**< ISI signal: ISI_D9 */
#define PIN_PC10B_ISI_D10                          _L_(68)      /**< ISI signal: ISI_D10 on PC10 mux B */
#define MUX_PC10B_ISI_D10                          _L_(1)       /**< ISI signal line function value: ISI_D10 */
#define PIO_PC10B_ISI_D10                          (_U_(1) << 4) /**< ISI signal: ISI_D10 */
#define PIN_PC11B_ISI_D11                          _L_(69)      /**< ISI signal: ISI_D11 on PC11 mux B */
#define MUX_PC11B_ISI_D11                          _L_(1)       /**< ISI signal line function value: ISI_D11 */
#define PIO_PC11B_ISI_D11                          (_U_(1) << 5) /**< ISI signal: ISI_D11 */
#define PIN_PC14B_ISI_HSYNC                        _L_(72)      /**< ISI signal: ISI_HSYNC on PC14 mux B */
#define MUX_PC14B_ISI_HSYNC                        _L_(1)       /**< ISI signal line function value: ISI_HSYNC */
#define PIO_PC14B_ISI_HSYNC                        (_U_(1) << 8) /**< ISI signal: ISI_HSYNC */
#define PIN_PC15B_ISI_MCK                          _L_(73)      /**< ISI signal: ISI_MCK on PC15 mux B */
#define MUX_PC15B_ISI_MCK                          _L_(1)       /**< ISI signal line function value: ISI_MCK */
#define PIO_PC15B_ISI_MCK                          (_U_(1) << 9) /**< ISI signal: ISI_MCK */
#define PIN_PC12B_ISI_PCK                          _L_(70)      /**< ISI signal: ISI_PCK on PC12 mux B */
#define MUX_PC12B_ISI_PCK                          _L_(1)       /**< ISI signal line function value: ISI_PCK */
#define PIO_PC12B_ISI_PCK                          (_U_(1) << 6) /**< ISI signal: ISI_PCK */
#define PIN_PC13B_ISI_VSYNC                        _L_(71)      /**< ISI signal: ISI_VSYNC on PC13 mux B */
#define MUX_PC13B_ISI_VSYNC                        _L_(1)       /**< ISI signal line function value: ISI_VSYNC */
#define PIO_PC13B_ISI_VSYNC                        (_U_(1) << 7) /**< ISI signal: ISI_VSYNC */
/* ========== PIO definition for LCDC peripheral ========== */
#define PIN_PC0A_LCDC_LCDDAT0                      _L_(58)      /**< LCDC signal: LCDC_LCDDAT0 on PC0 mux A */
#define MUX_PC0A_LCDC_LCDDAT0                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT0 */
#define PIO_PC0A_LCDC_LCDDAT0                      (_U_(1) << 26) /**< LCDC signal: LCDC_LCDDAT0 */
#define PIN_PC1A_LCDC_LCDDAT1                      _L_(59)      /**< LCDC signal: LCDC_LCDDAT1 on PC1 mux A */
#define MUX_PC1A_LCDC_LCDDAT1                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT1 */
#define PIO_PC1A_LCDC_LCDDAT1                      (_U_(1) << 27) /**< LCDC signal: LCDC_LCDDAT1 */
#define PIN_PC2A_LCDC_LCDDAT2                      _L_(60)      /**< LCDC signal: LCDC_LCDDAT2 on PC2 mux A */
#define MUX_PC2A_LCDC_LCDDAT2                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT2 */
#define PIO_PC2A_LCDC_LCDDAT2                      (_U_(1) << 28) /**< LCDC signal: LCDC_LCDDAT2 */
#define PIN_PC3A_LCDC_LCDDAT3                      _L_(61)      /**< LCDC signal: LCDC_LCDDAT3 on PC3 mux A */
#define MUX_PC3A_LCDC_LCDDAT3                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT3 */
#define PIO_PC3A_LCDC_LCDDAT3                      (_U_(1) << 29) /**< LCDC signal: LCDC_LCDDAT3 */
#define PIN_PC4A_LCDC_LCDDAT4                      _L_(62)      /**< LCDC signal: LCDC_LCDDAT4 on PC4 mux A */
#define MUX_PC4A_LCDC_LCDDAT4                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT4 */
#define PIO_PC4A_LCDC_LCDDAT4                      (_U_(1) << 30) /**< LCDC signal: LCDC_LCDDAT4 */
#define PIN_PC5A_LCDC_LCDDAT5                      _L_(63)      /**< LCDC signal: LCDC_LCDDAT5 on PC5 mux A */
#define MUX_PC5A_LCDC_LCDDAT5                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT5 */
#define PIO_PC5A_LCDC_LCDDAT5                      (_U_(1) << 31) /**< LCDC signal: LCDC_LCDDAT5 */
#define PIN_PC6A_LCDC_LCDDAT6                      _L_(64)      /**< LCDC signal: LCDC_LCDDAT6 on PC6 mux A */
#define MUX_PC6A_LCDC_LCDDAT6                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT6 */
#define PIO_PC6A_LCDC_LCDDAT6                      (_U_(1) << 0) /**< LCDC signal: LCDC_LCDDAT6 */
#define PIN_PC7A_LCDC_LCDDAT7                      _L_(65)      /**< LCDC signal: LCDC_LCDDAT7 on PC7 mux A */
#define MUX_PC7A_LCDC_LCDDAT7                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT7 */
#define PIO_PC7A_LCDC_LCDDAT7                      (_U_(1) << 1) /**< LCDC signal: LCDC_LCDDAT7 */
#define PIN_PC8A_LCDC_LCDDAT8                      _L_(66)      /**< LCDC signal: LCDC_LCDDAT8 on PC8 mux A */
#define MUX_PC8A_LCDC_LCDDAT8                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT8 */
#define PIO_PC8A_LCDC_LCDDAT8                      (_U_(1) << 2) /**< LCDC signal: LCDC_LCDDAT8 */
#define PIN_PC9A_LCDC_LCDDAT9                      _L_(67)      /**< LCDC signal: LCDC_LCDDAT9 on PC9 mux A */
#define MUX_PC9A_LCDC_LCDDAT9                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT9 */
#define PIO_PC9A_LCDC_LCDDAT9                      (_U_(1) << 3) /**< LCDC signal: LCDC_LCDDAT9 */
#define PIN_PC10A_LCDC_LCDDAT10                    _L_(68)      /**< LCDC signal: LCDC_LCDDAT10 on PC10 mux A */
#define MUX_PC10A_LCDC_LCDDAT10                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT10 */
#define PIO_PC10A_LCDC_LCDDAT10                    (_U_(1) << 4) /**< LCDC signal: LCDC_LCDDAT10 */
#define PIN_PC11A_LCDC_LCDDAT11                    _L_(69)      /**< LCDC signal: LCDC_LCDDAT11 on PC11 mux A */
#define MUX_PC11A_LCDC_LCDDAT11                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT11 */
#define PIO_PC11A_LCDC_LCDDAT11                    (_U_(1) << 5) /**< LCDC signal: LCDC_LCDDAT11 */
#define PIN_PC12A_LCDC_LCDDAT12                    _L_(70)      /**< LCDC signal: LCDC_LCDDAT12 on PC12 mux A */
#define MUX_PC12A_LCDC_LCDDAT12                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT12 */
#define PIO_PC12A_LCDC_LCDDAT12                    (_U_(1) << 6) /**< LCDC signal: LCDC_LCDDAT12 */
#define PIN_PC13A_LCDC_LCDDAT13                    _L_(71)      /**< LCDC signal: LCDC_LCDDAT13 on PC13 mux A */
#define MUX_PC13A_LCDC_LCDDAT13                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT13 */
#define PIO_PC13A_LCDC_LCDDAT13                    (_U_(1) << 7) /**< LCDC signal: LCDC_LCDDAT13 */
#define PIN_PC14A_LCDC_LCDDAT14                    _L_(72)      /**< LCDC signal: LCDC_LCDDAT14 on PC14 mux A */
#define MUX_PC14A_LCDC_LCDDAT14                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT14 */
#define PIO_PC14A_LCDC_LCDDAT14                    (_U_(1) << 8) /**< LCDC signal: LCDC_LCDDAT14 */
#define PIN_PC15A_LCDC_LCDDAT15                    _L_(73)      /**< LCDC signal: LCDC_LCDDAT15 on PC15 mux A */
#define MUX_PC15A_LCDC_LCDDAT15                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT15 */
#define PIO_PC15A_LCDC_LCDDAT15                    (_U_(1) << 9) /**< LCDC signal: LCDC_LCDDAT15 */
#define PIN_PC16A_LCDC_LCDDAT16                    _L_(74)      /**< LCDC signal: LCDC_LCDDAT16 on PC16 mux A */
#define MUX_PC16A_LCDC_LCDDAT16                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT16 */
#define PIO_PC16A_LCDC_LCDDAT16                    (_U_(1) << 10) /**< LCDC signal: LCDC_LCDDAT16 */
#define PIN_PC17A_LCDC_LCDDAT17                    _L_(75)      /**< LCDC signal: LCDC_LCDDAT17 on PC17 mux A */
#define MUX_PC17A_LCDC_LCDDAT17                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT17 */
#define PIO_PC17A_LCDC_LCDDAT17                    (_U_(1) << 11) /**< LCDC signal: LCDC_LCDDAT17 */
#define PIN_PC18A_LCDC_LCDDAT18                    _L_(76)      /**< LCDC signal: LCDC_LCDDAT18 on PC18 mux A */
#define MUX_PC18A_LCDC_LCDDAT18                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT18 */
#define PIO_PC18A_LCDC_LCDDAT18                    (_U_(1) << 12) /**< LCDC signal: LCDC_LCDDAT18 */
#define PIN_PC19A_LCDC_LCDDAT19                    _L_(77)      /**< LCDC signal: LCDC_LCDDAT19 on PC19 mux A */
#define MUX_PC19A_LCDC_LCDDAT19                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT19 */
#define PIO_PC19A_LCDC_LCDDAT19                    (_U_(1) << 13) /**< LCDC signal: LCDC_LCDDAT19 */
#define PIN_PC20A_LCDC_LCDDAT20                    _L_(78)      /**< LCDC signal: LCDC_LCDDAT20 on PC20 mux A */
#define MUX_PC20A_LCDC_LCDDAT20                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT20 */
#define PIO_PC20A_LCDC_LCDDAT20                    (_U_(1) << 14) /**< LCDC signal: LCDC_LCDDAT20 */
#define PIN_PC21A_LCDC_LCDDAT21                    _L_(79)      /**< LCDC signal: LCDC_LCDDAT21 on PC21 mux A */
#define MUX_PC21A_LCDC_LCDDAT21                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT21 */
#define PIO_PC21A_LCDC_LCDDAT21                    (_U_(1) << 15) /**< LCDC signal: LCDC_LCDDAT21 */
#define PIN_PC22A_LCDC_LCDDAT22                    _L_(80)      /**< LCDC signal: LCDC_LCDDAT22 on PC22 mux A */
#define MUX_PC22A_LCDC_LCDDAT22                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT22 */
#define PIO_PC22A_LCDC_LCDDAT22                    (_U_(1) << 16) /**< LCDC signal: LCDC_LCDDAT22 */
#define PIN_PC23A_LCDC_LCDDAT23                    _L_(81)      /**< LCDC signal: LCDC_LCDDAT23 on PC23 mux A */
#define MUX_PC23A_LCDC_LCDDAT23                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT23 */
#define PIO_PC23A_LCDC_LCDDAT23                    (_U_(1) << 17) /**< LCDC signal: LCDC_LCDDAT23 */
#define PIN_PC29A_LCDC_LCDDEN                      _L_(87)      /**< LCDC signal: LCDC_LCDDEN on PC29 mux A */
#define MUX_PC29A_LCDC_LCDDEN                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDEN */
#define PIO_PC29A_LCDC_LCDDEN                      (_U_(1) << 23) /**< LCDC signal: LCDC_LCDDEN */
#define PIN_PC24A_LCDC_LCDDISP                     _L_(82)      /**< LCDC signal: LCDC_LCDDISP on PC24 mux A */
#define MUX_PC24A_LCDC_LCDDISP                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDISP */
#define PIO_PC24A_LCDC_LCDDISP                     (_U_(1) << 18) /**< LCDC signal: LCDC_LCDDISP */
#define PIN_PC28A_LCDC_LCDHSYNC                    _L_(86)      /**< LCDC signal: LCDC_LCDHSYNC on PC28 mux A */
#define MUX_PC28A_LCDC_LCDHSYNC                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDHSYNC */
#define PIO_PC28A_LCDC_LCDHSYNC                    (_U_(1) << 22) /**< LCDC signal: LCDC_LCDHSYNC */
#define PIN_PC30A_LCDC_LCDPCK                      _L_(88)      /**< LCDC signal: LCDC_LCDPCK on PC30 mux A */
#define MUX_PC30A_LCDC_LCDPCK                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDPCK */
#define PIO_PC30A_LCDC_LCDPCK                      (_U_(1) << 24) /**< LCDC signal: LCDC_LCDPCK */
#define PIN_PC26A_LCDC_LCDPWM                      _L_(84)      /**< LCDC signal: LCDC_LCDPWM on PC26 mux A */
#define MUX_PC26A_LCDC_LCDPWM                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDPWM */
#define PIO_PC26A_LCDC_LCDPWM                      (_U_(1) << 20) /**< LCDC signal: LCDC_LCDPWM */
#define PIN_PC27A_LCDC_LCDVSYNC                    _L_(85)      /**< LCDC signal: LCDC_LCDVSYNC on PC27 mux A */
#define MUX_PC27A_LCDC_LCDVSYNC                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDVSYNC */
#define PIO_PC27A_LCDC_LCDVSYNC                    (_U_(1) << 21) /**< LCDC signal: LCDC_LCDVSYNC */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PB10B_PMC_PCK0                         _L_(42)      /**< PMC signal: PMC_PCK0 on PB10 mux B */
#define MUX_PB10B_PMC_PCK0                         _L_(1)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PB10B_PMC_PCK0                         (_U_(1) << 10) /**< PMC signal: PMC_PCK0 */
#define PIN_PC15C_PMC_PCK0                         _L_(73)      /**< PMC signal: PMC_PCK0 on PC15 mux C */
#define MUX_PC15C_PMC_PCK0                         _L_(2)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PC15C_PMC_PCK0                         (_U_(1) << 9) /**< PMC signal: PMC_PCK0 */
#define PIN_PB9B_PMC_PCK1                          _L_(41)      /**< PMC signal: PMC_PCK1 on PB9 mux B */
#define MUX_PB9B_PMC_PCK1                          _L_(1)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PB9B_PMC_PCK1                          (_U_(1) << 9) /**< PMC signal: PMC_PCK1 */
#define PIN_PC31C_PMC_PCK1                         _L_(89)      /**< PMC signal: PMC_PCK1 on PC31 mux C */
#define MUX_PC31C_PMC_PCK1                         _L_(2)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PC31C_PMC_PCK1                         (_U_(1) << 25) /**< PMC signal: PMC_PCK1 */
/* ========== PIO definition for PWM peripheral ========== */
#define PIN_PB11B_PWM_PWM0                         _L_(43)      /**< PWM signal: PWM_PWM0 on PB11 mux B */
#define MUX_PB11B_PWM_PWM0                         _L_(1)       /**< PWM signal line function value: PWM_PWM0 */
#define PIO_PB11B_PWM_PWM0                         (_U_(1) << 11) /**< PWM signal: PWM_PWM0 */
#define PIN_PC10C_PWM_PWM0                         _L_(68)      /**< PWM signal: PWM_PWM0 on PC10 mux C */
#define MUX_PC10C_PWM_PWM0                         _L_(2)       /**< PWM signal line function value: PWM_PWM0 */
#define PIO_PC10C_PWM_PWM0                         (_U_(1) << 4) /**< PWM signal: PWM_PWM0 */
#define PIN_PC18C_PWM_PWM0                         _L_(76)      /**< PWM signal: PWM_PWM0 on PC18 mux C */
#define MUX_PC18C_PWM_PWM0                         _L_(2)       /**< PWM signal line function value: PWM_PWM0 */
#define PIO_PC18C_PWM_PWM0                         (_U_(1) << 12) /**< PWM signal: PWM_PWM0 */
#define PIN_PB12B_PWM_PWM1                         _L_(44)      /**< PWM signal: PWM_PWM1 on PB12 mux B */
#define MUX_PB12B_PWM_PWM1                         _L_(1)       /**< PWM signal line function value: PWM_PWM1 */
#define PIO_PB12B_PWM_PWM1                         (_U_(1) << 12) /**< PWM signal: PWM_PWM1 */
#define PIN_PC11C_PWM_PWM1                         _L_(69)      /**< PWM signal: PWM_PWM1 on PC11 mux C */
#define MUX_PC11C_PWM_PWM1                         _L_(2)       /**< PWM signal line function value: PWM_PWM1 */
#define PIO_PC11C_PWM_PWM1                         (_U_(1) << 5) /**< PWM signal: PWM_PWM1 */
#define PIN_PC19C_PWM_PWM1                         _L_(77)      /**< PWM signal: PWM_PWM1 on PC19 mux C */
#define MUX_PC19C_PWM_PWM1                         _L_(2)       /**< PWM signal line function value: PWM_PWM1 */
#define PIO_PC19C_PWM_PWM1                         (_U_(1) << 13) /**< PWM signal: PWM_PWM1 */
#define PIN_PB13B_PWM_PWM2                         _L_(45)      /**< PWM signal: PWM_PWM2 on PB13 mux B */
#define MUX_PB13B_PWM_PWM2                         _L_(1)       /**< PWM signal line function value: PWM_PWM2 */
#define PIO_PB13B_PWM_PWM2                         (_U_(1) << 13) /**< PWM signal: PWM_PWM2 */
#define PIN_PC20C_PWM_PWM2                         _L_(78)      /**< PWM signal: PWM_PWM2 on PC20 mux C */
#define MUX_PC20C_PWM_PWM2                         _L_(2)       /**< PWM signal line function value: PWM_PWM2 */
#define PIO_PC20C_PWM_PWM2                         (_U_(1) << 14) /**< PWM signal: PWM_PWM2 */
#define PIN_PB14B_PWM_PWM3                         _L_(46)      /**< PWM signal: PWM_PWM3 on PB14 mux B */
#define MUX_PB14B_PWM_PWM3                         _L_(1)       /**< PWM signal line function value: PWM_PWM3 */
#define PIO_PB14B_PWM_PWM3                         (_U_(1) << 14) /**< PWM signal: PWM_PWM3 */
#define PIN_PC21C_PWM_PWM3                         _L_(79)      /**< PWM signal: PWM_PWM3 on PC21 mux C */
#define MUX_PC21C_PWM_PWM3                         _L_(2)       /**< PWM signal line function value: PWM_PWM3 */
#define PIO_PC21C_PWM_PWM3                         (_U_(1) << 15) /**< PWM signal: PWM_PWM3 */
/* ========== PIO definition for QSPI peripheral ========== */
#define PIN_PB20A_QSPI_QCS                         _L_(52)      /**< QSPI signal: QSPI_QCS on PB20 mux A */
#define MUX_PB20A_QSPI_QCS                         _L_(0)       /**< QSPI signal line function value: QSPI_QCS */
#define PIO_PB20A_QSPI_QCS                         (_U_(1) << 20) /**< QSPI signal: QSPI_QCS */
#define PIN_PB21A_QSPI_QIO0                        _L_(53)      /**< QSPI signal: QSPI_QIO0 on PB21 mux A */
#define MUX_PB21A_QSPI_QIO0                        _L_(0)       /**< QSPI signal line function value: QSPI_QIO0 */
#define PIO_PB21A_QSPI_QIO0                        (_U_(1) << 21) /**< QSPI signal: QSPI_QIO0 */
#define PIN_PB22A_QSPI_QIO1                        _L_(54)      /**< QSPI signal: QSPI_QIO1 on PB22 mux A */
#define MUX_PB22A_QSPI_QIO1                        _L_(0)       /**< QSPI signal line function value: QSPI_QIO1 */
#define PIO_PB22A_QSPI_QIO1                        (_U_(1) << 22) /**< QSPI signal: QSPI_QIO1 */
#define PIN_PB23A_QSPI_QIO2                        _L_(55)      /**< QSPI signal: QSPI_QIO2 on PB23 mux A */
#define MUX_PB23A_QSPI_QIO2                        _L_(0)       /**< QSPI signal line function value: QSPI_QIO2 */
#define PIO_PB23A_QSPI_QIO2                        (_U_(1) << 23) /**< QSPI signal: QSPI_QIO2 */
#define PIN_PB24A_QSPI_QIO3                        _L_(56)      /**< QSPI signal: QSPI_QIO3 on PB24 mux A */
#define MUX_PB24A_QSPI_QIO3                        _L_(0)       /**< QSPI signal line function value: QSPI_QIO3 */
#define PIO_PB24A_QSPI_QIO3                        (_U_(1) << 24) /**< QSPI signal: QSPI_QIO3 */
#define PIN_PB19A_QSPI_QSCK                        _L_(51)      /**< QSPI signal: QSPI_QSCK on PB19 mux A */
#define MUX_PB19A_QSPI_QSCK                        _L_(0)       /**< QSPI signal line function value: QSPI_QSCK */
#define PIO_PB19A_QSPI_QSCK                        (_U_(1) << 19) /**< QSPI signal: QSPI_QSCK */
/* ========== PIO definition for RSTC peripheral ========== */
#define PIN_PB25A_RSTC_NRST_OUT                    _L_(57)      /**< RSTC signal: RSTC_NRST_OUT on PB25 mux A */
#define MUX_PB25A_RSTC_NRST_OUT                    _L_(0)       /**< RSTC signal line function value: RSTC_NRST_OUT */
#define PIO_PB25A_RSTC_NRST_OUT                    (_U_(1) << 25) /**< RSTC signal: RSTC_NRST_OUT */
/* ========== PIO definition for SDMMC0 peripheral ========== */
#define PIN_PA17A_SDMMC0_CK                        _L_(17)      /**< SDMMC0 signal: SDMMC0_CK on PA17 mux A */
#define MUX_PA17A_SDMMC0_CK                        _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CK */
#define PIO_PA17A_SDMMC0_CK                        (_U_(1) << 17) /**< SDMMC0 signal: SDMMC0_CK */
#define PIN_PA16A_SDMMC0_CMD                       _L_(16)      /**< SDMMC0 signal: SDMMC0_CMD on PA16 mux A */
#define MUX_PA16A_SDMMC0_CMD                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CMD */
#define PIO_PA16A_SDMMC0_CMD                       (_U_(1) << 16) /**< SDMMC0 signal: SDMMC0_CMD */
#define PIN_PA15A_SDMMC0_DAT0                      _L_(15)      /**< SDMMC0 signal: SDMMC0_DAT0 on PA15 mux A */
#define MUX_PA15A_SDMMC0_DAT0                      _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT0 */
#define PIO_PA15A_SDMMC0_DAT0                      (_U_(1) << 15) /**< SDMMC0 signal: SDMMC0_DAT0 */
#define PIN_PA18A_SDMMC0_DAT1                      _L_(18)      /**< SDMMC0 signal: SDMMC0_DAT1 on PA18 mux A */
#define MUX_PA18A_SDMMC0_DAT1                      _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT1 */
#define PIO_PA18A_SDMMC0_DAT1                      (_U_(1) << 18) /**< SDMMC0 signal: SDMMC0_DAT1 */
#define PIN_PA19A_SDMMC0_DAT2                      _L_(19)      /**< SDMMC0 signal: SDMMC0_DAT2 on PA19 mux A */
#define MUX_PA19A_SDMMC0_DAT2                      _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT2 */
#define PIO_PA19A_SDMMC0_DAT2                      (_U_(1) << 19) /**< SDMMC0 signal: SDMMC0_DAT2 */
#define PIN_PA20A_SDMMC0_DAT3                      _L_(20)      /**< SDMMC0 signal: SDMMC0_DAT3 on PA20 mux A */
#define MUX_PA20A_SDMMC0_DAT3                      _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT3 */
#define PIO_PA20A_SDMMC0_DAT3                      (_U_(1) << 20) /**< SDMMC0 signal: SDMMC0_DAT3 */
/* ========== PIO definition for SDMMC1 peripheral ========== */
#define PIN_PA13B_SDMMC1_CK                        _L_(13)      /**< SDMMC1 signal: SDMMC1_CK on PA13 mux B */
#define MUX_PA13B_SDMMC1_CK                        _L_(1)       /**< SDMMC1 signal line function value: SDMMC1_CK */
#define PIO_PA13B_SDMMC1_CK                        (_U_(1) << 13) /**< SDMMC1 signal: SDMMC1_CK */
#define PIN_PA12B_SDMMC1_CMD                       _L_(12)      /**< SDMMC1 signal: SDMMC1_CMD on PA12 mux B */
#define MUX_PA12B_SDMMC1_CMD                       _L_(1)       /**< SDMMC1 signal line function value: SDMMC1_CMD */
#define PIO_PA12B_SDMMC1_CMD                       (_U_(1) << 12) /**< SDMMC1 signal: SDMMC1_CMD */
#define PIN_PA11B_SDMMC1_DAT0                      _L_(11)      /**< SDMMC1 signal: SDMMC1_DAT0 on PA11 mux B */
#define MUX_PA11B_SDMMC1_DAT0                      _L_(1)       /**< SDMMC1 signal line function value: SDMMC1_DAT0 */
#define PIO_PA11B_SDMMC1_DAT0                      (_U_(1) << 11) /**< SDMMC1 signal: SDMMC1_DAT0 */
#define PIN_PA2B_SDMMC1_DAT1                       _L_(2)       /**< SDMMC1 signal: SDMMC1_DAT1 on PA2 mux B */
#define MUX_PA2B_SDMMC1_DAT1                       _L_(1)       /**< SDMMC1 signal line function value: SDMMC1_DAT1 */
#define PIO_PA2B_SDMMC1_DAT1                       (_U_(1) << 2) /**< SDMMC1 signal: SDMMC1_DAT1 */
#define PIN_PA3B_SDMMC1_DAT2                       _L_(3)       /**< SDMMC1 signal: SDMMC1_DAT2 on PA3 mux B */
#define MUX_PA3B_SDMMC1_DAT2                       _L_(1)       /**< SDMMC1 signal line function value: SDMMC1_DAT2 */
#define PIO_PA3B_SDMMC1_DAT2                       (_U_(1) << 3) /**< SDMMC1 signal: SDMMC1_DAT2 */
#define PIN_PA4B_SDMMC1_DAT3                       _L_(4)       /**< SDMMC1 signal: SDMMC1_DAT3 on PA4 mux B */
#define MUX_PA4B_SDMMC1_DAT3                       _L_(1)       /**< SDMMC1 signal line function value: SDMMC1_DAT3 */
#define PIO_PA4B_SDMMC1_DAT3                       (_U_(1) << 4) /**< SDMMC1 signal: SDMMC1_DAT3 */
/* ========== PIO definition for SSC peripheral ========== */
#define PIN_PA27B_SSC_RD                           _L_(27)      /**< SSC signal: SSC_RD on PA27 mux B */
#define MUX_PA27B_SSC_RD                           _L_(1)       /**< SSC signal line function value: SSC_RD */
#define PIO_PA27B_SSC_RD                           (_U_(1) << 27) /**< SSC signal: SSC_RD */
#define PIN_PA29B_SSC_RF                           _L_(29)      /**< SSC signal: SSC_RF on PA29 mux B */
#define MUX_PA29B_SSC_RF                           _L_(1)       /**< SSC signal line function value: SSC_RF */
#define PIO_PA29B_SSC_RF                           (_U_(1) << 29) /**< SSC signal: SSC_RF */
#define PIN_PA28B_SSC_RK                           _L_(28)      /**< SSC signal: SSC_RK on PA28 mux B */
#define MUX_PA28B_SSC_RK                           _L_(1)       /**< SSC signal line function value: SSC_RK */
#define PIO_PA28B_SSC_RK                           (_U_(1) << 28) /**< SSC signal: SSC_RK */
#define PIN_PA26B_SSC_TD                           _L_(26)      /**< SSC signal: SSC_TD on PA26 mux B */
#define MUX_PA26B_SSC_TD                           _L_(1)       /**< SSC signal line function value: SSC_TD */
#define PIO_PA26B_SSC_TD                           (_U_(1) << 26) /**< SSC signal: SSC_TD */
#define PIN_PA25B_SSC_TF                           _L_(25)      /**< SSC signal: SSC_TF on PA25 mux B */
#define MUX_PA25B_SSC_TF                           _L_(1)       /**< SSC signal line function value: SSC_TF */
#define PIO_PA25B_SSC_TF                           (_U_(1) << 25) /**< SSC signal: SSC_TF */
#define PIN_PA24B_SSC_TK                           _L_(24)      /**< SSC signal: SSC_TK on PA24 mux B */
#define MUX_PA24B_SSC_TK                           _L_(1)       /**< SSC signal line function value: SSC_TK */
#define PIO_PA24B_SSC_TK                           (_U_(1) << 24) /**< SSC signal: SSC_TK */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PA24A_TC0_TCLK0                        _L_(24)      /**< TC0 signal: TC0_TCLK0 on PA24 mux A */
#define MUX_PA24A_TC0_TCLK0                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PA24A_TC0_TCLK0                        (_U_(1) << 24) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PA25A_TC0_TCLK1                        _L_(25)      /**< TC0 signal: TC0_TCLK1 on PA25 mux A */
#define MUX_PA25A_TC0_TCLK1                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PA25A_TC0_TCLK1                        (_U_(1) << 25) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PA26A_TC0_TCLK2                        _L_(26)      /**< TC0 signal: TC0_TCLK2 on PA26 mux A */
#define MUX_PA26A_TC0_TCLK2                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PA26A_TC0_TCLK2                        (_U_(1) << 26) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PA21A_TC0_TIOA0                        _L_(21)      /**< TC0 signal: TC0_TIOA0 on PA21 mux A */
#define MUX_PA21A_TC0_TIOA0                        _L_(0)       /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA21A_TC0_TIOA0                        (_U_(1) << 21) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PA22A_TC0_TIOA1                        _L_(22)      /**< TC0 signal: TC0_TIOA1 on PA22 mux A */
#define MUX_PA22A_TC0_TIOA1                        _L_(0)       /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PA22A_TC0_TIOA1                        (_U_(1) << 22) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PA23A_TC0_TIOA2                        _L_(23)      /**< TC0 signal: TC0_TIOA2 on PA23 mux A */
#define MUX_PA23A_TC0_TIOA2                        _L_(0)       /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PA23A_TC0_TIOA2                        (_U_(1) << 23) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PA27A_TC0_TIOB0                        _L_(27)      /**< TC0 signal: TC0_TIOB0 on PA27 mux A */
#define MUX_PA27A_TC0_TIOB0                        _L_(0)       /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA27A_TC0_TIOB0                        (_U_(1) << 27) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PA28A_TC0_TIOB1                        _L_(28)      /**< TC0 signal: TC0_TIOB1 on PA28 mux A */
#define MUX_PA28A_TC0_TIOB1                        _L_(0)       /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PA28A_TC0_TIOB1                        (_U_(1) << 28) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PA29A_TC0_TIOB2                        _L_(29)      /**< TC0 signal: TC0_TIOB2 on PA29 mux A */
#define MUX_PA29A_TC0_TIOB2                        _L_(0)       /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PA29A_TC0_TIOB2                        (_U_(1) << 29) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TC1 peripheral ========== */
#define PIN_PC4C_TC1_TCLK3                         _L_(62)      /**< TC1 signal: TC1_TCLK3 on PC4 mux C */
#define MUX_PC4C_TC1_TCLK3                         _L_(2)       /**< TC1 signal line function value: TC1_TCLK3 */
#define PIO_PC4C_TC1_TCLK3                         (_U_(1) << 30) /**< TC1 signal: TC1_TCLK3 */
#define PIN_PC7C_TC1_TCLK4                         _L_(65)      /**< TC1 signal: TC1_TCLK4 on PC7 mux C */
#define MUX_PC7C_TC1_TCLK4                         _L_(2)       /**< TC1 signal line function value: TC1_TCLK4 */
#define PIO_PC7C_TC1_TCLK4                         (_U_(1) << 1) /**< TC1 signal: TC1_TCLK4 */
#define PIN_PC14C_TC1_TCLK5                        _L_(72)      /**< TC1 signal: TC1_TCLK5 on PC14 mux C */
#define MUX_PC14C_TC1_TCLK5                        _L_(2)       /**< TC1 signal line function value: TC1_TCLK5 */
#define PIO_PC14C_TC1_TCLK5                        (_U_(1) << 8) /**< TC1 signal: TC1_TCLK5 */
#define PIN_PC2C_TC1_TIOA3                         _L_(60)      /**< TC1 signal: TC1_TIOA3 on PC2 mux C */
#define MUX_PC2C_TC1_TIOA3                         _L_(2)       /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PC2C_TC1_TIOA3                         (_U_(1) << 28) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PC5C_TC1_TIOA4                         _L_(63)      /**< TC1 signal: TC1_TIOA4 on PC5 mux C */
#define MUX_PC5C_TC1_TIOA4                         _L_(2)       /**< TC1 signal line function value: TC1_TIOA4 */
#define PIO_PC5C_TC1_TIOA4                         (_U_(1) << 31) /**< TC1 signal: TC1_TIOA4 */
#define PIN_PC12C_TC1_TIOA5                        _L_(70)      /**< TC1 signal: TC1_TIOA5 on PC12 mux C */
#define MUX_PC12C_TC1_TIOA5                        _L_(2)       /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PC12C_TC1_TIOA5                        (_U_(1) << 6) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PC3C_TC1_TIOB3                         _L_(61)      /**< TC1 signal: TC1_TIOB3 on PC3 mux C */
#define MUX_PC3C_TC1_TIOB3                         _L_(2)       /**< TC1 signal line function value: TC1_TIOB3 */
#define PIO_PC3C_TC1_TIOB3                         (_U_(1) << 29) /**< TC1 signal: TC1_TIOB3 */
#define PIN_PC6C_TC1_TIOB4                         _L_(64)      /**< TC1 signal: TC1_TIOB4 on PC6 mux C */
#define MUX_PC6C_TC1_TIOB4                         _L_(2)       /**< TC1 signal line function value: TC1_TIOB4 */
#define PIO_PC6C_TC1_TIOB4                         (_U_(1) << 0) /**< TC1 signal: TC1_TIOB4 */
#define PIN_PC13C_TC1_TIOB5                        _L_(71)      /**< TC1 signal: TC1_TIOB5 on PC13 mux C */
#define MUX_PC13C_TC1_TIOB5                        _L_(2)       /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PC13C_TC1_TIOB5                        (_U_(1) << 7) /**< TC1 signal: TC1_TIOB5 */

#endif /* _SAM9X60_GPIO_H_ */

