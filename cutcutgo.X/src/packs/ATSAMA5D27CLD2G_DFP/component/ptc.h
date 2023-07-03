/*
 * Component description for PTC
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

/* file generated from device description version 2021-06-28T09:00:02Z */
#ifndef _SAMA5D2_PTC_COMPONENT_H_
#define _SAMA5D2_PTC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PTC                                          */
/* ************************************************************************** */

/* -------- PTC_CMD : (PTC Offset: 0x28) ( /W 8) PTC Command Register -------- */
#define PTC_CMD_CMD_Pos                       _U_(0)                                               /**< (PTC_CMD) Host Command Position */
#define PTC_CMD_CMD_Msk                       (_U_(0xF) << PTC_CMD_CMD_Pos)                        /**< (PTC_CMD) Host Command Mask */
#define PTC_CMD_CMD(value)                    (PTC_CMD_CMD_Msk & ((value) << PTC_CMD_CMD_Pos))    
#define   PTC_CMD_CMD_NO_ACTION_Val           _U_(0x0)                                             /**< (PTC_CMD) -  */
#define   PTC_CMD_CMD_STOP_Val                _U_(0x1)                                             /**< (PTC_CMD) Waits for ongoing execution to complete, then stops.  */
#define   PTC_CMD_CMD_REST_Val                _U_(0x2)                                             /**< (PTC_CMD) Stops and resets  */
#define   PTC_CMD_CMD_ABORT_Val               _U_(0x4)                                             /**< (PTC_CMD) Stops without waiting for ongoing execution to complete.  */
#define   PTC_CMD_CMD_RUN_Val                 _U_(0x5)                                             /**< (PTC_CMD) Starts execution (from stopped state)  */
#define PTC_CMD_CMD_NO_ACTION                 (PTC_CMD_CMD_NO_ACTION_Val << PTC_CMD_CMD_Pos)       /**< (PTC_CMD) - Position  */
#define PTC_CMD_CMD_STOP                      (PTC_CMD_CMD_STOP_Val << PTC_CMD_CMD_Pos)            /**< (PTC_CMD) Waits for ongoing execution to complete, then stops. Position  */
#define PTC_CMD_CMD_REST                      (PTC_CMD_CMD_REST_Val << PTC_CMD_CMD_Pos)            /**< (PTC_CMD) Stops and resets Position  */
#define PTC_CMD_CMD_ABORT                     (PTC_CMD_CMD_ABORT_Val << PTC_CMD_CMD_Pos)           /**< (PTC_CMD) Stops without waiting for ongoing execution to complete. Position  */
#define PTC_CMD_CMD_RUN                       (PTC_CMD_CMD_RUN_Val << PTC_CMD_CMD_Pos)             /**< (PTC_CMD) Starts execution (from stopped state) Position  */
#define PTC_CMD_Msk                           _U_(0x0F)                                            /**< (PTC_CMD) Register Mask  */


/* -------- PTC_ISR : (PTC Offset: 0x30) (R/W 8) PTC Interrupt Status Register -------- */
#define PTC_ISR_NOTIFY0_Pos                   _U_(0)                                               /**< (PTC_ISR) Notification to the Firmware Position */
#define PTC_ISR_NOTIFY0_Msk                   (_U_(0x1) << PTC_ISR_NOTIFY0_Pos)                    /**< (PTC_ISR) Notification to the Firmware Mask */
#define PTC_ISR_NOTIFY0(value)                (PTC_ISR_NOTIFY0_Msk & ((value) << PTC_ISR_NOTIFY0_Pos))
#define PTC_ISR_IRQ0_Pos                      _U_(4)                                               /**< (PTC_ISR) IRQ0 Position */
#define PTC_ISR_IRQ0_Msk                      (_U_(0x1) << PTC_ISR_IRQ0_Pos)                       /**< (PTC_ISR) IRQ0 Mask */
#define PTC_ISR_IRQ0(value)                   (PTC_ISR_IRQ0_Msk & ((value) << PTC_ISR_IRQ0_Pos))  
#define PTC_ISR_IRQ1_Pos                      _U_(5)                                               /**< (PTC_ISR) IRQ1 Position */
#define PTC_ISR_IRQ1_Msk                      (_U_(0x1) << PTC_ISR_IRQ1_Pos)                       /**< (PTC_ISR) IRQ1 Mask */
#define PTC_ISR_IRQ1(value)                   (PTC_ISR_IRQ1_Msk & ((value) << PTC_ISR_IRQ1_Pos))  
#define PTC_ISR_IRQ2_Pos                      _U_(6)                                               /**< (PTC_ISR) IRQ2 Position */
#define PTC_ISR_IRQ2_Msk                      (_U_(0x1) << PTC_ISR_IRQ2_Pos)                       /**< (PTC_ISR) IRQ2 Mask */
#define PTC_ISR_IRQ2(value)                   (PTC_ISR_IRQ2_Msk & ((value) << PTC_ISR_IRQ2_Pos))  
#define PTC_ISR_IRQ3_Pos                      _U_(7)                                               /**< (PTC_ISR) IRQ3 Position */
#define PTC_ISR_IRQ3_Msk                      (_U_(0x1) << PTC_ISR_IRQ3_Pos)                       /**< (PTC_ISR) IRQ3 Mask */
#define PTC_ISR_IRQ3(value)                   (PTC_ISR_IRQ3_Msk & ((value) << PTC_ISR_IRQ3_Pos))  
#define PTC_ISR_Msk                           _U_(0xF1)                                            /**< (PTC_ISR) Register Mask  */

