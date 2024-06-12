#include "stdlib.h"
#include "stdio.h"

typedef struct Node {
    int val;
    struct Node* next;
    struct Node* prev;
} Node;

Node* unshift(Node* head) {
    if (head) {
        Node* current = head;
        head = current->next;
        if (head) {
            head->prev = NULL;
        }
        free(current);
    }
    return head;
}

Node* pop(Node* head) {
    Node* current = head;

    if (current != NULL) {
        if (current->next == NULL) {
            head = NULL;
        } else {
            while (current->next) {
                current = current->next;
            }
            current->prev->next = NULL;
        }
        free(current);
    }

    return head;
}

Node* prepend(int val, Node* head) {
    Node* new = (Node*)malloc(sizeof(Node));
    new->val = val;
    new->next = head;
    new->prev = NULL;
    if (head) {
        head->prev = new;
    }
    head = new;
    return head;
}

void display(Node* head) {
    Node* current = head;
    while (current) {
        printf("Value: %d\n", current->val);
        current = current->next;
    }
}

void purge(Node* head) {
    if (head == NULL) {
        return;
    }

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

void recursive_display(Node* head) {
    printf("Value: %d\n", head->val);
    if (head->next) {
        recursive_display(head->next);
    }
}

int main() {
    Node* head = NULL;
    head = prepend(1, head);
    head = prepend(2, head);
    head = prepend(3, head);
    display(head);
    printf("---------\n");
    head = pop(head);
    head = pop(head);
    head = pop(head);
    if (head) {
        display(head);
        purge(head);
    }
    return 0;
}
