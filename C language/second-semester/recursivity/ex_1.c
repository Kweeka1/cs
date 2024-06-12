#include "stdio.h"

int len(int num) {
    if (num == 0) return 0;
    return 1 + len(num / 10);
}

int main() {
    int a = 3526;
    printf("%d", len(a));
    return 0;
}
