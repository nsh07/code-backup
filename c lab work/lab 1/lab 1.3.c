#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter values");
    scanf("%d%d%d", &a, &b, &c);
    if (c > b && b > a)
    {
        printf("%d", c);
    }
    else if (b > a)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", a);
    }

    return 0;
}