#include "stdio.h"

int get_length(char *str) {
    char* p1;
    for (p1 = str; *p1; p1++);
    return (int)(p1 - str);
}

void fill(char* str) {
    printf("Enter a string: ");
    gets(str);
}

int main() {
    char str[100];
    fill(str);
    printf("length: %d\n", get_length(str));
    return 0;
}
