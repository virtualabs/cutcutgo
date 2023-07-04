/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

/* Created by plibgen $Revision: 1.31 $ */


#ifndef _PLIB_USBFS_H
#define _PLIB_USBFS_H

/* Section 1 - Enumerate instances, define constants, VREGs */

#include <xc.h>
#include <stdbool.h>



/* Default definition used for all API dispatch functions */
#ifndef PLIB_INLINE_API
     #define PLIB_INLINE_API static inline 
#endif

/* Default definition used for all other functions */
#ifndef PLIB_INLINE
     #define PLIB_INLINE static inline 
#endif

#ifndef _PLIB_UNSUPPORTED
    #define _PLIB_UNSUPPORTED 
#endif

#ifndef PLIB_ASSERT
    #define PLIB_ASSERT(a,b)  
#endif 

#if defined(__32MX420F032H__) || defined(__32MX440F128H__) ||  defined(__32MX440F256H__) || defined(__32MX440F512H__) || defined(__32MX440F128L__) || defined(__32MX460F256L__) || defined(__32MX460F512L__)

    #define USB_BUSY_FLAG_DOES_NOT_EXIST   
#endif

typedef enum {

    USB_ID_1 = _USB_BASE_ADDRESS,
    USB_NUMBER_OF_MODULES = 1
	
} USB_MODULE_ID;

typedef enum {

    USB_INT_DEVICE_RESET = 0x01,
    USB_INT_ERROR = 0x02,
    USB_INT_TOKEN_DONE = 0x08,
    USB_INT_IDLE_DETECT = 0x10,
    USB_INT_STALL = 0x80,
    USB_INT_SOF = 0x04,
    USB_INT_HOST_DETACH = 0x01,
    USB_INT_RESUME = 0x20,
    USB_INT_ATTACH = 0x40,
    USB_INT_ANY = 0xFF,
    USB_INT_ALL = 0xFF

} USB_INTERRUPTS;

typedef enum {

    USB_ERR_INT_PID_CHECK_FAILURE = 0x01,
    USB_ERR_INT_BAD_CRC5 = 0x02,
    USB_ERR_INT_BAD_CRC16 = 0x04,
    USB_ERR_INT_BAD_DATA_FIELD_SIZE = 0x08,
    USB_ERR_INT_BUS_TURNAROUND_TIMEOUT = 0x10,
    USB_ERR_INT_BIT_STUFF_ERROR = 0x80,
    USB_ERR_INT_HOST_EOF_ERROR = 0x02,
    USB_ERR_INT_DMA_ERROR = 0x20,
    USB_ERR_INT_BUS_MATRIX_ERROR = 0x40,
    USB_ERR_INT_ANY = 0xFF,
    USB_ERR_INT_ALL = 0xFF

} USB_ERROR_INTERRUPTS;

/* Section 2 - Feature variant inclusion */

