// Identify the 2nd maximum and minimum marks

#include <stdio.h>

int main() {
    int arr[5] = {3,2,4,1,5};
    int min = arr[0];
    int secmin = arr[0];
    int max = arr[0];
    int secmax = arr[0];
    for (int i = 0; i < 5; i++) {
        if (arr[i] < min) {
            secmin = min;
            min = arr[i];
        } else if (arr[i] < secmin) {
            secmin = arr[i];
        }
       
        if (arr[i] > max) {
            secmax = max;
            max = arr[i];
        } else if (arr[i] > secmax) {
            secmax = arr[i];
        }
       
        
    }
    printf("%d\n",secmin);
    printf("%d\n",secmax);

    return 0;
}