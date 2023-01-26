/*
 * Component description for TCPC
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
#ifndef _SAMA7G_TCPC_COMPONENT_H_
#define _SAMA7G_TCPC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TCPC                                         */
/* ************************************************************************** */

/* -------- TCPC_VID : (TCPC Offset: 0x00) ( R/ 16) Vendor ID Register -------- */
#define TCPC_VID_RESETVALUE                   _U_(0x00)                                            /**<  (TCPC_VID) Vendor ID Register  Reset Value */

#define TCPC_VID_VID_Pos                      _U_(0)                                               /**< (TCPC_VID) Vendor ID Position */
#define TCPC_VID_VID_Msk                      (_U_(0xFFFF) << TCPC_VID_VID_Pos)                    /**< (TCPC_VID) Vendor ID Mask */
#define TCPC_VID_VID(value)                   (TCPC_VID_VID_Msk & ((value) << TCPC_VID_VID_Pos))  
#define TCPC_VID_Msk                          _U_(0xFFFF)                                          /**< (TCPC_VID) Register Mask  */


/* -------- TCPC_PID : (TCPC Offset: 0x02) ( R/ 16) Product ID Register -------- */
#define TCPC_PID_RESETVALUE                   _U_(0x00)                                            /**<  (TCPC_PID) Product ID Register  Reset Value */

#define TCPC_PID_PID_Pos                      _U_(0)                                               /**< (TCPC_PID) Product ID Position */
#define TCPC_PID_PID_Msk                      (_U_(0xFFFF) << TCPC_PID_PID_Pos)                    /**< (TCPC_PID) Product ID Mask */
#define TCPC_PID_PID(value)                   (TCPC_PID_PID_Msk & ((value) << TCPC_PID_PID_Pos))  
#define TCPC_PID_Msk                          _U_(0xFFFF)                                          /**< (TCPC_PID) Register Mask  */


/* -------- TCPC_DID : (TCPC Offset: 0x04) ( R/ 16) Device ID Register -------- */
#define TCPC_DID_RESETVALUE                   _U_(0x00)                                            /**<  (TCPC_DID) Device ID Register  Reset Value */

#define TCPC_DID_DID_Pos                      _U_(0)                                               /**< (TCPC_DID) Device ID Position */
#define TCPC_DID_DID_Msk                      (_U_(0xFFFF) << TCPC_DID_DID_Pos)                    /**< (TCPC_DID) Device ID Mask */
#define TCPC_DID_DID(value)                   (TCPC_DID_DID_Msk & ((value) << TCPC_DID_DID_Pos))  
#define TCPC_DID_Msk                          _U_(0xFFFF)                                          /**< (TCPC_DID) Register Mask  */


/* -------- TCPC_UTCR : (TCPC Offset: 0x06) ( R/ 16) USB Type-C Rev Register -------- */
#define TCPC_UTCR_RESETVALUE                  _U_(0x00)                                            /**<  (TCPC_UTCR) USB Type-C Rev Register  Reset Value */

#define TCPC_UTCR_UTCR_Pos                    _U_(0)                                               /**< (TCPC_UTCR) USB Type-C Revision Position */
#define TCPC_UTCR_UTCR_Msk                    (_U_(0xFFFF) << TCPC_UTCR_UTCR_Pos)                  /**< (TCPC_UTCR) USB Type-C Revision Mask */
#define TCPC_UTCR_UTCR(value)                 (TCPC_UTCR_UTCR_Msk & ((value) << TCPC_UTCR_UTCR_Pos))
#define TCPC_UTCR_Msk                         _U_(0xFFFF)                                          /**< (TCPC_UTCR) Register Mask  */


/* -------- TCPC_UPDR : (TCPC Offset: 0x08) ( R/ 16) USB PD Rev Ver Register -------- */
#define TCPC_UPDR_RESETVALUE                  _U_(0x00)                                            /**<  (TCPC_UPDR) USB PD Rev Ver Register  Reset Value */

#define TCPC_UPDR_UPDR_Pos                    _U_(0)                                               /**< (TCPC_UPDR) USB-PD Specification Revision and Version Position */
#define TCPC_UPDR_UPDR_Msk                    (_U_(0xFFFF) << TCPC_UPDR_UPDR_Pos)                  /**< (TCPC_UPDR) USB-PD Specification Revision and Version Mask */
#define TCPC_UPDR_UPDR(value)                 (TCPC_UPDR_UPDR_Msk & ((value) << TCPC_UPDR_UPDR_Pos))
#define TCPC_UPDR_Msk                         _U_(0xFFFF)                                          /**< (TCPC_UPDR) Register Mask  */


/* -------- TCPC_PDIR : (TCPC Offset: 0x0A) ( R/ 16) PD Interface Rev Register -------- */
#define TCPC_PDIR_RESETVALUE                  _U_(0x00)                                            /**<  (TCPC_PDIR) PD Interface Rev Register  Reset Value */

#define TCPC_PDIR_PDIR_Pos                    _U_(0)                                               /**< (TCPC_PDIR) USB-Port Controller Interface Specification Revision Position */
#define TCPC_PDIR_PDIR_Msk                    (_U_(0xFFFF) << TCPC_PDIR_PDIR_Pos)                  /**< (TCPC_PDIR) USB-Port Controller Interface Specification Revision Mask */
#define TCPC_PDIR_PDIR(value)                 (TCPC_PDIR_PDIR_Msk & ((value) << TCPC_PDIR_PDIR_Pos))
#define TCPC_PDIR_Msk                         _U_(0xFFFF)                                          /**< (TCPC_PDIR) Register Mask  */


/* -------- TCPC_AL : (TCPC Offset: 0x10) (R/W 16) Alert Register -------- */
#define TCPC_AL_RESETVALUE                    _U_(0x00)                                            /**<  (TCPC_AL) Alert Register  Reset Value */

#define TCPC_AL_CCS_Pos                       _U_(0)                                               /**< (TCPC_AL) CC Status Position */
#define TCPC_AL_CCS_Msk                       (_U_(0x1) << TCPC_AL_CCS_Pos)                        /**< (TCPC_AL) CC Status Mask */
#define TCPC_AL_CCS(value)                    (TCPC_AL_CCS_Msk & ((value) << TCPC_AL_CCS_Pos))    
#define   TCPC_AL_CCS_0_Val                   _U_(0x0)                                             /**< (TCPC_AL) CC status not changed.  */
#define   TCPC_AL_CCS_1_Val                   _U_(0x1)                                             /**< (TCPC_AL) CC status changed.  */
#define TCPC_AL_CCS_0                         (TCPC_AL_CCS_0_Val << TCPC_AL_CCS_Pos)               /**< (TCPC_AL) CC status not changed. Position  */
#define TCPC_AL_CCS_1                         (TCPC_AL_CCS_1_Val << TCPC_AL_CCS_Pos)               /**< (TCPC_AL) CC status changed. Position  */
#define TCPC_AL_PWRS_Pos                      _U_(1)                                               /**< (TCPC_AL) Power Status Position */
#define TCPC_AL_PWRS_Msk                      (_U_(0x1) << TCPC_AL_PWRS_Pos)                       /**< (TCPC_AL) Power Status Mask */
#define TCPC_AL_PWRS(value)                   (TCPC_AL_PWRS_Msk & ((value) << TCPC_AL_PWRS_Pos))  
#define   TCPC_AL_PWRS_0_Val                  _U_(0x0)                                             /**< (TCPC_AL) Power status not changed.  */
#define   TCPC_AL_PWRS_1_Val                  _U_(0x1)                                             /**< (TCPC_AL) Power status changed.  */
#define TCPC_AL_PWRS_0                        (TCPC_AL_PWRS_0_Val << TCPC_AL_PWRS_Pos)             /**< (TCPC_AL) Power status not changed. Position  */
#define TCPC_AL_PWRS_1                        (TCPC_AL_PWRS_1_Val << TCPC_AL_PWRS_Pos)             /**< (TCPC_AL) Power status changed. Position  */
#define TCPC_AL_VBUSHI_Pos                    _U_(7)                                               /**< (TCPC_AL) VBUS Voltage Alarm High Position */
#define TCPC_AL_VBUSHI_Msk                    (_U_(0x1) << TCPC_AL_VBUSHI_Pos)                     /**< (TCPC_AL) VBUS Voltage Alarm High Mask */
#define TCPC_AL_VBUSHI(value)                 (TCPC_AL_VBUSHI_Msk & ((value) << TCPC_AL_VBUSHI_Pos))
#define   TCPC_AL_VBUSHI_0_Val                _U_(0x0)                                             /**< (TCPC_AL) A high-voltage alarm has not occurred.  */
#define   TCPC_AL_VBUSHI_1_Val                _U_(0x1)                                             /**< (TCPC_AL) A high-voltage alarm has occurred.  */
#define TCPC_AL_VBUSHI_0                      (TCPC_AL_VBUSHI_0_Val << TCPC_AL_VBUSHI_Pos)         /**< (TCPC_AL) A high-voltage alarm has not occurred. Position  */
#define TCPC_AL_VBUSHI_1                      (TCPC_AL_VBUSHI_1_Val << TCPC_AL_VBUSHI_Pos)         /**< (TCPC_AL) A high-voltage alarm has occurred. Position  */
#define TCPC_AL_VBUSLO_Pos                    _U_(8)                                               /**< (TCPC_AL) VBUS Voltage Alarm Low Position */
#define TCPC_AL_VBUSLO_Msk                    (_U_(0x1) << TCPC_AL_VBUSLO_Pos)                     /**< (TCPC_AL) VBUS Voltage Alarm Low Mask */
#define TCPC_AL_VBUSLO(value)                 (TCPC_AL_VBUSLO_Msk & ((value) << TCPC_AL_VBUSLO_Pos))
#define   TCPC_AL_VBUSLO_0_Val                _U_(0x0)                                             /**< (TCPC_AL) A low-voltage alarm has not occurred.  */
#define   TCPC_AL_VBUSLO_1_Val                _U_(0x1)                                             /**< (TCPC_AL) A low-voltage alarm has occurred.  */
#define TCPC_AL_VBUSLO_0                      (TCPC_AL_VBUSLO_0_Val << TCPC_AL_VBUSLO_Pos)         /**< (TCPC_AL) A low-voltage alarm has not occurred. Position  */
#define TCPC_AL_VBUSLO_1                      (TCPC_AL_VBUSLO_1_Val << TCPC_AL_VBUSLO_Pos)         /**< (TCPC_AL) A low-voltage alarm has occurred. Position  */
#define TCPC_AL_FLT_Pos                       _U_(9)                                               /**< (TCPC_AL) Fault Position */
#define TCPC_AL_FLT_Msk                       (_U_(0x1) << TCPC_AL_FLT_Pos)                        /**< (TCPC_AL) Fault Mask */
#define TCPC_AL_FLT(value)                    (TCPC_AL_FLT_Msk & ((value) << TCPC_AL_FLT_Pos))    
#define   TCPC_AL_FLT_0_Val                   _U_(0x0)                                             /**< (TCPC_AL) No fault has occurred.  */
#define   TCPC_AL_FLT_1_Val                   _U_(0x1)                                             /**< (TCPC_AL) A fault has occurred. Read TCPC_FS.  */
#define TCPC_AL_FLT_0                         (TCPC_AL_FLT_0_Val << TCPC_AL_FLT_Pos)               /**< (TCPC_AL) No fault has occurred. Position  */
#define TCPC_AL_FLT_1                         (TCPC_AL_FLT_1_Val << TCPC_AL_FLT_Pos)               /**< (TCPC_AL) A fault has occurred. Read TCPC_FS. Position  */
#define TCPC_AL_VBUSSNKDS_Pos                 _U_(11)                                              /**< (TCPC_AL) VBUS Sink Disconnect Detected Position */
#define TCPC_AL_VBUSSNKDS_Msk                 (_U_(0x1) << TCPC_AL_VBUSSNKDS_Pos)                  /**< (TCPC_AL) VBUS Sink Disconnect Detected Mask */
#define TCPC_AL_VBUSSNKDS(value)              (TCPC_AL_VBUSSNKDS_Msk & ((value) << TCPC_AL_VBUSSNKDS_Pos))
#define   TCPC_AL_VBUSSNKDS_0_Val             _U_(0x0)                                             /**< (TCPC_AL) No VBUS sink disconnect threshold crossing has been detected.  */
#define   TCPC_AL_VBUSSNKDS_1_Val             _U_(0x1)                                             /**< (TCPC_AL) A VBUS sink disconnect threshold crossing has been detected.  */
#define TCPC_AL_VBUSSNKDS_0                   (TCPC_AL_VBUSSNKDS_0_Val << TCPC_AL_VBUSSNKDS_Pos)   /**< (TCPC_AL) No VBUS sink disconnect threshold crossing has been detected. Position  */
#define TCPC_AL_VBUSSNKDS_1                   (TCPC_AL_VBUSSNKDS_1_Val << TCPC_AL_VBUSSNKDS_Pos)   /**< (TCPC_AL) A VBUS sink disconnect threshold crossing has been detected. Position  */
#define TCPC_AL_VDA_Pos                       _U_(15)                                              /**< (TCPC_AL) Vendor Defined Alert Position */
#define TCPC_AL_VDA_Msk                       (_U_(0x1) << TCPC_AL_VDA_Pos)                        /**< (TCPC_AL) Vendor Defined Alert Mask */
#define TCPC_AL_VDA(value)                    (TCPC_AL_VDA_Msk & ((value) << TCPC_AL_VDA_Pos))    
#define   TCPC_AL_VDA_0_Val                   _U_(0x0)                                             /**< (TCPC_AL) No vendor defined alert has been detected.  */
#define   TCPC_AL_VDA_1_Val                   _U_(0x1)                                             /**< (TCPC_AL) A vendor defined alert has been detected.  */
#define TCPC_AL_VDA_0                         (TCPC_AL_VDA_0_Val << TCPC_AL_VDA_Pos)               /**< (TCPC_AL) No vendor defined alert has been detected. Position  */
#define TCPC_AL_VDA_1                         (TCPC_AL_VDA_1_Val << TCPC_AL_VDA_Pos)               /**< (TCPC_AL) A vendor defined alert has been detected. Position  */
#define TCPC_AL_Msk                           _U_(0x8B83)                                          /**< (TCPC_AL) Register Mask  */


/* -------- TCPC_ALM : (TCPC Offset: 0x12) (R/W 16) Alert Mask Register -------- */
#define TCPC_ALM_RESETVALUE                   _U_(0xFFF)                                           /**<  (TCPC_ALM) Alert Mask Register  Reset Value */

#define TCPC_ALM_CCS_Pos                      _U_(0)                                               /**< (TCPC_ALM) CC Status Interrupt Mask Position */
#define TCPC_ALM_CCS_Msk                      (_U_(0x1) << TCPC_ALM_CCS_Pos)                       /**< (TCPC_ALM) CC Status Interrupt Mask Mask */
#define TCPC_ALM_CCS(value)                   (TCPC_ALM_CCS_Msk & ((value) << TCPC_ALM_CCS_Pos))  
#define TCPC_ALM_PWRS_Pos                     _U_(1)                                               /**< (TCPC_ALM) Power Status Interrupt Mask Position */
#define TCPC_ALM_PWRS_Msk                     (_U_(0x1) << TCPC_ALM_PWRS_Pos)                      /**< (TCPC_ALM) Power Status Interrupt Mask Mask */
#define TCPC_ALM_PWRS(value)                  (TCPC_ALM_PWRS_Msk & ((value) << TCPC_ALM_PWRS_Pos))
#define TCPC_ALM_VBUSHI_Pos                   _U_(7)                                               /**< (TCPC_ALM) VBUS Voltage Alarm High Interrupt Mask Position */
#define TCPC_ALM_VBUSHI_Msk                   (_U_(0x1) << TCPC_ALM_VBUSHI_Pos)                    /**< (TCPC_ALM) VBUS Voltage Alarm High Interrupt Mask Mask */
#define TCPC_ALM_VBUSHI(value)                (TCPC_ALM_VBUSHI_Msk & ((value) << TCPC_ALM_VBUSHI_Pos))
#define TCPC_ALM_VBUSLO_Pos                   _U_(8)                                               /**< (TCPC_ALM) VBUS Voltage Alarm Low Interrupt Mask Position */
#define TCPC_ALM_VBUSLO_Msk                   (_U_(0x1) << TCPC_ALM_VBUSLO_Pos)                    /**< (TCPC_ALM) VBUS Voltage Alarm Low Interrupt Mask Mask */
#define TCPC_ALM_VBUSLO(value)                (TCPC_ALM_VBUSLO_Msk & ((value) << TCPC_ALM_VBUSLO_Pos))
#define TCPC_ALM_FLT_Pos                      _U_(9)                                               /**< (TCPC_ALM) Fault Interrupt Mask Position */
#define TCPC_ALM_FLT_Msk                      (_U_(0x1) << TCPC_ALM_FLT_Pos)                       /**< (TCPC_ALM) Fault Interrupt Mask Mask */
#define TCPC_ALM_FLT(value)                   (TCPC_ALM_FLT_Msk & ((value) << TCPC_ALM_FLT_Pos))  
#define TCPC_ALM_VBUSSNKDS_Pos                _U_(11)                                              /**< (TCPC_ALM) VBUS Sink Disconnect Detected Interrupt Mask Position */
#define TCPC_ALM_VBUSSNKDS_Msk                (_U_(0x1) << TCPC_ALM_VBUSSNKDS_Pos)                 /**< (TCPC_ALM) VBUS Sink Disconnect Detected Interrupt Mask Mask */
#define TCPC_ALM_VBUSSNKDS(value)             (TCPC_ALM_VBUSSNKDS_Msk & ((value) << TCPC_ALM_VBUSSNKDS_Pos))
#define TCPC_ALM_VDA_Pos                      _U_(15)                                              /**< (TCPC_ALM) Vendor Defined Alert Interrupt Mask Position */
#define TCPC_ALM_VDA_Msk                      (_U_(0x1) << TCPC_ALM_VDA_Pos)                       /**< (TCPC_ALM) Vendor Defined Alert Interrupt Mask Mask */
#define TCPC_ALM_VDA(value)                   (TCPC_ALM_VDA_Msk & ((value) << TCPC_ALM_VDA_Pos))  
#define TCPC_ALM_Msk                          _U_(0x8B83)                                          /**< (TCPC_ALM) Register Mask  */


/* -------- TCPC_PSM : (TCPC Offset: 0x14) (R/W 8) Power Status Mask Register -------- */
#define TCPC_PSM_RESETVALUE                   _U_(0xFF)                                            /**<  (TCPC_PSM) Power Status Mask Register  Reset Value */

