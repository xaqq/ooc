cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(-g -W -Wall -pg)

ADD_EXECUTABLE(test.out
  tests/main.c
  tests/string.c
  tests/list.c
)
INCLUDE_DIRECTORIES(
  lib/base/include/
  lib/string/include/
  lib/list/include
  tests/
)

ADD_LIBRARY(ooc_base STATIC
  lib/base/src/new.c
  lib/base/src/delete.c
  lib/base/src/typeOf.c
  lib/base/src/differ.c
  lib/base/src/clone.c
)

ADD_LIBRARY(ooc_string STATIC
  lib/string/src/string.c
)

ADD_LIBRARY(ooc_list STATIC
  lib/list/src/list.c
  lib/list/src/list_get_user_data.c
  lib/list/src/itr.c
)

TARGET_LINK_LIBRARIES (test.out -pg ooc_base ooc_string ooc_list)