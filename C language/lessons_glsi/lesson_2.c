#include <stdio.h>

#define PI 3.14

/*
*   VAR
*       A, B, Q, R: integer
*       QR: real
*   Begin
*       A <- 10
*       B <- 3
*       Q <- A DIV B // result => 3
*       R <- A MOD B // result => 1 / MOD = modulus
*       QR <- A / B // result => 3.333333334
*   End
*/

int main() {
    // const int pi = 3.14
    int A, B, Sum;
    A = 20;
    B = 35;
    Sum = A + B;
    printf("Result is: %d", Sum);
    return 0;
}
