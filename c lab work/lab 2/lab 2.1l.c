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
            for (int k = 0; k < i; k++)
            {
                printf(" ");
            }
            for (int j = 4; j >= i; j--)
            {
                if (i == 1)
                {
                    if (j == 2 || j == 3)
                    {
                        printf("  ");
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}