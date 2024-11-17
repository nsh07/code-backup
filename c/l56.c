#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    char p1[20];

    int m = 0;
    int n = 0;
    printf("enter your name\n");
     scanf("%s", p1);
   // fgets(p1, sizeof(p1), stdin);
    for (int i = 0; i < 3; i++)
    {
        int n1;
        int n2;

        printf("PLEASE select one\n");
        printf("0> rock\n1> paper\n2> scissors\n");
        /*  printf("1> paper\n");
          printf("2> scissors\n");*/
        scanf("%d", &n1);
        n2 = generateRandomNumber(3);
     //   printf("The random number between 0 to 5 is %d\n", n2);
        printf("The computer choose  %d\n", n2);

        if (n1 == 0 && n2 == 1 || n1 == 1 && n2 == 2 || n1 == 2 && n2 == 0)

        {
            n++;
            printf("computer got 1 points\n");
        }
        else if (n1 == 0 && n2 == 2 || n1 == 1 && n2 == 0 || n1 == 2 && n2 == 1)
        {
            m++;
            printf("%s got 1 points\n", p1);
        }
        /*else if (n1 == 1 && n2 == 2)
        {
            n++;
            printf("p2 got 1 points\n");
        }
        else if (n1 == 1 && n2 == 0)
        {
            m++;
            printf("p1 got 1 points\n");
        }
        else if (n1 == 2 && n2 == 0)
        {
            n++;
            printf("p2 got 1 points\n");
        }
        else if (n1 == 2 && n2 == 1)
        {
            m++;
            printf("p1 got 1 points\n");
        }*/
       else {
        printf("no one get point\n");
       }
    }

    if (m > n /*&& m >= 2*/)
    {
        printf("%s win\n", p1);
    }
    else if (n > m /*&& n >= 2*/)
    {
        printf("computer win\n");
    }
    else if(n ==m)
    {
        printf("no winner in this game\n");
    }
    return 0;
}