#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

typedef struct Node {
    int info;
    struct Node* right;
    struct Node* left;
} Node;

Node* create() {
    return NULL;
}

Node* newNode(int val) {
    Node* new = malloc(sizeof(Node));
    new->info = val;
    new->left = NULL;
    new->right = NULL;
    return new;
}

void insert(int val, Node** node) {
    if (!node) {
        return newNode(val);
    }

    if (val < (*node)->info) {
        insert(val, (*node)->left);
        (*node)->left;
    } else {
        insert(val, (*node)->right);
        (*node)->right;
    }

    return node;
}