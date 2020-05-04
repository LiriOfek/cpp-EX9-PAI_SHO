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