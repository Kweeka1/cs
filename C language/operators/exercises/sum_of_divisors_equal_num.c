#include "stdio.h"

int sum_of_divisors_equal_num(int num1, int num2) {
    int sum_of_divisors = 0;
    int current_divisor = 1;

    while(current_divisor < num2) {
        if (num2 % current_divisor == 0) {
            sum_of_divisors += current_divisor;
        }
        current_divisor++;
    }

    if (sum_of_divisors != num1) return 0;

    sum_of_divisors = 0;
    current_divisor = 1;

    while(current_divisor < num1) {
        if (num1 % current_divisor == 0) {
            sum_of_divisors += current_divisor;
        }
        current_divisor++;
    }

    if (sum_of_divisors != num2) return 0;

    return 1;
}

int main() {
    int res = sum_of_divisors_equal_num(220, 284);
    printf("%d", res);
}
