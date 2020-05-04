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

int NUMBER_OF_SIDES_OF_REGULARE_DIE = 6;
int DIE_START = 1;

class Player {
	int score;
public:
	Player();
	/**
	* @brief  create Player, initiate random number generator,
	*			and set the player score to 0
	* @return this function has no return value
	* @note   create Player, and set its score to zero
	* @author  Liri
	*/
	int roll_die();
	/**
	* @brief  roll regulare die, and add to the player score the result
	*			of the die
	* @params OUT int dice_result - the result of the die
	* @return the result of the die
	* @note   the score of the player is rising by the result of the die
	* @author  Liri
	*/
};