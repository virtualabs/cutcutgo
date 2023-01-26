/*******************************************************************************
  MPLAB Harmony Application Source File
  
  Company:
    Microchip Technology Inc.
  
  File Name:
    app_freertos.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It 
    implements the logic of the application's state machine and it may call 
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
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
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Included Files 
// *****************************************************************************
// *****************************************************************************

#include "app_freertos.h"
#include "queue.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

uint8_t __attribute__((aligned(16))) switchPromptUSB[] = "\r\nPUSH BUTTON PRESSED";

uint8_t CACHE_ALIGN cdcReadBuffer[APP_READ_BUFFER_SIZE];
uint8_t CACHE_ALIGN cdcWriteBuffer[APP_READ_BUFFER_SIZE];

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.
    
    Application strings and buffers are be defined outside this structure.
*/
QueueHandle_t USBDeviceTask_EventQueue_Handle;

APP_DATA appData;



void USBDevice_Task(void* p_arg);
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/*************************************************
 * Application Device Layer Event Handler
 *************************************************/

void APP_USBDeviceEventHandler(USB_DEVICE_EVENT event, void * pData,
                               uintptr_t context)
{
    uint8_t configurationValue;
    uint32_t USB_Event = 0;
    portBASE_TYPE xHigherPriorityTaskWoken1 = pdFALSE;

    switch( event )
    {
        case USB_DEVICE_EVENT_POWER_REMOVED:
            /* Attach the device */
            USB_DEVICE_Detach (appData.deviceHandle);
            LED_Off(); 
            break;
        case USB_DEVICE_EVENT_RESET:
        case USB_DEVICE_EVENT_DECONFIGURED:
            LED_Off(); 
            break;

        case USB_DEVICE_EVENT_CONFIGURED:
            LED_On(); 
            /* pData will point to the configuration. Check the configuration */
            configurationValue = ((USB_DEVICE_EVENT_DATA_CONFIGURED *)pData)->configurationValue;
            if(configurationValue == 1)
            {
                /* Register the CDC Device application event handler here.
                 * Note how the appData object pointer is passed as the
                 * user data */
                USB_DEVICE_CDC_EventHandlerSet(0,
                        APP_USBDeviceCDCEventHandler, (uintptr_t)&appData);

                USB_DEVICE_CDC_EventHandlerSet(1,
                        APP_USBDeviceCDCEventHandler, (uintptr_t)&appData);

                /*let processing USB Task know USB if configured..*/
                USB_Event = USBDEVICETASK_USBCONFIGURED_EVENT;

                xQueueSendToBackFromISR(USBDeviceTask_EventQueue_Handle, &USB_Event, 
                    &xHigherPriorityTaskWoken1);
                portEND_SWITCHING_ISR( xHigherPriorityTaskWoken1 );
            }

            break;

        case USB_DEVICE_EVENT_SOF:

            /* Received SOF Event */
            USB_Event = USBDEVICETASK_SOF_EVENT;

            xQueueSendToBackFromISR(USBDeviceTask_EventQueue_Handle, &USB_Event, 
                &xHigherPriorityTaskWoken1);
            portEND_SWITCHING_ISR( xHigherPriorityTaskWoken1 );
            
            break;

        case USB_DEVICE_EVENT_SUSPENDED:
            LED_Off(); 
            break;

        case USB_DEVICE_EVENT_RESUMED:
            break;
        case USB_DEVICE_EVENT_POWER_DETECTED:
            /*let processing USB Task know USB is powered..*/
            USB_Event = USBDEVICETASK_USBPOWERED_EVENT;

            xQueueSendToBackFromISR(USBDeviceTask_EventQueue_Handle, &USB_Event, 
                &xHigherPriorityTaskWoken1);
            portEND_SWITCHING_ISR( xHigherPriorityTaskWoken1 );
            /* Attach the device */
            USB_DEVICE_Attach (appData.deviceHandle);
            break;
        case USB_DEVICE_EVENT_ERROR:
        default:
            break;
    }
}


/************************************************
 * CDC Function Driver Application Event Handler
 ************************************************/

