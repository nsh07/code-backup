/*Write a program to perform the swapping of two number using function
 * pointer.*/
#include <stdio.h>
void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

/*int swap1(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    return b,a;//*****function returns one value in c i.e the value of rightmost
place of return , here is a;*****
}*/
int main() {
    void (*ptr)(int *, int *);  // function pointer
    ptr = swap;
    // ptr = &swap;
    int a = 45;
    int b = 92;

    printf("a=%d\n", a);
    printf("b=%d\n", b);

    swap(&a, &b);  // it swaps the value
    //  a = swap1(a, b);
    // (*ptr)(&a, &b); this is also true
    ptr(&a, &b);  // this pointer also points same line of codes ,so it also
    //  reverse the reverse value and we get original value
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    return 0;
}