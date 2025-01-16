#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, num;
    scanf("%d", &num);
    while (num != 0) {
        scanf("%d", &size);
        char str[size + 1];

        scanf("%s", &str);

        for (int i = 0; i < size; i++) {
            if (str[i] == '1') {
                str[i] = '0';
            }
            // else if(str[i]=='0')
            else {
                str[i] = '1';
            }
        }

        printf("%s\n", str);

        num--;
    }

    return 0;
}