#define TCPC_PSM_SNKVBUS_Pos                  _U_(0)                                               /**< (TCPC_PSM) Sinking VBUS Interrupt Mask Position */
#define TCPC_PSM_SNKVBUS_Msk                  (_U_(0x1) << TCPC_PSM_SNKVBUS_Pos)                   /**< (TCPC_PSM) Sinking VBUS Interrupt Mask Mask */
#define TCPC_PSM_SNKVBUS(value)               (TCPC_PSM_SNKVBUS_Msk & ((value) << TCPC_PSM_SNKVBUS_Pos))
#define TCPC_PSM_VBUS_Pos                     _U_(2)                                               /**< (TCPC_PSM) VBUS Present Interrupt Mask Position */
#define TCPC_PSM_VBUS_Msk                     (_U_(0x1) << TCPC_PSM_VBUS_Pos)                      /**< (TCPC_PSM) VBUS Present Interrupt Mask Mask */
#define TCPC_PSM_VBUS(value)                  (TCPC_PSM_VBUS_Msk & ((value) << TCPC_PSM_VBUS_Pos))
#define TCPC_PSM_VBUSDETE_Pos                 _U_(3)                                               /**< (TCPC_PSM) VBUS Present Detection Interrupt Mask Position */
#define TCPC_PSM_VBUSDETE_Msk                 (_U_(0x1) << TCPC_PSM_VBUSDETE_Pos)                  /**< (TCPC_PSM) VBUS Present Detection Interrupt Mask Mask */
#define TCPC_PSM_VBUSDETE(value)              (TCPC_PSM_VBUSDETE_Msk & ((value) << TCPC_PSM_VBUSDETE_Pos))
#define TCPC_PSM_SRCVBUS_Pos                  _U_(4)                                               /**< (TCPC_PSM) Sourcing VBUS Interrupt Mask Position */
#define TCPC_PSM_SRCVBUS_Msk                  (_U_(0x1) << TCPC_PSM_SRCVBUS_Pos)                   /**< (TCPC_PSM) Sourcing VBUS Interrupt Mask Mask */
#define TCPC_PSM_SRCVBUS(value)               (TCPC_PSM_SRCVBUS_Msk & ((value) << TCPC_PSM_SRCVBUS_Pos))
#define TCPC_PSM_INIT_Pos                     _U_(6)                                               /**< (TCPC_PSM) TCPC Initialization Interrupt Mask Position */
#define TCPC_PSM_INIT_Msk                     (_U_(0x1) << TCPC_PSM_INIT_Pos)                      /**< (TCPC_PSM) TCPC Initialization Interrupt Mask Mask */
#define TCPC_PSM_INIT(value)                  (TCPC_PSM_INIT_Msk & ((value) << TCPC_PSM_INIT_Pos))
#define TCPC_PSM_Msk                          _U_(0x5D)                                            /**< (TCPC_PSM) Register Mask  */


/* -------- TCPC_FSM : (TCPC Offset: 0x15) (R/W 8) Fault Status Mask Register -------- */
#define TCPC_FSM_RESETVALUE                   _U_(0xFF)                                            /**<  (TCPC_FSM) Fault Status Mask Register  Reset Value */

#define TCPC_FSM_VBUSOVPF_Pos                 _U_(2)                                               /**< (TCPC_FSM) Internal or External OVP VBUS Over Voltage Protection Fault Interrupt Mask Position */
#define TCPC_FSM_VBUSOVPF_Msk                 (_U_(0x1) << TCPC_FSM_VBUSOVPF_Pos)                  /**< (TCPC_FSM) Internal or External OVP VBUS Over Voltage Protection Fault Interrupt Mask Mask */
#define TCPC_FSM_VBUSOVPF(value)              (TCPC_FSM_VBUSOVPF_Msk & ((value) << TCPC_FSM_VBUSOVPF_Pos))
#define TCPC_FSM_VBUSOCPF_Pos                 _U_(3)                                               /**< (TCPC_FSM) Internal or External OCP VBUS Over Current Protection Fault Interrupt Mask Position */
#define TCPC_FSM_VBUSOCPF_Msk                 (_U_(0x1) << TCPC_FSM_VBUSOCPF_Pos)                  /**< (TCPC_FSM) Internal or External OCP VBUS Over Current Protection Fault Interrupt Mask Mask */
#define TCPC_FSM_VBUSOCPF(value)              (TCPC_FSM_VBUSOCPF_Msk & ((value) << TCPC_FSM_VBUSOCPF_Pos))
#define TCPC_FSM_FRCDCHF_Pos                  _U_(4)                                               /**< (TCPC_FSM) Force Discharge Failed Interrupt Mask Position */
#define TCPC_FSM_FRCDCHF_Msk                  (_U_(0x1) << TCPC_FSM_FRCDCHF_Pos)                   /**< (TCPC_FSM) Force Discharge Failed Interrupt Mask Mask */
#define TCPC_FSM_FRCDCHF(value)               (TCPC_FSM_FRCDCHF_Msk & ((value) << TCPC_FSM_FRCDCHF_Pos))
#define TCPC_FSM_AUTDCHF_Pos                  _U_(5)                                               /**< (TCPC_FSM) Auto Discharge Failed Interrupt Mask Position */
#define TCPC_FSM_AUTDCHF_Msk                  (_U_(0x1) << TCPC_FSM_AUTDCHF_Pos)                   /**< (TCPC_FSM) Auto Discharge Failed Interrupt Mask Mask */
#define TCPC_FSM_AUTDCHF(value)               (TCPC_FSM_AUTDCHF_Msk & ((value) << TCPC_FSM_AUTDCHF_Pos))
#define TCPC_FSM_FRCOFVBUS_Pos                _U_(6)                                               /**< (TCPC_FSM) Force Off VBUS Interrupt Mask Position */
#define TCPC_FSM_FRCOFVBUS_Msk                (_U_(0x1) << TCPC_FSM_FRCOFVBUS_Pos)                 /**< (TCPC_FSM) Force Off VBUS Interrupt Mask Mask */
#define TCPC_FSM_FRCOFVBUS(value)             (TCPC_FSM_FRCOFVBUS_Msk & ((value) << TCPC_FSM_FRCOFVBUS_Pos))
#define TCPC_FSM_ALLREGRES_Pos                _U_(7)                                               /**< (TCPC_FSM) All Registers Reset To Default Interrupt Mask Position */
#define TCPC_FSM_ALLREGRES_Msk                (_U_(0x1) << TCPC_FSM_ALLREGRES_Pos)                 /**< (TCPC_FSM) All Registers Reset To Default Interrupt Mask Mask */
#define TCPC_FSM_ALLREGRES(value)             (TCPC_FSM_ALLREGRES_Msk & ((value) << TCPC_FSM_ALLREGRES_Pos))
#define TCPC_FSM_Msk                          _U_(0xFC)                                            /**< (TCPC_FSM) Register Mask  */


/* -------- TCPC_CSO : (TCPC Offset: 0x18) (R/W 8) Config Standard Output Register -------- */
#define TCPC_CSO_RESETVALUE                   _U_(0x60)                                            /**<  (TCPC_CSO) Config Standard Output Register  Reset Value */

#define TCPC_CSO_COR_Pos                      _U_(0)                                               /**< (TCPC_CSO) Connector Orientation Position */
#define TCPC_CSO_COR_Msk                      (_U_(0x1) << TCPC_CSO_COR_Pos)                       /**< (TCPC_CSO) Connector Orientation Mask */
#define TCPC_CSO_COR(value)                   (TCPC_CSO_COR_Msk & ((value) << TCPC_CSO_COR_Pos))  
#define   TCPC_CSO_COR_0_Val                  _U_(0x0)                                             /**< (TCPC_CSO) Normal (CC1=A5, CC2=B5, TX1=A2/A3, RX1=B10/B11) default.  */
#define   TCPC_CSO_COR_1_Val                  _U_(0x1)                                             /**< (TCPC_CSO) Flipped (CC2=A5, CC1=B5, TX1=B2/B3, RX1=A10/A11).  */
#define TCPC_CSO_COR_0                        (TCPC_CSO_COR_0_Val << TCPC_CSO_COR_Pos)             /**< (TCPC_CSO) Normal (CC1=A5, CC2=B5, TX1=A2/A3, RX1=B10/B11) default. Position  */
#define TCPC_CSO_COR_1                        (TCPC_CSO_COR_1_Val << TCPC_CSO_COR_Pos)             /**< (TCPC_CSO) Flipped (CC2=A5, CC1=B5, TX1=B2/B3, RX1=A10/A11). Position  */
#define TCPC_CSO_CNX_Pos                      _U_(1)                                               /**< (TCPC_CSO) Connection Present Position */
#define TCPC_CSO_CNX_Msk                      (_U_(0x1) << TCPC_CSO_CNX_Pos)                       /**< (TCPC_CSO) Connection Present Mask */
#define TCPC_CSO_CNX(value)                   (TCPC_CSO_CNX_Msk & ((value) << TCPC_CSO_CNX_Pos))  
#define   TCPC_CSO_CNX_0_Val                  _U_(0x0)                                             /**< (TCPC_CSO) No connection (default).  */
#define   TCPC_CSO_CNX_1_Val                  _U_(0x1)                                             /**< (TCPC_CSO) Connection.  */
#define TCPC_CSO_CNX_0                        (TCPC_CSO_CNX_0_Val << TCPC_CSO_CNX_Pos)             /**< (TCPC_CSO) No connection (default). Position  */
#define TCPC_CSO_CNX_1                        (TCPC_CSO_CNX_1_Val << TCPC_CSO_CNX_Pos)             /**< (TCPC_CSO) Connection. Position  */
#define TCPC_CSO_Msk                          _U_(0x03)                                            /**< (TCPC_CSO) Register Mask  */


/* -------- TCPC_RCTL : (TCPC Offset: 0x1A) (R/W 8) Role Control Register -------- */
#define TCPC_RCTL_RESETVALUE                  _U_(0x0F)                                            /**<  (TCPC_RCTL) Role Control Register  Reset Value */

#define TCPC_RCTL_CC1_Pos                     _U_(0)                                               /**< (TCPC_RCTL) Configuration Channel 1 Position */
#define TCPC_RCTL_CC1_Msk                     (_U_(0x3) << TCPC_RCTL_CC1_Pos)                      /**< (TCPC_RCTL) Configuration Channel 1 Mask */
#define TCPC_RCTL_CC1(value)                  (TCPC_RCTL_CC1_Msk & ((value) << TCPC_RCTL_CC1_Pos))
#define   TCPC_RCTL_CC1_CC1_RA_Val            _U_(0x0)                                             /**< (TCPC_RCTL) Ra  */
#define   TCPC_RCTL_CC1_CC1_RP_Val            _U_(0x1)                                             /**< (TCPC_RCTL) Rp defined as in RP field  */
#define   TCPC_RCTL_CC1_CC1_RD_Val            _U_(0x2)                                             /**< (TCPC_RCTL) Rd  */
#define   TCPC_RCTL_CC1_CC1_OPEN_Val          _U_(0x3)                                             /**< (TCPC_RCTL) Open (Disconnect or don't care)  */
#define TCPC_RCTL_CC1_CC1_RA                  (TCPC_RCTL_CC1_CC1_RA_Val << TCPC_RCTL_CC1_Pos)      /**< (TCPC_RCTL) Ra Position  */
#define TCPC_RCTL_CC1_CC1_RP                  (TCPC_RCTL_CC1_CC1_RP_Val << TCPC_RCTL_CC1_Pos)      /**< (TCPC_RCTL) Rp defined as in RP field Position  */
#define TCPC_RCTL_CC1_CC1_RD                  (TCPC_RCTL_CC1_CC1_RD_Val << TCPC_RCTL_CC1_Pos)      /**< (TCPC_RCTL) Rd Position  */
#define TCPC_RCTL_CC1_CC1_OPEN                (TCPC_RCTL_CC1_CC1_OPEN_Val << TCPC_RCTL_CC1_Pos)    /**< (TCPC_RCTL) Open (Disconnect or don't care) Position  */
#define TCPC_RCTL_CC2_Pos                     _U_(2)                                               /**< (TCPC_RCTL) Configuration Channel 2 Position */
#define TCPC_RCTL_CC2_Msk                     (_U_(0x3) << TCPC_RCTL_CC2_Pos)                      /**< (TCPC_RCTL) Configuration Channel 2 Mask */
#define TCPC_RCTL_CC2(value)                  (TCPC_RCTL_CC2_Msk & ((value) << TCPC_RCTL_CC2_Pos))
#define   TCPC_RCTL_CC2_CC2_RA_Val            _U_(0x0)                                             /**< (TCPC_RCTL) Ra  */
#define   TCPC_RCTL_CC2_CC2_RP_Val            _U_(0x1)                                             /**< (TCPC_RCTL) Rp defined as in RP field  */
#define   TCPC_RCTL_CC2_CC2_RD_Val            _U_(0x2)                                             /**< (TCPC_RCTL) Rd  */
#define   TCPC_RCTL_CC2_CC2_OPEN_Val          _U_(0x3)                                             /**< (TCPC_RCTL) Open (Disconnect or don't care)  */
#define TCPC_RCTL_CC2_CC2_RA                  (TCPC_RCTL_CC2_CC2_RA_Val << TCPC_RCTL_CC2_Pos)      /**< (TCPC_RCTL) Ra Position  */
#define TCPC_RCTL_CC2_CC2_RP                  (TCPC_RCTL_CC2_CC2_RP_Val << TCPC_RCTL_CC2_Pos)      /**< (TCPC_RCTL) Rp defined as in RP field Position  */
#define TCPC_RCTL_CC2_CC2_RD                  (TCPC_RCTL_CC2_CC2_RD_Val << TCPC_RCTL_CC2_Pos)      /**< (TCPC_RCTL) Rd Position  */
#define TCPC_RCTL_CC2_CC2_OPEN                (TCPC_RCTL_CC2_CC2_OPEN_Val << TCPC_RCTL_CC2_Pos)    /**< (TCPC_RCTL) Open (Disconnect or don't care) Position  */
#define TCPC_RCTL_RP_Pos                      _U_(4)                                               /**< (TCPC_RCTL) Resistor for Power Advertising Position */
#define TCPC_RCTL_RP_Msk                      (_U_(0x3) << TCPC_RCTL_RP_Pos)                       /**< (TCPC_RCTL) Resistor for Power Advertising Mask */
#define TCPC_RCTL_RP(value)                   (TCPC_RCTL_RP_Msk & ((value) << TCPC_RCTL_RP_Pos))  
#define   TCPC_RCTL_RP_RP_DEFAULT_Val         _U_(0x0)                                             /**< (TCPC_RCTL) Rp default  */
#define   TCPC_RCTL_RP_RP_1P5A_Val            _U_(0x1)                                             /**< (TCPC_RCTL) Rp 1.5A  */
#define   TCPC_RCTL_RP_RP_3A_Val              _U_(0x2)                                             /**< (TCPC_RCTL) Rp 3.0A  */
#define TCPC_RCTL_RP_RP_DEFAULT               (TCPC_RCTL_RP_RP_DEFAULT_Val << TCPC_RCTL_RP_Pos)    /**< (TCPC_RCTL) Rp default Position  */
#define TCPC_RCTL_RP_RP_1P5A                  (TCPC_RCTL_RP_RP_1P5A_Val << TCPC_RCTL_RP_Pos)       /**< (TCPC_RCTL) Rp 1.5A Position  */
#define TCPC_RCTL_RP_RP_3A                    (TCPC_RCTL_RP_RP_3A_Val << TCPC_RCTL_RP_Pos)         /**< (TCPC_RCTL) Rp 3.0A Position  */
#define TCPC_RCTL_DRP_Pos                     _U_(6)                                               /**< (TCPC_RCTL) Dual Role Play Position */
#define TCPC_RCTL_DRP_Msk                     (_U_(0x1) << TCPC_RCTL_DRP_Pos)                      /**< (TCPC_RCTL) Dual Role Play Mask */
#define TCPC_RCTL_DRP(value)                  (TCPC_RCTL_DRP_Msk & ((value) << TCPC_RCTL_DRP_Pos))
#define   TCPC_RCTL_DRP_0_Val                 _U_(0x0)                                             /**< (TCPC_RCTL) No DRP. CC1, CC2 fields determine Rp/Rd/Ra or open settings.  */
#define   TCPC_RCTL_DRP_1_Val                 _U_(0x1)                                             /**< (TCPC_RCTL) DRP.  */
#define TCPC_RCTL_DRP_0                       (TCPC_RCTL_DRP_0_Val << TCPC_RCTL_DRP_Pos)           /**< (TCPC_RCTL) No DRP. CC1, CC2 fields determine Rp/Rd/Ra or open settings. Position  */
#define TCPC_RCTL_DRP_1                       (TCPC_RCTL_DRP_1_Val << TCPC_RCTL_DRP_Pos)           /**< (TCPC_RCTL) DRP. Position  */
#define TCPC_RCTL_Msk                         _U_(0x7F)                                            /**< (TCPC_RCTL) Register Mask  */


/* -------- TCPC_FCTL : (TCPC Offset: 0x1B) (R/W 8) Fault Control Register -------- */
#define TCPC_FCTL_RESETVALUE                  _U_(0x00)                                            /**<  (TCPC_FCTL) Fault Control Register  Reset Value */

