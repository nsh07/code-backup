#include <stdio.h>
int main()
{
    int p, n, q;
   
    printf("enter the size of array\n");
    scanf("%d", &n);
     int g[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element\n", i);
            scanf("%d", &g[i]);
    }
    p = g[0];
    for (int i = 0; i < n; i++)
    {
       int q = g[i];
        if (p < q)
        {
            p = q;
        }
    }
    printf("the largest element is %d", p);
    return 0;
}