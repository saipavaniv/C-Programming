#include <stdio.h>
int main (void)
{
    int units;
    float amount;

    printf("enter the units consumed : ");
    scanf("%d", &units);

    if(units<=50)
    {
        amount=50*0.50;
    }
    else if(units<=150)
    {
        amount = 25+((units-50)*0.75);
    }
    else if (units <= 250)
    {
        amount = 100+((units-150)*1.2);

    }
    else 
    {
        amount = 220+((units - 250)*1.5);
    }
    printf("the amount to be paid for the units consumed is : %f \n", amount);
    return 0;

}