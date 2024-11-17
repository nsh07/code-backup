#include <stdio.h>

int main()
{
    //int a = 100;
    //int b = 2000;
     
    // int *c = &a;
   // int *d = &b;
    int a[]= {50,40, 60, 10, 30 ,20};
    int *b []={a,a+1,a+4,a+3,a+2,a+5};
    int **c=b;
    //float div = (1.0*(*c) / (*d)); both can perform
     //float div = ((float) (*c) / (*d));
    //int sum = (*c + *d);
   // int sub = (c - d);
   // int mul = (*c * *d);

   for (int i = 0; i < 5; i++)
   {
    printf("%d\t",*(b+i));
   }
   
    printf("--%d\n",c);
    printf("%d\n", b);
    printf("%d\n",c-b);
    //printf("%f\n", div);
    return 0;
}