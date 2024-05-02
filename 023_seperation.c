//Write a C program to count number of digits in a number.
#include <stdio.h>
int main (void)
{
    int n;
    long count;
    int first;
 

    printf("enter the number : ");
    scanf("%d", &n);

    count = n%10;
    n=first;
    while(first<=10)
    {
        first=first/10;

    }
    printf("the first digit of the given value is %d", first);

    //to find the first digit of the given number value

    printf("the last digit of the given value is: %d",count);
    return 0;
}