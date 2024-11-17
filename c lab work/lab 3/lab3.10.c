#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    printf("enter the length of string\n");
    scanf("%d", &n);

    char s1[n]; // = "ram";
    char s2[n]; //= "ram";
    printf("enter strings\n");
     scanf("%s",&s1);// gets do not take input here
     scanf("%s",&s2);
    //gets(s2);
    //scanf("%s",&s2);
   int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
        {

            m = m + 1;
        }
    }
    if (m == n)
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n");
    }
   

     int d = strcmp(s1,s2);
     if(d == 0){
        printf(" equal");
     }
     else{
        printf("not equal");
     }
}

// char s1[10]; //="aam";
//     char s2[10]; //="ram";
//     printf("enter strings\n");
//     gets(s1);
//     gets(s2);
//     printf("%d",strcmp(s1,s2));
//     return 0;