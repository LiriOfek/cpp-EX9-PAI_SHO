/********************************************************\
File Name: Player.cpp
Author: Liri (3/5/2020)
Purpose: This header file contain functions of Player,
			that roll die and get player score
\********************************************************/

#include "Player.h"

Player::Player() {
		srand(static_cast<unsigned int>(time(0)));
		score = 0;
}