#define PLIB_TEMPLATE PLIB_INLINE
#include "driver/usb/usbfs/src/templates/usb_OTG_InterruptStatus_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_Interrupt_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_IDPinState_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_LineState_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_SessionValid_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_BSessionEnd_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_ASessionValid_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_PullUpPullDown_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_VbusPowerOnOff_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_VbusCharge_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OTG_VbusDischarge_Default.h"
#include "driver/usb/usbfs/src/templates/usb_ActivityPending_Default.h"
#include "driver/usb/usbfs/src/templates/usb_SleepEntryGuard_Default.h"
#include "driver/usb/usbfs/src/templates/usb_Suspend_Default.h"
#include "driver/usb/usbfs/src/templates/usb_ModulePower_32Bit16Bit.h"
#include "driver/usb/usbfs/src/templates/usb_GEN_InterruptStatus_Default.h"
#include "driver/usb/usbfs/src/templates/usb_GEN_Interrupt_Default.h"
#include "driver/usb/usbfs/src/templates/usb_ALL_Interrupt_Default.h"
#include "driver/usb/usbfs/src/templates/usb_ERR_InterruptStatus_Default.h"
#include "driver/usb/usbfs/src/templates/usb_ERR_Interrupt_Default.h"
#include "driver/usb/usbfs/src/templates/usb_LastEndpoint_Default.h"
#include "driver/usb/usbfs/src/templates/usb_LastDirection_Default.h"
#include "driver/usb/usbfs/src/templates/usb_LastPingPong_Default.h"
#include "driver/usb/usbfs/src/templates/usb_LastTransactionDetails_Default.h"
#include "driver/usb/usbfs/src/templates/usb_LiveJState_Default.h"
#include "driver/usb/usbfs/src/templates/usb_LiveSingleEndedZero_Default.h"
#include "driver/usb/usbfs/src/templates/usb_PacketTransfer_Default.h"
#include "driver/usb/usbfs/src/templates/usb_HostBusyWithToken_Default.h"
#include "driver/usb/usbfs/src/templates/usb_HostGeneratesReset_Default.h"
#include "driver/usb/usbfs/src/templates/usb_OpModeSelect_Default.h"
#include "driver/usb/usbfs/src/templates/usb_ResumeSignaling_Default.h"
#include "driver/usb/usbfs/src/templates/usb_BufferFreeze_Default.h"
#include "driver/usb/usbfs/src/templates/usb_StartOfFrames_Default.h"
#include "driver/usb/usbfs/src/templates/usb_NextTokenSpeed_Default.h"
#include "driver/usb/usbfs/src/templates/usb_DeviceAddress_Default.h"
#include "driver/usb/usbfs/src/templates/usb_FrameNumber_Default.h"
#include "driver/usb/usbfs/src/templates/usb_TokenPID_Default.h"
#include "driver/usb/usbfs/src/templates/usb_TokenEP_Default.h"
#include "driver/usb/usbfs/src/templates/usb_SOFThreshold_Default.h"
#include "driver/usb/usbfs/src/templates/usb_BDTBaseAddress_Default.h"
#include "driver/usb/usbfs/src/templates/usb_EyePattern_Default.h"
#include "driver/usb/usbfs/src/templates/usb_StopInIdle_Default.h"
#include "driver/usb/usbfs/src/templates/usb_PingPongMode_Unsupported.h"
#include "driver/usb/usbfs/src/templates/usb_UOEMonitor_Unsupported.h"
#include "driver/usb/usbfs/src/templates/usb_OnChipPullup_Unsupported.h"
#include "driver/usb/usbfs/src/templates/usb_OnChipTransceiver_Unsupported.h"
#include "driver/usb/usbfs/src/templates/usb_SpeedControl_Unsupported.h"
#include "driver/usb/usbfs/src/templates/usb_EP0LowSpeedConnect_Default.h"
#include "driver/usb/usbfs/src/templates/usb_EP0NAKRetry_Default.h"
#include "driver/usb/usbfs/src/templates/usb_EPnTxRx_Default.h"
#include "driver/usb/usbfs/src/templates/usb_EPnRxEnableEnhanced_PIC32.h"
#include "driver/usb/usbfs/src/templates/usb_BDTFunctions_PIC32.h"
#ifndef  USB_BUSY_FLAG_DOES_NOT_EXIST
    #include "driver/usb/usbfs/src/templates/usb_ModuleBusy_Default.h"
    #include "driver/usb/usbfs/src/templates/usb_AutomaticSuspend_Default.h"
#endif


/* Section 3 - PLIB dispatch function definitions */

PLIB_INLINE_API void PLIB_USB_OTG_InterruptFlagSet(USB_MODULE_ID index, USB_OTG_INTERRUPTS interruptFlag)
{
     USB_OTG_InterruptFlagSet_Default(index, interruptFlag);
}

