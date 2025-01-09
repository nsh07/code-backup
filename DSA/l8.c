#include <stdio.h>
#include <stdlib.h>
struct myarr {
    int total_size;
    int used_size;
    int* ptr;
};

void createarr(struct myarr* a1, int b, int c) {
    /* (*a1).total_size = b;
     (*a1).used_size = c;
     (*a1).ptr = (int*)malloc((*a1).used_size * sizeof(int));*/

    a1->total_size = b;
    a1->used_size = c;
    a1->ptr = (int*)malloc((*a1).used_size * sizeof(int));
}
void setval(struct myarr* a1) {
    for (int i = 0; i < (*a1).used_size; i++) {
        scanf("%d", &(*a1).ptr[i]);
    }
}
void getval(struct myarr* a1) {
    for (int i = 0; i < (*a1).used_size; i++) {
        printf("%4d", (*a1).ptr[i]);
    }
}

int main() {
    struct myarr std1;
    createarr(&std1, 5, 2);
    setval(&std1);
    getval(&std1);

    return 0;
}