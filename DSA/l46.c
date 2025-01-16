#include <stdio.h>
#include <stdlib.h>
struct stack {
    int data;
    struct stack* next;
};
struct stack* f = NULL;
struct stack* r = NULL;
void linkedlisttransversal(struct stack* f) {
    printf("Printing all elements\n");
    while (f != NULL) {
        printf("Element : %d\n", f->data);
        f = f->next;
    }
}

int isFull(struct stack* ptr) {
    if (ptr == NULL) {
        return 1;
    }
    return 0;
}
int isEmpty(struct stack* f) {
    if (f == NULL) {
        return 1;
    }
    return 0;
}

void enqueue( int val) {
    struct stack* ptr = (struct stack*)malloc(sizeof(struct stack));
    if (isFull(ptr)) {
        printf("Queue is Full1!\n");
    } else {
        ptr->data = val;
        ptr->next = NULL;
        if (isEmpty(f)) {
            f = r = ptr;
        } else {
            r->next = ptr;
            r = ptr;
        }
    }
}
int dequeue(){
    int val=-1;
    if (isEmpty(f))
    {
        return val;
    }
    else{
        struct stack* k = f;
        f =f->next;
         val = k->data;
         free(k);
    }
    return val;
}

int main() {
    linkedlisttransversal(f);
    enqueue( 4);
    enqueue( 5);
    enqueue( 6);
    linkedlisttransversal(f);
    printf("Dequeue element:%d\n",dequeue());
    printf("Dequeue element:%d\n",dequeue());
    printf("Dequeue element:%d\n",dequeue());
    printf("Dequeue element:%d\n",dequeue());
    return 0;
}