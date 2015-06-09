/*
 * RTC.c
 *
 *  Created on: 09/06/2015
 *      Author: Borrajo
 */

#include "RTC.h"

void RTC_init(void)
{
	RTCSC_RTIE = 1 ;
}
