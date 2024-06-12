#include "stdio.h"

void read_length(char* name, int* len) {
    do {
        printf("Enter size of %s array: ", name);
        scanf("%d", len);
    } while (*len <= 0 || *len > 50);
}

void fill(int len, int* arr) {
    printf("Enter the first element: ");
    scanf("%d", &arr[0]);
    for (int i = 1; i < len; i++) {
        do {
            printf("Enter the next element: ");
            scanf("%d", &arr[i]);
        } while (arr[i] < arr[i - 1]);
    }
}

void display(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

void merge_arrays(int len1, int len2, const int* arr1, const int* arr2, int* arr3) {
    int i = 0;
    int j = 0;
    int i_end = 0;
    int j_end = 0;

    for (int k = 0; k < (len1 + len2); ++k) {
        int el1 = arr1[i];
        int el2 = arr2[i];
        int min_num = 0;

        if (i_end == 1) {
            min_num = min(el2, el2);
        } else if (j_end == 1) {
            min_num = min(el1, el1);
        }

        arr3[k] = min_num;

        if (min_num == el1) {
            i++;
        } else {
            j++;
        }

        if (i >= len1) i_end = 1;
        if (j >= len2) j_end = 1;
    }
}

int main() {
    int len1, len2;
    int arr1[50];
    int arr2[50];
    int arr3[100];

    read_length("first", &len1);
    fill(len1, arr1);
    display(len1, arr1);

    read_length("second", &len2);
    fill(len2, arr2);
    display(len2, arr2);

    merge_arrays(len1, len2, arr1, arr2, arr3);
    display(len1 + len2, arr3);

    return 0;
}