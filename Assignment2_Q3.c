/*Write a recursive function nr_Digits( ) which returns the number of digits of a given
integer number, and also at the same time prints the number in reverse. The number of
digits should be printed from the main function, but printing the number in reverse should
be handled by the recursive function.*/

#include <stdio.h>

int nr_digits(int n)
//recurssive function : this is count the digits and print the numbers in reverse 
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        printf("%d",n % 10);//to print the last digit 
        return 1 + nr_digits(n /10);// this will count the remaining digits and return the total count
    }
}

int main (void)
{
    int num;
    printf("enter the digits which are to be reversed:");// obtaining digits from the user 
    scanf("%d",&num);

    int count = nr_digits(num);//calling the function to count the digits and print them in reverse order 
    printf("\nthe number of digits are: %d", count);

    return 0;

}