#include <stdio.h>

int main()
{
    int age , marks; 

    printf("Enter your age\n");
    scanf("%d", &age); 

    printf("ENTER YOUR marks\n");
    scanf ("%d", &marks);

    switch (age)
    {
        case 17:
            printf("minor\n");
            switch (marks)
            {
                case 45:
                    printf("you are 45\n");
                    break;
                default:
                    printf("you are not 45\n");
                    break;
           }
           break;
        case 18:
            printf("eligible for vote\n");
            break;

        case 19:
            printf("major\n");
            break;

        case 40:
            printf("senior citizen\n");
            break;

        default:
            printf("Ram Ram\n");
            break; 
    }

    return 0;
}
