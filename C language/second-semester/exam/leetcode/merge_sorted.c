#include "stdlib.h"
#include "stdio.h"

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

    printf("\n");
}

void insert(Node** head, int val) {
    Node* new = malloc(sizeof(Node));
    new->val = val;
    new->next = NULL;

    if (!(*head)) {
        *head = new;
    } else {
        Node* current = *head;
        while (current->next) {
            current = current->next;
        }
        current->next = new;
    }
}

void append(Node** head, Node* el) {
    el->next = NULL;

    if (!(*head)) {
        *head = el;
    } else {
        Node* current = *head;
        while (current->next) {
            current = current->next;
        }
        current->next = el;
    }
}

void merge2(Node** head, Node* ss, Node* sx) {
    Node* sss = ss;
    Node* ssx = sx;
    Node* next = NULL;

    while (sss && ssx) {
        if (sss->val < ssx->val) {
            next = sss->next;
            append(head, sss);
            sss = next;
        } else {
            next = ssx->next;
            append(head, ssx);
            ssx = next;
        }
    }

    while (sss) {
        next = sss->next;
        append(head, sss);
        sss = next;
    }

    while (ssx) {
        next = ssx->next;
        append(head, ssx);
        ssx = next;
    }
}

void reverse_into(Node* l1, Node** l2) {
    if (l1) {
        Node* next = l1->next;
        l1->next = *l2;
        *l2 = l1;
        reverse_into(next, l2);
    }
}

void destruct(Node** l1) {
    if (*l1) {
        Node* temp = *l1;
        *l1 = (*l1)->next;
        free(temp);
        destruct(l1);
    }
}

void merge_unsorted(Node** head, Node* l1, Node* l2) {
    Node* cur = NULL;
    Node* next = NULL;

    if (l1) {
        *head = l1;
        next = l2;
    } else if (l2) {
        *head = l2;
        next = l1;
    }

    cur = *head;
    while (cur->next) {
        cur = cur->next;
    }
    cur->next = next;
}

int main() {
    Node* head = NULL;
    Node* ss = NULL;
    Node* sx = NULL;
    Node* other = NULL;

    insert(&ss, 4);
    insert(&ss, 7);
    insert(&ss, 9);
    insert(&ss, 12);
    insert(&ss, 15);

    insert(&sx, 5);
    insert(&sx, 8);
    insert(&sx, 11);
    insert(&sx, 13);
    insert(&sx, 16);
    insert(&sx, 17);

    // merge
    // merge2(&head, ss, sx);

    //display(ss);
    //reverse_into(ss, &other);
    printf("------------\n");
    //destruct(&ss);
    merge_unsorted(&head, NULL, NULL);

    display(head);
    return 0;
}