/*Write a C program using structure to create a library catalogue with the following fields:
Access number, author’s name, Title of the book, year of publication, publisher’s name,
and price*/

#include <stdio.h>
struct lib
{
    char an[10];
    char aun[10];
    char title[10];
    int yop;
    char pm[10];
    int price;
};

int main()
{
    int n;
    printf("enter nu of books in library\n");
    scanf("%d", &n);
    struct lib b[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter the details of book nu : %d\n", i + 1);
        scanf("%s %s %s %d %s %d", &b[i].an, &b[i].aun, &b[i].title, &b[i].yop, &b[i].pm, &b[i].price);
    }

    /*for (int i = 0; i < n; i++)
    {
        printf(" the details of book nu  %d is:\n", i + 1);
        printf("%s %s %s %d %s %d\n", b[i].an, b[i].aun, b[i].title, b[i].yop, b[i].pm, b[i].price);
    }*/

    printf("enter the nu of book whom you want to get information\n"); // it print specific data
    scanf("%d", &n);
    n--;
    printf("%s %s %s %d %s %d\n", b[n].an, b[n].aun, b[n].title, b[n].yop, b[n].pm, b[n].price);

    return 0;
}