#include "stdio.h"

int main() {
    // null character
    // char ex[20]
    // if size is omitted, only 255 characters will be allocated
    char str[6] = "value";
    //char str[20];
    printf("Enter a sentence (20 chars): ");
    // use fgets if you need to include white spaces in the string
    // gets(str)
    fgets(str, sizeof(str), stdin);
    printf("The entered sentence is:\n");
    printf("%s", str);

    // you can use sizeof(str) in condition below,
    // but it will read null characters if the
    for (int i = 0; i < str[i]; ++i) {
        printf("%c", str[i]);
    }
    return 0;
}
