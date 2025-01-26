// it contains the code of q2.a , q2.b , q2.g

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

void transverse(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int length(struct node *ptr) {
    int m = 0;
    while (ptr != NULL) {
        m++;
        ptr = ptr->next;
    }
    return m;
}
void countevenodd(struct node *ptr) {
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

// insertion
// Case 1
struct node *insertatbeg(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}

// Case 2
struct node *insertatindex(struct node *head, int index, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    int i = 1;

    struct node *p = head;
    while (i < index - 1) {
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
    int i = 1;
    while (i < index - 1) {
        p = p->next;
        q = q->next;
        i++;
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

// Sorting
struct node *sorting(struct node *head) {
    struct node *ptr;
    struct node *ptr1;
    for (ptr = head; ptr->next != NULL; ptr = ptr->next) {
        for (ptr1 = ptr->next; ptr1 != NULL; ptr1 = ptr1->next) {
            if (ptr->data > ptr1->data) {
                int data = ptr1->data;
                ptr1->data = ptr->data;
                ptr->data = data;
            }
        }
    }
    return head;
}

void Duplicate(struct node *head) {
    // Duplicate element
    struct node *ptr;
    struct node *ptr1;
    for (ptr = head; ptr->next != NULL; ptr = ptr->next) {
        for (ptr1 = ptr->next; ptr1 != NULL; ptr1 = ptr1->next) {
            if (ptr->data == ptr1->data) {
                printf("Duplicate of %d is found\n", ptr->data);
            }
        }
    }
}

int main() {
    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));
    struct node *n3 = (struct node *)malloc(sizeof(struct node));
    struct node *n4 = (struct node *)malloc(sizeof(struct node));
    struct node *n5 = (struct node *)malloc(sizeof(struct node));

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    n1->data = 8;
    n2->data = 4;
    n3->data = 7;
    n4->data = 8;
    n5->data = 10;

    struct node *ptr1 = n1;
    int l = length(ptr1);
    printf("The length of the linked list is %d\n", l);
    countevenodd(ptr1);

    // ptr1 =insertatbeg(ptr1,10);l++;
    ptr1 = insertatindex(ptr1, 3, 19);
    l++;
    // ptr1 =insertatindex(ptr1,(l/2+1),21);l++;
    // ptr1 =insertatend(ptr1,13);l++;
    transverse(ptr1);
    // ptr1=deletefirst(ptr1);l--;
    // ptr1=deletelast(ptr1);l--;
    // ptr1=deleteindex(ptr1,3);l--;
    ptr1 = deleteindex(ptr1, (l / 2 + 1));
    l--;
    transverse(ptr1);
    ptr1 = sorting(ptr1);
    transverse(ptr1);
    transverse(ptr1);

    return 0;
}
