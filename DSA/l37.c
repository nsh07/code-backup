#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char* arr;
};

int operator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/') {
        return 1;
    }

    else {
        return 0;
    }
}
int precendence(char c) {
    if (c == '*' || c == '/') {
        return 3;
    } else if (c == '+' || c == '-') {
        return 2;
    } else
        return 0;
}

char pop(struct stack** sp) {
    if ((*sp)->top == -1) {
        printf("Stack underflow");

        return -1;
    } else {
        char k = (*sp)->arr[(*sp)->top];
        (*sp)->top--;
        return k;
    }
}
void push(struct stack** sp, char c) {
    if ((*sp)->top == (*sp)->size - 1) {
        printf("Stack Overflow");
    } else {
        (*sp)->top++;
        (*sp)->arr[(*sp)->top] = c;
    }
}

char stacktop(struct stack** sp) { return (*sp)->arr[(*sp)->top]; }

int isempty(struct stack** sp) {
    if ((*sp)->top == -1) {
        return 1;
    }
    return 0;
}

char* infixtopostfix(char* infix) {
    struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char*)malloc((sp->size) * sizeof(char));
    char* postfix = (char*)malloc((strlen(infix) + 1) * sizeof(char));

    int i = 0;  // for infix tranversal
    int j = 0;  // for postfix addition

    while (infix[i] != '\0') {
        if (!operator(infix[i])) {
            postfix[j] = infix[i];
            j++;
            i++;

        } else {
            if (precendence(infix[i]) > precendence(stacktop(&sp))) {
                push(&sp, infix[i]);
                i++;
            } else {
                postfix[j] = pop(&sp);
                j++;
            }
        }
    }
    while (!isempty(&sp)) {
        postfix[j] = pop(&sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main() {
    char* infix = "x-y/z-k*d";
    printf("The postfix equation is : %s", infixtopostfix(infix));

    return 0;
}