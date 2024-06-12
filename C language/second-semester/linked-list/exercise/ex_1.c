#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct Student {
    int id;
    char name[50];
    char spec[20];
    int level;
    float avg_score;
    struct Student* next;
} Student;

Student* create(Student* student) {
    int count;
    int i = 0;
    Student* prev = NULL;
    printf("Enter how many students you want to add: ");
    scanf("%d", &count);

    if (count < 1) {
        return NULL;
    }

    do {
        student = malloc(sizeof(Student));
        student->next = prev;
        printf("Enter information for the %d student\n", i + 1);
        printf("Enter student's id: ");
        scanf("%d", &student->id);
        printf("Enter student's name: ");
        scanf("%s", student->name);
        printf("Enter student's speciality: ");
        scanf("%s", student->spec);
        printf("Enter student's level: ");
        scanf("%d", &student->level);
        printf("Enter student's average score: ");
        scanf("%f", &student->avg_score);
        printf("---------------------------------\n");
        prev = student;
    } while (++i < count);

    return prev;
}

void displayStudentInfoSpec(Student *head) {
    Student *current = head;
    while (current != NULL) {
        if (strcmp(current->spec, "info") == 0) {
            printf("ID: %d, Name: %s, Specialization: %s, Level: %d, Avg Score: %.2f\n",
                   current->id, current->name, current->spec, current->level, current->avg_score);
        }
        current = current->next;
    }
}

int count(Student* std) {
    if (std == NULL) {
        return 0;
    }

    if (std->avg_score >= 10) {
        return 1 + count(std->next);
    } else {
        return count(std->next);
    }
}

int main() {
    Student* head = NULL;
    head = create(head);
    displayStudentInfoSpec(head);
    printf("Passed students: %d", count(head));
    return 0;
}
