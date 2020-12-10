#include <stdio.h>

int main(void)
{
    int n, x, i, j, temp, fact, sum, var;
    printf("Enter the range : ");
    scanf("%d", &n);
    printf("Strong Numbers from 1 to %d\n", n);
    for (x=1; x<=n; x++)
    {
        var=x;
        sum=0;
        temp=x;
        while (var>0)
        {
            fact=1;
            i=var%10;
            if (i>0)
            for (j=1; j<=i; j++)
                fact=fact*j;
            var=var/10;
            sum+=fact;
        }
        if (sum == temp)
            printf("%d ", temp);

    }
}
