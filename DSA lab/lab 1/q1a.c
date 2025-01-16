#include <stdio.h>

int main() {
    int a[10] = {11, 8, 3, 2, 5, 6, 4, 9, 7, 10};

    int tempmax = a[0];
    int tempmin = a[0];
    for (int i = 0; i < 10; i++) {
        if (tempmax < a[i]) {
            tempmax = a[i];
        }
        if (tempmin > a[i]) {
            tempmin = a[i];
        }
    }
    printf("%d\n", tempmax);
    printf("%d\n", tempmin);

    return 0;
}