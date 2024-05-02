#include <stdio.h>
int main(void)
{
    int unit = 0;
    float amount = 0;
    printf("enter the number of units consumed");
    scanf("%d",&unit);
    printf("you have consumed %d units\n");
    if(unit <= 50)
    {
        amount = unit * 0.05;
    }
    else if (unit <= 150)
    {
        amount =50*0.50+(unit - 50)*0.75;
    }
    else if(unit <= 250)
    {
        amount = 50*0.5+100+0.75+(unit - 150)*1.20;
    }
    else 
    {
        amount = 50*0.50+100*0.75+100*1.20+(unit - 250)*1.50;
    
    }
    printf("amount without surcharge is %g\n", amount);
    return 0;
}