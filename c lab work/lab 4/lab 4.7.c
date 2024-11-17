
 //Implement binary search algorithm 


#include <stdio.h>
int mid;
int main()
{

    int a[5] = {1, 2, 4, 6, 8};
    int low = 0;
    int high = 4;
    int key = 6;
    int c = 0;

    while (low <= high)
    {

        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            c = mid;

            break;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
    }
    if (c == mid)
    {
        printf("element pesent at %d", mid + 1);
    }
    else
    {
        printf("not found");
    }
    return 0;
}







// Implement binary search algorithm using iterative  function  

#include <stdio.h>
int mid;
int c;
int bs(int a[], int low, int high, int key)
{
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (a[mid] == key)
        {
           return  c = mid;

            break;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
    }
}
int main()
{
    int a[5] = {1, 2, 4, 6, 8};
    int low = 0;
    int high = 4;
    int key = 6;

     bs(a, 0, 4, 6);

    if (c == mid)
    {
        printf("element pesent at %d", mid + 1);
    }
    else
    {
        printf("not found");
    }
    return 0;
}






// Implement binary search algorithm using  recursive approach

#include <stdio.h>
int mid;
int c;
int bs(int a[], int low, int high, int key)
{
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return c = mid;

            break;
        }
        else if (a[mid] < key)
        {
            return bs(a, mid + 1, high, key);
        }
        else if (a[mid] > key)
        {
            return bs(a, low, mid - 1, key);
        }
    }
}

int main()
{
    int a[5] = {1, 2, 4, 6, 8};
    int low = 0;
    int high = 4;
    int key = 2;

    bs(a, 0, 4, 2);

    if (c == mid)
    {
        printf("element pesent at %d", mid + 1);
    }
    else
    {
        printf("not found");
    }
    return 0;
}
