#ifndef UNTITLED1_TASK1_H
#define UNTITLED1_TASK1_H
#include <iostream>
using namespace std;

class Task1 {
public:
    int firstTask(){
        int maxSize = 10;
        int i;
        int j;

        cout << "Multiplication table:" << endl;
        cout << "---------------------------------------------------------------------------------" << endl;

        for (i = 1; i < maxSize; i++) {
            cout << "  \t   " << i;
        }

        cout << endl;
        cout << "---------------------------------------------------------------------------------" << endl;

        for (i = 1; i < maxSize; i++) {
            cout << "  " << i << "\t" << "|   ";

            for (j = 1; j < maxSize; j++) {
                cout << i * j << "\t" << "|   ";
            }
            cout << endl;
        }

        cout << "---------------------------------------------------------------------------------" << endl;
        return 0;
    }
};
#endif //UNTITLED1_TASK1_H
