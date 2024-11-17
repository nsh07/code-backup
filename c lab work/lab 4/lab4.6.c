// Implement linear search algorithm to identify the key element is present in array or not

#include <stdio.h>
int main()
{
    // { int n;
    //     printf("enter length of array\n");
    //     scanf("%d", &n);
    int a[5] = {1, 2, 8, 4, 6};
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter the %d element of array\n", i + 1);
    //     scanf("%d", &a[i]);
    // }
    // int key;
    // printf("enter key element\n");
    // scanf("%d", &key);
    //int key = 7;
    int key =6;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            printf("the key element is at %d position of array\n ", i + 1);
        }

        else if (i == 4)
        {
            printf("the key element is not present in array\n ");
        }
    }
    return 0;
}