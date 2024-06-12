#include "stdio.h"

// calculate integer quotient and remainder of the integer division of two integers entered from
// the keyboard using successive subtractions.

int main() {
    int a, b, remainder;
    int quotient = 0;

    do {
        printf("Enter a: ");
        scanf("%d", &a);
    } while (a < 0);

    do {
        printf("Enter b: ");
        scanf("%d", &b);
    } while (b < 1);

    remainder = a;

    while (remainder >= b) {
        quotient++;
        remainder -= b;
    }

    printf("Quotient is %d, Remainder is %d", quotient, remainder);
    return 0;
}
