#include <stdio.h>
void main()
{
    int num;
    printf("1>Enter 0 for traingluar star pattern\n2>Enter 1 for reversed traingular pattern\n");
    scanf("%d", &num);
    switch (num)
    {

    case 0:
        for (int i = 1; i < 5; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
        printf("\n");
    break;
     
        }
     case 1:
     for (int m = 5; m>0; m--) 
     {
        for (int s = m; s>0; s--)
        {
            printf("*");
        }
        printf("\n");
     
    
     }
       
        
}
}
