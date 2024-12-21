/*
 * SYS_interface.h
 *
 *  Created on: Oct 28, 2024
 *      Author: mokhtar
 */

#ifndef SYSTICK_SYS_INTERFACE_H_
#define SYSTICK_SYS_INTERFACE_H_

#include  "SYS_confige.h"
#include "SYS_private.h"
#include  "BIT_MATH.h"
#include  "STD_TYPES.h"

#define MS_UNIT 1000
#define US_UNIT 1000000



void STK_voidInit();
void STK_delay(u32 time, u32 unit);

void STK_voidRunFunOnceAfter(u32 time, u32 unit, void(*callback)(void));

void STK_voidRunFunPeriodicEvery(u32 time, u32 unit, void(*callback)(void));

void STK_voidStopTimer(void) ;

void SKT_StartCountfrom(u32 ticks);

u32 STK_u32GetElapsedTime(u32 unit);

u32 STK_u32GetRemainingTime(u32 unit);

#endif /* SYSTICK_SYS_INTERFACE_H_ */
