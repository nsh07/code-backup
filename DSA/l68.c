#include <malloc.h>
#include <stdio.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data) {
     struct node *n; 
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data; 
    n->left = NULL;
    n->right = NULL; 
    return n; 
}
void postOrder(struct node* root){
    if(root!= NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

int main() {
          /*
                   1
                 /   \
                 2     3
                / \    / \
                4  5   6  7
               / \ / \
               8 9 10 11 
          */     
    struct node *p = createnode(1);
    struct node *p1 = createnode(2);
    struct node *p2 = createnode(3);
    struct node *p3 = createnode(4);
    struct node *p4 = createnode(5);
    struct node *p5 = createnode(6);
    struct node *p6 = createnode(7);
    struct node *p7 = createnode(8);
    struct node *p8 = createnode(9);
    struct node *p9 = createnode(10);
    struct node *p10 = createnode(11);


    p->left = p1;
    p->right = p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    p3->left=p7;
    p3->right=p8;
    p4->left=p9;
    p4->right=p10;
    
   // Linking the root node with left and right children
    postOrder(p);
    return 0;
}