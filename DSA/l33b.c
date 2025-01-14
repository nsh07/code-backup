#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    char* str;
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
void push(struct stack* ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    } else {
        ptr->top++;
        ptr->str[ptr->top] = val;
    }
}

char pop(struct stack* sp) {
    if (isEmpty(sp)) {
        printf("Stack Underflow\n");
    } else {
        char k = sp->str[sp->top];
        sp->top--;
        return k;
    }
}
int parentthesisMatch(char* exp) {
    struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->str = (char*)malloc(sp->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') {
            push(sp, '(');
        } else if (exp[i] == ')') {
            if (isEmpty(sp)) {
                return 0;
            }

            pop(sp);
        }
    }

    if (isEmpty(sp)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char* exp = "(3*2)";
    if (parentthesisMatch(exp)) {
        printf("Balanced Expression");
    } else {
        printf("UnBalanced Expression");
    }

    return 0;
}