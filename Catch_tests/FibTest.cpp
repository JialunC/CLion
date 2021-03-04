//
// Created by Jialun Chen on 2021-03-03.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Fib.h"

TEST_CASE("get correct Fibonacci", "[]"){
    int input1 = 1;
    int result1 = fib(input1);
    CHECK(result1 == 1);
    int input2 = 2;
    int result2 = fib(input2);
    CHECK(result2 == 1);
    int input3 = 3;
    int result3 = fib(input3);
    CHECK(result3 == 2);
    int input4 = 4;
    int result4 = fib(input4);
    CHECK(result4 == 3);
    CHECK(result4 != 5);

//    uncomment the following to see error
    CHECK(result4 == 5);
}