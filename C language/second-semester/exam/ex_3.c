#include "stdio.h"

int main() {
    char words[5][50];
    printf("Enter 5 words separated by a whitespace:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%s", words[i]);
    }
    for (int i = 4; i >= 0; --i) {
        printf("%s ", words[i]);
    }
    printf("\n");
}
