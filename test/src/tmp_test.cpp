#include "MakeSokoJsonFiles/tmp.hpp"

#include<catch2/catch_test_macros.hpp>

TEST_CASE("Two numbers are added")
{
  REQUIRE( tmp::add(1, 2) == 3);
}