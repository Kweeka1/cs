#include "stdio.h"

int* func(int* arr) {
    return arr;
}

int main() {
    int arr[5] = {0, 4, 5,3, 2};
    int* p = func(arr);
    for (int i = 0; i < sizeof(arr) / sizeof(p[0]); i++) {
        printf("%d\n", p[i]);
    }
    printf("Size of array is: %lu", (sizeof(arr) / sizeof(p[0])));
}
