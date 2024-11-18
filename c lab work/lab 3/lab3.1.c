#include <stdio.h>
int main() {
    int k1, k2, l;
    int a[] = {1, 2, 3, 8, 2, 10};

    k1 = a[0];  // max
    k2 = a[0];  // min
    for (int i = 1; i < 5; i++) {
        int l = a[i];
        if (k1 < l) {
            k1 = l;
        } else if (l < k2) {
            k2 = l;
        }
    }
    printf("the largest value is %d\n", k1);
    printf("the smallest value is %d", k2);

    return 0;
}