/*
 * state.h
 *
 *  Created on: Aug 22, 2023
 *      Author: abdul
 */
#ifndef STATE_H_
#define STATE_H_
#include "stdlib.h"
#include "stdio.h"

//Automatic State Function genrated
#define STATE_define(_statFUN_) void ST_##_statFUN_()
#define STATE(_statFUN_) ST_##_statFUN_


//states connections

void US_Set_distacnce (int d);
void DC_motor(int s);

#endif /* STATE_H_ */
