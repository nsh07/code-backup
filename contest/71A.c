#include <stdio.h>
#include <string.h>
int main() {
    char s[100];

    int k;
    scanf("%d", &k);
    while (k--) {
        scanf("%s", s);

        int n = strlen(s);
        // printf("%d", n);
        if (n <= 10) {
            printf("%s\n", s);
        } else {
            printf("%c%d%c\n", s[0], n - 2, s[n - 1]);
        }
    }

    return 0;
}