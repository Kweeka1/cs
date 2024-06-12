#include "stdio.h"

int main() {
    int n, v;
    printf("Enter a number:");
    scanf("%d", &n);
    v = n * (n-1);
    n = n - 2;
    while (n != 0) {
        v += v * (--n);
    }
    printf("Result: %d", v);
    return 0;
}
