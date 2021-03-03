#include <iostream>
#include "Array.h"
using namespace std;


void printArray(int arr[], int arrSize);

int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    printArray(arr1, arr1Size);
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    return 0;
}

void printArray(int arr[], int arrSize) {
    for (int i=0; i < arrSize; i++){
        cout << arr[i]<<' ';
    }
    cout << endl;
}