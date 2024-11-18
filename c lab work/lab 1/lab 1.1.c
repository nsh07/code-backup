#include <stdio.h>
int main() {
    int a, b, c;
    printf("enter the first side\n");
    scanf("%d", &a);
    printf("enter the second side\n");
    scanf("%d", &b);
    printf("enter the third side\n");
    scanf("%d", &c);
    if (a + b < c || b + c < a || c + a < b) {
        printf("triangle is not possible");
    } else {
        if (a == b && b == c) {
            printf("triangle is equilateral");
        } else if (a == b && b != c) {
            printf("triangle is isoscles");
        } else {
            printf("scalane traingle");
        }
    }
    return 0;
}
