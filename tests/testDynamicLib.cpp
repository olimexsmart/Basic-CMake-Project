/*
 * Tests for Dynamic library
 */

#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>
#include "DynamicLib.h"

BOOST_AUTO_TEST_CASE(testDynamicLib) // NOLINT(cert-err58-cpp) {

DynamicLib dl("Ciao");

BOOST_CHECK(dl.yesItsMe(5) == "Ciao5");
}



