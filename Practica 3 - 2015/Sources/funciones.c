/*
 * funciones.c
 *
 *  Created on: 01/06/2015
 *      Author: Borrajo y Campagna
 *      
 */
#include "funciones.h"

extern char txChar;

int map(int input, int input_min, int input_max, int output_min, int output_max)
{
	long r ;
	long t;
	long q ;
	long f;
	output_max = 1000;
	r = (input - input_min);
	t = (output_max - output_min);
	q = (input_max - input_min);
	f =(t/q);
	return (int)(r*f) + output_min;
}

void mostrarFrecuencia(char* pc)
{
	while (*pc != '\0')
	{
		while(SCIS1_TDRE !=  1);
		txChar = *pc;
		SCIC2_TIE = 1;
		pc++;
	}
}
