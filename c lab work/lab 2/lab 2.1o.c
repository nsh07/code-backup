// Pascals Traingle

#include <stdio.h>

int main()
{
  // int n=5;
  int c = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 4; j > i; j--)
    {
      printf(" ");
    }

    for (int j = 0; j <= i; j++)
    {
      if (i == 0 || j == 0)
      {
        c = 1;
      }
      else
      {
        c = c * (i - j + 1) / j;
      }
     printf("%2d",c);// both printf statement are true
     // printf("%d ",c);
    }
    printf("\n");
  }

  return 0;
}
