#include <iostream>
#include "../headerFile/NumberConversion.h"
#include "../headerFile/Discharges.h"
#include "../headerFile/Fibonacci.h"

using namespace std;

int showMenu() {
    int choice;
    cout << "Menu:\n";
    cout << "1. Number conversion from 2 to 10\n";
    cout << "2. Discharges\n";
    cout << "3. Fibonacci numbers\n";
    cout << "0. Exit\n";
    cout << "Enter number of menu:  ";
    cin >> choice;
    return choice;
}

int main() {
    int choice;
    NumberConversion numberConversion;
    Discharges discharges;
    Fibonacci fibonacci;

    do {
        choice = showMenu();
        switch (choice) {
            case 1:
                numberConversion.outPut();
                break;
            case 2:
                discharges.outPut();
                break;
            case 3:
                fibonacci.outPut();
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