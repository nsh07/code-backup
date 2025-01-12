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

void push(struct stack* ptr, int val) {
    if (isFull(ptr)) {
        printf("Stack overflow , %d can not push\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr) {
    if (isEmpty(ptr)) {
        printf("Stack underflow ");
    } else {
        int temp = ptr->arr[ptr->top];
        ptr->top--;
        return temp;
    }
}

int peek(struct stack* ptr, int position) {
    int arrindex = ptr->top - position + 1;
    if (arrindex < 0) {
        printf("Not a Vaid position of stack");
        return -1;
    } else {
        return ptr->arr[arrindex];
    }
}
int stackTop(struct stack* ptr) { return ptr->arr[ptr->top]; }
int stackBottom(struct stack* ptr) { return ptr->arr[0]; }

int main() {
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));
    printf("Before pushing ,FUll: %d\n", isFull(s));
    printf("Before pushing ,empty: %d\n", isEmpty(s));
    push(s, 1);
    push(s, 11);
    push(s, 4);
    push(s, 15);
    push(s, 19);
    push(s, 25);
    push(s, 89);
    push(s, 46);
    push(s, 37);
    push(s, 77);
    push(s, 14);
        printf("The Topmost value of stack is %d\n" ,stackTop(s));
        printf("The Bottommost value of stack is %d\n" ,stackBottom(s));
    // for (int i = 1; i <= s->top; i++)
    // {
    //     printf("the value at poition %d is %d\n", i,peek(s,i));
    // }

    return 0;
}