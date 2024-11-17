#include <stdio.h>
#include "l45.c"
#define PI 3.14
#define square(r)  r*r //like function i.e 'macros'

// extern int a;
// int fun(int a, int b)
// { // int sum = a + b;
//     extern int sum;
//     sum = 25;
//     return sum;
// }
 extern int sum;


int main()
{
    // extern int a ;//= 25;
    // a = 25;
    extern int sum;
    sum = 25;
    // int k = fun(3, 5);
    printf("%d\n", sum);
  int a = 4;
  printf("%f",PI*square(a));



    return 0;
}
