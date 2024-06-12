#include "stdio.h"
#include "stdlib.h"

typedef struct Node {
    int val;
    struct Node* next;
    struct Node* prev;
} Node;

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

Node* append(int val, Node* head) {
    Node* new = (Node*)malloc(sizeof(Node));
    new->val = val;
    new->next = NULL;
    if (head == NULL) {
        new->prev = NULL;
        head = new;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        new->prev = current;
        current->next = new;
    }
    return head;
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

void display(Node* head) {
    Node* current = head;
    while (current) {
        printf("Value: %d\n", current->val);
        current = current->next;
    }
}

int count(Node* head) {
    int len = 0;

    Node* current = head;
    while (current) {
        len++;
        current = current->next;
    }

    return len;
}

int recursive_count(Node* head) {
    if (head == NULL) {
        return 0;
    } else {
        return 1 + recursive_count(head->next);
    }
}

int main() {
    Node* head = NULL;
    head = append(1, head);
    head = append(2, head);
    head = append(3, head);
    display(head);
    count(head);
    printf("Count: %d", recursive_count(head));
    purge(head);
    return 0;
}
