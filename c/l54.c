#include <stdio.h>
#include <stdlib.h>

/*int *dangling()
{// case 2 ka part hai
    int a, b, sum;
    a = 10;
    b = 20;
    sum = a + b;
    return &sum;// after return address of sum varible, variable is deleted because it is local variable
}*/

int main()
{ // case 1 : de allocation of memory
    /*int a = 10;
    int *ptr;
    ptr = (int *)malloc(1 * sizeof(int));
    ptr = &a;
    free(ptr);
    printf("the a is %d",*ptr);
    // now it is a dangling pointer*/

    // case 2 : function
    /* int *ptr1;
     ptr1 = dangling();

     printf("the a is %d", *ptr1);// now it is a danglinggb pointer
 */
    // case 3 = out of scope;
    int *ptr2;
    {
        int i = 0;
        ptr2 = &i;
    }
    printf("the a is %d", *ptr2);
    // it is a also a dangling pointer but different stack give different answer so always try to not use local variable
    // While it might appear to work in some cases (due to the behavior of the specific memory allocator or the way the stack is managed),
    //  it is not guaranteed to be valid,
    // and relying on it can lead to unpredictable and erroneous behavior in more complex programs or under different circumstances.
    // Always avoid using pointers to local variables outside of their scope to prevent such dangling pointer issues.

    return 0;
}