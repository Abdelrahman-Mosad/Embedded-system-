/*
 * main.c
 *
 *  Created on: Aug 22, 2023
 *      Author: abdul
 */


#include "CA.h"
#include "US.h"
#include "DC.h"

void setup()
{
	CA_state = STATE (CA_waiting);
	US_state = STATE (US_busy);
	DC_state = STATE (DC_idle);
}

void main()
{	volatile int d;
	setup();
	while(1){

		CA_state();
		US_state();
		DC_state();
		//delay
		for(d=0 ; d<=1000;d++);
	}
}
