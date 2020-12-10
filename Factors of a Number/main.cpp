#include <stdio.h>


int main(void)
{
    int x, i;
    printf("Enter a positive number : ");
    scanf("%d", &x);
    printf("Factors of %d are : \n", x);
    for (i=1; i<=x; i++)
    {
        if (x%i==0)
        {
            printf("%d ", i);
        }
    }
}
