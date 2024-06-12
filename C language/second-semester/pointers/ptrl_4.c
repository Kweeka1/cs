#include "stdio.h"

void display(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

int main() {
    int t[10];
    int *p, nb = 0;

    for (p = t; p < t + 3; p++) {
        printf("Enter a value: ");
        scanf("%d", p);
    }

    for (p = t; p < t + 3; p++)
        if (*p != 0) nb++;

    printf("The number of positive elements: %d", nb);
    return 0;
}
