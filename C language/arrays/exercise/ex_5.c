#include "stdio.h"

void fill(int len, int* arr) {
    printf("Enter the first element of the array: ");
    scanf("%d", &arr[0]);
    for (int i = 1; i < len; i++) {
        do {
            printf("Enter an integer: ");
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

void insertVal(int newValue, int len, int* arr) {
    int i, j;
    for (i = 0; i < len && newValue > arr[i]; ++i);
    for (j = i; j >= i; j--)
        arr[j+1] = arr[j];
    arr[j+1] = newValue;
}

void insert(int newValue, int len, int* arr) {
    for (int i = 0; i < len; ++i) {
        if (arr[i] < newValue) continue;
        else {
            int next = newValue;
            int prev = arr[i];
            for (int j = i; j < len + 1; ++j) {
                arr[j] = next;
                next = prev;
            }
            return;
        }
    }
}

int main() {
    int arr[100];
    int len, newValue;

    printf("Enter array size: ");
    scanf("%d", &len);

    fill(len, arr);
    display(len, arr);

    printf("Enter a new value to be inserted into the array: ");
    scanf("%d", &newValue);

    insert(newValue, len, arr);
    display(len + 1, arr);

    return 0;
}