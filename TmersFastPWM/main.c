/*
 * TmersFastPWM.c
 *
 * Created: 1/4/2019 10:50:46 AM
 * Author : user
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include "macros.h"
#include "Timer.h"
volatile short i = 5;
volatile short Increment = 1;
int main(void)
{
	DDRB = 0xff;
	Timer0_FastPWM_Init(i);
	
	while (1) 
    {
		
    }
}

ISR(TIMER0_COMP_vect)
{
	if(i == 100)
	{
		Increment = 0;
	}
	else if (i == 0){
		Increment = 1;
	}
	if(Increment){
	i+= 5;
	}
	else{
		i-=5;
	}
	Timer0_FastPWM_Init(i);
	
}


