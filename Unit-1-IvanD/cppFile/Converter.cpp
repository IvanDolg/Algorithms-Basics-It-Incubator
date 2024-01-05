#include "../headerFile/Converter.h"
#include "iostream"

using namespace std;

void Converter::convertCurrency(DepositBYN &depositByn, double exchangeRate) {
    long long int BALANCE = depositByn.getBalance();
    long long int convertedAmount = BALANCE * exchangeRate;

    if (convertedAmount <= BALANCE) {
        BALANCE -= convertedAmount;
        cout << "Conversion has been completed successfully. Charged from the deposit: " << convertedAmount << endl;
    } else {
        cout << "There are insufficient funds on deposit for conversion." << endl;
    }
}

void Converter::outPut() {
    double exchangeRate;
    DepositBYN depositByn;

    cout << "Enter exchangeRate: ";
    cin >> exchangeRate;

    convertCurrency(depositByn, exchangeRate);
    cout << "Your balance: " << depositByn.getBalance();
}