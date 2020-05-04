/********************************************************\
File Name: main.cpp
Author: Liri (3/5/2020)
Purpose: This main file create object of Pai Sho game 
			and run the function that play Pai Sho game 
\********************************************************/

#include "PaiShoGame.h"

int main() {
	/**
	* @brief  create PaiShoGame object, and run the function that play the game
	* @return this function has no return value
	* @note   create two Players, change their personal score according to the
	*			roll of the dice
	* @author  Liri
	*/
	PaiShoGame pai_sho_game;
	pai_sho_game.play();
	return 0;
}