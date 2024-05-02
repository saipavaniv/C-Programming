//Write a C program to input month number and print number of days in that month.
#include <stdio.h>
int main (void)
{
    int n;

    printf("enter the no. of month : ");
    scanf("%d", &n);
    n<=12;
    if (n==2)
    {
        printf("this month has only 28 days exept leap year: ");
    }
   else if (n==(1,3,7,8,10,12))
    {
        printf("%d has 31 days in the month",n);
    }
    else
    {
        printf("%d has 30 days in the month",n);
    }
    return 0;
}

