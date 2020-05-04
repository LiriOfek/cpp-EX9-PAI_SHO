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
	* @params   IN Player &player - the given player
	*			OUT unsigned int die_result - the result of the die
	* @return the result of the die
	* @note   the score of the given player is rising by the result of the die
	* @author  Liri
	*/

	void round_of_game(int number_of_round);
	/**
	* @brief  roll die to player1 and to player2, and print the number of 
	*			the round and their personal score
	* @params   IN int number_of_round - the number of the round
	* @return this function has no return value
	* @note   the score of the players is rising by the result of the die
	*			of each of them
	* @author  Liri
	*/

	void check_who_wins();
	/**
	* @brief  check who gets the lowest score and print it
	* @return this function has no return value
	* @author  Liri
	*/
};
