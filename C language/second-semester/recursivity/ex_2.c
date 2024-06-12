#include "stdio.h"

int sum(int num) {
    if (num == 0) return 0;
    return num % 10 + sum(num / 10);
}

int main() {
    int a = 3526;
    printf("%d", sum(a));
    return 0;
}
