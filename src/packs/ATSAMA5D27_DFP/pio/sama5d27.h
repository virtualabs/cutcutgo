/*
 * Peripheral I/O description for SAMA5D27
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

/* file generated from device description version 2021-06-28T08:59:38Z */
#ifndef _SAMA5D27_GPIO_H_
#define _SAMA5D27_GPIO_H_

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
#define PIN_PB26                    ( 58  )  /**< Pin Number for PB26 */
#define PIN_PB27                    ( 59  )  /**< Pin Number for PB27 */
#define PIN_PB28                    ( 60  )  /**< Pin Number for PB28 */
#define PIN_PB29                    ( 61  )  /**< Pin Number for PB29 */
#define PIN_PB30                    ( 62  )  /**< Pin Number for PB30 */
#define PIN_PB31                    ( 63  )  /**< Pin Number for PB31 */
#define PIN_PC0                     ( 64  )  /**< Pin Number for PC0 */
#define PIN_PC1                     ( 65  )  /**< Pin Number for PC1 */
#define PIN_PC2                     ( 66  )  /**< Pin Number for PC2 */
#define PIN_PC3                     ( 67  )  /**< Pin Number for PC3 */
#define PIN_PC4                     ( 68  )  /**< Pin Number for PC4 */
#define PIN_PC5                     ( 69  )  /**< Pin Number for PC5 */
#define PIN_PC6                     ( 70  )  /**< Pin Number for PC6 */
#define PIN_PC7                     ( 71  )  /**< Pin Number for PC7 */
#define PIN_PC8                     ( 72  )  /**< Pin Number for PC8 */
#define PIN_PC9                     ( 73  )  /**< Pin Number for PC9 */
#define PIN_PC10                    ( 74  )  /**< Pin Number for PC10 */
#define PIN_PC11                    ( 75  )  /**< Pin Number for PC11 */
#define PIN_PC12                    ( 76  )  /**< Pin Number for PC12 */
#define PIN_PC13                    ( 77  )  /**< Pin Number for PC13 */
#define PIN_PC14                    ( 78  )  /**< Pin Number for PC14 */
#define PIN_PC15                    ( 79  )  /**< Pin Number for PC15 */
#define PIN_PC16                    ( 80  )  /**< Pin Number for PC16 */
#define PIN_PC17                    ( 81  )  /**< Pin Number for PC17 */
#define PIN_PC18                    ( 82  )  /**< Pin Number for PC18 */
#define PIN_PC19                    ( 83  )  /**< Pin Number for PC19 */
#define PIN_PC20                    ( 84  )  /**< Pin Number for PC20 */
#define PIN_PC21                    ( 85  )  /**< Pin Number for PC21 */
#define PIN_PC22                    ( 86  )  /**< Pin Number for PC22 */
#define PIN_PC23                    ( 87  )  /**< Pin Number for PC23 */
#define PIN_PC24                    ( 88  )  /**< Pin Number for PC24 */
#define PIN_PC25                    ( 89  )  /**< Pin Number for PC25 */
#define PIN_PC26                    ( 90  )  /**< Pin Number for PC26 */
#define PIN_PC27                    ( 91  )  /**< Pin Number for PC27 */
#define PIN_PC28                    ( 92  )  /**< Pin Number for PC28 */
#define PIN_PC29                    ( 93  )  /**< Pin Number for PC29 */
#define PIN_PC30                    ( 94  )  /**< Pin Number for PC30 */
#define PIN_PC31                    ( 95  )  /**< Pin Number for PC31 */
#define PIN_PD0                     ( 96  )  /**< Pin Number for PD0 */
#define PIN_PD1                     ( 97  )  /**< Pin Number for PD1 */
#define PIN_PD2                     ( 98  )  /**< Pin Number for PD2 */
#define PIN_PD3                     ( 99  )  /**< Pin Number for PD3 */
#define PIN_PD4                     (100  )  /**< Pin Number for PD4 */
#define PIN_PD5                     (101  )  /**< Pin Number for PD5 */
#define PIN_PD6                     (102  )  /**< Pin Number for PD6 */
#define PIN_PD7                     (103  )  /**< Pin Number for PD7 */
#define PIN_PD8                     (104  )  /**< Pin Number for PD8 */
#define PIN_PD9                     (105  )  /**< Pin Number for PD9 */
#define PIN_PD10                    (106  )  /**< Pin Number for PD10 */
#define PIN_PD11                    (107  )  /**< Pin Number for PD11 */
#define PIN_PD12                    (108  )  /**< Pin Number for PD12 */
#define PIN_PD13                    (109  )  /**< Pin Number for PD13 */
#define PIN_PD14                    (110  )  /**< Pin Number for PD14 */
#define PIN_PD15                    (111  )  /**< Pin Number for PD15 */
#define PIN_PD16                    (112  )  /**< Pin Number for PD16 */
#define PIN_PD17                    (113  )  /**< Pin Number for PD17 */
#define PIN_PD18                    (114  )  /**< Pin Number for PD18 */
#define PIN_PD19                    (115  )  /**< Pin Number for PD19 */
#define PIN_PD20                    (116  )  /**< Pin Number for PD20 */
#define PIN_PD21                    (117  )  /**< Pin Number for PD21 */
#define PIN_PD22                    (118  )  /**< Pin Number for PD22 */
#define PIN_PD23                    (119  )  /**< Pin Number for PD23 */
#define PIN_PD24                    (120  )  /**< Pin Number for PD24 */
#define PIN_PD25                    (121  )  /**< Pin Number for PD25 */
#define PIN_PD26                    (122  )  /**< Pin Number for PD26 */
#define PIN_PD27                    (123  )  /**< Pin Number for PD27 */
#define PIN_PD28                    (124  )  /**< Pin Number for PD28 */
#define PIN_PD29                    (125  )  /**< Pin Number for PD29 */
#define PIN_PD30                    (126  )  /**< Pin Number for PD30 */
#define PIN_PD31                    (127  )  /**< Pin Number for PD31 */

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
#define PIO_PB26                    (_U_(1) << 26)  /**< PIO mask for PB26 */
#define PIO_PB27                    (_U_(1) << 27)  /**< PIO mask for PB27 */
#define PIO_PB28                    (_U_(1) << 28)  /**< PIO mask for PB28 */
#define PIO_PB29                    (_U_(1) << 29)  /**< PIO mask for PB29 */
#define PIO_PB30                    (_U_(1) << 30)  /**< PIO mask for PB30 */
#define PIO_PB31                    (_U_(1) << 31)  /**< PIO mask for PB31 */
#define PIO_PC0                     (_U_(1) << 0)   /**< PIO mask for PC0 */
#define PIO_PC1                     (_U_(1) << 1)   /**< PIO mask for PC1 */
#define PIO_PC2                     (_U_(1) << 2)   /**< PIO mask for PC2 */
#define PIO_PC3                     (_U_(1) << 3)   /**< PIO mask for PC3 */
#define PIO_PC4                     (_U_(1) << 4)   /**< PIO mask for PC4 */
#define PIO_PC5                     (_U_(1) << 5)   /**< PIO mask for PC5 */
#define PIO_PC6                     (_U_(1) << 6)   /**< PIO mask for PC6 */
#define PIO_PC7                     (_U_(1) << 7)   /**< PIO mask for PC7 */
#define PIO_PC8                     (_U_(1) << 8)   /**< PIO mask for PC8 */
#define PIO_PC9                     (_U_(1) << 9)   /**< PIO mask for PC9 */
#define PIO_PC10                    (_U_(1) << 10)  /**< PIO mask for PC10 */
#define PIO_PC11                    (_U_(1) << 11)  /**< PIO mask for PC11 */
#define PIO_PC12                    (_U_(1) << 12)  /**< PIO mask for PC12 */
#define PIO_PC13                    (_U_(1) << 13)  /**< PIO mask for PC13 */
#define PIO_PC14                    (_U_(1) << 14)  /**< PIO mask for PC14 */
#define PIO_PC15                    (_U_(1) << 15)  /**< PIO mask for PC15 */
#define PIO_PC16                    (_U_(1) << 16)  /**< PIO mask for PC16 */
#define PIO_PC17                    (_U_(1) << 17)  /**< PIO mask for PC17 */
#define PIO_PC18                    (_U_(1) << 18)  /**< PIO mask for PC18 */
#define PIO_PC19                    (_U_(1) << 19)  /**< PIO mask for PC19 */
#define PIO_PC20                    (_U_(1) << 20)  /**< PIO mask for PC20 */
#define PIO_PC21                    (_U_(1) << 21)  /**< PIO mask for PC21 */
#define PIO_PC22                    (_U_(1) << 22)  /**< PIO mask for PC22 */
#define PIO_PC23                    (_U_(1) << 23)  /**< PIO mask for PC23 */
#define PIO_PC24                    (_U_(1) << 24)  /**< PIO mask for PC24 */
#define PIO_PC25                    (_U_(1) << 25)  /**< PIO mask for PC25 */
#define PIO_PC26                    (_U_(1) << 26)  /**< PIO mask for PC26 */
#define PIO_PC27                    (_U_(1) << 27)  /**< PIO mask for PC27 */
#define PIO_PC28                    (_U_(1) << 28)  /**< PIO mask for PC28 */
#define PIO_PC29                    (_U_(1) << 29)  /**< PIO mask for PC29 */
#define PIO_PC30                    (_U_(1) << 30)  /**< PIO mask for PC30 */
#define PIO_PC31                    (_U_(1) << 31)  /**< PIO mask for PC31 */
#define PIO_PD0                     (_U_(1) << 0)   /**< PIO mask for PD0 */
#define PIO_PD1                     (_U_(1) << 1)   /**< PIO mask for PD1 */
#define PIO_PD2                     (_U_(1) << 2)   /**< PIO mask for PD2 */
#define PIO_PD3                     (_U_(1) << 3)   /**< PIO mask for PD3 */
#define PIO_PD4                     (_U_(1) << 4)   /**< PIO mask for PD4 */
#define PIO_PD5                     (_U_(1) << 5)   /**< PIO mask for PD5 */
#define PIO_PD6                     (_U_(1) << 6)   /**< PIO mask for PD6 */
#define PIO_PD7                     (_U_(1) << 7)   /**< PIO mask for PD7 */
#define PIO_PD8                     (_U_(1) << 8)   /**< PIO mask for PD8 */
#define PIO_PD9                     (_U_(1) << 9)   /**< PIO mask for PD9 */
#define PIO_PD10                    (_U_(1) << 10)  /**< PIO mask for PD10 */
#define PIO_PD11                    (_U_(1) << 11)  /**< PIO mask for PD11 */
#define PIO_PD12                    (_U_(1) << 12)  /**< PIO mask for PD12 */
#define PIO_PD13                    (_U_(1) << 13)  /**< PIO mask for PD13 */
#define PIO_PD14                    (_U_(1) << 14)  /**< PIO mask for PD14 */
#define PIO_PD15                    (_U_(1) << 15)  /**< PIO mask for PD15 */
#define PIO_PD16                    (_U_(1) << 16)  /**< PIO mask for PD16 */
#define PIO_PD17                    (_U_(1) << 17)  /**< PIO mask for PD17 */
#define PIO_PD18                    (_U_(1) << 18)  /**< PIO mask for PD18 */
#define PIO_PD19                    (_U_(1) << 19)  /**< PIO mask for PD19 */
#define PIO_PD20                    (_U_(1) << 20)  /**< PIO mask for PD20 */
#define PIO_PD21                    (_U_(1) << 21)  /**< PIO mask for PD21 */
#define PIO_PD22                    (_U_(1) << 22)  /**< PIO mask for PD22 */
#define PIO_PD23                    (_U_(1) << 23)  /**< PIO mask for PD23 */
#define PIO_PD24                    (_U_(1) << 24)  /**< PIO mask for PD24 */
#define PIO_PD25                    (_U_(1) << 25)  /**< PIO mask for PD25 */
#define PIO_PD26                    (_U_(1) << 26)  /**< PIO mask for PD26 */
#define PIO_PD27                    (_U_(1) << 27)  /**< PIO mask for PD27 */
#define PIO_PD28                    (_U_(1) << 28)  /**< PIO mask for PD28 */
#define PIO_PD29                    (_U_(1) << 29)  /**< PIO mask for PD29 */
#define PIO_PD30                    (_U_(1) << 30)  /**< PIO mask for PD30 */
#define PIO_PD31                    (_U_(1) << 31)  /**< PIO mask for PD31 */

