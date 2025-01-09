#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

void linkedlisttransversal(struct node * ptr ){
    while (ptr != NULL)
    {
        printf("value : %d\n", ptr ->data);
        ptr = ptr ->next;

    }
    
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
    fourth ->data = 7777;
    fourth->next =NULL;

    linkedlisttransversal(head);

    return 0;
}