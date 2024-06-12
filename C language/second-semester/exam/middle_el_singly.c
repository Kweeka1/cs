#include "stdio.h"
#include "stdlib.h"

typedef struct  Node {
    int val;
    struct  Node* next;
    struct  Node* prev;
} Node;

void display(Node* head) {
    Node* current = head;

    while (current) {
        printf("Current value: %d\n", current->val);
        current = current->next;
    }

    printf("\n");
}

void middle_linked_list(Node** start, Node* end, Node** middle) {
    if (end && *middle == NULL) {
        middle_linked_list(start, end->next, middle);
        if (*start == end) {
            *middle = *start;
        } else if ((*start)->next == end) {
            *middle = (*start);
        } else {
            *start = (*start)->next;
        }
    }
}

void remove_at(int len, Node* start, Node** head, int* out) {
    if (*head && start) {
        Node* cur = start;
        Node* next = cur->next;

        if (len == 0) {
            *head = (*head)->next;
            *out = cur->val;
            free(cur);
        } else if (len == 1 && next) {
            *out = next->val;
            cur->next = next->next;
            free(next);
        } else {
            remove_at(len - 1, start->next, head, out);
        }
    }
}

void remove_at3(int len, Node** head, int* out) {
    if (*head) {
        Node* cur = *head;

        if (len == 0) {
            *head = (*head)->next;
            *out = cur->val;
            free(cur);
        } else {
            while (len >= 2 && cur->next) {
                cur = cur->next;
                len--;
            }

            Node* temp = cur->next;
            cur->next = temp->next;
            *out = temp->val;
            free(temp);
        }
    }
}

int main() {
    Node* middle = NULL;
    int out;

    Node* n1 = malloc(sizeof(Node));
    n1->val = 1;
    n1->next = NULL;

    Node* n2 = malloc(sizeof(Node));
    n2->val = 2;
    n2->next = n1;

    Node* n3 = malloc(sizeof(Node));
    n3->val = 3;
    n3->next = n2;

    Node* n4 = malloc(sizeof(Node));
    n4->val = 4;
    n4->next = n3;

    Node* n5 = malloc(sizeof(Node));
    n5->val = 5;
    n5->next = n4;

    Node* n6 = malloc(sizeof(Node));
    n6->val = 6;
    n6->next = n5;

    n6->prev = NULL;
    n5->prev = n6;
    n4->prev = n5;
    n3->prev = n4;
    n2->prev = n3;
    n1->prev = n2;

    //middle_linked_list(&n6, n6, &middle);
    //printf("Middle value is: %d", middle->val);
    //remove_at2(1, n2, &n2, &out);
    remove_at3(3, &n6, &out);
    printf("Out: %d\n", out);
    display(n6);
    return 0;
}
