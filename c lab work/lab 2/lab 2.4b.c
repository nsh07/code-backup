/*Write a program to determine the given number is (a) Armstrong, (b) Palindrome, (c)
perfect number.*/

// palindrome num
#include <stdio.h>
#include <math.h>
int checkpalindrome(int n)
{
    int orginal = n;
    int rev = 0;
    int k = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (orginal == rev)
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

    if (checkpalindrome(n))
    {
        printf("yes , it is a palindrome number");
    }
    else
    {
        printf("no, it is not a palindrome number");
    }

    return 0;
}