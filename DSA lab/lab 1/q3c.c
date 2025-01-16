#include <stdio.h>
int main() {
    int c = 0;
    int a[3][3] = {{28, 28, 28}, {33, 31, 33}, {29, 31, 29}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j) {
                if (a[i][j] == 0) {
                    c = c + 1;
                }
            }
        }
    }

    int sum = 0;
    for (int i = 1; i < 3; i++) {
        sum = sum + i;
    }

    if (sum == c) {
        printf("the matrix is upper triangular\n");
    }

    else {
        printf("the matrix is not upper triangular\n");
    }
    return 0;
}