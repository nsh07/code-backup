#include <stdio.h>
 #include <math.h>

// int pow(int a, int b)
// {int k ;
//     for (int i = 0; i <= b; i++)
//     {
//         k *= 2;
//     }
//     return k;
// }
int main()
{
    int a[6] = {1, 0, 0, 1, 0, 1};

    int s[6];
    for (int i = 0; i < 6; i++)
    {
        s[i] = a[5 - i];
        printf("%d is %d\n", i, s[i]);
    }

    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += s[i] * pow(2, i);
    }
    printf("%d", sum);

    return 0;
}
