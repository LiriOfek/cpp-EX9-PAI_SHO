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

/*interface of end of game*/
const int LOWEST_SCORE = 0;
const int MORE_THAN_152_POINTS = 1;
const int DIFFERENCE_OF_25 = 2;

/*constants strings to print for interface end of game*/
const char* const HOW_USER_WANTS_GAME_TO_END = "How do you want the game to end?";
const char* const TYPE_0_TO_END_AFTER_10_ROUNDS_AND_PLAYER_WITH_LOWEST_SCORE_WINS = "Type 0 - The game is oven after 10 turns, and the player with the lowest score wins";
const char* const TYPE_1_TO_END_WHEN_PLAYER_GET_152_POINTS_OR_MORE = "Type 1 - The game is over when one of the players has more than 152 points";
const char* const TYPE_2_THERE_IS_DIFFERENCE_OF_25_POINTS_OR_MORE_BETWEEN_THE_PLAYERS = "Type 2 - The game is over after one player has 25 points or more than the other player";

/*constants strings to print for interface rolling dice*/
const char* const HOW_USER_WANTS_EACH_TURN = "How do you want each turn to be?";
const char* const TYPE_0_ROLL_REGULARE_DIE = "Type 0 - At each turn the player roll regulare die, and the value of the die will be added to the player score";
const char* const TYPE_1_ROLL_3_DICES_WITH_10_SIDES = "Type 1 - At each turn the player roll 3 dice with 10 sides, and the value of the die with the highest number will be added to the player score";
const char* const TYPE_2_ROLL_3_DICES_WITH_RISING_SIDES = "Type 2 - At each turn the player roll 3 dice with rising number of sides, starting from 6 sides, and the value of the die with the higest number will be added to the player score";

const char* const FOR_PLAYER1 = "For player 1: ";
const char* const FOR_PLAYER2 = "For player 2: ";

class PaiShoGame :public End_Of_Game {
	Player player1;
	Player player2;
	unsigned int interface_end_of_game;
public:
	void play();
	/**
	* @brief  play Pai Sho game - call function that play the game accorfing
	*			to the interface of the end of the game
	* @return this function has no return value
	* @notes  this function change the score of the players, such that the
	*			score of each player raising by the result of the dice
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

	void set_interface_roll_dice();
};
