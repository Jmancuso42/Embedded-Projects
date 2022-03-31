/*
 * GccApplication1.c
 *
 * Created: 9/7/2020 1:54:45 PM
 * Author : JoeyMancuso
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB = 0b00100000;
    while (1) 
    {
		PORTB = 0b00100000;
		_delay_ms(1000);
		PORTB = 0b00000000;
		_delay_ms(1000);
    }
}

