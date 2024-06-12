#include "stdio.h"

void merge(int len1, int len2, int a[4], int b[3], int g[7]) {
    int i = 0, j = 0, c = 0;

    while (i < len1 && j < len2) {
        if (a[i] < b[j]) {
            g[c++] = a[i++];
        } else {
            g[c++] = b[j++];
        }
    }

    while (i < len1) {
        g[c++] = a[i++];
    }

    while (j < len2) {
        g[c++] = b[j++];
    }
}

void display_array(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

int main() {
    int a[4] = {1, 2, 3, 7};
    int b[3] = {4, 5, 6};
    int c[7];

    merge(4, 3, a, b, c);
    display_array(7, c);
    return 0;
}
