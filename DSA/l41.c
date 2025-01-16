#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct queue* ptr) {
    if (ptr->r == ptr->f) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct queue* ptr) {
    if (ptr->r == ptr->size - 1) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(struct queue* ptr, int val) {
    if (isFull(ptr)) {
        printf("Queue Overflow!\n");
    } else {
        ptr->r++;
        ptr->arr[ptr->r] = val;
        printf("Enqueued element:%d\n", val);
    }
}
int dequeue(struct queue* ptr) {
    int k = -1;
    if (isEmpty(ptr)) {
        printf("Queue Underflow!\n");

    } else {
        ptr->f++;
        k = ptr->arr[ptr->f];
    }
    return k;
}

int main() {
    struct queue q;
    q.size = 2;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size * sizeof(int));
    if (isEmpty(&q)) {
        printf("Queue is Empty!\n");
    }
    // dequeue(&q);
    // printf("%d\n",dequeue(&q));
    enqueue(&q, 10);
    enqueue(&q, 11);
    enqueue(&q, 11);
    printf("Dequeued element:%d\n", dequeue(&q));
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