#include <stdio.h>

int addition (int*,int*);
int main (void)
{
    int num1, num2;
    printf("enter num1, num2");
    scanf("%d%d",&num1, &num2);

    addition(&num1, &num2);
    printf("value of num1: %d ", num1);
    printf("value of num2 :%d",num2);
    return 0;

}
int addition(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("value of x: %d", *x);
    printf("value of y :%d",*y);
    return 0;



}
