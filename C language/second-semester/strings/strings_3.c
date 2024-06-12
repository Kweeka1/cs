#include "stdio.h"
#include "ctype.h"

int main() {
    printf("%d\n", isupper('A')); // 256
    printf("%d\n", isupper('a')); // 0

    printf("%d\n", islower('a')); // 512
    printf("%d\n", islower('A')); // 0

    printf("%d\n", isdigit('1')); // 2048
    printf("%d\n", isdigit('a')); // 0

    printf("%d\n", isalpha('a')); // 1024
    printf("%d\n", isalpha('1')); // 0
    return 0;
}
