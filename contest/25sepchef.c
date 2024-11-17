// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if (a <= 60)
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdio.h>

int main()
{
    // your code goes here
    int T, x, y, z;
    scanf("%d", &T);
    for (int i = 1;i<=T ; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (y - x == z - y)
        {
            printf("0\n");
        }
        else
            printf("1\n");
        x = 0;
        y = 0;
        z = 0;
    }
    return 0;
}


