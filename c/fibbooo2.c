#include <stdio.h>
void main()
{
    int a = 0, b = 1, c;
    printf("fibonnaccci series bet 100 and 200 : \n");
    while (b <= 200)
    {
        if (b >= 100)
        {
            printf("%d", b);
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}