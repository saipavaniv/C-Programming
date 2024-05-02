//Write a C program to find LCM of two numbers.
#include <stdio.h>
 int main (void)
 {
    int a;
    int b;
    int c;
    int i;
    int lcm=1;
    printf("Enter a no1: ");
    scanf("%d",&a);
    printf("Enter a no2: ");
    scanf("%d",&b);
    if (a>b)
     c=a;
    else
     c=b;
    for(i=1;i<=c;i++)
    {
        if (i%a==0 && i%b==0)
        {
         lcm=i;
        }
        i+=c;
    } 
    printf("LCM=%d",lcm);
 }