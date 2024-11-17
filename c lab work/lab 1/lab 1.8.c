/*Write a program to determine whether letter is small, capital, digit or special symbol.*/
#include <stdio.h>

int main()
{
    char k;
    printf("enter letter\n");
    scanf("%c", &k);

    if (65 <= k && k <= 90)
    {
        printf("it is a capital letter");
    }

    else if (97 <= k && k <= 122)
    {
        printf("it is a small letter");
    }
    else if (48 <= k && k <= 57)
    {
        printf("it is a digit");
    }

    return 0;
}
