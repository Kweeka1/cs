/*
 * Write a C program that reads the values of a student's grades N1, N2, N3 and their respective
 * coefficients C1, C2, C3 and displays:
 *  a. the arithmetic average of the grades
 *  b. the weighted average of the grades
 */

#include "stdio.h"

void my_try() {
    float a, ac, b, bc, c, cc;
    printf("Type the grade and it's coefficient\n");
    scanf("%f %f %f %f %f %f", &a, &ac, &b, &bc, &c, &cc);

    float avg_coefs = (ac + bc + cc) / 3;
    float avg_grades = (a * ac + b * bc + c * cc) / (ac + bc + cc);

    printf("Average grades: %3.1f, Average coefficients: %3.1f", avg_coefs, avg_grades);
}

void solution() {
    float a, ac, b, bc, c, cc, avg_grades, weighted_average_of_the_grades;
    printf("Enter N1\n");
    scanf("%f", &a);

    printf("Enter N2\n");
    scanf("%f", &b);

    printf("Enter N3\n");
    scanf("%f", &c);

    printf("Enter C1\n");
    scanf("%f", &ac);

    printf("Enter C2\n");
    scanf("%f", &bc);

    printf("Enter C3\n");
    scanf("%f", &cc);

    avg_grades = (a + b + c) / 3;
    weighted_average_of_the_grades = (a * ac + b * bc + c * cc) / (ac + bc + cc);

    printf("Average grades: %3.1f, Average coefficients: %3.1f", avg_grades, weighted_average_of_the_grades);
}

int main() {
    solution();
    return 0;
}
