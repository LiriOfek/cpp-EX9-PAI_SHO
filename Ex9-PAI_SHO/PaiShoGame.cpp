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
	int interface_of_end;
	std::cout << "How do you want the game to end?" << std::endl
		  	  << "Type 0 - The game is oven after 10 turns, and the player with the lowest score wins" << std::endl
			  << "Type 1 - The game is over when one of the players has more than 152 points" << std::endl
			  << "Type 2 - The game is over after one player has 25 points or more than the other player" << std::endl;
	std::cin >> interface_of_end;
	switch (interface_of_end) {
	case(0):
		interface_end_of_game = LOWEST_SCORE;
		break;
	case(1):
		interface_end_of_game = MORE_THAN_152_POINTS;
		break;
	case(2):
		interface_end_of_game = DIFFERENCE_OF_25;
		break;
	}
}