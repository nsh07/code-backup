#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr; //= NULL;// this a wild pointer
    //*ptr =34;// this is not good thing to do, here you got undefined behaviour depend on compiler and articheture
    ptr = &a;//ptr ab wild pointer nahi hai brother
    printf("%d", *ptr);

    return 0;
}