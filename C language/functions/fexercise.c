// by default function returns an int
// func(char) -> returns int

#include "stdio.h"

// exercise 2
void f5(float a) {
    printf("Value is: %f", a);
}

float f6(float a) {
    return a;
}

// exercise 3

/*
 * (g)a 100
 * (g)b 200
 * (main) counter
 * (main) c 4 -
 * (fonc1) c 104
 * (fonc1) x 4
 */

void test() {
    int counter;

    for (counter = 1; counter <= 5; counter++) {
        printf("%d", counter);
    }

    printf("%d", counter);
    // 123456
}

// exercise 4

int length(int n) {
    int i = 0;
    while (n != 0) {
        i++;
        n /= 10;
    }
    return i;
}

int read_num() {
    int a, b, la, lb;
    do {
        printf("Enter a positive num: ");
        scanf("%d", &a);
    } while (a <= 0);

    do {
        printf("Enter a second positive num: ");
        scanf("%d", &b);
    } while (b <= 0);

    la = length(a);
    lb = length(b);

    if (la > lb) {
        return 1;
    } else if (la < lb) {
        return 2;
    } else {
        return 0;
    }
}

int main() {
    //test();
    int res = read_num();
    printf("result is: %d", res);
}
