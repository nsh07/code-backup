#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

void linkedlisttransversal(struct node *head) {
    struct node *ptr = head;
    do {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insertatFirst(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *q = head->next;
    while (q->next != head) {
        q = q->next;
    }
    // At this point q points to last node of this circular linked list
    q->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
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
    // linked the f second node and third   node
    second->data = 77;
    second->next = third;

    // linked the third node and fourth node
    third->data = 777;
    third->next = fourth;

    // terminate the list at the  fourth node
    fourth->data = 7777;
    fourth->next = head;

    printf("Circular list Before insertion\n\n");
    linkedlisttransversal(head);

    printf("Circular list After  insertion\n\n");
    head = insertatFirst(head, 80);
    linkedlisttransversal(head);

    return 0;
}