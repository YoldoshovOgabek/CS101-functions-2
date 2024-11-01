//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
#include <iostream>
#include "problems.h"
using namespace std;

int main() {
  cout << ceilFunction(5.5) << endl;
  double a= 5, b=6;
  swap_values(a,b);
  cout << a << b << endl;
  cout << multiply(a,b) << endl;
  cout << digitSum(1234) << endl;
  cout << decimalToBinary(5) << endl;
  cout << midValue(15,17,14) << endl;
}