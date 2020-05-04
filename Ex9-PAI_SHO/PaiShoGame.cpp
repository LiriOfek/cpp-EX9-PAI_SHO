/********************************************************\
File Name: PaiShoGame.cpp
Author: Liri (3/5/2020)
Purpose: This file contain class of PaiShoGame, that inherits from
			Player, with two players and functions that run
			the logic of the Pai Sho game
\********************************************************/

#include "PaiShoGame.h"

void PaiShoGame::play() {
	set_interface_end_of_game();
	switch (interface_end_of_game) {
	case LOWEST_SCORE:
		play_10_rounds(player1, player2);
		break;
	case MORE_THAN_152_POINTS:
		play_till_player_get_more_than_152_points(player1, player2);
		break;
	case DIFFERENCE_OF_25:
		play_till_difference_of_25_points(player1, player2);
		break;
	}			
}

void PaiShoGame::set_interface_end_of_game() {
	std::cout << HOW_USER_WANTS_GAME_TO_END << std::endl
		  	  << TYPE_0_TO_END_AFTER_10_ROUNDS_AND_PLAYER_WITH_LOWEST_SCORE_WINS << std::endl
			  << TYPE_1_TO_END_WHEN_PLAYER_GET_152_POINTS_OR_MORE << std::endl
			  << TYPE_2_THERE_IS_DIFFERENCE_OF_25_POINTS_OR_MORE_BETWEEN_THE_PLAYERS << std::endl;
	std::cin >> interface_end_of_game;

}