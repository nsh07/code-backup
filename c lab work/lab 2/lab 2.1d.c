
#include <stdio.h>
int main()
{
    for (int i = 0; i < 6; i++)
    {
        if (i == 2)
        {
            continue;
        }
        else
        {
            for (int j = 5; j >= i; j--)
            {

                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}