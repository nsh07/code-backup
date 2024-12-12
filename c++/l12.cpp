#include <iostream>
using namespace std;
int main() {
    // insertion sorting
    int a[5] = {8, 2, 1, 3, 4};
    int temp, j;
    for (int i = 1; i < 5; i++) {
        temp = a[i];
        j = (i - 1);
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }

    // selection sorting

    return 0;
}