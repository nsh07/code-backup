/*Write a C program to calculate student-wise total marks for three students using array of
structure.*/
#include <stdio.h>
struct student
{
    int p,c,m;
    //int c;

    //int m;
};
int main()
{

    struct student s[3];
    printf("enter the marks of physics, chemistry,maths\n");
    for (int i = 0; i < 3; i++)
    {   printf("student s%d\n",i+1);
        scanf("%d %d %d", &s[i].p, &s[i].c, &s[i].m);
    }

    for (int i = 0; i < 3; i++)
    {
        int k = s[i].p + s[i].c + s[i].m;
        printf("total mark of student nu %d is %d\n", i + 1, k);
    }

   /* for (int i = 0; i < 3; i++)
    {
        printf("%d %d %d\n", s[i].p, s[i].c, s[i].m);
    }*/

    return 0;
}