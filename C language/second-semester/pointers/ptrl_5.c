#include "stdio.h"
#include "stdlib.h"

void display(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int *pm, *p;
    int x;
    printf("Enter the size of the array: ");
    scanf("%d", &x);
    pm = malloc(x * sizeof(int));
    for (p = pm; p < pm + x; p++) {
        printf("Enter a value: ");
        scanf("%d", p);
    }
    display(x, pm);
    free(pm);
    return 0;
}
