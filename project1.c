/*
 * main.c
 *
 *  Created on: Apr 15, 2023
 *      Author: dell
 */

typedef unsigned char u8;

#include <util/delay.h>

#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)

int main(void)
{

  //pin 4 in DDRA is output
	DDRA |= (1<<0);

	while (1)
	{
	  //pin 4 in PORTA is high
	   PORTA |= (1<<0);
	   _delay_ms(500);

	   PORTA &=~(1<<0);
	   _delay_ms(500);

	}


 return 0;
}
