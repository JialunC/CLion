//
// Created by Jialun Chen on 2021-03-03.
//

void reverseArray(int arr[], int arrSize) {
    int iterations = arrSize / 2;
    for (int i=0; i < iterations; i++) {
        int temp = arr[arrSize - 1 - i];
        arr[arrSize - 1 - i] = arr[i];
        arr[i] = temp;
    }
}

void removeOdd(int arr[], int& arrSize) {
    int counter = 0;
    for (int i=0; i < arrSize; i++) {
        if (arr[i] % 2 == 0) {
            arr[counter] = arr[i];
            counter++;
        }
    }
    arrSize = counter;
}

void splitParity(int arr[], int arrSize) {
    int pointer = 0;
    for (int i=0; i < arrSize; i++) {
        if (arr[i] % 2 == 1) {
            int temp = arr[i];
            arr[i] = arr[pointer];
            arr[pointer] = temp;
            pointer++;
        }

    }
}