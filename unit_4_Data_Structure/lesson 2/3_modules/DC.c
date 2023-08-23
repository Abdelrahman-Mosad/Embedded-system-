/*
 * DC.c
 *
 *  Created on: Aug 22, 2023
 *      Author: abdul
 */

#include "DC.h"


//variables
int DC_speed = 0;

//STATE pointer to function
void (*DC_state)();
int US_Get_Distance_random (int l,int r, int count);

void DC_init(){
	printf("DC_init \n");
}
void DC_motor(int s){
	DC_speed =s;
	DC_state = STATE(DC_busy);
}

STATE_define(DC_idle)
{
	//state_Name
	DC_state_id = DC_idle;

	//state_Action
	DC_speed=0;
	//DC_motor(DC_speed)


	printf("DC_idle State:  Speed=%d \n", DC_speed);
}
STATE_define(DC_busy)
{
	//state_Name
		DC_state_id = DC_busy;



		//event_Check
		//US_Get_Distance(DC_distance)

		printf("DC_busy State: Speed=%d \n", DC_speed);
}


