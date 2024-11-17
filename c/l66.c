/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    // You have to fill in values to a template letter.txt
    // Letter.txt looks something like this:
    // Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    // Please visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.
    // You have to read this file and replace these values:
    // {{name}}   - Harry
    // {{item}}   - Table Fan
    // {{outlet}} - Ram Laxmi fan outlet

    // Use file functions in c to accomplish the same

    return 0;
}
*/
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("letter.txt", "a+");
    // char str[10];
    // fgets(str,10,ptr);
    char s1[10] = "harry";
    char s2[10] = "sugar";
    char s3[10] = "patna";
    char s4[50]= ("Thanks %s for purchasing %s from our outlet %s",s1,s2,s3);

    fputs("Thanks %s for purchasing %s from our outlet %s.\nPlease visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.", s1, s2, s3, ptr);
    // fgetc(ptr);
    //  printf("%s",str);
    //  printf("%c",fgetc(ptr));

    return 0;
}