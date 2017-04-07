/*
 * board_game.c
 *
 *  Created on: 30 Mar 2017
 *      Author: zachary
 */
#include<stdio.h>
#include<time.h>
#define MAX_PLAYERS 6
#include"cross_fire_operations.h"

struct Player
{
	char name[20];
	char player_type[15];
	int life_points;
	int dexterity;
	int smartness;
	int strength;
	int magic_skills;
	struct slot *place;
};



struct Slot
{
	int row;
	int column;
	struct slot *left
	struct slot *right
	struct slot *up
	struct slot *down
};
struct Slot *top_left;
struct Slot *top_right;
struct Slot *bottom_left;
struct Slot *bottom_right;

int main(void)
{
	int row, column;
	int board_size = 7;//setting the size of the board.
	struct Slot *current_slot = NULL;
	struct Slot *found_slots;
	bool explored[board_size][board_size]//for checking if a slot contains something?
	int count = 0;
	//set up the pointers to the 4 corner slots
	struct Slot *top_left;
	struct Slot *top_right;
	struct Slot *bottom_left;
	struct Slot *bottom_right;

	//creating the board.
	create_board(board_size, Slot **top_left, Slot **top_right, Slot **bottom_left, Slot **bottom_right);






	printf("Please enter the number of players you'd\n");
	printf("like to enter into the game : \n");
	int num_of_players;
	scanf("%d", &num_of_players);
}

void create_board(int board_size, struct Slot **up_left, struct Slot **up_right, struct Slot **down_left, struct Slot **down_right)
/*Aim of this function is to allocate space in memory for the board, create it
 * and create all the individual slots in it.
 * Also sets up adjacent slots for all slots
 * that have less than 4 other slots adjacent to them.
 */


void changing_player_capabilities(struct Player *pplayer)
{
	//function changes the capabilities of the players depending on which slot they
	//move to, if they choose to move at all.
	    if (strcmp (pSlot->location, "Hill") == 0)
	    {
	        if (pplayer->dexterity < 50)
	        {
	            pplayer->strength -= 10;
	        }
	        else if (pplayer->dexterity >= 60)
	        {
	            pplayer->strength += 10;
	        }
	    }
	    else if (strcmp(pSlot->location, "City") == 0)
	    {
	        if (pplayer->smartness > 60)
	        {
	            pplayer->magic_skills += 10;
	        }
	        else if (pplayer->smartness <= 50)
	        {
	            pplayer->magic_skills -= 10;
	        }
	    }
}

void assign_human_capabilities(struct Player *pplayer);
{
	int sum = 0;
	int j;
	while (sum > 300)
	{
		   j=rand() %100 +1;
		   pplayer->smartness= j;
		   pplayer->luck=  rand() %100 +1;
		   pplayer->dexterity=  rand() %100 +1;
		   pplayer->strength=  rand() %100 +1;
		   pplayer->magic_skills= rand() %100 +1;
		   sum=0;
		   sum=pplayer->luck+(*structname).dexterity+(*structname).smartness+(*structname).magic_skills+(*structname).strength);
	 }
   (*structname).life_points=100;
}
