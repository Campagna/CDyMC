/*
 * ondacuadrada.c
 *
 *  Created on: 01/06/2015
 *      Author: Borrajo
 */

#include "ondacuadrada.h" 

#define NC 9090

void ONDACUADRADA_tpm1ch0_Handler(void)
{
	TPM1C0V += NC;
	TPM1C0SC_CH0F = 0;
}

void ONDACUADRADA_change_NC(int n)
{
	NC = n;
}
