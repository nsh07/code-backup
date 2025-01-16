#include <stdio.h>
int main() {
    int m, n, sum = 0;
    int a[2][2] = {{5, 6}, {7, 8}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int c[2][2];
    printf("The element of c after addition is\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    printf("The element of c after substraction is\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    printf("The element of c after multiplication is\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;

            sum = 0;
        }
    }
    printf("The  c matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}