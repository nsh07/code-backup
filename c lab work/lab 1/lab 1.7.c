/*Write a program to calculate the electric bill as per the charges below.
 No of Units Consumed Rates (In Rs.)
 500 and above 9.50
 200-500 8.50
 100-200 7.50
 Less than 100 5.50
*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter the no of units\n");
    scanf("%d", &n);
    float bill;

    if (n <100)
    {
        bill = n * (5.50);
        
    }
    else if (100 <= n && n < 200)
    {
        bill = (100-1) * 5.50 + (n - (100-1)) * (7.50);
    }
    else if (200 <= n && n < 500)
    {
        bill = (100-1) * 5.50 + 100 * 7.50 + (n - (200 -1) )*(8.50);
    }
    else
    {
        bill = (100-1) * 5.50 + 100 * 7.50 + 300 * 8.50 + (n - (500-1)) * (9.50);
    }
    printf("%f", bill);
    return 0;
}