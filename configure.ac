dnl ------------------------------------------------
dnl Package name and version number
dnl ------------------------------------------------
AC_INIT(autoconf-boost, [0.0.1], [rhys.ulerich@gmail.com])

dnl ------------------------------------------------
dnl Initialization macros
dnl ------------------------------------------------
AC_CONFIG_SRCDIR([src/helloworld.cpp])
AM_CONFIG_HEADER(src/config.h)
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE(1.10 no-define tar-ustar color-tests silent-rules parallel-tests -Wall foreign)
AC_PREREQ([2.61])

dnl ------------------------------------------------
dnl Check for C/C++ compiler toolchain
dnl ------------------------------------------------
AX_CHECK_ENABLE_DEBUG([no])
AC_LANG_PUSH([C])
AC_PROG_CC
AX_PROG_CC_C99_CFLAGS
AX_COMPILER_VENDOR
AC_LANG_POP([C])
AC_LANG_PUSH([C++])
AC_PROG_CXX
AX_COMPILER_VENDOR
AC_LANG_POP([C++])
AC_CACHE_SAVE

dnl ------------------------------------------------
dnl Enable GNU libtool for all of configure/build
dnl Current version checks also in Makefile.am
dnl ------------------------------------------------
LT_INIT
LT_OUTPUT
LT_PREREQ([2.2.6])
AC_SUBST(LIBTOOL_DEPS)
m4_append([AC_LANG(C)],[
    ac_compile="./libtool --mode=compile --tag=CC $ac_compile"
    ac_link="./libtool --mode=link --tag=CC $ac_link"
])[]dnl
m4_append([AC_LANG(C++)],[
    ac_compile="./libtool --mode=compile --tag=CXX $ac_compile"
    ac_link="./libtool --mode=link --tag=CXX $ac_link"
])[]dnl
AC_CACHE_SAVE

dnl ------------------------------------------------
dnl External library requirements
dnl ------------------------------------------------
AC_LANG_PUSH([C])
AC_LANG_POP([C])
AC_LANG_PUSH([C++])
BOOST_REQUIRE([1.41])
BOOST_TEST
AC_LANG_POP([C++])
AC_CACHE_SAVE

dnl ------------------------------------------------
dnl Compilation strictness and compatibility
dnl ------------------------------------------------
AC_LANG_PUSH([C])
AC_LANG_POP([C])
AC_LANG_PUSH([C++])
AX_CXX_CPPFLAGS_STD_LANG(AM_CPPFLAGS)
AX_CXX_CXXFLAGS_STD_LANG(AM_CXXFLAGS)
AX_CXX_LDFLAGS_STD_LANG(AM_LDFLAGS)
AX_CXXFLAGS_WARN_ALL
AC_LANG_POP([C++])
AX_WARNINGS_SANITIZE
AC_CACHE_SAVE

dnl ------------------------------------------------
dnl Generate Makefiles
dnl ------------------------------------------------
AC_CONFIG_FILES([
    Makefile
    src/Makefile
])

AC_OUTPUT()
