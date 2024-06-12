#include "stdio.h"

int position(char ch[100], char c) {
    int last;
    for (int i = 0; ch[i]; ++i) {
        if (ch[i] == c) {
            last = i;
        }
    }
    return last + 1;
}

int main() {
    char ch[100];
    char c;
    printf("Enter a string: ");
    gets(ch);
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("The position of the last occurrence of '%c' in the string is: %d", c, position(ch, c));
    return 0;
}