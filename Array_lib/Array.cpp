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