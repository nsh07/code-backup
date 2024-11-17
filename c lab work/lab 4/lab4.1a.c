/*Write a program in C to check whether a number is a prime number or not using the
following types of function such as:
d) With argument and return type*/

#include <stdio.h>
int check(int k)
{
    int m;
    for (int i = 1; i <= k; i++)
    {
        if (k % i == 0)
        {
            m = m + 1;
        }
    }
    return m;
}

int main()
{
    int n;
    printf("enter nu\n");
    scanf("%d", &n);

   // int k = check(n); // this can also executed

    if (check(n) == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
    return 0;
}