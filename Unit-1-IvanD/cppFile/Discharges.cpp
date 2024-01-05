#include "iostream";
#include "../headerFile/Discharges.h"

using namespace std;
// предусотреть не возможность ввода отрицательного числа.
// сделать обработку искл. для int.
// сделать обработку искл. для вводимого числа от 1 до 1000.

int Discharges::reverseNumber(int number) {
    int reverseNum = 0;
    int lastNumber;

    while (number != 0) {
        lastNumber = number % 10;
        reverseNum = reverseNum * 10 + lastNumber;
        number /= 10;
    }
    return reverseNum;
}

void Discharges::outPut() {
    int number;
    int reverseNum;

    cout << "Enter number: ";
    cin >> number;

    reverseNum = reverseNumber(number);

    cout << "Your entered number: " << number << endl;
    cout << "Your reverse number: " << reverseNum << endl;
}