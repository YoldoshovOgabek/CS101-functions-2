//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
#include <iostream>
using namespace std;

double f(int n) {
    if(n == 1) return 1./3;
    return 1./(n*n+2*n) * f(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}