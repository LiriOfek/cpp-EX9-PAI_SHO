/********************************************************\
File Name: round_of_game.cpp
Author: Liri (3/5/2020)
Purpose: This file contain class of Round_Of_Game, inherits from
			Player, that contain functions that play
			one round in the game
\********************************************************/

#include "round_of_game.h"
#include "game_exceptions.h"

const unsigned int NUMBER_OF_TURNS = 8;
const unsigned int INITIAL_INDEX = 0;

/*arrays of same results in 8 turns, and the index in the array*/
unsigned int result_of_dice_8_turns_player1[NUMBER_OF_TURNS];
unsigned int index_in_array_of_8_turns_player1 = INITIAL_INDEX;
unsigned int result_of_dice_8_turns_player2[NUMBER_OF_TURNS];
unsigned int index_in_array_of_8_turns_player2 = INITIAL_INDEX;

void Round_Of_Game::round_of_game(unsigned int number_of_round, 
								  Player &player1, 
								  Player &player2) {
	unsigned int result_of_die_of_player1;
	unsigned int result_of_die_of_player2;

	std::cout << ROUND << number_of_round << COLON << std::endl;

	result_of_die_of_player1 = play_turn(player1);
	std::cout << PLAYER1_SCORE << player1.getScore() << std::endl;

	check_use_of_regulare_die(result_of_die_of_player1);
	index_in_array_of_8_turns_player1 = check_if_player_die_is_treated(index_in_array_of_8_turns_player1, 
																	   result_of_dice_8_turns_player1, 
																	   result_of_die_of_player1);

	result_of_die_of_player2 = play_turn(player2);
	std::cout << PLAYER2_SCORE << player2.getScore() << std::endl;

	check_use_of_regulare_die(result_of_die_of_player2);
	index_in_array_of_8_turns_player2 = check_if_player_die_is_treated(index_in_array_of_8_turns_player2,
																	   result_of_dice_8_turns_player2,
																	   result_of_die_of_player2);
}

void Round_Of_Game::check_use_of_regulare_die(unsigned int result_of_die) {
	if (NUMBER_OF_SIDES_OF_REGULARE_DIE < result_of_die) {
		throw Exception_Not_Use_Regulare_Die();
	}
}

unsigned int Round_Of_Game::check_if_player_die_is_treated(unsigned int index_in_player_array,
														   unsigned int array_of_player_dice_results[NUMBER_OF_TURNS],
														   unsigned int current_dice_result) {

	if (NUMBER_OF_TURNS == index_in_player_array) {
		throw Exception_Same_Result_Of_Die();
	}

	if (INITIAL_INDEX == index_in_player_array) {
		array_of_player_dice_results[index_in_player_array] = current_dice_result;
		index_in_player_array++;
	}

	else {
		if (current_dice_result == array_of_player_dice_results[index_in_player_array - 1]) {
			/*the result of the die has already been received sequentially in
				the previous turns -> add to the array*/
			array_of_player_dice_results[index_in_player_array] = current_dice_result;
			index_in_player_array++;
		}
		else {
			index_in_player_array = INITIAL_INDEX;
		}
	}
	return index_in_player_array;
}

unsigned int Round_Of_Game::play_turn(Player &player) {
	unsigned int die_result = player.roll_dice_according_to_interface();
	return die_result;
}