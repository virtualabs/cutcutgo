/*******************************************************************************
  USB Controller Driver Core Routines.

  Company:
    Microchip Technology Inc.

  File Name:
    drv_usbfs.c

  Summary:
    USB Controller Driver Core Routines intended for Dynamic implementation.

  Description:
    The USB Controller driver provides a simple interface to manage the USB
    modules on Microchip microcontrollers.  This file Implements the core
    interface routines to be used both by the client(USB Host or Device layer)
    and the system for communicating with USB Contoller driver.  While building
    the driver from source, ALWAYS use this file in the build.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute Software
only when embedded on a Microchip microcontroller or digital  signal  controller
that is integrated into your product or third party  product  (pursuant  to  the
sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS  WITHOUT  WARRANTY  OF  ANY  KIND,
EITHER EXPRESS  OR  IMPLIED,  INCLUDING  WITHOUT  LIMITATION,  ANY  WARRANTY  OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A  PARTICULAR  PURPOSE.
IN NO EVENT SHALL MICROCHIP OR  ITS  LICENSORS  BE  LIABLE  OR  OBLIGATED  UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,  BREACH  OF  WARRANTY,  OR
OTHER LEGAL  EQUITABLE  THEORY  ANY  DIRECT  OR  INDIRECT  DAMAGES  OR  EXPENSES
INCLUDING BUT NOT LIMITED TO ANY  INCIDENTAL,  SPECIAL,  INDIRECT,  PUNITIVE  OR
CONSEQUENTIAL DAMAGES, LOST  PROFITS  OR  LOST  DATA,  COST  OF  PROCUREMENT  OF
SUBSTITUTE  GOODS,  TECHNOLOGY,  SERVICES,  OR  ANY  CLAIMS  BY  THIRD   PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE  THEREOF),  OR  OTHER  SIMILAR  COSTS.
*******************************************************************************/
//DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Include Files
// *****************************************************************************
// *****************************************************************************

#include "configuration.h"
#include "driver/usb/usbfs/src/drv_usbfs_local.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data
// *****************************************************************************
// *****************************************************************************

/******************************************************
 * Hardware instance, endpoint table and client object
 * lumped together as group to save memory.
 ******************************************************/
DRV_USBFS_GROUP gDrvUSBGroup[DRV_USBFS_INSTANCES_NUMBER];

// *****************************************************************************
// *****************************************************************************
// Section: USB Controller Driver Interface Implementations
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    SYS_MODULE_OBJ DRV_USBFS_Initialize
    ( 
        const SYS_MODULE_INDEX index,
        const SYS_MODULE_INIT * const init
    )

  Summary:
    Initializes the USB Driver.
   
  Description:
    This function initializes the USB Driver, making it ready for clients to
    open. The driver initialization does not complete when this function
    returns. The DRV_USBFS_Tasks function must called periodically to complete
    the driver initialization. The DRV_USBHS_Open function will fail if the
    driver was not initialized or if initialization has not completed.
  
  Remarks:
    See drv_usbfs.h for usage information.
*/

