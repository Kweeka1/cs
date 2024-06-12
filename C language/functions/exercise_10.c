#include "stdio.h"

double convertToBaseN(int num) {
    double current = 0;
    double u = 1;

    while (num > 0) {
        current = (num % 2) * u + current;
        u *= 10;
        num /= 2;
    }

    return current;
}

int main() {
    int a;
    printf("Enter a number and a base: ");
    scanf("%d", &a);
    double res = convertToBaseN(a);
    printf("Result is: %.lf", res);
}
