/* Program to check whether given letter is vowel or consonant using switch.
*/
#include <stdio.h>

int main()
{
    char k;
    printf("enter letter\n");
    scanf("%c", &k);
    switch (k)
    {
    case 'a':
    {
        printf("it is a vowel");
        break;
    }
    case 'e':
    {
        printf("it is a vowel");
        break;
    }
    case 'i':
    {
        printf("it is a vowel");
        break;
    }
    case 'o':
    {
        printf("it is a vowel");
        break;
    }
    case 'u':
    {
        printf("it is a vowel");
        break;
    }
    default:
    {
        printf("it is a consonant");
    }
    }
    return 0;
}
