#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum_numbers function") 
{
	REQUIRE(sum_numbers(5, 5) == 10);
}

TEST_CASE("Test mult_function")
{
	REQUIRE(mult_numbers(10) == 50);
}


TEST_CASE("Test mult_function (2) ")
{
	REQUIRE(mult_numbers(2) == 10);
}

