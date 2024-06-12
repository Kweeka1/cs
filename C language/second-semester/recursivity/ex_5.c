#include "stdio.h"

void display(int arr[], int len) {
    if (len > 0) {
        display(arr, len - 1);
        printf("%d ", arr[len - 1]);
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    display(arr, 5);
}
