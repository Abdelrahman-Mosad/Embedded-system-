/*
 * main.c
 *
 *  Created on: Aug 22, 2023
 *      Author: abdul
 */


#include "CA.h"

void setup()
{
	CA_state = STATE (CA_waiting);

}

void main()
{	volatile int d;
	setup();
	while(1){

		CA_state();
		for(d=0 ; d<=1000;d++);
	}
}
