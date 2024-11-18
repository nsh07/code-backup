#include <stdio.h>
int main() {
    int a = 12;
    int b = 13;
    int m, g;
    int k = 1;  // lowest wale ke equal kar do

    while (m != 1) {
        if (a == 0 || b == 0) {
            printf("lcm and hcf does not exist");
            break;
        }

        else if (k % a == 0 && k % b == 0) {
            m++;
            printf("LCM = %d\n", k);
            int hcf = (a * b) / (k);
            printf("HCF = %d", hcf);
        }
        k++;
    }

    // best alternative for hcf is , k-1 is lcm
    // int hcf = (a * b) / (k - 1);
    // printf("HCF = %d", hcf);

    /*for (int i = 2; i <= 12; i++) // less number wala hoga condition me
    {
        if (a % i == 0 && b % i == 0)
        {
            g = i;
            break;
        }
    }
    if (g == 0)
    {
        printf("HCF =1, co prime numbers");
    }
    else
    {
        printf("HCF = %d", g);
    }*/

    return 0;
}