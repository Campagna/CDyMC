/*
 * PWM.c
 *
 *  Created on: 09/06/2015
 *      Author: Borrajo
 */

#include "PWM.h"
#include "funciones.h"
#include "derivative.h"

#define MAX 65535
#define MIN 0

void PWM_init(void)
{
	TPM2C1V = MIN;
}

void PWM_change_duty(int porcentaje)
{
	long aux;
	aux = map(porcentaje,0,100,MIN,MAX);
	TPM2C1V = aux;
}
