/*
 * move_player.h
 *
 *  Created on: 8 Apr 2017
 *      Author: zachary
 */

#ifndef MOVE_PLAYER_H_
#define MOVE_PLAYER_H_



#endif /* MOVE_PLAYER_H_ */

//function to determine the slots adjacent to the one a player is currently in, then ask which slot they want to move to.
void move_player_to_new_slot (int * pslot_array[7][7], struct Player *prow_no, struct Player *pcolumn_no)
{
	//0 == right, 1 == left, 2 == up, 3 == down
	int choice;
	printf("Your current position on the board is [%d][%d]", prow_no, pcolumn_no);//telling the User where they are on the board.
	//first account for the 4 cases where the player is on the corner of the board
	//if player is in the top right corner

	if (prow_no == 0 && pcolumn_no == 0)
	{
		printf("Enter 0 to move to the slot on the right or 1 to move to the slot beneath you : \n");
		scanf("%d", &choice);
	}


		//if player is in bottom left corner
	else if (prow_no == 6 && pcolumn_no == 0)
	{
		printf("Enter 0 to move to the slot on the right or 2 to move to the slot above you : \n");
		scanf("%d", &choice);
	}
	//if player is in top right corner
	else if (prow_no == 0 && pcolumn_no == 6)
	{
		printf("Enter 1 to move to the slot on the left or 3 to move to the slot beneath you : \n");
		scanf("%d", &choice);
	}
		//if player is in bottom right corner
	else if (prow_no == 6 && pcolumn_no == 6)
	{
		printf("Enter 1 to move to the slot on the left or 2 to move to the slot above you : \n");
		scanf("%d", &choice);
	}

	//now account for the cases where the player is on an edge slot, but no on a corner
	//if they're on the left side of the board
	if (prow_no > 0 && prow_no < 6 && pcolumn_no == 0)
	{
		printf("Enter 0 to go right, 2 to go up, 3 to go down : \n");
		scanf("%d", &choice);
	}
	//if they're on the right side of the board
	else if (prow_no > 0 && prow_no < 6 && pcolumn_no == 6)
	{
		printf("Enter 1 to go left, 2 to go up, 3 to go down : \n");
		scanf("%d", &choice);
	}
	//if they're on the top
	else if (prow_no == 0 && pcolumn_no > 0 && pcolumn_no < 6)
	{
		printf("Enter 0 to go right, 1 to go left or 3 to go down : \n");
		scanf("%d", &choice);
	}
	//if they're on the bottom of the board
	else if (prow_no == 6 && pcolumn_no > 0 && pcolumn_no < 6)
	{
		printf("Enter 0 to go right, 1 to go left, or 2 to go up : \n");
		scanf("%d", &choice);
	}
	//for all other cases the player is able to go in four different directions : up, down , left and right.
	else
	{
		printf("Enter 0 to go right, 1 to go left, 2 to go up, or 3 to go down : \n");
		scanf("%d", &choice);
	}

	//moving the player to the new slot based on they're choice.
	if (choice == 0)
	{
		pcolumn_no += 1;
	}
	else if (choice == 1)
	{
		pcolumn_no -= 1;
	}
	else if (choice == 2)
	{
		prow_no -= 1;
	}
	else if (choice == 3)
	{
		prow_no += 1;
	}
}

void player_leave_game (struct Player * in_game)
{
	int choice;
	printf("Are you sure you want to leave the game? Enter 1 for yes, 0 for no\n");
	scanf("%d", &choice);

	if (choice == 1)
	{
		//Player.in_game = 0;
	}
}
