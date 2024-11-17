#include <stdio.h>
int main()
{
    int m = 0, k = 0, n;
    printf("enter the size of array\n");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element of array\n", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            m = m + 1;
        }

        else
        {
            k = k + 1;
        }
    }
    printf("the total even number %d\n", m);
    printf("the total odd number is %d\n", k);

    return 0;
}