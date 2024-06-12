#include "stdlib.h"
#include "stdio.h"

typedef struct Node {
    int value;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* create(Queue* queue) {
    queue = malloc(sizeof(Queue));
    return queue;
}

int is_empty(Queue* queue) {
    return queue == NULL || (queue->front == NULL && queue->rear == NULL);
}

Queue* enqueue(Queue* queue, int val) {
    if (queue == NULL) {
        return NULL;
    }

    Node* new = malloc(sizeof(Node));
    new->value = val;
    new->next = NULL;

    if (queue->front == NULL) {
        queue->front = new;
    } else {
        queue->rear->next = new;
    }

    queue->rear = new;
    return queue;
}

Queue* dequeue(Queue* queue, int* out) {
    if (is_empty(queue)) {
        return NULL;
    }

    Node* tmp = queue->front;
    if (queue->front == queue->rear) {
        queue->front = NULL;
        queue->rear = NULL;
    } else {
        queue->front = tmp->next;
    }

    *out = tmp->value;
    free(tmp);
    return queue;
}

void display(Queue * queue) {
    if (is_empty(queue)) {
        printf("Queue is empty!\n");
    } else {
        Node * current = queue->front;
        while (current) {
            printf("Value: %d\n", current->value);
            current = current->next;
        }
    }
}

int count(Node* el) {
    if (el == NULL) {
        return 0;
    }

    return 1 + count(el->next);
}

int main() {
    Queue* queue = NULL;
    int x;
    queue = create(queue);
    queue = enqueue(queue, 1);
    queue = enqueue(queue, 2);
    queue = enqueue(queue, 3);
    printf("Count: %d\n", count(queue->front));
    display(queue);
    printf("------------\n");
    queue = dequeue(queue, &x);
    printf("x: %d\n", x);
    queue = dequeue(queue, &x);
    printf("x: %d\n", x);
    queue = dequeue(queue, &x);
    printf("x: %d\n", x);
    display(queue);
    printf("Count: %d\n", count(queue->front));
    return 0;
}