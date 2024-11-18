#include <stdio.h>
#include <string.h>

int main() {
    int m = 0;
    char k[] = "abcde";

    // m = strlen(k);

    // {
    //     m = m + 1;
    // }

    printf("the length of array  is %d", strlen(k));
    return 0;

    /*int m = 0;
    int i =0;
    char k[] = {"abcde"};

    while (k[i] != '\0')
    {
        m++;
        i++;
    }
    printf("the length of string is %d", m);
    return 0;*/
}