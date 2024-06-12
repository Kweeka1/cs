#include "stdio.h"

void factorialFor() {
    int n, current;

    do {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);


    current = 1;

    for (int i = 1; i <= n; i++) {
        current *= i;
    }

    printf("Factorial of %d is %d\n", n, current);
}

void factorialWhile() {
    int n, current, i;

    do {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);

    i = 1;
    current = 1;

    while (i <= n) {
        current *= i;
        i++;
    }

    printf("Factorial of %d is %d\n", n, current);
}

int main() {
    factorialFor();
    factorialWhile();
    return 0;
}
