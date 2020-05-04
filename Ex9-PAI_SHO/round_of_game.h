/********************************************************\
File Name: round_of_game.h
Author: Liri (3/5/2020)
Purpose: This header file contain class of Round_Of_Game, inherits from
			Player, that contain declaration of functions that play
			one round in the game
\********************************************************/
#pragma once

#include "Player.h"

const char* const ROUND = "Round ";
const char* const COLON = ":";
const char* const PLAYER1_SCORE = "Player 1 score: ";
const char* const PLAYER2_SCORE = "Player 2 score: ";

class Round_Of_Game : public Player {
public:
	void round_of_game(unsigned int number_of_round,
					   Player &player1, 
					   Player &player2);
	/**
	* @brief  roll die to player1 and to player2, and print the number of
	*			the round and their personal score
	* @params   IN int number_of_round - the number of the round
	*			IN Player &player1 - the first player in the game
	*			IN player &player2 - the second player in the game
	* @return this function has no return value
	* @note   the score of the players is rising by the result of the die
	*			of each of them
	* @author  Liri
	*/

	void check_use_of_regulare_die(unsigned int result_of_die);
	/**
	* @brief  check if the player use regulare die - if not than throw 
	*			error
	* @params   IN unsigned int result_of_die - the result of the die
	* @return this function has no return value
	* @note   this function throw exception if the result of the die is 
	*			bigger than the number of sides of regulare die
	* @author  Liri
	*/

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
};
