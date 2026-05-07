#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int key) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int checkAVL(struct Node* root) {
    if (root == NULL)
        return 0;

    int leftHeight = checkAVL(root->left);
    int rightHeight = checkAVL(root->right);

    if (leftHeight == -1 || rightHeight == -1)
        return -1;

    if (abs(leftHeight - rightHeight) > 1)
        return -1;

    return max(leftHeight, rightHeight) + 1;
}

bool isAVL(struct Node* root) {
    return checkAVL(root) != -1;
}

struct Node* insert(struct Node* node, int key) {
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 7);

    if (isAVL(root))
        printf("The tree is an AVL tree.\n");
    else
        printf("The tree is NOT an AVL tree.\n");

    struct Node* root2 = NULL;
    root2 = insert(root2, 10);
    root2 = insert(root2, 5);
    root2 = insert(root2, 2);
    root2 = insert(root2, 1);

    if (isAVL(root2))
        printf("The second tree is an AVL tree.\n");
    else
        printf("The second tree is NOT an AVL tree.\n");

    return 0;


      int h = 5;
    printf("Minimum number of nodes in AVL of height %d: %d\n", h, minNodes(h));

    int key = 1;
    struct Node* root = generateMinAVL(h, &key);

    printf("Inorder traversal of generated AVL tree:\n");
    inorder(root);
    printf("\n");

    return 0;
}

