#include "stdlib.h"
#include "stdio.h"

typedef struct Student {
    int ID;
    char Name[255];
    float AVG;
    struct Student* Next;
} Student;

Student* add_student(Student* head) {
    Student* new = malloc(sizeof(Student));

    printf("Add a new student!\n");

    printf("Enter student ID: ");
    scanf("%d", &new->ID);

    printf("Enter student name: ");
    scanf("%s", new->Name);
    getchar();

    printf("Enter student average score: ");
    scanf("%f", &new->AVG);

    new->Next = head;
    head = new;

    return head;
}

void display(Student* head) {
    Student* current = head;
    while (current) {
        printf("Printing Student with id: %d\n", current->ID);
        printf("Name: %s\n", current->Name);
        printf("Average score: %4.2f\n", current->AVG);
        printf("---------------------\n");
        current = current->Next;
    }
}

float overall_average(Student* head) {
    float total = 0;
    int students_count = 0;
    Student* current = head;

    while (current) {
        total += current->AVG;
        students_count++;
        current = current->Next;
    }

    return total / (float)students_count;
}

void split_passed_failed(Student* head, Student** passed, Student** failed) {
    Student* current = head;
    Student* fast = NULL;

    while (current) {
        fast = current->Next;
        if (current->AVG < 9.75) {
            current->Next = *failed;
            *failed = current;
        } else {
            current->Next = *passed;
            *passed = current;
        }
        current = fast;
    }
}

int main() {
    Student* head = NULL;
    Student* passed = NULL;
    Student* failed = NULL;
    char input_char[1];

    do {
        printf("Add a student (Y/N): ");
        scanf("%s", &input_char[0]);

        if (input_char[0] == 'Y') {
            head = add_student(head);
        }
    } while (input_char[0] == 'Y');

    printf("\n");

    printf("Displaying added students !\n");
    display(head);
    printf("\n");

    printf("The overall average GPA of the class is: %4.2f", overall_average(head));
    printf("\n");

    split_passed_failed(head, &passed, &failed);

    printf("Displaying passed students !\n");
    display(passed);
    printf("\n");

    printf("Displaying failed students !\n");
    display(failed);
    printf("\n");

    return 0;
}
