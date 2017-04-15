/*
 * board_game.c
 *
 *  Created on: 30 Mar 2017
 *      Author: zachary
 */
#include<stdio.h>
#include<time.h>
#define MAX_PLAYERS 6
#include"move_player.h"
#include"player_capabilities.h"
#include"changin_player_capabilities.h"
#include"slot_assignment.h"

struct Player
{
	char name[20];
	char player_type[15];
	int life_points;
	int dexterity;
	int smartness;
	int strength;
	int magic_skills;
	//struct slot *place;//not sure if this is needed, will come back to it later
};

int main(void)
{
	int i, j;
	int row = 7;
	int column = 7;
	int board_size = 7;//setting the size of the board.

	//creating the board.
	int slot_array[row][column];
	/*need to give a field value to each slot, will assign each one a random number between 0 and 2
	0 == Level Ground, 1 == City, 2 == Hill*/
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			slot_array[i][j] = rand() % 3;
		}
	}

	printf("Please enter the number of players you'd\n");
	printf("like to enter into the game : \n");
	int num_of_players;
	scanf("%d", &num_of_players);
	struct Player player_array[num_of_players];
	struct PLayer *pplayer_array[num_of_players];
	
	for (i = 0; i < num_of_players; i++)
	{
		pplayer_array[num_of_players] = &player_array[num_of_players];
		printf("Please enter the name and type of player number %d", i + 1);
		input_player(pplayer_array[i]);
	}
}


void changing_player_capabilities(struct Player *pplayer)//may put this in another header file to keep things simple
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

void input_player(struct Player *p)
{
	printf("Player name : ");
	scanf("%s", p->name);
	printf("\nPlayer type : ");
	scanf("%s", p->player_type);
}

void player_turn(struct Player *p)
{
	//every function needed for a player to make their turn will go in here, and this will cycle through a loop
	//as long as there are 2 or more players in the game with life points left.
}
