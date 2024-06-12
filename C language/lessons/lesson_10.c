/*
 * Functions
 * void functions
 * function call
 */

#include "stdio.h"

int factorial(int number) {
    int f = 1;

    for (int i = 1; i <= number; i++) {
        f *= i;
    }

    return f;
}

int main() {
    int n, p;
    float cnp;
    do {
        printf("Please enter 2 numbers (1st > 2nd): ");
        scanf("%d %d", &n, &p);
    } while (p > n || p < 0);
    cnp = factorial(n) / (factorial(p) * factorial(n - p));
    printf("The combination of %d choose %d is %f", n, p, cnp);
    return 0;
}
