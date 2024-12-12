
#include <stdio.h>
/*void main (){int n;
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
}*/

int main() {
    int prev = 0;
    int cur = 1;
    int next = 1;
    printf("%d%d", prev, cur);
    for (int i = 3; i <= 5; i++) {
        printf("%d", next);
        prev = cur;
        cur = next;
        next = prev + cur;
    }

    return 0;
}
