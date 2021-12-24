project(Lua-call-C-code C)
cmake_minimum_required(VERSION 3.11)

find_package(Lua "5.1" EXACT)

add_library(sample SHARED
  library.c
  lua-library.c
)

target_link_libraries(sample PRIVATE
  ${LUA_LIBRARIES}
)

target_include_directories(sample PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}
  ${LUA_INCLUDE_DIR}
)
