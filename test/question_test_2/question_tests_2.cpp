
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify 48 cookies")
{
	cookies_to_bake;
	REQUIRE(cookies_to_bake(48) = sugar 1.5 butter 1 flour 2.75);
}

TEST_CASE("Verify 96 cookies")
{
	cookies_to_bake;
	REQUIRE(cookies_to_bake(20) = sugar 3 butter 2 flour 5.5);
}

TEST_CASE("Verify 24 cookies")
{
	cookies_to_bake;
	REQUIRE(cookies_to_bake(20) sugar .75 butter .5 flour 1.375);
}