#define TCPC_FCTL_VBUSOVPF_Pos                _U_(1)                                               /**< (TCPC_FCTL) Internal or External OVP VBUS Over Voltage Protection Fault Position */
#define TCPC_FCTL_VBUSOVPF_Msk                (_U_(0x1) << TCPC_FCTL_VBUSOVPF_Pos)                 /**< (TCPC_FCTL) Internal or External OVP VBUS Over Voltage Protection Fault Mask */
#define TCPC_FCTL_VBUSOVPF(value)             (TCPC_FCTL_VBUSOVPF_Msk & ((value) << TCPC_FCTL_VBUSOVPF_Pos))
#define   TCPC_FCTL_VBUSOVPF_0_Val            _U_(0x0)                                             /**< (TCPC_FCTL) Internal and external OVP circuit enabled.  */
#define   TCPC_FCTL_VBUSOVPF_1_Val            _U_(0x1)                                             /**< (TCPC_FCTL) Internal and external OVP circuit disabled.  */
#define TCPC_FCTL_VBUSOVPF_0                  (TCPC_FCTL_VBUSOVPF_0_Val << TCPC_FCTL_VBUSOVPF_Pos) /**< (TCPC_FCTL) Internal and external OVP circuit enabled. Position  */
#define TCPC_FCTL_VBUSOVPF_1                  (TCPC_FCTL_VBUSOVPF_1_Val << TCPC_FCTL_VBUSOVPF_Pos) /**< (TCPC_FCTL) Internal and external OVP circuit disabled. Position  */
#define TCPC_FCTL_VBUSOCPF_Pos                _U_(2)                                               /**< (TCPC_FCTL) Internal or External OCP VBUS Over Current Protection Fault Position */
#define TCPC_FCTL_VBUSOCPF_Msk                (_U_(0x1) << TCPC_FCTL_VBUSOCPF_Pos)                 /**< (TCPC_FCTL) Internal or External OCP VBUS Over Current Protection Fault Mask */
#define TCPC_FCTL_VBUSOCPF(value)             (TCPC_FCTL_VBUSOCPF_Msk & ((value) << TCPC_FCTL_VBUSOCPF_Pos))
#define   TCPC_FCTL_VBUSOCPF_0_Val            _U_(0x0)                                             /**< (TCPC_FCTL) Internal and external OCP circuit enabled.  */
#define   TCPC_FCTL_VBUSOCPF_1_Val            _U_(0x1)                                             /**< (TCPC_FCTL) Internal and external OCP circuit disabled.  */
#define TCPC_FCTL_VBUSOCPF_0                  (TCPC_FCTL_VBUSOCPF_0_Val << TCPC_FCTL_VBUSOCPF_Pos) /**< (TCPC_FCTL) Internal and external OCP circuit enabled. Position  */
#define TCPC_FCTL_VBUSOCPF_1                  (TCPC_FCTL_VBUSOCPF_1_Val << TCPC_FCTL_VBUSOCPF_Pos) /**< (TCPC_FCTL) Internal and external OCP circuit disabled. Position  */
#define TCPC_FCTL_FRCOFVBUS_Pos               _U_(4)                                               /**< (TCPC_FCTL) Force Off VBUS (Source or Sink) Position */
#define TCPC_FCTL_FRCOFVBUS_Msk               (_U_(0x1) << TCPC_FCTL_FRCOFVBUS_Pos)                /**< (TCPC_FCTL) Force Off VBUS (Source or Sink) Mask */
#define TCPC_FCTL_FRCOFVBUS(value)            (TCPC_FCTL_FRCOFVBUS_Msk & ((value) << TCPC_FCTL_FRCOFVBUS_Pos))
#define   TCPC_FCTL_FRCOFVBUS_0_Val           _U_(0x0)                                             /**< (TCPC_FCTL) Allows standard input signal Force Off VBUS control (default).  */
#define   TCPC_FCTL_FRCOFVBUS_1_Val           _U_(0x1)                                             /**< (TCPC_FCTL) Blocks standard input signal Force Off VBUS control.  */
#define TCPC_FCTL_FRCOFVBUS_0                 (TCPC_FCTL_FRCOFVBUS_0_Val << TCPC_FCTL_FRCOFVBUS_Pos) /**< (TCPC_FCTL) Allows standard input signal Force Off VBUS control (default). Position  */
#define TCPC_FCTL_FRCOFVBUS_1                 (TCPC_FCTL_FRCOFVBUS_1_Val << TCPC_FCTL_FRCOFVBUS_Pos) /**< (TCPC_FCTL) Blocks standard input signal Force Off VBUS control. Position  */
#define TCPC_FCTL_Msk                         _U_(0x16)                                            /**< (TCPC_FCTL) Register Mask  */


/* -------- TCPC_CCS : (TCPC Offset: 0x1D) ( R/ 8) CC Status Register -------- */
#define TCPC_CCS_RESETVALUE                   _U_(0x00)                                            /**<  (TCPC_CCS) CC Status Register  Reset Value */

#define TCPC_CCS_CC1_Pos                      _U_(0)                                               /**< (TCPC_CCS) CC1 State Position */
#define TCPC_CCS_CC1_Msk                      (_U_(0x3) << TCPC_CCS_CC1_Pos)                       /**< (TCPC_CCS) CC1 State Mask */
#define TCPC_CCS_CC1(value)                   (TCPC_CCS_CC1_Msk & ((value) << TCPC_CCS_CC1_Pos))  
#define   TCPC_CCS_CC1_CC1_SNK_OPEN_Val       _U_(0x0)                                             /**< (TCPC_CCS) SNK.Open (Below maximum VRa)  */
#define   TCPC_CCS_CC1_CC1_SRC_OPEN_Val       _U_(0x0)                                             /**< (TCPC_CCS) SRC.Open (Open, Rp)  */
#define   TCPC_CCS_CC1_CC1_SNK_DEFAULT_Val    _U_(0x1)                                             /**< (TCPC_CCS) SNK.Default (Above minimum VRd-Connect)  */
#define   TCPC_CCS_CC1_CC1_SRC_RA_Val         _U_(0x1)                                             /**< (TCPC_CCS) SRC.Ra (below maximum VRa)  */
#define   TCPC_CCS_CC1_CC1_SNK_1P5A_Val       _U_(0x2)                                             /**< (TCPC_CCS) SNK.Power1.5 (Above minimum VRd-Connect) Detects Rp-1.5A  */
#define   TCPC_CCS_CC1_CC1_SRC_RD_Val         _U_(0x2)                                             /**< (TCPC_CCS) SRC.Rd (within the VRd range)  */
#define   TCPC_CCS_CC1_CC1_SNK_3A_Val         _U_(0x3)                                             /**< (TCPC_CCS) SNK.Power3.0 (Above minimum VRd-Connect) Detects Rp-3.0A  */
#define TCPC_CCS_CC1_CC1_SNK_OPEN             (TCPC_CCS_CC1_CC1_SNK_OPEN_Val << TCPC_CCS_CC1_Pos)  /**< (TCPC_CCS) SNK.Open (Below maximum VRa) Position  */
#define TCPC_CCS_CC1_CC1_SRC_OPEN             (TCPC_CCS_CC1_CC1_SRC_OPEN_Val << TCPC_CCS_CC1_Pos)  /**< (TCPC_CCS) SRC.Open (Open, Rp) Position  */
#define TCPC_CCS_CC1_CC1_SNK_DEFAULT          (TCPC_CCS_CC1_CC1_SNK_DEFAULT_Val << TCPC_CCS_CC1_Pos) /**< (TCPC_CCS) SNK.Default (Above minimum VRd-Connect) Position  */
#define TCPC_CCS_CC1_CC1_SRC_RA               (TCPC_CCS_CC1_CC1_SRC_RA_Val << TCPC_CCS_CC1_Pos)    /**< (TCPC_CCS) SRC.Ra (below maximum VRa) Position  */
#define TCPC_CCS_CC1_CC1_SNK_1P5A             (TCPC_CCS_CC1_CC1_SNK_1P5A_Val << TCPC_CCS_CC1_Pos)  /**< (TCPC_CCS) SNK.Power1.5 (Above minimum VRd-Connect) Detects Rp-1.5A Position  */
#define TCPC_CCS_CC1_CC1_SRC_RD               (TCPC_CCS_CC1_CC1_SRC_RD_Val << TCPC_CCS_CC1_Pos)    /**< (TCPC_CCS) SRC.Rd (within the VRd range) Position  */
#define TCPC_CCS_CC1_CC1_SNK_3A               (TCPC_CCS_CC1_CC1_SNK_3A_Val << TCPC_CCS_CC1_Pos)    /**< (TCPC_CCS) SNK.Power3.0 (Above minimum VRd-Connect) Detects Rp-3.0A Position  */
#define TCPC_CCS_CC2_Pos                      _U_(2)                                               /**< (TCPC_CCS) CC2 State Position */
#define TCPC_CCS_CC2_Msk                      (_U_(0x3) << TCPC_CCS_CC2_Pos)                       /**< (TCPC_CCS) CC2 State Mask */
#define TCPC_CCS_CC2(value)                   (TCPC_CCS_CC2_Msk & ((value) << TCPC_CCS_CC2_Pos))  
#define   TCPC_CCS_CC2_CC2_SNK_OPEN_Val       _U_(0x0)                                             /**< (TCPC_CCS) SNK.Open (Below maximum VRa)  */
#define   TCPC_CCS_CC2_CC2_SRC_OPEN_Val       _U_(0x0)                                             /**< (TCPC_CCS) SRC.Open (Open, Rp)  */
#define   TCPC_CCS_CC2_CC2_SNK_DEFAULT_Val    _U_(0x1)                                             /**< (TCPC_CCS) SNK.Default (Above minimum VRd-Connect)  */
#define   TCPC_CCS_CC2_CC2_SRC_RA_Val         _U_(0x1)                                             /**< (TCPC_CCS) SRC.Ra (below maximum VRa)  */
#define   TCPC_CCS_CC2_CC2_SNK_1P5A_Val       _U_(0x2)                                             /**< (TCPC_CCS) SNK.Power1.5 (Above minimum VRd-Connect) Detects Rp-1.5A  */
#define   TCPC_CCS_CC2_CC2_SRC_RD_Val         _U_(0x2)                                             /**< (TCPC_CCS) SRC.Rd (within the VRd range)  */
#define   TCPC_CCS_CC2_CC2_SNK_3A_Val         _U_(0x3)                                             /**< (TCPC_CCS) SNK.Power3.0 (Above minimum VRd-Connect) Detects Rp-3.0A  */
#define TCPC_CCS_CC2_CC2_SNK_OPEN             (TCPC_CCS_CC2_CC2_SNK_OPEN_Val << TCPC_CCS_CC2_Pos)  /**< (TCPC_CCS) SNK.Open (Below maximum VRa) Position  */
#define TCPC_CCS_CC2_CC2_SRC_OPEN             (TCPC_CCS_CC2_CC2_SRC_OPEN_Val << TCPC_CCS_CC2_Pos)  /**< (TCPC_CCS) SRC.Open (Open, Rp) Position  */
#define TCPC_CCS_CC2_CC2_SNK_DEFAULT          (TCPC_CCS_CC2_CC2_SNK_DEFAULT_Val << TCPC_CCS_CC2_Pos) /**< (TCPC_CCS) SNK.Default (Above minimum VRd-Connect) Position  */
#define TCPC_CCS_CC2_CC2_SRC_RA               (TCPC_CCS_CC2_CC2_SRC_RA_Val << TCPC_CCS_CC2_Pos)    /**< (TCPC_CCS) SRC.Ra (below maximum VRa) Position  */
#define TCPC_CCS_CC2_CC2_SNK_1P5A             (TCPC_CCS_CC2_CC2_SNK_1P5A_Val << TCPC_CCS_CC2_Pos)  /**< (TCPC_CCS) SNK.Power1.5 (Above minimum VRd-Connect) Detects Rp-1.5A Position  */
#define TCPC_CCS_CC2_CC2_SRC_RD               (TCPC_CCS_CC2_CC2_SRC_RD_Val << TCPC_CCS_CC2_Pos)    /**< (TCPC_CCS) SRC.Rd (within the VRd range) Position  */
#define TCPC_CCS_CC2_CC2_SNK_3A               (TCPC_CCS_CC2_CC2_SNK_3A_Val << TCPC_CCS_CC2_Pos)    /**< (TCPC_CCS) SNK.Power3.0 (Above minimum VRd-Connect) Detects Rp-3.0A Position  */
#define TCPC_CCS_CONRES_Pos                   _U_(4)                                               /**< (TCPC_CCS) Connect Result Position */
#define TCPC_CCS_CONRES_Msk                   (_U_(0x1) << TCPC_CCS_CONRES_Pos)                    /**< (TCPC_CCS) Connect Result Mask */
#define TCPC_CCS_CONRES(value)                (TCPC_CCS_CONRES_Msk & ((value) << TCPC_CCS_CONRES_Pos))
#define   TCPC_CCS_CONRES_0_Val               _U_(0x0)                                             /**< (TCPC_CCS) TCPC is presenting Rp.  */
#define   TCPC_CCS_CONRES_1_Val               _U_(0x1)                                             /**< (TCPC_CCS) TCPC is presenting Rd.  */
#define TCPC_CCS_CONRES_0                     (TCPC_CCS_CONRES_0_Val << TCPC_CCS_CONRES_Pos)       /**< (TCPC_CCS) TCPC is presenting Rp. Position  */
#define TCPC_CCS_CONRES_1                     (TCPC_CCS_CONRES_1_Val << TCPC_CCS_CONRES_Pos)       /**< (TCPC_CCS) TCPC is presenting Rd. Position  */
#define TCPC_CCS_LK4CNX_Pos                   _U_(5)                                               /**< (TCPC_CCS) Looking4Connection Position */
#define TCPC_CCS_LK4CNX_Msk                   (_U_(0x1) << TCPC_CCS_LK4CNX_Pos)                    /**< (TCPC_CCS) Looking4Connection Mask */
#define TCPC_CCS_LK4CNX(value)                (TCPC_CCS_LK4CNX_Msk & ((value) << TCPC_CCS_LK4CNX_Pos))
#define   TCPC_CCS_LK4CNX_0_Val               _U_(0x0)                                             /**< (TCPC_CCS) TCPC is not actively looking for a connection. A transition from '1' to '0' indicates a potential connection has been found.  */
#define   TCPC_CCS_LK4CNX_1_Val               _U_(0x1)                                             /**< (TCPC_CCS) TCPC is looking for a connection (toggling as a DRP or looking for a connection as sink/source only condition).  */
#define TCPC_CCS_LK4CNX_0                     (TCPC_CCS_LK4CNX_0_Val << TCPC_CCS_LK4CNX_Pos)       /**< (TCPC_CCS) TCPC is not actively looking for a connection. A transition from '1' to '0' indicates a potential connection has been found. Position  */
#define TCPC_CCS_LK4CNX_1                     (TCPC_CCS_LK4CNX_1_Val << TCPC_CCS_LK4CNX_Pos)       /**< (TCPC_CCS) TCPC is looking for a connection (toggling as a DRP or looking for a connection as sink/source only condition). Position  */
#define TCPC_CCS_Msk                          _U_(0x3F)                                            /**< (TCPC_CCS) Register Mask  */


/* -------- TCPC_PS : (TCPC Offset: 0x1E) ( R/ 8) Power Status Register -------- */
#define TCPC_PS_RESETVALUE                    _U_(0x00)                                            /**<  (TCPC_PS) Power Status Register  Reset Value */

