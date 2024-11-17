#include <stdio.h>
int main()
{
    int c = 0;
    int m = 0;
    int a[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > j)
            {
                if (a[i][j] == 0)
                {

                    c = c + 1;
                }
            }
            else if (j > i)
            {
                if (a[i][j] == 0)
                {

                    m = m + 1;
                }
            }
        }
    }

    int sum = 0;
    for (int i = 1; i < 3; i++)
    {
        sum = sum + i;
    }

    if (sum == c)
    {
        printf("the matrix is upper triangular\n");
    }

    // int sum1 = 0;
    // for (int i = 1; i < 3; i++)
    // {
    //     sum1 = sum1 + i;
    // }

    if (sum == m)
    {
        printf("the matrix is lower  triangular\n");
    }

    return 0;
}