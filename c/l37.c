#include <stdio.h>
#include <string.h>
struct age
{
    char age;
    int id;
    char name[8];
};
// struct age l , k ;

int main()
{
    char s1[6]; //="suraj";
    printf("enter the l name\n");
    gets(s1);
    struct age l, k;
    // l.name[8]  = "deepu";//wrong way
    strcpy(l.name, s1); // right way to take name
    printf("%s\n", l.name);
    l.age = 70;
    k.age = 50;
    l.id = 30;
    k.id = 40;
    // printf("the name  of l is %s\n", l.name);
    printf("the age of deepu is %d", l.age);

    return 0;
}
