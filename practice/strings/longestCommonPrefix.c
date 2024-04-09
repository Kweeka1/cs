#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int min(int a, int b) {
    return a < b ? a : b;
}

char* longestCommonPrefix(char* strs[], int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    int prefix_length = sizeof(strs[0]);

    for (size_t i = 0; i < strsSize - 1; i++)
    {
        int current_prefix = 0;
        for (size_t k = 0; k < prefix_length; k++)
        {
            if (strs[i][k] == strs[i + 1][k]) current_prefix++;
            else break;
        }
        prefix_length = min(current_prefix, prefix_length);
    }

    char* prefix = malloc(prefix_length + 1);
    strncpy(prefix, strs[0], prefix_length);
    prefix[prefix_length] = '\0';
    return prefix;
}

int main() {
    const char* strs[] = {"gleo", "ghna"};
    char* a = longestCommonPrefix(strs, 2);
    printf("%s\n", a);
    return 0;
}
