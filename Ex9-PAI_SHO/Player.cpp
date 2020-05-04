/********************************************************\
File Name: Player.cpp
Author: Liri (3/5/2020)
Purpose: This header file contain functions of Player,
			that roll die and get player score
\********************************************************/

#include "Player.h"

Player::Player() {
	srand(static_cast<unsigned int>(time(NULL)));
	score = 0;
}

unsigned int Player::roll_die() {
	unsigned int die_result;
	die_result = std::rand() % NUMBER_OF_SIDES_OF_REGULARE_DIE + DIE_START;
	score += die_result;
	return die_result;
}

unsigned int Player::getScore() {
	return score;
}