#include "stdio.h"
#include "stdlib.h"

typedef struct Node {
    int val;
    struct Node* next;
} Node;

void insert_ordered(Node** head, int val) {
    Node* new = malloc(sizeof(Node));
    new->val = val;
    Node* prev = NULL;
    Node* cur = *head;

    if (*head == NULL) {
        *head = new;
    } else {
        do {
            if (new->val < cur->val) {
                new->next = cur;
                if (*head == cur) {
                    *head = new;
                } else {
                    prev->next = new;
                }
                return;
            }
            prev = cur;
            cur = cur->next;
        } while (cur);
        prev->next = new;
    }
}

void display(Node* head) {
    Node* current = head;

    while (current) {
        printf("Current value: %d\n", current->val);
        current = current->next;
    }

    printf("\n");
}

int main() {
    Node* head = NULL;
    insert_ordered(&head, 1);
    insert_ordered(&head, 3);
    insert_ordered(&head, 2);
    display(head);
    return 0;
}