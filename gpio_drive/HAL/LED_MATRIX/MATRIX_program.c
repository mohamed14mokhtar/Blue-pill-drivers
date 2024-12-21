/*
 * MATRIX_program.c
 *
 *  Created on: Oct 30, 2024
 *      Author: mokhtar
 */


#include "matrix_interface.h"


void LDMX_VoidInit(){
	GPIO_voidSetHalfPortDirection(LMIX_ROW_PORT,OUTPUT_SPEED_2MHZ_PP);
	GPIO_voidSetHalfPortDirection(LMIX_COL_PORT,OUTPUT_SPEED_2MHZ_PP);
}

void LDMX_VoidDisplay(u8 * arr){
	for ( u8 i =0 ; i < 8 ; i++){
		GPIO_voidSetHalfPortValue(LMIX_COL_PORT ,  0xff);
		GPIO_voidSetHalfPortValue(LMIX_ROW_PORT ,  arr[i]);
		GPIO_voidSetHalfPortValue(LMIX_COL_PORT ,  ~(1 << i));
		STK_delay(1,MS_UNIT);
	}

}
