/*Write a C program to take an input of two dimensional array from user and then display
the elements of two dimensional array using pointers.*/

#include <stdio.h>
int m= 2;
int main()
{
    int a[2][2]; // = {{1, 2}, {4, 5}};
                 /*for (int i = 0; i < 2; i++)
                 {
                     for (int j = 0; j < 2; j++)
                     {
                      printf("enter %d%d element of array\n",i,j);
                      scanf("%d", &a[i][j]);
                     }*/

    int *e = &a[0][0];
    printf("enter the elements\n");
    for (int i = 0; i < 4; i++)
    {
        // printf("enter the elements\n");
        scanf("%d", &*(e + i));
        
        
    }
    int f;
    
    // int b[m][2];
    // int *k = &a[0][0];
    // int n = m + 2;
     printf("the element are\n");
    for (int i = 0; i < 4; i++)
    { // printf("\t");
        printf("\t%d", *(e + i));
        // printf("\t");
        if (i != 0)
        {
            if (i / m == 0)
            {
                printf("\n");
            }
        }
    }

    /*for (int i = 0; i < 2; i++)
    {
        // {
        for (int j = 0; j < 2; j++)
        {
            // b[i][j] = *(k + i + j);
            switch (i)
            {

            case (0):
            {
                printf("the elements  0 row are %d\n", *(e));

            }
            case (1):
            {
                printf("the elements of 1  row  are %d\n", *(e));

            }
            e++;
            }
        }
    }*/
    return 0;
}