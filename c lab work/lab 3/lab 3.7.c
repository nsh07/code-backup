#include <stdio.h>
int main() {
    int c = 0;
    int m = 0;
    int k;
    int a[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    // int a[3][3] = {{1, 0, 0}, {0, 1, 0}, {1, 0, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j) {
                if (a[i][j] == 0) {
                    c = c + 1;
                }
            } else if (j > i) {
                if (a[i][j] == 0) {
                    m = m + 1;
                }
            }

            else if (a[i][j] == 1) {
                k = k + 1;
            }
        }
    }

    int sum = 0;
    for (int i = 1; i < 3; i++) {
        sum = sum + i;
    }

    if (c == m && k == 3) {
        printf("yes it is a identty matrix\n");
    } else {
        printf("it is not a identity martix");
    }

    return 0;
}