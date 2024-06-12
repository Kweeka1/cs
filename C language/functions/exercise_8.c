#include "stdio.h"

int maxTwo(int a, int b) {
    if (a > b) return a;
    return b;
}

int maxThree(int a, int b, int c) {
    return maxTwo(maxTwo(a, b), c);
}

int main() {
    int a, b, c;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int res = maxThree(a, b, c);
    printf("The maximum number is: %d", res);
}
