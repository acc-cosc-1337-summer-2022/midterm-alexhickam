#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"
#include <iostream>

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test 3 wigits sold returns 3 points")
{
	REQUIRE(get_earned_points(3) == 3);
}

TEST_CASE("Test 9 wigits sold returns 45 points")
{
	REQUIRE(get_earned_points(9) == 45);
}

TEST_CASE("Test 11 wigits sold returns 110 points")
{
	REQUIRE(get_earned_points(11) == 110);
}

TEST_CASE("Test 20 wigits sold returns 300 points")
{
	REQUIRE(get_earned_points(20) == 300);
}