#define TCPC_PS_SNKVBUS_Pos                   _U_(0)                                               /**< (TCPC_PS) Sinking VBUS Position */
#define TCPC_PS_SNKVBUS_Msk                   (_U_(0x1) << TCPC_PS_SNKVBUS_Pos)                    /**< (TCPC_PS) Sinking VBUS Mask */
#define TCPC_PS_SNKVBUS(value)                (TCPC_PS_SNKVBUS_Msk & ((value) << TCPC_PS_SNKVBUS_Pos))
#define   TCPC_PS_SNKVBUS_0_Val               _U_(0x0)                                             /**< (TCPC_PS) Sink is disconnected. (Default and if not supported)  */
#define   TCPC_PS_SNKVBUS_1_Val               _U_(0x1)                                             /**< (TCPC_PS) TCPC is sinking VBUS to the system load.  */
#define TCPC_PS_SNKVBUS_0                     (TCPC_PS_SNKVBUS_0_Val << TCPC_PS_SNKVBUS_Pos)       /**< (TCPC_PS) Sink is disconnected. (Default and if not supported) Position  */
#define TCPC_PS_SNKVBUS_1                     (TCPC_PS_SNKVBUS_1_Val << TCPC_PS_SNKVBUS_Pos)       /**< (TCPC_PS) TCPC is sinking VBUS to the system load. Position  */
#define TCPC_PS_VCONN_Pos                     _U_(1)                                               /**< (TCPC_PS) VCONN Present Position */
#define TCPC_PS_VCONN_Msk                     (_U_(0x1) << TCPC_PS_VCONN_Pos)                      /**< (TCPC_PS) VCONN Present Mask */
#define TCPC_PS_VCONN(value)                  (TCPC_PS_VCONN_Msk & ((value) << TCPC_PS_VCONN_Pos))
#define   TCPC_PS_VCONN_0_Val                 _U_(0x0)                                             /**< (TCPC_PS) VCONN is not present.  */
#define TCPC_PS_VCONN_0                       (TCPC_PS_VCONN_0_Val << TCPC_PS_VCONN_Pos)           /**< (TCPC_PS) VCONN is not present. Position  */
#define TCPC_PS_VBUS_Pos                      _U_(2)                                               /**< (TCPC_PS) VBUS Present Position */
#define TCPC_PS_VBUS_Msk                      (_U_(0x1) << TCPC_PS_VBUS_Pos)                       /**< (TCPC_PS) VBUS Present Mask */
#define TCPC_PS_VBUS(value)                   (TCPC_PS_VBUS_Msk & ((value) << TCPC_PS_VBUS_Pos))  
#define   TCPC_PS_VBUS_0_Val                  _U_(0x0)                                             /**< (TCPC_PS) VBUS disconnected.  */
#define   TCPC_PS_VBUS_1_Val                  _U_(0x1)                                             /**< (TCPC_PS) VBUS connected.  */
#define TCPC_PS_VBUS_0                        (TCPC_PS_VBUS_0_Val << TCPC_PS_VBUS_Pos)             /**< (TCPC_PS) VBUS disconnected. Position  */
#define TCPC_PS_VBUS_1                        (TCPC_PS_VBUS_1_Val << TCPC_PS_VBUS_Pos)             /**< (TCPC_PS) VBUS connected. Position  */
#define TCPC_PS_VBUSDETE_Pos                  _U_(3)                                               /**< (TCPC_PS) VBUS Present Detection Enabled Position */
#define TCPC_PS_VBUSDETE_Msk                  (_U_(0x1) << TCPC_PS_VBUSDETE_Pos)                   /**< (TCPC_PS) VBUS Present Detection Enabled Mask */
#define TCPC_PS_VBUSDETE(value)               (TCPC_PS_VBUSDETE_Msk & ((value) << TCPC_PS_VBUSDETE_Pos))
#define   TCPC_PS_VBUSDETE_0_Val              _U_(0x0)                                             /**< (TCPC_PS) VBUS present detection disabled.  */
#define   TCPC_PS_VBUSDETE_1_Val              _U_(0x1)                                             /**< (TCPC_PS) VBUS present detection enabled (default).  */
#define TCPC_PS_VBUSDETE_0                    (TCPC_PS_VBUSDETE_0_Val << TCPC_PS_VBUSDETE_Pos)     /**< (TCPC_PS) VBUS present detection disabled. Position  */
#define TCPC_PS_VBUSDETE_1                    (TCPC_PS_VBUSDETE_1_Val << TCPC_PS_VBUSDETE_Pos)     /**< (TCPC_PS) VBUS present detection enabled (default). Position  */
#define TCPC_PS_SRCVBUS_Pos                   _U_(4)                                               /**< (TCPC_PS) Sourcing VBUS Position */
#define TCPC_PS_SRCVBUS_Msk                   (_U_(0x1) << TCPC_PS_SRCVBUS_Pos)                    /**< (TCPC_PS) Sourcing VBUS Mask */
#define TCPC_PS_SRCVBUS(value)                (TCPC_PS_SRCVBUS_Msk & ((value) << TCPC_PS_SRCVBUS_Pos))
#define   TCPC_PS_SRCVBUS_0_Val               _U_(0x0)                                             /**< (TCPC_PS) Sourcing VBUS is disabled.  */
#define   TCPC_PS_SRCVBUS_1_Val               _U_(0x1)                                             /**< (TCPC_PS) Sourcing VBUS is enabled.  */
#define TCPC_PS_SRCVBUS_0                     (TCPC_PS_SRCVBUS_0_Val << TCPC_PS_SRCVBUS_Pos)       /**< (TCPC_PS) Sourcing VBUS is disabled. Position  */
#define TCPC_PS_SRCVBUS_1                     (TCPC_PS_SRCVBUS_1_Val << TCPC_PS_SRCVBUS_Pos)       /**< (TCPC_PS) Sourcing VBUS is enabled. Position  */
#define TCPC_PS_SRCHIV_Pos                    _U_(5)                                               /**< (TCPC_PS) Sourcing High Voltage Position */
#define TCPC_PS_SRCHIV_Msk                    (_U_(0x1) << TCPC_PS_SRCHIV_Pos)                     /**< (TCPC_PS) Sourcing High Voltage Mask */
#define TCPC_PS_SRCHIV(value)                 (TCPC_PS_SRCHIV_Msk & ((value) << TCPC_PS_SRCHIV_Pos))
#define   TCPC_PS_SRCHIV_0_Val                _U_(0x0)                                             /**< (TCPC_PS) VSafe5V.  */
#define TCPC_PS_SRCHIV_0                      (TCPC_PS_SRCHIV_0_Val << TCPC_PS_SRCHIV_Pos)         /**< (TCPC_PS) VSafe5V. Position  */
#define TCPC_PS_INIT_Pos                      _U_(6)                                               /**< (TCPC_PS) TCPC Initialization Position */
#define TCPC_PS_INIT_Msk                      (_U_(0x1) << TCPC_PS_INIT_Pos)                       /**< (TCPC_PS) TCPC Initialization Mask */
#define TCPC_PS_INIT(value)                   (TCPC_PS_INIT_Msk & ((value) << TCPC_PS_INIT_Pos))  
#define   TCPC_PS_INIT_0_Val                  _U_(0x0)                                             /**< (TCPC_PS) TCPC has completed initialization and all registers are valid.  */
#define   TCPC_PS_INIT_1_Val                  _U_(0x1)                                             /**< (TCPC_PS) TCPC is still performing internal initialization and the only registers that are guaranteed to return the correct values are 00h..0Fh  */
#define TCPC_PS_INIT_0                        (TCPC_PS_INIT_0_Val << TCPC_PS_INIT_Pos)             /**< (TCPC_PS) TCPC has completed initialization and all registers are valid. Position  */
#define TCPC_PS_INIT_1                        (TCPC_PS_INIT_1_Val << TCPC_PS_INIT_Pos)             /**< (TCPC_PS) TCPC is still performing internal initialization and the only registers that are guaranteed to return the correct values are 00h..0Fh Position  */
#define TCPC_PS_DBG_Pos                       _U_(7)                                               /**< (TCPC_PS) Debug Accessory Connected Position */
#define TCPC_PS_DBG_Msk                       (_U_(0x1) << TCPC_PS_DBG_Pos)                        /**< (TCPC_PS) Debug Accessory Connected Mask */
#define TCPC_PS_DBG(value)                    (TCPC_PS_DBG_Msk & ((value) << TCPC_PS_DBG_Pos))    
#define   TCPC_PS_DBG_0_Val                   _U_(0x0)                                             /**< (TCPC_PS) No debug accessory connected (default).  */
#define TCPC_PS_DBG_0                         (TCPC_PS_DBG_0_Val << TCPC_PS_DBG_Pos)               /**< (TCPC_PS) No debug accessory connected (default). Position  */
#define TCPC_PS_Msk                           _U_(0xFF)                                            /**< (TCPC_PS) Register Mask  */


/* -------- TCPC_FS : (TCPC Offset: 0x1F) (R/W 8) Fault Status Register -------- */
#define TCPC_FS_RESETVALUE                    _U_(0x80)                                            /**<  (TCPC_FS) Fault Status Register  Reset Value */

#define TCPC_FS_VBUSOVPF_Pos                  _U_(2)                                               /**< (TCPC_FS) Internal or External OVP VBUS Over-Voltage Protection Fault Position */
#define TCPC_FS_VBUSOVPF_Msk                  (_U_(0x1) << TCPC_FS_VBUSOVPF_Pos)                   /**< (TCPC_FS) Internal or External OVP VBUS Over-Voltage Protection Fault Mask */
#define TCPC_FS_VBUSOVPF(value)               (TCPC_FS_VBUSOVPF_Msk & ((value) << TCPC_FS_VBUSOVPF_Pos))
#define   TCPC_FS_VBUSOVPF_0_Val              _U_(0x0)                                             /**< (TCPC_FS) Not in an over-voltage protection state.  */
#define   TCPC_FS_VBUSOVPF_1_Val              _U_(0x1)                                             /**< (TCPC_FS) Over-voltage fault latched.  */
#define TCPC_FS_VBUSOVPF_0                    (TCPC_FS_VBUSOVPF_0_Val << TCPC_FS_VBUSOVPF_Pos)     /**< (TCPC_FS) Not in an over-voltage protection state. Position  */
#define TCPC_FS_VBUSOVPF_1                    (TCPC_FS_VBUSOVPF_1_Val << TCPC_FS_VBUSOVPF_Pos)     /**< (TCPC_FS) Over-voltage fault latched. Position  */
#define TCPC_FS_VBUSOCPF_Pos                  _U_(3)                                               /**< (TCPC_FS) Internal or External OCP VBUS Over-Current Protection Fault Position */
#define TCPC_FS_VBUSOCPF_Msk                  (_U_(0x1) << TCPC_FS_VBUSOCPF_Pos)                   /**< (TCPC_FS) Internal or External OCP VBUS Over-Current Protection Fault Mask */
#define TCPC_FS_VBUSOCPF(value)               (TCPC_FS_VBUSOCPF_Msk & ((value) << TCPC_FS_VBUSOCPF_Pos))
#define   TCPC_FS_VBUSOCPF_0_Val              _U_(0x0)                                             /**< (TCPC_FS) Not in an over-current protection state.  */
#define   TCPC_FS_VBUSOCPF_1_Val              _U_(0x1)                                             /**< (TCPC_FS) Over-current fault latched.  */
#define TCPC_FS_VBUSOCPF_0                    (TCPC_FS_VBUSOCPF_0_Val << TCPC_FS_VBUSOCPF_Pos)     /**< (TCPC_FS) Not in an over-current protection state. Position  */
#define TCPC_FS_VBUSOCPF_1                    (TCPC_FS_VBUSOCPF_1_Val << TCPC_FS_VBUSOCPF_Pos)     /**< (TCPC_FS) Over-current fault latched. Position  */
#define TCPC_FS_FRCOFVBUS_Pos                 _U_(6)                                               /**< (TCPC_FS) Force Off VBUS Position */
#define TCPC_FS_FRCOFVBUS_Msk                 (_U_(0x1) << TCPC_FS_FRCOFVBUS_Pos)                  /**< (TCPC_FS) Force Off VBUS Mask */
#define TCPC_FS_FRCOFVBUS(value)              (TCPC_FS_FRCOFVBUS_Msk & ((value) << TCPC_FS_FRCOFVBUS_Pos))
#define   TCPC_FS_FRCOFVBUS_0_Val             _U_(0x0)                                             /**< (TCPC_FS) No fault detected, no action (default and not supported).  */
#define   TCPC_FS_FRCOFVBUS_1_Val             _U_(0x1)                                             /**< (TCPC_FS) VBUS source/sink has been forced off due to external fault.  */
#define TCPC_FS_FRCOFVBUS_0                   (TCPC_FS_FRCOFVBUS_0_Val << TCPC_FS_FRCOFVBUS_Pos)   /**< (TCPC_FS) No fault detected, no action (default and not supported). Position  */
#define TCPC_FS_FRCOFVBUS_1                   (TCPC_FS_FRCOFVBUS_1_Val << TCPC_FS_FRCOFVBUS_Pos)   /**< (TCPC_FS) VBUS source/sink has been forced off due to external fault. Position  */
#define TCPC_FS_ALLREGRES_Pos                 _U_(7)                                               /**< (TCPC_FS) All Registers Reset To Default Position */
#define TCPC_FS_ALLREGRES_Msk                 (_U_(0x1) << TCPC_FS_ALLREGRES_Pos)                  /**< (TCPC_FS) All Registers Reset To Default Mask */
#define TCPC_FS_ALLREGRES(value)              (TCPC_FS_ALLREGRES_Msk & ((value) << TCPC_FS_ALLREGRES_Pos))
#define   TCPC_FS_ALLREGRES_0_Val             _U_(0x0)                                             /**< (TCPC_FS) The registers have not been reset since the last clear of this bit.  */
#define   TCPC_FS_ALLREGRES_1_Val             _U_(0x1)                                             /**< (TCPC_FS) The TCPC has reset all registers to their default value. This happens at initial powerup or if an unexpected power reset occurs.  */
#define TCPC_FS_ALLREGRES_0                   (TCPC_FS_ALLREGRES_0_Val << TCPC_FS_ALLREGRES_Pos)   /**< (TCPC_FS) The registers have not been reset since the last clear of this bit. Position  */
#define TCPC_FS_ALLREGRES_1                   (TCPC_FS_ALLREGRES_1_Val << TCPC_FS_ALLREGRES_Pos)   /**< (TCPC_FS) The TCPC has reset all registers to their default value. This happens at initial powerup or if an unexpected power reset occurs. Position  */
#define TCPC_FS_Msk                           _U_(0xCC)                                            /**< (TCPC_FS) Register Mask  */


/* -------- TCPC_CMD : (TCPC Offset: 0x23) (R/W 8) Command Register -------- */
#define TCPC_CMD_RESETVALUE                   _U_(0x00)                                            /**<  (TCPC_CMD) Command Register  Reset Value */

#define TCPC_CMD_COMMAND_Pos                  _U_(0)                                               /**< (TCPC_CMD) Command Position */
#define TCPC_CMD_COMMAND_Msk                  (_U_(0xFF) << TCPC_CMD_COMMAND_Pos)                  /**< (TCPC_CMD) Command Mask */
#define TCPC_CMD_COMMAND(value)               (TCPC_CMD_COMMAND_Msk & ((value) << TCPC_CMD_COMMAND_Pos))
#define   TCPC_CMD_COMMAND_DISABLEVBUSDETECT_Val _U_(0x22)                                            /**< (TCPC_CMD) Disables Vbus present detection.  */
#define   TCPC_CMD_COMMAND_ENABLEVBUSDETECT_Val _U_(0x33)                                            /**< (TCPC_CMD) Enables Vbus present detection.  */
#define   TCPC_CMD_COMMAND_DISABLESINKVBUS_Val _U_(0x44)                                            /**< (TCPC_CMD) Disables sinking power over VBUS. This COMMAND does not disable TCPC_PS.VBUS detection. The TCPC must clear TCPC_FS.VBUSOCPF and TCPC_FS.VBUSOVPF.  */
#define   TCPC_CMD_COMMAND_SINKVBUS_Val       _U_(0x55)                                            /**< (TCPC_CMD) Enables sinking power over VBUS and enable VBUS present detection.  */
#define   TCPC_CMD_COMMAND_DISABLESOURCEVBUS_Val _U_(0x66)                                            /**< (TCPC_CMD) Disables sourcing power over VBUS. The TCPC shall stop reporting TCPC_FS. Internal or External OCP or OVP Faults. This COMMAND does not disable TCPC_PS.VBUS detection.  */
#define   TCPC_CMD_COMMAND_SOURCEVBUSDEFAULTVOLTAGE_Val _U_(0x77)                                            /**< (TCPC_CMD) Enables sourcing vSafe5V over VBUS and enable VBUS present detection. Source must transition to vSafe5V if at a high voltage.  */
#define   TCPC_CMD_COMMAND_LOOK4CONNECTION_Val _U_(0x99)                                            /**< (TCPC_CMD) Starts DRP toggling if TCPC_RCTL.DRP=1b. If TCPC_RCTL.CC1/CC2= 01b start with Rp, if TCPC_RCTL.CC1/CC2 =10b start with Rd. If TCPC_RCTL.CC1/CC2 are not both 01b or 10b, then do not start toggling. The TCPM must issue TCPC_CMD.Look4Connection to enable the TCPC to restart connection detection in cases where TCPC_RCTL contents will not change. An example of this is when a potential connection as a source occurred but was further debounced by the TCPM to find the sink disconnected. In this case, a source only or DRP should go back to its Unattached.Src state. This would result in TCPC_RCTL staying the same.  */
#define TCPC_CMD_COMMAND_DISABLEVBUSDETECT    (TCPC_CMD_COMMAND_DISABLEVBUSDETECT_Val << TCPC_CMD_COMMAND_Pos) /**< (TCPC_CMD) Disables Vbus present detection. Position  */
#define TCPC_CMD_COMMAND_ENABLEVBUSDETECT     (TCPC_CMD_COMMAND_ENABLEVBUSDETECT_Val << TCPC_CMD_COMMAND_Pos) /**< (TCPC_CMD) Enables Vbus present detection. Position  */
#define TCPC_CMD_COMMAND_DISABLESINKVBUS      (TCPC_CMD_COMMAND_DISABLESINKVBUS_Val << TCPC_CMD_COMMAND_Pos) /**< (TCPC_CMD) Disables sinking power over VBUS. This COMMAND does not disable TCPC_PS.VBUS detection. The TCPC must clear TCPC_FS.VBUSOCPF and TCPC_FS.VBUSOVPF. Position  */
#define TCPC_CMD_COMMAND_SINKVBUS             (TCPC_CMD_COMMAND_SINKVBUS_Val << TCPC_CMD_COMMAND_Pos) /**< (TCPC_CMD) Enables sinking power over VBUS and enable VBUS present detection. Position  */
#define TCPC_CMD_COMMAND_DISABLESOURCEVBUS    (TCPC_CMD_COMMAND_DISABLESOURCEVBUS_Val << TCPC_CMD_COMMAND_Pos) /**< (TCPC_CMD) Disables sourcing power over VBUS. The TCPC shall stop reporting TCPC_FS. Internal or External OCP or OVP Faults. This COMMAND does not disable TCPC_PS.VBUS detection. Position  */
#define TCPC_CMD_COMMAND_SOURCEVBUSDEFAULTVOLTAGE (TCPC_CMD_COMMAND_SOURCEVBUSDEFAULTVOLTAGE_Val << TCPC_CMD_COMMAND_Pos) /**< (TCPC_CMD) Enables sourcing vSafe5V over VBUS and enable VBUS present detection. Source must transition to vSafe5V if at a high voltage. Position  */
#define TCPC_CMD_COMMAND_LOOK4CONNECTION      (TCPC_CMD_COMMAND_LOOK4CONNECTION_Val << TCPC_CMD_COMMAND_Pos) /**< (TCPC_CMD) Starts DRP toggling if TCPC_RCTL.DRP=1b. If TCPC_RCTL.CC1/CC2= 01b start with Rp, if TCPC_RCTL.CC1/CC2 =10b start with Rd. If TCPC_RCTL.CC1/CC2 are not both 01b or 10b, then do not start toggling. The TCPM must issue TCPC_CMD.Look4Connection to enable the TCPC to restart connection detection in cases where TCPC_RCTL contents will not change. An example of this is when a potential connection as a source occurred but was further debounced by the TCPM to find the sink disconnected. In this case, a source only or DRP should go back to its Unattached.Src state. This would result in TCPC_RCTL staying the same. Position  */
#define TCPC_CMD_Msk                          _U_(0xFF)                                            /**< (TCPC_CMD) Register Mask  */


/* -------- TCPC_DCP1 : (TCPC Offset: 0x24) (R/W 16) Device Capabilities 1 Register -------- */
#define TCPC_DCP1_RESETVALUE                  _U_(0x00)                                            /**<  (TCPC_DCP1) Device Capabilities 1 Register  Reset Value */

