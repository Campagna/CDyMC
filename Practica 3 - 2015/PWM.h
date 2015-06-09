/*
 * PWM.h
 *
 *  Created on: 09/06/2015
 *      Author: Borrajo
 */

#ifndef PWM_H_
#define PWM_H_

void PWM_init(void);
// debe ingresarse un porcentaje entre 0 y 100
void PWM_change_duty(int);

#endif /* PWM_H_ */
