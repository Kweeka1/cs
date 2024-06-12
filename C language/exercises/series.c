#include "stdio.h"

float series(int len) {
    float sum = 1;
    for (int i = 2; i <= len; i++)
    {
        sum += 1/(float)i;
    }

    return sum;
}

int main() {
    int len;
    printf("Enter length: ");
    scanf("%d", &len);
    printf("Result: %f\n", series(len));
    return 0;
}