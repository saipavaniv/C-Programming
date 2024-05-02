//write a c program ot find out the maximum of two numbers using a funtion
#include <stdio.h>
int maximum (int, int);
int main (void)
{
    int x, y;

    printf("enter the value of x ");
    scanf("%d",&x);
    printf("enter the value of y ");
    scanf("%d",&y);
}

int maximum(int a, int b)
{
    if(a>b)
    {
        printf("the largest number is x %d");
    }
    else 
    {
        printf("the largest number is y %d");
    }
    return 0;
}