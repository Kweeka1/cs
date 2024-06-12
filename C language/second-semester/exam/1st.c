#include "stdio.h"
#include "string.h"

int main() {
    char text[200];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    int j = -1;
    for (int i = 0; i < sizeof(text); ++i) {
        if (text[i] != 'e') {
            text[++j] = text[i];
        }
    }
    puts(text);
    return 0;
}
