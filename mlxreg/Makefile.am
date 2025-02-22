#--
# 
# Copyright (c) 2019-2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# 
# This software is available to you under a choice of one of two
# licenses.  You may choose to be licensed under the terms of the GNU
# General Public License (GPL) Version 2, available from the file
# COPYING in the main directory of this source tree, or the
# OpenIB.org BSD license below:
# 
#     Redistribution and use in source and binary forms, with or
#     without modification, are permitted provided that the following
#     conditions are met:
# 
#      - Redistributions of source code must retain the above
#        copyright notice, this list of conditions and the following
#        disclaimer.
# 
#      - Redistributions in binary form must reproduce the above
#        copyright notice, this list of conditions and the following
#        disclaimer in the documentation and/or other materials
#        provided with the distribution.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
# BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
# ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
# CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

#--

# Makefile.am -- Process this file with automake to produce Makefile.in
USER_DIR = $(top_srcdir)
UTILS_DIR = $(top_srcdir)/mft_utils

MTCR_DIR    = $(top_srcdir)/${MTCR_CONF_DIR}
MTCR_INC_DIR = $(top_srcdir)/include/mtcr_ul
MFLASH_DIR  = $(top_srcdir)/mflash
COMMON_DIR  = $(top_srcdir)/common
LAYOUTS_DIR = $(top_srcdir)/tools_layouts
MFT_UTILS_DIR = $(top_srcdir)/mft_utils

INCLUDES = -I. -I$(USER_DIR) -I$(MTCR_DIR) -I$(MFT_EXT_LIBS_INC_DIR) -I$(UTILS_DIR) -I$(MTCR_INC_DIR)

AM_CXXFLAGS = -Wall -W -DMST_UL -g -MP -MD -pipe -Werror

lib_LTLIBRARIES = libmstreg_lib.a

libmstreg_lib_a_SOURCES = mlxreg_exception.h \
                           mlxreg_exception.cpp \
                           mlxreg_parser.h \
                           mlxreg_parser.cpp \
                           mlxreg_lib.h \
                           mlxreg_lib.cpp

mstreg_SOURCES = mlxreg_ui.cpp mlxreg_ui.h

bin_PROGRAMS = mstreg

mstreg_LDADD = libmstreg_lib.a \
                $(USER_DIR)/cmdparser/libcmdparser.a \
                $(MFT_UTILS_DIR)/libmftutils.a \
                $(MTCR_DIR)/libmtcr_ul.a \
                $(USER_DIR)/adb_parser/libadb_parser.a \
                $(USER_DIR)/cmdif/libcmdif.a \
                $(USER_DIR)/dev_mgt/libdev_mgt.a \
                $(USER_DIR)/reg_access/libreg_access.a \
                $(LAYOUTS_DIR)/libtools_layouts.a \
                $(USER_DIR)/xz_utils/libxz_utils.a \
                $(USER_DIR)/ext_libs/minixz/libminixz.a \
                -lboost_regex -lboost_filesystem -lboost_system \
                -llzma $(LIBSTD_CPP) ${LDL} -lexpat