#define TCPC_DCP1_SRCVBUS_Pos                 _U_(0)                                               /**< (TCPC_DCP1) Source VBUS Position */
#define TCPC_DCP1_SRCVBUS_Msk                 (_U_(0x1) << TCPC_DCP1_SRCVBUS_Pos)                  /**< (TCPC_DCP1) Source VBUS Mask */
#define TCPC_DCP1_SRCVBUS(value)              (TCPC_DCP1_SRCVBUS_Msk & ((value) << TCPC_DCP1_SRCVBUS_Pos))
#define   TCPC_DCP1_SRCVBUS_0_Val             _U_(0x0)                                             /**< (TCPC_DCP1) TCPC is not capable of controlling the source path to VBUS.  */
#define   TCPC_DCP1_SRCVBUS_1_Val             _U_(0x1)                                             /**< (TCPC_DCP1) TCPC is capable of controlling the source path to VBUS.  */
#define TCPC_DCP1_SRCVBUS_0                   (TCPC_DCP1_SRCVBUS_0_Val << TCPC_DCP1_SRCVBUS_Pos)   /**< (TCPC_DCP1) TCPC is not capable of controlling the source path to VBUS. Position  */
#define TCPC_DCP1_SRCVBUS_1                   (TCPC_DCP1_SRCVBUS_1_Val << TCPC_DCP1_SRCVBUS_Pos)   /**< (TCPC_DCP1) TCPC is capable of controlling the source path to VBUS. Position  */
#define TCPC_DCP1_SRCHVBUS_Pos                _U_(1)                                               /**< (TCPC_DCP1) Source High Voltage VBUS Position */
#define TCPC_DCP1_SRCHVBUS_Msk                (_U_(0x1) << TCPC_DCP1_SRCHVBUS_Pos)                 /**< (TCPC_DCP1) Source High Voltage VBUS Mask */
#define TCPC_DCP1_SRCHVBUS(value)             (TCPC_DCP1_SRCHVBUS_Msk & ((value) << TCPC_DCP1_SRCHVBUS_Pos))
#define   TCPC_DCP1_SRCHVBUS_0_Val            _U_(0x0)                                             /**< (TCPC_DCP1) TCPC is not capable of controlling the source high voltage path to VBUS.  */
#define   TCPC_DCP1_SRCHVBUS_1_Val            _U_(0x1)                                             /**< (TCPC_DCP1) TCPC is capable of controlling the source high voltage path to VBUS.  */
#define TCPC_DCP1_SRCHVBUS_0                  (TCPC_DCP1_SRCHVBUS_0_Val << TCPC_DCP1_SRCHVBUS_Pos) /**< (TCPC_DCP1) TCPC is not capable of controlling the source high voltage path to VBUS. Position  */
#define TCPC_DCP1_SRCHVBUS_1                  (TCPC_DCP1_SRCHVBUS_1_Val << TCPC_DCP1_SRCHVBUS_Pos) /**< (TCPC_DCP1) TCPC is capable of controlling the source high voltage path to VBUS. Position  */
#define TCPC_DCP1_SNKVBUS_Pos                 _U_(2)                                               /**< (TCPC_DCP1) Sink VBUS Position */
#define TCPC_DCP1_SNKVBUS_Msk                 (_U_(0x1) << TCPC_DCP1_SNKVBUS_Pos)                  /**< (TCPC_DCP1) Sink VBUS Mask */
#define TCPC_DCP1_SNKVBUS(value)              (TCPC_DCP1_SNKVBUS_Msk & ((value) << TCPC_DCP1_SNKVBUS_Pos))
#define   TCPC_DCP1_SNKVBUS_0_Val             _U_(0x0)                                             /**< (TCPC_DCP1) TCPC is not capable controlling the sink path to the system load.  */
#define   TCPC_DCP1_SNKVBUS_1_Val             _U_(0x1)                                             /**< (TCPC_DCP1) TCPC is capable of controlling the sink path to the system load.  */
#define TCPC_DCP1_SNKVBUS_0                   (TCPC_DCP1_SNKVBUS_0_Val << TCPC_DCP1_SNKVBUS_Pos)   /**< (TCPC_DCP1) TCPC is not capable controlling the sink path to the system load. Position  */
#define TCPC_DCP1_SNKVBUS_1                   (TCPC_DCP1_SNKVBUS_1_Val << TCPC_DCP1_SNKVBUS_Pos)   /**< (TCPC_DCP1) TCPC is capable of controlling the sink path to the system load. Position  */
#define TCPC_DCP1_SRCVCN_Pos                  _U_(3)                                               /**< (TCPC_DCP1) Source VCONN Position */
#define TCPC_DCP1_SRCVCN_Msk                  (_U_(0x1) << TCPC_DCP1_SRCVCN_Pos)                   /**< (TCPC_DCP1) Source VCONN Mask */
#define TCPC_DCP1_SRCVCN(value)               (TCPC_DCP1_SRCVCN_Msk & ((value) << TCPC_DCP1_SRCVCN_Pos))
#define   TCPC_DCP1_SRCVCN_0_Val              _U_(0x0)                                             /**< (TCPC_DCP1) TCPC is not capable of switching VCONN.  */
#define   TCPC_DCP1_SRCVCN_1_Val              _U_(0x1)                                             /**< (TCPC_DCP1) TCPC is capable of switching VCONN.  */
#define TCPC_DCP1_SRCVCN_0                    (TCPC_DCP1_SRCVCN_0_Val << TCPC_DCP1_SRCVCN_Pos)     /**< (TCPC_DCP1) TCPC is not capable of switching VCONN. Position  */
#define TCPC_DCP1_SRCVCN_1                    (TCPC_DCP1_SRCVCN_1_Val << TCPC_DCP1_SRCVCN_Pos)     /**< (TCPC_DCP1) TCPC is capable of switching VCONN. Position  */
#define TCPC_DCP1_SOPDBG_Pos                  _U_(4)                                               /**< (TCPC_DCP1) SOP'_DBG/SOP''_DBG Support Position */
#define TCPC_DCP1_SOPDBG_Msk                  (_U_(0x1) << TCPC_DCP1_SOPDBG_Pos)                   /**< (TCPC_DCP1) SOP'_DBG/SOP''_DBG Support Mask */
#define TCPC_DCP1_SOPDBG(value)               (TCPC_DCP1_SOPDBG_Msk & ((value) << TCPC_DCP1_SOPDBG_Pos))
#define TCPC_DCP1_ROLES_Pos                   _U_(5)                                               /**< (TCPC_DCP1) Roles Supported Position */
#define TCPC_DCP1_ROLES_Msk                   (_U_(0x7) << TCPC_DCP1_ROLES_Pos)                    /**< (TCPC_DCP1) Roles Supported Mask */
#define TCPC_DCP1_ROLES(value)                (TCPC_DCP1_ROLES_Msk & ((value) << TCPC_DCP1_ROLES_Pos))
#define   TCPC_DCP1_ROLES_ROLE_SRCSNK_Val     _U_(0x0)                                             /**< (TCPC_DCP1) USB Type-C Port Manager can configure the Port as Source only or Sink only (not DRP)  */
#define   TCPC_DCP1_ROLES_ROLE_SRC_Val        _U_(0x1)                                             /**< (TCPC_DCP1) Source only  */
#define   TCPC_DCP1_ROLES_ROLE_SNK_Val        _U_(0x2)                                             /**< (TCPC_DCP1) Sink only  */
#define   TCPC_DCP1_ROLES_ROLE_SNK_ACC_Val    _U_(0x3)                                             /**< (TCPC_DCP1) Sink with accessory support  */
#define   TCPC_DCP1_ROLES_ROLE_DRP_Val        _U_(0x4)                                             /**< (TCPC_DCP1) DRP only  */
#define   TCPC_DCP1_ROLES_ROLE_ALL_Val        _U_(0x5)                                             /**< (TCPC_DCP1) Source, Sink, DRP, Adapter/Cable all supported  */
#define   TCPC_DCP1_ROLES_ROLE_SRCSNKDRP_Val  _U_(0x6)                                             /**< (TCPC_DCP1) Source, Sink, DRP  */
#define   TCPC_DCP1_ROLES_ROLE_INVALID_Val    _U_(0x7)                                             /**< (TCPC_DCP1) Not valid  */
#define TCPC_DCP1_ROLES_ROLE_SRCSNK           (TCPC_DCP1_ROLES_ROLE_SRCSNK_Val << TCPC_DCP1_ROLES_Pos) /**< (TCPC_DCP1) USB Type-C Port Manager can configure the Port as Source only or Sink only (not DRP) Position  */
#define TCPC_DCP1_ROLES_ROLE_SRC              (TCPC_DCP1_ROLES_ROLE_SRC_Val << TCPC_DCP1_ROLES_Pos) /**< (TCPC_DCP1) Source only Position  */
#define TCPC_DCP1_ROLES_ROLE_SNK              (TCPC_DCP1_ROLES_ROLE_SNK_Val << TCPC_DCP1_ROLES_Pos) /**< (TCPC_DCP1) Sink only Position  */
#define TCPC_DCP1_ROLES_ROLE_SNK_ACC          (TCPC_DCP1_ROLES_ROLE_SNK_ACC_Val << TCPC_DCP1_ROLES_Pos) /**< (TCPC_DCP1) Sink with accessory support Position  */
#define TCPC_DCP1_ROLES_ROLE_DRP              (TCPC_DCP1_ROLES_ROLE_DRP_Val << TCPC_DCP1_ROLES_Pos) /**< (TCPC_DCP1) DRP only Position  */
#define TCPC_DCP1_ROLES_ROLE_ALL              (TCPC_DCP1_ROLES_ROLE_ALL_Val << TCPC_DCP1_ROLES_Pos) /**< (TCPC_DCP1) Source, Sink, DRP, Adapter/Cable all supported Position  */
#define TCPC_DCP1_ROLES_ROLE_SRCSNKDRP        (TCPC_DCP1_ROLES_ROLE_SRCSNKDRP_Val << TCPC_DCP1_ROLES_Pos) /**< (TCPC_DCP1) Source, Sink, DRP Position  */
#define TCPC_DCP1_ROLES_ROLE_INVALID          (TCPC_DCP1_ROLES_ROLE_INVALID_Val << TCPC_DCP1_ROLES_Pos) /**< (TCPC_DCP1) Not valid Position  */
#define TCPC_DCP1_SRCRES_Pos                  _U_(8)                                               /**< (TCPC_DCP1) Source Resistor Supported Position */
#define TCPC_DCP1_SRCRES_Msk                  (_U_(0x3) << TCPC_DCP1_SRCRES_Pos)                   /**< (TCPC_DCP1) Source Resistor Supported Mask */
#define TCPC_DCP1_SRCRES(value)               (TCPC_DCP1_SRCRES_Msk & ((value) << TCPC_DCP1_SRCRES_Pos))
#define   TCPC_DCP1_SRCRES_RES_RPDEF_Val      _U_(0x0)                                             /**< (TCPC_DCP1) Rp default only  */
#define   TCPC_DCP1_SRCRES_RES_RP1P5_Val      _U_(0x1)                                             /**< (TCPC_DCP1) Rp 1.5A and default  */
#define   TCPC_DCP1_SRCRES_RES_RP3_Val        _U_(0x2)                                             /**< (TCPC_DCP1) Rp 3.0A, 1.5A, and default  */
#define TCPC_DCP1_SRCRES_RES_RPDEF            (TCPC_DCP1_SRCRES_RES_RPDEF_Val << TCPC_DCP1_SRCRES_Pos) /**< (TCPC_DCP1) Rp default only Position  */
#define TCPC_DCP1_SRCRES_RES_RP1P5            (TCPC_DCP1_SRCRES_RES_RP1P5_Val << TCPC_DCP1_SRCRES_Pos) /**< (TCPC_DCP1) Rp 1.5A and default Position  */
#define TCPC_DCP1_SRCRES_RES_RP3              (TCPC_DCP1_SRCRES_RES_RP3_Val << TCPC_DCP1_SRCRES_Pos) /**< (TCPC_DCP1) Rp 3.0A, 1.5A, and default Position  */
#define TCPC_DCP1_VBUSMSRAL_Pos               _U_(10)                                              /**< (TCPC_DCP1) VBUS Measurement and Alarm Capable Position */
#define TCPC_DCP1_VBUSMSRAL_Msk               (_U_(0x1) << TCPC_DCP1_VBUSMSRAL_Pos)                /**< (TCPC_DCP1) VBUS Measurement and Alarm Capable Mask */
#define TCPC_DCP1_VBUSMSRAL(value)            (TCPC_DCP1_VBUSMSRAL_Msk & ((value) << TCPC_DCP1_VBUSMSRAL_Pos))
#define   TCPC_DCP1_VBUSMSRAL_0_Val           _U_(0x0)                                             /**< (TCPC_DCP1) No VBUS voltage measurement nor VBUS alarms.  */
#define   TCPC_DCP1_VBUSMSRAL_1_Val           _U_(0x1)                                             /**< (TCPC_DCP1) VBUS voltage measurement and VBUS alarms.  */
#define TCPC_DCP1_VBUSMSRAL_0                 (TCPC_DCP1_VBUSMSRAL_0_Val << TCPC_DCP1_VBUSMSRAL_Pos) /**< (TCPC_DCP1) No VBUS voltage measurement nor VBUS alarms. Position  */
#define TCPC_DCP1_VBUSMSRAL_1                 (TCPC_DCP1_VBUSMSRAL_1_Val << TCPC_DCP1_VBUSMSRAL_Pos) /**< (TCPC_DCP1) VBUS voltage measurement and VBUS alarms. Position  */
#define TCPC_DCP1_FRCDCH_Pos                  _U_(11)                                              /**< (TCPC_DCP1) Force Discharge Position */
#define TCPC_DCP1_FRCDCH_Msk                  (_U_(0x1) << TCPC_DCP1_FRCDCH_Pos)                   /**< (TCPC_DCP1) Force Discharge Mask */
#define TCPC_DCP1_FRCDCH(value)               (TCPC_DCP1_FRCDCH_Msk & ((value) << TCPC_DCP1_FRCDCH_Pos))
#define   TCPC_DCP1_FRCDCH_0_Val              _U_(0x0)                                             /**< (TCPC_DCP1) No force discharge implemented in TCPC.  */
#define   TCPC_DCP1_FRCDCH_1_Val              _U_(0x1)                                             /**< (TCPC_DCP1) Force discharge is implemented in the TCPC.  */
#define TCPC_DCP1_FRCDCH_0                    (TCPC_DCP1_FRCDCH_0_Val << TCPC_DCP1_FRCDCH_Pos)     /**< (TCPC_DCP1) No force discharge implemented in TCPC. Position  */
#define TCPC_DCP1_FRCDCH_1                    (TCPC_DCP1_FRCDCH_1_Val << TCPC_DCP1_FRCDCH_Pos)     /**< (TCPC_DCP1) Force discharge is implemented in the TCPC. Position  */
#define TCPC_DCP1_BLDDCH_Pos                  _U_(12)                                              /**< (TCPC_DCP1) Bleed Discharge Position */
#define TCPC_DCP1_BLDDCH_Msk                  (_U_(0x1) << TCPC_DCP1_BLDDCH_Pos)                   /**< (TCPC_DCP1) Bleed Discharge Mask */
#define TCPC_DCP1_BLDDCH(value)               (TCPC_DCP1_BLDDCH_Msk & ((value) << TCPC_DCP1_BLDDCH_Pos))
#define   TCPC_DCP1_BLDDCH_0_Val              _U_(0x0)                                             /**< (TCPC_DCP1) No bleed discharge implemented in TCPC.  */
#define   TCPC_DCP1_BLDDCH_1_Val              _U_(0x1)                                             /**< (TCPC_DCP1) Bleed discharge is implemented in the TCPC.  */
#define TCPC_DCP1_BLDDCH_0                    (TCPC_DCP1_BLDDCH_0_Val << TCPC_DCP1_BLDDCH_Pos)     /**< (TCPC_DCP1) No bleed discharge implemented in TCPC. Position  */
#define TCPC_DCP1_BLDDCH_1                    (TCPC_DCP1_BLDDCH_1_Val << TCPC_DCP1_BLDDCH_Pos)     /**< (TCPC_DCP1) Bleed discharge is implemented in the TCPC. Position  */
#define TCPC_DCP1_VBUSOVPR_Pos                _U_(13)                                              /**< (TCPC_DCP1) VBUS OVP Reporting Position */
#define TCPC_DCP1_VBUSOVPR_Msk                (_U_(0x1) << TCPC_DCP1_VBUSOVPR_Pos)                 /**< (TCPC_DCP1) VBUS OVP Reporting Mask */
#define TCPC_DCP1_VBUSOVPR(value)             (TCPC_DCP1_VBUSOVPR_Msk & ((value) << TCPC_DCP1_VBUSOVPR_Pos))
#define   TCPC_DCP1_VBUSOVPR_0_Val            _U_(0x0)                                             /**< (TCPC_DCP1) VBUS OVP is not reported by the TCPC.  */
#define   TCPC_DCP1_VBUSOVPR_1_Val            _U_(0x1)                                             /**< (TCPC_DCP1) VBUS OVP is reported by the TCPC.  */
#define TCPC_DCP1_VBUSOVPR_0                  (TCPC_DCP1_VBUSOVPR_0_Val << TCPC_DCP1_VBUSOVPR_Pos) /**< (TCPC_DCP1) VBUS OVP is not reported by the TCPC. Position  */
#define TCPC_DCP1_VBUSOVPR_1                  (TCPC_DCP1_VBUSOVPR_1_Val << TCPC_DCP1_VBUSOVPR_Pos) /**< (TCPC_DCP1) VBUS OVP is reported by the TCPC. Position  */
#define TCPC_DCP1_VBUSOCPR_Pos                _U_(14)                                              /**< (TCPC_DCP1) VBUS OCP Reporting Position */
#define TCPC_DCP1_VBUSOCPR_Msk                (_U_(0x1) << TCPC_DCP1_VBUSOCPR_Pos)                 /**< (TCPC_DCP1) VBUS OCP Reporting Mask */
#define TCPC_DCP1_VBUSOCPR(value)             (TCPC_DCP1_VBUSOCPR_Msk & ((value) << TCPC_DCP1_VBUSOCPR_Pos))
#define   TCPC_DCP1_VBUSOCPR_0_Val            _U_(0x0)                                             /**< (TCPC_DCP1) VBUS OCP is not reported by the TCPC.  */
#define   TCPC_DCP1_VBUSOCPR_1_Val            _U_(0x1)                                             /**< (TCPC_DCP1) VBUS OCP is reported by the TCPC.  */
#define TCPC_DCP1_VBUSOCPR_0                  (TCPC_DCP1_VBUSOCPR_0_Val << TCPC_DCP1_VBUSOCPR_Pos) /**< (TCPC_DCP1) VBUS OCP is not reported by the TCPC. Position  */
#define TCPC_DCP1_VBUSOCPR_1                  (TCPC_DCP1_VBUSOCPR_1_Val << TCPC_DCP1_VBUSOCPR_Pos) /**< (TCPC_DCP1) VBUS OCP is reported by the TCPC. Position  */
#define TCPC_DCP1_Msk                         _U_(0x7FFF)                                          /**< (TCPC_DCP1) Register Mask  */


/* -------- TCPC_DCP2 : (TCPC Offset: 0x26) (R/W 16) Device Capabilities 2 Register -------- */
#define TCPC_DCP2_RESETVALUE                  _U_(0x00)                                            /**<  (TCPC_DCP2) Device Capabilities 2 Register  Reset Value */

