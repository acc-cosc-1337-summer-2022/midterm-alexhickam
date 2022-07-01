#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify check 1.")
{
	Receipt receipt1(10, .20);
	REQUIRE(receipt1.calculate_tax() == .80);
	REQUIRE(receipt1.calculate_gratuity() == 2);
}
TEST_CASE("Verify check 2.")
{
	Receipt receipt2(20, .15);
	REQUIRE(receipt2.calculate_tax() == 1.60);
	REQUIRE(receipt2.calculate_gratuity() == 3);
}
TEST_CASE("Verify check 3.")
{
	Receipt receipt3(30, .10);
	REQUIRE(receipt3.calculate_tax() == 2.40);
	REQUIRE(receipt3.calculate_gratuity() == 3);
}