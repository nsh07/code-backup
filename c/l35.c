#include <stdio.h>
#include <string.h>
void main()
{

    // char s1[]="ram";
    // char s2[]="jai";
    // char s3[55];

    // // printf("%s is friend of %s",s1,s2);
    //    strcpy(s3,strcat(s1,s2));
    //    puts(s3);

    // char s1[]= "ram";
    char s1[4];
    char s2[4];
    char s3[1];
    printf("enter the  strings\n");
    //    scanf("%s", s1 );asameer gupta
    //   scanf("%s",s2);

    gets(s1); // to take input from user use gets of string similar to scanf
    gets(s2);
    // printf("%d\n",strcmp(s1,s2));//strcmp(S1,s2) is used to compare two strings
    printf("the length of string s1 is %d\n", strlen(s1));
    // printf("the revrse of s1 is %s\n",strrev(s1));// strrev use to revrse
    strcpy(s3, strcat(s1, s2)); 
    // use strcat for add two or more string and strcpy(S1,s2) for copy s2 to s1

    puts(s3);                   // use for print the string only
}