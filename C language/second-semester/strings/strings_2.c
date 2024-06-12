#include "stdio.h"
#include "string.h"

int main() {
    char str[266];

    printf("%d\n", strcmp("Hello", "Hello")); // 0
    printf("%d\n", strcmp("Hel", "Hello")); // -1
    printf("%d\n", strcmp("Hello World", "Hello")); // 1
    printf("%d\n", strcmp("autobus", "lundi")); // -1

    strcpy(str, "Hello1");
    strncpy(str, "Hello1", 3);

    printf("%lu\n", strlen(str));
    printf("%s", str);
}
