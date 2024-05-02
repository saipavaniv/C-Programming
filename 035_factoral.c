#include <stdio.h>
int main (void)

{
    int i;
    int n;
    int fact=1;
    
    printf("enter the value of n ");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        fact*=i;
        i--;
    }

    printf("the factorial for the number=%d ", fact);
    return 0;
}