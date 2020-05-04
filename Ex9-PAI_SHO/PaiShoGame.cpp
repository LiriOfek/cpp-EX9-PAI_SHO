/********************************************************\
File Name: PaiShoGame.cpp
Author: Liri (3/5/2020)
Purpose: This file contain class of PaiShoGame, that inherits from
			Player, with two players and functions that run
			the logic of the Pai Sho game
\********************************************************/

#include "PaiShoGame.h"

unsigned int PaiShoGame::play_turn(Player &player) {
	unsigned int die_result = player.roll_die();
	return die_result;
}