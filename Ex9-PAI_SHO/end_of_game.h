/********************************************************\
File Name: end_of_game.h
Author: Liri (3/5/2020)
Purpose: This header file contain class of End_Of_Game, inherits from
			Round_Of_Game, with declaration of functions that implemenet
			the logics of end of game
\********************************************************/

#pragma once

#include "round_of_game.h"
#include <cmath>

const unsigned int TOTAL_NUMBER_OF_ROUNDS = 10;
const unsigned int START_ROUND = 1;
const char* const PLAYER_1_WON = "Player 1 won!";
const char* const PLAYER_2_WON = "Player 2 won!";
const int POINTS_FOR_WIN = 152;
const int DIFFERENCE_FOR_WIN = 25;

class End_Of_Game : public Round_Of_Game {
public:
	void play_10_rounds(Player &player1, 
						Player &player2);
	/**
	* @brief  play 10 rounds of the game, call function that handle
	*			tie situation, and call to function that
	*			check who wins
	* @params IN Player &player1 - the first player in the game
	*		  IN Player &player2 - the second player in the game
	* @return this function has no return value
	* @notes  this function change the score of the players,
	*			such that the score of each player raising by the result
	*			of the dice
	* @author  Liri
	*/

	void handle_tie_after_10_rounds(Player &player1, 
									Player &player2);
	/**
	* @brief  if there was a tie than continue in the game till there
	*			is no tie
	* @params IN Player &player1 - the first player in the game
	*		  IN Player &player2 - the second player in the game
	* @return this function has no return value
	* @notes  this function change the score of the players,
	*			such that the score of each player raising by the result
	*			of the dice
	* @author  Liri
	*/

	void play_till_player_get_more_than_152_points(Player &player1, 
												   Player &player2);
	/**
	* @brief  play till player get 152 points or more, and he is the winner
	* @params IN Player &player1 - the first player in the game
	*		  IN Player &player2 - the second player in the game
	* @return this function has no return value
	* @notes  this function change the score of the players,
	*			such that the score of each player raising by the result
	*			of the dice
	* @author  Liri
	*/

	void play_till_difference_of_25_points(Player &player1, 
									       Player &player2);
	/**
	* @brief  play till there is difference of 25 points or more between,
	*			the scores of the players, and the player with the highest
	*			score wins
	* @params IN Player &player1 - the first player in the game
	*		  IN Player &player2 - the second player in the game
	* @return this function has no return value
	* @notes  this function change the score of the players,
	*			such that the score of each player raising by the result
	*			of the dice
	* @author  Liri
	*/

	void check_who_wins(bool is_player1_win);
	/**
	* @brief  check who gets the lowest score and print it
	* @params IN bool is_player1_win - true if player1 wins,
	*								   false otherwise
	* @return this function has no return value
	* @author  Liri
	*/
};