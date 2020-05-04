/********************************************************\
File Name: PaiShoGame.cpp
Author: Liri (3/5/2020)
Purpose: This file contain class of PaiShoGame, that inherits from
			Player, with two players and functions that run
			the logic of the Pai Sho game
\********************************************************/

#include "PaiShoGame.h"

void PaiShoGame::play_10_turns() {
	for (unsigned int number_of_round = 1; number_of_round <= 10; number_of_round++) {
		round_of_game(number_of_round);
	}
	int number_of_round = 11;
	while (player1.getScore() == player2.getScore()) {
		round_of_game(number_of_round);
		number_of_round++;
	}
	check_who_wins();
}

void PaiShoGame::check_who_wins() {
	if (player1.getScore() < player2.getScore()) {
		std::cout << std::endl << "Player 1 won!" << std::endl;
	}
	else {
		std::cout << std::endl << "Player 2 won!" << std::endl;
	}
}

void PaiShoGame::round_of_game(int number_of_round) {
	std::cout << "Round " << number_of_round << ":" << std::endl;
	play_turn(player1);
	std::cout << "Player 1: " << player1.getScore() << std::endl;
	play_turn(player2);
	std::cout << "Player 2: " << player2.getScore() << std::endl;
}

unsigned int PaiShoGame::play_turn(Player &player) {
	unsigned int die_result = player.roll_die();
	return die_result;
}



