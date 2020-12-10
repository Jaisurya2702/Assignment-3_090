#include <stdio.h>

int main(void)
{
    int x, i, j, temp, fact, sum=0;
    printf("Enter the number : ");
    scanf("%d", &x);
    temp=x;
    while (x>0)
    {
        fact=1;
        i=x%10;
        for (j=1; j<=i; j++)
            fact=fact*j;
        x=x/10;
        sum+=fact;
    }
    if (sum == temp)
        printf("%d is a Strong Number.", temp);
    else
        printf("%d is not a Strong Number", temp);
}
