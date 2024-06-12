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

int sum(int len, const int* arr) {
    int sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[50];
    int len;

    read_length(&len);
    fill(len, arr);
    display(len, arr);
    printf("Sum: %d", sum(len, arr));
}
