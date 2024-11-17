/*Write a program to determine the given number is (a) Armstrong, (b) Palindrome, (c)
perfect number.*/

// perfect num
#include <stdio.h>
#include <math.h>
int checkperfect(int n)
{
    int m = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        if (n == pow(i, 2))
        {
            m++;
            break;
        }
    }

    if (m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    if (checkperfect(n))
    {
        printf("yes , it is a perfect number");
    }
    else
    {
        printf("no, it is not a perfect number");
    }

    return 0;
}