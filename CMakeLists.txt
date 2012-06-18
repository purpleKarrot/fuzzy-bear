##
# Copyright (C) 2012 Daniel Pfeifer <daniel@pfeifer-mail.de>
#
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at
#   http://www.boost.org/LICENSE_1_0.txt
##

cmake_minimum_required(VERSION 2.8.8 FATAL_ERROR)
project(Tools)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})

find_package(PkgConfig REQUIRED)
pkg_check_modules(GI
  gio-2.0
  glib-2.0
  gobject-introspection-1.0
  )

include_directories(
  ${GI_INCLUDE_DIRS}
  include
  )

if(CMAKE_COMPILER_IS_GNUCXX)
  set(CMAKE_CXX_FLAGS "-fPIC -std=c++0x")
endif(CMAKE_COMPILER_IS_GNUCXX)

add_library(cmph STATIC
  src/cmph/bdz.c
  src/cmph/bdz.h
  src/cmph/bdz_ph.c
  src/cmph/bdz_ph.h
  src/cmph/bdz_structs.h
  src/cmph/bdz_structs_ph.h
  src/cmph/bitbool.h
  src/cmph/bmz8.c
  src/cmph/bmz8.h
  src/cmph/bmz8_structs.h
  src/cmph/bmz.c
  src/cmph/bmz.h
  src/cmph/bmz_structs.h
  src/cmph/brz.c
  src/cmph/brz.h
  src/cmph/brz_structs.h
  src/cmph/buffer_entry.c
  src/cmph/buffer_entry.h
  src/cmph/buffer_manager.c
  src/cmph/buffer_manager.h
  src/cmph/chd.c
  src/cmph/chd.h
  src/cmph/chd_ph.c
  src/cmph/chd_ph.h
  src/cmph/chd_structs.h
  src/cmph/chd_structs_ph.h
  src/cmph/chm.c
  src/cmph/chm.h
  src/cmph/chm_structs.h
  src/cmph/cmph.c
  src/cmph/cmph.h
  src/cmph/cmph_structs.c
  src/cmph/cmph_structs.h
  src/cmph/cmph_time.h
  src/cmph/cmph_types.h
  src/cmph/compressed_rank.c
  src/cmph/compressed_rank.h
  src/cmph/compressed_seq.c
  src/cmph/compressed_seq.h
  src/cmph/debug.h
  src/cmph/fch_buckets.c
  src/cmph/fch_buckets.h
  src/cmph/fch.c
  src/cmph/fch.h
  src/cmph/fch_structs.h
  src/cmph/graph.c
  src/cmph/graph.h
  src/cmph/hash.c
  src/cmph/hash.h
  src/cmph/hash_state.h
  src/cmph/jenkins_hash.c
  src/cmph/jenkins_hash.h
  src/cmph/miller_rabin.c
  src/cmph/miller_rabin.h
  src/cmph/select.c
  src/cmph/select.h
  src/cmph/select_lookup_tables.h
  src/cmph/vqueue.c
  src/cmph/vqueue.h
  src/cmph/vstack.c
  src/cmph/vstack.h
  )

add_library(gir STATIC
  src/gir/girmodule.c
  src/gir/girmodule.h
  src/gir/girnode.c
  src/gir/girnode.h
  src/gir/giroffsets.c
  src/gir/girparser.c
  src/gir/girparser.h
  src/gir/girwriter.c
  src/gir/girwriter.h
  src/gir/gthash.c
  )

target_link_libraries(gir
  ${GI_LIBRARIES}
  cmph
  m
  )

add_executable(compiler
  src/compiler.c
  )

target_link_libraries(compiler
  gir
  )

add_executable(generate
  src/generate.c
  )

target_link_libraries(generate
  gir
  )
