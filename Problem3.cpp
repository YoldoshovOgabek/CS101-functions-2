//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n < 0) {
        return;
    }
    cout << n << " ";
    printNumbers(n - 1);
}

int main() {
    printNumbers(10);
    cout << endl;
    return 0;
}