SYS_MODULE_OBJ DRV_USBFS_Initialize 
(
    const SYS_MODULE_INDEX  drvIndex,
    const SYS_MODULE_INIT * const init
)
{
    DRV_USBFS_OBJ * pUSBDrvObj = (DRV_USBFS_OBJ *)NULL;
    USB_MODULE_ID usbID = USB_NUMBER_OF_MODULES;
    DRV_USBFS_INIT * pusbInit = (DRV_USBFS_INIT *)NULL;
    SYS_MODULE_OBJ returnValue = SYS_MODULE_OBJ_INVALID;

    if(drvIndex < DRV_USBFS_INSTANCES_NUMBER)
    {
        /* Driver index is valid */
        if(gDrvUSBGroup[drvIndex].gDrvUSBObj.inUse == false)
        {
            /* Driver object is available. Grab the particular USB instance
             * object*/
            gDrvUSBGroup[drvIndex].gDrvUSBObj.inUse = true;

            /* Assign to the local pointer the init data passed */
            pusbInit = (DRV_USBFS_INIT *) init;
            usbID = pusbInit->usbID;
            pUSBDrvObj = &gDrvUSBGroup[drvIndex].gDrvUSBObj;

            /* If this being built in an OS application, then create a mutex */
            if(OSAL_MUTEX_Create(&pUSBDrvObj->mutexID) == OSAL_RESULT_TRUE)
            {
                /* Populate the driver instance object with required data */
                pUSBDrvObj->status = SYS_STATUS_BUSY;
                pUSBDrvObj->usbID = usbID;
                pUSBDrvObj->operationMode = pusbInit->operationMode;
                pUSBDrvObj->pBDT = (DRV_USBFS_BDT_ENTRY *)(pusbInit->endpointTable);
                pUSBDrvObj->isOpened = false;
                pUSBDrvObj->pEventCallBack = NULL;

                /* Assign the endpoint table */
                pUSBDrvObj->endpointTable = &gDrvUSBGroup[drvIndex].gDrvUSBEndpoints[0];
                pUSBDrvObj->interruptSource  = pusbInit->interruptSource;

                /* Enable USB module(U1PWRC<0>). This internally does the following:
                 * - Start the USB clock
                 * - Allow the USB interrupt to be activated
                 * - Select USB as the owner of the necessary I/O pins
                 * - Enable the USB transceiver
                 * - Enable the USB comparators */

                PLIB_USB_Enable(usbID);

                /* Setup the Hardware */
                if(pusbInit->stopInIdle)
                {
                    PLIB_USB_StopInIdleEnable( usbID );
                }
                else
                {
                    PLIB_USB_StopInIdleDisable( usbID );
                }

#ifdef PLIB_USB_ExistsAutomaticSuspend
                if(PLIB_USB_ExistsAutomaticSuspend(usbID))
                {
                    if(pusbInit->suspendInSleep)
                    {
                        PLIB_USB_AutoSuspendEnable( usbID );
                    }
                    else
                    {
                        PLIB_USB_AutoSuspendDisable( usbID );
                    }
                }
#endif
                /* Setup the USB Module as per selected mode */
                switch(pusbInit->operationMode)
                {
                    case DRV_USBFS_OPMODE_DEVICE:

                        /* Initialize USB Controller for Device mode */
                        _DRV_USBFS_DEVICE_INIT(pUSBDrvObj, drvIndex);
                        break;

                    case DRV_USBFS_OPMODE_HOST:

                        /* Initialize USB Controller for Host mode */
                        _DRV_USBFS_HOST_INIT(pUSBDrvObj, drvIndex, pusbInit);
                        break;

                    case DRV_USBFS_OPMODE_OTG:
                        /* Not implemented at this point of time*/
                        break;

                    default:
                        SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: What mode are you trying?");
                        break;
                }

                /* Assign the BDT table base address */
                PLIB_USB_BDTBaseAddressSet(usbID , (void *)((uint32_t)KVA_TO_PA(pUSBDrvObj->pBDT)));    

                /* Indicate that the object is ready and in use and return the driver
                 * handle */

                pUSBDrvObj->status = SYS_STATUS_READY;
                returnValue = drvIndex;
            }
            else
            {
                /* Could not create mutex. Return the object. */
                gDrvUSBGroup[drvIndex].gDrvUSBObj.inUse = false;
                SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Mutex create failed");
            } 
        }
        else
        {
            /* Cannot initialize an object that is already in use. */
            SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Hardware Instance already in use");
        }
    }
    else
    {
        SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Invalid driver index");
    }

    return (returnValue);
}

// *****************************************************************************
/* Function:
    void DRV_USBFS_Deinitialize( const SYS_MODULE_OBJ object )

  Summary:
    This function deinitializes the USBFS driver instance. 

  Description:
    This function deinitializes the USBFS driver instance. 

  Remarks:
    A typicall USB application may not to called this function.
*/

void DRV_USBFS_Deinitialize
( 
    const SYS_MODULE_OBJ  object
)
{
    DRV_USBFS_OBJ * pUSBDrvObj = NULL;

    if((object != SYS_MODULE_OBJ_INVALID) && (object < DRV_USBFS_INSTANCES_NUMBER))
    {
        /* Object is valid */
        if(gDrvUSBGroup[object].gDrvUSBObj.inUse == true)
        {
            pUSBDrvObj = &gDrvUSBGroup[object].gDrvUSBObj;

            /* Release the USB instance object */
            pUSBDrvObj->inUse = false;

            /* Reset the open flag */
            pUSBDrvObj->isOpened = false;

            /* Delete the mutex */
            OSAL_MUTEX_Delete(&pUSBDrvObj->mutexID);

            /* Uninitialize the status*/
            pUSBDrvObj->status = SYS_STATUS_UNINITIALIZED;

            pUSBDrvObj->pEventCallBack = NULL;

            /* Clear and disable the interrupts */
            _DRV_USBFS_InterruptSourceDisable(pUSBDrvObj->interruptSource);
            _DRV_USBFS_InterruptSourceClear(pUSBDrvObj->interruptSource);

            /* Turn off USB module */
            PLIB_USB_Disable(pUSBDrvObj->usbID);
        }
        else
        {
            /* Cannot deinitialize an object that is not in use. */
            SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Instance not in use");
        }
    }
    else
    {
        /* Invalid object */
        SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Invalid System Module Object");
    }
} 

