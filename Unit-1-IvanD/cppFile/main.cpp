#include <iostream>
#include "../headerFile/Task1.h"
#include "../headerFile/Task2.h"
#include "../headerFile/Task3.h"
#include "../headerFile/Ladder.h"
#include "../headerFile/Task4.h"

using namespace std;

int showMenu() {
    int choice;
    cout << "Menu:\n";
    cout << "1. Task 1\n";
    cout << "2. Task 2\n";
    cout << "3. Task 3\n";
    cout << "4. Task 4\n";
    cout << "5. ladder number 2\n";
    cout << "0. Exit\n";
    cout << "Enter number of menu: ";
    cin >> choice;
    return choice;
}

int main() {
    int choice;
    Task1 task1;
    Task2 task2;
    Task3 task3;
    Task4 task4;
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
               task3.thirdTask();
               break;
            }
            case 4:
                task4.fourthTask();
                break;
            case 5:
                ladder2.ladderTask2();
                ladder2.ladderTask4();
                ladder2.ladderTask6();
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