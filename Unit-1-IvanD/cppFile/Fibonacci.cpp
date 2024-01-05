#include "Fibonacci.h"
#include "iostream"

using namespace std;

long long int Fibonacci::fibonacci(int number) {
    if (number <= 0) {
        return 0;
    } else if (number == 1) {
        return 1;
    }

    long long int previousNum = 0;
    long long int currentNum = 1;

    for (int i = 2; i <= number; ++i) {
        long long int nextNum = previousNum + currentNum;
        previousNum = currentNum;
        currentNum = nextNum;
    }
    return currentNum;
}

void Fibonacci::outPut() {
    int number;

    cout << "Enter a number for the function fibonacci: ";
    cin >> number;

    long long int result = fibonacci(number);

    cout << "Fibonacci number at position " << number << ": " << result << endl;
}