#define PTC_ISR_NOTIFY_Pos                    _U_(0)                                               /**< (PTC_ISR Position) Notification to the Firmware */
#define PTC_ISR_NOTIFY_Msk                    (_U_(0x1) << PTC_ISR_NOTIFY_Pos)                     /**< (PTC_ISR Mask) NOTIFY */
#define PTC_ISR_NOTIFY(value)                 (PTC_ISR_NOTIFY_Msk & ((value) << PTC_ISR_NOTIFY_Pos)) 
#define PTC_ISR_IRQ_Pos                       _U_(4)                                               /**< (PTC_ISR Position) IRQ3 */
#define PTC_ISR_IRQ_Msk                       (_U_(0xF) << PTC_ISR_IRQ_Pos)                        /**< (PTC_ISR Mask) IRQ */
#define PTC_ISR_IRQ(value)                    (PTC_ISR_IRQ_Msk & ((value) << PTC_ISR_IRQ_Pos))     

/* -------- PTC_IED : (PTC Offset: 0x35) ( /W 8) PTC Enable Register -------- */
#define PTC_IED_IER0_Pos                      _U_(4)                                               /**< (PTC_IED) IER0 Position */
#define PTC_IED_IER0_Msk                      (_U_(0x1) << PTC_IED_IER0_Pos)                       /**< (PTC_IED) IER0 Mask */
#define PTC_IED_IER0(value)                   (PTC_IED_IER0_Msk & ((value) << PTC_IED_IER0_Pos))  
#define PTC_IED_IER1_Pos                      _U_(5)                                               /**< (PTC_IED) IER1 Position */
#define PTC_IED_IER1_Msk                      (_U_(0x1) << PTC_IED_IER1_Pos)                       /**< (PTC_IED) IER1 Mask */
#define PTC_IED_IER1(value)                   (PTC_IED_IER1_Msk & ((value) << PTC_IED_IER1_Pos))  
#define PTC_IED_IER2_Pos                      _U_(6)                                               /**< (PTC_IED) IER2 Position */
#define PTC_IED_IER2_Msk                      (_U_(0x1) << PTC_IED_IER2_Pos)                       /**< (PTC_IED) IER2 Mask */
#define PTC_IED_IER2(value)                   (PTC_IED_IER2_Msk & ((value) << PTC_IED_IER2_Pos))  
#define PTC_IED_IER3_Pos                      _U_(7)                                               /**< (PTC_IED) IER3 Position */
#define PTC_IED_IER3_Msk                      (_U_(0x1) << PTC_IED_IER3_Pos)                       /**< (PTC_IED) IER3 Mask */
#define PTC_IED_IER3(value)                   (PTC_IED_IER3_Msk & ((value) << PTC_IED_IER3_Pos))  
#define PTC_IED_Msk                           _U_(0xF0)                                            /**< (PTC_IED) Register Mask  */

#define PTC_IED_IER_Pos                       _U_(4)                                               /**< (PTC_IED Position) IER3 */
#define PTC_IED_IER_Msk                       (_U_(0xF) << PTC_IED_IER_Pos)                        /**< (PTC_IED Mask) IER */
#define PTC_IED_IER(value)                    (PTC_IED_IER_Msk & ((value) << PTC_IED_IER_Pos))     

/** \brief PTC register offsets definitions */
#define PTC_CMD_REG_OFST               (0x28)              /**< (PTC_CMD) PTC Command Register Offset */
#define PTC_ISR_REG_OFST               (0x30)              /**< (PTC_ISR) PTC Interrupt Status Register Offset */
#define PTC_IED_REG_OFST               (0x35)              /**< (PTC_IED) PTC Enable Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PTC register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x28];
  __O   uint8_t                        PTC_CMD;            /**< Offset: 0x28 ( /W  8) PTC Command Register */
  __I   uint8_t                        Reserved2[0x07];
  __IO  uint8_t                        PTC_ISR;            /**< Offset: 0x30 (R/W  8) PTC Interrupt Status Register */
  __I   uint8_t                        Reserved3[0x04];
  __O   uint8_t                        PTC_IED;            /**< Offset: 0x35 ( /W  8) PTC Enable Register */
} ptc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_PTC_COMPONENT_H_ */
