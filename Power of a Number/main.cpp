#include <stdio.h>


int main(void)
{
    int x, y, power, i;
    printf("Enter base number : ");
    scanf("%d", &x);
    printf("Enter exponent number : ");
    scanf("%d", &y);
    power=x;
    for (i=1; i<y; i++)
        power=power*x;
    printf("%d ^ %d = %d", x, y, power);
}
