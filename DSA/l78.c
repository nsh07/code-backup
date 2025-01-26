#include <malloc.h>
#include <stdio.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data) {
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inOrder(struct node *root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node *inOrderPredecessor(struct node *root) {
    // root = root->left;
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}
struct node *deleteNode(struct node *root, int key) {
    struct node *ipre;

    if (root == NULL) {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL) {
        free(root);
        return NULL;
    }
    // searching for the node to be deleted
    if (key < root->data) {
        root->left = deleteNode(root->left, key);

    }

    else if (key > root->data) {
        root->right = deleteNode(root->right, key);

    }

    // deletion strategy when the node is found
    else {
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        root->left = deleteNode(root->left, key);
    }
    return root;
}

int main() {
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    printf("\n");
    deleteNode(p, 3);
    inOrder(p);
    return 0;
}