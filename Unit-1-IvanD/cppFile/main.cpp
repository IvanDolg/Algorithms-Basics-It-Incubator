#include <iostream>
#include "../headerFile/DepositBYN.h"
#include "../headerFile/Converter.h"


using namespace std;

int showMenu() {
    int choice;
    cout << "Menu:\n";
    cout << "1. Deposit BYN\n";
    cout << "2. Convert to USD \n";
    cout << "0. Exit\n";
    cout << "Enter number of menu:  ";
    cin >> choice;
    return choice;
}

int main() {
    int choice;
    DepositBYN depositByn;
    Converter converter;

    do {
        choice = showMenu();
        switch (choice) {
            case 1:
                depositByn.outPut();
                break;
            case 2:
                converter.outPut();
                break;
            case 0:
                cout << "Exit\n";
                break;
            default:
                cout << "Wrong choice. Try again.\n";
                break;
        }
        cout << "\n\n";
    } while (choice != 0);
    return 0;
}