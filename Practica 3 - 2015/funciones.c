/*
 * funciones.c
 *
 *  Created on: 01/06/2015
 *      Author: Borrajo
 */
#include "funciones.h"
long map(long input, long input_min, long input_max, long output_min, long output_max)
{
  return (input - input_min) * (output_max - output_min) / (input_max - input_min) + output_min;
}
