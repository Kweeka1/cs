#include "stdio.h"

void exchange(int* a, int* b) {
    int c;
    printf("Exchange start: %d %d\n", *a, *b);
    c = *a;
    *a = *b;
    *b = c;
    printf("Exchange end: %d %d\n", *a, *b);
}

int main() {
    int n = 10;
    int p = 20;

    printf("Before call: %d %d\n", n, p);

    exchange(&n, &p);

    printf("After call: %d %d\n", n, p);

    return 0;
}
