#include "../headerFile/DepositBYN.h"
#include "iostream"

using namespace std;

void DepositBYN::addMoney(long long int amount) {
    BALANCE += amount;
}

void DepositBYN::outPut() {
    long long int amount;

    cout << "Enter the amount of money to add to the deposite: ";
    cin >> amount;
    addMoney(amount);

    cout << "Current deposit balance: " << BALANCE << endl;
}

long long int DepositBYN::getBalance() {
    return BALANCE;
}