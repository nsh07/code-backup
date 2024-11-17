// Write a program in C to sort an array in ascending and descending order using a pointer.
#include <stdio.h>
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a[5] = {8, 10, 4, 2, 1};

    int *b = a;
    int min;
    int j;
    for (int i = 0; i < 4; i++)
    {
        min = *(b + i);
        for (j = i + 1; j < 5; j++)
        {
            //if (*(b + j) > min)//for desending
            if (*(b + j) < min)//for desending
            
            {
                min = *(b + j);
            }

            if (min != *(b + i))
            {
                /*int   c =  *(b + i);
                 *(b + i)= *(b + j);
                 *(b + j)= c;*/
                swap(&*(b + i), &*(b + j));
            }
        }
    }
    for (int k = 0; k < 5; k++)
    {

        printf("%d\n", *(b + k));
    }
    return 0;
}