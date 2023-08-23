/*
 * US.c
 *
 *  Created on: Aug 22, 2023
 *      Author: abdul
 */

#include "US.h"


//variables

int US_distance = 0;


//STATE pointer to function
void (*US_state)();
int US_Get_Distance_random (int l,int r, int count);

void US_init()
{
	printf("US_init\n");
}

STATE_define(US_busy)
{
	//state_Name
	US_state_id = US_busy;

	//state_Action

	//DC_motor(US_speed)

	//event_Check
	//US_Get_Distance(US_distance)

	printf("US_waiting State: distance=%d \n",US_distance );
	US_Set_distacnce(US_distance);
	US_state = STATE(US_busy);
}


int US_Get_Distance_random (int l,int r, int count)
{
	//Generate random numbers
	int i ;
	int rand_num;
	for (i = 0; i < count; i++){
		rand_num = (rand() % (r-1+1)) + 1;

	}
	return rand_num;
}
