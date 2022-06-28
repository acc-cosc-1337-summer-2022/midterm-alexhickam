#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"
#include <iostream>

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify 5*5")
{
	class Rectangle square;
	REQUIRE(square.get_area(5,5) == 25);
}

TEST_CASE("Verify 3*10")
{
	class Rectangle small_rectangle;
	REQUIRE(small_rectangle.get_area(3,10) == 30);
}

TEST_CASE("Verify 10*10")
{
	class Rectangle big_square;
	REQUIRE(big_square.get_area(10,10) == 100);
}
