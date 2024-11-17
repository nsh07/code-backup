#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
void welcome()
{
    printf("welcome user");
}

int main()
{
    printf("the sum is %d\n", sum(4, 6));

    int (*fptr)(int, int); // declration of a functuon pointer,like ye pointer ek aise function ko point karega jo (int ,int) le aur int return kare
    fptr = &sum;           // creating a function pointer

    // fptr = &welcome;//it gives error because pointer ise point nhi karega kyuki hmne pointer alag banaya jo int,int le aur int return kare
    int d = (*fptr)(3, 4); // derefencing a function pointer
    printf("the sum is %d\n", d);

    return 0;
}
