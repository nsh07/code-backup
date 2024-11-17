/// Convert a binary number to decimal using function.
#include <stdio.h>
int k;
int m;
// int power(int a, int b)
/*{
    if (b == 0)
    {
        return 1;
    }
    else //if (b > 0)
    {
        return a * power(a, b - 1);
    }
}*/

int power(int a, int b)
{
    int c = 2;
    if (b > 0)
    {

        for (int i = 0; i < b - 1; i++)
        {
            c = c * 2;
        }
    }
    else if (b == 0)
    {
        c = 1;
    }
    return c;
}

int main()
{
    int n;

    //   int a[5]= {1, 0, 1, 1, 0};
    printf("enter length of binnary num\n");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       // printf("enter the %d digit of binary number\t", i + 1);
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        sum += a[i] * power(2, n - 1 - i);
    }
    printf("%d", sum);
    return 0;
}

// #include<math.h>

// int main()
// {  int a[5]={1,0,0,1,0};
// int sum=0;
// for (int i = 4; i >=0; i--)
// { //int k =0;

//     sum += a[i]*pow(2,4-i);
//    // k++;
// }

// printf("%d", sum);

//     return 0;

// }