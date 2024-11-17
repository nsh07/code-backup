#include <stdio.h>

int main()
{
    int a = 4;
    float b = 4.6;
    void *ptr;
   ptr = &a;
   
  // int* k = (int*)ptr;
  printf("the value of a is %d\n", *((int *)ptr ));
   // printf("the value of a is %d\n", *(k));
    ptr = &b;
    printf("the value of b is %f", *((float *)ptr));

    return 0;
}
