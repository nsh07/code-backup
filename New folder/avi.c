#include <stdio.h>

int span() {
    int a = 10, b = 20, c = 50;
    // return a;
    return a, b, c;
}

int main() {
    int c = span();
    printf("%d", c);
    return 0;
}