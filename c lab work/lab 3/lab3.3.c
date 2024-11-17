#include <stdio.h>
int main()
{
    int m, n;
    int c = 0, d = 0;
    printf("Enter no of rows:\n ");
    scanf("%d", &m);
    printf("Enter no of columns:\n");
    scanf("%d", &n);

    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter %d %d element of matrix\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c += a[i][j];
            // printf("the sum is %d",sum);
        }
        printf("the sum of %d row is %d\n", i, c);
        c = 0;
    }

    for (int j = 0; j < n; j++)

    {
        for (int i = 0; i < m; i++)
        {
            d += a[i][j];
            // printf("the sum is %d",sum);
        }
        printf("the sum of %d column is %d\n", j, d);
        d = 0;
    }

    return 0;
}