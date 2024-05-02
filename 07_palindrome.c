
#include <stdio.h>
int main (void)
{
    int number = 3259;
    printf("enter number: ");
    scanf("%d", &number );

    int reverse =0;
    int remainder =0;

    reverse=0;

    while(number != 0)
    {
        remainder = number % 10;
        reverse = reverse *10 + remainder;
        number = number/10;

    }

    printf("reverse : %d\n", reverse);