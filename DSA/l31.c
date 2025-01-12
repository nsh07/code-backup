#include <stdio.h>
#include <stdlib.h>
struct stack {
    int data;
    struct stack *next;
};
struct stack *top = NULL;

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

int pop(struct stack *tp) {
    if (isEmpty(tp)) {
        printf("Stack underflow");
    } else {
        struct stack *p = tp;
        top = (tp)->next;
        int data = p->data;
        free(p);
        return data;
    }
}

int peek(int position) {
    struct stack *ptr = top;
    for (int i = 0; (i < position - 1 && ptr != NULL); i++) {
        ptr = ptr->next;
    }
    if (ptr != NULL) {
        return ptr->data;
    } else {
        return -1;
    }
}

int main() {
    // struct stack *top = (struct stack *)malloc(sizeof(struct stack));
    printf("Empty : %d\n", isEmpty(top));
    printf("Full: %d\n", isFull());

    top = push(top, 57);
    top = push(top, 67);
    top = push(top, 77);
    top = push(top, 87);

    linkTransversal(top);

    for (int i = 1; i <= 4; i++) {
        printf("the value at position %d is %d\n", i, peek(i));
    }

    return 0;
}