//
// Created by Og�Abek Yo�Ldoshov on 10/29/24.
//
//In the comments after each problem functions' names are provided. Your task to define correct datatype and parameters.
//DO NOT CHANGE FUNCTIONS' NAMES.
//You may check your functions in main.cpp as shown by exampleFunction;
void exampleFunction() {
  std::cout<<"Example Function that can be called in main."<<std::endl;
}

// Problem 1
//floorFunction
int floorFunction(double num) {
    return num/1;
}
//ceilingFunction
int ceilFunction(double num) {
    return (num+1)/1;
}

// Problem 2
//swap_values
void swap_values(double &num1, double &num2) {
    num1 += num2;
    num2 = num1 - num2;
    num1 -= num2;
}

// Problem 3
//multiply
int multiply(int a, int b) {
    if(b == 1) return a;
    return a + multiply(a, b-1);
}
// Problem 4
//digitSum
int digitSum(int n) {
    if(n == 0) return 0;
    return n%10 + digitSum(n/10);
}

// Problem 5
//decimalToBinary
int decimalToBinary(int n, int place = 1) {
    if (n == 0)
        return 0;
    return (n % 2) * place + decimalToBinary(n / 2, place * 10);
}

// Problem 6
//midValue
template <typename T>
T midValue(T a, T b, T c) {
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        return a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        return b;
    } else {
        return c;
    }
}
/*
int - floorFunction
int - ceilingFunction
void - swap_values
int - multiply
int - digitSum
int - decimalToBinary
int - midValue
 */