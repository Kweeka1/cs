#include "stdio.h"
#include "stdlib.h"

typedef struct Node {
    int val;
    struct Node* next;
} Node;

typedef struct Stack {
    struct Node* top;
} Stack;

typedef struct Queue {
    struct Stack* st1;
    struct Stack* st2;
} Queue;

void enqueue(Queue* q, int val) {
    if (q && q->st1) {
        Node* new = malloc(sizeof(Node));
        new->val = val;
        new->next = q->st1->top;
        q->st1->top = new;
    }
}

void dequeue(Queue* q, int* out) {
    if (!q) return;

    Stack* s = q->st1;
    Stack* x = q->st2;

    if (s->top) {
        Node* next = NULL;

        while (s->top)
        {
            next = s->top->next;
            s->top->next = x->top;
            x->top = s->top;
            s->top = next;
        }

        *out = x->top->val;
        Node* temp = x->top;
        x->top = x->top->next;
        free(temp);

        while (x->top)
        {
            next = x->top->next;
            x->top->next = s->top;
            s->top = x->top;
            x->top = next;
        }
    }
}

void init(Queue** q) {
    *q = malloc(sizeof(Queue));
    (*q)->st1 = malloc(sizeof(Stack));
    (*q)->st2 = malloc(sizeof(Stack));
}

int main() {
    Queue* q = NULL;
    int out;

    init(&q);
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);

    for (size_t i = 0; i < 3; i++)
    {
        dequeue(q, &out);
        printf("Out: %d\n", out);
    }

    return 0;
}