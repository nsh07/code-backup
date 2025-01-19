#include <stdio.h>
void printarray(int* a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void selectionsort(int* a, int n) {
    int indexofmin, temp;
    for (int i = 0; i < n - 1; i++) {
        indexofmin = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[indexofmin]) {
                indexofmin = j;
            }
        }
        if (indexofmin != i) {
            // Swap A[i] and A[indexOfMin]
            temp = a[indexofmin];
            a[indexofmin] = a[i];
            a[i] = temp;
        }
    }
}

int main() {
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13

    int arr[] = {4, 2, 6, 7, 5};
    int n = 5;
    printarray(arr, n);
    selectionsort(arr, n);
    printarray(arr, n);
    return 0;
}