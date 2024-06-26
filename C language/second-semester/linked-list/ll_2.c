#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct Node {
    int val;
    struct Node* next;
} Node;

void display(Node* head) {
    Node* current = head;
    while (current) {
        printf("Value: %d\n", current->val);
        current = current->next;
    }
}

void purge(Node* head) {
    Node* next_candidate = head;
    Node* awaiting_deletion;

    if (next_candidate->next == NULL) {
        free(next_candidate);
        return;
    }

    while (next_candidate->next != NULL) {
        awaiting_deletion = next_candidate;
        next_candidate = next_candidate->next;
        free(awaiting_deletion);
    }
}

Node* append(int val, Node* head) {
    Node* new = (Node*)malloc(sizeof(Node));
    new->val = val;
    new->next = NULL;
    Node* current = head;
    if (current == NULL) {
        head = new;
    } else {
        while (current->next) {
            current = current->next;
        }
        current->next = new;
    }
    return head;
}

int main() {
    Node* head = NULL;
    int c;
    char choice[1];
    do {
        printf("Enter a value: ");
        scanf("%d", &c);
        head = append(c, head);
        printf("Add another item ? (y/n): ");
        scanf("%s", choice);
    } while (choice[0] == 'y');
    display(head);
    purge(head);
    return 0;
}
