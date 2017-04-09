/*
 * player_capabilities.h
 *
 *  Created on: 8 Apr 2017
 *      Author: zachary
 */

#ifndef PLAYER_CAPABILITIES_H_
#define PLAYER_CAPABILITIES_H_



#endif /* PLAYER_CAPABILITIES_H_ */


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
	struct slot *place;
	int in_game;//this variable is set to 1 at the start of the game, if they leave, it becomes 0.
};


void assign_human_capabilities(struct Player *pplayer)
{
	int sum = 0;
	int j;
	while (sum > 300)
	{
		   j = rand() % 100 + 1;
		   pplayer->smartness = j;
		   pplayer->luck =  rand() % 100 + 1;
		   pplayer->dexterity =  rand() % 100 + 1;
		   pplayer->strength =  rand() % 100 + 1;
		   pplayer->magic_skills = rand() % 100 + 1;
		   sum = 0;
		   sum = pplayer.luck  +pplayer.dexterity + pplayer.smartness + pplayer.magic_skills + pplayer.strength;
	 }
   pplayer.life_points = 100;
}

void assign_wizard_capabilities(struct Player *pplayer)
{
	pplayer.smartness = rand() % 12 + 89;
	pplayer.luck=  rand() % 52 + 49;
	pplayer.dexterity=  rand() % 100 + 1;
	pplayer.strength=  rand() % 20 + 1;
	pplayer.magic_skills= rand() % 22 + 79;

	pplayer.life_points = 100;
}

void assign_elf_capabilities(struct Player *pplayer)
{
	pplayer.smartness = rand() % 32 + 69;
	pplayer.luck =  rand() % 42 + 59;
	pplayer.dexterity =  rand() % 100 + 1;
	pplayer.strength =  rand() % 50 + 1;
	pplayer.magic_skills = rand() % 30 + 50;
	pplayer.life_points = 100;
}

void assign_ogre_capabilities(struct Player *pplayer)
{
    int sum = 51;
   //sum of smartness and luck must be less than 50
    while (sum >= 50)
    {
    	pplayer.smartness = rand() % 20 + 1;
    	pplayer.luck =  rand() % 49 + 1;
        sum = pplayer.luck + pplayer.smartness;
    }

    pplayer.dexterity =  rand() % 22 + 79;
    pplayer.strength =  rand() % 22 + 79;
    pplayer.magic_skills = 0;
    pplayer.life_points = 100;
}
