#include "stdio.h"

void display(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1, *p2;
    int aux;

    p1 = arr;
    p2 = arr + 5 - 1;
    while (p1 < p2) {
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
        p1++;
        p2--;
    }

    display(5, arr);
    return 0;
}
