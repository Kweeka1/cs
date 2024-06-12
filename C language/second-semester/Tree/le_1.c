#include "stdio.h"
#include "stdlib.h"

// Leaves (external nodes) -> nodes that do not have children
// Internal nodes -> nodes that have children (sub-branches)
// root -> a node that do not have a parent
// The link between 2 nodes is called an "edge"

// The lessons will cover binary trees only

// same set of elements, same root
// by changing the order of the elements except the root
// either the right side will stay the same or the left side will stay the same

typedef struct Node {
    int info;
    struct Node* right;
    struct Node* left;
} Node;

int main() {
    Node* root = NULL;

    return 0;
}