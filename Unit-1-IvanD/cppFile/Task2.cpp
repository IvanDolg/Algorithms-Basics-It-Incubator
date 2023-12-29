#include <iostream>
#include "../headerFile/Task2.h"
using namespace std;

bool Task2::areCoordinatesAttacking(int x1, int y1, int x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

bool check_range(int variable) {
    return (variable >= 1 && variable <= 8);
}

bool check_range(int x, int y) {
    return (check_range(x) && check_range(y));
}

int Task2::secondTask() {
    int x1, x2, y1, y2;

    cout << "Enter the coordinates of the first chess knight." << endl;
    cout << "Enter a coordinate x1: ";
    cin >> x1;
    cout << "Enter a coordinate y1: ";
    cin >> y1;
    cout << endl;

    cout << "Enter the coordinates of the second chess knight." << endl;
    cout << "Enter a coordinate x2: ";
    cin >> x2;
    cout << "Enter a coordinate y2: ";
    cin >> y2;
    cout << endl;

    if (check_range(x1, y1) && check_range(x2, y2)) {
        if (areCoordinatesAttacking(x1, y1, x2, y2)) {
            cout << "Chess knight beats chess knight." << endl;
        } else {
            cout << "Chess knight doesn't beat chess knight." << endl;
        }
    } else {
        cout << "Invalid coordinates. Coordinates must be between 1 and 8." << endl;
    }
    return 0;
}