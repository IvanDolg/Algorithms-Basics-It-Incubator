#include "../headerFile/Task4.h"
#include "string"
#include "iostream"

using namespace std;

int Task4::getDigith(int number) {
    string sequence = "149162536496481";
    int length = sequence.length();

    if (number <= length) {
        return sequence[number - 1] - '0';
    } else {
        int repeatCount = (number - 1) / length;
        int position = (number - 1) % length;
        return sequence[position] - '0';
    }
}

void Task4::fourthTask() {
    int number;

    cout << "Enter the value of number: ";
    cin >> number;

    int nthDigit = getDigith(number);
    cout << "The " << number << "-th digit of the sequence is: " << nthDigit << endl;
}
