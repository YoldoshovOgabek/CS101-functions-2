//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
#include <iostream>
using namespace std;

int sm(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sm(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sm(n) << endl;
    return 0;
}
