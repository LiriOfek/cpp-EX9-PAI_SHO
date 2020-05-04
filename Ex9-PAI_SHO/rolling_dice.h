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
};