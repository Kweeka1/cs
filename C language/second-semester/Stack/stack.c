#include "stdlib.h"
#include "stdio.h"

typedef struct Element {
    int value;
    struct Element* next;
} Element;

Element * create() {
    return NULL;
}

int is_empty(Element* top) {
    return top == NULL;
}

Element * push(Element * top, int value) {
    Element* new = malloc(sizeof(Element));
    new->value = value;
    new->next = top;
    top = new;
    return top;
}

Element * pop(Element* top, int* out) {
    if (!is_empty(top)) {
        Element* p = top;
        *out = p->value;
        top = top->next;
        free(p);
        return top;
    }

    return NULL;
}

void display(Element * top) {
    Element * current = top;
    while (current) {
        printf("Value: %d\n", current->value);
        current = current->next;
    }
}

int count(Element * top) {
    if (top == NULL) {
        return 0;
    }

    return 1 + count(top->next);
}

int main() {
    Element* top = create();
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    display(top);
    printf("---------------\n");
    int x;
    top = pop(top, &x);
    display(top);
    printf("Out: %d\n", x);
    printf("Stack is empty: %s\n", is_empty(top) ? "true" : "false");
    printf("Count: %d", count(top));
    return 0;
}
