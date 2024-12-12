/*Write a program in C to store n elements in an array and then identify the 2
nd maximum,
and 2nd minimum elements using a pointer.*/

// #include <stdio.h>

// int main()
// {
//     int a[5]= {3,5,7,8,4};

//       int min = a[0];
//       int max;

//         return 0;

// }
// Write a program in C to sort an array in ascending and descending order using a pointer.
#include <stdio.h>
// void swap(int *a, int *b)
// {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }

int main()
{
    int n;
    printf("enter the lenth of array\n");
    scanf("%d", &n);
    int a[n]; // = {8, 10, 4, 2, 1};
    printf("enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        //printf("enter  element of array\n ");
        scanf("\n%d", &a[i]);
    }

    int *b = a;
    int min;
    int j;
    for (int i = 0; i < (n-1); i++)
    {
        min = *(b + i);
        for (j = i + 1; j < n; j++)
        {
            // if (*(b + j) > min)//for desending
            if (*(b + j) < min) // for desending

            {
                min = *(b + j);
            }

            if (min != *(b + i))
            {
                int c = *(b + i);
                *(b + i) = *(b + j);
                *(b + j) = c;
                // swap(&*(b + i), &*(b + j));
            }
        }
    }

    printf(" 2nd min = %d\n", *(b + 1));
    printf("2nd max = %d\n", *(b + 3));

    return 0;
}
