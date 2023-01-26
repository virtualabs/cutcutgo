/*
 * Peripheral I/O description for SAMA7G54
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
#ifndef _SAMA7G54_GPIO_H_
#define _SAMA7G54_GPIO_H_

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
#define PIN_PE0                     (128  )  /**< Pin Number for PE0 */
#define PIN_PE1                     (129  )  /**< Pin Number for PE1 */
#define PIN_PE2                     (130  )  /**< Pin Number for PE2 */
#define PIN_PE3                     (131  )  /**< Pin Number for PE3 */
#define PIN_PE4                     (132  )  /**< Pin Number for PE4 */
#define PIN_PE5                     (133  )  /**< Pin Number for PE5 */
#define PIN_PE6                     (134  )  /**< Pin Number for PE6 */
#define PIN_PE7                     (135  )  /**< Pin Number for PE7 */

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
#define PIO_PE0                     (_U_(1) << 0)   /**< PIO mask for PE0 */
#define PIO_PE1                     (_U_(1) << 1)   /**< PIO mask for PE1 */
#define PIO_PE2                     (_U_(1) << 2)   /**< PIO mask for PE2 */
#define PIO_PE3                     (_U_(1) << 3)   /**< PIO mask for PE3 */
#define PIO_PE4                     (_U_(1) << 4)   /**< PIO mask for PE4 */
#define PIO_PE5                     (_U_(1) << 5)   /**< PIO mask for PE5 */
#define PIO_PE6                     (_U_(1) << 6)   /**< PIO mask for PE6 */
#define PIO_PE7                     (_U_(1) << 7)   /**< PIO mask for PE7 */

