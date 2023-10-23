//
// Created by arp on 10/21/23.
//

#include "stdio.h"

int isPalindrome(int num) {
    int reversedNumber = 0;
    int remainder;

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append the digit to the reversed number
        num /= 10; // Remove the last digit
    }

    return reversedNumber;
}

int main() {
    int num = 123;
    int isNumPalindrome = isPalindrome(num);
    printf("Is palindrome %d", isNumPalindrome);
}
