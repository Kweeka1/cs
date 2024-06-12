#include "stdio.h"

int convertToBaseN(int num, int base, int current, int digit) {
    if (num <= 0) return current;

    current = ((num % base) * digit) + current;
    digit *= 10;
    num /= base;

    return convertToBaseN(num, base, current, digit);
}

int main() {
    int a, b;
    printf("Enter a number and a base: ");
    scanf("%d %d", &a, &b);
    int res = convertToBaseN(a, b, 0, 1);
    printf("Result is: %d", res);
}
