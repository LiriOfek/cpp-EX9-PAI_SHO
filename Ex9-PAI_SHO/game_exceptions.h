/********************************************************\
File Name: game_exceptions.h
Author: Liri (3/5/2020)
Purpose: This file contain structs of exceptions that inherits from 
			exception class, and functions that 
			throw the errors
\********************************************************/

#pragma once

#include <iostream>
#include <exception>
using namespace std;

struct Exception_Not_Use_Regulare_Die : public exception {
	/**
	* @brief  throw exception for not using regulare die
	* @return const char* that explain the user can't use die
	*			which has more than 6 sides
	* @note   throw exception
	* @author  Liri
	*/
	const char * what() const throw () {
		return "Error - You can use only one regulare die with 6 sides!";
	}
};

struct Exception_Same_Result_Of_Die : public exception {
	/**
	* @brief  throw exception for using treated die, because during 8 turns 
	*			there was the same result of the dice
	* @return const char* that explain the user can't use treated die
	*			which return the same result 
	* @note   throw exception
	* @author  Liri
	*/
	const char * what() const throw () {
		return "Error - During 8 turns the result of your die was the same, therefore you are using treated die!";
	}
};