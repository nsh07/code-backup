#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
    return (number*factorial(number - 1));
    }
}
    int main()
    {
    
        int num;
        printf("enter you number you want the factroial of:\n");
        scanf("%i", &num);
        printf("the factorial of %li is %li\n", num, factorial(num));

        return 0;
    }

