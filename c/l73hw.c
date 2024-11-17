#include <stdio.h>
int a, b;
float avg(int a, int b)
{
    return 0.1* (a+b)*10/2;
}

void greetgoodeevening(float (*fptr)(int, int))
{
    printf("good evening\n");
    printf("the average is %f", fptr(a, b));
}
void greetgoodmorning(float (*fptr)(int, int))
{
    printf("goodmorning\n");
    printf("the average is %f", fptr(a, b));
}

int main()
{
    int n;
    printf("enter two numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    float (*fptr)(int, int);
    fptr = avg;
    printf("select 1 or 2\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        greetgoodeevening(fptr);
        break;
    case 2:
        greetgoodmorning(fptr);
        break;

    default:
        break;
    }

    return 0;
}
