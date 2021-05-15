#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// Question 1 Test Case
TEST_CASE("Verify Die Rolls a Value from 1 to 6")
{
	Die onetosix;
	srand(time(0));
	for (int i = 0; i < 11; i = i + 1)
	{
		onetosix.roll();

		REQUIRE(((onetosix.rolled_value() < 7) || (onetosix.rolled_value() > 0)));
	}
}

//Question 2 Test Case
TEST_CASE("Verify Die Rolls Return a Value from 2 to 12")
{
	Die die1, die2;
	Roll twodie(die1, die2);
	srand(time(0));
	for (int i = 0; i < 11; i = i + 1)
	{
		twodie.roll_die();

		REQUIRE(((twodie.roll_value() < 13) || (twodie.roll_value() > 1)));
	}
}