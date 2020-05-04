/********************************************************\
File Name: PaiShoGame.h
Author: Liri (3/5/2020)
Purpose: This header file contain class of PaiShoGame, that inherits from
			Player, with two players and declaration of functions that run 
			the logic of the Pai Sho game 
\********************************************************/

#pragma once
#include "Player.h"

class PaiShoGame :public Player {
	Player player1;
	Player player2;
public:
	unsigned int play_turn(Player &player);
	/**
	* @brief  roll regulare die, and add to the given player score the result
	*			of the die
	* @params OUT unsigned int die_result - the result of the die
	* @return the result of the die
	* @note   the score of the given player is rising by the result of the die
	* @author  Liri
	*/
};
