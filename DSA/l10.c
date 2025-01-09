#include <stdio.h>

void display(int arr[], int size) {
    // Tranverse an array
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int capacity, int element, int index) {
    // Code for Insertion
    if (size >= capacity) {
        return -1;
    }
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

    return 1;
}
int main() {
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, capacity = 100;
    int element = 45, index = 4;
    // display(arr, size);
    if (indInsertion(arr, size, capacity, element, index) == 1) {
        size++;
        printf("Insertion Sucessful\n");
        display(arr, size);
    } else {
        printf("Not Inserted");
    }
    return 0;
}