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
#ifndef _PIC32CMLE00_USB_INSTANCE_
#define _PIC32CMLE00_USB_INSTANCE_


/* ========== Instance Parameter definitions for USB peripheral ========== */
#define USB_AHB_2_USB_FIFO_DEPTH                 (4)        /* bytes number, should be at least 2, and 2^n (4,8,16 ...) */
#define USB_AHB_2_USB_RD_DATA_BITS               (8)        /* 8, 16 or 32, here : 8-bits is required as UTMI interface should work in 8-bits mode */
#define USB_AHB_2_USB_WR_DATA_BITS               (32)       /* 8, 16 or 32 : here, AHB transfer is made in word mode */
#define USB_AHB_2_USB_WR_THRESHOLD               (2)        /* as soon as there are N bytes-free inside the fifo, ahb read transfer is requested */
#define USB_DATA_BUS_16_8                        (0)        /* UTMI/SIE data bus size : 0 -> 8 bits, 1 -> 16 bits */
#define USB_EPNUM                                (8)        /* parameter for rtl : max of ENDPOINT and PIPE NUM */
#define USB_EPT_NUM                              (8)        /* Number of USB end points */
#define USB_GCLK_ID                              (7)        /* Index of Generic Clock */
#define USB_INITIAL_CONTROL_QOS                  (3)        /* CONTROL QOS RESET value */
#define USB_INITIAL_DATA_QOS                     (3)        /* DATA QOS RESET value */
#define USB_MISSING_SOF_DET_IMPLEMENTED          (1)        /* 48 mHz xPLL feature implemented */
#define USB_PIPE_NUM                             (8)        /* Number of USB pipes */
#define USB_SYSTEM_CLOCK_IS_CKUSB                (0)        /* Dual (1'b0) or Single (1'b1) clock system */
#define USB_2_AHB_FIFO_DEPTH                     (4)        /* bytes number, should be at least 2, and 2^n (4,8,16 ...) */
#define USB_2_AHB_RD_DATA_BITS                   (16)       /* 8, 16 or 32, here : 8-bits is required as UTMI interface should work in 8-bits mode */
#define USB_2_AHB_RD_THRESHOLD                   (2)        /* as soon as there are 16 bytes-free inside the fifo, ahb read transfer is requested */
#define USB_2_AHB_WR_DATA_BITS                   (8)        /* 8, 16 or 32 : here : 8-bits is required as UTMI interface should work in 8-bits mode */
#define USB_INSTANCE_ID                          (37)       /* Instance index for USB */

#endif /* _PIC32CMLE00_USB_INSTANCE_ */
