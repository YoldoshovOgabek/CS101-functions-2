//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
#include <iostream>
using namespace std;

int sumDigits(int n) {
    if(n == 0) return 0;
    return n%10 + sumDigits(n/10);
}

int main() {
    int n;
    cin >> n;
    cout << sumDigits(n);
    return 0;
}