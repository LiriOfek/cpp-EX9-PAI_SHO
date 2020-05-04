/********************************************************\
File Name: rolling_dice.cpp
Author: Liri (3/5/2020)
Purpose: This file contain class of Rolling_Dice,
			with functions that implemenet
			options of rolling dice
\********************************************************/

#include "rolling_dice.h"

unsigned int Rolling_Dice::roll_regulare_die() {
	unsigned int die_result;
	die_result = std::rand() % NUMBER_OF_SIDES_OF_REGULARE_DIE + DIE_START;
	return die_result;
}