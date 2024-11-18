/*Write a program in C to check whether a number is a prime number or not using
the following types of function such as: a) With argument and no return type*/

#include <stdio.h>
/*void check(int k)
{
    int m;
    for (int i = 1; i <= k; i++)
    {
        if (k % i == 0)
        {
            m = m + 1;
        }
    }

    if (m == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}*/

void check(int n);  // this is called function prototype
int main() {
    int n;
    printf("enter nu\n");
    scanf("%d", &n);
    check(n);
    return 0;
}
void check(int k) {
    int m;
    for (int i = 1; i <= k; i++) {
        if (k % i == 0) {
            m = m + 1;
        }
    }

    if (m == 2) {
        printf("prime number");
    } else {
        printf("not prime number");
    }
}