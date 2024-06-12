#include "stdio.h"
#include "stdlib.h"

typedef struct  Node {
    int val;
    struct Node* next;
    struct Node* prev;
} Node;

void display(Node* head) {
    Node* current = head;

    while (current) {
        printf("Current value: %d\n", current->val);
        current = current->next;
    }

    printf("\n");
}

void sort3(Node** head) {
    Node* cur = *head;

    while (cur) {
        Node* min = cur;
        Node* next = cur->next;

        while (next) {
            if (next->val < min->val) {
                min = next;
            }
            next = next->next;
        }

        if (min != cur) {
            if (min->next) {
                min->next->prev = min->prev;
            }
            if (cur->prev) {
                cur->prev->next = min;
            }

            min->prev->next = min->next;
            min->next = cur;
            min->prev = cur->prev;
            cur->prev = min;

            if (cur == *head) {
                *head = min;
            }
        } else {
            cur = cur->next;
        }
    }
}

// sort by changing values
void sort4(Node** head) {
    int permute = 0;

    do {
        Node* cur = *head;
        Node* next = cur->next;

        while (next) {
            if (cur->val > next->val) {
                int temp = cur->val;
                cur->val = next->val;
                next->val = temp;
                permute = 1;
            }
        }
    } while (permute);
}

void sort_singly(Node** head) {
    Node* cur = *head;
    Node* cur_prev = NULL;

    while(cur) {
        Node* min = cur;
        Node* min_prev = NULL;
        Node* prev = NULL;
        Node* next = cur->next;

        while(next) {
            if (next->val < min->val) {
                min = next;
                min_prev = prev;
            }
            prev = next;
            next = next->next;
        }

        if (min != cur) {
            min_prev->next = min->next;
            min->next = cur;
            if (*head == cur) {
                *head = min;
            } else {
                cur_prev->next = min;
            }
            cur_prev = min;
        } else {
            cur_prev = cur;
            cur = cur->next;
        }
    }
}

void link(Node** n1, Node** n2) {
    (*n1)->next = *n2;
}

int occ(Node* head, int target) {
    if (!head) return 0;

    int count = 0;
    Node* cur = head;

    do {
        if (cur->val == target) {
            count++;
        }
        cur = cur->next;
    } while(cur != head);
    return count;
}

int main() {

    Node* n1 = malloc(sizeof(Node));
    n1->val = 5;
    n1->next = NULL;

    Node* n2 = malloc(sizeof(Node));
    n2->val = 6;
    n2->next = n1;

    Node* n3 = malloc(sizeof(Node));
    n3->val = 6;
    n3->next = n2;

    Node* n4 = malloc(sizeof(Node));
    n4->val = 6;
    n4->next = n3;

    Node* n5 = malloc(sizeof(Node));
    n5->val = 3;
    n5->next = n4;

    Node* n6 = malloc(sizeof(Node));
    n6->val = 2;
    n6->next = n5;

    //link(&n1, &n6);

    n6->prev = NULL;
    n5->prev = n6;
    n4->prev = n5;
    n3->prev = n4;
    n2->prev = n3;
    n1->prev = n2;

    // sort3(&n6);
    //sort_singly(&n6);
    //display(n6);
    printf("Count: %d\n", occ(n4, 6));

    return 0;
}
