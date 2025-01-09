#include <stdio.h>
int linearsearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }

    return -1;
}

int binarysearch(int arr[], int size, int element) {
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high) {
        // Keep Searching until low and high converges
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            return mid;
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        return -1;
    }
}
int main() {
    // unsorted array for linersearch
    // int arr[] = {1, 3, 43, 45, 5, 32, 445, 32};
    // int size = sizeof(arr) / sizeof(int);
    // int element = 45;
    // int index = linearsearch(arr, size, element);

    // sorted array for binarysearch
    int arr[] = {1, 3, 43, 45, 55, 82, 95, 132};
    int size = sizeof(arr) / sizeof(int);
    int element = 455;
    int index = binarysearch(arr, size, element);
    printf("the %d found at %d ", element, index);

    return 0;
}