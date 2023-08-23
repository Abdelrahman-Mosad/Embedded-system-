/*
 * CA.c
 *
 *  Created on: Aug 22, 2023
 *      Author: abdul
 */

#include "CA.h"


//variables
int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

//STATE pointer to function
void (*CA_state)();
int US_Get_Distance_random (int l,int r, int count);

void US_Set_distacnce (int d)
{
	CA_distance =d;
	(CA_distance <= CA_threshold)?(CA_state = STATE(CA_waiting)):(CA_state = STATE(CA_driving));
	printf("US------distance=$d------",CA_distance);
	}
STATE_define(CA_waiting)
{
	//state_Name
	CA_state_id = CA_waiting;
	printf("CA_waiting State: distance=%d Speed=%d \n",CA_distance , CA_speed);


	//state_Action
	CA_speed=0;
	DC_motor(CA_speed);
	//DC_motor(CA_speed)


}
STATE_define(CA_driving)
{
	//state_Name
		CA_state_id = CA_driving;
		printf("CA_driving State: distance=%d Speed=%d \n",CA_distance , CA_speed);


		//state_Action
		CA_speed=30;
		DC_motor(CA_speed);


}

