#include <stdio.h>
#include <stdlib.h>
struct stack {
    int data;
    struct stack *next;
};

void linkTransversal(struct stack *top) {
    while (top != NULL) {
        printf("%d\n", top->data);
        top = top->next;
    }
}

int isEmpty(struct stack *top) {
    if (top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int isFull() {
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));

    if (p == NULL) {
        return 1;
    } else {
        return 0;
    }
}
struct stack *push(struct stack *top, int data) {
    if (isFull()) {
        printf("Stack Overflow");
    } else {
        struct stack *n = (struct stack *)malloc(sizeof(struct stack));
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct stack **top) {
    if (isEmpty(*top)) {
        printf("Stack underflow");
    } else {
        struct stack *p = *top;
        *top = (*top)->next;
        int data = p->data;
        free(p);
        return data;
    }
}

int main() {
    // struct stack *top = (struct stack *)malloc(sizeof(struct stack));
    struct stack *top = NULL;
    printf("Empty : %d\n", isEmpty(top));
    printf("Full: %d\n", isFull());
 
    top = push(top, 57);
    top = push(top, 67);
    top = push(top, 77);
    top = push(top, 87);
    linkTransversal(top);
    int data = pop(&top);
    printf("Popped element : %d\n", data);
    linkTransversal(top);

    printf("Empty : %d\n", isEmpty(top));
    printf("Full: %d\n", isFull());

    return 0;
}