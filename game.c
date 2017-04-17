/*
 * game.c
 *
 *  Created on: 17 Apr 2017
 *      Author: zachary
 */

#include <stdio.h>
#include "everything.h"

int is_active_player(Player* pplayer)
{
	return pplayer->in_game == 1 && pplayer->life_points > 0;
}

int game_in_progress(Player * player_array, int num_of_players)
{
	int i;
	int active_player_count = 0;
	for (i = 0; i < num_of_players; i++)
	{
		printf("Player: %s %d %d\n", player_array[i].name, player_array[i].in_game, player_array[i].life_points);
		if (is_active_player(&(player_array[i])))
			active_player_count++;
	}

	return active_player_count > 1;
}

Player* find_winner(Player* player_array, int num_of_players)
{
	int i;
	for (i = 0; i < num_of_players; i++)
	{
		if (is_active_player(&(player_array[i])))
			return &(player_array[i]);
	}

	return 0;
}

void leave_game(Player * pplayer)
{
	printf("%s chose to leave the game.\n", pplayer->name);
	pplayer->in_game = 0;
}
