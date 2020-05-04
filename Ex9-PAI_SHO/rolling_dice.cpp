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

unsigned int Rolling_Dice::roll_3_dice_with_10_sides() {
	unsigned int highest_dice_result = DIE_START;

	for (unsigned int number_of_dice = DIE_START;
		 number_of_dice <= NUMBER_OF_DICE;
		 number_of_dice++) 
	{
		unsigned int current_dice_result = (std::rand() % DIE_WITH_10_SIDES + DIE_START);
		if (highest_dice_result < current_dice_result) {
			highest_dice_result = current_dice_result;
		}
	}
	return highest_dice_result;
}

unsigned int Rolling_Dice::roll_3_dice_with_rising_sides() {
	unsigned int highest_dice_result = DIE_START;
	for (unsigned int number_of_dice = DIE_START;
		 number_of_dice <= NUMBER_OF_DICE;
		 number_of_dice++) 
	{
		unsigned int current_dice_result = (std::rand() % 
			(number_of_dice + START_NUMBER_OF_SIDES_OF_DIE - 1) + DIE_START);
		if (highest_dice_result < current_dice_result) {
			highest_dice_result = current_dice_result;
		}
	}
	return highest_dice_result;
}