/*
 * ondacuadrada.h
 *
 *  Created on: 01/06/2015
 *      Author: Borrajo
 */

#include "derivative.h" /* include peripheral declarations */

#ifndef ONDACUADRADA_H_
#define ONDACUADRADA_H_

#define NCMIN 20000
#define NCMAX 1000

void ONDACUADRADA_tpm1ch0_Handler(void);
void ONDACUADRADA_change_NC(int n);
#endif /* ONDACUADRADA_H_ */