#define TCPC_DCP2_VCOFC_Pos                   _U_(0)                                               /**< (TCPC_DCP2) VCONN Overcurrent Fault Capable Position */
#define TCPC_DCP2_VCOFC_Msk                   (_U_(0x1) << TCPC_DCP2_VCOFC_Pos)                    /**< (TCPC_DCP2) VCONN Overcurrent Fault Capable Mask */
#define TCPC_DCP2_VCOFC(value)                (TCPC_DCP2_VCOFC_Msk & ((value) << TCPC_DCP2_VCOFC_Pos))
#define TCPC_DCP2_VCPSP_Pos                   _U_(1)                                               /**< (TCPC_DCP2) VCONN Power Supported Position */
#define TCPC_DCP2_VCPSP_Msk                   (_U_(0x7) << TCPC_DCP2_VCPSP_Pos)                    /**< (TCPC_DCP2) VCONN Power Supported Mask */
#define TCPC_DCP2_VCPSP(value)                (TCPC_DCP2_VCPSP_Msk & ((value) << TCPC_DCP2_VCPSP_Pos))
#define TCPC_DCP2_VBUSVALSB_Pos               _U_(4)                                               /**< (TCPC_DCP2) VBUS Voltage Alarm LSB Position */
#define TCPC_DCP2_VBUSVALSB_Msk               (_U_(0x3) << TCPC_DCP2_VBUSVALSB_Pos)                /**< (TCPC_DCP2) VBUS Voltage Alarm LSB Mask */
#define TCPC_DCP2_VBUSVALSB(value)            (TCPC_DCP2_VBUSVALSB_Msk & ((value) << TCPC_DCP2_VBUSVALSB_Pos))
#define TCPC_DCP2_STPDSCHTH_Pos               _U_(6)                                               /**< (TCPC_DCP2) Stop Discharge Threshold Position */
#define TCPC_DCP2_STPDSCHTH_Msk               (_U_(0x1) << TCPC_DCP2_STPDSCHTH_Pos)                /**< (TCPC_DCP2) Stop Discharge Threshold Mask */
#define TCPC_DCP2_STPDSCHTH(value)            (TCPC_DCP2_STPDSCHTH_Msk & ((value) << TCPC_DCP2_STPDSCHTH_Pos))
#define TCPC_DCP2_SKDSCDET_Pos                _U_(7)                                               /**< (TCPC_DCP2) Sink Disconnect Detection Position */
#define TCPC_DCP2_SKDSCDET_Msk                (_U_(0x1) << TCPC_DCP2_SKDSCDET_Pos)                 /**< (TCPC_DCP2) Sink Disconnect Detection Mask */
#define TCPC_DCP2_SKDSCDET(value)             (TCPC_DCP2_SKDSCDET_Msk & ((value) << TCPC_DCP2_SKDSCDET_Pos))
#define   TCPC_DCP2_SKDSCDET_0_Val            _U_(0x0)                                             /**< (TCPC_DCP2) VBUS_SINK_DISCONNECT_THRESHOLD not implemented (default: Use TCPC_PS.VBUS=0b to indicate a Sink disconnect).  */
#define   TCPC_DCP2_SKDSCDET_1_Val            _U_(0x1)                                             /**< (TCPC_DCP2) VBUS_SINK_DISCONNECT_THRESHOLD implemented.  */
#define TCPC_DCP2_SKDSCDET_0                  (TCPC_DCP2_SKDSCDET_0_Val << TCPC_DCP2_SKDSCDET_Pos) /**< (TCPC_DCP2) VBUS_SINK_DISCONNECT_THRESHOLD not implemented (default: Use TCPC_PS.VBUS=0b to indicate a Sink disconnect). Position  */
#define TCPC_DCP2_SKDSCDET_1                  (TCPC_DCP2_SKDSCDET_1_Val << TCPC_DCP2_SKDSCDET_Pos) /**< (TCPC_DCP2) VBUS_SINK_DISCONNECT_THRESHOLD implemented. Position  */
#define TCPC_DCP2_WDTMR_Pos                   _U_(8)                                               /**< (TCPC_DCP2) Watchdog Timer Position */
#define TCPC_DCP2_WDTMR_Msk                   (_U_(0x1) << TCPC_DCP2_WDTMR_Pos)                    /**< (TCPC_DCP2) Watchdog Timer Mask */
#define TCPC_DCP2_WDTMR(value)                (TCPC_DCP2_WDTMR_Msk & ((value) << TCPC_DCP2_WDTMR_Pos))
#define   TCPC_DCP2_WDTMR_0_Val               _U_(0x0)                                             /**< (TCPC_DCP2) Enable Watchdog Timer not implemented.  */
#define   TCPC_DCP2_WDTMR_1_Val               _U_(0x1)                                             /**< (TCPC_DCP2) Enable Watchdog Timer implemented.  */
#define TCPC_DCP2_WDTMR_0                     (TCPC_DCP2_WDTMR_0_Val << TCPC_DCP2_WDTMR_Pos)       /**< (TCPC_DCP2) Enable Watchdog Timer not implemented. Position  */
#define TCPC_DCP2_WDTMR_1                     (TCPC_DCP2_WDTMR_1_Val << TCPC_DCP2_WDTMR_Pos)       /**< (TCPC_DCP2) Enable Watchdog Timer implemented. Position  */
#define TCPC_DCP2_Msk                         _U_(0x01FF)                                          /**< (TCPC_DCP2) Register Mask  */


/* -------- TCPC_SIC : (TCPC Offset: 0x28) (R/W 8) Standard Input Capabilities Register -------- */
#define TCPC_SIC_RESETVALUE                   _U_(0x00)                                            /**<  (TCPC_SIC) Standard Input Capabilities Register  Reset Value */

#define TCPC_SIC_FOFVBUS_Pos                  _U_(0)                                               /**< (TCPC_SIC) Force Off VBUS (Source or Sink) Position */
#define TCPC_SIC_FOFVBUS_Msk                  (_U_(0x1) << TCPC_SIC_FOFVBUS_Pos)                   /**< (TCPC_SIC) Force Off VBUS (Source or Sink) Mask */
#define TCPC_SIC_FOFVBUS(value)               (TCPC_SIC_FOFVBUS_Msk & ((value) << TCPC_SIC_FOFVBUS_Pos))
#define   TCPC_SIC_FOFVBUS_0_Val              _U_(0x0)                                             /**< (TCPC_SIC) Not present in TCPC.  */
#define   TCPC_SIC_FOFVBUS_1_Val              _U_(0x1)                                             /**< (TCPC_SIC) Present in TCPC.  */
#define TCPC_SIC_FOFVBUS_0                    (TCPC_SIC_FOFVBUS_0_Val << TCPC_SIC_FOFVBUS_Pos)     /**< (TCPC_SIC) Not present in TCPC. Position  */
#define TCPC_SIC_FOFVBUS_1                    (TCPC_SIC_FOFVBUS_1_Val << TCPC_SIC_FOFVBUS_Pos)     /**< (TCPC_SIC) Present in TCPC. Position  */
#define TCPC_SIC_VBUSEOCF_Pos                 _U_(1)                                               /**< (TCPC_SIC) VBUS External Over-Current Fault Position */
#define TCPC_SIC_VBUSEOCF_Msk                 (_U_(0x1) << TCPC_SIC_VBUSEOCF_Pos)                  /**< (TCPC_SIC) VBUS External Over-Current Fault Mask */
#define TCPC_SIC_VBUSEOCF(value)              (TCPC_SIC_VBUSEOCF_Msk & ((value) << TCPC_SIC_VBUSEOCF_Pos))
#define   TCPC_SIC_VBUSEOCF_0_Val             _U_(0x0)                                             /**< (TCPC_SIC) Not present in TCPC.  */
#define   TCPC_SIC_VBUSEOCF_1_Val             _U_(0x1)                                             /**< (TCPC_SIC) Present in TCPC.  */
#define TCPC_SIC_VBUSEOCF_0                   (TCPC_SIC_VBUSEOCF_0_Val << TCPC_SIC_VBUSEOCF_Pos)   /**< (TCPC_SIC) Not present in TCPC. Position  */
#define TCPC_SIC_VBUSEOCF_1                   (TCPC_SIC_VBUSEOCF_1_Val << TCPC_SIC_VBUSEOCF_Pos)   /**< (TCPC_SIC) Present in TCPC. Position  */
#define TCPC_SIC_VBUSEOVF_Pos                 _U_(2)                                               /**< (TCPC_SIC) VBUS External Over-Voltage Fault Position */
#define TCPC_SIC_VBUSEOVF_Msk                 (_U_(0x1) << TCPC_SIC_VBUSEOVF_Pos)                  /**< (TCPC_SIC) VBUS External Over-Voltage Fault Mask */
#define TCPC_SIC_VBUSEOVF(value)              (TCPC_SIC_VBUSEOVF_Msk & ((value) << TCPC_SIC_VBUSEOVF_Pos))
#define   TCPC_SIC_VBUSEOVF_0_Val             _U_(0x0)                                             /**< (TCPC_SIC) Not present in TCPC.  */
#define   TCPC_SIC_VBUSEOVF_1_Val             _U_(0x1)                                             /**< (TCPC_SIC) Present in TCPC.  */
#define TCPC_SIC_VBUSEOVF_0                   (TCPC_SIC_VBUSEOVF_0_Val << TCPC_SIC_VBUSEOVF_Pos)   /**< (TCPC_SIC) Not present in TCPC. Position  */
#define TCPC_SIC_VBUSEOVF_1                   (TCPC_SIC_VBUSEOVF_1_Val << TCPC_SIC_VBUSEOVF_Pos)   /**< (TCPC_SIC) Present in TCPC. Position  */
#define TCPC_SIC_Msk                          _U_(0x07)                                            /**< (TCPC_SIC) Register Mask  */


/* -------- TCPC_SOC : (TCPC Offset: 0x29) (R/W 8) Standard Output Capabilities Register -------- */
#define TCPC_SOC_RESETVALUE                   _U_(0x00)                                            /**<  (TCPC_SOC) Standard Output Capabilities Register  Reset Value */

#define TCPC_SOC_CNROR_Pos                    _U_(0)                                               /**< (TCPC_SOC) Connector Orientation Position */
#define TCPC_SOC_CNROR_Msk                    (_U_(0x1) << TCPC_SOC_CNROR_Pos)                     /**< (TCPC_SOC) Connector Orientation Mask */
#define TCPC_SOC_CNROR(value)                 (TCPC_SOC_CNROR_Msk & ((value) << TCPC_SOC_CNROR_Pos))
#define   TCPC_SOC_CNROR_0_Val                _U_(0x0)                                             /**< (TCPC_SOC) Not present in TCPC.  */
#define   TCPC_SOC_CNROR_1_Val                _U_(0x1)                                             /**< (TCPC_SOC) Present in TCPC.  */
#define TCPC_SOC_CNROR_0                      (TCPC_SOC_CNROR_0_Val << TCPC_SOC_CNROR_Pos)         /**< (TCPC_SOC) Not present in TCPC. Position  */
#define TCPC_SOC_CNROR_1                      (TCPC_SOC_CNROR_1_Val << TCPC_SOC_CNROR_Pos)         /**< (TCPC_SOC) Present in TCPC. Position  */
#define TCPC_SOC_CNXPR_Pos                    _U_(1)                                               /**< (TCPC_SOC) Connection Present Position */
#define TCPC_SOC_CNXPR_Msk                    (_U_(0x1) << TCPC_SOC_CNXPR_Pos)                     /**< (TCPC_SOC) Connection Present Mask */
#define TCPC_SOC_CNXPR(value)                 (TCPC_SOC_CNXPR_Msk & ((value) << TCPC_SOC_CNXPR_Pos))
#define   TCPC_SOC_CNXPR_0_Val                _U_(0x0)                                             /**< (TCPC_SOC) No connection.  */
#define   TCPC_SOC_CNXPR_1_Val                _U_(0x1)                                             /**< (TCPC_SOC) Connection.  */
#define TCPC_SOC_CNXPR_0                      (TCPC_SOC_CNXPR_0_Val << TCPC_SOC_CNXPR_Pos)         /**< (TCPC_SOC) No connection. Position  */
#define TCPC_SOC_CNXPR_1                      (TCPC_SOC_CNXPR_1_Val << TCPC_SOC_CNXPR_Pos)         /**< (TCPC_SOC) Connection. Position  */
#define TCPC_SOC_MXCFGCTL_Pos                 _U_(2)                                               /**< (TCPC_SOC) MUX Configuration Control Position */
#define TCPC_SOC_MXCFGCTL_Msk                 (_U_(0x1) << TCPC_SOC_MXCFGCTL_Pos)                  /**< (TCPC_SOC) MUX Configuration Control Mask */
#define TCPC_SOC_MXCFGCTL(value)              (TCPC_SOC_MXCFGCTL_Msk & ((value) << TCPC_SOC_MXCFGCTL_Pos))
#define   TCPC_SOC_MXCFGCTL_0_Val             _U_(0x0)                                             /**< (TCPC_SOC) Not present in TCPC.  */
#define   TCPC_SOC_MXCFGCTL_1_Val             _U_(0x1)                                             /**< (TCPC_SOC) Present in TCPC.  */
#define TCPC_SOC_MXCFGCTL_0                   (TCPC_SOC_MXCFGCTL_0_Val << TCPC_SOC_MXCFGCTL_Pos)   /**< (TCPC_SOC) Not present in TCPC. Position  */
#define TCPC_SOC_MXCFGCTL_1                   (TCPC_SOC_MXCFGCTL_1_Val << TCPC_SOC_MXCFGCTL_Pos)   /**< (TCPC_SOC) Present in TCPC. Position  */
#define TCPC_SOC_ACI_Pos                      _U_(3)                                               /**< (TCPC_SOC) Active Cable Indicator Position */
#define TCPC_SOC_ACI_Msk                      (_U_(0x1) << TCPC_SOC_ACI_Pos)                       /**< (TCPC_SOC) Active Cable Indicator Mask */
#define TCPC_SOC_ACI(value)                   (TCPC_SOC_ACI_Msk & ((value) << TCPC_SOC_ACI_Pos))  
#define   TCPC_SOC_ACI_0_Val                  _U_(0x0)                                             /**< (TCPC_SOC) Not present in TCPC.  */
#define   TCPC_SOC_ACI_1_Val                  _U_(0x1)                                             /**< (TCPC_SOC) Present in TCPC.  */
#define TCPC_SOC_ACI_0                        (TCPC_SOC_ACI_0_Val << TCPC_SOC_ACI_Pos)             /**< (TCPC_SOC) Not present in TCPC. Position  */
#define TCPC_SOC_ACI_1                        (TCPC_SOC_ACI_1_Val << TCPC_SOC_ACI_Pos)             /**< (TCPC_SOC) Present in TCPC. Position  */
#define TCPC_SOC_AAAI_Pos                     _U_(4)                                               /**< (TCPC_SOC) Audio Adapter Accessory Indicator Position */
#define TCPC_SOC_AAAI_Msk                     (_U_(0x1) << TCPC_SOC_AAAI_Pos)                      /**< (TCPC_SOC) Audio Adapter Accessory Indicator Mask */
#define TCPC_SOC_AAAI(value)                  (TCPC_SOC_AAAI_Msk & ((value) << TCPC_SOC_AAAI_Pos))
#define   TCPC_SOC_AAAI_0_Val                 _U_(0x0)                                             /**< (TCPC_SOC) Not present in TCPC.  */
#define   TCPC_SOC_AAAI_1_Val                 _U_(0x1)                                             /**< (TCPC_SOC) Present in TCPC.  */
#define TCPC_SOC_AAAI_0                       (TCPC_SOC_AAAI_0_Val << TCPC_SOC_AAAI_Pos)           /**< (TCPC_SOC) Not present in TCPC. Position  */
#define TCPC_SOC_AAAI_1                       (TCPC_SOC_AAAI_1_Val << TCPC_SOC_AAAI_Pos)           /**< (TCPC_SOC) Present in TCPC. Position  */
#define TCPC_SOC_VBUSPM_Pos                   _U_(5)                                               /**< (TCPC_SOC) VBUS Present Monitor Position */
#define TCPC_SOC_VBUSPM_Msk                   (_U_(0x1) << TCPC_SOC_VBUSPM_Pos)                    /**< (TCPC_SOC) VBUS Present Monitor Mask */
#define TCPC_SOC_VBUSPM(value)                (TCPC_SOC_VBUSPM_Msk & ((value) << TCPC_SOC_VBUSPM_Pos))
#define   TCPC_SOC_VBUSPM_0_Val               _U_(0x0)                                             /**< (TCPC_SOC) Not present in TCPC.  */
#define   TCPC_SOC_VBUSPM_1_Val               _U_(0x1)                                             /**< (TCPC_SOC) Present in TCPC.  */
#define TCPC_SOC_VBUSPM_0                     (TCPC_SOC_VBUSPM_0_Val << TCPC_SOC_VBUSPM_Pos)       /**< (TCPC_SOC) Not present in TCPC. Position  */
#define TCPC_SOC_VBUSPM_1                     (TCPC_SOC_VBUSPM_1_Val << TCPC_SOC_VBUSPM_Pos)       /**< (TCPC_SOC) Present in TCPC. Position  */
#define TCPC_SOC_DBGAI_Pos                    _U_(6)                                               /**< (TCPC_SOC) Debug Accessory Indicator Position */
#define TCPC_SOC_DBGAI_Msk                    (_U_(0x1) << TCPC_SOC_DBGAI_Pos)                     /**< (TCPC_SOC) Debug Accessory Indicator Mask */
#define TCPC_SOC_DBGAI(value)                 (TCPC_SOC_DBGAI_Msk & ((value) << TCPC_SOC_DBGAI_Pos))
#define   TCPC_SOC_DBGAI_0_Val                _U_(0x0)                                             /**< (TCPC_SOC) Not present in TCPC.  */
#define   TCPC_SOC_DBGAI_1_Val                _U_(0x1)                                             /**< (TCPC_SOC) Present in TCPC.  */
#define TCPC_SOC_DBGAI_0                      (TCPC_SOC_DBGAI_0_Val << TCPC_SOC_DBGAI_Pos)         /**< (TCPC_SOC) Not present in TCPC. Position  */
#define TCPC_SOC_DBGAI_1                      (TCPC_SOC_DBGAI_1_Val << TCPC_SOC_DBGAI_Pos)         /**< (TCPC_SOC) Present in TCPC. Position  */
#define TCPC_SOC_Msk                          _U_(0x7F)                                            /**< (TCPC_SOC) Register Mask  */


