#include "Ladder.h"
#include "iostream"

using namespace std;
int numbersSequence;

// numb 2
void Ladder::ladderNumbers() {
    cout << "Enter the number sequence: ";
    cin >> numbersSequence;

    int sum = 0;
    int temp = numbersSequence;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    cout << "2) Print the sum of the digits: " << sum << endl;
}

// numb 4
//4) Является ли число возрастающей или убывающей последовательностью цифр?
bool Ladder::isIncreasingSequence(int number) {
    int lastDigit = number % 10;
    number /= 10;

    while (number != 0) {
        int digit = number % 10;
        if (digit >= lastDigit) {
            return false;
        }
        lastDigit = digit;
        number /= 10;
    }
    return true;
}

bool Ladder::isDecreasingSequence(int number) {
    int lastDigit = number % 10;
    number /= 10;

    while (number != 0) {
        int digit = number % 10;
        if (digit <= lastDigit) {
            return false;
        }
        lastDigit = digit;
        number /= 10;
    }
    return true;
}

void Ladder::print4() {
    bool isIncreasing = isIncreasingSequence(numbersSequence);
    bool isDecreasing = isDecreasingSequence(numbersSequence);

    cout << "4) Is a number an increasing or decreasing sequence of digits? ";
    if (isIncreasing) {
        cout << " The number is an increasing sequence." << endl;
    } else if (isDecreasing) {
        cout << " The number is a decreasing sequence." << endl;
    } else {
        cout << " The number is neither an increasing nor a decreasing sequence." << endl;
    }
}

// Numb 6
bool Ladder::hasConsecutiveDigits(int number) {
    int lastDigit = -1;
    while (number != 0) {
        int digit = number % 10;
        if (digit == lastDigit) {
            return true;
        }
        lastDigit = digit;
        number /= 10;
    }
    return false;
}

void Ladder::print() {
    bool hasConsecutive = hasConsecutiveDigits(numbersSequence);

    cout << "6) Does the number contain two identical digits in a row? ";

    if (hasConsecutive) {
        cout << " Yes." << endl;
    } else {
        cout << " No." << endl;
    }
}
