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

int has_value(Node* root, int val) {
    if (root == NULL) {
        return 0;
    }

    if (val == root->info) {
        return 1;
    } else if (val < root->info) {
        return has_value(root->left, val);
    } else {
        return has_value(root->right, val);
    }
}

int count_nodes(Node* root) {
    if (!root) return 0;
    return 1 + count_nodes(root->left) + count_nodes(root->right);
}

int max(int a, int b) {
    return a > b ? a : b;
}

int height(Node* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

int main() {
    int count;
    char input;
    int input_val;
    Node* root = create();

    printf("Enter tree nodes!\n");
    do {
        do {
            printf("Add Y/N: ");
            scanf("%c", &input);
            getchar();
        } while (toupper(input) != 'Y' && toupper(input) != 'N');

        if (toupper(input) == 'Y') {
            printf("Enter a value: ");
            scanf("%d", &input_val);
            root = insert(input_val, root);
        }
    } while (toupper(input) != 'N');

//    printf("Enter the number of elements: ");
//    scanf("%d", &count);
//
//    for (int i = 0; i < count; i++) {
//        int val;
//        printf("Enter a number: ");
//        scanf("%d", &val);
//        root = insert(val, root);
//    }

    printf("Count: %d\n", count_nodes(root));
    printf("Height: %d\n", height(root));
    printf("Has 12: %s", has_value(root, 12) ? "True" : "False");
    return 0;
}