#include <stdio.h>

int main()
{
    int m;
    for (int i = 100; i < 200; i++)
    {
        if (i % 9 == 0)
        {
            printf("%d\n", i);
            m += i;
        }
    }
    printf("sum is %d", m);

    return 0;
}
