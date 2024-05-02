//writing for loop to find out the digits of a number
#include <stdio.h>
#include <math.h>

int main ()
{
    int n, remainder;
    int count;
    int i;
    int power;
    int number;
    int x;
    int result;

    printf("enter any number: ");
    scanf("%d" , &number);
    n =number;
    x=n;

    for(count=0;n>0;count++)
    {
        n = n/10;
        
    }
    for (number; number>0;number/10)
    {
        remainder =(number%10);
        result=(result+(pow(remainder,count)));

    }
    if (result==x)
    {
        printf("the number is amstrong : %d", result);

    }
    else 
    {
        printf("the number is not amstrong : ", result);
    }

    return 0;
}