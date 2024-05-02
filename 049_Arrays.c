#include <stdio.h>

int main(void)
{
    int iDigit[3]={0};
    printf("enter contents for idigit \n");
    for(int i = 0; i<3; i++)
    {
        scanf("%d",&iDigit[i]);
    }
    printf("contntts for i digit \n");
    for (int i =0;i<3;i++)
    {
        scanf("%d",iDigit[i]);
    }


    return 0;

}