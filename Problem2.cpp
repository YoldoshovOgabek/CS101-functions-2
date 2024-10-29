//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a, T &b) {
    T c = b;
    b = a;
    a = c;
}

int main() {
    int a = 5, b = 16;
    mySwap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
