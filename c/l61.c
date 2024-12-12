// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int a[5]= {1,2, 3, 4, 5};
//     int b[5] = {1, 2, 3, 4,  5};
//     int c[5];
//     printf("the element of c is\n");
//     for (int i = 0; i < 5; i++)
//     {
//         c[i] = a[i]+b[i];

//         printf(" %d\t", c[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int m, n, sum = 0;
    // c is result
    int a[2][2], b[2][2], c[2][2];
    printf("enter your first matrix\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // printf("enter the %d %d element of first matrix\n", i, j);

            scanf("%d", &a[i][j]);
        }
    }
    printf("enter your second matrix\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // printf("enter the %d %d element of first matrix\n", i, j);

            scanf("%d", &b[i][j]);
        }
    }
    /* a[2][3];
     b[3][4]; (  i=2,j=4,k=3  ), k ka value common wala hoga
     */

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;

            sum = 0;
        }
    }
    printf("the  c matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // print result
            //  printf("the  c matrix is:\n");
            printf("%d\t", c[i][j]);  // \t print extra tab or gap
        }
        printf("\n");
    }

    return 0;
}
