/********************************************************\
File Name: PaiShoGame.h
Author: Liri (3/5/2020)
Purpose: This header file contain class of PaiShoGame, that inherits from
			Player, with two players and declaration of functions that run 
			the logic of the Pai Sho game 
\********************************************************/

#pragma once
#include "Player.h"
#include "end_of_game.h"

class PaiShoGame :public End_Of_Game {
	Player player1;
	Player player2;
public:
	void play();

};
