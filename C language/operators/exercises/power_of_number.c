#include "stdio.h"

int power(int num, int power) {
    int result = num;

    for (int i = 1; i < power; i++) {
        result *= num;
    }

    return result;
}

int main() {
    int num = 5;
    int updatedNum = power(num, 4);
    printf("Is palindrome %d", updatedNum);
}
