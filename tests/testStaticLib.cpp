/*
 * Testing for Static Library
 */

#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>
#include "StaticLib.h"

BOOST_AUTO_TEST_CASE(testStaticLib) // NOLINT(cert-err58-cpp) {

StaticLib sl(42);

BOOST_CHECK(sl.testMe(5) == 47);
}