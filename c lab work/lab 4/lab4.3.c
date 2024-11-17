/*Write a program to perform the swapping operation between two numbers using call by
value and call by reference.*/



#include <stdio.h>
/*void swap1(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;

    printf(" value of a is %d\n", a);
    printf("value of b is %d\n", b);
}*/
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;

    printf(" value of a is %d\n ", *a);
    printf("value of b is %d\n", *b);
}

int main()
{
    int a, b;
    printf("enter two number whom you want to swap\n");
    scanf("%d", &a);
    scanf("%d", &b);
    swap(&a, &b);
    // swap(a, b);
    return 0;
}