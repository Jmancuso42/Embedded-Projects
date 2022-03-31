/*
 * GccApplication3.c
 *
 * Created: 9/15/2020 2:03:55 PM
 * Author : JoeyMancuso
 */ 

#include <avr/io.h>
#include "USART.h"

int main(void)
{
     /* Replace with your application code */
    
    
		char serialCharacter;
		
		initUSART();
		
		printString("Hello World");
		while (1)
		{
			serialCharacter = receiveByte();
			transmitByte(serialCharacter);
			
		}
	return(0);
}


