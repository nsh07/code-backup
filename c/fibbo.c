
#include<stdio.h>
void main (){int n;
    int a=0;
    int b=1;
    int next =0;
printf("enter your number");
scanf("%d",&n);
for (int i=0;i<=n;i++){
    
printf("%d\n",a);
next=a +b;
 a=b;
 b=next;


}

}
