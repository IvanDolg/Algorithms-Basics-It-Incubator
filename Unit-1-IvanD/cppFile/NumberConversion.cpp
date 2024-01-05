#include "iostream"
#include "../headerFile/NumberConversion.h"

using namespace std;
// предусотреть не возможность ввода отрицательного числа.
// сделать обработку искл. для int.
// сделать обработку искл. для вводимого числа от 1 до 1000.

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

    cout << "Enter the number to convert from 2 to 10: ";
    cin >> binary;

    decimal = numberConversion(binary);

    cout << "Binary: " << binary << endl;
    cout << "Decimal: " << decimal << endl;
}