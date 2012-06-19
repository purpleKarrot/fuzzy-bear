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

add_executable(generate
  src/gir/girwriter.c
  src/gir/girwriter.h
  src/generate.c
  )

target_link_libraries(generate
  ${GI_LIBRARIES}
  )


#file(GLOB typelib_files
#  /usr/lib/girepository-1.0/*.typelib
#  )

set(typelib_files
  /usr/lib/girepository-1.0/Gio-2.0.typelib
  /usr/lib/girepository-1.0/GLib-2.0.typelib
  /usr/lib/girepository-1.0/GObject-2.0.typelib
  /usr/lib/girepository-1.0/GModule-2.0.typelib
  /usr/lib/girepository-1.0/GIRepository-2.0.typelib
  /usr/lib/girepository-1.0/Peas-1.0.typelib
  /usr/lib/girepository-1.0/Soup-2.4.typelib
  )


set(header_output)
foreach(file ${typelib_files})
  get_filename_component(name "${file}" NAME)
  string(REGEX REPLACE "-.*" "" name "${name}")
  string(REGEX REPLACE "([a-z])([A-Z])" "\\1_\\2" name "${name}")
  string(TOLOWER "${name}" name)
  set(output "${Tools_SOURCE_DIR}/include/${name}.hpp")
  add_custom_command(OUTPUT "${output}"
    COMMAND "$<TARGET_FILE:generate>" -o "${output}" "${file}"
    DEPENDS generate "${file}"
    )
  list(APPEND header_output "${output}")
endforeach(file)

add_custom_target(headers ALL
  DEPENDS ${header_output}
  )
