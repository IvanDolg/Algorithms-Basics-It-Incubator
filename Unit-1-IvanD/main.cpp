#include <iostream>
#include "string"
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Ladder.h"

using namespace std;

int showMenu() {
    int choice;
    cout << "Menu:\n";
    cout << "1. Task 1\n";
    cout << "2. Task 2\n";
    cout << "3. Task 3\n";
    cout << "4. Task 4\n";
    cout << "0. Exit\n";
    cout << "Enter number of menu:  ";
    cin >> choice;
    return choice;
}

int main() {
    int choice;
    Task1 task1;
    Task2 task2;
    Task3 task3;
    Ladder ladder2;
    do {
        choice = showMenu();
        switch (choice) {
            case 1:
                task1.firstTask();
                break;
            case 2:
                task2.secondTask();
                break;
            case 3: {
                string dateOfBirth;
                cout << "Enter your date of birth (in the format DDMMYYYY): ";
                cin >> dateOfBirth;

                int lifePathNumber = task3.calculateLifePathNumber(dateOfBirth);
                cout << "Your life path number is: " << lifePathNumber << endl;
                break;
            }
            case 4:
                ladder2.ladderNumbers();
                ladder2.print();
                ladder2.print4();
            case 0:
                cout << "Exit\n";
                break;
            default:
                cout << "Wrong choice. Try again.\n";
                break;
        }
        cout << "\n";
    } while (choice != 0);
    return 0;
}