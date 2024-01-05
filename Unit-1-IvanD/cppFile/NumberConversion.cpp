#include <limits>
#include "iostream"
#include "../headerFile/NumberConversion.h"

using namespace std;

int NumberConversion::numberConversion(int binaryNumber) {
    int decimalNumber = 0;
    int number = 1;
    int lastNumber;

    while (binaryNumber != 0) {
        lastNumber = binaryNumber % 10;
        decimalNumber += lastNumber * number;
        number *= 2;
        binaryNumber /= 10;
    }
    return decimalNumber;
}

void NumberConversion::outPut() {
    int binary;
    int decimal;

    cout << "Enter a string of numbers where each number is 0 or 1: ";
    cin >> binary;

    if (binary < 0 || binary >= numeric_limits<int>::max()) {
        cout << "Error: The input number is out of range for int." << endl;
    } else {
        decimal = numberConversion(binary);

        cout << "Your number in binary: " << binary << endl;
        cout << "Your number in decimal: " << decimal << endl;
    }
}