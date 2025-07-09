/* File: apex_code.cpp
 * Project: Apex Lab 5 - Functions
 * Class: CISC 192 - C++
 * Professor: Alex Chow
 * Written by: Joshua Lopez
 * Description: This code defines 2 functions:
 *
 * int getNumberTiles(double heightInFt, double widthInFt, int tileSizeInInches):
 * -This function has 3 parameters, height and width of a floor plan, and the size
 *   of a square tile. It performs a calculation to determine an overcompensated result
 *   of how many tiles are needed to fit in the floor plan defined by height and width.
 *
 * bool upperCharAnd(char char1, char char2):
 * -This function has 2 parameters that take characters and checks if both are uppercase,
 *   if yes, then it returns true, else it returns false.
 *
 * */
#include <iostream>
#include <cctype>
#include <cmath>
#include "apex_code.h"

using namespace std;

int getNumberTiles(double heightInFt, double widthInFt, int tileSizeInInches) {
	// Constant used to convert feet into inches
	const double FT_TO_INCHES = 12.0;

	// Holds the number of tiles needed to cover the floor
	int numOfTiles;

	// These variables hold the converted values of height and width converted from feet to inches.
	double heightInches = heightInFt * FT_TO_INCHES;
	double widthInches = widthInFt * FT_TO_INCHES;

	// Divides height and width by the tile size, rounds them up, and multiplies them together to
	// get the number of tiles needed to cover the floor. This works because it takes the dimension
	// of one side, gets a ratio based on the tile size, over compensates that side by rounding it up,
	// then it does the same calculation on the other side and multiplies the results together to get
	// the over compensated surface area needed to cover the floor area.
	numOfTiles = ceil(heightInches / tileSizeInInches) * ceil(widthInches / tileSizeInInches) ;

	// Returns the number of tiles needed to cover the floor defined by width and height back to the caller.
	return numOfTiles;
}

bool upperCharAnd(char char1, char char2) {
	// This function uses a ternary operation that checks if char1 and char2 are uppercase,
	// if so, returns true, otherwise it returns false.
	return isupper(char1) && isupper(char2) ? true : false;
}
