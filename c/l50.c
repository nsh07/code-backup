#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf(" employee %d :enter the lengthy of employeee id\n",i+1);
        scanf("%d", &chars);
        getchar();
        printf("enter a\n");
        scanf("%c", &a); //input buffer, pichle wala input  iske liye valid hai isliye after enter ye a me value aa ja raha hai
        //isase bachne ke liye 'getchar()' ka use karo
        getchar();
        printf("enter b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("enter your employeee id\n");
        scanf("%s", ptr);
        printf("your employeee id is %s\n", ptr);
        free(ptr);
        i++;
    }

    return 0;
}