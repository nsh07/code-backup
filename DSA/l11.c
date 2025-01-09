#include <stdio.h>

void display(int arr[], int size) {
    // Tranverse an array
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int inddeltion(int arr[], int size, int capacity, int index) {
    // Code for deltion
    if (index > capacity) {
        return -1;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return 1;
}
int main() {
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    int index = 1, capacity = 100;
    // display(arr, size);
    if (inddeltion(arr, size, capacity, index) == 1) {
        size--;
        printf("Deletion Sucessful\n");
        display(arr, size);
    } else {
        printf("Deletion not possible ");
    }
    return 0;
}