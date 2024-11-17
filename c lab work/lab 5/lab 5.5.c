// Write a program to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>

int main()
{
    char k[] = "abcdefghijklmnopqrstuvwxyz";
   // char *m = &k[0];
    char *m = k;
    int i =0;
    int t =0; 
    int l =0;
    while (*(m + i) != '\0')
    {
        if (*(m + i) == 'a' || *(m + i) == 'e' || *(m + i) == 'i' || *(m + i) == 'o' || *(m + i) == 'u')
        {
            l = l + 1;
        }
        else
        {
            t = t+1;
        }

        i++;
    }
    printf("the nu of consonants is %d\n", t);
    printf("the nu of vowel is %d", l);

    return 0;
}