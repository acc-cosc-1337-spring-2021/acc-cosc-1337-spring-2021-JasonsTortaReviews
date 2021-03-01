#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "decision.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify that get_letter_grade_using_if works")
{
	REQUIRE(get_letter_grade_using_if(90)== "A");
	REQUIRE(get_letter_grade_using_if(-10)== "Out of Range");
	REQUIRE(get_letter_grade_using_if(60)== "D");
	REQUIRE(get_letter_grade_using_if(83)== "B");
	REQUIRE(get_letter_grade_using_if(75)== "C");
	REQUIRE(get_letter_grade_using_if(59)== "F");
	REQUIRE(get_letter_grade_using_if(1000)== "Out of Range");
}



TEST_CASE("Verify that get_letter_grade_using_switch works"){

	REQUIRE(get_letter_grade_switch(95)== "A");
	REQUIRE(get_letter_grade_switch(89.9)== "B");
	REQUIRE(get_letter_grade_switch(72)== "C");
	REQUIRE(get_letter_grade_switch(67)== "D");
	REQUIRE(get_letter_grade_switch(49)== "F");
	REQUIRE(get_letter_grade_switch(101)== "Out of Range");
	REQUIRE(get_letter_grade_switch(-10)== "Out of Range");

}