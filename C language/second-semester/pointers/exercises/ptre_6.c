#include "stdio.h"

typedef struct Student {
    int id;
    char name[20];
    char surname[20];
    char course;
} Student;

int main() {
    Student *p;
    Student st;

    p = &st;

    printf("Id: ");
    scanf("%d", &p->id);
    printf("Name: ");
    scanf("%s", p->name);
    printf("Surname: ");
    scanf("%s", p->surname);
    printf("Course: ");
    // getchar();
    scanf("%s", &p->course);

    printf("id: %d\n", p->id);
    printf("Name: %s\n", p->name);
    printf("Surname: %s\n", p->surname);
    printf("Course: %c\n", p->course);

    return 0;
}
