#include <stdio.h>
int addition(int*, int*);
int main(void)
{
    int n1;
    int n2;
    int result;
    
    printf("enter n1: ");
    scanf("%d",&n1);

    printf("enter n2: ");
    scanf("%d",&n2);

    int sum=addition(n1, n2);
    
    printf("the sum of 2 numbers are : %d ",sum);
    return 0;

    int addition(int *str_n1, int *str_n2)
    {
        int sum;
        sum = *str_n1 + *str_n2;
        return sum;
    }
    

}