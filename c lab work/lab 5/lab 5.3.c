
// wAP in C to print all permutations of a given string using pointers. (string: abcd)
// https://media.geeksforgeeks.org/wp-content/uploads/20230607112555/file.png

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{

    char c = *a;
    *a = *b;
    *b = c;
}

void permute(char *k, int s, int e) // s= start, e =end
{
    if (s == e)
    {

        printf("%s\n", k);
    }

    else
    {
        for (int i = s; i < e; i++)
        {
            swap((k + s), (k + i));

            permute(k, s + 1, e);

            swap((k + i), (k + s));
        }
    }
}

int main()
{
    char s[] = "abcd";
    int n = strlen(s);

    // permute(s, 0, 5);

    // printf("%s\n", s);
    permute(s, 0, n);
    return 0;
}