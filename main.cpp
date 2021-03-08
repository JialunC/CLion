#include <iostream>

using namespace std;

void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize) ;
void splitParity(int arr[], int arrSize);
void printArray(int arr[], int arrSize);

int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {9, 2, 14, 12, -3};
    int arr2Size = 5;
    int arr3[10] = {9, 2, 14, 12, -3};
    int arr3Size = 5;

    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);
    return 0;
}

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
        if (arr[i] % 2 != 0) {
            int temp = arr[i];
            arr[i] = arr[pointer];
            arr[pointer] = temp;
            pointer++;
        }

    }
}

void printArray(int arr[], int arrSize) {
    int i;
    for (i=0; i <arrSize; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}