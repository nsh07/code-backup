/*Create a structure named "Employee" to store employee details such as employee
ID, name, and salary. Write a program to input data for three employees, find
the highest salary employee, and display their information*/
#include <stdio.h>

struct employee {
    char id[10];
    char name[20];
    int salary;

};  // e1,e2,e3;
int main() {
    printf("enter details\n");
    // struct employee e1,e2,e3;
    struct employee e1;  // ={212,"shyam",29000};
    struct employee e2;  // ={211,"ram",28000};
    struct employee e3;  //={213,"aarav",56000};
    scanf("%s %s %d\n", &e1.id, &e1.name, &e1.salary);
    scanf("%s %s %d\n", &e2.id, &e2.name, &e2.salary);
    scanf("%s %s %d", &e3.id, &e3.name, &e3.salary);

    /*struct employee  s[3];// array like concept
        for (int i = 0; i < 3; i++)
        { printf("enter details of student nu %d\n",i+1);
            scanf("%s %d %d", &e[i].id, &e[i].name, &e[i].salary);
        }*/

    if (e1.salary > e2.salary && e1.salary > e3.salary) {
        printf("%s earn most\n", e2.name);
    } else if (e2.salary > e1.salary && e2.salary > e3.salary) {
        printf("%s earn most\n", e2.name);
    } else {
        printf(" %s earn most\n", e3.name);
    }

    printf("%s %s %d\n", e1.id, e1.name, e1.salary);
    printf("%s %s %d\n", e2.id, e2.name, e2.salary);
    printf("%s %s %d\n", e3.id, e3.name, e3.salary);

    return 0;
}