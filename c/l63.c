#include <stdio.h>
int checkp(int arr[])
{
    int m = 0;
    int n = sizeof(arr)/sizeof(int);
    int rarr[n];
    for (int i = 0; i < n; i++)
    {
        rarr[i] = arr[n - i-1];
    }
    for (int i = 0; i < n; i++)
    {
        if (rarr[i] == arr[i])
        {
            m++;
        }
    }
    if (m == n)
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
    int arr[10];
     printf("enter num\n");
    for (int i = 0; i < 3; i++)
    {
      
    scanf("%d", (arr+i));
    }
    
    
    if (checkp(arr)==1)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

    return 0;
}