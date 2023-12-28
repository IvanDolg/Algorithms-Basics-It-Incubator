#include <iostream>
#include "Task1.h"
#include "Task2.h"

using namespace std;

int showMenu() {
    int choice;
    cout << "Menu:\n";
    cout << "1. Task 1\n";
    cout << "2. Task 2\n";
    cout << "3. Task 3\n";
    cout << "0. Exit\n";
    cout << "Enter number of menu:  ";
   cin >> choice;
    return choice;
}

int main(){
    int choice;
    Task1 task1;
    Task2 task2;
    do {
        choice = showMenu();
        switch (choice) {
            case 1:
                task1.firstTask();
                break;
            case 2:
                task2.secondTask();
                break;
            case 3:
                break;
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