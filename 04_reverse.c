
#include <stdio.h>
int main (void)
{
    int number = 3259;
    printf("enter number: ");
    scanf("%d", &number );

    int reverse =0;
    int remainder =0;

    for(reverse = 0; number !=0; number = number/10)
    {
        remainder = number % 10;
        reverse = reverse *10+ remainder;
        printf("remainder : %d, reverse: %d",
                remainder,        reverse);

    }
    printf("reverse : 5d\n", reverse);
}