#include "stdio.h"

int is_symmetric(int a) {
    int reversed = 0;
    int copy_of_a = a;

    while (copy_of_a != 0) {
        reversed = (reversed * 10) + (copy_of_a % 10);
        copy_of_a /= 10;
    }

    if (reversed == a) return 1;

    return 0;
}

int main() {
    int in;
    printf("Enter a number: ");
    scanf("%d", &in);
    int res = is_symmetric(in);
    if (res == 1) {
        printf("The number is symmetric");
    } else {
        printf("The number is not symmetric");
    }
}
