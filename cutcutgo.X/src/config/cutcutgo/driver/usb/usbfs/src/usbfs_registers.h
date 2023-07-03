/*******************************************************************************
  USB Peripheral Library structure implementation

  File Name:
    usb_registers.h

  Summary:
    USB PLIB base structure implementation

  Description:
    This header file contains instance structure for usb plib module.

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END
#include <xc.h>

#include "driver/usb/usbfs/src/plib_usbfs_header.h"
#ifndef _USB_STRUCTURE_H
#define _USB_STRUCTURE_H

/******************************************/

typedef struct
{
	union
	{
	__U1EP0bits_t   		UxEPbits;
	 volatile unsigned int   w;
	 };
	volatile unsigned int  	UxEPCLR;
	volatile unsigned int  	UxEPSET;
	volatile unsigned int  	UxEPINV;

}__UxEP_t;

/*********************************************/

typedef union 
{
    __U1EIEbits_t          	UxEIEbits;
	volatile unsigned int   w;
}__UxEIE_t;

/*********************************************/

typedef union 
{
    __U1EIRbits_t          	UxEIRbits;
	volatile unsigned int   w;
}__UxEIR_t;

/*********************************************/

typedef union
{
	__U1IRbits_t           	UxIRbits;
	volatile unsigned int  	w;
}__UxIR_t;

/**********************************************/

typedef union
{
	__U1OTGIEbits_t        	UxOTGIEbits; 
	volatile unsigned int  	w;
}__UxOTGIE_t;

/***********************************************/

typedef union
{
	__U1OTGIRbits_t        	UxOTGIRbits; 
	volatile unsigned int  	w;
}__UxOTGIR_t;

/************************************************/

typedef union
{
	__U1TOKbits_t          	UxTOKbits;
	volatile unsigned int   w;
}__UxTOK_t;

/*************************************************/

typedef union
{
	__U1CONbits_t          	UxCONbits;
	volatile unsigned int   w;
}__UxCON_t;

/*************************************************/

 typedef union 
{
    __U1IEbits_t           	UxIEbits;
    volatile unsigned int   w;
} __UxIE_t;
    
/**************************************************/
   
    
typedef struct __attribute__((packed,aligned( 4 )))
{
    __UxOTGIR_t            UxOTGIR;
	volatile unsigned int  UxOTGIRCLR;
	volatile unsigned int  UxOTGIRSET;
	volatile unsigned int  UxOTGIRINV;	 
    __UxOTGIE_t            UxOTGIE; 
	volatile unsigned int  UxOTGIECLR;
	volatile unsigned int  UxOTGIESET;
	volatile unsigned int  UxOTGIEINV;
	__U1OTGSTATbits_t      UxOTGSTAT;
	volatile unsigned int  offset1[3];
	__U1OTGCONbits_t       UxOTGCON;
	volatile unsigned int  UxOTGCONCLR;
	volatile unsigned int  UxOTGCONSET;
	volatile unsigned int  UxOTGCONINV;
	__U1PWRCbits_t         UxPWRC;
	volatile unsigned int  UxPWRCCLR;
	volatile unsigned int  UxPWRCSET;
	volatile unsigned int  UxPWRCINV;
	volatile unsigned int  offset2[92];
	__UxIR_t               UxIR;
	volatile unsigned int  offset3[3];
	__UxIE_t               UxIE;
	volatile unsigned int  UxIECLR;
	volatile unsigned int  UxIESET;
	volatile unsigned int  UxIEINV;
	__UxEIR_t              UxEIR ;
	volatile unsigned int  UxEIRCLR;
	volatile unsigned int  UxEIRSET;
	volatile unsigned int  UxEIRINV;
	__UxEIE_t              UxEIE;
	volatile unsigned int  UxEIECLR;
	volatile unsigned int  UxEIESET;
	volatile unsigned int  UxEIEINV;
	__U1STATbits_t         UxSTAT;
	volatile unsigned int  offset4[3];
	__UxCON_t              UxCON;
	volatile unsigned int  UxCONCLR;
	volatile unsigned int  UxCONSET;
	volatile unsigned int  UxCONINV;
	__U1ADDRbits_t         UxADDR;
	volatile unsigned int  UxADDRCLR;
	volatile unsigned int  UxADDRSET;
	volatile unsigned int  UxADDRINV;
	__U1BDTP1bits_t        UxBDTP1;
	volatile unsigned int  UxBDTP1CLR;
	volatile unsigned int  UxBDTP1SET;
	volatile unsigned int  UxBDTP1INV;
	__U1FRMLbits_t         UxFRML;
	volatile unsigned int  offset5[3];
	__U1FRMHbits_t         UxFRMH;
	volatile unsigned int  offset6[3];
	__UxTOK_t              UxTOK;
	volatile unsigned int  UxTOKCLR;
	volatile unsigned int  UxTOKSET;
	volatile unsigned int  UxTOKINV;
	__U1SOFbits_t          UxSOF;
	volatile unsigned int  UxSOFCLR;
	volatile unsigned int  UxSOFSET;
	volatile unsigned int  UxSOFINV;
	__U1BDTP2bits_t        UxBDTP2;
	volatile unsigned int  UxBDTP2CLR;
	volatile unsigned int  UxBDTP2SET;
	volatile unsigned int  UxBDTP2INV;
	__U1BDTP3bits_t        UxBDTP3;
	volatile unsigned int  UxBDTP3CLR;
	volatile unsigned int  UxBDTP3SET;
	volatile unsigned int  UxBDTP3INV;
	__U1CNFG1bits_t        UxCNFG1;
	volatile unsigned int  UxCNFG1CLR;
	volatile unsigned int  UxCNFG1SET;
	volatile unsigned int  UxCNFG1INV;
    volatile unsigned int  offset7[4];
	__UxEP_t          	   UxEP[16];
	
}usb_registers_t;

