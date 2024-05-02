//Write a C program to add two numbers using pointers.
#include <stdio.h>
int main(void)
{
    int num1=0;
    int num2=0;
    int sum= 0;

    printf("enter the value of num1 : ");
    scanf("%d",&num1);

    printf("enter the value of num2 : ");
    scanf("%d",&num2);

    int *ptr_1= &num1;
    int *ptr_2= &num2;

    

    sum= (*ptr_1) + (*ptr_2);

    printf("the sum of the 2 numbers : %d",sum);


}