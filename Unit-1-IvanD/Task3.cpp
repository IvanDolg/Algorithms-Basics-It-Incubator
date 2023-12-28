#include "Task3.h"

int Task3::calculateDigitSum(int number) {
    int sum = 0;
    while (number > 0){
        sum += number %10;
        number /= 10;
    }
    return sum;
}

int Task3::calculateLifePathNumber(const std::string &dateOfBirth) {
    int sum = 0;
    for (char ch : dateOfBirth){
        if (ch >= '0' && ch <= '9'){
            sum += ch - '0';
        }
    }
    while (sum >= 10){
        sum = calculateDigitSum(sum);
    }
    return sum;
}