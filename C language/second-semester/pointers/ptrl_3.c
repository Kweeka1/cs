#include "stdio.h"

void display(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

int main() {
    int *p;
    int k[5] = {1, 2, 3, 4, 5};
    p = &k[2];

    int t[10], pos[10];
    int *p1, *p2;

    for (p1 = t; p1 < t + 5; p1++) {
        printf("Enter a value: ");
        scanf("%d", p1);
    }

    for (p1 = t, p2 = pos; p1 < t + 10; p1++)
        if (*p1 > 0) *p2++ = *p1;

    display(10, t);
    display((int)(p2 - pos), pos);

    return 0;
}
