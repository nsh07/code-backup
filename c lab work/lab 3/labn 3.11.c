#include <stdio.h>
#include <stdio.h>

int main()
{
    char s[20]; // = "SuRaj is a";
    printf("enter the sentence\n ");
    //scanf("%[^\n]s", s);
    fgets(s, sizeof(s), stdin);// try use it to get a sentence input 
    //gets(s); not safe
    
    for (int i = 0; i < sizeof(s); i++)
    {
        {
            if ('a' <= s[i] && s[i] <= 'z')

            {
                s[i] = s[i] - 'a' + 'A';// - 32;
            }

            else if ('A' <= s[i] && s[i] <= 'Z')
            {

                s[i] = s[i] + 'a' - 'A';
            }
            // else
            // {
            //     continue;
            // } no need of it

        }

    }
    printf("%s", s);
   // puts(s);
    return 0;
}