#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        else
        {

            for (int z = 4; z >= i; z--)
            {
                printf(" ");
            }
            for (int j = 0; j <=i; j++)
            {
                if (i == 3)
                {
                    if (j == 1 || j == 2)
                    {
                        printf("  ");
                    }
                    else{
                        printf("* ");
                    }
                }
                else
                {
                    printf("* ");
                }
            }
        }

        printf("\n");
    }
    return 0;
}