/*
 * matrix_interface.h
 *
 *  Created on: Oct 30, 2024
 *      Author: mokhtar
 */

#ifndef LED_MATRIX_MATRIX_INTERFACE_H_
#define LED_MATRIX_MATRIX_INTERFACE_H_


#include  "GPIO/GPIO_interface.h"
#include "MATRIX_confige.h"
#include "MATRIX_private.h"
#include "SYSTICK/SYS_interface.h"

void LDMX_VoidInit();
void LDMX_VoidDisplay(u8 * arr);

#endif /* LED_MATRIX_MATRIX_INTERFACE_H_ */
