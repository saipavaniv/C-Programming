//Write a C program to calculate sum of digits of a number.

#include <stdio.h>
int main (void)
{
    int i;
    int sum;
    int n;

    printf("enter the value of n : ");
    scanf("%d",&n);

    for(i =n;n!=0;n=n/10)
    {
        sum = sum+n;
    }
    printf("%d",sum);
    return 0;

}