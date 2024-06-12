#include "stdio.h"

// switch statement

int main() {
    int i = 5;

    switch (i) {
        case 1:
        case 4:
            printf("1 or 4");
            break;
        case 2:
        case 5:
            printf("2 or 5");
            break;
        case 3:
            printf("%d", 3);
            break;
        default:
            printf("not included");
    }

    return 0;
}
