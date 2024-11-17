/*How to pass a structure member as an argument of a function? Write a program to explain
it using call by value and call by reference. */

// call  by value
#include <stdio.h>
#include <string.h>


struct student
{
    char name[10];
    int rl;
    char br[5];
};//s1 = {"suraj", 240101079, "CSE"}; 

void display(struct student s1)
{
    printf("name: %s\n", s1.name);
    printf("roll nu: %d\n", s1.rl);
    printf("branch: %s\n", s1.br);
}
void display2(struct student* s1)
{   strcpy(s1 -> name, "K D");
    s1 -> rl =240102051;
  strcpy(s1 -> br, "ece");
    //s1 -> br = "ece";// this is not right because 'assignment to expression with array type in c' in lhs is array and rhs is just a letter
   
   
  //s1 = {"suraj", 245, "ece"};// ek hi bar  declare + define kar sakate hai
    printf("name: %s\n", s1 -> name);
    printf("roll nu: %d\n", s1 -> rl);
    printf("branch: %s\n", s1 -> br);
}

int main()
{
    struct student s1 = {"suraj", 240101079, "CSE"};
    display(s1);
      display2(&s1);
   
    return 0;
}


// case 2 call by refernce
/*#include <stdio.h>
struct student
{
    char name[10];
    int rl;
    char br[5];
};//s1 = {"suraj", 240101079, "CSE"}; 
void display2(struct student* s1)
{
    printf("name: %s\n", s1 -> name);
    printf("roll nu: %d\n", s1 -> rl);
    printf("branch: %s\n", s1 -> br);
}
int main()
{
    struct student s1 = {"suraj", 240101079, "CSE"};
    
    display2(&s1);
    return 0;
}*/