PLIB_INLINE_API void PLIB_USB_OTG_InterruptFlagClear(USB_MODULE_ID index, USB_OTG_INTERRUPTS interruptFlag)
{
     USB_OTG_InterruptFlagClear_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_OTG_InterruptFlagGet(USB_MODULE_ID index, USB_OTG_INTERRUPTS interruptFlag)
{
     return USB_OTG_InterruptFlagGet_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_InterruptStatus(USB_MODULE_ID index)
{
     return USB_ExistsOTG_InterruptStatus_Default(index);
}

PLIB_INLINE_API void PLIB_USB_OTG_InterruptEnable(USB_MODULE_ID index, USB_OTG_INTERRUPTS interruptFlag)
{
     USB_OTG_InterruptEnable_Default(index, interruptFlag);
}

PLIB_INLINE_API void PLIB_USB_OTG_InterruptDisable(USB_MODULE_ID index, USB_OTG_INTERRUPTS interruptFlag)
{
     USB_OTG_InterruptDisable_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_OTG_InterruptIsEnabled(USB_MODULE_ID index, USB_INTERRUPTS interruptFlag)
{
     return USB_OTG_InterruptIsEnabled_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_Interrupt(USB_MODULE_ID index)
{
     return USB_ExistsOTG_Interrupt_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_OTG_IDPinStateIsTypeA(USB_MODULE_ID index)
{
     return USB_OTG_IDPinStateIsTypeA_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_IDPinState(USB_MODULE_ID index)
{
     return USB_ExistsOTG_IDPinState_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_OTG_LineStateIsStable(USB_MODULE_ID index)
{
     return USB_OTG_LineStateIsStable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_LineState(USB_MODULE_ID index)
{
     return USB_ExistsOTG_LineState_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_OTG_SessionValid(USB_MODULE_ID index)
{
     return USB_OTG_SessionValid_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_SessionValid(USB_MODULE_ID index)
{
     return USB_ExistsOTG_SessionValid_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_OTG_BSessionHasEnded(USB_MODULE_ID index)
{
     return USB_OTG_BSessionHasEnded_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_BSessionEnd(USB_MODULE_ID index)
{
     return USB_ExistsOTG_BSessionEnd_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_OTG_VBusValid(USB_MODULE_ID index)
{
     return USB_OTG_VBusValid_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_ASessionValid(USB_MODULE_ID index)
{
     return USB_ExistsOTG_ASessionValid_Default(index);
}

PLIB_INLINE_API void PLIB_USB_OTG_PullUpPullDownSetup(USB_MODULE_ID index, USB_OTG_PULL_UP_PULL_DOWN resistor, bool enableResistor)
{
     USB_OTG_PullUpPullDownSetup_Default(index, resistor, enableResistor);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_PullUpPullDown(USB_MODULE_ID index)
{
     return USB_ExistsOTG_PullUpPullDown_Default(index);
}

PLIB_INLINE_API void PLIB_USB_OTG_VBusPowerOff(USB_MODULE_ID index)
{
     USB_OTG_VBusPowerOff_Default(index);
}

PLIB_INLINE_API void PLIB_USB_OTG_VBusPowerOn(USB_MODULE_ID index)
{
     USB_OTG_VBusPowerOn_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_VbusPowerOnOff(USB_MODULE_ID index)
{
     return USB_ExistsOTG_VbusPowerOnOff_Default(index);
}

PLIB_INLINE_API void PLIB_USB_OTG_VBusChargeEnable(USB_MODULE_ID index)
{
     USB_OTG_VBusChargeEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_OTG_VBusChargeDisable(USB_MODULE_ID index)
{
     USB_OTG_VBusChargeDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_VbusCharge(USB_MODULE_ID index)
{
     return USB_ExistsOTG_VbusCharge_Default(index);
}

PLIB_INLINE_API void PLIB_USB_OTG_VBusDischargeEnable(USB_MODULE_ID index)
{
     USB_OTG_VBusDischargeEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_OTG_VBusDischargeDisable(USB_MODULE_ID index)
{
     USB_OTG_VBusDischargeDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOTG_VbusDischarge(USB_MODULE_ID index)
{
     return USB_ExistsOTG_VbusDischarge_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ActivityPending(USB_MODULE_ID index)
{
     return USB_ActivityPending_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsActivityPending(USB_MODULE_ID index)
{
     return USB_ExistsActivityPending_Default(index);
}

PLIB_INLINE_API void PLIB_USB_SleepGuardEnable(USB_MODULE_ID index)
{
     USB_SleepGuardEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_SleepGuardDisable(USB_MODULE_ID index)
{
     USB_SleepGuardDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsSleepEntryGuard(USB_MODULE_ID index)
{
     return USB_ExistsSleepEntryGuard_Default(index);
}
#ifndef  USB_BUSY_FLAG_DOES_NOT_EXIST
    PLIB_INLINE_API bool PLIB_USB_ModuleIsBusy(USB_MODULE_ID index)
    {
         return USB_ModuleIsBusy_Default(index);
    }

    PLIB_INLINE_API bool PLIB_USB_ExistsModuleBusy(USB_MODULE_ID index)
    {
         return USB_ExistsModuleBusy_Default(index);
    }

    PLIB_INLINE_API void PLIB_USB_AutoSuspendDisable(USB_MODULE_ID index)
    {
         USB_AutoSuspendDisable_Default(index);
    }

    PLIB_INLINE_API void PLIB_USB_AutoSuspendEnable(USB_MODULE_ID index)
    {
         USB_AutoSuspendEnable_Default(index);
    }

    PLIB_INLINE_API bool PLIB_USB_ExistsAutomaticSuspend(USB_MODULE_ID index)
    {
         return USB_ExistsAutomaticSuspend_Default(index);
    }
#endif

PLIB_INLINE_API void PLIB_USB_SuspendEnable(USB_MODULE_ID index)
{
     USB_SuspendEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_SuspendDisable(USB_MODULE_ID index)
{
     USB_SuspendDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsSuspend(USB_MODULE_ID index)
{
     return USB_ExistsSuspend_Default(index);
}

PLIB_INLINE_API void PLIB_USB_Enable(USB_MODULE_ID index)
{
     USB_Enable_32Bit16Bit(index);
}

PLIB_INLINE_API void PLIB_USB_Disable(USB_MODULE_ID index)
{
     USB_Disable_32Bit16Bit(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsModulePower(USB_MODULE_ID index)
{
     return USB_ExistsModulePower_32Bit16Bit(index);
}

PLIB_INLINE_API void PLIB_USB_InterruptFlagSet(USB_MODULE_ID index, USB_INTERRUPTS interruptFlag)
{
     USB_InterruptFlagSet_Default(index, interruptFlag);
}

PLIB_INLINE_API void PLIB_USB_InterruptFlagClear(USB_MODULE_ID index, USB_INTERRUPTS interruptFlag)
{
     USB_InterruptFlagClear_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_InterruptFlagGet(USB_MODULE_ID index, USB_INTERRUPTS interruptFlag)
{
     return USB_InterruptFlagGet_Default(index, interruptFlag);
}

PLIB_INLINE_API USB_INTERRUPTS PLIB_USB_InterruptFlagAllGet(USB_MODULE_ID index)
{
     return USB_InterruptFlagAllGet_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsGEN_InterruptStatus(USB_MODULE_ID index)
{
     return USB_ExistsGEN_InterruptStatus_Default(index);
}

PLIB_INLINE_API void PLIB_USB_InterruptEnable(USB_MODULE_ID index, USB_INTERRUPTS interruptFlag)
{
     USB_InterruptEnable_Default(index, interruptFlag);
}

PLIB_INLINE_API void PLIB_USB_InterruptDisable(USB_MODULE_ID index, USB_INTERRUPTS interruptFlag)
{
     USB_InterruptDisable_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_InterruptIsEnabled(USB_MODULE_ID index, USB_INTERRUPTS interruptFlag)
{
     return USB_InterruptIsEnabled_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_ExistsGEN_Interrupt(USB_MODULE_ID index)
{
     return USB_ExistsGEN_Interrupt_Default(index);
}

PLIB_INLINE_API void PLIB_USB_AllInterruptEnable(USB_MODULE_ID index, USB_INTERRUPTS usbInterruptsFlag, USB_ERROR_INTERRUPTS usbErrorInterruptsFlag, USB_OTG_INTERRUPTS otgInterruptFlag)
{
     USB_AllInterruptEnable_Default(index, usbInterruptsFlag, usbErrorInterruptsFlag, otgInterruptFlag);
}

PLIB_INLINE_API USB_INTERRUPTS PLIB_USB_InterruptEnableGet(USB_MODULE_ID index)
{
     return USB_InterruptEnableGet_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsALL_Interrupt(USB_MODULE_ID index)
{
     return USB_ExistsALL_Interrupt_Default(index);
}

PLIB_INLINE_API void PLIB_USB_ErrorInterruptFlagSet(USB_MODULE_ID index, USB_ERROR_INTERRUPTS interruptFlag)
{
     USB_ErrorInterruptFlagSet_Default(index, interruptFlag);
}

PLIB_INLINE_API void PLIB_USB_ErrorInterruptFlagClear(USB_MODULE_ID index, USB_ERROR_INTERRUPTS interruptFlag)
{
     USB_ErrorInterruptFlagClear_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_ErrorInterruptFlagGet(USB_MODULE_ID index, USB_ERROR_INTERRUPTS interruptFlag)
{
     return USB_ErrorInterruptFlagGet_Default(index, interruptFlag);
}

PLIB_INLINE_API USB_ERROR_INTERRUPTS PLIB_USB_ErrorInterruptFlagAllGet(USB_MODULE_ID index)
{
     return USB_ErrorInterruptFlagAllGet_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsERR_InterruptStatus(USB_MODULE_ID index)
{
     return USB_ExistsERR_InterruptStatus_Default(index);
}

PLIB_INLINE_API void PLIB_USB_ErrorInterruptEnable(USB_MODULE_ID index, USB_ERROR_INTERRUPTS interruptFlag)
{
     USB_ErrorInterruptEnable_Default(index, interruptFlag);
}

PLIB_INLINE_API void PLIB_USB_ErrorInterruptDisable(USB_MODULE_ID index, USB_ERROR_INTERRUPTS interruptFlag)
{
     USB_ErrorInterruptDisable_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_ErrorInterruptIsEnabled(USB_MODULE_ID index, USB_INTERRUPTS interruptFlag)
{
     return USB_ErrorInterruptIsEnabled_Default(index, interruptFlag);
}

PLIB_INLINE_API bool PLIB_USB_ExistsERR_Interrupt(USB_MODULE_ID index)
{
     return USB_ExistsERR_Interrupt_Default(index);
}

PLIB_INLINE_API uint8_t PLIB_USB_LastTransactionEndPtGet(USB_MODULE_ID index)
{
     return USB_LastTransactionEndPtGet_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsLastEndpoint(USB_MODULE_ID index)
{
     return USB_ExistsLastEndpoint_Default(index);
}

PLIB_INLINE_API USB_BUFFER_DIRECTION PLIB_USB_LastTransactionDirectionGet(USB_MODULE_ID index)
{
     return USB_LastTransactionDirectionGet_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsLastDirection(USB_MODULE_ID index)
{
     return USB_ExistsLastDirection_Default(index);
}

PLIB_INLINE_API USB_PING_PONG_STATE PLIB_USB_LastTransactionPingPongStateGet(USB_MODULE_ID index)
{
     return USB_LastTransactionPingPongStateGet_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsLastPingPong(USB_MODULE_ID index)
{
     return USB_ExistsLastPingPong_Default(index);
}

PLIB_INLINE_API void PLIB_USB_LastTransactionDetailsGet(USB_MODULE_ID index, USB_BUFFER_DIRECTION* direction, USB_PING_PONG_STATE* pingpong, uint8_t* endpoint)
{
     USB_LastTransactionDetailsGet_Default(index, direction, pingpong, endpoint);
}

PLIB_INLINE_API bool PLIB_USB_ExistsLastTransactionDetails(USB_MODULE_ID index)
{
     return USB_ExistsLastTransactionDetails_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_JStateIsActive(USB_MODULE_ID index)
{
     return USB_JStateIsActive_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsLiveJState(USB_MODULE_ID index)
{
     return USB_ExistsLiveJState_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_SE0InProgress(USB_MODULE_ID index)
{
     return USB_SE0InProgress_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsLiveSingleEndedZero(USB_MODULE_ID index)
{
     return USB_ExistsLiveSingleEndedZero_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_PacketTransferIsDisabled(USB_MODULE_ID index)
{
     return USB_PacketTransferIsDisabled_Default(index);
}

PLIB_INLINE_API void PLIB_USB_PacketTransferEnable(USB_MODULE_ID index)
{
     USB_PacketTransferEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_PacketTransferDisable(USB_MODULE_ID index)
{
     USB_PacketTransferDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsPacketTransfer(USB_MODULE_ID index)
{
     return USB_ExistsPacketTransfer_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_IsBusyWithToken(USB_MODULE_ID index)
{
     return USB_IsBusyWithToken_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsHostBusyWithToken(USB_MODULE_ID index)
{
     return USB_ExistsHostBusyWithToken_Default(index);
}

PLIB_INLINE_API void PLIB_USB_ResetSignalEnable(USB_MODULE_ID index)
{
     USB_ResetSignalEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_ResetSignalDisable(USB_MODULE_ID index)
{
     USB_ResetSignalDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsHostGeneratesReset(USB_MODULE_ID index)
{
     return USB_ExistsHostGeneratesReset_Default(index);
}

PLIB_INLINE_API void PLIB_USB_OperatingModeSelect(USB_MODULE_ID index, USB_OPMODES opMode)
{
     USB_OperatingModeSelect_Default(index, opMode);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOpModeSelect(USB_MODULE_ID index)
{
     return USB_ExistsOpModeSelect_Default(index);
}

PLIB_INLINE_API void PLIB_USB_ResumeSignalingEnable(USB_MODULE_ID index)
{
     USB_ResumeSignalingEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_ResumeSignalingDisable(USB_MODULE_ID index)
{
     USB_ResumeSignalingDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsResumeSignaling(USB_MODULE_ID index)
{
     return USB_ExistsResumeSignaling_Default(index);
}

PLIB_INLINE_API void PLIB_USB_PingPongFreeze(USB_MODULE_ID index)
{
     USB_PingPongFreeze_Default(index);
}

PLIB_INLINE_API void PLIB_USB_PingPongUnfreeze(USB_MODULE_ID index)
{
     USB_PingPongUnfreeze_Default(index);
}

PLIB_INLINE_API void PLIB_USB_PingPongReset(USB_MODULE_ID index)
{
     USB_PingPongReset_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsBufferFreeze(USB_MODULE_ID index)
{
     return USB_ExistsBufferFreeze_Default(index);
}

PLIB_INLINE_API void PLIB_USB_SOFEnable(USB_MODULE_ID index)
{
     USB_SOFEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_SOFDisable(USB_MODULE_ID index)
{
     USB_SOFDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsStartOfFrames(USB_MODULE_ID index)
{
     return USB_ExistsStartOfFrames_Default(index);
}

PLIB_INLINE_API void PLIB_USB_TokenSpeedSelect(USB_MODULE_ID index, USB_TOKEN_SPEED tokenSpeed)
{
     USB_TokenSpeedSelect_Default(index, tokenSpeed);
}

PLIB_INLINE_API bool PLIB_USB_ExistsNextTokenSpeed(USB_MODULE_ID index)
{
     return USB_ExistsNextTokenSpeed_Default(index);
}

PLIB_INLINE_API void PLIB_USB_DeviceAddressSet(USB_MODULE_ID index, uint8_t address)
{
     USB_DeviceAddressSet_Default(index, address);
}

PLIB_INLINE_API uint8_t PLIB_USB_DeviceAddressGet(USB_MODULE_ID index)
{
     return USB_DeviceAddressGet_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsDeviceAddress(USB_MODULE_ID index)
{
     return USB_ExistsDeviceAddress_Default(index);
}

PLIB_INLINE_API uint16_t PLIB_USB_FrameNumberGet(USB_MODULE_ID index)
{
     return USB_FrameNumberGet_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsFrameNumber(USB_MODULE_ID index)
{
     return USB_ExistsFrameNumber_Default(index);
}

PLIB_INLINE_API USB_PID PLIB_USB_TokenPIDGet(USB_MODULE_ID index)
{
     return USB_TokenPIDGet_Default(index);
}

PLIB_INLINE_API void PLIB_USB_TokenPIDSet(USB_MODULE_ID index, USB_PID pidValue)
{
     USB_TokenPIDSet_Default(index, pidValue);
}

PLIB_INLINE_API void PLIB_USB_TokenSend(USB_MODULE_ID index, USB_PID pidValue, uint8_t endpoint, uint8_t deviceAddress, bool isLowSpeed)
{
     USB_TokenSend_Default(index, pidValue, endpoint, deviceAddress, isLowSpeed);
}

PLIB_INLINE_API bool PLIB_USB_ExistsTokenPID(USB_MODULE_ID index)
{
     return USB_ExistsTokenPID_Default(index);
}

PLIB_INLINE_API uint8_t PLIB_USB_TokenEPGet(USB_MODULE_ID index)
{
     return USB_TokenEPGet_Default(index);
}

PLIB_INLINE_API void PLIB_USB_TokenEPSet(USB_MODULE_ID index, uint8_t epValue)
{
     USB_TokenEPSet_Default(index, epValue);
}

PLIB_INLINE_API bool PLIB_USB_ExistsTokenEP(USB_MODULE_ID index)
{
     return USB_ExistsTokenEP_Default(index);
}

PLIB_INLINE_API uint8_t PLIB_USB_SOFThresholdGet(USB_MODULE_ID index)
{
     return USB_SOFThresholdGet_Default(index);
}

PLIB_INLINE_API void PLIB_USB_SOFThresholdSet(USB_MODULE_ID index, uint8_t threshold)
{
     USB_SOFThresholdSet_Default(index, threshold);
}

PLIB_INLINE_API bool PLIB_USB_ExistsSOFThreshold(USB_MODULE_ID index)
{
     return USB_ExistsSOFThreshold_Default(index);
}

PLIB_INLINE_API void* PLIB_USB_BDTBaseAddressGet(USB_MODULE_ID index)
{
     return USB_BDTBaseAddressGet_Default(index);
}

PLIB_INLINE_API void PLIB_USB_BDTBaseAddressSet(USB_MODULE_ID index, void* address)
{
     USB_BDTBaseAddressSet_Default(index, address);
}

PLIB_INLINE_API bool PLIB_USB_ExistsBDTBaseAddress(USB_MODULE_ID index)
{
     return USB_ExistsBDTBaseAddress_Default(index);
}

PLIB_INLINE_API void PLIB_USB_EyePatternDisable(USB_MODULE_ID index)
{
     USB_EyePatternDisable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_EyePatternEnable(USB_MODULE_ID index)
{
     USB_EyePatternEnable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsEyePattern(USB_MODULE_ID index)
{
     return USB_ExistsEyePattern_Default(index);
}

PLIB_INLINE_API void PLIB_USB_StopInIdleEnable(USB_MODULE_ID index)
{
     USB_StopInIdleEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_StopInIdleDisable(USB_MODULE_ID index)
{
     USB_StopInIdleDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsStopInIdle(USB_MODULE_ID index)
{
     return USB_ExistsStopInIdle_Default(index);
}



PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_USB_PingPongModeSelect(USB_MODULE_ID index, USB_PING_PONG_MODE ppConfig)
{
     USB_PingPongModeSelect_Unsupported(index, ppConfig);
}

PLIB_INLINE_API USB_PING_PONG_MODE _PLIB_UNSUPPORTED PLIB_USB_PingPongModeGet(USB_MODULE_ID index)
{
     return USB_PingPongModeGet_Unsupported(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsPingPongMode(USB_MODULE_ID index)
{
     return USB_ExistsPingPongMode_Unsupported(index);
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_USB_UOEMonitorEnable(USB_MODULE_ID index)
{
     USB_UOEMonitorEnable_Unsupported(index);
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_USB_UOEMonitorDisable(USB_MODULE_ID index)
{
     USB_UOEMonitorDisable_Unsupported(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsUOEMonitor(USB_MODULE_ID index)
{
     return USB_ExistsUOEMonitor_Unsupported(index);
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_USB_OnChipPullUpEnable(USB_MODULE_ID index)
{
     USB_OnChipPullUpEnable_Unsupported(index);
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_USB_OnChipPullUpDisable(USB_MODULE_ID index)
{
     USB_OnChipPullUpDisable_Unsupported(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOnChipPullup(USB_MODULE_ID index)
{
     return USB_ExistsOnChipPullup_Unsupported(index);
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_USB_TransceiverEnable(USB_MODULE_ID index)
{
     USB_TransceiverEnable_Unsupported(index);
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_USB_TransceiverDisable(USB_MODULE_ID index)
{
     USB_TransceiverDisable_Unsupported(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsOnChipTransceiver(USB_MODULE_ID index)
{
     return USB_ExistsOnChipTransceiver_Unsupported(index);
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_USB_FullSpeedEnable(USB_MODULE_ID index)
{
     USB_FullSpeedEnable_Unsupported(index);
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_USB_FullSpeedDisable(USB_MODULE_ID index)
{
     USB_FullSpeedDisable_Unsupported(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsSpeedControl(USB_MODULE_ID index)
{
     return USB_ExistsSpeedControl_Unsupported(index);
}

PLIB_INLINE_API void PLIB_USB_EP0LSDirectConnectEnable(USB_MODULE_ID index)
{
     USB_EP0LSDirectConnectEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_EP0LSDirectConnectDisable(USB_MODULE_ID index)
{
     USB_EP0LSDirectConnectDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsEP0LowSpeedConnect(USB_MODULE_ID index)
{
     return USB_ExistsEP0LowSpeedConnect_Default(index);
}

PLIB_INLINE_API void PLIB_USB_EP0NakRetryEnable(USB_MODULE_ID index)
{
     USB_EP0NakRetryEnable_Default(index);
}

PLIB_INLINE_API void PLIB_USB_EP0NakRetryDisable(USB_MODULE_ID index)
{
     USB_EP0NakRetryDisable_Default(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsEP0NAKRetry(USB_MODULE_ID index)
{
     return USB_ExistsEP0NAKRetry_Default(index);
}

PLIB_INLINE_API void PLIB_USB_EPnTxSelect(USB_MODULE_ID index, uint8_t epValue, USB_EP_TXRX epTxRx)
{
     USB_EPnTxSelect_Default(index, epValue, epTxRx);
}

PLIB_INLINE_API void PLIB_USB_EPnRxSelect(USB_MODULE_ID index, uint8_t epValue, USB_EP_TXRX epTxRx)
{
     USB_EPnRxSelect_Default(index, epValue, epTxRx);
}

PLIB_INLINE_API void PLIB_USB_EPnTxRxSelect(USB_MODULE_ID index, uint8_t epValue, USB_EP_TXRX epTxRx)
{
     USB_EPnTxRxSelect_Default(index, epValue, epTxRx);
}

PLIB_INLINE_API bool PLIB_USB_ExistsEPnTxRx(USB_MODULE_ID index)
{
     return USB_ExistsEPnTxRx_Default(index);
}

PLIB_INLINE_API void PLIB_USB_EPnRxEnable(USB_MODULE_ID index, uint8_t endpoint)
{
     USB_EPnRxEnable_PIC32(index, endpoint);
}

PLIB_INLINE_API void PLIB_USB_EPnRxDisable(USB_MODULE_ID index, uint8_t endpoint)
{
     USB_EPnRxDisable_PIC32(index, endpoint);
}

PLIB_INLINE_API void PLIB_USB_EPnTxEnable(USB_MODULE_ID index, uint8_t endpoint)
{
     USB_EPnTxEnable_PIC32(index, endpoint);
}

PLIB_INLINE_API void PLIB_USB_EPnTxDisable(USB_MODULE_ID index, uint8_t endpoint)
{
     USB_EPnTxDisable_PIC32(index, endpoint);
}

PLIB_INLINE_API void PLIB_USB_EPnHandshakeEnable(USB_MODULE_ID index, uint8_t epValue)
{
     USB_EPnHandshakeEnable_PIC32(index, epValue);
}

PLIB_INLINE_API void PLIB_USB_EPnHandshakeDisable(USB_MODULE_ID index, uint8_t epValue)
{
     USB_EPnHandshakeDisable_PIC32(index, epValue);
}

PLIB_INLINE_API void PLIB_USB_EPnControlTransferEnable(USB_MODULE_ID index, uint8_t epValue)
{
     USB_EPnControlTransferEnable_PIC32(index, epValue);
}

PLIB_INLINE_API void PLIB_USB_EPnControlTransferDisable(USB_MODULE_ID index, uint8_t epValue)
{
     USB_EPnControlTransferDisable_PIC32(index, epValue);
}

PLIB_INLINE_API void PLIB_USB_EPnAttributesSet(USB_MODULE_ID index, uint8_t epValue, int direction, bool isControl, bool handshake)
{
     USB_EPnAttributesSet_PIC32(index, epValue, direction, isControl, handshake);
}

PLIB_INLINE_API void PLIB_USB_EPnDirectionDisable(USB_MODULE_ID index, uint8_t epValue, int direction)
{
     USB_EPnDirectionDisable_PIC32(index, epValue, direction);
}

PLIB_INLINE_API void PLIB_USB_EPnAttributesClear(USB_MODULE_ID index, uint8_t epValue)
{
     USB_EPnAttributesClear_PIC32(index, epValue);
}

PLIB_INLINE_API bool PLIB_USB_EPnIsStalled(USB_MODULE_ID index, uint8_t epValue)
{
     return USB_EPnIsStalled_PIC32(index, epValue);
}

PLIB_INLINE_API void PLIB_USB_EPnStallClear(USB_MODULE_ID index, uint8_t epValue)
{
     USB_EPnStallClear_PIC32(index, epValue);
}

PLIB_INLINE_API void PLIB_USB_EP0HostSetup(USB_MODULE_ID index)
{
     USB_EP0HostSetup_PIC32(index);
}

PLIB_INLINE_API bool PLIB_USB_ExistsEPnRxEnable(USB_MODULE_ID index)
{
     return USB_ExistsEPnRxEnable_PIC32(index);
}

PLIB_INLINE_API void* PLIB_USB_BufferAddressGet(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     return USB_BufferAddressGet_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferAddressSet(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong, void* bufferAddress)
{
     USB_BufferAddressSet_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong, bufferAddress);
}

PLIB_INLINE_API uint16_t PLIB_USB_BufferByteCountGet(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     return USB_BufferByteCountGet_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferByteCountSet(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong, uint16_t bufferByteCount)
{
     USB_BufferByteCountSet_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong, bufferByteCount);
}

PLIB_INLINE_API void PLIB_USB_BufferCancelReleaseToUSB(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     USB_BufferCancelReleaseToUSB_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferAllCancelReleaseToUSB(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, int nEndpoints)
{
     USB_BufferAllCancelReleaseToUSB_PIC32(index, pBDT, ppMode, nEndpoints);
}

PLIB_INLINE_API void PLIB_USB_BufferClearAll(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     USB_BufferClearAll_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API USB_BUFFER_DATA01 PLIB_USB_BufferDataToggleGet(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     return USB_BufferDataToggleGet_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferDataToggleSelect(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong, USB_BUFFER_DATA01 bufferData01)
{
     USB_BufferDataToggleSelect_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong, bufferData01);
}

PLIB_INLINE_API void PLIB_USB_BufferDataToggleSyncEnable(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     USB_BufferDataToggleSyncEnable_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferDataToggleSyncDisable(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     USB_BufferDataToggleSyncDisable_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API uint8_t PLIB_USB_BufferIndexGet(USB_MODULE_ID index, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     return USB_BufferIndexGet_PIC32(index, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferPIDBitsClear(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     USB_BufferPIDBitsClear_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API uint8_t PLIB_USB_BufferPIDGet(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     return USB_BufferPIDGet_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API bool PLIB_USB_BufferReleasedToSW(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     return USB_BufferReleasedToSW_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferReleaseToUSB(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     USB_BufferReleaseToUSB_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferSchedule(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong, void* bufferAddress, int16_t bufferByteCount, USB_BUFFER_SCHEDULE_DATA01 bufferData01)
{
     USB_BufferSchedule_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong, bufferAddress, bufferByteCount, bufferData01);
}

PLIB_INLINE_API void PLIB_USB_BufferStallDisable(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     USB_BufferStallDisable_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferStallEnable(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     USB_BufferStallEnable_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API bool PLIB_USB_BufferStallGet(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection, USB_BUFFER_PING_PONG bufferPingPong)
{
     return USB_BufferStallGet_PIC32(index, pBDT, ppMode, epValue, bufferDirection, bufferPingPong);
}

PLIB_INLINE_API void PLIB_USB_BufferEP0RxStatusInitialize(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, USB_BUFFER_PING_PONG pingpong, uint16_t bufferByteCount)
{
     USB_BufferEP0RxStatusInitialize_PIC32(index, pBDT, ppMode, pingpong, bufferByteCount);
}

PLIB_INLINE_API void PLIB_USB_BufferClearAllDTSEnable(USB_MODULE_ID index, void* pBDT, USB_PING_PONG_MODE ppMode, uint8_t epValue, USB_BUFFER_DIRECTION bufferDirection)
{
     USB_BufferClearAllDTSEnable_PIC32(index, pBDT, ppMode, epValue, bufferDirection);
}

PLIB_INLINE_API bool PLIB_USB_ExistsBDTFunctions(USB_MODULE_ID index)
{
     return USB_ExistsBDTFunctions_PIC32(index);
}

#endif
