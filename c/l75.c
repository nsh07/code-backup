#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *ptr;
    while (i < 455555)
    {
        printf("hello");
        ptr = malloc(6666 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(ptr);
    }

    return 0;
}
