#include "stdio.h"

// format specifier

int main() {
    int x = 530;
    float y = 1015.360;
    // %{number}d indicate how many characters will be displayed
    // ex: %5d displays 5 characters

    // %{number}.{number}f
    // 1st number indicate how many characters will be displayed
    // second number indicate how many characters will be displayed after period
    // ex: %7.3 displays 7 characters including 2 after period.
    printf("X=%5d\tY=%10.1f\n", x, y);
    return 0;
}
