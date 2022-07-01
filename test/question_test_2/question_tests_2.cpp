#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"
#include <vector>
#include <iostream>


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify 48 count and ingredients")
{
	vector<double> ingredients1 = get_cookie_ingredients(48);
	REQUIRE(ingredients1[0] == 1.5);
	REQUIRE(ingredients1[1] == 1);
	REQUIRE(ingredients1[2] == 2.75);
}
TEST_CASE("Verify 96 count and ingredients")
{
	vector<double> ingredients2 = get_cookie_ingredients(96);
	REQUIRE(ingredients2[0] == 3);
	REQUIRE(ingredients2[1] == 2);
	REQUIRE(ingredients2[2] == 5.5);
}
TEST_CASE("Verify 24 count and ingredients")
{
	vector<double> ingredients3 = get_cookie_ingredients(24);
	REQUIRE(ingredients3[0] == .75);
	REQUIRE(ingredients3[1] == .5);
	REQUIRE(ingredients3[2] == 1.375);
}