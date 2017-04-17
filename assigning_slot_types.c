/*
 * assigning_slot_types.h
 *
 *  Created on: 9 Apr 2017
 *      Author: zachary
 */
#include <stdlib.h>
#include "everything.h"

void slot_type_assignment(Slot slot_array[7][7])
{
	int i, j;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			//a random number is generated (0, 1 or 2)
			//if the number is 0, the slot position assigned that value is Level ground
			//if it's 1 it's City
			//if it's 2 it's hill.
			slot_array[i][j] = rand() % 3;
		}
	}
}
