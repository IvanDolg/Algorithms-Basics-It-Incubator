#include <limits>
#include "iostream";
#include "../headerFile/Discharges.h"

using namespace std;

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

    cout << "Enter number from 1 to 2.147.483.646: ";
    cin >> number;

    if (number < 0 || number >= numeric_limits<int>::max()) {
        cout << "Error: The input number is out of range for int." << endl;
    } else {
        reverseNum = reverseNumber(number);

        cout << "Your entered number: " << number << endl;
        cout << "Your reverse number: " << reverseNum << endl;
    }
}