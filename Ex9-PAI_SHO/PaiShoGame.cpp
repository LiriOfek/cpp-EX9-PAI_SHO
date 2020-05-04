/********************************************************\
File Name: PaiShoGame.cpp
Author: Liri (3/5/2020)
Purpose: This file contain class of PaiShoGame, that inherits from
			Player, with two players and functions that run
			the logic of the Pai Sho game
\********************************************************/

#include "PaiShoGame.h"

void PaiShoGame::play() {
	play_10_rounds();
}

void PaiShoGame::play_10_rounds() {
	for (unsigned int number_of_round = START_ROUND;
		 number_of_round <= TOTAL_NUMBER_OF_ROUNDS;
		 number_of_round++) 
	{
		round_of_game(number_of_round, player1, player2);
	}
	handle_tie_after_10_rounds();
	check_who_wins();
}

void PaiShoGame::handle_tie_after_10_rounds() {
	int number_of_round = TOTAL_NUMBER_OF_ROUNDS + 1;
	while (player1.getScore() == player2.getScore()) {
		round_of_game(number_of_round, player1, player2);
		number_of_round++;
	}
}

void PaiShoGame::check_who_wins() {
	if (player1.getScore() < player2.getScore()) {
		std::cout << std::endl << PLAYER_1_WON << std::endl;
	}
	else {
		std::cout << std::endl << PLAYER_2_WON << std::endl;
	}
}
