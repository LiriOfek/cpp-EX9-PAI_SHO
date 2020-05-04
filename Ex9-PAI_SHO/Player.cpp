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

unsigned int Player::roll_die() {
	unsigned int die_result;
	die_result = roll_3_dice_with_rising_sides();
	score += die_result;
	return die_result;
}

unsigned int Player::getScore() {
	return score;
}

void Player::set_interface_of_rolling_dice(int new_interface_of_rolling_dice) {
	interface_of_rolling_dice = new_interface_of_rolling_dice;
}