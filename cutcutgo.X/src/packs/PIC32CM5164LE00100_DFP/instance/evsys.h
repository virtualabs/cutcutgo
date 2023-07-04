/*
 * Instance header file for PIC32CM5164LE00100
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2022-03-31T12:21:24Z */
#ifndef _PIC32CMLE00_EVSYS_INSTANCE_
#define _PIC32CMLE00_EVSYS_INSTANCE_


/* ========== Instance Parameter definitions for EVSYS peripheral ========== */
#define EVSYS_ASYNCHRONOUS_CHANNELS              (0x00000F00) /* Mask of Only Asynchronous Channels */
#define EVSYS_CHANNELS                           (12)       /* Total Number of Channels */
#define EVSYS_CHANNELS_BITS                      (4)        /* Number of bits to select Channel */
#define EVSYS_GCLK_ID_0                          (8)        /* Index of Generic Clock 0 */
#define EVSYS_GCLK_ID_1                          (9)        /* Index of Generic Clock 1 */
#define EVSYS_GCLK_ID_2                          (10)       /* Index of Generic Clock 2 */
#define EVSYS_GCLK_ID_3                          (11)       /* Index of Generic Clock 3 */
#define EVSYS_GCLK_ID_4                          (12)       /* Index of Generic Clock 4 */
#define EVSYS_GCLK_ID_5                          (13)       /* Index of Generic Clock 5 */
#define EVSYS_GCLK_ID_6                          (14)       /* Index of Generic Clock 6 */
#define EVSYS_GCLK_ID_7                          (15)       /* Index of Generic Clock 7 */
#define EVSYS_GENERATORS                         (91)       /* Total Number of Event Generators */
#define EVSYS_GENERATORS_BITS                    (7)        /* Number of bits to select Event Generator */
#define EVSYS_SECURE_IMPLEMENTED                 (1)        /* Security Configuration implemented? */
#define EVSYS_SYNCH_NUM                          (8)        /* Number of Synchronous Channels */
#define EVSYS_SYNCH_NUM_BITS                     (3)        /* Number of bits to select Synchronous Channels */
#define EVSYS_USERS                              (52)       /* Total Number of Event Users */
#define EVSYS_USERS_BITS                         (6)        /* Number of bits to select Event User */
#define EVSYS_USERS_GROUPS                       (2)        /* Number of 32-user Groups */
#define EVSYS_USER_CHN_BITS                      (4)        /* Number of bits to select Channel in USER register */
#define EVSYS_INSTANCE_ID                        (64)       /* Instance index for EVSYS */

#endif /* _PIC32CMLE00_EVSYS_INSTANCE_ */
