#include <stdio.h>

int main()
{
    int n;
    printf("enter your number\n");
    scanf("%d", &n);

    int n_ = n, rev = 0;

    while (n_ > 0)
    {
        rev = rev * 10 + (n_ % 10);
        n_ /= 10;
    }

    if (rev == n)
    {
     printf("num is palindrome");
    }

    else {
        printf("Not palindrome");}

return 0;
}