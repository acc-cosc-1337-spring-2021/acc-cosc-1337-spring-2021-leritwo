#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify factorial function")
{
	REQUIRE(factorial_numbers(3)==6);
	REQUIRE(factorial_numbers(4)==24) ;
	REQUIRE(factorial_numbers(5)==120);
}
