/*
 * board_game.c
 *
 *  Created on: 30 Mar 2017
 *      Author: zachary
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"everything.h"


Slot slot_array[MAX_ROWS][MAX_COLUMNS];//creating a 2D slot array
Player player_array[MAX_PLAYERS];
int num_of_players = 0;

int main(void)
{
	slot_type_assignment(slot_array);
	num_of_players = read_num_of_players();
	read_in_players(player_array, num_of_players);

	printf("Number of players in game: %d\n", num_of_players);
	int player_to_move = 0;
	while (game_in_progress(player_array, num_of_players))
	{
		Player * pplayer = &(player_array[player_to_move]);
		if (is_active_player(pplayer)) {
			player_turn(pplayer);
		}
		player_to_move++;
		if (player_to_move >= num_of_players)
			player_to_move = 0;
	}
	Player* winner = find_winner(player_array, num_of_players);
	printf("The winner is %s\n", winner->name);
}

void player_turn(Player *p)
{
	printf("Do you want to leave the game? (Y/N) ");
	char answer[10];
	scanf("%s", answer);
	if (answer[0] == 'Y' || answer[0] == 'y') {
		leave_game(p);
		return;
	}
	printf("\nDo you want to move to another slot?\n");
	scanf("%s", answer);
	if (answer[0] == 'Y' || answer[0] == 'y')
	{
		move_player_to_new_slot(struct Player *p);
		return;
	}
	printf("\nDo you want to attack another player?\n");
	scanf("%s", answer);
	if (answer[0] == 'Y' || answer[0] == 'y')
	{
		list_attacks(Player *p, Player *player_array[i], num_of_players);
		return;
}
