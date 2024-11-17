#include <stdio.h>
int main()
{
    // char s[10];
    char expression;
    int a, b;
    printf("enter arithmetic operation\n");
    scanf("%c", &expression);
    printf("enter a ,b\n");
    scanf("%d%d", &a, &b);

    switch (expression)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;

    default:
        break;
    }
    return 0;
}