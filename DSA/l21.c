#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};
void tranverse(struct node* head) {
    struct node* ptr = head;
    printf("Forward printing\n");

    while (ptr->next != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

    printf("%d\n", ptr->data);

    // Here ptr points the last node of Double linked list

    printf("Reverse printing\n");
    while (ptr->prev != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->prev;
    }
    printf("%d\n", ptr->data);
}
int main() {
    struct node* n1 = (struct node*)malloc(sizeof(struct node));
    struct node* n2 = (struct node*)malloc(sizeof(struct node));
    struct node* n3 = (struct node*)malloc(sizeof(struct node));
    struct node* n4 = (struct node*)malloc(sizeof(struct node));

    n1->data = 10;
    n1->prev = NULL;
    n1->next = n2;

    n2->data = 11;
    n2->prev = n1;
    n2->next = n3;

    n3->data = 12;
    n3->prev = n2;
    n3->next = n4;

    n4->data = 13;
    n4->prev = n3;
    n4->next = NULL;

    tranverse(n1);

    return 0;
}