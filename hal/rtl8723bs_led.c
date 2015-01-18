/******************************************************************************
 *
 * Copyright(c) 2007 - 2012 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#define _RTL8723BS_LED_C_

#include "rtl8723b_hal.h"

//================================================================================
// LED object.
//================================================================================


//================================================================================
//	Prototype of protected function.
//================================================================================

//================================================================================
// LED_819xUsb routines.
//================================================================================

//
//	Description:
//		Turn on LED according to LedPin specified.
//
static void
SwLedOn_8723BS(
	_adapter			*padapter,
	PLED_SDIO		pLed
)
{
	u8	LedCfg;
	HAL_DATA_TYPE	*pHalData = GET_HAL_DATA(padapter);

	if( (padapter->bSurpriseRemoved == true) || ( padapter->bDriverStopped == true))
	{
		return;
	}

	pLed->bLedOn = true;

}


//
//	Description:
//		Turn off LED according to LedPin specified.
//
static void
SwLedOff_8723BS(
	_adapter			*padapter,
	PLED_SDIO		pLed
)
{
	u8	LedCfg;
	HAL_DATA_TYPE	*pHalData = GET_HAL_DATA(padapter);

	if((padapter->bSurpriseRemoved == true) || ( padapter->bDriverStopped == true))
	{
		goto exit;
	}

exit:
	pLed->bLedOn = false;

}

//================================================================================
// Interface to manipulate LED objects.
//================================================================================

//================================================================================
// Default LED behavior.
//================================================================================

//
//	Description:
//		Initialize all LED_871x objects.
//
void
rtl8723bs_InitSwLeds(
	_adapter	*padapter
	)
{
}


//
//	Description:
//		DeInitialize all LED_819xUsb objects.
//
void
rtl8723bs_DeInitSwLeds(
	_adapter	*padapter
	)
{
}

