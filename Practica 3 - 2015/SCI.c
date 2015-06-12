/*
 * SCI.c
 *
 *  Created on: 08/06/2015
 *      Author: Borrajo
 */
#include "SCI.h"
#include "derivative.h" /* include peripheral declarations */

extern char txChar;

void SCI_send_string(char* pc)
{
	while (*pc != '\0')
	{
		while(SCIS1_TDRE !=  1);
		txChar = *pc;
		SCIC2_TIE = 1;
		pc++;
	}
}