// *****************************************************************************
/* Function:
    SYS_STATUS DRV_USBFS_Status( const SYS_MODULE_OBJ object )

  Summary:
    Provides the current status of the USB Driver module.

  Description:
    This function provides the current status of the USB Driver module.

  Remarks:
    See drv_usbfs.h for usage information.
*/

SYS_STATUS DRV_USBFS_Status
(
    const SYS_MODULE_OBJ object
)
{
    SYS_STATUS returnValue = SYS_STATUS_UNINITIALIZED;

    /* Check if USB instance object is valid */
    if((object != SYS_MODULE_OBJ_INVALID) || (object < DRV_USBFS_INSTANCES_NUMBER))
    {
        returnValue = gDrvUSBGroup[object].gDrvUSBObj.status;
    }
    else
    {
        /* Invalid object */
        SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Invalid object");
    }

    /* Return the status of the driver object */
    return returnValue;
}

// *****************************************************************************
/* Function:
    DRV_HANDLE DRV_USBFS_Open
    (
        const SYS_MODULE_INDEX drvIndex,
        const DRV_IO_INTENT ioIntent 
    )

  Summary:
    Opens the specified USB Driver instance and returns a handle to it.
   
  Description:
    This function opens the specified USB Driver instance and provides a handle
    that must be provided to all other client-level operations to identify the
    caller and the instance of the driver. The intent flag is ignored.  Any
    other setting of the intent flag will return a invalid driver handle. A
    driver instance can only support one client. Trying to open a driver that
    has an existing client will result in an unsuccessful function call.

  Remarks:
    See drv_usbfs.h for usage information.
*/

DRV_HANDLE DRV_USBFS_Open
(
    const SYS_MODULE_INDEX drvIndex,
    const DRV_IO_INTENT ioIntent 
)
{
    DRV_HANDLE handle = DRV_HANDLE_INVALID;

    /* Check if the specified driver index is in valid range */
    if(drvIndex < DRV_USBFS_INSTANCES_NUMBER)
    {
        if(gDrvUSBGroup[drvIndex].gDrvUSBObj.status == SYS_STATUS_READY)
        {
            if(gDrvUSBGroup[drvIndex].gDrvUSBObj.isOpened == false)
            {
                gDrvUSBGroup[drvIndex].gDrvUSBObj.isOpened = true;
                
                /* Handle is the pointer to the client object */
                handle = ((DRV_HANDLE)&(gDrvUSBGroup[drvIndex].gDrvUSBObj));
            }
            else
            {
                /* Driver supports exclusive open only */
                SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver already opened once. Cannot open again");
            }
        }
        else
        {
            /* The USB module should be ready */
            SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Was the driver initialized?");
        }
    }
    else
    {
        SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Bad Driver Index");
    }

    /* Return invalid handle */
    return handle;
}

// *****************************************************************************
/* Function:
    void DRV_USBFS_Close( DRV_HANDLE client )

  Summary:
    Closes an opened-instance of the  USB Driver.

  Description:
    This function closes an opened-instance of the  USB Driver, invalidating the
    handle.

  Remarks:
    See drv_usbfs.h for usage information.
*/

void DRV_USBFS_Close
(
    DRV_HANDLE handle
)
{
    DRV_USBFS_OBJ * pUSBDrvObj = (DRV_USBFS_OBJ *)NULL;

    /* Check if the handle is valid */
    if((handle != DRV_HANDLE_INVALID) && (handle != (DRV_HANDLE)(NULL)))
    {
        /* Reset the relevant parameters */
        pUSBDrvObj = (DRV_USBFS_OBJ *)handle;
        if(pUSBDrvObj->isOpened)
        {
            pUSBDrvObj->isOpened = false;
            pUSBDrvObj->pEventCallBack = NULL;
        }
        else
        {
            SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Client Handle already closed");
        }
    }
    else
    {
        SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Bad Client Handle");
    }
}

// *****************************************************************************
/* Function:
    DRV_HANDLE DRV_USBFS_Tasks_ISR( SYS_MODULE_OBJ object )

  Summary:
    Maintains the driver's Interrupt state machine and implements its ISR.

  Description:
    This function is used to maintain the driver's internal Interrupt state
    machine and implement its ISR for interrupt-driven implementations.

  Remarks:
    See drv_usbfs.h for usage information.
*/

