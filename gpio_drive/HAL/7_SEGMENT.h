/*
 * 7_SEGMENT.h
 *
 *  Created on: Oct 28, 2024
 *      Author: mokhtar
 */

#ifndef _SEGMENT_H_
#define _SEGMENT_H_

#include"BIT_MATH.h"
#include "STD_TYPES.h"

#define GPIO_LOW      0
#define GPIO_HIGH     1

typedef struct {
	u8 pins[4];
	u8 port;
	u8 mode;
}Segment_Type;

void HAL_voidSetSegmentDirection(Segment_Type *Segment);
void HAL_voidSetSegmentValue(Segment_Type * Segment , u8 value);

#endif /* 7_SEGMENT_H_ */
