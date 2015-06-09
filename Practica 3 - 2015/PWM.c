/*
 * PWM.c
 *
 *  Created on: 09/06/2015
 *      Author: Borrajo
 */

#include "PWM.h"
#include "funciones.h"

#define MAX 65535
#define MIN 0

void PWM_init(void)
{
	TPM2C1VSTR = MIN ;
}

void PWM_change_duty(int porcentaje)
{
	TPM2C1VSTR = map(porcentaje,0,100,MIN,MAX);
}
