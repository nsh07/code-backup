#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     //printf("%s",argv[1]);
    char *operation = argv[1];
    int m, n;
    // operation ="sum";
    m = atoi(argv[2]);
    n = atoi(argv[3]);
    //printf("%d",strcmp(operation, "sub"));
    if (strcmp(operation, "sum")== 0)
    {
        printf("%d", m + n);
    }
    else if (strcmp(operation, "sub") == 0)
    {
        printf("%d", m - n);
    }
    else if (strcmp(operation,"multiply") == 0)
    {
        printf("%d", m * n);
    }
    else if (strcmp(operation,"divide") == 0)
    {
        printf("%d", m / n);
    }
    return 0;
}