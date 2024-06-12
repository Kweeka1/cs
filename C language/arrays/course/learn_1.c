#include "stdio.h"

int func1() {
    int a[5];
    for (int i = 0; i < sizeof a / sizeof (int); ++i) {
        printf("Enter a value: ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < sizeof a / sizeof (int); ++i) {
        // 4d = 4 characters including the number
        // if number is more than 4 then it is the same as %d
        printf("%4d\t", a[i]);
    }

    return 0;
}

int main() {

}
