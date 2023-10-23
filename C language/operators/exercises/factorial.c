//
// Created by arp on 10/21/23.
//

#include "stdio.h"

void calculateFactorialRecursion(int num, int current) {
    if (current == 0) {
        current = num;
    }
    if (num == 1) {
        printf("Result is %d: ", current);
        return;
    }

    calculateFactorialRecursion(num - 1, current * (num - 1));
}

void calculateFactorialLoop(int num) {
    int sum = num;

    while (num > 1) {
        sum *= --num;
    }

    printf("Result is: %d", sum);
}

int main() {
    calculateFactorialRecursion(5, 0);
    calculateFactorialLoop(5);
    return 0;
}