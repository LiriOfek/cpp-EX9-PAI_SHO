/********************************************************\
File Name: end_of_game.cpp
Author: Liri (3/5/2020)
Purpose: This header file contain functions of class of End_Of_Game, 
			inherits from Round_Of_Game, that implemenet
			the logics of end of game
\********************************************************/

#include "end_of_game.h"

const int POINTS_FOR_WIN = 152;

void End_Of_Game::play_10_rounds(Player &player1, Player &player2) {
	for (unsigned int number_of_round = START_ROUND;
		number_of_round <= TOTAL_NUMBER_OF_ROUNDS;
		number_of_round++)
	{
		round_of_game(number_of_round, player1, player2);
	}
	handle_tie_after_10_rounds(player1, player2);
	check_who_wins(player1.getScore() < player2.getScore());
}

void End_Of_Game::handle_tie_after_10_rounds(Player &player1, Player &player2) {
	int number_of_round = TOTAL_NUMBER_OF_ROUNDS + 1;
	while (player1.getScore() == player2.getScore()) {
		round_of_game(number_of_round, player1, player2);
		number_of_round++;
	}
}

void End_Of_Game::play_till_player_get_more_than_152_points(Player &player1, Player &player2) {
	int number_of_round = START_ROUND;
	while ((player1.getScore() < POINTS_FOR_WIN) &&
		   (player2.getScore() < POINTS_FOR_WIN)) {
		round_of_game(number_of_round, player1, player2);
		number_of_round++;
	}
	check_who_wins(player1.getScore() >= player2.getScore());
}

void End_Of_Game::check_who_wins(bool is_player1_win) {
	if (is_player1_win) {
		std::cout << std::endl << PLAYER_1_WON << std::endl;
	}
	else {
		std::cout << std::endl << PLAYER_2_WON << std::endl;
	}
}