void DRV_USBFS_Tasks_ISR
(
    SYS_MODULE_OBJ object
)
{
    DRV_USBFS_OBJ * pUSBDriver = (DRV_USBFS_OBJ *)NULL;

    pUSBDriver = &gDrvUSBGroup[object].gDrvUSBObj;

    /* We are entering an interrupt context */
    pUSBDriver->inInterruptContext = true;

    /* Clear the interrupt */
    _DRV_USBFS_InterruptSourceClear(pUSBDriver->interruptSource);
   
    switch(pUSBDriver->operationMode)
    {
        case DRV_USBFS_OPMODE_DEVICE:
            
            /* Driver is running in Device Mode */
            _DRV_USBFS_DEVICE_TASKS_ISR(pUSBDriver);
            break;
        
        case DRV_USBFS_OPMODE_HOST:

            /* Driver is running in Host Mode */
            _DRV_USBFS_HOST_TASKS_ISR(pUSBDriver);
            break;

        case DRV_USBFS_OPMODE_OTG:
            /* OTG mode is not supported yet */
            break;

        default:
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: What mode are you trying?");
            break;
    }
  
    pUSBDriver->inInterruptContext = false;
}

// *****************************************************************************
/* Function:
    void DRV_USBFS_ClientEventCallBackSet
    (
        DRV_HANDLE handle,
        uintptr_t hReferenceData,
        DRV_USBFS_EVENT_CALLBACK eventCallBack
    )

  Summary:
    This function sets up the event callback function that is invoked by the USB
    controller driver to notify the client of USB bus events.
   
  Description:
    This function sets up the event callback function that is invoked by the USB
    controller driver to notify the client of USB bus events. The callback is
    disabled by either not calling this function after the DRV_USBFS_Open
    function has been called or by setting the myEventCallBack argument as NULL.
    When the callback function is called, the hReferenceData argument is
    returned.

  Remarks:
    See drv_usbfs.h for usage information.
*/

void DRV_USBFS_ClientEventCallBackSet
( 
    DRV_HANDLE handle,
    uintptr_t hReferenceData,
    DRV_USB_EVENT_CALLBACK eventCallBack 
)
{
    DRV_USBFS_OBJ * pUSBDrvObj = (DRV_USBFS_OBJ *)handle;
    
    /* Check if the handle is valid or opened */
    if((handle != DRV_HANDLE_INVALID) && (handle != (DRV_HANDLE)(NULL)) && (pUSBDrvObj->isOpened == true))
    {
        /* Assign event call back and reference data */
        pUSBDrvObj->hClientArg = hReferenceData;
        pUSBDrvObj->pEventCallBack = eventCallBack;

        /* If the driver is operating in device mode, this is the time we enable
         * the USB interrupt */

        if(pUSBDrvObj->operationMode == USB_OPMODE_DEVICE)
        {
            /* Enable the session valid interrupt */
            PLIB_USB_OTG_InterruptEnable(pUSBDrvObj->usbID, USB_OTG_INT_SESSION_VALID);
            
            /* Enable the interrupt */
            _DRV_USBFS_InterruptSourceEnable(pUSBDrvObj->interruptSource);
        }
    }
    else
    {
        SYS_DEBUG(SYS_ERROR_INFO, "\r\nUSBFS Driver: Bad Client or client closed");
    }
} 

// *****************************************************************************
/* Function:
    void DRV_USBFS_Tasks( SYS_MODULE_OBJ object )

  Summary:
    Maintains the driver's state machine when the driver is configured for 
    polled mode.

  Description:
    Maintains the driver's state machine when the driver is configured for 
    polled mode. This function should be called from the system tasks routine.

  Remarks:
    Refer to drv_usbfs.h for usage information.
*/

void DRV_USBFS_Tasks(SYS_MODULE_OBJ object)
{
    /* This driver does not have any non interrupt tasks. When the driver
     * is configured for polled mode operation, the _DRV_USBFS_Tasks_ISR function
     * will map to DRV_USBFS_Tasks_ISR function. In interrupt mode, this function
     * will be mapped to nothing and hence this function will not have any
     * effect. */

    _DRV_USBFS_Tasks_ISR(object);
}

void DRV_USBFS_Tasks_ISR_USBDMA( SYS_MODULE_OBJ object )
{
    /* This function is implemented to only maintain compatibility with the
     * PIC32MZ High Speed USB Driver. This function does not do anything on the
     * PIC32MX USB driver and is not required to be called in a PIC32MX USB
     * applicaiton */
}

// *****************************************************************************
/* Function:
    void DRV_USBFS_USB_Handler(void)

  Summary:
    USBFS Interrupt Handler 
	
  Description:
    This is USBFS Interrupt Handler 

  Remarks:
	None 
*/

void DRV_USBFS_USB_Handler(void)
{
	DRV_USBFS_Tasks_ISR(sysObj.drvUSBFSObject); 
}
