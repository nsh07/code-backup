#include<stdio.h>
int fib(int n)
{
    int a=0;
    int b=1;
    for (int i = 0; i <n-1; i++)
    {
        b =a+b;
        a =b-a;
    }
    return a;

}
int main()
{
   int n;
   printf("enter your number\n");
   scanf("%d",&n);
   printf ("the value of fib series of %d number is %d\n",n,fib());
    return 0;
}
