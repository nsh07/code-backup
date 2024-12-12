#include <stdio.h>
int main() {
    // insertion sorting
    /* int a[5] = {8, 2, 1, 3, 4};
    int temp, j;
     for (int i = 1; i < 5; i++) {
         temp = a[i];
         j = (i - 1);
         while (j >= 0 && a[j] > temp) {
             a[j + 1] = a[j];
             j--;
         }
         a[j + 1] = temp;
     }
     for (int i = 0; i < 5; i++) {
         printf("%d\n", a[i]);
     }*/

    // selection sorting

    int a[5] = {8, 2, 1, 3, 4};

    for (int i = 0; i < 4; i++) {
        int min = i;
        int j;
        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            int c = a[i];
            a[i] = a[min];
            a[min] = c;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}