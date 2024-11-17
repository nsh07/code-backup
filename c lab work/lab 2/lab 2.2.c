/*Write a C program to print the all the Fibonacci series between the given range from 100
to 200. */
#include <stdio.h>
int main()
{
    int pre = 0;
    int cu = 1;
    int next = 1;
    while (next <= 200)
    {
        /*printf("%d ", next);
        pre = cu;
        cu = next;
        next = pre + cu;*/
        if (next <= 100)
        {
            pre = cu;
            cu = next;
            next = pre + cu;
        }
        else
        {
            printf("%d ", next);
            pre = cu;
            cu = next;
            next = pre + cu;
    }
}
return 0;
}