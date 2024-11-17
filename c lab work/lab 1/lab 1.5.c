#include <stdio.h>

void main()
{
    int a;
    printf("enter your number");
    scanf("%d", &a);
    if (a >= 70 && a <= 100)
    {
        printf("Distinction");
    }
    else if (a >= 60 && a <= 69)
    {
        printf("first class");
    }
    else if (a >= 50 && a <= 59)
    {
        printf("second class");
    }
    else if (a >= 40 && a <= 49)
    {
        printf("third class");
    }
    else if (a >= 0 && a <= 39)
    {
        printf("fail");
    }
    else
    {
        printf("you are absent in exam");
    }
}
