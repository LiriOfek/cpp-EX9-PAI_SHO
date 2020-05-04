/********************************************************\
File Name: end_of_game.h
Author: Liri (3/5/2020)
Purpose: This header file contain class of End_Of_Game, inherits from
			Round_Of_Game, with declaration of functions that implemenet
			the logics of end of game
\********************************************************/

#pragma once

#include "round_of_game.h"

const unsigned int TOTAL_NUMBER_OF_ROUNDS = 10;
const unsigned int START_ROUND = 1;
const char* const PLAYER_1_WON = "Player 1 won!";
const char* const PLAYER_2_WON = "Player 2 won!";

class End_Of_Game : public Round_Of_Game {
public:
	void play_10_rounds(Player &player1, Player &player2);
	/**
	* @brief  play 10 rounds of the game, call function that handle
	*			tie situation, and call to function that
	*			check who wins
	* @return this function has no return value
	* @author  Liri
	*/

	void handle_tie_after_10_rounds(Player &player1, Player &player2);
	/**
	* @brief  if there was a tie than continue in the game till there
	*			is no tie
	* @return this function has no return value
	* @author  Liri
	*/

	void check_who_wins(Player &player1, Player &player2);
	/**
	* @brief  check who gets the lowest score and print it
	* @return this function has no return value
	* @author  Liri
	*/
};