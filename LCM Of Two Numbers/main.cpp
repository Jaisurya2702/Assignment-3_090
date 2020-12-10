#include <stdio.h>

int main(void)
{
    int x, y, i, lcm;
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    lcm = (x>y) ? x : y;
    while (1)
    {
        if (lcm%x==0 && lcm%y==0)

            break;
        lcm++;
    }
    printf("\nLCM of the entered two numbers is : %d", lcm);
}
