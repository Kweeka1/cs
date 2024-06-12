#include "stdio.h"

void my_try() {
    int input, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &input);

    hours = input / 3600;
    minutes = (input % 3600) / 60;
    seconds = input % 60;

    printf("The given time is %d hours, %d minutes and %d seconds", hours, minutes, seconds);
}

int main() {
    my_try();
}
