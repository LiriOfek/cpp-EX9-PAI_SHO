/********************************************************\
File Name: PaiShoGame.h
Author: Liri (3/5/2020)
Purpose: This header file contain class of PaiShoGame, that inherits from
			Player, with two players and declaration of functions that run 
			the logic of the Pai Sho game 
\********************************************************/

#pragma once
#include "Player.h"

const unsigned int TOTAL_NUMBER_OF_ROUNDS = 10;
const unsigned int START_ROUND = 1;
const char* const ROUND = "Round ";
const char* const COLON = ":";
const char* const PLAYER1_SCORE = "Player 1 score: ";
const char* const PLAYER2_SCORE = "Player 2 score: ";
const char* const PLAYER_1_WON = "Player 1 won!";
const char* const PLAYER_2_WON = "Player 2 won!";

class PaiShoGame :public Player {
	Player player1;
	Player player2;
public:
	void play();
	/**
	* @brief  play Pai Sho game - call function that play 10 rounds of
	*			the game, if there was a tie than continue till there is
	*			no tie and function that check who wins
	* @return this function has no return value
	* @notes  this function change the score of the players, such that the 
	*			score of each player raising by the result of the dice
	* @author  Liri
	*/

	void play_10_rounds();
	/**
	* @brief  play 10 rounds of the game, call function that handle
	*			tie situation, and call to function that
	*			check who wins
	* @return this function has no return value
	* @notes  this function change the score of the players,
	*			such that the score of each player raising by the result
	*			of the dice
	* @author  Liri
	*/

	void handle_tie_after_10_rounds();
	/**
	* @brief  if there was a tie than continue in the game till there
	*			is no tie
	* @return this function has no return value
	* @notes  this function change the score of the players,
	*			such that the score of each player raising by the result
	*			of the dice
	* @author  Liri
	*/

	void check_who_wins();
	/**
	* @brief  check who gets the lowest score and print it
	* @return this function has no return value
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
