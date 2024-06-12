#include "stdio.h"

// if (-1) printf("runs on negative numbers");

// if statement
//  reduced form
//  full form
// block { expression }
//  if (1) printf("No need to use block here");
//  use block when you have more than 1 instruction.

// algo
//  phrase
//      Write - Read - Assignment
// [...] means the code inside the square brackets is optional

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        if (n % 5 == 0)
            printf("number is dividable by 2 and 5");
        else
            printf("number is not dividable by 2 and 5");
    else
        printf("number is not dividable by 2 and 5");
}
