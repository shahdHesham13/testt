/*
 * main.c
 *
 *  Created on: Apr 15, 2023
 *      Author: dell
 */

typedef unsigned char u8;
typedef signed char s8;

#include <util/delay.h>

#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)

int main(void)
{
  DDRA = 0xff;
  PORTA = 0;
  s8 i =0;
	while(1)
	{
	  for(i=7;i>=0;i--)
	  {
		  PORTA |= (1<<i);
		  _delay_ms(500);
	  }
	  for(i=7;i>=0;i--)
	  	  {
	  		  PORTA &=~(1<<i);
	  		_delay_ms(500);
	  	  }
	}

	return 0;
}
