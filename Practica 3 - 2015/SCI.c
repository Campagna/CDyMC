/*
 * SCI.c
 *
 *  Created on: 08/06/2015
 *      Author: Borrajo
 */
#include "SCI.h"
#include "derivative.h" /* include peripheral declarations */


void SCI_send_string(char* cadena)
{
	while(*cadena != '\0')
	{
		while(SCIS1_TDRE == 0)
		{
			SCID = *cadena;
			cadena++;
		}
	}
}

