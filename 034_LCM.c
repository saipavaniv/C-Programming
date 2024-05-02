//C program to check whether a number is perfect number or not
#include <stdio.h>
int main (void)
{
        int i;
int j;
int n, perfect;
int sum = 0;
int result = 0;

printf("enter the number :");
scanf("%d",&n); 

for(i=1;i<=n;i++)
{
    for(j=1;j<=n-2;n%j==0)
    {
        sum+=j;
    }
}
if(n%sum==0)
printf("it is a perfect number : ");
else 
{
    printf("it is not a perfect number :");
}
return 0;
}