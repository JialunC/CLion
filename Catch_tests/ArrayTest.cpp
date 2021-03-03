//
// Created by Jialun Chen on 2021-03-03.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Array.h"

TEST_CASE("reverseArray gives correct results", "[]"){
    int array[10] = {9, 2, 14, 12, -3};
    int result[10] = {-3, 12, 14, 2, 9};
    int arrSize = 5;
    reverseArray(array, arrSize);
    for (int i = 0; i < arrSize; i++) {
        CHECK(array[i] == result[i]);
    }
}
