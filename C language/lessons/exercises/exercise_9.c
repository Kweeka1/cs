#include "stdio.h"

void displayResultForLoop() {
    int nb, n, product, sum, i;

    do {
        printf("enter length: ");
        scanf("%d", &nb);
    } while (nb < 0);

    for (i = 1, product = 1, sum = 0; i <= nb; i++) {
        printf("Enter a number : ");
        scanf("%d", &n);
        product *= n;
        sum += n;
    }

    float avg = sum / (float)nb;

    printf("Product = %d, Sum = %d, Avg = %f", product, sum, avg);
}

int main() {
    displayResultForLoop();
    return 0;
}
