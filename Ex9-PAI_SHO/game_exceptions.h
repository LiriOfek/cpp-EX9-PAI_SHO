/********************************************************\
File Name: game_exceptions.h
Author: Liri (3/5/2020)
Purpose: This file contain class of exceptions that inherits from 
			exception class, and functions that 
			throw the errors
\********************************************************/

#pragma once

#include <iostream>
#include <exception>
using namespace std;

struct Exception_Not_Use_Regulare_Die : public exception {
	const char * what() const throw () {
		return "Error - You can use only one regulare die with 6 sides!";
	}
};