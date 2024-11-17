#include <stdio.h>

void rev(int a[])
{
     int b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[4 - i];
        printf("the %d element of rev array is %d\n", i, b[i]);
    }

    // return b[i];
}

/*void rev(int a[])
{
    
    for (int i = 0; i < 5/ 2; i++)
    {
        int temp;
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
       // printf("the %d element of rev array is %d\n", i, a[i]);
    }

    // return a[i];
}*/

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("the %d element of array is %d\n", i, a[i]);
    }
    rev(a);
   /*
    for (int i = 0; i < 5; i++)
    {
        printf("the %d element of rev1 array is %d\n", i, a[i]);
    }*/

    return 0;
}