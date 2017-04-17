/*
 * player_attacks.h
 *
 *  Created on: 16 Apr 2017
 *      Author: zachary
 */

#include <stdlib.h>
#include <stdio.h>
#include "everything.h"


/*function to determine if a player can be distance attacked.*/
int distance_between_2_players(Player *p1, Player *p2)
{
	return abs(p1->row - p2->row) + abs(p1->column - p2->column);
}

int is_attackable(Player *p1, Player *p2)
{
	int distance = distance_between_2_players(p1, p2);
	return (distance > 1 && distance < 5);
}

void list_attacks(Player *pPlayer, Player *all_players, int n_players)
{
	int i;

	for (i = 0; i < n_players; i++)
	{
		if (is_attackable(pPlayer, &(all_players[i])))
		{
			printf("\nThis player can be attacked \n");
		}
	}
}
