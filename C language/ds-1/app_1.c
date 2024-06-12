#include "stdio.h"

// fill array

/*
 * example
 * size = 7
 * t1 = [12, 37, 18, 42, 67, 53, 28]
 * t2 = [...]
 * 12 => 1² + 2² = 5 then t2[0] = 5;
 */

void display(int len, int* arr) {
    printf("[");
    for (int i = 0; i < len - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

void read_length(int* len) {
    do {
        printf("Enter the size of the array: ");
        scanf("%d", len);
    } while (*len <= 0 || *len > 50);
}

void fill(int len, int* arr) {
    for (int i = 0; i < len; ++i) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
}

void fill2(int len, const int* arr1, int* arr2) {
    int sum, digit;
    for (int i = 0; i < len; i++) {
        int num = arr1[i];
        sum = 0;
        while (num > 0) {
            digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        arr2[i] = sum;
    }
}

int main() {
    int len;
    int arr1[50];
    int arr2[50];

    printf("Enter array length: ");
    scanf("%d", &len);

    fill(len, arr1);
    display(len, arr1);

    fill2(len, arr1, arr2);
    display(len, arr2);

    return 0;
}