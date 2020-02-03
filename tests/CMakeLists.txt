set(Boost_USE_STATIC_LIBS OFF)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)

# Sources that contain the tests
add_executable(BoostTest
        testFuncs.cpp # Just this one contains BOOST_TEST_MAIN
        testDynamicLib.cpp
        testStaticLib.cpp
        testA.cpp)

# Libraries used in the tests
target_link_libraries(BoostTest
        ${Boost_LIBRARIES}
        libStatic
        libDynamic)

# Including headers
target_include_directories(BoostTest PRIVATE
        ${Boost_INCLUDE_DIRS}
        ../include) # Including this allows to simply write #include "funcs.h"

# Including sources
target_sources(BoostTest PRIVATE
        ../src/A.cpp)

# Basic reference on how to write Boost Tests:
# https://www.boost.org/doc/libs/1_45_0/libs/test/doc/html/tutorials/hello-the-testing-world.html