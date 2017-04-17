/*
 * everything.h
 *
 *  Created on: 16 Apr 2017
 *      Author: zachary
 */

#ifndef EVERYTHING_H_
#define EVERYTHING_H_

#define MAX_PLAYERS 6

typedef struct
{
	char name[20];
	char player_type[15];
	int life_points;
	int dexterity;
	int smartness;
	int strength;
	int luck;
	int magic_skills;
	int in_game;//this variable is set to 1 at the start of the game, if they leave, it becomes 0.
				//if life_points <= 0, in_game = 0
	int column;
	int row;
} Player;

#define MAX_ROWS 7
#define MAX_COLUMNS 7

typedef int Slot;
// There are 3 slot types
#define LEVEL_GROUND 0
#define CITY 1
#define HILL 2

int read_num_of_players();

void read_in_players(Player* player_array, int num_of_players);

int game_in_progress(Player* player_array, int num_of_players);

void player_turn(Player* pplayer);

int is_active_player(Player* pplayer);

Player* find_winner(Player* player_array, int num_of_players);

void input_player(Player *p);

void leave_game (Player * pin_game);

void move_player_to_new_slot (Slot * pslot_array[7][7], Player *prow_no, Player *pcolumn_no);

void slot_type_assignment(Slot slot_array[7][7]);

int distance_between_2_players(Player *p1, Player *p2);

void assign_player_capabilities(Player *pplayer);

void assign_human_capabilities(Player *pplayer);

void assign_wizard_capabilities(Player *pplayer);

void assign_elf_capabilities(Player *pplayer);

void assign_ogre_capabilities(Player *pplayer);

void change_player_caps(Player * pplayer, Slot slot);

int is_attackable(Player *p1, Player *p2);

void list_attacks (Player *pPlayer, Player *all_players, int n_players);

#endif /* EVERYTHING_H_ */
