cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(-g -W -Wall)

ADD_EXECUTABLE(test.out
  test/main.c
)
INCLUDE_DIRECTORIES(
  lib/base/include/
  lib/string/include/
)

ADD_LIBRARY(ooc_base STATIC
  lib/base/src/new.c
  lib/base/src/delete.c
  lib/base/src/typeOf.c
)

ADD_LIBRARY(ooc_string STATIC
  lib/string/src/string.c
)

TARGET_LINK_LIBRARIES (test.out ooc_base ooc_string)