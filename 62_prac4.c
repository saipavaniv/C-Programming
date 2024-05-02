#include <stdio.h>

int factorial(int);

int main (void)
{
    int n;
    int yuva;
    printf("enter the number: \n");
    scanf("%d",&n);

    yuva=factorial(n);
    printf("the factorial of teh number is : %d ",yuva);
    return 0;

}
int factorial (int n)
{
    if (n==1)
    {
        printf("%d\n",n);
        return 1;
    }
    else 
    {
        printf("%d x",n);
        return (n*(factorial (n-1)));
    }
}

