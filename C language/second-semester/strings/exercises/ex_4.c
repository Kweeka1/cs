#include "stdio.h"
#include "ctype.h"

int main() {
    char ch[100];

    printf("Enter a string: ");
    gets(ch);

    for (int i = 0; ch[i] ; ++i) {
        if (isupper(ch[i])) {
            ch[i] = tolower(ch[i]);
        } else {
            ch[i] = toupper(ch[i]);
        }
    }

    printf("%s", ch);
}
