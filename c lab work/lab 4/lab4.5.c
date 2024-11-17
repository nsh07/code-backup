// Calculate the factorial of a number using recursion.
#include<stdio.h>
int factorial(int a){
    if(a==0||a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
int main(){ int n;
    printf("enter the number whom you want factroial\n");
    scanf("%d",&n);
    int d = factorial(n);
    printf("factorial of %d is %d",n,d);

    return 0;
}