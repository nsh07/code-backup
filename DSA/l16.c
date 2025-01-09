#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void linkedlisttransversal(struct node *ptr) {
    while (ptr != NULL) {
        printf("value : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// Case 1
struct node *insertatbeg(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}

// Case 2
struct node *insertatbet(struct node *head, int index, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    int i = 0;

    struct node *p = head;
    while (i != index - 1) {
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct node *insertatend(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4
void insertafternode(struct node *prevnode, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode->next = ptr;
}

int main() {
    struct node *head, *second, *third, *fourth;
    // Allocate memory for node in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // linked the first  node and second node
    head->data = 7;
    head->next = second;
    // linked the  second node and third   node
    second->data = 77;
    second->next = third;

    // linked the third node and fourth node
    third->data = 777;
    third->next = fourth;

    // terminate the list at the  fourth node
    fourth->data = 7777;
    fourth->next = NULL;
    printf("Before insertion\n\n");
    linkedlisttransversal(head);
    // ----------------------------------------//

    // head = insertatbeg(head, 56);
    // head = insertatbet(head, 2, 57);
    // head = insertatend(head, 78);
    insertafternode(third, 54);
    printf("\nAfter insertion\n\n");

    linkedlisttransversal(head);

    // ----------------------------------------//

    printf("%d\n", sizeof(struct node) );
    printf("%d\n", sizeof(head->data) );
    printf("%d\n", sizeof(head->next) );

    return 0;
}