USB_DEVICE_CDC_EVENT_RESPONSE APP_USBDeviceCDCEventHandler
(
    USB_DEVICE_CDC_INDEX index ,
    USB_DEVICE_CDC_EVENT event ,
    void* pData,
    uintptr_t userData
)
{

    APP_DATA * appDataObject;
    appDataObject = (APP_DATA *)userData;
    USB_CDC_CONTROL_LINE_STATE * controlLineStateData;
    uint16_t * breakData;
    uint32_t  USB_Event = 0;
    portBASE_TYPE xHigherPriorityTaskWoken1 = pdFALSE;

    switch ( event )
    {
        case USB_DEVICE_CDC_EVENT_GET_LINE_CODING:

            /* This means the host wants to know the current line
             * coding. This is a control transfer request. Use the
             * USB_DEVICE_ControlSend() function to send the data to
             * host.  */

            USB_DEVICE_ControlSend(appDataObject->deviceHandle,
                    &appDataObject->appCOMPortObjects[index].getLineCodingData,
                    sizeof(USB_CDC_LINE_CODING));

            break;

        case USB_DEVICE_CDC_EVENT_SET_LINE_CODING:

            /* This means the host wants to set the line coding.
             * This is a control transfer request. Use the
             * USB_DEVICE_ControlReceive() function to receive the
             * data from the host */

            USB_DEVICE_ControlReceive(appDataObject->deviceHandle,
                    &appDataObject->appCOMPortObjects[index].setLineCodingData,
                    sizeof(USB_CDC_LINE_CODING));

            break;

        case USB_DEVICE_CDC_EVENT_SET_CONTROL_LINE_STATE:

            /* This means the host is setting the control line state.
             * Read the control line state. We will accept this request
             * for now. */

            controlLineStateData = (USB_CDC_CONTROL_LINE_STATE *)pData;
            appDataObject->appCOMPortObjects[index].controlLineStateData.dtr
                    = controlLineStateData->dtr;
            appDataObject->appCOMPortObjects[index].controlLineStateData.carrier
                    = controlLineStateData->carrier;

            USB_DEVICE_ControlStatus(appDataObject->deviceHandle, USB_DEVICE_CONTROL_STATUS_OK);

            break;

        case USB_DEVICE_CDC_EVENT_SEND_BREAK:

            /* This means that the host is requesting that a break of the
             * specified duration be sent. Read the break duration */

            breakData = (uint16_t *)pData;
            appDataObject->appCOMPortObjects[index].breakData = *breakData;
            break;

        case USB_DEVICE_CDC_EVENT_READ_COMPLETE:
            USB_Event = USBDEVICETASK_READDONECOM1_EVENT;
            
            appDataObject->numBytesRead = ((USB_DEVICE_CDC_EVENT_DATA_READ_COMPLETE*)pData)->length; 
            
            /* Let processing USB Task know Data Read is complete */
            xQueueSendToBackFromISR(USBDeviceTask_EventQueue_Handle, &USB_Event, 
                &xHigherPriorityTaskWoken1);
            portEND_SWITCHING_ISR( xHigherPriorityTaskWoken1 );
            break;

        case USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:

            /* The data stage of the last control transfer is
             * complete. For now we accept all the data */

            USB_DEVICE_ControlStatus(appDataObject->deviceHandle, USB_DEVICE_CONTROL_STATUS_OK);
            break;

        case USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_SENT:

            /* This means the GET LINE CODING function data is valid. We don't
             * do much with this data in this demo. */

            break;

        case USB_DEVICE_CDC_EVENT_WRITE_COMPLETE:
            USB_Event = USBDEVICETASK_WRITEDONECOM1_EVENT;
          
            /* Let processing USB Task know USB Write is complete */
            xQueueSendToBackFromISR(USBDeviceTask_EventQueue_Handle, &USB_Event, 
                &xHigherPriorityTaskWoken1);
            portEND_SWITCHING_ISR( xHigherPriorityTaskWoken1 );
            break;

        default:
            break;
    }
    return USB_DEVICE_CDC_EVENT_RESPONSE_NONE;
}


