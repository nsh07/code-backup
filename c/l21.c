#include <stdio.h>

int factorial(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int k;
    printf("enter the number of which you want factroial\n");
    scanf("%d", &k);
    printf("the factorial is %d", factorial(k));
    return 0;
}
