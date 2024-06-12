#include "stdio.h"

int is_prime(int n) {
    if (n == 1) {
        return 1;
    }

    for (int i = 2; i < (n / 2); i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    int res = is_prime(a);

    if (res) {
        printf("Number is prime");
    } else {
        printf("Number is not prime");
    }
}
