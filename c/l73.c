#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int greet(int (*fptr)(int, int))
{
    printf("welcome user\n");
    printf("the sum is %d\n", (*fptr)(3, 5));//derefencing nhi karega tab bhi chalega kyuki ye lines of code ko point kar raha hai
}
void gm(int (*fptr)(int, int))
{
    printf("good morning\n");
    printf("the sum is %d\n", (*fptr)(3, 5));
}
int main()
{
    int (*ptr)(int, int);//()is must nhi to function samajh lega
    // fptr = &sum;//both are correct
    ptr = sum;
    // greet(fptr);
    gm(ptr);

    return 0;
}
