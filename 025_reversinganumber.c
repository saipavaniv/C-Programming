#include <stdio.h>
int main(void)
{
    int n;
    int remainder=0;
    int rev=0;
    int duplicate=0;
    printf("enter the value of n : ");
    scanf("%d", &n);
    duplicate=n;

    for(;n!=0;n=n/10)
    {
        remainder=n%10;
        rev=(rev*10)+remainder;
    }
    if (duplicate==rev)
    {
        printf("it is palindrome");

    }
    else
    {
        printf("it is not a palindrome number ");
    }

   
    return 0;
}