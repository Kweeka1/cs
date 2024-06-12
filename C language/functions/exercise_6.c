#include "stdio.h"

int highestDigit(int a) {
    int max = 0;
    int current;
    while (a != 0 && max != 9) {
        current = a % 10;
        if (current > max) max = current;
        a /= 10;
        printf("current: %d\n", a);
    }
    return max;
}

int main() {
    int y;
    printf("Enter a number: ");
    scanf("%d", &y);
    int res = highestDigit(y);
    printf("Highest digit is: %d", res);
}
