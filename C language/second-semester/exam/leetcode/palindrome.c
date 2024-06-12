#include "stdlib.h"
#include "stdio.h"
#include "math.h"

typedef struct Node {
    char val;
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

int sol(Node** head) {
    Node* c1 = *head;
    Node* c2 = c1;
    Node* prev = NULL;
    Node* next = NULL;

    while (c1 && c1->next) {
        next = c1->next;

        // c2 stops at last elment
        // prev stops at the element before the last
        while (c2->next) {
            prev = c2;
            c2 = c2->next;
        }

        // check first el val vs last el val
        if (c1->val != prev->next->val) {
            return 0;
        }

        prev->next = NULL;
        c1 = next;
        c2 = c1;
    }

    return 1;
}

typedef struct Stack {
    Node* top;
} Stack;

void push(Stack* stack, Node* el) {
    el->next = stack->top;
    stack->top = el;
}

void pop(Stack* stack) {
    if (stack->top) {
        Node* temp = stack->top;
        stack->top = stack->top->next;
        free(temp);
    }
}

void remove_before_last(Stack* stack) {
    Node* top = stack->top;

    if (top && top->next) {
        Node* temp = top->next;
        top->next = top->next->next;
        free(temp);
    }
}

int is_pal(Node** head, Stack* stack) {
    Node* current = *head;
    Node* next = NULL;
    int odd = 0;

    while (current) {
        next = current->next;

        if (stack->top && current->val == stack->top->val) {
            pop(stack);
        } else if (stack->top && stack->top->next && current->val == stack->top->next->val) {
            remove_before_last(stack);
            odd = 1;
        } else {
            push(stack, current);
        }

        current = next;
    }

    if (!stack->top || (odd && stack->top && !(stack->top->next))) {
        return 1;
    }

    return 0;
}

int rec(Node** start, Node* end) {
    if (end == NULL) {
        return 1;
    }

    int ans = rec(start, end->next);
    int ans2 = (*start)->val == end->val;
    ans = ans && ans2;

    *start = (*start)->next;

    return ans;
}

void is_pak(Node** start, Node* head, int* out) {
    if (!head) {
        *out = 1;
        return;
    }

    is_pak(start, head->next, out);
    int prev = *out;
    int cur = (*start)->val == head->val;
    int result = prev && cur;
    *start = (*start)->next;
    *out = result;
}

int main() {
    Stack* stack = malloc(sizeof(stack));
    stack->top = NULL;
    int out;

    Node* n1 = malloc(sizeof(Node));
    n1->val = 'a';
    n1->next = NULL;

    Node* n2 = malloc(sizeof(Node));
    n2->val = 'b';
    n2->next = n1;

    Node* n3 = malloc(sizeof(Node));
    n3->val = 'a';
    n3->next = n2;

    Node* n4 = malloc(sizeof(Node));
    n4->val = 'b';
    n4->next = n3;

    Node* n5 = malloc(sizeof(Node));
    n5->val = 'a';
    n5->next = n4;

    Node* n6 = malloc(sizeof(Node));
    n6->val = 'a';
    n6->next = n5;

    //int n = sol(&n5);
    //printf("%d\n", n);
    // printf("%d\n", rec(&n6, n6));
    is_pak(&n6, n6, &out);
    printf("Out: %d\n", out);

    return 0;
}