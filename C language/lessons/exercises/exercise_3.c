#include "stdio.h"

void my_try() {
    float consumption, unit_price;
    printf("Enter consumption amount: ");
    scanf("%f", &consumption);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    float total_price = consumption * unit_price;
    printf("Amount to be paid is $%.2f", total_price);
}

int main() {
    my_try();
}
