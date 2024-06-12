#include "stdio.h"

typedef struct DATE {
    int day;
    int month;
    int year;
} DATE;

typedef struct car {
    int REGISTRATION;
    char BRAND[20];
    char POWER[20];
    DATE CIRCULATION_DATE;
    int MILEAGE;
} car;

void FILL(int len, car arr[50]) {
    for (int i = 0; i < len; i++) {
        printf("Enter information for the %d car: \n", i);
        printf("Enter the registration number: ");
        scanf("%d", &arr[i].REGISTRATION);
        printf("Enter the brand: ");
        scanf("%s", arr[i].BRAND);
        printf("Enter the power: ");
        scanf("%s", arr[i].POWER);

        printf("Enter the circulation date: \n");
        printf("Enter the year: ");
        scanf("%d", &arr[i].CIRCULATION_DATE.year);
        printf("Enter the month: ");
        scanf("%d", &arr[i].CIRCULATION_DATE.month);
        printf("Enter the day: ");
        scanf("%d", &arr[i].CIRCULATION_DATE.day);

        printf("Enter the mileage: ");
        scanf("%d", &arr[i].MILEAGE);
    }
}

void DISPLAY(int len, car arr[50]) {
    for (int i = 0; i < len; i++) {
        int date = arr[i].CIRCULATION_DATE.year * 10000 + arr[i].CIRCULATION_DATE.month * 100 + arr[i].CIRCULATION_DATE.day;
        if (date > 20240101) {
            printf("Displaying car number %d: \n", i + 1);
            printf("Car registration: %d\n", arr[i].REGISTRATION);
            printf("Car brand: %s\n", arr[i].BRAND);
            printf("Car power: %s\n", arr[i].POWER);
            printf("Car circulation date: %d/%d/%d\n", arr[i].CIRCULATION_DATE.day, arr[i].CIRCULATION_DATE.month, arr[i].CIRCULATION_DATE.year);
            printf("Car mileage: %d\n", arr[i].MILEAGE);
            printf("-----------------------\n");
        }
    }
}

int COUNT(int len, car arr[50]) {
    int max = arr[0].MILEAGE;
    int cars = 1;

    for (int i = 1; i < len; i++) {
        if (arr[i].MILEAGE > max) {
            max = arr[i].MILEAGE;
            cars = 1;
        } else if (arr[i].MILEAGE == max) {
            cars++;
        }
    }

    return cars;
}

int main() {
    car T[] = {};
    int len;
    printf("Enter the number of cars: ");
    scanf("%d", &len);
    FILL(len, T);
    printf("Displaying cars whose circulation date is after 01/01/2024: \n");
    DISPLAY(len, T);
    printf("The number of cars with a maximum mileage is: %d", COUNT(len, T));
    return 0;
}
