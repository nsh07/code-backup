#include <stdio.h>
int checkpalindrome(int n)
{
    int original = n;
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
       n =  n / 10;
    }
    if(rev == original)
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
    printf("Program For Palindrone\n");
    printf("enter number\n");
    scanf("%d", &n);

    if( checkpalindrome(n)  == 1)
    {
        printf("Given %d number is a palindrone number", n);
    }
    else
    {
        printf("Given %d number is not a palindrone number", n);
    }

    return 0;
}