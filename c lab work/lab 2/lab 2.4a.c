/*Write a program to determine the given number is (a) Armstrong, (b) Palindrome, (c)
perfect number.*/

// armstrong num
#include <stdio.h>
#include <math.h>
int checkarmstrong(int n)
{
    int orginal = n;
    int sum = 0;
    int k = 0;
    while (n != 0)
    {
        k = n % 10;
        sum += pow(k, 3);
        n = n / 10;
    }
    if (orginal == sum)
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

    if (checkarmstrong(n))
    {
        printf("yes , it is a armstrong number");
    }
    else
    {
        printf("no, it is not a armstrong number");
    }

    return 0;
}