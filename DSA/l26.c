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
    push(s, 77);  //-->pushed 10 values
    push(s, 14);  // stack overflow since size of the stack is 10
    printf("After pushing ,FUll: %d\n", isFull(s));
    printf("After pushing ,empty: %d\n", isEmpty(s));
    printf("%d popped successfully\n", pop(s));
    printf("%d popped successfully\n", pop(s));
    s->top++;
    printf("%d\n",s->arr[s->top]);/*only top value will change not , not
     delete the value at previous top*/
    return 0;
}