/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PD19X1_ADC_AD0                         _L_(115)     /**< ADC signal: ADC_AD0 on PD19 mux X1 */
#define PIO_PD19X1_ADC_AD0                         (_U_(1) << 19) /**< ADC signal: ADC_AD0 */
#define PIN_PD20X1_ADC_AD1                         _L_(116)     /**< ADC signal: ADC_AD1 on PD20 mux X1 */
#define PIO_PD20X1_ADC_AD1                         (_U_(1) << 20) /**< ADC signal: ADC_AD1 */
#define PIN_PD21X1_ADC_AD2                         _L_(117)     /**< ADC signal: ADC_AD2 on PD21 mux X1 */
#define PIO_PD21X1_ADC_AD2                         (_U_(1) << 21) /**< ADC signal: ADC_AD2 */
#define PIN_PD22X1_ADC_AD3                         _L_(118)     /**< ADC signal: ADC_AD3 on PD22 mux X1 */
#define PIO_PD22X1_ADC_AD3                         (_U_(1) << 22) /**< ADC signal: ADC_AD3 */
#define PIN_PD23X1_ADC_AD4                         _L_(119)     /**< ADC signal: ADC_AD4 on PD23 mux X1 */
#define PIO_PD23X1_ADC_AD4                         (_U_(1) << 23) /**< ADC signal: ADC_AD4 */
#define PIN_PD24X1_ADC_AD5                         _L_(120)     /**< ADC signal: ADC_AD5 on PD24 mux X1 */
#define PIO_PD24X1_ADC_AD5                         (_U_(1) << 24) /**< ADC signal: ADC_AD5 */
#define PIN_PD25X1_ADC_AD6                         _L_(121)     /**< ADC signal: ADC_AD6 on PD25 mux X1 */
#define PIO_PD25X1_ADC_AD6                         (_U_(1) << 25) /**< ADC signal: ADC_AD6 */
#define PIN_PD26X1_ADC_AD7                         _L_(122)     /**< ADC signal: ADC_AD7 on PD26 mux X1 */
#define PIO_PD26X1_ADC_AD7                         (_U_(1) << 26) /**< ADC signal: ADC_AD7 */
#define PIN_PD27X1_ADC_AD8                         _L_(123)     /**< ADC signal: ADC_AD8 on PD27 mux X1 */
#define PIO_PD27X1_ADC_AD8                         (_U_(1) << 27) /**< ADC signal: ADC_AD8 */
#define PIN_PD28X1_ADC_AD9                         _L_(124)     /**< ADC signal: ADC_AD9 on PD28 mux X1 */
#define PIO_PD28X1_ADC_AD9                         (_U_(1) << 28) /**< ADC signal: ADC_AD9 */
#define PIN_PD29X1_ADC_AD10                        _L_(125)     /**< ADC signal: ADC_AD10 on PD29 mux X1 */
#define PIO_PD29X1_ADC_AD10                        (_U_(1) << 29) /**< ADC signal: ADC_AD10 */
#define PIN_PD30X1_ADC_AD11                        _L_(126)     /**< ADC signal: ADC_AD11 on PD30 mux X1 */
#define PIO_PD30X1_ADC_AD11                        (_U_(1) << 30) /**< ADC signal: ADC_AD11 */
#define PIN_PD31A_ADC_ADTRG                        _L_(127)     /**< ADC signal: ADC_ADTRG on PD31 mux A */
#define MUX_PD31A_ADC_ADTRG                        _L_(0)       /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PD31A_ADC_ADTRG                        (_U_(1) << 31) /**< ADC signal: ADC_ADTRG */
/* ========== PIO definition for AIC peripheral ========== */
#define PIN_PA12B_AIC_IRQ                          _L_(12)      /**< AIC signal: AIC_IRQ on PA12 mux B */
#define MUX_PA12B_AIC_IRQ                          _L_(1)       /**< AIC signal line function value: AIC_IRQ */
#define PIO_PA12B_AIC_IRQ                          (_U_(1) << 12) /**< AIC signal: AIC_IRQ */
#define PIN_PA21A_AIC_IRQ                          _L_(21)      /**< AIC signal: AIC_IRQ on PA21 mux A */
#define MUX_PA21A_AIC_IRQ                          _L_(0)       /**< AIC signal line function value: AIC_IRQ */
#define PIO_PA21A_AIC_IRQ                          (_U_(1) << 21) /**< AIC signal: AIC_IRQ */
#define PIN_PB3C_AIC_IRQ                           _L_(35)      /**< AIC signal: AIC_IRQ on PB3 mux C */
#define MUX_PB3C_AIC_IRQ                           _L_(2)       /**< AIC signal line function value: AIC_IRQ */
#define PIO_PB3C_AIC_IRQ                           (_U_(1) << 3) /**< AIC signal: AIC_IRQ */
#define PIN_PD31C_AIC_IRQ                          _L_(127)     /**< AIC signal: AIC_IRQ on PD31 mux C */
#define MUX_PD31C_AIC_IRQ                          _L_(2)       /**< AIC signal line function value: AIC_IRQ */
#define PIO_PD31C_AIC_IRQ                          (_U_(1) << 31) /**< AIC signal: AIC_IRQ */
/* ========== PIO definition for SAIC peripheral ========== */
#define PIN_PB4C_SAIC_FIQ                          _L_(36)      /**< SAIC signal: SAIC_FIQ on PB4 mux C */
#define MUX_PB4C_SAIC_FIQ                          _L_(2)       /**< SAIC signal line function value: SAIC_FIQ */
#define PIO_PB4C_SAIC_FIQ                          (_U_(1) << 4) /**< SAIC signal: SAIC_FIQ */
#define PIN_PC8C_SAIC_FIQ                          _L_(72)      /**< SAIC signal: SAIC_FIQ on PC8 mux C */
#define MUX_PC8C_SAIC_FIQ                          _L_(2)       /**< SAIC signal line function value: SAIC_FIQ */
#define PIO_PC8C_SAIC_FIQ                          (_U_(1) << 8) /**< SAIC signal: SAIC_FIQ */
#define PIN_PC9A_SAIC_FIQ                          _L_(73)      /**< SAIC signal: SAIC_FIQ on PC9 mux A */
#define MUX_PC9A_SAIC_FIQ                          _L_(0)       /**< SAIC signal line function value: SAIC_FIQ */
#define PIO_PC9A_SAIC_FIQ                          (_U_(1) << 9) /**< SAIC signal: SAIC_FIQ */
#define PIN_PD3B_SAIC_FIQ                          _L_(99)      /**< SAIC signal: SAIC_FIQ on PD3 mux B */
#define MUX_PD3B_SAIC_FIQ                          _L_(1)       /**< SAIC signal line function value: SAIC_FIQ */
#define PIO_PD3B_SAIC_FIQ                          (_U_(1) << 3) /**< SAIC signal: SAIC_FIQ */
/* ========== PIO definition for CLASSD peripheral ========== */
#define PIN_PA28F_CLASSD_L0                        _L_(28)      /**< CLASSD signal: CLASSD_L0 on PA28 mux F */
#define MUX_PA28F_CLASSD_L0                        _L_(5)       /**< CLASSD signal line function value: CLASSD_L0 */
#define PIO_PA28F_CLASSD_L0                        (_U_(1) << 28) /**< CLASSD signal: CLASSD_L0 */
#define PIN_PA29F_CLASSD_L1                        _L_(29)      /**< CLASSD signal: CLASSD_L1 on PA29 mux F */
#define MUX_PA29F_CLASSD_L1                        _L_(5)       /**< CLASSD signal line function value: CLASSD_L1 */
#define PIO_PA29F_CLASSD_L1                        (_U_(1) << 29) /**< CLASSD signal: CLASSD_L1 */
#define PIN_PA30F_CLASSD_L2                        _L_(30)      /**< CLASSD signal: CLASSD_L2 on PA30 mux F */
#define MUX_PA30F_CLASSD_L2                        _L_(5)       /**< CLASSD signal line function value: CLASSD_L2 */
#define PIO_PA30F_CLASSD_L2                        (_U_(1) << 30) /**< CLASSD signal: CLASSD_L2 */
#define PIN_PA31F_CLASSD_L3                        _L_(31)      /**< CLASSD signal: CLASSD_L3 on PA31 mux F */
#define MUX_PA31F_CLASSD_L3                        _L_(5)       /**< CLASSD signal line function value: CLASSD_L3 */
#define PIO_PA31F_CLASSD_L3                        (_U_(1) << 31) /**< CLASSD signal: CLASSD_L3 */
#define PIN_PB1F_CLASSD_R0                         _L_(33)      /**< CLASSD signal: CLASSD_R0 on PB1 mux F */
#define MUX_PB1F_CLASSD_R0                         _L_(5)       /**< CLASSD signal line function value: CLASSD_R0 */
#define PIO_PB1F_CLASSD_R0                         (_U_(1) << 1) /**< CLASSD signal: CLASSD_R0 */
#define PIN_PB2F_CLASSD_R1                         _L_(34)      /**< CLASSD signal: CLASSD_R1 on PB2 mux F */
#define MUX_PB2F_CLASSD_R1                         _L_(5)       /**< CLASSD signal line function value: CLASSD_R1 */
#define PIO_PB2F_CLASSD_R1                         (_U_(1) << 2) /**< CLASSD signal: CLASSD_R1 */
#define PIN_PB3F_CLASSD_R2                         _L_(35)      /**< CLASSD signal: CLASSD_R2 on PB3 mux F */
#define MUX_PB3F_CLASSD_R2                         _L_(5)       /**< CLASSD signal line function value: CLASSD_R2 */
#define PIO_PB3F_CLASSD_R2                         (_U_(1) << 3) /**< CLASSD signal: CLASSD_R2 */
#define PIN_PB4F_CLASSD_R3                         _L_(36)      /**< CLASSD signal: CLASSD_R3 on PB4 mux F */
#define MUX_PB4F_CLASSD_R3                         _L_(5)       /**< CLASSD signal line function value: CLASSD_R3 */
#define PIO_PB4F_CLASSD_R3                         (_U_(1) << 4) /**< CLASSD signal: CLASSD_R3 */
/* ========== PIO definition for FLEXCOM0 peripheral ========== */
#define PIN_PB28C_FLEXCOM0_IO0                     _L_(60)      /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PB28 mux C */
#define MUX_PB28C_FLEXCOM0_IO0                     _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PB28C_FLEXCOM0_IO0                     (_U_(1) << 28) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PB29C_FLEXCOM0_IO1                     _L_(61)      /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PB29 mux C */
#define MUX_PB29C_FLEXCOM0_IO1                     _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PB29C_FLEXCOM0_IO1                     (_U_(1) << 29) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PB30C_FLEXCOM0_IO2                     _L_(62)      /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PB30 mux C */
#define MUX_PB30C_FLEXCOM0_IO2                     _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PB30C_FLEXCOM0_IO2                     (_U_(1) << 30) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PB31C_FLEXCOM0_IO3                     _L_(63)      /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PB31 mux C */
#define MUX_PB31C_FLEXCOM0_IO3                     _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PB31C_FLEXCOM0_IO3                     (_U_(1) << 31) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PC0C_FLEXCOM0_IO4                      _L_(64)      /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PC0 mux C */
#define MUX_PC0C_FLEXCOM0_IO4                      _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PC0C_FLEXCOM0_IO4                      (_U_(1) << 0) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
/* ========== PIO definition for FLEXCOM1 peripheral ========== */
#define PIN_PA24A_FLEXCOM1_IO0                     _L_(24)      /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PA24 mux A */
#define MUX_PA24A_FLEXCOM1_IO0                     _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PA24A_FLEXCOM1_IO0                     (_U_(1) << 24) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PA23A_FLEXCOM1_IO1                     _L_(23)      /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PA23 mux A */
#define MUX_PA23A_FLEXCOM1_IO1                     _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PA23A_FLEXCOM1_IO1                     (_U_(1) << 23) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PA22A_FLEXCOM1_IO2                     _L_(22)      /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PA22 mux A */
#define MUX_PA22A_FLEXCOM1_IO2                     _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PA22A_FLEXCOM1_IO2                     (_U_(1) << 22) /**< FLEXCOM1 signal: FLEXCOM1_IO2 */
#define PIN_PA25A_FLEXCOM1_IO3                     _L_(25)      /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PA25 mux A */
#define MUX_PA25A_FLEXCOM1_IO3                     _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PA25A_FLEXCOM1_IO3                     (_U_(1) << 25) /**< FLEXCOM1 signal: FLEXCOM1_IO3 */
#define PIN_PA26A_FLEXCOM1_IO4                     _L_(26)      /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PA26 mux A */
#define MUX_PA26A_FLEXCOM1_IO4                     _L_(0)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PA26A_FLEXCOM1_IO4                     (_U_(1) << 26) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
/* ========== PIO definition for FLEXCOM2 peripheral ========== */
#define PIN_PA6E_FLEXCOM2_IO0                      _L_(6)       /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PA6 mux E */
#define MUX_PA6E_FLEXCOM2_IO0                      _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PA6E_FLEXCOM2_IO0                      (_U_(1) << 6) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PD26C_FLEXCOM2_IO0                     _L_(122)     /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PD26 mux C */
#define MUX_PD26C_FLEXCOM2_IO0                     _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PD26C_FLEXCOM2_IO0                     (_U_(1) << 26) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PA7E_FLEXCOM2_IO1                      _L_(7)       /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PA7 mux E */
#define MUX_PA7E_FLEXCOM2_IO1                      _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PA7E_FLEXCOM2_IO1                      (_U_(1) << 7) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PD27C_FLEXCOM2_IO1                     _L_(123)     /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PD27 mux C */
#define MUX_PD27C_FLEXCOM2_IO1                     _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PD27C_FLEXCOM2_IO1                     (_U_(1) << 27) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PA8E_FLEXCOM2_IO2                      _L_(8)       /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PA8 mux E */
#define MUX_PA8E_FLEXCOM2_IO2                      _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PA8E_FLEXCOM2_IO2                      (_U_(1) << 8) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PD28C_FLEXCOM2_IO2                     _L_(124)     /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PD28 mux C */
#define MUX_PD28C_FLEXCOM2_IO2                     _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PD28C_FLEXCOM2_IO2                     (_U_(1) << 28) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PA9E_FLEXCOM2_IO3                      _L_(9)       /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PA9 mux E */
#define MUX_PA9E_FLEXCOM2_IO3                      _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PA9E_FLEXCOM2_IO3                      (_U_(1) << 9) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PD29C_FLEXCOM2_IO3                     _L_(125)     /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PD29 mux C */
#define MUX_PD29C_FLEXCOM2_IO3                     _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PD29C_FLEXCOM2_IO3                     (_U_(1) << 29) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PA10E_FLEXCOM2_IO4                     _L_(10)      /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PA10 mux E */
#define MUX_PA10E_FLEXCOM2_IO4                     _L_(4)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PA10E_FLEXCOM2_IO4                     (_U_(1) << 10) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
#define PIN_PD30C_FLEXCOM2_IO4                     _L_(126)     /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PD30 mux C */
#define MUX_PD30C_FLEXCOM2_IO4                     _L_(2)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PD30C_FLEXCOM2_IO4                     (_U_(1) << 30) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
/* ========== PIO definition for FLEXCOM3 peripheral ========== */
#define PIN_PA15E_FLEXCOM3_IO0                     _L_(15)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PA15 mux E */
#define MUX_PA15E_FLEXCOM3_IO0                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PA15E_FLEXCOM3_IO0                     (_U_(1) << 15) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PB23E_FLEXCOM3_IO0                     _L_(55)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PB23 mux E */
#define MUX_PB23E_FLEXCOM3_IO0                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PB23E_FLEXCOM3_IO0                     (_U_(1) << 23) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PC20E_FLEXCOM3_IO0                     _L_(84)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PC20 mux E */
#define MUX_PC20E_FLEXCOM3_IO0                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PC20E_FLEXCOM3_IO0                     (_U_(1) << 20) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PA13E_FLEXCOM3_IO1                     _L_(13)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PA13 mux E */
#define MUX_PA13E_FLEXCOM3_IO1                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PA13E_FLEXCOM3_IO1                     (_U_(1) << 13) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PB22E_FLEXCOM3_IO1                     _L_(54)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PB22 mux E */
#define MUX_PB22E_FLEXCOM3_IO1                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PB22E_FLEXCOM3_IO1                     (_U_(1) << 22) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PC19E_FLEXCOM3_IO1                     _L_(83)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PC19 mux E */
#define MUX_PC19E_FLEXCOM3_IO1                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PC19E_FLEXCOM3_IO1                     (_U_(1) << 19) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PA14E_FLEXCOM3_IO2                     _L_(14)      /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PA14 mux E */
#define MUX_PA14E_FLEXCOM3_IO2                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PA14E_FLEXCOM3_IO2                     (_U_(1) << 14) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PB21E_FLEXCOM3_IO2                     _L_(53)      /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PB21 mux E */
#define MUX_PB21E_FLEXCOM3_IO2                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PB21E_FLEXCOM3_IO2                     (_U_(1) << 21) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PC18E_FLEXCOM3_IO2                     _L_(82)      /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PC18 mux E */
#define MUX_PC18E_FLEXCOM3_IO2                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PC18E_FLEXCOM3_IO2                     (_U_(1) << 18) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PA16E_FLEXCOM3_IO3                     _L_(16)      /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PA16 mux E */
#define MUX_PA16E_FLEXCOM3_IO3                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PA16E_FLEXCOM3_IO3                     (_U_(1) << 16) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PB24E_FLEXCOM3_IO3                     _L_(56)      /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PB24 mux E */
#define MUX_PB24E_FLEXCOM3_IO3                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PB24E_FLEXCOM3_IO3                     (_U_(1) << 24) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PC21E_FLEXCOM3_IO3                     _L_(85)      /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PC21 mux E */
#define MUX_PC21E_FLEXCOM3_IO3                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PC21E_FLEXCOM3_IO3                     (_U_(1) << 21) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PA17E_FLEXCOM3_IO4                     _L_(17)      /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PA17 mux E */
#define MUX_PA17E_FLEXCOM3_IO4                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PA17E_FLEXCOM3_IO4                     (_U_(1) << 17) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PB25E_FLEXCOM3_IO4                     _L_(57)      /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PB25 mux E */
#define MUX_PB25E_FLEXCOM3_IO4                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PB25E_FLEXCOM3_IO4                     (_U_(1) << 25) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PC22E_FLEXCOM3_IO4                     _L_(86)      /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PC22 mux E */
#define MUX_PC22E_FLEXCOM3_IO4                     _L_(4)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PC22E_FLEXCOM3_IO4                     (_U_(1) << 22) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
/* ========== PIO definition for FLEXCOM4 peripheral ========== */
#define PIN_PC28B_FLEXCOM4_IO0                     _L_(92)      /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PC28 mux B */
#define MUX_PC28B_FLEXCOM4_IO0                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PC28B_FLEXCOM4_IO0                     (_U_(1) << 28) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PD12B_FLEXCOM4_IO0                     _L_(108)     /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PD12 mux B */
#define MUX_PD12B_FLEXCOM4_IO0                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PD12B_FLEXCOM4_IO0                     (_U_(1) << 12) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PD21C_FLEXCOM4_IO0                     _L_(117)     /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PD21 mux C */
#define MUX_PD21C_FLEXCOM4_IO0                     _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PD21C_FLEXCOM4_IO0                     (_U_(1) << 21) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PC29B_FLEXCOM4_IO1                     _L_(93)      /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PC29 mux B */
#define MUX_PC29B_FLEXCOM4_IO1                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PC29B_FLEXCOM4_IO1                     (_U_(1) << 29) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PD13B_FLEXCOM4_IO1                     _L_(109)     /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PD13 mux B */
#define MUX_PD13B_FLEXCOM4_IO1                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PD13B_FLEXCOM4_IO1                     (_U_(1) << 13) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PD22C_FLEXCOM4_IO1                     _L_(118)     /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PD22 mux C */
#define MUX_PD22C_FLEXCOM4_IO1                     _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PD22C_FLEXCOM4_IO1                     (_U_(1) << 22) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PC30B_FLEXCOM4_IO2                     _L_(94)      /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PC30 mux B */
#define MUX_PC30B_FLEXCOM4_IO2                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PC30B_FLEXCOM4_IO2                     (_U_(1) << 30) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PD14B_FLEXCOM4_IO2                     _L_(110)     /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PD14 mux B */
#define MUX_PD14B_FLEXCOM4_IO2                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PD14B_FLEXCOM4_IO2                     (_U_(1) << 14) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PD23C_FLEXCOM4_IO2                     _L_(119)     /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PD23 mux C */
#define MUX_PD23C_FLEXCOM4_IO2                     _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PD23C_FLEXCOM4_IO2                     (_U_(1) << 23) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PC31B_FLEXCOM4_IO3                     _L_(95)      /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PC31 mux B */
#define MUX_PC31B_FLEXCOM4_IO3                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PC31B_FLEXCOM4_IO3                     (_U_(1) << 31) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PD15B_FLEXCOM4_IO3                     _L_(111)     /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PD15 mux B */
#define MUX_PD15B_FLEXCOM4_IO3                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PD15B_FLEXCOM4_IO3                     (_U_(1) << 15) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PD24C_FLEXCOM4_IO3                     _L_(120)     /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PD24 mux C */
#define MUX_PD24C_FLEXCOM4_IO3                     _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PD24C_FLEXCOM4_IO3                     (_U_(1) << 24) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PD0B_FLEXCOM4_IO4                      _L_(96)      /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PD0 mux B */
#define MUX_PD0B_FLEXCOM4_IO4                      _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PD0B_FLEXCOM4_IO4                      (_U_(1) << 0) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
#define PIN_PD16B_FLEXCOM4_IO4                     _L_(112)     /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PD16 mux B */
#define MUX_PD16B_FLEXCOM4_IO4                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PD16B_FLEXCOM4_IO4                     (_U_(1) << 16) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
#define PIN_PD25C_FLEXCOM4_IO4                     _L_(121)     /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PD25 mux C */
#define MUX_PD25C_FLEXCOM4_IO4                     _L_(2)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PD25C_FLEXCOM4_IO4                     (_U_(1) << 25) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
/* ========== PIO definition for GMAC peripheral ========== */
#define PIN_PB9F_GMAC_GCOL                         _L_(41)      /**< GMAC signal: GMAC_GCOL on PB9 mux F */
#define MUX_PB9F_GMAC_GCOL                         _L_(5)       /**< GMAC signal line function value: GMAC_GCOL */
#define PIO_PB9F_GMAC_GCOL                         (_U_(1) << 9) /**< GMAC signal: GMAC_GCOL */
#define PIN_PC23B_GMAC_GCOL                        _L_(87)      /**< GMAC signal: GMAC_GCOL on PC23 mux B */
#define MUX_PC23B_GMAC_GCOL                        _L_(1)       /**< GMAC signal line function value: GMAC_GCOL */
#define PIO_PC23B_GMAC_GCOL                        (_U_(1) << 23) /**< GMAC signal: GMAC_GCOL */
#define PIN_PD4D_GMAC_GCOL                         _L_(100)     /**< GMAC signal: GMAC_GCOL on PD4 mux D */
#define MUX_PD4D_GMAC_GCOL                         _L_(3)       /**< GMAC signal line function value: GMAC_GCOL */
#define PIO_PD4D_GMAC_GCOL                         (_U_(1) << 4) /**< GMAC signal: GMAC_GCOL */
#define PIN_PB8F_GMAC_GCRS                         _L_(40)      /**< GMAC signal: GMAC_GCRS on PB8 mux F */
#define MUX_PB8F_GMAC_GCRS                         _L_(5)       /**< GMAC signal line function value: GMAC_GCRS */
#define PIO_PB8F_GMAC_GCRS                         (_U_(1) << 8) /**< GMAC signal: GMAC_GCRS */
#define PIN_PC22B_GMAC_GCRS                        _L_(86)      /**< GMAC signal: GMAC_GCRS on PC22 mux B */
#define MUX_PC22B_GMAC_GCRS                        _L_(1)       /**< GMAC signal line function value: GMAC_GCRS */
#define PIO_PC22B_GMAC_GCRS                        (_U_(1) << 22) /**< GMAC signal: GMAC_GCRS */
#define PIN_PD3D_GMAC_GCRS                         _L_(99)      /**< GMAC signal: GMAC_GCRS on PD3 mux D */
#define MUX_PD3D_GMAC_GCRS                         _L_(3)       /**< GMAC signal line function value: GMAC_GCRS */
#define PIO_PD3D_GMAC_GCRS                         (_U_(1) << 3) /**< GMAC signal: GMAC_GCRS */
#define PIN_PB22F_GMAC_GMDC                        _L_(54)      /**< GMAC signal: GMAC_GMDC on PB22 mux F */
#define MUX_PB22F_GMAC_GMDC                        _L_(5)       /**< GMAC signal line function value: GMAC_GMDC */
#define PIO_PB22F_GMAC_GMDC                        (_U_(1) << 22) /**< GMAC signal: GMAC_GMDC */
#define PIN_PC18B_GMAC_GMDC                        _L_(82)      /**< GMAC signal: GMAC_GMDC on PC18 mux B */
#define MUX_PC18B_GMAC_GMDC                        _L_(1)       /**< GMAC signal line function value: GMAC_GMDC */
#define PIO_PC18B_GMAC_GMDC                        (_U_(1) << 18) /**< GMAC signal: GMAC_GMDC */
#define PIN_PD17D_GMAC_GMDC                        _L_(113)     /**< GMAC signal: GMAC_GMDC on PD17 mux D */
#define MUX_PD17D_GMAC_GMDC                        _L_(3)       /**< GMAC signal line function value: GMAC_GMDC */
#define PIO_PD17D_GMAC_GMDC                        (_U_(1) << 17) /**< GMAC signal: GMAC_GMDC */
#define PIN_PB23F_GMAC_GMDIO                       _L_(55)      /**< GMAC signal: GMAC_GMDIO on PB23 mux F */
#define MUX_PB23F_GMAC_GMDIO                       _L_(5)       /**< GMAC signal line function value: GMAC_GMDIO */
#define PIO_PB23F_GMAC_GMDIO                       (_U_(1) << 23) /**< GMAC signal: GMAC_GMDIO */
#define PIN_PC19B_GMAC_GMDIO                       _L_(83)      /**< GMAC signal: GMAC_GMDIO on PC19 mux B */
#define MUX_PC19B_GMAC_GMDIO                       _L_(1)       /**< GMAC signal line function value: GMAC_GMDIO */
#define PIO_PC19B_GMAC_GMDIO                       (_U_(1) << 19) /**< GMAC signal: GMAC_GMDIO */
#define PIN_PD18D_GMAC_GMDIO                       _L_(114)     /**< GMAC signal: GMAC_GMDIO on PD18 mux D */
#define MUX_PD18D_GMAC_GMDIO                       _L_(3)       /**< GMAC signal line function value: GMAC_GMDIO */
#define PIO_PD18D_GMAC_GMDIO                       (_U_(1) << 18) /**< GMAC signal: GMAC_GMDIO */
#define PIN_PB18F_GMAC_GRX0                        _L_(50)      /**< GMAC signal: GMAC_GRX0 on PB18 mux F */
#define MUX_PB18F_GMAC_GRX0                        _L_(5)       /**< GMAC signal line function value: GMAC_GRX0 */
#define PIO_PB18F_GMAC_GRX0                        (_U_(1) << 18) /**< GMAC signal: GMAC_GRX0 */
#define PIN_PC14B_GMAC_GRX0                        _L_(78)      /**< GMAC signal: GMAC_GRX0 on PC14 mux B */
#define MUX_PC14B_GMAC_GRX0                        _L_(1)       /**< GMAC signal line function value: GMAC_GRX0 */
#define PIO_PC14B_GMAC_GRX0                        (_U_(1) << 14) /**< GMAC signal: GMAC_GRX0 */
#define PIN_PD13D_GMAC_GRX0                        _L_(109)     /**< GMAC signal: GMAC_GRX0 on PD13 mux D */
#define MUX_PD13D_GMAC_GRX0                        _L_(3)       /**< GMAC signal line function value: GMAC_GRX0 */
#define PIO_PD13D_GMAC_GRX0                        (_U_(1) << 13) /**< GMAC signal: GMAC_GRX0 */
#define PIN_PB19F_GMAC_GRX1                        _L_(51)      /**< GMAC signal: GMAC_GRX1 on PB19 mux F */
#define MUX_PB19F_GMAC_GRX1                        _L_(5)       /**< GMAC signal line function value: GMAC_GRX1 */
#define PIO_PB19F_GMAC_GRX1                        (_U_(1) << 19) /**< GMAC signal: GMAC_GRX1 */
#define PIN_PC15B_GMAC_GRX1                        _L_(79)      /**< GMAC signal: GMAC_GRX1 on PC15 mux B */
#define MUX_PC15B_GMAC_GRX1                        _L_(1)       /**< GMAC signal line function value: GMAC_GRX1 */
#define PIO_PC15B_GMAC_GRX1                        (_U_(1) << 15) /**< GMAC signal: GMAC_GRX1 */
#define PIN_PD14D_GMAC_GRX1                        _L_(110)     /**< GMAC signal: GMAC_GRX1 on PD14 mux D */
#define MUX_PD14D_GMAC_GRX1                        _L_(3)       /**< GMAC signal line function value: GMAC_GRX1 */
#define PIO_PD14D_GMAC_GRX1                        (_U_(1) << 14) /**< GMAC signal: GMAC_GRX1 */
#define PIN_PB10F_GMAC_GRX2                        _L_(42)      /**< GMAC signal: GMAC_GRX2 on PB10 mux F */
#define MUX_PB10F_GMAC_GRX2                        _L_(5)       /**< GMAC signal line function value: GMAC_GRX2 */
#define PIO_PB10F_GMAC_GRX2                        (_U_(1) << 10) /**< GMAC signal: GMAC_GRX2 */
#define PIN_PC24B_GMAC_GRX2                        _L_(88)      /**< GMAC signal: GMAC_GRX2 on PC24 mux B */
#define MUX_PC24B_GMAC_GRX2                        _L_(1)       /**< GMAC signal line function value: GMAC_GRX2 */
#define PIO_PC24B_GMAC_GRX2                        (_U_(1) << 24) /**< GMAC signal: GMAC_GRX2 */
#define PIN_PD5D_GMAC_GRX2                         _L_(101)     /**< GMAC signal: GMAC_GRX2 on PD5 mux D */
#define MUX_PD5D_GMAC_GRX2                         _L_(3)       /**< GMAC signal line function value: GMAC_GRX2 */
#define PIO_PD5D_GMAC_GRX2                         (_U_(1) << 5) /**< GMAC signal: GMAC_GRX2 */
#define PIN_PB11F_GMAC_GRX3                        _L_(43)      /**< GMAC signal: GMAC_GRX3 on PB11 mux F */
#define MUX_PB11F_GMAC_GRX3                        _L_(5)       /**< GMAC signal line function value: GMAC_GRX3 */
#define PIO_PB11F_GMAC_GRX3                        (_U_(1) << 11) /**< GMAC signal: GMAC_GRX3 */
#define PIN_PC25B_GMAC_GRX3                        _L_(89)      /**< GMAC signal: GMAC_GRX3 on PC25 mux B */
#define MUX_PC25B_GMAC_GRX3                        _L_(1)       /**< GMAC signal line function value: GMAC_GRX3 */
#define PIO_PC25B_GMAC_GRX3                        (_U_(1) << 25) /**< GMAC signal: GMAC_GRX3 */
#define PIN_PD6D_GMAC_GRX3                         _L_(102)     /**< GMAC signal: GMAC_GRX3 on PD6 mux D */
#define MUX_PD6D_GMAC_GRX3                         _L_(3)       /**< GMAC signal line function value: GMAC_GRX3 */
#define PIO_PD6D_GMAC_GRX3                         (_U_(1) << 6) /**< GMAC signal: GMAC_GRX3 */
#define PIN_PB7F_GMAC_GRXCK                        _L_(39)      /**< GMAC signal: GMAC_GRXCK on PB7 mux F */
#define MUX_PB7F_GMAC_GRXCK                        _L_(5)       /**< GMAC signal line function value: GMAC_GRXCK */
#define PIO_PB7F_GMAC_GRXCK                        (_U_(1) << 7) /**< GMAC signal: GMAC_GRXCK */
#define PIN_PC20B_GMAC_GRXCK                       _L_(84)      /**< GMAC signal: GMAC_GRXCK on PC20 mux B */
#define MUX_PC20B_GMAC_GRXCK                       _L_(1)       /**< GMAC signal line function value: GMAC_GRXCK */
#define PIO_PC20B_GMAC_GRXCK                       (_U_(1) << 20) /**< GMAC signal: GMAC_GRXCK */
#define PIN_PD1D_GMAC_GRXCK                        _L_(97)      /**< GMAC signal: GMAC_GRXCK on PD1 mux D */
#define MUX_PD1D_GMAC_GRXCK                        _L_(3)       /**< GMAC signal line function value: GMAC_GRXCK */
#define PIO_PD1D_GMAC_GRXCK                        (_U_(1) << 1) /**< GMAC signal: GMAC_GRXCK */
#define PIN_PB16F_GMAC_GRXDV                       _L_(48)      /**< GMAC signal: GMAC_GRXDV on PB16 mux F */
#define MUX_PB16F_GMAC_GRXDV                       _L_(5)       /**< GMAC signal line function value: GMAC_GRXDV */
#define PIO_PB16F_GMAC_GRXDV                       (_U_(1) << 16) /**< GMAC signal: GMAC_GRXDV */
#define PIN_PC12B_GMAC_GRXDV                       _L_(76)      /**< GMAC signal: GMAC_GRXDV on PC12 mux B */
#define MUX_PC12B_GMAC_GRXDV                       _L_(1)       /**< GMAC signal line function value: GMAC_GRXDV */
#define PIO_PC12B_GMAC_GRXDV                       (_U_(1) << 12) /**< GMAC signal: GMAC_GRXDV */
#define PIN_PD11D_GMAC_GRXDV                       _L_(107)     /**< GMAC signal: GMAC_GRXDV on PD11 mux D */
#define MUX_PD11D_GMAC_GRXDV                       _L_(3)       /**< GMAC signal line function value: GMAC_GRXDV */
#define PIO_PD11D_GMAC_GRXDV                       (_U_(1) << 11) /**< GMAC signal: GMAC_GRXDV */
#define PIN_PB17F_GMAC_GRXER                       _L_(49)      /**< GMAC signal: GMAC_GRXER on PB17 mux F */
#define MUX_PB17F_GMAC_GRXER                       _L_(5)       /**< GMAC signal line function value: GMAC_GRXER */
#define PIO_PB17F_GMAC_GRXER                       (_U_(1) << 17) /**< GMAC signal: GMAC_GRXER */
#define PIN_PC13B_GMAC_GRXER                       _L_(77)      /**< GMAC signal: GMAC_GRXER on PC13 mux B */
#define MUX_PC13B_GMAC_GRXER                       _L_(1)       /**< GMAC signal line function value: GMAC_GRXER */
#define PIO_PC13B_GMAC_GRXER                       (_U_(1) << 13) /**< GMAC signal: GMAC_GRXER */
#define PIN_PD12D_GMAC_GRXER                       _L_(108)     /**< GMAC signal: GMAC_GRXER on PD12 mux D */
#define MUX_PD12D_GMAC_GRXER                       _L_(3)       /**< GMAC signal line function value: GMAC_GRXER */
#define PIO_PD12D_GMAC_GRXER                       (_U_(1) << 12) /**< GMAC signal: GMAC_GRXER */
#define PIN_PB5F_GMAC_GTSUCOMP                     _L_(37)      /**< GMAC signal: GMAC_GTSUCOMP on PB5 mux F */
#define MUX_PB5F_GMAC_GTSUCOMP                     _L_(5)       /**< GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PB5F_GMAC_GTSUCOMP                     (_U_(1) << 5) /**< GMAC signal: GMAC_GTSUCOMP */
#define PIN_PC9B_GMAC_GTSUCOMP                     _L_(73)      /**< GMAC signal: GMAC_GTSUCOMP on PC9 mux B */
#define MUX_PC9B_GMAC_GTSUCOMP                     _L_(1)       /**< GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PC9B_GMAC_GTSUCOMP                     (_U_(1) << 9) /**< GMAC signal: GMAC_GTSUCOMP */
#define PIN_PD0D_GMAC_GTSUCOMP                     _L_(96)      /**< GMAC signal: GMAC_GTSUCOMP on PD0 mux D */
#define MUX_PD0D_GMAC_GTSUCOMP                     _L_(3)       /**< GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PD0D_GMAC_GTSUCOMP                     (_U_(1) << 0) /**< GMAC signal: GMAC_GTSUCOMP */
#define PIN_PB20F_GMAC_GTX0                        _L_(52)      /**< GMAC signal: GMAC_GTX0 on PB20 mux F */
#define MUX_PB20F_GMAC_GTX0                        _L_(5)       /**< GMAC signal line function value: GMAC_GTX0 */
#define PIO_PB20F_GMAC_GTX0                        (_U_(1) << 20) /**< GMAC signal: GMAC_GTX0 */
#define PIN_PC16B_GMAC_GTX0                        _L_(80)      /**< GMAC signal: GMAC_GTX0 on PC16 mux B */
#define MUX_PC16B_GMAC_GTX0                        _L_(1)       /**< GMAC signal line function value: GMAC_GTX0 */
#define PIO_PC16B_GMAC_GTX0                        (_U_(1) << 16) /**< GMAC signal: GMAC_GTX0 */
#define PIN_PD15D_GMAC_GTX0                        _L_(111)     /**< GMAC signal: GMAC_GTX0 on PD15 mux D */
#define MUX_PD15D_GMAC_GTX0                        _L_(3)       /**< GMAC signal line function value: GMAC_GTX0 */
#define PIO_PD15D_GMAC_GTX0                        (_U_(1) << 15) /**< GMAC signal: GMAC_GTX0 */
#define PIN_PB21F_GMAC_GTX1                        _L_(53)      /**< GMAC signal: GMAC_GTX1 on PB21 mux F */
#define MUX_PB21F_GMAC_GTX1                        _L_(5)       /**< GMAC signal line function value: GMAC_GTX1 */
#define PIO_PB21F_GMAC_GTX1                        (_U_(1) << 21) /**< GMAC signal: GMAC_GTX1 */
#define PIN_PC17B_GMAC_GTX1                        _L_(81)      /**< GMAC signal: GMAC_GTX1 on PC17 mux B */
#define MUX_PC17B_GMAC_GTX1                        _L_(1)       /**< GMAC signal line function value: GMAC_GTX1 */
#define PIO_PC17B_GMAC_GTX1                        (_U_(1) << 17) /**< GMAC signal: GMAC_GTX1 */
#define PIN_PD16D_GMAC_GTX1                        _L_(112)     /**< GMAC signal: GMAC_GTX1 on PD16 mux D */
#define MUX_PD16D_GMAC_GTX1                        _L_(3)       /**< GMAC signal line function value: GMAC_GTX1 */
#define PIO_PD16D_GMAC_GTX1                        (_U_(1) << 16) /**< GMAC signal: GMAC_GTX1 */
#define PIN_PB12F_GMAC_GTX2                        _L_(44)      /**< GMAC signal: GMAC_GTX2 on PB12 mux F */
#define MUX_PB12F_GMAC_GTX2                        _L_(5)       /**< GMAC signal line function value: GMAC_GTX2 */
#define PIO_PB12F_GMAC_GTX2                        (_U_(1) << 12) /**< GMAC signal: GMAC_GTX2 */
#define PIN_PC26B_GMAC_GTX2                        _L_(90)      /**< GMAC signal: GMAC_GTX2 on PC26 mux B */
#define MUX_PC26B_GMAC_GTX2                        _L_(1)       /**< GMAC signal line function value: GMAC_GTX2 */
#define PIO_PC26B_GMAC_GTX2                        (_U_(1) << 26) /**< GMAC signal: GMAC_GTX2 */
#define PIN_PD7D_GMAC_GTX2                         _L_(103)     /**< GMAC signal: GMAC_GTX2 on PD7 mux D */
#define MUX_PD7D_GMAC_GTX2                         _L_(3)       /**< GMAC signal line function value: GMAC_GTX2 */
#define PIO_PD7D_GMAC_GTX2                         (_U_(1) << 7) /**< GMAC signal: GMAC_GTX2 */
#define PIN_PB13F_GMAC_GTX3                        _L_(45)      /**< GMAC signal: GMAC_GTX3 on PB13 mux F */
#define MUX_PB13F_GMAC_GTX3                        _L_(5)       /**< GMAC signal line function value: GMAC_GTX3 */
#define PIO_PB13F_GMAC_GTX3                        (_U_(1) << 13) /**< GMAC signal: GMAC_GTX3 */
#define PIN_PC27B_GMAC_GTX3                        _L_(91)      /**< GMAC signal: GMAC_GTX3 on PC27 mux B */
#define MUX_PC27B_GMAC_GTX3                        _L_(1)       /**< GMAC signal line function value: GMAC_GTX3 */
#define PIO_PC27B_GMAC_GTX3                        (_U_(1) << 27) /**< GMAC signal: GMAC_GTX3 */
#define PIN_PD8D_GMAC_GTX3                         _L_(104)     /**< GMAC signal: GMAC_GTX3 on PD8 mux D */
#define MUX_PD8D_GMAC_GTX3                         _L_(3)       /**< GMAC signal line function value: GMAC_GTX3 */
#define PIO_PD8D_GMAC_GTX3                         (_U_(1) << 8) /**< GMAC signal: GMAC_GTX3 */
#define PIN_PB14F_GMAC_GTXCK                       _L_(46)      /**< GMAC signal: GMAC_GTXCK on PB14 mux F */
#define MUX_PB14F_GMAC_GTXCK                       _L_(5)       /**< GMAC signal line function value: GMAC_GTXCK */
#define PIO_PB14F_GMAC_GTXCK                       (_U_(1) << 14) /**< GMAC signal: GMAC_GTXCK */
#define PIN_PC10B_GMAC_GTXCK                       _L_(74)      /**< GMAC signal: GMAC_GTXCK on PC10 mux B */
#define MUX_PC10B_GMAC_GTXCK                       _L_(1)       /**< GMAC signal line function value: GMAC_GTXCK */
#define PIO_PC10B_GMAC_GTXCK                       (_U_(1) << 10) /**< GMAC signal: GMAC_GTXCK */
#define PIN_PD9D_GMAC_GTXCK                        _L_(105)     /**< GMAC signal: GMAC_GTXCK on PD9 mux D */
#define MUX_PD9D_GMAC_GTXCK                        _L_(3)       /**< GMAC signal line function value: GMAC_GTXCK */
#define PIO_PD9D_GMAC_GTXCK                        (_U_(1) << 9) /**< GMAC signal: GMAC_GTXCK */
#define PIN_PB15F_GMAC_GTXEN                       _L_(47)      /**< GMAC signal: GMAC_GTXEN on PB15 mux F */
#define MUX_PB15F_GMAC_GTXEN                       _L_(5)       /**< GMAC signal line function value: GMAC_GTXEN */
#define PIO_PB15F_GMAC_GTXEN                       (_U_(1) << 15) /**< GMAC signal: GMAC_GTXEN */
#define PIN_PC11B_GMAC_GTXEN                       _L_(75)      /**< GMAC signal: GMAC_GTXEN on PC11 mux B */
#define MUX_PC11B_GMAC_GTXEN                       _L_(1)       /**< GMAC signal line function value: GMAC_GTXEN */
#define PIO_PC11B_GMAC_GTXEN                       (_U_(1) << 11) /**< GMAC signal: GMAC_GTXEN */
#define PIN_PD10D_GMAC_GTXEN                       _L_(106)     /**< GMAC signal: GMAC_GTXEN on PD10 mux D */
#define MUX_PD10D_GMAC_GTXEN                       _L_(3)       /**< GMAC signal line function value: GMAC_GTXEN */
#define PIO_PD10D_GMAC_GTXEN                       (_U_(1) << 10) /**< GMAC signal: GMAC_GTXEN */
#define PIN_PB6F_GMAC_GTXER                        _L_(38)      /**< GMAC signal: GMAC_GTXER on PB6 mux F */
#define MUX_PB6F_GMAC_GTXER                        _L_(5)       /**< GMAC signal line function value: GMAC_GTXER */
#define PIO_PB6F_GMAC_GTXER                        (_U_(1) << 6) /**< GMAC signal: GMAC_GTXER */
#define PIN_PC21B_GMAC_GTXER                       _L_(85)      /**< GMAC signal: GMAC_GTXER on PC21 mux B */
#define MUX_PC21B_GMAC_GTXER                       _L_(1)       /**< GMAC signal line function value: GMAC_GTXER */
#define PIO_PC21B_GMAC_GTXER                       (_U_(1) << 21) /**< GMAC signal: GMAC_GTXER */
#define PIN_PD2D_GMAC_GTXER                        _L_(98)      /**< GMAC signal: GMAC_GTXER on PD2 mux D */
#define MUX_PD2D_GMAC_GTXER                        _L_(3)       /**< GMAC signal line function value: GMAC_GTXER */
#define PIO_PD2D_GMAC_GTXER                        (_U_(1) << 2) /**< GMAC signal: GMAC_GTXER */
/* ========== PIO definition for I2SC0 peripheral ========== */
#define PIN_PC1E_I2SC0_CK                          _L_(65)      /**< I2SC0 signal: I2SC0_CK on PC1 mux E */
#define MUX_PC1E_I2SC0_CK                          _L_(4)       /**< I2SC0 signal line function value: I2SC0_CK */
#define PIO_PC1E_I2SC0_CK                          (_U_(1) << 1) /**< I2SC0 signal: I2SC0_CK */
#define PIN_PD19E_I2SC0_CK                         _L_(115)     /**< I2SC0 signal: I2SC0_CK on PD19 mux E */
#define MUX_PD19E_I2SC0_CK                         _L_(4)       /**< I2SC0 signal line function value: I2SC0_CK */
#define PIO_PD19E_I2SC0_CK                         (_U_(1) << 19) /**< I2SC0 signal: I2SC0_CK */
#define PIN_PC4E_I2SC0_DI0                         _L_(68)      /**< I2SC0 signal: I2SC0_DI0 on PC4 mux E */
#define MUX_PC4E_I2SC0_DI0                         _L_(4)       /**< I2SC0 signal line function value: I2SC0_DI0 */
#define PIO_PC4E_I2SC0_DI0                         (_U_(1) << 4) /**< I2SC0 signal: I2SC0_DI0 */
#define PIN_PD22E_I2SC0_DI0                        _L_(118)     /**< I2SC0 signal: I2SC0_DI0 on PD22 mux E */
#define MUX_PD22E_I2SC0_DI0                        _L_(4)       /**< I2SC0 signal line function value: I2SC0_DI0 */
#define PIO_PD22E_I2SC0_DI0                        (_U_(1) << 22) /**< I2SC0 signal: I2SC0_DI0 */
#define PIN_PC5E_I2SC0_DO0                         _L_(69)      /**< I2SC0 signal: I2SC0_DO0 on PC5 mux E */
#define MUX_PC5E_I2SC0_DO0                         _L_(4)       /**< I2SC0 signal line function value: I2SC0_DO0 */
#define PIO_PC5E_I2SC0_DO0                         (_U_(1) << 5) /**< I2SC0 signal: I2SC0_DO0 */
#define PIN_PD23E_I2SC0_DO0                        _L_(119)     /**< I2SC0 signal: I2SC0_DO0 on PD23 mux E */
#define MUX_PD23E_I2SC0_DO0                        _L_(4)       /**< I2SC0 signal line function value: I2SC0_DO0 */
#define PIO_PD23E_I2SC0_DO0                        (_U_(1) << 23) /**< I2SC0 signal: I2SC0_DO0 */
#define PIN_PC2E_I2SC0_MCK                         _L_(66)      /**< I2SC0 signal: I2SC0_MCK on PC2 mux E */
#define MUX_PC2E_I2SC0_MCK                         _L_(4)       /**< I2SC0 signal line function value: I2SC0_MCK */
#define PIO_PC2E_I2SC0_MCK                         (_U_(1) << 2) /**< I2SC0 signal: I2SC0_MCK */
#define PIN_PD20E_I2SC0_MCK                        _L_(116)     /**< I2SC0 signal: I2SC0_MCK on PD20 mux E */
#define MUX_PD20E_I2SC0_MCK                        _L_(4)       /**< I2SC0 signal line function value: I2SC0_MCK */
#define PIO_PD20E_I2SC0_MCK                        (_U_(1) << 20) /**< I2SC0 signal: I2SC0_MCK */
#define PIN_PC3E_I2SC0_WS                          _L_(67)      /**< I2SC0 signal: I2SC0_WS on PC3 mux E */
#define MUX_PC3E_I2SC0_WS                          _L_(4)       /**< I2SC0 signal line function value: I2SC0_WS */
#define PIO_PC3E_I2SC0_WS                          (_U_(1) << 3) /**< I2SC0 signal: I2SC0_WS */
#define PIN_PD21E_I2SC0_WS                         _L_(117)     /**< I2SC0 signal: I2SC0_WS on PD21 mux E */
#define MUX_PD21E_I2SC0_WS                         _L_(4)       /**< I2SC0 signal line function value: I2SC0_WS */
#define PIO_PD21E_I2SC0_WS                         (_U_(1) << 21) /**< I2SC0 signal: I2SC0_WS */
/* ========== PIO definition for I2SC1 peripheral ========== */
#define PIN_PA15D_I2SC1_CK                         _L_(15)      /**< I2SC1 signal: I2SC1_CK on PA15 mux D */
#define MUX_PA15D_I2SC1_CK                         _L_(3)       /**< I2SC1 signal line function value: I2SC1_CK */
#define PIO_PA15D_I2SC1_CK                         (_U_(1) << 15) /**< I2SC1 signal: I2SC1_CK */
#define PIN_PB15D_I2SC1_CK                         _L_(47)      /**< I2SC1 signal: I2SC1_CK on PB15 mux D */
#define MUX_PB15D_I2SC1_CK                         _L_(3)       /**< I2SC1 signal line function value: I2SC1_CK */
#define PIO_PB15D_I2SC1_CK                         (_U_(1) << 15) /**< I2SC1 signal: I2SC1_CK */
#define PIN_PA17D_I2SC1_DI0                        _L_(17)      /**< I2SC1 signal: I2SC1_DI0 on PA17 mux D */
#define MUX_PA17D_I2SC1_DI0                        _L_(3)       /**< I2SC1 signal line function value: I2SC1_DI0 */
#define PIO_PA17D_I2SC1_DI0                        (_U_(1) << 17) /**< I2SC1 signal: I2SC1_DI0 */
#define PIN_PB17D_I2SC1_DI0                        _L_(49)      /**< I2SC1 signal: I2SC1_DI0 on PB17 mux D */
#define MUX_PB17D_I2SC1_DI0                        _L_(3)       /**< I2SC1 signal line function value: I2SC1_DI0 */
#define PIO_PB17D_I2SC1_DI0                        (_U_(1) << 17) /**< I2SC1 signal: I2SC1_DI0 */
#define PIN_PA18D_I2SC1_DO0                        _L_(18)      /**< I2SC1 signal: I2SC1_DO0 on PA18 mux D */
#define MUX_PA18D_I2SC1_DO0                        _L_(3)       /**< I2SC1 signal line function value: I2SC1_DO0 */
#define PIO_PA18D_I2SC1_DO0                        (_U_(1) << 18) /**< I2SC1 signal: I2SC1_DO0 */
#define PIN_PB18D_I2SC1_DO0                        _L_(50)      /**< I2SC1 signal: I2SC1_DO0 on PB18 mux D */
#define MUX_PB18D_I2SC1_DO0                        _L_(3)       /**< I2SC1 signal line function value: I2SC1_DO0 */
#define PIO_PB18D_I2SC1_DO0                        (_U_(1) << 18) /**< I2SC1 signal: I2SC1_DO0 */
#define PIN_PA14D_I2SC1_MCK                        _L_(14)      /**< I2SC1 signal: I2SC1_MCK on PA14 mux D */
#define MUX_PA14D_I2SC1_MCK                        _L_(3)       /**< I2SC1 signal line function value: I2SC1_MCK */
#define PIO_PA14D_I2SC1_MCK                        (_U_(1) << 14) /**< I2SC1 signal: I2SC1_MCK */
#define PIN_PB14D_I2SC1_MCK                        _L_(46)      /**< I2SC1 signal: I2SC1_MCK on PB14 mux D */
#define MUX_PB14D_I2SC1_MCK                        _L_(3)       /**< I2SC1 signal line function value: I2SC1_MCK */
#define PIO_PB14D_I2SC1_MCK                        (_U_(1) << 14) /**< I2SC1 signal: I2SC1_MCK */
#define PIN_PA16D_I2SC1_WS                         _L_(16)      /**< I2SC1 signal: I2SC1_WS on PA16 mux D */
#define MUX_PA16D_I2SC1_WS                         _L_(3)       /**< I2SC1 signal line function value: I2SC1_WS */
#define PIO_PA16D_I2SC1_WS                         (_U_(1) << 16) /**< I2SC1 signal: I2SC1_WS */
#define PIN_PB16D_I2SC1_WS                         _L_(48)      /**< I2SC1 signal: I2SC1_WS on PB16 mux D */
#define MUX_PB16D_I2SC1_WS                         _L_(3)       /**< I2SC1 signal line function value: I2SC1_WS */
#define PIO_PB16D_I2SC1_WS                         (_U_(1) << 16) /**< I2SC1 signal: I2SC1_WS */
/* ========== PIO definition for ICE peripheral ========== */
#define PIN_PA26C_ICE_NTRST                        _L_(26)      /**< ICE signal: ICE_NTRST on PA26 mux C */
#define MUX_PA26C_ICE_NTRST                        _L_(2)       /**< ICE signal line function value: ICE_NTRST */
#define PIO_PA26C_ICE_NTRST                        (_U_(1) << 26) /**< ICE signal: ICE_NTRST */
#define PIN_PD10A_ICE_NTRST                        _L_(106)     /**< ICE signal: ICE_NTRST on PD10 mux A */
#define MUX_PD10A_ICE_NTRST                        _L_(0)       /**< ICE signal line function value: ICE_NTRST */
#define PIO_PD10A_ICE_NTRST                        (_U_(1) << 10) /**< ICE signal: ICE_NTRST */
#define PIN_PD18A_ICE_NTRST                        _L_(114)     /**< ICE signal: ICE_NTRST on PD18 mux A */
#define MUX_PD18A_ICE_NTRST                        _L_(0)       /**< ICE signal line function value: ICE_NTRST */
#define PIO_PD18A_ICE_NTRST                        (_U_(1) << 18) /**< ICE signal: ICE_NTRST */
#define PIN_PD31B_ICE_NTRST                        _L_(127)     /**< ICE signal: ICE_NTRST on PD31 mux B */
#define MUX_PD31B_ICE_NTRST                        _L_(1)       /**< ICE signal line function value: ICE_NTRST */
#define PIO_PD31B_ICE_NTRST                        (_U_(1) << 31) /**< ICE signal: ICE_NTRST */
#define PIN_PA22C_ICE_TCK                          _L_(22)      /**< ICE signal: ICE_TCK on PA22 mux C */
#define MUX_PA22C_ICE_TCK                          _L_(2)       /**< ICE signal line function value: ICE_TCK */
#define PIO_PA22C_ICE_TCK                          (_U_(1) << 22) /**< ICE signal: ICE_TCK */
#define PIN_PD6A_ICE_TCK                           _L_(102)     /**< ICE signal: ICE_TCK on PD6 mux A */
#define MUX_PD6A_ICE_TCK                           _L_(0)       /**< ICE signal line function value: ICE_TCK */
#define PIO_PD6A_ICE_TCK                           (_U_(1) << 6) /**< ICE signal: ICE_TCK */
#define PIN_PD14A_ICE_TCK                          _L_(110)     /**< ICE signal: ICE_TCK on PD14 mux A */
#define MUX_PD14A_ICE_TCK                          _L_(0)       /**< ICE signal line function value: ICE_TCK */
#define PIO_PD14A_ICE_TCK                          (_U_(1) << 14) /**< ICE signal: ICE_TCK */
#define PIN_PD27B_ICE_TCK                          _L_(123)     /**< ICE signal: ICE_TCK on PD27 mux B */
#define MUX_PD27B_ICE_TCK                          _L_(1)       /**< ICE signal line function value: ICE_TCK */
#define PIO_PD27B_ICE_TCK                          (_U_(1) << 27) /**< ICE signal: ICE_TCK */
#define PIN_PA23C_ICE_TDI                          _L_(23)      /**< ICE signal: ICE_TDI on PA23 mux C */
#define MUX_PA23C_ICE_TDI                          _L_(2)       /**< ICE signal line function value: ICE_TDI */
#define PIO_PA23C_ICE_TDI                          (_U_(1) << 23) /**< ICE signal: ICE_TDI */
#define PIN_PD7A_ICE_TDI                           _L_(103)     /**< ICE signal: ICE_TDI on PD7 mux A */
#define MUX_PD7A_ICE_TDI                           _L_(0)       /**< ICE signal line function value: ICE_TDI */
#define PIO_PD7A_ICE_TDI                           (_U_(1) << 7) /**< ICE signal: ICE_TDI */
#define PIN_PD15A_ICE_TDI                          _L_(111)     /**< ICE signal: ICE_TDI on PD15 mux A */
#define MUX_PD15A_ICE_TDI                          _L_(0)       /**< ICE signal line function value: ICE_TDI */
#define PIO_PD15A_ICE_TDI                          (_U_(1) << 15) /**< ICE signal: ICE_TDI */
#define PIN_PD28B_ICE_TDI                          _L_(124)     /**< ICE signal: ICE_TDI on PD28 mux B */
#define MUX_PD28B_ICE_TDI                          _L_(1)       /**< ICE signal line function value: ICE_TDI */
#define PIO_PD28B_ICE_TDI                          (_U_(1) << 28) /**< ICE signal: ICE_TDI */
#define PIN_PA24C_ICE_TDO                          _L_(24)      /**< ICE signal: ICE_TDO on PA24 mux C */
#define MUX_PA24C_ICE_TDO                          _L_(2)       /**< ICE signal line function value: ICE_TDO */
#define PIO_PA24C_ICE_TDO                          (_U_(1) << 24) /**< ICE signal: ICE_TDO */
#define PIN_PD8A_ICE_TDO                           _L_(104)     /**< ICE signal: ICE_TDO on PD8 mux A */
#define MUX_PD8A_ICE_TDO                           _L_(0)       /**< ICE signal line function value: ICE_TDO */
#define PIO_PD8A_ICE_TDO                           (_U_(1) << 8) /**< ICE signal: ICE_TDO */
#define PIN_PD16A_ICE_TDO                          _L_(112)     /**< ICE signal: ICE_TDO on PD16 mux A */
#define MUX_PD16A_ICE_TDO                          _L_(0)       /**< ICE signal line function value: ICE_TDO */
#define PIO_PD16A_ICE_TDO                          (_U_(1) << 16) /**< ICE signal: ICE_TDO */
#define PIN_PD29B_ICE_TDO                          _L_(125)     /**< ICE signal: ICE_TDO on PD29 mux B */
#define MUX_PD29B_ICE_TDO                          _L_(1)       /**< ICE signal line function value: ICE_TDO */
#define PIO_PD29B_ICE_TDO                          (_U_(1) << 29) /**< ICE signal: ICE_TDO */
#define PIN_PA25C_ICE_TMS                          _L_(25)      /**< ICE signal: ICE_TMS on PA25 mux C */
#define MUX_PA25C_ICE_TMS                          _L_(2)       /**< ICE signal line function value: ICE_TMS */
#define PIO_PA25C_ICE_TMS                          (_U_(1) << 25) /**< ICE signal: ICE_TMS */
#define PIN_PD9A_ICE_TMS                           _L_(105)     /**< ICE signal: ICE_TMS on PD9 mux A */
#define MUX_PD9A_ICE_TMS                           _L_(0)       /**< ICE signal line function value: ICE_TMS */
#define PIO_PD9A_ICE_TMS                           (_U_(1) << 9) /**< ICE signal: ICE_TMS */
#define PIN_PD17A_ICE_TMS                          _L_(113)     /**< ICE signal: ICE_TMS on PD17 mux A */
#define MUX_PD17A_ICE_TMS                          _L_(0)       /**< ICE signal line function value: ICE_TMS */
#define PIO_PD17A_ICE_TMS                          (_U_(1) << 17) /**< ICE signal: ICE_TMS */
#define PIN_PD30B_ICE_TMS                          _L_(126)     /**< ICE signal: ICE_TMS on PD30 mux B */
#define MUX_PD30B_ICE_TMS                          _L_(1)       /**< ICE signal line function value: ICE_TMS */
#define PIO_PD30B_ICE_TMS                          (_U_(1) << 30) /**< ICE signal: ICE_TMS */
/* ========== PIO definition for ISC peripheral ========== */
#define PIN_PB26F_ISC_D0                           _L_(58)      /**< ISC signal: ISC_D0 on PB26 mux F */
#define MUX_PB26F_ISC_D0                           _L_(5)       /**< ISC signal line function value: ISC_D0 */
#define PIO_PB26F_ISC_D0                           (_U_(1) << 26) /**< ISC signal: ISC_D0 */
#define PIN_PC9C_ISC_D0                            _L_(73)      /**< ISC signal: ISC_D0 on PC9 mux C */
#define MUX_PC9C_ISC_D0                            _L_(2)       /**< ISC signal line function value: ISC_D0 */
#define PIO_PC9C_ISC_D0                            (_U_(1) << 9) /**< ISC signal: ISC_D0 */
#define PIN_PD7E_ISC_D0                            _L_(103)     /**< ISC signal: ISC_D0 on PD7 mux E */
#define MUX_PD7E_ISC_D0                            _L_(4)       /**< ISC signal line function value: ISC_D0 */
#define PIO_PD7E_ISC_D0                            (_U_(1) << 7) /**< ISC signal: ISC_D0 */
#define PIN_PB27F_ISC_D1                           _L_(59)      /**< ISC signal: ISC_D1 on PB27 mux F */
#define MUX_PB27F_ISC_D1                           _L_(5)       /**< ISC signal line function value: ISC_D1 */
#define PIO_PB27F_ISC_D1                           (_U_(1) << 27) /**< ISC signal: ISC_D1 */
#define PIN_PC10C_ISC_D1                           _L_(74)      /**< ISC signal: ISC_D1 on PC10 mux C */
#define MUX_PC10C_ISC_D1                           _L_(2)       /**< ISC signal line function value: ISC_D1 */
#define PIO_PC10C_ISC_D1                           (_U_(1) << 10) /**< ISC signal: ISC_D1 */
#define PIN_PD8E_ISC_D1                            _L_(104)     /**< ISC signal: ISC_D1 on PD8 mux E */
#define MUX_PD8E_ISC_D1                            _L_(4)       /**< ISC signal line function value: ISC_D1 */
#define PIO_PD8E_ISC_D1                            (_U_(1) << 8) /**< ISC signal: ISC_D1 */
#define PIN_PB28F_ISC_D2                           _L_(60)      /**< ISC signal: ISC_D2 on PB28 mux F */
#define MUX_PB28F_ISC_D2                           _L_(5)       /**< ISC signal line function value: ISC_D2 */
#define PIO_PB28F_ISC_D2                           (_U_(1) << 28) /**< ISC signal: ISC_D2 */
#define PIN_PC11C_ISC_D2                           _L_(75)      /**< ISC signal: ISC_D2 on PC11 mux C */
#define MUX_PC11C_ISC_D2                           _L_(2)       /**< ISC signal line function value: ISC_D2 */
#define PIO_PC11C_ISC_D2                           (_U_(1) << 11) /**< ISC signal: ISC_D2 */
#define PIN_PD9E_ISC_D2                            _L_(105)     /**< ISC signal: ISC_D2 on PD9 mux E */
#define MUX_PD9E_ISC_D2                            _L_(4)       /**< ISC signal line function value: ISC_D2 */
#define PIO_PD9E_ISC_D2                            (_U_(1) << 9) /**< ISC signal: ISC_D2 */
#define PIN_PB29F_ISC_D3                           _L_(61)      /**< ISC signal: ISC_D3 on PB29 mux F */
#define MUX_PB29F_ISC_D3                           _L_(5)       /**< ISC signal line function value: ISC_D3 */
#define PIO_PB29F_ISC_D3                           (_U_(1) << 29) /**< ISC signal: ISC_D3 */
#define PIN_PC12C_ISC_D3                           _L_(76)      /**< ISC signal: ISC_D3 on PC12 mux C */
#define MUX_PC12C_ISC_D3                           _L_(2)       /**< ISC signal line function value: ISC_D3 */
#define PIO_PC12C_ISC_D3                           (_U_(1) << 12) /**< ISC signal: ISC_D3 */
#define PIN_PD10E_ISC_D3                           _L_(106)     /**< ISC signal: ISC_D3 on PD10 mux E */
#define MUX_PD10E_ISC_D3                           _L_(4)       /**< ISC signal line function value: ISC_D3 */
#define PIO_PD10E_ISC_D3                           (_U_(1) << 10) /**< ISC signal: ISC_D3 */
#define PIN_PB30F_ISC_D4                           _L_(62)      /**< ISC signal: ISC_D4 on PB30 mux F */
#define MUX_PB30F_ISC_D4                           _L_(5)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PB30F_ISC_D4                           (_U_(1) << 30) /**< ISC signal: ISC_D4 */
#define PIN_PC13C_ISC_D4                           _L_(77)      /**< ISC signal: ISC_D4 on PC13 mux C */
#define MUX_PC13C_ISC_D4                           _L_(2)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PC13C_ISC_D4                           (_U_(1) << 13) /**< ISC signal: ISC_D4 */
#define PIN_PD11E_ISC_D4                           _L_(107)     /**< ISC signal: ISC_D4 on PD11 mux E */
#define MUX_PD11E_ISC_D4                           _L_(4)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PD11E_ISC_D4                           (_U_(1) << 11) /**< ISC signal: ISC_D4 */
#define PIN_PD12F_ISC_D4                           _L_(108)     /**< ISC signal: ISC_D4 on PD12 mux F */
#define MUX_PD12F_ISC_D4                           _L_(5)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PD12F_ISC_D4                           (_U_(1) << 12) /**< ISC signal: ISC_D4 */
#define PIN_PB31F_ISC_D5                           _L_(63)      /**< ISC signal: ISC_D5 on PB31 mux F */
#define MUX_PB31F_ISC_D5                           _L_(5)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PB31F_ISC_D5                           (_U_(1) << 31) /**< ISC signal: ISC_D5 */
#define PIN_PC14C_ISC_D5                           _L_(78)      /**< ISC signal: ISC_D5 on PC14 mux C */
#define MUX_PC14C_ISC_D5                           _L_(2)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PC14C_ISC_D5                           (_U_(1) << 14) /**< ISC signal: ISC_D5 */
#define PIN_PD12E_ISC_D5                           _L_(108)     /**< ISC signal: ISC_D5 on PD12 mux E */
#define MUX_PD12E_ISC_D5                           _L_(4)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PD12E_ISC_D5                           (_U_(1) << 12) /**< ISC signal: ISC_D5 */
#define PIN_PD13F_ISC_D5                           _L_(109)     /**< ISC signal: ISC_D5 on PD13 mux F */
#define MUX_PD13F_ISC_D5                           _L_(5)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PD13F_ISC_D5                           (_U_(1) << 13) /**< ISC signal: ISC_D5 */
#define PIN_PC0F_ISC_D6                            _L_(64)      /**< ISC signal: ISC_D6 on PC0 mux F */
#define MUX_PC0F_ISC_D6                            _L_(5)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PC0F_ISC_D6                            (_U_(1) << 0) /**< ISC signal: ISC_D6 */
#define PIN_PC15C_ISC_D6                           _L_(79)      /**< ISC signal: ISC_D6 on PC15 mux C */
#define MUX_PC15C_ISC_D6                           _L_(2)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PC15C_ISC_D6                           (_U_(1) << 15) /**< ISC signal: ISC_D6 */
#define PIN_PD13E_ISC_D6                           _L_(109)     /**< ISC signal: ISC_D6 on PD13 mux E */
#define MUX_PD13E_ISC_D6                           _L_(4)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PD13E_ISC_D6                           (_U_(1) << 13) /**< ISC signal: ISC_D6 */
#define PIN_PD14F_ISC_D6                           _L_(110)     /**< ISC signal: ISC_D6 on PD14 mux F */
#define MUX_PD14F_ISC_D6                           _L_(5)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PD14F_ISC_D6                           (_U_(1) << 14) /**< ISC signal: ISC_D6 */
#define PIN_PC1F_ISC_D7                            _L_(65)      /**< ISC signal: ISC_D7 on PC1 mux F */
#define MUX_PC1F_ISC_D7                            _L_(5)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PC1F_ISC_D7                            (_U_(1) << 1) /**< ISC signal: ISC_D7 */
#define PIN_PC16C_ISC_D7                           _L_(80)      /**< ISC signal: ISC_D7 on PC16 mux C */
#define MUX_PC16C_ISC_D7                           _L_(2)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PC16C_ISC_D7                           (_U_(1) << 16) /**< ISC signal: ISC_D7 */
#define PIN_PD14E_ISC_D7                           _L_(110)     /**< ISC signal: ISC_D7 on PD14 mux E */
#define MUX_PD14E_ISC_D7                           _L_(4)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PD14E_ISC_D7                           (_U_(1) << 14) /**< ISC signal: ISC_D7 */
#define PIN_PD15F_ISC_D7                           _L_(111)     /**< ISC signal: ISC_D7 on PD15 mux F */
#define MUX_PD15F_ISC_D7                           _L_(5)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PD15F_ISC_D7                           (_U_(1) << 15) /**< ISC signal: ISC_D7 */
#define PIN_PC2F_ISC_D8                            _L_(66)      /**< ISC signal: ISC_D8 on PC2 mux F */
#define MUX_PC2F_ISC_D8                            _L_(5)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PC2F_ISC_D8                            (_U_(1) << 2) /**< ISC signal: ISC_D8 */
#define PIN_PC17C_ISC_D8                           _L_(81)      /**< ISC signal: ISC_D8 on PC17 mux C */
#define MUX_PC17C_ISC_D8                           _L_(2)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PC17C_ISC_D8                           (_U_(1) << 17) /**< ISC signal: ISC_D8 */
#define PIN_PD6E_ISC_D8                            _L_(102)     /**< ISC signal: ISC_D8 on PD6 mux E */
#define MUX_PD6E_ISC_D8                            _L_(4)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PD6E_ISC_D8                            (_U_(1) << 6) /**< ISC signal: ISC_D8 */
#define PIN_PD16F_ISC_D8                           _L_(112)     /**< ISC signal: ISC_D8 on PD16 mux F */
#define MUX_PD16F_ISC_D8                           _L_(5)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PD16F_ISC_D8                           (_U_(1) << 16) /**< ISC signal: ISC_D8 */
#define PIN_PC3F_ISC_D9                            _L_(67)      /**< ISC signal: ISC_D9 on PC3 mux F */
#define MUX_PC3F_ISC_D9                            _L_(5)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PC3F_ISC_D9                            (_U_(1) << 3) /**< ISC signal: ISC_D9 */
#define PIN_PC18C_ISC_D9                           _L_(82)      /**< ISC signal: ISC_D9 on PC18 mux C */
#define MUX_PC18C_ISC_D9                           _L_(2)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PC18C_ISC_D9                           (_U_(1) << 18) /**< ISC signal: ISC_D9 */
#define PIN_PD5E_ISC_D9                            _L_(101)     /**< ISC signal: ISC_D9 on PD5 mux E */
#define MUX_PD5E_ISC_D9                            _L_(4)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PD5E_ISC_D9                            (_U_(1) << 5) /**< ISC signal: ISC_D9 */
#define PIN_PD17F_ISC_D9                           _L_(113)     /**< ISC signal: ISC_D9 on PD17 mux F */
#define MUX_PD17F_ISC_D9                           _L_(5)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PD17F_ISC_D9                           (_U_(1) << 17) /**< ISC signal: ISC_D9 */
#define PIN_PB24F_ISC_D10                          _L_(56)      /**< ISC signal: ISC_D10 on PB24 mux F */
#define MUX_PB24F_ISC_D10                          _L_(5)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PB24F_ISC_D10                          (_U_(1) << 24) /**< ISC signal: ISC_D10 */
#define PIN_PC19C_ISC_D10                          _L_(83)      /**< ISC signal: ISC_D10 on PC19 mux C */
#define MUX_PC19C_ISC_D10                          _L_(2)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PC19C_ISC_D10                          (_U_(1) << 19) /**< ISC signal: ISC_D10 */
#define PIN_PD4E_ISC_D10                           _L_(100)     /**< ISC signal: ISC_D10 on PD4 mux E */
#define MUX_PD4E_ISC_D10                           _L_(4)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PD4E_ISC_D10                           (_U_(1) << 4) /**< ISC signal: ISC_D10 */
#define PIN_PD18F_ISC_D10                          _L_(114)     /**< ISC signal: ISC_D10 on PD18 mux F */
#define MUX_PD18F_ISC_D10                          _L_(5)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PD18F_ISC_D10                          (_U_(1) << 18) /**< ISC signal: ISC_D10 */
#define PIN_PB25F_ISC_D11                          _L_(57)      /**< ISC signal: ISC_D11 on PB25 mux F */
#define MUX_PB25F_ISC_D11                          _L_(5)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PB25F_ISC_D11                          (_U_(1) << 25) /**< ISC signal: ISC_D11 */
#define PIN_PC20C_ISC_D11                          _L_(84)      /**< ISC signal: ISC_D11 on PC20 mux C */
#define MUX_PC20C_ISC_D11                          _L_(2)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PC20C_ISC_D11                          (_U_(1) << 20) /**< ISC signal: ISC_D11 */
#define PIN_PD3E_ISC_D11                           _L_(99)      /**< ISC signal: ISC_D11 on PD3 mux E */
#define MUX_PD3E_ISC_D11                           _L_(4)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PD3E_ISC_D11                           (_U_(1) << 3) /**< ISC signal: ISC_D11 */
#define PIN_PD19F_ISC_D11                          _L_(115)     /**< ISC signal: ISC_D11 on PD19 mux F */
#define MUX_PD19F_ISC_D11                          _L_(5)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PD19F_ISC_D11                          (_U_(1) << 19) /**< ISC signal: ISC_D11 */
#define PIN_PC8F_ISC_FIELD                         _L_(72)      /**< ISC signal: ISC_FIELD on PC8 mux F */
#define MUX_PC8F_ISC_FIELD                         _L_(5)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PC8F_ISC_FIELD                         (_U_(1) << 8) /**< ISC signal: ISC_FIELD */
#define PIN_PC25C_ISC_FIELD                        _L_(89)      /**< ISC signal: ISC_FIELD on PC25 mux C */
#define MUX_PC25C_ISC_FIELD                        _L_(2)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PC25C_ISC_FIELD                        (_U_(1) << 25) /**< ISC signal: ISC_FIELD */
#define PIN_PD18E_ISC_FIELD                        _L_(114)     /**< ISC signal: ISC_FIELD on PD18 mux E */
#define MUX_PD18E_ISC_FIELD                        _L_(4)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PD18E_ISC_FIELD                        (_U_(1) << 18) /**< ISC signal: ISC_FIELD */
#define PIN_PD23F_ISC_FIELD                        _L_(119)     /**< ISC signal: ISC_FIELD on PD23 mux F */
#define MUX_PD23F_ISC_FIELD                        _L_(5)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PD23F_ISC_FIELD                        (_U_(1) << 23) /**< ISC signal: ISC_FIELD */
#define PIN_PC6F_ISC_HSYNC                         _L_(70)      /**< ISC signal: ISC_HSYNC on PC6 mux F */
#define MUX_PC6F_ISC_HSYNC                         _L_(5)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PC6F_ISC_HSYNC                         (_U_(1) << 6) /**< ISC signal: ISC_HSYNC */
#define PIN_PC23C_ISC_HSYNC                        _L_(87)      /**< ISC signal: ISC_HSYNC on PC23 mux C */
#define MUX_PC23C_ISC_HSYNC                        _L_(2)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PC23C_ISC_HSYNC                        (_U_(1) << 23) /**< ISC signal: ISC_HSYNC */
#define PIN_PD17E_ISC_HSYNC                        _L_(113)     /**< ISC signal: ISC_HSYNC on PD17 mux E */
#define MUX_PD17E_ISC_HSYNC                        _L_(4)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PD17E_ISC_HSYNC                        (_U_(1) << 17) /**< ISC signal: ISC_HSYNC */
#define PIN_PD22F_ISC_HSYNC                        _L_(118)     /**< ISC signal: ISC_HSYNC on PD22 mux F */
#define MUX_PD22F_ISC_HSYNC                        _L_(5)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PD22F_ISC_HSYNC                        (_U_(1) << 22) /**< ISC signal: ISC_HSYNC */
#define PIN_PC7F_ISC_MCK                           _L_(71)      /**< ISC signal: ISC_MCK on PC7 mux F */
#define MUX_PC7F_ISC_MCK                           _L_(5)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PC7F_ISC_MCK                           (_U_(1) << 7) /**< ISC signal: ISC_MCK */
#define PIN_PC24C_ISC_MCK                          _L_(88)      /**< ISC signal: ISC_MCK on PC24 mux C */
#define MUX_PC24C_ISC_MCK                          _L_(2)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PC24C_ISC_MCK                          (_U_(1) << 24) /**< ISC signal: ISC_MCK */
#define PIN_PD2E_ISC_MCK                           _L_(98)      /**< ISC signal: ISC_MCK on PD2 mux E */
#define MUX_PD2E_ISC_MCK                           _L_(4)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PD2E_ISC_MCK                           (_U_(1) << 2) /**< ISC signal: ISC_MCK */
#define PIN_PD11F_ISC_MCK                          _L_(107)     /**< ISC signal: ISC_MCK on PD11 mux F */
#define MUX_PD11F_ISC_MCK                          _L_(5)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PD11F_ISC_MCK                          (_U_(1) << 11) /**< ISC signal: ISC_MCK */
#define PIN_PC4F_ISC_PCK                           _L_(68)      /**< ISC signal: ISC_PCK on PC4 mux F */
#define MUX_PC4F_ISC_PCK                           _L_(5)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PC4F_ISC_PCK                           (_U_(1) << 4) /**< ISC signal: ISC_PCK */
#define PIN_PC21C_ISC_PCK                          _L_(85)      /**< ISC signal: ISC_PCK on PC21 mux C */
#define MUX_PC21C_ISC_PCK                          _L_(2)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PC21C_ISC_PCK                          (_U_(1) << 21) /**< ISC signal: ISC_PCK */
#define PIN_PD15E_ISC_PCK                          _L_(111)     /**< ISC signal: ISC_PCK on PD15 mux E */
#define MUX_PD15E_ISC_PCK                          _L_(4)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PD15E_ISC_PCK                          (_U_(1) << 15) /**< ISC signal: ISC_PCK */
#define PIN_PD20F_ISC_PCK                          _L_(116)     /**< ISC signal: ISC_PCK on PD20 mux F */
#define MUX_PD20F_ISC_PCK                          _L_(5)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PD20F_ISC_PCK                          (_U_(1) << 20) /**< ISC signal: ISC_PCK */
#define PIN_PC5F_ISC_VSYNC                         _L_(69)      /**< ISC signal: ISC_VSYNC on PC5 mux F */
#define MUX_PC5F_ISC_VSYNC                         _L_(5)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PC5F_ISC_VSYNC                         (_U_(1) << 5) /**< ISC signal: ISC_VSYNC */
#define PIN_PC22C_ISC_VSYNC                        _L_(86)      /**< ISC signal: ISC_VSYNC on PC22 mux C */
#define MUX_PC22C_ISC_VSYNC                        _L_(2)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PC22C_ISC_VSYNC                        (_U_(1) << 22) /**< ISC signal: ISC_VSYNC */
#define PIN_PD16E_ISC_VSYNC                        _L_(112)     /**< ISC signal: ISC_VSYNC on PD16 mux E */
#define MUX_PD16E_ISC_VSYNC                        _L_(4)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PD16E_ISC_VSYNC                        (_U_(1) << 16) /**< ISC signal: ISC_VSYNC */
#define PIN_PD21F_ISC_VSYNC                        _L_(117)     /**< ISC signal: ISC_VSYNC on PD21 mux F */
#define MUX_PD21F_ISC_VSYNC                        _L_(5)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PD21F_ISC_VSYNC                        (_U_(1) << 21) /**< ISC signal: ISC_VSYNC */
/* ========== PIO definition for LCDC peripheral ========== */
#define PIN_PB11A_LCDC_LCDDAT0                     _L_(43)      /**< LCDC signal: LCDC_LCDDAT0 on PB11 mux A */
#define MUX_PB11A_LCDC_LCDDAT0                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT0 */
#define PIO_PB11A_LCDC_LCDDAT0                     (_U_(1) << 11) /**< LCDC signal: LCDC_LCDDAT0 */
#define PIN_PB12A_LCDC_LCDDAT1                     _L_(44)      /**< LCDC signal: LCDC_LCDDAT1 on PB12 mux A */
#define MUX_PB12A_LCDC_LCDDAT1                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT1 */
#define PIO_PB12A_LCDC_LCDDAT1                     (_U_(1) << 12) /**< LCDC signal: LCDC_LCDDAT1 */
#define PIN_PB13A_LCDC_LCDDAT2                     _L_(45)      /**< LCDC signal: LCDC_LCDDAT2 on PB13 mux A */
#define MUX_PB13A_LCDC_LCDDAT2                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT2 */
#define PIO_PB13A_LCDC_LCDDAT2                     (_U_(1) << 13) /**< LCDC signal: LCDC_LCDDAT2 */
#define PIN_PC10A_LCDC_LCDDAT2                     _L_(74)      /**< LCDC signal: LCDC_LCDDAT2 on PC10 mux A */
#define MUX_PC10A_LCDC_LCDDAT2                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT2 */
#define PIO_PC10A_LCDC_LCDDAT2                     (_U_(1) << 10) /**< LCDC signal: LCDC_LCDDAT2 */
#define PIN_PB14A_LCDC_LCDDAT3                     _L_(46)      /**< LCDC signal: LCDC_LCDDAT3 on PB14 mux A */
#define MUX_PB14A_LCDC_LCDDAT3                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT3 */
#define PIO_PB14A_LCDC_LCDDAT3                     (_U_(1) << 14) /**< LCDC signal: LCDC_LCDDAT3 */
#define PIN_PC11A_LCDC_LCDDAT3                     _L_(75)      /**< LCDC signal: LCDC_LCDDAT3 on PC11 mux A */
#define MUX_PC11A_LCDC_LCDDAT3                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT3 */
#define PIO_PC11A_LCDC_LCDDAT3                     (_U_(1) << 11) /**< LCDC signal: LCDC_LCDDAT3 */
#define PIN_PB15A_LCDC_LCDDAT4                     _L_(47)      /**< LCDC signal: LCDC_LCDDAT4 on PB15 mux A */
#define MUX_PB15A_LCDC_LCDDAT4                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT4 */
#define PIO_PB15A_LCDC_LCDDAT4                     (_U_(1) << 15) /**< LCDC signal: LCDC_LCDDAT4 */
#define PIN_PC12A_LCDC_LCDDAT4                     _L_(76)      /**< LCDC signal: LCDC_LCDDAT4 on PC12 mux A */
#define MUX_PC12A_LCDC_LCDDAT4                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT4 */
#define PIO_PC12A_LCDC_LCDDAT4                     (_U_(1) << 12) /**< LCDC signal: LCDC_LCDDAT4 */
#define PIN_PB16A_LCDC_LCDDAT5                     _L_(48)      /**< LCDC signal: LCDC_LCDDAT5 on PB16 mux A */
#define MUX_PB16A_LCDC_LCDDAT5                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT5 */
#define PIO_PB16A_LCDC_LCDDAT5                     (_U_(1) << 16) /**< LCDC signal: LCDC_LCDDAT5 */
#define PIN_PC13A_LCDC_LCDDAT5                     _L_(77)      /**< LCDC signal: LCDC_LCDDAT5 on PC13 mux A */
#define MUX_PC13A_LCDC_LCDDAT5                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT5 */
#define PIO_PC13A_LCDC_LCDDAT5                     (_U_(1) << 13) /**< LCDC signal: LCDC_LCDDAT5 */
#define PIN_PB17A_LCDC_LCDDAT6                     _L_(49)      /**< LCDC signal: LCDC_LCDDAT6 on PB17 mux A */
#define MUX_PB17A_LCDC_LCDDAT6                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT6 */
#define PIO_PB17A_LCDC_LCDDAT6                     (_U_(1) << 17) /**< LCDC signal: LCDC_LCDDAT6 */
#define PIN_PC14A_LCDC_LCDDAT6                     _L_(78)      /**< LCDC signal: LCDC_LCDDAT6 on PC14 mux A */
#define MUX_PC14A_LCDC_LCDDAT6                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT6 */
#define PIO_PC14A_LCDC_LCDDAT6                     (_U_(1) << 14) /**< LCDC signal: LCDC_LCDDAT6 */
#define PIN_PB18A_LCDC_LCDDAT7                     _L_(50)      /**< LCDC signal: LCDC_LCDDAT7 on PB18 mux A */
#define MUX_PB18A_LCDC_LCDDAT7                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT7 */
#define PIO_PB18A_LCDC_LCDDAT7                     (_U_(1) << 18) /**< LCDC signal: LCDC_LCDDAT7 */
#define PIN_PC15A_LCDC_LCDDAT7                     _L_(79)      /**< LCDC signal: LCDC_LCDDAT7 on PC15 mux A */
#define MUX_PC15A_LCDC_LCDDAT7                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT7 */
#define PIO_PC15A_LCDC_LCDDAT7                     (_U_(1) << 15) /**< LCDC signal: LCDC_LCDDAT7 */
#define PIN_PB19A_LCDC_LCDDAT8                     _L_(51)      /**< LCDC signal: LCDC_LCDDAT8 on PB19 mux A */
#define MUX_PB19A_LCDC_LCDDAT8                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT8 */
#define PIO_PB19A_LCDC_LCDDAT8                     (_U_(1) << 19) /**< LCDC signal: LCDC_LCDDAT8 */
#define PIN_PB20A_LCDC_LCDDAT9                     _L_(52)      /**< LCDC signal: LCDC_LCDDAT9 on PB20 mux A */
#define MUX_PB20A_LCDC_LCDDAT9                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT9 */
#define PIO_PB20A_LCDC_LCDDAT9                     (_U_(1) << 20) /**< LCDC signal: LCDC_LCDDAT9 */
#define PIN_PB21A_LCDC_LCDDAT10                    _L_(53)      /**< LCDC signal: LCDC_LCDDAT10 on PB21 mux A */
#define MUX_PB21A_LCDC_LCDDAT10                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT10 */
#define PIO_PB21A_LCDC_LCDDAT10                    (_U_(1) << 21) /**< LCDC signal: LCDC_LCDDAT10 */
#define PIN_PC16A_LCDC_LCDDAT10                    _L_(80)      /**< LCDC signal: LCDC_LCDDAT10 on PC16 mux A */
#define MUX_PC16A_LCDC_LCDDAT10                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT10 */
#define PIO_PC16A_LCDC_LCDDAT10                    (_U_(1) << 16) /**< LCDC signal: LCDC_LCDDAT10 */
#define PIN_PB22A_LCDC_LCDDAT11                    _L_(54)      /**< LCDC signal: LCDC_LCDDAT11 on PB22 mux A */
#define MUX_PB22A_LCDC_LCDDAT11                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT11 */
#define PIO_PB22A_LCDC_LCDDAT11                    (_U_(1) << 22) /**< LCDC signal: LCDC_LCDDAT11 */
#define PIN_PC17A_LCDC_LCDDAT11                    _L_(81)      /**< LCDC signal: LCDC_LCDDAT11 on PC17 mux A */
#define MUX_PC17A_LCDC_LCDDAT11                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT11 */
#define PIO_PC17A_LCDC_LCDDAT11                    (_U_(1) << 17) /**< LCDC signal: LCDC_LCDDAT11 */
#define PIN_PB23A_LCDC_LCDDAT12                    _L_(55)      /**< LCDC signal: LCDC_LCDDAT12 on PB23 mux A */
#define MUX_PB23A_LCDC_LCDDAT12                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT12 */
#define PIO_PB23A_LCDC_LCDDAT12                    (_U_(1) << 23) /**< LCDC signal: LCDC_LCDDAT12 */
#define PIN_PC18A_LCDC_LCDDAT12                    _L_(82)      /**< LCDC signal: LCDC_LCDDAT12 on PC18 mux A */
#define MUX_PC18A_LCDC_LCDDAT12                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT12 */
#define PIO_PC18A_LCDC_LCDDAT12                    (_U_(1) << 18) /**< LCDC signal: LCDC_LCDDAT12 */
#define PIN_PB24A_LCDC_LCDDAT13                    _L_(56)      /**< LCDC signal: LCDC_LCDDAT13 on PB24 mux A */
#define MUX_PB24A_LCDC_LCDDAT13                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT13 */
#define PIO_PB24A_LCDC_LCDDAT13                    (_U_(1) << 24) /**< LCDC signal: LCDC_LCDDAT13 */
#define PIN_PC19A_LCDC_LCDDAT13                    _L_(83)      /**< LCDC signal: LCDC_LCDDAT13 on PC19 mux A */
#define MUX_PC19A_LCDC_LCDDAT13                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT13 */
#define PIO_PC19A_LCDC_LCDDAT13                    (_U_(1) << 19) /**< LCDC signal: LCDC_LCDDAT13 */
#define PIN_PB25A_LCDC_LCDDAT14                    _L_(57)      /**< LCDC signal: LCDC_LCDDAT14 on PB25 mux A */
#define MUX_PB25A_LCDC_LCDDAT14                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT14 */
#define PIO_PB25A_LCDC_LCDDAT14                    (_U_(1) << 25) /**< LCDC signal: LCDC_LCDDAT14 */
#define PIN_PC20A_LCDC_LCDDAT14                    _L_(84)      /**< LCDC signal: LCDC_LCDDAT14 on PC20 mux A */
#define MUX_PC20A_LCDC_LCDDAT14                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT14 */
#define PIO_PC20A_LCDC_LCDDAT14                    (_U_(1) << 20) /**< LCDC signal: LCDC_LCDDAT14 */
#define PIN_PB26A_LCDC_LCDDAT15                    _L_(58)      /**< LCDC signal: LCDC_LCDDAT15 on PB26 mux A */
#define MUX_PB26A_LCDC_LCDDAT15                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT15 */
#define PIO_PB26A_LCDC_LCDDAT15                    (_U_(1) << 26) /**< LCDC signal: LCDC_LCDDAT15 */
#define PIN_PC21A_LCDC_LCDDAT15                    _L_(85)      /**< LCDC signal: LCDC_LCDDAT15 on PC21 mux A */
#define MUX_PC21A_LCDC_LCDDAT15                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT15 */
#define PIO_PC21A_LCDC_LCDDAT15                    (_U_(1) << 21) /**< LCDC signal: LCDC_LCDDAT15 */
#define PIN_PB27A_LCDC_LCDDAT16                    _L_(59)      /**< LCDC signal: LCDC_LCDDAT16 on PB27 mux A */
#define MUX_PB27A_LCDC_LCDDAT16                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT16 */
#define PIO_PB27A_LCDC_LCDDAT16                    (_U_(1) << 27) /**< LCDC signal: LCDC_LCDDAT16 */
#define PIN_PB28A_LCDC_LCDDAT17                    _L_(60)      /**< LCDC signal: LCDC_LCDDAT17 on PB28 mux A */
#define MUX_PB28A_LCDC_LCDDAT17                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT17 */
#define PIO_PB28A_LCDC_LCDDAT17                    (_U_(1) << 28) /**< LCDC signal: LCDC_LCDDAT17 */
#define PIN_PB29A_LCDC_LCDDAT18                    _L_(61)      /**< LCDC signal: LCDC_LCDDAT18 on PB29 mux A */
#define MUX_PB29A_LCDC_LCDDAT18                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT18 */
#define PIO_PB29A_LCDC_LCDDAT18                    (_U_(1) << 29) /**< LCDC signal: LCDC_LCDDAT18 */
#define PIN_PC22A_LCDC_LCDDAT18                    _L_(86)      /**< LCDC signal: LCDC_LCDDAT18 on PC22 mux A */
#define MUX_PC22A_LCDC_LCDDAT18                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT18 */
#define PIO_PC22A_LCDC_LCDDAT18                    (_U_(1) << 22) /**< LCDC signal: LCDC_LCDDAT18 */
#define PIN_PB30A_LCDC_LCDDAT19                    _L_(62)      /**< LCDC signal: LCDC_LCDDAT19 on PB30 mux A */
#define MUX_PB30A_LCDC_LCDDAT19                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT19 */
#define PIO_PB30A_LCDC_LCDDAT19                    (_U_(1) << 30) /**< LCDC signal: LCDC_LCDDAT19 */
#define PIN_PC23A_LCDC_LCDDAT19                    _L_(87)      /**< LCDC signal: LCDC_LCDDAT19 on PC23 mux A */
#define MUX_PC23A_LCDC_LCDDAT19                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT19 */
#define PIO_PC23A_LCDC_LCDDAT19                    (_U_(1) << 23) /**< LCDC signal: LCDC_LCDDAT19 */
#define PIN_PB31A_LCDC_LCDDAT20                    _L_(63)      /**< LCDC signal: LCDC_LCDDAT20 on PB31 mux A */
#define MUX_PB31A_LCDC_LCDDAT20                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT20 */
#define PIO_PB31A_LCDC_LCDDAT20                    (_U_(1) << 31) /**< LCDC signal: LCDC_LCDDAT20 */
#define PIN_PC24A_LCDC_LCDDAT20                    _L_(88)      /**< LCDC signal: LCDC_LCDDAT20 on PC24 mux A */
#define MUX_PC24A_LCDC_LCDDAT20                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT20 */
#define PIO_PC24A_LCDC_LCDDAT20                    (_U_(1) << 24) /**< LCDC signal: LCDC_LCDDAT20 */
#define PIN_PC0A_LCDC_LCDDAT21                     _L_(64)      /**< LCDC signal: LCDC_LCDDAT21 on PC0 mux A */
#define MUX_PC0A_LCDC_LCDDAT21                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT21 */
#define PIO_PC0A_LCDC_LCDDAT21                     (_U_(1) << 0) /**< LCDC signal: LCDC_LCDDAT21 */
#define PIN_PC25A_LCDC_LCDDAT21                    _L_(89)      /**< LCDC signal: LCDC_LCDDAT21 on PC25 mux A */
#define MUX_PC25A_LCDC_LCDDAT21                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT21 */
#define PIO_PC25A_LCDC_LCDDAT21                    (_U_(1) << 25) /**< LCDC signal: LCDC_LCDDAT21 */
#define PIN_PC1A_LCDC_LCDDAT22                     _L_(65)      /**< LCDC signal: LCDC_LCDDAT22 on PC1 mux A */
#define MUX_PC1A_LCDC_LCDDAT22                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT22 */
#define PIO_PC1A_LCDC_LCDDAT22                     (_U_(1) << 1) /**< LCDC signal: LCDC_LCDDAT22 */
#define PIN_PC26A_LCDC_LCDDAT22                    _L_(90)      /**< LCDC signal: LCDC_LCDDAT22 on PC26 mux A */
#define MUX_PC26A_LCDC_LCDDAT22                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT22 */
#define PIO_PC26A_LCDC_LCDDAT22                    (_U_(1) << 26) /**< LCDC signal: LCDC_LCDDAT22 */
#define PIN_PC2A_LCDC_LCDDAT23                     _L_(66)      /**< LCDC signal: LCDC_LCDDAT23 on PC2 mux A */
#define MUX_PC2A_LCDC_LCDDAT23                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT23 */
#define PIO_PC2A_LCDC_LCDDAT23                     (_U_(1) << 2) /**< LCDC signal: LCDC_LCDDAT23 */
#define PIN_PC27A_LCDC_LCDDAT23                    _L_(91)      /**< LCDC signal: LCDC_LCDDAT23 on PC27 mux A */
#define MUX_PC27A_LCDC_LCDDAT23                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDDAT23 */
#define PIO_PC27A_LCDC_LCDDAT23                    (_U_(1) << 27) /**< LCDC signal: LCDC_LCDDAT23 */
#define PIN_PC8A_LCDC_LCDDEN                       _L_(72)      /**< LCDC signal: LCDC_LCDDEN on PC8 mux A */
#define MUX_PC8A_LCDC_LCDDEN                       _L_(0)       /**< LCDC signal line function value: LCDC_LCDDEN */
#define PIO_PC8A_LCDC_LCDDEN                       (_U_(1) << 8) /**< LCDC signal: LCDC_LCDDEN */
#define PIN_PD1A_LCDC_LCDDEN                       _L_(97)      /**< LCDC signal: LCDC_LCDDEN on PD1 mux A */
#define MUX_PD1A_LCDC_LCDDEN                       _L_(0)       /**< LCDC signal line function value: LCDC_LCDDEN */
#define PIO_PD1A_LCDC_LCDDEN                       (_U_(1) << 1) /**< LCDC signal: LCDC_LCDDEN */
#define PIN_PC4A_LCDC_LCDDISP                      _L_(68)      /**< LCDC signal: LCDC_LCDDISP on PC4 mux A */
#define MUX_PC4A_LCDC_LCDDISP                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDDISP */
#define PIO_PC4A_LCDC_LCDDISP                      (_U_(1) << 4) /**< LCDC signal: LCDC_LCDDISP */
#define PIN_PC29A_LCDC_LCDDISP                     _L_(93)      /**< LCDC signal: LCDC_LCDDISP on PC29 mux A */
#define MUX_PC29A_LCDC_LCDDISP                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDDISP */
#define PIO_PC29A_LCDC_LCDDISP                     (_U_(1) << 29) /**< LCDC signal: LCDC_LCDDISP */
#define PIN_PC6A_LCDC_LCDHSYNC                     _L_(70)      /**< LCDC signal: LCDC_LCDHSYNC on PC6 mux A */
#define MUX_PC6A_LCDC_LCDHSYNC                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDHSYNC */
#define PIO_PC6A_LCDC_LCDHSYNC                     (_U_(1) << 6) /**< LCDC signal: LCDC_LCDHSYNC */
#define PIN_PC31A_LCDC_LCDHSYNC                    _L_(95)      /**< LCDC signal: LCDC_LCDHSYNC on PC31 mux A */
#define MUX_PC31A_LCDC_LCDHSYNC                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDHSYNC */
#define PIO_PC31A_LCDC_LCDHSYNC                    (_U_(1) << 31) /**< LCDC signal: LCDC_LCDHSYNC */
#define PIN_PC7A_LCDC_LCDPCK                       _L_(71)      /**< LCDC signal: LCDC_LCDPCK on PC7 mux A */
#define MUX_PC7A_LCDC_LCDPCK                       _L_(0)       /**< LCDC signal line function value: LCDC_LCDPCK */
#define PIO_PC7A_LCDC_LCDPCK                       (_U_(1) << 7) /**< LCDC signal: LCDC_LCDPCK */
#define PIN_PD0A_LCDC_LCDPCK                       _L_(96)      /**< LCDC signal: LCDC_LCDPCK on PD0 mux A */
#define MUX_PD0A_LCDC_LCDPCK                       _L_(0)       /**< LCDC signal line function value: LCDC_LCDPCK */
#define PIO_PD0A_LCDC_LCDPCK                       (_U_(1) << 0) /**< LCDC signal: LCDC_LCDPCK */
#define PIN_PC3A_LCDC_LCDPWM                       _L_(67)      /**< LCDC signal: LCDC_LCDPWM on PC3 mux A */
#define MUX_PC3A_LCDC_LCDPWM                       _L_(0)       /**< LCDC signal line function value: LCDC_LCDPWM */
#define PIO_PC3A_LCDC_LCDPWM                       (_U_(1) << 3) /**< LCDC signal: LCDC_LCDPWM */
#define PIN_PC28A_LCDC_LCDPWM                      _L_(92)      /**< LCDC signal: LCDC_LCDPWM on PC28 mux A */
#define MUX_PC28A_LCDC_LCDPWM                      _L_(0)       /**< LCDC signal line function value: LCDC_LCDPWM */
#define PIO_PC28A_LCDC_LCDPWM                      (_U_(1) << 28) /**< LCDC signal: LCDC_LCDPWM */
#define PIN_PC5A_LCDC_LCDVSYNC                     _L_(69)      /**< LCDC signal: LCDC_LCDVSYNC on PC5 mux A */
#define MUX_PC5A_LCDC_LCDVSYNC                     _L_(0)       /**< LCDC signal line function value: LCDC_LCDVSYNC */
#define PIO_PC5A_LCDC_LCDVSYNC                     (_U_(1) << 5) /**< LCDC signal: LCDC_LCDVSYNC */
#define PIN_PC30A_LCDC_LCDVSYNC                    _L_(94)      /**< LCDC signal: LCDC_LCDVSYNC on PC30 mux A */
#define MUX_PC30A_LCDC_LCDVSYNC                    _L_(0)       /**< LCDC signal line function value: LCDC_LCDVSYNC */
#define PIO_PC30A_LCDC_LCDVSYNC                    (_U_(1) << 30) /**< LCDC signal: LCDC_LCDVSYNC */
/* ========== PIO definition for MCAN0 peripheral ========== */
#define PIN_PC2C_MCAN0_CANRX0                      _L_(66)      /**< MCAN0 signal: MCAN0_CANRX0 on PC2 mux C */
#define MUX_PC2C_MCAN0_CANRX0                      _L_(2)       /**< MCAN0 signal line function value: MCAN0_CANRX0 */
#define PIO_PC2C_MCAN0_CANRX0                      (_U_(1) << 2) /**< MCAN0 signal: MCAN0_CANRX0 */
#define PIN_PC11E_MCAN0_CANRX0                     _L_(75)      /**< MCAN0 signal: MCAN0_CANRX0 on PC11 mux E */
#define MUX_PC11E_MCAN0_CANRX0                     _L_(4)       /**< MCAN0 signal line function value: MCAN0_CANRX0 */
#define PIO_PC11E_MCAN0_CANRX0                     (_U_(1) << 11) /**< MCAN0 signal: MCAN0_CANRX0 */
#define PIN_PC1C_MCAN0_CANTX0                      _L_(65)      /**< MCAN0 signal: MCAN0_CANTX0 on PC1 mux C */
#define MUX_PC1C_MCAN0_CANTX0                      _L_(2)       /**< MCAN0 signal line function value: MCAN0_CANTX0 */
#define PIO_PC1C_MCAN0_CANTX0                      (_U_(1) << 1) /**< MCAN0 signal: MCAN0_CANTX0 */
#define PIN_PC10E_MCAN0_CANTX0                     _L_(74)      /**< MCAN0 signal: MCAN0_CANTX0 on PC10 mux E */
#define MUX_PC10E_MCAN0_CANTX0                     _L_(4)       /**< MCAN0 signal line function value: MCAN0_CANTX0 */
#define PIO_PC10E_MCAN0_CANTX0                     (_U_(1) << 10) /**< MCAN0 signal: MCAN0_CANTX0 */
/* ========== PIO definition for MCAN1 peripheral ========== */
#define PIN_PC27D_MCAN1_CANRX1                     _L_(91)      /**< MCAN1 signal: MCAN1_CANRX1 on PC27 mux D */
#define MUX_PC27D_MCAN1_CANRX1                     _L_(3)       /**< MCAN1 signal line function value: MCAN1_CANRX1 */
#define PIO_PC27D_MCAN1_CANRX1                     (_U_(1) << 27) /**< MCAN1 signal: MCAN1_CANRX1 */
#define PIN_PC26D_MCAN1_CANTX1                     _L_(90)      /**< MCAN1 signal: MCAN1_CANTX1 on PC26 mux D */
#define MUX_PC26D_MCAN1_CANTX1                     _L_(3)       /**< MCAN1 signal line function value: MCAN1_CANTX1 */
#define PIO_PC26D_MCAN1_CANTX1                     (_U_(1) << 26) /**< MCAN1 signal: MCAN1_CANTX1 */
/* ========== PIO definition for PDMIC peripheral ========== */
#define PIN_PB12D_PDMIC_CLK                        _L_(44)      /**< PDMIC signal: PDMIC_CLK on PB12 mux D */
#define MUX_PB12D_PDMIC_CLK                        _L_(3)       /**< PDMIC signal line function value: PDMIC_CLK */
#define PIO_PB12D_PDMIC_CLK                        (_U_(1) << 12) /**< PDMIC signal: PDMIC_CLK */
#define PIN_PB27D_PDMIC_CLK                        _L_(59)      /**< PDMIC signal: PDMIC_CLK on PB27 mux D */
#define MUX_PB27D_PDMIC_CLK                        _L_(3)       /**< PDMIC signal line function value: PDMIC_CLK */
#define PIO_PB27D_PDMIC_CLK                        (_U_(1) << 27) /**< PDMIC signal: PDMIC_CLK */
#define PIN_PB11D_PDMIC_DAT                        _L_(43)      /**< PDMIC signal: PDMIC_DAT on PB11 mux D */
#define MUX_PB11D_PDMIC_DAT                        _L_(3)       /**< PDMIC signal line function value: PDMIC_DAT */
#define PIO_PB11D_PDMIC_DAT                        (_U_(1) << 11) /**< PDMIC signal: PDMIC_DAT */
#define PIN_PB26D_PDMIC_DAT                        _L_(58)      /**< PDMIC signal: PDMIC_DAT on PB26 mux D */
#define MUX_PB26D_PDMIC_DAT                        _L_(3)       /**< PDMIC signal line function value: PDMIC_DAT */
#define PIO_PB26D_PDMIC_DAT                        (_U_(1) << 26) /**< PDMIC signal: PDMIC_DAT */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PC8D_PMC_PCK0                          _L_(72)      /**< PMC signal: PMC_PCK0 on PC8 mux D */
#define MUX_PC8D_PMC_PCK0                          _L_(3)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PC8D_PMC_PCK0                          (_U_(1) << 8) /**< PMC signal: PMC_PCK0 */
#define PIN_PD19A_PMC_PCK0                         _L_(115)     /**< PMC signal: PMC_PCK0 on PD19 mux A */
#define MUX_PD19A_PMC_PCK0                         _L_(0)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PD19A_PMC_PCK0                         (_U_(1) << 19) /**< PMC signal: PMC_PCK0 */
#define PIN_PD31E_PMC_PCK0                         _L_(127)     /**< PMC signal: PMC_PCK0 on PD31 mux E */
#define MUX_PD31E_PMC_PCK0                         _L_(4)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PD31E_PMC_PCK0                         (_U_(1) << 31) /**< PMC signal: PMC_PCK0 */
#define PIN_PB13C_PMC_PCK1                         _L_(45)      /**< PMC signal: PMC_PCK1 on PB13 mux C */
#define MUX_PB13C_PMC_PCK1                         _L_(2)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PB13C_PMC_PCK1                         (_U_(1) << 13) /**< PMC signal: PMC_PCK1 */
#define PIN_PB20E_PMC_PCK1                         _L_(52)      /**< PMC signal: PMC_PCK1 on PB20 mux E */
#define MUX_PB20E_PMC_PCK1                         _L_(4)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PB20E_PMC_PCK1                         (_U_(1) << 20) /**< PMC signal: PMC_PCK1 */
#define PIN_PC27C_PMC_PCK1                         _L_(91)      /**< PMC signal: PMC_PCK1 on PC27 mux C */
#define MUX_PC27C_PMC_PCK1                         _L_(2)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PC27C_PMC_PCK1                         (_U_(1) << 27) /**< PMC signal: PMC_PCK1 */
#define PIN_PD6B_PMC_PCK1                          _L_(102)     /**< PMC signal: PMC_PCK1 on PD6 mux B */
#define MUX_PD6B_PMC_PCK1                          _L_(1)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PD6B_PMC_PCK1                          (_U_(1) << 6) /**< PMC signal: PMC_PCK1 */
#define PIN_PA21B_PMC_PCK2                         _L_(21)      /**< PMC signal: PMC_PCK2 on PA21 mux B */
#define MUX_PA21B_PMC_PCK2                         _L_(1)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PA21B_PMC_PCK2                         (_U_(1) << 21) /**< PMC signal: PMC_PCK2 */
#define PIN_PC28C_PMC_PCK2                         _L_(92)      /**< PMC signal: PMC_PCK2 on PC28 mux C */
#define MUX_PC28C_PMC_PCK2                         _L_(2)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PC28C_PMC_PCK2                         (_U_(1) << 28) /**< PMC signal: PMC_PCK2 */
#define PIN_PD11B_PMC_PCK2                         _L_(107)     /**< PMC signal: PMC_PCK2 on PD11 mux B */
#define MUX_PD11B_PMC_PCK2                         _L_(1)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PD11B_PMC_PCK2                         (_U_(1) << 11) /**< PMC signal: PMC_PCK2 */
/* ========== PIO definition for PTC peripheral ========== */
#define PIN_PD3X1_PTC_X0                           _L_(99)      /**< PTC signal: PTC_X0 on PD3 mux X1 */
#define PIO_PD3X1_PTC_X0                           (_U_(1) << 3) /**< PTC signal: PTC_X0 */
#define PIN_PD4X1_PTC_X1                           _L_(100)     /**< PTC signal: PTC_X1 on PD4 mux X1 */
#define PIO_PD4X1_PTC_X1                           (_U_(1) << 4) /**< PTC signal: PTC_X1 */
#define PIN_PD5X1_PTC_X2                           _L_(101)     /**< PTC signal: PTC_X2 on PD5 mux X1 */
#define PIO_PD5X1_PTC_X2                           (_U_(1) << 5) /**< PTC signal: PTC_X2 */
#define PIN_PD6X1_PTC_X3                           _L_(102)     /**< PTC signal: PTC_X3 on PD6 mux X1 */
#define PIO_PD6X1_PTC_X3                           (_U_(1) << 6) /**< PTC signal: PTC_X3 */
#define PIN_PD7X1_PTC_X4                           _L_(103)     /**< PTC signal: PTC_X4 on PD7 mux X1 */
#define PIO_PD7X1_PTC_X4                           (_U_(1) << 7) /**< PTC signal: PTC_X4 */
#define PIN_PD8X1_PTC_X5                           _L_(104)     /**< PTC signal: PTC_X5 on PD8 mux X1 */
#define PIO_PD8X1_PTC_X5                           (_U_(1) << 8) /**< PTC signal: PTC_X5 */
#define PIN_PD9X1_PTC_X6                           _L_(105)     /**< PTC signal: PTC_X6 on PD9 mux X1 */
#define PIO_PD9X1_PTC_X6                           (_U_(1) << 9) /**< PTC signal: PTC_X6 */
#define PIN_PD10X1_PTC_X7                          _L_(106)     /**< PTC signal: PTC_X7 on PD10 mux X1 */
#define PIO_PD10X1_PTC_X7                          (_U_(1) << 10) /**< PTC signal: PTC_X7 */
#define PIN_PD11X1_PTC_Y0                          _L_(107)     /**< PTC signal: PTC_Y0 on PD11 mux X1 */
#define PIO_PD11X1_PTC_Y0                          (_U_(1) << 11) /**< PTC signal: PTC_Y0 */
#define PIN_PD12X1_PTC_Y1                          _L_(108)     /**< PTC signal: PTC_Y1 on PD12 mux X1 */
#define PIO_PD12X1_PTC_Y1                          (_U_(1) << 12) /**< PTC signal: PTC_Y1 */
#define PIN_PD13X1_PTC_Y2                          _L_(109)     /**< PTC signal: PTC_Y2 on PD13 mux X1 */
#define PIO_PD13X1_PTC_Y2                          (_U_(1) << 13) /**< PTC signal: PTC_Y2 */
#define PIN_PD14X1_PTC_Y3                          _L_(110)     /**< PTC signal: PTC_Y3 on PD14 mux X1 */
#define PIO_PD14X1_PTC_Y3                          (_U_(1) << 14) /**< PTC signal: PTC_Y3 */
#define PIN_PD15X1_PTC_Y4                          _L_(111)     /**< PTC signal: PTC_Y4 on PD15 mux X1 */
#define PIO_PD15X1_PTC_Y4                          (_U_(1) << 15) /**< PTC signal: PTC_Y4 */
#define PIN_PD16X1_PTC_Y5                          _L_(112)     /**< PTC signal: PTC_Y5 on PD16 mux X1 */
#define PIO_PD16X1_PTC_Y5                          (_U_(1) << 16) /**< PTC signal: PTC_Y5 */
#define PIN_PD17X1_PTC_Y6                          _L_(113)     /**< PTC signal: PTC_Y6 on PD17 mux X1 */
#define PIO_PD17X1_PTC_Y6                          (_U_(1) << 17) /**< PTC signal: PTC_Y6 */
#define PIN_PD18X1_PTC_Y7                          _L_(114)     /**< PTC signal: PTC_Y7 on PD18 mux X1 */
#define PIO_PD18X1_PTC_Y7                          (_U_(1) << 18) /**< PTC signal: PTC_Y7 */
/* ========== PIO definition for PWM peripheral ========== */
#define PIN_PB3D_PWM_PWMEXTRG1                     _L_(35)      /**< PWM signal: PWM_PWMEXTRG1 on PB3 mux D */
#define MUX_PB3D_PWM_PWMEXTRG1                     _L_(3)       /**< PWM signal line function value: PWM_PWMEXTRG1 */
#define PIO_PB3D_PWM_PWMEXTRG1                     (_U_(1) << 3) /**< PWM signal: PWM_PWMEXTRG1 */
#define PIN_PB10C_PWM_PWMEXTRG2                    _L_(42)      /**< PWM signal: PWM_PWMEXTRG2 on PB10 mux C */
#define MUX_PB10C_PWM_PWMEXTRG2                    _L_(2)       /**< PWM signal line function value: PWM_PWMEXTRG2 */
#define PIO_PB10C_PWM_PWMEXTRG2                    (_U_(1) << 10) /**< PWM signal: PWM_PWMEXTRG2 */
#define PIN_PB2D_PWM_PWMFI0                        _L_(34)      /**< PWM signal: PWM_PWMFI0 on PB2 mux D */
#define MUX_PB2D_PWM_PWMFI0                        _L_(3)       /**< PWM signal line function value: PWM_PWMFI0 */
#define PIO_PB2D_PWM_PWMFI0                        (_U_(1) << 2) /**< PWM signal: PWM_PWMFI0 */
#define PIN_PB9C_PWM_PWMFI1                        _L_(41)      /**< PWM signal: PWM_PWMFI1 on PB9 mux C */
#define MUX_PB9C_PWM_PWMFI1                        _L_(2)       /**< PWM signal line function value: PWM_PWMFI1 */
#define PIO_PB9C_PWM_PWMFI1                        (_U_(1) << 9) /**< PWM signal: PWM_PWMFI1 */
#define PIN_PA30D_PWM_PWMH0                        _L_(30)      /**< PWM signal: PWM_PWMH0 on PA30 mux D */
#define MUX_PA30D_PWM_PWMH0                        _L_(3)       /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PA30D_PWM_PWMH0                        (_U_(1) << 30) /**< PWM signal: PWM_PWMH0 */
#define PIN_PB0D_PWM_PWMH1                         _L_(32)      /**< PWM signal: PWM_PWMH1 on PB0 mux D */
#define MUX_PB0D_PWM_PWMH1                         _L_(3)       /**< PWM signal line function value: PWM_PWMH1 */
#define PIO_PB0D_PWM_PWMH1                         (_U_(1) << 0) /**< PWM signal: PWM_PWMH1 */
#define PIN_PB5C_PWM_PWMH2                         _L_(37)      /**< PWM signal: PWM_PWMH2 on PB5 mux C */
#define MUX_PB5C_PWM_PWMH2                         _L_(2)       /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PB5C_PWM_PWMH2                         (_U_(1) << 5) /**< PWM signal: PWM_PWMH2 */
#define PIN_PB7C_PWM_PWMH3                         _L_(39)      /**< PWM signal: PWM_PWMH3 on PB7 mux C */
#define MUX_PB7C_PWM_PWMH3                         _L_(2)       /**< PWM signal line function value: PWM_PWMH3 */
#define PIO_PB7C_PWM_PWMH3                         (_U_(1) << 7) /**< PWM signal: PWM_PWMH3 */
#define PIN_PA31D_PWM_PWML0                        _L_(31)      /**< PWM signal: PWM_PWML0 on PA31 mux D */
#define MUX_PA31D_PWM_PWML0                        _L_(3)       /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PA31D_PWM_PWML0                        (_U_(1) << 31) /**< PWM signal: PWM_PWML0 */
#define PIN_PB1D_PWM_PWML1                         _L_(33)      /**< PWM signal: PWM_PWML1 on PB1 mux D */
#define MUX_PB1D_PWM_PWML1                         _L_(3)       /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PB1D_PWM_PWML1                         (_U_(1) << 1) /**< PWM signal: PWM_PWML1 */
#define PIN_PB6C_PWM_PWML2                         _L_(38)      /**< PWM signal: PWM_PWML2 on PB6 mux C */
#define MUX_PB6C_PWM_PWML2                         _L_(2)       /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PB6C_PWM_PWML2                         (_U_(1) << 6) /**< PWM signal: PWM_PWML2 */
#define PIN_PB8C_PWM_PWML3                         _L_(40)      /**< PWM signal: PWM_PWML3 on PB8 mux C */
#define MUX_PB8C_PWM_PWML3                         _L_(2)       /**< PWM signal line function value: PWM_PWML3 */
#define PIO_PB8C_PWM_PWML3                         (_U_(1) << 8) /**< PWM signal: PWM_PWML3 */
/* ========== PIO definition for QSPI0 peripheral ========== */
#define PIN_PA1B_QSPI0_CS                          _L_(1)       /**< QSPI0 signal: QSPI0_CS on PA1 mux B */
#define MUX_PA1B_QSPI0_CS                          _L_(1)       /**< QSPI0 signal line function value: QSPI0_CS */
#define PIO_PA1B_QSPI0_CS                          (_U_(1) << 1) /**< QSPI0 signal: QSPI0_CS */
#define PIN_PA15C_QSPI0_CS                         _L_(15)      /**< QSPI0 signal: QSPI0_CS on PA15 mux C */
#define MUX_PA15C_QSPI0_CS                         _L_(2)       /**< QSPI0 signal line function value: QSPI0_CS */
#define PIO_PA15C_QSPI0_CS                         (_U_(1) << 15) /**< QSPI0 signal: QSPI0_CS */
#define PIN_PA23F_QSPI0_CS                         _L_(23)      /**< QSPI0 signal: QSPI0_CS on PA23 mux F */
#define MUX_PA23F_QSPI0_CS                         _L_(5)       /**< QSPI0 signal line function value: QSPI0_CS */
#define PIO_PA23F_QSPI0_CS                         (_U_(1) << 23) /**< QSPI0 signal: QSPI0_CS */
#define PIN_PA2B_QSPI0_IO0                         _L_(2)       /**< QSPI0 signal: QSPI0_IO0 on PA2 mux B */
#define MUX_PA2B_QSPI0_IO0                         _L_(1)       /**< QSPI0 signal line function value: QSPI0_IO0 */
#define PIO_PA2B_QSPI0_IO0                         (_U_(1) << 2) /**< QSPI0 signal: QSPI0_IO0 */
#define PIN_PA16C_QSPI0_IO0                        _L_(16)      /**< QSPI0 signal: QSPI0_IO0 on PA16 mux C */
#define MUX_PA16C_QSPI0_IO0                        _L_(2)       /**< QSPI0 signal line function value: QSPI0_IO0 */
#define PIO_PA16C_QSPI0_IO0                        (_U_(1) << 16) /**< QSPI0 signal: QSPI0_IO0 */
#define PIN_PA24F_QSPI0_IO0                        _L_(24)      /**< QSPI0 signal: QSPI0_IO0 on PA24 mux F */
#define MUX_PA24F_QSPI0_IO0                        _L_(5)       /**< QSPI0 signal line function value: QSPI0_IO0 */
#define PIO_PA24F_QSPI0_IO0                        (_U_(1) << 24) /**< QSPI0 signal: QSPI0_IO0 */
#define PIN_PA3B_QSPI0_IO1                         _L_(3)       /**< QSPI0 signal: QSPI0_IO1 on PA3 mux B */
#define MUX_PA3B_QSPI0_IO1                         _L_(1)       /**< QSPI0 signal line function value: QSPI0_IO1 */
#define PIO_PA3B_QSPI0_IO1                         (_U_(1) << 3) /**< QSPI0 signal: QSPI0_IO1 */
#define PIN_PA17C_QSPI0_IO1                        _L_(17)      /**< QSPI0 signal: QSPI0_IO1 on PA17 mux C */
#define MUX_PA17C_QSPI0_IO1                        _L_(2)       /**< QSPI0 signal line function value: QSPI0_IO1 */
#define PIO_PA17C_QSPI0_IO1                        (_U_(1) << 17) /**< QSPI0 signal: QSPI0_IO1 */
#define PIN_PA25F_QSPI0_IO1                        _L_(25)      /**< QSPI0 signal: QSPI0_IO1 on PA25 mux F */
#define MUX_PA25F_QSPI0_IO1                        _L_(5)       /**< QSPI0 signal line function value: QSPI0_IO1 */
#define PIO_PA25F_QSPI0_IO1                        (_U_(1) << 25) /**< QSPI0 signal: QSPI0_IO1 */
#define PIN_PA4B_QSPI0_IO2                         _L_(4)       /**< QSPI0 signal: QSPI0_IO2 on PA4 mux B */
#define MUX_PA4B_QSPI0_IO2                         _L_(1)       /**< QSPI0 signal line function value: QSPI0_IO2 */
#define PIO_PA4B_QSPI0_IO2                         (_U_(1) << 4) /**< QSPI0 signal: QSPI0_IO2 */
#define PIN_PA18C_QSPI0_IO2                        _L_(18)      /**< QSPI0 signal: QSPI0_IO2 on PA18 mux C */
#define MUX_PA18C_QSPI0_IO2                        _L_(2)       /**< QSPI0 signal line function value: QSPI0_IO2 */
#define PIO_PA18C_QSPI0_IO2                        (_U_(1) << 18) /**< QSPI0 signal: QSPI0_IO2 */
#define PIN_PA26F_QSPI0_IO2                        _L_(26)      /**< QSPI0 signal: QSPI0_IO2 on PA26 mux F */
#define MUX_PA26F_QSPI0_IO2                        _L_(5)       /**< QSPI0 signal line function value: QSPI0_IO2 */
#define PIO_PA26F_QSPI0_IO2                        (_U_(1) << 26) /**< QSPI0 signal: QSPI0_IO2 */
#define PIN_PA5B_QSPI0_IO3                         _L_(5)       /**< QSPI0 signal: QSPI0_IO3 on PA5 mux B */
#define MUX_PA5B_QSPI0_IO3                         _L_(1)       /**< QSPI0 signal line function value: QSPI0_IO3 */
#define PIO_PA5B_QSPI0_IO3                         (_U_(1) << 5) /**< QSPI0 signal: QSPI0_IO3 */
#define PIN_PA19C_QSPI0_IO3                        _L_(19)      /**< QSPI0 signal: QSPI0_IO3 on PA19 mux C */
#define MUX_PA19C_QSPI0_IO3                        _L_(2)       /**< QSPI0 signal line function value: QSPI0_IO3 */
#define PIO_PA19C_QSPI0_IO3                        (_U_(1) << 19) /**< QSPI0 signal: QSPI0_IO3 */
#define PIN_PA27F_QSPI0_IO3                        _L_(27)      /**< QSPI0 signal: QSPI0_IO3 on PA27 mux F */
#define MUX_PA27F_QSPI0_IO3                        _L_(5)       /**< QSPI0 signal line function value: QSPI0_IO3 */
#define PIO_PA27F_QSPI0_IO3                        (_U_(1) << 27) /**< QSPI0 signal: QSPI0_IO3 */
#define PIN_PA0B_QSPI0_SCK                         _L_(0)       /**< QSPI0 signal: QSPI0_SCK on PA0 mux B */
#define MUX_PA0B_QSPI0_SCK                         _L_(1)       /**< QSPI0 signal line function value: QSPI0_SCK */
#define PIO_PA0B_QSPI0_SCK                         (_U_(1) << 0) /**< QSPI0 signal: QSPI0_SCK */
#define PIN_PA14C_QSPI0_SCK                        _L_(14)      /**< QSPI0 signal: QSPI0_SCK on PA14 mux C */
#define MUX_PA14C_QSPI0_SCK                        _L_(2)       /**< QSPI0 signal line function value: QSPI0_SCK */
#define PIO_PA14C_QSPI0_SCK                        (_U_(1) << 14) /**< QSPI0 signal: QSPI0_SCK */
#define PIN_PA22F_QSPI0_SCK                        _L_(22)      /**< QSPI0 signal: QSPI0_SCK on PA22 mux F */
#define MUX_PA22F_QSPI0_SCK                        _L_(5)       /**< QSPI0 signal line function value: QSPI0_SCK */
#define PIO_PA22F_QSPI0_SCK                        (_U_(1) << 22) /**< QSPI0 signal: QSPI0_SCK */
/* ========== PIO definition for QSPI1 peripheral ========== */
#define PIN_PA11B_QSPI1_CS                         _L_(11)      /**< QSPI1 signal: QSPI1_CS on PA11 mux B */
#define MUX_PA11B_QSPI1_CS                         _L_(1)       /**< QSPI1 signal line function value: QSPI1_CS */
#define PIO_PA11B_QSPI1_CS                         (_U_(1) << 11) /**< QSPI1 signal: QSPI1_CS */
#define PIN_PB6D_QSPI1_CS                          _L_(38)      /**< QSPI1 signal: QSPI1_CS on PB6 mux D */
#define MUX_PB6D_QSPI1_CS                          _L_(3)       /**< QSPI1 signal line function value: QSPI1_CS */
#define PIO_PB6D_QSPI1_CS                          (_U_(1) << 6) /**< QSPI1 signal: QSPI1_CS */
#define PIN_PB15E_QSPI1_CS                         _L_(47)      /**< QSPI1 signal: QSPI1_CS on PB15 mux E */
#define MUX_PB15E_QSPI1_CS                         _L_(4)       /**< QSPI1 signal line function value: QSPI1_CS */
#define PIO_PB15E_QSPI1_CS                         (_U_(1) << 15) /**< QSPI1 signal: QSPI1_CS */
#define PIN_PA7B_QSPI1_IO0                         _L_(7)       /**< QSPI1 signal: QSPI1_IO0 on PA7 mux B */
#define MUX_PA7B_QSPI1_IO0                         _L_(1)       /**< QSPI1 signal line function value: QSPI1_IO0 */
#define PIO_PA7B_QSPI1_IO0                         (_U_(1) << 7) /**< QSPI1 signal: QSPI1_IO0 */
#define PIN_PB7D_QSPI1_IO0                         _L_(39)      /**< QSPI1 signal: QSPI1_IO0 on PB7 mux D */
#define MUX_PB7D_QSPI1_IO0                         _L_(3)       /**< QSPI1 signal line function value: QSPI1_IO0 */
#define PIO_PB7D_QSPI1_IO0                         (_U_(1) << 7) /**< QSPI1 signal: QSPI1_IO0 */
#define PIN_PB16E_QSPI1_IO0                        _L_(48)      /**< QSPI1 signal: QSPI1_IO0 on PB16 mux E */
#define MUX_PB16E_QSPI1_IO0                        _L_(4)       /**< QSPI1 signal line function value: QSPI1_IO0 */
#define PIO_PB16E_QSPI1_IO0                        (_U_(1) << 16) /**< QSPI1 signal: QSPI1_IO0 */
#define PIN_PA8B_QSPI1_IO1                         _L_(8)       /**< QSPI1 signal: QSPI1_IO1 on PA8 mux B */
#define MUX_PA8B_QSPI1_IO1                         _L_(1)       /**< QSPI1 signal line function value: QSPI1_IO1 */
#define PIO_PA8B_QSPI1_IO1                         (_U_(1) << 8) /**< QSPI1 signal: QSPI1_IO1 */
#define PIN_PB8D_QSPI1_IO1                         _L_(40)      /**< QSPI1 signal: QSPI1_IO1 on PB8 mux D */
#define MUX_PB8D_QSPI1_IO1                         _L_(3)       /**< QSPI1 signal line function value: QSPI1_IO1 */
#define PIO_PB8D_QSPI1_IO1                         (_U_(1) << 8) /**< QSPI1 signal: QSPI1_IO1 */
#define PIN_PB17E_QSPI1_IO1                        _L_(49)      /**< QSPI1 signal: QSPI1_IO1 on PB17 mux E */
#define MUX_PB17E_QSPI1_IO1                        _L_(4)       /**< QSPI1 signal line function value: QSPI1_IO1 */
#define PIO_PB17E_QSPI1_IO1                        (_U_(1) << 17) /**< QSPI1 signal: QSPI1_IO1 */
#define PIN_PA9B_QSPI1_IO2                         _L_(9)       /**< QSPI1 signal: QSPI1_IO2 on PA9 mux B */
#define MUX_PA9B_QSPI1_IO2                         _L_(1)       /**< QSPI1 signal line function value: QSPI1_IO2 */
#define PIO_PA9B_QSPI1_IO2                         (_U_(1) << 9) /**< QSPI1 signal: QSPI1_IO2 */
#define PIN_PB9D_QSPI1_IO2                         _L_(41)      /**< QSPI1 signal: QSPI1_IO2 on PB9 mux D */
#define MUX_PB9D_QSPI1_IO2                         _L_(3)       /**< QSPI1 signal line function value: QSPI1_IO2 */
#define PIO_PB9D_QSPI1_IO2                         (_U_(1) << 9) /**< QSPI1 signal: QSPI1_IO2 */
#define PIN_PB18E_QSPI1_IO2                        _L_(50)      /**< QSPI1 signal: QSPI1_IO2 on PB18 mux E */
#define MUX_PB18E_QSPI1_IO2                        _L_(4)       /**< QSPI1 signal line function value: QSPI1_IO2 */
#define PIO_PB18E_QSPI1_IO2                        (_U_(1) << 18) /**< QSPI1 signal: QSPI1_IO2 */
#define PIN_PA10B_QSPI1_IO3                        _L_(10)      /**< QSPI1 signal: QSPI1_IO3 on PA10 mux B */
#define MUX_PA10B_QSPI1_IO3                        _L_(1)       /**< QSPI1 signal line function value: QSPI1_IO3 */
#define PIO_PA10B_QSPI1_IO3                        (_U_(1) << 10) /**< QSPI1 signal: QSPI1_IO3 */
#define PIN_PB10D_QSPI1_IO3                        _L_(42)      /**< QSPI1 signal: QSPI1_IO3 on PB10 mux D */
#define MUX_PB10D_QSPI1_IO3                        _L_(3)       /**< QSPI1 signal line function value: QSPI1_IO3 */
#define PIO_PB10D_QSPI1_IO3                        (_U_(1) << 10) /**< QSPI1 signal: QSPI1_IO3 */
#define PIN_PB19E_QSPI1_IO3                        _L_(51)      /**< QSPI1 signal: QSPI1_IO3 on PB19 mux E */
#define MUX_PB19E_QSPI1_IO3                        _L_(4)       /**< QSPI1 signal line function value: QSPI1_IO3 */
#define PIO_PB19E_QSPI1_IO3                        (_U_(1) << 19) /**< QSPI1 signal: QSPI1_IO3 */
#define PIN_PA6B_QSPI1_SCK                         _L_(6)       /**< QSPI1 signal: QSPI1_SCK on PA6 mux B */
#define MUX_PA6B_QSPI1_SCK                         _L_(1)       /**< QSPI1 signal line function value: QSPI1_SCK */
#define PIO_PA6B_QSPI1_SCK                         (_U_(1) << 6) /**< QSPI1 signal: QSPI1_SCK */
#define PIN_PB5D_QSPI1_SCK                         _L_(37)      /**< QSPI1 signal: QSPI1_SCK on PB5 mux D */
#define MUX_PB5D_QSPI1_SCK                         _L_(3)       /**< QSPI1 signal line function value: QSPI1_SCK */
#define PIO_PB5D_QSPI1_SCK                         (_U_(1) << 5) /**< QSPI1 signal: QSPI1_SCK */
#define PIN_PB14E_QSPI1_SCK                        _L_(46)      /**< QSPI1 signal: QSPI1_SCK on PB14 mux E */
#define MUX_PB14E_QSPI1_SCK                        _L_(4)       /**< QSPI1 signal line function value: QSPI1_SCK */
#define PIO_PB14E_QSPI1_SCK                        (_U_(1) << 14) /**< QSPI1 signal: QSPI1_SCK */
/* ========== PIO definition for SDMMC0 peripheral ========== */
#define PIN_PA11A_SDMMC0_1V8SEL                    _L_(11)      /**< SDMMC0 signal: SDMMC0_1V8SEL on PA11 mux A */
#define MUX_PA11A_SDMMC0_1V8SEL                    _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_1V8SEL */
#define PIO_PA11A_SDMMC0_1V8SEL                    (_U_(1) << 11) /**< SDMMC0 signal: SDMMC0_1V8SEL */
#define PIN_PA13A_SDMMC0_CD                        _L_(13)      /**< SDMMC0 signal: SDMMC0_CD on PA13 mux A */
#define MUX_PA13A_SDMMC0_CD                        _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CD */
#define PIO_PA13A_SDMMC0_CD                        (_U_(1) << 13) /**< SDMMC0 signal: SDMMC0_CD */
#define PIN_PA0A_SDMMC0_CK                         _L_(0)       /**< SDMMC0 signal: SDMMC0_CK on PA0 mux A */
#define MUX_PA0A_SDMMC0_CK                         _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CK */
#define PIO_PA0A_SDMMC0_CK                         (_U_(1) << 0) /**< SDMMC0 signal: SDMMC0_CK */
#define PIN_PA1A_SDMMC0_CMD                        _L_(1)       /**< SDMMC0 signal: SDMMC0_CMD on PA1 mux A */
#define MUX_PA1A_SDMMC0_CMD                        _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CMD */
#define PIO_PA1A_SDMMC0_CMD                        (_U_(1) << 1) /**< SDMMC0 signal: SDMMC0_CMD */
#define PIN_PA2A_SDMMC0_DAT0                       _L_(2)       /**< SDMMC0 signal: SDMMC0_DAT0 on PA2 mux A */
#define MUX_PA2A_SDMMC0_DAT0                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT0 */
#define PIO_PA2A_SDMMC0_DAT0                       (_U_(1) << 2) /**< SDMMC0 signal: SDMMC0_DAT0 */
#define PIN_PA3A_SDMMC0_DAT1                       _L_(3)       /**< SDMMC0 signal: SDMMC0_DAT1 on PA3 mux A */
#define MUX_PA3A_SDMMC0_DAT1                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT1 */
#define PIO_PA3A_SDMMC0_DAT1                       (_U_(1) << 3) /**< SDMMC0 signal: SDMMC0_DAT1 */
#define PIN_PA4A_SDMMC0_DAT2                       _L_(4)       /**< SDMMC0 signal: SDMMC0_DAT2 on PA4 mux A */
#define MUX_PA4A_SDMMC0_DAT2                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT2 */
#define PIO_PA4A_SDMMC0_DAT2                       (_U_(1) << 4) /**< SDMMC0 signal: SDMMC0_DAT2 */
#define PIN_PA5A_SDMMC0_DAT3                       _L_(5)       /**< SDMMC0 signal: SDMMC0_DAT3 on PA5 mux A */
#define MUX_PA5A_SDMMC0_DAT3                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT3 */
#define PIO_PA5A_SDMMC0_DAT3                       (_U_(1) << 5) /**< SDMMC0 signal: SDMMC0_DAT3 */
#define PIN_PA6A_SDMMC0_DAT4                       _L_(6)       /**< SDMMC0 signal: SDMMC0_DAT4 on PA6 mux A */
#define MUX_PA6A_SDMMC0_DAT4                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT4 */
#define PIO_PA6A_SDMMC0_DAT4                       (_U_(1) << 6) /**< SDMMC0 signal: SDMMC0_DAT4 */
#define PIN_PA7A_SDMMC0_DAT5                       _L_(7)       /**< SDMMC0 signal: SDMMC0_DAT5 on PA7 mux A */
#define MUX_PA7A_SDMMC0_DAT5                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT5 */
#define PIO_PA7A_SDMMC0_DAT5                       (_U_(1) << 7) /**< SDMMC0 signal: SDMMC0_DAT5 */
#define PIN_PA8A_SDMMC0_DAT6                       _L_(8)       /**< SDMMC0 signal: SDMMC0_DAT6 on PA8 mux A */
#define MUX_PA8A_SDMMC0_DAT6                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT6 */
#define PIO_PA8A_SDMMC0_DAT6                       (_U_(1) << 8) /**< SDMMC0 signal: SDMMC0_DAT6 */
#define PIN_PA9A_SDMMC0_DAT7                       _L_(9)       /**< SDMMC0 signal: SDMMC0_DAT7 on PA9 mux A */
#define MUX_PA9A_SDMMC0_DAT7                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT7 */
#define PIO_PA9A_SDMMC0_DAT7                       (_U_(1) << 9) /**< SDMMC0 signal: SDMMC0_DAT7 */
#define PIN_PA10A_SDMMC0_RSTN                      _L_(10)      /**< SDMMC0 signal: SDMMC0_RSTN on PA10 mux A */
#define MUX_PA10A_SDMMC0_RSTN                      _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_RSTN */
#define PIO_PA10A_SDMMC0_RSTN                      (_U_(1) << 10) /**< SDMMC0 signal: SDMMC0_RSTN */
#define PIN_PA12A_SDMMC0_WP                        _L_(12)      /**< SDMMC0 signal: SDMMC0_WP on PA12 mux A */
#define MUX_PA12A_SDMMC0_WP                        _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_WP */
#define PIO_PA12A_SDMMC0_WP                        (_U_(1) << 12) /**< SDMMC0 signal: SDMMC0_WP */
/* ========== PIO definition for SDMMC1 peripheral ========== */
#define PIN_PA30E_SDMMC1_CD                        _L_(30)      /**< SDMMC1 signal: SDMMC1_CD on PA30 mux E */
#define MUX_PA30E_SDMMC1_CD                        _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_CD */
#define PIO_PA30E_SDMMC1_CD                        (_U_(1) << 30) /**< SDMMC1 signal: SDMMC1_CD */
#define PIN_PA22E_SDMMC1_CK                        _L_(22)      /**< SDMMC1 signal: SDMMC1_CK on PA22 mux E */
#define MUX_PA22E_SDMMC1_CK                        _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_CK */
#define PIO_PA22E_SDMMC1_CK                        (_U_(1) << 22) /**< SDMMC1 signal: SDMMC1_CK */
#define PIN_PA28E_SDMMC1_CMD                       _L_(28)      /**< SDMMC1 signal: SDMMC1_CMD on PA28 mux E */
#define MUX_PA28E_SDMMC1_CMD                       _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_CMD */
#define PIO_PA28E_SDMMC1_CMD                       (_U_(1) << 28) /**< SDMMC1 signal: SDMMC1_CMD */
#define PIN_PA18E_SDMMC1_DAT0                      _L_(18)      /**< SDMMC1 signal: SDMMC1_DAT0 on PA18 mux E */
#define MUX_PA18E_SDMMC1_DAT0                      _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_DAT0 */
#define PIO_PA18E_SDMMC1_DAT0                      (_U_(1) << 18) /**< SDMMC1 signal: SDMMC1_DAT0 */
#define PIN_PA19E_SDMMC1_DAT1                      _L_(19)      /**< SDMMC1 signal: SDMMC1_DAT1 on PA19 mux E */
#define MUX_PA19E_SDMMC1_DAT1                      _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_DAT1 */
#define PIO_PA19E_SDMMC1_DAT1                      (_U_(1) << 19) /**< SDMMC1 signal: SDMMC1_DAT1 */
#define PIN_PA20E_SDMMC1_DAT2                      _L_(20)      /**< SDMMC1 signal: SDMMC1_DAT2 on PA20 mux E */
#define MUX_PA20E_SDMMC1_DAT2                      _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_DAT2 */
#define PIO_PA20E_SDMMC1_DAT2                      (_U_(1) << 20) /**< SDMMC1 signal: SDMMC1_DAT2 */
#define PIN_PA21E_SDMMC1_DAT3                      _L_(21)      /**< SDMMC1 signal: SDMMC1_DAT3 on PA21 mux E */
#define MUX_PA21E_SDMMC1_DAT3                      _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_DAT3 */
#define PIO_PA21E_SDMMC1_DAT3                      (_U_(1) << 21) /**< SDMMC1 signal: SDMMC1_DAT3 */
#define PIN_PA27E_SDMMC1_RSTN                      _L_(27)      /**< SDMMC1 signal: SDMMC1_RSTN on PA27 mux E */
#define MUX_PA27E_SDMMC1_RSTN                      _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_RSTN */
#define PIO_PA27E_SDMMC1_RSTN                      (_U_(1) << 27) /**< SDMMC1 signal: SDMMC1_RSTN */
#define PIN_PA29E_SDMMC1_WP                        _L_(29)      /**< SDMMC1 signal: SDMMC1_WP on PA29 mux E */
#define MUX_PA29E_SDMMC1_WP                        _L_(4)       /**< SDMMC1 signal line function value: SDMMC1_WP */
#define PIO_PA29E_SDMMC1_WP                        (_U_(1) << 29) /**< SDMMC1 signal: SDMMC1_WP */
/* ========== PIO definition for SMC peripheral ========== */
#define PIN_PB12B_SMC_A1                           _L_(44)      /**< SMC signal: SMC_A1 on PB12 mux B */
#define MUX_PB12B_SMC_A1                           _L_(1)       /**< SMC signal line function value: SMC_A1 */
#define PIO_PB12B_SMC_A1                           (_U_(1) << 12) /**< SMC signal: SMC_A1 */
#define PIN_PC12C_SMC_A1                           _L_(76)      /**< SMC signal: SMC_A1 on PC12 mux C */
#define MUX_PC12C_SMC_A1                           _L_(2)       /**< SMC signal line function value: SMC_A1 */
#define PIO_PC12C_SMC_A1                           (_U_(1) << 12) /**< SMC signal: SMC_A1 */
#define PIN_PB13B_SMC_A2                           _L_(45)      /**< SMC signal: SMC_A2 on PB13 mux B */
#define MUX_PB13B_SMC_A2                           _L_(1)       /**< SMC signal line function value: SMC_A2 */
#define PIO_PB13B_SMC_A2                           (_U_(1) << 13) /**< SMC signal: SMC_A2 */
#define PIN_PC13C_SMC_A2                           _L_(77)      /**< SMC signal: SMC_A2 on PC13 mux C */
#define MUX_PC13C_SMC_A2                           _L_(2)       /**< SMC signal line function value: SMC_A2 */
#define PIO_PC13C_SMC_A2                           (_U_(1) << 13) /**< SMC signal: SMC_A2 */
#define PIN_PB14B_SMC_A3                           _L_(46)      /**< SMC signal: SMC_A3 on PB14 mux B */
#define MUX_PB14B_SMC_A3                           _L_(1)       /**< SMC signal line function value: SMC_A3 */
#define PIO_PB14B_SMC_A3                           (_U_(1) << 14) /**< SMC signal: SMC_A3 */
#define PIN_PC14C_SMC_A3                           _L_(78)      /**< SMC signal: SMC_A3 on PC14 mux C */
#define MUX_PC14C_SMC_A3                           _L_(2)       /**< SMC signal line function value: SMC_A3 */
#define PIO_PC14C_SMC_A3                           (_U_(1) << 14) /**< SMC signal: SMC_A3 */
#define PIN_PB15B_SMC_A4                           _L_(47)      /**< SMC signal: SMC_A4 on PB15 mux B */
#define MUX_PB15B_SMC_A4                           _L_(1)       /**< SMC signal line function value: SMC_A4 */
#define PIO_PB15B_SMC_A4                           (_U_(1) << 15) /**< SMC signal: SMC_A4 */
#define PIN_PC15C_SMC_A4                           _L_(79)      /**< SMC signal: SMC_A4 on PC15 mux C */
#define MUX_PC15C_SMC_A4                           _L_(2)       /**< SMC signal line function value: SMC_A4 */
#define PIO_PC15C_SMC_A4                           (_U_(1) << 15) /**< SMC signal: SMC_A4 */
#define PIN_PB16B_SMC_A5                           _L_(48)      /**< SMC signal: SMC_A5 on PB16 mux B */
#define MUX_PB16B_SMC_A5                           _L_(1)       /**< SMC signal line function value: SMC_A5 */
#define PIO_PB16B_SMC_A5                           (_U_(1) << 16) /**< SMC signal: SMC_A5 */
#define PIN_PC16C_SMC_A5                           _L_(80)      /**< SMC signal: SMC_A5 on PC16 mux C */
#define MUX_PC16C_SMC_A5                           _L_(2)       /**< SMC signal line function value: SMC_A5 */
#define PIO_PC16C_SMC_A5                           (_U_(1) << 16) /**< SMC signal: SMC_A5 */
#define PIN_PB17B_SMC_A6                           _L_(49)      /**< SMC signal: SMC_A6 on PB17 mux B */
#define MUX_PB17B_SMC_A6                           _L_(1)       /**< SMC signal line function value: SMC_A6 */
#define PIO_PB17B_SMC_A6                           (_U_(1) << 17) /**< SMC signal: SMC_A6 */
#define PIN_PC17C_SMC_A6                           _L_(81)      /**< SMC signal: SMC_A6 on PC17 mux C */
#define MUX_PC17C_SMC_A6                           _L_(2)       /**< SMC signal line function value: SMC_A6 */
#define PIO_PC17C_SMC_A6                           (_U_(1) << 17) /**< SMC signal: SMC_A6 */
#define PIN_PB18B_SMC_A7                           _L_(50)      /**< SMC signal: SMC_A7 on PB18 mux B */
#define MUX_PB18B_SMC_A7                           _L_(1)       /**< SMC signal line function value: SMC_A7 */
#define PIO_PB18B_SMC_A7                           (_U_(1) << 18) /**< SMC signal: SMC_A7 */
#define PIN_PC18C_SMC_A7                           _L_(82)      /**< SMC signal: SMC_A7 on PC18 mux C */
#define MUX_PC18C_SMC_A7                           _L_(2)       /**< SMC signal line function value: SMC_A7 */
#define PIO_PC18C_SMC_A7                           (_U_(1) << 18) /**< SMC signal: SMC_A7 */
#define PIN_PB19B_SMC_A8                           _L_(51)      /**< SMC signal: SMC_A8 on PB19 mux B */
#define MUX_PB19B_SMC_A8                           _L_(1)       /**< SMC signal line function value: SMC_A8 */
#define PIO_PB19B_SMC_A8                           (_U_(1) << 19) /**< SMC signal: SMC_A8 */
#define PIN_PC19C_SMC_A8                           _L_(83)      /**< SMC signal: SMC_A8 on PC19 mux C */
#define MUX_PC19C_SMC_A8                           _L_(2)       /**< SMC signal line function value: SMC_A8 */
#define PIO_PC19C_SMC_A8                           (_U_(1) << 19) /**< SMC signal: SMC_A8 */
#define PIN_PB20B_SMC_A9                           _L_(52)      /**< SMC signal: SMC_A9 on PB20 mux B */
#define MUX_PB20B_SMC_A9                           _L_(1)       /**< SMC signal line function value: SMC_A9 */
#define PIO_PB20B_SMC_A9                           (_U_(1) << 20) /**< SMC signal: SMC_A9 */
#define PIN_PC20C_SMC_A9                           _L_(84)      /**< SMC signal: SMC_A9 on PC20 mux C */
#define MUX_PC20C_SMC_A9                           _L_(2)       /**< SMC signal line function value: SMC_A9 */
#define PIO_PC20C_SMC_A9                           (_U_(1) << 20) /**< SMC signal: SMC_A9 */
#define PIN_PB21B_SMC_A10                          _L_(53)      /**< SMC signal: SMC_A10 on PB21 mux B */
#define MUX_PB21B_SMC_A10                          _L_(1)       /**< SMC signal line function value: SMC_A10 */
#define PIO_PB21B_SMC_A10                          (_U_(1) << 21) /**< SMC signal: SMC_A10 */
#define PIN_PC21C_SMC_A10                          _L_(85)      /**< SMC signal: SMC_A10 on PC21 mux C */
#define MUX_PC21C_SMC_A10                          _L_(2)       /**< SMC signal line function value: SMC_A10 */
#define PIO_PC21C_SMC_A10                          (_U_(1) << 21) /**< SMC signal: SMC_A10 */
#define PIN_PB22B_SMC_A11                          _L_(54)      /**< SMC signal: SMC_A11 on PB22 mux B */
#define MUX_PB22B_SMC_A11                          _L_(1)       /**< SMC signal line function value: SMC_A11 */
#define PIO_PB22B_SMC_A11                          (_U_(1) << 22) /**< SMC signal: SMC_A11 */
#define PIN_PC22C_SMC_A11                          _L_(86)      /**< SMC signal: SMC_A11 on PC22 mux C */
#define MUX_PC22C_SMC_A11                          _L_(2)       /**< SMC signal line function value: SMC_A11 */
#define PIO_PC22C_SMC_A11                          (_U_(1) << 22) /**< SMC signal: SMC_A11 */
#define PIN_PB23B_SMC_A12                          _L_(55)      /**< SMC signal: SMC_A12 on PB23 mux B */
#define MUX_PB23B_SMC_A12                          _L_(1)       /**< SMC signal line function value: SMC_A12 */
#define PIO_PB23B_SMC_A12                          (_U_(1) << 23) /**< SMC signal: SMC_A12 */
#define PIN_PC23C_SMC_A12                          _L_(87)      /**< SMC signal: SMC_A12 on PC23 mux C */
#define MUX_PC23C_SMC_A12                          _L_(2)       /**< SMC signal line function value: SMC_A12 */
#define PIO_PC23C_SMC_A12                          (_U_(1) << 23) /**< SMC signal: SMC_A12 */
#define PIN_PB24B_SMC_A13                          _L_(56)      /**< SMC signal: SMC_A13 on PB24 mux B */
#define MUX_PB24B_SMC_A13                          _L_(1)       /**< SMC signal line function value: SMC_A13 */
#define PIO_PB24B_SMC_A13                          (_U_(1) << 24) /**< SMC signal: SMC_A13 */
#define PIN_PC24C_SMC_A13                          _L_(88)      /**< SMC signal: SMC_A13 on PC24 mux C */
#define MUX_PC24C_SMC_A13                          _L_(2)       /**< SMC signal line function value: SMC_A13 */
#define PIO_PC24C_SMC_A13                          (_U_(1) << 24) /**< SMC signal: SMC_A13 */
#define PIN_PB25B_SMC_A14                          _L_(57)      /**< SMC signal: SMC_A14 on PB25 mux B */
#define MUX_PB25B_SMC_A14                          _L_(1)       /**< SMC signal line function value: SMC_A14 */
#define PIO_PB25B_SMC_A14                          (_U_(1) << 25) /**< SMC signal: SMC_A14 */
#define PIN_PC25C_SMC_A14                          _L_(89)      /**< SMC signal: SMC_A14 on PC25 mux C */
#define MUX_PC25C_SMC_A14                          _L_(2)       /**< SMC signal line function value: SMC_A14 */
#define PIO_PC25C_SMC_A14                          (_U_(1) << 25) /**< SMC signal: SMC_A14 */
#define PIN_PB26B_SMC_A15                          _L_(58)      /**< SMC signal: SMC_A15 on PB26 mux B */
#define MUX_PB26B_SMC_A15                          _L_(1)       /**< SMC signal line function value: SMC_A15 */
#define PIO_PB26B_SMC_A15                          (_U_(1) << 26) /**< SMC signal: SMC_A15 */
#define PIN_PC26C_SMC_A15                          _L_(90)      /**< SMC signal: SMC_A15 on PC26 mux C */
#define MUX_PC26C_SMC_A15                          _L_(2)       /**< SMC signal line function value: SMC_A15 */
#define PIO_PC26C_SMC_A15                          (_U_(1) << 26) /**< SMC signal: SMC_A15 */
#define PIN_PB27B_SMC_A16                          _L_(59)      /**< SMC signal: SMC_A16 on PB27 mux B */
#define MUX_PB27B_SMC_A16                          _L_(1)       /**< SMC signal line function value: SMC_A16 */
#define PIO_PB27B_SMC_A16                          (_U_(1) << 27) /**< SMC signal: SMC_A16 */
#define PIN_PC27C_SMC_A16                          _L_(91)      /**< SMC signal: SMC_A16 on PC27 mux C */
#define MUX_PC27C_SMC_A16                          _L_(2)       /**< SMC signal line function value: SMC_A16 */
#define PIO_PC27C_SMC_A16                          (_U_(1) << 27) /**< SMC signal: SMC_A16 */
#define PIN_PB28B_SMC_A17                          _L_(60)      /**< SMC signal: SMC_A17 on PB28 mux B */
#define MUX_PB28B_SMC_A17                          _L_(1)       /**< SMC signal line function value: SMC_A17 */
#define PIO_PB28B_SMC_A17                          (_U_(1) << 28) /**< SMC signal: SMC_A17 */
#define PIN_PC28C_SMC_A17                          _L_(92)      /**< SMC signal: SMC_A17 on PC28 mux C */
#define MUX_PC28C_SMC_A17                          _L_(2)       /**< SMC signal line function value: SMC_A17 */
#define PIO_PC28C_SMC_A17                          (_U_(1) << 28) /**< SMC signal: SMC_A17 */
#define PIN_PB29B_SMC_A18                          _L_(61)      /**< SMC signal: SMC_A18 on PB29 mux B */
#define MUX_PB29B_SMC_A18                          _L_(1)       /**< SMC signal line function value: SMC_A18 */
#define PIO_PB29B_SMC_A18                          (_U_(1) << 29) /**< SMC signal: SMC_A18 */
#define PIN_PC29C_SMC_A18                          _L_(93)      /**< SMC signal: SMC_A18 on PC29 mux C */
#define MUX_PC29C_SMC_A18                          _L_(2)       /**< SMC signal line function value: SMC_A18 */
#define PIO_PC29C_SMC_A18                          (_U_(1) << 29) /**< SMC signal: SMC_A18 */
#define PIN_PB30B_SMC_A19                          _L_(62)      /**< SMC signal: SMC_A19 on PB30 mux B */
#define MUX_PB30B_SMC_A19                          _L_(1)       /**< SMC signal line function value: SMC_A19 */
#define PIO_PB30B_SMC_A19                          (_U_(1) << 30) /**< SMC signal: SMC_A19 */
#define PIN_PC30C_SMC_A19                          _L_(94)      /**< SMC signal: SMC_A19 on PC30 mux C */
#define MUX_PC30C_SMC_A19                          _L_(2)       /**< SMC signal line function value: SMC_A19 */
#define PIO_PC30C_SMC_A19                          (_U_(1) << 30) /**< SMC signal: SMC_A19 */
#define PIN_PB31B_SMC_A20                          _L_(63)      /**< SMC signal: SMC_A20 on PB31 mux B */
#define MUX_PB31B_SMC_A20                          _L_(1)       /**< SMC signal line function value: SMC_A20 */
#define PIO_PB31B_SMC_A20                          (_U_(1) << 31) /**< SMC signal: SMC_A20 */
#define PIN_PC31C_SMC_A20                          _L_(95)      /**< SMC signal: SMC_A20 on PC31 mux C */
#define MUX_PC31C_SMC_A20                          _L_(2)       /**< SMC signal line function value: SMC_A20 */
#define PIO_PC31C_SMC_A20                          (_U_(1) << 31) /**< SMC signal: SMC_A20 */
#define PIN_PC0B_SMC_A23                           _L_(64)      /**< SMC signal: SMC_A23 on PC0 mux B */
#define MUX_PC0B_SMC_A23                           _L_(1)       /**< SMC signal line function value: SMC_A23 */
#define PIO_PC0B_SMC_A23                           (_U_(1) << 0) /**< SMC signal: SMC_A23 */
#define PIN_PD0C_SMC_A23                           _L_(96)      /**< SMC signal: SMC_A23 on PD0 mux C */
#define MUX_PD0C_SMC_A23                           _L_(2)       /**< SMC signal line function value: SMC_A23 */
#define PIO_PD0C_SMC_A23                           (_U_(1) << 0) /**< SMC signal: SMC_A23 */
#define PIN_PC1B_SMC_A24                           _L_(65)      /**< SMC signal: SMC_A24 on PC1 mux B */
#define MUX_PC1B_SMC_A24                           _L_(1)       /**< SMC signal line function value: SMC_A24 */
#define PIO_PC1B_SMC_A24                           (_U_(1) << 1) /**< SMC signal: SMC_A24 */
#define PIN_PD1C_SMC_A24                           _L_(97)      /**< SMC signal: SMC_A24 on PD1 mux C */
#define MUX_PD1C_SMC_A24                           _L_(2)       /**< SMC signal line function value: SMC_A24 */
#define PIO_PD1C_SMC_A24                           (_U_(1) << 1) /**< SMC signal: SMC_A24 */
#define PIN_PC2B_SMC_A25                           _L_(66)      /**< SMC signal: SMC_A25 on PC2 mux B */
#define MUX_PC2B_SMC_A25                           _L_(1)       /**< SMC signal line function value: SMC_A25 */
#define PIO_PC2B_SMC_A25                           (_U_(1) << 2) /**< SMC signal: SMC_A25 */
#define PIN_PD2C_SMC_A25                           _L_(98)      /**< SMC signal: SMC_A25 on PD2 mux C */
#define MUX_PD2C_SMC_A25                           _L_(2)       /**< SMC signal line function value: SMC_A25 */
#define PIO_PD2C_SMC_A25                           (_U_(1) << 2) /**< SMC signal: SMC_A25 */
#define PIN_PB11B_SMC_A0                           _L_(43)      /**< SMC signal: SMC_A0 on PB11 mux B */
#define MUX_PB11B_SMC_A0                           _L_(1)       /**< SMC signal line function value: SMC_A0 */
#define PIO_PB11B_SMC_A0                           (_U_(1) << 11) /**< SMC signal: SMC_A0 */
#define PIN_PC11F_SMC_A0                           _L_(75)      /**< SMC signal: SMC_A0 on PC11 mux F */
#define MUX_PC11F_SMC_A0                           _L_(5)       /**< SMC signal line function value: SMC_A0 */
#define PIO_PC11F_SMC_A0                           (_U_(1) << 11) /**< SMC signal: SMC_A0 */
#define PIN_PA10F_SMC_A21                          _L_(10)      /**< SMC signal: SMC_A21 on PA10 mux F */
#define MUX_PA10F_SMC_A21                          _L_(5)       /**< SMC signal line function value: SMC_A21 */
#define PIO_PA10F_SMC_A21                          (_U_(1) << 10) /**< SMC signal: SMC_A21 */
#define PIN_PB0B_SMC_A21                           _L_(32)      /**< SMC signal: SMC_A21 on PB0 mux B */
#define MUX_PB0B_SMC_A21                           _L_(1)       /**< SMC signal line function value: SMC_A21 */
#define PIO_PB0B_SMC_A21                           (_U_(1) << 0) /**< SMC signal: SMC_A21 */
#define PIN_PA11F_SMC_A22                          _L_(11)      /**< SMC signal: SMC_A22 on PA11 mux F */
#define MUX_PA11F_SMC_A22                          _L_(5)       /**< SMC signal line function value: SMC_A22 */
#define PIO_PA11F_SMC_A22                          (_U_(1) << 11) /**< SMC signal: SMC_A22 */
#define PIN_PB1B_SMC_A22                           _L_(33)      /**< SMC signal: SMC_A22 on PB1 mux B */
#define MUX_PB1B_SMC_A22                           _L_(1)       /**< SMC signal line function value: SMC_A22 */
#define PIO_PB1B_SMC_A22                           (_U_(1) << 1) /**< SMC signal: SMC_A22 */
#define PIN_PA0F_SMC_D0                            _L_(0)       /**< SMC signal: SMC_D0 on PA0 mux F */
#define MUX_PA0F_SMC_D0                            _L_(5)       /**< SMC signal line function value: SMC_D0 */
#define PIO_PA0F_SMC_D0                            (_U_(1) << 0) /**< SMC signal: SMC_D0 */
#define PIN_PA22B_SMC_D0                           _L_(22)      /**< SMC signal: SMC_D0 on PA22 mux B */
#define MUX_PA22B_SMC_D0                           _L_(1)       /**< SMC signal line function value: SMC_D0 */
#define PIO_PA22B_SMC_D0                           (_U_(1) << 22) /**< SMC signal: SMC_D0 */
#define PIN_PA1F_SMC_D1                            _L_(1)       /**< SMC signal: SMC_D1 on PA1 mux F */
#define MUX_PA1F_SMC_D1                            _L_(5)       /**< SMC signal line function value: SMC_D1 */
#define PIO_PA1F_SMC_D1                            (_U_(1) << 1) /**< SMC signal: SMC_D1 */
#define PIN_PA23B_SMC_D1                           _L_(23)      /**< SMC signal: SMC_D1 on PA23 mux B */
#define MUX_PA23B_SMC_D1                           _L_(1)       /**< SMC signal line function value: SMC_D1 */
#define PIO_PA23B_SMC_D1                           (_U_(1) << 23) /**< SMC signal: SMC_D1 */
#define PIN_PA2F_SMC_D2                            _L_(2)       /**< SMC signal: SMC_D2 on PA2 mux F */
#define MUX_PA2F_SMC_D2                            _L_(5)       /**< SMC signal line function value: SMC_D2 */
#define PIO_PA2F_SMC_D2                            (_U_(1) << 2) /**< SMC signal: SMC_D2 */
#define PIN_PA24B_SMC_D2                           _L_(24)      /**< SMC signal: SMC_D2 on PA24 mux B */
#define MUX_PA24B_SMC_D2                           _L_(1)       /**< SMC signal line function value: SMC_D2 */
#define PIO_PA24B_SMC_D2                           (_U_(1) << 24) /**< SMC signal: SMC_D2 */
#define PIN_PA3F_SMC_D3                            _L_(3)       /**< SMC signal: SMC_D3 on PA3 mux F */
#define MUX_PA3F_SMC_D3                            _L_(5)       /**< SMC signal line function value: SMC_D3 */
#define PIO_PA3F_SMC_D3                            (_U_(1) << 3) /**< SMC signal: SMC_D3 */
#define PIN_PA25B_SMC_D3                           _L_(25)      /**< SMC signal: SMC_D3 on PA25 mux B */
#define MUX_PA25B_SMC_D3                           _L_(1)       /**< SMC signal line function value: SMC_D3 */
#define PIO_PA25B_SMC_D3                           (_U_(1) << 25) /**< SMC signal: SMC_D3 */
#define PIN_PA4F_SMC_D4                            _L_(4)       /**< SMC signal: SMC_D4 on PA4 mux F */
#define MUX_PA4F_SMC_D4                            _L_(5)       /**< SMC signal line function value: SMC_D4 */
#define PIO_PA4F_SMC_D4                            (_U_(1) << 4) /**< SMC signal: SMC_D4 */
#define PIN_PA26B_SMC_D4                           _L_(26)      /**< SMC signal: SMC_D4 on PA26 mux B */
#define MUX_PA26B_SMC_D4                           _L_(1)       /**< SMC signal line function value: SMC_D4 */
#define PIO_PA26B_SMC_D4                           (_U_(1) << 26) /**< SMC signal: SMC_D4 */
#define PIN_PA5F_SMC_D5                            _L_(5)       /**< SMC signal: SMC_D5 on PA5 mux F */
#define MUX_PA5F_SMC_D5                            _L_(5)       /**< SMC signal line function value: SMC_D5 */
#define PIO_PA5F_SMC_D5                            (_U_(1) << 5) /**< SMC signal: SMC_D5 */
#define PIN_PA27B_SMC_D5                           _L_(27)      /**< SMC signal: SMC_D5 on PA27 mux B */
#define MUX_PA27B_SMC_D5                           _L_(1)       /**< SMC signal line function value: SMC_D5 */
#define PIO_PA27B_SMC_D5                           (_U_(1) << 27) /**< SMC signal: SMC_D5 */
#define PIN_PA6F_SMC_D6                            _L_(6)       /**< SMC signal: SMC_D6 on PA6 mux F */
#define MUX_PA6F_SMC_D6                            _L_(5)       /**< SMC signal line function value: SMC_D6 */
#define PIO_PA6F_SMC_D6                            (_U_(1) << 6) /**< SMC signal: SMC_D6 */
#define PIN_PA28B_SMC_D6                           _L_(28)      /**< SMC signal: SMC_D6 on PA28 mux B */
#define MUX_PA28B_SMC_D6                           _L_(1)       /**< SMC signal line function value: SMC_D6 */
#define PIO_PA28B_SMC_D6                           (_U_(1) << 28) /**< SMC signal: SMC_D6 */
#define PIN_PA7F_SMC_D7                            _L_(7)       /**< SMC signal: SMC_D7 on PA7 mux F */
#define MUX_PA7F_SMC_D7                            _L_(5)       /**< SMC signal line function value: SMC_D7 */
#define PIO_PA7F_SMC_D7                            (_U_(1) << 7) /**< SMC signal: SMC_D7 */
#define PIN_PA29B_SMC_D7                           _L_(29)      /**< SMC signal: SMC_D7 on PA29 mux B */
#define MUX_PA29B_SMC_D7                           _L_(1)       /**< SMC signal line function value: SMC_D7 */
#define PIO_PA29B_SMC_D7                           (_U_(1) << 29) /**< SMC signal: SMC_D7 */
#define PIN_PA13F_SMC_D8                           _L_(13)      /**< SMC signal: SMC_D8 on PA13 mux F */
#define MUX_PA13F_SMC_D8                           _L_(5)       /**< SMC signal line function value: SMC_D8 */
#define PIO_PA13F_SMC_D8                           (_U_(1) << 13) /**< SMC signal: SMC_D8 */
#define PIN_PB3B_SMC_D8                            _L_(35)      /**< SMC signal: SMC_D8 on PB3 mux B */
#define MUX_PB3B_SMC_D8                            _L_(1)       /**< SMC signal line function value: SMC_D8 */
#define PIO_PB3B_SMC_D8                            (_U_(1) << 3) /**< SMC signal: SMC_D8 */
#define PIN_PA14F_SMC_D9                           _L_(14)      /**< SMC signal: SMC_D9 on PA14 mux F */
#define MUX_PA14F_SMC_D9                           _L_(5)       /**< SMC signal line function value: SMC_D9 */
#define PIO_PA14F_SMC_D9                           (_U_(1) << 14) /**< SMC signal: SMC_D9 */
#define PIN_PB4B_SMC_D9                            _L_(36)      /**< SMC signal: SMC_D9 on PB4 mux B */
#define MUX_PB4B_SMC_D9                            _L_(1)       /**< SMC signal line function value: SMC_D9 */
#define PIO_PB4B_SMC_D9                            (_U_(1) << 4) /**< SMC signal: SMC_D9 */
#define PIN_PA15F_SMC_D10                          _L_(15)      /**< SMC signal: SMC_D10 on PA15 mux F */
#define MUX_PA15F_SMC_D10                          _L_(5)       /**< SMC signal line function value: SMC_D10 */
#define PIO_PA15F_SMC_D10                          (_U_(1) << 15) /**< SMC signal: SMC_D10 */
#define PIN_PB5B_SMC_D10                           _L_(37)      /**< SMC signal: SMC_D10 on PB5 mux B */
#define MUX_PB5B_SMC_D10                           _L_(1)       /**< SMC signal line function value: SMC_D10 */
#define PIO_PB5B_SMC_D10                           (_U_(1) << 5) /**< SMC signal: SMC_D10 */
#define PIN_PA16F_SMC_D11                          _L_(16)      /**< SMC signal: SMC_D11 on PA16 mux F */
#define MUX_PA16F_SMC_D11                          _L_(5)       /**< SMC signal line function value: SMC_D11 */
#define PIO_PA16F_SMC_D11                          (_U_(1) << 16) /**< SMC signal: SMC_D11 */
#define PIN_PB6B_SMC_D11                           _L_(38)      /**< SMC signal: SMC_D11 on PB6 mux B */
#define MUX_PB6B_SMC_D11                           _L_(1)       /**< SMC signal line function value: SMC_D11 */
#define PIO_PB6B_SMC_D11                           (_U_(1) << 6) /**< SMC signal: SMC_D11 */
#define PIN_PA17F_SMC_D12                          _L_(17)      /**< SMC signal: SMC_D12 on PA17 mux F */
#define MUX_PA17F_SMC_D12                          _L_(5)       /**< SMC signal line function value: SMC_D12 */
#define PIO_PA17F_SMC_D12                          (_U_(1) << 17) /**< SMC signal: SMC_D12 */
#define PIN_PB7B_SMC_D12                           _L_(39)      /**< SMC signal: SMC_D12 on PB7 mux B */
#define MUX_PB7B_SMC_D12                           _L_(1)       /**< SMC signal line function value: SMC_D12 */
#define PIO_PB7B_SMC_D12                           (_U_(1) << 7) /**< SMC signal: SMC_D12 */
#define PIN_PA18F_SMC_D13                          _L_(18)      /**< SMC signal: SMC_D13 on PA18 mux F */
#define MUX_PA18F_SMC_D13                          _L_(5)       /**< SMC signal line function value: SMC_D13 */
#define PIO_PA18F_SMC_D13                          (_U_(1) << 18) /**< SMC signal: SMC_D13 */
#define PIN_PB8B_SMC_D13                           _L_(40)      /**< SMC signal: SMC_D13 on PB8 mux B */
#define MUX_PB8B_SMC_D13                           _L_(1)       /**< SMC signal line function value: SMC_D13 */
#define PIO_PB8B_SMC_D13                           (_U_(1) << 8) /**< SMC signal: SMC_D13 */
#define PIN_PA19F_SMC_D14                          _L_(19)      /**< SMC signal: SMC_D14 on PA19 mux F */
#define MUX_PA19F_SMC_D14                          _L_(5)       /**< SMC signal line function value: SMC_D14 */
#define PIO_PA19F_SMC_D14                          (_U_(1) << 19) /**< SMC signal: SMC_D14 */
#define PIN_PB9B_SMC_D14                           _L_(41)      /**< SMC signal: SMC_D14 on PB9 mux B */
#define MUX_PB9B_SMC_D14                           _L_(1)       /**< SMC signal line function value: SMC_D14 */
#define PIO_PB9B_SMC_D14                           (_U_(1) << 9) /**< SMC signal: SMC_D14 */
#define PIN_PA20F_SMC_D15                          _L_(20)      /**< SMC signal: SMC_D15 on PA20 mux F */
#define MUX_PA20F_SMC_D15                          _L_(5)       /**< SMC signal line function value: SMC_D15 */
#define PIO_PA20F_SMC_D15                          (_U_(1) << 20) /**< SMC signal: SMC_D15 */
#define PIN_PB10B_SMC_D15                          _L_(42)      /**< SMC signal: SMC_D15 on PB10 mux B */
#define MUX_PB10B_SMC_D15                          _L_(1)       /**< SMC signal line function value: SMC_D15 */
#define PIO_PB10B_SMC_D15                          (_U_(1) << 10) /**< SMC signal: SMC_D15 */
#define PIN_PA8F_SMC_NANDNWE                       _L_(8)       /**< SMC signal: SMC_NANDNWE on PA8 mux F */
#define MUX_PA8F_SMC_NANDNWE                       _L_(5)       /**< SMC signal line function value: SMC_NANDNWE */
#define PIO_PA8F_SMC_NANDNWE                       (_U_(1) << 8) /**< SMC signal: SMC_NANDNWE */
#define PIN_PA30B_SMC_NANDNWE                      _L_(30)      /**< SMC signal: SMC_NANDNWE on PA30 mux B */
#define MUX_PA30B_SMC_NANDNWE                      _L_(1)       /**< SMC signal line function value: SMC_NANDNWE */
#define PIO_PA30B_SMC_NANDNWE                      (_U_(1) << 30) /**< SMC signal: SMC_NANDNWE */
#define PIN_PA12F_SMC_NANDOE                       _L_(12)      /**< SMC signal: SMC_NANDOE on PA12 mux F */
#define MUX_PA12F_SMC_NANDOE                       _L_(5)       /**< SMC signal line function value: SMC_NANDOE */
#define PIO_PA12F_SMC_NANDOE                       (_U_(1) << 12) /**< SMC signal: SMC_NANDOE */
#define PIN_PB2B_SMC_NANDOE                        _L_(34)      /**< SMC signal: SMC_NANDOE on PB2 mux B */
#define MUX_PB2B_SMC_NANDOE                        _L_(1)       /**< SMC signal line function value: SMC_NANDOE */
#define PIO_PB2B_SMC_NANDOE                        (_U_(1) << 2) /**< SMC signal: SMC_NANDOE */
#define PIN_PA21F_SMC_NANDRDY                      _L_(21)      /**< SMC signal: SMC_NANDRDY on PA21 mux F */
#define MUX_PA21F_SMC_NANDRDY                      _L_(5)       /**< SMC signal line function value: SMC_NANDRDY */
#define PIO_PA21F_SMC_NANDRDY                      (_U_(1) << 21) /**< SMC signal: SMC_NANDRDY */
#define PIN_PC8B_SMC_NANDRDY                       _L_(72)      /**< SMC signal: SMC_NANDRDY on PC8 mux B */
#define MUX_PC8B_SMC_NANDRDY                       _L_(1)       /**< SMC signal line function value: SMC_NANDRDY */
#define PIO_PC8B_SMC_NANDRDY                       (_U_(1) << 8) /**< SMC signal: SMC_NANDRDY */
#define PIN_PD8F_SMC_NANDRDY                       _L_(104)     /**< SMC signal: SMC_NANDRDY on PD8 mux F */
#define MUX_PD8F_SMC_NANDRDY                       _L_(5)       /**< SMC signal line function value: SMC_NANDRDY */
#define PIO_PD8F_SMC_NANDRDY                       (_U_(1) << 8) /**< SMC signal: SMC_NANDRDY */
#define PIN_PC5B_SMC_NCS0                          _L_(69)      /**< SMC signal: SMC_NCS0 on PC5 mux B */
#define MUX_PC5B_SMC_NCS0                          _L_(1)       /**< SMC signal line function value: SMC_NCS0 */
#define PIO_PC5B_SMC_NCS0                          (_U_(1) << 5) /**< SMC signal: SMC_NCS0 */
#define PIN_PD4F_SMC_NCS0                          _L_(100)     /**< SMC signal: SMC_NCS0 on PD4 mux F */
#define MUX_PD4F_SMC_NCS0                          _L_(5)       /**< SMC signal line function value: SMC_NCS0 */
#define PIO_PD4F_SMC_NCS0                          (_U_(1) << 4) /**< SMC signal: SMC_NCS0 */
#define PIN_PD5F_SMC_NCS1                          _L_(101)     /**< SMC signal: SMC_NCS1 on PD5 mux F */
#define MUX_PD5F_SMC_NCS1                          _L_(5)       /**< SMC signal line function value: SMC_NCS1 */
#define PIO_PD5F_SMC_NCS1                          (_U_(1) << 5) /**< SMC signal: SMC_NCS1 */
#define PIN_PC7B_SMC_NCS2                          _L_(71)      /**< SMC signal: SMC_NCS2 on PC7 mux B */
#define MUX_PC7B_SMC_NCS2                          _L_(1)       /**< SMC signal line function value: SMC_NCS2 */
#define PIO_PC7B_SMC_NCS2                          (_U_(1) << 7) /**< SMC signal: SMC_NCS2 */
#define PIN_PD6F_SMC_NCS2                          _L_(102)     /**< SMC signal: SMC_NCS2 on PD6 mux F */
#define MUX_PD6F_SMC_NCS2                          _L_(5)       /**< SMC signal line function value: SMC_NCS2 */
#define PIO_PD6F_SMC_NCS2                          (_U_(1) << 6) /**< SMC signal: SMC_NCS2 */
#define PIN_PA9F_SMC_NCS3                          _L_(9)       /**< SMC signal: SMC_NCS3 on PA9 mux F */
#define MUX_PA9F_SMC_NCS3                          _L_(5)       /**< SMC signal line function value: SMC_NCS3 */
#define PIO_PA9F_SMC_NCS3                          (_U_(1) << 9) /**< SMC signal: SMC_NCS3 */
#define PIN_PA31B_SMC_NCS3                         _L_(31)      /**< SMC signal: SMC_NCS3 on PA31 mux B */
#define MUX_PA31B_SMC_NCS3                         _L_(1)       /**< SMC signal line function value: SMC_NCS3 */
#define PIO_PA31B_SMC_NCS3                         (_U_(1) << 31) /**< SMC signal: SMC_NCS3 */
#define PIN_PC3B_SMC_NWAIT                         _L_(67)      /**< SMC signal: SMC_NWAIT on PC3 mux B */
#define MUX_PC3B_SMC_NWAIT                         _L_(1)       /**< SMC signal line function value: SMC_NWAIT */
#define PIO_PC3B_SMC_NWAIT                         (_U_(1) << 3) /**< SMC signal: SMC_NWAIT */
#define PIN_PD3F_SMC_NWAIT                         _L_(99)      /**< SMC signal: SMC_NWAIT on PD3 mux F */
#define MUX_PD3F_SMC_NWAIT                         _L_(5)       /**< SMC signal line function value: SMC_NWAIT */
#define PIO_PD3F_SMC_NWAIT                         (_U_(1) << 3) /**< SMC signal: SMC_NWAIT */
#define PIN_PC4B_SMC_NWR1                          _L_(68)      /**< SMC signal: SMC_NWR1 on PC4 mux B */
#define MUX_PC4B_SMC_NWR1                          _L_(1)       /**< SMC signal line function value: SMC_NWR1 */
#define PIO_PC4B_SMC_NWR1                          (_U_(1) << 4) /**< SMC signal: SMC_NWR1 */
#define PIN_PD7F_SMC_NWR1                          _L_(103)     /**< SMC signal: SMC_NWR1 on PD7 mux F */
#define MUX_PD7F_SMC_NWR1                          _L_(5)       /**< SMC signal line function value: SMC_NWR1 */
#define PIO_PD7F_SMC_NWR1                          (_U_(1) << 7) /**< SMC signal: SMC_NWR1 */
/* ========== PIO definition for SPI0 peripheral ========== */
#define PIN_PA16A_SPI0_MISO                        _L_(16)      /**< SPI0 signal: SPI0_MISO on PA16 mux A */
#define MUX_PA16A_SPI0_MISO                        _L_(0)       /**< SPI0 signal line function value: SPI0_MISO */
#define PIO_PA16A_SPI0_MISO                        (_U_(1) << 16) /**< SPI0 signal: SPI0_MISO */
#define PIN_PA31C_SPI0_MISO                        _L_(31)      /**< SPI0 signal: SPI0_MISO on PA31 mux C */
#define MUX_PA31C_SPI0_MISO                        _L_(2)       /**< SPI0 signal line function value: SPI0_MISO */
#define PIO_PA31C_SPI0_MISO                        (_U_(1) << 31) /**< SPI0 signal: SPI0_MISO */
#define PIN_PA15A_SPI0_MOSI                        _L_(15)      /**< SPI0 signal: SPI0_MOSI on PA15 mux A */
#define MUX_PA15A_SPI0_MOSI                        _L_(0)       /**< SPI0 signal line function value: SPI0_MOSI */
#define PIO_PA15A_SPI0_MOSI                        (_U_(1) << 15) /**< SPI0 signal: SPI0_MOSI */
#define PIN_PB0C_SPI0_MOSI                         _L_(32)      /**< SPI0 signal: SPI0_MOSI on PB0 mux C */
#define MUX_PB0C_SPI0_MOSI                         _L_(2)       /**< SPI0 signal line function value: SPI0_MOSI */
#define PIO_PB0C_SPI0_MOSI                         (_U_(1) << 0) /**< SPI0 signal: SPI0_MOSI */
#define PIN_PA17A_SPI0_NPCS0                       _L_(17)      /**< SPI0 signal: SPI0_NPCS0 on PA17 mux A */
#define MUX_PA17A_SPI0_NPCS0                       _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS0 */
#define PIO_PA17A_SPI0_NPCS0                       (_U_(1) << 17) /**< SPI0 signal: SPI0_NPCS0 */
#define PIN_PA30C_SPI0_NPCS0                       _L_(30)      /**< SPI0 signal: SPI0_NPCS0 on PA30 mux C */
#define MUX_PA30C_SPI0_NPCS0                       _L_(2)       /**< SPI0 signal line function value: SPI0_NPCS0 */
#define PIO_PA30C_SPI0_NPCS0                       (_U_(1) << 30) /**< SPI0 signal: SPI0_NPCS0 */
#define PIN_PA18A_SPI0_NPCS1                       _L_(18)      /**< SPI0 signal: SPI0_NPCS1 on PA18 mux A */
#define MUX_PA18A_SPI0_NPCS1                       _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS1 */
#define PIO_PA18A_SPI0_NPCS1                       (_U_(1) << 18) /**< SPI0 signal: SPI0_NPCS1 */
#define PIN_PA29C_SPI0_NPCS1                       _L_(29)      /**< SPI0 signal: SPI0_NPCS1 on PA29 mux C */
#define MUX_PA29C_SPI0_NPCS1                       _L_(2)       /**< SPI0 signal line function value: SPI0_NPCS1 */
#define PIO_PA29C_SPI0_NPCS1                       (_U_(1) << 29) /**< SPI0 signal: SPI0_NPCS1 */
#define PIN_PA19A_SPI0_NPCS2                       _L_(19)      /**< SPI0 signal: SPI0_NPCS2 on PA19 mux A */
#define MUX_PA19A_SPI0_NPCS2                       _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS2 */
#define PIO_PA19A_SPI0_NPCS2                       (_U_(1) << 19) /**< SPI0 signal: SPI0_NPCS2 */
#define PIN_PA27C_SPI0_NPCS2                       _L_(27)      /**< SPI0 signal: SPI0_NPCS2 on PA27 mux C */
#define MUX_PA27C_SPI0_NPCS2                       _L_(2)       /**< SPI0 signal line function value: SPI0_NPCS2 */
#define PIO_PA27C_SPI0_NPCS2                       (_U_(1) << 27) /**< SPI0 signal: SPI0_NPCS2 */
#define PIN_PA20A_SPI0_NPCS3                       _L_(20)      /**< SPI0 signal: SPI0_NPCS3 on PA20 mux A */
#define MUX_PA20A_SPI0_NPCS3                       _L_(0)       /**< SPI0 signal line function value: SPI0_NPCS3 */
#define PIO_PA20A_SPI0_NPCS3                       (_U_(1) << 20) /**< SPI0 signal: SPI0_NPCS3 */
#define PIN_PA28C_SPI0_NPCS3                       _L_(28)      /**< SPI0 signal: SPI0_NPCS3 on PA28 mux C */
#define MUX_PA28C_SPI0_NPCS3                       _L_(2)       /**< SPI0 signal line function value: SPI0_NPCS3 */
#define PIO_PA28C_SPI0_NPCS3                       (_U_(1) << 28) /**< SPI0 signal: SPI0_NPCS3 */
#define PIN_PA14A_SPI0_SPCK                        _L_(14)      /**< SPI0 signal: SPI0_SPCK on PA14 mux A */
#define MUX_PA14A_SPI0_SPCK                        _L_(0)       /**< SPI0 signal line function value: SPI0_SPCK */
#define PIO_PA14A_SPI0_SPCK                        (_U_(1) << 14) /**< SPI0 signal: SPI0_SPCK */
#define PIN_PB1C_SPI0_SPCK                         _L_(33)      /**< SPI0 signal: SPI0_SPCK on PB1 mux C */
#define MUX_PB1C_SPI0_SPCK                         _L_(2)       /**< SPI0 signal line function value: SPI0_SPCK */
#define PIO_PB1C_SPI0_SPCK                         (_U_(1) << 1) /**< SPI0 signal: SPI0_SPCK */
/* ========== PIO definition for SPI1 peripheral ========== */
#define PIN_PA24D_SPI1_MISO                        _L_(24)      /**< SPI1 signal: SPI1_MISO on PA24 mux D */
#define MUX_PA24D_SPI1_MISO                        _L_(3)       /**< SPI1 signal line function value: SPI1_MISO */
#define PIO_PA24D_SPI1_MISO                        (_U_(1) << 24) /**< SPI1 signal: SPI1_MISO */
#define PIN_PC3D_SPI1_MISO                         _L_(67)      /**< SPI1 signal: SPI1_MISO on PC3 mux D */
#define MUX_PC3D_SPI1_MISO                         _L_(3)       /**< SPI1 signal line function value: SPI1_MISO */
#define PIO_PC3D_SPI1_MISO                         (_U_(1) << 3) /**< SPI1 signal: SPI1_MISO */
#define PIN_PD27A_SPI1_MISO                        _L_(123)     /**< SPI1 signal: SPI1_MISO on PD27 mux A */
#define MUX_PD27A_SPI1_MISO                        _L_(0)       /**< SPI1 signal line function value: SPI1_MISO */
#define PIO_PD27A_SPI1_MISO                        (_U_(1) << 27) /**< SPI1 signal: SPI1_MISO */
#define PIN_PA23D_SPI1_MOSI                        _L_(23)      /**< SPI1 signal: SPI1_MOSI on PA23 mux D */
#define MUX_PA23D_SPI1_MOSI                        _L_(3)       /**< SPI1 signal line function value: SPI1_MOSI */
#define PIO_PA23D_SPI1_MOSI                        (_U_(1) << 23) /**< SPI1 signal: SPI1_MOSI */
#define PIN_PC2D_SPI1_MOSI                         _L_(66)      /**< SPI1 signal: SPI1_MOSI on PC2 mux D */
#define MUX_PC2D_SPI1_MOSI                         _L_(3)       /**< SPI1 signal line function value: SPI1_MOSI */
#define PIO_PC2D_SPI1_MOSI                         (_U_(1) << 2) /**< SPI1 signal: SPI1_MOSI */
#define PIN_PD26A_SPI1_MOSI                        _L_(122)     /**< SPI1 signal: SPI1_MOSI on PD26 mux A */
#define MUX_PD26A_SPI1_MOSI                        _L_(0)       /**< SPI1 signal line function value: SPI1_MOSI */
#define PIO_PD26A_SPI1_MOSI                        (_U_(1) << 26) /**< SPI1 signal: SPI1_MOSI */
#define PIN_PA25D_SPI1_NPCS0                       _L_(25)      /**< SPI1 signal: SPI1_NPCS0 on PA25 mux D */
#define MUX_PA25D_SPI1_NPCS0                       _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS0 */
#define PIO_PA25D_SPI1_NPCS0                       (_U_(1) << 25) /**< SPI1 signal: SPI1_NPCS0 */
#define PIN_PC4D_SPI1_NPCS0                        _L_(68)      /**< SPI1 signal: SPI1_NPCS0 on PC4 mux D */
#define MUX_PC4D_SPI1_NPCS0                        _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS0 */
#define PIO_PC4D_SPI1_NPCS0                        (_U_(1) << 4) /**< SPI1 signal: SPI1_NPCS0 */
#define PIN_PD28A_SPI1_NPCS0                       _L_(124)     /**< SPI1 signal: SPI1_NPCS0 on PD28 mux A */
#define MUX_PD28A_SPI1_NPCS0                       _L_(0)       /**< SPI1 signal line function value: SPI1_NPCS0 */
#define PIO_PD28A_SPI1_NPCS0                       (_U_(1) << 28) /**< SPI1 signal: SPI1_NPCS0 */
#define PIN_PA26D_SPI1_NPCS1                       _L_(26)      /**< SPI1 signal: SPI1_NPCS1 on PA26 mux D */
#define MUX_PA26D_SPI1_NPCS1                       _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS1 */
#define PIO_PA26D_SPI1_NPCS1                       (_U_(1) << 26) /**< SPI1 signal: SPI1_NPCS1 */
#define PIN_PC5D_SPI1_NPCS1                        _L_(69)      /**< SPI1 signal: SPI1_NPCS1 on PC5 mux D */
#define MUX_PC5D_SPI1_NPCS1                        _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS1 */
#define PIO_PC5D_SPI1_NPCS1                        (_U_(1) << 5) /**< SPI1 signal: SPI1_NPCS1 */
#define PIN_PD29A_SPI1_NPCS1                       _L_(125)     /**< SPI1 signal: SPI1_NPCS1 on PD29 mux A */
#define MUX_PD29A_SPI1_NPCS1                       _L_(0)       /**< SPI1 signal line function value: SPI1_NPCS1 */
#define PIO_PD29A_SPI1_NPCS1                       (_U_(1) << 29) /**< SPI1 signal: SPI1_NPCS1 */
#define PIN_PA27D_SPI1_NPCS2                       _L_(27)      /**< SPI1 signal: SPI1_NPCS2 on PA27 mux D */
#define MUX_PA27D_SPI1_NPCS2                       _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS2 */
#define PIO_PA27D_SPI1_NPCS2                       (_U_(1) << 27) /**< SPI1 signal: SPI1_NPCS2 */
#define PIN_PC6D_SPI1_NPCS2                        _L_(70)      /**< SPI1 signal: SPI1_NPCS2 on PC6 mux D */
#define MUX_PC6D_SPI1_NPCS2                        _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS2 */
#define PIO_PC6D_SPI1_NPCS2                        (_U_(1) << 6) /**< SPI1 signal: SPI1_NPCS2 */
#define PIN_PD30A_SPI1_NPCS2                       _L_(126)     /**< SPI1 signal: SPI1_NPCS2 on PD30 mux A */
#define MUX_PD30A_SPI1_NPCS2                       _L_(0)       /**< SPI1 signal line function value: SPI1_NPCS2 */
#define PIO_PD30A_SPI1_NPCS2                       (_U_(1) << 30) /**< SPI1 signal: SPI1_NPCS2 */
#define PIN_PA28D_SPI1_NPCS3                       _L_(28)      /**< SPI1 signal: SPI1_NPCS3 on PA28 mux D */
#define MUX_PA28D_SPI1_NPCS3                       _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS3 */
#define PIO_PA28D_SPI1_NPCS3                       (_U_(1) << 28) /**< SPI1 signal: SPI1_NPCS3 */
#define PIN_PC7D_SPI1_NPCS3                        _L_(71)      /**< SPI1 signal: SPI1_NPCS3 on PC7 mux D */
#define MUX_PC7D_SPI1_NPCS3                        _L_(3)       /**< SPI1 signal line function value: SPI1_NPCS3 */
#define PIO_PC7D_SPI1_NPCS3                        (_U_(1) << 7) /**< SPI1 signal: SPI1_NPCS3 */
#define PIN_PA22D_SPI1_SPCK                        _L_(22)      /**< SPI1 signal: SPI1_SPCK on PA22 mux D */
#define MUX_PA22D_SPI1_SPCK                        _L_(3)       /**< SPI1 signal line function value: SPI1_SPCK */
#define PIO_PA22D_SPI1_SPCK                        (_U_(1) << 22) /**< SPI1 signal: SPI1_SPCK */
#define PIN_PC1D_SPI1_SPCK                         _L_(65)      /**< SPI1 signal: SPI1_SPCK on PC1 mux D */
#define MUX_PC1D_SPI1_SPCK                         _L_(3)       /**< SPI1 signal line function value: SPI1_SPCK */
#define PIO_PC1D_SPI1_SPCK                         (_U_(1) << 1) /**< SPI1 signal: SPI1_SPCK */
#define PIN_PD25A_SPI1_SPCK                        _L_(121)     /**< SPI1 signal: SPI1_SPCK on PD25 mux A */
#define MUX_PD25A_SPI1_SPCK                        _L_(0)       /**< SPI1 signal line function value: SPI1_SPCK */
#define PIO_PD25A_SPI1_SPCK                        (_U_(1) << 25) /**< SPI1 signal: SPI1_SPCK */
/* ========== PIO definition for SSC0 peripheral ========== */
#define PIN_PB23C_SSC0_RD0                         _L_(55)      /**< SSC0 signal: SSC0_RD0 on PB23 mux C */
#define MUX_PB23C_SSC0_RD0                         _L_(2)       /**< SSC0 signal line function value: SSC0_RD0 */
#define PIO_PB23C_SSC0_RD0                         (_U_(1) << 23) /**< SSC0 signal: SSC0_RD0 */
#define PIN_PC15E_SSC0_RD0                         _L_(79)      /**< SSC0 signal: SSC0_RD0 on PC15 mux E */
#define MUX_PC15E_SSC0_RD0                         _L_(4)       /**< SSC0 signal line function value: SSC0_RD0 */
#define PIO_PC15E_SSC0_RD0                         (_U_(1) << 15) /**< SSC0 signal: SSC0_RD0 */
#define PIN_PB25C_SSC0_RF0                         _L_(57)      /**< SSC0 signal: SSC0_RF0 on PB25 mux C */
#define MUX_PB25C_SSC0_RF0                         _L_(2)       /**< SSC0 signal line function value: SSC0_RF0 */
#define PIO_PB25C_SSC0_RF0                         (_U_(1) << 25) /**< SSC0 signal: SSC0_RF0 */
#define PIN_PC17E_SSC0_RF0                         _L_(81)      /**< SSC0 signal: SSC0_RF0 on PC17 mux E */
#define MUX_PC17E_SSC0_RF0                         _L_(4)       /**< SSC0 signal line function value: SSC0_RF0 */
#define PIO_PC17E_SSC0_RF0                         (_U_(1) << 17) /**< SSC0 signal: SSC0_RF0 */
#define PIN_PB24C_SSC0_RK0                         _L_(56)      /**< SSC0 signal: SSC0_RK0 on PB24 mux C */
#define MUX_PB24C_SSC0_RK0                         _L_(2)       /**< SSC0 signal line function value: SSC0_RK0 */
#define PIO_PB24C_SSC0_RK0                         (_U_(1) << 24) /**< SSC0 signal: SSC0_RK0 */
#define PIN_PC16E_SSC0_RK0                         _L_(80)      /**< SSC0 signal: SSC0_RK0 on PC16 mux E */
#define MUX_PC16E_SSC0_RK0                         _L_(4)       /**< SSC0 signal line function value: SSC0_RK0 */
#define PIO_PC16E_SSC0_RK0                         (_U_(1) << 16) /**< SSC0 signal: SSC0_RK0 */
#define PIN_PB22C_SSC0_TD0                         _L_(54)      /**< SSC0 signal: SSC0_TD0 on PB22 mux C */
#define MUX_PB22C_SSC0_TD0                         _L_(2)       /**< SSC0 signal line function value: SSC0_TD0 */
#define PIO_PB22C_SSC0_TD0                         (_U_(1) << 22) /**< SSC0 signal: SSC0_TD0 */
#define PIN_PC14E_SSC0_TD0                         _L_(78)      /**< SSC0 signal: SSC0_TD0 on PC14 mux E */
#define MUX_PC14E_SSC0_TD0                         _L_(4)       /**< SSC0 signal line function value: SSC0_TD0 */
#define PIO_PC14E_SSC0_TD0                         (_U_(1) << 14) /**< SSC0 signal: SSC0_TD0 */
#define PIN_PB21C_SSC0_TF0                         _L_(53)      /**< SSC0 signal: SSC0_TF0 on PB21 mux C */
#define MUX_PB21C_SSC0_TF0                         _L_(2)       /**< SSC0 signal line function value: SSC0_TF0 */
#define PIO_PB21C_SSC0_TF0                         (_U_(1) << 21) /**< SSC0 signal: SSC0_TF0 */
#define PIN_PC13E_SSC0_TF0                         _L_(77)      /**< SSC0 signal: SSC0_TF0 on PC13 mux E */
#define MUX_PC13E_SSC0_TF0                         _L_(4)       /**< SSC0 signal line function value: SSC0_TF0 */
#define PIO_PC13E_SSC0_TF0                         (_U_(1) << 13) /**< SSC0 signal: SSC0_TF0 */
#define PIN_PB20C_SSC0_TK0                         _L_(52)      /**< SSC0 signal: SSC0_TK0 on PB20 mux C */
#define MUX_PB20C_SSC0_TK0                         _L_(2)       /**< SSC0 signal line function value: SSC0_TK0 */
#define PIO_PB20C_SSC0_TK0                         (_U_(1) << 20) /**< SSC0 signal: SSC0_TK0 */
#define PIN_PC12E_SSC0_TK0                         _L_(76)      /**< SSC0 signal: SSC0_TK0 on PC12 mux E */
#define MUX_PC12E_SSC0_TK0                         _L_(4)       /**< SSC0 signal line function value: SSC0_TK0 */
#define PIO_PC12E_SSC0_TK0                         (_U_(1) << 12) /**< SSC0 signal: SSC0_TK0 */
/* ========== PIO definition for SSC1 peripheral ========== */
#define PIN_PA17B_SSC1_RD1                         _L_(17)      /**< SSC1 signal: SSC1_RD1 on PA17 mux B */
#define MUX_PA17B_SSC1_RD1                         _L_(1)       /**< SSC1 signal line function value: SSC1_RD1 */
#define PIO_PA17B_SSC1_RD1                         (_U_(1) << 17) /**< SSC1 signal: SSC1_RD1 */
#define PIN_PB17C_SSC1_RD1                         _L_(49)      /**< SSC1 signal: SSC1_RD1 on PB17 mux C */
#define MUX_PB17C_SSC1_RD1                         _L_(2)       /**< SSC1 signal line function value: SSC1_RD1 */
#define PIO_PB17C_SSC1_RD1                         (_U_(1) << 17) /**< SSC1 signal: SSC1_RD1 */
#define PIN_PA19B_SSC1_RF1                         _L_(19)      /**< SSC1 signal: SSC1_RF1 on PA19 mux B */
#define MUX_PA19B_SSC1_RF1                         _L_(1)       /**< SSC1 signal line function value: SSC1_RF1 */
#define PIO_PA19B_SSC1_RF1                         (_U_(1) << 19) /**< SSC1 signal: SSC1_RF1 */
#define PIN_PB19C_SSC1_RF1                         _L_(51)      /**< SSC1 signal: SSC1_RF1 on PB19 mux C */
#define MUX_PB19C_SSC1_RF1                         _L_(2)       /**< SSC1 signal line function value: SSC1_RF1 */
#define PIO_PB19C_SSC1_RF1                         (_U_(1) << 19) /**< SSC1 signal: SSC1_RF1 */
#define PIN_PA18B_SSC1_RK1                         _L_(18)      /**< SSC1 signal: SSC1_RK1 on PA18 mux B */
#define MUX_PA18B_SSC1_RK1                         _L_(1)       /**< SSC1 signal line function value: SSC1_RK1 */
#define PIO_PA18B_SSC1_RK1                         (_U_(1) << 18) /**< SSC1 signal: SSC1_RK1 */
#define PIN_PB18C_SSC1_RK1                         _L_(50)      /**< SSC1 signal: SSC1_RK1 on PB18 mux C */
#define MUX_PB18C_SSC1_RK1                         _L_(2)       /**< SSC1 signal line function value: SSC1_RK1 */
#define PIO_PB18C_SSC1_RK1                         (_U_(1) << 18) /**< SSC1 signal: SSC1_RK1 */
#define PIN_PA16B_SSC1_TD1                         _L_(16)      /**< SSC1 signal: SSC1_TD1 on PA16 mux B */
#define MUX_PA16B_SSC1_TD1                         _L_(1)       /**< SSC1 signal line function value: SSC1_TD1 */
#define PIO_PA16B_SSC1_TD1                         (_U_(1) << 16) /**< SSC1 signal: SSC1_TD1 */
#define PIN_PB16C_SSC1_TD1                         _L_(48)      /**< SSC1 signal: SSC1_TD1 on PB16 mux C */
#define MUX_PB16C_SSC1_TD1                         _L_(2)       /**< SSC1 signal line function value: SSC1_TD1 */
#define PIO_PB16C_SSC1_TD1                         (_U_(1) << 16) /**< SSC1 signal: SSC1_TD1 */
#define PIN_PA15B_SSC1_TF1                         _L_(15)      /**< SSC1 signal: SSC1_TF1 on PA15 mux B */
#define MUX_PA15B_SSC1_TF1                         _L_(1)       /**< SSC1 signal line function value: SSC1_TF1 */
#define PIO_PA15B_SSC1_TF1                         (_U_(1) << 15) /**< SSC1 signal: SSC1_TF1 */
#define PIN_PB15C_SSC1_TF1                         _L_(47)      /**< SSC1 signal: SSC1_TF1 on PB15 mux C */
#define MUX_PB15C_SSC1_TF1                         _L_(2)       /**< SSC1 signal line function value: SSC1_TF1 */
#define PIO_PB15C_SSC1_TF1                         (_U_(1) << 15) /**< SSC1 signal: SSC1_TF1 */
#define PIN_PA14B_SSC1_TK1                         _L_(14)      /**< SSC1 signal: SSC1_TK1 on PA14 mux B */
#define MUX_PA14B_SSC1_TK1                         _L_(1)       /**< SSC1 signal line function value: SSC1_TK1 */
#define PIO_PA14B_SSC1_TK1                         (_U_(1) << 14) /**< SSC1 signal: SSC1_TK1 */
#define PIN_PB14C_SSC1_TK1                         _L_(46)      /**< SSC1 signal: SSC1_TK1 on PB14 mux C */
#define MUX_PB14C_SSC1_TK1                         _L_(2)       /**< SSC1 signal line function value: SSC1_TK1 */
#define PIO_PB14C_SSC1_TK1                         (_U_(1) << 14) /**< SSC1 signal: SSC1_TK1 */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PA21D_TC0_TCLK0                        _L_(21)      /**< TC0 signal: TC0_TCLK0 on PA21 mux D */
#define MUX_PA21D_TC0_TCLK0                        _L_(3)       /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PA21D_TC0_TCLK0                        (_U_(1) << 21) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PA29A_TC0_TCLK1                        _L_(29)      /**< TC0 signal: TC0_TCLK1 on PA29 mux A */
#define MUX_PA29A_TC0_TCLK1                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PA29A_TC0_TCLK1                        (_U_(1) << 29) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PC5C_TC0_TCLK1                         _L_(69)      /**< TC0 signal: TC0_TCLK1 on PC5 mux C */
#define MUX_PC5C_TC0_TCLK1                         _L_(2)       /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PC5C_TC0_TCLK1                         (_U_(1) << 5) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PD13A_TC0_TCLK1                        _L_(109)     /**< TC0 signal: TC0_TCLK1 on PD13 mux A */
#define MUX_PD13A_TC0_TCLK1                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PD13A_TC0_TCLK1                        (_U_(1) << 13) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PB5A_TC0_TCLK2                         _L_(37)      /**< TC0 signal: TC0_TCLK2 on PB5 mux A */
#define MUX_PB5A_TC0_TCLK2                         _L_(0)       /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PB5A_TC0_TCLK2                         (_U_(1) << 5) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PB24D_TC0_TCLK2                        _L_(56)      /**< TC0 signal: TC0_TCLK2 on PB24 mux D */
#define MUX_PB24D_TC0_TCLK2                        _L_(3)       /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PB24D_TC0_TCLK2                        (_U_(1) << 24) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PD22A_TC0_TCLK2                        _L_(118)     /**< TC0 signal: TC0_TCLK2 on PD22 mux A */
#define MUX_PD22A_TC0_TCLK2                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PD22A_TC0_TCLK2                        (_U_(1) << 22) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PA19D_TC0_TIOA0                        _L_(19)      /**< TC0 signal: TC0_TIOA0 on PA19 mux D */
#define MUX_PA19D_TC0_TIOA0                        _L_(3)       /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA19D_TC0_TIOA0                        (_U_(1) << 19) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PA27A_TC0_TIOA1                        _L_(27)      /**< TC0 signal: TC0_TIOA1 on PA27 mux A */
#define MUX_PA27A_TC0_TIOA1                        _L_(0)       /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PA27A_TC0_TIOA1                        (_U_(1) << 27) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PC3C_TC0_TIOA1                         _L_(67)      /**< TC0 signal: TC0_TIOA1 on PC3 mux C */
#define MUX_PC3C_TC0_TIOA1                         _L_(2)       /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PC3C_TC0_TIOA1                         (_U_(1) << 3) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PD11A_TC0_TIOA1                        _L_(107)     /**< TC0 signal: TC0_TIOA1 on PD11 mux A */
#define MUX_PD11A_TC0_TIOA1                        _L_(0)       /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PD11A_TC0_TIOA1                        (_U_(1) << 11) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PB6A_TC0_TIOA2                         _L_(38)      /**< TC0 signal: TC0_TIOA2 on PB6 mux A */
#define MUX_PB6A_TC0_TIOA2                         _L_(0)       /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PB6A_TC0_TIOA2                         (_U_(1) << 6) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PB22D_TC0_TIOA2                        _L_(54)      /**< TC0 signal: TC0_TIOA2 on PB22 mux D */
#define MUX_PB22D_TC0_TIOA2                        _L_(3)       /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PB22D_TC0_TIOA2                        (_U_(1) << 22) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PD20A_TC0_TIOA2                        _L_(116)     /**< TC0 signal: TC0_TIOA2 on PD20 mux A */
#define MUX_PD20A_TC0_TIOA2                        _L_(0)       /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PD20A_TC0_TIOA2                        (_U_(1) << 20) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PA20D_TC0_TIOB0                        _L_(20)      /**< TC0 signal: TC0_TIOB0 on PA20 mux D */
#define MUX_PA20D_TC0_TIOB0                        _L_(3)       /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA20D_TC0_TIOB0                        (_U_(1) << 20) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PA28A_TC0_TIOB1                        _L_(28)      /**< TC0 signal: TC0_TIOB1 on PA28 mux A */
#define MUX_PA28A_TC0_TIOB1                        _L_(0)       /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PA28A_TC0_TIOB1                        (_U_(1) << 28) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PC4C_TC0_TIOB1                         _L_(68)      /**< TC0 signal: TC0_TIOB1 on PC4 mux C */
#define MUX_PC4C_TC0_TIOB1                         _L_(2)       /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PC4C_TC0_TIOB1                         (_U_(1) << 4) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PD12A_TC0_TIOB1                        _L_(108)     /**< TC0 signal: TC0_TIOB1 on PD12 mux A */
#define MUX_PD12A_TC0_TIOB1                        _L_(0)       /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PD12A_TC0_TIOB1                        (_U_(1) << 12) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PB7A_TC0_TIOB2                         _L_(39)      /**< TC0 signal: TC0_TIOB2 on PB7 mux A */
#define MUX_PB7A_TC0_TIOB2                         _L_(0)       /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PB7A_TC0_TIOB2                         (_U_(1) << 7) /**< TC0 signal: TC0_TIOB2 */
#define PIN_PB23D_TC0_TIOB2                        _L_(55)      /**< TC0 signal: TC0_TIOB2 on PB23 mux D */
#define MUX_PB23D_TC0_TIOB2                        _L_(3)       /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PB23D_TC0_TIOB2                        (_U_(1) << 23) /**< TC0 signal: TC0_TIOB2 */
#define PIN_PD21A_TC0_TIOB2                        _L_(117)     /**< TC0 signal: TC0_TIOB2 on PD21 mux A */
#define MUX_PD21A_TC0_TIOB2                        _L_(0)       /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PD21A_TC0_TIOB2                        (_U_(1) << 21) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TC1 peripheral ========== */
#define PIN_PB8A_TC1_TCLK3                         _L_(40)      /**< TC1 signal: TC1_TCLK3 on PB8 mux A */
#define MUX_PB8A_TC1_TCLK3                         _L_(0)       /**< TC1 signal line function value: TC1_TCLK3 */
#define PIO_PB8A_TC1_TCLK3                         (_U_(1) << 8) /**< TC1 signal: TC1_TCLK3 */
#define PIN_PB21D_TC1_TCLK3                        _L_(53)      /**< TC1 signal: TC1_TCLK3 on PB21 mux D */
#define MUX_PB21D_TC1_TCLK3                        _L_(3)       /**< TC1 signal line function value: TC1_TCLK3 */
#define PIO_PB21D_TC1_TCLK3                        (_U_(1) << 21) /**< TC1 signal: TC1_TCLK3 */
#define PIN_PD31D_TC1_TCLK3                        _L_(127)     /**< TC1 signal: TC1_TCLK3 on PD31 mux D */
#define MUX_PD31D_TC1_TCLK3                        _L_(3)       /**< TC1 signal line function value: TC1_TCLK3 */
#define PIO_PD31D_TC1_TCLK3                        (_U_(1) << 31) /**< TC1 signal: TC1_TCLK3 */
#define PIN_PA11D_TC1_TCLK4                        _L_(11)      /**< TC1 signal: TC1_TCLK4 on PA11 mux D */
#define MUX_PA11D_TC1_TCLK4                        _L_(3)       /**< TC1 signal line function value: TC1_TCLK4 */
#define PIO_PA11D_TC1_TCLK4                        (_U_(1) << 11) /**< TC1 signal: TC1_TCLK4 */
#define PIN_PC11D_TC1_TCLK4                        _L_(75)      /**< TC1 signal: TC1_TCLK4 on PC11 mux D */
#define MUX_PC11D_TC1_TCLK4                        _L_(3)       /**< TC1 signal line function value: TC1_TCLK4 */
#define PIO_PC11D_TC1_TCLK4                        (_U_(1) << 11) /**< TC1 signal: TC1_TCLK4 */
#define PIN_PA8D_TC1_TCLK5                         _L_(8)       /**< TC1 signal: TC1_TCLK5 on PA8 mux D */
#define MUX_PA8D_TC1_TCLK5                         _L_(3)       /**< TC1 signal line function value: TC1_TCLK5 */
#define PIO_PA8D_TC1_TCLK5                         (_U_(1) << 8) /**< TC1 signal: TC1_TCLK5 */
#define PIN_PB30D_TC1_TCLK5                        _L_(62)      /**< TC1 signal: TC1_TCLK5 on PB30 mux D */
#define MUX_PB30D_TC1_TCLK5                        _L_(3)       /**< TC1 signal line function value: TC1_TCLK5 */
#define PIO_PB30D_TC1_TCLK5                        (_U_(1) << 30) /**< TC1 signal: TC1_TCLK5 */
#define PIN_PB9A_TC1_TIOA3                         _L_(41)      /**< TC1 signal: TC1_TIOA3 on PB9 mux A */
#define MUX_PB9A_TC1_TIOA3                         _L_(0)       /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PB9A_TC1_TIOA3                         (_U_(1) << 9) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PB19D_TC1_TIOA3                        _L_(51)      /**< TC1 signal: TC1_TIOA3 on PB19 mux D */
#define MUX_PB19D_TC1_TIOA3                        _L_(3)       /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PB19D_TC1_TIOA3                        (_U_(1) << 19) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PD29D_TC1_TIOA3                        _L_(125)     /**< TC1 signal: TC1_TIOA3 on PD29 mux D */
#define MUX_PD29D_TC1_TIOA3                        _L_(3)       /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PD29D_TC1_TIOA3                        (_U_(1) << 29) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PA9D_TC1_TIOA4                         _L_(9)       /**< TC1 signal: TC1_TIOA4 on PA9 mux D */
#define MUX_PA9D_TC1_TIOA4                         _L_(3)       /**< TC1 signal line function value: TC1_TIOA4 */
#define PIO_PA9D_TC1_TIOA4                         (_U_(1) << 9) /**< TC1 signal: TC1_TIOA4 */
#define PIN_PC9D_TC1_TIOA4                         _L_(73)      /**< TC1 signal: TC1_TIOA4 on PC9 mux D */
#define MUX_PC9D_TC1_TIOA4                         _L_(3)       /**< TC1 signal line function value: TC1_TIOA4 */
#define PIO_PC9D_TC1_TIOA4                         (_U_(1) << 9) /**< TC1 signal: TC1_TIOA4 */
#define PIN_PA6D_TC1_TIOA5                         _L_(6)       /**< TC1 signal: TC1_TIOA5 on PA6 mux D */
#define MUX_PA6D_TC1_TIOA5                         _L_(3)       /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PA6D_TC1_TIOA5                         (_U_(1) << 6) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PB28D_TC1_TIOA5                        _L_(60)      /**< TC1 signal: TC1_TIOA5 on PB28 mux D */
#define MUX_PB28D_TC1_TIOA5                        _L_(3)       /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PB28D_TC1_TIOA5                        (_U_(1) << 28) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PB10A_TC1_TIOB3                        _L_(42)      /**< TC1 signal: TC1_TIOB3 on PB10 mux A */
#define MUX_PB10A_TC1_TIOB3                        _L_(0)       /**< TC1 signal line function value: TC1_TIOB3 */
#define PIO_PB10A_TC1_TIOB3                        (_U_(1) << 10) /**< TC1 signal: TC1_TIOB3 */
#define PIN_PB20D_TC1_TIOB3                        _L_(52)      /**< TC1 signal: TC1_TIOB3 on PB20 mux D */
#define MUX_PB20D_TC1_TIOB3                        _L_(3)       /**< TC1 signal line function value: TC1_TIOB3 */
#define PIO_PB20D_TC1_TIOB3                        (_U_(1) << 20) /**< TC1 signal: TC1_TIOB3 */
#define PIN_PD30D_TC1_TIOB3                        _L_(126)     /**< TC1 signal: TC1_TIOB3 on PD30 mux D */
#define MUX_PD30D_TC1_TIOB3                        _L_(3)       /**< TC1 signal line function value: TC1_TIOB3 */
#define PIO_PD30D_TC1_TIOB3                        (_U_(1) << 30) /**< TC1 signal: TC1_TIOB3 */
#define PIN_PA10D_TC1_TIOB4                        _L_(10)      /**< TC1 signal: TC1_TIOB4 on PA10 mux D */
#define MUX_PA10D_TC1_TIOB4                        _L_(3)       /**< TC1 signal line function value: TC1_TIOB4 */
#define PIO_PA10D_TC1_TIOB4                        (_U_(1) << 10) /**< TC1 signal: TC1_TIOB4 */
#define PIN_PC10D_TC1_TIOB4                        _L_(74)      /**< TC1 signal: TC1_TIOB4 on PC10 mux D */
#define MUX_PC10D_TC1_TIOB4                        _L_(3)       /**< TC1 signal line function value: TC1_TIOB4 */
#define PIO_PC10D_TC1_TIOB4                        (_U_(1) << 10) /**< TC1 signal: TC1_TIOB4 */
#define PIN_PA7D_TC1_TIOB5                         _L_(7)       /**< TC1 signal: TC1_TIOB5 on PA7 mux D */
#define MUX_PA7D_TC1_TIOB5                         _L_(3)       /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PA7D_TC1_TIOB5                         (_U_(1) << 7) /**< TC1 signal: TC1_TIOB5 */
#define PIN_PB29D_TC1_TIOB5                        _L_(61)      /**< TC1 signal: TC1_TIOB5 on PB29 mux D */
#define MUX_PB29D_TC1_TIOB5                        _L_(3)       /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PB29D_TC1_TIOB5                        (_U_(1) << 29) /**< TC1 signal: TC1_TIOB5 */
/* ========== PIO definition for TWIHS0 peripheral ========== */
#define PIN_PC0D_TWIHS0_TWCK0                      _L_(64)      /**< TWIHS0 signal: TWIHS0_TWCK0 on PC0 mux D */
#define MUX_PC0D_TWIHS0_TWCK0                      _L_(3)       /**< TWIHS0 signal line function value: TWIHS0_TWCK0 */
#define PIO_PC0D_TWIHS0_TWCK0                      (_U_(1) << 0) /**< TWIHS0 signal: TWIHS0_TWCK0 */
#define PIN_PC28E_TWIHS0_TWCK0                     _L_(92)      /**< TWIHS0 signal: TWIHS0_TWCK0 on PC28 mux E */
#define MUX_PC28E_TWIHS0_TWCK0                     _L_(4)       /**< TWIHS0 signal line function value: TWIHS0_TWCK0 */
#define PIO_PC28E_TWIHS0_TWCK0                     (_U_(1) << 28) /**< TWIHS0 signal: TWIHS0_TWCK0 */
#define PIN_PD22B_TWIHS0_TWCK0                     _L_(118)     /**< TWIHS0 signal: TWIHS0_TWCK0 on PD22 mux B */
#define MUX_PD22B_TWIHS0_TWCK0                     _L_(1)       /**< TWIHS0 signal line function value: TWIHS0_TWCK0 */
#define PIO_PD22B_TWIHS0_TWCK0                     (_U_(1) << 22) /**< TWIHS0 signal: TWIHS0_TWCK0 */
#define PIN_PD30E_TWIHS0_TWCK0                     _L_(126)     /**< TWIHS0 signal: TWIHS0_TWCK0 on PD30 mux E */
#define MUX_PD30E_TWIHS0_TWCK0                     _L_(4)       /**< TWIHS0 signal line function value: TWIHS0_TWCK0 */
#define PIO_PD30E_TWIHS0_TWCK0                     (_U_(1) << 30) /**< TWIHS0 signal: TWIHS0_TWCK0 */
#define PIN_PB31D_TWIHS0_TWD0                      _L_(63)      /**< TWIHS0 signal: TWIHS0_TWD0 on PB31 mux D */
#define MUX_PB31D_TWIHS0_TWD0                      _L_(3)       /**< TWIHS0 signal line function value: TWIHS0_TWD0 */
#define PIO_PB31D_TWIHS0_TWD0                      (_U_(1) << 31) /**< TWIHS0 signal: TWIHS0_TWD0 */
#define PIN_PC27E_TWIHS0_TWD0                      _L_(91)      /**< TWIHS0 signal: TWIHS0_TWD0 on PC27 mux E */
#define MUX_PC27E_TWIHS0_TWD0                      _L_(4)       /**< TWIHS0 signal line function value: TWIHS0_TWD0 */
#define PIO_PC27E_TWIHS0_TWD0                      (_U_(1) << 27) /**< TWIHS0 signal: TWIHS0_TWD0 */
#define PIN_PD21B_TWIHS0_TWD0                      _L_(117)     /**< TWIHS0 signal: TWIHS0_TWD0 on PD21 mux B */
#define MUX_PD21B_TWIHS0_TWD0                      _L_(1)       /**< TWIHS0 signal line function value: TWIHS0_TWD0 */
#define PIO_PD21B_TWIHS0_TWD0                      (_U_(1) << 21) /**< TWIHS0 signal: TWIHS0_TWD0 */
#define PIN_PD29E_TWIHS0_TWD0                      _L_(125)     /**< TWIHS0 signal: TWIHS0_TWD0 on PD29 mux E */
#define MUX_PD29E_TWIHS0_TWD0                      _L_(4)       /**< TWIHS0 signal line function value: TWIHS0_TWD0 */
#define PIO_PD29E_TWIHS0_TWD0                      (_U_(1) << 29) /**< TWIHS0 signal: TWIHS0_TWD0 */
/* ========== PIO definition for TWIHS1 peripheral ========== */
#define PIN_PC7C_TWIHS1_TWCK1                      _L_(71)      /**< TWIHS1 signal: TWIHS1_TWCK1 on PC7 mux C */
#define MUX_PC7C_TWIHS1_TWCK1                      _L_(2)       /**< TWIHS1 signal line function value: TWIHS1_TWCK1 */
#define PIO_PC7C_TWIHS1_TWCK1                      (_U_(1) << 7) /**< TWIHS1 signal: TWIHS1_TWCK1 */
#define PIN_PD5A_TWIHS1_TWCK1                      _L_(101)     /**< TWIHS1 signal: TWIHS1_TWCK1 on PD5 mux A */
#define MUX_PD5A_TWIHS1_TWCK1                      _L_(0)       /**< TWIHS1 signal line function value: TWIHS1_TWCK1 */
#define PIO_PD5A_TWIHS1_TWCK1                      (_U_(1) << 5) /**< TWIHS1 signal: TWIHS1_TWCK1 */
#define PIN_PD20B_TWIHS1_TWCK1                     _L_(116)     /**< TWIHS1 signal: TWIHS1_TWCK1 on PD20 mux B */
#define MUX_PD20B_TWIHS1_TWCK1                     _L_(1)       /**< TWIHS1 signal line function value: TWIHS1_TWCK1 */
#define PIO_PD20B_TWIHS1_TWCK1                     (_U_(1) << 20) /**< TWIHS1 signal: TWIHS1_TWCK1 */
#define PIN_PC6C_TWIHS1_TWD1                       _L_(70)      /**< TWIHS1 signal: TWIHS1_TWD1 on PC6 mux C */
#define MUX_PC6C_TWIHS1_TWD1                       _L_(2)       /**< TWIHS1 signal line function value: TWIHS1_TWD1 */
#define PIO_PC6C_TWIHS1_TWD1                       (_U_(1) << 6) /**< TWIHS1 signal: TWIHS1_TWD1 */
#define PIN_PD4A_TWIHS1_TWD1                       _L_(100)     /**< TWIHS1 signal: TWIHS1_TWD1 on PD4 mux A */
#define MUX_PD4A_TWIHS1_TWD1                       _L_(0)       /**< TWIHS1 signal line function value: TWIHS1_TWD1 */
#define PIO_PD4A_TWIHS1_TWD1                       (_U_(1) << 4) /**< TWIHS1 signal: TWIHS1_TWD1 */
#define PIN_PD19B_TWIHS1_TWD1                      _L_(115)     /**< TWIHS1 signal: TWIHS1_TWD1 on PD19 mux B */
#define MUX_PD19B_TWIHS1_TWD1                      _L_(1)       /**< TWIHS1 signal line function value: TWIHS1_TWD1 */
#define PIO_PD19B_TWIHS1_TWD1                      (_U_(1) << 19) /**< TWIHS1 signal: TWIHS1_TWD1 */
/* ========== PIO definition for UART0 peripheral ========== */
#define PIN_PB26C_UART0_URXD0                      _L_(58)      /**< UART0 signal: UART0_URXD0 on PB26 mux C */
#define MUX_PB26C_UART0_URXD0                      _L_(2)       /**< UART0 signal line function value: UART0_URXD0 */
#define PIO_PB26C_UART0_URXD0                      (_U_(1) << 26) /**< UART0 signal: UART0_URXD0 */
#define PIN_PB27C_UART0_UTXD0                      _L_(59)      /**< UART0 signal: UART0_UTXD0 on PB27 mux C */
#define MUX_PB27C_UART0_UTXD0                      _L_(2)       /**< UART0 signal line function value: UART0_UTXD0 */
#define PIO_PB27C_UART0_UTXD0                      (_U_(1) << 27) /**< UART0 signal: UART0_UTXD0 */
/* ========== PIO definition for UART1 peripheral ========== */
#define PIN_PC7E_UART1_URXD1                       _L_(71)      /**< UART1 signal: UART1_URXD1 on PC7 mux E */
#define MUX_PC7E_UART1_URXD1                       _L_(4)       /**< UART1 signal line function value: UART1_URXD1 */
#define PIO_PC7E_UART1_URXD1                       (_U_(1) << 7) /**< UART1 signal: UART1_URXD1 */
#define PIN_PD2A_UART1_URXD1                       _L_(98)      /**< UART1 signal: UART1_URXD1 on PD2 mux A */
#define MUX_PD2A_UART1_URXD1                       _L_(0)       /**< UART1 signal line function value: UART1_URXD1 */
#define PIO_PD2A_UART1_URXD1                       (_U_(1) << 2) /**< UART1 signal: UART1_URXD1 */
#define PIN_PC8E_UART1_UTXD1                       _L_(72)      /**< UART1 signal: UART1_UTXD1 on PC8 mux E */
#define MUX_PC8E_UART1_UTXD1                       _L_(4)       /**< UART1 signal line function value: UART1_UTXD1 */
#define PIO_PC8E_UART1_UTXD1                       (_U_(1) << 8) /**< UART1 signal: UART1_UTXD1 */
#define PIN_PD3A_UART1_UTXD1                       _L_(99)      /**< UART1 signal: UART1_UTXD1 on PD3 mux A */
#define MUX_PD3A_UART1_UTXD1                       _L_(0)       /**< UART1 signal line function value: UART1_UTXD1 */
#define PIO_PD3A_UART1_UTXD1                       (_U_(1) << 3) /**< UART1 signal: UART1_UTXD1 */
/* ========== PIO definition for UART2 peripheral ========== */
#define PIN_PD4B_UART2_URXD2                       _L_(100)     /**< UART2 signal: UART2_URXD2 on PD4 mux B */
#define MUX_PD4B_UART2_URXD2                       _L_(1)       /**< UART2 signal line function value: UART2_URXD2 */
#define PIO_PD4B_UART2_URXD2                       (_U_(1) << 4) /**< UART2 signal: UART2_URXD2 */
#define PIN_PD19C_UART2_URXD2                      _L_(115)     /**< UART2 signal: UART2_URXD2 on PD19 mux C */
#define MUX_PD19C_UART2_URXD2                      _L_(2)       /**< UART2 signal line function value: UART2_URXD2 */
#define PIO_PD19C_UART2_URXD2                      (_U_(1) << 19) /**< UART2 signal: UART2_URXD2 */
#define PIN_PD23A_UART2_URXD2                      _L_(119)     /**< UART2 signal: UART2_URXD2 on PD23 mux A */
#define MUX_PD23A_UART2_URXD2                      _L_(0)       /**< UART2 signal line function value: UART2_URXD2 */
#define PIO_PD23A_UART2_URXD2                      (_U_(1) << 23) /**< UART2 signal: UART2_URXD2 */
#define PIN_PD5B_UART2_UTXD2                       _L_(101)     /**< UART2 signal: UART2_UTXD2 on PD5 mux B */
#define MUX_PD5B_UART2_UTXD2                       _L_(1)       /**< UART2 signal line function value: UART2_UTXD2 */
#define PIO_PD5B_UART2_UTXD2                       (_U_(1) << 5) /**< UART2 signal: UART2_UTXD2 */
#define PIN_PD20C_UART2_UTXD2                      _L_(116)     /**< UART2 signal: UART2_UTXD2 on PD20 mux C */
#define MUX_PD20C_UART2_UTXD2                      _L_(2)       /**< UART2 signal line function value: UART2_UTXD2 */
#define PIO_PD20C_UART2_UTXD2                      (_U_(1) << 20) /**< UART2 signal: UART2_UTXD2 */
#define PIN_PD24A_UART2_UTXD2                      _L_(120)     /**< UART2 signal: UART2_UTXD2 on PD24 mux A */
#define MUX_PD24A_UART2_UTXD2                      _L_(0)       /**< UART2 signal line function value: UART2_UTXD2 */
#define PIO_PD24A_UART2_UTXD2                      (_U_(1) << 24) /**< UART2 signal: UART2_UTXD2 */
/* ========== PIO definition for UART3 peripheral ========== */
#define PIN_PB11C_UART3_URXD3                      _L_(43)      /**< UART3 signal: UART3_URXD3 on PB11 mux C */
#define MUX_PB11C_UART3_URXD3                      _L_(2)       /**< UART3 signal line function value: UART3_URXD3 */
#define PIO_PB11C_UART3_URXD3                      (_U_(1) << 11) /**< UART3 signal: UART3_URXD3 */
#define PIN_PC12D_UART3_URXD3                      _L_(76)      /**< UART3 signal: UART3_URXD3 on PC12 mux D */
#define MUX_PC12D_UART3_URXD3                      _L_(3)       /**< UART3 signal line function value: UART3_URXD3 */
#define PIO_PC12D_UART3_URXD3                      (_U_(1) << 12) /**< UART3 signal: UART3_URXD3 */
#define PIN_PC31C_UART3_URXD3                      _L_(95)      /**< UART3 signal: UART3_URXD3 on PC31 mux C */
#define MUX_PC31C_UART3_URXD3                      _L_(2)       /**< UART3 signal line function value: UART3_URXD3 */
#define PIO_PC31C_UART3_URXD3                      (_U_(1) << 31) /**< UART3 signal: UART3_URXD3 */
#define PIN_PB12C_UART3_UTXD3                      _L_(44)      /**< UART3 signal: UART3_UTXD3 on PB12 mux C */
#define MUX_PB12C_UART3_UTXD3                      _L_(2)       /**< UART3 signal line function value: UART3_UTXD3 */
#define PIO_PB12C_UART3_UTXD3                      (_U_(1) << 12) /**< UART3 signal: UART3_UTXD3 */
#define PIN_PC13D_UART3_UTXD3                      _L_(77)      /**< UART3 signal: UART3_UTXD3 on PC13 mux D */
#define MUX_PC13D_UART3_UTXD3                      _L_(3)       /**< UART3 signal line function value: UART3_UTXD3 */
#define PIO_PC13D_UART3_UTXD3                      (_U_(1) << 13) /**< UART3 signal: UART3_UTXD3 */
#define PIN_PD0C_UART3_UTXD3                       _L_(96)      /**< UART3 signal: UART3_UTXD3 on PD0 mux C */
#define MUX_PD0C_UART3_UTXD3                       _L_(2)       /**< UART3 signal line function value: UART3_UTXD3 */
#define PIO_PD0C_UART3_UTXD3                       (_U_(1) << 0) /**< UART3 signal: UART3_UTXD3 */
/* ========== PIO definition for UART4 peripheral ========== */
#define PIN_PB3A_UART4_URXD4                       _L_(35)      /**< UART4 signal: UART4_URXD4 on PB3 mux A */
#define MUX_PB3A_UART4_URXD4                       _L_(0)       /**< UART4 signal line function value: UART4_URXD4 */
#define PIO_PB3A_UART4_URXD4                       (_U_(1) << 3) /**< UART4 signal: UART4_URXD4 */
#define PIN_PB4A_UART4_UTXD4                       _L_(36)      /**< UART4 signal: UART4_UTXD4 on PB4 mux A */
#define MUX_PB4A_UART4_UTXD4                       _L_(0)       /**< UART4 signal line function value: UART4_UTXD4 */
#define PIO_PB4A_UART4_UTXD4                       (_U_(1) << 4) /**< UART4 signal: UART4_UTXD4 */

#endif /* _SAMA5D27_GPIO_H_ */

