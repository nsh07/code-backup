// Write a program in C to calculate the length of a string using a pointer
#include <stdio.h>

int main()
{
    char s[] = "abcde";
    //char * k = &s[0];
    char * k = s;
    int m;

    int i =0;

    while (*(k + i) != '\0')
    {
        m = m + 1;
        i++;
    }
  printf("%d", m);
    //printf("%d", i);

    return 0;
}