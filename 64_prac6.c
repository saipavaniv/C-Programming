#include <stdio.h>
#include <math.h>
int chechODD(int);
int main (void)
{
    int number[5] = {0};
    for(int i=0;i<5;i++)
    {
        printf("enter the 5 integers");
        scanf("%d",&number[i]);
        int squares = pow(number[i],2);
    }

   

}
int chechODD(int number)
{
    if (number % 2 !=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
