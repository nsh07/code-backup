/*Write a program to print all the prime numbers between 1 to 1000*/
#include <stdio.h>

int main()
{
    int c = 0;
    printf("enter the number till you want prime number\n");
    scanf("%d", &c);
    int m = 0;
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                m++;
            }
        }
        if (m == 2)
        {
            printf("%d\n", i);
        }
        m = 0;
    }

    return 0;
}
