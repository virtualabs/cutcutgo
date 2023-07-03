/*
 * Instance header file for SAMA7G54
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
#ifndef _SAMA7G_TC0_INSTANCE_
#define _SAMA7G_TC0_INSTANCE_


/* ========== Instance Parameter definitions for TC0 peripheral ========== */
#define TC0_INSTANCE_ID_CHANNEL0                 _UL_(88)   /* 32-bit Timer Counter 0 Channel 0 */
#define TC0_CLOCK_ID_CHANNEL0                    _UL_(88)   
#define TC0_INSTANCE_ID_CHANNEL1                 _UL_(89)   /* 32-bit Timer Counter 0 Channel 1 interrupt */
#define TC0_CLOCK_ID_CHANNEL1                    _UL_(89)   
#define TC0_INSTANCE_ID_CHANNEL2                 _UL_(90)   /* 32-bit Timer Counter 0 Channel 2 interrupt */
#define TC0_CLOCK_ID_CHANNEL2                    _UL_(90)   
#define TC0_INSTANCE_ID_SINT0                    _UL_(145)  /* 32-bit Timer Counter 0 Channel 0, Secure INTerrupt */
#define TC0_INSTANCE_ID_SINT1                    _UL_(146)  /* 32-bit Timer Counter 0 Channel 1, Secure INTerrupt */
#define TC0_INSTANCE_ID_SINT2                    _UL_(147)  /* 32-bit Timer Counter 0 Channel 2 */
#define TC0_DMAC_ID_RX                           _UL_(51)   
#define TC0_TCCLKS_                              _UL_(0)    /* MCK1 */
#define TC0_TCCLKS_TIMER_CLOCK1                  _UL_(1)    /* GCLK */
#define TC0_TCCLKS_TIMER_CLOCK2                  _UL_(2)    /* MCK1/8 */
#define TC0_TCCLKS_TIMER_CLOCK3                  _UL_(3)    /* MCK1/32 */
#define TC0_TCCLKS_TIMER_CLOCK4                  _UL_(4)    /* MCK1/128 */
#define TC0_TCCLKS_TIMER_CLOCK5                  _UL_(5)    /* TD_SLCK */
#define TC0_TCCLKS_XC0                           _UL_(6)    /* XC0 */
#define TC0_TCCLKS_XC1                           _UL_(7)    /* XC1 */
#define TC0_TCCLKS_XC2                           _UL_(8)    /* XC2 */
#define TC0_NUM_INTERRUPT_LINES                  _UL_(3)    
#define TC0_TIMER_WIDTH                          _UL_(32)   

#endif /* _SAMA7G_TC0_INSTANCE_ */
