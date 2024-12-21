/*
 * 7_SEGMENT.c
 *
 *  Created on: Oct 28, 2024
 *      Author: mokhtar
 */

#include "7_SEGMENT.h"

void HAL_voidSetSegmentDirection(Segment_Type *Segment){
	GPIO_voidSetPinDirection(Segment->port,Segment->pins[0],Segment->mode);
	GPIO_voidSetPinDirection(Segment->port,Segment->pins[1],Segment->mode);
	GPIO_voidSetPinDirection(Segment->port,Segment->pins[2],Segment->mode);
	GPIO_voidSetPinDirection(Segment->port,Segment->pins[3],Segment->mode);
}


void HAL_voidSetSegmentValue(Segment_Type * Segment , u8 value){
	if(value < 10){
		GPIO_voidSetPinValue(Segment->port,Segment->pins[0],  value &0x01);
		GPIO_voidSetPinValue(Segment->port,Segment->pins[1], (value >> 1) & 0x01);
 		GPIO_voidSetPinValue(Segment->port,Segment->pins[2], (value >> 2) & 0x01);
		GPIO_voidSetPinValue(Segment->port,Segment->pins[3], (value >> 3) & 0x01);
	}else{
		GPIO_voidSetPinValue(Segment->port,Segment->pins[0],  GPIO_LOW);
		GPIO_voidSetPinValue(Segment->port,Segment->pins[1],  GPIO_LOW);
		GPIO_voidSetPinValue(Segment->port,Segment->pins[2],  GPIO_LOW);
		GPIO_voidSetPinValue(Segment->port,Segment->pins[3],  GPIO_LOW);
	}
}
