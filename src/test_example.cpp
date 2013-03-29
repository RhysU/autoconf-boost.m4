#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(one_suite)

BOOST_AUTO_TEST_CASE( totally_suite )
{
    BOOST_CHECK(true);
    BOOST_TEST_PASSPOINT();
    BOOST_TEST_MESSAGE("Twiddling thumbs");
}

BOOST_AUTO_TEST_SUITE_END()


BOOST_AUTO_TEST_SUITE(two_suite)

BOOST_AUTO_TEST_CASE( super_suite )
{
    BOOST_REQUIRE(true);
    BOOST_TEST_PASSPOINT();
    BOOST_TEST_MESSAGE("Still twiddling thumbs...");
}

BOOST_AUTO_TEST_SUITE_END()
