#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            if (i == 2)
            {
                if (k == 1)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            else if (i == 3)
            {
                if (k == 1 || k == 2)
                {
                    printf("  ");
                }

                else
                {
                    printf("* ");
                }
            }
            else if (i == 4)
            {
                if (k == 1 || k == 2 || k == 3)
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

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 4; k > i; k--)

        {
            if (i == 0)
            {
                if (k == 3 || k == 2)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            else if (i == 1)
            {
                if (k == 3)
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

    return 0;
}