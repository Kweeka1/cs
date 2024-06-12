#include "stdio.h"

void display(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

void read_length(int* len) {
    do {
        printf("Enter length: ");
        scanf("%d", len);
    } while (*len < 1 || *len > 50);
}

void fill(int len, int* arr) {
    for (int i = 0; i < len; ++i) {
        printf("Enter a real number: ");
        scanf("%d", &arr[i]);
    }
}

void reverse(int len, int* arr) {
    int temp;
    for (int i = 0; i < len / 2; ++i) {
        temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}

int main() {
    int arr[50];
    int len;

    read_length(&len);
    fill(len, arr);
    display(len, arr);
    reverse(len, arr);
    display(len, arr);
}
