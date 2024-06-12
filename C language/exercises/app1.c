#include "stdio.h"

void fill_array(int len, int* arr) {
    for (int i = 0; i < len; i++) {
        printf("Enter a value for element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int read_length() {
    int val;
    do {
        printf("Enter array length: ");
        scanf("%d", &val);
    } while (val < 1 || val > 50);
    val++;
    return val;
}

void insert_element(int len, int* arr) {
    printf("Enter a new element to be added into array: ");
    scanf("%d", &arr[len - 1]);
}

void display_array(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr, int low, int high) {
    int pivot = arr[high - 1];
    int next_pivot_index = low - 1;

    for (int i = low; i < high; ++i) {
        if (arr[i] < pivot) {
            swap(&arr[++next_pivot_index], &arr[i]);
        }
    }

    swap(&arr[++next_pivot_index], &arr[high - 1]);
    return next_pivot_index;
}

void quicksort(int* arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, pivot + 1, high);
        quicksort(arr, low, pivot - 1);
    }
}

void sort_array(int len, int* arr) {
    int low = 0;
    int high = len;
    quicksort(arr, low, high);
}

int main() {
    int arr[51];
    int len;

    len = read_length();

    fill_array(len - 1, arr);
    display_array(len - 1, arr);

    insert_element(len, arr);
    display_array(len, arr);

    sort_array(len, arr);
    display_array(len, arr);

    return 0;
}
