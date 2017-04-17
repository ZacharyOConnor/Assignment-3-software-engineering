/*
 * player_capabilities.h
 *
 *  Created on: 8 Apr 2017
 *      Author: zachary
 */

#include "everything.h"
#include <string.h>
#include <stdlib.h>

void assign_player_capabilities(Player *pplayer)
{
	pplayer->in_game = 1;
	if (strcmp(pplayer->player_type, "Wizard"))
	{
		assign_wizard_capabilities(pplayer);
	}

	if (strcmp(pplayer->player_type, "Elf"))
	{
		assign_elf_capabilities(pplayer);
	}
	if (strcmp(pplayer->player_type, "Human"))
	{
		assign_human_capabilities(pplayer);
	}
	if (strcmp(pplayer->player_type, "Ogre"))
	{
		assign_ogre_capabilities(pplayer);
	}
}

void assign_human_capabilities(Player *pplayer)
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
		   sum = pplayer->luck  + pplayer->dexterity + pplayer->smartness + pplayer->magic_skills + pplayer->strength;
	 }
   pplayer->life_points = 100;
}

void assign_wizard_capabilities(Player *pplayer)
{
	pplayer->smartness = rand() % 12 + 89;
	pplayer->luck=  rand() % 52 + 49;
	pplayer->dexterity=  rand() % 100 + 1;
	pplayer->strength=  rand() % 20 + 1;
	pplayer->magic_skills= rand() % 22 + 79;

	pplayer->life_points = 100;
}

void assign_elf_capabilities(Player *pplayer)
{
	pplayer->smartness = rand() % 32 + 69;
	pplayer->luck =  rand() % 42 + 59;
	pplayer->dexterity =  rand() % 100 + 1;
	pplayer->strength =  rand() % 50 + 1;
	pplayer->magic_skills = rand() % 30 + 50;
	pplayer->life_points = 100;
}

void assign_ogre_capabilities(Player *pplayer)
{
    int sum = 51;
   //sum of smartness and luck must be less than 50
    while (sum >= 50)
    {
    	pplayer->smartness = rand() % 20 + 1;
    	pplayer->luck =  rand() % 49 + 1;
        sum = pplayer->luck + pplayer->smartness;
    }

    pplayer->dexterity =  rand() % 22 + 79;
    pplayer->strength =  rand() % 22 + 79;
    pplayer->magic_skills = 0;
    pplayer->life_points = 100;
}
