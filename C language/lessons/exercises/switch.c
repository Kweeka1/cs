#include "stdio.h"

int main() {
    int day;
    printf("enter day in number: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
        case 5:
            printf("Friday\n");
        case 6:
            printf("Saturday\n");
        case 7:
            printf("Sunday\n");
        default:
            printf("Invalid day");
    }

    return 0;
}
