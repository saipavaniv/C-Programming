#include <stdio.h>
int main (void)
{
    int a=0;
    int b=0;
    
    printf("enter the value of a: ");
    scanf("%d",&a);

     printf("enter the value of b: ");
    scanf("%d",&b);

    int sum = a+b;
    printf("the sum of theb two digits is : %d",sum);

    return 0;
}