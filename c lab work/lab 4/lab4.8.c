/*Write a program to sort the elements of array in ascending order using
 * selection sort.*/

#include <stdio.h>

int min;

int j;

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}
void ss(int a[]) {
    for (int i = 0; i < 4; i++) {
        min = i;
        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        if (min != i) {
            swap(&a[i], &a[min]);
        }
    }
}

int main() {
    int a[5] = {1, 2, 8, 4, 5};

    ss(a);

    for (int k = 0; k < 5; k++) {
        printf(" %d\t", a[k]);
    }

    return 0;
}

/*Write a program to sort the elements of array in ascending order using
 * insertion short*/