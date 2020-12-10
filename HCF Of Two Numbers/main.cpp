#include <stdio.h>

int main(void)
{
    int x, y, i, s, hcf;
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    s = (x>y) ? y : x;
    for (i=1; i<=s; i++)
    {
        if (x%i==0 && y%i==0)
            hcf=i;
    }

    printf("\nHCF (GCD) of the two entered numbers is : %d", hcf);
}
