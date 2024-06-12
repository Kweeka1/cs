#include "stdio.h"

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int next = low - 1;

    for (int i = low; i < high; i++)
        if (arr[i] < pivot)
            swap(&arr[++next], &arr[i]);

    swap(&arr[++next], &arr[high]);
    return next;
}

void quicksort(int* arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, pivot + 1, high);
        quicksort(arr, low, pivot - 1);
    }
}

void display(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

int main() {
    int arr[] = {2, 3, 1, 7, 4};
    int size = sizeof(arr)/sizeof(int);
    display(size, arr);
    quicksort(arr, 0, size - 1);
    display(size, arr);
}