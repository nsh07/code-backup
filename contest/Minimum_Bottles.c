#include<stdio.h>

int main(){

    int k;
    scanf("%d",&k);
    while(k--){

      int n, x ;
      scanf("%d",&n);
      scanf("%d",&x);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
   sum+=a[i];
    
    }
    int count=(sum/x);
    if (sum%x !=0)
    {count++;
    }
    printf("%d\n",count);
    

    }

    return 0;
} 








































//   for (int i = 0; i <N; i++)
//   {   
//         if(A[i]==2){
//             temp++;
//         }
//         else if(A[temp]<2){
//              if(A[i]<2){
//                 A[i]+= A[temp];
//                 A[temp]=0;
//                 if (A[i]==2)
//                 {
//                     i=temp;
//                     temp++;
//                 }
                
//              }
//         }
//         else{
//             temp++;
//         }


//   }
  
