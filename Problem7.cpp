//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
#include <iostream>
using namespace std;

int Rpower(int m, int n) {
    if(n == 0) return 1;
    return (m * Rpower(m, n - 1));
}

int main() {
    cout << Rpower(2, 3) << endl;
    return 0;
}