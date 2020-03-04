/*
 * Testing for Static Library
 */

#include "catch2.hpp"
#include "StaticLib.h"

TEST_CASE("StaticLibTest", "[testStaticLib]") {
    StaticLib sl(42);

    REQUIRE(sl.testMe(5) == 47);
}