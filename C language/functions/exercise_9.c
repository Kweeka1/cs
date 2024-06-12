#include "stdio.h"

int power(int a, int b) {
    int res = 1;

    for (int i = 0; i < b; ++i) {
        res = res * a;
    }

    return res;
}

int main() {
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    int res = power(a, b);
    printf("Result: %d", res);
    return 0;
}
