#include <stdio.h>
int main()
{
    int k, l;
    int a[5] = {1, 2, 3, 8, 2};
    k = a[0];
    for (int i = 0; i < 5; i++)
    {
        int l = a[i];
        if (k < l)
        {
            k = l;
        }
    }
    printf("the largest value is %d", k);

    return 0;
}