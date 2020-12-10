#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    long long int dec=0;
    int len, val, i;
    char x[17], temp;
    printf("Enter a hexadecimal number : ");
    gets(x);
    len= strlen(x);
    len--;

    for (i=0; x[i]!='\0'; i++)
    {
        if (x[i]>='0' && x[i]<='9')
            val= x[i]-48;

        else if (x[i]>='a' && x[i]<='f')
            val= x[i]-97+10;

        else if (x[i]>='A' && x[i]<='F')
            val= x[i]-65+10;
        printf("\n%d\n", val);


        dec+=val*pow(16, len);
        len--;
    }
    printf("Decimal Number : %lld", dec);
}
