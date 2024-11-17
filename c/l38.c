#include <stdio.h>
#include <string.h>
/*
// typedef struct student
{
    char age;
    int id;
    char name[];
} fun ;

 /* struct student
 {
     char age;
     int id;
     char name[];
 }  // s1,s2;fun; wrong way both nick name and initialsation can not take place
 typedef struct student fun;*/
/*fun s1, s2;

int main()
{
    // struct student s1, s2;
    // fun s1,s2;
    s1.age = 8;
    s2.age = 10;
    s1.id = 21;
    s2.id = 22;
    strcpy(s1.name, "shubham");
    strcpy(s2.name, "ram");

    printf("%s", s1.name);

    // typedef int kam; // both int and kam can be used for storing integer value
    // kam a = 5;
    // int a = 6;
    // printf("%d", a);
    return 0;
} */

// typedef is benefical for pointer due to following reasons 

int main(){
    //int* a, b;// here int* only make a pointer not b 
    typedef int* daya;
    daya a,b;// but when we give a nickname with the help of typdef it makes both a , b pointer
   int c= 7;
    a=&c;
    //b = c;
    b=&c;
    printf("%d\n",a);
     printf("%d",b);

}

