/*
 * main.c
 *
 *  Created on: Oct 26, 2024
 *      Author: mokhtar
 */

#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"

#include "MCAL/RCC/RCC_interface.h"
#include "MCAL/GPIO/GPIO_interface.h"
#include "MCAL/SYSTICK/SYS_interface.h"
#include "MCAL/SPI/SPI_interface.h"
#include "HAL/TFT/TFT_interface.h"
#include "photo.h"

void main()
{
	RCC_voidInitSysClock();
	RCC_voidEnableClock(RCC_APB2,RCC_GPIOA);
	RCC_voidEnableClock(RCC_APB2,RCC_SPI1);

	GPIO_voidSetPinDirection(GPIOA,PIN1,OUTPUT_SPEED_2MHZ_PP);    /*TFT CMD_DATA*/
	GPIO_voidSetPinDirection(GPIOA,PIN2,OUTPUT_SPEED_2MHZ_PP);    /*TFT RST*/
	GPIO_voidSetPinDirection(GPIOA,PIN5,OUTPUT_SPEED_10MHZ_AFPP); /*TFT CLK*/
	GPIO_voidSetPinDirection(GPIOA,PIN7,OUTPUT_SPEED_10MHZ_AFPP); /*TFT MOSI*/


	STK_voidInit();
	SPI_Init();
	TFT_voidInit();

	//TFT_voidFillColor(0x0FFFF);
	//TFT_voidDrawLetter(20,50,letters['A'],0x0000);
	//TFT_voidDrawLetter(30,50,letters['H'],0x0000);
	//TFT_voidDrawLetter(40,50,letters['M'],0x0000);
	//TFT_voidDrawString(70,10,"ahmed",TFT_RED);
	/*

*/
	while(1)
	 {

	 }

}
