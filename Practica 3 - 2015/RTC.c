/*
 * RTC.c
 *
 *  Created on: 09/06/2015
 *      Author: Borrajo
 */

#include "RTC.h"
#include "derivative.h"


void RTC_init(void)
{
	RTCSC_RTIE = 1;
}
