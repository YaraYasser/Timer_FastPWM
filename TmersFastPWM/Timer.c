#include "Timer.h"
#include "macros.h"
void Timer0_FastPWM_Init(char parDuty){
	/*choose mode*/
	SET_BIT(TCCR0,WGM00);
	
	SET_BIT(TCCR0,WGM01);
	/*choose ocro*/
	PWM_vSetDutyCycle(parDuty);
	/*ENABLE INTERUPT*/
	
	SET_BIT(TIMSK,OCIE0);
	sei();
	/*choose non inverting*/
	
	CLR_BIT(TCCR0,COM00);
	SET_BIT(TCCR0,COM01);
	/*CLOCK*/
	SET_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02);
	
}


void PWM_vSetDutyCycle(char parDuty){
	OCR0 = 255*(parDuty/100.0);
	
}