#include <stdio.h>
//#define PI 3.14
#define square(a) a*a
int main()
{ int r =  4;
#ifdef PI
printf("area is %f\n",PI*square(r));
#else
printf("area is %f\n",3.14*r*r);
#endif// necesarry to close it




#define test 15
#if (test == 15)
    printf("num is 15\n");

#elif (test == 4)
    printf("num is 4\n")//here ; is not after which code is running because it is not compile because above condition is true

#else
    printf("num is 10\n");
   #endif


   printf("today date is %s\n", __DATE__);
   printf("today date is %s\n", __TIME__);
   printf("file name is %s\n", __FILE__);
   printf("STDC : %d\n", __STDC__);
   printf("STDC : %d\n", __STDC_VERSION__);//2017 modEL

    return 0;

}