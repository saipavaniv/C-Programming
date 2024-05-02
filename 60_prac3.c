#include <stdio.h>

int fibonaccic(int);
int main (void)
{
    int n;
    int answer;
    printf("enter the nth term in the fibonaccic series");
    scanf("%d",&n);

    answer=fibonaccic(n);
    printf("%d",answer);
    return 0;
}
int fibonaccic (int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }
    else 
    {
        return (fibonaccic(n-2)+fibonaccic(n-1));
    }
}