#include <stdio.h>
int main() {
    int n, k, count;
    scanf("%d%d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            break;
        }

        else if (arr[i] > k) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
// #include <stdio.h>

// int main() {
//     int n, k, count;
//     scanf("%d%d", &n, &k);
//     for (int i = 0; i < n; i++) {
//         int m = 0;
//         scanf("%d", &m);
//         if (m > k) {
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }