/*
 * changin_player_capabilities.h
 *
 *  Created on: 9 Apr 2017
 *      Author: zachary
 */

#ifndef CHANGIN_PLAYER_CAPABILITIES_H_
#define CHANGIN_PLAYER_CAPABILITIES_H_



#endif /* CHANGIN_PLAYER_CAPABILITIES_H_ */

struct Player
{
	char name[20];
	char player_type[15];
	int life_points;
	int dexterity;
	int smartness;
	int strength;
	int luck;
	int magic_skills;
	//struct slot *place;
	int in_game;//this variable is set to 1 at the start of the game, if they leave, it becomes 0.
	int column_no;
	int row_no;
};


void change_player_caps(struct Player * pstrength, struct Player * pdexterity,struct Player * pmagic_skills, struct Player * psmartness, struct Player * prow_no, struct Player * pcolumn_no, int * pslot_array[7][7])
{
	/*If Dexterity < 50, then the player loses 10 Strength points
	If Dexterity >= 60, then the player gains 10 Strength points*/
	//conditions of changing player capabilities are: if they move to a hill, city or level ground.
	if (pslot_array[prow_no][pcolumn_no] == 1)//if player moves to city slot
	{
		if (psmartness > 60)
		{
			pmagic_skills += 10;
		}
		else if (psmartness <= 50)
		{
			pmagic_skills -= 10;
		}
	}
	else if (pslot_array[prow_no][pcolumn_no] == 2)
	{//if player moves to a hill slot.
		if (pdexterity >= 60)
		{
			pstrength += 10;
		}
		else if (pdexterity < 50)
		{
			pstrength -= 10;
		}
	}

}
