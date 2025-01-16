#include <stdio.h>

int main() {
    int a[3][3] = {{28, 28, 28}, {33, 31, 33}, {29, 31, 29}};
    int b[3][3];
    int* ptr = &b[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(ptr + 3 * j + i) = a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}