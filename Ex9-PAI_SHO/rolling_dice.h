/********************************************************\
File Name: rolling_dice.h
Author: Liri (3/5/2020)
Purpose: This header file contain class of Rolling_Dice, 
			with declaration of functions that implemenet
			options of rolling dice
\********************************************************/

#pragma once

const unsigned int NUMBER_OF_SIDES_OF_REGULARE_DIE = 6;
const unsigned int DIE_START = 1;
const int NUMBER_OF_DICE = 3;
const int DIE_WITH_10_SIDES = 10;
const int START_NUMBER_OF_SIDES_OF_DIE = 5;

#include <iostream>
#include <cstdlib>
#include <ctime>

class Rolling_Dice {
public:
	unsigned int roll_regulare_die();
	/**
	* @brief  roll regulare die and return the result
	* @params OUT unsigned int die_result - the result of the die
	* @return the result of the die
	* @author  Liri
	*/

	unsigned int roll_3_dice_with_10_sides();
	/**
	* @brief  roll 3 dice with 10 sides each, and return the
	*			 highest result
	* @params OUT unsigned int die_result - the highest result of 3 dice 
	*			that each with 10 sides
	* @return the highest result of the dice
	* @author  Liri
	*/

	unsigned int roll_3_dice_with_rising_sides();
	/**
	* @brief  roll 3 dice with risisng number of sides, and return
	*			the highest result
	* @params OUT unsigned int die_result - the highest result of 3 dice
	*			with rising number of sides
	* @return the highest result of the dice
	* @author  Liri
	*/
};