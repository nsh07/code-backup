/*Write a program in C to check whether a number is a prime number or not using the
following types of function such as:
c) Without argument and return type*/


#include <stdio.h>
int n;
int check()
{
    int m;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            m = m + 1;
        }
    }
    return m;
}

int main()
{

    printf("enter nu\n");
    scanf("%d", &n);

    int k = check();

    if (k == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
    return 0;
}