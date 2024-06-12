#include <stdio.h>
#include <string.h>

void swap (int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main (){
    int n = 10;
    int p = 20;
    printf("Before: %d, %d\n", n, p);
    swap(&n, &p);
    printf("After: %d, %d\n", n, p);
    return 0;
}
