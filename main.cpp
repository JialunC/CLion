#include <iostream>
#include "Fib.h"
using namespace std;

int main() {
    int input;
    cout << "Please enter a positive integer: ";
    cin >> input;
    int result = fib(input);
    cout << result << endl;
    return 0;
}
