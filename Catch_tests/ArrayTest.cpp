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

TEST_CASE("reverseArray gives correct results 2", "[]"){
    int array[10] = {9, 2, 14, 12};
    int result[10] = {12, 14, 2, 9};
    int arrSize = 4;
    reverseArray(array, arrSize);
    for (int i = 0; i < arrSize; i++) {
        CHECK(array[i] == result[i]);
    }
}

TEST_CASE("remove gives correct results", "[]"){
    int array[10] = {21, 12, 6, 7, 14};
    int result[10] = {12, 6, 14};
    int arrSize = 5;
    removeOdd(array, arrSize);
    CHECK(arrSize == 3);
    for (int i = 0; i < arrSize; i++) {
        CHECK(array[i] == result[i]);
    }
}

TEST_CASE("remove gives correct results part 2", "[2]"){
    int array[10] = {1, 2, 3, 4};
    int result[10] = {2, 4};
    int arrSize = 4;
    removeOdd(array, arrSize);
    CHECK(arrSize == 2);
    for (int i = 0; i < arrSize; i++) {
        CHECK(array[i] == result[i]);
    }
}

TEST_CASE("splitParity", "[]") {
    int array[10] = {1, 2, 3, 4};
    int result[10] = {1, 3, 2, 4};
    int arrSize = 4;
    splitParity(array, arrSize);
    for (int i = 0; i < arrSize; i++) {
        CHECK(array[i] == result[i]);
    }
}

TEST_CASE("splitParity 2", "[]") {
    int array[10] = {3, 6, 4, 1, 12};
    int result[10] = {3, 1, 4, 6, 12};
    int arrSize = 5;
    splitParity(array, arrSize);
    for (int i = 0; i < arrSize; i++) {
        CHECK(array[i] == result[i]);
    }
}