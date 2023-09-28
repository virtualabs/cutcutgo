/*******************************************************************************
  System Initialization File

  File Name:
    initialization.c

  Summary:
    This file contains source code necessary to initialize the system.

  Description:
    This file contains source code necessary to initialize the system.  It
    implements the "SYS_Initialize" function, defines the configuration bits,
    and allocates any necessary global system resources,
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
#include "configuration.h"
#include "definitions.h"
#include "device.h"



// ****************************************************************************
// ****************************************************************************
// Section: Configuration Bits
// ****************************************************************************
// ****************************************************************************

#ifndef BOOTLOADER_MODE

    /*** DEVCFG0 ***/
    #pragma config DEBUG =      OFF
    #pragma config JTAGEN =     ON
    #pragma config ICESEL =     ICS_PGx1
    #pragma config PWP =        OFF
    #pragma config BWP =        OFF
    #pragma config CP =         OFF

    /*** DEVCFG1 ***/
    #pragma config FNOSC =      PRIPLL
    #pragma config FPBDIV =     DIV_2
    #pragma config FSOSCEN =    OFF
    #pragma config IESO =       ON
    #pragma config POSCMOD =    HS
    #pragma config OSCIOFNC =   OFF
    #pragma config FCKSM =      CSDCMD
    #pragma config WDTPS =      PS1048576
    #pragma config FWDTEN =     OFF
    #pragma config WINDIS =     OFF
    #pragma config FWDTWINSZ =  WINSZ_25

    /*** DEVCFG2 ***/
    #pragma config FPLLIDIV =   DIV_4
    #pragma config FPLLMUL =    MUL_24
    #pragma config FPLLODIV =   DIV_1
    #pragma config UPLLEN =     ON
    #pragma config UPLLIDIV =   DIV_4

    /*** DEVCFG3 ***/
    #pragma config FSRSSEL =    PRIORITY_7
    #pragma config FVBUSONIO =  ON
    #pragma config USERID =     0xffff
    #pragma config PMDL1WAY =   ON
    #pragma config IOL1WAY =    ON
    #pragma config FUSBIDIO =   ON

#endif /* BOOTLOADER_MODE */



// *****************************************************************************
// *****************************************************************************
// Section: Driver Initialization Data
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: System Data
// *****************************************************************************
// *****************************************************************************
/* Structure to hold the object handles for the modules in the system. */
SYSTEM_OBJECTS sysObj;

// *****************************************************************************
// *****************************************************************************
// Section: Library/Stack Initialization Data
// *****************************************************************************
// *****************************************************************************
/******************************************************
 * USB Driver Initialization
 ******************************************************/
 
uint8_t __attribute__((aligned(512))) endPointTable1[DRV_USBFS_ENDPOINTS_NUMBER * 32];


const DRV_USBFS_INIT drvUSBFSInit =
{
	 /* Assign the endpoint table */
    .endpointTable= endPointTable1,


	/* Interrupt Source for USB module */
	.interruptSource = INT_SOURCE_USB,


    
    /* USB Controller to operate as USB Device */
    .operationMode = DRV_USBFS_OPMODE_DEVICE,
	
	.operationSpeed = USB_SPEED_FULL,
 
	/* Stop in idle */
    .stopInIdle = false,
	
	    /* Suspend in sleep */
    .suspendInSleep = false,
 
    /* Identifies peripheral (PLIB-level) ID */
    .usbID = USB_ID_1,
	

};








// *****************************************************************************
// *****************************************************************************
// Section: System Initialization
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: Local initialization functions
// *****************************************************************************
// *****************************************************************************



/*******************************************************************************
  Function:
    void SYS_Initialize ( void *data )

  Summary:
    Initializes the board, services, drivers, application and other modules.

  Remarks:
 */

void SYS_Initialize ( void* data )
{

    /* Start out with interrupts disabled before configuring any modules */
    __builtin_disable_interrupts();

  
    CLK_Initialize();

    /* Configure KSEG0 as cacheable memory. This is needed for Prefetch Buffer */
    __builtin_mtc0(16, 0,(__builtin_mfc0(16, 0) | 0x3));

    /* Configure Flash Wait States and Prefetch */
    CHECONbits.PFMWS = 2;
    CHECONbits.PREFEN = 3;

    /* Set the SRAM wait states to zero */
    BMXCONbits.BMXWSDRM = 0;

	GPIO_Initialize();

	BSP_Initialize();



	/* Initialize USB Driver */ 
    sysObj.drvUSBFSObject = DRV_USBFS_Initialize(DRV_USBFS_INDEX_0, (SYS_MODULE_INIT *) &drvUSBFSInit);	


	 /* Initialize the USB device layer */
    sysObj.usbDevObject0 = USB_DEVICE_Initialize (USB_DEVICE_INDEX_0 , ( SYS_MODULE_INIT* ) & usbDevInitData);
	
	


    APP_Initialize();


    EVIC_Initialize();

	/* Enable global interrupts */
    __builtin_enable_interrupts();


}


/*******************************************************************************
 End of File
*/