#define   UxCNFG1_UASUSPND_MASK      	_U1CNFG1_UASUSPND_MASK
#define   UxCON_PPBRST_MASK          	_U1CON_PPBRST_MASK
#define   UxEP0_LSPD_MASK            	_U1EP0_LSPD_MASK
#define   UxEP0_RETRYDIS_MASK        	_U1EP0_RETRYDIS_MASK 
#define   UxEP_EPCONDIS_MASK       		_U1EP0_EPCONDIS_MASK
#define   UxEP_EPHSHK_MASK       		_U1EP0_EPHSHK_MASK
#define   UxEP_EPRXEN_MASK        		_U1EP0_EPRXEN_MASK
#define   UxEP_EPTXEN_MASK        		_U1EP0_EPTXEN_MASK
#define   UxEP_EPSTALL_MASK       		_U1EP0_EPSTALL_MASK
#define   UxCNFG1_UTEYE_MASK          	_U1CNFG1_UTEYE_MASK
#define   UxEP0_EPCONDIS_POSITION  		_U1EP0_EPCONDIS_POSITION
#define   UxEPx_EPCONDIS_POSITION  		_U1EP1_EPCONDIS_POSITION
#define   UxEP0_EPHSHK_POSITION    		_U1EP0_EPHSHK_POSITION
#define   UxEPx_EPHSHK_POSITION   		_U1EP1_EPHSHK_POSITION
#define   UxEP0_EPSTALL_POSITION  		_U1EP0_EPSTALL_POSITION
#define   UxEPx_EPSTALL_POSITION  		_U1EP1_EPSTALL_POSITION
#define   UxCNFG1_UTEYE_POSITION  		_U1CNFG1_UTEYE_POSITION
#define   UxPWRC_USBPWR_MASK      		_U1PWRC_USBPWR_MASK
#define   UxADDR_LSPDEN_MASK      		_U1ADDR_LSPDEN_MASK
#define   UxCON_USBEN_SOFEN_POSITION    _U1CON_USBEN_SOFEN_POSITION
#define   UxCON_HOSTEN_MASK   		    _U1CON_HOSTEN_MASK
#define   UxOTGCON_OTGEN_MASK   	    _U1OTGCON_OTGEN_MASK
#define   UxOTGCON_DPPULUP_MASK      	_U1OTGCON_DPPULUP_MASK
#define   UxOTGCON_DMPULUP_MASK      	_U1OTGCON_DMPULUP_MASK
#define   UxOTGCON_DPPULDWN_MASK     	_U1OTGCON_DPPULDWN_MASK
#define   UxOTGCON_DMPULDWN_MASK     	_U1OTGCON_DMPULDWN_MASK
#define   UxOTGCON_VBUSCHG_MASK      	_U1OTGCON_VBUSCHG_MASK
#define   UxOTGCON_VBUSDIS_MASK      	_U1OTGCON_VBUSDIS_MASK
#define   UxOTGCON_VBUSON_MASK      	_U1OTGCON_VBUSON_MASK
#define   UxCON_PKTDIS_TOKBUSY_MASK  	_U1CON_PKTDIS_TOKBUSY_MASK
#define   UxCON_RESUME_MASK          	_U1CON_RESUME_MASK
#define   UxPWRC_USLPGRD_MASK        	_U1PWRC_USLPGRD_MASK
#define   UxCON_USBEN_SOFEN_MASK     	_U1CON_USBEN_SOFEN_MASK
#define   UxCNFG1_USBSIDL_MASK       	_U1CNFG1_USBSIDL_MASK
#define   UxPWRC_USUSPEND_MASK       	_U1PWRC_USUSPEND_MASK
#define   UxTOK_EP_MASK              	_U1TOK_EP_MASK
#define   UxTOK_PID_POSITION        	_U1TOK_PID_POSITION
#define   UxADDR_DEVADDR_MASK       	_U1ADDR_DEVADDR_MASK
#define   UxCON_USBRST_MASK             _U1CON_USBRST_MASK

#endif /*_USB_STRUCTURE_H*/

/******************************************************************************
 End of File
*/