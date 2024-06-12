#include "stdio.h"

void calcPower() {
    int a, b, result;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    result = a;

    for (int i = 1; i < b; i++) {
        result *= a;
    }

    printf("The result is: %d", result);
}

int main() {
    calcPower();
    return 0;
}
