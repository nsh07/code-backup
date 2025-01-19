#include <stdio.h>
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSortadaptive(int *arr, int n) {
    int temp, issorted;
    for (int i = 0; i < n - 1; i++)  // For number of pass
    {
        printf("Working on pass number %d\n", i + 1);
        issorted = 1;
        for (int j = 0; j < n - 1 - i; j++)  // For comparison in each pass
        {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                issorted = 0;
            }
        }
        if (issorted) {
            return;
        }
    }
}
void bubbleSort(int *arr, int n) {
    int temp, issorted;
    for (int i = 0; i < n - 1; i++) {
        printf("Working on pass number %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // // int n =10;
    int arr[] = {3, 5, 6, 3, 2, 4};
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printArray(arr, n);
    printArray(arr, n);          // Printing the array before sorting
    bubbleSort(arr, n);          // Function to sort the array
    bubbleSortadaptive(arr, n);  // for sorted array
    printArray(arr, n);          // Printing the array before sorting

    return 0;
}