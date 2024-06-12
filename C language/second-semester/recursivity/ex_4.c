#include "stdio.h"
#include "string.h"
#include "stdlib.h"

//def pal(s):
//...:     if len(s) == 1 or len(s) == 0:
//...:         return True
//...:     elif s[0] != s[len(s) - 1]:
//...:         return False
//...:     else:
//...:         return pal(s[1:-1])

int pal(char ch[]) {
    char text[100];
    int l = strlen(ch);
    if (l == 1 || l == 0) {
        return 1;
    } else if (ch[0] != ch[l - 1]) {
        return 0;
    } else {
        strncpy(text, ch + 1, l - 2);
        return pal(text);
    }
}

int main() {
    char ch[] = "radcr";
    if (pal(ch)) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
