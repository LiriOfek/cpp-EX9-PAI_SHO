/********************************************************\
File Name: round_of_game.cpp
Author: Liri (3/5/2020)
Purpose: This file contain class of Round_Of_Game, inherits from
			Player, that contain functions that play
			one round in the game
\********************************************************/

#include "round_of_game.h"
#include "game_exceptions.h"

void Round_Of_Game::round_of_game(unsigned int number_of_round, 
								  Player &player1, 
								  Player &player2) {
	unsigned int result_of_die_of_player1;
	unsigned int result_of_die_of_player2;

	std::cout << ROUND << number_of_round << COLON << std::endl;

	result_of_die_of_player1 = play_turn(player1);
	std::cout << PLAYER1_SCORE << player1.getScore() << std::endl;
	check_use_of_regulare_die(result_of_die_of_player1);

	result_of_die_of_player2 = play_turn(player2);
	std::cout << PLAYER2_SCORE << player2.getScore() << std::endl;
	check_use_of_regulare_die(result_of_die_of_player2);
}

void Round_Of_Game::check_use_of_regulare_die(unsigned int result_of_die) {
	if (NUMBER_OF_SIDES_OF_REGULARE_DIE < result_of_die) {
		throw Exception_Not_Use_Regulare_Die();
	}
}

unsigned int Round_Of_Game::play_turn(Player &player) {
	unsigned int die_result = player.roll_dice_according_to_interface();
	return die_result;
}