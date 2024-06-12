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

int product(int len, const int* arr, const int* arr2) {
    int product = 0;
    for (int i = 0; i < len; ++i) {
        product += arr[i] * arr2[i];
    }
    return product;
}

int main() {
    int arr[50], arr2[50];
    int len;

    read_length(&len);
    printf("Fill the first array\n");
    fill(len, arr);
    printf("Fill the second array\n");
    fill(len, arr2);
    printf("First array: ");
    display(len, arr);
    printf("Second array: ");
    display(len, arr2);
    printf("The product is: %d", product(len, arr, arr2));
    return 0;
}
