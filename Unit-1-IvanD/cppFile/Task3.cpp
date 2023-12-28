#include "../headerFile/Task3.h"
#include "string"
#include <iostream>

using namespace std;

int Task3::calculateDigitSum(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int Task3::calculateLifePathNumber(string dateOfBirth) {
    int sum = 0;

    for (char ch: dateOfBirth) {
        if (ch >= '0' && ch <= '9') {
            sum += ch - '0';
        }
    }
    while (sum >= 10) {
        sum = calculateDigitSum(sum);
    }
    return sum;
}

void Task3::thirdTask() {
    string dateOfBirth;
    cout << "Enter your date of birth (in the format DDMMYYYY): ";
    cin >> dateOfBirth;

    int lifePathNumber = calculateLifePathNumber(dateOfBirth);
    cout << "Your life path number is: " << lifePathNumber << endl;
}