#include <stdio.h>
#include <string.h>

// NOT INCLUDED

#define MAX_WORD_LENGTH 50
#define NUM_WORDS 5

int main() {
    char words[NUM_WORDS][MAX_WORD_LENGTH];
    char input[MAX_WORD_LENGTH * NUM_WORDS]; // Assuming the input won't exceed the total length of 5 words combined

    printf("Enter 5 words separated by a whitespace: ");
    fgets(input, sizeof(input), stdin);

    // Tokenize the input
    char *token = strtok(input, " ");
    int i = 0;
    while (token != NULL && i < NUM_WORDS) {
        strcpy(words[i], token);
        token = strtok(NULL, " \n"); // strtok also reads newline character, so we exclude it
        i++;
    }

    // Display the entered words
    printf("\nThe words you entered are:\n");
    for (i = NUM_WORDS - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }

    return 0;
}