/* ========== PIO definition for ACC peripheral ========== */
#define PIN_PC7X1_ACC_INN1                         _L_(71)      /**< ACC signal: ACC_INN1 on PC7 mux X1 */
#define PIO_PC7X1_ACC_INN1                         (_U_(1) << 7) /**< ACC signal: ACC_INN1 */
#define PIN_PC9X1_ACC_INN2                         _L_(73)      /**< ACC signal: ACC_INN2 on PC9 mux X1 */
#define PIO_PC9X1_ACC_INN2                         (_U_(1) << 9) /**< ACC signal: ACC_INN2 */
#define PIN_PC11X1_ACC_INN3                        _L_(75)      /**< ACC signal: ACC_INN3 on PC11 mux X1 */
#define PIO_PC11X1_ACC_INN3                        (_U_(1) << 11) /**< ACC signal: ACC_INN3 */
#define PIN_PC6X1_ACC_INP0                         _L_(70)      /**< ACC signal: ACC_INP0 on PC6 mux X1 */
#define PIO_PC6X1_ACC_INP0                         (_U_(1) << 6) /**< ACC signal: ACC_INP0 */
#define PIN_PC8X1_ACC_INP1                         _L_(72)      /**< ACC signal: ACC_INP1 on PC8 mux X1 */
#define PIO_PC8X1_ACC_INP1                         (_U_(1) << 8) /**< ACC signal: ACC_INP1 */
#define PIN_PC10X1_ACC_INP2                        _L_(74)      /**< ACC signal: ACC_INP2 on PC10 mux X1 */
#define PIO_PC10X1_ACC_INP2                        (_U_(1) << 10) /**< ACC signal: ACC_INP2 */
#define PIN_PC12X1_ACC_INP3                        _L_(76)      /**< ACC signal: ACC_INP3 on PC12 mux X1 */
#define PIO_PC12X1_ACC_INP3                        (_U_(1) << 12) /**< ACC signal: ACC_INP3 */
/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PC13X1_ADC_AD0                         _L_(77)      /**< ADC signal: ADC_AD0 on PC13 mux X1 */
#define PIO_PC13X1_ADC_AD0                         (_U_(1) << 13) /**< ADC signal: ADC_AD0 */
#define PIN_PC14X1_ADC_AD1                         _L_(78)      /**< ADC signal: ADC_AD1 on PC14 mux X1 */
#define PIO_PC14X1_ADC_AD1                         (_U_(1) << 14) /**< ADC signal: ADC_AD1 */
#define PIN_PC15X1_ADC_AD2                         _L_(79)      /**< ADC signal: ADC_AD2 on PC15 mux X1 */
#define PIO_PC15X1_ADC_AD2                         (_U_(1) << 15) /**< ADC signal: ADC_AD2 */
#define PIN_PC16X1_ADC_AD3                         _L_(80)      /**< ADC signal: ADC_AD3 on PC16 mux X1 */
#define PIO_PC16X1_ADC_AD3                         (_U_(1) << 16) /**< ADC signal: ADC_AD3 */
#define PIN_PC17X1_ADC_AD4                         _L_(81)      /**< ADC signal: ADC_AD4 on PC17 mux X1 */
#define PIO_PC17X1_ADC_AD4                         (_U_(1) << 17) /**< ADC signal: ADC_AD4 */
#define PIN_PC18X1_ADC_AD5                         _L_(82)      /**< ADC signal: ADC_AD5 on PC18 mux X1 */
#define PIO_PC18X1_ADC_AD5                         (_U_(1) << 18) /**< ADC signal: ADC_AD5 */
#define PIN_PC19X1_ADC_AD6                         _L_(83)      /**< ADC signal: ADC_AD6 on PC19 mux X1 */
#define PIO_PC19X1_ADC_AD6                         (_U_(1) << 19) /**< ADC signal: ADC_AD6 */
#define PIN_PC20X1_ADC_AD7                         _L_(84)      /**< ADC signal: ADC_AD7 on PC20 mux X1 */
#define PIO_PC20X1_ADC_AD7                         (_U_(1) << 20) /**< ADC signal: ADC_AD7 */
#define PIN_PC21X1_ADC_AD8                         _L_(85)      /**< ADC signal: ADC_AD8 on PC21 mux X1 */
#define PIO_PC21X1_ADC_AD8                         (_U_(1) << 21) /**< ADC signal: ADC_AD8 */
#define PIN_PC22X1_ADC_AD9                         _L_(86)      /**< ADC signal: ADC_AD9 on PC22 mux X1 */
#define PIO_PC22X1_ADC_AD9                         (_U_(1) << 22) /**< ADC signal: ADC_AD9 */
#define PIN_PC23X1_ADC_AD10                        _L_(87)      /**< ADC signal: ADC_AD10 on PC23 mux X1 */
#define PIO_PC23X1_ADC_AD10                        (_U_(1) << 23) /**< ADC signal: ADC_AD10 */
#define PIN_PC24X1_ADC_AD11                        _L_(88)      /**< ADC signal: ADC_AD11 on PC24 mux X1 */
#define PIO_PC24X1_ADC_AD11                        (_U_(1) << 24) /**< ADC signal: ADC_AD11 */
#define PIN_PC30X1_ADC_AD12                        _L_(94)      /**< ADC signal: ADC_AD12 on PC30 mux X1 */
#define PIO_PC30X1_ADC_AD12                        (_U_(1) << 30) /**< ADC signal: ADC_AD12 */
#define PIN_PC31X1_ADC_AD13                        _L_(95)      /**< ADC signal: ADC_AD13 on PC31 mux X1 */
#define PIO_PC31X1_ADC_AD13                        (_U_(1) << 31) /**< ADC signal: ADC_AD13 */
#define PIN_PD0X1_ADC_AD14                         _L_(96)      /**< ADC signal: ADC_AD14 on PD0 mux X1 */
#define PIO_PD0X1_ADC_AD14                         (_U_(1) << 0) /**< ADC signal: ADC_AD14 */
#define PIN_PD1X1_ADC_AD15                         _L_(97)      /**< ADC signal: ADC_AD15 on PD1 mux X1 */
#define PIO_PD1X1_ADC_AD15                         (_U_(1) << 1) /**< ADC signal: ADC_AD15 */
#define PIN_PB2C_ADC_ADTRG                         _L_(34)      /**< ADC signal: ADC_ADTRG on PB2 mux C */
#define MUX_PB2C_ADC_ADTRG                         _L_(2)       /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PB2C_ADC_ADTRG                         (_U_(1) << 2) /**< ADC signal: ADC_ADTRG */
#define PIN_PB28B_ADC_ADTRG                        _L_(60)      /**< ADC signal: ADC_ADTRG on PB28 mux B */
#define MUX_PB28B_ADC_ADTRG                        _L_(1)       /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PB28B_ADC_ADTRG                        (_U_(1) << 28) /**< ADC signal: ADC_ADTRG */
#define PIN_PD26C_ADC_ADTRG                        _L_(122)     /**< ADC signal: ADC_ADTRG on PD26 mux C */
#define MUX_PD26C_ADC_ADTRG                        _L_(2)       /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PD26C_ADC_ADTRG                        (_U_(1) << 26) /**< ADC signal: ADC_ADTRG */
/* ========== PIO definition for EBI peripheral ========== */
#define PIN_PA11D_EBI_A0                           _L_(11)      /**< EBI signal: EBI_A0 on PA11 mux D */
#define MUX_PA11D_EBI_A0                           _L_(3)       /**< EBI signal line function value: EBI_A0 */
#define PIO_PA11D_EBI_A0                           (_U_(1) << 11) /**< EBI signal: EBI_A0 */
#define PIN_PA15D_EBI_A1                           _L_(15)      /**< EBI signal: EBI_A1 on PA15 mux D */
#define MUX_PA15D_EBI_A1                           _L_(3)       /**< EBI signal line function value: EBI_A1 */
#define PIO_PA15D_EBI_A1                           (_U_(1) << 15) /**< EBI signal: EBI_A1 */
#define PIN_PA16D_EBI_A2                           _L_(16)      /**< EBI signal: EBI_A2 on PA16 mux D */
#define MUX_PA16D_EBI_A2                           _L_(3)       /**< EBI signal line function value: EBI_A2 */
#define PIO_PA16D_EBI_A2                           (_U_(1) << 16) /**< EBI signal: EBI_A2 */
#define PIN_PA17D_EBI_A3                           _L_(17)      /**< EBI signal: EBI_A3 on PA17 mux D */
#define MUX_PA17D_EBI_A3                           _L_(3)       /**< EBI signal line function value: EBI_A3 */
#define PIO_PA17D_EBI_A3                           (_U_(1) << 17) /**< EBI signal: EBI_A3 */
#define PIN_PA18D_EBI_A4                           _L_(18)      /**< EBI signal: EBI_A4 on PA18 mux D */
#define MUX_PA18D_EBI_A4                           _L_(3)       /**< EBI signal line function value: EBI_A4 */
#define PIO_PA18D_EBI_A4                           (_U_(1) << 18) /**< EBI signal: EBI_A4 */
#define PIN_PA19D_EBI_A5                           _L_(19)      /**< EBI signal: EBI_A5 on PA19 mux D */
#define MUX_PA19D_EBI_A5                           _L_(3)       /**< EBI signal line function value: EBI_A5 */
#define PIO_PA19D_EBI_A5                           (_U_(1) << 19) /**< EBI signal: EBI_A5 */
#define PIN_PA20D_EBI_A6                           _L_(20)      /**< EBI signal: EBI_A6 on PA20 mux D */
#define MUX_PA20D_EBI_A6                           _L_(3)       /**< EBI signal line function value: EBI_A6 */
#define PIO_PA20D_EBI_A6                           (_U_(1) << 20) /**< EBI signal: EBI_A6 */
#define PIN_PA21D_EBI_A7                           _L_(21)      /**< EBI signal: EBI_A7 on PA21 mux D */
#define MUX_PA21D_EBI_A7                           _L_(3)       /**< EBI signal line function value: EBI_A7 */
#define PIO_PA21D_EBI_A7                           (_U_(1) << 21) /**< EBI signal: EBI_A7 */
#define PIN_PA22D_EBI_A8                           _L_(22)      /**< EBI signal: EBI_A8 on PA22 mux D */
#define MUX_PA22D_EBI_A8                           _L_(3)       /**< EBI signal line function value: EBI_A8 */
#define PIO_PA22D_EBI_A8                           (_U_(1) << 22) /**< EBI signal: EBI_A8 */
#define PIN_PA23D_EBI_A9                           _L_(23)      /**< EBI signal: EBI_A9 on PA23 mux D */
#define MUX_PA23D_EBI_A9                           _L_(3)       /**< EBI signal line function value: EBI_A9 */
#define PIO_PA23D_EBI_A9                           (_U_(1) << 23) /**< EBI signal: EBI_A9 */
#define PIN_PA24D_EBI_A10                          _L_(24)      /**< EBI signal: EBI_A10 on PA24 mux D */
#define MUX_PA24D_EBI_A10                          _L_(3)       /**< EBI signal line function value: EBI_A10 */
#define PIO_PA24D_EBI_A10                          (_U_(1) << 24) /**< EBI signal: EBI_A10 */
#define PIN_PA25D_EBI_A11                          _L_(25)      /**< EBI signal: EBI_A11 on PA25 mux D */
#define MUX_PA25D_EBI_A11                          _L_(3)       /**< EBI signal line function value: EBI_A11 */
#define PIO_PA25D_EBI_A11                          (_U_(1) << 25) /**< EBI signal: EBI_A11 */
#define PIN_PA26D_EBI_A12                          _L_(26)      /**< EBI signal: EBI_A12 on PA26 mux D */
#define MUX_PA26D_EBI_A12                          _L_(3)       /**< EBI signal line function value: EBI_A12 */
#define PIO_PA26D_EBI_A12                          (_U_(1) << 26) /**< EBI signal: EBI_A12 */
#define PIN_PA27D_EBI_A13                          _L_(27)      /**< EBI signal: EBI_A13 on PA27 mux D */
#define MUX_PA27D_EBI_A13                          _L_(3)       /**< EBI signal line function value: EBI_A13 */
#define PIO_PA27D_EBI_A13                          (_U_(1) << 27) /**< EBI signal: EBI_A13 */
#define PIN_PA28D_EBI_A14                          _L_(28)      /**< EBI signal: EBI_A14 on PA28 mux D */
#define MUX_PA28D_EBI_A14                          _L_(3)       /**< EBI signal line function value: EBI_A14 */
#define PIO_PA28D_EBI_A14                          (_U_(1) << 28) /**< EBI signal: EBI_A14 */
#define PIN_PA29D_EBI_A15                          _L_(29)      /**< EBI signal: EBI_A15 on PA29 mux D */
#define MUX_PA29D_EBI_A15                          _L_(3)       /**< EBI signal line function value: EBI_A15 */
#define PIO_PA29D_EBI_A15                          (_U_(1) << 29) /**< EBI signal: EBI_A15 */
#define PIN_PA30D_EBI_A16                          _L_(30)      /**< EBI signal: EBI_A16 on PA30 mux D */
#define MUX_PA30D_EBI_A16                          _L_(3)       /**< EBI signal line function value: EBI_A16 */
#define PIO_PA30D_EBI_A16                          (_U_(1) << 30) /**< EBI signal: EBI_A16 */
#define PIN_PA31D_EBI_A17                          _L_(31)      /**< EBI signal: EBI_A17 on PA31 mux D */
#define MUX_PA31D_EBI_A17                          _L_(3)       /**< EBI signal line function value: EBI_A17 */
#define PIO_PA31D_EBI_A17                          (_U_(1) << 31) /**< EBI signal: EBI_A17 */
#define PIN_PB0D_EBI_A18                           _L_(32)      /**< EBI signal: EBI_A18 on PB0 mux D */
#define MUX_PB0D_EBI_A18                           _L_(3)       /**< EBI signal line function value: EBI_A18 */
#define PIO_PB0D_EBI_A18                           (_U_(1) << 0) /**< EBI signal: EBI_A18 */
#define PIN_PB1D_EBI_A19                           _L_(33)      /**< EBI signal: EBI_A19 on PB1 mux D */
#define MUX_PB1D_EBI_A19                           _L_(3)       /**< EBI signal line function value: EBI_A19 */
#define PIO_PB1D_EBI_A19                           (_U_(1) << 1) /**< EBI signal: EBI_A19 */
#define PIN_PB2D_EBI_A20                           _L_(34)      /**< EBI signal: EBI_A20 on PB2 mux D */
#define MUX_PB2D_EBI_A20                           _L_(3)       /**< EBI signal line function value: EBI_A20 */
#define PIO_PB2D_EBI_A20                           (_U_(1) << 2) /**< EBI signal: EBI_A20 */
#define PIN_PB12D_EBI_A21                          _L_(44)      /**< EBI signal: EBI_A21 on PB12 mux D */
#define MUX_PB12D_EBI_A21                          _L_(3)       /**< EBI signal line function value: EBI_A21 */
#define PIO_PB12D_EBI_A21                          (_U_(1) << 12) /**< EBI signal: EBI_A21 */
#define PIN_PD7D_EBI_A21                           _L_(103)     /**< EBI signal: EBI_A21 on PD7 mux D */
#define MUX_PD7D_EBI_A21                           _L_(3)       /**< EBI signal line function value: EBI_A21 */
#define PIO_PD7D_EBI_A21                           (_U_(1) << 7) /**< EBI signal: EBI_A21 */
#define PIN_PB13D_EBI_A22                          _L_(45)      /**< EBI signal: EBI_A22 on PB13 mux D */
#define MUX_PB13D_EBI_A22                          _L_(3)       /**< EBI signal line function value: EBI_A22 */
#define PIO_PB13D_EBI_A22                          (_U_(1) << 13) /**< EBI signal: EBI_A22 */
#define PIN_PD8D_EBI_A22                           _L_(104)     /**< EBI signal: EBI_A22 on PD8 mux D */
#define MUX_PD8D_EBI_A22                           _L_(3)       /**< EBI signal line function value: EBI_A22 */
#define PIO_PD8D_EBI_A22                           (_U_(1) << 8) /**< EBI signal: EBI_A22 */
#define PIN_PA5D_EBI_A23                           _L_(5)       /**< EBI signal: EBI_A23 on PA5 mux D */
#define MUX_PA5D_EBI_A23                           _L_(3)       /**< EBI signal line function value: EBI_A23 */
#define PIO_PA5D_EBI_A23                           (_U_(1) << 5) /**< EBI signal: EBI_A23 */
#define PIN_PA6D_EBI_A24                           _L_(6)       /**< EBI signal: EBI_A24 on PA6 mux D */
#define MUX_PA6D_EBI_A24                           _L_(3)       /**< EBI signal line function value: EBI_A24 */
#define PIO_PA6D_EBI_A24                           (_U_(1) << 6) /**< EBI signal: EBI_A24 */
#define PIN_PA14D_EBI_A25                          _L_(14)      /**< EBI signal: EBI_A25 on PA14 mux D */
#define MUX_PA14D_EBI_A25                          _L_(3)       /**< EBI signal line function value: EBI_A25 */
#define PIO_PA14D_EBI_A25                          (_U_(1) << 14) /**< EBI signal: EBI_A25 */
#define PIN_PB14D_EBI_D0                           _L_(46)      /**< EBI signal: EBI_D0 on PB14 mux D */
#define MUX_PB14D_EBI_D0                           _L_(3)       /**< EBI signal line function value: EBI_D0 */
#define PIO_PB14D_EBI_D0                           (_U_(1) << 14) /**< EBI signal: EBI_D0 */
#define PIN_PD9D_EBI_D0                            _L_(105)     /**< EBI signal: EBI_D0 on PD9 mux D */
#define MUX_PD9D_EBI_D0                            _L_(3)       /**< EBI signal line function value: EBI_D0 */
#define PIO_PD9D_EBI_D0                            (_U_(1) << 9) /**< EBI signal: EBI_D0 */
#define PIN_PB15D_EBI_D1                           _L_(47)      /**< EBI signal: EBI_D1 on PB15 mux D */
#define MUX_PB15D_EBI_D1                           _L_(3)       /**< EBI signal line function value: EBI_D1 */
#define PIO_PB15D_EBI_D1                           (_U_(1) << 15) /**< EBI signal: EBI_D1 */
#define PIN_PD10D_EBI_D1                           _L_(106)     /**< EBI signal: EBI_D1 on PD10 mux D */
#define MUX_PD10D_EBI_D1                           _L_(3)       /**< EBI signal line function value: EBI_D1 */
#define PIO_PD10D_EBI_D1                           (_U_(1) << 10) /**< EBI signal: EBI_D1 */
#define PIN_PB16D_EBI_D2                           _L_(48)      /**< EBI signal: EBI_D2 on PB16 mux D */
#define MUX_PB16D_EBI_D2                           _L_(3)       /**< EBI signal line function value: EBI_D2 */
#define PIO_PB16D_EBI_D2                           (_U_(1) << 16) /**< EBI signal: EBI_D2 */
#define PIN_PD11D_EBI_D2                           _L_(107)     /**< EBI signal: EBI_D2 on PD11 mux D */
#define MUX_PD11D_EBI_D2                           _L_(3)       /**< EBI signal line function value: EBI_D2 */
#define PIO_PD11D_EBI_D2                           (_U_(1) << 11) /**< EBI signal: EBI_D2 */
#define PIN_PB17D_EBI_D3                           _L_(49)      /**< EBI signal: EBI_D3 on PB17 mux D */
#define MUX_PB17D_EBI_D3                           _L_(3)       /**< EBI signal line function value: EBI_D3 */
#define PIO_PB17D_EBI_D3                           (_U_(1) << 17) /**< EBI signal: EBI_D3 */
#define PIN_PC21D_EBI_D3                           _L_(85)      /**< EBI signal: EBI_D3 on PC21 mux D */
#define MUX_PC21D_EBI_D3                           _L_(3)       /**< EBI signal line function value: EBI_D3 */
#define PIO_PC21D_EBI_D3                           (_U_(1) << 21) /**< EBI signal: EBI_D3 */
#define PIN_PB18D_EBI_D4                           _L_(50)      /**< EBI signal: EBI_D4 on PB18 mux D */
#define MUX_PB18D_EBI_D4                           _L_(3)       /**< EBI signal line function value: EBI_D4 */
#define PIO_PB18D_EBI_D4                           (_U_(1) << 18) /**< EBI signal: EBI_D4 */
#define PIN_PC22D_EBI_D4                           _L_(86)      /**< EBI signal: EBI_D4 on PC22 mux D */
#define MUX_PC22D_EBI_D4                           _L_(3)       /**< EBI signal line function value: EBI_D4 */
#define PIO_PC22D_EBI_D4                           (_U_(1) << 22) /**< EBI signal: EBI_D4 */
#define PIN_PB19D_EBI_D5                           _L_(51)      /**< EBI signal: EBI_D5 on PB19 mux D */
#define MUX_PB19D_EBI_D5                           _L_(3)       /**< EBI signal line function value: EBI_D5 */
#define PIO_PB19D_EBI_D5                           (_U_(1) << 19) /**< EBI signal: EBI_D5 */
#define PIN_PC23D_EBI_D5                           _L_(87)      /**< EBI signal: EBI_D5 on PC23 mux D */
#define MUX_PC23D_EBI_D5                           _L_(3)       /**< EBI signal line function value: EBI_D5 */
#define PIO_PC23D_EBI_D5                           (_U_(1) << 23) /**< EBI signal: EBI_D5 */
#define PIN_PB20D_EBI_D6                           _L_(52)      /**< EBI signal: EBI_D6 on PB20 mux D */
#define MUX_PB20D_EBI_D6                           _L_(3)       /**< EBI signal line function value: EBI_D6 */
#define PIO_PB20D_EBI_D6                           (_U_(1) << 20) /**< EBI signal: EBI_D6 */
#define PIN_PC24D_EBI_D6                           _L_(88)      /**< EBI signal: EBI_D6 on PC24 mux D */
#define MUX_PC24D_EBI_D6                           _L_(3)       /**< EBI signal line function value: EBI_D6 */
#define PIO_PC24D_EBI_D6                           (_U_(1) << 24) /**< EBI signal: EBI_D6 */
#define PIN_PB21D_EBI_D7                           _L_(53)      /**< EBI signal: EBI_D7 on PB21 mux D */
#define MUX_PB21D_EBI_D7                           _L_(3)       /**< EBI signal line function value: EBI_D7 */
#define PIO_PB21D_EBI_D7                           (_U_(1) << 21) /**< EBI signal: EBI_D7 */
#define PIN_PD2D_EBI_D7                            _L_(98)      /**< EBI signal: EBI_D7 on PD2 mux D */
#define MUX_PD2D_EBI_D7                            _L_(3)       /**< EBI signal line function value: EBI_D7 */
#define PIO_PD2D_EBI_D7                            (_U_(1) << 2) /**< EBI signal: EBI_D7 */
#define PIN_PB3D_EBI_D8                            _L_(35)      /**< EBI signal: EBI_D8 on PB3 mux D */
#define MUX_PB3D_EBI_D8                            _L_(3)       /**< EBI signal line function value: EBI_D8 */
#define PIO_PB3D_EBI_D8                            (_U_(1) << 3) /**< EBI signal: EBI_D8 */
#define PIN_PB4D_EBI_D9                            _L_(36)      /**< EBI signal: EBI_D9 on PB4 mux D */
#define MUX_PB4D_EBI_D9                            _L_(3)       /**< EBI signal line function value: EBI_D9 */
#define PIO_PB4D_EBI_D9                            (_U_(1) << 4) /**< EBI signal: EBI_D9 */
#define PIN_PB5D_EBI_D10                           _L_(37)      /**< EBI signal: EBI_D10 on PB5 mux D */
#define MUX_PB5D_EBI_D10                           _L_(3)       /**< EBI signal line function value: EBI_D10 */
#define PIO_PB5D_EBI_D10                           (_U_(1) << 5) /**< EBI signal: EBI_D10 */
#define PIN_PB6D_EBI_D11                           _L_(38)      /**< EBI signal: EBI_D11 on PB6 mux D */
#define MUX_PB6D_EBI_D11                           _L_(3)       /**< EBI signal line function value: EBI_D11 */
#define PIO_PB6D_EBI_D11                           (_U_(1) << 6) /**< EBI signal: EBI_D11 */
#define PIN_PB7D_EBI_D12                           _L_(39)      /**< EBI signal: EBI_D12 on PB7 mux D */
#define MUX_PB7D_EBI_D12                           _L_(3)       /**< EBI signal line function value: EBI_D12 */
#define PIO_PB7D_EBI_D12                           (_U_(1) << 7) /**< EBI signal: EBI_D12 */
#define PIN_PB8D_EBI_D13                           _L_(40)      /**< EBI signal: EBI_D13 on PB8 mux D */
#define MUX_PB8D_EBI_D13                           _L_(3)       /**< EBI signal line function value: EBI_D13 */
#define PIO_PB8D_EBI_D13                           (_U_(1) << 8) /**< EBI signal: EBI_D13 */
#define PIN_PA1D_EBI_D14                           _L_(1)       /**< EBI signal: EBI_D14 on PA1 mux D */
#define MUX_PA1D_EBI_D14                           _L_(3)       /**< EBI signal line function value: EBI_D14 */
#define PIO_PA1D_EBI_D14                           (_U_(1) << 1) /**< EBI signal: EBI_D14 */
#define PIN_PA2D_EBI_D15                           _L_(2)       /**< EBI signal: EBI_D15 on PA2 mux D */
#define MUX_PA2D_EBI_D15                           _L_(3)       /**< EBI signal line function value: EBI_D15 */
#define PIO_PA2D_EBI_D15                           (_U_(1) << 2) /**< EBI signal: EBI_D15 */
#define PIN_PB12D_EBI_NANDALE                      _L_(44)      /**< EBI signal: EBI_NANDALE on PB12 mux D */
#define MUX_PB12D_EBI_NANDALE                      _L_(3)       /**< EBI signal line function value: EBI_NANDALE */
#define PIO_PB12D_EBI_NANDALE                      (_U_(1) << 12) /**< EBI signal: EBI_NANDALE */
#define PIN_PD7D_EBI_NANDALE                       _L_(103)     /**< EBI signal: EBI_NANDALE on PD7 mux D */
#define MUX_PD7D_EBI_NANDALE                       _L_(3)       /**< EBI signal line function value: EBI_NANDALE */
#define PIO_PD7D_EBI_NANDALE                       (_U_(1) << 7) /**< EBI signal: EBI_NANDALE */
#define PIN_PB13D_EBI_NANDCLE                      _L_(45)      /**< EBI signal: EBI_NANDCLE on PB13 mux D */
#define MUX_PB13D_EBI_NANDCLE                      _L_(3)       /**< EBI signal line function value: EBI_NANDCLE */
#define PIO_PB13D_EBI_NANDCLE                      (_U_(1) << 13) /**< EBI signal: EBI_NANDCLE */
#define PIN_PD8D_EBI_NANDCLE                       _L_(104)     /**< EBI signal: EBI_NANDCLE on PD8 mux D */
#define MUX_PD8D_EBI_NANDCLE                       _L_(3)       /**< EBI signal line function value: EBI_NANDCLE */
#define PIO_PD8D_EBI_NANDCLE                       (_U_(1) << 8) /**< EBI signal: EBI_NANDCLE */
#define PIN_PB9D_EBI_NANDCS                        _L_(41)      /**< EBI signal: EBI_NANDCS on PB9 mux D */
#define MUX_PB9D_EBI_NANDCS                        _L_(3)       /**< EBI signal line function value: EBI_NANDCS */
#define PIO_PB9D_EBI_NANDCS                        (_U_(1) << 9) /**< EBI signal: EBI_NANDCS */
#define PIN_PD4D_EBI_NANDCS                        _L_(100)     /**< EBI signal: EBI_NANDCS on PD4 mux D */
#define MUX_PD4D_EBI_NANDCS                        _L_(3)       /**< EBI signal line function value: EBI_NANDCS */
#define PIO_PD4D_EBI_NANDCS                        (_U_(1) << 4) /**< EBI signal: EBI_NANDCS */
#define PIN_PB11D_EBI_NANDOE                       _L_(43)      /**< EBI signal: EBI_NANDOE on PB11 mux D */
#define MUX_PB11D_EBI_NANDOE                       _L_(3)       /**< EBI signal line function value: EBI_NANDOE */
#define PIO_PB11D_EBI_NANDOE                       (_U_(1) << 11) /**< EBI signal: EBI_NANDOE */
#define PIN_PD6D_EBI_NANDOE                        _L_(102)     /**< EBI signal: EBI_NANDOE on PD6 mux D */
#define MUX_PD6D_EBI_NANDOE                        _L_(3)       /**< EBI signal line function value: EBI_NANDOE */
#define PIO_PD6D_EBI_NANDOE                        (_U_(1) << 6) /**< EBI signal: EBI_NANDOE */
#define PIN_PB22D_EBI_NANDRDY                      _L_(54)      /**< EBI signal: EBI_NANDRDY on PB22 mux D */
#define MUX_PB22D_EBI_NANDRDY                      _L_(3)       /**< EBI signal line function value: EBI_NANDRDY */
#define PIO_PB22D_EBI_NANDRDY                      (_U_(1) << 22) /**< EBI signal: EBI_NANDRDY */
#define PIN_PD3D_EBI_NANDRDY                       _L_(99)      /**< EBI signal: EBI_NANDRDY on PD3 mux D */
#define MUX_PD3D_EBI_NANDRDY                       _L_(3)       /**< EBI signal line function value: EBI_NANDRDY */
#define PIO_PD3D_EBI_NANDRDY                       (_U_(1) << 3) /**< EBI signal: EBI_NANDRDY */
#define PIN_PB10D_EBI_NANDWE                       _L_(42)      /**< EBI signal: EBI_NANDWE on PB10 mux D */
#define MUX_PB10D_EBI_NANDWE                       _L_(3)       /**< EBI signal line function value: EBI_NANDWE */
#define PIO_PB10D_EBI_NANDWE                       (_U_(1) << 10) /**< EBI signal: EBI_NANDWE */
#define PIN_PD5D_EBI_NANDWE                        _L_(101)     /**< EBI signal: EBI_NANDWE on PD5 mux D */
#define MUX_PD5D_EBI_NANDWE                        _L_(3)       /**< EBI signal line function value: EBI_NANDWE */
#define PIO_PD5D_EBI_NANDWE                        (_U_(1) << 5) /**< EBI signal: EBI_NANDWE */
#define PIN_PA11D_EBI_NBS0                         _L_(11)      /**< EBI signal: EBI_NBS0 on PA11 mux D */
#define MUX_PA11D_EBI_NBS0                         _L_(3)       /**< EBI signal line function value: EBI_NBS0 */
#define PIO_PA11D_EBI_NBS0                         (_U_(1) << 11) /**< EBI signal: EBI_NBS0 */
#define PIN_PA3D_EBI_NBS1                          _L_(3)       /**< EBI signal: EBI_NBS1 on PA3 mux D */
#define MUX_PA3D_EBI_NBS1                          _L_(3)       /**< EBI signal line function value: EBI_NBS1 */
#define PIO_PA3D_EBI_NBS1                          (_U_(1) << 3) /**< EBI signal: EBI_NBS1 */
#define PIN_PA8D_EBI_NCS0                          _L_(8)       /**< EBI signal: EBI_NCS0 on PA8 mux D */
#define MUX_PA8D_EBI_NCS0                          _L_(3)       /**< EBI signal line function value: EBI_NCS0 */
#define PIO_PA8D_EBI_NCS0                          (_U_(1) << 8) /**< EBI signal: EBI_NCS0 */
#define PIN_PA10D_EBI_NCS1                         _L_(10)      /**< EBI signal: EBI_NCS1 on PA10 mux D */
#define MUX_PA10D_EBI_NCS1                         _L_(3)       /**< EBI signal line function value: EBI_NCS1 */
#define PIO_PA10D_EBI_NCS1                         (_U_(1) << 10) /**< EBI signal: EBI_NCS1 */
#define PIN_PA4D_EBI_NCS2                          _L_(4)       /**< EBI signal: EBI_NCS2 on PA4 mux D */
#define MUX_PA4D_EBI_NCS2                          _L_(3)       /**< EBI signal line function value: EBI_NCS2 */
#define PIO_PA4D_EBI_NCS2                          (_U_(1) << 4) /**< EBI signal: EBI_NCS2 */
#define PIN_PB9D_EBI_NCS3                          _L_(41)      /**< EBI signal: EBI_NCS3 on PB9 mux D */
#define MUX_PB9D_EBI_NCS3                          _L_(3)       /**< EBI signal line function value: EBI_NCS3 */
#define PIO_PB9D_EBI_NCS3                          (_U_(1) << 9) /**< EBI signal: EBI_NCS3 */
#define PIN_PD4D_EBI_NCS3                          _L_(100)     /**< EBI signal: EBI_NCS3 on PD4 mux D */
#define MUX_PD4D_EBI_NCS3                          _L_(3)       /**< EBI signal line function value: EBI_NCS3 */
#define PIO_PD4D_EBI_NCS3                          (_U_(1) << 4) /**< EBI signal: EBI_NCS3 */
#define PIN_PB11D_EBI_NRD                          _L_(43)      /**< EBI signal: EBI_NRD on PB11 mux D */
#define MUX_PB11D_EBI_NRD                          _L_(3)       /**< EBI signal line function value: EBI_NRD */
#define PIO_PB11D_EBI_NRD                          (_U_(1) << 11) /**< EBI signal: EBI_NRD */
#define PIN_PD6D_EBI_NRD                           _L_(102)     /**< EBI signal: EBI_NRD on PD6 mux D */
#define MUX_PD6D_EBI_NRD                           _L_(3)       /**< EBI signal line function value: EBI_NRD */
#define PIO_PD6D_EBI_NRD                           (_U_(1) << 6) /**< EBI signal: EBI_NRD */
#define PIN_PA7D_EBI_NWAIT                         _L_(7)       /**< EBI signal: EBI_NWAIT on PA7 mux D */
#define MUX_PA7D_EBI_NWAIT                         _L_(3)       /**< EBI signal line function value: EBI_NWAIT */
#define PIO_PA7D_EBI_NWAIT                         (_U_(1) << 7) /**< EBI signal: EBI_NWAIT */
#define PIN_PB10D_EBI_NWE                          _L_(42)      /**< EBI signal: EBI_NWE on PB10 mux D */
#define MUX_PB10D_EBI_NWE                          _L_(3)       /**< EBI signal line function value: EBI_NWE */
#define PIO_PB10D_EBI_NWE                          (_U_(1) << 10) /**< EBI signal: EBI_NWE */
#define PIN_PD5D_EBI_NWE                           _L_(101)     /**< EBI signal: EBI_NWE on PD5 mux D */
#define MUX_PD5D_EBI_NWE                           _L_(3)       /**< EBI signal line function value: EBI_NWE */
#define PIO_PD5D_EBI_NWE                           (_U_(1) << 5) /**< EBI signal: EBI_NWE */
#define PIN_PB10D_EBI_NWR0                         _L_(42)      /**< EBI signal: EBI_NWR0 on PB10 mux D */
#define MUX_PB10D_EBI_NWR0                         _L_(3)       /**< EBI signal line function value: EBI_NWR0 */
#define PIO_PB10D_EBI_NWR0                         (_U_(1) << 10) /**< EBI signal: EBI_NWR0 */
#define PIN_PD5D_EBI_NWR0                          _L_(101)     /**< EBI signal: EBI_NWR0 on PD5 mux D */
#define MUX_PD5D_EBI_NWR0                          _L_(3)       /**< EBI signal line function value: EBI_NWR0 */
#define PIO_PD5D_EBI_NWR0                          (_U_(1) << 5) /**< EBI signal: EBI_NWR0 */
#define PIN_PA3D_EBI_NWR1                          _L_(3)       /**< EBI signal: EBI_NWR1 on PA3 mux D */
#define MUX_PA3D_EBI_NWR1                          _L_(3)       /**< EBI signal line function value: EBI_NWR1 */
#define PIO_PA3D_EBI_NWR1                          (_U_(1) << 3) /**< EBI signal: EBI_NWR1 */
#define PIN_PA9D_EBI_SMCK                          _L_(9)       /**< EBI signal: EBI_SMCK on PA9 mux D */
#define MUX_PA9D_EBI_SMCK                          _L_(3)       /**< EBI signal line function value: EBI_SMCK */
#define PIO_PA9D_EBI_SMCK                          (_U_(1) << 9) /**< EBI signal: EBI_SMCK */
/* ========== PIO definition for EIC peripheral ========== */
#define PIN_PB0C_EIC_EXT_IRQ0                      _L_(32)      /**< EIC signal: EIC_EXT_IRQ0 on PB0 mux C */
#define MUX_PB0C_EIC_EXT_IRQ0                      _L_(2)       /**< EIC signal line function value: EIC_EXT_IRQ0 */
#define PIO_PB0C_EIC_EXT_IRQ0                      (_U_(1) << 0) /**< EIC signal: EIC_EXT_IRQ0 */
#define PIN_PB16F_EIC_EXT_IRQ0                     _L_(48)      /**< EIC signal: EIC_EXT_IRQ0 on PB16 mux F */
#define MUX_PB16F_EIC_EXT_IRQ0                     _L_(5)       /**< EIC signal line function value: EIC_EXT_IRQ0 */
#define PIO_PB16F_EIC_EXT_IRQ0                     (_U_(1) << 16) /**< EIC signal: EIC_EXT_IRQ0 */
#define PIN_PC17B_EIC_EXT_IRQ0                     _L_(81)      /**< EIC signal: EIC_EXT_IRQ0 on PC17 mux B */
#define MUX_PC17B_EIC_EXT_IRQ0                     _L_(1)       /**< EIC signal line function value: EIC_EXT_IRQ0 */
#define PIO_PC17B_EIC_EXT_IRQ0                     (_U_(1) << 17) /**< EIC signal: EIC_EXT_IRQ0 */
#define PIN_PB1C_EIC_EXT_IRQ1                      _L_(33)      /**< EIC signal: EIC_EXT_IRQ1 on PB1 mux C */
#define MUX_PB1C_EIC_EXT_IRQ1                      _L_(2)       /**< EIC signal line function value: EIC_EXT_IRQ1 */
#define PIO_PB1C_EIC_EXT_IRQ1                      (_U_(1) << 1) /**< EIC signal: EIC_EXT_IRQ1 */
#define PIN_PB17F_EIC_EXT_IRQ1                     _L_(49)      /**< EIC signal: EIC_EXT_IRQ1 on PB17 mux F */
#define MUX_PB17F_EIC_EXT_IRQ1                     _L_(5)       /**< EIC signal line function value: EIC_EXT_IRQ1 */
#define PIO_PB17F_EIC_EXT_IRQ1                     (_U_(1) << 17) /**< EIC signal: EIC_EXT_IRQ1 */
#define PIN_PC24C_EIC_EXT_IRQ1                     _L_(88)      /**< EIC signal: EIC_EXT_IRQ1 on PC24 mux C */
#define MUX_PC24C_EIC_EXT_IRQ1                     _L_(2)       /**< EIC signal line function value: EIC_EXT_IRQ1 */
#define PIO_PC24C_EIC_EXT_IRQ1                     (_U_(1) << 24) /**< EIC signal: EIC_EXT_IRQ1 */
/* ========== PIO definition for FLEXCOM0 peripheral ========== */
#define PIN_PA0B_FLEXCOM0_IO0                      _L_(0)       /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PA0 mux B */
#define MUX_PA0B_FLEXCOM0_IO0                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PA0B_FLEXCOM0_IO0                      (_U_(1) << 0) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PD3B_FLEXCOM0_IO0                      _L_(99)      /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PD3 mux B */
#define MUX_PD3B_FLEXCOM0_IO0                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PD3B_FLEXCOM0_IO0                      (_U_(1) << 3) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PD10F_FLEXCOM0_IO0                     _L_(106)     /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PD10 mux F */
#define MUX_PD10F_FLEXCOM0_IO0                     _L_(5)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PD10F_FLEXCOM0_IO0                     (_U_(1) << 10) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PE3B_FLEXCOM0_IO0                      _L_(131)     /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PE3 mux B */
#define MUX_PE3B_FLEXCOM0_IO0                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PE3B_FLEXCOM0_IO0                      (_U_(1) << 3) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PA1B_FLEXCOM0_IO1                      _L_(1)       /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PA1 mux B */
#define MUX_PA1B_FLEXCOM0_IO1                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PA1B_FLEXCOM0_IO1                      (_U_(1) << 1) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PD4B_FLEXCOM0_IO1                      _L_(100)     /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PD4 mux B */
#define MUX_PD4B_FLEXCOM0_IO1                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PD4B_FLEXCOM0_IO1                      (_U_(1) << 4) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PD11F_FLEXCOM0_IO1                     _L_(107)     /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PD11 mux F */
#define MUX_PD11F_FLEXCOM0_IO1                     _L_(5)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PD11F_FLEXCOM0_IO1                     (_U_(1) << 11) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PE4B_FLEXCOM0_IO1                      _L_(132)     /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PE4 mux B */
#define MUX_PE4B_FLEXCOM0_IO1                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PE4B_FLEXCOM0_IO1                      (_U_(1) << 4) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PA2B_FLEXCOM0_IO2                      _L_(2)       /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PA2 mux B */
#define MUX_PA2B_FLEXCOM0_IO2                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PA2B_FLEXCOM0_IO2                      (_U_(1) << 2) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PD5B_FLEXCOM0_IO2                      _L_(101)     /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PD5 mux B */
#define MUX_PD5B_FLEXCOM0_IO2                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PD5B_FLEXCOM0_IO2                      (_U_(1) << 5) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PE5B_FLEXCOM0_IO2                      _L_(133)     /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PE5 mux B */
#define MUX_PE5B_FLEXCOM0_IO2                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PE5B_FLEXCOM0_IO2                      (_U_(1) << 5) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PA3B_FLEXCOM0_IO3                      _L_(3)       /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PA3 mux B */
#define MUX_PA3B_FLEXCOM0_IO3                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PA3B_FLEXCOM0_IO3                      (_U_(1) << 3) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PD6B_FLEXCOM0_IO3                      _L_(102)     /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PD6 mux B */
#define MUX_PD6B_FLEXCOM0_IO3                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PD6B_FLEXCOM0_IO3                      (_U_(1) << 6) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PE6B_FLEXCOM0_IO3                      _L_(134)     /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PE6 mux B */
#define MUX_PE6B_FLEXCOM0_IO3                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PE6B_FLEXCOM0_IO3                      (_U_(1) << 6) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PA4B_FLEXCOM0_IO4                      _L_(4)       /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PA4 mux B */
#define MUX_PA4B_FLEXCOM0_IO4                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PA4B_FLEXCOM0_IO4                      (_U_(1) << 4) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
#define PIN_PD7B_FLEXCOM0_IO4                      _L_(103)     /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PD7 mux B */
#define MUX_PD7B_FLEXCOM0_IO4                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PD7B_FLEXCOM0_IO4                      (_U_(1) << 7) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
#define PIN_PE7B_FLEXCOM0_IO4                      _L_(135)     /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PE7 mux B */
#define MUX_PE7B_FLEXCOM0_IO4                      _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PE7B_FLEXCOM0_IO4                      (_U_(1) << 7) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
#define PIN_PA24E_FLEXCOM0_IO5                     _L_(24)      /**< FLEXCOM0 signal: FLEXCOM0_IO5 on PA24 mux E */
#define MUX_PA24E_FLEXCOM0_IO5                     _L_(4)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO5 */
#define PIO_PA24E_FLEXCOM0_IO5                     (_U_(1) << 24) /**< FLEXCOM0 signal: FLEXCOM0_IO5 */
#define PIN_PB29C_FLEXCOM0_IO5                     _L_(61)      /**< FLEXCOM0 signal: FLEXCOM0_IO5 on PB29 mux C */
#define MUX_PB29C_FLEXCOM0_IO5                     _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO5 */
#define PIO_PB29C_FLEXCOM0_IO5                     (_U_(1) << 29) /**< FLEXCOM0 signal: FLEXCOM0_IO5 */
#define PIN_PC23B_FLEXCOM0_IO5                     _L_(87)      /**< FLEXCOM0 signal: FLEXCOM0_IO5 on PC23 mux B */
#define MUX_PC23B_FLEXCOM0_IO5                     _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO5 */
#define PIO_PC23B_FLEXCOM0_IO5                     (_U_(1) << 23) /**< FLEXCOM0 signal: FLEXCOM0_IO5 */
#define PIN_PA25E_FLEXCOM0_IO6                     _L_(25)      /**< FLEXCOM0 signal: FLEXCOM0_IO6 on PA25 mux E */
#define MUX_PA25E_FLEXCOM0_IO6                     _L_(4)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO6 */
#define PIO_PA25E_FLEXCOM0_IO6                     (_U_(1) << 25) /**< FLEXCOM0 signal: FLEXCOM0_IO6 */
#define PIN_PB30C_FLEXCOM0_IO6                     _L_(62)      /**< FLEXCOM0 signal: FLEXCOM0_IO6 on PB30 mux C */
#define MUX_PB30C_FLEXCOM0_IO6                     _L_(2)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO6 */
#define PIO_PB30C_FLEXCOM0_IO6                     (_U_(1) << 30) /**< FLEXCOM0 signal: FLEXCOM0_IO6 */
#define PIN_PC24B_FLEXCOM0_IO6                     _L_(88)      /**< FLEXCOM0 signal: FLEXCOM0_IO6 on PC24 mux B */
#define MUX_PC24B_FLEXCOM0_IO6                     _L_(1)       /**< FLEXCOM0 signal line function value: FLEXCOM0_IO6 */
#define PIO_PC24B_FLEXCOM0_IO6                     (_U_(1) << 24) /**< FLEXCOM0 signal: FLEXCOM0_IO6 */
/* ========== PIO definition for FLEXCOM1 peripheral ========== */
#define PIN_PA2F_FLEXCOM1_IO0                      _L_(2)       /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PA2 mux F */
#define MUX_PA2F_FLEXCOM1_IO0                      _L_(5)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PA2F_FLEXCOM1_IO0                      (_U_(1) << 2) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PA5B_FLEXCOM1_IO0                      _L_(5)       /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PA5 mux B */
#define MUX_PA5B_FLEXCOM1_IO0                      _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PA5B_FLEXCOM1_IO0                      (_U_(1) << 5) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PC9F_FLEXCOM1_IO0                      _L_(73)      /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PC9 mux F */
#define MUX_PC9F_FLEXCOM1_IO0                      _L_(5)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PC9F_FLEXCOM1_IO0                      (_U_(1) << 9) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PD12B_FLEXCOM1_IO0                     _L_(108)     /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PD12 mux B */
#define MUX_PD12B_FLEXCOM1_IO0                     _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PD12B_FLEXCOM1_IO0                     (_U_(1) << 12) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PA3F_FLEXCOM1_IO1                      _L_(3)       /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PA3 mux F */
#define MUX_PA3F_FLEXCOM1_IO1                      _L_(5)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PA3F_FLEXCOM1_IO1                      (_U_(1) << 3) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PA6B_FLEXCOM1_IO1                      _L_(6)       /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PA6 mux B */
#define MUX_PA6B_FLEXCOM1_IO1                      _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PA6B_FLEXCOM1_IO1                      (_U_(1) << 6) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PC10F_FLEXCOM1_IO1                     _L_(74)      /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PC10 mux F */
#define MUX_PC10F_FLEXCOM1_IO1                     _L_(5)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PC10F_FLEXCOM1_IO1                     (_U_(1) << 10) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PD13B_FLEXCOM1_IO1                     _L_(109)     /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PD13 mux B */
#define MUX_PD13B_FLEXCOM1_IO1                     _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PD13B_FLEXCOM1_IO1                     (_U_(1) << 13) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PA13B_FLEXCOM1_IO2                     _L_(13)      /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PA13 mux B */
#define MUX_PA13B_FLEXCOM1_IO2                     _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PA13B_FLEXCOM1_IO2                     (_U_(1) << 13) /**< FLEXCOM1 signal: FLEXCOM1_IO2 */
#define PIN_PD14B_FLEXCOM1_IO2                     _L_(110)     /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PD14 mux B */
#define MUX_PD14B_FLEXCOM1_IO2                     _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PD14B_FLEXCOM1_IO2                     (_U_(1) << 14) /**< FLEXCOM1 signal: FLEXCOM1_IO2 */
#define PIN_PA12B_FLEXCOM1_IO3                     _L_(12)      /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PA12 mux B */
#define MUX_PA12B_FLEXCOM1_IO3                     _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PA12B_FLEXCOM1_IO3                     (_U_(1) << 12) /**< FLEXCOM1 signal: FLEXCOM1_IO3 */
#define PIN_PD15B_FLEXCOM1_IO3                     _L_(111)     /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PD15 mux B */
#define MUX_PD15B_FLEXCOM1_IO3                     _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PD15B_FLEXCOM1_IO3                     (_U_(1) << 15) /**< FLEXCOM1 signal: FLEXCOM1_IO3 */
#define PIN_PA14B_FLEXCOM1_IO4                     _L_(14)      /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PA14 mux B */
#define MUX_PA14B_FLEXCOM1_IO4                     _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PA14B_FLEXCOM1_IO4                     (_U_(1) << 14) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
#define PIN_PD16B_FLEXCOM1_IO4                     _L_(112)     /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PD16 mux B */
#define MUX_PD16B_FLEXCOM1_IO4                     _L_(1)       /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PD16B_FLEXCOM1_IO4                     (_U_(1) << 16) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
/* ========== PIO definition for FLEXCOM2 peripheral ========== */
#define PIN_PA4F_FLEXCOM2_IO0                      _L_(4)       /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PA4 mux F */
#define MUX_PA4F_FLEXCOM2_IO0                      _L_(5)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PA4F_FLEXCOM2_IO0                      (_U_(1) << 4) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PA7B_FLEXCOM2_IO0                      _L_(7)       /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PA7 mux B */
#define MUX_PA7B_FLEXCOM2_IO0                      _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PA7B_FLEXCOM2_IO0                      (_U_(1) << 7) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PC11F_FLEXCOM2_IO0                     _L_(75)      /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PC11 mux F */
#define MUX_PC11F_FLEXCOM2_IO0                     _L_(5)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PC11F_FLEXCOM2_IO0                     (_U_(1) << 11) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PD14F_FLEXCOM2_IO0                     _L_(110)     /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PD14 mux F */
#define MUX_PD14F_FLEXCOM2_IO0                     _L_(5)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PD14F_FLEXCOM2_IO0                     (_U_(1) << 14) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PD17B_FLEXCOM2_IO0                     _L_(113)     /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PD17 mux B */
#define MUX_PD17B_FLEXCOM2_IO0                     _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PD17B_FLEXCOM2_IO0                     (_U_(1) << 17) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PA5F_FLEXCOM2_IO1                      _L_(5)       /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PA5 mux F */
#define MUX_PA5F_FLEXCOM2_IO1                      _L_(5)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PA5F_FLEXCOM2_IO1                      (_U_(1) << 5) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PA8B_FLEXCOM2_IO1                      _L_(8)       /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PA8 mux B */
#define MUX_PA8B_FLEXCOM2_IO1                      _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PA8B_FLEXCOM2_IO1                      (_U_(1) << 8) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PC12F_FLEXCOM2_IO1                     _L_(76)      /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PC12 mux F */
#define MUX_PC12F_FLEXCOM2_IO1                     _L_(5)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PC12F_FLEXCOM2_IO1                     (_U_(1) << 12) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PD15F_FLEXCOM2_IO1                     _L_(111)     /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PD15 mux F */
#define MUX_PD15F_FLEXCOM2_IO1                     _L_(5)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PD15F_FLEXCOM2_IO1                     (_U_(1) << 15) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PD18B_FLEXCOM2_IO1                     _L_(114)     /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PD18 mux B */
#define MUX_PD18B_FLEXCOM2_IO1                     _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PD18B_FLEXCOM2_IO1                     (_U_(1) << 18) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PA9B_FLEXCOM2_IO2                      _L_(9)       /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PA9 mux B */
#define MUX_PA9B_FLEXCOM2_IO2                      _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PA9B_FLEXCOM2_IO2                      (_U_(1) << 9) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PD19B_FLEXCOM2_IO2                     _L_(115)     /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PD19 mux B */
#define MUX_PD19B_FLEXCOM2_IO2                     _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PD19B_FLEXCOM2_IO2                     (_U_(1) << 19) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PA10B_FLEXCOM2_IO3                     _L_(10)      /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PA10 mux B */
#define MUX_PA10B_FLEXCOM2_IO3                     _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PA10B_FLEXCOM2_IO3                     (_U_(1) << 10) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PD20B_FLEXCOM2_IO3                     _L_(116)     /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PD20 mux B */
#define MUX_PD20B_FLEXCOM2_IO3                     _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PD20B_FLEXCOM2_IO3                     (_U_(1) << 20) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PA11B_FLEXCOM2_IO4                     _L_(11)      /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PA11 mux B */
#define MUX_PA11B_FLEXCOM2_IO4                     _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PA11B_FLEXCOM2_IO4                     (_U_(1) << 11) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
#define PIN_PD21B_FLEXCOM2_IO4                     _L_(117)     /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PD21 mux B */
#define MUX_PD21B_FLEXCOM2_IO4                     _L_(1)       /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PD21B_FLEXCOM2_IO4                     (_U_(1) << 21) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
/* ========== PIO definition for FLEXCOM3 peripheral ========== */
#define PIN_PA6F_FLEXCOM3_IO0                      _L_(6)       /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PA6 mux F */
#define MUX_PA6F_FLEXCOM3_IO0                      _L_(5)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PA6F_FLEXCOM3_IO0                      (_U_(1) << 6) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PA15B_FLEXCOM3_IO0                     _L_(15)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PA15 mux B */
#define MUX_PA15B_FLEXCOM3_IO0                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PA15B_FLEXCOM3_IO0                     (_U_(1) << 15) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PC0B_FLEXCOM3_IO0                      _L_(64)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PC0 mux B */
#define MUX_PC0B_FLEXCOM3_IO0                      _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PC0B_FLEXCOM3_IO0                      (_U_(1) << 0) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PC13F_FLEXCOM3_IO0                     _L_(77)      /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PC13 mux F */
#define MUX_PC13F_FLEXCOM3_IO0                     _L_(5)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PC13F_FLEXCOM3_IO0                     (_U_(1) << 13) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PD16F_FLEXCOM3_IO0                     _L_(112)     /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PD16 mux F */
#define MUX_PD16F_FLEXCOM3_IO0                     _L_(5)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PD16F_FLEXCOM3_IO0                     (_U_(1) << 16) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PA7F_FLEXCOM3_IO1                      _L_(7)       /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PA7 mux F */
#define MUX_PA7F_FLEXCOM3_IO1                      _L_(5)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PA7F_FLEXCOM3_IO1                      (_U_(1) << 7) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PA16B_FLEXCOM3_IO1                     _L_(16)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PA16 mux B */
#define MUX_PA16B_FLEXCOM3_IO1                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PA16B_FLEXCOM3_IO1                     (_U_(1) << 16) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PC1B_FLEXCOM3_IO1                      _L_(65)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PC1 mux B */
#define MUX_PC1B_FLEXCOM3_IO1                      _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PC1B_FLEXCOM3_IO1                      (_U_(1) << 1) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PC14F_FLEXCOM3_IO1                     _L_(78)      /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PC14 mux F */
#define MUX_PC14F_FLEXCOM3_IO1                     _L_(5)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PC14F_FLEXCOM3_IO1                     (_U_(1) << 14) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PD17F_FLEXCOM3_IO1                     _L_(113)     /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PD17 mux F */
#define MUX_PD17F_FLEXCOM3_IO1                     _L_(5)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PD17F_FLEXCOM3_IO1                     (_U_(1) << 17) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PA17B_FLEXCOM3_IO2                     _L_(17)      /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PA17 mux B */
#define MUX_PA17B_FLEXCOM3_IO2                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PA17B_FLEXCOM3_IO2                     (_U_(1) << 17) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PB29B_FLEXCOM3_IO2                     _L_(61)      /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PB29 mux B */
#define MUX_PB29B_FLEXCOM3_IO2                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PB29B_FLEXCOM3_IO2                     (_U_(1) << 29) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PA18B_FLEXCOM3_IO3                     _L_(18)      /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PA18 mux B */
#define MUX_PA18B_FLEXCOM3_IO3                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PA18B_FLEXCOM3_IO3                     (_U_(1) << 18) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PB30B_FLEXCOM3_IO3                     _L_(62)      /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PB30 mux B */
#define MUX_PB30B_FLEXCOM3_IO3                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PB30B_FLEXCOM3_IO3                     (_U_(1) << 30) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PA19B_FLEXCOM3_IO4                     _L_(19)      /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PA19 mux B */
#define MUX_PA19B_FLEXCOM3_IO4                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PA19B_FLEXCOM3_IO4                     (_U_(1) << 19) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PB31B_FLEXCOM3_IO4                     _L_(63)      /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PB31 mux B */
#define MUX_PB31B_FLEXCOM3_IO4                     _L_(1)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PB31B_FLEXCOM3_IO4                     (_U_(1) << 31) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PA12D_FLEXCOM3_IO5                     _L_(12)      /**< FLEXCOM3 signal: FLEXCOM3_IO5 on PA12 mux D */
#define MUX_PA12D_FLEXCOM3_IO5                     _L_(3)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO5 */
#define PIO_PA12D_FLEXCOM3_IO5                     (_U_(1) << 12) /**< FLEXCOM3 signal: FLEXCOM3_IO5 */
#define PIN_PB7C_FLEXCOM3_IO5                      _L_(39)      /**< FLEXCOM3 signal: FLEXCOM3_IO5 on PB7 mux C */
#define MUX_PB7C_FLEXCOM3_IO5                      _L_(2)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO5 */
#define PIO_PB7C_FLEXCOM3_IO5                      (_U_(1) << 7) /**< FLEXCOM3 signal: FLEXCOM3_IO5 */
#define PIN_PA13D_FLEXCOM3_IO6                     _L_(13)      /**< FLEXCOM3 signal: FLEXCOM3_IO6 on PA13 mux D */
#define MUX_PA13D_FLEXCOM3_IO6                     _L_(3)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO6 */
#define PIO_PA13D_FLEXCOM3_IO6                     (_U_(1) << 13) /**< FLEXCOM3 signal: FLEXCOM3_IO6 */
#define PIN_PB8C_FLEXCOM3_IO6                      _L_(40)      /**< FLEXCOM3 signal: FLEXCOM3_IO6 on PB8 mux C */
#define MUX_PB8C_FLEXCOM3_IO6                      _L_(2)       /**< FLEXCOM3 signal line function value: FLEXCOM3_IO6 */
#define PIO_PB8C_FLEXCOM3_IO6                      (_U_(1) << 8) /**< FLEXCOM3 signal: FLEXCOM3_IO6 */
/* ========== PIO definition for FLEXCOM4 peripheral ========== */
#define PIN_PA8F_FLEXCOM4_IO0                      _L_(8)       /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PA8 mux F */
#define MUX_PA8F_FLEXCOM4_IO0                      _L_(5)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PA8F_FLEXCOM4_IO0                      (_U_(1) << 8) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PA20B_FLEXCOM4_IO0                     _L_(20)      /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PA20 mux B */
#define MUX_PA20B_FLEXCOM4_IO0                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PA20B_FLEXCOM4_IO0                     (_U_(1) << 20) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PC2B_FLEXCOM4_IO0                      _L_(66)      /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PC2 mux B */
#define MUX_PC2B_FLEXCOM4_IO0                      _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PC2B_FLEXCOM4_IO0                      (_U_(1) << 2) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PC15F_FLEXCOM4_IO0                     _L_(79)      /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PC15 mux F */
#define MUX_PC15F_FLEXCOM4_IO0                     _L_(5)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PC15F_FLEXCOM4_IO0                     (_U_(1) << 15) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PD18F_FLEXCOM4_IO0                     _L_(114)     /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PD18 mux F */
#define MUX_PD18F_FLEXCOM4_IO0                     _L_(5)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PD18F_FLEXCOM4_IO0                     (_U_(1) << 18) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PA9F_FLEXCOM4_IO1                      _L_(9)       /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PA9 mux F */
#define MUX_PA9F_FLEXCOM4_IO1                      _L_(5)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PA9F_FLEXCOM4_IO1                      (_U_(1) << 9) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PA21B_FLEXCOM4_IO1                     _L_(21)      /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PA21 mux B */
#define MUX_PA21B_FLEXCOM4_IO1                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PA21B_FLEXCOM4_IO1                     (_U_(1) << 21) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PC3B_FLEXCOM4_IO1                      _L_(67)      /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PC3 mux B */
#define MUX_PC3B_FLEXCOM4_IO1                      _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PC3B_FLEXCOM4_IO1                      (_U_(1) << 3) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PC16F_FLEXCOM4_IO1                     _L_(80)      /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PC16 mux F */
#define MUX_PC16F_FLEXCOM4_IO1                     _L_(5)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PC16F_FLEXCOM4_IO1                     (_U_(1) << 16) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PD19F_FLEXCOM4_IO1                     _L_(115)     /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PD19 mux F */
#define MUX_PD19F_FLEXCOM4_IO1                     _L_(5)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PD19F_FLEXCOM4_IO1                     (_U_(1) << 19) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PA22B_FLEXCOM4_IO2                     _L_(22)      /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PA22 mux B */
#define MUX_PA22B_FLEXCOM4_IO2                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PA22B_FLEXCOM4_IO2                     (_U_(1) << 22) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PC4B_FLEXCOM4_IO2                      _L_(68)      /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PC4 mux B */
#define MUX_PC4B_FLEXCOM4_IO2                      _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PC4B_FLEXCOM4_IO2                      (_U_(1) << 4) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PA23B_FLEXCOM4_IO3                     _L_(23)      /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PA23 mux B */
#define MUX_PA23B_FLEXCOM4_IO3                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PA23B_FLEXCOM4_IO3                     (_U_(1) << 23) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PC5B_FLEXCOM4_IO3                      _L_(69)      /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PC5 mux B */
#define MUX_PC5B_FLEXCOM4_IO3                      _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PC5B_FLEXCOM4_IO3                      (_U_(1) << 5) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PA24B_FLEXCOM4_IO4                     _L_(24)      /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PA24 mux B */
#define MUX_PA24B_FLEXCOM4_IO4                     _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PA24B_FLEXCOM4_IO4                     (_U_(1) << 24) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
#define PIN_PC6B_FLEXCOM4_IO4                      _L_(70)      /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PC6 mux B */
#define MUX_PC6B_FLEXCOM4_IO4                      _L_(1)       /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PC6B_FLEXCOM4_IO4                      (_U_(1) << 6) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
/* ========== PIO definition for FLEXCOM5 peripheral ========== */
#define PIN_PA10F_FLEXCOM5_IO0                     _L_(10)      /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PA10 mux F */
#define MUX_PA10F_FLEXCOM5_IO0                     _L_(5)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PA10F_FLEXCOM5_IO0                     (_U_(1) << 10) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PA28B_FLEXCOM5_IO0                     _L_(28)      /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PA28 mux B */
#define MUX_PA28B_FLEXCOM5_IO0                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PA28B_FLEXCOM5_IO0                     (_U_(1) << 28) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PC17F_FLEXCOM5_IO0                     _L_(81)      /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PC17 mux F */
#define MUX_PC17F_FLEXCOM5_IO0                     _L_(5)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PC17F_FLEXCOM5_IO0                     (_U_(1) << 17) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PD20F_FLEXCOM5_IO0                     _L_(116)     /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PD20 mux F */
#define MUX_PD20F_FLEXCOM5_IO0                     _L_(5)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PD20F_FLEXCOM5_IO0                     (_U_(1) << 20) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PD25B_FLEXCOM5_IO0                     _L_(121)     /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PD25 mux B */
#define MUX_PD25B_FLEXCOM5_IO0                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PD25B_FLEXCOM5_IO0                     (_U_(1) << 25) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PA11F_FLEXCOM5_IO1                     _L_(11)      /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PA11 mux F */
#define MUX_PA11F_FLEXCOM5_IO1                     _L_(5)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PA11F_FLEXCOM5_IO1                     (_U_(1) << 11) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PA29B_FLEXCOM5_IO1                     _L_(29)      /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PA29 mux B */
#define MUX_PA29B_FLEXCOM5_IO1                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PA29B_FLEXCOM5_IO1                     (_U_(1) << 29) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PC18F_FLEXCOM5_IO1                     _L_(82)      /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PC18 mux F */
#define MUX_PC18F_FLEXCOM5_IO1                     _L_(5)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PC18F_FLEXCOM5_IO1                     (_U_(1) << 18) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PD21F_FLEXCOM5_IO1                     _L_(117)     /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PD21 mux F */
#define MUX_PD21F_FLEXCOM5_IO1                     _L_(5)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PD21F_FLEXCOM5_IO1                     (_U_(1) << 21) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PD26B_FLEXCOM5_IO1                     _L_(122)     /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PD26 mux B */
#define MUX_PD26B_FLEXCOM5_IO1                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PD26B_FLEXCOM5_IO1                     (_U_(1) << 26) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PA26B_FLEXCOM5_IO2                     _L_(26)      /**< FLEXCOM5 signal: FLEXCOM5_IO2 on PA26 mux B */
#define MUX_PA26B_FLEXCOM5_IO2                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO2 */
#define PIO_PA26B_FLEXCOM5_IO2                     (_U_(1) << 26) /**< FLEXCOM5 signal: FLEXCOM5_IO2 */
#define PIN_PD27B_FLEXCOM5_IO2                     _L_(123)     /**< FLEXCOM5 signal: FLEXCOM5_IO2 on PD27 mux B */
#define MUX_PD27B_FLEXCOM5_IO2                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO2 */
#define PIO_PD27B_FLEXCOM5_IO2                     (_U_(1) << 27) /**< FLEXCOM5 signal: FLEXCOM5_IO2 */
#define PIN_PA27B_FLEXCOM5_IO3                     _L_(27)      /**< FLEXCOM5 signal: FLEXCOM5_IO3 on PA27 mux B */
#define MUX_PA27B_FLEXCOM5_IO3                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO3 */
#define PIO_PA27B_FLEXCOM5_IO3                     (_U_(1) << 27) /**< FLEXCOM5 signal: FLEXCOM5_IO3 */
#define PIN_PD28B_FLEXCOM5_IO3                     _L_(124)     /**< FLEXCOM5 signal: FLEXCOM5_IO3 on PD28 mux B */
#define MUX_PD28B_FLEXCOM5_IO3                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO3 */
#define PIO_PD28B_FLEXCOM5_IO3                     (_U_(1) << 28) /**< FLEXCOM5 signal: FLEXCOM5_IO3 */
#define PIN_PA25B_FLEXCOM5_IO4                     _L_(25)      /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PA25 mux B */
#define MUX_PA25B_FLEXCOM5_IO4                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PA25B_FLEXCOM5_IO4                     (_U_(1) << 25) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
#define PIN_PD29B_FLEXCOM5_IO4                     _L_(125)     /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PD29 mux B */
#define MUX_PD29B_FLEXCOM5_IO4                     _L_(1)       /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PD29B_FLEXCOM5_IO4                     (_U_(1) << 29) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
/* ========== PIO definition for FLEXCOM6 peripheral ========== */
#define PIN_PA12F_FLEXCOM6_IO0                     _L_(12)      /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PA12 mux F */
#define MUX_PA12F_FLEXCOM6_IO0                     _L_(5)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PA12F_FLEXCOM6_IO0                     (_U_(1) << 12) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PB2B_FLEXCOM6_IO0                      _L_(34)      /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PB2 mux B */
#define MUX_PB2B_FLEXCOM6_IO0                      _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PB2B_FLEXCOM6_IO0                      (_U_(1) << 2) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PC19F_FLEXCOM6_IO0                     _L_(83)      /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PC19 mux F */
#define MUX_PC19F_FLEXCOM6_IO0                     _L_(5)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PC19F_FLEXCOM6_IO0                     (_U_(1) << 19) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PC21F_FLEXCOM6_IO0                     _L_(85)      /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PC21 mux F */
#define MUX_PC21F_FLEXCOM6_IO0                     _L_(5)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PC21F_FLEXCOM6_IO0                     (_U_(1) << 21) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PD30B_FLEXCOM6_IO0                     _L_(126)     /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PD30 mux B */
#define MUX_PD30B_FLEXCOM6_IO0                     _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PD30B_FLEXCOM6_IO0                     (_U_(1) << 30) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PA13F_FLEXCOM6_IO1                     _L_(13)      /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PA13 mux F */
#define MUX_PA13F_FLEXCOM6_IO1                     _L_(5)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PA13F_FLEXCOM6_IO1                     (_U_(1) << 13) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PB1B_FLEXCOM6_IO1                      _L_(33)      /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PB1 mux B */
#define MUX_PB1B_FLEXCOM6_IO1                      _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PB1B_FLEXCOM6_IO1                      (_U_(1) << 1) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PC20F_FLEXCOM6_IO1                     _L_(84)      /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PC20 mux F */
#define MUX_PC20F_FLEXCOM6_IO1                     _L_(5)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PC20F_FLEXCOM6_IO1                     (_U_(1) << 20) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PC22F_FLEXCOM6_IO1                     _L_(86)      /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PC22 mux F */
#define MUX_PC22F_FLEXCOM6_IO1                     _L_(5)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PC22F_FLEXCOM6_IO1                     (_U_(1) << 22) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PD31B_FLEXCOM6_IO1                     _L_(127)     /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PD31 mux B */
#define MUX_PD31B_FLEXCOM6_IO1                     _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PD31B_FLEXCOM6_IO1                     (_U_(1) << 31) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PA31B_FLEXCOM6_IO2                     _L_(31)      /**< FLEXCOM6 signal: FLEXCOM6_IO2 on PA31 mux B */
#define MUX_PA31B_FLEXCOM6_IO2                     _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO2 */
#define PIO_PA31B_FLEXCOM6_IO2                     (_U_(1) << 31) /**< FLEXCOM6 signal: FLEXCOM6_IO2 */
#define PIN_PE0B_FLEXCOM6_IO2                      _L_(128)     /**< FLEXCOM6 signal: FLEXCOM6_IO2 on PE0 mux B */
#define MUX_PE0B_FLEXCOM6_IO2                      _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO2 */
#define PIO_PE0B_FLEXCOM6_IO2                      (_U_(1) << 0) /**< FLEXCOM6 signal: FLEXCOM6_IO2 */
#define PIN_PB0B_FLEXCOM6_IO3                      _L_(32)      /**< FLEXCOM6 signal: FLEXCOM6_IO3 on PB0 mux B */
#define MUX_PB0B_FLEXCOM6_IO3                      _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO3 */
#define PIO_PB0B_FLEXCOM6_IO3                      (_U_(1) << 0) /**< FLEXCOM6 signal: FLEXCOM6_IO3 */
#define PIN_PE1B_FLEXCOM6_IO3                      _L_(129)     /**< FLEXCOM6 signal: FLEXCOM6_IO3 on PE1 mux B */
#define MUX_PE1B_FLEXCOM6_IO3                      _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO3 */
#define PIO_PE1B_FLEXCOM6_IO3                      (_U_(1) << 1) /**< FLEXCOM6 signal: FLEXCOM6_IO3 */
#define PIN_PA30B_FLEXCOM6_IO4                     _L_(30)      /**< FLEXCOM6 signal: FLEXCOM6_IO4 on PA30 mux B */
#define MUX_PA30B_FLEXCOM6_IO4                     _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO4 */
#define PIO_PA30B_FLEXCOM6_IO4                     (_U_(1) << 30) /**< FLEXCOM6 signal: FLEXCOM6_IO4 */
#define PIN_PE2B_FLEXCOM6_IO4                      _L_(130)     /**< FLEXCOM6 signal: FLEXCOM6_IO4 on PE2 mux B */
#define MUX_PE2B_FLEXCOM6_IO4                      _L_(1)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO4 */
#define PIO_PE2B_FLEXCOM6_IO4                      (_U_(1) << 2) /**< FLEXCOM6 signal: FLEXCOM6_IO4 */
#define PIN_PB12C_FLEXCOM6_IO5                     _L_(44)      /**< FLEXCOM6 signal: FLEXCOM6_IO5 on PB12 mux C */
#define MUX_PB12C_FLEXCOM6_IO5                     _L_(2)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO5 */
#define PIO_PB12C_FLEXCOM6_IO5                     (_U_(1) << 12) /**< FLEXCOM6 signal: FLEXCOM6_IO5 */
#define PIN_PC5C_FLEXCOM6_IO5                      _L_(69)      /**< FLEXCOM6 signal: FLEXCOM6_IO5 on PC5 mux C */
#define MUX_PC5C_FLEXCOM6_IO5                      _L_(2)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO5 */
#define PIO_PC5C_FLEXCOM6_IO5                      (_U_(1) << 5) /**< FLEXCOM6 signal: FLEXCOM6_IO5 */
#define PIN_PB13C_FLEXCOM6_IO6                     _L_(45)      /**< FLEXCOM6 signal: FLEXCOM6_IO6 on PB13 mux C */
#define MUX_PB13C_FLEXCOM6_IO6                     _L_(2)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO6 */
#define PIO_PB13C_FLEXCOM6_IO6                     (_U_(1) << 13) /**< FLEXCOM6 signal: FLEXCOM6_IO6 */
#define PIN_PC6C_FLEXCOM6_IO6                      _L_(70)      /**< FLEXCOM6 signal: FLEXCOM6_IO6 on PC6 mux C */
#define MUX_PC6C_FLEXCOM6_IO6                      _L_(2)       /**< FLEXCOM6 signal line function value: FLEXCOM6_IO6 */
#define PIO_PC6C_FLEXCOM6_IO6                      (_U_(1) << 6) /**< FLEXCOM6 signal: FLEXCOM6_IO6 */
/* ========== PIO definition for FLEXCOM7 peripheral ========== */
#define PIN_PA25F_FLEXCOM7_IO0                     _L_(25)      /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PA25 mux F */
#define MUX_PA25F_FLEXCOM7_IO0                     _L_(5)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PA25F_FLEXCOM7_IO0                     (_U_(1) << 25) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PB23B_FLEXCOM7_IO0                     _L_(55)      /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PB23 mux B */
#define MUX_PB23B_FLEXCOM7_IO0                     _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PB23B_FLEXCOM7_IO0                     (_U_(1) << 23) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PB28F_FLEXCOM7_IO0                     _L_(60)      /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PB28 mux F */
#define MUX_PB28F_FLEXCOM7_IO0                     _L_(5)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PB28F_FLEXCOM7_IO0                     (_U_(1) << 28) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PC7B_FLEXCOM7_IO0                      _L_(71)      /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PC7 mux B */
#define MUX_PC7B_FLEXCOM7_IO0                      _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PC7B_FLEXCOM7_IO0                      (_U_(1) << 7) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PC23F_FLEXCOM7_IO0                     _L_(87)      /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PC23 mux F */
#define MUX_PC23F_FLEXCOM7_IO0                     _L_(5)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PC23F_FLEXCOM7_IO0                     (_U_(1) << 23) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PA26F_FLEXCOM7_IO1                     _L_(26)      /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PA26 mux F */
#define MUX_PA26F_FLEXCOM7_IO1                     _L_(5)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PA26F_FLEXCOM7_IO1                     (_U_(1) << 26) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PB24B_FLEXCOM7_IO1                     _L_(56)      /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PB24 mux B */
#define MUX_PB24B_FLEXCOM7_IO1                     _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PB24B_FLEXCOM7_IO1                     (_U_(1) << 24) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PB29F_FLEXCOM7_IO1                     _L_(61)      /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PB29 mux F */
#define MUX_PB29F_FLEXCOM7_IO1                     _L_(5)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PB29F_FLEXCOM7_IO1                     (_U_(1) << 29) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PC8B_FLEXCOM7_IO1                      _L_(72)      /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PC8 mux B */
#define MUX_PC8B_FLEXCOM7_IO1                      _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PC8B_FLEXCOM7_IO1                      (_U_(1) << 8) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PC24F_FLEXCOM7_IO1                     _L_(88)      /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PC24 mux F */
#define MUX_PC24F_FLEXCOM7_IO1                     _L_(5)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PC24F_FLEXCOM7_IO1                     (_U_(1) << 24) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PB25B_FLEXCOM7_IO2                     _L_(57)      /**< FLEXCOM7 signal: FLEXCOM7_IO2 on PB25 mux B */
#define MUX_PB25B_FLEXCOM7_IO2                     _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO2 */
#define PIO_PB25B_FLEXCOM7_IO2                     (_U_(1) << 25) /**< FLEXCOM7 signal: FLEXCOM7_IO2 */
#define PIN_PC9B_FLEXCOM7_IO2                      _L_(73)      /**< FLEXCOM7 signal: FLEXCOM7_IO2 on PC9 mux B */
#define MUX_PC9B_FLEXCOM7_IO2                      _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO2 */
#define PIO_PC9B_FLEXCOM7_IO2                      (_U_(1) << 9) /**< FLEXCOM7 signal: FLEXCOM7_IO2 */
#define PIN_PB26B_FLEXCOM7_IO3                     _L_(58)      /**< FLEXCOM7 signal: FLEXCOM7_IO3 on PB26 mux B */
#define MUX_PB26B_FLEXCOM7_IO3                     _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO3 */
#define PIO_PB26B_FLEXCOM7_IO3                     (_U_(1) << 26) /**< FLEXCOM7 signal: FLEXCOM7_IO3 */
#define PIN_PC10B_FLEXCOM7_IO3                     _L_(74)      /**< FLEXCOM7 signal: FLEXCOM7_IO3 on PC10 mux B */
#define MUX_PC10B_FLEXCOM7_IO3                     _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO3 */
#define PIO_PC10B_FLEXCOM7_IO3                     (_U_(1) << 10) /**< FLEXCOM7 signal: FLEXCOM7_IO3 */
#define PIN_PB27B_FLEXCOM7_IO4                     _L_(59)      /**< FLEXCOM7 signal: FLEXCOM7_IO4 on PB27 mux B */
#define MUX_PB27B_FLEXCOM7_IO4                     _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO4 */
#define PIO_PB27B_FLEXCOM7_IO4                     (_U_(1) << 27) /**< FLEXCOM7 signal: FLEXCOM7_IO4 */
#define PIN_PC11B_FLEXCOM7_IO4                     _L_(75)      /**< FLEXCOM7 signal: FLEXCOM7_IO4 on PC11 mux B */
#define MUX_PC11B_FLEXCOM7_IO4                     _L_(1)       /**< FLEXCOM7 signal line function value: FLEXCOM7_IO4 */
#define PIO_PC11B_FLEXCOM7_IO4                     (_U_(1) << 11) /**< FLEXCOM7 signal: FLEXCOM7_IO4 */
/* ========== PIO definition for FLEXCOM8 peripheral ========== */
#define PIN_PA27F_FLEXCOM8_IO0                     _L_(27)      /**< FLEXCOM8 signal: FLEXCOM8_IO0 on PA27 mux F */
#define MUX_PA27F_FLEXCOM8_IO0                     _L_(5)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO0 */
#define PIO_PA27F_FLEXCOM8_IO0                     (_U_(1) << 27) /**< FLEXCOM8 signal: FLEXCOM8_IO0 */
#define PIN_PB8B_FLEXCOM8_IO0                      _L_(40)      /**< FLEXCOM8 signal: FLEXCOM8_IO0 on PB8 mux B */
#define MUX_PB8B_FLEXCOM8_IO0                      _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO0 */
#define PIO_PB8B_FLEXCOM8_IO0                      (_U_(1) << 8) /**< FLEXCOM8 signal: FLEXCOM8_IO0 */
#define PIN_PB30F_FLEXCOM8_IO0                     _L_(62)      /**< FLEXCOM8 signal: FLEXCOM8_IO0 on PB30 mux F */
#define MUX_PB30F_FLEXCOM8_IO0                     _L_(5)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO0 */
#define PIO_PB30F_FLEXCOM8_IO0                     (_U_(1) << 30) /**< FLEXCOM8 signal: FLEXCOM8_IO0 */
#define PIN_PC14B_FLEXCOM8_IO0                     _L_(78)      /**< FLEXCOM8 signal: FLEXCOM8_IO0 on PC14 mux B */
#define MUX_PC14B_FLEXCOM8_IO0                     _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO0 */
#define PIO_PC14B_FLEXCOM8_IO0                     (_U_(1) << 14) /**< FLEXCOM8 signal: FLEXCOM8_IO0 */
#define PIN_PD2F_FLEXCOM8_IO0                      _L_(98)      /**< FLEXCOM8 signal: FLEXCOM8_IO0 on PD2 mux F */
#define MUX_PD2F_FLEXCOM8_IO0                      _L_(5)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO0 */
#define PIO_PD2F_FLEXCOM8_IO0                      (_U_(1) << 2) /**< FLEXCOM8 signal: FLEXCOM8_IO0 */
#define PIN_PA28F_FLEXCOM8_IO1                     _L_(28)      /**< FLEXCOM8 signal: FLEXCOM8_IO1 on PA28 mux F */
#define MUX_PA28F_FLEXCOM8_IO1                     _L_(5)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO1 */
#define PIO_PA28F_FLEXCOM8_IO1                     (_U_(1) << 28) /**< FLEXCOM8 signal: FLEXCOM8_IO1 */
#define PIN_PB9B_FLEXCOM8_IO1                      _L_(41)      /**< FLEXCOM8 signal: FLEXCOM8_IO1 on PB9 mux B */
#define MUX_PB9B_FLEXCOM8_IO1                      _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO1 */
#define PIO_PB9B_FLEXCOM8_IO1                      (_U_(1) << 9) /**< FLEXCOM8 signal: FLEXCOM8_IO1 */
#define PIN_PB31F_FLEXCOM8_IO1                     _L_(63)      /**< FLEXCOM8 signal: FLEXCOM8_IO1 on PB31 mux F */
#define MUX_PB31F_FLEXCOM8_IO1                     _L_(5)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO1 */
#define PIO_PB31F_FLEXCOM8_IO1                     (_U_(1) << 31) /**< FLEXCOM8 signal: FLEXCOM8_IO1 */
#define PIN_PC13B_FLEXCOM8_IO1                     _L_(77)      /**< FLEXCOM8 signal: FLEXCOM8_IO1 on PC13 mux B */
#define MUX_PC13B_FLEXCOM8_IO1                     _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO1 */
#define PIO_PC13B_FLEXCOM8_IO1                     (_U_(1) << 13) /**< FLEXCOM8 signal: FLEXCOM8_IO1 */
#define PIN_PD3F_FLEXCOM8_IO1                      _L_(99)      /**< FLEXCOM8 signal: FLEXCOM8_IO1 on PD3 mux F */
#define MUX_PD3F_FLEXCOM8_IO1                      _L_(5)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO1 */
#define PIO_PD3F_FLEXCOM8_IO1                      (_U_(1) << 3) /**< FLEXCOM8 signal: FLEXCOM8_IO1 */
#define PIN_PB10B_FLEXCOM8_IO2                     _L_(42)      /**< FLEXCOM8 signal: FLEXCOM8_IO2 on PB10 mux B */
#define MUX_PB10B_FLEXCOM8_IO2                     _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO2 */
#define PIO_PB10B_FLEXCOM8_IO2                     (_U_(1) << 10) /**< FLEXCOM8 signal: FLEXCOM8_IO2 */
#define PIN_PC12B_FLEXCOM8_IO2                     _L_(76)      /**< FLEXCOM8 signal: FLEXCOM8_IO2 on PC12 mux B */
#define MUX_PC12B_FLEXCOM8_IO2                     _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO2 */
#define PIO_PC12B_FLEXCOM8_IO2                     (_U_(1) << 12) /**< FLEXCOM8 signal: FLEXCOM8_IO2 */
#define PIN_PB11B_FLEXCOM8_IO3                     _L_(43)      /**< FLEXCOM8 signal: FLEXCOM8_IO3 on PB11 mux B */
#define MUX_PB11B_FLEXCOM8_IO3                     _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO3 */
#define PIO_PB11B_FLEXCOM8_IO3                     (_U_(1) << 11) /**< FLEXCOM8 signal: FLEXCOM8_IO3 */
#define PIN_PC15B_FLEXCOM8_IO3                     _L_(79)      /**< FLEXCOM8 signal: FLEXCOM8_IO3 on PC15 mux B */
#define MUX_PC15B_FLEXCOM8_IO3                     _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO3 */
#define PIO_PC15B_FLEXCOM8_IO3                     (_U_(1) << 15) /**< FLEXCOM8 signal: FLEXCOM8_IO3 */
#define PIN_PB12B_FLEXCOM8_IO4                     _L_(44)      /**< FLEXCOM8 signal: FLEXCOM8_IO4 on PB12 mux B */
#define MUX_PB12B_FLEXCOM8_IO4                     _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO4 */
#define PIO_PB12B_FLEXCOM8_IO4                     (_U_(1) << 12) /**< FLEXCOM8 signal: FLEXCOM8_IO4 */
#define PIN_PC16B_FLEXCOM8_IO4                     _L_(80)      /**< FLEXCOM8 signal: FLEXCOM8_IO4 on PC16 mux B */
#define MUX_PC16B_FLEXCOM8_IO4                     _L_(1)       /**< FLEXCOM8 signal line function value: FLEXCOM8_IO4 */
#define PIO_PC16B_FLEXCOM8_IO4                     (_U_(1) << 16) /**< FLEXCOM8 signal: FLEXCOM8_IO4 */
/* ========== PIO definition for FLEXCOM9 peripheral ========== */
#define PIN_PA29F_FLEXCOM9_IO0                     _L_(29)      /**< FLEXCOM9 signal: FLEXCOM9_IO0 on PA29 mux F */
#define MUX_PA29F_FLEXCOM9_IO0                     _L_(5)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO0 */
#define PIO_PA29F_FLEXCOM9_IO0                     (_U_(1) << 29) /**< FLEXCOM9 signal: FLEXCOM9_IO0 */
#define PIN_PB13B_FLEXCOM9_IO0                     _L_(45)      /**< FLEXCOM9 signal: FLEXCOM9_IO0 on PB13 mux B */
#define MUX_PB13B_FLEXCOM9_IO0                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO0 */
#define PIO_PB13B_FLEXCOM9_IO0                     (_U_(1) << 13) /**< FLEXCOM9 signal: FLEXCOM9_IO0 */
#define PIN_PC0F_FLEXCOM9_IO0                      _L_(64)      /**< FLEXCOM9 signal: FLEXCOM9_IO0 on PC0 mux F */
#define MUX_PC0F_FLEXCOM9_IO0                      _L_(5)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO0 */
#define PIO_PC0F_FLEXCOM9_IO0                      (_U_(1) << 0) /**< FLEXCOM9 signal: FLEXCOM9_IO0 */
#define PIN_PC18B_FLEXCOM9_IO0                     _L_(82)      /**< FLEXCOM9 signal: FLEXCOM9_IO0 on PC18 mux B */
#define MUX_PC18B_FLEXCOM9_IO0                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO0 */
#define PIO_PC18B_FLEXCOM9_IO0                     (_U_(1) << 18) /**< FLEXCOM9 signal: FLEXCOM9_IO0 */
#define PIN_PD4F_FLEXCOM9_IO0                      _L_(100)     /**< FLEXCOM9 signal: FLEXCOM9_IO0 on PD4 mux F */
#define MUX_PD4F_FLEXCOM9_IO0                      _L_(5)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO0 */
#define PIO_PD4F_FLEXCOM9_IO0                      (_U_(1) << 4) /**< FLEXCOM9 signal: FLEXCOM9_IO0 */
#define PIN_PA30F_FLEXCOM9_IO1                     _L_(30)      /**< FLEXCOM9 signal: FLEXCOM9_IO1 on PA30 mux F */
#define MUX_PA30F_FLEXCOM9_IO1                     _L_(5)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO1 */
#define PIO_PA30F_FLEXCOM9_IO1                     (_U_(1) << 30) /**< FLEXCOM9 signal: FLEXCOM9_IO1 */
#define PIN_PB14B_FLEXCOM9_IO1                     _L_(46)      /**< FLEXCOM9 signal: FLEXCOM9_IO1 on PB14 mux B */
#define MUX_PB14B_FLEXCOM9_IO1                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO1 */
#define PIO_PB14B_FLEXCOM9_IO1                     (_U_(1) << 14) /**< FLEXCOM9 signal: FLEXCOM9_IO1 */
#define PIN_PC1F_FLEXCOM9_IO1                      _L_(65)      /**< FLEXCOM9 signal: FLEXCOM9_IO1 on PC1 mux F */
#define MUX_PC1F_FLEXCOM9_IO1                      _L_(5)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO1 */
#define PIO_PC1F_FLEXCOM9_IO1                      (_U_(1) << 1) /**< FLEXCOM9 signal: FLEXCOM9_IO1 */
#define PIN_PC19B_FLEXCOM9_IO1                     _L_(83)      /**< FLEXCOM9 signal: FLEXCOM9_IO1 on PC19 mux B */
#define MUX_PC19B_FLEXCOM9_IO1                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO1 */
#define PIO_PC19B_FLEXCOM9_IO1                     (_U_(1) << 19) /**< FLEXCOM9 signal: FLEXCOM9_IO1 */
#define PIN_PD5F_FLEXCOM9_IO1                      _L_(101)     /**< FLEXCOM9 signal: FLEXCOM9_IO1 on PD5 mux F */
#define MUX_PD5F_FLEXCOM9_IO1                      _L_(5)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO1 */
#define PIO_PD5F_FLEXCOM9_IO1                      (_U_(1) << 5) /**< FLEXCOM9 signal: FLEXCOM9_IO1 */
#define PIN_PB15B_FLEXCOM9_IO2                     _L_(47)      /**< FLEXCOM9 signal: FLEXCOM9_IO2 on PB15 mux B */
#define MUX_PB15B_FLEXCOM9_IO2                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO2 */
#define PIO_PB15B_FLEXCOM9_IO2                     (_U_(1) << 15) /**< FLEXCOM9 signal: FLEXCOM9_IO2 */
#define PIN_PC21B_FLEXCOM9_IO2                     _L_(85)      /**< FLEXCOM9 signal: FLEXCOM9_IO2 on PC21 mux B */
#define MUX_PC21B_FLEXCOM9_IO2                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO2 */
#define PIO_PC21B_FLEXCOM9_IO2                     (_U_(1) << 21) /**< FLEXCOM9 signal: FLEXCOM9_IO2 */
#define PIN_PB16B_FLEXCOM9_IO3                     _L_(48)      /**< FLEXCOM9 signal: FLEXCOM9_IO3 on PB16 mux B */
#define MUX_PB16B_FLEXCOM9_IO3                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO3 */
#define PIO_PB16B_FLEXCOM9_IO3                     (_U_(1) << 16) /**< FLEXCOM9 signal: FLEXCOM9_IO3 */
#define PIN_PC22B_FLEXCOM9_IO3                     _L_(86)      /**< FLEXCOM9 signal: FLEXCOM9_IO3 on PC22 mux B */
#define MUX_PC22B_FLEXCOM9_IO3                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO3 */
#define PIO_PC22B_FLEXCOM9_IO3                     (_U_(1) << 22) /**< FLEXCOM9 signal: FLEXCOM9_IO3 */
#define PIN_PB17B_FLEXCOM9_IO4                     _L_(49)      /**< FLEXCOM9 signal: FLEXCOM9_IO4 on PB17 mux B */
#define MUX_PB17B_FLEXCOM9_IO4                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO4 */
#define PIO_PB17B_FLEXCOM9_IO4                     (_U_(1) << 17) /**< FLEXCOM9 signal: FLEXCOM9_IO4 */
#define PIN_PC20B_FLEXCOM9_IO4                     _L_(84)      /**< FLEXCOM9 signal: FLEXCOM9_IO4 on PC20 mux B */
#define MUX_PC20B_FLEXCOM9_IO4                     _L_(1)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO4 */
#define PIO_PC20B_FLEXCOM9_IO4                     (_U_(1) << 20) /**< FLEXCOM9 signal: FLEXCOM9_IO4 */
#define PIN_PB21C_FLEXCOM9_IO5                     _L_(53)      /**< FLEXCOM9 signal: FLEXCOM9_IO5 on PB21 mux C */
#define MUX_PB21C_FLEXCOM9_IO5                     _L_(2)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO5 */
#define PIO_PB21C_FLEXCOM9_IO5                     (_U_(1) << 21) /**< FLEXCOM9 signal: FLEXCOM9_IO5 */
#define PIN_PB31C_FLEXCOM9_IO5                     _L_(63)      /**< FLEXCOM9 signal: FLEXCOM9_IO5 on PB31 mux C */
#define MUX_PB31C_FLEXCOM9_IO5                     _L_(2)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO5 */
#define PIO_PB31C_FLEXCOM9_IO5                     (_U_(1) << 31) /**< FLEXCOM9 signal: FLEXCOM9_IO5 */
#define PIN_PB22C_FLEXCOM9_IO6                     _L_(54)      /**< FLEXCOM9 signal: FLEXCOM9_IO6 on PB22 mux C */
#define MUX_PB22C_FLEXCOM9_IO6                     _L_(2)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO6 */
#define PIO_PB22C_FLEXCOM9_IO6                     (_U_(1) << 22) /**< FLEXCOM9 signal: FLEXCOM9_IO6 */
#define PIN_PC4C_FLEXCOM9_IO6                      _L_(68)      /**< FLEXCOM9 signal: FLEXCOM9_IO6 on PC4 mux C */
#define MUX_PC4C_FLEXCOM9_IO6                      _L_(2)       /**< FLEXCOM9 signal line function value: FLEXCOM9_IO6 */
#define PIO_PC4C_FLEXCOM9_IO6                      (_U_(1) << 4) /**< FLEXCOM9 signal: FLEXCOM9_IO6 */
/* ========== PIO definition for FLEXCOM10 peripheral ========== */
#define PIN_PA31F_FLEXCOM10_IO0                    _L_(31)      /**< FLEXCOM10 signal: FLEXCOM10_IO0 on PA31 mux F */
#define MUX_PA31F_FLEXCOM10_IO0                    _L_(5)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO0 */
#define PIO_PA31F_FLEXCOM10_IO0                    (_U_(1) << 31) /**< FLEXCOM10 signal: FLEXCOM10_IO0 */
#define PIN_PB18B_FLEXCOM10_IO0                    _L_(50)      /**< FLEXCOM10 signal: FLEXCOM10_IO0 on PB18 mux B */
#define MUX_PB18B_FLEXCOM10_IO0                    _L_(1)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO0 */
#define PIO_PB18B_FLEXCOM10_IO0                    (_U_(1) << 18) /**< FLEXCOM10 signal: FLEXCOM10_IO0 */
#define PIN_PC2F_FLEXCOM10_IO0                     _L_(66)      /**< FLEXCOM10 signal: FLEXCOM10_IO0 on PC2 mux F */
#define MUX_PC2F_FLEXCOM10_IO0                     _L_(5)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO0 */
#define PIO_PC2F_FLEXCOM10_IO0                     (_U_(1) << 2) /**< FLEXCOM10 signal: FLEXCOM10_IO0 */
#define PIN_PC30B_FLEXCOM10_IO0                    _L_(94)      /**< FLEXCOM10 signal: FLEXCOM10_IO0 on PC30 mux B */
#define MUX_PC30B_FLEXCOM10_IO0                    _L_(1)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO0 */
#define PIO_PC30B_FLEXCOM10_IO0                    (_U_(1) << 30) /**< FLEXCOM10 signal: FLEXCOM10_IO0 */
#define PIN_PD6F_FLEXCOM10_IO0                     _L_(102)     /**< FLEXCOM10 signal: FLEXCOM10_IO0 on PD6 mux F */
#define MUX_PD6F_FLEXCOM10_IO0                     _L_(5)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO0 */
#define PIO_PD6F_FLEXCOM10_IO0                     (_U_(1) << 6) /**< FLEXCOM10 signal: FLEXCOM10_IO0 */
#define PIN_PB0F_FLEXCOM10_IO1                     _L_(32)      /**< FLEXCOM10 signal: FLEXCOM10_IO1 on PB0 mux F */
#define MUX_PB0F_FLEXCOM10_IO1                     _L_(5)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO1 */
#define PIO_PB0F_FLEXCOM10_IO1                     (_U_(1) << 0) /**< FLEXCOM10 signal: FLEXCOM10_IO1 */
#define PIN_PB19B_FLEXCOM10_IO1                    _L_(51)      /**< FLEXCOM10 signal: FLEXCOM10_IO1 on PB19 mux B */
#define MUX_PB19B_FLEXCOM10_IO1                    _L_(1)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO1 */
#define PIO_PB19B_FLEXCOM10_IO1                    (_U_(1) << 19) /**< FLEXCOM10 signal: FLEXCOM10_IO1 */
#define PIN_PC3F_FLEXCOM10_IO1                     _L_(67)      /**< FLEXCOM10 signal: FLEXCOM10_IO1 on PC3 mux F */
#define MUX_PC3F_FLEXCOM10_IO1                     _L_(5)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO1 */
#define PIO_PC3F_FLEXCOM10_IO1                     (_U_(1) << 3) /**< FLEXCOM10 signal: FLEXCOM10_IO1 */
#define PIN_PC31B_FLEXCOM10_IO1                    _L_(95)      /**< FLEXCOM10 signal: FLEXCOM10_IO1 on PC31 mux B */
#define MUX_PC31B_FLEXCOM10_IO1                    _L_(1)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO1 */
#define PIO_PC31B_FLEXCOM10_IO1                    (_U_(1) << 31) /**< FLEXCOM10 signal: FLEXCOM10_IO1 */
#define PIN_PD7F_FLEXCOM10_IO1                     _L_(103)     /**< FLEXCOM10 signal: FLEXCOM10_IO1 on PD7 mux F */
#define MUX_PD7F_FLEXCOM10_IO1                     _L_(5)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO1 */
#define PIO_PD7F_FLEXCOM10_IO1                     (_U_(1) << 7) /**< FLEXCOM10 signal: FLEXCOM10_IO1 */
#define PIN_PB20B_FLEXCOM10_IO2                    _L_(52)      /**< FLEXCOM10 signal: FLEXCOM10_IO2 on PB20 mux B */
#define MUX_PB20B_FLEXCOM10_IO2                    _L_(1)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO2 */
#define PIO_PB20B_FLEXCOM10_IO2                    (_U_(1) << 20) /**< FLEXCOM10 signal: FLEXCOM10_IO2 */
#define PIN_PB21B_FLEXCOM10_IO3                    _L_(53)      /**< FLEXCOM10 signal: FLEXCOM10_IO3 on PB21 mux B */
#define MUX_PB21B_FLEXCOM10_IO3                    _L_(1)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO3 */
#define PIO_PB21B_FLEXCOM10_IO3                    (_U_(1) << 21) /**< FLEXCOM10 signal: FLEXCOM10_IO3 */
#define PIN_PB22B_FLEXCOM10_IO4                    _L_(54)      /**< FLEXCOM10 signal: FLEXCOM10_IO4 on PB22 mux B */
#define MUX_PB22B_FLEXCOM10_IO4                    _L_(1)       /**< FLEXCOM10 signal line function value: FLEXCOM10_IO4 */
#define PIO_PB22B_FLEXCOM10_IO4                    (_U_(1) << 22) /**< FLEXCOM10 signal: FLEXCOM10_IO4 */
/* ========== PIO definition for FLEXCOM11 peripheral ========== */
#define PIN_PB1F_FLEXCOM11_IO0                     _L_(33)      /**< FLEXCOM11 signal: FLEXCOM11_IO0 on PB1 mux F */
#define MUX_PB1F_FLEXCOM11_IO0                     _L_(5)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO0 */
#define PIO_PB1F_FLEXCOM11_IO0                     (_U_(1) << 1) /**< FLEXCOM11 signal: FLEXCOM11_IO0 */
#define PIN_PB3B_FLEXCOM11_IO0                     _L_(35)      /**< FLEXCOM11 signal: FLEXCOM11_IO0 on PB3 mux B */
#define MUX_PB3B_FLEXCOM11_IO0                     _L_(1)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO0 */
#define PIO_PB3B_FLEXCOM11_IO0                     (_U_(1) << 3) /**< FLEXCOM11 signal: FLEXCOM11_IO0 */
#define PIN_PC4F_FLEXCOM11_IO0                     _L_(68)      /**< FLEXCOM11 signal: FLEXCOM11_IO0 on PC4 mux F */
#define MUX_PC4F_FLEXCOM11_IO0                     _L_(5)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO0 */
#define PIO_PC4F_FLEXCOM11_IO0                     (_U_(1) << 4) /**< FLEXCOM11 signal: FLEXCOM11_IO0 */
#define PIN_PD0B_FLEXCOM11_IO0                     _L_(96)      /**< FLEXCOM11 signal: FLEXCOM11_IO0 on PD0 mux B */
#define MUX_PD0B_FLEXCOM11_IO0                     _L_(1)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO0 */
#define PIO_PD0B_FLEXCOM11_IO0                     (_U_(1) << 0) /**< FLEXCOM11 signal: FLEXCOM11_IO0 */
#define PIN_PD8F_FLEXCOM11_IO0                     _L_(104)     /**< FLEXCOM11 signal: FLEXCOM11_IO0 on PD8 mux F */
#define MUX_PD8F_FLEXCOM11_IO0                     _L_(5)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO0 */
#define PIO_PD8F_FLEXCOM11_IO0                     (_U_(1) << 8) /**< FLEXCOM11 signal: FLEXCOM11_IO0 */
#define PIN_PB2F_FLEXCOM11_IO1                     _L_(34)      /**< FLEXCOM11 signal: FLEXCOM11_IO1 on PB2 mux F */
#define MUX_PB2F_FLEXCOM11_IO1                     _L_(5)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO1 */
#define PIO_PB2F_FLEXCOM11_IO1                     (_U_(1) << 2) /**< FLEXCOM11 signal: FLEXCOM11_IO1 */
#define PIN_PB4B_FLEXCOM11_IO1                     _L_(36)      /**< FLEXCOM11 signal: FLEXCOM11_IO1 on PB4 mux B */
#define MUX_PB4B_FLEXCOM11_IO1                     _L_(1)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO1 */
#define PIO_PB4B_FLEXCOM11_IO1                     (_U_(1) << 4) /**< FLEXCOM11 signal: FLEXCOM11_IO1 */
#define PIN_PC5F_FLEXCOM11_IO1                     _L_(69)      /**< FLEXCOM11 signal: FLEXCOM11_IO1 on PC5 mux F */
#define MUX_PC5F_FLEXCOM11_IO1                     _L_(5)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO1 */
#define PIO_PC5F_FLEXCOM11_IO1                     (_U_(1) << 5) /**< FLEXCOM11 signal: FLEXCOM11_IO1 */
#define PIN_PD1B_FLEXCOM11_IO1                     _L_(97)      /**< FLEXCOM11 signal: FLEXCOM11_IO1 on PD1 mux B */
#define MUX_PD1B_FLEXCOM11_IO1                     _L_(1)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO1 */
#define PIO_PD1B_FLEXCOM11_IO1                     (_U_(1) << 1) /**< FLEXCOM11 signal: FLEXCOM11_IO1 */
#define PIN_PD9F_FLEXCOM11_IO1                     _L_(105)     /**< FLEXCOM11 signal: FLEXCOM11_IO1 on PD9 mux F */
#define MUX_PD9F_FLEXCOM11_IO1                     _L_(5)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO1 */
#define PIO_PD9F_FLEXCOM11_IO1                     (_U_(1) << 9) /**< FLEXCOM11 signal: FLEXCOM11_IO1 */
#define PIN_PB5B_FLEXCOM11_IO2                     _L_(37)      /**< FLEXCOM11 signal: FLEXCOM11_IO2 on PB5 mux B */
#define MUX_PB5B_FLEXCOM11_IO2                     _L_(1)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO2 */
#define PIO_PB5B_FLEXCOM11_IO2                     (_U_(1) << 5) /**< FLEXCOM11 signal: FLEXCOM11_IO2 */
#define PIN_PB6B_FLEXCOM11_IO3                     _L_(38)      /**< FLEXCOM11 signal: FLEXCOM11_IO3 on PB6 mux B */
#define MUX_PB6B_FLEXCOM11_IO3                     _L_(1)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO3 */
#define PIO_PB6B_FLEXCOM11_IO3                     (_U_(1) << 6) /**< FLEXCOM11 signal: FLEXCOM11_IO3 */
#define PIN_PB7B_FLEXCOM11_IO4                     _L_(39)      /**< FLEXCOM11 signal: FLEXCOM11_IO4 on PB7 mux B */
#define MUX_PB7B_FLEXCOM11_IO4                     _L_(1)       /**< FLEXCOM11 signal line function value: FLEXCOM11_IO4 */
#define PIO_PB7B_FLEXCOM11_IO4                     (_U_(1) << 7) /**< FLEXCOM11 signal: FLEXCOM11_IO4 */
/* ========== PIO definition for GMAC0 peripheral ========== */
#define PIN_PA25A_GMAC0_G0_125CK                   _L_(25)      /**< GMAC0 signal: GMAC0_G0_125CK on PA25 mux A */
#define MUX_PA25A_GMAC0_G0_125CK                   _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_125CK */
#define PIO_PA25A_GMAC0_G0_125CK                   (_U_(1) << 25) /**< GMAC0 signal: GMAC0_G0_125CK */
#define PIN_PB0A_GMAC0_G0_COL                      _L_(32)      /**< GMAC0 signal: GMAC0_G0_COL on PB0 mux A */
#define MUX_PB0A_GMAC0_G0_COL                      _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_COL */
#define PIO_PB0A_GMAC0_G0_COL                      (_U_(1) << 0) /**< GMAC0 signal: GMAC0_G0_COL */
#define PIN_PB1A_GMAC0_G0_CRS                      _L_(33)      /**< GMAC0 signal: GMAC0_G0_CRS on PB1 mux A */
#define MUX_PB1A_GMAC0_G0_CRS                      _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_CRS */
#define PIO_PB1A_GMAC0_G0_CRS                      (_U_(1) << 1) /**< GMAC0 signal: GMAC0_G0_CRS */
#define PIN_PA22A_GMAC0_G0_MDC                     _L_(22)      /**< GMAC0 signal: GMAC0_G0_MDC on PA22 mux A */
#define MUX_PA22A_GMAC0_G0_MDC                     _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_MDC */
#define PIO_PA22A_GMAC0_G0_MDC                     (_U_(1) << 22) /**< GMAC0 signal: GMAC0_G0_MDC */
#define PIN_PA23A_GMAC0_G0_MDIO                    _L_(23)      /**< GMAC0 signal: GMAC0_G0_MDIO on PA23 mux A */
#define MUX_PA23A_GMAC0_G0_MDIO                    _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_MDIO */
#define PIO_PA23A_GMAC0_G0_MDIO                    (_U_(1) << 23) /**< GMAC0 signal: GMAC0_G0_MDIO */
#define PIN_PA19A_GMAC0_G0_RX0                     _L_(19)      /**< GMAC0 signal: GMAC0_G0_RX0 on PA19 mux A */
#define MUX_PA19A_GMAC0_G0_RX0                     _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_RX0 */
#define PIO_PA19A_GMAC0_G0_RX0                     (_U_(1) << 19) /**< GMAC0 signal: GMAC0_G0_RX0 */
#define PIN_PA20A_GMAC0_G0_RX1                     _L_(20)      /**< GMAC0 signal: GMAC0_G0_RX1 on PA20 mux A */
#define MUX_PA20A_GMAC0_G0_RX1                     _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_RX1 */
#define PIO_PA20A_GMAC0_G0_RX1                     (_U_(1) << 20) /**< GMAC0 signal: GMAC0_G0_RX1 */
#define PIN_PA28A_GMAC0_G0_RX2                     _L_(28)      /**< GMAC0 signal: GMAC0_G0_RX2 on PA28 mux A */
#define MUX_PA28A_GMAC0_G0_RX2                     _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_RX2 */
#define PIO_PA28A_GMAC0_G0_RX2                     (_U_(1) << 28) /**< GMAC0 signal: GMAC0_G0_RX2 */
#define PIN_PA29A_GMAC0_G0_RX3                     _L_(29)      /**< GMAC0 signal: GMAC0_G0_RX3 on PA29 mux A */
#define MUX_PA29A_GMAC0_G0_RX3                     _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_RX3 */
#define PIO_PA29A_GMAC0_G0_RX3                     (_U_(1) << 29) /**< GMAC0 signal: GMAC0_G0_RX3 */
#define PIN_PA30A_GMAC0_G0_RXCK                    _L_(30)      /**< GMAC0 signal: GMAC0_G0_RXCK on PA30 mux A */
#define MUX_PA30A_GMAC0_G0_RXCK                    _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_RXCK */
#define PIO_PA30A_GMAC0_G0_RXCK                    (_U_(1) << 30) /**< GMAC0 signal: GMAC0_G0_RXCK */
#define PIN_PA18A_GMAC0_G0_RXDV                    _L_(18)      /**< GMAC0 signal: GMAC0_G0_RXDV on PA18 mux A */
#define MUX_PA18A_GMAC0_G0_RXDV                    _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_RXDV */
#define PIO_PA18A_GMAC0_G0_RXDV                    (_U_(1) << 18) /**< GMAC0 signal: GMAC0_G0_RXDV */
#define PIN_PA21A_GMAC0_G0_RXER                    _L_(21)      /**< GMAC0 signal: GMAC0_G0_RXER on PA21 mux A */
#define MUX_PA21A_GMAC0_G0_RXER                    _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_RXER */
#define PIO_PA21A_GMAC0_G0_RXER                    (_U_(1) << 21) /**< GMAC0 signal: GMAC0_G0_RXER */
#define PIN_PB2A_GMAC0_G0_TSUCOMP                  _L_(34)      /**< GMAC0 signal: GMAC0_G0_TSUCOMP on PB2 mux A */
#define MUX_PB2A_GMAC0_G0_TSUCOMP                  _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_TSUCOMP */
#define PIO_PB2A_GMAC0_G0_TSUCOMP                  (_U_(1) << 2) /**< GMAC0 signal: GMAC0_G0_TSUCOMP */
#define PIN_PA16A_GMAC0_G0_TX0                     _L_(16)      /**< GMAC0 signal: GMAC0_G0_TX0 on PA16 mux A */
#define MUX_PA16A_GMAC0_G0_TX0                     _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_TX0 */
#define PIO_PA16A_GMAC0_G0_TX0                     (_U_(1) << 16) /**< GMAC0 signal: GMAC0_G0_TX0 */
#define PIN_PA17A_GMAC0_G0_TX1                     _L_(17)      /**< GMAC0 signal: GMAC0_G0_TX1 on PA17 mux A */
#define MUX_PA17A_GMAC0_G0_TX1                     _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_TX1 */
#define PIO_PA17A_GMAC0_G0_TX1                     (_U_(1) << 17) /**< GMAC0 signal: GMAC0_G0_TX1 */
#define PIN_PA26A_GMAC0_G0_TX2                     _L_(26)      /**< GMAC0 signal: GMAC0_G0_TX2 on PA26 mux A */
#define MUX_PA26A_GMAC0_G0_TX2                     _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_TX2 */
#define PIO_PA26A_GMAC0_G0_TX2                     (_U_(1) << 26) /**< GMAC0 signal: GMAC0_G0_TX2 */
#define PIN_PA27A_GMAC0_G0_TX3                     _L_(27)      /**< GMAC0 signal: GMAC0_G0_TX3 on PA27 mux A */
#define MUX_PA27A_GMAC0_G0_TX3                     _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_TX3 */
#define PIO_PA27A_GMAC0_G0_TX3                     (_U_(1) << 27) /**< GMAC0 signal: GMAC0_G0_TX3 */
#define PIN_PA24A_GMAC0_G0_TXCK                    _L_(24)      /**< GMAC0 signal: GMAC0_G0_TXCK on PA24 mux A */
#define MUX_PA24A_GMAC0_G0_TXCK                    _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_TXCK */
#define PIO_PA24A_GMAC0_G0_TXCK                    (_U_(1) << 24) /**< GMAC0 signal: GMAC0_G0_TXCK */
#define PIN_PA15A_GMAC0_G0_TXEN                    _L_(15)      /**< GMAC0 signal: GMAC0_G0_TXEN on PA15 mux A */
#define MUX_PA15A_GMAC0_G0_TXEN                    _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_TXEN */
#define PIO_PA15A_GMAC0_G0_TXEN                    (_U_(1) << 15) /**< GMAC0 signal: GMAC0_G0_TXEN */
#define PIN_PA31A_GMAC0_G0_TXER                    _L_(31)      /**< GMAC0 signal: GMAC0_G0_TXER on PA31 mux A */
#define MUX_PA31A_GMAC0_G0_TXER                    _L_(0)       /**< GMAC0 signal line function value: GMAC0_G0_TXER */
#define PIO_PA31A_GMAC0_G0_TXER                    (_U_(1) << 31) /**< GMAC0 signal: GMAC0_G0_TXER */
/* ========== PIO definition for GMAC1 peripheral ========== */
#define PIN_PE5G_GMAC1_G1_COL                      _L_(133)     /**< GMAC1 signal: GMAC1_G1_COL on PE5 mux G */
#define MUX_PE5G_GMAC1_G1_COL                      _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_COL */
#define PIO_PE5G_GMAC1_G1_COL                      (_U_(1) << 5) /**< GMAC1 signal: GMAC1_G1_COL */
#define PIN_PE6G_GMAC1_G1_CRS                      _L_(134)     /**< GMAC1 signal: GMAC1_G1_CRS on PE6 mux G */
#define MUX_PE6G_GMAC1_G1_CRS                      _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_CRS */
#define PIO_PE6G_GMAC1_G1_CRS                      (_U_(1) << 6) /**< GMAC1 signal: GMAC1_G1_CRS */
#define PIN_PD28G_GMAC1_G1_MDC                     _L_(124)     /**< GMAC1 signal: GMAC1_G1_MDC on PD28 mux G */
#define MUX_PD28G_GMAC1_G1_MDC                     _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_MDC */
#define PIO_PD28G_GMAC1_G1_MDC                     (_U_(1) << 28) /**< GMAC1 signal: GMAC1_G1_MDC */
#define PIN_PD29G_GMAC1_G1_MDIO                    _L_(125)     /**< GMAC1 signal: GMAC1_G1_MDIO on PD29 mux G */
#define MUX_PD29G_GMAC1_G1_MDIO                    _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_MDIO */
#define PIO_PD29G_GMAC1_G1_MDIO                    (_U_(1) << 29) /**< GMAC1 signal: GMAC1_G1_MDIO */
#define PIN_PD25G_GMAC1_G1_RX0                     _L_(121)     /**< GMAC1 signal: GMAC1_G1_RX0 on PD25 mux G */
#define MUX_PD25G_GMAC1_G1_RX0                     _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_RX0 */
#define PIO_PD25G_GMAC1_G1_RX0                     (_U_(1) << 25) /**< GMAC1 signal: GMAC1_G1_RX0 */
#define PIN_PD26G_GMAC1_G1_RX1                     _L_(122)     /**< GMAC1 signal: GMAC1_G1_RX1 on PD26 mux G */
#define MUX_PD26G_GMAC1_G1_RX1                     _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_RX1 */
#define PIO_PD26G_GMAC1_G1_RX1                     (_U_(1) << 26) /**< GMAC1 signal: GMAC1_G1_RX1 */
#define PIN_PE1G_GMAC1_G1_RX2                      _L_(129)     /**< GMAC1 signal: GMAC1_G1_RX2 on PE1 mux G */
#define MUX_PE1G_GMAC1_G1_RX2                      _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_RX2 */
#define PIO_PE1G_GMAC1_G1_RX2                      (_U_(1) << 1) /**< GMAC1 signal: GMAC1_G1_RX2 */
#define PIN_PE2G_GMAC1_G1_RX3                      _L_(130)     /**< GMAC1 signal: GMAC1_G1_RX3 on PE2 mux G */
#define MUX_PE2G_GMAC1_G1_RX3                      _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_RX3 */
#define PIO_PE2G_GMAC1_G1_RX3                      (_U_(1) << 2) /**< GMAC1 signal: GMAC1_G1_RX3 */
#define PIN_PE3G_GMAC1_G1_RXCK                     _L_(131)     /**< GMAC1 signal: GMAC1_G1_RXCK on PE3 mux G */
#define MUX_PE3G_GMAC1_G1_RXCK                     _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_RXCK */
#define PIO_PE3G_GMAC1_G1_RXCK                     (_U_(1) << 3) /**< GMAC1 signal: GMAC1_G1_RXCK */
#define PIN_PD24G_GMAC1_G1_RXDV                    _L_(120)     /**< GMAC1 signal: GMAC1_G1_RXDV on PD24 mux G */
#define MUX_PD24G_GMAC1_G1_RXDV                    _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_RXDV */
#define PIO_PD24G_GMAC1_G1_RXDV                    (_U_(1) << 24) /**< GMAC1 signal: GMAC1_G1_RXDV */
#define PIN_PD27G_GMAC1_G1_RXER                    _L_(123)     /**< GMAC1 signal: GMAC1_G1_RXER on PD27 mux G */
#define MUX_PD27G_GMAC1_G1_RXER                    _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_RXER */
#define PIO_PD27G_GMAC1_G1_RXER                    (_U_(1) << 27) /**< GMAC1 signal: GMAC1_G1_RXER */
#define PIN_PE7G_GMAC1_G1_TSUCOMP                  _L_(135)     /**< GMAC1 signal: GMAC1_G1_TSUCOMP on PE7 mux G */
#define MUX_PE7G_GMAC1_G1_TSUCOMP                  _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_TSUCOMP */
#define PIO_PE7G_GMAC1_G1_TSUCOMP                  (_U_(1) << 7) /**< GMAC1 signal: GMAC1_G1_TSUCOMP */
#define PIN_PD22G_GMAC1_G1_TX0                     _L_(118)     /**< GMAC1 signal: GMAC1_G1_TX0 on PD22 mux G */
#define MUX_PD22G_GMAC1_G1_TX0                     _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_TX0 */
#define PIO_PD22G_GMAC1_G1_TX0                     (_U_(1) << 22) /**< GMAC1 signal: GMAC1_G1_TX0 */
#define PIN_PD23G_GMAC1_G1_TX1                     _L_(119)     /**< GMAC1 signal: GMAC1_G1_TX1 on PD23 mux G */
#define MUX_PD23G_GMAC1_G1_TX1                     _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_TX1 */
#define PIO_PD23G_GMAC1_G1_TX1                     (_U_(1) << 23) /**< GMAC1 signal: GMAC1_G1_TX1 */
#define PIN_PD31G_GMAC1_G1_TX2                     _L_(127)     /**< GMAC1 signal: GMAC1_G1_TX2 on PD31 mux G */
#define MUX_PD31G_GMAC1_G1_TX2                     _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_TX2 */
#define PIO_PD31G_GMAC1_G1_TX2                     (_U_(1) << 31) /**< GMAC1 signal: GMAC1_G1_TX2 */
#define PIN_PE0G_GMAC1_G1_TX3                      _L_(128)     /**< GMAC1 signal: GMAC1_G1_TX3 on PE0 mux G */
#define MUX_PE0G_GMAC1_G1_TX3                      _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_TX3 */
#define PIO_PE0G_GMAC1_G1_TX3                      (_U_(1) << 0) /**< GMAC1 signal: GMAC1_G1_TX3 */
#define PIN_PD30G_GMAC1_G1_TXCK                    _L_(126)     /**< GMAC1 signal: GMAC1_G1_TXCK on PD30 mux G */
#define MUX_PD30G_GMAC1_G1_TXCK                    _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_TXCK */
#define PIO_PD30G_GMAC1_G1_TXCK                    (_U_(1) << 30) /**< GMAC1 signal: GMAC1_G1_TXCK */
#define PIN_PD21G_GMAC1_G1_TXEN                    _L_(117)     /**< GMAC1 signal: GMAC1_G1_TXEN on PD21 mux G */
#define MUX_PD21G_GMAC1_G1_TXEN                    _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_TXEN */
#define PIO_PD21G_GMAC1_G1_TXEN                    (_U_(1) << 21) /**< GMAC1 signal: GMAC1_G1_TXEN */
#define PIN_PE4G_GMAC1_G1_TXER                     _L_(132)     /**< GMAC1 signal: GMAC1_G1_TXER on PE4 mux G */
#define MUX_PE4G_GMAC1_G1_TXER                     _L_(6)       /**< GMAC1 signal line function value: GMAC1_G1_TXER */
#define PIO_PE4G_GMAC1_G1_TXER                     (_U_(1) << 4) /**< GMAC1 signal: GMAC1_G1_TXER */
/* ========== PIO definition for I2SMCC0 peripheral ========== */
#define PIN_PB23C_I2SMCC0_CK                       _L_(55)      /**< I2SMCC0 signal: I2SMCC0_CK on PB23 mux C */
#define MUX_PB23C_I2SMCC0_CK                       _L_(2)       /**< I2SMCC0 signal line function value: I2SMCC0_CK */
#define PIO_PB23C_I2SMCC0_CK                       (_U_(1) << 23) /**< I2SMCC0 signal: I2SMCC0_CK */
#define PIN_PD13A_I2SMCC0_CK                       _L_(109)     /**< I2SMCC0 signal: I2SMCC0_CK on PD13 mux A */
#define MUX_PD13A_I2SMCC0_CK                       _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_CK */
#define PIO_PD13A_I2SMCC0_CK                       (_U_(1) << 13) /**< I2SMCC0 signal: I2SMCC0_CK */
#define PIN_PC7A_I2SMCC0_DIN0                      _L_(71)      /**< I2SMCC0 signal: I2SMCC0_DIN0 on PC7 mux A */
#define MUX_PC7A_I2SMCC0_DIN0                      _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DIN0 */
#define PIO_PC7A_I2SMCC0_DIN0                      (_U_(1) << 7) /**< I2SMCC0 signal: I2SMCC0_DIN0 */
#define PIN_PD8C_I2SMCC0_DIN0                      _L_(104)     /**< I2SMCC0 signal: I2SMCC0_DIN0 on PD8 mux C */
#define MUX_PD8C_I2SMCC0_DIN0                      _L_(2)       /**< I2SMCC0 signal line function value: I2SMCC0_DIN0 */
#define PIO_PD8C_I2SMCC0_DIN0                      (_U_(1) << 8) /**< I2SMCC0 signal: I2SMCC0_DIN0 */
#define PIN_PC8A_I2SMCC0_DIN1                      _L_(72)      /**< I2SMCC0 signal: I2SMCC0_DIN1 on PC8 mux A */
#define MUX_PC8A_I2SMCC0_DIN1                      _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DIN1 */
#define PIO_PC8A_I2SMCC0_DIN1                      (_U_(1) << 8) /**< I2SMCC0 signal: I2SMCC0_DIN1 */
#define PIN_PD9C_I2SMCC0_DIN1                      _L_(105)     /**< I2SMCC0 signal: I2SMCC0_DIN1 on PD9 mux C */
#define MUX_PD9C_I2SMCC0_DIN1                      _L_(2)       /**< I2SMCC0 signal line function value: I2SMCC0_DIN1 */
#define PIO_PD9C_I2SMCC0_DIN1                      (_U_(1) << 9) /**< I2SMCC0 signal: I2SMCC0_DIN1 */
#define PIN_PC22A_I2SMCC0_DIN2                     _L_(86)      /**< I2SMCC0 signal: I2SMCC0_DIN2 on PC22 mux A */
#define MUX_PC22A_I2SMCC0_DIN2                     _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DIN2 */
#define PIO_PC22A_I2SMCC0_DIN2                     (_U_(1) << 22) /**< I2SMCC0 signal: I2SMCC0_DIN2 */
#define PIN_PD10C_I2SMCC0_DIN2                     _L_(106)     /**< I2SMCC0 signal: I2SMCC0_DIN2 on PD10 mux C */
#define MUX_PD10C_I2SMCC0_DIN2                     _L_(2)       /**< I2SMCC0 signal line function value: I2SMCC0_DIN2 */
#define PIO_PD10C_I2SMCC0_DIN2                     (_U_(1) << 10) /**< I2SMCC0 signal: I2SMCC0_DIN2 */
#define PIN_PC23A_I2SMCC0_DIN3                     _L_(87)      /**< I2SMCC0 signal: I2SMCC0_DIN3 on PC23 mux A */
#define MUX_PC23A_I2SMCC0_DIN3                     _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DIN3 */
#define PIO_PC23A_I2SMCC0_DIN3                     (_U_(1) << 23) /**< I2SMCC0 signal: I2SMCC0_DIN3 */
#define PIN_PD11C_I2SMCC0_DIN3                     _L_(107)     /**< I2SMCC0 signal: I2SMCC0_DIN3 on PD11 mux C */
#define MUX_PD11C_I2SMCC0_DIN3                     _L_(2)       /**< I2SMCC0 signal line function value: I2SMCC0_DIN3 */
#define PIO_PD11C_I2SMCC0_DIN3                     (_U_(1) << 11) /**< I2SMCC0 signal: I2SMCC0_DIN3 */
#define PIN_PB26C_I2SMCC0_DOUT0                    _L_(58)      /**< I2SMCC0 signal: I2SMCC0_DOUT0 on PB26 mux C */
#define MUX_PB26C_I2SMCC0_DOUT0                    _L_(2)       /**< I2SMCC0 signal line function value: I2SMCC0_DOUT0 */
#define PIO_PB26C_I2SMCC0_DOUT0                    (_U_(1) << 26) /**< I2SMCC0 signal: I2SMCC0_DOUT0 */
#define PIN_PD16A_I2SMCC0_DOUT0                    _L_(112)     /**< I2SMCC0 signal: I2SMCC0_DOUT0 on PD16 mux A */
#define MUX_PD16A_I2SMCC0_DOUT0                    _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DOUT0 */
#define PIO_PD16A_I2SMCC0_DOUT0                    (_U_(1) << 16) /**< I2SMCC0 signal: I2SMCC0_DOUT0 */
#define PIN_PB25C_I2SMCC0_DOUT1                    _L_(57)      /**< I2SMCC0 signal: I2SMCC0_DOUT1 on PB25 mux C */
#define MUX_PB25C_I2SMCC0_DOUT1                    _L_(2)       /**< I2SMCC0 signal line function value: I2SMCC0_DOUT1 */
#define PIO_PB25C_I2SMCC0_DOUT1                    (_U_(1) << 25) /**< I2SMCC0 signal: I2SMCC0_DOUT1 */
#define PIN_PD17A_I2SMCC0_DOUT1                    _L_(113)     /**< I2SMCC0 signal: I2SMCC0_DOUT1 on PD17 mux A */
#define MUX_PD17A_I2SMCC0_DOUT1                    _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DOUT1 */
#define PIO_PD17A_I2SMCC0_DOUT1                    (_U_(1) << 17) /**< I2SMCC0 signal: I2SMCC0_DOUT1 */
#define PIN_PC10A_I2SMCC0_DOUT2                    _L_(74)      /**< I2SMCC0 signal: I2SMCC0_DOUT2 on PC10 mux A */
#define MUX_PC10A_I2SMCC0_DOUT2                    _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DOUT2 */
#define PIO_PC10A_I2SMCC0_DOUT2                    (_U_(1) << 10) /**< I2SMCC0 signal: I2SMCC0_DOUT2 */
#define PIN_PD18A_I2SMCC0_DOUT2                    _L_(114)     /**< I2SMCC0 signal: I2SMCC0_DOUT2 on PD18 mux A */
#define MUX_PD18A_I2SMCC0_DOUT2                    _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DOUT2 */
#define PIO_PD18A_I2SMCC0_DOUT2                    (_U_(1) << 18) /**< I2SMCC0 signal: I2SMCC0_DOUT2 */
#define PIN_PC9A_I2SMCC0_DOUT3                     _L_(73)      /**< I2SMCC0 signal: I2SMCC0_DOUT3 on PC9 mux A */
#define MUX_PC9A_I2SMCC0_DOUT3                     _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DOUT3 */
#define PIO_PC9A_I2SMCC0_DOUT3                     (_U_(1) << 9) /**< I2SMCC0 signal: I2SMCC0_DOUT3 */
#define PIN_PD19A_I2SMCC0_DOUT3                    _L_(115)     /**< I2SMCC0 signal: I2SMCC0_DOUT3 on PD19 mux A */
#define MUX_PD19A_I2SMCC0_DOUT3                    _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_DOUT3 */
#define PIO_PD19A_I2SMCC0_DOUT3                    (_U_(1) << 19) /**< I2SMCC0 signal: I2SMCC0_DOUT3 */
#define PIN_PB27C_I2SMCC0_MCK                      _L_(59)      /**< I2SMCC0 signal: I2SMCC0_MCK on PB27 mux C */
#define MUX_PB27C_I2SMCC0_MCK                      _L_(2)       /**< I2SMCC0 signal line function value: I2SMCC0_MCK */
#define PIO_PB27C_I2SMCC0_MCK                      (_U_(1) << 27) /**< I2SMCC0 signal: I2SMCC0_MCK */
#define PIN_PD14A_I2SMCC0_MCK                      _L_(110)     /**< I2SMCC0 signal: I2SMCC0_MCK on PD14 mux A */
#define MUX_PD14A_I2SMCC0_MCK                      _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_MCK */
#define PIO_PD14A_I2SMCC0_MCK                      (_U_(1) << 14) /**< I2SMCC0 signal: I2SMCC0_MCK */
#define PIN_PB24C_I2SMCC0_WS                       _L_(56)      /**< I2SMCC0 signal: I2SMCC0_WS on PB24 mux C */
#define MUX_PB24C_I2SMCC0_WS                       _L_(2)       /**< I2SMCC0 signal line function value: I2SMCC0_WS */
#define PIO_PB24C_I2SMCC0_WS                       (_U_(1) << 24) /**< I2SMCC0 signal: I2SMCC0_WS */
#define PIN_PD15A_I2SMCC0_WS                       _L_(111)     /**< I2SMCC0 signal: I2SMCC0_WS on PD15 mux A */
#define MUX_PD15A_I2SMCC0_WS                       _L_(0)       /**< I2SMCC0 signal line function value: I2SMCC0_WS */
#define PIO_PD15A_I2SMCC0_WS                       (_U_(1) << 15) /**< I2SMCC0 signal: I2SMCC0_WS */
/* ========== PIO definition for I2SMCC1 peripheral ========== */
#define PIN_PC11A_I2SMCC1_CK                       _L_(75)      /**< I2SMCC1 signal: I2SMCC1_CK on PC11 mux A */
#define MUX_PC11A_I2SMCC1_CK                       _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_CK */
#define PIO_PC11A_I2SMCC1_CK                       (_U_(1) << 11) /**< I2SMCC1 signal: I2SMCC1_CK */
#define PIN_PD28D_I2SMCC1_CK                       _L_(124)     /**< I2SMCC1 signal: I2SMCC1_CK on PD28 mux D */
#define MUX_PD28D_I2SMCC1_CK                       _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_CK */
#define PIO_PD28D_I2SMCC1_CK                       (_U_(1) << 28) /**< I2SMCC1 signal: I2SMCC1_CK */
#define PIN_PC18A_I2SMCC1_DIN0                     _L_(82)      /**< I2SMCC1 signal: I2SMCC1_DIN0 on PC18 mux A */
#define MUX_PC18A_I2SMCC1_DIN0                     _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_DIN0 */
#define PIO_PC18A_I2SMCC1_DIN0                     (_U_(1) << 18) /**< I2SMCC1 signal: I2SMCC1_DIN0 */
#define PIN_PE3D_I2SMCC1_DIN0                      _L_(131)     /**< I2SMCC1 signal: I2SMCC1_DIN0 on PE3 mux D */
#define MUX_PE3D_I2SMCC1_DIN0                      _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_DIN0 */
#define PIO_PE3D_I2SMCC1_DIN0                      (_U_(1) << 3) /**< I2SMCC1 signal: I2SMCC1_DIN0 */
#define PIN_PC19A_I2SMCC1_DIN1                     _L_(83)      /**< I2SMCC1 signal: I2SMCC1_DIN1 on PC19 mux A */
#define MUX_PC19A_I2SMCC1_DIN1                     _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_DIN1 */
#define PIO_PC19A_I2SMCC1_DIN1                     (_U_(1) << 19) /**< I2SMCC1 signal: I2SMCC1_DIN1 */
#define PIN_PE4D_I2SMCC1_DIN1                      _L_(132)     /**< I2SMCC1 signal: I2SMCC1_DIN1 on PE4 mux D */
#define MUX_PE4D_I2SMCC1_DIN1                      _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_DIN1 */
#define PIO_PE4D_I2SMCC1_DIN1                      (_U_(1) << 4) /**< I2SMCC1 signal: I2SMCC1_DIN1 */
#define PIN_PC20A_I2SMCC1_DIN2                     _L_(84)      /**< I2SMCC1 signal: I2SMCC1_DIN2 on PC20 mux A */
#define MUX_PC20A_I2SMCC1_DIN2                     _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_DIN2 */
#define PIO_PC20A_I2SMCC1_DIN2                     (_U_(1) << 20) /**< I2SMCC1 signal: I2SMCC1_DIN2 */
#define PIN_PE5D_I2SMCC1_DIN2                      _L_(133)     /**< I2SMCC1 signal: I2SMCC1_DIN2 on PE5 mux D */
#define MUX_PE5D_I2SMCC1_DIN2                      _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_DIN2 */
#define PIO_PE5D_I2SMCC1_DIN2                      (_U_(1) << 5) /**< I2SMCC1 signal: I2SMCC1_DIN2 */
#define PIN_PC21A_I2SMCC1_DIN3                     _L_(85)      /**< I2SMCC1 signal: I2SMCC1_DIN3 on PC21 mux A */
#define MUX_PC21A_I2SMCC1_DIN3                     _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_DIN3 */
#define PIO_PC21A_I2SMCC1_DIN3                     (_U_(1) << 21) /**< I2SMCC1 signal: I2SMCC1_DIN3 */
#define PIN_PE6D_I2SMCC1_DIN3                      _L_(134)     /**< I2SMCC1 signal: I2SMCC1_DIN3 on PE6 mux D */
#define MUX_PE6D_I2SMCC1_DIN3                      _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_DIN3 */
#define PIO_PE6D_I2SMCC1_DIN3                      (_U_(1) << 6) /**< I2SMCC1 signal: I2SMCC1_DIN3 */
#define PIN_PC14A_I2SMCC1_DOUT0                    _L_(78)      /**< I2SMCC1 signal: I2SMCC1_DOUT0 on PC14 mux A */
#define MUX_PC14A_I2SMCC1_DOUT0                    _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_DOUT0 */
#define PIO_PC14A_I2SMCC1_DOUT0                    (_U_(1) << 14) /**< I2SMCC1 signal: I2SMCC1_DOUT0 */
#define PIN_PD31D_I2SMCC1_DOUT0                    _L_(127)     /**< I2SMCC1 signal: I2SMCC1_DOUT0 on PD31 mux D */
#define MUX_PD31D_I2SMCC1_DOUT0                    _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_DOUT0 */
#define PIO_PD31D_I2SMCC1_DOUT0                    (_U_(1) << 31) /**< I2SMCC1 signal: I2SMCC1_DOUT0 */
#define PIN_PC15A_I2SMCC1_DOUT1                    _L_(79)      /**< I2SMCC1 signal: I2SMCC1_DOUT1 on PC15 mux A */
#define MUX_PC15A_I2SMCC1_DOUT1                    _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_DOUT1 */
#define PIO_PC15A_I2SMCC1_DOUT1                    (_U_(1) << 15) /**< I2SMCC1 signal: I2SMCC1_DOUT1 */
#define PIN_PE0D_I2SMCC1_DOUT1                     _L_(128)     /**< I2SMCC1 signal: I2SMCC1_DOUT1 on PE0 mux D */
#define MUX_PE0D_I2SMCC1_DOUT1                     _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_DOUT1 */
#define PIO_PE0D_I2SMCC1_DOUT1                     (_U_(1) << 0) /**< I2SMCC1 signal: I2SMCC1_DOUT1 */
#define PIN_PC16A_I2SMCC1_DOUT2                    _L_(80)      /**< I2SMCC1 signal: I2SMCC1_DOUT2 on PC16 mux A */
#define MUX_PC16A_I2SMCC1_DOUT2                    _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_DOUT2 */
#define PIO_PC16A_I2SMCC1_DOUT2                    (_U_(1) << 16) /**< I2SMCC1 signal: I2SMCC1_DOUT2 */
#define PIN_PE1D_I2SMCC1_DOUT2                     _L_(129)     /**< I2SMCC1 signal: I2SMCC1_DOUT2 on PE1 mux D */
#define MUX_PE1D_I2SMCC1_DOUT2                     _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_DOUT2 */
#define PIO_PE1D_I2SMCC1_DOUT2                     (_U_(1) << 1) /**< I2SMCC1 signal: I2SMCC1_DOUT2 */
#define PIN_PC17A_I2SMCC1_DOUT3                    _L_(81)      /**< I2SMCC1 signal: I2SMCC1_DOUT3 on PC17 mux A */
#define MUX_PC17A_I2SMCC1_DOUT3                    _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_DOUT3 */
#define PIO_PC17A_I2SMCC1_DOUT3                    (_U_(1) << 17) /**< I2SMCC1 signal: I2SMCC1_DOUT3 */
#define PIN_PE2D_I2SMCC1_DOUT3                     _L_(130)     /**< I2SMCC1 signal: I2SMCC1_DOUT3 on PE2 mux D */
#define MUX_PE2D_I2SMCC1_DOUT3                     _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_DOUT3 */
#define PIO_PE2D_I2SMCC1_DOUT3                     (_U_(1) << 2) /**< I2SMCC1 signal: I2SMCC1_DOUT3 */
#define PIN_PC13A_I2SMCC1_MCK                      _L_(77)      /**< I2SMCC1 signal: I2SMCC1_MCK on PC13 mux A */
#define MUX_PC13A_I2SMCC1_MCK                      _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_MCK */
#define PIO_PC13A_I2SMCC1_MCK                      (_U_(1) << 13) /**< I2SMCC1 signal: I2SMCC1_MCK */
#define PIN_PD30D_I2SMCC1_MCK                      _L_(126)     /**< I2SMCC1 signal: I2SMCC1_MCK on PD30 mux D */
#define MUX_PD30D_I2SMCC1_MCK                      _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_MCK */
#define PIO_PD30D_I2SMCC1_MCK                      (_U_(1) << 30) /**< I2SMCC1 signal: I2SMCC1_MCK */
#define PIN_PC12A_I2SMCC1_WS                       _L_(76)      /**< I2SMCC1 signal: I2SMCC1_WS on PC12 mux A */
#define MUX_PC12A_I2SMCC1_WS                       _L_(0)       /**< I2SMCC1 signal line function value: I2SMCC1_WS */
#define PIO_PC12A_I2SMCC1_WS                       (_U_(1) << 12) /**< I2SMCC1 signal: I2SMCC1_WS */
#define PIN_PD29D_I2SMCC1_WS                       _L_(125)     /**< I2SMCC1 signal: I2SMCC1_WS on PD29 mux D */
#define MUX_PD29D_I2SMCC1_WS                       _L_(3)       /**< I2SMCC1 signal line function value: I2SMCC1_WS */
#define PIO_PD29D_I2SMCC1_WS                       (_U_(1) << 29) /**< I2SMCC1 signal: I2SMCC1_WS */
/* ========== PIO definition for ICE peripheral ========== */
#define PIN_PC25A_ICE_NTRST                        _L_(89)      /**< ICE signal: ICE_NTRST on PC25 mux A */
#define MUX_PC25A_ICE_NTRST                        _L_(0)       /**< ICE signal line function value: ICE_NTRST */
#define PIO_PC25A_ICE_NTRST                        (_U_(1) << 25) /**< ICE signal: ICE_NTRST */
#define PIN_PC26A_ICE_TCK_SWCLK                    _L_(90)      /**< ICE signal: ICE_TCK_SWCLK on PC26 mux A */
#define MUX_PC26A_ICE_TCK_SWCLK                    _L_(0)       /**< ICE signal line function value: ICE_TCK_SWCLK */
#define PIO_PC26A_ICE_TCK_SWCLK                    (_U_(1) << 26) /**< ICE signal: ICE_TCK_SWCLK */
#define PIN_PC28A_ICE_TDI                          _L_(92)      /**< ICE signal: ICE_TDI on PC28 mux A */
#define MUX_PC28A_ICE_TDI                          _L_(0)       /**< ICE signal line function value: ICE_TDI */
#define PIO_PC28A_ICE_TDI                          (_U_(1) << 28) /**< ICE signal: ICE_TDI */
#define PIN_PC29A_ICE_TDO                          _L_(93)      /**< ICE signal: ICE_TDO on PC29 mux A */
#define MUX_PC29A_ICE_TDO                          _L_(0)       /**< ICE signal line function value: ICE_TDO */
#define PIO_PC29A_ICE_TDO                          (_U_(1) << 29) /**< ICE signal: ICE_TDO */
#define PIN_PC27A_ICE_TMS_SWDIO                    _L_(91)      /**< ICE signal: ICE_TMS_SWDIO on PC27 mux A */
#define MUX_PC27A_ICE_TMS_SWDIO                    _L_(0)       /**< ICE signal line function value: ICE_TMS_SWDIO */
#define PIO_PC27A_ICE_TMS_SWDIO                    (_U_(1) << 27) /**< ICE signal: ICE_TMS_SWDIO */
/* ========== PIO definition for ISC peripheral ========== */
#define PIN_PA16C_ISC_D0                           _L_(16)      /**< ISC signal: ISC_D0 on PA16 mux C */
#define MUX_PA16C_ISC_D0                           _L_(2)       /**< ISC signal line function value: ISC_D0 */
#define PIO_PA16C_ISC_D0                           (_U_(1) << 16) /**< ISC signal: ISC_D0 */
#define PIN_PD24E_ISC_D0                           _L_(120)     /**< ISC signal: ISC_D0 on PD24 mux E */
#define MUX_PD24E_ISC_D0                           _L_(4)       /**< ISC signal line function value: ISC_D0 */
#define PIO_PD24E_ISC_D0                           (_U_(1) << 24) /**< ISC signal: ISC_D0 */
#define PIN_PA17C_ISC_D1                           _L_(17)      /**< ISC signal: ISC_D1 on PA17 mux C */
#define MUX_PA17C_ISC_D1                           _L_(2)       /**< ISC signal line function value: ISC_D1 */
#define PIO_PA17C_ISC_D1                           (_U_(1) << 17) /**< ISC signal: ISC_D1 */
#define PIN_PD25E_ISC_D1                           _L_(121)     /**< ISC signal: ISC_D1 on PD25 mux E */
#define MUX_PD25E_ISC_D1                           _L_(4)       /**< ISC signal line function value: ISC_D1 */
#define PIO_PD25E_ISC_D1                           (_U_(1) << 25) /**< ISC signal: ISC_D1 */
#define PIN_PA18C_ISC_D2                           _L_(18)      /**< ISC signal: ISC_D2 on PA18 mux C */
#define MUX_PA18C_ISC_D2                           _L_(2)       /**< ISC signal line function value: ISC_D2 */
#define PIO_PA18C_ISC_D2                           (_U_(1) << 18) /**< ISC signal: ISC_D2 */
#define PIN_PD26E_ISC_D2                           _L_(122)     /**< ISC signal: ISC_D2 on PD26 mux E */
#define MUX_PD26E_ISC_D2                           _L_(4)       /**< ISC signal line function value: ISC_D2 */
#define PIO_PD26E_ISC_D2                           (_U_(1) << 26) /**< ISC signal: ISC_D2 */
#define PIN_PA19C_ISC_D3                           _L_(19)      /**< ISC signal: ISC_D3 on PA19 mux C */
#define MUX_PA19C_ISC_D3                           _L_(2)       /**< ISC signal line function value: ISC_D3 */
#define PIO_PA19C_ISC_D3                           (_U_(1) << 19) /**< ISC signal: ISC_D3 */
#define PIN_PD27E_ISC_D3                           _L_(123)     /**< ISC signal: ISC_D3 on PD27 mux E */
#define MUX_PD27E_ISC_D3                           _L_(4)       /**< ISC signal line function value: ISC_D3 */
#define PIO_PD27E_ISC_D3                           (_U_(1) << 27) /**< ISC signal: ISC_D3 */
#define PIN_PA20C_ISC_D4                           _L_(20)      /**< ISC signal: ISC_D4 on PA20 mux C */
#define MUX_PA20C_ISC_D4                           _L_(2)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PA20C_ISC_D4                           (_U_(1) << 20) /**< ISC signal: ISC_D4 */
#define PIN_PD28E_ISC_D4                           _L_(124)     /**< ISC signal: ISC_D4 on PD28 mux E */
#define MUX_PD28E_ISC_D4                           _L_(4)       /**< ISC signal line function value: ISC_D4 */
#define PIO_PD28E_ISC_D4                           (_U_(1) << 28) /**< ISC signal: ISC_D4 */
#define PIN_PA21C_ISC_D5                           _L_(21)      /**< ISC signal: ISC_D5 on PA21 mux C */
#define MUX_PA21C_ISC_D5                           _L_(2)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PA21C_ISC_D5                           (_U_(1) << 21) /**< ISC signal: ISC_D5 */
#define PIN_PD29E_ISC_D5                           _L_(125)     /**< ISC signal: ISC_D5 on PD29 mux E */
#define MUX_PD29E_ISC_D5                           _L_(4)       /**< ISC signal line function value: ISC_D5 */
#define PIO_PD29E_ISC_D5                           (_U_(1) << 29) /**< ISC signal: ISC_D5 */
#define PIN_PA22C_ISC_D6                           _L_(22)      /**< ISC signal: ISC_D6 on PA22 mux C */
#define MUX_PA22C_ISC_D6                           _L_(2)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PA22C_ISC_D6                           (_U_(1) << 22) /**< ISC signal: ISC_D6 */
#define PIN_PD30E_ISC_D6                           _L_(126)     /**< ISC signal: ISC_D6 on PD30 mux E */
#define MUX_PD30E_ISC_D6                           _L_(4)       /**< ISC signal line function value: ISC_D6 */
#define PIO_PD30E_ISC_D6                           (_U_(1) << 30) /**< ISC signal: ISC_D6 */
#define PIN_PA23C_ISC_D7                           _L_(23)      /**< ISC signal: ISC_D7 on PA23 mux C */
#define MUX_PA23C_ISC_D7                           _L_(2)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PA23C_ISC_D7                           (_U_(1) << 23) /**< ISC signal: ISC_D7 */
#define PIN_PD31E_ISC_D7                           _L_(127)     /**< ISC signal: ISC_D7 on PD31 mux E */
#define MUX_PD31E_ISC_D7                           _L_(4)       /**< ISC signal line function value: ISC_D7 */
#define PIO_PD31E_ISC_D7                           (_U_(1) << 31) /**< ISC signal: ISC_D7 */
#define PIN_PA28C_ISC_D8                           _L_(28)      /**< ISC signal: ISC_D8 on PA28 mux C */
#define MUX_PA28C_ISC_D8                           _L_(2)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PA28C_ISC_D8                           (_U_(1) << 28) /**< ISC signal: ISC_D8 */
#define PIN_PE4E_ISC_D8                            _L_(132)     /**< ISC signal: ISC_D8 on PE4 mux E */
#define MUX_PE4E_ISC_D8                            _L_(4)       /**< ISC signal line function value: ISC_D8 */
#define PIO_PE4E_ISC_D8                            (_U_(1) << 4) /**< ISC signal: ISC_D8 */
#define PIN_PA29C_ISC_D9                           _L_(29)      /**< ISC signal: ISC_D9 on PA29 mux C */
#define MUX_PA29C_ISC_D9                           _L_(2)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PA29C_ISC_D9                           (_U_(1) << 29) /**< ISC signal: ISC_D9 */
#define PIN_PE5E_ISC_D9                            _L_(133)     /**< ISC signal: ISC_D9 on PE5 mux E */
#define MUX_PE5E_ISC_D9                            _L_(4)       /**< ISC signal line function value: ISC_D9 */
#define PIO_PE5E_ISC_D9                            (_U_(1) << 5) /**< ISC signal: ISC_D9 */
#define PIN_PA30C_ISC_D10                          _L_(30)      /**< ISC signal: ISC_D10 on PA30 mux C */
#define MUX_PA30C_ISC_D10                          _L_(2)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PA30C_ISC_D10                          (_U_(1) << 30) /**< ISC signal: ISC_D10 */
#define PIN_PE6E_ISC_D10                           _L_(134)     /**< ISC signal: ISC_D10 on PE6 mux E */
#define MUX_PE6E_ISC_D10                           _L_(4)       /**< ISC signal line function value: ISC_D10 */
#define PIO_PE6E_ISC_D10                           (_U_(1) << 6) /**< ISC signal: ISC_D10 */
#define PIN_PA31C_ISC_D11                          _L_(31)      /**< ISC signal: ISC_D11 on PA31 mux C */
#define MUX_PA31C_ISC_D11                          _L_(2)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PA31C_ISC_D11                          (_U_(1) << 31) /**< ISC signal: ISC_D11 */
#define PIN_PE7E_ISC_D11                           _L_(135)     /**< ISC signal: ISC_D11 on PE7 mux E */
#define MUX_PE7E_ISC_D11                           _L_(4)       /**< ISC signal line function value: ISC_D11 */
#define PIO_PE7E_ISC_D11                           (_U_(1) << 7) /**< ISC signal: ISC_D11 */
#define PIN_PA26C_ISC_FIELD                        _L_(26)      /**< ISC signal: ISC_FIELD on PA26 mux C */
#define MUX_PA26C_ISC_FIELD                        _L_(2)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PA26C_ISC_FIELD                        (_U_(1) << 26) /**< ISC signal: ISC_FIELD */
#define PIN_PE2E_ISC_FIELD                         _L_(130)     /**< ISC signal: ISC_FIELD on PE2 mux E */
#define MUX_PE2E_ISC_FIELD                         _L_(4)       /**< ISC signal line function value: ISC_FIELD */
#define PIO_PE2E_ISC_FIELD                         (_U_(1) << 2) /**< ISC signal: ISC_FIELD */
#define PIN_PA24C_ISC_HSYNC                        _L_(24)      /**< ISC signal: ISC_HSYNC on PA24 mux C */
#define MUX_PA24C_ISC_HSYNC                        _L_(2)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PA24C_ISC_HSYNC                        (_U_(1) << 24) /**< ISC signal: ISC_HSYNC */
#define PIN_PE0E_ISC_HSYNC                         _L_(128)     /**< ISC signal: ISC_HSYNC on PE0 mux E */
#define MUX_PE0E_ISC_HSYNC                         _L_(4)       /**< ISC signal line function value: ISC_HSYNC */
#define PIO_PE0E_ISC_HSYNC                         (_U_(1) << 0) /**< ISC signal: ISC_HSYNC */
#define PIN_PA15C_ISC_MCK                          _L_(15)      /**< ISC signal: ISC_MCK on PA15 mux C */
#define MUX_PA15C_ISC_MCK                          _L_(2)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PA15C_ISC_MCK                          (_U_(1) << 15) /**< ISC signal: ISC_MCK */
#define PIN_PD23E_ISC_MCK                          _L_(119)     /**< ISC signal: ISC_MCK on PD23 mux E */
#define MUX_PD23E_ISC_MCK                          _L_(4)       /**< ISC signal line function value: ISC_MCK */
#define PIO_PD23E_ISC_MCK                          (_U_(1) << 23) /**< ISC signal: ISC_MCK */
#define PIN_PA27C_ISC_PCK                          _L_(27)      /**< ISC signal: ISC_PCK on PA27 mux C */
#define MUX_PA27C_ISC_PCK                          _L_(2)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PA27C_ISC_PCK                          (_U_(1) << 27) /**< ISC signal: ISC_PCK */
#define PIN_PE3E_ISC_PCK                           _L_(131)     /**< ISC signal: ISC_PCK on PE3 mux E */
#define MUX_PE3E_ISC_PCK                           _L_(4)       /**< ISC signal line function value: ISC_PCK */
#define PIO_PE3E_ISC_PCK                           (_U_(1) << 3) /**< ISC signal: ISC_PCK */
#define PIN_PA25C_ISC_VSYNC                        _L_(25)      /**< ISC signal: ISC_VSYNC on PA25 mux C */
#define MUX_PA25C_ISC_VSYNC                        _L_(2)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PA25C_ISC_VSYNC                        (_U_(1) << 25) /**< ISC signal: ISC_VSYNC */
#define PIN_PE1E_ISC_VSYNC                         _L_(129)     /**< ISC signal: ISC_VSYNC on PE1 mux E */
#define MUX_PE1E_ISC_VSYNC                         _L_(4)       /**< ISC signal line function value: ISC_VSYNC */
#define PIO_PE1E_ISC_VSYNC                         (_U_(1) << 1) /**< ISC signal: ISC_VSYNC */
/* ========== PIO definition for MCAN0 peripheral ========== */
#define PIN_PA10C_MCAN0_CANRX0                     _L_(10)      /**< MCAN0 signal: MCAN0_CANRX0 on PA10 mux C */
#define MUX_PA10C_MCAN0_CANRX0                     _L_(2)       /**< MCAN0 signal line function value: MCAN0_CANRX0 */
#define PIO_PA10C_MCAN0_CANRX0                     (_U_(1) << 10) /**< MCAN0 signal: MCAN0_CANRX0 */
#define PIN_PD13D_MCAN0_CANRX0                     _L_(109)     /**< MCAN0 signal: MCAN0_CANRX0 on PD13 mux D */
#define MUX_PD13D_MCAN0_CANRX0                     _L_(3)       /**< MCAN0 signal line function value: MCAN0_CANRX0 */
#define PIO_PD13D_MCAN0_CANRX0                     (_U_(1) << 13) /**< MCAN0 signal: MCAN0_CANRX0 */
#define PIN_PA9C_MCAN0_CANTX0                      _L_(9)       /**< MCAN0 signal: MCAN0_CANTX0 on PA9 mux C */
#define MUX_PA9C_MCAN0_CANTX0                      _L_(2)       /**< MCAN0 signal line function value: MCAN0_CANTX0 */
#define PIO_PA9C_MCAN0_CANTX0                      (_U_(1) << 9) /**< MCAN0 signal: MCAN0_CANTX0 */
#define PIN_PD12D_MCAN0_CANTX0                     _L_(108)     /**< MCAN0 signal: MCAN0_CANTX0 on PD12 mux D */
#define MUX_PD12D_MCAN0_CANTX0                     _L_(3)       /**< MCAN0 signal line function value: MCAN0_CANTX0 */
#define PIO_PD12D_MCAN0_CANTX0                     (_U_(1) << 12) /**< MCAN0 signal: MCAN0_CANTX0 */
/* ========== PIO definition for MCAN1 peripheral ========== */
#define PIN_PA8C_MCAN1_CANRX1                      _L_(8)       /**< MCAN1 signal: MCAN1_CANRX1 on PA8 mux C */
#define MUX_PA8C_MCAN1_CANRX1                      _L_(2)       /**< MCAN1 signal line function value: MCAN1_CANRX1 */
#define PIO_PA8C_MCAN1_CANRX1                      (_U_(1) << 8) /**< MCAN1 signal: MCAN1_CANRX1 */
#define PIN_PD15D_MCAN1_CANRX1                     _L_(111)     /**< MCAN1 signal: MCAN1_CANRX1 on PD15 mux D */
#define MUX_PD15D_MCAN1_CANRX1                     _L_(3)       /**< MCAN1 signal line function value: MCAN1_CANRX1 */
#define PIO_PD15D_MCAN1_CANRX1                     (_U_(1) << 15) /**< MCAN1 signal: MCAN1_CANRX1 */
#define PIN_PA7C_MCAN1_CANTX1                      _L_(7)       /**< MCAN1 signal: MCAN1_CANTX1 on PA7 mux C */
#define MUX_PA7C_MCAN1_CANTX1                      _L_(2)       /**< MCAN1 signal line function value: MCAN1_CANTX1 */
#define PIO_PA7C_MCAN1_CANTX1                      (_U_(1) << 7) /**< MCAN1 signal: MCAN1_CANTX1 */
#define PIN_PD14D_MCAN1_CANTX1                     _L_(110)     /**< MCAN1 signal: MCAN1_CANTX1 on PD14 mux D */
#define MUX_PD14D_MCAN1_CANTX1                     _L_(3)       /**< MCAN1 signal line function value: MCAN1_CANTX1 */
#define PIO_PD14D_MCAN1_CANTX1                     (_U_(1) << 14) /**< MCAN1 signal: MCAN1_CANTX1 */
/* ========== PIO definition for MCAN2 peripheral ========== */
#define PIN_PA6C_MCAN2_CANRX2                      _L_(6)       /**< MCAN2 signal: MCAN2_CANRX2 on PA6 mux C */
#define MUX_PA6C_MCAN2_CANRX2                      _L_(2)       /**< MCAN2 signal line function value: MCAN2_CANRX2 */
#define PIO_PA6C_MCAN2_CANRX2                      (_U_(1) << 6) /**< MCAN2 signal: MCAN2_CANRX2 */
#define PIN_PD17D_MCAN2_CANRX2                     _L_(113)     /**< MCAN2 signal: MCAN2_CANRX2 on PD17 mux D */
#define MUX_PD17D_MCAN2_CANRX2                     _L_(3)       /**< MCAN2 signal line function value: MCAN2_CANRX2 */
#define PIO_PD17D_MCAN2_CANRX2                     (_U_(1) << 17) /**< MCAN2 signal: MCAN2_CANRX2 */
#define PIN_PA5C_MCAN2_CANTX2                      _L_(5)       /**< MCAN2 signal: MCAN2_CANTX2 on PA5 mux C */
#define MUX_PA5C_MCAN2_CANTX2                      _L_(2)       /**< MCAN2 signal line function value: MCAN2_CANTX2 */
#define PIO_PA5C_MCAN2_CANTX2                      (_U_(1) << 5) /**< MCAN2 signal: MCAN2_CANTX2 */
#define PIN_PD16D_MCAN2_CANTX2                     _L_(112)     /**< MCAN2 signal: MCAN2_CANTX2 on PD16 mux D */
#define MUX_PD16D_MCAN2_CANTX2                     _L_(3)       /**< MCAN2 signal line function value: MCAN2_CANTX2 */
#define PIO_PD16D_MCAN2_CANTX2                     (_U_(1) << 16) /**< MCAN2 signal: MCAN2_CANTX2 */
/* ========== PIO definition for MCAN3 peripheral ========== */
#define PIN_PA1C_MCAN3_CANRX3                      _L_(1)       /**< MCAN3 signal: MCAN3_CANRX3 on PA1 mux C */
#define MUX_PA1C_MCAN3_CANRX3                      _L_(2)       /**< MCAN3 signal line function value: MCAN3_CANRX3 */
#define PIO_PA1C_MCAN3_CANRX3                      (_U_(1) << 1) /**< MCAN3 signal: MCAN3_CANRX3 */
#define PIN_PD19D_MCAN3_CANRX3                     _L_(115)     /**< MCAN3 signal: MCAN3_CANRX3 on PD19 mux D */
#define MUX_PD19D_MCAN3_CANRX3                     _L_(3)       /**< MCAN3 signal line function value: MCAN3_CANRX3 */
#define PIO_PD19D_MCAN3_CANRX3                     (_U_(1) << 19) /**< MCAN3 signal: MCAN3_CANRX3 */
#define PIN_PA0C_MCAN3_CANTX3                      _L_(0)       /**< MCAN3 signal: MCAN3_CANTX3 on PA0 mux C */
#define MUX_PA0C_MCAN3_CANTX3                      _L_(2)       /**< MCAN3 signal line function value: MCAN3_CANTX3 */
#define PIO_PA0C_MCAN3_CANTX3                      (_U_(1) << 0) /**< MCAN3 signal: MCAN3_CANTX3 */
#define PIN_PD18D_MCAN3_CANTX3                     _L_(114)     /**< MCAN3 signal: MCAN3_CANTX3 on PD18 mux D */
#define MUX_PD18D_MCAN3_CANTX3                     _L_(3)       /**< MCAN3 signal line function value: MCAN3_CANTX3 */
#define PIO_PD18D_MCAN3_CANTX3                     (_U_(1) << 18) /**< MCAN3 signal: MCAN3_CANTX3 */
/* ========== PIO definition for MCAN4 peripheral ========== */
#define PIN_PD3C_MCAN4_CANRX4                      _L_(99)      /**< MCAN4 signal: MCAN4_CANRX4 on PD3 mux C */
#define MUX_PD3C_MCAN4_CANRX4                      _L_(2)       /**< MCAN4 signal line function value: MCAN4_CANRX4 */
#define PIO_PD3C_MCAN4_CANRX4                      (_U_(1) << 3) /**< MCAN4 signal: MCAN4_CANRX4 */
#define PIN_PD21D_MCAN4_CANRX4                     _L_(117)     /**< MCAN4 signal: MCAN4_CANRX4 on PD21 mux D */
#define MUX_PD21D_MCAN4_CANRX4                     _L_(3)       /**< MCAN4 signal line function value: MCAN4_CANRX4 */
#define PIO_PD21D_MCAN4_CANRX4                     (_U_(1) << 21) /**< MCAN4 signal: MCAN4_CANRX4 */
#define PIN_PD2C_MCAN4_CANTX4                      _L_(98)      /**< MCAN4 signal: MCAN4_CANTX4 on PD2 mux C */
#define MUX_PD2C_MCAN4_CANTX4                      _L_(2)       /**< MCAN4 signal line function value: MCAN4_CANTX4 */
#define PIO_PD2C_MCAN4_CANTX4                      (_U_(1) << 2) /**< MCAN4 signal: MCAN4_CANTX4 */
#define PIN_PD20D_MCAN4_CANTX4                     _L_(116)     /**< MCAN4 signal: MCAN4_CANTX4 on PD20 mux D */
#define MUX_PD20D_MCAN4_CANTX4                     _L_(3)       /**< MCAN4 signal line function value: MCAN4_CANTX4 */
#define PIO_PD20D_MCAN4_CANTX4                     (_U_(1) << 20) /**< MCAN4 signal: MCAN4_CANTX4 */
/* ========== PIO definition for MCAN5 peripheral ========== */
#define PIN_PD5C_MCAN5_CANRX5                      _L_(101)     /**< MCAN5 signal: MCAN5_CANRX5 on PD5 mux C */
#define MUX_PD5C_MCAN5_CANRX5                      _L_(2)       /**< MCAN5 signal line function value: MCAN5_CANRX5 */
#define PIO_PD5C_MCAN5_CANRX5                      (_U_(1) << 5) /**< MCAN5 signal: MCAN5_CANRX5 */
#define PIN_PD23F_MCAN5_CANRX5                     _L_(119)     /**< MCAN5 signal: MCAN5_CANRX5 on PD23 mux F */
#define MUX_PD23F_MCAN5_CANRX5                     _L_(5)       /**< MCAN5 signal line function value: MCAN5_CANRX5 */
#define PIO_PD23F_MCAN5_CANRX5                     (_U_(1) << 23) /**< MCAN5 signal: MCAN5_CANRX5 */
#define PIN_PD4C_MCAN5_CANTX5                      _L_(100)     /**< MCAN5 signal: MCAN5_CANTX5 on PD4 mux C */
#define MUX_PD4C_MCAN5_CANTX5                      _L_(2)       /**< MCAN5 signal line function value: MCAN5_CANTX5 */
#define PIO_PD4C_MCAN5_CANTX5                      (_U_(1) << 4) /**< MCAN5 signal: MCAN5_CANTX5 */
#define PIN_PD22F_MCAN5_CANTX5                     _L_(118)     /**< MCAN5 signal: MCAN5_CANTX5 on PD22 mux F */
#define MUX_PD22F_MCAN5_CANTX5                     _L_(5)       /**< MCAN5 signal line function value: MCAN5_CANTX5 */
#define PIO_PD22F_MCAN5_CANTX5                     (_U_(1) << 22) /**< MCAN5 signal: MCAN5_CANTX5 */
/* ========== PIO definition for PDMC0 peripheral ========== */
#define PIN_PB9C_PDMC0_CLK                         _L_(41)      /**< PDMC0 signal: PDMC0_CLK on PB9 mux C */
#define MUX_PB9C_PDMC0_CLK                         _L_(2)       /**< PDMC0 signal line function value: PDMC0_CLK */
#define PIO_PB9C_PDMC0_CLK                         (_U_(1) << 9) /**< PDMC0 signal: PDMC0_CLK */
#define PIN_PD22A_PDMC0_CLK                        _L_(118)     /**< PDMC0 signal: PDMC0_CLK on PD22 mux A */
#define MUX_PD22A_PDMC0_CLK                        _L_(0)       /**< PDMC0 signal line function value: PDMC0_CLK */
#define PIO_PD22A_PDMC0_CLK                        (_U_(1) << 22) /**< PDMC0 signal: PDMC0_CLK */
#define PIN_PB10C_PDMC0_DS0                        _L_(42)      /**< PDMC0 signal: PDMC0_DS0 on PB10 mux C */
#define MUX_PB10C_PDMC0_DS0                        _L_(2)       /**< PDMC0 signal line function value: PDMC0_DS0 */
#define PIO_PB10C_PDMC0_DS0                        (_U_(1) << 10) /**< PDMC0 signal: PDMC0_DS0 */
#define PIN_PD23A_PDMC0_DS0                        _L_(119)     /**< PDMC0 signal: PDMC0_DS0 on PD23 mux A */
#define MUX_PD23A_PDMC0_DS0                        _L_(0)       /**< PDMC0 signal line function value: PDMC0_DS0 */
#define PIO_PD23A_PDMC0_DS0                        (_U_(1) << 23) /**< PDMC0 signal: PDMC0_DS0 */
#define PIN_PB11C_PDMC0_DS1                        _L_(43)      /**< PDMC0 signal: PDMC0_DS1 on PB11 mux C */
#define MUX_PB11C_PDMC0_DS1                        _L_(2)       /**< PDMC0 signal line function value: PDMC0_DS1 */
#define PIO_PB11C_PDMC0_DS1                        (_U_(1) << 11) /**< PDMC0 signal: PDMC0_DS1 */
#define PIN_PD24A_PDMC0_DS1                        _L_(120)     /**< PDMC0 signal: PDMC0_DS1 on PD24 mux A */
#define MUX_PD24A_PDMC0_DS1                        _L_(0)       /**< PDMC0 signal line function value: PDMC0_DS1 */
#define PIO_PD24A_PDMC0_DS1                        (_U_(1) << 24) /**< PDMC0 signal: PDMC0_DS1 */
/* ========== PIO definition for PDMC1 peripheral ========== */
#define PIN_PA2C_PDMC1_CLK                         _L_(2)       /**< PDMC1 signal: PDMC1_CLK on PA2 mux C */
#define MUX_PA2C_PDMC1_CLK                         _L_(2)       /**< PDMC1 signal line function value: PDMC1_CLK */
#define PIO_PA2C_PDMC1_CLK                         (_U_(1) << 2) /**< PDMC1 signal: PDMC1_CLK */
#define PIN_PD25A_PDMC1_CLK                        _L_(121)     /**< PDMC1 signal: PDMC1_CLK on PD25 mux A */
#define MUX_PD25A_PDMC1_CLK                        _L_(0)       /**< PDMC1 signal line function value: PDMC1_CLK */
#define PIO_PD25A_PDMC1_CLK                        (_U_(1) << 25) /**< PDMC1 signal: PDMC1_CLK */
#define PIN_PA3C_PDMC1_DS0                         _L_(3)       /**< PDMC1 signal: PDMC1_DS0 on PA3 mux C */
#define MUX_PA3C_PDMC1_DS0                         _L_(2)       /**< PDMC1 signal line function value: PDMC1_DS0 */
#define PIO_PA3C_PDMC1_DS0                         (_U_(1) << 3) /**< PDMC1 signal: PDMC1_DS0 */
#define PIN_PD26A_PDMC1_DS0                        _L_(122)     /**< PDMC1 signal: PDMC1_DS0 on PD26 mux A */
#define MUX_PD26A_PDMC1_DS0                        _L_(0)       /**< PDMC1 signal line function value: PDMC1_DS0 */
#define PIO_PD26A_PDMC1_DS0                        (_U_(1) << 26) /**< PDMC1 signal: PDMC1_DS0 */
#define PIN_PA4C_PDMC1_DS1                         _L_(4)       /**< PDMC1 signal: PDMC1_DS1 on PA4 mux C */
#define MUX_PA4C_PDMC1_DS1                         _L_(2)       /**< PDMC1 signal line function value: PDMC1_DS1 */
#define PIO_PA4C_PDMC1_DS1                         (_U_(1) << 4) /**< PDMC1 signal: PDMC1_DS1 */
#define PIN_PD27A_PDMC1_DS1                        _L_(123)     /**< PDMC1 signal: PDMC1_DS1 on PD27 mux A */
#define MUX_PD27A_PDMC1_DS1                        _L_(0)       /**< PDMC1 signal line function value: PDMC1_DS1 */
#define PIO_PD27A_PDMC1_DS1                        (_U_(1) << 27) /**< PDMC1 signal: PDMC1_DS1 */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PB16C_PMC_PCK0                         _L_(48)      /**< PMC signal: PMC_PCK0 on PB16 mux C */
#define MUX_PB16C_PMC_PCK0                         _L_(2)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PB16C_PMC_PCK0                         (_U_(1) << 16) /**< PMC signal: PMC_PCK0 */
#define PIN_PD2B_PMC_PCK0                          _L_(98)      /**< PMC signal: PMC_PCK0 on PD2 mux B */
#define MUX_PD2B_PMC_PCK0                          _L_(1)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PD2B_PMC_PCK0                          (_U_(1) << 2) /**< PMC signal: PMC_PCK0 */
#define PIN_PD20A_PMC_PCK0                         _L_(116)     /**< PMC signal: PMC_PCK0 on PD20 mux A */
#define MUX_PD20A_PMC_PCK0                         _L_(0)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PD20A_PMC_PCK0                         (_U_(1) << 20) /**< PMC signal: PMC_PCK0 */
#define PIN_PB17C_PMC_PCK1                         _L_(49)      /**< PMC signal: PMC_PCK1 on PB17 mux C */
#define MUX_PB17C_PMC_PCK1                         _L_(2)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PB17C_PMC_PCK1                         (_U_(1) << 17) /**< PMC signal: PMC_PCK1 */
#define PIN_PD12A_PMC_PCK1                         _L_(108)     /**< PMC signal: PMC_PCK1 on PD12 mux A */
#define MUX_PD12A_PMC_PCK1                         _L_(0)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PD12A_PMC_PCK1                         (_U_(1) << 12) /**< PMC signal: PMC_PCK1 */
#define PIN_PD21A_PMC_PCK1                         _L_(117)     /**< PMC signal: PMC_PCK1 on PD21 mux A */
#define MUX_PD21A_PMC_PCK1                         _L_(0)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PD21A_PMC_PCK1                         (_U_(1) << 21) /**< PMC signal: PMC_PCK1 */
#define PIN_PB3C_PMC_PCK2                          _L_(35)      /**< PMC signal: PMC_PCK2 on PB3 mux C */
#define MUX_PB3C_PMC_PCK2                          _L_(2)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PB3C_PMC_PCK2                          (_U_(1) << 3) /**< PMC signal: PMC_PCK2 */
#define PIN_PB18C_PMC_PCK2                         _L_(50)      /**< PMC signal: PMC_PCK2 on PB18 mux C */
#define MUX_PB18C_PMC_PCK2                         _L_(2)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PB18C_PMC_PCK2                         (_U_(1) << 18) /**< PMC signal: PMC_PCK2 */
#define PIN_PB4C_PMC_PCK3                          _L_(36)      /**< PMC signal: PMC_PCK3 on PB4 mux C */
#define MUX_PB4C_PMC_PCK3                          _L_(2)       /**< PMC signal line function value: PMC_PCK3 */
#define PIO_PB4C_PMC_PCK3                          (_U_(1) << 4) /**< PMC signal: PMC_PCK3 */
#define PIN_PB19C_PMC_PCK3                         _L_(51)      /**< PMC signal: PMC_PCK3 on PB19 mux C */
#define MUX_PB19C_PMC_PCK3                         _L_(2)       /**< PMC signal line function value: PMC_PCK3 */
#define PIO_PB19C_PMC_PCK3                         (_U_(1) << 19) /**< PMC signal: PMC_PCK3 */
#define PIN_PB5C_PMC_PCK4                          _L_(37)      /**< PMC signal: PMC_PCK4 on PB5 mux C */
#define MUX_PB5C_PMC_PCK4                          _L_(2)       /**< PMC signal line function value: PMC_PCK4 */
#define PIO_PB5C_PMC_PCK4                          (_U_(1) << 5) /**< PMC signal: PMC_PCK4 */
#define PIN_PB23F_PMC_PCK4                         _L_(55)      /**< PMC signal: PMC_PCK4 on PB23 mux F */
#define MUX_PB23F_PMC_PCK4                         _L_(5)       /**< PMC signal line function value: PMC_PCK4 */
#define PIO_PB23F_PMC_PCK4                         (_U_(1) << 23) /**< PMC signal: PMC_PCK4 */
#define PIN_PB6C_PMC_PCK5                          _L_(38)      /**< PMC signal: PMC_PCK5 on PB6 mux C */
#define MUX_PB6C_PMC_PCK5                          _L_(2)       /**< PMC signal line function value: PMC_PCK5 */
#define PIO_PB6C_PMC_PCK5                          (_U_(1) << 6) /**< PMC signal: PMC_PCK5 */
#define PIN_PB24F_PMC_PCK5                         _L_(56)      /**< PMC signal: PMC_PCK5 on PB24 mux F */
#define MUX_PB24F_PMC_PCK5                         _L_(5)       /**< PMC signal line function value: PMC_PCK5 */
#define PIO_PB24F_PMC_PCK5                         (_U_(1) << 24) /**< PMC signal: PMC_PCK5 */
#define PIN_PB25F_PMC_PCK6                         _L_(57)      /**< PMC signal: PMC_PCK6 on PB25 mux F */
#define MUX_PB25F_PMC_PCK6                         _L_(5)       /**< PMC signal line function value: PMC_PCK6 */
#define PIO_PB25F_PMC_PCK6                         (_U_(1) << 25) /**< PMC signal: PMC_PCK6 */
#define PIN_PD10B_PMC_PCK6                         _L_(106)     /**< PMC signal: PMC_PCK6 on PD10 mux B */
#define MUX_PD10B_PMC_PCK6                         _L_(1)       /**< PMC signal line function value: PMC_PCK6 */
#define PIO_PD10B_PMC_PCK6                         (_U_(1) << 10) /**< PMC signal: PMC_PCK6 */
#define PIN_PB26F_PMC_PCK7                         _L_(58)      /**< PMC signal: PMC_PCK7 on PB26 mux F */
#define MUX_PB26F_PMC_PCK7                         _L_(5)       /**< PMC signal line function value: PMC_PCK7 */
#define PIO_PB26F_PMC_PCK7                         (_U_(1) << 26) /**< PMC signal: PMC_PCK7 */
#define PIN_PD11B_PMC_PCK7                         _L_(107)     /**< PMC signal: PMC_PCK7 on PD11 mux B */
#define MUX_PD11B_PMC_PCK7                         _L_(1)       /**< PMC signal line function value: PMC_PCK7 */
#define PIO_PD11B_PMC_PCK7                         (_U_(1) << 11) /**< PMC signal: PMC_PCK7 */
/* ========== PIO definition for PWM peripheral ========== */
#define PIN_PA5E_PWM_PWMEXTRG0                     _L_(5)       /**< PWM signal: PWM_PWMEXTRG0 on PA5 mux E */
#define MUX_PA5E_PWM_PWMEXTRG0                     _L_(4)       /**< PWM signal line function value: PWM_PWMEXTRG0 */
#define PIO_PA5E_PWM_PWMEXTRG0                     (_U_(1) << 5) /**< PWM signal: PWM_PWMEXTRG0 */
#define PIN_PB17E_PWM_PWMEXTRG0                    _L_(49)      /**< PWM signal: PWM_PWMEXTRG0 on PB17 mux E */
#define MUX_PB17E_PWM_PWMEXTRG0                    _L_(4)       /**< PWM signal line function value: PWM_PWMEXTRG0 */
#define PIO_PB17E_PWM_PWMEXTRG0                    (_U_(1) << 17) /**< PWM signal: PWM_PWMEXTRG0 */
#define PIN_PB26E_PWM_PWMEXTRG0                    _L_(58)      /**< PWM signal: PWM_PWMEXTRG0 on PB26 mux E */
#define MUX_PB26E_PWM_PWMEXTRG0                    _L_(4)       /**< PWM signal line function value: PWM_PWMEXTRG0 */
#define PIO_PB26E_PWM_PWMEXTRG0                    (_U_(1) << 26) /**< PWM signal: PWM_PWMEXTRG0 */
#define PIN_PD22C_PWM_PWMEXTRG0                    _L_(118)     /**< PWM signal: PWM_PWMEXTRG0 on PD22 mux C */
#define MUX_PD22C_PWM_PWMEXTRG0                    _L_(2)       /**< PWM signal line function value: PWM_PWMEXTRG0 */
#define PIO_PD22C_PWM_PWMEXTRG0                    (_U_(1) << 22) /**< PWM signal: PWM_PWMEXTRG0 */
#define PIN_PD30F_PWM_PWMEXTRG0                    _L_(126)     /**< PWM signal: PWM_PWMEXTRG0 on PD30 mux F */
#define MUX_PD30F_PWM_PWMEXTRG0                    _L_(5)       /**< PWM signal line function value: PWM_PWMEXTRG0 */
#define PIO_PD30F_PWM_PWMEXTRG0                    (_U_(1) << 30) /**< PWM signal: PWM_PWMEXTRG0 */
#define PIN_PA6E_PWM_PWMEXTRG1                     _L_(6)       /**< PWM signal: PWM_PWMEXTRG1 on PA6 mux E */
#define MUX_PA6E_PWM_PWMEXTRG1                     _L_(4)       /**< PWM signal line function value: PWM_PWMEXTRG1 */
#define PIO_PA6E_PWM_PWMEXTRG1                     (_U_(1) << 6) /**< PWM signal: PWM_PWMEXTRG1 */
#define PIN_PB18E_PWM_PWMEXTRG1                    _L_(50)      /**< PWM signal: PWM_PWMEXTRG1 on PB18 mux E */
#define MUX_PB18E_PWM_PWMEXTRG1                    _L_(4)       /**< PWM signal line function value: PWM_PWMEXTRG1 */
#define PIO_PB18E_PWM_PWMEXTRG1                    (_U_(1) << 18) /**< PWM signal: PWM_PWMEXTRG1 */
#define PIN_PB27E_PWM_PWMEXTRG1                    _L_(59)      /**< PWM signal: PWM_PWMEXTRG1 on PB27 mux E */
#define MUX_PB27E_PWM_PWMEXTRG1                    _L_(4)       /**< PWM signal line function value: PWM_PWMEXTRG1 */
#define PIO_PB27E_PWM_PWMEXTRG1                    (_U_(1) << 27) /**< PWM signal: PWM_PWMEXTRG1 */
#define PIN_PD23C_PWM_PWMEXTRG1                    _L_(119)     /**< PWM signal: PWM_PWMEXTRG1 on PD23 mux C */
#define MUX_PD23C_PWM_PWMEXTRG1                    _L_(2)       /**< PWM signal line function value: PWM_PWMEXTRG1 */
#define PIO_PD23C_PWM_PWMEXTRG1                    (_U_(1) << 23) /**< PWM signal: PWM_PWMEXTRG1 */
#define PIN_PD31F_PWM_PWMEXTRG1                    _L_(127)     /**< PWM signal: PWM_PWMEXTRG1 on PD31 mux F */
#define MUX_PD31F_PWM_PWMEXTRG1                    _L_(5)       /**< PWM signal line function value: PWM_PWMEXTRG1 */
#define PIO_PD31F_PWM_PWMEXTRG1                    (_U_(1) << 31) /**< PWM signal: PWM_PWMEXTRG1 */
#define PIN_PA7E_PWM_PWMFI0                        _L_(7)       /**< PWM signal: PWM_PWMFI0 on PA7 mux E */
#define MUX_PA7E_PWM_PWMFI0                        _L_(4)       /**< PWM signal line function value: PWM_PWMFI0 */
#define PIO_PA7E_PWM_PWMFI0                        (_U_(1) << 7) /**< PWM signal: PWM_PWMFI0 */
#define PIN_PB19E_PWM_PWMFI0                       _L_(51)      /**< PWM signal: PWM_PWMFI0 on PB19 mux E */
#define MUX_PB19E_PWM_PWMFI0                       _L_(4)       /**< PWM signal line function value: PWM_PWMFI0 */
#define PIO_PB19E_PWM_PWMFI0                       (_U_(1) << 19) /**< PWM signal: PWM_PWMFI0 */
#define PIN_PB28E_PWM_PWMFI0                       _L_(60)      /**< PWM signal: PWM_PWMFI0 on PB28 mux E */
#define MUX_PB28E_PWM_PWMFI0                       _L_(4)       /**< PWM signal line function value: PWM_PWMFI0 */
#define PIO_PB28E_PWM_PWMFI0                       (_U_(1) << 28) /**< PWM signal: PWM_PWMFI0 */
#define PIN_PD24C_PWM_PWMFI0                       _L_(120)     /**< PWM signal: PWM_PWMFI0 on PD24 mux C */
#define MUX_PD24C_PWM_PWMFI0                       _L_(2)       /**< PWM signal line function value: PWM_PWMFI0 */
#define PIO_PD24C_PWM_PWMFI0                       (_U_(1) << 24) /**< PWM signal: PWM_PWMFI0 */
#define PIN_PE0F_PWM_PWMFI0                        _L_(128)     /**< PWM signal: PWM_PWMFI0 on PE0 mux F */
#define MUX_PE0F_PWM_PWMFI0                        _L_(5)       /**< PWM signal line function value: PWM_PWMFI0 */
#define PIO_PE0F_PWM_PWMFI0                        (_U_(1) << 0) /**< PWM signal: PWM_PWMFI0 */
#define PIN_PA8E_PWM_PWMFI1                        _L_(8)       /**< PWM signal: PWM_PWMFI1 on PA8 mux E */
#define MUX_PA8E_PWM_PWMFI1                        _L_(4)       /**< PWM signal line function value: PWM_PWMFI1 */
#define PIO_PA8E_PWM_PWMFI1                        (_U_(1) << 8) /**< PWM signal: PWM_PWMFI1 */
#define PIN_PB20E_PWM_PWMFI1                       _L_(52)      /**< PWM signal: PWM_PWMFI1 on PB20 mux E */
#define MUX_PB20E_PWM_PWMFI1                       _L_(4)       /**< PWM signal line function value: PWM_PWMFI1 */
#define PIO_PB20E_PWM_PWMFI1                       (_U_(1) << 20) /**< PWM signal: PWM_PWMFI1 */
#define PIN_PB29E_PWM_PWMFI1                       _L_(61)      /**< PWM signal: PWM_PWMFI1 on PB29 mux E */
#define MUX_PB29E_PWM_PWMFI1                       _L_(4)       /**< PWM signal line function value: PWM_PWMFI1 */
#define PIO_PB29E_PWM_PWMFI1                       (_U_(1) << 29) /**< PWM signal: PWM_PWMFI1 */
#define PIN_PD25C_PWM_PWMFI1                       _L_(121)     /**< PWM signal: PWM_PWMFI1 on PD25 mux C */
#define MUX_PD25C_PWM_PWMFI1                       _L_(2)       /**< PWM signal line function value: PWM_PWMFI1 */
#define PIO_PD25C_PWM_PWMFI1                       (_U_(1) << 25) /**< PWM signal: PWM_PWMFI1 */
#define PIN_PE1F_PWM_PWMFI1                        _L_(129)     /**< PWM signal: PWM_PWMFI1 on PE1 mux F */
#define MUX_PE1F_PWM_PWMFI1                        _L_(5)       /**< PWM signal line function value: PWM_PWMFI1 */
#define PIO_PE1F_PWM_PWMFI1                        (_U_(1) << 1) /**< PWM signal: PWM_PWMFI1 */
#define PIN_PA1E_PWM_PWMH0                         _L_(1)       /**< PWM signal: PWM_PWMH0 on PA1 mux E */
#define MUX_PA1E_PWM_PWMH0                         _L_(4)       /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PA1E_PWM_PWMH0                         (_U_(1) << 1) /**< PWM signal: PWM_PWMH0 */
#define PIN_PB10E_PWM_PWMH0                        _L_(42)      /**< PWM signal: PWM_PWMH0 on PB10 mux E */
#define MUX_PB10E_PWM_PWMH0                        _L_(4)       /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PB10E_PWM_PWMH0                        (_U_(1) << 10) /**< PWM signal: PWM_PWMH0 */
#define PIN_PB30E_PWM_PWMH0                        _L_(62)      /**< PWM signal: PWM_PWMH0 on PB30 mux E */
#define MUX_PB30E_PWM_PWMH0                        _L_(4)       /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PB30E_PWM_PWMH0                        (_U_(1) << 30) /**< PWM signal: PWM_PWMH0 */
#define PIN_PD14C_PWM_PWMH0                        _L_(110)     /**< PWM signal: PWM_PWMH0 on PD14 mux C */
#define MUX_PD14C_PWM_PWMH0                        _L_(2)       /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PD14C_PWM_PWMH0                        (_U_(1) << 14) /**< PWM signal: PWM_PWMH0 */
#define PIN_PE3A_PWM_PWMH0                         _L_(131)     /**< PWM signal: PWM_PWMH0 on PE3 mux A */
#define MUX_PE3A_PWM_PWMH0                         _L_(0)       /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PE3A_PWM_PWMH0                         (_U_(1) << 3) /**< PWM signal: PWM_PWMH0 */
#define PIN_PA2E_PWM_PWMH1                         _L_(2)       /**< PWM signal: PWM_PWMH1 on PA2 mux E */
#define MUX_PA2E_PWM_PWMH1                         _L_(4)       /**< PWM signal line function value: PWM_PWMH1 */
#define PIO_PA2E_PWM_PWMH1                         (_U_(1) << 2) /**< PWM signal: PWM_PWMH1 */
#define PIN_PB12E_PWM_PWMH1                        _L_(44)      /**< PWM signal: PWM_PWMH1 on PB12 mux E */
#define MUX_PB12E_PWM_PWMH1                        _L_(4)       /**< PWM signal line function value: PWM_PWMH1 */
#define PIO_PB12E_PWM_PWMH1                        (_U_(1) << 12) /**< PWM signal: PWM_PWMH1 */
#define PIN_PC1E_PWM_PWMH1                         _L_(65)      /**< PWM signal: PWM_PWMH1 on PC1 mux E */
#define MUX_PC1E_PWM_PWMH1                         _L_(4)       /**< PWM signal line function value: PWM_PWMH1 */
#define PIO_PC1E_PWM_PWMH1                         (_U_(1) << 1) /**< PWM signal: PWM_PWMH1 */
#define PIN_PD16C_PWM_PWMH1                        _L_(112)     /**< PWM signal: PWM_PWMH1 on PD16 mux C */
#define MUX_PD16C_PWM_PWMH1                        _L_(2)       /**< PWM signal line function value: PWM_PWMH1 */
#define PIO_PD16C_PWM_PWMH1                        (_U_(1) << 16) /**< PWM signal: PWM_PWMH1 */
#define PIN_PE5A_PWM_PWMH1                         _L_(133)     /**< PWM signal: PWM_PWMH1 on PE5 mux A */
#define MUX_PE5A_PWM_PWMH1                         _L_(0)       /**< PWM signal line function value: PWM_PWMH1 */
#define PIO_PE5A_PWM_PWMH1                         (_U_(1) << 5) /**< PWM signal: PWM_PWMH1 */
#define PIN_PA13E_PWM_PWMH2                        _L_(13)      /**< PWM signal: PWM_PWMH2 on PA13 mux E */
#define MUX_PA13E_PWM_PWMH2                        _L_(4)       /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PA13E_PWM_PWMH2                        (_U_(1) << 13) /**< PWM signal: PWM_PWMH2 */
#define PIN_PB14E_PWM_PWMH2                        _L_(46)      /**< PWM signal: PWM_PWMH2 on PB14 mux E */
#define MUX_PB14E_PWM_PWMH2                        _L_(4)       /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PB14E_PWM_PWMH2                        (_U_(1) << 14) /**< PWM signal: PWM_PWMH2 */
#define PIN_PC3E_PWM_PWMH2                         _L_(67)      /**< PWM signal: PWM_PWMH2 on PC3 mux E */
#define MUX_PC3E_PWM_PWMH2                         _L_(4)       /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PC3E_PWM_PWMH2                         (_U_(1) << 3) /**< PWM signal: PWM_PWMH2 */
#define PIN_PD18C_PWM_PWMH2                        _L_(114)     /**< PWM signal: PWM_PWMH2 on PD18 mux C */
#define MUX_PD18C_PWM_PWMH2                        _L_(2)       /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PD18C_PWM_PWMH2                        (_U_(1) << 18) /**< PWM signal: PWM_PWMH2 */
#define PIN_PE7A_PWM_PWMH2                         _L_(135)     /**< PWM signal: PWM_PWMH2 on PE7 mux A */
#define MUX_PE7A_PWM_PWMH2                         _L_(0)       /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PE7A_PWM_PWMH2                         (_U_(1) << 7) /**< PWM signal: PWM_PWMH2 */
#define PIN_PA4E_PWM_PWMH3                         _L_(4)       /**< PWM signal: PWM_PWMH3 on PA4 mux E */
#define MUX_PA4E_PWM_PWMH3                         _L_(4)       /**< PWM signal line function value: PWM_PWMH3 */
#define PIO_PA4E_PWM_PWMH3                         (_U_(1) << 4) /**< PWM signal: PWM_PWMH3 */
#define PIN_PB16E_PWM_PWMH3                        _L_(48)      /**< PWM signal: PWM_PWMH3 on PB16 mux E */
#define MUX_PB16E_PWM_PWMH3                        _L_(4)       /**< PWM signal line function value: PWM_PWMH3 */
#define PIO_PB16E_PWM_PWMH3                        (_U_(1) << 16) /**< PWM signal: PWM_PWMH3 */
#define PIN_PC5E_PWM_PWMH3                         _L_(69)      /**< PWM signal: PWM_PWMH3 on PC5 mux E */
#define MUX_PC5E_PWM_PWMH3                         _L_(4)       /**< PWM signal line function value: PWM_PWMH3 */
#define PIO_PC5E_PWM_PWMH3                         (_U_(1) << 5) /**< PWM signal: PWM_PWMH3 */
#define PIN_PD20C_PWM_PWMH3                        _L_(116)     /**< PWM signal: PWM_PWMH3 on PD20 mux C */
#define MUX_PD20C_PWM_PWMH3                        _L_(2)       /**< PWM signal line function value: PWM_PWMH3 */
#define PIO_PD20C_PWM_PWMH3                        (_U_(1) << 20) /**< PWM signal: PWM_PWMH3 */
#define PIN_PD29F_PWM_PWMH3                        _L_(125)     /**< PWM signal: PWM_PWMH3 on PD29 mux F */
#define MUX_PD29F_PWM_PWMH3                        _L_(5)       /**< PWM signal line function value: PWM_PWMH3 */
#define PIO_PD29F_PWM_PWMH3                        (_U_(1) << 29) /**< PWM signal: PWM_PWMH3 */
#define PIN_PA0E_PWM_PWML0                         _L_(0)       /**< PWM signal: PWM_PWML0 on PA0 mux E */
#define MUX_PA0E_PWM_PWML0                         _L_(4)       /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PA0E_PWM_PWML0                         (_U_(1) << 0) /**< PWM signal: PWM_PWML0 */
#define PIN_PB9E_PWM_PWML0                         _L_(41)      /**< PWM signal: PWM_PWML0 on PB9 mux E */
#define MUX_PB9E_PWM_PWML0                         _L_(4)       /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PB9E_PWM_PWML0                         (_U_(1) << 9) /**< PWM signal: PWM_PWML0 */
#define PIN_PB31E_PWM_PWML0                        _L_(63)      /**< PWM signal: PWM_PWML0 on PB31 mux E */
#define MUX_PB31E_PWM_PWML0                        _L_(4)       /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PB31E_PWM_PWML0                        (_U_(1) << 31) /**< PWM signal: PWM_PWML0 */
#define PIN_PD13C_PWM_PWML0                        _L_(109)     /**< PWM signal: PWM_PWML0 on PD13 mux C */
#define MUX_PD13C_PWM_PWML0                        _L_(2)       /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PD13C_PWM_PWML0                        (_U_(1) << 13) /**< PWM signal: PWM_PWML0 */
#define PIN_PE2A_PWM_PWML0                         _L_(130)     /**< PWM signal: PWM_PWML0 on PE2 mux A */
#define MUX_PE2A_PWM_PWML0                         _L_(0)       /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PE2A_PWM_PWML0                         (_U_(1) << 2) /**< PWM signal: PWM_PWML0 */
#define PIN_PA14E_PWM_PWML1                        _L_(14)      /**< PWM signal: PWM_PWML1 on PA14 mux E */
#define MUX_PA14E_PWM_PWML1                        _L_(4)       /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PA14E_PWM_PWML1                        (_U_(1) << 14) /**< PWM signal: PWM_PWML1 */
#define PIN_PB11E_PWM_PWML1                        _L_(43)      /**< PWM signal: PWM_PWML1 on PB11 mux E */
#define MUX_PB11E_PWM_PWML1                        _L_(4)       /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PB11E_PWM_PWML1                        (_U_(1) << 11) /**< PWM signal: PWM_PWML1 */
#define PIN_PC0E_PWM_PWML1                         _L_(64)      /**< PWM signal: PWM_PWML1 on PC0 mux E */
#define MUX_PC0E_PWM_PWML1                         _L_(4)       /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PC0E_PWM_PWML1                         (_U_(1) << 0) /**< PWM signal: PWM_PWML1 */
#define PIN_PD15C_PWM_PWML1                        _L_(111)     /**< PWM signal: PWM_PWML1 on PD15 mux C */
#define MUX_PD15C_PWM_PWML1                        _L_(2)       /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PD15C_PWM_PWML1                        (_U_(1) << 15) /**< PWM signal: PWM_PWML1 */
#define PIN_PE4A_PWM_PWML1                         _L_(132)     /**< PWM signal: PWM_PWML1 on PE4 mux A */
#define MUX_PE4A_PWM_PWML1                         _L_(0)       /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PE4A_PWM_PWML1                         (_U_(1) << 4) /**< PWM signal: PWM_PWML1 */
#define PIN_PA12E_PWM_PWML2                        _L_(12)      /**< PWM signal: PWM_PWML2 on PA12 mux E */
#define MUX_PA12E_PWM_PWML2                        _L_(4)       /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PA12E_PWM_PWML2                        (_U_(1) << 12) /**< PWM signal: PWM_PWML2 */
#define PIN_PB13E_PWM_PWML2                        _L_(45)      /**< PWM signal: PWM_PWML2 on PB13 mux E */
#define MUX_PB13E_PWM_PWML2                        _L_(4)       /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PB13E_PWM_PWML2                        (_U_(1) << 13) /**< PWM signal: PWM_PWML2 */
#define PIN_PC2E_PWM_PWML2                         _L_(66)      /**< PWM signal: PWM_PWML2 on PC2 mux E */
#define MUX_PC2E_PWM_PWML2                         _L_(4)       /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PC2E_PWM_PWML2                         (_U_(1) << 2) /**< PWM signal: PWM_PWML2 */
#define PIN_PD17C_PWM_PWML2                        _L_(113)     /**< PWM signal: PWM_PWML2 on PD17 mux C */
#define MUX_PD17C_PWM_PWML2                        _L_(2)       /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PD17C_PWM_PWML2                        (_U_(1) << 17) /**< PWM signal: PWM_PWML2 */
#define PIN_PE6A_PWM_PWML2                         _L_(134)     /**< PWM signal: PWM_PWML2 on PE6 mux A */
#define MUX_PE6A_PWM_PWML2                         _L_(0)       /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PE6A_PWM_PWML2                         (_U_(1) << 6) /**< PWM signal: PWM_PWML2 */
#define PIN_PA3E_PWM_PWML3                         _L_(3)       /**< PWM signal: PWM_PWML3 on PA3 mux E */
#define MUX_PA3E_PWM_PWML3                         _L_(4)       /**< PWM signal line function value: PWM_PWML3 */
#define PIO_PA3E_PWM_PWML3                         (_U_(1) << 3) /**< PWM signal: PWM_PWML3 */
#define PIN_PB15E_PWM_PWML3                        _L_(47)      /**< PWM signal: PWM_PWML3 on PB15 mux E */
#define MUX_PB15E_PWM_PWML3                        _L_(4)       /**< PWM signal line function value: PWM_PWML3 */
#define PIO_PB15E_PWM_PWML3                        (_U_(1) << 15) /**< PWM signal: PWM_PWML3 */
#define PIN_PC4E_PWM_PWML3                         _L_(68)      /**< PWM signal: PWM_PWML3 on PC4 mux E */
#define MUX_PC4E_PWM_PWML3                         _L_(4)       /**< PWM signal line function value: PWM_PWML3 */
#define PIO_PC4E_PWM_PWML3                         (_U_(1) << 4) /**< PWM signal: PWM_PWML3 */
#define PIN_PD19C_PWM_PWML3                        _L_(115)     /**< PWM signal: PWM_PWML3 on PD19 mux C */
#define MUX_PD19C_PWM_PWML3                        _L_(2)       /**< PWM signal line function value: PWM_PWML3 */
#define PIO_PD19C_PWM_PWML3                        (_U_(1) << 19) /**< PWM signal: PWM_PWML3 */
#define PIN_PD28F_PWM_PWML3                        _L_(124)     /**< PWM signal: PWM_PWML3 on PD28 mux F */
#define MUX_PD28F_PWM_PWML3                        _L_(5)       /**< PWM signal line function value: PWM_PWML3 */
#define PIO_PD28F_PWM_PWML3                        (_U_(1) << 28) /**< PWM signal: PWM_PWML3 */
/* ========== PIO definition for QSPI0 peripheral ========== */
#define PIN_PB13A_QSPI0_CS                         _L_(45)      /**< QSPI0 signal: QSPI0_CS on PB13 mux A */
#define MUX_PB13A_QSPI0_CS                         _L_(0)       /**< QSPI0 signal line function value: QSPI0_CS */
#define PIO_PB13A_QSPI0_CS                         (_U_(1) << 13) /**< QSPI0 signal: QSPI0_CS */
#define PIN_PB20A_QSPI0_DQS                        _L_(52)      /**< QSPI0 signal: QSPI0_DQS on PB20 mux A */
#define MUX_PB20A_QSPI0_DQS                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_DQS */
#define PIO_PB20A_QSPI0_DQS                        (_U_(1) << 20) /**< QSPI0 signal: QSPI0_DQS */
#define PIN_PB21A_QSPI0_INT                        _L_(53)      /**< QSPI0 signal: QSPI0_INT on PB21 mux A */
#define MUX_PB21A_QSPI0_INT                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_INT */
#define PIO_PB21A_QSPI0_INT                        (_U_(1) << 21) /**< QSPI0 signal: QSPI0_INT */
#define PIN_PB12A_QSPI0_IO0                        _L_(44)      /**< QSPI0 signal: QSPI0_IO0 on PB12 mux A */
#define MUX_PB12A_QSPI0_IO0                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_IO0 */
#define PIO_PB12A_QSPI0_IO0                        (_U_(1) << 12) /**< QSPI0 signal: QSPI0_IO0 */
#define PIN_PB11A_QSPI0_IO1                        _L_(43)      /**< QSPI0 signal: QSPI0_IO1 on PB11 mux A */
#define MUX_PB11A_QSPI0_IO1                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_IO1 */
#define PIO_PB11A_QSPI0_IO1                        (_U_(1) << 11) /**< QSPI0 signal: QSPI0_IO1 */
#define PIN_PB10A_QSPI0_IO2                        _L_(42)      /**< QSPI0 signal: QSPI0_IO2 on PB10 mux A */
#define MUX_PB10A_QSPI0_IO2                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_IO2 */
#define PIO_PB10A_QSPI0_IO2                        (_U_(1) << 10) /**< QSPI0 signal: QSPI0_IO2 */
#define PIN_PB9A_QSPI0_IO3                         _L_(41)      /**< QSPI0 signal: QSPI0_IO3 on PB9 mux A */
#define MUX_PB9A_QSPI0_IO3                         _L_(0)       /**< QSPI0 signal line function value: QSPI0_IO3 */
#define PIO_PB9A_QSPI0_IO3                         (_U_(1) << 9) /**< QSPI0 signal: QSPI0_IO3 */
#define PIN_PB16A_QSPI0_IO4                        _L_(48)      /**< QSPI0 signal: QSPI0_IO4 on PB16 mux A */
#define MUX_PB16A_QSPI0_IO4                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_IO4 */
#define PIO_PB16A_QSPI0_IO4                        (_U_(1) << 16) /**< QSPI0 signal: QSPI0_IO4 */
#define PIN_PB17A_QSPI0_IO5                        _L_(49)      /**< QSPI0 signal: QSPI0_IO5 on PB17 mux A */
#define MUX_PB17A_QSPI0_IO5                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_IO5 */
#define PIO_PB17A_QSPI0_IO5                        (_U_(1) << 17) /**< QSPI0 signal: QSPI0_IO5 */
#define PIN_PB18A_QSPI0_IO6                        _L_(50)      /**< QSPI0 signal: QSPI0_IO6 on PB18 mux A */
#define MUX_PB18A_QSPI0_IO6                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_IO6 */
#define PIO_PB18A_QSPI0_IO6                        (_U_(1) << 18) /**< QSPI0 signal: QSPI0_IO6 */
#define PIN_PB19A_QSPI0_IO7                        _L_(51)      /**< QSPI0 signal: QSPI0_IO7 on PB19 mux A */
#define MUX_PB19A_QSPI0_IO7                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_IO7 */
#define PIO_PB19A_QSPI0_IO7                        (_U_(1) << 19) /**< QSPI0 signal: QSPI0_IO7 */
#define PIN_PB14A_QSPI0_SCK                        _L_(46)      /**< QSPI0 signal: QSPI0_SCK on PB14 mux A */
#define MUX_PB14A_QSPI0_SCK                        _L_(0)       /**< QSPI0 signal line function value: QSPI0_SCK */
#define PIO_PB14A_QSPI0_SCK                        (_U_(1) << 14) /**< QSPI0 signal: QSPI0_SCK */
#define PIN_PB15A_QSPI0_SCKN                       _L_(47)      /**< QSPI0 signal: QSPI0_SCKN on PB15 mux A */
#define MUX_PB15A_QSPI0_SCKN                       _L_(0)       /**< QSPI0 signal line function value: QSPI0_SCKN */
#define PIO_PB15A_QSPI0_SCKN                       (_U_(1) << 15) /**< QSPI0 signal: QSPI0_SCKN */
/* ========== PIO definition for QSPI1 peripheral ========== */
#define PIN_PB26A_QSPI1_CS                         _L_(58)      /**< QSPI1 signal: QSPI1_CS on PB26 mux A */
#define MUX_PB26A_QSPI1_CS                         _L_(0)       /**< QSPI1 signal line function value: QSPI1_CS */
#define PIO_PB26A_QSPI1_CS                         (_U_(1) << 26) /**< QSPI1 signal: QSPI1_CS */
#define PIN_PB25A_QSPI1_IO0                        _L_(57)      /**< QSPI1 signal: QSPI1_IO0 on PB25 mux A */
#define MUX_PB25A_QSPI1_IO0                        _L_(0)       /**< QSPI1 signal line function value: QSPI1_IO0 */
#define PIO_PB25A_QSPI1_IO0                        (_U_(1) << 25) /**< QSPI1 signal: QSPI1_IO0 */
#define PIN_PB24A_QSPI1_IO1                        _L_(56)      /**< QSPI1 signal: QSPI1_IO1 on PB24 mux A */
#define MUX_PB24A_QSPI1_IO1                        _L_(0)       /**< QSPI1 signal line function value: QSPI1_IO1 */
#define PIO_PB24A_QSPI1_IO1                        (_U_(1) << 24) /**< QSPI1 signal: QSPI1_IO1 */
#define PIN_PB23A_QSPI1_IO2                        _L_(55)      /**< QSPI1 signal: QSPI1_IO2 on PB23 mux A */
#define MUX_PB23A_QSPI1_IO2                        _L_(0)       /**< QSPI1 signal line function value: QSPI1_IO2 */
#define PIO_PB23A_QSPI1_IO2                        (_U_(1) << 23) /**< QSPI1 signal: QSPI1_IO2 */
#define PIN_PB22A_QSPI1_IO3                        _L_(54)      /**< QSPI1 signal: QSPI1_IO3 on PB22 mux A */
#define MUX_PB22A_QSPI1_IO3                        _L_(0)       /**< QSPI1 signal line function value: QSPI1_IO3 */
#define PIO_PB22A_QSPI1_IO3                        (_U_(1) << 22) /**< QSPI1 signal: QSPI1_IO3 */
#define PIN_PB27A_QSPI1_SCK                        _L_(59)      /**< QSPI1 signal: QSPI1_SCK on PB27 mux A */
#define MUX_PB27A_QSPI1_SCK                        _L_(0)       /**< QSPI1 signal line function value: QSPI1_SCK */
#define PIO_PB27A_QSPI1_SCK                        (_U_(1) << 27) /**< QSPI1 signal: QSPI1_SCK */
/* ========== PIO definition for SDMMC0 peripheral ========== */
#define PIN_PA13A_SDMMC0_1V8SEL                    _L_(13)      /**< SDMMC0 signal: SDMMC0_1V8SEL on PA13 mux A */
#define MUX_PA13A_SDMMC0_1V8SEL                    _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_1V8SEL */
#define PIO_PA13A_SDMMC0_1V8SEL                    (_U_(1) << 13) /**< SDMMC0 signal: SDMMC0_1V8SEL */
#define PIN_PA14A_SDMMC0_CD                        _L_(14)      /**< SDMMC0 signal: SDMMC0_CD on PA14 mux A */
#define MUX_PA14A_SDMMC0_CD                        _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CD */
#define PIO_PA14A_SDMMC0_CD                        (_U_(1) << 14) /**< SDMMC0 signal: SDMMC0_CD */
#define PIN_PA0A_SDMMC0_CK                         _L_(0)       /**< SDMMC0 signal: SDMMC0_CK on PA0 mux A */
#define MUX_PA0A_SDMMC0_CK                         _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CK */
#define PIO_PA0A_SDMMC0_CK                         (_U_(1) << 0) /**< SDMMC0 signal: SDMMC0_CK */
#define PIN_PA1A_SDMMC0_CMD                        _L_(1)       /**< SDMMC0 signal: SDMMC0_CMD on PA1 mux A */
#define MUX_PA1A_SDMMC0_CMD                        _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_CMD */
#define PIO_PA1A_SDMMC0_CMD                        (_U_(1) << 1) /**< SDMMC0 signal: SDMMC0_CMD */
#define PIN_PA3A_SDMMC0_DAT0                       _L_(3)       /**< SDMMC0 signal: SDMMC0_DAT0 on PA3 mux A */
#define MUX_PA3A_SDMMC0_DAT0                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT0 */
#define PIO_PA3A_SDMMC0_DAT0                       (_U_(1) << 3) /**< SDMMC0 signal: SDMMC0_DAT0 */
#define PIN_PA4A_SDMMC0_DAT1                       _L_(4)       /**< SDMMC0 signal: SDMMC0_DAT1 on PA4 mux A */
#define MUX_PA4A_SDMMC0_DAT1                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT1 */
#define PIO_PA4A_SDMMC0_DAT1                       (_U_(1) << 4) /**< SDMMC0 signal: SDMMC0_DAT1 */
#define PIN_PA5A_SDMMC0_DAT2                       _L_(5)       /**< SDMMC0 signal: SDMMC0_DAT2 on PA5 mux A */
#define MUX_PA5A_SDMMC0_DAT2                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT2 */
#define PIO_PA5A_SDMMC0_DAT2                       (_U_(1) << 5) /**< SDMMC0 signal: SDMMC0_DAT2 */
#define PIN_PA6A_SDMMC0_DAT3                       _L_(6)       /**< SDMMC0 signal: SDMMC0_DAT3 on PA6 mux A */
#define MUX_PA6A_SDMMC0_DAT3                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT3 */
#define PIO_PA6A_SDMMC0_DAT3                       (_U_(1) << 6) /**< SDMMC0 signal: SDMMC0_DAT3 */
#define PIN_PA7A_SDMMC0_DAT4                       _L_(7)       /**< SDMMC0 signal: SDMMC0_DAT4 on PA7 mux A */
#define MUX_PA7A_SDMMC0_DAT4                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT4 */
#define PIO_PA7A_SDMMC0_DAT4                       (_U_(1) << 7) /**< SDMMC0 signal: SDMMC0_DAT4 */
#define PIN_PA8A_SDMMC0_DAT5                       _L_(8)       /**< SDMMC0 signal: SDMMC0_DAT5 on PA8 mux A */
#define MUX_PA8A_SDMMC0_DAT5                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT5 */
#define PIO_PA8A_SDMMC0_DAT5                       (_U_(1) << 8) /**< SDMMC0 signal: SDMMC0_DAT5 */
#define PIN_PA9A_SDMMC0_DAT6                       _L_(9)       /**< SDMMC0 signal: SDMMC0_DAT6 on PA9 mux A */
#define MUX_PA9A_SDMMC0_DAT6                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT6 */
#define PIO_PA9A_SDMMC0_DAT6                       (_U_(1) << 9) /**< SDMMC0 signal: SDMMC0_DAT6 */
#define PIN_PA10A_SDMMC0_DAT7                      _L_(10)      /**< SDMMC0 signal: SDMMC0_DAT7 on PA10 mux A */
#define MUX_PA10A_SDMMC0_DAT7                      _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DAT7 */
#define PIO_PA10A_SDMMC0_DAT7                      (_U_(1) << 10) /**< SDMMC0 signal: SDMMC0_DAT7 */
#define PIN_PA11A_SDMMC0_DS                        _L_(11)      /**< SDMMC0 signal: SDMMC0_DS on PA11 mux A */
#define MUX_PA11A_SDMMC0_DS                        _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_DS */
#define PIO_PA11A_SDMMC0_DS                        (_U_(1) << 11) /**< SDMMC0 signal: SDMMC0_DS */
#define PIN_PA2A_SDMMC0_RSTN                       _L_(2)       /**< SDMMC0 signal: SDMMC0_RSTN on PA2 mux A */
#define MUX_PA2A_SDMMC0_RSTN                       _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_RSTN */
#define PIO_PA2A_SDMMC0_RSTN                       (_U_(1) << 2) /**< SDMMC0 signal: SDMMC0_RSTN */
#define PIN_PA12A_SDMMC0_WP                        _L_(12)      /**< SDMMC0 signal: SDMMC0_WP on PA12 mux A */
#define MUX_PA12A_SDMMC0_WP                        _L_(0)       /**< SDMMC0 signal line function value: SDMMC0_WP */
#define PIO_PA12A_SDMMC0_WP                        (_U_(1) << 12) /**< SDMMC0 signal: SDMMC0_WP */
/* ========== PIO definition for SDMMC1 peripheral ========== */
#define PIN_PC5A_SDMMC1_1V8SEL                     _L_(69)      /**< SDMMC1 signal: SDMMC1_1V8SEL on PC5 mux A */
#define MUX_PC5A_SDMMC1_1V8SEL                     _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_1V8SEL */
#define PIO_PC5A_SDMMC1_1V8SEL                     (_U_(1) << 5) /**< SDMMC1 signal: SDMMC1_1V8SEL */
#define PIN_PC4A_SDMMC1_CD                         _L_(68)      /**< SDMMC1 signal: SDMMC1_CD on PC4 mux A */
#define MUX_PC4A_SDMMC1_CD                         _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_CD */
#define PIO_PC4A_SDMMC1_CD                         (_U_(1) << 4) /**< SDMMC1 signal: SDMMC1_CD */
#define PIN_PB30A_SDMMC1_CK                        _L_(62)      /**< SDMMC1 signal: SDMMC1_CK on PB30 mux A */
#define MUX_PB30A_SDMMC1_CK                        _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_CK */
#define PIO_PB30A_SDMMC1_CK                        (_U_(1) << 30) /**< SDMMC1 signal: SDMMC1_CK */
#define PIN_PB29A_SDMMC1_CMD                       _L_(61)      /**< SDMMC1 signal: SDMMC1_CMD on PB29 mux A */
#define MUX_PB29A_SDMMC1_CMD                       _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_CMD */
#define PIO_PB29A_SDMMC1_CMD                       (_U_(1) << 29) /**< SDMMC1 signal: SDMMC1_CMD */
#define PIN_PB31A_SDMMC1_DAT0                      _L_(63)      /**< SDMMC1 signal: SDMMC1_DAT0 on PB31 mux A */
#define MUX_PB31A_SDMMC1_DAT0                      _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_DAT0 */
#define PIO_PB31A_SDMMC1_DAT0                      (_U_(1) << 31) /**< SDMMC1 signal: SDMMC1_DAT0 */
#define PIN_PC0A_SDMMC1_DAT1                       _L_(64)      /**< SDMMC1 signal: SDMMC1_DAT1 on PC0 mux A */
#define MUX_PC0A_SDMMC1_DAT1                       _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_DAT1 */
#define PIO_PC0A_SDMMC1_DAT1                       (_U_(1) << 0) /**< SDMMC1 signal: SDMMC1_DAT1 */
#define PIN_PC1A_SDMMC1_DAT2                       _L_(65)      /**< SDMMC1 signal: SDMMC1_DAT2 on PC1 mux A */
#define MUX_PC1A_SDMMC1_DAT2                       _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_DAT2 */
#define PIO_PC1A_SDMMC1_DAT2                       (_U_(1) << 1) /**< SDMMC1 signal: SDMMC1_DAT2 */
#define PIN_PC2A_SDMMC1_DAT3                       _L_(66)      /**< SDMMC1 signal: SDMMC1_DAT3 on PC2 mux A */
#define MUX_PC2A_SDMMC1_DAT3                       _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_DAT3 */
#define PIO_PC2A_SDMMC1_DAT3                       (_U_(1) << 2) /**< SDMMC1 signal: SDMMC1_DAT3 */
#define PIN_PB28A_SDMMC1_RSTN                      _L_(60)      /**< SDMMC1 signal: SDMMC1_RSTN on PB28 mux A */
#define MUX_PB28A_SDMMC1_RSTN                      _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_RSTN */
#define PIO_PB28A_SDMMC1_RSTN                      (_U_(1) << 28) /**< SDMMC1 signal: SDMMC1_RSTN */
#define PIN_PC3A_SDMMC1_WP                         _L_(67)      /**< SDMMC1 signal: SDMMC1_WP on PC3 mux A */
#define MUX_PC3A_SDMMC1_WP                         _L_(0)       /**< SDMMC1 signal line function value: SDMMC1_WP */
#define PIO_PC3A_SDMMC1_WP                         (_U_(1) << 3) /**< SDMMC1 signal: SDMMC1_WP */
/* ========== PIO definition for SDMMC2 peripheral ========== */
#define PIN_PD11A_SDMMC2_1V8SEL                    _L_(107)     /**< SDMMC2 signal: SDMMC2_1V8SEL on PD11 mux A */
#define MUX_PD11A_SDMMC2_1V8SEL                    _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_1V8SEL */
#define PIO_PD11A_SDMMC2_1V8SEL                    (_U_(1) << 11) /**< SDMMC2 signal: SDMMC2_1V8SEL */
#define PIN_PD10A_SDMMC2_CD                        _L_(106)     /**< SDMMC2 signal: SDMMC2_CD on PD10 mux A */
#define MUX_PD10A_SDMMC2_CD                        _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_CD */
#define PIO_PD10A_SDMMC2_CD                        (_U_(1) << 10) /**< SDMMC2 signal: SDMMC2_CD */
#define PIN_PD4A_SDMMC2_CK                         _L_(100)     /**< SDMMC2 signal: SDMMC2_CK on PD4 mux A */
#define MUX_PD4A_SDMMC2_CK                         _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_CK */
#define PIO_PD4A_SDMMC2_CK                         (_U_(1) << 4) /**< SDMMC2 signal: SDMMC2_CK */
#define PIN_PD3A_SDMMC2_CMD                        _L_(99)      /**< SDMMC2 signal: SDMMC2_CMD on PD3 mux A */
#define MUX_PD3A_SDMMC2_CMD                        _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_CMD */
#define PIO_PD3A_SDMMC2_CMD                        (_U_(1) << 3) /**< SDMMC2 signal: SDMMC2_CMD */
#define PIN_PD5A_SDMMC2_DAT0                       _L_(101)     /**< SDMMC2 signal: SDMMC2_DAT0 on PD5 mux A */
#define MUX_PD5A_SDMMC2_DAT0                       _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_DAT0 */
#define PIO_PD5A_SDMMC2_DAT0                       (_U_(1) << 5) /**< SDMMC2 signal: SDMMC2_DAT0 */
#define PIN_PD6A_SDMMC2_DAT1                       _L_(102)     /**< SDMMC2 signal: SDMMC2_DAT1 on PD6 mux A */
#define MUX_PD6A_SDMMC2_DAT1                       _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_DAT1 */
#define PIO_PD6A_SDMMC2_DAT1                       (_U_(1) << 6) /**< SDMMC2 signal: SDMMC2_DAT1 */
#define PIN_PD7A_SDMMC2_DAT2                       _L_(103)     /**< SDMMC2 signal: SDMMC2_DAT2 on PD7 mux A */
#define MUX_PD7A_SDMMC2_DAT2                       _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_DAT2 */
#define PIO_PD7A_SDMMC2_DAT2                       (_U_(1) << 7) /**< SDMMC2 signal: SDMMC2_DAT2 */
#define PIN_PD8A_SDMMC2_DAT3                       _L_(104)     /**< SDMMC2 signal: SDMMC2_DAT3 on PD8 mux A */
#define MUX_PD8A_SDMMC2_DAT3                       _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_DAT3 */
#define PIO_PD8A_SDMMC2_DAT3                       (_U_(1) << 8) /**< SDMMC2 signal: SDMMC2_DAT3 */
#define PIN_PD2A_SDMMC2_RSTN                       _L_(98)      /**< SDMMC2 signal: SDMMC2_RSTN on PD2 mux A */
#define MUX_PD2A_SDMMC2_RSTN                       _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_RSTN */
#define PIO_PD2A_SDMMC2_RSTN                       (_U_(1) << 2) /**< SDMMC2 signal: SDMMC2_RSTN */
#define PIN_PD9A_SDMMC2_WP                         _L_(105)     /**< SDMMC2 signal: SDMMC2_WP on PD9 mux A */
#define MUX_PD9A_SDMMC2_WP                         _L_(0)       /**< SDMMC2 signal line function value: SDMMC2_WP */
#define PIO_PD9A_SDMMC2_WP                         (_U_(1) << 9) /**< SDMMC2 signal: SDMMC2_WP */
/* ========== PIO definition for SPDIFRX peripheral ========== */
#define PIN_PA9E_SPDIFRX_SPDIF_RX                  _L_(9)       /**< SPDIFRX signal: SPDIFRX_SPDIF_RX on PA9 mux E */
#define MUX_PA9E_SPDIFRX_SPDIF_RX                  _L_(4)       /**< SPDIFRX signal line function value: SPDIFRX_SPDIF_RX */
#define PIO_PA9E_SPDIFRX_SPDIF_RX                  (_U_(1) << 9) /**< SPDIFRX signal: SPDIFRX_SPDIF_RX */
#define PIN_PB0E_SPDIFRX_SPDIF_RX                  _L_(32)      /**< SPDIFRX signal: SPDIFRX_SPDIF_RX on PB0 mux E */
#define MUX_PB0E_SPDIFRX_SPDIF_RX                  _L_(4)       /**< SPDIFRX signal line function value: SPDIFRX_SPDIF_RX */
#define PIO_PB0E_SPDIFRX_SPDIF_RX                  (_U_(1) << 0) /**< SPDIFRX signal: SPDIFRX_SPDIF_RX */
#define PIN_PD6C_SPDIFRX_SPDIF_RX                  _L_(102)     /**< SPDIFRX signal: SPDIFRX_SPDIF_RX on PD6 mux C */
#define MUX_PD6C_SPDIFRX_SPDIF_RX                  _L_(2)       /**< SPDIFRX signal line function value: SPDIFRX_SPDIF_RX */
#define PIO_PD6C_SPDIFRX_SPDIF_RX                  (_U_(1) << 6) /**< SPDIFRX signal: SPDIFRX_SPDIF_RX */
/* ========== PIO definition for SPDIFTX peripheral ========== */
#define PIN_PA10E_SPDIFTX_SPDIF_TX                 _L_(10)      /**< SPDIFTX signal: SPDIFTX_SPDIF_TX on PA10 mux E */
#define MUX_PA10E_SPDIFTX_SPDIF_TX                 _L_(4)       /**< SPDIFTX signal line function value: SPDIFTX_SPDIF_TX */
#define PIO_PA10E_SPDIFTX_SPDIF_TX                 (_U_(1) << 10) /**< SPDIFTX signal: SPDIFTX_SPDIF_TX */
#define PIN_PB1E_SPDIFTX_SPDIF_TX                  _L_(33)      /**< SPDIFTX signal: SPDIFTX_SPDIF_TX on PB1 mux E */
#define MUX_PB1E_SPDIFTX_SPDIF_TX                  _L_(4)       /**< SPDIFTX signal line function value: SPDIFTX_SPDIF_TX */
#define PIO_PB1E_SPDIFTX_SPDIF_TX                  (_U_(1) << 1) /**< SPDIFTX signal: SPDIFTX_SPDIF_TX */
#define PIN_PD7C_SPDIFTX_SPDIF_TX                  _L_(103)     /**< SPDIFTX signal: SPDIFTX_SPDIF_TX on PD7 mux C */
#define MUX_PD7C_SPDIFTX_SPDIF_TX                  _L_(2)       /**< SPDIFTX signal line function value: SPDIFTX_SPDIF_TX */
#define PIO_PD7C_SPDIFTX_SPDIF_TX                  (_U_(1) << 7) /**< SPDIFTX signal: SPDIFTX_SPDIF_TX */
/* ========== PIO definition for SSC0 peripheral ========== */
#define PIN_PA28E_SSC0_RD0                         _L_(28)      /**< SSC0 signal: SSC0_RD0 on PA28 mux E */
#define MUX_PA28E_SSC0_RD0                         _L_(4)       /**< SSC0 signal line function value: SSC0_RD0 */
#define PIO_PA28E_SSC0_RD0                         (_U_(1) << 28) /**< SSC0 signal: SSC0_RD0 */
#define PIN_PD28A_SSC0_RD0                         _L_(124)     /**< SSC0 signal: SSC0_RD0 on PD28 mux A */
#define MUX_PD28A_SSC0_RD0                         _L_(0)       /**< SSC0 signal line function value: SSC0_RD0 */
#define PIO_PD28A_SSC0_RD0                         (_U_(1) << 28) /**< SSC0 signal: SSC0_RD0 */
#define PIN_PA29E_SSC0_RF0                         _L_(29)      /**< SSC0 signal: SSC0_RF0 on PA29 mux E */
#define MUX_PA29E_SSC0_RF0                         _L_(4)       /**< SSC0 signal line function value: SSC0_RF0 */
#define PIO_PA29E_SSC0_RF0                         (_U_(1) << 29) /**< SSC0 signal: SSC0_RF0 */
#define PIN_PD29A_SSC0_RF0                         _L_(125)     /**< SSC0 signal: SSC0_RF0 on PD29 mux A */
#define MUX_PD29A_SSC0_RF0                         _L_(0)       /**< SSC0 signal line function value: SSC0_RF0 */
#define PIO_PD29A_SSC0_RF0                         (_U_(1) << 29) /**< SSC0 signal: SSC0_RF0 */
#define PIN_PA30E_SSC0_RK0                         _L_(30)      /**< SSC0 signal: SSC0_RK0 on PA30 mux E */
#define MUX_PA30E_SSC0_RK0                         _L_(4)       /**< SSC0 signal line function value: SSC0_RK0 */
#define PIO_PA30E_SSC0_RK0                         (_U_(1) << 30) /**< SSC0 signal: SSC0_RK0 */
#define PIN_PD30A_SSC0_RK0                         _L_(126)     /**< SSC0 signal: SSC0_RK0 on PD30 mux A */
#define MUX_PD30A_SSC0_RK0                         _L_(0)       /**< SSC0 signal line function value: SSC0_RK0 */
#define PIO_PD30A_SSC0_RK0                         (_U_(1) << 30) /**< SSC0 signal: SSC0_RK0 */
#define PIN_PA31E_SSC0_TD0                         _L_(31)      /**< SSC0 signal: SSC0_TD0 on PA31 mux E */
#define MUX_PA31E_SSC0_TD0                         _L_(4)       /**< SSC0 signal line function value: SSC0_TD0 */
#define PIO_PA31E_SSC0_TD0                         (_U_(1) << 31) /**< SSC0 signal: SSC0_TD0 */
#define PIN_PD31A_SSC0_TD0                         _L_(127)     /**< SSC0 signal: SSC0_TD0 on PD31 mux A */
#define MUX_PD31A_SSC0_TD0                         _L_(0)       /**< SSC0 signal line function value: SSC0_TD0 */
#define PIO_PD31A_SSC0_TD0                         (_U_(1) << 31) /**< SSC0 signal: SSC0_TD0 */
#define PIN_PA26E_SSC0_TF0                         _L_(26)      /**< SSC0 signal: SSC0_TF0 on PA26 mux E */
#define MUX_PA26E_SSC0_TF0                         _L_(4)       /**< SSC0 signal line function value: SSC0_TF0 */
#define PIO_PA26E_SSC0_TF0                         (_U_(1) << 26) /**< SSC0 signal: SSC0_TF0 */
#define PIN_PE0A_SSC0_TF0                          _L_(128)     /**< SSC0 signal: SSC0_TF0 on PE0 mux A */
#define MUX_PE0A_SSC0_TF0                          _L_(0)       /**< SSC0 signal line function value: SSC0_TF0 */
#define PIO_PE0A_SSC0_TF0                          (_U_(1) << 0) /**< SSC0 signal: SSC0_TF0 */
#define PIN_PA27E_SSC0_TK0                         _L_(27)      /**< SSC0 signal: SSC0_TK0 on PA27 mux E */
#define MUX_PA27E_SSC0_TK0                         _L_(4)       /**< SSC0 signal line function value: SSC0_TK0 */
#define PIO_PA27E_SSC0_TK0                         (_U_(1) << 27) /**< SSC0 signal: SSC0_TK0 */
#define PIN_PE1A_SSC0_TK0                          _L_(129)     /**< SSC0 signal: SSC0_TK0 on PE1 mux A */
#define MUX_PE1A_SSC0_TK0                          _L_(0)       /**< SSC0 signal line function value: SSC0_TK0 */
#define PIO_PE1A_SSC0_TK0                          (_U_(1) << 1) /**< SSC0 signal: SSC0_TK0 */
/* ========== PIO definition for SSC1 peripheral ========== */
#define PIN_PB8A_SSC1_RD1                          _L_(40)      /**< SSC1 signal: SSC1_RD1 on PB8 mux A */
#define MUX_PB8A_SSC1_RD1                          _L_(0)       /**< SSC1 signal line function value: SSC1_RD1 */
#define PIO_PB8A_SSC1_RD1                          (_U_(1) << 8) /**< SSC1 signal: SSC1_RD1 */
#define PIN_PD22D_SSC1_RD1                         _L_(118)     /**< SSC1 signal: SSC1_RD1 on PD22 mux D */
#define MUX_PD22D_SSC1_RD1                         _L_(3)       /**< SSC1 signal line function value: SSC1_RD1 */
#define PIO_PD22D_SSC1_RD1                         (_U_(1) << 22) /**< SSC1 signal: SSC1_RD1 */
#define PIN_PB3A_SSC1_RF1                          _L_(35)      /**< SSC1 signal: SSC1_RF1 on PB3 mux A */
#define MUX_PB3A_SSC1_RF1                          _L_(0)       /**< SSC1 signal line function value: SSC1_RF1 */
#define PIO_PB3A_SSC1_RF1                          (_U_(1) << 3) /**< SSC1 signal: SSC1_RF1 */
#define PIN_PD23D_SSC1_RF1                         _L_(119)     /**< SSC1 signal: SSC1_RF1 on PD23 mux D */
#define MUX_PD23D_SSC1_RF1                         _L_(3)       /**< SSC1 signal line function value: SSC1_RF1 */
#define PIO_PD23D_SSC1_RF1                         (_U_(1) << 23) /**< SSC1 signal: SSC1_RF1 */
#define PIN_PB6A_SSC1_RK1                          _L_(38)      /**< SSC1 signal: SSC1_RK1 on PB6 mux A */
#define MUX_PB6A_SSC1_RK1                          _L_(0)       /**< SSC1 signal line function value: SSC1_RK1 */
#define PIO_PB6A_SSC1_RK1                          (_U_(1) << 6) /**< SSC1 signal: SSC1_RK1 */
#define PIN_PD24D_SSC1_RK1                         _L_(120)     /**< SSC1 signal: SSC1_RK1 on PD24 mux D */
#define MUX_PD24D_SSC1_RK1                         _L_(3)       /**< SSC1 signal line function value: SSC1_RK1 */
#define PIO_PD24D_SSC1_RK1                         (_U_(1) << 24) /**< SSC1 signal: SSC1_RK1 */
#define PIN_PB7A_SSC1_TD1                          _L_(39)      /**< SSC1 signal: SSC1_TD1 on PB7 mux A */
#define MUX_PB7A_SSC1_TD1                          _L_(0)       /**< SSC1 signal line function value: SSC1_TD1 */
#define PIO_PB7A_SSC1_TD1                          (_U_(1) << 7) /**< SSC1 signal: SSC1_TD1 */
#define PIN_PD25D_SSC1_TD1                         _L_(121)     /**< SSC1 signal: SSC1_TD1 on PD25 mux D */
#define MUX_PD25D_SSC1_TD1                         _L_(3)       /**< SSC1 signal line function value: SSC1_TD1 */
#define PIO_PD25D_SSC1_TD1                         (_U_(1) << 25) /**< SSC1 signal: SSC1_TD1 */
#define PIN_PB4A_SSC1_TF1                          _L_(36)      /**< SSC1 signal: SSC1_TF1 on PB4 mux A */
#define MUX_PB4A_SSC1_TF1                          _L_(0)       /**< SSC1 signal line function value: SSC1_TF1 */
#define PIO_PB4A_SSC1_TF1                          (_U_(1) << 4) /**< SSC1 signal: SSC1_TF1 */
#define PIN_PD26D_SSC1_TF1                         _L_(122)     /**< SSC1 signal: SSC1_TF1 on PD26 mux D */
#define MUX_PD26D_SSC1_TF1                         _L_(3)       /**< SSC1 signal line function value: SSC1_TF1 */
#define PIO_PD26D_SSC1_TF1                         (_U_(1) << 26) /**< SSC1 signal: SSC1_TF1 */
#define PIN_PB5A_SSC1_TK1                          _L_(37)      /**< SSC1 signal: SSC1_TK1 on PB5 mux A */
#define MUX_PB5A_SSC1_TK1                          _L_(0)       /**< SSC1 signal line function value: SSC1_TK1 */
#define PIO_PB5A_SSC1_TK1                          (_U_(1) << 5) /**< SSC1 signal: SSC1_TK1 */
#define PIN_PD27D_SSC1_TK1                         _L_(123)     /**< SSC1 signal: SSC1_TK1 on PD27 mux D */
#define MUX_PD27D_SSC1_TK1                         _L_(3)       /**< SSC1 signal line function value: SSC1_TK1 */
#define PIO_PD27D_SSC1_TK1                         (_U_(1) << 27) /**< SSC1 signal: SSC1_TK1 */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PA16E_TC0_TCLK0                        _L_(16)      /**< TC0 signal: TC0_TCLK0 on PA16 mux E */
#define MUX_PA16E_TC0_TCLK0                        _L_(4)       /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PA16E_TC0_TCLK0                        (_U_(1) << 16) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PD4E_TC0_TCLK0                         _L_(100)     /**< TC0 signal: TC0_TCLK0 on PD4 mux E */
#define MUX_PD4E_TC0_TCLK0                         _L_(4)       /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PD4E_TC0_TCLK0                         (_U_(1) << 4) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PD29C_TC0_TCLK0                        _L_(125)     /**< TC0 signal: TC0_TCLK0 on PD29 mux C */
#define MUX_PD29C_TC0_TCLK0                        _L_(2)       /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PD29C_TC0_TCLK0                        (_U_(1) << 29) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PA19E_TC0_TCLK1                        _L_(19)      /**< TC0 signal: TC0_TCLK1 on PA19 mux E */
#define MUX_PA19E_TC0_TCLK1                        _L_(4)       /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PA19E_TC0_TCLK1                        (_U_(1) << 19) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PD7E_TC0_TCLK1                         _L_(103)     /**< TC0 signal: TC0_TCLK1 on PD7 mux E */
#define MUX_PD7E_TC0_TCLK1                         _L_(4)       /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PD7E_TC0_TCLK1                         (_U_(1) << 7) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PE0C_TC0_TCLK1                         _L_(128)     /**< TC0 signal: TC0_TCLK1 on PE0 mux C */
#define MUX_PE0C_TC0_TCLK1                         _L_(2)       /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PE0C_TC0_TCLK1                         (_U_(1) << 0) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PA22E_TC0_TCLK2                        _L_(22)      /**< TC0 signal: TC0_TCLK2 on PA22 mux E */
#define MUX_PA22E_TC0_TCLK2                        _L_(4)       /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PA22E_TC0_TCLK2                        (_U_(1) << 22) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PD10E_TC0_TCLK2                        _L_(106)     /**< TC0 signal: TC0_TCLK2 on PD10 mux E */
#define MUX_PD10E_TC0_TCLK2                        _L_(4)       /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PD10E_TC0_TCLK2                        (_U_(1) << 10) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PE3C_TC0_TCLK2                         _L_(131)     /**< TC0 signal: TC0_TCLK2 on PE3 mux C */
#define MUX_PE3C_TC0_TCLK2                         _L_(2)       /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PE3C_TC0_TCLK2                         (_U_(1) << 3) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PA11E_TC0_TIOA0                        _L_(11)      /**< TC0 signal: TC0_TIOA0 on PA11 mux E */
#define MUX_PA11E_TC0_TIOA0                        _L_(4)       /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA11E_TC0_TIOA0                        (_U_(1) << 11) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PD2E_TC0_TIOA0                         _L_(98)      /**< TC0 signal: TC0_TIOA0 on PD2 mux E */
#define MUX_PD2E_TC0_TIOA0                         _L_(4)       /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PD2E_TC0_TIOA0                         (_U_(1) << 2) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PD27C_TC0_TIOA0                        _L_(123)     /**< TC0 signal: TC0_TIOA0 on PD27 mux C */
#define MUX_PD27C_TC0_TIOA0                        _L_(2)       /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PD27C_TC0_TIOA0                        (_U_(1) << 27) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PA17E_TC0_TIOA1                        _L_(17)      /**< TC0 signal: TC0_TIOA1 on PA17 mux E */
#define MUX_PA17E_TC0_TIOA1                        _L_(4)       /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PA17E_TC0_TIOA1                        (_U_(1) << 17) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PD5E_TC0_TIOA1                         _L_(101)     /**< TC0 signal: TC0_TIOA1 on PD5 mux E */
#define MUX_PD5E_TC0_TIOA1                         _L_(4)       /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PD5E_TC0_TIOA1                         (_U_(1) << 5) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PD30C_TC0_TIOA1                        _L_(126)     /**< TC0 signal: TC0_TIOA1 on PD30 mux C */
#define MUX_PD30C_TC0_TIOA1                        _L_(2)       /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PD30C_TC0_TIOA1                        (_U_(1) << 30) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PA20E_TC0_TIOA2                        _L_(20)      /**< TC0 signal: TC0_TIOA2 on PA20 mux E */
#define MUX_PA20E_TC0_TIOA2                        _L_(4)       /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PA20E_TC0_TIOA2                        (_U_(1) << 20) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PD8E_TC0_TIOA2                         _L_(104)     /**< TC0 signal: TC0_TIOA2 on PD8 mux E */
#define MUX_PD8E_TC0_TIOA2                         _L_(4)       /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PD8E_TC0_TIOA2                         (_U_(1) << 8) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PE1C_TC0_TIOA2                         _L_(129)     /**< TC0 signal: TC0_TIOA2 on PE1 mux C */
#define MUX_PE1C_TC0_TIOA2                         _L_(2)       /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PE1C_TC0_TIOA2                         (_U_(1) << 1) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PA15E_TC0_TIOB0                        _L_(15)      /**< TC0 signal: TC0_TIOB0 on PA15 mux E */
#define MUX_PA15E_TC0_TIOB0                        _L_(4)       /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA15E_TC0_TIOB0                        (_U_(1) << 15) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PD3E_TC0_TIOB0                         _L_(99)      /**< TC0 signal: TC0_TIOB0 on PD3 mux E */
#define MUX_PD3E_TC0_TIOB0                         _L_(4)       /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PD3E_TC0_TIOB0                         (_U_(1) << 3) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PD28C_TC0_TIOB0                        _L_(124)     /**< TC0 signal: TC0_TIOB0 on PD28 mux C */
#define MUX_PD28C_TC0_TIOB0                        _L_(2)       /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PD28C_TC0_TIOB0                        (_U_(1) << 28) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PA18E_TC0_TIOB1                        _L_(18)      /**< TC0 signal: TC0_TIOB1 on PA18 mux E */
#define MUX_PA18E_TC0_TIOB1                        _L_(4)       /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PA18E_TC0_TIOB1                        (_U_(1) << 18) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PD6E_TC0_TIOB1                         _L_(102)     /**< TC0 signal: TC0_TIOB1 on PD6 mux E */
#define MUX_PD6E_TC0_TIOB1                         _L_(4)       /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PD6E_TC0_TIOB1                         (_U_(1) << 6) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PD31C_TC0_TIOB1                        _L_(127)     /**< TC0 signal: TC0_TIOB1 on PD31 mux C */
#define MUX_PD31C_TC0_TIOB1                        _L_(2)       /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PD31C_TC0_TIOB1                        (_U_(1) << 31) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PA21E_TC0_TIOB2                        _L_(21)      /**< TC0 signal: TC0_TIOB2 on PA21 mux E */
#define MUX_PA21E_TC0_TIOB2                        _L_(4)       /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PA21E_TC0_TIOB2                        (_U_(1) << 21) /**< TC0 signal: TC0_TIOB2 */
#define PIN_PD9E_TC0_TIOB2                         _L_(105)     /**< TC0 signal: TC0_TIOB2 on PD9 mux E */
#define MUX_PD9E_TC0_TIOB2                         _L_(4)       /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PD9E_TC0_TIOB2                         (_U_(1) << 9) /**< TC0 signal: TC0_TIOB2 */
#define PIN_PE2C_TC0_TIOB2                         _L_(130)     /**< TC0 signal: TC0_TIOB2 on PE2 mux C */
#define MUX_PE2C_TC0_TIOB2                         _L_(2)       /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PE2C_TC0_TIOB2                         (_U_(1) << 2) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TC1 peripheral ========== */
#define PIN_PB31D_TC1_TCLK0                        _L_(63)      /**< TC1 signal: TC1_TCLK0 on PB31 mux D */
#define MUX_PB31D_TC1_TCLK0                        _L_(3)       /**< TC1 signal line function value: TC1_TCLK0 */
#define PIO_PB31D_TC1_TCLK0                        (_U_(1) << 31) /**< TC1 signal: TC1_TCLK0 */
#define PIN_PD13E_TC1_TCLK0                        _L_(109)     /**< TC1 signal: TC1_TCLK0 on PD13 mux E */
#define MUX_PD13E_TC1_TCLK0                        _L_(4)       /**< TC1 signal line function value: TC1_TCLK0 */
#define PIO_PD13E_TC1_TCLK0                        (_U_(1) << 13) /**< TC1 signal: TC1_TCLK0 */
#define PIN_PE6C_TC1_TCLK0                         _L_(134)     /**< TC1 signal: TC1_TCLK0 on PE6 mux C */
#define MUX_PE6C_TC1_TCLK0                         _L_(2)       /**< TC1 signal line function value: TC1_TCLK0 */
#define PIO_PE6C_TC1_TCLK0                         (_U_(1) << 6) /**< TC1 signal: TC1_TCLK0 */
#define PIN_PC2D_TC1_TCLK1                         _L_(66)      /**< TC1 signal: TC1_TCLK1 on PC2 mux D */
#define MUX_PC2D_TC1_TCLK1                         _L_(3)       /**< TC1 signal line function value: TC1_TCLK1 */
#define PIO_PC2D_TC1_TCLK1                         (_U_(1) << 2) /**< TC1 signal: TC1_TCLK1 */
#define PIN_PD16E_TC1_TCLK1                        _L_(112)     /**< TC1 signal: TC1_TCLK1 on PD16 mux E */
#define MUX_PD16E_TC1_TCLK1                        _L_(4)       /**< TC1 signal line function value: TC1_TCLK1 */
#define PIO_PD16E_TC1_TCLK1                        (_U_(1) << 16) /**< TC1 signal: TC1_TCLK1 */
#define PIN_PC5D_TC1_TCLK2                         _L_(69)      /**< TC1 signal: TC1_TCLK2 on PC5 mux D */
#define MUX_PC5D_TC1_TCLK2                         _L_(3)       /**< TC1 signal line function value: TC1_TCLK2 */
#define PIO_PC5D_TC1_TCLK2                         (_U_(1) << 5) /**< TC1 signal: TC1_TCLK2 */
#define PIN_PD19E_TC1_TCLK2                        _L_(115)     /**< TC1 signal: TC1_TCLK2 on PD19 mux E */
#define MUX_PD19E_TC1_TCLK2                        _L_(4)       /**< TC1 signal line function value: TC1_TCLK2 */
#define PIO_PD19E_TC1_TCLK2                        (_U_(1) << 19) /**< TC1 signal: TC1_TCLK2 */
#define PIN_PB29D_TC1_TIOA0                        _L_(61)      /**< TC1 signal: TC1_TIOA0 on PB29 mux D */
#define MUX_PB29D_TC1_TIOA0                        _L_(3)       /**< TC1 signal line function value: TC1_TIOA0 */
#define PIO_PB29D_TC1_TIOA0                        (_U_(1) << 29) /**< TC1 signal: TC1_TIOA0 */
#define PIN_PD11E_TC1_TIOA0                        _L_(107)     /**< TC1 signal: TC1_TIOA0 on PD11 mux E */
#define MUX_PD11E_TC1_TIOA0                        _L_(4)       /**< TC1 signal line function value: TC1_TIOA0 */
#define PIO_PD11E_TC1_TIOA0                        (_U_(1) << 11) /**< TC1 signal: TC1_TIOA0 */
#define PIN_PE4C_TC1_TIOA0                         _L_(132)     /**< TC1 signal: TC1_TIOA0 on PE4 mux C */
#define MUX_PE4C_TC1_TIOA0                         _L_(2)       /**< TC1 signal line function value: TC1_TIOA0 */
#define PIO_PE4C_TC1_TIOA0                         (_U_(1) << 4) /**< TC1 signal: TC1_TIOA0 */
#define PIN_PC0D_TC1_TIOA1                         _L_(64)      /**< TC1 signal: TC1_TIOA1 on PC0 mux D */
#define MUX_PC0D_TC1_TIOA1                         _L_(3)       /**< TC1 signal line function value: TC1_TIOA1 */
#define PIO_PC0D_TC1_TIOA1                         (_U_(1) << 0) /**< TC1 signal: TC1_TIOA1 */
#define PIN_PD14E_TC1_TIOA1                        _L_(110)     /**< TC1 signal: TC1_TIOA1 on PD14 mux E */
#define MUX_PD14E_TC1_TIOA1                        _L_(4)       /**< TC1 signal line function value: TC1_TIOA1 */
#define PIO_PD14E_TC1_TIOA1                        (_U_(1) << 14) /**< TC1 signal: TC1_TIOA1 */
#define PIN_PE7C_TC1_TIOA1                         _L_(135)     /**< TC1 signal: TC1_TIOA1 on PE7 mux C */
#define MUX_PE7C_TC1_TIOA1                         _L_(2)       /**< TC1 signal line function value: TC1_TIOA1 */
#define PIO_PE7C_TC1_TIOA1                         (_U_(1) << 7) /**< TC1 signal: TC1_TIOA1 */
#define PIN_PC3D_TC1_TIOA2                         _L_(67)      /**< TC1 signal: TC1_TIOA2 on PC3 mux D */
#define MUX_PC3D_TC1_TIOA2                         _L_(3)       /**< TC1 signal line function value: TC1_TIOA2 */
#define PIO_PC3D_TC1_TIOA2                         (_U_(1) << 3) /**< TC1 signal: TC1_TIOA2 */
#define PIN_PD17E_TC1_TIOA2                        _L_(113)     /**< TC1 signal: TC1_TIOA2 on PD17 mux E */
#define MUX_PD17E_TC1_TIOA2                        _L_(4)       /**< TC1 signal line function value: TC1_TIOA2 */
#define PIO_PD17E_TC1_TIOA2                        (_U_(1) << 17) /**< TC1 signal: TC1_TIOA2 */
#define PIN_PB30D_TC1_TIOB0                        _L_(62)      /**< TC1 signal: TC1_TIOB0 on PB30 mux D */
#define MUX_PB30D_TC1_TIOB0                        _L_(3)       /**< TC1 signal line function value: TC1_TIOB0 */
#define PIO_PB30D_TC1_TIOB0                        (_U_(1) << 30) /**< TC1 signal: TC1_TIOB0 */
#define PIN_PD12E_TC1_TIOB0                        _L_(108)     /**< TC1 signal: TC1_TIOB0 on PD12 mux E */
#define MUX_PD12E_TC1_TIOB0                        _L_(4)       /**< TC1 signal line function value: TC1_TIOB0 */
#define PIO_PD12E_TC1_TIOB0                        (_U_(1) << 12) /**< TC1 signal: TC1_TIOB0 */
#define PIN_PE5C_TC1_TIOB0                         _L_(133)     /**< TC1 signal: TC1_TIOB0 on PE5 mux C */
#define MUX_PE5C_TC1_TIOB0                         _L_(2)       /**< TC1 signal line function value: TC1_TIOB0 */
#define PIO_PE5C_TC1_TIOB0                         (_U_(1) << 5) /**< TC1 signal: TC1_TIOB0 */
#define PIN_PC1D_TC1_TIOB1                         _L_(65)      /**< TC1 signal: TC1_TIOB1 on PC1 mux D */
#define MUX_PC1D_TC1_TIOB1                         _L_(3)       /**< TC1 signal line function value: TC1_TIOB1 */
#define PIO_PC1D_TC1_TIOB1                         (_U_(1) << 1) /**< TC1 signal: TC1_TIOB1 */
#define PIN_PD15E_TC1_TIOB1                        _L_(111)     /**< TC1 signal: TC1_TIOB1 on PD15 mux E */
#define MUX_PD15E_TC1_TIOB1                        _L_(4)       /**< TC1 signal line function value: TC1_TIOB1 */
#define PIO_PD15E_TC1_TIOB1                        (_U_(1) << 15) /**< TC1 signal: TC1_TIOB1 */
#define PIN_PC4D_TC1_TIOB2                         _L_(68)      /**< TC1 signal: TC1_TIOB2 on PC4 mux D */
#define MUX_PC4D_TC1_TIOB2                         _L_(3)       /**< TC1 signal line function value: TC1_TIOB2 */
#define PIO_PC4D_TC1_TIOB2                         (_U_(1) << 4) /**< TC1 signal: TC1_TIOB2 */
#define PIN_PD18E_TC1_TIOB2                        _L_(114)     /**< TC1 signal: TC1_TIOB2 on PD18 mux E */
#define MUX_PD18E_TC1_TIOB2                        _L_(4)       /**< TC1 signal line function value: TC1_TIOB2 */
#define PIO_PD18E_TC1_TIOB2                        (_U_(1) << 18) /**< TC1 signal: TC1_TIOB2 */

#endif /* _SAMA7G54_GPIO_H_ */

