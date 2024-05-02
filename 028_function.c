//even or odd using functions
#include <stdio.h>
float evenorodd (int);

int main (void)
{
    int x;

    printf("enter a number");
    scanf("%d", &x);
    
    evenorodd(x);
}

float evenorodd(int num)
{
    if(num%2==0)
    {
        printf("it is even : %d", num);
    }
    else 
    {
        printf("it is odd : %d", num);
    }
    return 0;

}