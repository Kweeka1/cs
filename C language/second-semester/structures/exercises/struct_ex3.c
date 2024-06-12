#include "stdio.h"
#include "string.h"

typedef struct Date {
    int dd;
    int mm;
    int yy;
} Date;

typedef struct Exam {
    int matnum;
    char name[20];
    int coef;
    char department[20];
    int level;
    Date date_exam;
    Date date_eff;
} Exam;

int main() {
    Exam exams[1];

    for (int i = 0; i < sizeof(exams)/sizeof(Exam); ++i) {
        printf("Enter matnum: ");
        scanf("%d", &exams[i].matnum);
        printf("Enter name: ");
        getchar();
        gets(exams[i].name);
        printf("Enter coef: ");
        scanf("%d", &exams[i].coef);
        printf("Enter department: ");
        getchar();
        gets(exams[i].department);
        printf("Enter level: ");
        scanf("%d", &exams[i].level);
        printf("Enter exam date in this format (dd/mm/yy): ");
        scanf("%d/%d/%d", &exams[i].date_exam.dd, &exams[i].date_exam.mm, &exams[i].date_exam.yy);
        printf("Enter EFF date in this format (dd/mm/yy): ");
        scanf("%d/%d/%d", &exams[i].date_eff.dd, &exams[i].date_eff.mm, &exams[i].date_eff.yy);
    }

    int csCount = 0;

    for (int i = 0; i < sizeof(exams)/sizeof(Exam); ++i) {
        if (strcmp(exams[i].department, "COMPUTER SCIENCE") == 0) csCount++;
    }

    printf("CS count is: %d\n", csCount);

    for (int i = 0; i < sizeof(exams)/sizeof(Exam); ++i) {
        if (exams[i].level == 2) {
            printf("The exam schedule for level 2 of CS dep is at %d/%d/%d", exams[i].date_exam.dd, exams[i].date_exam.mm, exams[i].date_exam.yy);
            break;
        }
    }
}
