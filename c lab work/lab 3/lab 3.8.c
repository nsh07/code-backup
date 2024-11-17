#include<Stdio.h>
int main(){
    int a[5]={5,2,2,5,2};
    int c =2;
    int k =0;
    for (int i = 0; i < 5; i++)
    {
        if(a[i]==2){
            k = k+1;
        }
    }
    printf("the given number is repeated  %d times",k);
    return 0;
    
}
