//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
#include <iostream>
using namespace std;

void printNumbers(int n = 1) {
    if (n > 50) {
        return;
    }
    cout << n << " ";
    printNumbers(n + 1);
}

int main() {
    printNumbers();
    return 0;
}
