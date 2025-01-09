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
// Deleting the first node
struct node *deletefirst(struct node *head) {
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Deleting the node of given index of linked list
struct node *deleteindex(struct node *head, int index) {
    struct node *p, *q;
    p = head;
    q = head->next;
    // int i = 0;
    // while (i != index - 1) {
    //     p = p->next;
    //     q = q->next;
    //     i++;
    // }
    for (int i = 0; i < index - 1; i++) {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

    return head;
}
// Deleting the last node
struct node *deletelast(struct node *head) {
    struct node *p, *q;
    p = head;
    q = head->next;
    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}
// Deleting the element of given value from the linked list
struct node *deleteindex(struct node *head, int number) {



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
    fourth->next = NULL;

    printf("Before insertion\n\n");
    linkedlisttransversal(head);
    // ----------------------------------------//

    // head = deletefirst(head);
    // head = deleteindex(head, 1);
    // head = deletelast(head);
    head = deletenum(head);
    printf("\nAfter Deletion\n\n");

    linkedlisttransversal(head);

    return 0;
}