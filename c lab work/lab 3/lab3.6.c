#include <stdio.h>
int main()
{
    int l =0 ;
    int a[3][3] = {{1, 2, 3}, {1, 2, 4}, {3, 2, 1}};

 l = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1]) - a[0][1]*(a[1][2]*a[2][2] - a[1][2]*a[2][0]) + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]) ;

printf("the detrminant of matrix is \n %d", l);

return 0;
}