/*
 * GccApplication2.c
 *
 * Created: 9/11/2020 2:14:51 PM
 * Author : JoeyMancuso
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{	//set ddr
	DDRB = 0b00000111;
	DDRD = 0b11100000;
	//this sets what pins to control, I think
	//set port
	//and to turn off
	// or to turn on
	//xor to toggle
	// port D
	//bit 5 is far green
	//6 far yellow,  bit 6 
	//7 is far red so bit 7 
	
	//port B close
	//8 is close green so 8 is bit 0 in the shift
	//9 is close yellow, bit 1 
	//10 is close red, bit 2
	
	//8 should be on when 5 is on
	///* Replace with your application code */
	while (1)
	{
		
		PORTB = (1 << 2);   //turn on close red
		PORTD = (1 << 5); //turn on far green
		_delay_ms(2000);
		PORTD = (1 << 6); //far yellow
		PORTB = (1<< 2); // Close red 
		_delay_ms(2000);
		PORTD = (1<<7); // far red 
		PORTB = (1 << 2);  //keep on red close
		//PORTB = (1 << 1);  //turn on the close yellow
			_delay_ms(1000);
		PORTB = (1<<0); //close green 
		PORTD = (1<<7); //far red 
	
		_delay_ms(2000);
		PORTB = (1<<1); // close yellow

		_delay_ms(1500);
		PORTB = (1<<2); // close red
		PORTD = (1<<7); //far red 
		_delay_ms(2100);
		PORTD = (1<<5); // far green
	
		//PORTD = (1<< )
		
		
	//	PORTB = (1<<2);
//		PORTD = (1 << 5);  //turn on far green

		//_delay_ms(2000);

		

		//_delay_ms(2000);

		//PORTB = (1 << 2); //(1<<2); //turn on  close red light 1
		//PORTD = (1 << 5); // turns on far green

		//PORTD  &= ~(1 << 5);//(0 << 8);
		//PORTB &= ~(1 << 2); // turning off close red light //&= ~(1<<2); // turn off red light //how would I manipulate this to shift w o hard coding
		//PORTB = 0;
		//PORTD = 0
		//PORTD = (1<< 6); // turn on far yellow
		//_delay_ms(2500);
		//PORTD &= ~(1<<6); //turn off far yellow
		
		//_delay_ms(500);//turn on far red 
		//PORTD = (1<<8);
		//PORTD &= ~(1<< 7);
		//PORTB &= ~ (1 << 0); // turn on close green 
		//PORTD &= ~ (1 << 7 ); // turn on far red  
		//_delay_ms(2000);
		//PORTD  = (1<<7); // far red on
		//PORTB = (1<<5); //close green on 
		//_delay_ms(1500);
		//PORTB = (1<<0); //close yellow on / far red
		//PORTD = (1<< )
		//PORTB = (0 << 5);
		//PORTD = (0 << 7);
		
	}
	return(0);
}

