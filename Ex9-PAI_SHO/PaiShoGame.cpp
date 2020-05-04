/********************************************************\
File Name: PaiShoGame.cpp
Author: Liri (3/5/2020)
Purpose: This file contain class of PaiShoGame, that inherits from
			Player, with two players and functions that run
			the logic of the Pai Sho game
\********************************************************/

#include "PaiShoGame.h"

void PaiShoGame::play() {
	play_till_player_get_more_than_152_points(player1, player2);
}
