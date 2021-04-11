cmake_minimum_required(VERSION 3.17)
project(CLion)

set(CMAKE_CXX_STANDARD 11)

add_executable(Run main.cpp)

include_directories(Fib_lib)
add_subdirectory(Fib_lib)
target_link_libraries(Run Fib_lib)

add_subdirectory(Catch_tests)