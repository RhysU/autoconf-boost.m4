## Process this file with automake to produce Makefile.in

AM_CPPFLAGS    = $(BOOST_CPPFLAGS)
AM_LDFLAGS     =
bin_PROGRAMS   =
check_PROGRAMS =
EXTRA_DIST     =

bin_PROGRAMS        += helloworld
helloworld_SOURCES   = helloworld.cpp

check_PROGRAMS       += test_example
test_example_SOURCES  = test_example.cpp
test_example_CPPFLAGS = $(AM_CPPFLAGS) -DBOOST_TEST_DYN_LINK -DBOOST_TEST_NO_LIB
test_example_LDFLAGS  = $(AM_LDFLAGS) $(BOOST_UNIT_TEST_FRAMEWORK_LDFLAGS)
test_example_LDADD    = $(BOOST_UNIT_TEST_FRAMEWORK_LIBS)

TESTS = $(check_PROGRAMS)
