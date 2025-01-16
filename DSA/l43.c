#include <stdio.h>
#include <stdlib.h>

struct circularqueue {
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct circularqueue* ptr) {
    if (ptr->r == ptr->f) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct circularqueue* ptr) {
    if ((ptr->r + 1) % ptr->size == ptr->f) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(struct circularqueue* ptr, int val) {
    if (isFull(ptr)) {
        printf("Queue Overflow!\n");
    } else {
        ptr->r = (ptr->r + 1) % ptr->size;
        ptr->arr[ptr->r] = val;
        printf("Enqueued element:%d\n", val);
    }
}
int dequeue(struct circularqueue* ptr) {
    int k = -1;
    if (isEmpty(ptr)) {
        printf("Queue Underflow!\n");

    } else {
        ptr->f = (ptr->f + 1) % ptr->size;
        k = ptr->arr[ptr->f];
    }
    return k;
}

int main() {
    struct circularqueue q;
    q.size = 3;
    q.f = q.r = 0;
    q.arr = (int*)malloc(q.size * sizeof(int));
    if (isEmpty(&q)) {
        printf("Queue is Empty!\n");
    }
    enqueue(&q, 10);
    enqueue(&q, 11);
    printf("Dequeued element:%d\n", dequeue(&q));
    printf("Dequeued element:%d\n", dequeue(&q));

    if (isEmpty(&q)) {
        printf("Queue is Empty!\n");
    }
    if (isFull(&q)) {
        printf("Queue is Full!\n");
    }

    return 0;
}