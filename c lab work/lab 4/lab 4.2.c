//Find the sum of natural numbers using the concept of recursion.
#include <stdio.h>
int sum = 0;
int rn(int k)
{
    if (k > 0)
    {
        sum = k + rn(k - 1);
    }
    return sum;
}

int main()
{
    int n;
    printf("enter the nu\n");
    scanf("%d", &n);
    int c = rn(n);
    printf("the sum is %d", c);
    return 0;
}