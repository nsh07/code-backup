#include <stdio.h>
int main() {
    int c = 0, d = 0;

    int a[3][3] = {{28, 28, 28}, {33, 31, 33}, {29, 31, 29}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                c += a[i][j];
            }
        }
    }
    printf("The sum of left diagonal elements is %d\n", c);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == (3 - 1)) {
                d += a[i][j];
            }
        }
    }
    printf("The sum of right diagonal elements is  %d\n", d);

    return 0;
}