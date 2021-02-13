#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Verify mult_numbers function")
{
	REQUIRE(mult_numbers(10,10) == 100);
}

TEST_CASE("Verify the get_sales_tax_amount Function")
{
	REQUIRE(get_sales_tax_amount(10)==.675);
}

TEST_CASE("Verify the get_sales_tax_amount Function (2) ")
{
	REQUIRE(get_sales_tax_amount(20)== 1.35);
}

TEST_CASE("Verify the get_tip_amount Function:  15% of $20")
{
	REQUIRE(get_tip_amount(20,.15)== 3);
}

TEST_CASE("Verify the get_tip_amount Function (2): 20% of $20")
{
	REQUIRE(get_tip_amount(20,.20)== 4);
}

