#include <stdio.h>
int main()
{
    int c = 0, d = 0, n;

    printf("enter the no of row/column of a sq matrix\n");
    scanf("%d", &n);

    int a[n][n];
    //= {{1, 0}, {0, 1}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the %d %d element of matrix\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                c += a[i][j];
            }
        }
    }
    printf("the sum of left dioagonal elements is %d\n", c);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == (n - 1))
            {
                d += a[i][j];
            }
        }
    }
    printf("the sum of right dioagonal elements is  %d\n", d);

    return 0;
}