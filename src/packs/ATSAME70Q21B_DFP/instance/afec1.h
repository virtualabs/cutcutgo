/*
 * Instance header file for ATSAME70Q21B
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

/* file generated from device description version 2020-11-26T11:12:57Z */
#ifndef _SAME70_AFEC1_INSTANCE_
#define _SAME70_AFEC1_INSTANCE_


/* ========== Instance Parameter definitions for AFEC1 peripheral ========== */
#define AFEC1_DMAC_ID_RX                         _UL_(36)   
#define AFEC1_INSTANCE_ID                        _UL_(40)   
#define AFEC1_CLOCK_ID                           _UL_(40)   
#define AFEC1_TRGSEL_AFEC_TRIG0                  _UL_(0x0)  /* External ADC Trigger Input (AFE1_ADTRG Pin) */
#define AFEC1_TRGSEL_AFEC_TRIG1                  _UL_(0x1)  /* TC1 Channel 0 Output (TIOA3) */
#define AFEC1_TRGSEL_AFEC_TRIG2                  _UL_(0x2)  /* TC1 Channel 1 Output (TIOA4) */
#define AFEC1_TRGSEL_AFEC_TRIG3                  _UL_(0x3)  /* TC1 Channel 2 Output (TIOA5) */
#define AFEC1_TRGSEL_AFEC_TRIG4                  _UL_(0x4)  /* PWM1 event line 0 */
#define AFEC1_TRGSEL_AFEC_TRIG5                  _UL_(0x5)  /* PWM1 event line 1 */
#define AFEC1_TRGSEL_AFEC_TRIG6                  _UL_(0x6)  /* Analog Comparator Fault Output */

#endif /* _SAME70_AFEC1_INSTANCE_ */
