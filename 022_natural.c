//Write a C program to find sum of all natural numbers between 1 to n.
#include <stdio.h>
int main (void)
{
    int i;
    int n;
    int sum;

    printf("enter the value of n : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}