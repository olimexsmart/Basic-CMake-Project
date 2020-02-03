/*
 * Test for the collection of functions in funcs.h
 */

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN  // in only one cpp file

#include <boost/test/unit_test.hpp>
#include "funcs.h"

BOOST_AUTO_TEST_CASE(funcsTest) // NOLINT(cert-err58-cpp) {
// Just because we can
for (
int j = 0;
j < 10; ++j) {
BOOST_CHECK(foo(j) == j * j);
}
}