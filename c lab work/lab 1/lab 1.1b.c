// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int a, b;
    printf("enter the first side");
    scanf("%d", &a);
    printf("enter the second side");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;

    // int c = a + b;
    // a = c - a;
    // b = c - a;
    printf("%d\n%d", a, b);

    return 0;
}
