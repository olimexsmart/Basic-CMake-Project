/*
 * Tests for Dynamic library
 */

#include "catch2.hpp"
#include "DynamicLib.h"

TEST_CASE("DynamicLibTests", "[testDynamicLib]") {

    DynamicLib dl("Ciao");

    //REQUIRE(dl.yesItsMe(5) == "Ciao5");
//    CHECK(1);
}


