/*
 * redLight.c
 *
 * Created: 9/9/2020 5:49:28 PM
 * Author : JoeyMancuso
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{	//set ddr 
	DDRB = 0b00000111;
	DDRD = 0b11100000;
	//set port 
	
	///* Replace with your application code */
    while (1) 
    {
		PORTB = 0xFF; //(1<<2); //turn on red light 1
		_delay_ms(5000);
		PORTB = 0; //&= ~(1<<2); //how would I manipulate this to shift w o hard coding 
		_delay_ms(5000);
	
	}
}

