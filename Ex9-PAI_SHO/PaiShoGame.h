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

enum END_OF_GAME { LOWEST_SCORE, MORE_THAN_152_POINTS, DIFFERENCE_OF_25 };

class PaiShoGame :public End_Of_Game {
	Player player1;
	Player player2;
	END_OF_GAME interface_end_of_game;
public:
	void play();
	/**
	* @brief  play Pai Sho game - call function that play the game accorfing
	*			to the interface of the end of the game
	* @return this function has no return value
	* @author  Liri
	*/
	void set_interface_end_of_game();
	/**
	* @brief  set the interface of the end of the game according to the choise
	*			of the user
	* @return this function has no return value
	* @notes  this function change interface_end_of_game according to the 
	*			choise of the user
	* @author  Liri
	*/
};
