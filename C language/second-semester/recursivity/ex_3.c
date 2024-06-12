#include "stdio.h"
#include "string.h"

void reverse(char* str, int start, int end) {
    if (start >= end) {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverse(str, start + 1, end - 1);
}

int main() {
    char ch[] = "hello";
    int len = strlen(ch);
    printf("%s\n", ch);
    reverse(ch, 0, len - 1);
    printf("%s", ch);
    return 0;
}
