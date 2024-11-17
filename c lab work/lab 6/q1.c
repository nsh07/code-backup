/*Create a structure name called "Student" with member’s name, age, and total marks. Write
a C program to input data for two students, display their information, and find the average
of total marks.*/
#include <stdio.h>
struct student
{
    char name[10];
    int age;
    int tm;
};
int main()
{
    struct student s[2];// array like concept 
    for (int i = 0; i < 2; i++)
    { printf("enter details of student nu %d\n",i+1);
        scanf("%s %d %d", &s[i].name, &s[i].age, &s[i].tm);
    }
     printf("the details are\n");
    for (int i = 0; i < 2; i++)
    {
        printf(" student %d :%s %d %d\n",i+1, s[i].name, s[i].age, s[i].tm);
    }
   /* printf("%s %d %d\n", s[0].name, s[0].age, s[0].tm);
    printf("%s %d %d\n", s[1].name, s[1].age, s[1].tm);*/
   // printf("%s %d %d\n", s[2].name, s[2].age, s[2].tm);
    int c = (s[0].tm + s[1].tm) / 2;
    printf("%d", c);

    return 0;
}
