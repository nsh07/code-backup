#include <stdio.h>

int main()
{
    // A P = 1,2,3,4,5,6,7,8,9,10
    int a, l, n;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &l);
    int y = n/2;
    int k = (a + l)*n/2;
    // int k = (a + l)y;
    printf("sum is %d", k);

    return 0;
}
