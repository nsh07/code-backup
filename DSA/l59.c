#include <stdio.h>
void printarray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void merge(int a[], int low, int mid, int high) {
    int size = high - low + 1;
    int b[size];
    int i = low;
    int j = mid + 1;
    int k = low;
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
            k++;
        } else {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high) {
        b[k] = a[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++) {
        a[i] = b[i];
    }
}
void mergesort(int a[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        mergesort(a, low, mid );
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    int arr[] = {4, 2, 6, 9,4};
    int n = 5;
    printarray(arr, n);
    mergesort(arr, 0, n - 1);
    printarray(arr, n);
    return 0;
}