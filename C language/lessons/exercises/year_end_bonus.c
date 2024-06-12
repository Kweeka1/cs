//
// Created by arp on 11/4/23.
//

// index = عدد مهني

#include "stdio.h"

int main() {
    const int min_index_for_bonus = 250;
    const int bonus_per_year_of_seniority = 12;
    const int bonus_per_dependant_child = 15;

    int employee_children, employee_years_of_seniority, employee_index;
    float employee_monthly_salary;

    printf("Enter employee salary: ");
    scanf("%f", &employee_monthly_salary);

    printf("Enter employee index: ");
    scanf("%d", &employee_index);

    printf("Enter employee's children number: ");
    scanf("%d", &employee_children);

    printf("Enter employee years of seniority: ");
    scanf("%d", &employee_years_of_seniority);

    float bonus = 0;

    if (employee_index < min_index_for_bonus) {
        bonus = employee_monthly_salary * 0.07; // salary * 7 / 100
    }
    if (employee_children) {
        bonus += employee_children * bonus_per_dependant_child;
    }
    if (employee_years_of_seniority > 2) {
        bonus += (employee_years_of_seniority - 2) * bonus_per_year_of_seniority;
    }

    printf("Total bonus is: %.2f", bonus);
    return 0;
}
