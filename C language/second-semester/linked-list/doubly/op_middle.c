#include "stdlib.h"
#include "stdio.h"

typedef struct Node {
    int val;
    struct Node* next;
    struct Node* prev;
} Node;

Node* remove_at(int index, Node* head) {
    int i = 0;
    Node* current = head;
    while (current && i < index) {
        current = current->next;
        i++;
    }

    if (head == current && head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        if (current->next == NULL) {

        }
    }
}

int recursive_sum(Node* head) {
    if (head == NULL) {
        return 0;
    } else {
        return head->val + recursive_sum(head->next);
    }
}

int sum(Node* head) {
    int sum = 0;
    Node* current = head;

    while (current) {
        sum += current->val;
        current = current->next;
    }

    return sum;
}

int max_value(Node* head) {
    int max = head->val;
    Node* current = head;

    while (current) {
        max = current->val > max ? current->val : max;
        current = current->next;
    }

    return max;
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

void display(Node* head) {
    Node* current = head;
    while (current) {
        printf("Value: %d\n", current->val);
        current = current->next;
    }
}

void display_inv(Node* head) {
    Node* cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    while (cur != NULL) {
        printf("%d\n", cur->val);
        cur = cur->prev;
    }
}

Node* find(int val, Node* head) {
    if (head == NULL) return NULL;

    Node* current = head;
    while (current && current->val != val) {
        current = current->next;
    }

    return current;
}

int main() {
    Node* head = NULL;
    head = append(1, head);
    head = append(2, head);
    head = append(3, head);
    display(head);
    printf("Item with val: 2 is %d\n", find(5, head));
    printf("Sum: %d", max_value(head));
    return 0;
}