// *****************************************************************************
/* Function:
    void APP_USB_DEVICE_AttachTask(void)

  Summary:
    It is an RTOS task for Attaching and Configuring USB Device to Host.

  Description:
    This function is an RTOS task for attaching the USB Device to Host. Following
 are the actions done by this Task.
 1) Open an instance of Harmony USB Device Framework by periodically calling
    (in every 1 milli Second) USB_DEVICE_Open()function until Harmony USB Device
     framework is successfully opened.
 2) If the USB Device Framework is opened successfully pass an application event
    Handler to the USB framework for receiving USB Device Events.
 3) Attach to the USB Host by calling USB attach function.
 4) Acquire a binary semaphore to wait until USB Host Configures the Device. The
    semaphore is released when a USB_DEVICE_EVENT_CONFIGURED event is received at
    the USB Device event handler.
 5) Resume all CDC read/write tasks.
 6) Suspend USB attach task.

  Returns:
     None
*/
void USBDevice_Task(void* p_arg)
{
    BaseType_t errStatus;
    uint32_t USBDeviceTask_State = USBDEVICETASK_OPENUSB_STATE;
    uint32_t USBDeviceTask_Event = 0;
    USB_DEVICE_CDC_TRANSFER_HANDLE COM1Read_Handle, COM1Write_Handle;


    COM1Read_Handle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;
    COM1Write_Handle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;
    int i; 
    
    for(;;)
    {
        switch(USBDeviceTask_State)
        {
            case USBDEVICETASK_OPENUSB_STATE:
                /* Open the device layer */
                appData.deviceHandle = USB_DEVICE_Open( USB_DEVICE_INDEX_0,
                    DRV_IO_INTENT_READWRITE );
                /* Check if USB Device stack returned a valid handle */
                if(appData.deviceHandle != USB_DEVICE_HANDLE_INVALID)
                {
                    /* Register a callback with USB Device layer to get event 
                     * notification (for Endpoint 0) */
                    USB_DEVICE_EventHandlerSet(appData.deviceHandle, APP_USBDeviceEventHandler, 0);
                    USBDeviceTask_State = USBDEVICETASK_PROCESSUSBEVENTS_STATE;
                    break;
                }
                /* Try again in 10 msec */
                USBDeviceTask_State = USBDEVICETASK_OPENUSB_STATE;
                vTaskDelay(10 / portTICK_PERIOD_MS);
                break;
            case USBDEVICETASK_PROCESSUSBEVENTS_STATE:
                /* Once here, USB task becomes event driven, user input will 
                  will generate events. */
                USBDeviceTask_State = USBDEVICETASK_PROCESSUSBEVENTS_STATE;                

                /* Wait for an event to occur and process, see event handler*/
                errStatus = xQueueReceive(USBDeviceTask_EventQueue_Handle,
                                &USBDeviceTask_Event,portMAX_DELAY);

                /* Make sure event was successfully received*/
                if(errStatus == pdFALSE)
                    break;

                switch(USBDeviceTask_Event)
                {
                    case USBDEVICETASK_USBPOWERED_EVENT:
                        USB_DEVICE_Attach (appData.deviceHandle);
                        break;
                        
                    case USBDEVICETASK_USBCONFIGURED_EVENT:
                        /*USB ready, wait for user input on either com port*/

                        /* Schedule a CDC read on COM1 */
                        USB_DEVICE_CDC_Read
                        (
                            USB_DEVICE_CDC_INDEX_0, 
                            &COM1Read_Handle,
                            cdcReadBuffer,
                            APP_READ_BUFFER_SIZE
                        );  
                        break;                    
                        
                    case USBDEVICETASK_SOF_EVENT:
                        /*USB ready, wait for user input on either com port*/
                        if(SWITCH_STATE_PRESSED == (SWITCH_Get()))
                        {
                            if(appData.ignoreSwitchPress)
                            {
                                /* A timer event has occurred. Update the de-bounce timer */
                                appData.switchDebounceTimer++;

                                if (USB_DEVICE_ActiveSpeedGet(appData.deviceHandle) == USB_SPEED_FULL)
                                {
                                    appData.debounceCount = APP_USB_SWITCH_DEBOUNCE_COUNT_FS;
                                }
                                else if (USB_DEVICE_ActiveSpeedGet(appData.deviceHandle) == USB_SPEED_HIGH)
                                {
                                    appData.debounceCount = APP_USB_SWITCH_DEBOUNCE_COUNT_HS;
                                }
                                if(appData.switchDebounceTimer >= appData.debounceCount)
                                {
                                    /* Indicate that we have valid switch press. The switch is
                                     * pressed flag will be cleared by the application tasks
                                     * routine. We should be ready for the next key press.*/
                                    appData.switchDebounceTimer = 0;
                                    appData.ignoreSwitchPress = false;
                                    
                                    USB_DEVICE_CDC_Write
                                    (
                                        USB_DEVICE_CDC_INDEX_0,
                                        &COM1Write_Handle,
                                        switchPromptUSB, 
                                        sizeof(switchPromptUSB),
                                        USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE
                                    );
                                        
                                }
                            }
                            else
                            {
                                /* We have a fresh key press */
                                appData.ignoreSwitchPress = true;
                                appData.switchDebounceTimer = 0;
                            }
                        }
                        else
                        {
                            /* No key press. Reset all the indicators. */
                            appData.ignoreSwitchPress = false;
                            appData.switchDebounceTimer = 0;
                        }
                        
                        break;                    
                        
                    case USBDEVICETASK_READDONECOM1_EVENT:
                        /* Send the received data to COM2 */
                        /* Else echo each received character by adding 1 */
                        for(i = 0; i < appData.numBytesRead; i++)
                        {
                            if((cdcReadBuffer[i] != 0x0A) && (cdcReadBuffer[i] != 0x0D))
                            {
                                cdcWriteBuffer[i] = cdcReadBuffer[i] + 1;
                            }
                        }
                        USB_DEVICE_CDC_Write
                        (
                            USB_DEVICE_CDC_INDEX_0,
                            &COM1Write_Handle,
                            cdcWriteBuffer, 
                            appData.numBytesRead,
                            USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE
                        );
                        break;
                    case  USBDEVICETASK_WRITEDONECOM1_EVENT:
                        /* Schedule a CDC read on COM1 */
                        USB_DEVICE_CDC_Read
                        (
                            USB_DEVICE_CDC_INDEX_0, 
                            &COM1Read_Handle,
                            cdcReadBuffer,
                            APP_READ_BUFFER_SIZE
                        );  
                        break; 
                        
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_FREERTOS_Initialize ( void )
{

    USBDeviceTask_EventQueue_Handle = xQueueCreate(15, sizeof(uint32_t));

    /*dont proceed if queue was not created...*/
    if(USBDeviceTask_EventQueue_Handle == NULL)
    {     
        while(1);
    }
    /* Initialize the application object */
    appData.deviceHandle = USB_DEVICE_HANDLE_INVALID;
    appData.appCOMPortObjects[0].getLineCodingData.dwDTERate = 9600;
    appData.appCOMPortObjects[0].getLineCodingData.bDataBits = 8;
    appData.appCOMPortObjects[0].getLineCodingData.bParityType = 0;
    appData.appCOMPortObjects[0].getLineCodingData.bCharFormat = 0;
    
    appData.ignoreSwitchPress = false;
    appData.switchDebounceTimer = 0;
    appData.debounceCount = 0;
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */
void APP_FREERTOS_Tasks ( void )
{
    static bool blockAppTask = false;
    BaseType_t errStatus;
    if (blockAppTask == false)
    {
        errStatus = xTaskCreate((TaskFunction_t) USBDevice_Task,
                "USB_AttachTask",
                USBDEVICETASK_SIZE,
                NULL,
                USBDEVICETASK_PRIO,
                NULL);
        /*Don't proceed if Task was not created...*/
        if(errStatus != pdTRUE)
        {
            while(1);
        }

        /* The APP_Tasks() function need to exceute only once. Block it now */
        blockAppTask = true;
    }  
}
 

/*******************************************************************************
 End of File
 */

