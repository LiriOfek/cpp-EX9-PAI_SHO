/********************************************************\
File Name: Player.h
Author: Liri (3/5/2020)
Purpose: This header file contain class of Player, with declaration of
			functions that roll die and get player score
\********************************************************/

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

const unsigned int NUMBER_OF_SIDES_OF_REGULARE_DIE = 6;
const unsigned int DIE_START = 1;

/*interface of rolling dice*/
const unsigned int REGULAR_DICE = 0;
const unsigned int HIGHEST_SCORE_OF_3_DICES_WITH_10_SIDES = 1;
const unsigned int HIGHEST_SCORE_OF_DICES_WITH_RISING_SIDES = 2;

class Player {
	unsigned int score;
	unsigned int interface_of_rolling_dice;
public:
	Player();
	/**
	* @brief  create Player, initiate random number generator,
	*			and set the player score to 0
	* @return this function has no return value
	* @note   create Player, and set its score to zero
	* @author  Liri
	*/

	unsigned int roll_regulare_die();
	/**
	* @brief  roll regulare die, and add to the player score the result
	*			of the die
	* @params OUT unsigned int die_result - the result of the die
	* @return the result of the die
	* @note   the score of the player is rising by the result of the die
	* @author  Liri
	*/

	unsigned int getScore();
	/**
	* @brief  return the personal score of the player
	* @params OUT unsigned int score - the personal score of the player
	* @return the personal score of the player
	* @author  Liri
	*/
	
	void set_interface_of_rolling_dice(int new_interface_of_rolling_dice);
	/**
	* @brief  set the interface of rolling dice for the player 
	* @params IN int new_interface_of_rolling_dice - the interface of rolling
	*			dice
	* @return this function has no return value
	* @author  Liri
	*/
};