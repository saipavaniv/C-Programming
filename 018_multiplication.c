//multiplication table of a number
#include <stdio.h>
int main (void)
{
    int i;
    int n;
    int m;

    printf("enter n: ");
    scanf("%d", &n);
    printf("enter m: ");
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {
        printf("\n %d*%d=%d",i,n,i*n);
    }
    return 0;

}