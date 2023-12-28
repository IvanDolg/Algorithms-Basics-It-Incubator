#include <iostream>
#include "../headerFile/Task1.h"

using namespace std;

void Task1::firstTask() {
    int maxSize = 10;
    int i;
    int j;

    cout << "Multiplication table:" << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;

    for (i = 1; i <= maxSize; i++) {
        cout << "  \t   " << i;
    }

    cout << "   |" << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;

    for (i = 1; i <= maxSize; i++) {
        cout << "  " << i << "\t" << "|   ";

        for (j = 1; j <= maxSize; j++) {
            cout << i * j << "\t" << "|   ";
        }
        cout << endl;
    }
    cout << "-----------------------------------------------------------------------------------------" << endl;
}