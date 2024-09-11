/*
 * main.c
 *
 *  Created on: Apr 19, 2024
 *      Author: seif gendy
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "MYArray3.h"





void main(void)
{
	RCC_voidInit();
		/*Enable GPIOA Peripheral Clock*/
		RCC_voidEnablePrephiralClock( RCC_AHB , RCC_AHB_GPIOAEN);
		RCC_voidEnablePrephiralClock( RCC_APB2 ,RCC_APB2_SYSCF);

		MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN0, GPIO_OUTPUT);
		MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN1, GPIO_OUTPUT);
		MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN2, GPIO_OUTPUT);
		MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN3, GPIO_OUTPUT);
		MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN4, GPIO_OUTPUT);
		MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN5, GPIO_OUTPUT);
		MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN6, GPIO_OUTPUT);
		MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN7, GPIO_OUTPUT);

		MGPIO_voidSetPinOutputSpeed(GPIO_PORTA, GPIO_PIN0, GPIO_LOW_SPEED);
		MGPIO_voidSetPinOutputSpeed(GPIO_PORTA, GPIO_PIN1, GPIO_LOW_SPEED);
		MGPIO_voidSetPinOutputSpeed(GPIO_PORTA, GPIO_PIN2, GPIO_LOW_SPEED);
		MGPIO_voidSetPinOutputSpeed(GPIO_PORTA, GPIO_PIN3, GPIO_LOW_SPEED);
		MGPIO_voidSetPinOutputSpeed(GPIO_PORTA, GPIO_PIN4, GPIO_LOW_SPEED);
		MGPIO_voidSetPinOutputSpeed(GPIO_PORTA, GPIO_PIN5, GPIO_LOW_SPEED);
		MGPIO_voidSetPinOutputSpeed(GPIO_PORTA, GPIO_PIN6, GPIO_LOW_SPEED);
		MGPIO_voidSetPinOutputSpeed(GPIO_PORTA, GPIO_PIN7, GPIO_LOW_SPEED);

		MGPIO_voidSetPinOutputType(GPIO_PORTA, GPIO_PIN0, GPIO_OUTPUT_PP);
		MGPIO_voidSetPinOutputType(GPIO_PORTA, GPIO_PIN1, GPIO_OUTPUT_PP);
		MGPIO_voidSetPinOutputType(GPIO_PORTA, GPIO_PIN2, GPIO_OUTPUT_PP);
		MGPIO_voidSetPinOutputType(GPIO_PORTA, GPIO_PIN3, GPIO_OUTPUT_PP);
		MGPIO_voidSetPinOutputType(GPIO_PORTA, GPIO_PIN4, GPIO_OUTPUT_PP);
		MGPIO_voidSetPinOutputType(GPIO_PORTA, GPIO_PIN5, GPIO_OUTPUT_PP);
		MGPIO_voidSetPinOutputType(GPIO_PORTA, GPIO_PIN6, GPIO_OUTPUT_PP);
		MGPIO_voidSetPinOutputType(GPIO_PORTA, GPIO_PIN7, GPIO_OUTPUT_PP);


u32 LocalLoopCounter = 0 ;
u32 i = 0 ;
while(1)
{

	for(LocalLoopCounter = 0 ; LocalLoopCounter <39401  ; LocalLoopCounter ++ )
	{
		MGPIO_voidSetPinValue(GPIO_PORTA,   GPIO_PIN0       , GET_BIT(My_Music3_raw[LocalLoopCounter], 0));
		MGPIO_voidSetPinValue(GPIO_PORTA,   GPIO_PIN1       , GET_BIT(My_Music3_raw[LocalLoopCounter], 1));
		MGPIO_voidSetPinValue(GPIO_PORTA,   GPIO_PIN2       , GET_BIT(My_Music3_raw[LocalLoopCounter], 2));
		MGPIO_voidSetPinValue(GPIO_PORTA,   GPIO_PIN3       , GET_BIT(My_Music3_raw[LocalLoopCounter], 3));
		MGPIO_voidSetPinValue(GPIO_PORTA,   GPIO_PIN4       , GET_BIT(My_Music3_raw[LocalLoopCounter], 4));
		MGPIO_voidSetPinValue(GPIO_PORTA,   GPIO_PIN5       , GET_BIT(My_Music3_raw[LocalLoopCounter], 5));
		MGPIO_voidSetPinValue(GPIO_PORTA,   GPIO_PIN6       , GET_BIT(My_Music3_raw[LocalLoopCounter], 6));
		MGPIO_voidSetPinValue(GPIO_PORTA,   GPIO_PIN7       , GET_BIT(My_Music3_raw[LocalLoopCounter], 7));


		for (i=0 ; i<360 ; i++  )
		{
			asm ("NOP");
		}

	}

}




}


