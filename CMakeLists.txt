cmake_minimum_required(VERSION 3.17)
project(CLion)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(Run ${SOURCE_FILES})

include_directories(Array_lib)
add_subdirectory(Array_lib)
target_link_libraries(Run Array_lib)

add_subdirectory(Catch_tests)