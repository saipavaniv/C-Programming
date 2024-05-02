//Write a C program to enter two numbers and find their sum.
#include <stdio.h>
int main(void)
{
    int num1,num2,sum;

    //inputting values from user
    printf("input any number: \n");
    scanf("%d", &num1);
    printf("input any number: \n");
    scanf("%d", &num2);
    sum = num1 +num2;


    printf("answer : %d", sum);

    return 0;

}