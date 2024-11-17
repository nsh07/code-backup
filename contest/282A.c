#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int x = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[5];
        scanf("%s", s);
        if (strcmp(s, "X++") == 0) {
            x++;
        }

        if (strcmp(s, "++X") == 0) {
            ++x;
        } else if (strcmp(s, "X--") == 0) {
            x--;
        } else if (strcmp(s, "--X") == 0) {
            --x;
        }
    }
    printf("%d", x);

    return 0;
}
