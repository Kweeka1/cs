#include "stdio.h"

void add(int row, int col, int arr[2][3], int arr2[2][3], int arr3[2][3]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            arr3[i][j] = arr[i][j] + arr2[i][j];
        }
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
    int arr[2][3] = {{1, 4, 5}, {2, 1, 0}};
    int arr2[2][3] = {{2, -4, 2}, {3, -1, 3}};
    int arr3[2][3] = {{0, 0, 0}, {0, 0, 0}};
    add(2, 3, arr, arr2, arr3);
    for (int i = 0; i < 2; ++i) {
        display_array(3, arr3[i]);
    }
    return 0;
}
