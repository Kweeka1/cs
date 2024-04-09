#include "stdio.h"

int longestPalindrome(char* s) {
    int table[(122 - 65) + 1];
    int res = 0;

    for (int i = 0; i < (122 - 65) + 1; i++) {
        table[i] = 0;
    }

    for (int i = 0; s[i]; i++) {
        table[s[i] - 65]++;
    }

    for (int i = 0; i < (122 - 65) + 1; i++) {
        res += table[i] / 2 * 2;
        if (res % 2 == 0 && table[i] % 2 == 1) {
            res += 1;
        }
    }

    return res;
}

int main() {
    char test[] = "abcccedd";
    int lng_pal = longestPalindrome(test);
    printf("Longest palindrome length is: %d\n", lng_pal);
    return 0;
}