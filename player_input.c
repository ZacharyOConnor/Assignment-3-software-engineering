/*
 * player.c
 *
 *  Created on: 17 Apr 2017
 *      Author: zachary
 */

#include <stdio.h>
#include "everything.h"

int read_num_of_players()
{
	int num_of_players = 0;
	printf("Please enter the number of players you'd\n");
	printf("like to enter into the game : \n");
	scanf("%d", &num_of_players);

	while (num_of_players < 2 || num_of_players > 6)
	{
		//accounting for people being stupid.
		printf("ERROR! Please enter a integer greater than or equal to 2 and less than or equal to 6 : \n");
		scanf("%d", &num_of_players);
	}
	return num_of_players;
}

void read_in_players(Player* player_array, int num_of_players)
{
	int i;
	for (i = 0; i < num_of_players; i++)
	{
		printf("Please enter the name and player type of player no.%d ", i + 1);
		input_player(&(player_array[i]));//need pointers to the ith player's name and type here.
	}

}

void input_player(Player *p)
{
	printf("Player name : ");
	scanf("%s", p->name);
	printf("\nPlayer type : ");
	scanf("%s", p->player_type);

	assign_player_capabilities(p);
}

