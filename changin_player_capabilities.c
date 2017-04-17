/*
 * changin_player_capabilities.h
 *
 *  Created on: 9 Apr 2017
 *      Author: zachary
 */

#include "everything.h"

void change_player_caps(Player * pplayer, Slot slot)
{
	/*If Dexterity < 50, then the player loses 10 Strength points
	If Dexterity >= 60, then the player gains 10 Strength points*/
	//conditions of changing player capabilities are: if they move to a hill, city or level ground.
	if (slot == CITY)
	{
		if (pplayer->smartness >  60)
		{
			pplayer->magic_skills += 10;
		}
		else if (pplayer->smartness <= 50)
		{
			pplayer->magic_skills -= 10;
		}
	}
	else if (slot == HILL)
	{
		if (pplayer->dexterity >= 60)
		{
			pplayer->strength += 10;
		}
		else if (pplayer->dexterity < 50)
		{
			pplayer->strength -= 10;
		}
	}
}
