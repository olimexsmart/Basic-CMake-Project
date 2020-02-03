/*
 * Tests for plain and simple class not part of a library
 */

#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>
#include "A.h"

BOOST_AUTO_TEST_CASE(testA) { // NOLINT(cert-err58-cpp)
    BOOST_CHECK(A::yes(5) == 25);
}

