//Write a C program to print all even numbers between 1 to 100. (while/for loop)

#include <stdio.h>
int main(void)
{
    int i;

    for(i=1;i<+100;i+=2)
    {
        printf("%d \n",i);

    }
    return 0;
}