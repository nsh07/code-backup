#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "WECNITK";
    char str[8];
    scanf("%s",str);
    if (strcmp(str1,str)==0)
    {
        printf("Welcome to Web Club!");
    }
    else{
        printf("Access denied");
    }
    
    return 0;
}