//
// Created by Jialun Chen on 2021-03-03.
//

int fib(int input) {
    if (input == 1 || input == 2) {
        return 1;
    }
    int first = 1;
    int second = 1;
    for (int i = 2; i < input; i ++){
        int temp = first;
        first = second;
        second = first + temp;
    }
    return second;
}