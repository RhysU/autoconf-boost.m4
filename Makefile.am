## Process this file with automake to produce Makefile.in

ACLOCAL_AMFLAGS = -I m4
AUTOMAKE_OPTIONS = foreign

# Build in these directories:
SUBDIRS = src

# Distribute these directories:
DIST_SUBDIRS = src

EXTRA_DIST= bootstrap

# Tools in the auxillary directory
AUX_DIST = build-aux/install-sh    \
           build-aux/mkinstalldirs \
           build-aux/missing

# Files to be deleted by 'make maintainer-clean'
MAINTAINERCLEANFILES = aclocal.m4       \
                       aminclude.am     \
                       autom4te.cache/* \
                       $(AUX_DIST)      \
                       config.log       \
                       config.status    \
                       config.sub       \
                       configure        \
                       Makefile.in      \
                       src/config.h.in  \
                       src/Makefile.in  \
                       src/stamp.h.in

# Additional tasks run with the 'all' target
all-local: libtool

# Make sure that libtool is up to date
libtool: $(LIBTOOL_DEPS)
	$(SHELL) ./config.status --recheck

