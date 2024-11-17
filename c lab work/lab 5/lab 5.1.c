// Write a C program to create, initialize and use pointers
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    int *c = &a;
    int *d = &b;

    int k = *c;
    *c = *d;
    *d = k;
    printf("the value of a is %d\n", *c);
    printf("the value of b is %d", *d);

    return 0;
}