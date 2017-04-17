/*
 * slot_assignment.h
 *
 *  Created on: 8 Apr 2017
 *      Author: zachary
 */

#include "everything.h"
#include <stdlib.h>

void set_random_player_location(Player * pplayer)
{
	//giving each player a random row and column number from 0 to 6
	pplayer->row = rand() % 7;
	pplayer->column = rand() % 7;
}
