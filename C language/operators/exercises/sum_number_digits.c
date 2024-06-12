#include "stdio.h"

int calculateNumberDigitsSum(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}

int main() {
    int num = 7845;
    int sum = calculateNumberDigitsSum(num);
    printf("Sum is: %d", sum);
    return 0;
}
