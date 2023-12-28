#include <iostream>
#include "Task2.h"
using namespace std;

bool Task2::destroy(int x1, int y1, int x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

int Task2::secondTask() {
    int x1, x2, y1, y2;

    cout << "Enter first (x,y): ";
    cin >> x1 >> y1;

    cout << "Enter second (x,y): ";
    cin >> x2 >> y2;

    if (destroy(x1, y1, x2, y2)) {
        cout << "They destroy each auther" << endl;
    } else {
        cout << "They not destroy each auther";
    }
    return 0;
}