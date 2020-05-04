/********************************************************\
File Name: round_of_game.cpp
Author: Liri (3/5/2020)
Purpose: This file contain class of Round_Of_Game, inherits from
			Player, that contain functions that play
			one round in the game
\********************************************************/

#include "round_of_game.h"

void Round_Of_Game::round_of_game(int number_of_round, 
								  Player &player1, 
								  Player &player2) {
	std::cout << ROUND << number_of_round << COLON << std::endl;
	play_turn(player1);
	std::cout << PLAYER1_SCORE << player1.getScore() << std::endl;
	play_turn(player2);
	std::cout << PLAYER2_SCORE << player2.getScore() << std::endl;
}

unsigned int Round_Of_Game::play_turn(Player &player) {
	unsigned int die_result = player.roll_dice_according_to_interface();
	return die_result;
}