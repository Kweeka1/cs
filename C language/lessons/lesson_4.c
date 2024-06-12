// Casting
// all common numeric types
// priority of operators

// escape sequences \n \t \b \a
// format specifiers %d (decimal) %f (float) %u (unsigned) %o (octal) %x (hex)
// %c (int or char) %f (double/ float) %e (double - scientific notation) %s (string)

#include "stdio.h"

int main() {
    int i = 13;
    long g = 65;
    float u = 78.9;
    double o = 78.098;
    short m = 5678;
    char s = 126;

    int a = 3;
    int b = 4;
    // when the first expression is true the program ignore the next expression
    // because 1 || 1 == true
    // and 1 || 0 == true
    // therefore in the below expression only 3 <= a++ will be evaluated
    int x = 3 <= a++ || a == --b;
    printf("%f\n", (float)i);
    printf("x = %d, a = %d, b = %d", x, a, b);
}
