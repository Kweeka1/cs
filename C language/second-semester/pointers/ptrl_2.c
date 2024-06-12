#include "stdio.h"

int main() {
    char a[5] = {'A', 'B', 'C', 'D', 'E'};
    char *p;
    for (p = a; p < a + 5; p++) {
        printf("%d\n", p);
    }
    return 0;
}
