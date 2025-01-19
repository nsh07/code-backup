// it contains the code of q2.a , q2.b , q2.g

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};

void transverse(struct node* ptr) {
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int length(struct node* ptr) {
    int m = 0;
    while (ptr != NULL) {
        m++;
        ptr = ptr->next;
    }
    return m;
}
void countevenodd(struct node* ptr) {
    int even = 0, odd = 0;
    while (ptr != NULL) {
        if (ptr->data % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        ptr = ptr->next;
    }
    printf("The number of even element is %d\n", even);
    printf("The number of odd element is %d\n", odd);
}
int main() {
    struct node* n1 = (struct node*)malloc(sizeof(struct node));
    struct node* n2 = (struct node*)malloc(sizeof(struct node));
    struct node* n3 = (struct node*)malloc(sizeof(struct node));
    struct node* n4 = (struct node*)malloc(sizeof(struct node));
    struct node* n5 = (struct node*)malloc(sizeof(struct node));

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    n1->data = 3;
    n2->data = 4;
    n3->data = 7;
    n4->data = 9;
    n5->data = 11;

    struct node* ptr1 = n1;
    transverse(ptr1);
    printf("The length of the linked list is %d\n", length(ptr1));
    countevenodd(ptr1);
    return 0;
}
