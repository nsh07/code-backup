//Convert a decimal number to binay and  using function.
#include<stdio.h>
int f1(int n){
int a[10];
    for(int i =0;i<=9;i++)
    {
        
       a[i]=n % 2;
       n=n/2;
    }
    for(int i =9;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}




int main()
{ int n;
    
    printf("enter your number\n");
    scanf("%d",&n);
    f1(n);

    return 0;
}