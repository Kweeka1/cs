#include "stdio.h"

int main() {
    char text[200];
    char target;
    int occ;
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter a character: ");
    scanf("%c", &target);
    occ = 0;
    for (int i = 0; i < sizeof(text); ++i) {
        if (text[i] == target) {
            occ++;
        }
    }
    printf("%d", occ);
    return 0;
}
