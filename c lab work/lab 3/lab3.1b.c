#include <stdio.h>
int main()
{
    int k,l,n;
    printf("enter thse size of array\n");
    scanf("%d",&n);
    int w[n];
    for (int i = 0; i < n; i++)
    {
      printf("enter the %d value of array\n", i);
      scanf("%d", &w[i]);

    }
    for (int l = n-1; l>0; l--)
    {
        printf("the  alue of  array is %d\n", l);
    }
    
    
    
        return 0;
}