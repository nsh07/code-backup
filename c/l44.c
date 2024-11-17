#include <stdio.h>

struct driver
{

    char name[10];
    int id[10];
    char route[23];
    int km;
};
int main()
{

    struct driver D1, D2, D3;
    for (int i = 1; i <= 3; i++)
    {
        if (i == 1)
        {
            printf("enter the name %d of driver\n ", i);
            scanf("%s", &D1);
        }
        else if (i == 2)
        {

            printf("enter the name %d of driver\n ", i);
            scanf("%s", &D2);
        }
        else
        {
            printf("enter the name %d of driver\n ", i);
            scanf("%s", &D3);
        }

     }
     
     
      for (int i = 1; i <= 3; i++)
        {
            if (i == 1)
            {
                printf("enter the id %d of driver\n ", i);
                scanf("%d", &D1);
            }
            else if (i == 2)
            {

                printf("enter the id %d of driver\n ", i);
                scanf("%d", &D2);
            }
            else
            {
                printf("enter the id %d of driver\n ", i);
                scanf("%d", &D3);
            }
        }
    printf("name is %s",D1.name);
    printf("id is %d",D1.id);
        return 0;
    }