#include <stdio.h>

int sum(int);

int main (void)
{
    int n;
    int final;
    printf("enter a num that is to be summed up: ");
    scanf("%d",&n);

    final=sum(n);
    printf("the answer: %d ",final);
    return 0;
}

int sum (int n)
{
    if(n==0)
    return 0;

else 
{
    return ((n%10)+(sum(n/10)));

}

}