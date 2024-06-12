#include "stdio.h"

typedef struct Date {
    int dd;
    int mm;
    int yy;
} Date;

void fillDate(Date* date) {
    printf("Enter date in this format (dd/mm/yy): ");
    scanf("%d/%d/%d", &date->dd, &date->mm, &date->yy);
}

void displaySmaller(Date date1, Date date2) {
    int fulldate1 = date1.yy * 10000 + date1.mm * 100 + date1.dd;
    int fulldate2 = date2.yy * 10000 + date2.mm * 100 + date2.dd;

    int diff = fulldate1 - fulldate2;

    if (diff < 0) {
        printf("Date 1 is smaller");
    } else if (diff > 0) {
        printf("Date 2 is smaller");
    } else {
        printf("Date 1 and Date 2 are the same");
    }
}

int main() {
    Date date1, date2;
    fillDate(&date1);
    fillDate(&date2);
    displaySmaller(date1, date2);
}
