/********************************************************\
File Name: Player.cpp
Author: Liri (3/5/2020)
Purpose: This file contain functions of Player,
			that roll die and get player score
\********************************************************/

#include "Player.h"

Player::Player() {
	srand(static_cast<unsigned int>(time(NULL)));
	score = 0;
}

unsigned int Player::roll_die_according_to_interface() {
	unsigned int die_result;

	switch (interface_of_rolling_dice) {
	case(REGULAR_DICE):
		die_result = roll_regulare_die();
		break;
	case(HIGHEST_SCORE_OF_3_DICES_WITH_10_SIDES):
		die_result = roll_3_dice_with_10_sides();
		break;
	case(HIGHEST_SCORE_OF_DICES_WITH_RISING_SIDES):
		die_result = roll_3_dice_with_rising_sides();
		break;
	}

	score += die_result;
	return die_result;
}

unsigned int Player::getScore() {
	return score;
}

void Player::set_interface_of_rolling_dice(int new_interface_of_rolling_dice) {
	interface_of_rolling_dice = new_interface_of_rolling_dice;
}