/* -------- TCPC_CR : (TCPC Offset: 0x80) ( /W 32) Control Register -------- */
#define TCPC_CR_SWRST_Pos                     _U_(0)                                               /**< (TCPC_CR) Software Reset Position */
#define TCPC_CR_SWRST_Msk                     (_U_(0x1) << TCPC_CR_SWRST_Pos)                      /**< (TCPC_CR) Software Reset Mask */
#define TCPC_CR_SWRST(value)                  (TCPC_CR_SWRST_Msk & ((value) << TCPC_CR_SWRST_Pos))
#define   TCPC_CR_SWRST_0_Val                 _U_(0x0)                                             /**< (TCPC_CR) No effect.  */
#define   TCPC_CR_SWRST_1_Val                 _U_(0x1)                                             /**< (TCPC_CR) Resets the TCPC. A software-triggered hardware reset of the TCPC interface is performed.  */
#define TCPC_CR_SWRST_0                       (TCPC_CR_SWRST_0_Val << TCPC_CR_SWRST_Pos)           /**< (TCPC_CR) No effect. Position  */
#define TCPC_CR_SWRST_1                       (TCPC_CR_SWRST_1_Val << TCPC_CR_SWRST_Pos)           /**< (TCPC_CR) Resets the TCPC. A software-triggered hardware reset of the TCPC interface is performed. Position  */
#define TCPC_CR_WAKEY_Pos                     _U_(8)                                               /**< (TCPC_CR) Register Write Access Key Position */
#define TCPC_CR_WAKEY_Msk                     (_U_(0xFFFFFF) << TCPC_CR_WAKEY_Pos)                 /**< (TCPC_CR) Register Write Access Key Mask */
#define TCPC_CR_WAKEY(value)                  (TCPC_CR_WAKEY_Msk & ((value) << TCPC_CR_WAKEY_Pos))
#define   TCPC_CR_WAKEY_PASSWD_Val            _U_(0x544343)                                        /**< (TCPC_CR) Writing any other value in this field aborts the write operation.  */
#define TCPC_CR_WAKEY_PASSWD                  (TCPC_CR_WAKEY_PASSWD_Val << TCPC_CR_WAKEY_Pos)      /**< (TCPC_CR) Writing any other value in this field aborts the write operation. Position  */
#define TCPC_CR_Msk                           _U_(0xFFFFFF01)                                      /**< (TCPC_CR) Register Mask  */


/* -------- TCPC_SSR : (TCPC Offset: 0x84) ( /W 32) Set Status Register -------- */
#define TCPC_SSR_CC_STATUS_Pos                _U_(8)                                               /**< (TCPC_SSR) CC Status Register Set Position */
#define TCPC_SSR_CC_STATUS_Msk                (_U_(0xFF) << TCPC_SSR_CC_STATUS_Pos)                /**< (TCPC_SSR) CC Status Register Set Mask */
#define TCPC_SSR_CC_STATUS(value)             (TCPC_SSR_CC_STATUS_Msk & ((value) << TCPC_SSR_CC_STATUS_Pos))
#define   TCPC_SSR_CC_STATUS_0_Val            _U_(0x0)                                             /**< (TCPC_SSR) No effect.  */
#define   TCPC_SSR_CC_STATUS_1_Val            _U_(0x1)                                             /**< (TCPC_SSR) Sets the corresponding bit in TCPC_CCS and the CC_ST bit in TCPC_AL.  */
#define TCPC_SSR_CC_STATUS_0                  (TCPC_SSR_CC_STATUS_0_Val << TCPC_SSR_CC_STATUS_Pos) /**< (TCPC_SSR) No effect. Position  */
#define TCPC_SSR_CC_STATUS_1                  (TCPC_SSR_CC_STATUS_1_Val << TCPC_SSR_CC_STATUS_Pos) /**< (TCPC_SSR) Sets the corresponding bit in TCPC_CCS and the CC_ST bit in TCPC_AL. Position  */
#define TCPC_SSR_POWER_STATUS_Pos             _U_(16)                                              /**< (TCPC_SSR) Power Status Register Set Position */
#define TCPC_SSR_POWER_STATUS_Msk             (_U_(0xFF) << TCPC_SSR_POWER_STATUS_Pos)             /**< (TCPC_SSR) Power Status Register Set Mask */
#define TCPC_SSR_POWER_STATUS(value)          (TCPC_SSR_POWER_STATUS_Msk & ((value) << TCPC_SSR_POWER_STATUS_Pos))
#define   TCPC_SSR_POWER_STATUS_0_Val         _U_(0x0)                                             /**< (TCPC_SSR) No effect.  */
#define   TCPC_SSR_POWER_STATUS_1_Val         _U_(0x1)                                             /**< (TCPC_SSR) Sets the corresponding bit in TCPC_PS and the PWR_ST bit in TCPC_AL.  */
#define TCPC_SSR_POWER_STATUS_0               (TCPC_SSR_POWER_STATUS_0_Val << TCPC_SSR_POWER_STATUS_Pos) /**< (TCPC_SSR) No effect. Position  */
#define TCPC_SSR_POWER_STATUS_1               (TCPC_SSR_POWER_STATUS_1_Val << TCPC_SSR_POWER_STATUS_Pos) /**< (TCPC_SSR) Sets the corresponding bit in TCPC_PS and the PWR_ST bit in TCPC_AL. Position  */
#define TCPC_SSR_FAULT_STATUS_Pos             _U_(24)                                              /**< (TCPC_SSR) Fault Status Register Set Position */
#define TCPC_SSR_FAULT_STATUS_Msk             (_U_(0xFF) << TCPC_SSR_FAULT_STATUS_Pos)             /**< (TCPC_SSR) Fault Status Register Set Mask */
#define TCPC_SSR_FAULT_STATUS(value)          (TCPC_SSR_FAULT_STATUS_Msk & ((value) << TCPC_SSR_FAULT_STATUS_Pos))
#define   TCPC_SSR_FAULT_STATUS_0_Val         _U_(0x0)                                             /**< (TCPC_SSR) No effect.  */
#define   TCPC_SSR_FAULT_STATUS_1_Val         _U_(0x1)                                             /**< (TCPC_SSR) Sets the corresponding bit in TCPC_FS and the FLT_ST bit in TCPC_AL.  */
#define TCPC_SSR_FAULT_STATUS_0               (TCPC_SSR_FAULT_STATUS_0_Val << TCPC_SSR_FAULT_STATUS_Pos) /**< (TCPC_SSR) No effect. Position  */
#define TCPC_SSR_FAULT_STATUS_1               (TCPC_SSR_FAULT_STATUS_1_Val << TCPC_SSR_FAULT_STATUS_Pos) /**< (TCPC_SSR) Sets the corresponding bit in TCPC_FS and the FLT_ST bit in TCPC_AL. Position  */
#define TCPC_SSR_Msk                          _U_(0xFFFFFF00)                                      /**< (TCPC_SSR) Register Mask  */


/* -------- TCPC_CSR : (TCPC Offset: 0x88) ( /W 32) Clear Status Register -------- */
#define TCPC_CSR_CC_STATUS_Pos                _U_(8)                                               /**< (TCPC_CSR) CC Status Register Clear Position */
#define TCPC_CSR_CC_STATUS_Msk                (_U_(0xFF) << TCPC_CSR_CC_STATUS_Pos)                /**< (TCPC_CSR) CC Status Register Clear Mask */
#define TCPC_CSR_CC_STATUS(value)             (TCPC_CSR_CC_STATUS_Msk & ((value) << TCPC_CSR_CC_STATUS_Pos))
#define   TCPC_CSR_CC_STATUS_0_Val            _U_(0x0)                                             /**< (TCPC_CSR) No effect.  */
#define   TCPC_CSR_CC_STATUS_1_Val            _U_(0x1)                                             /**< (TCPC_CSR) Clears the corresponding bit in TCPC_CCS.  */
#define TCPC_CSR_CC_STATUS_0                  (TCPC_CSR_CC_STATUS_0_Val << TCPC_CSR_CC_STATUS_Pos) /**< (TCPC_CSR) No effect. Position  */
#define TCPC_CSR_CC_STATUS_1                  (TCPC_CSR_CC_STATUS_1_Val << TCPC_CSR_CC_STATUS_Pos) /**< (TCPC_CSR) Clears the corresponding bit in TCPC_CCS. Position  */
#define TCPC_CSR_POWER_STATUS_Pos             _U_(16)                                              /**< (TCPC_CSR) Power Status Register Clear Position */
#define TCPC_CSR_POWER_STATUS_Msk             (_U_(0xFF) << TCPC_CSR_POWER_STATUS_Pos)             /**< (TCPC_CSR) Power Status Register Clear Mask */
#define TCPC_CSR_POWER_STATUS(value)          (TCPC_CSR_POWER_STATUS_Msk & ((value) << TCPC_CSR_POWER_STATUS_Pos))
#define   TCPC_CSR_POWER_STATUS_0_Val         _U_(0x0)                                             /**< (TCPC_CSR) No effect.  */
#define   TCPC_CSR_POWER_STATUS_1_Val         _U_(0x1)                                             /**< (TCPC_CSR) Clears the corresponding bit in TCPC_PS.  */
#define TCPC_CSR_POWER_STATUS_0               (TCPC_CSR_POWER_STATUS_0_Val << TCPC_CSR_POWER_STATUS_Pos) /**< (TCPC_CSR) No effect. Position  */
#define TCPC_CSR_POWER_STATUS_1               (TCPC_CSR_POWER_STATUS_1_Val << TCPC_CSR_POWER_STATUS_Pos) /**< (TCPC_CSR) Clears the corresponding bit in TCPC_PS. Position  */
#define TCPC_CSR_Msk                          _U_(0x00FFFF00)                                      /**< (TCPC_CSR) Register Mask  */


/* -------- TCPC_SAR : (TCPC Offset: 0x8C) ( /W 32) Set Alert Register -------- */
#define TCPC_SAR_ALERT_Pos                    _U_(0)                                               /**< (TCPC_SAR) Alert Register Set Position */
#define TCPC_SAR_ALERT_Msk                    (_U_(0xFFFF) << TCPC_SAR_ALERT_Pos)                  /**< (TCPC_SAR) Alert Register Set Mask */
#define TCPC_SAR_ALERT(value)                 (TCPC_SAR_ALERT_Msk & ((value) << TCPC_SAR_ALERT_Pos))
#define   TCPC_SAR_ALERT_0_Val                _U_(0x0)                                             /**< (TCPC_SAR) No effect.  */
#define   TCPC_SAR_ALERT_1_Val                _U_(0x1)                                             /**< (TCPC_SAR) Sets the corresponding bit in TCPC_AL.  */
#define TCPC_SAR_ALERT_0                      (TCPC_SAR_ALERT_0_Val << TCPC_SAR_ALERT_Pos)         /**< (TCPC_SAR) No effect. Position  */
#define TCPC_SAR_ALERT_1                      (TCPC_SAR_ALERT_1_Val << TCPC_SAR_ALERT_Pos)         /**< (TCPC_SAR) Sets the corresponding bit in TCPC_AL. Position  */
#define TCPC_SAR_Msk                          _U_(0x0000FFFF)                                      /**< (TCPC_SAR) Register Mask  */


/* -------- TCPC_UPC : (TCPC Offset: 0xA0) (R/W 32) USB Phy Control Register -------- */
#define TCPC_UPC_RESETVALUE                   _U_(0x00)                                            /**<  (TCPC_UPC) USB Phy Control Register  Reset Value */

#define TCPC_UPC_TCIDCTSEL_Pos                _U_(8)                                               /**< (TCPC_UPC) Type-C or ID Comparator Threshold Selection Position */
#define TCPC_UPC_TCIDCTSEL_Msk                (_U_(0x7) << TCPC_UPC_TCIDCTSEL_Pos)                 /**< (TCPC_UPC) Type-C or ID Comparator Threshold Selection Mask */
#define TCPC_UPC_TCIDCTSEL(value)             (TCPC_UPC_TCIDCTSEL_Msk & ((value) << TCPC_UPC_TCIDCTSEL_Pos))
#define   TCPC_UPC_TCIDCTSEL_THRESHOLD_0_Val  _U_(0x0)                                             /**< (TCPC_UPC) Type-C cell power down  */
#define   TCPC_UPC_TCIDCTSEL_THRESHOLD_2_Val  _U_(0x2)                                             /**< (TCPC_UPC) Type-C VRa Threshold  */
#define   TCPC_UPC_TCIDCTSEL_THRESHOLD_4_Val  _U_(0x4)                                             /**< (TCPC_UPC) Type-C VRd-USB Threshold  */
#define   TCPC_UPC_TCIDCTSEL_THRESHOLD_6_Val  _U_(0x6)                                             /**< (TCPC_UPC) Type-C VRd-1.5 Threshold, Type-C VRd Threshold  */
#define TCPC_UPC_TCIDCTSEL_THRESHOLD_0        (TCPC_UPC_TCIDCTSEL_THRESHOLD_0_Val << TCPC_UPC_TCIDCTSEL_Pos) /**< (TCPC_UPC) Type-C cell power down Position  */
#define TCPC_UPC_TCIDCTSEL_THRESHOLD_2        (TCPC_UPC_TCIDCTSEL_THRESHOLD_2_Val << TCPC_UPC_TCIDCTSEL_Pos) /**< (TCPC_UPC) Type-C VRa Threshold Position  */
#define TCPC_UPC_TCIDCTSEL_THRESHOLD_4        (TCPC_UPC_TCIDCTSEL_THRESHOLD_4_Val << TCPC_UPC_TCIDCTSEL_Pos) /**< (TCPC_UPC) Type-C VRd-USB Threshold Position  */
#define TCPC_UPC_TCIDCTSEL_THRESHOLD_6        (TCPC_UPC_TCIDCTSEL_THRESHOLD_6_Val << TCPC_UPC_TCIDCTSEL_Pos) /**< (TCPC_UPC) Type-C VRd-1.5 Threshold, Type-C VRd Threshold Position  */
#define TCPC_UPC_RDIPSEL_Pos                  _U_(12)                                              /**< (TCPC_UPC) Type-C Rd or Ip Pull up Current Selection Position */
#define TCPC_UPC_RDIPSEL_Msk                  (_U_(0x3) << TCPC_UPC_RDIPSEL_Pos)                   /**< (TCPC_UPC) Type-C Rd or Ip Pull up Current Selection Mask */
#define TCPC_UPC_RDIPSEL(value)               (TCPC_UPC_RDIPSEL_Msk & ((value) << TCPC_UPC_RDIPSEL_Pos))
#define   TCPC_UPC_RDIPSEL_IP_OFF_Val         _U_(0x0)                                             /**< (TCPC_UPC) Type-C pull up current source Ip is off, Rd pull down is selected  */
#define   TCPC_UPC_RDIPSEL_IP_0P5_Val         _U_(0x1)                                             /**< (TCPC_UPC) Type-C pull up current source Ip is advertising 0.5A as VBUS sourcing capability  */
#define TCPC_UPC_RDIPSEL_IP_OFF               (TCPC_UPC_RDIPSEL_IP_OFF_Val << TCPC_UPC_RDIPSEL_Pos) /**< (TCPC_UPC) Type-C pull up current source Ip is off, Rd pull down is selected Position  */
#define TCPC_UPC_RDIPSEL_IP_0P5               (TCPC_UPC_RDIPSEL_IP_0P5_Val << TCPC_UPC_RDIPSEL_Pos) /**< (TCPC_UPC) Type-C pull up current source Ip is advertising 0.5A as VBUS sourcing capability Position  */
#define TCPC_UPC_DMPDFD_Pos                   _U_(24)                                              /**< (TCPC_UPC) DM Pull Down Force Disable Position */
#define TCPC_UPC_DMPDFD_Msk                   (_U_(0x1) << TCPC_UPC_DMPDFD_Pos)                    /**< (TCPC_UPC) DM Pull Down Force Disable Mask */
#define TCPC_UPC_DMPDFD(value)                (TCPC_UPC_DMPDFD_Msk & ((value) << TCPC_UPC_DMPDFD_Pos))
#define   TCPC_UPC_DMPDFD_0_Val               _U_(0x0)                                             /**< (TCPC_UPC) DM pull down is not forced to the inactive state by the TCPC.  */
#define   TCPC_UPC_DMPDFD_1_Val               _U_(0x1)                                             /**< (TCPC_UPC) DM pull down is forced to the inactive state by the TCPC.  */
#define TCPC_UPC_DMPDFD_0                     (TCPC_UPC_DMPDFD_0_Val << TCPC_UPC_DMPDFD_Pos)       /**< (TCPC_UPC) DM pull down is not forced to the inactive state by the TCPC. Position  */
#define TCPC_UPC_DMPDFD_1                     (TCPC_UPC_DMPDFD_1_Val << TCPC_UPC_DMPDFD_Pos)       /**< (TCPC_UPC) DM pull down is forced to the inactive state by the TCPC. Position  */
#define TCPC_UPC_DMPDFE_Pos                   _U_(25)                                              /**< (TCPC_UPC) DM Pull Down Force Enable Position */
#define TCPC_UPC_DMPDFE_Msk                   (_U_(0x1) << TCPC_UPC_DMPDFE_Pos)                    /**< (TCPC_UPC) DM Pull Down Force Enable Mask */
#define TCPC_UPC_DMPDFE(value)                (TCPC_UPC_DMPDFE_Msk & ((value) << TCPC_UPC_DMPDFE_Pos))
#define   TCPC_UPC_DMPDFE_0_Val               _U_(0x0)                                             /**< (TCPC_UPC) DM pull down is not forced to the active state by the TCPC.  */
#define   TCPC_UPC_DMPDFE_1_Val               _U_(0x1)                                             /**< (TCPC_UPC) DM pull down is forced to the active state by the TCPC for battery charging data contact detection.  */
#define TCPC_UPC_DMPDFE_0                     (TCPC_UPC_DMPDFE_0_Val << TCPC_UPC_DMPDFE_Pos)       /**< (TCPC_UPC) DM pull down is not forced to the active state by the TCPC. Position  */
#define TCPC_UPC_DMPDFE_1                     (TCPC_UPC_DMPDFE_1_Val << TCPC_UPC_DMPDFE_Pos)       /**< (TCPC_UPC) DM pull down is forced to the active state by the TCPC for battery charging data contact detection. Position  */
#define TCPC_UPC_BCIDPSRCE_Pos                _U_(26)                                              /**< (TCPC_UPC) Battery Charging IDP Source Enable Position */
#define TCPC_UPC_BCIDPSRCE_Msk                (_U_(0x1) << TCPC_UPC_BCIDPSRCE_Pos)                 /**< (TCPC_UPC) Battery Charging IDP Source Enable Mask */
#define TCPC_UPC_BCIDPSRCE(value)             (TCPC_UPC_BCIDPSRCE_Msk & ((value) << TCPC_UPC_BCIDPSRCE_Pos))
#define   TCPC_UPC_BCIDPSRCE_0_Val            _U_(0x0)                                             /**< (TCPC_UPC) Battery charging IDP current source is disabled.  */
#define   TCPC_UPC_BCIDPSRCE_1_Val            _U_(0x1)                                             /**< (TCPC_UPC) Battery charging IDP current source is enabled for data contact detection.  */
#define TCPC_UPC_BCIDPSRCE_0                  (TCPC_UPC_BCIDPSRCE_0_Val << TCPC_UPC_BCIDPSRCE_Pos) /**< (TCPC_UPC) Battery charging IDP current source is disabled. Position  */
#define TCPC_UPC_BCIDPSRCE_1                  (TCPC_UPC_BCIDPSRCE_1_Val << TCPC_UPC_BCIDPSRCE_Pos) /**< (TCPC_UPC) Battery charging IDP current source is enabled for data contact detection. Position  */
#define TCPC_UPC_BCDETSEL_Pos                 _U_(27)                                              /**< (TCPC_UPC) Battery Charging Detection Selection Position */
#define TCPC_UPC_BCDETSEL_Msk                 (_U_(0x1) << TCPC_UPC_BCDETSEL_Pos)                  /**< (TCPC_UPC) Battery Charging Detection Selection Mask */
#define TCPC_UPC_BCDETSEL(value)              (TCPC_UPC_BCDETSEL_Msk & ((value) << TCPC_UPC_BCDETSEL_Pos))
#define   TCPC_UPC_BCDETSEL_0_Val             _U_(0x0)                                             /**< (TCPC_UPC) Battery charging primary detection is selected.  */
#define   TCPC_UPC_BCDETSEL_1_Val             _U_(0x1)                                             /**< (TCPC_UPC) Battery charging secondary detection is selected.  */
#define TCPC_UPC_BCDETSEL_0                   (TCPC_UPC_BCDETSEL_0_Val << TCPC_UPC_BCDETSEL_Pos)   /**< (TCPC_UPC) Battery charging primary detection is selected. Position  */
#define TCPC_UPC_BCDETSEL_1                   (TCPC_UPC_BCDETSEL_1_Val << TCPC_UPC_BCDETSEL_Pos)   /**< (TCPC_UPC) Battery charging secondary detection is selected. Position  */
#define TCPC_UPC_BCVSRCE_Pos                  _U_(28)                                              /**< (TCPC_UPC) Battery Charging Voltage Source Enable Position */
#define TCPC_UPC_BCVSRCE_Msk                  (_U_(0x1) << TCPC_UPC_BCVSRCE_Pos)                   /**< (TCPC_UPC) Battery Charging Voltage Source Enable Mask */
#define TCPC_UPC_BCVSRCE(value)               (TCPC_UPC_BCVSRCE_Msk & ((value) << TCPC_UPC_BCVSRCE_Pos))
#define   TCPC_UPC_BCVSRCE_0_Val              _U_(0x0)                                             /**< (TCPC_UPC) Battery charging VDP_SRC and VDM_SRC voltage sources are disabled.  */
#define   TCPC_UPC_BCVSRCE_1_Val              _U_(0x1)                                             /**< (TCPC_UPC) Battery charging voltage source enable:  */
#define TCPC_UPC_BCVSRCE_0                    (TCPC_UPC_BCVSRCE_0_Val << TCPC_UPC_BCVSRCE_Pos)     /**< (TCPC_UPC) Battery charging VDP_SRC and VDM_SRC voltage sources are disabled. Position  */
#define TCPC_UPC_BCVSRCE_1                    (TCPC_UPC_BCVSRCE_1_Val << TCPC_UPC_BCVSRCE_Pos)     /**< (TCPC_UPC) Battery charging voltage source enable: Position  */
#define TCPC_UPC_BCDETE_Pos                   _U_(29)                                              /**< (TCPC_UPC) Battery Charging Detection Enable Position */
#define TCPC_UPC_BCDETE_Msk                   (_U_(0x1) << TCPC_UPC_BCDETE_Pos)                    /**< (TCPC_UPC) Battery Charging Detection Enable Mask */
#define TCPC_UPC_BCDETE(value)                (TCPC_UPC_BCDETE_Msk & ((value) << TCPC_UPC_BCDETE_Pos))
#define   TCPC_UPC_BCDETE_0_Val               _U_(0x0)                                             /**< (TCPC_UPC) Battery charging detection is disabled.  */
#define   TCPC_UPC_BCDETE_1_Val               _U_(0x1)                                             /**< (TCPC_UPC) Battery charging detection is enabled.  */
#define TCPC_UPC_BCDETE_0                     (TCPC_UPC_BCDETE_0_Val << TCPC_UPC_BCDETE_Pos)       /**< (TCPC_UPC) Battery charging detection is disabled. Position  */
#define TCPC_UPC_BCDETE_1                     (TCPC_UPC_BCDETE_1_Val << TCPC_UPC_BCDETE_Pos)       /**< (TCPC_UPC) Battery charging detection is enabled. Position  */
#define TCPC_UPC_Msk                          _U_(0x3F003700)                                      /**< (TCPC_UPC) Register Mask  */


