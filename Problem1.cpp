//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
#include <iostream>
using namespace std;

template <typename T>
T largest(T a, T b, T c) {
    if(a > b && a > c) {
        return a;
    }
    else if(b > a && b > c) {
        return b;
    }else if(c > a && c > b) {
        return c;
    }
}
int main() {
    cout << largest(1, 2, 3) << endl;
    cout << largest(1.1, 2.2, 3.3) << endl;
    cout << largest('A', 'B', 'C') << endl;
    cout << largest("Hi", "Hello","World") << endl;
    return 0;
}