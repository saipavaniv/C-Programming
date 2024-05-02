#include <stdio.h>
int main (void)
{
    int n;
    int i;
    int result;
    int rev;

    printf("enter n: ");
    scanf("%d",&n);

    for(i=1;n!=0;n/=10)
    {
        result=n%10;
        i= i*10+result;

    }
    if(i==n)
    {
        printf("it is a palindrome number" );

    }
    else 
    {
        printf("it is not a palindrome number ");
    }
    printf("the reversed number is: %d",i);
    return 0;

}