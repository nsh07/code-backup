#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 12;

    // Linear Search
    int l;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            l++;
        }
    }
    if (l) {
        printf("Key element found\n");
    } else {
        printf("Key element not found\n");
    }

    // Binary Search
    int low = 0;
    int high = 4;
    int mid = 0;
    int temp = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            temp++;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (temp) {
        printf("Key element found\n");
    } else {
        printf("Key element not found\n");
    }

    return 0;
}