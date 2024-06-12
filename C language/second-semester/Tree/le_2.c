#include "stdlib.h"
#include "stdio.h"

// tree display
// tree traversal depends on the root
// root will be placed on one the Xs
// X Left X Right X

// root - Left - X - Right - X => pre-order
// X - Left - root - Right - X => in-order
// X - Left - X - Right - root => post-order

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

Node* insert(int val, Node* node) {
    if (!node) {
        return newNode(val);
    }

    if (val < node->info) {
        node->left = insert(val, node->left);
    } else {
        node->right = insert(val, node->right);
    }

    return node;
}

void pre_order(Node* root) {
    if (root) {
        printf("%d ", root->info);
        pre_order(root->left);
        pre_order(root->right);
    }
}

void post_order(Node* root) {
    if (root) {
        post_order(root->left);
        post_order(root->right);
        printf("%d ", root->info);
    }
}

// sorted
void in_order(Node* root) {
    if (root) {
        in_order(root->left);
        printf("%d ", root->info);
        in_order(root->right);
    }
}

int main() {
    int count;
    Node* root = create();

    printf("Enter the number of elements: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        int val;
        printf("Enter a number: ");
        scanf("%d", &val);
        root = insert(val, root);
    }

    printf("Pre-order:\n");
    pre_order(root);
    printf("\n");

    printf("In-order:\n");
    in_order(root);
    printf("\n");

    printf("Post-order:\n");
    post_order(root);
    printf("\n");

    return 0;
}
