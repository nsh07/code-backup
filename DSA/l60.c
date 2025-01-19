#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
void printarray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int maximum(int a[], int n) {
    int max = INT_MIN;
    printf("%d\n", max);
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("%d\n", max);
    return max;
}
void countsort(int a[], int n) {
    int i, j;

    // Find the maximum element in A
    int max = maximum(a, n);

    // Create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // Initialize the array elements to 0
    for (i = 0; i <= max; i++) {
        count[i] = 0;
    }

    // Increment the corresponding index in the count array
    for (i = 0; i < n; i++) {
        count[a[i]] = count[a[i]] + 1;
    }

    i = 0;  // counter for count array
    j = 0;  // counter for given array A
    while (i <= max) {
        if (count[i] > 0) {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        } else {
            i++;
        }
    }
}

int main() {
    int arr[] = {4, 2, 6, 9, 4};
    int n = 5;
    printarray(arr, n);
    countsort(arr, n);
    printarray(arr, n);
    return 0;
}