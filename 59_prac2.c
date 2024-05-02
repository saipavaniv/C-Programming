//find the factorial od the numbers with recurssions
#include <stdio.h>

int factorial (int );

int main (void)
{
    double n = 0;
    double result = 0;
    printf("enter the number of digits ");
    scanf("%d",&n);
    result = factorial(n);
    printf("the factorial of % no. of digits is: %d\n",n ,result);
    return 0;
}
int factorial(int n)
{
    if (n==1)
    {
        printf("%d\n",n);
        return 1;
    }
    printf("%ld x ",n);

    return (n*factorial(n-1));
}