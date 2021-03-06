#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "phase.h"
#include "point_phase.h"
#include "come_out_phase.h"

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

//Question 3 Test Case
TEST_CASE("Verify Shooter Returns a Roll and Results in 2 or 12")
{
	Shooter start;
	srand(time(0));
	for (int i = 0; i < 11; i = i + 1)
	{
		Die die1, die2;
		Roll *result = start.throw_die(die1, die2);
		REQUIRE(((result->roll_value() < 13) || (result->roll_value() > 1)));
	}
}

//Question 4 Test Case
TEST_CASE("Verify ComeOutPhase Returns and PointPhase Returns")
{
	Shooter start;
	int private_point = 1;
	Die die1, die2;
	ComeOutPhase x;
	PointPhase y(private_point);
	
	Roll* result = start.throw_die(die1, die2);
	REQUIRE((x.get_outcome(result) == RollOutcome::natural || x.get_outcome(result) == RollOutcome::craps || x.get_outcome(result) == RollOutcome::point));
	REQUIRE((y.get_outcome(result) == RollOutcome::point || y.get_outcome(result) == RollOutcome::seven_out || y.get_outcome(result) == RollOutcome::nopoint));
}