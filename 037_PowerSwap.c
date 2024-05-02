//Write a C program to swap two numbers using pointers.
#include <stdio.h>
int main(void)
{
    int num1;
    int num2;
    int temp;
    
    printf("enter a num1 ");
    scanf("%d", &num1);

    printf("enter a num2 ");
    scanf("%d", &num2);

    int *ptr_n1 = &num1;
    int *ptr_n2 = &num2;

    temp = *ptr_n1;
    *ptr_n1 =*ptr_n2;
    *ptr_n2 = temp;

    printf("num1 = %d, num2 = %d ", *ptr_n1,*ptr_n2);

    return 0;


}