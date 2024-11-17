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

    int b[m];
    int c[k];
    int g = 0, e = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            // b[g] == a[i];no need of this
            printf("the %d elemnt of even array is %d\n", g, a[i]);
            g = g + 1;
            g < m;
        }

        else
        {
            printf("the %d elemenet of odd array is %d\n", e, a[i]);
            e = e + 1;
            e < k;
        }
    }

    return 0;
}
