#include <stdio.h>

int main(void)
{
    int x, i, j, y;
    printf("Enter the number : ");
    scanf("%d", &x);
    printf("Prime factors are :\n");
    for (i=1; i<=x; i++)
    {
        y=0;
        for (j=2; j<i; j++)
        {
            if (i%j==0)
                y=1;
        }
        if (y!=1)
        {
            if (x%i==0)
                printf("%d ", i);
        }
    }
}
