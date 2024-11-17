/*Write a program in C to check whether a number is a prime number or not using the
following types of function such as:
b) Without argument and no return type*/


#include <stdio.h>
int n;
void check()
{
    int m;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            m = m + 1;
        }
    }
    if (m == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}

int main()
{

    printf("enter nu\n");
    scanf("%d", &n);

    check();
    return 0;
}