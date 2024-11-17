#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int main()
{
    printf("The random number between 0 to 5 is %d\n", generateRandomNumber(5));
    return 0;
}

/*code */

/*
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
    char p1[10];

    int m = 0;
    int n = 0;
    printf("enter your name\n");
    scanf("%s", p1);
    for (int i = 0; i < 3; i++)
    {
        int n1;
        int n2;

        printf("PLEASE select one\n");
        printf("0> rock\n1> paper\n2> scissors\n");
        scanf("%d", &n1);
        n2 = generateRandomNumber(3);
        printf("The computer choose  %d\n", n2);

        if (n1 == 0 && n2 == 1 || n1 == 1 && n2 == 2 || n1 == 2 && n2 == 0)
        {
            n++;
            printf("computer  got 1 points\n");
        }
        else if (n1 == 0 && n2 == 2 || n1 == 1 && n2 == 0 || n1 == 2 && n2 == 1)
        {
            m++;
            printf("%s got 1 points\n", p1);
        }
        else {
         printf("no one get point\n");
     }

    }

    if ( m >= 2)
    {
        printf("%s win", p1);
    }
    else if (n >= 2)
    {
        printf("computer win\n");
    }
    else
    {
        printf("no winner in this game ");
    }
    return 0;
}*/
