#include <stdio.h>
#include <stdlib.h>
struct stack {
    int size;
    int top;
    int* arr;
};
int isEmpty(struct stack* ptr) {
    if (ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct stack* ptr) {
    if (ptr->top == ptr->size - 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=(int*)malloc(s.size*sizeof(int));

    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    /*struct stack* s;without assign address,it can show undefined
    behaviour.*/
    s->size = 80;
    printf("%d\n", s->size);
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    // Pushing an element manually

    s->arr[0] = 10;
    s->top++;

    // Check the stack is empty or not
    if (isEmpty(s)) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    // Check the stack is Full or not
    if (isFull(s)) {
        printf("stack is Full\n");
    } else {
        printf("stack is not Full\n");
    }

    return 0;
}