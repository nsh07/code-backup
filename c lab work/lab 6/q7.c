/*Write a C program to store 5 Student records as Structures and Sort them by Name. for
example:
Input: Student Records= {
{Id = 1, Name = bd, Age = 12 },
{Id = 2, Name = ba, Age = 10 },
{Id = 3, Name = bc, Age = 8 },
{Id = 4, Name = aaz, Age = 9 },
{Id = 5, Name = az, Age = 10 } }
Output:
{{Id = 4, Name = aaz, Age = 9 },
{Id = 5, Name = az, Age = 10 },
{Id = 2, Name = ba, Age = 10 },
{Id = 3, Name = bc, Age = 8 },
{Id = 1, Name = bd, Age = 12 } }*/

#include <stdio.h>
struct std
{
    int id;
    char name[10];
    int age;
};

int main()
{
    struct std s1 = {1, "suraj", 14};
    struct std s2 = {2, "aarav", 15};
    struct std s3 = {3, "nishant", 20};
    

    return 0;
}