/* -------- TCPC_UPS : (TCPC Offset: 0xA4) ( R/ 32) USB Phy Status Register -------- */
#define TCPC_UPS_RESETVALUE                   _U_(0x00)                                            /**<  (TCPC_UPS) USB Phy Status Register  Reset Value */

#define TCPC_UPS_DP_Pos                       _U_(0)                                               /**< (TCPC_UPS) USB Differential line Plus Position */
#define TCPC_UPS_DP_Msk                       (_U_(0x1) << TCPC_UPS_DP_Pos)                        /**< (TCPC_UPS) USB Differential line Plus Mask */
#define TCPC_UPS_DP(value)                    (TCPC_UPS_DP_Msk & ((value) << TCPC_UPS_DP_Pos))    
#define   TCPC_UPS_DP_0_Val                   _U_(0x0)                                             /**< (TCPC_UPS) DP is low.  */
#define   TCPC_UPS_DP_1_Val                   _U_(0x1)                                             /**< (TCPC_UPS) DP is high.  */
#define TCPC_UPS_DP_0                         (TCPC_UPS_DP_0_Val << TCPC_UPS_DP_Pos)               /**< (TCPC_UPS) DP is low. Position  */
#define TCPC_UPS_DP_1                         (TCPC_UPS_DP_1_Val << TCPC_UPS_DP_Pos)               /**< (TCPC_UPS) DP is high. Position  */
#define TCPC_UPS_DM_Pos                       _U_(1)                                               /**< (TCPC_UPS) USB Differential line Minus Position */
#define TCPC_UPS_DM_Msk                       (_U_(0x1) << TCPC_UPS_DM_Pos)                        /**< (TCPC_UPS) USB Differential line Minus Mask */
#define TCPC_UPS_DM(value)                    (TCPC_UPS_DM_Msk & ((value) << TCPC_UPS_DM_Pos))    
#define   TCPC_UPS_DM_0_Val                   _U_(0x0)                                             /**< (TCPC_UPS) DM is low.  */
#define   TCPC_UPS_DM_1_Val                   _U_(0x1)                                             /**< (TCPC_UPS) DM is high.  */
#define TCPC_UPS_DM_0                         (TCPC_UPS_DM_0_Val << TCPC_UPS_DM_Pos)               /**< (TCPC_UPS) DM is low. Position  */
#define TCPC_UPS_DM_1                         (TCPC_UPS_DM_1_Val << TCPC_UPS_DM_Pos)               /**< (TCPC_UPS) DM is high. Position  */
#define TCPC_UPS_CHGDCP_Pos                   _U_(2)                                               /**< (TCPC_UPS) Charging Port Detection, Dedicated Charging Port Detection Position */
#define TCPC_UPS_CHGDCP_Msk                   (_U_(0x1) << TCPC_UPS_CHGDCP_Pos)                    /**< (TCPC_UPS) Charging Port Detection, Dedicated Charging Port Detection Mask */
#define TCPC_UPS_CHGDCP(value)                (TCPC_UPS_CHGDCP_Msk & ((value) << TCPC_UPS_CHGDCP_Pos))
#define   TCPC_UPS_CHGDCP_0_Val               _U_(0x0)                                             /**< (TCPC_UPS) No charging port detected  */
#define   TCPC_UPS_CHGDCP_1_Val               _U_(0x1)                                             /**< (TCPC_UPS) Charging port detected  */
#define TCPC_UPS_CHGDCP_0                     (TCPC_UPS_CHGDCP_0_Val << TCPC_UPS_CHGDCP_Pos)       /**< (TCPC_UPS) No charging port detected Position  */
#define TCPC_UPS_CHGDCP_1                     (TCPC_UPS_CHGDCP_1_Val << TCPC_UPS_CHGDCP_Pos)       /**< (TCPC_UPS) Charging port detected Position  */
#define TCPC_UPS_CC1ID_Pos                    _U_(3)                                               /**< (TCPC_UPS) Type-C CC1 Comparator or ID comparator Position */
#define TCPC_UPS_CC1ID_Msk                    (_U_(0x1) << TCPC_UPS_CC1ID_Pos)                     /**< (TCPC_UPS) Type-C CC1 Comparator or ID comparator Mask */
#define TCPC_UPS_CC1ID(value)                 (TCPC_UPS_CC1ID_Msk & ((value) << TCPC_UPS_CC1ID_Pos))
#define   TCPC_UPS_CC1ID_0_Val                _U_(0x0)                                             /**< (TCPC_UPS) CC1 or ID comparator output is low. Voltage is below the selected TCPC_UPC.TCIDCTSEL threshold.  */
#define   TCPC_UPS_CC1ID_1_Val                _U_(0x1)                                             /**< (TCPC_UPS) CC1 or ID comparator output is high. Voltage is above the selected TCPC_UPC.TCIDCTSEL threshold.  */
#define TCPC_UPS_CC1ID_0                      (TCPC_UPS_CC1ID_0_Val << TCPC_UPS_CC1ID_Pos)         /**< (TCPC_UPS) CC1 or ID comparator output is low. Voltage is below the selected TCPC_UPC.TCIDCTSEL threshold. Position  */
#define TCPC_UPS_CC1ID_1                      (TCPC_UPS_CC1ID_1_Val << TCPC_UPS_CC1ID_Pos)         /**< (TCPC_UPS) CC1 or ID comparator output is high. Voltage is above the selected TCPC_UPC.TCIDCTSEL threshold. Position  */
#define TCPC_UPS_CC2RDT_Pos                   _U_(4)                                               /**< (TCPC_UPS) Type-C CC2 Comparator or Rd Trim comparator Position */
#define TCPC_UPS_CC2RDT_Msk                   (_U_(0x1) << TCPC_UPS_CC2RDT_Pos)                    /**< (TCPC_UPS) Type-C CC2 Comparator or Rd Trim comparator Mask */
#define TCPC_UPS_CC2RDT(value)                (TCPC_UPS_CC2RDT_Msk & ((value) << TCPC_UPS_CC2RDT_Pos))
#define   TCPC_UPS_CC2RDT_0_Val               _U_(0x0)                                             /**< (TCPC_UPS) CC2 or Rd Trim comparator output is low. Voltage is below the selected TCUPC.TCIDCTSEL threshold.  */
#define   TCPC_UPS_CC2RDT_1_Val               _U_(0x1)                                             /**< (TCPC_UPS) CC2 or Rd Trim comparator output is high. Voltage is above the selected TCUPC.TCIDCTSEL threshold.  */
#define TCPC_UPS_CC2RDT_0                     (TCPC_UPS_CC2RDT_0_Val << TCPC_UPS_CC2RDT_Pos)       /**< (TCPC_UPS) CC2 or Rd Trim comparator output is low. Voltage is below the selected TCUPC.TCIDCTSEL threshold. Position  */
#define TCPC_UPS_CC2RDT_1                     (TCPC_UPS_CC2RDT_1_Val << TCPC_UPS_CC2RDT_Pos)       /**< (TCPC_UPS) CC2 or Rd Trim comparator output is high. Voltage is above the selected TCUPC.TCIDCTSEL threshold. Position  */
#define TCPC_UPS_Msk                          _U_(0x0000001F)                                      /**< (TCPC_UPS) Register Mask  */


/** \brief TCPC register offsets definitions */
#define TCPC_VID_REG_OFST              (0x00)              /**< (TCPC_VID) Vendor ID Register Offset */
#define TCPC_PID_REG_OFST              (0x02)              /**< (TCPC_PID) Product ID Register Offset */
#define TCPC_DID_REG_OFST              (0x04)              /**< (TCPC_DID) Device ID Register Offset */
#define TCPC_UTCR_REG_OFST             (0x06)              /**< (TCPC_UTCR) USB Type-C Rev Register Offset */
#define TCPC_UPDR_REG_OFST             (0x08)              /**< (TCPC_UPDR) USB PD Rev Ver Register Offset */
#define TCPC_PDIR_REG_OFST             (0x0A)              /**< (TCPC_PDIR) PD Interface Rev Register Offset */
#define TCPC_AL_REG_OFST               (0x10)              /**< (TCPC_AL) Alert Register Offset */
#define TCPC_ALM_REG_OFST              (0x12)              /**< (TCPC_ALM) Alert Mask Register Offset */
#define TCPC_PSM_REG_OFST              (0x14)              /**< (TCPC_PSM) Power Status Mask Register Offset */
#define TCPC_FSM_REG_OFST              (0x15)              /**< (TCPC_FSM) Fault Status Mask Register Offset */
#define TCPC_CSO_REG_OFST              (0x18)              /**< (TCPC_CSO) Config Standard Output Register Offset */
#define TCPC_RCTL_REG_OFST             (0x1A)              /**< (TCPC_RCTL) Role Control Register Offset */
#define TCPC_FCTL_REG_OFST             (0x1B)              /**< (TCPC_FCTL) Fault Control Register Offset */
#define TCPC_CCS_REG_OFST              (0x1D)              /**< (TCPC_CCS) CC Status Register Offset */
#define TCPC_PS_REG_OFST               (0x1E)              /**< (TCPC_PS) Power Status Register Offset */
#define TCPC_FS_REG_OFST               (0x1F)              /**< (TCPC_FS) Fault Status Register Offset */
#define TCPC_CMD_REG_OFST              (0x23)              /**< (TCPC_CMD) Command Register Offset */
#define TCPC_DCP1_REG_OFST             (0x24)              /**< (TCPC_DCP1) Device Capabilities 1 Register Offset */
#define TCPC_DCP2_REG_OFST             (0x26)              /**< (TCPC_DCP2) Device Capabilities 2 Register Offset */
#define TCPC_SIC_REG_OFST              (0x28)              /**< (TCPC_SIC) Standard Input Capabilities Register Offset */
#define TCPC_SOC_REG_OFST              (0x29)              /**< (TCPC_SOC) Standard Output Capabilities Register Offset */
#define TCPC_CR_REG_OFST               (0x80)              /**< (TCPC_CR) Control Register Offset */
#define TCPC_SSR_REG_OFST              (0x84)              /**< (TCPC_SSR) Set Status Register Offset */
#define TCPC_CSR_REG_OFST              (0x88)              /**< (TCPC_CSR) Clear Status Register Offset */
#define TCPC_SAR_REG_OFST              (0x8C)              /**< (TCPC_SAR) Set Alert Register Offset */
#define TCPC_UPC_REG_OFST              (0xA0)              /**< (TCPC_UPC) USB Phy Control Register Offset */
#define TCPC_UPS_REG_OFST              (0xA4)              /**< (TCPC_UPS) USB Phy Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TCPC register API structure */
typedef struct
{  /* Battery Charging and Type-C Port Controller */
  __I   uint16_t                       TCPC_VID;           /**< Offset: 0x00 (R/   16) Vendor ID Register */
  __I   uint16_t                       TCPC_PID;           /**< Offset: 0x02 (R/   16) Product ID Register */
  __I   uint16_t                       TCPC_DID;           /**< Offset: 0x04 (R/   16) Device ID Register */
  __I   uint16_t                       TCPC_UTCR;          /**< Offset: 0x06 (R/   16) USB Type-C Rev Register */
  __I   uint16_t                       TCPC_UPDR;          /**< Offset: 0x08 (R/   16) USB PD Rev Ver Register */
  __I   uint16_t                       TCPC_PDIR;          /**< Offset: 0x0A (R/   16) PD Interface Rev Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint16_t                       TCPC_AL;            /**< Offset: 0x10 (R/W  16) Alert Register */
  __IO  uint16_t                       TCPC_ALM;           /**< Offset: 0x12 (R/W  16) Alert Mask Register */
  __IO  uint8_t                        TCPC_PSM;           /**< Offset: 0x14 (R/W  8) Power Status Mask Register */
  __IO  uint8_t                        TCPC_FSM;           /**< Offset: 0x15 (R/W  8) Fault Status Mask Register */
  __I   uint8_t                        Reserved2[0x02];
  __IO  uint8_t                        TCPC_CSO;           /**< Offset: 0x18 (R/W  8) Config Standard Output Register */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        TCPC_RCTL;          /**< Offset: 0x1A (R/W  8) Role Control Register */
  __IO  uint8_t                        TCPC_FCTL;          /**< Offset: 0x1B (R/W  8) Fault Control Register */
  __I   uint8_t                        Reserved4[0x01];
  __I   uint8_t                        TCPC_CCS;           /**< Offset: 0x1D (R/   8) CC Status Register */
  __I   uint8_t                        TCPC_PS;            /**< Offset: 0x1E (R/   8) Power Status Register */
  __IO  uint8_t                        TCPC_FS;            /**< Offset: 0x1F (R/W  8) Fault Status Register */
  __I   uint8_t                        Reserved5[0x03];
  __IO  uint8_t                        TCPC_CMD;           /**< Offset: 0x23 (R/W  8) Command Register */
  __IO  uint16_t                       TCPC_DCP1;          /**< Offset: 0x24 (R/W  16) Device Capabilities 1 Register */
  __IO  uint16_t                       TCPC_DCP2;          /**< Offset: 0x26 (R/W  16) Device Capabilities 2 Register */
  __IO  uint8_t                        TCPC_SIC;           /**< Offset: 0x28 (R/W  8) Standard Input Capabilities Register */
  __IO  uint8_t                        TCPC_SOC;           /**< Offset: 0x29 (R/W  8) Standard Output Capabilities Register */
  __I   uint8_t                        Reserved6[0x56];
  __O   uint32_t                       TCPC_CR;            /**< Offset: 0x80 ( /W  32) Control Register */
  __O   uint32_t                       TCPC_SSR;           /**< Offset: 0x84 ( /W  32) Set Status Register */
  __O   uint32_t                       TCPC_CSR;           /**< Offset: 0x88 ( /W  32) Clear Status Register */
  __O   uint32_t                       TCPC_SAR;           /**< Offset: 0x8C ( /W  32) Set Alert Register */
  __I   uint8_t                        Reserved7[0x10];
  __IO  uint32_t                       TCPC_UPC;           /**< Offset: 0xA0 (R/W  32) USB Phy Control Register */
  __I   uint32_t                       TCPC_UPS;           /**< Offset: 0xA4 (R/   32) USB Phy Status Register */
} tcpc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_TCPC_COMPONENT_H_ */
