#include <Stdio.h>

/*// int a2;
int tr()
{
    static int a2 = 45;
    // a2 = 55;
    return a2;
}

int main()
{
    int a1 = 19;
    printf("the value of a1 is %d\n", a1);
    tr();
    printf("the value of a1 is %d\n", a2);

    return 0;
}*/

void fun(){
static int a = 10;// only one  it use then if  a value increse then it rembers that value insted of it like 11
printf("the value of a is %d\n", a);
a++;


}

int main(){

        fun();
        fun();
        fun();
        fun();
        fun();
        return 0;
}