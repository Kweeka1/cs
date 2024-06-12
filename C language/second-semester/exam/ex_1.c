#include "stdlib.h"
#include "stdio.h"

typedef struct Node
{
    int val;
    struct Node* next;
} Node;


void display(Node* head) {
    Node* current = head;
    while (current) {
        printf("Value: %d\n", current->val);
        current = current->next;
    }

    printf("\n");
}

void reverse(Node** head) {
    Node* current = *head;
    Node* prev = NULL;
    Node* next = NULL;

    while (current)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }

    *head = prev;
}

void split_passed_failed(Node** head, Node** passed, Node** failed) {
    Node* current = *head;
    Node* next = NULL;

    while (current)
    {
        next = current->next;

        if (current->val > 10) {
            current->next = *passed;
            *passed = current;
        } else {
            current->next = *failed;
            *failed = current;
        }

        current = next;
    }
}

int main() {
    Node* passed = NULL;
    Node* failed = NULL;

    Node* n1 = malloc(sizeof(Node));
    n1->val = 5;
    n1->next = NULL;

    Node* n2 = malloc(sizeof(Node));
    n2->val = 12;
    n2->next = n1;

    Node* n3 = malloc(sizeof(Node));
    n3->val = 3;
    n3->next = n2;

    Node* n4 = malloc(sizeof(Node));
    n4->val = 43;
    n4->next = n3;

    // display(n4);

    // reverse(&n4);

    // display(n4);

    split_passed_failed(&n4, &passed, &failed);

    display(passed);
    display(failed);

    return 0;
}
