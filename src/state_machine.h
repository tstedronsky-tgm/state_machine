/*
 * state_machine.h
 *
 *  Created on: 23.10.2015
 *      Author: Thomas
 */

#ifndef STATE_MACHINE_H_
#define STATE_MACHINE_H_


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum {
	RED,
	RED_ORANGE,
	GREEN,
	GREEN_BLINK,
	ORANGE_BLINK
} traffic_state;

#endif /* STATE_MACHINE_H_ */
