/********************************************************\
File Name: round_of_game.h
Author: Liri (3/5/2020)
Purpose: This header file contain class of Round_Of_Game, inherits from
			Player, that contain declaration of functions that play
			one round in the game
\********************************************************/
#pragma once

#include "Player.h"

const unsigned int NUMBER_OF_TURNS = 8;
const unsigned int INITIAL_INDEX = 0;

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
	* @brief  roll die to player1 and to player2, print the number of
	*			the round and their personal score, and call functions that
	*			check if there are errors
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

	unsigned int check_if_player_die_is_treated(unsigned int index_in_player_array, 
												unsigned int array_of_player_dice_results[NUMBER_OF_TURNS],
												unsigned int current_dice_result);
	/**
	* @brief  check if during 8 turns in sequantially there was received the
	*			same result in the die - if yes than the die is treated than 
	*			throw error, if not than fill the given array with the given
	*			current dice result
	* @params   IN unsigned int array_of_player_dice_results[NUMBER_OF_TURNS] -
	*			array of sequantially results during 8 turns
	*			IN unsigned int index_in_player_array - idex in the given array
	*			of the next element
	*			IN unsigned int current_dice_result - the current result of die
	*			OUT unsigned int the index of the next element in the given array
	* @return the index of the next element in the given array
	* @note   this function throw exception if the array full of elements, 
	*			the function fill the given array with elements if they are appeare 
	*			in the array
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
