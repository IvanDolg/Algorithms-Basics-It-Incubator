#include "iostream"
#include "../headerFile/NumberConversion.h"

using namespace std;

int NumberConversion::numberConversion(int binaryNumber) {
    int decimalNumber = 0;
    int base = 1;
    int lastNumber;

    while (binaryNumber != 0) {
        lastNumber = binaryNumber % 10;
        decimalNumber += lastNumber * base;
        base *= 2;
        binaryNumber /= 10;
    }
    return decimalNumber;
}

void NumberConversion::outPut() {
    int binary;
    int decimal;

    cout << "Enter the number to convert from 2 to 10: ";
    cin >> binary;

    decimal = numberConversion(binary);

    cout << "Binary: " << binary << endl;
    cout << "Decimal: " << decimal << endl;
}