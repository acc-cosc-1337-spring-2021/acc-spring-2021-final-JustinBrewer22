#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

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